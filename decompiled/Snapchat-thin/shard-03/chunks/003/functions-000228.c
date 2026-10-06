/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10276a4c8; end: 10276a507;  */

void FUN_10276a4c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276a504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276a508; end: 10276a83f;  */

void FUN_10276a508(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_10276a7fc;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_10276a838:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276a83c);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_10276a60c:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276a61c);
      (*pcVar3)();
    }
LAB_10276a620:
    if ((uVar5 & 1) != 0) goto LAB_10276a624;
LAB_10276a67c:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_10276a83c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276a840);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_10276a620;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_10276a67c;
LAB_10276a624:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    func_0x000107c6142c(uVar2);
    FUN_10276ba84(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    FUN_10276ba84(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_10276a838;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_10276a60c;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_10276a83c;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      func_0x000107c6142c(uVar2);
      FUN_10276ba84(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      FUN_10276ba84(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_10276a7fc:
  func_0x00010276af20(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 10276a840; end: 10276adc7;  */

/* WARNING: Removing unreachable block (ram,0x00010276abbc) */

undefined * FUN_10276a840(undefined *param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *apuStack_90 [4];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined *puStack_48;
  
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  puVar1 = param_1;
  func_0x000107c61558(param_1);
  puVar7 = &UNK_100216600;
  puStack_70 = param_1;
  FUN_10276a508(param_2,&UNK_100216600,0,puVar1,&puStack_70);
  func_0x000107c6142c(param_2);
  puVar1 = puStack_70;
  puStack_48 = puStack_70;
  ppuVar10 = &PTR____CFConstantStringClassReference_110f0e2b8;
  ppuVar2 = ppuVar10;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_10276a958:
    uStack_68 = 0;
    puStack_70 = (undefined *)0x0;
    lStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c6142c(puVar7);
LAB_10276a968:
    ppuVar2 = (undefined **)0x112d387f8;
    func_0x00010276baec(&puStack_70,0x112d387f8,&UNK_10d902650);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_1);
    puVar8 = puVar7;
    func_0x000100029284(ppuVar2);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_10276a958;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)ppuVar2 * 0x20,&puStack_70);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(param_1);
    if (lStack_58 == 0) goto LAB_10276a968;
    uVar3 = 0x112daaff0;
    func_0x0001000285a8(0x112daaff0,&UNK_10da86bb0);
    ppuVar4 = apuStack_90;
    ppuVar2 = &puStack_70;
    func_0x000107c6147c(ppuVar4,ppuVar2,PTR___sypN_11034f1a8 + 8,uVar3,6);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppuVar4 & 1) != 0) {
      puVar7 = apuStack_90[0];
    }
  }
  ppuVar4 = ppuVar10;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  if (param_2[2] != (undefined *)0x0) {
    func_0x000107c61434(param_2);
    ppuVar9 = ppuVar2;
    func_0x000100029284(ppuVar4);
    if (((ulong)ppuVar9 & 1) != 0) {
      func_0x0001000bb420(param_2[7] + (long)ppuVar4 * 0x20,&puStack_70);
      func_0x000107c6142c(ppuVar2);
      ppuVar2 = param_2;
      goto LAB_10276a9ec;
    }
    func_0x000107c6142c(param_2);
  }
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  lStack_58 = 0;
  uStack_60 = 0;
LAB_10276a9ec:
  func_0x000107c6142c(ppuVar2);
  if (lStack_58 == 0) {
    ppuVar2 = (undefined **)0x112d387f8;
    func_0x00010276baec(&puStack_70,0x112d387f8,&UNK_10d902650);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = 0x112daaff0;
    func_0x0001000285a8(0x112daaff0,&UNK_10da86bb0);
    ppuVar4 = apuStack_90;
    ppuVar2 = &puStack_70;
    func_0x000107c6147c(ppuVar4,ppuVar2,PTR___sypN_11034f1a8 + 8,uVar3,6);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppuVar4 & 1) != 0) {
      puVar8 = apuStack_90[0];
    }
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar5 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar5 == (undefined *)0x0) {
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar5 = puVar8;
      }
      func_0x000107c60480();
    }
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar8);
      return puVar1;
    }
  }
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  lVar6 = 0x112daaff0;
  func_0x0001000285a8(0x112daaff0,&UNK_10da86bb0);
  puStack_70 = puVar7;
  lStack_58 = lVar6;
  FUN_102768270(puVar8);
  uStack_a8 = uStack_68;
  puStack_b0 = puStack_70;
  lStack_98 = lStack_58;
  uStack_a0 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010276baec(&puStack_b0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(apuStack_90,ppuVar10,ppuVar2);
    func_0x000107c6142c(ppuVar2);
    func_0x00010276baec(apuStack_90,0x112d387f8,&UNK_10d902650);
    puStack_b0 = puStack_48;
  }
  else {
    func_0x000100102924(&puStack_b0,apuStack_90);
    puVar7 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_b0 = puVar1;
    func_0x0001001029e8(apuStack_90,ppuVar10,ppuVar2,puVar7);
    func_0x000107c6142c(ppuVar2);
  }
  return puStack_b0;
}



/* Entry: 10276adc8; end: 10276adff;  */

void FUN_10276adc8(undefined8 param_1)

{
  if (lRam0000000112ebc868 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6f1d14);
  return;
}



/* Entry: 10276ae00; end: 10276ae9f;  */

void FUN_10276ae00(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xffffffffffffff8));
  plVar5 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10276aea0;
  plVar5[0x33] = unaff_x20 + uVar6;
  plVar5[0x34] = lVar4;
  plVar5[0x31] = lVar3;
  plVar5[0x32] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar5[0x35] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[0x36] = lVar3;
  lVar3 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar5[0x37] = lVar3;
  func_0x000107c5fca8();
  plVar5[0x38] = lVar2;
  plVar5[0x39] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102765ed4,lVar2,lVar3);
  return;
}



/* Entry: 10276aea0; end: 10276aedb;  */

void FUN_10276aea0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276aed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276aedc; end: 10276af17;  */

undefined8 FUN_10276aedc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10276adc8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10276af18; end: 10276af37;  */

void FUN_10276af18(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_10276af38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c6157c();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102762c70();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = puVar3;
  func_0x0001010fe67c();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  puVar2 = puVar3;
  func_0x000102762c84();
  *(undefined **)(lVar1 + 0x30) = puVar2;
  puVar2 = puVar3;
  FUN_102762d8c();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  func_0x000102762f10();
  *(undefined **)(lVar1 + 0x40) = puVar3;
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  return;
}



/* Entry: 10276af38; end: 10276af57;  */

void FUN_10276af38(void)

{
  func_0x000107c61168(&PTR_PTR_112ebc780);
  return;
}



/* Entry: 10276af58; end: 10276afdf;  */

long * FUN_10276af58(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10276afe0; end: 10276b023;  */

void FUN_10276afe0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 10276b024; end: 10276b1af;  */

long FUN_10276b024(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10276b1b0; end: 10276b1c7;  */

void FUN_10276b1b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10276b1c8; end: 10276b27b;  */

void FUN_10276b1c8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 10276b27c; end: 10276b2e7;  */

void FUN_10276b27c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10276b2e8; end: 10276b363;  */

void FUN_10276b2e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10276b364;
  plVar5[9] = lVar4;
  plVar5[10] = unaff_x20 + (uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff));
  plVar5[8] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[0xb] = lVar4;
  uVar3 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102765a78,lVar2,uVar3);
  return;
}



/* Entry: 10276b364; end: 10276b39f;  */

void FUN_10276b364(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276b39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276b3a0; end: 10276b46b;  */

void FUN_10276b3a0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10276b46c; end: 10276b4fb;  */

void FUN_10276b46c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10276bb30;
  plVar8[0x22] = lVar2;
  plVar8[0x23] = lVar9;
  plVar8[0x20] = lVar1;
  plVar8[0x21] = lVar7;
  plVar8[0x1e] = param_2;
  plVar8[0x1f] = lVar4;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar8[0x24] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar8[0x25] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  plVar8[0x26] = lVar4;
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x27] = uVar5;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x28] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x29] = uVar5;
  lVar4 = 0x112ebc8c0;
  func_0x0001000285a8(0x112ebc8c0,&UNK_10dad66c8);
  plVar8[0x2a] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar8[0x2b] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x2c] = uVar5;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  plVar8[0x2d] = lVar7;
  lVar4 = lVar7;
  func_0x000107c5fce8();
  plVar8[0x2e] = lVar4;
  lVar4 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  plVar8[0x2f] = lVar4;
  func_0x000107c5fca8();
  plVar8[0x30] = lVar7;
  plVar8[0x31] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102766a2c,lVar7,lVar4);
  return;
}



/* Entry: 10276b4fc; end: 10276b86f;  */

/* WARNING: Removing unreachable block (ram,0x00010276b864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10276b4fc(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 uStack_a1;
  undefined *puStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  
  lVar7 = _DAT_112ebd9d0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61428(unaff_x20 + 0x28,&lStack_90,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + lVar7);
    uVar4 = ((long *)(param_1 + lVar7))[1];
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
      func_0x000107c614a8(&lStack_90);
      func_0x000107c6142c(lVar6);
      lStack_90 = 0x3d6c616974696e69;
      uStack_88 = 0xe800000000000000;
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      puVar3 = PTR___sSdN_11034dd90;
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      puVar1 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar7 + 0x38) = puVar3;
      *(undefined **)(lVar7 + 0x40) = puVar1;
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x66312e25,0xe400000000000000,lVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar9);
      func_0x000107c5fb78(0x736d20,0xe300000000000000);
      uVar9 = uStack_88;
      lVar7 = lStack_90;
      puVar3 = (undefined *)0x0;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar4 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar4) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        func_0x0001000d182c(puVar3,uVar4 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar4 + 1;
      *(long *)(puVar3 + uVar4 * 0x10 + 0x20) = lVar7;
      *(undefined8 *)(puVar3 + uVar4 * 0x10 + 0x28) = uVar9;
      puStack_78 = puVar3;
      goto LAB_10276b684;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(&lStack_90);
LAB_10276b684:
  lStack_90 = param_2;
  func_0x000107c61434(param_2);
  FUN_102769948(&lStack_90);
  lVar6 = lStack_90;
  lVar7 = *(long *)(lStack_90 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c61574(lStack_90);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = puVar8;
    func_0x000100403514(0,lVar7,0);
    puVar1 = PTR___sSds7CVarArgsWP_11034ddc0;
    puVar3 = PTR___sSdN_11034dd90;
    puVar5 = (undefined8 *)(lVar6 + 0x28);
    do {
      puVar8 = puStack_a0;
      uStack_a1 = *(undefined1 *)(puVar5 + -1);
      uVar9 = *puVar5;
      lStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c603d0(&uStack_a1,&lStack_90,&UNK_110547ae8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x3d,0xe100000000000000);
      lVar2 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined **)(lVar2 + 0x38) = puVar3;
      *(undefined **)(lVar2 + 0x40) = puVar1;
      *(undefined8 *)(lVar2 + 0x20) = uVar9;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x66312e25,0xe400000000000000,lVar2);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar9);
      func_0x000107c5fb78(0x736d20,0xe300000000000000);
      uVar9 = uStack_88;
      lVar2 = lStack_90;
      uVar4 = *(ulong *)(puVar8 + 0x10);
      puStack_a0 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar4 + 1,1);
      }
      puVar8 = puStack_a0;
      puVar5 = puVar5 + 2;
      *(ulong *)(puStack_a0 + 0x10) = uVar4 + 1;
      *(long *)(puStack_a0 + uVar4 * 0x10 + 0x20) = lVar2;
      *(undefined8 *)(puStack_a0 + uVar4 * 0x10 + 0x28) = uVar9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c61574(lVar6);
  }
  func_0x00010109a32c(puVar8);
  func_0x000107c6142c(puStack_78);
  return;
}



/* Entry: 10276b870; end: 10276b887;  */

undefined8 * FUN_10276b870(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10276b888; end: 10276b8cb;  */

long FUN_10276b888(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10276b8cc; end: 10276b993;  */

void FUN_10276b8cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = 0;
  func_0x000107c5eec8();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = uVar9 + 0x60 & (uVar9 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  lVar6 = *(long *)(unaff_x20 + 0x58);
  lVar7 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar9 + 7 & 0xffffffffffffff8));
  plVar8 = (long *)0x170;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10276bb34;
  plVar8[0x19] = unaff_x20 + uVar9;
  plVar8[0x1a] = lVar7;
  plVar8[0x17] = lVar5;
  plVar8[0x18] = lVar6;
  *(undefined1 *)((long)plVar8 + 0x21) = uVar3;
  plVar8[0x15] = param_1;
  plVar8[0x16] = unaff_x20 + 0x28;
  lVar5 = 0;
  func_0x000107c5fcbc(0,uVar1,uVar2);
  plVar8[0x1b] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x1c] = lVar5;
  uVar9 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1d] = uVar9;
  lVar5 = 0;
  func_0x000107c5eec8();
  plVar8[0x1e] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x1f] = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  plVar8[0x20] = lVar5;
  uVar9 = lVar5 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x21] = uVar9;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar4 = PTR___sScMMa_11034fc70;
  lVar5 = lVar6;
  func_0x000107c5fce8();
  plVar8[0x22] = lVar5;
  lVar5 = 0x112d45220;
  FUN_10276b3a0(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar8[0x23] = lVar6;
  plVar8[0x24] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102767164,lVar6,lVar5);
  return;
}



/* Entry: 10276b994; end: 10276ba03;  */

void FUN_10276b994(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10276bb2c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10276a4c8;
                    /* WARNING: Could not recover jumptable at 0x00010276a4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 10276ba04; end: 10276ba0b;  */

undefined1  [16] FUN_10276ba04(void)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c5fb78(0xd000000000000023,0x800000010f0baa70);
  uStack_31 = uVar1;
  func_0x000107c603d0(&uStack_31,&uStack_30,&UNK_110547ae8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar2._8_8_ = uStack_28;
  auVar2._0_8_ = uStack_30;
  return auVar2;
}



/* Entry: 10276ba0c; end: 10276ba83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10276ba0c(undefined8 param_1,uint param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar13;
  ulong uVar14;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long unaff_x20;
  long lVar19;
  bool bVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_140 [8];
  undefined1 *puStack_138;
  ulong uStack_130;
  long lStack_128;
  uint uStack_11c;
  long lStack_118;
  uint uStack_10c;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar11 = 0;
  func_0x000107c5eec8();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar14 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  lVar21 = *(long *)(unaff_x20 + 0x10);
  lStack_f8 = *(long *)(unaff_x20 + 0x18);
  plVar1 = (long *)(unaff_x20 +
                   (uVar14 + *(long *)(*(long *)(lVar11 + -8) + 0x40) + 7 & 0xfffffffffffffff8));
  lStack_108 = *plVar1;
  lStack_e8 = unaff_x20 + uVar14;
  uStack_11c = (uint)*(byte *)(plVar1 + 1);
  lVar4 = 0;
  uStack_10c = param_2;
  uStack_100 = param_1;
  func_0x000107c5eec8();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar11 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_f0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar5 = 0;
  FUN_10276adc8();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar12 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112ebc730;
  lStack_118 = lVar12;
  func_0x0001000285a8(0x112ebc730,&UNK_10dad65a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_02;
  lVar11 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  uVar14 = lVar12 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_e0 = uVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d8 = lVar11 - extraout_x12_00;
  func_0x000107c61428(lVar21 + 0x10,auStack_80,0,0);
  lVar21 = lVar21 + 0x10;
  func_0x000107c61648();
  if (lVar21 == 0) {
    return;
  }
  plVar1 = (long *)(lStack_f8 + _DAT_112ebd9d0);
  puStack_138 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar21 + 0x38,auStack_98,0x20,0);
  lVar17 = *(long *)(lVar21 + 0x38);
  lVar6 = *plVar1;
  uVar14 = plVar1[1];
  uStack_130 = uVar14;
  lStack_128 = lVar6;
  lStack_f8 = lVar21;
  if (*(long *)(lVar17 + 0x10) == 0) {
    bVar20 = true;
  }
  else {
    func_0x000107c61434(lVar17);
    func_0x000100029284(lVar6);
    bVar20 = (uVar14 & 1) == 0;
    if (!bVar20) {
      func_0x000102763634(*(long *)(lVar17 + 0x38) + *(long *)(lVar22 + 0x48) * lVar6,lVar12);
    }
    func_0x000107c6142c(lVar17);
  }
  (**(code **)(lVar22 + 0x38))(lVar12,bVar20,1,lVar5);
  lVar6 = lVar12;
  (**(code **)(lVar22 + 0x30))(lVar12,1,lVar5);
  lVar5 = lStack_d8;
  lVar21 = lStack_118;
  if ((int)lVar6 == 0) {
    func_0x000102763634(lVar12,lStack_118);
    func_0x00010276baec(lVar12,0x112ebc730,&UNK_10dad65a0);
    func_0x000107c614a8(auStack_98);
    pcVar18 = *(code **)(lVar19 + 0x10);
    (*pcVar18)(lVar5,lVar21,lVar4);
    FUN_10276aedc(lVar21);
    pcVar15 = *(code **)(lVar19 + 0x38);
    (*pcVar15)(lVar5,0,1,lVar4);
  }
  else {
    func_0x00010276baec(lVar12,0x112ebc730,&UNK_10dad65a0);
    func_0x000107c614a8(auStack_98);
    pcVar15 = *(code **)(lVar19 + 0x38);
    (*pcVar15)(lVar5,1,1,lVar4);
    pcVar18 = *(code **)(lVar19 + 0x10);
  }
  (*pcVar18)(lVar11,lStack_e8,lVar4);
  (*pcVar15)(lVar11,0,1,lVar4);
  lVar21 = (long)*(int *)(lStack_f0 + 0x30);
  func_0x00010276baa4(lVar5,lVar23,0x112d3bc20,&UNK_10d904ef0);
  func_0x00010276baa4(lVar11,lVar23 + lVar21,0x112d3bc20,&UNK_10d904ef0);
  pcVar15 = *(code **)(lVar19 + 0x30);
  lVar12 = lVar23;
  (*pcVar15)(lVar23,1,lVar4);
  uVar14 = uStack_e0;
  if ((int)lVar12 == 1) {
    func_0x00010276baec(lVar11,0x112d3bc20,&UNK_10d904ef0);
    func_0x00010276baec(lVar5,0x112d3bc20,&UNK_10d904ef0);
    lVar21 = lVar23 + lVar21;
    (*pcVar15)(lVar21,1,lVar4);
    lVar11 = lStack_f8;
    if ((int)lVar21 != 1) {
LAB_102767d58:
      lVar11 = lStack_f8;
      func_0x00010276baec(lVar23,0x112d68090,&UNK_10da24400);
      goto LAB_102768020;
    }
    func_0x00010276baec(lVar23,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x00010276baa4(lVar23,uStack_e0,0x112d3bc20,&UNK_10d904ef0);
    lVar5 = lVar23 + lVar21;
    (*pcVar15)(lVar5,1,lVar4);
    puVar2 = puStack_138;
    if ((int)lVar5 == 1) {
      func_0x00010276baec(lVar11,0x112d3bc20,&UNK_10d904ef0);
      func_0x00010276baec(lStack_d8,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar19 + 8))(uVar14,lVar4);
      goto LAB_102767d58;
    }
    (**(code **)(lVar19 + 0x20))(puStack_138,lVar23 + lVar21,lVar4);
    uVar7 = 0x112d68098;
    FUN_10276b3a0(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                  PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    uVar8 = uVar14;
    func_0x000107c5fab8(uVar14,puVar2,lVar4,uVar7);
    pcVar15 = *(code **)(lVar19 + 8);
    (*pcVar15)(puVar2,lVar4);
    func_0x00010276baec(lVar11,0x112d3bc20,&UNK_10d904ef0);
    func_0x00010276baec(lStack_d8,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar15)(uVar14,lVar4);
    func_0x00010276baec(lVar23,0x112d3bc20,&UNK_10d904ef0);
    lVar11 = lStack_f8;
    if ((uVar8 & 1) == 0) goto LAB_102768020;
  }
  lVar21 = lStack_108;
  if ((uStack_10c & 0xff) == 1) {
    func_0x000107c61428(lStack_108 + 0x10,auStack_98,1,0);
    uVar7 = uStack_100;
    uVar16 = *(undefined8 *)(lVar21 + 0x10);
    *(undefined8 *)(lVar21 + 0x10) = uStack_100;
    func_0x000107c61434(uStack_100);
  }
  else {
    func_0x000107c61428(lStack_108 + 0x10,auStack_98,0,0);
    uVar16 = *(undefined8 *)(lVar21 + 0x10);
    uVar7 = uVar16;
    func_0x000107c61434();
    FUN_10276a840();
    func_0x000107c6142c(uVar16);
    func_0x000107c61428(lVar21 + 0x10,auStack_d0,1,0);
    uVar16 = *(undefined8 *)(lVar21 + 0x10);
    *(undefined8 *)(lVar21 + 0x10) = uVar7;
  }
  lVar4 = lStack_128;
  uVar14 = uStack_130;
  func_0x000107c61434(uVar7);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(lVar11 + 0x30,auStack_b0,0x21,0);
  uVar9 = *(ulong *)(lVar11 + 0x30);
  func_0x000107c61558();
  lVar5 = *(long *)(lVar11 + 0x30);
  *(undefined8 *)(lVar11 + 0x30) = 0x8000000000000000;
  lVar12 = lVar4;
  uVar8 = uVar14;
  lStack_b8 = lVar5;
  func_0x000100029284();
  uVar13 = (ulong)~(uint)uVar8 & 1;
  lVar21 = *(long *)(lVar5 + 0x10) + uVar13;
  if (SCARRY8(*(long *)(lVar5 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10276804c);
    (*pcVar15)();
  }
  if (*(long *)(lVar5 + 0x18) < lVar21) {
    func_0x000102768fc0(lVar21,uVar9,0x112ebc630,&UNK_10dad6458);
    lVar5 = lStack_b8;
    lVar12 = lVar4;
    uVar9 = uVar14;
    func_0x000100029284();
    if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10276806c);
      (*pcVar15)();
    }
  }
  else if ((uVar9 & 1) == 0) {
    FUN_102761f50();
    lVar5 = lStack_b8;
  }
  uVar3 = uStack_11c;
  *(long *)(lVar11 + 0x30) = lVar5;
  if ((uVar8 & 1) == 0) {
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1027630c0(PTR___swiftEmptyArrayStorage_11034f1c8);
    FUN_102763878(lVar12,lVar4,uVar14,puVar10,lVar5);
    func_0x000107c61434(uVar14);
  }
  lVar21 = *(long *)(lVar5 + 0x38);
  uVar16 = *(undefined8 *)(lVar21 + lVar12 * 8);
  func_0x000107c61558(uVar16);
  lStack_b8 = *(undefined8 *)(lVar21 + lVar12 * 8);
  *(undefined8 *)(lVar21 + lVar12 * 8) = 0x8000000000000000;
  FUN_102768924(uVar7,uVar3,uVar16);
  *(long *)(lVar21 + lVar12 * 8) = lStack_b8;
  func_0x000107c614a8(auStack_b0);
  func_0x00010276806c(lVar4,uVar14);
LAB_102768020:
  func_0x000107c61574(lVar11);
  return;
}



/* Entry: 10276ba84; end: 10276baa3;  */

void FUN_10276ba84(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010276ba98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10276baa4; end: 10276bb2b;  */

undefined8 FUN_10276baa4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10276bb2c; end: 10276bb37;  */

void FUN_10276bb2c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276aed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276bb38; end: 10276bb83;  */

void FUN_10276bb38(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10276bc10,param_1);
  return;
}



/* Entry: 10276bb84; end: 10276bc0f;  */

void FUN_10276bb84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112ebc8d8;
  func_0x0001000285a8(0x112ebc8d8,&UNK_10db4b840);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10276bc10; end: 10276bc27;  */

void FUN_10276bc10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112ebc8d8;
  func_0x0001000285a8(0x112ebc8d8,&UNK_10db4b840);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10276bc28; end: 10276bd13;  */

void FUN_10276bc28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110545b10;
  func_0x000107c613fc(&UNK_110545b10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x0001000285a8(0x112ebc8e0,&UNK_10dad6780);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001002acf1c(FUN_10276bd14,puVar1);
  return;
}



/* Entry: 10276bd14; end: 10276bd1b;  */

/* WARNING: Possible PIC construction at 0x00010276bcfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010276bd00) */

void FUN_10276bd14(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_10276f73c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(long *)(lVar4 + 0x18) = lVar1;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110545b28;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 10276bd1c; end: 10276bd57;  */

void FUN_10276bd1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10276bd58; end: 10276c423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10276bd58(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puStack_300;
  long lStack_2f8;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [608];
  
  puVar3 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar11 = auStack_2c0;
  func_0x000107c61534();
  puVar3[3] = 0x18;
  puVar3[2] = 0xc;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dcab38;
  func_0x000107c5faec();
  puVar10 = puVar3 + 4;
  *puVar10 = ppuVar4;
  puVar3[5] = puVar11;
  lVar5 = param_1;
  FUN_10276e9bc();
  uVar8 = 0x112d7a520;
  uVar6 = 0;
  FUN_10276ff30(0,0x112d7a520,&PTR_PTR_1126b2390);
  puVar3[9] = uVar6;
  puVar3[6] = lVar5;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e078;
  func_0x000107c5faec();
  puVar3[10] = ppuVar4;
  puVar3[0xb] = uVar8;
  puVar2 = PTR___sSbN_11034dd40;
  puVar3[0xf] = PTR___sSbN_11034dd40;
  *(undefined1 *)(puVar3 + 0xc) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0be98;
  func_0x000107c5faec();
  puVar3[0x10] = ppuVar4;
  puVar3[0x11] = uVar8;
  if (*(long *)(param_1 + _DAT_112ebd9f0 + 8) == 0) {
    FUN_102787314();
    ppuVar7 = ppuVar4;
    FUN_1027af714();
    uVar6 = uVar8;
    func_0x000107c61170(ppuVar4);
    uVar1 = (uint)uVar8 & 0xff;
    if (uVar1 != 0xff) {
      if (uVar1 != 1) {
        FUN_10276f644(ppuVar7);
        goto LAB_10276bebc;
      }
      uVar6 = 1;
      FUN_10276f644(ppuVar7);
    }
    uVar13 = 6;
  }
  else {
    if (*(char *)(param_1 + _DAT_112ebd9f0 + 0x10) == '\x01') {
      uVar13 = 6;
      uVar6 = uVar8;
      goto LAB_10276bec0;
    }
LAB_10276bebc:
    uVar13 = 1;
    uVar6 = uVar8;
  }
LAB_10276bec0:
  puVar3[0x15] = PTR___sSuN_11034e220;
  puVar3[0x12] = uVar13;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0d8b8;
  func_0x000107c5faec();
  puVar3[0x16] = ppuVar4;
  puVar3[0x17] = uVar6;
  puVar3[0x1b] = puVar2;
  *(undefined1 *)(puVar3 + 0x18) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e0b8;
  func_0x000107c5faec();
  puVar3[0x1c] = ppuVar4;
  puVar3[0x1d] = uVar6;
  puVar3[0x21] = puVar2;
  *(undefined1 *)(puVar3 + 0x1e) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e0d8;
  func_0x000107c5faec();
  puVar3[0x22] = ppuVar4;
  puVar3[0x23] = uVar6;
  puVar3[0x27] = puVar2;
  *(undefined1 *)(puVar3 + 0x24) = 0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0dbb8;
  func_0x000107c5faec();
  puVar3[0x28] = ppuVar4;
  puVar3[0x29] = uVar6;
  puVar3[0x2d] = puVar2;
  *(undefined1 *)(puVar3 + 0x2a) = 0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0bcf8;
  func_0x000107c5faec();
  puVar3[0x2e] = ppuVar4;
  puVar3[0x2f] = uVar6;
  puVar3[0x33] = puVar2;
  *(undefined1 *)(puVar3 + 0x30) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0dc78;
  func_0x000107c5faec();
  puVar3[0x34] = ppuVar4;
  puVar3[0x35] = uVar6;
  puVar3[0x39] = puVar2;
  *(undefined1 *)(puVar3 + 0x36) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0dd98;
  func_0x000107c5faec();
  puVar3[0x3a] = ppuVar4;
  puVar3[0x3b] = uVar6;
  puVar3[0x3f] = puVar2;
  *(undefined1 *)(puVar3 + 0x3c) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0de58;
  func_0x000107c5faec();
  puVar3[0x40] = ppuVar4;
  puVar3[0x41] = uVar6;
  puVar3[0x45] = puVar2;
  *(undefined1 *)(puVar3 + 0x42) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0ddf8;
  func_0x000107c5faec();
  puVar3[0x46] = ppuVar4;
  puVar3[0x47] = uVar6;
  lVar5 = param_1;
  func_0x00010276c0f0(param_1);
  FUN_10276c424(param_1,(uint)lVar5 & 1,0);
  uVar8 = 0x112ebc8e8;
  func_0x0001000285a8(0x112ebc8e8,&UNK_10dad6790);
  puVar3[0x4b] = uVar8;
  puVar3[0x48] = param_1;
  puVar9 = puVar3;
  func_0x000100214a84();
  func_0x000107c61588(puVar3);
  uVar8 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  lVar12 = 0xc;
  func_0x000107c61408(puVar10,0xc,uVar8);
  FUN_102787314();
  puVar3 = puVar10;
  func_0x00010276f408();
  lVar5 = lVar12;
  func_0x000107c61170(puVar10);
  puStack_300 = puVar9;
  if (lVar12 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f0dd18;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dd18);
    puStack_2e8 = PTR___sSSN_11034da80;
    puStack_300 = puVar3;
    lStack_2f8 = lVar12;
    func_0x000100102924(&puStack_300,auStack_2e0);
    puVar3 = puVar9;
    func_0x000107c61558(puVar9);
    puStack_300 = puVar9;
    func_0x0001001029e8(auStack_2e0,ppuVar4,lVar5,puVar3);
    func_0x000107c6142c(lVar5);
  }
  return puStack_300;
}



/* Entry: 10276c424; end: 10276d007;  */

undefined8 * FUN_10276c424(undefined8 *param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 unaff_x20;
  undefined1 uVar17;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [64];
  undefined8 *puStack_78;
  
  puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = param_2;
  func_0x000102787a68();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  if (((ulong)param_1 & 1) != 0) {
    func_0x000107e9084c();
    func_0x000107c61180();
    if (param_1 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fadc(puVar9,puVar6);
      func_0x000107c6142c(puVar6);
    }
    puVar4 = PTR_PTR_1126b2dd8;
    func_0x000107c610f8();
    pcStack_c8 = FUN_10276e5c0;
    puStack_c0 = (undefined *)0x0;
    puStack_e8 = puVar13;
    uStack_e0 = 0x42000000;
    pcStack_d8 = FUN_10276e070;
    puStack_d0 = &UNK_110545de0;
    ppuVar5 = &puStack_e8;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_c0);
    func_0x000107c48ef4();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar9);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cff4);
      (*pcVar3)();
    }
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        puVar6 = (undefined *)puVar7;
      }
      func_0x000107c60480(puVar6);
    }
    puVar6 = puVar6 + 1;
    puVar7 = (undefined8 *)0x0;
    func_0x00010276e198(0,puVar6,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar16 + 0x10);
    puVar8 = (undefined *)(uVar1 + 1);
    param_1 = puVar7;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
      param_1 = (undefined8 *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
      puVar6 = puVar8;
      func_0x00010276e198(param_1,puVar8,1,puVar7);
      uVar16 = (ulong)param_1 & 0xffffffffffffff8;
    }
    *(undefined **)(uVar16 + 0x10) = puVar8;
    *(undefined **)(uVar16 + uVar1 * 8 + 0x20) = puVar4;
    puVar7 = param_1;
    puStack_78 = param_1;
  }
  func_0x000102787a50();
  if (((ulong)param_1 & 1) == 0) goto LAB_10276c75c;
  if ((param_3 & 1) == 0) {
    func_0x000107e90b4c();
    func_0x000107c61180();
    if (param_1 != (undefined8 *)0x0) {
      uVar17 = 0;
      pcVar3 = (code *)0x10276ffc4;
      puVar4 = &UNK_110545d78;
      puVar13 = puVar6;
      goto LAB_10276c5fc;
    }
    puVar4 = &UNK_110545d28;
    puVar6 = (undefined *)0x20;
    func_0x000107c613fc(&UNK_110545d28,0x20,7);
    puVar9 = (undefined8 *)0x0;
    puVar4[0x10] = 0;
    *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
    pcVar3 = (code *)0x10276fe8c;
  }
  else {
    func_0x000107e90b64();
    func_0x000107c61180();
    uVar17 = 1;
    if (param_1 == (undefined8 *)0x0) {
      puVar4 = &UNK_110545da0;
      puVar6 = (undefined *)0x20;
      func_0x000107c613fc(&UNK_110545da0,0x20,7);
      puVar9 = (undefined8 *)0x0;
      puVar4[0x10] = 1;
      *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
      pcVar3 = (code *)0x10276ffc8;
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    }
    else {
      pcVar3 = (code *)0x10276ffcc;
      puVar4 = &UNK_110545dc8;
      puVar13 = puVar6;
LAB_10276c5fc:
      puVar9 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c613fc(puVar4,0x20,7);
      puVar4[0x10] = uVar17;
      *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
      puVar6 = puVar13;
      func_0x000107c5fadc(puVar9,puVar13);
      func_0x000107c6142c(puVar13);
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    }
  }
  puVar8 = PTR_PTR_1126b2dd8;
  func_0x000107c610f8();
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_10276e070;
  puStack_d0 = &UNK_110545d40;
  ppuVar5 = &puStack_e8;
  puStack_e8 = puVar13;
  pcStack_c8 = pcVar3;
  puStack_c0 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_c0);
  func_0x000107c48ef4();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar9);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cff8);
    (*pcVar3)();
  }
  param_1 = puVar7;
  func_0x000107c61550();
  if ((((int)param_1 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar9 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar7) {
        puVar9 = puVar7;
      }
      func_0x000107c60480(puVar9);
    }
    puVar6 = (undefined *)((long)puVar9 + 1);
    param_1 = (undefined8 *)0x0;
    func_0x00010276e198(0,puVar6,1,puVar7);
    puVar7 = param_1;
  }
  uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar16 + 0x10);
  puVar4 = (undefined *)(uVar1 + 1);
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
    param_1 = (undefined8 *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
    puVar6 = puVar4;
    func_0x00010276e198(param_1,puVar4,1,puVar7);
    uVar16 = (ulong)param_1 & 0xffffffffffffff8;
    puVar7 = param_1;
  }
  *(undefined **)(uVar16 + 0x10) = puVar4;
  *(undefined **)(uVar16 + uVar1 * 8 + 0x20) = puVar8;
  puStack_78 = puVar7;
LAB_10276c75c:
  func_0x000102787a38();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000107e90894();
    func_0x000107c61180();
    if (param_1 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fadc(puVar9,puVar6);
      func_0x000107c6142c(puVar6);
    }
    puVar6 = PTR_PTR_1126b2dd8;
    func_0x000107c610f8();
    pcStack_c8 = FUN_10276e68c;
    puStack_c0 = (undefined *)0x0;
    uStack_e0 = 0x42000000;
    pcStack_d8 = FUN_10276e070;
    puStack_d0 = &UNK_110545cf0;
    ppuVar5 = &puStack_e8;
    puStack_e8 = puVar13;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_c0);
    func_0x000107c48ef4();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar9);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cffc);
      (*pcVar3)();
    }
    param_1 = puVar7;
    func_0x000107c61550();
    if ((((int)param_1 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar9 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined8 *)0x7fffffffffffffff < puVar7) {
          puVar9 = puVar7;
        }
        func_0x000107c60480(puVar9);
      }
      param_1 = (undefined8 *)0x0;
      func_0x00010276e198(0,(long)puVar9 + 1,1,puVar7);
      puVar7 = param_1;
    }
    uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar16 + 0x10);
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
      param_1 = (undefined8 *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
      func_0x00010276e198(param_1,uVar1 + 1,1,puVar7);
      uVar16 = (ulong)param_1 & 0xffffffffffffff8;
      puVar7 = param_1;
    }
    *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar16 + uVar1 * 8 + 0x20) = puVar6;
    puStack_78 = puVar7;
  }
  func_0x000102774860();
  puVar14 = auStack_b8;
  func_0x000107c61534();
  param_1[3] = 9;
  param_1[2] = 4;
  puVar7 = param_1;
  func_0x000107e908ac();
  func_0x000107c61180();
  if (puVar7 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puVar15 = puVar14;
    func_0x000107c5fadc(puVar9,puVar14);
    func_0x000107c6142c(puVar14);
    puVar14 = puVar15;
  }
  puVar6 = PTR_PTR_1126b2dd8;
  func_0x000107c610f8();
  pcStack_c8 = (code *)0x10276e6d0;
  puStack_c0 = (undefined *)0x0;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_10276e070;
  puStack_d0 = &UNK_110545bd8;
  ppuVar5 = &puStack_e8;
  puStack_e8 = puVar13;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_c0);
  func_0x000107c48ef4();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cfe4);
    (*pcVar3)();
  }
  param_1[4] = puVar6;
  func_0x000107e90b04();
  func_0x000107c61180();
  if (puVar9 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    puVar15 = puVar14;
    func_0x000107c5fadc(puVar7,puVar14);
    func_0x000107c6142c(puVar14);
    puVar14 = puVar15;
  }
  puVar6 = PTR_PTR_1126b2dd8;
  func_0x000107c610f8();
  pcStack_c8 = (code *)0x10276e714;
  puStack_c0 = (undefined *)0x0;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_10276e070;
  puStack_d0 = &UNK_110545c00;
  ppuVar5 = &puStack_e8;
  puStack_e8 = puVar13;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_c0);
  func_0x000107c48ef4();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cfe8);
    (*pcVar3)();
  }
  param_1[5] = puVar6;
  func_0x000107e90b34();
  func_0x000107c61180();
  if (puVar7 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puVar15 = puVar14;
    func_0x000107c5fadc(puVar9,puVar14);
    func_0x000107c6142c(puVar14);
    puVar14 = puVar15;
  }
  puVar6 = PTR_PTR_1126b2dd8;
  func_0x000107c610f8();
  pcStack_c8 = (code *)0x10276e758;
  puStack_c0 = (undefined *)0x0;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_10276e070;
  puStack_d0 = &UNK_110545c28;
  ppuVar5 = &puStack_e8;
  puStack_e8 = puVar13;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_c0);
  func_0x000107c48ef4();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cfec);
    (*pcVar3)();
  }
  param_1[6] = puVar6;
  func_0x000107e90aec();
  func_0x000107c61180();
  if (puVar9 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    func_0x000107c5fadc(puVar7,puVar14);
    func_0x000107c6142c(puVar14);
  }
  puVar6 = PTR_PTR_1126b2dd8;
  func_0x000107c610f8();
  pcStack_c8 = (code *)0x10276e79c;
  puStack_c0 = (undefined *)0x0;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_10276e070;
  puStack_d0 = &UNK_110545c50;
  ppuVar5 = &puStack_e8;
  puStack_e8 = puVar13;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_c0);
  func_0x000107c48ef4();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar7);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276cff0);
    (*pcVar3)();
  }
  param_1[7] = puVar6;
  FUN_10276de78();
  if (((ulong)param_2 & 1) != 0) {
    func_0x0001038da6ac();
    uVar10 = *param_1;
    uVar2 = param_1[1];
    puVar6 = PTR_PTR_1126b2dd8;
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar10,uVar2);
    func_0x000107c6142c(uVar2);
    pcStack_c8 = FUN_10276e7e0;
    puStack_c0 = (undefined *)0x0;
    uStack_e0 = 0x42000000;
    pcStack_d8 = FUN_10276e070;
    puStack_d0 = &UNK_110545c78;
    ppuVar5 = &puStack_e8;
    puStack_e8 = puVar13;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_c0);
    func_0x000107c48ef4();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar10);
    puVar7 = puStack_78;
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276d000);
      (*pcVar3)();
    }
    puVar9 = puStack_78;
    func_0x000107c61550();
    if ((((int)puVar9 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar11 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined8 *)0x7fffffffffffffff < puVar7) {
          puVar11 = puVar7;
        }
        func_0x000107c60480(puVar11);
      }
      puVar9 = (undefined8 *)0x0;
      func_0x00010276e198(0,(long)puVar11 + 1,1,puVar7);
      puVar7 = puVar9;
    }
    puVar11 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
    uVar1 = puVar11[2];
    if ((ulong)puVar11[3] >> 1 <= uVar1) {
      puVar9 = (undefined8 *)(ulong)(1 < (ulong)puVar11[3]);
      func_0x00010276e198(puVar9,uVar1 + 1,1,puVar7);
      puVar11 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff8);
      puVar7 = puVar9;
    }
    puVar11[2] = uVar1 + 1;
    puVar11[uVar1 + 4] = puVar6;
    func_0x0001038da6e4();
    puVar12 = (undefined8 *)*puVar9;
    uVar10 = puVar9[1];
    puVar6 = PTR_PTR_1126b2dd8;
    func_0x000107c610f8();
    func_0x000107c61434(uVar10);
    func_0x000107c5fadc(puVar12,uVar10);
    func_0x000107c6142c(uVar10);
    pcStack_c8 = (code *)0x10276e8ac;
    puStack_c0 = (undefined *)0x0;
    uStack_e0 = 0x42000000;
    pcStack_d8 = FUN_10276e070;
    puStack_d0 = &UNK_110545ca0;
    ppuVar5 = &puStack_e8;
    puStack_e8 = puVar13;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_c0);
    func_0x000107c48ef4();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276d004);
      (*pcVar3)();
    }
    if ((ulong)puVar7 >> 0x3e != 0) {
      if ((undefined8 *)0x7fffffffffffffff < puVar7) {
        puVar11 = puVar7;
      }
      func_0x000107c60480(puVar11);
      puVar12 = (undefined8 *)0x0;
      func_0x00010276e198(0,(long)puVar11 + 1,1,puVar7);
      puVar11 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffff8);
      puVar7 = puVar12;
    }
    uVar1 = puVar11[2];
    if ((ulong)puVar11[3] >> 1 <= uVar1) {
      puVar12 = (undefined8 *)(ulong)(1 < (ulong)puVar11[3]);
      func_0x00010276e198(puVar12,uVar1 + 1,1,puVar7);
      puVar11 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffff8);
      puVar7 = puVar12;
    }
    puVar11[2] = uVar1 + 1;
    puVar11[uVar1 + 4] = puVar6;
    func_0x0001038da71c();
    uVar10 = *puVar12;
    uVar2 = puVar12[1];
    puVar6 = PTR_PTR_1126b2dd8;
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar10,uVar2);
    func_0x000107c6142c(uVar2);
    pcStack_c8 = FUN_10276e978;
    puStack_c0 = (undefined *)0x0;
    uStack_e0 = 0x42000000;
    pcStack_d8 = FUN_10276e070;
    puStack_d0 = &UNK_110545cc8;
    ppuVar5 = &puStack_e8;
    puStack_e8 = puVar13;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_c0);
    func_0x000107c48ef4();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar10);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276d008);
      (*pcVar3)();
    }
    puVar9 = puVar7;
    if ((ulong)puVar7 >> 0x3e != 0) {
      if ((undefined8 *)0x7fffffffffffffff < puVar7) {
        puVar11 = puVar7;
      }
      func_0x000107c60480(puVar11);
      puVar9 = (undefined8 *)0x0;
      func_0x00010276e198(0,(long)puVar11 + 1,1,puVar7);
      puVar11 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff8);
    }
    uVar1 = puVar11[2];
    puVar7 = puVar9;
    if ((ulong)puVar11[3] >> 1 <= uVar1) {
      puVar7 = (undefined8 *)(ulong)(1 < (ulong)puVar11[3]);
      func_0x00010276e198(puVar7,uVar1 + 1,1,puVar9);
      puVar11 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
    }
    puVar11[2] = uVar1 + 1;
    puVar11[uVar1 + 4] = puVar6;
    puStack_78 = puVar7;
  }
  return puStack_78;
}



/* Entry: 10276d008; end: 10276d087;  */

void FUN_10276d008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_3;
  *(undefined8 **)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  *(undefined8 *)(unaff_x22 + 0x170) = *unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x178) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x180) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x188) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 400) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d088,uVar1,uVar2);
  return;
}



/* Entry: 10276d088; end: 10276d1bf;  */

void FUN_10276d088(void)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar7 = *(long *)(unaff_x22 + 0x150);
  lVar5 = lVar7;
  func_0x00010276c0f0();
  bVar2 = (byte)lVar5 & 1;
  *(byte *)(unaff_x22 + 0x1d0) = bVar2;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x1a0) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar8;
  *(long *)(unaff_x22 + 0x120) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(byte *)(unaff_x22 + 0x138) = bVar2;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar6;
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1a8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10276d1c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x1b0) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d20c,lVar5);
  return;
}



/* Entry: 10276d1c0; end: 10276d20b;  */

void FUN_10276d1c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1a8));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10276d37c,*(undefined8 *)(lVar2 + 400),*(undefined8 *)(lVar2 + 0x198));
  return;
}



/* Entry: 10276d20c; end: 10276d27f;  */

void FUN_10276d20c(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x148) = unaff_x22 + 0x10;
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10276d280;
  uVar1 = *(undefined1 *)(unaff_x22 + 0x1d0);
  lVar6 = *(long *)(unaff_x22 + 0x170);
  lVar3 = *(long *)(unaff_x22 + 0x158);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  plVar2[5] = *(long *)(unaff_x22 + 0x160);
  plVar2[6] = lVar6;
  *(undefined1 *)(plVar2 + 0xb) = uVar1;
  plVar2[3] = lVar5;
  plVar2[4] = lVar3;
  plVar2[2] = unaff_x22 + 0x148;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar4;
  lVar5 = 0;
  func_0x000107c5fcec();
  plVar2[8] = lVar5;
  lVar3 = lVar5;
  func_0x000107c5fce8();
  plVar2[9] = lVar3;
  func_0x000100eea164();
  plVar2[10] = lVar3;
  func_0x000107c5fca8(lVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d45c,lVar5,lVar3);
  return;
}



/* Entry: 10276d280; end: 10276d2f3;  */

void FUN_10276d280(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x1c0));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x1c8) = plVar1;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_10276d2f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 10276d2f4; end: 10276d3af;  */

void FUN_10276d2f4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10276d338,*(undefined8 *)(lVar1 + 0x1b0),*(undefined8 *)(lVar1 + 0x1b8));
  return;
}



/* Entry: 10276d3b0; end: 10276d45b;  */

void FUN_10276d3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined1 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d45c,uVar3,uVar4);
  return;
}



/* Entry: 10276d45c; end: 10276d5f7;  */

void FUN_10276d45c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x22;
  code *pcVar11;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  lVar7 = 0;
  func_0x000107c5fd0c();
  pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  (*pcVar11)(uVar1,1,1,lVar7);
  func_0x000107c61174();
  uVar9 = uVar2;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  puVar10 = &UNK_110545b70;
  func_0x000107c613fc(&UNK_110545b70,0x40,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar9;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  *(undefined8 *)(puVar10 + 0x20) = uVar8;
  *(undefined8 *)(puVar10 + 0x28) = uVar5;
  *(undefined8 *)(puVar10 + 0x30) = uVar2;
  *(undefined8 *)(puVar10 + 0x38) = uVar4;
  func_0x00010175ad14(uVar1,&UNK_10dad6858,puVar10);
  FUN_10276fe08(uVar1,0x112d453c8,&UNK_10d90ac60);
  (*pcVar11)(uVar1,1,1,lVar7);
  func_0x000107c61174();
  uVar9 = uVar2;
  func_0x000107c6157c();
  func_0x000107c5fce8();
  puVar10 = &UNK_110545b98;
  func_0x000107c613fc(&UNK_110545b98,0x48,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar9;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  *(undefined8 *)(puVar10 + 0x20) = uVar8;
  *(undefined8 *)(puVar10 + 0x28) = uVar5;
  *(undefined8 *)(puVar10 + 0x30) = uVar2;
  puVar10[0x38] = uVar6;
  *(undefined8 *)(puVar10 + 0x40) = uVar4;
  func_0x00010175ad14(uVar1,&UNK_10dad6868,puVar10);
  FUN_10276fe08(uVar1,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010276d5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10276d5f8; end: 10276d667;  */

void FUN_10276d5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x88) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d668,uVar1,uVar2);
  return;
}



/* Entry: 10276d668; end: 10276d6bf;  */

void FUN_10276d668(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  FUN_102787314();
  *(long *)(unaff_x22 + 0xa8) = param_1;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10276d6c0;
  plVar1[0x13] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[0x14] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[0x15] = lVar2;
  plVar1[0x16] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276f974,lVar2,lVar3);
  return;
}



/* Entry: 10276d6c0; end: 10276d717;  */

void FUN_10276d6c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x60) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  uVar1 = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar2 + 0xb8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10276d718,*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa0));
  return;
}



/* Entry: 10276d718; end: 10276d803;  */

void FUN_10276d718(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    pcVar1 = *(code **)(unaff_x22 + 0x80);
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0dcf8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = ppuVar2;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar4 + 0x28) = lVar3;
    *(undefined8 *)(lVar4 + 0x30) = uVar6;
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
    lVar3 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    FUN_10276fe08((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    (*pcVar1)(lVar3,0);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010276d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10276d804; end: 10276d913;  */

void FUN_10276d804(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 in_w6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x169) = in_w6;
  *(undefined8 *)(unaff_x22 + 0xd0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0xd8) = in_x7;
  *(undefined8 *)(unaff_x22 + 0xc0) = in_x3;
  *(undefined8 *)(unaff_x22 + 200) = in_x4;
  lVar4 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870);
  *(long *)(unaff_x22 + 0xe0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  lVar4 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  *(long *)(unaff_x22 + 0xf8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar1;
  lVar4 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  *(long *)(unaff_x22 + 0x110) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d914,uVar2,uVar3);
  return;
}



/* Entry: 10276d914; end: 10276da73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10276d914(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xc0) + _DAT_112ebd9e8);
  *(long *)(unaff_x22 + 0x140) = lVar8;
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar1 = *(long *)(unaff_x22 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar4 = *(long *)(unaff_x22 + 0xe8);
    (**(code **)(lVar4 + 0x68))
              (uVar7,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
               ,uVar9);
    func_0x000107c6157c(lVar8);
    func_0x0001000d52ec(uVar2,uVar7);
    (**(code **)(lVar4 + 8))(uVar7,uVar9);
    func_0x000107c5fd34(uVar6,uVar3);
    (**(code **)(lVar1 + 8))(uVar2,uVar3);
    *(undefined ***)(unaff_x22 + 0x148) = &PTR____CFConstantStringClassReference_110f0e518;
    *(undefined ***)(unaff_x22 + 0x150) = &PTR____CFConstantStringClassReference_110f0ddf8;
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10276da74;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar5,unaff_x22 + 0x168,*(undefined8 *)(unaff_x22 + 0x110));
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010276da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10276da74; end: 10276dab7;  */

void FUN_10276da74(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10276dab8,*(undefined8 *)(lVar1 + 0x130),*(undefined8 *)(lVar1 + 0x138));
  return;
}



/* Entry: 10276dab8; end: 10276dd73;  */

void FUN_10276dab8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  bVar5 = *(byte *)(unaff_x22 + 0x168);
  if (bVar5 == 2) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar8 = *(long *)(unaff_x22 + 0x118);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
    func_0x000107c61574(uVar14);
    (**(code **)(lVar8 + 8))(uVar12,uVar15);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010276db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x169);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c5faec();
  puVar13 = (undefined8 *)(unaff_x22 + 0x30);
  *puVar13 = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined **)(unaff_x22 + 0x58) = PTR___sSbN_11034dd40;
  bVar5 = bVar5 & 1;
  *(byte *)(unaff_x22 + 0x40) = bVar5;
  func_0x000107c5faec();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  FUN_10276c424(uVar14,uVar6,bVar5);
  uVar12 = 0x112ebc8e8;
  func_0x0001000285a8(0x112ebc8e8,&UNK_10dad6790);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar14;
  func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
  lVar8 = 2;
  func_0x000107c60498();
  FUN_10276f8c0(puVar13,unaff_x22 + 0x90,0x112d4b5f0,&UNK_10d9127d0);
  uVar3 = *(ulong *)(unaff_x22 + 0x90);
  uVar4 = *(ulong *)(unaff_x22 + 0x98);
  uVar9 = uVar3;
  uVar11 = uVar4;
  func_0x000100029284();
  if ((uVar11 & 1) == 0) {
    lVar1 = lVar8 + 0x40;
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar9 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    func_0x000100102924(unaff_x22 + 0xa0,*(long *)(lVar8 + 0x38) + uVar9 * 0x20);
    if (!SCARRY8(*(long *)(lVar8 + 0x10),1)) {
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
      FUN_10276f8c0((undefined8 *)(unaff_x22 + 0x60),unaff_x22 + 0x90,0x112d4b5f0,&UNK_10d9127d0);
      uVar3 = *(ulong *)(unaff_x22 + 0x90);
      uVar4 = *(ulong *)(unaff_x22 + 0x98);
      uVar9 = uVar3;
      uVar11 = uVar4;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) goto LAB_10276dd6c;
      uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar9 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000100102924(unaff_x22 + 0xa0,*(long *)(lVar8 + 0x38) + uVar9 * 0x20);
      if (!SCARRY8(*(long *)(lVar8 + 0x10),1)) {
        pcVar7 = *(code **)(unaff_x22 + 200);
        *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
        uVar12 = 0x112d4b5f0;
        func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
        func_0x000107c61408(puVar13,2,uVar12);
        (*pcVar7)(lVar8,0);
        func_0x000107c61574(lVar8);
        plVar10 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x160) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_10276dd74;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar10,unaff_x22 + 0x168,*(undefined8 *)(unaff_x22 + 0x110));
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10276dd74);
    (*pcVar7)();
  }
LAB_10276dd6c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10276dd70);
  (*pcVar7)();
}



/* Entry: 10276dd74; end: 10276ddb7;  */

void FUN_10276dd74(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10276ffb8,*(undefined8 *)(lVar1 + 0x130),*(undefined8 *)(lVar1 + 0x138));
  return;
}



/* Entry: 10276ddb8; end: 10276de77;  */

void FUN_10276ddb8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_10276feec(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10276ff30(0,0x112e078c0,&PTR__OBJC_CLASS___CLPlacemark_1126a8c08);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10276de78; end: 10276df63;  */

void FUN_10276de78(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_10276e0e8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10276e458(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10276df60);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276df64);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10276df5c);
  (*pcVar1)();
}



/* Entry: 10276df64; end: 10276df6f;  */

void FUN_10276df64(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010276dfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10276df70; end: 10276dfab;  */

void FUN_10276df70(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010276dfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10276dfac; end: 10276dfcb;  */

void FUN_10276dfac(void)

{
  FUN_10276bd58();
  return;
}



/* Entry: 10276dfcc; end: 10276e033;  */

void FUN_10276dfcc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long *plVar4;
  long unaff_x22;
  
  plVar4 = (long *)*unaff_x20;
  plVar3 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10276e034;
  plVar3[0x2c] = param_3;
  plVar3[0x2d] = (long)plVar4;
  plVar3[0x2a] = param_1;
  plVar3[0x2b] = param_2;
  plVar3[0x2e] = *plVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x2f] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x30] = lVar2;
  func_0x000100eea164();
  plVar3[0x31] = lVar2;
  func_0x000107c5fca8();
  plVar3[0x32] = lVar1;
  plVar3[0x33] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d088,lVar1,lVar2);
  return;
}



/* Entry: 10276e034; end: 10276e06f;  */

void FUN_10276e034(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276e06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276e070; end: 10276e0a7;  */

void FUN_10276e070(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10276e0a8; end: 10276e0e7;  */

void FUN_10276e0a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276e0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276e0e8; end: 10276e2bf;  */

void FUN_10276e0e8(long param_1)

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
  func_0x00010276e198();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10276e2c0; end: 10276e33f;  */

undefined * FUN_10276e2c0(undefined *param_1,undefined *param_2)

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
    func_0x000102774860();
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



/* Entry: 10276e340; end: 10276e457;  */

long FUN_10276e340(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10276e454);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10276e458);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10276ff30(0,0x112ebc9a0,&PTR_PTR_1126b2dd8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10276ff30(0,0x112ebc9a0,&PTR_PTR_1126b2dd8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10276e450);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10276e458; end: 10276e5bf;  */

ulong FUN_10276e458(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10276e5c0);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276e5b4);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10276ff30(0,0x112ebc9a0,&PTR_PTR_1126b2dd8);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276e5b8);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276e5bc);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102775f08(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10276e5c0; end: 10276e68b;  */

undefined * FUN_10276e5c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45114(0x4042000000000000,0x4042000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000);
  func_0x000107c61180();
  puVar3 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(puVar1);
    func_0x000107c5af88(puVar2,param_2,0x90);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c4515c(puVar1,param_2,puVar2,1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return puVar3;
}



/* Entry: 10276e68c; end: 10276e7df;  */

void FUN_10276e68c(void)

{
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c45114(0x4042000000000000,0x4042000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10276e7e0; end: 10276e977;  */

undefined * FUN_10276e7e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45114(0x4042000000000000,0x4042000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000);
  func_0x000107c61180();
  puVar3 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(puVar1);
    func_0x000107c5af88(puVar2,param_2,0x94);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c4515c(puVar1,param_2,puVar2,1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return puVar3;
}



/* Entry: 10276e978; end: 10276e9bb;  */

void FUN_10276e978(void)

{
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c45114(0x4042000000000000,0x4042000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10276e9bc; end: 10276f643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10276e9bc(long param_1,undefined8 ****param_2)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined1 *puVar16;
  undefined8 ****ppppuVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 auStack_180 [6];
  undefined8 auStack_150 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined8 ***pppuStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 **ppuStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar6 = 0;
  func_0x000107c5eec8();
  lStack_e0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  puVar16 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppppuVar7 = (undefined8 ****)0x0;
  func_0x000107c5ed50();
  pppuVar13 = ppppuVar7[-1];
  ppppuVar8 = ppppuVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppuVar13[8]);
  lVar18 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_102787314();
  ppppuVar15 = ppppuVar8;
  func_0x000107c44920();
  lStack_d8 = lVar6;
  if ((int)ppppuVar15 != 0) {
    ppppuVar15 = ppppuVar8;
    func_0x000107c4adb4();
    func_0x000107c61180();
    if (ppppuVar15 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3d4);
      (*pcVar4)();
    }
    ppppuVar14 = ppppuVar15;
    func_0x000107c44fd8();
    func_0x000107c61170(ppppuVar15);
    if (ppppuVar14 != (undefined8 ****)0x0) {
      ppppuVar15 = ppppuVar8;
      func_0x000107c4adb4();
      func_0x000107c61180();
      if (ppppuVar15 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3ec);
        (*pcVar4)();
      }
      ppppuVar14 = ppppuVar15;
      func_0x000107c44fd8();
      func_0x000107c61170(ppppuVar15);
      puVar9 = PTR___ss5Int64VN_11034ee50;
      param_2 = (undefined8 ****)PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      pppuStack_90 = ppppuVar14;
      func_0x000107c6057c();
      ppppuVar15 = param_2;
      puStack_118 = puVar9;
      goto LAB_10276eaf8;
    }
  }
  puStack_118 = (undefined *)0x0;
  ppppuVar15 = (undefined8 ****)0x0;
LAB_10276eaf8:
  ppppuVar14 = ppppuVar8;
  func_0x000107c44bf0();
  if ((int)ppppuVar14 == 0) {
    uStack_120 = 0;
    pppuStack_e8 = (undefined8 ****)0x0;
  }
  else {
    ppppuVar14 = ppppuVar8;
    func_0x000107c5d2e8();
    func_0x000107c61180();
    if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3d8);
      (*pcVar4)();
    }
    ppppuVar17 = ppppuVar14;
    func_0x000107c5d300();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar14);
    if (ppppuVar17 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3dc);
      (*pcVar4)();
    }
    ppppuVar14 = ppppuVar17;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar17);
    if (ppppuVar14 == (undefined8 ****)0x0) {
      uStack_120 = 0;
      pppuStack_e8 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar17 = ppppuVar14;
      func_0x000107c5ee30();
      func_0x000107c61170(ppppuVar14);
      uVar10 = 0;
      ppppuVar14 = ppppuVar17;
      func_0x000107c5ee24(0,ppppuVar17,param_2);
      uStack_120 = uVar10;
      pppuStack_e8 = ppppuVar14;
      func_0x00010006c090(ppppuVar17,param_2);
    }
    ppppuVar14 = ppppuVar8;
    func_0x000107c5d2e8();
    func_0x000107c61180();
    if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3e0);
      (*pcVar4)();
    }
    ppppuVar17 = ppppuVar14;
    func_0x000107c5d300();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar14);
    if (ppppuVar17 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3e4);
      (*pcVar4)();
    }
    ppppuVar14 = ppppuVar17;
    func_0x000107c4b580();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar17);
    if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3e8);
      (*pcVar4)();
    }
    ppppuVar17 = ppppuVar14;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar14);
    if (ppppuVar17 == (undefined8 ****)0x0) {
      uStack_a8 = 0;
      pppuStack_b0 = (undefined8 ****)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c60234(&pppuStack_b0,ppppuVar17);
      func_0x000107c615e8(ppppuVar17);
    }
    uStack_88 = uStack_a8;
    pppuStack_90 = pppuStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      FUN_10276fe08(&pppuStack_90,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar10 = 0;
      FUN_10276ff30(0,0x112d3b050,&PTR_PTR_1126d24c8);
      ppppuVar14 = &pppuStack_b8;
      func_0x000107c6147c(ppppuVar14,&pppuStack_90,PTR___sypN_11034f1a8 + 8,uVar10,6);
      pppuVar3 = pppuStack_b8;
      if (((ulong)ppppuVar14 & 1) != 0) {
        ppppuVar14 = (undefined8 ****)pppuStack_b8;
        func_0x000107c5d2ac();
        func_0x000107c61170(pppuVar3);
        if ((ppppuVar15 == (undefined8 ****)0x0) && (ppppuVar14 != (undefined8 ****)0x0)) {
          puVar9 = PTR___ss5Int64VN_11034ee50;
          ppppuVar15 = (undefined8 ****)PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
          pppuStack_90 = ppppuVar14;
          func_0x000107c6057c();
          puStack_118 = puVar9;
        }
      }
    }
  }
  ppppuVar14 = ppppuVar8;
  func_0x000107c3e324();
  func_0x000107c61180();
  if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3cc);
    (*pcVar4)();
  }
  ppppuVar17 = ppppuVar14;
  func_0x000107c3e328();
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar14);
  if (ppppuVar17 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3d0);
    (*pcVar4)();
  }
  lStack_f8 = param_1;
  func_0x000107c600f4(lVar18);
  func_0x000107c61170(ppppuVar17);
  func_0x000107c5ed4c(&pppuStack_90);
  pppuStack_f0 = ppppuVar8;
  if (lStack_78 == 0) {
    pppuStack_d0 = (undefined8 ****)0x0;
    pppuStack_110 = (undefined8 ****)0x0;
    pppuStack_108 = (undefined8 ****)0x0;
    pppuStack_c0 = (undefined8 ****)0x0;
    ppppuVar8 = (undefined8 ****)0x0;
  }
  else {
    uVar10 = 0;
    FUN_10276ff30(0,0x112d538a0,&PTR_PTR_1126b25f0);
    puVar9 = PTR___sypN_11034f1a8;
    pppuStack_110 = (undefined8 ****)0x0;
    pppuStack_108 = (undefined8 ****)0x0;
    pppuStack_c0 = (undefined8 ****)0x0;
    pppuStack_d0 = (undefined8 ****)0x0;
    ppppuVar8 = (undefined8 ****)0x0;
    do {
      while( true ) {
        ppppuVar14 = &pppuStack_b0;
        ppppuVar17 = &pppuStack_90;
        func_0x000107c6147c(ppppuVar14,ppppuVar17,puVar9 + 8,uVar10,6);
        pppuVar3 = pppuStack_b0;
        if (((ulong)ppppuVar14 & 1) == 0) break;
        ppppuVar14 = (undefined8 ****)pppuStack_b0;
        func_0x000107c3e2f4();
        if ((int)ppppuVar14 == 3) {
          ppppuVar14 = (undefined8 ****)pppuVar3;
          pppuStack_c8 = ppppuVar8;
          func_0x000107c5e20c();
          func_0x000107c61180();
          if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3f8);
            (*pcVar4)();
          }
          ppppuVar8 = ppppuVar14;
          func_0x000107c3abfc();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar14);
          if (ppppuVar8 == (undefined8 ****)0x0) {
            func_0x000107c61170(pppuVar3);
            func_0x000107c6142c(pppuStack_c0);
            pppuStack_108 = (undefined8 ****)0x0;
            pppuStack_c0 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar14 = ppppuVar8;
            func_0x000107c5faec();
            pppuStack_108 = ppppuVar14;
            func_0x000107c61170(ppppuVar8);
            func_0x000107c61170(pppuVar3);
            func_0x000107c6142c(pppuStack_c0);
            pppuStack_c0 = ppppuVar17;
          }
          func_0x000107c5ed4c(&pppuStack_90);
        }
        else {
          if ((int)ppppuVar14 != 1) {
            func_0x000107c61170(pppuVar3);
            break;
          }
          ppppuVar14 = (undefined8 ****)pppuVar3;
          pppuStack_128 = ppppuVar7;
          ppuStack_100 = pppuVar13;
          func_0x000107c40534();
          func_0x000107c61180();
          if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3f4);
            (*pcVar4)();
          }
          ppppuVar7 = ppppuVar14;
          func_0x000107c5dcc0();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar14);
          if (ppppuVar7 == (undefined8 ****)0x0) {
            func_0x000107c6142c(ppppuVar8);
            pppuStack_110 = (undefined8 ****)0x0;
            pppuStack_c8 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar14 = ppppuVar7;
            func_0x000107c5faec();
            pppuStack_110 = ppppuVar14;
            func_0x000107c61170(ppppuVar7);
            func_0x000107c6142c(ppppuVar8);
            pppuStack_c8 = ppppuVar17;
          }
          ppppuVar7 = (undefined8 ****)pppuVar3;
          func_0x000107c40534();
          func_0x000107c61180();
          if (ppppuVar7 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3f0);
            (*pcVar4)();
          }
          ppppuVar8 = ppppuVar7;
          func_0x000107c447d4();
          func_0x000107c61170(ppppuVar7);
          if ((int)ppppuVar8 == 0) {
            func_0x000107c61170(pppuVar3);
          }
          else {
            ppppuVar7 = (undefined8 ****)pppuVar3;
            func_0x000107c40534();
            func_0x000107c61180();
            if (ppppuVar7 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f400);
              (*pcVar4)();
            }
            ppppuVar8 = ppppuVar7;
            func_0x000107c4058c();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar7);
            if (ppppuVar8 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f3fc);
              (*pcVar4)();
            }
            ppppuVar7 = ppppuVar8;
            func_0x000107c3fb94();
            iVar5 = (int)ppppuVar7;
            if (iVar5 == 0xd) {
LAB_10276efc4:
              func_0x000107c61170(ppppuVar8);
              func_0x000107c61170(pppuVar3);
              func_0x000107c61170(pppuStack_d0);
              pppuStack_d0 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar7 = ppppuVar8;
              if (iVar5 == 0xc) {
                func_0x000107c5d20c();
                func_0x000107c61180();
                if (ppppuVar7 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f408);
                  (*pcVar4)();
                }
              }
              else {
                if (iVar5 != 0) goto LAB_10276efc4;
                func_0x000107c40568();
                func_0x000107c61180();
                if (ppppuVar7 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10276f404);
                  (*pcVar4)();
                }
              }
              ppppuVar14 = ppppuVar7;
              func_0x000107c40794();
              func_0x000107c61170(ppppuVar7);
              func_0x000107c60234(&pppuStack_b0,ppppuVar14);
              func_0x000107c615e8(ppppuVar14);
              func_0x000107c61170(ppppuVar8);
              func_0x000107c61170(pppuVar3);
              func_0x000107c61170(pppuStack_d0);
              uVar11 = 0;
              FUN_10276ff30(0,0x112ebc9a8,&PTR_PTR_1126b5c10);
              ppppuVar7 = &pppuStack_b8;
              func_0x000107c6147c(ppppuVar7,&pppuStack_b0,puVar9 + 8,uVar11,6);
              pppuStack_d0 = pppuStack_b8;
              if ((int)ppppuVar7 == 0) {
                pppuStack_d0 = (undefined8 ****)0x0;
              }
            }
          }
          func_0x000107c5ed4c(&pppuStack_90);
          pppuVar13 = (undefined8 ***)ppuStack_100;
          ppppuVar7 = (undefined8 ****)pppuStack_128;
        }
        ppppuVar8 = (undefined8 ****)pppuStack_c8;
        if (lStack_78 == 0) goto LAB_10276f0b4;
      }
      func_0x000107c5ed4c(&pppuStack_90);
    } while (lStack_78 != 0);
  }
LAB_10276f0b4:
  (*(code *)pppuVar13[1])(lVar18,ppppuVar7);
  puVar9 = PTR_PTR_1126b2370;
  func_0x000107c610f8();
  *(undefined1 *)(lVar18 + -0xc) = 0;
  *(undefined4 *)(lVar18 + -0x10) = 0;
  *(undefined8 *)(lVar18 + -0x18) = 0;
  *(undefined1 *)(lVar18 + -0x20) = 0;
  func_0x000107c46f84();
  if (ppppuVar8 == (undefined8 ****)0x0) {
    ppppuVar14 = (undefined8 ****)0x0;
  }
  else {
    func_0x000107c61434(ppppuVar8);
    ppppuVar14 = (undefined8 ****)pppuStack_110;
    ppppuVar7 = ppppuVar8;
    func_0x000107c5fadc(pppuStack_110,ppppuVar8);
    func_0x000107c6142c(ppppuVar8);
  }
  pppuVar3 = pppuStack_c0;
  pppuVar13 = pppuStack_e8;
  if ((undefined8 ****)pppuStack_c0 == (undefined8 ****)0x0) {
    ppppuVar17 = (undefined8 ****)0x0;
  }
  else {
    func_0x000107c61434(pppuStack_c0);
    ppppuVar17 = (undefined8 ****)pppuStack_108;
    ppppuVar7 = (undefined8 ****)pppuVar3;
    func_0x000107c5fadc(pppuStack_108,pppuVar3);
    func_0x000107c6142c(pppuVar3);
  }
  if (ppppuVar15 == (undefined8 ****)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    func_0x000107c61434(ppppuVar15);
    puVar19 = puStack_118;
    ppppuVar7 = ppppuVar15;
    func_0x000107c5fadc(puStack_118,ppppuVar15);
    func_0x000107c6142c(ppppuVar15);
  }
  ppuStack_100 = (undefined8 **)puVar9;
  pppuStack_e8 = ppppuVar15;
  pppuStack_c8 = ppppuVar8;
  if ((undefined8 ****)pppuVar13 == (undefined8 ****)0x0) {
    uVar10 = 0;
  }
  else {
    func_0x000107c61434(pppuVar13);
    uVar10 = uStack_120;
    ppppuVar7 = (undefined8 ****)pppuVar13;
    func_0x000107c5fadc(uStack_120,pppuVar13);
    func_0x000107c6142c(pppuVar13);
  }
  puVar9 = PTR_PTR_1126b2380;
  func_0x000107c610f8(PTR_PTR_1126b2380);
  *(undefined8 *)(lVar18 + -0x10) = uVar10;
  func_0x000107c49498();
  func_0x000107c61170(ppppuVar14);
  func_0x000107c61170(ppppuVar17);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c5eec4(puVar16);
  func_0x000107c5eeac();
  (**(code **)(lStack_e0 + 8))(puVar16,lStack_d8);
  puVar19 = PTR_PTR_1126b23a8;
  func_0x000107c61168();
  lVar6 = lStack_f8;
  ppppuVar8 = (undefined8 ****)pppuStack_d0;
  func_0x000107c61174(pppuStack_d0);
  func_0x000107c61174(puVar9);
  func_0x000107c4ccf0();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(lVar6 + _DAT_112ebd9d0);
  uVar1 = ((undefined8 *)(lVar6 + _DAT_112ebd9d0))[1];
  puVar12 = PTR_PTR_1126b2390;
  func_0x000107c610f8(PTR_PTR_1126b2390);
  func_0x000107c5fadc(uVar10,ppppuVar7);
  func_0x000107c6142c(ppppuVar7);
  func_0x000107c5fadc(uVar11,uVar1);
  *(undefined8 *)(lVar18 + -0x10) = 0;
  *(undefined8 *)(lVar18 + -8) = 0;
  *(undefined8 *)(lVar18 + -0x20) = 0;
  *(undefined8 *)(lVar18 + -0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar18 + -0x30) = 0;
  *(undefined8 *)(lVar18 + -0x28) = 0xffffffffffffffff;
  *(undefined8 *)(lVar18 + -0x40) = 0;
  *(undefined8 *)(lVar18 + -0x38) = uVar11;
  *(undefined **)(lVar18 + -0x50) = puVar19;
  *(undefined8 *)(lVar18 + -0x48) = 3;
  ppuVar2 = ppuStack_100;
  func_0x000107c4861c(puVar12);
  func_0x000107c61170(pppuStack_f0);
  func_0x000107c6142c(pppuVar13);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(ppppuVar8);
  func_0x000107c61170(ppppuVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c6142c(pppuStack_c0);
  func_0x000107c6142c(pppuStack_c8);
  func_0x000107c6142c(pppuStack_e8);
  return puVar12;
}



/* Entry: 10276f644; end: 10276f65b;  */

void FUN_10276f644(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10276f65c; end: 10276f6ef;  */

void FUN_10276f65c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10276f6f0;
  plVar5[5] = lVar7;
  plVar5[6] = lVar6;
  *(undefined1 *)(plVar5 + 0xb) = uVar1;
  plVar5[3] = lVar2;
  plVar5[4] = lVar4;
  plVar5[2] = param_2;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[7] = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar5[8] = lVar4;
  lVar2 = lVar4;
  func_0x000107c5fce8();
  plVar5[9] = lVar2;
  func_0x000100eea164();
  plVar5[10] = lVar2;
  func_0x000107c5fca8(lVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d45c,lVar4,lVar2);
  return;
}



/* Entry: 10276f6f0; end: 10276f72b;  */

void FUN_10276f6f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010276f728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10276f72c; end: 10276f73b;  */

undefined1  [16] FUN_10276f72c(void)

{
  return ZEXT816(0x110545b50);
}



/* Entry: 10276f73c; end: 10276f75b;  */

void FUN_10276f73c(void)

{
  func_0x000107c61168(&PTR_PTR_112ebc930);
  return;
}



/* Entry: 10276f75c; end: 10276f7e7;  */

void FUN_10276f75c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10276ffbc;
  plVar6[0x10] = lVar3;
  plVar6[0x11] = lVar4;
  plVar6[0xf] = lVar5;
  lVar4 = 0;
  func_0x000107c5fcec(0,uVar1,uVar2);
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[0x12] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[0x13] = lVar4;
  plVar6[0x14] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d668,lVar4,lVar5);
  return;
}



/* Entry: 10276f7e8; end: 10276f827;  */

void FUN_10276f7e8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10276f828; end: 10276f8bf;  */

void FUN_10276f828(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  plVar5 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10276ffc0;
  *(undefined1 *)((long)plVar5 + 0x169) = uVar2;
  plVar5[0x1a] = lVar8;
  plVar5[0x1b] = lVar7;
  plVar5[0x18] = lVar6;
  plVar5[0x19] = lVar4;
  lVar6 = 0x112e008e0;
  func_0x0001000285a8(0x112e008e0,&UNK_10dad6870,uVar1);
  plVar5[0x1c] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x1d] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1e] = uVar3;
  lVar6 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  plVar5[0x1f] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x20] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x21] = uVar3;
  lVar6 = 0x112e008e8;
  func_0x0001000285a8(0x112e008e8,&UNK_10dad6880);
  plVar5[0x22] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x23] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x24] = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x25] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x26] = lVar4;
  plVar5[0x27] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276d914,lVar4,lVar6);
  return;
}



/* Entry: 10276f8c0; end: 10276f907;  */

undefined8 FUN_10276f8c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10276f908; end: 10276f973;  */

void FUN_10276f908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10276f974,uVar1,uVar2);
  return;
}



/* Entry: 10276f974; end: 10276fb5b;  */

void FUN_10276f974(double param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  double dVar7;
  double dVar8;
  
  iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c44950();
  if (iVar2 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x98);
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10276fb50);
      (*pcVar1)();
    }
    func_0x000107c4ab14();
    dVar7 = param_1;
    func_0x000107c61170(lVar3);
    dVar8 = dVar7;
    if (param_1 == 0.0) {
      lVar3 = *(long *)(unaff_x22 + 0x98);
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10276fb54);
        (*pcVar1)();
      }
      func_0x000107c4c0e4();
      dVar8 = dVar7;
      func_0x000107c61170(lVar3);
      if (dVar7 == 0.0) goto LAB_10276f9fc;
    }
    lVar3 = *(long *)(unaff_x22 + 0x98);
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10276fb58);
      (*pcVar1)();
    }
    lVar6 = *(long *)(unaff_x22 + 0x98);
    func_0x000107c4ab14();
    dVar7 = dVar8;
    func_0x000107c61170(lVar3);
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c4c0e4();
      func_0x000107c61170(lVar6);
      puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
      func_0x000107c610f8();
      func_0x000107c470f8(dVar8,dVar7);
      *(undefined **)(unaff_x22 + 0xb8) = puVar4;
      puVar4 = PTR__OBJC_CLASS___CLGeocoder_1126c1820;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0xc0) = puVar4;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10276fb5c;
      lVar3 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar3,1);
      uVar5 = 0x112ebc998;
      func_0x0001000285a8(0x112ebc998,&UNK_10dad6898);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10276ddb8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110545bb0;
      *(long *)(unaff_x22 + 0x70) = lVar3;
      func_0x000107c50868(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10276fb5c);
    (*pcVar1)();
  }
LAB_10276f9fc:
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010276fa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10276fb5c; end: 10276fbaf;  */

void FUN_10276fb5c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10276fbb0;
  }
  else {
    pcVar1 = FUN_10276fda0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xa8),*(undefined8 *)(lVar2 + 0xb0));
  return;
}



/* Entry: 10276fbb0; end: 10276fd9f;  */

void FUN_10276fbb0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  uVar6 = *(ulong *)(unaff_x22 + 0x90);
  if (uVar6 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar2 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c6142c(uVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
    lVar7 = 0;
    uVar6 = 0;
    goto LAB_10276fd68;
  }
  if ((uVar6 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10276fda0);
      (*pcVar1)();
    }
    lVar3 = *(long *)(uVar6 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    param_2 = uVar6;
    func_0x000101bc1ee0();
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c6142c(uVar6);
  lVar4 = lVar3;
  func_0x000107c4b848();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar7 = 0;
    uVar6 = 0;
    uVar2 = param_2;
  }
  else {
    lVar7 = lVar4;
    func_0x000107c5faec();
    uVar2 = param_2;
    func_0x000107c61170(lVar4);
    uVar6 = param_2;
  }
  lVar4 = lVar3;
  func_0x000107c3d9d8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    if (uVar6 == 0) {
      uVar2 = uVar6;
      lVar5 = 0;
      goto LAB_10276fd14;
    }
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    if (uVar6 == 0) {
LAB_10276fd14:
      lVar7 = lVar5;
      uVar6 = uVar2;
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar8);
      goto LAB_10276fd68;
    }
    if (uVar2 != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c61434(uVar6);
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      func_0x000107c5fb78(lVar5,uVar2);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar8);
      goto LAB_10276fd68;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar8);
LAB_10276fd68:
                    /* WARNING: Could not recover jumptable at 0x00010276fd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar7,uVar6);
  return;
}



/* Entry: 10276fda0; end: 10276fe07;  */

void FUN_10276fda0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010276fe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10276fe08; end: 10276fe47;  */

undefined8 FUN_10276fe08(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10276fe48; end: 10276fe57;  */

long FUN_10276fe48(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10276fe58; end: 10276fe6f;  */

void FUN_10276fe58(long param_1)

{
  func_0x00010276ff10(param_1 + 0x20);
  return;
}



/* Entry: 10276fe70; end: 10276fe8f;  */

void FUN_10276fe70(long param_1,long param_2)

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



/* Entry: 10276fe90; end: 10276feeb;  */

void FUN_10276fe90(void)

{
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c45114(0x4042000000000000,0x4042000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10276feec; end: 10276ff2f;  */

long * FUN_10276feec(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10276ff30; end: 10276ff6f;  */

void FUN_10276ff30(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10276ff70; end: 10276ffcf;  */

void FUN_10276ff70(long param_1,long param_2)

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



/* Entry: 10276ffd0; end: 1027700f3;  */

void FUN_10276ffd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  puVar1 = &UNK_110545e20;
  func_0x000107c613fc(&UNK_110545e20,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1027700f4,puVar1);
  return;
}



/* Entry: 1027700f4; end: 1027700ff;  */

void FUN_1027700f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = uVar1;
  FUN_102770b28();
  uVar4 = uVar3;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  FUN_102770714(uVar1,uVar2,uVar5);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_110545e38;
  *param_1 = uVar4;
  return;
}



/* Entry: 102770100; end: 102770153;  */

undefined8 FUN_102770100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102770714(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102770154; end: 10277020f;  */

void FUN_102770154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x68) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102770210,uVar3,uVar4);
  return;
}



/* Entry: 102770210; end: 1027702bf;  */

void FUN_102770210(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  FUN_102787314();
  *(long *)(unaff_x22 + 0x98) = lVar4;
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1027702c0;
                    /* WARNING: Could not recover jumptable at 0x0001027702bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x78),lVar4,uVar2,lVar3);
  return;
}



/* Entry: 1027702c0; end: 102770327;  */

void FUN_1027702c0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102770328;
  }
  else {
    pcVar2 = FUN_102770404;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
  return;
}


