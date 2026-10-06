/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023ffc80; end: 1023ffcd7;  */

void FUN_1023ffc80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105018c0;
  func_0x000107c613fc(&UNK_1105018c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1023f73d0;
  func_0x00010058fa64(FUN_1023f73d0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1023ffcd8; end: 1023ffe6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1023ffcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102400e8c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e963b8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e963c0) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ffe70);
  (*pcVar2)();
}



/* Entry: 1023ffe70; end: 1023ffecf; -[_TtC22SendToScopeGraphBridge37SendToScopeGraphBridgeSaberEntryPoint init] */

void FUN_1023ffe70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToScopeGraphBridge.SendToScopeGraphBridgeSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ffe9c);
  (*pcVar1)();
}



/* Entry: 1023ffed0; end: 1023fff07; -[_TtC22SendToScopeGraphBridge37SendToScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023ffeec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ffef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ffed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e963b8));
  return;
}



/* Entry: 1023fff08; end: 1023fff2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023fff08(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e963c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e963b8));
  return;
}



/* Entry: 1023fff30; end: 1023fff4f;  */

void FUN_1023fff30(void)

{
  func_0x000107c61168(&PTR_PTR_11283bf90);
  return;
}



/* Entry: 1023fff50; end: 1023fffb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023fff50(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d28);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1023fffb4; end: 1023fffbb;  */

void FUN_1023fffb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023fffbc; end: 10240005b;  */

void FUN_1023fffbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10240005c; end: 10240007b;  */

void FUN_10240005c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10240007c; end: 1024000df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10240007c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d30);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1024000e0; end: 1024000e7;  */

void FUN_1024000e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024000e8; end: 102400187;  */

void FUN_1024000e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102400188; end: 1024001a7;  */

void FUN_102400188(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1024001a8; end: 10240020b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024001a8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d38);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10240020c; end: 102400213;  */

void FUN_10240020c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102400214; end: 1024002b3;  */

void FUN_102400214(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024002b4; end: 1024002d3;  */

void FUN_1024002b4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1024002d4; end: 102400337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024002d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d40);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102400338; end: 10240033f;  */

void FUN_102400338(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102400340; end: 1024003df;  */

void FUN_102400340(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024003e0; end: 1024003ff;  */

void FUN_1024003e0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102400400; end: 102400463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102400400(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102400464; end: 10240046b;  */

void FUN_102400464(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10240046c; end: 10240050b;  */

void FUN_10240046c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10240050c; end: 10240052b;  */

void FUN_10240050c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10240052c; end: 10240058f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10240052c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102400590; end: 102400597;  */

void FUN_102400590(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102400598; end: 102400637;  */

void FUN_102400598(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102400638; end: 102400657;  */

void FUN_102400638(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102400658; end: 1024006bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102400658(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1024006bc; end: 1024006c3;  */

void FUN_1024006bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024006c4; end: 102400763;  */

void FUN_1024006c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102400764; end: 102400783;  */

void FUN_102400764(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102400784; end: 1024007e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102400784(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1024007e8; end: 1024007ef;  */

void FUN_1024007e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024007f0; end: 10240088f;  */

void FUN_1024007f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102400890; end: 1024008af;  */

void FUN_102400890(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1024008b0; end: 102400913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024008b0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102400914; end: 10240091b;  */

void FUN_102400914(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10240091c; end: 1024009bb;  */

void FUN_10240091c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024009bc; end: 1024009db;  */

void FUN_1024009bc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1024009dc; end: 102400a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024009dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d90);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102400a40; end: 102400a47;  */

void FUN_102400a40(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102400a48; end: 102400ae7;  */

void FUN_102400a48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102400ae8; end: 102400b07;  */

void FUN_102400ae8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102400b08; end: 102400b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102400b08(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e96d98);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102400b6c; end: 102400b73;  */

void FUN_102400b6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102400b74; end: 102400c13;  */

void FUN_102400b74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102400c14; end: 102400c33;  */

void FUN_102400c14(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102400c34; end: 102400cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102400c34(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e96ce0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e96ce8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102400cbc);
  (*pcVar2)();
}



/* Entry: 102400cbc; end: 102400da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102400cbc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e96ce0);
  *(undefined **)(unaff_x20 + _DAT_112e96ce0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e96ce8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e96ce8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110502548;
  func_0x000107c613fc(&UNK_110502548,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102400da8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102400da4; end: 102400daf;  */

void FUN_102400da4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102400db0; end: 102400e0f; -[_TtC22SendToScopeGraphBridge37SCSendToScopedServicesSaberEntryPoint init] */

void FUN_102400db0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToScopeGraphBridge.SCSendToScopedServicesSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102400ddc);
  (*pcVar1)();
}



/* Entry: 102400e10; end: 102400e47; -[_TtC22SendToScopeGraphBridge37SCSendToScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102400e10(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e96ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e96ce0));
  return;
}



/* Entry: 102400e48; end: 102400e4b;  */

void FUN_102400e48(void)

{
  return;
}



/* Entry: 102400e4c; end: 102400e6b;  */

void FUN_102400e4c(void)

{
  FUN_102400cbc();
  return;
}



/* Entry: 102400e6c; end: 102400e8b;  */

void FUN_102400e6c(void)

{
  func_0x000107c61168(&PTR_PTR_11283c058);
  return;
}



/* Entry: 102400e8c; end: 102400f5b;  */

undefined8 FUN_102400e8c(void)

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
  
  func_0x000107c61428(0x112e96d18,&uStack_40,0x20,0);
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
    FUN_102400f5c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102400f5c; end: 102400f7b;  */

void FUN_102400f5c(void)

{
  func_0x000107c61168(&PTR_PTR_11283c120);
  return;
}



/* Entry: 102400f7c; end: 1024012d3;  */

void FUN_102400f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e96d20,&UNK_10daa24d8);
  puVar1 = &UNK_110502590;
  func_0x000107c613fc(&UNK_110502590,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000823a8(FUN_1024012d4,puVar1);
  return;
}



/* Entry: 1024012d4; end: 102401317;  */

void FUN_1024012d4(void)

{
  long unaff_x20;
  
  func_0x0001024010e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102401318; end: 10240147f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e96d28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d38) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d40) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d48) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d50) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d58) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d60) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d68) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d70) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d78) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d80) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d88) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d90) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e96d98) = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102401480; end: 1024014df; -[_TtC22SendToScopeGraphBridge30SendToScopeGraphBridgeServices init] */

void FUN_102401480(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToScopeGraphBridge.SendToScopeGraphBridgeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024014ac);
  (*pcVar1)();
}



/* Entry: 1024014e0; end: 102401627; -[_TtC22SendToScopeGraphBridge30SendToScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024014fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010240151c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010240153c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010240155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010240157c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010240159c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024015bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024015a0) */
/* WARNING: Removing unreachable block (ram,0x000102401580) */
/* WARNING: Removing unreachable block (ram,0x000102401560) */
/* WARNING: Removing unreachable block (ram,0x000102401540) */
/* WARNING: Removing unreachable block (ram,0x000102401520) */
/* WARNING: Removing unreachable block (ram,0x000102401500) */
/* WARNING: Removing unreachable block (ram,0x0001024015c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024014e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e96d28));
  return;
}



/* Entry: 102401628; end: 102401633;  */

void FUN_102401628(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102401634,param_1);
  return;
}



/* Entry: 102401634; end: 1024016a7;  */

void FUN_102401634(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1024016a8; end: 1024016b3;  */

void FUN_1024016a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102401aac,param_1);
  return;
}



/* Entry: 1024016b4; end: 1024016f3;  */

void FUN_1024016b4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102401ac0,0);
  return;
}



/* Entry: 1024016f4; end: 1024016ff;  */

void FUN_1024016f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102401ab0,param_1);
  return;
}



/* Entry: 102401700; end: 10240178b;  */

void FUN_102401700(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102401ac4,0);
  return;
}



/* Entry: 10240178c; end: 102401797;  */

void FUN_10240178c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102401ab4,param_1);
  return;
}



/* Entry: 102401798; end: 1024017ef;  */

void FUN_102401798(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1024017f0; end: 1024017f7;  */

undefined8 FUN_1024017f0(void)

{
  return 0x1b;
}



/* Entry: 1024017f8; end: 10240196f;  */

void FUN_1024017f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105025b8;
  func_0x000107c613fc(&UNK_1105025b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102401970,puVar1);
  return;
}



/* Entry: 102401970; end: 102401977;  */

void FUN_102401970(undefined8 *param_1)

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
  func_0x000107c61428(0x112e96d18,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e96d18,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110502750;
  func_0x000107c613fc(&UNK_110502750,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102401aa4;
  func_0x00010058fa64(0x102401aa4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102401978; end: 1024019d3;  */

void FUN_102401978(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e96d18,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e96d18,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1024019d4; end: 102401ac7;  */

undefined ** FUN_1024019d4(void)

{
  return &PTR_DAT_113034c70;
}



/* Entry: 102401ac8; end: 102401b0f; -[SCSendToScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401ac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e96df0;
  func_0x000107c61428(param_1 + _DAT_112e96df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102401b10; end: 102401b67; -[SCSendToScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e96df0;
  func_0x000107c61428(param_1 + _DAT_112e96df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102401b68; end: 102401baf; -[SCSendToScopeGraphBridgeSaberEntryPoint sCComposerSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401b68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e96df8;
  func_0x000107c61428(param_1 + _DAT_112e96df8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102401bb0; end: 102401bbb; -[SCSendToScopeGraphBridgeSaberEntryPoint setSCComposerSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e96df8;
  func_0x000107c61428(param_1 + _DAT_112e96df8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102401bbc; end: 102401c03; -[SCSendToScopeGraphBridgeSaberEntryPoint sCCustomStoryMembersScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e96e00;
  func_0x000107c61428(param_1 + _DAT_112e96e00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102401c04; end: 102401c0f; -[SCSendToScopeGraphBridgeSaberEntryPoint setSCCustomStoryMembersScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e96e00;
  func_0x000107c61428(param_1 + _DAT_112e96e00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102401c10; end: 102401c57; -[SCSendToScopeGraphBridgeSaberEntryPoint sCSendToInternalScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401c10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e96e08;
  func_0x000107c61428(param_1 + _DAT_112e96e08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102401c58; end: 102401c63; -[SCSendToScopeGraphBridgeSaberEntryPoint setSCSendToInternalScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e96e08;
  func_0x000107c61428(param_1 + _DAT_112e96e08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102401c64; end: 102401cab; -[SCSendToScopeGraphBridgeSaberEntryPoint sCSendToPublicProfileOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401c64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e96e10;
  func_0x000107c61428(param_1 + _DAT_112e96e10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102401cac; end: 102401cb7; -[SCSendToScopeGraphBridgeSaberEntryPoint setSCSendToPublicProfileOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e96e10;
  func_0x000107c61428(param_1 + _DAT_112e96e10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102401cb8; end: 102401cff; -[SCSendToScopeGraphBridgeSaberEntryPoint sendToScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401cb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e96e18;
  func_0x000107c61428(param_1 + _DAT_112e96e18,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102401d00; end: 102401d0b; -[SCSendToScopeGraphBridgeSaberEntryPoint setSendToScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e96e18;
  func_0x000107c61428(param_1 + _DAT_112e96e18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102401d0c; end: 102401d6b;  */

void FUN_102401d0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102401d6c; end: 1024020cb;  */

/* WARNING: Possible PIC construction at 0x000102401f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102401fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102401fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102401fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102401fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102401ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024020a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102402054) */
/* WARNING: Removing unreachable block (ram,0x000102402074) */
/* WARNING: Removing unreachable block (ram,0x0001024020a4) */
/* WARNING: Removing unreachable block (ram,0x000102402094) */
/* WARNING: Removing unreachable block (ram,0x000102401ff8) */
/* WARNING: Removing unreachable block (ram,0x000102401fe8) */
/* WARNING: Removing unreachable block (ram,0x000102401fd8) */
/* WARNING: Removing unreachable block (ram,0x000102401fbc) */
/* WARNING: Removing unreachable block (ram,0x000102401fac) */
/* WARNING: Removing unreachable block (ram,0x000102401f9c) */
/* WARNING: Removing unreachable block (ram,0x000102402044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102401d6c(void)

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
  func_0x000107c50c18();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ce0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c51294();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c5129c();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c51eb4();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_1023fff30();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            FUN_102400e8c();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1024020cc);
              (*pcVar2)();
            }
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uStack_68);
            *(long *)(lVar4 + _DAT_112e963b8) = lVar5;
            *(long *)(lVar4 + _DAT_112e963c0) = unaff_x20;
            lStack_80 = lVar4;
            lStack_78 = lVar6;
            func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1024020cc; end: 1024020f3; -[SCSendToScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1024020cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102401d6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024020f4; end: 102402137; -[SCSendToScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024020f4(undefined8 param_1)

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



/* Entry: 102402138; end: 10240247f;  */

void FUN_102402138(long param_1,long param_2,long param_3)

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
    goto LAB_1024021c4;
  }
  if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f66bc0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd00000000000001c,0x800000010f099440,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0faa420)) ||
         (func_0x000107c605b8(0xd000000000000020,0x800000010f055be0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58288();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f66ba0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001c,0x800000010f099460,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000002b;
            if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0f89060)) ||
               (func_0x000107c605b8(0xd00000000000002b,0x800000010f076fa0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58844();
            }
            else {
              uVar2 = 0xd000000000000025;
              if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f66b80)) &&
                 (func_0x000107c605b8(0xd000000000000025,0x800000010f099480,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SendToScopeGraphBridge/SCSendToScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x44,2,0x54,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102402480);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58f14();
            }
            goto LAB_1024021c4;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5883c();
      }
      goto LAB_1024021c4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c581c0();
LAB_1024021c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102402480; end: 10240252b; -[SCSendToScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102402480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102402138(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10240252c; end: 1024025c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240252c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e96df0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e96df8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e96e00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e96e08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e96e10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e96e18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e96e20) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024025c8; end: 1024025e7; -[SCSendToScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024025c8(void)

{
  FUN_10240252c();
  return;
}



/* Entry: 1024025e8; end: 10240261b;  */

void FUN_1024025e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10240261c; end: 1024026a3; -[SCSendToScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102402648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102402688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010240266c) */
/* WARNING: Removing unreachable block (ram,0x00010240264c) */
/* WARNING: Removing unreachable block (ram,0x00010240268c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240261c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e96df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e96df8));
  return;
}


