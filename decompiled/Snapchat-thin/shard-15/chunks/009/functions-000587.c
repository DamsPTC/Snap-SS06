/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd3ded0; end: 10bd3df6f;  */

undefined8 FUN_10bd3ded0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[0x2a];
  if (iVar2 == 0) {
    puVar1 = param_1;
    func_0x00010bd3f094();
    if ((int)puVar1 != 0) {
      func_0x00010bd3f094();
      if (((ulong)puVar1 & 1) != 0) {
        return 0;
      }
      puVar1 = param_1;
      FUN_10bd3d9ac(param_1,0x2a);
      if (((ulong)puVar1 & 1) == 0) {
        *param_1 = 6;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_1 + 2,"/")
        ;
        param_1[8] = param_1[0x23];
        param_1[9] = param_1[0x24] + -1;
        param_1[10] = param_1[0x24];
        return 2;
      }
      return 1;
    }
    iVar2 = param_1[0x2a];
  }
  if ((iVar2 == 1) && (FUN_10bd3d9ac(param_1,0x23), ((ulong)param_1 & 1) != 0)) {
    return 0;
  }
  return 3;
}



/* Entry: 10bd3df70; end: 10bd3e303;  */

undefined4 * FUN_10bd3df70(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  func_0x00010bcdad2c(param_1 + 0xc,param_1);
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    *param_1 = 1;
    func_0x000107c27fa8(param_1 + 2);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x23);
    param_1[10] = param_1[0x24];
    return (undefined4 *)0x0;
  }
  puVar3 = param_1;
  FUN_10bd3e304();
  iVar2 = (int)puVar3;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) == '\x01') {
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100003a00U) == 0) goto LAB_10bd3e038;
    func_0x00010bd3efb4();
    func_0x00010bd3f01c();
    uVar4 = 7;
  }
  else {
    if (bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100003e00U) != 0) {
      do {
        func_0x00010bd3efb4();
        iVar2 = (int)puVar3;
      } while (*(byte *)(param_1 + 0x1c) < 0x21 &&
               (1L << ((ulong)*(byte *)(param_1 + 0x1c) & 0x3f) & 0x100003e00U) != 0);
      *param_1 = 7;
      if ((*(byte *)((long)param_1 + 0xae) & 1) != 0) goto LAB_10bd3e108;
    }
LAB_10bd3e038:
    if (((*(char *)((long)param_1 + 0xae) != '\x01') || (*(char *)((long)param_1 + 0xaf) != '\x01'))
       || (func_0x00010bd3efc4(), iVar2 == 0)) {
      func_0x00010bd3e340();
      func_0x00010bd3f078();
                    /* WARNING: Could not recover jumptable at 0x00010bd3e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60c268)[(ulong)param_1 & 0xffffffff] * 4 + 0x10bd3e078))();
      return param_1;
    }
    uVar4 = 8;
  }
  *param_1 = uVar4;
LAB_10bd3e108:
  func_0x00010bd3e340(param_1);
  return (undefined4 *)0x1;
}



/* Entry: 10bd3e304; end: 10bd3e363;  */

void FUN_10bd3e304(undefined4 *param_1)

{
  *param_1 = 0;
  func_0x000107c27fa8(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x23);
  *(undefined4 **)(param_1 + 0x26) = param_1 + 2;
  param_1[0x28] = param_1[0x21];
  return;
}



/* Entry: 10bd3e364; end: 10bd3e713;  */

int * FUN_10bd3e364(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined1 auStack_58 [40];
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  uStack_71 = 1;
  piVar1 = param_1;
  piStack_a8 = param_2;
  piStack_a0 = param_3;
  piStack_98 = param_4;
  if (param_2 != (int *)0x0) {
    func_0x000107c27fa8();
    piVar1 = param_2;
  }
  if (param_3 != (int *)0x0) {
    func_0x000107c278b0();
    piVar1 = param_3;
  }
  if (param_4 != (int *)0x0) {
    func_0x000107c27fa8();
    piVar1 = param_4;
  }
  if (*param_1 != 0) {
    func_0x00010bd3f01c();
    func_0x00010bd3f078();
                    /* WARNING: Could not recover jumptable at 0x00010bd3e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60c26c)[(ulong)piVar1 & 0xffffffff] * 4 + 0x10bd3e3f4))();
    return piVar1;
  }
  piVar1 = param_1;
  FUN_10bd3d9ac(param_1,0xffffffef);
  if (((int)piVar1 != 0) &&
     ((piVar1 = param_1, FUN_10bd3d9ac(param_1,0xffffffbb), (int)piVar1 == 0 ||
      (piVar1 = param_1, FUN_10bd3d9ac(param_1,0xffffffbf), ((ulong)piVar1 & 1) == 0)))) {
    func_0x000107c278b8(auStack_58,&UNK_10f836bd0);
    FUN_10bd3d978(param_1,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    func_0x00010bd3e808(&piStack_a8);
    return (int *)0x0;
  }
  uStack_71 = 0;
  func_0x00010bd3f01c();
  func_0x00010bd3f078();
                    /* WARNING: Could not recover jumptable at 0x00010bd3e4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e60c270)[(ulong)piVar1 & 0xffffffff] * 4 + 0x10bd3e4a4))();
  return piVar1;
}



/* Entry: 10bd3e714; end: 10bd3e86b;  */

long FUN_10bd3e714(long param_1)

{
  if ((*(char *)(param_1 + 0x35) == '\x01') && ((*(byte *)(param_1 + 0x36) & 1) == 0)) {
    func_0x00010bd3e754(param_1);
  }
  *(undefined2 *)(param_1 + 0x35) = 0x101;
  return param_1 + 0x18;
}



/* Entry: 10bd3e86c; end: 10bd3e94b;  */

undefined8 FUN_10bd3e86c(byte *param_1,ulong param_2,ulong *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  
  pbVar1 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    pbVar1 = param_1;
  }
  if (*pbVar1 == 0x30) {
    bVar4 = (pbVar1[1] | 0x20) != 0x78;
    uVar7 = 0x10;
    if (bVar4) {
      uVar7 = 8;
    }
    uVar6 = 0x1000000000000000;
    pbVar5 = pbVar1 + 2;
    if (bVar4) {
      uVar6 = 0x2000000000000000;
      pbVar5 = pbVar1;
    }
  }
  else {
    uVar6 = 0x199999999999999a;
    uVar7 = 10;
    pbVar5 = pbVar1;
  }
  uVar8 = 0;
  do {
    bVar3 = *pbVar5;
    if (bVar3 == 0) goto LAB_10bd3e908;
    pbVar5 = pbVar5 + 1;
    uVar2 = uVar8;
    if (bVar3 != 0x30) {
      uVar2 = (long)(char)(&UNK_10e60c2a5)[(uint)bVar3];
    }
    iVar9 = 0;
    if (bVar3 != 0x30) {
      iVar9 = 3;
    }
    if ((int)uVar7 <= (int)(char)(&UNK_10e60c2a5)[(uint)bVar3]) {
      iVar9 = 1;
      uVar2 = uVar8;
    }
    uVar8 = uVar2;
  } while (iVar9 == 0);
  if (iVar9 == 3) {
LAB_10bd3e908:
    do {
      bVar3 = *pbVar5;
      if ((ulong)bVar3 == 0) {
        if (param_2 < uVar8) {
          return 0;
        }
        *param_3 = uVar8;
        return 1;
      }
      bVar4 = uVar8 < uVar6;
      uVar8 = (long)(char)(&UNK_10e60c2a5)[bVar3] + uVar8 * uVar7;
      pbVar5 = pbVar5 + 1;
    } while (((int)(char)(&UNK_10e60c2a5)[bVar3] < (int)uVar7 && bVar4) && uVar7 <= uVar8);
  }
  return 0;
}



/* Entry: 10bd3e94c; end: 10bd3e96f;  */

undefined8 FUN_10bd3e94c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  FUN_10bd3e970(param_1,&uStack_18);
  return uStack_18;
}



/* Entry: 10bd3e970; end: 10bd3ea37;  */

bool FUN_10bd3e970(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbStack_38;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_10bd3d034(plVar1,&pbStack_38);
  *param_3 = param_1;
  bVar4 = *pbStack_38;
  pbVar5 = pbStack_38;
  if ((bVar4 | 0x20) == 0x65) {
    pbVar5 = pbStack_38 + 1;
    bVar4 = *pbVar5;
    if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
      pbVar5 = pbStack_38 + 2;
      bVar4 = *pbVar5;
    }
  }
  if ((bVar4 | 0x20) == 0x66) {
    pbVar5 = pbVar5 + 1;
  }
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if ((long)pbVar5 - (long)plVar1 == uVar2) {
    bVar3 = (char)*plVar1 != '-';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10bd3ea38; end: 10bd3ee4f;  */

byte * FUN_10bd3ea38(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uStack_80;
  uint uStack_7c;
  ulong uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = param_1[0x17];
  uVar2 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  pbVar1 = param_1;
  if (uVar2 == 0) {
LAB_10bd3ee2c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pbVar1;
    }
    ___stack_chk_fail();
    uVar7 = (uint)pbVar1 & 0xff;
    uVar6 = 1;
    if (9 < uVar7 - 0x30 && 5 < uVar7 - 0x61) {
      uVar6 = (uint)(uVar7 - 0x41 < 6);
    }
    return (byte *)(ulong)uVar6;
  }
  lVar8 = (long)(char)param_2[0x17];
  if (lVar8 < 0) {
    lVar8 = *(long *)(param_2 + 8);
    uVar9 = (*(ulong *)(param_2 + 0x10) & 0x7fffffffffffffff) - 1;
  }
  else {
    uVar9 = 0x16;
  }
  if (uVar9 < lVar8 + uVar2) {
    pbVar1 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
    bVar3 = param_1[0x17];
  }
  pbVar12 = *(byte **)param_1;
  if (-1 < (char)bVar3) {
    pbVar12 = param_1;
  }
LAB_10bd3eae8:
  pbVar11 = pbVar12 + 1;
  bVar3 = *pbVar11;
  if (bVar3 != 0x5c) {
    if (bVar3 != 0) {
LAB_10bd3eb64:
      pbVar13 = *(byte **)param_1;
      if (-1 < (char)param_1[0x17]) {
        pbVar13 = param_1;
      }
      if ((*pbVar13 != bVar3) || (pbVar13 = pbVar12 + 2, pbVar12 = pbVar11, *pbVar13 != 0)) {
        pbVar1 = param_2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
        pbVar12 = pbVar11;
      }
      goto LAB_10bd3eae8;
    }
    goto LAB_10bd3ee2c;
  }
  pbVar13 = pbVar12 + 2;
  bVar5 = *pbVar13;
  if ((ulong)bVar5 == 0) goto LAB_10bd3eb64;
  if ((bVar5 & 0xf8) == 0x30) {
    cVar4 = (&UNK_10e60c2a5)[bVar5];
    uVar7 = (uint)pbVar12[3];
    if ((uVar7 & 0xf8) == 0x30) {
      cVar4 = (&UNK_10e60c2a5)[uVar7] + cVar4 * '\b';
      pbVar13 = pbVar12 + 3;
    }
    uVar7 = (uint)pbVar13[1];
    if ((uVar7 & 0xf8) == 0x30) {
      cVar4 = (&UNK_10e60c2a5)[uVar7] + cVar4 * '\b';
      pbVar13 = pbVar13 + 1;
    }
    uVar2 = (ulong)(uint)(int)cVar4;
  }
  else {
    switch(bVar5) {
    case 0x6e:
      bVar5 = 10;
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
    case 0x77:
LAB_10bd3ecf4:
      bVar5 = 0x3f;
      break;
    case 0x72:
      bVar5 = 0xd;
      break;
    case 0x74:
      bVar5 = 9;
      break;
    case 0x75:
LAB_10bd3ec28:
      uVar7 = 8;
      if (bVar5 != 0x55) {
        uVar7 = 0;
      }
      uVar6 = 4;
      if (bVar5 != 0x75) {
        uVar6 = uVar7;
      }
      uVar2 = (ulong)uVar6;
      pbVar1 = pbVar12 + 3;
      FUN_10bd3ef34(pbVar1,uVar2,&uStack_80);
      uVar7 = uStack_80;
      if ((int)pbVar1 == 0) {
        uVar2 = (ulong)(char)*pbVar13;
        goto LAB_10bd3ed64;
      }
      uVar9 = uVar2 | 3;
      pbVar11 = pbVar12 + uVar9;
      if (uStack_80 >> 10 == 0x36) {
        if ((*pbVar11 == 0x5c) && (pbVar11[1] == 0x75)) {
          pbVar11 = pbVar11 + 2;
          FUN_10bd3ef34(pbVar11,4,&uStack_78);
          if (((int)pbVar11 != 0) && ((uint)uStack_78 >> 10 == 0x37)) {
            uVar7 = (uint)uStack_78 + uVar7 * 0x400 + 0xfca02400;
            uVar9 = uVar2 + 9;
            uStack_80 = uVar7;
          }
        }
        pbVar11 = pbVar12 + uVar9;
LAB_10bd3ecc4:
        if (uVar7 >> 0x10 == 0) {
          lVar8 = 3;
          uVar7 = (uVar7 & 0xfc0) << 2 | uVar7 & 0x3f | (uVar7 >> 0xc & 0xf) << 0x10 | 0xe08080;
          goto LAB_10bd3ede0;
        }
        if (uVar7 >> 0x10 < 0x11) {
          lVar8 = 4;
          uVar7 = (uVar7 & 0x3f000) << 4 | (uVar7 >> 0x12 & 7) << 0x18 |
                  uVar7 & 0x3f | (uVar7 >> 6 & 0x3f) << 8 | 0xf0808080;
          goto LAB_10bd3ede0;
        }
        uStack_78 = (ulong)uVar7;
        puStack_70 = &UNK_10ae73cc0;
        pbVar1 = param_2;
        func_0x00010ae74260(param_2,&UNK_10f836c26,6,&uStack_78,1);
      }
      else {
        if (uStack_80 < 0x80) {
          lVar8 = 1;
        }
        else {
          if (0x7ff < uStack_80) goto LAB_10bd3ecc4;
          uVar7 = (uStack_80 & 0x7c0) << 2 | uStack_80 & 0x3f | 0xc080;
          lVar8 = 2;
        }
LAB_10bd3ede0:
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uStack_7c = uVar7 >> 0x10 | uVar7 << 0x10;
        pbVar1 = param_2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,(long)&uStack_78 - lVar8);
      }
      pbVar12 = pbVar11 + -1;
      goto LAB_10bd3eae8;
    case 0x76:
      bVar5 = 0xb;
      break;
    case 0x78:
LAB_10bd3ec08:
      bVar3 = pbVar12[3];
      iVar10 = (int)(char)bVar3;
      FUN_10bd3ee50();
      if (iVar10 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (&UNK_10e60c2a5)[bVar3];
        pbVar13 = pbVar12 + 3;
      }
      bVar3 = pbVar13[1];
      iVar10 = (int)(char)bVar3;
      FUN_10bd3ee50();
      if (iVar10 != 0) {
        cVar4 = (&UNK_10e60c2a5)[bVar3] + cVar4 * '\x10';
        pbVar13 = pbVar13 + 1;
      }
      uVar2 = (ulong)(uint)(int)cVar4;
      goto LAB_10bd3ed64;
    default:
      if ((bVar5 != 0x22) && (bVar5 != 0x27)) {
        if (bVar5 == 0x55) goto LAB_10bd3ec28;
        if (bVar5 == 0x66) {
          bVar5 = 0xc;
        }
        else if (bVar5 != 0x5c) {
          if (bVar5 == 0x61) {
            bVar5 = 7;
          }
          else {
            if (bVar5 != 0x62) {
              if (bVar5 == 0x58) goto LAB_10bd3ec08;
              goto LAB_10bd3ecf4;
            }
            bVar5 = 8;
          }
        }
      }
    }
    uVar2 = (ulong)(uint)(int)(char)bVar5;
  }
LAB_10bd3ed64:
  pbVar1 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,uVar2);
  pbVar12 = pbVar13;
  goto LAB_10bd3eae8;
}



/* Entry: 10bd3ee50; end: 10bd3ee7b;  */

bool FUN_10bd3ee50(uint param_1)

{
  param_1 = param_1 & 0xff;
  return (param_1 - 0x30 < 10 || param_1 - 0x61 < 6) || param_1 - 0x41 < 6;
}



/* Entry: 10bd3ee7c; end: 10bd3ef33;  */

bool FUN_10bd3ee7c(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  uint extraout_w9;
  char *****pppppcStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  bVar1 = param_1[0x17];
  uVar2 = bVar1 == 0;
  uVar5 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar1) {
    uVar5 = (ulong)bVar1;
  }
  if (uVar5 != 0) {
    puVar4 = param_1;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm(param_1,0);
    func_0x00010bd3f044(*puVar4);
    if ((bool)uVar2 || extraout_w9 < 0x1a) {
      func_0x000107c27fb4(&pppppcStack_48,param_1,1,0xffffffffffffffff);
      if (-1 < (char)bStack_31) {
        pppppcStack_48 = (char *****)&pppppcStack_48;
        uStack_40 = (ulong)bStack_31;
      }
      do {
        bVar3 = uStack_40 == 0;
        if (uStack_40 == 0) break;
        uVar5 = (ulong)*(char *)pppppcStack_48;
        func_0x00010bd3ef7c();
        pppppcStack_48 = (char *****)((long)pppppcStack_48 + 1);
        uStack_40 = uStack_40 - 1;
      } while ((uVar5 & 1) != 0);
      func_0x00010bd3efbc();
      return bVar3;
    }
  }
  return false;
}



/* Entry: 10bd3ef34; end: 10bd3f0df;  */

bool FUN_10bd3ef34(byte *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  
  *param_3 = 0;
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = 0;
    pbVar2 = param_1;
    while (bVar1 = param_1 + param_2 <= pbVar2, !bVar1) {
      if ((ulong)*pbVar2 == 0) {
        return bVar1;
      }
      iVar3 = (int)(char)(&UNK_10e60c2a5)[*pbVar2] + iVar3 * 0x10;
      *param_3 = iVar3;
      pbVar2 = pbVar2 + 1;
    }
  }
  return bVar1;
}



/* Entry: 10bd3f0e0; end: 10bd3f0fb;  */

long FUN_10bd3f0e0(undefined8 param_1)

{
  _backtrace(param_1,0x80);
  return (long)(int)param_1;
}



/* Entry: 10bd3f0fc; end: 10bd3f127;  */

void FUN_10bd3f0fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10bd3f0e0();
  *(long *)(param_1 + 0x400) = lVar1;
  *(undefined8 *)(param_1 + 0x408) = param_2;
  return;
}



/* Entry: 10bd3f128; end: 10bd3f397;  */

undefined *** FUN_10bd3f128(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  ulong uVar6;
  long alStack_6e0 [128];
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [504];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10bd3f0fc(alStack_6e0,param_2);
  ppuStack_280 = &PTR_DAT_11099bc38;
  puStack_278 = auStack_260;
  uStack_268 = 500;
  uStack_270 = 0;
  for (uVar6 = uStack_2d8; uVar6 < uStack_2e0; uVar6 = uVar6 + 1) {
    uVar5 = alStack_6e0[uVar6] - 4;
    uStack_298 = 0;
    uStack_2a0 = uVar5;
    func_0x000107c2793c(&DAT_10f2fb62f);
    FUN_10bd3f398();
    func_0x00010bd3f3b4();
    uVar1 = uVar5;
    _dladdr(uVar5,&uStack_2c0);
    if ((int)uVar1 == 0) {
      lStack_2a8 = 0;
      lStack_2b0 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
    }
    else if ((lStack_2b8 != 0) && (uStack_2c0 != 0)) {
      uStack_2d0 = uStack_2c0;
      uVar1 = uStack_2c0;
      _strlen();
      puVar2 = &uStack_2d0;
      uStack_2c8 = uVar1;
      func_0x000107885418(puVar2,0x2f,0xffffffffffffffff);
      if (puVar2 != (ulong *)0xffffffffffffffff) {
        uStack_2d0 = uStack_2d0 + (long)puVar2 + 1;
        uStack_2c8 = uStack_2c8 - ((long)puVar2 + 1);
      }
      lStack_290 = uVar5 - lStack_2b8;
      uStack_288 = 0;
      uStack_2a0 = uStack_2d0;
      uStack_298 = uStack_2c8;
      func_0x000107c2793c(&UNK_10f836c2d);
      FUN_10bd3f398();
      func_0x00010bd3f3b4();
    }
    if ((lStack_2a8 != 0) && (lStack_2b0 != 0)) {
      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
      lVar3 = lStack_2b0;
      ___cxa_demangle(lStack_2b0,0,0,&uStack_2d0);
      lStack_290 = uVar5 - lStack_2a8;
      uStack_2a0 = lVar3;
      if ((int)uStack_2d0 != 0) {
        uStack_2a0 = lStack_2b0;
      }
      uStack_298 = 0;
      uStack_288 = 0;
      func_0x000107c2793c(&UNK_10f836c2d);
      FUN_10bd3f398();
      func_0x00010bd3f3b4();
      _free(lVar3);
    }
    uStack_298 = 0;
    uStack_2a0 = 0;
    func_0x000107c2793c(&DAT_10f68f57e);
    FUN_10bd3f398();
    func_0x00010bd3f3b4();
  }
  func_0x000107c283dc(param_1,&ppuStack_280);
  pppuVar4 = &ppuStack_280;
  func_0x000107c283e8(pppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x000107c283e8(&ppuStack_280);
    __Unwind_Resume(pppuVar4);
    return &ppuStack_280;
  }
  return pppuVar4;
}



/* Entry: 10bd3f398; end: 10bd3f3bb;  */

undefined1 * FUN_10bd3f398(void)

{
  return &stack0x00000460;
}



/* Entry: 10bd3f3bc; end: 10bd3f3db;  */

long FUN_10bd3f3bc(long param_1)

{
  func_0x000107c316ec();
  return param_1 / 1000000;
}



/* Entry: 10bd3f3dc; end: 10bd3f41b;  */

void FUN_10bd3f3dc(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x000107c3a924();
  plVar1 = plRam0000000113847390;
  *(long **)(unaff_x19 + 8) = plRam0000000113847390;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(unaff_x19 + 0x10) = plVar1;
  }
  return;
}



/* Entry: 10bd3f41c; end: 10bd3f41f;  */

void FUN_10bd3f41c(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001000784e0();
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(unaff_x19 + 0x10));
  }
  return;
}



/* Entry: 10bd3f420; end: 10bd3f433;  */

void FUN_10bd3f420(void)

{
  func_0x000107c316d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd3f434; end: 10bd3f4df;  */

undefined8 * FUN_10bd3f434(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = param_2;
  lStack_28 = param_3;
  if (param_3 != 0) {
    lStack_40 = param_4;
    _strlen();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    lStack_38 = param_4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,param_3 + param_4 + 2);
    func_0x0001073727b8(param_1,&uStack_30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_10f836c3a);
    func_0x0001073727b8(param_1,&lStack_40);
    return param_1;
  }
  func_0x00010002b82c(param_1,param_4);
  func_0x000107c613d0(param_4);
  func_0x000107c60c50(unaff_x20,unaff_x19,param_4);
  return unaff_x20;
}



/* Entry: 10bd3f4e0; end: 10bd3f527;  */

void FUN_10bd3f4e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x11381b4fa;
  _strncpy(0x11381b4fa,param_1,0x400);
  *(undefined1 *)(lVar1 + 0x3ff) = 0;
  lVar1 = -1;
  ___assert_rtn(0xffffffffffffffff,param_2,param_3,param_1);
  FUN_10bd4402c();
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10bd3f528; end: 10bd3f57b;  */

void FUN_10bd3f528(long param_1,long param_2)

{
  FUN_10bd4402c();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10bd3f57c; end: 10bd3f5df;  */

void FUN_10bd3f57c(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *pcVar1;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x00010bd44f40();
  pcVar1 = *(code **)(*(long *)(param_1 + 0x30) + 0x20);
  uStack_38 = extraout_x8;
  func_0x00010bd45184();
  (*pcVar1)(auStack_70);
  func_0x00010bd45178();
  func_0x00010bd45400();
  func_0x00010bd44f08(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uStack_90 = param_2;
  func_0x00010bd44f40();
  uStack_98 = extraout_x8_00;
  FUN_10bd3f628(auStack_d0);
  func_0x00010bd45178();
  func_0x00010bd45400();
  func_0x00010bd44f08(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f5e0; end: 10bd3f627;  */

void FUN_10bd3f5e0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010bd44f40();
  uStack_28 = extraout_x8;
  FUN_10bd3f628(auStack_60);
  func_0x00010bd45178();
  func_0x00010bd45400();
  func_0x00010bd44f08(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f628; end: 10bd3f653;  */

void FUN_10bd3f628(void)

{
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f654; end: 10bd3f69b;  */

void FUN_10bd3f654(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010bd44f40();
  uStack_28 = extraout_x8;
  FUN_10bd3f69c(auStack_60);
  func_0x00010bd45178();
  func_0x00010bd45400();
  func_0x00010bd44f08(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f69c; end: 10bd3f6c7;  */

void FUN_10bd3f69c(void)

{
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f6c8; end: 10bd3f70f;  */

void FUN_10bd3f6c8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010bd44f40();
  uStack_28 = extraout_x8;
  FUN_10bd3f710(auStack_60);
  func_0x00010bd45178();
  func_0x00010bd45400();
  func_0x00010bd44f08(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f710; end: 10bd3f73b;  */

void FUN_10bd3f710(void)

{
  func_0x00010bd45184();
  func_0x00010bd45248();
  return;
}



/* Entry: 10bd3f73c; end: 10bd3f777;  */

void FUN_10bd3f73c(long param_1)

{
  func_0x00010bd45498();
  if (param_1 != 0) {
    func_0x00010bd45204();
    FUN_10bd42e30();
    func_0x00010bd455c0();
  }
  return;
}



/* Entry: 10bd3f778; end: 10bd3f7b7;  */

void FUN_10bd3f778(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_3 < 0x3fd)) {
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar1 = 6;
    }
    else {
      if (*(long *)(param_1 + 0x38) != 0) goto SUB_10894e15c;
      lVar1 = 7;
    }
    *param_2 = param_2[param_3];
    *(undefined1 **)(param_1 + lVar1 * 8) = param_2;
    return;
  }
SUB_10894e15c:
  if (param_2 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_2 + -8));
    return;
  }
  return;
}



/* Entry: 10bd3f7b8; end: 10bd3f807;  */

void FUN_10bd3f7b8(undefined8 *param_1)

{
  if (((long *)*param_1 != (long *)0x0) && (*(long *)*param_1 != 0)) {
    func_0x00010bd45204();
    FUN_10bd42e30();
    func_0x00010bd455c0();
    *(undefined8 *)*param_1 = 0;
  }
  return;
}



/* Entry: 10bd3f808; end: 10bd3f8b3;  */

undefined1  [16] FUN_10bd3f808(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(ulong *)*param_1;
  if (uVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x00010bd45204();
    *(undefined8 *)*param_1 = 0;
    uVar3 = uVar2;
  }
  if (param_2 <= uVar4) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = uVar3 / param_3;
    }
    if (uVar3 == uVar1 * param_3) goto LAB_10bd3f890;
  }
  if (uVar3 != 0) {
    FUN_10bd42e30();
    FUN_10bd3f778();
  }
  FUN_10bd42e30();
  FUN_10bd3f8b4();
  uVar4 = param_2;
  uVar3 = uVar2;
LAB_10bd3f890:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 10bd3f8b4; end: 10bd3f973;  */

byte * FUN_10bd3f8b4(long param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_2 + 3;
  if (param_1 != 0) {
    for (lVar5 = 0; lVar5 != 0x10; lVar5 = lVar5 + 8) {
      pbVar3 = *(byte **)(param_1 + 0x30 + lVar5);
      if ((pbVar3 != (byte *)0x0) && (uVar1 >> 2 <= (ulong)*pbVar3)) {
        uVar2 = 0;
        if (param_3 != (byte *)0x0) {
          uVar2 = (ulong)pbVar3 / (ulong)param_3;
        }
        if (pbVar3 == (byte *)(uVar2 * (long)param_3)) {
          *(undefined8 *)(param_1 + lVar5 + 0x30) = 0;
          bVar4 = *pbVar3;
          param_3 = pbVar3;
          goto LAB_10bd3f954;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 == 0) goto LAB_10bd3f938;
      lVar6 = 7;
    }
    else {
      lVar6 = 6;
    }
    *(undefined8 *)(param_1 + lVar6 * 8) = 0;
    func_0x00010894e15c(lVar5);
  }
LAB_10bd3f938:
  func_0x00010894e104(param_3,uVar1 & 0xfffffffffffffffc | 1);
  bVar4 = (byte)(uVar1 >> 2);
  if (0x3ff < uVar1) {
    bVar4 = 0;
  }
LAB_10bd3f954:
  param_3[param_2] = bVar4;
  return param_3;
}



/* Entry: 10bd3f974; end: 10bd3f9a7;  */

long * FUN_10bd3f974(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10bd42e30();
    FUN_10bd3f778();
  }
  return param_1;
}



/* Entry: 10bd3f9a8; end: 10bd3f9e7;  */

undefined8 * FUN_10bd3f9a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  FUN_10bd41e04();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 10bd3f9e8; end: 10bd3fa27;  */

long * FUN_10bd3f9e8(long *param_1)

{
  FUN_10bd3fa28();
  func_0x00010bd3fa30(param_1);
  if (*param_1 != 0) {
    FUN_10bd43b48(*param_1 + 8);
  }
  func_0x00010bd45508();
  return param_1;
}



/* Entry: 10bd3fa28; end: 10bd3fa37;  */

void FUN_10bd3fa28(long *param_1)

{
  long *plVar1;
  
  for (plVar1 = (long *)(*param_1 + 0x50); plVar1 = (long *)*plVar1, plVar1 != (long *)0x0;
      plVar1 = plVar1 + 4) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* Entry: 10bd3fa38; end: 10bd3fa9f;  */

void FUN_10bd3fa38(long param_1)

{
  long *plVar1;
  
  for (plVar1 = (long *)(param_1 + 0x50); plVar1 = (long *)*plVar1, plVar1 != (long *)0x0;
      plVar1 = plVar1 + 4) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* Entry: 10bd3faa0; end: 10bd3faa3;  */

void FUN_10bd3faa0(void)

{
  return;
}



/* Entry: 10bd3faa4; end: 10bd3faf3;  */

byte * FUN_10bd3faa4(byte *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  FUN_10bd42e30();
  func_0x000108950678();
  if (param_1 != (byte *)0x0) {
    for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 8) {
      pbVar2 = *(byte **)(param_1 + lVar4);
      if ((pbVar2 != (byte *)0x0) && (unaff_x21 <= *pbVar2)) {
        uVar1 = 0;
        if (unaff_x20 != 0) {
          uVar1 = (ulong)pbVar2 / unaff_x20;
        }
        if (pbVar2 == (byte *)(uVar1 * unaff_x20)) {
          param_1 = param_1 + lVar4;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          bVar3 = *pbVar2;
          param_1 = pbVar2;
          goto code_r0x00010894e0e8;
        }
      }
    }
    if ((*(long *)param_1 != 0) || (*(long *)(param_1 + 8) != 0)) {
      func_0x000108950614();
    }
  }
  func_0x0001089504e8();
  bVar3 = (byte)unaff_x21;
  if (0x3ff < unaff_x22) {
    bVar3 = 0;
  }
code_r0x00010894e0e8:
  param_1[unaff_x19] = bVar3;
  return param_1;
}



/* Entry: 10bd3faf4; end: 10bd3fb6b;  */

long FUN_10bd3faf4(long param_1)

{
  undefined8 uVar1;
  
  FUN_10bd3f9a8();
  uVar1 = 0x118;
  __Znwm();
  FUN_10bd41708();
  FUN_10bd3fb6c(param_1,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return param_1;
}



/* Entry: 10bd3fb6c; end: 10bd3fb9b;  */

undefined8 FUN_10bd3fb6c(undefined8 param_1,undefined8 param_2)

{
  FUN_10bd3fbb4();
  return param_2;
}



/* Entry: 10bd3fb9c; end: 10bd3fbb3;  */

long FUN_10bd3fb9c(long param_1)

{
  func_0x00010894d994();
  return param_1 + 0x28;
}



/* Entry: 10bd3fbb4; end: 10bd3fbbb;  */

void FUN_10bd3fbb4(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110d9e2b0;
  uStack_18 = 0;
  FUN_10bd41fd0(*param_1,&ppuStack_20,param_2);
  return;
}



/* Entry: 10bd3fbbc; end: 10bd3fbef;  */

void FUN_10bd3fbbc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bd455f8();
  FUN_10bd3fbf0(*(undefined8 *)(param_1 + 8),auStack_38);
  func_0x00010bd453f4();
  FUN_10bd3fc88();
  return;
}



/* Entry: 10bd3fbf0; end: 10bd3fc87;  */

long FUN_10bd3fbf0(undefined1 *param_1)

{
  bool bVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_d0 [152];
  undefined8 uStack_38;
  
  func_0x00010bd454a4();
  if (extraout_x8 == 0) {
    FUN_10bd3fcb8();
    lVar2 = 0;
  }
  else {
    func_0x00010bd455e0();
    uStack_38 = 0;
    func_0x00010bd45420();
    func_0x00010bd45008();
    lVar2 = 0;
    while( true ) {
      func_0x00010bd45670();
      FUN_10bd41ab4();
      if (param_1 == (undefined1 *)0x0) break;
      bVar1 = lVar2 == -1;
      lVar2 = lVar2 + 1;
      if (bVar1) {
        lVar2 = -1;
      }
      param_1 = auStack_d0;
      FUN_10bd40dd8();
    }
    func_0x00010bd450c0();
    func_0x00010bd45430();
    func_0x00010bd45438();
  }
  return lVar2;
}



/* Entry: 10bd3fc88; end: 10bd3fcaf;  */

void FUN_10bd3fc88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c2a678();
  if ((int)lVar1 == 0) {
    return;
  }
  FUN_10bd42e4c();
  func_0x00010bd45008(*(undefined8 *)(param_1 + 8));
  func_0x00010bd451d4();
  FUN_10bd4194c();
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd3fcb0; end: 10bd3fcb7;  */

void FUN_10bd3fcb0(long param_1)

{
  func_0x00010bd45008(*(undefined8 *)(param_1 + 8));
  func_0x00010bd451d4();
  FUN_10bd4194c();
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd3fcb8; end: 10bd3fceb;  */

void FUN_10bd3fcb8(void)

{
  func_0x00010bd45008();
  func_0x00010bd451d4();
  FUN_10bd4194c();
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd3fcec; end: 10bd3fd0b;  */

void FUN_10bd3fcec(void)

{
  func_0x00010bd4521c();
  __ZNSt13exception_ptrC1ERKS_();
  return;
}



/* Entry: 10bd3fd0c; end: 10bd3fd17;  */

undefined * FUN_10bd3fd0c(void)

{
  return &UNK_10f836c79;
}



/* Entry: 10bd3fd18; end: 10bd3fd6b;  */

void FUN_10bd3fd18(void)

{
  func_0x00010bd453f4();
  func_0x000107c2a670();
  func_0x00010bd4527c();
  return;
}



/* Entry: 10bd3fd6c; end: 10bd3fd83;  */

uint FUN_10bd3fd6c(uint param_1)

{
  func_0x00010894fa8c();
  return param_1 ^ 1;
}



/* Entry: 10bd3fd84; end: 10bd3fecf;  */

undefined8 * FUN_10bd3fd84(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_1;
  func_0x00010bd44fa0();
  puVar3[2] = 0;
  puVar3[3] = param_2;
  *puVar3 = &PTR_FUN_110d9dfa8;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[5] = &PTR_FUN_110d9dfe8;
  lVar4 = *param_2;
  ppuStack_58 = &PTR_DAT_110d9e2b0;
  uStack_50 = 0;
  uStack_38 = extraout_x8;
  FUN_10bd41e70(lVar4,&ppuStack_58,FUN_10bd440ec,*(undefined8 *)(lVar4 + 0x48));
  param_1[6] = lVar4;
  func_0x00010bd4565c(*(undefined4 *)(lVar4 + 0x10c));
  iVar2 = (int)param_1 + 0x38;
  FUN_10bd43b1c();
  FUN_10bd3fed0();
  *(int *)(param_1 + 0x11) = iVar2;
  lVar4 = (long)param_1 + 0x8c;
  FUN_10bd40f4c(lVar4);
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_10bd43b1c(param_1 + 0x15,*(undefined1 *)(param_1 + 0x10));
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar3 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x11);
  ppuStack_58 = (undefined **)(long)*(int *)((long)param_1 + 0x8c);
  uStack_50 = 0x1ffff;
  uStack_48 = 0;
  lStack_40 = lVar4;
  func_0x00010bd44f54(puVar3,&ppuStack_58,1);
  uVar1 = (int)puVar3 == -1;
  if ((bool)uVar1) {
    ___error();
    func_0x00010bd450ec();
    func_0x00010bd455ac();
    func_0x00010bd455a4();
  }
  func_0x00010bd44f08(uStack_38);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10bd44134(param_1 + 0x1f);
  FUN_10bd43b48(param_1 + 0x16);
  FUN_10bd40fdc(lVar4);
  FUN_10bd43b48(param_1 + 8);
  __Unwind_Resume();
  _kqueue();
  if ((int)puVar3 == -1) {
    ___error();
    func_0x000107c3a92c();
    func_0x000107c3a934();
  }
  return puVar3;
}



/* Entry: 10bd3fed0; end: 10bd3ff1b;  */

undefined8 FUN_10bd3fed0(undefined8 param_1)

{
  _kqueue();
  if ((int)param_1 == -1) {
    ___error();
    func_0x000107c3a92c();
    func_0x000107c3a934();
  }
  return param_1;
}



/* Entry: 10bd3ff1c; end: 10bd3ff77;  */

undefined8 * FUN_10bd3ff1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9dfa8;
  param_1[5] = &PTR_FUN_110d9dfe8;
  _close(*(undefined4 *)(param_1 + 0x11));
  FUN_10bd44134(param_1 + 0x1f);
  FUN_10bd43b48(param_1 + 0x16);
  FUN_10bd40fdc((long)param_1 + 0x8c);
  FUN_10bd43b48(param_1 + 8);
  return param_1;
}



/* Entry: 10bd3ff78; end: 10bd3ff7b;  */

undefined8 * FUN_10bd3ff78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9dfa8;
  param_1[5] = &PTR_FUN_110d9dfe8;
  _close(*(undefined4 *)(param_1 + 0x11));
  FUN_10bd44134(param_1 + 0x1f);
  FUN_10bd43b48(param_1 + 0x16);
  FUN_10bd40fdc((long)param_1 + 0x8c);
  FUN_10bd43b48(param_1 + 8);
  return param_1;
}



/* Entry: 10bd3ff7c; end: 10bd3ff8f;  */

void FUN_10bd3ff7c(void)

{
  FUN_10bd3ff1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd3ff90; end: 10bd4005f;  */

void FUN_10bd3ff90(long param_1)

{
  code *extraout_x8;
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  func_0x00010894f204(auStack_40,param_1 + 0x38);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  func_0x00010894f1d0(auStack_40);
  uStack_50 = 0;
  uStack_48 = 0;
  while (lVar2 = *(long *)(param_1 + 0xf8), lVar2 != 0) {
    for (lVar3 = 0x68; lVar3 != 0x98; lVar3 = lVar3 + 0x10) {
      FUN_10bd40060(&uStack_50,lVar2 + lVar3);
    }
    *(undefined1 *)(lVar2 + 0x98) = 1;
    func_0x00010bd40088(param_1 + 0xf8,lVar2);
  }
  for (plVar1 = (long *)(param_1 + 0x98); plVar1 = (long *)*plVar1, plVar1 != (long *)0x0;
      plVar1 = plVar1 + 1) {
    func_0x00010bd451d4(*(undefined8 *)(*plVar1 + 0x30));
    (*extraout_x8)();
  }
  FUN_10bd400c4(&uStack_50);
  func_0x00010bd45290();
  func_0x00010bd452ac();
  return;
}



/* Entry: 10bd40060; end: 10bd400c3;  */

void FUN_10bd40060(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_2 != 0) {
    plVar1 = param_1;
    if ((long *)param_1[1] != (long *)0x0) {
      plVar1 = (long *)param_1[1];
    }
    *plVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



/* Entry: 10bd400c4; end: 10bd400fb;  */

void FUN_10bd400c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10bd41c38(&uStack_30,param_1);
  func_0x00010bd45290();
  return;
}



/* Entry: 10bd400fc; end: 10bd40267;  */

void FUN_10bd400fc(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 auStack_b0 [4];
  undefined4 auStack_a0 [6];
  long alStack_88 [3];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = auStack_b0;
  func_0x00010bd44fa0();
  uVar1 = 0;
  uStack_48 = extraout_x8;
  if (param_2 == 2) {
    param_1[0x22] = 0xffffffff;
    puVar3 = param_1;
    FUN_10bd3fed0();
    param_1[0x22] = (int)puVar3;
    puVar8 = (undefined8 *)(param_1 + 0x23);
    FUN_10bd41000(puVar8);
    *(undefined8 *)(param_1 + 0x23) = 0xffffffffffffffff;
    FUN_10bd40f4c(puVar8);
    iVar2 = param_1[0x22];
    alStack_88[0] = (long)(int)param_1[0x23];
    alStack_88[1] = 0x1ffff;
    alStack_88[2] = 0;
    puStack_70 = puVar8;
    func_0x00010bd44f54(iVar2,alStack_88,1);
    uVar1 = iVar2 == -1;
    if ((bool)uVar1) {
      ___error();
      func_0x00010bd450ec();
      func_0x000107c2a670(auStack_a0);
      func_0x000107c2a674(auStack_a0,&UNK_10f836c8d);
    }
    func_0x00010894f204(auStack_b0,param_1 + 0x2a);
    puVar8 = (undefined8 *)(param_1 + 0x3e);
    while (puVar8 = (undefined8 *)*puVar8, puVar8 != (undefined8 *)0x0) {
      uVar1 = *(int *)((long)puVar8 + 100) == 1;
      if (0 < *(int *)((long)puVar8 + 100)) {
        alStack_88[0] = (long)*(int *)(puVar8 + 0xc);
        alStack_88[1] = 0x21ffff;
        alStack_88[2] = 0;
        uStack_60 = 0x21fffe;
        uStack_58 = 0;
        puVar4 = (undefined4 *)(ulong)(uint)param_1[0x22];
        puStack_70 = puVar8;
        lStack_68 = alStack_88[0];
        puStack_50 = puVar8;
        func_0x00010bd44f54(puVar4,alStack_88);
        uVar1 = (int)puVar4 == -1;
        if ((bool)uVar1) {
          ___error();
          func_0x000107c2a670(auStack_a0,*puVar4,&PTR_PTR_113289a30);
          puVar4 = auStack_a0;
          func_0x000107c2a674(puVar4,&UNK_10f836cad);
        }
      }
    }
    func_0x00010bd450c0();
    param_1 = puVar4;
  }
  func_0x00010bd44f08(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd4508c();
  lVar5 = *(long *)(param_1 + 0xc);
  func_0x00010bd45008();
  if (((*(byte *)(lVar5 + 0x109) & 1) == 0) && (*(long *)(lVar5 + 0xc0) == 0)) {
    uVar6 = *(undefined8 *)(lVar5 + 0x18);
    (**(code **)(lVar5 + 200))();
    *(undefined8 *)(lVar5 + 0xc0) = uVar6;
    puVar7 = (undefined8 *)(lVar5 + 0xd0);
    *puVar7 = 0;
    puVar8 = (undefined8 *)(lVar5 + 0xf8);
    if (*(undefined8 **)(lVar5 + 0x100) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(lVar5 + 0x100);
    }
    *puVar8 = puVar7;
    *(undefined8 **)(lVar5 + 0x100) = puVar7;
    func_0x00010bd451d4();
    FUN_10bd41a64();
  }
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd40268; end: 10bd4026f;  */

void FUN_10bd40268(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bd45008();
  if (((*(byte *)(lVar2 + 0x109) & 1) == 0) && (*(long *)(lVar2 + 0xc0) == 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    (**(code **)(lVar2 + 200))();
    *(undefined8 *)(lVar2 + 0xc0) = uVar3;
    puVar4 = (undefined8 *)(lVar2 + 0xd0);
    *puVar4 = 0;
    puVar1 = (undefined8 *)(lVar2 + 0xf8);
    if (*(undefined8 **)(lVar2 + 0x100) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(lVar2 + 0x100);
    }
    *puVar1 = puVar4;
    *(undefined8 **)(lVar2 + 0x100) = puVar4;
    func_0x00010bd451d4();
    FUN_10bd41a64();
  }
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd40270; end: 10bd402e3;  */

void FUN_10bd40270(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  func_0x00010bd45008();
  if (((*(byte *)(param_1 + 0x109) & 1) == 0) && (*(long *)(param_1 + 0xc0) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    (**(code **)(param_1 + 200))();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    puVar3 = (undefined8 *)(param_1 + 0xd0);
    *puVar3 = 0;
    puVar1 = (undefined8 *)(param_1 + 0xf8);
    if (*(undefined8 **)(param_1 + 0x100) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x100);
    }
    *puVar1 = puVar3;
    *(undefined8 **)(param_1 + 0x100) = puVar3;
    func_0x00010bd451d4();
    FUN_10bd41a64();
  }
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd402e4; end: 10bd4032b;  */

undefined8 FUN_10bd402e4(long param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  FUN_10bd4032c();
  *param_3 = param_1;
  func_0x00010bd45354(param_1,auStack_30);
  lVar1 = *param_3;
  *(undefined4 *)(lVar1 + 0x60) = param_2;
  *(undefined4 *)(lVar1 + 100) = 0;
  *(undefined1 *)(lVar1 + 0x98) = 0;
  func_0x00010bd450c0();
  return 0;
}



/* Entry: 10bd4032c; end: 10bd40377;  */

void FUN_10bd4032c(void)

{
  long unaff_x19;
  
  func_0x00010bd4512c();
  func_0x00010894f204();
  func_0x00010bd4565c(*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x10c));
  FUN_10bd40e58(unaff_x19 + 0xf8);
  func_0x00010bd44fc0();
  return;
}



/* Entry: 10bd40378; end: 10bd40583;  */

void FUN_10bd40378(long param_1,int param_2,ulong param_3,long *param_4,undefined8 *param_5,
                  ulong param_6,int param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [10];
  undefined8 uStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010bd44fa0();
  uStack_58 = extraout_x8;
  if (*param_4 == 0) {
    param_5 = param_5 + 3;
    func_0x00010bd45138();
    func_0x00010bd44f08(uStack_58);
    puVar7 = param_5;
    if ((bool)in_ZR) {
      func_0x00010bd45480();
      goto code_r0x00010bd40584;
    }
  }
  else {
    func_0x00010bd45354(auStack_a8);
    lVar9 = *param_4;
    uVar5 = *(char *)(lVar9 + 0x98) == '\x01';
    if ((bool)uVar5) {
      func_0x00010bd45480();
      FUN_10bd40584();
      goto LAB_10bd404a0;
    }
    lVar10 = (long)param_2;
    if (*(long *)(lVar9 + (long)param_2 * 0x10 + 0x68) == 0) {
      if ((param_7 == 0) || ((param_2 == 0 && (*(long *)(lVar9 + 0x88) != 0)))) {
        uVar3 = *(uint *)(&UNK_10e60c3cc + lVar10 * 4);
        uVar4 = *(uint *)(lVar9 + 100);
        if ((int)*(uint *)(lVar9 + 100) < (int)uVar3) {
          *(uint *)(lVar9 + 100) = uVar3;
          uVar4 = uVar3;
        }
        param_3 = (ulong)uVar4;
        func_0x00010bd45254();
        func_0x00010bd44f54();
        lVar9 = *param_4;
        goto LAB_10bd40470;
      }
      puVar7 = param_5;
      (*(code *)param_5[8])();
      iVar6 = (int)puVar7;
      if (iVar6 == 0) {
        lVar9 = *param_4;
        uVar3 = *(uint *)(&UNK_10e60c3cc + lVar10 * 4);
        param_6 = (ulong)uVar3;
        if (*(int *)(lVar9 + 100) < (int)uVar3) {
          func_0x00010bd45254();
          func_0x00010bd44f54();
          uVar5 = iVar6 == -1;
          if ((bool)uVar5) {
            ___error();
            func_0x00010bd450ec();
            func_0x00010bd455ac();
            param_5[4] = uStack_b8;
            param_5[3] = uStack_c0;
            param_5[5] = uStack_b0;
            func_0x00010bd45524(*(undefined8 *)(param_1 + 0x30));
            goto LAB_10bd404a0;
          }
          lVar9 = *param_4;
          *(uint *)(lVar9 + 100) = uVar3;
          param_3 = param_6;
        }
        goto LAB_10bd40470;
      }
      func_0x00010894f1d0(auStack_a8);
      func_0x00010bd45524(*(undefined8 *)(param_1 + 0x30));
      param_6 = param_3;
    }
    else {
LAB_10bd40470:
      lVar9 = lVar9 + lVar10 * 0x10;
      *param_5 = 0;
      uVar5 = *(undefined8 **)(lVar9 + 0x70) == (undefined8 *)0x0;
      puVar7 = (undefined8 *)(lVar9 + 0x68);
      if (!(bool)uVar5) {
        puVar7 = *(undefined8 **)(lVar9 + 0x70);
      }
      *puVar7 = param_5;
      *(undefined8 **)(lVar9 + 0x70) = param_5;
      do {
        func_0x00010bd45440();
        param_6 = param_3;
      } while (extraout_w10 != 0);
    }
LAB_10bd404a0:
    puVar7 = auStack_a8;
    func_0x00010894f570();
    func_0x00010bd44f08(uStack_58);
    param_3 = param_6;
    if ((bool)uVar5) {
      return;
    }
  }
  param_6 = param_3;
  ___stack_chk_fail();
  param_5 = auStack_a8;
  func_0x00010894f570();
  unaff_x30 = FUN_10bd40584;
  func_0x00010bd4508c();
  register0x00000008 = (BADSPACEBASE *)&uStack_c0;
  unaff_x19 = puVar7;
  unaff_x20 = param_1;
  unaff_x29 = puVar1;
code_r0x00010bd40584:
  uVar8 = param_5[6];
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010bd451a0(uVar8);
  if ((((param_6 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x28) & 1) == 0)) ||
     (lVar9 = unaff_x20, FUN_10bd41c60(), lVar9 == 0)) {
    do {
      func_0x00010bd45440();
    } while (extraout_w10_00 != 0);
    func_0x00010894f204((undefined1 *)((long)register0x00000008 + -0x30),unaff_x20 + 0x30);
    *unaff_x19 = 0;
    puVar7 = (undefined8 *)(unaff_x20 + 0xf8);
    if (*(undefined8 **)(unaff_x20 + 0x100) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(unaff_x20 + 0x100);
    }
    *puVar7 = unaff_x19;
    *(undefined8 **)(unaff_x20 + 0x100) = unaff_x19;
    FUN_10bd41a64(unaff_x20,(undefined1 *)((long)register0x00000008 + -0x30));
    func_0x00010bd450c0();
  }
  else {
    puVar2 = *(undefined8 **)(lVar9 + 0x68);
    lVar10 = *(long *)(lVar9 + 0x70);
    *unaff_x19 = 0;
    puVar7 = (undefined8 *)(lVar9 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    *puVar7 = unaff_x19;
    *(undefined8 **)(lVar9 + 0x68) = unaff_x19;
    *(long *)(lVar9 + 0x70) = lVar10 + 1;
  }
  return;
}



/* Entry: 10bd40584; end: 10bd4058b;  */

void FUN_10bd40584(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x00010bd451a0(*(undefined8 *)(param_1 + 0x30));
  if ((((param_3 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x28) & 1) == 0)) ||
     (lVar4 = unaff_x20, FUN_10bd41c60(), lVar4 == 0)) {
    do {
      func_0x00010bd45440();
    } while (extraout_w10 != 0);
    func_0x00010894f204(auStack_30,unaff_x20 + 0x30);
    *unaff_x19 = 0;
    puVar1 = (undefined8 *)(unaff_x20 + 0xf8);
    if (*(undefined8 **)(unaff_x20 + 0x100) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(unaff_x20 + 0x100);
    }
    *puVar1 = unaff_x19;
    *(undefined8 **)(unaff_x20 + 0x100) = unaff_x19;
    FUN_10bd41a64();
    func_0x00010bd450c0();
  }
  else {
    puVar2 = *(undefined8 **)(lVar4 + 0x68);
    lVar3 = *(long *)(lVar4 + 0x70);
    *unaff_x19 = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar2;
    }
    *puVar1 = unaff_x19;
    *(undefined8 **)(lVar4 + 0x68) = unaff_x19;
    *(long *)(lVar4 + 0x70) = lVar3 + 1;
  }
  return;
}



/* Entry: 10bd4058c; end: 10bd4062f;  */

void FUN_10bd4058c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x00010bd451a0();
  if ((((param_3 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x28) & 1) == 0)) ||
     (lVar4 = unaff_x20, FUN_10bd41c60(), lVar4 == 0)) {
    do {
      func_0x00010bd45440();
    } while (extraout_w10 != 0);
    func_0x00010894f204(auStack_30,unaff_x20 + 0x30);
    *unaff_x19 = 0;
    puVar1 = (undefined8 *)(unaff_x20 + 0xf8);
    if (*(undefined8 **)(unaff_x20 + 0x100) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(unaff_x20 + 0x100);
    }
    *puVar1 = unaff_x19;
    *(undefined8 **)(unaff_x20 + 0x100) = unaff_x19;
    FUN_10bd41a64();
    func_0x00010bd450c0();
  }
  else {
    puVar2 = *(undefined8 **)(lVar4 + 0x68);
    lVar3 = *(long *)(lVar4 + 0x70);
    *unaff_x19 = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = puVar2;
    }
    *puVar1 = unaff_x19;
    *(undefined8 **)(lVar4 + 0x68) = unaff_x19;
    *(long *)(lVar4 + 0x70) = lVar3 + 1;
  }
  return;
}



/* Entry: 10bd40630; end: 10bd406ff;  */

void FUN_10bd40630(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [16];
  
  if (*param_3 != 0) {
    func_0x00010bd45354(auStack_50);
    uStack_60 = 0;
    puStack_58 = (undefined8 *)0x0;
    for (lVar2 = 0; lVar2 != 3; lVar2 = lVar2 + 1) {
      while( true ) {
        func_0x00010bd45650();
        puVar3 = *(undefined8 **)(extraout_x8 + 0x68);
        if (puVar3 == (undefined8 *)0x0) break;
        func_0x00010bd452d0(puVar3 + 3);
        func_0x00010bd45650();
        FUN_10bd40700(extraout_x8_00 + 0x68);
        *puVar3 = 0;
        puVar1 = &uStack_60;
        if (puStack_58 != (undefined8 *)0x0) {
          puVar1 = puStack_58;
        }
        *puVar1 = puVar3;
        puStack_58 = puVar3;
      }
    }
    func_0x00010894f1d0(auStack_50);
    FUN_10bd40720(*(undefined8 *)(param_1 + 0x30),&uStack_60);
    func_0x00010bd45290();
    func_0x00010bd452ac();
  }
  return;
}



/* Entry: 10bd40700; end: 10bd4071f;  */

void FUN_10bd40700(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    *param_1 = lVar2;
    if (lVar2 == 0) {
      param_1[1] = 0;
    }
    *plVar1 = 0;
  }
  return;
}



/* Entry: 10bd40720; end: 10bd40797;  */

void FUN_10bd40720(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  if (*param_2 != 0) {
    func_0x00010bd452a0();
    if ((*(char *)(param_1 + 0x28) == '\x01') && (lVar2 = unaff_x19, FUN_10bd41c60(), lVar2 != 0)) {
      if (*unaff_x20 != 0) {
        plVar1 = (long *)(lVar2 + 0x60);
        if (*(long **)(lVar2 + 0x68) != (long *)0x0) {
          plVar1 = *(long **)(lVar2 + 0x68);
        }
        *plVar1 = *unaff_x20;
        *(long *)(lVar2 + 0x68) = unaff_x20[1];
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
      }
      return;
    }
    func_0x00010bd45008();
    FUN_10bd41c38(unaff_x19 + 0xf8);
    func_0x00010bd451d4();
    FUN_10bd41a64();
    func_0x00010bd450c0();
  }
  return;
}



/* Entry: 10bd40798; end: 10bd408cb;  */

void FUN_10bd40798(long param_1,undefined8 param_2,long *param_3,int param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  func_0x00010bd45684();
  if (*param_3 != 0) {
    func_0x00010bd45354(&stack0x00000020);
    in_stack_00000010 = 0;
    in_stack_00000018 = (undefined8 *)0x0;
    in_stack_00000000 = 0;
    in_stack_00000008 = (undefined8 *)0x0;
    while( true ) {
      lVar1 = *param_3 + (long)param_4 * 0x10;
      puVar4 = *(undefined8 **)(lVar1 + 0x68);
      if (puVar4 == (undefined8 *)0x0) break;
      FUN_10bd40700();
      if (puVar4[6] == param_5) {
        func_0x00010bd452d0(puVar4 + 3);
        *puVar4 = 0;
        puVar2 = &stack0x00000010;
        if (in_stack_00000018 != (undefined8 *)0x0) {
          puVar2 = in_stack_00000018;
        }
        *puVar2 = puVar4;
        in_stack_00000018 = puVar4;
      }
      else {
        *puVar4 = 0;
        puVar2 = (undefined8 *)register0x00000008;
        if (in_stack_00000008 != (undefined8 *)0x0) {
          puVar2 = in_stack_00000008;
        }
        *puVar2 = puVar4;
        in_stack_00000008 = puVar4;
      }
    }
    if (in_stack_00000000 != 0) {
      plVar3 = (long *)(lVar1 + 0x68);
      if (*(long **)(lVar1 + 0x70) != (long *)0x0) {
        plVar3 = *(long **)(lVar1 + 0x70);
      }
      *plVar3 = in_stack_00000000;
      *(undefined8 **)(lVar1 + 0x70) = in_stack_00000008;
      in_stack_00000000 = 0;
      in_stack_00000008 = (undefined8 *)0x0;
    }
    func_0x00010894f1d0(&stack0x00000020);
    FUN_10bd40720(*(undefined8 *)(param_1 + 0x30),&stack0x00000010);
    FUN_10bd43ff0();
    func_0x00010894f514(&stack0x00000010);
    func_0x00010894f570(&stack0x00000020);
  }
  return;
}



/* Entry: 10bd408cc; end: 10bd40a4b;  */

void FUN_10bd408cc(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  func_0x00010bd44fa0();
  plVar1 = param_2;
  uStack_48 = extraout_x8;
  if (*param_3 != 0) {
    func_0x00010bd453f4();
    func_0x00010bd45354();
    if ((*(byte *)(*param_3 + 0x98) & 1) == 0) {
      if ((param_4 & 1) == 0) {
        lStack_88 = (long)(int)param_2;
        uStack_80 = 0x2ffff;
        uStack_74 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_6c = 0;
        uStack_60 = 0x2fffe;
        uStack_54 = 0;
        uStack_5c = 0;
        uStack_4c = 0;
        lStack_68 = lStack_88;
        func_0x00010bd44f54(*(undefined4 *)(unaff_x19 + 0x88),&lStack_88,
                            *(undefined4 *)(*param_3 + 100));
      }
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      for (lVar2 = 0; in_ZR = lVar2 == 3, !(bool)in_ZR; lVar2 = lVar2 + 1) {
        while( true ) {
          func_0x00010bd45650();
          puVar3 = *(undefined8 **)(extraout_x8_00 + 0x68);
          if (puVar3 == (undefined8 *)0x0) break;
          func_0x00010bd452d0(puVar3 + 3);
          func_0x00010bd45650();
          FUN_10bd40700(extraout_x8_01 + 0x68);
          *puVar3 = 0;
          plVar1 = &lStack_88;
          if ((long *)CONCAT44(uStack_7c,uStack_80) != (long *)0x0) {
            plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
          }
          *plVar1 = (long)puVar3;
          uStack_80 = SUB84(puVar3,0);
          uStack_7c = (undefined4)((ulong)puVar3 >> 0x20);
        }
      }
      lVar2 = *param_3;
      *(undefined4 *)(lVar2 + 0x60) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x98) = 1;
      func_0x00010894f1d0(auStack_98);
      plVar1 = &lStack_88;
      FUN_10bd40720(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010894f514(&lStack_88);
    }
    else {
      *param_3 = 0;
    }
    func_0x00010894f570();
  }
  func_0x00010bd44f08(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010894f570(auStack_98);
  func_0x00010bd4508c();
  if (*plVar1 != 0) {
    FUN_10bd40a74();
    *plVar1 = 0;
  }
  return;
}



/* Entry: 10bd40a4c; end: 10bd40a73;  */

void FUN_10bd40a4c(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_10bd40a74();
    *param_2 = 0;
  }
  return;
}



/* Entry: 10bd40a74; end: 10bd40ab3;  */

void FUN_10bd40a74(void)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x00010bd451a0();
  func_0x00010894f204(auStack_30,unaff_x20 + 0xa8);
  func_0x00010bd40088(unaff_x20 + 0xf8);
  func_0x00010bd450c0();
  return;
}



/* Entry: 10bd40ab4; end: 10bd40dd7;  */

void FUN_10bd40ab4(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 extraout_x8;
  ulong *puVar6;
  code *extraout_x8_00;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_14a0 [16];
  long lStack_1490;
  long lStack_1488;
  long alStack_1480 [2];
  undefined1 auStack_1470 [8];
  ushort auStack_1468 [4];
  undefined4 auStack_1460 [2];
  undefined8 auStack_1458 [509];
  long lStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010bd44fa0();
  uStack_70 = extraout_x8;
  func_0x00010bd454dc(alStack_1480);
  lStack_1490 = 0;
  lStack_1488 = 0;
  if (param_2 != (long *)0x0) {
    puVar6 = (ulong *)(param_1 + 0x98);
    if ((long *)0x11e1a2ff < param_2) {
      param_2 = (long *)0x11e1a300;
    }
    while (plVar7 = (long *)*puVar6, plVar7 != (long *)0x0) {
      param_2 = plVar7;
      (**(code **)(*plVar7 + 0x20))();
      puVar6 = (ulong *)(plVar7 + 1);
    }
    lStack_1490 = (long)param_2 / 1000000;
    lStack_1488 = ((long)param_2 % 1000000) * 1000;
  }
  func_0x00010894f1d0(alStack_1480);
  uVar4 = *(uint *)(param_1 + 0x88);
  _kevent(uVar4,0,0,auStack_1470,0x80,&lStack_1490);
  uVar10 = 0;
  do {
    uVar3 = uVar10 == (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
    if ((bool)uVar3) {
      FUN_10bd40dd8(alStack_1480);
      for (plVar7 = (long *)(param_1 + 0x98); plVar7 = (long *)*plVar7, plVar7 != (long *)0x0;
          plVar7 = plVar7 + 1) {
        func_0x00010bd45480(*(undefined8 *)(*plVar7 + 0x28));
        (*extraout_x8_00)();
      }
      func_0x00010894f570();
      func_0x00010bd44f08(uStack_70);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      plVar7 = alStack_1480;
      func_0x00010894f570();
      func_0x00010bd4508c();
      if ((*(char *)(*plVar7 + 0x48) == '\x01') && ((*(byte *)(plVar7 + 1) & 1) == 0)) {
        _pthread_mutex_lock(*plVar7 + 8);
        *(undefined1 *)(plVar7 + 1) = 1;
      }
      return;
    }
    puVar8 = (uint *)auStack_1458[uVar10 * 4];
    if (puVar8 == (uint *)(param_1 + 0x8c)) {
      do {
        do {
          piVar5 = (int *)(ulong)*(uint *)(param_1 + 0x8c);
          _read(piVar5,&lStack_470,0x400);
        } while (piVar5 == (int *)0x400);
        if (-1 < (long)piVar5) goto LAB_10bd40d24;
        ___error();
      } while (*piVar5 == 4);
      ___error();
      if (*piVar5 != 0x23) {
        ___error();
      }
    }
    else {
      func_0x00010894f204(auStack_14a0,puVar8 + 4);
      if (((auStack_1468[uVar10 * 0x10] == 0xfffe) && (puVar8[0x19] == 2)) &&
         (*(long *)(puVar8 + 0x1e) == 0)) {
        lStack_470 = (long)(int)puVar8[0x18];
        uStack_468 = 0x2fffe;
        uStack_45c = 0;
        uStack_458 = 0;
        uStack_464 = 0;
        uStack_460 = 0;
        uStack_454 = 0;
        func_0x00010bd44f54(*(undefined4 *)(param_1 + 0x88),&lStack_470,1);
        puVar8[0x19] = 1;
      }
      uVar11 = 2;
      do {
        if ((*(int *)(&UNK_10e60c3d8 + uVar11 * 4) == (int)(short)auStack_1468[uVar10 * 0x10]) &&
           (((int)uVar11 != 2 || ((auStack_1468[uVar10 * 0x10 + 1] >> 0xd & 1) != 0)))) {
          puVar1 = puVar8 + uVar11 * 4 + 0x1a;
          while (lVar9 = *(long *)puVar1, lVar9 != 0) {
            if ((auStack_1468[uVar10 * 0x10 + 1] >> 0xe & 1) != 0) {
              func_0x000107c2a670(&lStack_470,auStack_1460[uVar10 * 8],&PTR_PTR_113289a30);
              *(ulong *)(lVar9 + 0x20) = CONCAT44(uStack_464,uStack_468);
              *(long *)(lVar9 + 0x18) = lStack_470;
              *(ulong *)(lVar9 + 0x28) = CONCAT44(uStack_45c,uStack_460);
              FUN_10bd40700(puVar1);
              func_0x00010bd450d0();
            }
            (**(code **)(lVar9 + 0x40))();
            if ((int)lVar9 == 0) break;
            FUN_10bd40700(puVar1);
            func_0x00010bd450d0();
          }
        }
        uVar2 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar2;
      } while (-1 < (int)uVar2);
      func_0x00010bd452ac();
    }
LAB_10bd40d24:
    uVar10 = uVar10 + 1;
  } while( true );
}



/* Entry: 10bd40dd8; end: 10bd40e17;  */

void FUN_10bd40dd8(long *param_1)

{
  if ((*(char *)(*param_1 + 0x48) == '\x01') && ((*(byte *)(param_1 + 1) & 1) == 0)) {
    _pthread_mutex_lock(*param_1 + 8);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 10bd40e18; end: 10bd40e27;  */

void FUN_10bd40e18(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 extraout_x8;
  ulong *puVar6;
  code *extraout_x8_00;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_14a0 [16];
  long lStack_1490;
  long lStack_1488;
  long alStack_1480 [2];
  undefined1 auStack_1470 [8];
  ushort auStack_1468 [4];
  undefined4 auStack_1460 [2];
  undefined8 auStack_1458 [509];
  long lStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 uStack_70;
  
  param_1 = param_1 + -0x28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010bd44fa0();
  uStack_70 = extraout_x8;
  func_0x00010bd454dc(alStack_1480);
  lStack_1490 = 0;
  lStack_1488 = 0;
  if (param_2 != (long *)0x0) {
    puVar6 = (ulong *)(param_1 + 0x98);
    if ((long *)0x11e1a2ff < param_2) {
      param_2 = (long *)0x11e1a300;
    }
    while (plVar7 = (long *)*puVar6, plVar7 != (long *)0x0) {
      param_2 = plVar7;
      (**(code **)(*plVar7 + 0x20))();
      puVar6 = (ulong *)(plVar7 + 1);
    }
    lStack_1490 = (long)param_2 / 1000000;
    lStack_1488 = ((long)param_2 % 1000000) * 1000;
  }
  func_0x00010894f1d0(alStack_1480);
  uVar4 = *(uint *)(param_1 + 0x88);
  _kevent(uVar4,0,0,auStack_1470,0x80,&lStack_1490);
  uVar10 = 0;
  do {
    uVar3 = uVar10 == (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
    if ((bool)uVar3) {
      FUN_10bd40dd8(alStack_1480);
      for (plVar7 = (long *)(param_1 + 0x98); plVar7 = (long *)*plVar7, plVar7 != (long *)0x0;
          plVar7 = plVar7 + 1) {
        func_0x00010bd45480(*(undefined8 *)(*plVar7 + 0x28));
        (*extraout_x8_00)();
      }
      func_0x00010894f570();
      func_0x00010bd44f08(uStack_70);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      plVar7 = alStack_1480;
      func_0x00010894f570();
      func_0x00010bd4508c();
      if ((*(char *)(*plVar7 + 0x48) == '\x01') && ((*(byte *)(plVar7 + 1) & 1) == 0)) {
        _pthread_mutex_lock(*plVar7 + 8);
        *(undefined1 *)(plVar7 + 1) = 1;
      }
      return;
    }
    puVar8 = (uint *)auStack_1458[uVar10 * 4];
    if (puVar8 == (uint *)(param_1 + 0x8c)) {
      do {
        do {
          piVar5 = (int *)(ulong)*(uint *)(param_1 + 0x8c);
          _read(piVar5,&lStack_470,0x400);
        } while (piVar5 == (int *)0x400);
        if (-1 < (long)piVar5) goto LAB_10bd40d24;
        ___error();
      } while (*piVar5 == 4);
      ___error();
      if (*piVar5 != 0x23) {
        ___error();
      }
    }
    else {
      func_0x00010894f204(auStack_14a0,puVar8 + 4);
      if (((auStack_1468[uVar10 * 0x10] == 0xfffe) && (puVar8[0x19] == 2)) &&
         (*(long *)(puVar8 + 0x1e) == 0)) {
        lStack_470 = (long)(int)puVar8[0x18];
        uStack_468 = 0x2fffe;
        uStack_45c = 0;
        uStack_458 = 0;
        uStack_464 = 0;
        uStack_460 = 0;
        uStack_454 = 0;
        func_0x00010bd44f54(*(undefined4 *)(param_1 + 0x88),&lStack_470,1);
        puVar8[0x19] = 1;
      }
      uVar11 = 2;
      do {
        if ((*(int *)(&UNK_10e60c3d8 + uVar11 * 4) == (int)(short)auStack_1468[uVar10 * 0x10]) &&
           (((int)uVar11 != 2 || ((auStack_1468[uVar10 * 0x10 + 1] >> 0xd & 1) != 0)))) {
          puVar1 = puVar8 + uVar11 * 4 + 0x1a;
          while (lVar9 = *(long *)puVar1, lVar9 != 0) {
            if ((auStack_1468[uVar10 * 0x10 + 1] >> 0xe & 1) != 0) {
              func_0x000107c2a670(&lStack_470,auStack_1460[uVar10 * 8],&PTR_PTR_113289a30);
              *(ulong *)(lVar9 + 0x20) = CONCAT44(uStack_464,uStack_468);
              *(long *)(lVar9 + 0x18) = lStack_470;
              *(ulong *)(lVar9 + 0x28) = CONCAT44(uStack_45c,uStack_460);
              FUN_10bd40700(puVar1);
              func_0x00010bd450d0();
            }
            (**(code **)(lVar9 + 0x40))();
            if ((int)lVar9 == 0) break;
            FUN_10bd40700(puVar1);
            func_0x00010bd450d0();
          }
        }
        uVar2 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar2;
      } while (-1 < (int)uVar2);
      func_0x00010bd452ac();
    }
LAB_10bd40d24:
    uVar10 = uVar10 + 1;
  } while( true );
}



/* Entry: 10bd40e28; end: 10bd40e4f;  */

void FUN_10bd40e28(undefined8 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  _write(param_1,&uStack_11,1);
  return;
}



/* Entry: 10bd40e50; end: 10bd40e57;  */

void FUN_10bd40e50(long param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  _write(*(undefined4 *)(param_1 + 0x68),&uStack_11,1);
  return;
}



/* Entry: 10bd40e58; end: 10bd40f0b;  */

void FUN_10bd40e58(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
    FUN_10bd441b0();
  }
  else {
    param_1[1] = *plVar1;
    param_2 = plVar1;
  }
  *param_2 = *param_1;
  param_2[1] = 0;
  if (*param_1 != 0) {
    *(long **)(*param_1 + 8) = param_2;
  }
  *param_1 = (long)param_2;
  return;
}



/* Entry: 10bd40f0c; end: 10bd40f4b;  */

void FUN_10bd40f0c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (param_2 == lVar1) {
      *param_1 = *(long *)(param_2 + 8);
    }
    else {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
        if (lVar1 == 0) {
          return;
        }
      } while (lVar1 != param_2);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 8);
    }
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}



/* Entry: 10bd40f4c; end: 10bd40fdb;  */

undefined4 * FUN_10bd40f4c(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  func_0x00010bd44fa0();
  puVar1 = &uStack_30;
  uStack_28 = extraout_x8;
  _pipe();
  if ((int)puVar1 == 0) {
    *param_1 = uStack_30;
    func_0x00010bd45530();
    param_1[1] = uStack_2c;
    func_0x00010bd45530();
    func_0x00010bd4553c(*param_1);
    puVar1 = (undefined4 *)(ulong)(uint)param_1[1];
    func_0x00010bd4553c(puVar1);
  }
  else {
    ___error();
    func_0x000107c3a92c();
    func_0x000107c3a934();
  }
  func_0x00010bd44f08(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_10bd41000();
  return puVar1;
}



/* Entry: 10bd40fdc; end: 10bd40fff;  */

undefined8 FUN_10bd40fdc(undefined8 param_1)

{
  FUN_10bd41000();
  return param_1;
}



/* Entry: 10bd41000; end: 10bd4107b;  */

void FUN_10bd41000(int *param_1)

{
  if (*param_1 != -1) {
    _close();
  }
  if (param_1[1] != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__close_11034bfc8)();
    return;
  }
  return;
}



/* Entry: 10bd4107c; end: 10bd410ab;  */

undefined8 * FUN_10bd4107c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    _pthread_detach(*param_1);
  }
  return param_1;
}



/* Entry: 10bd410ac; end: 10bd410df;  */

void FUN_10bd410ac(long param_1)

{
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd45498();
    _pthread_join();
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  return;
}



/* Entry: 10bd410e0; end: 10bd41117;  */

undefined8 FUN_10bd410e0(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  func_0x00010bd44fe4();
  return 0;
}



/* Entry: 10bd41118; end: 10bd41147;  */

undefined8 * FUN_10bd41118(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010894d994();
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10bd40268();
  return param_1;
}



/* Entry: 10bd41148; end: 10bd412ab;  */

void FUN_10bd41148(undefined8 *param_1,int *param_2)

{
  undefined1 auStack_48 [24];
  
  if (*param_2 != -1) {
    FUN_10bd408cc(*param_1,*param_2,param_2 + 2,(*(byte *)(param_2 + 1) & 0x40) == 0);
    func_0x00010bd455f8();
    func_0x00010bd411b8(*param_2,param_2 + 1,1,auStack_48);
    FUN_10bd40a4c(*param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10bd412ac; end: 10bd41347;  */

void FUN_10bd412ac(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  else {
    FUN_10bd408cc(*param_2,*param_3,param_3 + 2,(*(byte *)(param_3 + 1) & 0x40) == 0);
    func_0x00010bd411b8(*param_3,param_3 + 1,0,param_4);
    FUN_10bd40a4c(*param_2,param_3 + 2);
  }
  *param_3 = -1;
  *(undefined1 *)(param_3 + 1) = 0;
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 10bd41348; end: 10bd41387;  */

void FUN_10bd41348(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  
  func_0x00010bd45450();
  if ((bool)in_ZR) {
    func_0x00010bd45138(param_3);
    func_0x00010bd45104();
  }
  else {
    FUN_10bd40630(*param_1);
    func_0x00010bd45604();
  }
  return;
}



/* Entry: 10bd41388; end: 10bd41467;  */

void FUN_10bd41388(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *unaff_x19;
  int iStack_44;
  
  func_0x00010bd45450();
  if ((bool)in_ZR) {
    FUN_10bd41468(param_3,param_4,param_5,param_6);
    iStack_44 = (int)param_3;
    if (iStack_44 == -1) {
      func_0x00010bd45104();
    }
    else {
      FUN_10bd402e4(*param_1,param_3,param_2 + 2);
      iVar2 = iStack_44;
      iStack_44 = -1;
      *param_2 = iVar2;
      uVar3 = 0x20;
      if ((int)param_4 != 2) {
        uVar3 = 0;
      }
      uVar1 = 0x10;
      if ((int)param_4 != 1) {
        uVar1 = uVar3;
      }
      *(undefined1 *)(param_2 + 1) = uVar1;
      param_6[1] = 0;
      param_6[2] = 0;
      *param_6 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *unaff_x19 = 0;
    }
    func_0x00010b8db29c(&iStack_44);
  }
  else {
    func_0x00010bd454bc(param_6);
    func_0x00010bd45104();
  }
  return;
}



/* Entry: 10bd41468; end: 10bd414b3;  */

undefined8 FUN_10bd41468(void)

{
  undefined8 unaff_x19;
  int unaff_w21;
  
  _socket();
  func_0x00010bd452d8();
  if ((int)unaff_x19 != -1) {
    func_0x00010bd451b4();
    func_0x00010bd45338();
    if (unaff_w21 != 0) {
      _close();
      unaff_x19 = 0xffffffff;
    }
  }
  return unaff_x19;
}



/* Entry: 10bd414b4; end: 10bd41553;  */

void FUN_10bd414b4(long *param_1,uint *param_2,int param_3,undefined8 *param_4,ulong param_5,
                  int param_6,ulong param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 extraout_x8;
  long lVar12;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [10];
  undefined8 uStack_58;
  
  if ((param_7 & 1) != 0) {
LAB_10bd414d8:
    param_4 = (undefined8 *)*param_1;
    goto code_r0x00010bd40584;
  }
  uVar4 = (param_2[1] & 3) == 0;
  if ((bool)uVar4) {
    uVar6 = *param_2;
    FUN_10bd41554(uVar6,param_2 + 1,1,param_4 + 3);
    if (uVar6 == 0) goto LAB_10bd414d8;
  }
  lVar9 = *param_1;
  puVar11 = param_2 + 2;
  uVar10 = (ulong)*param_2;
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010bd44fa0();
  uStack_58 = extraout_x8;
  if (*(long *)puVar11 == 0) {
    param_4 = param_4 + 3;
    func_0x00010bd45138();
    func_0x00010bd44f08(uStack_58);
    puVar7 = param_4;
    if ((bool)uVar4) {
      func_0x00010bd45480();
      goto code_r0x00010bd40584;
    }
  }
  else {
    func_0x00010bd45354(auStack_a8);
    lVar12 = *(long *)puVar11;
    uVar4 = *(char *)(lVar12 + 0x98) == '\x01';
    if ((bool)uVar4) {
      func_0x00010bd45480();
      FUN_10bd40584();
      goto LAB_10bd404a0;
    }
    lVar13 = (long)param_3;
    if (*(long *)(lVar12 + (long)param_3 * 0x10 + 0x68) == 0) {
      if ((param_6 == 0) || ((param_3 == 0 && (*(long *)(lVar12 + 0x88) != 0)))) {
        uVar6 = *(uint *)(&UNK_10e60c3cc + lVar13 * 4);
        uVar3 = *(uint *)(lVar12 + 100);
        if ((int)*(uint *)(lVar12 + 100) < (int)uVar6) {
          *(uint *)(lVar12 + 100) = uVar6;
          uVar3 = uVar6;
        }
        uVar10 = (ulong)uVar3;
        func_0x00010bd45254();
        func_0x00010bd44f54();
        lVar12 = *(long *)puVar11;
        goto LAB_10bd40470;
      }
      puVar7 = param_4;
      (*(code *)param_4[8])();
      iVar5 = (int)puVar7;
      if (iVar5 == 0) {
        lVar12 = *(long *)puVar11;
        uVar6 = *(uint *)(&UNK_10e60c3cc + lVar13 * 4);
        param_5 = (ulong)uVar6;
        if (*(int *)(lVar12 + 100) < (int)uVar6) {
          func_0x00010bd45254();
          func_0x00010bd44f54();
          uVar4 = iVar5 == -1;
          if ((bool)uVar4) {
            ___error();
            func_0x00010bd450ec();
            func_0x00010bd455ac();
            param_4[4] = uStack_b8;
            param_4[3] = uStack_c0;
            param_4[5] = uStack_b0;
            func_0x00010bd45524(*(undefined8 *)(lVar9 + 0x30));
            goto LAB_10bd404a0;
          }
          lVar12 = *(long *)puVar11;
          *(uint *)(lVar12 + 100) = uVar6;
          uVar10 = param_5;
        }
        goto LAB_10bd40470;
      }
      func_0x00010894f1d0(auStack_a8);
      func_0x00010bd45524(*(undefined8 *)(lVar9 + 0x30));
      param_5 = uVar10;
    }
    else {
LAB_10bd40470:
      lVar12 = lVar12 + lVar13 * 0x10;
      *param_4 = 0;
      uVar4 = *(undefined8 **)(lVar12 + 0x70) == (undefined8 *)0x0;
      puVar7 = (undefined8 *)(lVar12 + 0x68);
      if (!(bool)uVar4) {
        puVar7 = *(undefined8 **)(lVar12 + 0x70);
      }
      *puVar7 = param_4;
      *(undefined8 **)(lVar12 + 0x70) = param_4;
      do {
        func_0x00010bd45440();
        param_5 = uVar10;
      } while (extraout_w10 != 0);
    }
LAB_10bd404a0:
    puVar7 = auStack_a8;
    func_0x00010894f570();
    func_0x00010bd44f08(uStack_58);
    uVar10 = param_5;
    if ((bool)uVar4) {
      return;
    }
  }
  param_5 = uVar10;
  ___stack_chk_fail();
  param_4 = auStack_a8;
  func_0x00010894f570();
  unaff_x30 = FUN_10bd40584;
  func_0x00010bd4508c();
  register0x00000008 = (BADSPACEBASE *)&uStack_c0;
  unaff_x19 = puVar7;
  unaff_x20 = lVar9;
  unaff_x29 = puVar1;
code_r0x00010bd40584:
  uVar8 = param_4[6];
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010bd451a0(uVar8);
  if ((((param_5 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x28) & 1) == 0)) ||
     (lVar9 = unaff_x20, FUN_10bd41c60(), lVar9 == 0)) {
    do {
      func_0x00010bd45440();
    } while (extraout_w10_00 != 0);
    func_0x00010894f204((undefined1 *)((long)register0x00000008 + -0x30),unaff_x20 + 0x30);
    *unaff_x19 = 0;
    puVar7 = (undefined8 *)(unaff_x20 + 0xf8);
    if (*(undefined8 **)(unaff_x20 + 0x100) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(unaff_x20 + 0x100);
    }
    *puVar7 = unaff_x19;
    *(undefined8 **)(unaff_x20 + 0x100) = unaff_x19;
    FUN_10bd41a64(unaff_x20,(undefined1 *)((long)register0x00000008 + -0x30));
    func_0x00010bd450c0();
  }
  else {
    puVar2 = *(undefined8 **)(lVar9 + 0x68);
    lVar12 = *(long *)(lVar9 + 0x70);
    *unaff_x19 = 0;
    puVar7 = (undefined8 *)(lVar9 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = puVar2;
    }
    *puVar7 = unaff_x19;
    *(undefined8 **)(lVar9 + 0x68) = unaff_x19;
    *(long *)(lVar9 + 0x70) = lVar12 + 1;
  }
  return;
}



/* Entry: 10bd41554; end: 10bd415eb;  */

uint FUN_10bd41554(int param_1,byte *param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  uint unaff_w22;
  
  if (param_1 == -1) {
    uVar1 = 9;
  }
  else {
    if (((param_3 & 1) != 0) || ((*param_2 & 1) == 0)) {
      func_0x00010bd451e0();
      func_0x00010bd4539c();
      if ((int)unaff_w22 < 0) {
        return ~unaff_w22 >> 0x1f;
      }
      bVar2 = 2;
      if (param_3 == 0) {
        bVar2 = 0;
      }
      *param_2 = *param_2 & 0xfd | bVar2;
      return ~unaff_w22 >> 0x1f;
    }
    uVar1 = 0x16;
  }
  func_0x00010894f248(param_4,uVar1);
  return 0;
}



/* Entry: 10bd415ec; end: 10bd416d3;  */

void FUN_10bd415ec(undefined8 *param_1,int *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if ((*(byte *)(param_2 + 1) & 3) == 0) {
    iVar1 = *param_2;
    FUN_10bd41554(iVar1,param_2 + 1,1,param_3 + 0x18);
    if (iVar1 == 0) goto LAB_10bd416b0;
  }
  iVar1 = *param_2;
  FUN_10bd416d4(iVar1,param_5,param_6,param_3 + 0x18);
  if (iVar1 == 0) {
LAB_10bd416b0:
    FUN_10bd40584(*param_1,param_3,param_4);
    return;
  }
  func_0x00010bd450c8(auStack_58,0x24);
  uVar2 = param_3 + 0x18;
  func_0x00010894fa8c(uVar2,auStack_58);
  if ((uVar2 & 1) == 0) {
    func_0x00010bd44f64();
    uVar2 = param_3 + 0x18;
    func_0x00010894fa8c(uVar2,auStack_70);
    if ((uVar2 & 1) == 0) goto LAB_10bd416b0;
  }
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  FUN_10bd40378(*param_1,1,*param_2,param_2 + 2,param_3,param_4,0);
  return;
}


