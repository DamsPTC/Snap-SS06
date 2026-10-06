/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032e35c0; end: 1032e35df;  */

void FUN_1032e35c0(void)

{
  func_0x000107c61168(&PTR_PTR_112f56528);
  return;
}



/* Entry: 1032e35e0; end: 1032e35e3;  */

void FUN_1032e35e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1032e35e4; end: 1032e3783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e35e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = lStack_58;
    func_0x000107c615f0(lStack_58);
    func_0x000107c3d14c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c615ec(lStack_58,2);
    func_0x000107c61170(lVar1);
    uVar3 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar7 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_1032e3784;
    func_0x0001000bfde0(FUN_1032e3784,0,uVar7);
    pcVar5 = pcVar4;
    func_0x000102ae5c08();
    func_0x0001000c2068();
    func_0x000107c61574(pcVar4);
    puVar6 = &UNK_110639638;
    func_0x000107c613fc(&UNK_110639638,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcVar4 = FUN_1032e3a8c;
    puVar8 = puVar6;
    (**(code **)(*(long *)pcVar5 + 0x60))(FUN_1032e3a8c);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(puVar6);
    pcVar5 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar8 + 0x10))(uVar3,pcVar5,puVar8);
    func_0x000107c615e8(pcVar4);
    func_0x000107c61574(lVar2);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f56598);
    *(undefined8 *)(unaff_x20 + _DAT_112f56598) = uVar3;
    func_0x000107c61574(uVar7);
  }
  return;
}



/* Entry: 1032e3784; end: 1032e37b3;  */

void FUN_1032e3784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1032e37b4; end: 1032e39b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e37b4(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar8 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f565a0;
  if (param_2 == 0) {
    return;
  }
  uVar9 = *(ulong *)(param_2 + _DAT_112f565a0);
  if (uVar9 == 0) {
LAB_1032e38b4:
    if (lVar8 == 0) goto LAB_1032e3990;
    uVar9 = *(ulong *)(param_2 + lVar1);
    lVar3 = lVar8;
    if (uVar9 == 0) goto LAB_1032e3860;
LAB_1032e38c4:
    func_0x000100c70ba8(0);
    lVar6 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c61174();
    uVar2 = uVar9;
    func_0x000107c60118();
    func_0x000107c61170(uVar9);
    if ((uVar2 & 1) != 0) {
      func_0x000107c61170(param_2);
      param_2 = lVar6;
      goto LAB_1032e3990;
    }
  }
  else {
    if (lVar8 == 0) {
      func_0x000107c61174(uVar9);
LAB_1032e3874:
      func_0x0001000d224c(&uStack_70);
      uVar5 = uStack_70;
      func_0x000107c42824(uStack_70);
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar9);
      uVar5 = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_2 + lVar1) = 0;
      func_0x000107c61170(uVar5);
      goto LAB_1032e38b4;
    }
    func_0x000100c70ba8(0);
    uVar2 = uVar9;
    func_0x000107c61174();
    lVar3 = lVar8;
    func_0x000107c61174();
    uVar4 = uVar2;
    func_0x000107c60118(uVar2,lVar3);
    func_0x000107c61170(lVar3);
    if ((uVar4 & 1) == 0) goto LAB_1032e3874;
    func_0x000107c61170(uVar2);
    uVar9 = *(ulong *)(param_2 + lVar1);
    if (uVar9 != 0) goto LAB_1032e38c4;
LAB_1032e3860:
    func_0x000107c61174(lVar8);
  }
  func_0x0001000d224c(&uStack_70);
  uVar5 = uStack_70;
  uVar7 = uStack_70;
  func_0x000107c49f8c();
  func_0x000107c615e8(uVar5);
  if ((int)uVar7 == 0) {
    func_0x000107c61170(param_2);
    param_2 = lVar8;
  }
  else {
    func_0x0001000d224c(&uStack_70);
    func_0x000107c5bacc(uStack_70);
    func_0x000107c615e8(uStack_70);
    lVar8 = *(long *)(param_2 + lVar1);
    *(long *)(param_2 + lVar1) = lVar3;
    func_0x000107c61170(param_2);
    param_2 = lVar8;
  }
LAB_1032e3990:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1032e39b4; end: 1032e3a13; -[_TtC37LensPlusFreemiumSessionImplementation31LensPlusFreemiumSessionWorkflow init] */

void FUN_1032e39b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusFreemiumSessionImplementation.LensPlusFreemiumSessionWorkflow",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e39e0);
  (*pcVar1)();
}



/* Entry: 1032e3a14; end: 1032e3a6b; -[_TtC37LensPlusFreemiumSessionImplementation31LensPlusFreemiumSessionWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e3a14(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f56588));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f56590));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f56598));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f565a0));
  return;
}



/* Entry: 1032e3a6c; end: 1032e3a8b;  */

void FUN_1032e3a6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbb68);
  return;
}



/* Entry: 1032e3a8c; end: 1032e3a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e3a8c(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar9 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f565a0;
  if (lVar2 == 0) {
    return;
  }
  uVar10 = *(ulong *)(lVar2 + _DAT_112f565a0);
  if (uVar10 == 0) {
LAB_1032e38b4:
    if (lVar9 == 0) goto LAB_1032e3990;
    uVar10 = *(ulong *)(lVar2 + lVar1);
    lVar4 = lVar9;
    if (uVar10 == 0) goto LAB_1032e3860;
LAB_1032e38c4:
    func_0x000100c70ba8(0);
    lVar7 = lVar9;
    func_0x000107c61174(lVar9);
    func_0x000107c61174();
    uVar3 = uVar10;
    func_0x000107c60118();
    func_0x000107c61170(uVar10);
    if ((uVar3 & 1) != 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar7;
      goto LAB_1032e3990;
    }
  }
  else {
    if (lVar9 == 0) {
      func_0x000107c61174(uVar10);
LAB_1032e3874:
      func_0x0001000d224c(&uStack_70);
      uVar6 = uStack_70;
      func_0x000107c42824(uStack_70);
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar10);
      uVar6 = *(undefined8 *)(lVar2 + lVar1);
      *(undefined8 *)(lVar2 + lVar1) = 0;
      func_0x000107c61170(uVar6);
      goto LAB_1032e38b4;
    }
    func_0x000100c70ba8(0);
    uVar3 = uVar10;
    func_0x000107c61174();
    lVar4 = lVar9;
    func_0x000107c61174();
    uVar5 = uVar3;
    func_0x000107c60118(uVar3,lVar4);
    func_0x000107c61170(lVar4);
    if ((uVar5 & 1) == 0) goto LAB_1032e3874;
    func_0x000107c61170(uVar3);
    uVar10 = *(ulong *)(lVar2 + lVar1);
    if (uVar10 != 0) goto LAB_1032e38c4;
LAB_1032e3860:
    func_0x000107c61174(lVar9);
  }
  func_0x0001000d224c(&uStack_70);
  uVar6 = uStack_70;
  uVar8 = uStack_70;
  func_0x000107c49f8c();
  func_0x000107c615e8(uVar6);
  if ((int)uVar8 == 0) {
    func_0x000107c61170(lVar2);
    lVar2 = lVar9;
  }
  else {
    func_0x0001000d224c(&uStack_70);
    func_0x000107c5bacc(uStack_70);
    func_0x000107c615e8(uStack_70);
    lVar9 = *(long *)(lVar2 + lVar1);
    *(long *)(lVar2 + lVar1) = lVar4;
    func_0x000107c61170(lVar2);
    lVar2 = lVar9;
  }
LAB_1032e3990:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1032e3a94; end: 1032e3aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e3a94(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032e3e88();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f565d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032e3b00; end: 1032e3b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e3b00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f565d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032e3b6c; end: 1032e3bcb; -[_TtC48LensCarouselFeaturesScopedFactoryServiceProvider36SCLensCarouselFeaturesScopedServices init] */

void FUN_1032e3b6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesScopedFactoryServiceProvider.SCLensCarouselFeaturesScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e3b98);
  (*pcVar1)();
}



/* Entry: 1032e3bcc; end: 1032e3bdb; -[_TtC48LensCarouselFeaturesScopedFactoryServiceProvider36SCLensCarouselFeaturesScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e3bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f565d8));
  return;
}



/* Entry: 1032e3bdc; end: 1032e3c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e3bdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110639818;
  func_0x000107c613fc(&UNK_110639818,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032e3f20,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032e3c48; end: 1032e3ce3;  */

void FUN_1032e3c48(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110639728;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110639728;
  return;
}



/* Entry: 1032e3ce4; end: 1032e3d1b;  */

void FUN_1032e3ce4(long *param_1)

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



/* Entry: 1032e3d1c; end: 1032e3d23;  */

undefined8 FUN_1032e3d1c(void)

{
  return 0x1b;
}



/* Entry: 1032e3d24; end: 1032e3e57;  */

void FUN_1032e3d24(undefined8 *param_1)

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
  puVar1 = &UNK_110639840;
  func_0x000107c613fc(&UNK_110639840,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032e3ef8;
  func_0x00010058fa64(FUN_1032e3ef8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032e3e58; end: 1032e3e87;  */

undefined ** FUN_1032e3e58(void)

{
  return &PTR_DAT_112f71140;
}



/* Entry: 1032e3e88; end: 1032e3ea7;  */

void FUN_1032e3e88(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbc40);
  return;
}



/* Entry: 1032e3ea8; end: 1032e3ef7;  */

undefined1  [16] FUN_1032e3ea8(void)

{
  return ZEXT816(0x110639778);
}



/* Entry: 1032e3ef8; end: 1032e3f1f;  */

void FUN_1032e3ef8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032e3f20; end: 1032e3f23;  */

void FUN_1032e3f20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032e3f24; end: 1032e4093;  */

void FUN_1032e3f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f56640,&UNK_10dbade50);
  puVar1 = &UNK_110639880;
  func_0x000107c613fc(&UNK_110639880,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1032e4094,puVar1);
  return;
}



/* Entry: 1032e4094; end: 1032e40af;  */

/* WARNING: Possible PIC construction at 0x0001032e4068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e4078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e406c) */
/* WARNING: Removing unreachable block (ram,0x0001032e407c) */

void FUN_1032e4094(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1106398c8;
  func_0x000107c613fc(&UNK_1106398c8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f56648;
  func_0x0001000285a8(0x112f56648,&UNK_10dbade98);
  func_0x000107c613fc();
  pcVar6 = FUN_1032e43d8;
  func_0x0001000841fc(FUN_1032e43d8,puVar4,uVar5);
  func_0x000100084214(&UNK_10dbade60,0x32,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1032e40b0; end: 1032e43d7;  */

void FUN_1032e40b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f56650,&UNK_10dbadea0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1032e5174();
  func_0x000100082720("LensCarouselFeaturesScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f56658,&UNK_10dbadeb0);
  puVar3 = &UNK_1106398f0;
  func_0x000107c613fc(&UNK_1106398f0,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x1032e43e4;
  func_0x0001000823a8(0x1032e43e4,puVar3);
  func_0x000100082720("LensLiveCameraCaptionEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032e3ce4;
  func_0x0001000823a8(FUN_1032e3ce4,0);
  func_0x000100082720("SCLensCarouselFeaturesScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f56660,&UNK_10dbadea8);
  puVar3 = &UNK_110639918;
  func_0x000107c613fc(&UNK_110639918,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1032e4430;
  func_0x0001000823a8(FUN_1032e4430,puVar3);
  func_0x000100082720("SCLensCarouselFeaturesScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f565e0,&UNK_10dbadc00);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1032e443c;
  func_0x0001000823a8(0x1032e443c,pcVar5);
  func_0x000100082720("SCLensCarouselFeaturesScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f565d0,&UNK_10dbadbf0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032e4444;
  func_0x0001000823a8(0x1032e4444,uVar6);
  func_0x000100082720("SCLensCarouselFeaturesScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110639940;
  func_0x000107c613fc(&UNK_110639940,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1032e444c;
  func_0x0001000823a8(0x1032e444c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensCarouselFeaturesScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1032e43d8; end: 1032e43f3;  */

void FUN_1032e43d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f56650,&UNK_10dbadea0);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_1032e5174();
  func_0x000100082720("LensCarouselFeaturesScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f56658,&UNK_10dbadeb0);
  puVar4 = &UNK_1106398f0;
  func_0x000107c613fc(&UNK_1106398f0,0x38,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar5 = 0x1032e43e4;
  func_0x0001000823a8(0x1032e43e4,puVar4);
  func_0x000100082720("LensLiveCameraCaptionEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1032e3ce4;
  func_0x0001000823a8(FUN_1032e3ce4,0);
  func_0x000100082720("SCLensCarouselFeaturesScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f56660,&UNK_10dbadea8);
  puVar4 = &UNK_110639918;
  func_0x000107c613fc(&UNK_110639918,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 **)(puVar4 + 0x18) = puVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(code **)(puVar4 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_1032e4430;
  func_0x0001000823a8(FUN_1032e4430,puVar4);
  func_0x000100082720("SCLensCarouselFeaturesScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f565e0,&UNK_10dbadc00);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1032e443c;
  func_0x0001000823a8(0x1032e443c,pcVar7);
  func_0x000100082720("SCLensCarouselFeaturesScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f565d0,&UNK_10dbadbf0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1032e4444;
  func_0x0001000823a8(0x1032e4444,uVar8);
  func_0x000100082720("SCLensCarouselFeaturesScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110639940;
  func_0x000107c613fc(&UNK_110639940,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(code **)(puVar4 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x1032e444c;
  func_0x0001000823a8(0x1032e444c,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensCarouselFeaturesScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1032e43f4; end: 1032e442f;  */

void FUN_1032e43f4(void)

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



/* Entry: 1032e4430; end: 1032e4453;  */

void FUN_1032e4430(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032e4930(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCLensCarouselFeaturesScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032e4454; end: 1032e45f3;  */

void FUN_1032e4454(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1032e4880();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1032ef4b8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x0001032ef168();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  func_0x000107c6157c();
  FUN_1032ef378();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 1032e45f4; end: 1032e4737;  */

long FUN_1032e45f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_1032ef4b8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001032ef168();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_1032ef378();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1032e4738; end: 1032e477b;  */

void FUN_1032e4738(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032e477c; end: 1032e4783;  */

undefined8 FUN_1032e477c(void)

{
  return 0x1b;
}



/* Entry: 1032e4784; end: 1032e4807;  */

void FUN_1032e4784(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032e48c0,param_2,FUN_1032e48c4,param_2,FUN_1032e48ec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032e4808; end: 1032e484f;  */

undefined8 FUN_1032e4808(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001032ef39c();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1032e4850; end: 1032e487f;  */

undefined ** FUN_1032e4850(void)

{
  return &PTR_DAT_112f71140;
}



/* Entry: 1032e4880; end: 1032e489f;  */

void FUN_1032e4880(void)

{
  func_0x000107c61168(&PTR_PTR_112f566d0);
  return;
}



/* Entry: 1032e48a0; end: 1032e48c3;  */

undefined1  [16] FUN_1032e48a0(void)

{
  return ZEXT816(0x110639998);
}



/* Entry: 1032e48c4; end: 1032e48eb;  */

void FUN_1032e48c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032e48ec; end: 1032e48f3;  */

undefined8 FUN_1032e48ec(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001032ef39c();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1032e48f4; end: 1032e492f;  */

void FUN_1032e48f4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032e4930();
  func_0x0001000a7f38("SCLensCarouselFeaturesScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032e4930; end: 1032e4b1b;  */

void FUN_1032e4930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11065adf0;
  ppuVar4 = &PTR_DAT_112f71140;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106399e8;
  func_0x000107c613fc(&UNK_1106399e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f56750;
  func_0x0001000285a8(0x112f56750,&UNK_10dbae008);
  func_0x0001000a6ee8(&UNK_110639bc8,
                      "LensCarouselFeaturesScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_1032e4b1c,puVar2,uVar3,&UNK_110639bc8,&PTR_DAT_112f567e0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110639998,
                      "LensLiveCameraCaptionEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1032e4bd0,param_3,uVar3,&UNK_110639998,&PTR_DAT_112f56668);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110639a10;
  func_0x000107c613fc(&UNK_110639a10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106397b8,
                      "SCLensCarouselFeaturesScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_1032e4c80,puVar2,uVar3,&UNK_1106397b8,&PTR_DAT_112f565e8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f56758;
  func_0x0001000285a8(0x112f56758,&UNK_10dbae010);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032e4b1c; end: 1032e4b5b;  */

void FUN_1032e4b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032e5258(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensCarouselFeaturesScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1032e4b5c; end: 1032e4bcf;  */

void FUN_1032e4b5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032e4cbc;
  func_0x0001000823a8(0x1032e4cbc,param_3);
  func_0x000100082720("LensLiveCameraCaptionEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032e4bd0; end: 1032e4bd7;  */

void FUN_1032e4bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032e4cbc;
  func_0x0001000823a8();
  func_0x000100082720("LensLiveCameraCaptionEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032e4bd8; end: 1032e4c7f;  */

void FUN_1032e4bd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110639a38;
  func_0x000107c613fc(&UNK_110639a38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032e4cb4;
  func_0x0001000823a8(FUN_1032e4cb4,puVar1);
  func_0x000100082720("SCLensCarouselFeaturesScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032e4c80; end: 1032e4c87;  */

void FUN_1032e4c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110639a38;
  func_0x000107c613fc(&UNK_110639a38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032e4cb4;
  func_0x0001000823a8(FUN_1032e4cb4,puVar3);
  func_0x000100082720("SCLensCarouselFeaturesScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032e4c88; end: 1032e4cb3;  */

void FUN_1032e4c88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032e4cb4; end: 1032e4cc3;  */

void FUN_1032e4cb4(undefined8 *param_1)

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
  puVar1 = &UNK_110639840;
  func_0x000107c613fc(&UNK_110639840,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032e3ef8;
  func_0x00010058fa64(FUN_1032e3ef8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032e4cc4; end: 1032e4d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032e4cc4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032e5084();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f56760) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f56768) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e4d4c);
  (*pcVar1)();
}



/* Entry: 1032e4d4c; end: 1032e4dab; -[_TtC36LensCarouselFeaturesScopeGraphBridge51LensCarouselFeaturesScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032e4d4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesScopeGraphBridge.LensCarouselFeaturesScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e4d78);
  (*pcVar1)();
}



/* Entry: 1032e4dac; end: 1032e4de3; -[_TtC36LensCarouselFeaturesScopeGraphBridge51LensCarouselFeaturesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032e4dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e4dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e4dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f56760));
  return;
}



/* Entry: 1032e4de4; end: 1032e4e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e4de4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f56768),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f56760));
  return;
}



/* Entry: 1032e4e0c; end: 1032e4e2b;  */

void FUN_1032e4e0c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbd00);
  return;
}



/* Entry: 1032e4e2c; end: 1032e4eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032e4e2c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f56798) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f567a0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e4eb4);
  (*pcVar2)();
}



/* Entry: 1032e4eb4; end: 1032e4f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032e4eb4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f56798);
  *(undefined **)(unaff_x20 + _DAT_112f56798) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f567a0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f567a0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110639b28;
  func_0x000107c613fc(&UNK_110639b28,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032e4fa0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032e4f9c; end: 1032e4fa7;  */

void FUN_1032e4f9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032e4fa8; end: 1032e5007; -[_TtC36LensCarouselFeaturesScopeGraphBridge51SCLensCarouselFeaturesScopedServicesSaberEntryPoint init] */

void FUN_1032e4fa8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesScopeGraphBridge.SCLensCarouselFeaturesScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e4fd4);
  (*pcVar1)();
}



/* Entry: 1032e5008; end: 1032e503f; -[_TtC36LensCarouselFeaturesScopeGraphBridge51SCLensCarouselFeaturesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5008(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f567a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f56798));
  return;
}



/* Entry: 1032e5040; end: 1032e5043;  */

void FUN_1032e5040(void)

{
  return;
}



/* Entry: 1032e5044; end: 1032e5063;  */

void FUN_1032e5044(void)

{
  FUN_1032e4eb4();
  return;
}



/* Entry: 1032e5064; end: 1032e5083;  */

void FUN_1032e5064(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbdc8);
  return;
}



/* Entry: 1032e5084; end: 1032e5153;  */

undefined8 FUN_1032e5084(void)

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
  
  func_0x000107c61428(0x112f567d0,&uStack_40,0x20,0);
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
    FUN_1032e5154();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032e5154; end: 1032e5173;  */

void FUN_1032e5154(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbe90);
  return;
}



/* Entry: 1032e5174; end: 1032e51df;  */

void FUN_1032e5174(void)

{
  func_0x0001000285a8(0x112f567d8,&UNK_10dbae0e8);
  func_0x0001000823a8(0x1032e51b4,0);
  return;
}



/* Entry: 1032e51e0; end: 1032e521b; -[_TtC36LensCarouselFeaturesScopeGraphBridge44LensCarouselFeaturesScopeGraphBridgeServices init] */

void FUN_1032e51e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032e521c; end: 1032e524f;  */

void FUN_1032e521c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032e5250; end: 1032e5257;  */

undefined8 FUN_1032e5250(void)

{
  return 0x1b;
}



/* Entry: 1032e5258; end: 1032e53cf;  */

void FUN_1032e5258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110639b70;
  func_0x000107c613fc(&UNK_110639b70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032e53d0,puVar1);
  return;
}



/* Entry: 1032e53d0; end: 1032e53d7;  */

void FUN_1032e53d0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f567d0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f567d0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110639c08;
  func_0x000107c613fc(&UNK_110639c08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032e5484;
  func_0x00010058fa64(0x1032e5484,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032e53d8; end: 1032e5433;  */

void FUN_1032e53d8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f567d0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f567d0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032e5434; end: 1032e548b;  */

undefined ** FUN_1032e5434(void)

{
  return &PTR_DAT_112f71140;
}



/* Entry: 1032e548c; end: 1032e54d3; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e548c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f56830;
  func_0x000107c61428(param_1 + _DAT_112f56830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032e54d4; end: 1032e552b; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e54d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f56830;
  func_0x000107c61428(param_1 + _DAT_112f56830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032e552c; end: 1032e5573; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint lensCarouselFeaturesScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e552c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f56838;
  func_0x000107c61428(param_1 + _DAT_112f56838,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032e5574; end: 1032e55d7; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint setLensCarouselFeaturesScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f56838;
  func_0x000107c61428(param_1 + _DAT_112f56838,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032e55d8; end: 1032e570b;  */

/* WARNING: Possible PIC construction at 0x0001032e5690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e56ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e56c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e5694) */
/* WARNING: Removing unreachable block (ram,0x0001032e56b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e55d8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4ae80();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032e4e0c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032e5084();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e570c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f56760) = lVar5;
    *(long *)(lVar4 + _DAT_112f56768) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032e570c; end: 1032e5733; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032e570c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032e55d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032e5734; end: 1032e5777; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032e5734(undefined8 param_1)

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



/* Entry: 1032e5778; end: 1032e590f;  */

void FUN_1032e5778(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0ec3780)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f13c880,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensCarouselFeaturesScopeGraphBridge/SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e5910);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55c38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032e5910; end: 1032e59bb; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032e5910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032e5778(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032e59bc; end: 1032e5a27; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e59bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f56830,0);
  *(undefined8 *)(param_1 + _DAT_112f56838) = 0;
  *(undefined8 *)(param_1 + _DAT_112f56840) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032e5a28; end: 1032e5a5b;  */

void FUN_1032e5a28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032e5a5c; end: 1032e5aa3; -[SCLensCarouselFeaturesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032e5a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e5a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5a5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f56830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f56838));
  return;
}



/* Entry: 1032e5aa4; end: 1032e5ac3;  */

void FUN_1032e5aa4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cbf40);
  return;
}



/* Entry: 1032e5ac4; end: 1032e5b0b; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5ac4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f56870;
  func_0x000107c61428(param_1 + _DAT_112f56870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032e5b0c; end: 1032e5b63; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f56870;
  func_0x000107c61428(param_1 + _DAT_112f56870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032e5b64; end: 1032e5c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5b64(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1032e5064();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f56798) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032e5c3c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f567a0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f56878);
    *(long **)(unaff_x20 + _DAT_112f56878) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032e5c3c; end: 1032e5c63; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint begin] */

void FUN_1032e5c3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032e5b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032e5c64; end: 1032e5ddb;  */

/* WARNING: Possible PIC construction at 0x0001032e5ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e5d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e5cd0) */
/* WARNING: Removing unreachable block (ram,0x0001032e5d68) */
/* WARNING: Removing unreachable block (ram,0x0001032e5d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5c64(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f56878);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1032e5ddc; end: 1032e5de3;  */

void FUN_1032e5ddc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032e5de4; end: 1032e5e17; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint end] */

void FUN_1032e5de4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032e5c64();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032e5e18; end: 1032e5f37;  */

void FUN_1032e5e18(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "LensCarouselFeaturesScopeGraphBridge/SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e5f38);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032e5f38; end: 1032e5fe3; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032e5f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032e5e18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032e5fe4; end: 1032e6043; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e5fe4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f56870,0);
  *(undefined8 *)(param_1 + _DAT_112f56878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032e6044; end: 1032e6077;  */

void FUN_1032e6044(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032e6078; end: 1032e60af; -[SCSCLensCarouselFeaturesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032e6078(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f56870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f56878));
  return;
}



/* Entry: 1032e60b0; end: 1032e60cf;  */

void FUN_1032e60b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128cc008);
  return;
}



/* Entry: 1032e60d0; end: 1032e64bf;  */

/* WARNING: Possible PIC construction at 0x0001032e644c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e645c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e62b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e6470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e6414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032e6424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032e62bc) */
/* WARNING: Removing unreachable block (ram,0x0001032e646c) */
/* WARNING: Removing unreachable block (ram,0x0001032e6460) */
/* WARNING: Removing unreachable block (ram,0x0001032e6474) */
/* WARNING: Removing unreachable block (ram,0x0001032e6450) */
/* WARNING: Removing unreachable block (ram,0x0001032e6418) */
/* WARNING: Removing unreachable block (ram,0x0001032e6390) */

void FUN_1032e60d0(undefined8 param_1,undefined *param_2,undefined *param_3,ulong param_4,
                  undefined *param_5,undefined *param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  ulong uStack_a0;
  undefined *puStack_98;
  
  puVar9 = *(undefined **)(unaff_x20 + 0x30);
  if (((((puVar9 == (undefined *)0x0) ||
        (puVar8 = *(undefined **)(unaff_x20 + 0x18), puVar8 == (undefined *)0x0)) ||
       ((puVar3 = param_2, param_2 != *(undefined **)(unaff_x20 + 0x10) || puVar8 != param_3 &&
        (func_0x000107c605b8(param_2,param_3,*(undefined **)(unaff_x20 + 0x10),puVar8,0),
        puVar3 = param_3, ((ulong)param_2 & 1) == 0)))) ||
      (*(undefined **)(unaff_x20 + 0x28) == (undefined *)0x0)) ||
     (((param_4 != *(ulong *)(unaff_x20 + 0x20) || (*(undefined **)(unaff_x20 + 0x28) != param_5))
      && (func_0x000107c605b8(), puVar3 = param_5, (param_4 & 1) == 0)))) {
    return;
  }
  if (param_6 == (undefined *)0x0) {
    func_0x000107c615f0(puVar9);
  }
  else {
    func_0x000107c615f0(puVar9);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_6 != (undefined *)0x0) {
      puVar8 = param_6;
      func_0x000107c3f568();
      func_0x000107c61180();
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar8 != (undefined *)0x0) {
        puVar3 = (undefined *)0x112e94530;
        func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
        puVar2 = puVar8;
        func_0x000107c5fc54();
        func_0x000107c61170();
      }
      if ((ulong)puVar2 >> 0x3e == 0) {
        puStack_98 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar2) {
          puVar8 = puVar2;
        }
        func_0x000107c60480();
        puStack_98 = puVar8;
      }
      uStack_a0 = (ulong)puVar2 & 0xffffffffffffff8;
      if (puStack_98 == (undefined *)0x0) {
        func_0x0001023df304();
        func_0x000107c61534();
        *(undefined8 *)(puVar8 + 0x18) = 3;
        *(undefined8 *)(puVar8 + 0x10) = 1;
        *(undefined **)(puVar8 + 0x20) = puVar9;
        func_0x000107c615f0(puVar9);
        FUN_1032e6d5c(puVar8);
        uVar6 = 0x112e94530;
        func_0x0001000285a8(0x112e94530,&UNK_10da9fc20);
        func_0x000107c5fc48(puVar2,uVar6);
        func_0x000107c6142c(puVar2);
        func_0x000107c531ac(param_6);
        puVar9 = param_6;
      }
      else {
        if (((ulong)puVar2 & 0xc000000000000001) == 0) {
          if (*(long *)(uStack_a0 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e64a4);
            (*pcVar1)();
          }
          puVar8 = *(undefined **)(puVar2 + 0x20);
          func_0x000107c615f0(puVar8);
          puVar2 = puVar3;
        }
        else {
          puVar8 = (undefined *)0x0;
          func_0x0001023df5e4();
        }
        puVar3 = puVar8;
        func_0x000107c5c82c();
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c5faec();
        puVar7 = puVar2;
        func_0x000107c61170(puVar3);
        puVar3 = puVar9;
        func_0x000107c5c82c();
        func_0x000107c61180();
        puVar5 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
        if ((puVar4 != puVar5) || (puVar2 != puVar7)) {
          func_0x000107c605b8(puVar4,puVar2,puVar5,puVar7,0);
          puVar9 = puVar8;
        }
      }
      goto code_r0x000107c615e8;
    }
  }
  puVar8 = puVar9;
  func_0x000108e3761c(puVar9,param_1);
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126affe8;
    func_0x000107c61168(PTR_PTR_1126affe8);
    func_0x000107c44410();
    func_0x000107c61180();
    func_0x000107c3d7f4(param_1);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar9);
  return;
}



/* Entry: 1032e64c0; end: 1032e6bd3;  */

void FUN_1032e64c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,uint param_9,
                  byte param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_158;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar2 = PTR_PTR_1126cbf60;
  func_0x000107c61168();
  puVar3 = PTR_PTR_1126cbf68;
  func_0x000107c61168(PTR_PTR_1126cbf68);
  func_0x000107c4239c();
  func_0x000107c61180();
  func_0x000107c5bcec();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  func_0x000107c61434(param_5);
  func_0x000107c6142c(uVar11);
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  lVar4 = param_6;
  uVar11 = param_7;
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c48af4(puVar3);
  func_0x000107c61170(lVar4);
  if (param_8 != 0) {
    func_0x000107c61174();
    lVar4 = param_8;
    func_0x000107c5db08();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lStack_a8 = param_6;
      uStack_a0 = param_7;
      func_0x000107c61434(param_7);
      func_0x000107c5fb78(0x4020,0xe200000000000000);
      func_0x000107c5fb78(lVar5,uVar11);
      uVar10 = uStack_a0;
      lVar4 = lStack_a8;
      if ((param_9 & 1) != 0) {
        lStack_a8 = 0x20a89ce2;
        uStack_a0 = 0xa400000000000000;
        func_0x000107c5fb78(lVar4,uVar10);
        func_0x000107c5fb78(0xa89ce220,0xa400000000000000);
        func_0x000107c6142c(uVar10);
      }
      uVar10 = uStack_a0;
      lVar4 = lStack_a8;
      puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      lStack_158 = lVar4;
      func_0x000107c5fadc(lVar4,uVar10);
      func_0x000107c48af4(puVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61174(puVar9);
      func_0x000107c5fb5c(param_6,param_7);
      if (SCARRY8(param_6,2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e6bd0);
        (*pcVar1)();
      }
      lVar4 = 2;
      if ((param_9 & 1) == 0) {
        lVar4 = 0;
      }
      if (SCARRY8(param_6 + 2,lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032e6bd4);
        (*pcVar1)();
      }
      func_0x000107c5fb5c(lVar5,uVar11);
      func_0x000107c6142c(uVar11);
      puVar3 = PTR_PTR_1126dc090;
      func_0x000107c610f8(PTR_PTR_1126dc090);
      func_0x000107c49184();
      lVar4 = 0x112f569d0;
      func_0x0001000285a8(0x112f569d0,&UNK_10dbae330);
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      uVar6 = 0;
      func_0x0001032e70a4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar11 = 0;
      func_0x000107c60110();
      *(undefined8 *)(lVar4 + 0x20) = uVar11;
      puVar7 = PTR_PTR_1126d2ab0;
      func_0x000107c61168();
      func_0x000107c5c6b4();
      func_0x000107c61180();
      *(undefined **)(lVar4 + 0x28) = puVar7;
      lVar5 = lVar4;
      FUN_1032f0848(lVar4);
      func_0x000107c61588(lVar4);
      func_0x0001032e705c((undefined8 *)(lVar4 + 0x20));
      uVar8 = 0;
      func_0x0001032e70a4(0,0x112f569e0,&PTR_PTR_1126d2ab0);
      uVar11 = uVar8;
      func_0x000100120cb0();
      lVar4 = lVar5;
      func_0x000107c5f9dc(lVar5,uVar6,uVar8,uVar11);
      func_0x000107c6142c(lVar5);
      func_0x000107c59bb4(puVar2);
      func_0x000107c61170(lVar4);
      uVar11 = 1;
      func_0x000107c5fe40(1);
      func_0x000107c3d5c4(puVar9);
      func_0x000107c61170(param_8);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar9);
      puVar3 = puVar9;
      param_7 = uVar10;
      goto LAB_1032e6904;
    }
    func_0x000107c61170(param_8);
  }
  if ((param_9 & 1) == 0) {
    func_0x000107c61434(param_7);
    lStack_158 = param_6;
  }
  else {
    lStack_a8 = 0x20a89ce2;
    uStack_a0 = 0xa400000000000000;
    func_0x000107c5fb78(param_6,param_7);
    func_0x000107c5fb78(0xa89ce220,0xa400000000000000);
    param_7 = uStack_a0;
    lVar4 = lStack_a8;
    puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    lStack_158 = lVar4;
    func_0x000107c5fadc(lVar4,param_7);
    func_0x000107c48af4(puVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar4);
    puVar3 = puVar9;
  }
LAB_1032e6904:
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c43794(0x4031000000000000);
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    lVar4 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    uVar10 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
    uVar11 = 0;
    func_0x0001032e70a4(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    *(undefined **)(lVar4 + 0x28) = puVar9;
    uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar4 + 0x40) = uVar11;
    *(undefined8 *)(lVar4 + 0x48) = uVar6;
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c61174(uVar10);
    func_0x000107c61174(puVar9);
    func_0x000107c61174(uVar6);
    func_0x000107c5e2ac();
    func_0x000107c61180();
    uVar11 = 0;
    func_0x0001032e70a4(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined8 *)(lVar4 + 0x68) = uVar11;
    *(undefined **)(lVar4 + 0x50) = puVar7;
    lVar5 = lVar4;
    func_0x000100ecbca8(lVar4);
    func_0x000107c61588(lVar4);
    uVar11 = 0x112d48398;
    func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
    func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar11);
    uVar10 = 0;
    func_0x000100eca28c(0);
    uVar11 = 0x112d483a0;
    func_0x0001032e70e4(0x112d483a0,&UNK_10d90f180);
    lVar4 = lVar5;
    func_0x000107c5f9dc(lVar5,uVar10,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(lVar5);
    func_0x000107c4adac(puVar3);
    func_0x000107c3d5c8(puVar3);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c532d0(0x3fe0000000000000,puVar2);
  func_0x000107c532d4(param_1,puVar2);
  lVar4 = lStack_158;
  func_0x000107c5fadc(lStack_158,param_7);
  func_0x000107c59c6c(puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c529c4(puVar2);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  func_0x000107c615f0(puVar2);
  func_0x000107c615e8(uVar11);
  if ((param_10 & 1) != 0) {
    lStack_a8 = lStack_158;
    uStack_90 = param_12;
    uStack_88 = param_13;
    uStack_80 = param_14;
    uStack_a0 = param_7;
    uStack_98 = param_1;
    func_0x000107c61434(param_14);
    func_0x000107c61434(param_13);
    func_0x000100087c34(&lStack_a8);
    func_0x000107c6142c(param_14);
    func_0x000107c6142c(param_13);
  }
  func_0x000107c6142c(param_7);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(puVar2);
  return;
}


