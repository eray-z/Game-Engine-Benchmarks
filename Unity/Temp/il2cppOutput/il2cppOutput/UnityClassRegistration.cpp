struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 51 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//5. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//6. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//7. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//8. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//9. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//10. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//11. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//12. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//13. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//14. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//15. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//19. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//22. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//23. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//24. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//25. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//26. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//27. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//28. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//29. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//30. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//31. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//32. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//33. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//34. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//35. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//36. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//37. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//38. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//39. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//40. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//41. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//42. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//43. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//44. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//45. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//46. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//47. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//48. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//49. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//50. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
