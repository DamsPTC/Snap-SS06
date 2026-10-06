/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078286e8; end: 10782871b;  */

void FUN_1078286e8(undefined4 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  func_0x000107828928(&UNK_10dea7388,&DAT_10deaacc4,&uStack_14);
  return;
}



/* Entry: 107828ae0; end: 107828bfb;  */

undefined8 * FUN_107828ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_40 [2];
  
  puVar1 = param_1;
  func_0x00010782a318();
  func_0x0001073ada2c(puVar1[0x75]);
  if (*(int *)(param_1 + 0x74) == 0) {
    func_0x00010782a404();
    func_0x00010782a3ec(alStack_40);
    if (alStack_40[0] != 0) {
      uVar2 = param_1[0x71];
      uVar3 = param_1[0x6d];
      puVar1 = (undefined8 *)0x38;
      __Znwm();
      uVar4 = *(undefined8 *)((long)param_1 + 0xc);
      puVar1[5] = *(undefined8 *)((long)param_1 + 0x14);
      puVar1[4] = uVar4;
      puVar1[6] = uVar3;
      *puVar1 = &PTR_DAT_1109e0800;
      puVar1[1] = uVar2;
      puVar1[2] = &SUB_107565e44;
      puVar1[3] = 0;
      func_0x00010782a3f4();
      func_0x00010782a40c();
      if (puVar1 != (undefined8 *)0x0) {
        func_0x00010782a2f0();
      }
    }
    func_0x00010724bcd8(alStack_40);
  }
  else {
    func_0x00010782a3fc();
    func_0x000107565e44(param_1[0x71],(long)param_1 + 0xc,param_1[0x6d]);
  }
  func_0x00010725b238(param_1 + 0x7a);
  func_0x00010724ae28(param_1 + 0x78);
  func_0x00010724b54c(param_1 + 0x75);
  func_0x00010750b930(param_1 + 0x71);
  func_0x00010750bd10(param_1 + 0x6f);
  *param_1 = &PTR_FUN_1109e0d50;
  param_1[0x25] = &PTR_FUN_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10782931c; end: 107829683;  */

/* WARNING: Possible PIC construction at 0x000107565d30: Changing call to branch */

void FUN_10782931c(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *****pppppuVar10;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******unaff_x22;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ****appppuStack_240 [5];
  undefined8 ****ppppuStack_218;
  undefined8 ****ppppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined1 auStack_200 [24];
  undefined8 ******ppppppuStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined1 auStack_1d0 [24];
  long alStack_1b8 [2];
  undefined8 ******ppppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined1 auStack_190 [16];
  undefined8 *****pppppuStack_180;
  undefined8 ******ppppppuStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 *****pppppuStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 *****pppppuStack_128;
  undefined8 ******appppppuStack_120 [2];
  undefined8 *****pppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 *****pppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 ******ppppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  pppppppuVar5 = param_1;
  pppppppuVar17 = param_2;
  func_0x00010782a3ac();
  bVar1 = *(byte *)((long)pppppppuVar5 + 0x8b);
  pppppppuVar13 = (undefined8 *******)(ulong)bVar1;
  uStack_70 = extraout_x8_00;
  func_0x00010784a94c();
  if (((uint)param_2 != (uint)bVar1) || (uVar2 = 0, *(char *)(param_1 + 0x6e) == '\x01')) {
    uVar2 = *(char *)((long)param_1 + 0x8b) == '\x01';
    if ((bool)uVar2) {
      if ((((ulong)param_1[0x6e] & 1) != 0) || (((ulong)param_1[0x22] & 1) == 0)) {
        if (*(int *)(param_1 + 0x74) == 0) {
          func_0x00010782a404();
          ppppppuVar15 = param_1[0x75];
          ppppppuVar14 = param_1[0x76];
          ppppppuStack_138 = param_1;
          pppppuStack_130 = ppppppuVar15;
          pppppuStack_128 = ppppppuVar14;
          if (ppppppuVar14 != (undefined8 ******)0x0) {
            do {
              func_0x00010782a364();
            } while (extraout_w10_00 != 0);
          }
          func_0x00010782a3ec(appppppuStack_120);
          if ((undefined8 *******)appppppuStack_120[0] != (undefined8 *******)0x0) {
            ppppppuVar18 = param_1[0x71];
            ppppuStack_108 = *(undefined8 *****)((long)param_1 + 0x14);
            pppppuStack_110 = *(undefined8 ******)((long)param_1 + 0xc);
            ppppppuVar16 = param_1[0x6d];
            pppppppuVar17 = (undefined8 *******)param_1[0x77];
            ppppppuVar19 = param_1[0x78];
            unaff_x22 = (undefined8 *******)param_1[0x79];
            pppppuStack_100 = ppppppuVar16;
            ppppppuStack_f8 = pppppppuVar17;
            pppppuStack_f0 = ppppppuVar19;
            pppppuStack_e8 = unaff_x22;
            if (unaff_x22 != (undefined8 *******)0x0) {
              do {
                func_0x00010782a364();
                ppppppuVar14 = (undefined8 ******)pppppuStack_128;
              } while (extraout_w10_01 != 0);
            }
            pppppuStack_130 = (undefined8 ******)0x0;
            pppppuStack_128 = (undefined8 ******)0x0;
            ppppppuVar6 = (undefined8 ******)0x68;
            ppppppuStack_e0 = param_1;
            pppppuStack_d8 = ppppppuVar15;
            pppppuStack_d0 = ppppppuVar14;
            __Znwm();
            ppppuStack_b8 = ppppuStack_108;
            ppppppuStack_c0 = (undefined8 ******)pppppuStack_110;
            pppppuStack_f0 = (undefined8 *****)0x0;
            pppppuStack_e8 = (undefined8 *****)0x0;
            pppppuStack_d8 = (undefined8 *****)0x0;
            pppppuStack_d0 = (undefined8 *****)0x0;
            *ppppppuVar6 = (undefined8 *****)&PTR_DAT_1109e0840;
            ppppppuVar6[1] = ppppppuVar18;
            ppppppuVar6[2] = (undefined8 *****)&SUB_107565320;
            ppppppuVar6[3] = (undefined8 *****)0x0;
            ppppppuVar6[5] = (undefined8 *****)ppppuStack_108;
            ppppppuVar6[4] = pppppuStack_110;
            ppppppuVar6[6] = ppppppuVar16;
            ppppppuVar6[7] = pppppppuVar17;
            ppppppuVar6[8] = ppppppuVar19;
            ppppppuVar6[9] = unaff_x22;
            uStack_a0 = 0;
            uStack_98 = 0;
            ppppppuVar6[10] = param_1;
            ppppppuVar6[0xb] = ppppppuVar15;
            ppppppuVar6[0xc] = ppppppuVar14;
            uStack_88 = 0;
            uStack_80 = 0;
            pppppuStack_b0 = ppppppuVar16;
            ppppppuStack_a8 = pppppppuVar17;
            ppppppuStack_90 = param_1;
            func_0x000107829f00(&ppppppuStack_c0);
            ppppppuStack_c0 = ppppppuVar6;
            func_0x000107829f00(&pppppuStack_110);
            pppppppuVar17 = &ppppppuStack_c0;
            func_0x00010782a3f4();
            ppppppuVar14 = ppppppuStack_c0;
            ppppppuStack_c0 = (undefined8 *******)0x0;
            if (ppppppuVar14 != (undefined8 ******)0x0) {
              func_0x00010782a2f0();
            }
          }
          pppppppuVar13 = &ppppppuStack_138;
          func_0x00010724bcd8(appppppuStack_120);
          pppppppuVar5 = (undefined8 *******)&pppppuStack_130;
          param_2 = (undefined8 *******)appppppuStack_120[0];
        }
        else {
          func_0x00010782a3fc();
          param_2 = (undefined8 *******)param_1[0x71];
          pppppppuVar13 = (undefined8 *******)param_1[0x6d];
          ppppppuVar14 = param_1[0x75];
          ppppppuVar15 = param_1[0x76];
          ppppppuStack_150 = param_1;
          pppppuStack_148 = ppppppuVar14;
          pppppuStack_140 = ppppppuVar15;
          if (ppppppuVar15 != (undefined8 ******)0x0) {
            do {
              func_0x00010782a364();
            } while (extraout_w10 != 0);
          }
          ppppppuStack_a8 = (undefined8 ******)0x0;
          func_0x00010782a35c();
          *pppppppuVar5 = (undefined8 ******)&PTR_DAT_1109e0910;
          pppppppuVar5[1] = param_1;
          pppppppuVar5[2] = ppppppuVar14;
          pppppppuVar5[3] = ppppppuVar15;
          pppppuStack_148 = (undefined8 ******)0x0;
          pppppuStack_140 = (undefined8 *****)0x0;
          pppppppuVar17 = (undefined8 *******)((long)param_1 + 0xc);
          param_3 = pppppppuVar13;
          ppppppuStack_a8 = pppppppuVar5;
          func_0x000107565320(param_2,pppppppuVar17,pppppppuVar13,param_1 + 0x77,&ppppppuStack_c0);
          func_0x000107567218(&ppppppuStack_c0);
          pppppppuVar5 = (undefined8 *******)&pppppuStack_148;
          unaff_x22 = &ppppppuStack_150;
        }
        func_0x00010724b54c();
        *(undefined1 *)(param_1 + 0x6e) = 0;
      }
    }
    else if (((ulong)param_1[0x22] & 1) == 0) {
      if (*(int *)(param_1 + 0x74) != 0) {
        func_0x00010782a3fc();
        pppppppuVar5 = (undefined8 *******)param_1[0x71];
        func_0x00010782a2fc(uStack_70);
        if ((bool)uVar2) {
          puVar9 = (undefined8 *)((long)param_1 + 0xc);
          ppppppuVar14 = (undefined8 ******)appppuStack_240;
          func_0x0001075696cc();
          ppppuStack_208 = (undefined8 ****)puVar9[1];
          ppppuStack_210 = (undefined8 ****)*puVar9;
          func_0x000107569994(auStack_200);
          ppppuStack_1d8 = ppppuStack_208;
          ppppuStack_1e0 = ppppuStack_210;
          ppppppuVar15 = *pppppppuVar5;
          ppppppuStack_1e8 = pppppppuVar5;
          if (ppppppuVar15 == (undefined8 ******)0x0) {
            iVar3 = (int)auStack_200;
          }
          else {
            pppppuVar10 = (undefined8 *****)ppppuStack_210;
            pppppuVar20 = (undefined8 *****)ppppuStack_208;
            func_0x000107565e1c(appppuStack_240,auStack_200);
            pppppuStack_110 = (undefined8 ******)0x0;
            func_0x000107569b9c();
            func_0x000107569694(&PTR_DAT_1109bda50);
            ppppppuVar14[5] = pppppuVar20;
            ppppppuVar14[4] = pppppuVar10;
            ppppppuVar14[6] = (undefined8 *****)ppppuStack_218;
            pppppuStack_110 = ppppppuVar14;
            func_0x000107569b48(auStack_1d0);
            func_0x000107273dcc(&ppppuStack_108,&pppppuStack_128,auStack_1d0);
            func_0x0001075698e8((*ppppppuVar15)[3]);
            func_0x0001075697ec();
            func_0x000107273f24(auStack_1d0);
            func_0x0001006393ec(&pppppuStack_128);
            func_0x000107569730();
            func_0x00010725b1d4();
            func_0x000107569680(extraout_x8);
            if ((bool)uVar2) {
              return;
            }
            ___stack_chk_fail();
            iVar3 = (int)auStack_200;
            func_0x00010725b1d4();
            func_0x000107569710();
          }
          func_0x000107569894();
          func_0x000107569974();
          if (iVar3 != 0) {
            lVar11 = *(long *)((long)param_1 + 0x24);
            func_0x0001075698d8();
            lVar4 = lVar11 + 0x90;
            func_0x000107569b74();
            if ((lVar4 != 0) &&
               (func_0x000107567364((long)param_1 + 0x2c,lVar4 + 0x20,lVar11 + 0xb8),
               *(long *)(lVar4 + 0x38) == 0)) {
              func_0x000107569b7c();
              func_0x0001075698cc();
            }
            func_0x000107569794();
          }
          func_0x00010756978c();
          return;
        }
        goto LAB_107829600;
      }
      func_0x00010782a404();
      func_0x00010782a3ec(&ppppppuStack_c0);
      param_2 = (undefined8 *******)ppppppuStack_c0;
      if ((undefined8 *******)ppppppuStack_c0 != (undefined8 *******)0x0) {
        unaff_x22 = (undefined8 *******)param_1[0x71];
        pppppppuVar13 = *(undefined8 ********)((long)param_1 + 0xc);
        pppppuVar10 = *(undefined8 ******)((long)param_1 + 0x14);
        ppppppuVar14 = (undefined8 ******)0x30;
        __Znwm();
        *ppppppuVar14 = (undefined8 *****)&PTR_DAT_1109e0990;
        ppppppuVar14[1] = unaff_x22;
        ppppppuVar14[2] = (undefined8 *****)&LAB_107565c74;
        ppppppuVar14[3] = (undefined8 *****)0x0;
        ppppppuVar14[4] = pppppppuVar13;
        ppppppuVar14[5] = pppppuVar10;
        pppppppuVar17 = (undefined8 *******)&pppppuStack_110;
        pppppuStack_110 = ppppppuVar14;
        func_0x00010782a3f4();
        pppppuVar10 = pppppuStack_110;
        pppppuStack_110 = (undefined8 ******)0x0;
        if ((undefined8 ******)pppppuVar10 != (undefined8 ******)0x0) {
          func_0x00010782a2f0();
        }
      }
      pppppppuVar5 = &ppppppuStack_c0;
      func_0x00010724bcd8();
    }
  }
  func_0x00010782a2fc(uStack_70);
  if ((bool)uVar2) {
    return;
  }
LAB_107829600:
  ___stack_chk_fail();
  pppppuVar10 = pppppuStack_110;
  pppppuStack_110 = (undefined8 ******)0x0;
  if ((undefined8 ******)pppppuVar10 != (undefined8 ******)0x0) {
    func_0x00010782a2f0();
  }
  pppppppuVar7 = &ppppppuStack_c0;
  func_0x00010724bcd8();
  func_0x00010782a34c();
  puStack_158 = &DAT_107829684;
  if (((pppppppuVar7[0x3d] != (undefined8 ******)0x0) &&
      (pppppuVar10 = pppppppuVar7[0x3d][6], pppppuVar10 != (undefined8 *****)0x0)) &&
     (ppppuVar8 = pppppuVar10[0x25], ppppuVar8 != (undefined8 ****)0x0)) {
    ppppppuStack_1a8 = param_3;
    ppppppuStack_1a0 = pppppppuVar7;
    ppppppuStack_198 = pppppppuVar17;
    pppppuStack_180 = unaff_x22;
    ppppppuStack_178 = pppppppuVar13;
    ppppppuStack_170 = param_2;
    ppppppuStack_168 = pppppppuVar5;
    puStack_160 = &stack0xfffffffffffffff0;
    if (*(char *)(param_3 + 3) == '\x01') {
      ppppppuVar15 = param_3[1];
      for (ppppppuVar14 = *param_3; ppppppuVar14 != ppppppuVar15; ppppppuVar14 = ppppppuVar14 + 7) {
        func_0x00010782a3bc();
        (*extraout_x9)(auStack_190);
        func_0x000107829878(&ppppppuStack_1a8,auStack_190,ppppppuVar14);
        func_0x00010782a384();
      }
    }
    else {
      (*(code *)(*ppppuVar8)[4])(alStack_1b8);
      plVar12 = (long *)(alStack_1b8[0] + 0x10);
      while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
        func_0x00010782a3bc();
        (*extraout_x9_00)(auStack_190);
        func_0x000107829878(&ppppppuStack_1a8,auStack_190,plVar12 + 2);
        func_0x00010782a384();
      }
      func_0x000107283194(alStack_1b8);
    }
  }
  return;
}



/* Entry: 107829acc; end: 107829b2f;  */

long FUN_107829acc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107829b08();
    lVar2 = uVar1 + 0x108;
  }
  else {
    lVar2 = param_1;
    func_0x000107829b30();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x108;
}



/* Entry: 107829e3c; end: 107829e43;  */

void FUN_107829e3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x108;
    func_0x000107269e60();
  }
  return;
}



/* Entry: 10782a05c; end: 10782a087;  */

undefined8 * FUN_10782a05c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0880;
  func_0x00010724b54c(param_1 + 2);
  return param_1;
}



/* Entry: 10782a1d0; end: 10782a1f3;  */

void FUN_10782a1d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010782a35c();
  *puVar1 = &PTR_DAT_1109e0910;
  uVar3 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar3;
  lVar2 = param_1[3];
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010782a364();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10782a91c; end: 10782a91f;  */

undefined8 * FUN_10782a91c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010782ac84();
  func_0x00010782a9b8(puVar1 + 0x6f);
  func_0x00010750c6cc(param_1 + 0x6d);
  *param_1 = &PTR_FUN_1109e0d50;
  param_1[0x25] = &PTR_FUN_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10782aab8; end: 10782aae3;  */

void FUN_10782aab8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1109e0bc0;
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar5;
  return;
}



/* Entry: 10782af10; end: 10782af97;  */

void FUN_10782af10(long *param_1,long param_2,ulong param_3)

{
  long lStack_40;
  long lStack_38;
  
  param_2 = param_2 + 0x18;
  func_0x00010786e214(param_2);
  if ((param_3 & 1) == 0) {
    func_0x00010782b638();
    param_1[1] = lStack_38;
    *param_1 = lStack_40;
  }
  else {
    func_0x00010782b638();
    func_0x00010737de18(lStack_40 + 0x18,param_2);
    *param_1 = lStack_40;
    param_1[1] = lStack_38;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  func_0x00010782b5b0(&lStack_40);
  return;
}



/* Entry: 10782b380; end: 10782b393;  */

void FUN_10782b380(void)

{
  func_0x00010782b3fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782b53c; end: 10782b59f;  */

undefined8 FUN_10782b53c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010782b618();
    } while (extraout_w10 != 0);
  }
  func_0x00010737bf70(param_1,&uStack_30,*param_3);
  func_0x00010782b628();
  return param_1;
}



/* Entry: 10782bd2c; end: 10782bd57;  */

void FUN_10782bd2c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (((*(long *)(param_2 + 0xe8) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_2 + 0xe8) + 0x30), lVar2 != 0)) &&
     (plVar1 = *(long **)(lVar2 + 0x128), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010782bd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10782c7b4; end: 10782c7ef;  */

void FUN_10782c7b4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  
  uStack_18 = 1;
  uStack_30 = *param_1;
  uStack_28 = 3;
  auStack_20[0] = param_3;
  func_0x000107832e74(param_1,param_2,auStack_20,&uStack_30);
  return;
}



/* Entry: 10782d374; end: 10782d39f;  */

undefined8 * FUN_10782d374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0d50;
  param_1[0x25] = &PTR_FUN_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10782d6f4; end: 10782df17;  */

void FUN_10782d6f4(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  undefined8 *extraout_x8_09;
  long lVar9;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong extraout_x10;
  long *plVar10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  int extraout_w11;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x23;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  byte bStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined4 uStack_190;
  long lStack_180;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  undefined4 uStack_160;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  long *plStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar11 = *(long *)(param_2 + 0x1e8);
  if (lVar11 == 0) {
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    bStack_1cc = 0;
  }
  else {
    lStack_1c8 = *(long *)(lVar11 + 0x20);
    lStack_1c0 = *(long *)(lVar11 + 0x28);
    uVar4 = (uint)lStack_1c0 & 0xff;
    in_NG = (int)(*(byte *)(param_2 + 0x1d8) - uVar4) < 0;
    in_ZR = *(byte *)(param_2 + 0x1d8) == uVar4;
    bStack_1cc = (byte)lStack_1c0 & lStack_1c8 != *(long *)(param_2 + 0x1d0);
    if (!(bool)in_ZR) {
      bStack_1cc = 1;
    }
  }
  lVar9 = *(long *)(param_2 + 0x80);
  lVar7 = *(long *)(param_2 + 0x220);
  lVar13 = *(long *)(param_2 + 0x1f0);
  plVar5 = (long *)0x150;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_1109e1258;
  lStack_110 = lVar11;
  lStack_108 = lVar13;
  if (lVar13 != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10 != 0);
  }
  uStack_120 = *(undefined8 *)(param_2 + 0x298);
  lStack_118 = *(long *)(param_2 + 0x2a0);
  if (lStack_118 != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10_00 != 0);
  }
  plStack_148 = (long *)0x0;
  lStack_150 = 0;
  lStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_130 = *(undefined4 *)(param_2 + 0x2c8);
  FUN_107831c34(&lStack_150,*(undefined8 *)(param_2 + 0x2b0));
  plVar1 = plVar5 + 3;
  plVar17 = (long *)(param_2 + 0x2b8);
  plVar14 = plVar5;
LAB_10782d7ec:
  plVar17 = (long *)*plVar17;
  if (plVar17 != (long *)0x0) {
    unaff_x23 = &lStack_138;
    func_0x00010726364c(unaff_x23,plVar17 + 2);
    plVar16 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      uVar15 = (long)plStack_148 - 1;
      if (((ulong)plStack_148 & uVar15) == 0) {
        plVar14 = (long *)(uVar15 & (ulong)unaff_x23);
        in_ZR = true;
        in_NG = false;
      }
      else {
        in_NG = (long)unaff_x23 - (long)plStack_148 < 0;
        in_ZR = unaff_x23 == plStack_148;
        plVar14 = unaff_x23;
        if (plStack_148 <= unaff_x23) {
          uVar6 = 0;
          if (plStack_148 != (long *)0x0) {
            uVar6 = (ulong)unaff_x23 / (ulong)plStack_148;
          }
          plVar14 = (long *)((long)unaff_x23 - uVar6 * (long)plStack_148);
        }
      }
      plVar12 = *(long **)(lStack_150 + (long)plVar14 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10782d890;
            plVar8 = (long *)plVar12[1];
            in_NG = (long)plVar8 - (long)unaff_x23 < 0;
            in_ZR = plVar8 == unaff_x23;
            if (!(bool)in_ZR) break;
            uVar6 = (ulong)(plVar12 + 2);
            func_0x000104c32db4(uVar6,plVar17 + 2);
            if ((uVar6 & 1) != 0) goto LAB_10782d7ec;
          }
          if (((ulong)plVar16 & uVar15) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar15);
          }
          else if (plVar16 <= plVar8) {
            uVar6 = 0;
            if (plVar16 != (long *)0x0) {
              uVar6 = (ulong)plVar8 / (ulong)plVar16;
            }
            plVar8 = (long *)((long)plVar8 - uVar6 * (long)plVar16);
          }
          in_NG = (long)plVar8 - (long)plVar14 < 0;
          in_ZR = plVar8 == plVar14;
        } while ((bool)in_ZR);
      }
    }
LAB_10782d890:
    plVar12 = (long *)0x58;
    __Znwm();
    uStack_a0 = 1;
    *plVar12 = 0;
    plVar12[1] = (long)unaff_x23;
    plStack_b0 = plVar12;
    pplStack_a8 = &plStack_140;
    func_0x000104c2fe00(plVar12 + 2,plVar17 + 2);
    lVar11 = plVar17[10];
    lVar13 = plVar17[9];
    plVar12[10] = plVar17[10];
    plVar12[9] = lVar13;
    uVar2 = in_NG;
    if (lVar11 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107833248(lStack_138);
    if (plVar16 == (long *)0x0) {
LAB_10782d8e8:
      func_0x000107832f70();
      in_NG = (long)plVar16 + -3 < 0;
      uVar2 = plVar16 == (long *)0x3;
      func_0x000107832c80();
      FUN_107831c34(&lStack_150);
      plVar16 = plStack_148;
      func_0x000107833348();
      if ((bool)uVar2) {
        in_ZR = 1;
        plVar14 = (long *)(extraout_x8 & (ulong)unaff_x23);
      }
      else {
        in_NG = (long)unaff_x23 - (long)plVar16 < 0;
        in_ZR = unaff_x23 == plVar16;
        plVar14 = unaff_x23;
        if (plVar16 <= unaff_x23) {
          uVar15 = 0;
          if (plVar16 != (long *)0x0) {
            uVar15 = (ulong)unaff_x23 / (ulong)plVar16;
          }
          plVar14 = (long *)((long)unaff_x23 - uVar15 * (long)plVar16);
        }
      }
    }
    else {
      func_0x0001078331cc();
      in_NG = 0;
      if ((bool)uVar2) goto LAB_10782d8e8;
    }
    plVar8 = *(long **)(lStack_150 + (long)plVar14 * 8);
    if (plVar8 == (long *)0x0) {
      *plVar12 = (long)plStack_140;
      *(long ***)(lStack_150 + (long)plVar14 * 8) = &plStack_140;
      plStack_140 = plVar12;
      if (*plVar12 != 0) {
        func_0x00010783328c();
        if ((bool)in_ZR) {
          plVar8 = (long *)((ulong)extraout_x9 & extraout_x10);
          in_ZR = true;
        }
        else {
          in_NG = (long)extraout_x9 - (long)plVar16 < 0;
          in_ZR = extraout_x9 == plVar16;
          plVar8 = extraout_x9;
          if (plVar16 <= extraout_x9) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)extraout_x9 / (ulong)plVar16;
            }
            plVar8 = (long *)((long)extraout_x9 - uVar15 * (long)plVar16);
          }
        }
        *(long **)(extraout_x8_00 + (long)plVar8 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar8;
      *plVar8 = (long)plVar12;
    }
    plStack_b0 = (long *)0x0;
    lStack_138 = lStack_138 + 1;
    func_0x000107831d78(&plStack_b0);
    goto LAB_10782d7ec;
  }
  plStack_178 = (long *)0x0;
  lStack_180 = 0;
  lStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_160 = *(undefined4 *)(param_2 + 0x2f0);
  func_0x000107831db0(&lStack_180,*(undefined8 *)(param_2 + 0x2d8));
  plVar17 = (long *)(param_2 + 0x2e0);
LAB_10782d9cc:
  plVar16 = plStack_178;
  plVar17 = (long *)*plVar17;
  if (plVar17 != (long *)0x0) {
    plVar12 = (long *)plVar17[2];
    if (plStack_178 != (long *)0x0) {
      func_0x000107833348();
      if ((bool)in_ZR) {
        plVar14 = (long *)(extraout_x8_01 & (ulong)plVar12);
        in_ZR = true;
      }
      else {
        in_NG = (long)plVar12 - (long)plVar16 < 0;
        in_ZR = plVar12 == plVar16;
        plVar14 = plVar12;
        if (plVar16 <= plVar12) {
          uVar15 = 0;
          if (plVar16 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar16;
          }
          plVar14 = (long *)((long)plVar12 - uVar15 * (long)plVar16);
        }
      }
      plVar8 = *(long **)(lStack_180 + (long)plVar14 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_10782da5c;
            plVar10 = (long *)plVar8[1];
            if (plVar10 != plVar12) break;
            in_NG = plVar8[2] - (long)plVar12 < 0;
            in_ZR = (long *)plVar8[2] == plVar12;
            if ((bool)in_ZR) goto LAB_10782d9cc;
          }
          if (((ulong)plVar16 & extraout_x8_01) == 0) {
            plVar10 = (long *)((ulong)plVar10 & extraout_x8_01);
          }
          else if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
          in_NG = (long)plVar10 - (long)plVar14 < 0;
          in_ZR = plVar10 == plVar14;
        } while ((bool)in_ZR);
      }
    }
LAB_10782da5c:
    func_0x0001078330fc();
    func_0x000107833074();
    uVar2 = in_NG;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107833248(lStack_168);
    if (plVar16 == (long *)0x0) {
LAB_10782da90:
      func_0x000107832f70();
      in_NG = (long)plVar16 + -3 < 0;
      uVar2 = plVar16 == (long *)0x3;
      func_0x000107832c80();
      func_0x000107831db0(&lStack_180);
      plVar16 = plStack_178;
      func_0x000107833348();
      if ((bool)uVar2) {
        in_ZR = 1;
        plVar14 = (long *)(extraout_x8_03 & (ulong)plVar12);
      }
      else {
        in_NG = (long)plVar12 - (long)plVar16 < 0;
        in_ZR = plVar12 == plVar16;
        plVar14 = plVar12;
        if (plVar16 <= plVar12) {
          uVar15 = 0;
          if (plVar16 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar16;
          }
          plVar14 = (long *)((long)plVar12 - uVar15 * (long)plVar16);
        }
      }
    }
    else {
      func_0x0001078331cc();
      in_NG = 0;
      if ((bool)uVar2) goto LAB_10782da90;
    }
    if (*(long *)(lStack_180 + (long)plVar14 * 8) == 0) {
      *unaff_x23 = (long)plStack_170;
      *(long ***)(lStack_180 + (long)plVar14 * 8) = &plStack_170;
      plStack_170 = unaff_x23;
      if (*unaff_x23 != 0) {
        func_0x00010783328c();
        if ((bool)in_ZR) {
          plVar12 = (long *)((ulong)extraout_x9_00 & extraout_x10_00);
          in_ZR = true;
        }
        else {
          in_NG = (long)extraout_x9_00 - (long)plVar16 < 0;
          in_ZR = extraout_x9_00 == plVar16;
          plVar12 = extraout_x9_00;
          if (plVar16 <= extraout_x9_00) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)extraout_x9_00 / (ulong)plVar16;
            }
            plVar12 = (long *)((long)extraout_x9_00 - uVar15 * (long)plVar16);
          }
        }
        *(long **)(extraout_x8_04 + (long)plVar12 * 8) = unaff_x23;
      }
    }
    else {
      func_0x0001078332ec();
    }
    plStack_b0 = (long *)0x0;
    lStack_168 = lStack_168 + 1;
    func_0x000107831ef4(&plStack_b0);
    goto LAB_10782d9cc;
  }
  plStack_1a8 = (long *)0x0;
  lStack_1b0 = 0;
  lStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_190 = *(undefined4 *)(param_2 + 0x318);
  func_0x000107831f2c(&lStack_1b0,*(undefined8 *)(param_2 + 0x300));
  plVar17 = (long *)(param_2 + 0x308);
LAB_10782db6c:
  do {
    plVar16 = plStack_1a8;
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      uVar2 = *(undefined1 *)(param_2 + 600);
      lStack_78 = lStack_118;
      uStack_80 = uStack_120;
      uStack_120 = 0;
      lStack_118 = 0;
      func_0x0001075185a8(&plStack_b0,&lStack_150);
      func_0x0001075185f4(auStack_d8,&lStack_180);
      func_0x000107518640(auStack_100,&lStack_1b0);
      func_0x0001075182a4(plVar1,&uStack_80,&plStack_b0,auStack_d8,auStack_100);
      func_0x000107518510(auStack_100);
      func_0x000107518478(auStack_d8);
      func_0x0001075183b4(&plStack_b0);
      func_0x00010751838c(&uStack_80);
      plVar5[3] = (long)&PTR_FUN_1109e0f28;
      plVar5[0x15] = lVar9;
      plVar5[0x16] = lVar7;
      plVar17 = plVar5 + 0x17;
      func_0x000104c2fe00(plVar17,param_2 + 0x20);
      iVar3 = (int)plVar17;
      *(undefined1 *)(plVar5 + 0x1e) = *(undefined1 *)(param_2 + 0x10);
      *(undefined2 *)((long)plVar5 + 0xf2) = 0;
      *(undefined8 *)((long)plVar5 + 0xf4) = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)((long)plVar5 + 0xfc) = *(undefined4 *)(param_2 + 0x18);
      plVar5[0x21] = lStack_108;
      plVar5[0x20] = lStack_110;
      lStack_110 = 0;
      lStack_108 = 0;
      plVar5[0x22] = lStack_1c8;
      plVar5[0x23] = lStack_1c0;
      *(byte *)(plVar5 + 0x24) = bStack_1cc;
      plVar5[0x26] = 0;
      plVar5[0x25] = 0;
      plVar5[0x28] = 0;
      plVar5[0x27] = 0;
      *(undefined1 *)(plVar5 + 0x29) = 0;
      *(undefined1 *)((long)plVar5 + 0x149) = uVar2;
      func_0x00010785f1f4();
      uVar4 = iVar3 + 0x120;
      func_0x00010724e330();
      *(bool *)((long)plVar5 + 0x14a) = ((uVar4 ^ 0xffffffff) & 0x101) == 0;
      func_0x000107518510(&lStack_1b0);
      func_0x000107518478(&lStack_180);
      func_0x0001075183b4(&lStack_150);
      func_0x00010751838c(&uStack_120);
      func_0x000107831640(&lStack_110);
      do {
        func_0x000107832d84();
      } while (extraout_w11 != 0);
      pplStack_a8 = (long **)extraout_x8_09[1];
      plStack_b0 = (long *)*extraout_x8_09;
      *(long **)(param_2 + 0x248) = plVar1;
      *(long **)(param_2 + 0x250) = plVar5;
      func_0x000107831700(&plStack_b0);
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar5;
      plStack_b0 = (long *)0x0;
      pplStack_a8 = (long **)0x0;
      func_0x0001078320b4();
      return;
    }
    plVar12 = (long *)plVar17[2];
    if (plStack_1a8 != (long *)0x0) {
      func_0x000107833348();
      if ((bool)in_ZR) {
        plVar14 = (long *)(extraout_x8_05 & (ulong)plVar12);
        in_ZR = true;
      }
      else {
        in_NG = (long)plVar12 - (long)plVar16 < 0;
        in_ZR = plVar12 == plVar16;
        plVar14 = plVar12;
        if (plVar16 <= plVar12) {
          uVar15 = 0;
          if (plVar16 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar16;
          }
          plVar14 = (long *)((long)plVar12 - uVar15 * (long)plVar16);
        }
      }
      plVar8 = *(long **)(lStack_1b0 + (long)plVar14 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_10782dbfc;
            plVar10 = (long *)plVar8[1];
            if (plVar10 != plVar12) break;
            in_NG = plVar8[2] - (long)plVar12 < 0;
            in_ZR = (long *)plVar8[2] == plVar12;
            if ((bool)in_ZR) goto LAB_10782db6c;
          }
          if (((ulong)plVar16 & extraout_x8_05) == 0) {
            plVar10 = (long *)((ulong)plVar10 & extraout_x8_05);
          }
          else if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
          in_NG = (long)plVar10 - (long)plVar14 < 0;
          in_ZR = plVar10 == plVar14;
        } while ((bool)in_ZR);
      }
    }
LAB_10782dbfc:
    func_0x0001078330fc();
    func_0x000107833074();
    uVar2 = in_NG;
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107833248(lStack_198);
    if (plVar16 == (long *)0x0) {
LAB_10782dc30:
      func_0x000107832f70();
      in_NG = (long)plVar16 + -3 < 0;
      uVar2 = plVar16 == (long *)0x3;
      func_0x000107832c80();
      func_0x000107831f2c(&lStack_1b0);
      plVar16 = plStack_1a8;
      func_0x000107833348();
      if ((bool)uVar2) {
        in_ZR = 1;
        plVar14 = (long *)(extraout_x8_07 & (ulong)plVar12);
      }
      else {
        in_NG = (long)plVar12 - (long)plVar16 < 0;
        in_ZR = plVar12 == plVar16;
        plVar14 = plVar12;
        if (plVar16 <= plVar12) {
          uVar15 = 0;
          if (plVar16 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar16;
          }
          plVar14 = (long *)((long)plVar12 - uVar15 * (long)plVar16);
        }
      }
    }
    else {
      func_0x0001078331cc();
      in_NG = 0;
      if ((bool)uVar2) goto LAB_10782dc30;
    }
    if (*(long *)(lStack_1b0 + (long)plVar14 * 8) == 0) {
      *unaff_x23 = (long)plStack_1a0;
      *(long ***)(lStack_1b0 + (long)plVar14 * 8) = &plStack_1a0;
      plStack_1a0 = unaff_x23;
      if (*unaff_x23 != 0) {
        func_0x00010783328c();
        if ((bool)in_ZR) {
          plVar12 = (long *)((ulong)extraout_x9_01 & extraout_x10_01);
          in_ZR = true;
        }
        else {
          in_NG = (long)extraout_x9_01 - (long)plVar16 < 0;
          in_ZR = extraout_x9_01 == plVar16;
          plVar12 = extraout_x9_01;
          if (plVar16 <= extraout_x9_01) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)extraout_x9_01 / (ulong)plVar16;
            }
            plVar12 = (long *)((long)extraout_x9_01 - uVar15 * (long)plVar16);
          }
        }
        *(long **)(extraout_x8_08 + (long)plVar12 * 8) = unaff_x23;
      }
    }
    else {
      func_0x0001078332ec();
    }
    plStack_b0 = (long *)0x0;
    lStack_198 = lStack_198 + 1;
    FUN_107832070(&plStack_b0);
  } while( true );
}



/* Entry: 10782ec44; end: 10782ec4b;  */

void FUN_10782ec44(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long lStack_38;
  undefined8 uStack_30;
  
  lStack_38 = *(long *)(*(long *)(param_2 + 0x110) + 0x28) + 0x20;
  func_0x000107832ee8();
  uStack_30 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010782ebcc(&lStack_38,&UNK_1078464b4,0);
  func_0x0001078333b0();
  return;
}



/* Entry: 10782f374; end: 10782f3bb;  */

void FUN_10782f374(undefined8 param_1)

{
  uint unaff_w20;
  
  func_0x0001078334c4();
  func_0x0001078331b4(param_1,PTR_DAT_1131ad578);
  func_0x00010783329c(unaff_w20 & 0xb);
  func_0x000107832e90();
  func_0x000107832ec4();
  func_0x0001078332ac();
  return;
}



/* Entry: 10782f9e0; end: 10782fa17;  */

void FUN_10782f9e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long lVar2;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + 0x1e8);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  param_1[1] = *(undefined8 *)(lVar1 + 0x38);
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107832cb4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107830094; end: 1078300cb;  */

void FUN_107830094(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x340);
  if (iVar2 == 0) {
    lVar1 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(param_1 + 0x360) = lVar1;
    iVar2 = *(int *)(param_1 + 0x340);
  }
  *(int *)(param_1 + 0x340) = iVar2 + 1;
  return;
}



/* Entry: 107830f1c; end: 107830f1f;  */

undefined8 * FUN_107830f1c(undefined8 *param_1)

{
  func_0x0001074623cc(param_1 + 0x22);
  func_0x000107831640(param_1 + 0x1d);
  func_0x000104c2f714(param_1 + 0x14);
  *param_1 = &PTR_DAT_1109b9158;
  func_0x000107518510(param_1 + 0xd);
  func_0x000107518478(param_1 + 8);
  func_0x0001075183b4(param_1 + 3);
  func_0x00010751838c(param_1 + 1);
  return param_1;
}



/* Entry: 107831028; end: 107831073;  */

void FUN_107831028(long param_1,long param_2,long param_3)

{
  while (param_2 != param_3) {
    func_0x000107831074(param_1,param_1 + 8,param_2 + 0x20);
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 10783128c; end: 107831293;  */

void FUN_10783128c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010783323c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x68) {
    func_0x00010750f290(lVar1 + -0x58);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107831438; end: 10783147b;  */

void FUN_107831438(undefined8 param_1)

{
  uint unaff_w20;
  
  func_0x0001078334c4();
  func_0x0001078331b4(param_1,PTR_DAT_1131ad588);
  func_0x00010783329c(unaff_w20 & 0x1f);
  func_0x000107832e90();
  func_0x000107832ec4();
  func_0x0001078332ac();
  return;
}



/* Entry: 10783173c; end: 10783174f;  */

void FUN_10783173c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107831744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107831960; end: 1078319b3;  */

undefined8 *
FUN_107831960(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  func_0x0001073dd510(param_1 + 3,param_4);
  param_1[5] = *param_5;
  return param_1;
}



/* Entry: 107831ae8; end: 107831afb;  */

void FUN_107831ae8(void)

{
  func_0x000107831b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107831c34; end: 107831d5f;  */

/* WARNING: Possible PIC construction at 0x000107831c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107831d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107831c90) */
/* WARNING: Removing unreachable block (ram,0x000107831c94) */
/* WARNING: Removing unreachable block (ram,0x000107831ca8) */
/* WARNING: Removing unreachable block (ram,0x000107831cb0) */
/* WARNING: Removing unreachable block (ram,0x000107831cb8) */
/* WARNING: Removing unreachable block (ram,0x000107831cc0) */
/* WARNING: Removing unreachable block (ram,0x000107831cc8) */
/* WARNING: Removing unreachable block (ram,0x000107831ce8) */
/* WARNING: Removing unreachable block (ram,0x000107831cd4) */
/* WARNING: Removing unreachable block (ram,0x000107831cdc) */
/* WARNING: Removing unreachable block (ram,0x000107831cec) */
/* WARNING: Removing unreachable block (ram,0x000107831cf4) */
/* WARNING: Removing unreachable block (ram,0x000107831d04) */
/* WARNING: Removing unreachable block (ram,0x000107831d0c) */
/* WARNING: Removing unreachable block (ram,0x000107831cfc) */
/* WARNING: Removing unreachable block (ram,0x000107831c9c) */
/* WARNING: Removing unreachable block (ram,0x000107831d50) */

void FUN_107831c34(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else {
    plVar4 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      func_0x00010783343c();
      plVar4 = plVar2;
    }
  }
  plVar5 = (long *)param_1[1];
  uVar1 = plVar5 <= plVar4;
  if (!(bool)uVar1 || plVar4 == plVar5) {
    if ((bool)uVar1) {
      return;
    }
    func_0x000107832e58();
    if (((bool)uVar1) && (((ulong)plVar5 & (long)plVar5 - 1U) == 0)) {
      func_0x000107832da8();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010783326c();
    if ((bool)uVar1) {
      return;
    }
    if (plVar4 == (long *)0x0) {
      param_2 = (long *)0x0;
      goto code_r0x000107831d60;
    }
  }
  if ((ulong)plVar4 >> 0x3d == 0) {
    func_0x0001078333c0();
    param_2 = plVar2;
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x000107831d60:
  lVar3 = *param_1;
  *param_1 = (long)param_2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107832070; end: 1078320a7;  */

void FUN_107832070(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078332cc();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010742ac74(unaff_x20 + 0x18);
    }
    func_0x000107833408();
  }
  return;
}



/* Entry: 1078321dc; end: 10783231f;  */

void FUN_1078321dc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = param_1;
  func_0x000107832320();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = param_1 + 2;
  if (plVar6 == plStack_30) {
LAB_107832274:
    if (lVar3 == 0) {
LAB_1078322a8:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1078322b0;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1078322a8;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_107832274;
LAB_1078322b0:
    if (lVar3 == 0) goto LAB_1078322e8;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_1078322e8:
  *plVar6 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  func_0x000107829ec4(&plStack_38);
  return;
}



/* Entry: 10783258c; end: 107832597;  */

void FUN_10783258c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1328;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10783278c; end: 1078327db;  */

void FUN_10783278c(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [144];
  
  func_0x0001078330a4();
  func_0x000107832850();
  func_0x000107833530();
  func_0x0001078327dc();
  *unaff_x19 = uStack_b8;
  func_0x000107832a18(auStack_b0);
  return;
}



/* Entry: 1078329ec; end: 107832a47;  */

undefined8 * FUN_1078329ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e13b8;
  func_0x000107832a18(param_1 + 4);
  return param_1;
}



/* Entry: 107833560; end: 1078336af;  */

void FUN_107833560(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  plVar1 = (long *)param_2[1];
  for (plVar4 = (long *)*param_2; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    func_0x000107842f78();
    func_0x0001078345cc(&plStack_98,plVar4[1] - *plVar4 >> 2);
    lVar2 = plVar4[1];
    for (lVar3 = *plVar4; lVar3 != lVar2; lVar3 = lVar3 + 4) {
      func_0x0001078346f8(&plStack_98,lVar3,lVar3 + 2);
    }
    func_0x000107834bc4(&plStack_98,&uStack_80,0);
    func_0x000107834800(&plStack_98);
  }
  func_0x000107842f78();
  func_0x0001078336b0(&uStack_80,1,&plStack_98,0,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (plVar4 = plStack_98; plVar4 != plStack_90; plVar4 = plVar4 + 3) {
    lVar2 = plVar4[1];
    for (lVar3 = *plVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
      func_0x000107842764();
      func_0x000107834838();
    }
  }
  func_0x0001072c6c1c(&plStack_98);
  func_0x0001078349e4(&uStack_80);
  return;
}



/* Entry: 1078340e4; end: 1078340ff;  */

undefined1  [16] FUN_1078340e4(undefined8 *param_1,short *param_2)

{
  short sVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar3 = *(double *)*param_1;
  dVar4 = *(double *)param_1[2];
  sVar1 = *param_2;
  dVar2 = ((180.0 - ((*(double *)param_1[1] + (double)(int)param_2[1]) * 360.0) / dVar4) *
          3.141592653589793) / 180.0;
  _exp(dVar2);
  _atan();
  auVar5._8_8_ = dVar2 * 114.59155902616465 + -90.0;
  auVar5._0_8_ = ((dVar3 + (double)(int)sVar1) * 360.0) / dVar4 + -180.0;
  return auVar5;
}



/* Entry: 1078346a8; end: 1078346d3;  */

long * FUN_1078346a8(long *param_1)

{
  func_0x0001078346d4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107834868; end: 10783486b;  */

void FUN_107834868(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 107834ab0; end: 107834afb;  */

void FUN_107834ab0(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107834ce4; end: 1078350c3;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_107834ce4(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  long *plVar25;
  ulong *puVar26;
  uint *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long alStack_88 [2];
  long lStack_78;
  
  puVar26 = (ulong *)*param_1;
  if ((ulong)(param_1[1] - (long)puVar26) < 0x11) {
    return false;
  }
  puVar16 = (ulong *)(param_1[1] + -8);
  uVar18 = *puVar16;
  uStack_90 = *puVar26;
  while ((int)uVar18 == (int)uStack_90 && uVar18 >> 0x20 == uStack_90 >> 0x20) {
    if (puVar16 == puVar26) {
      return false;
    }
    puVar16 = puVar16 + -1;
    uVar18 = *puVar16;
  }
  uVar15 = 0;
  uVar14 = 0;
  puVar26 = puVar26 + 1;
  uVar28 = *puVar26;
  uStack_a0 = 0;
  uVar29 = uVar28 >> 0x20;
  puVar16 = puVar16 + 1;
  plVar25 = (long *)param_2[1];
  uVar17 = uVar18 >> 0x20;
  uVar22 = uStack_90 >> 0x20;
  uVar24 = uStack_90;
  while( true ) {
    while( true ) {
      uVar19 = uVar18;
      uVar18 = uStack_90;
      plVar20 = (long *)*param_2;
      while( true ) {
        iVar23 = (int)uVar24;
        iVar21 = (int)uVar22;
        if ((int)uVar28 != iVar23 || (int)uVar29 != iVar21) break;
        uStack_98 = uVar28;
        if ((puVar26 == puVar16) ||
           (puVar26 = puVar26 + 1, puVar26 == puVar16 && plVar20 == plVar25)) goto LAB_107834f9c;
        puVar12 = puVar26;
        if (puVar26 == puVar16) {
          puVar12 = &uStack_a0;
        }
        uVar28 = *puVar12;
        uVar29 = uVar28 >> 0x20;
      }
      uStack_98 = uVar28;
      uVar29 = uVar28 >> 0x20;
      if ((long)(iVar23 - (int)uVar28) * (long)((int)uVar17 - iVar21) -
          (long)(iVar21 - (int)(uVar28 >> 0x20)) * (long)((int)uVar19 - iVar23) != 0) break;
      uStack_90 = uVar19 & 0xffffffff | uVar17 << 0x20;
      if (plVar20 != plVar25) {
        plVar25 = plVar25 + -3;
        param_2[1] = (long)plVar25;
      }
      uVar22 = uVar17;
      uVar24 = uVar19;
      if (plVar20 == plVar25) {
        while (puVar12 = puVar16 + -1,
              (int)*puVar12 == (int)uVar19 && *(int *)((long)puVar16 + -4) == (int)uVar17) {
          puVar16 = puVar12;
          if (puVar12 == puVar26 + 1) {
            return false;
          }
        }
        uVar17 = puVar16[-1] >> 0x20;
        uVar18 = puVar16[-1];
      }
      else {
        uVar18 = plVar25[-2];
        if ((int)uVar15 == (int)plVar25[-2] && (int)uVar14 == *(int *)((long)plVar25 + -0xc)) {
          uVar18 = plVar25[-3];
        }
        uVar14 = uVar18 >> 0x20;
        uVar15 = uVar18;
        uVar17 = uVar14;
      }
    }
    if (plVar20 == plVar25) {
      uStack_a0 = uStack_90;
    }
    if (plVar25 < (long *)param_2[2]) {
      param_1 = plVar25;
      func_0x000107835990(plVar25,&uStack_90,&uStack_98);
      plVar25 = plVar25 + 3;
      param_2[1] = (long)plVar25;
    }
    else {
      func_0x000107842ab4(((long)plVar25 - (long)plVar20) / 0x18);
      func_0x000107835a84();
      func_0x000100660228();
      func_0x0001078357dc(alStack_88);
      func_0x000107835990(lStack_78,&uStack_90,&uStack_98);
      lStack_78 = lStack_78 + 0x18;
      func_0x0001078357b4(param_2,alStack_88);
      plVar25 = (long *)param_2[1];
      param_1 = alStack_88;
      func_0x000107835888();
    }
    param_2[1] = (long)plVar25;
    if (puVar26 == puVar16) break;
    uStack_90 = uVar28;
    puVar26 = puVar26 + 1;
    puVar12 = puVar26;
    if ((puVar26 == puVar16) && (puVar12 = &uStack_a0, (long *)*param_2 == plVar25)) break;
    uVar14 = uVar18 >> 0x20;
    uStack_98 = *puVar12;
    uVar15 = uVar18;
    uVar17 = uVar14;
    uVar22 = uVar29;
    uVar24 = uVar28;
    uVar28 = uStack_98;
    uVar29 = uStack_98 >> 0x20;
  }
LAB_107834f9c:
  do {
    puVar27 = (uint *)*param_2;
    uVar18 = ((long)plVar25 - (long)puVar27) / 0x18;
    bVar1 = 2 < uVar18;
    if (uVar18 < 3) {
      return bVar1;
    }
    plVar20 = plVar25 + -3;
    func_0x00010784262c();
    func_0x0001078358d8();
    if ((int)param_1 == 0) {
      return bVar1;
    }
    uVar2 = *puVar27;
    plVar10 = (long *)(ulong)uVar2;
    uVar6 = puVar27[1];
    uVar3 = *(uint *)(plVar25 + -2);
    plVar11 = (long *)(ulong)uVar3;
    uVar7 = *(uint *)((long)plVar25 + -0xc);
    uVar4 = puVar27[2];
    uVar8 = puVar27[3];
    uVar5 = *(uint *)(plVar25 + -3);
    uVar9 = *(uint *)((long)plVar25 + -0x14);
    if (uVar2 == uVar3 && uVar6 == uVar7) {
      if (uVar4 != uVar5 || uVar8 != uVar9) {
        lVar13 = *plVar20;
LAB_107835050:
        *(long *)puVar27 = lVar13;
        goto LAB_107835054;
      }
LAB_107835004:
      param_2[1] = (long)plVar20;
LAB_107835098:
      param_1 = param_2;
      func_0x00010783590c(param_2,puVar27);
    }
    else {
      if (uVar4 != uVar5 || uVar8 != uVar9) {
        if (uVar4 == uVar3 && uVar8 == uVar7) {
          if (uVar2 == uVar5 && uVar6 == uVar9) goto LAB_107835004;
          func_0x000107835938(plVar11,uVar7,plVar10,uVar6,uVar5,uVar9);
          if ((int)plVar11 == 0) {
            lVar13 = *plVar20;
            goto LAB_107834ff8;
          }
          plVar25[-2] = *(long *)puVar27;
        }
        else {
          if (uVar2 != uVar5 || uVar6 != uVar9) {
            return bVar1;
          }
          func_0x000107835938(plVar10,uVar6);
          if ((int)plVar10 == 0) {
            lVar13 = plVar25[-2];
            param_1 = plVar10;
            goto LAB_107835050;
          }
          *plVar20 = *(long *)(puVar27 + 2);
        }
        puVar27 = (uint *)*param_2;
        goto LAB_107835098;
      }
      lVar13 = plVar25[-2];
      plVar11 = param_1;
LAB_107834ff8:
      *(long *)(puVar27 + 2) = lVar13;
      param_1 = plVar11;
LAB_107835054:
      param_2[1] = param_2[1] + -0x18;
    }
    plVar25 = (long *)param_2[1];
  } while( true );
}



/* Entry: 1078358b4; end: 10783590b;  */

void FUN_1078358b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107835c24; end: 107835fd3;  */

void FUN_107835c24(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  byte param_5)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  undefined8 *extraout_x8_00;
  undefined8 *puVar13;
  long extraout_x8_01;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  plVar14 = param_1 + 5;
  plVar18 = (long *)param_1[1];
  plVar1 = (long *)param_1[2];
  uVar3 = (long)plVar1 - (long)plVar18;
  lVar15 = 0;
  if (uVar3 != 0) {
    lVar15 = ((long)plVar1 - (long)plVar18 >> 3) * 0x14 + -1;
  }
  uVar10 = param_1[4];
  puVar8 = param_2;
  if (lVar15 == *plVar14 + uVar10) {
    if (uVar10 < 0x14) {
      plVar19 = param_1 + 3;
      plVar16 = (long *)*plVar19;
      plVar20 = (long *)*param_1;
      if (uVar3 < (ulong)((long)plVar16 - (long)plVar20)) {
        puVar8 = (undefined8 *)0xfa0;
        puVar11 = param_2;
        __Znwm();
        if (plVar16 == plVar1) {
          if (plVar18 == plVar20) {
            puVar13 = (undefined8 *)((long)plVar16 - (long)plVar18 >> 2);
            if (plVar1 == plVar18) {
              puVar13 = (undefined8 *)0x1;
            }
            lVar15 = (long)puVar13 * 2;
            plStack_70 = plVar19;
            func_0x000107836290();
            func_0x000107842b7c(lVar15 + 6);
            puStack_78 = puVar13 + (long)puVar11;
            puStack_90 = puVar13;
            puStack_88 = (undefined8 *)extraout_x8_01;
            puStack_80 = (undefined8 *)extraout_x8_01;
            FUN_10783626c(&puStack_90,param_1[1],param_1[2]);
            puVar13 = (undefined8 *)param_1[1];
            puVar11 = (undefined8 *)*param_1;
            puVar17 = (undefined8 *)param_1[3];
            puVar21 = (undefined8 *)param_1[2];
            param_1[1] = (long)puStack_88;
            *param_1 = (long)puStack_90;
            param_1[3] = (long)puStack_78;
            param_1[2] = (long)puStack_80;
            puStack_90 = puVar11;
            puStack_88 = puVar13;
            puStack_80 = puVar21;
            puStack_78 = puVar17;
            func_0x000107842f98();
            plVar18 = (long *)param_1[1];
          }
          plVar18[-1] = (long)puVar8;
          param_1[1] = (long)plVar18;
          func_0x0001078361f0(param_1);
        }
        else {
          *plVar1 = (long)puVar8;
          param_1[2] = (long)(plVar1 + 1);
          puVar8 = puVar11;
        }
      }
      else {
        puVar11 = (undefined8 *)((long)plVar16 - (long)plVar20 >> 2);
        if (plVar16 == plVar20) {
          puVar11 = (undefined8 *)0x1;
        }
        puVar9 = param_2;
        plStack_98 = plVar19;
        func_0x000107836290();
        puVar13 = (undefined8 *)((long)puVar11 + uVar3);
        puVar21 = puVar11 + (long)puVar9;
        uVar6 = 4000;
        puVar8 = puVar9;
        puStack_b8 = puVar11;
        puStack_b0 = puVar13;
        puStack_a8 = puVar13;
        puStack_a0 = puVar21;
        __Znwm();
        uStack_c0 = 0x14;
        puVar17 = puVar13;
        plStack_c8 = plVar14;
        if (uVar3 == (long)puVar9 * 8) {
          uStack_d0 = uVar6;
          if (plVar1 == plVar18) {
            puVar17 = (undefined8 *)0x1;
            plStack_70 = plVar19;
            func_0x000107836290();
            puStack_78 = puVar17 + (long)puVar8;
            puVar8 = puVar13;
            puStack_90 = puVar17;
            puStack_88 = puVar17;
            puStack_80 = puVar17;
            FUN_10783626c(&puStack_90,puVar13,puVar13);
            puVar7 = puStack_78;
            puVar17 = puStack_80;
            puVar12 = puStack_88;
            puVar9 = puStack_90;
            puStack_b8 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_a0 = puStack_78;
            puStack_90 = puVar11;
            puStack_88 = puVar13;
            puStack_80 = puVar13;
            puStack_78 = puVar21;
            func_0x000107842f98();
            puVar21 = puVar7;
            puVar11 = puVar9;
            puVar13 = puVar12;
          }
          else {
            func_0x000107842918((long)puVar13 - (long)puVar11);
            puVar13 = puVar13 + extraout_x8;
            puVar17 = puVar13;
            puStack_b0 = puVar13;
          }
        }
        puVar9 = puVar17 + 1;
        *puVar17 = uVar6;
        uStack_d0 = 0;
        puVar17 = (undefined8 *)param_1[2];
        puStack_a8 = puVar9;
        while (puVar12 = (undefined8 *)param_1[1], puVar17 != puVar12) {
          puVar12 = puVar13;
          if (puVar13 == puVar11) {
            if (puVar9 < puVar21) {
              lVar15 = (long)puVar9 - (long)puVar11;
              puVar7 = puVar9 + (((long)puVar21 - (long)puVar9 >> 3) + 1) / 2;
              puVar12 = (undefined8 *)((long)puVar7 - ((long)puVar9 - (long)puVar11));
              puVar9 = puVar7;
              if (lVar15 != 0) {
                _memmove(puVar12,puVar13,lVar15);
                puVar8 = puVar13;
              }
            }
            else {
              puVar12 = (undefined8 *)((long)puVar21 - (long)puVar11 >> 2);
              if ((long)puVar21 - (long)puVar11 == 0) {
                puVar12 = (undefined8 *)0x1;
              }
              puVar7 = puVar12;
              plStack_70 = plVar19;
              func_0x000107836290();
              func_0x000107842b7c((long)puVar12 * 2 + 6);
              puStack_78 = puVar7 + (long)puVar8;
              puVar8 = puVar11;
              puStack_90 = puVar7;
              puStack_88 = extraout_x8_00;
              puStack_80 = extraout_x8_00;
              FUN_10783626c(&puStack_90,puVar11,puVar9);
              puVar5 = puStack_78;
              puVar4 = puStack_80;
              puVar12 = puStack_88;
              puVar7 = puStack_90;
              puStack_90 = puVar11;
              puStack_88 = puVar13;
              puStack_80 = puVar9;
              puStack_78 = puVar21;
              func_0x000107842f98();
              puVar21 = puVar5;
              puVar11 = puVar7;
              puVar9 = puVar4;
            }
          }
          puVar17 = puVar17 + -1;
          puVar13 = puVar12 + -1;
          *puVar13 = *puVar17;
        }
        puStack_b8 = (undefined8 *)*param_1;
        *param_1 = (long)puVar11;
        param_1[1] = (long)puVar13;
        puStack_a0 = (undefined8 *)param_1[3];
        puStack_a8 = (undefined8 *)param_1[2];
        param_1[2] = (long)puVar9;
        param_1[3] = (long)puVar21;
        puStack_b0 = puVar12;
        func_0x0001078362b8(&uStack_d0);
        func_0x0001078362e0(&puStack_b8);
      }
    }
    else {
      param_1[4] = uVar10 - 0x14;
      puVar8 = (undefined8 *)*plVar18;
      param_1[1] = (long)(plVar18 + 1);
      func_0x0001078361f0(param_1);
    }
  }
  func_0x000107834ad4(param_1);
  uVar2 = *param_4;
  func_0x00010783631c(puVar8,param_2);
  func_0x00010783631c(puVar8 + 0xc,param_3);
  *(undefined4 *)(puVar8 + 0x18) = uVar2;
  *(byte *)((long)puVar8 + 0xc4) = param_5 & 1;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10783626c; end: 10783628f;  */

void FUN_10783626c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078379a4; end: 107837a37;  */

void FUN_1078379a4(void)

{
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 107838294; end: 1078382cf;  */

ulong FUN_107838294(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010783837c();
  uVar1 = param_3;
  func_0x00010783837c(param_2);
  return param_3 & 0xffffffff | uVar1 << 0x20;
}



/* Entry: 1078386d8; end: 1078387bb;  */

void FUN_1078386d8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_58 [40];
  
  func_0x0001078425f8();
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 < *(undefined4 **)(param_1 + 0x10)) {
    if (unaff_x19 == puVar3) {
      *puVar3 = *param_3;
      unaff_x20[1] = (long)(puVar3 + 1);
    }
    else {
      func_0x000107842758();
      func_0x0001078387bc();
      lVar1 = 4;
      if ((undefined4 *)unaff_x20[1] <= param_3 || param_3 < unaff_x19) {
        lVar1 = 0;
      }
      *unaff_x19 = *(undefined4 *)((long)param_3 + lVar1);
    }
  }
  else {
    plVar2 = unaff_x20;
    func_0x0001006601e8();
    func_0x000100161bec(auStack_58,plVar2,(long)unaff_x19 - *unaff_x20 >> 2,
                        (undefined8 *)(param_1 + 0x10));
    func_0x0001078387fc(auStack_58,param_3);
    func_0x0001078388c8();
    func_0x0001078426b0();
    func_0x000100161cc4();
  }
  return;
}



/* Entry: 107838afc; end: 107838b07;  */

void FUN_107838afc(void)

{
  func_0x0001078423e8();
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 1078395b8; end: 1078396e7;  */

void FUN_1078395b8(long param_1,long param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  
  if (1 < param_2) {
    uVar4 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 3 <= (long)uVar4) {
      lVar9 = (long)param_3 - param_1 >> 2;
      uVar1 = lVar9 + 1;
      piVar5 = (int *)(param_1 + uVar1 * 8);
      uVar7 = lVar9 + 2;
      if ((long)uVar7 < param_2) {
        iVar8 = piVar5[2];
        bVar3 = *piVar5 < iVar8;
        if (piVar5[1] != piVar5[3]) {
          bVar3 = piVar5[3] < piVar5[1];
        }
        piVar6 = piVar5 + 2;
        if (!bVar3) {
          piVar6 = piVar5;
          uVar7 = uVar1;
          iVar8 = *piVar5;
        }
      }
      else {
        piVar6 = piVar5;
        uVar7 = uVar1;
        iVar8 = *piVar5;
      }
      bVar3 = iVar8 < *param_3;
      if (piVar6[1] != param_3[1]) {
        bVar3 = param_3[1] < piVar6[1];
      }
      if (!bVar3) {
        uVar10 = *(undefined8 *)param_3;
        do {
          piVar5 = piVar6;
          *(undefined8 *)param_3 = *(undefined8 *)piVar5;
          if ((long)uVar4 < (long)uVar7) break;
          uVar1 = uVar7 << 1 | 1;
          piVar2 = (int *)(param_1 + uVar1 * 8);
          uVar7 = uVar7 * 2 + 2;
          if ((long)uVar7 < param_2) {
            iVar8 = piVar2[2];
            bVar3 = *piVar2 < iVar8;
            if (piVar2[1] != piVar2[3]) {
              bVar3 = piVar2[3] < piVar2[1];
            }
            piVar6 = piVar2 + 2;
            if (!bVar3) {
              piVar6 = piVar2;
              uVar7 = uVar1;
              iVar8 = *piVar2;
            }
          }
          else {
            piVar6 = piVar2;
            uVar7 = uVar1;
            iVar8 = *piVar2;
          }
          iVar11 = (int)((ulong)uVar10 >> 0x20);
          bVar3 = iVar8 < (int)uVar10;
          if (piVar6[1] != iVar11) {
            bVar3 = iVar11 < piVar6[1];
          }
          param_3 = piVar5;
        } while (!bVar3);
        *(undefined8 *)piVar5 = uVar10;
      }
    }
  }
  return;
}



/* Entry: 10783a098; end: 10783a0af;  */

void FUN_10783a098(long *param_1,long param_2)

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



/* Entry: 10783adc8; end: 10783b2df;  */

void FUN_10783adc8(long param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  undefined8 uVar18;
  
  func_0x0001078427d4();
  iVar3 = *param_2;
  iVar5 = param_2[1];
  iVar4 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar3 != iVar4 || iVar5 != iVar6) {
    for (piVar17 = *(int **)(param_3 + 0x48);
        piVar17[1] <= iVar6 && piVar17 != *(int **)(param_3 + 0x30); piVar17 = piVar17 + -2) {
    }
    if (iVar3 < iVar4) {
LAB_10783ae34:
      if (piVar17 != *(int **)(param_3 + 0x38)) {
        iVar7 = piVar17[1];
        if (iVar6 < iVar7) {
          piVar17 = piVar17 + 2;
        }
        else {
          if (iVar7 < iVar5) goto LAB_10783b084;
          lVar15 = 0;
          piVar16 = piVar17 + -2;
          for (; (piVar17 != *(int **)(param_3 + 0x38) && (piVar17[1] == iVar7));
              piVar17 = piVar17 + 2) {
            lVar15 = lVar15 + -8;
            piVar16 = piVar16 + 2;
          }
          iVar8 = param_2[1];
          uVar18 = *(undefined8 *)(param_1 + 0x18);
          uVar13 = uVar18;
          func_0x00010783b2e0(uVar18,iVar7);
          iVar1 = (int)uVar13;
          if ((int)uVar13 <= iVar3) {
            iVar1 = iVar3;
          }
          func_0x00010783b370(uVar18,iVar7);
          iVar2 = iVar4;
          if ((int)uVar18 <= iVar4) {
            iVar2 = (int)uVar18;
          }
          for (; lVar15 != 0; lVar15 = lVar15 + 8) {
            iVar9 = *piVar16;
            if (iVar9 <= iVar2) {
              if (iVar9 < iVar1) break;
              if (iVar7 != iVar8 || iVar9 != iVar3) {
                lVar12 = *(long *)(param_1 + 0x30);
                lVar14 = *(long *)(lVar12 + 0x48);
                cVar10 = *(char *)(param_1 + 0x5a);
                if (cVar10 == '\0') {
                  if (iVar9 != *(int *)(lVar14 + 8) || piVar16[1] != *(int *)(lVar14 + 0xc))
                  goto LAB_10783af2c;
                }
                else if (iVar9 != *(int *)(*(long *)(lVar14 + 0x18) + 8) ||
                         piVar16[1] != *(int *)(*(long *)(lVar14 + 0x18) + 0xc)) {
LAB_10783af2c:
                  func_0x00010783b400(lVar12,piVar16,lVar14,param_3);
                  if (cVar10 == '\0') {
                    *(long *)(*(long *)(param_1 + 0x30) + 0x48) = lVar12;
                  }
                }
              }
            }
            piVar16 = piVar16 + -2;
          }
        }
        goto LAB_10783ae34;
      }
    }
    else {
LAB_10783af5c:
      if (piVar17 != *(int **)(param_3 + 0x38)) {
        iVar7 = piVar17[1];
        if (iVar6 < iVar7) {
          piVar17 = piVar17 + 2;
        }
        else {
          if (iVar7 < iVar5) goto LAB_10783b084;
          lVar15 = 0;
          for (piVar16 = piVar17; (piVar16 != *(int **)(param_3 + 0x38) && (piVar16[1] == iVar7));
              piVar16 = piVar16 + 2) {
            lVar15 = lVar15 + 8;
          }
          iVar8 = param_2[1];
          uVar18 = *(undefined8 *)(param_1 + 0x18);
          uVar13 = uVar18;
          func_0x00010783b2e0(uVar18,iVar7);
          iVar1 = (int)uVar13;
          if ((int)uVar13 <= iVar4) {
            iVar1 = iVar4;
          }
          func_0x00010783b370(uVar18,iVar7);
          piVar11 = piVar17;
          iVar2 = iVar3;
          if ((int)uVar18 <= iVar3) {
            iVar2 = (int)uVar18;
          }
          for (; piVar17 = piVar16, lVar15 != 0; lVar15 = lVar15 + -8) {
            iVar9 = *piVar11;
            if (iVar1 <= iVar9) {
              if (iVar2 < iVar9) break;
              if (iVar7 != iVar8 || iVar9 != iVar3) {
                lVar12 = *(long *)(param_1 + 0x30);
                lVar14 = *(long *)(lVar12 + 0x48);
                cVar10 = *(char *)(param_1 + 0x5a);
                if (cVar10 == '\0') {
                  if (iVar9 != *(int *)(lVar14 + 8) || piVar11[1] != *(int *)(lVar14 + 0xc))
                  goto LAB_10783b050;
                }
                else if (iVar9 != *(int *)(*(long *)(lVar14 + 0x18) + 8) ||
                         piVar11[1] != *(int *)(*(long *)(lVar14 + 0x18) + 0xc)) {
LAB_10783b050:
                  func_0x00010783b400(lVar12,piVar11,lVar14,param_3);
                  if (cVar10 == '\0') {
                    *(long *)(*(long *)(param_1 + 0x30) + 0x48) = lVar12;
                  }
                }
              }
            }
            piVar11 = piVar11 + 2;
          }
        }
        goto LAB_10783af5c;
      }
    }
LAB_10783b084:
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
  }
  return;
}



/* Entry: 10783b908; end: 10783b937;  */

long FUN_10783b908(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
  }
  return 0;
}



/* Entry: 10783bb50; end: 10783bb6b;  */

void FUN_10783bb50(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x48);
  plVar2 = plVar1;
  do {
    *plVar2 = param_1;
    plVar2 = (long *)plVar2[3];
  } while (plVar2 != plVar1);
  return;
}



/* Entry: 10783bfcc; end: 10783bfeb;  */

void FUN_10783bfcc(void)

{
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 10783c564; end: 10783c5af;  */

void FUN_10783c564(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078429a8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10783d02c; end: 10783d8e7;  */

void FUN_10783d02c(undefined8 *****param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *****pppppuVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  long extraout_x9;
  undefined8 *puVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****extraout_x10;
  long lVar14;
  int extraout_w11;
  int extraout_w12;
  undefined8 ****ppppuVar15;
  long extraout_x15;
  undefined8 *puVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 *****pppppuVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 ***pppuStack_168;
  undefined8 *puStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  long lStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  long lStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  
  if (8 < (ulong)((long)param_1[4] - (long)param_1[3])) {
    uStack_128 = 0;
    pppuStack_130 = (undefined8 ****)0x0;
    uStack_118 = 0;
    uStack_120 = (undefined8 *)0x0;
    uStack_110 = 0x3f800000;
    ppppuVar27 = (undefined8 ****)(ulong)(uint)(float)param_1[0x15];
    pppppuVar5 = (undefined8 *****)(long)(float)param_1[0x15];
    pppppuVar25 = (undefined8 *****)&pppuStack_130;
    func_0x000107840afc();
    lVar6 = 0;
    pppuStack_168 = param_1[3] + 1;
LAB_10783d0b4:
    bVar2 = (undefined8 ****)pppuStack_168 == param_1[4];
    if (!bVar2) {
      func_0x000107842e5c();
      if (bVar2 && extraout_w11 == extraout_w12) goto LAB_10783d0f4;
      puStack_138 = (undefined8 *)(extraout_x9 + 8);
      lVar14 = 8;
      lVar7 = extraout_x8;
      goto LAB_10783d11c;
    }
    func_0x000107841588(lVar6,&pppuStack_130);
  }
  return;
LAB_10783d0f4:
  lVar6 = extraout_x8 + 1;
  pppuStack_168 = (undefined8 ***)(extraout_x15 + 8);
  if ((undefined8 ****)pppuStack_168 == extraout_x10) {
    puStack_138 = (undefined8 *)(extraout_x9 + 0x10);
    lVar14 = 0x10;
    lVar7 = lVar6;
LAB_10783d11c:
    pppuStack_168 = (undefined8 ***)(extraout_x15 + 8);
    lVar6 = 0;
    if (lVar7 != 0) {
      for (puVar11 = (undefined8 *)
                     (extraout_x9 + lVar14 + ((long)((ulong)~(uint)lVar7 << 0x20) >> 0x1d));
          puVar11 != puStack_138; puVar11 = puVar11 + 1) {
        puVar16 = puVar11;
        if (*(long *)*puVar11 != 0) {
          while (puVar16 = puVar16 + 1, puVar16 != puStack_138) {
            ppppuVar24 = (undefined8 ****)*puVar16;
            pppppuVar23 = (undefined8 *****)*ppppuVar24;
            if (pppppuVar23 != (undefined8 *****)0x0) {
              ppppuVar19 = (undefined8 ****)*puVar11;
              pppppuVar17 = (undefined8 *****)*ppppuVar19;
              if ((pppppuVar17 != pppppuVar23) &&
                 ((func_0x000107843034(), ((ulong)pppppuVar25 & 1) != 0 ||
                  (func_0x000107842ae4(), (int)pppppuVar25 != 0)))) {
                func_0x000107843034();
                pppppuVar22 = pppppuVar17;
                pppppuVar18 = pppppuVar17;
                ppppuVar20 = ppppuVar19;
                ppppuVar13 = ppppuVar24;
                pppppuVar21 = pppppuVar23;
                if ((((ulong)pppppuVar25 & 1) != 0) &&
                   (func_0x000107842ae4(), pppppuVar22 = pppppuVar23, pppppuVar18 = pppppuVar23,
                   ppppuVar20 = ppppuVar24, ppppuVar13 = ppppuVar19, pppppuVar21 = pppppuVar17,
                   ((ulong)pppppuVar25 & 1) != 0)) {
                  pppppuVar22 = pppppuVar17;
                  pppppuVar18 = (undefined8 *****)pppppuVar17[5];
                  ppppuVar20 = ppppuVar19;
                  ppppuVar13 = ppppuVar24;
                  pppppuVar21 = pppppuVar23;
                }
                ppppuStack_a0 = pppppuVar21;
                ppppuStack_98 = pppppuVar22;
                if (pppppuVar18 == (undefined8 *****)pppppuVar21[5]) {
                  lStack_a8 = 0;
                  ppppuStack_b8 = &ppppuStack_b8;
                  ppppuStack_b0 = &ppppuStack_b8;
                  func_0x000107842fa8();
                  bVar2 = false;
                  pppppuVar23 = pppppuVar5;
                  pppppuVar17 = pppppuVar25;
                  while (pppppuVar17 != pppppuVar5) {
                    if (*pppppuVar17[3] == (undefined8 ***)0x0) {
LAB_10783d22c:
                      pppppuVar25 = (undefined8 *****)&pppuStack_130;
                      func_0x0001078410e8();
                      pppppuVar23 = pppppuVar17;
                      pppppuVar17 = pppppuVar25;
                    }
                    else {
                      ppppuVar24 = pppppuVar17[4];
                      if ((undefined8 *****)*ppppuVar24 == (undefined8 *****)0x0)
                      goto LAB_10783d22c;
                      if ((undefined8 *****)*ppppuVar24 == pppppuVar22) {
                        if (*(int *)(ppppuVar20 + 1) != *(int *)(ppppuVar24 + 1) ||
                            *(int *)((long)ppppuVar20 + 0xc) != *(int *)((long)ppppuVar24 + 0xc)) {
                          pppppuVar25 = &ppppuStack_b8;
                          pppppuVar23 = pppppuVar21;
                          func_0x000107840cd4(pppppuVar25,pppppuVar21,pppppuVar17 + 3);
                          if (lStack_a8 != 0) goto LAB_10783d350;
                          bVar2 = true;
                          pppppuVar5 = pppppuVar25;
                          goto LAB_10783d27c;
                        }
                        bVar2 = true;
                      }
                      pppppuVar17 = (undefined8 *****)*pppppuVar17;
                    }
                  }
                  pppppuVar5 = pppppuVar25;
                  if (lStack_a8 == 0) {
LAB_10783d27c:
                    func_0x000107842fa8();
                    ppuStack_88 = (undefined8 **)0x0;
                    uStack_80 = 0;
                    pppppuVar25 = &ppppuStack_90;
                    ppppuStack_90 = (undefined8 ****)&ppuStack_88;
                    func_0x000107840d08(pppppuVar25,pppppuVar21);
                    for (; ((pppppuVar5 != pppppuVar23 && (pppppuVar5 != (undefined8 *****)0x0)) &&
                           ((undefined8 *****)pppppuVar5[2] == pppppuVar21));
                        pppppuVar5 = (undefined8 *****)*pppppuVar5) {
                      ppppuVar24 = pppppuVar5[4];
                      pppppuVar17 = (undefined8 *****)*ppppuVar24;
                      if (pppppuVar17 != pppppuVar21) {
                        if (((pppppuVar17 != (undefined8 *****)0x0) &&
                            (*(int *)(ppppuVar13 + 1) != *(int *)(ppppuVar24 + 1) ||
                             *(int *)((long)ppppuVar13 + 0xc) != *(int *)((long)ppppuVar24 + 0xc)))
                           && ((pppppuVar18 == pppppuVar17 ||
                               (pppppuVar18 == (undefined8 *****)pppppuVar17[5])))) {
                          pppppuVar25 = pppppuVar17;
                          func_0x00010783e790();
                          func_0x000107835a34();
                          if (((ulong)pppppuVar25 & 1) == 0) {
                            pppppuVar25 = (undefined8 *****)&pppuStack_130;
                            func_0x000107840da8(pppppuVar25,&ppppuStack_b8,pppppuVar18,pppppuVar22,
                                                pppppuVar17,&ppppuStack_90,ppppuVar13,pppppuVar5[4])
                            ;
                            if ((int)pppppuVar25 != 0) {
                              pppppuVar25 = &ppppuStack_b8;
                              FUN_107840f8c(pppppuVar25,pppppuVar21,pppppuVar5 + 3);
                              func_0x000107842fa0();
                              goto LAB_10783d348;
                            }
                          }
                        }
                      }
                    }
                    func_0x000107842fa0();
                    if (bVar2) {
LAB_10783d348:
                      if (lStack_a8 != 0) goto LAB_10783d350;
                      pppppuVar25 = (undefined8 *****)&pppuStack_130;
                      pppppuVar5 = &ppppuStack_98;
                      func_0x000107840fb8();
                      bVar2 = true;
                      for (; pppppuVar25 != pppppuVar5; pppppuVar25 = (undefined8 *****)*pppppuVar25
                          ) {
                        bVar2 = (bool)((undefined8 *****)*pppppuVar25[4] != pppppuVar21 & bVar2);
                      }
                      pppppuVar21 = pppppuVar5;
                      if (bVar2) {
                        func_0x000107842ac0();
                        pppppuVar21 = pppppuVar5;
                      }
                    }
                    else {
LAB_10783d378:
                      func_0x000107842ac0();
                      func_0x0001078412b8(&pppuStack_130,pppppuVar21,ppppuVar13,ppppuVar20);
                    }
                  }
                  else {
                    if (!bVar2) goto LAB_10783d378;
LAB_10783d350:
                    func_0x000107842c88();
                    pppppuVar5 = pppppuVar22;
                    ppppuVar24 = ppppuVar20;
                    ppppuVar19 = ppppuVar13;
                    pppppuVar23 = (undefined8 *****)ppppuStack_b0;
                    ppppuVar26 = ppppuVar27;
                    if ((int)pppppuVar25 != 0) {
                      for (; pppppuVar5 = pppppuVar22, pppppuVar23 != &ppppuStack_b8;
                          pppppuVar23 = (undefined8 *****)pppppuVar23[1]) {
                        pppppuVar5 = (undefined8 *****)pppppuVar23[2];
                        func_0x000107842c04();
                        if (((ulong)pppppuVar25 & 1) == 0) {
                          ppppuVar24 = pppppuVar23[3];
                          ppppuVar19 = pppppuVar23[4];
                          pppppuVar23[3] = ppppuVar20;
                          pppppuVar23[4] = ppppuVar13;
                          pppppuVar23[2] = pppppuVar22;
                          pppppuVar18 = pppppuVar5;
                          ppppuStack_98 = pppppuVar5;
                          break;
                        }
                      }
                    }
                    func_0x000107842c88();
                    pppuVar8 = ppppuVar24[2];
                    pppuVar12 = ppppuVar19[2];
                    ppppuVar24[2] = pppuVar12;
                    ppppuVar19[2] = pppuVar8;
                    pppuVar8[3] = ppppuVar19;
                    pppuVar12[3] = ppppuVar24;
                    for (pppppuVar23 = (undefined8 *****)ppppuStack_b0;
                        pppppuVar23 != &ppppuStack_b8;
                        pppppuVar23 = (undefined8 *****)pppppuVar23[1]) {
                      ppppuVar27 = pppppuVar23[3];
                      ppppuVar20 = pppppuVar23[4];
                      pppuVar8 = ppppuVar27[2];
                      pppuVar12 = ppppuVar20[2];
                      ppppuVar27[2] = pppuVar12;
                      ppppuVar20[2] = pppuVar8;
                      pppuVar8[3] = ppppuVar20;
                      pppuVar12[3] = ppppuVar27;
                    }
                    pppppuVar23 = param_1;
                    func_0x00010783c0dc();
                    *(undefined1 *)((long)pppppuVar5 + 0x59) = 0;
                    pppuStack_c8 = (undefined8 ****)0x0;
                    pppuStack_c0 = (undefined8 ****)0x0;
                    pppuStack_d8 = (undefined8 ****)0x0;
                    pppuStack_d0 = (undefined8 ****)0x0;
                    pppuStack_e8 = (undefined8 ****)0x0;
                    pppuStack_e0 = (undefined8 ****)0x0;
                    func_0x00010783be1c(ppppuVar24,&pppuStack_c0,&pppuStack_d8);
                    ppppuVar20 = ppppuVar26;
                    func_0x00010783be1c(ppppuVar19,&pppuStack_c8,&pppuStack_e8);
                    iVar3 = 0;
                    if ((double)ppppuVar26 < 0.0) {
                      iVar3 = (int)pppppuVar25;
                    }
                    if (iVar3 != 1) {
                      ppppuVar13 = &pppuStack_d8;
                      ppppuVar10 = &pppuStack_c0;
                      pppppuVar5[4] = (undefined8 ****)pppuStack_e0;
                      pppppuVar5[3] = (undefined8 ****)pppuStack_e8;
                      ppppuVar9 = (undefined8 ****)pppuStack_c8;
                      ppppuVar15 = ppppuVar19;
                      ppppuVar27 = ppppuVar26;
                      ppppuVar26 = ppppuVar20;
                    }
                    else {
                      ppppuVar13 = &pppuStack_e8;
                      pppppuVar5[4] = (undefined8 ****)pppuStack_d0;
                      pppppuVar5[3] = (undefined8 ****)pppuStack_d8;
                      ppppuVar10 = &pppuStack_c8;
                      ppppuVar9 = (undefined8 ****)pppuStack_c0;
                      ppppuVar15 = ppppuVar24;
                      ppppuVar24 = ppppuVar19;
                      ppppuVar27 = ppppuVar20;
                    }
                    pppppuVar5[9] = ppppuVar15;
                    pppppuVar5[2] = ppppuVar26;
                    pppppuVar5[1] = ppppuVar9;
                    *(bool *)(pppppuVar5 + 0xb) = iVar3 == 1 || (double)ppppuVar20 <= 0.0;
                    ppppuVar10 = (undefined8 ****)*ppppuVar10;
                    ppppuVar19 = (undefined8 ****)*ppppuVar13;
                    pppppuVar23[4] = (undefined8 ****)ppppuVar13[1];
                    pppppuVar23[3] = ppppuVar19;
                    pppppuVar23[9] = ppppuVar24;
                    pppppuVar23[2] = ppppuVar27;
                    pppppuVar23[1] = ppppuVar10;
                    *(bool *)(pppppuVar23 + 0xb) = (double)ppppuVar27 <= 0.0;
                    FUN_10783bb50(pppppuVar5);
                    pppppuVar17 = pppppuVar23;
                    FUN_10783bb50();
                    pppppuVar5[10] = (undefined8 ****)0x0;
                    for (pppppuVar21 = (undefined8 *****)ppppuStack_b0; iVar3 = (int)pppppuVar17,
                        pppppuVar21 != &ppppuStack_b8;
                        pppppuVar21 = (undefined8 *****)pppppuVar21[1]) {
                      ppppuVar24 = pppppuVar21[2];
                      ppppuVar24[10] = (undefined8 ***)0x0;
                      pppppuVar17 = pppppuVar5;
                      if (((ulong)pppppuVar25 & 1) == 0) {
                        pppppuVar17 = (undefined8 *****)pppppuVar5[5];
                      }
                      func_0x00010783bacc(pppppuVar17,ppppuVar24,param_1);
                    }
                    if (((ulong)pppppuVar25 & 1) == 0) {
                      func_0x000107842c04();
                      iVar4 = iVar3;
                      func_0x000107842c88();
                      if (iVar3 != iVar4) {
                        func_0x000107842698();
                        __ZNSt13runtime_errorC1EPKc();
                        func_0x0001078421d4();
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10783d864);
                        (*pcVar1)();
                      }
                      pppppuVar25 = param_1;
                      if (pppppuVar5[5] != (undefined8 ****)0x0) {
                        pppppuVar25 = (undefined8 *****)(pppppuVar5[5] + 6);
                      }
                      pppppuVar17 = pppppuVar23;
                      func_0x00010783beb4(pppppuVar23,pppppuVar25);
                      pppppuVar23[5] = pppppuVar5[5];
                      ppppuVar19 = pppppuVar5[7];
                      for (ppppuVar24 = pppppuVar5[6]; ppppuVar24 != ppppuVar19;
                          ppppuVar24 = ppppuVar24 + 1) {
                        if (*ppppuVar24 != (undefined8 ***)0x0) {
                          func_0x000107842a84();
                          func_0x00010783fd3c();
                          if ((int)pppppuVar17 != 0) {
                            func_0x000107842a84();
                            func_0x00010783fff0();
                          }
                        }
                      }
                    }
                    else {
                      func_0x00010783fb9c(pppppuVar23,pppppuVar5,param_1);
                      ppppuVar19 = pppppuVar18[7];
                      for (ppppuVar24 = pppppuVar18[6]; ppppuVar24 != ppppuVar19;
                          ppppuVar24 = ppppuVar24 + 1) {
                        if (*ppppuVar24 != (undefined8 ***)0x0) {
                          func_0x000107842a84();
                          func_0x00010783fd3c();
                          if ((int)pppppuVar23 != 0) {
                            func_0x000107842a84();
                            func_0x00010783fff0();
                          }
                        }
                      }
                    }
                    ppppuStack_100 = &ppppuStack_100;
                    lStack_f0 = 0;
                    ppppuStack_f8 = ppppuStack_100;
                    for (pppppuVar25 = (undefined8 *****)ppppuStack_b0;
                        pppppuVar23 = (undefined8 *****)&pppuStack_130,
                        pppppuVar25 != &ppppuStack_b8;
                        pppppuVar25 = (undefined8 *****)pppppuVar25[1]) {
                      pppppuVar17 = pppppuVar25 + 2;
                      func_0x000107840fb8();
                      pppppuVar21 = pppppuVar23;
                      if (pppppuVar23 != pppppuVar17) {
                        for (; pppppuVar21 != pppppuVar17;
                            pppppuVar21 = (undefined8 *****)*pppppuVar21) {
                          if (((*pppppuVar21[3] != (undefined8 ***)0x0) &&
                              (*pppppuVar21[4] != (undefined8 ***)0x0 &&
                               *pppppuVar21[3] != *pppppuVar21[4])) &&
                             ((func_0x000107842c04(), ((ulong)pppppuVar23 & 1) != 0 ||
                              (func_0x000107842ae4(), (int)pppppuVar23 != 0)))) {
                            func_0x000107842b94();
                          }
                        }
                        ppppuVar24 = &pppuStack_130;
                        func_0x000107840ffc(ppppuVar24,pppppuVar25 + 2);
                        if (ppppuVar24 != (undefined8 ****)0x0) {
                          do {
                            ppppuVar24 = (undefined8 ****)*ppppuVar24;
                            func_0x0001078410e8(&pppuStack_130);
                            if (ppppuVar24 == (undefined8 ****)0x0) break;
                          } while ((undefined8 ****)ppppuVar24[2] == pppppuVar25[2]);
                        }
                      }
                    }
                    pppppuVar17 = &ppppuStack_98;
                    func_0x000107840fb8();
                    pppppuVar21 = pppppuVar17;
                    pppppuVar25 = pppppuVar23;
                    while (pppppuVar25 != pppppuVar17) {
                      pppppuVar22 = (undefined8 *****)*pppppuVar25[3];
                      if ((pppppuVar22 == (undefined8 *****)0x0) ||
                         ((undefined8 *****)*pppppuVar25[4] == (undefined8 *****)0x0 ||
                          pppppuVar22 == (undefined8 *****)*pppppuVar25[4])) {
LAB_10783d6e4:
                        pppppuVar23 = (undefined8 *****)&pppuStack_130;
                        func_0x0001078410e8();
                        pppppuVar21 = pppppuVar25;
                        pppppuVar25 = pppppuVar23;
                      }
                      else {
                        func_0x000107842c04();
                        if (pppppuVar22 != pppppuVar5) {
                          if ((((ulong)pppppuVar23 & 1) != 0) ||
                             (func_0x000107842ae4(), (int)pppppuVar23 != 0)) {
                            func_0x000107842b94();
                          }
                          goto LAB_10783d6e4;
                        }
                        if ((((ulong)pppppuVar23 & 1) == 0) &&
                           (func_0x000107842ae4(), (int)pppppuVar23 == 0)) goto LAB_10783d6e4;
                        pppppuVar25 = (undefined8 *****)*pppppuVar25;
                      }
                    }
                    pppppuVar25 = (undefined8 *****)ppppuStack_f8;
                    if (lStack_f0 != 0) {
                      for (; pppppuVar25 != &ppppuStack_100;
                          pppppuVar25 = (undefined8 *****)pppppuVar25[1]) {
                        func_0x000107842ca8();
                        uStack_80 = 1;
                        ppppuStack_90 = pppppuVar23;
                        ppuStack_88 = (undefined8 **)&uStack_120;
                        *pppppuVar23 = (undefined8 ****)0x0;
                        pppppuVar23[1] = (undefined8 ****)0x0;
                        ppppuVar24 = pppppuVar25[2];
                        pppppuVar23[2] = ppppuVar24;
                        ppppuVar27 = pppppuVar25[3];
                        pppppuVar23[4] = pppppuVar25[4];
                        pppppuVar23[3] = ppppuVar27;
                        func_0x0001078410c0();
                        pppppuVar23[1] = ppppuVar24;
                        pppppuVar21 = pppppuVar23;
                        func_0x00010784132c(&pppuStack_130);
                        ppppuStack_90 = (undefined8 ****)0x0;
                        pppppuVar23 = &ppppuStack_90;
                        func_0x000107841230();
                      }
                    }
                    func_0x000107841530(&ppppuStack_100);
                  }
                  pppppuVar25 = &ppppuStack_b8;
                  func_0x000107841530();
                  pppppuVar5 = pppppuVar21;
                }
              }
            }
          }
        }
      }
      lVar6 = 0;
    }
  }
  goto LAB_10783d0b4;
}



/* Entry: 10783e134; end: 10783e16b;  */

void FUN_10783e134(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10783e7c4; end: 10783e8ab;  */

void FUN_10783e7c4(long *param_1,long param_2)

{
  undefined1 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010783ed28(param_1,*(undefined8 *)(param_2 + 0xa8));
  FUN_10783e134(param_2 + 0x80);
  func_0x000107842c90();
  param_2 = param_2 + 0x80;
  func_0x00010783c48c();
  while (uVar1 = unaff_x21 == param_2, !(bool)uVar1) {
    func_0x00010783ed7c(param_1,unaff_x21);
    func_0x0001078428d4();
    if ((bool)uVar1) {
      unaff_x20 = unaff_x20 + 1;
      unaff_x21 = *unaff_x20;
    }
  }
  lVar2 = param_1[1] - *param_1 >> 3;
  uStack_50 = 0;
  uStack_48 = 0;
  if (lVar2 < 0x81) {
    func_0x000107842e88();
  }
  else {
    func_0x00010783ede0(auStack_60,lVar2);
    func_0x00010783ee20(&uStack_50,auStack_60);
    FUN_10783efbc(auStack_60);
  }
  func_0x000107842758();
  func_0x00010783ee50();
  FUN_10783efbc(&uStack_50);
  return;
}



/* Entry: 10783efbc; end: 10783efdb;  */

void FUN_10783efbc(void)

{
  func_0x000107842f30();
  func_0x00010783efa4();
  return;
}



/* Entry: 10783fb64; end: 10783fb87;  */

void FUN_10783fb64(void)

{
  func_0x000107842734();
  func_0x00010783fb88();
  return;
}



/* Entry: 107840078; end: 1078401d3;  */

bool FUN_107840078(double param_1,double param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar6 = *(int *)(param_3 + 8);
  iVar7 = *(int *)(param_3 + 0xc);
  bVar2 = true;
  bVar1 = true;
  uVar5 = param_3;
  uVar8 = param_3;
  do {
    dVar11 = (double)iVar6;
    dVar9 = (double)iVar7;
    uVar8 = *(ulong *)(uVar8 + 0x10);
    iVar6 = *(int *)(uVar8 + 8);
    iVar7 = *(int *)(uVar8 + 0xc);
    dVar12 = (double)iVar6;
    dVar10 = (double)iVar7;
    func_0x000107835a3c(dVar10,param_2);
    if ((int)uVar5 != 0) {
      func_0x000107835a3c(dVar12,param_1);
      if ((uVar5 & 1) != 0) {
        return true;
      }
      func_0x000107835a3c(dVar9,param_2);
      if (((int)uVar5 != 0) && (param_1 <= dVar11 != param_1 < dVar12)) {
        return true;
      }
    }
    bVar3 = bVar1;
    bVar4 = bVar2;
    if (dVar9 < param_2 == param_2 <= dVar10) {
      func_0x00010783be88(dVar11,param_1);
      if ((int)uVar5 == 0) {
        if (dVar12 > param_1) goto LAB_107840154;
      }
      else if (dVar12 <= param_1) {
LAB_107840154:
        dVar11 = -((dVar9 - param_2) * (dVar12 - param_1)) + (dVar10 - param_2) * (dVar11 - param_1)
        ;
        func_0x000107835a34(dVar11);
        if ((uVar5 & 1) != 0) {
          return true;
        }
        bVar3 = !bVar2;
        bVar4 = !bVar2;
        if (dVar10 <= dVar9 == 0.0 < dVar11) {
          bVar3 = bVar1;
          bVar4 = bVar2;
        }
      }
      else {
        bVar3 = !bVar1;
        bVar4 = !bVar1;
      }
    }
    bVar2 = bVar4;
    bVar1 = bVar3;
    if (param_3 == uVar8) {
      return bVar1;
    }
  } while( true );
}



/* Entry: 1078407c8; end: 10784080f;  */

void FUN_1078407c8(long param_1,long *param_2)

{
  if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(*param_2 + 0x48) != 0)) {
    func_0x00010783e790();
    func_0x0001078428bc();
    func_0x000107842d9c();
  }
  return;
}



/* Entry: 107840f8c; end: 107840ffb;  */

void FUN_107840f8c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  func_0x000107842c30();
  plVar1 = *(long **)(unaff_x19 + 8);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  *param_1 = unaff_x19;
  param_1[1] = (long)plVar1;
  *plVar1 = (long)param_1;
  *(long **)(unaff_x19 + 8) = param_1;
  *(long *)(unaff_x19 + 0x10) = lVar2 + 1;
  return;
}



/* Entry: 107841720; end: 10784193b;  */

void FUN_107841720(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  ulong uStack_40;
  
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar3 = param_2;
  func_0x00010783e1a8(param_2);
  plVar2 = &lStack_70;
  func_0x000104c33d24(plVar2,lVar3 + 1);
  lVar4 = *(long *)(param_2 + 0x48);
  lVar3 = lVar4;
  if ((param_3 & 1) == 0) {
    do {
      lStack_58 = CONCAT62(lStack_58._2_6_,(short)*(undefined4 *)(lVar3 + 8));
      func_0x000107842cb0();
      plVar1 = (long *)(lVar3 + 0x18);
      lVar3 = *plVar1;
    } while (*plVar1 != lVar4);
  }
  else {
    do {
      lStack_58 = CONCAT62(lStack_58._2_6_,(short)*(undefined4 *)(lVar3 + 8));
      func_0x000107842cb0();
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != lVar4);
  }
  if (uStack_68 < uStack_60) {
    func_0x000107843118();
  }
  else {
    plVar2 = &lStack_70;
    func_0x000104c33fb8(plVar2,((long)(uStack_68 - lStack_70) >> 2) + 1);
    func_0x000104c33da8(&lStack_58,plVar2,(long)(uStack_68 - lStack_70) >> 2,&uStack_60);
    func_0x000107843118(lStack_48);
    lVar3 = lStack_50 - (uStack_68 - lStack_70);
    lStack_48 = extraout_x8;
    _memcpy(lVar3);
    uVar5 = uStack_60;
    uStack_60 = uStack_40;
    uStack_68 = lStack_48;
    lStack_48 = lStack_70;
    uStack_40 = uVar5;
    lStack_58 = lStack_70;
    lStack_50 = lStack_70;
    plVar2 = &lStack_58;
    lStack_70 = lVar3;
    func_0x000104c33e24(plVar2);
  }
  uVar5 = param_1[1];
  if (uVar5 < (ulong)param_1[2]) {
    func_0x000107297530(uVar5,&lStack_70);
    lVar3 = uVar5 + 0x18;
    param_1[1] = lVar3;
  }
  else {
    func_0x000107842ab4((long)(uVar5 - *param_1) / 0x18);
    func_0x0001072c7f00();
    func_0x0001072c7d78(&lStack_58,plVar2,(param_1[1] - *param_1) / 0x18,param_1 + 2);
    func_0x000107297530(lStack_48,&lStack_70);
    lStack_48 = lStack_48 + 0x18;
    func_0x0001072c7d50(param_1,&lStack_58);
    lVar3 = param_1[1];
    func_0x0001072c7e20(&lStack_58);
  }
  param_1[1] = lVar3;
  func_0x000104c336c8(&lStack_70);
  return;
}



/* Entry: 107841b20; end: 107841b9f;  */

void FUN_107841b20(long param_1)

{
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (func_0x000107842940(), (bool)in_CY) {
    func_0x000107843024();
    func_0x000107842ddc();
  }
  if (extraout_x9 == 1) {
    uVar1 = 0x40;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar1 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 107841ca0; end: 107841cf7;  */

void FUN_107841ca0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107841cd8(param_4);
  }
  func_0x000107842be0();
  return;
}



/* Entry: 107841f4c; end: 107841f4f;  */

void FUN_107841f4c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 107843590; end: 107843633;  */

long FUN_107843590(long param_1)

{
  func_0x00010750bcd8(param_1 + 0x238);
  func_0x0001073e0028(param_1 + 0x228);
  func_0x0001072bb790(param_1 + 0x200);
  func_0x000107473b50(param_1 + 0x1d8);
  func_0x000107473b50(param_1 + 0x1b0);
  FUN_1078108a4(param_1 + 0x198);
  func_0x0001074701f4(param_1 + 0x170);
  func_0x0001074701f4(param_1 + 0x148);
  func_0x000107810050(param_1 + 0x130);
  func_0x000107846d6c(param_1 + 0x118);
  func_0x000107846e1c(param_1 + 0x108);
  func_0x000107846e3c(param_1 + 0xe8);
  func_0x000107846e5c(param_1 + 0xa0);
  func_0x00010784746c(param_1 + 0x98);
  func_0x000104c2f714(param_1 + 0x40);
  func_0x00010724ae28(param_1 + 0x20);
  func_0x00010724ae28(param_1 + 8);
  return param_1;
}



/* Entry: 107845274; end: 107845313;  */

void FUN_107845274(long param_1,undefined1 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  *(undefined1 *)(param_1 + 0x2b8) = param_2;
  if (*(int *)(param_1 + 0xc0) == 1) {
    *(undefined4 *)(param_1 + 0xc0) = 3;
  }
  else if ((*(int *)(param_1 + 0xc0) == 0) && (*(long *)(param_1 + 0x98) == 0)) {
    func_0x000107847ed8();
    func_0x000107847e4c();
  }
  return;
}



/* Entry: 107846cc0; end: 107846d6b;  */

void FUN_107846cc0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar7 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  lVar4 = param_2[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return;
}



/* Entry: 107846eec; end: 107846f2b;  */

long * FUN_107846eec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001074f4f04(lVar1 + 0x18);
    }
    func_0x000107847f40();
  }
  return param_1;
}



/* Entry: 1078470a8; end: 1078470db;  */

long FUN_1078470a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010784814c(param_2,param_1,&PTR_DAT_1109e14e8);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107847490; end: 1078474a7;  */

void FUN_107847490(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078474c4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107847628; end: 10784764f;  */

void FUN_107847628(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010784764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 107847858; end: 10784785b;  */

undefined8 * FUN_107847858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1648;
  func_0x0001074701f4(param_1 + 4);
  return param_1;
}



/* Entry: 10784797c; end: 10784798b;  */

void FUN_10784797c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107848014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 107847a44; end: 107847a9b;  */

long * FUN_107847a44(long param_1)

{
  long *plVar1;
  
  func_0x0001074701f4(param_1 + 400);
  func_0x0001073ebb78(param_1 + 0x178);
  func_0x0001073ebb78(param_1 + 0x160);
  func_0x0001073ebb78(param_1 + 0x148);
  func_0x000107847174(param_1 + 0x78);
  func_0x0001078311e0(param_1 + 0x58);
  func_0x0001073ad47c(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107846e98(plVar1);
    __ZdlPv(*plVar1 + -8);
  }
  return plVar1;
}



/* Entry: 107847b7c; end: 107847b93;  */

void FUN_107847b7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078486b8; end: 1078486cb;  */

void FUN_1078486b8(void)

{
  func_0x00010784866c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107848b8c; end: 107848b9f;  */

void FUN_107848b8c(void)

{
  func_0x000104c03f28(&DAT_10f62a4d8);
  return;
}



/* Entry: 1078490d4; end: 1078490db;  */

void FUN_1078490d4(void)

{
  return;
}



/* Entry: 1078493e4; end: 1078493fb;  */

void FUN_1078493e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107849418(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078494d4; end: 10784954f;  */

void FUN_1078494d4(void)

{
  func_0x000107849578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849620; end: 107849633;  */

void FUN_107849620(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849bec; end: 107849cc3;  */

void FUN_107849bec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107849f80();
  if (lStack_70 != 0) {
    uVar4 = *unaff_x22;
    uVar2 = *param_3;
    uVar3 = *param_2;
    *param_2 = 0;
    puVar1 = (undefined8 *)0x30;
    uStack_60 = uVar3;
    uStack_58 = uVar2;
    __Znwm();
    uStack_60 = 0;
    *puVar1 = &PTR_DAT_1109e1bf8;
    puVar1[1] = uVar4;
    puVar1[2] = &UNK_107848780;
    puVar1[3] = 0;
    uStack_50 = 0;
    puVar1[4] = uVar3;
    puVar1[5] = uVar2;
    uStack_48 = uVar2;
    func_0x000107849df0(&uStack_50);
    puVar1 = &uStack_60;
    func_0x000107849df0();
    func_0x000107849fe4();
    func_0x00010784a018();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000107849f1c();
    }
  }
  func_0x000107849fb0();
  return;
}



/* Entry: 107849e84; end: 107849eaf;  */

undefined8 * FUN_107849e84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1bf8;
  func_0x000107849df0(param_1 + 4);
  return param_1;
}



/* Entry: 10784a194; end: 10784a2c3;  */

void FUN_10784a194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte *param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong *puStack_3a0;
  undefined8 *puStack_398;
  undefined1 **ppuStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  char cStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [208];
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [64];
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010784a844();
  uStack_38 = extraout_x8;
  func_0x00010028b26c(param_1,&PTR_DAT_1109e1cb0);
  uStack_64 = NEON_ucvtf((uint)*param_5);
  func_0x0001072f8f08(&uStack_60,&uStack_64,1);
  *(undefined8 *)(param_1 + 0x28) = uStack_58;
  *(undefined8 *)(param_1 + 0x20) = uStack_60;
  *(undefined8 *)(param_1 + 0x30) = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  func_0x00010786ea9c(auStack_a8,param_5);
  func_0x00010739d7bc(auStack_a8);
  uStack_40 = param_3;
  func_0x00010740eff4(&uStack_80,auStack_48,1);
  *(undefined8 *)(param_1 + 0x48) = uStack_78;
  *(undefined8 *)(param_1 + 0x40) = uStack_80;
  *(undefined8 *)(param_1 + 0x50) = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  func_0x00010729807c(param_1 + 0x60,param_4);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  func_0x00010725aef4(&uStack_80);
  puVar4 = &uStack_60;
  func_0x0001056d1ce4();
  func_0x00010784a830(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001001148fc(param_1);
  puVar5 = puVar4;
  __Unwind_Resume();
  uStack_e0 = 1;
  uStack_d8 = 1;
  puStack_b8 = &DAT_10784a2c4;
  puVar6 = puVar5;
  puStack_d0 = puVar4;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010784a844();
  uStack_1a8 = puVar6[0xd];
  uStack_1b0 = puVar6[0xc];
  uStack_e8 = extraout_x8_00;
  func_0x00010740eff4(&uStack_300,&uStack_1b0,1);
  uVar8 = NEON_ucvtf((uint)*(byte *)(puVar5 + 10));
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar8);
  func_0x0001072f8f08(&uStack_320,&uStack_1b0,1);
  plVar7 = (long *)puVar5[1];
  func_0x00010724cbe8(auStack_2a0,param_4);
  func_0x00010028b26c(&uStack_340,&PTR_DAT_1109e1cb0);
  uStack_358 = uStack_318;
  uStack_360 = uStack_320;
  uStack_350 = uStack_310;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_320 = 0;
  uStack_348 = 1;
  uStack_378 = uStack_2f8;
  uStack_380 = uStack_300;
  uStack_370 = uStack_2f0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_368 = 1;
  func_0x00010729d1b0(auStack_2e0,puVar5 + 3);
  func_0x000105302f48(auStack_108,auStack_2a0);
  uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
  uVar3 = cStack_328 == '\x01';
  if ((bool)uVar3) {
    uStack_1a8 = uStack_338;
    uStack_1b0 = uStack_340;
    uStack_1a0 = uStack_330;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_340 = 0;
  }
  uStack_198 = uVar3;
  func_0x000107273e7c(auStack_190,&uStack_360);
  func_0x000107273ebc(auStack_170,&uStack_380);
  func_0x0001072649c8(auStack_150,auStack_2e0);
  uStack_10c = 0;
  uStack_110 = 0;
  func_0x000107273dcc(auStack_280,auStack_108,&uStack_1b0);
  func_0x000107273f24(&uStack_1b0);
  func_0x0001006393ec(auStack_108);
  (**(code **)(*plVar7 + 0x18))(plVar7,auStack_280);
  func_0x000107273efc(auStack_280);
  func_0x00010724b3d8(auStack_2e0);
  func_0x000107273f5c(&uStack_380);
  func_0x000107273f7c(&uStack_360);
  func_0x0001001148fc(&uStack_340);
  func_0x0001006393ec(auStack_2a0);
  func_0x0001056d1ce4(&uStack_320);
  puVar4 = &uStack_300;
  func_0x00010725aef4();
  func_0x00010784a830(uStack_e8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_280);
  func_0x00010724b3d8(auStack_2e0);
  func_0x000107273f5c(&uStack_380);
  func_0x000107273f7c(&uStack_360);
  func_0x0001001148fc(&uStack_340);
  func_0x0001006393ec(auStack_2a0);
  func_0x0001056d1ce4(&uStack_320);
  puVar5 = &uStack_300;
  func_0x00010725aef4();
  func_0x00010784a854();
  puStack_388 = &DAT_10784a4f0;
  uStack_3a8 = puVar5[0xf];
  uStack_3b0 = puVar5[0xe];
  if (puVar5[0xf] != 0) {
    plVar7 = (long *)(puVar5[0xf] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_3a0 = &uStack_1b0;
  puStack_398 = puVar4;
  ppuStack_390 = &puStack_c0;
  func_0x000107314188(extraout_x8_01,&uStack_3b0,puVar5[0x10]);
  func_0x00010731486c();
  return;
}



/* Entry: 10784a620; end: 10784a6b7;  */

/* WARNING: Possible PIC construction at 0x00010784a650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784a654) */
/* WARNING: Removing unreachable block (ram,0x00010784a69c) */
/* WARNING: Removing unreachable block (ram,0x00010784a6b4) */
/* WARNING: Removing unreachable block (ram,0x00010784a688) */

undefined1 * FUN_10784a620(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x00010784a844();
  uStack_48 = 1;
  func_0x00010784a6e0();
  return auStack_50;
}



/* Entry: 10784a7e8; end: 10784a807;  */

void FUN_10784a7e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1cf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784ab9c; end: 10784abab;  */

void FUN_10784ab9c(void)

{
  return;
}



/* Entry: 10784afc8; end: 10784afef;  */

undefined8 FUN_10784afc8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010784b088(&uStack_18);
  return uStack_18;
}



/* Entry: 10784b274; end: 10784b2bb;  */

ulong FUN_10784b274(long param_1)

{
  ulong uVar1;
  short *unaff_x19;
  
  func_0x00010784b338();
  uVar1 = param_1 + 0x9e3779b97f4a7c15;
  return uVar1 * 0x1000 + (uVar1 >> 4) + (long)*unaff_x19 + -0x61c8864680b583eb ^ uVar1;
}



/* Entry: 10784b550; end: 10784b6b3;  */

void FUN_10784b550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5,undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar8 = param_4;
  plVar7 = param_5;
  func_0x00010784d84c();
  plVar10 = (long *)(lVar8 + 0x10);
  lStack_c0 = *plVar10 + 0xe0;
  uStack_b8 = 1;
  uStack_58 = extraout_x8;
  func_0x00010724e404();
  lVar8 = *plVar10;
  uVar4 = *(char *)(lVar8 + 0xd8) == '\x01';
  if ((bool)uVar4) {
    func_0x00010786ea9c(auStack_b0,param_6);
    func_0x00010739d7bc(auStack_b0);
    func_0x000104c2fe00(auStack_b0,param_5);
    uStack_78 = *param_6;
    uStack_70 = *(undefined4 *)(param_6 + 1);
    plVar7 = plVar10;
    uStack_68 = param_2;
    uStack_60 = param_3;
    func_0x00010784c164(&uStack_e0,auStack_b0,plVar10,param_4,*(undefined8 *)(param_4 + 8));
    uVar3 = uStack_d8;
    uVar9 = uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    param_1[1] = uVar3;
    *param_1 = uVar9;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010724b8b8(&uStack_d0);
    func_0x00010784c378(&uStack_e0);
    func_0x000104c2f714(auStack_b0);
  }
  else {
    uVar9 = *(undefined8 *)(lVar8 + 0x238);
    lVar8 = *(long *)(lVar8 + 0x240);
    if (lVar8 != 0) {
      plVar5 = (long *)(lVar8 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = uVar9;
    param_1[1] = lVar8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x00010724b8b8(&uStack_f0);
  }
  plVar5 = &lStack_c0;
  func_0x00010724e49c();
  func_0x00010784d810(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_b0);
  plVar6 = &lStack_c0;
  func_0x00010724e49c();
  func_0x00010784d874();
  puStack_f8 = &UNK_10784b6b4;
  puStack_120 = param_6;
  plStack_118 = plVar10;
  lStack_110 = param_4;
  plStack_108 = plVar5;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010784d97c();
  lStack_130 = plVar6[2] + 0xe0;
  uStack_128 = 1;
  func_0x000107279a5c();
  lVar8 = plVar6[2];
  func_0x00010784b750(lVar8,plVar7);
  if ((int)lVar8 != 0) {
    func_0x00010784bd54(plVar6[2],plVar7);
    *(undefined1 *)(plVar6[2] + 0x260) = 1;
  }
  func_0x000107279ee0(&lStack_130);
  func_0x00010784d8cc();
  return;
}



/* Entry: 10784b978; end: 10784bd43;  */

void FUN_10784b978(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined8 *puStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_220 [32];
  long alStack_200 [10];
  undefined1 auStack_1b0 [128];
  undefined1 auStack_130 [32];
  int iStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e8 [7];
  undefined4 auStack_b0 [2];
  ulong uStack_a8;
  undefined8 uStack_70;
  
  lVar8 = param_1;
  func_0x00010784d84c();
  lVar18 = *(long *)(lVar8 + 0x70);
  uStack_70 = extraout_x8;
  func_0x0001072ab574(lVar18 + 0x268);
  lVar19 = *(long *)(param_1 + 0x70);
  func_0x00010784a588(&lStack_278,param_1 + 0x18);
  func_0x000107297fc8(auStack_220);
  func_0x000107262f3c(auStack_1b0,param_1 + 0x18);
  auStack_e8[0] = *(undefined8 *)(param_1 + 0x60);
  func_0x00010784d8d4();
  auStack_e8[0] = *(undefined8 *)(param_1 + 0x68);
  func_0x00010784d8d4();
  func_0x0001072684ec(alStack_200);
  func_0x000100060964(auStack_e8,&DAT_10f34b835);
  uVar10 = 0;
  lVar8 = alStack_200[0];
  func_0x000104c32bd8();
  if ((uVar10 & 1) == 0) {
    uStack_a8 = (ulong)*(byte *)(param_1 + 0x50);
    auStack_b0[0] = 5;
    func_0x000104c3302c(*(long *)(alStack_200[0] + 8) + lVar8 * 0x78 + 0x38,auStack_b0);
    func_0x000104c3323c(auStack_b0);
  }
  else {
    lVar8 = *(long *)(alStack_200[0] + 8) + lVar8 * 0x78;
    func_0x000104c318bc(lVar8,auStack_e8);
    bVar2 = *(byte *)(param_1 + 0x50);
    *(undefined4 *)(lVar8 + 0x38) = 5;
    *(ulong *)(lVar8 + 0x40) = (ulong)bVar2;
  }
  func_0x000104c2f714(auStack_e8);
  puVar9 = auStack_130;
  func_0x00010724cbe8(puVar9,param_2);
  iStack_110 = *(int *)(*(long *)(param_1 + 0x70) + 0x2a8);
  *(int *)(*(long *)(param_1 + 0x70) + 0x2a8) = iStack_110 + 1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uVar10 = *(ulong *)(lVar19 + 0x250);
  uVar15 = *(ulong *)(lVar19 + 600);
  uVar7 = uVar10 == uVar15;
  puStack_108 = puVar9;
  if (uVar10 < uVar15) {
    func_0x00010784bd84(uVar10,&lStack_278);
    lVar8 = uVar10 + 400;
LAB_10784bbec:
    *(long *)(lVar19 + 0x250) = lVar8;
    func_0x00010784be90(&lStack_278);
    lVar8 = *(long *)(param_1 + 0x70);
    *(undefined1 *)(lVar8 + 0x260) = 1;
    plVar16 = *(long **)(lVar8 + 0x238);
    lVar19 = *(long *)(param_1 + 0x78);
    if (lVar19 != 0) {
      plVar1 = (long *)(lVar19 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_260 = *(undefined8 *)(param_1 + 0x10);
    uStack_268 = *(undefined8 *)(param_1 + 8);
    puStack_280 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)0x28;
    lStack_278 = lVar8;
    lStack_270 = lVar19;
    __Znwm();
    *puVar14 = &PTR_DAT_1109e1f38;
    puVar14[1] = lVar8;
    puVar14[2] = lVar19;
    lStack_278 = 0;
    lStack_270 = 0;
    puVar14[4] = uStack_260;
    puVar14[3] = uStack_268;
    puStack_280 = puVar14;
    func_0x00010784c3a0(&lStack_278);
    (**(code **)(*plVar16 + 0x10))(plVar16,auStack_298);
    func_0x0001006393ec(auStack_298);
    func_0x00010784c3a0(&uStack_2a8);
    __ZNSt3__15mutex6unlockEv(lVar18 + 0x268);
    func_0x00010784d810(uStack_70);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar8 = uVar10 - *(long *)(lVar19 + 0x248);
    uVar10 = lVar8 / 400 + 1;
    if (uVar10 < 0xa3d70a3d70a3d8) {
      uVar3 = (long)(uVar15 - *(long *)(lVar19 + 0x248)) / 400;
      uVar15 = uVar3 * 2;
      if (uVar15 < uVar10 || uVar15 - uVar10 == 0) {
        uVar15 = uVar10;
      }
      if (0x51eb851eb851ea < uVar3) {
        uVar15 = 0xa3d70a3d70a3d7;
      }
      if (uVar15 == 0) {
        lVar11 = 0;
      }
      else {
        if (0xa3d70a3d70a3d7 < uVar15) {
          func_0x000104bd35f4();
          goto LAB_10784bcc0;
        }
        lVar11 = uVar15 * 400;
        __Znwm();
      }
      lVar8 = lVar11 + lVar8;
      func_0x00010784bd84(lVar8,&lStack_278);
      lVar20 = *(long *)(lVar19 + 0x250);
      lVar17 = *(long *)(lVar19 + 0x248);
      lVar21 = lVar8 + ((lVar20 - lVar17) / -400) * 400;
      lVar12 = lVar21;
      for (lVar13 = lVar17; lVar13 != lVar20; lVar13 = lVar13 + 400) {
        func_0x00010784bd84(lVar12,lVar13);
        lVar12 = lVar12 + 400;
      }
      for (; uVar7 = lVar17 == lVar20, !(bool)uVar7; lVar17 = lVar17 + 400) {
        func_0x00010784be90(lVar17);
      }
      lVar8 = lVar8 + 400;
      lVar13 = *(long *)(lVar19 + 0x248);
      *(long *)(lVar19 + 0x248) = lVar21;
      *(long *)(lVar19 + 0x250) = lVar8;
      *(ulong *)(lVar19 + 600) = lVar11 + uVar15 * 400;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      goto LAB_10784bbec;
    }
  }
  func_0x00010784bdf0();
LAB_10784bcc0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10784bcc4);
  (*pcVar6)();
}



/* Entry: 10784bf58; end: 10784bf7f;  */

long FUN_10784bf58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010784bf80();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10784c088; end: 10784c10b;  */

undefined1 * FUN_10784c088(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xd8] = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x188) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 400);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a5) = 0;
  *(undefined8 *)(param_1 + 0x29d) = 0;
  return param_1;
}



/* Entry: 10784c288; end: 10784c2bf;  */

undefined8 * FUN_10784c288(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e1ee8;
  func_0x00010784c2e8(param_1 + 3);
  return param_1;
}



/* Entry: 10784c408; end: 10784c42f;  */

void FUN_10784c408(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  *puVar4 = &PTR_DAT_1109e1f38;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar6;
  return;
}



/* Entry: 10784cc88; end: 10784cf37;  */

/* WARNING: Possible PIC construction at 0x00010784d4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010784d56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010784d6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784d4bc) */
/* WARNING: Removing unreachable block (ram,0x00010784d4d8) */
/* WARNING: Removing unreachable block (ram,0x00010784d4e0) */
/* WARNING: Removing unreachable block (ram,0x00010784d4e8) */
/* WARNING: Removing unreachable block (ram,0x00010784d514) */
/* WARNING: Removing unreachable block (ram,0x00010784d518) */
/* WARNING: Removing unreachable block (ram,0x00010784d504) */
/* WARNING: Removing unreachable block (ram,0x00010784d520) */
/* WARNING: Removing unreachable block (ram,0x00010784d510) */
/* WARNING: Removing unreachable block (ram,0x00010784d4cc) */
/* WARNING: Removing unreachable block (ram,0x00010784d4d0) */
/* WARNING: Removing unreachable block (ram,0x00010784d570) */
/* WARNING: Removing unreachable block (ram,0x00010784d590) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10784cc88(long *******param_1,long *******param_2,long *******param_3,long *******param_4,
             long *******param_5,long *******param_6)

{
  long lVar1;
  long *******ppppppplVar2;
  ulong uVar3;
  long *******ppppppplVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *******unaff_x19;
  long *******unaff_x20;
  long *****ppppplVar14;
  long *******unaff_x21;
  long ******pppppplVar15;
  long *******unaff_x22;
  long *******ppppppplVar16;
  long *******unaff_x23;
  long *******ppppppplVar17;
  long ******unaff_x24;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x25;
  long lVar21;
  long unaff_x26;
  long ******unaff_x27;
  long *******unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar22;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_68;
  
  func_0x00010784d84c();
  uVar6 = param_4 == (long *******)0x2;
  ppppppplVar8 = param_1;
  ppppppplVar7 = param_2;
  uStack_68 = extraout_x8;
  if ((long *******)0x1 < param_4) {
    if ((bool)uVar6) {
      ppppppplVar13 = param_2 + -0x32;
      ppppppplVar7 = ppppppplVar13;
      func_0x00010784cf74(param_3,ppppppplVar13,param_1);
      ppppppplVar8 = param_3;
      if ((int)param_3 != 0) {
        func_0x00010784d810(uStack_68);
        ppppppplVar16 = param_3;
        if ((bool)uVar6) {
          uVar6 = true;
          param_3 = unaff_x20;
          ppppppplVar7 = unaff_x21;
          ppppppplVar8 = unaff_x22;
code_r0x00010784d758:
          puVar5 = (undefined1 *)((long)register0x00000008 + -0x1d0);
          *(long ********)((long)register0x00000008 + -0x30) = unaff_x28;
          *(long *******)((long)register0x00000008 + -0x28) = unaff_x27;
          *(long ********)((long)register0x00000008 + -0x20) = param_3;
          *(long ********)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          func_0x00010784d970(param_1,ppppppplVar13);
          func_0x00010784d84c();
          *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8_00;
          func_0x00010784d8c4((undefined1 *)((long)register0x00000008 + -0x1c8));
          func_0x00010784cc10(param_3,unaff_x19);
          ppppppplVar16 = unaff_x19;
          func_0x00010784cc10(unaff_x19,(undefined1 *)((long)register0x00000008 + -0x1c8));
          func_0x00010784d9b0();
          func_0x00010784d810(*(undefined8 *)((long)register0x00000008 + -0x38));
          if ((bool)uVar6) {
            return ppppppplVar16;
          }
          puVar22 = &UNK_10784d7c0;
          ___stack_chk_fail();
          goto code_r0x00010784d7c0;
        }
        goto LAB_10784cf10;
      }
    }
    else {
      if (0 < (long)param_4) {
        pppppplVar12 = (long ******)((ulong)param_4 >> 1);
        ppppppplVar8 = param_1 + (long)pppppplVar12 * 0x32;
        uVar6 = param_4 == param_6;
        if ((long)param_6 < (long)param_4) {
          func_0x00010784d91c();
          func_0x00010784d9a8();
          lVar18 = (long)param_4 - (long)pppppplVar12;
          ppppppplVar16 = ppppppplVar8;
          func_0x00010784d9a8(ppppppplVar8,param_2,param_3,lVar18,param_5);
          func_0x00010784d810(uStack_68);
          if ((bool)uVar6) {
code_r0x00010784d30c:
            puVar5 = (undefined1 *)((long)register0x00000008 + -0xb0);
            *(long ********)((long)register0x00000008 + -0x60) = unaff_x28;
            *(long *******)((long)register0x00000008 + -0x58) = unaff_x27;
            *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(long *******)((long)register0x00000008 + -0x40) = unaff_x24;
            *(long ********)((long)register0x00000008 + -0x38) = unaff_x23;
            *(long ********)((long)register0x00000008 + -0x30) = unaff_x22;
            *(long ********)((long)register0x00000008 + -0x28) = unaff_x21;
            *(long ********)((long)register0x00000008 + -0x20) = unaff_x20;
            *(long ********)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            *(long ********)((long)register0x00000008 + -0x88) = param_5;
            unaff_x21 = param_1;
            ppppppplVar13 = ppppppplVar8;
code_r0x00010784d34c:
            if (lVar18 == 0) {
              return param_1;
            }
            ppppppplVar7 = unaff_x21;
            unaff_x27 = pppppplVar12;
            if ((long)param_6 < lVar18 && (long)param_6 < (long)pppppplVar12)
            goto joined_r0x00010784d368;
            ppppppplVar16 = *(long ********)((long)register0x00000008 + -0x88);
            *(long ********)((long)register0x00000008 + -0x78) = ppppppplVar16;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x68);
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
            ppppppplVar17 = ppppppplVar16;
            if ((long)pppppplVar12 <= lVar18) goto code_r0x00010784d678;
            unaff_x19 = (long *******)0x0;
            while (ppppppplVar8 = ppppppplVar16, ppppppplVar13 != param_2) {
              func_0x00010784bd84(ppppppplVar16);
              func_0x00010784d9e8();
            }
            while (param_2 = param_2 + -0x32, ppppppplVar17 != ppppppplVar16) {
              if (ppppppplVar13 == unaff_x21) {
                while (ppppppplVar17 != ppppppplVar16) {
                  ppppppplVar17 = ppppppplVar17 + -0x32;
                  func_0x00010784cc10(param_2,ppppppplVar17);
                  param_2 = param_2 + -0x32;
                }
                break;
              }
              ppppppplVar8 = ppppppplVar13 + -0x32;
              unaff_x19 = ppppppplVar17 + -0x32;
              ppppppplVar11 = param_3;
              func_0x00010784d9b8(param_3,unaff_x19);
              ppppppplVar4 = ppppppplVar8;
              ppppppplVar2 = ppppppplVar8;
              if ((int)ppppppplVar11 == 0) {
                ppppppplVar17 = unaff_x19;
                ppppppplVar4 = ppppppplVar13;
                ppppppplVar2 = unaff_x19;
              }
              ppppppplVar13 = ppppppplVar4;
              func_0x00010784cc10(param_2,ppppppplVar2);
            }
            goto code_r0x00010784d6f4;
          }
          goto LAB_10784cf10;
        }
        ppppppplStack_200 = (long *******)0x0;
        ppppppplStack_1f8 = param_5;
        puStack_1f0 = (undefined1 *)&ppppppplStack_200;
        func_0x00010784d91c();
        func_0x00010784d09c();
        ppppppplVar16 = param_5 + (long)pppppplVar12 * 0x32;
        ppppppplStack_200 = (long *******)pppppplVar12;
        func_0x00010784d09c(ppppppplVar8,param_2,param_3,(long)param_4 - (long)pppppplVar12,
                            ppppppplVar16);
        ppppppplVar13 = param_5 + (long)param_4 * 0x32;
        ppppppplVar7 = ppppppplVar16;
        ppppppplStack_200 = param_4;
        while (param_5 != ppppppplVar16) {
          if (ppppppplVar7 == ppppppplVar13) goto LAB_10784cf00;
          ppppppplVar8 = param_3;
          param_2 = ppppppplVar7;
          func_0x00010784cf74(param_3,ppppppplVar7,param_5);
          if ((int)ppppppplVar8 == 0) {
            func_0x00010784d99c();
            param_5 = param_5 + 0x32;
          }
          else {
            func_0x00010784d984();
            ppppppplVar7 = ppppppplVar7 + 0x32;
          }
        }
        for (; uVar6 = ppppppplVar7 == ppppppplVar13, !(bool)uVar6;
            ppppppplVar7 = ppppppplVar7 + 0x32) {
          func_0x00010784d984();
        }
        goto LAB_10784cf08;
      }
      uVar6 = param_1 == param_2;
      if (!(bool)uVar6) {
        lVar18 = 0;
        ppppppplVar16 = param_1;
        while( true ) {
          ppppppplVar16 = ppppppplVar16 + 0x32;
          uVar6 = 1;
          if (ppppppplVar16 == param_2) break;
          ppppppplVar8 = param_3;
          ppppppplVar7 = ppppppplVar16;
          func_0x00010784cf74();
          if ((int)ppppppplVar8 != 0) {
            func_0x00010784bd84(&ppppppplStack_1f8,ppppppplVar16);
            lVar1 = lVar18;
            do {
              lVar21 = lVar1;
              lVar1 = (long)param_1 + lVar21;
              func_0x00010784cc10(lVar1 + 400,lVar1);
              ppppppplVar8 = param_1;
              if (lVar21 == 0) goto LAB_10784ce3c;
              ppppppplVar7 = param_3;
              func_0x00010784cf74(param_3,&ppppppplStack_1f8,lVar1 + -400);
              lVar1 = lVar21 + -400;
            } while (((ulong)ppppppplVar7 & 1) != 0);
            ppppppplVar8 = (long *******)((long)param_1 + lVar21);
LAB_10784ce3c:
            ppppppplVar7 = (long *******)&ppppppplStack_1f8;
            func_0x00010784cc10();
            func_0x00010784d9b0();
          }
          lVar18 = lVar18 + 400;
        }
      }
    }
  }
  goto LAB_10784ccb8;
joined_r0x00010784d368:
  while( true ) {
    if (unaff_x27 == (long ******)0x0) {
      return param_1;
    }
    param_1 = param_3;
    func_0x00010784cf74(param_3,ppppppplVar13,unaff_x21);
    if (((ulong)param_1 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 0x32;
    ppppppplVar7 = ppppppplVar7 + 0x32;
    unaff_x27 = (long ******)((long)unaff_x27 - 1);
  }
  *(long ********)((long)register0x00000008 + -0xa0) = param_6;
  *(long ********)((long)register0x00000008 + -0x98) = param_2;
  *(long ********)((long)register0x00000008 + -0x80) = param_3;
  *(long *)((long)register0x00000008 + -0x90) = lVar18;
  param_1 = unaff_x21;
  if ((long)unaff_x27 < lVar18) {
    *(long *)((long)register0x00000008 + -0xa8) = lVar18 / 2;
    unaff_x28 = ppppppplVar13 + (lVar18 / 2) * 0x32;
    ppppppplVar8 = unaff_x21;
    uVar3 = ((long)ppppppplVar13 - (long)ppppppplVar7) / 400;
    while (uVar3 != 0) {
      uVar19 = uVar3 >> 1;
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0x80);
      func_0x00010784cf74(uVar9,unaff_x28,ppppppplVar8 + uVar19 * 0x32);
      uVar20 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
      uVar3 = uVar19;
      if ((int)uVar9 == 0) {
        ppppppplVar8 = ppppppplVar8 + uVar19 * 0x32 + 0x32;
        uVar3 = uVar20;
      }
    }
    pppppplVar12 = (long ******)(((long)ppppppplVar8 - (long)ppppppplVar7) / 400);
    lVar18 = *(long *)((long)register0x00000008 + -0xa8);
  }
  else {
    if (unaff_x27 == (long ******)0x1) {
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
      param_3 = *(long ********)((long)register0x00000008 + -0x20);
      unaff_x19 = *(long ********)((long)register0x00000008 + -0x18);
      ppppppplVar8 = *(long ********)((long)register0x00000008 + -0x30);
      ppppppplVar7 = *(long ********)((long)register0x00000008 + -0x28);
      unaff_x28 = *(long ********)((long)register0x00000008 + -0x60);
      unaff_x27 = *(long *******)((long)register0x00000008 + -0x58);
      uVar6 = true;
      goto code_r0x00010784d758;
    }
    pppppplVar12 = (long ******)((long)unaff_x27 / 2);
    ppppppplVar8 = unaff_x21 + (long)pppppplVar12 * 0x32;
    *(long *******)((long)register0x00000008 + -0x78) = *param_3;
    ppppppplVar7 = ppppppplVar13;
    uVar3 = ((long)param_2 - (long)ppppppplVar13) / 400;
    while (unaff_x28 = ppppppplVar7, uVar3 != 0) {
      uVar20 = uVar3 >> 1;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0x78);
      func_0x00010784d9b8(puVar10,unaff_x28 + uVar20 * 0x32);
      ppppppplVar7 = unaff_x28 + uVar20 * 0x32 + 0x32;
      uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
      if ((int)puVar10 == 0) {
        ppppppplVar7 = unaff_x28;
        uVar3 = uVar20;
      }
    }
    lVar18 = ((long)unaff_x28 - (long)ppppppplVar13) / 400;
  }
  param_3 = *(long ********)((long)register0x00000008 + -0x80);
  param_2 = unaff_x28;
  if ((ppppppplVar8 != ppppppplVar13) &&
     (uVar6 = ppppppplVar13 == unaff_x28, param_2 = ppppppplVar8, !(bool)uVar6)) {
    *(long *)((long)register0x00000008 + -0xa8) = lVar18;
    unaff_x30 = &UNK_10784d4bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_1 = ppppppplVar8;
    unaff_x19 = ppppppplVar13;
    ppppppplVar7 = unaff_x21;
    goto code_r0x00010784d758;
  }
  unaff_x19 = (long *******)((long)unaff_x27 - (long)pppppplVar12);
  unaff_x25 = *(long *)((long)register0x00000008 + -0x90) - lVar18;
  if ((*(long *)((long)register0x00000008 + -0x90) - ((long)pppppplVar12 + lVar18)) +
      (long)unaff_x27 <= (long)pppppplVar12 + lVar18) goto code_r0x00010784d594;
  param_5 = *(long ********)((long)register0x00000008 + -0x88);
  param_6 = *(long ********)((long)register0x00000008 + -0xa0);
  unaff_x30 = &UNK_10784d570;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  unaff_x20 = param_3;
  unaff_x22 = param_6;
  unaff_x23 = param_2;
  unaff_x24 = pppppplVar12;
  unaff_x26 = lVar18;
  goto code_r0x00010784d30c;
code_r0x00010784d594:
  param_6 = *(long ********)((long)register0x00000008 + -0xa0);
  param_1 = param_2;
  func_0x00010784d30c(param_2,unaff_x28,*(undefined8 *)((long)register0x00000008 + -0x98),param_3,
                      unaff_x19,unaff_x25,*(undefined8 *)((long)register0x00000008 + -0x88),param_6)
  ;
  ppppppplVar13 = ppppppplVar8;
  goto code_r0x00010784d34c;
code_r0x00010784d678:
  while (unaff_x21 != ppppppplVar13) {
    func_0x00010784bd84(ppppppplVar17,unaff_x21);
    func_0x00010784d9e8();
    ppppppplVar17 = ppppppplVar17 + 0x32;
  }
  while (unaff_x19 = unaff_x21, ppppppplVar8 = ppppppplVar16, ppppppplVar17 != ppppppplVar16) {
    if (ppppppplVar13 == param_2) {
      func_0x00010784cbc4(ppppppplVar16,ppppppplVar17,ppppppplVar7);
      break;
    }
    ppppppplVar8 = param_3;
    func_0x00010784d9b8(param_3,ppppppplVar13);
    if ((int)ppppppplVar8 == 0) {
      func_0x00010784cc10(ppppppplVar7,ppppppplVar16);
      ppppppplVar16 = ppppppplVar16 + 0x32;
    }
    else {
      func_0x00010784cc10(ppppppplVar7,ppppppplVar13);
      ppppppplVar13 = ppppppplVar13 + 0x32;
    }
    ppppppplVar7 = ppppppplVar7 + 0x32;
  }
code_r0x00010784d6f4:
  ppppppplVar16 = (long *******)((long)register0x00000008 + -0x78);
  puVar22 = &UNK_10784d6fc;
code_r0x00010784d7c0:
  *(long ********)(puVar5 + -0x30) = ppppppplVar8;
  *(long ********)(puVar5 + -0x28) = ppppppplVar7;
  *(long ********)(puVar5 + -0x20) = param_3;
  *(long ********)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = puVar22;
  pppppplVar12 = *ppppppplVar16;
  *ppppppplVar16 = (long ******)0x0;
  if (pppppplVar12 != (long ******)0x0) {
    pppppplVar15 = ppppppplVar16[1];
    for (ppppplVar14 = (long *****)0x0; ppppplVar14 < *pppppplVar15;
        ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
      func_0x00010784be90(pppppplVar12);
      pppppplVar12 = pppppplVar12 + 0x32;
    }
  }
  return ppppppplVar16;
LAB_10784cf00:
  for (; uVar6 = param_5 == ppppppplVar16, !(bool)uVar6; param_5 = param_5 + 0x32) {
    func_0x00010784d99c();
  }
LAB_10784cf08:
  func_0x00010784d904();
  ppppppplVar7 = param_2;
LAB_10784ccb8:
  func_0x00010784d810(uStack_68);
  ppppppplVar16 = ppppppplVar8;
  if ((bool)uVar6) {
    return ppppppplVar8;
  }
LAB_10784cf10:
  ___stack_chk_fail();
  func_0x00010784d904();
  func_0x00010784d874();
  ppppppplVar8 = (long *******)*ppppppplVar16;
  *ppppppplVar16 = (long ******)ppppppplVar7;
  if (ppppppplVar8 != (long *******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return ppppppplVar8;
  }
  return (long *******)0x0;
}



/* Entry: 10784d810; end: 10784d9fb;  */

void FUN_10784d810(void)

{
  return;
}



/* Entry: 10784df50; end: 10784dfa7;  */

undefined8 FUN_10784df50(void)

{
  return 0;
}



/* Entry: 10784e21c; end: 10784e257;  */

long FUN_10784e21c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e2218);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


