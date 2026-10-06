/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae2cdc8; end: 10ae2cde7;  */

uint FUN_10ae2cdc8(long param_1)

{
  if (**(long **)(param_1 + 8) != 0) {
    return *(uint *)(**(long **)(param_1 + 8) + 0x48) & 1;
  }
  return 0;
}



/* Entry: 10ae2cde8; end: 10ae2ce1f;  */

void FUN_10ae2cde8(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 8) + 0x20);
  if (pcVar1 == (code *)0x0) {
    func_0x000107c2b32c((*(long **)(param_1 + 8))[1]);
  }
  else {
    (*pcVar1)();
  }
  return;
}



/* Entry: 10ae2ce20; end: 10ae2ce27;  */

undefined8 FUN_10ae2ce20(void)

{
  return 1;
}



/* Entry: 10ae2ce28; end: 10ae2cecb;  */

undefined8 FUN_10ae2ce28(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x49;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c2b29c(6,0,0x41,&UNK_10f6c6460,0x1e);
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 0x41;
    lVar2 = param_2;
    func_0x000107c2b2c4(param_2,0x3b4);
    if ((int)lVar2 != 0) {
      func_0x000107c2b268(puVar3,puVar1 + 5);
      *(undefined1 *)(puVar1 + 9) = 1;
      func_0x000107c2b534(*(undefined8 *)(param_2 + 8));
      *(undefined8 **)(param_2 + 8) = puVar3;
      return 1;
    }
    func_0x000107c2b534(puVar3);
  }
  return 0;
}



/* Entry: 10ae2cecc; end: 10ae2cfd7;  */

undefined8 FUN_10ae2cecc(long param_1,long param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    uVar1 = 0x75;
    uVar2 = 0x32;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if (lVar3 == 0 || *(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
      uVar1 = 0x75;
      uVar2 = 0x39;
    }
    else if (*(char *)(lVar3 + 0x40) == '\0') {
      uVar1 = 0x82;
      uVar2 = 0x3e;
    }
    else {
      if (param_2 == 0) {
LAB_10ae2cfac:
        *param_3 = 0x20;
        return 1;
      }
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0x44;
      }
      else {
        func_0x000107c2b270(param_2,lVar3 + 0x20);
        if ((int)param_2 != 0) goto LAB_10ae2cfac;
        uVar1 = 0x86;
        uVar2 = 0x48;
      }
    }
  }
  func_0x000107c2b29c(6,0,uVar1,&UNK_10f6c6460,uVar2);
  return 0;
}



/* Entry: 10ae2cfd8; end: 10ae2d057;  */

undefined8 FUN_10ae2cfd8(undefined8 param_1,int param_2)

{
  if (param_2 == 3) {
    return 1;
  }
  func_0x000107c2b29c(6,0,0x65,&UNK_10f6c6460,0x59);
  return 0;
}



/* Entry: 10ae2d058; end: 10ae2d143;  */

undefined8 FUN_10ae2d058(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_a0;
  iVar2 = (int)auStack_a0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar3 = param_1;
  func_0x000107c2b214(param_1,auStack_40,0x20000010);
  if ((int)uVar3 != 0) {
    puVar4 = auStack_40;
    func_0x000107c2b214(puVar4,auStack_60,0x20000010);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_60;
      func_0x000107c2b214(puVar4,auStack_80,6);
      if ((int)puVar4 != 0) {
        puVar4 = auStack_80;
        func_0x000107c2b21c(puVar4,&UNK_110c7cbac,3);
        if ((int)puVar4 != 0) {
          puVar4 = auStack_40;
          func_0x000107c2b214(puVar4,auStack_a0,3);
          if (((((int)puVar4 != 0) && (func_0x000107c2b218(auStack_a0,0), iVar1 != 0)) &&
              (func_0x000107c2b21c(auStack_a0,uVar5,0x20), iVar2 != 0)) &&
             (func_0x000107c2b20c(), (int)param_1 != 0)) {
            return 1;
          }
        }
      }
    }
  }
  func_0x000107c2b29c(6,0,0x69,&UNK_10f6c64d5,0x8a);
  return 0;
}



/* Entry: 10ae2d144; end: 10ae2d173;  */

bool FUN_10ae2d144(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_2 + 8);
  return ((*plVar1 == *plVar2 && plVar1[1] == plVar2[1]) && plVar1[2] == plVar2[2]) &&
         plVar1[3] == plVar2[3];
}



/* Entry: 10ae2d174; end: 10ae2d317;  */

void FUN_10ae2d174(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_2 + 8) == 0) &&
      (lVar1 = param_3, func_0x000107c34f50(param_3,&uStack_30,4,1), (int)lVar1 != 0)) &&
     (*(long *)(param_3 + 8) == 0)) {
    FUN_10ae2d318(param_1,uStack_30,uStack_28);
  }
  else {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c64d5,0xa0);
  }
  return;
}



/* Entry: 10ae2d318; end: 10ae2d47b;  */

undefined8 FUN_10ae2d318(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x20) {
    puVar1 = (undefined8 *)0x49;
    _malloc();
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0x41;
      uVar2 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      puVar1[6] = param_2[1];
      puVar1[5] = uVar2;
      puVar1[8] = uVar4;
      puVar1[7] = uVar3;
      func_0x000107c2b26c(puVar1 + 1,puVar1 + 5);
      *(undefined1 *)(puVar1 + 9) = 1;
      func_0x000107c2b534(*(undefined8 *)(param_1 + 8));
      *(undefined8 **)(param_1 + 8) = puVar1 + 1;
      return 1;
    }
    uVar2 = 0x41;
    uVar3 = 0x27;
  }
  else {
    uVar2 = 0x66;
    uVar3 = 0x21;
  }
  func_0x000107c2b29c(6,0,uVar2,&UNK_10f6c64d5,uVar3);
  return 0;
}



/* Entry: 10ae2d47c; end: 10ae2d557;  */

undefined8 FUN_10ae2d47c(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x40) == '\0') {
    uVar1 = 0x82;
    uVar2 = 0x4c;
LAB_10ae2d4d4:
    func_0x000107c2b29c(6,0,uVar1,&UNK_10f6c64d5,uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0x56;
        goto LAB_10ae2d4d4;
      }
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      uVar4 = *(undefined8 *)(lVar3 + 0x38);
      uVar2 = *(undefined8 *)(lVar3 + 0x30);
      param_2[1] = *(undefined8 *)(lVar3 + 0x28);
      *param_2 = uVar1;
      param_2[3] = uVar4;
      param_2[2] = uVar2;
    }
    *param_3 = 0x20;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ae2d558; end: 10ae2d567;  */

undefined8 FUN_10ae2d558(void)

{
  return 0x20;
}



/* Entry: 10ae2d568; end: 10ae2d58f;  */

void FUN_10ae2d568(long param_1)

{
  func_0x000107c2b534(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10ae2d590; end: 10ae2dabb;  */

bool FUN_10ae2d590(byte *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  ulong param_6,ulong param_7,byte *param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  undefined4 uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
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
  byte abStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(param_6 + 4);
  uVar28 = (ulong)uVar3;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar5 = &uStack_120;
  uVar11 = 0;
  uVar13 = param_6;
  uVar14 = param_7;
  pbVar15 = param_8;
  func_0x000107c2b494(puVar5,param_1,param_2,param_6);
  if ((int)puVar5 == 0) {
LAB_10ae2d744:
    bVar4 = false;
  }
  else {
    if (param_7 != 0) {
      uVar31 = 1;
      do {
        uVar23 = uVar28;
        if (param_7 <= uVar28) {
          uVar23 = param_7;
        }
        uVar27 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
        uStack_124 = uVar27 >> 0x10 | uVar27 << 0x10;
        puVar5 = &uStack_120;
        param_1 = (byte *)0x0;
        param_2 = 0;
        param_6 = 0;
        uVar11 = 0;
        func_0x000107c2b494(puVar5,0,0,0);
        if ((int)puVar5 == 0) goto LAB_10ae2d744;
        (**(code **)(lStack_118 + 0x18))((ulong)&uStack_120 | 8,param_3,param_4);
        (**(code **)(lStack_118 + 0x18))((ulong)&uStack_120 | 8,&uStack_124,4);
        puVar5 = &uStack_120;
        param_1 = abStack_b0;
        param_2 = 0;
        func_0x000107c2b498(puVar5,param_1,0);
        if ((int)puVar5 == 0) goto LAB_10ae2d744;
        if (uVar3 != 0) {
          param_1 = abStack_b0;
          param_2 = uVar23;
          _memcpy(param_8,param_1,uVar23);
        }
        if (1 < param_5) {
          uVar29 = uVar23;
          if (uVar23 < 2) {
            uVar29 = 1;
          }
          uVar27 = 1;
          do {
            puVar5 = &uStack_120;
            param_1 = (byte *)0x0;
            param_2 = 0;
            param_6 = 0;
            uVar11 = 0;
            func_0x000107c2b494(puVar5,0,0,0);
            if ((int)puVar5 == 0) goto LAB_10ae2d744;
            (**(code **)(lStack_118 + 0x18))((ulong)&uStack_120 | 8,abStack_b0,uVar28);
            puVar5 = &uStack_120;
            param_1 = abStack_b0;
            param_2 = 0;
            func_0x000107c2b498(puVar5,param_1,0);
            if ((int)puVar5 == 0) goto LAB_10ae2d744;
            if (uVar3 != 0) {
              pbVar16 = abStack_b0;
              pbVar18 = param_8;
              uVar30 = uVar29;
              do {
                *pbVar18 = *pbVar18 ^ *pbVar16;
                uVar30 = uVar30 - 1;
                pbVar16 = pbVar16 + 1;
                pbVar18 = pbVar18 + 1;
              } while (uVar30 != 0);
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 != param_5);
        }
        param_8 = param_8 + uVar23;
        uVar31 = uVar31 + 1;
        param_7 = param_7 - uVar23;
      } while (param_7 != 0);
    }
    bVar4 = param_5 != 0;
  }
  puVar5 = &uStack_120;
  func_0x000107c2b49c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar4;
  }
  ___stack_chk_fail();
  if (((uVar13 != 0) && (uVar14 != 0)) && (1 < uVar11)) {
    uVar28 = 0;
    if (uVar13 != 0) {
      uVar28 = 0x3fffffff / uVar13;
    }
    if (((uVar14 <= uVar28) && (uVar11 < 0x100000001)) &&
       ((uVar28 = uVar11 - 1, (uVar11 & uVar28) == 0 &&
        ((0x3f < uVar13 * 0x10 || (uVar11 >> (uVar13 * 0x10 & 0x3f) == 0)))))) {
      pbVar16 = (byte *)0x2000000;
      if (pbVar15 != (byte *)0x0) {
        pbVar16 = pbVar15;
      }
      uVar29 = uVar13 * 0x80;
      uVar23 = 0;
      if (uVar29 != 0) {
        uVar23 = (ulong)pbVar16 / uVar29;
      }
      if ((uVar14 < uVar23) && (uVar11 <= uVar23 + ~uVar14)) {
        uVar23 = uVar13 * (uVar11 * 2 + uVar14 * 2 + 2);
        plVar6 = (long *)((uVar23 >> 1) << 7 | 8);
        _malloc();
        if (plVar6 != (long *)0x0) {
          lVar17 = uVar14 * 2 * uVar13;
          lVar22 = lVar17 * 0x40;
          plVar24 = plVar6 + 1;
          *plVar6 = uVar23 * 0x40;
          plVar7 = plVar6;
          func_0x000107c2b428();
          puVar8 = puVar5;
          FUN_10ae2d590(puVar5,param_1,param_2,param_6,1,plVar7,lVar22,plVar24);
          if ((int)puVar8 == 0) {
            bVar4 = false;
          }
          else {
            uVar23 = 0;
            uVar10 = CONCAT44(uStack_124,uStack_128);
            lVar26 = uVar13 * 2;
            plVar7 = plVar24 + lVar17 * 8;
            plVar1 = plVar7 + uVar13 * 0x10;
            plVar25 = plVar24;
            do {
              plVar2 = plVar24 + uVar23 * lVar26 * 8;
              _memcpy(plVar1,plVar2,uVar29);
              uVar30 = uVar28;
              lVar17 = (long)plVar6 + uVar13 * (uVar14 * 0x80 + 0x100) + 8;
              plVar9 = plVar1;
              do {
                FUN_10ae2dabc(lVar17,plVar9,uVar13);
                plVar9 = plVar9 + uVar13 * 0x10;
                lVar17 = lVar17 + uVar13 * 0x80;
                uVar30 = uVar30 - 1;
              } while (uVar30 != 0);
              FUN_10ae2dabc(plVar2,plVar1 + lVar26 * uVar28 * 8,uVar13);
              uVar30 = 0;
              do {
                if (lVar26 != 0) {
                  lVar17 = 0;
                  plVar19 = plVar1 + lVar26 * (ulong)(*(uint *)(plVar2 + uVar13 * 0x10 + -8) &
                                                     (uint)uVar28) * 8;
                  plVar20 = plVar25;
                  plVar9 = plVar7;
                  do {
                    lVar21 = 0;
                    do {
                      *(uint *)((long)plVar9 + lVar21) =
                           *(uint *)((long)plVar19 + lVar21) ^ *(uint *)((long)plVar20 + lVar21);
                      lVar21 = lVar21 + 4;
                    } while (lVar21 != 0x40);
                    lVar17 = lVar17 + 1;
                    plVar9 = plVar9 + 8;
                    plVar19 = plVar19 + 8;
                    plVar20 = plVar20 + 8;
                  } while (lVar17 != lVar26);
                }
                plVar9 = plVar2;
                FUN_10ae2dabc(plVar2,plVar7,uVar13);
                uVar30 = uVar30 + 1;
              } while (uVar30 != uVar11);
              uVar23 = uVar23 + 1;
              plVar25 = plVar25 + uVar13 * 0x10;
            } while (uVar23 != uVar14);
            func_0x000107c2b428();
            FUN_10ae2d590(puVar5,param_1,plVar24,lVar22,1,plVar9,uVar10,param_4);
            bVar4 = (int)puVar5 != 0;
          }
          func_0x000107c2b534(plVar24);
          return bVar4;
        }
        uVar10 = 0x41;
        uVar12 = 0xb5;
      }
      else {
        uVar10 = 0x84;
        uVar12 = 0xa8;
      }
      goto LAB_10ae2d830;
    }
  }
  uVar10 = 0x85;
  uVar12 = 0x9b;
LAB_10ae2d830:
  func_0x000107c2b29c(6,0,uVar10,&UNK_10f6c654f,uVar12);
  return false;
}



/* Entry: 10ae2dabc; end: 10ae2dce3;  */

void FUN_10ae2dabc(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_c0 [8];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  lVar4 = param_2 + param_3 * 0x80;
  auStack_c0[1] = *(undefined8 *)(lVar4 + -0x38);
  auStack_c0[0] = *(undefined8 *)(lVar4 + -0x40);
  auStack_c0[3] = *(undefined8 *)(lVar4 + -0x28);
  auStack_c0[2] = *(undefined8 *)(lVar4 + -0x30);
  auStack_c0[5] = *(undefined8 *)(lVar4 + -0x18);
  auStack_c0[4] = *(undefined8 *)(lVar4 + -0x20);
  auStack_c0[7] = *(undefined8 *)(lVar4 + -8);
  auStack_c0[6] = *(undefined8 *)(lVar4 + -0x10);
  if (param_3 * 2 != 0) {
    uVar3 = 0;
    do {
      lVar4 = 0;
      do {
        uVar7 = *(undefined8 *)((long)auStack_c0 + lVar4 + 8);
        uVar6 = *(undefined8 *)((long)auStack_c0 + lVar4);
        uVar9 = ((undefined8 *)(param_2 + lVar4))[1];
        uVar8 = *(undefined8 *)(param_2 + lVar4);
        *(ulong *)((long)auStack_c0 + lVar4 + 8) =
             CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                      CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ (byte)((ulong)uVar7 >> 0x30),
                               CONCAT15((byte)((ulong)uVar9 >> 0x28) ^ (byte)((ulong)uVar7 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                 (byte)((ulong)uVar7 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                          (byte)((ulong)uVar7 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar9 >> 0x10) ^
                                                                   (byte)((ulong)uVar7 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar9 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  uVar7 >> 8),(byte)uVar9 ^ (byte)uVar7)))))));
        *(ulong *)((long)auStack_c0 + lVar4) =
             CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                      CONCAT16((byte)((ulong)uVar8 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                               CONCAT15((byte)((ulong)uVar8 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                 (byte)((ulong)uVar6 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar8 >> 0x18) ^
                                                          (byte)((ulong)uVar6 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar8 >> 0x10) ^
                                                                   (byte)((ulong)uVar6 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar8 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  uVar6 >> 8),(byte)uVar8 ^ (byte)uVar6)))))));
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x40);
      uStack_70 = (uint)auStack_c0[2];
      uStack_6c = (uint)((ulong)auStack_c0[2] >> 0x20);
      uStack_80 = (uint)auStack_c0[0];
      uStack_7c = (uint)((ulong)auStack_c0[0] >> 0x20);
      uStack_60 = (uint)auStack_c0[4];
      uStack_5c = (uint)((ulong)auStack_c0[4] >> 0x20);
      uStack_50 = (uint)auStack_c0[6];
      uStack_4c = (uint)((ulong)auStack_c0[6] >> 0x20);
      uStack_48 = (uint)auStack_c0[7];
      uStack_44 = (uint)((ulong)auStack_c0[7] >> 0x20);
      uStack_58 = (uint)auStack_c0[5];
      uStack_54 = (uint)((ulong)auStack_c0[5] >> 0x20);
      uStack_78 = (uint)auStack_c0[1];
      uStack_74 = (uint)((ulong)auStack_c0[1] >> 0x20);
      uVar5 = 10;
      uStack_68 = (uint)auStack_c0[3];
      uStack_64 = (uint)((ulong)auStack_c0[3] >> 0x20);
      do {
        uStack_70 = uStack_70 ^ (uStack_50 + uStack_80 >> 0x19 | (uStack_50 + uStack_80) * 0x80);
        uStack_60 = uStack_60 ^ (uStack_70 + uStack_80 >> 0x17 | (uStack_70 + uStack_80) * 0x200);
        uStack_50 = uStack_50 ^ (uStack_60 + uStack_70 >> 0x13 | (uStack_60 + uStack_70) * 0x2000);
        uVar1 = uStack_50 + uStack_60;
        uStack_80 = uStack_80 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_5c = uStack_5c ^ (uStack_7c + uStack_6c >> 0x19 | (uStack_7c + uStack_6c) * 0x80);
        uStack_4c = uStack_4c ^ (uStack_5c + uStack_6c >> 0x17 | (uStack_5c + uStack_6c) * 0x200);
        uStack_7c = uStack_7c ^ (uStack_4c + uStack_5c >> 0x13 | (uStack_4c + uStack_5c) * 0x2000);
        uVar1 = uStack_7c + uStack_4c;
        uStack_6c = uStack_6c ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_48 = uStack_48 ^ (uStack_68 + uStack_58 >> 0x19 | (uStack_68 + uStack_58) * 0x80);
        uStack_78 = uStack_78 ^ (uStack_48 + uStack_58 >> 0x17 | (uStack_48 + uStack_58) * 0x200);
        uStack_68 = uStack_68 ^ (uStack_78 + uStack_48 >> 0x13 | (uStack_78 + uStack_48) * 0x2000);
        uVar1 = uStack_68 + uStack_78;
        uStack_58 = uStack_58 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_74 = uStack_74 ^ (uStack_54 + uStack_44 >> 0x19 | (uStack_54 + uStack_44) * 0x80);
        uStack_64 = uStack_64 ^ (uStack_74 + uStack_44 >> 0x17 | (uStack_74 + uStack_44) * 0x200);
        uStack_54 = uStack_54 ^ (uStack_64 + uStack_74 >> 0x13 | (uStack_64 + uStack_74) * 0x2000);
        uVar1 = uStack_54 + uStack_64;
        uStack_44 = uStack_44 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_7c = uStack_7c ^ (uStack_74 + uStack_80 >> 0x19 | (uStack_74 + uStack_80) * 0x80);
        uStack_78 = uStack_78 ^ (uStack_7c + uStack_80 >> 0x17 | (uStack_7c + uStack_80) * 0x200);
        uStack_74 = uStack_74 ^ (uStack_78 + uStack_7c >> 0x13 | (uStack_78 + uStack_7c) * 0x2000);
        uStack_80 = uStack_80 ^ (uStack_74 + uStack_78 >> 0xe | (uStack_74 + uStack_78) * 0x40000);
        uStack_68 = uStack_68 ^ (uStack_6c + uStack_70 >> 0x19 | (uStack_6c + uStack_70) * 0x80);
        uStack_64 = uStack_64 ^ (uStack_68 + uStack_6c >> 0x17 | (uStack_68 + uStack_6c) * 0x200);
        uStack_70 = uStack_70 ^ (uStack_64 + uStack_68 >> 0x13 | (uStack_64 + uStack_68) * 0x2000);
        uStack_6c = uStack_6c ^ (uStack_70 + uStack_64 >> 0xe | (uStack_70 + uStack_64) * 0x40000);
        uStack_54 = uStack_54 ^ (uStack_58 + uStack_5c >> 0x19 | (uStack_58 + uStack_5c) * 0x80);
        uStack_60 = uStack_60 ^ (uStack_54 + uStack_58 >> 0x17 | (uStack_54 + uStack_58) * 0x200);
        uStack_5c = uStack_5c ^ (uStack_60 + uStack_54 >> 0x13 | (uStack_60 + uStack_54) * 0x2000);
        uStack_58 = uStack_58 ^ (uStack_5c + uStack_60 >> 0xe | (uStack_5c + uStack_60) * 0x40000);
        uStack_50 = uStack_50 ^ (uStack_44 + uStack_48 >> 0x19 | (uStack_44 + uStack_48) * 0x80);
        uStack_4c = uStack_4c ^ (uStack_50 + uStack_44 >> 0x17 | (uStack_50 + uStack_44) * 0x200);
        uStack_48 = uStack_48 ^ (uStack_4c + uStack_50 >> 0x13 | (uStack_4c + uStack_50) * 0x2000);
        uVar5 = uVar5 - 2;
        uStack_44 = uStack_44 ^ (uStack_48 + uStack_4c >> 0xe | (uStack_48 + uStack_4c) * 0x40000);
      } while (2 < uVar5);
      lVar4 = 0;
      do {
        uVar6 = *(undefined8 *)((long)&uStack_80 + lVar4);
        uVar7 = *(undefined8 *)((long)auStack_c0 + lVar4 + 8);
        *(ulong *)((long)auStack_c0 + lVar4 + 8) =
             CONCAT44((int)((ulong)uVar7 >> 0x20) +
                      (int)((ulong)*(undefined8 *)((long)&uStack_78 + lVar4) >> 0x20),
                      (int)uVar7 + (int)*(undefined8 *)((long)&uStack_78 + lVar4));
        *(ulong *)((long)auStack_c0 + lVar4) =
             CONCAT44((int)((ulong)*(undefined8 *)((long)auStack_c0 + lVar4) >> 0x20) +
                      (int)((ulong)uVar6 >> 0x20),
                      (int)*(undefined8 *)((long)auStack_c0 + lVar4) + (int)uVar6);
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x40);
      lVar4 = param_3;
      if ((uVar3 & 1) == 0) {
        lVar4 = 0;
      }
      puVar2 = (undefined8 *)(param_1 + (uVar3 >> 1) * 0x40 + lVar4 * 0x40);
      puVar2[1] = auStack_c0[1];
      *puVar2 = auStack_c0[0];
      puVar2[3] = auStack_c0[3];
      puVar2[2] = auStack_c0[2];
      puVar2[5] = auStack_c0[5];
      puVar2[4] = auStack_c0[4];
      puVar2[7] = auStack_c0[7];
      puVar2[6] = auStack_c0[6];
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 0x40;
    } while (uVar3 != param_3 * 2);
  }
  return;
}



/* Entry: 10ae2dce4; end: 10ae2dcef;  */

undefined8 FUN_10ae2dce4(long *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar3 = *param_1;
  if (lVar3 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x2c);
    puVar2 = (ulong *)((ulong)uVar1 + 8);
    func_0x000107c610a0();
    if (puVar2 == (ulong *)0x0) {
      func_0x0001004d2c58(0x1d,0,0x41,&UNK_10f6c6e00,0xd2);
      return 0;
    }
    *puVar2 = (ulong)uVar1;
    func_0x0001001e33e0(param_1[1]);
    *param_1 = param_2;
    param_1[1] = (long)(puVar2 + 1);
    lVar3 = param_2;
  }
  (**(code **)(lVar3 + 0x10))(param_1);
  return 1;
}



/* Entry: 10ae2dcf0; end: 10ae2dd0f;  */

undefined8 FUN_10ae2dcf0(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return 1;
}



/* Entry: 10ae2dd10; end: 10ae2de67;  */

undefined1 (*) [16]
FUN_10ae2dd10(byte *param_1,byte *param_2,undefined4 *param_3,undefined1 (*param_4) [16])

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined5 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined5 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_7c;
  byte abStack_78 [64];
  long lStack_38;
  
  iVar9 = (int)&uStack_a0;
  iVar5 = (int)&uStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  puVar8 = param_3;
  func_0x000107c2b410();
  if (iVar9 != 0) {
    param_1 = abStack_78;
    puVar8 = &uStack_7c;
    func_0x000107c2b41c();
    if (iVar5 != 0) {
      func_0x000107c2b534(uStack_98);
      if (puStack_88 != (undefined8 *)0x0) {
        (*(code *)*puStack_88)(uStack_90);
      }
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_88 = (undefined8 *)0x0;
      uStack_90 = 0;
      pbVar6 = (byte *)0x0;
      puVar8 = (undefined4 *)0xffffffff;
      func_0x000107c34f74();
      if ((param_4 != (undefined1 (*) [16])0x0) &&
         (pauVar10 = param_4, func_0x000107c2b2dc(), (int)pauVar10 != 0)) {
        pbVar6 = (byte *)0xffffffff;
        puVar8 = (undefined4 *)0x38;
        pauVar10 = param_4;
        func_0x000107c2b2d4();
        if ((int)pauVar10 != 0) {
          pauVar10 = param_4;
          func_0x000107c2b2e0(param_4,param_2,param_3,abStack_78,uStack_7c);
          goto LAB_10ae2de2c;
        }
      }
      param_3 = puVar8;
      param_2 = pbVar6;
      pauVar10 = (undefined1 (*) [16])0x0;
      goto LAB_10ae2de2c;
    }
  }
  param_3 = puVar8;
  param_2 = param_1;
  func_0x000107c2b534(uStack_98);
  if (puStack_88 != (undefined8 *)0x0) {
    (*(code *)*puStack_88)(uStack_90);
  }
  pauVar10 = (undefined1 (*) [16])0x0;
  param_4 = (undefined1 (*) [16])0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
LAB_10ae2de2c:
  func_0x000107c2b2d0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pauVar10;
  }
  ___stack_chk_fail();
  uVar27 = *param_3;
  uVar11 = (undefined1)uVar27;
  uVar12 = (undefined1)((uint)uVar27 >> 8);
  uVar13 = (undefined1)((uint)uVar27 >> 0x10);
  uVar14 = (undefined1)((uint)uVar27 >> 0x18);
  uVar27 = param_3[1];
  uVar15 = (undefined1)uVar27;
  uVar16 = (undefined1)((uint)uVar27 >> 8);
  uVar17 = (undefined1)((uint)uVar27 >> 0x10);
  uVar18 = (undefined1)((uint)uVar27 >> 0x18);
  uVar27 = param_3[2];
  uVar19 = (undefined1)uVar27;
  uVar20 = (undefined1)((uint)uVar27 >> 8);
  uVar21 = (undefined1)((uint)uVar27 >> 0x10);
  uVar22 = (undefined1)((uint)uVar27 >> 0x18);
  uVar27 = param_3[3];
  uVar23 = (undefined1)uVar27;
  uVar24 = (undefined1)((uint)uVar27 >> 8);
  uVar25 = (undefined1)((uint)uVar27 >> 0x10);
  uVar26 = (undefined1)((uint)uVar27 >> 0x18);
  auVar31 = *param_4;
  uVar27 = param_3[4];
  uVar28 = param_3[5];
  uVar29 = param_3[6];
  uVar30 = param_3[7];
  puVar4 = (undefined5 *)(param_3 + 8);
  iVar9 = param_3[0x3c] + -2;
  do {
    puVar7 = puVar4;
    auVar32[1] = uVar12;
    auVar32[0] = uVar11;
    auVar32[2] = uVar13;
    auVar32[3] = uVar14;
    auVar32[4] = uVar15;
    auVar32[5] = uVar16;
    auVar32[6] = uVar17;
    auVar32[7] = uVar18;
    auVar32[8] = uVar19;
    auVar32[9] = uVar20;
    auVar32[10] = uVar21;
    auVar32[0xb] = uVar22;
    auVar32[0xc] = uVar23;
    auVar32[0xd] = uVar24;
    auVar32[0xe] = uVar25;
    auVar32[0xf] = uVar26;
    auVar31 = NEON_aese(auVar31,auVar32);
    auVar32 = NEON_aesmc(auVar31,auVar31);
    uVar3 = *(undefined4 *)puVar7;
    uVar11 = (undefined1)uVar3;
    uVar12 = (undefined1)((uint)uVar3 >> 8);
    uVar13 = (undefined1)((uint)uVar3 >> 0x10);
    uVar14 = (undefined1)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)((long)puVar7 + 4);
    uVar15 = (undefined1)uVar3;
    uVar16 = (undefined1)((uint)uVar3 >> 8);
    uVar17 = (undefined1)((uint)uVar3 >> 0x10);
    uVar18 = (undefined1)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)(puVar7 + 1);
    uVar19 = (undefined1)uVar3;
    uVar20 = (undefined1)((uint)uVar3 >> 8);
    uVar21 = (undefined1)((uint)uVar3 >> 0x10);
    uVar22 = (undefined1)((uint)uVar3 >> 0x18);
    uVar3 = *(undefined4 *)((long)puVar7 + 0xc);
    uVar23 = (undefined1)uVar3;
    uVar24 = (undefined1)((uint)uVar3 >> 8);
    uVar25 = (undefined1)((uint)uVar3 >> 0x10);
    uVar26 = (undefined1)((uint)uVar3 >> 0x18);
    iVar5 = iVar9 + -2;
    auVar31._4_4_ = uVar28;
    auVar31._0_4_ = uVar27;
    auVar31._8_4_ = uVar29;
    auVar31._12_4_ = uVar30;
    auVar31 = NEON_aese(auVar32,auVar31);
    auVar31 = NEON_aesmc(auVar31,auVar31);
    uVar27 = *(undefined4 *)*(undefined1 (*) [16])(puVar7 + 2);
    uVar28 = *(undefined4 *)((long)puVar7 + 0x14);
    uVar29 = *(undefined4 *)(puVar7 + 3);
    uVar30 = *(undefined4 *)((long)puVar7 + 0x1c);
    bVar1 = 1 < iVar9;
    puVar4 = puVar7 + 4;
    iVar9 = iVar5;
  } while (iVar5 != 0 && bVar1);
  auVar2[5] = uVar16;
  auVar2._0_5_ = *puVar7;
  auVar2[6] = uVar17;
  auVar2[7] = uVar18;
  auVar2[8] = uVar19;
  auVar2[9] = uVar20;
  auVar2[10] = uVar21;
  auVar2[0xb] = uVar22;
  auVar2[0xc] = uVar23;
  auVar2[0xd] = uVar24;
  auVar2[0xe] = uVar25;
  auVar2[0xf] = uVar26;
  auVar31 = NEON_aese(auVar31,auVar2);
  auVar31 = NEON_aesmc(auVar31,auVar31);
  uVar27 = *(undefined4 *)(puVar7 + 4);
  uVar28 = *(undefined4 *)((long)puVar7 + 0x24);
  uVar29 = *(undefined4 *)(puVar7 + 5);
  uVar30 = *(undefined4 *)((long)puVar7 + 0x2c);
  auVar31 = NEON_aese(auVar31,*(undefined1 (*) [16])(puVar7 + 2));
  *param_2 = auVar31[0] ^ (byte)uVar27;
  param_2[1] = auVar31[1] ^ (byte)((uint)uVar27 >> 8);
  param_2[2] = auVar31[2] ^ (byte)((uint)uVar27 >> 0x10);
  param_2[3] = auVar31[3] ^ (byte)((uint)uVar27 >> 0x18);
  param_2[4] = auVar31[4] ^ (byte)uVar28;
  param_2[5] = auVar31[5] ^ (byte)((uint)uVar28 >> 8);
  param_2[6] = auVar31[6] ^ (byte)((uint)uVar28 >> 0x10);
  param_2[7] = auVar31[7] ^ (byte)((uint)uVar28 >> 0x18);
  param_2[8] = auVar31[8] ^ (byte)uVar29;
  param_2[9] = auVar31[9] ^ (byte)((uint)uVar29 >> 8);
  param_2[10] = auVar31[10] ^ (byte)((uint)uVar29 >> 0x10);
  param_2[0xb] = auVar31[0xb] ^ (byte)((uint)uVar29 >> 0x18);
  param_2[0xc] = auVar31[0xc] ^ (byte)uVar30;
  param_2[0xd] = auVar31[0xd] ^ (byte)((uint)uVar30 >> 8);
  param_2[0xe] = auVar31[0xe] ^ (byte)((uint)uVar30 >> 0x10);
  param_2[0xf] = auVar31[0xf] ^ (byte)((uint)uVar30 >> 0x18);
  return param_4;
}



/* Entry: 10ae2de68; end: 10ae2de8f;  */

void FUN_10ae2de68(undefined1 (*param_1) [16],byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined5 *puVar5;
  undefined5 *puVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar24 = *param_3;
  uVar8 = (undefined1)uVar24;
  uVar9 = (undefined1)((uint)uVar24 >> 8);
  uVar10 = (undefined1)((uint)uVar24 >> 0x10);
  uVar11 = (undefined1)((uint)uVar24 >> 0x18);
  uVar24 = param_3[1];
  uVar12 = (undefined1)uVar24;
  uVar13 = (undefined1)((uint)uVar24 >> 8);
  uVar14 = (undefined1)((uint)uVar24 >> 0x10);
  uVar15 = (undefined1)((uint)uVar24 >> 0x18);
  uVar24 = param_3[2];
  uVar16 = (undefined1)uVar24;
  uVar17 = (undefined1)((uint)uVar24 >> 8);
  uVar18 = (undefined1)((uint)uVar24 >> 0x10);
  uVar19 = (undefined1)((uint)uVar24 >> 0x18);
  uVar24 = param_3[3];
  uVar20 = (undefined1)uVar24;
  uVar21 = (undefined1)((uint)uVar24 >> 8);
  uVar22 = (undefined1)((uint)uVar24 >> 0x10);
  uVar23 = (undefined1)((uint)uVar24 >> 0x18);
  auVar28 = *param_1;
  uVar24 = param_3[4];
  uVar25 = param_3[5];
  uVar26 = param_3[6];
  uVar27 = param_3[7];
  puVar5 = (undefined5 *)(param_3 + 8);
  iVar7 = param_3[0x3c] + -2;
  do {
    puVar6 = puVar5;
    auVar29[1] = uVar9;
    auVar29[0] = uVar8;
    auVar29[2] = uVar10;
    auVar29[3] = uVar11;
    auVar29[4] = uVar12;
    auVar29[5] = uVar13;
    auVar29[6] = uVar14;
    auVar29[7] = uVar15;
    auVar29[8] = uVar16;
    auVar29[9] = uVar17;
    auVar29[10] = uVar18;
    auVar29[0xb] = uVar19;
    auVar29[0xc] = uVar20;
    auVar29[0xd] = uVar21;
    auVar29[0xe] = uVar22;
    auVar29[0xf] = uVar23;
    auVar28 = NEON_aese(auVar28,auVar29);
    auVar29 = NEON_aesmc(auVar28,auVar28);
    uVar4 = *(undefined4 *)puVar6;
    uVar8 = (undefined1)uVar4;
    uVar9 = (undefined1)((uint)uVar4 >> 8);
    uVar10 = (undefined1)((uint)uVar4 >> 0x10);
    uVar11 = (undefined1)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)((long)puVar6 + 4);
    uVar12 = (undefined1)uVar4;
    uVar13 = (undefined1)((uint)uVar4 >> 8);
    uVar14 = (undefined1)((uint)uVar4 >> 0x10);
    uVar15 = (undefined1)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)(puVar6 + 1);
    uVar16 = (undefined1)uVar4;
    uVar17 = (undefined1)((uint)uVar4 >> 8);
    uVar18 = (undefined1)((uint)uVar4 >> 0x10);
    uVar19 = (undefined1)((uint)uVar4 >> 0x18);
    uVar4 = *(undefined4 *)((long)puVar6 + 0xc);
    uVar20 = (undefined1)uVar4;
    uVar21 = (undefined1)((uint)uVar4 >> 8);
    uVar22 = (undefined1)((uint)uVar4 >> 0x10);
    uVar23 = (undefined1)((uint)uVar4 >> 0x18);
    iVar2 = iVar7 + -2;
    auVar28._4_4_ = uVar25;
    auVar28._0_4_ = uVar24;
    auVar28._8_4_ = uVar26;
    auVar28._12_4_ = uVar27;
    auVar28 = NEON_aese(auVar29,auVar28);
    auVar28 = NEON_aesmc(auVar28,auVar28);
    uVar24 = *(undefined4 *)*(undefined1 (*) [16])(puVar6 + 2);
    uVar25 = *(undefined4 *)((long)puVar6 + 0x14);
    uVar26 = *(undefined4 *)(puVar6 + 3);
    uVar27 = *(undefined4 *)((long)puVar6 + 0x1c);
    bVar1 = 1 < iVar7;
    puVar5 = puVar6 + 4;
    iVar7 = iVar2;
  } while (iVar2 != 0 && bVar1);
  auVar3[5] = uVar13;
  auVar3._0_5_ = *puVar6;
  auVar3[6] = uVar14;
  auVar3[7] = uVar15;
  auVar3[8] = uVar16;
  auVar3[9] = uVar17;
  auVar3[10] = uVar18;
  auVar3[0xb] = uVar19;
  auVar3[0xc] = uVar20;
  auVar3[0xd] = uVar21;
  auVar3[0xe] = uVar22;
  auVar3[0xf] = uVar23;
  auVar28 = NEON_aese(auVar28,auVar3);
  auVar28 = NEON_aesmc(auVar28,auVar28);
  uVar24 = *(undefined4 *)(puVar6 + 4);
  uVar25 = *(undefined4 *)((long)puVar6 + 0x24);
  uVar26 = *(undefined4 *)(puVar6 + 5);
  uVar27 = *(undefined4 *)((long)puVar6 + 0x2c);
  auVar28 = NEON_aese(auVar28,*(undefined1 (*) [16])(puVar6 + 2));
  *param_2 = auVar28[0] ^ (byte)uVar24;
  param_2[1] = auVar28[1] ^ (byte)((uint)uVar24 >> 8);
  param_2[2] = auVar28[2] ^ (byte)((uint)uVar24 >> 0x10);
  param_2[3] = auVar28[3] ^ (byte)((uint)uVar24 >> 0x18);
  param_2[4] = auVar28[4] ^ (byte)uVar25;
  param_2[5] = auVar28[5] ^ (byte)((uint)uVar25 >> 8);
  param_2[6] = auVar28[6] ^ (byte)((uint)uVar25 >> 0x10);
  param_2[7] = auVar28[7] ^ (byte)((uint)uVar25 >> 0x18);
  param_2[8] = auVar28[8] ^ (byte)uVar26;
  param_2[9] = auVar28[9] ^ (byte)((uint)uVar26 >> 8);
  param_2[10] = auVar28[10] ^ (byte)((uint)uVar26 >> 0x10);
  param_2[0xb] = auVar28[0xb] ^ (byte)((uint)uVar26 >> 0x18);
  param_2[0xc] = auVar28[0xc] ^ (byte)uVar27;
  param_2[0xd] = auVar28[0xd] ^ (byte)((uint)uVar27 >> 8);
  param_2[0xe] = auVar28[0xe] ^ (byte)((uint)uVar27 >> 0x10);
  param_2[0xf] = auVar28[0xf] ^ (byte)((uint)uVar27 >> 0x18);
  return;
}



/* Entry: 10ae2de90; end: 10ae2df3f;  */

long FUN_10ae2de90(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 2);
  if (iVar4 == *(int *)(param_3 + 2)) {
    lVar3 = param_1;
    FUN_10ae2df40(param_1);
  }
  else {
    puVar1 = param_2;
    if (iVar4 != 0) {
      puVar1 = param_3;
      param_3 = param_2;
    }
    uVar2 = *puVar1;
    func_0x000107c34f78(uVar2,(long)*(int *)(puVar1 + 1),*param_3,(long)*(int *)(param_3 + 1));
    if ((int)uVar2 < 0) {
      lVar3 = param_1;
      func_0x000107c2b2f4(param_1,param_3,puVar1);
      if ((int)lVar3 == 0) {
        return 0;
      }
      iVar4 = 1;
    }
    else {
      lVar3 = param_1;
      func_0x000107c2b2f4(param_1,puVar1,param_3);
      iVar4 = 0;
      if ((int)lVar3 == 0) {
        return 0;
      }
    }
    lVar3 = 1;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  return lVar3;
}



/* Entry: 10ae2df40; end: 10ae2dfa3;  */

void FUN_10ae2df40(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = param_1;
  FUN_10ae2dfa4();
  if ((int)plVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    if ((int)uVar4 < 1) {
      if (uVar4 != 0) {
        return;
      }
    }
    else {
      do {
        if (*(long *)(*param_1 + -8 + (ulong)uVar4 * 8) != 0) {
          *(uint *)(param_1 + 1) = uVar4;
          return;
        }
        uVar2 = uVar4 - 1;
        bVar1 = 0 < (int)uVar4;
        uVar4 = uVar2;
      } while (uVar2 != 0 && bVar1);
      *(undefined4 *)(param_1 + 1) = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 10ae2dfa4; end: 10ae2e04f;  */

void FUN_10ae2dfa4(ulong *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = param_3;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar1 = param_2;
    param_2 = param_3;
  }
  lVar6 = plVar1[1];
  lVar9 = (long)(int)lVar6;
  lVar2 = param_2[1];
  lVar8 = (long)(int)lVar2;
  puVar3 = param_1;
  func_0x000107c2b2fc(param_1,lVar9 + 1);
  if ((int)puVar3 != 0) {
    *(int *)(param_1 + 1) = (int)(lVar9 + 1);
    uVar4 = *param_1;
    func_0x000107c2b300(uVar4,*plVar1,*param_2,lVar8);
    uVar5 = *param_1;
    if ((int)lVar2 < (int)lVar6) {
      lVar6 = lVar9 - lVar8;
      plVar7 = (long *)(uVar5 + lVar8 * 8);
      puVar3 = (ulong *)(*plVar1 + lVar8 * 8);
      do {
        lVar2 = *puVar3 + uVar4;
        uVar4 = (ulong)CARRY8(*puVar3,uVar4);
        *plVar7 = lVar2;
        lVar6 = lVar6 + -1;
        plVar7 = plVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
    *(ulong *)(uVar5 + lVar9 * 8) = uVar4;
  }
  return;
}



/* Entry: 10ae2e050; end: 10ae2e0a7;  */

void FUN_10ae2e050(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    puVar1 = param_1;
    func_0x000107c2b2fc(param_1,1);
    if ((int)puVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(long *)*param_1 = param_2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 10ae2e0a8; end: 10ae2e1db;  */

void FUN_10ae2e0a8(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 != 0) {
    uVar7 = *(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      lVar9 = 0;
      uVar6 = 0;
      puVar5 = (ulong *)*param_1;
      do {
        uVar6 = puVar5[lVar9] | uVar6;
        lVar9 = lVar9 + 1;
      } while ((int)uVar7 != lVar9);
      if (uVar6 != 0) {
        if (*(int *)(param_1 + 2) != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          func_0x000107c2b304(param_1,param_2);
          *(undefined4 *)(param_1 + 2) = 1;
          return;
        }
        iVar2 = uVar7 - 1;
        if (0 < (int)uVar7) {
          do {
            if (puVar5[(ulong)uVar7 - 1] != 0) {
              if ((uVar7 == 1) && (uVar6 = param_2 - *puVar5, *puVar5 <= param_2 && uVar6 != 0)) {
                *puVar5 = uVar6;
                goto LAB_10ae2e138;
              }
              break;
            }
            uVar3 = uVar7 - 1;
            bVar1 = 0 < (int)uVar7;
            uVar7 = uVar3;
          } while (uVar3 != 0 && bVar1);
        }
        uVar10 = *puVar5;
        iVar8 = 0;
        uVar6 = uVar10 - param_2;
        if (uVar10 < param_2) {
          param_2 = 1;
          do {
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
            uVar10 = *puVar5;
            iVar8 = iVar8 + 1;
            uVar6 = 0xffffffffffffffff;
          } while (uVar10 == 0);
        }
        *puVar5 = uVar10 - param_2;
        if (uVar10 - param_2 != 0 || iVar8 != iVar2) {
          return;
        }
        *(int *)(param_1 + 1) = iVar8;
        return;
      }
    }
    puVar4 = param_1;
    func_0x000107c2b2fc(param_1,1);
    if ((int)puVar4 != 0) {
      *(ulong *)*param_1 = param_2;
      *(undefined4 *)(param_1 + 1) = 1;
LAB_10ae2e138:
      *(undefined4 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Entry: 10ae2e1dc; end: 10ae2e227;  */

long FUN_10ae2e1dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c2b318();
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = lVar1;
    func_0x000107c2b324(lVar1,param_1);
    if (lVar2 != 0) {
      return lVar1;
    }
    func_0x000107c2b31c(lVar1);
  }
  return 0;
}



/* Entry: 10ae2e228; end: 10ae2e27f;  */

void FUN_10ae2e228(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c2b2fc(param_1,param_3);
  if ((int)puVar1 != 0) {
    if (param_3 != 0) {
      _memmove(*param_1,param_2,param_3 << 3);
    }
    *(int *)(param_1 + 1) = (int)param_3;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 10ae2e280; end: 10ae2e2c3;  */

undefined8 FUN_10ae2e280(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (0xffffffffffffffc0 < param_2) {
    func_0x000107c2b29c(3,0,0x66,&UNK_10f6c66ac,0x175);
    return 0;
  }
  uVar2 = param_2 + 0x3f >> 6;
  if ((ulong)(long)*(int *)((long)param_1 + 0xc) < uVar2) {
    if (uVar2 < 0x800000) {
      if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
        plVar1 = (long *)(uVar2 * 8 + 8);
        func_0x000107c610a0();
        if (plVar1 != (long *)0x0) {
          *plVar1 = uVar2 * 8;
          lVar5 = *param_1;
          if ((int)param_1[1] != 0) {
            func_0x000107c610b4(plVar1 + 1,lVar5,(long)(int)param_1[1] << 3);
          }
          func_0x0001001e33e0(lVar5);
          *param_1 = (long)(plVar1 + 1);
          *(int *)((long)param_1 + 0xc) = (int)uVar2;
          return 1;
        }
        uVar3 = 0x41;
        uVar4 = 0x166;
      }
      else {
        uVar3 = 0x6a;
        uVar4 = 0x160;
      }
    }
    else {
      uVar3 = 0x66;
      uVar4 = 0x15b;
    }
    func_0x0001004d2c58(3,0,uVar3,&UNK_10f6c66ac,uVar4);
    return 0;
  }
  return 1;
}



/* Entry: 10ae2e2c4; end: 10ae2e32b;  */

void FUN_10ae2e2c4(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  plVar2 = param_1;
  func_0x000107c2b32c();
  uVar1 = (int)plVar2 + 7;
  uVar3 = (ulong)(uVar1 >> 3);
  if (7 < uVar1) {
    uVar4 = uVar3 - 1;
    uVar3 = uVar3 * 8;
    do {
      uVar3 = uVar3 - 8;
      *param_2 = (char)(*(ulong *)(*param_1 + (uVar4 & 0xfffffffffffffff8)) >> (uVar3 & 0x38));
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 1;
    } while (uVar4 != 0xffffffffffffffff);
  }
  return;
}



/* Entry: 10ae2e32c; end: 10ae2e487;  */

bool FUN_10ae2e32c(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  
  if (*(int *)(param_1 + 2) == 0) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 == 0) {
      uVar2 = 1;
    }
    else {
      puVar4 = (ulong *)*param_1;
      uVar2 = *puVar4 ^ 1;
      if (1 < (int)uVar1) {
        lVar3 = (ulong)uVar1 - 1;
        do {
          puVar4 = puVar4 + 1;
          uVar2 = *puVar4 | uVar2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    return uVar2 == 0;
  }
  return false;
}



/* Entry: 10ae2e488; end: 10ae2e503;  */

void FUN_10ae2e488(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = 0;
  func_0x000107c2b354(0,param_1,param_2,param_3,param_4);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    UNRECOVERED_JUMPTABLE = FUN_10ae2de90;
    if (*(int *)(param_3 + 0x10) != 0) {
      UNRECOVERED_JUMPTABLE = (code *)&UNK_100411994;
    }
                    /* WARNING: Could not recover jumptable at 0x00010ae2e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
    return;
  }
  return;
}



/* Entry: 10ae2e504; end: 10ae2e7bb;  */

void FUN_10ae2e504(long *param_1,long *param_2,long *param_3,long *param_4,int param_5,long *param_6
                  )

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  if (((int)param_3[2] == 0) && ((int)param_4[2] == 0)) {
    lVar10 = (long)(int)param_4[1];
    if ((int)param_4[1] != 0) {
      uVar12 = 0;
      puVar5 = (ulong *)*param_4;
      do {
        uVar12 = *puVar5 | uVar12;
        lVar10 = lVar10 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar10 != 0);
      if (uVar12 != 0) {
        func_0x000107c2b34c(param_6);
        if (((param_1 == (long *)0x0) || (param_1 == param_3)) ||
           (plVar1 = param_1, param_1 == param_4)) {
          plVar1 = param_6;
          func_0x000107c2b350();
        }
        if (((param_2 == (long *)0x0) || (param_2 == param_3)) ||
           (plVar2 = param_2, param_2 == param_4)) {
          plVar2 = param_6;
          func_0x000107c2b350();
        }
        plVar3 = param_6;
        func_0x000107c2b350();
        if (((plVar1 != (long *)0x0) && (plVar2 != (long *)0x0)) &&
           ((plVar3 != (long *)0x0 &&
            (((plVar4 = plVar1, func_0x000107c2b2fc(plVar1,(long)(int)param_3[1]), (int)plVar4 != 0
              && (plVar4 = plVar2, func_0x000107c2b2fc(plVar2,(long)(int)param_4[1]),
                 (int)plVar4 != 0)) &&
             (plVar4 = plVar3, func_0x000107c2b2fc(plVar3,(long)(int)param_4[1]), (int)plVar4 != 0))
            )))) {
          uVar8 = 0;
          if ((int)param_3[1] != 0) {
            _bzero(*plVar1,(long)(int)param_3[1] << 3);
            uVar8 = (undefined4)param_3[1];
          }
          *(undefined4 *)(plVar1 + 1) = uVar8;
          *(undefined4 *)(plVar1 + 2) = 0;
          uVar8 = 0;
          if ((int)param_4[1] != 0) {
            _bzero(*plVar2,(long)(int)param_4[1] << 3);
            uVar8 = (undefined4)param_4[1];
          }
          *(undefined4 *)(plVar2 + 1) = uVar8;
          *(undefined4 *)(plVar2 + 2) = 0;
          uVar9 = *(uint *)(param_3 + 1);
          if (param_5 == 0) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = param_5 - 1U >> 6;
            if ((int)uVar9 <= (int)uVar11) {
              uVar11 = uVar9;
            }
            if (uVar11 != 0) {
              _memcpy(*plVar2,*param_3 + (long)(int)uVar9 * 8 + (long)(int)uVar11 * -8,
                      -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3);
              uVar9 = *(uint *)(param_3 + 1);
            }
            uVar11 = ~uVar11;
          }
          uVar12 = (ulong)(uVar11 + uVar9);
          if (-1 < (int)(uVar11 + uVar9)) {
            do {
              uVar14 = 0x3f;
              do {
                lVar10 = *plVar2;
                func_0x000107c2b300(lVar10,lVar10,lVar10,(long)(int)param_4[1]);
                puVar5 = (ulong *)*plVar2;
                *puVar5 = *puVar5 | *(ulong *)(*param_3 + uVar12 * 8) >> (uVar14 & 0x3f) & 1;
                func_0x000107c2b368(puVar5,lVar10,*param_4,*plVar3,(long)(int)param_4[1]);
                *(ulong *)(*plVar1 + uVar12 * 8) =
                     ((ulong)~(uint)puVar5 & 1) << (uVar14 & 0x3f) |
                     *(ulong *)(*plVar1 + uVar12 * 8);
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0xffffffffffffffff);
              iVar13 = (int)uVar12;
              uVar12 = uVar12 - 1;
            } while (0 < iVar13);
          }
          if (((param_1 == (long *)0x0) ||
              (func_0x000107c2b324(param_1,plVar1), param_1 != (long *)0x0)) &&
             (param_2 != (long *)0x0)) {
            func_0x000107c2b324(param_2,plVar2);
          }
        }
        if ((char)param_6[5] != '\0') {
          return;
        }
        lVar10 = param_6[2];
        param_6[2] = lVar10 + -1;
        param_6[4] = *(long *)(param_6[1] + (lVar10 + -1) * 8);
        return;
      }
    }
    uVar6 = 0x69;
    uVar7 = 0x1d1;
  }
  else {
    uVar6 = 0x6d;
    uVar7 = 0x1cd;
  }
  func_0x000107c2b29c(3,0,uVar6,&UNK_10f6c679f,uVar7);
  return;
}



/* Entry: 10ae2e7bc; end: 10ae2e8cf;  */

void FUN_10ae2e7bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c2b34c(param_5);
  FUN_10ae2e8d0(param_2,(long)*(int *)(param_4 + 1),param_5);
  FUN_10ae2e8d0(param_3,(long)*(int *)(param_4 + 1),param_5);
  puVar2 = (undefined8 *)(long)*(int *)(param_4 + 1);
  FUN_10ae2e944(puVar2,param_5);
  if (((param_2 != (undefined8 *)0x0 && param_3 != (undefined8 *)0x0) && puVar2 != (undefined8 *)0x0
      ) && (puVar3 = param_1, func_0x000107c2b2fc(param_1,(long)*(int *)(param_4 + 1)),
           (int)puVar3 != 0)) {
    uVar8 = *param_1;
    uVar6 = *param_4;
    uVar7 = *puVar2;
    iVar1 = *(int *)(param_4 + 1);
    uVar4 = uVar8;
    func_0x000107c2b300(uVar8,*param_2,*param_3,(long)iVar1);
    func_0x000107c2b368(uVar8,uVar4,uVar6,uVar7,(long)iVar1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*(char *)(param_5 + 0x28) == '\0') {
    lVar5 = *(long *)(param_5 + 0x10) + -1;
    *(long *)(param_5 + 0x10) = lVar5;
    *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(*(long *)(param_5 + 8) + lVar5 * 8);
  }
  return;
}



/* Entry: 10ae2e8d0; end: 10ae2e943;  */

ulong FUN_10ae2e8d0(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((ulong)(long)*(int *)(param_1 + 8) < param_2) {
    uVar1 = param_2;
    FUN_10ae2e944(param_2,param_3);
    if ((uVar1 == 0) || (uVar2 = uVar1, func_0x000107c2b324(), uVar2 == 0)) {
      param_1 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000107c2b334(uVar1,param_2);
      param_1 = 0;
      if ((int)uVar2 != 0) {
        param_1 = uVar1;
      }
    }
  }
  return param_1;
}



/* Entry: 10ae2e944; end: 10ae2e993;  */

long FUN_10ae2e944(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c2b350();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c2b2fc(param_2,param_1);
    if ((int)lVar1 == 0) {
      param_2 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(int *)(param_2 + 8) = (int)param_1;
    }
  }
  return param_2;
}



/* Entry: 10ae2e994; end: 10ae2eb73;  */

void FUN_10ae2e994(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  func_0x000107c2b34c(param_5);
  FUN_10ae2e8d0(param_2,(long)*(int *)(param_4 + 1),param_5);
  FUN_10ae2e8d0(param_3,(long)*(int *)(param_4 + 1),param_5);
  puVar1 = (undefined8 *)(long)*(int *)(param_4 + 1);
  FUN_10ae2e944(puVar1,param_5);
  if (((param_2 != (undefined8 *)0x0 && param_3 != (undefined8 *)0x0) && puVar1 != (undefined8 *)0x0
      ) && (puVar2 = param_1, func_0x000107c2b2fc(param_1,(long)*(int *)(param_4 + 1)),
           (int)puVar2 != 0)) {
    func_0x000107c2b36c(*param_1,*param_2,*param_3,*param_4,*puVar1,(long)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*(char *)(param_5 + 0x28) == '\0') {
    lVar3 = *(long *)(param_5 + 0x10) + -1;
    *(long *)(param_5 + 0x10) = lVar3;
    *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(*(long *)(param_5 + 8) + lVar3 * 8);
  }
  return;
}



/* Entry: 10ae2eb74; end: 10ae2ebd7;  */

void FUN_10ae2eb74(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = param_1;
  FUN_10ae321d0();
  if ((int)plVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    if ((int)uVar4 < 1) {
      if (uVar4 != 0) {
        return;
      }
    }
    else {
      do {
        if (*(long *)(*param_1 + -8 + (ulong)uVar4 * 8) != 0) {
          *(uint *)(param_1 + 1) = uVar4;
          return;
        }
        uVar2 = uVar4 - 1;
        bVar1 = 0 < (int)uVar4;
        uVar4 = uVar2;
      } while (uVar2 != 0 && bVar1);
      *(undefined4 *)(param_1 + 1) = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 10ae2ebd8; end: 10ae2ec33;  */

long * FUN_10ae2ebd8(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong *puVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong *puVar32;
  
  plVar14 = param_1;
  FUN_10ae2eb74(param_1,param_2,param_4);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  uVar20 = (ulong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (*(long *)(*param_1 + -8 + uVar20 * 8) != 0) goto code_r0x000100225fd4;
      iVar18 = (int)uVar20;
      uVar19 = iVar18 - 1;
      uVar20 = (ulong)uVar19;
    } while (uVar19 != 0 && 0 < iVar18);
    uVar20 = 0;
  }
code_r0x000100225fd4:
  uVar19 = *(uint *)(param_3 + 1);
  uVar24 = uVar19;
  if (0 < (int)uVar19) {
    do {
      if (*(long *)(*param_3 + -8 + (ulong)uVar24 * 8) != 0) goto code_r0x000100226004;
      uVar4 = uVar24 - 1;
      bVar9 = 0 < (int)uVar24;
      uVar24 = uVar4;
    } while (uVar4 != 0 && bVar9);
    uVar24 = 0;
  }
code_r0x000100226004:
  if (((0 < (int)uVar20) && (*(long *)(*param_1 + uVar20 * 8 + -8) == 0)) ||
     ((0 < (int)uVar24 && (*(long *)(*param_3 + (ulong)uVar24 * 8 + -8) == 0)))) {
    uVar15 = 0x6f;
    uVar17 = 0xd4;
    goto code_r0x000100226180;
  }
  if (uVar19 != 0) {
    uVar20 = 0;
    lVar21 = (long)(int)uVar19;
    puVar26 = (ulong *)*param_3;
    do {
      uVar20 = *puVar26 | uVar20;
      lVar21 = lVar21 + -1;
      puVar26 = puVar26 + 1;
    } while (lVar21 != 0);
    if (uVar20 != 0) {
      func_0x0001002258d0(param_4);
      plVar14 = param_4;
      func_0x000100225974();
      plVar10 = param_4;
      func_0x000100225974();
      plVar11 = param_4;
      func_0x000100225974();
      plVar12 = param_4;
      func_0x000100225974();
      if ((plVar11 == (long *)0x0) || (plVar12 == (long *)0x0)) goto code_r0x0001002264c0;
      plVar13 = param_3;
      func_0x000100202834();
      uVar19 = (uint)plVar13 & 0x3f;
      plVar13 = plVar11;
      func_0x000100226518(plVar11,param_3,0x40 - uVar19);
      if ((int)plVar13 == 0) goto code_r0x0001002264c0;
      if (0 < (int)*(uint *)(plVar11 + 1)) {
        uVar24 = *(uint *)(plVar11 + 1);
        do {
          if (*(long *)(*plVar11 + -8 + (ulong)uVar24 * 8) != 0) goto code_r0x0001002260f8;
          uVar4 = uVar24 - 1;
          bVar9 = 0 < (int)uVar24;
          uVar24 = uVar4;
        } while (uVar4 != 0 && bVar9);
        uVar24 = 0;
code_r0x0001002260f8:
        *(uint *)(plVar11 + 1) = uVar24;
      }
      *(undefined4 *)(plVar11 + 2) = 0;
      plVar13 = plVar10;
      func_0x000100226518(plVar10,param_1);
      if ((int)plVar13 == 0) goto code_r0x0001002264c0;
      uVar24 = *(uint *)(plVar10 + 1);
      uVar20 = (ulong)uVar24;
      if ((int)uVar24 < 1) {
        if (uVar24 == 0) goto code_r0x0001002261b0;
      }
      else {
        do {
          iVar18 = (int)uVar20;
          if (*(long *)(*plVar10 + -8 + uVar20 * 8) != 0) {
            *(int *)(plVar10 + 1) = iVar18;
            goto code_r0x0001002261bc;
          }
          uVar20 = (ulong)(iVar18 - 1U);
        } while (iVar18 - 1U != 0 && 0 < iVar18);
        *(undefined4 *)(plVar10 + 1) = 0;
code_r0x0001002261b0:
        uVar20 = 0;
      }
code_r0x0001002261bc:
      *(undefined4 *)(plVar10 + 2) = 0;
      if ((int)plVar11[1] + 1 < (int)uVar20) {
        plVar13 = plVar10;
        func_0x000100202744(plVar10,(long)((int)uVar20 + 1));
        if ((int)plVar13 == 0) goto code_r0x0001002264c0;
        lVar21 = *plVar10;
        lVar28 = plVar10[1];
        *(undefined8 *)(lVar21 + (long)(int)lVar28 * 8) = 0;
        iVar18 = (int)lVar28 + 1;
      }
      else {
        plVar13 = plVar10;
        func_0x000100202744(plVar10,(long)(int)plVar11[1] + 2);
        if ((int)plVar13 == 0) goto code_r0x0001002264c0;
        iVar1 = (int)plVar10[1];
        iVar18 = (int)plVar11[1] + 2;
        lVar21 = *plVar10;
        if (iVar1 < iVar18) {
          func_0x000107c60ee4(lVar21 + (long)iVar1 * 8,
                              (ulong)(((int)plVar11[1] - iVar1) + 1) * 8 + 8);
        }
      }
      *(int *)(plVar10 + 1) = iVar18;
      iVar1 = (int)plVar11[1];
      lVar22 = (long)iVar1;
      iVar3 = iVar18 - iVar1;
      lVar28 = *plVar11 + lVar22 * 8;
      if (iVar1 == 1) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(ulong *)(lVar28 + -0x10);
      }
      uVar30 = *(ulong *)(lVar28 + -8);
      uVar24 = *(uint *)(param_1 + 2);
      *(uint *)(plVar12 + 2) = *(uint *)(param_3 + 2) ^ uVar24;
      plVar13 = plVar12;
      func_0x000100202744(plVar12,(long)(iVar3 + 1));
      if ((int)plVar13 == 0) goto code_r0x0001002264c0;
      iVar2 = iVar3 + -1;
      *(int *)(plVar12 + 1) = iVar2;
      lVar28 = *plVar12;
      plVar13 = plVar14;
      func_0x000100202744();
      if ((int)plVar13 == 0) goto code_r0x0001002264c0;
      puVar26 = (ulong *)(lVar28 + (long)iVar2 * 8);
      if ((int)plVar12[1] == 0) {
        *(undefined4 *)(plVar12 + 2) = 0;
      }
      else {
        puVar26 = puVar26 + -1;
      }
      if (1 < iVar3) {
        iVar27 = 0;
        lVar28 = lVar21 + (long)iVar3 * 8;
        puVar8 = (ulong *)(lVar21 + (long)iVar18 * 8);
        do {
          puVar32 = puVar8 + -1;
          if (*puVar32 == uVar30) {
            uVar31 = 0xffffffffffffffff;
          }
          else {
            uVar29 = puVar8[-2];
            uVar31 = uVar29;
            func_0x000107c60e88(uVar29,*puVar32,uVar30,0);
            uVar29 = uVar29 - uVar30 * uVar31;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar31;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar20;
            uVar25 = uVar31 * uVar20;
            for (uVar23 = SUB168(auVar6 * auVar7,8);
                !CARRY8(uVar29,~uVar23) && !CARRY8(uVar29 + ~uVar23,(ulong)(uVar25 <= puVar8[-3]));
                uVar23 = uVar23 - bVar9) {
              uVar31 = uVar31 - 1;
              bVar9 = CARRY8(uVar29,uVar30);
              uVar29 = uVar29 + uVar30;
              if (bVar9) break;
              bVar9 = uVar25 < uVar20;
              uVar25 = uVar25 - uVar20;
            }
          }
          lVar21 = *plVar14;
          func_0x00010022667c(lVar21,*plVar11,lVar22,uVar31);
          lVar16 = *plVar14;
          *(long *)(lVar16 + lVar22 * 8) = lVar21;
          lVar28 = lVar28 + -8;
          lVar21 = lVar28;
          func_0x00010022673c(lVar28,lVar28,lVar16,(long)(iVar1 + 1));
          if (lVar21 != 0) {
            uVar31 = uVar31 - 1;
            lVar21 = lVar28;
            func_0x000100411698(lVar28,lVar28,*plVar11,lVar22);
            if (lVar21 != 0) {
              *puVar32 = *puVar32 + 1;
            }
          }
          *puVar26 = uVar31;
          iVar27 = iVar27 + 1;
          puVar26 = puVar26 + -1;
          puVar8 = puVar32;
        } while (iVar27 != iVar2);
      }
      uVar4 = *(uint *)(plVar10 + 1);
      if ((int)uVar4 < 1) {
        if (uVar4 == 0) goto code_r0x00010022644c;
      }
      else {
        do {
          if (*(long *)(*plVar10 + -8 + (ulong)uVar4 * 8) != 0) {
            *(uint *)(plVar10 + 1) = uVar4;
            goto code_r0x000100226458;
          }
          uVar5 = uVar4 - 1;
          bVar9 = 0 < (int)uVar4;
          uVar4 = uVar5;
        } while (uVar5 != 0 && bVar9);
        *(undefined4 *)(plVar10 + 1) = 0;
code_r0x00010022644c:
        *(undefined4 *)(plVar10 + 2) = 0;
      }
code_r0x000100226458:
      if (param_1 != (long *)0x0) {
        plVar14 = param_1;
        func_0x000100226828(param_1,plVar10,0x80 - uVar19);
        if ((int)plVar14 == 0) {
code_r0x0001002264c0:
          if ((char)param_4[5] != '\0') {
            return (long *)0x0;
          }
          lVar21 = param_4[2];
          param_4[2] = lVar21 + -1;
          param_4[4] = *(long *)(param_4[1] + (lVar21 + -1) * 8);
          return (long *)0x0;
        }
        lVar21 = (long)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          uVar20 = 0;
          puVar26 = (ulong *)*param_1;
          do {
            uVar20 = *puVar26 | uVar20;
            lVar21 = lVar21 + -1;
            puVar26 = puVar26 + 1;
          } while (lVar21 != 0);
          if (uVar20 != 0) {
            *(uint *)(param_1 + 2) = uVar24;
          }
        }
      }
      uVar19 = *(uint *)(plVar12 + 1);
      if ((int)uVar19 < 1) {
        if (uVar19 != 0) goto code_r0x0001002264f4;
      }
      else {
        do {
          if (*(long *)(*plVar12 + -8 + (ulong)uVar19 * 8) != 0) {
            *(uint *)(plVar12 + 1) = uVar19;
            goto code_r0x0001002264f4;
          }
          uVar24 = uVar19 - 1;
          bVar9 = 0 < (int)uVar19;
          uVar19 = uVar24;
        } while (uVar24 != 0 && bVar9);
        *(undefined4 *)(plVar12 + 1) = 0;
      }
      *(undefined4 *)(plVar12 + 2) = 0;
code_r0x0001002264f4:
      if ((char)param_4[5] == '\0') {
        lVar21 = param_4[2];
        param_4[2] = lVar21 + -1;
        param_4[4] = *(long *)(param_4[1] + (lVar21 + -1) * 8);
      }
      return (long *)0x1;
    }
  }
  uVar15 = 0x69;
  uVar17 = 0xd9;
code_r0x000100226180:
  func_0x0001004d2c58(3,0,uVar15,&UNK_10f6c679f,uVar17);
  return (long *)0x0;
}



/* Entry: 10ae2ec34; end: 10ae2ee77;  */

ulong FUN_10ae2ec34(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  if ((int)param_1[1] == 0) {
    return 0;
  }
  lVar9 = param_2;
  func_0x000107c2b328(param_2);
  uVar5 = (ulong)(0x40 - (int)lVar9);
  plVar2 = param_1;
  func_0x000107c2b358(param_1,param_1,uVar5);
  if ((int)plVar2 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
    if (uVar1 != 0) goto LAB_10ae2ed20;
  }
  else {
    uVar4 = 0;
    param_2 = param_2 << ((ulong)(uint)-(int)lVar9 & 0x3f);
    lVar9 = *param_1;
    uVar10 = uVar8 + 1;
    plVar2 = (long *)(lVar9 + uVar8 * 8);
    do {
      plVar2 = plVar2 + -1;
      lVar6 = *plVar2;
      lVar3 = lVar6;
      ___udivti3(lVar6,uVar4,param_2,0);
      uVar4 = lVar6 - param_2 * lVar3;
      *plVar2 = lVar3;
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
    do {
      iVar7 = (int)uVar8;
      if (*(long *)(lVar9 + -8 + uVar8 * 8) != 0) {
        *(int *)(param_1 + 1) = iVar7;
        goto LAB_10ae2ed20;
      }
      uVar8 = (ulong)(iVar7 - 1U);
    } while (iVar7 - 1U != 0 && 0 < iVar7);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
LAB_10ae2ed20:
  return uVar4 >> (uVar5 & 0x3f);
}



/* Entry: 10ae2ee78; end: 10ae2f1b3;  */

/* WARNING: Possible PIC construction at 0x000100414a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100414a3c) */
/* WARNING: Removing unreachable block (ram,0x000100414a54) */
/* WARNING: Removing unreachable block (ram,0x000100414a5c) */
/* WARNING: Removing unreachable block (ram,0x000100414a6c) */

long * FUN_10ae2ee78(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                    long *param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar18;
  long *unaff_x22;
  long *plVar19;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar20;
  uint uVar21;
  ulong unaff_x25;
  ulong *puVar22;
  long lVar23;
  long *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar24;
  long *plVar25;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lStack_660;
  undefined4 uStack_658;
  int iStack_654;
  undefined8 uStack_650;
  long lStack_648;
  undefined4 uStack_640;
  int iStack_63c;
  undefined8 uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  long *plStack_620;
  ulong uStack_618;
  ulong uStack_610;
  long *plStack_608;
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined1 **ppuStack_5e0;
  code *pcStack_5d8;
  ulong uStack_5d0;
  long alStack_5c8 [8];
  long lStack_588;
  long *plStack_580;
  long *plStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  int iStack_550;
  uint uStack_54c;
  long *plStack_548;
  uint uStack_53c;
  long alStack_538 [9];
  long alStack_4f0 [144];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = unaff_x19;
  plVar8 = unaff_x20;
  if ((param_3 < (long *)0xa) &&
     (plVar18 = param_6, plVar8 = param_3, param_3 == (long *)(long)(int)param_6[4])) {
    plVar25 = param_1;
    plVar19 = param_5;
    plVar11 = param_4;
    if (param_5 != (long *)0x0) {
      unaff_x24 = (ulong)((int)param_5 * 0x40 - 0x41);
LAB_10ae2eee4:
      lVar6 = param_4[(long)plVar19 + -1];
      iVar4 = (int)unaff_x24;
      unaff_x23 = param_4;
      if (lVar6 == 0) goto code_r0x00010ae2eeec;
      plVar9 = param_3;
      plVar5 = param_6;
      func_0x000107c2b328();
      iVar3 = (int)lVar6;
      iVar1 = iVar3 + iVar4 + 1;
      if (iVar1 < 0x2a0) {
        if (iVar1 < 0xf0) {
          uVar15 = 3;
          if (iVar1 < 0x18) {
            uVar15 = 1;
          }
          uVar21 = 4;
          if (iVar1 < 0x50) {
            uVar21 = uVar15;
          }
          unaff_x28 = (ulong)uVar21;
        }
        else {
          unaff_x28 = 5;
        }
      }
      else {
        unaff_x28 = 6;
      }
      uVar15 = (uint)unaff_x28;
      uStack_53c = uVar15;
      if (4 < uVar15) {
        uStack_53c = 5;
      }
      plVar18 = (long *)((long)param_3 << 3);
      if (param_3 != (long *)0x0) {
        plVar11 = (long *)0x480;
        plVar9 = plVar18;
        ___memcpy_chk(alStack_4f0,param_2);
      }
      plStack_548 = plVar18;
      if (1 < uVar15) {
        plVar9 = alStack_4f0;
        plVar11 = param_3;
        param_5 = param_6;
        iStack_550 = iVar3;
        uStack_54c = uVar15;
        func_0x000107c2b38c(alStack_538,alStack_4f0,plVar9,param_3,param_6);
        uVar15 = uStack_53c - 1;
        if (uVar15 != 0) {
          uVar21 = 2;
          do {
            plVar9 = alStack_538;
            plVar11 = param_3;
            param_5 = param_6;
            func_0x000107c2b38c(alStack_4f0 + (ulong)(uVar21 - 1) * 9,
                                alStack_4f0 + (ulong)(uVar21 - 2) * 9,plVar9,param_3,param_6);
            uVar13 = uVar21 >> (ulong)(uVar15 & 0x1f);
            uVar21 = uVar21 + 1;
          } while (uVar13 == 0);
        }
        unaff_x28 = (ulong)uStack_54c;
        iVar3 = iStack_550;
      }
      unaff_x26 = (long *)0x0;
      uVar15 = iVar3 + iVar4;
      uVar21 = uVar15;
      do {
        while( true ) {
          uVar15 = uVar15 - 1;
          unaff_x25 = (ulong)uVar21;
          unaff_x27 = (ulong)uVar15;
          iVar4 = (int)unaff_x26;
          if (((long *)(ulong)(uVar21 >> 6) < plVar19) &&
             (((ulong)param_4[(long)(ulong)(uVar21 >> 6)] >> (unaff_x25 & 0x3f) & 1) != 0)) break;
          if (iVar4 != 0) {
            plVar9 = param_1;
            plVar11 = param_3;
            param_5 = param_6;
            func_0x000107c2b38c(param_1,param_1,param_1,param_3,param_6);
          }
          if (uVar21 == 0) goto LAB_10ae2f164;
          uVar21 = uVar21 - 1;
        }
        if (((uint)unaff_x28 < 2) || (uVar21 == 0)) {
          unaff_x27 = 0;
          unaff_x24 = 0;
          if (iVar4 == 0) goto LAB_10ae2f0e0;
LAB_10ae2f10c:
          iVar4 = (int)unaff_x24 + 1;
          do {
            func_0x000107c2b38c(param_1,param_1,param_1,param_3,param_6);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          plVar9 = alStack_4f0 + unaff_x27 * 9;
          plVar11 = param_3;
          param_5 = param_6;
          func_0x000107c2b38c(param_1,param_1,plVar9,param_3,param_6);
        }
        else {
          unaff_x24 = 0;
          uVar24 = 1;
          uVar15 = 1;
          do {
            uVar13 = (uint)uVar24;
            if (((long *)(unaff_x27 >> 6) < plVar19) &&
               (((ulong)param_4[(long)(unaff_x27 >> 6)] >> (unaff_x27 & 0x3f) & 1) != 0)) {
              uVar15 = uVar15 << (ulong)(uVar13 - (int)unaff_x24 & 0x1f) | 1;
              unaff_x24 = uVar24;
            }
            if (uVar21 <= uVar13) break;
            uVar24 = (ulong)(uVar13 + 1);
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
          } while (uVar13 + 1 < uStack_53c);
          unaff_x27 = (ulong)(uVar15 >> 1);
          if (iVar4 != 0) goto LAB_10ae2f10c;
LAB_10ae2f0e0:
          if (param_3 != (long *)0x0) {
            plVar9 = plStack_548;
            _memcpy(param_1,alStack_4f0 + unaff_x27 * 9);
          }
        }
        uVar15 = uVar21 + ~(uint)unaff_x24;
        unaff_x26 = (long *)0x1;
        bVar2 = uVar21 != (uint)unaff_x24;
        uVar21 = uVar15;
      } while (bVar2);
LAB_10ae2f164:
      plVar18 = alStack_4f0;
      plVar25 = alStack_4f0;
      param_2 = (long *)0x480;
      _bzero();
      param_6 = plVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return plVar25;
      }
      goto LAB_10ae2f1b0;
    }
LAB_10ae2eef8:
    plVar9 = (long *)*param_6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      do {
        plVar19 = (long *)((long)register0x00000008 + -0xd0);
        plVar5 = (long *)((long)register0x00000008 + -0xd0);
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        plVar18 = param_1;
        plVar8 = param_3;
        plVar25 = plVar9;
        plVar11 = param_3;
        if ((param_3 < (long *)0xa) &&
           (unaff_x22 = (long *)((long)param_3 << 1), unaff_x19 = param_3, unaff_x20 = param_6,
           param_3 == (long *)(long)(int)param_6[4] && param_3 <= unaff_x22)) {
          *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000008 + -200) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          if (param_3 != (long *)0x0) {
            func_0x000107c60e68((undefined1 *)((long)register0x00000008 + -0xd0),plVar9,
                                (long)param_3 << 3,0x90);
          }
          plVar9 = unaff_x22;
          func_0x00010022846c();
          plVar25 = plVar19;
          plVar11 = plVar9;
          unaff_x21 = param_1;
          if ((int)plVar18 == 0) goto code_r0x0001004149f8;
          if (param_3 != (long *)0x0) {
            plVar19 = (long *)((long)param_3 << 4);
            plVar8 = (long *)0x0;
            plVar9 = (long *)0x90;
            func_0x000107c60e6c();
            plVar18 = plVar5;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x38)) {
            return plVar18;
          }
        }
        else {
code_r0x0001004149f8:
          plVar9 = plVar11;
          plVar19 = plVar25;
          func_0x000107c60ebc();
        }
        func_0x000107c60e78();
        *(long **)((long)register0x00000008 + -0x100) = unaff_x22;
        *(long **)((long)register0x00000008 + -0xf8) = unaff_x21;
        *(long **)((long)register0x00000008 + -0xf0) = unaff_x20;
        *(long **)((long)register0x00000008 + -0xe8) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_100414a00;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
        param_3 = (long *)(long)(int)plVar18[8];
        param_6 = (long *)plVar18[0x27];
        unaff_x22 = (long *)((long)register0x00000008 + -0x148);
        param_1 = (long *)((long)register0x00000008 + -0x148);
        unaff_x30 = &UNK_100414a3c;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
        unaff_x19 = plVar19;
        unaff_x20 = plVar8;
        unaff_x21 = plVar18;
      } while( true );
    }
  }
  else {
    _abort();
    plVar25 = param_1;
    plVar9 = param_3;
    plVar11 = param_4;
    param_1 = unaff_x21;
    plVar19 = unaff_x22;
  }
LAB_10ae2f1b0:
  ___stack_chk_fail();
  puVar7 = &uStack_5d0;
  pcStack_558 = FUN_10ae2f1b4;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_5e8 = plVar18;
  plStack_5f0 = plVar8;
  plStack_580 = plVar19;
  plStack_578 = param_1;
  plStack_570 = plVar8;
  plStack_568 = plVar18;
  puStack_560 = &stack0xfffffffffffffff0;
  if ((plVar9 < (long *)0xa) &&
     (plStack_5e8 = plVar11, plStack_5f0 = plVar9, plVar9 == (long *)(long)(int)plVar11[4])) {
    if (plVar9 == (long *)0x0) {
      uVar24 = 0xffffffffffffffff;
    }
    else {
      ___memcpy_chk(&uStack_5d0,plVar11[3],(long)plVar9 << 3,0x48);
      uVar24 = uStack_5d0 - 2;
      if ((uStack_5d0 < 2) &&
         (uStack_5d0 = uStack_5d0 | 0xfffffffffffffffe, uVar24 = uStack_5d0, plVar9 != (long *)0x1))
      {
        plVar18 = alStack_5c8;
        lVar6 = (long)plVar9 + -2;
        do {
          lVar14 = *plVar18;
          *plVar18 = lVar14 + -1;
          if (lVar14 != 0) break;
          bVar2 = lVar6 != 0;
          plVar18 = plVar18 + 1;
          lVar6 = lVar6 + -1;
        } while (bVar2);
      }
    }
    uStack_5d0 = uVar24;
    plVar18 = plVar25;
    plVar8 = param_2;
    param_5 = plVar9;
    param_6 = plVar11;
    FUN_10ae2ee78();
    param_1 = param_2;
    plVar19 = plVar25;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
      return plVar18;
    }
  }
  else {
    _abort();
    plVar18 = plVar25;
    plVar8 = param_2;
    puVar7 = (ulong *)plVar11;
  }
  ___stack_chk_fail();
  pcStack_5d8 = FUN_10ae2f2b4;
  uVar15 = *(uint *)(puVar7 + 1);
  uStack_630 = unaff_x28;
  uStack_628 = unaff_x27;
  plStack_620 = unaff_x26;
  uStack_618 = unaff_x25;
  uStack_610 = unaff_x24;
  plStack_608 = unaff_x23;
  plStack_600 = plVar19;
  plStack_5f8 = param_1;
  ppuStack_5e0 = &puStack_560;
  if (0 < (int)uVar15) {
    puVar22 = (ulong *)*puVar7;
    uVar24 = *puVar22;
    if ((uVar24 & 1) != 0) {
      if ((int)puVar7[2] != 0) {
        uVar10 = 0x6d;
        uVar12 = 0x395;
        goto LAB_10ae2f37c;
      }
      if ((int)plVar8[2] == 0) {
        lVar6 = *plVar8;
        func_0x000107c34f78(lVar6,(long)(int)plVar8[1],puVar22,(ulong)uVar15);
        if ((int)lVar6 < 0) {
          iVar4 = (int)plVar9[1];
          if (iVar4 == 0) {
            uVar24 = uVar24 & 0xfffffffffffffffe;
            if (uVar15 != 1) {
              lVar6 = (ulong)uVar15 - 1;
              do {
                puVar22 = puVar22 + 1;
                uVar24 = *puVar22 | uVar24;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            if (uVar24 != 0) {
              plVar8 = plVar18;
              func_0x000107c2b2fc(plVar18,1);
              if ((int)plVar8 == 0) {
                return (long *)0x0;
              }
              *(undefined4 *)(plVar18 + 2) = 0;
              *(undefined8 *)*plVar18 = 1;
              *(undefined4 *)(plVar18 + 1) = 1;
              return (long *)0x1;
            }
            *(undefined4 *)(plVar18 + 2) = 0;
            *(undefined4 *)(plVar18 + 1) = 0;
            return (long *)0x1;
          }
          if ((param_6 == (long *)0x0) &&
             (func_0x00010ae2ed3c(puVar7,param_5), param_6 = (long *)puVar7, puVar7 == (ulong *)0x0)
             ) {
            plVar18 = (long *)0x0;
            plVar25 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          iVar1 = (int)param_6[4];
          lVar6 = (long)iVar1;
          uVar15 = 3;
          if (iVar4 != 1) {
            uVar15 = 1;
          }
          uVar21 = 4;
          if (iVar4 < 2) {
            uVar21 = uVar15;
          }
          uVar15 = 5;
          if (iVar4 < 5) {
            uVar15 = uVar21;
          }
          uVar21 = 6;
          if (iVar4 < 0xf) {
            uVar21 = uVar15;
          }
          uVar13 = 1 << (ulong)uVar21;
          uVar15 = (uint)(lVar6 << 1);
          if ((int)uVar15 <= (int)uVar13) {
            uVar15 = uVar13;
          }
          iVar16 = (uVar15 + (iVar1 << (ulong)uVar21)) * 8;
          iVar3 = iVar16 + 0x40;
          if (iVar3 == -8) {
            plVar18 = (long *)0x0;
            plVar25 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar11 = (long *)((long)iVar3 + 8);
          _malloc();
          if (plVar11 == (long *)0x0) {
            plVar18 = (long *)0x0;
            plVar25 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar25 = plVar11 + 1;
          *plVar11 = (long)iVar3;
          lVar14 = ((ulong)plVar25 & 0xffffffffffffffc0) + 0x40;
          if (iVar16 != 0) {
            _bzero(lVar14,(long)iVar16);
          }
          lStack_648 = lVar14 + (long)(iVar1 << (ulong)uVar21) * 8;
          lStack_660 = lStack_648 + lVar6 * 8;
          uStack_658 = 0;
          uStack_640 = 0;
          uStack_650 = 0x200000000;
          uStack_638 = 0x200000000;
          plVar19 = &lStack_648;
          iStack_654 = iVar1;
          iStack_63c = iVar1;
          FUN_10ae2f7bc(plVar19,param_6,param_5);
          if ((int)plVar19 == 0) {
            plVar18 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar19 = &lStack_660;
          func_0x000107c2b37c(plVar19,plVar8,param_6,param_6,param_5);
          if ((int)plVar19 != 0) {
            func_0x000107c2b330(lVar14,lVar6,&lStack_648);
            func_0x000107c2b330(lVar14 + lVar6 * 8,lVar6,&lStack_660);
            if (1 < uVar21) {
              plVar8 = &lStack_648;
              func_0x000107c2b37c(plVar8,&lStack_660,&lStack_660,param_6,param_5);
              if ((int)plVar8 == 0) goto LAB_10ae2f788;
              func_0x000107c2b330(lVar14 + lVar6 * 0x10,lVar6,&lStack_648);
              if (uVar13 < 5) {
                uVar13 = 4;
              }
              lVar23 = (ulong)uVar13 - 3;
              lVar20 = (long)plVar11 + ((long)iVar1 * 0x18 - ((ulong)plVar25 & 0x3f)) + 0x48;
              do {
                plVar8 = &lStack_648;
                func_0x000107c2b37c(plVar8,&lStack_660,&lStack_648,param_6,param_5);
                if ((int)plVar8 == 0) goto LAB_10ae2f788;
                func_0x000107c2b330(lVar20,lVar6,&lStack_648);
                lVar20 = lVar20 + lVar6 * 8;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            uVar15 = iVar4 * 0x40 - 1;
            uVar24 = (ulong)uVar15;
            iVar3 = 0;
            if (uVar21 != 0) {
              iVar3 = (int)uVar15 / (int)uVar21;
            }
            uVar13 = 0;
            iVar3 = uVar15 - iVar3 * uVar21;
            if (-1 < iVar3) {
              iVar16 = iVar3 + 1;
              do {
                uVar15 = (uint)uVar24;
                if (((int)uVar15 < 0) || (*(uint *)(plVar9 + 1) <= uVar15 >> 6)) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (uint)(*(ulong *)(*plVar9 + (ulong)(uVar15 >> 6) * 8) >> (uVar24 & 0x3f))
                           & 1;
                }
                uVar13 = uVar17 | uVar13 << 1;
                uVar24 = (ulong)(uVar15 - 1);
                iVar16 = iVar16 + -1;
              } while (0 < iVar16);
              uVar24 = (ulong)((iVar4 * 0x40 - iVar3) - 2);
            }
            plVar8 = &lStack_648;
            FUN_10ae2f864(plVar8,iVar1,lVar14,uVar13,uVar21);
            iVar4 = (int)plVar8;
            while (iVar4 != 0) {
              iVar4 = (int)uVar24;
              if (iVar4 < 0) {
                func_0x000107c2b380(plVar18,&lStack_648,param_6,param_5);
                goto LAB_10ae2f790;
              }
              iVar3 = 0;
              uVar15 = 0;
              uVar24 = (ulong)(iVar4 - uVar21);
              do {
                plVar8 = &lStack_648;
                func_0x000107c2b37c(plVar8,&lStack_648,&lStack_648,param_6,param_5);
                if ((int)plVar8 == 0) goto LAB_10ae2f788;
                uVar13 = iVar4 + iVar3;
                if (((int)uVar13 < 0) || (*(uint *)(plVar9 + 1) <= uVar13 >> 6)) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (uint)(*(ulong *)(*plVar9 + (ulong)(uVar13 >> 6) * 8) >>
                                 ((ulong)uVar13 & 0x3f)) & 1;
                }
                uVar15 = uVar13 | uVar15 << 1;
                iVar3 = iVar3 + -1;
              } while (uVar21 + iVar3 != 0);
              plVar8 = &lStack_660;
              FUN_10ae2f864(plVar8,iVar1,lVar14,uVar15,uVar21);
              if ((int)plVar8 == 0) break;
              plVar8 = &lStack_648;
              func_0x000107c2b37c(plVar8,&lStack_648,&lStack_660,param_6,param_5);
              iVar4 = (int)plVar8;
            }
          }
LAB_10ae2f788:
          plVar18 = (long *)0x0;
LAB_10ae2f790:
          func_0x000107c2b384();
          func_0x000107c2b534(plVar25);
          return plVar18;
        }
      }
      uVar10 = 0x6b;
      uVar12 = 0x399;
      goto LAB_10ae2f37c;
    }
  }
  uVar10 = 0x68;
  uVar12 = 0x391;
LAB_10ae2f37c:
  func_0x000107c2b29c(3,0,uVar10,&UNK_10f6c6819,uVar12);
  return (long *)0x0;
code_r0x00010ae2eeec:
  unaff_x24 = (ulong)(iVar4 - 0x40);
  plVar19 = (long *)((long)plVar19 + -1);
  plVar25 = (long *)0x0;
  unaff_x26 = param_2;
  if (plVar19 == (long *)0x0) goto LAB_10ae2eef8;
  goto LAB_10ae2eee4;
}



/* Entry: 10ae2f1b4; end: 10ae2f2b3;  */

undefined8 *
FUN_10ae2f1b4(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
             long *param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long *plVar21;
  long lStack_110;
  undefined4 uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  ulong uStack_80;
  long alStack_78 [8];
  long lStack_38;
  
  puVar17 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 < (long *)0xa) && (param_3 == (long *)(long)(int)param_4[4])) {
    if (param_3 == (long *)0x0) {
      uVar20 = 0xffffffffffffffff;
    }
    else {
      ___memcpy_chk(&uStack_80,param_4[3],(long)param_3 << 3,0x48);
      uVar20 = uStack_80 - 2;
      if ((uStack_80 < 2) &&
         (uStack_80 = uStack_80 | 0xfffffffffffffffe, uVar20 = uStack_80, param_3 != (long *)0x1)) {
        plVar21 = alStack_78;
        lVar15 = (long)param_3 - 2;
        do {
          lVar11 = *plVar21;
          *plVar21 = lVar11 + -1;
          if (lVar11 != 0) break;
          bVar1 = lVar15 != 0;
          plVar21 = plVar21 + 1;
          lVar15 = lVar15 + -1;
        } while (bVar1);
      }
    }
    uStack_80 = uVar20;
    param_5 = param_3;
    param_6 = param_4;
    FUN_10ae2ee78();
    param_4 = (long *)puVar17;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return param_1;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  uVar13 = *(uint *)(param_4 + 1);
  if (0 < (int)uVar13) {
    puVar17 = (ulong *)*param_4;
    uVar20 = *puVar17;
    if ((uVar20 & 1) != 0) {
      if ((int)param_4[2] != 0) {
        uVar8 = 0x6d;
        uVar10 = 0x395;
        goto LAB_10ae2f37c;
      }
      if (*(int *)(param_2 + 2) == 0) {
        uVar8 = *param_2;
        func_0x000107c34f78(uVar8,(long)*(int *)(param_2 + 1),puVar17,(ulong)uVar13);
        if ((int)uVar8 < 0) {
          iVar4 = (int)param_3[1];
          if (iVar4 == 0) {
            uVar20 = uVar20 & 0xfffffffffffffffe;
            if (uVar13 != 1) {
              lVar15 = (ulong)uVar13 - 1;
              do {
                puVar17 = puVar17 + 1;
                uVar20 = *puVar17 | uVar20;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            if (uVar20 != 0) {
              puVar5 = param_1;
              func_0x000107c2b2fc(param_1,1);
              if ((int)puVar5 == 0) {
                return (undefined8 *)0x0;
              }
              *(undefined4 *)(param_1 + 2) = 0;
              *(undefined8 *)*param_1 = 1;
              *(undefined4 *)(param_1 + 1) = 1;
              return (undefined8 *)0x1;
            }
            *(undefined4 *)(param_1 + 2) = 0;
            *(undefined4 *)(param_1 + 1) = 0;
            return (undefined8 *)0x1;
          }
          if ((param_6 == (long *)0x0) &&
             (func_0x00010ae2ed3c(param_4,param_5), param_6 = param_4, param_4 == (long *)0x0)) {
            param_1 = (undefined8 *)0x0;
            plVar21 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          iVar3 = (int)param_6[4];
          lVar15 = (long)iVar3;
          uVar13 = 3;
          if (iVar4 != 1) {
            uVar13 = 1;
          }
          uVar2 = 4;
          if (iVar4 < 2) {
            uVar2 = uVar13;
          }
          uVar13 = 5;
          if (iVar4 < 5) {
            uVar13 = uVar2;
          }
          uVar2 = 6;
          if (iVar4 < 0xf) {
            uVar2 = uVar13;
          }
          uVar9 = 1 << (ulong)uVar2;
          uVar13 = (uint)(lVar15 << 1);
          if ((int)uVar13 <= (int)uVar9) {
            uVar13 = uVar9;
          }
          iVar12 = (uVar13 + (iVar3 << (ulong)uVar2)) * 8;
          iVar19 = iVar12 + 0x40;
          if (iVar19 == -8) {
            param_1 = (undefined8 *)0x0;
            plVar21 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar6 = (long *)((long)iVar19 + 8);
          _malloc();
          if (plVar6 == (long *)0x0) {
            param_1 = (undefined8 *)0x0;
            plVar21 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar21 = plVar6 + 1;
          *plVar6 = (long)iVar19;
          lVar11 = ((ulong)plVar21 & 0xffffffffffffffc0) + 0x40;
          if (iVar12 != 0) {
            _bzero(lVar11,(long)iVar12);
          }
          lStack_f8 = lVar11 + (long)(iVar3 << (ulong)uVar2) * 8;
          lStack_110 = lStack_f8 + lVar15 * 8;
          uStack_108 = 0;
          uStack_f0 = 0;
          uStack_100 = 0x200000000;
          uStack_e8 = 0x200000000;
          plVar7 = &lStack_f8;
          iStack_104 = iVar3;
          iStack_ec = iVar3;
          FUN_10ae2f7bc(plVar7,param_6,param_5);
          if ((int)plVar7 == 0) {
            param_1 = (undefined8 *)0x0;
            goto LAB_10ae2f790;
          }
          plVar7 = &lStack_110;
          func_0x000107c2b37c(plVar7,param_2,param_6,param_6,param_5);
          if ((int)plVar7 != 0) {
            func_0x000107c2b330(lVar11,lVar15,&lStack_f8);
            func_0x000107c2b330(lVar11 + lVar15 * 8,lVar15,&lStack_110);
            if (1 < uVar2) {
              plVar7 = &lStack_f8;
              func_0x000107c2b37c(plVar7,&lStack_110,&lStack_110,param_6,param_5);
              if ((int)plVar7 == 0) goto LAB_10ae2f788;
              func_0x000107c2b330(lVar11 + lVar15 * 0x10,lVar15,&lStack_f8);
              if (uVar9 < 5) {
                uVar9 = 4;
              }
              lVar18 = (ulong)uVar9 - 3;
              lVar16 = (long)plVar6 + ((long)iVar3 * 0x18 - ((ulong)plVar21 & 0x3f)) + 0x48;
              do {
                plVar6 = &lStack_f8;
                func_0x000107c2b37c(plVar6,&lStack_110,&lStack_f8,param_6,param_5);
                if ((int)plVar6 == 0) goto LAB_10ae2f788;
                func_0x000107c2b330(lVar16,lVar15,&lStack_f8);
                lVar16 = lVar16 + lVar15 * 8;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            uVar13 = iVar4 * 0x40 - 1;
            uVar20 = (ulong)uVar13;
            iVar19 = 0;
            if (uVar2 != 0) {
              iVar19 = (int)uVar13 / (int)uVar2;
            }
            uVar9 = 0;
            iVar19 = uVar13 - iVar19 * uVar2;
            if (-1 < iVar19) {
              iVar12 = iVar19 + 1;
              do {
                uVar13 = (uint)uVar20;
                if (((int)uVar13 < 0) || (*(uint *)(param_3 + 1) <= uVar13 >> 6)) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (uint)(*(ulong *)(*param_3 + (ulong)(uVar13 >> 6) * 8) >> (uVar20 & 0x3f)
                                 ) & 1;
                }
                uVar9 = uVar14 | uVar9 << 1;
                uVar20 = (ulong)(uVar13 - 1);
                iVar12 = iVar12 + -1;
              } while (0 < iVar12);
              uVar20 = (ulong)((iVar4 * 0x40 - iVar19) - 2);
            }
            plVar6 = &lStack_f8;
            FUN_10ae2f864(plVar6,iVar3,lVar11,uVar9,uVar2);
            iVar4 = (int)plVar6;
            while (iVar4 != 0) {
              iVar4 = (int)uVar20;
              if (iVar4 < 0) {
                func_0x000107c2b380(param_1,&lStack_f8,param_6,param_5);
                goto LAB_10ae2f790;
              }
              iVar19 = 0;
              uVar13 = 0;
              uVar20 = (ulong)(iVar4 - uVar2);
              do {
                plVar6 = &lStack_f8;
                func_0x000107c2b37c(plVar6,&lStack_f8,&lStack_f8,param_6,param_5);
                if ((int)plVar6 == 0) goto LAB_10ae2f788;
                uVar9 = iVar4 + iVar19;
                if (((int)uVar9 < 0) || (*(uint *)(param_3 + 1) <= uVar9 >> 6)) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (uint)(*(ulong *)(*param_3 + (ulong)(uVar9 >> 6) * 8) >>
                                ((ulong)uVar9 & 0x3f)) & 1;
                }
                uVar13 = uVar9 | uVar13 << 1;
                iVar19 = iVar19 + -1;
              } while (uVar2 + iVar19 != 0);
              plVar6 = &lStack_110;
              FUN_10ae2f864(plVar6,iVar3,lVar11,uVar13,uVar2);
              if ((int)plVar6 == 0) break;
              plVar6 = &lStack_f8;
              func_0x000107c2b37c(plVar6,&lStack_f8,&lStack_110,param_6,param_5);
              iVar4 = (int)plVar6;
            }
          }
LAB_10ae2f788:
          param_1 = (undefined8 *)0x0;
LAB_10ae2f790:
          func_0x000107c2b384();
          func_0x000107c2b534(plVar21);
          return param_1;
        }
      }
      uVar8 = 0x6b;
      uVar10 = 0x399;
      goto LAB_10ae2f37c;
    }
  }
  uVar8 = 0x68;
  uVar10 = 0x391;
LAB_10ae2f37c:
  func_0x000107c2b29c(3,0,uVar8,&UNK_10f6c6819,uVar10);
  return (undefined8 *)0x0;
}



/* Entry: 10ae2f2b4; end: 10ae2f7bb;  */

undefined8 *
FUN_10ae2f2b4(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 param_5
             ,long *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  long lStack_90;
  undefined4 uStack_88;
  int iStack_84;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  uVar12 = *(uint *)(param_4 + 1);
  if (0 < (int)uVar12) {
    puVar16 = (ulong *)*param_4;
    uVar19 = *puVar16;
    if ((uVar19 & 1) != 0) {
      if ((int)param_4[2] != 0) {
        uVar8 = 0x6d;
        uVar10 = 0x395;
        goto LAB_10ae2f37c;
      }
      if (*(int *)(param_2 + 2) == 0) {
        uVar8 = *param_2;
        func_0x000107c34f78(uVar8,(long)*(int *)(param_2 + 1),puVar16,(ulong)uVar12);
        if ((int)uVar8 < 0) {
          iVar4 = (int)param_3[1];
          if (iVar4 == 0) {
            uVar19 = uVar19 & 0xfffffffffffffffe;
            if (uVar12 != 1) {
              lVar14 = (ulong)uVar12 - 1;
              do {
                puVar16 = puVar16 + 1;
                uVar19 = *puVar16 | uVar19;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            if (uVar19 != 0) {
              puVar5 = param_1;
              func_0x000107c2b2fc(param_1,1);
              if ((int)puVar5 == 0) {
                return (undefined8 *)0x0;
              }
              *(undefined4 *)(param_1 + 2) = 0;
              *(undefined8 *)*param_1 = 1;
              *(undefined4 *)(param_1 + 1) = 1;
              return (undefined8 *)0x1;
            }
            *(undefined4 *)(param_1 + 2) = 0;
            *(undefined4 *)(param_1 + 1) = 0;
            return (undefined8 *)0x1;
          }
          if ((param_6 == (long *)0x0) &&
             (func_0x00010ae2ed3c(param_4,param_5), param_6 = param_4, param_4 == (long *)0x0)) {
            param_1 = (undefined8 *)0x0;
            plVar20 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          iVar3 = (int)param_6[4];
          lVar14 = (long)iVar3;
          uVar12 = 3;
          if (iVar4 != 1) {
            uVar12 = 1;
          }
          uVar2 = 4;
          if (iVar4 < 2) {
            uVar2 = uVar12;
          }
          uVar12 = 5;
          if (iVar4 < 5) {
            uVar12 = uVar2;
          }
          uVar2 = 6;
          if (iVar4 < 0xf) {
            uVar2 = uVar12;
          }
          uVar9 = 1 << (ulong)uVar2;
          uVar12 = (uint)(lVar14 << 1);
          if ((int)uVar12 <= (int)uVar9) {
            uVar12 = uVar9;
          }
          iVar11 = (uVar12 + (iVar3 << (ulong)uVar2)) * 8;
          iVar18 = iVar11 + 0x40;
          if (iVar18 == -8) {
            param_1 = (undefined8 *)0x0;
            plVar20 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar6 = (long *)((long)iVar18 + 8);
          _malloc();
          if (plVar6 == (long *)0x0) {
            param_1 = (undefined8 *)0x0;
            plVar20 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar20 = plVar6 + 1;
          *plVar6 = (long)iVar18;
          lVar1 = ((ulong)plVar20 & 0xffffffffffffffc0) + 0x40;
          if (iVar11 != 0) {
            _bzero(lVar1,(long)iVar11);
          }
          lStack_78 = lVar1 + (long)(iVar3 << (ulong)uVar2) * 8;
          lStack_90 = lStack_78 + lVar14 * 8;
          uStack_88 = 0;
          uStack_70 = 0;
          uStack_80 = 0x200000000;
          uStack_68 = 0x200000000;
          plVar7 = &lStack_78;
          iStack_84 = iVar3;
          iStack_6c = iVar3;
          FUN_10ae2f7bc(plVar7,param_6,param_5);
          if ((int)plVar7 == 0) {
            param_1 = (undefined8 *)0x0;
            goto LAB_10ae2f790;
          }
          plVar7 = &lStack_90;
          func_0x000107c2b37c(plVar7,param_2,param_6,param_6,param_5);
          if ((int)plVar7 != 0) {
            func_0x000107c2b330(lVar1,lVar14,&lStack_78);
            func_0x000107c2b330(lVar1 + lVar14 * 8,lVar14,&lStack_90);
            if (1 < uVar2) {
              plVar7 = &lStack_78;
              func_0x000107c2b37c(plVar7,&lStack_90,&lStack_90,param_6,param_5);
              if ((int)plVar7 == 0) goto LAB_10ae2f788;
              func_0x000107c2b330(lVar1 + lVar14 * 0x10,lVar14,&lStack_78);
              if (uVar9 < 5) {
                uVar9 = 4;
              }
              lVar17 = (ulong)uVar9 - 3;
              lVar15 = (long)plVar6 + ((long)iVar3 * 0x18 - ((ulong)plVar20 & 0x3f)) + 0x48;
              do {
                plVar6 = &lStack_78;
                func_0x000107c2b37c(plVar6,&lStack_90,&lStack_78,param_6,param_5);
                if ((int)plVar6 == 0) goto LAB_10ae2f788;
                func_0x000107c2b330(lVar15,lVar14,&lStack_78);
                lVar15 = lVar15 + lVar14 * 8;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            uVar12 = iVar4 * 0x40 - 1;
            uVar19 = (ulong)uVar12;
            iVar18 = 0;
            if (uVar2 != 0) {
              iVar18 = (int)uVar12 / (int)uVar2;
            }
            uVar9 = 0;
            iVar18 = uVar12 - iVar18 * uVar2;
            if (-1 < iVar18) {
              iVar11 = iVar18 + 1;
              do {
                uVar12 = (uint)uVar19;
                if (((int)uVar12 < 0) || (*(uint *)(param_3 + 1) <= uVar12 >> 6)) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (uint)(*(ulong *)(*param_3 + (ulong)(uVar12 >> 6) * 8) >> (uVar19 & 0x3f)
                                 ) & 1;
                }
                uVar9 = uVar13 | uVar9 << 1;
                uVar19 = (ulong)(uVar12 - 1);
                iVar11 = iVar11 + -1;
              } while (0 < iVar11);
              uVar19 = (ulong)((iVar4 * 0x40 - iVar18) - 2);
            }
            plVar6 = &lStack_78;
            FUN_10ae2f864(plVar6,iVar3,lVar1,uVar9,uVar2);
            iVar4 = (int)plVar6;
            while (iVar4 != 0) {
              iVar4 = (int)uVar19;
              if (iVar4 < 0) {
                func_0x000107c2b380(param_1,&lStack_78,param_6,param_5);
                goto LAB_10ae2f790;
              }
              iVar18 = 0;
              uVar12 = 0;
              uVar19 = (ulong)(iVar4 - uVar2);
              do {
                plVar6 = &lStack_78;
                func_0x000107c2b37c(plVar6,&lStack_78,&lStack_78,param_6,param_5);
                if ((int)plVar6 == 0) goto LAB_10ae2f788;
                uVar9 = iVar4 + iVar18;
                if (((int)uVar9 < 0) || (*(uint *)(param_3 + 1) <= uVar9 >> 6)) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (uint)(*(ulong *)(*param_3 + (ulong)(uVar9 >> 6) * 8) >>
                                ((ulong)uVar9 & 0x3f)) & 1;
                }
                uVar12 = uVar9 | uVar12 << 1;
                iVar18 = iVar18 + -1;
              } while (uVar2 + iVar18 != 0);
              plVar6 = &lStack_90;
              FUN_10ae2f864(plVar6,iVar3,lVar1,uVar12,uVar2);
              if ((int)plVar6 == 0) break;
              plVar6 = &lStack_78;
              func_0x000107c2b37c(plVar6,&lStack_78,&lStack_90,param_6,param_5);
              iVar4 = (int)plVar6;
            }
          }
LAB_10ae2f788:
          param_1 = (undefined8 *)0x0;
LAB_10ae2f790:
          func_0x000107c2b384();
          func_0x000107c2b534(plVar20);
          return param_1;
        }
      }
      uVar8 = 0x6b;
      uVar10 = 0x399;
      goto LAB_10ae2f37c;
    }
  }
  uVar8 = 0x68;
  uVar10 = 0x391;
LAB_10ae2f37c:
  func_0x000107c2b29c(3,0,uVar8,&UNK_10f6c6819,uVar10);
  return (undefined8 *)0x0;
}



/* Entry: 10ae2f7bc; end: 10ae2f863;  */

void FUN_10ae2f7bc(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((0 < (int)*(uint *)(param_2 + 0x20)) &&
     (*(long *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 8 + -8) < 0)) {
    puVar3 = param_1;
    func_0x000107c2b2fc();
    if ((int)puVar3 != 0) {
      puVar6 = *(ulong **)(param_2 + 0x18);
      puVar5 = (ulong *)*param_1;
      *puVar5 = -*puVar6;
      uVar1 = *(uint *)(param_2 + 0x20);
      if (1 < (int)uVar1) {
        lVar4 = (ulong)uVar1 - 1;
        do {
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          *puVar5 = ~*puVar6;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      *(uint *)(param_1 + 1) = uVar1;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
  }
  func_0x0001002258d0(param_3);
  lVar4 = param_3;
  func_0x000100225974();
  if ((lVar4 != 0) && (lVar2 = lVar4, func_0x000100225e74(), lVar2 != 0)) {
    func_0x0001002283b8(param_1,lVar4,param_2);
  }
  if (*(char *)(param_3 + 0x28) == '\0') {
    lVar4 = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_3 + 0x10) = lVar4;
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 8);
  }
  return;
}



/* Entry: 10ae2f864; end: 10ae2f917;  */

void FUN_10ae2f864(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = param_1;
  func_0x000107c2b2fc(param_1,(long)(int)param_2);
  if ((int)plVar1 != 0) {
    lVar6 = (long)(int)param_2 * 8;
    if (param_2 != 0) {
      _bzero(*param_1,lVar6);
    }
    uVar2 = 0;
    do {
      if (0 < (int)param_2) {
        lVar3 = 0;
        lVar4 = *param_1;
        do {
          uVar5 = *(ulong *)(param_3 + lVar3);
          if (uVar2 != param_4) {
            uVar5 = 0;
          }
          *(ulong *)(lVar4 + lVar3) = *(ulong *)(lVar4 + lVar3) | uVar5;
          lVar3 = lVar3 + 8;
        } while ((ulong)param_2 << 3 != lVar3);
      }
      uVar2 = uVar2 + 1;
      param_3 = param_3 + lVar6;
    } while (uVar2 >> (ulong)(param_5 & 0x1f) == 0);
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



/* Entry: 10ae2f918; end: 10ae2fcaf;  */

void FUN_10ae2f918(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 *param_4,
                  long *param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  
  *param_2 = 0;
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    uVar9 = 0x68;
    uVar10 = 0x79;
  }
  else {
    if ((*(int *)(param_3 + 0x10) == 0) &&
       (lVar13 = param_3, func_0x000107c2b340(param_3,param_4), (int)lVar13 < 0)) {
      func_0x000107c2b34c(param_5);
      plVar3 = param_5;
      func_0x000107c2b350();
      plVar4 = param_5;
      func_0x000107c2b350();
      plVar5 = param_5;
      func_0x000107c2b350();
      plVar6 = param_5;
      func_0x000107c2b350();
      if (plVar6 != (long *)0x0) {
        *(undefined4 *)(plVar6 + 2) = 0;
        *(undefined4 *)(plVar6 + 1) = 0;
        plVar7 = plVar5;
        func_0x000107c2b2fc(plVar5,1);
        if ((int)plVar7 != 0) {
          *(undefined4 *)(plVar5 + 2) = 0;
          *(undefined8 *)*plVar5 = 1;
          *(undefined4 *)(plVar5 + 1) = 1;
          plVar7 = plVar4;
          func_0x000107c2b324(plVar4,param_3);
          if ((plVar7 != (long *)0x0) &&
             (plVar7 = plVar3, func_0x000107c2b324(plVar3,param_4), plVar7 != (long *)0x0)) {
            *(undefined4 *)(plVar3 + 2) = 0;
            while ((int)plVar4[1] != 0) {
              uVar12 = 0;
              lVar13 = (long)(int)plVar4[1];
              puVar14 = (ulong *)*plVar4;
              do {
                uVar12 = *puVar14 | uVar12;
                lVar13 = lVar13 + -1;
                puVar14 = puVar14 + 1;
              } while (lVar13 != 0);
              if (uVar12 == 0) break;
              uVar12 = 0;
              while( true ) {
                if (((uint)(uVar12 >> 6) < *(uint *)(plVar4 + 1)) &&
                   ((*(ulong *)(*plVar4 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0)) break;
                if (((0 < (int)plVar5[1]) && ((*(byte *)*plVar5 & 1) != 0)) &&
                   (plVar7 = plVar5, FUN_10ae2df40(plVar5,plVar5,param_4), (int)plVar7 == 0))
                goto LAB_10ae2fc7c;
                plVar7 = plVar5;
                FUN_10ae2fcb0(plVar5,plVar5);
                uVar12 = (ulong)((int)uVar12 + 1);
                if ((int)plVar7 == 0) goto LAB_10ae2fc7c;
              }
              if (((int)uVar12 != 0) &&
                 (plVar7 = plVar4, func_0x000107c2b360(plVar4,plVar4,uVar12), (int)plVar7 == 0))
              goto LAB_10ae2fc7c;
              uVar12 = 0;
              while( true ) {
                uVar11 = *(uint *)(plVar3 + 1);
                if (((uint)(uVar12 >> 6) < uVar11) &&
                   (lVar13 = *plVar3,
                   (*(ulong *)(lVar13 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0)) break;
                if ((0 < (int)plVar6[1]) &&
                   (((*(byte *)*plVar6 & 1) != 0 &&
                    (plVar7 = plVar6, FUN_10ae2df40(plVar6,plVar6,param_4), (int)plVar7 == 0))))
                goto LAB_10ae2fc7c;
                plVar7 = plVar6;
                FUN_10ae2fcb0(plVar6,plVar6);
                uVar12 = (ulong)((int)uVar12 + 1);
                if ((int)plVar7 == 0) goto LAB_10ae2fc7c;
              }
              if ((int)uVar12 != 0) {
                plVar7 = plVar3;
                func_0x000107c2b360(plVar3,plVar3,uVar12);
                if ((int)plVar7 == 0) goto LAB_10ae2fc7c;
                lVar13 = *plVar3;
                uVar11 = *(uint *)(plVar3 + 1);
              }
              lVar8 = *plVar4;
              func_0x000107c34f78(lVar8,(long)(int)plVar4[1],lVar13,(long)(int)uVar11);
              if ((int)lVar8 < 0) {
                plVar7 = plVar6;
                FUN_10ae2df40(plVar6,plVar6,plVar5);
                iVar2 = (int)plVar7;
                plVar7 = plVar3;
                plVar1 = plVar4;
              }
              else {
                plVar7 = plVar5;
                FUN_10ae2df40(plVar5,plVar5,plVar6);
                iVar2 = (int)plVar7;
                plVar7 = plVar4;
                plVar1 = plVar3;
              }
              if ((iVar2 == 0) || (func_0x000107c2b2f4(plVar7,plVar7,plVar1), (int)plVar7 == 0))
              goto LAB_10ae2fc7c;
            }
            FUN_10ae2e32c();
            if ((int)plVar3 == 0) {
              *param_2 = 1;
              func_0x000107c2b29c(3,0,0x70,&UNK_10f6c689e,0xf8);
            }
            else {
              plVar3 = plVar6;
              func_0x000107c2b30c(plVar6,param_4,plVar6);
              if ((int)plVar3 != 0) {
                if ((int)plVar6[2] == 0) {
                  lVar13 = *plVar6;
                  func_0x000107c34f78(lVar13,(long)(int)plVar6[1],*param_4,
                                      (long)*(int *)(param_4 + 1));
                  if ((int)lVar13 < 0) {
                    func_0x000107c2b324(param_1,plVar6);
                    goto LAB_10ae2fc7c;
                  }
                }
                FUN_10ae2e488(param_1,plVar6,param_4,param_5);
              }
            }
          }
        }
      }
LAB_10ae2fc7c:
      if ((char)param_5[5] != '\0') {
        return;
      }
      lVar13 = param_5[2];
      param_5[2] = lVar13 + -1;
      param_5[4] = *(long *)(param_5[1] + (lVar13 + -1) * 8);
      return;
    }
    uVar9 = 0x6b;
    uVar10 = 0x7e;
  }
  func_0x000107c2b29c(3,0,uVar9,&UNK_10f6c689e,uVar10);
  return;
}



/* Entry: 10ae2fcb0; end: 10ae2fd73;  */

void FUN_10ae2fcb0(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  plVar7 = param_1;
  func_0x000107c2b2fc(param_1,(long)*(int *)(param_2 + 1));
  if ((int)plVar7 != 0) {
    uVar8 = *(uint *)(param_2 + 1);
    if (uVar8 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      puVar9 = (ulong *)*param_1;
      puVar10 = (ulong *)*param_2;
      lVar3 = (long)(int)uVar8 + -1;
      puVar5 = puVar9;
      puVar6 = puVar10;
      for (lVar4 = lVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar6 >> 1 | puVar6[1] << 0x3f;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9[lVar3] = puVar10[lVar3] >> 1;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(uint *)(param_1 + 1) = uVar8;
      if ((int)uVar8 < 1) {
        return;
      }
      do {
        if (puVar9[(ulong)uVar8 - 1] != 0) {
          *(uint *)(param_1 + 1) = uVar8;
          return;
        }
        uVar2 = uVar8 - 1;
        bVar1 = 0 < (int)uVar8;
        uVar8 = uVar2;
      } while (uVar2 != 0 && bVar1);
      *(undefined4 *)(param_1 + 1) = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 10ae2fd74; end: 10ae3061f;  */

void FUN_10ae2fd74(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  uint uVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  long lVar27;
  byte *pbVar28;
  byte *pbVar29;
  
  *param_2 = 0;
  if (*(int *)(param_3 + 2) == 0) {
    pbVar29 = (byte *)*param_3;
    uVar22 = *(uint *)(param_3 + 1);
    pbVar28 = (byte *)*param_4;
    uVar1 = *(uint *)(param_4 + 1);
    lVar27 = (long)(int)uVar1;
    pbVar3 = pbVar29;
    func_0x000107c34f78(pbVar29,(long)(int)uVar22,pbVar28,lVar27);
    if ((int)pbVar3 < 0) {
      if (uVar22 != 0) {
        lVar23 = 0;
        uVar19 = 0;
        do {
          uVar19 = *(ulong *)(pbVar29 + lVar23 * 8) | uVar19;
          lVar23 = lVar23 + 1;
        } while ((int)uVar22 != lVar23);
        if (uVar19 != 0) {
          if (((0 < (int)uVar22) && ((*pbVar29 & 1) != 0)) ||
             ((0 < (int)uVar1 && ((*pbVar28 & 1) != 0)))) {
            if (uVar1 <= uVar22) {
              uVar22 = uVar1;
            }
            func_0x000107c2b34c(param_5);
            plVar4 = param_5;
            func_0x000107c2b350();
            plVar5 = param_5;
            func_0x000107c2b350();
            plVar6 = param_5;
            func_0x000107c2b350();
            plVar7 = param_5;
            func_0x000107c2b350();
            plVar8 = param_5;
            func_0x000107c2b350();
            plVar9 = param_5;
            func_0x000107c2b350();
            plVar10 = param_5;
            func_0x000107c2b350();
            plVar11 = param_5;
            func_0x000107c2b350();
            if ((((plVar4 != (long *)0x0) && (plVar5 != (long *)0x0)) && (plVar6 != (long *)0x0)) &&
               (((plVar7 != (long *)0x0 && (plVar8 != (long *)0x0)) &&
                ((((plVar9 != (long *)0x0 && ((plVar10 != (long *)0x0 && (plVar11 != (long *)0x0))))
                  && (plVar12 = plVar4, func_0x000107c2b324(plVar4,param_3), plVar12 != (long *)0x0)
                  ) && ((plVar12 = plVar5, func_0x000107c2b324(plVar5,param_4),
                        plVar12 != (long *)0x0 &&
                        (plVar12 = plVar6, func_0x000107c2b2fc(plVar6,1), (int)plVar12 != 0))))))))
            {
              *(undefined4 *)(plVar6 + 2) = 0;
              *(undefined8 *)*plVar6 = 1;
              *(undefined4 *)(plVar6 + 1) = 1;
              plVar12 = plVar9;
              func_0x000107c2b2fc(plVar9,1);
              if ((int)plVar12 != 0) {
                *(undefined4 *)(plVar9 + 2) = 0;
                *(undefined8 *)*plVar9 = 1;
                *(undefined4 *)(plVar9 + 1) = 1;
                plVar12 = plVar4;
                func_0x000107c2b334(plVar4,lVar27);
                if (((((int)plVar12 != 0) &&
                     (plVar12 = plVar5, func_0x000107c2b334(plVar5,lVar27), (int)plVar12 != 0)) &&
                    (plVar12 = plVar6, func_0x000107c2b334(plVar6,lVar27), (int)plVar12 != 0)) &&
                   (plVar12 = plVar8, func_0x000107c2b334(plVar8,lVar27), (int)plVar12 != 0)) {
                  lVar23 = (long)(int)uVar22;
                  plVar12 = plVar7;
                  func_0x000107c2b334(plVar7,lVar23);
                  if ((((int)plVar12 != 0) &&
                      (plVar12 = plVar9, func_0x000107c2b334(plVar9,lVar23), (int)plVar12 != 0)) &&
                     ((plVar12 = plVar10, func_0x000107c2b334(plVar10,lVar27), (int)plVar12 != 0 &&
                      (plVar12 = plVar11, func_0x000107c2b334(plVar11,lVar27), (int)plVar12 != 0))))
                  {
                    uVar2 = (uVar22 + uVar1) * 0x40;
                    if (uVar2 < uVar22 << 6) {
                      uVar16 = 0x66;
                      uVar18 = 0xf6;
                    }
                    else {
                      if (uVar2 != 0) {
                        uVar22 = 0;
                        do {
                          uVar20 = -((ulong)(*(uint *)*plVar4 & *(uint *)*plVar5) & 1);
                          lVar13 = *plVar10;
                          func_0x000107c2b314();
                          puVar17 = (ulong *)*plVar5;
                          uVar19 = uVar20;
                          if (lVar13 != 0) {
                            uVar19 = 0;
                          }
                          puVar21 = (ulong *)*plVar10;
                          if (uVar1 != 0) {
                            puVar24 = puVar21;
                            puVar25 = puVar17;
                            lVar15 = lVar27;
                            do {
                              *puVar25 = *puVar25 & ~uVar19 | *puVar24 & uVar19;
                              lVar15 = lVar15 + -1;
                              puVar24 = puVar24 + 1;
                              puVar25 = puVar25 + 1;
                            } while (lVar15 != 0);
                          }
                          func_0x000107c2b314(puVar21,*plVar4,puVar17,lVar27);
                          uVar20 = uVar20 & -lVar13;
                          puVar17 = (ulong *)*plVar10;
                          if (uVar1 != 0) {
                            puVar21 = (ulong *)*plVar4;
                            puVar24 = puVar17;
                            lVar13 = lVar27;
                            do {
                              *puVar21 = *puVar21 & ~uVar20 | *puVar24 & uVar20;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar24 = puVar24 + 1;
                            } while (lVar13 != 0);
                          }
                          func_0x000107c2b300(puVar17,*plVar6,*plVar8,lVar27);
                          lVar13 = *plVar11;
                          func_0x000107c2b314(lVar13,*plVar10,*param_4,lVar27);
                          uVar26 = (long)puVar17 - lVar13;
                          puVar17 = (ulong *)*plVar10;
                          if (uVar1 != 0) {
                            puVar21 = (ulong *)*plVar11;
                            puVar24 = puVar17;
                            lVar13 = lVar27;
                            do {
                              *puVar24 = *puVar21 & ~uVar26 | *puVar24 & uVar26;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar24 = puVar24 + 1;
                            } while (lVar13 != 0);
                            puVar21 = (ulong *)*plVar6;
                            puVar24 = puVar17;
                            lVar13 = lVar27;
                            do {
                              *puVar21 = *puVar21 & ~uVar20 | *puVar24 & uVar20;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar24 = puVar24 + 1;
                            } while (lVar13 != 0);
                            puVar21 = (ulong *)*plVar8;
                            puVar24 = puVar17;
                            lVar13 = lVar27;
                            do {
                              *puVar21 = *puVar21 & ~uVar19 | *puVar24 & uVar19;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar24 = puVar24 + 1;
                            } while (lVar13 != 0);
                          }
                          func_0x000107c2b300(puVar17,*plVar7,*plVar9,lVar23);
                          func_0x000107c2b314(*plVar11,*plVar10,*param_3,lVar23);
                          puVar17 = (ulong *)*plVar10;
                          if (uVar1 != 0) {
                            puVar21 = (ulong *)*plVar11;
                            puVar24 = puVar17;
                            lVar13 = lVar23;
                            do {
                              *puVar24 = *puVar21 & ~uVar26 | *puVar24 & uVar26;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar24 = puVar24 + 1;
                            } while (lVar13 != 0);
                            puVar21 = (ulong *)*plVar7;
                            puVar24 = puVar17;
                            lVar13 = lVar23;
                            do {
                              *puVar21 = *puVar21 & ~uVar20 | *puVar24 & uVar20;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar24 = puVar24 + 1;
                            } while (lVar13 != 0);
                            puVar21 = (ulong *)*plVar9;
                            lVar13 = lVar23;
                            do {
                              *puVar21 = *puVar21 & ~uVar19 | *puVar17 & uVar19;
                              lVar13 = lVar13 + -1;
                              puVar21 = puVar21 + 1;
                              puVar17 = puVar17 + 1;
                            } while (lVar13 != 0);
                          }
                          uVar19 = (*(ulong *)*plVar4 & 1) - 1;
                          uVar20 = *(ulong *)*plVar5;
                          FUN_10ae30c14();
                          puVar14 = (uint *)*plVar6;
                          uVar26 = -((ulong)(*(uint *)*plVar7 | *puVar14) & 1);
                          FUN_10ae30c8c(puVar14,uVar26 & uVar19,*param_4,*plVar10,lVar27);
                          lVar15 = *plVar7;
                          FUN_10ae30c8c(lVar15,uVar26 & uVar19,*param_3,*plVar10,lVar23);
                          lVar13 = *plVar6;
                          FUN_10ae30c14(lVar13,uVar19,*plVar10,lVar27);
                          if (uVar1 == 0) {
                            FUN_10ae30c14(*plVar7,uVar19,*plVar10,lVar23);
                          }
                          else {
                            lVar13 = lVar13 + lVar27 * 8;
                            *(ulong *)(lVar13 + -8) =
                                 *(ulong *)(lVar13 + -8) |
                                 (ulong)((uint)puVar14 & (uint)uVar19) << 0x3f;
                            lVar13 = *plVar7;
                            FUN_10ae30c14(lVar13,uVar19,*plVar10,lVar23);
                            lVar13 = lVar13 + lVar23 * 8;
                            *(ulong *)(lVar13 + -8) =
                                 *(ulong *)(lVar13 + -8) |
                                 (ulong)((uint)lVar15 & (uint)uVar19) << 0x3f;
                          }
                          uVar20 = (uVar20 & 1) - 1;
                          FUN_10ae30c14(*plVar5,uVar20,*plVar10,lVar27);
                          puVar14 = (uint *)*plVar8;
                          uVar19 = -((ulong)(*(uint *)*plVar9 | *puVar14) & 1);
                          FUN_10ae30c8c(puVar14,uVar19 & uVar20,*param_4,*plVar10,lVar27);
                          lVar15 = *plVar9;
                          FUN_10ae30c8c(lVar15,uVar19 & uVar20,*param_3,*plVar10,lVar23);
                          lVar13 = *plVar8;
                          FUN_10ae30c14(lVar13,uVar20,*plVar10,lVar27);
                          if (uVar1 == 0) {
                            FUN_10ae30c14(*plVar9,uVar20,*plVar10,lVar23);
                          }
                          else {
                            lVar13 = lVar13 + lVar27 * 8;
                            *(ulong *)(lVar13 + -8) =
                                 *(ulong *)(lVar13 + -8) |
                                 (ulong)((uint)puVar14 & (uint)uVar20) << 0x3f;
                            lVar13 = *plVar9;
                            FUN_10ae30c14(lVar13,uVar20,*plVar10,lVar23);
                            lVar13 = lVar13 + lVar23 * 8;
                            *(ulong *)(lVar13 + -8) =
                                 *(ulong *)(lVar13 + -8) |
                                 (ulong)((uint)lVar15 & (uint)uVar20) << 0x3f;
                          }
                          uVar22 = uVar22 + 1;
                        } while (uVar22 != uVar2);
                      }
                      FUN_10ae2e32c();
                      if ((int)plVar4 != 0) {
                        func_0x000107c2b324(param_1,plVar6);
                        goto LAB_10ae30600;
                      }
                      *param_2 = 1;
                      uVar16 = 0x70;
                      uVar18 = 0x13d;
                    }
                    func_0x000107c2b29c(3,0,uVar16,&UNK_10f6c6918,uVar18);
                  }
                }
              }
            }
LAB_10ae30600:
            if ((char)param_5[5] != '\0') {
              return;
            }
            lVar27 = param_5[2];
            param_5[2] = lVar27 + -1;
            param_5[4] = *(long *)(param_5[1] + (lVar27 + -1) * 8);
            return;
          }
          *param_2 = 1;
          uVar16 = 0x70;
          uVar18 = 199;
          goto LAB_10ae2fdf4;
        }
      }
      FUN_10ae2e32c();
      if ((int)param_4 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
      *param_2 = 1;
      uVar16 = 0x70;
      uVar18 = 0xb7;
      goto LAB_10ae2fdf4;
    }
  }
  uVar16 = 0x6b;
  uVar18 = 0xae;
LAB_10ae2fdf4:
  func_0x000107c2b29c(3,0,uVar16,&UNK_10f6c6918,uVar18);
  return;
}



/* Entry: 10ae30620; end: 10ae306c7;  */

void FUN_10ae30620(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c2b34c(param_4);
  lVar2 = param_4;
  func_0x000107c2b350();
  if (((lVar2 != 0) && (lVar1 = lVar2, func_0x000107c2b324(), lVar1 != 0)) &&
     (lVar1 = lVar2, FUN_10ae2e0a8(lVar2,2), (int)lVar1 != 0)) {
    FUN_10ae2f2b4(param_1,param_2,lVar2,param_3,param_4,param_5);
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    lVar2 = *(long *)(param_4 + 0x10) + -1;
    *(long *)(param_4 + 0x10) = lVar2;
    *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*(long *)(param_4 + 8) + lVar2 * 8);
  }
  return;
}



/* Entry: 10ae306c8; end: 10ae3071f;  */

void FUN_10ae306c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong in_stack_ffffffffffffffd8;
  
  plVar5 = param_1;
  FUN_10ae30720(param_1,&stack0xffffffffffffffdc,param_2,param_3,param_4);
  if ((int)plVar5 == 0) {
    return;
  }
  uVar7 = (uint)(in_stack_ffffffffffffffd8 >> 0x20);
  if ((long)in_stack_ffffffffffffffd8 < 0) {
    func_0x0001004d2c58(3,0,0x6d,&UNK_10f6c6c09,0x49);
  }
  else {
    *(int *)(param_1 + 2) = (int)param_1[2];
    plVar5 = param_1;
    func_0x000100202744(param_1,(long)(int)((int)param_1[1] + (uVar7 >> 6) + 1));
    if ((int)plVar5 != 0) {
      uVar3 = uVar7 >> 6;
      lVar8 = *param_1;
      lVar4 = *param_1;
      uVar2 = *(uint *)(param_1 + 1);
      uVar11 = (ulong)uVar2;
      iVar6 = uVar2 + uVar3;
      *(undefined8 *)(lVar4 + (long)iVar6 * 8) = 0;
      if ((in_stack_ffffffffffffffd8 & 0x3f00000000) == 0) {
        if (0 < (int)uVar2) {
          do {
            uVar12 = uVar11 - 1;
            *(undefined8 *)(lVar4 + (ulong)uVar3 * 8 + uVar12 * 8) =
                 *(undefined8 *)(lVar8 + uVar12 * 8);
            bVar1 = 1 < uVar11;
            uVar11 = uVar12;
          } while (bVar1);
        }
      }
      else if (0 < (int)uVar2) {
        puVar10 = (ulong *)(lVar4 + uVar11 * 8 + (ulong)uVar3 * 8);
        uVar13 = *puVar10;
        uVar12 = uVar11 + 1;
        puVar9 = (ulong *)(lVar8 + uVar11 * 8);
        do {
          puVar9 = puVar9 + -1;
          uVar11 = *puVar9;
          *puVar10 = uVar13 | uVar11 >> ((ulong)(0x40 - (uVar7 & 0x3f)) & 0x3f);
          uVar13 = uVar11 << (uVar7 & 0x3f);
          puVar10 = puVar10 + -1;
          *puVar10 = uVar13;
          uVar12 = uVar12 - 1;
        } while (1 < uVar12);
      }
      if (0x3f < uVar7) {
        func_0x000107c60ee4(lVar4,uVar3 << 3);
        iVar6 = (int)param_1[1] + uVar3;
      }
      uVar7 = iVar6 + 1;
      *(uint *)(param_1 + 1) = uVar7;
      if (iVar6 < 0) {
        if (uVar7 != 0) {
          return;
        }
      }
      else {
        do {
          if (*(long *)(*param_1 + -8 + (ulong)uVar7 * 8) != 0) {
            *(uint *)(param_1 + 1) = uVar7;
            return;
          }
          uVar2 = uVar7 - 1;
          bVar1 = 0 < (int)uVar7;
          uVar7 = uVar2;
        } while (uVar2 != 0 && bVar1);
        *(undefined4 *)(param_1 + 1) = 0;
      }
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return;
}



/* Entry: 10ae30720; end: 10ae309cf;  */

void FUN_10ae30720(long param_1,int *param_2,long param_3,long param_4,long *param_5)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = *(int *)(param_3 + 8);
  if (*(int *)(param_3 + 8) <= *(int *)(param_4 + 8)) {
    iVar14 = *(int *)(param_4 + 8);
  }
  if (iVar14 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    func_0x000107c2b34c(param_5);
    plVar3 = param_5;
    func_0x000107c2b350();
    plVar4 = param_5;
    func_0x000107c2b350();
    plVar5 = param_5;
    func_0x000107c2b350();
    if ((((plVar3 != (long *)0x0) && (plVar4 != (long *)0x0)) && (plVar5 != (long *)0x0)) &&
       ((plVar6 = plVar3, func_0x000107c2b324(plVar3,param_3), plVar6 != (long *)0x0 &&
        (plVar6 = plVar4, func_0x000107c2b324(plVar4,param_4), plVar6 != (long *)0x0)))) {
      lVar12 = (long)iVar14;
      plVar6 = plVar3;
      func_0x000107c2b334(plVar3,lVar12);
      if (((int)plVar6 != 0) &&
         ((plVar6 = plVar4, func_0x000107c2b334(plVar4,lVar12), (int)plVar6 != 0 &&
          (plVar6 = plVar5, func_0x000107c2b334(plVar5,lVar12), (int)plVar6 != 0)))) {
        uVar2 = (*(int *)(param_4 + 8) + *(int *)(param_3 + 8)) * 0x40;
        if (uVar2 < (uint)(*(int *)(param_3 + 8) << 6)) {
          func_0x000107c2b29c(3,0,0x66,&UNK_10f6c6918,0x4e);
        }
        else {
          iVar14 = 0;
          if (uVar2 != 0) {
            uVar15 = 0;
            do {
              uVar13 = -((ulong)(*(uint *)*plVar3 & *(uint *)*plVar4) & 1);
              lVar7 = *plVar5;
              func_0x000107c2b314();
              lVar11 = 0;
              lVar8 = *plVar3;
              uVar1 = uVar13;
              if (lVar7 != 0) {
                uVar1 = 0;
              }
              lVar9 = *plVar5;
              do {
                *(ulong *)(lVar8 + lVar11 * 8) =
                     *(ulong *)(lVar8 + lVar11 * 8) & ~uVar1 |
                     *(ulong *)(lVar9 + lVar11 * 8) & uVar1;
                lVar11 = lVar11 + 1;
              } while (lVar12 != lVar11);
              func_0x000107c2b314(lVar9,*plVar4,lVar8,lVar12);
              lVar11 = 0;
              puVar10 = (ulong *)*plVar4;
              uVar13 = uVar13 & -lVar7;
              lVar7 = *plVar5;
              do {
                puVar10[lVar11] =
                     puVar10[lVar11] & ~uVar13 | *(ulong *)(lVar7 + lVar11 * 8) & uVar13;
                lVar11 = lVar11 + 1;
              } while (lVar12 != lVar11);
              lVar11 = (*puVar10 & 1) - 1;
              iVar14 = iVar14 - ((uint)lVar11 & ((uint)*(undefined8 *)*plVar3 & 1) - 1);
              FUN_10ae30c14();
              FUN_10ae30c14(*plVar4,lVar11,*plVar5,lVar12);
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar2);
          }
          lVar11 = 0;
          lVar8 = *plVar3;
          lVar7 = *plVar4;
          do {
            *(ulong *)(lVar7 + lVar11 * 8) =
                 *(ulong *)(lVar7 + lVar11 * 8) | *(ulong *)(lVar8 + lVar11 * 8);
            lVar11 = lVar11 + 1;
          } while (lVar12 != lVar11);
          *param_2 = iVar14;
          FUN_10ae2e228(param_1,lVar7,lVar12);
        }
      }
    }
    if ((char)param_5[5] == '\0') {
      lVar12 = param_5[2];
      param_5[2] = lVar12 + -1;
      param_5[4] = *(long *)(param_5[1] + (lVar12 + -1) * 8);
    }
  }
  return;
}



/* Entry: 10ae309d0; end: 10ae30aab;  */

void FUN_10ae309d0(uint *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  uint uStack_44;
  
  func_0x000107c2b34c(param_4);
  plVar1 = param_4;
  func_0x000107c2b350();
  if ((plVar1 != (long *)0x0) && (plVar2 = plVar1, FUN_10ae30720(), (int)plVar2 != 0)) {
    uVar3 = *(uint *)(plVar1 + 1);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (ulong *)*plVar1;
      uVar4 = *puVar6 ^ 1 | (ulong)uStack_44;
      if (1 < (int)uVar3) {
        lVar5 = (ulong)uVar3 - 1;
        do {
          puVar6 = puVar6 + 1;
          uVar4 = *puVar6 | uVar4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar3 = (uint)(uVar4 == 0);
    }
    *param_1 = uVar3;
  }
  if ((char)param_4[5] == '\0') {
    lVar5 = param_4[2];
    param_4[2] = lVar5 + -1;
    param_4[4] = *(long *)(param_4[1] + (lVar5 + -1) * 8);
  }
  return;
}



/* Entry: 10ae30aac; end: 10ae30aef;  */

undefined8 *
FUN_10ae30aac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((*(int *)(param_2 + 2) != 0) || (*(int *)(param_3 + 2) != 0)) {
    func_0x000107c2b29c(3,0,0x6d,&UNK_10f6c6a96,0x211);
    return (undefined8 *)0x0;
  }
  uVar4 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)(param_3 + 1);
  if (uVar4 == 0 || uVar3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return (undefined8 *)0x1;
  }
  func_0x000107c2b34c(param_4);
  if (((param_1 != param_2) && (puVar8 = param_1, param_1 != param_3)) ||
     (puVar8 = param_4, func_0x000107c2b350(), puVar10 = puVar8, puVar8 != (undefined8 *)0x0)) {
    *(uint *)(puVar8 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
    puVar10 = puVar8;
    if ((uVar4 == 8) && (uVar3 == 8)) {
      func_0x000107c2b2fc(puVar8,0x10);
      if ((int)puVar10 == 0) goto LAB_10ae31fc0;
      *(undefined4 *)(puVar8 + 1) = 0x10;
      FUN_10ae30cfc(*puVar8,*param_2,*param_3);
    }
    else {
      iVar1 = uVar3 + uVar4;
      if (((int)uVar4 < 0x10) || (((int)uVar3 < 0x10 || (2 < (uVar4 - uVar3) + 1)))) {
        func_0x000107c2b2fc(puVar8,(long)iVar1);
        if ((int)puVar10 == 0) goto LAB_10ae31fc0;
        *(int *)(puVar8 + 1) = iVar1;
        func_0x00010ae31ffc(*puVar8,*param_2,(long)(int)uVar4,*param_3,(long)(int)uVar3);
      }
      else {
        uVar7 = uVar3;
        if (-1 < (int)(uVar4 - uVar3)) {
          uVar7 = uVar4;
        }
        func_0x000107c2b328();
        puVar9 = param_4;
        func_0x000107c2b350();
        puVar10 = puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_10ae31fc0;
        uVar6 = uVar7 - 1;
        iVar5 = 1 << (ulong)(uVar6 & 0x1f);
        if (iVar5 < (int)uVar4 || iVar5 < (int)uVar3) {
          func_0x000107c2b2fc(puVar9,(long)(8 << (ulong)(uVar6 & 0x1f)));
          if (((int)puVar10 == 0) ||
             (puVar10 = puVar8, func_0x000107c2b2fc(puVar8,(long)(4 << (ulong)(uVar6 & 0x1f))),
             (int)puVar10 == 0)) goto LAB_10ae31fc0;
          FUN_10ae3cec8(*puVar8,*param_2,*param_3,iVar5,uVar4 - iVar5,uVar3 - iVar5,*puVar9);
        }
        else {
          func_0x000107c2b2fc(puVar9,4 << (ulong)(uVar6 & 0x1f));
          if (((int)puVar10 == 0) ||
             (puVar10 = puVar8, func_0x000107c2b2fc(puVar8,1 << (ulong)(uVar7 & 0x1f)),
             (int)puVar10 == 0)) goto LAB_10ae31fc0;
          func_0x00010ae3d238(*puVar8,*param_2,*param_3,iVar5,uVar4 - iVar5,uVar3 - iVar5,*puVar9);
        }
        *(int *)(puVar8 + 1) = iVar1;
      }
    }
    if (puVar8 != param_1) {
      func_0x000107c2b324(param_1,puVar8);
      puVar10 = (undefined8 *)0x0;
      if (param_1 == (undefined8 *)0x0) goto LAB_10ae31fc0;
    }
    puVar10 = (undefined8 *)0x1;
  }
LAB_10ae31fc0:
  if (*(char *)(param_4 + 5) == '\0') {
    lVar2 = param_4[2];
    param_4[2] = lVar2 + -1;
    param_4[4] = *(undefined8 *)(param_4[1] + (lVar2 + -1) * 8);
  }
  return puVar10;
}



/* Entry: 10ae30af0; end: 10ae30c13;  */

undefined8 FUN_10ae30af0(long *param_1,undefined8 param_2,uint param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  func_0x000107c2b34c(param_4);
  plVar3 = param_4;
  func_0x000107c2b350();
  if (((plVar3 == (long *)0x0) ||
      (plVar4 = param_1, func_0x000107c2b324(param_1,param_2), plVar4 == (long *)0x0)) ||
     (plVar4 = plVar3, func_0x000107c2b2fc(plVar3,(long)(int)param_1[1]), (int)plVar4 == 0)) {
    uVar11 = 0;
  }
  else {
    iVar1 = (int)param_1[1];
    uVar11 = 1;
    if (iVar1 != 0) {
      uVar12 = 0;
      uVar2 = iVar1 << 6;
      puVar5 = (ulong *)*plVar3;
      puVar6 = (ulong *)*param_1;
      do {
        func_0x000107c2b3c8(puVar5,puVar6,1 << (ulong)(uVar12 & 0x1f),(long)iVar1);
        puVar6 = (ulong *)*param_1;
        puVar5 = (ulong *)*plVar3;
        iVar1 = (int)param_1[1];
        if (iVar1 != 0) {
          lVar7 = (long)iVar1;
          uVar8 = (ulong)(param_3 >> (ulong)(uVar12 & 0x1f) & 1);
          puVar9 = puVar5;
          puVar10 = puVar6;
          do {
            *puVar10 = *puVar10 & uVar8 - 1 | *puVar9 & -uVar8;
            lVar7 = lVar7 + -1;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar7 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar2 >> (ulong)(uVar12 & 0x1f) != 0);
      uVar11 = 1;
    }
  }
  if ((char)param_4[5] == '\0') {
    lVar7 = param_4[2];
    param_4[2] = lVar7 + -1;
    param_4[4] = *(long *)(param_4[1] + (lVar7 + -1) * 8);
  }
  return uVar11;
}



/* Entry: 10ae30c14; end: 10ae30c8b;  */

void FUN_10ae30c14(ulong *param_1,ulong param_2,ulong *param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  
  if (param_4 != 0) {
    lVar1 = param_4 + -1;
    lVar3 = lVar1;
    puVar4 = param_3;
    puVar2 = param_1;
    if (lVar1 == 0) {
      *param_3 = *param_1 >> 1;
    }
    else {
      do {
        *puVar4 = *puVar2 >> 1 | puVar2[1] << 0x3f;
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
      param_3[lVar1] = param_1[lVar1] >> 1;
    }
    do {
      *param_1 = *param_1 & ~param_2 | *param_3 & param_2;
      param_4 = param_4 + -1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 10ae30c8c; end: 10ae30cfb;  */

ulong FUN_10ae30c8c(ulong *param_1,ulong param_2,undefined8 param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  
  puVar1 = param_4;
  func_0x000107c2b300(param_4,param_1,param_3,param_5);
  if (param_5 != 0) {
    do {
      *param_1 = *param_1 & ~param_2 | *param_4 & param_2;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_1 = param_1 + 1;
    } while (param_5 != 0);
  }
  return (ulong)puVar1 & param_2;
}



/* Entry: 10ae30cfc; end: 10ae31a93;  */

void FUN_10ae30cfc(long *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  ulong uVar131;
  ulong uVar132;
  ulong uVar133;
  ulong uVar134;
  ulong uVar135;
  ulong uVar136;
  ulong uVar137;
  ulong uVar138;
  ulong uVar139;
  ulong uVar140;
  ulong uVar141;
  ulong uVar142;
  ulong uVar143;
  ulong uVar144;
  ulong uVar145;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = *param_2;
  uVar133 = SUB168(auVar3 * auVar67,8);
  *param_1 = *param_3 * *param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3[1];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = *param_2;
  uVar136 = SUB168(auVar4 * auVar68,8);
  uVar131 = param_3[1] * *param_2;
  uVar134 = uVar131 + uVar133;
  if (CARRY8(uVar131,uVar133)) {
    uVar136 = uVar136 + 1;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_3;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[1];
  uVar131 = SUB168(auVar5 * auVar69,8);
  uVar133 = *param_3 * param_2[1];
  if (CARRY8(uVar133,uVar134)) {
    uVar131 = uVar131 + 1;
  }
  param_1[1] = uVar133 + uVar134;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_3;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[2];
  uVar133 = SUB168(auVar6 * auVar70,8);
  uVar132 = *param_3 * param_2[2];
  uVar134 = uVar132 + uVar131 + uVar136;
  if (CARRY8(uVar132,uVar131 + uVar136)) {
    uVar133 = uVar133 + 1;
  }
  bVar1 = CARRY8(uVar133,(ulong)CARRY8(uVar131,uVar136));
  uVar133 = uVar133 + CARRY8(uVar131,uVar136);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[1];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[1];
  uVar131 = SUB168(auVar7 * auVar71,8);
  uVar132 = param_3[1] * param_2[1];
  uVar136 = uVar134 + uVar132;
  if (CARRY8(uVar134,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar134 = 1;
  if (bVar1) {
    uVar134 = 2;
  }
  uVar132 = uVar133 + uVar131;
  if (!CARRY8(uVar133,uVar131)) {
    uVar134 = (ulong)bVar1;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = *param_2;
  uVar131 = SUB168(auVar8 * auVar72,8);
  uVar133 = param_3[2] * *param_2;
  if (CARRY8(uVar136,uVar133)) {
    uVar131 = uVar131 + 1;
  }
  param_1[2] = uVar136 + uVar133;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[3];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = *param_2;
  uVar133 = SUB168(auVar9 * auVar73,8);
  uVar135 = param_3[3] * *param_2;
  uVar136 = uVar135 + uVar132 + uVar131;
  if (CARRY8(uVar135,uVar132 + uVar131)) {
    uVar133 = uVar133 + 1;
  }
  bVar1 = CARRY8(uVar133 + uVar134,(ulong)CARRY8(uVar132,uVar131));
  uVar135 = uVar133 + uVar134 + (ulong)CARRY8(uVar132,uVar131);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_3[2];
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[1];
  uVar132 = SUB168(auVar10 * auVar74,8);
  uVar137 = param_3[2] * param_2[1];
  uVar131 = uVar136 + uVar137;
  if (CARRY8(uVar136,uVar137)) {
    uVar132 = uVar132 + 1;
  }
  uVar136 = 1;
  if (CARRY8(uVar133,uVar134) || bVar1) {
    uVar136 = 2;
  }
  uVar137 = uVar135 + uVar132;
  if (!CARRY8(uVar135,uVar132)) {
    uVar136 = (ulong)(CARRY8(uVar133,uVar134) || bVar1);
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3[1];
  auVar75._8_8_ = 0;
  auVar75._0_8_ = param_2[2];
  uVar133 = SUB168(auVar11 * auVar75,8);
  uVar132 = param_3[1] * param_2[2];
  uVar134 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar137 + uVar133;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *param_3;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_2[3];
  uVar132 = SUB168(auVar12 * auVar76,8);
  uVar135 = *param_3 * param_2[3];
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar140 = uVar131 + uVar132;
  uVar131 = uVar136 + CARRY8(uVar137,uVar133) + (ulong)CARRY8(uVar131,uVar132);
  param_1[3] = uVar134 + uVar135;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *param_3;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_2[4];
  uVar136 = SUB168(auVar13 * auVar77,8);
  uVar133 = *param_3 * param_2[4];
  uVar134 = uVar133 + uVar140;
  if (CARRY8(uVar133,uVar140)) {
    uVar136 = uVar136 + 1;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[1];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_2[3];
  uVar132 = SUB168(auVar14 * auVar78,8);
  uVar135 = param_3[1] * param_2[3];
  uVar133 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar131,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar131 + uVar136 + uVar132;
  if (!CARRY8(uVar131 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar131,uVar136);
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[2];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = param_2[2];
  uVar131 = SUB168(auVar15 * auVar79,8);
  uVar132 = param_3[2] * param_2[2];
  uVar136 = uVar133 + uVar132;
  if (CARRY8(uVar133,uVar132)) {
    uVar131 = uVar131 + 1;
  }
  uVar133 = uVar135 + uVar131;
  if (CARRY8(uVar135,uVar131)) {
    uVar134 = uVar134 + 1;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[3];
  auVar80._8_8_ = 0;
  auVar80._0_8_ = param_2[1];
  uVar132 = SUB168(auVar16 * auVar80,8);
  uVar135 = param_3[3] * param_2[1];
  uVar131 = uVar136 + uVar135;
  if (CARRY8(uVar136,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar136 = uVar133 + uVar132;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[4];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = *param_2;
  uVar135 = SUB168(auVar17 * auVar81,8);
  uVar137 = param_3[4] * *param_2;
  if (CARRY8(uVar131,uVar137)) {
    uVar135 = uVar135 + 1;
  }
  uVar140 = uVar136 + uVar135;
  uVar133 = uVar134 + CARRY8(uVar133,uVar132) + (ulong)CARRY8(uVar136,uVar135);
  param_1[4] = uVar131 + uVar137;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[5];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = *param_2;
  uVar136 = SUB168(auVar18 * auVar82,8);
  uVar131 = param_3[5] * *param_2;
  uVar134 = uVar131 + uVar140;
  if (CARRY8(uVar131,uVar140)) {
    uVar136 = uVar136 + 1;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[4];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[1];
  uVar132 = SUB168(auVar19 * auVar83,8);
  uVar135 = param_3[4] * param_2[1];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[3];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_2[2];
  uVar133 = SUB168(auVar20 * auVar84,8);
  uVar132 = param_3[3] * param_2[2];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_3[2];
  auVar85._8_8_ = 0;
  auVar85._0_8_ = param_2[3];
  uVar137 = SUB168(auVar21 * auVar85,8);
  uVar140 = param_3[2] * param_2[3];
  uVar132 = uVar136 + uVar140;
  if (CARRY8(uVar136,uVar140)) {
    uVar137 = uVar137 + 1;
  }
  uVar136 = uVar131 + uVar137;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_3[1];
  auVar86._8_8_ = 0;
  auVar86._0_8_ = param_2[4];
  uVar144 = SUB168(auVar22 * auVar86,8);
  uVar138 = param_3[1] * param_2[4];
  uVar140 = uVar132 + uVar138;
  if (CARRY8(uVar132,uVar138)) {
    uVar144 = uVar144 + 1;
  }
  uVar132 = uVar136 + uVar144;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_3;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_2[5];
  uVar138 = SUB168(auVar23 * auVar87,8);
  uVar141 = *param_3 * param_2[5];
  if (CARRY8(uVar140,uVar141)) {
    uVar138 = uVar138 + 1;
  }
  uVar142 = uVar132 + uVar138;
  uVar133 = uVar134 + CARRY8(uVar135,uVar133) + (ulong)CARRY8(uVar131,uVar137) +
            (ulong)CARRY8(uVar136,uVar144) + (ulong)CARRY8(uVar132,uVar138);
  param_1[5] = uVar140 + uVar141;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = *param_3;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_2[6];
  uVar136 = SUB168(auVar24 * auVar88,8);
  uVar131 = *param_3 * param_2[6];
  uVar134 = uVar131 + uVar142;
  if (CARRY8(uVar131,uVar142)) {
    uVar136 = uVar136 + 1;
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[1];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_2[5];
  uVar132 = SUB168(auVar25 * auVar89,8);
  uVar135 = param_3[1] * param_2[5];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[2];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_2[4];
  uVar133 = SUB168(auVar26 * auVar90,8);
  uVar132 = param_3[2] * param_2[4];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  if (CARRY8(uVar135,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[3];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_2[3];
  uVar132 = SUB168(auVar27 * auVar91,8);
  uVar135 = param_3[3] * param_2[3];
  uVar133 = uVar136 + uVar135;
  if (CARRY8(uVar136,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar136 = uVar131 + uVar132;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[4];
  auVar92._8_8_ = 0;
  auVar92._0_8_ = param_2[2];
  uVar137 = SUB168(auVar28 * auVar92,8);
  uVar140 = param_3[4] * param_2[2];
  uVar135 = uVar133 + uVar140;
  if (CARRY8(uVar133,uVar140)) {
    uVar137 = uVar137 + 1;
  }
  uVar133 = uVar136 + uVar137;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[5];
  auVar93._8_8_ = 0;
  auVar93._0_8_ = param_2[1];
  uVar144 = SUB168(auVar29 * auVar93,8);
  uVar138 = param_3[5] * param_2[1];
  uVar140 = uVar135 + uVar138;
  if (CARRY8(uVar135,uVar138)) {
    uVar144 = uVar144 + 1;
  }
  uVar135 = uVar133 + uVar144;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[6];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = *param_2;
  uVar138 = SUB168(auVar30 * auVar94,8);
  uVar141 = param_3[6] * *param_2;
  if (CARRY8(uVar140,uVar141)) {
    uVar138 = uVar138 + 1;
  }
  uVar142 = uVar135 + uVar138;
  uVar133 = uVar134 + CARRY8(uVar131,uVar132) + (ulong)CARRY8(uVar136,uVar137) +
            (ulong)CARRY8(uVar133,uVar144) + (ulong)CARRY8(uVar135,uVar138);
  param_1[6] = uVar140 + uVar141;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[7];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = *param_2;
  uVar136 = SUB168(auVar31 * auVar95,8);
  uVar131 = param_3[7] * *param_2;
  uVar134 = uVar131 + uVar142;
  if (CARRY8(uVar131,uVar142)) {
    uVar136 = uVar136 + 1;
  }
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[6];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_2[1];
  uVar132 = SUB168(auVar32 * auVar96,8);
  uVar135 = param_3[6] * param_2[1];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[5];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_2[2];
  uVar133 = SUB168(auVar33 * auVar97,8);
  uVar132 = param_3[5] * param_2[2];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[4];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_2[3];
  uVar137 = SUB168(auVar34 * auVar98,8);
  uVar140 = param_3[4] * param_2[3];
  uVar132 = uVar136 + uVar140;
  if (CARRY8(uVar136,uVar140)) {
    uVar137 = uVar137 + 1;
  }
  uVar136 = uVar131 + uVar137;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[3];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_2[4];
  uVar144 = SUB168(auVar35 * auVar99,8);
  uVar138 = param_3[3] * param_2[4];
  uVar140 = uVar132 + uVar138;
  if (CARRY8(uVar132,uVar138)) {
    uVar144 = uVar144 + 1;
  }
  uVar132 = uVar136 + uVar144;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_3[2];
  auVar100._8_8_ = 0;
  auVar100._0_8_ = param_2[5];
  uVar141 = SUB168(auVar36 * auVar100,8);
  uVar142 = param_3[2] * param_2[5];
  uVar138 = uVar140 + uVar142;
  if (CARRY8(uVar140,uVar142)) {
    uVar141 = uVar141 + 1;
  }
  uVar140 = uVar132 + uVar141;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[1];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_2[6];
  uVar145 = SUB168(auVar37 * auVar101,8);
  uVar139 = param_3[1] * param_2[6];
  uVar142 = uVar138 + uVar139;
  if (CARRY8(uVar138,uVar139)) {
    uVar145 = uVar145 + 1;
  }
  uVar138 = uVar140 + uVar145;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = *param_3;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_2[7];
  uVar139 = SUB168(auVar38 * auVar102,8);
  uVar143 = *param_3 * param_2[7];
  if (CARRY8(uVar142,uVar143)) {
    uVar139 = uVar139 + 1;
  }
  uVar2 = uVar138 + uVar139;
  uVar133 = uVar134 + CARRY8(uVar135,uVar133) + (ulong)CARRY8(uVar131,uVar137) +
            (ulong)CARRY8(uVar136,uVar144) + (ulong)CARRY8(uVar132,uVar141) +
            (ulong)CARRY8(uVar140,uVar145) + (ulong)CARRY8(uVar138,uVar139);
  param_1[7] = uVar142 + uVar143;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[1];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_2[7];
  uVar136 = SUB168(auVar39 * auVar103,8);
  uVar131 = param_3[1] * param_2[7];
  uVar134 = uVar131 + uVar2;
  if (CARRY8(uVar131,uVar2)) {
    uVar136 = uVar136 + 1;
  }
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[2];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_2[6];
  uVar132 = SUB168(auVar40 * auVar104,8);
  uVar135 = param_3[2] * param_2[6];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_3[3];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_2[5];
  uVar133 = SUB168(auVar41 * auVar105,8);
  uVar132 = param_3[3] * param_2[5];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  if (CARRY8(uVar135,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_3[4];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_2[4];
  uVar132 = SUB168(auVar42 * auVar106,8);
  uVar135 = param_3[4] * param_2[4];
  uVar133 = uVar136 + uVar135;
  if (CARRY8(uVar136,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar136 = uVar131 + uVar132;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_3[5];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_2[3];
  uVar137 = SUB168(auVar43 * auVar107,8);
  uVar140 = param_3[5] * param_2[3];
  uVar135 = uVar133 + uVar140;
  if (CARRY8(uVar133,uVar140)) {
    uVar137 = uVar137 + 1;
  }
  uVar133 = uVar136 + uVar137;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_3[6];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_2[2];
  uVar144 = SUB168(auVar44 * auVar108,8);
  uVar138 = param_3[6] * param_2[2];
  uVar140 = uVar135 + uVar138;
  if (CARRY8(uVar135,uVar138)) {
    uVar144 = uVar144 + 1;
  }
  uVar135 = uVar133 + uVar144;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_3[7];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[1];
  uVar138 = SUB168(auVar45 * auVar109,8);
  uVar141 = param_3[7] * param_2[1];
  if (CARRY8(uVar140,uVar141)) {
    uVar138 = uVar138 + 1;
  }
  uVar142 = uVar135 + uVar138;
  uVar133 = uVar134 + CARRY8(uVar131,uVar132) + (ulong)CARRY8(uVar136,uVar137) +
            (ulong)CARRY8(uVar133,uVar144) + (ulong)CARRY8(uVar135,uVar138);
  param_1[8] = uVar140 + uVar141;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_3[7];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[2];
  uVar136 = SUB168(auVar46 * auVar110,8);
  uVar131 = param_3[7] * param_2[2];
  uVar134 = uVar131 + uVar142;
  if (CARRY8(uVar131,uVar142)) {
    uVar136 = uVar136 + 1;
  }
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_3[6];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[3];
  uVar132 = SUB168(auVar47 * auVar111,8);
  uVar135 = param_3[6] * param_2[3];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_3[5];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[4];
  uVar133 = SUB168(auVar48 * auVar112,8);
  uVar132 = param_3[5] * param_2[4];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_3[4];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[5];
  uVar137 = SUB168(auVar49 * auVar113,8);
  uVar140 = param_3[4] * param_2[5];
  uVar132 = uVar136 + uVar140;
  if (CARRY8(uVar136,uVar140)) {
    uVar137 = uVar137 + 1;
  }
  uVar136 = uVar131 + uVar137;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_3[3];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[6];
  uVar144 = SUB168(auVar50 * auVar114,8);
  uVar138 = param_3[3] * param_2[6];
  uVar140 = uVar132 + uVar138;
  if (CARRY8(uVar132,uVar138)) {
    uVar144 = uVar144 + 1;
  }
  uVar132 = uVar136 + uVar144;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_3[2];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[7];
  uVar138 = SUB168(auVar51 * auVar115,8);
  uVar141 = param_3[2] * param_2[7];
  if (CARRY8(uVar140,uVar141)) {
    uVar138 = uVar138 + 1;
  }
  uVar142 = uVar132 + uVar138;
  uVar133 = uVar134 + CARRY8(uVar135,uVar133) + (ulong)CARRY8(uVar131,uVar137) +
            (ulong)CARRY8(uVar136,uVar144) + (ulong)CARRY8(uVar132,uVar138);
  param_1[9] = uVar140 + uVar141;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_3[3];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[7];
  uVar136 = SUB168(auVar52 * auVar116,8);
  uVar131 = param_3[3] * param_2[7];
  uVar134 = uVar131 + uVar142;
  if (CARRY8(uVar131,uVar142)) {
    uVar136 = uVar136 + 1;
  }
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_3[4];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[6];
  uVar132 = SUB168(auVar53 * auVar117,8);
  uVar135 = param_3[4] * param_2[6];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_3[5];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[5];
  uVar133 = SUB168(auVar54 * auVar118,8);
  uVar132 = param_3[5] * param_2[5];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  if (CARRY8(uVar135,uVar133)) {
    uVar134 = uVar134 + 1;
  }
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3[6];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_2[4];
  uVar132 = SUB168(auVar55 * auVar119,8);
  uVar135 = param_3[6] * param_2[4];
  uVar133 = uVar136 + uVar135;
  if (CARRY8(uVar136,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar136 = uVar131 + uVar132;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_3[7];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_2[3];
  uVar135 = SUB168(auVar56 * auVar120,8);
  uVar137 = param_3[7] * param_2[3];
  if (CARRY8(uVar133,uVar137)) {
    uVar135 = uVar135 + 1;
  }
  uVar140 = uVar136 + uVar135;
  uVar132 = uVar134 + CARRY8(uVar131,uVar132) + (ulong)CARRY8(uVar136,uVar135);
  param_1[10] = uVar133 + uVar137;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_3[7];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_2[4];
  uVar136 = SUB168(auVar57 * auVar121,8);
  uVar131 = param_3[7] * param_2[4];
  uVar134 = uVar131 + uVar140;
  if (CARRY8(uVar131,uVar140)) {
    uVar136 = uVar136 + 1;
  }
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_3[6];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_2[5];
  uVar133 = SUB168(auVar58 * auVar122,8);
  uVar135 = param_3[6] * param_2[5];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar133 = uVar133 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar132,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar132 + uVar136 + uVar133;
  if (!CARRY8(uVar132 + uVar136,uVar133)) {
    uVar134 = (ulong)CARRY8(uVar132,uVar136);
  }
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_3[5];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_2[6];
  uVar133 = SUB168(auVar59 * auVar123,8);
  uVar132 = param_3[5] * param_2[6];
  uVar136 = uVar131 + uVar132;
  if (CARRY8(uVar131,uVar132)) {
    uVar133 = uVar133 + 1;
  }
  uVar131 = uVar135 + uVar133;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_3[4];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_2[7];
  uVar132 = SUB168(auVar60 * auVar124,8);
  uVar137 = param_3[4] * param_2[7];
  if (CARRY8(uVar136,uVar137)) {
    uVar132 = uVar132 + 1;
  }
  uVar140 = uVar131 + uVar132;
  uVar133 = uVar134 + CARRY8(uVar135,uVar133) + (ulong)CARRY8(uVar131,uVar132);
  param_1[0xb] = uVar136 + uVar137;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_3[5];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[7];
  uVar136 = SUB168(auVar61 * auVar125,8);
  uVar131 = param_3[5] * param_2[7];
  uVar134 = uVar131 + uVar140;
  if (CARRY8(uVar131,uVar140)) {
    uVar136 = uVar136 + 1;
  }
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_3[6];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[6];
  uVar132 = SUB168(auVar62 * auVar126,8);
  uVar135 = param_3[6] * param_2[6];
  uVar131 = uVar134 + uVar135;
  if (CARRY8(uVar134,uVar135)) {
    uVar132 = uVar132 + 1;
  }
  uVar134 = 2;
  if (!CARRY8(uVar133,uVar136)) {
    uVar134 = 1;
  }
  uVar135 = uVar133 + uVar136 + uVar132;
  if (!CARRY8(uVar133 + uVar136,uVar132)) {
    uVar134 = (ulong)CARRY8(uVar133,uVar136);
  }
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_3[7];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[5];
  uVar136 = SUB168(auVar63 * auVar127,8);
  uVar133 = param_3[7] * param_2[5];
  if (CARRY8(uVar131,uVar133)) {
    uVar136 = uVar136 + 1;
  }
  param_1[0xc] = uVar131 + uVar133;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_3[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_2[6];
  uVar133 = SUB168(auVar64 * auVar128,8);
  uVar132 = param_3[7] * param_2[6];
  uVar131 = uVar132 + uVar135 + uVar136;
  if (CARRY8(uVar132,uVar135 + uVar136)) {
    uVar133 = uVar133 + 1;
  }
  bVar1 = CARRY8(uVar133 + uVar134,(ulong)CARRY8(uVar135,uVar136));
  uVar132 = uVar133 + uVar134 + (ulong)CARRY8(uVar135,uVar136);
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_3[6];
  auVar129._8_8_ = 0;
  auVar129._0_8_ = param_2[7];
  uVar136 = SUB168(auVar65 * auVar129,8);
  uVar135 = param_3[6] * param_2[7];
  if (CARRY8(uVar131,uVar135)) {
    uVar136 = uVar136 + 1;
  }
  uVar137 = 1;
  if (CARRY8(uVar133,uVar134) || bVar1) {
    uVar137 = 2;
  }
  uVar140 = uVar132 + uVar136;
  if (!CARRY8(uVar132,uVar136)) {
    uVar137 = (ulong)(CARRY8(uVar133,uVar134) || bVar1);
  }
  param_1[0xd] = uVar131 + uVar135;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_3[7];
  auVar130._8_8_ = 0;
  auVar130._0_8_ = param_2[7];
  uVar134 = param_3[7] * param_2[7];
  param_1[0xe] = uVar134 + uVar140;
  param_1[0xf] = uVar137 + SUB168(auVar66 * auVar130,8) + (ulong)CARRY8(uVar134,uVar140);
  return;
}



/* Entry: 10ae31a94; end: 10ae31d9b;  */

int FUN_10ae31a94(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  
  if ((*(int *)(param_2 + 1) < 1) || ((*(byte *)*param_2 & 1) == 0)) {
    uVar4 = 0x68;
    uVar5 = 0x49;
  }
  else {
    if (*(int *)(param_2 + 2) == 0) {
      func_0x000107c2b34c(param_3);
      plVar1 = param_3;
      func_0x000107c2b350();
      plVar2 = param_3;
      func_0x000107c2b350();
      if (((plVar2 == (long *)0x0) ||
          (plVar3 = plVar1, func_0x000107c2b324(plVar1,param_1), plVar3 == (long *)0x0)) ||
         (plVar3 = plVar2, func_0x000107c2b324(plVar2,param_2), plVar3 == (long *)0x0)) {
LAB_10ae31cac:
        iVar11 = -2;
      }
      else {
        puVar13 = (uint *)(plVar1 + 1);
        uVar10 = *puVar13;
        if (uVar10 == 0) {
          iVar12 = 1;
        }
        else {
          iVar11 = 1;
          do {
            plVar3 = plVar1;
            plVar1 = plVar2;
            uVar7 = 0;
            lVar6 = (long)(int)uVar10;
            puVar8 = (ulong *)*plVar3;
            do {
              uVar7 = *puVar8 | uVar7;
              lVar6 = lVar6 + -1;
              puVar8 = puVar8 + 1;
            } while (lVar6 != 0);
            plVar2 = plVar1;
            iVar12 = iVar11;
            if (uVar7 == 0) break;
            uVar7 = 0;
            while( true ) {
              if (((uint)(uVar7 >> 6) < uVar10) &&
                 ((((ulong *)*plVar3)[uVar7 >> 6] >> (uVar7 & 0x3f) & 1) != 0)) break;
              uVar7 = (ulong)((int)uVar7 + 1);
            }
            plVar2 = plVar3;
            func_0x000107c2b360(plVar3,plVar3,uVar7);
            if ((int)plVar2 == 0) goto LAB_10ae31cac;
            if ((uVar7 & 1) != 0) {
              if ((int)plVar1[1] == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(ulong *)*plVar1 & 7;
              }
              iVar11 = *(int *)(&UNK_10e525990 + uVar7 * 4) * iVar11;
            }
            if ((int)plVar3[2] == 0) {
              if (*puVar13 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (uint)*(undefined8 *)*plVar3;
              }
            }
            else if (*puVar13 == 0) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = ~(uint)*(undefined8 *)*plVar3;
            }
            puVar13 = (uint *)(plVar1 + 1);
            if (*puVar13 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (uint)*(undefined8 *)*plVar1;
            }
            plVar2 = plVar1;
            FUN_10ae2e488(plVar1,plVar1,plVar3,param_3);
            if ((int)plVar2 == 0) goto LAB_10ae31cac;
            iVar12 = -iVar11;
            if ((uVar10 & uVar14 & 2) == 0) {
              iVar12 = iVar11;
            }
            *(undefined4 *)(plVar3 + 2) = 0;
            uVar10 = *puVar13;
            plVar2 = plVar3;
            iVar11 = iVar12;
          } while (uVar10 != 0);
        }
        iVar9 = (int)plVar2;
        FUN_10ae2e32c();
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = iVar12;
        }
      }
      if ((char)param_3[5] != '\0') {
        return iVar11;
      }
      lVar6 = param_3[2];
      param_3[2] = lVar6 + -1;
      param_3[4] = *(long *)(param_3[1] + (lVar6 + -1) * 8);
      return iVar11;
    }
    uVar4 = 0x6d;
    uVar5 = 0x4f;
  }
  func_0x000107c2b29c(3,0,uVar4,&UNK_10f6c6998,uVar5);
  return -2;
}



/* Entry: 10ae31d9c; end: 10ae3214f;  */

void FUN_10ae31d9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)(param_3 + 1);
  if (uVar4 == 0 || uVar3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  func_0x000107c2b34c(param_4);
  if (((param_1 != param_2) && (puVar8 = param_1, param_1 != param_3)) ||
     (puVar8 = param_4, func_0x000107c2b350(), puVar8 != (undefined8 *)0x0)) {
    *(uint *)(puVar8 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
    if ((uVar4 == 8) && (uVar3 == 8)) {
      puVar9 = puVar8;
      func_0x000107c2b2fc(puVar8,0x10);
      if ((int)puVar9 == 0) goto LAB_10ae31fc0;
      *(undefined4 *)(puVar8 + 1) = 0x10;
      FUN_10ae30cfc(*puVar8,*param_2,*param_3);
    }
    else {
      iVar1 = uVar3 + uVar4;
      if (((int)uVar4 < 0x10) || (((int)uVar3 < 0x10 || (2 < (uVar4 - uVar3) + 1)))) {
        puVar9 = puVar8;
        func_0x000107c2b2fc(puVar8,(long)iVar1);
        if ((int)puVar9 == 0) goto LAB_10ae31fc0;
        *(int *)(puVar8 + 1) = iVar1;
        func_0x00010ae31ffc(*puVar8,*param_2,(long)(int)uVar4,*param_3,(long)(int)uVar3);
      }
      else {
        uVar7 = uVar3;
        if (-1 < (int)(uVar4 - uVar3)) {
          uVar7 = uVar4;
        }
        func_0x000107c2b328();
        puVar9 = param_4;
        func_0x000107c2b350();
        if (puVar9 == (undefined8 *)0x0) goto LAB_10ae31fc0;
        uVar6 = uVar7 - 1;
        iVar5 = 1 << (ulong)(uVar6 & 0x1f);
        if (iVar5 < (int)uVar4 || iVar5 < (int)uVar3) {
          puVar10 = puVar9;
          func_0x000107c2b2fc(puVar9,(long)(8 << (ulong)(uVar6 & 0x1f)));
          if (((int)puVar10 == 0) ||
             (puVar10 = puVar8, func_0x000107c2b2fc(puVar8,(long)(4 << (ulong)(uVar6 & 0x1f))),
             (int)puVar10 == 0)) goto LAB_10ae31fc0;
          FUN_10ae3cec8(*puVar8,*param_2,*param_3,iVar5,uVar4 - iVar5,uVar3 - iVar5,*puVar9);
        }
        else {
          puVar10 = puVar9;
          func_0x000107c2b2fc(puVar9,4 << (ulong)(uVar6 & 0x1f));
          if (((int)puVar10 == 0) ||
             (puVar10 = puVar8, func_0x000107c2b2fc(puVar8,1 << (ulong)(uVar7 & 0x1f)),
             (int)puVar10 == 0)) goto LAB_10ae31fc0;
          func_0x00010ae3d238(*puVar8,*param_2,*param_3,iVar5,uVar4 - iVar5,uVar3 - iVar5,*puVar9);
        }
        *(int *)(puVar8 + 1) = iVar1;
      }
    }
    if (puVar8 != param_1) {
      func_0x000107c2b324(param_1,puVar8);
    }
  }
LAB_10ae31fc0:
  if (*(char *)(param_4 + 5) == '\0') {
    lVar2 = param_4[2];
    param_4[2] = lVar2 + -1;
    param_4[4] = *(undefined8 *)(param_4[1] + (lVar2 + -1) * 8);
  }
  return;
}



/* Entry: 10ae32150; end: 10ae321cf;  */

long * FUN_10ae32150(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((int)param_1[1] == 0) {
    return (long *)0x1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar2 = *param_1;
    func_0x000107c2b35c(lVar2,lVar2,(long)(int)param_1[1],param_2);
    if (lVar2 != 0) {
      plVar3 = param_1;
      func_0x000107c2b2fc(param_1,(long)(int)param_1[1] + 1);
      if ((int)plVar3 == 0) {
        return plVar3;
      }
      lVar1 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar1 + 1;
      *(long *)(*param_1 + (long)(int)lVar1 * 8) = lVar2;
    }
  }
  return (long *)0x1;
}



/* Entry: 10ae321d0; end: 10ae3251b;  */

/* WARNING: Possible PIC construction at 0x00010ae32590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae3263c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae32640) */
/* WARNING: Removing unreachable block (ram,0x00010ae32594) */
/* WARNING: Removing unreachable block (ram,0x00010ae32648) */
/* WARNING: Removing unreachable block (ram,0x00010ae3264c) */
/* WARNING: Removing unreachable block (ram,0x00010ae326a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae32598) */
/* WARNING: Removing unreachable block (ram,0x00010ae326a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae325b0) */

ulong * FUN_10ae321d0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  bool bVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  undefined1 *puVar29;
  ulong *puVar30;
  long *plVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong *puVar39;
  ulong *puVar40;
  long lVar41;
  long lVar42;
  undefined1 auStack_158 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)param_2[1];
  puVar40 = (ulong *)(ulong)uVar2;
  puVar30 = param_3;
  if ((int)uVar2 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    puVar27 = (ulong *)0x1;
    goto LAB_10ae324bc;
  }
  puVar28 = param_2;
  func_0x000107c2b34c(param_3);
  puVar25 = param_1;
  if (param_2 == param_1) {
    puVar25 = param_3;
    func_0x000107c2b350();
  }
  puVar26 = param_3;
  func_0x000107c2b350();
  puVar27 = (ulong *)0x0;
  if ((puVar25 != (ulong *)0x0) && (puVar26 != (ulong *)0x0)) {
    puVar39 = (ulong *)((long)puVar40 << 1);
    puVar27 = puVar25;
    puVar28 = puVar39;
    func_0x000107c2b2fc();
    if ((int)puVar27 != 0) {
      if (uVar2 == 8) {
        puVar28 = (ulong *)*param_2;
        func_0x00010ae31480(*puVar25);
      }
      else if (uVar2 == 4) {
        plVar31 = (long *)*puVar25;
        param_2 = (ulong *)*param_2;
        uVar32 = *param_2;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar32;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar32;
        uVar34 = SUB168(auVar3 * auVar13,8);
        *plVar31 = uVar32 * uVar32;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *param_2;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = param_2[1];
        uVar35 = SUB168(auVar4 * auVar14,8);
        uVar33 = *param_2 * param_2[1];
        uVar32 = uVar33 + uVar34;
        uVar38 = uVar35;
        if (CARRY8(uVar33,uVar34)) {
          uVar38 = uVar35 + 1;
        }
        if (CARRY8(uVar32,uVar33)) {
          uVar35 = uVar35 + 1;
        }
        plVar31[1] = uVar32 + uVar33;
        uVar34 = param_2[1];
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar34;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar34;
        uVar33 = SUB168(auVar5 * auVar15,8);
        uVar32 = uVar34 * uVar34 + uVar35 + uVar38;
        if (CARRY8(uVar34 * uVar34,uVar35 + uVar38)) {
          uVar33 = uVar33 + 1;
        }
        bVar24 = CARRY8(uVar33,(ulong)CARRY8(uVar35,uVar38));
        uVar33 = uVar33 + CARRY8(uVar35,uVar38);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *param_2;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = param_2[2];
        uVar34 = SUB168(auVar6 * auVar16,8);
        uVar36 = *param_2 * param_2[2];
        uVar38 = uVar32 + uVar36;
        uVar35 = uVar34;
        if (CARRY8(uVar32,uVar36)) {
          uVar35 = uVar34 + 1;
        }
        uVar32 = 1;
        if (bVar24) {
          uVar32 = 2;
        }
        uVar37 = uVar33 + uVar35;
        if (!CARRY8(uVar33,uVar35)) {
          uVar32 = (ulong)bVar24;
        }
        if (CARRY8(uVar38,uVar36)) {
          uVar34 = uVar34 + 1;
        }
        plVar31[2] = uVar38 + uVar36;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *param_2;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = param_2[3];
        puVar28 = SUB168(auVar7 * auVar17,8);
        uVar35 = *param_2 * param_2[3];
        uVar38 = uVar35 + uVar37 + uVar34;
        puVar40 = puVar28;
        if (CARRY8(uVar35,uVar37 + uVar34)) {
          puVar40 = (ulong *)((long)puVar28 + 1);
        }
        bVar24 = CARRY8((long)puVar40 + uVar32,(ulong)CARRY8(uVar37,uVar34));
        uVar34 = (long)puVar40 + CARRY8(uVar37,uVar34) + uVar32;
        uVar33 = uVar38 + uVar35;
        puVar27 = puVar28;
        if (CARRY8(uVar38,uVar35)) {
          puVar27 = (ulong *)((long)puVar28 + 1);
        }
        uVar38 = 1;
        if (CARRY8((ulong)puVar40,uVar32) || bVar24) {
          uVar38 = 2;
        }
        uVar35 = uVar34 + (long)puVar27;
        if (!CARRY8(uVar34,(ulong)puVar27)) {
          uVar38 = (ulong)(CARRY8((ulong)puVar40,uVar32) || bVar24);
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_2[1];
        auVar18._8_8_ = 0;
        auVar18._0_8_ = param_2[2];
        uVar36 = SUB168(auVar8 * auVar18,8);
        uVar37 = param_2[1] * param_2[2];
        uVar32 = uVar33 + uVar37;
        uVar34 = uVar36;
        if (CARRY8(uVar33,uVar37)) {
          uVar34 = uVar36 + 1;
        }
        uVar33 = uVar35 + uVar34;
        if (CARRY8(uVar32,uVar37)) {
          uVar36 = uVar36 + 1;
        }
        uVar1 = uVar33 + uVar36;
        uVar33 = uVar38 + CARRY8(uVar35,uVar34) + (ulong)CARRY8(uVar33,uVar36);
        plVar31[3] = uVar32 + uVar37;
        uVar35 = param_2[2];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar35;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        uVar38 = SUB168(auVar9 * auVar19,8);
        uVar32 = uVar35 * uVar35 + uVar1;
        if (CARRY8(uVar35 * uVar35,uVar1)) {
          uVar38 = uVar38 + 1;
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2[1];
        auVar20._8_8_ = 0;
        auVar20._0_8_ = param_2[3];
        uVar36 = SUB168(auVar10 * auVar20,8);
        uVar37 = param_2[1] * param_2[3];
        uVar35 = uVar32 + uVar37;
        uVar34 = uVar36;
        if (CARRY8(uVar32,uVar37)) {
          uVar34 = uVar36 + 1;
        }
        uVar32 = 2;
        if (!CARRY8(uVar33,uVar38)) {
          uVar32 = 1;
        }
        uVar1 = uVar33 + uVar38 + uVar34;
        if (!CARRY8(uVar33 + uVar38,uVar34)) {
          uVar32 = (ulong)CARRY8(uVar33,uVar38);
        }
        if (CARRY8(uVar35,uVar37)) {
          uVar36 = uVar36 + 1;
        }
        plVar31[4] = uVar35 + uVar37;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = param_2[2];
        auVar21._8_8_ = 0;
        auVar21._0_8_ = param_2[3];
        uVar33 = SUB168(auVar11 * auVar21,8);
        uVar34 = param_2[2] * param_2[3];
        uVar38 = uVar34 + uVar1 + uVar36;
        uVar35 = uVar33;
        if (CARRY8(uVar34,uVar1 + uVar36)) {
          uVar35 = uVar33 + 1;
        }
        bVar24 = CARRY8(uVar35 + uVar32,(ulong)CARRY8(uVar1,uVar36));
        uVar36 = uVar35 + uVar32 + (ulong)CARRY8(uVar1,uVar36);
        if (CARRY8(uVar38,uVar34)) {
          uVar33 = uVar33 + 1;
        }
        uVar37 = 1;
        if (CARRY8(uVar35,uVar32) || bVar24) {
          uVar37 = 2;
        }
        uVar1 = uVar36 + uVar33;
        if (!CARRY8(uVar36,uVar33)) {
          uVar37 = (ulong)(CARRY8(uVar35,uVar32) || bVar24);
        }
        plVar31[5] = uVar38 + uVar34;
        uVar32 = param_2[3];
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar32;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar32;
        plVar31[6] = uVar32 * uVar32 + uVar1;
        plVar31[7] = uVar37 + SUB168(auVar12 * auVar22,8) + (ulong)CARRY8(uVar32 * uVar32,uVar1);
      }
      else {
        if (0xf < uVar2) {
          puVar27 = puVar26;
          if ((uVar2 & uVar2 - 1) == 0) {
            puVar28 = (ulong *)(ulong)(uVar2 << 2);
            func_0x000107c2b2fc();
            if ((int)puVar27 != 0) {
              puVar28 = (ulong *)*param_2;
              func_0x00010ae326a8(*puVar25,puVar28,puVar40,*puVar26);
              puVar30 = puVar40;
              goto LAB_10ae3247c;
            }
          }
          else {
            puVar28 = puVar39;
            func_0x000107c2b2fc();
            if ((int)puVar27 != 0) {
              uVar32 = *puVar25;
              puVar28 = (ulong *)*param_2;
              puVar29 = (undefined1 *)*puVar26;
              goto LAB_10ae32474;
            }
          }
          goto LAB_10ae324a0;
        }
        uVar32 = *puVar25;
        puVar28 = (ulong *)*param_2;
        puVar29 = auStack_158;
LAB_10ae32474:
        FUN_10ae3251c(uVar32,puVar28,puVar40,puVar29);
        puVar30 = puVar40;
      }
LAB_10ae3247c:
      *(undefined4 *)(puVar25 + 2) = 0;
      *(int *)(puVar25 + 1) = (int)puVar39;
      if (puVar25 != param_1) {
        func_0x000107c2b324();
        puVar27 = (ulong *)0x0;
        puVar28 = puVar25;
        if (param_1 == (ulong *)0x0) goto LAB_10ae324a0;
      }
      puVar27 = (ulong *)0x1;
    }
  }
LAB_10ae324a0:
  param_2 = puVar28;
  if ((char)param_3[5] == '\0') {
    uVar32 = param_3[2];
    param_3[2] = uVar32 - 1;
    param_3[4] = *(ulong *)(param_3[1] + (uVar32 - 1) * 8);
  }
LAB_10ae324bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar27;
  }
  ___stack_chk_fail();
  if (puVar30 != (ulong *)0x0) {
    uVar32 = (long)puVar30 << 1;
    puVar27[(long)puVar30 * 2 + -1] = 0;
    *puVar27 = 0;
    if ((long)puVar30 + -1 != 0) {
      puVar40 = puVar27 + 1;
      func_0x000107c2b35c(puVar40,param_2 + 1,(long)puVar30 + -1,*param_2);
      puVar27[(long)puVar30] = (ulong)puVar40;
      if ((ulong *)0x2 < puVar30) {
        lVar42 = 0;
        lVar41 = (long)puVar30 + -2;
        puVar40 = puVar27 + 3;
        do {
          puVar25 = puVar40;
          func_0x000107c2b39c(puVar40,(long)param_2 + lVar42 + 0x10,lVar41,
                              *(undefined8 *)((long)param_2 + lVar42 + 8));
          *(ulong **)((long)puVar27 + lVar42 + (long)puVar30 * 8 + 8) = puVar25;
          puVar40 = puVar40 + 2;
          lVar41 = lVar41 + -1;
          lVar42 = lVar42 + 8;
        } while ((long)puVar30 * 8 + -0x10 != lVar42);
      }
    }
    if (uVar32 == 0) {
      puVar30 = (ulong *)0x0;
    }
    else {
      puVar40 = puVar27;
      puVar25 = puVar27;
      if (uVar32 < 4) {
        puVar30 = (ulong *)0x0;
      }
      else {
        puVar30 = (ulong *)0x0;
        do {
          uVar38 = (long)puVar30 + *puVar40;
          uVar35 = (ulong)CARRY8((ulong)puVar30,*puVar40);
          if (CARRY8(uVar38,*puVar25)) {
            uVar35 = uVar35 + 1;
          }
          *puVar27 = uVar38 + *puVar25;
          uVar33 = puVar40[1];
          uVar34 = puVar25[1];
          uVar38 = uVar35 + uVar33;
          puVar27[1] = uVar38 + uVar34;
          uVar36 = (ulong)CARRY8(puVar25[2],puVar40[2]);
          uVar23 = nzcv;
          puVar27[2] = puVar25[2] + puVar40[2] + (ulong)CARRY8(uVar35,uVar33) +
                       (ulong)CARRY8(uVar38,uVar34);
          bVar24 = CARRY8(puVar25[3],puVar40[3]);
          uVar38 = puVar25[3] + puVar40[3];
          puVar30 = (ulong *)(ulong)bVar24;
          nzcv = uVar23;
          if (CARRY8(uVar38,uVar36) || CARRY8(uVar38 + uVar36,(ulong)bVar24)) {
            puVar30 = (ulong *)((long)puVar30 + 1);
          }
          puVar27[3] = uVar38 + uVar36 + (ulong)bVar24;
          puVar40 = puVar40 + 4;
          puVar25 = puVar25 + 4;
          puVar27 = puVar27 + 4;
          uVar32 = uVar32 - 4;
        } while (3 < uVar32);
        if (uVar32 == 0) {
          return puVar30;
        }
      }
      do {
        uVar38 = (long)puVar30 + *puVar40;
        puVar30 = (ulong *)(ulong)CARRY8((ulong)puVar30,*puVar40);
        if (CARRY8(uVar38,*puVar25)) {
          puVar30 = (ulong *)((long)puVar30 + 1);
        }
        *puVar27 = uVar38 + *puVar25;
        uVar32 = uVar32 - 1;
        puVar27 = puVar27 + 1;
        puVar40 = puVar40 + 1;
        puVar25 = puVar25 + 1;
      } while (uVar32 != 0);
    }
    return puVar30;
  }
  return puVar27;
}



/* Entry: 10ae3251c; end: 10ae329f3;  */

/* WARNING: Possible PIC construction at 0x00010ae32590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae3263c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae32640) */
/* WARNING: Removing unreachable block (ram,0x00010ae32594) */
/* WARNING: Removing unreachable block (ram,0x00010ae32648) */
/* WARNING: Removing unreachable block (ram,0x00010ae3264c) */
/* WARNING: Removing unreachable block (ram,0x00010ae326a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae32598) */
/* WARNING: Removing unreachable block (ram,0x00010ae326a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae325b0) */

ulong * FUN_10ae3251c(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  if (param_3 == 0) {
    return param_1;
  }
  uVar11 = param_3 << 1;
  param_1[param_3 * 2 + -1] = 0;
  *param_1 = 0;
  if (param_3 - 1 != 0) {
    puVar7 = param_1 + 1;
    func_0x000107c2b35c(puVar7,param_2 + 1,param_3 - 1,*param_2);
    param_1[param_3] = (ulong)puVar7;
    if (2 < param_3) {
      lVar13 = 0;
      lVar12 = param_3 - 2;
      puVar7 = param_1 + 3;
      do {
        puVar5 = puVar7;
        func_0x000107c2b39c(puVar7,(long)param_2 + lVar13 + 0x10,lVar12,
                            *(undefined8 *)((long)param_2 + lVar13 + 8));
        *(ulong **)((long)param_1 + lVar13 + param_3 * 8 + 8) = puVar5;
        puVar7 = puVar7 + 2;
        lVar12 = lVar12 + -1;
        lVar13 = lVar13 + 8;
      } while (param_3 * 8 + -0x10 != lVar13);
    }
  }
  if (uVar11 == 0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    puVar5 = param_1;
    puVar6 = param_1;
    if (uVar11 < 4) {
      puVar7 = (ulong *)0x0;
    }
    else {
      puVar7 = (ulong *)0x0;
      do {
        uVar1 = (long)puVar7 + *puVar5;
        uVar2 = (ulong)CARRY8((ulong)puVar7,*puVar5);
        if (CARRY8(uVar1,*puVar6)) {
          uVar2 = uVar2 + 1;
        }
        *param_1 = uVar1 + *puVar6;
        uVar8 = puVar5[1];
        uVar9 = puVar6[1];
        uVar1 = uVar2 + uVar8;
        param_1[1] = uVar1 + uVar9;
        uVar10 = (ulong)CARRY8(puVar6[2],puVar5[2]);
        uVar3 = nzcv;
        param_1[2] = puVar6[2] + puVar5[2] + (ulong)CARRY8(uVar2,uVar8) + (ulong)CARRY8(uVar1,uVar9)
        ;
        bVar4 = CARRY8(puVar6[3],puVar5[3]);
        uVar1 = puVar6[3] + puVar5[3];
        puVar7 = (ulong *)(ulong)bVar4;
        nzcv = uVar3;
        if (CARRY8(uVar1,uVar10) || CARRY8(uVar1 + uVar10,(ulong)bVar4)) {
          puVar7 = (ulong *)((long)puVar7 + 1);
        }
        param_1[3] = uVar1 + uVar10 + (ulong)bVar4;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 4;
        param_1 = param_1 + 4;
        uVar11 = uVar11 - 4;
      } while (3 < uVar11);
      if (uVar11 == 0) {
        return puVar7;
      }
    }
    do {
      uVar1 = (long)puVar7 + *puVar5;
      puVar7 = (ulong *)(ulong)CARRY8((ulong)puVar7,*puVar5);
      if (CARRY8(uVar1,*puVar6)) {
        puVar7 = (ulong *)((long)puVar7 + 1);
      }
      *param_1 = uVar1 + *puVar6;
      uVar11 = uVar11 - 1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar11 != 0);
  }
  return puVar7;
}



/* Entry: 10ae329f4; end: 10ae32c03;  */

/* WARNING: Possible PIC construction at 0x00010ae32a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae32a88) */
/* WARNING: Removing unreachable block (ram,0x00010ae32a8c) */
/* WARNING: Removing unreachable block (ram,0x00010ae32b9c) */
/* WARNING: Removing unreachable block (ram,0x00010ae32a9c) */
/* WARNING: Removing unreachable block (ram,0x00010ae32ac4) */
/* WARNING: Removing unreachable block (ram,0x00010ae32aec) */
/* WARNING: Removing unreachable block (ram,0x00010ae32afc) */
/* WARNING: Removing unreachable block (ram,0x00010ae32b1c) */
/* WARNING: Removing unreachable block (ram,0x00010ae32b3c) */
/* WARNING: Removing unreachable block (ram,0x00010ae32b5c) */
/* WARNING: Removing unreachable block (ram,0x00010ae32b98) */
/* WARNING: Removing unreachable block (ram,0x00010ae32ba0) */
/* WARNING: Removing unreachable block (ram,0x00010ae32bb4) */
/* WARNING: Removing unreachable block (ram,0x00010ae32bd4) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10ae329f4(long *param_1,long param_2,long *param_3,ulong *param_4,int param_5,
                     long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined2 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  bool bVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined4 uVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  long *plVar34;
  ulong *puVar35;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong auStack_c8 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  ulong uStack_a0;
  long lStack_98;
  
  plVar3 = param_3;
  plVar34 = param_3;
  func_0x000107c2b350();
  *param_1 = (long)plVar3;
  plVar3 = param_3;
  func_0x000107c2b350();
  param_1[1] = (long)plVar3;
  plVar3 = param_3;
  func_0x000107c2b350();
  param_1[2] = (long)plVar3;
  func_0x000107c2b350();
  param_1[3] = (long)param_3;
  puVar29 = (ulong *)*param_1;
  if ((((puVar29 == (ulong *)0x0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
     (param_3 == (long *)0x0)) {
    return (ulong *)0x0;
  }
  puVar4 = (undefined4 *)0x113310e10;
  puVar7 = (ulong *)&UNK_10041134c;
  _pthread_once();
  if ((int)puVar4 == 0) {
    uVar20 = *(uint *)(param_2 + 0x20);
    uVar33 = uRam00000001137ed650;
    if (((int)uVar20 < (int)uRam00000001137ed650) &&
       (uVar33 = uVar20, uVar20 < uRam00000001137ed650)) {
      uVar24 = 0;
      lVar26 = (long)(int)uRam00000001137ed650 - (long)(int)uVar20;
      puVar7 = (ulong *)(lRam00000001137ed648 + (long)(int)uVar20 * 8);
      do {
        uVar24 = *puVar7 | uVar24;
        lVar26 = lVar26 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar26 != 0);
      if (uVar24 != 0) {
        uVar19 = 0xe8;
        goto code_r0x000100411b60;
      }
    }
    puVar7 = puVar29;
    func_0x000100202744();
    if ((int)puVar7 == 0) {
      return puVar7;
    }
    uVar24 = *puVar29;
    lVar26 = (long)(int)uVar33;
    func_0x00010022673c(uVar24,*(long *)(param_2 + 0x18),lRam00000001137ed648,lVar26);
    iVar2 = *(int *)(param_2 + 0x20);
    if ((int)uVar33 < iVar2) {
      lVar25 = iVar2 - lVar26;
      plVar3 = (long *)(*puVar29 + lVar26 * 8);
      puVar7 = (ulong *)(*(long *)(param_2 + 0x18) + lVar26 * 8);
      do {
        uVar27 = *puVar7;
        *plVar3 = uVar27 - uVar24;
        uVar24 = (ulong)(uVar27 < uVar24);
        lVar25 = lVar25 + -1;
        plVar3 = plVar3 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar25 != 0);
    }
    if (uVar24 == 0) {
      *(int *)(puVar29 + 1) = iVar2;
      *(undefined4 *)(puVar29 + 2) = 0;
      return (ulong *)0x1;
    }
    uVar19 = 0xfb;
code_r0x000100411b60:
    func_0x0001004d2c58(3,0,100,&UNK_10f6c6632,uVar19);
    return (ulong *)0x0;
  }
  _abort();
  *puVar4 = 0;
  puVar5 = (undefined4 *)0x113310e10;
  puVar18 = (undefined8 *)&UNK_10041134c;
  plVar3 = plVar34;
  _pthread_once();
  if ((int)puVar5 == 0) {
    puVar29 = puVar7;
    func_0x000107c2b340(puVar7,0x1137ed648);
    if ((int)puVar29 < 1) {
      return (ulong *)0x1;
    }
    if ((0 < (int)puVar7[1]) && ((*(byte *)*puVar7 & 1) != 0)) {
      puVar29 = puVar7;
      func_0x00010ae2e380(puVar7,3);
      if ((int)puVar29 != 0) {
        *puVar4 = 1;
        return (ulong *)0x1;
      }
      if (param_5 != 0) {
        puVar29 = auStack_c8;
        func_0x00010ae3287c(puVar29,puVar7);
        if ((int)puVar29 != 0) goto LAB_10ae32c90;
        if (param_6 != 0) {
          puVar29 = (ulong *)0x1;
          (**(code **)(param_6 + 8))(1,0xffffffff,param_6);
          if ((int)puVar29 == 0) {
            return (ulong *)0x0;
          }
        }
      }
      if ((int)plVar34 == 0) {
        puVar29 = puVar7;
        func_0x000107c2b32c();
        iVar2 = (int)puVar29;
        if (iVar2 < 0xea3) {
          if (iVar2 < 0x541) {
            if (iVar2 < 0x1dc) {
              if (iVar2 < 400) {
                if (iVar2 < 0x15b) {
                  if (iVar2 < 0x134) {
                    uVar20 = 0x1b;
                    if (iVar2 < 0x37) {
                      uVar20 = 0x22;
                    }
                    plVar34 = (long *)(ulong)uVar20;
                  }
                  else {
                    plVar34 = (long *)0x8;
                  }
                }
                else {
                  plVar34 = (long *)0x7;
                }
              }
              else {
                plVar34 = (long *)0x6;
              }
            }
            else {
              plVar34 = (long *)0x5;
            }
          }
          else {
            plVar34 = (long *)0x4;
          }
        }
        else {
          plVar34 = (long *)0x3;
        }
      }
      if (param_4 == (ulong *)0x0) {
        func_0x000107c2b344();
        puVar30 = puVar29;
        if (puVar29 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
      }
      else {
        puVar29 = param_4;
        puVar30 = (ulong *)0x0;
      }
      func_0x000107c2b34c(puVar29);
      puVar6 = puVar29;
      func_0x000107c2b350();
      func_0x00010ae2ed3c(puVar7,puVar29);
      puVar35 = (ulong *)0x0;
      if ((puVar6 != (ulong *)0x0) && (puVar7 != (ulong *)0x0)) {
        puVar8 = (undefined2 *)auStack_c8;
        FUN_10ae329f4(puVar8,puVar7,puVar29);
        if ((int)puVar8 == 0) {
          puVar35 = (ulong *)0x0;
        }
        else {
          uVar24 = 0;
          puVar18 = (undefined8 *)CONCAT62(auStack_c8[0]._2_6_,(undefined2)auStack_c8[0]);
          uVar20 = 1;
          do {
            plVar3 = &lStack_98;
            func_0x000107c34f7c(plVar3,&uStack_a0,2,*puVar18,(long)*(int *)(puVar18 + 1));
            lVar26 = lStack_98;
            if (((int)plVar3 == 0) ||
               (puVar35 = puVar6, func_0x000107c2b2fc(puVar6,lStack_98), uVar27 = uStack_a0,
               (int)puVar35 == 0)) {
LAB_10ae330d4:
              puVar35 = (ulong *)0x0;
              goto LAB_10ae330dc;
            }
            if (lVar26 == 1 && uStack_a0 < 4) {
              func_0x000107c2b29c(3,0,0x6c,&UNK_10f6c6b8c,0x137);
              goto LAB_10ae330d4;
            }
            func_0x000107c2b3c4(*puVar6,lVar26 << 3,&UNK_10e525a20);
            puVar31 = (ulong *)*puVar6;
            puVar31[lVar26 + -1] = puVar31[lVar26 + -1] & uVar27;
            puVar35 = puVar31;
            func_0x000107c2b3bc(puVar31,2,*puVar18,lVar26);
            uVar22 = ((ulong)puVar35 & 0xffffffff) - 1;
            *puVar31 = *puVar31 | uVar22 & 2;
            puVar31[lVar26 + -1] =
                 puVar31[lVar26 + -1] & (uVar22 & uVar27 >> 1 | -((ulong)puVar35 & 0xffffffff));
            *(undefined4 *)(puVar6 + 2) = 0;
            *(int *)(puVar6 + 1) = (int)lVar26;
            func_0x000107c2b34c(puVar29);
            puVar31 = puVar29;
            func_0x000107c2b350();
            if (puVar31 == (ulong *)0x0) {
              bVar1 = true;
              bVar23 = true;
            }
            else {
              puVar9 = puVar31;
              FUN_10ae2f2b4();
              if (((int)puVar9 == 0) ||
                 (puVar9 = puVar31, func_0x000107c2b37c(puVar31,puVar31,puVar7,puVar7,puVar29),
                 (int)puVar9 == 0)) {
                bVar1 = true;
                bVar23 = true;
              }
              else {
                puVar9 = puVar31;
                func_0x00010ae2e3dc(puVar31,uStack_b8);
                puVar10 = puVar31;
                func_0x00010ae2e3dc(puVar31,uStack_b0);
                uVar27 = -(ulong)((uint)puVar10 | (uint)puVar9);
                if (1 < iStack_a8) {
                  iVar2 = 2;
                  while (iVar2 - iStack_a4 != 1 || uVar27 == 0xffffffffffffffff) {
                    puVar9 = puVar31;
                    func_0x000107c2b37c(puVar31,puVar31,puVar31,puVar7,puVar29);
                    if ((int)puVar9 == 0) {
                      bVar1 = true;
                      bVar23 = true;
                      goto LAB_10ae33024;
                    }
                    puVar9 = puVar31;
                    func_0x00010ae2e3dc(puVar31,uStack_b0);
                    uVar27 = uVar27 | -((ulong)puVar9 & 0xffffffff);
                    puVar9 = puVar31;
                    func_0x00010ae2e3dc(puVar31,uStack_b8);
                    if ((((ulong)puVar9 & 0xffffffff & (uVar27 ^ 0xffffffffffffffff)) != 0) ||
                       (bVar1 = iStack_a8 <= iVar2, iVar2 = iVar2 + 1, bVar1)) break;
                  }
                }
                bVar23 = false;
                bVar1 = (uVar27 & 1) == 0;
              }
            }
LAB_10ae33024:
            if ((char)puVar29[5] == '\0') {
              uVar27 = puVar29[2];
              puVar29[2] = uVar27 - 1;
              puVar29[4] = *(ulong *)(puVar29[1] + (uVar27 - 1) * 8);
            }
            if (bVar23) goto LAB_10ae330d4;
            if (bVar1) {
              *puVar4 = 0;
              puVar35 = (ulong *)0x1;
              goto LAB_10ae330dc;
            }
            if (param_6 != 0) {
              iVar2 = 1;
              (**(code **)(param_6 + 8))(1,uVar20 - 1,param_6);
              if (iVar2 == 0) goto LAB_10ae330d4;
            }
            uVar24 = uVar24 + ((ulong)puVar35 & 0xffffffff);
            bVar1 = uVar20 < 0x10;
            uVar20 = uVar20 + 1;
          } while (bVar1 || (long)((uVar24 - (long)(int)plVar34 ^ uVar24 |
                                   uVar24 ^ (long)(int)plVar34) ^ uVar24) < 0);
          puVar35 = (ulong *)0x1;
          *puVar4 = 1;
        }
      }
LAB_10ae330dc:
      func_0x000107c2b384(puVar7);
      if ((char)puVar29[5] == '\0') {
        uVar24 = puVar29[2];
        puVar29[2] = uVar24 - 1;
        puVar29[4] = *(ulong *)(puVar29[1] + (uVar24 - 1) * 8);
      }
      func_0x000107c2b348(puVar30);
      return puVar35;
    }
    auStack_c8[0]._0_2_ = 2;
LAB_10ae32c90:
    func_0x00010ae2e380(puVar7,(undefined2)auStack_c8[0]);
    *puVar4 = (int)puVar7;
    return (ulong *)0x1;
  }
  _abort();
  if ((*(int *)(puVar18 + 1) < 1) || ((*(byte *)*puVar18 & 1) == 0)) {
LAB_10ae331bc:
    func_0x000107c2b29c(3,0,0x77,&UNK_10f6c6b10,0x326);
    return (ulong *)0x0;
  }
  uStack_198 = 3;
  uStack_1a0 = 0x200000000;
  puStack_1b0 = &uStack_198;
  uStack_1a8 = 0x100000001;
  puVar32 = puVar18;
  func_0x000107c2b340(puVar18,&puStack_1b0);
  if ((int)puVar32 < 1) goto LAB_10ae331bc;
  puVar32 = puVar18;
  func_0x000107c2b32c();
  iVar2 = (int)puVar32;
  if (iVar2 < 0xea3) {
    if (iVar2 < 0x541) {
      if (iVar2 < 0x1dc) {
        if (iVar2 < 400) {
          if (iVar2 < 0x15b) {
            if (iVar2 < 0x134) {
              iVar21 = 0x1b;
              if (iVar2 < 0x37) {
                iVar21 = 0x22;
              }
            }
            else {
              iVar21 = 8;
            }
          }
          else {
            iVar21 = 7;
          }
        }
        else {
          iVar21 = 6;
        }
      }
      else {
        iVar21 = 5;
      }
    }
    else {
      iVar21 = 4;
    }
  }
  else {
    iVar21 = 3;
  }
  func_0x000107c2b34c(plVar3);
  plVar34 = plVar3;
  func_0x000107c2b350();
  if (((plVar34 == (long *)0x0) ||
      (plVar11 = plVar34, func_0x000107c2b324(), plVar11 == (long *)0x0)) ||
     (plVar11 = plVar34, FUN_10ae2e0a8(plVar34,1), (int)plVar11 == 0)) {
LAB_10ae3354c:
    puVar32 = (undefined8 *)0x0;
  }
  else {
    uVar24 = 0xffffffff;
    do {
      do {
        uVar27 = uVar24;
        iVar2 = (int)uVar27;
        uVar20 = iVar2 + 1;
        uVar24 = (ulong)uVar20;
        uVar20 = uVar20 >> 6;
      } while (*(uint *)(plVar34 + 1) <= uVar20);
    } while ((*(ulong *)(*plVar34 + (ulong)uVar20 * 8) >> (uVar24 & 0x3f) & 1) == 0);
    plVar11 = plVar3;
    func_0x000107c2b350();
    puVar32 = (undefined8 *)0x0;
    if (plVar11 != (long *)0x0) {
      uVar20 = iVar2 + 1;
      plVar12 = plVar11;
      func_0x000107c2b360(plVar11,plVar34,uVar20);
      if ((int)plVar12 == 0) goto LAB_10ae3354c;
      plVar12 = plVar3;
      func_0x000107c2b350();
      plVar13 = plVar3;
      func_0x000107c2b350();
      plVar14 = plVar3;
      func_0x000107c2b350();
      plVar15 = plVar3;
      func_0x000107c2b350();
      plVar16 = plVar3;
      func_0x000107c2b350();
      puVar29 = (ulong *)0x0;
      puVar32 = (undefined8 *)0x0;
      if (((plVar12 == (long *)0x0) || (plVar13 == (long *)0x0)) ||
         ((plVar14 == (long *)0x0 || ((plVar15 == (long *)0x0 || (plVar16 == (long *)0x0))))))
      goto LAB_10ae33554;
      puVar32 = puVar18;
      func_0x000107c2b390(puVar18,plVar3);
      if (puVar32 != (undefined8 *)0x0) {
        iVar2 = 1;
        do {
          plVar17 = plVar12;
          func_0x000107c2b394(plVar12,2,plVar34);
          if (((int)plVar17 == 0) ||
             (plVar17 = plVar13, FUN_10ae306c8(plVar13,plVar12,puVar18,plVar3), (int)plVar17 == 0))
          goto LAB_10ae33550;
          uVar28 = 1;
          uStack_1a0 = 0x200000000;
          uStack_198 = 1;
          puStack_1b0 = &uStack_198;
          uStack_1a8 = 0x100000001;
          plVar17 = plVar13;
          func_0x000107c2b340(plVar13,&puStack_1b0);
          if (0 < (int)plVar17) goto LAB_10ae33580;
          plVar17 = plVar14;
          func_0x000107c2b374(plVar14,plVar12,plVar11,puVar18,plVar3,puVar32);
          if ((int)plVar17 == 0) goto LAB_10ae33550;
          plVar17 = plVar14;
          func_0x00010ae2e32c();
          if (((int)plVar17 == 0) &&
             (plVar17 = plVar14, func_0x000107c2b340(plVar14,plVar34), (int)plVar17 != 0)) {
            uVar24 = uVar27;
            if (uVar20 < 2) {
LAB_10ae33490:
              plVar34 = plVar15;
              func_0x000107c2b324(plVar15,plVar14);
              if (((plVar34 == (long *)0x0) ||
                  (plVar34 = plVar14, func_0x00010ae2ea80(plVar14,plVar15,plVar15,puVar18,plVar3),
                  (int)plVar34 == 0)) ||
                 ((plVar34 = plVar14, func_0x00010ae2e32c(), (int)plVar34 == 0 &&
                  (plVar34 = plVar15, func_0x000107c2b324(plVar15,plVar14), plVar34 == (long *)0x0))
                 )) goto LAB_10ae33550;
LAB_10ae334d8:
              plVar34 = plVar16;
              func_0x000107c2b324(plVar16,plVar15);
              if (((plVar34 == (long *)0x0) ||
                  (plVar34 = plVar16, FUN_10ae2e0a8(plVar16,1), (int)plVar34 == 0)) ||
                 (plVar34 = plVar13, FUN_10ae306c8(plVar13,plVar16,puVar18,plVar3),
                 (int)plVar34 == 0)) goto LAB_10ae33550;
              uStack_1a0 = 0x200000000;
              uStack_198 = 1;
              puStack_1b0 = &uStack_198;
              uStack_1a8 = 0x100000001;
              func_0x000107c2b340(plVar13,&puStack_1b0);
              uVar28 = 1;
              if ((int)plVar13 < 1) {
                uVar28 = 2;
              }
              goto LAB_10ae33580;
            }
            while( true ) {
              plVar17 = plVar15;
              func_0x000107c2b324(plVar15,plVar14);
              if ((plVar17 == (long *)0x0) ||
                 (plVar17 = plVar14, func_0x00010ae2ea80(plVar14,plVar15,plVar15,puVar18,plVar3),
                 (int)plVar17 == 0)) goto LAB_10ae33550;
              plVar17 = plVar14;
              func_0x000107c2b340(plVar14,plVar34);
              if ((int)plVar17 == 0) break;
              plVar17 = plVar14;
              func_0x00010ae2e32c();
              if ((int)plVar17 != 0) goto LAB_10ae334d8;
              uVar33 = (int)uVar24 - 1;
              uVar24 = (ulong)uVar33;
              if (uVar33 == 0) goto LAB_10ae33490;
            }
          }
          bVar1 = iVar2 != iVar21;
          iVar2 = iVar2 + 1;
        } while (bVar1);
        uVar28 = 0;
LAB_10ae33580:
        *puVar5 = uVar28;
        puVar29 = (ulong *)0x1;
        goto LAB_10ae33554;
      }
    }
  }
LAB_10ae33550:
  puVar29 = (ulong *)0x0;
LAB_10ae33554:
  func_0x000107c2b384(puVar32);
  if ((char)plVar3[5] == '\0') {
    lVar26 = plVar3[2];
    plVar3[2] = lVar26 + -1;
    plVar3[4] = *(long *)(plVar3[1] + (lVar26 + -1) * 8);
    return puVar29;
  }
  return puVar29;
}



/* Entry: 10ae32c04; end: 10ae33127;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10ae32c04(undefined4 *param_1,ulong *param_2,long *param_3,ulong *param_4,int param_5,
             long param_6)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined2 *puVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  bool bVar25;
  undefined4 uVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong auStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  ulong uStack_70;
  long lStack_68;
  
  *param_1 = 0;
  puVar5 = (undefined4 *)0x113310e10;
  puVar21 = (undefined8 *)&UNK_10041134c;
  plVar9 = param_3;
  _pthread_once();
  if ((int)puVar5 == 0) {
    puVar6 = param_2;
    func_0x000107c2b340(param_2,0x1137ed648);
    if ((int)puVar6 < 1) {
      return 1;
    }
    if ((0 < (int)param_2[1]) && ((*(byte *)*param_2 & 1) != 0)) {
      puVar6 = param_2;
      func_0x00010ae2e380(param_2,3);
      if ((int)puVar6 != 0) {
        *param_1 = 1;
        return 1;
      }
      if (param_5 != 0) {
        puVar6 = auStack_98;
        func_0x00010ae3287c(puVar6,param_2);
        if ((int)puVar6 != 0) goto LAB_10ae32c90;
        if (param_6 != 0) {
          puVar6 = (ulong *)0x1;
          (**(code **)(param_6 + 8))(1,0xffffffff,param_6);
          if ((int)puVar6 == 0) {
            return 0;
          }
        }
      }
      if ((int)param_3 == 0) {
        puVar6 = param_2;
        func_0x000107c2b32c();
        iVar4 = (int)puVar6;
        if (iVar4 < 0xea3) {
          if (iVar4 < 0x541) {
            if (iVar4 < 0x1dc) {
              if (iVar4 < 400) {
                if (iVar4 < 0x15b) {
                  if (iVar4 < 0x134) {
                    uVar22 = 0x1b;
                    if (iVar4 < 0x37) {
                      uVar22 = 0x22;
                    }
                    param_3 = (long *)(ulong)uVar22;
                  }
                  else {
                    param_3 = (long *)0x8;
                  }
                }
                else {
                  param_3 = (long *)0x7;
                }
              }
              else {
                param_3 = (long *)0x6;
              }
            }
            else {
              param_3 = (long *)0x5;
            }
          }
          else {
            param_3 = (long *)0x4;
          }
        }
        else {
          param_3 = (long *)0x3;
        }
      }
      if (param_4 == (ulong *)0x0) {
        func_0x000107c2b344();
        puVar27 = puVar6;
        if (puVar6 == (ulong *)0x0) {
          return 0;
        }
      }
      else {
        puVar6 = param_4;
        puVar27 = (ulong *)0x0;
      }
      func_0x000107c2b34c(puVar6);
      puVar7 = puVar6;
      func_0x000107c2b350();
      func_0x00010ae2ed3c(param_2,puVar6);
      uVar31 = 0;
      if ((puVar7 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) {
        puVar8 = (undefined2 *)auStack_98;
        FUN_10ae329f4(puVar8,param_2,puVar6);
        if ((int)puVar8 == 0) {
          uVar31 = 0;
        }
        else {
          uVar32 = 0;
          puVar21 = (undefined8 *)CONCAT62(auStack_98[0]._2_6_,(undefined2)auStack_98[0]);
          uVar22 = 1;
          do {
            plVar9 = &lStack_68;
            func_0x000107c34f7c(plVar9,&uStack_70,2,*puVar21,(long)*(int *)(puVar21 + 1));
            lVar1 = lStack_68;
            if (((int)plVar9 == 0) ||
               (puVar10 = puVar7, func_0x000107c2b2fc(puVar7,lStack_68), uVar29 = uStack_70,
               (int)puVar10 == 0)) {
LAB_10ae330d4:
              uVar31 = 0;
              goto LAB_10ae330dc;
            }
            if (lVar1 == 1 && uStack_70 < 4) {
              func_0x000107c2b29c(3,0,0x6c,&UNK_10f6c6b8c,0x137);
              goto LAB_10ae330d4;
            }
            func_0x000107c2b3c4(*puVar7,lVar1 << 3,&UNK_10e525a20);
            puVar28 = (ulong *)*puVar7;
            puVar28[lVar1 + -1] = puVar28[lVar1 + -1] & uVar29;
            puVar10 = puVar28;
            func_0x000107c2b3bc(puVar28,2,*puVar21,lVar1);
            uVar24 = ((ulong)puVar10 & 0xffffffff) - 1;
            *puVar28 = *puVar28 | uVar24 & 2;
            puVar28[lVar1 + -1] =
                 puVar28[lVar1 + -1] & (uVar24 & uVar29 >> 1 | -((ulong)puVar10 & 0xffffffff));
            *(undefined4 *)(puVar7 + 2) = 0;
            *(int *)(puVar7 + 1) = (int)lVar1;
            func_0x000107c2b34c(puVar6);
            puVar28 = puVar6;
            func_0x000107c2b350();
            if (puVar28 == (ulong *)0x0) {
              bVar3 = true;
              bVar25 = true;
            }
            else {
              puVar11 = puVar28;
              FUN_10ae2f2b4();
              if (((int)puVar11 == 0) ||
                 (puVar11 = puVar28, func_0x000107c2b37c(puVar28,puVar28,param_2,param_2,puVar6),
                 (int)puVar11 == 0)) {
                bVar3 = true;
                bVar25 = true;
              }
              else {
                puVar11 = puVar28;
                func_0x00010ae2e3dc(puVar28,uStack_88);
                puVar12 = puVar28;
                func_0x00010ae2e3dc(puVar28,uStack_80);
                uVar29 = -(ulong)((uint)puVar12 | (uint)puVar11);
                if (1 < iStack_78) {
                  iVar4 = 2;
                  while (iVar4 - iStack_74 != 1 || uVar29 == 0xffffffffffffffff) {
                    puVar11 = puVar28;
                    func_0x000107c2b37c(puVar28,puVar28,puVar28,param_2,puVar6);
                    if ((int)puVar11 == 0) {
                      bVar3 = true;
                      bVar25 = true;
                      goto LAB_10ae33024;
                    }
                    puVar11 = puVar28;
                    func_0x00010ae2e3dc(puVar28,uStack_80);
                    uVar29 = uVar29 | -((ulong)puVar11 & 0xffffffff);
                    puVar11 = puVar28;
                    func_0x00010ae2e3dc(puVar28,uStack_88);
                    if ((((ulong)puVar11 & 0xffffffff & (uVar29 ^ 0xffffffffffffffff)) != 0) ||
                       (bVar3 = iStack_78 <= iVar4, iVar4 = iVar4 + 1, bVar3)) break;
                  }
                }
                bVar25 = false;
                bVar3 = (uVar29 & 1) == 0;
              }
            }
LAB_10ae33024:
            if ((char)puVar6[5] == '\0') {
              uVar29 = puVar6[2];
              puVar6[2] = uVar29 - 1;
              puVar6[4] = *(ulong *)(puVar6[1] + (uVar29 - 1) * 8);
            }
            if (bVar25) goto LAB_10ae330d4;
            if (bVar3) {
              *param_1 = 0;
              uVar31 = 1;
              goto LAB_10ae330dc;
            }
            if (param_6 != 0) {
              iVar4 = 1;
              (**(code **)(param_6 + 8))(1,uVar22 - 1,param_6);
              if (iVar4 == 0) goto LAB_10ae330d4;
            }
            uVar32 = uVar32 + ((ulong)puVar10 & 0xffffffff);
            bVar3 = uVar22 < 0x10;
            uVar22 = uVar22 + 1;
          } while (bVar3 || (long)((uVar32 - (long)(int)param_3 ^ uVar32 |
                                   uVar32 ^ (long)(int)param_3) ^ uVar32) < 0);
          uVar31 = 1;
          *param_1 = 1;
        }
      }
LAB_10ae330dc:
      func_0x000107c2b384(param_2);
      if ((char)puVar6[5] == '\0') {
        uVar32 = puVar6[2];
        puVar6[2] = uVar32 - 1;
        puVar6[4] = *(ulong *)(puVar6[1] + (uVar32 - 1) * 8);
      }
      func_0x000107c2b348(puVar27);
      return uVar31;
    }
    auStack_98[0]._0_2_ = 2;
LAB_10ae32c90:
    func_0x00010ae2e380(param_2,(undefined2)auStack_98[0]);
    *param_1 = (int)param_2;
    return 1;
  }
  _abort();
  if ((*(int *)(puVar21 + 1) < 1) || ((*(byte *)*puVar21 & 1) == 0)) {
LAB_10ae331bc:
    func_0x000107c2b29c(3,0,0x77,&UNK_10f6c6b10,0x326);
    return 0;
  }
  uStack_168 = 3;
  uStack_170 = 0x200000000;
  puStack_180 = &uStack_168;
  uStack_178 = 0x100000001;
  puVar30 = puVar21;
  func_0x000107c2b340(puVar21,&puStack_180);
  if ((int)puVar30 < 1) goto LAB_10ae331bc;
  puVar30 = puVar21;
  func_0x000107c2b32c();
  iVar4 = (int)puVar30;
  if (iVar4 < 0xea3) {
    if (iVar4 < 0x541) {
      if (iVar4 < 0x1dc) {
        if (iVar4 < 400) {
          if (iVar4 < 0x15b) {
            if (iVar4 < 0x134) {
              iVar23 = 0x1b;
              if (iVar4 < 0x37) {
                iVar23 = 0x22;
              }
            }
            else {
              iVar23 = 8;
            }
          }
          else {
            iVar23 = 7;
          }
        }
        else {
          iVar23 = 6;
        }
      }
      else {
        iVar23 = 5;
      }
    }
    else {
      iVar23 = 4;
    }
  }
  else {
    iVar23 = 3;
  }
  func_0x000107c2b34c(plVar9);
  plVar13 = plVar9;
  func_0x000107c2b350();
  if (((plVar13 == (long *)0x0) ||
      (plVar14 = plVar13, func_0x000107c2b324(), plVar14 == (long *)0x0)) ||
     (plVar14 = plVar13, FUN_10ae2e0a8(plVar13,1), (int)plVar14 == 0)) {
LAB_10ae3354c:
    puVar30 = (undefined8 *)0x0;
  }
  else {
    uVar32 = 0xffffffff;
    do {
      do {
        uVar29 = uVar32;
        iVar4 = (int)uVar29;
        uVar22 = iVar4 + 1;
        uVar32 = (ulong)uVar22;
        uVar22 = uVar22 >> 6;
      } while (*(uint *)(plVar13 + 1) <= uVar22);
    } while ((*(ulong *)(*plVar13 + (ulong)uVar22 * 8) >> (uVar32 & 0x3f) & 1) == 0);
    plVar14 = plVar9;
    func_0x000107c2b350();
    puVar30 = (undefined8 *)0x0;
    if (plVar14 != (long *)0x0) {
      uVar22 = iVar4 + 1;
      plVar15 = plVar14;
      func_0x000107c2b360(plVar14,plVar13,uVar22);
      if ((int)plVar15 == 0) goto LAB_10ae3354c;
      plVar15 = plVar9;
      func_0x000107c2b350();
      plVar16 = plVar9;
      func_0x000107c2b350();
      plVar17 = plVar9;
      func_0x000107c2b350();
      plVar18 = plVar9;
      func_0x000107c2b350();
      plVar19 = plVar9;
      func_0x000107c2b350();
      uVar31 = 0;
      puVar30 = (undefined8 *)0x0;
      if (((plVar15 == (long *)0x0) || (plVar16 == (long *)0x0)) ||
         ((plVar17 == (long *)0x0 || ((plVar18 == (long *)0x0 || (plVar19 == (long *)0x0))))))
      goto LAB_10ae33554;
      puVar30 = puVar21;
      func_0x000107c2b390(puVar21,plVar9);
      if (puVar30 != (undefined8 *)0x0) {
        iVar4 = 1;
        do {
          plVar20 = plVar15;
          func_0x000107c2b394(plVar15,2,plVar13);
          if (((int)plVar20 == 0) ||
             (plVar20 = plVar16, FUN_10ae306c8(plVar16,plVar15,puVar21,plVar9), (int)plVar20 == 0))
          goto LAB_10ae33550;
          uVar26 = 1;
          uStack_170 = 0x200000000;
          uStack_168 = 1;
          puStack_180 = &uStack_168;
          uStack_178 = 0x100000001;
          plVar20 = plVar16;
          func_0x000107c2b340(plVar16,&puStack_180);
          if (0 < (int)plVar20) goto LAB_10ae33580;
          plVar20 = plVar17;
          func_0x000107c2b374(plVar17,plVar15,plVar14,puVar21,plVar9,puVar30);
          if ((int)plVar20 == 0) goto LAB_10ae33550;
          plVar20 = plVar17;
          func_0x00010ae2e32c();
          if (((int)plVar20 == 0) &&
             (plVar20 = plVar17, func_0x000107c2b340(plVar17,plVar13), (int)plVar20 != 0)) {
            uVar32 = uVar29;
            if (uVar22 < 2) {
LAB_10ae33490:
              plVar13 = plVar18;
              func_0x000107c2b324(plVar18,plVar17);
              if (((plVar13 == (long *)0x0) ||
                  (plVar13 = plVar17, func_0x00010ae2ea80(plVar17,plVar18,plVar18,puVar21,plVar9),
                  (int)plVar13 == 0)) ||
                 ((plVar13 = plVar17, func_0x00010ae2e32c(), (int)plVar13 == 0 &&
                  (plVar13 = plVar18, func_0x000107c2b324(plVar18,plVar17), plVar13 == (long *)0x0))
                 )) goto LAB_10ae33550;
LAB_10ae334d8:
              plVar13 = plVar19;
              func_0x000107c2b324(plVar19,plVar18);
              if (((plVar13 == (long *)0x0) ||
                  (plVar13 = plVar19, FUN_10ae2e0a8(plVar19,1), (int)plVar13 == 0)) ||
                 (plVar13 = plVar16, FUN_10ae306c8(plVar16,plVar19,puVar21,plVar9),
                 (int)plVar13 == 0)) goto LAB_10ae33550;
              uStack_170 = 0x200000000;
              uStack_168 = 1;
              puStack_180 = &uStack_168;
              uStack_178 = 0x100000001;
              func_0x000107c2b340(plVar16,&puStack_180);
              uVar26 = 1;
              if ((int)plVar16 < 1) {
                uVar26 = 2;
              }
              goto LAB_10ae33580;
            }
            while( true ) {
              plVar20 = plVar18;
              func_0x000107c2b324(plVar18,plVar17);
              if ((plVar20 == (long *)0x0) ||
                 (plVar20 = plVar17, func_0x00010ae2ea80(plVar17,plVar18,plVar18,puVar21,plVar9),
                 (int)plVar20 == 0)) goto LAB_10ae33550;
              plVar20 = plVar17;
              func_0x000107c2b340(plVar17,plVar13);
              if ((int)plVar20 == 0) break;
              plVar20 = plVar17;
              func_0x00010ae2e32c();
              if ((int)plVar20 != 0) goto LAB_10ae334d8;
              uVar2 = (int)uVar32 - 1;
              uVar32 = (ulong)uVar2;
              if (uVar2 == 0) goto LAB_10ae33490;
            }
          }
          bVar3 = iVar4 != iVar23;
          iVar4 = iVar4 + 1;
        } while (bVar3);
        uVar26 = 0;
LAB_10ae33580:
        *puVar5 = uVar26;
        uVar31 = 1;
        goto LAB_10ae33554;
      }
    }
  }
LAB_10ae33550:
  uVar31 = 0;
LAB_10ae33554:
  func_0x000107c2b384(puVar30);
  if ((char)plVar9[5] == '\0') {
    lVar1 = plVar9[2];
    plVar9[2] = lVar1 + -1;
    plVar9[4] = *(long *)(plVar9[1] + (lVar1 + -1) * 8);
    return uVar31;
  }
  return uVar31;
}



/* Entry: 10ae33128; end: 10ae3358b;  */

undefined8 FUN_10ae33128(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((*(int *)(param_2 + 1) < 1) || ((*(byte *)*param_2 & 1) == 0)) {
LAB_10ae331bc:
    func_0x000107c2b29c(3,0,0x77,&UNK_10f6c6b10,0x326);
    return 0;
  }
  uStack_78 = 3;
  uStack_80 = 0x200000000;
  puStack_90 = &uStack_78;
  uStack_88 = 0x100000001;
  puVar17 = param_2;
  func_0x000107c2b340(param_2,&puStack_90);
  if ((int)puVar17 < 1) goto LAB_10ae331bc;
  puVar17 = param_2;
  func_0x000107c2b32c();
  iVar5 = (int)puVar17;
  if (iVar5 < 0xea3) {
    if (iVar5 < 0x541) {
      if (iVar5 < 0x1dc) {
        if (iVar5 < 400) {
          if (iVar5 < 0x15b) {
            if (iVar5 < 0x134) {
              iVar14 = 0x1b;
              if (iVar5 < 0x37) {
                iVar14 = 0x22;
              }
            }
            else {
              iVar14 = 8;
            }
          }
          else {
            iVar14 = 7;
          }
        }
        else {
          iVar14 = 6;
        }
      }
      else {
        iVar14 = 5;
      }
    }
    else {
      iVar14 = 4;
    }
  }
  else {
    iVar14 = 3;
  }
  func_0x000107c2b34c(param_3);
  plVar6 = param_3;
  func_0x000107c2b350();
  if (((plVar6 == (long *)0x0) || (plVar7 = plVar6, func_0x000107c2b324(), plVar7 == (long *)0x0))
     || (plVar7 = plVar6, FUN_10ae2e0a8(plVar6,1), (int)plVar7 == 0)) {
LAB_10ae3354c:
    puVar17 = (undefined8 *)0x0;
  }
  else {
    uVar15 = 0xffffffff;
    do {
      do {
        uVar19 = uVar15;
        iVar5 = (int)uVar19;
        uVar1 = iVar5 + 1;
        uVar15 = (ulong)uVar1;
        uVar1 = uVar1 >> 6;
      } while (*(uint *)(plVar6 + 1) <= uVar1);
    } while ((*(ulong *)(*plVar6 + (ulong)uVar1 * 8) >> (uVar15 & 0x3f) & 1) == 0);
    plVar7 = param_3;
    func_0x000107c2b350();
    puVar17 = (undefined8 *)0x0;
    if (plVar7 != (long *)0x0) {
      uVar1 = iVar5 + 1;
      plVar8 = plVar7;
      func_0x000107c2b360(plVar7,plVar6,uVar1);
      if ((int)plVar8 == 0) goto LAB_10ae3354c;
      plVar8 = param_3;
      func_0x000107c2b350();
      plVar9 = param_3;
      func_0x000107c2b350();
      plVar10 = param_3;
      func_0x000107c2b350();
      plVar11 = param_3;
      func_0x000107c2b350();
      plVar12 = param_3;
      func_0x000107c2b350();
      uVar18 = 0;
      puVar17 = (undefined8 *)0x0;
      if (((plVar8 == (long *)0x0) || (plVar9 == (long *)0x0)) ||
         ((plVar10 == (long *)0x0 || ((plVar11 == (long *)0x0 || (plVar12 == (long *)0x0))))))
      goto LAB_10ae33554;
      puVar17 = param_2;
      func_0x000107c2b390(param_2,param_3);
      if (puVar17 != (undefined8 *)0x0) {
        iVar5 = 1;
        do {
          plVar13 = plVar8;
          func_0x000107c2b394(plVar8,2,plVar6);
          if (((int)plVar13 == 0) ||
             (plVar13 = plVar9, FUN_10ae306c8(plVar9,plVar8,param_2,param_3), (int)plVar13 == 0))
          goto LAB_10ae33550;
          uVar16 = 1;
          uStack_80 = 0x200000000;
          uStack_78 = 1;
          puStack_90 = &uStack_78;
          uStack_88 = 0x100000001;
          plVar13 = plVar9;
          func_0x000107c2b340(plVar9,&puStack_90);
          if (0 < (int)plVar13) goto LAB_10ae33580;
          plVar13 = plVar10;
          func_0x000107c2b374(plVar10,plVar8,plVar7,param_2,param_3,puVar17);
          if ((int)plVar13 == 0) goto LAB_10ae33550;
          plVar13 = plVar10;
          FUN_10ae2e32c();
          if (((int)plVar13 == 0) &&
             (plVar13 = plVar10, func_0x000107c2b340(plVar10,plVar6), (int)plVar13 != 0)) {
            uVar15 = uVar19;
            if (uVar1 < 2) {
LAB_10ae33490:
              plVar6 = plVar11;
              func_0x000107c2b324(plVar11,plVar10);
              if (((plVar6 == (long *)0x0) ||
                  (plVar6 = plVar10, func_0x00010ae2ea80(plVar10,plVar11,plVar11,param_2,param_3),
                  (int)plVar6 == 0)) ||
                 ((plVar6 = plVar10, FUN_10ae2e32c(), (int)plVar6 == 0 &&
                  (plVar6 = plVar11, func_0x000107c2b324(plVar11,plVar10), plVar6 == (long *)0x0))))
              goto LAB_10ae33550;
LAB_10ae334d8:
              plVar6 = plVar12;
              func_0x000107c2b324(plVar12,plVar11);
              if (((plVar6 == (long *)0x0) ||
                  (plVar6 = plVar12, FUN_10ae2e0a8(plVar12,1), (int)plVar6 == 0)) ||
                 (plVar6 = plVar9, FUN_10ae306c8(plVar9,plVar12,param_2,param_3), (int)plVar6 == 0))
              goto LAB_10ae33550;
              uStack_80 = 0x200000000;
              uStack_78 = 1;
              puStack_90 = &uStack_78;
              uStack_88 = 0x100000001;
              func_0x000107c2b340(plVar9,&puStack_90);
              uVar16 = 1;
              if ((int)plVar9 < 1) {
                uVar16 = 2;
              }
              goto LAB_10ae33580;
            }
            while( true ) {
              plVar13 = plVar11;
              func_0x000107c2b324(plVar11,plVar10);
              if ((plVar13 == (long *)0x0) ||
                 (plVar13 = plVar10, func_0x00010ae2ea80(plVar10,plVar11,plVar11,param_2,param_3),
                 (int)plVar13 == 0)) goto LAB_10ae33550;
              plVar13 = plVar10;
              func_0x000107c2b340(plVar10,plVar6);
              if ((int)plVar13 == 0) break;
              plVar13 = plVar10;
              FUN_10ae2e32c();
              if ((int)plVar13 != 0) goto LAB_10ae334d8;
              uVar3 = (int)uVar15 - 1;
              uVar15 = (ulong)uVar3;
              if (uVar3 == 0) goto LAB_10ae33490;
            }
          }
          bVar4 = iVar5 != iVar14;
          iVar5 = iVar5 + 1;
        } while (bVar4);
        uVar16 = 0;
LAB_10ae33580:
        *param_1 = uVar16;
        uVar18 = 1;
        goto LAB_10ae33554;
      }
    }
  }
LAB_10ae33550:
  uVar18 = 0;
LAB_10ae33554:
  func_0x000107c2b384(puVar17);
  if ((char)param_3[5] != '\0') {
    return uVar18;
  }
  lVar2 = param_3[2];
  param_3[2] = lVar2 + -1;
  param_3[4] = *(long *)(param_3[1] + (lVar2 + -1) * 8);
  return uVar18;
}



/* Entry: 10ae3358c; end: 10ae336a3;  */

void FUN_10ae3358c(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  ulong *puVar7;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else if (param_2 < 0x7fffffc1) {
      uVar2 = param_2 + 0x7e;
      if (-0x40 < param_2) {
        uVar2 = param_2 + 0x3f;
      }
      lVar4 = (long)((ulong)uVar2 << 0x20) >> 0x26;
      plVar6 = param_1;
      func_0x000107c2b2fc(param_1,lVar4);
      if ((int)plVar6 != 0) {
        uVar5 = -(param_2 - 1U);
        uVar1 = param_2 - 1U & 0x3f;
        if (-1 < (int)uVar5) {
          uVar1 = -(uVar5 & 0x3f);
        }
        uVar3 = 0xffffffffffffffff;
        if ((int)uVar1 < 0x3f) {
          uVar3 = ~(-1L << ((ulong)(uVar1 + 1) & 0x3f));
        }
        func_0x000107c2b3c4(*param_1,lVar4 << 3,&UNK_10e525a20);
        puVar7 = (ulong *)*param_1;
        puVar7[lVar4 + -1] = puVar7[lVar4 + -1] & uVar3 | 1L << ((ulong)uVar1 & 0x3f);
        if (param_3 != 0) {
          *puVar7 = *puVar7 | 1;
        }
        *(undefined4 *)(param_1 + 2) = 0;
        *(int *)(param_1 + 1) = (int)uVar2 >> 6;
      }
    }
    else {
      func_0x000107c2b29c(3,0,0x66,&UNK_10f6c6b8c,0x91);
    }
  }
  return;
}



/* Entry: 10ae336a4; end: 10ae33e9f;  */

undefined8 * FUN_10ae336a4(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  uint uVar23;
  
  uVar23 = *(uint *)(param_3 + 1);
  if ((int)uVar23 < 1) {
    if ((uVar23 == 0) || (*(long *)*param_3 != 2)) goto LAB_10ae337bc;
    goto LAB_10ae337e0;
  }
  puVar18 = (ulong *)*param_3;
  uVar19 = *puVar18;
  if ((uVar19 & 1) != 0) {
    uVar20 = uVar19 & 0xfffffffffffffffe;
    if (uVar23 != 1) {
      lVar21 = (ulong)uVar23 - 1;
      puVar22 = puVar18;
      do {
        puVar22 = puVar22 + 1;
        uVar20 = *puVar22 | uVar20;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (uVar20 != 0) {
      lVar21 = (long)(int)param_2[1];
      if ((int)param_2[1] == 0) {
LAB_10ae33744:
        FUN_10ae2e32c();
        if ((int)param_2 == 0) {
          uVar16 = 0;
          *(undefined4 *)(param_1 + 2) = 0;
        }
        else {
          puVar5 = param_1;
          func_0x000107c2b2fc(param_1,1);
          if ((int)puVar5 == 0) {
            return (undefined8 *)0x0;
          }
          *(undefined4 *)(param_1 + 2) = 0;
          *(ulong *)*param_1 = (ulong)param_2 & 0xffffffff;
          uVar16 = 1;
        }
        *(undefined4 *)(param_1 + 1) = uVar16;
        return param_1;
      }
      uVar19 = 0;
      puVar18 = (ulong *)*param_2;
      do {
        uVar19 = *puVar18 | uVar19;
        lVar21 = lVar21 + -1;
        puVar18 = puVar18 + 1;
      } while (lVar21 != 0);
      if ((uVar19 == 0) || (plVar4 = param_2, FUN_10ae2e32c(), (int)plVar4 != 0))
      goto LAB_10ae33744;
      func_0x000107c2b34c(param_4);
      plVar4 = param_4;
      func_0x000107c2b350();
      plVar6 = param_4;
      func_0x000107c2b350();
      plVar7 = param_4;
      func_0x000107c2b350();
      plVar8 = param_4;
      func_0x000107c2b350();
      plVar9 = param_4;
      func_0x000107c2b350();
      plVar10 = param_4;
      func_0x000107c2b350();
      if ((plVar10 != (long *)0x0) &&
         (plVar11 = plVar4, FUN_10ae2e488(plVar4,param_2,param_3,param_4), (int)plVar11 != 0)) {
        uVar19 = 1;
        while( true ) {
          iVar2 = (int)uVar19;
          if (((uint)(uVar19 >> 6) < *(uint *)(param_3 + 1)) &&
             ((*(ulong *)(*param_3 + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0)) break;
          uVar19 = (ulong)(iVar2 + 1);
        }
        if (iVar2 == 2) {
          plVar11 = plVar8;
          FUN_10ae2e7bc(plVar8,plVar4,plVar4,param_3,param_4);
          if (((int)plVar11 != 0) &&
             (plVar11 = plVar7, func_0x000107c2b360(plVar7,param_3,3), (int)plVar11 != 0)) {
            *(undefined4 *)(plVar7 + 2) = 0;
            plVar11 = plVar6;
            func_0x000107c2b374(plVar6,plVar8,plVar7,param_3,param_4,0);
            if (((int)plVar11 != 0) &&
               ((((plVar7 = plVar10, FUN_10ae2ebd8(plVar10,plVar6,param_3,param_4), (int)plVar7 != 0
                  && (plVar7 = plVar8, func_0x00010ae2ea80(plVar8,plVar8,plVar10,param_3,param_4),
                     (int)plVar7 != 0)) &&
                 (plVar7 = plVar8, FUN_10ae2e0a8(plVar8,1), (int)plVar7 != 0)) &&
                ((plVar7 = plVar9, func_0x00010ae2ea80(plVar9,plVar4,plVar6,param_3,param_4),
                 (int)plVar7 != 0 &&
                 (plVar6 = plVar9, func_0x00010ae2ea80(plVar9,plVar9,plVar8,param_3,param_4),
                 (int)plVar6 != 0)))))) {
LAB_10ae33a60:
              puVar5 = param_1;
              func_0x000107c2b324(param_1,plVar9);
              if (puVar5 != (undefined8 *)0x0) goto LAB_10ae33948;
            }
          }
        }
        else if (iVar2 == 1) {
          plVar6 = plVar7;
          func_0x000107c2b360(plVar7,param_3,2);
          if ((int)plVar6 != 0) {
            *(undefined4 *)(plVar7 + 2) = 0;
            plVar6 = plVar7;
            func_0x000107c2b304(plVar7,1);
            if (((int)plVar6 != 0) &&
               (puVar5 = param_1, func_0x000107c2b374(param_1,plVar4,plVar7,param_3,param_4,0),
               (int)puVar5 != 0)) {
LAB_10ae33948:
              plVar6 = plVar9;
              FUN_10ae2ebd8(plVar9,param_1,param_3,param_4);
              if ((int)plVar6 != 0) {
                func_0x000107c2b340(plVar9,plVar4);
                if ((int)plVar9 == 0) goto LAB_10ae33bb0;
                uVar14 = 0x6e;
                uVar15 = 0x199;
                goto LAB_10ae33ba8;
              }
            }
          }
        }
        else {
          plVar11 = plVar7;
          func_0x000107c2b324(plVar7,param_3);
          if (plVar11 != (long *)0x0) {
            *(undefined4 *)(plVar7 + 2) = 0;
            uVar20 = 2;
LAB_10ae33a88:
            if (uVar20 < 0x16) {
LAB_10ae33b24:
              plVar11 = plVar10;
              FUN_10ae2e050(plVar10,uVar20);
              if ((int)plVar11 == 0) goto LAB_10ae33bac;
            }
            else {
              plVar11 = param_3;
              func_0x000107c2b32c(param_3);
              plVar12 = plVar10;
              FUN_10ae3358c(plVar10,plVar11,0);
              if ((int)plVar12 == 0) goto LAB_10ae33bac;
              lVar13 = *plVar10;
              iVar2 = (int)plVar10[1];
              lVar21 = (long)iVar2;
              func_0x000107c34f78(lVar13,lVar21,*param_3,(long)(int)param_3[1]);
              if (-1 < (int)lVar13) {
                pcVar1 = (code *)&UNK_100411994;
                if ((int)param_3[2] != 0) {
                  pcVar1 = FUN_10ae2de90;
                }
                plVar11 = plVar10;
                (*pcVar1)(plVar10,plVar10,param_3);
                if ((int)plVar11 == 0) goto LAB_10ae33bac;
                iVar2 = (int)plVar10[1];
                lVar21 = (long)iVar2;
              }
              if (iVar2 == 0) goto LAB_10ae33b24;
              uVar17 = 0;
              puVar18 = (ulong *)*plVar10;
              do {
                uVar17 = *puVar18 | uVar17;
                lVar21 = lVar21 + -1;
                puVar18 = puVar18 + 1;
              } while (lVar21 != 0);
              if (uVar17 == 0) goto LAB_10ae33b24;
            }
            plVar11 = plVar10;
            FUN_10ae31a94(plVar10,plVar7,param_4);
            iVar2 = (int)plVar11;
            if (iVar2 < -1) goto LAB_10ae33bac;
            if (iVar2 == 1) goto code_r0x00010ae33b54;
            if (iVar2 != -1) {
              if (iVar2 == 0) {
                uVar14 = 0x72;
                uVar15 = 0x101;
                goto LAB_10ae33ba8;
              }
              goto LAB_10ae33b90;
            }
            plVar11 = plVar7;
            func_0x000107c2b360(plVar7,plVar7,uVar19);
            if (((int)plVar11 == 0) ||
               (plVar11 = plVar10, func_0x000107c2b374(plVar10,plVar10,plVar7,param_3,param_4,0),
               (int)plVar11 == 0)) goto LAB_10ae33bac;
            plVar11 = plVar10;
            FUN_10ae2e32c();
            if ((int)plVar11 != 0) {
              uVar14 = 0x72;
              uVar15 = 0x11a;
              goto LAB_10ae33ba8;
            }
            plVar11 = plVar8;
            FUN_10ae2fcb0(plVar8,plVar7);
            if ((int)plVar11 == 0) goto LAB_10ae33bac;
            lVar21 = (long)(int)plVar8[1];
            if ((int)plVar8[1] == 0) goto LAB_10ae33cb4;
            uVar20 = 0;
            puVar18 = (ulong *)*plVar8;
            do {
              uVar20 = *puVar18 | uVar20;
              lVar21 = lVar21 + -1;
              puVar18 = puVar18 + 1;
            } while (lVar21 != 0);
            if (uVar20 == 0) {
LAB_10ae33cb4:
              plVar7 = plVar8;
              FUN_10ae2e488(plVar8,plVar4,param_3,param_4);
              if ((int)plVar7 != 0) {
                lVar21 = (long)(int)plVar8[1];
                if ((int)plVar8[1] != 0) {
                  uVar20 = 0;
                  puVar18 = (ulong *)*plVar8;
                  do {
                    uVar20 = *puVar18 | uVar20;
                    lVar21 = lVar21 + -1;
                    puVar18 = puVar18 + 1;
                  } while (lVar21 != 0);
                  if (uVar20 != 0) {
                    plVar7 = plVar9;
                    func_0x000107c2b2fc(plVar9,1);
                    if ((int)plVar7 != 0) {
                      *(undefined4 *)(plVar9 + 2) = 0;
                      *(undefined8 *)*plVar9 = 1;
                      *(undefined4 *)(plVar9 + 1) = 1;
                      goto LAB_10ae33d20;
                    }
                    goto LAB_10ae33bac;
                  }
                }
                goto LAB_10ae33e6c;
              }
              goto LAB_10ae33bac;
            }
            plVar7 = plVar9;
            func_0x000107c2b374(plVar9,plVar4,plVar8,param_3,param_4,0);
            if ((int)plVar7 == 0) goto LAB_10ae33bac;
            lVar21 = (long)(int)plVar9[1];
            if ((int)plVar9[1] == 0) {
LAB_10ae33e6c:
              *(undefined4 *)(param_1 + 2) = 0;
              *(undefined4 *)(param_1 + 1) = 0;
              goto LAB_10ae33bb0;
            }
            uVar20 = 0;
            puVar18 = (ulong *)*plVar9;
            do {
              uVar20 = *puVar18 | uVar20;
              lVar21 = lVar21 + -1;
              puVar18 = puVar18 + 1;
            } while (lVar21 != 0);
            if (uVar20 == 0) goto LAB_10ae33e6c;
LAB_10ae33d20:
            plVar7 = plVar6;
            FUN_10ae2ebd8(plVar6,plVar9,param_3,param_4);
            if ((int)plVar7 == 0) goto LAB_10ae33bac;
            plVar7 = plVar6;
            func_0x00010ae2ea80(plVar6,plVar6,plVar4,param_3,param_4);
            iVar2 = (int)plVar7;
            plVar7 = plVar4;
            plVar11 = plVar9;
            do {
              if ((iVar2 == 0) ||
                 (func_0x00010ae2ea80(plVar11,plVar11,plVar7,param_3,param_4), (int)plVar11 == 0))
              break;
              plVar7 = plVar6;
              FUN_10ae2e32c();
              if ((int)plVar7 != 0) goto LAB_10ae33a60;
              uVar23 = (uint)uVar19;
              iVar2 = uVar23 - 2;
              if (uVar23 < 2) {
LAB_10ae33e78:
                uVar14 = 0x6e;
                uVar15 = 0x179;
                goto LAB_10ae33ba8;
              }
              uVar19 = 1;
              while( true ) {
                uVar23 = uVar23 - 1;
                if ((int)uVar19 == 1) {
                  plVar7 = plVar8;
                  FUN_10ae2ebd8(plVar8,plVar6,param_3,param_4);
                  iVar3 = (int)plVar7;
                }
                else {
                  plVar7 = plVar8;
                  func_0x00010ae2ea80(plVar8,plVar8,plVar8,param_3,param_4);
                  iVar3 = (int)plVar7;
                }
                if (iVar3 == 0) goto LAB_10ae33bac;
                plVar7 = plVar8;
                FUN_10ae2e32c();
                if ((int)plVar7 != 0) break;
                uVar19 = (ulong)((int)uVar19 + 1);
                iVar2 = iVar2 + -1;
                if (iVar2 == -1) goto LAB_10ae33e78;
              }
              plVar7 = plVar8;
              func_0x000107c2b324(plVar8,plVar10);
              if (plVar7 == (long *)0x0) break;
              if (0 < iVar2) {
                do {
                  plVar7 = plVar8;
                  FUN_10ae2ebd8(plVar8,plVar8,param_3,param_4);
                  if ((int)plVar7 == 0) goto LAB_10ae33bac;
                  uVar23 = uVar23 - 1;
                } while (1 < (int)uVar23);
              }
              plVar7 = plVar10;
              func_0x00010ae2ea80(plVar10,plVar8,plVar8,param_3,param_4);
              if ((int)plVar7 == 0) break;
              plVar7 = plVar9;
              func_0x00010ae2ea80(plVar9,plVar9,plVar8,param_3,param_4);
              iVar2 = (int)plVar7;
              plVar7 = plVar10;
              plVar11 = plVar6;
            } while( true );
          }
        }
      }
      goto LAB_10ae33bac;
    }
  }
  uVar19 = uVar19 ^ 2;
  if (uVar23 != 1) {
    lVar21 = (ulong)uVar23 - 1;
    do {
      puVar18 = puVar18 + 1;
      uVar19 = *puVar18 | uVar19;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  if (uVar19 != 0) {
LAB_10ae337bc:
    func_0x000107c2b29c(3,0,0x72,&UNK_10f6c6c85,0x58);
    return (undefined8 *)0x0;
  }
LAB_10ae337e0:
  if (((int)param_2[1] == 0) || ((*(byte *)*param_2 & 1) == 0)) {
    uVar16 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    puVar5 = param_1;
    func_0x000107c2b2fc(param_1,1);
    if ((int)puVar5 == 0) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    uVar16 = 1;
    *(undefined8 *)*param_1 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar16;
  return param_1;
code_r0x00010ae33b54:
  uVar20 = uVar20 + 1;
  if (uVar20 == 0x52) goto LAB_10ae33b90;
  goto LAB_10ae33a88;
LAB_10ae33b90:
  uVar14 = 0x73;
  uVar15 = 0x10b;
LAB_10ae33ba8:
  func_0x000107c2b29c(3,0,uVar14,&UNK_10f6c6c85,uVar15);
LAB_10ae33bac:
  param_1 = (undefined8 *)0x0;
LAB_10ae33bb0:
  if ((char)param_4[5] == '\0') {
    lVar21 = param_4[2];
    param_4[2] = lVar21 + -1;
    param_4[4] = *(long *)(param_4[1] + (lVar21 + -1) * 8);
    return param_1;
  }
  return param_1;
}



/* Entry: 10ae33ea0; end: 10ae33f3b;  */

long * FUN_10ae33ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)0x260;
  _malloc();
  plVar3 = puVar1 + 1;
  *puVar1 = 600;
  _bzero(plVar3,600);
  plVar2 = plVar3;
  func_0x000107c2b3cc(plVar3,param_1,param_2,param_3,param_4);
  if ((int)plVar2 == 0) {
    if (*plVar3 != 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      *plVar3 = 0;
    }
    func_0x000107c2b534(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10ae33f3c; end: 10ae33fab;  */

void FUN_10ae33f3c(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    *param_1 = 0;
  }
  if (param_1 != (long *)0x0) {
    param_1 = param_1 + -1;
    if (*param_1 + 8 != 0) {
      func_0x000107c60ee4(param_1,*param_1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10ae33fac; end: 10ae33ff7;  */

void FUN_10ae33fac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x98;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x90;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  return;
}



/* Entry: 10ae33ff8; end: 10ae340b7;  */

undefined8 FUN_10ae33ff8(long *param_1)

{
  code *pcVar1;
  
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  func_0x000107c2b534(param_1[2]);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return 1;
}



/* Entry: 10ae340b8; end: 10ae342a7;  */

void FUN_10ae340b8(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  if (param_6 == -1) {
    uVar9 = *(uint *)((long)param_1 + 0x1c);
  }
  else {
    uVar9 = (uint)(param_6 != 0);
    *(uint *)((long)param_1 + 0x1c) = (uint)(param_6 != 0);
  }
  lVar8 = *param_1;
  if (param_2 == 0) {
    if (lVar8 == 0) {
      uVar6 = 0x72;
      uVar7 = 0xb4;
LAB_10ae3421c:
      func_0x000107c2b29c(0x1e,0,uVar6,&UNK_10f6c6d7f,uVar7);
      return;
    }
  }
  else {
    if (lVar8 != 0) {
      FUN_10ae33ff8(param_1);
      *(uint *)((long)param_1 + 0x1c) = uVar9;
    }
    *param_1 = param_2;
    uVar1 = *(uint *)(param_2 + 0x10);
    if (uVar1 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar2 = (ulong *)((ulong)uVar1 + 8);
      _malloc();
      if (puVar2 == (ulong *)0x0) {
        param_1[2] = 0;
        *param_1 = 0;
        uVar6 = 0x41;
        uVar7 = 0xa2;
        goto LAB_10ae3421c;
      }
      puVar3 = puVar2 + 1;
      *puVar2 = (ulong)uVar1;
    }
    param_1[2] = (long)puVar3;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    lVar8 = param_2;
    if ((*(byte *)(param_2 + 0x15) >> 1 & 1) != 0) {
      plVar4 = param_1;
      FUN_10ae342a8(param_1,0,0,0);
      if ((int)plVar4 == 0) {
        *param_1 = 0;
        uVar6 = 0x6b;
        uVar7 = 0xaf;
        goto LAB_10ae3421c;
      }
      lVar8 = *param_1;
    }
  }
  if ((*(uint *)(lVar8 + 0x14) >> 8 & 1) != 0) goto LAB_10ae34260;
  uVar1 = *(uint *)(lVar8 + 0x14) & 0x3f;
  if (uVar1 < 3) {
    if (uVar1 < 2) goto LAB_10ae34260;
    if (uVar1 != 2) {
      return;
    }
LAB_10ae34234:
    if ((param_5 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
      _memcpy((long)param_1 + 0x24,param_5);
    }
    if (*(int *)(lVar8 + 0xc) == 0) goto LAB_10ae34260;
    lVar5 = (long)param_1 + 0x24;
  }
  else {
    if (1 < uVar1 - 4) {
      if (uVar1 != 3) {
        return;
      }
      *(undefined4 *)(param_1 + 0xd) = 0;
      goto LAB_10ae34234;
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    if ((param_5 == 0) || (lVar5 = param_5, *(int *)(lVar8 + 0xc) == 0)) goto LAB_10ae34260;
  }
  _memcpy((long)param_1 + 0x34,lVar5);
LAB_10ae34260:
  if (((param_4 == 0) && (-1 < *(char *)(lVar8 + 0x14))) ||
     (plVar4 = param_1, (**(code **)(lVar8 + 0x20))(param_1,param_4,param_5,uVar9), (int)plVar4 != 0
     )) {
    *(undefined4 *)((long)param_1 + 100) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  return;
}



/* Entry: 10ae342a8; end: 10ae3432b;  */

void FUN_10ae342a8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0x72;
    uVar2 = 0x227;
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0x38);
    if (pcVar3 == (code *)0x0) {
      uVar1 = 0x68;
      uVar2 = 0x22c;
    }
    else {
      (*pcVar3)();
      if ((int)param_1 != -1) {
        return;
      }
      uVar1 = 0x69;
      uVar2 = 0x232;
    }
  }
  func_0x000107c2b29c(0x1e,0,uVar1,&UNK_10f6c6d7f,uVar2);
  return;
}



/* Entry: 10ae3432c; end: 10ae3433b;  */

/* WARNING: Removing unreachable block (ram,0x00010ae340f4) */

void FUN_10ae3432c(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  lVar8 = *param_1;
  if (param_2 == 0) {
    if (lVar8 == 0) {
      uVar6 = 0x72;
      uVar7 = 0xb4;
LAB_10ae3421c:
      func_0x000107c2b29c(0x1e,0,uVar6,&UNK_10f6c6d7f,uVar7);
      return;
    }
  }
  else {
    if (lVar8 != 0) {
      FUN_10ae33ff8(param_1);
      *(undefined4 *)((long)param_1 + 0x1c) = 1;
    }
    *param_1 = param_2;
    uVar1 = *(uint *)(param_2 + 0x10);
    if (uVar1 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar2 = (ulong *)((ulong)uVar1 + 8);
      _malloc();
      if (puVar2 == (ulong *)0x0) {
        param_1[2] = 0;
        *param_1 = 0;
        uVar6 = 0x41;
        uVar7 = 0xa2;
        goto LAB_10ae3421c;
      }
      puVar3 = puVar2 + 1;
      *puVar2 = (ulong)uVar1;
    }
    param_1[2] = (long)puVar3;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    lVar8 = param_2;
    if ((*(byte *)(param_2 + 0x15) >> 1 & 1) != 0) {
      plVar4 = param_1;
      FUN_10ae342a8(param_1,0,0,0);
      if ((int)plVar4 == 0) {
        *param_1 = 0;
        uVar6 = 0x6b;
        uVar7 = 0xaf;
        goto LAB_10ae3421c;
      }
      lVar8 = *param_1;
    }
  }
  if ((*(uint *)(lVar8 + 0x14) >> 8 & 1) != 0) goto LAB_10ae34260;
  uVar1 = *(uint *)(lVar8 + 0x14) & 0x3f;
  if (uVar1 < 3) {
    if (uVar1 < 2) goto LAB_10ae34260;
    if (uVar1 != 2) {
      return;
    }
LAB_10ae34234:
    if ((param_5 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
      _memcpy((long)param_1 + 0x24,param_5);
    }
    if (*(int *)(lVar8 + 0xc) == 0) goto LAB_10ae34260;
    lVar5 = (long)param_1 + 0x24;
  }
  else {
    if (1 < uVar1 - 4) {
      if (uVar1 != 3) {
        return;
      }
      *(undefined4 *)(param_1 + 0xd) = 0;
      goto LAB_10ae34234;
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    if ((param_5 == 0) || (lVar5 = param_5, *(int *)(lVar8 + 0xc) == 0)) goto LAB_10ae34260;
  }
  _memcpy((long)param_1 + 0x34,lVar5);
LAB_10ae34260:
  if (((param_4 == 0) && (-1 < *(char *)(lVar8 + 0x14))) ||
     (plVar4 = param_1, (**(code **)(lVar8 + 0x20))(param_1,param_4,param_5,1), (int)plVar4 != 0)) {
    *(undefined4 *)((long)param_1 + 100) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  return;
}



/* Entry: 10ae3433c; end: 10ae34533;  */

void FUN_10ae3433c(long *param_1,long param_2,uint *param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *param_1;
  uVar6 = *(uint *)(lVar5 + 4);
  if ((int)uVar6 < 2 || (int)param_5 <= (int)(uVar6 ^ 0x7fffffff)) {
    if ((*(byte *)(lVar5 + 0x15) >> 2 & 1) == 0) {
      if ((int)param_5 < 1) {
        *param_3 = 0;
      }
      else {
        uVar2 = *(uint *)((long)param_1 + 100);
        if (uVar2 == 0) {
          if ((uVar6 + 0x7fffffff & param_5) == 0) {
            (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,param_5);
            if ((int)param_1 != 0) {
              *param_3 = param_5;
              return;
            }
            *param_3 = 0;
            return;
          }
          uVar6 = 0;
        }
        else {
          iVar3 = uVar6 - uVar2;
          lVar1 = (long)param_1 + 0x44;
          if ((int)param_5 < iVar3) {
            _memcpy(lVar1 + (int)uVar2,param_4,param_5);
            *(uint *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + param_5;
            *param_3 = 0;
            return;
          }
          if (uVar6 != uVar2) {
            _memcpy(lVar1 + (int)uVar2,param_4,(long)iVar3);
            lVar5 = *param_1;
          }
          plVar4 = param_1;
          (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1,(long)(int)uVar6);
          if ((int)plVar4 == 0) {
            return;
          }
          param_4 = param_4 + iVar3;
          param_2 = param_2 + (int)uVar6;
          lVar5 = *param_1;
          param_5 = param_5 - iVar3;
        }
        *param_3 = uVar6;
        uVar6 = *(int *)(lVar5 + 4) - 1U & param_5;
        iVar3 = param_5 - uVar6;
        if (0 < iVar3) {
          plVar4 = param_1;
          (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,iVar3);
          if ((int)plVar4 == 0) {
            return;
          }
          *param_3 = *param_3 + iVar3;
        }
        if (uVar6 != 0) {
          _memcpy((long)param_1 + 0x44,param_4 + iVar3,(long)(int)uVar6);
        }
        *(uint *)((long)param_1 + 100) = uVar6;
      }
    }
    else {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,(long)(int)param_5);
      if (-1 < (int)(uint)param_1) {
        *param_3 = (uint)param_1;
      }
    }
  }
  else {
    func_0x000107c2b29c(0x1e,0,0x45,&UNK_10f6c6d7f,0x100);
  }
  return;
}



/* Entry: 10ae34534; end: 10ae34627;  */

void FUN_10ae34534(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 0x15) >> 2 & 1) != 0) {
    (**(code **)(lVar3 + 0x28))(param_1,param_2,0,0);
    if ((int)(uint)param_1 < 0) {
      return;
    }
    *param_3 = (uint)param_1;
    return;
  }
  uVar1 = *(uint *)(lVar3 + 4);
  if (uVar1 != 1) {
    uVar2 = *(uint *)((long)param_1 + 100);
    if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) == 0) {
      if (uVar2 < uVar1) {
        _memset((long)param_1 + (ulong)uVar2 + 0x44,uVar1 - uVar2,(ulong)(uVar1 + ~uVar2) + 1);
      }
      (**(code **)(lVar3 + 0x28))(param_1,param_2,(long)param_1 + 0x44,uVar1);
      if ((int)param_1 == 0) {
        return;
      }
      *param_3 = uVar1;
      return;
    }
    if (uVar2 != 0) {
      func_0x000107c2b29c(0x1e,0,0x6a,&UNK_10f6c6d7f,0x15c);
      return;
    }
  }
  *param_3 = 0;
  return;
}



/* Entry: 10ae34628; end: 10ae347b7;  */

void FUN_10ae34628(long *param_1,long param_2,uint *param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar5 = *param_1;
  uVar8 = *(uint *)(lVar5 + 4);
  uVar6 = (ulong)uVar8;
  uVar7 = (uint)param_5;
  if (uVar8 < 2 || (int)uVar7 <= (int)(uVar8 ^ 0x7fffffff)) {
    if ((*(byte *)(lVar5 + 0x15) >> 2 & 1) == 0) {
      if ((int)uVar7 < 1) {
        *param_3 = 0;
      }
      else {
        if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) != 0) {
          lVar5 = *param_1;
          uVar8 = *(uint *)(lVar5 + 4);
          if ((int)uVar8 < 2 || (int)uVar7 <= (int)(uVar8 ^ 0x7fffffff)) {
            if ((*(byte *)(lVar5 + 0x15) >> 2 & 1) == 0) {
              if ((int)uVar7 < 1) {
                *param_3 = 0;
              }
              else {
                uVar3 = *(uint *)((long)param_1 + 100);
                if (uVar3 == 0) {
                  if ((uVar8 + 0x7fffffff & uVar7) == 0) {
                    (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,param_5 & 0xffffffff);
                    if ((int)param_1 != 0) {
                      *param_3 = uVar7;
                      return;
                    }
                    *param_3 = 0;
                    return;
                  }
                  uVar8 = 0;
                }
                else {
                  iVar2 = uVar8 - uVar3;
                  lVar1 = (long)param_1 + 0x44;
                  if ((int)uVar7 < iVar2) {
                    _memcpy(lVar1 + (int)uVar3,param_4,param_5 & 0xffffffff);
                    *(uint *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + uVar7;
                    *param_3 = 0;
                    return;
                  }
                  if (uVar8 != uVar3) {
                    _memcpy(lVar1 + (int)uVar3,param_4,(long)iVar2);
                    lVar5 = *param_1;
                  }
                  plVar4 = param_1;
                  (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1,(long)(int)uVar8);
                  if ((int)plVar4 == 0) {
                    return;
                  }
                  param_4 = param_4 + iVar2;
                  param_2 = param_2 + (int)uVar8;
                  lVar5 = *param_1;
                  uVar7 = uVar7 - iVar2;
                }
                *param_3 = uVar8;
                uVar8 = *(int *)(lVar5 + 4) - 1U & uVar7;
                iVar2 = uVar7 - uVar8;
                if (0 < iVar2) {
                  plVar4 = param_1;
                  (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,iVar2);
                  if ((int)plVar4 == 0) {
                    return;
                  }
                  *param_3 = *param_3 + iVar2;
                }
                if (uVar8 != 0) {
                  _memcpy((long)param_1 + 0x44,param_4 + iVar2,(long)(int)uVar8);
                }
                *(uint *)((long)param_1 + 100) = uVar8;
              }
            }
            else {
              (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,(long)(int)uVar7);
              if (-1 < (int)(uint)param_1) {
                *param_3 = (uint)param_1;
              }
            }
          }
          else {
            func_0x000107c2b29c(0x1e,0,0x45,&UNK_10f6c6d7f,0x100);
          }
          return;
        }
        iVar2 = *(int *)((long)param_1 + 0x6c);
        if (iVar2 != 0) {
          if (uVar8 != 0) {
            _memcpy(param_2,param_1 + 0xe,uVar6);
          }
          param_2 = param_2 + uVar6;
        }
        plVar4 = param_1;
        FUN_10ae3433c(param_1,param_2,param_3,param_4,param_5);
        if ((int)plVar4 != 0) {
          if ((uVar8 < 2) || (*(int *)((long)param_1 + 100) != 0)) {
            *(undefined4 *)((long)param_1 + 0x6c) = 0;
          }
          else {
            *param_3 = *param_3 - uVar8;
            *(undefined4 *)((long)param_1 + 0x6c) = 1;
            _memcpy(param_1 + 0xe,param_2 + (int)*param_3,uVar6);
          }
          if (iVar2 != 0) {
            *param_3 = *param_3 + uVar8;
          }
        }
      }
    }
    else {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,(long)(int)uVar7);
      *param_3 = (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
    }
  }
  else {
    func_0x000107c2b29c(0x1e,0,0x45,&UNK_10f6c6d7f,0x176);
  }
  return;
}



/* Entry: 10ae347b8; end: 10ae34907;  */

undefined8 FUN_10ae347b8(long *param_1,undefined1 *param_2,uint *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  *param_3 = 0;
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x15) >> 2 & 1) != 0) {
    (**(code **)(lVar4 + 0x28))(param_1,param_2,0,0);
    if ((int)(uint)param_1 < 0) {
      return 0;
    }
    *param_3 = (uint)param_1;
    return 1;
  }
  if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) == 0) {
    uVar5 = *(uint *)(lVar4 + 4);
    if (uVar5 < 2) {
      uVar5 = 0;
LAB_10ae3485c:
      *param_3 = uVar5;
      return 1;
    }
    if ((*(int *)((long)param_1 + 100) == 0) && (*(int *)((long)param_1 + 0x6c) != 0)) {
      param_1 = param_1 + 0xe;
      uVar8 = uVar5 - 1;
      bVar1 = *(byte *)((long)param_1 + (ulong)uVar8);
      uVar7 = (uint)bVar1;
      if (bVar1 != 0 && (int)(uint)bVar1 <= (int)uVar5) {
        do {
          if ((uint)*(byte *)((long)param_1 + (ulong)uVar8) != (uint)bVar1) {
            uVar2 = 0x65;
            uVar3 = 0x1d5;
            goto LAB_10ae3484c;
          }
          uVar8 = uVar8 - 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar5 = uVar5 - bVar1;
        uVar6 = (ulong)uVar5;
        if (0 < (int)uVar5) {
          do {
            *param_2 = (char)*param_1;
            uVar6 = uVar6 - 1;
            param_2 = param_2 + 1;
            param_1 = (long *)((long)param_1 + 1);
          } while (uVar6 != 0);
        }
        goto LAB_10ae3485c;
      }
      uVar2 = 0x65;
      uVar3 = 0x1cf;
    }
    else {
      uVar2 = 0x7b;
      uVar3 = 0x1c6;
    }
  }
  else {
    if (*(int *)((long)param_1 + 100) == 0) {
      return 1;
    }
    uVar2 = 0x6a;
    uVar3 = 0x1bd;
  }
LAB_10ae3484c:
  func_0x000107c2b29c(0x1e,0,uVar2,&UNK_10f6c6d7f,uVar3);
  return 0;
}



/* Entry: 10ae34908; end: 10ae34927;  */

void FUN_10ae34908(long *param_1,long param_2,uint *param_3,long param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_5;
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    lVar5 = *param_1;
    uVar8 = *(uint *)(lVar5 + 4);
    uVar6 = (ulong)uVar8;
    if (1 < uVar8 && (int)(uVar8 ^ 0x7fffffff) < (int)uVar7) {
      func_0x000107c2b29c(0x1e,0,0x45,&UNK_10f6c6d7f,0x176);
      return;
    }
    if ((*(byte *)(lVar5 + 0x15) >> 2 & 1) != 0) {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,(long)(int)uVar7);
      *param_3 = (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
      return;
    }
    if ((int)uVar7 < 1) {
      *param_3 = 0;
      return;
    }
    if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) == 0) {
      iVar3 = *(int *)((long)param_1 + 0x6c);
      if (iVar3 != 0) {
        if (uVar8 != 0) {
          _memcpy(param_2,param_1 + 0xe,uVar6);
        }
        param_2 = param_2 + uVar6;
      }
      plVar4 = param_1;
      FUN_10ae3433c(param_1,param_2,param_3,param_4,param_5);
      if ((int)plVar4 == 0) {
        return;
      }
      if ((uVar8 < 2) || (*(int *)((long)param_1 + 100) != 0)) {
        *(undefined4 *)((long)param_1 + 0x6c) = 0;
      }
      else {
        *param_3 = *param_3 - uVar8;
        *(undefined4 *)((long)param_1 + 0x6c) = 1;
        _memcpy(param_1 + 0xe,param_2 + (int)*param_3,uVar6);
      }
      if (iVar3 == 0) {
        return;
      }
      *param_3 = *param_3 + uVar8;
      return;
    }
  }
  lVar5 = *param_1;
  uVar8 = *(uint *)(lVar5 + 4);
  if ((int)uVar8 < 2 || (int)uVar7 <= (int)(uVar8 ^ 0x7fffffff)) {
    if ((*(byte *)(lVar5 + 0x15) >> 2 & 1) == 0) {
      if ((int)uVar7 < 1) {
        *param_3 = 0;
      }
      else {
        uVar2 = *(uint *)((long)param_1 + 100);
        if (uVar2 == 0) {
          if ((uVar8 + 0x7fffffff & uVar7) == 0) {
            (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,param_5 & 0xffffffff);
            if ((int)param_1 != 0) {
              *param_3 = uVar7;
              return;
            }
            *param_3 = 0;
            return;
          }
          uVar8 = 0;
        }
        else {
          iVar3 = uVar8 - uVar2;
          lVar1 = (long)param_1 + 0x44;
          if ((int)uVar7 < iVar3) {
            _memcpy(lVar1 + (int)uVar2,param_4,param_5 & 0xffffffff);
            *(uint *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + uVar7;
            *param_3 = 0;
            return;
          }
          if (uVar8 != uVar2) {
            _memcpy(lVar1 + (int)uVar2,param_4,(long)iVar3);
            lVar5 = *param_1;
          }
          plVar4 = param_1;
          (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1,(long)(int)uVar8);
          if ((int)plVar4 == 0) {
            return;
          }
          param_4 = param_4 + iVar3;
          param_2 = param_2 + (int)uVar8;
          lVar5 = *param_1;
          uVar7 = uVar7 - iVar3;
        }
        *param_3 = uVar8;
        uVar8 = *(int *)(lVar5 + 4) - 1U & uVar7;
        iVar3 = uVar7 - uVar8;
        if (0 < iVar3) {
          plVar4 = param_1;
          (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,iVar3);
          if ((int)plVar4 == 0) {
            return;
          }
          *param_3 = *param_3 + iVar3;
        }
        if (uVar8 != 0) {
          _memcpy((long)param_1 + 0x44,param_4 + iVar3,(long)(int)uVar8);
        }
        *(uint *)((long)param_1 + 100) = uVar8;
      }
    }
    else {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,param_4,(long)(int)uVar7);
      if (-1 < (int)(uint)param_1) {
        *param_3 = (uint)param_1;
      }
    }
  }
  else {
    func_0x000107c2b29c(0x1e,0,0x45,&UNK_10f6c6d7f,0x100);
  }
  return;
}



/* Entry: 10ae34928; end: 10ae34c67;  */

undefined8 FUN_10ae34928(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0x13310998;
  _pthread_once(0x113310998,FUN_10ae3d554);
  if (iVar1 == 0) {
    return 0x113836a80;
  }
  _abort();
  iVar1 = 0x133109a8;
  _pthread_once(0x1133109a8,FUN_10ae3d948);
  if (iVar1 == 0) {
    return 0x113836ac0;
  }
  _abort();
  iVar1 = 0x133109b8;
  _pthread_once(0x1133109b8,FUN_10ae3dc6c);
  if (iVar1 == 0) {
    return 0x1137ed3d0;
  }
  _abort();
  iVar1 = 0x133109c8;
  _pthread_once(0x1133109c8,FUN_10ae3ddec);
  if (iVar1 == 0) {
    return 0x113836b00;
  }
  _abort();
  iVar1 = 0x133109d8;
  _pthread_once(0x1133109d8,FUN_10ae3e42c);
  if (iVar1 == 0) {
    return 0x113836b40;
  }
  _abort();
  iVar1 = 0x133109e8;
  _pthread_once(0x1133109e8,0x10ae3e474);
  if (iVar1 == 0) {
    return 0x113836b80;
  }
  _abort();
  iVar1 = 0x133109f8;
  _pthread_once(0x1133109f8,0x10ae3e4bc);
  if (iVar1 == 0) {
    return 0x1137ed410;
  }
  _abort();
  iVar1 = 0x13310a08;
  _pthread_once(0x113310a08,0x10ae3e504);
  if (iVar1 == 0) {
    return 0x1137ed450;
  }
  _abort();
  iVar1 = 0x13310a18;
  _pthread_once(0x113310a18,0x10ae3e554);
  if (iVar1 == 0) {
    return 0x113836bc0;
  }
  _abort();
  iVar1 = 0x13310a28;
  _pthread_once(0x113310a28,0x10ae3e59c);
  if (iVar1 == 0) {
    return 0x113836c00;
  }
  _abort();
  iVar1 = 0x13310a38;
  _pthread_once(0x113310a38,0x10ae3e5e4);
  if (iVar1 == 0) {
    return 0x1137ed490;
  }
  _abort();
  iVar1 = 0x13310a48;
  _pthread_once(0x113310a48,0x10ae3e62c);
  if (iVar1 == 0) {
    return 0x113836c40;
  }
  _abort();
  iVar1 = 0x13310a58;
  _pthread_once(0x113310a58,0x10ae3e67c);
  if (iVar1 == 0) {
    return 0x1137ed4d0;
  }
  _abort();
  iVar1 = 0x13310a68;
  _pthread_once(0x113310a68,FUN_10ae3e73c);
  if (iVar1 == 0) {
    return 0x1137ed510;
  }
  _abort();
  iVar1 = 0x13310a78;
  _pthread_once(0x113310a78,0x10ae3e790);
  if (iVar1 == 0) {
    return 0x1137ed550;
  }
  _abort();
  uVar2 = 0x113310a98;
  _pthread_once(0x113310a98,FUN_10ae34c68);
  if ((int)uVar2 == 0) {
    return 0x113836cc8;
  }
  _abort();
  uRam0000000113836cd8 = 0;
  uRam0000000113836ce8 = 0;
  uRam0000000113836d00 = 0;
  uRam0000000113836d08 = 0;
  uRam0000000113836cc8 = 0x10100c20;
  uRam0000000113836ccc = 1;
  puRam0000000113836cd0 = &UNK_1009e044c;
  puRam0000000113836ce0 = &UNK_1002298c0;
  puRam0000000113836cf0 = &UNK_1009f6c5c;
  puRam0000000113836cf8 = &UNK_1001ff5ac;
  return uVar2;
}



/* Entry: 10ae34c68; end: 10ae34cc3;  */

void FUN_10ae34c68(void)

{
  uRam0000000113836cd8 = 0;
  uRam0000000113836ce8 = 0;
  uRam0000000113836d00 = 0;
  uRam0000000113836d08 = 0;
  uRam0000000113836cc8 = 0x10100c20;
  uRam0000000113836ccc = 1;
  puRam0000000113836cd0 = &UNK_1009e044c;
  puRam0000000113836ce0 = &UNK_1002298c0;
  puRam0000000113836cf0 = &UNK_1009f6c5c;
  puRam0000000113836cf8 = &UNK_1001ff5ac;
  return;
}



/* Entry: 10ae34cc4; end: 10ae34cf7;  */

undefined8 FUN_10ae34cc4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310aa8;
  _pthread_once(0x113310aa8,FUN_10ae34cf8);
  if ((int)uVar1 == 0) {
    return 0x113836d10;
  }
  _abort();
  uRam0000000113836d20 = 0;
  uRam0000000113836d30 = 0;
  uRam0000000113836d48 = 0;
  uRam0000000113836d50 = 0;
  uRam0000000113836d10 = 0x10100c10;
  uRam0000000113836d14 = 1;
  pcRam0000000113836d18 = FUN_10ae3e7e4;
  puRam0000000113836d28 = &UNK_1002298c0;
  pcRam0000000113836d38 = FUN_10ae3e834;
  puRam0000000113836d40 = &UNK_1001ff5ac;
  return uVar1;
}



/* Entry: 10ae34cf8; end: 10ae34d53;  */

void FUN_10ae34cf8(void)

{
  uRam0000000113836d20 = 0;
  uRam0000000113836d30 = 0;
  uRam0000000113836d48 = 0;
  uRam0000000113836d50 = 0;
  uRam0000000113836d10 = 0x10100c10;
  uRam0000000113836d14 = 1;
  pcRam0000000113836d18 = FUN_10ae3e7e4;
  puRam0000000113836d28 = &UNK_1002298c0;
  pcRam0000000113836d38 = FUN_10ae3e834;
  puRam0000000113836d40 = &UNK_1001ff5ac;
  return;
}



/* Entry: 10ae34d54; end: 10ae34d87;  */

undefined8 FUN_10ae34d54(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310ab8;
  _pthread_once(0x113310ab8,FUN_10ae34d88);
  if ((int)uVar1 == 0) {
    return 0x113836d58;
  }
  _abort();
  uRam0000000113836d68 = 0;
  uRam0000000113836d78 = 0;
  uRam0000000113836d90 = 0;
  uRam0000000113836d98 = 0;
  uRam0000000113836d58 = 0x10100c20;
  uRam0000000113836d5c = 1;
  pcRam0000000113836d60 = FUN_10ae3e7e4;
  puRam0000000113836d70 = &UNK_1002298c0;
  pcRam0000000113836d80 = FUN_10ae3e834;
  puRam0000000113836d88 = &UNK_1001ff5ac;
  return uVar1;
}



/* Entry: 10ae34d88; end: 10ae34de3;  */

void FUN_10ae34d88(void)

{
  uRam0000000113836d68 = 0;
  uRam0000000113836d78 = 0;
  uRam0000000113836d90 = 0;
  uRam0000000113836d98 = 0;
  uRam0000000113836d58 = 0x10100c20;
  uRam0000000113836d5c = 1;
  pcRam0000000113836d60 = FUN_10ae3e7e4;
  puRam0000000113836d70 = &UNK_1002298c0;
  pcRam0000000113836d80 = FUN_10ae3e834;
  puRam0000000113836d88 = &UNK_1001ff5ac;
  return;
}



/* Entry: 10ae34de4; end: 10ae34e17;  */

undefined8 FUN_10ae34de4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310ad8;
  _pthread_once(0x113310ad8,FUN_10ae34e18);
  if ((int)uVar1 == 0) {
    return 0x113836de8;
  }
  _abort();
  uRam0000000113836df8 = 0;
  uRam0000000113836e08 = 0;
  uRam0000000113836e20 = 0;
  uRam0000000113836e28 = 0;
  uRam0000000113836de8 = 0x10100c20;
  uRam0000000113836dec = 1;
  puRam0000000113836df0 = &UNK_1001fe90c;
  puRam0000000113836e00 = &UNK_1002298c0;
  puRam0000000113836e10 = &UNK_1002293c8;
  puRam0000000113836e18 = &UNK_1001ff5ac;
  return uVar1;
}



/* Entry: 10ae34e18; end: 10ae34e7f;  */

void FUN_10ae34e18(void)

{
  uRam0000000113836df8 = 0;
  uRam0000000113836e08 = 0;
  uRam0000000113836e20 = 0;
  uRam0000000113836e28 = 0;
  uRam0000000113836de8 = 0x10100c20;
  uRam0000000113836dec = 1;
  puRam0000000113836df0 = &UNK_1001fe90c;
  puRam0000000113836e00 = &UNK_1002298c0;
  puRam0000000113836e10 = &UNK_1002293c8;
  puRam0000000113836e18 = &UNK_1001ff5ac;
  return;
}



/* Entry: 10ae34e80; end: 10ae34eaf;  */

void FUN_10ae34e80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x20;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  return;
}



/* Entry: 10ae34eb0; end: 10ae34f8f;  */

undefined8 FUN_10ae34eb0(undefined8 *param_1)

{
  func_0x000107c2b534(param_1[1]);
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    (**(code **)param_1[3])(param_1[2]);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return 1;
}



/* Entry: 10ae34f90; end: 10ae34f9b;  */

undefined8 FUN_10ae34f90(long *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar3 = *param_1;
  if (lVar3 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x2c);
    puVar2 = (ulong *)((ulong)uVar1 + 8);
    func_0x000107c610a0();
    if (puVar2 == (ulong *)0x0) {
      func_0x0001004d2c58(0x1d,0,0x41,&UNK_10f6c6e00,0xd2);
      return 0;
    }
    *puVar2 = (ulong)uVar1;
    func_0x0001001e33e0(param_1[1]);
    *param_1 = param_2;
    param_1[1] = (long)(puVar2 + 1);
    lVar3 = param_2;
  }
  (**(code **)(lVar3 + 0x10))(param_1);
  return 1;
}



/* Entry: 10ae34f9c; end: 10ae34fe3;  */

undefined8 FUN_10ae34f9c(undefined8 *param_1)

{
  func_0x000107c2b41c();
  func_0x000107c2b534(param_1[1]);
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    (**(code **)param_1[3])(param_1[2]);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return 1;
}



/* Entry: 10ae34fe4; end: 10ae35017;  */

undefined8 FUN_10ae34fe4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310ae8;
  _pthread_once(0x113310ae8,FUN_10ae35018);
  if ((int)uVar1 == 0) {
    return 0x1137ed590;
  }
  _abort();
  uRam00000001137ed590 = 0x1000000101;
  uRam00000001137ed598 = 0;
  pcRam00000001137ed5a0 = FUN_10ae3e8e0;
  uRam00000001137ed5a8 = 0x10ae3e904;
  uRam00000001137ed5b0 = 0x10ae3e90c;
  uRam00000001137ed5b8 = 0x5c00000040;
  return uVar1;
}



/* Entry: 10ae35018; end: 10ae3505f;  */

void FUN_10ae35018(void)

{
  uRam00000001137ed590 = 0x1000000101;
  uRam00000001137ed598 = 0;
  pcRam00000001137ed5a0 = FUN_10ae3e8e0;
  uRam00000001137ed5a8 = 0x10ae3e904;
  uRam00000001137ed5b0 = 0x10ae3e90c;
  uRam00000001137ed5b8 = 0x5c00000040;
  return;
}



/* Entry: 10ae35060; end: 10ae35093;  */

undefined8 FUN_10ae35060(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310af8;
  _pthread_once(0x113310af8,FUN_10ae35094);
  if ((int)uVar1 == 0) {
    return 0x113836e30;
  }
  _abort();
  uRam0000000113836e30 = 0x1000000004;
  uRam0000000113836e38 = 0;
  uRam0000000113836e40 = 0x10ae3e91c;
  uRam0000000113836e48 = 0x10ae3e940;
  uRam0000000113836e50 = 0x10ae3e948;
  uRam0000000113836e58 = 0x5c00000040;
  return uVar1;
}



/* Entry: 10ae35094; end: 10ae350db;  */

void FUN_10ae35094(void)

{
  uRam0000000113836e30 = 0x1000000004;
  uRam0000000113836e38 = 0;
  uRam0000000113836e40 = 0x10ae3e91c;
  uRam0000000113836e48 = 0x10ae3e940;
  uRam0000000113836e50 = 0x10ae3e948;
  uRam0000000113836e58 = 0x5c00000040;
  return;
}



/* Entry: 10ae350dc; end: 10ae3510f;  */

undefined8 FUN_10ae350dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310b18;
  _pthread_once(0x113310b18,FUN_10ae35110);
  if ((int)uVar1 == 0) {
    return 0x1137ed5c0;
  }
  _abort();
  uRam00000001137ed5c0 = 0x1c000002a3;
  uRam00000001137ed5c8 = 0;
  uRam00000001137ed5d0 = 0x10ae3e958;
  uRam00000001137ed5d8 = 0x10ae3e98c;
  uRam00000001137ed5e0 = 0x10ae3e994;
  uRam00000001137ed5e8 = 0x7000000040;
  return uVar1;
}



/* Entry: 10ae35110; end: 10ae35157;  */

void FUN_10ae35110(void)

{
  uRam00000001137ed5c0 = 0x1c000002a3;
  uRam00000001137ed5c8 = 0;
  uRam00000001137ed5d0 = 0x10ae3e958;
  uRam00000001137ed5d8 = 0x10ae3e98c;
  uRam00000001137ed5e0 = 0x10ae3e994;
  uRam00000001137ed5e8 = 0x7000000040;
  return;
}



/* Entry: 10ae35158; end: 10ae3518b;  */

undefined8 FUN_10ae35158(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310b38;
  _pthread_once(0x113310b38,FUN_10ae3518c);
  if ((int)uVar1 == 0) {
    return 0x113836ec0;
  }
  _abort();
  uRam0000000113836ec0 = 0x30000002a1;
  uRam0000000113836ec8 = 0;
  uRam0000000113836ed0 = 0x10ae3e9a4;
  uRam0000000113836ed8 = 0x10ae3e9e4;
  uRam0000000113836ee0 = 0x10ae3e9ec;
  uRam0000000113836ee8 = 0xd800000080;
  return uVar1;
}



/* Entry: 10ae3518c; end: 10ae351d3;  */

void FUN_10ae3518c(void)

{
  uRam0000000113836ec0 = 0x30000002a1;
  uRam0000000113836ec8 = 0;
  uRam0000000113836ed0 = 0x10ae3e9a4;
  uRam0000000113836ed8 = 0x10ae3e9e4;
  uRam0000000113836ee0 = 0x10ae3e9ec;
  uRam0000000113836ee8 = 0xd800000080;
  return;
}



/* Entry: 10ae351d4; end: 10ae35207;  */

undefined8 FUN_10ae351d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310b48;
  _pthread_once(0x113310b48,FUN_10ae35208);
  if ((int)uVar1 == 0) {
    return 0x113836ef0;
  }
  _abort();
  uRam0000000113836ef0 = 0x40000002a2;
  uRam0000000113836ef8 = 0;
  uRam0000000113836f00 = 0x10ae3e9fc;
  uRam0000000113836f08 = 0x10ae3ea3c;
  uRam0000000113836f10 = 0x10ae3ea44;
  uRam0000000113836f18 = 0xd800000080;
  return uVar1;
}



/* Entry: 10ae35208; end: 10ae3524f;  */

void FUN_10ae35208(void)

{
  uRam0000000113836ef0 = 0x40000002a2;
  uRam0000000113836ef8 = 0;
  uRam0000000113836f00 = 0x10ae3e9fc;
  uRam0000000113836f08 = 0x10ae3ea3c;
  uRam0000000113836f10 = 0x10ae3ea44;
  uRam0000000113836f18 = 0xd800000080;
  return;
}



/* Entry: 10ae35250; end: 10ae35283;  */

undefined8 FUN_10ae35250(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310b58;
  _pthread_once(0x113310b58,FUN_10ae35284);
  if ((int)uVar1 == 0) {
    return 0x1137ed5f0;
  }
  _abort();
  uRam00000001137ed5f0 = 0x20000003c2;
  uRam00000001137ed5f8 = 0;
  uRam00000001137ed600 = 0x10ae3ea54;
  uRam00000001137ed608 = 0x10ae3ea94;
  uRam00000001137ed610 = 0x10ae3ea9c;
  uRam00000001137ed618 = 0xd800000080;
  return uVar1;
}


