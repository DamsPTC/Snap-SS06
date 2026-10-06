/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107853424; end: 10785342f;  */

undefined ** FUN_107853424(void)

{
  return &PTR_DAT_1109e2b00;
}



/* Entry: 10785370c; end: 107853737;  */

void FUN_10785370c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10785406c; end: 1078540bb;  */

/* WARNING: Possible PIC construction at 0x000107854080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107854084) */
/* WARNING: Removing unreachable block (ram,0x000107854088) */
/* WARNING: Removing unreachable block (ram,0x0001078540ac) */
/* WARNING: Removing unreachable block (ram,0x000107854098) */

bool FUN_10785406c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe38();
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return param_1 == lVar1;
}



/* Entry: 107854250; end: 107854273;  */

undefined8 * FUN_107854250(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e2ba0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107854460();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  func_0x000107853680(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 1078547e4; end: 1078547e7;  */

void FUN_1078547e4(void)

{
  func_0x000107854820();
  func_0x0001074f8ec0();
  return;
}



/* Entry: 107854c98; end: 107854cbb;  */

void FUN_107854c98(void)

{
  func_0x000107854cd8();
  func_0x0001074f8ec0();
  return;
}



/* Entry: 107855004; end: 107855023;  */

void FUN_107855004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010785500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078551a0; end: 1078551b3;  */

void FUN_1078551a0(void)

{
  func_0x00010785514c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107855718; end: 107855ad7;  */

undefined8 ***** FUN_107855718(undefined8 *****param_1,undefined8 *****param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *****pppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 in_x7;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined8 **ppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined8 ***pppuVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  undefined8 ***pppuStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_15c [16];
  undefined1 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 uStack_120;
  undefined8 ***pppuStack_118;
  undefined8 uStack_110;
  undefined1 auStack_e0 [16];
  undefined8 ****ppppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_90;
  
  pppppuVar2 = param_1;
  pppppuVar5 = param_2;
  func_0x000107855da8();
  uStack_90 = extraout_x8;
  func_0x00010726fc00(&pppuStack_c8,pppppuVar2 + 1);
  if ((undefined8 ****)pppuStack_c8 != (undefined8 ****)0x0) {
    func_0x00010726fc3c();
    uStack_190 = uStack_c0;
    pppuStack_198 = pppuStack_c8;
    in_ZR = (undefined8 ***)*pppuStack_c8 == (undefined8 ***)0xffffffffffffffff;
    if (!(bool)in_ZR) {
      pppuStack_c8 = (undefined8 ***)0x0;
      uStack_c0 = 0;
      pppuStack_118 = (undefined8 ****)0x0;
      uStack_110 = 0;
      func_0x0001072508cc(&pppuStack_118);
      goto LAB_1078557ac;
    }
    func_0x00010726fc88();
  }
  func_0x000107855dc8();
  pppuStack_198 = (undefined8 ****)0x0;
  uStack_190 = 0;
  pppuStack_c8 = (undefined8 ***)0x0;
  uStack_c0 = 0;
LAB_1078557ac:
  func_0x0001072508cc();
  func_0x00010726fc00(&pppuStack_c8,param_1 + 1);
  if (pppuStack_c8 == (undefined8 ***)0x0) {
    func_0x000107855dc8();
  }
  else {
    ppuVar8 = *pppuStack_c8;
    func_0x000107855dc8();
    in_ZR = ppuVar8 == (undefined8 **)0xffffffffffffffff;
    if (!(bool)in_ZR) {
      ppppuVar9 = param_1[5];
      Hint_Prefetch(ppppuVar9[0x20],0,2,0);
      pppppuVar2 = param_1 + 6;
      func_0x000104c2fe38(ppppuVar9[0x20]);
      lVar11 = 0;
      pppuVar6 = ppppuVar9[0x21];
      pppuVar10 = ppppuVar9[0x22];
      pppuVar12 = ppppuVar9[0x20];
      uVar7 = (ulong)pppuVar12 >> 0xc ^ (ulong)pppppuVar2 >> 7;
      bVar1 = (byte)pppppuVar2;
      uVar16 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar7 = uVar7 & (ulong)pppuVar10;
        uVar17 = *(undefined8 *)((long)pppuVar12 + uVar7);
        cVar18 = (char)((ulong)uVar17 >> 8);
        cVar19 = (char)((ulong)uVar17 >> 0x10);
        cVar20 = (char)((ulong)uVar17 >> 0x18);
        cVar21 = (char)((ulong)uVar17 >> 0x20);
        cVar22 = (char)((ulong)uVar17 >> 0x28);
        bVar15 = (byte)((ulong)uVar17 >> 0x30);
        bVar23 = (byte)((ulong)uVar17 >> 0x38);
        for (uVar13 = CONCAT17(-(bVar23 == (bVar1 & 0x7f)),
                               CONCAT16(-(bVar15 == (bVar1 & 0x7f)),
                                        CONCAT15(-(cVar22 == (char)(uVar16 >> 0x28)),
                                                 CONCAT14(-(cVar21 == (char)(uVar16 >> 0x20)),
                                                          CONCAT13(-(cVar20 ==
                                                                    (char)(uVar16 >> 0x18)),
                                                                   CONCAT12(-(cVar19 ==
                                                                             (char)(uVar16 >> 0x10))
                                                                            ,CONCAT11(-(cVar18 ==
                                                                                       (char)(uVar16
                                                                                             >> 8)),
                                                                                      -((char)uVar17
                                                                                       == (char)
                                                  uVar16)))))))) & 0x8080808080808080; uVar13 != 0;
            uVar13 = uVar13 - 1 & uVar13) {
          uVar14 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar7 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & (ulong)pppuVar10
          ;
          pppppuVar5 = param_1 + 6;
          pppuVar3 = pppuVar6;
          func_0x000104c32db4();
          if (((ulong)pppuVar3 & 1) != 0) {
            pppuVar6 = ppppuVar9[0x20];
            func_0x000107855618(ppppuVar9[0x21] + uVar14 * 8);
            pppppuVar5 = (undefined8 *****)((long)pppuVar6 + uVar14);
            func_0x00010ae6cb48(ppppuVar9 + 0x20,pppppuVar5,0x40);
            goto LAB_107855884;
          }
        }
        bVar15 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                     CONCAT16(-(bVar15 == 0x80),
                                              CONCAT15(-(cVar22 == -0x80),
                                                       CONCAT14(-(cVar21 == -0x80),
                                                                CONCAT13(-(cVar20 == -0x80),
                                                                         CONCAT12(-(cVar19 == -0x80)
                                                                                  ,CONCAT11(-(cVar18
                                                                                             == 
                                                  -0x80),-((char)uVar17 == -0x80)))))))),1);
        if ((bVar15 & 1) != 0) break;
        lVar11 = lVar11 + 8;
        uVar7 = lVar11 + uVar7;
      }
LAB_107855884:
      if ((((param_2[2] == (undefined8 ****)0x0) && ((*(byte *)((long)param_2 + 0x19) & 1) == 0)) &&
          (((ulong)param_2[3] & 1) == 0)) &&
         (in_ZR = *(char *)(param_1 + 0xd) == '\x01', (bool)in_ZR)) {
        pppuVar10 = ppppuVar9[0x1d];
        func_0x000104c2fe00(&pppuStack_118,param_1 + 0xe);
        pppppuVar5 = (undefined8 *****)&pppuStack_118;
        pppuVar6 = pppuVar10;
        func_0x00010747b8f8();
        if (pppuVar6 == (undefined8 ***)0x0) {
          ppppuVar4 = param_2[4];
          pppuVar6 = (undefined8 ***)(long)*(char *)((long)ppppuVar4 + 0x17);
          ppppuVar9 = ppppuVar4;
          if ((long)pppuVar6 < 0) {
            ppppuVar9 = (undefined8 ****)*ppppuVar4;
            pppuVar6 = ppppuVar4[1];
          }
          func_0x0001078ba1ec(auStack_188,ppppuVar9,pppuVar6);
          func_0x000107273b60(auStack_e0,1);
          ppppuVar9 = ppppuStack_d0;
          ppppuStack_d0[2] = (undefined8 ****)0x0;
          *ppppuStack_d0 = (undefined8 ***)&PTR_DAT_110996440;
          ppppuStack_d0[1] = (undefined8 ****)0x0;
          func_0x000104c2fe00(&pppuStack_c8,&pppuStack_118);
          ppppuStack_130 = (undefined8 ****)0x0;
          ppppuStack_128 = (undefined8 ****)0x0;
          uStack_120 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_148 = 0;
          auStack_15c[0] = 0;
          uStack_14c = 0;
          func_0x0001077814e8(ppppuVar9 + 3,&pppuStack_c8,auStack_188,0,&ppppuStack_130,&uStack_148,
                              auStack_15c,in_x7,0,0);
          func_0x00010724e0ac(&uStack_148);
          func_0x00010724e0ac(&ppppuStack_130);
          func_0x000104c2f714(&pppuStack_c8);
          param_2 = (undefined8 *****)ppppuStack_d0;
          ppppuStack_d0 = (undefined8 *****)0x0;
          param_1 = param_2 + 3;
          func_0x000107273c84(auStack_e0);
          pppuStack_c8 = (undefined8 ***)0x0;
          uStack_c0 = 0;
          func_0x000107272e90(&pppuStack_c8);
          ppppuStack_128 = param_2;
          uStack_170 = 0;
          uStack_168 = 0;
          pppuStack_c8 = (undefined8 ***)&PTR_DAT_1109b7190;
          pppppuVar5 = &ppppuStack_130;
          ppppuStack_130 = param_1;
          pppuStack_b0 = &pppuStack_c8;
          func_0x00010747b0e0(pppuVar10,pppppuVar5,0,0,&pppuStack_c8);
          func_0x00010724b884(&pppuStack_c8);
          func_0x00010725af58(&ppppuStack_130);
          func_0x000107272e90(&uStack_170);
          func_0x00010724e5f4(auStack_188);
        }
        func_0x000104c2f714(&pppuStack_118);
      }
    }
  }
  while( true ) {
    pppppuVar2 = (undefined8 *****)&pppuStack_198;
    func_0x000107270b00(pppppuVar2);
    func_0x000107855d88(uStack_90);
    if ((bool)in_ZR) {
      return pppppuVar2;
    }
    ___stack_chk_fail();
    func_0x000107855de4();
    func_0x00010724b884(&pppuStack_c8);
    func_0x00010725af58(&ppppuStack_130);
    func_0x000107272e90(&uStack_170);
    func_0x00010724e5f4(auStack_188);
    func_0x000104c2f714(&pppuStack_118);
    in_ZR = (int)param_1 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch(param_2);
    ___cxa_end_catch();
  }
  func_0x000107270b00(&pppuStack_198);
  __Unwind_Resume(param_2);
  func_0x0001004a5364(pppppuVar5,&PTR_DAT_1109e2dd0);
  param_2 = param_2 + 1;
  if ((int)pppppuVar5 == 0) {
    param_2 = (undefined8 *****)0x0;
  }
  return param_2;
}



/* Entry: 107855e40; end: 10785646b;  */

void FUN_107855e40(long **param_1,int param_2,undefined8 *param_3,long *param_4)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long **pplVar4;
  ulong **ppuVar5;
  long **pplVar6;
  long **pplVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong ***pppuVar11;
  long ***ppplVar12;
  undefined8 uVar13;
  ulong uVar14;
  int extraout_w10;
  long *plVar15;
  long lVar16;
  long **pplVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [32];
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  undefined8 *puStack_238;
  undefined8 auStack_230 [3];
  long **pplStack_218;
  long **pplStack_210;
  long **pplStack_208;
  ulong **ppuStack_200;
  long **pplStack_1f8;
  long **pplStack_1f0;
  long **pplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [56];
  long **pplStack_170;
  long **pplStack_168;
  long **pplStack_160;
  ulong **ppuStack_158;
  long **pplStack_150;
  long **pplStack_148;
  long **pplStack_140;
  long **pplStack_138;
  long **pplStack_130;
  undefined1 auStack_128 [24];
  long ***ppplStack_110;
  undefined1 uStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined1 uStack_e0;
  ulong *apuStack_d8 [3];
  ulong **ppuStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a0 [32];
  undefined1 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 3) {
    lVar16 = *param_4;
    func_0x000104c2fe00(apuStack_d8,lVar16 + 8);
    lVar18 = (long)*(char *)(lVar16 + 0x5f);
    if (lVar18 < 0) {
      lVar18 = *(long *)(lVar16 + 0x50);
    }
    uVar1 = *(undefined4 *)(lVar16 + 0x40);
    if (lVar18 == 0) {
      puStack_260 = (ulong *)((ulong)puStack_260 & 0xffffffffffffff00);
      puStack_248 = (ulong *)((ulong)puStack_248 & 0xffffffffffffff00);
      uVar14 = 0;
    }
    else {
      func_0x0001002a8308(&puStack_260,lVar16 + 0x48);
      uVar14 = (ulong)puStack_248 & 0xff;
    }
    puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
    uStack_e0 = 0;
    if (((uVar14 & 1) != 0) && ((*(byte *)(param_3 + 2) & 1) != 0)) {
      puStack_2b0 = (ulong *)param_1;
      func_0x000107392e34();
      uStack_2a0 = param_3[1];
      uStack_2a8 = *param_3;
      if (param_3[1] != 0) {
        do {
          func_0x000107856b60();
        } while (extraout_w10 != 0);
      }
      if (((ulong)puStack_248 & 1) == 0) goto LAB_10785634c;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_298,&puStack_260);
      FUN_107856550(&pplStack_170,param_1 + 0x1e);
      pppuVar11 = &ppuStack_158;
      func_0x0001078568c0(pppuVar11,&puStack_2b0);
      pplVar7 = pplStack_148;
      pplVar6 = pplStack_150;
      ppuVar5 = ppuStack_158;
      pplVar4 = pplStack_168;
      pplVar17 = pplStack_170;
      pplStack_218 = pplStack_170;
      pplStack_210 = pplStack_168;
      pplStack_170 = (long **)0x0;
      pplStack_168 = (long **)0x0;
      pplStack_208 = pplStack_160;
      pplStack_1f8 = pplStack_150;
      ppuStack_200 = ppuStack_158;
      pplStack_150 = (long **)0x0;
      pplStack_148 = (long **)0x0;
      pplStack_1f0 = pplVar7;
      uStack_1d8 = (ulong **)pplStack_130;
      uStack_1e0 = (ulong **)pplStack_138;
      pplStack_1e8 = pplStack_140;
      pplStack_140 = (long **)0x0;
      pplStack_138 = (long **)0x0;
      pplStack_130 = (long **)0x0;
      func_0x000107856b98();
      *pppuVar11 = (ulong **)&PTR_DAT_1109e2f30;
      pplStack_218 = (long **)0x0;
      pplStack_210 = (long **)0x0;
      pppuVar11[4] = ppuVar5;
      pppuVar11[3] = (ulong **)pplStack_160;
      pppuVar11[2] = (ulong **)pplVar4;
      pppuVar11[1] = (ulong **)pplVar17;
      pppuVar11[5] = (ulong **)pplVar6;
      pppuVar11[6] = (ulong **)pplVar7;
      pplStack_1f8 = (long **)0x0;
      pplStack_1f0 = (long **)0x0;
      pppuVar11[8] = uStack_1e0;
      pppuVar11[7] = (ulong **)pplStack_1e8;
      pppuVar11[9] = uStack_1d8;
      pplStack_1e8 = (long **)0x0;
      uStack_1e0 = (ulong **)0x0;
      uStack_1d8 = (ulong **)0x0;
      ppplStack_110 = (long ***)pppuVar11;
      func_0x000107856494(&pplStack_218);
      uStack_108 = 1;
      func_0x0001073b333c(&puStack_100,auStack_128);
      func_0x00010730b1b0(auStack_128);
      func_0x000107856494(&pplStack_170);
      func_0x0001078564bc(&puStack_2b0);
    }
    plVar15 = param_1[0x1d];
    func_0x000104c2fe00(auStack_1a8,apuStack_d8);
    func_0x0001073131c8(auStack_1d0,&puStack_100);
    func_0x00010746fb30(plVar15,auStack_1a8,uVar1,auStack_1d0);
    func_0x00010730b1b0(auStack_1d0);
    func_0x000104c2f714(auStack_1a8);
    func_0x00010730b1b0(&puStack_100);
    func_0x0001001148fc(&puStack_260);
    func_0x000104c2f714(apuStack_d8);
LAB_107856308:
    uVar13 = 1;
  }
  else {
    if (param_2 == 2) {
      lVar18 = *param_4;
      puVar10 = auStack_230;
      func_0x0001072d6da0(puVar10,lVar18 + 8);
      if (*(char *)(lVar18 + 0x57) < '\0') {
        if (*(long *)(lVar18 + 0x48) != 0) goto LAB_107855ea8;
LAB_1078560a0:
        auStack_128[0] = 0;
        ppplStack_110 = (long ***)((ulong)ppplStack_110 & 0xffffffffffffff00);
      }
      else {
        if (*(char *)(lVar18 + 0x57) == '\0') goto LAB_1078560a0;
LAB_107855ea8:
        puVar10 = (undefined8 *)auStack_128;
        func_0x0001002a8308(puVar10,lVar18 + 0x40);
      }
      fVar20 = *(float *)(lVar18 + 0x5c);
      fVar19 = *(float *)(lVar18 + 0x60);
      fVar21 = *(float *)(lVar18 + 0x58);
      func_0x000107856b98();
      puVar10[1] = 0;
      puVar10[2] = 0;
      pplVar17 = (long **)(puVar10 + 3);
      puVar10[4] = 0;
      *pplVar17 = (long *)0x0;
      *puVar10 = &PTR_DAT_1109e2e50;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10[9] = 0;
      puStack_240 = (ulong *)pplVar17;
      puStack_238 = puVar10;
      func_0x000107853274(pplVar17,param_3);
      if (*(char *)(lVar18 + 0x7f) < '\0') {
        if (*(long *)(lVar18 + 0x70) != 0) goto LAB_1078560fc;
LAB_107856114:
        pplStack_218 = (long **)((ulong)pplStack_218 & 0xffffffffffffff00);
        ppuStack_200 = (ulong **)((ulong)ppuStack_200 & 0xffffffffffffff00);
      }
      else {
        if (*(char *)(lVar18 + 0x7f) == '\0') goto LAB_107856114;
LAB_1078560fc:
        func_0x0001002a8308(&pplStack_218,lVar18 + 0x68);
      }
      func_0x0001002a8208(puVar10 + 6,&pplStack_218);
      func_0x0001001148fc(&pplStack_218);
      puStack_240 = (ulong *)0x0;
      puStack_238 = (undefined8 *)0x0;
      pplStack_208 = (long **)((ulong)(uint)(int)fVar19 * 1000000);
      pplStack_1f8 = (long **)((ulong)(uint)(int)fVar20 * 1000000);
      ppuStack_200 = (ulong **)0x1;
      pplStack_1f0 = (long **)0x1;
      pplStack_1e8 = (long **)CONCAT71(pplStack_1e8._1_7_,1);
      uStack_1e0._0_5_ = CONCAT14(1,(int)fVar21);
      uStack_1d8 = (ulong **)((ulong)uStack_1d8._4_4_ << 0x20);
      pplStack_170 = (long **)((ulong)pplStack_170 & 0xffffffffffffff00);
      pplStack_150 = (long **)((ulong)pplStack_150 & 0xffffffffffffff00);
      pplStack_218 = pplVar17;
      pplStack_210 = (long **)puVar10;
      if (*(char *)(puVar10 + 9) == '\x01') {
        FUN_107856550(&puStack_260,param_1 + 0x1e);
        puVar3 = puStack_258;
        puVar2 = puStack_260;
        puStack_100 = puStack_260;
        puStack_f8 = puStack_258;
        puStack_260 = (ulong *)0x0;
        puStack_258 = (ulong *)0x0;
        puStack_f0 = puStack_250;
        ppplVar12 = (long ***)0x28;
        puStack_248 = (ulong *)param_1;
        puStack_e8 = (ulong *)param_1;
        __Znwm();
        *ppplVar12 = (long **)&PTR_DAT_1109e2ea0;
        ppplVar12[1] = (long **)puVar2;
        puStack_100 = (ulong *)0x0;
        puStack_f8 = (ulong *)0x0;
        ppplVar12[2] = (long **)puVar3;
        ppplVar12[3] = (long **)puStack_250;
        ppplVar12[4] = param_1;
        ppuStack_c0 = (ulong **)ppplVar12;
        func_0x00010725b1d4(&puStack_100);
        ppuVar5 = ppuStack_158;
        uStack_b8 = 1;
        if ((char)pplStack_150 == '\0') {
          func_0x000107475dd4(&pplStack_170,apuStack_d8);
          pplStack_150 = (long **)CONCAT71(pplStack_150._1_7_,1);
        }
        else {
          ppuStack_158 = (ulong **)0x0;
          if ((long ***)ppuVar5 == &pplStack_170) {
            lVar18 = 0x20;
LAB_107856220:
            (**(code **)((long)*ppuVar5 + lVar18))();
            if ((long ***)ppuStack_c0 == (long ***)0x0) {
              ppuStack_158 = (ulong **)0x0;
            }
            else {
              ppplVar12 = (long ***)ppuStack_c0;
              if (ppuStack_c0 != apuStack_d8) goto LAB_107856240;
              ppuStack_158 = (ulong **)&pplStack_170;
              (*(code *)(*ppuStack_c0)[3])(ppuStack_c0,&pplStack_170);
            }
          }
          else {
            if ((long ***)ppuVar5 != (long ***)0x0) {
              lVar18 = 0x28;
              goto LAB_107856220;
            }
LAB_107856240:
            ppuStack_c0 = (ulong **)0x0;
            ppuStack_158 = (ulong **)ppplVar12;
          }
        }
        func_0x000107475f08(apuStack_d8);
        func_0x00010725b1d4(&puStack_260);
      }
      plVar15 = param_1[0x1d];
      func_0x00010028af84(auStack_280,auStack_128);
      auStack_a0[0] = 0;
      uStack_80 = 0;
      bVar9 = (char)pplStack_150 == '\x01';
      if (bVar9) {
        func_0x000107479a54(auStack_a0,&pplStack_170);
      }
      uStack_80 = bVar9;
      func_0x00010746f444(plVar15,auStack_230,auStack_280,&pplStack_218,auStack_a0);
      func_0x000107475f08(auStack_a0);
      func_0x0001001148fc(auStack_280);
      func_0x000107475f08(&pplStack_170);
      func_0x00010730b220(&pplStack_218);
      func_0x00010785646c(&puStack_240);
      func_0x0001001148fc(auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
      goto LAB_107856308;
    }
    uVar13 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail(uVar13);
LAB_10785634c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x107856354);
  (*pcVar8)();
}



/* Entry: 107856550; end: 1078565a3;  */

void FUN_107856550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107856b60();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10785677c; end: 1078567b3;  */

undefined8 * FUN_10785677c(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_1109e2ea0;
  func_0x0001078567b4(param_1 + 1);
  param_1[4] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 1078569b8; end: 107856a63;  */

void FUN_1078569b8(long param_1)

{
  int iVar1;
  int extraout_w10;
  long lVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  func_0x0001078567e4(auStack_60,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x000107856870();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) != 0) {
      do {
        func_0x000107856b60();
      } while (extraout_w10 != 0);
    }
    uStack_30 = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010726acf0(&uStack_50);
    func_0x000107854174(lVar2 + 0x88,param_1 + 0x38,&uStack_40,&uStack_50);
    func_0x000107856b80();
    func_0x000107856b88();
  }
  func_0x000107856b78();
  return;
}



/* Entry: 107856c5c; end: 107856c6f;  */

void FUN_107856c5c(void)

{
  func_0x000107856c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10785705c; end: 107857077;  */

void FUN_10785705c(long param_1)

{
  func_0x000107857078();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 107857224; end: 10785736b;  */

undefined8 * FUN_107857224(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  
  *param_1 = &PTR_DAT_1109e3080;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = &UNK_10e52b660;
  param_1[0x14] = &UNK_10e52b660;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  puVar1 = param_1 + 0x1e;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  param_1[0x33] = puVar1 + 1;
  *(undefined1 *)(param_1 + 0x34) = 0;
  FUN_10785f1f4();
  uStack_51 = 0;
  puVar1 = puVar1 + 0x72;
  func_0x00010724e2c8(puVar1,&uStack_51);
  *(char *)(param_1 + 0x34) = (char)puVar1;
  return param_1;
}



/* Entry: 1078576b8; end: 1078576cf;  */

ulong FUN_1078576b8(ulong param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(long *)(param_1 + 0xc0) != *(long *)(param_1 + 200)) {
    return 1;
  }
  return (ulong)(*(long *)(param_1 + 0xd8) != *(long *)(param_1 + 0xe0));
}



/* Entry: 107858794; end: 107858953;  */

void FUN_107858794(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  uVar7 = *(ulong *)(param_1 + 0x30);
  if ((uVar7 != 0) && (lVar4 = *(long *)(param_1 + 0x40), lVar4 != 0)) {
    uVar5 = (ulong)param_2;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    if ((uVar7 & uVar9) == 0) {
      uVar11 = (ulong)(uVar6 - 1 & param_2);
    }
    else {
      uVar11 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = param_2 / uVar6;
        }
        uVar11 = (ulong)(param_2 - uVar1 * uVar6);
      }
    }
    lVar10 = *(long *)(param_1 + 0x28);
    plVar8 = *(long **)(lVar10 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return;
          }
          uVar13 = plVar8[1];
          if (uVar13 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            lVar12 = *plVar8;
            if ((uVar7 & uVar9) == 0) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar7 <= uVar5) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar11 * uVar7;
            }
            plVar3 = *(long **)(lVar10 + uVar5 * 8);
            do {
              plVar14 = plVar3;
              plVar3 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar8);
            if (plVar14 == (long *)(param_1 + 0x38)) {
LAB_1078588ac:
              if (lVar12 == 0) {
LAB_1078588e0:
                *(undefined8 *)(lVar10 + uVar5 * 8) = 0;
                lVar12 = *plVar8;
                goto LAB_1078588e8;
              }
              uVar11 = *(ulong *)(lVar12 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar11 & uVar9;
              }
              else {
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = uVar11 / uVar7;
                  }
                  uVar13 = uVar11 - uVar13 * uVar7;
                }
              }
              if (uVar13 != uVar5) goto LAB_1078588e0;
            }
            else {
              uVar11 = plVar14[1];
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar13 = 0;
                if (uVar7 != 0) {
                  uVar13 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar13 * uVar7;
              }
              if (uVar11 != uVar5) goto LAB_1078588ac;
LAB_1078588e8:
              if (lVar12 == 0) goto LAB_107858920;
              uVar11 = *(ulong *)(lVar12 + 8);
            }
            if ((uVar7 & uVar9) == 0) {
              uVar11 = uVar11 & uVar9;
            }
            else if (uVar7 <= uVar11) {
              uVar9 = 0;
              if (uVar7 != 0) {
                uVar9 = uVar11 / uVar7;
              }
              uVar11 = uVar11 - uVar9 * uVar7;
            }
            if (uVar11 != uVar5) {
              *(long **)(lVar10 + uVar11 * 8) = plVar14;
              lVar12 = *plVar8;
            }
LAB_107858920:
            *plVar14 = lVar12;
            *plVar8 = 0;
            *(long *)(param_1 + 0x40) = lVar4 + -1;
            func_0x000107859ab8();
            return;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uVar7 <= uVar13) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar13 / uVar7;
          }
          uVar13 = uVar13 - uVar2 * uVar7;
        }
      } while (uVar13 == uVar11);
    }
  }
  return;
}



/* Entry: 107859228; end: 107859243;  */

void FUN_107859228(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  func_0x0001073b3d28(param_1,&UNK_10f42b3af,0xe,param_2);
  func_0x0001073b3604();
  func_0x0001073b36b0(extraout_x8);
  return;
}



/* Entry: 1078595ac; end: 1078595f7;  */

void FUN_1078595ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107859a74();
  func_0x000107859514();
  func_0x000104c318bc(param_1 + 0x40,unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  return;
}



/* Entry: 107859828; end: 10785986b;  */

void FUN_107859828(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107859b30(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107859b70; end: 107859ca3;  */

ulong FUN_107859b70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010785a7a0();
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_38 = extraout_x8;
  func_0x000106886424(auStack_50,&UNK_10f42b3c3);
  puVar6 = &uStack_60;
  func_0x000107859ca4(&lStack_78,puVar6,auStack_50,1);
  func_0x00010688c9f8(auStack_50);
  lVar1 = lStack_70;
  lVar8 = lStack_70 - lStack_78;
  uVar2 = lVar8 != 0 && lVar8 / 0x18 == 4;
  if (lVar8 != 0 && (ulong)(lVar8 / 0x18) < 5) {
    uVar9 = 0;
    uVar10 = 0x18;
    lVar8 = lStack_78;
    while( true ) {
      if (lVar8 == lVar1) {
        uVar10 = uVar9 & 0xffffff00;
        uVar9 = uVar9 & 0xff;
        uVar7 = 0x100000000;
        uVar2 = 1;
        goto LAB_107859c34;
      }
      puVar6 = (undefined8 *)0x0;
      lVar4 = lVar8;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(lVar8,0,10);
      uVar3 = (uint)lVar4;
      uVar2 = uVar3 == 100;
      if (99 < uVar3) break;
      uVar9 = uVar3 << (ulong)(uVar10 & 0x1f) | uVar9;
      uVar10 = uVar10 - 8;
      lVar8 = lVar8 + 0x18;
    }
  }
  while( true ) {
    uVar7 = 0;
    uVar9 = 0;
    uVar10 = 0;
LAB_107859c34:
    func_0x0001000e30f4(&lStack_78);
    func_0x00010785a78c(uStack_38);
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x00010688c9f8(auStack_50);
    plVar5 = &lStack_78;
    func_0x0001000e30f4(plVar5);
    do {
      func_0x00010785a7bc();
    } while ((int)puVar6 == 0);
    ___cxa_begin_catch(plVar5);
    ___cxa_end_catch();
  }
  return uVar7 | (uVar10 | uVar9);
}



/* Entry: 10785a0b0; end: 10785a10f;  */

long FUN_10785a0b0(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010785a7a0();
  uStack_28 = extraout_x8;
  func_0x00010785a7cc();
  lVar1 = param_1;
  func_0x00010785a164(param_1,auStack_48,0);
  func_0x00010785a7c4();
  func_0x00010785a78c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010785a7b0();
  func_0x00010785a7bc();
  lVar3 = *(long *)(lVar1 + 0x30);
  lVar2 = lVar1;
  func_0x00010785a474();
  if ((*(long *)(lVar1 + 0x38) == lVar2 && *(long *)(lVar1 + 0x38) == lVar3) &&
     (*(long *)(lVar1 + 0x28) == lVar3)) {
    *(undefined1 *)(lVar1 + 0x40) = 1;
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x30);
  *(long *)(lVar1 + 0x28) = lVar2;
  *(long *)(lVar1 + 0x30) = lVar3;
  return lVar2;
}



/* Entry: 10785a3c0; end: 10785a423;  */

/* WARNING: Possible PIC construction at 0x00010785a3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a3f4) */
/* WARNING: Removing unreachable block (ram,0x00010785a410) */
/* WARNING: Removing unreachable block (ram,0x00010785a420) */
/* WARNING: Removing unreachable block (ram,0x00010785a404) */
/* WARNING: Removing unreachable block (ram,0x00010785a804) */

void FUN_10785a3c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x00010785a7a0();
  func_0x00010785a7cc();
  uVar1 = 0x20;
  __Znwm();
  func_0x00010688cca4();
  *param_3 = uVar1;
  return;
}



/* Entry: 10785a6a4; end: 10785a6bb;  */

uint FUN_10785a6a4(uint param_1)

{
  func_0x00010785a6bc();
  return param_1 ^ 1;
}



/* Entry: 10785aa88; end: 10785acaf;  */

undefined1 * FUN_10785aa88(undefined1 *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  
  *param_1 = 1;
  puVar3 = param_1;
  func_0x00010785a9ec();
  func_0x00010785a938();
  __ZNSt3__15mutex4lockEv();
  puVar12 = *(undefined1 **)(puVar3 + 0x48);
  if ((puVar12 != (undefined1 *)0x0) && (*(long *)(puVar3 + 0x58) != 0)) {
    puVar4 = param_1;
    func_0x00010785bcbc();
    puVar7 = puVar12 + -1;
    if (((ulong)puVar12 & (ulong)puVar7) == 0) {
      puVar9 = (undefined1 *)((ulong)puVar4 & (ulong)puVar7);
    }
    else {
      puVar9 = puVar4;
      if (puVar12 <= puVar4) {
        uVar1 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar4 / (ulong)puVar12;
        }
        puVar9 = puVar4 + -(uVar1 * (long)puVar12);
      }
    }
    lVar6 = *(long *)(puVar3 + 0x40);
    plVar5 = *(long **)(lVar6 + (long)puVar9 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10785ac6c;
          puVar10 = (undefined1 *)plVar5[1];
          if (puVar10 != puVar4) break;
          if ((undefined1 *)plVar5[2] == param_1) {
            lVar8 = *plVar5;
            puVar12 = *(undefined1 **)(puVar3 + 0x48);
            puVar7 = puVar12 + -1;
            if (((ulong)puVar12 & (ulong)puVar7) == 0) {
              puVar4 = (undefined1 *)((ulong)puVar7 & (ulong)puVar4);
            }
            else if (puVar12 <= puVar4) {
              uVar1 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar1 = (ulong)puVar4 / (ulong)puVar12;
              }
              puVar4 = puVar4 + -(uVar1 * (long)puVar12);
            }
            plVar2 = *(long **)(lVar6 + (long)puVar4 * 8);
            do {
              plVar11 = plVar2;
              plVar2 = (long *)*plVar11;
            } while ((long *)*plVar11 != plVar5);
            if (plVar11 == (long *)(puVar3 + 0x50)) {
LAB_10785abcc:
              if (lVar8 == 0) {
LAB_10785ac00:
                *(undefined8 *)(lVar6 + (long)puVar4 * 8) = 0;
                lVar8 = *plVar5;
                goto LAB_10785ac08;
              }
              puVar9 = *(undefined1 **)(lVar8 + 8);
              if (((ulong)puVar12 & (ulong)puVar7) == 0) {
                puVar10 = (undefined1 *)((ulong)puVar9 & (ulong)puVar7);
              }
              else {
                puVar10 = puVar9;
                if (puVar12 <= puVar9) {
                  uVar1 = 0;
                  if (puVar12 != (undefined1 *)0x0) {
                    uVar1 = (ulong)puVar9 / (ulong)puVar12;
                  }
                  puVar10 = puVar9 + -(uVar1 * (long)puVar12);
                }
              }
              if (puVar10 != puVar4) goto LAB_10785ac00;
LAB_10785ac10:
              if (((ulong)puVar12 & (ulong)puVar7) == 0) {
                puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar7);
              }
              else if (puVar12 <= puVar9) {
                uVar1 = 0;
                if (puVar12 != (undefined1 *)0x0) {
                  uVar1 = (ulong)puVar9 / (ulong)puVar12;
                }
                puVar9 = puVar9 + -(uVar1 * (long)puVar12);
              }
              if (puVar9 != puVar4) {
                *(long **)(lVar6 + (long)puVar9 * 8) = plVar11;
                lVar8 = *plVar5;
              }
            }
            else {
              puVar9 = (undefined1 *)plVar11[1];
              if (((ulong)puVar12 & (ulong)puVar7) == 0) {
                puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar7);
              }
              else if (puVar12 <= puVar9) {
                uVar1 = 0;
                if (puVar12 != (undefined1 *)0x0) {
                  uVar1 = (ulong)puVar9 / (ulong)puVar12;
                }
                puVar9 = puVar9 + -(uVar1 * (long)puVar12);
              }
              if (puVar9 != puVar4) goto LAB_10785abcc;
LAB_10785ac08:
              if (lVar8 != 0) {
                puVar9 = *(undefined1 **)(lVar8 + 8);
                goto LAB_10785ac10;
              }
            }
            *plVar11 = lVar8;
            *plVar5 = 0;
            *(long *)(puVar3 + 0x58) = *(long *)(puVar3 + 0x58) + -1;
            func_0x00010785c0e0();
            goto LAB_10785ac6c;
          }
        }
        if (((ulong)puVar12 & (ulong)puVar7) == 0) {
          puVar10 = (undefined1 *)((ulong)puVar10 & (ulong)puVar7);
        }
        else if (puVar12 <= puVar10) {
          uVar1 = 0;
          if (puVar12 != (undefined1 *)0x0) {
            uVar1 = (ulong)puVar10 / (ulong)puVar12;
          }
          puVar10 = puVar10 + -(uVar1 * (long)puVar12);
        }
      } while (puVar10 == puVar9);
    }
  }
LAB_10785ac6c:
  __ZNSt3__15mutex6unlockEv(puVar3);
  func_0x00010785b888(param_1 + 0x78);
  func_0x00010724b8b8(param_1 + 0x68);
  func_0x00010785b1ac(param_1 + 0x48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10785b0b8; end: 10785b137;  */

void FUN_10785b0b8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10785b12c;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10785b12c:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 10785b358; end: 10785b3c3;  */

long * FUN_10785b358(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010785b3a0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10785b53c; end: 10785b567;  */

void FUN_10785b53c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 3) {
    uVar2 = *puVar1;
    puStack_38[1] = puVar1[1];
    *puStack_38 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_38[2] = puVar1[2];
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x00010725b1d4(param_2);
  }
  func_0x00010785b5f8(&uStack_60);
  return;
}



/* Entry: 10785b84c; end: 10785b853;  */

void FUN_10785b84c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010725b1d4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10785bcfc; end: 10785be27;  */

void FUN_10785bcfc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010785c108();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10785bff8; end: 10785c147;  */

void FUN_10785bff8(void)

{
  return;
}



/* Entry: 10785c8b0; end: 10785c92f;  */

bool FUN_10785c8b0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_3 + 0x2a0;
  lVar1 = 0x1e0;
  do {
    lVar2 = lVar1;
    if ((lVar2 == 0) ||
       (func_0x00010785c148(param_4,param_5,param_3 + 0x60,lVar3),
       *(double *)(lVar3 + 0x20) < param_1)) break;
    param_1 = *(double *)(lVar3 + 0x18);
    lVar3 = lVar3 + 0x28;
    lVar1 = lVar2 + -0x28;
  } while (param_1 <= param_2);
  return lVar2 == 0;
}



/* Entry: 10785cbac; end: 10785cc53;  */

double FUN_10785cbac(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 3.141592653589793 - *(double *)(param_2 + 0x88) * 6.283185307179586;
  _exp(dVar1);
  _atan();
  func_0x00010785d34c();
  func_0x00010785d32c(dVar1 * 57.29577951308232,0x3f91df46a2529d39);
  return param_1 * 512.0 * *(double *)(param_2 + 0x80);
}



/* Entry: 10785cf34; end: 10785cf47;  */

void FUN_10785cf34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000107878b80(auStack_a0,param_1);
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = param_1[0x12];
  _memcpy(param_1 + 4,auStack_a0,0x80);
  return;
}



/* Entry: 10785d2f8; end: 10785d357;  */

double FUN_10785d2f8(double *param_1)

{
  return param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2];
}



/* Entry: 10785d67c; end: 10785d6d3;  */

double FUN_10785d67c(double param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  func_0x00010785dc48();
  func_0x00010785dd0c(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010785dc70();
  if (((ulong)param_2 & 0x100000000) != 0) {
    param_1 = (double)SUB84(param_2,0);
  }
  return param_1;
}



/* Entry: 10785d984; end: 10785d9f7;  */

undefined4
FUN_10785d984(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  ulong unaff_x21;
  
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dcec();
  func_0x00010785dc70();
  func_0x00010785dce4();
  plVar2 = (long *)*param_1;
  func_0x00010785dc48();
  func_0x00010785dcbc(*(undefined8 *)(*plVar2 + 0x50));
  func_0x00010785dc60();
  uVar1 = (int)plVar2;
  if ((unaff_x21 & 1) == 0) {
    uVar1 = param_4;
  }
  return uVar1;
}



/* Entry: 10785de1c; end: 10785e023;  */

void FUN_10785de1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010785e024();
  func_0x00010785e440(auStack_100);
  func_0x0001004c3cd0(auStack_e8,&UNK_10f42b44d,auStack_100);
  func_0x00010048a6c8(auStack_d0,auStack_e8,&DAT_10f68e8ee);
  func_0x00010785e440(auStack_118,param_3);
  func_0x00010533a9c0(auStack_b8,auStack_d0,auStack_118);
  func_0x00010048a6c8(auStack_a0,auStack_b8,&DAT_10f68e8ee);
  func_0x00010785e440(auStack_130,param_4);
  func_0x00010533a9c0(auStack_88,auStack_a0,auStack_130);
  func_0x00010048a6c8(auStack_70,auStack_88,&DAT_10f68e8ee);
  func_0x00010785e440(auStack_148,param_5);
  func_0x00010533a9c0(auStack_58,auStack_70,auStack_148);
  func_0x00010048a6c8(param_1,auStack_58,&DAT_10f684600);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010785e438();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  return;
}



/* Entry: 10785e584; end: 10785e687;  */

void FUN_10785e584(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  func_0x000100651b10(&uStack_48,puVar2,uVar1);
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  func_0x000100651b10(&uStack_60,puVar2,uVar1);
  func_0x000105340004(auStack_78,uStack_48,uStack_40);
  func_0x000105340004(auStack_90,uStack_60,uStack_58);
  func_0x00010785e464(param_1);
  func_0x000100100fec(auStack_90);
  func_0x000100100fec(auStack_78);
  func_0x000100100fec(&uStack_60);
  func_0x000100100fec(&uStack_48);
  return;
}



/* Entry: 10785e920; end: 10785e93f;  */

void FUN_10785e920(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x000107867c64(param_1,&uStack_14);
  return;
}



/* Entry: 10785ed14; end: 10785ed47;  */

void FUN_10785ed14(long param_1,undefined8 param_2)

{
  func_0x000107868fbc();
  func_0x0001078692c8(param_1 + 0xa8,param_2);
  func_0x0001078692b8();
  return;
}



/* Entry: 10785f1f4; end: 10785f253;  */

void FUN_10785f1f4(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  if (lRam0000000113822d50 == 0) {
    func_0x00010785f254(&lStack_28);
    lVar2 = lStack_28;
    lVar1 = lRam0000000113822d48;
    lStack_28 = 0;
    lRam0000000113822d48 = lVar2;
    if (lVar1 != 0) {
      func_0x000107869298();
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        func_0x000107869298();
      }
    }
    lRam0000000113822d50 = lRam0000000113822d48;
  }
  return;
}



/* Entry: 107864fd8; end: 10786504f;  */

void FUN_107864fd8(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  ulong unaff_x20;
  
  func_0x000107868f7c();
  func_0x00010786912c();
  func_0x000107869274();
  func_0x000107869014();
  func_0x000107869174();
  func_0x00010786660c();
  func_0x0001078690b4();
  func_0x000107869158();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001078690c0();
    lVar1 = extraout_x8_00;
  }
  else {
    func_0x00010786921c();
    lVar1 = extraout_x8;
  }
  if (lVar1 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x0001078690a8();
  func_0x0001078692c0();
  func_0x000107869150();
  return;
}



/* Entry: 107865794; end: 1078657a3;  */

void FUN_107865794(long param_1)

{
  undefined1 uStack_11;
  
  *(int *)(param_1 + 0xbe4) = *(int *)(param_1 + 0xbe4) + -1;
  if ((*(int *)(param_1 + 0xbe4) == 0) && (*(char *)(param_1 + 0xbe0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xbe0) = 0;
    func_0x000107865840(param_1,&uStack_11);
    return;
  }
  return;
}



/* Entry: 1078660bc; end: 1078660d7;  */

void FUN_1078660bc(long param_1)

{
  undefined1 uStack_31;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    return;
  }
  func_0x00010563ab98();
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    func_0x000107869404((&PTR_DAT_1109e32d8)[*(uint *)(param_1 + 0x48)],&uStack_31);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 107866ae0; end: 107866b7b;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866ae0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined1 in_ZR;
  undefined4 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  undefined1 auStack_868 [24];
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 ***pppuStack_840;
  undefined8 uStack_838;
  long lStack_830;
  long lStack_828;
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [72];
  undefined4 uStack_7c0;
  undefined1 auStack_7b8 [72];
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  long lStack_738;
  long alStack_72a [8];
  undefined1 auStack_6e8 [72];
  undefined4 uStack_6a0;
  undefined8 ***pppuStack_630;
  undefined *puStack_628;
  undefined1 auStack_618 [16];
  undefined8 uStack_608;
  undefined4 uStack_5c0;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined1 auStack_538 [16];
  undefined4 uStack_528;
  undefined4 uStack_4e0;
  undefined8 ***pppuStack_470;
  undefined *puStack_468;
  undefined1 auStack_458 [16];
  long lStack_448;
  undefined4 uStack_400;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined1 auStack_378 [16];
  long lStack_368;
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  undefined4 uStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined4 uStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  ushort uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x0001078693dc();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x000107868fa4();
  func_0x0001078692b0();
  uVar3 = *(ushort *)(unaff_x21 + 0xa8);
  uVar7 = (ulong)uVar3;
  func_0x00010786933c();
  uStack_80 = 4;
  uStack_c8 = uVar3;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar5 = auStack_d8;
  func_0x000107867468(puVar5);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    puVar5 = auStack_d8;
    func_0x000107867468();
    func_0x00010786906c();
    puStack_e8 = &DAT_107866b7c;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868d78();
    func_0x000107869368();
    uVar4 = SUB84(puVar5,0);
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
        uVar4 = SUB84(puVar5,0);
      } while (extraout_w11_00 != 0);
    }
    func_0x0001078693e8();
    func_0x0001072adc24();
    uStack_160 = 5;
    uStack_1a8 = uVar4;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(uVar7 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar5 = auStack_1b8;
    func_0x000107289dd4(puVar5);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      puVar5 = auStack_1b8;
      func_0x000107289dd4();
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866c10;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x000107869368();
      uVar4 = SUB84(puVar5,0);
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
          uVar4 = SUB84(puVar5,0);
        } while (extraout_w11_01 != 0);
      }
      func_0x0001078693e8();
      func_0x0001072cd320();
      uStack_240 = 6;
      uStack_288 = uVar4;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(uVar7 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar5 = auStack_298;
      func_0x000107289cc8(puVar5);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        func_0x000107289cc8(auStack_298);
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866ca4;
        pppuStack_2b0 = &ppuStack_1d0;
        func_0x000107868d78();
        func_0x0001078693dc();
        if (extraout_x9_02 != 0) {
          do {
            func_0x000107868ef4();
          } while (extraout_w11_02 != 0);
        }
        func_0x000107868fa4();
        func_0x0001078692b0();
        lVar8 = *(long *)(uVar7 + 0xa8);
        func_0x00010786933c();
        uStack_320 = 7;
        lStack_368 = lVar8;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar5 = auStack_378;
        func_0x00010786748c(puVar5);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          func_0x00010786748c(auStack_378);
          func_0x00010786906c();
          puStack_388 = &DAT_107866d40;
          pppuStack_390 = &pppuStack_2b0;
          func_0x000107868d78();
          func_0x0001078693dc();
          if (extraout_x9_03 != 0) {
            do {
              func_0x000107868ef4();
            } while (extraout_w11_03 != 0);
          }
          func_0x000107868fa4();
          func_0x0001078692b0();
          lVar8 = *(long *)(lVar8 + 0xa8);
          func_0x00010786933c();
          uStack_400 = 8;
          lStack_448 = lVar8;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar5 = auStack_458;
          func_0x0001078674b0(puVar5);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            func_0x0001078674b0(auStack_458);
            func_0x00010786906c();
            puStack_468 = &DAT_107866ddc;
            pppuStack_470 = &pppuStack_390;
            func_0x000107868d78();
            func_0x000107869368();
            if (extraout_x9_04 != 0) {
              do {
                func_0x000107868ef4();
              } while (extraout_w11_04 != 0);
            }
            func_0x0001078693e8();
            func_0x00010750833c();
            uStack_528 = (undefined4)param_1;
            uStack_4e0 = 9;
            func_0x000107868f10();
            func_0x000107868e1c(*(undefined8 *)(lVar8 + 0x18));
            func_0x0001078690ec();
            func_0x0001078690e4();
            puVar5 = auStack_538;
            func_0x000107289e5c(puVar5);
            func_0x000107868d60();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107868f1c();
              func_0x0001078690e4();
              func_0x000107289e5c(auStack_538);
              func_0x00010786906c();
              puStack_548 = &DAT_107866e70;
              pppuStack_550 = &pppuStack_470;
              func_0x000107868d78();
              func_0x000107869368();
              if (extraout_x9_05 != 0) {
                do {
                  func_0x000107868ef4();
                } while (extraout_w11_05 != 0);
              }
              func_0x0001078693e8();
              func_0x00010740f294();
              uStack_5c0 = 10;
              uStack_608 = param_1;
              func_0x000107868f10();
              func_0x000107868e1c(*(undefined8 *)(lVar8 + 0x18));
              func_0x0001078690ec();
              func_0x0001078690e4();
              puVar5 = auStack_618;
              func_0x00010740f2d0(puVar5);
              func_0x000107868d60();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107868f1c();
                func_0x0001078690e4();
                func_0x00010740f2d0(auStack_618);
                func_0x00010786906c();
                puStack_628 = &DAT_107866f04;
                pppuStack_630 = &pppuStack_550;
                func_0x000107868d78();
                uStack_740 = *param_3;
                lStack_738 = param_3[1];
                plVar6 = extraout_x8;
                if (lStack_738 != 0) {
                  do {
                    func_0x000107868ef4();
                    plVar6 = extraout_x8_00;
                  } while (extraout_w11_06 != 0);
                }
                lVar8 = *plVar6;
                func_0x00010785f084(alStack_72a);
                plVar6 = alStack_72a;
                func_0x0001078692c8(auStack_6e8);
                uStack_6a0 = 0xb;
                func_0x00010786954c();
                puVar5 = *(undefined1 **)(lVar8 + 0x18);
                func_0x000107868ecc();
                func_0x000107869290();
                func_0x0001078693cc();
                func_0x000107869424();
                func_0x000107868d60();
                if ((bool)in_ZR) {
                  return puVar5;
                }
                ___stack_chk_fail();
                func_0x000107869290();
                func_0x0001078693cc();
                func_0x000107869424();
                func_0x00010786906c();
                pcStack_748 = FUN_107866fac;
                pppuStack_750 = &pppuStack_630;
                func_0x000107868d78();
                lVar8 = *plVar6;
                lStack_828 = plVar6[1];
                lStack_830 = lVar8;
                if (lStack_828 != 0) {
                  do {
                    func_0x000107868ef4();
                  } while (extraout_w11_07 != 0);
                }
                uVar1 = *(undefined8 *)(lVar8 + 0xc0);
                uVar2 = *(undefined8 *)(lVar8 + 200);
                func_0x000107328418(auStack_820);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (auStack_808,auStack_820);
                uStack_7c0 = 0xc;
                puVar5 = auStack_7b8;
                uStack_838 = 0x10786700c;
                uStack_850 = uVar2;
                uStack_848 = uVar1;
                pppuStack_840 = &pppuStack_750;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (auStack_868);
                func_0x000107268798(puVar5,auStack_868);
                func_0x0001078693fc();
                return puVar5;
              }
            }
          }
        }
      }
    }
  }
  return puVar5;
}



/* Entry: 107866fac; end: 107867087;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x0001078693bc) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866fac(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  int extraout_w11;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [72];
  undefined4 uStack_80;
  undefined1 auStack_78 [72];
  
  func_0x000107868d78();
  lVar3 = *param_2;
  lStack_e8 = param_2[1];
  lStack_f0 = lVar3;
  if (lStack_e8 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  uVar2 = *(undefined8 *)(lVar3 + 200);
  func_0x000107328418(auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c8,auStack_e0);
  uStack_80 = 0xc;
  puVar4 = auStack_78;
  uStack_f8 = 0x10786700c;
  uStack_110 = uVar2;
  uStack_108 = uVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_128);
  func_0x000107268798(puVar4,auStack_128);
  func_0x0001078693fc();
  return puVar4;
}



/* Entry: 1078675b4; end: 1078675d7;  */

undefined8 FUN_1078675b4(undefined8 param_1)

{
  func_0x0001078675d8(param_1,0);
  return param_1;
}



/* Entry: 10786773c; end: 10786776f;  */

void FUN_10786773c(undefined8 *param_1)

{
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e3408;
  func_0x000107867790(param_1 + 3);
  return;
}



/* Entry: 107867824; end: 107867bcb;  */

undefined1  [16] FUN_107867824(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long ****pppplVar7;
  long lVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  long ****extraout_x8;
  long extraout_x8_00;
  long ****extraout_x9;
  undefined1 *extraout_x9_00;
  undefined8 *puVar11;
  long ****pppplVar12;
  long *plVar13;
  long *plVar14;
  long *extraout_x10;
  long ****pppplVar15;
  long ****extraout_x11;
  long ****pppplVar16;
  undefined1 *puVar17;
  long ****pppplVar18;
  long ****unaff_x26;
  long ***ppplVar19;
  undefined1 auVar20 [16];
  long ***ppplStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  
  pppplVar12 = (long ****)(param_1 + 3);
  func_0x000107867bcc();
  pppplVar18 = (long ****)param_1[1];
  pppplVar7 = pppplVar12;
  if (pppplVar18 != (long ****)0x0) {
    puVar17 = (undefined1 *)((long)pppplVar18 + -1);
    if (((ulong)pppplVar18 & (ulong)puVar17) == 0) {
      unaff_x26 = (long ****)((ulong)puVar17 & (ulong)pppplVar12);
    }
    else {
      unaff_x26 = pppplVar12;
      if (pppplVar18 <= pppplVar12) {
        uVar3 = 0;
        if (pppplVar18 != (long ****)0x0) {
          uVar3 = (ulong)pppplVar12 / (ulong)pppplVar18;
        }
        unaff_x26 = (long ****)((long)pppplVar12 - uVar3 * (long)pppplVar18);
      }
    }
    pppplVar16 = *(long *****)(*param_1 + (long)unaff_x26 * 8);
    if (pppplVar16 != (long ****)0x0) {
      do {
        while( true ) {
          pppplVar16 = (long ****)*pppplVar16;
          if (pppplVar16 == (long ****)0x0) goto LAB_1078678f0;
          pppplVar10 = (long ****)pppplVar16[1];
          if (pppplVar10 != pppplVar12) break;
          pppplVar7 = (long ****)(param_1 + 4);
          func_0x00010728905c(pppplVar7,pppplVar16 + 2,param_2);
          if (((ulong)pppplVar7 & 1) != 0) {
            uVar9 = 0;
            pppplVar7 = pppplVar16;
            goto LAB_107867b90;
          }
        }
        if (((ulong)pppplVar18 & (ulong)puVar17) == 0) {
          pppplVar10 = (long ****)((ulong)pppplVar10 & (ulong)puVar17);
        }
        else if (pppplVar18 <= pppplVar10) {
          uVar3 = 0;
          if (pppplVar18 != (long ****)0x0) {
            uVar3 = (ulong)pppplVar10 / (ulong)pppplVar18;
          }
          pppplVar10 = (long ****)((long)pppplVar10 - uVar3 * (long)pppplVar18);
        }
      } while (pppplVar10 == unaff_x26);
    }
  }
LAB_1078678f0:
  plVar1 = param_1 + 2;
  func_0x000107869528();
  uStack_70 = 1;
  *pppplVar7 = (long ***)0x0;
  pppplVar7[1] = (long ***)pppplVar12;
  ppplVar19 = (long ***)*param_3;
  pppplVar7[3] = (long ***)param_3[1];
  pppplVar7[2] = ppplVar19;
  pppplVar10 = pppplVar7 + 4;
  *(undefined1 *)pppplVar10 = 0;
  *(undefined4 *)(pppplVar7 + 6) = 0xffffffff;
  pppplVar16 = pppplVar10;
  ppplStack_80 = (long ***)pppplVar7;
  plStack_78 = plVar1;
  func_0x000107865ffc();
  uVar2 = *(uint *)(param_3 + 4);
  if (uVar2 != 0xffffffff) {
    pppplVar16 = &ppplStack_68;
    ppplStack_68 = (long ***)pppplVar10;
    (*(code *)(&PTR_DAT_1109e3448)[uVar2])(pppplVar16,param_3 + 2);
    *(uint *)(pppplVar7 + 6) = uVar2;
  }
  if ((pppplVar18 != (long ****)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)pppplVar18)) goto LAB_107867b14;
  func_0x000107869510();
  bVar5 = (long ****)0x2 < pppplVar18;
  bVar6 = pppplVar18 == (long ****)0x3;
  func_0x0001078692d0();
  pppplVar10 = extraout_x8;
  if (!bVar5 || bVar6) {
    pppplVar10 = extraout_x9;
  }
  if ((undefined1 *)((long)pppplVar10 + -1) == (undefined1 *)0x0) {
    pppplVar10 = (long ****)0x2;
  }
  else if (((ulong)pppplVar10 & (ulong)((long)pppplVar10 + -1)) != 0) {
    __ZNSt3__112__next_primeEm();
    pppplVar16 = pppplVar10;
  }
  pppplVar18 = (long ****)param_1[1];
  if (pppplVar18 < pppplVar10) {
LAB_1078679c0:
    if ((ulong)pppplVar10 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x107867bbc);
      (*pcVar4)();
    }
    lVar8 = (long)pppplVar10 << 3;
    __Znwm(lVar8);
    func_0x000107867c14(param_1,lVar8);
    param_1[1] = (long)pppplVar10;
    lVar8 = *param_1;
    for (pppplVar18 = (long ****)0x0; pppplVar10 != pppplVar18;
        pppplVar18 = (long ****)((long)pppplVar18 + 1)) {
      *(undefined8 *)(lVar8 + (long)pppplVar18 * 8) = 0;
    }
    plVar13 = (long *)*plVar1;
    pppplVar18 = pppplVar10;
    if (plVar13 != (long *)0x0) {
      pppplVar16 = (long ****)plVar13[1];
      puVar17 = (undefined1 *)((long)pppplVar10 + -1);
      uVar3 = 0;
      if (pppplVar10 != (long ****)0x0) {
        uVar3 = (ulong)pppplVar16 / (ulong)pppplVar10;
      }
      pppplVar15 = pppplVar16;
      if (pppplVar10 <= pppplVar16) {
        pppplVar15 = (long ****)((long)pppplVar16 - uVar3 * (long)pppplVar10);
      }
      if (((ulong)pppplVar10 & (ulong)puVar17) == 0) {
        pppplVar15 = (long ****)((ulong)pppplVar16 & (ulong)puVar17);
      }
      *(long **)(lVar8 + (long)pppplVar15 * 8) = plVar1;
      while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
        pppplVar16 = (long ****)plVar13[1];
        if (((ulong)pppplVar10 & (ulong)puVar17) == 0) {
          pppplVar16 = (long ****)((ulong)pppplVar16 & (ulong)puVar17);
        }
        else if (pppplVar10 <= pppplVar16) {
          uVar3 = 0;
          if (pppplVar10 != (long ****)0x0) {
            uVar3 = (ulong)pppplVar16 / (ulong)pppplVar10;
          }
          pppplVar16 = (long ****)((long)pppplVar16 - uVar3 * (long)pppplVar10);
        }
        if (pppplVar16 != pppplVar15) {
          if (*(long *)(lVar8 + (long)pppplVar16 * 8) == 0) {
            *(long **)(lVar8 + (long)pppplVar16 * 8) = plVar14;
            pppplVar15 = pppplVar16;
          }
          else {
            func_0x000107869374();
            lVar8 = extraout_x8_00;
            puVar17 = extraout_x9_00;
            plVar13 = extraout_x10;
            pppplVar15 = extraout_x11;
          }
        }
      }
    }
  }
  else if (pppplVar10 < pppplVar18) {
    func_0x0001078694f8();
    if ((pppplVar18 < (long ****)0x3) || (((ulong)pppplVar18 & (ulong)((long)pppplVar18 + -1)) != 0)
       ) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010786904c();
    }
    if (pppplVar10 <= pppplVar16) {
      pppplVar10 = pppplVar16;
    }
    if (pppplVar10 < pppplVar18) {
      if (pppplVar10 != (long ****)0x0) goto LAB_1078679c0;
      func_0x000107867c14(param_1,0);
      param_1[1] = 0;
      pppplVar18 = (long ****)0x0;
    }
    else {
      pppplVar18 = (long ****)param_1[1];
    }
  }
  if (((ulong)pppplVar18 & (ulong)((long)pppplVar18 + -1)) == 0) {
    unaff_x26 = (long ****)((ulong)((long)pppplVar18 + -1) & (ulong)pppplVar12);
  }
  else {
    unaff_x26 = pppplVar12;
    if (pppplVar18 <= pppplVar12) {
      uVar3 = 0;
      if (pppplVar18 != (long ****)0x0) {
        uVar3 = (ulong)pppplVar12 / (ulong)pppplVar18;
      }
      unaff_x26 = (long ****)((long)pppplVar12 - uVar3 * (long)pppplVar18);
    }
  }
LAB_107867b14:
  lVar8 = *param_1;
  puVar11 = *(undefined8 **)(lVar8 + (long)unaff_x26 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    *pppplVar7 = (long ***)*plVar1;
    *plVar1 = (long)pppplVar7;
    *(long **)(lVar8 + (long)unaff_x26 * 8) = plVar1;
    if (*pppplVar7 != (long ***)0x0) {
      pppplVar12 = (long ****)(*pppplVar7)[1];
      if (((ulong)pppplVar18 & (ulong)((long)pppplVar18 + -1)) == 0) {
        pppplVar12 = (long ****)((ulong)pppplVar12 & (ulong)((long)pppplVar18 + -1));
      }
      else if (pppplVar18 <= pppplVar12) {
        uVar3 = 0;
        if (pppplVar18 != (long ****)0x0) {
          uVar3 = (ulong)pppplVar12 / (ulong)pppplVar18;
        }
        pppplVar12 = (long ****)((long)pppplVar12 - uVar3 * (long)pppplVar18);
      }
      *(long *****)(lVar8 + (long)pppplVar12 * 8) = pppplVar7;
    }
  }
  else {
    *pppplVar7 = (long ***)*puVar11;
    *puVar11 = pppplVar7;
  }
  ppplStack_80 = (long ***)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000107867c2c(&ppplStack_80);
  uVar9 = 1;
LAB_107867b90:
  auVar20._8_8_ = uVar9;
  auVar20._0_8_ = pppplVar7;
  return auVar20;
}



/* Entry: 107867d5c; end: 107867d5f;  */

void FUN_107867d5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e34d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107867e4c; end: 107867e6b;  */

void FUN_107867e4c(void)

{
  func_0x0001078694e0();
  func_0x000107867e6c();
  func_0x000107869480();
  return;
}



/* Entry: 107867f20; end: 107867f3b;  */

void FUN_107867f20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3520;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107868064; end: 107868077;  */

void FUN_107868064(void)

{
  func_0x000107868080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107868184; end: 1078681b7;  */

void FUN_107868184(undefined8 *param_1)

{
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e36b0;
  func_0x0001078681d8(param_1 + 3);
  return;
}



/* Entry: 1078682bc; end: 1078682db;  */

void FUN_1078682bc(void)

{
  func_0x0001078694e0();
  func_0x0001078682dc();
  func_0x000107869480();
  return;
}



/* Entry: 1078683a0; end: 1078683f3;  */

long FUN_1078683a0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x000107268350(lVar1 + 0xa8,param_3);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x100) = param_2[3];
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  return param_1;
}



/* Entry: 107868758; end: 10786875f;  */

void FUN_107868758(void)

{
  return;
}



/* Entry: 107868cb4; end: 107868ccb;  */

void FUN_107868cb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078696e8; end: 10786970b;  */

void FUN_1078696e8(void)

{
  func_0x00010726acf0();
  func_0x00010786970c();
  func_0x00010786da84();
  return;
}



/* Entry: 107869920; end: 107869947;  */

undefined1  [16] FUN_107869920(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  func_0x0001074d2700();
  param_2 = param_2 + 0x38;
  if (param_1 == 0) {
    param_2 = 0;
  }
  auVar1[8] = param_1 != 0;
  auVar1._0_8_ = param_2;
  auVar1._9_7_ = 0;
  return auVar1;
}



/* Entry: 107869d34; end: 107869e83;  */

void FUN_107869d34(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  undefined1 uStack_80;
  undefined1 auStack_78 [56];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_2;
  func_0x00010786d7b0();
  uStack_38 = extraout_x8;
  func_0x00010786a8a0();
  lStack_e0 = lVar4;
  while (lStack_e8 = param_1, param_1 != 0) {
    plVar1 = (long *)(lStack_e0 + 0x38);
    if (*(long *)(*plVar1 + 0x18) == 0) {
      auStack_78[0] = 0;
      uStack_40 = 0;
      auStack_b8[0] = 0;
      uStack_80 = 0;
      func_0x00010786d8d4(*(undefined8 *)(param_2 + 0x18));
      func_0x00010786dc70();
      func_0x00010786de20();
    }
    else {
      func_0x00010786a8a8();
      plStack_d8 = plVar1;
      lStack_d0 = lVar4;
      while (plStack_d8 != (long *)0x0) {
        plVar1 = (long *)(lStack_d0 + 0x38);
        if (*(long *)(*plVar1 + 0x18) == 0) {
          func_0x00010786de28();
          auStack_b8[0] = 0;
          uStack_80 = 0;
          func_0x00010786d8d4(*(undefined8 *)(param_2 + 0x18));
          func_0x00010786dc70();
          func_0x00010786de20();
        }
        else {
          func_0x00010746bbb8();
          plStack_c8 = plVar1;
          lVar3 = lVar4;
          while (lStack_c0 = lVar3, plStack_c8 != (long *)0x0) {
            func_0x00010786de28();
            func_0x00010729807c(auStack_b8);
            func_0x00010786d8d4(*(undefined8 *)(param_2 + 0x18));
            func_0x00010786dc70();
            func_0x00010786de20();
            func_0x000107262260(&plStack_c8);
            lVar4 = lVar3;
            lVar3 = lStack_c0;
          }
        }
        func_0x00010786d52c(&plStack_d8);
      }
    }
    func_0x00010786d4f8(&lStack_e8);
    param_1 = lStack_e8;
  }
  func_0x00010786d6e8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar2 = (long *)auStack_78;
    func_0x00010786dc70();
    func_0x00010724b3d8();
    func_0x00010786d838();
    func_0x00010786d78c();
    uStack_138 = extraout_x8_00;
    func_0x000107869d14();
    func_0x00010786dc98();
    ppuStack_158 = &PTR_DAT_1109e3a70;
    pppuStack_140 = &ppuStack_158;
    ppuStack_178 = &PTR_DAT_1109e3af0;
    pppuStack_160 = &ppuStack_178;
    plVar1 = plVar2;
    uStack_170 = param_4;
    uStack_168 = param_5;
    uStack_150 = param_4;
    uStack_148 = param_5;
    func_0x000107869a4c();
    func_0x00010786dbf8();
    func_0x00010786dca0();
    *(long *)(param_1 + 0x10) = plVar2[4];
    func_0x00010786d6e8(uStack_138);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010786dbf8();
      func_0x00010786dca0();
      func_0x00010786d838();
      func_0x00010786dae8();
      func_0x00010786b5b8();
      lVar3 = *plVar2;
      lVar4 = lVar3;
      func_0x00010786bdc4(lVar3,plVar1);
      if (lVar4 != 0) {
        func_0x00010786c5e0(lVar3,lVar4);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10786a0bc; end: 10786a193;  */

void FUN_10786a0bc(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_f0 [32];
  undefined1 auStack_b0 [8];
  char cStack_a8;
  undefined **appuStack_a0 [3];
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  undefined ***pppuStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010786d78c();
  auStack_b0[0] = 0;
  cStack_a8 = '\0';
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60);
  ppuStack_80 = &PTR_DAT_1109e3b70;
  pppuStack_68 = &ppuStack_80;
  pppuStack_88 = appuStack_a0;
  appuStack_a0[0] = &PTR_DAT_1109e3bf0;
  puStack_78 = auStack_b0;
  func_0x00010786a074();
  func_0x0001006393ec(appuStack_a0);
  func_0x00010750ad00(&ppuStack_80);
  func_0x00010786ddac();
  uVar1 = cStack_a8 == '\x01';
  if (!(bool)uVar1) {
    func_0x0001078699c4();
  }
  func_0x00010786d6e8(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001006393ec(appuStack_a0);
    pppuVar3 = &ppuStack_80;
    func_0x00010750ad00();
    func_0x00010786ddac();
    func_0x00010786d838();
    func_0x00010786a0b4();
    if (pppuVar3 == (undefined ***)0x0) {
      func_0x00010786967c();
      lVar2 = extraout_x8_00;
      func_0x000107277f30();
      *(undefined ***)(lVar2 + 0x10) = pppuVar3[2];
      return;
    }
    func_0x00010786dccc();
    func_0x00010786967c();
    func_0x0001073dcf84(extraout_x8_00,auStack_f0,0x113822d58);
    func_0x00010786d954();
    return;
  }
  return;
}



/* Entry: 10786a3cc; end: 10786a3eb;  */

undefined8 FUN_10786a3cc(undefined8 *param_1)

{
  func_0x00010786c940();
  return *param_1;
}



/* Entry: 10786a76c; end: 10786a863;  */

void FUN_10786a76c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  func_0x00010786d890();
  lVar2 = *(long *)(*param_2 + 0x18) + *(long *)(*param_1 + 0x18);
  func_0x00010786a864();
  uVar1 = unaff_x20;
  func_0x00010786a8a0();
  while (lStack_38 = lVar2, uVar1 != 0) {
    uStack_40 = uVar1;
    func_0x00010786d9e4();
    func_0x00010786a4e4();
    if ((uVar1 & 1) == 0) {
      uVar1 = unaff_x20;
      lVar3 = lVar2;
      func_0x00010786a4e4();
      if ((int)uVar1 == 0) {
        uVar1 = lVar2 + 0x38;
        func_0x00010786a8a8();
        lStack_48 = lVar3;
        while (uStack_50 = uVar1, uVar1 != 0) {
          func_0x00010786d9e4();
          func_0x00010786a604();
          if ((uVar1 & 1) == 0) {
            uVar1 = unaff_x20;
            func_0x00010786a604();
            if ((int)uVar1 == 0) {
              func_0x00010786d9e4();
              func_0x00010786a648();
            }
            else {
              func_0x00010786d9e4();
              func_0x00010786a3ec();
            }
          }
          func_0x00010786d52c(&uStack_50);
          uVar1 = uStack_50;
        }
      }
      else {
        func_0x00010786d9e4();
        func_0x00010786a368();
      }
    }
    func_0x00010786d4f8(&uStack_40);
    uVar1 = uStack_40;
    lVar2 = lStack_38;
  }
  func_0x00010786970c();
  *(ulong *)(unaff_x19 + 0x10) = uVar1;
  return;
}



/* Entry: 10786a978; end: 10786a97f;  */

void FUN_10786a978(undefined8 *param_1)

{
  undefined8 uVar1;
  uint extraout_w8;
  long unaff_x27;
  
  uVar1 = *param_1;
  func_0x00010786dae8();
  func_0x00010786d7c0();
  func_0x00010786d8e4();
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000104c32db4();
      if ((int)uVar1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786aacc; end: 10786aaeb;  */

void FUN_10786aacc(void)

{
  func_0x00010786def8();
  func_0x00010786aaec();
  return;
}



/* Entry: 10786ac64; end: 10786ac7b;  */

long * FUN_10786ac64(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar2 = (long *)*(long *)(param_1 + 0x28);
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    func_0x00010786acd0(plVar2 + 2);
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10786ae30; end: 10786ae53;  */

void FUN_10786ae30(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010786ae54();
  func_0x00010786da84();
  return;
}



/* Entry: 10786af20; end: 10786afa3;  */

void FUN_10786af20(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131adaf8 & 1) == 0) {
    iVar1 = 0x131adaf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010786afa4(0x1131adae8);
      ___cxa_guard_release(0x1131adaf8);
    }
  }
  func_0x00010786dce4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010786da24();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10786b098; end: 10786b0e7;  */

undefined8 * FUN_10786b098(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010786b21c(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010786ddc0();
  }
  return param_1;
}



/* Entry: 10786b2b8; end: 10786b313;  */

void FUN_10786b2b8(void)

{
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010786da40();
  func_0x00010726c9e8();
  func_0x00010786dba4();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010726cda0(*(long *)(unaff_x21 + 8) + unaff_x22 * 0xa8 + 0x40,unaff_x23 + 8);
  }
  else {
    func_0x00010786da60();
    func_0x00010786b314();
  }
  func_0x00010786deec();
  func_0x00010786da74();
  return;
}



/* Entry: 10786b4d8; end: 10786b4f3;  */

void FUN_10786b4d8(void)

{
  func_0x00010786d840();
  func_0x00010786b4f4();
  return;
}



/* Entry: 10786b678; end: 10786b6af;  */

undefined8 * FUN_10786b678(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e37e0;
  func_0x00010786b6b0(param_1 + 3);
  return param_1;
}



/* Entry: 10786bb30; end: 10786bb73;  */

void FUN_10786bb30(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010786acd0(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10786bf38; end: 10786bf67;  */

void FUN_10786bf38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e38d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10786c318; end: 10786c33f;  */

void FUN_10786c318(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e39b0);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c428; end: 10786c4ef;  */

void FUN_10786c428(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010786d778();
  uStack_38 = extraout_x8;
  func_0x000104c2fe00(auStack_118,*(undefined8 *)(lVar1 + 8));
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000104c318bc(auStack_e0,auStack_118);
  func_0x0001072786d8(auStack_a0,lVar1 + 8);
  func_0x0001072965a0(auStack_128,auStack_e0,1);
  func_0x00010786975c();
  func_0x00010726b264(auStack_128);
  func_0x00010729651c(auStack_e0);
  func_0x000104c2f714();
  func_0x00010786d6e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729651c(auStack_e0);
  func_0x000104c2f714(auStack_118);
  func_0x00010786d838();
  func_0x00010786db18();
  func_0x00010786d924();
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c614; end: 10786c72f;  */

void FUN_10786c614(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10786c6c8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10786c6c8;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10786c6c8:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10786c8b0; end: 10786c8c3;  */

undefined ** FUN_10786c8b0(void)

{
  return &PTR_DAT_1109e3bd0;
}



/* Entry: 10786ca00; end: 10786ca37;  */

undefined8 * FUN_10786ca00(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e3830;
  func_0x00010786ca38(param_1 + 3);
  return param_1;
}



/* Entry: 10786ccc8; end: 10786cd13;  */

void FUN_10786ccc8(void)

{
  ulong unaff_x20;
  
  func_0x00010786da40();
  func_0x00010786cd14();
  func_0x00010786dba4();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010786dd50();
    func_0x00010786ce88();
  }
  else {
    func_0x00010786da60();
    func_0x00010786cd88();
  }
  func_0x00010786deec();
  func_0x00010786da74();
  return;
}



/* Entry: 10786cf18; end: 10786cf1f;  */

void FUN_10786cf18(undefined8 param_1,long param_2)

{
  func_0x00010786d840(param_1,param_2,param_2 + 0x38);
  func_0x00010786cf3c();
  return;
}



/* Entry: 10786d09c; end: 10786d1b7;  */

void FUN_10786d09c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long extraout_x11;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar2;
  long lStack_50;
  ulong uStack_48;
  
  func_0x00010786d890();
  func_0x00010786d1b8();
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar2 != 0) {
    if ((ulong)(*(long *)(*unaff_x19 + -8) + unaff_x19[3]) < uVar2) {
      if (uVar2 == 7) {
        lVar1 = 8;
      }
      else {
        lVar1 = (long)(uVar2 - 1) / 7 + uVar2;
      }
      param_2 = 0xffffffffffffffff >> (LZCOUNT(lVar1) & 0x3fU);
      if (lVar1 == 0) {
        param_2 = 1;
      }
      func_0x00010786d1bc();
    }
    func_0x00010786d254();
    while (uStack_48 = param_2, unaff_x20 != 0) {
      lStack_50 = unaff_x20;
      func_0x00010786ddd4();
      lVar1 = unaff_x20;
      func_0x00010786d9e4();
      func_0x00010ae6c8b4();
      func_0x00010786daf4((uint)unaff_x20 & 0x7f);
      func_0x00010786dd44();
      func_0x000104c2fe00();
      func_0x0001073dd510(extraout_x11 + lVar1 * 0x48 + 0x38,param_2 + 0x38);
      func_0x00010786d52c(&lStack_50);
      unaff_x20 = lStack_50;
      param_2 = uStack_48;
    }
    unaff_x19[3] = uVar2;
    func_0x00010786dea4();
    *(ulong *)(extraout_x8 + -8) = extraout_x9 - uVar2;
  }
  return;
}



/* Entry: 10786d37c; end: 10786d393;  */

void FUN_10786d37c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010786ddcc(*(long *)(param_1 + 8) + param_2 * 0x48,param_3,param_4);
  func_0x00010786dcf4();
  return;
}



/* Entry: 10786d58c; end: 10786d5e7;  */

void FUN_10786d58c(undefined8 param_1)

{
  uint extraout_w8;
  long unaff_x27;
  
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000107283140();
      if ((int)param_1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786e144; end: 10786e213;  */

undefined1  [16]
FUN_10786e144(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_78 [32];
  long alStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010732478c(alStack_58,param_4);
  func_0x0001073247cc(auStack_78,param_5);
  func_0x00010786e7b8(param_1,param_2,param_3,alStack_58,auStack_78);
  func_0x000107324894(auStack_78);
  plVar2 = alStack_58;
  func_0x0001073248c8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000107324894(auStack_78);
    func_0x0001073248c8(alStack_58);
    __Unwind_Resume();
    lVar4 = *plVar2;
    lVar1 = plVar2[1];
    while ((lVar5 = lVar1, lVar4 != lVar1 &&
           (uVar3 = param_3, func_0x000104c32db4(param_3,lVar4), lVar5 = lVar4, (uVar3 & 1) == 0)))
    {
      lVar4 = lVar4 + 0x58;
    }
    lVar4 = lVar5 + 0x38;
    if (lVar5 == plVar2[1]) {
      lVar4 = 0;
    }
    auVar7[8] = lVar5 != plVar2[1];
    auVar7._0_8_ = lVar4;
    auVar7._9_7_ = 0;
    return auVar7;
  }
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 10786e8ec; end: 10786e937;  */

undefined8 FUN_10786e8ec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  lVar1 = ((long *)*param_2)[1];
  for (lVar2 = *(long *)*param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    func_0x0001073f26dc(&uStack_28,lVar2);
  }
  return uStack_28;
}



/* Entry: 10786ecb0; end: 10786ed1b;  */

undefined1  [16] FUN_10786ecb0(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_20;
  double dStack_18;
  
  if (((ulong)param_1[4] & 1) == 0) {
    dStack_18 = param_2[1];
    dStack_20 = *param_2;
  }
  else {
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = *param_1;
    dVar7 = param_1[1];
    bVar2 = true;
    bVar3 = false;
    if (dVar4 <= param_1[2]) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar4) && !NAN(dVar6)) {
        bVar2 = dVar4 < dVar6;
        bVar3 = false;
      }
    }
    NEON_fminnm(param_1[2],dVar4);
    if (bVar2 == bVar3) {
      dVar6 = dVar4;
    }
    bVar2 = true;
    bVar3 = false;
    if (dVar5 <= param_1[3]) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar5) && !NAN(dVar7)) {
        bVar2 = dVar5 < dVar7;
        bVar3 = false;
      }
    }
    NEON_fminnm(param_1[3],dVar5);
    if (bVar2 == bVar3) {
      dVar7 = dVar5;
    }
    func_0x00010786ed54(dVar6,dVar7,&dStack_20);
  }
  auVar1._8_8_ = dStack_18;
  auVar1._0_8_ = dStack_20;
  return auVar1;
}



/* Entry: 10786f6b8; end: 10786f837;  */

void FUN_10786f6b8(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010787145c();
  if (*(short *)((long)param_4 + 0x16) == 4) {
    if (*param_4 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000104c32320(&uStack_78,*param_4,0,param_3 + 0x10);
      func_0x00010787155c();
      func_0x000104c322f0();
      func_0x000104c32474(&uStack_78);
      uVar3 = *param_4;
    }
    puVar5 = *(uint **)(param_4 + 2);
    puVar6 = puVar5 + (ulong)uVar3 * 6;
    while( true ) {
      if (puVar5 == puVar6) {
        return;
      }
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      if (*(short *)((long)puVar5 + 0x16) != 4) break;
      func_0x00010740ed44(&uStack_78,*puVar5);
      lVar4 = *(long *)(puVar5 + 2);
      lVar7 = (ulong)*puVar5 * 0x18;
      lVar1 = (ulong)*puVar5 * 3;
      while (lVar1 != 0) {
        func_0x00010786ee68(lVar4);
        uStack_50 = param_1;
        uStack_48 = param_2;
        func_0x000104c31a04(&uStack_78,&uStack_50);
        lVar4 = lVar4 + 0x18;
        lVar7 = lVar7 + -0x18;
        lVar1 = lVar7;
      }
      func_0x00010787155c();
      func_0x000107841f1c();
      func_0x000104c31c5c(&uStack_78);
      puVar5 = puVar5 + 6;
    }
    func_0x000107871318();
    func_0x0001078712e0();
    func_0x000107871284();
    func_0x00010787143c();
  }
  else {
    func_0x000107871318();
    func_0x0001078712e0();
    func_0x000107871284();
    func_0x00010787143c();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10786f7e8);
  (*pcVar2)();
}



/* Entry: 1078702c4; end: 10787030b;  */

/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */

void FUN_1078702c4(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  undefined8 *puVar12;
  int *extraout_x8_01;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *puVar13;
  undefined *puVar14;
  int aiStack_40 [6];
  undefined8 uStack_28;
  int *piVar3;
  
  piVar3 = aiStack_40;
  piVar8 = aiStack_40;
  puVar13 = &stack0xfffffffffffffff0;
  func_0x0001078712ac();
  func_0x000107871404();
  FUN_107870de8();
  func_0x0001078712ec();
  func_0x000107871270(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078712ec();
  puVar14 = &UNK_10787030c;
  func_0x00010787135c();
  piVar6 = extraout_x8_00;
code_r0x00010787030c:
  puVar2 = (undefined1 *)((long)piVar3 + -0x70);
  *(int **)((long)piVar3 + -0x30) = unaff_x22;
  *(int **)((long)piVar3 + -0x28) = unaff_x21;
  *(int **)((long)piVar3 + -0x20) = unaff_x20;
  *(int **)((long)piVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)piVar3 + -0x10) = puVar13;
  *(undefined **)((long)piVar3 + -8) = puVar14;
  puVar13 = (undefined1 *)((long)piVar3 + -0x10);
  func_0x000107871298();
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = 0;
  piVar6[5] = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  func_0x000107871364();
  *(undefined4 *)((long)piVar3 + -0x48) = 4;
  *(undefined **)((long)piVar3 + -0x60) = &DAT_10f35070a;
  *(undefined4 *)((long)piVar3 + -0x58) = 7;
  piVar9 = (int *)((long)piVar3 + -0x60);
  func_0x0001078713a8();
  iVar1 = param_1[0xc];
  if (iVar1 != 4) {
    *(int **)((long)piVar3 + -0x68) = piVar8;
    *(char **)((long)piVar3 + -0x60) = "id";
    *(undefined4 *)((long)piVar3 + -0x58) = 2;
    if (iVar1 == 3) {
      func_0x000107871308();
      func_0x0001078707c8();
    }
    else if (iVar1 == 2) {
      func_0x000107871308();
      func_0x0001078707ec();
    }
    else if (iVar1 == 1) {
      func_0x000107871308(*(undefined8 *)(param_1 + 0xe));
      FUN_107870810();
    }
    else {
      piVar9 = param_1 + 0xe;
      func_0x000107870840((undefined1 *)((long)piVar3 + -0x50),(undefined1 *)((long)piVar3 + -0x68))
      ;
    }
    func_0x0001078712cc();
    func_0x000107871354();
  }
  *(undefined **)((long)piVar3 + -0x60) = &DAT_10f3005c3;
  *(undefined4 *)((long)piVar3 + -0x58) = 8;
  piVar11 = (int *)((long)piVar3 + -0x50);
  puVar14 = &UNK_107870408;
  unaff_x19 = piVar6;
  unaff_x20 = piVar8;
  unaff_x21 = param_1;
  do {
    *(int **)(puVar2 + -0x30) = unaff_x22;
    *(int **)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(undefined **)(puVar2 + -8) = puVar14;
    func_0x000107871298();
    iVar1 = *param_1;
    piVar11[2] = 0;
    piVar11[3] = 0;
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[0] = 0;
    piVar11[1] = 0;
    uVar5 = iVar1 == 7;
    unaff_x20 = param_1;
    if (!(bool)uVar5) {
      piVar6 = param_1;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)(puVar2 + -0x60) = piVar6;
      _strlen();
      *(int *)(puVar2 + -0x58) = (int)piVar6;
      piVar9 = (int *)(puVar2 + -0x60);
      func_0x0001078713a8();
      uVar5 = *param_1 == 0;
      puVar14 = &UNK_10f4303a6;
      if (!(bool)uVar5) {
        puVar14 = &UNK_10f43041c;
      }
      *(int **)(puVar2 + -0x68) = piVar8;
      *(undefined **)(puVar2 + -0x60) = puVar14;
      uVar10 = 10;
      if (!(bool)uVar5) {
        uVar10 = 0xb;
      }
      *(undefined4 *)(puVar2 + -0x58) = uVar10;
      piVar8 = (int *)(puVar2 + -0x68);
      func_0x000107870f70(puVar2 + -0x50);
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = param_1;
    }
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    piVar7 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    puVar4 = puVar2 + -0xc0;
    *(int **)(puVar2 + -0x90) = unaff_x20;
    *(int **)(puVar2 + -0x88) = piVar11;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
    puVar13 = puVar2 + -0x80;
    func_0x0001078712ac();
    *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
    iVar1 = piVar9[2];
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar9;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined2 *)(puVar2 + -0x9a) = 0x405;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(int *)(puVar2 + -0xb0) = iVar1;
    *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)piVar8;
    *(int *)(puVar2 + -0xb8) = piVar8[2];
    piVar9 = (int *)(puVar2 + -0xb0);
    puVar14 = &UNK_107870294;
    unaff_x19 = piVar11;
    while( true ) {
      piVar3 = (int *)(puVar4 + -0x40);
      puVar2 = puVar4 + -0x40;
      piVar8 = (int *)(puVar4 + -0x40);
      *(int **)(puVar4 + -0x20) = unaff_x20;
      *(int **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar13;
      *(undefined **)(puVar4 + -8) = puVar14;
      puVar13 = puVar4 + -0x10;
      func_0x0001078712ac();
      func_0x000107871404();
      FUN_107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      puVar14 = &UNK_10787075c;
      func_0x00010787135c();
      param_1 = piVar7 + 2;
      piVar11 = extraout_x8_01;
      if (*piVar7 == 2) break;
      piVar6 = extraout_x8_01;
      if (*piVar7 == 1) goto code_r0x00010787030c;
      piVar3 = (int *)(puVar4 + -0xb0);
      *(int **)(puVar4 + -0x70) = unaff_x22;
      *(int **)(puVar4 + -0x68) = unaff_x21;
      *(int **)(puVar4 + -0x60) = unaff_x20;
      *(int **)(puVar4 + -0x58) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x50) = puVar13;
      *(undefined **)(puVar4 + -0x48) = &UNK_10787075c;
      puVar13 = puVar4 + -0x50;
      func_0x000107871298();
      extraout_x8_01[2] = 0;
      extraout_x8_01[3] = 0;
      extraout_x8_01[4] = 0;
      extraout_x8_01[5] = 0;
      extraout_x8_01[0] = 0;
      extraout_x8_01[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar4 + -0x88) = 4;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305cd;
      *(undefined4 *)(puVar4 + -0xa0) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(undefined8 *)(puVar4 + -0x80) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined2 *)(puVar4 + -0x7a) = 4;
      puVar12 = *(undefined8 **)param_1;
      param_1 = (int *)*puVar12;
      unaff_x22 = (int *)puVar12[1];
      uVar5 = param_1 == unaff_x22;
      unaff_x20 = piVar8;
      unaff_x21 = param_1;
      if (!(bool)uVar5) {
        piVar6 = (int *)(puVar4 + -0xa8);
        puVar14 = &UNK_107870684;
        unaff_x19 = extraout_x8_01;
        goto code_r0x00010787030c;
      }
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305df;
      *(undefined4 *)(puVar4 + -0xa0) = 8;
      piVar9 = (int *)(puVar4 + -0x90);
      puVar14 = &UNK_1078706cc;
      puVar4 = puVar4 + -0xb0;
      piVar7 = extraout_x8_01;
      unaff_x19 = extraout_x8_01;
    }
  } while( true );
}



/* Entry: 107870810; end: 10787083f;  */

void FUN_107870810(undefined8 param_1,undefined8 *param_2)

{
  func_0x000107326ddc();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = param_1;
  *(undefined2 *)((long)param_2 + 0x16) = 0x216;
  return;
}



/* Entry: 107870de8; end: 107870e83;  */

uint * FUN_107870de8(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 extraout_w8;
  undefined8 *puVar4;
  undefined4 extraout_w9;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *param_1;
  bVar3 = uVar2 == param_1[1];
  if (param_1[1] <= uVar2) {
    func_0x000107871598();
    uVar1 = extraout_w9;
    if (!bVar3) {
      uVar1 = extraout_w8;
    }
    func_0x000107870e84(param_1,uVar1,param_4);
    uVar2 = *param_1;
  }
  lVar5 = *(long *)(param_1 + 2);
  puVar4 = (undefined8 *)(lVar5 + (ulong)uVar2 * 0x30);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar4[2] = param_2[2];
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  *(undefined2 *)((long)param_2 + 0x16) = 0;
  lVar5 = lVar5 + (ulong)*param_1 * 0x30;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  *(undefined8 *)(lVar5 + 0x28) = param_3[2];
  *(undefined8 *)(lVar5 + 0x20) = uVar7;
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
  *(undefined2 *)((long)param_3 + 0x16) = 0;
  *param_1 = *param_1 + 1;
  return param_1;
}



/* Entry: 1078710c0; end: 10787111b;  */

/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */

void FUN_1078710c0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 extraout_x8;
  int *piVar11;
  undefined8 *puVar12;
  int *extraout_x8_00;
  undefined8 extraout_x8_01;
  int *extraout_x8_02;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *puVar3;
  
  puVar2 = &uStack_40;
  piVar6 = (int *)&uStack_40;
  puVar13 = &stack0xfffffffffffffff0;
  func_0x0001078712ac();
  uStack_38 = 0;
  uStack_30 = 0x216000000000000;
  uStack_40 = param_1;
  uStack_28 = extraout_x8_01;
  func_0x000107870d3c();
  func_0x0001078712ec();
  func_0x000107871270(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078712ec();
  puVar14 = &UNK_10787111c;
  func_0x00010787135c();
  piVar8 = (int *)*param_2;
  piVar10 = extraout_x8_02;
code_r0x000107870168:
  do {
    *(int **)((long)puVar2 + -0x30) = unaff_x22;
    *(int **)((long)puVar2 + -0x28) = unaff_x21;
    *(int **)((long)puVar2 + -0x20) = unaff_x20;
    *(int **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar2 + -0x10) = puVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    func_0x000107871298();
    iVar1 = *piVar6;
    piVar10[2] = 0;
    piVar10[3] = 0;
    piVar10[4] = 0;
    piVar10[5] = 0;
    piVar10[0] = 0;
    piVar10[1] = 0;
    uVar5 = iVar1 == 7;
    unaff_x20 = piVar6;
    if (!(bool)uVar5) {
      piVar7 = piVar6;
      func_0x000107871364();
      *(undefined4 *)((long)puVar2 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)((long)puVar2 + -0x60) = piVar7;
      _strlen();
      *(int *)((long)puVar2 + -0x58) = (int)piVar7;
      param_3 = (int *)((long)puVar2 + -0x60);
      func_0x0001078713a8();
      uVar5 = *piVar6 == 0;
      puVar14 = &UNK_10f4303a6;
      if (!(bool)uVar5) {
        puVar14 = &UNK_10f43041c;
      }
      *(int **)((long)puVar2 + -0x68) = piVar8;
      *(undefined **)((long)puVar2 + -0x60) = puVar14;
      uVar9 = 10;
      if (!(bool)uVar5) {
        uVar9 = 0xb;
      }
      *(undefined4 *)((long)puVar2 + -0x58) = uVar9;
      piVar8 = (int *)((long)puVar2 + -0x68);
      func_0x000107870f70((undefined1 *)((long)puVar2 + -0x50));
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = piVar6;
    }
    func_0x000107871270(*(undefined8 *)((long)puVar2 + -0x38));
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    piVar7 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    *(int **)((long)puVar2 + -0x90) = unaff_x20;
    *(int **)((long)puVar2 + -0x88) = piVar10;
    *(undefined1 **)((long)puVar2 + -0x80) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x78) = &UNK_107870244;
    puVar13 = (undefined1 *)((long)puVar2 + -0x80);
    func_0x0001078712ac();
    *(undefined8 *)((long)puVar2 + -0x98) = extraout_x8;
    iVar1 = param_3[2];
    *(undefined8 *)((long)puVar2 + -0xa8) = *(undefined8 *)param_3;
    *(undefined8 *)((long)puVar2 + -0xa0) = 0;
    *(undefined2 *)((long)puVar2 + -0x9a) = 0x405;
    *(undefined8 *)((long)puVar2 + -0xb0) = 0;
    *(int *)((long)puVar2 + -0xb0) = iVar1;
    *(undefined8 *)((long)puVar2 + -0xc0) = *(undefined8 *)piVar8;
    *(int *)((long)puVar2 + -0xb8) = piVar8[2];
    param_3 = (int *)((long)puVar2 + -0xb0);
    puVar14 = &UNK_107870294;
    puVar4 = (undefined1 *)((long)puVar2 + -0xc0);
    unaff_x19 = piVar10;
    while( true ) {
      puVar3 = puVar4 + -0x40;
      puVar2 = (undefined8 *)(puVar4 + -0x40);
      piVar8 = (int *)(puVar4 + -0x40);
      *(int **)(puVar4 + -0x20) = unaff_x20;
      *(int **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar13;
      *(undefined **)(puVar4 + -8) = puVar14;
      puVar13 = puVar4 + -0x10;
      func_0x0001078712ac();
      func_0x000107871404();
      FUN_107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      puVar14 = &UNK_10787075c;
      func_0x00010787135c();
      piVar6 = piVar7 + 2;
      piVar10 = extraout_x8_00;
      if (*piVar7 == 2) goto code_r0x000107870168;
      piVar11 = extraout_x8_00;
      if (*piVar7 == 1) goto code_r0x00010787030c;
      puVar3 = puVar4 + -0xb0;
      *(int **)(puVar4 + -0x70) = unaff_x22;
      *(int **)(puVar4 + -0x68) = unaff_x21;
      *(int **)(puVar4 + -0x60) = unaff_x20;
      *(int **)(puVar4 + -0x58) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x50) = puVar13;
      *(undefined **)(puVar4 + -0x48) = &UNK_10787075c;
      puVar13 = puVar4 + -0x50;
      func_0x000107871298();
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[0] = 0;
      extraout_x8_00[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar4 + -0x88) = 4;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305cd;
      *(undefined4 *)(puVar4 + -0xa0) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(undefined8 *)(puVar4 + -0x80) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined2 *)(puVar4 + -0x7a) = 4;
      puVar12 = *(undefined8 **)piVar6;
      piVar6 = (int *)*puVar12;
      unaff_x22 = (int *)puVar12[1];
      uVar5 = piVar6 == unaff_x22;
      unaff_x19 = extraout_x8_00;
      unaff_x21 = piVar6;
      if (!(bool)uVar5) break;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305df;
      *(undefined4 *)(puVar4 + -0xa0) = 8;
      param_3 = (int *)(puVar4 + -0x90);
      puVar14 = &UNK_1078706cc;
      puVar4 = puVar4 + -0xb0;
      piVar7 = extraout_x8_00;
      unaff_x20 = piVar8;
    }
    piVar11 = (int *)(puVar4 + -0xa8);
    puVar14 = &UNK_107870684;
    unaff_x20 = piVar8;
code_r0x00010787030c:
    puVar2 = (undefined8 *)(puVar3 + -0x70);
    *(int **)(puVar3 + -0x30) = unaff_x22;
    *(int **)(puVar3 + -0x28) = unaff_x21;
    *(int **)(puVar3 + -0x20) = unaff_x20;
    *(int **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    puVar13 = puVar3 + -0x10;
    func_0x000107871298();
    piVar11[2] = 0;
    piVar11[3] = 0;
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[0] = 0;
    piVar11[1] = 0;
    func_0x000107871364();
    *(undefined4 *)(puVar3 + -0x48) = 4;
    *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
    *(undefined4 *)(puVar3 + -0x58) = 7;
    param_3 = (int *)(puVar3 + -0x60);
    func_0x0001078713a8();
    iVar1 = piVar6[0xc];
    if (iVar1 != 4) {
      *(int **)(puVar3 + -0x68) = piVar8;
      *(char **)(puVar3 + -0x60) = "id";
      *(undefined4 *)(puVar3 + -0x58) = 2;
      if (iVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (iVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (iVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(piVar6 + 0xe));
        FUN_107870810();
      }
      else {
        param_3 = piVar6 + 0xe;
        func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
    *(undefined4 *)(puVar3 + -0x58) = 8;
    piVar10 = (int *)(puVar3 + -0x50);
    puVar14 = &UNK_107870408;
    unaff_x19 = piVar11;
    unaff_x20 = piVar8;
    unaff_x21 = piVar6;
  } while( true );
}



/* Entry: 107871848; end: 1078718af;  */

uint FUN_107871848(ulong param_1)

{
  uint unaff_w19;
  uint unaff_w21;
  uint uVar1;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  
  func_0x000107871cc8();
  for (; uVar1 = unaff_w21, unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x18) {
    func_0x000107871c9c();
    for (; unaff_x25 != 0; unaff_x25 = unaff_x25 + -1) {
      func_0x000107871c14();
      func_0x000107871750();
      uVar1 = unaff_w19;
      if ((param_1 & 1) != 0) goto LAB_1078718a4;
      func_0x000107871c14();
      func_0x000107871700();
      unaff_w21 = unaff_w21 ^ (uint)param_1;
    }
  }
LAB_1078718a4:
  return uVar1 & 1;
}



/* Entry: 107871b6c; end: 107871cdb;  */

bool FUN_107871b6c(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  bVar1 = false;
  dVar3 = *param_1 - *param_2;
  dVar5 = *param_1 - *param_3;
  dVar2 = param_1[1] - param_2[1];
  dVar4 = param_1[1] - param_3[1];
  if ((-(dVar2 * dVar5) + dVar4 * dVar3 == 0.0) && (dVar3 * dVar5 <= 0.0)) {
    bVar1 = dVar2 * dVar4 <= 0.0;
  }
  return bVar1;
}



/* Entry: 107872a90; end: 107872b63;  */

void FUN_107872a90(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  double dStack_80;
  double dStack_78;
  double dStack_68;
  
  func_0x0001078732d4();
  func_0x000107873384(((long *)*param_1)[1] - *(long *)*param_1);
  func_0x000107872b64();
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xc) {
    func_0x0001078731f4();
    fVar3 = (float)((dStack_78 / dStack_68 + 1.0) * 0.5);
    func_0x0001078733ac(fVar3,(float)((dStack_80 / dStack_68 + 1.0) * 0.5),1.0 - fVar3,*param_1);
    func_0x000107872bac();
  }
  return;
}



/* Entry: 107872da0; end: 107872dab;  */

void FUN_107872da0(void)

{
  func_0x000107873348();
  func_0x000107873218();
  func_0x0001078731b0();
  return;
}



/* Entry: 107872f10; end: 107872f2f;  */

void FUN_107872f10(void)

{
  func_0x000107873218();
  func_0x0001078731b0();
  return;
}


