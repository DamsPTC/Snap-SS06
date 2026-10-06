/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100752810; end: 10075283b;  */

void FUN_100752810(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10075283c; end: 100752843;  */

void FUN_10075283c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a0651c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100752844; end: 1007528c7;  */

void FUN_100752844(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a0651c,param_2,FUN_1007528c8,param_2,&UNK_102a06520,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007528c8; end: 1007528ef;  */

void FUN_1007528c8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007528f0; end: 1007528fb;  */

void FUN_1007528f0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1005c6148();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126abd70;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0dbec0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1007528fc; end: 100752b9b;  */

void FUN_1007528fc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1005c6148();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126abd70;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0dbec0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 100752b9c; end: 100752ba3;  */

void FUN_100752b9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100752ba4; end: 100752bf7;  */

void FUN_100752ba4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100752bf8; end: 100752bff;  */

void FUN_100752bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002a330c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100752c68();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100752c00; end: 100752c67;  */

void FUN_100752c00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002a330c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100752c68();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100752c68; end: 100752da3;  */

void FUN_100752c68(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9148;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f00b1d0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x20) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100752da4);
  (*pcVar1)();
}



/* Entry: 100752da4; end: 100752e1f; -[SCSRLensEffectPluginCameraLifecycleProxyServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100752e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100752e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100752da4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c610fc(PTR_PTR_1126ae820);
  puVar1 = PTR_PTR_1126d3360;
  func_0x000107c610f4(PTR_PTR_1126d3360);
  func_0x000107c45c10();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127611c8);
  }
  func_0x000107c42c20(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100752e20; end: 100752ec3; -[SCSRLensEffectPluginCameraLifecycleProxyServices initWithCameraLifecycleEventSubject:cameraLifecycleEventObservable:] */

undefined1 *
FUN_100752e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f7d68;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100752ec4; end: 1007531d3; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100752ec4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127611ac);
  *(undefined **)(param_1 + _DAT_1127611ac) = puVar1;
  func_0x000107c61170(uVar6);
  func_0x000107c61144(auStack_78,param_1);
  lVar7 = param_1 + _DAT_1127611b4;
  func_0x000107c61148(lVar7);
  lVar2 = lVar7;
  func_0x000107c5de90();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x100855da8;
  puStack_88 = &UNK_11084e590;
  func_0x000107c6111c(auStack_80,auStack_78);
  lVar3 = lVar2;
  func_0x000107c5c320(lVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar7);
  lVar7 = param_1 + _DAT_1127611b8;
  func_0x000107c61148(lVar7);
  lVar2 = lVar7;
  func_0x000107c4c168();
  func_0x000107c61180();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1008bb194;
  puStack_b0 = &UNK_11090b470;
  func_0x000107c6111c(auStack_a8,auStack_78);
  lVar3 = lVar2;
  func_0x000107c5c320(lVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar7);
  lVar7 = (long)_DAT_1127611b0;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    func_0x000107c61170(uVar6);
    param_1 = param_1 + _DAT_1127611bc;
    func_0x000107c61148(param_1);
    lVar7 = param_1;
    func_0x000107c4c238();
    func_0x000107c61180();
    lVar2 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c52094();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5d58c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_d0,auStack_78);
    lVar5 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_d0);
  }
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 1007531d4; end: 1007531f3; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices managedCapturerStateCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007531d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f88));
  return;
}



/* Entry: 1007531f4; end: 10075321f;  */

void FUN_1007531f4(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 100753220; end: 100753227;  */

void FUN_100753220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102a06654);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100753228; end: 1007532ab;  */

void FUN_100753228(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102a06654,param_2,&UNK_102a06658,param_2,&UNK_102a06680,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007532ac; end: 1007532b7;  */

undefined ** FUN_1007532ac(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1007532b8; end: 1007532e3;  */

void FUN_1007532b8(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1007532e4; end: 1007532eb;  */

void FUN_1007532e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a06744);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007532ec; end: 10075336f;  */

void FUN_1007532ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a06744,param_2,FUN_100753370,param_2,&UNK_102a06748,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100753370; end: 100753397;  */

void FUN_100753370(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100753398; end: 10075339f;  */

void FUN_100753398(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005c5370();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x000100753408();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007533a0; end: 1007534b7;  */

void FUN_1007533a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1005c5370();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x000100753408();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007534b8; end: 1007534d7;  */

void FUN_1007534b8(void)

{
  func_0x000107c61168(&PTR_PTR_112ee5838);
  return;
}



/* Entry: 1007534d8; end: 100753557;  */

void FUN_1007534d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100753558; end: 10075375f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100753558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ee60e8;
  func_0x000107c61614(unaff_x20 + _DAT_112ee60e8,0);
  lVar2 = _DAT_112ee60f0;
  func_0x000107c61614(unaff_x20 + _DAT_112ee60f0,0);
  lVar3 = _DAT_112ee60f8;
  func_0x000107c61614(unaff_x20 + _DAT_112ee60f8,0);
  lVar4 = _DAT_112ee6100;
  func_0x000107c61614(unaff_x20 + _DAT_112ee6100,0);
  lVar5 = _DAT_112ee6108;
  func_0x000107c61614(unaff_x20 + _DAT_112ee6108,0);
  lVar6 = _DAT_112ee6110;
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  lVar6 = _DAT_112ee6118;
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  lVar6 = _DAT_112ee6120;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_98,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_b0,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_c8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  func_0x000107c61428(unaff_x20 + lVar5,auStack_e0,1,0);
  func_0x000107c61604(unaff_x20 + lVar5,param_5);
  puVar8 = &stack0xffffffffffffff10;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return puVar8;
}



/* Entry: 100753760; end: 10075376b;  */

undefined ** FUN_100753760(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10075376c; end: 100753797;  */

void FUN_10075376c(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 100753798; end: 10075379f;  */

void FUN_100753798(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102a06ad8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007537a0; end: 100753823;  */

void FUN_1007537a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102a06ad8,param_2,&UNK_102a06adc,param_2,&UNK_102a06b04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100753824; end: 10075382f;  */

undefined ** FUN_100753824(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 100753830; end: 10075385b;  */

void FUN_100753830(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10075385c; end: 100753863;  */

void FUN_10075385c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a06c24);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100753864; end: 1007538e7;  */

void FUN_100753864(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a06c24,param_2,FUN_1007538e8,param_2,&UNK_102a06c28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007538e8; end: 10075390f;  */

void FUN_1007538e8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100753910; end: 10075391b;  */

void FUN_100753910(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005c6e60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_1007539e8(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_100753c08(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 10075391c; end: 1007539e7;  */

void FUN_10075391c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005c6e60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1007539e8(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_100753c08(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1007539e8; end: 100753a07;  */

void FUN_1007539e8(void)

{
  func_0x000107c61168(&PTR_PTR_112ee21e0);
  return;
}



/* Entry: 100753a08; end: 100753be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100753a08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar6 = &puStack_a0;
  func_0x000107c4b364();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11306bf30);
  func_0x000107c615f0(uVar7);
  uVar8 = param_2;
  func_0x000107c4afac();
  func_0x000107c61180();
  uVar1 = uVar8;
  func_0x000107c4243c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  lVar2 = 0;
  FUN_100753c68();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ee2268) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112ee2270) = uVar1;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_112ee2278) = puVar4;
  plVar5 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x10) = plVar5;
  uVar8 = *(undefined8 *)((long)plVar5 + _DAT_112ee2270);
  puVar4 = &UNK_1105879c0;
  func_0x000107c613fc(&UNK_1105879c0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar5);
  puStack_80 = &UNK_102a28368;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102a2855c;
  puStack_88 = &UNK_1105879d8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c61174(plVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c4db94(uVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 100753be4; end: 100753c07;  */

void FUN_100753be4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100753c08; end: 100753c5f;  */

undefined8 FUN_100753c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100753a08(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100753c60; end: 100753c67; -[SCCameraUIScopedLensProcessingServices lensProcessingServices] */

undefined8 FUN_100753c60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100753c68; end: 100753c87;  */

void FUN_100753c68(void)

{
  func_0x000107c61168(&PTR_PTR_112880d70);
  return;
}



/* Entry: 100753c88; end: 100753ca7;  */

void FUN_100753c88(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100753ca8; end: 100753cd3;  */

void FUN_100753ca8(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 100753cd4; end: 100753cdb;  */

void FUN_100753cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a06df4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100753cdc; end: 100753d5f;  */

void FUN_100753cdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a06df4,param_2,FUN_100753d60,param_2,&UNK_102a06df8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100753d60; end: 100753d87;  */

void FUN_100753d60(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100753d88; end: 100753d93;  */

void FUN_100753d88(void)

{
  long unaff_x20;
  
  FUN_100753d94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 100753d94; end: 100753ee3;  */

void FUN_100753d94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  func_0x0001005c5390();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x000100754a74(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_100754a94(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 100753ee4; end: 100753eeb;  */

void FUN_100753ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100753eec; end: 100753f3f;  */

void FUN_100753eec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100753f40; end: 100753f4b;  */

void FUN_100753f40(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x00010033c930();
  func_0x000107c613fc();
  FUN_100754018(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100753f4c; end: 100753fdf;  */

void FUN_100753f4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x00010033c930();
  func_0x000107c613fc();
  FUN_100754018(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100753fe0; end: 100754017;  */

void FUN_100753fe0(undefined8 param_1)

{
  if (lRam0000000112f25540 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e737944);
  return;
}



/* Entry: 100754018; end: 1007540df;  */

void FUN_100754018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_100753fe0(0);
  func_0x000107c613fc();
  func_0x000107c615f4(param_2,2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10075412c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100754160();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1007540e0; end: 10075412b;  */

void FUN_1007540e0(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  puStack_20 = &UNK_10db603f0;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 10075412c; end: 10075415f;  */

void FUN_10075412c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 100754160; end: 10075442b;  */

long * FUN_100754160(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1105e2298;
  func_0x000107c613fc(&UNK_1105e2298,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar12;
  FUN_1000285a8(0x112da9fc8,&UNK_10d9b27d0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar12);
  pcVar2 = FUN_10075513c;
  FUN_1000bdd8c(FUN_10075513c,puVar1);
  lVar3 = 0;
  FUN_10075442c();
  lVar6 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61614(lVar6 + 0x10,0);
  ppuStack_58 = &PTR_DAT_1105e2780;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  alStack_78[0] = lVar6;
  lStack_60 = lVar3;
  func_0x000107c6157c(pcVar2);
  func_0x000107c3ce84(uVar12);
  func_0x000107c61180();
  uVar4 = 0;
  func_0x00010075444c(0);
  func_0x000107c613fc();
  pcVar5 = pcVar2;
  FUN_10075446c(pcVar2,uVar12,uVar4);
  uVar12 = 0;
  FUN_1007544ac(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  FUN_10075464c();
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10075466c();
  puStack_90 = puVar7;
  FUN_1000285a8(0x112f25508,&UNK_10db60470);
  func_0x000107c613fc();
  ppuVar8 = &puStack_90;
  FUN_10006c248();
  *(undefined ***)(lVar6 + 0x10) = ppuVar8;
  lVar3 = 0;
  FUN_100754768();
  func_0x000107c613fc();
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  func_0x000107c61614(lVar3 + 0x18,0);
  pcVar9 = "WebLensBridgePushRouter";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar3 + 0x28) = pcVar9;
  lVar10 = 0;
  func_0x000100754788();
  func_0x000107c613fc();
  puVar7 = puVar1;
  FUN_1007547a8();
  puStack_88 = puVar1;
  uStack_80 = 0;
  puStack_90 = puVar7;
  FUN_1000285a8(0x112f25510,&UNK_10db603b0);
  func_0x000107c613fc();
  ppuVar8 = &puStack_90;
  FUN_10006c248();
  *(undefined ***)(lVar10 + 0x10) = ppuVar8;
  *(undefined **)(lVar10 + 0x18) = &UNK_102e9c250;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined **)(lVar10 + 0x28) = &UNK_102e9a450;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  func_0x00010033c950(0);
  func_0x000107c610f8();
  plVar11 = alStack_78;
  FUN_1007548e8(plVar11,pcVar5,&PTR_DAT_1105e2710,uVar12,&PTR_DAT_1105e2698,lVar6,&PTR_DAT_1105e2370
                ,lVar3,&PTR_DAT_1105e2340,lVar10,&PTR_DAT_1105e2428);
  func_0x000107c61574(pcVar2);
  return plVar11;
}



/* Entry: 10075442c; end: 10075446b;  */

void FUN_10075442c(void)

{
  func_0x000107c61168(&PTR_PTR_112f25af8);
  return;
}



/* Entry: 10075446c; end: 1007544ab;  */

void FUN_10075446c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x20) = 2;
  *(undefined8 *)(unaff_x20 + 0x28) = 1;
  *(undefined1 *)(unaff_x20 + 0x30) = 2;
  *(undefined8 *)(unaff_x20 + 0x38) = 1;
  *(undefined4 *)(unaff_x20 + 0x40) = 0x2020202;
  *(undefined2 *)(unaff_x20 + 0x44) = 0x202;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1007544ac; end: 1007544cb;  */

void FUN_1007544ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128aab98);
  return;
}



/* Entry: 1007544cc; end: 10075462b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007544cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f25958;
  uVar2 = 0x112ea35c0;
  FUN_1000285a8(0x112ea35c0,&UNK_10dab5c00);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar3 = _DAT_112f25968;
  uVar2 = 0x112d755f0;
  FUN_1000285a8(0x112d755f0,&UNK_10d9358e8);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar2;
  lVar1 = _DAT_112f25970;
  lVar3 = 0x112de1320;
  FUN_1000285a8(0x112de1320,&UNK_10d9a8f20);
  lVar4 = lVar3;
  func_0x000107c613fc();
  FUN_1000c2754();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_112f25978;
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  FUN_1000c2754();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_112f25980;
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  FUN_1000c2754();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  lVar1 = _DAT_112f25960;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  FUN_1000c2754();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10075462c; end: 10075464b; -[_TtC21WebLensesServicesImpl23WebLensUIEventsProvider init] */

void FUN_10075462c(void)

{
  FUN_1007544cc();
  return;
}



/* Entry: 10075464c; end: 10075466b;  */

void FUN_10075464c(void)

{
  func_0x000107c61168(&PTR_PTR_112f25700);
  return;
}



/* Entry: 10075466c; end: 100754767;  */

undefined * FUN_10075466c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112f255f8,&UNK_10db60410);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100754764);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100754768);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100754768; end: 1007547a7;  */

void FUN_100754768(void)

{
  func_0x000107c61168(&PTR_PTR_112f25648);
  return;
}



/* Entry: 1007547a8; end: 1007548d7;  */

undefined * FUN_1007547a8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    FUN_1000285a8(0x112f255f0,&UNK_10db60408);
    puVar9 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar14 = (undefined8 *)(param_1 + 0x50);
    do {
      uVar2 = puVar14[-6];
      uVar5 = puVar14[-5];
      uVar3 = puVar14[-4];
      uVar6 = puVar14[-3];
      uVar4 = puVar14[-2];
      uVar7 = puVar14[-1];
      uVar15 = *puVar14;
      func_0x000107c61434(uVar5);
      FUN_10006c00c(uVar3,uVar6);
      func_0x000107c61434(uVar7);
      uVar10 = uVar2;
      uVar11 = uVar5;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1007548d4);
        (*pcVar8)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar12 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x28);
      *puVar12 = uVar3;
      puVar12[1] = uVar6;
      puVar12[2] = uVar4;
      puVar12[3] = uVar7;
      puVar12[4] = uVar15;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1007548d8);
        (*pcVar8)();
      }
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar13 = puVar13 + -1;
      puVar14 = puVar14 + 7;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 1007548d8; end: 1007548e7;  */

undefined1  [16] FUN_1007548d8(void)

{
  return ZEXT816(0x1105e24a8);
}



/* Entry: 1007548e8; end: 1007549f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1007548e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  FUN_1007549f8(param_1,unaff_x20 + _DAT_1130703f0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070400);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130703f8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070408);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070410);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070418);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar2 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar2;
}



/* Entry: 1007549f8; end: 100754a3b;  */

long FUN_1007549f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100754a3c; end: 100754a3f;  */

void FUN_100754a3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100754a40; end: 100754a93;  */

void FUN_100754a40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100754a94; end: 100754fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100754a94(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  uVar1 = *(ulong *)(param_6 + _DAT_113070400);
  uVar2 = ((ulong *)(param_6 + _DAT_113070400))[1];
  uVar3 = uVar1;
  func_0x000107c614f0();
  pcVar17 = *(code **)(uVar2 + 0x10);
  func_0x000107c615f0(uVar1);
  uVar4 = uVar3;
  (*pcVar17)(uVar3,uVar2);
  if (((uVar4 & 1) != 0) && ((**(code **)(uVar2 + 0x58))(uVar3,uVar2), (uVar3 & 1) != 0)) {
    lVar16 = *(long *)(param_6 + _DAT_113070418);
    if (lVar16 != 0) {
      lVar15 = ((long *)(param_6 + _DAT_113070418))[1];
      func_0x000107c615f0(lVar16);
      uVar5 = 0x19;
      uVar14 = 0;
      FUN_1000819a8(0x19,0);
      func_0x000107c61180();
      uVar18 = param_5;
      func_0x000107c51d00(param_5);
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(param_2 + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar20 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000102a4fbec();
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x000102a50ec8(uVar18,uVar20,uVar14);
      lVar10 = param_4;
      func_0x000107c3e9cc();
      func_0x000107c61180();
      lVar7 = lVar10;
      func_0x000102a50fbc();
      func_0x000107c613fc();
      lVar19 = 0x112ee4de0;
      FUN_1000285a8(0x112ee4de0,&UNK_10db0ffb0);
      func_0x000107c613fc();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102a52ed0(PTR___swiftEmptyArrayStorage_11034f1c8,0x112ee5280,&UNK_10db10248,
                          0x112ee5268,&UNK_10db10230);
      auStack_70[0] = 0;
      puStack_68 = puVar8;
      FUN_1000285a8(0x112ee4de8,&UNK_10db0ffb8);
      func_0x000107c613fc();
      puVar9 = auStack_70;
      FUN_10006c248();
      *(undefined1 **)(lVar19 + 0x10) = puVar9;
      *(undefined1 *)(lVar19 + 0x18) = 1;
      *(undefined **)(lVar19 + 0x20) = &UNK_102a51b90;
      *(undefined8 *)(lVar19 + 0x28) = 0;
      *(long *)(lVar7 + 0x10) = lVar10;
      *(long *)(lVar7 + 0x18) = lVar19;
      uVar20 = *(undefined8 *)(param_6 + _DAT_113070408);
      uVar18 = *(undefined8 *)(param_6 + _DAT_113070408);
      *(undefined8 *)(unaff_x20 + 0x18) = ((undefined8 *)(param_6 + _DAT_113070408))[1];
      *(undefined8 *)(unaff_x20 + 0x10) = uVar20;
      lVar19 = 0x112ee4df0;
      FUN_1000285a8(0x112ee4df0,&UNK_10db0ffc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar19 + 0x18) = 2;
      *(undefined8 *)(lVar19 + 0x10) = 1;
      lVar10 = 0;
      func_0x000102a53048();
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      func_0x000107c615f0(uVar18);
      func_0x000107c61174();
      func_0x000107c6157c(uVar6);
      func_0x000107c6157c(lVar7);
      uVar18 = param_5;
      func_0x000107c51d38();
      func_0x000107c61180();
      lVar11 = 0;
      func_0x000102a53068();
      func_0x000107c613fc();
      *(undefined8 *)(lVar11 + 0x10) = uVar18;
      puVar8 = &UNK_11058cce0;
      func_0x000107c613fc(&UNK_11058cce0,0x20,7);
      *(ulong *)(puVar8 + 0x10) = uVar1;
      *(ulong *)(puVar8 + 0x18) = uVar2;
      lVar12 = 0;
      func_0x000102a4ed60();
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x10) = 0x696a6f6d746962;
      *(undefined8 *)(lVar12 + 0x18) = 0xe700000000000000;
      func_0x000107c615f0(uVar1);
      func_0x000107c615f0(lVar16);
      pcVar13 = "WebLensBitmojiCapabilityHandler";
      func_0x0001000c10c0();
      func_0x000107c61180();
      *(char **)(lVar12 + 0x80) = pcVar13;
      *(undefined1 *)(lVar12 + 0x88) = 0;
      *(long *)(lVar12 + 0x20) = lVar10;
      *(undefined ***)(lVar12 + 0x28) = &PTR_DAT_11058ce70;
      *(undefined8 *)(lVar12 + 0x30) = uVar6;
      *(undefined ***)(lVar12 + 0x38) = &PTR_DAT_11058ce60;
      *(long *)(lVar12 + 0x40) = lVar7;
      *(undefined ***)(lVar12 + 0x48) = &PTR_DAT_11058ce50;
      *(long *)(lVar12 + 0x50) = lVar11;
      *(undefined ***)(lVar12 + 0x58) = &PTR_DAT_11058ce40;
      *(long *)(lVar12 + 0x60) = lVar16;
      *(long *)(lVar12 + 0x68) = lVar15;
      *(undefined **)(lVar12 + 0x70) = &UNK_102a54150;
      *(undefined **)(lVar12 + 0x78) = puVar8;
      *(long *)(lVar19 + 0x20) = lVar12;
      *(undefined ***)(lVar19 + 0x28) = &PTR_DAT_11058c838;
      *(long *)(unaff_x20 + 0x20) = lVar19;
      lVar10 = 0x112ee4df8;
      FUN_1000285a8(0x112ee4df8,&UNK_10db0ffc8);
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 2;
      *(undefined8 *)(lVar10 + 0x20) = uVar6;
      *(undefined ***)(lVar10 + 0x28) = &PTR_DAT_11058ce30;
      *(long *)(lVar10 + 0x30) = lVar7;
      *(undefined ***)(lVar10 + 0x38) = &PTR_DAT_11058ce20;
      *(long *)(unaff_x20 + 0x28) = lVar10;
      lVar10 = *(long *)(lVar19 + 0x10);
      func_0x000107c6157c(uVar6);
      func_0x000107c6157c(lVar7);
      if (lVar10 != 0) {
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          uVar18 = *(undefined8 *)(lVar19 + 0x20);
          lVar19 = *(long *)(unaff_x20 + 0x18);
          func_0x000107c614f0(*(long *)(unaff_x20 + 0x10));
          pcVar17 = *(code **)(lVar19 + 0x18);
          func_0x000107c615f0(uVar18);
          (*pcVar17)();
          func_0x000107c615e8(uVar18);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c61170(param_3);
        func_0x000107c61574(uVar6);
        func_0x000107c61574(lVar7);
        func_0x000107c615e8(lVar16);
        func_0x000107c615e8(uVar1);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        return;
      }
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100754fd4);
      (*pcVar17)();
    }
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x28) = puVar8;
  return;
}



/* Entry: 100754fd4; end: 100754ff7;  */

void FUN_100754fd4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100754ff8; end: 100754fff;  */

void FUN_100754ff8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100755000; end: 1007550c7;  */

long FUN_100755000(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    FUN_1000d224c(&lStack_48);
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f112f30);
    lVar2 = lStack_48;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar2;
    func_0x000107c615f0(lVar2);
    FUN_100755194(uVar1);
  }
  func_0x0001007551a4(lVar3);
  return lVar2;
}



/* Entry: 1007550c8; end: 10075513b;  */

uint FUN_1007550c8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x40);
  if (*(byte *)(unaff_x20 + 0x40) == 2) {
    FUN_100755000();
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      lVar2 = lVar1;
      func_0x000107c3ebcc();
      uVar3 = (uint)lVar2;
      func_0x000107c61170(lVar1);
    }
    *(char *)(unaff_x20 + 0x40) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 10075513c; end: 10075516f;  */

void FUN_10075513c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c400d4(uVar1,param_3,0x95);
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 100755170; end: 100755193;  */

void FUN_100755170(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100755194; end: 1007551b7;  */

void FUN_100755194(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1007551b8; end: 10075527f;  */

long FUN_1007551b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    FUN_1000d224c(&lStack_48);
    uVar1 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f112f50);
    lVar2 = lStack_48;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar2;
    func_0x000107c615f0(lVar2);
    FUN_100755194(uVar1);
  }
  func_0x0001007551a4(lVar3);
  return lVar2;
}



/* Entry: 100755280; end: 1007552f3;  */

uint FUN_100755280(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x30);
  if (*(byte *)(unaff_x20 + 0x30) == 2) {
    FUN_1007551b8();
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      lVar2 = lVar1;
      func_0x000107c3ebcc();
      uVar3 = (uint)lVar2;
      func_0x000107c61170(lVar1);
    }
    *(char *)(unaff_x20 + 0x30) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 1007552f4; end: 100755303;  */

void FUN_1007552f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100755304; end: 10075532f;  */

void FUN_100755304(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 100755330; end: 100755337;  */

void FUN_100755330(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a070dc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100755338; end: 1007553bb;  */

void FUN_100755338(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102a070dc,param_2,FUN_1007553bc,param_2,&UNK_102a070e0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007553bc; end: 1007553e3;  */

void FUN_1007553bc(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007553e4; end: 1007553eb;  */

void FUN_1007553e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007553ec; end: 10075541f;  */

void FUN_1007553ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100755420; end: 100755427;  */

void FUN_100755420(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100755428; end: 100755463;  */

void FUN_100755428(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100755464; end: 10075546b;  */

void FUN_100755464(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10075546c; end: 1007554af;  */

void FUN_10075546c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007554b0; end: 1007554b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007554b0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long alStack_60 [5];
  undefined8 uStack_38;
  
  FUN_100083b20(alStack_60);
  lVar6 = alStack_60[0];
  lVar2 = alStack_60[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef3fa8;
    uVar5 = 0;
    FUN_1000285a8(0x112ef3fa8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_60);
      goto LAB_10075555c;
    }
  }
  alStack_60[1] = 0;
  alStack_60[0] = 0;
  alStack_60[3] = 0;
  alStack_60[2] = 0;
LAB_10075555c:
  func_0x000107c6142c(lVar6);
  if (alStack_60[3] == 0) {
    FUN_10006e7f4(alStack_60);
  }
  else {
    uVar3 = 0x112ef3fa8;
    FUN_1000285a8(0x112ef3fa8,&UNK_10db22b28);
    puVar4 = &uStack_38;
    func_0x000107c6147c(puVar4,alStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_60);
      func_0x000107c61574(uStack_38);
      lVar6 = 0;
      FUN_1005b6764();
      func_0x000107c613fc();
      FUN_100755c2c(alStack_60,lVar6 + 0x10);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004d,0x800000010f141e90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10075561c);
  (*pcVar1)();
}



/* Entry: 1007554b8; end: 10075561b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007554b8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long alStack_60 [5];
  undefined8 uStack_38;
  
  FUN_100083b20(alStack_60);
  lVar6 = alStack_60[0];
  lVar2 = alStack_60[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef3fa8;
    uVar5 = 0;
    FUN_1000285a8(0x112ef3fa8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_60);
      goto LAB_10075555c;
    }
  }
  alStack_60[1] = 0;
  alStack_60[0] = 0;
  alStack_60[3] = 0;
  alStack_60[2] = 0;
LAB_10075555c:
  func_0x000107c6142c(lVar6);
  if (alStack_60[3] == 0) {
    FUN_10006e7f4(alStack_60);
  }
  else {
    uVar3 = 0x112ef3fa8;
    FUN_1000285a8(0x112ef3fa8,&UNK_10db22b28);
    puVar4 = &uStack_38;
    func_0x000107c6147c(puVar4,alStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_60);
      func_0x000107c61574(uStack_38);
      lVar6 = 0;
      FUN_1005b6764();
      func_0x000107c613fc();
      FUN_100755c2c(alStack_60,lVar6 + 0x10);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004d,0x800000010f141e90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10075561c);
  (*pcVar1)();
}



/* Entry: 10075561c; end: 100755697; -[_TtC39ConditionalCameraServicesImplementation39MainCameraCameraUIServiceImplementation opaqueCameraCameraUIScopedServices] */

void FUN_10075561c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(param_1);
  (*pcVar3)(uVar2,lVar1);
  FUN_100083b20(&uStack_48);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_48);
  return;
}



/* Entry: 100755698; end: 1007556a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100755698(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112ed6b10));
  return;
}


