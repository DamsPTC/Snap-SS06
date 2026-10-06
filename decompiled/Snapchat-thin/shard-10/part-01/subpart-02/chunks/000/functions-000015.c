/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079113b4; end: 107911403;  */

void FUN_1079113b4(long *param_1)

{
  if (param_1[1] != *param_1) {
    func_0x000107915890();
    func_0x000107917374();
    func_0x000107915254();
    FUN_1079063f8();
    func_0x0001079064a0();
    func_0x000107916ec4();
  }
  return;
}



/* Entry: 1079115c8; end: 10791168b;  */

void FUN_1079115c8(void)

{
  bool bVar1;
  undefined1 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long alStack_a0 [5];
  long lStack_78;
  long alStack_60 [4];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x00010791886c();
  while( true ) {
    if (unaff_x20 == unaff_x19[1]) {
      return;
    }
    func_0x00010791760c();
    func_0x000107911504();
    func_0x00010791148c(alStack_a0);
    if ((alStack_60[0] != alStack_a0[0]) || (bVar1 = lStack_38 == lStack_78, !bVar1)) break;
    func_0x00010791835c();
    if (bVar1) {
      unaff_x20 = *unaff_x19;
    }
    else {
      func_0x0001079182b0();
      if (!bVar1) goto LAB_107911644;
    }
    unaff_x20 = unaff_x20 + 0x30;
    *unaff_x19 = unaff_x20;
  }
  unaff_x20 = *unaff_x19;
LAB_107911644:
  uVar2 = unaff_x20 == unaff_x19[1];
  if ((bool)uVar2) {
    return;
  }
  func_0x000107911504(alStack_60);
  func_0x000107917978();
  if (!(bool)uVar2) {
    unaff_x19[6] = lStack_40;
  }
  unaff_x19[7] = lStack_38;
  unaff_x19[8] = lStack_30;
  if (lStack_38 == lStack_30) {
    return;
  }
  unaff_x19[9] = lStack_28;
  return;
}



/* Entry: 107911918; end: 107911b37;  */

void FUN_107911918(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined1 in_NG;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  
  func_0x000107917a38();
  plVar4 = param_1;
  func_0x00010791745c();
  plVar1 = param_2;
  if (!(bool)in_NG) {
    plVar1 = param_3;
    param_3 = param_2;
  }
  if ((*(byte *)(plVar4 + 5) & 1) == 0) {
    func_0x000107917b54(param_3[3]);
    iVar3 = (int)plVar4;
    if (iVar3 == 0) {
      return;
    }
    func_0x000107917b4c(plVar1[3]);
    if (iVar3 == 0) {
      return;
    }
  }
  lVar5 = param_1[3];
  FUN_1079063f8(lVar5,plVar1);
  iVar3 = *(int *)(lVar5 + 4);
  if (iVar3 < (int)param_3[5] || (int)param_3[6] < iVar3) {
    return;
  }
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 < *(int *)((long)param_3 + 0x2c) || *(int *)((long)param_3 + 0x34) < iVar2) {
    return;
  }
  puVar14 = (undefined8 *)*param_1;
  plVar4 = (long *)param_1[1];
  lVar13 = param_1[2];
  lVar10 = *plVar1;
  if (lVar10 == 2) {
    puVar12 = (undefined8 *)plVar1[1];
    func_0x000107911778(puVar12,lVar13);
  }
  else {
    if (lVar10 == 1) {
      lVar10 = plVar1[2];
      puVar12 = (undefined8 *)(*plVar4 + plVar1[1] * 0x30);
      if (lVar10 < 0) goto LAB_107911a08;
      lVar11 = puVar12[3];
    }
    else {
      if (lVar10 != 0) {
        return;
      }
      lVar10 = plVar1[2];
      puVar12 = puVar14;
      if (lVar10 < 0) goto LAB_107911a08;
      lVar11 = puVar14[3];
    }
    puVar12 = (undefined8 *)(lVar11 + lVar10 * 0x18);
  }
LAB_107911a08:
  lVar10 = *param_3;
  if (lVar10 == 2) {
    puVar14 = (undefined8 *)param_3[1];
    func_0x000107911778(puVar14,lVar13);
    uVar6 = *puVar12;
    uVar7 = puVar12[1];
    uVar8 = *puVar14;
    uVar9 = puVar14[1];
  }
  else if (lVar10 == 1) {
    puVar14 = (undefined8 *)(*plVar4 + param_3[1] * 0x30);
    if (-1 < param_3[2]) {
      func_0x000107915928();
      puVar14 = extraout_x8;
    }
    uVar6 = *puVar12;
    uVar7 = puVar12[1];
    uVar8 = *puVar14;
    uVar9 = puVar14[1];
  }
  else {
    if (lVar10 != 0) {
      return;
    }
    if (-1 < param_3[2]) {
      puVar14 = (undefined8 *)(puVar14[3] + param_3[2] * 0x18);
    }
    uVar6 = *puVar12;
    uVar7 = puVar12[1];
    uVar8 = *puVar14;
    uVar9 = puVar14[1];
  }
  FUN_1079122d0(iVar3,iVar2,uVar6,uVar7,uVar8,uVar9);
  if ((-1 < iVar3) &&
     ((*(long *)(lVar5 + 0x20) == -1 || ((double)param_3[4] < *(double *)(lVar5 + 0x38))))) {
    lVar13 = param_3[1];
    lVar10 = *param_3;
    *(long *)(lVar5 + 0x30) = param_3[2];
    *(long *)(lVar5 + 0x28) = lVar13;
    *(long *)(lVar5 + 0x20) = lVar10;
    *(long *)(lVar5 + 0x38) = param_3[4];
  }
  return;
}



/* Entry: 107911dbc; end: 107911fd3;  */

void FUN_107911dbc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [48];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  func_0x0001079136f4();
  func_0x000107906fdc();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000107913338();
  func_0x000107915ca8();
  puVar5 = auStack_70;
  func_0x000107913ab0(auStack_60);
  func_0x000107911b44();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_107911ea8;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_107911e18:
    func_0x0001079142a0();
    func_0x000107911fd4();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto LAB_107911e18;
    func_0x000107912038(auStack_b8);
    func_0x000107916d80();
    func_0x000107913668();
    func_0x000107912030();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      puVar4 = auStack_b8;
      func_0x000107912038();
      puStack_50 = puVar4;
      puStack_48 = puVar5;
      func_0x000107913a9c(&puStack_50);
      func_0x000107912030();
      func_0x000107913a88(&puStack_50);
      func_0x000107912030();
      goto LAB_107911ea8;
    }
  }
  func_0x000107914290();
  func_0x000107911fd4();
  func_0x0001079142b0();
  func_0x000107911fd4();
LAB_107911ea8:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      puVar4 = auStack_100;
      func_0x000107912038();
      puStack_50 = puVar4;
      puStack_48 = puVar5;
      func_0x000107914aa0(&puStack_50,&uStack_88,auStack_100);
      func_0x000107912030();
      func_0x000107913a4c(&puStack_50);
      func_0x000107912030();
    }
    else {
      func_0x0001079147a8(&uStack_88);
      func_0x0001079142e0();
      func_0x000107911fd4();
    }
  }
  func_0x000107914d34(uStack_80);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914200(), (bool)in_CY)) {
    func_0x000107913cc4(auStack_60,&uStack_88);
    func_0x000107912030();
  }
  else {
    func_0x0001079154ec(&uStack_88);
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar2)) {
    func_0x000107913a60(auStack_70);
    func_0x000107912030();
  }
  else {
    func_0x0001079142f0();
    func_0x000107911fd4();
  }
  func_0x000107917268();
  func_0x0001079171a8();
  func_0x000107916c40();
  func_0x0001079172a4();
  func_0x000107917348();
  func_0x000107916d78();
  return;
}



/* Entry: 1079122d0; end: 107912423;  */

void FUN_1079122d0(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  
  func_0x00010790b194(param_1,param_2,param_5,param_6);
  if (((int)param_1 == 0) && (param_3 != param_4)) {
    do {
      piVar2 = param_3 + 2;
      if (piVar2 == param_4) {
        return;
      }
      iVar1 = *piVar2;
      func_0x000107914d88(iVar1,param_3[3]);
      func_0x00010790b194();
      param_3 = piVar2;
    } while (iVar1 == 0);
  }
  return;
}



/* Entry: 107912988; end: 107912b13;  */

/* WARNING: Possible PIC construction at 0x000107912a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107912a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107912b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107912aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107912b30) */
/* WARNING: Removing unreachable block (ram,0x000107912a54) */
/* WARNING: Removing unreachable block (ram,0x000107912a28) */
/* WARNING: Removing unreachable block (ram,0x000107912aa8) */

void FUN_107912988(long param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 **in_stack_00000050;
  undefined8 **ppuStack_10;
  undefined *puStack_8;
  
  func_0x0001004d761c();
  pppuVar9 = &stack0x00000050;
  func_0x000107914c78();
  lVar8 = param_2[1];
  uVar7 = lVar8 - *param_2;
  if (*(long *)(param_1 + 0x48) == 0) {
    func_0x000107912dd0();
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000008;
    *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000000;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000018;
    *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000010;
    in_stack_00000008 = 0;
    in_stack_00000000 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    func_0x000107912c4c();
    lVar8 = unaff_x19[1];
  }
  *(int *)(unaff_x20 + 0x68) = (int)(uVar7 >> 3);
  *(undefined1 *)(unaff_x20 + 0x7c) = 1;
  while( true ) {
    if (lVar8 == *unaff_x19) {
      return;
    }
    iVar6 = *(int *)(lVar8 + -8);
    iVar2 = *(int *)(lVar8 + -4);
    lVar4 = *(long *)(lVar8 + -8);
    iVar3 = *(int *)(unaff_x20 + 0x68) + -1;
    *(int *)(unaff_x20 + 0x68) = iVar3;
    if (*(char *)(unaff_x20 + 0x7c) == '\x01') {
      *(int *)(unaff_x20 + 0x74) = iVar6;
      *(int *)(unaff_x20 + 0x78) = iVar2;
      lVar8 = *(long *)(unaff_x20 + 0x48);
      iVar6 = 9;
      puVar10 = (undefined *)0x107912a28;
      goto code_r0x000107912b50;
    }
    if (iVar3 == 0) break;
    if (lVar4 == *(long *)(unaff_x20 + 0x6c)) {
      unaff_x19 = (long *)0x10;
      ___cxa_allocate_exception();
      plVar5 = unaff_x19;
      func_0x000107912e6c();
      goto LAB_107912af4;
    }
    func_0x000107914690(iVar6 - (int)*(long *)(unaff_x20 + 0x6c));
    func_0x000107914690(iVar2 - *(int *)(unaff_x20 + 0x70));
    *(int *)(unaff_x20 + 0x6c) = iVar6;
    *(int *)(unaff_x20 + 0x70) = iVar2;
    lVar8 = lVar8 + -8;
  }
  if (lVar4 == *(long *)(unaff_x20 + 0x74)) {
    lVar8 = *(long *)(unaff_x20 + 0x48);
    iVar6 = 0xf;
    puVar10 = (undefined *)0x107912aa8;
    goto code_r0x000107912b50;
  }
  unaff_x19 = (long *)0x10;
  ___cxa_allocate_exception();
  plVar5 = unaff_x19;
  func_0x000107912e6c();
LAB_107912af4:
  iVar6 = 0x109ea100;
  func_0x000107917f84();
  func_0x00010791649c();
  func_0x000107915574();
  puStack_8 = &UNK_107912b14;
  pppuVar1 = &ppuStack_10;
  ppuStack_10 = pppuVar9;
  func_0x0001079176a8();
  iVar6 = iVar6 << 3;
  lVar8 = *plVar5;
  puVar10 = &UNK_107912b30;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  pppuVar9 = pppuVar1;
code_r0x000107912b50:
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)register0x00000008 + -0x10) = pppuVar9;
  *(undefined **)((long)register0x00000008 + -8) = puVar10;
  func_0x000107914d64(lVar8,iVar6);
  while( true ) {
    if (unaff_x20 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (unaff_x19,(int)(char)unaff_x20 | 0xffffff80);
    unaff_x20 = unaff_x20 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)
            (unaff_x19);
  return;
}



/* Entry: 107912c78; end: 107912d57;  */

void FUN_107912c78(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long unaff_x19;
  
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    return;
  }
  if (param_1[2] == -1) {
    return;
  }
  puVar6 = (undefined8 *)*param_1;
  lVar4 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar6[1];
    if (lVar4 == lVar2) goto LAB_107912d34;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (lVar2 == lVar4) {
LAB_107912d34:
    func_0x000107914c90(param_1);
    func_0x0001001548a8();
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    return;
  }
  lVar3 = -4;
  pbVar7 = (byte *)((long)puVar6 + lVar2 + -5);
  for (uVar5 = (ulong)(uint)((int)lVar4 - (int)lVar2); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *pbVar7 = (byte)uVar5 | 0x80;
    lVar3 = lVar3 + 1;
    pbVar7 = pbVar7 + 1;
  }
  *pbVar7 = (byte)uVar5;
  puVar1 = (undefined8 *)*param_1;
  puVar6 = puVar1;
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    puVar6 = (undefined8 *)*puVar1;
  }
  func_0x00010015bbdc(puVar1,(long)puVar6 + lVar3 + param_1[3]);
  param_1[3] = 0;
  return;
}



/* Entry: 107912ea4; end: 107912ec3;  */

void FUN_107912ea4(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010791664c();
  FUN_107912c78();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 107913214; end: 10791321b;  */

void FUN_107913214(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107913274(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107917140; end: 107917173;  */

undefined8 FUN_107917140(undefined8 param_1,long param_2,long param_3)

{
  long lStack0000000000000050;
  long lStack00000000000000a0;
  
  lStack0000000000000050 = param_2 + 0x20;
  lStack00000000000000a0 = param_3;
  func_0x000107907300(lStack0000000000000050,param_3 + 0x20);
  return 1;
}



/* Entry: 107918b78; end: 107918b7b;  */

void FUN_107918b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107918de0; end: 107918dfb;  */

void FUN_107918de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107919064; end: 1079190f7;  */

long FUN_107919064(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea368;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1079193d4; end: 1079193fb;  */

void FUN_1079193d4(void)

{
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079195a0; end: 1079195a7; -[SCNSnapMapsSdkCMAnimationOptions completionHandler] */

undefined8 FUN_1079195a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079199d8; end: 1079199df; -[SCNSnapMapsSdkCMCameraOptions bearing] */

undefined8 FUN_1079199d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107919cc8; end: 107919ccf; -[SCNSnapMapsSdkCMCameraViewport center] */

undefined8 FUN_107919cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107919df4; end: 107919ef3;  */

void FUN_107919df4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ea4d0;
  puVar4[3] = &PTR_DAT_1109ea548;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109ea520;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791a02c(&uStack_50);
  return;
}



/* Entry: 10791a058; end: 10791a063;  */

long FUN_10791a058(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea490;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791a55c; end: 10791a5eb; -[SCNSnapMapsSdkCameraManager moveToAnchorBearing:anchorY:bearing:animationOptions:] */

void FUN_10791a55c(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791af90();
  func_0x00010791af78(*(undefined8 *)(*plVar1 + 0x38));
  func_0x00010791afa4();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791aa0c; end: 10791aa5b; -[SCNSnapMapsSdkCameraManager cancelTransitions] */

void FUN_10791aa0c(void)

{
  long extraout_x8;
  
  func_0x00010791b058();
  (**(code **)(extraout_x8 + 0x78))();
  return;
}



/* Entry: 10791ad84; end: 10791adaf;  */

void FUN_10791ad84(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010791ae48();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791b198; end: 10791b243; -[SCNSnapMapsSdkCofPrefetchDescriptor initWithCofName:valueType:] */

undefined1 *
FUN_10791b198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8d88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10791b41c; end: 10791b427;  */

long FUN_10791b41c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea5c8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010791ba14();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791b700; end: 10791b767;  */

void FUN_10791b700(void)

{
  func_0x00010791b9e8();
  func_0x00010791ba34();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791bab8();
  func_0x00010bfcae00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba14();
  func_0x00010791ba70();
  func_0x00010791ba44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10791b9d0; end: 10791bac3;  */

void FUN_10791b9d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 10791bda4; end: 10791bdb3;  */

void FUN_10791bda4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ea7d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791bfc0; end: 10791bfff;  */

void FUN_10791bfc0(void)

{
  func_0x00010791c208();
  return;
}



/* Entry: 10791c3cc; end: 10791c3cf;  */

void FUN_10791c3cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eaa20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791c5cc; end: 10791c5f7;  */

long FUN_10791c5cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791c834; end: 10791c96b;  */

void FUN_10791c834(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  int iStack_50;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = param_3;
  func_0x00010793f944(param_3);
  func_0x000100291d50(&uStack_58,uVar2);
  func_0x00010b4d1758(param_3,uStack_58,iStack_50 - (int)uStack_58);
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5640;
  _objc_alloc(PTR_PTR_1126d5640);
  func_0x00010c008360();
  func_0x00010791ca3c();
  func_0x000100100fec(&uStack_58);
  func_0x00010bfc9860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x0001000fbca4(param_1,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10791cb70; end: 10791cb77; -[SCNSnapMapsSdkEdgeInsetsDouble top] */

undefined8 FUN_10791cb70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10791cd60; end: 10791cd6b;  */

void FUN_10791cd60(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010791cfe4(param_1 + 0x20);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x0001005f2030();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x0001005f2294();
  func_0x00010791cfec();
  return;
}



/* Entry: 10791d01c; end: 10791d05b;  */

void FUN_10791d01c(undefined8 *param_1)

{
  _objc_alloc(PTR_PTR_1126d5648);
  func_0x00010c063120(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                      param_1[7]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791d124; end: 10791d12b; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters pitch] */

undefined8 FUN_10791d124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10791d768; end: 10791d7b7;  */

void FUN_10791d768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791d9e0; end: 10791d9e7; -[SCNSnapMapsSdkFeatureDescriptor lon] */

undefined4 FUN_10791d9e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10791dd6c; end: 10791dd73; -[SCNSnapMapsSdkFontDescriptor weight] */

undefined8 FUN_10791dd6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10791df88; end: 10791df9b;  */

void FUN_10791df88(void)

{
  func_0x00010791e5fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791e424; end: 10791e4df;  */

void FUN_10791e424(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x58) * 0x58;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
    func_0x00010791e55c(lVar2,lVar3);
    lVar2 = lVar2 + 0x58;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x58) {
    func_0x0001072af620(lVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10791e6b8; end: 10791e727; -[SCNSnapMapsSdkGestureInfo initWithType:tappedX:tappedY:lat:lon:] */

void FUN_10791e6b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f8db0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 0x14) = param_4;
  }
  return;
}



/* Entry: 10791e8f8; end: 10791e8fb;  */

void FUN_10791e8f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eaf40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791ebc4; end: 10791ebdf;  */

void FUN_10791ebc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791ee48; end: 10791ee4b;  */

void FUN_10791ee48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb068;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791eff0; end: 10791effb;  */

long FUN_10791eff0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb028;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791f2a0; end: 10791f32f;  */

long FUN_10791f2a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb140;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010791f428();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791f5ec; end: 10791f683; -[SCNSnapMapsSdkInputManager addLongPressListener:groups:] */

void FUN_10791f5ec(void)

{
  long unaff_x21;
  long *plVar1;
  
  FUN_10791f8b4();
  func_0x00010791f974();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010791f928();
  func_0x00010791f91c();
  func_0x00010791f8c8(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010791f8f8();
  func_0x00010791f934();
  func_0x00010791f93c();
  func_0x00010791f944();
  return;
}



/* Entry: 10791f8b4; end: 10791f983;  */

void FUN_10791f8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10791fd40; end: 10791fd83; -[SCNSnapMapsSdkInspector .cxx_construct] */

undefined8 * FUN_10791fd40(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010791fe68();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792009c; end: 1079200a7;  */

void FUN_10792009c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107920280(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x0001005f2030();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x0001005f2294();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 107920294; end: 10792035b;  */

undefined8 FUN_107920294(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010c264480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107920504();
  func_0x00010c0d6e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107920504();
  _objc_release(param_2);
  func_0x0001079203fc();
  func_0x0001079203f4();
  return param_1;
}



/* Entry: 107920568; end: 107920597;  */

void FUN_107920568(undefined8 *param_1)

{
  _objc_alloc(PTR_PTR_1126c5ba8);
  func_0x00010c0219a0(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079207b8; end: 1079207bb; +[SCNSnapMapsSdkMapSdk clearDefaultInstance] */

void FUN_1079207b8(void)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = uRam0000000113822070;
  uStack_20 = uRam0000000113822068;
  uRam0000000113822068 = 0;
  uRam0000000113822070 = 0;
  func_0x00010725afa0(&uStack_20);
  return;
}



/* Entry: 107920d30; end: 107920e2f;  */

void FUN_107920d30(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x000107921f84();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  puStack_70 = &UNK_1079218d4;
  puStack_68 = &UNK_1079218e0;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  func_0x00010bf529e0();
  func_0x000107921a08(&uStack_58,unaff_x19);
  func_0x00010bf97ce0();
  func_0x000107921c8c();
  func_0x000107922128();
  func_0x0001072aa7e4(&uStack_58);
  func_0x000107921fa0();
  return;
}



/* Entry: 107921350; end: 107921473; -[SCNSnapMapsSdkMapSdk updateThemeColors:colors:] */

void FUN_107921350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_4);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60(param_4);
  ppuStack_70 = &PTR_FUN_1109ed640;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  func_0x00010006369c(&ppuStack_70,uVar1,param_4);
  func_0x00010792203c();
  (**(code **)(*plVar2 + 0x40))(plVar2,param_3,&ppuStack_70);
  func_0x000107933978(&ppuStack_70);
  func_0x000107921fa0();
  return;
}



/* Entry: 10792182c; end: 10792186b; -[SCNSnapMapsSdkMapSdk .cxx_construct] */

undefined8 * FUN_10792182c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107922004();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107921c14; end: 107921c8b;  */

void FUN_107921c14(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uVar2 = *param_4;
  puVar1[3] = param_4[1];
  puVar1[2] = uVar2;
  puVar1[4] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar2 = *param_5;
  puVar1[6] = param_5[1];
  puVar1[5] = uVar2;
  *param_5 = 0;
  param_5[1] = 0;
  return;
}



/* Entry: 107922200; end: 107922277; +[SCNSnapMapsSdkMapSdkInitializationParamsBuilder create] */

void FUN_107922200(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072b0674(&uStack_30);
  func_0x0001079229c0(uStack_30,uStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107922b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107922638; end: 1079226cb; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder bitmojiFetcher:] */

void FUN_107922638(void)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107922b38();
  func_0x000107922b8c();
  if (unaff_x19 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x000107922bd0();
    func_0x00010792c428();
  }
  func_0x000107922b84();
  func_0x000107922b58(*(undefined8 *)(*unaff_x20 + 0x40));
  func_0x0001072adb8c(&uStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922a38; end: 107922a8b; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder .cxx_destruct] */

void FUN_107922a38(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb3b8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072b0cc8((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 107922de4; end: 107922def;  */

long FUN_107922de4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb420;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107923038();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1079230b8; end: 107923133; +[SCNSnapMapsSdkMapSdkSession fromLong:] */

void FUN_1079230b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [16];
  
  func_0x0001072b3244(auStack_30,param_3);
  func_0x0001079260b4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x00010725af7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079235ec; end: 107923667; -[SCNSnapMapsSdkMapSdkSession getCameraManager] */

void FUN_1079235ec(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079266cc();
  func_0x00010792675c();
  FUN_10791ad84(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x0001072cd28c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107923abc; end: 107923b7b; -[SCNSnapMapsSdkMapSdkSession addFeature:feature:] */

void FUN_107923abc(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079266b0(auStack_48);
  func_0x000107926830();
  func_0x00010791d13c();
  func_0x000107926614(*(undefined8 *)(*plVar1 + 0x80));
  func_0x000107932ce0(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 1079241b0; end: 107924293; -[SCNSnapMapsSdkMapSdkSession clearCachedTiles:] */

void FUN_1079241b0(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079268d0();
  func_0x00010bf25f00();
  func_0x0001079267a8();
  func_0x000107926794();
  func_0x000107926638();
  func_0x000107926904(*(undefined8 *)(*plVar1 + 0xb8));
  func_0x0001079268e8();
  func_0x000107926620();
  return;
}



/* Entry: 1079245d8; end: 1079246a3; -[SCNSnapMapsSdkMapSdkSession toScreenLocation:] */

void FUN_1079245d8(void)

{
  undefined1 *puVar1;
  code *extraout_x9;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [32];
  
  func_0x000107926564();
  func_0x0001079246a4(auStack_78);
  func_0x000107926788(auStack_50);
  (*extraout_x9)();
  func_0x000107931394(auStack_78);
  puVar1 = auStack_50;
  func_0x000107924724(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079311cc(auStack_50);
  func_0x000107926620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107924db4; end: 107924ee7; -[SCNSnapMapsSdkMapSdkSession emitTriggerWithParams:triggerParams:] */

void FUN_107924db4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  long unaff_x21;
  long *plVar2;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar2 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079266b0(auStack_58);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x20;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60(unaff_x20);
  ppuStack_a0 = &PTR_DAT_1109ee130;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_78 = &DAT_11383d918;
  puStack_70 = &DAT_11383d918;
  puStack_68 = &DAT_11383d918;
  uStack_60 = 0;
  func_0x00010006369c(&ppuStack_a0,uVar1,unaff_x20);
  func_0x0001079266a0();
  (**(code **)(*plVar2 + 0x120))(plVar2,auStack_58,&ppuStack_a0);
  func_0x00010792695c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107925350; end: 10792539b; -[SCNSnapMapsSdkMapSdkSession setFootstepsEnabled:] */

void FUN_107925350(void)

{
  long extraout_x8;
  
  func_0x000107926690();
  (**(code **)(extraout_x8 + 0x158))();
  return;
}



/* Entry: 1079259e8; end: 107925a33; -[SCNSnapMapsSdkMapSdkSession onUserInteraction] */

void FUN_1079259e8(void)

{
  long extraout_x8;
  
  func_0x0001079266cc();
  (**(code **)(extraout_x8 + 0x198))();
  return;
}



/* Entry: 1079260e0; end: 107926133; -[SCNSnapMapsSdkMapSdkSession .cxx_destruct] */

void FUN_1079260e0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb500;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010725af7c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1079263b0; end: 1079264af;  */

void FUN_1079263b0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar3) / -0x28) * 0x28;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    func_0x0001079264fc(lStack_48,lVar2);
    lStack_48 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    func_0x000107931394(lVar3);
  }
  func_0x0001072bba98(&plStack_70);
  param_2[1] = lVar4;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107926b34; end: 107926b47;  */

void FUN_107926b34(void)

{
  func_0x000107926d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107926dbc; end: 107926dcf;  */

void FUN_107926dbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079270a0; end: 10792710f;  */

void FUN_1079270a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d56c0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107927110();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107300f3c(&uStack_30);
  return;
}



/* Entry: 10792743c; end: 10792753b;  */

void FUN_10792743c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb6f0;
  puVar4[3] = &PTR_DAT_1109eb768;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eb740;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x000107927674(&uStack_50);
  return;
}



/* Entry: 1079276a0; end: 1079276ab;  */

long FUN_1079276a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb6b0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 107927998; end: 1079279eb; -[SCNSnapMapsSdkPlaceManager .cxx_destruct] */

void FUN_107927998(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb780;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000107926338((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 107927c60; end: 107927c67; -[SCNSnapMapsSdkPoint2dDouble y] */

undefined8 FUN_107927c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107928218; end: 107928287;  */

void FUN_107928218(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d56d0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107928494();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001072716b0(&uStack_30);
  return;
}



/* Entry: 1079285a0; end: 10792869f;  */

void FUN_1079285a0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb838;
  puVar4[3] = &PTR_DAT_1109eb8b0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eb888;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10792883c(&uStack_50);
  return;
}



/* Entry: 10792883c; end: 107928867;  */

long FUN_10792883c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1079289bc; end: 1079289c3; -[SCNSnapMapsSdkRect right] */

undefined8 FUN_1079289bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107928d10; end: 107928d47;  */

void FUN_107928d10(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 107928f4c; end: 107928f53; -[SCNSnapMapsSdkStyleMetadata styleName] */

undefined8 FUN_107928f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107929168; end: 1079291a7;  */

void FUN_107929168(void)

{
  func_0x0001079292b8();
  return;
}



/* Entry: 107929398; end: 1079294a7; -[SCNSnapMapsSdkStyleRevision initWithGitRepo:gitCommit:buildId:] */

undefined1 *
FUN_107929398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8e40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x0001079294fc(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x0001079294fc(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001079294fc(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107929594; end: 10792959b; -[SCNSnapMapsSdkTileId x] */

undefined4 FUN_107929594(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1079296ec; end: 1079297b3;  */

undefined8 FUN_1079296ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010c0f07a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107927ba8();
  func_0x00010c0f07c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107927ba8();
  _objc_release(param_2);
  func_0x0001079297bc();
  func_0x0001079297b4();
  return param_1;
}



/* Entry: 107929a48; end: 107929af7; -[SCNSnapMapsSdkUserMetadataManager registerHighlightedFriendsUpdateCallback:] */

void FUN_107929a48(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107929cb8();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791e750(auStack_40);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_40);
  func_0x0001072e88f4(auStack_40);
  func_0x000107929cd8();
  return;
}



/* Entry: 107929db0; end: 107929ea7;  */

void FUN_107929db0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ebaa8;
  puVar4[3] = &PTR_DAT_1109ebb20;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010792a0d0();
  puVar4[3] = &PTR_DAT_1109ebaf8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10792a0a4(&uStack_50);
  return;
}



/* Entry: 10792a0a4; end: 10792a0cf;  */

long FUN_10792a0a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792a3ac; end: 10792a41f;  */

void FUN_10792a3ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5718;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010792a420();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107926310(&uStack_30);
  return;
}



/* Entry: 10792a664; end: 10792a6d7;  */

void FUN_10792a664(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010791f330(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2a80(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10792a8dc; end: 10792a937; -[SCNMapSdkResourceRequesterCacheDeleteCallback .cxx_destruct] */

void FUN_10792a8dc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebc70;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072d6628((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792abe8; end: 10792abef; -[SCNMapSdkResourceRequesterError message] */

undefined8 FUN_10792abe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10792b37c; end: 10792b383; -[SCNMapSdkResourceRequesterResource usage] */

undefined8 FUN_10792b37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10792b3bc; end: 10792b3c3; -[SCNMapSdkResourceRequesterResource priorData] */

undefined8 FUN_10792b3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10792b468; end: 10792b477;  */

void FUN_10792b468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10792b89c; end: 10792b8e7; -[SCNMapSdkResourceRequesterResourceRequester .cxx_construct] */

undefined8 * FUN_10792b89c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792bbec; end: 10792bdeb;  */

void FUN_10792bbec(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 in_x7;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [64];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c247520();
  uVar2 = param_2;
  func_0x00010bfaadc0();
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792bdec(auStack_a0);
  uVar4 = param_2;
  func_0x00010c0da5e0();
  uVar5 = param_2;
  func_0x00010c0db920();
  uVar6 = param_2;
  func_0x00010c0d3c40();
  uVar7 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000100685674();
  uVar9 = param_2;
  uVar13 = param_3;
  func_0x00010c0d0360();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010792aa80();
  uVar11 = param_2;
  uVar14 = uVar13;
  func_0x00010bf9cb00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010792aa80();
  func_0x00010bf998c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_c0);
  func_0x00010792be8c(param_1,uVar1,uVar2,auStack_a0,uVar4 & 0xffffffff,uVar5 & 0xffffffff,
                      uVar6 & 0xffffffff,in_x7,uVar8,param_3,uVar10,uVar13 & 0xff,uVar12,
                      uVar14 & 0xff,auStack_c0);
  func_0x0001001148fc(auStack_c0);
  _objc_release(param_2);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  func_0x00010792bba4(auStack_a0);
  _objc_release(uVar3);
  func_0x00010792bfa4();
  return;
}


