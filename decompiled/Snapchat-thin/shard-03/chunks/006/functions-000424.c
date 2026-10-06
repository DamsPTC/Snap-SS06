/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102af24b8; end: 102af25cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102af24b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102af336c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112eed898) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112eed8a0) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102af25d0);
  (*pcVar2)();
}



/* Entry: 102af25d0; end: 102af262f; -[_TtC26ChatCameraScopeGraphBridge41ChatCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_102af25d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.ChatCameraScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af25fc);
  (*pcVar1)();
}



/* Entry: 102af2630; end: 102af2667; -[_TtC26ChatCameraScopeGraphBridge41ChatCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102af264c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af2650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af2630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eed898));
  return;
}



/* Entry: 102af2668; end: 102af268f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af2668(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112eed8a0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112eed898));
  return;
}



/* Entry: 102af2690; end: 102af26af;  */

void FUN_102af2690(void)

{
  func_0x000107c61168(&PTR_PTR_112887848);
  return;
}



/* Entry: 102af26b0; end: 102af274b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102af26b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eedc78);
  *(undefined8 *)(unaff_x20 + _DAT_112eed8d0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eed8d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102af274c; end: 102af27ab; -[_TtC26ChatCameraScopeGraphBridge58SCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint init] */

void FUN_102af274c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.SCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af2778);
  (*pcVar1)();
}



/* Entry: 102af27ac; end: 102af283f; -[_TtC26ChatCameraScopeGraphBridge58SCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af27ac(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eed8d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eed8d8));
  return;
}



/* Entry: 102af2840; end: 102af2847;  */

undefined8 FUN_102af2840(void)

{
  return 0;
}



/* Entry: 102af2848; end: 102af2867;  */

void FUN_102af2848(void)

{
  func_0x000107c61168(&PTR_PTR_112887910);
  return;
}



/* Entry: 102af2868; end: 102af2903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102af2868(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eedc80);
  *(undefined8 *)(unaff_x20 + _DAT_112eed908) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eed910) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102af2904; end: 102af2963; -[_TtC26ChatCameraScopeGraphBridge62SCChatCameraScopedARBarReplyIntegrationServicesSaberEntryPoint init] */

void FUN_102af2904(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.SCChatCameraScopedARBarReplyIntegrationServicesSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af2930);
  (*pcVar1)();
}



/* Entry: 102af2964; end: 102af29f7; -[_TtC26ChatCameraScopeGraphBridge62SCChatCameraScopedARBarReplyIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af2964(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eed908));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eed910));
  return;
}



/* Entry: 102af29f8; end: 102af29ff;  */

undefined8 FUN_102af29f8(void)

{
  return 0;
}



/* Entry: 102af2a00; end: 102af2a1f;  */

void FUN_102af2a00(void)

{
  func_0x000107c61168(&PTR_PTR_1128879d8);
  return;
}



/* Entry: 102af2a20; end: 102af2abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102af2a20(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eedc88);
  *(undefined8 *)(unaff_x20 + _DAT_112eed940) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eed948) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102af2abc; end: 102af2b1b; -[_TtC26ChatCameraScopeGraphBridge51SCChatCameraScopedARBarReplyServicesSaberEntryPoint init] */

void FUN_102af2abc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.SCChatCameraScopedARBarReplyServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af2ae8);
  (*pcVar1)();
}



/* Entry: 102af2b1c; end: 102af2baf; -[_TtC26ChatCameraScopeGraphBridge51SCChatCameraScopedARBarReplyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af2b1c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eed940));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eed948));
  return;
}



/* Entry: 102af2bb0; end: 102af2bb7;  */

undefined8 FUN_102af2bb0(void)

{
  return 0;
}



/* Entry: 102af2bb8; end: 102af2bd7;  */

void FUN_102af2bb8(void)

{
  func_0x000107c61168(&PTR_PTR_112887aa0);
  return;
}



/* Entry: 102af2bd8; end: 102af2c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102af2bd8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eedca8);
  *(undefined8 *)(unaff_x20 + _DAT_112eed978) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eed980) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102af2c74; end: 102af2cd3; -[_TtC26ChatCameraScopeGraphBridge57SCMemoriesSideButtonStateProvidingServicesSaberEntryPoint init] */

void FUN_102af2c74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.SCMemoriesSideButtonStateProvidingServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af2ca0);
  (*pcVar1)();
}



/* Entry: 102af2cd4; end: 102af2d67; -[_TtC26ChatCameraScopeGraphBridge57SCMemoriesSideButtonStateProvidingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af2cd4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eed978));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eed980));
  return;
}



/* Entry: 102af2d68; end: 102af2d6f;  */

undefined8 FUN_102af2d68(void)

{
  return 0;
}



/* Entry: 102af2d70; end: 102af2d8f;  */

void FUN_102af2d70(void)

{
  func_0x000107c61168(&PTR_PTR_112887b68);
  return;
}



/* Entry: 102af2d90; end: 102af2df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102af2d90(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eedc90);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102af2df4; end: 102af2dfb;  */

void FUN_102af2df4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102af2dfc; end: 102af2e9b;  */

void FUN_102af2dfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102af2e9c; end: 102af2ebb;  */

void FUN_102af2e9c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102af2ebc; end: 102af2f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102af2ebc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eedc98);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102af2f20; end: 102af2f27;  */

void FUN_102af2f20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102af2f28; end: 102af2fc7;  */

void FUN_102af2f28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102af2fc8; end: 102af2fe7;  */

void FUN_102af2fc8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102af2fe8; end: 102af304b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102af2fe8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eedca0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102af304c; end: 102af3053;  */

void FUN_102af304c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102af3054; end: 102af30f3;  */

void FUN_102af3054(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102af30f4; end: 102af3113;  */

void FUN_102af30f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102af3114; end: 102af319b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102af3114(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eedc20) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eedc28);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102af319c);
  (*pcVar2)();
}



/* Entry: 102af319c; end: 102af3283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102af319c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eedc20);
  *(undefined **)(unaff_x20 + _DAT_112eedc20) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eedc28);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eedc28))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105997d8;
  func_0x000107c613fc(&UNK_1105997d8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102af3288,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102af3284; end: 102af328f;  */

void FUN_102af3284(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102af3290; end: 102af32ef; -[_TtC26ChatCameraScopeGraphBridge41SCChatCameraScopedServicesSaberEntryPoint init] */

void FUN_102af3290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.SCChatCameraScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af32bc);
  (*pcVar1)();
}



/* Entry: 102af32f0; end: 102af3327; -[_TtC26ChatCameraScopeGraphBridge41SCChatCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af32f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eedc28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eedc20));
  return;
}



/* Entry: 102af3328; end: 102af332b;  */

void FUN_102af3328(void)

{
  return;
}



/* Entry: 102af332c; end: 102af334b;  */

void FUN_102af332c(void)

{
  FUN_102af319c();
  return;
}



/* Entry: 102af334c; end: 102af336b;  */

void FUN_102af334c(void)

{
  func_0x000107c61168(&PTR_PTR_112887c30);
  return;
}



/* Entry: 102af336c; end: 102af343b;  */

undefined8 FUN_102af336c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112eedc58,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102af343c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102af343c; end: 102af345b;  */

void FUN_102af343c(void)

{
  func_0x000107c61168(&PTR_PTR_112887cf8);
  return;
}



/* Entry: 102af345c; end: 102af36a7;  */

void FUN_102af345c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eedc60,&UNK_10db1c318);
  puVar1 = &UNK_110599820;
  func_0x000107c613fc(&UNK_110599820,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_102af36a8,puVar1);
  return;
}



/* Entry: 102af36a8; end: 102af36db;  */

void FUN_102af36a8(void)

{
  long unaff_x20;
  
  func_0x000102af3560(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102af36dc; end: 102af37c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af36dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eedc68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eedc70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eedc78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eedc80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eedc88) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eedc90) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eedc98) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eedca0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eedca8) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102af37c8; end: 102af3827; -[_TtC26ChatCameraScopeGraphBridge34ChatCameraScopeGraphBridgeServices init] */

void FUN_102af37c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatCameraScopeGraphBridge.ChatCameraScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102af37f4);
  (*pcVar1)();
}



/* Entry: 102af3828; end: 102af390f; -[_TtC26ChatCameraScopeGraphBridge34ChatCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102af3844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af3864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af3884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af38a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af3888) */
/* WARNING: Removing unreachable block (ram,0x000102af3868) */
/* WARNING: Removing unreachable block (ram,0x000102af3848) */
/* WARNING: Removing unreachable block (ram,0x000102af38a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eedc78));
  return;
}



/* Entry: 102af3910; end: 102af393f;  */

void FUN_102af3910(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102af3940; end: 102af397f;  */

void FUN_102af3940(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_102af3980,0);
  return;
}



/* Entry: 102af3980; end: 102af3993;  */

void FUN_102af3980(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102af3994; end: 102af39cf;  */

void FUN_102af3994(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102af39d0; end: 102af39eb;  */

void FUN_102af39d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102af3a3c,param_1);
  return;
}



/* Entry: 102af39ec; end: 102af3a3b;  */

void FUN_102af39ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102af3a3c; end: 102af3a6f;  */

void FUN_102af3a3c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102af3a70; end: 102af3a77;  */

undefined8 FUN_102af3a70(void)

{
  return 0x1b;
}



/* Entry: 102af3a78; end: 102af3bef;  */

void FUN_102af3a78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110599848;
  func_0x000107c613fc(&UNK_110599848,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102af3bf0,puVar1);
  return;
}



/* Entry: 102af3bf0; end: 102af3bf7;  */

void FUN_102af3bf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112eedc58,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eedc58,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110599960;
  func_0x000107c613fc(&UNK_110599960,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102af3ce4;
  func_0x00010058fa64(0x102af3ce4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102af3bf8; end: 102af3c53;  */

void FUN_102af3bf8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eedc58,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112eedc58,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102af3c54; end: 102af3cef;  */

undefined ** FUN_102af3c54(void)

{
  return &PTR_DAT_11306dbb8;
}



/* Entry: 102af3cf0; end: 102af3d37; -[SCChatCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd00;
  func_0x000107c61428(param_1 + _DAT_112eedd00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102af3d38; end: 102af3d8f; -[SCChatCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd00;
  func_0x000107c61428(param_1 + _DAT_112eedd00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102af3d90; end: 102af3dd7; -[SCChatCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3d90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd08;
  func_0x000107c61428(param_1 + _DAT_112eedd08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102af3dd8; end: 102af3de3; -[SCChatCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd08;
  func_0x000107c61428(param_1 + _DAT_112eedd08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102af3de4; end: 102af3e2b; -[SCChatCameraScopeGraphBridgeSaberEntryPoint sCARBarPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3de4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd10;
  func_0x000107c61428(param_1 + _DAT_112eedd10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102af3e2c; end: 102af3e37; -[SCChatCameraScopeGraphBridgeSaberEntryPoint setSCARBarPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd10;
  func_0x000107c61428(param_1 + _DAT_112eedd10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102af3e38; end: 102af3e7f; -[SCChatCameraScopeGraphBridgeSaberEntryPoint chatCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3e38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd18;
  func_0x000107c61428(param_1 + _DAT_112eedd18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102af3e80; end: 102af3e8b; -[SCChatCameraScopeGraphBridgeSaberEntryPoint setChatCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd18;
  func_0x000107c61428(param_1 + _DAT_112eedd18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102af3e8c; end: 102af3eeb;  */

void FUN_102af3e8c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102af3eec; end: 102af4123;  */

/* WARNING: Possible PIC construction at 0x000102af4058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af4068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af4084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af4094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af40b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af40f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af4098) */
/* WARNING: Removing unreachable block (ram,0x000102af4088) */
/* WARNING: Removing unreachable block (ram,0x000102af406c) */
/* WARNING: Removing unreachable block (ram,0x000102af405c) */
/* WARNING: Removing unreachable block (ram,0x000102af40fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af3eec(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c509d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c3f838();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102af2690();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102af336c();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102af4124);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112eed898) = lVar5;
        *(long *)(lVar4 + _DAT_112eed8a0) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102af4124; end: 102af414b; -[SCChatCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102af4124(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102af3eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102af414c; end: 102af418f; -[SCChatCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_102af414c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102af4190; end: 102af43ff;  */

void FUN_102af4190(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0faf8d0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010f050730,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57f80();
        }
        else {
          uVar2 = 0xd000000000000029;
          if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f14920)) &&
             (func_0x000107c605b8(0xd000000000000029,0x800000010f0eb6e0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ChatCameraScopeGraphBridge/SCChatCameraScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x4c,2,0x3f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102af4400);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53348();
        }
        goto LAB_102af421c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_102af421c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102af4400; end: 102af44ab; -[SCChatCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102af4400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102af4190(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102af44ac; end: 102af452f; -[SCChatCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af44ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eedd00,0);
  *(undefined8 *)(param_1 + _DAT_112eedd08) = 0;
  *(undefined8 *)(param_1 + _DAT_112eedd10) = 0;
  *(undefined8 *)(param_1 + _DAT_112eedd18) = 0;
  *(undefined8 *)(param_1 + _DAT_112eedd20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102af4530; end: 102af4563;  */

void FUN_102af4530(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102af4564; end: 102af45cb; -[SCChatCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102af4590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af45b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af4594) */
/* WARNING: Removing unreachable block (ram,0x000102af45b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4564(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eedd00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eedd08));
  return;
}



/* Entry: 102af45cc; end: 102af45eb;  */

void FUN_102af45cc(void)

{
  func_0x000107c61168(&PTR_PTR_112887df8);
  return;
}



/* Entry: 102af45ec; end: 102af45f7; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af45ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd50;
  func_0x000107c61428(param_1 + _DAT_112eedd50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102af45f8; end: 102af4603; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af45f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd50;
  func_0x000107c61428(param_1 + _DAT_112eedd50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102af4604; end: 102af460f; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint chatCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd58;
  func_0x000107c61428(param_1 + _DAT_112eedd58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102af4610; end: 102af4653;  */

void FUN_102af4610(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102af4654; end: 102af465f; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint setChatCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd58;
  func_0x000107c61428(param_1 + _DAT_112eedd58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102af4660; end: 102af46b3;  */

void FUN_102af4660(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102af46b4; end: 102af46fb; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint sCChatCameraScopedARBarReplyAdapterServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af46b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd60;
  func_0x000107c61428(param_1 + _DAT_112eedd60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102af46fc; end: 102af475f; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint setSCChatCameraScopedARBarReplyAdapterServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af46fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eedd60;
  func_0x000107c61428(param_1 + _DAT_112eedd60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102af4760; end: 102af48e3;  */

/* WARNING: Possible PIC construction at 0x000102af4860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af4870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102af488c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af4864) */
/* WARNING: Removing unreachable block (ram,0x000102af4874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4760(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f834();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b70();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102af2848();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eedc78);
        *(undefined8 *)(lVar2 + _DAT_112eed8d0) = uVar6;
        *(long *)(lVar2 + _DAT_112eed8d8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eed8d8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102af48e4; end: 102af490b; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint begin] */

void FUN_102af48e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102af4760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102af490c; end: 102af494f; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint end] */

void FUN_102af490c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102af4950; end: 102af4b53;  */

void FUN_102af4950(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f148a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0eb760,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f14870)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f0eb790,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ChatCameraScopeGraphBridge/SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint.swift"
                              ,0x5d,2,0x3b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102af4b54);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58118();
        goto LAB_102af49dc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53344();
  }
LAB_102af49dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102af4b54; end: 102af4bff; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102af4b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102af4950(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102af4c00; end: 102af4c7f; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4c00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eedd50,0);
  func_0x000107c61614(param_1 + _DAT_112eedd58,0);
  *(undefined8 *)(param_1 + _DAT_112eedd60) = 0;
  *(undefined8 *)(param_1 + _DAT_112eedd68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102af4c80; end: 102af4cb3;  */

void FUN_102af4c80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102af4cb4; end: 102af4d0b; -[SCSCChatCameraScopedARBarReplyAdapterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102af4cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102af4cf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4cb4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eedd50);
  func_0x000107c61610(param_1 + _DAT_112eedd58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eedd60));
  return;
}



/* Entry: 102af4d0c; end: 102af4d2b;  */

void FUN_102af4d0c(void)

{
  func_0x000107c61168(&PTR_PTR_112887ed0);
  return;
}



/* Entry: 102af4d2c; end: 102af4d37; -[SCSCChatCameraScopedARBarReplyIntegrationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102af4d2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eedd98;
  func_0x000107c61428(param_1 + _DAT_112eedd98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


