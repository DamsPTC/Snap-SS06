/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107440e3c; end: 107440e53;  */

void FUN_107440e3c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107440e54; end: 107440e6f;  */

void FUN_107440e54(long param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long unaff_x19;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;
  double dVar10;
  double unaff_d8;
  double dVar11;
  short sStack_98;
  short sStack_96;
  uint uStack_94;
  
  if (*(int *)(param_1 + 0x10) != 2) {
    func_0x00010563ab98();
    uVar8 = *(ulong *)(param_2 + 8);
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)param_2[0x17]) {
      uVar8 = (ulong)param_2[0x17];
      pbVar7 = param_2;
    }
    pbVar2 = pbVar7 + uVar8;
    dVar11 = 50.0;
    for (; pbVar7 != pbVar2; pbVar7 = pbVar7 + 1) {
      if (0xffffffa0 < *pbVar7 - 0x7f) {
        lVar1 = (ulong)(*pbVar7 - 0x20) * 0x10;
        bVar3 = (&UNK_1109b0bb9)[lVar1];
        bVar9 = false;
        for (uVar8 = 0; uVar8 < bVar3; uVar8 = uVar8 + 2) {
          bVar4 = *(byte *)(*(long *)(&UNK_1109b0bc0 + lVar1) + uVar8);
          bVar5 = ((byte *)(*(long *)(&UNK_1109b0bc0 + lVar1) + uVar8))[1];
          bVar6 = (bVar5 & bVar4) != 0xff;
          if (bVar6) {
            uStack_94 = (int)(dVar11 + (double)(int)(char)bVar4 * 5.0) & 0xffffU |
                        (int)(unaff_d8 - (double)(int)(char)bVar5 * 5.0) << 0x10;
            FUN_107440b48(unaff_x19 + 0x78,&uStack_94);
            if (bVar9) {
              sStack_96 = (short)((uint)(*(int *)(unaff_x19 + 0x80) - *(int *)(unaff_x19 + 0x78)) >>
                                 2);
              sStack_98 = sStack_96 + -2;
              sStack_96 = sStack_96 + -1;
              func_0x0001074086a4(unaff_x19 + 0x90,&sStack_98,2);
            }
          }
          bVar9 = bVar6;
        }
        dVar10 = (double)NEON_ucvtf((ulong)(byte)(&UNK_1109b0bb8)[lVar1]);
        dVar11 = dVar11 + dVar10 * 5.0;
      }
    }
    return;
  }
  return;
}



/* Entry: 107440e70; end: 107440eef;  */

void FUN_107440e70(undefined8 param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long unaff_x19;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;
  double dVar10;
  double unaff_d8;
  double dVar11;
  short sStack_88;
  short sStack_86;
  uint uStack_84;
  
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar7 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar8 = (ulong)param_2[0x17];
    pbVar7 = param_2;
  }
  pbVar2 = pbVar7 + uVar8;
  dVar11 = 50.0;
  for (; pbVar7 != pbVar2; pbVar7 = pbVar7 + 1) {
    if (0xffffffa0 < *pbVar7 - 0x7f) {
      lVar1 = (ulong)(*pbVar7 - 0x20) * 0x10;
      bVar3 = (&UNK_1109b0bb9)[lVar1];
      bVar9 = false;
      for (uVar8 = 0; uVar8 < bVar3; uVar8 = uVar8 + 2) {
        bVar4 = *(byte *)(*(long *)(&UNK_1109b0bc0 + lVar1) + uVar8);
        bVar5 = ((byte *)(*(long *)(&UNK_1109b0bc0 + lVar1) + uVar8))[1];
        bVar6 = (bVar5 & bVar4) != 0xff;
        if (bVar6) {
          uStack_84 = (int)(dVar11 + (double)(int)(char)bVar4 * 5.0) & 0xffffU |
                      (int)(unaff_d8 - (double)(int)(char)bVar5 * 5.0) << 0x10;
          FUN_107440b48(unaff_x19 + 0x78,&uStack_84);
          if (bVar9) {
            sStack_86 = (short)((uint)(*(int *)(unaff_x19 + 0x80) - *(int *)(unaff_x19 + 0x78)) >> 2
                               );
            sStack_88 = sStack_86 + -2;
            sStack_86 = sStack_86 + -1;
            func_0x0001074086a4(unaff_x19 + 0x90,&sStack_88,2);
          }
        }
        bVar9 = bVar6;
      }
      dVar10 = (double)NEON_ucvtf((ulong)(byte)(&UNK_1109b0bb8)[lVar1]);
      dVar11 = dVar11 + dVar10 * 5.0;
    }
  }
  return;
}



/* Entry: 107440ef0; end: 107441603;  */

long *****
FUN_107440ef0(undefined4 param_1,undefined8 *param_2,long ****param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  char cVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long ***ppplVar6;
  undefined1 in_ZR;
  bool bVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  long *****ppppplVar10;
  undefined8 extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long *****ppppplVar12;
  long *****unaff_x19;
  long *****ppppplVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  undefined4 uVar17;
  long ****pppplStack_150;
  long ****pppplStack_148;
  undefined1 uStack_140;
  long **pplStack_128;
  long **pplStack_120;
  long **pplStack_118;
  long **pplStack_110;
  long ***ppplStack_108;
  long ***appplStack_100 [4];
  undefined4 auStack_e0 [2];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [40];
  undefined8 uStack_10;
  
  func_0x00010744c720();
  func_0x00010744c024();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_DAT_1109ace68;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar7) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar2 != '\0');
  *(int *)(unaff_x19 + 3) = iVar1;
  *(undefined1 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  *unaff_x19 = (long ****)&PTR_FUN_1109b11b8;
  unaff_x19[5] = param_3;
  *(undefined4 *)(unaff_x19 + 6) = param_1;
  unaff_x19[7] = (long ****)0x0;
  unaff_x19[8] = (long ****)0x0;
  unaff_x19[9] = (long ****)0x0;
  unaff_x19[10] = (long ****)&PTR_FUN_1109b1258;
  unaff_x19[0xb] = (long ****)0x0;
  unaff_x19[0xc] = (long ****)0x0;
  unaff_x19[0xd] = (long ****)0x0;
  unaff_x19[0xe] = (long ****)&PTR_DAT_1109af1d8;
  *(undefined1 *)(unaff_x19 + 0x1e) = 0;
  *(undefined1 *)(unaff_x19 + 0x1f) = 0;
  *(undefined1 *)(unaff_x19 + 0x22) = 0;
  *(undefined1 *)(unaff_x19 + 0x23) = 0;
  unaff_x19[0x10] = (long ****)0x0;
  unaff_x19[0xf] = (long ****)0x0;
  *(undefined1 *)(unaff_x19 + 0x26) = 0;
  unaff_x19[0x27] = (long ****)&UNK_10e52b660;
  *(undefined8 *)((long)unaff_x19 + 0xb9) = 0;
  *(undefined8 *)((long)unaff_x19 + 0xb1) = 0;
  unaff_x19[0x14] = (long ****)0x0;
  unaff_x19[0x13] = (long ****)0x0;
  unaff_x19[0x16] = (long ****)0x0;
  unaff_x19[0x15] = (long ****)0x0;
  unaff_x19[0x12] = (long ****)0x0;
  unaff_x19[0x11] = (long ****)0x0;
  unaff_x19[0x29] = (long ****)0x0;
  unaff_x19[0x2a] = (long ****)0x0;
  unaff_x19[0x28] = (long ****)0x0;
  ppppplVar10 = unaff_x19 + 0x2c;
  *ppppplVar10 = (long ****)0x0;
  ppppplVar15 = unaff_x19 + 0x2b;
  *ppppplVar15 = (long ****)ppppplVar10;
  unaff_x19[0x2d] = (long ****)0x0;
  ppppplVar16 = unaff_x19 + 0x2e;
  *ppppplVar16 = (long ****)(unaff_x19 + 0x2f);
  unaff_x19[0x2f] = (long ****)0x0;
  unaff_x19[0x30] = (long ****)0x0;
  ppppplVar8 = unaff_x19 + 0x31;
  uStack_10 = extraout_x8;
  func_0x000104c2fe00(ppppplVar8,param_6);
  lVar11 = 0;
  pppplVar9 = (long ****)*param_7;
  unaff_x19[0x39] = (long ****)param_7[1];
  unaff_x19[0x38] = pppplVar9;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x1d0) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x1d8) = 0;
    func_0x00010744cd4c();
    lVar11 = extraout_x8_00;
  } while (!(bool)in_ZR);
  lVar11 = 0;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x270) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x278) = 0;
    func_0x00010744cd4c();
    lVar11 = extraout_x8_01;
  } while (!(bool)in_ZR);
  lVar11 = 0;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x310) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x318) = 0;
    func_0x00010744cd4c();
    lVar11 = extraout_x8_02;
  } while (!(bool)in_ZR);
  lVar11 = 0;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x3b0) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x3b8) = 0;
    func_0x00010744cd4c();
    lVar11 = extraout_x8_03;
  } while (!(bool)in_ZR);
  lVar11 = 0;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x450) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x458) = 0;
    func_0x00010744cd4c();
    lVar11 = extraout_x8_04;
  } while (!(bool)in_ZR);
  lVar11 = 0;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x4f0) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar11 + 0x4f8) = 0;
    func_0x00010744cd4c();
    lVar11 = extraout_x8_05;
  } while (!(bool)in_ZR);
  unaff_x19[0xb5] = (long ****)0x0;
  unaff_x19[0xb4] = (long ****)0x0;
  unaff_x19[0xb3] = (long ****)0x0;
  unaff_x19[0xb2] = (long ****)0x0;
  *(undefined4 *)(unaff_x19 + 0xb6) = 0x3f800000;
  ppppplVar13 = (long *****)*param_4;
  do {
    if (ppppplVar13 == (long *****)(param_4 + 1)) {
      ppppplVar10 = (long *****)*param_4;
      while (bVar7 = ppppplVar10 == (long *****)(param_4 + 1), !bVar7) {
        FUN_1073b7fb0(ppppplVar15,ppppplVar10 + 4);
        lVar11 = 0;
        do {
          *(undefined4 *)((long)auStack_e0 + lVar11) = 0;
          *(undefined8 *)((long)appplStack_100 + lVar11 + 8) = 0;
          *(undefined8 *)((long)appplStack_100 + lVar11) = 0;
          *(undefined8 *)((long)appplStack_100 + lVar11 + 0x18) = 0;
          *(undefined8 *)((long)appplStack_100 + lVar11 + 0x10) = 0;
          lVar11 = lVar11 + 0x28;
        } while (lVar11 != 0xf0);
        func_0x00010744cc08();
        func_0x00010744c8e8();
        func_0x00010744c8e0(appplStack_100);
        func_0x00010744c934();
        func_0x00010744cc08();
        func_0x00010744c8e8();
        func_0x00010744c8e0(auStack_d8);
        func_0x00010744c934();
        func_0x00010744cc08();
        func_0x00010744c8e8();
        func_0x00010744c8e0(auStack_b0);
        func_0x00010744c934();
        func_0x00010744cc08();
        func_0x00010744c8e8();
        func_0x00010744c8e0(auStack_88);
        func_0x00010744c934();
        func_0x00010744cc08();
        func_0x00010744c8e8();
        func_0x00010744c8e0(auStack_60);
        func_0x00010744c934();
        func_0x00010744cc08();
        func_0x00010744c8e8();
        func_0x00010744c8e0(auStack_38);
        func_0x00010744c934();
        ppppplVar8 = ppppplVar16;
        FUN_1074494e4(ppppplVar16,&ppplStack_108,ppppplVar10 + 4);
        if (*ppppplVar8 == (long ****)0x0) {
          ppppplVar10 = ppppplVar8;
          func_0x00010744cef4();
          pppplStack_150 = (long ****)ppppplVar10;
          pppplStack_148 = (long ****)(unaff_x19 + 0x2f);
          func_0x00010744cc70();
          lVar11 = 0;
          do {
            FUN_10744955c((long)ppppplVar10 + lVar11 + 0x58,(long)appplStack_100 + lVar11);
            lVar11 = lVar11 + 0x28;
          } while (lVar11 != 0xf0);
          uStack_140 = 1;
          *ppppplVar10 = (long ****)0x0;
          ppppplVar10[1] = (long ****)0x0;
          ppppplVar10[2] = (long ****)ppplStack_108;
          *ppppplVar8 = (long ****)ppppplVar10;
          if ((long ****)**ppppplVar16 != (long ****)0x0) {
            *ppppplVar16 = (long ****)**ppppplVar16;
          }
          func_0x00010002c5b0(unaff_x19[0x2f],ppppplVar10);
          unaff_x19[0x30] = (long ****)((long)unaff_x19[0x30] + 1);
          pppplStack_150 = (long ****)0x0;
          func_0x0001074496b0(&pppplStack_150);
        }
        ppppplVar8 = (long *****)appplStack_100;
        FUN_1074428e4();
        func_0x00010744cf28();
        ppppplVar10 = ppppplVar8;
      }
      func_0x00010744bf64(uStack_10);
      if (bVar7) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      FUN_1074428e4(appplStack_100);
      func_0x0001074437d8(unaff_x19 + 0xb2);
      func_0x000104c2f714(unaff_x19 + 0x31);
      func_0x00010744374c(ppppplVar16);
      func_0x0001074435a0(ppppplVar15);
      func_0x000107261dac(unaff_x19 + 0x27);
      func_0x00010730b10c(unaff_x19 + 0x23);
      func_0x00010730b10c(unaff_x19 + 0x1f);
      func_0x00010730b13c(unaff_x19 + 0x18);
      FUN_1073eb118(unaff_x19 + 0x15);
      FUN_1073eb118(unaff_x19 + 0x12);
      func_0x00010731e26c(unaff_x19 + 0xf);
      func_0x00010731e26c(unaff_x19 + 0xb);
      func_0x000107440e08(unaff_x19 + 7);
      func_0x0001073eafd0();
      func_0x00010744c710();
      func_0x00010744c454();
      FUN_1073bdb10();
      pppplVar9 = unaff_x19[3];
      *(undefined4 *)(ppppplVar8 + 4) = *(undefined4 *)(unaff_x19 + 4);
      ppppplVar8[3] = pppplVar9;
      return ppppplVar8;
    }
    pppplVar14 = ppppplVar13[0xb];
    pppplVar9 = (long ****)0x130;
    __Znwm();
    pppplStack_150 = pppplVar9;
    pppplStack_148 = (long ****)ppppplVar10;
    func_0x00010744cc70();
    uVar17 = *(undefined4 *)(unaff_x19 + 6);
    FUN_107443910(&ppplStack_108,uVar17,0,0,0,0x3f800000,pppplVar14 + 6);
    func_0x000107445c14(&pplStack_110,uVar17,0,0x3f570a3d,pppplVar14 + 0xf);
    func_0x0001074471c0(&pplStack_118,uVar17,0x3f800000,pppplVar14 + 0x17);
    FUN_107443910(&pplStack_120,uVar17,0,0,0,0,pppplVar14 + 0x1e);
    FUN_1073dcfc4(appplStack_100);
    FUN_107443894(&pplStack_128,uVar17,pppplVar14 + 0x27,appplStack_100);
    ppplVar6 = ppplStack_108;
    pplVar5 = pplStack_110;
    pplVar4 = pplStack_118;
    pplVar3 = pplStack_120;
    pplStack_110 = (long **)0x0;
    ppplStack_108 = (long ***)0x0;
    pppplVar9[0xb] = ppplVar6;
    pppplVar9[0xc] = (long ***)pplVar5;
    pplStack_120 = (long **)0x0;
    pplStack_118 = (long **)0x0;
    pppplVar9[0xd] = (long ***)pplVar4;
    pppplVar9[0xe] = (long ***)pplVar3;
    pppplVar9[0xf] = (long ***)pplStack_128;
    pplStack_128 = (long **)0x0;
    func_0x00010726b164(appplStack_100);
    pplVar3 = pplStack_120;
    pplStack_120 = (long **)0x0;
    if (pplVar3 != (long **)0x0) {
      func_0x00010744c0a4();
    }
    pplVar3 = pplStack_118;
    pplStack_118 = (long **)0x0;
    if (pplVar3 != (long **)0x0) {
      func_0x00010744c0a4();
    }
    pplVar3 = pplStack_110;
    pplStack_110 = (long **)0x0;
    if (pplVar3 != (long **)0x0) {
      func_0x00010744c0a4();
    }
    ppplVar6 = ppplStack_108;
    ppplStack_108 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      func_0x00010744c0a4();
    }
    *(undefined1 *)(pppplVar9 + 0x1d) = 0;
    *(undefined1 *)(pppplVar9 + 0x1e) = 0;
    *(undefined1 *)(pppplVar9 + 0x24) = 0;
    pppplVar9[0x25] = (long ***)0x0;
    pppplVar9[0x11] = (long ***)0x0;
    pppplVar9[0x10] = (long ***)0x0;
    pppplVar9[0x13] = (long ***)0x0;
    pppplVar9[0x12] = (long ***)0x0;
    pppplVar9[0x15] = (long ***)0x0;
    pppplVar9[0x14] = (long ***)0x0;
    pppplVar9[0x17] = (long ***)0x0;
    pppplVar9[0x16] = (long ***)0x0;
    pppplVar9[0x19] = (long ***)0x0;
    pppplVar9[0x18] = (long ***)0x0;
    *(undefined1 *)(pppplVar9 + 0x1a) = 0;
    uStack_140 = 1;
    ppppplVar12 = (long *****)*ppppplVar10;
    ppppplVar8 = ppppplVar10;
    ppppplVar13 = ppppplVar10;
    while (ppppplVar12 != (long *****)0x0) {
      while( true ) {
        ppppplVar13 = ppppplVar12;
        pppplVar14 = pppplVar9 + 4;
        func_0x000104c2fc44(pppplVar14,ppppplVar13 + 4);
        if ((int)pppplVar14 == 0) break;
        ppppplVar12 = (long *****)*ppppplVar13;
        ppppplVar8 = ppppplVar13;
        if ((long *****)*ppppplVar13 == (long *****)0x0) goto LAB_10744128c;
      }
      ppppplVar12 = ppppplVar13 + 4;
      func_0x000104c2fc44(ppppplVar12,pppplVar9 + 4);
      if ((int)ppppplVar12 == 0) {
        if (*ppppplVar8 != (long ****)0x0) goto LAB_1074412c4;
        break;
      }
      ppppplVar8 = ppppplVar13 + 1;
      ppppplVar12 = (long *****)*ppppplVar8;
    }
LAB_10744128c:
    *pppplStack_150 = (long ***)0x0;
    pppplStack_150[1] = (long ***)0x0;
    pppplStack_150[2] = (long ***)ppppplVar13;
    *ppppplVar8 = pppplStack_150;
    if ((long ****)**ppppplVar15 != (long ****)0x0) {
      *ppppplVar15 = (long ****)**ppppplVar15;
    }
    func_0x00010002c5b0(unaff_x19[0x2c]);
    unaff_x19[0x2d] = (long ****)((long)unaff_x19[0x2d] + 1);
    pppplStack_150 = (long ****)0x0;
LAB_1074412c4:
    ppppplVar8 = &pppplStack_150;
    FUN_1074494a4();
    func_0x00010744cf28();
    ppppplVar13 = ppppplVar8;
  } while( true );
}



/* Entry: 107441604; end: 1074416bb;  */

void FUN_107441604(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454();
  FUN_1073bdb10();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 1074416bc; end: 1074416bf;  */

undefined8 * FUN_1074416bc(undefined8 *param_1)

{
  func_0x0001074437d8(param_1 + 0xb2);
  func_0x000104c2f714(param_1 + 0x31);
  func_0x00010744374c(param_1 + 0x2e);
  func_0x0001074435a0(param_1 + 0x2b);
  func_0x000107261dac(param_1 + 0x27);
  func_0x00010730b10c(param_1 + 0x23);
  func_0x00010730b10c(param_1 + 0x1f);
  func_0x00010730b13c(param_1 + 0x18);
  FUN_1073eb118(param_1 + 0x15);
  FUN_1073eb118(param_1 + 0x12);
  func_0x00010731e26c(param_1 + 0xf);
  func_0x00010731e26c(param_1 + 0xb);
  func_0x000107440e08(param_1 + 7);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 1074416c0; end: 1074416d3;  */

void FUN_1074416c0(void)

{
  func_0x000107441634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074416d4; end: 107441d9b;  */

uint *** FUN_1074416d4(long param_1,long *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint **ppuVar9;
  char cVar10;
  bool bVar11;
  long *plVar12;
  undefined1 uVar13;
  uint ***pppuVar14;
  uint ***pppuVar15;
  uint ***pppuVar16;
  uint ***pppuVar17;
  undefined8 extraout_x8;
  uint **ppuVar18;
  uint **extraout_x8_00;
  uint **extraout_x8_01;
  uint *puVar19;
  uint **extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 *puVar20;
  int extraout_w10;
  int extraout_w10_00;
  long lVar21;
  int iVar22;
  int iVar23;
  long unaff_x19;
  long unaff_x20;
  ulong uVar24;
  long lVar25;
  uint **ppuVar26;
  uint ***unaff_x22;
  uint **ppuVar27;
  int iVar28;
  long unaff_x23;
  long unaff_x24;
  long lVar29;
  ulong uVar30;
  long lVar31;
  uint *puStack_608;
  uint **ppuStack_600;
  uint **ppuStack_5f8;
  undefined8 uStack_5f0;
  uint *puStack_5e0;
  uint *puStack_5d8;
  undefined8 uStack_5d0;
  uint **ppuStack_5c8;
  uint **ppuStack_5c0;
  uint ***pppuStack_5b0;
  undefined8 uStack_5a8;
  long lStack_5a0;
  long lStack_598;
  uint ***pppuStack_590;
  long lStack_588;
  ulong uStack_580;
  uint ***pppuStack_578;
  undefined1 *puStack_570;
  code *pcStack_568;
  uint ***pppuStack_538;
  long *plStack_530;
  uint uStack_524;
  uint **ppuStack_520;
  uint ***pppuStack_518;
  undefined8 uStack_510;
  uint **ppuStack_508;
  uint ***pppuStack_500;
  uint ***pppuStack_4f8;
  long lStack_4e0;
  long lStack_4d8;
  char cStack_4c8;
  uint **appuStack_4c0 [7];
  uint **appuStack_488 [7];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_410;
  uint ***apppuStack_408 [2];
  undefined8 *puStack_3f8;
  undefined1 uStack_3a0;
  uint **ppuStack_390;
  uint ***pppuStack_388;
  undefined8 uStack_380;
  byte bStack_378;
  char cStack_358;
  undefined1 uStack_2e8;
  uint **appuStack_200 [50];
  undefined8 uStack_70;
  
  func_0x00010744c024();
  uStack_70 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0x30),&ppuStack_390);
  puVar20 = (undefined8 *)*param_2;
  uStack_448 = puVar20[1];
  uStack_450 = *puVar20;
  if (puVar20[1] != 0) {
    do {
      func_0x00010744c2cc();
    } while (extraout_w10 != 0);
  }
  uStack_410 = (undefined **)((ulong)uStack_410 & 0xffffffffffffff00);
  uStack_3a0 = 0;
  func_0x000107751444(&ppuStack_390,&uStack_450,&uStack_410);
  func_0x000107751334(appuStack_200,&ppuStack_390);
  func_0x000107267e8c(&uStack_410);
  func_0x000107267e44(&uStack_450);
  func_0x000107267da8(&ppuStack_390);
  func_0x00010744c6c4();
  FUN_1073ddb94();
  func_0x00010744cec0(&uStack_450,appuStack_200,&ppuStack_390,unaff_x20 + 0x40);
  func_0x00010744c860();
  func_0x00010744c778();
  func_0x00010744c6c4();
  FUN_1073ddf1c();
  func_0x00010744cec0(appuStack_488,appuStack_200,&ppuStack_390,unaff_x20 + 0x130);
  func_0x00010744c860();
  func_0x00010744c778();
  func_0x00010744c6c4();
  FUN_1073ddf1c();
  func_0x00010744cec0(appuStack_4c0,appuStack_200,&ppuStack_390,unaff_x20 + 0xb8);
  func_0x00010744c860();
  func_0x00010744c778();
  pppuVar15 = appuStack_488;
  pppuVar17 = appuStack_4c0;
  FUN_107441d9c(&lStack_4e0,&uStack_450);
  func_0x00010783376c(&pppuStack_500,param_2[1]);
  uVar24 = 0;
  pppuStack_538 = pppuStack_4f8;
  plStack_530 = param_2;
  for (pppuVar16 = pppuStack_500; plVar12 = plStack_530, pppuVar16 != pppuStack_538;
      pppuVar16 = pppuVar16 + 3) {
    if ((cStack_4c8 == '\x01') && (uVar24 < (ulong)((lStack_4d8 - lStack_4e0) / 0x18))) {
      pppuVar15 = (uint ***)(lStack_4e0 + uVar24 * 0x18);
      FUN_10740d930(&ppuStack_390);
      uStack_524 = (int)uVar24 + 1;
      if ((bStack_378 & 1) == 0) goto LAB_107441868;
    }
    else {
      ppuStack_390 = (uint **)((ulong)ppuStack_390 & 0xffffffffffffff00);
      bStack_378 = 0;
LAB_107441868:
      uStack_524 = (int)uVar24 + 1;
      pppuVar15 = (uint ***)0x1f4;
      func_0x0001078338dc(pppuVar16);
    }
    lVar31 = 0;
    ppuVar9 = pppuVar16[1];
    ppuVar26 = *pppuVar16;
    for (ppuVar18 = ppuVar26; ppuVar18 != ppuVar9; ppuVar18 = ppuVar18 + 3) {
      lVar31 = lVar31 + ((long)ppuVar18[1] - (long)*ppuVar18 >> 2);
    }
    func_0x00010744cb4c(*(undefined8 *)(unaff_x19 + 0x40));
    for (; ppuVar26 != ppuVar9; ppuVar26 = ppuVar26 + 3) {
      puVar19 = *ppuVar26;
      lVar21 = (long)ppuVar26[1] - (long)puVar19;
      if (lVar21 != 0) {
        lVar29 = *(long *)(unaff_x19 + 0x98);
        if (*(long *)(unaff_x19 + 0x90) == lVar29) {
          func_0x00010744cb4c(*(undefined8 *)(unaff_x19 + 0x40));
          uStack_410 = (undefined **)extraout_x8_00;
          func_0x00010744cb4c(*(undefined8 *)(unaff_x19 + 0x60));
          pppuVar15 = (uint ***)&uStack_410;
          pppuVar17 = &ppuStack_520;
          ppuStack_520 = extraout_x8_01;
          FUN_10740864c(unaff_x19 + 0x90);
          lVar29 = *(long *)(unaff_x19 + 0x98);
          puVar19 = *ppuVar26;
        }
        unaff_x23 = *(long *)(lVar29 + -0x18);
        uStack_410 = (undefined **)CONCAT44(uStack_410._4_4_,*puVar19);
        func_0x00010744ced4();
        uVar24 = lVar21 >> 2;
        iVar28 = (int)unaff_x23;
        uStack_410 = (undefined **)CONCAT44(iVar28,iVar28 + (int)uVar24 + -1);
        func_0x00010744cda0();
        for (lVar25 = 0; lVar25 + 1U < uVar24; lVar25 = lVar25 + 1) {
          uStack_410 = (undefined **)CONCAT44(uStack_410._4_4_,(*ppuVar26)[lVar25 + 1]);
          func_0x00010744ced4();
          iVar22 = iVar28 + (int)lVar25;
          uStack_410 = (undefined **)CONCAT44(iVar22 + 1,iVar22);
          func_0x00010744cda0();
        }
        *(ulong *)(lVar29 + -0x18) = *(long *)(lVar29 + -0x18) + uVar24;
        *(long *)(lVar29 + -0x10) = *(long *)(lVar29 + -0x10) + (lVar21 >> 1);
      }
    }
    if ((bStack_378 & 1) == 0) {
      uStack_410 = &PTR_FUN_1109b1ac8;
      puStack_3f8 = &uStack_410;
      pppuVar17 = (uint ***)&uStack_410;
      pppuVar15 = pppuVar16;
      apppuStack_408[0] = pppuVar16;
      FUN_10740ccb8(&ppuStack_520,plStack_530[0x16]);
      FUN_10744bc74(&uStack_410);
    }
    else {
      pppuStack_518 = pppuStack_388;
      ppuStack_520 = ppuStack_390;
      uStack_510 = uStack_380;
      pppuStack_388 = (uint ***)0x0;
      uStack_380 = 0;
      ppuStack_390 = (uint **)0x0;
    }
    unaff_x22 = pppuStack_518;
    ppuVar26 = ppuStack_520;
    unaff_x24 = *(long *)(unaff_x19 + 0xb0);
    if (*(long *)(unaff_x19 + 0xa8) == unaff_x24) {
      func_0x00010744cb4c(*(undefined8 *)(unaff_x19 + 0x80));
      pppuVar15 = &ppuStack_508;
      pppuVar17 = (uint ***)&uStack_410;
      uStack_410 = (undefined **)extraout_x8_02;
      FUN_1074420f0(unaff_x19 + 0xa8);
      unaff_x24 = *(long *)(unaff_x19 + 0xb0);
    }
    uVar30 = (long)unaff_x22 - (long)ppuVar26 >> 2;
    iVar28 = *(int *)(unaff_x24 + -0x18);
    for (uVar24 = 0; uVar24 < uVar30; uVar24 = uVar24 + 3) {
      piVar8 = (int *)((long)ppuStack_520 + uVar24 * 4);
      uVar5 = *piVar8 + iVar28;
      uVar6 = piVar8[1] + iVar28;
      uVar7 = piVar8[2] + iVar28;
      lVar21 = *(long *)(unaff_x19 + 0x38);
      psVar1 = (short *)(lVar21 + (ulong)uVar5 * 4);
      psVar2 = (short *)(lVar21 + (ulong)uVar6 * 4);
      psVar3 = (short *)(lVar21 + (ulong)uVar7 * 4);
      iVar23 = (int)*psVar2;
      iVar22 = (int)psVar2[1];
      if ((psVar3[1] - iVar22) * (*psVar1 - iVar23) + (iVar23 - *psVar3) * (psVar1[1] - iVar22) < 1)
      {
        uStack_410 = (undefined **)CONCAT44(uVar7,uVar5);
        apppuStack_408[0] = (uint ***)CONCAT44(apppuStack_408[0]._4_4_,uVar6);
        func_0x00010744cce8();
      }
      else {
        uStack_410 = (undefined **)CONCAT44(uVar6,uVar5);
        apppuStack_408[0] = (uint ***)CONCAT44(apppuStack_408[0]._4_4_,uVar7);
        func_0x00010744cce8();
      }
    }
    *(long *)(unaff_x24 + -0x18) = *(long *)(unaff_x24 + -0x18) + lVar31;
    *(ulong *)(unaff_x24 + -0x10) = *(long *)(unaff_x24 + -0x10) + uVar30;
    func_0x00010731e26c(&ppuStack_520);
    FUN_10740d418(&ppuStack_390);
    uVar24 = (ulong)uStack_524;
  }
  FUN_1073f0f44(&pppuStack_500);
  lVar31 = *(long *)(unaff_x19 + 0x158);
  while (lVar31 != unaff_x19 + 0x160) {
    lVar21 = plVar12[3];
    pppuVar15 = (uint ***)(lVar31 + 0x20);
    FUN_10744bca8();
    if (plVar12[3] + 8 == lVar21) {
      puVar20 = (undefined8 *)*plVar12;
      pppuStack_4f8 = (uint ***)puVar20[1];
      pppuStack_500 = (uint ***)*puVar20;
      if (puVar20[1] != 0) {
        do {
          func_0x00010744c2cc();
        } while (extraout_w10_00 != 0);
      }
      pppuVar17 = (uint ***)(*(long *)(unaff_x19 + 0x40) - *(long *)(unaff_x19 + 0x38) >> 2);
      ppuStack_390 = (uint **)((ulong)ppuStack_390 & 0xffffffffffffff00);
      uStack_2e8 = 0;
      func_0x00010744cb24();
      func_0x00010744cb04();
      FUN_10744213c();
    }
    else {
      puVar20 = (undefined8 *)*plVar12;
      pppuStack_4f8 = (uint ***)puVar20[1];
      pppuStack_500 = (uint ***)*puVar20;
      if (puVar20[1] != 0) {
        plVar4 = (long *)(puVar20[1] + 8);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar11) {
            *plVar4 = *plVar4 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      unaff_x22 = (uint ***)(*(long *)(unaff_x19 + 0x40) - *(long *)(unaff_x19 + 0x38) >> 2);
      unaff_x23 = plVar12[4];
      unaff_x24 = plVar12[2];
      pppuVar15 = (uint ***)(lVar21 + 0x58);
      FUN_107443404(&ppuStack_390);
      func_0x00010744cb24();
      func_0x00010744cb04();
      pppuVar17 = unaff_x22;
      FUN_10744213c();
    }
    func_0x00010726af18(apppuStack_408);
    FUN_107408214(&ppuStack_390);
    func_0x000107267e44(&pppuStack_500);
    func_0x00010002c7d4();
  }
  (**(code **)(**(long **)*plVar12 + 0x30))();
  func_0x00010726236c(&ppuStack_390);
  uVar13 = cStack_358 == '\x01';
  if ((bool)uVar13) {
    pppuVar15 = &ppuStack_390;
    FUN_10732f3ac(&uStack_410,unaff_x19 + 0x138);
  }
  func_0x00010744c778();
  FUN_107443458(&lStack_4e0);
  func_0x000104c2f714(appuStack_4c0);
  func_0x000104c2f714(appuStack_488);
  func_0x000104c2f714(&uStack_450);
  pppuVar16 = appuStack_200;
  func_0x000107267da8();
  func_0x00010744bf64(uStack_70);
  if ((bool)uVar13) {
    return pppuVar16;
  }
  ___stack_chk_fail();
  func_0x00010744c778();
  FUN_107443458(&lStack_4e0);
  func_0x000104c2f714(appuStack_4c0);
  func_0x000104c2f714(appuStack_488);
  func_0x000104c2f714(&uStack_450);
  pppuVar14 = appuStack_200;
  func_0x000107267da8();
  func_0x00010744c3c8();
  pcStack_568 = FUN_107441d9c;
  lStack_5a0 = unaff_x24;
  lStack_598 = unaff_x23;
  pppuStack_590 = unaff_x22;
  lStack_588 = lVar31;
  uStack_580 = uVar24;
  pppuStack_578 = pppuVar16;
  puStack_570 = &stack0xfffffffffffffff0;
  func_0x00010744c078();
  pppuVar16 = pppuVar15;
  uStack_5a8 = extraout_x8_04;
  func_0x000104c2d614();
  if ((((ulong)pppuVar15 & 1) == 0) &&
     (pppuVar15 = pppuVar17, func_0x000104c2d614(), (int)pppuVar15 == 0)) {
    puStack_5e0 = (uint *)0x0;
    puStack_5d8 = (uint *)0x0;
    uStack_5d0 = 0;
    pppuVar16 = pppuVar17;
    func_0x000104c2d634(pppuVar17);
    pppuVar16 = (uint ***)((long)pppuVar16 << 1);
    func_0x0001056c5718(&puStack_5e0,pppuVar16);
    pppuVar15 = pppuVar17;
    func_0x000107264c5c();
    iVar28 = (int)pppuVar15;
    ppuStack_5c0 = &puStack_5e0;
    ppuStack_5c8 = (uint **)&PTR_FUN_1109b12a0;
    pppuStack_5b0 = &ppuStack_5c8;
    FUN_1074429c0();
    func_0x00010744cc48();
    if ((iVar28 == 0) || (uVar13 = puStack_5e0 == puStack_5d8, (bool)uVar13)) {
      func_0x00010744d018();
      func_0x00010744cf60();
    }
    else {
      ppuStack_600 = (uint **)0x0;
      ppuStack_5f8 = (uint **)0x0;
      uStack_5f0 = 0;
      FUN_107442a48(&ppuStack_600,(long)puStack_5d8 - (long)puStack_5e0 >> 2);
      puVar19 = puStack_5e0;
      puStack_608 = puStack_5e0;
      FUN_107442ab0(&ppuStack_600);
      pppuVar16 = (uint ***)(ulong)*puVar19;
      func_0x0001056c5718(ppuStack_5f8 + -3,pppuVar16);
      func_0x000107264c5c();
      pppuVar15 = pppuVar17;
      func_0x00010744cefc();
      *pppuVar15 = (uint **)&PTR_FUN_1109b1330;
      pppuVar15[1] = (uint **)&ppuStack_600;
      pppuVar15[2] = &puStack_608;
      pppuVar15[3] = &puStack_5e0;
      pppuStack_5b0 = pppuVar15;
      FUN_1074429c0(pppuVar17,pppuVar16,&ppuStack_5c8);
      func_0x00010744cc48();
      if (((int)pppuVar17 == 0) || (uVar13 = puStack_608 == puStack_5d8, !(bool)uVar13)) {
        bVar11 = false;
        *(undefined1 *)extraout_x8_03 = 0;
      }
      else {
        extraout_x8_03[1] = ppuStack_5f8;
        *extraout_x8_03 = ppuStack_600;
        extraout_x8_03[2] = uStack_5f0;
        ppuStack_5f8 = (uint **)0x0;
        uStack_5f0 = 0;
        ppuStack_600 = (uint **)0x0;
        bVar11 = true;
      }
      *(bool *)(extraout_x8_03 + 3) = bVar11;
      pppuVar15 = &ppuStack_600;
      FUN_107442ef8(pppuVar15);
      func_0x00010744cf60();
      if (bVar11) goto LAB_107441edc;
    }
  }
  else {
    func_0x00010744d018();
  }
  FUN_107443458(extraout_x8_03);
  pppuVar15 = pppuVar14;
  func_0x000104c2d614();
  if ((int)pppuVar15 == 0) {
    func_0x000107264c5c(pppuVar14);
    FUN_107442f90(&ppuStack_5c8,pppuVar14,pppuVar16,0x3b);
    puStack_5e0 = (uint *)0x0;
    puStack_5d8 = (uint *)0x0;
    uStack_5d0 = 0;
    FUN_107442a48(&puStack_5e0,(long)ppuStack_5c0 - (long)ppuStack_5c8 >> 4);
    ppuVar9 = ppuStack_5c0;
    for (ppuVar26 = ppuStack_5c8; uVar13 = ppuVar26 == ppuVar9, !(bool)uVar13;
        ppuVar26 = ppuVar26 + 2) {
      FUN_107442f90(&ppuStack_600,*ppuVar26,ppuVar26[1],0x2c);
      FUN_107442ab0(&puStack_5e0);
      func_0x0001056c5718(puStack_5d8 + -6,(long)ppuStack_5f8 - (long)ppuStack_600 >> 4);
      ppuVar18 = ppuStack_5f8;
      ppuVar27 = ppuStack_600;
      while (uVar13 = ppuVar27 == ppuVar18, !(bool)uVar13) {
        lVar31 = (long)*ppuVar27 + (long)ppuVar27[1];
        FUN_107443098(*ppuVar27,lVar31,&puStack_608);
        if ((int)lVar31 != 0) {
          func_0x00010744303c(lVar31);
          func_0x00010744d018();
          func_0x00010744cf58();
          goto LAB_107441ecc;
        }
        func_0x000107443060(puStack_5d8 + -6,&puStack_608);
        ppuVar27 = ppuVar27 + 2;
      }
      func_0x00010744cf58();
    }
    extraout_x8_03[1] = puStack_5d8;
    *extraout_x8_03 = puStack_5e0;
    extraout_x8_03[2] = uStack_5d0;
    puStack_5d8 = (uint *)0x0;
    uStack_5d0 = 0;
    puStack_5e0 = (uint *)0x0;
    *(undefined1 *)(extraout_x8_03 + 3) = 1;
LAB_107441ecc:
    FUN_107442ef8(&puStack_5e0);
    pppuVar15 = &ppuStack_5c8;
    func_0x000107264ef0(pppuVar15);
  }
  else {
    func_0x00010744d018();
  }
LAB_107441edc:
  func_0x00010744bf64(uStack_5a8);
  if ((bool)uVar13) {
    return pppuVar15;
  }
  ___stack_chk_fail();
  func_0x00010744cc48();
  pppuVar15 = &ppuStack_600;
  FUN_107442ef8();
  func_0x00010744cf60();
  func_0x00010744c3c8();
  return (uint ***)((long)pppuVar15[2] - (long)pppuVar15[1] >> 2);
}



/* Entry: 107441d9c; end: 1074420db;  */

uint *** FUN_107441d9c(undefined8 *param_1,uint ***param_2,ulong param_3,uint ***param_4)

{
  bool bVar1;
  uint **ppuVar2;
  uint *puVar3;
  uint **ppuVar4;
  undefined1 in_ZR;
  int iVar5;
  uint ***pppuVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  uint **ppuVar9;
  uint **ppuVar10;
  uint *puStack_a8;
  uint **ppuStack_a0;
  uint **ppuStack_98;
  undefined8 uStack_90;
  uint *puStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  uint **ppuStack_68;
  uint **ppuStack_60;
  uint ***pppuStack_50;
  undefined8 uStack_48;
  
  func_0x00010744c078();
  uVar8 = param_3;
  uStack_48 = extraout_x8;
  func_0x000104c2d614();
  if (((param_3 & 1) == 0) && (pppuVar6 = param_4, func_0x000104c2d614(), (int)pppuVar6 == 0)) {
    puStack_80 = (uint *)0x0;
    puStack_78 = (uint *)0x0;
    uStack_70 = 0;
    pppuVar6 = param_4;
    func_0x000104c2d634(param_4);
    uVar8 = (long)pppuVar6 << 1;
    func_0x0001056c5718(&puStack_80,uVar8);
    pppuVar6 = param_4;
    func_0x000107264c5c();
    iVar5 = (int)pppuVar6;
    ppuStack_60 = &puStack_80;
    ppuStack_68 = (uint **)&PTR_FUN_1109b12a0;
    pppuStack_50 = &ppuStack_68;
    FUN_1074429c0();
    func_0x00010744cc48();
    if ((iVar5 == 0) || (in_ZR = puStack_80 == puStack_78, (bool)in_ZR)) {
      func_0x00010744d018();
      func_0x00010744cf60();
    }
    else {
      ppuStack_a0 = (uint **)0x0;
      ppuStack_98 = (uint **)0x0;
      uStack_90 = 0;
      FUN_107442a48(&ppuStack_a0,(long)puStack_78 - (long)puStack_80 >> 2);
      puVar3 = puStack_80;
      puStack_a8 = puStack_80;
      FUN_107442ab0(&ppuStack_a0);
      uVar8 = (ulong)*puVar3;
      func_0x0001056c5718(ppuStack_98 + -3,uVar8);
      func_0x000107264c5c();
      pppuVar6 = param_4;
      func_0x00010744cefc();
      *pppuVar6 = (uint **)&PTR_FUN_1109b1330;
      pppuVar6[1] = (uint **)&ppuStack_a0;
      pppuVar6[2] = &puStack_a8;
      pppuVar6[3] = &puStack_80;
      pppuStack_50 = pppuVar6;
      FUN_1074429c0(param_4,uVar8,&ppuStack_68);
      func_0x00010744cc48();
      if (((int)param_4 == 0) || (in_ZR = puStack_a8 == puStack_78, !(bool)in_ZR)) {
        bVar1 = false;
        *(undefined1 *)param_1 = 0;
      }
      else {
        param_1[1] = ppuStack_98;
        *param_1 = ppuStack_a0;
        param_1[2] = uStack_90;
        ppuStack_98 = (uint **)0x0;
        uStack_90 = 0;
        ppuStack_a0 = (uint **)0x0;
        bVar1 = true;
      }
      *(bool *)(param_1 + 3) = bVar1;
      pppuVar6 = &ppuStack_a0;
      FUN_107442ef8(pppuVar6);
      func_0x00010744cf60();
      if (bVar1) goto LAB_107441edc;
    }
  }
  else {
    func_0x00010744d018();
  }
  FUN_107443458(param_1);
  pppuVar6 = param_2;
  func_0x000104c2d614();
  if ((int)pppuVar6 == 0) {
    func_0x000107264c5c(param_2);
    FUN_107442f90(&ppuStack_68,param_2,uVar8,0x3b);
    puStack_80 = (uint *)0x0;
    puStack_78 = (uint *)0x0;
    uStack_70 = 0;
    FUN_107442a48(&puStack_80,(long)ppuStack_60 - (long)ppuStack_68 >> 4);
    ppuVar4 = ppuStack_60;
    for (ppuVar9 = ppuStack_68; in_ZR = ppuVar9 == ppuVar4, !(bool)in_ZR; ppuVar9 = ppuVar9 + 2) {
      FUN_107442f90(&ppuStack_a0,*ppuVar9,ppuVar9[1],0x2c);
      FUN_107442ab0(&puStack_80);
      func_0x0001056c5718(puStack_78 + -6,(long)ppuStack_98 - (long)ppuStack_a0 >> 4);
      ppuVar2 = ppuStack_98;
      ppuVar10 = ppuStack_a0;
      while (in_ZR = ppuVar10 == ppuVar2, !(bool)in_ZR) {
        lVar7 = (long)*ppuVar10 + (long)ppuVar10[1];
        FUN_107443098(*ppuVar10,lVar7,&puStack_a8);
        if ((int)lVar7 != 0) {
          func_0x00010744303c(lVar7);
          func_0x00010744d018();
          func_0x00010744cf58();
          goto LAB_107441ecc;
        }
        func_0x000107443060(puStack_78 + -6,&puStack_a8);
        ppuVar10 = ppuVar10 + 2;
      }
      func_0x00010744cf58();
    }
    param_1[1] = puStack_78;
    *param_1 = puStack_80;
    param_1[2] = uStack_70;
    puStack_78 = (uint *)0x0;
    uStack_70 = 0;
    puStack_80 = (uint *)0x0;
    *(undefined1 *)(param_1 + 3) = 1;
LAB_107441ecc:
    FUN_107442ef8(&puStack_80);
    pppuVar6 = &ppuStack_68;
    func_0x000107264ef0(pppuVar6);
  }
  else {
    func_0x00010744d018();
  }
LAB_107441edc:
  func_0x00010744bf64(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010744cc48();
    pppuVar6 = &ppuStack_a0;
    FUN_107442ef8();
    func_0x00010744cf60();
    func_0x00010744c3c8();
    return (uint ***)((long)pppuVar6[2] - (long)pppuVar6[1] >> 2);
  }
  return pppuVar6;
}



/* Entry: 1074420dc; end: 1074420ef;  */

long FUN_1074420dc(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2;
}



/* Entry: 1074420f0; end: 107442137;  */

undefined8 * FUN_1074420f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  func_0x00010744c4d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107443374();
  }
  else {
    uVar2 = *param_3;
    *extraout_x8 = *param_2;
    extraout_x8[1] = uVar2;
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
    *(undefined4 *)(extraout_x8 + 4) = 0;
    puVar1 = extraout_x8 + 5;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -5;
}



/* Entry: 107442138; end: 10744213b;  */

undefined4 * FUN_107442138(long param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [16];
  undefined4 *puStack_68;
  
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  plVar2 = (long *)(param_1 + 8);
  lVar6 = (long)(param_2 + param_3) - (long)param_2 >> 2;
  if (0 < lVar6) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) - lVar7 >> 2 < lVar6) {
      plVar4 = plVar2;
      func_0x00010014b1ac(plVar2,lVar6 + (lVar7 - *plVar2 >> 2));
      func_0x00010014b1fc(auStack_78,plVar4,(long)puVar5 - *plVar2 >> 2,(long *)(param_1 + 0x18));
      puVar3 = puStack_68;
      for (lVar7 = lVar6 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      puStack_68 = puStack_68 + lVar6;
      FUN_107428b08(plVar2,auStack_78,puVar5);
      func_0x00010744c408();
      func_0x00010014b328();
    }
    else {
      lVar7 = lVar7 - (long)puVar5;
      lVar1 = lVar7 >> 2;
      if (lVar1 < lVar6) {
        func_0x0001009bf9a0(plVar2,(long)param_2 + lVar7,param_2 + param_3,lVar6 - lVar1);
        if (0 < lVar1) {
          func_0x00010744ca68();
          puVar3 = puVar5;
          for (; lVar7 != 0; lVar7 = lVar7 + -4) {
            *puVar3 = *param_2;
            puVar3 = puVar3 + 1;
            param_2 = param_2 + 1;
          }
        }
      }
      else {
        func_0x00010744ca68();
        puVar3 = puVar5;
        for (lVar6 = lVar6 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
          *puVar3 = *param_2;
          puVar3 = puVar3 + 1;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return puVar5;
}



/* Entry: 10744213c; end: 107442253;  */

void FUN_10744213c(undefined8 *param_1)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010744c95c(*param_1);
  (*extraout_x8)();
  func_0x00010744c95c(param_1[1]);
  (*extraout_x8_00)();
  func_0x00010744c95c(param_1[2]);
  (*extraout_x8_01)();
  func_0x00010744c95c(param_1[3]);
  func_0x00010744cacc();
  (*extraout_x8_02)();
  func_0x00010744cacc(*(undefined8 *)(*(long *)param_1[4] + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000107442250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 107442254; end: 10744225b;  */

bool FUN_107442254(long param_1)

{
  param_1 = param_1 + 0x138;
  func_0x0001072a0454(param_1);
  return param_1 != 0;
}



/* Entry: 10744225c; end: 1074425e3;  */

void FUN_10744225c(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_68;
  
  func_0x00010744c4e8();
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((bVar1 & 1) == 0) {
    FUN_1074409ec(&uStack_90);
    func_0x000107309708(unaff_x19 + 0xc0,&uStack_90);
    lVar13 = lStack_68;
    lStack_68 = 0;
    if (lVar13 != 0) {
      func_0x00010744c0a4();
    }
    func_0x00010744cf1c(&uStack_90);
    func_0x000107309778(unaff_x19 + 0xf8,&uStack_90);
    lVar13 = lStack_80;
    lStack_80 = 0;
    if (lVar13 != 0) {
      func_0x00010744c0a4();
    }
    lVar13 = *(long *)(unaff_x19 + 0x78);
    lVar11 = *(long *)(unaff_x19 + 0x80);
    if (lVar13 == lVar11) {
      uStack_90 = uStack_90 & 0xffffffffffffff00;
    }
    else {
      func_0x00010744cf1c(&uStack_a8);
      lStack_80 = lStack_98;
      uStack_88 = CONCAT71(uStack_88._1_7_,uStack_a0);
      lStack_98 = 0;
      uStack_90 = uStack_a8;
    }
    uStack_78 = lVar13 != lVar11;
    FUN_107443478(unaff_x19 + 0x118,&uStack_90);
    func_0x00010730b10c(&uStack_90);
    if ((lVar13 != lVar11) && (lStack_98 != 0)) {
      func_0x00010744c0a4();
    }
  }
  uVar16 = bVar1 ^ 1;
  lVar13 = *(long *)(unaff_x19 + 0x158);
  while (lVar13 != unaff_x19 + 0x160) {
    if ((*(byte *)(lVar13 + 0xe8) & 1) == 0) {
      lVar4 = *(long *)(lVar13 + 0x58);
      func_0x00010744c3e4();
      *(long *)(lVar13 + 0x80) = lVar4;
      lVar5 = *(long *)(lVar13 + 0x60);
      func_0x00010744c3e4();
      *(long *)(lVar13 + 0x88) = lVar5;
      lVar6 = *(long *)(lVar13 + 0x68);
      func_0x00010744c3e4();
      *(long *)(lVar13 + 0x90) = lVar6;
      lVar7 = *(long *)(lVar13 + 0x70);
      func_0x00010744c3e4();
      *(long *)(lVar13 + 0x98) = lVar7;
      lVar8 = *(long *)(lVar13 + 0x78);
      func_0x00010744c3e4();
      lVar11 = 0;
      *(long *)(lVar13 + 0xa0) = lVar8;
      *(undefined8 *)(lVar13 + 0xa8) = 0;
      lVar12 = 4;
      plVar9 = (long *)(lVar13 + 0xb0);
      do {
        lVar11 = plVar9[-6] + lVar11;
        *plVar9 = lVar11;
        lVar12 = lVar12 + -1;
        plVar9 = plVar9 + 1;
      } while (lVar12 != 0);
      uStack_90 = 0;
      uStack_88 = 0;
      lStack_80 = 0;
      func_0x000100651cb4(&uStack_90,lVar5 + lVar4 + lVar6 + lVar7 + lVar8);
      FUN_10744bd40(lVar13 + 0xd0,&uStack_90);
      func_0x000100100fec(&uStack_90);
    }
    plVar9 = (long *)(lVar13 + 0xd0);
    FUN_10744bd74();
    lVar11 = lVar13 + 0x58;
    FUN_10744bd8c(lVar11,plVar9,*(undefined8 *)(lVar13 + 0x58),0);
    if ((*(long *)(lVar13 + 0x88) == 0) ||
       ((ulong)(plVar9[1] - *plVar9) <= *(ulong *)(lVar13 + 0xb0))) {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)*(undefined8 *)(lVar13 + 0x60);
      func_0x00010744cb64();
    }
    if ((*(long *)(lVar13 + 0x90) == 0) ||
       ((ulong)(plVar9[1] - *plVar9) <= *(ulong *)(lVar13 + 0xb8))) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)*(undefined8 *)(lVar13 + 0x68);
      func_0x00010744cb64();
    }
    lVar4 = lVar13 + 0x58;
    FUN_10744bd8c(lVar4,plVar9,*(undefined8 *)(lVar13 + 0x70),3);
    lVar5 = *plVar9;
    if ((*(long *)(lVar13 + 0xa0) == 0) || ((ulong)(plVar9[1] - lVar5) <= *(ulong *)(lVar13 + 200)))
    {
      uVar3 = 0;
    }
    else {
      plVar10 = *(long **)(lVar13 + 0x78);
      (**(code **)(*plVar10 + 0x20))(plVar10,lVar5 + *(ulong *)(lVar13 + 200));
      uVar3 = (uint)plVar10;
      lVar5 = *plVar9;
    }
    uVar14 = (uint)(lVar5 != plVar9[1]) & ((uint)lVar11 | uVar14 | uVar15 | (uint)lVar4 | uVar3);
    if (uVar14 == 1) {
      FUN_1073da4dc(&uStack_90);
      func_0x000107309708(lVar13 + 0xf0,&uStack_90);
      lVar11 = lStack_68;
      lStack_68 = 0;
      if (lVar11 != 0) {
        func_0x00010744c0a4();
      }
      iVar2 = *(int *)(lVar13 + 300);
      *(int *)(lVar13 + 300) = iVar2 + 1;
      *(int *)(lVar13 + 0x110) = iVar2;
    }
    uVar16 = uVar16 | uVar14;
    func_0x00010002c7d4();
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
  }
  *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  return;
}



/* Entry: 1074425e4; end: 10744261f;  */

bool FUN_1074425e4(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != *(long *)(param_1 + 0xb0)) {
    return true;
  }
  return *(long *)(param_1 + 0x90) != *(long *)(param_1 + 0x98);
}



/* Entry: 107442620; end: 10744279b;  */

undefined8 * FUN_107442620(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_188 [4];
  int iStack_184;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [32];
  undefined1 uStack_150;
  undefined8 auStack_148 [23];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  func_0x00010744d084();
  func_0x00010744c078();
  puVar8 = (undefined8 *)param_2[10];
  puVar7 = param_1 + 0x2c;
  puVar5 = puVar7;
  puVar9 = puVar7;
  uStack_68 = extraout_x8_00;
  while (puVar10 = (undefined8 *)*puVar5, puVar10 != (undefined8 *)0x0) {
    param_1 = puVar10 + 4;
    param_2 = puVar8;
    func_0x000104c2fc44();
    bVar2 = (int)param_1 == 0;
    lVar1 = 8;
    if (bVar2) {
      lVar1 = 0;
    }
    puVar5 = (undefined8 *)((long)puVar10 + lVar1);
    if (bVar2) {
      puVar9 = puVar10;
    }
  }
  uVar3 = puVar7 == puVar9;
  if (!(bool)uVar3) {
    param_2 = puVar9 + 4;
    func_0x000104c2fc44();
    param_1 = puVar8;
    if (((ulong)puVar8 & 1) == 0) {
      FUN_1074400f8(auStack_148);
      auStack_170[0] = 0;
      uStack_150 = 0;
      func_0x00010744ce7c(puVar9[0xb]);
      func_0x00010744c3fc(auStack_90);
      func_0x00010744ce7c(puVar9[0xc]);
      func_0x00010744c3fc(auStack_88);
      func_0x00010744ce7c(puVar9[0xd]);
      func_0x00010744c3fc(auStack_80);
      func_0x00010744ce7c(puVar9[0xe]);
      func_0x00010744c3fc(auStack_78);
      func_0x00010744ce7c(puVar9[0xf]);
      func_0x00010744c3fc(auStack_70);
      uStack_178 = 5;
      puStack_180 = auStack_90;
      func_0x00010744be14(auStack_188,&puStack_180);
      FUN_1074434e4(auStack_170);
      param_1 = auStack_148;
      func_0x000107443538();
      if (iStack_184 == 0) {
        *(undefined1 *)(unaff_x20 + 0x1c) = 0;
        uVar4 = 0;
        goto LAB_10744273c;
      }
    }
  }
  uVar4 = 1;
LAB_10744273c:
  *(undefined4 *)(extraout_x8 + 4) = uVar4;
  func_0x00010744bf64(uStack_68);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010744c3c8();
    (**(code **)(*(long *)*param_2 + 0x38))(&puStack_1c8);
    FUN_107330078(&puStack_1c8);
    func_0x00010783376c(&puStack_1c8);
    puVar7 = (undefined8 *)0x0;
    for (; puStack_1c8 != puStack_1c0; puStack_1c8 = puStack_1c8 + 3) {
      for (plVar6 = (long *)*puStack_1c8; plVar6 != (long *)puStack_1c8[1]; plVar6 = plVar6 + 3) {
        puVar7 = (undefined8 *)((long)puVar7 + (plVar6[1] - *plVar6 >> 2));
      }
    }
    FUN_1073f0f44(&puStack_1c8);
    return puVar7;
  }
  return param_1;
}



/* Entry: 10744279c; end: 107442817;  */

long FUN_10744279c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  (**(code **)(*(long *)*param_2 + 0x38))(&puStack_38);
  FUN_107330078(&puStack_38);
  func_0x00010783376c(&puStack_38);
  lVar2 = 0;
  for (; puStack_38 != puStack_30; puStack_38 = puStack_38 + 3) {
    for (plVar1 = (long *)*puStack_38; plVar1 != (long *)puStack_38[1]; plVar1 = plVar1 + 3) {
      lVar2 = lVar2 + (plVar1[1] - *plVar1 >> 2);
    }
  }
  FUN_1073f0f44(&puStack_38);
  return lVar2;
}



/* Entry: 107442818; end: 10744286b;  */

void FUN_107442818(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  FUN_10744be44(param_1 + 0x38,param_3 & 0xffffffff);
  lVar1 = *(long *)(param_1 + 0x158);
  while (lVar1 != param_1 + 0x160) {
    lVar1 = lVar1 + 0x58;
    FUN_10744286c(lVar1,param_3);
    func_0x00010744cf28();
  }
  return;
}



/* Entry: 10744286c; end: 1074428bf;  */

void FUN_10744286c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010744c454();
  (**(code **)(*(long *)*param_1 + 0x70))();
  func_0x00010744c66c(*(undefined8 *)(unaff_x20 + 8));
  func_0x00010744c66c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010744c66c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001074428bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x70))();
  return;
}



/* Entry: 1074428c0; end: 1074428e3;  */

undefined1  [16] FUN_1074428c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x1c0);
}



/* Entry: 1074428e4; end: 107442917;  */

long FUN_1074428e4(long param_1)

{
  long lVar1;
  
  lVar1 = 200;
  do {
    func_0x0001073bc770(param_1 + lVar1);
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != -0x28);
  return param_1;
}



/* Entry: 107442918; end: 1074429bf;  */

/* WARNING: Possible PIC construction at 0x000107442950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107442954) */
/* WARNING: Removing unreachable block (ram,0x000107442980) */
/* WARNING: Removing unreachable block (ram,0x00010744c630) */

ulong FUN_107442918(byte *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 in_ZR;
  long lVar3;
  uint uVar4;
  undefined8 extraout_x8;
  uint uVar5;
  ulong unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_70 [64];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = param_4;
  func_0x00010744c024();
  if (*(int *)(lVar3 + 0x70) == 0) {
    func_0x00010744bf64(extraout_x8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010744c9e0();
      func_0x000104c2f714();
      func_0x00010744c3c8();
      uVar5 = 0;
      uVar4 = 0;
      pbVar2 = param_1 + param_2;
      for (; param_2 = param_2 + -1, param_1 < pbVar2; param_1 = param_1 + 1) {
        uVar4 = (*param_1 & 0x3f) << (ulong)(uVar5 & 0x1f) | uVar4;
        if ((*param_1 >> 6 & 1) == 0) {
          FUN_107442aec(param_3,(uVar4 ^ -(uVar4 & 1)) >> 1);
          uVar4 = 0;
          uVar5 = 0;
        }
        else {
          if (param_2 == 0) break;
          uVar5 = uVar5 + 6;
        }
      }
      return (ulong)(pbVar2 <= param_1);
    }
  }
  else {
    unaff_x30 = 0x107442954;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(long *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1074429c0; end: 107442a47;  */

bool FUN_1074429c0(byte *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  pbVar1 = param_1 + param_2;
  for (; param_2 = param_2 + -1, param_1 < pbVar1; param_1 = param_1 + 1) {
    uVar2 = (*param_1 & 0x3f) << (ulong)(uVar3 & 0x1f) | uVar2;
    if ((*param_1 >> 6 & 1) == 0) {
      FUN_107442aec(param_3,(uVar2 ^ -(uVar2 & 1)) >> 1);
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      if (param_2 == 0) break;
      uVar3 = uVar3 + 6;
    }
  }
  return pbVar1 <= param_1;
}



/* Entry: 107442a48; end: 107442aaf;  */

undefined8 * FUN_107442a48(undefined8 *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined8 auStack_48 [5];
  
  func_0x00010744c258();
  uVar1 = (ulong)(extraout_x9 / 0x18) <= param_2;
  if ((ulong)(extraout_x9 / 0x18) < param_2) {
    func_0x00010744d038();
    if ((bool)uVar1) {
      FUN_107442c08();
      func_0x00010744c408();
      FUN_107442cc4();
      func_0x00010744c3c8();
      func_0x00010744c4d8();
      if ((bool)uVar1) {
        puVar2 = unaff_x19;
        FUN_107442d2c();
      }
      else {
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        puVar2 = extraout_x8 + 3;
        extraout_x8[2] = 0;
      }
      unaff_x19[1] = puVar2;
      return puVar2 + -3;
    }
    func_0x00010744c4c8();
    FUN_107442c48(auStack_48);
    func_0x00010744c4f4();
    FUN_107442c14();
    param_1 = auStack_48;
    FUN_107442cc4(param_1);
  }
  return param_1;
}



/* Entry: 107442ab0; end: 107442aeb;  */

undefined8 * FUN_107442ab0(void)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010744c4d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_107442d2c();
  }
  else {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    puVar1 = extraout_x8 + 3;
    extraout_x8[2] = 0;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -3;
}



/* Entry: 107442aec; end: 107442b23;  */

void FUN_107442aec(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x000107442b0c(param_1,&uStack_14);
  return;
}



/* Entry: 107442b24; end: 107442b2b;  */

void FUN_107442b24(void)

{
  return;
}



/* Entry: 107442b2c; end: 107442b53;  */

void FUN_107442b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010744cfb4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b12a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107442b54; end: 107442b77;  */

void FUN_107442b54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b12a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107442b78; end: 107442b9f;  */

void FUN_107442b78(long param_1,undefined4 *param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = *param_2;
  func_0x0001009eba34(*(undefined8 *)(param_1 + 8),&uStack_14);
  return;
}



/* Entry: 107442ba0; end: 107442bc7;  */

void FUN_107442ba0(undefined8 param_1)

{
  func_0x00010744c8ac();
  func_0x00010744cf98(param_1,&PTR_DAT_1109b1310);
  func_0x00010744cde0();
  return;
}



/* Entry: 107442bc8; end: 107442bd3;  */

undefined ** FUN_107442bc8(void)

{
  return &PTR_DAT_1109b1310;
}



/* Entry: 107442bd4; end: 107442c07;  */

void FUN_107442bd4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010744ca08();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010744c590(uVar1);
  return;
}



/* Entry: 107442c08; end: 107442c13;  */

void FUN_107442c08(void)

{
  func_0x00010744c184();
  func_0x00010744bfc8();
  func_0x00010744c540();
  func_0x00010744bea0();
  return;
}



/* Entry: 107442c14; end: 107442c47;  */

void FUN_107442c14(void)

{
  func_0x00010744bfc8();
  func_0x00010744c540();
  func_0x00010744bea0();
  return;
}



/* Entry: 107442c48; end: 107442c9b;  */

void FUN_107442c48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010744c480();
  if (param_2 != 0) {
    func_0x000107442c7c(param_4);
  }
  func_0x00010744c6dc(0x18);
  return;
}



/* Entry: 107442c9c; end: 107442cc3;  */

long * FUN_107442c9c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107442cf0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107442cc4; end: 107442cef;  */

long * FUN_107442cc4(long *param_1)

{
  FUN_107442cf0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107442cf0; end: 107442cf7;  */

void FUN_107442cf0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x00010731e26c();
  }
  return;
}



/* Entry: 107442cf8; end: 107442d2b;  */

void FUN_107442cf8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x00010731e26c();
  }
  return;
}



/* Entry: 107442d2c; end: 107442da7;  */

long * FUN_107442d2c(long *param_1)

{
  undefined8 *puStack_38;
  
  FUN_107442da8(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_107442c48();
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  func_0x00010744c4f4();
  FUN_107442c14();
  func_0x00010744c6f4();
  FUN_107442cc4();
  return param_1;
}



/* Entry: 107442da8; end: 107442dc7;  */

long * FUN_107442da8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_107442c08();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 107442dc8; end: 107442dcf;  */

void FUN_107442dc8(void)

{
  return;
}



/* Entry: 107442dd0; end: 107442e07;  */

void FUN_107442dd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010744cefc();
  *puVar1 = &PTR_FUN_1109b1330;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_1[3];
  return;
}



/* Entry: 107442e08; end: 107442e37;  */

void FUN_107442e08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b1330;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107442e38; end: 107442eeb;  */

void FUN_107442e38(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint *puVar2;
  undefined4 uStack_24;
  
  uStack_24 = *param_2;
  func_0x0001009eba34(*(long *)(*(long *)(param_1 + 8) + 8) + -0x18,&uStack_24);
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  puVar2 = (uint *)**(long **)(param_1 + 0x10);
  if (((ulong)*puVar2 == *(long *)(lVar1 + -0x10) - *(long *)(lVar1 + -0x18) >> 2) &&
     (puVar2 = puVar2 + 1, puVar2 != *(uint **)(*(long *)(param_1 + 0x18) + 8))) {
    **(long **)(param_1 + 0x10) = (long)puVar2;
    FUN_107442ab0();
    func_0x0001056c5718(*(long *)(*(long *)(param_1 + 8) + 8) + -0x18,
                        *(undefined4 *)**(undefined8 **)(param_1 + 0x10));
  }
  return;
}



/* Entry: 107442eec; end: 107442ef7;  */

undefined ** FUN_107442eec(void)

{
  return &PTR_DAT_1109b1390;
}



/* Entry: 107442ef8; end: 107442f53;  */

void FUN_107442ef8(void)

{
  func_0x00010744c220();
  func_0x000107442f1c();
  return;
}



/* Entry: 107442f54; end: 107442f5b;  */

void FUN_107442f54(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010731e26c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107442f5c; end: 107442f8f;  */

void FUN_107442f5c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010731e26c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107442f90; end: 10744303b;  */

void FUN_107442f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  while( true ) {
    puVar1 = &uStack_40;
    func_0x0001057fa6dc(puVar1,param_4,lVar2);
    if (puVar1 == (undefined8 *)0xffffffffffffffff) break;
    func_0x0001000671d4(&uStack_40,lVar2,(long)puVar1 - lVar2);
    func_0x00010744c6ac();
    func_0x000107264c84();
    lVar2 = (long)puVar1 + 1;
  }
  func_0x0001000671d4(&uStack_40,lVar2,0xffffffffffffffff);
  func_0x00010744c6ac();
  func_0x000107264c84();
  return;
}



/* Entry: 10744303c; end: 107443097;  */

undefined1  [16] FUN_10744303c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  __ZNSt3__116generic_categoryEv();
  auVar2._0_8_ = param_1 & 0xffffffff;
  auVar2._8_8_ = uVar1;
  return auVar2;
}



/* Entry: 107443098; end: 10744316b;  */

undefined1  [16] FUN_107443098(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  byte bStack_32;
  byte bStack_31;
  
  func_0x00010744c4e8();
  pbVar1 = &bStack_32;
  FUN_10744316c();
  if ((pbVar1 == unaff_x20) || (9 < *pbVar1 - 0x30)) {
    if (pbVar1 == unaff_x19) {
      uVar3 = 0;
      uVar4 = 0x16;
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
      *param_3 = 0;
      unaff_x19 = pbVar1;
    }
  }
  else {
    pbVar2 = &bStack_31;
    FUN_107443194();
    uVar3 = (ulong)pbVar1 & 0xffffffff00000000;
    uVar4 = (ulong)pbVar1 & 0xffffffff;
    unaff_x19 = pbVar2;
    if (uVar4 == 0x22) {
      for (; (unaff_x19 = unaff_x20, pbVar2 != unaff_x20 &&
             (unaff_x19 = pbVar2, *pbVar2 - 0x30 < 10)); pbVar2 = pbVar2 + 1) {
      }
    }
  }
  auVar5._8_8_ = uVar3 | uVar4;
  auVar5._0_8_ = unaff_x19;
  return auVar5;
}



/* Entry: 10744316c; end: 107443193;  */

char * FUN_10744316c(undefined8 param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  for (; (pcVar1 = param_3, param_2 != param_3 && (pcVar1 = param_2, *param_2 == '0'));
      param_2 = param_2 + 1) {
  }
  return pcVar1;
}



/* Entry: 107443194; end: 107443203;  */

void FUN_107443194(undefined8 param_1,byte *param_2)

{
  int *unaff_x19;
  byte *unaff_x20;
  uint uStack_28;
  uint uStack_24;
  
  func_0x00010744cac0();
  FUN_107443204();
  if (((param_2 == unaff_x20) || (9 < *param_2 - 0x30)) && (!CARRY4(uStack_24,uStack_28))) {
    *unaff_x19 = uStack_28 + uStack_24;
  }
  return;
}



/* Entry: 107443204; end: 1074432eb;  */

ulong FUN_107443204(undefined8 param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  char *unaff_x19;
  uint auStack_70 [9];
  uint uStack_4c;
  long lStack_48;
  
  func_0x00010744c024();
  lStack_48 = extraout_x8;
  lVar9 = 9;
  do {
    cVar3 = *unaff_x19;
    if ((byte)(cVar3 - 0x3aU) < 0xf6) break;
    unaff_x19 = unaff_x19 + 1;
    auStack_70[lVar9] = (uint)(byte)(cVar3 - 0x30);
    bVar4 = lVar9 != 0;
    lVar9 = lVar9 + -1;
  } while (bVar4 && unaff_x19 != param_2);
  lVar1 = (lVar9 + 1 << 0x20) >> 0x1e;
  puVar5 = (uint *)((long)auStack_70 + lVar1 + 4);
  uVar8 = (ulong)*(uint *)((long)auStack_70 + lVar1);
  puVar6 = &uStack_4c;
  piVar7 = (int *)&UNK_10de6dc94;
  FUN_1074432ec();
  *param_3 = (int)puVar5;
  uVar2 = *(uint *)(&UNK_10de6dc90 + (0x900000000 - (lVar9 + 1 << 0x20) >> 0x1e));
  *param_4 = (int)((ulong)uStack_4c * (ulong)uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (long)unaff_x19 - (ulong)(((ulong)uStack_4c * (ulong)uVar2 & 0xffffffff00000000) != 0);
  }
  ___stack_chk_fail();
  for (; puVar5 < puVar6; puVar5 = puVar5 + 1) {
    uVar8 = (ulong)((int)uVar8 + *piVar7 * *puVar5);
    piVar7 = piVar7 + 1;
  }
  return uVar8;
}



/* Entry: 1074432ec; end: 10744330b;  */

ulong FUN_1074432ec(int *param_1,int *param_2,int *param_3,ulong param_4)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    param_4 = (ulong)(uint)((int)param_4 + *param_3 * *param_1);
    param_3 = param_3 + 1;
  }
  return param_4;
}



/* Entry: 10744330c; end: 107443373;  */

void FUN_10744330c(void)

{
  undefined4 *unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010744c010();
  func_0x00010014b1ac();
  func_0x00010744c324();
  func_0x00010744ca40();
  func_0x00010014b1fc();
  *uStack_38 = *unaff_x20;
  func_0x00010744c4f4();
  func_0x00010014b2a4();
  func_0x00010744c6f4();
  func_0x00010014b328();
  return;
}



/* Entry: 107443374; end: 107443403;  */

void FUN_107443374(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  undefined8 *puStack_48;
  
  func_0x00010744d090();
  FUN_1074084f8();
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_10740857c();
  uVar1 = *param_3;
  *puStack_48 = *unaff_x21;
  puStack_48[1] = uVar1;
  puStack_48[2] = 0;
  puStack_48[3] = 0;
  *(undefined4 *)(puStack_48 + 4) = 0;
  func_0x00010744c4f4();
  FUN_107408540();
  func_0x00010744c6f4();
  FUN_1074085fc();
  return;
}



/* Entry: 107443404; end: 10744341f;  */

void FUN_107443404(long param_1)

{
  FUN_107443420();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 107443420; end: 107443457;  */

void FUN_107443420(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c454();
  func_0x000104c2fe00();
  func_0x000104c2fe00(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x000104c2fe00(unaff_x20 + 0x70,unaff_x19 + 0x70);
  return;
}



/* Entry: 107443458; end: 107443477;  */

void FUN_107443458(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107442ef8();
  }
  return;
}



/* Entry: 107443478; end: 10744349b;  */

undefined8 FUN_107443478(undefined8 param_1)

{
  FUN_10744349c();
  return param_1;
}



/* Entry: 10744349c; end: 1074434e3;  */

undefined8 * FUN_10744349c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      uVar3 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      *param_1 = uVar3;
      func_0x00010730b014(param_1 + 2,param_2 + 2);
      return param_1;
    }
  }
  else {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (*(char *)(param_1 + 3) == '\x01') {
        puVar2 = param_1 + 2;
        func_0x00010730b038(puVar2);
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return puVar2;
    }
    uVar3 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar3;
    uVar3 = param_2[2];
    param_2[2] = 0;
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 1074434e4; end: 107443503;  */

void FUN_1074434e4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_107443504();
  }
  return;
}



/* Entry: 107443504; end: 10744365b;  */

void FUN_107443504(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010744ca08();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010744c590(uVar1);
  return;
}



/* Entry: 10744365c; end: 10744367b;  */

void FUN_10744365c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10744367c; end: 10744387b;  */

/* WARNING: Possible PIC construction at 0x000107443698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010744369c) */

long FUN_10744367c(long param_1)

{
  long lVar1;
  
  func_0x0001074436bc(param_1 + 0x20);
  lVar1 = param_1 + 0x18;
  func_0x00010744c9f8();
  if (lVar1 != 0) {
    func_0x00010744c0a4();
  }
  return param_1;
}



/* Entry: 10744387c; end: 107443893;  */

void FUN_10744387c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107443894; end: 10744390f;  */

void FUN_107443894(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_98 [96];
  undefined8 uStack_38;
  
  func_0x00010744d06c();
  func_0x00010744c078();
  uStack_38 = extraout_x8;
  func_0x000107278acc(auStack_98);
  func_0x000107448838();
  func_0x00010744cd20();
  func_0x00010744bf64(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c408();
  func_0x00010726b164();
  func_0x00010744c3c8();
  func_0x000107443948();
  return;
}



/* Entry: 107443910; end: 107443963;  */

void FUN_107443910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puStack_38 = &uStack_20;
  puStack_30 = &uStack_24;
  uStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  uStack_14 = param_5;
  func_0x000107443948(param_6,&uStack_25,&puStack_38);
  return;
}



/* Entry: 107443964; end: 107443983;  */

void FUN_107443964(long param_1,undefined8 param_2)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010744cdf0(param_2,param_1);
    if ((extraout_x8 & 1) == 0) {
      func_0x00010744caf8();
      FUN_107443d54();
      func_0x00010744c490();
      FUN_107445bc0();
    }
    else {
      func_0x00010744caf8();
      FUN_107443d00();
      func_0x00010744c490();
      FUN_107444f24();
    }
    *unaff_x19 = unaff_x20;
    return;
  }
  func_0x00010744d06c();
  func_0x00010744cefc();
  func_0x00010744c9d4(&UNK_1109b13a0);
  uVar1 = *unaff_x19;
  *(undefined8 *)(param_1 + 0x14) = unaff_x19[1];
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *unaff_x20 = param_1;
  return;
}



/* Entry: 107443984; end: 1074439b7;  */

void FUN_107443984(long param_1)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010744d06c();
  func_0x00010744cefc();
  func_0x00010744c9d4(&UNK_1109b13a0);
  uVar1 = *unaff_x19;
  *(undefined8 *)(param_1 + 0x14) = unaff_x19[1];
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1074439b8; end: 1074439f7;  */

void FUN_1074439b8(void)

{
  return;
}



/* Entry: 1074439f8; end: 107443a43;  */

void FUN_1074439f8(int param_1)

{
  func_0x00010744c9a8();
  if (param_1 == 0) {
    func_0x00010744ce88();
  }
  else {
    func_0x00010744cdd0();
  }
  func_0x00010744c36c();
  return;
}



/* Entry: 107443a44; end: 107443a87;  */

void FUN_107443a44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *unaff_x20;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x00010744cac0();
  func_0x00010744ce34();
  FUN_1073ba8b4();
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  func_0x00010744cf30(*(undefined8 *)(*unaff_x20 + 0x130),param_5,param_6,&uStack_40);
  func_0x00010744c094();
  return;
}



/* Entry: 107443a88; end: 107443a8b;  */

void FUN_107443a88(void)

{
  return;
}



/* Entry: 107443a8c; end: 107443acf;  */

long FUN_107443a8c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x00010744c4d8();
  if ((bool)in_CY) {
    lVar1 = unaff_x19;
    FUN_107443ad0();
  }
  else {
    uVar2 = *param_2;
    *(undefined4 *)(extraout_x8 + 1) = *(undefined4 *)(param_2 + 1);
    *extraout_x8 = uVar2;
    lVar1 = (long)extraout_x8 + 0xc;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return lVar1 + -0xc;
}



/* Entry: 107443ad0; end: 107443b4f;  */

void FUN_107443ad0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *puStack_48;
  
  func_0x00010744c010();
  FUN_107443b50();
  func_0x00010744c324();
  func_0x00010744ca40();
  FUN_107443be0();
  uVar1 = *unaff_x20;
  *(undefined4 *)(puStack_48 + 1) = *(undefined4 *)(unaff_x20 + 1);
  *puStack_48 = uVar1;
  func_0x00010744c4f4();
  FUN_107443ba0();
  func_0x00010744c6f4();
  FUN_107443c60();
  return;
}



/* Entry: 107443b50; end: 107443b9f;  */

long * FUN_107443b50(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x1555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0xc;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x1555555555555555;
    }
    return plVar2;
  }
  FUN_107443bd4();
  func_0x00010744bfc8();
  func_0x00010744c540();
  func_0x00010744bea0();
  return param_1;
}



/* Entry: 107443ba0; end: 107443bd3;  */

void FUN_107443ba0(void)

{
  func_0x00010744bfc8();
  func_0x00010744c540();
  func_0x00010744bea0();
  return;
}



/* Entry: 107443bd4; end: 107443bdf;  */

void FUN_107443bd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010744c184();
  func_0x00010744c480();
  if (param_2 != 0) {
    func_0x000107443c14(param_4);
  }
  func_0x00010744c6dc(0xc);
  return;
}



/* Entry: 107443be0; end: 107443c33;  */

void FUN_107443be0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010744c480();
  if (param_2 != 0) {
    func_0x000107443c14(param_4);
  }
  func_0x00010744c6dc(0xc);
  return;
}



/* Entry: 107443c34; end: 107443c5f;  */

long * FUN_107443c34(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = (long *)(param_2 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107443c8c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107443c60; end: 107443c8b;  */

long * FUN_107443c60(long *param_1)

{
  FUN_107443c8c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107443c8c; end: 107443caf;  */

void FUN_107443c8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0xc;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107443cb0; end: 107443cff;  */

void FUN_107443cb0(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010744cdf0();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010744caf8();
    FUN_107443d54();
    func_0x00010744c490();
    FUN_107445bc0();
  }
  else {
    func_0x00010744caf8();
    FUN_107443d00();
    func_0x00010744c490();
    FUN_107444f24();
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 107443d00; end: 107443d53;  */

void FUN_107443d00(void)

{
  undefined4 *unaff_x21;
  
  func_0x00010744ce00();
  __Znwm(0x150);
  func_0x00010744c9e0();
  FUN_1073dec2c();
  func_0x00010744c6ac(*unaff_x21,unaff_x21[1],unaff_x21[2],unaff_x21[3]);
  FUN_107443db0();
  func_0x00010744c67c();
  return;
}



/* Entry: 107443d54; end: 107443daf;  */

void FUN_107443d54(void)

{
  undefined4 *unaff_x21;
  undefined4 *unaff_x22;
  
  func_0x00010744c500();
  __Znwm(0x158);
  func_0x00010744c9e0();
  FUN_1073dec2c();
  func_0x00010744c6ac(*unaff_x22,*unaff_x21,unaff_x21[1],unaff_x21[2],unaff_x21[3]);
  FUN_107444f78();
  func_0x00010744c67c();
  return;
}



/* Entry: 107443db0; end: 107443dfb;  */

void FUN_107443db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  func_0x00010744c1f0(&UNK_1109b1440);
  FUN_107432e00();
  *(undefined4 *)(param_5 + 0xb0) = param_1;
  *(undefined4 *)(param_5 + 0xb4) = param_2;
  *(undefined4 *)(param_5 + 0xb8) = param_3;
  *(undefined4 *)(param_5 + 0xbc) = param_4;
  func_0x00010744c7dc();
  return;
}



/* Entry: 107443dfc; end: 107443dff;  */

void FUN_107443dfc(void)

{
  long unaff_x19;
  
  func_0x00010744cfc0();
  FUN_1074444a8(unaff_x19 + 0x110);
  func_0x00010730b13c(unaff_x19 + 0xd8);
  FUN_1074443fc(unaff_x19 + 0xc0);
  func_0x00010744ccf8();
  func_0x00010744cb44();
  return;
}



/* Entry: 107443e00; end: 107443e13;  */

void FUN_107443e00(void)

{
  FUN_107444434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107443e14; end: 107443fbf;  */

undefined1 * FUN_107443e14(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 uStack_2d0;
  undefined1 uStack_298;
  long lStack_290;
  undefined1 auStack_288 [112];
  undefined1 auStack_218 [8];
  ulong uStack_210;
  undefined1 auStack_1a0 [56];
  byte bStack_168;
  
  func_0x00010744c720();
  func_0x00010744bf78();
  func_0x000107751284(auStack_1a0);
  func_0x00010744cc24();
  func_0x00010744c530(auStack_288);
  func_0x00010744c1e4();
  func_0x00010744ceb4();
  func_0x00010744c648(auStack_1a0);
  uStack_2d0 = 0;
  uStack_298 = 0;
  lStack_290 = unaff_x19 + 0x10;
  uVar8 = *(undefined4 *)(unaff_x19 + 0xb0);
  uVar9 = *(undefined4 *)(unaff_x19 + 0xb4);
  uVar10 = *(undefined4 *)(unaff_x19 + 0xb8);
  uVar11 = *(undefined4 *)(unaff_x19 + 0xbc);
  func_0x00010744ce9c(unaff_x19 + 0x70);
  uStack_2e0 = uVar8;
  uStack_2dc = uVar9;
  uStack_2d8 = uVar10;
  uStack_2d4 = uVar11;
  func_0x00010744cb84();
  func_0x00010744cb74();
  func_0x00010744cc1c();
  func_0x00010744cb7c();
  FUN_107444548(&uStack_2e0);
  func_0x00010744c6b8();
  plVar5 = (long *)(unaff_x19 + 0xc0);
  lVar1 = *plVar5;
  lVar2 = *(long *)(unaff_x19 + 200);
  FUN_1074446cc(plVar5,unaff_x20 & 0xffffffff);
  uVar6 = lVar2 - lVar1 >> 3;
  for (uVar7 = uVar6; uVar3 = uVar7 == unaff_x20, uVar7 < unaff_x20; uVar7 = uVar7 + 1) {
    FUN_1074447d4(plVar5,auStack_1a0);
  }
  func_0x00010744c92c(unaff_x19 + 0x110);
  func_0x00010744c924(unaff_x19 + 0x130);
  func_0x00010744c470();
  (*extraout_x8_00)();
  func_0x00010726236c(auStack_1a0);
  uStack_210 = uVar6;
  if ((bStack_168 & 1) == 0) {
    FUN_107444674(unaff_x19 + 0x130,auStack_218);
  }
  else {
    FUN_10744464c(unaff_x19 + 0x110,auStack_1a0);
    FUN_107444674();
  }
  *(undefined1 *)(unaff_x19 + 0x148) = 1;
  puVar4 = auStack_1a0;
  func_0x00010724b3d8(puVar4);
  func_0x00010744bf64(extraout_x8);
  if ((bool)uVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = auStack_1a0;
  func_0x00010724b3d8();
  func_0x00010744c3c8();
  return (undefined1 *)
         (((*(long *)(puVar4 + 0xc0) - *(long *)(puVar4 + 200) ^ 0xffffffffffffffffU) &
          0xfffffffffffffff0) + 0x10);
}



/* Entry: 107443fc0; end: 107443fc7;  */

long FUN_107443fc0(long param_1)

{
  return ((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 200) ^ 0xffffffffffffffffU) &
         0xfffffffffffffff0) + 0x10;
}



/* Entry: 107443fc8; end: 107444023;  */

char FUN_107443fc8(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x148);
  if (cVar1 == '\x01') {
    func_0x00010744c158(*(undefined8 *)(param_1 + 0xc0));
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  return cVar1;
}



/* Entry: 107444024; end: 10744412b;  */

void FUN_107444024(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  long in_stack_00000040;
  
  func_0x00010744ce4c();
  func_0x00010744c19c();
  func_0x00010744c8d0();
  func_0x00010744c880();
  func_0x00010744cbe0();
  if ((bool)in_ZR) {
    func_0x00010744cbc8();
  }
  else {
    func_0x00010744c460();
    func_0x00010744c318();
    func_0x00010744cbbc();
    for (; uVar1 = unaff_x23 == unaff_x24, !(bool)uVar1; unaff_x23 = unaff_x23 + 0x58) {
      func_0x00010744c244();
      func_0x00010744c9cc();
      if (in_stack_00000040 != 0) {
        func_0x00010744cbb0();
        if ((bool)uVar1) {
          func_0x00010744c93c();
          func_0x00010744c30c();
        }
        else {
          func_0x00010786967c();
          func_0x00010744c8a4();
        }
        func_0x00010744c230();
        if (extraout_x8 != 0) {
          do {
            func_0x00010744c2cc();
          } while (extraout_w10 != 0);
        }
        func_0x00010744c038();
        FUN_10744412c();
        func_0x00010744c664();
        *(undefined1 *)(unaff_x22 + 0x148) = unaff_w25;
        func_0x00010744c640();
      }
      func_0x00010744c65c();
    }
    func_0x00010744c300();
  }
  func_0x00010744c620();
  return;
}



/* Entry: 10744412c; end: 107444263;  */

void FUN_10744412c(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 in_x6;
  code *pcVar3;
  undefined8 in_x7;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 auStack_2c8 [56];
  undefined1 uStack_290;
  long lStack_288;
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  code *pcStack_268;
  undefined1 auStack_210 [120];
  undefined1 auStack_198 [224];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_8;
  
  func_0x00010744c720();
  func_0x00010744bfa0();
  uStack_8 = extraout_x8;
  func_0x000107751284(auStack_198);
  func_0x00010744c708(auStack_280);
  func_0x00010744c2f4();
  func_0x0001073c4f74(auStack_210,auStack_280);
  func_0x00010744c718(auStack_198);
  auStack_2c8[0] = 0;
  uStack_290 = 0;
  lStack_288 = unaff_x22 + 0x10;
  uVar4 = *(undefined4 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined4 *)(unaff_x22 + 0xb4);
  uVar6 = *(undefined4 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined4 *)(unaff_x22 + 0xbc);
  uStack_b8 = in_x7;
  uStack_b0 = in_x6;
  FUN_1074388a0(unaff_x22 + 0x70,auStack_198,auStack_2c8);
  uStack_2d8 = uVar4;
  uStack_2d4 = uVar5;
  uStack_2d0 = uVar6;
  uStack_2cc = uVar7;
  func_0x00010724b3d8(auStack_2c8);
  func_0x000107267e8c(auStack_210);
  func_0x000107267eac(auStack_280);
  func_0x000107267da8(auStack_198);
  FUN_107444548(&uStack_2d8);
  func_0x00010744c6b8();
  while (uVar1 = unaff_x21 == unaff_x20, unaff_x21 < unaff_x20) {
    FUN_107444ee0(unaff_x22 + 0xc0);
    func_0x00010744ce28();
  }
  if ((*(byte *)(in_stack_00000070 + 0x20) & 1) != 0) {
    func_0x00010744c944();
  }
  func_0x00010744bf64(uStack_8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_2c8);
  func_0x000107267e8c(auStack_210);
  func_0x000107267eac(auStack_280);
  puVar2 = auStack_198;
  func_0x000107267da8();
  func_0x00010744c3c8();
  pcVar3 = FUN_107444264;
  func_0x00010744c750();
  puStack_270 = &stack0x00000060;
  pcStack_268 = pcVar3;
  func_0x00010744c078();
  func_0x00010744ca60();
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  func_0x00010744c444(*(undefined4 *)(puVar2 + 0xb0),*(undefined4 *)(puVar2 + 0xb4),
                      *(undefined4 *)(puVar2 + 0xb8),*(undefined4 *)(puVar2 + 0xbc));
  FUN_1074388a0();
  func_0x00010744c0e8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  *extraout_x8_00 = unaff_s8;
  extraout_x8_00[1] = unaff_s9;
  extraout_x8_00[2] = unaff_s10;
  extraout_x8_00[3] = unaff_s11;
  extraout_x8_00[4] = unaff_s8;
  extraout_x8_00[5] = unaff_s9;
  extraout_x8_00[6] = unaff_s10;
  extraout_x8_00[7] = unaff_s11;
  *(undefined1 *)(extraout_x8_00 + 8) = 1;
  func_0x00010744bf64(extraout_x8_01);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  return;
}



/* Entry: 107444264; end: 107444337;  */

void FUN_107444264(long param_1)

{
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  FUN_10744c750();
  func_0x00010744c078();
  func_0x00010744ca60();
  func_0x00010744c2e8();
  func_0x00010744c2dc();
  func_0x00010744c178();
  func_0x00010744c148();
  func_0x00010744c2ac();
  func_0x00010744c444(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),
                      *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  FUN_1074388a0();
  func_0x00010744c0e8();
  func_0x00010744c43c();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  *extraout_x8 = unaff_s8;
  extraout_x8[1] = unaff_s9;
  extraout_x8[2] = unaff_s10;
  extraout_x8[3] = unaff_s11;
  extraout_x8[4] = unaff_s8;
  extraout_x8[5] = unaff_s9;
  extraout_x8[6] = unaff_s10;
  extraout_x8[7] = unaff_s11;
  *(undefined1 *)(extraout_x8 + 8) = 1;
  func_0x00010744bf64(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c294();
  func_0x00010744c424();
  func_0x00010744c42c();
  func_0x00010744c434();
  func_0x00010744c3c8();
  return;
}



/* Entry: 107444338; end: 10744435b;  */

void FUN_107444338(void)

{
  return;
}


