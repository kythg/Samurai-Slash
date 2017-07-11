template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; template <> void RegisterClass<GUITexture>();
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; template <> void RegisterClass<Joint2D>();
class AnchoredJoint2D; template <> void RegisterClass<AnchoredJoint2D>();
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; template <> void RegisterClass<HingeJoint2D>();
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; template <> void RegisterClass<WheelJoint2D>();
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; 
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; 
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; template <> void RegisterClass<WheelCollider>();
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; 
class SpriteRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; template <> void RegisterClass<Flare>();
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 95 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. RenderSettings
	RegisterClass<RenderSettings>();
	//6. LevelGameManager
	RegisterClass<LevelGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. QualitySettings
	RegisterClass<QualitySettings>();
	//9. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//10. MeshFilter
	RegisterClass<MeshFilter>();
	//11. Renderer
	RegisterClass<Renderer>();
	//12. Skybox
	RegisterClass<Skybox>();
	//13. GUIElement
	RegisterClass<GUIElement>();
	//14. GUITexture
	RegisterClass<GUITexture>();
	//15. GUILayer
	RegisterClass<GUILayer>();
	//16. Light
	RegisterClass<Light>();
	//17. Mesh
	RegisterClass<Mesh>();
	//18. NamedObject
	RegisterClass<NamedObject>();
	//19. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//20. NetworkView
	RegisterClass<NetworkView>();
	//21. Shader
	RegisterClass<Shader>();
	//22. Material
	RegisterClass<Material>();
	//23. Sprite
	RegisterClass<Sprite>();
	//24. Texture
	RegisterClass<Texture>();
	//25. Texture2D
	RegisterClass<Texture2D>();
	//26. Texture3D
	RegisterClass<Texture3D>();
	//27. RenderTexture
	RegisterClass<RenderTexture>();
	//28. Transform
	RegisterClass<Transform>();
	//29. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//30. ParticleSystem
	RegisterClass<ParticleSystem>();
	//31. Rigidbody
	RegisterClass<Rigidbody>();
	//32. Unity::Joint
	RegisterClass<Unity::Joint>();
	//33. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//34. Collider
	RegisterClass<Collider>();
	//35. SphereCollider
	RegisterClass<SphereCollider>();
	//36. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//37. CharacterController
	RegisterClass<CharacterController>();
	//38. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//39. Collider2D
	RegisterClass<Collider2D>();
	//40. Joint2D
	RegisterClass<Joint2D>();
	//41. HingeJoint2D
	RegisterClass<HingeJoint2D>();
	//42. AnchoredJoint2D
	RegisterClass<AnchoredJoint2D>();
	//43. WheelJoint2D
	RegisterClass<WheelJoint2D>();
	//44. WheelCollider
	RegisterClass<WheelCollider>();
	//45. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//46. AudioClip
	RegisterClass<AudioClip>();
	//47. SampleClip
	RegisterClass<SampleClip>();
	//48. AudioListener
	RegisterClass<AudioListener>();
	//49. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//50. AudioSource
	RegisterClass<AudioSource>();
	//51. AnimationClip
	RegisterClass<AnimationClip>();
	//52. Motion
	RegisterClass<Motion>();
	//53. Animation
	RegisterClass<Animation>();
	//54. Animator
	RegisterClass<Animator>();
	//55. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//56. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//57. UI::Canvas
	RegisterClass<UI::Canvas>();
	//58. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//59. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//60. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//61. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//62. Flare
	RegisterClass<Flare>();
	//63. TrailRenderer
	RegisterClass<TrailRenderer>();
	//64. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//65. FlareLayer
	RegisterClass<FlareLayer>();
	//66. PreloadData
	RegisterClass<PreloadData>();
	//67. Cubemap
	RegisterClass<Cubemap>();
	//68. Texture2DArray
	RegisterClass<Texture2DArray>();
	//69. MeshRenderer
	RegisterClass<MeshRenderer>();
	//70. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//71. TimeManager
	RegisterClass<TimeManager>();
	//72. AudioManager
	RegisterClass<AudioManager>();
	//73. InputManager
	RegisterClass<InputManager>();
	//74. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//75. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//76. TextAsset
	RegisterClass<TextAsset>();
	//77. PhysicsManager
	RegisterClass<PhysicsManager>();
	//78. TagManager
	RegisterClass<TagManager>();
	//79. ScriptMapper
	RegisterClass<ScriptMapper>();
	//80. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//81. MonoScript
	RegisterClass<MonoScript>();
	//82. MonoManager
	RegisterClass<MonoManager>();
	//83. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//84. PlayerSettings
	RegisterClass<PlayerSettings>();
	//85. BuildSettings
	RegisterClass<BuildSettings>();
	//86. ResourceManager
	RegisterClass<ResourceManager>();
	//87. NetworkManager
	RegisterClass<NetworkManager>();
	//88. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//89. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//90. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//91. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//92. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//93. LightmapSettings
	RegisterClass<LightmapSettings>();
	//94. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
