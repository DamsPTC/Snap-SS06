/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038c2ff0; end: 1038c300f;  */

void FUN_1038c2ff0(void)

{
  func_0x000107c61168(&PTR_PTR_1128fc8a0);
  return;
}



/* Entry: 1038c3010; end: 1038c3053; -[SCSCUserFeatureLaunchServicesSaberEntryPoint end] */

void FUN_1038c3010(undefined8 param_1)

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



/* Entry: 1038c3054; end: 1038c3087;  */

void FUN_1038c3054(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038c3088; end: 1038c30df; -[SCSCUserFeatureLaunchServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038c30c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038c30c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c3088(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa9dc0);
  func_0x000107c61610(param_1 + _DAT_112fa9dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9dd0));
  return;
}



/* Entry: 1038c30e0; end: 1038c30ff;  */

void FUN_1038c30e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128fc970);
  return;
}



/* Entry: 1038c3100; end: 1038c3187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038c3100(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad2f70();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fa9e08) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fa9e10) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c3188);
  (*pcVar1)();
}



/* Entry: 1038c3188; end: 1038c31e7; -[_TtC33MemUserNavigationScopeGraphBridge48MemUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1038c3188(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemUserNavigationScopeGraphBridge.MemUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c31b4);
  (*pcVar1)();
}



/* Entry: 1038c31e8; end: 1038c321f; -[_TtC33MemUserNavigationScopeGraphBridge48MemUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038c3204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038c3208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c31e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9e08));
  return;
}



/* Entry: 1038c3220; end: 1038c3247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c3220(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fa9e10),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fa9e08));
  return;
}



/* Entry: 1038c3248; end: 1038c32e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038c3248(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fab158);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9e40) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9e48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1038c32e4; end: 1038c3343; -[_TtC33MemUserNavigationScopeGraphBridge49MemoriesPreviewSaveDismissServicesSaberEntryPoint init] */

void FUN_1038c32e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemUserNavigationScopeGraphBridge.MemoriesPreviewSaveDismissServicesSaberEntryPoint"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038c3310);
  (*pcVar1)();
}



/* Entry: 1038c3344; end: 1038c33d7; -[_TtC33MemUserNavigationScopeGraphBridge49MemoriesPreviewSaveDismissServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038c3344(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa9e40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9e48));
  return;
}



/* Entry: 1038c33d8; end: 1038c33df;  */

undefined8 FUN_1038c33d8(void)

{
  return 0;
}



/* Entry: 1038c33e0; end: 1038c3443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c33e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1e8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3444; end: 1038c344b;  */

void FUN_1038c3444(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c344c; end: 1038c34eb;  */

void FUN_1038c344c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c34ec; end: 1038c350b;  */

void FUN_1038c34ec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c350c; end: 1038c356f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c350c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab168);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3570; end: 1038c3577;  */

void FUN_1038c3570(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c3578; end: 1038c3617;  */

void FUN_1038c3578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3618; end: 1038c3637;  */

void FUN_1038c3618(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3638; end: 1038c369b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3638(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab138);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c369c; end: 1038c36a3;  */

void FUN_1038c369c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c36a4; end: 1038c3743;  */

void FUN_1038c36a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3744; end: 1038c3763;  */

void FUN_1038c3744(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3764; end: 1038c37c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3764(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab140);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c37c8; end: 1038c37cf;  */

void FUN_1038c37c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c37d0; end: 1038c386f;  */

void FUN_1038c37d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3870; end: 1038c388f;  */

void FUN_1038c3870(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3890; end: 1038c38f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3890(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab148);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c38f4; end: 1038c38fb;  */

void FUN_1038c38f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c38fc; end: 1038c399b;  */

void FUN_1038c38fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c399c; end: 1038c39bb;  */

void FUN_1038c399c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c39bc; end: 1038c3a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c39bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab150);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3a20; end: 1038c3a27;  */

void FUN_1038c3a20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c3a28; end: 1038c3ac7;  */

void FUN_1038c3a28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3ac8; end: 1038c3ae7;  */

void FUN_1038c3ac8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3ae8; end: 1038c3b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3ae8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab160);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3b4c; end: 1038c3b53;  */

void FUN_1038c3b4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c3b54; end: 1038c3bf3;  */

void FUN_1038c3b54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3bf4; end: 1038c3c13;  */

void FUN_1038c3bf4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3c14; end: 1038c3c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3c14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab170);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3c78; end: 1038c3c7f;  */

void FUN_1038c3c78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c3c80; end: 1038c3d1f;  */

void FUN_1038c3c80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3d20; end: 1038c3d3f;  */

void FUN_1038c3d20(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3d40; end: 1038c3da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3d40(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab178);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3da4; end: 1038c3dab;  */

void FUN_1038c3da4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c3dac; end: 1038c3e4b;  */

void FUN_1038c3dac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3e4c; end: 1038c3e6b;  */

void FUN_1038c3e4c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3e6c; end: 1038c3ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3e6c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab180);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3ed0; end: 1038c3ed7;  */

void FUN_1038c3ed0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c3ed8; end: 1038c3f77;  */

void FUN_1038c3ed8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c3f78; end: 1038c3f97;  */

void FUN_1038c3f78(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c3f98; end: 1038c3ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c3f98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab188);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c3ffc; end: 1038c4003;  */

void FUN_1038c3ffc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4004; end: 1038c40a3;  */

void FUN_1038c4004(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c40a4; end: 1038c40c3;  */

void FUN_1038c40a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c40c4; end: 1038c4127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c40c4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab190);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4128; end: 1038c412f;  */

void FUN_1038c4128(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4130; end: 1038c41cf;  */

void FUN_1038c4130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c41d0; end: 1038c41ef;  */

void FUN_1038c41d0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c41f0; end: 1038c4253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c41f0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab198);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4254; end: 1038c425b;  */

void FUN_1038c4254(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c425c; end: 1038c427f;  */

void FUN_1038c425c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c4280; end: 1038c429f;  */

void FUN_1038c4280(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c42a0; end: 1038c4303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c42a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4304; end: 1038c430b;  */

void FUN_1038c4304(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c430c; end: 1038c43ab;  */

void FUN_1038c430c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c43ac; end: 1038c43cb;  */

void FUN_1038c43ac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c43cc; end: 1038c442f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c43cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4430; end: 1038c4437;  */

void FUN_1038c4430(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4438; end: 1038c44d7;  */

void FUN_1038c4438(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c44d8; end: 1038c44f7;  */

void FUN_1038c44d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c44f8; end: 1038c455b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c44f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c455c; end: 1038c4563;  */

void FUN_1038c455c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4564; end: 1038c4603;  */

void FUN_1038c4564(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c4604; end: 1038c4623;  */

void FUN_1038c4604(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c4624; end: 1038c4687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c4624(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4688; end: 1038c468f;  */

void FUN_1038c4688(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4690; end: 1038c472f;  */

void FUN_1038c4690(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c4730; end: 1038c474f;  */

void FUN_1038c4730(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c4750; end: 1038c47b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c4750(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1c0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c47b4; end: 1038c47bb;  */

void FUN_1038c47b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c47bc; end: 1038c485b;  */

void FUN_1038c47bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c485c; end: 1038c487b;  */

void FUN_1038c485c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c487c; end: 1038c48df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c487c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c48e0; end: 1038c48e7;  */

void FUN_1038c48e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c48e8; end: 1038c4987;  */

void FUN_1038c48e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c4988; end: 1038c49a7;  */

void FUN_1038c4988(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c49a8; end: 1038c4a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c49a8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1d0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4a0c; end: 1038c4a13;  */

void FUN_1038c4a0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4a14; end: 1038c4ab3;  */

void FUN_1038c4a14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c4ab4; end: 1038c4ad3;  */

void FUN_1038c4ab4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c4ad4; end: 1038c4b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c4ad4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1d8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4b38; end: 1038c4b3f;  */

void FUN_1038c4b38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4b40; end: 1038c4bdf;  */

void FUN_1038c4b40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038c4be0; end: 1038c4bff;  */

void FUN_1038c4be0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1038c4c00; end: 1038c4c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038c4c00(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fab1e0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1038c4c64; end: 1038c4c6b;  */

void FUN_1038c4c64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038c4c6c; end: 1038c4d0b;  */

void FUN_1038c4c6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


