/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046a4498; end: 1046a44b7;  */

void FUN_1046a4498(void)

{
  _objc_opt_self(&PTR_PTR_1129d2438);
  return;
}



/* Entry: 1046a44b8; end: 1046a44bb;  */

void FUN_1046a44b8(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 auStack_250 [496];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  FUN_10467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_250 +
           (((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
             (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12) -
           (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_104677940(param_1,puVar2);
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001046a65f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dd2674a + ((ulong)puVar2 & 0xffffffff) * 2) * 4 + 0x1046a65fc
            ))();
  return;
}



/* Entry: 1046a44bc; end: 1046a498f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a44bc(void)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar7 - extraout_x12;
  __ss6HasherVABycfC(auStack_98);
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_11308cdc8);
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308cdd0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1046a168c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308cdd8))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cdd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  lVar4 = *(long *)(unaff_x20 + _DAT_11308cde0);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11308cde8);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + _DAT_11308cdf0);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11308cdf8);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308ce00))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308ce00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  if (((undefined8 *)(unaff_x20 + _DAT_11308ce08))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308ce08);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  if ((char)((ulong *)(unaff_x20 + _DAT_11308ce10))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar10 = *(ulong *)(unaff_x20 + _DAT_11308ce10);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar10 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar10;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  func_0x0001046a7634(unaff_x20 + _DAT_11308ce18,lVar9,0x112d36580,&UNK_10d9016d0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar9;
  (*pcVar12)(lVar9,1,lVar5);
  if ((int)lVar4 == 1) {
    func_0x0001046a75f4(lVar9,0x112d36580,&UNK_10d9016d0);
    lVar9 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar11 + 8))(lVar9,lVar5);
    lVar9 = lVar4;
    func_0x00010bfde980(lVar4);
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  lVar9 = *(long *)(unaff_x20 + _DAT_11308ce20);
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar9);
  }
  func_0x0001046a7634(unaff_x20 + _DAT_11308ce28,puVar7,0x112d36580,&UNK_10d9016d0);
  puVar6 = puVar7;
  (*pcVar12)(puVar7,1,lVar5);
  if ((int)puVar6 == 1) {
    func_0x0001046a75f4(puVar7,0x112d36580,&UNK_10d9016d0);
    puVar7 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar11 + 8))(puVar7,lVar5);
    puVar7 = puVar6;
    func_0x00010bfde980(puVar6);
    _objc_release(puVar6);
  }
  __ss6HasherV8_combineyySuF(puVar7);
  lVar9 = *(long *)(unaff_x20 + _DAT_11308ce30);
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar9);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308ce38))[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308ce38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar8 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar8);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308ce40) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11308ce40);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar8);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046a4990; end: 1046a5a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a4990(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  long lVar9;
  code *******pppppppcVar10;
  long lVar11;
  code *******pppppppcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  long lVar15;
  ulong uVar16;
  double *pdVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  byte bVar18;
  uint uVar19;
  code *******pppppppcVar20;
  long lVar21;
  code *******unaff_x20;
  undefined8 uVar22;
  undefined8 uVar23;
  code *******pppppppcVar24;
  code *******pppppppcVar25;
  code *******pppppppcVar26;
  code ******ppppppcVar27;
  code *******pppppppcVar28;
  code *******pppppppcVar29;
  code *******pppppppcVar30;
  double unaff_d8;
  double unaff_d9;
  code *****pppppcStack_c0;
  code ******ppppppcStack_b8;
  code ******ppppppcStack_b0;
  code ******ppppppcStack_a8;
  code ******ppppppcStack_98;
  code ******ppppppcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code ******ppppppcStack_78;
  
  pppppppcVar20 = unaff_x20;
  _swift_getObjectType();
  pppppppcVar7 = (code *******)0x0;
  __s10Foundation3URLVMa();
  ppppppcStack_b0 = pppppppcVar7[-1];
  ppppppcStack_a8 = (code ******)pppppppcVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppppcStack_b0[8]);
  pppppppcVar24 = (code *******)((long)&pppppcStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar11 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  pppppppcVar25 = (code *******)((long)pppppppcVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0))
  ;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppcVar7 = (code *******)((long)pppppppcVar25 - extraout_x12);
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  pppppppcVar26 = (code *******)((long)pppppppcVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppcVar29 = (code *******)((long)pppppppcVar26 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppcVar28 = (code *******)((long)pppppppcVar29 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppcVar30 = (code *******)((long)pppppppcVar28 - extraout_x12_02);
  func_0x0001046a7634(param_1,&ppppppcStack_90,0x112d387f8,&UNK_10d902650);
  if (ppppppcStack_78 == (code ******)0x0) {
LAB_1046a4b80:
code_r0x0001046a4b90:
    ppppppcStack_98 = (code ******)&ppppppcStack_90;
    goto code_r0x0001046a4b94;
  }
  pppppppcVar13 = &ppppppcStack_98;
  pppppppcVar10 = &ppppppcStack_90;
  pppppppcVar12 = pppppppcVar20;
  _swift_dynamicCast(pppppppcVar13,pppppppcVar10,PTR___sypN_11034f1a8 + 8,pppppppcVar20,6);
  if (((ulong)pppppppcVar13 & 1) == 0) goto LAB_1046a52ac;
  bVar18 = *(byte *)((long)unaff_x20 + _DAT_11308cdc8);
  pppppppcVar13 = (code *******)(ulong)bVar18;
  bVar5 = bVar18 == *(byte *)((long)ppppppcStack_98 + _DAT_11308cdc8);
  pppppppcVar8 = (code *******)ppppppcStack_98;
  if (!bVar5) goto LAB_1046a52a8;
  pdVar17 = (double *)&UNK_10dd26740;
  pppppppcVar14 = (code *******)ppppppcStack_98;
  lVar9 = _DAT_11308ce08;
  switch(bVar18) {
  case 0:
    pppppppcVar13 = _DAT_11308cdd0;
    if (*(long *)((long)unaff_x20 + (long)_DAT_11308cdd0) != 0) goto code_r0x0001046a4c2c;
    pppppppcVar20 = *(code ********)((long)ppppppcStack_98 + (long)_DAT_11308cdd0);
    pppppppcVar7 = (code *******)ppppppcStack_98;
    goto code_r0x0001046a51bc;
  case 1:
    lVar11 = ((undefined8 *)((long)unaff_x20 + _DAT_11308cdd8))[1];
    lVar9 = ((undefined8 *)((long)ppppppcStack_98 + _DAT_11308cdd8))[1];
    if (lVar11 == 0) {
      if (lVar9 == 0) goto code_r0x0001046a5004;
    }
    else if (lVar9 != 0) {
      pppppppcVar14 = *(code ********)((long)unaff_x20 + _DAT_11308cdd8);
      pppppppcVar20 = (code *******)ppppppcStack_98;
      if (pppppppcVar14 == *(code ********)((long)ppppppcStack_98 + _DAT_11308cdd8)) {
        bVar5 = lVar11 == lVar9;
        pppppppcVar13 = pppppppcVar14;
        goto code_r0x0001046a4c78;
      }
      goto code_r0x0001046a4c88;
    }
    break;
  default:
    goto code_r0x0001046a4b74;
  case 4:
    pppppppcVar13 = (code *******)((long)unaff_x20 + _DAT_11308ce00);
    pppppppcVar10 = (code *******)pppppppcVar13[1];
    pdVar17 = (double *)((long)ppppppcStack_98 + _DAT_11308ce00);
    pppppppcVar12 = (code *******)pdVar17[1];
  case 0x78:
  case 0x80:
  case 0xb0:
    if (pppppppcVar10 == (code *******)0x0) {
code_r0x0001046a4f70:
      if (pppppppcVar12 == (code *******)0x0) goto code_r0x0001046a4f7c;
      break;
    }
    if (pppppppcVar12 == (code *******)0x0) break;
    pppppppcVar14 = (code *******)*pppppppcVar13;
    if ((pppppppcVar14 != (code *******)*pdVar17) || (pppppppcVar10 != pppppppcVar12)) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      pppppppcVar20 = (code *******)ppppppcStack_98;
code_r0x0001046a4be4:
      pppppppcVar8 = pppppppcVar20;
      pppppppcVar13 = pppppppcVar14;
code_r0x0001046a4bec:
      lVar9 = _DAT_11308ce08;
      if (((ulong)pppppppcVar13 & 1) == 0) break;
    }
code_r0x0001046a4f7c:
    lVar11 = ((long *)((long)unaff_x20 + lVar9))[1];
    lVar21 = ((long *)((long)pppppppcVar8 + lVar9))[1];
    if (lVar11 != 0) {
      uVar19 = 0;
      if (lVar21 != 0) {
        lVar15 = *(long *)((long)unaff_x20 + lVar9);
        lVar9 = *(long *)((long)pppppppcVar8 + lVar9);
        if ((lVar15 == lVar9) && (lVar11 == lVar21)) {
code_r0x0001046a4b74:
          _objc_release();
code_r0x0001046a4b78:
          pppppppcVar20 = (code *******)0x1;
code_r0x0001046a4b7c:
          uVar19 = (uint)pppppppcVar20;
          goto code_r0x0001046a52b0;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar15,lVar11,lVar9,lVar21,0);
        uVar19 = (uint)lVar15;
      }
      _objc_release(pppppppcVar8);
      goto code_r0x0001046a52b0;
    }
    _swift_bridgeObjectRetain(lVar21);
    _objc_release(pppppppcVar8);
    if (lVar21 == 0) {
code_r0x0001046a51dc:
      uVar19 = 1;
      goto code_r0x0001046a52b0;
    }
    _swift_bridgeObjectRelease(lVar21);
    goto LAB_1046a52ac;
  case 5:
  case 0x29:
    pdVar17 = (double *)((long)unaff_x20 + (long)_DAT_11308ce10);
    pppppppcVar13 = _DAT_11308ce10;
  case 0x77:
  case 0x8f:
    unaff_d8 = *pdVar17;
    cVar3 = *(char *)(pdVar17 + 1);
    unaff_d9 = *(double *)((long)ppppppcStack_98 + (long)pppppppcVar13);
    bVar18 = *(byte *)((double *)((long)ppppppcStack_98 + (long)pppppppcVar13) + 1);
    pppppppcVar20 = (code *******)(ulong)bVar18;
    _objc_release();
    if (cVar3 == '\x01') {
code_r0x0001046a4d90:
      bVar5 = bVar18 == 1;
code_r0x0001046a4d94:
      uVar19 = (uint)bVar5;
    }
    else {
code_r0x0001046a4ef8:
      uVar19 = (uint)(unaff_d8 == unaff_d9 && (int)pppppppcVar20 != 1);
    }
    goto code_r0x0001046a52b0;
  case 6:
    pppppppcVar20 = (code *******)0x112d36580;
    pppppppcVar25 = (code *******)&UNK_10d901000;
    pppppppcVar29 = _DAT_11308ce18;
  case 0x1a:
    pppppppcVar25 = pppppppcVar25 + 0xda;
    ppppppcStack_b8 = ppppppcStack_98;
    ppppppcStack_98 = (code ******)((long)ppppppcStack_98 + (long)pppppppcVar29);
code_r0x0001046a4dbc:
    func_0x0001046a7634(ppppppcStack_98,pppppppcVar30,pppppppcVar20,pppppppcVar25);
    pppppppcVar26 = (code *******)(long)*(int *)(lVar11 + 0x30);
code_r0x0001046a4dd0:
    func_0x0001046a7634((long)unaff_x20 + (long)pppppppcVar29,pppppppcVar7,pppppppcVar20,
                        pppppppcVar25);
    func_0x0001046a7634(pppppppcVar30,(long)pppppppcVar7 + (long)pppppppcVar26,pppppppcVar20,
                        pppppppcVar25);
    pppppppcVar25 = (code *******)ppppppcStack_a8;
    pppppppcVar29 = (code *******)ppppppcStack_b0;
    pppppppcVar20 = (code *******)ppppppcStack_b0[6];
    pppppppcVar8 = pppppppcVar7;
    (*(code *)pppppppcVar20)(pppppppcVar7,1,ppppppcStack_a8);
code_r0x0001046a4e10:
    if ((int)pppppppcVar8 != 1) {
      func_0x0001046a7634(pppppppcVar7,pppppppcVar28,0x112d36580,&UNK_10d9016d0);
      ppppppcStack_98 = (code ******)((long)pppppppcVar7 + (long)pppppppcVar26);
code_r0x0001046a4f28:
code_r0x0001046a4f30:
      iVar6 = (int)ppppppcStack_98;
      (*(code *)pppppppcVar20)();
      if (iVar6 == 1) {
code_r0x0001046a4f3c:
        _objc_release(ppppppcStack_b8);
code_r0x0001046a4f4c:
        func_0x0001046a75f4(pppppppcVar30);
        pppppppcVar13 = (code *******)pppppppcVar29[1];
        ppppppcStack_98 = (code ******)pppppppcVar28;
code_r0x0001046a4f68:
        (*(code *)pppppppcVar13)(ppppppcStack_98);
code_r0x0001046a4f6c:
        ppppppcStack_98 = (code ******)pppppppcVar7;
        goto code_r0x0001046a4b94;
      }
      pppppppcVar20 = pppppppcVar24;
      (*(code *)pppppppcVar29[4])
                (pppppppcVar24,(long)pppppppcVar7 + (long)pppppppcVar26,pppppppcVar25);
      func_0x000101553b98();
      pppppppcVar12 = pppppppcVar28;
      __sSQ2eeoiySbx_xtFZTj(pppppppcVar28,pppppppcVar24,pppppppcVar25,pppppppcVar20);
      ppppppcVar27 = pppppppcVar29[1];
      (*(code *)ppppppcVar27)(pppppppcVar24,pppppppcVar25);
      func_0x0001046a75f4(pppppppcVar30,0x112d36580,&UNK_10d9016d0);
      (*(code *)ppppppcVar27)(pppppppcVar28,pppppppcVar25);
      func_0x0001046a75f4(pppppppcVar7,0x112d36580,&UNK_10d9016d0);
      lVar11 = _DAT_11308ce20;
      pppppppcVar8 = (code *******)ppppppcStack_b8;
joined_r0x0001046a50d4:
      ppppppcStack_b8 = (code ******)pppppppcVar8;
      if (((ulong)pppppppcVar12 & 1) != 0) goto code_r0x0001046a5190;
      break;
    }
code_r0x0001046a4e28:
    func_0x0001046a75f4(pppppppcVar30);
code_r0x0001046a4e30:
    lVar11 = (long)pppppppcVar7 + (long)pppppppcVar26;
    (*(code *)pppppppcVar20)(lVar11,1,pppppppcVar25);
    if ((int)lVar11 != 1) {
      _objc_release(ppppppcStack_b8);
      ppppppcStack_98 = (code ******)pppppppcVar7;
code_r0x0001046a4b94:
      func_0x0001046a75f4(ppppppcStack_98);
code_r0x0001046a4b98:
      goto LAB_1046a52ac;
    }
    func_0x0001046a75f4(pppppppcVar7,0x112d36580,&UNK_10d9016d0);
    lVar11 = _DAT_11308ce20;
code_r0x0001046a5190:
    ppppppcVar27 = ppppppcStack_b8;
    lVar9 = *(long *)((long)unaff_x20 + lVar11);
    if (lVar9 != 0) {
      func_0x00010c071ae0();
      uVar19 = (uint)lVar9;
      _objc_release(ppppppcVar27);
      goto code_r0x0001046a52b0;
    }
    pppppppcVar20 = *(code ********)((long)ppppppcStack_b8 + lVar11);
    pppppppcVar7 = (code *******)ppppppcStack_b8;
code_r0x0001046a51bc:
    pppppppcVar8 = pppppppcVar20;
    _objc_retain(pppppppcVar20);
    _objc_release(pppppppcVar7);
    if (pppppppcVar20 != (code *******)0x0) break;
    goto code_r0x0001046a51dc;
  case 7:
    pppppppcVar30 = _DAT_11308ce28;
  case 0xc:
    pppppppcVar20 = (code *******)0x112d36580;
    pppppppcVar7 = (code *******)&UNK_10d901000;
code_r0x0001046a4cb0:
    pppppppcVar7 = pppppppcVar7 + 0xda;
    ppppppcStack_b8 = ppppppcStack_98;
    ppppppcStack_98 = (code ******)((long)ppppppcStack_98 + (long)pppppppcVar30);
code_r0x0001046a4cc0:
code_r0x0001046a4cc4:
    func_0x0001046a7634(ppppppcStack_98);
    pppppppcVar28 = (code *******)(long)*(int *)(lVar11 + 0x30);
code_r0x0001046a4cd0:
    func_0x0001046a7634((long)unaff_x20 + (long)pppppppcVar30,pppppppcVar25,pppppppcVar20,
                        pppppppcVar7);
    func_0x0001046a7634(pppppppcVar29,(long)pppppppcVar25 + (long)pppppppcVar28,pppppppcVar20,
                        pppppppcVar7);
    pppppppcVar7 = (code *******)ppppppcStack_a8;
    pppppppcVar30 = (code *******)ppppppcStack_b0;
code_r0x0001046a4cfc:
    pppppppcVar20 = (code *******)pppppppcVar30[6];
code_r0x0001046a4d00:
    ppppppcStack_98 = (code ******)pppppppcVar25;
code_r0x0001046a4d04:
code_r0x0001046a4d08:
code_r0x0001046a4d0c:
    iVar6 = (int)ppppppcStack_98;
    (*(code *)pppppppcVar20)();
    ppppppcStack_98 = (code ******)pppppppcVar25;
    if (iVar6 != 1) {
code_r0x0001046a4ea4:
      func_0x0001046a7634(ppppppcStack_98,pppppppcVar26);
code_r0x0001046a4eac:
      lVar11 = (long)pppppppcVar25 + (long)pppppppcVar28;
      (*(code *)pppppppcVar20)(lVar11,1,pppppppcVar7);
      if ((int)lVar11 == 1) {
        _objc_release(ppppppcStack_b8);
        pppppppcVar10 = (code *******)0x112d36000;
code_r0x0001046a4ed0:
        func_0x0001046a75f4(pppppppcVar29,pppppppcVar10 + 0xb0,&UNK_10d9016d0);
        (*(code *)pppppppcVar30[1])(pppppppcVar26,pppppppcVar7);
        ppppppcStack_98 = (code ******)pppppppcVar25;
        goto code_r0x0001046a4b94;
      }
      pppppppcVar20 = pppppppcVar24;
      (*(code *)pppppppcVar30[4])
                (pppppppcVar24,(long)pppppppcVar25 + (long)pppppppcVar28,pppppppcVar7);
      func_0x000101553b98();
      pppppppcVar12 = pppppppcVar26;
      __sSQ2eeoiySbx_xtFZTj(pppppppcVar26,pppppppcVar24,pppppppcVar7,pppppppcVar20);
      ppppppcVar27 = pppppppcVar30[1];
      (*(code *)ppppppcVar27)(pppppppcVar24,pppppppcVar7);
      func_0x0001046a75f4(pppppppcVar29,0x112d36580,&UNK_10d9016d0);
      (*(code *)ppppppcVar27)(pppppppcVar26,pppppppcVar7);
      func_0x0001046a75f4(pppppppcVar25,0x112d36580,&UNK_10d9016d0);
      lVar11 = _DAT_11308ce30;
      pppppppcVar8 = (code *******)ppppppcStack_b8;
      goto joined_r0x0001046a50d4;
    }
code_r0x0001046a4d18:
code_r0x0001046a4d1c:
    ppppppcStack_98 = (code ******)pppppppcVar29;
code_r0x0001046a4d2c:
    func_0x0001046a75f4(ppppppcStack_98);
    ppppppcStack_98 = (code ******)((long)pppppppcVar25 + (long)pppppppcVar28);
code_r0x0001046a4d34:
    (*(code *)pppppppcVar20)(ppppppcStack_98,1,pppppppcVar7);
    bVar5 = (int)ppppppcStack_98 == 1;
code_r0x0001046a4d44:
    if (!bVar5) {
      _objc_release(ppppppcStack_b8);
      ppppppcStack_98 = (code ******)pppppppcVar25;
      goto code_r0x0001046a4b94;
    }
code_r0x0001046a4d48:
code_r0x0001046a4d4c:
code_r0x0001046a4d50:
code_r0x0001046a4d58:
    func_0x0001046a75f4(pppppppcVar25);
    lVar11 = _DAT_11308ce30;
    goto code_r0x0001046a5190;
  case 8:
    lVar9 = _DAT_11308ce38;
    goto code_r0x0001046a4f7c;
  case 9:
  case 0x5a:
  case 0xa2:
  case 0xba:
    pppppppcVar13 = (code *******)&DAT_11308c000;
  case 0x72:
  case 0x8a:
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)pppppppcVar13[0x1c8]);
    puVar2 = (undefined8 *)((long)ppppppcStack_98 + (long)pppppppcVar13[0x1c8]);
    bVar18 = *(byte *)(puVar2 + 1);
    if (*(char *)(puVar1 + 1) == '\x01') {
      _objc_release();
      goto code_r0x0001046a4d90;
    }
    uVar22 = *puVar1;
    uVar23 = *puVar2;
    _objc_release();
    if (bVar18 != 1) {
      uVar19 = (uint)((int)uVar22 == (int)uVar23);
      goto code_r0x0001046a52b0;
    }
    goto LAB_1046a52ac;
  case 0xd:
  case 0x15:
  case 0x8b:
  case 0xdf:
  case 0xf3:
    goto code_r0x0001046a4b7c;
  case 0xe:
code_r0x0001046a4c40:
    goto code_r0x0001046a51f4;
  case 0xf:
  case 0x11:
  case 0x19:
  case 0x48:
  case 0x50:
  case 0x90:
  case 0x98:
  case 0xec:
  case 0xfa:
    goto code_r0x0001046a4b78;
  case 0x10:
    goto code_r0x0001046a4dbc;
  case 0x12:
    goto code_r0x0001046a4d0c;
  case 0x14:
    goto code_r0x0001046a4e28;
  case 0x16:
code_r0x0001046a4c2c:
    pppppppcVar20 = *(code ********)((long)ppppppcStack_98 + (long)pppppppcVar13);
    pppppppcVar24 = (code *******)ppppppcStack_98;
    if (pppppppcVar20 != (code *******)0x0) {
      pppppppcVar8 = (code *******)0x0;
      FUN_1046a2e6c();
      goto code_r0x0001046a4c40;
    }
    pppppppcVar8 = (code *******)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
code_r0x0001046a51f4:
    ppppppcStack_90 = (code ******)pppppppcVar20;
    ppppppcStack_78 = (code ******)pppppppcVar8;
    _objc_retain(pppppppcVar20);
    pppppppcVar7 = &ppppppcStack_90;
    FUN_1046a1c50(pppppppcVar7);
    uVar19 = (uint)pppppppcVar7;
    _objc_release(pppppppcVar24);
    func_0x0001046a75f4(&ppppppcStack_90,0x112d387f8,&UNK_10d902650);
    goto code_r0x0001046a52b0;
  case 0x17:
  case 0x1b:
  case 0xea:
    goto LAB_1046a4b80;
  case 0x18:
    goto code_r0x0001046a4f30;
  case 0x1c:
    goto code_r0x0001046a4ed0;
  case 0x28:
    goto code_r0x0001046a4be4;
  case 0x2a:
    goto code_r0x0001046a4eac;
  case 0x2c:
  case 0x70:
  case 0x88:
  case 0xb8:
    goto code_r0x0001046a4b90;
  case 0x30:
  case 0xc0:
code_r0x0001046a4c78:
    pppppppcVar14 = pppppppcVar13;
    pppppppcVar20 = (code *******)ppppppcStack_98;
    if (!bVar5) goto code_r0x0001046a4c88;
code_r0x0001046a5004:
    uVar16 = *(ulong *)((long)unaff_x20 + _DAT_11308cde0);
    if (uVar16 == 0) {
      if (*(long *)((long)pppppppcVar8 + _DAT_11308cde0) == 0) goto code_r0x0001046a523c;
    }
    else {
      func_0x00010c071ae0();
      if ((uVar16 & 1) != 0) {
code_r0x0001046a523c:
        uVar16 = *(ulong *)((long)unaff_x20 + _DAT_11308cde8);
        if (uVar16 == 0) {
          if (*(long *)((long)pppppppcVar8 + _DAT_11308cde8) == 0) goto code_r0x0001046a5274;
        }
        else {
          func_0x00010c071ae0();
          if ((uVar16 & 1) != 0) {
code_r0x0001046a5274:
            bVar18 = *(byte *)((long)pppppppcVar8 + _DAT_11308cdf0);
            if (*(byte *)((long)unaff_x20 + _DAT_11308cdf0) == 2) {
              if (bVar18 == 2) {
code_r0x0001046a52d8:
                bVar18 = *(byte *)((long)unaff_x20 + _DAT_11308cdf8);
                bVar4 = *(byte *)((long)pppppppcVar8 + _DAT_11308cdf8);
                _objc_release();
                uVar19 = 0;
                if (bVar4 == 2) {
                  uVar19 = (uint)(bVar18 == 2);
                }
                if ((bVar18 != 2) && (bVar4 != 2)) {
                  uVar19 = (bVar18 ^ bVar4) ^ 1;
                }
                goto code_r0x0001046a52b0;
              }
            }
            else if ((bVar18 != 2) &&
                    (((*(byte *)((long)unaff_x20 + _DAT_11308cdf0) ^ bVar18) & 1) == 0))
            goto code_r0x0001046a52d8;
          }
        }
      }
    }
    break;
  case 0x31:
  case 0xc1:
    goto code_r0x0001046a4d04;
  case 0x32:
  case 0xc2:
    goto code_r0x0001046a4cd0;
  case 0x33:
  case 0x37:
  case 0x3b:
  case 0x41:
  case 0xc3:
  case 199:
  case 0xcb:
  case 0xd1:
  case 0xd8:
    goto code_r0x0001046a4d08;
  case 0x34:
  case 0x43:
  case 0xc4:
  case 0xd4:
    goto code_r0x0001046a4cfc;
  case 0x35:
  case 0x3a:
  case 0xc5:
  case 0xca:
    goto code_r0x0001046a4d4c;
  case 0x36:
  case 0xc6:
    goto code_r0x0001046a4d18;
  case 0x38:
  case 200:
    goto code_r0x0001046a4d50;
  case 0x39:
  case 0xc9:
code_r0x0001046a4c88:
    pppppppcVar8 = pppppppcVar20;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    if (((ulong)pppppppcVar14 & 1) != 0) goto code_r0x0001046a5004;
    break;
  case 0x3c:
  case 0xcc:
    goto code_r0x0001046a4d2c;
  case 0x3d:
  case 0xcd:
  case 0xd5:
    goto code_r0x0001046a4d44;
  case 0x3e:
  case 0xce:
    goto code_r0x0001046a4cc4;
  case 0x3f:
  case 0xcf:
  case 0xd6:
    goto code_r0x0001046a4d58;
  case 0x40:
  case 0xd0:
  case 0xd7:
    goto code_r0x0001046a4d34;
  case 0x42:
    goto code_r0x0001046a4cb0;
  case 0x44:
    goto code_r0x0001046a4d1c;
  case 0x45:
    goto code_r0x0001046a4d00;
  case 0x5c:
  case 0xf7:
    goto code_r0x0001046a4f4c;
  case 0x60:
  case 0x68:
    goto code_r0x0001046a4b94;
  case 0x74:
  case 0x8c:
    goto code_r0x0001046a4f6c;
  case 0x75:
  case 0x76:
  case 0x8d:
  case 0x8e:
    goto code_r0x0001046a4f70;
  case 0xa4:
    goto code_r0x0001046a4f68;
  case 0xa8:
    goto code_r0x0001046a4b98;
  case 0xd2:
    goto code_r0x0001046a4cc0;
  case 0xd3:
    goto code_r0x0001046a4d48;
  case 0xdc:
    goto code_r0x0001046a4f28;
  case 0xde:
  case 0xf2:
    goto code_r0x0001046a4e10;
  case 0xe0:
    goto code_r0x0001046a4d94;
  case 0xe1:
    goto code_r0x0001046a4bec;
  case 0xe2:
    goto code_r0x0001046a4e30;
  case 0xf0:
    goto code_r0x0001046a4ef8;
  case 0xf4:
    goto code_r0x0001046a4ea4;
  case 0xf5:
    goto code_r0x0001046a4f3c;
  case 0xf6:
    goto code_r0x0001046a4dd0;
  }
LAB_1046a52a8:
  _objc_release(pppppppcVar8);
LAB_1046a52ac:
  uVar19 = 0;
code_r0x0001046a52b0:
  return uVar19 & 1;
}



/* Entry: 1046a5a20; end: 1046a5af3;  */

void FUN_1046a5a20(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046a5af4; end: 1046a5b13;  */

void FUN_1046a5af4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1046a5b14; end: 1046a5b8b; -[SCAdWebviewEventType description] */

void FUN_1046a5b14(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x0001046a531c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1046787a4(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a5b8c; end: 1046a5bd3; -[SCAdWebviewEventType init] */

void FUN_1046a5b8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewEventTypeWrapper.swift",0x38,2,0x72,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a5bd4);
  (*pcVar1)();
}



/* Entry: 1046a5bd4; end: 1046a5c07; -[SCAdWebviewEventType hash] */

undefined8 FUN_1046a5bd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1046a44bc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a5c08; end: 1046a5c97; -[SCAdWebviewEventType isEqual:] */

uint FUN_1046a5c08(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1046a4990(&uStack_40);
  _objc_release(param_1);
  FUN_1046a75f4(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1046a5c98; end: 1046a5c9b; -[SCAdWebviewEventType copyWithZone:] */

void FUN_1046a5c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a5c9c; end: 1046a5cd3; +[SCAdWebviewEventType webViewLoadWithWebViewLoadInfo:] */

void FUN_1046a5c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1046a76dc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1046a5cd4; end: 1046a5d77; +[SCAdWebviewEventType gaHitWithHitType:hitLatencyMs:hitTsMs:isPageView:isLandingPage:] */

void FUN_1046a5cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  FUN_1046a791c(param_3,param_2,param_4,param_5,param_6,param_7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046a5d78; end: 1046a5d8f; +[SCAdWebviewEventType attachmentTriggered] */

void FUN_1046a5d78(void)

{
  FUN_1046a7b90(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a5d90; end: 1046a5da7; +[SCAdWebviewEventType viewDidAppear] */

void FUN_1046a5d90(void)

{
  FUN_1046a7b90(3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a5da8; end: 1046a5e13; +[SCAdWebviewEventType browseWithWebviewUrl:finalResolvedUrl:] */

void FUN_1046a5da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_1046a7dc4(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046a5e14; end: 1046a5e27; +[SCAdWebviewEventType loadProgressWithProgress:] */

void FUN_1046a5e14(void)

{
  FUN_1046a8024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a5e28; end: 1046a5e33; +[SCAdWebviewEventType willLoadUrlWithUrl:collectionItemIndex:] */

void FUN_1046a5e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puVar3 = puVar4;
  FUN_1046a8264(puVar4,param_4);
  _objc_release(uVar2);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046a5e34; end: 1046a5e3f; +[SCAdWebviewEventType didLoadUrlWithUrl:collectionItemIndex:] */

void FUN_1046a5e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puVar3 = puVar4;
  FUN_1046a84c0(puVar4,param_4);
  _objc_release(uVar2);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046a5e40; end: 1046a5ef3;  */

void FUN_1046a5e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puVar3 = puVar4;
  (*param_5)(puVar4,param_4);
  _objc_release(uVar2);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1046a5ef4; end: 1046a5f2b; +[SCAdWebviewEventType onGhostWriterSignalReceivedWithPayload:] */

void FUN_1046a5ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x0001046a8724();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046a5f2c; end: 1046a5f43; +[SCAdWebviewEventType viewDidDisappearWithExitMethod:] */

void FUN_1046a5f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1046a8974(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a5f44; end: 1046a62ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a5f44(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined8 param_16,code *param_17,
                  undefined8 param_18,code *param_19,undefined8 param_20,code *param_21,
                  undefined8 param_22)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  
  uStack_c0 = param_20;
  pcStack_b8 = param_21;
  pcStack_88 = param_17;
  uStack_80 = param_18;
  uStack_90 = param_16;
  uStack_a0 = param_22;
  pcStack_98 = param_15;
  lVar5 = 0x112d36580;
  uStack_d0 = param_4;
  pcStack_c8 = param_3;
  uStack_b0 = param_2;
  pcStack_a8 = param_1;
  uStack_78 = param_8;
  pcStack_70 = param_7;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar3 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar3 - extraout_x12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11308cdc8)) {
  case 0:
    if (*(long *)(unaff_x20 + _DAT_11308cdd0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a628c);
      (*pcVar1)();
    }
    (*pcStack_a8)();
    break;
  case 1:
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_11308cdd8))[1];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a6294);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11308cdf0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a62a8);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11308cdf8) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a62ac);
      (*pcVar1)();
    }
    (*pcStack_c8)(*(undefined8 *)(unaff_x20 + _DAT_11308cdd8),lVar5,
                  *(undefined8 *)(unaff_x20 + _DAT_11308cde0),
                  *(undefined8 *)(unaff_x20 + _DAT_11308cde8),
                  *(byte *)(unaff_x20 + _DAT_11308cdf0) & 1,
                  *(byte *)(unaff_x20 + _DAT_11308cdf8) & 1);
    break;
  case 2:
    (*param_5)();
    break;
  case 3:
    (*pcStack_70)();
    break;
  case 4:
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_11308ce00))[1];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a6284);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11308ce08))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a62a4);
      (*pcVar1)();
    }
    (*param_9)(*(undefined8 *)(unaff_x20 + _DAT_11308ce00),lVar5,
               *(undefined8 *)(unaff_x20 + _DAT_11308ce08));
    break;
  case 5:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308ce10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a6298);
      (*pcVar1)();
    }
    (*param_12)(*(undefined8 *)(unaff_x20 + _DAT_11308ce10));
    break;
  case 6:
    func_0x0001046a7634(unaff_x20 + _DAT_11308ce18,lVar5,0x112d36580,&UNK_10d9016d0);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar4 = *(long *)(lVar2 + -8);
    lVar3 = lVar5;
    (**(code **)(lVar4 + 0x30))(lVar5,1,lVar2);
    if ((int)lVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a629c);
      (*pcVar1)();
    }
    (*pcStack_98)(lVar5,*(undefined8 *)(unaff_x20 + _DAT_11308ce20));
    pcVar1 = *(code **)(lVar4 + 8);
    goto code_r0x0001046a6234;
  case 7:
    func_0x0001046a7634(unaff_x20 + _DAT_11308ce28,lVar3,0x112d36580,&UNK_10d9016d0);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar4 = *(long *)(lVar2 + -8);
    lVar5 = lVar3;
    (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
    if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a6290);
      (*pcVar1)();
    }
    (*pcStack_88)(lVar3,*(undefined8 *)(unaff_x20 + _DAT_11308ce30));
    pcVar1 = *(code **)(lVar4 + 8);
    lVar5 = lVar3;
code_r0x0001046a6234:
    (*pcVar1)(lVar5,lVar2);
    break;
  case 8:
    if (((undefined8 *)(unaff_x20 + _DAT_11308ce38))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a62a0);
      (*pcVar1)();
    }
    (*param_19)(*(undefined8 *)(unaff_x20 + _DAT_11308ce38));
    break;
  case 9:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308ce40) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a6288);
      (*pcVar1)();
    }
    (*pcStack_b8)(*(undefined8 *)(unaff_x20 + _DAT_11308ce40));
  }
  return;
}



/* Entry: 1046a62ac; end: 1046a639f; -[SCAdWebviewEventType matchWebViewLoad:gaHit:attachmentTriggered:viewDidAppear:browse:loadProgress:willLoadUrl:didLoadUrl:onGhostWriterSignalReceived:viewDidDisappear:] */

void FUN_1046a62ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1046a5f44(0x1046a8f68,auStack_40,FUN_1046a8e48,auStack_60,FUN_1046a8eb0,auStack_80,0x1046a8f6c
                ,auStack_a0,0x1046a8ebc,auStack_c0,0x1046a8ec4,auStack_e0,0x1046a8ed0,auStack_100,
                0x1046a8f70,auStack_120,FUN_1046a8f20,auStack_140,FUN_1046a8f58,auStack_160);
  _objc_release(param_1);
  return;
}



/* Entry: 1046a63a0; end: 1046a63d3;  */

void FUN_1046a63a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1046a63d4; end: 1046a64d3; -[SCAdWebviewEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a63d4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cdd0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308cdd8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cde0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cde8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ce00 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ce08 + 8));
  FUN_1046a75f4(param_1 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ce20));
  FUN_1046a75f4(param_1 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ce30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308ce38 + 8))
  ;
  return;
}



/* Entry: 1046a64d4; end: 1046a75f3;  */

void FUN_1046a64d4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 auStack_250 [496];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  FUN_10467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_250 +
           (((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
             (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12) -
           (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_104677940(param_1,puVar2);
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001046a65f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dd2674a + ((ulong)puVar2 & 0xffffffff) * 2) * 4 + 0x1046a65fc
            ))();
  return;
}



/* Entry: 1046a75f4; end: 1046a76cb;  */

undefined8 FUN_1046a75f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1046a76cc; end: 1046a76db;  */

ulong FUN_1046a76cc(ulong param_1)

{
  if (9 < param_1) {
    param_1 = 10;
  }
  return param_1;
}



/* Entry: 1046a76dc; end: 1046a791b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a76dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(lVar7,1,1,lVar3);
  (*pcVar8)(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_1046a8bb4();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11308cdc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cdd0) = param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar3 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar3 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar7,lVar3 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar6,lVar3 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  _objc_retain(param_1);
  plVar5 = &lStack_60;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar7,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1046a791c; end: 1046a7b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(lVar7,1,1,lVar3);
  (*pcVar8)(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_1046a8bb4();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11308cdc8) = 1;
  *(undefined8 *)(lVar3 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308cdd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_11308cde0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11308cde8) = param_4;
  *(undefined1 *)(lVar3 + _DAT_11308cdf0) = param_5;
  *(undefined1 *)(lVar3 + _DAT_11308cdf8) = param_6;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar7,lVar3 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar6,lVar3 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar7,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1046a7b90; end: 1046a7dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a7b90(undefined1 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar7 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar7)(lVar6,1,1,lVar2);
  (*pcVar7)(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_1046a8bb4();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308cdc8) = param_1;
  *(undefined8 *)(lVar2 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar6,lVar2 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar5,lVar2 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar4 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001046a75f4(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 1046a7dc4; end: 1046a8023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a7dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(lVar7,1,1,lVar3);
  (*pcVar8)(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_1046a8bb4();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11308cdc8) = 4;
  *(undefined8 *)(lVar3 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar3 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar3 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar7,lVar3 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar6,lVar3 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar7,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1046a8024; end: 1046a8263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a8024(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar7 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar7)(lVar6,1,1,lVar2);
  (*pcVar7)(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_1046a8bb4();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308cdc8) = 5;
  *(undefined8 *)(lVar2 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x0001046a7634(lVar6,lVar2 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar5,lVar2 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar4 = &lStack_70;
  lStack_70 = lVar2;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001046a75f4(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 1046a8264; end: 1046a84bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a8264(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (**(code **)(lVar8 + 0x10))(lVar6,param_1,lVar3);
  pcVar7 = *(code **)(lVar8 + 0x38);
  (*pcVar7)(lVar6,0,1,lVar3);
  (*pcVar7)(lVar5,1,1,lVar3);
  lVar8 = 0;
  FUN_1046a8bb4();
  lVar3 = lVar8;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11308cdc8) = 6;
  *(undefined8 *)(lVar3 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar3 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar3 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar6,lVar3 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce20) = param_2;
  func_0x0001046a7634(lVar5,lVar3 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar8;
  _objc_retain(param_2);
  plVar4 = &lStack_60;
  _objc_msgSendSuper2(plVar4,puVar2);
  func_0x0001046a75f4(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 1046a84c0; end: 1046a8973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a84c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)(lVar6,1,1,lVar3);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,lVar3);
  (*pcVar8)(lVar5,0,1,lVar3);
  lVar7 = 0;
  FUN_1046a8bb4();
  lVar3 = lVar7;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11308cdc8) = 7;
  *(undefined8 *)(lVar3 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar3 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar3 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar6,lVar3 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar5,lVar3 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11308ce30) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11308ce40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar7;
  _objc_retain(param_2);
  plVar4 = &lStack_70;
  _objc_msgSendSuper2(plVar4,puVar2);
  func_0x0001046a75f4(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 1046a8974; end: 1046a8bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1046a8974(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar7 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar7)(lVar6,1,1,lVar2);
  (*pcVar7)(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_1046a8bb4();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308cdc8) = 9;
  *(undefined8 *)(lVar2 + _DAT_11308cdd0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308cdd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cde0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308cde8) = 0;
  *(undefined1 *)(lVar2 + _DAT_11308cdf0) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308cdf8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001046a7634(lVar6,lVar2 + _DAT_11308ce18,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_11308ce20) = 0;
  func_0x0001046a7634(lVar5,lVar2 + _DAT_11308ce28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_11308ce30) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308ce40);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar4 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001046a75f4(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x0001046a75f4(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 1046a8bac; end: 1046a8bb3;  */

void FUN_1046a8bac(void)

{
  if (lRam000000011308ce78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e818658);
  return;
}



/* Entry: 1046a8bb4; end: 1046a8beb;  */

void FUN_1046a8bb4(undefined8 param_1)

{
  if (lRam000000011308ce78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e818658);
  return;
}



/* Entry: 1046a8bec; end: 1046a8c9f;  */

void FUN_1046a8bec(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_b0 = &UNK_10dd26788;
  puStack_a8 = &UNK_10dd267a0;
  puStack_a0 = &UNK_10dd267b8;
  puStack_98 = &UNK_10dd267a0;
  puStack_90 = &UNK_10dd267a0;
  puStack_88 = &UNK_10dd267d0;
  puStack_80 = &UNK_10dd267d0;
  puStack_78 = &UNK_10dd267b8;
  puStack_70 = &UNK_10dd267b8;
  puStack_68 = &UNK_10dd267e8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dd267a0;
    puStack_48 = &UNK_10dd267a0;
    puStack_40 = &UNK_10dd267b8;
    puStack_38 = &UNK_10dd267e8;
    lStack_50 = lStack_60;
    _swift_updateClassMetadata2(param_1,0x100,0x10,&puStack_b0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1046a8ca0; end: 1046a8e07;  */

int FUN_1046a8ca0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1046a8d1c;
        goto LAB_1046a8d00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1046a8d00:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_1046a8d1c:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1046a8e08; end: 1046a8e47;  */

void FUN_1046a8e08(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ce88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2681c;
  _swift_getWitnessTable(&UNK_10dd2681c,&UNK_1107968f8);
  puRam000000011308ce88 = puVar1;
  return;
}



/* Entry: 1046a8e48; end: 1046a8eaf;  */

void FUN_1046a8e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_4,param_5 & 1,param_6 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046a8eb0; end: 1046a8ed3;  */

void FUN_1046a8eb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001046a8eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1046a8ed4; end: 1046a8f1f;  */

void FUN_1046a8ed4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046a8f20; end: 1046a8f57;  */

void FUN_1046a8f20(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1046a8f58; end: 1046a8f73;  */

void FUN_1046a8f58(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001046a8f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1046a8f74; end: 1046a8f83; -[SCAdWebviewGaEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a8f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ce90));
  return;
}



/* Entry: 1046a8f84; end: 1046a8f9b; -[SCAdWebviewGaEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a8f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ce98));
  return;
}



/* Entry: 1046a8f9c; end: 1046a90db; -[SCAdWebviewGaEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a8f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308ce90) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308ce98) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a90dc; end: 1046a915f; -[SCAdWebviewGaEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a90dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308ce90);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308ce98);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a9160; end: 1046a9237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a9160(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308ce90);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308ce98);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308ce98);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046a9238; end: 1046a92b7; -[SCAdWebviewGaEvent isEqual:] */

uint FUN_1046a9238(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1046a9160(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a92b8; end: 1046a92bb; -[SCAdWebviewGaEvent copyWithZone:] */

void FUN_1046a92b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a92bc; end: 1046a92d7; -[SCAdWebviewGaEvent description] */

void FUN_1046a92bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a92d8; end: 1046a9353; -[SCAdWebviewGaEvent init] */

void FUN_1046a92d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewGaEventWrapper.swift",0x36,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a9320);
  (*pcVar1)();
}



/* Entry: 1046a9354; end: 1046a938b; -[SCAdWebviewGaEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9354(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ce90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ce98));
  return;
}



/* Entry: 1046a938c; end: 1046a93ab;  */

void FUN_1046a938c(void)

{
  _objc_opt_self(&PTR_PTR_1129d2648);
  return;
}



/* Entry: 1046a93ac; end: 1046a93b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a93ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ce90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ce98) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a93b4; end: 1046a93c3; -[SCAdWebviewLoadingEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a93b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cec8));
  return;
}



/* Entry: 1046a93c4; end: 1046a93db; -[SCAdWebviewLoadingEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a93c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308ced0));
  return;
}



/* Entry: 1046a93dc; end: 1046a951b; -[SCAdWebviewLoadingEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a93dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cec8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308ced0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a951c; end: 1046a959f; -[SCAdWebviewLoadingEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a951c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cec8);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308ced0);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a95a0; end: 1046a9677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a95a0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cec8);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308ced0);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308ced0);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046a9678; end: 1046a96f7; -[SCAdWebviewLoadingEvent isEqual:] */

uint FUN_1046a9678(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1046a95a0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a96f8; end: 1046a96fb; -[SCAdWebviewLoadingEvent copyWithZone:] */

void FUN_1046a96f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a96fc; end: 1046a9717; -[SCAdWebviewLoadingEvent description] */

void FUN_1046a96fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a9718; end: 1046a9793; -[SCAdWebviewLoadingEvent init] */

void FUN_1046a9718(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewLoadingEventWrapper.swift",0x3b,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a9760);
  (*pcVar1)();
}



/* Entry: 1046a9794; end: 1046a97cb; -[SCAdWebviewLoadingEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9794(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cec8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ced0));
  return;
}



/* Entry: 1046a97cc; end: 1046a97eb;  */

void FUN_1046a97cc(void)

{
  _objc_opt_self(&PTR_PTR_1129d2718);
  return;
}



/* Entry: 1046a97ec; end: 1046a97f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a97ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cec8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ced0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a97f4; end: 1046a9803; -[SCAdWebviewNavigationEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a97f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cf00));
  return;
}



/* Entry: 1046a9804; end: 1046a981b; -[SCAdWebviewNavigationEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cf08));
  return;
}



/* Entry: 1046a981c; end: 1046a995b; -[SCAdWebviewNavigationEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a981c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cf00) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cf08) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a995c; end: 1046a99df; -[SCAdWebviewNavigationEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a995c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cf00);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cf08);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a99e0; end: 1046a9ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a99e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cf00);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308cf08);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308cf08);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046a9ab8; end: 1046a9b37; -[SCAdWebviewNavigationEvent isEqual:] */

uint FUN_1046a9ab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1046a99e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a9b38; end: 1046a9b3b; -[SCAdWebviewNavigationEvent copyWithZone:] */

void FUN_1046a9b38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a9b3c; end: 1046a9b57; -[SCAdWebviewNavigationEvent description] */

void FUN_1046a9b3c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a9b58; end: 1046a9bd3; -[SCAdWebviewNavigationEvent init] */

void FUN_1046a9b58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewNavigationEventWrapper.swift",0x3e,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a9ba0);
  (*pcVar1)();
}



/* Entry: 1046a9bd4; end: 1046a9c0b; -[SCAdWebviewNavigationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9bd4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cf00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cf08));
  return;
}



/* Entry: 1046a9c0c; end: 1046a9c2b;  */

void FUN_1046a9c0c(void)

{
  _objc_opt_self(&PTR_PTR_1129d27e8);
  return;
}



/* Entry: 1046a9c2c; end: 1046a9c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9c2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cf00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cf08) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046a9c34; end: 1046a9c43; -[SCAdWebviewUserEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cf38));
  return;
}



/* Entry: 1046a9c44; end: 1046a9c57; -[SCAdWebviewUserEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308cf40));
  return;
}



/* Entry: 1046a9c58; end: 1046a9d33; -[SCAdWebviewUserEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308cf38) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308cf40) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046a9d34; end: 1046a9db7; -[SCAdWebviewUserEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046a9d34(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cf38);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308cf40);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046a9db8; end: 1046a9e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046a9db8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308cf38);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308cf40);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308cf40);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046a9e90; end: 1046a9f0f; -[SCAdWebviewUserEventV2 isEqual:] */

uint FUN_1046a9e90(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1046a9db8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1046a9f10; end: 1046a9f13; -[SCAdWebviewUserEventV2 copyWithZone:] */

void FUN_1046a9f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1046a9f14; end: 1046a9f2f; -[SCAdWebviewUserEventV2 description] */

void FUN_1046a9f14(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046a9f30; end: 1046a9fab; -[SCAdWebviewUserEventV2 init] */

void FUN_1046a9f30(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdWebviewUserEventV2Wrapper.swift",0x3a,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046a9f78);
  (*pcVar1)();
}



/* Entry: 1046a9fac; end: 1046a9fe3; -[SCAdWebviewUserEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046a9fac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308cf38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308cf40));
  return;
}



/* Entry: 1046a9fe4; end: 1046aa003;  */

void FUN_1046a9fe4(void)

{
  _objc_opt_self(&PTR_PTR_1129d28b8);
  return;
}



/* Entry: 1046aa004; end: 1046aa007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa004(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308cf38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308cf40) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046aa008; end: 1046aa037;  */

void FUN_1046aa008(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1046aa5a0(param_1);
  return;
}



/* Entry: 1046aa038; end: 1046aa16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa038(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11308cf70);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,PTR___sSSN_11034da80);
    lVar2 = lVar1;
    func_0x00010bfde980();
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyySuF(lVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308cf78));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308cf80));
  lVar1 = *(long *)(unaff_x20 + _DAT_11308cf88);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308cf90);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1046aa170; end: 1046aa397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046aa170(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x20;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  FUN_1046aa980(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
    if (((ulong)plVar5 & 1) != 0) {
      uVar6 = *(ulong *)(unaff_x20 + _DAT_11308cf70);
      uVar10 = (ulong)(uVar6 == 0 && *(long *)(lStack_88 + _DAT_11308cf70) == 0);
      if (uVar6 != 0 && *(long *)(lStack_88 + _DAT_11308cf70) != 0) {
        func_0x00010142cfc4();
        uVar10 = uVar6;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11308cf78);
      bVar2 = *(byte *)(lStack_88 + _DAT_11308cf78);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11308cf80);
      bVar4 = *(byte *)(lStack_88 + _DAT_11308cf80);
      lVar12 = *(long *)(unaff_x20 + _DAT_11308cf88);
      lVar14 = *(long *)(lStack_88 + _DAT_11308cf88);
      uVar13 = (uint)(lVar12 == 0 && lVar14 == 0);
      if ((lVar12 != 0) && (lVar14 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar14);
        _objc_retain(lVar12);
        lVar7 = lVar12;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar7;
        _objc_release(lVar12);
        _objc_release(lVar14);
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11308cf90);
      lVar14 = *(long *)(lStack_88 + _DAT_11308cf90);
      if (lVar12 == 0) {
        lVar7 = lVar14;
        _objc_retain(lVar14);
        _objc_release(lStack_88);
        if (lVar14 != 0) {
          uVar11 = 0;
          goto LAB_1046aa35c;
        }
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
        lVar7 = lStack_88;
        if (lVar14 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar14);
          _objc_retain(lVar12);
          lVar8 = lVar12;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar11 = (uint)lVar8;
          _objc_release(lVar12);
          _objc_release(lVar14);
        }
LAB_1046aa35c:
        _objc_release(lVar7);
      }
      uVar9 = 0;
      if ((((uVar10 & 1) != 0) && (uVar9 = 0, ((bVar1 ^ bVar2) & 1) == 0)) &&
         (((bVar3 ^ bVar4) & 1) == 0)) {
        uVar9 = uVar13 & uVar11;
      }
      goto LAB_1046aa318;
    }
  }
  uVar9 = 0;
LAB_1046aa318:
  return uVar9 & 1;
}



/* Entry: 1046aa398; end: 1046aa3eb; -[SCWebViewFirstGAInfo gaHitTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046aa398(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308cf70);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1046aa3ec; end: 1046aa3fb; -[SCWebViewFirstGAInfo hasGAPageViewHit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1046aa3ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308cf78);
}


