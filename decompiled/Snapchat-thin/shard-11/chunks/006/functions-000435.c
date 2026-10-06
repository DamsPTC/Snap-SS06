/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087eb720; end: 1087eb7cf;  */

undefined8 * FUN_1087eb720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a726e8;
  func_0x000107c297ac(param_1 + 0x1f);
  func_0x000107c29118(param_1 + 0x1d);
  func_0x000107c28cc8(param_1 + 0x1b);
  func_0x000107c29134(param_1 + 0x19);
  func_0x000107c28ebc(param_1 + 0x17);
  func_0x000107c2917c(param_1 + 0x15);
  func_0x000107c28ab4(param_1 + 0x13);
  func_0x000107c29a48(param_1 + 0x11);
  func_0x000107c29958(param_1 + 0xf);
  func_0x000107c299b8(param_1 + 0xd);
  func_0x000107c29194(param_1 + 0xb);
  func_0x000107c28ec0(param_1 + 9);
  func_0x000107c28ab8(param_1 + 7);
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1087eb7d0; end: 1087eb83b;  */

void FUN_1087eb7d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087eb7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1087eb83c; end: 1087eb90f;  */

undefined8 *
FUN_1087eb83c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 8;
  *param_1 = &PTR_FUN_110a72738;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  param_1[0xc] = param_7;
  FUN_1087bc1b8(param_1 + 0xd,param_8);
  return param_1;
}



/* Entry: 1087eb910; end: 1087ec007;  */

void FUN_1087eb910(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *plVar13;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar14;
  long *extraout_x8_03;
  long *extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar15;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long *plStack_130;
  long alStack_118 [7];
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  
  func_0x0001087edbfc();
  puVar8 = (undefined8 *)0x3e0;
  __Znwm();
  *puVar8 = FUN_1087ed208;
  puVar8[1] = FUN_1087ed6ec;
  puVar8[0x7a] = param_4;
  puVar8[0x79] = param_3;
  puVar8[0x78] = param_2;
  func_0x0001087e472c(puVar8 + 2);
  FUN_1087e46b4(param_1,puVar8 + 2);
  uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x000107c278b8(puVar8 + 0x66,&UNK_10f4bb6b3);
  func_0x000107c31420(puVar8 + 0x4b,uVar17,puVar8 + 0x66);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0x66);
  plVar16 = (long *)(param_3 + 0x40);
  FUN_10885edd8(&uStack_e0,*(undefined8 *)(param_2 + 0x20));
  plVar10 = &uStack_e0;
  FUN_108663a10(puVar8 + 0x53,plVar10);
  func_0x0001087eda60();
  if ((*(byte *)(puVar8 + 0x59) & 1) == 0) {
    uStack_e0 = (undefined **)0x700000008;
  }
  else {
    bVar7 = *(char *)((long)puVar8 + 0x2c4) == '\x01';
    in_ZR = bVar7 && *(int *)(puVar8 + 0x58) - 4U == 0xfffffffd;
    if (bVar7 && *(int *)(puVar8 + 0x58) - 4U < 0xfffffffd) {
      plVar9 = *(long **)(param_2 + 0x20);
      plVar16 = puVar8 + 0x53;
      func_0x000107c29f64(puVar8 + 4,plVar9,plVar16,2);
      if (((*(byte *)(puVar8 + 0x3e) & 1) == 0) ||
         (in_ZR = *(int *)(puVar8 + 0x25) == 1, !(bool)in_ZR)) {
        uStack_e0 = (undefined **)0x700000008;
        func_0x0001087ed7e8();
        func_0x0001087edb1c();
      }
      else {
        plVar10 = *(long **)(param_2 + 0x30);
        (**(code **)(*plVar10 + 0x10))();
        puVar8[0x56] = plVar10;
        *(undefined1 *)(puVar8 + 0x57) = 1;
        puVar8[0x3b] = plVar10;
        *(undefined1 *)(puVar8 + 0x3c) = 1;
        FUN_10885fef4(*(undefined8 *)(param_2 + 0x20),puVar8 + 0x53);
        FUN_10885ff98(*(undefined8 *)(param_2 + 0x20),puVar8 + 4);
        func_0x000107c31428(puVar8 + 0x4b);
        *(undefined1 *)(puVar8 + 0x5a) = 0;
        *(undefined1 *)(puVar8 + 0x60) = 0;
        FUN_1087ec008(puVar8 + 0x5a,*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x94),
                      *(undefined4 *)(param_3 + 0x140));
        plVar9 = puVar8 + 0x69;
        plVar10 = *(long **)(param_2 + 0x50);
        plVar16 = puVar8 + 4;
        (**(code **)(*plVar10 + 0x10))(plVar9,plVar10,plVar16,0x2d0124);
        plVar1 = puVar8 + 0x61;
        plVar14 = puVar8 + 0x70;
        plVar2 = puVar8 + 0x72;
        plVar3 = puVar8 + 0x74;
        plVar12 = puVar8 + 0x76;
        *plVar1 = *plVar9;
        do {
          func_0x0001087ed770();
        } while (extraout_w10 != 0);
        func_0x0001087ed954(*plVar1);
        if ((extraout_w8 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x7b) = 0;
          func_0x0001087ed790();
          if (*plVar10 == 0) {
            func_0x000107c3a5c0();
          }
          func_0x0001087edc10();
          plVar13 = extraout_x8;
          do {
            if (*plVar13 == 0) {
              func_0x0001087ed80c();
              plVar13 = extraout_x8_01;
              uVar6 = extraout_w10_01;
              uVar15 = extraout_w11_00;
            }
            else {
              func_0x0001087ed998();
              plVar13 = extraout_x8_00;
              uVar6 = extraout_w10_00;
              uVar15 = extraout_w11;
            }
            if ((uVar15 & 1) != 0) goto LAB_1087ebe28;
          } while ((uVar6 >> 1 & 1) == 0);
        }
        plVar10 = plVar1;
        FUN_10866b034(plVar1);
        FUN_10866e480(puVar8 + 0x3f,plVar10);
        func_0x0001087edab0();
        func_0x0001087edb58();
        lVar11 = 0x48;
        __Znwm();
        plVar16 = (long *)(lVar11 + 8);
        *plVar16 = 0;
        func_0x0001087edbdc();
        func_0x0001087edb68();
        func_0x0001087edbc8();
        FUN_1087bd5d8(lVar11 + 0x20);
        lVar18 = puVar8[0x78];
        func_0x0001087ed910();
        puVar8[0x6c] = lVar11 + 0x18;
        puVar8[0x6d] = lVar11;
        plVar10 = *(long **)(lVar18 + 0x10);
        uVar17 = puVar8[0x56];
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = *plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uStack_e0 = &PTR_SUB_110a72830;
        puVar8[0x6e] = 0;
        puVar8[0x6f] = 0;
        puStack_c8 = &uStack_e0;
        lStack_d8 = lVar11 + 0x18;
        lStack_d0 = lVar11;
        func_0x0001087edb9c(*(undefined8 *)(*plVar10 + 0x30),plVar10,uVar17,puVar8 + 4,&uStack_e0);
        func_0x00010865f8f8(&uStack_e0);
        FUN_1087ec640(puVar8 + 0x6e);
        lVar11 = *(long *)(lVar11 + 0x20);
        *plVar14 = lVar11;
        if (lVar11 == 0) {
          *plVar2 = 0;
        }
        else {
          do {
            func_0x0001087ed770();
          } while (extraout_w10_02 != 0);
          *plVar2 = *plVar14;
          if (*plVar14 != 0) {
            do {
              func_0x0001087ed770();
            } while (extraout_w10_03 != 0);
          }
        }
        func_0x0001087edab8();
        func_0x000107c314e0(puVar8 + 0x73);
        FUN_1087ec0cc(puVar8 + 0x71,plVar2,puVar8 + 0x73);
        func_0x0001087edaa0();
        func_0x0001087edb50();
        lVar11 = puVar8[0x71];
        *plVar12 = lVar11;
        if (lVar11 != 0) {
          do {
            func_0x0001087ed770();
          } while (extraout_w10_04 != 0);
        }
        lVar11 = *(long *)puVar8[0x7a];
        puVar8[0x77] = lVar11;
        if (lVar11 != 0) {
          do {
            func_0x0001087ed770();
          } while (extraout_w10_05 != 0);
        }
        func_0x000107c278b8(plVar9,&UNK_10f4bbbea);
        plVar16 = puVar8 + 0x77;
        FUN_1087ec2b0(puVar8 + 0x75,plVar12,plVar16,plVar9);
        *plVar3 = puVar8[0x75];
        plVar10 = plVar12;
        do {
          func_0x0001087ed770();
        } while (extraout_w10_06 != 0);
        func_0x0001087ed954(*plVar3);
        plStack_130 = plVar14;
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x7b) = 1;
          func_0x0001087ed790();
          if (*plVar10 == 0) {
            func_0x000107c3a5c0();
          }
          func_0x0001087edc10();
          plVar14 = extraout_x8_02;
          do {
            if (*plVar14 == 0) {
              func_0x0001087ed80c();
              plVar14 = extraout_x8_04;
              uVar6 = extraout_w10_08;
              uVar15 = extraout_w11_02;
            }
            else {
              func_0x0001087ed998();
              plVar14 = extraout_x8_03;
              uVar6 = extraout_w10_07;
              uVar15 = extraout_w11_01;
            }
            if ((uVar15 & 1) != 0) {
LAB_1087ebe28:
              func_0x0001087ed9bc();
              if ((bool)in_ZR) {
                func_0x0001087ed81c();
                func_0x0001087ed780();
                func_0x0001087ed7d4();
                func_0x0001087edaf4();
              }
              func_0x0001087ed82c();
              goto LAB_1087ebc5c;
            }
          } while ((uVar6 >> 1 & 1) == 0);
        }
        plVar16 = plVar3;
        FUN_1087bce84();
        FUN_1087bda64(plVar1);
        func_0x000107c27f9c(plVar3);
        func_0x0001087edb50();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar9);
        func_0x0001087eda40();
        func_0x0001087edb94();
        iVar4 = (int)*plVar1;
        if (iVar4 == 0) {
          FUN_10885edd8(&uStack_e0,*(undefined8 *)(puVar8[0x78] + 0x20),puVar8[0x79] + 0x40);
          FUN_108663a10(alStack_118,&uStack_e0);
          plVar16 = alStack_118;
          FUN_1086568ac(puVar8 + 0x53);
          plVar9 = alStack_118;
          FUN_1086569a0(plVar9);
          func_0x0001087eda60();
          in_ZR = *(char *)(puVar8 + 0x59) == '\x01';
          if (((bool)in_ZR) && ((*(byte *)((long)puVar8 + 0x2c4) & 1) == 0)) {
            iVar4 = (int)*plVar1;
            goto LAB_1087ebdfc;
          }
          uStack_e0 = (undefined **)0x700000008;
        }
        else {
LAB_1087ebdfc:
          uStack_e0 = (undefined **)CONCAT44(iVar4,8);
        }
        func_0x0001087ed7e8();
        func_0x0001087edb1c();
        func_0x0001087eda70();
        func_0x0001087edb24();
        func_0x0001087edb60();
        func_0x0001087eda30();
        func_0x0001087eda38();
        func_0x0001087eda48();
      }
      func_0x0001087eda58();
      plVar10 = plVar9;
      goto LAB_1087ebc4c;
    }
    uStack_e0 = (undefined **)0x8;
  }
  func_0x0001087ed7e8();
  func_0x0001087edb1c();
LAB_1087ebc4c:
  func_0x0001087eda50();
  func_0x0001087eda28();
  while( true ) {
    func_0x0001087ed8c4();
    func_0x0001087ed9a4();
LAB_1087ebc5c:
    func_0x0001087edb04();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)plVar16 != 0) goto LAB_1087ebe70;
    do {
      func_0x0001087ed9ac();
LAB_1087ebe70:
      func_0x000104bd46a0(plVar10);
    } while ((int)plVar16 == 0);
    func_0x0001087eda60();
    func_0x0001087eda70();
    func_0x0001087edb50();
    plVar10 = plStack_130;
    func_0x000107c27f9c();
    func_0x0001087eda30();
    func_0x0001087eda38();
    func_0x0001087eda48();
    func_0x0001087eda58();
    func_0x0001087eda50();
    func_0x0001087eda28();
    func_0x0001087eda0c();
    func_0x0001087ed93c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087ec008; end: 1087ec0cb;  */

void FUN_1087ec008(ulong *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  double dVar2;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 != 0) {
    if ((param_1[6] & 1) == 0) {
      auStack_70[0] = 0;
      uStack_68 = 0;
      auStack_60[0] = 0;
      uStack_48 = 0;
      FUN_1087bd548(param_1,auStack_70);
      func_0x000107c279a4(auStack_60);
    }
    uVar1 = param_2;
    if (param_3 != 0) {
      if (7 < param_4) {
        param_4 = 8;
      }
      dVar2 = (double)param_4;
      _exp2();
      uVar1 = param_3;
      if (param_2 * (int)dVar2 <= param_3) {
        uVar1 = param_2 * (int)dVar2;
      }
    }
    if ((param_1[1] & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *param_1 = (ulong)uVar1;
  }
  return;
}



/* Entry: 1087ec0cc; end: 1087ec2af;  */

void FUN_1087ec0cc(long *param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long lVar5;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  
  lVar3 = 0x70;
  __Znwm();
  func_0x0001087ed8e4(FUN_1087ecef4);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10 != 0);
  }
  lVar5 = *param_2;
  *(long *)(lVar3 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087bdacc(lVar3 + 0x10);
  func_0x0001087ed9d0();
  lVar5 = *param_1;
  *(long *)(lVar3 + 0x58) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar3 + 0x60) = *(long *)(lVar3 + 0x40);
  if (*(long *)(lVar3 + 0x40) != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_02 != 0);
  }
  plVar4 = (long *)(lVar3 + 0x20);
  func_0x000107c278b8(plVar4,&UNK_10f4afc82);
  func_0x0001087edc1c();
  FUN_1087ec7b4();
  func_0x0001087ed9e4();
  do {
    func_0x0001087ed770();
  } while (extraout_w10_03 != 0);
  func_0x0001087ed868();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x68) = 0;
    lVar5 = *(long *)(lVar3 + 0x48);
    func_0x0001087ed790();
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar4;
    }
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x0001087ed80c();
        plVar6 = extraout_x8_01;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087ed998();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_04;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)in_ZR) {
          func_0x0001087ed81c();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087ed780();
          *(undefined1 *)plVar4 = uVar1;
          func_0x0001087ed7c0(0);
          *(long **)(lVar5 + 0x90) = plVar4;
        }
        func_0x0001087ed8a8();
        *(long *)(extraout_x8_02 + 0x20) = lVar8;
        func_0x0001087ed888(*(undefined8 *)(lVar5 + 0x90));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087ed9dc();
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8f8();
  func_0x0001087ed8d4();
  func_0x0001087ed944();
  func_0x0001087ed94c();
  func_0x0001087ed8c4();
  func_0x0001087ed8dc();
  func_0x0001087ed960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 1087ec2b0; end: 1087ec49b;  */

void FUN_1087ec2b0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long lVar5;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  
  lVar3 = 0x70;
  __Znwm();
  func_0x0001087ed8e4(FUN_1087ed158);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10 != 0);
  }
  lVar5 = *param_3;
  *(long *)(lVar3 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087bdacc(lVar3 + 0x10);
  FUN_1087bcd54(param_1,lVar3 + 0x10);
  lVar5 = *param_2;
  *(long *)(lVar3 + 0x58) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar3 + 0x60) = *(long *)(lVar3 + 0x40);
  if (*(long *)(lVar3 + 0x40) != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_02 != 0);
  }
  plVar4 = (long *)(lVar3 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4,param_4);
  func_0x0001087edc1c();
  FUN_1087ecad0();
  func_0x0001087ed9e4();
  do {
    func_0x0001087ed770();
  } while (extraout_w10_03 != 0);
  func_0x0001087ed868();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x68) = 0;
    lVar5 = *(long *)(lVar3 + 0x48);
    func_0x0001087ed790();
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar4;
    }
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x0001087ed80c();
        plVar6 = extraout_x8_01;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087ed998();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_04;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)in_ZR) {
          func_0x0001087ed81c();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087ed780();
          *(undefined1 *)plVar4 = uVar1;
          func_0x0001087ed7c0(0);
          *(long **)(lVar5 + 0x90) = plVar4;
        }
        func_0x0001087ed8a8();
        *(long *)(extraout_x8_02 + 0x20) = lVar8;
        func_0x0001087ed888(*(undefined8 *)(lVar5 + 0x90));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087ed9dc();
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8f8();
  func_0x0001087ed8d4();
  func_0x0001087ed944();
  func_0x0001087ed94c();
  func_0x0001087ed8c4();
  func_0x0001087ed8dc();
  func_0x0001087ed960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 1087ec49c; end: 1087ec49f;  */

undefined8 * FUN_1087ec49c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72738;
  func_0x000107c30608(param_1 + 0xd);
  func_0x000107c29118(param_1 + 10);
  func_0x000107c28868(param_1 + 8);
  func_0x000107c29194(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087ec4a0; end: 1087ec4b3;  */

void FUN_1087ec4a0(void)

{
  FUN_1087ec4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ec4b4; end: 1087ec50f;  */

undefined8 * FUN_1087ec4b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72738;
  func_0x000107c30608(param_1 + 0xd);
  func_0x000107c29118(param_1 + 10);
  func_0x000107c28868(param_1 + 8);
  func_0x000107c29194(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087ec510; end: 1087ec513;  */

void FUN_1087ec510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087ec514; end: 1087ec527;  */

void FUN_1087ec514(void)

{
  FUN_1087ec630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ec528; end: 1087ec53b;  */

void FUN_1087ec528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087ec530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087ec53c; end: 1087ec54f;  */

void FUN_1087ec53c(void)

{
  FUN_1087ec5f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ec550; end: 1087ec593;  */

void FUN_1087ec550(void)

{
  func_0x0001087edae4();
  func_0x0001087edb2c();
  func_0x0001087edadc();
  return;
}



/* Entry: 1087ec594; end: 1087ec5f3;  */

void FUN_1087ec594(void)

{
  func_0x0001087edae4();
  func_0x0001087edb2c();
  func_0x0001087edadc();
  return;
}



/* Entry: 1087ec5f4; end: 1087ec62f;  */

undefined8 * FUN_1087ec5f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a727c8;
  func_0x000107c27914(param_1 + 3);
  func_0x0001087bd99c(param_1 + 1);
  return param_1;
}



/* Entry: 1087ec630; end: 1087ec63f;  */

void FUN_1087ec630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087ec640; end: 1087ec693;  */

long FUN_1087ec640(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087ec694; end: 1087ec6a7;  */

void FUN_1087ec694(void)

{
  func_0x0001087ec668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ec6a8; end: 1087ec6f7;  */

void FUN_1087ec6a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  *puVar4 = &PTR_SUB_110a72830;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
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
  return;
}



/* Entry: 1087ec6f8; end: 1087ec76f;  */

void FUN_1087ec6f8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_110a72830;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  return;
}



/* Entry: 1087ec770; end: 1087ec7a7;  */

long FUN_1087ec770(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a72890);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087ec7a8; end: 1087ec7b3;  */

undefined ** FUN_1087ec7a8(void)

{
  return &PTR_DAT_110a72890;
}



/* Entry: 1087ec7b4; end: 1087eca23;  */

void FUN_1087ec7b4(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long extraout_x8;
  long lVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar7;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087ed9f4();
  plVar5 = param_1;
  func_0x0001087ed8e4(FUN_1087ecd40);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10 != 0);
  }
  lVar6 = *unaff_x23;
  param_1[8] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087ed968();
  func_0x0001087ed9d0();
  func_0x0001087eda90();
  func_0x0001087ed9e4();
  do {
    func_0x0001087ed770();
  } while (extraout_w10_01 != 0);
  func_0x0001087ed868();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087ed858();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087edbf0();
    plVar7 = extraout_x8_00;
    do {
      if (*plVar7 == 0) {
        func_0x0001087ed80c();
        plVar7 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x0001087ed998();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)in_ZR) {
          func_0x0001087ed81c();
          uVar4 = extraout_w8;
          if ((bool)in_CY) {
            uVar4 = extraout_w9;
          }
          func_0x0001087ed900();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087ed7c0(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087ed8a8();
        *(long *)(extraout_x8_06 + 0x20) = lVar6;
        goto LAB_1087ec96c;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087eda78();
  unaff_x22 = *plVar5;
  func_0x0001087ed8cc();
  func_0x0001087ed8f8();
  uVar3 = unaff_x22 != 0;
  uVar4 = unaff_x22 == 1;
  if ((bool)uVar4) {
    func_0x0001087ed954(param_1[8]);
    if ((extraout_w8_03 >> 5 & 1) == 0) {
      func_0x0001087eda68();
      FUN_1087c26bc();
      func_0x0001087edbb4();
      ___cxa_throw(plVar5);
    }
    else {
      func_0x0001087ed878();
      func_0x0001087eda88();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087ec9bc);
    (*pcVar2)();
  }
  func_0x0001087eda1c(*unaff_x20);
  do {
    func_0x0001087ed770();
  } while (extraout_w10_04 != 0);
  func_0x0001087ed868();
  if ((extraout_w8_02 >> 1 & 1) == 0) {
    func_0x0001087edc44();
    func_0x0001087ed858();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087edbf0();
    plVar7 = extraout_x8_03;
    do {
      if (*plVar7 == 0) {
        func_0x0001087ed80c();
        plVar7 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar8 = extraout_w11_02;
      }
      else {
        func_0x0001087ed998();
        plVar7 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar8 = extraout_w11_01;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)uVar4) {
          func_0x0001087ed81c();
          uVar4 = extraout_w8_00;
          if ((bool)uVar3) {
            uVar4 = extraout_w9_00;
          }
          func_0x0001087ed780();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087ed7c0(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087ed8a8();
        *(long *)(extraout_x8_07 + 0x20) = lVar6;
LAB_1087ec96c:
        func_0x0001087ed888(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087ed9dc();
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8c4();
  func_0x0001087ed8d4();
  func_0x0001087ed8dc();
  func_0x0001087ed960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087eca24; end: 1087ecacf;  */

void FUN_1087eca24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c28874(&uStack_48);
  func_0x000107c28878(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000107c28888(lStack_38 + 0x18,uVar1);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0,param_2,param_3);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_50);
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087ecad0; end: 1087ecd3f;  */

void FUN_1087ecad0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long extraout_x8;
  long lVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar7;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087ed9f4();
  plVar5 = param_1;
  func_0x0001087ed8e4(FUN_1087ecfa4);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10 != 0);
  }
  lVar6 = *unaff_x23;
  param_1[8] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x0001087ed770();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087ed968();
  func_0x0001087ed9d0();
  func_0x0001087eda90();
  func_0x0001087ed9e4();
  do {
    func_0x0001087ed770();
  } while (extraout_w10_01 != 0);
  func_0x0001087ed868();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087ed858();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087edbf0();
    plVar7 = extraout_x8_00;
    do {
      if (*plVar7 == 0) {
        func_0x0001087ed80c();
        plVar7 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x0001087ed998();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)in_ZR) {
          func_0x0001087ed81c();
          uVar4 = extraout_w8;
          if ((bool)in_CY) {
            uVar4 = extraout_w9;
          }
          func_0x0001087ed900();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087ed7c0(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087ed8a8();
        *(long *)(extraout_x8_06 + 0x20) = lVar6;
        goto LAB_1087ecc88;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087eda78();
  unaff_x22 = *plVar5;
  func_0x0001087ed8cc();
  func_0x0001087ed8f8();
  uVar3 = unaff_x22 != 0;
  uVar4 = unaff_x22 == 1;
  if ((bool)uVar4) {
    func_0x0001087ed954(param_1[8]);
    if ((extraout_w8_03 >> 5 & 1) == 0) {
      func_0x0001087eda68();
      FUN_1087aead8();
      func_0x0001087edc30();
      ___cxa_throw(plVar5);
    }
    else {
      func_0x0001087ed878();
      func_0x0001087eda88();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087eccd8);
    (*pcVar2)();
  }
  func_0x0001087eda1c(*unaff_x20);
  do {
    func_0x0001087ed770();
  } while (extraout_w10_04 != 0);
  func_0x0001087ed868();
  if ((extraout_w8_02 >> 1 & 1) == 0) {
    func_0x0001087edc44();
    func_0x0001087ed858();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087edbf0();
    plVar7 = extraout_x8_03;
    do {
      if (*plVar7 == 0) {
        func_0x0001087ed80c();
        plVar7 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar8 = extraout_w11_02;
      }
      else {
        func_0x0001087ed998();
        plVar7 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar8 = extraout_w11_01;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)uVar4) {
          func_0x0001087ed81c();
          uVar4 = extraout_w8_00;
          if ((bool)uVar3) {
            uVar4 = extraout_w9_00;
          }
          func_0x0001087ed780();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087ed7c0(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087ed8a8();
        *(long *)(extraout_x8_07 + 0x20) = lVar6;
LAB_1087ecc88:
        func_0x0001087ed888(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087ed9dc();
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8c4();
  func_0x0001087ed8d4();
  func_0x0001087ed8dc();
  func_0x0001087ed960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ecd40; end: 1087eceab;  */

void FUN_1087ecd40(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087eda78();
    lVar6 = *plVar4;
    func_0x0001087ed8cc();
    func_0x0001087ed8f8();
    uVar3 = lVar6 == 1;
    if ((bool)uVar3) {
      func_0x0001087ed954(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087eda68();
        FUN_1087c26bc();
        func_0x0001087edbb4();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087ed878();
        func_0x0001087eda88();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087ece5c);
      (*pcVar2)();
    }
    func_0x0001087eda1c(param_1[7]);
    do {
      func_0x0001087ed770();
    } while (extraout_w10 != 0);
    func_0x0001087ed868();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087edc44();
      func_0x0001087ed790();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087edc10();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x0001087ed80c();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087ed998();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087ed9bc();
          if ((bool)uVar3) {
            func_0x0001087ed81c();
            func_0x0001087ed780();
            func_0x0001087ed7d4();
            func_0x0001087edaf4();
          }
          func_0x0001087ed82c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087ed9dc();
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8c4();
  func_0x0001087ed8d4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087eceac; end: 1087ecef3;  */

void FUN_1087eceac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087ed8c4();
  func_0x0001087ed8d4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ecef4; end: 1087ecf6b;  */

void FUN_1087ecef4(long param_1)

{
  FUN_1087bce84(param_1 + 0x48);
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8f8();
  func_0x0001087ed8d4();
  func_0x0001087ed944();
  func_0x0001087ed94c();
  func_0x0001087ed8c4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ecf6c; end: 1087ecfa3;  */

void FUN_1087ecf6c(void)

{
  func_0x0001087edb88();
  func_0x0001087ed8f8();
  func_0x0001087ed8d4();
  func_0x0001087ed944();
  func_0x0001087ed94c();
  func_0x0001087ed8c4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ecfa4; end: 1087ed10f;  */

void FUN_1087ecfa4(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087eda78();
    lVar6 = *plVar4;
    func_0x0001087ed8cc();
    func_0x0001087ed8f8();
    uVar3 = lVar6 == 1;
    if ((bool)uVar3) {
      func_0x0001087ed954(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087eda68();
        FUN_1087aead8();
        func_0x0001087edc30();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087ed878();
        func_0x0001087eda88();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087ed0c0);
      (*pcVar2)();
    }
    func_0x0001087eda1c(param_1[7]);
    do {
      func_0x0001087ed770();
    } while (extraout_w10 != 0);
    func_0x0001087ed868();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087edc44();
      func_0x0001087ed790();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087edc10();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x0001087ed80c();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x0001087ed998();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087ed9bc();
          if ((bool)uVar3) {
            func_0x0001087ed81c();
            func_0x0001087ed780();
            func_0x0001087ed7d4();
            func_0x0001087edaf4();
          }
          func_0x0001087ed82c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087ed9dc();
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8c4();
  func_0x0001087ed8d4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ed110; end: 1087ed157;  */

void FUN_1087ed110(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087ed8c4();
  func_0x0001087ed8d4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ed158; end: 1087ed1cf;  */

void FUN_1087ed158(long param_1)

{
  FUN_1087bce84(param_1 + 0x48);
  func_0x0001087ed988();
  func_0x0001087ed8cc();
  func_0x0001087ed8f8();
  func_0x0001087ed8d4();
  func_0x0001087ed944();
  func_0x0001087ed94c();
  func_0x0001087ed8c4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ed1d0; end: 1087ed207;  */

void FUN_1087ed1d0(void)

{
  func_0x0001087edb88();
  func_0x0001087ed8f8();
  func_0x0001087ed8d4();
  func_0x0001087ed944();
  func_0x0001087ed94c();
  func_0x0001087ed8c4();
  func_0x0001087ed8dc();
  func_0x0001087ed990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ed208; end: 1087ed6eb;  */

void FUN_1087ed208(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  int *piVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *plVar14;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_78;
  
  lVar17 = param_1;
  func_0x0001087edbfc();
  piVar1 = (int *)(lVar17 + 0x308);
  plVar11 = (long *)(lVar17 + 0x3a0);
  plVar10 = (long *)(lVar17 + 0x3b0);
  if ((*(byte *)(lVar17 + 0x3d8) & 1) == 0) {
    piVar7 = piVar1;
    FUN_10866b034(piVar1);
    FUN_10866e480(param_1 + 0x1f8,piVar7);
    func_0x0001087edab0();
    func_0x0001087edb40();
    lVar8 = 0x48;
    __Znwm();
    plVar18 = (long *)(lVar8 + 8);
    *plVar18 = 0;
    func_0x0001087edbdc();
    func_0x0001087edb68();
    func_0x0001087edbc8();
    FUN_1087bd5d8(lVar8 + 0x20);
    plVar14 = (long *)(param_1 + 0x390);
    lVar16 = *(long *)(param_1 + 0x3c0);
    func_0x0001087ed910();
    *(ulong *)(param_1 + 0x360) = lVar8 + 0x18U;
    *(long *)(param_1 + 0x368) = lVar8;
    plVar9 = *(long **)(lVar16 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x2b0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uStack_e0 = &PTR_SUB_110a72830;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    puStack_c8 = &uStack_e0;
    uStack_d8 = lVar8 + 0x18U;
    lStack_d0 = lVar8;
    func_0x0001087edb9c(*(undefined8 *)(*plVar9 + 0x30),plVar9,uVar12,param_1 + 0x20,&uStack_e0);
    func_0x00010865f8f8(&uStack_e0);
    FUN_1087ec640((undefined8 *)(param_1 + 0x370));
    lVar8 = *(long *)(lVar8 + 0x20);
    *(long *)(lVar17 + 0x380) = lVar8;
    if (lVar8 == 0) {
      *plVar14 = 0;
    }
    else {
      do {
        func_0x0001087ed770();
      } while (extraout_w10 != 0);
      lVar8 = *(long *)(lVar17 + 0x380);
      *plVar14 = lVar8;
      if (lVar8 != 0) {
        do {
          func_0x0001087ed770();
        } while (extraout_w10_00 != 0);
      }
    }
    func_0x0001087edab8();
    func_0x000107c314e0(param_1 + 0x398);
    FUN_1087ec0cc((long *)(lVar17 + 0x388),plVar14,param_1 + 0x398);
    func_0x0001087edaa0();
    func_0x0001087edb94();
    lVar8 = *(long *)(lVar17 + 0x388);
    *plVar10 = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x0001087ed770();
      } while (extraout_w10_01 != 0);
    }
    lVar8 = **(long **)(param_1 + 0x3d0);
    *(long *)(param_1 + 0x3b8) = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x0001087ed770();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c278b8(param_1 + 0x348,&UNK_10f4bbbea);
    puVar13 = (undefined8 *)(param_1 + 0x3b8);
    FUN_1087ec2b0((long *)(lVar17 + 0x3a8),plVar10,puVar13,param_1 + 0x348);
    *plVar11 = *(long *)(lVar17 + 0x3a8);
    do {
      func_0x0001087ed770();
    } while (extraout_w10_03 != 0);
    func_0x0001087ed954(*plVar11);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(lVar17 + 0x3d8) = 1;
      lVar17 = *plVar11;
      func_0x0001087ed790();
      lVar8 = *plVar10;
      if (lVar8 == 0) {
        func_0x000107c3a5c0();
        lVar8 = *plVar10;
      }
      plVar14 = (long *)(lVar17 + 0x10);
      do {
        if (*plVar14 == 0) {
          func_0x0001087ed80c();
          plVar14 = extraout_x8_00;
          uVar6 = extraout_w10_05;
          uVar15 = extraout_w11_00;
        }
        else {
          func_0x0001087ed998();
          plVar14 = extraout_x8;
          uVar6 = extraout_w10_04;
          uVar15 = extraout_w11;
        }
        if ((uVar15 & 1) != 0) {
          func_0x0001087ed898();
          if ((bool)in_ZR) {
            func_0x0001087ed81c();
            uVar2 = extraout_w8;
            if ((bool)in_CY) {
              uVar2 = extraout_w9;
            }
            func_0x0001087ed900();
            *(undefined1 *)plVar10 = uVar2;
            func_0x0001087ed7c0(0);
            *(long **)(lVar17 + 0x90) = plVar10;
          }
          func_0x0001087ed8a8();
          *(long *)(extraout_x8_01 + 0x20) = lVar8;
          func_0x0001087ed888(*(undefined8 *)(lVar17 + 0x90));
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_1087ed520;
        }
      } while ((uVar6 >> 1 & 1) == 0);
    }
  }
  FUN_1087bce84(plVar11);
  FUN_1087bda64(piVar1,plVar11);
  func_0x0001087edb24();
  func_0x0001087edb60();
  func_0x0001087edb38();
  func_0x0001087eda40();
  func_0x0001087ed960();
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    FUN_10885edd8(&uStack_e0,*(undefined8 *)(*(long *)(param_1 + 0x3c0) + 0x20),
                  *(long *)(param_1 + 0x3c8) + 0x40);
    FUN_108663a10(auStack_118,&uStack_e0);
    FUN_1086568ac(param_1 + 0x298,auStack_118);
    FUN_1086569a0(auStack_118);
    FUN_108656820(&uStack_e0);
    in_ZR = *(char *)(param_1 + 0x2c8) == '\x01';
    if ((!(bool)in_ZR) || ((*(byte *)(param_1 + 0x2c4) & 1) != 0)) {
      uStack_e0 = (undefined **)0x700000008;
      goto LAB_1087ed4c4;
    }
    iVar3 = *piVar1;
  }
  uStack_e0 = (undefined **)CONCAT44(iVar3,8);
LAB_1087ed4c4:
  uStack_d8 = uStack_d8 & 0xffffffffffffff00;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  puVar13 = &uStack_e0;
  FUN_1087e46f8(param_1 + 0x10);
  func_0x0001087e49c4(&uStack_e0);
  func_0x0001087eda70();
  func_0x0001087edb58();
  func_0x000107c27f9c();
  func_0x0001087eda30();
  func_0x0001087eda38();
  func_0x0001087eda48();
  func_0x0001087eda58();
  func_0x0001087eda50();
  func_0x0001087eda28();
  while( true ) {
    func_0x0001087ed8c4();
    func_0x0001087ed9a4();
LAB_1087ed520:
    func_0x0001087edb04();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar13 != 0) goto LAB_1087ed5ac;
    do {
      func_0x0001087ed9ac();
LAB_1087ed5ac:
      func_0x000104bd46a0();
    } while ((int)puVar13 == 0);
    FUN_108656820(&uStack_e0);
    func_0x0001087eda70();
    func_0x0001087edb94();
    func_0x000107c27f9c();
    func_0x0001087eda30();
    func_0x0001087eda38();
    func_0x0001087eda48();
    func_0x0001087eda58();
    func_0x0001087eda50();
    func_0x0001087eda28();
    func_0x0001087eda0c();
    func_0x0001087ed93c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087ed6ec; end: 1087ed76f;  */

void FUN_1087ed6ec(long param_1)

{
  if (*(char *)(param_1 + 0x3d8) == '\x01') {
    func_0x000107c27f9c(param_1 + 0x3a0);
    func_0x000107c27f9c(param_1 + 0x3a8);
    func_0x0001087edb38();
    func_0x0001087eda40();
    func_0x000107c27f9c(param_1 + 0x3b0);
    func_0x000107c27f9c(param_1 + 0x388);
    func_0x000107c27f9c(param_1 + 0x380);
    func_0x0001087eda30();
    func_0x0001087eda38();
  }
  else {
    func_0x000107c27f9c(param_1 + 0x308);
    func_0x0001087edb40();
  }
  func_0x0001087eda48();
  func_0x0001087eda58();
  func_0x0001087eda50();
  func_0x0001087eda28();
  func_0x0001087ed8c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ed770; end: 1087edc4f;  */

void FUN_1087ed770(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087edc50; end: 1087edd27;  */

undefined8 *
FUN_1087edc50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 9;
  *param_1 = &PTR_FUN_110a728b0;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  param_1[8] = param_5;
  uVar1 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  FUN_1087bc1b8(param_1 + 0xd,param_8);
  return param_1;
}



/* Entry: 1087edd28; end: 1087ee4db;  */

/* WARNING: Removing unreachable block (ram,0x0001087ee1c8) */

void FUN_1087edd28(undefined **param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long *plVar15;
  uint uVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar20;
  undefined **ppuStack_120;
  long alStack_118 [2];
  undefined8 *puStack_108;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)0x370;
  plVar15 = param_3;
  __Znwm();
  *puVar12 = FUN_1087ee714;
  puVar12[1] = FUN_1087ee8d4;
  puVar12[0x6c] = param_3;
  puVar12[0x6b] = param_2;
  func_0x0001087e472c(puVar12 + 2);
  ppuVar14 = (undefined **)(puVar12 + 2);
  FUN_1087e46b4(param_1,ppuVar14);
  uVar16 = *(uint *)(param_3 + 0x14);
  uVar11 = uVar16 == 0x20;
  if ((uVar16 < 0x21) &&
     (uVar11 = (1L << ((ulong)uVar16 & 0x3f) & 0x100100800U) == 0, !(bool)uVar11)) {
    uStack_e0 = (undefined **)0x9;
    FUN_1087ee928();
    func_0x0001087ee9a8();
    goto LAB_1087ede80;
  }
  plVar15 = param_3 + 8;
  FUN_10885edd8(&uStack_e0,*(undefined8 *)(param_2 + 0x20));
  ppuVar14 = (undefined **)&uStack_e0;
  FUN_108663a10(puVar12 + 0x3f,ppuVar14);
  func_0x0001087ee9a0();
  if ((*(byte *)(puVar12 + 0x45) & 1) == 0) {
LAB_1087ede68:
    uStack_e0 = (undefined **)0x700000009;
LAB_1087ede70:
    FUN_1087ee928();
    func_0x0001087ee9a8();
  }
  else {
    uVar11 = *(char *)((long)puVar12 + 0x224) == '\x01';
    if (((bool)uVar11) && (*(int *)(puVar12 + 0x44) == 0)) {
      func_0x0001087ee95c();
      puVar13 = &uStack_e0;
      FUN_1086b8004(puVar13,0x4901ba);
      func_0x0001087ee9e4();
      func_0x0001087ee9d8();
      func_0x000107c2884c(puVar12 + 0x4d,puVar13);
      plVar15 = puVar12 + 0x4d;
      (**(code **)(*param_3 + 0x50))(param_3);
      ppuVar14 = (undefined **)(puVar12 + 0x4d);
      func_0x000107c2882c(ppuVar14);
      func_0x0001087ee9d0();
      goto LAB_1087ede68;
    }
    if ((*(char *)((long)puVar12 + 0x224) != '\0') &&
       (uVar11 = false, *(int *)(puVar12 + 0x44) == 1)) {
      uVar11 = (int)param_3[0x14] == 0x19;
      if (!(bool)uVar11) {
        func_0x0001087ee95c();
        puVar13 = &uStack_e0;
        FUN_1086b8004(puVar13,0x4901bb);
        func_0x0001087ee9e4();
        func_0x0001087ee9d8();
        func_0x000107c2884c(puVar12 + 0x52,puVar13);
        plVar15 = puVar12 + 0x52;
        (**(code **)(*param_3 + 0x50))(param_3);
        ppuVar14 = (undefined **)(puVar12 + 0x52);
        func_0x000107c2882c(ppuVar14);
        func_0x0001087ee9d0();
      }
      uStack_e0 = (undefined **)0x9;
      goto LAB_1087ede70;
    }
    ppuVar14 = *(undefined ***)(param_2 + 0x20);
    plVar15 = puVar12 + 0x3f;
    func_0x000107c29f64(puVar12 + 4,ppuVar14,plVar15,0);
    if ((*(byte *)(puVar12 + 0x3e) & 1) == 0) {
LAB_1087edf78:
      *(undefined1 *)(puVar12 + 0x46) = 0;
      *(undefined1 *)(puVar12 + 0x4c) = 0;
      FUN_1087ec008(puVar12 + 0x46,*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x94),
                    (int)param_3[0x28]);
      func_0x0001087c0428(alStack_118,1);
      puVar13 = puStack_108;
      puStack_108[2] = 0;
      *puStack_108 = &PTR_FUN_110a71160;
      puStack_108[1] = 0;
      func_0x000107c27994(&uStack_e0,puVar12 + 0x3f);
      FUN_1087c0490(puVar13 + 3,&uStack_e0);
      func_0x000107c27914(&uStack_e0);
      puVar13 = puStack_108;
      puStack_108 = (undefined8 *)0x0;
      puVar12[0x5f] = puVar13 + 3;
      puVar12[0x60] = puVar13;
      FUN_1087c0508(alStack_118);
      plVar15 = *(long **)(param_2 + 0x48);
      uStack_d8 = puVar12[0x5f];
      puVar12[0x61] = uStack_d8;
      lVar19 = puVar12[0x60];
      puVar12[0x62] = lVar19;
      uStack_d0 = 0;
      if (lVar19 != 0) {
        plVar1 = (long *)(lVar19 + 8);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = *plVar1 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        uStack_d0 = puVar12[0x62];
      }
      ppuStack_120 = (undefined **)(puVar12 + 0x5f);
      uStack_e0 = &PTR_SUB_110a728f0;
      puVar12[0x61] = 0;
      puVar12[0x62] = 0;
      puStack_c8 = &uStack_e0;
      (**(code **)(*plVar15 + 0x18))(plVar15,0x120099,puVar12 + 0x3f,&uStack_e0,puVar12 + 0x46);
      param_1 = (undefined **)(puVar12 + 99);
      puVar13 = puVar12 + 0x65;
      FUN_1086d1cac(&uStack_e0);
      FUN_1087c0518(puVar12 + 0x61);
      puVar17 = *(undefined **)*ppuStack_120;
      *param_1 = puVar17;
      if (puVar17 == (undefined *)0x0) {
        *puVar13 = 0;
      }
      else {
        do {
          func_0x0001087ee94c();
        } while (extraout_w10 != 0);
        *puVar13 = *param_1;
        if (*param_1 != (undefined *)0x0) {
          do {
            func_0x0001087ee94c();
          } while (extraout_w10_00 != 0);
        }
      }
      func_0x000107c314e0(puVar12 + 0x66,*(undefined8 *)(param_2 + 0x30),
                          *(long *)(param_2 + 0x40) * 1000000);
      plVar1 = puVar12 + 100;
      FUN_1087ec0cc(plVar1,puVar13,puVar12 + 0x66);
      plVar2 = puVar12 + 0x69;
      plVar3 = puVar12 + 0x6a;
      func_0x000107c27f9c(puVar12 + 0x66);
      func_0x0001087ee9c8();
      *plVar2 = *plVar1;
      if (*plVar1 != 0) {
        do {
          func_0x0001087ee94c();
        } while (extraout_w10_01 != 0);
      }
      lVar19 = *param_4;
      *plVar3 = lVar19;
      if (lVar19 != 0) {
        do {
          func_0x0001087ee94c();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c278b8(puVar12 + 0x5c,&UNK_10f4bbc07);
      plVar15 = plVar3;
      FUN_1087ec2b0(puVar12 + 0x68,plVar2,plVar3,puVar12 + 0x5c);
      piVar4 = (int *)(puVar12 + 0x57);
      plVar5 = puVar12 + 0x67;
      *plVar5 = puVar12[0x68];
      do {
        func_0x0001087ee94c();
      } while (extraout_w10_03 != 0);
      if (((uint)*(undefined8 *)(*plVar5 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar12 + 0x6d) = 0;
        lVar19 = puVar12[0x67];
        ppuVar14 = &PTR___tlv_bootstrap_11340e278;
        (*(code *)PTR___tlv_bootstrap_11340e278)();
        puVar17 = *ppuVar14;
        if (puVar17 == (undefined *)0x0) {
          func_0x000107c3a5c0();
          puVar17 = *ppuVar14;
        }
        plVar6 = (long *)(lVar19 + 0x10);
        do {
          lVar20 = *plVar6;
          if (lVar20 == 0) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar10) {
              *plVar6 = 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            uVar11 = cVar9 == '\0';
            if ((bool)uVar11) {
              param_1 = *(undefined ***)(lVar19 + 0x90);
              bVar8 = *(byte *)((long)param_1 + 1);
              uVar18 = (ulong)bVar8;
              uVar11 = 0;
              if (bVar8 == *(byte *)param_1) {
                uVar16 = (uint)bVar8 << 1;
                uVar11 = bVar8 == 0x40;
                if (0x7f < uVar16) {
                  uVar16 = 0x80;
                }
                ppuVar14 = (undefined **)(ulong)(uVar16 * 0x18 + 0x10);
                _malloc();
                uVar18 = 0;
                *(char *)ppuVar14 = (char)uVar16;
                *(undefined1 *)((long)ppuVar14 + 1) = 0;
                ppuVar14[1] = (undefined *)0x0;
                param_1[1] = (undefined *)ppuVar14;
                *(undefined ***)(lVar19 + 0x90) = ppuVar14;
                param_1 = ppuVar14;
              }
              param_1[uVar18 * 3 + 2] = (undefined *)0x0;
              param_1[uVar18 * 3 + 3] = (undefined *)puVar12;
              param_1[uVar18 * 3 + 4] = puVar17;
              *(char *)(*(long *)(lVar19 + 0x90) + 1) =
                   *(char *)(*(long *)(lVar19 + 0x90) + 1) + '\x01';
              *(undefined8 *)(lVar19 + 0x10) = 0;
              goto LAB_1087ede88;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar20 >> 1 & 1) == 0);
      }
      plVar15 = plVar5;
      FUN_1087bce84();
      FUN_1087bda64(piVar4);
      func_0x000107c27f9c(plVar5);
      func_0x0001087ee9c8();
      func_0x0001087ee988();
      func_0x000107c27f9c(plVar3);
      func_0x000107c27f9c(plVar2);
      iVar7 = *piVar4;
      if (iVar7 == 0) {
        FUN_10885edd8(&uStack_e0,*(undefined8 *)(puVar12[0x6b] + 0x20),puVar12[0x6c] + 0x40);
        FUN_108663a10(alStack_118,&uStack_e0);
        plVar15 = alStack_118;
        FUN_1086568ac(puVar12 + 0x3f);
        FUN_1086569a0(alStack_118);
        func_0x0001087ee9a0();
        uVar11 = *(char *)(puVar12 + 0x45) == '\x01';
        if (((bool)uVar11) && ((*(byte *)((long)puVar12 + 0x224) & 1) == 0)) {
          iVar7 = *piVar4;
          goto LAB_1087ee274;
        }
        uStack_e0 = (undefined **)0x700000009;
      }
      else {
LAB_1087ee274:
        uStack_e0 = (undefined **)CONCAT44(iVar7,9);
      }
      FUN_1087ee928();
      func_0x0001087ee9a8();
      func_0x0001087ee9c0();
      func_0x000107c27f9c(plVar1);
      func_0x000107c27f9c(param_1);
      ppuVar14 = ppuStack_120;
      FUN_1087c0518(ppuStack_120);
      func_0x0001087ee980();
    }
    else {
      uVar11 = *(char *)(puVar12 + 0x32) == '\x01';
      if ((bool)uVar11) {
        uStack_e0 = (undefined **)0x700000009;
      }
      else {
        uVar11 = puVar12[0x2f] == 1;
        if ((long)puVar12[0x2f] < 1) goto LAB_1087edf78;
        uStack_e0 = (undefined **)0x9;
      }
      FUN_1087ee928();
      func_0x0001087ee9a8();
    }
    func_0x0001087ee998();
  }
  func_0x0001087ee990();
LAB_1087ede80:
  while( true ) {
    func_0x0001087ee9b8();
    func_0x0001087eea20();
LAB_1087ede88:
    func_0x0001087eea28(uStack_70);
    if ((bool)uVar11) break;
    ___stack_chk_fail();
    if ((int)plVar15 != 0) goto LAB_1087ee34c;
    do {
      __Unwind_Resume(ppuVar14);
LAB_1087ee34c:
      func_0x000104bd46a0();
    } while ((int)plVar15 == 0);
    func_0x0001087ee9a0();
    func_0x0001087ee9c0();
    func_0x0001087ee9c8();
    func_0x000107c27f9c(param_1);
    FUN_1087c0518(ppuStack_120);
    func_0x0001087ee980();
    func_0x0001087ee998();
    func_0x0001087ee990();
    ___cxa_begin_catch(ppuVar14);
    ppuVar14 = (undefined **)(puVar12 + 2);
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087ee4dc; end: 1087ee4df;  */

undefined8 * FUN_1087ee4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a728b0;
  func_0x000107c30608(param_1 + 0xd);
  func_0x000107c288a4(param_1 + 0xb);
  func_0x000107c28abc(param_1 + 9);
  func_0x000107c28868(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087ee4e0; end: 1087ee4f3;  */

void FUN_1087ee4e0(void)

{
  FUN_1087ee4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ee4f4; end: 1087ee57b;  */

undefined8 * FUN_1087ee4f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a728b0;
  func_0x000107c30608(param_1 + 0xd);
  func_0x000107c288a4(param_1 + 0xb);
  func_0x000107c28abc(param_1 + 9);
  func_0x000107c28868(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087ee57c; end: 1087ee58f;  */

void FUN_1087ee57c(void)

{
  func_0x0001087ee550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ee590; end: 1087ee5df;  */

void FUN_1087ee590(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  *puVar4 = &PTR_SUB_110a728f0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
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
  return;
}



/* Entry: 1087ee5e0; end: 1087ee62f;  */

void FUN_1087ee5e0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_110a728f0;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  return;
}



/* Entry: 1087ee630; end: 1087ee6cf;  */

void FUN_1087ee630(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  undefined1 uStack_24;
  
  uVar1 = param_2 + 0x18;
  FUN_1086d5eb4();
  lVar2 = *(long *)(param_1 + 8);
  if ((uVar1 >> 0x20 & 1) == 0) {
    auStack_48[0] = 0;
  }
  else if ((uint)uVar1 < 0xd) {
    auStack_48[0] = *(undefined4 *)(&UNK_10df59ec4 + (uVar1 & 0xf) * 4);
  }
  else {
    auStack_48[0] = 7;
  }
  func_0x000107c27994(auStack_40,lVar2 + 0x10);
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1087bd9bc(lVar2 + 8,auStack_48);
  func_0x000107c27914(auStack_40);
  return;
}



/* Entry: 1087ee6d0; end: 1087ee707;  */

long FUN_1087ee6d0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a72950);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087ee708; end: 1087ee713;  */

undefined ** FUN_1087ee708(void)

{
  return &PTR_DAT_110a72950;
}



/* Entry: 1087ee714; end: 1087ee8d3;  */

void FUN_1087ee714(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x338;
  FUN_1087bce84(lVar3);
  piVar1 = (int *)(param_1 + 0x2b8);
  FUN_1087bda64(piVar1,lVar3);
  func_0x000107c27f9c(param_1 + 0x338);
  func_0x0001087eea18();
  func_0x0001087ee988();
  func_0x0001087eea10();
  func_0x0001087eea08();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    FUN_10885edd8(&uStack_98,*(undefined8 *)(*(long *)(param_1 + 0x358) + 0x20),
                  *(long *)(param_1 + 0x360) + 0x40);
    FUN_108663a10(auStack_d0,&uStack_98);
    FUN_1086568ac(param_1 + 0x1f8,auStack_d0);
    FUN_1086569a0(auStack_d0);
    FUN_108656820(&uStack_98);
    in_ZR = *(char *)(param_1 + 0x228) == '\x01';
    if ((!(bool)in_ZR) || ((*(byte *)(param_1 + 0x224) & 1) != 0)) {
      uStack_98 = 0x700000009;
      goto LAB_1087ee7d0;
    }
    iVar2 = *piVar1;
  }
  uStack_98 = CONCAT44(iVar2,9);
LAB_1087ee7d0:
  uStack_90 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  puVar5 = &uStack_98;
  FUN_1087e46f8(param_1 + 0x10);
  puVar4 = &uStack_98;
  func_0x0001087e49c4();
  func_0x0001087ee9c0();
  func_0x0001087eea00();
  func_0x0001087ee9f8();
  func_0x0001087ee9f0();
  func_0x0001087ee980();
  func_0x0001087ee998();
  func_0x0001087ee990();
  while( true ) {
    func_0x0001087ee9b8();
    func_0x0001087eea20();
    func_0x0001087eea28(uStack_28);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar5 == 0) break;
    FUN_108656820(&uStack_98);
    func_0x0001087ee9c0();
    func_0x0001087eea00();
    func_0x0001087ee9f8();
    func_0x0001087ee9f0();
    func_0x0001087ee980();
    func_0x0001087ee998();
    func_0x0001087ee990();
    ___cxa_begin_catch(puVar4);
    puVar4 = (undefined8 *)(param_1 + 0x10);
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  __Unwind_Resume(puVar4);
  func_0x000107c27f9c(puVar4 + 0x67);
  func_0x0001087eea18();
  func_0x0001087ee988();
  func_0x0001087eea10();
  func_0x0001087eea08();
  func_0x0001087eea00();
  func_0x0001087ee9f8();
  func_0x0001087ee9f0();
  func_0x0001087ee980();
  func_0x0001087ee998();
  func_0x0001087ee990();
  func_0x0001087ee9b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 1087ee8d4; end: 1087ee927;  */

void FUN_1087ee8d4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x338);
  func_0x0001087eea18();
  func_0x0001087ee988();
  func_0x0001087eea10();
  func_0x0001087eea08();
  func_0x0001087eea00();
  func_0x0001087ee9f8();
  func_0x0001087ee9f0();
  func_0x0001087ee980();
  func_0x0001087ee998();
  func_0x0001087ee990();
  func_0x0001087ee9b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ee928; end: 1087eea3b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087ee928(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined1 uStack0000000000000048;
  undefined1 uStack0000000000000080;
  undefined1 uStack0000000000000088;
  undefined1 uStack000000000000008c;
  undefined1 uStack0000000000000090;
  undefined1 uStack00000000000000a8;
  
  uStack0000000000000048 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_1087e4844(*puVar5,puVar5,&stack0x00000040);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087eea3c; end: 1087eeb57;  */

undefined8 *
FUN_1087eea3c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 10;
  *param_1 = &PTR_FUN_110a72970;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087efed0();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087efed0();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087efed0();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087efed0();
    } while (extraout_w10_02 != 0);
  }
  FUN_1087bc1b8(param_1 + 10,param_7);
  lVar1 = param_8[1];
  uVar2 = *param_8;
  param_1[0x12] = param_8[1];
  param_1[0x11] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087efed0();
    } while (extraout_w10_03 != 0);
  }
  return param_1;
}



/* Entry: 1087eeb58; end: 1087ef1ff;  */

void FUN_1087eeb58(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  int extraout_w8;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_58;
  
  plVar12 = &lStack_f0;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)0x458;
  plVar19 = param_3;
  __Znwm();
  *puVar10 = FUN_1087efb84;
  puVar10[1] = FUN_1087efdf4;
  puVar10[0x89] = param_3;
  puVar10[0x88] = param_2;
  func_0x0001087e472c(puVar10 + 2);
  plVar11 = puVar10 + 2;
  FUN_1087e46b4(param_1,plVar11);
  uVar8 = (int)param_3[0x14] == 0x19;
  if ((bool)uVar8) {
    uStack_d0 = 10;
    FUN_1087efe48();
    func_0x0001087eff00();
    goto LAB_1087eeffc;
  }
  uVar18 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x000107c278b8(puVar10 + 0x7d,&UNK_10f4bb6b3);
  func_0x000107c31420(puVar10 + 0x58,uVar18,puVar10 + 0x7d);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x7d);
  plVar19 = param_3 + 8;
  FUN_10885edd8(&uStack_d0,*(undefined8 *)(param_2 + 0x20));
  FUN_108663a10(puVar10 + 0x68,&uStack_d0);
  plVar11 = &uStack_d0;
  FUN_108656820(plVar11);
  if ((*(byte *)(puVar10 + 0x6e) & 1) == 0) {
    uStack_d0 = 0x70000000a;
LAB_1087eec78:
    FUN_1087efe48();
    func_0x0001087eff00();
  }
  else {
    iVar5 = *(int *)(puVar10 + 0x6d);
    bVar9 = *(char *)((long)puVar10 + 0x36c) == '\x01';
    uVar7 = bVar9 && iVar5 != 0;
    uVar8 = bVar9 && iVar5 == 1;
    if (!bVar9 || iVar5 != 1) {
      uStack_d0 = 10;
      goto LAB_1087eec78;
    }
    plVar11 = *(long **)(param_2 + 0x20);
    plVar19 = puVar10 + 0x68;
    func_0x000107c29f64(puVar10 + 4,plVar11,plVar19,2);
    if ((*(byte *)(puVar10 + 0x3e) & 1) == 0) {
      uStack_d0 = 0x70000000a;
      FUN_1087efe48();
      func_0x0001087eff00();
    }
    else {
      plVar11 = *(long **)(param_2 + 0x40);
      (**(code **)(*plVar11 + 0x10))();
      puVar10[0x6b] = plVar11;
      *(undefined1 *)(puVar10 + 0x6c) = 1;
      puVar10[0x3b] = plVar11;
      *(undefined1 *)(puVar10 + 0x3c) = 1;
      FUN_10885fef4(*(undefined8 *)(param_2 + 0x20),puVar10 + 0x68);
      FUN_10885ff98(*(undefined8 *)(param_2 + 0x20),puVar10 + 4);
      func_0x000107c31428(puVar10 + 0x58);
      puVar10[0x4f] = 0;
      puVar10[0x4e] = &PTR_FUN_110a8ea18;
      *(undefined4 *)(puVar10 + 0x57) = 0;
      puVar10[0x51] = 0;
      puVar10[0x50] = 0;
      puVar10[0x53] = 0;
      puVar10[0x52] = 0;
      *(undefined8 *)((long)puVar10 + 0x2a1) = 0;
      *(undefined8 *)((long)puVar10 + 0x299) = 0;
      func_0x0001086d0f30(puVar10 + 0x4e);
      FUN_1086c77e0(puVar10 + 0x4e);
      func_0x0001088bf408();
      func_0x000107c29ee4(&uStack_d0,param_3 + 8);
      FUN_1086c1e2c(puVar10 + 0x4e);
      func_0x000107c287d0();
      func_0x000107c2a2e0(&uStack_d0);
      *(undefined1 *)(puVar10 + 0x6f) = 0;
      *(undefined1 *)(puVar10 + 0x75) = 0;
      FUN_1087ec008(puVar10 + 0x6f,*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x7c),
                    (int)param_3[0x28]);
      FUN_108848684(puVar10 + 0x80);
      (**(code **)(**(long **)(param_2 + 0x10) + 0x58))
                (puVar10 + 0x83,*(long **)(param_2 + 0x10),param_3 + 8,puVar10 + 0x80,puVar10 + 0x4e
                 ,puVar10 + 0x6f);
      plVar1 = puVar10 + 0x86;
      plVar2 = puVar10 + 0x87;
      lVar15 = puVar10[0x83];
      *plVar1 = lVar15;
      if (lVar15 != 0) {
        do {
          func_0x0001087efe6c();
        } while (extraout_w10 != 0);
      }
      lVar15 = *param_4;
      *plVar2 = lVar15;
      if (lVar15 != 0) {
        do {
          func_0x0001087efe6c();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c278b8(puVar10 + 0x76,&UNK_10f4bbc24);
      plVar3 = puVar10 + 0x85;
      plVar11 = plVar1;
      plVar19 = plVar2;
      FUN_1087ef200(plVar3,plVar1,plVar2,puVar10 + 0x76);
      plVar4 = puVar10 + 0x84;
      *plVar4 = *plVar3;
      do {
        func_0x0001087efe6c();
      } while (extraout_w10_01 != 0);
      if (((uint)*(undefined8 *)(*plVar4 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar10 + 0x8a) = 0;
        lVar15 = puVar10[0x84];
        func_0x0001087efe90();
        lVar20 = *plVar11;
        if (lVar20 == 0) {
          func_0x000107c3a5c0();
          lVar20 = *plVar11;
        }
        plVar16 = (long *)(lVar15 + 0x10);
        do {
          if (*plVar16 == 0) {
            func_0x0001087efeb8();
            plVar16 = extraout_x8_00;
            uVar6 = extraout_w10_03;
            uVar17 = extraout_w11_00;
          }
          else {
            func_0x0001087f0064();
            plVar16 = extraout_x8;
            uVar6 = extraout_w10_02;
            uVar17 = extraout_w11;
          }
          if ((uVar17 & 1) != 0) {
            func_0x0001087eff50();
            if ((bool)uVar8) {
              func_0x0001087efee0();
              iVar5 = extraout_w8;
              if ((bool)uVar7) {
                iVar5 = extraout_w9;
              }
              plVar11 = (long *)(ulong)(iVar5 * 0x18 + 0x10);
              _malloc();
              *(char *)plVar11 = (char)iVar5;
              func_0x0001087efe7c(0);
              *(long **)(lVar15 + 0x90) = plVar11;
            }
            func_0x0001087eff28();
            *(long *)(extraout_x8_01 + 0x20) = lVar20;
            func_0x0001087eff18(*(undefined8 *)(lVar15 + 0x90));
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto LAB_1087ef004;
          }
        } while ((uVar6 >> 1 & 1) == 0);
      }
      plVar11 = plVar4;
      FUN_1087c6770(plVar4);
      FUN_10877d4b8(puVar10 + 0x60,plVar11);
      func_0x000107c27f9c(plVar4);
      func_0x000107c27f9c(plVar3);
      func_0x0001087eff98();
      func_0x000107c27f9c(plVar2);
      func_0x000107c27f9c(plVar1);
      if (*(int *)(puVar10 + 0x67) == 0) {
        puVar13 = (uint *)(puVar10 + 0x60);
        func_0x0001087c6820();
        plVar11 = (long *)(ulong)*puVar13;
        lStack_f0 = 0;
        uStack_e8 = 0;
        FUN_108770a30();
        uStack_d0 = CONCAT44((int)plVar11,10);
        FUN_1087efe48();
        func_0x0001087eff00();
        func_0x0001087f0040();
      }
      else {
        plVar12 = puVar10 + 0x60;
        func_0x0001087c6838();
        plVar11 = puVar10 + 0x76;
        func_0x00010877d53c(plVar11);
        uVar8 = *(int *)(puVar10 + 0x7c) == 4;
        if ((bool)uVar8) {
          plVar11 = *(long **)(puVar10[0x88] + 0x30);
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          FUN_1086cf200(&uStack_d0);
          func_0x0001087f0048();
          FUN_10868cc20(puVar10 + 0x3f);
          func_0x0001087f00ec();
          func_0x0001087eff60(plVar11);
          func_0x0001087effe0();
          func_0x0001087f0010();
          uStack_d0 = 10;
        }
        else {
          uVar8 = *(int *)(puVar10 + 0x7c) == 3;
          if (((bool)uVar8) && ((*(byte *)(puVar10[0x7b] + 0x10) >> 2 & 1) != 0)) {
            plVar19 = *(long **)(puVar10[0x7b] + 0x28);
            plVar11 = *(long **)(puVar10[0x88] + 0x88);
            plVar12 = plVar19;
            (**(code **)(*plVar11 + 0x10))(plVar11,plVar19,3);
            uVar6 = *(uint *)(plVar19 + 7);
            uVar8 = uVar6 == 10;
            if (uVar6 < 0xb) {
              uVar14 = *(undefined4 *)(&UNK_10df59f28 + (ulong)uVar6 * 4);
            }
            else {
              uVar14 = 7;
            }
            uStack_d0 = CONCAT44(uVar14,10);
          }
          else {
            uStack_d0 = 0x70000000a;
          }
        }
        FUN_1087efe48();
        func_0x0001087eff00();
        func_0x0001087f0028();
      }
      func_0x0001087effc8();
      func_0x0001087eff78();
      func_0x0001087effb8();
      func_0x0001087effc0();
      func_0x0001087eff88();
      plVar19 = plVar12;
    }
    func_0x0001087effb0();
  }
  func_0x0001087effa0();
  func_0x0001087eff80();
LAB_1087eeffc:
  while( true ) {
    func_0x0001087efea0();
    func_0x0001087eff10();
LAB_1087ef004:
    func_0x0001087f00b0(uStack_58);
    if ((bool)uVar8) break;
    ___stack_chk_fail();
    if ((int)plVar19 == 0) {
      do {
        func_0x0001087f00a0();
        func_0x000104bd46a0(plVar11);
      } while ((int)plVar19 == 0);
      func_0x0001087f0040();
    }
    else {
      func_0x0001087f0028();
    }
    func_0x0001087effc8();
    func_0x0001087eff78();
    func_0x0001087effb8();
    func_0x0001087effc0();
    func_0x0001087eff88();
    func_0x0001087effb0();
    func_0x0001087effa0();
    func_0x0001087eff80();
    func_0x0001087f0098();
    func_0x0001087eff38();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087ef200; end: 1087ef403;  */

void FUN_1087ef200(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long lVar5;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  
  lVar3 = 0x70;
  __Znwm();
  func_0x0001087f00c4(FUN_1087efac8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10 != 0);
  }
  lVar5 = *param_3;
  *(long *)(lVar3 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087ef868(lVar3 + 0x10);
  FUN_1087ef47c(param_1,*(undefined8 *)(lVar3 + 0x10));
  lVar5 = *param_2;
  *(long *)(lVar3 + 0x58) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar3 + 0x60) = *(long *)(lVar3 + 0x40);
  if (*(long *)(lVar3 + 0x40) != 0) {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10_02 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar3 + 0x20,param_4);
  plVar4 = (long *)(lVar3 + 0x58);
  FUN_1087ef4f8(lVar3 + 0x50,plVar4,lVar3 + 0x60,lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x50);
  do {
    func_0x0001087efe6c();
  } while (extraout_w10_03 != 0);
  func_0x0001087eff40();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x68) = 0;
    lVar5 = *(long *)(lVar3 + 0x48);
    func_0x0001087efe90();
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar4;
    }
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      if (*plVar6 == 0) {
        func_0x0001087efeb8();
        plVar6 = extraout_x8_01;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087f0064();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_04;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087eff50();
        if ((bool)in_ZR) {
          func_0x0001087efee0();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087efea8();
          *(undefined1 *)plVar4 = uVar1;
          func_0x0001087efe7c(0);
          *(long **)(lVar5 + 0x90) = plVar4;
        }
        func_0x0001087eff28();
        *(long *)(extraout_x8_02 + 0x20) = lVar8;
        func_0x0001087eff18(*(undefined8 *)(lVar5 + 0x90));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087f0070();
  func_0x0001087f0020();
  func_0x0001087efec8();
  func_0x0001087eff08();
  func_0x0001087efef0();
  func_0x0001087eff90();
  func_0x0001087effa8();
  func_0x0001087efea0();
  func_0x0001087efef8();
  func_0x0001087eff78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 1087ef404; end: 1087ef407;  */

undefined8 * FUN_1087ef404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72970;
  func_0x000107c297ac(param_1 + 0x11);
  func_0x000107c30608(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c2917c(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087ef408; end: 1087ef41b;  */

void FUN_1087ef408(void)

{
  FUN_1087ef41c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ef41c; end: 1087ef47b;  */

undefined8 * FUN_1087ef41c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72970;
  func_0x000107c297ac(param_1 + 0x11);
  func_0x000107c30608(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c2917c(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087ef47c; end: 1087ef4c3;  */

void FUN_1087ef47c(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_18;
  
  lStack_18 = param_2;
  if (param_2 == 0) {
    lStack_18 = 0;
  }
  else {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_18;
  lStack_18 = 0;
  func_0x000107c27f9c(&lStack_18);
  return;
}



/* Entry: 1087ef4c4; end: 1087ef4f7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087ef4c4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_10877d3e0(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087ef4f8; end: 1087ef867;  */

void FUN_1087ef4f8(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 in_CY;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  long lVar10;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar11;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined1 extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar6 = 0x68;
  __Znwm();
  func_0x0001087f00c4(FUN_1087ef8ac);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10 != 0);
  }
  lVar10 = *param_3;
  *(long *)(lVar6 + 0x40) = lVar10;
  if (lVar10 != 0) {
    do {
      func_0x0001087efe6c();
    } while (extraout_w10_00 != 0);
  }
  uVar9 = *param_4;
  *(undefined8 *)(lVar6 + 0x28) = param_4[1];
  *(undefined8 *)(lVar6 + 0x20) = uVar9;
  *(undefined8 *)(lVar6 + 0x30) = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_1087ef868(lVar6 + 0x10);
  FUN_1087ef47c(param_1,*(undefined8 *)(lVar6 + 0x10));
  func_0x000107c28874(&lStack_58);
  func_0x000107c28878(&uStack_60,2);
  uVar9 = uStack_60;
  uStack_60 = 0;
  func_0x000107c28888(lStack_48 + 0x18,uVar9);
  func_0x000107c28890(&uStack_60);
  *(undefined8 *)(lStack_48 + 8) = 2;
  func_0x000107c2887c(lStack_48,auStack_50);
  func_0x000107c28880(lStack_48,0,param_2,lVar6 + 0x40);
  lVar10 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  *(long *)(lVar6 + 0x50) = lVar10;
  func_0x000107c27f9c(&uStack_60);
  plVar7 = &lStack_58;
  func_0x000107c2889c();
  *(long *)(lVar6 + 0x48) = lVar10;
  do {
    func_0x0001087efe6c();
  } while (extraout_w10_01 != 0);
  func_0x0001087eff40();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar6 + 0x60) = 0;
    func_0x0001087effd0();
    lVar10 = *plVar7;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar7;
    }
    plVar7 = param_4 + 2;
    do {
      if (*plVar7 == 0) {
        func_0x0001087efeb8();
        plVar7 = extraout_x8_01;
        uVar2 = extraout_w10_03;
        uVar12 = extraout_w11_00;
      }
      else {
        func_0x0001087f0064();
        plVar7 = extraout_x8_00;
        uVar2 = extraout_w10_02;
        uVar12 = extraout_w11;
      }
      if ((uVar12 & 1) != 0) {
        func_0x0001087eff50();
        if ((bool)in_ZR) {
          func_0x0001087efee0();
          iVar1 = extraout_w8_02;
          if ((bool)in_CY) {
            iVar1 = extraout_w9_00;
          }
          puVar8 = (undefined1 *)(ulong)(iVar1 * 0x18 + 0x10);
          _malloc();
          *puVar8 = (char)iVar1;
          func_0x0001087efe7c(0);
          param_4[0x12] = puVar8;
        }
        func_0x0001087eff28();
        *(long *)(extraout_x8_04 + 0x20) = lVar10;
        goto LAB_1087ef780;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar7 = (long *)(lVar6 + 0x48);
  func_0x000107c28870();
  param_4 = (undefined8 *)*plVar7;
  func_0x0001087efec8();
  func_0x0001087eff08();
  uVar5 = param_4 != (undefined8 *)0x0;
  if (param_4 == (undefined8 *)0x1) {
    if (((uint)*(undefined8 *)(*(long *)(lVar6 + 0x40) + 0x10) >> 5 & 1) == 0) {
      uVar9 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_1087aead8();
      func_0x0001087f00d8();
      ___cxa_throw(uVar9);
    }
    else {
      func_0x0001087f0030();
      __ZSt17rethrow_exceptionSt13exception_ptr(lVar6 + 0x58);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1087ef7ec);
    (*pcVar3)();
  }
  *(undefined8 *)(lVar6 + 0x48) = *param_2;
  uVar4 = 0;
  do {
    func_0x0001087efe6c();
  } while (extraout_w10_04 != 0);
  func_0x0001087eff40();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar6 + 0x60) = 1;
    func_0x0001087effd0();
    lVar6 = *plVar7;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar7;
    }
    plVar11 = param_4 + 2;
    do {
      if (*plVar11 == 0) {
        func_0x0001087efeb8();
        plVar11 = extraout_x8_03;
        uVar2 = extraout_w10_06;
        uVar12 = extraout_w11_02;
      }
      else {
        func_0x0001087f0064();
        plVar11 = extraout_x8_02;
        uVar2 = extraout_w10_05;
        uVar12 = extraout_w11_01;
      }
      if ((uVar12 & 1) != 0) {
        func_0x0001087eff50();
        if ((bool)uVar4) {
          func_0x0001087efee0();
          uVar4 = extraout_w8;
          if ((bool)uVar5) {
            uVar4 = extraout_w9;
          }
          func_0x0001087efea8();
          *(undefined1 *)plVar7 = uVar4;
          func_0x0001087efe7c(0);
          param_4[0x12] = plVar7;
        }
        func_0x0001087eff28();
        *(long *)(extraout_x8_05 + 0x20) = lVar6;
LAB_1087ef780:
        func_0x0001087eff18(param_4[0x12]);
        param_4[2] = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087f0070();
  func_0x0001087f0020();
  func_0x0001087efec8();
  func_0x0001087efea0();
  func_0x0001087efef0();
  func_0x0001087efef8();
  func_0x0001087eff78();
  func_0x0001087eff10();
  return;
}



/* Entry: 1087ef868; end: 1087ef8ab;  */

undefined8 * FUN_1087ef868(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10877d2a4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27fec(&uStack_30);
  return param_1;
}



/* Entry: 1087ef8ac; end: 1087efa7f;  */

void FUN_1087ef8ac(long param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte extraout_w8;
  uint extraout_w8_00;
  long *plVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar8;
  byte extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    pbVar5 = (byte *)(param_1 + 0x48);
    func_0x000107c28870();
    lVar10 = *(long *)pbVar5;
    func_0x0001087efec8();
    func_0x0001087eff08();
    if (lVar10 == 1) {
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10) >> 5 & 1) == 0) {
        uVar6 = 0x10;
        ___cxa_allocate_exception(0x10);
        FUN_1087aead8();
        func_0x0001087f00d8();
        ___cxa_throw(uVar6);
      }
      else {
        func_0x0001087f0030();
        __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x58);
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1087efa20);
      (*pcVar3)();
    }
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x38);
    do {
      func_0x0001087efe6c();
    } while (extraout_w10 != 0);
    func_0x0001087eff40();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar10 = *(long *)(param_1 + 0x48);
      func_0x0001087efe90();
      lVar11 = *(long *)pbVar5;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *(long *)pbVar5;
      }
      plVar7 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar7 == 0) {
          func_0x0001087efeb8();
          plVar7 = extraout_x8_00;
          uVar2 = extraout_w10_01;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x0001087f0064();
          plVar7 = extraout_x8;
          uVar2 = extraout_w10_00;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) {
          pbVar12 = *(byte **)(lVar10 + 0x90);
          bVar1 = pbVar12[1];
          uVar8 = (ulong)bVar1;
          bVar4 = *pbVar12 <= bVar1;
          if (bVar1 == *pbVar12) {
            func_0x0001087efee0();
            bVar1 = extraout_w8;
            if (bVar4) {
              bVar1 = extraout_w9;
            }
            func_0x0001087efea8();
            uVar8 = 0;
            *pbVar5 = bVar1;
            pbVar5[1] = 0;
            pbVar5[8] = 0;
            pbVar5[9] = 0;
            pbVar5[10] = 0;
            pbVar5[0xb] = 0;
            pbVar5[0xc] = 0;
            pbVar5[0xd] = 0;
            pbVar5[0xe] = 0;
            pbVar5[0xf] = 0;
            *(byte **)(pbVar12 + 8) = pbVar5;
            *(byte **)(lVar10 + 0x90) = pbVar5;
            pbVar12 = pbVar5;
          }
          pbVar5 = pbVar12 + uVar8 * 0x18 + 0x10;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          *(long *)(pbVar12 + uVar8 * 0x18 + 0x18) = param_1;
          *(long *)(pbVar12 + uVar8 * 0x18 + 0x20) = lVar11;
          func_0x0001087eff18(*(undefined8 *)(lVar10 + 0x90));
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
  }
  func_0x0001087f0070();
  func_0x0001087f0020();
  func_0x0001087efec8();
  func_0x0001087efea0();
  func_0x0001087efef0();
  func_0x0001087efef8();
  func_0x0001087f0018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087efa80; end: 1087efac7;  */

void FUN_1087efa80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087efea0();
  func_0x0001087efef0();
  func_0x0001087efef8();
  func_0x0001087f0018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087efac8; end: 1087efb43;  */

void FUN_1087efac8(long param_1)

{
  FUN_1087c6770(param_1 + 0x48);
  func_0x0001087f0020();
  func_0x0001087efec8();
  func_0x0001087eff08();
  func_0x0001087efef0();
  func_0x0001087eff90();
  func_0x0001087effa8();
  func_0x0001087efea0();
  func_0x0001087efef8();
  func_0x0001087f0018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087efb44; end: 1087efb83;  */

void FUN_1087efb44(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x48);
  func_0x0001087eff08();
  func_0x0001087efef0();
  func_0x0001087eff90();
  func_0x0001087effa8();
  func_0x0001087efea0();
  func_0x0001087efef8();
  func_0x0001087f0018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087efb84; end: 1087efdf3;  */

void FUN_1087efb84(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  puVar3 = &uStack_c0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x420;
  FUN_1087c6770(lVar2);
  FUN_10877d4b8(param_1 + 0x300,lVar2);
  func_0x000107c27f9c(param_1 + 0x420);
  func_0x0001087f0090();
  func_0x0001087eff98();
  func_0x0001087f0088();
  func_0x0001087f0080();
  if (*(int *)(param_1 + 0x338) == 0) {
    puVar4 = (uint *)(param_1 + 0x300);
    func_0x0001087c6820();
    plVar5 = (long *)(ulong)*puVar4;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_108770a30();
    uStack_a0 = CONCAT44((int)plVar5,10);
    func_0x0001087efe48();
    func_0x0001087eff00();
    func_0x0001087f0040();
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x300);
    func_0x0001087c6838();
    plVar5 = (long *)(param_1 + 0x3b0);
    func_0x00010877d53c();
    in_ZR = *(int *)(param_1 + 0x3e0) == 4;
    if ((bool)in_ZR) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x440) + 0x30);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      FUN_1086cf200(&uStack_a0);
      func_0x0001087f0048();
      FUN_10868cc20(param_1 + 0x1f8);
      func_0x0001087f00ec();
      func_0x0001087eff60();
      func_0x0001087effe0();
      func_0x0001087f0010();
      uStack_a0 = 10;
    }
    else {
      in_ZR = *(int *)(param_1 + 0x3e0) == 3;
      if (((bool)in_ZR) && ((*(byte *)(*(long *)(param_1 + 0x3d8) + 0x10) >> 2 & 1) != 0)) {
        puVar7 = *(undefined1 **)(*(long *)(param_1 + 0x3d8) + 0x28);
        plVar5 = *(long **)(*(long *)(param_1 + 0x440) + 0x88);
        puVar3 = (undefined8 *)puVar7;
        (**(code **)(*plVar5 + 0x10))(plVar5,puVar7,3);
        uVar1 = *(uint *)(puVar7 + 0x38);
        in_ZR = uVar1 == 10;
        if (uVar1 < 0xb) {
          uVar6 = *(undefined4 *)(&UNK_10df59f28 + (ulong)uVar1 * 4);
        }
        else {
          uVar6 = 7;
        }
        uStack_a0 = CONCAT44(uVar6,10);
      }
      else {
        uStack_a0 = 0x70000000a;
      }
    }
    func_0x0001087efe48();
    func_0x0001087eff00();
    func_0x0001087f0028();
  }
  func_0x0001087effc8();
  func_0x0001087f0078();
  func_0x0001087effb8();
  func_0x0001087effc0();
  func_0x0001087eff88();
  func_0x0001087effb0();
  func_0x0001087effa0();
  func_0x0001087eff80();
  while( true ) {
    func_0x0001087efea0();
    func_0x0001087eff10();
    func_0x0001087f00b0(uStack_28);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar3 == 0) break;
    func_0x0001087f0028();
    func_0x0001087effc8();
    func_0x0001087f0078();
    func_0x0001087effb8();
    func_0x0001087effc0();
    func_0x0001087eff88();
    func_0x0001087effb0();
    func_0x0001087effa0();
    func_0x0001087eff80();
    func_0x0001087f00a8();
    func_0x0001087eff38();
    ___cxa_end_catch();
  }
  __Unwind_Resume(plVar5);
  func_0x000107c27f9c(plVar5 + 0x84);
  func_0x0001087f0090();
  func_0x0001087eff98();
  func_0x0001087f0088();
  func_0x0001087f0080();
  func_0x0001087f0078();
  func_0x0001087effb8();
  func_0x0001087effc0();
  func_0x0001087eff88();
  func_0x0001087effb0();
  func_0x0001087effa0();
  func_0x0001087eff80();
  func_0x0001087efea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 1087efdf4; end: 1087efe47;  */

void FUN_1087efdf4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x420);
  func_0x0001087f0090();
  func_0x0001087eff98();
  func_0x0001087f0088();
  func_0x0001087f0080();
  func_0x0001087f0078();
  func_0x0001087effb8();
  func_0x0001087effc0();
  func_0x0001087eff88();
  func_0x0001087effb0();
  func_0x0001087effa0();
  func_0x0001087eff80();
  func_0x0001087efea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087efe48; end: 1087f0197;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087efe48(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined1 uStack0000000000000028;
  undefined1 uStack0000000000000060;
  undefined1 uStack0000000000000068;
  undefined1 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined1 uStack0000000000000088;
  
  uStack0000000000000028 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000088 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_1087e4844(*puVar5,puVar5,&stack0x00000020);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087f0198; end: 1087f0523;  */

void FUN_1087f0198(undefined8 param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong extraout_x8_00;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  byte abStack_240 [24];
  uint uStack_228;
  undefined1 uStack_224;
  undefined8 uStack_58;
  
  puVar8 = param_3;
  func_0x0001087f12cc();
  puVar6 = (undefined8 *)0x238;
  uStack_58 = extraout_x8;
  __Znwm();
  *puVar6 = FUN_1087f1018;
  puVar6[1] = FUN_1087f11bc;
  puVar6[0x42] = param_3;
  puVar6[0x41] = param_2;
  func_0x0001087e472c(puVar6 + 2);
  pbVar13 = (byte *)(puVar6 + 2);
  FUN_1087e46b4(param_1,pbVar13);
  if (param_3[0x36] == 0) {
    func_0x0001087f11ec(1);
    func_0x0001087f1318();
    param_2 = pbVar13;
  }
  else {
    func_0x000107c29f64(puVar6 + 4,*(undefined8 *)(param_2 + 0x10),param_3 + 0x10,2);
    if ((*(byte *)(puVar6 + 0x3e) & 1) == 0) {
      uStack_228 = 7;
      uStack_224 = 1;
      puVar8 = &uStack_228;
      FUN_1087f0524(param_2);
      uVar12 = 0x700000001;
    }
    else {
      puVar6[0x43] = *(undefined8 *)(param_3 + 0x20);
      plVar7 = *(long **)(param_2 + 0x60);
      (**(code **)(*plVar7 + 0x10))();
      plVar2 = puVar6 + 0x40;
      puVar6[0x44] = plVar7;
      puVar6[0x45] = *(undefined8 *)(param_3 + 0x22);
      puVar8 = (uint *)(puVar6 + 4);
      FUN_1087f068c(plVar2,param_2,puVar8,param_3 + 0x16);
      puVar6[0x3f] = *plVar2;
      plVar7 = (long *)(*plVar2 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(puVar6[0x3f] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x46) = 0;
        lVar11 = puVar6[0x3f];
        func_0x0001087f1250();
        lVar14 = *(long *)param_2;
        if (lVar14 == 0) {
          func_0x000107c3a5c0();
          lVar14 = *(long *)param_2;
        }
        plVar7 = (long *)(lVar11 + 0x10);
        do {
          lVar10 = *plVar7;
          if (lVar10 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              pbVar13 = *(byte **)(lVar11 + 0x90);
              bVar3 = pbVar13[1];
              uVar9 = (ulong)bVar3;
              in_ZR = 0;
              if (bVar3 == *pbVar13) {
                in_ZR = bVar3 == 0x40;
                func_0x0001087f1260();
                func_0x0001087f1320();
                *(byte **)(pbVar13 + 8) = param_2;
                *(byte **)(lVar11 + 0x90) = param_2;
                uVar9 = extraout_x8_00;
                pbVar13 = param_2;
              }
              uVar9 = uVar9 & 0xffffffff;
              pbVar1 = pbVar13 + uVar9 * 0x18 + 0x10;
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              *(undefined8 **)(pbVar13 + uVar9 * 0x18 + 0x18) = puVar6;
              *(long *)(pbVar13 + uVar9 * 0x18 + 0x20) = lVar14;
              func_0x0001087f1298();
              goto LAB_1087f0414;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar10 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar6 + 0x3f);
      uVar12 = puVar6[0x45];
      uVar15 = puVar6[0x44];
      uVar16 = puVar6[0x43];
      lVar11 = puVar6[0x42];
      uVar17 = puVar6[0x41];
      func_0x0001087f1290();
      func_0x000107c27f9c(plVar2);
      FUN_1087f0938(uVar17,lVar11 + 0x40,lVar11 + 0x58,lVar11,uVar15,uVar12,uVar16,lVar11 + 0xc0);
      uVar12 = puVar6[0x41];
      *(undefined4 *)(puVar6[0x42] + 0xd8) = 0;
      FUN_1087f0d68(uVar12);
      in_ZR = *(int *)(puVar6[0x42] + 0xa0) == 0x11;
      if ((bool)in_ZR) {
        func_0x0001087f12fc(*(undefined8 *)(puVar6[0x41] + 0x10));
        abStack_240[0] = 0;
        abStack_240[1] = 0;
        abStack_240[2] = 0;
        abStack_240[3] = 0;
        abStack_240[4] = 0;
        abStack_240[5] = 0;
        abStack_240[6] = 0;
        abStack_240[7] = 0;
        abStack_240[8] = 0;
        abStack_240[9] = 0;
        abStack_240[10] = 0;
        abStack_240[0xb] = 0;
        abStack_240[0xc] = 0;
        abStack_240[0xd] = 0;
        abStack_240[0xe] = 0;
        abStack_240[0xf] = 0;
        abStack_240[0x10] = 0;
        abStack_240[0x11] = 0;
        abStack_240[0x12] = 0;
        abStack_240[0x13] = 0;
        abStack_240[0x14] = 0;
        abStack_240[0x15] = 0;
        abStack_240[0x16] = 0;
        abStack_240[0x17] = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        uStack_248 = 0;
        (**(code **)**(undefined8 **)(puVar6[0x41] + 0x50))
                  (*(undefined8 **)(puVar6[0x41] + 0x50),puVar6[0x42] + 0x40,&uStack_228,1,
                   abStack_240,&uStack_258);
        func_0x000104be1274(&uStack_258);
        func_0x00010867b9fc(abStack_240);
        func_0x0001087f12b4();
      }
      param_2 = (byte *)puVar6[0x41];
      uStack_228 = uStack_228 & 0xffffff00;
      uStack_224 = 0;
      puVar8 = &uStack_228;
      FUN_1087f0524(param_2);
      uVar12 = 1;
    }
    func_0x0001087f11ec(uVar12);
    func_0x0001087f1318();
    func_0x0001087f1240();
  }
  while( true ) {
    func_0x0001087f1214();
    func_0x0001087f1238();
LAB_1087f0414:
    func_0x0001087f121c(uStack_58);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar8 != 0) goto LAB_1087f049c;
    do {
      func_0x0001087f12f4();
LAB_1087f049c:
      func_0x000104bd46a0(param_2);
    } while ((int)puVar8 == 0);
    func_0x000104be1274(&uStack_258);
    param_2 = abStack_240;
    func_0x00010867b9fc();
    func_0x0001087f12b4();
    func_0x0001087f1240();
    func_0x0001087f1270();
    func_0x0001087f1280();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087f0524; end: 1087f068b;  */

void FUN_1087f0524(undefined1 *param_1,code **param_2,long param_3)

{
  long *plVar1;
  code **ppcVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  ulong uVar11;
  ulong extraout_x8_01;
  code *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_f8 [24];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *pcStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar7 = &lStack_a0;
  func_0x0001087f12cc();
  lVar10 = *(long *)(param_1 + 0xa0);
  uStack_48 = extraout_x8;
  if (lVar10 != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x20);
    lStack_98 = *(long *)(param_1 + 0xa8);
    if (lStack_98 != 0) {
      plVar6 = (long *)(lStack_98 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_90 = *(undefined4 *)param_2;
    uStack_8c = CONCAT31(uStack_8c._1_3_,*(undefined1 *)((long)param_2 + 4));
    lStack_a0 = lVar10;
    func_0x000107c28150();
    lVar10 = puVar13[2];
    __ZNSt3__15mutex4lockEv(lVar10 + 8);
    lVar14 = *(long *)(lVar10 + 0x70);
    pcStack_80 = FUN_1087f0ed0;
    ppuStack_78 = &PTR_DAT_110a729e0;
    lStack_68 = lStack_98;
    lStack_70 = lStack_a0;
    lStack_a0 = 0;
    lStack_98 = 0;
    uStack_60 = CONCAT44(uStack_8c,uStack_90);
    param_2 = &pcStack_80;
    puStack_50 = param_1;
    func_0x000107c28154(lVar10 + 0x48);
    func_0x0001087f12bc();
    __ZNSt3__15mutex6unlockEv(lVar10 + 8);
    if (lVar14 == 0) {
      plVar6 = (long *)*puVar13;
      ppuStack_78 = (undefined **)puVar13[3];
      pcStack_80 = (code *)puVar13[2];
      if (puVar13[3] != 0) {
        plVar1 = (long *)(puVar13[3] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      param_2 = &pcStack_80;
      (**(code **)(*plVar6 + 0x10))();
      func_0x000107c27e74(&pcStack_80);
    }
    func_0x000104be3970();
    param_1 = (undefined1 *)plVar7;
  }
  func_0x0001087f121c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_80);
    func_0x000104be3970(&lStack_a0);
    __Unwind_Resume();
    puVar13 = (undefined8 *)0xb8;
    __Znwm();
    *puVar13 = FUN_1087f0f2c;
    puVar13[1] = FUN_1087f0fe8;
    puVar13[0x15] = param_3;
    func_0x000107c27f94(puVar13 + 2);
    func_0x000107c287c4(extraout_x8_00,puVar13 + 2);
    if (*(int *)(param_3 + 0x48) == 5) {
      lVar10 = *(long *)(param_3 + 0x40);
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      puVar13[0x10] = 0;
      func_0x000107c27ab0(puVar13 + 0x10,(long)*(int *)(lVar10 + 0x38));
      uVar11 = *(ulong *)(lVar10 + 0x30);
      puVar3 = (ulong *)(lVar10 + 0x30);
      if ((uVar11 & 1) != 0) {
        puVar3 = (ulong *)(uVar11 + 7);
      }
      for (lVar10 = (long)*(int *)(lVar10 + 0x38) << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
        if (*(int *)(*puVar3 + 0x1c) == 1) {
          func_0x000107c29ee0(auStack_f8,*(undefined8 *)(*puVar3 + 0x10));
          func_0x000107c27ac4(puVar13 + 0x10,auStack_f8);
          func_0x000107c27914(auStack_f8);
        }
        puVar3 = puVar3 + 1;
      }
      pcVar8 = *(code **)(param_1 + 0x90);
      (**(code **)(*(long *)pcVar8 + 0x18))(puVar13 + 0x14,pcVar8,param_2,puVar13 + 0x10);
      puVar13[0x13] = puVar13[0x14];
      plVar7 = (long *)(puVar13[0x14] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(puVar13[0x13] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar13 + 0x16) = 0;
        param_2 = (code **)puVar13[0x13];
        func_0x0001087f1250();
        lVar10 = *(long *)pcVar8;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *(long *)pcVar8;
        }
        ppcVar2 = param_2 + 2;
        do {
          pcVar12 = *ppcVar2;
          if (pcVar12 == (code *)0x0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppcVar2,0x10);
            if (bVar5) {
              *ppcVar2 = (code *)0x1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              pcVar12 = param_2[0x12];
              uVar11 = (ulong)(byte)pcVar12[1];
              if (pcVar12[1] == *pcVar12) {
                func_0x0001087f1260();
                func_0x0001087f1320();
                *(code **)(pcVar12 + 8) = pcVar8;
                param_2[0x12] = pcVar8;
                uVar11 = extraout_x8_01;
                pcVar12 = pcVar8;
              }
              uVar11 = uVar11 & 0xffffffff;
              *(undefined8 *)(pcVar12 + uVar11 * 0x18 + 0x10) = 0;
              *(undefined8 **)(pcVar12 + uVar11 * 0x18 + 0x18) = puVar13;
              *(long *)(pcVar12 + uVar11 * 0x18 + 0x20) = lVar10;
              func_0x0001087f1298();
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)pcVar12 >> 1 & 1) == 0);
      }
      puVar9 = puVar13 + 0x13;
      FUN_10866b034(puVar9);
      FUN_10866e480(puVar13 + 4,puVar9);
      func_0x0001087f1288();
      func_0x0001087f1248();
      if (*(char *)(puVar13 + 0xf) == '\x01') {
        lVar10 = puVar13[0x15];
        FUN_1086ce79c();
        func_0x0001087f12dc();
        if (lVar10 == 0) {
          pcVar8 = param_2[1];
          if (((ulong)pcVar8 & 1) != 0) {
            pcVar8 = *(code **)((ulong)pcVar8 & 0xfffffffffffffffe);
          }
          FUN_1086d03e4();
          param_2[10] = pcVar8;
        }
        FUN_1088f75d4();
      }
      func_0x0001087f1278();
      func_0x0001087f1230();
    }
    func_0x000107c287c8(puVar13 + 2);
    func_0x0001087f1214();
    func_0x0001087f1238();
    return;
  }
  return;
}



/* Entry: 1087f068c; end: 1087f0937;  */

void FUN_1087f068c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong extraout_x8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 auStack_58 [24];
  
  puVar5 = (undefined8 *)0xb8;
  __Znwm();
  *puVar5 = FUN_1087f0f2c;
  puVar5[1] = FUN_1087f0fe8;
  puVar5[0x15] = param_4;
  func_0x000107c27f94(puVar5 + 2);
  func_0x000107c287c4(param_1,puVar5 + 2);
  if (*(int *)(param_4 + 0x48) == 5) {
    lVar11 = *(long *)(param_4 + 0x40);
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x10] = 0;
    func_0x000107c27ab0(puVar5 + 0x10,(long)*(int *)(lVar11 + 0x38));
    uVar8 = *(ulong *)(lVar11 + 0x30);
    puVar2 = (ulong *)(lVar11 + 0x30);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + 7);
    }
    for (lVar11 = (long)*(int *)(lVar11 + 0x38) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      if (*(int *)(*puVar2 + 0x1c) == 1) {
        func_0x000107c29ee0(auStack_58,*(undefined8 *)(*puVar2 + 0x10));
        func_0x000107c27ac4(puVar5 + 0x10,auStack_58);
        func_0x000107c27914(auStack_58);
      }
      puVar2 = puVar2 + 1;
    }
    pbVar6 = *(byte **)(param_2 + 0x90);
    (**(code **)(*(long *)pbVar6 + 0x18))(puVar5 + 0x14,pbVar6,param_3,puVar5 + 0x10);
    puVar5[0x13] = puVar5[0x14];
    plVar1 = (long *)(puVar5[0x14] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x16) = 0;
      param_3 = puVar5[0x13];
      func_0x0001087f1250();
      lVar11 = *(long *)pbVar6;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *(long *)pbVar6;
      }
      plVar1 = (long *)(param_3 + 0x10);
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            pbVar10 = *(byte **)(param_3 + 0x90);
            uVar8 = (ulong)pbVar10[1];
            if (pbVar10[1] == *pbVar10) {
              func_0x0001087f1260();
              func_0x0001087f1320();
              *(byte **)(pbVar10 + 8) = pbVar6;
              *(byte **)(param_3 + 0x90) = pbVar6;
              uVar8 = extraout_x8;
              pbVar10 = pbVar6;
            }
            uVar8 = uVar8 & 0xffffffff;
            pbVar6 = pbVar10 + uVar8 * 0x18 + 0x10;
            pbVar6[0] = 0;
            pbVar6[1] = 0;
            pbVar6[2] = 0;
            pbVar6[3] = 0;
            pbVar6[4] = 0;
            pbVar6[5] = 0;
            pbVar6[6] = 0;
            pbVar6[7] = 0;
            *(undefined8 **)(pbVar10 + uVar8 * 0x18 + 0x18) = puVar5;
            *(long *)(pbVar10 + uVar8 * 0x18 + 0x20) = lVar11;
            func_0x0001087f1298();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    puVar7 = puVar5 + 0x13;
    FUN_10866b034(puVar7);
    FUN_10866e480(puVar5 + 4,puVar7);
    func_0x0001087f1288();
    func_0x0001087f1248();
    if (*(char *)(puVar5 + 0xf) == '\x01') {
      lVar11 = puVar5[0x15];
      FUN_1086ce79c();
      func_0x0001087f12dc();
      if (lVar11 == 0) {
        uVar8 = *(ulong *)(param_3 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        FUN_1086d03e4();
        *(ulong *)(param_3 + 0x50) = uVar8;
      }
      FUN_1088f75d4();
    }
    func_0x0001087f1278();
    func_0x0001087f1230();
  }
  func_0x000107c287c8(puVar5 + 2);
  func_0x0001087f1214();
  func_0x0001087f1238();
  return;
}



/* Entry: 1087f0938; end: 1087f0d67;  */

void FUN_1087f0938(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined1 auStack_808 [80];
  ulong uStack_7b8;
  undefined1 uStack_7b0;
  undefined7 uStack_7af;
  char cStack_450;
  undefined1 auStack_440 [24];
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined1 auStack_418 [80];
  undefined1 auStack_3c8 [24];
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined8 uStack_32c;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [80];
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  char cStack_2a8;
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [480];
  
  plVar3 = (long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(*plVar3 + 0x18);
  func_0x000107c278b8(auStack_298,&UNK_10f4bbc3f);
  func_0x000107c31420(auStack_280,uVar4,auStack_298);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
  FUN_1086a41a8(param_2,param_3,plVar3,param_1 + 0x40,param_1 + 0x50);
  if ((*(byte *)(param_4 + 0xdc) & 1) == 0) {
    uStack_320 = uStack_320 & 0xffffffffffffff00;
    cStack_2a8 = '\0';
  }
  else {
    if ((*(int *)(param_3 + 0x48) == 10) &&
       ((*(byte *)(*(long *)(param_3 + 0x40) + 0x10) >> 1 & 1) != 0)) {
      func_0x000107c28ee4(&uStack_820,*plVar3,param_2);
      puVar1 = &uStack_820;
      lVar2 = param_3;
      FUN_1086a191c();
      uVar6 = (undefined1)lVar2;
      uVar5 = (ulong)puVar1 & 0xffffffffffffff00;
      func_0x000107c287e4(&uStack_820);
      uStack_7b8 = (ulong)puVar1 & 0xff;
    }
    else {
      uStack_7b8 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    func_0x000107c27994(&uStack_820,param_2);
    func_0x00010869fbb8(auStack_808,param_3);
    uStack_7b8 = uVar5 | uStack_7b8;
    uStack_318 = uStack_818;
    uStack_320 = uStack_820;
    uStack_310 = uStack_810;
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_810 = 0;
    uStack_7b0 = uVar6;
    FUN_1086a76a0(auStack_308,auStack_808);
    uStack_2b0 = CONCAT71(uStack_7af,uStack_7b0);
    uStack_2b8 = uStack_7b8;
    cStack_2a8 = '\x01';
    FUN_1087f0e28(&uStack_820);
  }
  func_0x000107c27994(auStack_370,param_4);
  uStack_358 = *(undefined8 *)(param_4 + 0x18);
  uStack_348 = 0x300000000;
  uStack_340 = *(undefined4 *)(param_4 + 0x130);
  uStack_338 = *(undefined8 *)(param_4 + 0x128);
  uStack_330 = *(undefined4 *)(param_4 + 0x134);
  uStack_32c = 1;
  uStack_350 = param_5;
  func_0x000107c27994(auStack_440,param_2);
  uStack_420 = 1;
  uStack_428 = param_7;
  func_0x00010869fbb8(auStack_418,param_3);
  func_0x000107c278b8(auStack_3c8,&DAT_10f4bdfe8);
  uStack_3b0 = param_5;
  uStack_3a8 = param_6;
  func_0x000107c27994(auStack_3a0,param_4);
  FUN_10867be90(auStack_388,param_8);
  FUN_10886024c(*plVar3,auStack_370);
  FUN_108864b3c(*plVar3,auStack_440);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x30))
            (&uStack_820,*(long **)(param_1 + 0x40),param_2,param_3,1);
  func_0x000107c31428(auStack_280);
  if (cStack_2a8 == '\x01') {
    func_0x000107c28ee4(auStack_240,*plVar3,&uStack_320);
    FUN_1086a1984(*plVar3,*(undefined8 *)(param_1 + 0x50),auStack_240,auStack_308,uStack_2b8,
                  uStack_2b0);
    func_0x000107c287e4(auStack_240);
  }
  if (cStack_450 == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x40) + 400))(*(long **)(param_1 + 0x40),&uStack_820);
  }
  func_0x000107c288cc(&uStack_820);
  FUN_1086a9ac4(auStack_440);
  func_0x000107c27914(auStack_370);
  func_0x0001087f0e08(&uStack_320);
  func_0x000107c31424(auStack_280);
  return;
}



/* Entry: 1087f0d68; end: 1087f0def;  */

void FUN_1087f0d68(long param_1)

{
  undefined1 auStack_778 [904];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [944];
  
  func_0x000107c27994(auStack_3e8);
  auStack_778[0] = 0;
  uStack_3f0 = 0;
  FUN_10864094c(auStack_3d0,auStack_3e8,1,auStack_778);
  func_0x00010863f788(auStack_778);
  func_0x000107c27914(auStack_3e8);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30),auStack_3d0);
  FUN_108798a4c(auStack_3d0);
  return;
}



/* Entry: 1087f0df0; end: 1087f0df3;  */

undefined8 * FUN_1087f0df0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a729b0;
  func_0x000104be3970(param_1 + 0x14);
  func_0x000107c29118(param_1 + 0x12);
  func_0x000107c28cc8(param_1 + 0x10);
  func_0x000107c289fc(param_1 + 0xe);
  func_0x000107c28800(param_1 + 0xc);
  func_0x000107c28ab8(param_1 + 10);
  func_0x000107c28ab4(param_1 + 8);
  func_0x000107c29958(param_1 + 6);
  func_0x000107c2814c(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 1087f0df4; end: 1087f0e27;  */

void FUN_1087f0df4(void)

{
  func_0x0001087f0e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f0e28; end: 1087f0ecf;  */

long FUN_1087f0e28(long param_1)

{
  long lStack_28;
  
  FUN_1088f9cb4(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1087f0ed0; end: 1087f0f2b;  */

void FUN_1087f0ed0(long param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001087f0eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001087f0efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1087f0f2c; end: 1087f0fe7;  */

void FUN_1087f0f2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = param_1 + 0x98;
  FUN_10866b034(lVar1);
  FUN_10866e480(param_1 + 0x20,lVar1);
  func_0x0001087f1288();
  func_0x0001087f1248();
  if (*(char *)(param_1 + 0x78) == '\x01') {
    lVar1 = *(long *)(param_1 + 0xa8);
    FUN_1086ce79c();
    func_0x0001087f12dc();
    if (lVar1 == 0) {
      uVar2 = *(ulong *)(unaff_x20 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_1086d03e4();
      *(ulong *)(unaff_x20 + 0x50) = uVar2;
    }
    FUN_1088f75d4();
  }
  func_0x0001087f1278();
  func_0x0001087f1230();
  func_0x000107c287c8(param_1 + 0x10);
  func_0x0001087f1214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f0fe8; end: 1087f1017;  */

void FUN_1087f0fe8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x98);
  func_0x0001087f1248();
  func_0x0001087f1230();
  func_0x0001087f1214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f1018; end: 1087f11bb;  */

void FUN_1087f1018(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [4];
  undefined1 uStack_224;
  undefined8 uStack_58;
  
  lVar7 = param_1;
  func_0x0001087f12cc();
  uStack_58 = extraout_x8;
  func_0x000107c28834(lVar7 + 0x1f8);
  uVar4 = *(undefined8 *)(param_1 + 0x228);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  uVar6 = *(undefined8 *)(param_1 + 0x218);
  lVar7 = *(long *)(param_1 + 0x210);
  uVar8 = *(undefined8 *)(param_1 + 0x208);
  func_0x0001087f1290();
  func_0x0001087f1310();
  FUN_1087f0938(uVar8,lVar7 + 0x40,lVar7 + 0x58,lVar7,uVar5,uVar4,uVar6,lVar7 + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0x208);
  *(undefined4 *)(*(long *)(param_1 + 0x210) + 0xd8) = 0;
  FUN_1087f0d68(uVar4);
  uVar1 = *(int *)(*(long *)(param_1 + 0x210) + 0xa0) == 0x11;
  if ((bool)uVar1) {
    func_0x0001087f12fc(*(undefined8 *)(*(long *)(param_1 + 0x208) + 0x10));
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x208) + 0x50);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    (**(code **)*puVar2)
              (puVar2,*(long *)(param_1 + 0x210) + 0x40,auStack_228,1,&uStack_258,&uStack_240);
    func_0x000104be1274(&uStack_240);
    func_0x00010867b9fc(&uStack_258);
    func_0x0001087f12b4();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x208);
  auStack_228[0] = 0;
  uStack_224 = 0;
  puVar3 = auStack_228;
  FUN_1087f0524();
  func_0x0001087f11ec(1);
  func_0x0001087f1318();
  func_0x0001087f1240();
  while( true ) {
    func_0x0001087f1214();
    func_0x0001087f1238();
    func_0x0001087f121c(uStack_58);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar3 == 0) break;
    func_0x000104be1274(&uStack_240);
    puVar2 = &uStack_258;
    func_0x00010867b9fc();
    func_0x0001087f12b4();
    func_0x0001087f1240();
    func_0x0001087f1270();
    func_0x0001087f1280();
    ___cxa_end_catch();
  }
  func_0x0001087f12f4();
  func_0x000107c27f9c(puVar2 + 0x3f);
  func_0x0001087f1310();
  func_0x0001087f1240();
  func_0x0001087f1214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087f11bc; end: 1087f11eb;  */

void FUN_1087f11bc(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x1f8);
  func_0x0001087f1310();
  func_0x0001087f1240();
  func_0x0001087f1214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f11ec; end: 1087f1333;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087f11ec(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uStack0000000000000038;
  undefined1 uStack0000000000000040;
  undefined1 uStack0000000000000078;
  undefined1 uStack0000000000000080;
  undefined1 uStack0000000000000084;
  undefined1 uStack0000000000000088;
  undefined1 uStack00000000000000a0;
  
  uStack0000000000000040 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000084 = 0;
  uStack0000000000000088 = 0;
  uStack00000000000000a0 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  uStack0000000000000038 = param_1;
  FUN_1087e4844(*puVar5,puVar5,&stack0x00000038);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087f1334; end: 1087f13c3;  */

undefined8 *
FUN_1087f1334(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 6;
  *param_1 = &PTR_FUN_110a72a08;
  FUN_1087f13c4(param_1 + 2,param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11);
  uVar1 = *param_6;
  param_1[4] = param_6[1];
  param_1[3] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[6] = param_7[1];
  param_1[5] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_12;
  param_1[8] = param_12[1];
  param_1[7] = uVar1;
  *param_12 = 0;
  param_12[1] = 0;
  return param_1;
}



/* Entry: 1087f13c4; end: 1087f15a3;  */

void FUN_1087f13c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined8 uVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = 0xb8;
  __Znwm();
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10 != 0);
  }
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  if (param_3[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10_00 != 0);
  }
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  if (param_4[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10_01 != 0);
  }
  uStack_98 = param_5[1];
  uStack_a0 = *param_5;
  if (param_5[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10_02 != 0);
  }
  uStack_a8 = param_6[1];
  uStack_b0 = *param_6;
  if (param_6[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10_03 != 0);
  }
  uStack_b8 = param_7[1];
  uStack_c0 = *param_7;
  if (param_7[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10_04 != 0);
  }
  uStack_c8 = param_9[1];
  uStack_d0 = *param_9;
  if (param_9[1] != 0) {
    do {
      FUN_1087f1c14();
    } while (extraout_w10_05 != 0);
  }
  FUN_1087f1d38(uVar1,&uStack_70,&uStack_80,&uStack_90,&uStack_a0,&uStack_b0,&uStack_c0,param_8,
                &uStack_d0);
  *param_1 = uVar1;
  func_0x000107c297ac(&uStack_d0);
  func_0x000107c2995c(&uStack_c0);
  func_0x000107c289fc(&uStack_b0);
  func_0x000107c288a4(&uStack_a0);
  func_0x000107c28808(&uStack_90);
  func_0x000107c28abc(&uStack_80);
  func_0x000107c288e8(&uStack_70);
  return;
}



/* Entry: 1087f15a4; end: 1087f18df;  */

void FUN_1087f15a4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  uint uVar8;
  ulong uVar9;
  long extraout_x8;
  int extraout_w10;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x24;
  undefined8 auStack_80 [8];
  
  func_0x0001087f1d10();
  puVar6 = (undefined8 *)0xb8;
  __Znwm();
  *puVar6 = FUN_1087f1a48;
  puVar6[1] = FUN_1087f1be4;
  puVar6[0x14] = param_2;
  puVar6[0x15] = param_3;
  func_0x0001087e472c(puVar6 + 2);
  FUN_1087e46b4(param_1,puVar6 + 2);
  FUN_1087f18e0(param_2,param_3);
  *(undefined4 *)(param_3 + 0x1b) = 1;
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))
            (puVar6 + 0x13,*(long **)(param_2 + 0x10),param_3,param_4);
  puVar6[0x12] = puVar6[0x13];
  plVar1 = (long *)(puVar6[0x13] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x16) = 0;
    lVar11 = puVar6[0x12];
    ppuVar7 = &PTR___tlv_bootstrap_11340e278;
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar12 = *ppuVar7;
    if (puVar12 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar12 = *ppuVar7;
    }
    plVar1 = (long *)(lVar11 + 0x10);
    do {
      lVar10 = *plVar1;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        in_ZR = cVar3 == '\0';
        if ((bool)in_ZR) {
          ppuVar13 = *(undefined ***)(lVar11 + 0x90);
          bVar2 = *(byte *)((long)ppuVar13 + 1);
          uVar9 = (ulong)bVar2;
          uVar5 = 0;
          if (bVar2 == *(byte *)ppuVar13) {
            uVar8 = (uint)bVar2 << 1;
            uVar5 = bVar2 == 0x40;
            if (0x7f < uVar8) {
              uVar8 = 0x80;
            }
            ppuVar7 = (undefined **)(ulong)(uVar8 * 0x18 + 0x10);
            _malloc();
            uVar9 = 0;
            *(char *)ppuVar7 = (char)uVar8;
            *(undefined1 *)((long)ppuVar7 + 1) = 0;
            ppuVar7[1] = (undefined *)0x0;
            ppuVar13[1] = (undefined *)ppuVar7;
            *(undefined ***)(lVar11 + 0x90) = ppuVar7;
            ppuVar13 = ppuVar7;
          }
          ppuVar13[uVar9 * 3 + 2] = (undefined *)0x0;
          ppuVar13[uVar9 * 3 + 3] = (undefined *)puVar6;
          ppuVar13[uVar9 * 3 + 4] = puVar12;
          *(char *)(*(long *)(lVar11 + 0x90) + 1) = *(char *)(*(long *)(lVar11 + 0x90) + 1) + '\x01'
          ;
          *(undefined8 *)(lVar11 + 0x10) = 0;
          goto LAB_1087f1838;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  param_3 = puVar6 + 0x12;
  FUN_1087e5748();
  ppuVar7 = (undefined **)(puVar6 + 4);
  FUN_1087e4b58(ppuVar7);
  func_0x0001087f1ca8();
  func_0x0001087f1c6c();
  uVar5 = in_ZR;
  if (*(int *)((long)puVar6 + 0x24) != 0) {
    func_0x0001087f1cc0();
    uVar5 = 0;
    if ((bool)in_ZR) {
      uVar5 = *(char *)((long)puVar6 + 0x6c) == '\x01' && *(int *)(puVar6 + 0xd) == 5;
    }
  }
  lVar11 = puVar6[0x14];
  if ((*(long *)(lVar11 + 0x38) != 0) && (lVar10 = *(long *)(lVar11 + 0x18), lVar10 != 0)) {
    if (*(long *)(lVar11 + 0x40) != 0) {
      plVar1 = (long *)(*(long *)(lVar11 + 0x40) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x000107c28150();
    ppuVar7 = (undefined **)(*(long *)(lVar10 + 0x10) + 8);
    __ZNSt3__15mutex4lockEv();
    func_0x0001087f1c34();
    func_0x0001087f1d04();
    func_0x0001087f1c24();
    func_0x0001087f1c90();
    if (unaff_x24 == 0) {
      func_0x0001087f1d24();
      if (extraout_x8 != 0) {
        do {
          func_0x0001087f1c14();
        } while (extraout_w10 != 0);
      }
      param_3 = auStack_80;
      (**(code **)(*ppuVar7 + 0x10))();
      func_0x0001087f1ca0();
    }
    func_0x0001087f1c98();
  }
  func_0x0001087f1cf8();
  func_0x0001087f1c88();
  while( true ) {
    func_0x0001087f1cb8();
    func_0x0001087f1cb0();
LAB_1087f1838:
    func_0x0001087f1cd8();
    if ((bool)uVar5) break;
    ___stack_chk_fail();
    if ((int)param_3 == 0) {
      do {
        func_0x0001087f1cf0();
        func_0x000104bd46a0(ppuVar7);
      } while ((int)param_3 == 0);
      func_0x0001087f1c24();
      func_0x0001087f1c90();
    }
    else {
      func_0x0001087f1ca0();
    }
    func_0x0001087f1c98();
    func_0x0001087f1c88();
    ___cxa_begin_catch(ppuVar7);
    ppuVar7 = (undefined **)(puVar6 + 2);
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087f18e0; end: 1087f197b;  */

void FUN_1087f18e0(long param_1)

{
  undefined1 auStack_778 [904];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [944];
  
  func_0x000107c27994(auStack_3e8);
  auStack_778[0] = 0;
  uStack_3f0 = 0;
  FUN_10864094c(auStack_3d0,auStack_3e8,1,auStack_778);
  func_0x00010863f788(auStack_778);
  func_0x000107c27914(auStack_3e8);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(*(long **)(param_1 + 0x28),auStack_3d0);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28),auStack_3d0);
  FUN_108798a4c(auStack_3d0);
  return;
}



/* Entry: 1087f197c; end: 1087f197f;  */

undefined8 * FUN_1087f197c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a72a08;
  func_0x000104be3970(param_1 + 7);
  func_0x000107c29958(param_1 + 5);
  func_0x000107c2814c(param_1 + 3);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1087f1980; end: 1087f1993;  */

void FUN_1087f1980(void)

{
  FUN_1087f1994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f1994; end: 1087f19eb;  */

undefined8 * FUN_1087f1994(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a72a08;
  func_0x000104be3970(param_1 + 7);
  func_0x000107c29958(param_1 + 5);
  func_0x000107c2814c(param_1 + 3);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1087f19ec; end: 1087f1a47;  */

void FUN_1087f19ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001087f1a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001087f1a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1087f1a48; end: 1087f1be3;  */

void FUN_1087f1a48(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long extraout_x8;
  int extraout_w10;
  long lVar6;
  long lVar7;
  long unaff_x24;
  undefined1 auStack_80 [64];
  
  lVar6 = param_1;
  func_0x0001087f1d10();
  puVar4 = (undefined1 *)(lVar6 + 0x90);
  FUN_1087e5748();
  plVar5 = (long *)(param_1 + 0x20);
  FUN_1087e4b58();
  func_0x0001087f1ca8();
  func_0x0001087f1c6c();
  uVar3 = in_ZR;
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x0001087f1cc0();
    uVar3 = 0;
    if ((bool)in_ZR) {
      uVar3 = *(char *)(param_1 + 0x6c) == '\x01' && *(int *)(param_1 + 0x68) == 5;
    }
  }
  lVar6 = *(long *)(param_1 + 0xa0);
  if ((*(long *)(lVar6 + 0x38) != 0) && (lVar7 = *(long *)(lVar6 + 0x18), lVar7 != 0)) {
    if (*(long *)(lVar6 + 0x40) != 0) {
      plVar5 = (long *)(*(long *)(lVar6 + 0x40) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000107c28150();
    plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 8);
    __ZNSt3__15mutex4lockEv();
    func_0x0001087f1c34();
    func_0x0001087f1d04();
    func_0x0001087f1c24();
    func_0x0001087f1c90();
    if (unaff_x24 == 0) {
      func_0x0001087f1d24();
      if (extraout_x8 != 0) {
        do {
          func_0x0001087f1c14();
        } while (extraout_w10 != 0);
      }
      puVar4 = auStack_80;
      (**(code **)(*plVar5 + 0x10))();
      func_0x0001087f1ca0();
    }
    func_0x0001087f1c98();
  }
  func_0x0001087f1cf8();
  func_0x0001087f1c88();
  while( true ) {
    func_0x0001087f1cb8();
    func_0x0001087f1cb0();
    func_0x0001087f1cd8();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar4 == 0) break;
    func_0x0001087f1ca0();
    func_0x0001087f1c98();
    func_0x0001087f1c88();
    ___cxa_begin_catch(plVar5);
    plVar5 = (long *)(param_1 + 0x10);
    func_0x0001053360b0();
    ___cxa_end_catch();
  }
  func_0x0001087f1cf0();
  func_0x000107c27f9c(plVar5 + 0x12);
  func_0x0001087f1c6c();
  func_0x0001087f1cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 1087f1be4; end: 1087f1c13;  */

void FUN_1087f1be4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x90);
  func_0x0001087f1c6c();
  func_0x0001087f1cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f1c14; end: 1087f1d37;  */

void FUN_1087f1c14(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087f1d38; end: 1087f1e3b;  */

undefined8 *
FUN_1087f1d38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 5;
  *param_1 = &PTR_FUN_110a72a60;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  FUN_1087bc1b8(param_1 + 0xe,param_8);
  uVar1 = *param_9;
  param_1[0x16] = param_9[1];
  param_1[0x15] = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  return param_1;
}



/* Entry: 1087f1e3c; end: 1087f2a4b;  */

/* WARNING: Removing unreachable block (ram,0x0001087f2204) */

void FUN_1087f1e3c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  int extraout_w8;
  uint extraout_w8_00;
  uint uVar18;
  undefined4 uVar19;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w9;
  ulong extraout_x9;
  uint extraout_w10;
  long lVar20;
  undefined8 extraout_x10;
  undefined8 *extraout_x10_00;
  int iVar21;
  undefined8 extraout_x11;
  long *plVar22;
  byte *pbVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_90;
  ulong uStack_88;
  
  func_0x0001087f3828();
  puVar10 = (undefined8 *)0x4f8;
  __Znwm();
  *puVar10 = FUN_1087f2e08;
  puVar10[1] = FUN_1087f3528;
  puVar10[0x9d] = param_3;
  puVar10[0x9c] = param_2;
  func_0x0001087e472c(puVar10 + 2);
  FUN_1087e46b4(param_1,puVar10 + 2);
  ppuVar12 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_3 + 0x70) != (undefined **)0x0) {
    ppuVar12 = *(undefined ***)(param_3 + 0x70);
  }
  func_0x000107c29ee0(puVar10 + 0x8d,ppuVar12);
  func_0x000107c29f64(puVar10 + 4,*(undefined8 *)(param_2 + 0x30),param_3 + 0x40,0);
  puVar16 = puVar10 + 0x47;
  if ((*(byte *)(puVar10 + 0x3e) & 1) == 0) {
    func_0x0001087f3580();
    func_0x0001087f365c();
    func_0x000107c278b8(puVar10 + 0x81);
    uVar11 = (ulong)*(uint *)(param_3 + 0x138);
    func_0x000108841bf8(uVar11);
    puVar25 = &uStack_d0;
    func_0x000107c28824(puVar25,puVar10 + 0x81,uVar11);
    func_0x0001087f3650();
    func_0x000107c278b8(puVar10 + 0x84);
    uVar11 = (ulong)*(uint *)(param_3 + 0x13c);
    func_0x000108841c14(uVar11);
    func_0x000107c28824(puVar25,puVar10 + 0x84,uVar11);
    FUN_1087b95a0();
    func_0x0001087f3644();
    func_0x000107c278b8(puVar10 + 0x87);
    uVar8 = *(int *)(param_3 + 0x134) == 0;
    func_0x000107c28818(puVar25,puVar10 + 0x87,uVar8);
    func_0x0001087f3688();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x87);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x84);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x81);
    func_0x0001087f36e8();
    if ((*(ulong *)(param_3 + 0x120) >> 0x20 & 1) != 0) {
      func_0x0001087f3564();
      func_0x0001087f3690();
    }
    plVar22 = *(long **)(param_2 + 0x40);
    func_0x000107c2884c(puVar16,puVar10 + 0x3f);
    (**(code **)(*plVar22 + 0x50))(plVar22,puVar16);
    func_0x000107c2882c(puVar16);
    func_0x0001087f3678();
    uStack_d0 = (undefined *)0x700000005;
LAB_1087f20f4:
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    uVar11 = uStack_88 >> 0x28;
    uVar18 = (uint)uStack_88;
    uStack_88._0_5_ = (uint5)(uVar18 & 0xffffff00);
    uStack_88 = CONCAT35((int3)uVar11,(uint5)uStack_88);
    func_0x0001087f3628();
    func_0x0001087e49c4(&uStack_d0);
LAB_1087f2114:
    func_0x0001087f3620();
    func_0x0001087f35f0();
    func_0x0001087f36b0();
    func_0x0001087f37e0();
LAB_1087f2124:
    func_0x0001087f3724();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iVar21 = (int)puVar10 + 0x38;
    func_0x000107c29e74();
    *(int *)(param_3 + 0x120) = iVar21;
    *(undefined1 *)(param_3 + 0x124) = 1;
    if (puVar10[0x2f] == -2) {
      *(undefined8 *)(param_3 + 0xb0) = 0xfffffffffffffffe;
      *(undefined1 *)(param_3 + 0xb8) = 1;
      func_0x0001087f3580();
      func_0x0001087f365c();
      func_0x000107c278b8(puVar10 + 0x99);
      uVar11 = (ulong)*(uint *)(param_3 + 0x138);
      func_0x000108841bf8(uVar11);
      puVar16 = &uStack_d0;
      func_0x000107c28824(puVar16,puVar10 + 0x99,uVar11);
      func_0x0001087f3650();
      func_0x000107c278b8(puVar10 + 0x75);
      uVar11 = (ulong)*(uint *)(param_3 + 0x13c);
      func_0x000108841c14(uVar11);
      func_0x000107c28824(puVar16,puVar10 + 0x75,uVar11);
      FUN_1087b95a0();
      func_0x0001087f3644();
      func_0x000107c278b8(puVar10 + 0x78);
      uVar8 = *(int *)(param_3 + 0x134) == 0;
      func_0x000107c28818(puVar16,puVar10 + 0x78,uVar8);
      func_0x0001087f3688();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x75);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10 + 0x99);
      func_0x0001087f36e8();
      if ((*(ulong *)(param_3 + 0x120) >> 0x20 & 1) != 0) {
        func_0x0001087f3564();
        func_0x0001087f3690();
      }
      plVar22 = *(long **)(param_2 + 0x40);
      func_0x000107c2884c(puVar10 + 0x57,puVar10 + 0x3f);
      (**(code **)(*plVar22 + 0x50))(plVar22,puVar10 + 0x57);
      func_0x000107c2882c(puVar10 + 0x57);
      func_0x0001087f3678();
      uStack_d0 = (undefined *)0x5;
      goto LAB_1087f20f4;
    }
    *(undefined1 *)(puVar10 + 0x57) = 0;
    *(undefined1 *)(puVar10 + 0x5d) = 0;
    FUN_1087ec008(puVar10 + 0x57,*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x9c),
                  *(undefined4 *)(param_3 + 0x140));
    plVar22 = puVar10 + 0x5e;
    (**(code **)(**(long **)(param_2 + 0x10) + 0x58))
              (plVar22,*(long **)(param_2 + 0x10),param_3 + 0x40,param_3,param_3 + 0x58,
               puVar10 + 0x57);
    puVar25 = puVar10 + 0x6f;
    puVar14 = puVar10 + 0x72;
    puVar10[0x3f] = *plVar22;
    plVar24 = (long *)(*plVar22 + 8);
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar9) {
        *plVar24 = *plVar24 + 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((uint)*(undefined8 *)(puVar10[0x3f] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x9e) = 0;
      lVar26 = puVar10[0x3f];
      ppuVar12 = &PTR___tlv_bootstrap_11340e278;
      (*(code *)PTR___tlv_bootstrap_11340e278)();
      puVar27 = *ppuVar12;
      if (puVar27 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar27 = *ppuVar12;
      }
      plVar24 = (long *)(lVar26 + 0x10);
      do {
        lVar20 = *plVar24;
        if (lVar20 == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            pbVar23 = *(byte **)(lVar26 + 0x90);
            bVar4 = pbVar23[1];
            uVar11 = (ulong)bVar4;
            uVar8 = 0;
            pbVar15 = pbVar23;
            if (bVar4 == *pbVar23) {
              uVar18 = (uint)bVar4 << 1;
              uVar8 = bVar4 == 0x40;
              if (0x7f < uVar18) {
                uVar18 = 0x80;
              }
              pbVar15 = (byte *)(ulong)(uVar18 * 0x18 + 0x10);
              _malloc();
              uVar11 = 0;
              *pbVar15 = (byte)uVar18;
              pbVar15[1] = 0;
              pbVar15[8] = 0;
              pbVar15[9] = 0;
              pbVar15[10] = 0;
              pbVar15[0xb] = 0;
              pbVar15[0xc] = 0;
              pbVar15[0xd] = 0;
              pbVar15[0xe] = 0;
              pbVar15[0xf] = 0;
              *(byte **)(pbVar23 + 8) = pbVar15;
              *(byte **)(lVar26 + 0x90) = pbVar15;
            }
            pbVar23 = pbVar15 + uVar11 * 0x18 + 0x10;
            pbVar23[0] = 0;
            pbVar23[1] = 0;
            pbVar23[2] = 0;
            pbVar23[3] = 0;
            pbVar23[4] = 0;
            pbVar23[5] = 0;
            pbVar23[6] = 0;
            pbVar23[7] = 0;
            *(undefined8 **)(pbVar15 + uVar11 * 0x18 + 0x18) = puVar10;
            *(undefined **)(pbVar15 + uVar11 * 0x18 + 0x20) = puVar27;
            *(char *)(*(long *)(lVar26 + 0x90) + 1) =
                 *(char *)(*(long *)(lVar26 + 0x90) + 1) + '\x01';
            *(undefined8 *)(lVar26 + 0x10) = 0;
            goto LAB_1087f2124;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar20 >> 1 & 1) == 0);
    }
    puVar13 = puVar10 + 0x3f;
    FUN_1087c6770(puVar13);
    FUN_10877d4b8(puVar16,puVar13);
    func_0x0001087f3680();
    func_0x000107c27f9c(plVar22);
    uVar8 = *(int *)(puVar10 + 0x4e) == 1;
    if ((bool)uVar8) {
      plVar24 = plVar22;
      func_0x00010877d53c(plVar22,puVar16);
      uVar18 = (uint)plVar24;
      iVar21 = *(int *)(puVar10 + 100);
      if (iVar21 == 4) {
        func_0x0001087f35cc();
        uVar8 = extraout_x8 == 1;
        uVar17 = 2;
        if (extraout_x8 < 2) {
          uVar17 = uVar8;
        }
        func_0x0001087f385c(uVar17);
        FUN_1087f2a4c();
LAB_1087f2654:
        uVar19 = 0;
        func_0x0001087f3850();
        uVar11 = extraout_x8_01;
      }
      else {
        cVar6 = SBORROW4(iVar21,3);
        cVar7 = iVar21 + -3 < 0;
        uVar8 = iVar21 == 3;
        if ((bool)uVar8) {
          lVar26 = *(long *)(puVar10[99] + 0x30);
          *(long *)(puVar10[0x9d] + 0xb0) = lVar26;
          func_0x0001087f3700();
          if ((bool)uVar8) {
            uStack_b0 = (ulong)(extraout_w10 >> 2 & 1);
            uStack_c8 = 0;
            uStack_d0 = &UNK_10f4bbc99;
            uStack_b8 = 0;
            uStack_a8 = 0;
            func_0x0001087f3808();
            func_0x000107c3173c(puVar25);
            func_0x0001087f376c();
            uVar3 = extraout_x11;
            puVar16 = extraout_x10_00;
            if (cVar7 == cVar6) {
              uVar3 = extraout_x8_03;
              puVar16 = puVar25;
            }
            func_0x00010bd3f434(puVar14,puVar16,uVar3,&UNK_10f4bbca9);
            puVar16 = (undefined8 *)puVar10[0x72];
            if (-1 < *(char *)((long)puVar10 + 0x3a7)) {
              puVar16 = puVar14;
            }
            func_0x0001087f36f0(puVar16);
            goto LAB_1087f2794;
          }
          lVar20 = puVar10[0x2f];
          if (extraout_w8 == 0) {
            func_0x0001087f3754();
            FUN_108681dcc(puVar10 + 0x3f);
            FUN_108681dcc(&uStack_d0,puVar10 + 0x3f);
            uStack_90 = CONCAT71(uStack_90._1_7_,1);
            uVar18 = 3;
            if (lVar26 != lVar20) {
              uVar18 = 4;
            }
            uVar2 = 2;
            if (lVar26 - lVar20 != 1) {
              uVar2 = uVar18;
            }
            uVar18 = 1;
            if (lVar26 - lVar20 < 2) {
              uVar18 = uVar2;
            }
            FUN_1087a47ec(uVar18,&uStack_d0,puVar10[0x9c] + 0x60);
            lVar26 = puVar10[0x9c];
            func_0x000107c29564(&uStack_d0);
            func_0x0001087f37e8(*(undefined8 *)(**(long **)(lVar26 + 0xa8) + 0x10));
            uVar11 = (ulong)*(uint *)(puVar10 + 0x46);
            func_0x0001087f3580();
            func_0x0001087f365c();
            puVar16 = puVar10 + 0x96;
            func_0x000107c278b8(puVar16);
            func_0x0001087f35ac();
            puVar25 = &uStack_d0;
            func_0x000107c28824(puVar25,puVar10 + 0x96,puVar16);
            func_0x0001087f3650();
            puVar16 = puVar10 + 0x93;
            func_0x000107c278b8(puVar16);
            func_0x0001087f35b8();
            func_0x000107c28824(puVar25,puVar10 + 0x93,puVar16);
            FUN_1087ceb70(uVar11);
            FUN_1087b95a0(puVar25,uVar11);
            func_0x0001087f3644();
            func_0x000107c278b8(puVar10 + 0x90);
            func_0x0001087f3598();
            func_0x000107c28818(puVar25,puVar10 + 0x90);
            func_0x000107c2884c(puVar10 + 0x65,puVar25);
            lVar26 = puVar10[0x9d];
            func_0x0001087f36c0();
            func_0x0001087f36d8();
            func_0x0001087f36e0();
            func_0x0001087f36e8();
            if ((*(ulong *)(lVar26 + 0x120) >> 0x20 & 1) != 0) {
              func_0x0001087f3564();
              func_0x000107c29054(puVar10 + 0x65);
            }
            plVar24 = *(long **)(puVar10[0x9c] + 0x40);
            func_0x0001087f37b4();
            (**(code **)(*plVar24 + 0x50))(plVar24,puVar10 + 0x6a);
            uVar18 = uVar18 & 0xffff;
            func_0x0001087f36a8();
            func_0x0001087f35c4();
            if (*(int *)(puVar10 + 0x46) - 1U < 0xc) {
              puVar25 = *(undefined8 **)
                         (&UNK_10df5a170 + (ulong)(*(int *)(puVar10 + 0x46) - 1U) * 8);
            }
            else {
              puVar25 = (undefined8 *)0xc;
            }
            func_0x0001087f3698();
            uVar8 = uVar18 == 0x100;
            uVar19 = 7;
            if (0xff < uVar18) {
              uVar19 = 3;
            }
            uVar11 = 0x100000000;
            goto LAB_1087f2660;
          }
          iVar21 = 3;
          if (lVar26 != lVar20) {
            iVar21 = 4;
          }
          bVar9 = lVar26 - lVar20 == 1;
          iVar1 = 2;
          if (!bVar9) {
            iVar1 = iVar21;
          }
          iVar21 = 1;
          if (lVar26 - lVar20 < 2) {
            iVar21 = iVar1;
          }
          func_0x0001087f3814();
          if (bVar9) {
            if (extraout_w8_00 == 10) {
LAB_1087f25e4:
              if (iVar21 == 3) {
                iVar21 = 2;
              }
              else if (iVar21 == 2) {
                iVar21 = 1;
              }
              goto LAB_1087f2600;
            }
LAB_1087f2618:
            uVar8 = iVar21 == 1;
            uVar17 = 2;
            if (!(bool)uVar8) {
              uVar17 = iVar21 == 2;
            }
          }
          else {
            if (extraout_w9 == 8) {
              if ((extraout_w8_00 & 0xfffffffd) == 8) goto LAB_1087f25e4;
              goto LAB_1087f2618;
            }
LAB_1087f2600:
            if (extraout_w9 == 5) {
              if (extraout_w8_00 != 10) goto LAB_1087f2618;
            }
            else if (extraout_w9 != 8 || (extraout_w8_00 & 0xfffffffd) != 8) goto LAB_1087f2618;
            uVar8 = iVar21 - 1U == 2;
            uVar17 = 2;
            if (1 < iVar21 - 1U) {
              uVar17 = 0;
            }
          }
          func_0x0001087f385c(uVar17);
          FUN_1087f2a4c();
          goto LAB_1087f2654;
        }
        uVar18 = 0;
        func_0x0001087f3850();
        uVar19 = 7;
        uVar11 = extraout_x8_00;
      }
LAB_1087f2660:
      uVar11 = (ulong)puVar25 | uVar11;
      FUN_1088fcbd8(plVar22);
      if ((uVar18 & 1) != 0) {
        plVar22 = *(long **)(puVar10[0x9c] + 0x20);
        uVar8 = *(char *)(puVar10[0x9d] + 0xb8) == '\x01';
        if ((bool)uVar8) {
          uStack_d0 = (undefined *)CONCAT26(uStack_d0._6_2_,0x100120099);
          func_0x0001087f37d4();
          func_0x0001087f383c();
          uStack_88 = uStack_88 & 0xffffffffffffff00;
          uStack_b0 = extraout_x8_02;
          uStack_a8 = extraout_x10;
          uStack_90 = extraout_x9;
          (**(code **)(*plVar22 + 0x28))(plVar22,&uStack_d0);
          func_0x0001086cf1c0(&uStack_d0);
        }
        else {
          func_0x0001087f36c8(*(undefined8 *)(*plVar22 + 0x10),plVar22);
        }
      }
LAB_1087f26e8:
      *(undefined1 *)(puVar10 + 0x4f) = 0;
      *(undefined1 *)(puVar10 + 0x56) = 0;
      uStack_d0 = (undefined *)CONCAT44(uVar19,5);
      func_0x0001087f37a8(&uStack_d0);
      uStack_88 = uVar11;
      func_0x0001087f3628();
      func_0x0001087e49c4(&uStack_d0);
      FUN_1087a33a8(puVar10 + 0x4f);
      func_0x0001087f3668();
      func_0x0001087f363c();
      goto LAB_1087f2114;
    }
    if (*(int *)(puVar10 + 0x4e) == 0) {
      func_0x0001087f3580();
      func_0x0001087f365c();
      puVar16 = puVar10 + 0x8a;
      func_0x000107c278b8(puVar16);
      func_0x0001087f35ac();
      puVar25 = &uStack_d0;
      func_0x000107c28824(puVar25,puVar10 + 0x8a,puVar16);
      func_0x0001087f360c();
      func_0x0001087f35b8();
      func_0x0001087f379c();
      func_0x0001087f37c0();
      FUN_1087b95a0(puVar14,puVar25);
      uVar19 = SUB84(puVar14,0);
      func_0x0001087f35f8();
      func_0x0001087f3598();
      func_0x0001087f3790();
      func_0x0001087f3688();
      lVar26 = puVar10[0x9d];
      func_0x0001087f3670();
      func_0x0001087f36a0();
      func_0x0001087f36b8();
      func_0x0001087f36e8();
      if ((*(ulong *)(lVar26 + 0x120) >> 0x20 & 1) != 0) {
        func_0x0001087f3564();
        func_0x0001087f3690();
      }
      plVar22 = *(long **)(puVar10[0x9c] + 0x40);
      func_0x0001087f3784();
      func_0x0001087f371c(*(undefined8 *)(*plVar22 + 0x50));
      func_0x0001087f35c4();
      func_0x0001087f3678();
      func_0x0001087f37fc();
      uVar11 = 0;
      goto LAB_1087f26e8;
    }
  }
  func_0x00010563ab98();
LAB_1087f2794:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1087f2798);
  (*pcVar5)();
}



/* Entry: 1087f2a4c; end: 1087f2c7f;  */

uint FUN_1087f2a4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined1 auStack_108 [64];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1088fcfe0();
  }
  else {
    func_0x0001087f2c98(param_2 + 0xe0,param_3);
  }
  auStack_108[0] = 0;
  uStack_c8 = 0;
  FUN_1087a47ec(param_4,auStack_108,param_1 + 0x60);
  func_0x000107c29564(auStack_108);
  lVar1 = param_2 + 0x20;
  FUN_1087eb610(lVar1);
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_FUN_110a609a8;
  uStack_70 = 0;
  uStack_58 = 0x1b2;
  func_0x0001087f365c();
  func_0x000107c278b8(auStack_90);
  uVar2 = (ulong)*(uint *)(param_2 + 0x138);
  func_0x000108841bf8(uVar2);
  pppuVar3 = &ppuStack_78;
  func_0x000107c28824(pppuVar3,auStack_90,uVar2);
  func_0x0001087f3650();
  func_0x000107c278b8(auStack_a8);
  uVar2 = (ulong)*(uint *)(param_2 + 0x13c);
  func_0x000108841c14(uVar2);
  func_0x000107c28824(pppuVar3,auStack_a8,uVar2);
  FUN_1087b95a0();
  func_0x0001087f3644();
  func_0x000107c278b8(auStack_c0);
  func_0x000107c28818(pppuVar3,auStack_c0,*(int *)(param_2 + 0x134) == 0);
  func_0x000107c2884c(auStack_108,pppuVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x0001087f37f4();
  if ((*(ulong *)(param_2 + 0x120) >> 0x20 & 1) != 0) {
    func_0x0001087f3564();
    func_0x000107c29054(auStack_108);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  func_0x000107c2884c(&ppuStack_78,auStack_108);
  (**(code **)(*plVar4 + 0x50))(plVar4,&ppuStack_78);
  func_0x0001087f37f4();
  func_0x000107c2882c(auStack_108);
  return ((uint)lVar1 ^ 1) & (uint)param_4 & 0xffff;
}



/* Entry: 1087f2c80; end: 1087f2c83;  */

undefined8 * FUN_1087f2c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72a60;
  func_0x000107c297ac(param_1 + 0x15);
  func_0x000107c30608(param_1 + 0xe);
  func_0x000107c2995c(param_1 + 0xc);
  func_0x000107c289fc(param_1 + 10);
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28808(param_1 + 6);
  func_0x000107c28abc(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087f2c84; end: 1087f2cb3;  */

void FUN_1087f2c84(void)

{
  FUN_1087f2cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f2cb4; end: 1087f2d23;  */

undefined8 * FUN_1087f2cb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72a60;
  func_0x000107c297ac(param_1 + 0x15);
  func_0x000107c30608(param_1 + 0xe);
  func_0x000107c2995c(param_1 + 0xc);
  func_0x000107c289fc(param_1 + 10);
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28808(param_1 + 6);
  func_0x000107c28abc(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}


