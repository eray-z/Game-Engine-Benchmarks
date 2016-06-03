using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BunnyObj{
	private float _vx,_vy;
	public float vx{
		get{return _vx;}
		set{_vx=value;}
	} 
	public float vy{
		get{return _vy;}
		set{_vy=value;}
	} 
	public GameObject bunny;
}
public class BenchmarkTest : MonoBehaviour {

	// Use this for initialization
	List<BunnyObj> allOfBunnyObjects;
	public float minX,minY,maxX,maxY;
	GameObject bunny;
	void Awake() {
        Application.targetFrameRate = 60;
    }

	void Start () {
		allOfBunnyObjects=new List<BunnyObj>();
		Sprite bunnySprite=Resources.Load<Sprite>("Sprites/wabbit_alpha") ;

		bunny=new GameObject();
		SpriteRenderer sr=bunny.AddComponent<SpriteRenderer>();
		sr.sprite=bunnySprite;


		minX=Camera.main.transform.position.x-getScreenSize().x/2+bunnySprite.bounds.size.x;
		minY=Camera.main.transform.position.y-getScreenSize().y/2+bunnySprite.bounds.size.y;
		maxX=Camera.main.transform.position.x+getScreenSize().x/2-bunnySprite.bounds.size.x;
		maxY=Camera.main.transform.position.y+getScreenSize().y/2-bunnySprite.bounds.size.y;

		Debug.Log(maxY);
		
	}

	// Update is called once per frame
	void Update () {

		
	    for(int i=0;i<allOfBunnyObjects.Count;i++){
	    	BunnyObj nBunny=allOfBunnyObjects[i];
	        float n_posX=nBunny.bunny.transform.position.x+nBunny.vx;
			float n_posY=nBunny.bunny.transform.position.y+nBunny.vy;
	        if(n_posX<minX || n_posX>maxX){
		        nBunny.vx=-nBunny.vx;
	        }
	        if(n_posY<minY || n_posY>maxY){
	            nBunny.vy=-nBunny.vy;
	        }
			nBunny.bunny.transform.position=new Vector2(nBunny.bunny.transform.position.x+nBunny.vx,nBunny.bunny.transform.position.y+nBunny.vy);
	        
	    }


		for (int i = 0; i < Input.touchCount; ++i) {
            if (Input.GetTouch(i).phase == TouchPhase.Ended)
                more100Bunny();
        }
        /*
		if (Input.GetMouseButtonDown(0))
            more100Bunny();
        */
	}
	void more100Bunny(){
		for(int i=0;i<100;i++){
			BunnyObj bObj=new BunnyObj();
			bObj.bunny=(GameObject)Instantiate(bunny);
			bObj.bunny.transform.position=new Vector2(Random.Range(minX,maxX),Random.Range(minY,maxY));
			Debug.Log(Random.Range(minX,maxX));
			bObj.vx=Random.Range(-0.1f, 0.1f);
			bObj.vy=Random.Range(-0.1f, 0.1f);			
			allOfBunnyObjects.Add(bObj);
		}
	}
	float pixelToWorld(float pixel){
		Camera cam=Camera.main.GetComponent<Camera>();
		float ortho=cam.orthographicSize;
		float ratio=(ortho*2)/cam.pixelHeight;
		return ratio*pixel;
	}
	Vector2 getScreenSize(){
		Camera camera=Camera.main.GetComponent<Camera>();
		float width=pixelToWorld(Screen.width);
		float height=pixelToWorld(Screen.height);
		return new Vector2(width,height);
	}
	void OnGUI()
	{
		int w = Screen.width, h = Screen.height;
 
		GUIStyle style = new GUIStyle();
 
		Rect rect = new Rect(0, 0, w, h * 2 / 50);
		style.alignment = TextAnchor.LowerRight;
		style.fontSize = h * 2 / 50;
		style.normal.textColor = new Color (1.0f, 1.0f, 1.0f, 1.0f);
		string text = string.Format("Bunny Count: {0:000} ",allOfBunnyObjects.Count);
		GUI.Label(rect, text, style);
	}
}

