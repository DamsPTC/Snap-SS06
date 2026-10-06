/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027a9008; end: 1027a9083;  */

void FUN_1027a9008(void)

{
  func_0x000107c61168(&PTR_PTR_1128618c0);
  return;
}



/* Entry: 1027a9084; end: 1027a91ab;  */

ulong FUN_1027a9084(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a91ac);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1027a91ac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a91a8);
      (*pcVar1)();
    }
    FUN_1027a922c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1027a91ac; end: 1027a922b;  */

undefined * FUN_1027a91ac(undefined *param_1,undefined *param_2)

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
    func_0x0001027a9028();
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



/* Entry: 1027a922c; end: 1027a9323;  */

long FUN_1027a922c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1027a9320);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1027a9324);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1027a9bb4(0);
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
      FUN_1027a9bb4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1027a931c);
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



/* Entry: 1027a9324; end: 1027a9b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a9324(undefined8 ****param_1,ulong param_2,undefined8 ****param_3,undefined8 param_4,
                  undefined8 ****param_5,undefined8 param_6,undefined8 ****param_7,
                  undefined8 ****param_8)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  ulong uVar16;
  undefined8 ****ppppuVar17;
  undefined8 ***pppuVar18;
  long lVar19;
  long lVar20;
  undefined8 **appuStack_178 [9];
  undefined8 ***apppuStack_130 [3];
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined *puStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0x112d36580;
  pppuStack_d0 = param_3;
  uStack_c8 = param_4;
  pppuStack_c0 = param_5;
  uStack_b8 = param_6;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)apppuStack_130 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  ppppuVar5 = (undefined8 ****)0x0;
  lStack_e0 = lVar15;
  func_0x000107c5fb10();
  pppuVar18 = ppppuVar5[-1];
  ppppuVar12 = ppppuVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppuVar18[8]);
  ppppuVar17 = (undefined8 ****)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar14 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar14 = param_2 >> 0x38 & 0xf;
  }
  pppuStack_d8 = param_1;
  if (uVar14 != 0) {
    uVar14 = (ulong)param_7 & 0xffffffffffff;
    if (((ulong)param_8 & 0x2000000000000000) != 0) {
      uVar14 = (ulong)param_8 >> 0x38 & 0xf;
    }
    if (uVar14 != 0) {
      pppuStack_90 = param_7;
      pppuStack_88 = param_8;
      func_0x000107c5fb04(ppppuVar17);
      func_0x000100e8b654();
      param_8 = &pppuStack_90;
      ppppuVar13 = (undefined8 ****)0x0;
      param_7 = ppppuVar17;
      func_0x000107c60214(ppppuVar17,0,PTR___sSSN_11034da80,ppppuVar12);
      (*(code *)pppuVar18[1])(ppppuVar17,ppppuVar5);
      param_1 = ppppuVar13;
      pppuStack_e8 = ppppuVar13;
      if ((ulong)ppppuVar13 >> 0x3c < 0xf) {
        param_8 = (undefined8 ****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        ppppuVar12 = param_7;
        func_0x000107c5ee20(param_7,pppuStack_e8);
        pppuStack_90 = (undefined8 ****)0x0;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar12);
        param_1 = (undefined8 ****)pppuStack_90;
        if (param_8 == (undefined8 ****)0x0) {
          param_8 = (undefined8 ****)pppuStack_90;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(param_8);
          func_0x000107c61654();
          func_0x0001000b44c0(param_7,pppuStack_e8);
          func_0x000107c614ac(param_1);
          param_7 = param_1;
        }
        else {
          pppuStack_f0 = param_7;
          func_0x000107c61174();
          func_0x000107c60234(&pppuStack_90,param_8);
          func_0x000107c615e8(param_8);
          uVar11 = 0x112d77ec8;
          func_0x0001000285a8(0x112d77ec8,&UNK_10d953980);
          puVar10 = PTR___sypN_11034f1a8;
          ppppuVar6 = &pppuStack_a8;
          func_0x000107c6147c(ppppuVar6,&pppuStack_90,PTR___sypN_11034f1a8 + 8,uVar11,6);
          param_7 = (undefined8 ****)pppuStack_a8;
          if (((ulong)ppppuVar6 & 1) == 0) {
            func_0x0001000b44c0(pppuStack_f0,pppuStack_e8);
            param_1 = ppppuVar13;
            param_7 = ppppuVar12;
          }
          else {
            ppppuVar5 = (undefined8 ****)pppuStack_a8[2];
            puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (ppppuVar5 != (undefined8 ****)0x0) {
              pppuStack_b0 = pppuStack_a8 + 4;
              pppuStack_108 = (undefined8 ***)((long)ppppuVar5 + -1);
              ppppuVar12 = (undefined8 ****)0x0;
              puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
              pppuStack_f8 = ppppuVar5;
              do {
                while( true ) {
                  if (param_7[2] <= ppppuVar12) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a9b08);
                    (*pcVar2)();
                  }
                  param_8 = (undefined8 ****)pppuStack_b0[(long)ppppuVar12];
                  if (param_8[2] != (undefined8 ***)0x0) break;
LAB_1027a958c:
                  ppppuVar12 = (undefined8 ****)((long)ppppuVar12 + 1);
                  puVar9 = puStack_100;
                  if (ppppuVar5 == ppppuVar12) goto LAB_1027a9a3c;
                }
                func_0x000107c61438(param_8,2);
                lVar15 = 0x6c7255616964656d;
                uVar14 = 0;
                func_0x000100029284(0x6c7255616964656d);
                if ((uVar14 & 1) == 0) {
                  func_0x000107c61430(param_8,2);
                  goto LAB_1027a958c;
                }
                func_0x0001000bb420(param_8[7] + lVar15 * 4,&pppuStack_90);
                func_0x000107c6142c(param_8);
                ppppuVar6 = &pppuStack_a8;
                func_0x000107c6147c(ppppuVar6,&pppuStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
                pppuVar1 = pppuStack_a0;
                pppuVar18 = pppuStack_a8;
                if (((ulong)ppppuVar6 & 1) == 0) {
                  func_0x000107c6142c(param_8);
                  goto LAB_1027a958c;
                }
                uVar14 = (ulong)pppuStack_a8 & 0xffffffffffff;
                if (((ulong)pppuStack_a0 & 0x2000000000000000) != 0) {
                  uVar14 = (ulong)pppuStack_a0 >> 0x38 & 0xf;
                }
                ppppuVar13 = (undefined8 ****)pppuVar18;
                if (uVar14 == 0) {
                  func_0x000107c6142c(param_8);
                  func_0x000107c6142c(pppuVar1);
                  ppppuVar5 = (undefined8 ****)pppuStack_f8;
                  goto LAB_1027a958c;
                }
                func_0x000107c5edd0(lVar20,pppuStack_a8,pppuStack_a0);
                lVar15 = lVar20;
                (**(code **)(lVar19 + 0x30))(lVar20,1,lVar4);
                if ((int)lVar15 == 1) {
                  func_0x000107c6142c(param_8);
                  func_0x000107c6142c(pppuVar1);
                  FUN_1027a9b74(lVar20,0x112d36580,&UNK_10d9016d0);
                  ppppuVar5 = (undefined8 ****)pppuStack_f8;
                  goto LAB_1027a958c;
                }
                pppuStack_110 = pppuVar18;
                (**(code **)(lVar19 + 0x20))(lStack_e0,lVar20,lVar4);
                if (param_8[2] == (undefined8 ***)0x0) {
LAB_1027a9740:
                  pppuStack_118 = (undefined8 ***)((ulong)pppuStack_118 & 0xffffffff00000000);
                }
                else {
                  func_0x000107c61434(param_8);
                  lVar15 = 0x6567616d497369;
                  uVar14 = 0;
                  func_0x000100029284(0x6567616d497369);
                  if ((uVar14 & 1) == 0) {
                    func_0x000107c6142c(param_8);
                    goto LAB_1027a9740;
                  }
                  func_0x0001000bb420(param_8[7] + lVar15 * 4,&pppuStack_90);
                  func_0x000107c6142c(param_8);
                  ppppuVar5 = &pppuStack_a8;
                  func_0x000107c6147c(ppppuVar5,&pppuStack_90,puVar10 + 8,PTR___sSbN_11034dd40,6);
                  if (((ulong)ppppuVar5 & 1) == 0) goto LAB_1027a9740;
                  pppuStack_118 =
                       (undefined8 ***)CONCAT44(pppuStack_118._4_4_,(uint)(byte)pppuStack_a8);
                }
                if (param_8[2] == (undefined8 ***)0x0) {
LAB_1027a9794:
                  pppuStack_88 = (undefined8 ****)0x0;
                  pppuStack_90 = (undefined8 ****)0x0;
                  lStack_78 = 0;
                  uStack_80 = 0;
                }
                else {
                  func_0x000107c61434(param_8);
                  lVar15 = 0x6449736e656c;
                  uVar14 = 0;
                  func_0x000100029284(0x6449736e656c);
                  if ((uVar14 & 1) == 0) {
                    func_0x000107c6142c(param_8);
                    goto LAB_1027a9794;
                  }
                  func_0x0001000bb420(param_8[7] + lVar15 * 4,&pppuStack_90);
                  func_0x000107c6142c(param_8);
                }
                func_0x000107c6142c(param_8);
                if (lStack_78 == 0) {
                  FUN_1027a9b74(&pppuStack_90,0x112d387f8,&UNK_10d902650);
LAB_1027a97fc:
                  apppuStack_130[0] = (undefined8 ****)0x0;
                  apppuStack_130[2] = (undefined8 ****)0x0;
                }
                else {
                  ppppuVar5 = &pppuStack_a8;
                  func_0x000107c6147c(ppppuVar5,&pppuStack_90,puVar10 + 8,PTR___sSSN_11034da80,6);
                  if ((int)ppppuVar5 == 0) goto LAB_1027a97fc;
                  apppuStack_130[0] = pppuStack_a8;
                  apppuStack_130[2] = pppuStack_a0;
                }
                pppuStack_90 = pppuStack_110;
                pppuStack_88 = pppuVar1;
                func_0x000107c5fb78(0x5f,0xe100000000000000);
                puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                pppuStack_a8 = ppppuVar12;
                func_0x000107c6057c(PTR___sSiN_11034deb0,
                                    PTR___sSis23CustomStringConvertiblesWP_11034df00);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar9);
                ppppuVar5 = (undefined8 ****)pppuStack_88;
                ppppuVar13 = (undefined8 ****)pppuStack_90;
                func_0x000107c5fadc(pppuStack_90,pppuStack_88);
                func_0x000107c6142c();
                func_0x000107c5ed90();
                pppuVar18 = apppuStack_130[2];
                apppuStack_130[1] = ppppuVar5;
                if ((undefined8 ****)apppuStack_130[2] == (undefined8 ****)0x0) {
                  pppuStack_110 = (undefined8 ****)0x0;
                }
                else {
                  ppppuVar5 = (undefined8 ****)apppuStack_130[0];
                  func_0x000107c5fadc(apppuStack_130[0],apppuStack_130[2]);
                  pppuStack_110 = ppppuVar5;
                  func_0x000107c6142c(pppuVar18);
                }
                ppppuVar5 = (undefined8 ****)PTR_PTR_1126b5748;
                func_0x000107c610f8();
                pppuVar1 = pppuStack_110;
                pppuVar18 = apppuStack_130[1];
                func_0x000107c46d54();
                pppuStack_118 = ppppuVar5;
                func_0x000107c61170(ppppuVar13);
                func_0x000107c61170(pppuVar18);
                func_0x000107c61170(pppuVar1);
                ppppuVar13 = (undefined8 ****)pppuStack_118;
                func_0x000107c61174();
                puVar9 = puStack_100;
                puVar8 = puStack_100;
                func_0x000107c61550();
                if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
                   (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
                  if ((ulong)puVar9 >> 0x3e == 0) {
                    puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar9) {
                      puVar7 = puVar9;
                    }
                    func_0x000107c60480(puVar7);
                  }
                  puVar8 = (undefined *)0x0;
                  FUN_1027a9084(0,puVar7 + 1,1,puVar9);
                }
                uVar16 = (ulong)puVar8 & 0xffffffffffffff8;
                uVar14 = *(ulong *)(uVar16 + 0x10);
                puStack_100 = puVar8;
                if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar14) {
                  puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
                  FUN_1027a9084(puVar9,uVar14 + 1,1,puVar8);
                  uVar16 = (ulong)puVar9 & 0xffffffffffffff8;
                  puStack_100 = puVar9;
                }
                param_8 = (undefined8 ****)((long)ppppuVar12 + 1);
                *(ulong *)(uVar16 + 0x10) = uVar14 + 1;
                *(undefined8 *****)(uVar16 + uVar14 * 8 + 0x20) = ppppuVar13;
                func_0x000107c61170(ppppuVar13);
                (**(code **)(lVar19 + 8))(lStack_e0,lVar4);
                bVar3 = (undefined8 ****)pppuStack_108 != ppppuVar12;
                ppppuVar5 = (undefined8 ****)pppuStack_f8;
                puVar9 = puStack_100;
                ppppuVar12 = param_8;
              } while (bVar3);
            }
LAB_1027a9a3c:
            func_0x000107c6142c(param_7);
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar10 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              ppppuVar12 = (undefined8 ****)PTR_PTR_1126b5750;
            }
            else {
              puVar10 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar10 = puVar9;
              }
              func_0x000107c60480();
              ppppuVar12 = (undefined8 ****)PTR_PTR_1126b5750;
            }
            PTR_PTR_1126b5750 = (undefined *)ppppuVar12;
            if (puVar10 != (undefined *)0x0) {
              func_0x000107c610f8();
              param_8 = (undefined8 ****)pppuStack_d8;
              func_0x000107c5fadc(pppuStack_d8,param_2);
              param_7 = (undefined8 ****)pppuStack_d0;
              func_0x000107c5fadc(pppuStack_d0,uStack_c8);
              ppppuVar5 = (undefined8 ****)pppuStack_c0;
              func_0x000107c5fadc(pppuStack_c0,uStack_b8);
              uVar11 = 0;
              FUN_1027a9bb4(0);
              puVar10 = puVar9;
              func_0x000107c5fc48(puVar9,uVar11);
              func_0x000107c4746c();
              func_0x000107c61170(param_8);
              func_0x000107c61170(param_7);
              func_0x000107c61170(ppppuVar5);
              func_0x000107c61170(puVar10);
              func_0x0001000b44c0(pppuStack_f0,pppuStack_e8);
              func_0x000107c6142c(puVar9);
              param_1 = ppppuVar12;
              goto LAB_1027a9b30;
            }
            func_0x0001000b44c0(pppuStack_f0,pppuStack_e8);
            func_0x000107c6142c(puVar9);
            param_1 = ppppuVar13;
          }
        }
      }
    }
  }
  ppppuVar12 = (undefined8 ****)0x0;
LAB_1027a9b30:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78(ppppuVar12);
  pppuVar18 = param_8[2];
  ppppuVar17[-6] = ppppuVar5;
  ppppuVar17[-5] = param_7;
  ppppuVar17[-4] = param_8;
  ppppuVar17[-3] = param_1;
  ppppuVar17[-2] = (undefined8 ***)&stack0xfffffffffffffff0;
  ppppuVar17[-1] = (undefined8 ***)FUN_1027a9b6c;
  func_0x000107c61428(pppuVar18 + 2,ppppuVar17 + -9,0,0);
  pppuVar18 = pppuVar18 + 2;
  func_0x000107c61618();
  if (pppuVar18 != (undefined8 ***)0x0) {
    lVar15 = *(long *)((long)pppuVar18 + _DAT_112ebed48);
    func_0x000107c4f07c();
    func_0x000107c61180();
    lVar4 = lVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    if (lVar4 == 0) {
      func_0x000107c61170(pppuVar18);
    }
    else {
      func_0x000107c4ef94(lVar4);
      func_0x000107c61170(pppuVar18);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 1027a9b6c; end: 1027a9b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a9b6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ebed48);
    func_0x000107c4f07c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c4ef94(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1027a9b74; end: 1027a9bb3;  */

undefined8 FUN_1027a9b74(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1027a9bb4; end: 1027a9bf7;  */

void FUN_1027a9bb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebed88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5748;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebed88 = puVar1;
  return;
}



/* Entry: 1027a9bf8; end: 1027a9c27;  */

void FUN_1027a9bf8(long param_1,long param_2)

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



/* Entry: 1027a9c28; end: 1027a9dc3;  */

void FUN_1027a9c28(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(unaff_x22 + 0xb8);
  if (lVar7 == 1) {
    lVar7 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x98);
    uVar2 = puVar6[4];
    uVar11 = *puVar6;
    uVar10 = puVar6[3];
    uVar9 = puVar6[2];
    *(undefined8 *)(unaff_x22 + 0x50) = puVar6[1];
    *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
    *(long *)(unaff_x22 + 0x70) = lVar7;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar8;
    func_0x000103fade44(0);
    func_0x000107c610f8();
    FUN_1027aa2b4(lVar7,uVar8);
    lVar7 = unaff_x22 + 0x48;
    func_0x000103fadbcc();
  }
  *(long *)(unaff_x22 + 200) = lVar7;
  lVar7 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c3ab88();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  func_0x000107c61170(uVar2);
  *(long *)(unaff_x22 + 0x20) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(long *)(unaff_x22 + 0x40) = lVar7;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1027a9dc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar3,unaff_x22 + 0x80,&UNK_10dadb558,unaff_x22 + 0x10,FUN_1027aa280,unaff_x22 + 0x30,0,0,
      PTR___s10Foundation4DataVN_110350ae0);
    return;
  }
  pcVar4 = FUN_1027aa280;
  func_0x000107c615b4(FUN_1027aa280,unaff_x22 + 0x30);
  *(code **)(unaff_x22 + 0xe0) = pcVar4;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027a9e20;
  lVar5 = *(long *)(unaff_x22 + 0x90);
  plVar3[4] = lVar7;
  plVar3[5] = lVar5;
  plVar3[3] = unaff_x22 + 0x80;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a9f94,0,0);
  return;
}



/* Entry: 1027a9dc4; end: 1027a9e1f;  */

void FUN_1027a9dc4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    uVar1 = 0x1027a9e7c;
  }
  else {
    *(long *)(lVar2 + 0xf8) = unaff_x20;
    uVar1 = 0x1027a9ebc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1027a9e20; end: 1027a9f77;  */

void FUN_1027a9e20(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    uVar1 = 0x1027a9ef8;
  }
  else {
    uVar1 = 0x1027a9f34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1027a9f78; end: 1027a9f93;  */

void FUN_1027a9f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a9f94,0,0);
  return;
}



/* Entry: 1027a9f94; end: 1027aa087;  */

void FUN_1027a9f94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c43bf4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  uVar2 = 0x112d555b0;
  func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
  func_0x000100759c94(uVar1,0,uVar2);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1027aa034;
                    /* WARNING: Could not recover jumptable at 0x0001027aa030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101a155f0)();
  return;
}



/* Entry: 1027aa088; end: 1027aa1df;  */

void FUN_1027aa088(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar6;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar5);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  }
  else {
    puVar4 = *(undefined8 **)(unaff_x22 + 0x38);
    func_0x000107c61574();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
      puVar4 = *(undefined8 **)(unaff_x22 + 0x18);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x50);
      func_0x000107c61174(uVar7);
      uVar5 = uVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar3);
      FUN_1027aa354(uVar7,uVar1);
      FUN_1027aa354(uVar7,uVar1);
      *puVar4 = uVar5;
      puVar4[1] = param_2;
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1027aa1c4;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_1027aa314();
    func_0x000107c613f8(&UNK_1106acde0,puVar4,0,0);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = uVar5;
    *(undefined1 *)(puVar4 + 3) = 3;
    func_0x000107c61654();
    func_0x000107c61174(uVar5);
  }
  func_0x000107c61170(uVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1027aa1c4:
                    /* WARNING: Could not recover jumptable at 0x0001027aa1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027aa1e0; end: 1027aa243;  */

void FUN_1027aa1e0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027aa244;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
  plVar3[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a9f94,0,0);
  return;
}



/* Entry: 1027aa244; end: 1027aa27f;  */

void FUN_1027aa244(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027aa27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027aa280; end: 1027aa2b3;  */

void FUN_1027aa280(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f50c(uVar1);
  func_0x000107c61180();
  func_0x000107c3f474();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1027aa2b4; end: 1027aa2c3;  */

void FUN_1027aa2b4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1027aa2c4; end: 1027aa303;  */

void FUN_1027aa2c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aa304,0,0);
  return;
}



/* Entry: 1027aa304; end: 1027aa313;  */

void FUN_1027aa304(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001027aa310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1027aa314; end: 1027aa353;  */

void FUN_1027aa314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebed98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22ff8;
  func_0x000107c61520(&UNK_10dc22ff8,&UNK_1106acde0);
  puRam0000000112ebed98 = puVar1;
  return;
}



/* Entry: 1027aa354; end: 1027aa37f;  */

void FUN_1027aa354(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027aa380; end: 1027aa447;  */

void FUN_1027aa380(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001027aa3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1027aa448;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11054c298;
  func_0x000107c613fc(&UNK_11054c298,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x1027aa5f8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1027aa448; end: 1027aa4c7;  */

void FUN_1027aa448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aa6e0,0,0);
  return;
}



/* Entry: 1027aa4c8; end: 1027aa4df;  */

void FUN_1027aa4c8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aa4e0,0,0);
  return;
}



/* Entry: 1027aa4e0; end: 1027aa5a7;  */

void FUN_1027aa4e0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x68);
  if (*(char *)(unaff_x22 + 0x78) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001027aa528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1027aa5a8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11054c2c0;
  func_0x000107c613fc(&UNK_11054c2c0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_1027aa6a4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1027aa5a8; end: 1027aa5e7;  */

void FUN_1027aa5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aa5e8,0,0);
  return;
}



/* Entry: 1027aa5e8; end: 1027aa603;  */

void FUN_1027aa5e8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001027aa5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined1 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 1027aa604; end: 1027aa6a3;  */

void FUN_1027aa604(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1027aa6a4; end: 1027aa6ab;  */

void FUN_1027aa6a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  FUN_1027aa6ac(uVar1,uVar2,uVar3);
  puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  *(undefined1 *)(puVar5 + 2) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar4);
  return;
}



/* Entry: 1027aa6ac; end: 1027aa6df;  */

/* WARNING: Possible PIC construction at 0x0001027aa6cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027aa6d0) */

void FUN_1027aa6ac(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1027aa6e0; end: 1027aa70f;  */

void FUN_1027aa6e0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001027aa310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1027aa710; end: 1027aa8bf;  */

void FUN_1027aa710(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x22 + 0x70));
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c5fadc(uVar7,*(undefined8 *)(unaff_x22 + 0x80));
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c3ab10();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar3;
    uVar4 = 0;
    FUN_1027aad90(0);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1027aa8c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0x48,&UNK_10dadb580,unaff_x22 + 0x10,FUN_1027aad5c,unaff_x22 + 0x30,0,0,uVar4);
    return;
  }
  pcVar5 = FUN_1027aad5c;
  func_0x000107c615b4(FUN_1027aad5c,unaff_x22 + 0x30);
  *(code **)(unaff_x22 + 0xa0) = pcVar5;
  func_0x0001000285a8(0x112e2de30,&UNK_10da16ba8);
  func_0x000107c43bf4();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  func_0x000107c61170(uVar2);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027aa924;
                    /* WARNING: Could not recover jumptable at 0x0001027aa8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1027aa368)();
  return;
}



/* Entry: 1027aa8c0; end: 1027aa923;  */

void FUN_1027aa8c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0x48);
    pcVar1 = FUN_1027aaa38;
  }
  else {
    *(long *)(lVar2 + 200) = unaff_x20;
    pcVar1 = (code *)0x1027aaa70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027aa924; end: 1027aa977;  */

void FUN_1027aa924(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb8) = param_1;
  *(undefined1 *)(lVar1 + 0xd0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aa978,0,0);
  return;
}



/* Entry: 1027aa978; end: 1027aaa37;  */

void FUN_1027aa978(void)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0xd0);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xa8);
  func_0x000107c61574();
  puVar5 = *(undefined **)(unaff_x22 + 0xb8);
  if (cVar1 != '\x01') {
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0xa0));
      *(undefined **)(unaff_x22 + 0xc0) = puVar5;
      pcVar3 = FUN_1027aaa38;
      goto LAB_1027aaa1c;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    FUN_1027aa314();
    puVar5 = &UNK_1106acde0;
    func_0x000107c613f8(&UNK_1106acde0,puVar2,0,0);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = uVar4;
    *(undefined1 *)(puVar2 + 3) = 3;
    func_0x000107c61654();
    func_0x000107c61174(uVar4);
  }
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0xa0));
  *(undefined **)(unaff_x22 + 200) = puVar5;
  pcVar3 = (code *)0x1027aaa70;
LAB_1027aaa1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 1027aaa38; end: 1027aaaa3;  */

void FUN_1027aaa38(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001027aaa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 1027aaaa4; end: 1027aaabf;  */

void FUN_1027aaaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aaac0,0,0);
  return;
}



/* Entry: 1027aaac0; end: 1027aab6b;  */

void FUN_1027aaac0(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000285a8(0x112e2de30,&UNK_10da16ba8);
  func_0x000107c43bf4();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c61170(uVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1027aab6c;
                    /* WARNING: Could not recover jumptable at 0x0001027aab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1027aa368)();
  return;
}



/* Entry: 1027aab6c; end: 1027aabbf;  */

void FUN_1027aab6c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aabc0,0,0);
  return;
}



/* Entry: 1027aabc0; end: 1027aacbb;  */

void FUN_1027aabc0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar5;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x30);
    func_0x000107c61574();
    if (lVar5 != 0) {
      **(undefined8 **)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x40);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1027aaca8;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_1027aa314();
    func_0x000107c613f8(&UNK_1106acde0,puVar3,0,0);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = uVar4;
    *(undefined1 *)(puVar3 + 3) = 3;
    func_0x000107c61654();
    func_0x000107c61174(uVar4);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1027aaca8:
                    /* WARNING: Could not recover jumptable at 0x0001027aacb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027aacbc; end: 1027aad1f;  */

void FUN_1027aacbc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027aad20;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
  plVar3[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aaac0,0,0);
  return;
}



/* Entry: 1027aad20; end: 1027aad5b;  */

void FUN_1027aad20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027aad58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027aad5c; end: 1027aad8f;  */

void FUN_1027aad5c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3f50c(uVar1);
  func_0x000107c61180();
  func_0x000107c3f474();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1027aad90; end: 1027aadd3;  */

void FUN_1027aad90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2de28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e2de28 = puVar1;
  return;
}



/* Entry: 1027aadd4; end: 1027aadf3;  */

void FUN_1027aadd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aadf4,0,0);
  return;
}



/* Entry: 1027aadf4; end: 1027aaf2b;  */

void FUN_1027aadf4(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1 = &UNK_11054c2e8;
  func_0x000107c613fc(&UNK_11054c2e8,0x30,7);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  *(code **)(unaff_x22 + 0x30) = FUN_1027ab15c;
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_101349054;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11054c300;
  func_0x000107c60bc4();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c5e068();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  func_0x000107c60bd0(puVar2);
  uVar4 = 0x112d67d58;
  func_0x0001000285a8(0x112d67d58,&UNK_10d92be70);
  func_0x000100759c94(uVar5,0,uVar4);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027aaf2c;
                    /* WARNING: Could not recover jumptable at 0x0001027aaf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10171335c)();
  return;
}



/* Entry: 1027aaf2c; end: 1027aaf7f;  */

void FUN_1027aaf2c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined1 *)(lVar1 + 0xa0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aaf80,0,0);
  return;
}



/* Entry: 1027aaf80; end: 1027ab0fb;  */

void FUN_1027aaf80(void)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  if (*(char *)(unaff_x22 + 0xa0) == '\x01') {
    *(long *)(unaff_x22 + 0x40) = lVar6;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x40,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x000107c615f0();
      uVar3 = unaff_x22 + 0x50;
      func_0x000107c6147c(uVar3,unaff_x22 + 0x48,PTR___syXlN_11034f1a0 + 8,uVar7,6);
      if ((uVar3 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar1 = *(undefined1 *)(unaff_x22 + 0xa0);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
        func_0x00010279ea00(uVar7,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027ab078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50));
        return;
      }
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xa0);
    puVar4 = (undefined8 *)0x112dc3ff0;
    func_0x0001000285a8(0x112dc3ff0,&UNK_10d981690);
    puVar5 = puVar4;
    FUN_1027ab1a4();
    func_0x000107c613f8(&UNK_11054c3a8,puVar5,0,0);
    *puVar5 = uVar8;
    puVar5[1] = puVar4;
    func_0x000107c61654();
    func_0x00010279ea00(uVar7,uVar1);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001027ab0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027ab0fc; end: 1027ab15b;  */

void FUN_1027ab0fc(undefined8 *param_1,undefined *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (*param_3)();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    param_6 = 0;
    func_0x000100f15acc();
  }
  param_1[3] = param_6;
  *param_1 = param_2;
  return;
}



/* Entry: 1027ab15c; end: 1027ab1a3;  */

void FUN_1027ab15c(undefined8 *param_1,undefined *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  (**(code **)(unaff_x20 + 0x20))
            (param_2,*(code **)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar1 = 0;
    func_0x000100f15acc();
  }
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 1027ab1a4; end: 1027ab1e3;  */

void FUN_1027ab1a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebeda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dadb654;
  func_0x000107c61520(&UNK_10dadb654,&UNK_11054c3a8);
  puRam0000000112ebeda0 = puVar1;
  return;
}



/* Entry: 1027ab1e4; end: 1027ab28b;  */

int FUN_1027ab1e4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1027ab28c; end: 1027ab4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ab28c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 in_x6;
  long extraout_x8;
  long lVar8;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lStack_80 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar8 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1027ad22c();
  lStack_70 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  uVar2 = 0x112de6120;
  func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
  pcVar3 = FUN_1027ab794;
  func_0x00010072927c(FUN_1027ab794,0,uVar2);
  *(code **)(lVar1 + 0x20) = pcVar3;
  uVar2 = 0x112ebedb0;
  func_0x0001000285a8(0x112ebedb0,&UNK_10dadb6b0);
  uVar4 = 0x1027ab7c4;
  func_0x00010072927c(0x1027ab7c4,0,uVar2);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x30) = in_x6;
  func_0x000107c6157c(in_x6);
  uVar2 = 0x112ebbd80;
  func_0x0001000285a8(0x112ebbd80,&UNK_10dad4dd8);
  pcVar3 = FUN_1027ab7f4;
  func_0x00010072927c(FUN_1027ab7f4,0,uVar2);
  *(code **)(lVar1 + 0x40) = pcVar3;
  func_0x000100083b20(&lStack_68);
  lVar5 = *(long *)(lStack_68 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
    FUN_1027ad268(0,0x112d56378,&PTR_PTR_1126ae790);
    lVar5 = lStack_78;
    lVar6 = lStack_80;
    (**(code **)(lStack_80 + 0x68))
              (lVar8,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lStack_78);
    lVar7 = lVar8;
    func_0x000104188018(lVar8,0,0);
    (**(code **)(lVar6 + 8))(lVar8,lVar5);
  }
  else {
    lVar7 = lVar6;
    func_0x000107c44424();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
  }
  *(long *)(lVar1 + 0x38) = lVar7;
  param_1[3] = lStack_70;
  param_1[4] = (long)&PTR_DAT_11054c438;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027ab4d0; end: 1027ab4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ab4d0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar1 = 0;
  func_0x000107c5f804(0,*(undefined8 *)(unaff_x20 + 0x18),uVar4,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lStack_80 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar9 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1027ad22c();
  lStack_70 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  uVar2 = 0x112de6120;
  func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
  pcVar3 = FUN_1027ab794;
  func_0x00010072927c(FUN_1027ab794,0,uVar2);
  *(code **)(lVar1 + 0x20) = pcVar3;
  uVar2 = 0x112ebedb0;
  func_0x0001000285a8(0x112ebedb0,&UNK_10dadb6b0);
  uVar4 = 0x1027ab7c4;
  func_0x00010072927c(0x1027ab7c4,0,uVar2);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar8;
  func_0x000107c6157c(uVar8);
  uVar2 = 0x112ebbd80;
  func_0x0001000285a8(0x112ebbd80,&UNK_10dad4dd8);
  pcVar3 = FUN_1027ab7f4;
  func_0x00010072927c(FUN_1027ab7f4,0,uVar2);
  *(code **)(lVar1 + 0x40) = pcVar3;
  func_0x000100083b20(&lStack_68);
  lVar5 = *(long *)(lStack_68 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
    FUN_1027ad268(0,0x112d56378,&PTR_PTR_1126ae790);
    lVar5 = lStack_78;
    lVar6 = lStack_80;
    (**(code **)(lStack_80 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lStack_78);
    lVar7 = lVar9;
    func_0x000104188018(lVar9,0,0);
    (**(code **)(lVar6 + 8))(lVar9,lVar5);
  }
  else {
    lVar7 = lVar6;
    func_0x000107c44424();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
  }
  *(long *)(lVar1 + 0x38) = lVar7;
  param_1[3] = lStack_70;
  param_1[4] = (long)&PTR_DAT_11054c438;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027ab4e4; end: 1027ab793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027ab4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lStack_90 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar7 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  uVar2 = 0x112de6120;
  func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
  pcVar3 = FUN_1027ab794;
  uStack_80 = param_2;
  func_0x00010072927c(FUN_1027ab794,0,uVar2);
  *(code **)(unaff_x20 + 0x20) = pcVar3;
  uVar2 = 0x112ebedb0;
  func_0x0001000285a8(0x112ebedb0,&UNK_10dadb6b0);
  uVar4 = 0x1027ab7c4;
  uStack_78 = param_5;
  func_0x00010072927c(0x1027ab7c4,0,uVar2);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  func_0x000107c6157c(param_7);
  uVar2 = 0x112ebbd80;
  func_0x0001000285a8(0x112ebbd80,&UNK_10dad4dd8);
  pcVar3 = FUN_1027ab7f4;
  uStack_70 = param_6;
  func_0x00010072927c(FUN_1027ab7f4,0,uVar2);
  *(code **)(unaff_x20 + 0x40) = pcVar3;
  func_0x000100083b20(&lStack_68);
  lVar5 = *(long *)(lStack_68 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar1 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar1 == 0) {
    FUN_1027ad268(0,0x112d56378,&PTR_PTR_1126ae790);
    lVar5 = lStack_88;
    lVar1 = lStack_90;
    (**(code **)(lStack_90 + 0x68))
              (lVar7,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lStack_88);
    lVar6 = lVar7;
    func_0x000104188018(lVar7,0,0);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_7);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(param_4);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_70);
    (**(code **)(lVar1 + 8))(lVar7,lVar5);
  }
  else {
    lVar6 = lVar1;
    func_0x000107c44424();
    func_0x000107c61180();
    func_0x000107c61574(param_1);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_70);
    func_0x000107c61574(param_7);
    func_0x000107c615e8(lVar1);
  }
  *(long *)(unaff_x20 + 0x38) = lVar6;
  return unaff_x20;
}



/* Entry: 1027ab794; end: 1027ab7f3;  */

void FUN_1027ab794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c42798();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027ab7f4; end: 1027ab863;  */

void FUN_1027ab7f4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10dadb7b0;
  func_0x000107c614e0(&UNK_10dadb7b0);
  uVar2 = *param_2;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c614bc(param_1,&uStack_38,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ab864; end: 1027ab87b;  */

void FUN_1027ab864(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027ab87c,0,0);
  return;
}



/* Entry: 1027ab87c; end: 1027ab8f7;  */

/* WARNING: Removing unreachable block (ram,0x0001027ab8a4) */

void FUN_1027ab87c(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1027ab8f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 1027ab8f8; end: 1027ab93f;  */

void FUN_1027ab8f8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027ab940,0,0);
  return;
}



/* Entry: 1027ab940; end: 1027aba9f;  */

void FUN_1027ab940(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  plVar1 = *(long **)(unaff_x22 + 0x10);
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (plVar1 != (long *)0x0) {
    lVar4 = *(long *)(unaff_x22 + 0x20);
    plVar2 = plVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(plVar1);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x00010006c00c(plVar2,param_2);
    plVar1 = plVar2;
    func_0x0001010282b0(plVar2,param_2);
    plVar3 = plVar2;
    func_0x00010006c090(plVar2,param_2);
    if (lVar4 != 0) {
      FUN_1027aa314();
      func_0x000107c613f8(&UNK_1106acde0,plVar3,0,0);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = lVar4;
      *(undefined1 *)(plVar3 + 3) = 0;
      func_0x000107c61654();
      func_0x00010006c090(plVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001027aba20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x00010006c090(plVar2,param_2);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001027aba5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(plVar1,0,0);
      return;
    }
  }
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1027abaa0;
  lVar4 = *(long *)(unaff_x22 + 0x18);
  plVar1[0xc] = *(long *)(unaff_x22 + 0x10);
  plVar1[0xd] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027abb2c,0,0);
  return;
}



/* Entry: 1027abaa0; end: 1027abb13;  */

void FUN_1027abaa0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001027abaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027abb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,1);
  return;
}



/* Entry: 1027abb14; end: 1027abb2b;  */

void FUN_1027abb14(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027abb2c,0,0);
  return;
}



/* Entry: 1027abb2c; end: 1027abd1b;  */

void FUN_1027abb2c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x38);
  puVar2 = PTR_PTR_1126bc7b8;
  func_0x000107c61168();
  func_0x000100083b20(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = uVar7;
  func_0x000107c4cb6c(uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar3;
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c430f0();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x70) = puVar2;
  func_0x000107c61170(uVar7);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = uVar7;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  func_0x000107c61170(uVar7);
  func_0x000100083b20(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar8;
  func_0x000100083b20(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
  func_0x0001000285a8(0x112ebeea8,&UNK_10dadb7a0);
  puVar4 = &UNK_11054c4a8;
  func_0x000107c613fc(&UNK_11054c4a8,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(puVar2);
  func_0x0001048897a0(uVar6,1,0,FUN_1027ad2a8,puVar4);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar6;
  func_0x000107c61574(puVar4);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1027abd1c;
                    /* WARNING: Could not recover jumptable at 0x0001027abd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1027aa4c8();
  return;
}



/* Entry: 1027abd1c; end: 1027abd6f;  */

void FUN_1027abd1c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  *(undefined8 *)(lVar1 + 0xa8) = param_2;
  *(undefined1 *)(lVar1 + 0x29) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027abd70,0,0);
  return;
}



/* Entry: 1027abd70; end: 1027abfcf;  */

void FUN_1027abd70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(char *)(unaff_x22 + 0x29) == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar8;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x50,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
    func_0x000107c614b0(uVar8);
    uVar8 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c6147c(lVar6,unaff_x22 + 0x58,uVar8,&UNK_1106acde0,0);
    if ((int)lVar6 == 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
      puVar7 = *(undefined8 **)(unaff_x22 + 0x58);
      func_0x000107c614ac();
      FUN_1027aa314();
      func_0x000107c613f8(&UNK_1106acde0,puVar7,0,0);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = uVar9;
      *(undefined1 *)(puVar7 + 3) = 6;
      func_0x000107c61654();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar5);
    }
    else {
      puVar7 = *(undefined8 **)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
      FUN_1027ad2b8(puVar7,*(undefined8 *)(unaff_x22 + 0xa8),1);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x28);
      FUN_1027aa314();
      func_0x000107c613f8(&UNK_1106acde0,puVar7,0,0);
      *puVar7 = uVar1;
      puVar7[1] = uVar10;
      puVar7[2] = uVar11;
      *(undefined1 *)(puVar7 + 3) = uVar3;
      func_0x000107c61654();
      func_0x0001027ad2ec(uVar1,uVar10,uVar11,uVar3);
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar2);
      func_0x0001027ad390(uVar1,uVar10,uVar11,uVar3);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x58));
    }
                    /* WARNING: Could not recover jumptable at 0x0001027abfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001027abf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8,uVar2);
  return;
}



/* Entry: 1027abfd0; end: 1027ac033;  */

void FUN_1027abfd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027ac034,0,0);
  return;
}



/* Entry: 1027ac034; end: 1027ac287;  */

void FUN_1027ac034(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 200);
  func_0x000107c4ca5c();
  if (lVar1 == 2) {
    func_0x0001000285a8(0x112ebedb8,&UNK_10dadb6d8);
    func_0x000100083b20(unaff_x22 + 0x78);
    plVar9 = *(long **)(unaff_x22 + 0x78);
    plVar5 = plVar9;
    func_0x000107c5ddc0();
    func_0x000107c61180();
    func_0x000107c61170(plVar9);
    plVar9 = plVar5;
    func_0x0001000bda74();
    *(long **)(unaff_x22 + 0x130) = plVar9;
    func_0x000107c61170(plVar5);
    uVar7 = 0x112ebedc0;
    func_0x0001000285a8(0x112ebedc0,&UNK_10dadb6e0);
    puVar6 = (undefined8 *)(unaff_x22 + 0x80);
    *puVar6 = uVar7;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar2;
    plVar5 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x140) = plVar5;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1027ac630;
    lVar1 = unaff_x22 + 0x70;
    lVar8 = unaff_x22 + 0x88;
  }
  else {
    if (lVar1 != 1) {
      puVar10 = *(undefined8 **)(unaff_x22 + 200);
      puVar6 = puVar10;
      func_0x000107c4ca5c();
      puVar3 = puVar6;
      FUN_1027aa314();
      func_0x000107c613f8(&UNK_1106acde0,puVar3,0,0);
      *puVar3 = puVar6;
      puVar3[1] = puVar10;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 2;
      func_0x000107c61654();
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      func_0x000107c61174(puVar10);
      func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001027ac284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x0001000285a8(0x112ebedc8,&UNK_10dadb708);
    func_0x000100083b20(unaff_x22 + 0xa8);
    plVar9 = *(long **)(unaff_x22 + 0xa8);
    plVar5 = plVar9;
    func_0x000107c450b4();
    func_0x000107c61180();
    func_0x000107c61170(plVar9);
    plVar9 = plVar5;
    func_0x0001000bda74();
    *(long **)(unaff_x22 + 0xf0) = plVar9;
    func_0x000107c61170(plVar5);
    uVar7 = 0x112ebedd0;
    func_0x0001000285a8(0x112ebedd0,&UNK_10dadb710);
    puVar6 = (undefined8 *)(unaff_x22 + 0xb0);
    *puVar6 = uVar7;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf8) = plVar2;
    plVar5 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x100) = plVar5;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1027ac288;
    lVar1 = unaff_x22 + 0xa0;
    lVar8 = unaff_x22 + 0xb8;
  }
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = lVar8;
  plVar2[9] = (long)puVar6;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = lVar1;
  lVar8 = *plVar9;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar1 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar1;
  lVar1 = *(long *)(lVar8 + 0x50);
  plVar2[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[0x10] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar9;
  lVar8 = *(long *)(*plVar9 + 0x50);
  plVar5[7] = lVar8;
  lVar1 = 0;
  __sSqMa(0,lVar8);
  plVar5[8] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[9] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar1 = *(long *)(lVar8 + -8);
  plVar5[0xb] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 1027ac288; end: 1027ac36b;  */

void FUN_1027ac288(void)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xf0);
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf8));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    lVar5 = *(long *)(lVar4 + 0xa0);
    *(long *)(lVar4 + 0x108) = lVar5;
    func_0x000107c614f0(lVar5);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 1;
    plVar2 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x110) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_1027ac36c;
    lVar6 = *(long *)(lVar4 + 200);
    plVar2[0x15] = -0x7ffffffef2524930;
    plVar2[0x16] = lVar5;
    plVar2[0x13] = lVar4 + 0x10;
    plVar2[0x14] = -0x2fffffffffffffe9;
    plVar2[0x12] = lVar6;
    lVar6 = *(long *)(lVar4 + 0x38);
    plVar2[0x18] = *(long *)(lVar4 + 0x40);
    plVar2[0x17] = lVar6;
    pcVar3 = FUN_1027a9c28;
  }
  else {
    pcVar3 = FUN_1027acb60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 1027ac36c; end: 1027ac3d7;  */

void FUN_1027ac36c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x108);
  *(undefined8 *)(lVar3 + 0x118) = param_1;
  *(undefined8 *)(lVar3 + 0x120) = param_2;
  *(long *)(lVar3 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x110));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1027ac3d8;
  }
  else {
    pcVar2 = FUN_1027acbb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1027ac3d8; end: 1027ac62f;  */

void FUN_1027ac3d8(void)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x118);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x00010006c00c(puVar6,uVar12);
  puVar5 = puVar6;
  func_0x000107c5ee20(puVar6,uVar12);
  func_0x000107c4635c();
  func_0x000107c61170(puVar5);
  func_0x00010006c090(puVar6,uVar12);
  if (puVar4 != (undefined *)0x0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
    puVar7 = PTR_PTR_1126affc0;
    func_0x000107c61168();
    puVar2 = PTR__kCMTimeZero_110348670;
    uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar11;
    func_0x000107c5d19c();
    func_0x000107c61180();
    func_0x00010006c090(uVar12,uVar16);
    *(undefined **)(unaff_x22 + 0x170) = puVar7;
    func_0x000107c61170(puVar4);
    func_0x000107c61174(puVar7);
    func_0x000100083b20(unaff_x22 + 0x90);
    lVar13 = *(long *)(unaff_x22 + 0x90);
    lVar8 = lVar13;
    func_0x000107c42424();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x178) = lVar8;
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(puVar7);
    lVar13 = lVar8;
    func_0x000107c614f0();
    plVar9 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x180) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1027ac8e8;
    plVar9[0xe] = (long)(PTR___syXlN_11034f1a0 + 8);
    plVar9[0xf] = lVar8;
    plVar9[0xc] = 0;
    plVar9[0xd] = lVar13;
    plVar9[0xb] = (long)FUN_1027accb4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aadf4,0,0);
    return;
  }
  uVar14 = *(ulong *)(unaff_x22 + 0x120);
  uVar1 = (uint)(uVar14 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      uVar15 = uVar14 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(*(int *)(unaff_x22 + 0x11c),*(int *)(unaff_x22 + 0x118))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1027ac630);
        (*pcVar3)();
      }
      uVar15 = (ulong)(*(int *)(unaff_x22 + 0x11c) - *(int *)(unaff_x22 + 0x118));
    }
  }
  else if (uVar10 == 2) {
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x118) + 0x10);
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x118) + 0x18);
    uVar15 = lVar13 - lVar8;
    if (SBORROW8(lVar13,lVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1027ac594);
      (*pcVar3)();
    }
  }
  else {
    uVar15 = 0;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  FUN_1027aa314();
  func_0x000107c613f8(&UNK_1106acde0,puVar6,0,0);
  *puVar6 = uVar16;
  puVar6[1] = uVar15;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 4;
  func_0x000107c61654();
  func_0x000107c61174(uVar16);
  func_0x00010006c090(uVar12,uVar14);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001027ac628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027ac630; end: 1027ac68f;  */

void FUN_1027ac630(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x130);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x138));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1027ac690;
  }
  else {
    pcVar2 = FUN_1027acbe8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1027ac690; end: 1027ac767;  */

void FUN_1027ac690(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  *(long *)(unaff_x22 + 0x148) = lVar6;
  lVar2 = lVar6;
  func_0x000107c614f0();
  func_0x000107c5eec4(uVar1);
  func_0x000107c5eeac();
  *(long *)(unaff_x22 + 0x150) = param_2;
  (**(code **)(lVar4 + 8))(uVar1,uVar5);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027ac768;
  lVar4 = *(long *)(unaff_x22 + 200);
  plVar3[0x10] = param_2;
  plVar3[0x11] = lVar6;
  plVar3[0xe] = -0x7ffffffef2524930;
  plVar3[0xf] = lVar2;
  plVar3[0xc] = 0;
  plVar3[0xd] = -0x2fffffffffffffe9;
  plVar3[10] = lVar4;
  plVar3[0xb] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aa710,0,0);
  return;
}



/* Entry: 1027ac768; end: 1027ac7ef;  */

void FUN_1027ac768(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x150);
  uVar3 = *(undefined8 *)(lVar4 + 0x148);
  *(long *)(lVar4 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x158));
  func_0x000107c6142c(uVar1);
  func_0x000107c615e8(uVar3);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x168) = param_1;
    pcVar2 = FUN_1027ac7f0;
  }
  else {
    pcVar2 = FUN_1027acc3c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1027ac7f0; end: 1027ac8e7;  */

void FUN_1027ac7f0(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  func_0x000107c5dd5c();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x170) = puVar1;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x168));
  func_0x000107c61174(puVar1);
  func_0x000100083b20(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x90);
  lVar2 = lVar4;
  func_0x000107c42424();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x178) = lVar2;
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(puVar1);
  lVar4 = lVar2;
  func_0x000107c614f0();
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027ac8e8;
  plVar3[0xe] = (long)(PTR___syXlN_11034f1a0 + 8);
  plVar3[0xf] = lVar2;
  plVar3[0xc] = 0;
  plVar3[0xd] = lVar4;
  plVar3[0xb] = (long)FUN_1027accb4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027aadf4,0,0);
  return;
}



/* Entry: 1027ac8e8; end: 1027ac94f;  */

void FUN_1027ac8e8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    func_0x000107c615e8(param_1);
    pcVar1 = FUN_1027ac950;
  }
  else {
    pcVar1 = (code *)0x1027acc70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027ac950; end: 1027aca1f;  */

void FUN_1027ac950(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000100083b20(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  func_0x0001000a8868(unaff_x22 + 0x48,uVar2);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 400) = uVar6;
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1027aca20;
                    /* WARNING: Could not recover jumptable at 0x0001027aca1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0xc0),uVar6,"snapDoc(from:)",0xe,0x6000000000000002,0x7b,
             unaff_x22 + 0x98,uVar2,lVar3);
  return;
}



/* Entry: 1027aca20; end: 1027aca8f;  */

void FUN_1027aca20(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    func_0x000107c61170(*(undefined8 *)(lVar2 + 400));
    pcVar1 = FUN_1027acb10;
  }
  else {
    *(undefined8 *)(lVar2 + 0x1a0) = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c61170(*(undefined8 *)(lVar2 + 400));
    pcVar1 = FUN_1027aca90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027aca90; end: 1027acb0f;  */

void FUN_1027aca90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar3;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001027acb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027acb10; end: 1027acb5f;  */

void FUN_1027acb10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  func_0x000107c615e8(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x48);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001027acb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027acb60; end: 1027acbb3;  */

void FUN_1027acb60(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001027acbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027acbb4; end: 1027acbe7;  */

void FUN_1027acbb4(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001027acbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027acbe8; end: 1027acc3b;  */

void FUN_1027acbe8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001027acc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027acc3c; end: 1027accb3;  */

void FUN_1027acc3c(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001027acc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027accb4; end: 1027acdbf;  */

ulong FUN_1027accb4(ulong param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  pcStack_40 = FUN_1027acdc0;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ff0b04;
  puStack_48 = &UNK_11054c470;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c4e91c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  if (param_1 != 0) {
    uVar2 = 0;
    FUN_1027ad268(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = param_1;
    func_0x000107c5fc54(param_1,uVar2);
    if (uVar3 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      func_0x000107c6142c();
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      func_0x000107c60480();
      func_0x000107c6142c(uVar3);
    }
    if (uVar4 == 0) {
      func_0x000107c61170(param_1);
      param_1 = 0;
    }
  }
  return param_1;
}



/* Entry: 1027acdc0; end: 1027ace03;  */

long FUN_1027acdc0(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c44984();
    func_0x000107c61170(param_1);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ace04);
  (*pcVar1)();
}



/* Entry: 1027ace04; end: 1027ace6f;  */

void FUN_1027ace04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1027ace70; end: 1027acebf;  */

void FUN_1027ace70(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1027acec0;
  plVar1[2] = param_1;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027ab87c,0,0);
  return;
}



/* Entry: 1027acec0; end: 1027acf1f;  */

void FUN_1027acec0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027acf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027acf20; end: 1027acf83;  */

void FUN_1027acf20(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1027acf84;
  plVar2[0x19] = param_2;
  plVar2[0x1a] = lVar3;
  plVar2[0x18] = param_1;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0x1b] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x1c] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027ac034,0,0);
  return;
}



/* Entry: 1027acf84; end: 1027acfbf;  */

void FUN_1027acf84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027acfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027acfc0; end: 1027ad0bf;  */

void FUN_1027acfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  puVar1 = &UNK_11054c4d0;
  func_0x000107c613fc(&UNK_11054c4d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_70 = FUN_1027ad438;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1027ad1a4;
  puStack_78 = &UNK_11054c4e8;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107e60dbc(param_2,param_3,param_4,param_5,param_6,param_6,param_7,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1027ad0c0; end: 1027ad21b;  */

void FUN_1027ad0c0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puStack_50;
  long lStack_48;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    puStack_50 = param_1;
    lStack_48 = param_2;
    func_0x000107c61174();
    func_0x000107c61174(param_2);
    func_0x000100b60084(&puStack_50);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    return;
  }
  puVar1 = param_1;
  FUN_1027aa314();
  puVar2 = &UNK_1106acde0;
  func_0x000107c613f8(&UNK_1106acde0,puVar1,0,0);
  *puVar1 = param_4;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 1;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x00010488ade0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1027ad21c; end: 1027ad22b;  */

undefined1  [16] FUN_1027ad21c(void)

{
  return ZEXT816(0x11054c460);
}



/* Entry: 1027ad22c; end: 1027ad24b;  */

void FUN_1027ad22c(void)

{
  func_0x000107c61168(&PTR_PTR_112ebee18);
  return;
}



/* Entry: 1027ad24c; end: 1027ad267;  */

void FUN_1027ad24c(long param_1,long param_2)

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



/* Entry: 1027ad268; end: 1027ad2a7;  */

void FUN_1027ad268(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027ad2a8; end: 1027ad2b7;  */

void FUN_1027ad2a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar8 = &puStack_90;
  puVar7 = &UNK_11054c4d0;
  func_0x000107c613fc(&UNK_11054c4d0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  pcStack_70 = FUN_1027ad438;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1027ad1a4;
  puStack_78 = &UNK_11054c4e8;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(puVar7);
  func_0x000107e60dbc(uVar1,uVar4,uVar2,uVar5,uVar3,uVar3,uVar6,ppuVar8);
  func_0x000107c60bd0(ppuVar8);
  return;
}


