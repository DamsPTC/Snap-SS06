/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108276a38; end: 108276af3;  */

void FUN_108276a38(long *param_1,long *param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 < 0x20000001) {
    lVar2 = *param_2;
    iVar3 = *(int *)(lVar2 + 0x14);
    uVar4 = iVar3 + 0xfU & 0xfffffff8;
    iVar6 = (int)param_3;
    iVar5 = uVar4 + iVar6;
    if (*(int *)(lVar2 + 0x10) < iVar5) {
      func_0x00010840fd04(param_2,iVar6 + 0x28,0x20000028);
      lVar2 = *param_2;
      iVar3 = *(int *)(lVar2 + 0x14);
      uVar4 = iVar3 + 0xfU & 0xfffffff8;
      iVar5 = uVar4 + iVar6;
    }
    *(int *)(lVar2 + 0x14) = iVar5;
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = iVar3;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    *(int *)(param_1 + 2) = iVar5;
    return;
  }
  FUN_10841076c(&UNK_10f480d93);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108276af4);
  (*pcVar1)();
}



/* Entry: 108276af4; end: 108276b2f;  */

void FUN_108276af4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_2 + -8);
  plVar6 = (long *)((param_2 + -8) - (long)iVar8 & 0xfffffffffffffff8);
  iVar4 = (int)plVar6[3] + -1;
  if (iVar4 != 0) {
    *(int *)(plVar6 + 3) = iVar4;
    if (*(int *)((long)plVar6 + 0x14) == *(int *)(param_2 + -4)) {
      *(int *)((long)plVar6 + 0x14) = iVar8;
    }
    return;
  }
  if (plVar6 == param_1 + 2) {
    *(undefined8 *)((long)plVar6 + 0x14) = 0x20;
    goto LAB_10840fbd0;
  }
  lVar2 = *plVar6;
  plVar3 = (long *)plVar6[1];
  *plVar3 = lVar2;
  if (lVar2 == 0) {
    *param_1 = plVar3;
  }
  else {
    *(long **)(lVar2 + 8) = plVar3;
  }
  if (param_1[3] == 0) {
    if ((int)plVar6[2] < 1) goto LAB_10840fbc8;
  }
  else {
    if ((int)plVar6[2] <= *(int *)(param_1[3] + 0x10)) {
LAB_10840fbc8:
      __ZdlPv(plVar6);
      goto LAB_10840fbd0;
    }
    __ZdlPv();
  }
  *(undefined4 *)((long)plVar6 + 0x14) = 0xffffffff;
  param_1[3] = plVar6;
LAB_10840fbd0:
  uVar7 = param_1[1];
  if ((uVar7 & 0x1fffffc0000) != 0) {
    uVar5 = (uint)uVar7 >> 0x10 & 3;
    if (uVar7 >> 0x2a != 0 || uVar5 == 2) {
      iVar8 = (int)(uVar7 >> 0x12);
      uVar9 = (uint)(uVar7 >> 0x29);
      uVar1 = uVar7 >> 0x18 & 0xfffffc0000 | (uVar7 >> 0x2a) << 0x29;
      if (uVar5 == 2) {
        uVar1 = (uVar7 >> 0x12) << 0x29 | ((ulong)(uVar9 - iVar8) & 0x7fffff) << 0x12;
      }
      uVar1 = uVar1 | uVar7 & 0x3ffff;
      if (uVar5 == 1) {
        uVar1 = uVar7 & 0x1ffffffffff | (ulong)(uVar9 - iVar8) << 0x29;
      }
      param_1[1] = uVar1;
    }
  }
  return;
}



/* Entry: 108276b30; end: 108276bbf;  */

void FUN_108276b30(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010827b044();
  FUN_10827a000();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(param_1 + 0x60) = unaff_x20[4];
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  *(undefined1 *)(param_1 + 0x6c) = param_4;
  FUN_10810c9b4(param_1 + 0x70);
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined4 *)(unaff_x19 + 0xb8) = 0xffffffff;
  FUN_10818cfd0();
  if (((ulong)unaff_x20 & 1) == 0) {
    FUN_108276bc0();
  }
  return;
}



/* Entry: 108276bc0; end: 108276bc7;  */

void FUN_108276bc0(long param_1)

{
  func_0x00010827a038(param_1,0);
  *(undefined2 *)(param_1 + 0x39) = 0x100;
  if (*(char *)(param_1 + 0x38) == '\x04') {
    if ((*(byte *)(param_1 + 0xe) & 2) != 0) {
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) ^ 2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  return;
}



/* Entry: 108276bc8; end: 108276dc3;  */

undefined8 *
FUN_108276bc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5,long param_6,undefined8 *param_7,undefined8 *param_8,uint param_9)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  code *pcVar7;
  undefined1 in_ZR;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined8 *puVar10;
  int iVar11;
  char in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined8 uVar12;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  long lStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e4 [52];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  undefined8 uStack_58;
  
  puVar10 = &uStack_200;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined8 *)0x1;
  puVar8 = param_4;
  FUN_1082d84dc(param_4,1);
  if ((int)puVar8 == 0) {
LAB_108276d48:
    param_7 = puVar8;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    if (((param_9 & 1) == 0) &&
       (puVar8 = param_5, puVar9 = param_8, func_0x000108363bec(param_5,param_8), (int)puVar8 != 0))
    {
      func_0x00010827b064(uStack_58);
      if ((bool)in_ZR) {
        if (6 < *(byte *)(param_4 + 7)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1082d8274);
          (*pcVar7)();
        }
        func_0x0001082d87dc(param_4,param_7);
                    /* WARNING: Could not recover jumptable at 0x0001082d81b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df16466)[extraout_x8] * 4 + 0x1082d81bc))();
        return param_4;
      }
      goto LAB_108276dc0;
    }
    puVar9 = param_8;
    func_0x0001081420b8();
    if (((int)puVar9 == 0) || (FUN_10827a0d8(), (int)param_5 == 0)) {
      FUN_1082d38bc(auStack_1e4,param_7,param_8);
      puVar9 = param_8;
      if (param_9 != 0) {
        uStack_1f8 = 0x3f0000003f000000;
        uStack_200 = 0x3f0000003f000000;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_71 = 0;
        uStack_80 = 0;
        FUN_1082d52f0(&uStack_1b0,auStack_1e4,0);
        param_7 = &uStack_1b0;
        FUN_1082d7210(param_7,&uStack_200,auStack_1e4,0);
        puVar9 = puVar10;
      }
      uVar12 = 0x3880000038800000;
      param_1 = 0x38800000;
      iVar11 = -(uint)(SUB84(auStack_1e4._32_8_,4) < 6.1035156e-05);
      iVar4 = -(uint)((float)auStack_1e4._40_8_ < 6.1035156e-05);
      iVar6 = -(uint)(SUB84(auStack_1e4._40_8_,4) < 6.1035156e-05);
      auVar1[4] = (char)iVar11;
      auVar1._0_4_ = -(uint)((float)auStack_1e4._32_8_ < 6.1035156e-05);
      auVar1[5] = (char)((uint)iVar11 >> 8);
      auVar1[6] = (char)((uint)iVar11 >> 0x10);
      auVar1[7] = (char)((uint)iVar11 >> 0x18);
      auVar1[8] = (char)iVar4;
      auVar1[9] = (char)((uint)iVar4 >> 8);
      auVar1[10] = (char)((uint)iVar4 >> 0x10);
      auVar1[0xb] = (char)((uint)iVar4 >> 0x18);
      auVar1[0xc] = (char)iVar6;
      auVar1[0xd] = (char)((uint)iVar6 >> 8);
      auVar1[0xe] = (char)((uint)iVar6 >> 0x10);
      auVar1[0xf] = (char)((uint)iVar6 >> 0x18);
      in_b0 = NEON_umaxv(auVar1,1);
      in_register_00005001 = 0;
      in_register_00005002 = 0;
      in_register_00005003 = 0;
      puVar8 = param_7;
      if (in_b0 != '\0') goto LAB_108276d48;
      iVar11 = 0;
      do {
        param_1 = (undefined4)uVar12;
        in_ZR = iVar11 == 4;
        puVar10 = (undefined8 *)(ulong)(byte)in_ZR;
        if ((bool)in_ZR) break;
        FUN_10827a098(auStack_1e4,iVar11);
        uStack_1b0 = CONCAT44((int)uVar12,
                              CONCAT13(in_register_00005003,
                                       CONCAT12(in_register_00005002,
                                                CONCAT11(in_register_00005001,in_b0))));
        func_0x00010827a0cc(param_6,&uStack_1b0,1);
        puVar9 = &uStack_1b0;
        param_7 = param_4;
        FUN_1082d83b8(param_4,puVar9);
        param_1 = (undefined4)uVar12;
        iVar11 = iVar11 + 1;
      } while (((ulong)param_7 & 1) != 0);
    }
    else {
      uStack_1a8 = param_7[1];
      uStack_1b0 = *param_7;
      in_b0 = (char)uStack_1b0;
      in_register_00005001 = (undefined1)((ulong)uStack_1b0 >> 8);
      in_register_00005002 = (undefined1)((ulong)uStack_1b0 >> 0x10);
      in_register_00005003 = (undefined1)((ulong)uStack_1b0 >> 0x18);
      if (param_9 != 0) {
        param_1 = 0xbf000000;
        fVar2 = (float)uStack_1b0 + -0.5;
        in_b0 = SUB41(fVar2,0);
        in_register_00005001 = (undefined1)((uint)fVar2 >> 8);
        in_register_00005002 = (undefined1)((uint)fVar2 >> 0x10);
        in_register_00005003 = (undefined1)((uint)fVar2 >> 0x18);
        fVar3 = (float)((ulong)uStack_1b0 >> 0x20) + -0.5;
        fVar5 = (float)((ulong)uStack_1a8 >> 0x20) + 0.5;
        uStack_1a8 = CONCAT17((char)((uint)fVar5 >> 0x18),
                              CONCAT16((char)((uint)fVar5 >> 0x10),
                                       CONCAT15((char)((uint)fVar5 >> 8),
                                                CONCAT14(SUB41(fVar5,0),(float)uStack_1a8 + 0.5))));
        uStack_1b0 = CONCAT17((char)((uint)fVar3 >> 0x18),
                              CONCAT16((char)((uint)fVar3 >> 0x10),
                                       CONCAT15((char)((uint)fVar3 >> 8),
                                                CONCAT14(SUB41(fVar3,0),fVar2))));
      }
      FUN_108189c38(param_6,&uStack_1b0,1);
      puVar9 = &uStack_1b0;
      param_7 = param_4;
      FUN_1082d817c(param_4,puVar9);
      puVar10 = param_7;
    }
  }
  func_0x00010827b064(uStack_58);
  puVar8 = param_7;
  if ((bool)in_ZR) {
    return puVar10;
  }
LAB_108276dc0:
  ___stack_chk_fail();
  pcStack_208 = FUN_108276dc4;
  lStack_220 = param_6;
  puStack_218 = param_4;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x00010827b044();
  puVar8 = puVar8 + 0x13;
  func_0x000108219544(puVar8,puVar9 + 2);
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10817500c(param_6 + 0x10);
    uStack_230 = CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    uStack_22c = param_1;
    uStack_228 = param_2;
    uStack_224 = param_3;
    FUN_108276bc8(param_4,param_4 + 8,param_4 + 0xe,&uStack_230,0x113254e20,0);
  }
  else {
    param_4 = (undefined8 *)0x1;
  }
  return param_4;
}



/* Entry: 108276dc4; end: 108276e2f;  */

void FUN_108276dc4(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  func_0x00010827b044();
  uVar1 = param_1 + 0x98;
  func_0x000108219544(uVar1,param_2 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_10817500c(unaff_x20 + 0x10);
    FUN_108276bc8();
  }
  return;
}



/* Entry: 108276e30; end: 1082771a3;  */

long * FUN_108276e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long param_5,long param_6)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  func_0x00010827b0ac();
  uVar1 = param_5 + 0x98;
  func_0x000108219544(uVar1,param_6 + 0xa8);
  if ((uVar1 & 1) == 0) {
    if (*(char *)((long)unaff_x20 + 0x6c) == *(char *)((long)unaff_x19 + 0x6c)) {
      plVar4 = unaff_x20 + 8;
      func_0x000108363bec(plVar4,unaff_x19 + 8);
      if ((int)plVar4 != 0) {
        if ((char)unaff_x20[7] == '\x04') {
          if ((char)unaff_x19[7] == '\x04') {
            plVar4 = unaff_x20;
            func_0x0001083772e0();
            plVar2 = unaff_x19;
            func_0x0001083772e0();
            if ((int)plVar4 != (int)plVar2) {
              plVar4 = unaff_x20;
              FUN_1083777ec();
              if (0x10 < (int)plVar4) {
                return (long *)0x0;
              }
              if (unaff_x20 == unaff_x19) {
                return (long *)0x1;
              }
              if (((*(byte *)((long)unaff_x19 + 0xe) ^ *(byte *)((long)unaff_x20 + 0xe)) & 3) != 0)
              {
                return (long *)0x0;
              }
              lVar3 = *unaff_x20;
              lVar5 = *unaff_x19;
              if (*(char *)(lVar3 + 0xc3) == *(char *)(lVar5 + 0xc3)) {
                if (*(int *)(lVar3 + 0x88) == 0 || *(int *)(lVar3 + 0x88) != *(int *)(lVar5 + 0x88))
                {
                  uVar1 = lVar3 + 0x28;
                  FUN_10837e6e4(uVar1,lVar5 + 0x28);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = lVar3 + 0x58;
                    func_0x00010837e6fc(uVar1,lVar5 + 0x58);
                    if ((uVar1 & 1) == 0) {
                      lVar3 = lVar3 + 0x40;
                      func_0x00010837e714(lVar3,lVar5 + 0x40);
                      return (long *)(ulong)((uint)lVar3 ^ 1);
                    }
                  }
                  plVar4 = (long *)0x0;
                }
                else {
                  plVar4 = (long *)0x1;
                }
                return plVar4;
              }
              return (long *)0x0;
            }
            goto LAB_108276e58;
          }
        }
        else if (((char)unaff_x20[7] == '\x03') && ((char)unaff_x19[7] == '\x03')) {
          FUN_108385cbc(&uStack_64);
          plVar4 = (long *)&uStack_64;
          FUN_1081779c4(plVar4);
          return plVar4;
        }
      }
    }
    FUN_1082d8588();
    uStack_64 = param_1;
    uStack_60 = param_2;
    uStack_5c = param_3;
    uStack_58 = param_4;
    FUN_108276bc8();
  }
  else {
LAB_108276e58:
    unaff_x20 = (long *)0x1;
  }
  return unaff_x20;
}



/* Entry: 1082771a4; end: 1082771d3;  */

void FUN_1082771a4(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x38) == '\x04') {
    if (param_2 != (*(byte *)(param_1 + 0xe) & 2) >> 1) {
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) ^ 2;
      return;
    }
  }
  else {
    *(char *)(param_1 + 0x3b) = (char)param_2;
  }
  return;
}



/* Entry: 1082771d4; end: 108277293;  */

undefined1  [16] FUN_1082771d4(float *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((param_1[2] <= *param_1) || (param_1[3] <= param_1[1])) {
    uVar1 = 0;
    uVar6 = 0;
  }
  else {
    pfVar2 = param_1;
    if (param_3 == 0) {
      func_0x00010827b118();
      pfVar3 = pfVar2;
      func_0x00010827b118(param_1[1]);
      pfVar4 = pfVar3;
      func_0x00010827b120(param_1[2]);
      pfVar5 = pfVar4;
      func_0x00010827b120(param_1[3]);
    }
    else {
      func_0x00010827b120();
      pfVar3 = pfVar2;
      func_0x00010827b120(param_1[1]);
      pfVar4 = pfVar3;
      func_0x00010827b118(param_1[2]);
      pfVar5 = pfVar4;
      func_0x00010827b118(param_1[3]);
    }
    uVar1 = (ulong)pfVar2 & 0xffffffff | (long)pfVar3 << 0x20;
    uVar6 = (ulong)pfVar4 & 0xffffffff | (long)pfVar5 << 0x20;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Entry: 108277294; end: 1082772bb;  */

undefined1  [16] FUN_108277294(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x00010827a188(param_1,&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1082772bc; end: 108277373;  */

bool FUN_1082772bc(float *param_1)

{
  if (((ABS((float)(double)(long)(*param_1 + 0.5) - *param_1) <= 0.001) &&
      (ABS((float)(double)(long)(param_1[1] + 0.5) - param_1[1]) <= 0.001)) &&
     (ABS((float)(double)(long)(param_1[2] + 0.5) - param_1[2]) <= 0.001)) {
    return ABS((float)(double)(long)(param_1[3] + 0.5) - param_1[3]) <= 0.001;
  }
  return false;
}



/* Entry: 108277374; end: 1082774bf;  */

void FUN_108277374(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010827b0ac();
  FUN_10827a008(param_1,2);
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1082774c0; end: 108277513;  */

void FUN_1082774c0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  lVar4 = param_2[4];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = lVar4;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 108277514; end: 108277547;  */

void FUN_108277514(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010827b0ac();
  while (*(int *)(unaff_x20 + 0x2c) < *(int *)(unaff_x19 + 0x2c)) {
    FUN_108277548();
  }
  return;
}



/* Entry: 108277548; end: 10827763b;  */

void FUN_108277548(void)

{
  long unaff_x20;
  int iVar1;
  long unaff_x21;
  
  func_0x00010827b140();
  FUN_10827a074(unaff_x20 + unaff_x21);
  iVar1 = (int)unaff_x21;
  if (iVar1 == 0x20) {
    func_0x00010827b084();
  }
  else {
    if (*(int *)(unaff_x20 + 0x14) == iVar1 + 0xc0) {
      *(int *)(unaff_x20 + 0x14) = iVar1;
    }
    *(int *)(unaff_x20 + 0x18) = iVar1 + -0xc0;
  }
  func_0x00010827b130();
  return;
}



/* Entry: 10827763c; end: 10827768b;  */

undefined8 FUN_10827763c(void)

{
  undefined8 unaff_x19;
  
  FUN_108270170();
  func_0x00010827afc0();
  func_0x00010827b280();
  func_0x00010827ac44();
  return unaff_x19;
}



/* Entry: 10827768c; end: 10827772f;  */

void FUN_10827768c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  while (*(int *)(param_1 + 0x28) < *(int *)((long)param_3 + 0x2c)) {
    func_0x00010827b234(*param_3);
    func_0x000108277464();
    func_0x0001082776dc(param_3);
  }
  return;
}



/* Entry: 108277730; end: 10827775f;  */

void FUN_108277730(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((long)param_1 + 0x2c);
  uVar6 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar6;
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  plVar5 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108114f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108277760; end: 10827782b;  */

undefined8 * FUN_108277760(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *plVar6;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (long *)(param_1 + 0x20);
  if (*plVar6 != 0) {
    uStack_30 = *param_2;
    *param_2 = 0;
    lStack_38 = *plVar6;
    if (lStack_38 != 0) {
      piVar1 = (int *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1083ba7d0(&uStack_28,5,&uStack_30,&lStack_38);
    uVar4 = uStack_28;
    uStack_28 = 0;
    func_0x000108114f18(plVar6,uVar4);
    func_0x000106f47224(&uStack_28);
    func_0x000106f47224(&lStack_38);
    puVar5 = &uStack_30;
    func_0x000106f47224(puVar5);
    return puVar5;
  }
  func_0x000108166498(plVar6);
  func_0x000108114f18();
  return unaff_x19;
}



/* Entry: 10827782c; end: 108277e1b;  */

/* WARNING: Type propagation algorithm not settling */

int * FUN_10827782c(int *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  byte bVar13;
  int *unaff_x19;
  undefined8 *unaff_x20;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long alStack_150 [2];
  int iStack_140;
  long alStack_138 [2];
  int iStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_114 [48];
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((char)param_1[0xf] == '\0') {
    return (int *)0x0;
  }
  func_0x00010827b044();
  if (*(char *)(param_2 + 0x38) == '\0') goto LAB_1082778d8;
  iVar12 = *(int *)(unaff_x20 + 0xd);
  if (unaff_x19[0xe] == 1) {
    param_1 = unaff_x19 + 4;
    FUN_10821a044(param_1,unaff_x20 + 0x15);
    if (iVar12 == 1) {
      if ((int)param_1 == 0) goto LAB_1082778d8;
      func_0x00010827b0a0();
      if (((ulong)param_1 & 1) != 0) {
        return (int *)0x0;
      }
      func_0x00010827b078();
      goto joined_r0x0001082778f4;
    }
    if ((int)param_1 == 0) {
      return param_1;
    }
    func_0x00010827b0a0();
joined_r0x0001082778c4:
    if (((ulong)param_1 & 1) != 0) {
LAB_1082778d8:
      *(undefined1 *)(unaff_x19 + 0xf) = 0;
      return (int *)0x1;
    }
  }
  else {
    if (iVar12 == 1) {
      param_1 = (int *)(unaff_x20 + 0x15);
      FUN_10821a044(param_1,unaff_x19 + 4);
      if ((int)param_1 == 0) goto LAB_108277904;
      func_0x00010827b078();
      goto joined_r0x0001082778c4;
    }
    func_0x00010827b078();
    if (((ulong)param_1 & 1) != 0) {
      return (int *)0x0;
    }
    func_0x00010827b0a0();
joined_r0x0001082778f4:
    if (((ulong)param_1 & 1) != 0) goto LAB_108277904;
  }
  if ((char)unaff_x19[0xf] == '\x01') {
LAB_108277904:
    FUN_108277e1c();
    return (int *)0x1;
  }
  if (unaff_x19[0xe] == 1) {
    piVar8 = unaff_x19 + 4;
    if (*(int *)(unaff_x20 + 0xd) == 1) {
      func_0x00010821b838(piVar8,unaff_x20 + 0x15);
      piVar8 = unaff_x19;
      func_0x00010821b838();
      if (((ulong)piVar8 & 1) == 0) {
        unaff_x19[0] = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        unaff_x19[3] = 0;
      }
      goto LAB_1082779c0;
    }
    puVar7 = unaff_x20 + 0x13;
    func_0x00010827b18c();
    *(int **)(unaff_x19 + 4) = piVar8;
    *(undefined8 **)(unaff_x19 + 6) = puVar7;
    puVar7 = unaff_x20 + 0x15;
    piVar8 = unaff_x19;
  }
  else {
    if (*(int *)(unaff_x20 + 0xd) != 1) {
      FUN_10838eae0(unaff_x19 + 4,unaff_x20 + 0x15);
      if ((unaff_x19[3] - unaff_x19[1]) * (unaff_x19[2] - *unaff_x19) <
          (*(int *)((long)unaff_x20 + 0xa4) - *(int *)((long)unaff_x20 + 0x9c)) *
          (*(int *)(unaff_x20 + 0x14) - *(int *)(unaff_x20 + 0x13))) {
        uVar17 = unaff_x20[0x13];
        *(undefined8 *)(unaff_x19 + 2) = unaff_x20[0x14];
        *(undefined8 *)unaff_x19 = uVar17;
      }
      goto LAB_1082779c0;
    }
    uStack_98 = *(undefined8 *)(unaff_x19 + 6);
    uStack_a0 = *(undefined8 *)(unaff_x19 + 4);
    puVar7 = unaff_x20 + 0x15;
    piVar8 = unaff_x19;
    func_0x00010827b18c();
    *(undefined8 **)(unaff_x19 + 4) = puVar7;
    *(int **)(unaff_x19 + 6) = piVar8;
    piVar8 = (int *)(unaff_x20 + 0x13);
    puVar7 = &uStack_a0;
  }
  FUN_108277ec0();
  *(int **)unaff_x19 = piVar8;
  *(undefined8 **)(unaff_x19 + 2) = puVar7;
LAB_1082779c0:
  iVar12 = *(int *)((long)param_3 + 0x2c);
  iVar14 = unaff_x19[0xb] + -1;
  puStack_120 = param_3;
  FUN_10827763c(alStack_138,&puStack_120);
  func_0x00010827ac24(alStack_150,0,0);
  puVar7 = (undefined8 *)0x0;
  iVar16 = iVar12;
  iVar15 = iVar12;
  do {
    if (((alStack_150[0] == alStack_138[0]) && ((alStack_150[0] == 0 || (iStack_140 == iStack_128)))
        ) || (iVar16 <= unaff_x19[0xc])) {
      iVar16 = iVar15;
      if (iVar12 <= iVar15) {
        iVar16 = iVar12;
      }
      unaff_x19[0xc] = iVar16;
      if (iVar12 == *(int *)((long)param_3 + 0x2c)) {
        puVar11 = unaff_x20;
        func_0x0001082773d4();
      }
      else {
        puVar11 = (undefined8 *)0x4;
      }
      *(char *)(unaff_x19 + 0xf) = (char)puVar11;
      if ((unaff_x19[0xe] == 0) && (*(int *)(unaff_x20 + 0xd) == 1)) {
        unaff_x19[0xe] = 1;
      }
      iVar12 = 1;
      if (puVar7 == (undefined8 *)0x0 || iVar14 < iVar15) {
        iVar12 = 2;
      }
      while( true ) {
        iVar16 = (int)puVar11;
        if (*(int *)((long)param_3 + 0x2c) <= iVar12 + iVar14) break;
        puVar11 = param_3;
        FUN_108277548();
      }
      if (puVar7 == (undefined8 *)0x0 || iVar14 < iVar15) {
        if (*(int *)((long)param_3 + 0x2c) < iVar12 + iVar14) {
          func_0x00010827b174();
          goto LAB_108277e10;
        }
        func_0x00010827b234(*param_3);
        puVar7 = puVar11;
      }
      iVar16 = (int)puVar7;
      FUN_108277f10();
LAB_108277e10:
      FUN_108277fa8();
      unaff_x19[0x10] = iVar16;
      return (int *)0x1;
    }
    puVar11 = (undefined8 *)(alStack_138[0] + iStack_128);
    if (-1 < *(int *)(puVar11 + 0x17)) goto LAB_108277a3c;
    iVar6 = *(int *)(unaff_x20 + 0xd);
    puVar10 = puVar11;
    if (*(int *)(puVar11 + 0xd) == 1) {
      puVar9 = puVar11 + 0x15;
      FUN_10821a044(puVar9,unaff_x20 + 0x15);
      if (iVar6 == 1) {
        if ((int)puVar9 != 0) {
          func_0x00010827b268();
          FUN_108276e30();
          if (((ulong)puVar9 & 1) == 0) goto LAB_108277b20;
          goto LAB_108277ad4;
        }
LAB_108277ab8:
        iVar6 = unaff_x19[0xb];
        *(int *)(puVar11 + 0x17) = iVar6;
      }
      else {
        if ((int)puVar9 != 0) {
          func_0x00010827b268();
LAB_108277ab0:
          FUN_108276e30();
          if (((ulong)puVar9 & 1) == 0) goto LAB_108277b34;
          goto LAB_108277ab8;
        }
LAB_108277ad4:
        iVar6 = unaff_x19[0xb];
      }
      *(int *)(unaff_x20 + 0x17) = iVar6;
    }
    else {
      if (iVar6 == 1) {
        puVar10 = unaff_x20 + 0x15;
        FUN_10821a044(puVar10,puVar11 + 0x15);
        puVar9 = puVar11;
        if ((int)puVar10 != 0) goto LAB_108277ab0;
LAB_108277b28:
        *(int *)(puVar11 + 0x17) = unaff_x19[0xb];
      }
      else {
        FUN_108276e30();
        if (((ulong)puVar10 & 1) != 0) goto LAB_108277ad4;
        func_0x00010827b268();
LAB_108277b20:
        FUN_108276e30();
        if (((ulong)puVar10 & 1) != 0) goto LAB_108277b28;
LAB_108277b34:
        if (*(int *)(puVar11 + 0xd) != 1 || *(int *)(unaff_x20 + 0xd) != 1) goto LAB_108277a3c;
        cVar2 = *(char *)(unaff_x20 + 7);
        if (cVar2 == '\x02') {
          bVar13 = *(byte *)(puVar11 + 7);
          if (bVar13 != 2) goto LAB_108277bb8;
          cVar2 = *(char *)((long)unaff_x20 + 0x6c);
          cVar3 = *(char *)((long)puVar11 + 0x6c);
          iVar6 = (int)unaff_x20 + 0x40;
          func_0x0001081420b8();
          if (iVar6 == 0) {
LAB_108277c08:
            if (cVar2 != cVar3) goto LAB_108277a3c;
          }
          else {
            iVar6 = (int)puVar11 + 0x40;
            func_0x0001081420b8();
            if ((cVar2 == cVar3) || (iVar6 == 0)) goto LAB_108277c08;
            puVar10 = unaff_x20;
            func_0x0001082772bc();
            if ((int)puVar10 == 0) {
              puVar10 = puVar11;
              func_0x0001082772bc();
              if (((ulong)puVar10 & 1) == 0) goto LAB_108277a3c;
            }
            else {
              *(undefined1 *)((long)unaff_x20 + 0x6c) = *(undefined1 *)((long)puVar11 + 0x6c);
            }
          }
          puVar10 = unaff_x20 + 8;
          func_0x000108363bec(puVar10,puVar11 + 8);
          if ((int)puVar10 != 0) {
            func_0x00010827b268();
            FUN_10838ed10();
            if (((ulong)puVar10 & 1) == 0) {
LAB_108277cbc:
              FUN_108276bc0();
              *(int *)(unaff_x20 + 0x17) = unaff_x19[0xb];
              goto LAB_108277b28;
            }
LAB_108277ce4:
            func_0x00010821b838(unaff_x20 + 0x15,puVar11 + 0x15);
            puVar10 = unaff_x20 + 0x13;
            func_0x00010821b838(puVar10,puVar11 + 0x13);
            if (((ulong)puVar10 & 1) == 0) {
              unaff_x20[0x13] = 0;
              unaff_x20[0x14] = 0;
            }
            goto LAB_108277b28;
          }
        }
        else if (cVar2 == '\x03') {
          bVar13 = *(byte *)(puVar11 + 7);
LAB_108277bb8:
          if (((bVar13 & 0xfe) == 2) &&
             (*(char *)((long)unaff_x20 + 0x6c) == *(char *)((long)puVar11 + 0x6c))) {
            puVar10 = unaff_x20 + 8;
            func_0x000108363bec(puVar10,puVar11 + 8);
            if ((int)puVar10 != 0) {
              if (cVar2 == '\x02') {
                func_0x000108277358(&uStack_a0);
                bVar13 = *(byte *)(puVar11 + 7);
              }
              else {
                uStack_98 = unaff_x20[1];
                uStack_a0 = *unaff_x20;
                uStack_88 = unaff_x20[3];
                uStack_90 = unaff_x20[2];
                uStack_78 = unaff_x20[5];
                uStack_80 = unaff_x20[4];
                uStack_70 = *(undefined4 *)(unaff_x20 + 6);
              }
              if (bVar13 == 2) {
                func_0x000108277358(&uStack_e0,puVar11);
              }
              else {
                uStack_d8 = puVar11[1];
                uStack_e0 = *puVar11;
                uStack_c8 = puVar11[3];
                uStack_d0 = puVar11[2];
                uStack_b8 = puVar11[5];
                uStack_c0 = puVar11[4];
                uStack_b0 = *(undefined4 *)(puVar11 + 6);
              }
              FUN_108385cbc(auStack_114,&uStack_a0,&uStack_e0);
              if (iStack_e4 == 0) {
                puVar10 = &uStack_a0;
                func_0x00010814000c(puVar10,&uStack_e0);
                if (((ulong)puVar10 & 1) != 0) goto LAB_108277a3c;
                goto LAB_108277cbc;
              }
              if (iStack_e4 == 1) {
                FUN_108277374();
              }
              else {
                func_0x00010827739c();
              }
              goto LAB_108277ce4;
            }
          }
        }
      }
LAB_108277a3c:
      iVar6 = *(int *)(unaff_x20 + 0x17);
    }
    uVar1 = *(uint *)(puVar11 + 0x17);
    if (-1 < iVar6) {
      if ((int)uVar1 < 0) {
        return (int *)(ulong)(~uVar1 >> 0x1f);
      }
      *(undefined1 *)(unaff_x19 + 0xf) = 0;
      return (int *)(ulong)(~uVar1 >> 0x1f);
    }
    iVar6 = iVar16 + -1;
    iVar4 = iVar15;
    iVar5 = iVar14;
    if ((int)uVar1 < 0) {
      puVar11 = puVar7;
      iVar12 = iVar6;
      iVar5 = iVar6;
      if (iVar6 <= iVar14) {
        iVar5 = iVar14;
      }
    }
    else {
      iVar4 = iVar6;
      if (iVar16 <= unaff_x19[0xb]) {
        puVar11 = puVar7;
        iVar4 = iVar15;
      }
    }
    iVar14 = iVar5;
    iVar15 = iVar4;
    func_0x000108277660(alStack_138);
    puVar7 = puVar11;
    iVar16 = iVar6;
  } while( true );
}



/* Entry: 108277e1c; end: 108277ebf;  */

void FUN_108277e1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x00010827b044();
  uVar3 = param_2[0x13];
  param_1[1] = param_2[0x14];
  *param_1 = uVar3;
  uVar3 = param_2[0x15];
  param_1[3] = param_2[0x16];
  param_1[2] = uVar3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0xd);
  func_0x0001082773d4();
  *(char *)(unaff_x19 + 0x3c) = (char)param_2;
  iVar1 = *(int *)(unaff_x19 + 0x2c);
  while( true ) {
    uVar2 = SUB84(param_2,0);
    if (*(int *)((long)param_3 + 0x2c) <= iVar1 + 1) break;
    param_2 = param_3;
    FUN_108277548();
  }
  if (iVar1 < *(int *)((long)param_3 + 0x2c)) {
    func_0x00010827b234(*param_3);
    FUN_108277f10();
  }
  else {
    func_0x00010827b174();
  }
  *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x19 + 0x2c);
  FUN_108277fa8();
  *(undefined4 *)(unaff_x19 + 0x40) = uVar2;
  return;
}



/* Entry: 108277ec0; end: 108277f0f;  */

undefined1  [16] FUN_108277ec0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  FUN_10838edd8(param_1,param_2,&uStack_40);
  bVar1 = (param_3 & ((uint)puVar2 ^ 1)) == 0;
  puVar2 = param_1 + 1;
  if (bVar1) {
    puVar2 = &uStack_38;
  }
  auVar3._8_8_ = *puVar2;
  if (bVar1) {
    param_1 = &uStack_40;
  }
  auVar3._0_8_ = *param_1;
  return auVar3;
}



/* Entry: 108277f10; end: 108277fa7;  */

void FUN_108277f10(long param_1)

{
  long unaff_x19;
  
  func_0x00010827b0ac();
  FUN_1082d7898();
  func_0x00010827b050();
  _memcpy(param_1 + 0x70,unaff_x19 + 0x70,0x4c);
  return;
}



/* Entry: 108277fa8; end: 108277fcb;  */

void FUN_108277fa8(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  do {
    uVar3 = uRam0000000113254cc8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113254cc8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      uRam0000000113254cc8 = uRam0000000113254cc8 + 1;
    }
  } while (cVar1 != '\0' || uVar3 < 3);
  return;
}



/* Entry: 108277fcc; end: 10827809b;  */

undefined8 *
FUN_108277fcc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a348a8;
  FUN_10827ac84(param_1 + 1,0,0x620);
  func_0x00010827ac8c(param_1 + 0x1f,0,0x260);
  func_0x00010827ac94(param_1 + 0x37,0,0x160);
  param_1[0x47] = 0;
  uVar1 = *param_2;
  param_1[0x49] = param_2[1];
  param_1[0x48] = uVar1;
  param_1[0x4a] = param_3;
  *(undefined1 *)(param_1 + 0x4b) = param_4;
  FUN_10827809c(param_1 + 0x1f,param_2);
  return param_1;
}



/* Entry: 10827809c; end: 1082780df;  */

void FUN_10827809c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010827aecc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1082780e0; end: 108278177;  */

long FUN_1082780e0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x238) != 0) {
    lStack_28 = param_1 + 0x1b8;
    func_0x00010827b1a8();
    func_0x00010827afe8();
    func_0x00010827af18();
    while ((func_0x00010827afd8(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
           ((extraout_x9 != 0 &&
            (func_0x00010827b090(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
      in_ZR = 0;
      func_0x000108277464(lVar1 + iVar2,*(undefined8 *)(param_1 + 0x238));
      func_0x00010827819c(auStack_40);
    }
  }
  FUN_10827ae48(param_1 + 0x1b8);
  FUN_10827ad28(param_1 + 0xf8);
  FUN_10827ac9c(param_1 + 8);
  return param_1;
}



/* Entry: 108278178; end: 1082781d7;  */

undefined8 FUN_108278178(void)

{
  undefined8 unaff_x19;
  
  FUN_108270170();
  func_0x00010827afc0();
  func_0x00010827b280();
  func_0x00010827af38();
  return unaff_x19;
}



/* Entry: 1082781d8; end: 1082781db;  */

long FUN_1082781d8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x238) != 0) {
    lStack_28 = param_1 + 0x1b8;
    func_0x00010827b1a8();
    func_0x00010827afe8();
    func_0x00010827af18();
    while ((func_0x00010827afd8(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
           ((extraout_x9 != 0 &&
            (func_0x00010827b090(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
      in_ZR = 0;
      func_0x000108277464(lVar1 + iVar2,*(undefined8 *)(param_1 + 0x238));
      func_0x00010827819c(auStack_40);
    }
  }
  FUN_10827ae48(param_1 + 0x1b8);
  FUN_10827ad28(param_1 + 0xf8);
  FUN_10827ac9c(param_1 + 8);
  return param_1;
}



/* Entry: 1082781dc; end: 1082781ef;  */

void FUN_1082781dc(void)

{
  FUN_1082780e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082781f0; end: 1082782c3;  */

void FUN_1082781f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x9;
  int iVar5;
  long *plVar6;
  int iStack_58;
  undefined1 auStack_50 [16];
  int iStack_40;
  long lStack_38;
  
  plVar6 = (long *)(param_1 + 0xf8);
  lVar1 = *plVar6 + (long)*(int *)(*plVar6 + 0x18);
  iVar5 = *(int *)(lVar1 + 0x34);
  *(int *)(lVar1 + 0x34) = iVar5 + -1;
  uVar3 = iVar5 == 0;
  if (0 < iVar5) {
    return;
  }
  FUN_108277514(lVar1,param_1 + 8);
  if (*(long *)(param_1 + 0x238) != 0) {
    func_0x00010827b1bc();
  }
  plVar4 = plVar6;
  func_0x00010827826c();
  func_0x00010827b234(*plVar6);
  lStack_38 = param_1 + 8;
  iVar5 = *(int *)(param_1 + 0x34);
  FUN_10827763c(auStack_50,&lStack_38);
  func_0x00010827afe8();
  func_0x00010827ac24();
  for (; ((func_0x00010827afd8(), !(bool)uVar3 || ((extraout_x9 != 0 && (iStack_58 != iStack_40))))
         && ((int)plVar4[6] < iVar5)); iVar5 = iVar5 + -1) {
    iVar2 = *(int *)(extraout_x8 + iStack_40 + 0xb8);
    uVar3 = *(int *)((long)plVar4 + 0x2c) == iVar2;
    if (*(int *)((long)plVar4 + 0x2c) < iVar2) {
      *(undefined4 *)(extraout_x8 + iStack_40 + 0xb8) = 0xffffffff;
    }
    func_0x000108277660(auStack_50);
  }
  return;
}



/* Entry: 1082782c4; end: 10827832f;  */

undefined1  [16] FUN_1082782c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0xf8) + (long)*(int *)(*(long *)(param_1 + 0xf8) + 0x18);
  cVar8 = '\0';
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    cVar8 = '\x04';
  }
  cVar3 = *(char *)(lVar2 + 0x3c);
  if (*(long *)(lVar2 + 0x20) != 0) {
    cVar3 = cVar8;
  }
  if (cVar3 == '\0') {
    uVar7 = 0;
    uVar6 = 0;
  }
  else if (cVar3 == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x240);
    uVar6 = *(undefined8 *)(param_1 + 0x248);
  }
  else {
    if (*(int *)(lVar2 + 0x38) == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x240);
      puVar5 = puVar1;
      FUN_10838edd8(puVar1,lVar2,&uStack_40);
      bVar4 = (((uint)puVar5 ^ 1) & 1) == 0;
      puVar5 = (undefined8 *)(param_1 + 0x248);
      if (bVar4) {
        puVar5 = &uStack_38;
      }
      auVar10._8_8_ = *puVar5;
      if (bVar4) {
        puVar1 = &uStack_40;
      }
      auVar10._0_8_ = *puVar1;
      return auVar10;
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
  }
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 108278330; end: 108278537;  */

void FUN_108278330(undefined4 *param_1,long param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [20];
  
  FUN_10827a3ac(auStack_54,param_3,(param_4 | *(byte *)(param_2 + 600)) & 1);
  puVar2 = auStack_44;
  func_0x00010821b838(puVar2,param_2 + 0x240);
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = *(long *)(param_2 + 0xf8) + (long)*(int *)(*(long *)(param_2 + 0xf8) + 0x18);
    cVar5 = '\0';
    if (*(char *)(uVar3 + 0x3c) != '\0') {
      cVar5 = '\x04';
    }
    cVar1 = *(char *)(uVar3 + 0x3c);
    if (*(long *)(uVar3 + 0x20) != 0) {
      cVar1 = cVar5;
    }
    uVar4 = 1;
    if (cVar1 == '\x01') goto LAB_1082783ac;
    if (cVar1 != '\0') {
      func_0x0001082784b0(uVar3,auStack_54);
                    /* WARNING: Could not recover jumptable at 0x000108278400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df12bbf)[uVar3 & 0xffffffff] * 4 + 0x1082783a8))();
      return;
    }
  }
  uVar4 = 2;
LAB_1082783ac:
  *param_1 = uVar4;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  return;
}



/* Entry: 108278538; end: 1082785a7;  */

undefined4 *
FUN_108278538(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined1 param_6)

{
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  func_0x000108277358(&uStack_64,&uStack_30);
  *param_5 = 0;
  *(undefined8 *)(param_5 + 3) = uStack_5c;
  *(undefined8 *)(param_5 + 1) = uStack_64;
  *(undefined8 *)(param_5 + 7) = uStack_4c;
  *(undefined8 *)(param_5 + 5) = uStack_54;
  *(undefined8 *)(param_5 + 0xb) = uStack_3c;
  *(undefined8 *)(param_5 + 9) = uStack_44;
  param_5[0xd] = uStack_34;
  *(undefined1 *)(param_5 + 0xe) = param_6;
  *(undefined1 *)((long)param_5 + 0x39) = 1;
  return param_5;
}



/* Entry: 1082785a8; end: 108279a8f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_1082785a8(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
             undefined ******param_5,undefined ******param_6,undefined ******param_7,
             undefined *****param_8,int param_9,long param_10,undefined ******param_11)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined ****ppppuVar9;
  undefined *****pppppuVar10;
  undefined ******ppppppuVar11;
  undefined *****pppppuVar12;
  undefined ******ppppppuVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  undefined *****pppppuVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  undefined ******extraout_x8;
  long extraout_x8_00;
  long lVar21;
  undefined *****pppppuVar22;
  char cVar23;
  int iVar24;
  undefined8 uVar25;
  undefined *****unaff_x22;
  undefined4 uVar26;
  undefined *****pppppuVar27;
  undefined ******ppppppuVar28;
  float fVar29;
  undefined ******ppppppuVar30;
  undefined8 uVar31;
  undefined ******ppppppuVar32;
  float fVar33;
  undefined *in_stack_fffffffffffffcf0;
  int iStack_2bc;
  long lStack_2a0;
  undefined *****pppppuStack_298;
  undefined *****pppppuStack_290;
  undefined *****pppppuStack_288;
  undefined *****pppppuStack_280;
  byte bStack_271;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *****pppppuStack_258;
  undefined *****pppppuStack_250;
  undefined8 uStack_248;
  undefined *****pppppuStack_240;
  undefined *****pppppuStack_234;
  undefined *****pppppuStack_22c;
  undefined1 auStack_224 [16];
  byte bStack_214;
  undefined *****pppppuStack_210;
  undefined *****pppppuStack_208;
  undefined *****pppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1e4;
  undefined *puStack_1e0;
  undefined *****pppppuStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *****pppppuStack_1b8;
  undefined ****appppuStack_1b0 [4];
  undefined *****pppppuStack_190;
  undefined8 uStack_188;
  int aiStack_180 [2];
  undefined ****ppppuStack_178;
  undefined8 uStack_170;
  undefined *****pppppuStack_168;
  undefined8 uStack_160;
  undefined *****pppppuStack_158;
  undefined **ppuStack_150;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  undefined ***pppuStack_138;
  ulong uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined8 uStack_a0;
  undefined *****pppppuStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_5[0x47] == (undefined *****)0x0) {
    param_5[0x47] = param_6[9];
  }
  pppppuVar27 = (undefined *****)param_6[2][0x17];
  uVar5 = param_9 == 0;
  ppppppuVar28 = &pppppuStack_234;
  FUN_10827a3ac(&pppppuStack_234,param_11,!(bool)uVar5 | *(byte *)(param_5 + 0x4b) & 1);
  puVar8 = auStack_224;
  func_0x00010821b838(puVar8,param_5 + 0x48);
  if ((int)puVar8 == 0) {
LAB_108278688:
    uVar25 = 2;
    goto LAB_10827868c;
  }
  FUN_10817500c(param_5 + 0x48);
  func_0x00010827b028();
  unaff_x22 = (undefined *****)((long)param_5[0x1f] + (long)*(int *)(param_5[0x1f] + 3));
  cVar23 = '\0';
  if (*(char *)((long)unaff_x22 + 0x3c) != '\0') {
    cVar23 = '\x04';
  }
  uVar5 = unaff_x22[4] == (undefined ****)0x0;
  cVar1 = *(char *)((long)unaff_x22 + 0x3c);
  if (!(bool)uVar5) {
    cVar1 = cVar23;
  }
  lStack_2a0 = param_10;
  pppppuStack_298 = (undefined *****)param_7;
  if (cVar1 == '\0') goto LAB_108278688;
  uVar5 = cVar1 == '\x01';
  if (!(bool)uVar5) {
    pppppuStack_240 = (undefined *****)0x0;
    if (unaff_x22[4] == (undefined ****)0x0) goto LAB_108278768;
    if ((bRam000000011372a4a8 & 1) == 0) goto LAB_108279764;
    goto LAB_1082786d4;
  }
  do {
    uVar25 = 1;
LAB_10827868c:
    func_0x00010827b064(uStack_78);
    if ((bool)uVar5) {
      return uVar25;
    }
    ___stack_chk_fail();
LAB_108279764:
    iVar24 = 0x1372a4a8;
    ___cxa_guard_acquire();
    if (iVar24 != 0) {
      uStack_248 = 0;
      FUN_10828adb8(0x11372a4b0,0,2,&uStack_248);
      FUN_10810a400(&uStack_248);
      ___cxa_guard_release(&bRam000000011372a4a8);
    }
LAB_1082786d4:
    pppppuStack_158 = pppppuStack_298 + 10;
    pppppuStack_168 = pppppuStack_298;
    uStack_160 = (undefined ******)0x11372a4b0;
    ppuStack_150 = (undefined **)((ulong)ppuStack_150 & 0xffffffff00000000);
    ppppuVar9 = unaff_x22[4];
    FUN_10829b838(appppuStack_1b0,ppppuVar9,&pppppuStack_168,param_5[0x4a]);
    func_0x00010827b240();
    ppppppuVar30 = extraout_x8;
    if (ppppuVar9 != (undefined ****)0x0) {
      func_0x00010827af88();
      ppppuVar9 = appppuStack_1b0[0];
      appppuStack_1b0[0] = (undefined ****)0x0;
      ppppppuVar30 = (undefined ******)pppppuStack_240;
      if ((undefined *****)ppppuVar9 != (undefined *****)0x0) {
        func_0x00010827af88();
        ppppppuVar30 = (undefined ******)pppppuStack_240;
      }
    }
    if (ppppppuVar30 != (undefined ******)0x0) {
      pppppuStack_240 = (undefined *****)0x0;
      ppppppuVar32 = &pppppuStack_250;
      pppppuStack_250 = (undefined *****)ppppppuVar30;
      FUN_108296588(appppuStack_1b0);
      func_0x00010827b240();
      if (ppppppuVar32 != (undefined ******)0x0) {
        func_0x00010827af88();
        ppppuVar9 = appppuStack_1b0[0];
        appppuStack_1b0[0] = (undefined ****)0x0;
        if ((undefined *****)ppppuVar9 != (undefined *****)0x0) {
          func_0x00010827af88();
        }
      }
      pppppuVar12 = pppppuStack_250;
      pppppuStack_250 = (undefined *****)0x0;
      if ((undefined ******)pppppuVar12 != (undefined ******)0x0) {
        func_0x00010827af88();
      }
    }
LAB_108278768:
    pppppuVar10 = unaff_x22;
    func_0x0001082784b0(unaff_x22,&pppppuStack_234);
    pppppuVar12 = pppppuStack_240;
    if ((int)pppppuVar10 == 0) {
      uVar25 = 2;
      goto LAB_10827974c;
    }
    uVar5 = (int)pppppuVar10 == 2;
    if (!(bool)uVar5) {
      uStack_270 = (undefined ******)0x0;
      uStack_268 = (undefined *****)0x0;
      if (*(int *)(unaff_x22 + 7) == 1) {
        uStack_270 = (undefined ******)unaff_x22[2];
        uStack_268 = (undefined *****)unaff_x22[3];
      }
      else {
        ppppppuVar30 = ppppppuVar28 + 2;
        pppppuVar12 = unaff_x22;
        func_0x00010827b18c();
        uStack_270 = ppppppuVar30;
        uStack_268 = pppppuVar12;
      }
      bVar6 = unaff_x22[4] != (undefined ****)0x0;
      ppppppuVar11 = (undefined ******)pppppuStack_298;
      func_0x0001082c2294();
      aiStack_180[0] = 0;
      pppppuStack_190 = appppuStack_1b0;
      uStack_188 = 0x800000000;
      pppppuVar12 = param_6[8];
      FUN_108293de4();
      pppppuStack_288 = (undefined *****)(param_5 + 1);
      iVar24 = *(int *)((long)param_5 + 0x34);
      FUN_108279b94(&pppppuStack_168,&pppppuStack_288);
      FUN_10827ac04(&pppppuStack_98,0,0);
      iVar24 = iVar24 + 1;
      iStack_2bc = 4;
      uVar2 = 0;
      ppppppuVar32 = (undefined ******)0x7fffffff;
      ppppppuVar30 = (undefined ******)0x8;
      do {
        if ((pppppuStack_98 == pppppuStack_168) &&
           ((uVar5 = true, (undefined ******)pppppuStack_98 == (undefined ******)0x0 ||
            (uVar5 = true, iStack_88 == (int)pppppuStack_158)))) {
LAB_108278dc0:
          if (!bVar6) {
            uVar25 = 1;
            goto LAB_108279740;
          }
          uVar5 = *(int *)(unaff_x22 + 7) != 1 || (uint)uStack_188 == 0;
          if (*(int *)(unaff_x22 + 7) == 1 && (uint)uStack_188 != 0) {
            func_0x00010821b838(&uStack_270,ppppppuVar28 + 2);
          }
          ppppppuVar32 = (undefined ******)(ulong)bStack_214;
          ppppppuVar30 = param_11;
          func_0x00010827b1b4();
          puVar17 = &uStack_270;
          pppppuStack_168 = (undefined *****)ppppppuVar30;
          uStack_160 = ppppppuVar32;
          func_0x000108219544(puVar17,&pppppuStack_168);
          if ((((ulong)puVar17 & 1) == 0) &&
             (lVar21 = lStack_2a0, FUN_10827a430(lStack_2a0,&uStack_270), (int)lVar21 != 0)) {
            FUN_10817500c(&uStack_270);
            func_0x00010827b028();
          }
          if (aiStack_180[0] != 0) {
            *(undefined1 *)(lStack_2a0 + 0x18) = 0;
            func_0x00010827a458(lStack_2a0 + 0x20,aiStack_180);
          }
          if ((uint)uStack_188 == 0) goto LAB_108279710;
          pppppuVar12 = (undefined *****)pppppuStack_298[2];
          if (pppppuVar12 != (undefined *****)0x0) {
            (*(code *)(*pppppuVar12)[5])();
          }
          FUN_1082a8310();
          bStack_271 = 0;
          pppppuVar14 = (undefined *****)pppppuStack_298[2];
          (*(code *)(*pppppuVar14)[5])();
          ppppppuVar30 = (undefined ******)pppppuStack_190;
          pppppuVar10 = pppppuStack_240;
          uVar5 = *(char *)(pppppuVar14 + 1) == '\x01';
          if (*(char *)(pppppuVar14 + 1) < '\x02') {
            if (((uVar2 & (*(byte *)(pppppuStack_298 + 0xc) ^ 0xffffffff) | (uint)pppppuVar12 ^ 1) &
                1) == 0) goto LAB_1082795e8;
          }
          else if (((ulong)pppppuVar12 & 1) != 0) {
            if ((bStack_271 & 1) != 0) goto LAB_108279710;
            goto LAB_1082795f4;
          }
          uVar2 = (uint)uStack_188;
          ppppppuVar28 = (undefined ******)(uStack_188 & 0xffffffff);
          pppppuStack_240 = (undefined *****)0x0;
          pppppuVar14 = param_6[9];
          pppppuStack_1d0 = (undefined *****)0x0;
          uStack_1c8 = (undefined ******)CONCAT26((short)((ulong)uStack_1c8 >> 0x30),0x321000000000)
          ;
          pppppuStack_1f0 = (undefined *****)(param_5 + 0x37);
          FUN_108278178(&pppppuStack_168,&pppppuStack_1f0);
          func_0x00010827af18(&pppppuStack_98,0,0);
          goto LAB_108278f20;
        }
        iVar24 = iVar24 + -1;
        uVar5 = iVar24 == *(int *)(unaff_x22 + 6);
        if (iVar24 <= *(int *)(unaff_x22 + 6)) goto LAB_108278dc0;
        pppppuVar10 = (undefined *****)((long)pppppuStack_168 + (long)(int)pppppuStack_158);
        if (*(int *)(pppppuVar10 + 0x17) < 0) {
          iVar7 = *(int *)(pppppuVar10 + 0xd);
          uVar5 = iVar7 == 1;
          if ((bool)uVar5) {
            pppppuVar14 = pppppuVar10 + 0x15;
            FUN_10821a044(pppppuVar14,ppppppuVar28 + 2);
            if (((ulong)pppppuVar14 & 1) == 0) goto LAB_108279618;
          }
          else {
            ppppppuVar13 = ppppppuVar28 + 2;
            FUN_10821a044(ppppppuVar13,pppppuVar10 + 0x15);
            if ((int)ppppppuVar13 == 0) goto LAB_108278db4;
          }
          pppppuVar14 = pppppuVar10 + 0x13;
          func_0x000108219544(pppppuVar14,ppppppuVar28 + 2);
          if (((ulong)pppppuVar14 & 1) == 0) {
            if (bStack_214 == 1) {
              uStack_1c8 = (undefined ******)pppppuStack_22c;
              pppppuStack_1d0 = pppppuStack_234;
              ppppppuVar30 = (undefined ******)pppppuStack_234;
              ppppppuVar32 = (undefined ******)pppppuStack_22c;
            }
            else {
              FUN_10817500c(ppppppuVar28 + 2);
              func_0x00010827b254();
            }
            pppppuVar14 = pppppuVar10;
            FUN_108276bc8(pppppuVar10,pppppuVar10 + 8,pppppuVar10 + 0xe,&pppppuStack_1d0,0x113254e20
                          ,0);
            if ((int)pppppuVar14 == 0) {
              pppppuStack_1b8 = (undefined *****)((ulong)pppppuStack_1b8 & 0xffffffffffffff00);
              if ((*(byte *)((long)pppppuVar10 + 0x6c) & 1) == 0) {
                bVar19 = *(byte *)(param_5 + 0x4b);
              }
              else {
                bVar19 = 1;
              }
              pppppuVar14 = param_8;
              (*(code *)(*param_8)[9])
                        (param_8,pppppuStack_298,*(undefined4 *)(pppppuVar10 + 0xd),pppppuVar10 + 8,
                         pppppuVar10,bVar19 & 1);
              iVar7 = (int)pppppuVar14;
              if (iVar7 == 0) {
                if (((ulong)pppppuStack_1b8 & 1) == 0) {
                  if (*(int *)(pppppuVar10 + 0xd) == 1) {
                    func_0x00010827b1c8();
                    if (((ulong)pppppuVar14 & 1) == 0) {
                      pppppuVar14 = pppppuVar10 + 0x13;
                      func_0x000108219544(pppppuVar14,&uStack_270);
                    }
                    else {
                      pppppuVar14 = (undefined *****)0x1;
                    }
LAB_108278ac4:
                    pppppuStack_1b8 =
                         (undefined *****)CONCAT71(pppppuStack_1b8._1_7_,(char)pppppuVar14);
                  }
                  else {
                    pppppuVar14 = pppppuVar10 + 0x13;
                    FUN_10821a6d8();
                    iVar7 = (int)pppppuVar14;
                    if ((int)ppppppuVar11 <= aiStack_180[0]) {
                      iVar7 = 1;
                    }
                    if (iVar7 != 1) {
                      if (aiStack_180[0] == 1) {
                        pppppuVar14 = (undefined *****)0x84;
                        __Znwm();
                        iVar7 = 1;
                        *(int *)pppppuVar14 = 1;
                        func_0x00010827b0b8();
                        *(undefined8 *)((long)pppppuVar14 + 0xc) = uStack_170;
                        *(undefined *****)((long)pppppuVar14 + 4) = ppppuStack_178;
                        ppppuStack_178 = (undefined ****)pppppuVar14;
LAB_108278aa8:
                        aiStack_180[0] = iVar7 + 1;
                        pppppuVar22 = (undefined *****)
                                      ((long)ppppuStack_178 + ((long)iVar7 * 4 + 1) * 4);
                        pppppuVar14 = (undefined *****)ppppuStack_178;
                      }
                      else {
                        if (aiStack_180[0] != 0) {
                          iVar7 = aiStack_180[0];
                          if (*(int *)ppppuStack_178 != 1) {
                            FUN_10827a418();
                            pppppuVar14 = (undefined *****)0x84;
                            __Znwm();
                            iVar7 = aiStack_180[0];
                            lVar21 = (long)aiStack_180[0];
                            *(int *)pppppuVar14 = 1;
                            func_0x00010827b0b8(ppppuStack_178);
                            *(undefined *******)((long)pppppuVar14 + 0xc) = ppppppuVar32;
                            *(long *)((long)pppppuVar14 + 4) = (long)ppppppuVar30;
                            _memcpy((long *)((long)pppppuVar14 + 4),extraout_x8_00 + 4,lVar21 << 4);
                            ppppuStack_178 = (undefined ****)pppppuVar14;
                          }
                          goto LAB_108278aa8;
                        }
                        aiStack_180[0] = 1;
                        pppppuVar22 = &ppppuStack_178;
                      }
                      ppppppuVar32 = (undefined ******)pppppuVar10[0x14];
                      ppppppuVar30 = (undefined ******)pppppuVar10[0x13];
                      pppppuVar22[1] = (undefined ****)ppppppuVar32;
                      *pppppuVar22 = (undefined ****)ppppppuVar30;
                      func_0x00010827b1c8();
                      goto LAB_108278ac4;
                    }
                    pppppuVar14 = (undefined *****)((ulong)pppppuStack_1b8 & 0xff);
                  }
                  pppppuVar22 = pppppuStack_240;
                  if ((((ulong)pppppuVar14 & 1) == 0) && (0 < iStack_2bc)) {
                    ppppuVar9 = pppppuVar27[2];
                    pppppuStack_240 = (undefined *****)0x0;
                    cVar23 = '\x02';
                    if (*(char *)((long)pppppuVar10 + 0x6c) != '\0') {
                      cVar23 = '\x03';
                    }
                    cVar1 = *(char *)((long)pppppuVar10 + 0x6c);
                    if (*(int *)(pppppuVar10 + 0xd) != 1) {
                      cVar1 = cVar23;
                    }
                    iVar7 = (int)pppppuVar10 + 0x40;
                    func_0x0001081420b8();
                    if (iVar7 == 0) {
LAB_108278b68:
                      pppppuVar14 = pppppuVar10;
                      func_0x0001082d8650();
                      if (((int)pppppuVar14 == 1) &&
                         (pppppuVar14 = pppppuVar10, FUN_1082d84dc(pppppuVar10,1),
                         (int)pppppuVar14 != 0)) {
                        FUN_108376ad8(&pppppuStack_1d0);
                        func_0x00010827b108();
                        func_0x000108142294(&pppppuStack_1d0,pppppuVar10 + 8,1);
                        pppppuStack_1f0 = pppppuVar22;
                        ppppppuVar13 = &pppppuStack_1f0;
                        FUN_1082c7c40(&puStack_1e0,ppppppuVar13,cVar1,&pppppuStack_1d0);
                        func_0x00010827b274();
                        if (ppppppuVar13 != (undefined ******)0x0) {
                          func_0x00010827af88();
                        }
                        func_0x00010827b1e8();
                      }
                      else {
                        puStack_1e0 = (undefined *)((ulong)puStack_1e0 & 0xffffffffffffff00);
                        pppppuStack_1d8 = pppppuVar22;
                      }
                    }
                    else {
                      if (*(char *)(pppppuVar10 + 7) == '\x03') {
                        pppppuStack_1d0 = pppppuVar22;
                        FUN_1082cac88(&puStack_1e0,&pppppuStack_1d0,cVar1,pppppuVar10,ppppuVar9);
                        ppppppuVar13 = (undefined ******)pppppuStack_1d0;
                        pppppuStack_1d0 = (undefined *****)0x0;
                      }
                      else {
                        if (*(char *)(pppppuVar10 + 7) != '\x02') goto LAB_108278b68;
                        pppppuStack_1f0 = pppppuVar22;
                        ppppppuVar30 = (undefined ******)(ulong)*(uint *)pppppuVar10;
                        ppppppuVar32 = (undefined ******)0x0;
                        param_3 = *(float *)(pppppuVar10 + 1);
                        param_4 = *(float *)((long)pppppuVar10 + 0xc);
                        ppppppuVar13 = &pppppuStack_1f0;
                        FUN_1082974d4(&pppppuStack_1d0,ppppppuVar30,
                                      *(undefined4 *)((long)pppppuVar10 + 4),ppppppuVar13,cVar1);
                        puStack_1e0 = (undefined *)CONCAT71(puStack_1e0._1_7_,1);
                        pppppuStack_1d8 = pppppuStack_1d0;
                        pppppuStack_1d0 = (undefined *****)0x0;
                        func_0x00010827b274();
                      }
                      if (ppppppuVar13 != (undefined ******)0x0) {
                        func_0x00010827af88();
                      }
                    }
                    pppppuStack_1d0 = (undefined *****)&pppppuStack_1b8;
                    uStack_1c8 = &pppppuStack_240;
                    func_0x00010827af78(&pppppuStack_1d0,&puStack_1e0);
                    pppppuVar14 = pppppuStack_1d8;
                    pppppuStack_1d8 = (undefined *****)0x0;
                    if ((undefined ******)pppppuVar14 != (undefined ******)0x0) {
                      func_0x00010827af88();
                    }
                    pppppuVar14 = pppppuStack_240;
                    uVar20 = (uint)(byte)pppppuStack_1b8;
                    if ((((ulong)pppppuStack_1b8 & 1) == 0) && (pppppuVar12 != (undefined *****)0x0)
                       ) {
                      pppppuStack_240 = (undefined *****)0x0;
                      if ((*(byte *)((long)pppppuVar10 + 0x6c) & 1) == 0) {
                        puStack_1e0 = (undefined *)((ulong)puStack_1e0 & 0xffffffffffffff00);
                        pppppuStack_1d8 = pppppuVar14;
                      }
                      else {
                        FUN_108376ad8(&pppppuStack_1d0);
                        func_0x00010827b108();
                        if (*(int *)(pppppuVar10 + 0xd) == 0) {
                          uStack_1c8 = (undefined ******)((ulong)uStack_1c8 ^ 0x2000000000000);
                        }
                        pppppuStack_1f0 = pppppuVar14;
                        pppppuVar14 = pppppuVar12;
                        FUN_1082ec22c(&puStack_1e0,pppppuVar12,pppppuStack_298,param_8,
                                      &pppppuStack_1f0,&uStack_270,pppppuVar10 + 8,&pppppuStack_1d0)
                        ;
                        func_0x00010827b274();
                        if (pppppuVar14 != (undefined *****)0x0) {
                          func_0x00010827af88();
                        }
                        func_0x00010827b1e8();
                      }
                      pppppuStack_1d0 = (undefined *****)&pppppuStack_1b8;
                      uStack_1c8 = &pppppuStack_240;
                      func_0x00010827af78(&pppppuStack_1d0,&puStack_1e0);
                      pppppuVar14 = pppppuStack_1d8;
                      pppppuStack_1d8 = (undefined *****)0x0;
                      if ((undefined ******)pppppuVar14 != (undefined ******)0x0) {
                        func_0x00010827af88();
                      }
                      uVar20 = (uint)(byte)pppppuStack_1b8;
                    }
                    iStack_2bc = iStack_2bc - uVar20;
                    if ((uVar20 & 1) == 0) {
LAB_108278cf8:
                      if ((int)(uint)uStack_188 < (int)(uStack_188._4_4_ >> 1)) {
                        pppppuStack_190[(int)(uint)uStack_188] = (undefined ****)pppppuVar10;
                        iVar7 = (uint)uStack_188;
                      }
                      else {
                        if ((uint)uStack_188 == 0x7fffffff) {
                          func_0x00010bdb1a68();
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x1082797b0);
                          (*pcVar4)();
                        }
                        uStack_1c8 = (undefined ******)0x7fffffff;
                        pppppuStack_1d0 = (undefined *****)0x8;
                        ppppppuVar13 = &pppppuStack_1d0;
                        uVar18 = (ulong)((uint)uStack_188 + 1);
                        ppppppuVar30 = (undefined ******)0x3ff8000000000000;
                        ppppppuVar32 = (undefined ******)0x0;
                        FUN_10840fe24();
                        iVar7 = (uint)uStack_188;
                        lVar21 = (long)(int)(uint)uStack_188;
                        ppppppuVar13[lVar21] = pppppuVar10;
                        if (iVar7 != 0) {
                          _memcpy(ppppppuVar13,pppppuStack_190,lVar21 << 3);
                        }
                        if ((uStack_188 & 0x100000000) != 0) {
                          _free(pppppuStack_190);
                        }
                        uVar18 = uVar18 >> 3;
                        if (0x7ffffffe < uVar18) {
                          uVar18 = 0x7fffffff;
                        }
                        iVar7 = (uint)uStack_188;
                        uStack_188 = CONCAT44((int)uVar18 << 1,(uint)uStack_188) | 0x100000000;
                        pppppuStack_190 = (undefined *****)ppppppuVar13;
                      }
                      uStack_188 = CONCAT44(uStack_188._4_4_,iVar7 + 1);
                      uVar2 = uVar2 | *(byte *)((long)pppppuVar10 + 0x6c);
                    }
                  }
                  else if (((ulong)pppppuVar14 & 1) == 0) goto LAB_108278cf8;
                }
              }
              else if (iVar7 == 1) {
                FUN_10817500c(pppppuVar10 + 0x15);
                func_0x00010827b254();
                FUN_10838ed10(param_11,&pppppuStack_1d0);
              }
              else {
                uVar5 = 1;
                if (iVar7 == 3) goto LAB_108279618;
              }
              bVar6 = true;
              goto LAB_108278db4;
            }
          }
          uVar5 = iVar7 == 1;
          if (!(bool)uVar5) goto LAB_108279618;
        }
LAB_108278db4:
        FUN_108279bd8(&pppppuStack_168);
      } while( true );
    }
  } while ((undefined ******)pppppuStack_240 == (undefined ******)0x0);
  pppppuStack_240 = (undefined *****)0x0;
  pppppuStack_258 = pppppuVar12;
  FUN_108279ac4(lStack_2a0,&pppppuStack_258);
  pppppuVar12 = pppppuStack_258;
  pppppuStack_258 = (undefined *****)0x0;
  if ((undefined ******)pppppuVar12 != (undefined ******)0x0) {
    func_0x00010827af88();
  }
  uVar25 = 0;
  goto LAB_10827974c;
LAB_108278f20:
  if ((pppppuStack_98 == pppppuStack_168) &&
     ((uVar5 = true, (undefined ******)pppppuStack_98 == (undefined ******)0x0 ||
      (uVar5 = true, iStack_88 == (int)pppppuStack_158)))) {
LAB_108278ff4:
    if ((undefined ******)pppppuStack_1d0 == (undefined ******)0x0) {
      ppppppuVar32 = param_6;
      (*(code *)(*param_6)[3])();
      param_11 = (undefined ******)(ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      if ((ppppppuVar32 == (undefined ******)0x0) ||
         (pppppuVar22 = ppppppuVar32[0xc], pppppuVar22 == (undefined *****)0x0)) {
        uStack_160 = &pppppuStack_158;
        ppuStack_150 = (undefined **)0x0;
        pppppuStack_158 = (undefined *****)0x0;
        uStack_140 = 0;
        pppuStack_148 = (undefined ***)0x0;
        uStack_130 = 0;
        pppuStack_138 = (undefined ***)0x0;
        ppuStack_128 = &PTR_FUN_110a3e608;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0xffffffffffffffff;
        uStack_b0 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0x101;
        uStack_a6 = 0;
        ppppppuVar32 = &pppppuStack_168;
        FUN_1082b0564(ppppppuVar32,&uStack_270);
        if ((int)ppppppuVar32 == 0) {
          puStack_1e0 = (undefined *)0x0;
          pppppuStack_1d8 = (undefined *****)0x321000000000;
        }
        else {
          param_11 = (undefined ******)((long)param_11 << 3);
          for (ppppppuVar32 = (undefined ******)0x0; uVar5 = param_11 == ppppppuVar32, !(bool)uVar5;
              ppppppuVar32 = ppppppuVar32 + 1) {
            FUN_10827a5b4(&pppppuStack_168,*(undefined8 *)((long)ppppppuVar30 + (long)ppppppuVar32),
                          ppppppuVar32 == (undefined ******)0x0);
          }
          FUN_1082b0660(&puStack_1e0,&pppppuStack_168,param_6,0);
        }
        FUN_10827ab14(&pppppuStack_168);
      }
      else {
        param_8 = param_6[9];
        FUN_10828a818(&pppppuStack_168,param_6[2][0x17],1,0);
        ppppuVar9 = param_6[2][0x17];
        func_0x00010828a9ac(ppppuVar9,&pppppuStack_168,1);
        in_stack_fffffffffffffcf0 =
             (undefined *)((ulong)in_stack_fffffffffffffcf0 & 0xffffffffffffff00);
        FUN_1082a5548(&pppppuStack_1f0,param_8,&pppppuStack_168,
                      CONCAT44(uStack_268._4_4_ - uStack_270._4_4_,(int)uStack_268 - (int)uStack_270
                              ),0,1,0,0,1,in_stack_fffffffffffffcf0,&UNK_10f480e87,0x16,0x100000000)
        ;
        pppppuVar15 = (undefined *****)0x58;
        __Znwm();
        func_0x00010827b214();
        *pppppuVar15 = (undefined ****)&PTR_FUN_110a348f8;
        pppppuVar27 = (undefined *****)0x10;
        __Znwm();
        *pppppuVar27 = (undefined ****)0x0;
        pppppuVar27[1] = (undefined ****)0x100000000;
        if (0 < (int)uVar2) {
          uVar25 = 0;
          ppppppuVar32 = ppppppuVar28;
          FUN_10827a774(0x3ff0000000000000,0,ppppppuVar28);
          FUN_10827a708(pppppuVar27,uVar25,ppppppuVar32);
        }
        pppppuVar15[10] = (undefined ****)pppppuVar27;
        for (; param_11 != (undefined ******)0x0; param_11 = (undefined ******)((long)param_11 + -1)
            ) {
          ppppppuVar28 = (undefined ******)pppppuVar15[10];
          pppppuVar27 = *ppppppuVar30;
          iVar24 = *(int *)(ppppppuVar28 + 1);
          pppppuVar16 = (undefined *****)(long)iVar24;
          if (iVar24 < (int)(*(uint *)((long)ppppppuVar28 + 0xc) >> 1)) {
            FUN_10827a89c(*ppppppuVar28 + (long)iVar24 * 0xe,pppppuVar27);
            pppppuVar16 = param_8;
          }
          else {
            uVar25 = 1;
            FUN_10827a774(0x3ff8000000000000,pppppuVar16,1);
            FUN_10827a89c(pppppuVar16 + (long)*(int *)(ppppppuVar28 + 1) * 0xe,pppppuVar27);
            FUN_10827a708(ppppppuVar28,pppppuVar16,uVar25);
          }
          *(int *)(ppppppuVar28 + 1) = *(int *)(ppppppuVar28 + 1) + 1;
          ppppppuVar30 = ppppppuVar30 + 1;
          param_8 = pppppuVar16;
        }
        puStack_80 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)0x20;
        __Znwm();
        *puVar17 = &PTR_FUN_110a34978;
        puVar17[1] = pppppuVar15;
        puVar17[3] = uStack_268;
        puVar17[2] = uStack_270;
        puStack_80 = puVar17;
        FUN_1083a74d4(pppppuVar22,&pppppuStack_98);
        func_0x0001006393ec(&pppppuStack_98);
        pppppuVar22 = (undefined *****)pppppuStack_1f0[0xb];
        pppppuStack_1f0[0xb] = (undefined ****)pppppuVar15;
        if ((pppppuVar22 == (undefined *****)0x0) ||
           (func_0x00010827af88(), (undefined ******)pppppuStack_1f0 != (undefined ******)0x0)) {
          puStack_1e0 = (undefined *)((long)pppppuStack_1f0 + (long)(*pppppuStack_1f0)[-3]);
        }
        else {
          puStack_1e0 = (undefined *)0x0;
        }
        pppppuStack_1f0 = (undefined *****)0x0;
        pppppuStack_1b8 = (undefined *****)0x0;
        pppppuStack_1d8 =
             (undefined *****)
             ((ulong)CONCAT22((short)((ulong)pppppuStack_1d8 >> 0x30),(short)ppppuVar9) << 0x20);
        FUN_1082764bc(&pppppuStack_1b8);
        func_0x00010827aaa0(&pppppuStack_1f0);
        uVar5 = (char)uStack_110 == '\x01';
        param_11 = (undefined ******)0x0;
        if ((bool)uVar5) {
          func_0x00010827b0e4();
        }
      }
      func_0x00010827b1f0();
      FUN_1082764bc(&puStack_1e0);
      if ((undefined ******)pppppuStack_1d0 != (undefined ******)0x0) {
        FUN_108275a3c(&pppppuStack_168,param_5 + 0x37,0x50);
        *(int *)(pppppuStack_168 + 3) = uStack_160._4_4_;
        *(int *)((long)param_5 + 0x1e4) = *(int *)((long)param_5 + 0x1e4) + 1;
        param_5 = (undefined ******)((long)pppppuStack_168 + (long)uStack_160._4_4_);
        FUN_10827a1fc(param_5);
        param_5[8] = uStack_268;
        param_5[7] = (undefined *****)uStack_270;
        if (*(char *)((long)unaff_x22 + 0x3c) == '\0') {
          uVar26 = 1;
        }
        else {
          uVar5 = *(char *)((long)unaff_x22 + 0x3c) == '\x01';
          if ((bool)uVar5) {
            uVar26 = 2;
          }
          else {
            uVar26 = *(undefined4 *)(unaff_x22 + 8);
          }
        }
        *(undefined4 *)(param_5 + 9) = uVar26;
        if ((bRam000000011372a4a0 & 1) == 0) {
          iVar24 = 0x1372a4a0;
          ___cxa_guard_acquire();
          if (iVar24 != 0) {
            func_0x000108320d60();
            iRam000000011372a498 = iVar24;
            ___cxa_guard_release(&bRam000000011372a4a0);
          }
        }
        FUN_10827a280(&pppppuStack_168,param_5,iRam000000011372a498,5);
        param_5[6] = (undefined *****)&UNK_10f480e28;
        pppppuVar22 = (undefined *****)*pppppuStack_168;
        *(undefined4 *)(pppppuVar22 + 1) = *(undefined4 *)(param_5 + 9);
        *(int *)((long)pppppuVar22 + 0xc) = (int)uStack_270;
        *(int *)(pppppuVar22 + 2) = (int)uStack_268;
        *(int *)((long)pppppuVar22 + 0x14) = uStack_270._4_4_;
        *(int *)(pppppuVar22 + 3) = uStack_268._4_4_;
        FUN_10827a320(&pppppuStack_168);
        if ((undefined ******)pppppuStack_1d0 == (undefined ******)0x0) {
          ppppppuVar30 = (undefined ******)0x0;
        }
        else {
          ppppppuVar30 = (undefined ******)pppppuStack_1d0;
          (*(code *)(*pppppuStack_1d0)[3])();
        }
        FUN_1082a49e8(pppppuVar14,param_5,ppppppuVar30);
        ppppppuVar30 = uStack_270;
        goto LAB_10827945c;
      }
      pppppuStack_288 = (undefined *****)((ulong)pppppuStack_288 & 0xffffffffffffff00);
      pppppuStack_280 = pppppuVar10;
      goto LAB_1082795b8;
    }
    ppppppuVar30 = (undefined ******)0x0;
    goto LAB_10827945c;
  }
  cVar23 = *(char *)((long)unaff_x22 + 0x3c);
  if (cVar23 == '\0') {
    iVar24 = 1;
  }
  else if (cVar23 == '\x01') {
    iVar24 = 2;
  }
  else {
    iVar24 = *(int *)(unaff_x22 + 8);
  }
  param_11 = (undefined ******)((long)pppppuStack_168 + (long)(int)pppppuStack_158);
  uVar5 = *(int *)(param_11 + 9) == iVar24;
  if (!(bool)uVar5) goto LAB_108278ff4;
  if (cVar23 == '\0') {
    iVar24 = 1;
  }
  else if (cVar23 == '\x01') {
    iVar24 = 2;
  }
  else {
    iVar24 = *(int *)(unaff_x22 + 8);
  }
  uVar5 = *(int *)(param_11 + 9) == iVar24;
  if ((bool)uVar5) {
    ppppppuVar32 = param_11 + 7;
    func_0x000108219544(ppppppuVar32,&uStack_270);
    if ((int)ppppppuVar32 != 0) {
      FUN_1082a4d50(&puStack_1e0,pppppuVar14,param_11,0,1,1);
      func_0x00010827b1f0();
      FUN_1082764bc(&puStack_1e0);
      if ((undefined ******)pppppuStack_1d0 != (undefined ******)0x0) goto LAB_1082792b8;
    }
  }
  func_0x00010827819c(&pppppuStack_168);
  goto LAB_108278f20;
LAB_1082792b8:
  ppppppuVar30 = (undefined ******)param_11[7];
LAB_10827945c:
  uVar31 = NEON_scvtf(CONCAT44(-(int)((ulong)ppppppuVar30 >> 0x20),-(int)ppppppuVar30),4);
  fVar3 = (float)((ulong)uVar31 >> 0x20);
  uVar25 = uVar31;
  fVar33 = fVar3;
  FUN_10814bdfc(&pppppuStack_168);
  fVar29 = (float)uVar25;
  FUN_10817500c(&uStack_270);
  pppppuStack_1f0 = pppppuStack_1d0;
  fVar29 = fVar29 + (float)uVar31;
  pppppuStack_98 = (undefined *****)CONCAT44(fVar33 + fVar3,fVar29);
  puStack_1e0 = (undefined *)CONCAT44(fVar33 + fVar3 + 0.5,fVar29 + 0.5);
  param_3 = param_3 + (float)uVar31;
  uStack_90 = CONCAT44(param_4 + fVar3,param_3);
  pppppuStack_1d8 = (undefined *****)CONCAT44(param_4 + fVar3 + -0.5,param_3 + -0.5);
  pppppuStack_1d0 = (undefined *****)0x0;
  uStack_1e8 = (undefined4)uStack_1c8;
  uStack_1e4 = uStack_1c8._4_2_;
  in_stack_fffffffffffffcf0 = &UNK_10df12d54;
  FUN_1082cdf9c(&pppppuStack_1b8,&pppppuStack_1f0,2,&pppppuStack_168,0x303,0x100000000,
                &pppppuStack_98,&puStack_1e0,param_6[2][0x17],&UNK_10df12d54);
  FUN_1082764bc(&pppppuStack_1f0);
  pppppuStack_200 = pppppuStack_1b8;
  pppppuStack_1b8 = (undefined *****)0x0;
  FUN_108297448(&pppppuStack_1f8,&pppppuStack_200);
  pppppuVar14 = pppppuStack_1b8;
  pppppuStack_1b8 = pppppuStack_1f8;
  if (pppppuVar14 != (undefined *****)0x0) {
    func_0x00010827af88();
  }
  if ((undefined ******)pppppuStack_200 != (undefined ******)0x0) {
    func_0x00010827af88();
  }
  pppppuStack_208 = pppppuStack_1b8;
  pppppuStack_1b8 = (undefined *****)0x0;
  pppppuStack_210 = pppppuVar10;
  FUN_108279f74(&pppppuStack_1f8,&pppppuStack_208,&pppppuStack_210);
  pppppuVar10 = pppppuStack_1b8;
  pppppuStack_1b8 = pppppuStack_1f8;
  pppppuStack_1f8 = (undefined *****)0x0;
  if (pppppuVar10 != (undefined *****)0x0) {
    func_0x00010827af88();
    pppppuVar10 = pppppuStack_1f8;
    pppppuStack_1f8 = (undefined *****)0x0;
    if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
      func_0x00010827af88();
    }
  }
  pppppuVar10 = pppppuStack_210;
  pppppuStack_210 = (undefined *****)0x0;
  if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
    func_0x00010827af88();
  }
  pppppuVar10 = pppppuStack_208;
  pppppuStack_208 = (undefined *****)0x0;
  if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
    func_0x00010827af88();
  }
  pppppuStack_288 = (undefined *****)CONCAT71(pppppuStack_288._1_7_,1);
  pppppuStack_280 = pppppuStack_1b8;
LAB_1082795b8:
  pppppuVar12 = (undefined *****)((ulong)pppppuVar12 & 0xffffffff);
  FUN_1082764bc(&pppppuStack_1d0);
  pppppuStack_168 = (undefined *****)&bStack_271;
  uStack_160 = &pppppuStack_240;
  func_0x00010827af78(&pppppuStack_168,&pppppuStack_288);
  pppppuVar10 = pppppuStack_280;
  pppppuStack_280 = (undefined *****)0x0;
  if ((undefined ******)pppppuVar10 != (undefined ******)0x0) {
    func_0x00010827af88();
  }
LAB_1082795e8:
  if ((bStack_271 & 1) == 0) {
    if (((ulong)pppppuVar12 & 1) != 0) {
LAB_1082795f4:
      pppppuVar12 = pppppuStack_190;
      if (*(char *)((long)unaff_x22 + 0x3c) == '\0') {
        unaff_x22 = (undefined *****)0x1;
      }
      else {
        uVar5 = *(char *)((long)unaff_x22 + 0x3c) == '\x01';
        if ((bool)uVar5) {
          unaff_x22 = (undefined *****)0x2;
        }
        else {
          unaff_x22 = (undefined *****)(ulong)*(uint *)(unaff_x22 + 8);
        }
      }
      uVar2 = (uint)uStack_188;
      param_5 = (undefined ******)(uStack_188 & 0xffffffff);
      uStack_160 = (undefined ******)pppppuStack_298;
      pppuStack_148 = pppppuStack_298[2][0x12];
      pppppuStack_158 = (undefined *****)&PTR_FUN_110a371d0;
      ppuStack_150 = &PTR_FUN_110a35620;
      uStack_140 = 0;
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      ppuStack_128 = (undefined **)((ulong)ppuStack_128 & 0xffffffff00000000);
      uStack_110 = uStack_110 & 0xffffffff00000000;
      ppppppuVar30 = &pppppuStack_168;
      pppppuStack_168 = (undefined *****)param_6;
      pppuStack_138 = pppuStack_148;
      FUN_1082b96b4(ppppppuVar30,&uStack_270,unaff_x22,lStack_2a0 + 0x20,0);
      if ((int)ppppppuVar30 != 0) {
        FUN_1082b9d70(&pppppuStack_168,*(int *)(*pppppuVar12 + 0xd) == 0);
        param_5 = (undefined ******)((ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3);
        param_11 = (undefined ******)0x5;
        for (param_6 = (undefined ******)0x0; uVar5 = param_5 == param_6, !(bool)uVar5;
            param_6 = param_6 + 1) {
          lVar21 = *(long *)((long)pppppuVar12 + (long)param_6);
          uVar26 = 5;
          if (param_6 != (undefined ******)0x0) {
            uVar26 = 1;
          }
          if (*(int *)(lVar21 + 0x68) != 1) {
            uVar26 = 0;
          }
          FUN_1082b9cbc(&pppppuStack_168,lVar21,lVar21 + 0x40,uVar26,*(undefined1 *)(lVar21 + 0x6c))
          ;
        }
        func_0x0001082b9e18(&pppppuStack_168);
      }
      *(int *)(lStack_2a0 + 0x38) = (int)unaff_x22;
      FUN_10827a4f4(&ppuStack_128);
      goto LAB_108279710;
    }
    FUN_10841076c(&UNK_10f480e32);
LAB_108279618:
    uVar25 = 2;
  }
  else {
LAB_108279710:
    pppppuVar12 = pppppuStack_240;
    if ((undefined ******)pppppuStack_240 != (undefined ******)0x0) {
      pppppuStack_240 = (undefined *****)0x0;
      pppppuStack_290 = pppppuVar12;
      FUN_108279ac4(lStack_2a0,&pppppuStack_290);
      pppppuVar12 = pppppuStack_290;
      pppppuStack_290 = (undefined *****)0x0;
      if ((undefined ******)pppppuVar12 != (undefined ******)0x0) {
        func_0x00010827af88();
      }
    }
    uVar25 = 0;
  }
LAB_108279740:
  func_0x00010827b194();
  FUN_10827a4f4(aiStack_180);
LAB_10827974c:
  pppppuVar12 = pppppuStack_240;
  pppppuStack_240 = (undefined *****)0x0;
  if ((undefined ******)pppppuVar12 != (undefined ******)0x0) {
    func_0x00010827af88();
  }
  goto LAB_10827868c;
}



/* Entry: 108279a90; end: 108279ac3;  */

long * FUN_108279a90(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x00010827af88();
  }
  return param_1;
}



/* Entry: 108279ac4; end: 108279b93;  */

long * FUN_108279ac4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  plVar3 = (long *)(param_1 + 0x40);
  if (*plVar3 != 0) {
    plStack_30 = (long *)*param_2;
    *param_2 = 0;
    lStack_38 = *plVar3;
    *plVar3 = 0;
    FUN_108296eb0(&lStack_28,&plStack_30,&lStack_38);
    lVar1 = lStack_28;
    lStack_28 = 0;
    lVar2 = *plVar3;
    *plVar3 = lVar1;
    if (lVar2 != 0) {
      func_0x00010827af88();
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        func_0x00010827af88();
      }
    }
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x00010827af88();
    }
    plVar3 = plStack_30;
    plStack_30 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      func_0x00010827af88();
    }
    return plVar3;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *plVar3;
  *plVar3 = lVar2;
  if (lVar1 != 0) {
    func_0x00010827af88();
  }
  return plVar3;
}



/* Entry: 108279b94; end: 108279bb7;  */

undefined8 FUN_108279b94(void)

{
  undefined8 unaff_x19;
  
  func_0x00010827abd8();
  func_0x00010827afc0();
  func_0x00010827b280();
  func_0x00010827ab6c();
  return unaff_x19;
}



/* Entry: 108279bb8; end: 108279bd7;  */

bool FUN_108279bb8(undefined8 param_1,undefined8 param_2)

{
  _memcmp(param_1,param_2,0x10);
  return (int)param_1 == 0;
}



/* Entry: 108279bd8; end: 108279c07;  */

void FUN_108279bd8(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010827b15c();
  if (in_NG != in_OV) {
    func_0x00010827ab48();
    func_0x00010827ab6c();
  }
  return;
}



/* Entry: 108279c08; end: 108279c77;  */

long * FUN_108279c08(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  plVar1 = (long *)(param_1 + 0xf8);
  plVar2 = (long *)(*plVar1 + (long)*(int *)(*plVar1 + 0x18));
  if (*(int *)((long)plVar2 + 0x34) == 0) {
    *param_2 = 0;
  }
  else {
    *(int *)((long)plVar2 + 0x34) = *(int *)((long)plVar2 + 0x34) + -1;
    *param_2 = 1;
    uStack_14 = *(undefined4 *)(param_1 + 0x1e4);
    uStack_18 = *(undefined4 *)(param_1 + 0x34);
    FUN_108279c78(plVar1,plVar2,&uStack_14,&uStack_18);
    plVar2 = plVar1;
  }
  return plVar2;
}



/* Entry: 108279c78; end: 108279cb3;  */

void FUN_108279c78(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x00010827aecc();
  uVar2 = *param_3;
  uVar3 = *param_4;
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar7 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar7;
  lVar6 = param_2[4];
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[4] = lVar6;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 108279cb4; end: 108279d17;  */

void FUN_108279cb4(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  if (*(char *)(*(long *)(param_1 + 0xf8) + (long)*(int *)(*(long *)(param_1 + 0xf8) + 0x18) + 0x3c)
      != '\0') {
    FUN_108279c08(param_1,&uStack_21);
    uStack_30 = *param_2;
    *param_2 = 0;
    FUN_108277760();
    func_0x000106f47224(&uStack_30);
  }
  return;
}



/* Entry: 108279d18; end: 108279db3;  */

void FUN_108279d18(undefined8 param_1)

{
  long unaff_x19;
  int unaff_w20;
  undefined1 uStack_31;
  
  func_0x00010827b044();
  FUN_108279c08();
  if ((uStack_31 & 1) == 0) {
    FUN_108277514(param_1,unaff_x19 + 8);
    func_0x00010827b1bc();
  }
  FUN_108277730(param_1,unaff_x19 + 0x240);
  FUN_10821be98();
  if (unaff_w20 != 0) {
    FUN_10817500c();
    FUN_108279db4();
  }
  return;
}



/* Entry: 108279db4; end: 108279e4b;  */

void FUN_108279db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [192];
  
  FUN_10827a530(auStack_140,param_3);
  FUN_108276b30(auStack_100,param_2,auStack_140,param_4,param_5);
  FUN_108279e4c(param_1,auStack_100);
  FUN_10827a074(auStack_100);
  func_0x00010827b128();
  return;
}



/* Entry: 108279e4c; end: 108279f1f;  */

void FUN_108279e4c(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  byte bStack_31;
  
  plVar4 = (long *)(param_1 + 0xf8);
  if (*(char *)(*plVar4 + (long)*(int *)(*plVar4 + 0x18) + 0x3c) != '\0') {
    func_0x000108276f6c(param_2,param_1 + 0x240,*(undefined1 *)(param_1 + 600));
    if ((*(char *)(param_2 + 0x38) != '\0') || (*(int *)(param_2 + 0x68) != 0)) {
      uVar2 = param_1;
      FUN_108279c08(param_1,&bStack_31);
      uVar3 = uVar2;
      FUN_10827782c();
      if ((uVar3 & 1) == 0) {
        if (bStack_31 == 1) {
          func_0x00010827826c(plVar4);
          lVar1 = *plVar4 + (long)*(int *)(*plVar4 + 0x18);
          *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
        }
      }
      else if ((*(long *)(param_1 + 0x238) != 0) && ((bStack_31 & 1) == 0)) {
        FUN_10827768c(uVar2,*(long *)(param_1 + 0x238),param_1 + 0x1b8);
      }
    }
  }
  return;
}



/* Entry: 108279f20; end: 108279f4f;  */

void FUN_108279f20(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010827b0ac();
  FUN_10827a578();
  *(undefined4 *)(unaff_x20 + 8) = *(undefined4 *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x20 + 0xc) = *(undefined2 *)(unaff_x19 + 0xc);
  return;
}



/* Entry: 108279f50; end: 108279f73;  */

float FUN_108279f50(float param_1,float *param_2)

{
  return param_1 + *param_2;
}



/* Entry: 108279f74; end: 108279fff;  */

void FUN_108279f74(undefined8 *param_1,long *param_2)

{
  long lStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)*param_1;
  *param_1 = 0;
  lStack_30 = *param_2;
  *param_2 = 0;
  FUN_1082c7180(&plStack_28,&lStack_30,6,0);
  if (lStack_30 != 0) {
    func_0x00010827af88();
  }
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108279fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 10827a000; end: 10827a007;  */

long FUN_10827a000(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  switch(*(undefined1 *)(param_2 + 0x38)) {
  case 0:
    FUN_108276bc0(param_1);
    break;
  case 1:
    func_0x0001082d87a0();
    func_0x0001082d7940();
    break;
  case 2:
    func_0x0001082d87a0();
    func_0x000108277374();
    break;
  case 3:
    func_0x0001082d87a0();
    func_0x00010827739c();
    break;
  case 4:
    func_0x0001082d87a0();
    func_0x00010827ee00();
    break;
  case 5:
    func_0x0001082d87a0();
    func_0x0001082d7968();
    break;
  case 6:
    func_0x0001082d87a0();
    func_0x0001082d7998();
  }
  *(undefined2 *)(param_1 + 0x39) = *(undefined2 *)(param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
  return param_1;
}



/* Entry: 10827a008; end: 10827a073;  */

void FUN_10827a008(long param_1)

{
  func_0x00010827a038();
  *(undefined2 *)(param_1 + 0x39) = 0x100;
  if (*(char *)(param_1 + 0x38) == '\x04') {
    if ((*(byte *)(param_1 + 0xe) & 2) != 0) {
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) ^ 2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  return;
}



/* Entry: 10827a074; end: 10827a097;  */

undefined8 FUN_10827a074(undefined8 param_1)

{
  FUN_108276bc0();
  return param_1;
}



/* Entry: 10827a098; end: 10827a0d7;  */

float FUN_10827a098(long param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + (long)param_2 * 4);
  if (*(int *)(param_1 + 0x30) == 3) {
    return fVar1 / *(float *)(param_1 + (long)param_2 * 4 + 0x20);
  }
  return fVar1;
}



/* Entry: 10827a0d8; end: 10827a107;  */

uint FUN_10827a0d8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((uVar1 >> 7 & 1) != 0) {
    lVar2 = param_1;
    func_0x000108363b0c();
    uVar1 = (uint)lVar2;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  return uVar1 >> 4 & 1;
}



/* Entry: 10827a108; end: 10827a1cb;  */

int FUN_10827a108(float param_1,byte *param_2)

{
  float fVar1;
  
  if ((*param_2 & 1) == 0) {
    fVar1 = (float)(double)(long)(param_1 + 0.001 + -0.05 + 0.5);
  }
  else {
    fVar1 = (float)(int)(param_1 + 0.001);
  }
  fVar1 = (float)NEON_fminnm(fVar1,0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  return (int)fVar1;
}



/* Entry: 10827a1cc; end: 10827a1fb;  */

void FUN_10827a1cc(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_108384d0c();
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* Entry: 10827a1fc; end: 10827a213;  */

void FUN_10827a1fc(long param_1)

{
  FUN_10827a214();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10827a214; end: 10827a24f;  */

long * FUN_10827a214(long *param_1)

{
  *param_1 = (long)(param_1 + 1);
  func_0x000108277498();
  return param_1;
}



/* Entry: 10827a250; end: 10827a27f;  */

long * FUN_10827a250(long *param_1)

{
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  return param_1;
}



/* Entry: 10827a280; end: 10827a31f;  */

undefined8 * FUN_10827a280(undefined8 *param_1,long *param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  func_0x00010827a2cc(param_2,(long)param_4 + 2);
  *(uint *)(*param_2 + 4) = param_3 | (int)((long)param_4 + 2) << 0x12;
  return param_1;
}



/* Entry: 10827a320; end: 10827a343;  */

undefined8 FUN_10827a320(undefined8 param_1)

{
  FUN_10827a344();
  return param_1;
}



/* Entry: 10827a344; end: 10827a3ab;  */

void FUN_10827a344(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar2 = *(undefined4 **)*param_1;
    puVar1 = puVar2 + 1;
    func_0x000108320db8(puVar1,(ulong)*(ushort *)((long)puVar2 + 6) - 4);
    *puVar2 = (int)puVar1;
    *param_1 = 0;
  }
  return;
}



/* Entry: 10827a3ac; end: 10827a417;  */

void FUN_10827a3ac(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  float *unaff_x19;
  undefined8 *unaff_x20;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = param_7;
  func_0x00010827b044();
  *param_5 = 0;
  param_5[1] = 0;
  func_0x00010827b1b4();
  *(undefined8 *)(unaff_x19 + 4) = param_6;
  *(undefined8 *)(unaff_x19 + 6) = uVar3;
  *(char *)(unaff_x19 + 8) = (char)param_7;
  fVar2 = 0.001;
  fVar4 = fVar2;
  FUN_108279f50();
  *unaff_x19 = fVar2;
  unaff_x19[1] = fVar4;
  unaff_x19[2] = param_3;
  unaff_x19[3] = param_4;
  bVar1 = false;
  if ((fVar2 < param_3) && (bVar1 = false, !NAN(fVar4) && !NAN(param_4))) {
    bVar1 = fVar4 < param_4;
  }
  if (!bVar1) {
    uVar3 = *unaff_x20;
    *(undefined8 *)(unaff_x19 + 2) = unaff_x20[1];
    *(undefined8 *)unaff_x19 = uVar3;
  }
  return;
}



/* Entry: 10827a418; end: 10827a42f;  */

void FUN_10827a418(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827a430; end: 10827a4bf;  */

void FUN_10827a430(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 8;
  func_0x00010821b838();
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10827a4c0; end: 10827a4cb;  */

void FUN_10827a4c0(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827a4cc; end: 10827a4f3;  */

long FUN_10827a4cc(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010827b1fc();
  }
  return param_1;
}



/* Entry: 10827a4f4; end: 10827a52f;  */

int * FUN_10827a4f4(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  FUN_10827a4c0(uVar1);
  return param_1;
}



/* Entry: 10827a530; end: 10827a553;  */

long FUN_10827a530(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_108277374();
  return param_1;
}



/* Entry: 10827a554; end: 10827a577;  */

void FUN_10827a554(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010827b188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10827a578; end: 10827a5a3;  */

undefined8 FUN_10827a578(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_10827a5a4(param_1,uVar1);
  return param_1;
}



/* Entry: 10827a5a4; end: 10827a5b3;  */

void FUN_10827a5a4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010827b188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10827a5b4; end: 10827a687;  */

void FUN_10827a5b4(undefined8 param_1,long param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [14];
  byte bStack_52;
  char in_stack_ffffffffffffffd8;
  
  func_0x00010827b0ac();
  if (param_3 == 0) {
    if (*(int *)(param_2 + 0x68) == 1) {
      FUN_10827a000(auStack_60);
      if ((in_stack_ffffffffffffffd8 == '\x04') && ((bStack_52 >> 1 & 1) == 0)) {
        bStack_52 = bStack_52 | 2;
      }
      FUN_1082b0444();
      func_0x00010827b128();
      return;
    }
    cVar2 = '\0';
  }
  else {
    uVar3 = 0xffffff;
    if (*(int *)(param_2 + 0x68) != 1) {
      uVar3 = 0xffffffff;
    }
    FUN_10827aaec(*(undefined8 *)(unaff_x20 + 8),uVar3);
    cVar2 = -(*(int *)(unaff_x19 + 0x68) == 1);
  }
  func_0x0001082b077c();
  func_0x0001082b07b8();
  func_0x0001082b07d0();
  *(long *)(unaff_x19 + 0x78) = unaff_x19 + 0x40;
  bVar1 = *(byte *)(unaff_x19 + 0x38);
  if (bVar1 != 4) {
    if (*(char *)(unaff_x19 + 0x3b) != '\x01') {
      switch(bVar1) {
      case 0:
      case 1:
      case 6:
        break;
      case 2:
        FUN_1082b0290(unaff_x19 + 0x40);
        break;
      case 3:
        FUN_108349d24(unaff_x19 + 0x40);
        break;
      default:
        goto LAB_1082b0480;
      }
      goto LAB_1082b0528;
    }
    if ((bVar1 < 7) && ((1 << (ulong)(bVar1 & 0x1f) & 0x43U) != 0)) {
      FUN_108349754(unaff_x19 + 0x40,auStack_80);
      goto LAB_1082b0528;
    }
  }
LAB_1082b0480:
  FUN_108376ad8(auStack_c0);
  FUN_1082d8288();
  if (cVar2 == -1) {
    func_0x0001082b0768();
    func_0x0001082b040c();
  }
  else {
    func_0x0001082b0768();
    func_0x0001082b0438();
  }
  func_0x0001082b07b0();
LAB_1082b0528:
  func_0x0001082b07a8();
  return;
}



/* Entry: 10827a688; end: 10827a6cb;  */

undefined8 * FUN_10827a688(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a34950;
  func_0x00010827a804();
  FUN_108410074(param_1 + 7);
  FUN_10832fef8(param_1 + 1);
  return param_1;
}



/* Entry: 10827a6cc; end: 10827a6cf;  */

undefined8 * FUN_10827a6cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a348f8;
  func_0x00010827a804();
  FUN_10827a874(param_1 + 10);
  *param_1 = &PTR_DAT_110a34950;
  func_0x00010827a804();
  FUN_108410074(param_1 + 7);
  FUN_10832fef8(param_1 + 1);
  return param_1;
}



/* Entry: 10827a6d0; end: 10827a6e3;  */

void FUN_10827a6d0(void)

{
  FUN_10827a838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827a6e4; end: 10827a6ef;  */

void FUN_10827a6e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = 0;
  if (lVar1 != 0) {
    FUN_10827a7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10827a6f0; end: 10827a703;  */

void FUN_10827a6f0(void)

{
  FUN_10827a688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10827a704; end: 10827a707;  */

void FUN_10827a704(void)

{
  return;
}



/* Entry: 10827a708; end: 10827a773;  */

void FUN_10827a708(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010827b044();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010827b1fc();
  }
  param_3 = param_3 / 0x70;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10827a774; end: 10827a7b7;  */

ulong * FUN_10827a774(ulong *param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong auStack_20 [2];
  
  puVar1 = auStack_20;
  if (param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    auStack_20[1] = 0x7fffffff;
    auStack_20[0] = 0x70;
    FUN_10840fe24(auStack_20,param_2 + (uint)param_1);
    return puVar1;
  }
  func_0x00010bdb1a68();
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar3 = uVar2 + (long)(int)param_1[1] * 0x70;
    do {
      FUN_10827a074();
      uVar2 = uVar2 + 0x70;
    } while (uVar2 < uVar3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x00010827b1fc();
  }
  return param_1;
}



/* Entry: 10827a7b8; end: 10827a837;  */

ulong * FUN_10827a7b8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x70;
    do {
      FUN_10827a074();
      uVar1 = uVar1 + 0x70;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x00010827b1fc();
  }
  return param_1;
}



/* Entry: 10827a838; end: 10827a873;  */

undefined8 * FUN_10827a838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a348f8;
  func_0x00010827a804();
  FUN_10827a874(param_1 + 10);
  *param_1 = &PTR_DAT_110a34950;
  func_0x00010827a804();
  FUN_108410074(param_1 + 7);
  FUN_10832fef8(param_1 + 1);
  return param_1;
}



/* Entry: 10827a874; end: 10827a89b;  */

void FUN_10827a874(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10827a7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10827a89c; end: 10827a8bb;  */

void FUN_10827a89c(void)

{
  FUN_10827a000();
  func_0x00010827b050();
  return;
}



/* Entry: 10827a8bc; end: 10827a8c3;  */

void FUN_10827a8bc(void)

{
  return;
}



/* Entry: 10827a8c4; end: 10827a8ff;  */

void FUN_10827a8c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110a34978;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10827a900; end: 10827a92f;  */

void FUN_10827a900(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a34978;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10827a930; end: 10827aa2b;  */

void FUN_10827a930(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_100;
  lStack_f8 = *(long *)(param_1 + 8) + 8;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  ppuStack_c0 = &PTR_FUN_110a3e608;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffffffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_38 = 0;
  uStack_40 = 0x101;
  uStack_3e = 0;
  FUN_1082b0564(auStack_100,param_1 + 0x10);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    while( true ) {
      lVar2 = *(long *)(param_1 + 8);
      if ((int)(*(long **)(lVar2 + 0x50))[1] <= lVar4) break;
      FUN_10827a5b4(auStack_100,**(long **)(lVar2 + 0x50) + lVar3,lVar3 == 0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x70;
    }
  }
  FUN_10827aa70(lVar2);
  FUN_10827ab14(auStack_100);
  return;
}



/* Entry: 10827aa2c; end: 10827aa63;  */

long FUN_10827aa2c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a349d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10827aa64; end: 10827aa6f;  */

undefined ** FUN_10827aa64(void)

{
  return &PTR_DAT_110a349d8;
}



/* Entry: 10827aa70; end: 10827aaeb;  */

void FUN_10827aa70(long *param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  long *plVar8;
  char cStack_31;
  
  plVar8 = param_1 + 7;
  (**(code **)(*param_1 + 0x10))();
  do {
    iVar2 = (int)*plVar8;
    cVar7 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = iVar2 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  iVar6 = 1;
  if (-2 < iVar2) {
    iVar6 = -iVar2;
  }
  if (0 < iVar6) {
    pcVar1 = (char *)((long)param_1 + 0x3c);
    cStack_31 = *pcVar1;
    cVar7 = cStack_31;
    if (cStack_31 != '\0') goto LAB_108410100;
    pcVar4 = pcVar1;
    func_0x00010841038c(pcVar1,&cStack_31);
    if ((int)pcVar4 == 0) {
      do {
        cVar7 = *pcVar1;
LAB_108410100:
      } while (cVar7 != '\x02');
    }
    else {
      lVar5 = 8;
      __Znwm();
      func_0x000108410248();
      param_1[8] = lVar5;
      *(undefined1 *)((long)param_1 + 0x3c) = 2;
    }
    FUN_108410128(param_1[8],iVar6);
    return;
  }
  return;
}



/* Entry: 10827aaec; end: 10827ab13;  */

void FUN_10827aaec(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = 0;
  FUN_1083842ac(param_1,param_2,&uStack_20);
  return;
}



/* Entry: 10827ab14; end: 10827abaf;  */

long FUN_10827ab14(long param_1)

{
  FUN_108386ed4(param_1 + 0x90);
  FUN_10814ca20(param_1 + 0x40);
  FUN_10832fef8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10827abb0; end: 10827ac03;  */

void FUN_10827abb0(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    if ((lVar1 == 0) || (-1 < *(int *)(lVar1 + 0x14))) {
      return;
    }
  }
  param_1[1] = 0;
  return;
}



/* Entry: 10827ac04; end: 10827ac83;  */

void FUN_10827ac04(void)

{
  func_0x00010827b280();
  func_0x00010827ab6c();
  return;
}



/* Entry: 10827ac84; end: 10827ac9b;  */

void FUN_10827ac84(undefined8 *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1[2] = 0;
  uVar1 = param_3 + 7U >> 3;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  uVar2 = 0x20000040000;
  if ((param_2 & 0xfffffffd) != 1) {
    uVar2 = 0x20000000000;
  }
  *param_1 = param_1 + 2;
  param_1[1] = uVar2 | ((param_2 & 3) << 0x10 | (uint)uVar1);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xe0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10827ac9c; end: 10827acbf;  */

undefined8 FUN_10827ac9c(undefined8 param_1)

{
  FUN_10827acc0();
  FUN_10840fc40();
  return param_1;
}



/* Entry: 10827acc0; end: 10827ad27;  */

void FUN_10827acc0(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10827763c(auStack_40,&uStack_28);
  func_0x00010827afe8();
  func_0x00010827ac24();
  while ((func_0x00010827afd8(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
         ((extraout_x9 != 0 &&
          (func_0x00010827b090(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
    in_ZR = 0;
    FUN_10827a074(lVar1 + iVar2);
    func_0x000108277660(auStack_40);
  }
  func_0x00010827b1e0();
  return;
}



/* Entry: 10827ad28; end: 10827ad4b;  */

undefined8 FUN_10827ad28(undefined8 param_1)

{
  FUN_10827ad4c();
  FUN_10840fc40();
  return param_1;
}


