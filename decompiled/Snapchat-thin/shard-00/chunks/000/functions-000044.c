/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10010ce20; end: 10010cee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010ce20(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10010cd00(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_10010cebc;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_10010cebc:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x000107c4adac(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar6;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_1 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 10010cee8; end: 10010cf07; -[GPBCodedInputStream checkLastTagWas:] */

/* WARNING: Possible PIC construction at 0x00010bd5e61c: Changing call to branch */

void FUN_10010cee8(long param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if (*(int *)(param_1 + 0x28) == param_3) {
    return;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_11102f538;
  uVar2 = 0xffffffffffffff99;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined ***)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(undefined **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar3 = ppuVar5;
    func_0x00010c08fa60();
    unaff_x21 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    if (ppuVar3 != (undefined **)0x0) {
      *(undefined ***)(puVar1 + -0x48) = &PTR____CFConstantStringClassReference_110f4c438;
      *(undefined ***)(puVar1 + -0x40) = ppuVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    *(undefined ***)(puVar1 + -0x58) = &PTR____CFConstantStringClassReference_11102f4b8;
    *(undefined **)(puVar1 + -0x50) = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    unaff_x19 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60();
    func_0x00010c11f000();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x38)) break;
    ___stack_chk_fail();
    *(undefined8 *)(puVar1 + -0x80) = uVar2;
    *(undefined ***)(puVar1 + -0x78) = ppuVar5;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &UNK_10bd5e5f4;
    unaff_x29 = puVar1 + -0x70;
    unaff_x20 = unaff_x19;
    func_0x000107c3aafc();
    if ((ulong)unaff_x20 >> 0x1f == 0) {
      func_0x000107c3ab04(unaff_x19,unaff_x20);
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa1e0();
      *(undefined **)(unaff_x19 + 0x10) = unaff_x20 + *(long *)(unaff_x19 + 0x10);
      return;
    }
    uVar2 = 0xffffffffffffff9c;
    ppuVar5 = (undefined **)0x0;
    unaff_x30 = &UNK_10bd5e620;
    puVar1 = puVar1 + -0x80;
  }
  return;
}



/* Entry: 10010cf08; end: 10010cf4f; -[GPBCodedInputStream dealloc] */

void FUN_10010cf08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x38));
  puStack_28 = PTR_PTR_11270e7d0;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10010cf50; end: 10010dbf3; +[GPBMessage resolveInstanceMethod:] */

undefined8 ***** FUN_10010cf50(undefined8 *****param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 ****ppppuVar10;
  byte *pbVar11;
  undefined8 ****ppppuVar12;
  byte *pbVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  uint uVar16;
  undefined *puVar17;
  code *pcVar18;
  undefined *puVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined **ppuVar23;
  byte *pbVar24;
  undefined8 ****ppppuVar25;
  undefined8 ****ppppuStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined4 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  int iStack_318;
  undefined4 uStack_314;
  undefined *apuStack_310 [5];
  undefined *apuStack_2e8 [5];
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  byte *pbStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ****ppppuStack_1d8;
  undefined *puStack_1d0;
  undefined *apuStack_1c8 [5];
  undefined *apuStack_1a0 [37];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar7 = param_1;
  func_0x000107c41800();
  if (pppppuVar7 == (undefined8 *****)0x0) {
    puStack_1d0 = PTR_PTR_11270e9d0;
    pppppuVar15 = &ppppuStack_1d8;
    ppppuStack_1d8 = param_1;
  }
  else {
    pbVar8 = param_3;
    func_0x000107c612e0();
    pbVar9 = pbVar8;
    func_0x000107c613d0();
    if ((*pbVar8 == 0x73) && (pbVar20 = pbVar8 + (long)pbVar9, pbVar20[-1] == 0x3a)) {
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      ppppuVar10 = pppppuVar7[1];
      ppppuVar12 = ppppuVar10;
      func_0x000107c4080c();
      if (ppppuVar12 != (undefined8 ****)0x0) {
        lVar22 = *plStack_210;
LAB_10010d010:
        ppppuVar25 = (undefined8 ****)0x0;
LAB_10010d014:
        if (*plStack_210 != lVar22) {
          func_0x000107c61128(ppppuVar10);
        }
        if (pbVar9 < (byte *)0x5) goto LAB_10010d190;
        puVar19 = *(undefined **)(lStack_218 + (long)ppppuVar25 * 8);
        puVar21 = *(undefined8 **)(puVar19 + 8);
        uVar4 = *(ushort *)((long)puVar21 + 0x1c);
        bVar2 = pbVar8[3];
        pbVar24 = (byte *)*puVar21;
        bVar3 = *pbVar24;
        uVar16 = bVar3 - 0x20;
        if (0x19 < bVar3 - 0x61) {
          uVar16 = (uint)bVar3;
        }
        if ((((uint)bVar2 != (uVar16 & 0xff)) || (*pbVar8 != 0x73)) ||
           ((pbVar8[1] != 0x65 ||
            (((pbVar8[2] != 0x74 || (pbVar20[-1] != 0x3a)) ||
             (pbVar13 = pbVar24, func_0x000107c613d0(), pbVar9 != pbVar13 + 4)))))) {
LAB_10010d0e4:
          if ((((uVar4 & 0xf02) == 0 && (byte *)0x7 < pbVar9) && (pbVar20[-1] == 0x3a)) &&
             ((((((uint)pbVar8[6] == (uVar16 & 0xff) && ((*pbVar8 == 0x73 && (pbVar8[1] == 0x65))))
                && (bVar2 == 0x48)) &&
               (((pbVar8[2] == 0x74 && (pbVar8[4] == 0x61)) && (pbVar8[5] == 0x73)))) &&
              (((-1 < *(int *)((long)puVar21 + 0x14) && ((uVar4 >> 5 & 1) == 0)) &&
               (pbVar13 = pbVar24, func_0x000107c613d0(), pbVar9 == pbVar13 + 7)))))) {
            pbVar11 = pbVar8 + 7;
            func_0x000107c613d4(pbVar11,pbVar24 + 1,pbVar13 + -1);
            if ((int)pbVar11 == 0) {
              puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_270 = 0xc0000000;
              puStack_268 = &UNK_10bd81490;
              puStack_260 = &UNK_110d9fe18;
              ppuVar23 = &puStack_278;
              pbStack_258 = param_3;
              puStack_250 = puVar19;
              func_0x000107c6103c();
              goto LAB_10010d8c4;
            }
          }
LAB_10010d190:
          ppppuVar25 = (undefined8 ****)((long)ppppuVar25 + 1);
          if (ppppuVar12 == ppppuVar25) goto code_r0x00010010d19c;
          goto LAB_10010d014;
        }
        pbVar11 = pbVar8 + 4;
        func_0x000107c613d4(pbVar11,pbVar24 + 1,pbVar13 + -1);
        if ((int)pbVar11 != 0) goto LAB_10010d0e4;
        if ((uVar4 & 0xf02) == 0) {
          if (*(byte *)((long)puVar21 + 0x1e) < 0x12) {
            puVar17 = &UNK_110d9fe98;
            pcVar18 = FUN_100266aa0;
            ppuVar23 = apuStack_1a0;
            switch(*(byte *)((long)puVar21 + 0x1e)) {
            case 1:
              puVar17 = &UNK_110d9feb8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd81950;
              break;
            case 2:
              puVar17 = &UNK_110d9fed8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd81960;
              break;
            case 3:
              puVar17 = &UNK_110d9fef8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd81970;
              break;
            case 4:
              puVar17 = &UNK_110d9ff18;
              ppuVar23 = apuStack_1c8;
              pcVar18 = FUN_1005771e8;
              break;
            case 5:
              puVar17 = &UNK_110d9ff38;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd81980;
              break;
            case 6:
              puVar17 = &UNK_110d9ff58;
              ppuVar23 = apuStack_1c8;
              pcVar18 = FUN_100284098;
              break;
            case 7:
              puVar17 = &UNK_110d9fed8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = FUN_100266444;
              break;
            case 8:
              puVar17 = &UNK_110d9ff38;
              ppuVar23 = apuStack_1c8;
              pcVar18 = FUN_100265b50;
              break;
            case 9:
              puVar17 = &UNK_110d9fed8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd81990;
              break;
            case 10:
              puVar17 = &UNK_110d9ff38;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd819a0;
              break;
            case 0xb:
              puVar17 = &UNK_110d9feb8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = FUN_1008aa1bc;
              break;
            case 0xc:
              puVar17 = &UNK_110d9ff18;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)0x100ab523c;
              break;
            case 0xd:
              puVar17 = &UNK_110d9fdf8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = FUN_1003f5bcc;
              break;
            case 0xe:
              puVar17 = &UNK_110d9fdf8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)0x100265874;
              break;
            case 0xf:
              puVar17 = &UNK_110d9fdf8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)0x1002be8e4;
              break;
            case 0x10:
              puVar17 = &UNK_110d9fdf8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)&UNK_10bd819b0;
              break;
            case 0x11:
              puVar17 = &UNK_110d9fed8;
              ppuVar23 = apuStack_1c8;
              pcVar18 = (code *)0x1002658d4;
            }
            *ppuVar23 = PTR___NSConcreteStackBlock_11034bd00;
            ppuVar23[1] = (undefined *)0xc0000000;
            ppuVar23[2] = pcVar18;
            ppuVar23[3] = puVar17;
            ppuVar23[4] = puVar19;
            func_0x000107c6103c();
          }
          else {
LAB_10010d698:
            ppuVar23 = (undefined **)0x0;
          }
        }
        else {
          puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_240 = 0xc0000000;
          uStack_238 = 0x100280838;
          puStack_230 = &UNK_110d9fdf8;
          ppuVar23 = &puStack_248;
          puStack_228 = puVar19;
          func_0x000107c6103c();
        }
LAB_10010d8c4:
        if (ppuVar23 != (undefined **)0x0) {
          func_0x000107c61140(&UNK_10f838026);
          func_0x000107c61208();
          func_0x000107c4cda4();
          pppppuVar14 = pppppuVar7;
          func_0x000107c60eec();
          pppppuVar15 = (undefined8 *****)0x1;
          if (((ulong)pppppuVar14 & 1) == 0) {
            func_0x000107c318e4(pppppuVar7,param_3);
            pppppuVar15 = pppppuVar7;
          }
          goto LAB_10010d944;
        }
      }
    }
    else {
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      ppppuVar10 = pppppuVar7[1];
      ppppuVar12 = ppppuVar10;
      func_0x000107c4080c();
      if (ppppuVar12 != (undefined8 ****)0x0) {
        lVar22 = *plStack_2b0;
        do {
          ppppuVar25 = (undefined8 ****)0x0;
          do {
            if (*plStack_2b0 != lVar22) {
              func_0x000107c61128(ppppuVar10);
            }
            puVar19 = *(undefined **)(lStack_2b8 + (long)ppppuVar25 * 8);
            puVar21 = *(undefined8 **)(puVar19 + 8);
            uVar4 = *(ushort *)((long)puVar21 + 0x1c);
            bVar2 = *pbVar8;
            pbVar20 = (byte *)*puVar21;
            bVar3 = *pbVar20;
            if (((uint)bVar2 == (uint)bVar3) && (pbVar8[1] == pbVar20[1])) {
              iVar6 = (int)pbVar8 + 1;
              func_0x000107c613c0();
              if (iVar6 == 0) {
                if ((uVar4 & 0xf02) == 0) {
                  if (0x11 < *(byte *)((long)puVar21 + 0x1e)) goto LAB_10010d698;
                  puVar17 = &UNK_110d9ff78;
                  pcVar18 = FUN_10011b424;
                  ppuVar23 = apuStack_1a0;
                  switch(*(byte *)((long)puVar21 + 0x1e)) {
                  case 1:
                    puVar17 = &UNK_110d9ff98;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)&UNK_10bd819e4;
                    break;
                  case 2:
                    puVar17 = &UNK_110d9ffb8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_100292eb8;
                    break;
                  case 3:
                    puVar17 = &UNK_110d9ffd8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_10035ddf4;
                    break;
                  case 4:
                    puVar17 = &UNK_110d9fe78;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)&UNK_100c4a918;
                    break;
                  case 5:
                    puVar17 = &UNK_110d9fff8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)&UNK_10bd819f4;
                    break;
                  case 6:
                    puVar17 = &UNK_110da0018;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)0x100285458;
                    break;
                  case 7:
                    puVar17 = &UNK_110d9ffb8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_100111594;
                    break;
                  case 8:
                    puVar17 = &UNK_110d9fff8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_1004c0004;
                    break;
                  case 9:
                    puVar17 = &UNK_110d9ffb8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)&UNK_10bd81a04;
                    break;
                  case 10:
                    puVar17 = &UNK_110d9fff8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)&UNK_10bd81a14;
                    break;
                  case 0xb:
                    puVar17 = &UNK_110d9ff98;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_1005b007c;
                    break;
                  case 0xc:
                    puVar17 = &UNK_110d9fe78;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)0x10052822c;
                    break;
                  case 0xd:
                    puVar17 = &UNK_110d9fe38;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_100110770;
                    break;
                  case 0xe:
                    puVar17 = &UNK_110d9fe38;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_10010e980;
                    break;
                  case 0xf:
                    puVar17 = &UNK_110d9fe38;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_10010fa84;
                    break;
                  case 0x10:
                    puVar17 = &UNK_110d9fe38;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = (code *)&UNK_10bd81a24;
                    break;
                  case 0x11:
                    puVar17 = &UNK_110d9ffb8;
                    ppuVar23 = apuStack_1c8;
                    pcVar18 = FUN_1001117a8;
                  }
                  *ppuVar23 = PTR___NSConcreteStackBlock_11034bd00;
                  ppuVar23[1] = (undefined *)0xc0000000;
                  ppuVar23[2] = pcVar18;
                  ppuVar23[3] = puVar17;
                  ppuVar23[4] = puVar19;
                  func_0x000107c6103c();
                }
                else {
                  puVar17 = puVar19;
                  func_0x000107c433d8();
                  bVar5 = (int)puVar17 != 1;
                  ppuVar23 = apuStack_2e8;
                  if (bVar5) {
                    ppuVar23 = apuStack_310;
                  }
                  pcVar18 = FUN_10010dd98;
                  if (bVar5) {
                    pcVar18 = FUN_1004bfcd8;
                  }
                  *ppuVar23 = PTR___NSConcreteStackBlock_11034bd00;
                  ppuVar23[1] = (undefined *)0xc0000000;
                  ppuVar23[2] = pcVar18;
                  ppuVar23[3] = &UNK_110d9fe38;
                  ppuVar23[4] = puVar19;
                  func_0x000107c6103c();
                }
                goto LAB_10010d8c4;
              }
            }
            if ((uVar4 & 0xf02) == 0) {
              if (((((byte *)0x3 < pbVar9) && (bVar2 == 0x68)) && (pbVar8[1] == 0x61)) &&
                 (pbVar8[2] == 0x73)) {
                bVar1 = bVar3 - 0x20;
                if (0x19 < bVar3 - 0x61) {
                  bVar1 = bVar3;
                }
                if (((pbVar8[3] == bVar1) && (iVar6 = *(int *)((long)puVar21 + 0x14), -1 < iVar6))
                   && (((uVar4 >> 5 & 1) == 0 &&
                       (pbVar24 = pbVar20, func_0x000107c613d0(), pbVar9 == pbVar24 + 3)))) {
                  pbVar13 = pbVar8 + 4;
                  func_0x000107c613d4(pbVar13,pbVar20 + 1,pbVar24 + -1);
                  if ((int)pbVar13 == 0) {
                    uStack_314 = *(undefined4 *)(puVar21 + 2);
                    puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_330 = 0xc0000000;
                    pcStack_328 = FUN_100110054;
                    puStack_320 = &UNK_110d5c3a8;
                    ppuVar23 = &puStack_338;
                    iStack_318 = iVar6;
                    func_0x000107c6103c();
                    goto LAB_10010d8c4;
                  }
                }
              }
              if (((*(long *)(puVar19 + 0x10) != 0) && ((byte *)0x9 < pbVar9)) &&
                 ((pbVar20 = *(byte **)(*(long *)(puVar19 + 0x10) + 8), bVar2 == *pbVar20 &&
                  (((pbVar8 + (long)pbVar9)[-9] == 0x4f &&
                   (pbVar24 = pbVar20, func_0x000107c613d0(), pbVar9 == pbVar24 + 9)))))) {
                pbVar13 = pbVar8 + (long)pbVar24;
                func_0x000107c613d4(pbVar13,&UNK_10f8378ec,9);
                if (((int)pbVar13 == 0) &&
                   (pbVar13 = pbVar8, func_0x000107c613d4(pbVar8,pbVar20,pbVar24), (int)pbVar13 == 0
                   )) {
                  uStack_340 = *(undefined4 *)((long)puVar21 + 0x14);
                  puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_358 = 0xc0000000;
                  uStack_350 = 0x10010fa94;
                  puStack_348 = &UNK_110d9fe58;
                  ppuVar23 = &puStack_360;
                  func_0x000107c6103c();
                  goto LAB_10010d8c4;
                }
              }
            }
            else if (((((byte *)0x6 < pbVar9) && (bVar2 == bVar3)) &&
                     ((pbVar8 + (long)pbVar9)[-6] == 0x5f)) &&
                    ((pbVar24 = pbVar20, func_0x000107c613d0(), pbVar9 == pbVar24 + 6 &&
                     (pbVar13 = pbVar8, func_0x000107c613d4(pbVar8,pbVar20,pbVar24),
                     (int)pbVar13 == 0)))) {
              pbVar24 = pbVar8 + (long)pbVar24;
              func_0x000107c613d4(pbVar24,&UNK_10f8378f6,6);
              if ((int)pbVar24 == 0) {
                puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_380 = 0xc0000000;
                uStack_378 = 0x100336a70;
                puStack_370 = &UNK_110d9fe78;
                ppuVar23 = &puStack_388;
                puStack_368 = puVar19;
                func_0x000107c6103c();
                goto LAB_10010d8c4;
              }
            }
            ppppuVar25 = (undefined8 ****)((long)ppppuVar25 + 1);
          } while (ppppuVar12 != ppppuVar25);
          ppppuVar12 = ppppuVar10;
          func_0x000107c4080c();
        } while (ppppuVar12 != (undefined8 ****)0x0);
      }
    }
LAB_10010d920:
    puStack_390 = PTR_PTR_11270e9d0;
    pppppuVar15 = &ppppuStack_398;
    ppppuStack_398 = param_1;
  }
  func_0x000107c61154(pppppuVar15,PTR_s_resolveInstanceMethod__11254da90,param_3);
LAB_10010d944:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppuVar15;
  }
  func_0x000107c60e78();
  if (pppppuRam00000001137fe788 == (undefined8 *****)0x0) {
    pppppuVar7 = (undefined8 *****)PTR_PTR_1126ae978;
    func_0x000107c3dbcc();
    func_0x000107c5a894();
    pppppuRam00000001137fe788 = pppppuVar7;
  }
  return pppppuRam00000001137fe788;
code_r0x00010010d19c:
  ppppuVar12 = ppppuVar10;
  func_0x000107c4080c();
  if (ppppuVar12 == (undefined8 ****)0x0) goto LAB_10010d920;
  goto LAB_10010d010;
}



/* Entry: 10010dbf4; end: 10010dc6f; +[GPBAny descriptor] */

undefined * FUN_10010dbf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fe788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d33690,
                        &PTR____CFConstantStringClassReference_110df19b8,&PTR_DAT_11340a538,
                        &PTR_DAT_11340a550,2,0x18,0x1c);
    func_0x000107c5a894();
    puRam00000001137fe788 = puVar1;
  }
  return puRam00000001137fe788;
}



/* Entry: 10010dc70; end: 10010dd8f; -[GPBDescriptor setupExtraTextInfo:] */

long FUN_10010dc70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c5dc70(PTR__OBJC_CLASS___NSValue_1126afdf8);
    lVar5 = *(long *)(param_1 + 8);
    lVar3 = lVar5;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (param_1 = 0, lVar3 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar5);
        }
        if ((*(ushort *)(*(long *)(*(long *)(lVar6 * 8) + 8) + 0x1c) >> 6 & 1) != 0) {
          func_0x000107c61188(*(long *)(lVar6 * 8),&UNK_10e60ddfb,puVar2,1);
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar5;
      func_0x000107c4080c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  func_0x000107c60e78();
  return *(long *)(param_1 + 0x20);
}



/* Entry: 10010dd90; end: 10010dd97; -[GPBDescriptor messageClass] */

undefined8 FUN_10010dd90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10010dd98; end: 10010de37;  */

void FUN_10010dd98(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(*(long *)(lVar6 + 8) + 0x18));
  if (*plVar1 == 0) {
    lVar5 = lVar6;
    FUN_100109864();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        piVar2 = (int *)&DAT_112796b30;
        if (3 < *(byte *)(*(long *)(lVar6 + 8) + 0x1e) - 0xd) {
          piVar2 = (int *)&DAT_112796b34;
        }
        *(undefined8 *)(lVar5 + *piVar2) = 0;
        func_0x000107c61170();
        return;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 10010de38; end: 10010de7f; -[GPBMessage dealloc] */

void FUN_10010de38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c498a8(param_1,param_2,0);
  puStack_28 = PTR_PTR_11270e9c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10010de80; end: 10010e1bf; -[GPBMessage internalClear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010de80(ulong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_1;
  func_0x000107c41800();
  lVar11 = *(long *)(uVar4 + 8);
  lVar7 = lVar11;
  func_0x000107c4080c();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      lVar11 = *(long *)(param_1 + 0x18);
      func_0x000107c3dbc0();
      func_0x000107c61170(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar7 = lVar11;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(lVar11);
          }
          func_0x00010029a5f8(*(undefined8 *)(lVar10 * 8));
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
        lVar7 = lVar11;
        func_0x000107c4080c();
      }
      func_0x000107c61170(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
      lVar7 = *(long *)(param_1 + 8);
      func_0x000107c61170();
      *(undefined8 *)(param_1 + 8) = 0;
      if (param_3 != 0) {
        lVar7 = *(long *)(param_1 + 0x40);
        func_0x000107c60ee4(lVar7,*(undefined4 *)(uVar4 + 0x18));
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      func_0x000107c60e78();
      if (*(long *)(lVar7 + 0x18) != 0) {
        *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        func_0x000107c61128(lVar11);
      }
      lVar13 = *(long *)(lVar10 * 8);
      lVar9 = *(long *)(lVar13 + 8);
      if ((*(ushort *)(lVar9 + 0x1c) & 0xf02) == 0) {
        if (*(byte *)(lVar9 + 0x1e) - 0xf < 2) {
          func_0x00010029a58c(param_1,lVar13);
          if (*(long *)(param_1 + 0x40) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(ulong *)(*(long *)(param_1 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar13 + 8) + 0x18));
          }
          goto LAB_10010e08c;
        }
        if (*(byte *)(lVar9 + 0x1e) - 0xd < 4) {
          uVar1 = *(uint *)(lVar9 + 0x14);
          if ((int)uVar1 < 0) {
            if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar1 * 4) == *(int *)(lVar9 + 0x10))
            goto LAB_10010e07c;
          }
          else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar1 >> 5) * 4) >>
                    (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_10010e07c:
            uVar12 = param_1;
            FUN_10010e990(param_1,lVar13);
            goto LAB_10010e08c;
          }
        }
      }
      else {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (uVar12 = *(ulong *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)),
           uVar12 == 0)) goto LAB_10010e094;
        lVar9 = lVar13;
        func_0x000107c433d8();
        uVar6 = uVar12;
        if ((int)lVar9 == 1) {
          if (3 < *(byte *)(*(long *)(lVar13 + 8) + 0x1e) - 0xd) {
LAB_10010e048:
            if (*(ulong *)(uVar12 + 8) == param_1) {
              *(undefined8 *)(uVar12 + 8) = 0;
            }
            goto LAB_10010e08c;
          }
          puVar5 = PTR_PTR_1126e3228;
          func_0x000107c61158(PTR_PTR_1126e3228);
          func_0x000107c6115c(uVar12,puVar5);
          iVar2 = _DAT_112796b30;
        }
        else {
          lVar9 = lVar13;
          func_0x000107c4c354();
          if (((int)lVar9 != 0xe) || (3 < *(byte *)(*(long *)(lVar13 + 8) + 0x1e) - 0xd))
          goto LAB_10010e048;
          puVar5 = PTR_PTR_1126e3230;
          func_0x000107c61158(PTR_PTR_1126e3230);
          func_0x000107c6115c(uVar12,puVar5);
          iVar2 = _DAT_112796db0;
        }
        if (((uVar6 & 1) != 0) && (*(ulong *)(uVar12 + (long)iVar2) == param_1)) {
          *(undefined8 *)(uVar12 + (long)iVar2) = 0;
        }
LAB_10010e08c:
        func_0x000107c61170(uVar12);
      }
LAB_10010e094:
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = lVar11;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10010e1c0; end: 10010e1e3;  */

void FUN_10010e1c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10010e1e4; end: 10010e3bb; -[SCConfigMetricLoggerImpl logSingleReadConfig:results:durationMs:cacheHit:] */

/* WARNING: Possible PIC construction at 0x00010010e250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010010e398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010010e38c) */
/* WARNING: Removing unreachable block (ram,0x00010010e34c) */
/* WARNING: Removing unreachable block (ram,0x00010010e320) */
/* WARNING: Removing unreachable block (ram,0x00010010e2f4) */
/* WARNING: Removing unreachable block (ram,0x00010010e280) */
/* WARNING: Removing unreachable block (ram,0x00010010e2b0) */
/* WARNING: Removing unreachable block (ram,0x00010010e2bc) */
/* WARNING: Removing unreachable block (ram,0x00010010e284) */
/* WARNING: Removing unreachable block (ram,0x00010010e254) */
/* WARNING: Removing unreachable block (ram,0x00010010e39c) */

void FUN_10010e1e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c40808();
  if (lVar1 != 0) {
    param_4 = *(long *)(param_1 + 8);
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    func_0x000107c3fcdc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10010e3bc; end: 10010e3cb; -[SCConfigMetricGraphene2 cofCacheHit:] */

void FUN_10010e3bc(double param_1,long param_2,undefined8 param_3,undefined1 *param_4,uint param_5)

{
  char *pcVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lVar2 = *(long *)(param_2 + 8);
  puVar4 = (undefined1 *)0x1;
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (lVar2 != 0) {
    ppuVar3 = *(undefined1 ***)(lVar2 + 8);
    (**(code **)(*ppuVar3 + 0x28))(ppuVar3,&UNK_110879b38);
    unaff_x21 = (undefined8 *)param_4;
    if ((int)ppuVar3 != 0) {
      plVar6 = *(long **)(lVar2 + 8);
      pcVar1 = "true";
      if ((int)param_4 == 0) {
        pcVar1 = "false";
      }
      FUN_10002b838(appuStack_50,pcVar1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_10007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      param_5 = 100;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110879b38,&uStack_70,100);
      ppuVar3 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      FUN_10007e5dc();
      puVar4 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar3 = appuStack_50[0];
        func_0x000107c60e14();
        puVar4 = (undefined1 *)puVar5;
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)unaff_x21;
  FUN_10007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    func_0x000107c60e14(appuStack_50[0]);
  }
  func_0x000107c60bd8();
  func_0x000107c61174(puVar4);
  FUN_10010e59c(ppuVar3[4],puVar4,0,param_5 ^ 1,(long)param_1);
  FUN_10010e7d8(ppuVar3[4],0,param_5 ^ 1,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10010e3cc; end: 10010e50b;  */

void FUN_10010e3cc(double param_1,long param_2,undefined1 *param_3,undefined1 *param_4,uint param_5)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar3 = param_4;
  if (param_2 != 0) {
    ppuVar2 = *(undefined1 ***)(param_2 + 8);
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2,&UNK_110879b38);
    unaff_x21 = (undefined8 *)param_3;
    if ((int)ppuVar2 != 0) {
      plVar6 = *(long **)(param_2 + 8);
      pcVar1 = "true";
      if ((int)param_3 == 0) {
        pcVar1 = "false";
      }
      FUN_10002b838(appuStack_50,pcVar1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_10007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      lVar5 = (long)param_4 * 100;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110879b38,&uStack_70,lVar5);
      param_5 = (uint)lVar5;
      ppuVar2 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      FUN_10007e5dc();
      puVar3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar2 = appuStack_50[0];
        func_0x000107c60e14();
        puVar3 = (undefined1 *)puVar4;
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)unaff_x21;
  FUN_10007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    func_0x000107c60e14(appuStack_50[0]);
  }
  func_0x000107c60bd8();
  func_0x000107c61174(puVar3);
  FUN_10010e59c(ppuVar2[4],puVar3,0,param_5 ^ 1,(long)param_1);
  FUN_10010e7d8(ppuVar2[4],0,param_5 ^ 1,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10010e50c; end: 10010e59b; -[SCConfigMetricGraphene2 cofGetSingleConfig:uncachedOnly:durationMs:] */

void FUN_10010e50c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  func_0x000107c61174(param_4);
  FUN_10010e59c(*(undefined8 *)(param_2 + 0x20),param_4,0,param_5 ^ 1,(long)param_1);
  FUN_10010e7d8(*(undefined8 *)(param_2 + 0x20),0,param_5 ^ 1,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10010e59c; end: 10010e7d7;  */

undefined8 **
FUN_10010e59c(undefined8 *param_1,undefined8 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [24];
  long alStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar13 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_2;
  puVar12 = param_3;
  puVar11 = (undefined1 *)param_4;
  func_0x000107c61174(param_2);
  if (param_1 != (undefined8 *)0x0) {
    plVar4 = (long *)param_1[1];
    ppuVar10 = (undefined8 **)&UNK_11087afa8;
    (**(code **)(*plVar4 + 0x28))();
    if ((int)plVar4 != 0) {
      plVar4 = (long *)param_1[1];
      func_0x000107c61174(param_2);
      if (param_2 == (undefined8 **)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_a0,pcVar5);
      pcVar5 = "true";
      if ((int)param_3 == 0) {
        pcVar5 = "false";
      }
      FUN_10002b838(auStack_88,pcVar5);
      param_3 = auStack_a0;
      unaff_x24 = auStack_70;
      pcVar5 = "true";
      if ((int)param_4 == 0) {
        pcVar5 = "false";
      }
      FUN_10002b838(unaff_x24,pcVar5);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_10007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      ppuVar10 = (undefined8 **)&UNK_11087afa8;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11087afa8,&uStack_c0,param_5);
      puStack_a8 = (undefined1 *)&uStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar14 = 0;
      param_1 = auStack_a0;
      puVar12 = puVar13;
      puVar11 = param_5;
      do {
        if ((&cStack_59)[lVar14] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        param_4 = &uStack_c0;
      } while (lVar14 != -0x48);
    }
  }
  ppuVar6 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar6;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  ppuVar7 = ppuVar6;
  func_0x000107c60bd8();
  pcStack_c8 = FUN_10010e7d8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined8 **)0x0;
  ppuVar9 = ppuVar10;
  puStack_100 = unaff_x24;
  puStack_f8 = param_3;
  puStack_f0 = (undefined1 *)param_4;
  puStack_e8 = param_1;
  ppuStack_e0 = ppuVar6;
  ppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (ppuVar7 != (undefined8 **)0x0) {
    ppuVar8 = (undefined8 **)ppuVar7[1];
    ppuVar9 = (undefined8 **)&UNK_11087aff8;
    (*(code *)(*ppuVar8)[5])();
    param_1 = puVar12;
    if ((int)ppuVar8 != 0) {
      plVar4 = ppuVar7[1];
      pcVar5 = "true";
      if ((int)ppuVar10 == 0) {
        pcVar5 = "false";
      }
      FUN_10002b838(auStack_138,pcVar5);
      pcVar5 = "true";
      if ((int)puVar12 == 0) {
        pcVar5 = "false";
      }
      FUN_10002b838(alStack_120,pcVar5);
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      FUN_10007e1e8(&uStack_158,auStack_138,&lStack_108,2);
      ppuVar9 = (undefined8 **)&UNK_11087aff8;
      param_1 = &uStack_158;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11087aff8,&uStack_158,puVar11);
      ppuVar8 = &puStack_140;
      puStack_140 = param_1;
      FUN_10007e5dc();
      lVar14 = 0;
      do {
        if ((&cStack_109)[lVar14] < '\0') {
          ppuVar8 = *(undefined8 ***)((long)alStack_120 + lVar14);
          func_0x000107c60e14();
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return ppuVar8;
  }
  func_0x000107c60e78();
  puStack_140 = param_1;
  FUN_10007e5dc(&puStack_140);
  lVar14 = -0x30;
  pcVar5 = &cStack_109;
  do {
    if (*pcVar5 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar14 = lVar14 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar14 != 0);
  func_0x000107c60bd8();
  ppuVar10 = (undefined8 **)ppuVar8[4];
  puVar12 = ppuVar10[1];
  if (*(byte *)((long)puVar12 + 0x1e) - 0xf < 2) {
    plVar4 = (long *)((long)ppuVar9[8] + (ulong)*(uint *)(puVar12 + 3));
    if ((undefined8 **)*plVar4 != (undefined8 **)0x0) {
      return (undefined8 **)*plVar4;
    }
    ppuVar6 = ppuVar10;
    func_0x000107c4d160();
    func_0x000107c610fc();
    ppuVar6[4] = ppuVar9;
    func_0x000107c61174();
    ppuVar6[5] = ppuVar10;
    do {
      ppuVar10 = (undefined8 **)*plVar4;
      if (ppuVar10 != (undefined8 **)0x0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(ppuVar6);
        func_0x000107c61170(ppuVar6);
        return ppuVar10;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = (long)ppuVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return ppuVar6;
  }
  uVar1 = *(uint *)((long)puVar12 + 0x14);
  if ((int)uVar1 < 0) {
    puVar13 = ppuVar9[8];
    if (*(int *)((long)puVar13 + (ulong)-uVar1 * 4) != *(int *)(puVar12 + 2)) goto LAB_10010ea4c;
  }
  else {
    puVar13 = ppuVar9[8];
    if ((*(uint *)((long)puVar13 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(ppuVar10);
      return ppuVar10;
    }
  }
  return *(undefined8 ***)((long)puVar13 + (ulong)*(uint *)(puVar12 + 3));
}



/* Entry: 10010e7d8; end: 10010e97f;  */

undefined8 ** FUN_10010e7d8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x21;
  char *pcVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined8 **)0x0;
  puVar6 = param_2;
  if (param_1 != 0) {
    ppuVar4 = *(undefined8 ***)(param_1 + 8);
    puVar6 = (undefined8 *)&UNK_11087aff8;
    (*(code *)(*ppuVar4)[5])();
    unaff_x21 = param_3;
    if ((int)ppuVar4 != 0) {
      plVar9 = *(long **)(param_1 + 8);
      pcVar10 = "true";
      if ((int)param_2 == 0) {
        pcVar10 = "false";
      }
      FUN_10002b838(auStack_78,pcVar10);
      pcVar10 = "true";
      if ((int)param_3 == 0) {
        pcVar10 = "false";
      }
      FUN_10002b838(alStack_60,pcVar10);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar6 = (undefined8 *)&UNK_11087aff8;
      unaff_x21 = &uStack_98;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087aff8,&uStack_98,param_4);
      ppuVar4 = &puStack_80;
      puStack_80 = unaff_x21;
      FUN_10007e5dc();
      lVar8 = 0;
      do {
        if ((&cStack_49)[lVar8] < '\0') {
          ppuVar4 = *(undefined8 ***)((long)alStack_60 + lVar8);
          func_0x000107c60e14();
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar4;
  }
  func_0x000107c60e78();
  puStack_80 = unaff_x21;
  FUN_10007e5dc(&puStack_80);
  lVar8 = -0x30;
  pcVar10 = &cStack_49;
  do {
    if (*pcVar10 < '\0') {
      func_0x000107c60e14(*(undefined8 *)(pcVar10 + -0x17));
    }
    lVar8 = lVar8 + 0x18;
    pcVar10 = pcVar10 + -0x18;
  } while (lVar8 != 0);
  func_0x000107c60bd8();
  ppuVar4 = (undefined8 **)ppuVar4[4];
  puVar7 = ppuVar4[1];
  if (*(byte *)((long)puVar7 + 0x1e) - 0xf < 2) {
    plVar9 = (long *)(puVar6[8] + (ulong)*(uint *)(puVar7 + 3));
    if ((undefined8 **)*plVar9 != (undefined8 **)0x0) {
      return (undefined8 **)*plVar9;
    }
    ppuVar5 = ppuVar4;
    func_0x000107c4d160();
    func_0x000107c610fc();
    ppuVar5[4] = puVar6;
    func_0x000107c61174();
    ppuVar5[5] = ppuVar4;
    do {
      ppuVar4 = (undefined8 **)*plVar9;
      if (ppuVar4 != (undefined8 **)0x0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(ppuVar5);
        func_0x000107c61170(ppuVar5);
        return ppuVar4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = (long)ppuVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return ppuVar5;
  }
  uVar1 = *(uint *)((long)puVar7 + 0x14);
  if ((int)uVar1 < 0) {
    lVar8 = puVar6[8];
    if (*(int *)(lVar8 + (ulong)-uVar1 * 4) != *(int *)(puVar7 + 2)) goto LAB_10010ea4c;
  }
  else {
    lVar8 = puVar6[8];
    if ((*(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(ppuVar4);
      return ppuVar4;
    }
  }
  return *(undefined8 ***)(lVar8 + (ulong)*(uint *)(puVar7 + 3));
}



/* Entry: 10010e980; end: 10010e98f;  */

long FUN_10010e980(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar5 + 8);
  if (*(byte *)(lVar6 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(lVar6 + 0x18));
    if (*plVar1 != 0) {
      return *plVar1;
    }
    lVar6 = lVar5;
    func_0x000107c4d160();
    func_0x000107c610fc();
    *(long *)(lVar6 + 0x20) = param_2;
    func_0x000107c61174();
    *(long *)(lVar6 + 0x28) = lVar5;
    do {
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(lVar6);
        func_0x000107c61170(lVar6);
        return lVar5;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return lVar6;
  }
  uVar2 = *(uint *)(lVar6 + 0x14);
  if ((int)uVar2 < 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar7 + (ulong)-uVar2 * 4) != *(int *)(lVar6 + 0x10)) goto LAB_10010ea4c;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar7 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(lVar5);
      return lVar5;
    }
  }
  return *(long *)(lVar7 + (ulong)*(uint *)(lVar6 + 0x18));
}



/* Entry: 10010e990; end: 10010ea8f;  */

long FUN_10010e990(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 8);
  if (*(byte *)(lVar5 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
    if (*plVar1 != 0) {
      return *plVar1;
    }
    lVar5 = param_2;
    func_0x000107c4d160();
    func_0x000107c610fc();
    *(long *)(lVar5 + 0x20) = param_1;
    func_0x000107c61174();
    *(long *)(lVar5 + 0x28) = param_2;
    do {
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(lVar5);
        func_0x000107c61170(lVar5);
        return lVar6;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return lVar5;
  }
  uVar2 = *(uint *)(lVar5 + 0x14);
  if ((int)uVar2 < 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar6 + (ulong)-uVar2 * 4) != *(int *)(lVar5 + 0x10)) goto LAB_10010ea4c;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar6 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(param_2);
      return param_2;
    }
  }
  return *(long *)(lVar6 + (ulong)*(uint *)(lVar5 + 0x18));
}



/* Entry: 10010ea90; end: 10010ea9f; -[SCConfigMetricGraphene2 startupCOFConfigReadSize:isCacheHit:size:] */

/* WARNING: Removing unreachable block (ram,0x00010010f0dc) */

void FUN_10010ea90(double param_1,long param_2,undefined8 param_3,char *param_4,int param_5,
                  undefined1 *param_6)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  char *pcVar11;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x20);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  puVar9 = param_6;
  puVar7 = param_6;
  func_0x000107c61174(param_4);
  iVar6 = (int)puVar9;
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    pcVar2 = "true";
    if (param_5 == 0) {
      pcVar2 = "false";
    }
    FUN_10002b838(auStack_78,pcVar2);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar2 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    FUN_10002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b048);
    pcStack_80 = acStack_98;
    FUN_10007e5dc(&pcStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      iVar6 = (int)param_6;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  pcVar3 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_4);
  func_0x000107c60bd8();
  lVar1 = *(long *)(pcVar3 + 0x20);
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar2;
  pcVar11 = puVar7;
  puVar9 = puVar7;
  func_0x000107c61174(pcVar2);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_11087b098);
    if ((int)plVar10 != 0) {
      plVar10 = *(long **)(lVar1 + 8);
      pcVar3 = "true";
      if (iVar6 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_118,pcVar3);
      func_0x000107c61174(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        func_0x000107c61178(pcVar2);
        pcVar3 = pcVar2;
        func_0x000107c3ac4c(pcVar2);
      }
      func_0x000107c61170(pcVar2);
      FUN_10002b838(auStack_100,pcVar3);
      acStack_138[0] = '\0';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      acStack_138[8] = '\0';
      acStack_138[9] = '\0';
      acStack_138[10] = '\0';
      acStack_138[0xb] = '\0';
      acStack_138[0xc] = '\0';
      acStack_138[0xd] = '\0';
      acStack_138[0xe] = '\0';
      acStack_138[0xf] = '\0';
      acStack_138[0x10] = '\0';
      acStack_138[0x11] = '\0';
      acStack_138[0x12] = '\0';
      acStack_138[0x13] = '\0';
      acStack_138[0x14] = '\0';
      acStack_138[0x15] = '\0';
      acStack_138[0x16] = '\0';
      acStack_138[0x17] = '\0';
      FUN_10007e1e8(acStack_138,auStack_118,&lStack_e8,2);
      pcVar3 = acStack_138;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b098);
      pcStack_120 = acStack_138;
      FUN_10007e5dc(&pcStack_120);
      lVar1 = 0;
      pcVar11 = puVar7;
      do {
        if ((&cStack_e9)[lVar1] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_100 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  pcVar4 = pcVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    func_0x000107c60e78();
    func_0x000107c61170(pcVar2);
    if (cStack_101 < '\0') {
      func_0x000107c60e14(auStack_118[0]);
    }
    func_0x000107c61170(pcVar2);
    func_0x000107c60bd8();
    puVar8 = (undefined1 *)(long)(param_1 * 10000.0);
    lVar1 = *(long *)(pcVar4 + 0x20);
    pcVar4 = acStack_200;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar3;
    puVar7 = puVar9;
    func_0x000107c61174(pcVar3);
    if (lVar1 != 0) {
      plVar10 = *(long **)(lVar1 + 8);
      (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_11087b0e8);
      if ((int)plVar10 != 0) {
        plVar10 = *(long **)(lVar1 + 8);
        pcVar2 = "true";
        if ((int)pcVar11 == 0) {
          pcVar2 = "false";
        }
        FUN_10002b838(auStack_1e0,pcVar2);
        func_0x000107c61174(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          func_0x000107c61178(pcVar3);
          pcVar2 = pcVar3;
          func_0x000107c3ac4c(pcVar3);
        }
        func_0x000107c61170(pcVar3);
        FUN_10002b838(auStack_1c8,pcVar2);
        pcVar2 = "true";
        if ((int)puVar9 == 0) {
          pcVar2 = "false";
        }
        FUN_10002b838(auStack_1b0,pcVar2);
        acStack_200[0] = '\0';
        acStack_200[1] = '\0';
        acStack_200[2] = '\0';
        acStack_200[3] = '\0';
        acStack_200[4] = '\0';
        acStack_200[5] = '\0';
        acStack_200[6] = '\0';
        acStack_200[7] = '\0';
        acStack_200[8] = '\0';
        acStack_200[9] = '\0';
        acStack_200[10] = '\0';
        acStack_200[0xb] = '\0';
        acStack_200[0xc] = '\0';
        acStack_200[0xd] = '\0';
        acStack_200[0xe] = '\0';
        acStack_200[0xf] = '\0';
        acStack_200[0x10] = '\0';
        acStack_200[0x11] = '\0';
        acStack_200[0x12] = '\0';
        acStack_200[0x13] = '\0';
        acStack_200[0x14] = '\0';
        acStack_200[0x15] = '\0';
        acStack_200[0x16] = '\0';
        acStack_200[0x17] = '\0';
        FUN_10007e1e8(acStack_200,auStack_1e0,&lStack_198,3);
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b0e8,acStack_200);
        puStack_1e8 = acStack_200;
        FUN_10007e5dc(&puStack_1e8);
        lVar1 = 0;
        pcVar2 = pcVar4;
        puVar7 = puVar8;
        do {
          if ((&cStack_199)[lVar1] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_1b0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
          pcVar11 = acStack_200;
        } while (lVar1 != -0x48);
      }
    }
    pcVar4 = pcVar3;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      func_0x000107c60e78();
      func_0x000107c61170(pcVar3);
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != auStack_1e0);
      func_0x000107c61170(pcVar3);
      func_0x000107c60bd8();
      if (puVar7 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        func_0x000107c61174(puVar7);
        func_0x000107c61174(pcVar2);
        func_0x000107c40808(puVar7);
        uVar5 = *(undefined8 *)(pcVar4 + 8);
        func_0x000107c5c734(uVar5);
        func_0x000107c61180();
        func_0x000107c3fd00();
        func_0x000107c61170(uVar5);
        uVar5 = *(undefined8 *)(pcVar4 + 8);
        func_0x000107c5c734(uVar5);
        func_0x000107c61180();
        func_0x000107c3fd04();
        func_0x000107c61170(pcVar2);
        func_0x000107c61170(uVar5);
        puVar9 = puVar7;
        func_0x000107c5b5c0(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10010eaa0; end: 10010ec8b;  */

/* WARNING: Removing unreachable block (ram,0x00010010f0dc) */

void FUN_10010eaa0(double param_1,long param_2,int param_3,char *param_4,undefined8 param_5,
                  undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  char *pcVar11;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  iVar5 = (int)param_5;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  func_0x000107c61174(param_4);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    FUN_10002b838(auStack_78,pcVar1);
    func_0x000107c61174(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      func_0x000107c61178(param_4);
      pcVar1 = param_4;
      func_0x000107c3ac4c(param_4);
    }
    func_0x000107c61170(param_4);
    FUN_10002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b048);
    pcStack_80 = acStack_98;
    FUN_10007e5dc(&pcStack_80);
    lVar8 = 0;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      iVar5 = (int)param_5;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar2 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_4);
  func_0x000107c60bd8();
  lVar8 = *(long *)(pcVar2 + 0x20);
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar1;
  pcVar11 = param_6;
  puVar9 = param_6;
  func_0x000107c61174(pcVar1);
  if (lVar8 != 0) {
    plVar10 = *(long **)(lVar8 + 8);
    (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_11087b098);
    if ((int)plVar10 != 0) {
      plVar10 = *(long **)(lVar8 + 8);
      pcVar2 = "true";
      if (iVar5 == 0) {
        pcVar2 = "false";
      }
      FUN_10002b838(auStack_118,pcVar2);
      func_0x000107c61174(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        func_0x000107c61178(pcVar1);
        pcVar2 = pcVar1;
        func_0x000107c3ac4c(pcVar1);
      }
      func_0x000107c61170(pcVar1);
      FUN_10002b838(auStack_100,pcVar2);
      acStack_138[0] = '\0';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      acStack_138[8] = '\0';
      acStack_138[9] = '\0';
      acStack_138[10] = '\0';
      acStack_138[0xb] = '\0';
      acStack_138[0xc] = '\0';
      acStack_138[0xd] = '\0';
      acStack_138[0xe] = '\0';
      acStack_138[0xf] = '\0';
      acStack_138[0x10] = '\0';
      acStack_138[0x11] = '\0';
      acStack_138[0x12] = '\0';
      acStack_138[0x13] = '\0';
      acStack_138[0x14] = '\0';
      acStack_138[0x15] = '\0';
      acStack_138[0x16] = '\0';
      acStack_138[0x17] = '\0';
      FUN_10007e1e8(acStack_138,auStack_118,&lStack_e8,2);
      pcVar2 = acStack_138;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b098);
      pcStack_120 = acStack_138;
      FUN_10007e5dc(&pcStack_120);
      lVar8 = 0;
      pcVar11 = param_6;
      do {
        if ((&cStack_e9)[lVar8] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_100 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  pcVar3 = pcVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    func_0x000107c60e78();
    func_0x000107c61170(pcVar1);
    if (cStack_101 < '\0') {
      func_0x000107c60e14(auStack_118[0]);
    }
    func_0x000107c61170(pcVar1);
    func_0x000107c60bd8();
    puVar7 = (undefined1 *)(long)(param_1 * 10000.0);
    lVar8 = *(long *)(pcVar3 + 0x20);
    pcVar3 = acStack_200;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar2;
    puVar6 = puVar9;
    func_0x000107c61174(pcVar2);
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 8);
      (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_11087b0e8);
      if ((int)plVar10 != 0) {
        plVar10 = *(long **)(lVar8 + 8);
        pcVar1 = "true";
        if ((int)pcVar11 == 0) {
          pcVar1 = "false";
        }
        FUN_10002b838(auStack_1e0,pcVar1);
        func_0x000107c61174(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          func_0x000107c61178(pcVar2);
          pcVar1 = pcVar2;
          func_0x000107c3ac4c(pcVar2);
        }
        func_0x000107c61170(pcVar2);
        FUN_10002b838(auStack_1c8,pcVar1);
        pcVar1 = "true";
        if ((int)puVar9 == 0) {
          pcVar1 = "false";
        }
        FUN_10002b838(auStack_1b0,pcVar1);
        acStack_200[0] = '\0';
        acStack_200[1] = '\0';
        acStack_200[2] = '\0';
        acStack_200[3] = '\0';
        acStack_200[4] = '\0';
        acStack_200[5] = '\0';
        acStack_200[6] = '\0';
        acStack_200[7] = '\0';
        acStack_200[8] = '\0';
        acStack_200[9] = '\0';
        acStack_200[10] = '\0';
        acStack_200[0xb] = '\0';
        acStack_200[0xc] = '\0';
        acStack_200[0xd] = '\0';
        acStack_200[0xe] = '\0';
        acStack_200[0xf] = '\0';
        acStack_200[0x10] = '\0';
        acStack_200[0x11] = '\0';
        acStack_200[0x12] = '\0';
        acStack_200[0x13] = '\0';
        acStack_200[0x14] = '\0';
        acStack_200[0x15] = '\0';
        acStack_200[0x16] = '\0';
        acStack_200[0x17] = '\0';
        FUN_10007e1e8(acStack_200,auStack_1e0,&lStack_198,3);
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b0e8,acStack_200);
        puStack_1e8 = acStack_200;
        FUN_10007e5dc(&puStack_1e8);
        lVar8 = 0;
        pcVar1 = pcVar3;
        puVar6 = puVar7;
        do {
          if ((&cStack_199)[lVar8] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_1b0 + lVar8));
          }
          lVar8 = lVar8 + -0x18;
          pcVar11 = acStack_200;
        } while (lVar8 != -0x48);
      }
    }
    pcVar3 = pcVar2;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      func_0x000107c60e78();
      func_0x000107c61170(pcVar2);
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != auStack_1e0);
      func_0x000107c61170(pcVar2);
      func_0x000107c60bd8();
      if (puVar6 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        func_0x000107c61174(puVar6);
        func_0x000107c61174(pcVar1);
        func_0x000107c40808(puVar6);
        uVar4 = *(undefined8 *)(pcVar3 + 8);
        func_0x000107c5c734(uVar4);
        func_0x000107c61180();
        func_0x000107c3fd00();
        func_0x000107c61170(uVar4);
        uVar4 = *(undefined8 *)(pcVar3 + 8);
        func_0x000107c5c734(uVar4);
        func_0x000107c61180();
        func_0x000107c3fd04();
        func_0x000107c61170(pcVar1);
        func_0x000107c61170(uVar4);
        puVar9 = puVar6;
        func_0x000107c5b5c0(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10010ec8c; end: 10010ec9b; -[SCConfigMetricGraphene2 startupCOFConfigReadRuleCount:isCacheHit:count:] */

/* WARNING: Removing unreachable block (ram,0x00010010f0dc) */

void FUN_10010ec8c(double param_1,long param_2,undefined8 param_3,char *param_4,int param_5,
                  undefined1 *param_6)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x20);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_4;
  pcVar10 = param_6;
  puVar9 = param_6;
  func_0x000107c61174(param_4);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087b098);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      pcVar3 = "true";
      if (param_5 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_78,pcVar3);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar3 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_60,pcVar3);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
      pcVar3 = acStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087b098);
      pcStack_80 = acStack_98;
      FUN_10007e5dc(&pcStack_80);
      lVar1 = 0;
      pcVar10 = param_6;
      do {
        if ((&cStack_49)[lVar1] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  pcVar4 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    if (cStack_61 < '\0') {
      func_0x000107c60e14(auStack_78[0]);
    }
    func_0x000107c61170(param_4);
    func_0x000107c60bd8();
    puVar8 = (undefined1 *)(long)(param_1 * 10000.0);
    lVar1 = *(long *)(pcVar4 + 0x20);
    pcVar5 = acStack_160;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar3;
    puVar7 = puVar9;
    func_0x000107c61174(pcVar3);
    if (lVar1 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087b0e8);
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(lVar1 + 8);
        pcVar4 = "true";
        if ((int)pcVar10 == 0) {
          pcVar4 = "false";
        }
        FUN_10002b838(auStack_140,pcVar4);
        func_0x000107c61174(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar10 = "";
        }
        else {
          func_0x000107c61178(pcVar3);
          pcVar10 = pcVar3;
          func_0x000107c3ac4c(pcVar3);
        }
        func_0x000107c61170(pcVar3);
        FUN_10002b838(auStack_128,pcVar10);
        pcVar10 = "true";
        if ((int)puVar9 == 0) {
          pcVar10 = "false";
        }
        FUN_10002b838(auStack_110,pcVar10);
        acStack_160[0] = '\0';
        acStack_160[1] = '\0';
        acStack_160[2] = '\0';
        acStack_160[3] = '\0';
        acStack_160[4] = '\0';
        acStack_160[5] = '\0';
        acStack_160[6] = '\0';
        acStack_160[7] = '\0';
        acStack_160[8] = '\0';
        acStack_160[9] = '\0';
        acStack_160[10] = '\0';
        acStack_160[0xb] = '\0';
        acStack_160[0xc] = '\0';
        acStack_160[0xd] = '\0';
        acStack_160[0xe] = '\0';
        acStack_160[0xf] = '\0';
        acStack_160[0x10] = '\0';
        acStack_160[0x11] = '\0';
        acStack_160[0x12] = '\0';
        acStack_160[0x13] = '\0';
        acStack_160[0x14] = '\0';
        acStack_160[0x15] = '\0';
        acStack_160[0x16] = '\0';
        acStack_160[0x17] = '\0';
        FUN_10007e1e8(acStack_160,auStack_140,&lStack_f8,3);
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087b0e8,acStack_160);
        puStack_148 = acStack_160;
        FUN_10007e5dc(&puStack_148);
        lVar1 = 0;
        pcVar4 = pcVar5;
        puVar7 = puVar8;
        do {
          if ((&cStack_f9)[lVar1] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_110 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
          pcVar10 = acStack_160;
        } while (lVar1 != -0x48);
      }
    }
    pcVar5 = pcVar3;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      func_0x000107c60e78();
      func_0x000107c61170(pcVar3);
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != auStack_140);
      func_0x000107c61170(pcVar3);
      func_0x000107c60bd8();
      if (puVar7 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        func_0x000107c61174(puVar7);
        func_0x000107c61174(pcVar4);
        func_0x000107c40808(puVar7);
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        func_0x000107c5c734(uVar6);
        func_0x000107c61180();
        func_0x000107c3fd00();
        func_0x000107c61170(uVar6);
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        func_0x000107c5c734(uVar6);
        func_0x000107c61180();
        func_0x000107c3fd04();
        func_0x000107c61170(pcVar4);
        func_0x000107c61170(uVar6);
        puVar9 = puVar7;
        func_0x000107c5b5c0(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10010ec9c; end: 10010eea7;  */

/* WARNING: Removing unreachable block (ram,0x00010010f0dc) */

void FUN_10010ec9c(double param_1,long param_2,int param_3,char *param_4,undefined1 *param_5,
                  long param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  pcVar9 = param_5;
  func_0x000107c61174(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087b098);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      pcVar2 = "true";
      if (param_3 == 0) {
        pcVar2 = "false";
      }
      FUN_10002b838(auStack_78,pcVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_60,pcVar2);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
      pcVar2 = acStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087b098);
      pcStack_80 = acStack_98;
      FUN_10007e5dc(&pcStack_80);
      lVar8 = 0;
      pcVar9 = param_5;
      do {
        if ((&cStack_49)[lVar8] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  pcVar3 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    if (cStack_61 < '\0') {
      func_0x000107c60e14(auStack_78[0]);
    }
    func_0x000107c61170(param_4);
    func_0x000107c60bd8();
    lVar7 = (long)(param_1 * 10000.0);
    lVar4 = *(long *)(pcVar3 + 0x20);
    pcVar5 = acStack_160;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar2;
    lVar8 = param_6;
    func_0x000107c61174(pcVar2);
    if (lVar4 != 0) {
      plVar1 = *(long **)(lVar4 + 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087b0e8);
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(lVar4 + 8);
        pcVar3 = "true";
        if ((int)pcVar9 == 0) {
          pcVar3 = "false";
        }
        FUN_10002b838(auStack_140,pcVar3);
        func_0x000107c61174(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          func_0x000107c61178(pcVar2);
          pcVar9 = pcVar2;
          func_0x000107c3ac4c(pcVar2);
        }
        func_0x000107c61170(pcVar2);
        FUN_10002b838(auStack_128,pcVar9);
        pcVar9 = "true";
        if ((int)param_6 == 0) {
          pcVar9 = "false";
        }
        FUN_10002b838(auStack_110,pcVar9);
        acStack_160[0] = '\0';
        acStack_160[1] = '\0';
        acStack_160[2] = '\0';
        acStack_160[3] = '\0';
        acStack_160[4] = '\0';
        acStack_160[5] = '\0';
        acStack_160[6] = '\0';
        acStack_160[7] = '\0';
        acStack_160[8] = '\0';
        acStack_160[9] = '\0';
        acStack_160[10] = '\0';
        acStack_160[0xb] = '\0';
        acStack_160[0xc] = '\0';
        acStack_160[0xd] = '\0';
        acStack_160[0xe] = '\0';
        acStack_160[0xf] = '\0';
        acStack_160[0x10] = '\0';
        acStack_160[0x11] = '\0';
        acStack_160[0x12] = '\0';
        acStack_160[0x13] = '\0';
        acStack_160[0x14] = '\0';
        acStack_160[0x15] = '\0';
        acStack_160[0x16] = '\0';
        acStack_160[0x17] = '\0';
        FUN_10007e1e8(acStack_160,auStack_140,&lStack_f8,3);
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087b0e8,acStack_160);
        puStack_148 = acStack_160;
        FUN_10007e5dc(&puStack_148);
        lVar4 = 0;
        pcVar3 = pcVar5;
        lVar8 = lVar7;
        do {
          if ((&cStack_f9)[lVar4] < '\0') {
            func_0x000107c60e14(*(undefined8 *)((long)auStack_110 + lVar4));
          }
          lVar4 = lVar4 + -0x18;
          pcVar9 = acStack_160;
        } while (lVar4 != -0x48);
      }
    }
    pcVar5 = pcVar2;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      func_0x000107c60e78();
      func_0x000107c61170(pcVar2);
      do {
        pcVar9 = pcVar9 + -0x18;
      } while (pcVar9 != auStack_140);
      func_0x000107c61170(pcVar2);
      func_0x000107c60bd8();
      if (lVar8 == 0) {
        lVar4 = 0;
      }
      else {
        func_0x000107c61174(lVar8);
        func_0x000107c61174(pcVar3);
        func_0x000107c40808(lVar8);
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        func_0x000107c5c734(uVar6);
        func_0x000107c61180();
        func_0x000107c3fd00();
        func_0x000107c61170(uVar6);
        uVar6 = *(undefined8 *)(pcVar5 + 8);
        func_0x000107c5c734(uVar6);
        func_0x000107c61180();
        func_0x000107c3fd04();
        func_0x000107c61170(pcVar3);
        func_0x000107c61170(uVar6);
        lVar4 = lVar8;
        func_0x000107c5b5c0(lVar8);
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10010eea8; end: 10010eecb; -[SCConfigMetricGraphene2 startupCOFConfigReadDurationMs:isCacheHit:isMainThread:duration:] */

/* WARNING: Removing unreachable block (ram,0x00010010f0dc) */

void FUN_10010eea8(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5,
                  long param_6)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar7 = (long)(param_1 * 10000.0);
  lVar1 = *(long *)(param_2 + 0x20);
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_4;
  lVar6 = param_6;
  func_0x000107c61174(param_4);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087b0e8);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      pcVar3 = "true";
      if ((int)param_5 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_a0,pcVar3);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar3 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,pcVar3);
      pcVar3 = "true";
      if ((int)param_6 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_70,pcVar3);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      FUN_10007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087b0e8,acStack_c0);
      puStack_a8 = acStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar1 = 0;
      pcVar3 = pcVar4;
      lVar6 = lVar7;
      do {
        if ((&cStack_59)[lVar1] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        param_5 = acStack_c0;
      } while (lVar1 != -0x48);
    }
  }
  pcVar4 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_4);
    do {
      param_5 = param_5 + -0x18;
    } while (param_5 != auStack_a0);
    func_0x000107c61170(param_4);
    func_0x000107c60bd8();
    if (lVar6 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x000107c61174(lVar6);
      func_0x000107c61174(pcVar3);
      func_0x000107c40808(lVar6);
      uVar5 = *(undefined8 *)(pcVar4 + 8);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c3fd00();
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(pcVar4 + 8);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c3fd04();
      func_0x000107c61170(pcVar3);
      func_0x000107c61170(uVar5);
      lVar1 = lVar6;
      func_0x000107c5b5c0(lVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10010eecc; end: 10010f10b;  */

/* WARNING: Removing unreachable block (ram,0x00010010f0dc) */

void FUN_10010eecc(long param_1,char *param_2,char *param_3,long param_4,long param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  lVar5 = param_4;
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087b0e8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      pcVar2 = "true";
      if ((int)param_2 == 0) {
        pcVar2 = "false";
      }
      FUN_10002b838(auStack_a0,pcVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        func_0x000107c61178(param_3);
        pcVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_88,pcVar2);
      pcVar2 = "true";
      if ((int)param_4 == 0) {
        pcVar2 = "false";
      }
      FUN_10002b838(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      FUN_10007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087b0e8,acStack_c0);
      puStack_a8 = acStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar6 = 0;
      pcVar2 = pcVar3;
      lVar5 = param_5;
      do {
        if ((&cStack_59)[lVar6] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        param_2 = acStack_c0;
      } while (lVar6 != -0x48);
    }
  }
  pcVar3 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_3);
    do {
      param_2 = param_2 + -0x18;
    } while (param_2 != auStack_a0);
    func_0x000107c61170(param_3);
    func_0x000107c60bd8();
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c61174(lVar5);
      func_0x000107c61174(pcVar2);
      func_0x000107c40808(lVar5);
      uVar4 = *(undefined8 *)(pcVar3 + 8);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      func_0x000107c3fd00();
      func_0x000107c61170(uVar4);
      uVar4 = *(undefined8 *)(pcVar3 + 8);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      func_0x000107c3fd04();
      func_0x000107c61170(pcVar2);
      func_0x000107c61170(uVar4);
      lVar6 = lVar5;
      func_0x000107c5b5c0(lVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  return;
}



/* Entry: 10010f10c; end: 10010f1eb; -[SCConfigManagerImpl _sortConfigRulesByPriority:configs:] */

void FUN_10010f10c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c40808(param_4);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c3fd00();
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c3fd04();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    lVar2 = param_4;
    func_0x000107c5b5c0(param_4,param_2,&PTR___NSConcreteGlobalBlock_11087b868);
    func_0x000107c61180();
    func_0x000107c61170(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10010f1ec; end: 10010f1ff; -[SCConfigMetricGraphene2 cofGetConfigDBHit:dbHit:] */

void FUN_10010f1ec(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  uVar6 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_4;
  func_0x000107c61174(param_3);
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = *(long **)(puVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087af08);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(puVar1 + 8);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = param_3;
        func_0x000107c61178();
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_3);
      unaff_x24 = auStack_78;
      FUN_10002b838(auStack_78,unaff_x23);
      pcVar5 = "true";
      if ((int)param_4 == 0) {
        pcVar5 = "false";
      }
      FUN_10002b838(auStack_60,pcVar5);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
      uVar6 = 1000;
      param_4 = acStack_98;
      pcVar5 = acStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087af08,pcVar5,1000);
      pcStack_80 = param_4;
      FUN_10007e5dc(&pcStack_80);
      lVar7 = 0;
      puVar1 = auStack_78;
      do {
        if ((&cStack_49)[lVar7] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
    }
  }
  pcVar3 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  pcVar4 = pcVar3;
  func_0x000107c60bd8();
  lVar7 = *(long *)(pcVar4 + 0x20);
  pcStack_a8 = FUN_10010f40c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = param_4;
  puStack_c8 = puVar1;
  pcStack_c0 = pcVar3;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(pcVar5);
  if (lVar7 != 0) {
    plVar2 = *(long **)(lVar7 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087af58);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar7 + 8);
      func_0x000107c61174(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar5;
        func_0x000107c61178(pcVar5);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(pcVar5);
      FUN_10002b838(auStack_100,pcVar3);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      FUN_10007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087af58,&uStack_120,uVar6);
      puStack_108 = (undefined1 *)&uStack_120;
      FUN_10007e5dc(&puStack_108);
      if (cStack_e9 < '\0') {
        func_0x000107c60e14(auStack_100[0]);
      }
    }
  }
  pcVar3 = pcVar5;
  func_0x000107c61170(pcVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(pcVar5);
  func_0x000107c61170(pcVar5);
  func_0x000107c60bd8(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010beb71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10010f200; end: 10010f40b;  */

void FUN_10010f200(undefined1 *param_1,char *param_2,char *param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_3;
  lVar5 = param_4;
  func_0x000107c61174(param_2);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087af08);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = param_2;
        func_0x000107c61178();
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      unaff_x24 = auStack_78;
      FUN_10002b838(auStack_78,unaff_x23);
      pcVar4 = "true";
      if ((int)param_3 == 0) {
        pcVar4 = "false";
      }
      FUN_10002b838(auStack_60,pcVar4);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      FUN_10007e1e8(acStack_98,auStack_78,&lStack_48,2);
      lVar5 = param_4 * 1000;
      param_3 = acStack_98;
      pcVar4 = acStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087af08,pcVar4,lVar5);
      pcStack_80 = param_3;
      FUN_10007e5dc(&pcStack_80);
      lVar6 = 0;
      param_1 = auStack_78;
      do {
        if ((&cStack_49)[lVar6] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x30);
    }
  }
  pcVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  pcVar3 = pcVar2;
  func_0x000107c60bd8();
  lVar6 = *(long *)(pcVar3 + 0x20);
  pcStack_a8 = FUN_10010f40c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = param_3;
  puStack_c8 = param_1;
  pcStack_c0 = pcVar2;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(pcVar4);
  if (lVar6 != 0) {
    plVar1 = *(long **)(lVar6 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087af58);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(lVar6 + 8);
      func_0x000107c61174(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar4;
        func_0x000107c61178(pcVar4);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(pcVar4);
      FUN_10002b838(auStack_100,pcVar2);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      FUN_10007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087af58,&uStack_120,lVar5);
      puStack_108 = (undefined1 *)&uStack_120;
      FUN_10007e5dc(&puStack_108);
      if (cStack_e9 < '\0') {
        func_0x000107c60e14(auStack_100[0]);
      }
    }
  }
  pcVar2 = pcVar4;
  func_0x000107c61170(pcVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(pcVar4);
  func_0x000107c61170(pcVar4);
  func_0x000107c60bd8(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beb71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10010f40c; end: 10010f41b; -[SCConfigMetricGraphene2 cofGetConfigNumberOfRulesFound:ruleCount:] */

void FUN_10010f40c(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087af58);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        func_0x000107c61178(param_3);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,pcVar3);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087af58,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  pcVar3 = param_3;
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010beb71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10010f41c; end: 10010f5af;  */

void FUN_10010f41c(long param_1,char *param_2,undefined8 param_3)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11087af58);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,pcVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087af58,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  pcVar2 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beb71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10010f5b0; end: 10010f5b3; -[SCCircumstanceEngine shouldUseForcedDefaultValueForConfigResult:] */

void FUN_10010f5b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldUseForcedDefaultValueForC_11258b620);
  return;
}



/* Entry: 10010f5b4; end: 10010f68b; -[SCCircumstanceEngine _shouldUseForcedDefaultValueForConfigResult:] */

uint FUN_10010f5b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uVar4 = 1;
  }
  else if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar6 = *(ulong *)(param_1 + 0x78);
    lVar1 = param_3;
    func_0x000107c40098(param_3);
    func_0x000107c61180();
    func_0x000107c40404(uVar6,param_2,lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar6 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      lVar2 = param_3;
      func_0x000107c4d430(param_3);
      func_0x000107c4d95c(puVar3,param_2,lVar2);
      func_0x000107c61180();
      func_0x000107c40404(uVar5,param_2,puVar3);
      uVar4 = (uint)uVar5 ^ 1;
      func_0x000107c61170(puVar3);
    }
    else {
      uVar4 = 0;
    }
    func_0x000107c61170(lVar1);
  }
  else {
    uVar4 = 0;
  }
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 10010f68c; end: 10010f693; -[SCConfigManagerImpl preloadedNamespaceKey] */

undefined8 FUN_10010f68c(void)

{
  return 0;
}



/* Entry: 10010f694; end: 10010fa83;  */

undefined *
FUN_10010f694(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_6);
  lVar11 = param_6;
  func_0x000107c4080c();
  lVar9 = lRam0000000000000000;
  if (lVar11 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          func_0x000107c61128(param_6);
        }
        puVar13 = *(undefined **)(lVar12 * 8);
        if ((int)param_2 == 0) {
LAB_10010f7c0:
          puVar5 = puVar13;
          func_0x000107c44b98();
          if ((int)puVar5 == 0) {
LAB_10010f8e0:
            func_0x000107c4ba98(param_5);
          }
          else {
            puVar5 = puVar13;
            func_0x000107c5c768();
            func_0x000107c61180();
            puVar6 = puVar5;
            FUN_10033693c();
            func_0x000107c61170(puVar5);
            if ((int)puVar6 != 0) goto LAB_10010f8e0;
            puVar5 = PTR_PTR_1126ba008;
            func_0x000107c5a9f0();
            func_0x000107c61180();
            func_0x000107c5c768(puVar13);
            func_0x000107c61180();
            func_0x000107c61170();
            puVar6 = puVar13;
            func_0x000107c5c768();
            func_0x000107c61180();
            puVar7 = puVar6;
            lVar8 = param_3;
            FUN_100336af8();
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar5);
            func_0x000107c4ba98(param_5);
            if ((int)puVar7 != 1) goto LAB_10010f8ac;
          }
          if (param_7 != 0) {
            puVar5 = puVar13;
            func_0x000107c5c218();
            func_0x000107c61180();
            puVar6 = puVar5;
            func_0x000107c4adac();
            if (puVar6 != (undefined *)0x0) {
              puVar6 = puVar13;
              func_0x000107c42bb4();
              func_0x000107c61170(puVar5);
              puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if ((int)puVar6 < 0) goto LAB_10010f9f0;
              func_0x000107c42bb4();
              func_0x000107c51804(puVar5);
              func_0x000107c61180();
              lVar9 = param_7;
              func_0x000107c5c734(param_7);
              func_0x000107c61180();
              puVar6 = puVar13;
              func_0x000107c5c218();
              func_0x000107c61180();
              func_0x000107c50960(puVar13);
              func_0x000107c4bb44(lVar9);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(lVar9);
              puVar6 = puVar13;
              func_0x000107c5c218();
              func_0x000107c61180();
              func_0x000107c4bf20(param_5);
              func_0x000107c61170(puVar6);
            }
            func_0x000107c61170(puVar5);
          }
LAB_10010f9f0:
          func_0x000107c61174(puVar13);
          goto LAB_10010fa00;
        }
        puVar5 = puVar13;
        func_0x000107c5dc0c();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c4a924();
        func_0x000107c61170(puVar5);
        if ((int)puVar6 == (int)param_2) goto LAB_10010f7c0;
        func_0x000107c4ba98(param_5);
LAB_10010f8ac:
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = param_6;
      func_0x000107c4080c();
    } while (lVar11 != 0);
    puVar13 = (undefined *)0x0;
  }
LAB_10010fa00:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  func_0x000107c60e78();
  puVar13 = *(undefined **)(param_1 + 0x20);
  lVar9 = *(long *)(puVar13 + 8);
  if (*(byte *)(lVar9 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
    if ((undefined *)*plVar1 != (undefined *)0x0) {
      return (undefined *)*plVar1;
    }
    puVar5 = puVar13;
    func_0x000107c4d160();
    func_0x000107c610fc();
    *(long *)(puVar5 + 0x20) = lVar8;
    func_0x000107c61174();
    *(undefined **)(puVar5 + 0x28) = puVar13;
    do {
      puVar13 = (undefined *)*plVar1;
      if (puVar13 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(puVar5);
        func_0x000107c61170(puVar5);
        return puVar13;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)puVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return puVar5;
  }
  uVar2 = *(uint *)(lVar9 + 0x14);
  if ((int)uVar2 < 0) {
    lVar11 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar11 + (ulong)-uVar2 * 4) != *(int *)(lVar9 + 0x10)) goto LAB_10010ea4c;
  }
  else {
    lVar11 = *(long *)(lVar8 + 0x40);
    if ((*(uint *)(lVar11 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(puVar13);
      return puVar13;
    }
  }
  return *(undefined **)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
}



/* Entry: 10010fa84; end: 10010fab3;  */

long FUN_10010fa84(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar5 + 8);
  if (*(byte *)(lVar6 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(lVar6 + 0x18));
    if (*plVar1 != 0) {
      return *plVar1;
    }
    lVar6 = lVar5;
    func_0x000107c4d160();
    func_0x000107c610fc();
    *(long *)(lVar6 + 0x20) = param_2;
    func_0x000107c61174();
    *(long *)(lVar6 + 0x28) = lVar5;
    do {
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(lVar6);
        func_0x000107c61170(lVar6);
        return lVar5;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return lVar6;
  }
  uVar2 = *(uint *)(lVar6 + 0x14);
  if ((int)uVar2 < 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar7 + (ulong)-uVar2 * 4) != *(int *)(lVar6 + 0x10)) goto LAB_10010ea4c;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar7 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(lVar5);
      return lVar5;
    }
  }
  return *(long *)(lVar7 + (ulong)*(uint *)(lVar6 + 0x18));
}



/* Entry: 10010fab4; end: 10010fc17;  */

ulong FUN_10010fab4(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x000107c4a294();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x000107c611b4(param_1);
      func_0x000107c611ec(0x1138473c0);
      lVar3 = lRam00000001138473b8;
      func_0x000107c60794(lRam00000001138473b8,uVar2);
      if (lVar3 == 0) {
        func_0x000107c6078c();
        func_0x000107c60798(lRam00000001138473b8,uVar2,lVar3);
      }
      func_0x000107c611f0(0x1138473c0);
      func_0x000107c611ec(0x1138473c4);
      lVar4 = lVar3;
      func_0x000107c60794(lVar3,param_2);
      func_0x000107c611f0(0x1138473c4);
      if (lVar4 == 0) {
        func_0x000107c401d0();
        func_0x000107c611ec(0x1138473c4);
        puVar1 = (undefined8 *)PTR__kCFBooleanTrue_11034ab90;
        if ((int)param_1 == 0) {
          puVar1 = (undefined8 *)PTR__kCFBooleanFalse_11034ab88;
        }
        func_0x000107c60798(lVar3,param_2,*puVar1);
        func_0x000107c611f0(0x1138473c4);
      }
      else {
        param_1 = (ulong)(*(long *)PTR__kCFBooleanTrue_11034ab90 == lVar4);
      }
    }
    else {
      func_0x000107c401d0(param_1);
    }
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10010fc18; end: 10010fc1b;  */

void FUN_10010fc18(void)

{
  return;
}



/* Entry: 10010fc1c; end: 10010fc2b; -[_TtC39NetworkPathMonitorServiceImplementation25NetworkPathMonitorService networkConnectivityObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010fc1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112daa568));
  return;
}



/* Entry: 10010fc2c; end: 10010fc83;  */

/* WARNING: Possible PIC construction at 0x00010010fc70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010010fc74) */

void FUN_10010fc2c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c40ef0(param_2);
    func_0x000107c4d5a8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10010fc84; end: 10010fc93; -[SCNetworkConnectivityChange currentConnectivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10010fc84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113080b18);
}



/* Entry: 10010fc94; end: 10010fd3b; -[SCNetworkConnectivityLogger networkConnectivityStatusDidChange:] */

void FUN_10010fc94(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c6071c();
  *(undefined8 *)(param_2 + 0x40) = param_1;
  puVar1 = PTR_PTR_1126dfe50;
  func_0x000107c610f4();
  func_0x000107c48be4(*(undefined8 *)(param_2 + 0x40));
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1001283e0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_2;
  puStack_38 = puVar1;
  func_0x000107c61174();
  func_0x000107c4e5e8(uVar2,param_3,&puStack_60);
  func_0x000107c61170(puStack_38);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10010fd3c; end: 10010fd6b; +[SCAPIClientLogger setConnectivityLogger:] */

void FUN_10010fd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001137f4650;
  uRam00000001137f4650 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10010fd6c; end: 10010fd77;  */

void FUN_10010fd6c(long param_1,long param_2)

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



/* Entry: 10010fd78; end: 10010fe5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010fd78(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  puVar2 = PTR_PTR_1126b7410;
  func_0x000107c61168();
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = 0;
    FUN_100110034();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined **)(lVar4 + _DAT_112d9d868) = puVar2;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar6 = (undefined1 *)plVar5;
    func_0x0001000ad7c4();
    puVar7 = puVar6;
    func_0x0001000ad7c4();
    puVar2 = PTR_PTR_1126a6e18;
    func_0x000107c610f8();
    func_0x000107c46c48();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(plVar5);
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10010fe5c);
  (*pcVar1)();
}



/* Entry: 10010fe5c; end: 10010fee3; +[SCBandwidthEstimatorExperiment shared] */

void FUN_10010fe5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10010fee4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f4450 != -1) {
    FUN_10002a2fc(0x1137f4450,&puStack_48);
  }
  uVar1 = uRam00000001137f4458;
  func_0x000107c61174(uRam00000001137f4458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10010fee4; end: 10010ff0b;  */

void FUN_10010fee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f4458;
  uRam00000001137f4458 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10010ff0c; end: 100110033; -[SCBandwidthEstimatorExperiment init] */

undefined8 * FUN_10010ff0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705f58;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar3);
    puVar1[1] = 0x3fe0000000000000;
    puVar1[0x13] = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x14] = 0xffffffffffffd8f1;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    uVar3 = puVar1[2];
    func_0x000107c61174(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c61170(puVar1);
  }
  return puVar1;
}



/* Entry: 100110034; end: 100110053;  */

void FUN_100110034(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6010);
  return;
}



/* Entry: 100110054; end: 10011008f;  */

uint FUN_100110054(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (-1 < (int)uVar1) {
    return *(uint *)(*(long *)(param_2 + 0x40) + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) &
           1;
  }
  return (uint)(*(int *)(*(long *)(param_2 + 0x40) + (ulong)-uVar1 * 4) == *(int *)(param_1 + 0x24))
  ;
}



/* Entry: 100110090; end: 10011015b; -[SCSystemNetworkServices initWithHTTPMetadataService:httpRequestModifier:appBackgroundNetworkStatsProvider:] */

undefined1 *
FUN_100110090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127064e0;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10011015c; end: 100110187;  */

void FUN_10011015c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100110188; end: 100110213; +[SCBlizzardUploadManager setNetworkServices:connectivityMonitor:] */

/* WARNING: Possible PIC construction at 0x0001001101cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001101f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001101d0) */
/* WARNING: Removing unreachable block (ram,0x0001001101f4) */

void FUN_100110188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001136c4b20;
  uRam00000001136c4b20 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100110214; end: 1001102cf; +[SCBlizzardConnectivityStateProvider sharedProvider:] */

void FUN_100110214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  lVar1 = lRam00000001136c4bc8;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1001102d0;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  uVar3 = param_3;
  if (lVar1 != -1) {
    FUN_10002a2fc(0x1136c4bc8,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar2 = uRam00000001136c4bd0;
  func_0x000107c61174(uRam00000001136c4bd0);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1001102d0; end: 10011030f;  */

void FUN_1001102d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d04f8;
  func_0x000107c610f4();
  func_0x000107c46030();
  uVar1 = puRam00000001136c4bd0;
  puRam00000001136c4bd0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100110310; end: 100110383; -[SCBlizzardConnectivityStateProvider initWithConnectivityMonitor:] */

undefined1 * FUN_100110310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4c70;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100110384; end: 1001103eb; +[SCBlizzardEventFieldProvider setConnectivityMonitor:andBandwidthEstimator:] */

/* WARNING: Possible PIC construction at 0x0001001103c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001103cc) */

void FUN_100110384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = uRam00000001136c4a98;
  uRam00000001136c4a98 = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001103ec; end: 100110487;  */

void FUN_1001103ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100110488; end: 10011048f;  */

undefined8 FUN_100110488(void)

{
  return 1;
}



/* Entry: 100110490; end: 1001104c3; -[SCApplicationState isAppInBackgroundOrTransitioning] */

undefined4 FUN_100110490(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c4d668();
  func_0x000107c49a34(param_1);
  uVar1 = (undefined4)param_1;
  if (lVar2 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1001104c4; end: 10011056b; -[SCApplicationState nextApplicationState] */

undefined8 FUN_1001104c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10011056c;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  func_0x000107c60bcc(&uStack_40,8);
  return uVar1;
}



/* Entry: 10011056c; end: 10011057f;  */

void FUN_10011056c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  return;
}



/* Entry: 100110580; end: 1001105c7; -[SCApplicationState isAppInBackground] */

bool FUN_100110580(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3dfc0();
  func_0x000107c4d668();
  return lVar1 != 0 && (param_1 != 0 && (lVar1 != 1 || param_1 != 1));
}



/* Entry: 1001105c8; end: 10011076f; -[SCConfigMetricLoggerImpl logConfigRuleEvaluated:configResult:preloadedNamespaceKey:evaluationOutcome:] */

/* WARNING: Possible PIC construction at 0x000100110624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100110740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100110750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001106c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100110700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100110738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001106c8) */
/* WARNING: Removing unreachable block (ram,0x000100110754) */
/* WARNING: Removing unreachable block (ram,0x000100110744) */
/* WARNING: Removing unreachable block (ram,0x000100110628) */
/* WARNING: Removing unreachable block (ram,0x00010011065c) */
/* WARNING: Removing unreachable block (ram,0x00010011062c) */
/* WARNING: Removing unreachable block (ram,0x00010011063c) */
/* WARNING: Removing unreachable block (ram,0x000100110664) */
/* WARNING: Removing unreachable block (ram,0x000100110690) */
/* WARNING: Removing unreachable block (ram,0x0001001106cc) */
/* WARNING: Removing unreachable block (ram,0x0001001106d4) */
/* WARNING: Removing unreachable block (ram,0x000100110694) */
/* WARNING: Removing unreachable block (ram,0x00010011066c) */
/* WARNING: Removing unreachable block (ram,0x00010011073c) */
/* WARNING: Removing unreachable block (ram,0x000100110704) */

void FUN_1001105c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c400e4(param_4);
  func_0x000107c61180();
  FUN_100110780();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100110770; end: 10011077f;  */

long FUN_100110770(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar5 + 8);
  if (*(byte *)(lVar6 + 0x1e) - 0xf < 2) {
    plVar1 = (long *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(lVar6 + 0x18));
    if (*plVar1 != 0) {
      return *plVar1;
    }
    lVar6 = lVar5;
    func_0x000107c4d160();
    func_0x000107c610fc();
    *(long *)(lVar6 + 0x20) = param_2;
    func_0x000107c61174();
    *(long *)(lVar6 + 0x28) = lVar5;
    do {
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        ClearExclusiveLocal();
        func_0x00010029a5f8(lVar6);
        func_0x000107c61170(lVar6);
        return lVar5;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return lVar6;
  }
  uVar2 = *(uint *)(lVar6 + 0x14);
  if ((int)uVar2 < 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar7 + (ulong)-uVar2 * 4) != *(int *)(lVar6 + 0x10)) goto LAB_10010ea4c;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar7 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
LAB_10010ea4c:
      func_0x000107c4163c(lVar5);
      return lVar5;
    }
  }
  return *(long *)(lVar7 + (ulong)*(uint *)(lVar6 + 0x18));
}



/* Entry: 100110780; end: 100110817;  */

void FUN_100110780(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c61178();
  func_0x000107c3eea8();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x000107c48ff4();
    puVar3 = puVar2;
    func_0x000107c3ac54();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100110818; end: 100110837;  */

void FUN_100110818(void)

{
  func_0x000107c61168(&PTR_PTR_1127db2b8);
  return;
}



/* Entry: 100110838; end: 10011083f; -[SCSystemNetworkServices httpMetadataService] */

undefined8 FUN_100110838(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100110840; end: 100110867; -[SCSystemNetworkServices httpRequestModifier] */

undefined8 FUN_100110840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100110868; end: 100110f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100110868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,long param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 unaff_x20;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c610f8();
  puVar3 = &UNK_1103ced08;
  func_0x000107c613fc(&UNK_1103ced08,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_31;
  *(undefined8 *)(puVar3 + 0x18) = param_32;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  FUN_1000285a8(0x112da9c30,&UNK_10d9511c0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_32);
  func_0x000107c61174();
  func_0x000107c615f0(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar4 = FUN_1002bf4b8;
  FUN_1000bdd8c(FUN_1002bf4b8,puVar3);
  FUN_1000285a8(0x112da9848,&UNK_10d991ca0);
  uVar5 = param_8;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9c38,&UNK_10d9511d0);
  uVar6 = param_10;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9850,&UNK_10d951040);
  uVar7 = param_13;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9c40,&UNK_10d9511e0);
  uVar8 = param_16;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9c48,&UNK_10dc15350);
  uVar9 = param_17;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9c50,&UNK_10d9511f0);
  uVar10 = param_18;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9860,&UNK_10d951050);
  uVar11 = param_19;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9c58,&UNK_10d951200);
  lVar12 = param_20;
  FUN_1000bda74();
  lVar13 = lVar12;
  FUN_100110818();
  lVar14 = lVar13;
  func_0x000107c610f8();
  *(undefined8 *)(lVar14 + _DAT_112da9c60) = 0;
  *(undefined8 *)(lVar14 + _DAT_112da9c68) = 0;
  lVar2 = _DAT_112da9c70;
  lVar15 = 0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar16 = lVar15;
  FUN_100111634();
  func_0x000107c61408(lVar15 + 0x20,6,PTR___sSSN_11034da80);
  *(long *)(lVar14 + lVar2) = lVar16;
  *(code **)(lVar14 + _DAT_112da9d00) = pcVar4;
  *(undefined8 *)(lVar14 + _DAT_112da9d08) = param_4;
  *(undefined8 *)(lVar14 + _DAT_112da9d10) = param_5;
  *(undefined8 *)(lVar14 + _DAT_112da9d18) = param_6;
  *(undefined8 *)(lVar14 + _DAT_112da9d20) = param_7;
  *(undefined8 *)(lVar14 + _DAT_112da9d28) = param_9;
  *(undefined8 *)(lVar14 + _DAT_112da9d30) = uVar5;
  *(undefined8 *)(lVar14 + _DAT_112da9d38) = uVar6;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d40);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(lVar14 + _DAT_112da9d48) = uVar7;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d50);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(lVar14 + _DAT_112da9d58) = uVar8;
  *(undefined8 *)(lVar14 + _DAT_112da9d60) = uVar9;
  *(undefined8 *)(lVar14 + _DAT_112da9d68) = uVar10;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d70);
  *puVar1 = param_21;
  puVar1[1] = param_22;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d78);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  *(undefined8 *)(lVar14 + _DAT_112da9d80) = uVar11;
  *(long *)(lVar14 + _DAT_112da9d88) = lVar12;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d90);
  *puVar1 = param_25;
  puVar1[1] = param_26;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d98);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9da0);
  *puVar1 = param_29;
  puVar1[1] = param_30;
  puVar3 = PTR_s_init_1125d9248;
  lStack_78 = lVar14;
  lStack_70 = lVar13;
  func_0x000107c615f0();
  func_0x000107c6157c(pcVar4);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_9);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(lVar12);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_30);
  plVar17 = &lStack_78;
  func_0x000107c61154(plVar17,puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(param_9);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(param_12);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_15);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(lVar12);
  func_0x000107c61574(param_22);
  func_0x000107c61574(param_24);
  func_0x000107c61574(param_26);
  func_0x000107c61574(param_28);
  func_0x000107c61574(param_30);
  func_0x000107c61574(param_32);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  uVar5 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,uVar5,0x100,7);
  return plVar17;
}



/* Entry: 100110f18; end: 100110f23;  */

undefined ** FUN_100110f18(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100110f24; end: 100110faf;  */

void FUN_100110f24(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100110fb0,param_1);
  return;
}



/* Entry: 100110fb0; end: 10011100f;  */

void FUN_100110fb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100111010();
  func_0x000107c613fc();
  func_0x000107c61170(uStack_38);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_110774868;
  return;
}



/* Entry: 100111010; end: 10011102f;  */

void FUN_100111010(void)

{
  func_0x000107c61168(&PTR_PTR_11307c500);
  return;
}



/* Entry: 100111030; end: 100111043; -[SCConfigMetricGraphene2 cofEvaluateRule:configRuleId:isTrue:] */

/* WARNING: Removing unreachable block (ram,0x0001001112a8) */
/* WARNING: Removing unreachable block (ram,0x00010011155c) */

char * FUN_100111030(long param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *unaff_x23;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  pcVar9 = (char *)0x1;
  pcVar5 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = param_5;
  pcVar4 = param_4;
  func_0x000107c61174(param_3);
  iVar7 = (int)pcVar4;
  func_0x000107c61174(param_4);
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_11087a998);
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(lVar2 + 8);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = param_3;
        func_0x000107c61178(param_3);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_a0,pcVar6);
      pcVar6 = "true";
      if ((int)param_5 == 0) {
        pcVar6 = "false";
      }
      FUN_10002b838(auStack_88,pcVar6);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar6 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar6 = param_4;
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_70,pcVar6);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      FUN_10007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      uVar8 = 100;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11087a998);
      puStack_a8 = acStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar2 = 0;
      pcVar6 = pcVar5;
      do {
        if ((&cStack_59)[lVar2] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar2));
        }
        iVar7 = (int)uVar8;
        lVar2 = lVar2 + -0x18;
        unaff_x23 = acStack_c0;
      } while (lVar2 != -0x48);
    }
  }
  func_0x000107c61170(param_4);
  pcVar4 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != auStack_a0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  lVar2 = *(long *)(pcVar4 + 0x10);
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  func_0x000107c61174(pcVar6);
  func_0x000107c61174(pcVar9);
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    pcVar4 = "";
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(lVar2 + 8);
      func_0x000107c61174(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar6;
        func_0x000107c61178(pcVar6);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(pcVar6);
      FUN_10002b838(auStack_160,pcVar4);
      pcVar4 = "true";
      if (iVar7 == 0) {
        pcVar4 = "false";
      }
      FUN_10002b838(auStack_148,pcVar4);
      func_0x000107c61174(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        func_0x000107c61178(pcVar9);
        pcVar4 = pcVar9;
        func_0x000107c3ac4c(pcVar9);
      }
      func_0x000107c61170(pcVar9);
      FUN_10002b838(auStack_130,pcVar4);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      FUN_10007e1e8(&uStack_180,auStack_160,&lStack_118,3);
      pcVar4 = "";
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11087a9e8,&uStack_180,100);
      puStack_168 = (undefined1 *)&uStack_180;
      FUN_10007e5dc(&puStack_168);
      lVar2 = 0;
      do {
        if ((&cStack_119)[lVar2] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_130 + lVar2));
        }
        lVar2 = lVar2 + -0x18;
        unaff_x23 = (char *)&uStack_180;
      } while (lVar2 != -0x48);
    }
  }
  func_0x000107c61170(pcVar9);
  pcVar5 = pcVar6;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(pcVar9);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != auStack_160);
  func_0x000107c61170(pcVar9);
  func_0x000107c61170(pcVar6);
  func_0x000107c60bd8();
  pcVar6 = *(char **)(pcVar5 + 0x20);
  lVar2 = *(long *)(pcVar6 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar10 = *(long *)(pcVar4 + 0x40);
    if (*(int *)(lVar10 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar10 = *(long *)(pcVar4 + 0x40);
    if ((*(uint *)(lVar10 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(pcVar6);
      return pcVar6;
    }
  }
  return (char *)(ulong)*(uint *)(lVar10 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 100111044; end: 1001112df;  */

/* WARNING: Removing unreachable block (ram,0x0001001112a8) */
/* WARNING: Removing unreachable block (ram,0x00010011155c) */

char * FUN_100111044(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  char *unaff_x23;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_3;
  pcVar3 = param_4;
  pcVar8 = param_5;
  func_0x000107c61174(param_2);
  iVar6 = (int)pcVar3;
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087a998);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_a0,pcVar5);
      pcVar5 = "true";
      if ((int)param_3 == 0) {
        pcVar5 = "false";
      }
      FUN_10002b838(auStack_88,pcVar5);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar5 = param_4;
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_70,pcVar5);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      FUN_10007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      lVar7 = (long)param_5 * 100;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087a998);
      puStack_a8 = acStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar9 = 0;
      pcVar5 = pcVar4;
      do {
        if ((&cStack_59)[lVar9] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar9));
        }
        iVar6 = (int)lVar7;
        lVar9 = lVar9 + -0x18;
        unaff_x23 = acStack_c0;
      } while (lVar9 != -0x48);
    }
  }
  func_0x000107c61170(param_4);
  pcVar3 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar3;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != auStack_a0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lVar7 = *(long *)(pcVar3 + 0x10);
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  func_0x000107c61174(pcVar5);
  func_0x000107c61174(pcVar8);
  if (lVar7 != 0) {
    plVar2 = *(long **)(lVar7 + 8);
    pcVar3 = "";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar7 + 8);
      func_0x000107c61174(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar5;
        func_0x000107c61178(pcVar5);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(pcVar5);
      FUN_10002b838(auStack_160,pcVar3);
      pcVar3 = "true";
      if (iVar6 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_148,pcVar3);
      func_0x000107c61174(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        func_0x000107c61178(pcVar8);
        pcVar3 = pcVar8;
        func_0x000107c3ac4c(pcVar8);
      }
      func_0x000107c61170(pcVar8);
      FUN_10002b838(auStack_130,pcVar3);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      FUN_10007e1e8(&uStack_180,auStack_160,&lStack_118,3);
      pcVar3 = "";
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087a9e8,&uStack_180,100);
      puStack_168 = (undefined1 *)&uStack_180;
      FUN_10007e5dc(&puStack_168);
      lVar7 = 0;
      do {
        if ((&cStack_119)[lVar7] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_130 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x23 = (char *)&uStack_180;
      } while (lVar7 != -0x48);
    }
  }
  func_0x000107c61170(pcVar8);
  pcVar4 = pcVar5;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(pcVar8);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != auStack_160);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(pcVar5);
  func_0x000107c60bd8();
  pcVar5 = *(char **)(pcVar4 + 0x20);
  lVar7 = *(long *)(pcVar5 + 8);
  uVar1 = *(uint *)(lVar7 + 0x14);
  if ((int)uVar1 < 0) {
    lVar9 = *(long *)(pcVar3 + 0x40);
    if (*(int *)(lVar9 + (ulong)-uVar1 * 4) != *(int *)(lVar7 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar9 = *(long *)(pcVar3 + 0x40);
    if ((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(pcVar5);
      return pcVar5;
    }
  }
  return (char *)(ulong)*(uint *)(lVar9 + (ulong)*(uint *)(lVar7 + 0x18));
}



/* Entry: 1001112e0; end: 1001112f7; -[SCConfigMetricGraphene2 cofEvaluateRulePerf:isStartup:preloadedNamespaceKey:] */

/* WARNING: Removing unreachable block (ram,0x00010011155c) */

char * FUN_1001112e0(long param_1,undefined8 param_2,char *param_3,int param_4,char *param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *unaff_x23;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    pcVar4 = "";
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(lVar2 + 8);
      func_0x000107c61174(param_3);
      if (param_3 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = param_3;
        func_0x000107c61178(param_3);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_a0,pcVar4);
      pcVar4 = "true";
      if (param_4 == 0) {
        pcVar4 = "false";
      }
      FUN_10002b838(auStack_88,pcVar4);
      func_0x000107c61174(param_5);
      if (param_5 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        func_0x000107c61178(param_5);
        pcVar4 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,pcVar4);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_10007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      pcVar4 = "";
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11087a9e8,&uStack_c0,100);
      puStack_a8 = (undefined1 *)&uStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar2 = 0;
      do {
        if ((&cStack_59)[lVar2] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar2));
        }
        lVar2 = lVar2 + -0x18;
        unaff_x23 = &uStack_c0;
      } while (lVar2 != -0x48);
    }
  }
  func_0x000107c61170(param_5);
  pcVar5 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_5);
  do {
    unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (undefined8 *)auStack_a0);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  pcVar5 = *(char **)(pcVar5 + 0x20);
  lVar2 = *(long *)(pcVar5 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar6 = *(long *)(pcVar4 + 0x40);
    if (*(int *)(lVar6 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar6 = *(long *)(pcVar4 + 0x40);
    if ((*(uint *)(lVar6 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(pcVar5);
      return pcVar5;
    }
  }
  return (char *)(ulong)*(uint *)(lVar6 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 1001112f8; end: 100111593;  */

/* WARNING: Removing unreachable block (ram,0x00010011155c) */

char * FUN_1001112f8(long param_1,char *param_2,int param_3,char *param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x23;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    pcVar3 = "";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_a0,pcVar3);
      pcVar3 = "true";
      if (param_3 == 0) {
        pcVar3 = "false";
      }
      FUN_10002b838(auStack_88,pcVar3);
      func_0x000107c61174(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        func_0x000107c61178(param_4);
        pcVar3 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_70,pcVar3);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_10007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      pcVar3 = "";
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11087a9e8,&uStack_c0,param_5 * 100);
      puStack_a8 = (undefined1 *)&uStack_c0;
      FUN_10007e5dc(&puStack_a8);
      lVar6 = 0;
      do {
        if ((&cStack_59)[lVar6] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x23 = &uStack_c0;
      } while (lVar6 != -0x48);
    }
  }
  func_0x000107c61170(param_4);
  pcVar4 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  do {
    unaff_x23 = (undefined8 *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (undefined8 *)auStack_a0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  pcVar4 = *(char **)(pcVar4 + 0x20);
  lVar6 = *(long *)(pcVar4 + 8);
  uVar1 = *(uint *)(lVar6 + 0x14);
  if ((int)uVar1 < 0) {
    lVar5 = *(long *)(pcVar3 + 0x40);
    if (*(int *)(lVar5 + (ulong)-uVar1 * 4) != *(int *)(lVar6 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar5 = *(long *)(pcVar3 + 0x40);
    if ((*(uint *)(lVar5 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(pcVar4);
      return pcVar4;
    }
  }
  return (char *)(ulong)*(uint *)(lVar5 + (ulong)*(uint *)(lVar6 + 0x18));
}



/* Entry: 100111594; end: 1001115a3;  */

ulong FUN_100111594(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(uVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(uVar2);
      return uVar2;
    }
  }
  return (ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 1001115a4; end: 1001115ff;  */

ulong FUN_1001115a4(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(param_2);
      return param_2;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 100111600; end: 100111633;  */

void FUN_100111600(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100111634; end: 1001117a7;  */

undefined * FUN_100111634(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined1 auStack_a8 [72];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    FUN_1000285a8(0x112d46b30,&UNK_10d917640);
    puVar5 = puVar11;
    func_0x000107c602e8();
    puVar13 = (undefined *)0x0;
    do {
      puVar1 = (ulong *)(param_1 + 0x20 + (long)puVar13 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar5 + 0x28));
      func_0x000107c61434(uVar3);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar2,uVar3);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar12 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar12 >> 6;
      uVar8 = *(ulong *)(puVar5 + uVar7 * 8 + 0x38);
      uVar9 = 1L << (uVar12 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar12 * 0x10);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          if ((uVar7 == uVar2 && uVar8 == uVar3) ||
             (func_0x000107c605b8(uVar7,uVar8,uVar2,uVar3,0), (uVar7 & 1) != 0)) {
            func_0x000107c6142c(uVar3);
            goto LAB_1001116a0;
          }
          uVar12 = uVar12 + 1 & ~uVar10;
          uVar7 = uVar12 >> 6;
          uVar8 = *(ulong *)(puVar5 + uVar7 * 8 + 0x38);
          uVar9 = 1L << (uVar12 & 0x3f);
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(puVar5 + uVar7 * 8 + 0x38) = uVar9 | uVar8;
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar12 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001117a8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
LAB_1001116a0:
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar11);
  }
  return puVar5;
}



/* Entry: 1001117a8; end: 1001117b7;  */

ulong FUN_1001117a8(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_1001115a4(param_2);
  if ((*(ushort *)(*(long *)(lVar2 + 8) + 0x1c) >> 0xc & 1) == 0) {
    func_0x000107c4a6c0();
    uVar1 = (uint)param_2;
    if ((int)lVar2 == 0) {
      uVar1 = 0xfbadbeef;
    }
    param_2 = (ulong)uVar1;
  }
  return param_2;
}



/* Entry: 1001117b8; end: 100111807;  */

ulong FUN_1001117b8(ulong param_1,long param_2)

{
  uint uVar1;
  
  FUN_1001115a4();
  if ((*(ushort *)(*(long *)(param_2 + 8) + 0x1c) >> 0xc & 1) == 0) {
    func_0x000107c4a6c0();
    uVar1 = (uint)param_1;
    if ((int)param_2 == 0) {
      uVar1 = 0xfbadbeef;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 100111808; end: 100111857; -[GPBFieldDescriptor defaultValue] */

undefined ** FUN_100111808(long param_1)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x38);
  ppuVar3 = ppuVar2;
  if ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 1 & 1) == 0) {
    cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x1e);
    if (cVar1 == '\r' && ppuVar2 == (undefined **)0x0) {
      FUN_1001d679c();
      return ppuVar2;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0 || cVar1 != '\x0e') {
      ppuVar3 = ppuVar2;
    }
  }
  return ppuVar3;
}



/* Entry: 100111858; end: 100111883; -[GPBFieldDescriptor isValidEnumValue:] */

void FUN_100111858(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  func_0x000107c429b0();
                    /* WARNING: Could not recover jumptable at 0x000100111880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 100111884; end: 10011188f;  */

void FUN_100111884(long param_1,long param_2)

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



/* Entry: 100111890; end: 1001118a3; -[GPBEnumDescriptor enumVerifier] */

undefined8 FUN_100111890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1001118a4; end: 1001118df;  */

undefined8 FUN_1001118a4(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  return *(undefined8 *)(lVar1 + 0x10);
}



/* Entry: 1001118e0; end: 100111caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1001118e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                    undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 unaff_x20;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c610f8();
  puVar2 = &UNK_1103ce580;
  func_0x000107c613fc(&UNK_1103ce580,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  FUN_1000285a8(0x112da9840,&UNK_10d951030);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  puVar3 = &UNK_1014c653c;
  FUN_1000bdd8c(&UNK_1014c653c,puVar2);
  FUN_1000285a8(0x112da9848,&UNK_10d991ca0);
  uVar4 = param_5;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9850,&UNK_10d951040);
  uVar5 = param_10;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9858,&UNK_10d951048);
  uVar6 = param_11;
  FUN_1000bda74();
  FUN_1000285a8(0x112da9860,&UNK_10d951050);
  lVar7 = param_12;
  FUN_1000bda74();
  lVar8 = lVar7;
  FUN_10009fb80();
  lVar9 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar9 + _DAT_112da9868);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112da9830);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar9 + _DAT_112da9838) = 0;
  *(undefined8 *)(lVar9 + _DAT_112da9870) = 0;
  *(undefined8 *)(lVar9 + _DAT_112da9878) = param_1;
  *(undefined8 *)(lVar9 + _DAT_112da9880) = param_3;
  *(undefined8 *)(lVar9 + _DAT_112da9888) = param_4;
  *(undefined8 *)(lVar9 + _DAT_112da9890) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112da9898) = param_6;
  *(undefined8 *)(lVar9 + _DAT_112da98a0) = param_7;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112da98a8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(lVar9 + _DAT_112da98b0) = uVar5;
  *(undefined **)(lVar9 + _DAT_112da98b8) = puVar3;
  *(undefined8 *)(lVar9 + _DAT_112da98c0) = uVar6;
  *(long *)(lVar9 + _DAT_112da98c8) = lVar7;
  puVar2 = PTR_PTR_1126a7460;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar9 + _DAT_112da98d0) = puVar2;
  *(undefined8 *)(lVar9 + _DAT_112da98d8) = param_13;
  plVar10 = &lStack_78;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61574(param_9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(lVar7);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  uVar4 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c61464(unaff_x20,uVar4,0xa8,7);
  return plVar10;
}



/* Entry: 100111cb0; end: 100111cd3;  */

void FUN_100111cb0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100111cd4; end: 100111cdb; -[SCExperimentStore logExposureForExperiment:treatmentId:requireUserInfoInLog:] */

void FUN_100111cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logExposureForExperiment_treatme_112607198);
  return;
}



/* Entry: 100111cdc; end: 100111da3; -[SCExperimentPreferenceStore logExposureForExperiment:treatmentId:requireUserInfoInLog:] */

void FUN_100111cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100114248;
  puStack_68 = &UNK_110858b70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  FUN_10007380c(uVar1,&puStack_80);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100111da4; end: 100111e13; -[KSCrashThreadStackDumper init] */

undefined1 * FUN_100111da4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4cf0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_28 = 0x40ffffffff;
    puStack_30 = &UNK_106af54b0;
    func_0x000107c61308(0x1f,&puStack_30,0);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100111e14; end: 100111fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100111e14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar7 = PTR_PTR_1126d05a8;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar7;
    func_0x000107c440e4();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      puVar7 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9830);
    func_0x000107c61428(puVar1,auStack_68,1,0);
    uVar4 = puVar1[1];
    *puVar1 = puVar7;
    puVar1[1] = param_2;
    func_0x000107c6142c(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da9898);
    puVar7 = &UNK_1103ce5d0;
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1103ce5d0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = (code *)0x10018ad3c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000f6b44;
    puStack_80 = &UNK_1103ce5e8;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_70);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar6);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da98a0);
    func_0x000107c613fc(&UNK_1103ce5d0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_78 = FUN_1001f9e00;
    puStack_98 = puVar3;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000f6b44;
    puStack_80 = &UNK_1103ce610;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_70);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100111fe4);
  (*pcVar2)();
}



/* Entry: 100111fe4; end: 100111fef;  */

undefined ** FUN_100111fe4(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100111ff0; end: 100112087;  */

void FUN_100111ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106017c8;
  func_0x000107c613fc(&UNK_1106017c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1001120cc,puVar1);
  return;
}



/* Entry: 100112088; end: 1001120cb;  */

void FUN_100112088(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100111ff0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100082720("SCSystemScopeDevelopmentScopeInitializationPluginPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1001120cc; end: 1001120d7;  */

void FUN_1001120cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100112170();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  FUN_100112190(uStack_48,uStack_50,uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106017f0;
  return;
}



/* Entry: 1001120d8; end: 10011216f;  */

void FUN_1001120d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100112170();
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  FUN_100112190(uStack_48,uStack_50,param_4);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1106017f0;
  return;
}



/* Entry: 100112170; end: 10011218f;  */

void FUN_100112170(void)

{
  func_0x000107c61168(&PTR_PTR_112f36020);
  return;
}


