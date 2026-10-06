/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103804db4; end: 103804dff;  */

void FUN_103804db4(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0x60) != 1) {
    func_0x000107c6142c();
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x0001000834e4(unaff_x20 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103804e00; end: 103804eaf;  */

void FUN_103804e00(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar6 = *(long *)(unaff_x20 + 0x60);
  lVar3 = *(long *)(unaff_x20 + 0x68);
  lVar7 = *(long *)(unaff_x20 + 0x70);
  plVar11 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_103804eb0;
  plVar11[0xe] = lVar3;
  plVar11[0xf] = lVar7;
  plVar11[0xc] = lVar2;
  plVar11[0xd] = lVar6;
  plVar11[10] = lVar9;
  plVar11[0xb] = lVar5;
  plVar11[9] = lVar1;
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,lVar1,uVar4);
  uVar8 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x10] = uVar8;
  lVar9 = 0;
  func_0x000107c5eea4();
  plVar11[0x11] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar11[0x12] = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar10 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x13] = uVar10;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x14] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103800680,0,0);
  return;
}



/* Entry: 103804eb0; end: 103804eeb;  */

void FUN_103804eb0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103804ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103804eec; end: 103804fa3;  */

void FUN_103804eec(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  
  lVar3 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar6 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar5 = *(long *)(unaff_x20 + uVar4);
  plVar2 = (long *)(unaff_x20 + uVar4 + 8);
  lVar3 = *plVar2;
  lVar1 = plVar2[1];
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10380510c;
  plVar2[10] = lVar3;
  plVar2[0xb] = lVar1;
  plVar2[8] = unaff_x20 + uVar6;
  plVar2[9] = lVar5;
  lVar3 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  plVar2[0xc] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0xd] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xe] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803510,0,0);
  return;
}



/* Entry: 103804fa4; end: 10380501b;  */

void FUN_103804fa4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103805110;
  plVar3[0x17] = lVar2;
  plVar3[0x18] = lVar4;
  plVar3[0x16] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103802a30,0,0);
  return;
}



/* Entry: 10380501c; end: 10380506b;  */

void FUN_10380501c(void)

{
  FUN_1037ff64c();
  return;
}



/* Entry: 10380506c; end: 103805113;  */

/* WARNING: Removing unreachable block (ram,0x0001037fff9c) */
/* WARNING: Removing unreachable block (ram,0x00010380004c) */

void FUN_10380506c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  if (*(char *)(unaff_x20 + 0x111) != '\x01') {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x111) = 0;
  dVar14 = *(double *)(unaff_x20 + 0xf8);
  if ((*(long *)(unaff_x20 + 0x10) != 0) && ((*(byte *)(unaff_x20 + 0x112) & 1) == 0)) {
    *(double *)(unaff_x20 + 0xf8) = dVar14;
    *(undefined1 *)(unaff_x20 + 0x111) = 0;
    if (*(char *)(unaff_x20 + 0x110) == '\x01') {
      FUN_1038010b8();
    }
    uVar10 = 2;
    if (dVar14 < 0.95) {
      uVar10 = 1;
    }
    uVar11 = 0;
    if (0.1 <= dVar14) {
      uVar11 = uVar10;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x108);
    dVar13 = dVar14;
    func_0x000107c61434();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar15 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
    *(undefined8 *)(unaff_x20 + 0xa8) = uVar11;
    *(double *)(unaff_x20 + 0xb0) = dVar14;
    *(undefined8 *)(unaff_x20 + 0xb8) = uVar10;
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar3;
    FUN_1038049a0(uVar12,uVar1,uVar15,uVar2);
    ppuVar7 = &puStack_70;
    if (((*(byte *)(unaff_x20 + 0xc9) & 1) == 0) && ((*(byte *)(unaff_x20 + 200) & 1) == 0)) {
      func_0x000107c6071c();
      dVar14 = dVar13 - *(double *)(unaff_x20 + 0xd0);
      dVar16 = *(double *)(unaff_x20 + 0x80);
      if (dVar16 <= dVar14) {
        if ((((*(byte *)(unaff_x20 + 200) & 1) == 0) &&
            (lVar9 = *(long *)(unaff_x20 + 0xc0), lVar9 != 1)) &&
           (lVar8 = *(long *)(unaff_x20 + 0x10), lVar8 != 0)) {
          uVar10 = *(undefined8 *)(unaff_x20 + 0xb8);
          uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
          uVar11 = *(undefined8 *)(unaff_x20 + 0xa8);
          uVar15 = *(undefined8 *)(unaff_x20 + 0xb0);
          *(undefined8 *)(unaff_x20 + 0xa8) = 0;
          *(undefined8 *)(unaff_x20 + 0xb0) = 0;
          *(undefined8 *)(unaff_x20 + 0xb8) = 0;
          *(undefined8 *)(unaff_x20 + 0xc0) = 1;
          *(undefined1 *)(unaff_x20 + 200) = 1;
          func_0x000107c615f0(lVar8);
          func_0x000107c6071c();
          *(double *)(unaff_x20 + 0xd0) = dVar13;
          puVar6 = &UNK_1106988f0;
          func_0x000107c613fc(&UNK_1106988f0,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,unaff_x20);
          FUN_103804a30(unaff_x20 + 0x30,auStack_88);
          puVar4 = &UNK_110698b48;
          func_0x000107c613fc(&UNK_110698b48,0x70,7);
          func_0x000100d5ec94(auStack_88,puVar4 + 0x10);
          *(long *)(puVar4 + 0x38) = lVar8;
          *(undefined8 *)(puVar4 + 0x40) = uVar12;
          puVar4[0x48] = (char)uVar11;
          *(undefined8 *)(puVar4 + 0x50) = uVar15;
          *(undefined8 *)(puVar4 + 0x58) = uVar10;
          *(long *)(puVar4 + 0x60) = lVar9;
          *(undefined **)(puVar4 + 0x68) = puVar6;
          func_0x000107c615f0(lVar8);
          uVar10 = 4;
          func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12d88,puVar4,PTR___sytN_11034f1b0 + 8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(uVar10);
        }
        return;
      }
      *(undefined1 *)(unaff_x20 + 0xc9) = 1;
      pcVar5 = "scheduleDeferredUpdateIfNeeded()";
      func_0x0001000c10c0("scheduleDeferredUpdateIfNeeded()");
      func_0x000107c61180();
      puVar6 = &UNK_1106988f0;
      func_0x000107c613fc(&UNK_1106988f0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,unaff_x20);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_110698b60;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puVar6);
      func_0x000107c4e528(dVar16 - dVar14,pcVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(pcVar5);
    }
    return;
  }
  return;
}



/* Entry: 103805114; end: 10380518b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103805114(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112f9ca90;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  lVar2 = lVar1;
  func_0x000107c61618();
  if ((lVar2 != 0) && (func_0x000107c615e8(), lVar2 == param_1)) {
    *(undefined8 *)(lVar1 + 8) = 0;
    func_0x000107c61604(lVar1,0);
  }
  return;
}



/* Entry: 10380518c; end: 1038051bf;  */

void FUN_10380518c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038051c0; end: 1038051cf; -[_TtC23SpotlightWidgetServices36SpotlightUploadToastNavigationBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038051c0(long param_1)

{
  param_1 = param_1 + _DAT_112f9ca90;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038051d0; end: 10380525b;  */

undefined1  [16] FUN_1038051d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR___ss5Int32VN_11034ee20;
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x3a3a,0xe200000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x303a3a,0xe300000000000000);
  auVar1._8_8_ = puVar3;
  auVar1._0_8_ = puVar2;
  return auVar1;
}



/* Entry: 10380525c; end: 10380526b;  */

undefined1  [16] FUN_10380525c(void)

{
  return ZEXT816(0x110698d08);
}



/* Entry: 10380526c; end: 10380528f;  */

undefined8 FUN_10380526c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103805290; end: 103805307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103805290(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112f9cac0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  lVar2 = lVar1;
  func_0x000107c61618();
  if ((lVar2 != 0) && (func_0x000107c615e8(), lVar2 == param_1)) {
    *(undefined8 *)(lVar1 + 8) = 0;
    func_0x000107c61604(lVar1,0);
  }
  return;
}



/* Entry: 103805308; end: 10380533b;  */

void FUN_103805308(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10380533c; end: 10380534b; -[_TtC23SpotlightWidgetServices31SpotlightUploadToastShareBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10380533c(long param_1)

{
  param_1 = param_1 + _DAT_112f9cac0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10380534c; end: 10380536f;  */

undefined8 FUN_10380534c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103805370; end: 1038053af; +[SCSpotlightWidgetConfigKeys spotlightLiveActivityEnabled] */

void FUN_103805370(void)

{
  if (lRam0000000112f9caf0 != -1) {
    func_0x000107c61568(0x112f9caf0,&UNK_100937e34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb90);
  return;
}



/* Entry: 1038053b0; end: 1038053eb; -[SCSpotlightWidgetConfigKeys init] */

void FUN_1038053b0(undefined8 param_1)

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



/* Entry: 1038053ec; end: 10380541f;  */

void FUN_1038053ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103805420; end: 103805423; -[SCSpotlightWidgetConfigKeys .cxx_destruct] */

void FUN_103805420(void)

{
  return;
}



/* Entry: 103805424; end: 103805443;  */

void FUN_103805424(void)

{
  func_0x000107c61168(&PTR_PTR_1128f0f68);
  return;
}



/* Entry: 103805444; end: 103805733;  */

long FUN_103805444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001009378e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = puVar2;
  func_0x000100937a8c();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  func_0x000100937b8c();
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  lVar3 = 0;
  func_0x000100937c9c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  *(long *)(unaff_x20 + 0x40) = lVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  return unaff_x20;
}



/* Entry: 103805734; end: 103805907;  */

void FUN_103805734(long param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,code *param_6
                  )

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = param_2;
    func_0x000107c61174();
    if ((param_3 & 1) == 0) {
      func_0x000107c61174(param_2);
    }
    else {
      lVar2 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c3ef0c();
      func_0x000107c61180();
      if (param_4 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        uVar3 = param_4;
        func_0x000107c5faec();
        func_0x000107c61170(param_4);
        uVar1 = uVar3 & 0xffffffffffff;
        if ((uVar5 & 0x2000000000000000) != 0) {
          uVar1 = uVar5 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c6142c(uVar5);
        }
        else {
          uVar7 = *(undefined8 *)(param_5 + 0x20);
          func_0x000107c61174(lVar2);
          func_0x000107c4b940(uVar7);
          func_0x000107c61428(param_5 + 0x18,auStack_78,0x21,0);
          func_0x000107c61174(lVar2);
          func_0x000107c61434(uVar5);
          uVar4 = *(undefined8 *)(param_5 + 0x18);
          func_0x000107c61558(uVar4);
          uVar6 = *(undefined8 *)(param_5 + 0x18);
          *(undefined8 *)(param_5 + 0x18) = 0x8000000000000000;
          FUN_103806110(lVar2,uVar3,uVar5,uVar4,0x112f9c8f0,&UNK_10dc12fb0);
          func_0x000107c6142c(uVar5);
          *(undefined8 *)(param_5 + 0x18) = uVar6;
          func_0x000107c614a8(auStack_78);
          func_0x000107c5d278(uVar7);
          func_0x000107c6142c(uVar5);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar2);
        }
      }
    }
    if (param_6 != (code *)0x0) {
      (*param_6)(param_1,param_2);
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103805908; end: 103805a03;  */

void FUN_103805908(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c61174();
      func_0x000107c4b940(uVar4);
      func_0x000107c61428(unaff_x20 + 0x18,auStack_58,0x21,0);
      func_0x000107c61174(param_1);
      func_0x000107c61434(param_3);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c61558(uVar2);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
      FUN_103806110(param_1,param_2,param_3,uVar2,0x112f9c8f0,&UNK_10dc12fb0);
      func_0x000107c6142c(param_3);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
      func_0x000107c614a8(auStack_58);
      func_0x000107c5d278(uVar4);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 103805a04; end: 103805ac7;  */

void FUN_103805a04(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4b940(uVar3);
  func_0x000107c61428(unaff_x20 + 0x18,auStack_60,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar2);
  func_0x000107c5d278(uVar3);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_78,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c61428(unaff_x20 + 0x30,auStack_90,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103805ac8; end: 103805cc3;  */

undefined8 FUN_103805ac8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c4b940(uVar2);
      func_0x000107c61428(unaff_x20 + 0x18,auStack_58,0x20,0);
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (*(long *)(lVar4 + 0x10) == 0) {
        uVar3 = 0;
      }
      else {
        func_0x000107c61434(lVar4);
        func_0x000100029284();
        if ((param_2 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
          func_0x000107c61174(uVar3);
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c614a8(auStack_58);
      func_0x000107c5d278(uVar2);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 103805cc4; end: 103805d6f;  */

undefined1  [16] FUN_103805cc4(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_48,0x20,0);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar2 = 0;
    uVar4 = 1;
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar4 = 1;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(auStack_48);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 103805d70; end: 103805de3;  */

void FUN_103805d70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 103805de4; end: 103805e27;  */

undefined8 FUN_103805de4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 103805e28; end: 103805f7f;  */

void FUN_103805e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR___ss5Int32VN_11034ee20;
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x3a3a,0xe200000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x303a3a,0xe300000000000000);
  puVar2 = &UNK_110698d28;
  func_0x000107c613fc(&UNK_110698d28,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110698dd0;
  func_0x000107c613fc(&UNK_110698dd0,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined **)(puVar3 + 0x40) = puVar4;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(puVar4);
  FUN_103806c88(puVar1,puVar4,FUN_103806c84,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(puVar4);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 103805f80; end: 103805f8f;  */

/* WARNING: Possible PIC construction at 0x000103805694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038056f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103805698) */
/* WARNING: Removing unreachable block (ram,0x0001038056f8) */

void FUN_103805f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_110698d50;
  func_0x000107c613fc(&UNK_110698d50,0x30,7);
  *(long *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c61174();
  func_0x000107c6157c();
  func_0x000103806c08(param_2,param_3);
  lVar2 = param_1;
  func_0x000107c3ef0c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
    func_0x000107c610f8(PTR_PTR_1126c3398);
    func_0x000107c45b3c();
  }
  else {
    func_0x000107c5faec();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103805f90; end: 10380604f;  */

void FUN_103805f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_58,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61558(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
  FUN_103806110(param_1,param_2,param_3,uVar1,0x112e02f90,&UNK_10d9d5580);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103806050; end: 103806053;  */

undefined8 FUN_103806050(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_58,0x20,0);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar1 = param_1;
    uVar3 = param_2;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(lVar4);
      func_0x000107c61428(unaff_x20 + 0x28,auStack_58,0x20,0);
      lVar4 = *(long *)(unaff_x20 + 0x28);
      if (*(long *)(lVar4 + 0x10) == 0) {
        uVar2 = 0;
      }
      else {
        func_0x000107c61434(lVar4);
        func_0x000100029284();
        if ((param_2 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
          func_0x000107c61174();
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c614a8(auStack_58);
      return uVar2;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_58);
  return 0;
}



/* Entry: 103806054; end: 10380610b;  */

void FUN_103806054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_58,0x21,0);
  func_0x000107c61434(param_2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61434(param_4);
  func_0x000107c61558(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0x8000000000000000;
  FUN_103806284(param_1,param_2,param_3,param_4,uVar2);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10380610c; end: 10380610f;  */

undefined1  [16] FUN_10380610c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_48,0x20,0);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar2 = 0;
    uVar4 = 1;
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar4 = 1;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(auStack_48);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 103806110; end: 103806283;  */

void FUN_103806110(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103806200);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1038066b8(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038061c4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001038063e0(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x00010380621c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010380621c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103806284);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103806284; end: 1038066b7;  */

void FUN_103806284(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103806360);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    func_0x00010380694c(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103806328);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x000103806540();
    lVar8 = *unaff_x20;
    goto joined_r0x000103806374;
  }
  lVar8 = *unaff_x20;
joined_r0x000103806374:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038063e0);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 1038066b8; end: 103806bf7;  */

void FUN_1038066b8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103806918:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103806948);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103806918;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10380694c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103806bf8; end: 103806c17;  */

void FUN_103806bf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001038054f8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103806c18; end: 103806c83;  */

void FUN_103806c18(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103806c84; end: 103806c87;  */

void FUN_103806c84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001038054f8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103806c88; end: 103807183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103806c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar11);
  lVar1 = _DAT_112f9cbf8;
  func_0x000107c61428(unaff_x20 + _DAT_112f9cbf8,&puStack_90,0x21,0);
  (**(code **)(lVar10 + 0x28))(unaff_x20 + lVar1,lVar11,lVar3);
  func_0x000107c614a8(&puStack_90);
  puVar4 = &UNK_110698e00;
  func_0x000107c613fc(&UNK_110698e00,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110698e28;
  func_0x000107c613fc(&UNK_110698e28,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = uStack_98;
  *(undefined8 *)(puVar5 + 0x30) = param_4;
  (**(code **)(lVar12 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2)
  ;
  puVar6 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(param_4);
  uVar7 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f16d170);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar6);
  func_0x000107c61170(uVar7);
  (**(code **)(lVar12 + 8))(lVar9,lVar2);
  pcStack_70 = FUN_103807214;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1038074f8;
  puStack_78 = &UNK_110698e40;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar8);
  puVar4 = puStack_68;
  func_0x000107c61174(puVar6);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar4);
  func_0x00010846e648(0x3ff0000000000000,10,1,puVar6,ppuVar8,
                      *(undefined8 *)(unaff_x20 + _DAT_112f9cc00));
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 103807184; end: 103807213;  */

void FUN_103807184(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103807224(param_3,param_4,param_5,param_6,param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103807214; end: 103807223;  */

void FUN_103807214(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_103807224(uVar2,uVar1,uVar3,uVar5,param_1);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 103807224; end: 1038074f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar1 = unaff_x20 + _DAT_112f9cc08;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lStack_a8 = 0;
  }
  else {
    lStack_a8 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  uVar2 = 0x6c676e69735f6664;
  func_0x000107c5fadc(0x6c676e69735f6664,0xee0070616e735f65);
  lVar1 = unaff_x20 + _DAT_112f9cc10;
  func_0x000107c61618();
  lVar3 = unaff_x20 + _DAT_112f9cc18;
  func_0x000107c61618();
  uVar4 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar5 = 0;
  func_0x0001000295c4();
  func_0x000107c5ffdc();
  puVar6 = &UNK_110698e00;
  func_0x000107c613fc(&UNK_110698e00,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_110698e78;
  func_0x000107c613fc(&UNK_110698e78,0x40,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined8 *)(puVar7 + 0x28) = param_1;
  *(undefined8 *)(puVar7 + 0x30) = param_2;
  *(undefined8 *)(puVar7 + 0x38) = param_5;
  uStack_78 = 0x1038078ec;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_101feb83c;
  puStack_80 = &UNK_110698e90;
  ppuVar8 = &puStack_98;
  puStack_70 = puVar7;
  func_0x000107c60bc4();
  puVar6 = puStack_70;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar6);
  lVar9 = unaff_x20 + _DAT_112f9cc20;
  func_0x000107c61618();
  lVar10 = unaff_x20 + _DAT_112f9cc28;
  func_0x000107c61618();
  lVar11 = unaff_x20 + _DAT_112f9cc30;
  func_0x000107c61618();
  lVar12 = unaff_x20 + _DAT_112f9cc38;
  func_0x000107c61618();
  lVar13 = unaff_x20 + _DAT_112f9cc40;
  func_0x000107c61618();
  lVar14 = unaff_x20 + _DAT_112f9cc48;
  func_0x000107c61618();
  func_0x00010846f16c(lStack_a8,5,uVar2,lVar1,lVar3,uVar4,0,uVar5,ppuVar8,lVar9,lVar10,lVar11,lVar12
                      ,lVar13,lVar14);
  func_0x000107c61170(lVar9);
  func_0x000107c615e8(lVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar14);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(lStack_a8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1038074f8; end: 103807547;  */

void FUN_1038074f8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103807548; end: 103807563;  */

void FUN_103807548(long param_1,long param_2)

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



/* Entry: 103807564; end: 103807797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807564(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong in_x7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar6 - extraout_x12;
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (param_2 == (code *)0x0) {
      if ((in_x7 == 0) || (func_0x000107c51904(), (in_x7 & 1) == 0)) {
        lVar2 = _DAT_112f9cc50;
        uVar7 = *(undefined8 *)(param_4 + _DAT_112f9cc50);
        pcStack_a8 = param_5;
        func_0x000107c5eea0(lVar5);
        lVar1 = _DAT_112f9cbf8;
        func_0x000107c61428(param_4 + _DAT_112f9cbf8,auStack_a0,0,0);
        (**(code **)(lVar8 + 0x10))(puVar6,param_4 + lVar1,lVar3);
        func_0x000107c5ee68(puVar6);
        pcVar4 = *(code **)(lVar8 + 8);
        (*pcVar4)(puVar6,lVar3);
        (*pcVar4)(lVar5,lVar3);
        func_0x000106cc97e8(param_1,uVar7);
        (*pcStack_a8)(0,param_3);
        func_0x000106cc96ec(*(undefined8 *)(param_4 + lVar2),1);
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_4 + _DAT_112f9cc50);
      pcVar4 = param_2;
      func_0x000107c61174();
      pcStack_a8 = pcVar4;
      func_0x000107c5eea0(lVar5);
      lVar1 = _DAT_112f9cbf8;
      func_0x000107c61428(param_4 + _DAT_112f9cbf8,auStack_a0,0,0);
      (**(code **)(lVar8 + 0x10))(puVar6,param_4 + lVar1,lVar3);
      func_0x000107c5ee68(puVar6);
      pcVar4 = *(code **)(lVar8 + 8);
      (*pcVar4)(puVar6,lVar3);
      (*pcVar4)(lVar5,lVar3);
      func_0x000106cc9764(param_1,uVar7);
      (*param_5)(param_2,0);
      func_0x000107c61170(pcStack_a8);
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 103807798; end: 1038077f7; -[_TtC23SpotlightWidgetServices35SpotlightWidgetMixerLookupRequester init] */

void FUN_103807798(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightWidgetServices.SpotlightWidgetMixerLookupRequester",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038077c4);
  (*pcVar1)();
}



/* Entry: 1038077f8; end: 1038078e3; -[_TtC23SpotlightWidgetServices35SpotlightWidgetMixerLookupRequester .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038077f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61610(param_1 + _DAT_112f9cc08);
  func_0x000107c61610(param_1 + _DAT_112f9cc10);
  func_0x000107c61610(param_1 + _DAT_112f9cc18);
  func_0x000107c61610(param_1 + _DAT_112f9cc20);
  func_0x000102a6ffc8(param_1 + _DAT_112f9cc28);
  func_0x000107c61610(param_1 + _DAT_112f9cc30);
  func_0x000107c61610(param_1 + _DAT_112f9cc38);
  func_0x000107c61610(param_1 + _DAT_112f9cc40);
  func_0x000107c61610(param_1 + _DAT_112f9cc48);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f9cc50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f9cc00));
  lVar1 = _DAT_112f9cbf8;
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001038078e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1038078e4; end: 103807903;  */

void FUN_1038078e4(void)

{
  if (lRam0000000112f9cc80 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7816dc);
  return;
}



/* Entry: 103807904; end: 103807913; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices postingStatusObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f9cc90));
  return;
}



/* Entry: 103807914; end: 103807923; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices uploadToastShareBridge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11380bb98));
  return;
}



/* Entry: 103807924; end: 103807933; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices uploadToastNavigationBridge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11380bba0));
  return;
}



/* Entry: 103807934; end: 103807bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103807934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f9cc90;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112f9cc98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f9cca0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f9cca8) = 0;
  lVar2 = _DAT_112f9ccb0;
  puVar3 = PTR_PTR_1126ad760;
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c45e64();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9ccb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f9ccc0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9ccc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9ccd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9ccd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(unaff_x20 + _DAT_112f9cce0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined1 *)(unaff_x20 + _DAT_112f9cce8) = 0;
  lVar2 = _DAT_11380bba8;
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112f9ccf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f9ccf8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f9cd00) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9cd08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f9cd10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f9cd18) = param_6;
  func_0x0001009382cc(param_7,unaff_x20 + _DAT_112f9cd20,0x112f9cd28,&UNK_10dc13000);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9cd30);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11380bb98) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11380bba0) = param_11;
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000100938314(param_7,0x112f9cd28,&UNK_10dc13000);
  return puVar6;
}



/* Entry: 103807bc4; end: 103807c07; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices setupWidgetDependencyWithWidgetContainer:previewDelegate:] */

/* WARNING: Possible PIC construction at 0x000103807be8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103807bec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f9cc98,param_3);
  return;
}



/* Entry: 103807c08; end: 103807c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807c08(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f9ccf0) = 1;
  return;
}



/* Entry: 103807c1c; end: 103807c2f; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices requestLocalPreviewReland] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807c1c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112f9ccf0) = 1;
  return;
}



/* Entry: 103807c30; end: 103807c47; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices consumePendingLocalPreviewReland] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103807c30(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_112f9ccf0);
  *(undefined1 *)(param_1 + _DAT_112f9ccf0) = 0;
  return uVar1;
}



/* Entry: 103807c48; end: 103807cd3; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices setSpotlightFeedVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112f9cd30);
  if (lVar1 != 0) {
    lVar2 = ((long *)(param_1 + _DAT_112f9cd30))[1];
    func_0x000107c614f0(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x28);
    func_0x000107c61174(param_1);
    (*pcVar3)(param_3,lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103807cd4; end: 103807e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f9ccf8);
  if (lVar6 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000103f1db90();
    func_0x000107c3ebc0();
    uVar1 = (undefined1)lVar6;
  }
  pcVar2 = "launchSpotlightWidget(clientId:thumbnail:)";
  func_0x0001000c10c0("launchSpotlightWidget(clientId:thumbnail:)");
  func_0x000107c61180();
  puVar3 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110698ef0;
  func_0x000107c613fc(&UNK_110698ef0,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  puVar4[0x28] = uVar1;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  pcStack_60 = FUN_10380835c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110698f08;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 103807e24; end: 10380835b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103807e24(long param_1,ulong param_2,ulong param_3,uint param_4,long param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar14,0,0);
  uVar4 = param_1 + 0x10;
  func_0x000107c61618();
  lVar11 = _DAT_112f9ccb0;
  if (uVar4 == 0) {
    return;
  }
  uVar5 = *(ulong *)(uVar4 + _DAT_112f9ccb0);
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar13 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(puVar14);
  uVar13 = uVar13 & 0xffffffffffff;
  if (((ulong)puVar14 & 0x2000000000000000) != 0) {
    uVar13 = (ulong)puVar14 >> 0x38 & 0xf;
  }
  uVar5 = uVar4;
  if (uVar13 != 0) goto LAB_10380831c;
  uVar13 = param_2;
  uVar15 = param_3;
  func_0x000107c5fadc();
  uVar5 = uVar13;
  func_0x000108ea5f00();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  uVar13 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  puVar1 = (undefined8 *)(uVar4 + _DAT_112f9cd08);
  uVar18 = *puVar1;
  lVar16 = puVar1[1];
  uVar6 = uVar18;
  func_0x000107c614f0(uVar18);
  pcVar19 = *(code **)(lVar16 + 0x30);
  func_0x000107c615f0(uVar18);
  func_0x000107c61434(uVar15);
  uVar7 = uVar13;
  (*pcVar19)(uVar13,uVar15,uVar6,lVar16);
  func_0x000107c615e8(uVar18);
  func_0x000107c6142c(uVar15);
  uVar18 = *puVar1;
  lVar16 = puVar1[1];
  uVar6 = uVar18;
  func_0x000107c614f0(uVar18);
  pcVar19 = *(code **)(lVar16 + 0x40);
  func_0x000107c615f0(uVar18);
  uVar5 = param_2;
  (*pcVar19)(param_2,param_3,uVar6,lVar16);
  func_0x000107c615e8(uVar18);
  lVar16 = *(long *)(uVar4 + _DAT_112f9cd30);
  if (lVar16 == 0) {
    if ((param_4 & 1) != 0) {
LAB_10380803c:
      lVar16 = uVar4 + _DAT_112f9cc98;
      func_0x000107c61618();
      if (lVar16 != 0) {
        func_0x000107c61170();
        lVar16 = uVar4 + _DAT_112f9cca0;
        func_0x000107c61618();
        if (lVar16 != 0) {
          func_0x000107c615e8();
          bVar3 = false;
          goto LAB_103808084;
        }
        func_0x000107c6142c(uVar15);
        func_0x000107c61170(uVar4);
        goto LAB_103808310;
      }
    }
LAB_103808204:
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar15);
  }
  else {
    lVar17 = ((long *)(uVar4 + _DAT_112f9cd30))[1];
    lVar8 = lVar16;
    func_0x000107c614f0(lVar16);
    pcVar19 = *(code **)(lVar17 + 8);
    func_0x000107c615f0(lVar16);
    uVar9 = param_2;
    (*pcVar19)(param_2,param_3,uVar7,uVar5,lVar8,lVar17);
    func_0x000107c615e8(lVar16);
    if ((param_4 & 1) == 0) {
      if ((uVar9 & 1) == 0) goto LAB_103808204;
    }
    else if ((uVar9 & 1) == 0) goto LAB_10380803c;
    bVar3 = true;
LAB_103808084:
    puVar10 = PTR_PTR_1126ad760;
    func_0x000107c610f8();
    uVar9 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c45e64();
    func_0x000107c61170(uVar9);
    uVar18 = *(undefined8 *)(uVar4 + lVar11);
    *(undefined **)(uVar4 + lVar11) = puVar10;
    func_0x000107c61174(puVar10);
    func_0x000107c61170(uVar18);
    *(undefined1 *)(uVar4 + _DAT_112f9cce8) = 0;
    func_0x000107c59cec(puVar10);
    func_0x000107c61170(puVar10);
    if (uVar5 != 0) {
      func_0x000107c5a248(*(undefined8 *)(uVar4 + lVar11));
    }
    FUN_10380838c();
    if (param_5 == 0) {
      func_0x000107c6142c(uVar15);
    }
    else {
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      func_0x000107c61174(param_5);
      lVar11 = param_5;
      func_0x000100759c94();
      puVar10 = &UNK_110698ec8;
      func_0x000107c613fc(&UNK_110698ec8,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,uVar4);
      puVar12 = &UNK_1106993a0;
      func_0x000107c613fc(&UNK_1106993a0,0x38,7);
      *(undefined **)(puVar12 + 0x10) = puVar10;
      *(ulong *)(puVar12 + 0x18) = param_2;
      *(ulong *)(puVar12 + 0x20) = param_3;
      *(ulong *)(puVar12 + 0x28) = uVar13;
      *(ulong *)(puVar12 + 0x30) = uVar15;
      func_0x000107c61434(uVar15);
      func_0x000107c61434(param_3);
      func_0x00010075a04c(0,1,FUN_10380d0f8,puVar12);
      func_0x000107c61170(param_5);
      func_0x000107c6142c(uVar15);
      func_0x000107c61574(lVar11);
      func_0x000107c61574(puVar12);
    }
    puVar2 = (ulong *)(uVar4 + _DAT_112f9ccb8);
    uVar13 = puVar2[1];
    *puVar2 = param_2;
    puVar2[1] = param_3;
    func_0x000107c6142c(uVar13);
    *(undefined8 *)(uVar4 + _DAT_112f9ccc0) = 0;
    func_0x0001009382cc(uVar4 + _DAT_112f9cd20,auStack_a0,0x112f9cd28,&UNK_10dc13000);
    if (lStack_88 == 0) {
      func_0x000107c61434(param_3);
      func_0x000100938314(auStack_a0,0x112f9cd28,&UNK_10dc13000);
    }
    else {
      func_0x0001000a8868(auStack_a0,lStack_88);
      pcVar19 = *(code **)(lStack_80 + 8);
      func_0x000107c61434(param_3);
      (*pcVar19)(lStack_88,lStack_80);
      func_0x0001000834e4(auStack_a0);
    }
    func_0x000107c4d664(*(undefined8 *)(uVar4 + _DAT_112f9cc90));
    if (!bVar3) {
      func_0x0001038085bc();
    }
    FUN_1038086e8(param_2,param_3);
    func_0x000107c61170(uVar4);
  }
LAB_103808310:
  func_0x000107c61170(uVar7);
LAB_10380831c:
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10380835c; end: 10380838b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380835c(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long unaff_x20;
  long lVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar18 = *(ulong *)(unaff_x20 + 0x20);
  bVar4 = *(byte *)(unaff_x20 + 0x28);
  lVar19 = *(long *)(unaff_x20 + 0x30);
  puVar16 = auStack_78;
  func_0x000107c61428(lVar13 + 0x10,puVar16,0,0);
  uVar6 = lVar13 + 0x10;
  func_0x000107c61618();
  lVar13 = _DAT_112f9ccb0;
  if (uVar6 == 0) {
    return;
  }
  uVar7 = *(ulong *)(uVar6 + _DAT_112f9ccb0);
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar15 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(puVar16);
  uVar15 = uVar15 & 0xffffffffffff;
  if (((ulong)puVar16 & 0x2000000000000000) != 0) {
    uVar15 = (ulong)puVar16 >> 0x38 & 0xf;
  }
  uVar7 = uVar6;
  if (uVar15 != 0) goto LAB_10380831c;
  uVar15 = uVar3;
  uVar17 = uVar18;
  func_0x000107c5fadc();
  uVar7 = uVar15;
  func_0x000108ea5f00();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  uVar15 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  puVar1 = (undefined8 *)(uVar6 + _DAT_112f9cd08);
  uVar22 = *puVar1;
  lVar20 = puVar1[1];
  uVar8 = uVar22;
  func_0x000107c614f0(uVar22);
  pcVar23 = *(code **)(lVar20 + 0x30);
  func_0x000107c615f0(uVar22);
  func_0x000107c61434(uVar17);
  uVar9 = uVar15;
  (*pcVar23)(uVar15,uVar17,uVar8,lVar20);
  func_0x000107c615e8(uVar22);
  func_0x000107c6142c(uVar17);
  uVar22 = *puVar1;
  lVar20 = puVar1[1];
  uVar8 = uVar22;
  func_0x000107c614f0(uVar22);
  pcVar23 = *(code **)(lVar20 + 0x40);
  func_0x000107c615f0(uVar22);
  uVar7 = uVar3;
  (*pcVar23)(uVar3,uVar18,uVar8,lVar20);
  func_0x000107c615e8(uVar22);
  lVar20 = *(long *)(uVar6 + _DAT_112f9cd30);
  if (lVar20 == 0) {
    if ((bVar4 & 1) != 0) {
LAB_10380803c:
      lVar20 = uVar6 + _DAT_112f9cc98;
      func_0x000107c61618();
      if (lVar20 != 0) {
        func_0x000107c61170();
        lVar20 = uVar6 + _DAT_112f9cca0;
        func_0x000107c61618();
        if (lVar20 != 0) {
          func_0x000107c615e8();
          bVar5 = false;
          goto LAB_103808084;
        }
        func_0x000107c6142c(uVar17);
        func_0x000107c61170(uVar6);
        goto LAB_103808310;
      }
    }
LAB_103808204:
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar17);
  }
  else {
    lVar21 = ((long *)(uVar6 + _DAT_112f9cd30))[1];
    lVar10 = lVar20;
    func_0x000107c614f0(lVar20);
    pcVar23 = *(code **)(lVar21 + 8);
    func_0x000107c615f0(lVar20);
    uVar11 = uVar3;
    (*pcVar23)(uVar3,uVar18,uVar9,uVar7,lVar10,lVar21);
    func_0x000107c615e8(lVar20);
    if ((bVar4 & 1) == 0) {
      if ((uVar11 & 1) == 0) goto LAB_103808204;
    }
    else if ((uVar11 & 1) == 0) goto LAB_10380803c;
    bVar5 = true;
LAB_103808084:
    puVar12 = PTR_PTR_1126ad760;
    func_0x000107c610f8();
    uVar11 = uVar3;
    func_0x000107c5fadc(uVar3,uVar18);
    func_0x000107c45e64();
    func_0x000107c61170(uVar11);
    uVar22 = *(undefined8 *)(uVar6 + lVar13);
    *(undefined **)(uVar6 + lVar13) = puVar12;
    func_0x000107c61174(puVar12);
    func_0x000107c61170(uVar22);
    *(undefined1 *)(uVar6 + _DAT_112f9cce8) = 0;
    func_0x000107c59cec(puVar12);
    func_0x000107c61170(puVar12);
    if (uVar7 != 0) {
      func_0x000107c5a248(*(undefined8 *)(uVar6 + lVar13));
    }
    FUN_10380838c();
    if (lVar19 == 0) {
      func_0x000107c6142c(uVar17);
    }
    else {
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      func_0x000107c61174(lVar19);
      lVar13 = lVar19;
      func_0x000100759c94();
      puVar12 = &UNK_110698ec8;
      func_0x000107c613fc(&UNK_110698ec8,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,uVar6);
      puVar14 = &UNK_1106993a0;
      func_0x000107c613fc(&UNK_1106993a0,0x38,7);
      *(undefined **)(puVar14 + 0x10) = puVar12;
      *(ulong *)(puVar14 + 0x18) = uVar3;
      *(ulong *)(puVar14 + 0x20) = uVar18;
      *(ulong *)(puVar14 + 0x28) = uVar15;
      *(ulong *)(puVar14 + 0x30) = uVar17;
      func_0x000107c61434(uVar17);
      func_0x000107c61434(uVar18);
      func_0x00010075a04c(0,1,FUN_10380d0f8,puVar14);
      func_0x000107c61170(lVar19);
      func_0x000107c6142c(uVar17);
      func_0x000107c61574(lVar13);
      func_0x000107c61574(puVar14);
    }
    puVar2 = (ulong *)(uVar6 + _DAT_112f9ccb8);
    uVar15 = puVar2[1];
    *puVar2 = uVar3;
    puVar2[1] = uVar18;
    func_0x000107c6142c(uVar15);
    *(undefined8 *)(uVar6 + _DAT_112f9ccc0) = 0;
    func_0x0001009382cc(uVar6 + _DAT_112f9cd20,auStack_a0,0x112f9cd28,&UNK_10dc13000);
    if (lStack_88 == 0) {
      func_0x000107c61434(uVar18);
      func_0x000100938314(auStack_a0,0x112f9cd28,&UNK_10dc13000);
    }
    else {
      func_0x0001000a8868(auStack_a0,lStack_88);
      pcVar23 = *(code **)(lStack_80 + 8);
      func_0x000107c61434(uVar18);
      (*pcVar23)(lStack_88,lStack_80);
      func_0x0001000834e4(auStack_a0);
    }
    func_0x000107c4d664(*(undefined8 *)(uVar6 + _DAT_112f9cc90));
    if (!bVar5) {
      func_0x0001038085bc();
    }
    FUN_1038086e8(uVar3,uVar18);
    func_0x000107c61170(uVar6);
  }
LAB_103808310:
  func_0x000107c61170(uVar9);
LAB_10380831c:
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 10380838c; end: 1038086e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380838c(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  func_0x000107c614f0();
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001009382cc(unaff_x20 + _DAT_112f9cd20,auStack_88,0x112f9cd28,&UNK_10dc13000);
  func_0x000100938314(auStack_88,0x112f9cd28,&UNK_10dc13000);
  if (lStack_70 != 0) {
    func_0x0001009382cc(unaff_x20 + _DAT_11380bba8,puVar6,0x112d36580,&UNK_10d9016d0);
    pcVar7 = *(code **)(lVar8 + 0x30);
    puVar2 = puVar6;
    (*pcVar7)(puVar6,1,lVar1);
    if ((int)puVar2 == 1) {
      FUN_10380baf0(lVar4);
      puVar2 = puVar6;
      (*pcVar7)(puVar6,1,lVar1);
      if ((int)puVar2 != 1) {
        func_0x000100938314(puVar6,0x112d36580,&UNK_10d9016d0);
      }
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar4,puVar6,lVar1);
      (**(code **)(lVar8 + 0x38))(lVar4,0,1,lVar1);
    }
    lVar3 = lVar4;
    (*pcVar7)(lVar4,1,lVar1);
    if ((int)lVar3 == 1) {
      func_0x000100938314(lVar4,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar5,lVar4,lVar1);
      FUN_10380c89c(lVar5);
      (**(code **)(lVar8 + 8))(lVar5,lVar1);
    }
  }
  return;
}



/* Entry: 1038086e8; end: 103808883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1038086e8(char *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f9cd08);
  lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f9cd08))[1];
  func_0x000107c614f0(uVar11);
  pcVar1 = param_1;
  pcVar9 = param_2;
  (**(code **)(lVar10 + 0x50))(param_1,param_2,uVar11,lVar10);
  if (pcVar9 == (char *)0x0) {
    FUN_103809034(param_1,param_2,1);
    lVar10 = *(long *)(unaff_x20 + _DAT_112f9cd30);
    if (lVar10 != 0) {
      lVar13 = ((long *)(unaff_x20 + _DAT_112f9cd30))[1];
      func_0x000107c614f0(lVar10);
      (**(code **)(lVar13 + 0x20))(param_1,param_2,0,0,1,lVar10,lVar13);
    }
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f9ccb0);
    func_0x0001002ed07c(0);
    func_0x000107c61174(uVar11);
    uVar2 = 1;
    func_0x000107c6010c(1);
    func_0x000107c59a5c(uVar11);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112f9cc90));
    FUN_103808cb4(param_1,param_2);
    lVar13 = 0;
    func_0x000107c5f7fc();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    lVar10 = _DAT_112f9cca8;
    puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar12 = *(long *)(unaff_x20 + _DAT_112f9cca8);
    if (lVar12 != 0) {
      func_0x000107c6157c(lVar12);
      func_0x000107c5f848();
      func_0x000107c61574(lVar12);
    }
    puVar8 = &UNK_110698ec8;
    puVar3 = puVar8;
    func_0x000107c613fc(&UNK_110698ec8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,unaff_x20);
    puVar4 = &UNK_1106991e8;
    func_0x000107c613fc(&UNK_1106991e8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(char **)(puVar4 + 0x18) = param_1;
    *(char **)(puVar4 + 0x20) = param_2;
    uStack_80 = 0x10380c888;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110699200;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar11 = 0x112d4af88;
    FUN_10380d050(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_2);
    uVar2 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = uVar2;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar7,&puStack_a8,uVar2,uVar6,lVar13,uVar11);
    func_0x000107c5f850();
    func_0x000107c613fc();
    func_0x000107c5f844(puVar7,ppuVar5);
    puVar4 = puStack_78;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar10);
    *(undefined1 **)(unaff_x20 + lVar10) = puVar7;
    func_0x000107c61574(uVar11);
    pcVar1 = "dismissWidgetWithDelay(clientId:)";
    func_0x0001000c10c0("dismissWidgetWithDelay(clientId:)");
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_110698ec8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,unaff_x20);
    uStack_80 = 0x10380c894;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110699228;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_78);
    func_0x000107c4e528(0x4024000000000000,pcVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar1);
    return pcVar1;
  }
  if (pcVar9 == (char *)0x1) {
    return pcVar1;
  }
  FUN_103808dc4();
  if (pcVar9 == (char *)0x1) {
    return pcVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar9);
  return pcVar9;
}



/* Entry: 103808884; end: 103808a07; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices launchSpotlightWidgetWithClientId:thumbnail:] */

void FUN_103808884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103807cd4(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103808a08; end: 103808b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103808a08(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112f9ccc8 + 8) == 0) {
      puVar1 = (ulong *)(param_1 + _DAT_112f9ccd0);
      if (puVar1[1] == 0) {
        uVar3 = param_2;
        uVar5 = param_3;
        func_0x000107c5fadc();
        uVar4 = uVar3;
        func_0x000108ea5f00();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar3 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        uVar4 = puVar1[1];
        *puVar1 = param_2;
        puVar1[1] = param_3;
        func_0x000107c6142c(uVar4);
        puVar1 = (ulong *)(param_1 + _DAT_112f9ccd8);
        uVar4 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        func_0x000107c61434(param_3);
        func_0x000107c61434(uVar5);
        func_0x000107c6142c(uVar4);
        lVar2 = _DAT_112f9cce0;
        func_0x000107c61428(param_1 + _DAT_112f9cce0,auStack_80,0,0);
        uVar6 = *(undefined8 *)(param_1 + lVar2);
        func_0x000107c61434(uVar6);
        uVar4 = uVar3;
        func_0x0001000f66f0(uVar3,uVar5,uVar6);
        func_0x000107c6142c(uVar6);
        if ((uVar4 & 1) != 0) {
          FUN_103808b80(uVar3,uVar5);
        }
        func_0x000107c6142c(uVar5);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103808b74; end: 103808b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103808b74(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(ulong *)(unaff_x20 + 0x18);
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112f9ccc8 + 8) == 0) {
      puVar1 = (ulong *)(lVar3 + _DAT_112f9ccd0);
      if (puVar1[1] == 0) {
        uVar4 = uVar9;
        uVar6 = uVar7;
        func_0x000107c5fadc();
        uVar5 = uVar4;
        func_0x000108ea5f00();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        uVar4 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        uVar5 = puVar1[1];
        *puVar1 = uVar9;
        puVar1[1] = uVar7;
        func_0x000107c6142c(uVar5);
        puVar1 = (ulong *)(lVar3 + _DAT_112f9ccd8);
        uVar9 = puVar1[1];
        *puVar1 = uVar4;
        puVar1[1] = uVar6;
        func_0x000107c61434(uVar7);
        func_0x000107c61434(uVar6);
        func_0x000107c6142c(uVar9);
        lVar2 = _DAT_112f9cce0;
        func_0x000107c61428(lVar3 + _DAT_112f9cce0,auStack_80,0,0);
        uVar8 = *(undefined8 *)(lVar3 + lVar2);
        func_0x000107c61434(uVar8);
        uVar9 = uVar4;
        func_0x0001000f66f0(uVar4,uVar6,uVar8);
        func_0x000107c6142c(uVar8);
        if ((uVar9 & 1) != 0) {
          FUN_103808b80(uVar4,uVar6);
        }
        func_0x000107c6142c(uVar6);
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103808b80; end: 103808c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103808b80(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9ccd0);
  lVar6 = puVar1[1];
  if (lVar6 != 0) {
    puVar2 = (ulong *)(unaff_x20 + _DAT_112f9ccd8);
    uVar5 = puVar2[1];
    if (uVar5 != 0) {
      uVar7 = *puVar1;
      uVar3 = *puVar2;
      if ((uVar3 == param_1 && uVar5 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar5,param_1,param_2,0), (uVar3 & 1) != 0)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f9ccc8);
        uVar4 = puVar1[1];
        *puVar1 = uVar7;
        puVar1[1] = lVar6;
        func_0x000107c6142c(uVar4);
        lVar6 = unaff_x20 + _DAT_112f9cca0;
        func_0x000107c61618();
        if (lVar6 != 0) {
          func_0x000107c4ef6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 103808c58; end: 103808cb3; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices landOnLocalMediaWhenReadyForClientId:] */

void FUN_103808c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000103808900(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103808cb4; end: 103808dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103808cb4(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f9ccc8);
  uVar7 = puVar1[1];
  if ((uVar7 == 0) ||
     ((uVar3 = *puVar1, uVar3 != param_1 || uVar7 != param_2 &&
      (func_0x000107c605b8(uVar3,uVar7,param_1,param_2,0), (uVar3 & 1) == 0)))) {
    uVar3 = ((ulong *)(unaff_x20 + _DAT_112f9ccd0))[1];
    if (uVar3 == 0) {
      return;
    }
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112f9ccd0);
    if ((uVar4 != param_1 || uVar3 != param_2) &&
       (func_0x000107c605b8(uVar4,uVar3,param_1,param_2,0), (uVar4 & 1) == 0)) {
      return;
    }
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar7);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f9ccd0);
  uVar5 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar5);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f9ccd8);
  uVar5 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar5);
  lVar6 = unaff_x20 + _DAT_112f9cca0;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c4ff68();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
  return;
}



/* Entry: 103808dc4; end: 103809033;  */

/* WARNING: Possible PIC construction at 0x00010380922c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103809360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103809374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038093f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103809010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038093f4) */
/* WARNING: Removing unreachable block (ram,0x000103809378) */
/* WARNING: Removing unreachable block (ram,0x000103809364) */
/* WARNING: Removing unreachable block (ram,0x000103809014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103808dc4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  code *pcVar13;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  FUN_103809034(param_3,param_4,0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f9cd30);
  if (lVar10 != 0) {
    lVar12 = ((long *)(unaff_x20 + _DAT_112f9cd30))[1];
    func_0x000107c614f0(lVar10);
    (**(code **)(lVar12 + 0x20))(param_3,param_4,param_1,param_2,0,lVar10,lVar12);
  }
  uVar9 = ((ulong *)(unaff_x20 + _DAT_112f9ccc8))[1];
  if ((uVar9 == 0) ||
     ((uVar3 = *(ulong *)(unaff_x20 + _DAT_112f9ccc8), uVar3 != param_3 || uVar9 != param_4 &&
      (func_0x000107c605b8(uVar3,uVar9,param_3,param_4,0), (uVar3 & 1) == 0)))) {
    puVar1 = (ulong *)(unaff_x20 + _DAT_112f9ccd0);
    uVar9 = puVar1[1];
    if ((uVar9 != 0) &&
       ((uVar3 = *puVar1, uVar3 == param_3 && uVar9 == param_4 ||
        (func_0x000107c605b8(uVar3,uVar9,param_3,param_4,0), (uVar3 & 1) != 0)))) {
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c6142c(uVar9);
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f9ccd8);
      uVar4 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      func_0x000107c6142c(uVar4);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f9cd08);
    lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f9cd08))[1];
    func_0x000107c614f0(uVar4);
    puVar11 = &UNK_110698ec8;
    func_0x000107c613fc(&UNK_110698ec8,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    puVar5 = &UNK_1106991c0;
    func_0x000107c613fc(&UNK_1106991c0,0x38,7);
    *(undefined **)(puVar5 + 0x10) = puVar11;
    *(ulong *)(puVar5 + 0x18) = param_3;
    *(ulong *)(puVar5 + 0x20) = param_4;
    *(undefined8 *)(puVar5 + 0x28) = param_1;
    *(undefined8 *)(puVar5 + 0x30) = param_2;
    pcVar13 = *(code **)(lVar10 + 0x10);
    func_0x000107c6157c(puVar11);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_2);
    (*pcVar13)(param_1,param_2,param_3,param_4,FUN_10380c878,puVar5,uVar4,lVar10);
  }
  else {
    lVar10 = _DAT_112f9ccb0;
    func_0x000107c59a58(*(undefined8 *)(unaff_x20 + _DAT_112f9ccb0));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x000107c61174(uVar4);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c593e4(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112f9cc90));
    lVar10 = 0;
    func_0x000107c5f7fc();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    puVar11 = *(undefined **)(unaff_x20 + _DAT_112f9cca8);
    if (puVar11 == (undefined *)0x0) {
      puVar11 = &UNK_110698ec8;
      func_0x000107c613fc(&UNK_110698ec8,0x18,7);
      func_0x000107c61614(puVar11 + 0x10,unaff_x20);
      puVar5 = &UNK_1106991e8;
      func_0x000107c613fc(&UNK_1106991e8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar11;
      *(ulong *)(puVar5 + 0x18) = param_3;
      *(ulong *)(puVar5 + 0x20) = param_4;
      uStack_80 = 0x10380c888;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_110699200;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar4 = 0x112d4af88;
      FUN_10380d050(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      func_0x000107c6157c(puVar11);
      func_0x000107c61434(param_4);
      uVar7 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar8 = uVar7;
      func_0x0001001c7f30();
      func_0x000107c60264(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&puStack_a8,uVar7,
                          uVar8,lVar10,uVar4);
      func_0x000107c5f850();
      func_0x000107c613fc();
      func_0x000107c5f844(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),ppuVar6);
    }
    else {
      func_0x000107c6157c(puVar11);
      func_0x000107c5f848();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar11);
  return;
}



/* Entry: 103809034; end: 1038091a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103809034(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f9ccb8);
  uVar5 = puVar1[1];
  if (uVar5 != 0) {
    uVar6 = *puVar1;
    if ((uVar6 != param_1 || uVar5 != param_2) &&
       (uVar3 = uVar6, func_0x000107c605b8(uVar6,uVar5,param_1,param_2,0), (uVar3 & 1) == 0)) {
      uStack_78 = 0x7e;
      uStack_70 = 0xe100000000000000;
      func_0x000107c61434(uVar5);
      func_0x000107c5fb78(param_1,param_2);
      uVar2 = uStack_70;
      uVar3 = uStack_78;
      func_0x000107c5fbb8(uStack_78,uStack_70,uVar6,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar2);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    func_0x0001009382cc(unaff_x20 + _DAT_112f9cd20,&uStack_78,0x112f9cd28,&UNK_10dc13000);
    if (lStack_60 == 0) {
      func_0x000100938314(&uStack_78,0x112f9cd28,&UNK_10dc13000);
    }
    else {
      func_0x0001000a8868(&uStack_78,lStack_60);
      uVar4 = 4;
      if ((param_3 & 1) != 0) {
        uVar4 = 5;
      }
      (**(code **)(lStack_58 + 0x20))(uVar4,lStack_60,lStack_58);
      func_0x0001000834e4(&uStack_78);
    }
    uVar5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar5);
    *(undefined8 *)(unaff_x20 + _DAT_112f9ccc0) = 0;
  }
  return;
}



/* Entry: 1038091a4; end: 103809437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038091a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_112f9cca8;
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(unaff_x20 + _DAT_112f9cca8);
  if (lVar12 != 0) {
    func_0x000107c6157c(lVar12);
    func_0x000107c5f848();
    func_0x000107c61574(lVar12);
  }
  puVar11 = &UNK_110698ec8;
  puVar3 = puVar11;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1106991e8;
  func_0x000107c613fc(&UNK_1106991e8,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  uStack_80 = 0x10380c888;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110699200;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = 0x112d4af88;
  FUN_10380d050(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  func_0x000107c6157c(puVar3);
  func_0x000107c61434(param_2);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_a8,uVar6,uVar7,lVar2,uVar9);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(puVar8,ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined1 **)(unaff_x20 + lVar1) = puVar8;
  func_0x000107c61574(uVar9);
  pcVar10 = "dismissWidgetWithDelay(clientId:)";
  func_0x0001000c10c0("dismissWidgetWithDelay(clientId:)");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  uStack_80 = 0x10380c894;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110699228;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c4e528(0x4024000000000000,pcVar10);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar10);
  return;
}



/* Entry: 103809438; end: 10380950f;  */

/* WARNING: Possible PIC construction at 0x0001038094ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038094b0) */
/* WARNING: Removing unreachable block (ram,0x0001038094e0) */
/* WARNING: Removing unreachable block (ram,0x000107c4d664) */
/* WARNING: Removing unreachable block (ram,0x00010c0d9840) */
/* WARNING: Removing unreachable block (ram,0x0001038094b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103809438(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f9ccb0);
  func_0x000107c3fb8c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0 || param_2 != -0x2000000000000000) {
    func_0x000107c605b8(lVar2,param_2,0,0xe000000000000000,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103809510; end: 103809537; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices dismissSpotlightWidget] */

void FUN_103809510(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103809438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103809538; end: 103809677;  */

void FUN_103809538(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  if (param_1 != 0) {
    func_0x000107c4c9a4();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c3ef0c();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        pcVar3 = "didUpdateStoriesMediaAddedRequest(_:)";
        func_0x0001000c10c0("didUpdateStoriesMediaAddedRequest(_:)");
        func_0x000107c61180();
        puVar4 = &UNK_110698ec8;
        func_0x000107c613fc(&UNK_110698ec8,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar5 = &UNK_110698f90;
        func_0x000107c613fc(&UNK_110698f90,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(long *)(puVar5 + 0x18) = lVar2;
        *(undefined8 *)(puVar5 + 0x20) = param_2;
        pcStack_50 = FUN_103809838;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1000f6b44;
        puStack_58 = &UNK_110698fa8;
        puStack_48 = puVar5;
        func_0x000107c60bc4(&puStack_70);
        func_0x000107c61574(puStack_48);
        func_0x000107c4e524(pcVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(pcVar3);
      }
      FUN_103809730(param_1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 103809678; end: 10380972f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103809678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f9cce0,auStack_70,0x21,0);
    func_0x000107c61434(param_3);
    func_0x000100403b00(auStack_58,param_2,param_3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c6142c(uStack_50);
    FUN_103808b80(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103809730; end: 103809837;  */

/* WARNING: Possible PIC construction at 0x000103809814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103809818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103809730(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar1 = param_1;
  func_0x000107c3ef0c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar5 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f9cd08);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f9cd08))[1];
  func_0x000107c614f0(uVar2);
  puVar3 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110699288;
  func_0x000107c613fc(&UNK_110699288,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long *)(puVar4 + 0x18) = lVar5;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(puVar3);
  (*pcVar6)(param_1,FUN_10380cc70,puVar4,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103809838; end: 103809843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103809838(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112f9cce0,auStack_70,0x21,0);
    func_0x000107c61434(uVar3);
    func_0x000100403b00(auStack_58,uVar1,uVar3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c6142c(uStack_50);
    FUN_103808b80(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103809844; end: 103809897; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices didUpdateStoriesMediaAddedRequest:] */

/* WARNING: Possible PIC construction at 0x000103809880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103809884) */

void FUN_103809844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103809538(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103809898; end: 1038099eb;  */

void FUN_103809898(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  pcVar1 = "fetchAndApplyMediaThumbnail(_:)";
  func_0x0001000c10c0("fetchAndApplyMediaThumbnail(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_1106992b0;
  func_0x000107c613fc(&UNK_1106992b0,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  uStack_78 = 0x10380cc7c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1106992c8;
  ppuVar4 = &puStack_98;
  puStack_70 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_70;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1038099ec; end: 103809a73;  */

void FUN_1038099ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103809a74(param_2,param_3,param_4,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103809a74; end: 10380a037;  */

/* WARNING: Possible PIC construction at 0x000103809b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103809bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103809b84) */
/* WARNING: Removing unreachable block (ram,0x000103809bf8) */
/* WARNING: Removing unreachable block (ram,0x000103809bfc) */
/* WARNING: Removing unreachable block (ram,0x000103809c04) */
/* WARNING: Removing unreachable block (ram,0x000103809cb0) */
/* WARNING: Removing unreachable block (ram,0x000103809c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103809a74(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f9cd08);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f9cd08))[1];
  func_0x000107c614f0(uVar2);
  uVar6 = param_3;
  (**(code **)(lVar1 + 0x28))(param_1,param_3,param_4,uVar2,lVar1);
  if ((*(byte *)(unaff_x20 + _DAT_112f9cce8) & 1) == 0) {
    uVar5 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar5 = param_4 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      uVar5 = ((ulong *)(unaff_x20 + _DAT_112f9ccb8))[1];
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(unaff_x20 + _DAT_112f9ccb8);
        if ((uVar6 != param_3 || uVar5 != param_4) &&
           (uVar3 = uVar6, func_0x000107c605b8(uVar6,uVar5,param_3,param_4,0), (uVar3 & 1) == 0)) {
          func_0x000107c61434(uVar5);
          func_0x000107c5fb78(param_3,param_4);
          func_0x000107c5fbb8(0x7e,0xe100000000000000,uVar6,uVar5);
          goto code_r0x000107c6142c;
        }
        uVar6 = param_3;
        func_0x000103809cd0(param_2,param_3,param_4,1);
      }
    }
  }
  uVar5 = uVar6;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f9ccb0);
  func_0x000107c3fb8c(uVar4);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000107c5fbb8(param_3,param_4,uVar2,uVar5);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 10380a038; end: 10380a12f;  */

void FUN_10380a038(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "didUpdateMyStoriesDataRequest(_:)";
  func_0x0001000c10c0("didUpdateMyStoriesDataRequest(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110698fe0;
  func_0x000107c613fc(&UNK_110698fe0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_10380a3ac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110698ff8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10380a130; end: 10380a3ab;  */

void FUN_10380a130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = &UNK_110699058;
    func_0x000107c613fc(&UNK_110699058,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    puVar3 = &UNK_110699080;
    func_0x000107c613fc(&UNK_110699080,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10380c7e4;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_10380c7ec;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102fd22f0;
    puStack_a0 = &UNK_110699098;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106990d0;
    func_0x000107c613fc(&UNK_1106990d0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    puVar5 = &UNK_1106990f8;
    func_0x000107c613fc(&UNK_1106990f8,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10380c80c;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_98 = FUN_10380c814;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_10380aa04;
    puStack_a0 = &UNK_110699110;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110699148;
    func_0x000107c613fc(&UNK_110699148,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    puVar7 = &UNK_110699170;
    func_0x000107c613fc(&UNK_110699170,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_10380c834;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_98 = FUN_10380c858;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10246e38c;
    puStack_a0 = &UNK_110699188;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4();
    puVar7 = puStack_90;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c4c650(param_2);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10380a3ac; end: 10380a3b3;  */

void FUN_10380a3ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = &UNK_110699058;
    func_0x000107c613fc(&UNK_110699058,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    puVar5 = &UNK_110699080;
    func_0x000107c613fc(&UNK_110699080,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x10380c7e4;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_10380c7ec;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102fd22f0;
    puStack_a0 = &UNK_110699098;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1106990d0;
    func_0x000107c613fc(&UNK_1106990d0,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    puVar7 = &UNK_1106990f8;
    func_0x000107c613fc(&UNK_1106990f8,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_10380c80c;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_98 = FUN_10380c814;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_10380aa04;
    puStack_a0 = &UNK_110699110;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_110699148;
    func_0x000107c613fc(&UNK_110699148,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    puVar9 = &UNK_110699170;
    func_0x000107c613fc(&UNK_110699170,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10380c834;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    pcStack_98 = FUN_10380c858;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10246e38c;
    puStack_a0 = &UNK_110699188;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    func_0x000107c60bc4();
    puVar9 = puStack_90;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar9);
    func_0x000107c4c650(uVar1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10380a3b4; end: 10380a743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380a3b4(long param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  lVar6 = _DAT_112f9cd20;
  lVar5 = _DAT_112f9ccc0;
  if ((param_2 + 7 < 7) && ((1L << (param_2 + 7 & 0x3f) & 0x45U) != 0)) {
    lVar14 = *(long *)(param_1 + 0x10);
    if (lVar14 != 0) {
      puVar1 = (ulong *)(param_3 + _DAT_112f9ccb8);
      uVar7 = *(undefined8 *)(param_3 + _DAT_112f9cd08);
      lVar3 = ((undefined8 *)(param_3 + _DAT_112f9cd08))[1];
      lVar2 = *(long *)(param_3 + _DAT_112f9cd30);
      lVar4 = ((long *)(param_3 + _DAT_112f9cd30))[1];
      func_0x000107c614f0();
      pcVar15 = *(code **)(lVar3 + 0x48);
      puVar18 = (ulong *)(param_1 + 0x28);
      lVar19 = lVar14;
      do {
        uVar11 = puVar18[-1];
        uVar12 = *puVar18;
        func_0x000107c61434(uVar12);
        param_2 = 0;
        (*pcVar15)(0,0,uVar11,uVar12,uVar7,lVar3);
        uVar20 = puVar1[1];
        if (uVar20 != 0) {
          uVar16 = *puVar1;
          if ((uVar16 != uVar11 || uVar20 != uVar12) &&
             (uVar8 = uVar16, func_0x000107c605b8(uVar16,uVar20,uVar11,uVar12,0), (uVar8 & 1) == 0))
          {
            uStack_88 = 0x7e;
            uStack_80 = 0xe100000000000000;
            func_0x000107c61434(uVar20);
            func_0x000107c5fb78(uVar11,uVar12);
            uVar8 = uStack_80;
            uVar9 = uStack_88;
            param_2 = uStack_80;
            func_0x000107c5fbb8(uStack_88,uStack_80,uVar16,uVar20);
            func_0x000107c6142c(uVar20);
            func_0x000107c6142c(uVar8);
            if ((uVar9 & 1) == 0) goto LAB_10380a5d4;
          }
          func_0x0001009382cc(param_3 + lVar6,&uStack_88,0x112f9cd28,&UNK_10dc13000);
          lVar10 = lStack_68;
          param_2 = uStack_70;
          if (uStack_70 == 0) {
            param_2 = 0x112f9cd28;
            func_0x000100938314(&uStack_88,0x112f9cd28,&UNK_10dc13000);
          }
          else {
            func_0x0001000a8868(&uStack_88,uStack_70);
            (**(code **)(lVar10 + 0x20))(5,param_2,lVar10);
            func_0x0001000834e4(&uStack_88);
          }
          uVar20 = puVar1[1];
          *puVar1 = 0;
          puVar1[1] = 0;
          func_0x000107c6142c(uVar20);
          *(undefined8 *)(param_3 + lVar5) = 0;
        }
LAB_10380a5d4:
        if (lVar2 != 0) {
          lVar10 = lVar2;
          func_0x000107c614f0(lVar2);
          param_2 = uVar12;
          (**(code **)(lVar4 + 0x20))(uVar11,uVar12,0,0,1,lVar10);
        }
        puVar18 = puVar18 + 2;
        func_0x000107c6142c(uVar12);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    lVar5 = _DAT_112f9ccb0;
    uVar11 = *(ulong *)(param_3 + _DAT_112f9ccb0);
    func_0x000107c3fb8c();
    func_0x000107c61180();
    uVar12 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    uVar11 = param_2;
    func_0x000100077018(uVar12,param_2,param_1);
    func_0x000107c6142c(param_2);
    if ((uVar12 & 1) != 0) {
      if (lVar14 == 0) {
        uVar17 = *(undefined8 *)(param_3 + lVar5);
        func_0x000107c3fb8c(uVar17);
        func_0x000107c61180();
        uVar7 = uVar17;
        func_0x000107c5faec();
        func_0x000107c61170(uVar17);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        uVar11 = *(ulong *)(param_1 + 0x28);
        func_0x000107c61434(uVar11);
      }
      uVar17 = *(undefined8 *)(param_3 + lVar5);
      func_0x0001002ed07c(0);
      func_0x000107c61174(uVar17);
      uVar13 = 1;
      func_0x000107c6010c(1);
      func_0x000107c59a5c(uVar17);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar13);
      func_0x000107c4d664(*(undefined8 *)(param_3 + _DAT_112f9cc90));
      FUN_103808cb4(uVar7,uVar11);
      FUN_1038091a4(uVar7,uVar11);
      func_0x000107c6142c(uVar11);
    }
  }
  return;
}



/* Entry: 10380a744; end: 10380a7a7;  */

void FUN_10380a744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  FUN_10380a7a8(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10380a7a8; end: 10380aa03;  */

/* WARNING: Possible PIC construction at 0x00010380a824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380a8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380a908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010380a964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380a90c) */
/* WARNING: Removing unreachable block (ram,0x00010380a910) */
/* WARNING: Removing unreachable block (ram,0x00010380a914) */
/* WARNING: Removing unreachable block (ram,0x00010380a9b4) */
/* WARNING: Removing unreachable block (ram,0x00010380a918) */
/* WARNING: Removing unreachable block (ram,0x00010380a940) */
/* WARNING: Removing unreachable block (ram,0x00010380a828) */
/* WARNING: Removing unreachable block (ram,0x00010380a968) */
/* WARNING: Removing unreachable block (ram,0x00010380a9bc) */
/* WARNING: Removing unreachable block (ram,0x00010380a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010380a9dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380a7a8(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  double dVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f9cd08);
  lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f9cd08))[1];
  func_0x000107c614f0(uVar1);
  puVar3 = param_2;
  (**(code **)(lVar4 + 0x40))(param_2,param_3,uVar1,lVar4);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c4223c(param_4);
    dVar7 = 0.0;
    if (0.0 < param_1) {
      dVar7 = param_1;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(dVar7);
    (**(code **)(lVar4 + 0x38))();
    func_0x000107c4223c(puVar2);
    FUN_10380ab44(param_2,param_3);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f9cd30);
    if (lVar4 == 0) {
      puVar3 = *(undefined **)(unaff_x20 + _DAT_112f9ccb0);
      func_0x000107c3fb8c(puVar3);
      func_0x000107c61180();
      func_0x000107c5faec();
    }
    else {
      lVar5 = ((long *)(unaff_x20 + _DAT_112f9cd30))[1];
      func_0x000107c614f0(lVar4);
      pcVar6 = *(code **)(lVar5 + 0x10);
      puVar3 = puVar2;
      func_0x000107c61174(puVar2);
      (*pcVar6)(param_2,param_3,puVar2,lVar4,lVar5);
    }
  }
  else {
    func_0x000107c4223c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10380aa04; end: 10380aa4b;  */

void FUN_10380aa04(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  func_0x000107c5faec(param_3);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10380aa4c; end: 10380aaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380aa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_stack_00000000;
  
  uVar2 = 0x5f3757;
  func_0x000107c5fbb4(0x5f3757,0xe300000000000000);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(in_stack_00000000 + _DAT_112f9cd08);
    lVar1 = ((undefined8 *)(in_stack_00000000 + _DAT_112f9cd08))[1];
    func_0x000107c614f0(uVar3);
    (**(code **)(lVar1 + 0x48))(param_3,param_4,param_1,param_2,uVar3,lVar1);
    FUN_103808dc4(param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 10380aaf4; end: 10380ab43; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices didUpdateMyStoriesDataRequest:] */

/* WARNING: Possible PIC construction at 0x00010380ab2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380ab30) */

void FUN_10380aaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10380a038(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10380ab44; end: 10380acb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380ab44(double param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  
  uVar3 = ((ulong *)(unaff_x20 + _DAT_112f9ccb8))[1];
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112f9ccb8);
    if ((uVar4 != param_2 || uVar3 != param_3) &&
       (uVar2 = uVar4, func_0x000107c605b8(uVar4,uVar3,param_2,param_3,0), (uVar2 & 1) == 0)) {
      uStack_78 = 0x7e;
      uStack_70 = 0xe100000000000000;
      func_0x000107c61434(uVar3);
      func_0x000107c5fb78(param_2,param_3);
      uVar1 = uStack_70;
      uVar2 = uStack_78;
      func_0x000107c5fbb8(uStack_78,uStack_70,uVar4,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar1);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    if (param_1 < *(double *)(unaff_x20 + _DAT_112f9ccc0)) {
      param_1 = *(double *)(unaff_x20 + _DAT_112f9ccc0);
    }
    *(double *)(unaff_x20 + _DAT_112f9ccc0) = param_1;
    func_0x0001009382cc(unaff_x20 + _DAT_112f9cd20,&uStack_78,0x112f9cd28,&UNK_10dc13000);
    if (lStack_60 == 0) {
      func_0x000100938314(&uStack_78,0x112f9cd28,&UNK_10dc13000);
    }
    else {
      func_0x0001000a8868(&uStack_78,lStack_60);
      (**(code **)(lStack_58 + 0x10))(param_1,0,0,lStack_60,lStack_58);
      func_0x0001000834e4(&uStack_78);
    }
  }
  return;
}



/* Entry: 10380acb8; end: 10380ad83;  */

void FUN_10380acb8(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "widgetDismissed()";
  func_0x0001000c10c0("widgetDismissed()");
  func_0x000107c61180();
  puVar2 = &UNK_110698ec8;
  func_0x000107c613fc(&UNK_110698ec8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10380af48;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110699020;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10380ad84; end: 10380af47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380ad84(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar3 = PTR_PTR_1126ad760;
    func_0x000107c610f8();
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c45e64();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112f9ccb0);
    *(undefined **)(param_1 + _DAT_112f9ccb0) = puVar3;
    func_0x000107c61170(uVar4);
    *(undefined1 *)(param_1 + _DAT_112f9cce8) = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_112f9ccc8);
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar4);
    puVar1 = (undefined8 *)(param_1 + _DAT_112f9ccd0);
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar4);
    puVar1 = (undefined8 *)(param_1 + _DAT_112f9ccd8);
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar4);
    lVar2 = _DAT_112f9cce0;
    func_0x000107c61428(param_1 + _DAT_112f9cce0,auStack_70,1,0);
    uVar4 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c6142c(uVar4);
    func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112f9cc90));
    uVar4 = *(undefined8 *)(param_1 + _DAT_112f9cd08);
    lVar2 = ((undefined8 *)(param_1 + _DAT_112f9cd08))[1];
    uVar5 = uVar4;
    func_0x000107c614f0(uVar4);
    pcVar7 = *(code **)(lVar2 + 0x20);
    func_0x000107c615f0(uVar4);
    (*pcVar7)(uVar5,lVar2);
    func_0x000107c615e8(uVar4);
    FUN_10380af50();
    lVar2 = _DAT_112f9cca8;
    lVar6 = *(long *)(param_1 + _DAT_112f9cca8);
    uVar4 = 0;
    if (lVar6 != 0) {
      func_0x000107c6157c(lVar6);
      func_0x000107c5f848();
      func_0x000107c61574(lVar6);
      uVar4 = *(undefined8 *)(param_1 + lVar2);
    }
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x000107c61170(param_1);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 10380af48; end: 10380af4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380af48(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126ad760;
    func_0x000107c610f8();
    uVar5 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c45e64();
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112f9ccb0);
    *(undefined **)(lVar3 + _DAT_112f9ccb0) = puVar4;
    func_0x000107c61170(uVar5);
    *(undefined1 *)(lVar3 + _DAT_112f9cce8) = 0;
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f9ccc8);
    uVar5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar5);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f9ccd0);
    uVar5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar5);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f9ccd8);
    uVar5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar5);
    lVar2 = _DAT_112f9cce0;
    func_0x000107c61428(lVar3 + _DAT_112f9cce0,auStack_70,1,0);
    uVar5 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined **)(lVar3 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c6142c(uVar5);
    func_0x000107c4d664(*(undefined8 *)(lVar3 + _DAT_112f9cc90));
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112f9cd08);
    lVar2 = ((undefined8 *)(lVar3 + _DAT_112f9cd08))[1];
    uVar6 = uVar5;
    func_0x000107c614f0(uVar5);
    pcVar8 = *(code **)(lVar2 + 0x20);
    func_0x000107c615f0(uVar5);
    (*pcVar8)(uVar6,lVar2);
    func_0x000107c615e8(uVar5);
    FUN_10380af50();
    lVar2 = _DAT_112f9cca8;
    lVar7 = *(long *)(lVar3 + _DAT_112f9cca8);
    uVar5 = 0;
    if (lVar7 != 0) {
      func_0x000107c6157c(lVar7);
      func_0x000107c5f848();
      func_0x000107c61574(lVar7);
      uVar5 = *(undefined8 *)(lVar3 + lVar2);
    }
    *(undefined8 *)(lVar3 + lVar2) = 0;
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 10380af50; end: 10380afff;  */

/* WARNING: Possible PIC construction at 0x00010380afcc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10380af50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f9cd10);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c4ffe8(lVar2);
      func_0x000107c61180();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_11306f078);
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c41864(uVar3,param_2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 10380b000; end: 10380b027; -[_TtC23SpotlightWidgetServices23SpotlightWidgetServices widgetDismissed] */

void FUN_10380b000(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10380acb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


