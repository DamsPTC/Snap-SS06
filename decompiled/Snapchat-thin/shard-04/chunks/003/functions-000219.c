/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103345ff0; end: 1033460df; -[_TtC26LensInfoCardImplementation30InfoCardOverflowMenuController actionSheetDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103346070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033460b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103346074) */
/* WARNING: Removing unreachable block (ram,0x000103346078) */
/* WARNING: Removing unreachable block (ram,0x0001033460ac) */
/* WARNING: Removing unreachable block (ram,0x0001033460b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103345ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f5b130);
  if (lVar1 != 0) {
    FUN_10334676c(0,0x112f5b170,&PTR_PTR_1126b10a8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar1);
    func_0x000107c60118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1033460e0; end: 10334617b; -[_TtC26LensInfoCardImplementation30InfoCardOverflowMenuController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033460e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f5b120;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined **)(param_1 + _DAT_112f5b128) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112f5b130) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5b138) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10334617c; end: 1033461af;  */

void FUN_10334617c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033461b0; end: 103346207; -[_TtC26LensInfoCardImplementation30InfoCardOverflowMenuController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033461cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033461d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033461b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5b120));
  return;
}



/* Entry: 103346208; end: 103346227;  */

void FUN_103346208(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf800);
  return;
}



/* Entry: 103346228; end: 103346267;  */

void FUN_103346228(void)

{
  FUN_1033454d4();
  return;
}



/* Entry: 103346268; end: 1033462b7;  */

void FUN_103346268(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103345af8(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1033462b8; end: 103346337;  */

undefined * FUN_1033462b8(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103346338; end: 1033463ef;  */

void FUN_103346338(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103346630();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1033463f0; end: 103346527;  */

undefined *
FUN_1033463f0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103346528);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    func_0x0001000285a8(param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_6);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103346528; end: 10334662f;  */

undefined * FUN_103346528(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103346630);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f59e68;
    func_0x0001000285a8(0x112f59e68,&UNK_10dbb3230);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11063f070);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103346630; end: 10334676b;  */

undefined *
FUN_103346630(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10334676c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10334676c(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10334676c; end: 1033467ab;  */

void FUN_10334676c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1033467ac; end: 1033467bb;  */

void FUN_1033467ac(long param_1,long param_2)

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



/* Entry: 1033467bc; end: 103347c73;  */

undefined1  [16] FUN_1033467bc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f13fb50);
  uVar3 = 0x6f666e49736e654c;
  func_0x000107c5fadc(0x6f666e49736e654c,0xec00000064726143);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103346888);
  (*pcVar1)();
}



/* Entry: 103347c74; end: 103347c83;  */

void FUN_103347c74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103347c84; end: 103347ca3;  */

void FUN_103347c84(void)

{
  func_0x000107c61168(&PTR_PTR_112f5b208);
  return;
}



/* Entry: 103347ca4; end: 103347ee3;  */

void FUN_103347ca4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_103347c84();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x657478655f617463;
  func_0x000107c5fadc(0x657478655f617463,0xec0000006c616e72);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807220 = puVar3;
  return;
}



/* Entry: 103347ee4; end: 103347f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103347ee4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5b278) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103347f50; end: 103347faf; -[_TtC50LensModularReplyCameraScopedFactoryServiceProvider38SCLensModularReplyCameraScopedServices init] */

void FUN_103347f50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensModularReplyCameraScopedFactoryServiceProvider.SCLensModularReplyCameraScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103347f7c);
  (*pcVar1)();
}



/* Entry: 103347fb0; end: 103347fbf; -[_TtC50LensModularReplyCameraScopedFactoryServiceProvider38SCLensModularReplyCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103347fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5b278));
  return;
}



/* Entry: 103347fc0; end: 10334802b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103347fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110640b00;
  func_0x000107c613fc(&UNK_110640b00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103348348,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10334802c; end: 1033480c7;  */

void FUN_10334802c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110640a10;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110640a10;
  return;
}



/* Entry: 1033480c8; end: 1033480ff;  */

void FUN_1033480c8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103348100; end: 103348107;  */

undefined8 FUN_103348100(void)

{
  return 0x1b;
}



/* Entry: 103348108; end: 10334823b;  */

void FUN_103348108(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110640b28;
  func_0x000107c613fc(&UNK_110640b28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103348320;
  func_0x00010058fa64(FUN_103348320,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10334823c; end: 10334826b;  */

undefined ** FUN_10334823c(void)

{
  return &PTR_DAT_112fef940;
}



/* Entry: 10334826c; end: 10334828b;  */

void FUN_10334826c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf8d0);
  return;
}



/* Entry: 10334828c; end: 1033482db;  */

undefined1  [16] FUN_10334828c(void)

{
  return ZEXT816(0x110640a60);
}



/* Entry: 1033482dc; end: 10334831f;  */

void FUN_1033482dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5b2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad0c8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f5b2e0 = puVar1;
  return;
}



/* Entry: 103348320; end: 103348347;  */

void FUN_103348320(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103348348; end: 10334834b;  */

void FUN_103348348(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10334834c; end: 1033483c7;  */

void FUN_10334834c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f5b2f0,&UNK_10dbb3538);
  func_0x000107c613fc();
  pcVar1 = FUN_103348748;
  func_0x0001000841fc(FUN_103348748,param_2);
  func_0x000100084214(&UNK_10dbb3500,0x34,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1033483c8; end: 1033483df;  */

void FUN_1033483c8(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f5b2f0,&UNK_10dbb3538);
  func_0x000107c613fc();
  pcVar1 = FUN_103348748;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dbb3500,0x34,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1033483e0; end: 103348747;  */

void FUN_1033483e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5b2f8,&UNK_10dbb3540);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103349544();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_1033495d0();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1033480c8;
  func_0x0001000823a8(FUN_1033480c8,0);
  func_0x000100082720("SCLensModularReplyCameraScopedServicesCleanupRelayServiceProvider",0x41,2);
  puVar5 = puVar2;
  FUN_1033493f8();
  func_0x000100082720("LensModularReplyCameraScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f5b300,&UNK_10dbb3550);
  puVar6 = &UNK_110640b88;
  func_0x000107c613fc(&UNK_110640b88,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103348750;
  func_0x0001000823a8(0x103348750,puVar6);
  func_0x000100082720("LensModularReplyCameraUIEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f5b308,&UNK_10dbb3558);
  puVar6 = &UNK_110640bb0;
  func_0x000107c613fc(&UNK_110640bb0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10334875c;
  func_0x0001000823a8(0x10334875c,puVar6);
  func_0x000100082720("SCLensModularReplyCameraScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f5b280,&UNK_10dbb3290);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103348768;
  func_0x0001000823a8(0x103348768,uVar7);
  func_0x000100082720("SCLensModularReplyCameraScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f5b270,&UNK_10dbb3280);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103348770;
  func_0x0001000823a8(0x103348770,uVar8);
  func_0x000100082720("SCLensModularReplyCameraScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110640bd8;
  func_0x000107c613fc(&UNK_110640bd8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x103348778;
  func_0x0001000823a8(0x103348778,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensModularReplyCameraScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103348748; end: 10334877f;  */

void FUN_103348748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5b2f8,&UNK_10dbb3540);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103349544();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_1033495d0();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1033480c8;
  func_0x0001000823a8(FUN_1033480c8,0);
  func_0x000100082720("SCLensModularReplyCameraScopedServicesCleanupRelayServiceProvider",0x41,2);
  puVar5 = puVar2;
  FUN_1033493f8();
  func_0x000100082720("LensModularReplyCameraScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f5b300,&UNK_10dbb3550);
  puVar6 = &UNK_110640b88;
  func_0x000107c613fc(&UNK_110640b88,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103348750;
  func_0x0001000823a8(0x103348750,puVar6);
  func_0x000100082720("LensModularReplyCameraUIEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f5b308,&UNK_10dbb3558);
  puVar6 = &UNK_110640bb0;
  func_0x000107c613fc(&UNK_110640bb0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10334875c;
  func_0x0001000823a8(0x10334875c,puVar6);
  func_0x000100082720("SCLensModularReplyCameraScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f5b280,&UNK_10dbb3290);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103348768;
  func_0x0001000823a8(0x103348768,uVar7);
  func_0x000100082720("SCLensModularReplyCameraScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f5b270,&UNK_10dbb3280);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103348770;
  func_0x0001000823a8(0x103348770,uVar8);
  func_0x000100082720("SCLensModularReplyCameraScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110640bd8;
  func_0x000107c613fc(&UNK_110640bd8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x103348778;
  func_0x0001000823a8(0x103348778,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensModularReplyCameraScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103348780; end: 10334882f;  */

void FUN_103348780(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103348a8c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103348974(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103348830; end: 10334889f;  */

undefined8 FUN_103348830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103348974(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 1033488a0; end: 1033488d3;  */

void FUN_1033488a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033488d4; end: 1033488db;  */

undefined8 FUN_1033488d4(void)

{
  return 0x1b;
}



/* Entry: 1033488dc; end: 10334895f;  */

void FUN_1033488dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103348acc,param_2,FUN_103348ad0,param_2,0x103348af8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103348960; end: 103348973;  */

void FUN_103348960(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110640bf0;
  return;
}



/* Entry: 103348974; end: 103348a6f;  */

void FUN_103348974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  FUN_103374714(0);
  func_0x000107c613fc();
  uVar2 = param_1;
  FUN_10337454c(param_1,param_2,puVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  FUN_10337455c();
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 103348a70; end: 103348a8b;  */

undefined ** FUN_103348a70(void)

{
  return &PTR_DAT_112fef940;
}



/* Entry: 103348a8c; end: 103348aab;  */

void FUN_103348a8c(void)

{
  func_0x000107c61168(&PTR_PTR_112f5b378);
  return;
}



/* Entry: 103348aac; end: 103348acf;  */

undefined1  [16] FUN_103348aac(void)

{
  return ZEXT816(0x110640c30);
}



/* Entry: 103348ad0; end: 103348b23;  */

void FUN_103348ad0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103348b24; end: 103348b5f;  */

void FUN_103348b24(undefined8 *param_1,undefined8 param_2)

{
  FUN_103348b60();
  func_0x0001000a7f38("SCLensModularReplyCameraScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103348b60; end: 103348d4b;  */

void FUN_103348b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d9790;
  ppuVar4 = &PTR_DAT_112fef940;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110640c80;
  func_0x000107c613fc(&UNK_110640c80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f5b3e8;
  func_0x0001000285a8(0x112f5b3e8,&UNK_10dbb36b0);
  func_0x0001000a6ee8(&UNK_110640ed0,
                      "LensModularReplyCameraScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_103348d4c,puVar2,uVar3,&UNK_110640ed0,&PTR_DAT_112f5b480);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110640c30,
                      "LensModularReplyCameraUIEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_103348e00,param_3,uVar3,&UNK_110640c30,&PTR_DAT_112f5b310);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110640ca8;
  func_0x000107c613fc(&UNK_110640ca8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110640aa0,
                      "SCLensModularReplyCameraScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_103348eb0,puVar2,uVar3,&UNK_110640aa0,&PTR_DAT_112f5b288);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f5b3f0;
  func_0x0001000285a8(0x112f5b3f0,&UNK_10dbb36b8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103348d4c; end: 103348d8b;  */

void FUN_103348d4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103349678(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensModularReplyCameraScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103348d8c; end: 103348dff;  */

void FUN_103348d8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103348eec;
  func_0x0001000823a8(0x103348eec,param_3);
  func_0x000100082720("LensModularReplyCameraUIEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103348e00; end: 103348e07;  */

void FUN_103348e00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103348eec;
  func_0x0001000823a8();
  func_0x000100082720("LensModularReplyCameraUIEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103348e08; end: 103348eaf;  */

void FUN_103348e08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110640cd0;
  func_0x000107c613fc(&UNK_110640cd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103348ee4;
  func_0x0001000823a8(FUN_103348ee4,puVar1);
  func_0x000100082720("SCLensModularReplyCameraScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103348eb0; end: 103348eb7;  */

void FUN_103348eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110640cd0;
  func_0x000107c613fc(&UNK_110640cd0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103348ee4;
  func_0x0001000823a8(FUN_103348ee4,puVar3);
  func_0x000100082720("SCLensModularReplyCameraScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103348eb8; end: 103348ee3;  */

void FUN_103348eb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103348ee4; end: 103348ef3;  */

void FUN_103348ee4(undefined8 *param_1)

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
  puVar1 = &UNK_110640b28;
  func_0x000107c613fc(&UNK_110640b28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103348320;
  func_0x00010058fa64(FUN_103348320,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103348ef4; end: 103348fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103348ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103349308();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f5b3f8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f5b400) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103348fd0);
  (*pcVar1)();
}



/* Entry: 103348fd0; end: 10334902f; -[_TtC38LensModularReplyCameraScopeGraphBridge53LensModularReplyCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_103348fd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensModularReplyCameraScopeGraphBridge.LensModularReplyCameraScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103348ffc);
  (*pcVar1)();
}



/* Entry: 103349030; end: 103349067; -[_TtC38LensModularReplyCameraScopeGraphBridge53LensModularReplyCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010334904c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103349050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5b3f8));
  return;
}



/* Entry: 103349068; end: 10334908f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349068(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5b400),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5b3f8));
  return;
}



/* Entry: 103349090; end: 1033490af;  */

void FUN_103349090(void)

{
  func_0x000107c61168(&PTR_PTR_1128cf990);
  return;
}



/* Entry: 1033490b0; end: 103349137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033490b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5b430) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5b438);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103349138);
  (*pcVar2)();
}



/* Entry: 103349138; end: 10334921f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103349138(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5b430);
  *(undefined **)(unaff_x20 + _DAT_112f5b430) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5b438);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5b438))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110640df0;
  func_0x000107c613fc(&UNK_110640df0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103349224,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103349220; end: 10334922b;  */

void FUN_103349220(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10334922c; end: 10334928b; -[_TtC38LensModularReplyCameraScopeGraphBridge53SCLensModularReplyCameraScopedServicesSaberEntryPoint init] */

void FUN_10334922c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensModularReplyCameraScopeGraphBridge.SCLensModularReplyCameraScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103349258);
  (*pcVar1)();
}



/* Entry: 10334928c; end: 1033492c3; -[_TtC38LensModularReplyCameraScopeGraphBridge53SCLensModularReplyCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334928c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5b430));
  return;
}



/* Entry: 1033492c4; end: 1033492c7;  */

void FUN_1033492c4(void)

{
  return;
}



/* Entry: 1033492c8; end: 1033492e7;  */

void FUN_1033492c8(void)

{
  FUN_103349138();
  return;
}



/* Entry: 1033492e8; end: 103349307;  */

void FUN_1033492e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cfa58);
  return;
}



/* Entry: 103349308; end: 1033493d7;  */

undefined8 FUN_103349308(void)

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
  
  func_0x000107c61428(0x112f5b468,&uStack_40,0x20,0);
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
    FUN_1033493d8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1033493d8; end: 1033493f7;  */

void FUN_1033493d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cfb20);
  return;
}



/* Entry: 1033493f8; end: 103349413;  */

void FUN_1033493f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5b470,&UNK_10dbb3788);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103349480,param_1);
  return;
}



/* Entry: 103349414; end: 10334947f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349414(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1033493d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f5b478) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103349480; end: 103349487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349480(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1033493d8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f5b478) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103349488; end: 1033494d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349488(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5b478) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033494d4; end: 103349533; -[_TtC38LensModularReplyCameraScopeGraphBridge46LensModularReplyCameraScopeGraphBridgeServices init] */

void FUN_1033494d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensModularReplyCameraScopeGraphBridge.LensModularReplyCameraScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103349500);
  (*pcVar1)();
}



/* Entry: 103349534; end: 103349543; -[_TtC38LensModularReplyCameraScopeGraphBridge46LensModularReplyCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5b478));
  return;
}



/* Entry: 103349544; end: 1033495cf;  */

void FUN_103349544(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103349584,0);
  return;
}



/* Entry: 1033495d0; end: 1033495eb;  */

void FUN_1033495d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10334963c,param_1);
  return;
}



/* Entry: 1033495ec; end: 10334963b;  */

void FUN_1033495ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10334963c; end: 10334966f;  */

void FUN_10334963c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103349670; end: 103349677;  */

undefined8 FUN_103349670(void)

{
  return 0x1b;
}



/* Entry: 103349678; end: 1033497ef;  */

void FUN_103349678(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110640e38;
  func_0x000107c613fc(&UNK_110640e38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1033497f0,puVar1);
  return;
}



/* Entry: 1033497f0; end: 1033497f7;  */

void FUN_1033497f0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f5b468,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5b468,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110640f10;
  func_0x000107c613fc(&UNK_110640f10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1033498c4;
  func_0x00010058fa64(0x1033498c4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033497f8; end: 103349853;  */

void FUN_1033497f8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5b468,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5b468,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103349854; end: 1033498cb;  */

undefined ** FUN_103349854(void)

{
  return &PTR_DAT_112fef940;
}



/* Entry: 1033498cc; end: 103349913; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033498cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b4d0;
  func_0x000107c61428(param_1 + _DAT_112f5b4d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103349914; end: 10334996b; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b4d0;
  func_0x000107c61428(param_1 + _DAT_112f5b4d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10334996c; end: 1033499b3; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10334996c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b4d8;
  func_0x000107c61428(param_1 + _DAT_112f5b4d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033499b4; end: 1033499bf; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033499b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b4d8;
  func_0x000107c61428(param_1 + _DAT_112f5b4d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033499c0; end: 103349a07; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint lensModularReplyCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033499c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b4e0;
  func_0x000107c61428(param_1 + _DAT_112f5b4e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103349a08; end: 103349a13; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint setLensModularReplyCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b4e0;
  func_0x000107c61428(param_1 + _DAT_112f5b4e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103349a14; end: 103349a73;  */

void FUN_103349a14(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103349a74; end: 103349c2f;  */

/* WARNING: Possible PIC construction at 0x000103349b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103349bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103349bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103349c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103349bc4) */
/* WARNING: Removing unreachable block (ram,0x000103349bb4) */
/* WARNING: Removing unreachable block (ram,0x000103349b90) */
/* WARNING: Removing unreachable block (ram,0x000103349c08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349a74(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4b2bc();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_103349090();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_103349308();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103349c30);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f5b3f8) = lVar5;
      *(long *)(lVar3 + _DAT_112f5b400) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103349c30; end: 103349c57; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103349c30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103349a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103349c58; end: 103349c9b; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_103349c58(undefined8 param_1)

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



/* Entry: 103349c9c; end: 103349e9f;  */

void FUN_103349c9c(long param_1,long param_2,long param_3)

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
        uVar2 = 0xd000000000000035;
        if (((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0ebff30)) &&
           (func_0x000107c605b8(0xd000000000000035,0x800000010f1400d0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensModularReplyCameraScopeGraphBridge/SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint.swift"
                              ,100,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103349ea0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55ddc();
        goto LAB_103349d28;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_103349d28:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103349ea0; end: 103349f4b; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103349ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103349c9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103349f4c; end: 103349fc3; -[SCLensModularReplyCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103349f4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5b4d0,0);
  *(undefined8 *)(param_1 + _DAT_112f5b4d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5b4e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5b4e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103349fc4; end: 103349ff7;  */

void FUN_103349fc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


