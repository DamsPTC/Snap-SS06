/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10266d898; end: 10266d93f;  */

int FUN_10266d898(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10266d940; end: 10266daa7;  */

void FUN_10266d940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2928,&UNK_10dac78c0);
  puVar1 = &UNK_110530898;
  func_0x000107c613fc(&UNK_110530898,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x10266d9e4,puVar1);
  return;
}



/* Entry: 10266daa8; end: 10266dab7;  */

undefined1  [16] FUN_10266daa8(void)

{
  return ZEXT816(0x1105308c0);
}



/* Entry: 10266dab8; end: 10266daf3;  */

void FUN_10266dab8(void)

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



/* Entry: 10266daf4; end: 10266dbc7;  */

void FUN_10266daf4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112eb2938,&UNK_10dac7910);
  puVar1 = &uStack_58;
  uStack_58 = uVar4;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10266dc78();
  func_0x000100082720("MapInferredSchoolOnboardingDialogServiceProvider",0x30,2);
  puVar3 = puVar2;
  FUN_10266dbc8();
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000100082720("MapInferredSchoolOnboardingDialogEntryPointProvider",0x33,2);
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 10266dbc8; end: 10266dc13;  */

void FUN_10266dbc8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10266dc14,param_1);
  return;
}



/* Entry: 10266dc14; end: 10266dc77;  */

void FUN_10266dc14(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126cb760;
  func_0x000107c610f8();
  func_0x000107c4610c();
  func_0x000107c59bc8();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 10266dc78; end: 10266dd33;  */

void FUN_10266dc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2940,&UNK_10dace7d0);
  puVar1 = &UNK_110530990;
  func_0x000107c613fc(&UNK_110530990,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10266dd34,puVar1);
  return;
}



/* Entry: 10266dd34; end: 10266e153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266dd34(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lStack_98;
  long lStack_90;
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
  FUN_10266e850();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb2948) = uStack_68;
  *(undefined8 *)(lVar1 + _DAT_112eb2950) = uStack_70;
  *(undefined8 *)(lVar1 + _DAT_112eb2958) = uStack_78;
  *(undefined8 *)(lVar1 + _DAT_112eb2960) = uStack_80;
  *(undefined8 *)(lVar1 + _DAT_112eb2968) = uStack_88;
  puVar9 = PTR_s_initWithFrame__1125e2948;
  uVar2 = uStack_68;
  lStack_98 = lVar1;
  lStack_90 = param_2;
  func_0x000107c61174();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  plVar7 = &lStack_98;
  func_0x000107c61154(0,0,0,0,plVar7,puVar9);
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar8 = *(long *)((long)plVar7 + _DAT_112eb2950);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar1 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar1 != 0) {
    lVar8 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar8 != 0) {
      FUN_10266e1ac();
      puVar9 = PTR_PTR_1126aad18;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61170(lVar1);
      func_0x000107c61174();
      func_0x000107c5a050();
      func_0x000107c3d89c(plVar7);
      puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar11 = puVar10;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar11 + 0x18) = 9;
      *(undefined8 *)(puVar11 + 0x10) = 4;
      puVar12 = puVar9;
      func_0x000107c4acb0();
      func_0x000107c61180();
      plVar13 = plVar7;
      func_0x000107c4acb0(plVar7);
      func_0x000107c61180();
      puVar14 = puVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(plVar13);
      *(undefined **)(puVar11 + 0x20) = puVar14;
      puVar12 = puVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      plVar13 = plVar7;
      func_0x000107c5ce8c(plVar7);
      func_0x000107c61180();
      puVar14 = puVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(plVar13);
      *(undefined **)(puVar11 + 0x28) = puVar14;
      puVar12 = puVar9;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      plVar13 = plVar7;
      func_0x000107c5cbe4(plVar7);
      func_0x000107c61180();
      puVar14 = puVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(plVar13);
      *(undefined **)(puVar11 + 0x30) = puVar14;
      puVar12 = puVar9;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      plVar13 = plVar7;
      func_0x000107c3ec1c(plVar7);
      func_0x000107c61180();
      puVar14 = puVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(plVar13);
      *(undefined **)(puVar11 + 0x38) = puVar14;
      uVar15 = 0;
      func_0x000100847984(0);
      puVar12 = puVar11;
      func_0x000107c5fc48(puVar11,uVar15);
      func_0x000107c61574(puVar11);
      func_0x000107c3d048(puVar10);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar12);
    }
  }
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(plVar7);
  *param_1 = plVar7;
  return;
}



/* Entry: 10266e154; end: 10266e1ab; -[_TtC41MapInferredSchoolOnboardingImplementation33MapInferredSchoolOnboardingDialog initWithCoder:] */

void FUN_10266e154(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapInferredSchoolOnboardingImplementation/MapInferredSchoolOnboardingDialog.swift"
                      ,0x51,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10266e1ac);
  (*pcVar1)();
}



/* Entry: 10266e1ac; end: 10266e2eb;  */

undefined * FUN_10266e1ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126aad20;
  func_0x000107c610f8(PTR_PTR_1126aad20);
  func_0x000107c453e4();
  puVar5 = &UNK_1105309f8;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_1105309f8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10266e870;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110530a10;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56ebc(puVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c613fc(&UNK_1105309f8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcStack_60 = (code *)0x10266e894;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110530a38;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56ed4(puVar2);
  func_0x000107c60bd0(ppuVar6);
  return puVar2;
}



/* Entry: 10266e2ec; end: 10266e453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266e2ec(byte param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb2958);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c56238(lVar3);
      func_0x000107c61170(lVar3);
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb2960);
    func_0x000107c44ef0();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      puVar4 = &UNK_1105309f8;
      func_0x000107c613fc(&UNK_1105309f8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_110530a70;
      func_0x000107c613fc(&UNK_110530a70,0x19,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      puVar5[0x18] = param_1 & 1;
      pcStack_40 = FUN_10266e8f4;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1013b7310;
      puStack_48 = &UNK_110530a88;
      puStack_38 = puVar5;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c5d4c4(lVar2);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10266e454);
  (*pcVar1)();
}



/* Entry: 10266e454; end: 10266e4c7;  */

void FUN_10266e454(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined1 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266e4c8,uVar1,uVar2);
  return;
}



/* Entry: 10266e4c8; end: 10266e757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266e4c8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar8 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar2 + 0x10,lVar8,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112eb2968);
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 != 0) {
      if (*(char *)(unaff_x22 + 0x38) == '\x01') {
        if (*(char *)(unaff_x22 + 0x39) == '\x01') {
          func_0x0001068752bc();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10266e574);
            (*pcVar1)();
          }
        }
        else {
          func_0x0001068752a4();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10266e758);
            (*pcVar1)();
          }
        }
        lVar6 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        puVar5 = PTR_PTR_1126afde0;
        func_0x000107c61168(PTR_PTR_1126afde0);
        func_0x000107c5fadc(lVar6,lVar8);
        func_0x000107c6142c(lVar8);
        uVar7 = 0xd000000000000027;
        lVar8 = -0x7ffffffef0f4b820;
        func_0x000107c5fadc(0xd000000000000027);
        func_0x000107c40930(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c61174(puVar5);
        func_0x000107c5c2e0(lVar4);
        func_0x000107c61170(puVar5);
      }
      else {
        func_0x0001068752d4();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10266e754);
          (*pcVar1)();
        }
        puVar5 = PTR_PTR_1126afde0;
        func_0x000107c61168(PTR_PTR_1126afde0);
        lVar8 = -0x7ffffffef0f4b850;
        uVar7 = 0xd000000000000025;
        func_0x000107c5fadc(0xd000000000000025);
        func_0x000107c409d8(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar7);
        func_0x000107c5c2e0(lVar4);
      }
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar4);
    }
    lVar4 = _DAT_112eb2948;
    lVar3 = *(long *)(*(long *)(lVar2 + _DAT_112eb2948) + _DAT_112eb79b8);
    func_0x000107c41864();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar2 + lVar4)) + 0x60))();
    if (lVar3 != 0) {
      func_0x000107c614f0();
      (**(code **)(lVar8 + 8))();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010266e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10266e758; end: 10266e7c7;  */

void FUN_10266e758(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010266e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10266e7c8; end: 10266e7e7;  */

undefined1  [16] FUN_10266e7c8(void)

{
  return ZEXT816(0x1105309b8);
}



/* Entry: 10266e7e8; end: 10266e84f; -[_TtC41MapInferredSchoolOnboardingImplementation33MapInferredSchoolOnboardingDialog .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010266e804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266e824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266e808) */
/* WARNING: Removing unreachable block (ram,0x00010266e828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266e7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb2948));
  return;
}



/* Entry: 10266e850; end: 10266e86f;  */

void FUN_10266e850(void)

{
  func_0x000107c61168(&PTR_PTR_112856370);
  return;
}



/* Entry: 10266e870; end: 10266e89b;  */

void FUN_10266e870(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10266e2ec(0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10266e89c; end: 10266e8f3;  */

void FUN_10266e89c(uint param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10266e2ec(param_1 & 1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10266e8f4; end: 10266ea0f;  */

void FUN_10266e8f4(byte param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar2 = &UNK_1105309f8;
    func_0x000107c613fc(&UNK_1105309f8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar4);
    puVar3 = &UNK_110530ac0;
    func_0x000107c613fc(&UNK_110530ac0,0x1a,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = param_1 & 1;
    puVar3[0x19] = uVar1;
    puVar2 = &UNK_110530ae8;
    func_0x000107c613fc(&UNK_110530ae8,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dac7a00;
    *(undefined **)(puVar2 + 0x18) = puVar3;
    func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac7a10,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10266ea10; end: 10266ea73;  */

void FUN_10266ea10(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x19);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10266ea74;
  *(undefined1 *)((long)plVar4 + 0x39) = uVar2;
  *(undefined1 *)(plVar4 + 7) = uVar1;
  plVar4[5] = lVar5;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[6] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266e4c8,lVar3,lVar5);
  return;
}



/* Entry: 10266ea74; end: 10266eaaf;  */

void FUN_10266ea74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010266eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10266eab0; end: 10266eb1f;  */

void FUN_10266eab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10266eb30;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10266eb20; end: 10266eb33;  */

void FUN_10266eb20(long param_1,long param_2)

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



/* Entry: 10266eb34; end: 10266f7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266eb34(double *param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6,undefined *param_7,undefined *param_8,ulong param_9)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  uint uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double dStack_100;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  uVar10 = (uint)param_9;
  puVar5 = *(undefined **)(param_6 + _DAT_112eb2b28);
  dVar18 = param_3;
  func_0x000107c4077c();
  FUN_10266fdb4();
  puVar14 = param_7;
  if ((uVar10 & 0xff) == 1) goto LAB_10266ed30;
  puStack_b0 = param_7;
  if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f078);
    (*pcVar2)();
  }
  if ((ulong)param_7 >> 0x3e == 0) {
    puVar6 = *(undefined **)((undefined *)((ulong)param_7 & 0xffffffffffffff8) + 0x10);
    puVar14 = puVar6;
    if (param_8 <= puVar6) {
      puVar14 = param_8;
    }
    puVar9 = (undefined *)0x0;
    if (param_8 != (undefined *)0x0) {
      puVar9 = puVar14;
    }
    if ((long)puVar6 < (long)puVar9) {
LAB_10266f0c0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f0c4);
      (*pcVar2)();
    }
  }
  else {
    puVar14 = (undefined *)((ulong)param_7 & 0xffffffffffffff8);
    if (((ulong)param_7 & 0x8000000000000000) != 0) {
      puVar14 = param_7;
    }
    puVar9 = puVar14;
    func_0x000107c60480();
    puVar6 = puVar14;
    func_0x000107c60480();
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f1e4);
      (*pcVar2)();
    }
    puVar6 = puVar9;
    if ((long)param_8 <= (long)puVar9) {
      puVar6 = param_8;
    }
    puVar1 = param_8;
    if (-1 < (long)puVar9) {
      puVar1 = puVar6;
    }
    puVar9 = (undefined *)0x0;
    if (param_8 != (undefined *)0x0) {
      puVar9 = puVar1;
    }
    func_0x000107c60480();
    if ((long)puVar14 < (long)puVar9) goto LAB_10266f0c0;
  }
  if (((ulong)param_7 & 0xc000000000000001) == 0 || puVar9 == (undefined *)0x0) {
    func_0x000107c61434(param_7);
  }
  else {
    uVar7 = 0;
    FUN_102674610(0);
    func_0x000107c61434(param_7);
    puVar14 = (undefined *)0x0;
    do {
      puVar6 = puVar14 + 1;
      func_0x000107c60318(puVar14,param_7,uVar7);
      puVar14 = puVar6;
    } while (puVar9 != puVar6);
  }
  if ((ulong)param_7 >> 0x3e == 0) {
    puVar14 = (undefined *)0x0;
    puVar6 = (undefined *)((ulong)param_7 & 0xffffffffffffff8);
    param_9 = (long)puVar9 << 1;
LAB_10266eca0:
    uVar7 = 0;
    func_0x000107c605fc(0);
    puVar9 = puVar6;
    func_0x000107c615f4(puVar6,2);
    func_0x000107c61480();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c615e8(puVar6);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar11 = *(long *)(puVar9 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(param_9 >> 1,(long)puVar14)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f1d4);
      (*pcVar2)();
    }
    if (lVar11 != (param_9 >> 1) - (long)puVar14) {
      func_0x000107c615e8();
      goto LAB_10266ec80;
    }
    puVar14 = puVar6;
    func_0x000107c61480(puVar6,uVar7);
    func_0x000107c6142c(param_7);
    func_0x000107c615e8(puVar6);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined *)0x0) goto LAB_10266ed30;
  }
  else {
    func_0x000107c6142c(param_7);
    puVar14 = (undefined *)((ulong)param_7 & 0xffffffffffffff8);
    if (((ulong)param_7 & 0x8000000000000000) != 0) {
      puVar14 = param_7;
    }
    puVar6 = (undefined *)0x0;
    func_0x000107c60484(0,puVar9);
    if ((param_9 & 1) != 0) goto LAB_10266eca0;
LAB_10266ec80:
    puVar9 = puVar6;
    func_0x00010266fc88();
    func_0x000107c6142c(param_7);
  }
  puVar14 = puVar9;
  func_0x000107c615e8(puVar6);
LAB_10266ed30:
  puStack_b0 = puVar14;
  if ((ulong)puVar14 >> 0x3e != 0) {
    puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar14) {
      puVar9 = puVar14;
    }
    func_0x000107c60480();
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f074);
      (*pcVar2)();
    }
  }
  func_0x000107c61174();
  FUN_102670000(0,0,param_6);
  func_0x000107c61170(param_6);
  puVar14 = puStack_b0;
  puVar9 = puStack_b0;
  func_0x000107c61434(puStack_b0);
  FUN_10266f7dc();
  puVar6 = puVar9;
  func_0x000107c5fc48();
  func_0x000107c6142c(puVar9);
  uStack_c0 = 0x102670174;
  uStack_b8 = 0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar16 = 5.47077039858234e-315;
  dStack_100 = 5.47077039858234e-315;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_1011450fc;
  puStack_c8 = &UNK_110530c10;
  ppuVar8 = &puStack_e0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000108d31a2c(puVar6,ppuVar8);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  lVar13 = *unaff_x20;
  lVar23 = unaff_x20[3];
  lVar24 = unaff_x20[4];
  lVar25 = unaff_x20[5];
  lVar26 = unaff_x20[6];
  lVar11 = lVar13;
  func_0x000107c3f24c(dVar16,dVar18,param_4,param_5,lVar23,lVar24,lVar25,lVar26);
  func_0x000107c61180();
  dVar17 = *(double *)(lVar11 + _DAT_112fed000);
  dVar19 = *(double *)(lVar11 + _DAT_112fecff8);
  dVar20 = *(double *)(lVar11 + _DAT_112fecfe8);
  dVar21 = (double)unaff_x20[1];
  dVar22 = dVar21;
  func_0x000108d316c0();
  func_0x000107c61170(lVar11);
  uVar15 = (ulong)puVar14 >> 0x3e;
  if (uVar15 != 0) goto LAB_10266f008;
  while( true ) {
    uVar12 = *(ulong *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    func_0x000107c6142c(puVar14);
    bVar3 = dVar17 < param_2;
    puVar9 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    bVar4 = false;
    if ((1 < uVar12) && (bVar4 = false, !NAN(dVar17) && !NAN(param_2))) {
      bVar4 = dVar17 < param_2;
    }
    if (!bVar4) break;
    while( true ) {
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f058);
        (*pcVar2)();
      }
      puVar9 = puVar14;
      func_0x000107c61550();
      if ((uVar15 != 0) ||
         (dVar18 = dVar19, param_4 = dVar20, param_5 = dVar22, ((ulong)puVar9 & 1) == 0)) {
        FUN_10266fd64();
        dVar18 = dVar19;
        param_4 = dVar20;
        param_5 = dVar22;
      }
      uVar15 = (ulong)puVar14 & 0xffffffffffffff8;
      if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f05c);
        (*pcVar2)();
      }
      lVar11 = *(long *)(uVar15 + 0x10) + -1;
      uVar7 = *(undefined8 *)(uVar15 + lVar11 * 8 + 0x20);
      *(long *)(uVar15 + 0x10) = lVar11;
      func_0x000107c61170(uVar7);
      puVar9 = puVar14;
      func_0x000107c61434(puVar14);
      FUN_10266f7dc();
      puVar6 = puVar9;
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar9);
      uStack_c0 = 0x102670174;
      uStack_b8 = 0;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_1011450fc;
      puStack_c8 = &UNK_110530c38;
      ppuVar8 = &puStack_e0;
      dVar16 = dStack_100;
      func_0x000107c60bc4(ppuVar8);
      func_0x000108d31a2c(puVar6,ppuVar8);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar6);
      lVar11 = lVar13;
      func_0x000107c3f24c(dVar16,dVar18,param_4,param_5,lVar23,lVar24,lVar25,lVar26);
      func_0x000107c61180();
      dVar17 = *(double *)(lVar11 + _DAT_112fed000);
      dVar19 = *(double *)(lVar11 + _DAT_112fecff8);
      dVar20 = *(double *)(lVar11 + _DAT_112fecfe8);
      dVar22 = dVar21;
      func_0x000108d316c0();
      func_0x000107c61170(lVar11);
      uVar15 = (ulong)puVar14 >> 0x3e;
      if (uVar15 == 0) break;
LAB_10266f008:
      puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar9 = puVar14;
      }
      puVar6 = puVar9;
      func_0x000107c60480();
      func_0x000107c6142c(puVar14);
      bVar3 = dVar17 < param_2;
      func_0x000107c60480();
      if (((long)puVar6 < 2) || (param_2 <= dVar17)) goto LAB_10266f0c8;
    }
  }
LAB_10266f0c8:
  if (puVar9 == (undefined *)0x1) {
    func_0x000107c4077c();
    param_4 = 11.0;
    func_0x000106c1c7a0();
    func_0x000102673588();
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x18) = 3;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(long *)(puVar5 + 0x20) = param_6;
    func_0x000107c61174();
    func_0x000107c6142c(puVar14);
    puVar14 = puVar5;
    dVar16 = param_2;
    dVar18 = dVar19;
    param_5 = dVar21;
  }
  else {
    if (param_3 < dVar17) {
      bVar3 = true;
    }
    if (bVar3) {
      dVar16 = param_2;
      if (param_2 < dVar17) {
        dVar16 = dVar17;
      }
      param_4 = param_3;
      if (dVar16 <= param_3) {
        param_4 = dVar16;
      }
      func_0x000107c4077c(puVar5);
      func_0x000106c1c7a0();
      dVar18 = param_3;
      param_5 = dVar21;
    }
  }
  *param_1 = dVar16;
  param_1[1] = dVar18;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = (double)puVar14;
  return;
}



/* Entry: 10266f7dc; end: 10266f99f;  */

undefined * FUN_10266f7dc(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10266f9a0);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_102674610(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_102674bbc(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        FUN_102674610(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10266f9a0; end: 10266fa27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10266f9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_3,auStack_50);
  uVar1 = 0;
  FUN_102674610(0);
  func_0x000107c6147c(&lStack_58,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,7);
  func_0x000107c4077c(*(undefined8 *)(lStack_58 + _DAT_112eb2b28));
  func_0x000107c61170(lStack_58);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10266fa28; end: 10266fa2f;  */

void FUN_10266fa28(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 10266fa30; end: 10266fa73;  */

undefined8 * FUN_10266fa30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 10266fa74; end: 10266fae7;  */

undefined8 * FUN_10266fa74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10266fae8; end: 10266fb33;  */

undefined8 * FUN_10266fae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 10266fb34; end: 10266fbd7;  */

int FUN_10266fb34(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10266fbd8; end: 10266fd63;  */

void FUN_10266fbd8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_102677c50();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10266fd64; end: 10266fdb3;  */

/* WARNING: Removing unreachable block (ram,0x000102677ca4) */
/* WARNING: Removing unreachable block (ram,0x000102677cc8) */
/* WARNING: Removing unreachable block (ram,0x000102677cac) */
/* WARNING: Removing unreachable block (ram,0x000102677d9c) */
/* WARNING: Removing unreachable block (ram,0x000102677cb8) */
/* WARNING: Removing unreachable block (ram,0x000102677cc0) */
/* WARNING: Removing unreachable block (ram,0x000102677d08) */
/* WARNING: Removing unreachable block (ram,0x000102677d1c) */
/* WARNING: Removing unreachable block (ram,0x000102677d28) */
/* WARNING: Removing unreachable block (ram,0x000102677d30) */

ulong FUN_10266fd64(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_102677da0(uVar4,uVar3,0x102673588);
  if (-1 < (long)uVar4) {
    FUN_102677e20(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102677d9c);
  (*pcVar1)();
}



/* Entry: 10266fdb4; end: 10266fee3;  */

undefined * FUN_10266fdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_70;
  FUN_10266f7dc();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = param_3;
  func_0x000107c5fc48(param_3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(param_3);
  func_0x000107c45788(puVar3);
  func_0x000107c61170(uVar4);
  uStack_50 = 0x102670178;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011450fc;
  puStack_58 = &UNK_110530c60;
  func_0x000107c60bc4(&puStack_70);
  func_0x000108d320d0(param_1,param_2,puVar3,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  puStack_70 = (undefined *)0x0;
  FUN_102674610(0);
  func_0x000107c61174(puVar3);
  func_0x000107c5fc4c();
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
    return puVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10266fee4);
  (*pcVar2)();
}



/* Entry: 10266fee4; end: 10266ffff;  */

void FUN_10266fee4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10266ffdc);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  FUN_102674610(0);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10266ffe0);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10266fff8);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10266fffc);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102670000);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 102670000; end: 1026700d7;  */

/* WARNING: Removing unreachable block (ram,0x00010266fffc) */

void FUN_102670000(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1026700b4);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)uVar9 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1026700cc);
    (*pcVar6)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1026700d0);
    (*pcVar6)();
  }
  lVar5 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar10 & 0xffffffffffffff8;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar9,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1026700d8);
      (*pcVar6)();
    }
    FUN_10266fbd8(uVar9 + lVar5,1);
    lVar5 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10266ffdc);
      (*pcVar6)();
    }
    uVar9 = *unaff_x20;
    uVar10 = uVar9 & 0xffffffffffffff8;
    puVar1 = (undefined8 *)(uVar10 + 0x20 + param_1 * 8);
    uVar7 = 0;
    FUN_102674610(0);
    func_0x000107c61408(puVar1,lVar5,uVar7);
    lVar4 = 1 - lVar5;
    if (SBORROW8(1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10266ffe0);
      (*pcVar6)();
    }
    if (lVar4 != 0) {
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
        lVar5 = uVar8 - param_2;
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
        lVar5 = uVar8 - param_2;
      }
      if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10266fff8);
        (*pcVar6)();
      }
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)(uVar10 + 0x20 + param_2 * 8);
      if (puVar2 != puVar3 || puVar3 + lVar5 <= puVar2) {
        func_0x000107c610b8(puVar2,puVar3,lVar5 << 3);
      }
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10266fffc);
        (*pcVar6)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + lVar4;
    }
    *puVar1 = param_3;
    func_0x000107c61174(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1026700d4);
  (*pcVar6)();
}



/* Entry: 1026700d8; end: 102670107;  */

void FUN_1026700d8(long param_1,long param_2)

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



/* Entry: 102670108; end: 10267014b;  */

void FUN_102670108(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10267014c; end: 10267017b;  */

void FUN_10267014c(long param_1,long param_2)

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



/* Entry: 10267017c; end: 102670393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10267017c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  dVar7 = param_1;
  func_0x000107c515a0();
  lVar1 = param_5;
  func_0x000107c4c458();
  func_0x000107c61180();
  dVar6 = 75.0;
  lVar2 = lVar1;
  dVar8 = param_3;
  dVar9 = param_4;
  func_0x000107c3f24c(param_1,param_2,param_3,param_4,dVar7 + 52.0 + 70.0 + 20.0,0x4052c00000000000,
                      0x4064000000000000,0x4052c00000000000);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  uVar10 = *(undefined8 *)(lVar2 + _DAT_112fed000);
  uVar11 = *(undefined8 *)(lVar2 + _DAT_112fecff8);
  uVar12 = *(undefined8 *)(lVar2 + _DAT_112fecfe8);
  func_0x000107c3ec60(param_5);
  func_0x000108d316c0(uVar10,uVar11,uVar12,dVar8,dVar9);
  dVar7 = 90.0;
  func_0x000108d318dc(0x4056800000000000,uVar10);
  func_0x000108d318dc(0x4052c00000000000,uVar10);
  func_0x000108d31494(param_1,param_2);
  param_1 = param_1 - dVar6;
  func_0x000108d31494(param_3,param_4);
  dVar6 = dVar6 + param_3;
  param_4 = param_4 - dVar7;
  func_0x000108d31518(param_1,param_2);
  func_0x000108d31518(dVar6,param_4);
  puVar3 = PTR_PTR_1126c5ba8;
  func_0x000107c610f8(PTR_PTR_1126c5ba8);
  func_0x000107c470e4(param_1,param_2);
  puVar4 = PTR_PTR_1126c5ba8;
  func_0x000107c610f8(PTR_PTR_1126c5ba8);
  func_0x000107c470e4(dVar6,param_4);
  puVar5 = PTR_PTR_1126c5bb0;
  func_0x000107c610f8(PTR_PTR_1126c5bb0);
  func_0x000107c48b88();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 102670394; end: 1026705cf;  */

void FUN_102670394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110530d40;
  func_0x000107c613fc(&UNK_110530d40,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x0001000285a8(0x112eb29a0,&UNK_10dac7a90);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001002acf1c(FUN_1026705d0,puVar1);
  return;
}



/* Entry: 1026705d0; end: 1026705e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026705d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar11 = &lStack_70;
  lVar9 = lVar2;
  FUN_102673130();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112eb29a8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eb29b0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eb29b8) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eb29c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(long *)(lVar10 + _DAT_112eb29c8) = lVar2;
  *(undefined8 *)(lVar10 + _DAT_112eb29d0) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112eb29d8) = uVar3;
  *(undefined8 *)(lVar10 + _DAT_112eb29e0) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112eb29e8) = uVar4;
  *(undefined8 *)(lVar10 + _DAT_112eb29f0) = uVar7;
  *(undefined8 *)(lVar10 + _DAT_112eb29f8) = uVar12;
  puVar8 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar12);
  func_0x000107c61154(&lStack_70,puVar8);
  *param_1 = plVar11;
  return;
}



/* Entry: 1026705e4; end: 1026706e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026705e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb29a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29b8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb29c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb29f8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026706e4; end: 1026708f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026706e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_68;
  
  lVar1 = _DAT_112eb29a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb29a8);
  lVar8 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&lStack_68);
    lVar8 = lStack_68;
    uVar3 = *(undefined8 *)(lStack_68 + _DAT_112fecfb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar8);
    func_0x000100083b20(&lStack_68);
    lVar8 = lStack_68;
    lVar4 = lStack_68;
    func_0x000107c4b8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000100083b20(&lStack_68);
    lVar8 = lStack_68;
    lVar5 = lStack_68;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000100083b20(&lStack_68);
    lVar8 = lStack_68;
    lVar6 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    func_0x000100083b20(&lStack_68);
    uVar7 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    uVar9 = uVar7;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = uVar9;
    func_0x000107c5faec();
    func_0x000107c61170(uVar9);
    lVar8 = 0;
    func_0x000102677a94();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x50) = 1;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x10) = uVar3;
    *(long *)(lVar8 + 0x18) = lVar4;
    *(long *)(lVar8 + 0x20) = lVar5;
    *(long *)(lVar8 + 0x28) = lVar6;
    *(long *)(lVar8 + 0x30) = lVar2;
    *(undefined8 *)(lVar8 + 0x38) = uVar7;
    *(undefined8 *)(lVar8 + 0x40) = param_2;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar8;
    func_0x000107c6157c();
    func_0x000107c61574(uVar9);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar8;
}



/* Entry: 1026708f4; end: 102670a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026708f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112eb29b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb29b0);
  lVar6 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&uStack_58);
    uVar7 = uStack_58;
    uVar3 = uStack_58;
    func_0x000107c4c448();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000100083b20(&uStack_58);
    uVar7 = uStack_58;
    uVar4 = uStack_58;
    func_0x000107c4c350();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000100083b20(&uStack_58);
    uVar7 = uStack_58;
    uVar5 = uStack_58;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000100083b20(&uStack_58);
    uVar7 = uStack_58;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(uStack_58);
    lVar6 = 0;
    func_0x00010267444c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x10) = uVar3;
    *(undefined8 *)(lVar6 + 0x18) = uVar4;
    *(undefined8 *)(lVar6 + 0x20) = uVar5;
    *(undefined8 *)(lVar6 + 0x28) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar6;
    func_0x000107c6157c();
    func_0x000107c61574(uVar7);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar6;
}



/* Entry: 102670a54; end: 102670b13;  */

/* WARNING: Possible PIC construction at 0x000102670af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102670af8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102670a54(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112eb29b8) != 0) {
    return;
  }
  FUN_1026710e4();
  puVar1 = &UNK_110530d68;
  func_0x000107c613fc(&UNK_110530d68,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,param_1,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102670b14; end: 102670b43; -[_TtC32MapInitialViewportImplementation29MapInitialViewportCoordinator start] */

void FUN_102670b14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102670a54(&UNK_10dac7aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102670b44; end: 102670baf;  */

void FUN_102670b44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102670bb0,uVar1,uVar2);
  return;
}



/* Entry: 102670bb0; end: 102670c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102670bb0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  FUN_102670a54(&UNK_10dac7be8);
  lVar2 = *(long *)(lVar2 + _DAT_112eb29b8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c6157c(lVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102670c54;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102670c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102670c54; end: 102670c9f;  */

void FUN_102670c54(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102670ca0,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  return;
}



/* Entry: 102670ca0; end: 102670ccf;  */

void FUN_102670ca0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102670ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102670cd0; end: 102670dfb; -[_TtC32MapInitialViewportImplementation29MapInitialViewportCoordinator startWithCompletionHandler:] */

void FUN_102670cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110530db0;
  func_0x000107c613fc(&UNK_110530db0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110530dd8;
  func_0x000107c613fc(&UNK_110530dd8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10dac7b20;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110530e00;
  func_0x000107c613fc(&UNK_110530e00,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10dac7b30;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10dac7b40,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 102670dfc; end: 102670e67;  */

void FUN_102670dfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102670e68,uVar1,uVar2);
  return;
}



/* Entry: 102670e68; end: 102670ec3;  */

void FUN_102670e68(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  plVar4 = (long *)0x40;
  func_0x000107c61174(uVar1);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102670ec4;
  plVar4[2] = *(long *)(unaff_x22 + 0x18);
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[4] = lVar2;
  plVar4[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102670bb0,lVar2,lVar3);
  return;
}



/* Entry: 102670ec4; end: 102670f17;  */

void FUN_102670ec4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar1 = *(long *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  func_0x000107c61170(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102670f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 102670f18; end: 102670fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102670f18(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_1026708f4();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb29c0);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  uStack_50 = puVar1[4];
  FUN_102673318(&uStack_70,auStack_98,0x112eb2a00,&UNK_10dac7ab0);
  FUN_102671000();
  FUN_102674058(4,&uStack_70);
  func_0x000102673360(&uStack_70,0x112eb2a00,&UNK_10dac7ab0);
  func_0x000107c61574(param_1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb29b8);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102671000; end: 1026710bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102671000(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4c458(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c5ea20(lVar1);
    func_0x000107c615e8(lVar1);
  }
  return param_1;
}



/* Entry: 1026710bc; end: 1026710e3; -[_TtC32MapInitialViewportImplementation29MapInitialViewportCoordinator stop] */

void FUN_1026710bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102670f18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026710e4; end: 10267127f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026710e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  puVar1 = puStack_70;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(puStack_70);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61174();
      uVar4 = unaff_x20;
      func_0x000107c417f0();
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(uVar4);
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      func_0x0001048b0b48(uVar3,param_2,0x18);
      uVar4 = 0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      pcStack_50 = FUN_102671738;
      uStack_48 = 0;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1010c8c0c;
      puStack_58 = &UNK_110530f08;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c503b0(0x4024000000000000,puVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
    }
    else {
      func_0x000107c61170();
      func_0x000107c615e8(puVar2);
    }
  }
  return;
}



/* Entry: 102671280; end: 1026712eb;  */

void FUN_102671280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026712ec,uVar1,uVar2);
  return;
}



/* Entry: 1026712ec; end: 102671377;  */

void FUN_1026712ec(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x190;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102671378;
    plVar1[0x26] = lVar3;
    lVar2 = 0;
    func_0x000107c5fcec();
    plVar1[0x27] = lVar2;
    lVar3 = lVar2;
    func_0x000107c5fce8();
    plVar1[0x28] = lVar3;
    func_0x000100eea164();
    plVar1[0x29] = lVar3;
    func_0x000107c5fca8();
    plVar1[0x2a] = lVar2;
    plVar1[0x2b] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102671468,lVar2,lVar3);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000102671374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102671378; end: 1026713c3;  */

void FUN_102671378(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1026713c4,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 1026713c4; end: 1026713f3;  */

void FUN_1026713c4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001026713f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026713f4; end: 102671467;  */

void FUN_1026713f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x138) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x148) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x150) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102671468,uVar1,uVar2);
  return;
}



/* Entry: 102671468; end: 102671557;  */

void FUN_102671468(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x160) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x168) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102671558;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  if (param_1 == 0) {
    param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x170) = param_1;
  *(undefined8 *)(unaff_x22 + 0x178) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026715a4,param_1);
  return;
}



/* Entry: 102671558; end: 1026715a3;  */

void FUN_102671558(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x160);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102671708,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158));
  return;
}



/* Entry: 1026715a4; end: 10267160b;  */

void FUN_1026715a4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x128) = unaff_x22 + 0x10;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10267160c;
  lVar3 = *(long *)(unaff_x22 + 0x130);
  plVar1[8] = unaff_x22 + 0x128;
  plVar1[9] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar1[10] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[0xb] = lVar3;
  func_0x000100eea164();
  plVar1[0xc] = lVar3;
  func_0x000107c5fca8();
  plVar1[0xd] = lVar2;
  plVar1[0xe] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026717b0,lVar2,lVar3);
  return;
}



/* Entry: 10267160c; end: 10267167f;  */

void FUN_10267160c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x180));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x188) = plVar1;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_102671680;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 102671680; end: 102671737;  */

void FUN_102671680(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1026716c4,*(undefined8 *)(lVar1 + 0x170),*(undefined8 *)(lVar1 + 0x178));
  return;
}



/* Entry: 102671738; end: 10267173b;  */

void FUN_102671738(void)

{
  return;
}



/* Entry: 10267173c; end: 1026717af;  */

void FUN_10267173c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026717b0,uVar1,uVar2);
  return;
}



/* Entry: 1026717b0; end: 102671a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026717b0(void)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  code *pcVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  lVar4 = 0;
  func_0x000107c5fd0c();
  pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar11)(uVar3,1,1,lVar4);
  puVar5 = &UNK_110530d68;
  func_0x000107c613fc(&UNK_110530d68,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar9);
  puVar6 = &UNK_110530e28;
  func_0x000107c613fc(&UNK_110530e28,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  func_0x00010175ad14(uVar3,&UNK_10dac7b78,puVar6);
  func_0x000102673360(uVar3,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar3);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar10 = *(ulong *)(unaff_x22 + 0x38);
  uVar3 = uVar10;
  func_0x000107c43e84();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  uVar10 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (uVar10 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c615e8(uVar10);
    uVar3 = uVar1 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (*pcVar11)();
    puVar5 = &UNK_110530d68;
    func_0x000107c613fc(&UNK_110530d68,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,uVar9);
    puVar6 = &UNK_110530e50;
    func_0x000107c613fc(&UNK_110530e50,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    func_0x00010175ad14(uVar3,&UNK_10dac7b88,puVar6);
    func_0x000102673360(uVar3,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0();
  }
  func_0x000107c5fce8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_11034fbf0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar7;
    uVar9 = 0x112dc6b70;
    func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102671a8c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_11034fbe8)
              (unaff_x22 + 0xa0,uVar3,uVar8,uVar9);
    return;
  }
  if (uVar3 == 0) {
    uVar3 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102671ad8,uVar3);
  return;
}



/* Entry: 102671a8c; end: 102671ad7;  */

void FUN_102671a8c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
  func_0x000107c61574(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102671b44,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Entry: 102671ad8; end: 102671af3;  */

void FUN_102671ad8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0xa0,**(undefined8 **)(unaff_x22 + 0x40),FUN_102671af4,unaff_x22 + 0x10);
  return;
}



/* Entry: 102671af4; end: 102671b8b;  */

void FUN_102671af4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x98) = unaff_x20;
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    pcVar1 = (code *)0x102671b44;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    pcVar1 = FUN_102671b8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102671b8c; end: 102671bbf;  */

void FUN_102671b8c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_11034f528)
            (*(undefined8 *)(unaff_x22 + 0x98),"_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,1
             ,0xb9b);
  return;
}



/* Entry: 102671bc0; end: 102671c43;  */

void FUN_102671bc0(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x30) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)0x210;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x102674054;
    plVar1[0x22] = lVar4;
    lVar4 = 0x112eb2a50;
    func_0x0001000285a8(0x112eb2a50,&UNK_10dac7bc0);
    plVar1[0x23] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar1[0x24] = lVar4;
    uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x25] = uVar2;
    lVar4 = 0x112eb2a58;
    func_0x0001000285a8(0x112eb2a58,&UNK_10dac7bc8);
    plVar1[0x26] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar1[0x27] = lVar4;
    uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x28] = uVar2;
    lVar4 = 0x112eb2a60;
    func_0x0001000285a8(0x112eb2a60,&UNK_10dac7bd0);
    plVar1[0x29] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar1[0x2a] = lVar4;
    uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x2b] = uVar2;
    lVar3 = 0;
    func_0x000107c5fcec();
    plVar1[0x2c] = lVar3;
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar1[0x2d] = lVar4;
    func_0x000100eea164();
    plVar1[0x2e] = lVar4;
    func_0x000107c5fca8();
    plVar1[0x2f] = lVar3;
    plVar1[0x30] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102671d54,lVar3,lVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102671c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102671c44; end: 102671d53;  */

void FUN_102671c44(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = unaff_x20;
  lVar4 = 0x112eb2a50;
  func_0x0001000285a8(0x112eb2a50,&UNK_10dac7bc0);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x120) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar1;
  lVar4 = 0x112eb2a58;
  func_0x0001000285a8(0x112eb2a58,&UNK_10dac7bc8);
  *(long *)(unaff_x22 + 0x130) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar1;
  lVar4 = 0x112eb2a60;
  func_0x0001000285a8(0x112eb2a60,&UNK_10dac7bd0);
  *(long *)(unaff_x22 + 0x148) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x158) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x160) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x168) = uVar3;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x170) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x178) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x180) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102671d54,uVar2,uVar3);
  return;
}



/* Entry: 102671d54; end: 102671e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102671d54(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar1 = *(long *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar6 = *(long *)(unaff_x22 + 0x120);
  lVar9 = *(long *)(unaff_x22 + 0x110);
  FUN_1026706e4();
  uVar7 = param_1;
  FUN_102676410();
  func_0x000107c61574(param_1);
  (**(code **)(lVar6 + 0x68))
            (uVar2,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             uVar3);
  func_0x0001000d52ec(uVar4,uVar2);
  func_0x000107c61574(uVar7);
  (**(code **)(lVar6 + 8))(uVar2,uVar3);
  func_0x000107c5fd34(uVar10,uVar5);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  lVar1 = _DAT_112eb29f0;
  uVar2 = _DAT_112eb29b0;
  *(undefined8 *)(unaff_x22 + 0x188) = _DAT_112eb29c0;
  *(undefined8 *)(unaff_x22 + 400) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(lVar9 + lVar1);
  *(undefined ***)(unaff_x22 + 0x1a0) = &PTR____CFConstantStringClassReference_110f72698;
  *(undefined1 *)(unaff_x22 + 0x200) = 1;
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102671ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Entry: 102671ea0; end: 102671ee3;  */

void FUN_102671ea0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102671ee4,*(undefined8 *)(lVar1 + 0x178),*(undefined8 *)(lVar1 + 0x180));
  return;
}



/* Entry: 102671ee4; end: 1026723bb;  */

void FUN_102671ee4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a0 [72];
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar14;
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar15;
  *(long *)(unaff_x22 + 0x1d0) = lVar10;
  if (lVar10 == 1) {
    lVar10 = *(long *)(unaff_x22 + 0x150);
    uVar4 = *(ulong *)(unaff_x22 + 0x158);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x168));
    (**(code **)(lVar10 + 8))(uVar4,uVar11);
    func_0x000107c5fd5c();
    if ((uVar4 & 1) == 0) {
      puVar12 = (undefined8 *)(unaff_x22 + 0x10);
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x110) + *(long *)(unaff_x22 + 0x188));
      FUN_1026708f4();
      uVar11 = puVar1[4];
      uVar15 = *puVar1;
      uVar14 = puVar1[3];
      uVar9 = puVar1[2];
      *(undefined8 *)(unaff_x22 + 0x18) = puVar1[1];
      *puVar12 = uVar15;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
      FUN_102673318(puVar12,unaff_x22 + 0xd8,0x112eb2a00,&UNK_10dac7ab0);
      FUN_102671000();
      FUN_102674058(0,puVar12);
      func_0x000102673360(puVar12,0x112eb2a00,&UNK_10dac7ab0);
      func_0x000107c61574(uVar4);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010267200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x110) + *(long *)(unaff_x22 + 0x188));
  lVar13 = puVar1[4];
  *puVar1 = uVar11;
  puVar1[1] = uVar14;
  puVar1[2] = uVar9;
  puVar1[3] = uVar15;
  puVar1[4] = lVar10;
  func_0x000107c61434(lVar10);
  func_0x000107c6142c();
  FUN_1026708f4();
  lVar2 = *(long *)(lVar13 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar13 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c448d0();
      func_0x000107c615e8();
    }
    if (lVar10 != 0) {
      *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar15;
      *(long *)(unaff_x22 + 0x58) = lVar10;
      FUN_102674a30();
      if (*(long *)(lVar3 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar3 + 0x28));
        uVar4 = 0;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar7 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar3 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
          do {
            if (*(char *)(*(long *)(lVar3 + 0x30) + uVar4) == '\0') break;
            uVar4 = uVar4 + 1 & ~uVar7;
          } while ((*(ulong *)(lVar3 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c();
    }
    lVar3 = *(long *)(lVar13 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
      func_0x000107c61174(uVar5);
      func_0x000107c49ff8();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8();
    }
    if (lVar10 != 0) {
      *(undefined8 *)(unaff_x22 + 0x60) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
      *(long *)(unaff_x22 + 0x80) = lVar10;
      FUN_102674a30();
      if (*(long *)(lVar3 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar3 + 0x28));
        uVar4 = 1;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar7 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar3 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
          do {
            if (*(char *)(*(long *)(lVar3 + 0x30) + uVar4) == '\x01') {
              func_0x000107c6142c();
              goto LAB_1026722b8;
            }
            uVar4 = uVar4 + 1 & ~uVar7;
          } while ((*(ulong *)(lVar3 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c();
      FUN_102674a30();
      func_0x0001026744e4(2,lVar3);
      func_0x000107c6142c(lVar3);
    }
LAB_1026722b8:
    func_0x000107c4bc28(lVar2);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61574();
  if (lVar10 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar9;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar15;
    *(long *)(unaff_x22 + 0xa8) = lVar10;
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x1d8) = lVar13;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1026723bc,uVar5,uVar8);
    return;
  }
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102671ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Entry: 1026723bc; end: 102672523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026723bc(double param_1,double param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x22;
  double dVar10;
  double dVar11;
  double dVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  func_0x000100083b20(unaff_x22 + 0x100);
  lVar9 = *(long *)(unaff_x22 + 0x100);
  lVar6 = *(long *)(lVar9 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar9);
  lVar9 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x1f0) = lVar9;
  func_0x000107c61170(lVar6);
  if (lVar9 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1d8));
    lVar9 = *(long *)(unaff_x22 + 0x178);
    lVar6 = *(long *)(unaff_x22 + 0x180);
    pcVar8 = FUN_1026725ac;
  }
  else {
    bVar1 = *(byte *)(unaff_x22 + 0x200);
    lVar6 = lVar9;
    func_0x000107c4c458(lVar9);
    func_0x000107c61180();
    func_0x000107c3f750();
    func_0x000107c615e8(lVar6);
    if ((bVar1 & 1) != 0) {
      dVar10 = *(double *)(unaff_x22 + 0x1c0);
      dVar11 = *(double *)(unaff_x22 + 0x1c8);
      dVar12 = *(double *)(unaff_x22 + 0x1b8);
      bVar3 = false;
      bVar4 = true;
      if (*(double *)(unaff_x22 + 0x1b0) <= param_1) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(param_1) && !NAN(dVar10)) {
          bVar3 = param_1 == dVar10;
          bVar4 = dVar10 <= param_1;
        }
      }
      bVar2 = true;
      bVar5 = false;
      if (!bVar4 || bVar3) {
        bVar2 = false;
        bVar5 = true;
        if (!NAN(param_2) && !NAN(dVar12)) {
          bVar2 = param_2 < dVar12;
          bVar5 = false;
        }
      }
      bVar3 = false;
      bVar4 = true;
      if (bVar2 == bVar5) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(param_2) && !NAN(dVar11)) {
          bVar3 = param_2 == dVar11;
          bVar4 = dVar11 <= param_2;
        }
      }
      if (bVar4 && !bVar3) {
        func_0x000107c60a04((dVar10 + *(double *)(unaff_x22 + 0x1b0)) * 0.5,(dVar11 + dVar12) * 0.5)
        ;
        FUN_1026736a4(lVar9);
      }
    }
    lVar13 = *(long *)(unaff_x22 + 0x1c0);
    lVar6 = *(long *)(unaff_x22 + 0x1c8);
    lVar15 = *(long *)(unaff_x22 + 0x1b0);
    lVar14 = *(long *)(unaff_x22 + 0x1b8);
    plVar7 = (long *)0x170;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1f8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102672524;
    plVar7[0x1c] = lVar9;
    plVar7[0x1a] = lVar13;
    plVar7[0x1b] = lVar6;
    plVar7[0x18] = lVar15;
    plVar7[0x19] = lVar14;
    lVar9 = 0;
    func_0x000107c5fcec();
    plVar7[0x1d] = lVar9;
    lVar6 = lVar9;
    func_0x000107c5fce8();
    plVar7[0x1e] = lVar6;
    func_0x000100eea164();
    plVar7[0x1f] = lVar6;
    func_0x000107c5fca8();
    plVar7[0x20] = lVar9;
    plVar7[0x21] = lVar6;
    pcVar8 = FUN_102673960;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8,lVar9,lVar6);
  return;
}



/* Entry: 102672524; end: 1026725ab;  */

void FUN_102672524(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102672568,*(undefined8 *)(lVar1 + 0x1e0),*(undefined8 *)(lVar1 + 0x1e8));
  return;
}



/* Entry: 1026725ac; end: 1026726f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026725ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x110) + *(long *)(unaff_x22 + 400));
  func_0x000107c6157c(uVar7);
  func_0x000100083b20(unaff_x22 + 0x108);
  lVar8 = *(long *)(unaff_x22 + 0x108);
  lVar5 = *(long *)(lVar8 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  lVar8 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar8 == 0) {
    param_1 = 0;
  }
  else {
    lVar5 = lVar8;
    func_0x000107c4c458(lVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c5ea20(lVar5);
    func_0x000107c615e8(lVar5);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
  FUN_102674114(param_1,unaff_x22 + 0x88);
  func_0x000107c61574(uVar7);
  FUN_102673690(uVar9,uVar2,uVar4,uVar1,uVar3);
  *(undefined1 *)(unaff_x22 + 0x200) = 0;
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102671ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Entry: 1026726f4; end: 10267270b;  */

void FUN_1026726f4(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267270c,0,0);
  return;
}



/* Entry: 10267270c; end: 1026727d3;  */

void FUN_10267270c(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x30) = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x102672790;
    plVar1[0xd] = lVar5;
    lVar5 = 0x112e00a10;
    func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
    plVar1[0xe] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[0xf] = lVar5;
    uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x10] = uVar2;
    lVar5 = 0x112e009f0;
    func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
    plVar1[0x11] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[0x12] = lVar5;
    uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x13] = uVar2;
    lVar5 = 0x112e009e0;
    func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
    plVar1[0x14] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[0x15] = lVar5;
    uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
    uVar3 = uVar2 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x16] = uVar3;
    uVar2 = uVar2 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x17] = uVar2;
    lVar4 = 0;
    func_0x000107c5fcec();
    plVar1[0x18] = lVar4;
    lVar5 = lVar4;
    func_0x000107c5fce8();
    plVar1[0x19] = lVar5;
    func_0x000100eea164();
    plVar1[0x1a] = lVar5;
    func_0x000107c5fca8();
    plVar1[0x1b] = lVar4;
    plVar1[0x1c] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1026728f0,lVar4,lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010267278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026727d4; end: 1026728ef;  */

void FUN_1026727d4(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  lVar5 = 0x112e009f0;
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  *(long *)(unaff_x22 + 0x88) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
  lVar5 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar1;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026728f0,uVar3,uVar4);
  return;
}



/* Entry: 1026728f0; end: 102672b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026728f0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x60);
  lVar9 = *(long *)(unaff_x22 + 0x60);
  lVar4 = lVar9;
  func_0x000107c43e84();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xe8) = lVar9;
  func_0x000107c61170(lVar4);
  if (lVar9 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar1 = *(long *)(unaff_x22 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar4 = 0x112dc1428;
    func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
    func_0x0001026735e4();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 5;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar5 = lVar9;
    func_0x000107c4c424(lVar9);
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x0001000b637c();
    func_0x000107c61170(lVar5);
    puVar3 = PTR___sytN_11034f1b0;
    uVar7 = 0x102672f98;
    func_0x0001000bfde0(0x102672f98,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar6);
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    func_0x0001000285a8(0x112eb2a30,&UNK_10dac7ba0);
    func_0x000107c4984c(lVar9);
    func_0x000107c61180();
    lVar5 = lVar9;
    func_0x0001000b637c();
    func_0x000107c61170(lVar9);
    uVar7 = 0x102672f9c;
    func_0x0001000bfde0(0x102672f9c,0,puVar3 + 8);
    func_0x000107c61574(lVar5);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    lVar9 = lVar4;
    func_0x0001000c19f0();
    *(long *)(unaff_x22 + 0xf0) = lVar9;
    func_0x000107c61574(lVar4);
    (**(code **)(lVar1 + 0x68))
              (uVar2,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
               ,uVar10);
    func_0x0001000d52ec(uVar8,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102672b6c,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000102672b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102672b6c; end: 102672c47;  */

void FUN_102672b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xb8),uVar1);
  uVar2 = 0x112eb2a38;
  FUN_10267364c(0x112eb2a38,0x112e009e0,&UNK_10d9d0d50,PTR___sScSyxGScisMc_11034fdb0);
  func_0x000107c5fd98(uVar4,uVar1,uVar2);
  uVar2 = 0x112eb2a40;
  FUN_10267364c(0x112eb2a40,0x112e00a10,&UNK_10dc12dc0,PTR___sScS8IteratorVyx_GScIsMc_11034fd98);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102672c48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar3,unaff_x22 + 0x108,*(undefined8 *)(unaff_x22 + 0x70),uVar2);
  return;
}



/* Entry: 102672c48; end: 102672cc7;  */

void FUN_102672c48(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf8));
  if (unaff_x20 == 0) {
    pcVar3 = FUN_102672cc8;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x78);
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    uVar5 = *(undefined8 *)(lVar4 + 0x70);
    func_0x000107c614ac();
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    pcVar3 = FUN_102672f94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102672cc8; end: 102672d73;  */

void FUN_102672cc8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x108) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
    (**(code **)(lVar1 + 8))(uVar3,uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    pcVar2 = FUN_102672e10;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x100) = param_1;
    func_0x000107c5fca8(uVar4,uVar3);
    pcVar2 = FUN_102672d74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar3);
  return;
}



/* Entry: 102672d74; end: 102672daf;  */

void FUN_102672d74(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102672db0,0,0);
  return;
}



/* Entry: 102672db0; end: 102672e0f;  */

void FUN_102672db0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102672e10,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Entry: 102672e10; end: 102672f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102672e10(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ulong *)(unaff_x22 + 200);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar3 & 1) == 0) {
    FUN_1026708f4();
    lVar4 = *(long *)(uVar3 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar5 = 1;
      func_0x0001072433f8(1,0,0);
      func_0x000107c61180();
      func_0x000107c4bcb0(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(lVar4);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar4 = *(long *)(unaff_x22 + 0x68);
    func_0x000107c61574(uVar3);
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112eb29b0);
    puVar1 = (undefined8 *)(lVar4 + _DAT_112eb29c0);
    uVar7 = puVar1[4];
    uVar10 = *puVar1;
    uVar9 = puVar1[3];
    uVar8 = puVar1[2];
    *(undefined8 *)(unaff_x22 + 0x18) = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
    func_0x000107c6157c(uVar6);
    FUN_102673318(unaff_x22 + 0x10,unaff_x22 + 0x38,0x112eb2a00,&UNK_10dac7ab0);
    FUN_102671000();
    FUN_102674058(3,unaff_x22 + 0x10);
    func_0x000102673360(unaff_x22 + 0x10,0x112eb2a00,&UNK_10dac7ab0);
    func_0x000107c61574(uVar2);
    func_0x000107c615e8(uVar5);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102672f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102672f94; end: 102672f9f;  */

void FUN_102672f94(void)

{
  return;
}



/* Entry: 102672fa0; end: 102672ff3;  */

void FUN_102672fa0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102674040;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026712ec,lVar1,lVar2);
  return;
}



/* Entry: 102672ff4; end: 102673053; -[_TtC32MapInitialViewportImplementation29MapInitialViewportCoordinator init] */

void FUN_102672ff4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapInitialViewportImplementation.MapInitialViewportCoordinator",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102673020);
  (*pcVar1)();
}



/* Entry: 102673054; end: 102673063;  */

undefined1  [16] FUN_102673054(void)

{
  return ZEXT816(0x110530d90);
}


