#pragma once

// Wrath Dumper
// Roblox Version : version-4ea8e85481e34f46
// Build Stamp    : 0x24D48AF  Image Size : 0x94C2000
// Total Offsets  : 498
// Generated      : 2026-11-11 19:10:07
// Dump Time      : 5.91 seconds

#include <cstdint>
#include <string>

namespace Offsets {
    inline std::string ClientVersion = "version-4ea8e85481e34f46";

    namespace AirProperties {
        inline constexpr uintptr_t AirDensity = 0x38;
        inline constexpr uintptr_t GlobalWind = 0x5C;
    }

    namespace AnimationTrack {
        inline constexpr uintptr_t Animation = 0xA0;
        inline constexpr uintptr_t Animator = 0xF8;
        inline constexpr uintptr_t Clip = 0x160;
        inline constexpr uintptr_t IsPlaying = 0xCC;
        inline constexpr uintptr_t Looped = 0xCD;
        inline constexpr uintptr_t LoopedSet = 0xA11;
        inline constexpr uintptr_t Speed = 0xBC;
        inline constexpr uintptr_t TimePosition = 0xC0;
    }

    namespace Animator {
        inline constexpr uintptr_t ActiveAnimations = 0x920;
    }

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xA0;
        inline constexpr uintptr_t Decay = 0xAC;
        inline constexpr uintptr_t Density = 0xB8;
        inline constexpr uintptr_t Glare = 0xBC;
        inline constexpr uintptr_t Haze = 0xC0;
        inline constexpr uintptr_t Offset = 0xC4;
    }

    namespace Attachment {
        inline constexpr uintptr_t Position = 0xAC;
    }

    namespace AttributeStorage {
        inline constexpr uintptr_t ArrayBegin = 0x8;
        inline constexpr uintptr_t Count = 0x10;
        inline constexpr uintptr_t EntryKeyObject = 0x0;
        inline constexpr uintptr_t EntrySize = 0x58;
        inline constexpr uintptr_t EntryTypePtr1 = 0x8;
        inline constexpr uintptr_t EntryTypePtr2 = 0x10;
        inline constexpr uintptr_t EntryValue = 0x18;
        inline constexpr uintptr_t KeyCapacity = 0x18;
        inline constexpr uintptr_t KeyChars = 0x0;
        inline constexpr uintptr_t KeyLength = 0x10;
        inline constexpr uintptr_t MaxNameLength = 0x32;
        inline constexpr uintptr_t MaxRealAttributes = 0x40;
        inline constexpr uintptr_t Mode = 0x0;
        inline constexpr uintptr_t TypeRvaBool = 0x8F02E80;
        inline constexpr uintptr_t TypeRvaColor3 = 0x8F032E0;
        inline constexpr uintptr_t TypeRvaDouble = 0x8F02FC0;
        inline constexpr uintptr_t TypeRvaFloat = 0x8F02ED0;
        inline constexpr uintptr_t TypeRvaString = 0x8F03010;
        inline constexpr uintptr_t TypeRvaVector3 = 0x8F03060;
    }

    namespace BasePart {
        inline constexpr uintptr_t CastShadow = 0x120;
        inline constexpr uintptr_t Color3 = 0x11C;
        inline constexpr uintptr_t Locked = 0x121;
        inline constexpr uintptr_t Massless = 0x122;
        inline constexpr uintptr_t Primitive = 0x178;
        inline constexpr uintptr_t Reflectance = 0xF4;
        inline constexpr uintptr_t Shape = 0x1A0;
        inline constexpr uintptr_t Transparency = 0x118;
    }

    namespace Beam {
        inline constexpr uintptr_t Attachment0 = 0x148;
        inline constexpr uintptr_t Attachment1 = 0x158;
        inline constexpr uintptr_t Brightness = 0x168;
        inline constexpr uintptr_t CurveSize0 = 0x16C;
        inline constexpr uintptr_t CurveSize1 = 0x170;
        inline constexpr uintptr_t LightEmission = 0x174;
        inline constexpr uintptr_t LightInfluence = 0x178;
        inline constexpr uintptr_t Texture = 0x128;
        inline constexpr uintptr_t TextureLength = 0x184;
        inline constexpr uintptr_t TextureSpeed = 0x18C;
        inline constexpr uintptr_t Width0 = 0x190;
        inline constexpr uintptr_t Width1 = 0x194;
        inline constexpr uintptr_t ZOffset = 0x198;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Enabled = 0x98;
        inline constexpr uintptr_t Intensity = 0xA0;
        inline constexpr uintptr_t Size = 0xA4;
        inline constexpr uintptr_t Threshold = 0xA8;
    }

    namespace BlurEffect {
        inline constexpr uintptr_t Enabled = 0x98;
        inline constexpr uintptr_t Size = 0xA0;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x18;
        inline constexpr uintptr_t Size = 0x28;
    }

    namespace Camera {
        inline constexpr uintptr_t CameraSubject = 0xB0;
        inline constexpr uintptr_t CameraType = 0x120;
        inline constexpr uintptr_t FieldOfView = 0x128;
        inline constexpr uintptr_t ImagePlaneDepth = 0x2D4;
        inline constexpr uintptr_t Position = 0xE4;
        inline constexpr uintptr_t Rotation = 0xC0;
        inline constexpr uintptr_t Viewport = 0x284;
        inline constexpr uintptr_t ViewportSize = 0x2C4;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0xB0;
        inline constexpr uintptr_t BodyPart = 0x130;
        inline constexpr uintptr_t MeshId = 0xE0;
        inline constexpr uintptr_t OverlayTextureId = 0x110;
    }

    namespace ClickDetector {
        inline constexpr uintptr_t MaxActivationDistance = 0xD0;
        inline constexpr uintptr_t MouseIcon = 0xB0;
    }

    namespace ClientBuild {
        inline constexpr uintptr_t ImageSize = 0x94C2000;
        inline constexpr uintptr_t Timestamp = 0x24D48AF;
    }

    namespace Clothing {
        inline constexpr uintptr_t Color3 = 0x108;
        inline constexpr uintptr_t Template = 0xE8;
    }

    namespace ColorCorrectionEffect {
        inline constexpr uintptr_t Brightness = 0xAC;
        inline constexpr uintptr_t Contrast = 0xB0;
        inline constexpr uintptr_t Enabled = 0x98;
        inline constexpr uintptr_t TintColor = 0xA0;
    }

    namespace ColorGradingEffect {
        inline constexpr uintptr_t Enabled = 0x98;
        inline constexpr uintptr_t TonemapperPreset = 0xA0;
    }

    namespace ComponentMap {
        inline constexpr uintptr_t Begin = 0x0;
        inline constexpr uintptr_t CapacityEnd = 0x10;
        inline constexpr uintptr_t End = 0x8;
        inline constexpr uintptr_t EntryComponent = 0x0;
        inline constexpr uintptr_t EntrySize = 0x10;
        inline constexpr uintptr_t EntryTag = 0x8;
        inline constexpr uintptr_t Overflow = 0x18;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x190;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x5B8;
        inline constexpr uintptr_t JobId = 0x108;
        inline constexpr uintptr_t PlaceId = 0x1A0;
        inline constexpr uintptr_t PlaceVersion = 0x1BC;
        inline constexpr uintptr_t PrimitiveCount = 0x430;
        inline constexpr uintptr_t ScriptContext = 0x460;
        inline constexpr uintptr_t ServerIP = 0x5A0;
        inline constexpr uintptr_t ToRenderView1 = 0x1D8;
        inline constexpr uintptr_t ToRenderView2 = 0x8;
        inline constexpr uintptr_t ToRenderView3 = 0x28;
        inline constexpr uintptr_t Workspace = 0x168;
    }

    namespace DepthOfFieldEffect {
        inline constexpr uintptr_t Enabled = 0x98;
        inline constexpr uintptr_t FarIntensity = 0xA0;
        inline constexpr uintptr_t FocusDistance = 0xA4;
        inline constexpr uintptr_t InFocusRadius = 0xA8;
        inline constexpr uintptr_t NearIntensity = 0xAC;
    }

    namespace DragDetector {
        inline constexpr uintptr_t ActivatedCursorIcon = 0x188;
        inline constexpr uintptr_t CursorIcon = 0xB0;
        inline constexpr uintptr_t MaxActivationDistance = 0xD0;
        inline constexpr uintptr_t MaxDragAngle = 0x270;
        inline constexpr uintptr_t MaxDragTranslation = 0x234;
        inline constexpr uintptr_t MaxForce = 0x274;
        inline constexpr uintptr_t MaxTorque = 0x278;
        inline constexpr uintptr_t MinDragAngle = 0x27C;
        inline constexpr uintptr_t MinDragTranslation = 0x240;
        inline constexpr uintptr_t ReferenceInstance = 0x1B8;
        inline constexpr uintptr_t Responsiveness = 0x288;
    }

    namespace EngineChams {
        inline constexpr uintptr_t BBoxMaxX = 0xA4;
        inline constexpr uintptr_t BBoxMaxY = 0xA8;
        inline constexpr uintptr_t BBoxMaxZ = 0xAC;
        inline constexpr uintptr_t BBoxMinX = 0x98;
        inline constexpr uintptr_t BBoxMinY = 0x9C;
        inline constexpr uintptr_t BBoxMinZ = 0xA0;
        inline constexpr uintptr_t ColorData = 0x24;
        inline constexpr uintptr_t FastClusterVTableRva = 0x72057F0;
        inline constexpr uintptr_t FillModeByte = 0x11;
        inline constexpr uintptr_t Flags2 = 0x20;
        inline constexpr uintptr_t MatFlags = 0x18;
        inline constexpr uintptr_t MaterialStride = 0x88;
        inline constexpr uintptr_t Param = 0x1C;
        inline constexpr uintptr_t RenderQueueId = 0x10;
        inline constexpr uintptr_t TechniqueArrayPtr = 0x70;
        inline constexpr uintptr_t TechniqueBegin = 0x0;
        inline constexpr uintptr_t TechniqueEnd = 0x8;
    }

    namespace FFlagOffsets {
        inline constexpr uintptr_t FFlagList = 0x865E868;
        inline constexpr uintptr_t FlagToValue = 0x20;
        inline constexpr uintptr_t ValueGetSet = 0x30;
    }

    namespace FFlags {
        inline constexpr uintptr_t GameNetCompressionLodByteBudgetThresholdPct = 0x82756C8;
        inline constexpr uintptr_t NextGenReplicatorEnabledWrite4 = 0x8234640;
        inline constexpr uintptr_t PhysicsSenderMaxBandwidthBps = 0x82744A8;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x8F8E968;
        inline constexpr uintptr_t RealDataModel = 0x1F8;
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0xF4;
        inline constexpr uintptr_t AbsoluteRotation = 0xD0;
        inline constexpr uintptr_t AbsoluteSize = 0xFC;
    }

    namespace GuiObject {
        inline constexpr uintptr_t BackgroundColor3 = 0x2D8;
        inline constexpr uintptr_t BackgroundTransparency = 0x2FC;
        inline constexpr uintptr_t BorderColor3 = 0x2E4;
        inline constexpr uintptr_t Image = 0x9A8;
        inline constexpr uintptr_t LayoutOrder = 0x314;
        inline constexpr uintptr_t Position = 0x2A8;
        inline constexpr uintptr_t RichText = 0xB1D;
        inline constexpr uintptr_t Rotation = 0x32C;
        inline constexpr uintptr_t ScreenGui_Enabled = 0x260;
        inline constexpr uintptr_t Size = 0x2C8;
        inline constexpr uintptr_t Text = 0xAB0;
        inline constexpr uintptr_t TextColor3 = 0xAE0;
        inline constexpr uintptr_t Visible = 0x345;
        inline constexpr uintptr_t ZIndex = 0x33C;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1CC;
        inline constexpr uintptr_t AutoRotate = 0x1CD;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1CE;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1D0;
        inline constexpr uintptr_t CameraOffset = 0x110;
        inline constexpr uintptr_t DisplayDistanceType = 0x174;
        inline constexpr uintptr_t DisplayName = 0xA0;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1D1;
        inline constexpr uintptr_t FloorMaterial = 0x178;
        inline constexpr uintptr_t Health = 0x184;
        inline constexpr uintptr_t HealthDisplayDistance = 0x17C;
        inline constexpr uintptr_t HealthDisplayType = 0x180;
        inline constexpr uintptr_t HipHeight = 0x188;
        inline constexpr uintptr_t HumanoidRootPart = 0x5C8;
        inline constexpr uintptr_t HumanoidState = 0x8B0;
        inline constexpr uintptr_t HumanoidStateID = 0x20;
        inline constexpr uintptr_t IsWalking = 0xA36;
        inline constexpr uintptr_t Jump = 0x1D4;
        inline constexpr uintptr_t JumpHeight = 0x198;
        inline constexpr uintptr_t JumpPower = 0x19C;
        inline constexpr uintptr_t MaxHealth = 0x1A0;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1A4;
        inline constexpr uintptr_t MoveDirection = 0x134;
        inline constexpr uintptr_t MoveToPart = 0x100;
        inline constexpr uintptr_t MoveToPoint = 0x158;
        inline constexpr uintptr_t NameDisplayDistance = 0x1A8;
        inline constexpr uintptr_t NameOcclusion = 0x1AC;
        inline constexpr uintptr_t PlatformStand = 0x1D6;
        inline constexpr uintptr_t PlatformStatePointer = 0x5812427;
        inline constexpr uintptr_t RequiresNeck = 0x1D7;
        inline constexpr uintptr_t RigType = 0x1B8;
        inline constexpr uintptr_t SeatPart = 0xF0;
        inline constexpr uintptr_t Sit = 0x1D8;
        inline constexpr uintptr_t TargetPoint = 0x140;
        inline constexpr uintptr_t UseJumpPower = 0x1DA;
        inline constexpr uintptr_t WalkTimer = 0x3F0;
        inline constexpr uintptr_t Walkspeed = 0x1C8;
        inline constexpr uintptr_t WalkspeedCheck = 0x3A4;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x70;
        inline constexpr uintptr_t ClassBase = 0x1B0;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t ComponentMap = 0x38;
        inline constexpr uintptr_t Name = 0x0;
        inline constexpr uintptr_t NameContainer = 0x68;
        inline constexpr uintptr_t Parent = 0x60;
        inline constexpr uintptr_t This = 0x8;
    }

    namespace KeyframeSequence {
        inline constexpr uintptr_t Loop = 0xB4;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xB8;
        inline constexpr uintptr_t Brightness = 0x100;
        inline constexpr uintptr_t ClockTime = 0xB0;
        inline constexpr uintptr_t ColorShift_Bottom = 0xC4;
        inline constexpr uintptr_t ColorShift_Top = 0xD0;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x104;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x108;
        inline constexpr uintptr_t ExposureCompensation = 0x10C;
        inline constexpr uintptr_t FogColor = 0xDC;
        inline constexpr uintptr_t FogEnd = 0x114;
        inline constexpr uintptr_t FogStart = 0x118;
        inline constexpr uintptr_t GeographicLatitude = 0x11C;
        inline constexpr uintptr_t GlobalShadows = 0x12C;
        inline constexpr uintptr_t GradientBottom = 0x178;
        inline constexpr uintptr_t GradientTop = 0x138;
        inline constexpr uintptr_t LightColor = 0x144;
        inline constexpr uintptr_t LightDirection = 0x150;
        inline constexpr uintptr_t MoonPosition = 0x16C;
        inline constexpr uintptr_t OutdoorAmbient = 0xE8;
        inline constexpr uintptr_t Sky = 0x1B0;
        inline constexpr uintptr_t Source = 0x15C;
        inline constexpr uintptr_t SunPosition = 0x160;
    }

    namespace LinearVelocity {
        inline constexpr uintptr_t VectorVelocity = 0x22C;
    }

    namespace LocalScript {
        inline constexpr uintptr_t ByteCode = 0x178;
        inline constexpr uintptr_t GUID = 0xB8;
        inline constexpr uintptr_t Hash = 0x188;
    }

    namespace LuauVm {
        inline constexpr uintptr_t GcTt = 0x1;
        inline constexpr uintptr_t GlobalPages = 0xA8;
        inline constexpr uintptr_t NodeKey = 0x10;
        inline constexpr uintptr_t NodeKeyTt = 0xC;
        inline constexpr uintptr_t NodeStride = 0x20;
        inline constexpr uintptr_t NodeValTt = 0xC;
        inline constexpr uintptr_t PageBlockSize = 0x24;
        inline constexpr uintptr_t PageSize = 0x20;
        inline constexpr uintptr_t StateGlobal = 0x50;
        inline constexpr uintptr_t StateGt = 0x10;
        inline constexpr uintptr_t StateSlot = 0x210;
        inline constexpr uintptr_t StateVariant = 0x1;
        inline constexpr uintptr_t StrtHash = 0x50;
        inline constexpr uintptr_t StrtNuse = 0x44;
        inline constexpr uintptr_t StrtSize = 0x48;
        inline constexpr uintptr_t TStringData = 0x18;
        inline constexpr uintptr_t TStringLen = 0x14;
        inline constexpr uintptr_t TStringNext = 0x8;
        inline constexpr uintptr_t TableLsizenode = 0x7;
        inline constexpr uintptr_t TableNode = 0x20;
        inline constexpr uintptr_t TagString = 0x6;
        inline constexpr uintptr_t TagTable = 0x7;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xF;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xC;
        inline constexpr uintptr_t CrackedLava = 0x2D;
        inline constexpr uintptr_t Glacier = 0x1B;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2A;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3F;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3C;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1E;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MeshContentProvider {
        inline constexpr uintptr_t AssetID = 0x10;
        inline constexpr uintptr_t Cache = 0xC0;
        inline constexpr uintptr_t LRUCache = 0x20;
        inline constexpr uintptr_t MeshData = 0x40;
        inline constexpr uintptr_t ToMeshData = 0x40;
    }

    namespace MeshData {
        inline constexpr uintptr_t FaceEnd = 0x38;
        inline constexpr uintptr_t FaceStart = 0x30;
        inline constexpr uintptr_t VertexEnd = 0x8;
        inline constexpr uintptr_t VertexStart = 0x0;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x2F8;
        inline constexpr uintptr_t Texture = 0x328;
    }

    namespace Misc {
        inline constexpr uintptr_t Adornee = 0xD8;
        inline constexpr uintptr_t AnimationId = 0xA8;
        inline constexpr uintptr_t StringLength = 0x10;
        inline constexpr uintptr_t Value = 0xA0;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x240;
        inline constexpr uintptr_t Scale = 0x12C;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t ByteCode = 0x120;
        inline constexpr uintptr_t GUID = 0xB8;
        inline constexpr uintptr_t Hash = 0x348;
        inline constexpr uintptr_t IsCoreScript = 0x0;
    }

    namespace Motor6D {
        inline constexpr uintptr_t ChildName = 0x110;
        inline constexpr uintptr_t ParentName = 0x100;
        inline constexpr uintptr_t Transform = 0x128;
        inline constexpr uintptr_t TransformObject = 0x168;
        inline constexpr uintptr_t TransformPosition = 0x138;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0xD8;
        inline constexpr uintptr_t InputObject2 = 0xE8;
        inline constexpr uintptr_t MousePosition = 0xAC;
        inline constexpr uintptr_t SensitivityPointer = 0x0;
    }

    namespace ParticleEmitter {
        inline constexpr uintptr_t Acceleration = 0x1C8;
        inline constexpr uintptr_t Brightness = 0x204;
        inline constexpr uintptr_t Drag = 0x208;
        inline constexpr uintptr_t Lifetime = 0x1DC;
        inline constexpr uintptr_t LightEmission = 0x220;
        inline constexpr uintptr_t LightInfluence = 0x224;
        inline constexpr uintptr_t Rate = 0x230;
        inline constexpr uintptr_t RotSpeed = 0x1E4;
        inline constexpr uintptr_t Rotation = 0x1EC;
        inline constexpr uintptr_t Speed = 0x1F4;
        inline constexpr uintptr_t SpreadAngle = 0x1FC;
        inline constexpr uintptr_t Texture = 0x1A8;
        inline constexpr uintptr_t TimeScale = 0x244;
        inline constexpr uintptr_t VelocityInheritance = 0x248;
        inline constexpr uintptr_t ZOffset = 0x24C;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x364;
        inline constexpr uintptr_t CameraMode = 0x378;
        inline constexpr uintptr_t DisplayName = 0x120;
        inline constexpr uintptr_t HealthDisplayDistance = 0x3A0;
        inline constexpr uintptr_t LocalPlayer = 0x118;
        inline constexpr uintptr_t LocaleId = 0x740;
        inline constexpr uintptr_t MaxZoomDistance = 0x370;
        inline constexpr uintptr_t MinZoomDistance = 0x374;
        inline constexpr uintptr_t ModelInstance = 0x2A0;
        inline constexpr uintptr_t Mouse = 0x11F0;
        inline constexpr uintptr_t NameDisplayDistance = 0x3B0;
        inline constexpr uintptr_t Team = 0x2E0;
        inline constexpr uintptr_t TeamColor = 0x3B8;
        inline constexpr uintptr_t UserId = 0x318;
    }

    namespace PlayerConfigurer {
        inline constexpr uintptr_t Pointer = 0x8E58728;
    }

    namespace PlayerMouse {
        inline constexpr uintptr_t Icon = 0xB0;
        inline constexpr uintptr_t Workspace = 0x138;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xEC;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xE0;
        inline constexpr uintptr_t Flags = 0x1BE;
        inline constexpr uintptr_t Material = 0x24E;
        inline constexpr uintptr_t Owner = 0x218;
        inline constexpr uintptr_t Position = 0xD4;
        inline constexpr uintptr_t Rotation = 0xB0;
        inline constexpr uintptr_t Size = 0x1C4;
        inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanQuery = 0x20;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0x98;
        inline constexpr uintptr_t Enabled = 0x11E;
        inline constexpr uintptr_t GamepadKeyCode = 0x104;
        inline constexpr uintptr_t HoldDuration = 0x108;
        inline constexpr uintptr_t KeyCode = 0x10C;
        inline constexpr uintptr_t MaxActivationDistance = 0x110;
        inline constexpr uintptr_t ObjectText = 0xB8;
        inline constexpr uintptr_t RequiresLineOfSight = 0x11F;
    }

    namespace RaycastSilentAim {
        inline constexpr uintptr_t DescriptorBoundFnOffset = 0xB0;
        inline constexpr uintptr_t DescriptorNamePtrOffset = 0x8;
        inline constexpr uintptr_t FindPartOnRayDescriptorRva = 0x870BBE0;
        inline constexpr uintptr_t FindPartOnRayWithIgnoreListDescriptorRva = 0x870BCC0;
        inline constexpr uintptr_t FindPartOnRayWithWhitelistDescriptorRva = 0x870BDA0;
        inline constexpr uintptr_t RaycastDescriptorRva = 0x870B040;
    }

    namespace RenderJob {
        inline constexpr uintptr_t FakeDataModel = 0x198;
        inline constexpr uintptr_t RealDataModel = 0x1F0;
        inline constexpr uintptr_t RenderView = 0x1E0;
    }

    namespace RenderView {
        inline constexpr uintptr_t DeviceD3D11 = 0x10;
        inline constexpr uintptr_t LightingValid = 0x278;
        inline constexpr uintptr_t SkyValid = 0x4BD;
        inline constexpr uintptr_t VisualEngine = 0x20;
    }

    namespace RunService {
        inline constexpr uintptr_t HeartbeatFPS = 0x88;
        inline constexpr uintptr_t HeartbeatTask = 0xD8;
    }

    namespace Script {
        inline constexpr uintptr_t ByteCode = 0x178;
        inline constexpr uintptr_t GUID = 0xB8;
        inline constexpr uintptr_t Hash = 0x188;
    }

    namespace ScriptContext {
        inline constexpr uintptr_t RequireBypass = 0x0;
    }

    namespace Seat {
        inline constexpr uintptr_t Occupant = 0x200;
    }

    namespace ShaderSky {
        inline constexpr uintptr_t CtxMap = 0xE;
        inline constexpr uintptr_t CtxPSSetConstantBuffers = 0x10;
        inline constexpr uintptr_t CtxPSSetShader = 0x9;
        inline constexpr uintptr_t CtxUnmap = 0xF;
        inline constexpr uintptr_t DevCreateBuffer = 0x3;
        inline constexpr uintptr_t DevCreatePixelShader = 0xF;
        inline constexpr uintptr_t RenderViewAltA = 0xC50;
        inline constexpr uintptr_t RenderViewAltB = 0xC50;
        inline constexpr uintptr_t VisualEnginePtrAltA = 0x8942E38;
        inline constexpr uintptr_t VisualEnginePtrAltB = 0x8942E38;
        inline constexpr uintptr_t WrapContextPtr = 0x190;
        inline constexpr uintptr_t WrapContextPtrAlt = 0x1C0;
        inline constexpr uintptr_t WrapDevicePtr = 0x188;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x22C;
        inline constexpr uintptr_t MoonTextureId = 0xB0;
        inline constexpr uintptr_t SkyboxBk = 0xE0;
        inline constexpr uintptr_t SkyboxDn = 0x110;
        inline constexpr uintptr_t SkyboxFt = 0x140;
        inline constexpr uintptr_t SkyboxLf = 0x170;
        inline constexpr uintptr_t SkyboxOrientation = 0x220;
        inline constexpr uintptr_t SkyboxRt = 0x1A0;
        inline constexpr uintptr_t SkyboxUp = 0x1D0;
        inline constexpr uintptr_t StarCount = 0x230;
        inline constexpr uintptr_t SunAngularSize = 0x234;
        inline constexpr uintptr_t SunTextureId = 0x200;
    }

    namespace Sound {
        inline constexpr uintptr_t IsPlaying = 0x130;
        inline constexpr uintptr_t Looped = 0x12D;
        inline constexpr uintptr_t PlaybackSpeed = 0x10C;
        inline constexpr uintptr_t RollOffMaxDistance = 0x110;
        inline constexpr uintptr_t RollOffMinDistance = 0x114;
        inline constexpr uintptr_t SoundGroup = 0xD0;
        inline constexpr uintptr_t SoundId = 0xB0;
        inline constexpr uintptr_t Volume = 0x120;
    }

    namespace SpawnLocation {
        inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1D8;
        inline constexpr uintptr_t Enabled = 0x1D9;
        inline constexpr uintptr_t ForcefieldDuration = 0x1D0;
        inline constexpr uintptr_t Neutral = 0x1DA;
        inline constexpr uintptr_t TeamColor = 0x1D4;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0xE0;
        inline constexpr uintptr_t Scale = 0xAC;
        inline constexpr uintptr_t TextureId = 0x110;
    }

    namespace StatsItem {
        inline constexpr uintptr_t Value = 0x98;
    }

    namespace SunRaysEffect {
        inline constexpr uintptr_t Enabled = 0x98;
        inline constexpr uintptr_t Intensity = 0xA0;
        inline constexpr uintptr_t Spread = 0xA4;
    }

    namespace SurfaceAppearance {
        inline constexpr uintptr_t AlphaMode = 0x1D8;
        inline constexpr uintptr_t Color = 0x1C0;
        inline constexpr uintptr_t ColorMap = 0xB0;
        inline constexpr uintptr_t EmissiveMaskContent = 0xE0;
        inline constexpr uintptr_t EmissiveStrength = 0x1DC;
        inline constexpr uintptr_t EmissiveTint = 0x1CC;
        inline constexpr uintptr_t MetalnessMap = 0x110;
        inline constexpr uintptr_t NormalMap = 0x140;
        inline constexpr uintptr_t RoughnessMap = 0x170;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t JobEnd = 0xD0;
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobStart = 0xC8;
        inline constexpr uintptr_t MaxFPS = 0xB0;
        inline constexpr uintptr_t Pointer = 0x8F1E408;
    }

    namespace Team {
        inline constexpr uintptr_t BrickColor = 0xA0;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1D8;
        inline constexpr uintptr_t MaterialColors = 0x4A0;
        inline constexpr uintptr_t WaterColor = 0x1C8;
        inline constexpr uintptr_t WaterReflectance = 0x1E0;
        inline constexpr uintptr_t WaterTransparency = 0x1E4;
        inline constexpr uintptr_t WaterWaveSize = 0x1E8;
        inline constexpr uintptr_t WaterWaveSpeed = 0x1EC;
    }

    namespace Textures {
        inline constexpr uintptr_t Decal_Texture = 0x1C8;
        inline constexpr uintptr_t Texture_Texture = 0x1C8;
    }

    namespace Tool {
        inline constexpr uintptr_t CanBeDropped = 0x4A0;
        inline constexpr uintptr_t Enabled = 0x4A1;
        inline constexpr uintptr_t Grip = 0x470;
        inline constexpr uintptr_t ManualActivationOnly = 0x4A2;
        inline constexpr uintptr_t RequiresHandle = 0x4A3;
        inline constexpr uintptr_t TextureId = 0x348;
        inline constexpr uintptr_t Tooltip = 0x450;
    }

    namespace UnionOperation {
        inline constexpr uintptr_t AssetId = 0x2F8;
    }

    namespace UserInputService {
        inline constexpr uintptr_t WindowInputState = 0x288;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x210;
        inline constexpr uintptr_t SteerFloat = 0x214;
        inline constexpr uintptr_t ThrottleFloat = 0x218;
        inline constexpr uintptr_t Torque = 0x21C;
        inline constexpr uintptr_t TurnSpeed = 0x220;
    }

    namespace ViewportRay {
        inline constexpr uintptr_t DescriptorRva = 0x86F9B60;
        inline constexpr uintptr_t DescriptorVtableRva = 0x70BD150;
        inline constexpr uintptr_t HandlerRva = 0x3489830;
        inline constexpr uintptr_t MemberAdjustment = 0xB8;
        inline constexpr uintptr_t MemberFunction = 0xB0;
        inline constexpr uintptr_t Name = 0x8;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0xB10;
        inline constexpr uintptr_t FakeDataModel = 0xAF0;
        inline constexpr uintptr_t Pointer = 0x8A11808;
        inline constexpr uintptr_t RenderView = 0xC50;
        inline constexpr uintptr_t ViewMatrix = 0x1B0;
    }

    namespace Weld {
        inline constexpr uintptr_t Part0 = 0x100;
        inline constexpr uintptr_t Part1 = 0x110;
    }

    namespace WeldConstraint {
        inline constexpr uintptr_t Part0 = 0xA0;
        inline constexpr uintptr_t Part1 = 0xB0;
    }

    namespace WindowInputState {
        inline constexpr uintptr_t CapsLock = 0x40;
        inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x4A0;
        inline constexpr uintptr_t DistributedGameTime = 0x4C0;
        inline constexpr uintptr_t ReadOnlyGravity = 0x9C8;
        inline constexpr uintptr_t World = 0x3F8;
    }

    namespace World {
        inline constexpr uintptr_t AirProperties = 0x230;
        inline constexpr uintptr_t FallenPartsDestroyHeight = 0x20C;
        inline constexpr uintptr_t Gravity = 0x218;
        inline constexpr uintptr_t Primitives = 0x2A0;
        inline constexpr uintptr_t worldStepsPerSec = 0x868;
    }

}
