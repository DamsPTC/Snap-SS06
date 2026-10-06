/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10975dba8; end: 10975e42b;  */

ushort * FUN_10975dba8(long param_1,long *param_2,ulong param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lStack_bc8;
  long lStack_bc0;
  short sStack_ba0;
  undefined6 uStack_b9e;
  long lStack_b98;
  long lStack_b90;
  long lStack_b88;
  ushort uStack_b78;
  undefined6 uStack_b76;
  ulong uStack_b70;
  long lStack_b68;
  long lStack_b60;
  long lStack_b58;
  ushort auStack_b48 [632];
  ushort uStack_658;
  ushort uStack_656;
  short sStack_654;
  short sStack_652;
  ushort uStack_650;
  short sStack_64e;
  short sStack_64c;
  ushort uStack_64a;
  undefined8 uStack_618;
  byte bStack_5d6;
  long lStack_5d0;
  code *pcStack_5b8;
  ulong uStack_1d0;
  undefined1 uStack_1bf;
  
  if (param_1 == 0) {
    return (ushort *)0x25;
  }
  uVar15 = param_4 | 3;
  uVar20 = uVar15;
  if ((param_2 == (long *)0x0) || (uVar20 = param_4, (param_4 & 1) != 0)) {
    param_4 = uVar20;
    lVar18 = *(long *)(param_1 + 8);
  }
  else {
    lVar18 = *(long *)(param_1 + 8);
    if (*param_2 != lVar18) {
      return (ushort *)0x23;
    }
  }
  lVar24 = *(long *)(lVar18 + 0x490);
  lVar17 = *(long *)(lVar18 + 0x398);
  puVar23 = *(undefined8 **)(lVar17 + 0x50);
  uVar20 = (uint)param_3;
  if ((*(int *)(lVar24 + 0x74c) == 0xffff) || (*(long *)(lVar24 + 0x528) == 0)) {
    if (*(uint *)(lVar24 + 0x24) <= uVar20) {
      return (ushort *)0x6;
    }
  }
  else if (uVar20 != 0) {
    if (*(uint *)(lVar24 + 0x530) < uVar20) {
      return (ushort *)0x6;
    }
    uVar1 = *(ushort *)(*(long *)(lVar24 + 0x528) + (param_3 & 0xffffffff) * 2);
    param_3 = (ulong)uVar1;
    if (uVar1 == 0) {
      return (ushort *)0x6;
    }
  }
  if ((param_4 & 0x400) != 0) {
    param_4 = uVar15;
  }
  *(undefined8 *)(param_1 + 0x140) = 0x10000;
  *(long *)(param_1 + 0x138) = 0x10000;
  if (param_2 != (long *)0x0) {
    lVar12 = param_2[4];
    *(long *)(param_1 + 0x140) = param_2[5];
    *(long *)(param_1 + 0x138) = lVar12;
    if ((((param_2[0xb] != 0xffffffff) && ((param_4 >> 3 & 1) == 0)) &&
        (lVar12 = *param_2, (*(ushort *)(lVar12 + 10) & 0x7fff) == 0)) &&
       ((-1 < *(char *)(lVar12 + 0x11) &&
        (lVar13 = lVar18,
        (**(code **)(*(long *)(lVar12 + 0x370) + 0x98))
                  (lVar18,param_2[0xb],param_3,param_4,*(undefined8 *)(lVar12 + 0xc0),param_1 + 0x98
                   ,&uStack_658), (int)lVar13 == 0)))) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(ulong *)(param_1 + 0x30) = (ulong)uStack_656 << 6;
      *(ulong *)(param_1 + 0x38) = (ulong)uStack_658 << 6;
      *(long *)(param_1 + 0x40) = (long)sStack_654 << 6;
      *(long *)(param_1 + 0x48) = (long)sStack_652 << 6;
      *(ulong *)(param_1 + 0x50) = (ulong)uStack_650 << 6;
      *(long *)(param_1 + 0x58) = (long)sStack_64e << 6;
      *(long *)(param_1 + 0x60) = (long)sStack_64c << 6;
      *(ulong *)(param_1 + 0x68) = (ulong)uStack_64a << 6;
      *(undefined4 *)(param_1 + 0x90) = 0x62697473;
      bVar9 = (param_4 & 0x10) != 0;
      if (bVar9) {
        sStack_654 = sStack_64e;
      }
      if (bVar9) {
        sStack_652 = sStack_64c;
      }
      *(int *)(param_1 + 0xc0) = (int)sStack_654;
      *(int *)(param_1 + 0xc4) = (int)sStack_652;
      (**(code **)(*(long *)(lVar18 + 0x370) + 0x150))(lVar18,0,param_3,&uStack_b70,auStack_b48);
      *(ulong *)(param_1 + 0x70) = (ulong)auStack_b48[0];
      if ((*(char *)(lVar18 + 0x1f0) == '\0') || (*(short *)(lVar18 + 0x21e) == 0)) {
        if (*(short *)(lVar18 + 0x268) == -1) {
          sVar2 = *(short *)(lVar18 + 0x198);
          sVar3 = *(short *)(lVar18 + 0x19a);
        }
        else {
          sVar2 = *(short *)(lVar18 + 0x2c2);
          sVar3 = *(short *)(lVar18 + 0x2c4);
        }
        uVar19 = (long)sVar2 - (long)sVar3;
      }
      else {
        (**(code **)(*(long *)(lVar18 + 0x370) + 0x150))(lVar18,1,param_3,&uStack_b70,auStack_b48);
        uVar19 = (ulong)auStack_b48[0];
      }
      *(ulong *)(param_1 + 0x78) = uVar19;
      return (ushort *)0x0;
    }
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return (ushort *)0x6;
  }
  if (((param_4 & 0x1100000) == 0x100000) && (*(long *)(lVar18 + 0x5a0) != 0)) {
    lVar12 = *(long *)(lVar18 + 0x370);
    if ((param_2 != (long *)0x0) &&
       (((short)param_2[3] == 0 || (*(short *)((long)param_2 + 0x1a) == 0)))) {
      return (ushort *)0x24;
    }
    lVar13 = param_1;
    (**(code **)(lVar12 + 0x178))(param_1,param_3);
    if ((int)lVar13 == 0) {
      lVar17 = param_2[4];
      lVar24 = param_2[5];
      *(undefined4 *)(param_1 + 0x90) = 0x53564720;
      (**(code **)(lVar12 + 0x150))(lVar18,0,param_3,&uStack_658,auStack_b48);
      (**(code **)(lVar12 + 0x150))(lVar18,1,param_3,&uStack_658,&uStack_b70);
      lVar17 = lVar17 * (ulong)auStack_b48[0];
      *(long *)(param_1 + 0x50) = lVar17 + (lVar17 >> 0x3f) + 0x8000 >> 0x10;
      *(ulong *)(param_1 + 0x70) = (ulong)auStack_b48[0];
      *(ulong *)(param_1 + 0x78) = uStack_b70 & 0xffff;
      lVar24 = lVar24 * (uStack_b70 & 0xffff);
      *(long *)(param_1 + 0x68) = lVar24 + (lVar24 >> 0x3f) + 0x8000 >> 0x10;
      return (ushort *)0x0;
    }
  }
  if (*(int *)(lVar24 + 0xb30) == 0) {
    bVar9 = false;
    lStack_b68 = *(long *)(lVar24 + 0x6b0);
    uStack_b70 = *(ulong *)(lVar24 + 0x6a8);
    lStack_b58 = *(long *)(lVar24 + 0x6c0);
    lStack_b60 = *(long *)(lVar24 + 0x6b8);
    lStack_bc0 = *(long *)(lVar24 + 0x6d8);
    lStack_bc8 = *(long *)(lVar24 + 0x6e0);
  }
  else {
    lVar12 = lVar24 + 0x1338;
    FUN_10975f478(lVar12,param_3);
    uVar15 = (uint)lVar12;
    if (*(uint *)(lVar24 + 0xb30) <= (uint)lVar12) {
      uVar15 = *(uint *)(lVar24 + 0xb30) - 1;
    }
    lVar22 = *(long *)(lVar24 + 0x6d0);
    lVar13 = *(long *)(lVar24 + (ulong)(byte)uVar15 * 8 + 0xb38);
    lStack_b68 = *(long *)(lVar13 + 0x48);
    uStack_b70 = *(ulong *)(lVar13 + 0x40);
    lStack_b58 = *(long *)(lVar13 + 0x58);
    lStack_b60 = *(long *)(lVar13 + 0x50);
    lVar12 = *(long *)(lVar13 + 0x68);
    lStack_bc0 = *(long *)(lVar13 + 0x70);
    lStack_bc8 = *(long *)(lVar13 + 0x78);
    if (lVar22 == lVar12) {
      bVar9 = false;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x138);
      FUN_1097532ac(uVar10,lVar22,lVar12);
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 0x140);
      FUN_1097532ac(uVar10,lVar22,lVar12);
      *(undefined8 *)(param_1 + 0x140) = uVar10;
      bVar9 = true;
    }
  }
  *(undefined4 *)(param_1 + 200) = 0;
  bVar7 = (param_4 & 2) == 0;
  *(bool *)(param_1 + 0x130) = bVar7;
  *(byte *)(param_1 + 0x131) = (byte)param_4 & 1 ^ 1;
  *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
  (*(code *)*puVar23)(&uStack_658,lVar18,param_2,param_1,bVar7,param_4 >> 0x10 & 0xf,FUN_10976091c,
                      FUN_109760928);
  if ((param_4 >> 8 & 1) != 0) {
    uStack_1bf = 1;
  }
  bStack_5d6 = (byte)(param_4 >> 10) & 1;
  puVar11 = &uStack_658;
  (*(code *)puVar23[1])(puVar11,param_2,param_3);
  if ((int)puVar11 == 0) {
    puVar11 = (ushort *)(*(long *)(lVar18 + 0x490) + 0x538);
    FUN_10976097c(puVar11,param_3,&sStack_ba0,&uStack_b78);
    if ((int)puVar11 != 0) {
      return puVar11;
    }
    (**(code **)(lVar17 + 0x30))(auStack_b48,&uStack_658,0);
    lVar17 = CONCAT62(uStack_b9e,sStack_ba0);
    uVar10 = CONCAT62(uStack_b76,uStack_b78);
    puVar11 = auStack_b48;
    (*(code *)puVar23[2])(puVar11,lVar17,uVar10);
    bVar8 = ((uint)puVar11 & 0xff) == 0xa4;
    if (bVar8) {
      *(undefined1 *)(param_1 + 0x130) = 0;
      puVar11 = auStack_b48;
      (*(code *)puVar23[2])(puVar11,lVar17,uVar10);
      bVar9 = true;
    }
    if ((((*(long *)(*(long *)(lVar18 + 0x490) + 0x570) == 0) &&
         (lVar12 = *(long *)(*(long *)(lVar18 + 0x490) + 0x538), lVar12 != 0)) && (lVar17 != 0)) &&
       (*(long *)(lVar12 + 0x28) != 0)) {
      (**(code **)(*(long *)(lVar12 + 0x38) + 0x10))(*(long *)(lVar12 + 0x38),lVar17);
    }
    if ((int)puVar11 == 0) {
      if (*(long *)(lVar24 + 0x568) != 0) {
        *(long *)(param_1 + 0x100) =
             *(long *)(lVar24 + 0x570) +
             *(long *)(*(long *)(lVar24 + 0x568) + (param_3 & 0xffffffff) * 8) + -1;
        *(undefined8 *)(param_1 + 0x108) = uVar10;
      }
      (*pcStack_5b8)(&uStack_658);
      if ((param_4 & 0x400) == 0) {
        if (*(short *)(lVar18 + 0x1b6) != 0) {
          sStack_ba0 = 0;
          uStack_b78 = 0;
          (**(code **)(*(long *)(lVar18 + 0x370) + 0x150))(lVar18,0,param_3,&sStack_ba0,&uStack_b78)
          ;
          uStack_1d0 = (ulong)uStack_b78;
          *(long *)(param_1 + 0x40) = (long)sStack_ba0;
        }
        *(ulong *)(param_1 + 0x50) = uStack_1d0;
        *(ulong *)(param_1 + 0x70) = uStack_1d0;
        *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
        if ((*(char *)(lVar18 + 0x1f0) == '\0') || (*(short *)(lVar18 + 0x21e) == 0)) {
          if (*(short *)(lVar18 + 0x268) == -1) {
            sVar2 = *(short *)(lVar18 + 0x198);
            sVar3 = *(short *)(lVar18 + 0x19a);
          }
          else {
            sVar2 = *(short *)(lVar18 + 0x2c2);
            sVar3 = *(short *)(lVar18 + 0x2c4);
          }
          bVar5 = false;
          uVar19 = (long)sVar2 - (long)sVar3;
        }
        else {
          sStack_ba0 = 0;
          uStack_b78 = 0;
          bVar5 = true;
          (**(code **)(*(long *)(lVar18 + 0x370) + 0x150))(lVar18,1,param_3,&sStack_ba0,&uStack_b78)
          ;
          uVar19 = (ulong)uStack_b78;
          *(long *)(param_1 + 0x60) = (long)sStack_ba0;
        }
        lVar18 = lStack_b58;
        uVar6 = uStack_b70;
        *(ulong *)(param_1 + 0x68) = uVar19;
        *(ulong *)(param_1 + 0x78) = uVar19;
        *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
        uVar14 = 4;
        if ((param_2 != (long *)0x0) && (uVar14 = 0x104, 0x17 < *(ushort *)((long)param_2 + 0x1a)))
        {
          uVar14 = 4;
        }
        *(undefined4 *)(param_1 + 0xe8) = uVar14;
        lVar12 = -(ulong)(lStack_b60 == 0);
        lVar13 = -(ulong)(lStack_b58 == 0x10000);
        lVar17 = -(ulong)(uStack_b70 == 0x10000);
        lVar24 = -(ulong)(lStack_b68 == 0);
        auVar4[1] = ~(byte)((ulong)lVar17 >> 8);
        auVar4[0] = ~(byte)lVar17;
        auVar4[2] = ~(byte)((ulong)lVar17 >> 0x10);
        auVar4[3] = ~(byte)((ulong)lVar17 >> 0x18);
        auVar4[4] = ~(byte)lVar24;
        auVar4[5] = ~(byte)((ulong)lVar24 >> 8);
        auVar4[6] = ~(byte)((ulong)lVar24 >> 0x10);
        auVar4[7] = ~(byte)((ulong)lVar24 >> 0x18);
        auVar4[8] = ~(byte)lVar12;
        auVar4[9] = ~(byte)((ulong)lVar12 >> 8);
        auVar4[10] = ~(byte)((ulong)lVar12 >> 0x10);
        auVar4[0xb] = ~(byte)((ulong)lVar12 >> 0x18);
        auVar4[0xc] = ~(byte)lVar13;
        auVar4[0xd] = ~(byte)((ulong)lVar13 >> 8);
        auVar4[0xe] = ~(byte)((ulong)lVar13 >> 0x10);
        auVar4[0xf] = ~(byte)((ulong)lVar13 >> 0x18);
        uVar15 = NEON_umaxv(auVar4,4);
        if ((uVar15 & 1) != 0) {
          uVar21 = *(ulong *)(param_1 + 0xd0);
          if ((uVar21 != 0) && ((ulong)*(ushort *)(param_1 + 0xca) != 0)) {
            uVar19 = uVar21 + (ulong)*(ushort *)(param_1 + 0xca) * 0x10;
            do {
              FUN_1097547e4(uVar21,&uStack_b70);
              uVar21 = uVar21 + 0x10;
            } while (uVar21 < uVar19);
            uVar19 = *(ulong *)(param_1 + 0x68);
          }
          lVar17 = uVar6 * *(long *)(param_1 + 0x50);
          *(long *)(param_1 + 0x50) = lVar17 + (lVar17 >> 0x3f) + 0x8000 >> 0x10;
          uVar19 = (long)(lVar18 * uVar19 + ((long)(lVar18 * uVar19) >> 0x3f) + 0x8000) >> 0x10;
          *(ulong *)(param_1 + 0x68) = uVar19;
        }
        if (lStack_bc0 != 0 || lStack_bc8 != 0) {
          uVar1 = *(ushort *)(param_1 + 0xca);
          if (uVar1 != 0) {
            uVar15 = 0;
            plVar16 = *(long **)(param_1 + 0xd0);
            do {
              *plVar16 = *plVar16 + lStack_bc0;
              plVar16[1] = plVar16[1] + lStack_bc8;
              uVar15 = uVar15 + 1;
              plVar16 = plVar16 + 2;
            } while (uVar15 < uVar1);
          }
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + lStack_bc0;
          uVar19 = uVar19 + lStack_bc8;
          *(ulong *)(param_1 + 0x68) = uVar19;
        }
        if (((param_4 & 1) == 0) || (bVar9)) {
          lVar18 = *(long *)(param_1 + 0x138);
          lVar17 = *(long *)(param_1 + 0x140);
          if ((lStack_5d0 == 0 || (bVar8 || !bVar7)) && (*(ushort *)(param_1 + 0xca) != 0)) {
            uVar15 = *(ushort *)(param_1 + 0xca) + 1;
            plVar16 = *(long **)(param_1 + 0xd0);
            do {
              lVar24 = *plVar16 * lVar18;
              lVar12 = plVar16[1] * lVar17;
              *plVar16 = lVar24 + (lVar24 >> 0x3f) + 0x8000 >> 0x10;
              plVar16[1] = lVar12 + (lVar12 >> 0x3f) + 0x8000 >> 0x10;
              uVar15 = uVar15 - 1;
              plVar16 = plVar16 + 2;
            } while (1 < uVar15);
          }
          lVar18 = *(long *)(param_1 + 0x50) * lVar18;
          *(long *)(param_1 + 0x50) = lVar18 + (lVar18 >> 0x3f) + 0x8000 >> 0x10;
          lVar17 = uVar19 * lVar17;
          uVar19 = lVar17 + (lVar17 >> 0x3f) + 0x8000 >> 0x10;
          *(ulong *)(param_1 + 0x68) = uVar19;
        }
        FUN_109754288((undefined4 *)(param_1 + 200),&sStack_ba0);
        *(long *)(param_1 + 0x38) = lStack_b88 - lStack_b98;
        *(long *)(param_1 + 0x30) = lStack_b90 - CONCAT62(uStack_b9e,sStack_ba0);
        *(long *)(param_1 + 0x40) = CONCAT62(uStack_b9e,sStack_ba0);
        *(long *)(param_1 + 0x48) = lStack_b88;
        if (bVar5) {
          lVar18 = *(long *)(param_1 + 0x140) * *(long *)(param_1 + 0x60);
          *(long *)(param_1 + 0x58) =
               CONCAT62(uStack_b9e,sStack_ba0) - *(long *)(param_1 + 0x50) / 2;
          *(long *)(param_1 + 0x60) = lVar18 + (lVar18 >> 0x3f) + 0x8000 >> 0x10;
        }
        else if ((param_4 >> 4 & 1) != 0) {
          func_0x0001097551b4(param_1 + 0x30,uVar19);
        }
        return (ushort *)0x0;
      }
      lVar18 = *(long *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x40) = uStack_618;
      *(ulong *)(param_1 + 0x50) = uStack_1d0;
      *(long *)(lVar18 + 0x18) = lStack_b68;
      *(ulong *)(lVar18 + 0x10) = uStack_b70;
      *(long *)(lVar18 + 0x28) = lStack_b58;
      *(long *)(lVar18 + 0x20) = lStack_b60;
      *(long *)(lVar18 + 0x30) = lStack_bc0;
      *(long *)(lVar18 + 0x38) = lStack_bc8;
      *(undefined1 *)(lVar18 + 0xc) = 1;
      return (ushort *)0x0;
    }
    return puVar11;
  }
  return puVar11;
}



/* Entry: 10975e42c; end: 10975e467;  */

undefined8 FUN_10975e42c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x370);
  *param_4 = 0;
  param_4[1] = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0xb0))();
    *param_4 = (long)(int)param_1;
  }
  return 0;
}



/* Entry: 10975e468; end: 10975e853;  */

void FUN_10975e468(long param_1,ulong param_2,uint param_3,uint param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ushort uStack_56;
  ushort uStack_54;
  undefined1 auStack_52 [2];
  
  lVar4 = *(long *)(param_1 + 0x98);
  if (((uint)*(ulong *)(param_1 + 0x10) >> 3 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0x7fff0000;
    uVar5 = *(ulong *)(param_1 + 0x10) & 0x8000;
    if ((param_4 >> 4 & 1) == 0) {
      if ((uVar3 != 0 || uVar5 != 0) && ((*(byte *)(param_1 + 0x4c8) >> 1 & 1) == 0)) {
        return;
      }
      if (*(short *)(param_1 + 0x1b6) != 0) {
        if (param_3 == 0) {
          return;
        }
        uVar5 = (ulong)param_3;
        do {
          (**(code **)(*(long *)(param_1 + 0x370) + 0x150))(param_1,0,param_2,auStack_52,&uStack_56)
          ;
          *param_5 = (ulong)uStack_56;
          param_2 = (ulong)((int)param_2 + 1);
          uVar5 = uVar5 - 1;
          param_5 = param_5 + 1;
        } while (uVar5 != 0);
        return;
      }
    }
    else {
      if ((uVar3 != 0 || uVar5 != 0) && ((*(byte *)(param_1 + 0x4c8) >> 4 & 1) == 0)) {
        return;
      }
      if (*(char *)(param_1 + 0x1f0) != '\0') {
        if (param_3 == 0) {
          return;
        }
        uVar5 = (ulong)param_3;
        do {
          (**(code **)(*(long *)(param_1 + 0x370) + 0x150))(param_1,1,param_2,auStack_52,&uStack_54)
          ;
          *param_5 = (ulong)uStack_54;
          param_2 = (ulong)((int)param_2 + 1);
          uVar5 = uVar5 - 1;
          param_5 = param_5 + 1;
        } while (uVar5 != 0);
        return;
      }
    }
  }
  if (param_3 != 0) {
    lVar1 = 0x70;
    if ((param_4 & 0x10) != 0) {
      lVar1 = 0x78;
    }
    uVar5 = (ulong)param_3;
    do {
      lVar2 = lVar4;
      FUN_10975dba8(lVar4,*(undefined8 *)(param_1 + 0xa0),param_2,param_4 | 0x100);
      if ((int)lVar2 != 0) {
        return;
      }
      *param_5 = *(ulong *)(lVar4 + lVar1);
      param_2 = (ulong)((int)param_2 + 1);
      uVar5 = uVar5 - 1;
      param_5 = param_5 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10975e854; end: 10975e98f;  */

ulong FUN_10975e854(long param_1,ulong param_2)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x490);
  uVar1 = *(ushort *)(*(long *)(lVar3 + 0x520) + (param_2 & 0xffffffff) * 2);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0xffff) {
    if (uVar1 < 0x187) {
      if (*(long *)(lVar3 + 0x1360) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010975e8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + 0x1360) + 0x28))();
        return uVar2;
      }
    }
    else if (uVar1 - 0x187 < *(uint *)(lVar3 + 0x648)) {
      return *(ulong *)(*(long *)(lVar3 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
  }
  return 0;
}



/* Entry: 10975e990; end: 10975eba7;  */

undefined8 FUN_10975e990(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(char *)(param_1 + 0x4b8) != '\0') {
    return 6;
  }
  lVar5 = *(long *)(param_1 + 0x490);
  if (lVar5 == 0) {
    return 0;
  }
  puVar4 = *(ulong **)(lVar5 + 0x1370);
  if (puVar4 != (ulong *)0x0) goto LAB_10975ea68;
  puVar4 = *(ulong **)(param_1 + 0xb8);
  (*(code *)puVar4[1])(puVar4,0x38);
  if (puVar4 == (ulong *)0x0) {
    return 0x40;
  }
  uVar1 = *(uint *)(lVar5 + 0x668);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0xffff) {
LAB_10975e9ec:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar5 + 0x1360) == 0) goto LAB_10975e9ec;
    (**(code **)(*(long *)(lVar5 + 0x1360) + 0x28))();
  }
  else {
    if (*(uint *)(lVar5 + 0x648) <= uVar1 - 0x187) goto LAB_10975e9ec;
    uVar2 = *(ulong *)(*(long *)(lVar5 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
  }
  *puVar4 = uVar2;
  uVar1 = *(uint *)(lVar5 + 0x66c);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0xffff) {
LAB_10975ea00:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar5 + 0x1360) == 0) goto LAB_10975ea00;
    (**(code **)(*(long *)(lVar5 + 0x1360) + 0x28))();
  }
  else {
    if (*(uint *)(lVar5 + 0x648) <= uVar1 - 0x187) goto LAB_10975ea00;
    uVar2 = *(ulong *)(*(long *)(lVar5 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar4[1] = uVar2;
  uVar1 = *(uint *)(lVar5 + 0x674);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0xffff) {
LAB_10975ea14:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar5 + 0x1360) == 0) goto LAB_10975ea14;
    (**(code **)(*(long *)(lVar5 + 0x1360) + 0x28))();
  }
  else {
    if (*(uint *)(lVar5 + 0x648) <= uVar1 - 0x187) goto LAB_10975ea14;
    uVar2 = *(ulong *)(*(long *)(lVar5 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar4[2] = uVar2;
  uVar1 = *(uint *)(lVar5 + 0x678);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0xffff) {
LAB_10975ea28:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar5 + 0x1360) == 0) goto LAB_10975ea28;
    (**(code **)(*(long *)(lVar5 + 0x1360) + 0x28))();
  }
  else {
    if (*(uint *)(lVar5 + 0x648) <= uVar1 - 0x187) goto LAB_10975ea28;
    uVar2 = *(ulong *)(*(long *)(lVar5 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar4[3] = uVar2;
  uVar1 = *(uint *)(lVar5 + 0x67c);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0xffff) {
LAB_10975ea40:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar5 + 0x1360) == 0) goto LAB_10975ea40;
    (**(code **)(*(long *)(lVar5 + 0x1360) + 0x28))();
  }
  else {
    if (*(uint *)(lVar5 + 0x648) <= uVar1 - 0x187) goto LAB_10975ea40;
    uVar2 = *(ulong *)(*(long *)(lVar5 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
  }
  uVar3 = *(ulong *)(lVar5 + 0x688);
  puVar4[4] = uVar2;
  puVar4[5] = uVar3;
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(lVar5 + 0x680);
  *(short *)((long)puVar4 + 0x32) = (short)*(undefined8 *)(lVar5 + 0x690);
  *(short *)((long)puVar4 + 0x34) = (short)*(undefined8 *)(lVar5 + 0x698);
  *(ulong **)(lVar5 + 0x1370) = puVar4;
LAB_10975ea68:
  uVar3 = puVar4[1];
  uVar2 = *puVar4;
  uVar7 = puVar4[3];
  uVar6 = puVar4[2];
  uVar9 = puVar4[5];
  uVar8 = puVar4[4];
  param_2[6] = puVar4[6];
  param_2[3] = uVar7;
  param_2[2] = uVar6;
  param_2[5] = uVar9;
  param_2[4] = uVar8;
  param_2[1] = uVar3;
  *param_2 = uVar2;
  return 0;
}



/* Entry: 10975eba8; end: 10975ed1f;  */

undefined4 FUN_10975eba8(long param_1,ushort *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  byte *pbVar5;
  ushort *puVar6;
  byte *pbVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x490);
  if (lVar8 == 0) {
    return 0;
  }
  puVar6 = *(ushort **)(lVar8 + 0x13b8);
  if (puVar6 != (ushort *)0x0) goto LAB_10975ec1c;
  puVar6 = *(ushort **)(param_1 + 0xb8);
  (**(code **)(puVar6 + 4))(puVar6,2);
  if (puVar6 == (ushort *)0x0) {
    return 0x40;
  }
  *puVar6 = 0;
  uVar1 = *(uint *)(lVar8 + 0x748);
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0xffff) {
    if (uVar1 < 0x187) {
      if (*(long *)(lVar8 + 0x1360) != 0) {
        (**(code **)(*(long *)(lVar8 + 0x1360) + 0x28))();
        goto LAB_10975ec74;
      }
    }
    else if (uVar1 - 0x187 < *(uint *)(lVar8 + 0x648)) {
      uVar4 = *(ulong *)(*(long *)(lVar8 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
LAB_10975ec74:
      if ((uVar4 != 0) && (_strstr(), uVar4 != 0)) {
        pbVar7 = (byte *)(uVar4 + 7);
        pbVar5 = pbVar7;
        _strstr(pbVar7,&UNK_10f57f828);
        if (pbVar5 != (byte *)0x0 && pbVar7 != pbVar5) {
          do {
            bVar2 = *pbVar7;
            if (bVar2 - 0x30 < 10) {
              uVar3 = *puVar6;
              if (0x332 < uVar3 >> 3) {
LAB_10975ed18:
                *puVar6 = 0;
                break;
              }
              *puVar6 = uVar3 * 10;
              *puVar6 = ((short)(char)*pbVar7 + uVar3 * 10) - 0x30;
            }
            else if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002400U) == 0)
            goto LAB_10975ed18;
            pbVar7 = pbVar7 + 1;
          } while (pbVar7 != pbVar5);
        }
      }
    }
  }
  *(ushort **)(lVar8 + 0x13b8) = puVar6;
LAB_10975ec1c:
  *param_2 = *puVar6;
  return 0;
}



/* Entry: 10975ed20; end: 10975ed2b;  */

uint FUN_10975ed20(long param_1)

{
  return *(uint *)(param_1 + 0x10) >> 9 & 1;
}



/* Entry: 10975ed2c; end: 10975edb7;  */

long FUN_10975ed2c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x490);
  if (((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0) && (*(long *)(param_1 + 0x370) != 0)) {
    plVar1 = *(long **)(*(long *)(param_1 + 0xb0) + 8);
    FUN_10975421c(plVar1,&UNK_10f57f7a4);
    if ((plVar1 != (long *)0x0) &&
       (((*(code **)(*plVar1 + 0x40) != (code *)0x0 &&
         ((**(code **)(*plVar1 + 0x40))(), plVar1 != (long *)0x0)) &&
        ((code *)*plVar1 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010975ed98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*plVar1)(param_1);
      return param_1;
    }
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x638);
  }
  return lVar2;
}



/* Entry: 10975edb8; end: 10975efe7;  */

void FUN_10975edb8(long param_1,ulong param_2,char *param_3,ulong param_4)

{
  ushort uVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  
  lVar4 = *(long *)(param_1 + 0x490);
  if (*(char *)(lVar4 + 0x28) == '\x02') {
    plVar2 = *(long **)(*(long *)(param_1 + 0xb0) + 8);
    FUN_10975421c(plVar2,&UNK_10f57f7a4);
    if ((((plVar2 != (long *)0x0) && (*(code **)(*plVar2 + 0x40) != (code *)0x0)) &&
        ((**(code **)(*plVar2 + 0x40))(), plVar2 != (long *)0x0)) &&
       ((code *)*plVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010975ee40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*plVar2)(param_1,param_2,param_3,param_4);
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x1360) != 0) {
    uVar1 = *(ushort *)(*(long *)(lVar4 + 0x520) + (param_2 & 0xffffffff) * 2);
    pcVar3 = (char *)(ulong)uVar1;
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
      }
      else {
        if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) {
          return;
        }
        pcVar3 = *(char **)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
      }
      if (pcVar3 != (char *)0x0) {
        if (1 < (uint)param_4) {
          param_4 = param_4 & 0xffffffff;
          pcVar5 = param_3;
          do {
            param_3 = pcVar5;
            if (*pcVar3 == '\0') break;
            param_3 = pcVar5 + 1;
            *pcVar5 = *pcVar3;
            param_4 = param_4 - 1;
            pcVar3 = pcVar3 + 1;
            pcVar5 = param_3;
          } while (1 < param_4);
        }
        *param_3 = '\0';
      }
    }
  }
  return;
}



/* Entry: 10975efe8; end: 10975f087;  */

void FUN_10975efe8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((undefined *)param_1[2] != &UNK_110b0b4f0 && (undefined *)param_1[2] != &UNK_110b0b540) {
    plVar1 = *(long **)(*(long *)(*param_1 + 0xb0) + 8);
    FUN_10975421c(plVar1,&UNK_10f57f7a4);
    if ((((plVar1 != (long *)0x0) && (*(code **)(*plVar1 + 0x40) != (code *)0x0)) &&
        ((**(code **)(*plVar1 + 0x40))(), plVar1 != (long *)0x0)) &&
       ((code *)*plVar1 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010975f074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*plVar1)(param_1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10975f088; end: 10975f197;  */

undefined8 FUN_10975f088(long param_1,ulong *param_2,ulong *param_3,undefined4 *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x490);
  if (lVar4 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar4 + 0x74c);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0xffff) {
    return 6;
  }
  if (param_2 != (ulong *)0x0) {
    uVar3 = *(ulong *)(lVar4 + 0x1378);
    if (uVar3 == 0) {
      if (uVar1 < 0x187) {
        uVar3 = 0;
        if (*(long *)(lVar4 + 0x1360) != 0) {
          (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
          uVar3 = uVar2;
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar4 + 0x648)) {
        uVar3 = *(ulong *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
      }
      else {
        uVar3 = 0;
      }
      *(ulong *)(lVar4 + 0x1378) = uVar3;
    }
    *param_2 = uVar3;
  }
  if (param_3 == (ulong *)0x0) goto LAB_10975f13c;
  uVar2 = *(ulong *)(lVar4 + 0x1380);
  if (uVar2 == 0) {
    uVar1 = *(uint *)(lVar4 + 0x750);
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0xffff) {
LAB_10975f130:
      uVar2 = 0;
    }
    else if (uVar1 < 0x187) {
      if (*(long *)(lVar4 + 0x1360) == 0) goto LAB_10975f130;
      (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
    }
    else {
      if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) goto LAB_10975f130;
      uVar2 = *(ulong *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
    *(ulong *)(lVar4 + 0x1380) = uVar2;
  }
  *param_3 = uVar2;
LAB_10975f13c:
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  *param_4 = (int)*(undefined8 *)(lVar4 + 0x758);
  return 0;
}



/* Entry: 10975f198; end: 10975f22f;  */

undefined8 FUN_10975f198(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x490);
  *param_2 = 0;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x74c) != 0xffff)) {
    *param_2 = 1;
  }
  return 0;
}



/* Entry: 10975f230; end: 10975f477;  */

long ** FUN_10975f230(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long **pplVar4;
  long **pplVar5;
  uint uVar6;
  long lVar7;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  ulong uStack_58;
  
  pplVar4 = (long **)param_1[1];
  *(undefined8 **)(param_2 + 0x428) = param_1;
  *(undefined1 *)(param_2 + 0x421) = 0;
  lVar7 = *(long *)(param_2 + 200);
  if ((lVar7 == 0) || (*(long *)(param_2 + 0xd0) == 0)) {
    return (long **)0x0;
  }
  lVar1 = param_2 + 0x148;
  _bzero(lVar1,0x2d8);
  *(undefined8 *)(param_2 + 0x2e0) = 1;
  *(undefined4 *)(param_2 + 0x3e0) = 0xffffffff;
  *(undefined8 *)(param_2 + 1000) = 0xf5c;
  *(undefined8 *)(param_2 + 0x2d8) = 7;
  *(undefined8 *)(param_2 + 0x2d0) = 0x27a000;
  *(long *)(param_2 + 0x418) = param_2;
  *(undefined4 *)(param_2 + 0x450) = param_3;
  *(undefined8 *)(param_2 + 0x458) = param_4;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar6 = 0x61;
    uStack_64 = 0x2000;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xf5) + 1;
    uStack_64 = 0x5000;
  }
  plStack_98 = (long *)*param_1;
  lVar3 = *plStack_98;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_58 = (ulong)*(uint *)(param_2 + 0x134);
  lStack_60 = lVar1;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar6 >> 0x1c != 0) || ((**(code **)(lVar3 + 8))(lVar3,uVar6 << 3), lVar3 == 0)) {
      pplVar5 = (long **)0x0;
      lStack_78 = 0;
      goto LAB_10975f434;
    }
    lVar7 = *(long *)(param_2 + 200);
  }
  plVar2 = (long *)(lVar7 + param_1[3]);
  lStack_78 = lVar3;
  lStack_70 = lVar3;
  uStack_68 = uVar6;
  if ((code *)pplVar4[5] == (code *)0x0) {
    if (pplVar4[1] < plVar2) goto LAB_10975f36c;
  }
  else {
    pplVar5 = pplVar4;
    (*(code *)pplVar4[5])(pplVar4,plVar2,0,0);
    if (pplVar5 != (long **)0x0) {
LAB_10975f36c:
      pplVar5 = (long **)0x55;
      goto LAB_10975f434;
    }
  }
  pplVar4[2] = plVar2;
  pplVar5 = pplVar4;
  func_0x00010975780c(pplVar4,*(undefined8 *)(param_2 + 0xd0));
  if ((int)pplVar5 != 0) goto LAB_10975f434;
  pplVar5 = &plStack_98;
  func_0x00010975f75c(pplVar5,pplVar4[8],pplVar4[9]);
  if (pplVar4[5] != (long *)0x0) {
    if (*pplVar4 != (long *)0x0) {
      (*(code *)pplVar4[7][2])();
    }
    *pplVar4 = (long *)0x0;
  }
  pplVar4[8] = (long *)0x0;
  pplVar4[9] = (long *)0x0;
  if ((int)pplVar5 != 0) goto LAB_10975f434;
  *(byte *)(param_2 + 0x148) = *(byte *)(param_2 + 0x148) & 0xfe;
  lVar7 = *(long *)(param_2 + 0x3f0);
  if (lVar7 < 0) {
    lVar7 = -lVar7;
LAB_10975f3fc:
    *(long *)(param_2 + 0x3f0) = lVar7;
  }
  else if (lVar7 == 0) {
    lVar7 = 0x3ade68b1;
    goto LAB_10975f3fc;
  }
  if (1000 < *(ulong *)(param_2 + 0x2d8)) {
    *(undefined8 *)(param_2 + 0x2d8) = 7;
  }
  if (*(ulong *)(param_2 + 0x2e0) < 0x3e9) {
    pplVar5 = (long **)0x0;
  }
  else {
    pplVar5 = (long **)0x0;
    *(undefined8 *)(param_2 + 0x2e0) = 1;
  }
LAB_10975f434:
  *(undefined8 *)(param_2 + 0x468) = *(undefined8 *)(param_2 + 0x460);
  *(undefined4 *)(param_2 + 0x470) = 0;
  if (lStack_78 != 0) {
    (**(code **)(*plStack_98 + 0x10))();
  }
  return pplVar5;
}



/* Entry: 10975f478; end: 10975f507;  */

char FUN_10975f478(char *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar3 = *(ushort **)(param_1 + 8);
  if (puVar3 != (ushort *)0x0) {
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
        return param_1[0x1c];
      }
      puVar4 = puVar3 + 1;
      uVar5 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
      do {
        if (param_2 < uVar5) {
          return '\0';
        }
        uVar1 = (uint)(*(ushort *)((long)puVar4 + 1) >> 8) |
                (*(ushort *)((long)puVar4 + 1) & 0xff00ff) << 8;
        if (param_2 < uVar1) {
          uVar2 = *puVar4;
          *(uint *)(param_1 + 0x14) = uVar5;
          *(uint *)(param_1 + 0x18) = uVar1 - uVar5;
          param_1[0x1c] = (char)uVar2;
          return (char)uVar2;
        }
        puVar4 = (ushort *)((long)puVar4 + 3);
        uVar5 = uVar1;
      } while (puVar4 < (ushort *)((long)puVar3 + (ulong)*(uint *)(param_1 + 0x10)));
    }
    else if (*param_1 == '\0') {
      return *(char *)((long)puVar3 + (ulong)param_2);
    }
  }
  return '\0';
}



/* Entry: 10975f508; end: 10975f55b;  */

undefined8 FUN_10975f508(char *param_1,int param_2,uint param_3,undefined8 param_4)

{
  if (((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
     (*(uint *)(param_1 + 0x14) == param_3)) {
    if ((param_3 != 0) &&
       (_memcmp(param_4,*(undefined8 *)(param_1 + 0x18),(ulong)param_3 << 3), (int)param_4 != 0)) {
      return 1;
    }
    return 0;
  }
  return 1;
}



/* Entry: 10975f55c; end: 10975faf7;  */

int FUN_10975f55c(undefined1 *param_1,uint param_2,uint param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  int iStack_64;
  
  iStack_64 = 0;
  lVar14 = *(long *)(param_1 + 8);
  puVar11 = *(undefined4 **)(lVar14 + 0x10);
  if ((((param_3 == 0) || (param_4 != (long *)0x0)) &&
      ((*param_1 = 0, param_3 == 0 || (param_3 == *(ushort *)(lVar14 + 0x13a8))))) &&
     (param_2 < *(uint *)(lVar14 + 0x1398))) {
    piVar1 = (int *)(*(long *)(lVar14 + 0x13a0) + (ulong)param_2 * 0x10);
    uVar2 = *piVar1 + 1;
    puVar4 = puVar11;
    func_0x000109755910(puVar11,4,*(undefined4 *)(param_1 + 0x20),(ulong)uVar2,
                        *(undefined8 *)(param_1 + 0x28),&iStack_64);
    *(undefined4 **)(param_1 + 0x28) = puVar4;
    if (iStack_64 == 0) {
      *(uint *)(param_1 + 0x20) = uVar2;
      if (uVar2 != 0) {
        uVar16 = 0;
        do {
          if (uVar16 == 0) {
            *puVar4 = 0x10000;
          }
          else {
            uVar3 = *(uint *)(*(long *)(piVar1 + 2) + uVar16 * 4 + -4);
            if (*(uint *)(lVar14 + 0x13ac) <= uVar3) goto LAB_10975f738;
            if (param_3 == 0) {
LAB_10975f6bc:
              puVar4[uVar16] = 0;
            }
            else {
              lVar5 = 0x10000;
              puVar4[uVar16] = 0x10000;
              plVar15 = (long *)(*(long *)(*(long *)(lVar14 + 0x13b0) + (ulong)uVar3 * 8) + 0x10);
              plVar12 = param_4;
              uVar13 = (ulong)param_3;
              do {
                lVar7 = plVar15[-1];
                lVar8 = *plVar12;
                if (lVar7 != 0 && lVar7 != lVar8) {
                  lVar9 = plVar15[-2];
                  if (lVar8 - lVar9 == 0 || lVar8 < lVar9) goto LAB_10975f6bc;
                  lVar10 = *plVar15;
                  lVar6 = lVar10 - lVar8;
                  if (lVar6 == 0 || lVar10 < lVar8) goto LAB_10975f6bc;
                  lVar5 = (long)(int)lVar5;
                  if (lVar8 < lVar7) {
                    lVar7 = lVar7 - lVar9;
                    lVar6 = lVar8 - lVar9;
                  }
                  else {
                    lVar7 = lVar10 - lVar7;
                  }
                  FUN_1097532ac(lVar5,lVar6,lVar7);
                  puVar4[uVar16] = (int)lVar5;
                }
                plVar15 = plVar15 + 3;
                uVar13 = uVar13 - 1;
                plVar12 = plVar12 + 1;
              } while (uVar13 != 0);
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar2);
      }
      *(uint *)(param_1 + 0x10) = param_2;
      if (param_3 != 0) {
        func_0x000109755910(puVar11,8,*(undefined4 *)(param_1 + 0x14),(ulong)param_3,
                            *(undefined8 *)(param_1 + 0x18),&iStack_64);
        *(undefined4 **)(param_1 + 0x18) = puVar11;
        if (iStack_64 != 0) {
          return iStack_64;
        }
        _memcpy(puVar11,param_4,(ulong)param_3 << 3);
      }
      iStack_64 = 0;
      *(uint *)(param_1 + 0x14) = param_3;
      *param_1 = 1;
    }
  }
  else {
LAB_10975f738:
    iStack_64 = 3;
  }
  return iStack_64;
}



/* Entry: 10975faf8; end: 10975fb6f;  */

ulong FUN_10975faf8(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*param_2 == 0xff) {
    return (long)(((ulong)((uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 | (uint)param_2[3]) <<
                  0x28) + 0x800000000000) >> 0x30;
  }
  if (*param_2 == 0x1e) {
    FUN_109760360(param_2,*(undefined8 *)(param_1 + 0x10),0,0);
    return (long)param_2 >> 0x10;
  }
  pbVar3 = *(byte **)(param_1 + 0x10);
  pbVar4 = param_2 + 1;
  bVar1 = *param_2;
  if (bVar1 == 0x1d) {
    if ((param_2 + 5 <= pbVar3) || (pbVar3 < pbVar4)) {
      uVar2 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
      return (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
    }
  }
  else if (bVar1 == 0x1c) {
    if ((param_2 + 3 <= pbVar3) || (pbVar3 < pbVar4)) {
      return (long)(short)((ushort)param_2[1] << 8) | (ulong)param_2[2];
    }
  }
  else {
    if (bVar1 < 0xf7) {
      return (ulong)bVar1 - 0x8b;
    }
    if (bVar1 < 0xfb) {
      if (param_2 + 2 <= pbVar3 || pbVar3 < pbVar4) {
        return (ulong)(CONCAT11(bVar1,*pbVar4) - 0xf694);
      }
    }
    else if (param_2 + 2 <= pbVar3 || pbVar3 < pbVar4) {
      return 0xfa94 - (ulong)CONCAT11(bVar1,*pbVar4);
    }
  }
  return 0;
}



/* Entry: 10975fb70; end: 10975fdd3;  */

long FUN_10975fb70(long param_1)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  long alStack_c8 [6];
  ulong uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar16 + 6) {
    lVar4 = 0xa1;
  }
  else {
    lVar4 = 0;
    lVar15 = *(long *)(param_1 + 0x38);
    *(undefined1 *)(lVar15 + 0x60) = 1;
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    lVar7 = -0x8000000000000000;
    lVar12 = 0x7fffffffffffffff;
    do {
      pcVar5 = (char *)*puVar16;
      plVar1 = alStack_c8 + lVar4;
      if (*pcVar5 == '\x1e') {
        FUN_109760360(pcVar5,uVar14,0,plVar1);
        pcVar6 = pcVar5;
      }
      else {
        func_0x00010976073c(pcVar5,uVar14);
        if ((long)pcVar5 < 0x8000) {
          *plVar1 = 0;
          pcVar6 = (char *)((long)pcVar5 << 0x10);
        }
        else {
          lVar8 = 5;
          do {
            if ((long)pcVar5 < *(long *)(&UNK_10dff7100 + lVar8 * 8)) break;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 10);
          lVar10 = (long)(int)lVar8 + -5;
          uVar11 = *(ulong *)(&UNK_10dff7100 + lVar10 * 8);
          lVar9 = 0;
          if (uVar11 != 0) {
            lVar9 = (long)pcVar5 / (long)uVar11;
          }
          if (lVar9 < 0x8000) {
            *plVar1 = lVar10;
          }
          else {
            lVar8 = (long)(int)lVar8 + -4;
            *plVar1 = lVar8;
            uVar11 = *(ulong *)(&UNK_10dff7100 + lVar8 * 8);
          }
          uVar13 = -uVar11;
          if (-1 < (long)uVar11) {
            uVar13 = uVar11;
          }
          pcVar2 = (char *)0x0;
          if (uVar13 != 0) {
            pcVar2 = (char *)(((uVar13 >> 1) + (long)pcVar5 * 0x10000) / uVar13);
          }
          pcVar6 = (char *)-(long)pcVar2;
          if (-1 < (long)(uVar11 ^ (ulong)pcVar5)) {
            pcVar6 = pcVar2;
          }
        }
      }
      *(char **)(auStack_90 + lVar4 * 8 + -8) = pcVar6;
      lVar8 = lVar7;
      lVar9 = lVar12;
      if (pcVar6 != (char *)0x0) {
        lVar9 = *plVar1;
        lVar8 = lVar9;
        if (lVar9 <= lVar7) {
          lVar8 = lVar7;
        }
        if (lVar12 <= lVar9) {
          lVar9 = lVar12;
        }
      }
      lVar4 = lVar4 + 1;
      lVar7 = lVar8;
      puVar16 = puVar16 + 1;
      lVar12 = lVar9;
    } while (lVar4 != 6);
    if ((0xfffffffffffffff5 < lVar8 - 1U) && ((ulong)(lVar8 - lVar9) < 10)) {
      lVar4 = 0;
      do {
        uVar11 = *(ulong *)(auStack_90 + lVar4 + -8);
        if (uVar11 != 0) {
          lVar12 = *(long *)(&UNK_10dff7100 + (lVar8 - *(long *)((long)alStack_c8 + lVar4)) * 8);
          uVar13 = lVar12 >> 1;
          lVar7 = uVar13 + uVar11;
          if ((uVar13 ^ 0x7fffffffffffffff) <= uVar11) {
            lVar7 = 0x7fffffffffffffff;
          }
          lVar9 = uVar11 - uVar13;
          if (uVar11 <= (uVar13 | 0x8000000000000000)) {
            lVar9 = -0x8000000000000000;
          }
          if ((uVar11 & 0x8000000000000000) != 0) {
            lVar7 = lVar9;
          }
          lVar9 = 0;
          if (lVar12 != 0) {
            lVar9 = lVar7 / lVar12;
          }
          *(long *)(auStack_90 + lVar4 + -8) = lVar9;
        }
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x30);
      *(ulong *)(lVar15 + 0x40) = uStack_98;
      auVar17 = NEON_ext(auStack_90,auStack_90,8,1);
      *(long *)(lVar15 + 0x50) = auVar17._8_8_;
      *(long *)(lVar15 + 0x48) = auVar17._0_8_;
      *(undefined8 *)(lVar15 + 0x58) = uStack_80;
      *(undefined8 *)(lVar15 + 0x78) = uStack_70;
      *(undefined8 *)(lVar15 + 0x70) = uStack_78;
      *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(&UNK_10dff7100 + lVar8 * -8);
      iVar3 = (int)lVar15 + 0x40;
      FUN_1097534bc();
      if (iVar3 != 0) {
        lVar4 = 0;
        goto LAB_10975fd98;
      }
    }
    lVar4 = 0;
    *(undefined8 *)(lVar15 + 0x40) = 0x10000;
    *(undefined8 *)(lVar15 + 0x48) = 0;
    *(undefined8 *)(lVar15 + 0x50) = 0;
    *(undefined8 *)(lVar15 + 0x58) = 0x10000;
    *(undefined8 *)(lVar15 + 0x70) = 0;
    *(undefined8 *)(lVar15 + 0x78) = 0;
    *(undefined8 *)(lVar15 + 0x68) = 1;
  }
LAB_10975fd98:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar7 = *(long *)(lVar4 + 0x20);
    if (*(ulong *)(lVar4 + 0x28) < lVar7 + 0x20U) {
      lVar7 = 0xa1;
    }
    else {
      lVar15 = *(long *)(lVar4 + 0x38);
      lVar12 = lVar4;
      FUN_109760800();
      *(ulong *)(lVar15 + 0x88) = lVar12 + (lVar12 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
      lVar12 = lVar4;
      FUN_109760800(lVar4,*(undefined8 *)(lVar7 + 8),0);
      *(ulong *)(lVar15 + 0x90) = lVar12 + (lVar12 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
      lVar12 = lVar4;
      FUN_109760800(lVar4,*(undefined8 *)(lVar7 + 0x10),0);
      *(ulong *)(lVar15 + 0x98) = lVar12 + (lVar12 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
      FUN_109760800(lVar4,*(undefined8 *)(lVar7 + 0x18),0);
      lVar7 = 0;
      *(ulong *)(lVar15 + 0xa0) = lVar4 + (lVar4 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
    }
    return lVar7;
  }
  return lVar4;
}



/* Entry: 10975fdd4; end: 10975ff0b;  */

undefined8 FUN_10975fdd4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 4) {
    uVar2 = 0xa1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = param_1;
    FUN_109760800(param_1,*puVar1,0);
    *(ulong *)(lVar4 + 0x88) = lVar3 + (lVar3 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
    lVar3 = param_1;
    FUN_109760800(param_1,puVar1[1],0);
    *(ulong *)(lVar4 + 0x90) = lVar3 + (lVar3 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
    lVar3 = param_1;
    FUN_109760800(param_1,puVar1[2],0);
    *(ulong *)(lVar4 + 0x98) = lVar3 + (lVar3 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
    FUN_109760800(param_1,puVar1[3],0);
    uVar2 = 0;
    *(ulong *)(lVar4 + 0xa0) = param_1 + (param_1 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
  }
  return uVar2;
}



/* Entry: 10975ff0c; end: 10975ff8b;  */

undefined8 FUN_10975ff0c(long param_1)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(undefined8 **)(param_1 + 0x28) < *(undefined8 **)(param_1 + 0x20) + 5) {
    return 0xa1;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  lVar2 = param_1;
  FUN_10975faf8(param_1,**(undefined8 **)(param_1 + 0x20));
  if (lVar2 - 0x11U < 0xfffffffffffffff1) {
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
    *(short *)(lVar4 + 0x134) = (short)lVar2;
    sVar1 = (short)((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >> 3) + -4;
    *(short *)(lVar4 + 0x136) = sVar1;
    *(short *)(param_1 + 0x40) = (short)lVar2;
    *(short *)(param_1 + 0x42) = sVar1;
  }
  return uVar3;
}



/* Entry: 10975ff8c; end: 10975ffff;  */

undefined8 FUN_10975ff8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar1 + 3) {
    uVar2 = 0xa1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = param_1;
    FUN_10975faf8(param_1,*puVar1);
    *(int *)(lVar4 + 0xe4) = (int)lVar3;
    lVar3 = param_1;
    FUN_10975faf8(param_1,puVar1[1]);
    *(int *)(lVar4 + 0xe8) = (int)lVar3;
    FUN_10975faf8(param_1,puVar1[2]);
    uVar2 = 0;
    *(long *)(lVar4 + 0xf0) = param_1;
  }
  return uVar2;
}



/* Entry: 109760000; end: 109760097;  */

undefined8 FUN_109760000(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    uVar1 = 3;
  }
  else {
    FUN_10975faf8(param_1,**(undefined8 **)(param_1 + 0x20));
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0x140) = 0x201;
  }
  return uVar1;
}



/* Entry: 109760098; end: 10976035f;  */

ulong FUN_109760098(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uStack_64;
  
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) {
    return 3;
  }
  lVar19 = *(long *)(lVar8 + 0x2d0);
  if (lVar19 != 0) {
    uVar4 = *(undefined4 *)(lVar8 + 0x2c8);
    uVar1 = *(undefined4 *)(lVar19 + 0x450);
    uVar17 = *(undefined8 *)(lVar19 + 0x458);
    lVar8 = lVar19 + 0x420;
    FUN_10975f508(lVar8,uVar4,uVar1,uVar17);
    if ((int)lVar8 != 0) {
      uVar5 = lVar19 + 0x420;
      FUN_10975f55c(uVar5,uVar4,uVar1,uVar17);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar5 = param_1;
    FUN_10975faf8(param_1,*(undefined8 *)(*(long *)(param_1 + 0x28) + -8));
    uVar15 = (uint)uVar5;
    if (uVar15 <= *(uint *)(param_1 + 0x30)) {
      uVar6 = *(ulong *)(*(long *)(lVar19 + 0x428) + 0x10);
      uVar12 = *(int *)(lVar19 + 0x440) * uVar15;
      uVar11 = (uint)((*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) - 8U >> 3);
      iVar2 = uVar11 - uVar12;
      uStack_64 = 0;
      if (uVar11 < uVar12) {
        uVar7 = 0xa1;
      }
      else {
        iVar3 = uVar15 * 5;
        uVar12 = *(uint *)(lVar19 + 0x470);
        uVar11 = *(uint *)(lVar19 + 0x474);
        if (uVar11 < uVar12 + iVar3) {
          uVar16 = *(ulong *)(lVar19 + 0x460);
          uVar20 = *(ulong *)(lVar19 + 0x468);
          func_0x000109755910(uVar6,1,uVar11,uVar11 + iVar3,uVar16,&uStack_64);
          *(ulong *)(lVar19 + 0x460) = uVar6;
          uVar7 = (ulong)uStack_64;
          if (uStack_64 != 0) goto LAB_109760338;
          uVar12 = *(uint *)(lVar19 + 0x470);
          *(ulong *)(lVar19 + 0x468) = uVar6 + uVar12;
          *(int *)(lVar19 + 0x474) = *(int *)(lVar19 + 0x474) + iVar3;
          if (uVar16 != 0 && uVar6 != uVar16) {
            puVar13 = *(ulong **)(param_1 + 0x20);
            puVar14 = *(ulong **)(param_1 + 0x28);
            if (puVar13 < puVar14) {
              do {
                uVar7 = *puVar13;
                if (uVar16 <= uVar7 && uVar7 < uVar20) {
                  *puVar13 = uVar7 + (uVar6 - uVar16);
                  puVar14 = *(ulong **)(param_1 + 0x28);
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 < puVar14);
            }
          }
        }
        *(uint *)(lVar19 + 0x470) = uVar12 + iVar3;
        uVar12 = iVar2 + uVar15;
        if (uVar15 != 0) {
          uVar6 = 0;
          uVar15 = uVar12;
          do {
            lVar8 = *(long *)(lVar19 + 0x448);
            uVar11 = iVar2 + (int)uVar6;
            uVar7 = param_1;
            FUN_109760800(param_1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 8),0);
            uVar4 = (undefined4)uVar7;
            if (1 < *(uint *)(lVar19 + 0x440)) {
              lVar18 = 1;
              uVar21 = uVar15;
              do {
                uVar15 = uVar21 + 1;
                uVar16 = param_1;
                FUN_109760800(param_1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar21 * 8)
                              ,0);
                lVar9 = uVar16 * (long)*(int *)(lVar8 + lVar18 * 4);
                uVar7 = uVar7 + (lVar9 + (lVar9 >> 0x3f) + 0x8000 >> 0x10);
                uVar4 = (undefined4)uVar7;
                lVar18 = lVar18 + 1;
                uVar21 = uVar15;
              } while ((uint)lVar18 < *(uint *)(lVar19 + 0x440));
            }
            puVar10 = *(undefined1 **)(lVar19 + 0x468);
            *(undefined1 **)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 8) = puVar10;
            *(undefined1 **)(lVar19 + 0x468) = puVar10 + 1;
            *puVar10 = 0xff;
            puVar10 = *(undefined1 **)(lVar19 + 0x468);
            *(undefined1 **)(lVar19 + 0x468) = puVar10 + 1;
            *puVar10 = (char)((uint)uVar4 >> 0x18);
            puVar10 = *(undefined1 **)(lVar19 + 0x468);
            *(undefined1 **)(lVar19 + 0x468) = puVar10 + 1;
            *puVar10 = (char)((uint)uVar4 >> 0x10);
            puVar10 = *(undefined1 **)(lVar19 + 0x468);
            *(undefined1 **)(lVar19 + 0x468) = puVar10 + 1;
            *puVar10 = (char)((uint)uVar4 >> 8);
            puVar10 = *(undefined1 **)(lVar19 + 0x468);
            *(undefined1 **)(lVar19 + 0x468) = puVar10 + 1;
            *puVar10 = (char)uVar4;
            uVar6 = uVar6 + 1;
          } while (uVar6 != (uVar5 & 0xffffffff));
        }
        uVar7 = 0;
        *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + (ulong)uVar12 * 8;
      }
LAB_109760338:
      *(undefined1 *)(lVar19 + 0x421) = 1;
      return uVar7;
    }
  }
  return 3;
}



/* Entry: 109760360; end: 1097607ff;  */

ulong FUN_109760360(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  bVar4 = false;
  lVar14 = 0;
  lVar11 = 0;
  uVar16 = 4;
  uVar17 = 0;
  while( true ) {
    while( true ) {
      uVar10 = uVar17;
      pbVar9 = param_1;
      if (((uVar16 != 0) && (pbVar9 = param_1 + 1, param_2 < param_1 + 2)) && (pbVar9 <= param_2))
      goto LAB_1097606e0;
      uVar19 = (uint)*pbVar9;
      bVar5 = *pbVar9 >> (ulong)(uVar16 & 0x1f);
      uVar20 = bVar5 & 0xf;
      uVar16 = 4 - uVar16;
      param_1 = pbVar9;
      uVar17 = uVar10;
      if (uVar20 != 0xe) break;
      bVar4 = true;
    }
    if (9 < uVar20) break;
    if ((long)uVar10 < 0xccccccc) {
      uVar17 = 0;
      if ((bVar5 & 0xf) != 0 || uVar10 != 0) {
        lVar11 = lVar11 + 1;
        uVar17 = uVar10 * 10 + (ulong)uVar20;
      }
    }
    else {
      lVar14 = lVar14 + 1;
    }
  }
  if (uVar20 == 10) {
    lVar18 = 0;
LAB_109760424:
    do {
      pbVar8 = pbVar9;
      do {
        pbVar9 = pbVar8;
        if (uVar16 != 0) {
          pbVar9 = pbVar8 + 1;
          if ((param_2 < pbVar8 + 2) && (pbVar9 <= param_2)) goto LAB_1097606e0;
          uVar19 = (uint)*pbVar9;
        }
        uVar20 = uVar19 >> (ulong)(uVar16 & 0x1f) & 0xf;
        uVar16 = 4 - uVar16;
        if (9 < uVar20) goto LAB_109760494;
        if ((uVar20 == 0) && (uVar10 == 0)) {
          lVar14 = lVar14 + -1;
          goto LAB_109760424;
        }
        pbVar8 = pbVar9;
      } while (0xccccccb < (long)uVar10 || 8 < lVar18);
      lVar18 = lVar18 + 1;
      uVar10 = uVar10 * 10 + (ulong)uVar20;
    } while( true );
  }
  lVar18 = 0;
LAB_109760494:
  if (uVar20 - 0xb < 2) {
    bVar6 = false;
    lVar12 = 0;
    while( true ) {
      lVar7 = lVar12;
      pbVar8 = pbVar9;
      if (uVar16 != 0) {
        pbVar8 = pbVar9 + 1;
        if ((param_2 < pbVar9 + 2) && (pbVar8 <= param_2)) goto LAB_1097606e0;
        uVar19 = (uint)*pbVar8;
      }
      uVar1 = uVar19 >> (ulong)(uVar16 & 0x1f) & 0xf;
      if (9 < uVar1) break;
      uVar16 = 4 - uVar16;
      lVar12 = lVar7 * 10 + (ulong)uVar1;
      pbVar9 = pbVar8;
      if (1000 < lVar7) {
        bVar6 = true;
        lVar12 = lVar7;
      }
    }
    if (uVar10 != 0) {
      lVar12 = -lVar7;
      if (uVar20 != 0xc) {
        lVar12 = lVar7;
      }
      if (!bVar6) goto LAB_109760510;
      if (uVar20 == 0xc) goto LAB_1097606e0;
LAB_109760580:
      uVar17 = 0x7fffffff;
      goto LAB_1097606e4;
    }
  }
  else {
    lVar12 = 0;
    uVar17 = 0;
    if (uVar10 == 0) goto LAB_1097606e4;
LAB_109760510:
    lVar12 = lVar14 + param_3 + lVar12;
    if (param_4 != (long *)0x0) {
      lVar14 = lVar18 + lVar11;
      uVar13 = lVar12 + lVar11;
      if (lVar14 < 6) {
        if ((long)uVar10 < 0x8000) {
          if ((long)uVar13 < 1) {
LAB_109760674:
            lVar12 = lVar12 - lVar18;
          }
          else {
            uVar17 = uVar13;
            if (4 < uVar13) {
              uVar17 = 5;
            }
            if ((long)(uVar17 - lVar14) < 1) goto LAB_109760674;
            lVar12 = uVar13 - uVar17;
            uVar10 = *(long *)(&UNK_10dff7100 + (uVar17 - lVar14) * 8) * uVar10;
            if (0x7fff < (long)uVar10) {
              uVar10 = uVar10 / 10;
              lVar12 = lVar12 + 1;
            }
          }
          *param_4 = lVar12;
          uVar17 = uVar10 << 0x10;
          goto LAB_1097606e4;
        }
        uVar17 = (uVar10 << 0x10 | 4) / 10;
        lVar14 = (lVar12 - lVar18) + 1;
      }
      else {
        uVar15 = *(ulong *)(&UNK_10dff70d8 + lVar14 * 8);
        lVar11 = 0;
        if (uVar15 != 0) {
          lVar11 = (long)uVar10 / (long)uVar15;
        }
        if (lVar11 < 0x8000) {
          uVar17 = -uVar15;
          if (-1 < (long)uVar15) {
            uVar17 = uVar15;
          }
          uVar3 = -uVar10;
          if (-1 < (long)uVar10) {
            uVar3 = uVar10;
          }
          uVar2 = 0;
          if (uVar17 != 0) {
            uVar2 = ((uVar17 >> 1) + uVar3 * 0x10000) / uVar17;
          }
          uVar17 = -uVar2;
          if (-1 < (long)(uVar15 ^ uVar10)) {
            uVar17 = uVar2;
          }
          lVar14 = uVar13 - 5;
        }
        else {
          uVar15 = *(ulong *)(&UNK_10dff70e0 + lVar14 * 8);
          uVar17 = -uVar15;
          if (-1 < (long)uVar15) {
            uVar17 = uVar15;
          }
          uVar3 = -uVar10;
          if (-1 < (long)uVar10) {
            uVar3 = uVar10;
          }
          uVar2 = 0;
          if (uVar17 != 0) {
            uVar2 = ((uVar17 >> 1) + uVar3 * 0x10000) / uVar17;
          }
          uVar17 = -uVar2;
          if (-1 < (long)(uVar15 ^ uVar10)) {
            uVar17 = uVar2;
          }
          lVar14 = uVar13 - 4;
        }
      }
      *param_4 = lVar14;
      goto LAB_1097606e4;
    }
    lVar14 = lVar12 + lVar11;
    if (5 < lVar14) goto LAB_109760580;
    if (-6 < lVar14) {
      if (lVar14 < 0) {
        uVar17 = 0;
        if (*(long *)(&UNK_10dff7100 + lVar14 * -8) != 0) {
          uVar17 = (long)uVar10 / *(long *)(&UNK_10dff7100 + lVar14 * -8);
        }
      }
      else {
        lVar11 = -lVar12;
        uVar17 = uVar10;
      }
      lVar18 = lVar18 + lVar11;
      uVar10 = (long)uVar17 / 10;
      if (lVar18 != 10) {
        uVar10 = uVar17;
      }
      lVar14 = 9;
      if (lVar18 != 10) {
        lVar14 = lVar18;
      }
      if (lVar14 < 1) {
        uVar17 = 0x7fffffff;
        if ((long)(*(long *)(&UNK_10dff7100 + lVar14 * -8) * uVar10) < 0x8000) {
          uVar17 = *(long *)(&UNK_10dff7100 + lVar14 * -8) * uVar10 * 0x10000;
        }
        goto LAB_1097606e4;
      }
      uVar13 = *(ulong *)(&UNK_10dff7100 + lVar14 * 8);
      lVar14 = 0;
      if (uVar13 != 0) {
        lVar14 = (long)uVar10 / (long)uVar13;
      }
      if (lVar14 < 0x8000) {
        uVar17 = -uVar13;
        if (-1 < (long)uVar13) {
          uVar17 = uVar13;
        }
        uVar15 = -uVar10;
        if (-1 < (long)uVar10) {
          uVar15 = uVar10;
        }
        uVar3 = 0;
        if (uVar17 != 0) {
          uVar3 = ((uVar17 >> 1) + uVar15 * 0x10000) / uVar17;
        }
        uVar17 = -uVar3;
        if (-1 < (long)(uVar13 ^ uVar10)) {
          uVar17 = uVar3;
        }
        goto LAB_1097606e4;
      }
    }
  }
LAB_1097606e0:
  uVar17 = 0;
LAB_1097606e4:
  uVar10 = -uVar17;
  if (!bVar4) {
    uVar10 = uVar17;
  }
  return uVar10;
}



/* Entry: 109760800; end: 10976091b;  */

/* WARNING: Removing unreachable block (ram,0x000109760364) */
/* WARNING: Removing unreachable block (ram,0x00010976051c) */
/* WARNING: Removing unreachable block (ram,0x000109760588) */
/* WARNING: Removing unreachable block (ram,0x000109760598) */
/* WARNING: Removing unreachable block (ram,0x000109760640) */
/* WARNING: Removing unreachable block (ram,0x000109760644) */
/* WARNING: Removing unreachable block (ram,0x00010976064c) */
/* WARNING: Removing unreachable block (ram,0x000109760658) */
/* WARNING: Removing unreachable block (ram,0x000109760664) */
/* WARNING: Removing unreachable block (ram,0x0001097605a4) */
/* WARNING: Removing unreachable block (ram,0x0001097605ac) */
/* WARNING: Removing unreachable block (ram,0x0001097605b4) */
/* WARNING: Removing unreachable block (ram,0x0001097605c0) */
/* WARNING: Removing unreachable block (ram,0x0001097605cc) */
/* WARNING: Removing unreachable block (ram,0x00010976052c) */
/* WARNING: Removing unreachable block (ram,0x0001097605ec) */
/* WARNING: Removing unreachable block (ram,0x0001097605f4) */
/* WARNING: Removing unreachable block (ram,0x0001097605fc) */
/* WARNING: Removing unreachable block (ram,0x000109760674) */
/* WARNING: Removing unreachable block (ram,0x00010976060c) */
/* WARNING: Removing unreachable block (ram,0x000109760628) */
/* WARNING: Removing unreachable block (ram,0x000109760678) */
/* WARNING: Removing unreachable block (ram,0x000109760534) */
/* WARNING: Removing unreachable block (ram,0x00010976066c) */

ulong FUN_109760800(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  
  if (*param_2 == 0xff) {
    uVar10 = (long)(int)((uint)param_2[1] << 0x18) | (ulong)param_2[2] << 0x10 |
             (ulong)param_2[3] << 8 | (ulong)param_2[4];
    if (param_3 == 0) {
      return uVar10;
    }
    uVar12 = -uVar10;
    if (-1 < (long)uVar10) {
      uVar12 = uVar10;
    }
    if ((long)uVar12 <= *(long *)(&UNK_10dff7150 + param_3 * 8)) {
      return *(long *)(&UNK_10dff7100 + param_3 * 8) * uVar10;
    }
    bVar6 = (int)uVar10 < 0;
    bVar7 = (int)uVar10 == 0;
LAB_1097608c4:
    uVar10 = 0xffffffff80000001;
    if (!bVar7 && !bVar6) {
      uVar10 = 0x7fffffff;
    }
    return uVar10;
  }
  if (*param_2 != 0x1e) {
    func_0x00010976073c(param_2,*(undefined8 *)(param_1 + 0x10));
    if (param_3 != 0) {
      pbVar11 = (byte *)-(long)param_2;
      if (-1 < (long)param_2) {
        pbVar11 = param_2;
      }
      if (*(long *)(&UNK_10dff7150 + param_3 * 8) < (long)pbVar11 * 0x10000) {
        bVar6 = (long)param_2 < 0;
        bVar7 = param_2 == (byte *)0x0;
        goto LAB_1097608c4;
      }
      param_2 = (byte *)(*(long *)(&UNK_10dff7100 + param_3 * 8) * (long)param_2);
    }
    uVar10 = 0xffffffff80000001;
    if (-0x8000 < (long)param_2) {
      uVar10 = (long)param_2 << 0x10;
    }
    if (0x7fff < (long)param_2) {
      return 0x7fffffff;
    }
    return uVar10;
  }
  pbVar11 = *(byte **)(param_1 + 0x10);
  bVar6 = false;
  lVar15 = 0;
  lVar13 = 0;
  uVar16 = 4;
  uVar10 = 0;
  while( true ) {
    while( true ) {
      uVar12 = uVar10;
      pbVar9 = param_2;
      if (((uVar16 != 0) && (pbVar9 = param_2 + 1, pbVar11 < param_2 + 2)) && (pbVar9 <= pbVar11))
      goto LAB_1097606e0;
      uVar19 = (uint)*pbVar9;
      bVar4 = *pbVar9 >> (ulong)(uVar16 & 0x1f);
      uVar20 = bVar4 & 0xf;
      uVar16 = 4 - uVar16;
      param_2 = pbVar9;
      uVar10 = uVar12;
      if (uVar20 != 0xe) break;
      bVar6 = true;
    }
    if (9 < uVar20) break;
    if ((long)uVar12 < 0xccccccc) {
      uVar10 = 0;
      if ((bVar4 & 0xf) != 0 || uVar12 != 0) {
        lVar13 = lVar13 + 1;
        uVar10 = uVar12 * 10 + (ulong)uVar20;
      }
    }
    else {
      lVar15 = lVar15 + 1;
    }
  }
  if (uVar20 == 10) {
    lVar17 = 0;
LAB_109760424:
    do {
      pbVar8 = pbVar9;
      do {
        pbVar9 = pbVar8;
        if (uVar16 != 0) {
          pbVar9 = pbVar8 + 1;
          if ((pbVar11 < pbVar8 + 2) && (pbVar9 <= pbVar11)) goto LAB_1097606e0;
          uVar19 = (uint)*pbVar9;
        }
        uVar20 = uVar19 >> (ulong)(uVar16 & 0x1f) & 0xf;
        uVar16 = 4 - uVar16;
        if (9 < uVar20) goto LAB_109760494;
        if ((uVar20 == 0) && (uVar12 == 0)) {
          lVar15 = lVar15 + -1;
          goto LAB_109760424;
        }
        pbVar8 = pbVar9;
      } while (0xccccccb < (long)uVar12 || 8 < lVar17);
      lVar17 = lVar17 + 1;
      uVar12 = uVar12 * 10 + (ulong)uVar20;
    } while( true );
  }
  lVar17 = 0;
LAB_109760494:
  if (uVar20 - 0xb < 2) {
    bVar7 = false;
    lVar18 = 0;
    while( true ) {
      lVar5 = lVar18;
      pbVar8 = pbVar9;
      if (uVar16 != 0) {
        pbVar8 = pbVar9 + 1;
        if ((pbVar11 < pbVar9 + 2) && (pbVar8 <= pbVar11)) goto LAB_1097606e0;
        uVar19 = (uint)*pbVar8;
      }
      uVar1 = uVar19 >> (ulong)(uVar16 & 0x1f) & 0xf;
      if (9 < uVar1) break;
      uVar16 = 4 - uVar16;
      lVar18 = lVar5 * 10 + (ulong)uVar1;
      pbVar9 = pbVar8;
      if (1000 < lVar5) {
        bVar7 = true;
        lVar18 = lVar5;
      }
    }
    if (uVar12 != 0) {
      lVar18 = -lVar5;
      if (uVar20 != 0xc) {
        lVar18 = lVar5;
      }
      if (!bVar7) goto LAB_109760510;
      if (uVar20 == 0xc) goto LAB_1097606e0;
      goto LAB_109760580;
    }
  }
  else {
    lVar18 = 0;
    uVar10 = 0;
    if (uVar12 == 0) goto LAB_1097606e4;
LAB_109760510:
    lVar18 = lVar15 + param_3 + lVar18;
    lVar15 = lVar18 + lVar13;
    if (5 < lVar15) {
LAB_109760580:
      uVar10 = 0x7fffffff;
      goto LAB_1097606e4;
    }
    if (-6 < lVar15) {
      if (lVar15 < 0) {
        uVar10 = 0;
        if (*(long *)(&UNK_10dff7100 + lVar15 * -8) != 0) {
          uVar10 = (long)uVar12 / *(long *)(&UNK_10dff7100 + lVar15 * -8);
        }
      }
      else {
        lVar13 = -lVar18;
        uVar10 = uVar12;
      }
      lVar17 = lVar17 + lVar13;
      uVar12 = (long)uVar10 / 10;
      if (lVar17 != 10) {
        uVar12 = uVar10;
      }
      lVar15 = 9;
      if (lVar17 != 10) {
        lVar15 = lVar17;
      }
      if (lVar15 < 1) {
        uVar10 = 0x7fffffff;
        if ((long)(*(long *)(&UNK_10dff7100 + lVar15 * -8) * uVar12) < 0x8000) {
          uVar10 = *(long *)(&UNK_10dff7100 + lVar15 * -8) * uVar12 * 0x10000;
        }
        goto LAB_1097606e4;
      }
      uVar14 = *(ulong *)(&UNK_10dff7100 + lVar15 * 8);
      lVar15 = 0;
      if (uVar14 != 0) {
        lVar15 = (long)uVar12 / (long)uVar14;
      }
      if (lVar15 < 0x8000) {
        uVar10 = -uVar14;
        if (-1 < (long)uVar14) {
          uVar10 = uVar14;
        }
        uVar2 = -uVar12;
        if (-1 < (long)uVar12) {
          uVar2 = uVar12;
        }
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = ((uVar10 >> 1) + uVar2 * 0x10000) / uVar10;
        }
        uVar10 = -uVar3;
        if (-1 < (long)(uVar14 ^ uVar12)) {
          uVar10 = uVar3;
        }
        goto LAB_1097606e4;
      }
    }
  }
LAB_1097606e0:
  uVar10 = 0;
LAB_1097606e4:
  uVar12 = -uVar10;
  if (!bVar6) {
    uVar12 = uVar10;
  }
  return uVar12;
}



/* Entry: 10976091c; end: 109760927;  */

int FUN_10976091c(long param_1,uint param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int iStack_44;
  
  lVar2 = *(long *)(param_1 + 0x490);
  plVar4 = (long *)(lVar2 + 0x538);
  iStack_44 = 0;
  if ((plVar4 == (long *)0x0) || (*(uint *)(lVar2 + 0x54c) <= param_2)) {
    return 6;
  }
  lVar8 = *plVar4;
  lVar5 = *(long *)(lVar2 + 0x568);
  if (lVar5 == 0) {
    uVar7 = *(long *)(lVar2 + 0x540) + (ulong)*(uint *)(lVar2 + 0x548) +
            (ulong)(param_2 * *(byte *)(lVar2 + 0x550));
    if (*(code **)(lVar8 + 0x28) == (code *)0x0) {
      if (*(ulong *)(lVar8 + 8) < uVar7) {
        return 0x55;
      }
    }
    else {
      lVar5 = lVar8;
      (**(code **)(lVar8 + 0x28))(lVar8,uVar7,0,0);
      if (lVar5 != 0) {
        return 0x55;
      }
    }
    *(ulong *)(lVar8 + 0x10) = uVar7;
    iStack_44 = 0;
    plVar9 = plVar4;
    FUN_109760b78(plVar4,&iStack_44);
    if (iStack_44 != 0) {
      return iStack_44;
    }
    if (plVar9 != (long *)0x0) {
      do {
        plVar1 = plVar4;
        FUN_109760b78(plVar4,&iStack_44);
        if (plVar1 != (long *)0x0) goto LAB_109760ac4;
        param_2 = param_2 + 1;
      } while (param_2 < *(uint *)(lVar2 + 0x54c));
    }
  }
  else {
    plVar9 = *(long **)(lVar5 + (ulong)param_2 * 8);
    if (plVar9 != (long *)0x0) {
      lVar3 = (ulong)*(uint *)(lVar2 + 0x54c) - (ulong)param_2;
      puVar6 = (ulong *)(lVar5 + (ulong)param_2 * 8);
      do {
        puVar6 = puVar6 + 1;
        plVar1 = (long *)*puVar6;
        if (plVar1 != (long *)0x0) goto LAB_109760ac4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  plVar1 = (long *)0x0;
  plVar4 = (long *)(*(long *)(lVar8 + 8) + 1);
LAB_1097609f8:
  uVar7 = *(ulong *)(lVar2 + 0x558);
  if ((ulong)((long)plVar4 - (long)plVar1) < uVar7) goto LAB_109760ad8;
joined_r0x000109760adc:
  if ((plVar9 == (long *)0x0) ||
     (lVar5 = (long)plVar1 - (long)plVar9, plVar1 < plVar9 || lVar5 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
    return iStack_44;
  }
  *param_4 = lVar5;
  if (*(long *)(lVar2 + 0x570) != 0) {
    *param_3 = (long)plVar9 + *(long *)(lVar2 + 0x570) + -1;
    return iStack_44;
  }
  uVar7 = (long)plVar9 + *(long *)(lVar2 + 0x558) + -1;
  if (*(code **)(lVar8 + 0x28) == (code *)0x0) {
    if (uVar7 <= *(ulong *)(lVar8 + 8)) goto LAB_109760b50;
  }
  else {
    lVar2 = lVar8;
    (**(code **)(lVar8 + 0x28))(lVar8,uVar7,0,0);
    if (lVar2 == 0) {
LAB_109760b50:
      *(ulong *)(lVar8 + 0x10) = uVar7;
      lVar2 = lVar8;
      func_0x00010975780c(lVar8,lVar5);
      if ((int)lVar2 == 0) {
        *param_3 = *(long *)(lVar8 + 0x40);
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined8 *)(lVar8 + 0x48) = 0;
        return 0;
      }
      return (int)lVar2;
    }
  }
  return 0x55;
LAB_109760ac4:
  plVar4 = (long *)(*(long *)(lVar8 + 8) + 1);
  if (plVar1 <= plVar4) goto LAB_1097609f8;
  uVar7 = *(ulong *)(lVar2 + 0x558);
LAB_109760ad8:
  plVar1 = (long *)((long)plVar4 - uVar7);
  goto joined_r0x000109760adc;
}



/* Entry: 109760928; end: 10976097b;  */

void FUN_109760928(long param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x490) + 0x570) != 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x490) + 0x538);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*param_2 != 0)) {
    (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))();
  }
  *param_2 = 0;
  return;
}



/* Entry: 10976097c; end: 109760b77;  */

int FUN_10976097c(long *param_1,uint param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iStack_44;
  
  iStack_44 = 0;
  if ((param_1 == (long *)0x0) || (*(uint *)((long)param_1 + 0x14) <= param_2)) {
    return 6;
  }
  lVar7 = *param_1;
  lVar4 = param_1[6];
  if (lVar4 == 0) {
    uVar6 = param_1[1] + (ulong)*(uint *)(param_1 + 2) + (ulong)(param_2 * *(byte *)(param_1 + 3));
    if (*(code **)(lVar7 + 0x28) == (code *)0x0) {
      if (*(ulong *)(lVar7 + 8) < uVar6) {
        return 0x55;
      }
    }
    else {
      lVar4 = lVar7;
      (**(code **)(lVar7 + 0x28))(lVar7,uVar6,0,0);
      if (lVar4 != 0) {
        return 0x55;
      }
    }
    *(ulong *)(lVar7 + 0x10) = uVar6;
    iStack_44 = 0;
    plVar8 = param_1;
    FUN_109760b78(param_1,&iStack_44);
    if (iStack_44 != 0) {
      return iStack_44;
    }
    if (plVar8 != (long *)0x0) {
      do {
        plVar1 = param_1;
        FUN_109760b78(param_1,&iStack_44);
        if (plVar1 != (long *)0x0) goto LAB_109760ac4;
        param_2 = param_2 + 1;
      } while (param_2 < *(uint *)((long)param_1 + 0x14));
    }
  }
  else {
    plVar8 = *(long **)(lVar4 + (ulong)param_2 * 8);
    if (plVar8 != (long *)0x0) {
      lVar2 = (ulong)*(uint *)((long)param_1 + 0x14) - (ulong)param_2;
      puVar5 = (ulong *)(lVar4 + (ulong)param_2 * 8);
      do {
        puVar5 = puVar5 + 1;
        plVar1 = (long *)*puVar5;
        if (plVar1 != (long *)0x0) goto LAB_109760ac4;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  plVar1 = (long *)0x0;
  plVar3 = (long *)(*(long *)(lVar7 + 8) + 1);
LAB_1097609f8:
  uVar6 = param_1[4];
  if ((ulong)((long)plVar3 - (long)plVar1) < uVar6) goto LAB_109760ad8;
joined_r0x000109760adc:
  if ((plVar8 == (long *)0x0) ||
     (lVar4 = (long)plVar1 - (long)plVar8, plVar1 < plVar8 || lVar4 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
    return iStack_44;
  }
  *param_4 = lVar4;
  if (param_1[7] != 0) {
    *param_3 = (long)plVar8 + param_1[7] + -1;
    return iStack_44;
  }
  uVar6 = (long)plVar8 + param_1[4] + -1;
  if (*(code **)(lVar7 + 0x28) == (code *)0x0) {
    if (uVar6 <= *(ulong *)(lVar7 + 8)) goto LAB_109760b50;
  }
  else {
    lVar2 = lVar7;
    (**(code **)(lVar7 + 0x28))(lVar7,uVar6,0,0);
    if (lVar2 == 0) {
LAB_109760b50:
      *(ulong *)(lVar7 + 0x10) = uVar6;
      lVar2 = lVar7;
      func_0x00010975780c(lVar7,lVar4);
      if ((int)lVar2 == 0) {
        *param_3 = *(long *)(lVar7 + 0x40);
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        return 0;
      }
      return (int)lVar2;
    }
  }
  return 0x55;
LAB_109760ac4:
  plVar3 = (long *)(*(long *)(lVar7 + 8) + 1);
  if (plVar1 <= plVar3) goto LAB_1097609f8;
  uVar6 = param_1[4];
LAB_109760ad8:
  plVar1 = (long *)((long)plVar3 - uVar6);
  goto joined_r0x000109760adc;
}



/* Entry: 109760b78; end: 109760be7;  */

ulong FUN_109760b78(long *param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte abStack_24 [4];
  
  lVar1 = *param_1;
  FUN_109757778(lVar1,*(undefined8 *)(lVar1 + 0x10),abStack_24,(char)param_1[3]);
  if (((int)lVar1 == 0) && (uVar3 = (ulong)*(byte *)(param_1 + 3), uVar3 != 0)) {
    uVar2 = 0;
    pbVar4 = abStack_24;
    do {
      uVar2 = (ulong)*pbVar4 | uVar2 << 8;
      uVar3 = uVar3 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0);
  }
  else {
    uVar2 = 0;
  }
  *param_2 = (int)lVar1;
  return uVar2;
}



/* Entry: 109760be8; end: 109760d3f;  */

void FUN_109760be8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  uVar1 = (ulong)*(byte *)(param_1 + 0x148);
  *(byte *)(param_2 + 1) = *(byte *)(param_1 + 0x148);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x150);
    puVar6 = (undefined2 *)((long)param_2 + 0xc);
    do {
      *puVar6 = (short)((uint)(*piVar2 + 0x8000) >> 0x10);
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 2;
      puVar6 = puVar6 + 1;
    } while (uVar1 != 0);
  }
  uVar1 = (ulong)*(byte *)(param_1 + 0x149);
  *(byte *)((long)param_2 + 9) = *(byte *)(param_1 + 0x149);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x1c0);
    puVar4 = param_2 + 5;
    do {
      *(short *)puVar4 = (short)((uint)(*piVar2 + 0x8000) >> 0x10);
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 2;
      puVar4 = (undefined8 *)((long)puVar4 + 2);
    } while (uVar1 != 0);
  }
  uVar1 = (ulong)*(byte *)(param_1 + 0x14a);
  *(byte *)((long)param_2 + 10) = *(byte *)(param_1 + 0x14a);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x210);
    puVar6 = (undefined2 *)((long)param_2 + 0x3c);
    do {
      *puVar6 = (short)((uint)(*piVar2 + 0x8000) >> 0x10);
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 2;
      puVar6 = puVar6 + 1;
    } while (uVar1 != 0);
  }
  uVar1 = (ulong)*(byte *)(param_1 + 0x14b);
  *(byte *)((long)param_2 + 0xb) = *(byte *)(param_1 + 0x14b);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x280);
    puVar4 = param_2 + 0xb;
    do {
      *(short *)puVar4 = (short)((uint)(*piVar2 + 0x8000) >> 0x10);
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 2;
      puVar4 = (undefined8 *)((long)puVar4 + 2);
    } while (uVar1 != 0);
  }
  param_2[0xe] = *(undefined8 *)(param_1 + 0x2d0);
  uVar3 = *(undefined8 *)(param_1 + 0x2e0);
  *(int *)(param_2 + 0xf) = (int)*(undefined8 *)(param_1 + 0x2d8);
  *(int *)((long)param_2 + 0x7c) = (int)uVar3;
  *(short *)(param_2 + 0x10) = (short)*(undefined8 *)(param_1 + 0x2e8);
  *(short *)((long)param_2 + 0x82) = (short)*(undefined8 *)(param_1 + 0x2f0);
  uVar1 = (ulong)*(byte *)(param_1 + 0x2f8);
  *(byte *)((long)param_2 + 0x84) = *(byte *)(param_1 + 0x2f8);
  if (uVar1 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x300);
    puVar5 = param_2 + 0x11;
    do {
      *(short *)puVar5 = (short)*puVar4;
      uVar1 = uVar1 - 1;
      puVar4 = puVar4 + 1;
      puVar5 = (undefined8 *)((long)puVar5 + 2);
    } while (uVar1 != 0);
  }
  uVar1 = (ulong)*(byte *)(param_1 + 0x2f9);
  *(byte *)((long)param_2 + 0x85) = *(byte *)(param_1 + 0x2f9);
  if (uVar1 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x368);
    puVar6 = (undefined2 *)((long)param_2 + 0xa2);
    do {
      *puVar6 = (short)*puVar4;
      uVar1 = uVar1 - 1;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar1 != 0);
  }
  *(undefined1 *)((long)param_2 + 0x86) = *(undefined1 *)(param_1 + 0x3d0);
  param_2[0x19] = (long)*(int *)(param_1 + 0x3e4);
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x3e0);
  return;
}



/* Entry: 109760d40; end: 1097612e3;  */

undefined8 *
FUN_109760d40(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5,int param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 auStack_f0 [2];
  uint uStack_dc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_64;
  
  puVar4 = auStack_f0;
  lVar10 = param_2[7];
  _bzero(param_4,0x13c0);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar8 = param_2[2];
  *param_4 = param_1;
  param_4[1] = param_2;
  iVar9 = (int)param_7;
  *(char *)(param_4 + 6) = (char)param_7;
  param_4[2] = lVar10;
  param_4[3] = lVar8;
  puVar11 = param_2;
  FUN_1097579b0(param_2,&UNK_10dff71a0,param_4);
  uStack_64 = (uint)puVar11;
  if (uStack_64 != 0) goto LAB_109760e7c;
  if (iVar9 == 0) {
    puVar3 = param_2;
    FUN_109757928(param_2,&uStack_64);
    puVar11 = (undefined8 *)(ulong)uStack_64;
    if (uStack_64 != 0) goto LAB_109760e7c;
    if (*(char *)(param_4 + 5) != '\x01') goto LAB_109760e78;
    bVar1 = *(byte *)((long)param_4 + 0x2a);
    puVar11 = (undefined8 *)0x2;
    if ((bVar1 < 4) || (4 < (uint)puVar3)) goto LAB_109760e7c;
  }
  else {
    if ((*(char *)(param_4 + 5) != '\x02') || (*(byte *)((long)param_4 + 0x2a) < 5)) {
LAB_109760e78:
      puVar11 = (undefined8 *)0x2;
      goto LAB_109760e7c;
    }
    puVar11 = param_2;
    func_0x000109757520(param_2,&uStack_64);
    *(int *)((long)param_4 + 0x2c) = (int)puVar11;
    puVar11 = (undefined8 *)(ulong)uStack_64;
    if (uStack_64 != 0) goto LAB_109760e7c;
    bVar1 = *(byte *)((long)param_4 + 0x2a);
  }
  uVar6 = lVar8 + (ulong)bVar1;
  if ((code *)param_2[5] == (code *)0x0) {
    if (uVar6 <= (ulong)param_2[1]) goto LAB_109760eb4;
  }
  else {
    puVar11 = param_2;
    (*(code *)param_2[5])(param_2,uVar6,0,0);
    if (puVar11 == (undefined8 *)0x0) {
LAB_109760eb4:
      param_2[2] = uVar6;
      if (iVar9 == 0) {
        puVar11 = param_4 + 7;
        FUN_10976159c(puVar11,param_2,0,0);
        uVar2 = (uint)puVar11;
        if (uVar2 != 0) {
          if (param_6 != 0) {
            uVar2 = 2;
          }
          puVar11 = (undefined8 *)(ulong)uVar2;
          goto LAB_109760e7c;
        }
        if ((1 < *(uint *)((long)param_4 + 0x4c)) &&
           ((ulong)param_4[0xc] < (ulong)*(uint *)((long)param_4 + 0x4c))) {
          uVar2 = 2;
          if (param_6 == 0) {
            uVar2 = 3;
          }
          puVar11 = (undefined8 *)(ulong)uVar2;
          goto LAB_109760e7c;
        }
        puVar11 = param_4 + 0xaf;
        FUN_10976159c(puVar11,param_2,0,0);
        if ((int)puVar11 != 0) goto LAB_109760e7c;
        puVar11 = &uStack_b0;
        FUN_10976159c(puVar11,param_2,1,0);
        if ((int)puVar11 != 0) goto LAB_109760e7c;
        puVar11 = param_4 + 0x17;
        FUN_10976159c(puVar11,param_2,1,0);
        if ((int)puVar11 != 0) goto LAB_109760e7c;
        puVar11 = &uStack_b0;
        func_0x000109761714(puVar11,param_4 + 0xca,param_4 + 0xcb,param_4 + 0xcc);
        if ((int)puVar11 != 0) goto LAB_109760e7c;
        if (*(uint *)((long)param_4 + 0x4c) <= *(uint *)((long)param_4 + 0x58c)) goto LAB_109760f04;
LAB_109761000:
        puVar11 = (undefined8 *)0x3;
      }
      else {
        param_4[0xb4] = 0;
        param_4[0xb3] = 0;
        param_4[0xb6] = 0;
        param_4[0xb5] = 0;
        param_4[0xb0] = 0;
        param_4[0xaf] = 0;
        param_4[0xb2] = 0;
        param_4[0xb1] = 0;
        param_4[0xb3] = param_2[2];
        param_4[0xb4] = (ulong)*(uint *)((long)param_4 + 0x2c);
        puVar11 = param_2;
        func_0x0001097574b4();
        uStack_64 = (uint)puVar11;
        if (uStack_64 != 0) goto LAB_109760e7c;
        puVar11 = param_4 + 0x17;
        FUN_10976159c(puVar11,param_2,1,1);
        if ((int)puVar11 != 0) goto LAB_109760e7c;
LAB_109760f04:
        *(undefined4 *)(param_4 + 0xc9) = uStack_a0._4_4_;
        if (param_6 == 0) {
          if (1 < *(uint *)((long)param_4 + 0x4c)) goto LAB_109761000;
          uVar2 = 0;
        }
        else {
          uVar2 = param_3 & 0xffff;
          if ((0 < (int)param_3) && (*(uint *)((long)param_4 + 0x4c) <= uVar2)) {
            puVar11 = (undefined8 *)0x6;
            goto LAB_109760e7c;
          }
          *(uint *)(param_4 + 4) = *(uint *)((long)param_4 + 0x4c);
        }
        if ((int)param_3 < 0) {
          puVar11 = (undefined8 *)0x0;
          goto LAB_109760e7c;
        }
        uVar5 = 0x3000;
        if (iVar9 == 0) {
          uVar5 = 0x1000;
        }
        puVar11 = param_4 + 0xcd;
        func_0x000109761aac(puVar11,param_4 + 0xaf,uVar2,param_2,lVar8,uVar5,param_4,param_5);
        if ((int)puVar11 != 0) goto LAB_109760e7c;
        uVar6 = param_4[0xe5] + lVar8;
        if ((code *)param_2[5] == (code *)0x0) {
          if (uVar6 <= (ulong)param_2[1]) goto LAB_109761094;
        }
        else {
          puVar11 = param_2;
          (*(code *)param_2[5])(param_2,uVar6,0,0);
          if (puVar11 == (undefined8 *)0x0) {
LAB_109761094:
            param_2[2] = uVar6;
            puVar11 = param_4 + 0xa7;
            FUN_10976159c(puVar11,param_2,0,param_7);
            if ((int)puVar11 != 0) goto LAB_109760e7c;
            if ((iVar9 == 0) && (*(int *)((long)param_4 + 0x74c) == 0xffff)) {
              *(undefined4 *)(param_4 + 0x166) = 0;
LAB_1097610c8:
              if (param_4[0xe5] != 0) {
                *(undefined4 *)((long)param_4 + 0x24) = *(undefined4 *)((long)param_4 + 0x54c);
                puVar11 = param_4 + 0x17;
                func_0x000109761714(puVar11,param_4 + 200,0,0);
                if ((int)puVar11 == 0) {
                  if ((iVar9 == 0) && (*(int *)((long)param_4 + 0x24) != 0)) {
                    puVar11 = param_4 + 0xa2;
                    FUN_1097624cc(puVar11,*(int *)((long)param_4 + 0x24),param_2,lVar8,param_4[0xe3]
                                  ,param_6 != 0 && *(int *)((long)param_4 + 0x74c) != 0xffff);
                    if ((int)puVar11 != 0) goto LAB_109760e7c;
                    if (*(int *)((long)param_4 + 0x74c) == 0xffff) {
                      puVar11 = param_4 + 0x1f;
                      func_0x000109762824(puVar11,param_4 + 0xa2,
                                          *(undefined4 *)((long)param_4 + 0x24),param_2,lVar8,
                                          param_4[0xe4]);
                      if ((int)puVar11 != 0) goto LAB_109760e7c;
                    }
                  }
                  puVar11 = param_4;
                  FUN_1097612e4(param_4,uVar2);
                  param_4[199] = puVar11;
                  puVar11 = (undefined8 *)0x0;
                }
                goto LAB_109760e7c;
              }
              goto LAB_109761000;
            }
            puVar11 = param_4 + 0x273;
            func_0x000109761e24(puVar11,param_2,lVar8,param_4[0xf4]);
            if ((int)puVar11 != 0) goto LAB_109760e7c;
            uVar6 = param_4[0xf1] + lVar8;
            if ((code *)param_2[5] == (code *)0x0) {
              if (uVar6 <= (ulong)param_2[1]) goto LAB_109761160;
            }
            else {
              puVar11 = param_2;
              (*(code *)param_2[5])(param_2,uVar6,0,0);
              if (puVar11 == (undefined8 *)0x0) {
LAB_109761160:
                param_2[2] = uVar6;
                FUN_10976159c(auStack_f0,param_2,0,param_7);
                uStack_64 = (uint)puVar4;
                puVar11 = puVar4;
                if (uStack_64 != 0) goto LAB_109760e7c;
                if (uStack_dc < 0x101) {
                  *(uint *)(param_4 + 0x166) = uStack_dc;
                  FUN_1097539a8(lVar10,0x4c8,0,uStack_dc,0,&uStack_64);
                  puVar11 = (undefined8 *)(ulong)uStack_64;
                  if (uStack_64 != 0) {
LAB_109761220:
                    FUN_109762464(auStack_f0);
                    goto LAB_109760e7c;
                  }
                  uVar6 = (ulong)uStack_dc;
                  if (uStack_dc != 0) {
                    lVar7 = 0xb38;
                    do {
                      *(long *)((long)param_4 + lVar7) = lVar10;
                      lVar7 = lVar7 + 8;
                      lVar10 = lVar10 + 0x4c8;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                    uVar6 = 0;
                    uVar5 = 0x4000;
                    if (iVar9 == 0) {
                      uVar5 = 0x1000;
                    }
                    do {
                      puVar11 = (undefined8 *)param_4[uVar6 + 0x167];
                      func_0x000109761aac(puVar11,auStack_f0,uVar6,param_2,lVar8,uVar5,param_4,
                                          param_5);
                      if ((int)puVar11 != 0) goto LAB_109761220;
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < uStack_dc);
                    uVar6 = (ulong)(1 < uStack_dc);
                  }
                  if ((iVar9 == 0) || ((uVar6 & 1) != 0)) {
                    puVar11 = param_4 + 0x267;
                    FUN_109762374(puVar11,*(undefined4 *)((long)param_4 + 0x54c),param_2,
                                  param_4[0xf2] + lVar8);
                    FUN_109762464(auStack_f0);
                    if ((int)puVar11 != 0) goto LAB_109760e7c;
                    goto LAB_1097610c8;
                  }
                }
                FUN_109762464(auStack_f0);
                goto LAB_1097610c8;
              }
            }
          }
        }
        puVar11 = (undefined8 *)0x55;
      }
      goto LAB_109760e7c;
    }
  }
  uVar2 = 0x55;
  if (param_6 != 0) {
    uVar2 = 2;
  }
  puVar11 = (undefined8 *)(ulong)uVar2;
LAB_109760e7c:
  FUN_109762464(&uStack_b0);
  return puVar11;
}



/* Entry: 1097612e4; end: 1097613c7;  */

long FUN_1097612e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uStack_50;
  long lStack_48;
  
  plVar2 = (long *)(param_1 + 0x38);
  if (*plVar2 == 0) {
    return 0;
  }
  lVar3 = *(long *)(*plVar2 + 0x38);
  plVar1 = plVar2;
  FUN_10976097c(plVar2,param_2,&lStack_48,&uStack_50);
  if ((int)plVar1 != 0) {
    return 0;
  }
  if (uStack_50 < 0x7fffffffffffffff) {
    (**(code **)(lVar3 + 8))();
    if (lVar3 == 0) {
      lVar4 = 0;
      goto LAB_109761398;
    }
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    if (uStack_50 != 0xffffffffffffffff) goto LAB_109761398;
  }
  lVar4 = lVar3;
  _memcpy(lVar4,lStack_48,uStack_50);
  *(undefined1 *)(lVar4 + uStack_50) = 0;
LAB_109761398:
  if (*(long *)(param_1 + 0x70) != 0) {
    return lVar4;
  }
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    return lVar4;
  }
  if (*(long *)(lVar3 + 0x28) == 0) {
    return lVar4;
  }
  if (lStack_48 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x38) + 0x10))();
    return lVar4;
  }
  return lVar4;
}



/* Entry: 1097613c8; end: 1097614f3;  */

void FUN_1097613c8(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((*param_1 - 0x41 < 0x1a) && (param_1[1] - 0x41 < 0x1a)) {
    if (param_1[2] - 0x41 < 0x1a) {
      uVar4 = 0;
      do {
        uVar2 = (uint)uVar4;
        uVar3 = uVar2;
        if ((((0x19 < param_1[uVar2 + 3] - 0x41) || (0x19 < param_1[uVar2 + 4] - 0x41)) ||
            (0x19 < param_1[uVar2 + 5] - 0x41)) || (param_1[uVar2 + 6] != 0x2b)) break;
        uVar3 = uVar2 + 7;
        uVar4 = (ulong)uVar3;
        if (0x19 < param_1[uVar4] - 0x41) break;
        if (0x19 < param_1[uVar2 + 8] - 0x41) {
          uVar3 = uVar2 + 7;
          break;
        }
      } while (param_1[uVar2 + 9] - 0x41 < 0x1a);
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      pbVar1 = param_1 + uVar4;
      _strlen(pbVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(param_1,param_1 + uVar4,pbVar1 + 1);
      return;
    }
  }
  return;
}



/* Entry: 1097614f4; end: 10976159b;  */

void FUN_1097614f4(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_1;
  _strlen();
  pbVar2 = param_2;
  _strlen();
  pbVar2 = param_2 + (long)pbVar2;
  while( true ) {
    if (pbVar2 <= param_2) {
      pbVar3 = param_1 + (long)pbVar3;
      *pbVar3 = 0;
      while ((param_1 < pbVar3 &&
             (pbVar3 = pbVar3 + -1,
             *pbVar3 - 0x20 < 0x40 &&
             (1L << ((ulong)(*pbVar3 - 0x20) & 0x3f) & 0x8000000000002801U) != 0))) {
        *pbVar3 = 0;
      }
      return;
    }
    if (pbVar3 == (byte *)0x0) break;
    pbVar2 = pbVar2 + -1;
    pbVar1 = param_1 + (long)pbVar3;
    pbVar3 = pbVar3 + -1;
    if (*pbVar2 != pbVar1[-1]) {
      return;
    }
  }
  return;
}



/* Entry: 10976159c; end: 109761713;  */

ulong FUN_10976159c(ulong *param_1,ulong param_2,int param_3,int param_4)

{
  int iVar1;
  ulong *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uStack_44;
  
  lVar5 = *(long *)(param_2 + 0x38);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar4 = *(ulong *)(param_2 + 0x10);
  *param_1 = param_2;
  param_1[1] = uVar4;
  if (param_4 == 0) {
    uVar4 = param_2;
    func_0x000109757520(param_2,&uStack_44);
    uVar6 = (ulong)uStack_44;
    if (uStack_44 != 0) goto LAB_10976169c;
    iVar1 = (int)uVar4;
    uVar3 = 3;
  }
  else {
    uVar4 = param_2;
    func_0x0001097575b8();
    iVar1 = (int)uVar4;
    uVar6 = (ulong)uStack_44;
    if (uStack_44 != 0) goto LAB_10976169c;
    uVar3 = 5;
  }
  *(undefined4 *)(param_1 + 2) = uVar3;
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = param_2;
  FUN_109757928(param_2,&uStack_44);
  uVar6 = (ulong)uStack_44;
  if (uStack_44 != 0) goto LAB_10976169c;
  if (0xfffffffb < (int)uVar4 - 5U) {
    *(int *)((long)param_1 + 0x14) = iVar1;
    *(char *)(param_1 + 3) = (char)uVar4;
    param_1[4] = param_1[1] + (uVar4 & 0xffffffff) * (ulong)(iVar1 + 1U) + (ulong)(uint)param_1[2];
    uVar6 = param_2;
    func_0x0001097574b4(param_2,(uVar4 & 0xffffffff) * (ulong)(iVar1 + 1U) - (uVar4 & 0xffffffff));
    uStack_44 = (uint)uVar6;
    if (uStack_44 != 0) goto LAB_10976169c;
    puVar2 = param_1;
    FUN_109760b78(param_1,&uStack_44);
    uVar6 = (ulong)uStack_44;
    if (uStack_44 != 0) goto LAB_10976169c;
    if (puVar2 != (ulong *)0x0) {
      param_1[5] = (long)puVar2 - 1;
      if (param_3 == 0) {
        func_0x0001097574b4();
        uVar6 = param_2;
        if ((int)param_2 == 0) {
          return param_2;
        }
      }
      else {
        uVar6 = param_2;
        func_0x00010975780c();
        if ((int)uVar6 == 0) {
          param_1[7] = *(ulong *)(param_2 + 0x40);
          *(undefined8 *)(param_2 + 0x40) = 0;
          *(undefined8 *)(param_2 + 0x48) = 0;
          return uVar6;
        }
      }
      goto LAB_10976169c;
    }
  }
  uVar6 = 8;
LAB_10976169c:
  if (param_1[6] != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5);
  }
  param_1[6] = 0;
  return uVar6;
}



/* Entry: 109761714; end: 109762373;  */

long * FUN_109761714(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ulong *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  uint uStack_64;
  
  puVar13 = *(undefined8 **)(*param_1 + 0x38);
  *param_2 = 0;
  if ((param_1[6] != 0) || (iVar4 = *(int *)((long)param_1 + 0x14), iVar4 == 0)) goto LAB_109761758;
  plVar19 = (long *)*param_1;
  puVar17 = (ulong *)plVar19[7];
  bVar5 = *(byte *)(param_1 + 3);
  uVar3 = iVar4 + 1;
  if (iVar4 == -1) {
    puVar6 = (ulong *)0x0;
  }
  else {
    if (uVar3 >> 0x1c != 0) {
      plVar21 = (long *)0xa;
      goto LAB_109761a0c;
    }
    puVar6 = puVar17;
    (*(code *)puVar17[1])(puVar17,(ulong)uVar3 << 3);
    if (puVar6 == (ulong *)0x0) {
      plVar21 = (long *)0x40;
      goto LAB_109761a0c;
    }
  }
  param_1[6] = (long)puVar6;
  uVar7 = param_1[1] + (ulong)*(uint *)(param_1 + 2);
  if ((code *)plVar19[5] == (code *)0x0) {
    if (uVar7 <= (ulong)plVar19[1]) goto LAB_109761974;
LAB_109761968:
    plVar21 = (long *)0x55;
  }
  else {
    plVar21 = plVar19;
    (*(code *)plVar19[5])(plVar19,uVar7,0,0);
    if (plVar21 != (long *)0x0) {
      puVar6 = (ulong *)param_1[6];
      goto LAB_109761968;
    }
LAB_109761974:
    lVar16 = (ulong)bVar5 * (ulong)uVar3;
    plVar19[2] = uVar7;
    plVar21 = plVar19;
    func_0x00010975780c(plVar19,lVar16);
    puVar6 = (ulong *)param_1[6];
    if ((int)plVar21 == 0) {
      puVar8 = (uint *)plVar19[8];
      puVar2 = (uint *)((long)puVar8 + lVar16);
      if (bVar5 == 1) {
        if (lVar16 != 0) {
          do {
            puVar9 = (uint *)((long)puVar8 + 1);
            *puVar6 = (ulong)(byte)*puVar8;
            puVar6 = puVar6 + 1;
            puVar8 = puVar9;
          } while (puVar9 < puVar2);
        }
      }
      else if (bVar5 == 2) {
        if (lVar16 != 0) {
          do {
            puVar9 = (uint *)((long)puVar8 + 2);
            *puVar6 = (ulong)((uint)(ushort)((ushort)*puVar8 >> 8) |
                             ((ushort)*puVar8 & 0xff00ff) << 8);
            puVar6 = puVar6 + 1;
            puVar8 = puVar9;
          } while (puVar9 < puVar2);
        }
      }
      else if (bVar5 == 3) {
        if (lVar16 != 0) {
          do {
            *puVar6 = (ulong)(byte)*puVar8 << 0x10 | (ulong)*(byte *)((long)puVar8 + 1) << 8 |
                      (ulong)*(byte *)((long)puVar8 + 2);
            puVar8 = (uint *)((long)puVar8 + 3);
            puVar6 = puVar6 + 1;
          } while (puVar8 < puVar2);
        }
      }
      else if (lVar16 != 0) {
        do {
          puVar9 = puVar8 + 1;
          uVar3 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
          *puVar6 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
          puVar6 = puVar6 + 1;
          puVar8 = puVar9;
        } while (puVar9 < puVar2);
      }
      if (plVar19[5] != 0) {
        if (*plVar19 != 0) {
          (**(code **)(plVar19[7] + 0x10))();
        }
        *plVar19 = 0;
      }
      plVar19[8] = 0;
      plVar19[9] = 0;
LAB_109761758:
      uVar3 = *(uint *)((long)param_1 + 0x14);
      if (uVar3 != 0) {
        lVar16 = param_1[5];
        if (uVar3 == 0xffffffff) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          if (uVar3 + 1 >> 0x1c != 0) {
            return (long *)0xa;
          }
          puVar15 = puVar13;
          (*(code *)puVar13[1])(puVar13,(uVar3 + 1) * 8);
          if (puVar15 == (undefined8 *)0x0) {
            return (long *)0x40;
          }
        }
        uStack_64 = 0;
        if (param_3 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar18 = puVar13;
          FUN_1097537e4(puVar13,lVar16 + (ulong)uVar3,&uStack_64);
          plVar19 = (long *)(ulong)uStack_64;
          if (uStack_64 != 0) {
            if (puVar18 != (undefined8 *)0x0) {
              (*(code *)puVar13[2])(puVar13,puVar18);
            }
            if (puVar15 == (undefined8 *)0x0) {
              return plVar19;
            }
            (*(code *)puVar13[2])(puVar13,puVar15);
            return plVar19;
          }
        }
        puVar14 = (undefined8 *)param_1[7];
        puVar13 = puVar14;
        if (param_3 != (undefined8 *)0x0) {
          puVar13 = puVar18;
        }
        *puVar15 = puVar13;
        uVar7 = (ulong)*(uint *)((long)param_1 + 0x14);
        if (*(uint *)((long)param_1 + 0x14) != 0) {
          uVar20 = 0;
          lVar22 = 0;
          uVar11 = 0;
          do {
            uVar10 = *(long *)(param_1[6] + uVar20 * 8 + 8) - 1;
            uVar12 = uVar11;
            if ((uVar11 <= uVar10) && (uVar12 = uVar10, (ulong)param_1[5] <= uVar10)) {
              uVar12 = param_1[5];
            }
            if (param_3 == (undefined8 *)0x0) {
              puVar15[uVar20 + 1] = (long)puVar14 + uVar12;
            }
            else {
              lVar1 = (long)puVar18 + lVar22 + uVar12;
              puVar15[uVar20 + 1] = lVar1;
              if (uVar12 != uVar11) {
                _memcpy(puVar15[uVar20],(long)puVar14 + uVar11,lVar1 - puVar15[uVar20]);
                *(undefined1 *)puVar15[uVar20 + 1] = 0;
                puVar15[uVar20 + 1] = puVar15[uVar20 + 1] + 1;
                lVar22 = lVar22 + 1;
                uVar7 = (ulong)*(uint *)((long)param_1 + 0x14);
              }
            }
            uVar20 = uVar20 + 1;
            uVar11 = uVar12;
          } while (uVar20 < uVar7);
        }
        *param_2 = puVar15;
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = puVar18;
        }
        if (param_4 != (long *)0x0) {
          *param_4 = lVar16 + (ulong)uVar3;
          return (long *)0x0;
        }
      }
      return (long *)0x0;
    }
  }
  if (puVar6 != (ulong *)0x0) {
    (*(code *)puVar17[2])(puVar17);
  }
LAB_109761a0c:
  param_1[6] = 0;
  return plVar21;
}



/* Entry: 109762374; end: 109762463;  */

void FUN_109762374(undefined1 *param_1,int param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iStack_34;
  
  if (*(code **)(param_3 + 0x28) == (code *)0x0) {
    if (*(ulong *)(param_3 + 8) < param_4) {
      return;
    }
  }
  else {
    lVar1 = param_3;
    (**(code **)(param_3 + 0x28))(param_3,param_4,0,0);
    if (lVar1 != 0) {
      return;
    }
  }
  *(ulong *)(param_3 + 0x10) = param_4;
  iStack_34 = 0;
  lVar1 = param_3;
  FUN_109757928(param_3,&iStack_34);
  if (iStack_34 == 0) {
    *param_1 = (char)lVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((int)lVar1 != 0) {
      if ((int)lVar1 != 3) {
        return;
      }
      lVar1 = param_3;
      func_0x000109757520(param_3,&iStack_34);
      if (iStack_34 != 0) {
        return;
      }
      if ((int)lVar1 == 0) {
        return;
      }
      param_2 = (int)lVar1 * 3 + 2;
    }
    *(int *)(param_1 + 0x10) = param_2;
    lVar1 = param_3;
    func_0x00010975780c(param_3,param_2);
    if ((int)lVar1 == 0) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 0x40);
      *(undefined8 *)(param_3 + 0x40) = 0;
      *(undefined8 *)(param_3 + 0x48) = 0;
    }
  }
  return;
}



/* Entry: 109762464; end: 1097624cb;  */

void FUN_109762464(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x38);
    if (param_1[7] != 0) {
      if (*(long *)(lVar1 + 0x28) != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      param_1[7] = 0;
    }
    if (param_1[6] != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1097624cc; end: 109762c37;  */

long * FUN_1097624cc(long *param_1,ulong param_2,long *param_3,long param_4,ulong param_5,
                    int param_6)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  ushort uVar10;
  undefined2 *puVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  uint uStack_64;
  
  puVar11 = (undefined2 *)param_3[7];
  uVar12 = (uint)param_2;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if ((int)param_5 == 2) {
      if (uVar12 < 0x58) {
        puVar5 = puVar11;
        (**(code **)(puVar11 + 4))(puVar11,uVar12 << 1);
        if (puVar5 == (undefined2 *)0x0) goto LAB_109762644;
        param_1[2] = (long)puVar5;
        goto LAB_10976261c;
      }
    }
    else if ((int)param_5 == 1) {
      if (uVar12 < 0xa7) {
        puVar5 = puVar11;
        (**(code **)(puVar11 + 4))(puVar11,uVar12 << 1);
        if (puVar5 == (undefined2 *)0x0) goto LAB_109762644;
        param_1[2] = (long)puVar5;
        goto LAB_10976261c;
      }
    }
    else if (uVar12 < 0xe6) {
      puVar5 = puVar11;
      (**(code **)(puVar11 + 4))(puVar11,uVar12 << 1);
      if (puVar5 == (undefined2 *)0x0) {
LAB_109762644:
        param_1[2] = 0;
        plVar13 = (long *)0x40;
        goto LAB_109762738;
      }
      param_1[2] = (long)puVar5;
LAB_10976261c:
      _memcpy();
      goto LAB_109762624;
    }
LAB_1097625f0:
    plVar13 = (long *)0x3;
  }
  else {
    param_5 = param_5 + param_4;
    param_1[1] = param_5;
    if ((code *)param_3[5] == (code *)0x0) {
      if ((ulong)param_3[1] < param_5) goto LAB_109762530;
    }
    else {
      plVar13 = param_3;
      (*(code *)param_3[5])(param_3,param_5,0,0);
      if (plVar13 != (long *)0x0) {
LAB_109762530:
        plVar13 = (long *)0x55;
        goto LAB_109762738;
      }
    }
    param_3[2] = param_5;
    uStack_64 = 0;
    plVar13 = param_3;
    FUN_109757928(param_3,&uStack_64);
    *(int *)param_1 = (int)plVar13;
    plVar13 = (long *)(ulong)uStack_64;
    if (uStack_64 != 0) goto LAB_109762738;
    if (uVar12 >> 0x1e == 0) {
      uVar15 = param_2 & 0xffffffff;
      puVar5 = puVar11;
      (**(code **)(puVar11 + 4))(puVar11,uVar15 << 1);
      if (puVar5 != (undefined2 *)0x0) {
        uStack_64 = 0;
        param_1[2] = (long)puVar5;
        *puVar5 = 0;
        if ((int)*param_1 - 1U < 2) {
          if (1 < uVar12) {
            uVar16 = 1;
            do {
              plVar14 = param_3;
              func_0x000109757520(param_3,&uStack_64);
              plVar13 = (long *)(ulong)uStack_64;
              if (uStack_64 != 0) goto LAB_109762738;
              if ((int)*param_1 == 2) {
                plVar13 = param_3;
                func_0x000109757520();
                uVar4 = (uint)plVar13;
              }
              else {
                plVar13 = param_3;
                FUN_109757928(param_3,&uStack_64);
                uVar4 = (uint)plVar13;
              }
              plVar13 = (long *)(ulong)uStack_64;
              if (uStack_64 != 0) goto LAB_109762738;
              uVar2 = (uint)plVar14 ^ 0xffff;
              if ((uint)plVar14 <= (uVar4 ^ 0xffff)) {
                uVar2 = uVar4;
              }
              if (uVar16 < uVar12) {
                lVar8 = param_1[2];
                lVar7 = 0;
                do {
                  *(short *)(lVar8 + (ulong)uVar16 * 2 + lVar7 * 2) = (short)plVar14;
                  lVar1 = lVar7 + 1;
                  plVar14 = (long *)(ulong)((int)plVar14 + 1);
                  uVar4 = (uint)lVar7;
                  lVar7 = lVar1;
                } while (lVar1 + (ulong)uVar16 < uVar15 && uVar4 < uVar2);
                uVar16 = uVar16 + (int)lVar1;
              }
            } while (uVar16 < uVar12);
          }
        }
        else {
          if ((int)*param_1 != 0) goto LAB_1097625f0;
          plVar13 = param_3;
          func_0x00010975780c(param_3,uVar12 * 2 + -2);
          uStack_64 = (uint)plVar13;
          if (uStack_64 != 0) goto LAB_109762738;
          if (1 < uVar12) {
            puVar9 = (ushort *)param_1[2];
            puVar6 = (ushort *)param_3[8];
            uVar3 = param_3[9];
            lVar7 = uVar15 - 1;
            do {
              puVar9 = puVar9 + 1;
              if ((long)puVar6 + 1U < uVar3) {
                uVar10 = *puVar6 >> 8 | *puVar6 << 8;
                puVar6 = puVar6 + 1;
              }
              else {
                uVar10 = 0;
              }
              param_3[8] = (long)puVar6;
              *puVar9 = uVar10;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (param_3[5] != 0) {
            if (*param_3 != 0) {
              (**(code **)(param_3[7] + 0x10))();
            }
            *param_3 = 0;
          }
          param_3[8] = 0;
          param_3[9] = 0;
        }
LAB_109762624:
        if (param_6 == 0) {
          return (long *)0x0;
        }
        plVar13 = param_1;
        func_0x000109762d10(param_1,param_2,puVar11);
        if ((int)plVar13 == 0) {
          return plVar13;
        }
        goto LAB_109762738;
      }
      plVar13 = (long *)0x40;
    }
    else {
      plVar13 = (long *)0xa;
    }
    param_1[2] = 0;
  }
LAB_109762738:
  if (param_1[2] != 0) {
    (**(code **)(puVar11 + 8))(puVar11);
  }
  param_1[2] = 0;
  if (param_1[3] != 0) {
    (**(code **)(puVar11 + 8))(puVar11);
  }
  param_1[3] = 0;
  *(int *)param_1 = 0;
  param_1[1] = 0;
  return plVar13;
}



/* Entry: 109762c38; end: 109762dcf;  */

void FUN_109762c38(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 6);
  if (lVar1 != 0) {
    uVar3 = (ulong)param_1[5];
    if (param_1[5] != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(lVar1 + uVar4 * 8);
        if (lVar2 != 0) {
          (**(code **)(param_2 + 0x10))(param_2,lVar2);
          lVar1 = *(long *)(param_1 + 6);
          uVar3 = (ulong)param_1[5];
        }
        *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    uVar3 = (ulong)*param_1;
    if (*param_1 != 0) {
      uVar4 = 0;
      lVar2 = 8;
      do {
        if (*(long *)(lVar1 + lVar2) != 0) {
          (**(code **)(param_2 + 0x10))(param_2,*(long *)(lVar1 + lVar2));
          lVar1 = *(long *)(param_1 + 2);
          uVar3 = (ulong)*param_1;
        }
        *(undefined8 *)(lVar1 + lVar2) = 0;
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar4 < uVar3);
    }
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 109762dd0; end: 109762e5b;  */

void FUN_109762dd0(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_109762464(param_2 + 0x478);
    if (*(long *)(param_2 + 0x4b8) != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    *(undefined8 *)(param_2 + 0x4b8) = 0;
    if (*(long *)(param_2 + 0x438) != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    *(undefined8 *)(param_2 + 0x438) = 0;
    if (*(long *)(param_2 + 0x448) != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    *(undefined8 *)(param_2 + 0x448) = 0;
    if (*(long *)(param_2 + 0x460) != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    *(undefined8 *)(param_2 + 0x460) = 0;
  }
  return;
}



/* Entry: 109762e5c; end: 109762f3f;  */

int FUN_109762e5c(undefined8 *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  param_1[7] = param_3;
  lVar2 = param_3;
  FUN_1097539a8(param_3,8,0,(long)param_2,0,&iStack_44);
  param_1[5] = lVar2;
  iVar1 = iStack_44;
  if (iStack_44 == 0) {
    lVar2 = param_3;
    FUN_1097539a8(param_3,4,0,(long)param_2,0,&iStack_44);
    param_1[6] = lVar2;
    if (iStack_44 == 0) {
      *(int *)(param_1 + 4) = param_2;
      param_1[2] = 0;
      param_1[3] = 0xdeadbeef;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[9] = FUN_109762f40;
      param_1[8] = FUN_109762e5c;
      param_1[0xb] = FUN_109763050;
      param_1[10] = FUN_109762f48;
      return 0;
    }
    lVar2 = param_1[5];
    iVar1 = iStack_44;
  }
  if (lVar2 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,lVar2);
  }
  param_1[5] = 0;
  return iVar1;
}



/* Entry: 109762f40; end: 109762f47;  */

int FUN_109762f40(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iStack_34;
  
  lVar3 = param_1[1];
  lVar2 = param_1[7];
  lVar5 = *param_1;
  FUN_1097539a8(lVar2,1,param_1[2],lVar3,lVar5,&iStack_34);
  *param_1 = lVar2;
  if (iStack_34 == 0) {
    if ((lVar5 != 0 && lVar2 != lVar5) && (0 < (int)param_1[4])) {
      plVar4 = (long *)param_1[5];
      plVar1 = plVar4 + (int)param_1[4];
      do {
        if (*plVar4 != 0) {
          *plVar4 = *param_1 + (*plVar4 - lVar5);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar1);
    }
    iStack_34 = 0;
    param_1[2] = lVar3;
  }
  return iStack_34;
}



/* Entry: 109762f48; end: 10976304f;  */

long * FUN_109762f48(long *param_1,uint param_2,long param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((int)param_2 < 0) {
    return (long *)0x6;
  }
  if ((int)param_2 < (int)param_1[4]) {
    lVar5 = *param_1;
    lVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar3 = uVar7;
    if (uVar7 < lVar6 + (ulong)param_4) {
      do {
        uVar3 = uVar3 + (uVar3 >> 2) + 0x400 & 0xfffffffffffffc00;
      } while (uVar3 < lVar6 + (ulong)param_4);
      uVar4 = param_3 - lVar5;
      uVar3 = uVar4;
      if (0x7fffffffffffffff < uVar4) {
        uVar3 = 0xffffffffffffffff;
      }
      if (uVar7 <= uVar4) {
        uVar3 = 0xffffffffffffffff;
      }
      plVar2 = param_1;
      func_0x0001097670d4();
      if (((int)plVar2 == 0) && (-1 < (long)uVar3)) {
        lVar5 = *param_1;
        param_3 = lVar5 + uVar3;
      }
      else {
        if ((int)plVar2 != 0) {
          return plVar2;
        }
        lVar5 = *param_1;
      }
      lVar6 = param_1[1];
    }
    lVar1 = 0;
    if (lVar5 != 0) {
      lVar1 = lVar5 + lVar6;
    }
    *(long *)(param_1[5] + (ulong)param_2 * 8) = lVar1;
    *(uint *)(param_1[6] + (ulong)param_2 * 4) = param_4;
    if (param_4 != 0) {
      _memcpy(*param_1 + lVar6,param_3,(ulong)param_4);
      lVar6 = param_1[1];
    }
    plVar2 = (long *)0x0;
    param_1[1] = lVar6 + (ulong)param_4;
  }
  else {
    plVar2 = (long *)0x6;
  }
  return plVar2;
}



/* Entry: 109763050; end: 1097630cf;  */

void FUN_109763050(long *param_1)

{
  long lVar1;
  
  if (param_1[3] == 0xdeadbeef) {
    lVar1 = param_1[7];
    if (*param_1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *param_1 = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[5] = 0;
    if (param_1[6] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[6] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1097630d0; end: 109763123;  */

void FUN_1097630d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[0xc] = FUN_109763498;
  param_1[0xb] = FUN_1097633b0;
  param_1[0xe] = (undefined *)0x109763688;
  param_1[0xd] = FUN_10976363c;
  param_1[0x10] = FUN_109763918;
  param_1[0xf] = FUN_10976381c;
  param_1[6] = (undefined *)0x109763118;
  param_1[5] = FUN_1097630d0;
  param_1[8] = FUN_109763124;
  param_1[7] = (undefined *)0x10976311c;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = param_2;
  param_1[4] = param_4;
  param_1[0x11] = (undefined *)0x109763f34;
  param_1[10] = (undefined *)0x10976337c;
  param_1[9] = (undefined *)0x109763350;
  return;
}



/* Entry: 109763124; end: 1097633af;  */

void FUN_109763124(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbStack_28;
  
  pbStack_28 = (byte *)*param_1;
  pbVar6 = (byte *)param_1[2];
  do {
    if ((pbVar6 <= pbStack_28) || (bVar5 = *pbStack_28, 0x25 < bVar5)) break;
    if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar5 != 0x25) break;
      bVar5 = 0x25;
      while ((pbVar4 = pbStack_28 + 1, bVar5 != 10 && bVar5 != 0xd &&
             (pbStack_28 = pbVar6, pbVar4 != pbVar6))) {
        bVar5 = *pbVar4;
        pbStack_28 = pbVar4;
      }
    }
    pbStack_28 = pbStack_28 + 1;
  } while( true );
  if (pbVar6 <= pbStack_28) {
    uVar1 = 0;
    goto LAB_10976330c;
  }
  bVar5 = *pbStack_28;
  if (bVar5 < 0x3e) {
    if (bVar5 == 0x28) {
      ppbVar3 = &pbStack_28;
      func_0x000109767328(ppbVar3,pbVar6);
      uVar1 = SUB84(ppbVar3,0);
      goto LAB_10976330c;
    }
    if (bVar5 == 0x2f) {
      pbStack_28 = pbStack_28 + 1;
    }
    else if (bVar5 == 0x3c) {
      if ((pbVar6 <= pbStack_28 + 1) || (pbStack_28[1] != 0x3c)) {
        ppbVar3 = &pbStack_28;
        func_0x000109767410(ppbVar3,pbVar6);
        uVar1 = SUB84(ppbVar3,0);
        goto LAB_10976330c;
      }
      goto LAB_109763280;
    }
LAB_1097632a4:
    pbVar4 = pbStack_28;
    if (pbStack_28 < pbVar6) {
      do {
        bVar5 = *pbStack_28;
        pbVar4 = pbStack_28;
        if ((bVar5 < 0x3f && (1L << ((ulong)bVar5 & 0x3f) & 0x5000832100003601U) != 0) ||
           (bVar5 - 0x5b < 0x23 && (1L << ((ulong)(bVar5 - 0x5b) & 0x3f) & 0x500000005U) != 0))
        break;
        pbStack_28 = pbStack_28 + 1;
        pbVar4 = pbVar6;
      } while (pbStack_28 != pbVar6);
    }
  }
  else {
    if (0x5c < bVar5) {
      if (bVar5 == 0x7b) {
        ppbVar3 = &pbStack_28;
        FUN_109767204(ppbVar3,pbVar6);
        uVar1 = SUB84(ppbVar3,0);
        goto LAB_10976330c;
      }
      if (bVar5 == 0x5d) goto LAB_109763248;
      goto LAB_1097632a4;
    }
    if (bVar5 == 0x3e) {
      pbVar4 = pbStack_28 + 1;
      if ((pbVar6 <= pbVar4) || (*pbVar4 != 0x3e)) {
        uVar1 = 3;
        pbStack_28 = pbVar4;
        goto LAB_10976330c;
      }
LAB_109763280:
      pbVar4 = pbStack_28 + 2;
    }
    else {
      if (bVar5 != 0x5b) goto LAB_1097632a4;
LAB_109763248:
      pbVar4 = pbStack_28 + 1;
    }
  }
  uVar1 = 0;
  pbStack_28 = pbVar4;
LAB_10976330c:
  uVar2 = uVar1;
  if ((pbStack_28 < pbVar6) && (uVar2 = 3, pbStack_28 != (byte *)*param_1)) {
    uVar2 = uVar1;
  }
  if (pbStack_28 <= pbVar6) {
    pbVar6 = pbStack_28;
  }
  *(undefined4 *)(param_1 + 3) = uVar2;
  *param_1 = pbVar6;
  return;
}



/* Entry: 1097633b0; end: 109763497;  */

undefined8
FUN_1097633b0(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,int param_5)

{
  char **ppcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcStack_48;
  
  FUN_109767180(param_1,param_1[2]);
  pcStack_48 = (char *)*param_1;
  pcVar3 = (char *)param_1[2];
  if (pcVar3 <= pcStack_48) {
    return 0;
  }
  if (param_5 == 0) {
    ppcVar1 = &pcStack_48;
    FUN_1097676a4(ppcVar1,pcVar3,param_2,param_3);
    *param_4 = (ulong)ppcVar1 & 0xffffffff;
LAB_109763478:
    uVar2 = 0;
    *param_1 = (long)pcStack_48;
  }
  else {
    if (*pcStack_48 == '<') {
      ppcVar1 = &pcStack_48;
      pcStack_48 = pcStack_48 + 1;
      FUN_1097676a4(ppcVar1,pcVar3,param_2,param_3);
      *param_4 = (ulong)ppcVar1 & 0xffffffff;
      *param_1 = (long)pcStack_48;
      if (((char *)param_1[2] <= pcStack_48) || (*pcStack_48 == '>')) {
        pcStack_48 = pcStack_48 + 1;
        goto LAB_109763478;
      }
    }
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 109763498; end: 10976363b;  */

long FUN_109763498(long *param_1,int param_2,long param_3)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  byte *pbStack_68;
  
  FUN_109767180(param_1,param_1[2]);
  pbVar4 = (byte *)param_1[2];
  pbStack_68 = (byte *)*param_1;
  if (pbVar4 <= pbStack_68) {
    lVar5 = 0;
    goto LAB_109763614;
  }
  if (*pbStack_68 == 0x5b) {
    bVar6 = 0x5d;
LAB_109763508:
    bVar7 = false;
    pbStack_68 = pbStack_68 + 1;
  }
  else {
    if (*pbStack_68 == 0x7b) {
      bVar6 = 0x7d;
      goto LAB_109763508;
    }
    bVar6 = 0;
    bVar7 = true;
  }
  lVar5 = 0;
  do {
    if (pbVar4 <= pbStack_68) break;
    do {
      bVar3 = *pbStack_68;
      pbVar2 = pbStack_68;
      if (0x25 < bVar3) break;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar3 != 0x25) break;
        bVar3 = 0x25;
        while ((pbVar2 = pbStack_68 + 1, bVar3 != 10 && bVar3 != 0xd &&
               (pbStack_68 = pbVar4, pbVar2 != pbVar4))) {
          bVar3 = *pbVar2;
          pbStack_68 = pbVar2;
        }
      }
      pbStack_68 = pbStack_68 + 1;
      pbVar2 = pbStack_68;
    } while (pbStack_68 < pbVar4);
    pbStack_68 = pbVar2;
    if (pbVar4 <= pbVar2) break;
    if (bVar6 == *pbVar2) {
      pbStack_68 = pbVar2 + 1;
      break;
    }
    if ((param_3 != 0) && (param_2 <= lVar5)) break;
    ppbVar1 = &pbStack_68;
    FUN_10976685c(ppbVar1,pbVar4,0);
    if (param_3 != 0) {
      *(short *)(param_3 + lVar5 * 2) = (short)((ulong)ppbVar1 >> 0x10);
    }
    if (pbVar2 == pbStack_68) {
      lVar5 = 0xffffffff;
      break;
    }
    lVar5 = lVar5 + 1;
  } while (!bVar7);
LAB_109763614:
  *param_1 = (long)pbStack_68;
  return lVar5;
}



/* Entry: 10976363c; end: 10976381b;  */

long FUN_10976363c(long *param_1,int param_2,long param_3,int param_4)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  byte *pbStack_68;
  
  FUN_109767180(param_1,param_1[2]);
  pbVar2 = (byte *)param_1[2];
  pbStack_68 = (byte *)*param_1;
  if (pbVar2 <= pbStack_68) {
    lVar5 = 0;
    goto LAB_10976767c;
  }
  if (*pbStack_68 == 0x5b) {
    bVar6 = 0x5d;
LAB_109767568:
    bVar7 = false;
    pbStack_68 = pbStack_68 + 1;
  }
  else {
    if (*pbStack_68 == 0x7b) {
      bVar6 = 0x7d;
      goto LAB_109767568;
    }
    bVar6 = 0;
    bVar7 = true;
  }
  lVar5 = 0;
  do {
    if (pbVar2 <= pbStack_68) break;
    do {
      bVar4 = *pbStack_68;
      pbVar3 = pbStack_68;
      if (0x25 < bVar4) break;
      if ((1L << ((ulong)bVar4 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar4 != 0x25) break;
        bVar4 = 0x25;
        while ((pbVar3 = pbStack_68 + 1, bVar4 != 10 && bVar4 != 0xd &&
               (pbStack_68 = pbVar2, pbVar3 != pbVar2))) {
          bVar4 = *pbVar3;
          pbStack_68 = pbVar3;
        }
      }
      pbStack_68 = pbStack_68 + 1;
      pbVar3 = pbStack_68;
    } while (pbStack_68 < pbVar2);
    pbStack_68 = pbVar3;
    if (pbVar2 <= pbVar3) break;
    if (bVar6 == *pbVar3) {
      pbStack_68 = pbVar3 + 1;
      break;
    }
    if ((param_3 != 0) && (param_2 <= lVar5)) break;
    ppbVar1 = &pbStack_68;
    FUN_10976685c(ppbVar1,pbVar2,(long)param_4);
    if (param_3 != 0) {
      *(byte ***)(param_3 + lVar5 * 8) = ppbVar1;
    }
    if (pbVar3 == pbStack_68) {
      lVar5 = 0xffffffff;
      break;
    }
    lVar5 = lVar5 + 1;
  } while (!bVar7);
LAB_10976767c:
  *param_1 = (long)pbStack_68;
  return lVar5;
}



/* Entry: 10976381c; end: 109763917;  */

void FUN_10976381c(ulong *param_1,undefined8 *param_2,ulong param_3,int *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  int iStack_58;
  
  *param_4 = -1;
  func_0x000109763688(param_1,&lStack_68);
  if (iStack_58 == 3) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *param_1 = lStack_68 + 1U;
    param_1[2] = lStack_60 - 1U;
    puVar3 = param_2;
    if (lStack_68 + 1U < lStack_60 - 1U) {
      do {
        func_0x000109763688(param_1,&uStack_80);
        if (iStack_70 == 0) break;
        if ((param_2 != (undefined8 *)0x0) && (puVar3 < param_2 + (param_3 & 0xffffffff) * 3)) {
          puVar3[1] = uStack_78;
          *puVar3 = uStack_80;
          puVar3[2] = CONCAT44(uStack_6c,iStack_70);
        }
        puVar3 = puVar3 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = (int)((ulong)((long)puVar3 - (long)param_2) >> 3) * -0x55555555;
    *param_1 = uVar1;
    param_1[2] = uVar2;
  }
  return;
}



/* Entry: 109763918; end: 10976409b;  */

void FUN_109763918(ulong *****param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  undefined1 uVar10;
  int iVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuVar13;
  ulong uVar14;
  byte bVar15;
  ulong ****ppppuVar16;
  long lVar17;
  long lVar18;
  ulong *****pppppuVar19;
  long lVar20;
  ulong *****unaff_x20;
  ulong *****unaff_x21;
  uint uVar21;
  ulong ****unaff_x22;
  ulong *****unaff_x23;
  undefined8 uVar22;
  ulong ****unaff_x24;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  ulong *****unaff_x26;
  ulong *****unaff_x27;
  undefined8 *puVar26;
  ulong unaff_x28;
  ulong ***pppuStack_4d0;
  ulong ***pppuStack_4c8;
  undefined8 uStack_4c0;
  ulong ***pppuStack_4b8;
  undefined8 uStack_4b0;
  ulong ***pppuStack_4a8;
  ulong ***pppuStack_4a0;
  uint uStack_48c;
  undefined8 auStack_488 [96];
  long lStack_188;
  ulong uStack_180;
  ulong ****ppppuStack_178;
  ulong ****ppppuStack_170;
  ulong ****ppppuStack_168;
  ulong ***pppuStack_160;
  ulong ****ppppuStack_158;
  ulong ***pppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  ulong ****ppppuStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  ulong ****ppppuStack_118;
  long lStack_110;
  long lStack_108;
  uint uStack_f4;
  ulong ****ppppuStack_f0;
  int iStack_e4;
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  ulong ****ppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong ****ppppuStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  int iStack_98;
  ulong ***pppuStack_90;
  long lStack_88;
  int iStack_80;
  int iStack_7c;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar8 = &ppppuStack_a8;
  ppppuStack_e0 = (ulong ****)param_1;
  ppppuStack_d0 = (ulong ****)param_3;
  func_0x000109763688();
  ppppuVar16 = ppppuStack_e0;
  if (iStack_98 != 0) {
    ppppuStack_b0 = ppppuStack_a8;
    unaff_x28 = (ulong)*(uint *)((long)param_2 + 0x14);
    iStack_e4 = iStack_98;
    uVar21 = (uint)param_4;
    unaff_x23 = (ulong *****)ppppuStack_a0;
    if (*(uint *)((long)param_2 + 0x14) == 7) {
      unaff_x22 = (ulong ****)*ppppuStack_e0;
      unaff_x24 = (ulong ****)ppppuStack_e0[2];
      unaff_x21 = (ulong *****)((long)ppppuStack_a8 + 1);
      *ppppuStack_e0 = (ulong ***)unaff_x21;
      unaff_x20 = (ulong *****)((long)ppppuStack_a0 + -1);
      ppppuStack_e0[2] = (ulong ***)unaff_x20;
      pppppuVar8 = (ulong *****)&pppuStack_90;
      func_0x000109763688(ppppuStack_e0);
      *ppppuVar16 = (ulong ***)unaff_x22;
      ppppuVar16[2] = (ulong ***)unaff_x24;
      unaff_x26 = (ulong *****)ppppuVar16;
      if (iStack_80 == 3) {
        if (uVar21 == 0) goto LAB_109763ee4;
        unaff_x28 = 8;
        unaff_x24 = (ulong ****)0x1;
        unaff_x23 = unaff_x20;
        unaff_x27 = (ulong *****)0x1;
        ppppuStack_b0 = (ulong ****)unaff_x21;
      }
      else {
        unaff_x24 = (ulong ****)0x0;
        unaff_x28 = 7;
        unaff_x27 = (ulong *****)0x1;
      }
    }
    else if (iStack_98 == 3) {
      if (uVar21 == 0) goto LAB_109763ee4;
      ppppuStack_b0 = (ulong ****)((long)ppppuStack_a8 + 1);
      unaff_x23 = (ulong *****)((long)ppppuStack_a0 + -1);
      unaff_x24 = (ulong ****)0x1;
      unaff_x27 = param_4;
    }
    else {
      unaff_x24 = (ulong ****)0x0;
      unaff_x27 = (ulong *****)0x1;
    }
    uStack_f4 = uVar21 << 2;
    uStack_b8 = (ulong)(uVar21 << 1);
    ppppuStack_118 = (ulong ****)(ulong)(uVar21 << 5);
    unaff_x22 = (ulong ****)0x1;
    uStack_c0 = (ulong)(uVar21 * 3);
    unaff_x21 = (ulong *****)((long)&dylib_command_1000035f8.dylib.name.offset + 1);
    lStack_108 = 0x8000;
    lStack_110 = 0x8000;
    uStack_c8 = (ulong)param_4 & 0xffffffff;
    pppppuVar12 = (ulong *****)ppppuStack_b0;
    ppppuStack_d8 = (ulong ****)param_2;
    pppppuVar19 = (ulong *****)ppppuStack_d0;
    pppppuVar9 = param_3;
LAB_109763a68:
    for (; (param_2 = (ulong *****)ppppuStack_d8, pppppuVar12 < unaff_x23 &&
           (bVar15 = *(byte *)pppppuVar12, bVar15 < 0x26));
        pppppuVar12 = (ulong *****)((long)pppppuVar12 + 1)) {
      if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar15 != 0x25) break;
        bVar15 = 0x25;
        while ((pppppuVar13 = (ulong *****)((long)pppppuVar12 + 1), bVar15 != 10 && bVar15 != 0xd &&
               (pppppuVar12 = unaff_x23, pppppuVar13 != unaff_x23))) {
          bVar15 = *(byte *)pppppuVar13;
          pppppuVar12 = pppppuVar13;
        }
      }
    }
    unaff_x20 = (ulong *****)
                ((long)pppppuVar19[(long)unaff_x24] + (ulong)*(uint *)(ppppuStack_d8 + 4));
    puVar6 = (undefined8 *)0x3;
    iVar11 = (int)unaff_x28;
    ppppuStack_b0 = (ulong ****)pppppuVar12;
    if (iVar11 < 5) {
      if (iVar11 < 3) {
        if (iVar11 == 1) {
          pppppuVar13 = (ulong *****)((long)pppppuVar12 + 3);
          if ((((pppppuVar13 < unaff_x23) && (*(byte *)pppppuVar12 == 0x74)) &&
              (*(byte *)((long)pppppuVar12 + 1) == 0x72)) &&
             ((*(byte *)((long)pppppuVar12 + 2) == 0x75 && (*(byte *)pppppuVar13 == 0x65)))) {
            pppppuVar13 = (ulong *****)0x1;
            ppppuStack_b0 = (ulong ****)((long)pppppuVar12 + 5);
          }
          else if (((((ulong *****)((long)pppppuVar12 + 4) < unaff_x23) &&
                    ((*(byte *)pppppuVar12 == 0x66 && (*(byte *)((long)pppppuVar12 + 1) == 0x61))))
                   && (*(byte *)((long)pppppuVar12 + 2) == 0x6c)) && (*(byte *)pppppuVar13 == 0x73))
          {
            pppppuVar13 = (ulong *****)0x0;
            lVar17 = 6;
            if (*(byte *)((long)pppppuVar12 + 4) != 0x65) {
              lVar17 = 0;
            }
            ppppuStack_b0 = (ulong ****)((long)pppppuVar12 + lVar17);
          }
          else {
            pppppuVar13 = (ulong *****)0x0;
          }
        }
        else {
          if (iVar11 != 2) goto LAB_109763ee8;
          pppppuVar13 = &ppppuStack_b0;
          pppppuVar8 = unaff_x23;
          FUN_109766ba8();
          pppppuVar19 = (ulong *****)ppppuStack_d0;
        }
      }
      else {
        if (iVar11 == 3) {
          pppppuVar9 = (ulong *****)0x0;
        }
        else {
          if (iVar11 != 4) goto LAB_109763ee8;
          pppppuVar9 = (ulong *****)0x3;
        }
        pppppuVar13 = &ppppuStack_b0;
        pppppuVar8 = unaff_x23;
        FUN_10976685c();
        pppppuVar19 = (ulong *****)ppppuStack_d0;
      }
      bVar15 = *(byte *)((long)param_2 + 0x24);
      param_3 = pppppuVar9;
      if (bVar15 == 4) {
        *(int *)unaff_x20 = (int)pppppuVar13;
      }
      else if (bVar15 == 2) {
        *(short *)unaff_x20 = (short)pppppuVar13;
      }
      else if (bVar15 == 1) {
        *(byte *)unaff_x20 = (byte)pppppuVar13;
      }
      else {
        *unaff_x20 = (ulong ****)pppppuVar13;
      }
    }
    else if (iVar11 - 5U < 2) {
      param_3 = pppppuVar9;
      if (unaff_x23 <= pppppuVar12) goto LAB_109763eb8;
      unaff_x26 = (ulong *****)ppppuStack_e0[4];
      if (iStack_e4 == 2) {
        iVar11 = -2;
      }
      else {
        if (iStack_e4 != 4) goto LAB_109763ee8;
        iVar11 = -1;
      }
      ppppuStack_b0 = (ulong ****)((long)pppppuVar12 + 1);
      ppppuStack_f0 = (ulong ****)((long)pppppuVar12 + 1);
      uVar5 = ((int)unaff_x23 - (int)pppppuVar12) + iVar11;
      param_3 = (ulong *****)(ulong)uVar5;
      if (*unaff_x20 != (ulong ****)0x0) {
        (*(code *)unaff_x26[2])(unaff_x26);
        *unaff_x20 = (ulong ****)0x0;
      }
      pppppuVar8 = (ulong *****)(ulong)(uVar5 + 1);
      if (uVar5 == 0xffffffff) {
        unaff_x26 = (ulong *****)0x0;
      }
      else {
        (*(code *)unaff_x26[1])();
        if (unaff_x26 == (ulong *****)0x0) goto LAB_109763f20;
      }
      pppppuVar8 = (ulong *****)ppppuStack_f0;
      _memcpy(unaff_x26);
      *(byte *)((long)unaff_x26 + (ulong)uVar5) = 0;
      *unaff_x20 = (ulong ****)unaff_x26;
      pppppuVar19 = (ulong *****)ppppuStack_d0;
    }
    else {
      if (iVar11 != 7) {
        if (iVar11 == 8) {
          param_2 = (ulong *****)ppppuStack_e0[4];
          if (uStack_f4 == 0) {
            unaff_x26 = (ulong *****)0x0;
LAB_109763d70:
            unaff_x20 = (ulong *****)0x0;
LAB_109763d74:
            uVar5 = (uint)&ppppuStack_b0;
            pppppuVar8 = unaff_x23;
            param_3 = param_4;
            FUN_109767504();
            if ((-1 < (int)uVar5) && (uVar21 <= uVar5)) {
              do {
                if ((unaff_x23 <= ppppuStack_b0) || (bVar15 = *(byte *)ppppuStack_b0, 0x25 < bVar15)
                   ) goto LAB_109763e04;
                if ((1L << ((ulong)bVar15 & 0x3f) & 0x100003601U) == 0) {
                  if ((ulong)bVar15 != 0x25) goto LAB_109763e04;
                  bVar15 = 0x25;
                  while ((pppppuVar9 = (ulong *****)((long)ppppuStack_b0 + 1),
                         bVar15 != 10 && bVar15 != 0xd &&
                         (ppppuStack_b0 = (ulong ****)unaff_x23, pppppuVar9 != unaff_x23))) {
                    bVar15 = *(byte *)pppppuVar9;
                    ppppuStack_b0 = (ulong ****)pppppuVar9;
                  }
                }
                ppppuStack_b0 = (ulong ****)((long)ppppuStack_b0 + 1);
              } while( true );
            }
            if (unaff_x26 != (ulong *****)0x0) {
              pppppuVar8 = unaff_x26;
              (*(code *)param_2[2])(param_2);
            }
            goto LAB_109763ee4;
          }
          if (uStack_f4 >> 0x1c == 0) {
            unaff_x26 = param_2;
            pppppuVar8 = (ulong *****)ppppuStack_118;
            (*(code *)param_2[1])();
            param_3 = param_2;
            if (unaff_x26 != (ulong *****)0x0) goto LAB_109763d70;
LAB_109763f20:
            puVar6 = (undefined8 *)0x40;
            param_2 = param_3;
          }
          else {
            puVar6 = (undefined8 *)0xa;
          }
        }
        goto LAB_109763ee8;
      }
      iVar11 = (int)&ppppuStack_b0;
      param_3 = (ulong *****)0x4;
      pppppuVar8 = unaff_x23;
      FUN_109767504();
      if (iVar11 < 4) goto LAB_109763ee4;
      unaff_x20[1] = (ulong ****)(lStack_88 + (lStack_88 >> 0x3f) + lStack_108 & 0xffffffffffff0000)
      ;
      *unaff_x20 = (ulong ****)
                   ((long)pppuStack_90 + lStack_110 + ((long)pppuStack_90 >> 0x3f) &
                   0xffffffffffff0000);
      unaff_x20[3] = (ulong ****)(lStack_78 + (lStack_78 >> 0x3f) + lStack_108 & 0xffffffffffff0000)
      ;
      unaff_x20[2] = (ulong ****)
                     (CONCAT44(iStack_7c,iStack_80) + ((long)iStack_7c >> 0x1f) + lStack_110 &
                     0xffffffffffff0000);
      pppppuVar19 = (ulong *****)ppppuStack_d0;
    }
LAB_109763eb8:
    unaff_x24 = (ulong ****)((long)unaff_x24 + 1);
    uVar5 = (int)unaff_x27 - 1;
    unaff_x27 = (ulong *****)(ulong)uVar5;
    pppppuVar12 = (ulong *****)ppppuStack_b0;
    pppppuVar9 = param_3;
    if (uVar5 == 0) goto code_r0x000109763ec8;
    goto LAB_109763a68;
  }
LAB_109763ee4:
  puVar6 = (undefined8 *)0x3;
  pppppuVar9 = param_3;
LAB_109763ee8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_180 = unaff_x28;
  ppppuStack_178 = (ulong ****)unaff_x27;
  ppppuStack_170 = (ulong ****)unaff_x26;
  ppppuStack_168 = (ulong ****)param_2;
  pppuStack_160 = (ulong ***)unaff_x24;
  ppppuStack_158 = (ulong ****)unaff_x23;
  pppuStack_150 = (ulong ***)unaff_x22;
  ppppuStack_148 = (ulong ****)unaff_x21;
  ppppuStack_140 = (ulong ****)unaff_x20;
  ppppuStack_138 = (ulong ****)param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  uStack_128 = 0x109763f34;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4c8 = (ulong ***)pppppuVar8[1];
  pppuStack_4d0 = (ulong ***)*pppppuVar8;
  pppuStack_4b8 = (ulong ***)pppppuVar8[3];
  uStack_4c0 = pppppuVar8[2];
  pppuStack_4a8 = (ulong ***)pppppuVar8[5];
  uStack_4b0 = pppppuVar8[4];
  pppuStack_4a0 = (ulong ***)pppppuVar8[6];
  uStack_4c0._0_4_ = SUB84(pppppuVar8[2],0);
  uStack_4c0 = (ulong ****)CONCAT44(2,(undefined4)uStack_4c0);
  if ((*(int *)((long)pppppuVar8 + 0x14) == 10) || (*(int *)((long)pppppuVar8 + 0x14) == 7)) {
    uStack_4c0 = (ulong ****)CONCAT44(3,(undefined4)uStack_4c0);
  }
  ppppuVar16 = (ulong ****)auStack_488;
  iVar11 = 0x20;
  FUN_10976381c(puVar6,ppppuVar16,0x20,&uStack_48c);
  if ((int)uStack_48c < 0) {
    puVar7 = (undefined8 *)0xa2;
  }
  else {
    if (*(uint *)(pppppuVar8 + 5) <= uStack_48c) {
      uStack_48c = *(uint *)(pppppuVar8 + 5);
    }
    uVar22 = *puVar6;
    uVar23 = puVar6[2];
    if ((*(int *)((long)pppppuVar8 + 0x14) != 7) && (*(uint *)((long)pppppuVar8 + 0x2c) != 0)) {
      *(char *)((long)*pppppuVar9 + (ulong)*(uint *)((long)pppppuVar8 + 0x2c)) = (char)uStack_48c;
    }
    if (uStack_48c != 0) {
      uVar21 = (uint)uStack_4b0._4_1_;
      iVar25 = uStack_48c + 1;
      puVar26 = auStack_488;
      iVar24 = (int)uStack_4b0;
      do {
        iVar24 = iVar24 + uVar21;
        uVar1 = puVar26[1];
        *puVar6 = *puVar26;
        puVar6[2] = uVar1;
        puVar7 = puVar6;
        ppppuVar16 = &pppuStack_4d0;
        pppppuVar8 = pppppuVar9;
        FUN_109763918();
        iVar11 = (int)pppppuVar8;
        if ((int)puVar7 != 0) goto LAB_109764050;
        uStack_4b0 = (ulong ****)CONCAT44(uStack_4b0._4_4_,iVar24);
        iVar25 = iVar25 + -1;
        puVar26 = puVar26 + 3;
      } while (1 < iVar25);
    }
    puVar7 = (undefined8 *)0x0;
LAB_109764050:
    *puVar6 = uVar22;
    puVar6[2] = uVar23;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  *puVar7 = *ppppuVar16;
  puVar7[1] = ppppuVar16[1];
  puVar7[2] = ppppuVar16[2];
  puVar7[3] = ppppuVar16[3];
  puVar7[4] = ppppuVar16[4];
  puVar7[5] = ppppuVar16[5];
  puVar7[6] = ppppuVar16 + 6;
  puVar7[7] = ppppuVar16 + 7;
  puVar7[8] = ppppuVar16 + 8;
  puVar7[9] = ppppuVar16 + 10;
  puVar7[10] = ppppuVar16 + 0xc;
  if (iVar11 == 0) {
    uVar10 = *(undefined1 *)(ppppuVar16 + 0x10);
    lVar17 = 0x83;
    lVar18 = 0x82;
    lVar20 = 0x81;
  }
  else {
    uVar10 = 0;
    lVar17 = 0x86;
    lVar18 = 0x85;
    lVar20 = 0x84;
  }
  uVar2 = *(undefined1 *)((long)ppppuVar16 + lVar17);
  uVar3 = *(undefined1 *)((long)ppppuVar16 + lVar18);
  uVar4 = *(undefined1 *)((long)ppppuVar16 + lVar20);
  *(undefined1 *)(puVar7 + 0xb) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x59) = uVar4;
  *(undefined1 *)((long)puVar7 + 0x5a) = uVar3;
  *(undefined1 *)((long)puVar7 + 0x5b) = uVar2;
  *(char *)((long)puVar7 + 0x5c) = (char)iVar11;
  puVar7[0xd] = (undefined *)0x109764158;
  puVar7[0xc] = FUN_10976409c;
  return;
LAB_109763e04:
  unaff_x20 = (ulong *****)((long)unaff_x20 + 1);
  if (unaff_x20 == (ulong *****)0x4) goto code_r0x000109763e14;
  goto LAB_109763d74;
code_r0x000109763e14:
  if (uVar21 == 0) {
    pppppuVar19 = (ulong *****)ppppuStack_d0;
    if (unaff_x26 == (ulong *****)0x0) goto LAB_109763eb8;
  }
  else {
    uVar14 = 0;
    do {
      ppppuVar16 = (ulong ****)ppppuStack_d0[uVar14];
      *ppppuVar16 = (ulong ***)
                    ((long)unaff_x26[uVar14] + ((long)unaff_x26[uVar14] >> 0x3f) + 0x8000 &
                    0xffffffffffff0000);
      iVar11 = (int)uVar14;
      ppppuVar16[1] =
           (ulong ***)
           ((long)unaff_x26[(uint)((int)uStack_c8 + iVar11)] +
            ((long)unaff_x26[(uint)((int)uStack_c8 + iVar11)] >> 0x3f) + 0x8000 & 0xffffffffffff0000
           );
      ppppuVar16[2] =
           (ulong ***)
           ((long)unaff_x26[(uint)((int)uStack_b8 + iVar11)] +
            ((long)unaff_x26[(uint)((int)uStack_b8 + iVar11)] >> 0x3f) + 0x8000 & 0xffffffffffff0000
           );
      ppppuVar16[3] =
           (ulong ***)
           ((long)unaff_x26[(uint)((int)uStack_c0 + iVar11)] +
            ((long)unaff_x26[(uint)((int)uStack_c0 + iVar11)] >> 0x3f) + 0x8000 & 0xffffffffffff0000
           );
      uVar14 = uVar14 + 1;
    } while (uStack_c8 != uVar14);
  }
  pppppuVar8 = unaff_x26;
  (*(code *)param_2[2])(param_2);
  pppppuVar19 = (ulong *****)ppppuStack_d0;
  goto LAB_109763eb8;
code_r0x000109763ec8:
  puVar6 = (undefined8 *)0x0;
  param_2 = (ulong *****)ppppuStack_d8;
  goto LAB_109763ee8;
}



/* Entry: 10976409c; end: 1097642d3;  */

void FUN_10976409c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
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
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2 + 6;
  param_1[7] = param_2 + 7;
  param_1[8] = param_2 + 8;
  param_1[9] = param_2 + 10;
  param_1[10] = param_2 + 0xc;
  if (param_3 == 0) {
    uVar4 = *(undefined1 *)(param_2 + 0x10);
    lVar5 = 0x83;
    lVar6 = 0x82;
    lVar7 = 0x81;
  }
  else {
    uVar4 = 0;
    lVar5 = 0x86;
    lVar6 = 0x85;
    lVar7 = 0x84;
  }
  uVar1 = *(undefined1 *)((long)param_2 + lVar5);
  uVar2 = *(undefined1 *)((long)param_2 + lVar6);
  uVar3 = *(undefined1 *)((long)param_2 + lVar7);
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  *(undefined1 *)((long)param_1 + 0x5a) = uVar2;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar1;
  *(char *)((long)param_1 + 0x5c) = (char)param_3;
  param_1[0xd] = (undefined *)0x109764158;
  param_1[0xc] = FUN_10976409c;
  return;
}



/* Entry: 1097642d4; end: 109764347;  */

void FUN_1097642d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (((uint)*(ushort *)(lVar1 + 0x1a) + (uint)*(ushort *)(lVar1 + 0x62) + 1 <= *(uint *)(lVar1 + 8)
      ) || (FUN_109753a7c(lVar1,1,0), (int)lVar1 == 0)) {
    func_0x000109764280(param_1,param_2,param_3,1);
  }
  return;
}



/* Entry: 109764348; end: 1097643d7;  */

void FUN_109764348(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0x28);
  if (puVar3 == (ushort *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(lVar1 + 0xc) <= (uint)*(ushort *)(lVar1 + 0x60) + (uint)*(ushort *)(lVar1 + 0x18)
        ) && (FUN_109753a7c(lVar1,0,1), (int)lVar1 != 0)) {
      return;
    }
    if (*puVar3 == 0) {
      uVar2 = 1;
      goto LAB_1097643c4;
    }
    *(ushort *)(*(long *)(puVar3 + 0xc) + (ulong)(*puVar3 - 1) * 2) = puVar3[1] - 1;
  }
  uVar2 = *puVar3 + 1;
LAB_1097643c4:
  *puVar3 = uVar2;
  return;
}



/* Entry: 1097643d8; end: 109764443;  */

void FUN_1097643d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x80) != 3) {
    *(undefined4 *)(param_1 + 0x80) = 3;
    lVar1 = param_1;
    FUN_109764348();
    if ((int)lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      if (((uint)*(ushort *)(lVar1 + 0x1a) + (uint)*(ushort *)(lVar1 + 0x62) + 1 <=
           *(uint *)(lVar1 + 8)) || (FUN_109753a7c(lVar1,1,0), (int)lVar1 == 0)) {
        func_0x000109764280(param_1,param_2,param_3,1);
      }
      return;
    }
  }
  return;
}



/* Entry: 109764444; end: 109764523;  */

void FUN_109764444(long param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  puVar6 = *(ushort **)(param_1 + 0x28);
  if (puVar6 == (ushort *)0x0) {
    return;
  }
  uVar3 = *puVar6;
  uVar7 = (uint)uVar3;
  if (uVar3 < 2) {
    uVar8 = 0;
    if (uVar7 == 0) {
      uVar4 = puVar6[1];
      bVar10 = true;
      goto LAB_109764498;
    }
  }
  else {
    uVar8 = *(ushort *)(*(long *)(puVar6 + 0xc) + (ulong)(uVar7 - 2) * 2) + 1;
  }
  uVar4 = puVar6[1];
  if (uVar8 == uVar4) {
    *puVar6 = uVar3 - 1;
    return;
  }
  bVar10 = false;
LAB_109764498:
  uVar9 = (uint)uVar4;
  if (1 < uVar9) {
    plVar1 = (long *)(*(long *)(puVar6 + 4) + (ulong)uVar8 * 0x10);
    lVar2 = *(long *)(puVar6 + 4) + (ulong)uVar9 * 0x10;
    if (((*plVar1 == *(long *)(lVar2 + -0x10)) && (plVar1[1] == *(long *)(lVar2 + -8))) &&
       (*(char *)(*(long *)(puVar6 + 8) + (ulong)uVar9 + -1) == '\x01')) {
      uVar9 = uVar9 - 1;
      puVar6[1] = (ushort)uVar9;
    }
  }
  if (bVar10) {
    return;
  }
  uVar5 = (uVar9 & 0xffff) - 1;
  if (uVar8 != uVar5) {
    *(short *)(*(long *)(puVar6 + 0xc) + (ulong)(uVar7 - 1) * 2) = (short)uVar5;
    return;
  }
  *puVar6 = uVar3 - 1;
  puVar6[1] = (short)uVar9 - 1;
  return;
}



/* Entry: 109764524; end: 1097645f3;  */

undefined8
FUN_109764524(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  
  _bzero(param_1,3000);
  lVar1 = *(long *)(param_2 + 0xb0);
  FUN_1097566b0(lVar1,&DAT_10f57f82c,1);
  if (lVar1 == 0) {
    uVar2 = 7;
  }
  else {
    *(long *)(param_1 + 0xa80) = lVar1;
    func_0x00010976417c(param_1,param_2,param_3,param_4,param_7);
    uVar2 = 0;
    *(int *)(param_1 + 0xa88) = (int)*(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0xa90) = param_5;
    *(undefined4 *)(param_1 + 0xb68) = param_8;
    *(undefined8 *)(param_1 + 0xb60) = param_6;
    *(undefined8 *)(param_1 + 0xb70) = param_9;
    *(code **)(param_1 + 0xb80) = FUN_1097645f4;
    *(code **)(param_1 + 0xb78) = FUN_109764524;
    *(code **)(param_1 + 0xb90) = FUN_109764a2c;
    *(code **)(param_1 + 0xb88) = FUN_10976465c;
  }
  return uVar2;
}



/* Entry: 1097645f4; end: 10976465b;  */

void FUN_1097645f4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *param_1;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[4];
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    uVar7 = puVar2[3];
    uVar6 = puVar2[2];
    *(undefined8 *)(lVar1 + 0xe8) = puVar2[4];
    *(undefined8 *)(lVar1 + 0xe0) = uVar7;
    *(undefined8 *)(lVar1 + 0xd8) = uVar6;
    *(undefined8 *)(lVar1 + 0xd0) = uVar5;
    *(undefined8 *)(lVar1 + 200) = uVar4;
  }
  if ((code *)param_1[0x176] != (code *)0x0) {
    (*(code *)param_1[0x176])(param_1[0x175]);
    if (param_1[0x175] != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    param_1[0x175] = 0;
  }
  return;
}



/* Entry: 10976465c; end: 109764a2b;  */

undefined8 FUN_10976465c(long param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  byte *pbVar7;
  long *plVar8;
  uint uVar9;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  uint uVar10;
  uint uVar11;
  
  puVar2 = (ulong *)(param_1 + 0xd8);
  *(ulong **)(param_1 + 0x8d8) = puVar2;
  plVar21 = (long *)(param_1 + 0x8e0);
  *(long **)(param_1 + 0xa78) = plVar21;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(byte **)(param_1 + 0x8e8) = param_2;
  pbVar7 = param_2 + param_3;
  *(byte **)(param_1 + 0x8f0) = pbVar7;
  *(byte **)(param_1 + 0x8e0) = param_2;
  if (param_3 == 0) {
    return 0xa0;
  }
  bVar6 = false;
  lVar19 = 0x8e0;
  puVar17 = puVar2;
  do {
    pbVar20 = param_2 + 1;
    bVar5 = *param_2;
    uVar9 = (uint)bVar5;
    uVar10 = (uint)bVar5;
    uVar11 = (uint)bVar5;
    if (bVar5 < 0xb) {
      if (bVar5 == 10) {
        lVar12 = 0x16;
        goto LAB_109764778;
      }
      if (uVar10 - 3 < 7 || uVar10 == 1) {
        return 0xa0;
      }
LAB_109764884:
      if (uVar9 < 0x20) {
        return 0xa0;
      }
      if (uVar10 < 0xf7) {
        param_2 = pbVar20;
        uVar9 = uVar9 - 0x8b;
      }
      else {
        param_2 = param_2 + 2;
        if (pbVar7 < param_2) {
          return 0xa0;
        }
        uVar9 = 0xfa94 - ((uint)bVar5 * 0x100 | (uint)*pbVar20);
        if (uVar11 < 0xfb) {
          uVar9 = ((uint)bVar5 * 0x100 + (uint)*pbVar20) - 0xf694;
        }
      }
      pbVar20 = param_2;
      if (!bVar6) {
        uVar9 = uVar9 << 0x10;
      }
LAB_109764968:
      if (0x7f8 < (long)puVar17 - (long)puVar2) {
        return 0xa0;
      }
      puVar18 = puVar17 + 1;
      *puVar17 = (long)(int)uVar9;
    }
    else {
      if (uVar10 < 0x20) {
        if (uVar10 != 0xc) {
          if (uVar10 != 0xd) {
            if ((1 << (ulong)(uVar11 & 0x1f) & 0xc060c000U) != 0) {
              return 0xa0;
            }
            goto LAB_109764764;
          }
          lVar12 = 2;
          goto LAB_109764778;
        }
        if (pbVar7 <= pbVar20) {
          return 0xa0;
        }
        pbVar20 = param_2 + 2;
        if (param_2[1] == 7) {
          lVar12 = 4;
          goto LAB_109764778;
        }
        if (param_2[1] != 0xc) {
          return 0xa0;
        }
        lVar12 = 0x14;
      }
      else {
LAB_109764764:
        if (uVar11 == 0xff) {
          pbVar20 = param_2 + 5;
          if (pbVar7 < pbVar20) {
            return 0xa0;
          }
          uVar9 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
          uVar10 = uVar9 >> 0x10;
          uVar9 = uVar10 | uVar9 << 0x10;
          if (uVar9 - 0x7d01 < 0xffff05ff) {
            if (bVar6) {
              return 0xa0;
            }
            bVar6 = true;
          }
          else if (!bVar6) {
            uVar9 = uVar10 << 0x10;
          }
          goto LAB_109764968;
        }
        if (uVar9 != 0xb) goto LAB_109764884;
        lVar12 = 0x18;
LAB_109764778:
        if (bVar6) {
          return 0xa0;
        }
      }
      if ((long)puVar17 - (long)puVar2 >> 3 < (long)*(int *)(&UNK_10dff78cc + lVar12 * 4)) {
        return 0xa1;
      }
      puVar17 = puVar17 + -(long)*(int *)(&UNK_10dff78cc + lVar12 * 4);
      uVar9 = (int)lVar12 - 2U >> 1;
      if (uVar9 < 10) {
        if (uVar9 != 9) {
          if (uVar9 == 0) {
            uVar14 = 0;
            *(undefined4 *)(param_1 + 0x80) = 1;
            *(ulong *)(param_1 + 0x40) = *puVar17 + *(long *)(param_1 + 0x40);
            *(ulong *)(param_1 + 0x50) = puVar17[1];
          }
          else {
            if (uVar9 != 1) {
              return 0xa0;
            }
            *(undefined4 *)(param_1 + 0x80) = 1;
            *(ulong *)(param_1 + 0x40) = *puVar17 + *(long *)(param_1 + 0x40);
            *(ulong *)(param_1 + 0x48) = puVar17[1] + *(long *)(param_1 + 0x48);
            *(ulong *)(param_1 + 0x50) = puVar17[2];
            uVar14 = puVar17[3];
          }
          *(ulong *)(param_1 + 0x58) = uVar14;
          return 0;
        }
        uVar14 = *puVar17;
        puVar18 = puVar17 + 1;
        uVar15 = *puVar18;
        if (uVar15 == 0) {
          uVar16 = 0x7fffffff;
        }
        else {
          uVar4 = -uVar15;
          if (-1 < (long)uVar15) {
            uVar4 = uVar15;
          }
          uVar3 = -uVar14;
          if (-1 < (long)uVar14) {
            uVar3 = uVar14;
          }
          uVar16 = 0;
          if (uVar4 != 0) {
            uVar16 = ((uVar4 >> 1) + uVar3 * 0x10000) / uVar4;
          }
        }
        bVar6 = false;
        uVar4 = -uVar16;
        if (-1 < (long)(uVar15 ^ uVar14)) {
          uVar4 = uVar16;
        }
        *puVar17 = uVar4;
      }
      else {
        if (uVar9 == 10) {
          plVar8 = (long *)(long)*(short *)((long)puVar17 + 2);
          if (*(long *)(param_1 + 0xab0) != 0) {
            func_0x000109758088();
            if (*plVar8 == 0) {
              return 0xa0;
            }
            plVar8 = (long *)(ulong)*(uint *)(*plVar8 + 8);
          }
          if ((int)plVar8 < 0) {
            return 0xa0;
          }
          if (*(int *)(param_1 + 0xa9c) <= (int)plVar8) {
            return 0xa0;
          }
          if (0xa48 < lVar19) {
            return 0xa0;
          }
          *plVar21 = (long)pbVar20;
          lVar19 = lVar19 + 0x18;
          puVar13 = (undefined8 *)(param_1 + lVar19);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0xaa0) + ((ulong)plVar8 & 0xffffffff) * 8);
          pbVar20 = (byte *)*puVar1;
          puVar13[1] = pbVar20;
          if (*(long *)(param_1 + 0xaa8) == 0) {
            pbVar20 = pbVar20 + (*(uint *)(param_1 + 0xa98) &
                                ((int)*(uint *)(param_1 + 0xa98) >> 0x1f ^ 0xffffffffU));
            puVar13[1] = pbVar20;
            pbVar7 = (byte *)puVar1[1];
          }
          else {
            pbVar7 = pbVar20 + *(uint *)(*(long *)(param_1 + 0xaa8) +
                                        ((ulong)plVar8 & 0xffffffff) * 4);
          }
          puVar13[2] = pbVar7;
          *puVar13 = pbVar20;
          if (pbVar20 == (byte *)0x0) {
            return 0xa0;
          }
        }
        else {
          if (uVar9 != 0xb) {
            return 0xa0;
          }
          if (lVar19 < 0x8e1) {
            return 0xa0;
          }
          lVar19 = lVar19 + -0x18;
          puVar13 = (undefined8 *)(param_1 + lVar19);
          pbVar20 = (byte *)*puVar13;
          pbVar7 = (byte *)puVar13[2];
        }
        *(undefined8 **)(param_1 + 0xa78) = puVar13;
        puVar18 = puVar17;
      }
    }
    *(ulong **)(param_1 + 0x8d8) = puVar18;
    plVar21 = (long *)(param_1 + lVar19);
    puVar17 = puVar18;
    param_2 = pbVar20;
    if (pbVar7 <= pbVar20) {
      return 0xa0;
    }
  } while( true );
}



/* Entry: 109764a2c; end: 1097654c7;  */

undefined1 FUN_109764a2c(undefined8 *param_1,long param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  char cVar14;
  int iVar15;
  bool bVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  undefined1 uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  ulong uVar35;
  long *plVar36;
  int iVar37;
  long *plVar38;
  long lVar39;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_54;
  
  cVar5 = *(char *)((long)param_1 + 0x5c);
  if ((cVar5 != '\0') && (param_1[0x84] == 0)) {
    return 8;
  }
  plVar36 = *(long **)param_1[0x85];
  if (plVar36 == (long *)0x0) {
    plVar38 = (long *)*param_1;
    ((long *)param_1[0x85])[1] = (long)FUN_109767784;
    plVar36 = plVar38;
    (*(code *)plVar38[1])(plVar38,0x290);
    if (plVar36 == (long *)0x0) {
      *(undefined8 *)param_1[0x85] = 0;
      return 0x40;
    }
    _bzero();
    *(long **)param_1[0x85] = plVar36;
    *plVar36 = (long)plVar38;
    if (cVar5 == '\0') {
      plVar36[0x51] = *(long *)(param_1[0x83] + 0x1368);
    }
    plVar36[0x1b] = 0;
    plVar36[0x1a] = 0;
    plVar36[0x1d] = 0;
    plVar36[0x1c] = 0;
    plVar36[0x17] = 0;
    plVar36[0x16] = 0;
    plVar36[0x19] = 0;
    plVar36[0x18] = 0;
    plVar36[0x1b] = (long)plVar38;
    plVar36[0x1c] = (long)(plVar36 + 1);
    plVar36[0x16] = 0x1097677d8;
    plVar36[0x17] = (long)FUN_109767800;
    plVar36[0x19] = 0x109767868;
  }
  plVar36[0x1d] = (long)param_1;
  plVar36[0x1e] = (long)param_1;
  lVar17 = param_1[1];
  lVar29 = param_1[2];
  lVar24 = *(long *)(lVar17 + 0xb0);
  cVar6 = *(char *)(lVar24 + 0x3c);
  cVar14 = *(char *)(*(long *)(lVar17 + 0xf0) + 0x68);
  uStack_98 = 0;
  lStack_88 = 0;
  if (param_2 != 0) {
    lStack_88 = param_2 + param_3;
  }
  cVar7 = *(char *)(lVar29 + 0x130);
  if (cVar7 == '\0') {
    uVar19 = 0x400;
    uVar27 = 0x400;
  }
  else {
    iVar23 = *(int *)(lVar29 + 0x138) + 0x20;
    iVar33 = *(int *)(lVar29 + 0x138) + 0x5f;
    if (-1 < iVar23) {
      iVar33 = iVar23;
    }
    uVar19 = iVar33 >> 6;
    iVar23 = *(int *)(lVar29 + 0x140) + 0x20;
    iVar33 = *(int *)(lVar29 + 0x140) + 0x5f;
    if (-1 < iVar23) {
      iVar33 = iVar23;
    }
    uVar27 = iVar33 >> 6;
  }
  cVar8 = *(char *)(lVar29 + 0x131);
  if (cVar5 == '\0') {
    uVar31 = *(undefined1 *)(lVar17 + 0x4b8);
  }
  else {
    uVar31 = 0;
  }
  *(undefined1 *)((long)plVar36 + 0xd) = uVar31;
  *(char *)((long)plVar36 + 0xc) = cVar5;
  uVar32 = (uint)(cVar7 != '\0');
  *(uint *)(plVar36 + 2) = uVar32;
  if ((cVar8 != '\0') && ((cVar14 == '\0' || ((cVar14 < '\0' && (cVar6 == '\0')))))) {
    *(uint *)(plVar36 + 2) = uVar32 | 2;
  }
  *(undefined4 *)((long)plVar36 + 0x104) = *(undefined4 *)(lVar24 + 0x40);
  *(undefined4 *)(plVar36 + 0x21) = *(undefined4 *)(lVar24 + 0x44);
  *(undefined4 *)((long)plVar36 + 0x10c) = *(undefined4 *)(lVar24 + 0x48);
  *(undefined4 *)(plVar36 + 0x22) = *(undefined4 *)(lVar24 + 0x4c);
  *(undefined4 *)((long)plVar36 + 0x114) = *(undefined4 *)(lVar24 + 0x50);
  *(undefined4 *)(plVar36 + 0x23) = *(undefined4 *)(lVar24 + 0x54);
  *(undefined4 *)((long)plVar36 + 0x11c) = *(undefined4 *)(lVar24 + 0x58);
  *(undefined4 *)(plVar36 + 0x24) = *(undefined4 *)(lVar24 + 0x5c);
  lVar17 = param_1[1];
  uVar13 = *(ushort *)(lVar17 + 0x88);
  uVar30 = (ulong)uVar13;
  *(uint *)(plVar36 + 0x14) = (uint)uVar13;
  if (cVar8 != '\0') {
    if ((int)uVar19 < 1) {
      return 0x24;
    }
    if ((int)uVar27 < 1) {
      return 0x24;
    }
    if ((short)uVar13 < 0) {
      return 0xa4;
    }
    if (uVar13 == 0) {
      uVar32 = 0x7fffffff;
    }
    else {
      uVar32 = 0;
      if (uVar30 != 0) {
        uVar32 = (uint)((uVar30 << 0xf | 0x7d000000000) / (uVar30 << 0x10));
      }
    }
    if ((int)uVar32 < (int)uVar19) {
      return 0xa4;
    }
    if (uVar32 < uVar27) {
      return 0xa4;
    }
  }
  iStack_74 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar32 = *(uint *)((long)plVar36 + 0xa4);
  lVar29 = plVar36[0x15];
  uStack_54 = 0;
  lStack_60 = 0;
  *(undefined4 *)(plVar36 + 1) = 0;
  lVar24 = param_1[0x84];
  bVar16 = plVar36[0x1f] != lVar24;
  if (bVar16) {
    plVar36[0x1f] = lVar24;
  }
  lStack_90 = param_2;
  lStack_80 = param_2;
  if ((cVar5 == '\0') && (*(int *)(param_1[0x83] + 0x1398) != 0)) {
    lVar39 = plVar36[0x51];
    (**(code **)(*(long *)(lVar17 + 0x380) + 0x88))(lVar17,&uStack_54,0,&lStack_60,0);
    *(int *)(plVar36 + 1) = (int)lVar17;
    if ((int)lVar17 != 0) {
      return 3;
    }
    lVar17 = lVar24 + 0x420;
    (**(code **)(lVar39 + 0x18))(lVar17,*(undefined4 *)(lVar24 + 0x410),uStack_54,lStack_60);
    bVar3 = (int)lVar17 != 0;
    if (bVar3) {
      (**(code **)(lVar39 + 8))(param_1[0x83],lVar24,uStack_54,lStack_60);
    }
    bVar16 = bVar3 || bVar16;
    plVar36[0xd] = *(long *)(lVar24 + 0x428);
    *(undefined1 *)((long)plVar36 + 0x61) = 0;
    *(undefined4 *)(plVar36 + 0x12) = *(undefined4 *)(lVar24 + 0x410);
    *(undefined4 *)((long)plVar36 + 0x94) = uStack_54;
    plVar36[0x13] = lStack_60;
    lVar17 = param_1[1];
  }
  uVar26 = (uint)*(ushort *)(*(long *)(lVar17 + 0xa0) + 0x1a);
  uVar34 = uVar26 * 0x10000;
  if (*(int *)((long)plVar36 + 0x5c) != uVar26 * 0x10000) {
    *(uint *)((long)plVar36 + 0x5c) = uVar34;
    bVar16 = true;
  }
  uVar4 = *(uint *)(plVar36 + 2);
  *(byte *)(plVar36 + 0x20) = (byte)uVar4 & 1;
  if ((ulong)uVar19 == *(ulong *)((long)plVar36 + 0x14) &&
      (ulong)uVar27 << 0x20 == *(long *)((long)plVar36 + 0x1c)) {
    uVar19 = (uint)*(byte *)((long)plVar36 + 0x102);
    if ((uVar4 & 2) != (uint)*(byte *)((long)plVar36 + 0x102)) goto LAB_109764ddc;
    if (!bVar16) goto LAB_1097653c4;
  }
  else {
    *(ulong *)((long)plVar36 + 0x1c) = (ulong)uVar27 << 0x20;
    *(ulong *)((long)plVar36 + 0x14) = (ulong)uVar19;
    *(undefined4 *)((long)plVar36 + 0x24) = 0;
    *(undefined4 *)(plVar36 + 5) = 0;
    *(ulong *)((long)plVar36 + 0x34) = (ulong)uVar27 << 0x20;
    *(ulong *)((long)plVar36 + 0x2c) = (ulong)uVar19;
    *(undefined8 *)((long)plVar36 + 0x3c) = 0;
    *(undefined8 *)((long)plVar36 + 0x4c) = 0x1000000000000;
    *(undefined8 *)((long)plVar36 + 0x44) = 0x10000;
    uVar19 = (uint)*(byte *)((long)plVar36 + 0x102);
    if ((uVar4 & 2) != (uint)*(byte *)((long)plVar36 + 0x102)) {
LAB_109764ddc:
      uVar19 = (uVar4 & 2) >> 1;
      *(char *)((long)plVar36 + 0x102) = (char)uVar19;
    }
  }
  iVar23 = 1000;
  if ((int)plVar36[0x14] != 0) {
    iVar23 = (int)plVar36[0x14];
  }
  if (uVar26 == 4 || (int)uVar34 < 0x40000) {
    uVar34 = 0x40000;
  }
  uVar30 = (ulong)uVar34;
  uVar27 = 0;
  if (iVar23 != 0) {
    uVar27 = 0x3e80000 / iVar23;
  }
  lVar17 = param_1[0x84];
  iVar33 = *(int *)(lVar17 + 0x2f0) * 0x10000;
  if (iVar33 < 1) {
    if (uVar27 == 0) {
      iVar28 = 0x7fffffff;
    }
    else {
      uVar26 = -uVar27;
      if (-1 < (int)uVar27) {
        uVar26 = uVar27;
      }
      iVar28 = 0;
      if ((ulong)uVar26 != 0) {
        iVar28 = (int)(((ulong)(uVar26 >> 1) | 0x4b00000000) / (ulong)uVar26);
      }
    }
    iVar33 = -iVar28;
    if (-1 < (int)uVar27) {
      iVar33 = iVar28;
    }
  }
  *(int *)((long)plVar36 + 0x124) = iVar33;
  puVar1 = (uint *)((long)plVar36 + 300);
  if ((int)uVar32 < 1) {
    FUN_10976b9ac(uVar27,uVar30,iVar33,puVar1,0,uVar19,(long)plVar36 + 0x104);
    lVar17 = param_1[0x84];
  }
  else {
    *puVar1 = 0;
    if (0x28e < (int)uVar27) {
      uVar26 = iVar23 * 0x10000;
      uVar19 = iVar23 * -0x10000;
      if (-1 < (int)uVar26) {
        uVar19 = uVar26;
      }
      uVar25 = 0;
      if (uVar30 != 0) {
        uVar25 = CONCAT44(uVar19 >> 0x10,uVar34 >> 1) / uVar30;
      }
      uVar35 = -uVar25;
      if (-1 < (int)uVar26) {
        uVar35 = uVar25;
      }
      if ((long)uVar35 <= (long)(ulong)uVar32) {
        uVar35 = (ulong)uVar32;
      }
      *puVar1 = (uint)(uVar35 >> 1) & 0x7fffffff;
    }
  }
  if (((short)*(undefined8 *)(lVar17 + 0x2e8) < 1) ||
     (*(int *)((long)plVar36 + 0x124) <= (int)*(undefined8 *)(lVar17 + 0x2e8) * 0x20000)) {
    uVar25 = 0x6e00000000;
    if (uVar27 == 0) goto LAB_109764ed0;
LAB_109764ee0:
    uVar19 = -uVar27;
    if (-1 < (int)uVar27) {
      uVar19 = uVar27;
    }
    iVar23 = 0;
    if ((ulong)uVar19 != 0) {
      iVar23 = (int)((uVar25 | uVar19 >> 1) / (ulong)uVar19);
    }
  }
  else {
    uVar25 = 0x4b00000000;
    if (uVar27 != 0) goto LAB_109764ee0;
LAB_109764ed0:
    iVar23 = 0x7fffffff;
  }
  iVar33 = -iVar23;
  if (-1 < (int)uVar27) {
    iVar33 = iVar23;
  }
  *(int *)(plVar36 + 0x25) = iVar33;
  plVar38 = plVar36 + 0x26;
  FUN_10976b9ac(uVar27,uVar30,iVar33,plVar38,(int)lVar29,*(undefined1 *)((long)plVar36 + 0x102),
                (long)plVar36 + 0x104);
  if (*(int *)((long)plVar36 + 300) == 0) {
    bVar16 = (int)*plVar38 != 0;
  }
  else {
    bVar16 = true;
  }
  *(bool *)((long)plVar36 + 0x101) = bVar16;
  *(undefined1 *)((long)plVar36 + 0x134) = 0;
  plVar36[0x28] = 0;
  plVar36[0x27] = 0;
  plVar36[0x2a] = 0;
  plVar36[0x29] = 0;
  plVar36[0x2c] = 0;
  plVar36[0x2b] = 0;
  plVar36[0x2e] = 0;
  plVar36[0x2d] = 0;
  plVar36[0x30] = 0;
  plVar36[0x2f] = 0;
  plVar36[0x32] = 0;
  plVar36[0x31] = 0;
  plVar36[0x34] = 0;
  plVar36[0x33] = 0;
  plVar36[0x36] = 0;
  plVar36[0x35] = 0;
  plVar36[0x38] = 0;
  plVar36[0x37] = 0;
  plVar36[0x3a] = 0;
  plVar36[0x39] = 0;
  plVar36[0x3c] = 0;
  plVar36[0x3b] = 0;
  plVar36[0x3e] = 0;
  plVar36[0x3d] = 0;
  plVar36[0x40] = 0;
  plVar36[0x3f] = 0;
  plVar36[0x42] = 0;
  plVar36[0x41] = 0;
  plVar36[0x44] = 0;
  plVar36[0x43] = 0;
  plVar36[0x46] = 0;
  plVar36[0x45] = 0;
  plVar36[0x48] = 0;
  plVar36[0x47] = 0;
  plVar36[0x4a] = 0;
  plVar36[0x49] = 0;
  plVar36[0x4c] = 0;
  plVar36[0x4b] = 0;
  plVar36[0x4e] = 0;
  plVar36[0x4d] = 0;
  plVar36[0x50] = 0;
  plVar36[0x4f] = 0;
  iVar23 = (int)plVar36[7];
  uVar30 = (ulong)iVar23;
  *(int *)(plVar36 + 0x27) = iVar23;
  lVar24 = *(long *)(plVar36[0x1e] + 0x420);
  lVar29 = *(long *)(lVar24 + 0x2d0);
  lVar17 = -lVar29;
  if (-1 < lVar29) {
    lVar17 = lVar29;
  }
  uVar27 = (uint)((lVar17 * 0x10000 + 0x1f40000U) / 0x3e80000);
  uVar19 = -uVar27;
  if (-1 < lVar29) {
    uVar19 = uVar27;
  }
  *(uint *)((long)plVar36 + 0x144) = uVar19;
  plVar36[0x29] =
       CONCAT44((int)*(undefined8 *)(lVar24 + 0x2e0) << 0x10,
                (int)*(undefined8 *)(lVar24 + 0x2d8) << 0x10);
  bVar9 = *(byte *)(lVar24 + 0x148);
  bVar10 = *(byte *)(lVar24 + 0x149);
  bVar11 = *(byte *)(lVar24 + 0x14a);
  bVar12 = *(byte *)(lVar24 + 0x14b);
  if (*(int *)(lVar24 + 0x3e4) == 1) {
    if ((bVar9 == 0) ||
       ((((bVar9 == 4 && (*(long *)(lVar24 + 0x150) < -0x780000)) &&
         (*(long *)(lVar24 + 0x158) < -0x780000)) &&
        ((0x3700000 < *(long *)(lVar24 + 0x160) && (0x3700000 < *(long *)(lVar24 + 0x168))))))) {
      *(undefined4 *)(plVar36 + 0x31) = 0xff87ffff;
      *(uint *)((long)plVar36 + 0x18c) =
           ((int)((ulong)((long)iVar23 * -0x780001 + ((long)iVar23 * -0x780001 >> 0x3f) + 0x8000) >>
                 0x10) + 0x8000U & 0xffff0000) - 0x8000;
      *(int *)(plVar36 + 0x32) = iVar23;
      *(undefined4 *)(plVar36 + 0x2f) = 0x31;
      lVar17 = (long)(int)plVar36[0x26] * 2 + 0x3700001;
      *(int *)(plVar36 + 0x2d) = (int)lVar17;
      lVar17 = lVar17 * uVar30;
      *(uint *)((long)plVar36 + 0x16c) =
           (int)((ulong)(lVar17 + (lVar17 >> 0x3f) + 0x8000) >> 0x10) + 0x8000U & 0xffff0000 |
           0x8000;
      *(int *)(plVar36 + 0x2e) = iVar23;
      *(undefined4 *)(plVar36 + 0x2b) = 0x32;
      *(undefined1 *)((long)plVar36 + 0x141) = 1;
      goto LAB_1097653c4;
    }
LAB_1097650c8:
    uVar27 = 0;
    uVar25 = 0;
    uVar32 = *(uint *)((long)plVar36 + 0x13c);
    do {
      lVar17 = lVar24 + uVar25 * 8;
      iVar28 = *(int *)(lVar17 + 0x150);
      iVar33 = *(int *)(lVar17 + 0x158);
      piVar18 = (int *)((long)plVar36 + (ulong)uVar32 * 0x14 + 0x198);
      *piVar18 = iVar28;
      piVar18[1] = iVar33;
      uVar34 = iVar33 - iVar28;
      if (-1 < (int)uVar34) {
        if ((int)uVar34 <= (int)uVar27) {
          uVar34 = uVar27;
        }
        if (uVar25 != 0) {
          iVar21 = iVar33 + (int)*plVar38 * 2;
          iVar33 = iVar28 + (int)*plVar38 * 2;
          *piVar18 = iVar33;
          piVar18[1] = iVar21;
        }
        *(bool *)(piVar18 + 4) = uVar25 == 0;
        piVar18[2] = iVar33;
        uVar32 = uVar32 + 1;
        *(uint *)((long)plVar36 + 0x13c) = uVar32;
        uVar27 = uVar34;
      }
      uVar25 = uVar25 + 2;
    } while (uVar25 < bVar9);
  }
  else {
    if (bVar9 != 0) goto LAB_1097650c8;
    uVar27 = 0;
  }
  if (bVar10 != 0) {
    uVar32 = *(uint *)((long)plVar36 + 0x13c);
    piVar18 = (int *)(lVar24 + 0x1c8);
    lVar17 = 0x38;
    uVar34 = uVar27;
    do {
      iVar28 = piVar18[-2];
      iVar33 = *piVar18;
      piVar20 = (int *)((long)plVar36 + (ulong)uVar32 * 0x14 + 0x198);
      *piVar20 = iVar28;
      piVar20[1] = iVar33;
      uVar26 = iVar33 - iVar28;
      uVar27 = uVar34;
      if (-1 < (int)uVar26) {
        uVar27 = uVar26;
        if ((int)uVar26 <= (int)uVar34) {
          uVar27 = uVar34;
        }
        *(undefined1 *)(piVar20 + 4) = 1;
        piVar20[2] = iVar33;
        uVar32 = uVar32 + 1;
        *(uint *)((long)plVar36 + 0x13c) = uVar32;
      }
      piVar18 = piVar18 + 4;
      uVar25 = lVar17 - 0x36;
      lVar17 = lVar17 + 2;
      uVar34 = uVar27;
    } while (uVar25 < bVar10);
  }
  if (iVar23 == 0) {
    iVar33 = 0x7fffffff;
  }
  else {
    uVar25 = -uVar30;
    if (-1 < (long)uVar30) {
      uVar25 = uVar30;
    }
    iVar33 = 0;
    if (uVar25 != 0) {
      iVar33 = (int)((uVar25 >> 1 | 0x100000000) / uVar25);
    }
  }
  iVar28 = -iVar33;
  if (-1 < iVar23) {
    iVar28 = iVar33;
  }
  uVar32 = *(uint *)((long)plVar36 + 0x13c);
  uVar25 = (ulong)uVar32;
  if (uVar32 != 0) {
    uVar35 = 0;
    do {
      lVar17 = uVar35 * 0x14;
      iVar33 = *(int *)((long)plVar36 + lVar17 + 0x1a0);
      if (*(char *)((long)plVar36 + lVar17 + 0x1a8) == '\0') {
        if (2 < bVar11) {
          lVar29 = *plVar38;
          iVar21 = 0x7fffffff;
          uVar22 = 2;
          piVar18 = (int *)(lVar24 + 0x220);
          do {
            iVar2 = (int)lVar29 * 2 + *piVar18;
            iVar37 = iVar33 - iVar2;
            iVar15 = -iVar37;
            if (-1 < iVar37) {
              iVar15 = iVar37;
            }
          } while (((iVar21 <= iVar15 || iVar28 <= iVar15) ||
                   (*(int *)((long)plVar36 + lVar17 + 0x1a0) = iVar2, iVar21 = iVar15,
                   iVar33 != iVar2)) &&
                  (uVar22 = uVar22 + 2, piVar18 = piVar18 + 4, uVar22 < bVar11));
        }
      }
      else {
        if (bVar12 == 0) {
          iVar21 = 0x7fffffff;
        }
        else {
          uVar22 = 0;
          iVar21 = 0x7fffffff;
          do {
            iVar37 = (int)*(undefined8 *)(lVar24 + 0x288 + uVar22 * 8);
            iVar15 = iVar33 - iVar37;
            iVar2 = -iVar15;
            if (-1 < iVar15) {
              iVar2 = iVar15;
            }
            if ((iVar2 < iVar21 && iVar2 < iVar28) &&
               (*(int *)((long)plVar36 + lVar17 + 0x1a0) = iVar37, iVar21 = iVar2, iVar33 == iVar37)
               ) {
              iVar21 = 0;
              break;
            }
            uVar22 = uVar22 + 2;
          } while (uVar22 < bVar12);
        }
        if (1 < bVar11) {
          iVar33 = iVar33 - *(int *)(lVar24 + 0x218);
          iVar2 = -iVar33;
          if (-1 < iVar33) {
            iVar2 = iVar33;
          }
          if (iVar2 < iVar21 && iVar2 < iVar28) {
            *(int *)((long)plVar36 + lVar17 + 0x1a0) = *(int *)(lVar24 + 0x218);
          }
        }
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != uVar25);
  }
  if (0 < (int)uVar27) {
    uVar35 = 0;
    if ((ulong)uVar27 != 0) {
      uVar35 = ((ulong)(uVar27 >> 1) | 0x100000000) / (ulong)uVar27;
    }
    if ((long)uVar35 < (long)(int)uVar19) {
      uVar19 = (uint)uVar35;
      *(uint *)((long)plVar36 + 0x144) = uVar19;
    }
  }
  if (iVar23 < (int)uVar19) {
    *(undefined1 *)(plVar36 + 0x28) = 1;
    if (uVar19 == 0) {
      iVar33 = 0x7fffffff;
    }
    else {
      uVar27 = -uVar19;
      if (-1 < (int)uVar19) {
        uVar27 = uVar19;
      }
      uVar35 = -uVar30;
      if (-1 < (long)uVar30) {
        uVar35 = uVar30;
      }
      iVar33 = 0;
      if ((ulong)uVar27 != 0) {
        iVar33 = (int)((uVar35 * 0x999a + (ulong)(uVar27 >> 1)) / (ulong)uVar27);
      }
    }
    uVar34 = iVar23 >> 0x1f | 1;
    uVar27 = -uVar34;
    if (-1 < (int)uVar19) {
      uVar27 = uVar34;
    }
    iVar28 = -iVar33;
    if ((int)uVar27 < 0) {
      iVar28 = iVar33;
    }
    iVar28 = iVar28 + 0x999a;
    if (0x7ffe < iVar28) {
      iVar28 = 0x7fff;
    }
    *(int *)(plVar36 + 0x2a) = iVar28;
  }
  if (*(char *)((long)plVar36 + 0x102) != '\0') {
    *(undefined4 *)(plVar36 + 0x2a) = 0;
  }
  if (uVar32 != 0) {
    lVar17 = plVar36[0x2a];
    plVar38 = plVar36 + 0x35;
    do {
      lVar29 = (long)iVar23 * (long)(int)plVar38[-1];
      iVar33 = (int)((ulong)(lVar29 + (lVar29 >> 0x3f) + 0x8000) >> 0x10);
      uVar19 = (int)lVar17 + 0x8000 + iVar33;
      if ((char)*plVar38 != '\0') {
        uVar19 = (iVar33 - (int)lVar17) + 0x8000;
      }
      *(uint *)((long)plVar38 + -4) = uVar19 & 0xffff0000;
      plVar38 = (long *)((long)plVar38 + 0x14);
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
LAB_1097653c4:
  if ((int)plVar36[1] == 0) {
    *(undefined1 *)((long)plVar36 + 0x134) = 0;
    bVar16 = *(char *)((long)plVar36 + 0x101) == '\0';
    while( true ) {
      *(undefined4 *)(plVar36 + 0x1a) = 0;
      lVar17 = *(long *)(plVar36[0x1d] + 0x18);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(undefined4 *)(lVar17 + 0x38) = 0;
      *(undefined4 *)(lVar17 + 0x50) = 0;
      *(undefined8 *)(lVar17 + 0xa0) = *(undefined8 *)(lVar17 + 0x58);
      *(undefined8 *)(lVar17 + 0x68) = *(undefined8 *)(lVar17 + 0x20);
      *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)(lVar17 + 0x18);
      *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)(lVar17 + 0x30);
      *(undefined8 *)(lVar17 + 0x70) = *(undefined8 *)(lVar17 + 0x28);
      *(undefined8 *)(lVar17 + 0x88) = *(undefined8 *)(lVar17 + 0x40);
      *(undefined8 *)(lVar17 + 0x80) = *(undefined8 *)(lVar17 + 0x38);
      *(undefined8 *)(lVar17 + 0x98) = *(undefined8 *)(lVar17 + 0x50);
      *(undefined8 *)(lVar17 + 0x90) = *(undefined8 *)(lVar17 + 0x48);
      FUN_109767bf0(plVar36,&uStack_98,plVar36 + 0x16,&uStack_70,0,0,0,&iStack_74);
      if ((int)plVar36[1] != 0) break;
      if ((bVar16) || (-1 < (int)plVar36[0x1a])) {
        lVar17 = plVar36[0x1d];
        FUN_1097679ac(*(undefined8 *)(lVar17 + 0x28));
        func_0x000109753d48(*(undefined8 *)(lVar17 + 0x18));
        if ((int)plVar36[1] != 0) {
          return 3;
        }
        if (*(char *)(plVar36[0x1d] + 0x5c) == '\0') {
          **(long **)(plVar36[0x1d] + 0x430) = (long)(short)((uint)(iStack_74 + 0x8000) >> 0x10);
          return 0;
        }
        return 0;
      }
      bVar16 = true;
      *(undefined1 *)((long)plVar36 + 0x134) = 1;
    }
  }
  return 3;
}



/* Entry: 1097654c8; end: 10976553b;  */

undefined8
FUN_1097654c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  (*(code *)param_2[1])(param_2,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *puVar1 = param_3;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = 2;
    *param_1 = param_2;
    param_1[1] = puVar1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return uVar2;
}



/* Entry: 10976553c; end: 10976556f;  */

void FUN_10976553c(long *param_1)

{
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x10))();
  }
  param_1[1] = 0;
  return;
}



/* Entry: 109765570; end: 109765bfb;  */

long * FUN_109765570(long *param_1,undefined8 *****param_2,long param_3,long param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_110;
  undefined1 auStack_108 [8];
  undefined4 auStack_100 [2];
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_c0 [2];
  uint uStack_b8;
  undefined4 uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined1 *)param_1[2];
  if (puVar15 == (undefined1 *)0x0) {
    plVar14 = (long *)0x6;
    goto LAB_1097655e8;
  }
  plVar6 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  param_2 = &ppppuStack_118;
  FUN_1097663fc();
  if (plVar5 != (long *)0x0 && (undefined8 *****)ppppuStack_118 == (undefined8 *****)0x10) {
    param_2 = (undefined8 *****)&DAT_10f57f858;
    param_3 = 0x10;
    _strncmp();
    if ((int)plVar5 == 0) {
      plVar5 = (long *)param_1[1];
      FUN_1097663fc(plVar5,&ppppuStack_118);
      plVar14 = (long *)0xa0;
      param_2 = (undefined8 *****)ppppuStack_118;
      while (plVar5 != (long *)0x0) {
        ppppuStack_118 = param_2;
        FUN_109766470();
        iVar3 = (int)plVar5;
        if (iVar3 < 0x1e) {
          if (iVar3 < 0x14) {
            if (iVar3 == 0) {
              auStack_100[0] = 2;
              param_3 = 1;
              plVar5 = param_1;
              FUN_109766504(param_1,auStack_100);
              if ((int)plVar5 != 1) break;
              *(ulong *)(puVar15 + 0x28) = CONCAT71(uStack_f7,uStack_f8);
            }
            else if (iVar3 == 0xe) {
              auStack_100[0] = 2;
              param_3 = 1;
              plVar5 = param_1;
              FUN_109766504(param_1,auStack_100);
              if ((int)plVar5 != 1) break;
              *(ulong *)(puVar15 + 0x30) = CONCAT71(uStack_f7,uStack_f8);
            }
          }
          else if (iVar3 == 0x1a) {
            auStack_100[0] = 2;
            uStack_f0 = 2;
            uStack_e0 = 2;
            uStack_d0 = 2;
            param_3 = 4;
            plVar5 = param_1;
            FUN_109766504(param_1,auStack_100);
            if ((int)plVar5 != 4) break;
            *(ulong *)(puVar15 + 8) = CONCAT71(uStack_f7,uStack_f8);
            *(undefined8 *)(puVar15 + 0x10) = uStack_e8;
            *(undefined8 *)(puVar15 + 0x18) = uStack_d8;
            *(undefined8 *)(puVar15 + 0x20) = uStack_c8;
          }
          else if (iVar3 == 0x14) goto LAB_109765bc8;
        }
        else if (iVar3 < 0x2d) {
          if (iVar3 == 0x1e) {
            auStack_100[0] = 4;
            param_3 = 1;
            plVar5 = param_1;
            FUN_109766504(param_1,auStack_100);
            if ((int)plVar5 != 1) break;
            *puVar15 = uStack_f8;
          }
          else if (iVar3 == 0x28) {
            auStack_c0[0] = 3;
            param_3 = 1;
            plVar5 = param_1;
            FUN_109766504(param_1,auStack_c0);
            if ((int)plVar5 != 1) break;
            if ((uStack_b8 & 0xfffffffd) != 0) {
              plVar14 = (long *)0x7;
              break;
            }
          }
        }
        else if (iVar3 == 0x2d) {
          auStack_c0[0] = 3;
          param_3 = 1;
          plVar5 = param_1;
          FUN_109766504(param_1,auStack_c0);
          if ((int)plVar5 != 1) break;
          iVar3 = uStack_b8 + 1;
          while (iVar3 = iVar3 + -1, 0 < iVar3) {
            lVar10 = param_1[1];
            param_2 = (undefined8 *****)0x0;
            FUN_1097663fc();
            if (lVar10 == 0) goto LAB_10976584c;
          }
          do {
            lVar10 = param_1[1];
            param_2 = (undefined8 *****)auStack_c0;
            FUN_1097663fc();
            if (lVar10 == 0) goto LAB_10976584c;
            FUN_109766470();
          } while ((int)lVar10 != 0x11 && (int)lVar10 != 0x14);
          plVar14 = (long *)0x0;
        }
        else if (iVar3 == 0x31) {
          plVar5 = (long *)param_1[1];
          FUN_1097663fc(plVar5,&ppppuStack_110);
          if (plVar5 == (long *)0x0) goto LAB_109765bac;
          bVar1 = false;
          bVar2 = false;
          goto LAB_109765874;
        }
        plVar5 = (long *)param_1[1];
        FUN_1097663fc(plVar5,&ppppuStack_118);
        param_2 = (undefined8 *****)ppppuStack_118;
      }
      goto LAB_10976580c;
    }
  }
  plVar14 = (long *)0x2;
  param_1 = plVar5;
  goto LAB_1097655e8;
LAB_109765874:
  param_2 = (undefined8 *****)ppppuStack_110;
  FUN_109766470();
  plVar14 = (long *)0xa0;
  iVar3 = (int)plVar5;
  if (iVar3 < 0x35) {
    if (1 < iVar3 - 0x32U) {
      if (iVar3 - 0x14U < 2) goto LAB_109765bc8;
      goto LAB_10976580c;
    }
    if (bVar1) goto LAB_10976580c;
    plVar14 = (long *)param_1[1];
    lVar10 = param_1[2];
    auStack_c0[0] = 3;
    param_3 = 1;
    plVar5 = param_1;
    FUN_109766504(param_1,auStack_c0);
    if ((((int)plVar5 == 1) && (-1 < (int)uStack_b8)) &&
       (*(uint *)(lVar10 + 0x50) = uStack_b8,
       (ulong)uStack_b8 <= (ulong)(plVar14[2] - *plVar14) / 10)) {
      if (uStack_b8 != 0) {
        if (uStack_b8 >> 0x1b == 0) {
          lVar7 = *param_1;
          (**(code **)(lVar7 + 8))(lVar7,(ulong)uStack_b8 << 4);
          if (lVar7 != 0) {
            *(long *)(lVar10 + 0x48) = lVar7;
            goto LAB_109765908;
          }
          plVar14 = (long *)0x40;
          plVar5 = (long *)0x0;
        }
        else {
          plVar14 = (long *)0xa;
        }
        *(undefined8 *)(lVar10 + 0x48) = 0;
        goto LAB_10976580c;
      }
LAB_109765908:
      plVar5 = (long *)param_1[1];
      FUN_1097663fc(plVar5,auStack_108);
      if (plVar5 != (long *)0x0) {
        iVar3 = -1;
        do {
          FUN_109766470();
          plVar14 = (long *)0xa0;
          iVar4 = (int)plVar5;
          uVar8 = (ulong)(iVar4 - 0x14U);
          if (0x37 < iVar4 - 0x14U) goto LAB_10976580c;
          if ((1L << (uVar8 & 0x3f) & 0x34000U) == 0) {
            if (uVar8 != 0x37) goto LAB_109765b34;
          }
          else {
            iVar3 = iVar3 + 1;
            if (*(int *)(lVar10 + 0x50) <= iVar3) break;
            lVar7 = *(long *)(lVar10 + 0x48);
            auStack_c0[0] = 5;
            uStack_b0 = 5;
            uStack_a0 = 3;
            uStack_90 = 3;
            param_3 = 4;
            plVar5 = param_1;
            FUN_109766504(param_1,auStack_c0);
            if ((int)plVar5 < 3) break;
            puVar9 = (uint *)(lVar7 + (long)iVar3 * 0x10);
            *puVar9 = uStack_b8;
            puVar9[1] = uStack_a8;
            if (iVar4 == 0x25) {
              uVar11 = uStack_98;
              uVar13 = 0;
            }
            else {
              uVar11 = uStack_88;
              uVar13 = uStack_98;
              if ((int)plVar5 != 4 || iVar4 != 0x22) {
                uVar11 = 0;
              }
            }
            puVar9[2] = uVar13;
            puVar9[3] = uVar11;
          }
          plVar5 = (long *)param_1[1];
          FUN_1097663fc(plVar5,auStack_108);
          if (plVar5 == (long *)0x0) break;
        } while( true );
      }
    }
  }
  else {
    if (iVar3 == 0x4b) goto LAB_109765b9c;
    if ((iVar3 != 0x35) || (bVar2)) goto LAB_10976580c;
    plVar14 = (long *)param_1[1];
    lVar10 = param_1[2];
    auStack_c0[0] = 3;
    param_3 = 1;
    plVar5 = param_1;
    FUN_109766504(param_1,auStack_c0);
    if (((int)plVar5 == 1) &&
       ((-1 < (int)uStack_b8 &&
        (*(uint *)(lVar10 + 0x40) = uStack_b8,
        (ulong)uStack_b8 <= (ulong)(plVar14[2] - *plVar14) / 0x14)))) {
      if (uStack_b8 != 0) {
        if (uStack_b8 < 0x3333334) {
          lVar7 = *param_1;
          (**(code **)(lVar7 + 8))(lVar7,(ulong)uStack_b8 * 0x28);
          if (lVar7 != 0) {
            *(long *)(lVar10 + 0x38) = lVar7;
            goto LAB_109765a7c;
          }
          plVar14 = (long *)0x40;
          plVar5 = (long *)0x0;
        }
        else {
          plVar14 = (long *)0xa;
        }
        *(undefined8 *)(lVar10 + 0x38) = 0;
        goto LAB_10976580c;
      }
LAB_109765a7c:
      plVar5 = (long *)param_1[1];
      FUN_1097663fc(plVar5,auStack_108);
      if (plVar5 != (long *)0x0) {
        iVar3 = -1;
        do {
          FUN_109766470();
          iVar4 = (int)plVar5;
          if (iVar4 < 0x4b) {
            if (iVar4 != 0x38) goto LAB_109765b74;
            iVar3 = iVar3 + 1;
            if (*(int *)(lVar10 + 0x40) <= iVar3) break;
            lVar7 = *(long *)(lVar10 + 0x38);
            auStack_c0[0] = 3;
            uStack_b0 = 2;
            uStack_a0 = 2;
            uStack_90 = 2;
            uStack_80 = 2;
            param_3 = 5;
            plVar5 = param_1;
            FUN_109766504(param_1,auStack_c0);
            if ((int)plVar5 != 5) break;
            puVar9 = (uint *)(lVar7 + (long)iVar3 * 0x28);
            *puVar9 = uStack_b8;
            *(ulong *)(puVar9 + 2) = CONCAT44(uStack_a4,uStack_a8);
            *(ulong *)(puVar9 + 4) = CONCAT44(uStack_94,uStack_98);
            *(ulong *)(puVar9 + 6) = CONCAT44(uStack_84,uStack_88);
            *(undefined8 *)(puVar9 + 8) = uStack_78;
          }
          else if (iVar4 != 0x4b) break;
          plVar5 = (long *)param_1[1];
          FUN_1097663fc(plVar5,auStack_108);
          if (plVar5 == (long *)0x0) break;
        } while( true );
      }
    }
  }
  goto LAB_109765bac;
LAB_109765b74:
  if (1 < iVar4 - 0x14U && iVar4 != 0x17) goto LAB_109765bac;
  if (iVar3 + 1 != *(int *)(lVar10 + 0x40)) {
    *(int *)(lVar10 + 0x40) = iVar3 + 1;
  }
  bVar2 = true;
LAB_109765b9c:
  plVar5 = (long *)param_1[1];
  FUN_1097663fc(plVar5,&ppppuStack_110);
  if (plVar5 == (long *)0x0) goto LAB_109765bac;
  goto LAB_109765874;
LAB_109765b34:
  if ((1L << (uVar8 & 0x3f) & 7U) == 0) goto LAB_10976580c;
  if (iVar3 + 1 != *(int *)(lVar10 + 0x50)) {
    *(int *)(lVar10 + 0x50) = iVar3 + 1;
  }
  param_3 = 0x10;
  param_4 = 0x109766d70;
  _qsort(*(undefined8 *)(lVar10 + 0x48));
  bVar1 = true;
  goto LAB_109765b9c;
LAB_10976584c:
  param_1 = (long *)0x0;
  plVar14 = (long *)0xa0;
  goto LAB_1097655e8;
LAB_109765bc8:
  plVar14 = (long *)0x0;
  param_1 = plVar5;
  goto LAB_1097655e8;
LAB_109765bac:
  plVar14 = (long *)0xa0;
LAB_10976580c:
  if (*(long *)(puVar15 + 0x38) != 0) {
    plVar5 = plVar6;
    (*(code *)plVar6[2])();
  }
  *(undefined8 *)(puVar15 + 0x38) = 0;
  *(undefined4 *)(puVar15 + 0x40) = 0;
  param_2 = *(undefined8 ******)(puVar15 + 0x48);
  if (param_2 != (undefined8 *****)0x0) {
    (*(code *)plVar6[2])();
    plVar5 = plVar6;
  }
  *(undefined8 *)(puVar15 + 0x48) = 0;
  *(undefined4 *)(puVar15 + 0x50) = 0;
  *puVar15 = 0;
  param_1 = plVar5;
LAB_1097655e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar14;
  }
  ___stack_chk_fail();
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  param_1[2] = param_4;
  *param_1 = (long)param_2[0x17];
  param_1[1] = (long)param_2;
  if (param_4 != 0) {
    lVar10 = **(long **)(param_4 + 0x128);
    param_1[3] = lVar10;
    puVar12 = (undefined8 *)(lVar10 + 0x18);
    *(undefined4 *)puVar12 = 0;
    param_1[4] = (long)puVar12;
    param_1[5] = lVar10 + 0x60;
    *(undefined4 *)(lVar10 + 0x38) = 0;
    *(undefined4 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x40);
    *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)(lVar10 + 0x50);
    *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)(lVar10 + 0x48);
    *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(lVar10 + 0x58);
    *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x60) = *puVar12;
    *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x30);
    *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar10 + 0x28);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if (((param_3 != 0) && (param_5 != 0)) &&
       ((long *)**(undefined8 **)(param_3 + 0x50) != (long *)0x0)) {
      lVar10 = *(long *)**(undefined8 **)(param_3 + 0x50);
      param_1[0x11] = *(long *)(*(long *)(param_4 + 0x128) + 0x40);
      param_1[0x12] = lVar10;
    }
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x14] = (long)(undefined *)0x109765cb0;
  param_1[0x13] = (long)FUN_109765bfc;
  param_1[0x16] = (long)(undefined *)0x109765d08;
  param_1[0x15] = (long)(undefined *)0x109765cd4;
  param_1[0x18] = (long)FUN_109765de4;
  param_1[0x17] = (long)FUN_109765d4c;
  param_1[0x1a] = (long)FUN_109765ed0;
  param_1[0x19] = (long)FUN_109765e68;
  return param_1;
}



/* Entry: 109765bfc; end: 109765d4b;  */

void FUN_109765bfc(undefined8 *param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0xb8);
  param_1[1] = param_2;
  if (param_4 != 0) {
    lVar1 = **(long **)(param_4 + 0x128);
    param_1[3] = lVar1;
    puVar3 = (undefined8 *)(lVar1 + 0x18);
    *(undefined4 *)puVar3 = 0;
    param_1[4] = puVar3;
    param_1[5] = lVar1 + 0x60;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x60) = *puVar3;
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x28);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if (((param_3 != 0) && (param_5 != 0)) &&
       ((undefined8 *)**(long **)(param_3 + 0x50) != (undefined8 *)0x0)) {
      uVar2 = *(undefined8 *)**(long **)(param_3 + 0x50);
      param_1[0x11] = *(undefined8 *)(*(long *)(param_4 + 0x128) + 0x40);
      param_1[0x12] = uVar2;
    }
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x14] = (undefined *)0x109765cb0;
  param_1[0x13] = FUN_109765bfc;
  param_1[0x16] = (undefined *)0x109765d08;
  param_1[0x15] = (undefined *)0x109765cd4;
  param_1[0x18] = FUN_109765de4;
  param_1[0x17] = FUN_109765d4c;
  param_1[0x1a] = FUN_109765ed0;
  param_1[0x19] = FUN_109765e68;
  return;
}



/* Entry: 109765d4c; end: 109765de3;  */

void FUN_109765d4c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (((uint)*(ushort *)(lVar4 + 0x1a) + (uint)*(ushort *)(lVar4 + 0x62) + 1 <= *(uint *)(lVar4 + 8)
      ) || (FUN_109753a7c(lVar4,1,0), (int)lVar4 == 0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x81) != '\0') {
      uVar3 = *(ushort *)(lVar4 + 2);
      lVar2 = *(long *)(lVar4 + 0x10);
      plVar1 = (long *)(*(long *)(lVar4 + 8) + (ulong)uVar3 * 0x10);
      *plVar1 = param_2 >> 10;
      plVar1[1] = param_3 >> 10;
      *(undefined1 *)(lVar2 + (ulong)uVar3) = 1;
    }
    *(short *)(lVar4 + 2) = *(short *)(lVar4 + 2) + 1;
  }
  return;
}



/* Entry: 109765de4; end: 109765e67;  */

void FUN_109765de4(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x81) != '\0') {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(lVar1 + 0xc) <= (uint)*(ushort *)(lVar1 + 0x60) + (uint)*(ushort *)(lVar1 + 0x18)
        ) && (FUN_109753a7c(lVar1,0,1), (int)lVar1 != 0)) {
      return;
    }
    if (*puVar3 == 0) {
      uVar2 = 1;
      goto LAB_109765e54;
    }
    *(ushort *)(*(long *)(puVar3 + 0xc) + (ulong)(*puVar3 - 1) * 2) = puVar3[1] - 1;
  }
  uVar2 = *puVar3 + 1;
LAB_109765e54:
  *puVar3 = uVar2;
  return;
}



/* Entry: 109765e68; end: 109765ecf;  */

void FUN_109765e68(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x80) = 1;
    lVar4 = param_1;
    FUN_109765de4();
    if ((int)lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (((uint)*(ushort *)(lVar4 + 0x1a) + (uint)*(ushort *)(lVar4 + 0x62) + 1 <=
           *(uint *)(lVar4 + 8)) || (FUN_109753a7c(lVar4,1,0), (int)lVar4 == 0)) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (*(char *)(param_1 + 0x81) != '\0') {
          uVar3 = *(ushort *)(lVar4 + 2);
          lVar2 = *(long *)(lVar4 + 0x10);
          plVar1 = (long *)(*(long *)(lVar4 + 8) + (ulong)uVar3 * 0x10);
          *plVar1 = param_2 >> 10;
          plVar1[1] = param_3 >> 10;
          *(undefined1 *)(lVar2 + (ulong)uVar3) = 1;
        }
        *(short *)(lVar4 + 2) = *(short *)(lVar4 + 2) + 1;
      }
      return;
    }
  }
  return;
}



/* Entry: 109765ed0; end: 109765faf;  */

void FUN_109765ed0(long param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  puVar6 = *(ushort **)(param_1 + 0x28);
  if (puVar6 == (ushort *)0x0) {
    return;
  }
  uVar3 = *puVar6;
  uVar7 = (uint)uVar3;
  if (uVar3 < 2) {
    uVar8 = 0;
    if (uVar7 == 0) {
      uVar4 = puVar6[1];
      bVar10 = true;
      goto LAB_109765f24;
    }
  }
  else {
    uVar8 = *(ushort *)(*(long *)(puVar6 + 0xc) + (ulong)(uVar7 - 2) * 2) + 1;
  }
  uVar4 = puVar6[1];
  if (uVar8 == uVar4) {
    *puVar6 = uVar3 - 1;
    return;
  }
  bVar10 = false;
LAB_109765f24:
  uVar9 = (uint)uVar4;
  if (1 < uVar9) {
    plVar1 = (long *)(*(long *)(puVar6 + 4) + (ulong)uVar8 * 0x10);
    lVar2 = *(long *)(puVar6 + 4) + (ulong)uVar9 * 0x10;
    if (((*plVar1 == *(long *)(lVar2 + -0x10)) && (plVar1[1] == *(long *)(lVar2 + -8))) &&
       (*(char *)(*(long *)(puVar6 + 8) + (ulong)uVar9 + -1) == '\x01')) {
      uVar9 = uVar9 - 1;
      puVar6[1] = (ushort)uVar9;
    }
  }
  if (bVar10) {
    return;
  }
  uVar5 = (uVar9 & 0xffff) - 1;
  if (uVar8 != uVar5) {
    *(short *)(*(long *)(puVar6 + 0xc) + (ulong)(uVar7 - 1) * 2) = (short)uVar5;
    return;
  }
  *puVar6 = uVar3 - 1;
  puVar6[1] = (short)uVar9 - 1;
  return;
}



/* Entry: 109765fb0; end: 109766087;  */

void FUN_109765fb0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x490);
  _bzero(param_1,0x5f0);
  FUN_109765bfc(param_1,param_2,param_3,param_4,param_5);
  *(long *)(param_1 + 0xd8) = lVar3;
  uVar1 = *(uint *)(lVar3 + 0xcc);
  *(uint *)(param_1 + 0x5a4) = uVar1;
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(lVar3 + 0x640);
  if (*(int *)(lVar3 + 0x6a4) == 1) {
    uVar2 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar2 = 0x6b;
  }
  else {
    uVar2 = 0x46b;
    if (0x846b < uVar1) {
      uVar2 = 0x8000;
    }
  }
  *(undefined4 *)(param_1 + 0x5ac) = uVar2;
  *(undefined4 *)(param_1 + 0x5cc) = param_6;
  *(undefined8 *)(param_1 + 0x5e0) = param_7;
  *(undefined8 *)(param_1 + 0x5e8) = param_8;
  return;
}



/* Entry: 109766088; end: 109766177;  */

undefined8 FUN_109766088(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x490);
  if (*(int *)(lVar5 + 0xb30) == 0) {
    lVar5 = lVar5 + 0x668;
  }
  else {
    uVar3 = lVar5 + 0x1338;
    (**(code **)(*(long *)(lVar5 + 0x1368) + 0x10))(uVar3,param_3);
    if (*(uint *)(lVar5 + 0xb30) <= (uint)uVar3) {
      return 3;
    }
    lVar5 = *(long *)(lVar5 + (uVar3 & 0xffffffff) * 8 + 0xb38);
    if ((param_2 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
      *(undefined8 *)(param_1 + 0x90) =
           *(undefined8 *)(**(long **)(param_2 + 0x50) + (uVar3 & 0xffffffff) * 8 + 8);
    }
  }
  uVar2 = *(uint *)(lVar5 + 0x48c);
  *(uint *)(param_1 + 0x5a0) = uVar2;
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(lVar5 + 0x4b8);
  uVar4 = 0x46b;
  if (0x846b < uVar2) {
    uVar4 = 0x8000;
  }
  uVar1 = 0x6b;
  if (0x4d7 < uVar2) {
    uVar1 = uVar4;
  }
  uVar4 = 0;
  if (*(int *)(*(long *)(param_1 + 0xd8) + 0x6a4) != 1) {
    uVar4 = uVar1;
  }
  *(undefined4 *)(param_1 + 0x5a8) = uVar4;
  uVar6 = *(undefined8 *)(lVar5 + 0x400);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(lVar5 + 0x408);
  *(undefined8 *)(param_1 + 0x488) = uVar6;
  *(long *)(param_1 + 0x5d8) = lVar5;
  return 0;
}



/* Entry: 109766178; end: 1097661b7;  */

undefined8 FUN_109766178(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x308);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x280);
  param_1[6] = *(long *)(lVar1 + 0x288);
  param_1[4] = *(long *)(lVar2 + 0x28);
  param_1[3] = *(long *)(lVar2 + 0x30);
  return 0;
}



/* Entry: 1097661b8; end: 109766293;  */

ulong FUN_1097661b8(long param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 < 0x100) {
    pcVar2 = (char *)(ulong)*(ushort *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 2);
    (**(code **)(param_1 + 0x20))();
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 != 0) {
      uVar4 = 0;
      lVar5 = *(long *)(param_1 + 0x30);
      do {
        pcVar3 = *(char **)(lVar5 + uVar4 * 8);
        if (((pcVar3 != (char *)0x0) && (*pcVar3 == *pcVar2)) &&
           (_strcmp(pcVar3,pcVar2), (int)pcVar3 == 0)) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return 0;
}



/* Entry: 109766294; end: 10976639f;  */

undefined8 FUN_109766294(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x308);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x280);
  param_1[6] = *(long *)(lVar1 + 0x288);
  param_1[4] = *(long *)(lVar2 + 0x28);
  param_1[3] = *(long *)(lVar2 + 0x38);
  return 0;
}



/* Entry: 1097663a0; end: 1097663db;  */

void FUN_1097663a0(long *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(*param_1 + 0xb8) + 0x10))();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1097663dc; end: 1097663fb;  */

void FUN_1097663dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001097663e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*param_1 + 0x308) + 0x10))();
  return;
}



/* Entry: 1097663fc; end: 10976646f;  */

void FUN_1097663fc(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((int)param_1[3] < 2) {
    FUN_1097666a0(param_1);
  }
  do {
    *(undefined4 *)(param_1 + 3) = 0;
    plVar1 = param_1;
    func_0x000109766720();
    if (plVar1 != (long *)0x0) {
      if (param_2 == (long *)0x0) {
        return;
      }
      lVar2 = *param_1 + ~(ulong)plVar1;
      goto LAB_109766460;
    }
  } while ((int)param_1[3] == 2);
  lVar2 = 0;
  if (param_2 != (long *)0x0) {
LAB_109766460:
    *param_2 = lVar2;
  }
  return;
}



/* Entry: 109766470; end: 109766503;  */

long FUN_109766470(char *param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = 0;
  cVar1 = *param_1;
  do {
    if (*(&PTR_DAT_110b0c580)[lVar3] == cVar1) {
      while( true ) {
        pcVar2 = (&PTR_DAT_110b0c580)[lVar3];
        if (*pcVar2 != cVar1) {
          return 0x4b;
        }
        _strncmp(pcVar2,param_1,param_2);
        if ((int)pcVar2 == 0) break;
        lVar3 = lVar3 + 1;
        if ((int)lVar3 == 0x4a) {
          return 0x4b;
        }
      }
      return lVar3;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x4a);
  return 0x4b;
}



/* Entry: 109766504; end: 10976669f;  */

ulong FUN_109766504(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long **pplVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plStack_58;
  
  uVar6 = 0;
  plVar7 = (long *)param_1[1];
  plVar9 = (long *)(param_2 + 8);
  do {
    plVar3 = plVar7;
    if ((int)plVar9[-1] == 0) {
      func_0x0001097666a0();
    }
    else {
      func_0x000109766720();
    }
    if (plVar3 == (long *)0x0) {
      return uVar6;
    }
    lVar5 = *plVar7 - (long)plVar3;
    lVar8 = lVar5 + -1;
    uVar1 = *(uint *)(plVar9 + -1);
    plStack_58 = plVar3;
    if ((int)uVar1 < 3) {
      if (uVar1 < 2) {
        if (lVar5 < 1) {
          if ((long *)*plVar7 != plVar3) goto LAB_109766634;
          lVar5 = 0;
        }
        else {
          lVar5 = *param_1;
          (**(code **)(lVar5 + 8))();
          if (lVar5 == 0) {
LAB_109766634:
            *plVar9 = 0;
            goto LAB_10976666c;
          }
        }
        *plVar9 = lVar5;
        _memcpy();
        *(undefined1 *)(*plVar9 + lVar8) = 0;
      }
      else if (uVar1 == 2) {
        pplVar4 = &plStack_58;
        FUN_10976685c(pplVar4,(long)plVar3 + lVar8,0);
        *plVar9 = (long)pplVar4;
      }
    }
    else if (uVar1 == 3) {
      pplVar4 = &plStack_58;
      FUN_109766ba8(pplVar4,(long)plVar3 + lVar8);
      *(int *)plVar9 = (int)pplVar4;
    }
    else if (uVar1 == 4) {
      if (lVar8 == 4) {
        _strncmp(plVar3,"true",4);
        bVar2 = (int)plVar3 == 0;
      }
      else {
        bVar2 = false;
      }
      *(bool *)plVar9 = bVar2;
    }
    else if (uVar1 == 5) {
      if ((code *)param_1[3] == (code *)0x0) {
        *(undefined4 *)plVar9 = 0;
      }
      else {
        (*(code *)param_1[3])(plVar3,lVar8,param_1[4]);
        *(int *)plVar9 = (int)plVar3;
      }
    }
LAB_10976666c:
    uVar6 = uVar6 + 1;
    plVar9 = plVar9 + 2;
    if ((param_3 & 0xffffffff) == uVar6) {
      return param_3 & 0xffffffff;
    }
  } while( true );
}



/* Entry: 1097666a0; end: 1097667cb;  */

char * FUN_1097666a0(long *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  FUN_1097667cc();
  if ((int)param_1[3] < 2) {
    pcVar2 = (char *)*param_1 + -1;
    pcVar4 = (char *)*param_1;
    do {
      if ((char *)param_1[2] <= pcVar4) {
LAB_10976670c:
        uVar3 = 3;
        goto LAB_109766710;
      }
      *param_1 = (long)(pcVar4 + 1);
      cVar1 = *pcVar4;
      if (cVar1 == '\n') break;
      if (cVar1 == '\x1a') goto LAB_10976670c;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\r');
    uVar3 = 2;
LAB_109766710:
    *(undefined4 *)(param_1 + 3) = uVar3;
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}



/* Entry: 1097667cc; end: 10976685b;  */

void FUN_1097667cc(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  if (0 < (int)param_1[3]) {
    return;
  }
  pbVar4 = (byte *)*param_1;
  if ((byte *)*param_1 < (byte *)param_1[2]) {
    do {
      pbVar1 = pbVar4 + 1;
      *param_1 = (long)pbVar1;
      bVar2 = *pbVar4;
      if (bVar2 < 0x1a) {
        if (bVar2 != 9) {
          if (bVar2 != 10 && bVar2 != 0xd) {
            return;
          }
          uVar3 = 2;
          goto LAB_109766854;
        }
      }
      else if (bVar2 != 0x20) {
        if (bVar2 != 0x1a) {
          if (bVar2 != 0x3b) {
            return;
          }
          uVar3 = 1;
          goto LAB_109766854;
        }
        break;
      }
      pbVar4 = pbVar1;
    } while (pbVar1 != (byte *)param_1[2]);
  }
  uVar3 = 3;
LAB_109766854:
  *(undefined4 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 10976685c; end: 109766ba7;  */

byte ** FUN_10976685c(ulong *param_1,byte *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  byte **ppbVar7;
  ulong uVar8;
  long lVar9;
  byte **ppbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbStack_68;
  
  pbVar13 = (byte *)*param_1;
  if (param_2 <= pbVar13) {
    return (byte **)0x0;
  }
  bVar4 = *pbVar13;
  if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
    pbVar13 = pbVar13 + 1;
    if (pbVar13 == param_2) {
      return (byte **)0x0;
    }
    bVar6 = bVar4 != 0x2d;
    bVar4 = *pbVar13;
    if (bVar4 == 0x2b) {
      return (byte **)0x0;
    }
    if (bVar4 == 0x2d) {
      return (byte **)0x0;
    }
  }
  else {
    bVar6 = true;
  }
  pbStack_68 = pbVar13;
  if (bVar4 == 0x2e) {
    ppbVar10 = (byte **)0x0;
    bVar5 = true;
  }
  else {
    ppbVar7 = &pbStack_68;
    FUN_109766ba8(ppbVar7,param_2);
    if (pbStack_68 == pbVar13) {
      return (byte **)0x0;
    }
    ppbVar10 = ppbVar7;
    if ((long)ppbVar7 < 0x8000) {
      ppbVar10 = (byte **)(ulong)(uint)((int)ppbVar7 << 0x10);
    }
    bVar5 = (long)ppbVar7 < 0x8000;
  }
  if ((pbStack_68 < param_2) && (*pbStack_68 == 0x2e)) {
    pbVar13 = pbStack_68 + 1;
    if (pbVar13 < param_2) {
      uVar11 = 0;
      uVar12 = 1;
      lVar9 = param_3;
      do {
        bVar4 = *pbVar13;
        uVar8 = (ulong)bVar4;
        param_3 = lVar9;
        pbStack_68 = pbVar13;
        if (((bVar4 < 0x21 && (1L << (uVar8 & 0x3f) & 0x100003601U) != 0) || ((char)bVar4 < '\0'))
           || (uVar8 - 0x3a < 0xfffffffffffffff6)) break;
        if ((((long)uVar12 < 0xccccccc) && ((long)uVar11 < 0xccccccc)) &&
           ((uVar11 = (long)(char)(&UNK_10dff784c)[uVar8] + uVar11 * 10, ppbVar10 != (byte **)0x0 ||
            (param_3 = lVar9 + -1, lVar9 < 1)))) {
          uVar12 = uVar12 * 10;
          param_3 = lVar9;
        }
        pbVar13 = pbVar13 + 1;
        lVar9 = param_3;
        pbStack_68 = param_2;
      } while (pbVar13 != param_2);
    }
    else {
      uVar11 = 0;
      uVar12 = 1;
      pbStack_68 = pbVar13;
    }
  }
  else {
    uVar11 = 0;
    uVar12 = 1;
  }
  pbVar13 = pbStack_68 + 1;
  if ((pbVar13 < param_2) && ((*pbStack_68 | 0x20) == 0x65)) {
    ppbVar7 = &pbStack_68;
    pbStack_68 = pbVar13;
    FUN_109766ba8(ppbVar7,param_2);
    if (pbVar13 == pbStack_68) {
      return (byte **)0x0;
    }
    if ((long)ppbVar7 < 0x3e9) {
      bVar1 = -0x3e9 < (long)ppbVar7;
      if ((long)ppbVar7 < -1000) {
        ppbVar7 = (byte **)0x0;
      }
      param_3 = (long)ppbVar7 + param_3;
      goto LAB_109766a4c;
    }
    *param_1 = (ulong)pbStack_68;
    if (ppbVar10 == (byte **)0x0 && uVar11 == 0) {
      return (byte **)0x0;
    }
  }
  else {
    bVar1 = true;
LAB_109766a4c:
    *param_1 = (ulong)pbStack_68;
    if (ppbVar10 == (byte **)0x0 && uVar11 == 0) {
      return (byte **)0x0;
    }
    if (bVar5) {
      if (!bVar1) {
        return (byte **)0x0;
      }
      if (param_3 < 1) {
        if (param_3 < 0) {
          do {
            uVar8 = (long)uVar11 / 10;
            if ((long)uVar12 < 0xccccccc) {
              uVar12 = uVar12 * 10;
              uVar8 = uVar11;
            }
            uVar11 = uVar8;
            if ((ppbVar10 < (byte **)0xa) && (uVar11 == 0)) {
              return (byte **)0x0;
            }
            ppbVar10 = (byte **)((ulong)ppbVar10 / 10);
            bVar5 = param_3 != -1;
            param_3 = param_3 + 1;
          } while (bVar5);
        }
      }
      else {
        param_3 = param_3 + 1;
        do {
          if ((byte **)0xccccccb < ppbVar10) goto LAB_109766ac8;
          if ((long)uVar11 < 0xccccccc) {
            uVar11 = uVar11 * 10;
          }
          else {
            if (uVar12 == 1) goto LAB_109766ac8;
            uVar12 = (long)uVar12 / 10;
          }
          ppbVar10 = (byte **)((long)ppbVar10 * 10);
          param_3 = param_3 + -1;
        } while (1 < param_3);
      }
      if (uVar11 != 0) {
        if (uVar12 == 0) {
          uVar8 = 0x7fffffff;
        }
        else {
          uVar3 = -uVar12;
          if (-1 < (long)uVar12) {
            uVar3 = uVar12;
          }
          uVar2 = -uVar11;
          if (-1 < (long)uVar11) {
            uVar2 = uVar11;
          }
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = ((uVar3 >> 1) + uVar2 * 0x10000) / uVar3;
          }
        }
        uVar3 = -uVar8;
        if (-1 < (long)(uVar12 ^ uVar11)) {
          uVar3 = uVar8;
        }
        ppbVar10 = (byte **)(uVar3 + (long)ppbVar10);
      }
      goto LAB_109766acc;
    }
  }
LAB_109766ac8:
  ppbVar10 = (byte **)0x7fffffff;
LAB_109766acc:
  if (bVar6) {
    return ppbVar10;
  }
  return (byte **)-(long)ppbVar10;
}



/* Entry: 109766ba8; end: 109766c43;  */

char ** FUN_109766ba8(undefined8 *param_1,char *param_2)

{
  char **ppcVar1;
  char *pcVar2;
  char *pcStack_38;
  
  pcVar2 = (char *)*param_1;
  ppcVar1 = &pcStack_38;
  pcStack_38 = pcVar2;
  FUN_109766c44(ppcVar1,param_2,10);
  if (pcStack_38 == pcVar2) {
LAB_109766c28:
    ppcVar1 = (char **)0x0;
  }
  else {
    if ((pcStack_38 < param_2) && (*pcStack_38 == '#')) {
      pcVar2 = pcStack_38 + 1;
      ppcVar1 = &pcStack_38;
      pcStack_38 = pcVar2;
      FUN_109766c44(ppcVar1,param_2);
      if (pcStack_38 == pcVar2) goto LAB_109766c28;
    }
    *param_1 = pcStack_38;
  }
  return ppcVar1;
}



/* Entry: 109766c44; end: 109766deb;  */

ulong FUN_109766c44(undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  
  uVar5 = (uint)param_3;
  pbVar7 = (byte *)*param_1;
  if (param_3 - 0x25U < 0xffffffffffffffdd || param_2 <= pbVar7) {
LAB_109766c58:
    uVar9 = 0;
  }
  else {
    bVar1 = *pbVar7;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      pbVar7 = pbVar7 + 1;
      if (pbVar7 == param_2) goto LAB_109766c58;
      bVar4 = bVar1 != 0x2d;
      if (*pbVar7 == 0x2b) {
        return 0;
      }
      if (*pbVar7 == 0x2d) {
        return 0;
      }
    }
    else {
      bVar4 = true;
    }
    if (pbVar7 < param_2) {
      uVar6 = 0;
      bVar3 = false;
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = 0x7fffffff / uVar5;
      }
      uVar9 = (ulong)uVar2;
      while( true ) {
        bVar1 = *pbVar7;
        pbVar8 = pbVar7;
        if ((bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) != 0) ||
           ((char)bVar1 < '\0')) break;
        lVar10 = (long)(char)(&UNK_10dff784c)[bVar1];
        if ((lVar10 < 0) || (param_3 <= lVar10)) break;
        if ((long)uVar9 < (long)uVar6) {
          bVar3 = true;
        }
        else if ((uVar6 == uVar9) &&
                ((uVar2 * uVar5 ^ 0x7fffffff) < (uint)(int)(char)(&UNK_10dff784c)[bVar1])) {
          bVar3 = true;
          uVar6 = uVar9;
        }
        else {
          uVar6 = lVar10 + uVar6 * param_3;
        }
        pbVar7 = pbVar7 + 1;
        pbVar8 = param_2;
        if (pbVar7 == param_2) break;
      }
      if (bVar3) {
        uVar6 = 0x7fffffff;
      }
    }
    else {
      uVar6 = 0;
      pbVar8 = pbVar7;
    }
    *param_1 = pbVar8;
    uVar9 = -uVar6;
    if (bVar4) {
      uVar9 = uVar6;
    }
  }
  return uVar9;
}



/* Entry: 109766dec; end: 10976717f;  */

void FUN_109766dec(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _bzero(param_1,0x4f0);
  if ((int)param_3 == 0) {
    FUN_10976409c(param_1,param_2,0);
    lVar2 = *(long *)(param_2 + 0xd8);
    *(long *)(param_1 + 0x418) = lVar2;
    *(long *)(param_1 + 0x428) = lVar2 + 5000;
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x5d8);
    uVar3 = *(undefined8 *)(param_2 + 0x5b0);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x5b8);
    *(undefined8 *)(param_1 + 0x450) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x5a0);
    *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_2 + 0x5a8);
    *(undefined8 *)(param_1 + 0x440) = uVar3;
    *(long *)(param_1 + 0x430) = param_2 + 0x488;
    *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_2 + 0x499);
    uVar1 = *(undefined4 *)(param_2 + 0x5cc);
    uVar3 = *(undefined8 *)(param_2 + 0x5e0);
    *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_2 + 0x5e8);
    *(undefined8 *)(param_1 + 0x478) = uVar3;
  }
  else {
    FUN_10976409c(param_1,param_2,param_3);
    *(long *)(param_1 + 0x428) = param_2 + 0xba8;
    *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0xa80);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0xa88);
    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0xa90);
    uVar1 = *(undefined4 *)(param_2 + 0xb68);
    *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0xb60);
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0xa9c);
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0xaa0);
    *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0xaa8);
    *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 0xab0);
    *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0xb98);
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0xba0);
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0xa98);
  }
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  return;
}



/* Entry: 109767180; end: 109767203;  */

void FUN_109767180(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar1 = (byte *)*param_1;
  do {
    if ((param_2 <= pbVar1) || (bVar3 = *pbVar1, 0x25 < bVar3)) goto LAB_1097671fc;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar3 != 0x25) {
LAB_1097671fc:
        *param_1 = pbVar1;
        return;
      }
      bVar3 = 0x25;
      while ((pbVar2 = pbVar1 + 1, bVar3 != 10 && bVar3 != 0xd &&
             (pbVar1 = param_2, pbVar2 != param_2))) {
        bVar3 = *pbVar2;
        pbVar1 = pbVar2;
      }
    }
    pbVar1 = pbVar1 + 1;
  } while( true );
}



/* Entry: 109767204; end: 109767327;  */

int FUN_109767204(ulong *param_1,byte *param_2)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbStack_38;
  
  pbStack_38 = (byte *)*param_1;
  if (pbStack_38 < param_2) {
    iVar5 = 0;
    do {
      bVar3 = *pbStack_38;
      if (bVar3 < 0x3c) {
        if (bVar3 == 0x25) {
          bVar3 = 0x25;
          while ((pbVar2 = pbStack_38 + 1, bVar3 != 10 && bVar3 != 0xd &&
                 (pbStack_38 = param_2, pbVar2 != param_2))) {
            bVar3 = *pbVar2;
            pbStack_38 = pbVar2;
          }
          iVar4 = 0;
        }
        else {
          if (bVar3 != 0x28) goto LAB_109767298;
          ppbVar1 = &pbStack_38;
          func_0x000109767328(ppbVar1,param_2);
          iVar4 = (int)ppbVar1;
        }
      }
      else if (bVar3 == 0x3c) {
        ppbVar1 = &pbStack_38;
        func_0x000109767410(ppbVar1,param_2);
        iVar4 = (int)ppbVar1;
      }
      else if (bVar3 == 0x7d) {
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = 0;
          pbStack_38 = pbStack_38 + 1;
          goto LAB_109767304;
        }
LAB_109767298:
        iVar4 = 0;
      }
      else {
        if (bVar3 == 0x7b) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = 0;
      }
      pbStack_38 = pbStack_38 + 1;
    } while (pbStack_38 < param_2 && iVar4 == 0);
    if (iVar5 != 0) {
      iVar4 = 3;
    }
  }
  else {
    iVar4 = 0;
  }
LAB_109767304:
  *param_1 = (ulong)pbStack_38;
  return iVar4;
}



/* Entry: 109767328; end: 109767503;  */

undefined4 FUN_109767328(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 < param_2) {
    iVar2 = 0;
    pbVar6 = pbVar5;
    do {
      pbVar5 = pbVar6 + 1;
      bVar1 = *pbVar6;
      if (bVar1 == 0x28) {
        iVar2 = iVar2 + 1;
      }
      else if (bVar1 == 0x29) {
        iVar2 = iVar2 + -1;
        uVar3 = 0;
        if (iVar2 == 0) goto LAB_1097673f8;
      }
      else if (bVar1 == 0x5c) {
        if (pbVar5 == param_2) {
          uVar3 = 3;
          goto LAB_1097673f8;
        }
        uVar4 = *pbVar5 - 0x5c;
        if ((uVar4 < 0x19 && (1 << (ulong)(uVar4 & 0x1f) & 0x1440441U) != 0) || (*pbVar5 - 0x28 < 2)
           ) {
          pbVar5 = pbVar6 + 2;
        }
        else if (pbVar5 < param_2) {
          uVar4 = 0;
          do {
            if (((*pbVar5 & 0xf8) != 0x30) || (pbVar5 = pbVar5 + 1, 1 < uVar4)) break;
            uVar4 = uVar4 + 1;
          } while (pbVar5 < param_2);
        }
      }
      pbVar6 = pbVar5;
    } while (pbVar5 < param_2);
  }
  uVar3 = 3;
LAB_1097673f8:
  *param_1 = pbVar5;
  return uVar3;
}



/* Entry: 109767504; end: 1097676a3;  */

long FUN_109767504(long *param_1,byte *param_2,int param_3,long param_4,int param_5)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  byte *pbStack_68;
  
  pbStack_68 = (byte *)*param_1;
  if (param_2 <= pbStack_68) {
    lVar4 = 0;
    goto LAB_10976767c;
  }
  if (*pbStack_68 == 0x5b) {
    bVar5 = 0x5d;
LAB_109767568:
    bVar6 = false;
    pbStack_68 = pbStack_68 + 1;
  }
  else {
    if (*pbStack_68 == 0x7b) {
      bVar5 = 0x7d;
      goto LAB_109767568;
    }
    bVar5 = 0;
    bVar6 = true;
  }
  lVar4 = 0;
  do {
    if (param_2 <= pbStack_68) break;
    do {
      bVar3 = *pbStack_68;
      pbVar2 = pbStack_68;
      if (0x25 < bVar3) break;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar3 != 0x25) break;
        bVar3 = 0x25;
        while ((pbVar2 = pbStack_68 + 1, bVar3 != 10 && bVar3 != 0xd &&
               (pbStack_68 = param_2, pbVar2 != param_2))) {
          bVar3 = *pbVar2;
          pbStack_68 = pbVar2;
        }
      }
      pbStack_68 = pbStack_68 + 1;
      pbVar2 = pbStack_68;
    } while (pbStack_68 < param_2);
    pbStack_68 = pbVar2;
    if (param_2 <= pbVar2) break;
    if (bVar5 == *pbVar2) {
      pbStack_68 = pbVar2 + 1;
      break;
    }
    if ((param_4 != 0) && (param_3 <= lVar4)) break;
    ppbVar1 = &pbStack_68;
    FUN_10976685c(ppbVar1,param_2,(long)param_5);
    if (param_4 != 0) {
      *(byte ***)(param_4 + lVar4 * 8) = ppbVar1;
    }
    if (pbVar2 == pbStack_68) {
      lVar4 = 0xffffffff;
      break;
    }
    lVar4 = lVar4 + 1;
  } while (!bVar6);
LAB_10976767c:
  *param_1 = (long)pbStack_68;
  return lVar4;
}



/* Entry: 1097676a4; end: 109767783;  */

ulong FUN_1097676a4(ulong *param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_1;
  if (uVar3 < param_2) {
    uVar4 = (ulong)(uint)((int)param_2 - (int)uVar3);
    uVar1 = param_4 << 1;
    if (uVar4 <= (ulong)(param_4 << 1)) {
      uVar1 = uVar4;
    }
    if (uVar1 == 0) {
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = 0;
      uVar7 = 1;
      do {
        bVar2 = *(byte *)(uVar3 + uVar5);
        uVar8 = uVar7;
        if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
          uVar6 = uVar5;
          if (((char)bVar2 < '\0') || (0xf < (byte)(&UNK_10dff784c)[bVar2])) break;
          uVar8 = (uint)(byte)(&UNK_10dff784c)[bVar2] | uVar7 << 4;
          if ((uVar7 >> 4 & 1) != 0) {
            *(char *)(param_3 + uVar4) = (char)uVar8;
            uVar4 = (ulong)((int)uVar4 + 1);
            uVar8 = 1;
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar1;
        uVar7 = uVar8;
      } while (uVar1 != uVar5);
      if (uVar8 != 1) {
        *(char *)(param_3 + uVar4) = (char)(uVar8 << 4);
        uVar4 = (ulong)((int)uVar4 + 1);
      }
    }
    *param_1 = uVar3 + uVar6;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 109767784; end: 1097677ff;  */

void FUN_109767784(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (param_1[0xf] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[0xf] = 0;
    if (param_1[0x11] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_1[0x11] = 0;
  }
  return;
}



/* Entry: 109767800; end: 1097679ab;  */

void FUN_109767800(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x58) == '\0') {
    lVar2 = lVar3;
    func_0x000109767a88(lVar3,*param_2,param_2[1]);
    iVar1 = (int)lVar2;
    if (iVar1 != 0) goto LAB_109767848;
  }
  func_0x000109767b58(lVar3,param_2[2],param_2[3]);
  iVar1 = (int)lVar3;
  if (iVar1 == 0) {
    return;
  }
LAB_109767848:
  if (**(int **)(param_1 + 0x30) == 0) {
    **(int **)(param_1 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 1097679ac; end: 109767a87;  */

void FUN_1097679ac(ushort *param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_1 == (ushort *)0x0) {
    return;
  }
  uVar3 = *param_1;
  uVar6 = (uint)uVar3;
  if (uVar3 < 2) {
    uVar7 = 0;
    if (uVar6 == 0) {
      uVar4 = param_1[1];
      bVar9 = true;
      goto LAB_1097679fc;
    }
  }
  else {
    uVar7 = *(ushort *)(*(long *)(param_1 + 0xc) + (ulong)(uVar6 - 2) * 2) + 1;
  }
  uVar4 = param_1[1];
  if (uVar7 == uVar4) {
    *param_1 = uVar3 - 1;
    return;
  }
  bVar9 = false;
LAB_1097679fc:
  uVar8 = (uint)uVar4;
  if (1 < uVar8) {
    plVar1 = (long *)(*(long *)(param_1 + 4) + (ulong)uVar7 * 0x10);
    lVar2 = *(long *)(param_1 + 4) + (ulong)uVar8 * 0x10;
    if (((*plVar1 == *(long *)(lVar2 + -0x10)) && (plVar1[1] == *(long *)(lVar2 + -8))) &&
       (*(char *)(*(long *)(param_1 + 8) + (ulong)uVar8 + -1) == '\x01')) {
      uVar8 = uVar8 - 1;
      param_1[1] = (ushort)uVar8;
    }
  }
  if (bVar9) {
    return;
  }
  uVar5 = (uVar8 & 0xffff) - 1;
  if (uVar7 != uVar5) {
    *(short *)(*(long *)(param_1 + 0xc) + (ulong)(uVar6 - 1) * 2) = (short)uVar5;
    return;
  }
  *param_1 = uVar3 - 1;
  param_1[1] = (short)uVar8 - 1;
  return;
}



/* Entry: 109767a88; end: 109767bef;  */

void FUN_109767a88(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  puVar5 = *(ushort **)(param_1 + 0x28);
  if (puVar5 == (ushort *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    lVar3 = *(long *)(param_1 + 0x18);
    if ((*(uint *)(lVar3 + 0xc) <= (uint)*(ushort *)(lVar3 + 0x60) + (uint)*(ushort *)(lVar3 + 0x18)
        ) && (FUN_109753a7c(lVar3,0,1), (int)lVar3 != 0)) {
      return;
    }
    if (*puVar5 == 0) {
      uVar4 = 1;
      goto LAB_109767b38;
    }
    *(ushort *)(*(long *)(puVar5 + 0xc) + (ulong)(*puVar5 - 1) * 2) = puVar5[1] - 1;
  }
  uVar4 = *puVar5 + 1;
LAB_109767b38:
  *puVar5 = uVar4;
  lVar3 = *(long *)(param_1 + 0x18);
  if (((uint)*(ushort *)(lVar3 + 0x1a) + (uint)*(ushort *)(lVar3 + 0x62) + 1 <= *(uint *)(lVar3 + 8)
      ) || (FUN_109753a7c(lVar3,1,0), (int)lVar3 == 0)) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x59) != '\0') {
      uVar4 = *(ushort *)(lVar3 + 2);
      lVar2 = *(long *)(lVar3 + 0x10);
      plVar1 = (long *)(*(long *)(lVar3 + 8) + (ulong)uVar4 * 0x10);
      *plVar1 = param_2 >> 10;
      plVar1[1] = param_3 >> 10;
      *(undefined1 *)(lVar2 + (ulong)uVar4) = 1;
    }
    *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  }
  return;
}



/* Entry: 109767bf0; end: 10976b9ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109767bf0(int ***param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,uint param_6,uint param_7,int *param_8)

{
  uint uVar1;
  int *******pppppppiVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  bool bVar10;
  int *******pppppppiVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *******pppppppiVar17;
  int *******pppppppiVar18;
  int ***pppiVar19;
  long *plVar20;
  int *******pppppppiVar21;
  undefined *puVar22;
  int *******pppppppiVar23;
  int *******pppppppiVar24;
  undefined8 uVar25;
  int *******pppppppiVar26;
  uint uVar27;
  int ******ppppppiVar28;
  uint uVar29;
  long lVar30;
  int ******ppppppiVar31;
  ulong uVar32;
  ulong uVar33;
  int ******ppppppiVar34;
  int *******pppppppiVar35;
  int iVar36;
  int *******pppppppiVar37;
  int *******pppppppiVar38;
  int *******pppppppiVar39;
  int *******pppppppiVar40;
  uint uVar41;
  uint uVar42;
  int *******pppppppiVar43;
  uint uVar44;
  int *******pppppppiVar45;
  int *****pppppiVar46;
  int iVar47;
  int *******pppppppiVar48;
  int *******pppppppiVar49;
  uint uVar50;
  int iStack_64d8;
  int *******pppppppiStack_64b8;
  int ***pppiStack_64a8;
  uint uStack_6468;
  int *******pppppppiStack_6448;
  int ***pppiStack_6440;
  int ****ppppiStack_6438;
  int *******pppppppiStack_6430;
  undefined8 uStack_6428;
  undefined1 auStack_4c14 [4];
  int *****pppppiStack_4c10;
  int *****pppppiStack_4c08;
  int ***pppiStack_4c00;
  undefined8 uStack_4bf8;
  int ***pppiStack_4bf0;
  int ****ppppiStack_4be8;
  int *******pppppppiStack_4be0;
  undefined1 uStack_4bd8;
  undefined1 uStack_4bd7;
  undefined4 uStack_4bd4;
  int ***pppiStack_33c8;
  int ****ppppiStack_33c0;
  int *******pppppppiStack_33b8;
  undefined1 uStack_33b0;
  undefined1 uStack_33af;
  undefined4 uStack_33ac;
  int ***pppiStack_1ba0;
  int ****ppppiStack_1b98;
  int *******pppppppiStack_1b90;
  undefined1 uStack_1b88;
  undefined1 uStack_1b87;
  undefined4 uStack_1b84;
  int *******pppppppiStack_378;
  int *******pppppppiStack_370;
  undefined8 uStack_368;
  int ******ppppppiStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  int *******pppppppiStack_318;
  int *******pppppppiStack_310;
  int *******pppppppiStack_308;
  undefined8 uStack_300;
  int ***pppiStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int *******pppppppiStack_248;
  int *******pppppppiStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  int *******pppppppiStack_210;
  int *******pppppppiStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  char cStack_1d1;
  int *******pppppppiStack_1d0;
  int *******pppppppiStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  int *******pppppppiStack_1b0;
  undefined8 uStack_1a8;
  int *******pppppppiStack_1a0;
  uint uStack_198;
  uint uStack_194;
  int *******pppppppiStack_190;
  int *****pppppiStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int *******pppppppiStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  
  uStack_194 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppiStack_6448 = (int *******)CONCAT44(pppppppiStack_6448._4_4_,param_7);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiVar39 = (int *******)param_1[0x1e];
  pppppppiVar49 = (int *******)*param_1;
  iVar5 = *(int *)(pppppppiVar39[0x84] + 0x81);
  pppppppiVar48 = (int *******)&uStack_340;
  pppppppiVar2 = (int *******)(param_1 + 1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  lStack_1c0 = 0x20;
  pppppppiStack_1b0 = (int *******)0x0;
  uStack_1b8 = 0;
  pppppppiStack_1a0 = (int *******)0x0;
  uStack_1a8 = 0;
  uStack_200 = 0x14;
  lStack_1f0 = 0;
  uStack_1f8 = 0;
  lStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_238 = 0x14;
  lStack_218 = 0;
  uStack_220 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_300 = 0;
  pppppppiStack_308 = (int *******)0x0;
  uStack_2f0 = 0;
  pppiStack_2f8 = (int ***)0x0;
  uStack_320 = 0;
  uStack_328 = 0;
  pppppppiStack_310 = (int *******)0x0;
  pppppppiStack_318 = (int *******)0x0;
  uStack_330 = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_368 = 0x10;
  pppppppiVar43 = &ppppppiStack_360;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  ppppppiStack_360 = (int ******)0x0;
  pppiStack_4c00 = param_1;
  uStack_4bf8 = param_3;
  pppppppiStack_378 = pppppppiVar49;
  pppppppiStack_370 = pppppppiVar2;
  pppppppiStack_248 = pppppppiVar49;
  pppppppiStack_240 = pppppppiVar2;
  pppppppiStack_210 = pppppppiVar49;
  pppppppiStack_208 = pppppppiVar2;
  pppppppiStack_1d0 = pppppppiVar49;
  pppppppiStack_1c8 = pppppppiVar2;
  uStack_198 = param_7;
  pppppppiStack_158 = pppppppiVar2;
  _bzero(&uStack_1b88,0x1810);
  uVar7 = *(undefined1 *)(param_1 + 0x20);
  pppiStack_1ba0 = param_1;
  ppppiStack_1b98 = &pppiStack_1ba0;
  pppppppiStack_1b90 = (int *******)&pppppppiStack_378;
  uStack_1b87 = uVar7;
  _bzero(&uStack_33b0,0x1810);
  pppiStack_33c8 = param_1;
  ppppiStack_33c0 = &pppiStack_1ba0;
  pppppppiStack_33b8 = (int *******)&pppppppiStack_378;
  uStack_33af = uVar7;
  _bzero(&uStack_4bd8,0x1810);
  uVar25 = uStack_320;
  pppppppiStack_310 = (int *******)&pppppppiStack_248;
  pppppppiStack_318 = (int *******)&pppppppiStack_210;
  uStack_340 = *(undefined4 *)((long)param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 7);
  uStack_33c = (undefined4)*(undefined8 *)((long)param_1 + 0x34);
  uStack_338 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20);
  uStack_328 = param_4[1];
  uStack_330 = *param_4;
  pppppppiStack_308 = (int *******)&pppppppiStack_158;
  uStack_300 = CONCAT44(uStack_300._4_4_,param_7);
  iVar36 = *(int *)((long)param_1 + 300);
  iVar14 = *(int *)(param_1 + 0x26);
  uStack_2f0 = *(undefined8 *)((long)param_1 + 300);
  iVar16 = -iVar36;
  if (-1 < iVar36) {
    iVar16 = iVar36;
  }
  iVar36 = -iVar14;
  if (-1 < iVar14) {
    iVar36 = iVar14;
  }
  if (iVar16 <= iVar36) {
    iVar16 = iVar36;
  }
  uStack_2e8 = CONCAT44(0x199a,iVar16 << 1);
  uStack_320._4_4_ = SUB84(uVar25,4);
  uStack_320._0_4_ =
       CONCAT13(1,CONCAT12(*(undefined1 *)((long)param_1 + 0x101),(undefined2)uStack_320));
  cVar8 = *(char *)((long)param_1 + 0xd);
  cStack_1d1 = cVar8 != '\0';
  *param_8 = *(int *)(pppppppiVar39[0x84] + 0x80) << 0x10;
  if (cVar8 == '\0') {
    pppppppiVar45 = (int *******)0x30;
  }
  else {
    pppppppiVar45 = (int *******)(ulong)*(uint *)(pppppppiVar39[0x83] + 0xf5);
  }
  pppppppiVar17 = pppppppiVar49;
  pppiStack_4bf0 = param_1;
  ppppiStack_4be8 = &pppiStack_1ba0;
  pppppppiStack_4be0 = (int *******)&pppppppiStack_378;
  uStack_4bd7 = uVar7;
  uStack_4bd4 = uVar6;
  uStack_33ac = uVar6;
  uStack_1b84 = uVar6;
  pppiStack_2f8 = param_1 + 0x27;
  (*(code *)pppppppiVar49[1])(pppppppiVar49,0x28);
  if (pppppppiVar17 == (int *******)0x0) {
LAB_109767f08:
    pppppppiVar18 = (int *******)0x40;
    pppppppiVar40 = (int *******)0x1;
    pppppppiVar17 = (int *******)0x0;
    goto LAB_109767f18;
  }
  *pppppppiVar17 = (int ******)pppppppiVar49;
  pppppppiVar17[1] = (int ******)pppppppiVar2;
  uVar44 = (uint)pppppppiVar45;
  pppppppiStack_6448 = pppppppiVar17;
  if (uVar44 == 0) {
    pppppppiVar18 = (int *******)0x0;
  }
  else if ((uVar44 >> 0x1c != 0) ||
          (pppppppiVar18 = pppppppiVar49, (*(code *)pppppppiVar49[1])(pppppppiVar49,uVar44 << 3),
          pppppppiVar18 == (int *******)0x0)) {
    pppppppiVar17[2] = (int ******)0x0;
    (*(code *)pppppppiVar49[2])(pppppppiVar49);
    goto LAB_109767f08;
  }
  *(uint *)(pppppppiVar17 + 4) = uVar44;
  pppppppiVar17[2] = (int ******)pppppppiVar18;
  pppppppiVar17[3] = (int ******)pppppppiVar18;
  if (uStack_1b8 < 0x11) {
    pppppppiVar18 = (int *******)&pppppppiStack_1d0;
    FUN_10976d160(pppppppiVar18,0x11);
    if ((int)pppppppiVar18 != 0) goto LAB_109767f5c;
  }
  else {
LAB_109767f5c:
    pppppppiStack_1b0 = (int *******)0x11;
  }
  if (*(int *)pppppppiVar2 != 0) {
LAB_109767f78:
    pppppppiVar40 = (int *******)0x0;
    goto LAB_109767f7c;
  }
  pppppppiVar26 = (int *******)0x0;
  bVar10 = false;
  iStack_64d8 = 0;
  iVar5 = iVar5 * 0x10000;
  ppppppiVar31 = (int ******)*param_2;
  ppppppiVar34 = (int ******)param_2[3];
  ppppppiVar28 = (int ******)param_2[2];
  pppppppiStack_1a0[1] = (int ******)param_2[1];
  *pppppppiStack_1a0 = ppppppiVar31;
  pppppppiStack_1a0[3] = ppppppiVar34;
  pppppppiStack_1a0[2] = ppppppiVar28;
  pppppppiVar35 = (int *******)0x1312d00;
  pppppppiVar24 = pppppppiStack_1a0;
  pppppppiVar11 = (int *******)0x0;
  pppppppiVar37 = (int *******)0x0;
  iVar16 = iStack_64d8;
LAB_1097680d0:
  while( true ) {
    iStack_64d8 = iVar16;
    pppppppiVar38 = pppppppiVar37;
    pppppppiVar21 = pppppppiVar11;
    pppppppiVar40 = pppppppiStack_1a0;
    lVar30 = lStack_1c0;
    pppppppiVar18 = (int *******)&UNK_10dff7790;
    pppppppiVar49 = (int *******)0xb;
    ppppppiVar28 = pppppppiVar24[2];
    ppppppiVar34 = pppppppiVar24[3];
    iVar36 = (int)pppppppiVar38;
    if (ppppppiVar34 < ppppppiVar28) {
      ppppppiVar31 = (int ******)((long)ppppppiVar34 + 1);
      pppppppiVar24[3] = ppppppiVar31;
      bVar9 = *(byte *)ppppppiVar34;
      uVar50 = (uint)bVar9;
      if ((bVar9 == 0xe || bVar9 == 0xb) && (*(char *)((long)param_1 + 0xd) != '\0')) {
        uVar50 = 0;
      }
    }
    else {
      uVar50 = 0xe;
      ppppppiVar31 = ppppppiVar34;
      if (iVar36 != 0) {
        uVar50 = 0xb;
      }
    }
    cVar8 = *(char *)((long)param_1 + 0xc);
    iVar14 = (int)pppppppiVar21;
    pppppppiVar37 = pppppppiVar38;
    iVar16 = iStack_64d8;
    if (cVar8 == '\0') break;
    if ((((((iVar14 != 0) || ((uVar50 & 0xfe) == 10)) || (uVar50 == 0xd)) ||
         (((uVar50 & 0xfffffffd) == 1 || (0x1f < uVar50)))) || (uVar50 == 0xc)) || (uVar50 == 0xe))
    {
      uVar27 = (uint)pppppppiVar26;
      if (0 < (int)uVar27 && (uVar50 < 0x20 && ((uVar50 & 0xfe) != 10 && uVar50 != 0xc))) {
        uVar27 = 0;
      }
      pppppppiVar26 = (int *******)(ulong)uVar27;
      if (bVar10 && (uVar50 != 0xc && uVar50 < 0x20)) {
        bVar10 = false;
      }
      break;
    }
    pppppppiVar17[3] = pppppppiVar17[2];
    pppppppiVar11 = (int *******)0x0;
  }
  pppppppiStack_64b8 = pppppppiVar39;
  pppiStack_64a8 = param_1;
  if (*(int *)pppppppiVar2 != 0) goto LAB_109767f78;
  uVar27 = (int)pppppppiVar35 - 1;
  pppppppiVar35 = (int *******)(ulong)uVar27;
  if (uVar27 == 0) {
    pppppppiVar40 = (int *******)0x0;
    iVar16 = 0x12;
    goto LAB_109767f24;
  }
  pppppppiVar23 = pppppppiVar24;
  pppppppiVar11 = pppppppiVar21;
  uVar15 = uStack_194;
  uVar29 = uStack_198;
  switch(uVar50) {
  case 0:
  case 2:
  case 0x11:
    break;
  case 1:
  case 0x12:
    if (cVar8 == '\0') {
      if ((char)uStack_150 != '\0') break;
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined4 *)(pppppppiVar39[8] + 1);
    }
    pppppppiVar49 = (int *******)&pppppppiStack_210;
    goto code_r0x000109768330;
  case 3:
  case 0x17:
    if (cVar8 == '\0') {
      if ((char)uStack_150 != '\0') break;
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined4 *)pppppppiVar39[8];
    }
    pppppppiVar49 = (int *******)&pppppppiStack_248;
code_r0x000109768330:
    FUN_10976be3c(param_1,pppppppiVar17,pppppppiVar49,param_8,&cStack_1d1,uVar13);
    pppppppiVar45 = pppppppiVar38;
    pppppppiVar48 = pppppppiVar21;
    if (*(char *)(pppppppiVar39 + 0x87) != '\0') {
code_r0x00010976b498:
      pppppppiVar26 = (int *******)0xb;
      pppppppiVar18 = (int *******)0x0;
      pppppppiVar24 = pppppppiVar45;
      goto code_r0x00010976b5c8;
    }
    break;
  case 4:
    if ((((long)pppppppiVar17[3] - (long)pppppppiVar17[2] & 0x7fffffff0U) != 0) &&
       (cStack_1d1 == '\0')) {
      pppppppiVar45 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,0);
      *param_8 = (int)pppppppiVar45 + iVar5;
    }
    uVar50 = uStack_198;
    cStack_1d1 = '\x01';
    pppppppiVar45 = pppppppiVar35;
    if (*(char *)(pppppppiVar39 + 0x87) != '\0') {
code_r0x00010976b540:
      cStack_1d1 = '\x01';
      pppppppiVar40 = (int *******)0x0;
      iVar16 = 0;
      goto code_r0x000109767f1c;
    }
    pppppppiVar49 = pppppppiVar17;
    func_0x00010976bfac();
    uStack_198 = (int)pppppppiVar49 + uVar50;
    pppppppiVar48 = pppppppiVar24;
    if (*(int *)(pppppppiVar39 + 0x74) == 0) {
      FUN_10976c014(&pppiStack_4c00,uStack_194);
    }
    break;
  case 5:
    ppppppiVar28 = pppppppiVar17[2];
    uVar50 = (uint)((ulong)((long)pppppppiVar17[3] - (long)ppppppiVar28) >> 3);
    if (uVar50 != 0) {
      pppppppiVar45 = (int *******)0x0;
      do {
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,pppppppiVar45);
        uVar15 = (int)pppppppiVar49 + uVar15;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,(int)pppppppiVar45 + 1);
        uVar29 = (int)pppppppiVar49 + uVar29;
        FUN_10976c0a4(&pppiStack_4c00,uVar15,uVar29);
        uVar27 = (int)pppppppiVar45 + 2;
        pppppppiVar45 = (int *******)(ulong)uVar27;
      } while (uVar27 < uVar50);
      ppppppiVar28 = pppppppiVar17[2];
      pppppppiVar48 = pppppppiVar38;
    }
    goto code_r0x000109768c34;
  case 6:
  case 7:
    ppppppiVar28 = pppppppiVar17[2];
    uVar27 = (uint)((ulong)((long)pppppppiVar17[3] - (long)ppppppiVar28) >> 3);
    if (uVar27 != 0) {
      pppppppiVar45 = (int *******)0x0;
      bVar12 = uVar50 == 6;
      do {
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,pppppppiVar45);
        iVar36 = (int)pppppppiVar49;
        if (bVar12) {
          iVar36 = 0;
        }
        uVar29 = iVar36 + uVar29;
        iVar36 = 0;
        if (bVar12) {
          iVar36 = (int)pppppppiVar49;
        }
        uVar15 = iVar36 + uVar15;
        bVar12 = (bool)(bVar12 ^ 1);
        FUN_10976c0a4(&pppiStack_4c00,uVar15,uVar29);
        uVar50 = (int)pppppppiVar45 + 1;
        pppppppiVar45 = (int *******)(ulong)uVar50;
      } while (uVar27 != uVar50);
      ppppppiVar28 = pppppppiVar17[2];
      pppppppiVar48 = pppppppiVar35;
    }
code_r0x000109768c34:
    uStack_198 = uVar29;
    uStack_194 = uVar15;
    goto code_r0x0001097691d0;
  case 8:
  case 0x18:
    uVar15 = (uint)((ulong)((long)pppppppiVar17[3] - (long)pppppppiVar17[2]) >> 3);
    if (uVar15 < 6) {
      pppppppiVar45 = (int *******)0x0;
      uVar42 = uStack_194;
    }
    else {
      pppppppiVar45 = (int *******)0x0;
      uVar42 = uStack_194;
      do {
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,pppppppiVar45);
        iVar36 = (int)pppppppiVar49 + uVar42;
        iVar47 = (int)pppppppiVar45;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,iVar47 + 1);
        iVar14 = (int)pppppppiVar49 + uVar29;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,iVar47 + 2);
        uVar42 = (int)pppppppiVar49 + iVar36;
        pppppppiVar48 = (int *******)(ulong)uVar42;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,iVar47 + 3);
        iVar3 = (int)pppppppiVar49 + iVar14;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,iVar47 + 4);
        uVar42 = (int)pppppppiVar49 + uVar42;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,iVar47 + 5);
        uVar29 = (int)pppppppiVar49 + iVar3;
        FUN_10976c218(&pppiStack_4c00,iVar36,iVar14,pppppppiVar48,iVar3,uVar42,uVar29);
        pppppppiVar45 = (int *******)(ulong)(iVar47 + 6);
      } while (iVar47 + 0xcU <= uVar15);
    }
    uStack_198 = uVar29;
    uStack_194 = uVar42;
    if (uVar50 == 0x18) {
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,pppppppiVar45);
      uVar42 = (int)pppppppiVar49 + uVar42;
      pppppppiVar49 = pppppppiVar17;
      uStack_194 = uVar42;
      FUN_10976bf40(pppppppiVar17,(uint)pppppppiVar45 | 1);
      uStack_198 = (int)pppppppiVar49 + uVar29;
      FUN_10976c0a4(&pppiStack_4c00,uVar42);
    }
    pppppppiVar17[3] = pppppppiVar17[2];
    pppppppiVar35 = (int *******)(ulong)uVar27;
    goto LAB_1097680d0;
  case 9:
    if (cVar8 != '\0') {
      FUN_10976c3f8(&pppiStack_4c00);
      cStack_1d1 = '\x01';
      pppppppiVar45 = pppppppiVar24;
      pppppppiVar48 = pppppppiVar18;
    }
    break;
  case 10:
  case 0x1d:
    if (0x10 < iVar36) goto code_r0x00010976b48c;
    pppppppiVar49 = (int *******)((long)iVar36 + 1);
    if (pppppppiStack_1b0 <= pppppppiVar49) {
      if ((pppppppiStack_1c8 == (int *******)0x0) || (*(int *)pppppppiStack_1c8 != 0)) {
        pppppppiVar49 = (int *******)0x0;
      }
      else {
        pppppppiVar49 = (int *******)0x0;
        *(int *)pppppppiStack_1c8 = 0x82;
      }
    }
    pppppppiVar48 = pppppppiVar17;
    FUN_10976bc5c();
    iVar14 = (int)pppppppiVar48;
    if ((*(char *)((long)param_1 + 0xc) != '\0') && (pppppppiVar39[0x94] != (int ******)0x0)) {
      plVar20 = (long *)((ulong)pppppppiVar48 & 0xffffffff);
      func_0x000109758088();
      if (*plVar20 == 0) {
        iVar14 = -1;
      }
      else {
        iVar14 = *(int *)(*plVar20 + 8);
      }
    }
    pppppppiVar24 = (int *******)((long)pppppppiVar40 + lVar30 * (long)pppppppiVar49);
    pppppppiVar24[1] = (int ******)0x0;
    *pppppppiVar24 = (int ******)0x0;
    pppppppiVar24[3] = (int ******)0x0;
    pppppppiVar24[2] = (int ******)0x0;
    pppppppiVar45 = pppppppiVar39;
    if (uVar50 == 0x1d) {
      uVar50 = *(int *)((long)pppppppiVar39 + 0x44c) + iVar14;
      if (*(uint *)((long)pppppppiVar39 + 0x444) <= uVar50) {
        iVar16 = 0x12;
        pppppppiVar48 = pppppppiVar38;
        pppppppiVar49 = pppppppiVar21;
        goto code_r0x00010976b524;
      }
      ppppppiVar28 = pppppppiVar39[0x8b];
      ppppppiVar34 = (int ******)ppppppiVar28[uVar50];
      pppppppiVar24[3] = ppppppiVar34;
      pppppppiVar24[1] = ppppppiVar34;
      ppppppiVar28 = (int ******)ppppppiVar28[uVar50 + 1];
      lVar30 = 0x10;
    }
    else {
      uVar50 = *(int *)(pppppppiVar39 + 0x89) + iVar14;
      if (*(uint *)(pppppppiVar39 + 0x88) <= uVar50) {
        iVar16 = 0x12;
        pppppppiVar48 = pppppppiVar38;
        pppppppiVar49 = pppppppiVar21;
        goto code_r0x00010976b524;
      }
      ppppppiVar34 = pppppppiVar39[0x8a];
      ppppppiVar28 = (int ******)ppppppiVar34[uVar50];
      pppppppiVar24[1] = ppppppiVar28;
      if (*(char *)((long)pppppppiVar39 + 0x5c) == '\0') {
        ppppppiVar34 = (int ******)ppppppiVar34[uVar50 + 1];
      }
      else if (pppppppiVar39[0x93] == (int ******)0x0) {
        ppppppiVar28 = (int ******)
                       ((long)ppppppiVar28 +
                       (ulong)(*(uint *)(pppppppiVar39 + 0x92) &
                              ((int)*(uint *)(pppppppiVar39 + 0x92) >> 0x1f ^ 0xffffffffU)));
        pppppppiVar24[1] = ppppppiVar28;
        ppppppiVar34 = (int ******)ppppppiVar34[uVar50 + 1];
      }
      else if (ppppppiVar28 == (int ******)0x0) {
        ppppppiVar34 = (int ******)0x0;
      }
      else {
        ppppppiVar34 = (int ******)
                       ((long)ppppppiVar28 +
                       (ulong)*(uint *)((long)pppppppiVar39[0x93] + (ulong)uVar50 * 4));
      }
      pppppppiVar24[2] = ppppppiVar34;
      lVar30 = 0x18;
    }
    *(int *******)((long)pppppppiVar24 + lVar30) = ppppppiVar28;
    pppppppiVar37 = (int *******)(ulong)(iVar36 + 1);
    pppppppiVar48 = pppppppiVar38;
    goto LAB_1097680d0;
  case 0xb:
    pppppppiVar37 = (int *******)(ulong)(iVar36 - 1);
    if (iVar36 < 1) {
code_r0x00010976b48c:
      pppppppiVar18 = (int *******)0x12;
      pppppppiVar24 = pppppppiVar45;
      pppppppiVar26 = pppppppiVar49;
      goto code_r0x00010976b5c8;
    }
    pppppppiVar49 = pppppppiVar37;
    if (pppppppiStack_1b0 <= pppppppiVar37) {
      if ((pppppppiStack_1c8 == (int *******)0x0) || (*(int *)pppppppiStack_1c8 != 0)) {
        pppppppiVar49 = (int *******)0x0;
      }
      else {
        pppppppiVar49 = (int *******)0x0;
        *(int *)pppppppiStack_1c8 = 0x82;
      }
    }
    pppppppiVar24 = (int *******)((long)pppppppiStack_1a0 + lStack_1c0 * (long)pppppppiVar49);
    goto LAB_1097680d0;
  case 0xc:
    if (ppppppiVar28 <= ppppppiVar31) {
      ppppppiVar28 = *pppppppiVar24;
      if ((ppppppiVar28 == (int ******)0x0) || (*(int *)ppppppiVar28 != 0)) {
        uVar50 = 0;
      }
      else {
        uVar50 = 0;
        *(int *)ppppppiVar28 = 0x55;
      }
      goto code_r0x000109769624;
    }
    pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
    bVar9 = *(byte *)ppppppiVar31;
    uVar50 = (uint)bVar9;
    if (bVar9 < 0x1f) {
      if (uVar50 != 0x12 && 0x11 < bVar9) {
        if ((uVar50 != 0x13) && (uVar50 != 0x19)) goto code_r0x000109769624;
        break;
      }
      if ((uVar50 == 8) || (uVar50 == 0xd)) break;
code_r0x000109769624:
      if ((0x25 < uVar50) || (*(char *)((long)param_1 + 0xd) != '\0')) break;
      iVar36 = (int)pppppppiVar26;
      if ((cVar8 != '\0') && ((0 < iVar36 && (uVar50 != 0x11)))) {
        pppppppiVar26 = (int *******)0x0;
        break;
      }
      switch(uVar50) {
      case 1:
      case 2:
        if (cVar8 == '\0') goto code_r0x000109769398;
        pppppppiVar45 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,0);
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,2);
        pppppppiVar48 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,4);
        pppppppiVar18 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,1);
        if (((long)pppppppiVar17[3] - (long)pppppppiVar17[2] & 0x7fffffff0U) == 0) {
          ppppppiVar28 = pppppppiVar17[1];
          if ((ppppppiVar28 != (int ******)0x0) && (*(int *)ppppppiVar28 == 0)) {
            *(int *)ppppppiVar28 = 0x82;
          }
        }
        else {
          *(int *)(pppppppiVar17[2] + 2) =
               (int)pppppppiVar49 - ((int)pppppppiVar45 + (int)pppppppiVar18);
          *(undefined4 *)((long)pppppppiVar17[2] + 0x14) = 0;
        }
        pppppppiVar18 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,3);
        if (((long)pppppppiVar17[3] - (long)pppppppiVar17[2] & 0x7ffffffe0U) == 0) {
          ppppppiVar28 = pppppppiVar17[1];
          if ((ppppppiVar28 != (int ******)0x0) && (*(int *)ppppppiVar28 == 0)) {
            *(int *)ppppppiVar28 = 0x82;
          }
        }
        else {
          *(int *)(pppppppiVar17[2] + 4) =
               (int)pppppppiVar48 - ((int)pppppppiVar49 + (int)pppppppiVar18);
          *(undefined4 *)((long)pppppppiVar17[2] + 0x24) = 0;
        }
        pppppppiVar49 = (int *******)&pppppppiStack_248;
        if (uVar50 != 1) {
          pppppppiVar49 = (int *******)&pppppppiStack_210;
        }
        lVar30 = 0;
        if (uVar50 != 1) {
          lVar30 = 8;
        }
        FUN_10976be3c(param_1,pppppppiVar17,pppppppiVar49,param_8,&cStack_1d1,
                      *(undefined4 *)((long)pppppppiVar39[8] + lVar30));
        pppppppiVar48 = pppppppiVar35;
        if (*(char *)(pppppppiVar39 + 0x87) == '\0') goto code_r0x000109769398;
        goto code_r0x00010976b498;
      case 3:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          bVar12 = true;
          if ((int)pppppppiVar48 != 0) {
            bVar12 = (int)pppppppiVar49 == 0;
          }
code_r0x00010976a224:
          bVar12 = !bVar12;
code_r0x00010976a484:
          *(uint *)ppppppiVar28 = (uint)bVar12;
          ppppppiVar28 = pppppppiVar17[3];
          *(undefined4 *)((long)ppppppiVar28 + 4) = 2;
code_r0x00010976a494:
          pppppppiVar17[3] = ppppppiVar28 + 1;
          pppppppiVar45 = pppppppiVar38;
          pppppppiVar48 = pppppppiVar21;
          goto LAB_1097680d0;
        }
        break;
      case 4:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          bVar12 = (int)pppppppiVar48 == 0 && (int)pppppppiVar49 == 0;
          goto code_r0x00010976a224;
        }
        break;
      case 5:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          ppppppiVar28 = pppppppiVar17[1];
          goto joined_r0x00010976aab8;
        }
        *(uint *)pppppppiVar17[3] = (uint)((int)pppppppiVar49 == 0);
        ppppppiVar28 = pppppppiVar17[3];
        *(undefined4 *)((long)ppppppiVar28 + 4) = 2;
        pppppppiVar17[3] = ppppppiVar28 + 1;
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar18;
        goto LAB_1097680d0;
      case 6:
        if (cVar8 != '\0') {
          pppppppiVar49 = (int *******)&pppppppiStack_248;
          pppppppiVar45 = pppppppiVar17;
          FUN_10976bc5c(pppppppiVar17);
          pppppppiVar18 = pppppppiVar17;
          FUN_10976bc5c(pppppppiVar17);
          pppppppiVar35 = pppppppiVar17;
          func_0x00010976bfac();
          pppppppiVar43 = pppppppiVar17;
          func_0x00010976bfac();
          func_0x00010976bfac();
          if (((param_5 == 0) && (*(char *)((long)pppppppiVar39 + 0x5b) == '\0')) &&
             (pppppppiVar39[0x8c] != (int ******)0x0)) {
            pppppiVar46 = *pppppppiVar39[8];
            pppppppiVar40 = pppppppiVar39;
            FUN_10976c6a4(pppppppiVar39,pppppppiVar18);
            pppppppiVar48 = pppppppiVar39;
            FUN_10976c6a4(pppppppiVar39,pppppppiVar45);
            pppppppiVar18 = (int *******)0x12;
            pppppppiVar45 = pppppppiVar43;
            if ((int)pppppppiVar40 < 0) goto LAB_10976b730;
            if ((int)pppppppiVar48 < 0) goto LAB_10976b730;
            pppppppiVar35 = (int *******)(long)(int)pppppppiVar35;
            iVar16 = (int)pppppppiVar17;
            pppppppiVar45 = (int *******)((long)pppppiVar46 + (long)(int)pppppppiVar43);
            if (*(char *)((long)pppppppiVar39 + 0x5a) == '\0') goto code_r0x00010976b8b8;
            ppppppiVar28 = pppppppiVar39[2];
            pppppppiVar43 = (int *******)*ppppppiVar28[0x25];
            pppppppiVar18 = pppppppiVar43;
            func_0x000109753c6c(pppppppiVar43,2);
            if ((int)pppppppiVar18 != 0) goto LAB_10976b730;
            ppppppiVar34 = pppppppiVar43[0x14];
            *(int *)ppppppiVar34 = (int)pppppppiVar40;
            *(undefined2 *)((long)ppppppiVar34 + 4) = 0x202;
            ppppppiVar34[1] = (int *****)0x0;
            *(int *)(ppppppiVar34 + 6) = (int)pppppppiVar48;
            *(undefined2 *)((long)ppppppiVar34 + 0x34) = 2;
            *(int *)(ppppppiVar34 + 7) =
                 (int)((ulong)(((long)pppppppiVar45 - (long)iVar16) +
                               ((long)pppppppiVar45 - (long)iVar16 >> 0x3f) + 0x8000) >> 0x10);
            *(int *)((long)ppppppiVar34 + 0x3c) =
                 (int)((ulong)((long)pppppppiVar35 + ((long)pppppppiVar35 >> 0x3f) + 0x8000) >> 0x10
                      );
            *(undefined4 *)(ppppppiVar28 + 0x1e) = 2;
            ppppppiVar28[0x1f] = (int *****)pppppppiVar43[0xb];
            *(undefined4 *)(ppppppiVar28 + 0x12) = 0x636f6d70;
            *(int *)(pppppppiVar43 + 0x13) = 2;
            goto LAB_10976b730;
          }
code_r0x00010976b628:
          pppppppiVar18 = (int *******)0x12;
          pppppppiVar45 = pppppppiVar43;
          goto LAB_10976b730;
        }
        goto code_r0x000109769398;
      case 7:
        if (cVar8 != '\0') {
          pppppppiVar49 = pppppppiVar17;
          func_0x00010976bfac();
          pppppppiVar39[9][1] = (int *****)(long)(int)pppppppiVar49;
          pppppppiVar49 = pppppppiVar17;
          func_0x00010976bfac();
          *pppppppiVar39[9] = (int *****)(long)(int)pppppppiVar49;
          pppppppiVar18 = pppppppiVar17;
          func_0x00010976bfac();
          pppppppiVar40 = pppppppiVar17;
          func_0x00010976bfac();
          ppppppiVar28 = pppppppiVar39[8];
          *ppppppiVar28 = (int *****)(long)((int)pppppppiVar40 + *(int *)ppppppiVar28);
          ppppppiVar28[1] = (int *****)(long)((int)pppppppiVar18 + *(int *)(ppppppiVar28 + 1));
          cStack_1d1 = '\x01';
          pppppppiVar45 = pppppppiVar35;
          pppppppiVar48 = pppppppiVar24;
          pppppppiVar49 = pppppppiVar21;
          if (*(char *)((long)pppppppiVar39 + 0x5b) != '\0') goto code_r0x00010976b4b0;
          if (iVar14 == 0) goto code_r0x00010976aa38;
          uStack_198 = uStack_198 + (int)pppppppiVar18;
          uStack_194 = uStack_194 + (int)pppppppiVar40;
        }
      default:
        goto code_r0x000109769398;
      case 9:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar34 = pppppppiVar17[3];
        ppppppiVar28 = pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4);
        iVar14 = (int)pppppppiVar49;
        if (iVar14 == -0x80000000) {
code_r0x00010976a5a4:
          if (ppppppiVar34 == ppppppiVar28) goto code_r0x00010976a748;
          iVar36 = 0x7fffffff;
        }
        else {
          if (ppppppiVar34 == ppppppiVar28) goto code_r0x00010976a748;
          iVar36 = -iVar14;
          if (-1 < iVar14) {
            iVar36 = iVar14;
          }
        }
code_r0x00010976a718:
        *(int *)ppppppiVar34 = iVar36;
        ppppppiVar28 = pppppppiVar17[3];
        *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
        pppppppiVar17[3] = ppppppiVar28 + 1;
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar18;
        goto LAB_1097680d0;
      case 10:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          iVar36 = (int)pppppppiVar48 + (int)pppppppiVar49;
code_r0x00010976a2e4:
          *(int *)ppppppiVar28 = iVar36;
code_r0x00010976a2e8:
          ppppppiVar28 = pppppppiVar17[3];
          *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
          goto code_r0x00010976a494;
        }
        break;
      case 0xb:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          iVar36 = (int)pppppppiVar48 - (int)pppppppiVar49;
          goto code_r0x00010976a2e4;
        }
        break;
      case 0xc:
        if ((cVar8 == '\0') || (!bVar10)) {
          pppppppiVar49 = pppppppiVar17;
          func_0x00010976bfac();
          uVar50 = (uint)pppppppiVar49;
          pppppppiVar49 = pppppppiVar17;
          func_0x00010976bfac();
          uVar15 = (uint)pppppppiVar49;
        }
        else {
          pppppppiVar49 = pppppppiVar17;
          FUN_10976bc5c();
          uVar50 = (uint)pppppppiVar49;
          pppppppiVar49 = pppppppiVar17;
          FUN_10976bc5c();
          uVar15 = (uint)pppppppiVar49;
          bVar10 = false;
        }
        if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          ppppppiVar28 = pppppppiVar17[1];
          goto code_r0x00010976a4e0;
        }
        lVar30 = (long)(int)uVar15;
        uVar33 = (ulong)(int)uVar50;
        if (uVar50 == 0) {
          iVar36 = 0x7fffffff;
        }
        else {
          uVar32 = -uVar33;
          if (-1 < (long)uVar33) {
            uVar32 = uVar33;
          }
          lVar4 = -lVar30;
          if (-1 < lVar30) {
            lVar4 = lVar30;
          }
          iVar36 = 0;
          if (uVar32 != 0) {
            iVar36 = (int)((lVar4 * 0x10000 + (uVar32 >> 1)) / uVar32);
          }
        }
        iVar14 = -iVar36;
        if (-1 < (int)(uVar15 ^ uVar50)) {
          iVar14 = iVar36;
        }
        *(int *)pppppppiVar17[3] = iVar14;
        ppppppiVar28 = pppppppiVar17[3];
        *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
        pppppppiVar17[3] = ppppppiVar28 + 1;
        pppppppiVar45 = pppppppiVar38;
        pppppppiVar48 = pppppppiVar21;
        goto LAB_1097680d0;
      case 0xe:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar34 = pppppppiVar17[3];
        ppppppiVar28 = pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4);
        if ((int)pppppppiVar49 == -0x80000000) goto code_r0x00010976a5a4;
        if (ppppppiVar34 != ppppppiVar28) {
          iVar36 = -(int)pppppppiVar49;
          goto code_r0x00010976a718;
        }
code_r0x00010976a748:
        ppppppiVar28 = pppppppiVar17[1];
        pppppppiVar45 = pppppppiVar24;
        goto joined_r0x00010976a84c;
      case 0xf:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          bVar12 = (int)pppppppiVar48 == (int)pppppppiVar49;
          goto code_r0x00010976a484;
        }
        break;
      case 0x10:
        if (cVar8 != '\0') {
          pppppppiVar18 = pppppppiVar17;
          FUN_10976bc5c();
          pppppppiVar45 = pppppppiVar17;
          FUN_10976bc5c();
          ppppppiVar34 = pppppppiVar17[2];
          ppppppiVar28 = pppppppiVar17[3];
          uVar50 = (uint)pppppppiVar45;
          uVar15 = (uint)((ulong)((long)ppppppiVar28 - (long)ppppppiVar34) >> 3);
          iVar16 = uVar15 - uVar50;
          pppppppiVar45 = pppppppiVar2;
          if (uVar15 < uVar50) {
            pppppppiVar40 = (int *******)0x0;
            iVar16 = 0x12;
            goto code_r0x000109767f1c;
          }
          iStack_64d8 = (int)pppppppiVar18;
          switch((ulong)pppppppiVar18 & 0xffffffff) {
          case 0:
            if ((uVar50 == 3) &&
               ((iVar14 == 0 ||
                ((*(int *)(pppppppiVar39 + 0x74) != 0 &&
                 (*(int *)((long)pppppppiVar39 + 0x3a4) == 7)))))) {
              if (ppppppiVar28 == ppppppiVar34 + *(uint *)(pppppppiVar17 + 4)) {
                ppppppiVar31 = pppppppiVar17[1];
                if ((ppppppiVar31 != (int ******)0x0) && (*(int *)ppppppiVar31 == 0)) {
                  *(int *)ppppppiVar31 = 0x82;
                }
              }
              else {
                *(uint *)ppppppiVar28 = uStack_194;
                ppppppiVar28 = pppppppiVar17[3];
                *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
                ppppppiVar28 = ppppppiVar28 + 1;
                pppppppiVar17[3] = ppppppiVar28;
                ppppppiVar34 = pppppppiVar17[2];
              }
              if (ppppppiVar28 != ppppppiVar34 + *(uint *)(pppppppiVar17 + 4)) {
                *(uint *)ppppppiVar28 = uStack_198;
                ppppppiVar28 = pppppppiVar17[3];
                *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
                pppppppiVar17[3] = ppppppiVar28 + 1;
                iStack_64d8 = 2;
                goto code_r0x00010976b3c8;
              }
              ppppppiVar28 = pppppppiVar17[1];
              iStack_64d8 = 2;
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar26 = (int *******)0x0;
              iVar16 = iStack_64d8;
              if (ppppppiVar28 != (int ******)0x0) {
                pppppppiVar26 = (int *******)0x0;
                iStack_64d8 = 2;
                iVar16 = iStack_64d8;
                if (*(int *)ppppppiVar28 == 0) {
                  *(int *)ppppppiVar28 = 0x82;
                  iVar16 = 2;
code_r0x00010976b340:
                  pppppppiVar35 = (int *******)(ulong)uVar27;
                  pppppppiVar26 = (int *******)0x0;
                }
              }
              goto LAB_1097680d0;
            }
            break;
          case 1:
            if (uVar50 == 0) {
              iStack_64d8 = 0;
              pppppppiVar26 = (int *******)0x0;
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar11 = (int *******)0x0;
              iVar16 = iStack_64d8;
              if (iVar14 != 0) {
                ppppppiVar28 = pppppppiVar39[3];
                if ((*(uint *)(ppppppiVar28 + 1) <
                     (uint)*(ushort *)((long)ppppppiVar28 + 0x1a) +
                     (uint)*(ushort *)((long)ppppppiVar28 + 0x62) + 6) &&
                   (FUN_109753a7c(ppppppiVar28,6,0), (int)ppppppiVar28 != 0))
                goto code_r0x00010976b630;
                iStack_64d8 = 0;
                pppppppiVar39[0x74] = (int ******)0x1;
                pppppppiVar35 = (int *******)(ulong)uVar27;
                pppppppiVar26 = (int *******)0x0;
                pppppppiVar11 = pppppppiVar21;
                iVar16 = iStack_64d8;
              }
              goto LAB_1097680d0;
            }
            break;
          case 2:
            if (uVar50 == 0) {
              iStack_64d8 = 0;
              pppppppiVar26 = (int *******)0x0;
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar11 = (int *******)0x0;
              iVar16 = iStack_64d8;
              if (iVar14 == 0) goto LAB_1097680d0;
              if (*(int *)(pppppppiVar39 + 0x74) != 0) {
                iStack_64d8 = 0;
                uVar50 = *(uint *)((long)pppppppiVar39 + 0x3a4);
                *(uint *)((long)pppppppiVar39 + 0x3a4) = uVar50 + 1;
                pppppppiVar35 = (int *******)(ulong)uVar27;
                pppppppiVar26 = (int *******)0x0;
                pppppppiVar11 = pppppppiVar21;
                iVar16 = iStack_64d8;
                if (5 < uVar50 - 1) goto LAB_1097680d0;
                ppppppiVar28 = pppppppiVar39[3];
                if (((uint)*(ushort *)((long)ppppppiVar28 + 0x1a) +
                     (uint)*(ushort *)((long)ppppppiVar28 + 0x62) + 1 <= *(uint *)(ppppppiVar28 + 1)
                    ) || (FUN_109753a7c(ppppppiVar28,1,0), (int)ppppppiVar28 == 0)) {
                  iVar16 = uVar50 * 2 + -6;
                  if (uVar50 < 4) {
                    iVar16 = uVar50 * 2;
                  }
                  *(uint *)((long)&uStack_130 + (long)iVar16 * 4) = uStack_194;
                  *(uint *)((long)&uStack_130 + (long)iVar16 * 4 + 4) = uStack_198;
                  pppppppiVar35 = (int *******)(ulong)uVar27;
                  if (uVar50 != 6) {
                    pppppppiVar26 = (int *******)0x0;
                    iStack_64d8 = 0;
                    iVar16 = iStack_64d8;
                    if (uVar50 != 3) goto LAB_1097680d0;
                  }
                  FUN_10976c218(&pppiStack_4c00,uStack_128 & 0xffffffff,uStack_128._4_4_,
                                uStack_120 & 0xffffffff,uStack_120._4_4_,uStack_118 & 0xffffffff,
                                uStack_118._4_4_);
                  pppppppiVar35 = (int *******)(ulong)uVar27;
                  pppppppiVar26 = (int *******)0x0;
                  iStack_64d8 = 0;
                  pppppppiVar45 = (int *******)&UNK_10dff7790;
                  iVar16 = iStack_64d8;
                  goto LAB_1097680d0;
                }
              }
            }
            break;
          case 3:
            if (uVar50 == 1) {
              iStack_64d8 = 1;
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar26 = (int *******)0x0;
              pppppppiVar11 = (int *******)0x0;
              iVar16 = iStack_64d8;
              if (iVar14 != 0) {
                pppppppiVar26 = (int *******)0x0;
                lStack_228 = 0;
                lStack_1f0 = 0;
                uStack_148 = 0;
                uStack_138 = 0;
                uStack_140 = 0;
                uStack_130 = 0;
                pppppppiStack_158 = pppppppiVar2;
                uStack_150 = 0x100;
                pppppppiVar11 = pppppppiVar21;
              }
              goto LAB_1097680d0;
            }
            break;
          default:
            pppppppiVar18 = (int *******)0x12;
            if ((int)uVar50 < 0) goto LAB_10976b730;
            if (iStack_64d8 < 0) goto LAB_10976b730;
            iStack_64d8 = 0;
            uVar15 = uVar50;
            if (2 < uVar50) {
              uVar15 = 3;
            }
            pppppppiVar26 = (int *******)(ulong)uVar15;
            pppppppiVar35 = (int *******)(ulong)uVar27;
            iVar16 = iStack_64d8;
            if (uVar50 != 0) {
              lVar30 = (long)pppppppiVar26 << 2;
              do {
                pppppppiVar49 = pppppppiVar17;
                func_0x00010976bfac();
                *(int *)((long)&uStack_8c + lVar30) = (int)pppppppiVar49;
                lVar30 = lVar30 + -4;
              } while (lVar30 != 0);
              iStack_64d8 = 0;
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar45 = pppppppiVar26;
              iVar16 = iStack_64d8;
            }
            goto LAB_1097680d0;
          case 0xc:
          case 0xd:
            pppppppiVar26 = (int *******)0x0;
            iStack_64d8 = 0;
            pppppppiVar17[3] = ppppppiVar34;
            pppppppiVar35 = (int *******)(ulong)uVar27;
            iVar16 = iStack_64d8;
            goto LAB_1097680d0;
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
            ppppppiVar28 = pppppppiVar39[0x9b];
            if (ppppppiVar28 == (int ******)0x0) break;
            if (iStack_64d8 == 0x12) {
              iStack_64d8 = 0x13;
            }
            iStack_64d8 = iStack_64d8 + -0xd;
            if (uVar50 != *(uint *)ppppppiVar28 * iStack_64d8) break;
            iVar36 = 0;
            pppppppiVar49 = (int *******)(ulong)(uint)(iVar16 + iStack_64d8);
            do {
              pppppppiVar18 = pppppppiVar17;
              FUN_10976bf40(pppppppiVar17,iVar16);
              pppppppiVar45 = pppppppiVar49;
              if (1 < *(uint *)ppppppiVar28) {
                uVar33 = 1;
                do {
                  pppppppiVar48 = pppppppiVar17;
                  FUN_10976bf40(pppppppiVar17,(int)pppppppiVar49 + (int)uVar33 + -1);
                  lVar30 = (long)ppppppiVar28[0x21][uVar33] * (long)(int)pppppppiVar48;
                  pppppppiVar18 =
                       (int *******)
                       (ulong)(uint)((int)pppppppiVar18 +
                                    (int)((ulong)(lVar30 + (lVar30 >> 0x3f) + 0x8000) >> 0x10));
                  uVar33 = uVar33 + 1;
                } while (uVar33 < *(uint *)ppppppiVar28);
                pppppppiVar45 = (int *******)(ulong)(((int)pppppppiVar49 + (int)uVar33) - 1);
                pppppppiVar48 = pppppppiVar49;
              }
              FUN_10976c658(pppppppiVar17,iVar16,pppppppiVar18);
              iVar36 = iVar36 + 1;
              pppppppiVar49 = pppppppiVar45;
              iVar16 = iVar16 + 1;
            } while (iVar36 != iStack_64d8);
            if (uVar50 - iStack_64d8 <=
                (uint)((ulong)((long)pppppppiVar17[3] - (long)pppppppiVar17[2]) >> 3)) {
              pppppppiVar17[3] = pppppppiVar17[3] + -(ulong)(uVar50 - iStack_64d8);
              goto code_r0x00010976b3c8;
            }
            ppppppiVar28 = pppppppiVar17[1];
            pppppppiVar35 = (int *******)(ulong)uVar27;
            pppppppiVar26 = (int *******)0x0;
            iVar16 = iStack_64d8;
            if ((ppppppiVar28 != (int ******)0x0) &&
               (pppppppiVar26 = (int *******)0x0, *(int *)ppppppiVar28 == 0)) {
              pppppppiVar26 = (int *******)0x0;
              iVar16 = 0xa1;
              goto code_r0x00010976a980;
            }
            goto LAB_1097680d0;
          case 0x13:
            pppppppiVar18 = (int *******)0x12;
            if (uVar50 != 1) goto LAB_10976b730;
            ppppppiVar28 = pppppppiVar39[0x9b];
            if (ppppppiVar28 == (int ******)0x0) goto LAB_10976b730;
            uVar50 = *(uint *)(pppppppiVar39 + 0x9d);
            pppppppiVar40 = pppppppiVar17;
            FUN_10976bc5c();
            uVar15 = *(uint *)ppppppiVar28;
            pppppppiVar18 = (int *******)0x12;
            if (uVar50 < uVar15) goto LAB_10976b730;
            if (uVar50 - uVar15 < (uint)pppppppiVar40) goto LAB_10976b730;
            iStack_64d8 = 0;
            pppppppiVar35 = (int *******)(ulong)uVar27;
            pppppppiVar26 = (int *******)0x0;
            iVar16 = iStack_64d8;
            if (pppppppiVar39[0x9c] != (int ******)0x0) {
              pppppppiVar26 = (int *******)0x0;
              iStack_64d8 = 0;
              iVar16 = iStack_64d8;
              if (ppppppiVar28[0x21] != (int *****)0x0) {
                _memcpy(pppppppiVar39[0x9c] + ((ulong)pppppppiVar40 & 0xffffffff),ppppppiVar28[0x21]
                        ,(ulong)uVar15 << 3);
                pppppppiVar35 = (int *******)(ulong)uVar27;
                pppppppiVar26 = (int *******)0x0;
                iStack_64d8 = 0;
                pppppppiVar45 = (int *******)&UNK_10dff7790;
                iVar16 = iStack_64d8;
              }
            }
            goto LAB_1097680d0;
          case 0x14:
            if (uVar50 == 2) {
              pppppppiVar49 = pppppppiVar17;
              func_0x00010976bfac();
              pppppppiVar18 = pppppppiVar17;
              func_0x00010976bfac();
              ppppppiVar28 = pppppppiVar17[3];
              if (ppppppiVar28 == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4))
              goto code_r0x00010976b2d8;
              iVar16 = (int)pppppppiVar18 + (int)pppppppiVar49;
code_r0x00010976ac28:
              *(int *)ppppppiVar28 = iVar16;
code_r0x00010976b2b8:
              ppppppiVar28 = pppppppiVar17[3];
              *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
              pppppppiVar17[3] = ppppppiVar28 + 1;
              iStack_64d8 = 1;
code_r0x00010976b3c8:
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar26 = (int *******)0x0;
              iVar16 = iStack_64d8;
              goto LAB_1097680d0;
            }
            break;
          case 0x15:
            if (uVar50 == 2) {
              pppppppiVar49 = pppppppiVar17;
              func_0x00010976bfac();
              pppppppiVar18 = pppppppiVar17;
              func_0x00010976bfac();
              ppppppiVar28 = pppppppiVar17[3];
              if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
                iVar16 = (int)pppppppiVar18 - (int)pppppppiVar49;
                goto code_r0x00010976ac28;
              }
code_r0x00010976b2d8:
              ppppppiVar28 = pppppppiVar17[1];
              iStack_64d8 = 1;
              pppppppiVar35 = (int *******)(ulong)uVar27;
              pppppppiVar26 = (int *******)0x0;
              iVar16 = iStack_64d8;
              if (ppppppiVar28 != (int ******)0x0) {
                pppppppiVar26 = (int *******)0x0;
                iStack_64d8 = 1;
                iVar16 = iStack_64d8;
                if (*(int *)ppppppiVar28 == 0) {
                  *(int *)ppppppiVar28 = 0x82;
                  iVar16 = 1;
                  goto code_r0x00010976b340;
                }
              }
              goto LAB_1097680d0;
            }
            break;
          case 0x16:
            if (uVar50 == 2) {
              pppppppiVar49 = pppppppiVar17;
              func_0x00010976bfac();
              pppppppiVar18 = pppppppiVar17;
              func_0x00010976bfac();
              ppppppiVar28 = pppppppiVar17[3];
              if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
                uVar13 = (undefined4)
                         ((ulong)(((long)(int)pppppppiVar18 * (long)(int)pppppppiVar49 >> 0x3f) +
                                  (long)(int)pppppppiVar18 * (long)(int)pppppppiVar49 + 0x8000) >>
                         0x10);
code_r0x00010976b2b4:
                *(undefined4 *)ppppppiVar28 = uVar13;
                goto code_r0x00010976b2b8;
              }
              goto code_r0x00010976b2d8;
            }
            break;
          case 0x17:
            if (uVar50 != 2) break;
            pppppppiVar40 = pppppppiVar17;
            func_0x00010976bfac();
            pppppppiVar49 = pppppppiVar17;
            func_0x00010976bfac();
            uVar50 = (uint)pppppppiVar40;
            if (uVar50 != 0) {
              if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4))
              goto code_r0x00010976b2d8;
              lVar30 = (long)(int)(uint)pppppppiVar49;
              uVar32 = (ulong)(int)uVar50;
              uVar33 = -uVar32;
              if (-1 < (long)uVar32) {
                uVar33 = uVar32;
              }
              lVar4 = -lVar30;
              if (-1 < lVar30) {
                lVar4 = lVar30;
              }
              iVar16 = 0;
              if (uVar33 != 0) {
                iVar16 = (int)((lVar4 * 0x10000 + (uVar33 >> 1)) / uVar33);
              }
              iVar36 = -iVar16;
              if (-1 < (int)((uint)pppppppiVar49 ^ uVar50)) {
                iVar36 = iVar16;
              }
              *(int *)pppppppiVar17[3] = iVar36;
              ppppppiVar28 = pppppppiVar17[3];
              *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
              pppppppiVar17[3] = ppppppiVar28 + 1;
              iStack_64d8 = 1;
              goto code_r0x00010976b3c8;
            }
            goto code_r0x00010976b888;
          case 0x18:
            pppppppiVar18 = (int *******)0x12;
            if (uVar50 != 2) goto LAB_10976b730;
            if (pppppppiVar39[0x9b] == (int ******)0x0) goto LAB_10976b730;
            pppppppiVar49 = pppppppiVar17;
            FUN_10976bc5c();
            if ((uint)pppppppiVar49 < *(uint *)(pppppppiVar39 + 0x9d)) {
              pppppppiVar18 = pppppppiVar17;
              func_0x00010976bfac();
              iStack_64d8 = 0;
              pppppppiVar39[0x9c][(ulong)pppppppiVar49 & 0xffffffff] =
                   (int *****)(long)(int)pppppppiVar18;
              goto code_r0x00010976b3c8;
            }
            break;
          case 0x19:
            pppppppiVar18 = (int *******)0x12;
            if (uVar50 != 1) goto LAB_10976b730;
            if (pppppppiVar39[0x9b] == (int ******)0x0) goto LAB_10976b730;
            pppppppiVar49 = pppppppiVar17;
            FUN_10976bc5c();
            if ((uint)pppppppiVar49 < *(uint *)(pppppppiVar39 + 0x9d)) {
              ppppppiVar28 = pppppppiVar17[3];
              if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
                uVar13 = SUB84(pppppppiVar39[0x9c][(ulong)pppppppiVar49 & 0xffffffff],0);
                goto code_r0x00010976b2b4;
              }
              goto code_r0x00010976b2d8;
            }
            break;
          case 0x1b:
            if (uVar50 == 4) {
              pppppppiVar49 = pppppppiVar17;
              func_0x00010976bfac();
              pppppppiVar18 = pppppppiVar17;
              func_0x00010976bfac();
              pppppppiVar45 = pppppppiVar17;
              func_0x00010976bfac();
              pppppppiVar40 = pppppppiVar17;
              func_0x00010976bfac();
              ppppppiVar28 = pppppppiVar17[3];
              if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
                iVar16 = (int)pppppppiVar45;
                if ((int)pppppppiVar18 <= (int)pppppppiVar49) {
                  iVar16 = (int)pppppppiVar40;
                }
                goto code_r0x00010976ac28;
              }
              goto code_r0x00010976b2d8;
            }
            break;
          case 0x1c:
            if (uVar50 == 0) {
              uVar15 = *(uint *)(pppppppiVar39[0x84] + 0x98);
              uVar50 = uVar15 ^ uVar15 << 0xd;
              uVar50 = uVar50 ^ uVar50 >> 0x11;
              *(uint *)(pppppppiVar39[0x84] + 0x98) = uVar50 ^ uVar50 << 5;
              if (ppppppiVar28 == ppppppiVar34 + *(uint *)(pppppppiVar17 + 4))
              goto code_r0x00010976b2d8;
              *(uint *)ppppppiVar28 = (uVar15 & 0xffff) + 1;
              ppppppiVar28 = pppppppiVar17[3];
              *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
              pppppppiVar17[3] = ppppppiVar28 + 1;
              iStack_64d8 = 1;
              goto code_r0x00010976b3c8;
            }
          }
code_r0x00010976b884:
          pppppppiVar40 = (int *******)0x0;
code_r0x00010976b888:
          pppppppiVar49 = (int *******)0xb;
          pppppppiVar18 = (int *******)0x12;
          goto LAB_109767f18;
        }
        goto LAB_1097680d0;
      case 0x11:
        if ((cVar8 != '\0') && (iVar16 = iStack_64d8 + -1, iStack_64d8 < 1)) {
          if (iVar36 == 0) goto code_r0x00010976b884;
          pppppppiVar26 = (int *******)((long)iVar36 + -1);
          if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
            ppppppiVar28 = pppppppiVar17[1];
            iVar16 = iStack_64d8;
            if (ppppppiVar28 != (int ******)0x0) {
              iVar36 = *(int *)ppppppiVar28;
              goto joined_r0x00010976ab08;
            }
          }
          else {
            *(undefined4 *)pppppppiVar17[3] =
                 *(undefined4 *)((long)&uStack_88 + (long)pppppppiVar26 * 4);
            ppppppiVar28 = pppppppiVar17[3];
            *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
            pppppppiVar17[3] = ppppppiVar28 + 1;
            iVar16 = iStack_64d8;
          }
        }
        goto LAB_1097680d0;
      case 0x12:
        func_0x00010976bfac(pppppppiVar17);
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar18;
        goto LAB_1097680d0;
      case 0x14:
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bc5c();
        pppppppiVar18 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar45 = pppppppiVar38;
        pppppppiVar48 = pppppppiVar21;
        if ((uint)pppppppiVar49 < 0x20) {
          *(int *)((long)&uStack_110 + ((ulong)pppppppiVar49 & 0xffffffff) * 4) = (int)pppppppiVar18
          ;
        }
        goto LAB_1097680d0;
      case 0x15:
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bc5c();
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar18;
        if ((uint)pppppppiVar49 < 0x20) {
          if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4))
          goto code_r0x00010976a964;
          *(undefined4 *)pppppppiVar17[3] =
               *(undefined4 *)((long)&uStack_110 + ((ulong)pppppppiVar49 & 0xffffffff) * 4);
          goto code_r0x00010976a94c;
        }
        goto LAB_1097680d0;
      case 0x16:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar45 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar18 = pppppppiVar17;
        func_0x00010976bfac();
        if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          ppppppiVar28 = pppppppiVar17[1];
          pppppppiVar18 = pppppppiVar24;
          goto joined_r0x00010976a84c;
        }
        uVar13 = SUB84(pppppppiVar45,0);
        if ((int)pppppppiVar48 <= (int)pppppppiVar49) {
          uVar13 = SUB84(pppppppiVar18,0);
        }
        *(undefined4 *)pppppppiVar17[3] = uVar13;
        ppppppiVar28 = pppppppiVar17[3];
        *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
        pppppppiVar17[3] = ppppppiVar28 + 1;
        pppppppiVar48 = pppppppiVar24;
        goto LAB_1097680d0;
      case 0x17:
        uVar27 = *(uint *)(pppppppiVar39[0x84] + 0x98);
        uVar50 = uVar27 ^ uVar27 << 0xd;
        uVar50 = uVar50 ^ uVar50 >> 0x11;
        *(uint *)(pppppppiVar39[0x84] + 0x98) = uVar50 ^ uVar50 << 5;
        if (pppppppiVar17[3] != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          *(uint *)pppppppiVar17[3] = (uVar27 & 0xffff) + 1;
          goto code_r0x000109769af8;
        }
        goto code_r0x00010976a410;
      case 0x18:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        if (pppppppiVar17[3] != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          *(int *)pppppppiVar17[3] =
               (int)((ulong)(((long)(int)pppppppiVar48 * (long)(int)pppppppiVar49 >> 0x3f) +
                             (long)(int)pppppppiVar48 * (long)(int)pppppppiVar49 + 0x8000) >> 0x10);
          goto code_r0x00010976a2e8;
        }
        break;
      case 0x1a:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        if ((int)pppppppiVar49 < 1) {
          uVar50 = 0;
        }
        else {
          uVar15 = 1 << (ulong)(0x30U - (int)LZCOUNT((int)pppppppiVar49) >> 1 & 0x1f);
          do {
            uVar50 = uVar15;
            iVar36 = 0;
            if ((ulong)uVar50 != 0) {
              iVar36 = (int)((((ulong)pppppppiVar49 & 0xffffffff) * 0x10000 - 1) / (ulong)uVar50);
            }
            uVar15 = uVar50 + iVar36 + 1 >> 1;
          } while (uVar15 != uVar50);
        }
        if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          ppppppiVar28 = pppppppiVar17[1];
          pppppppiVar45 = pppppppiVar24;
          goto joined_r0x00010976a84c;
        }
        *(uint *)pppppppiVar17[3] = uVar50;
        ppppppiVar28 = pppppppiVar17[3];
        *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
        pppppppiVar17[3] = ppppppiVar28 + 1;
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar18;
        goto LAB_1097680d0;
      case 0x1b:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        uVar13 = SUB84(pppppppiVar49,0);
        ppppppiVar34 = pppppppiVar17[2];
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 == ppppppiVar34 + *(uint *)(pppppppiVar17 + 4)) {
          ppppppiVar31 = pppppppiVar17[1];
          pppppppiVar45 = pppppppiVar24;
          if ((ppppppiVar31 != (int ******)0x0) && (*(int *)ppppppiVar31 == 0)) {
            *(int *)ppppppiVar31 = 0x82;
          }
        }
        else {
          *(undefined4 *)ppppppiVar28 = uVar13;
          ppppppiVar28 = pppppppiVar17[3];
          *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
          ppppppiVar28 = ppppppiVar28 + 1;
          pppppppiVar17[3] = ppppppiVar28;
          ppppppiVar34 = pppppppiVar17[2];
          pppppppiVar45 = pppppppiVar24;
        }
        goto code_r0x00010976a92c;
      case 0x1c:
        pppppppiVar49 = pppppppiVar17;
        func_0x00010976bfac();
        pppppppiVar48 = pppppppiVar17;
        func_0x00010976bfac();
        uVar13 = SUB84(pppppppiVar48,0);
        ppppppiVar34 = pppppppiVar17[2];
        ppppppiVar28 = pppppppiVar17[3];
        pppppppiVar18 = pppppppiVar21;
        if (ppppppiVar28 == ppppppiVar34 + *(uint *)(pppppppiVar17 + 4)) {
          ppppppiVar31 = pppppppiVar17[1];
          pppppppiVar45 = pppppppiVar38;
          if ((ppppppiVar31 != (int ******)0x0) && (*(int *)ppppppiVar31 == 0)) {
            *(int *)ppppppiVar31 = 0x82;
          }
        }
        else {
          *(int *)ppppppiVar28 = (int)pppppppiVar49;
          ppppppiVar28 = pppppppiVar17[3];
          *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
          ppppppiVar28 = ppppppiVar28 + 1;
          pppppppiVar17[3] = ppppppiVar28;
          ppppppiVar34 = pppppppiVar17[2];
          pppppppiVar45 = pppppppiVar38;
        }
code_r0x00010976a92c:
        if (ppppppiVar28 == ppppppiVar34 + *(uint *)(pppppppiVar17 + 4)) {
code_r0x00010976a964:
          ppppppiVar28 = pppppppiVar17[1];
joined_r0x00010976a84c:
          pppppppiVar48 = pppppppiVar18;
          if (ppppppiVar28 != (int ******)0x0) {
            iVar36 = *(int *)ppppppiVar28;
            goto joined_r0x00010976ab08;
          }
        }
        else {
          *(undefined4 *)ppppppiVar28 = uVar13;
code_r0x00010976a94c:
          ppppppiVar28 = pppppppiVar17[3];
          *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
          pppppppiVar17[3] = ppppppiVar28 + 1;
          pppppppiVar48 = pppppppiVar18;
        }
        goto LAB_1097680d0;
      case 0x1d:
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bc5c();
        uVar50 = (uint)((ulong)((long)pppppppiVar17[3] - (long)pppppppiVar17[2]) >> 3);
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar2;
        if (uVar50 != 0) {
          uVar15 = (uint)pppppppiVar49;
          if ((int)uVar15 < 0) {
            iVar36 = uVar50 - 1;
          }
          else if (uVar15 < uVar50) {
            iVar36 = uVar50 + ~uVar15;
          }
          else {
            iVar36 = 0;
          }
          pppppppiVar49 = pppppppiVar17;
          FUN_10976bf40(pppppppiVar17,iVar36);
          if (pppppppiVar17[3] == pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
            ppppppiVar28 = pppppppiVar17[1];
            pppppppiVar18 = pppppppiVar2;
joined_r0x00010976aab8:
            pppppppiVar45 = pppppppiVar24;
            pppppppiVar48 = pppppppiVar18;
            if (ppppppiVar28 != (int ******)0x0) {
              iVar36 = *(int *)ppppppiVar28;
              goto joined_r0x00010976ab08;
            }
          }
          else {
            *(int *)pppppppiVar17[3] = (int)pppppppiVar49;
            ppppppiVar28 = pppppppiVar17[3];
            *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
            pppppppiVar17[3] = ppppppiVar28 + 1;
          }
        }
        goto LAB_1097680d0;
      case 0x1e:
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bc5c(pppppppiVar17);
        pppppppiVar48 = pppppppiVar17;
        FUN_10976bc5c(pppppppiVar17);
        FUN_10976c72c(pppppppiVar17,pppppppiVar48,pppppppiVar49);
        pppppppiVar45 = pppppppiVar38;
        pppppppiVar48 = pppppppiVar21;
        goto LAB_1097680d0;
      case 0x21:
        if ((cVar8 != '\0') && (iVar14 != 0)) {
          pppppppiVar49 = pppppppiVar17;
          func_0x00010976bfac();
          uStack_198 = (uint)pppppppiVar49;
          pppppppiVar49 = pppppppiVar17;
          func_0x00010976bfac();
          uStack_194 = (uint)pppppppiVar49;
          *(int *)(pppppppiVar39 + 0x74) = 0;
          pppppppiVar45 = pppppppiVar24;
          pppppppiVar48 = (int *******)&pppppppiStack_248;
        }
        goto code_r0x000109769398;
      }
      ppppppiVar28 = pppppppiVar17[1];
code_r0x00010976a4e0:
      pppppppiVar45 = pppppppiVar38;
      pppppppiVar48 = pppppppiVar21;
      if (ppppppiVar28 != (int ******)0x0) {
        iVar36 = *(int *)ppppppiVar28;
joined_r0x00010976ab08:
        iVar16 = iStack_64d8;
        if (iVar36 == 0) {
          iVar16 = 0x82;
code_r0x00010976a980:
          pppppppiVar35 = (int *******)(ulong)uVar27;
          *(int *)ppppppiVar28 = iVar16;
          iVar16 = iStack_64d8;
        }
      }
      goto LAB_1097680d0;
    }
    if (0x22 < bVar9) {
      if (uVar50 == 0x23) {
        FUN_10976c478(pppppppiVar17,&uStack_194,&uStack_198,&pppiStack_4c00,&UNK_10dff7944,0);
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar18;
        break;
      }
      if (uVar50 == 0x24) {
        puVar22 = &UNK_10dff7950;
code_r0x000109769924:
        uVar25 = 0;
      }
      else {
        if (uVar50 != 0x25) goto code_r0x000109769624;
        puVar22 = &UNK_10dff795c;
        uVar25 = 1;
      }
      FUN_10976c478(pppppppiVar17,&uStack_194,&uStack_198,&pppiStack_4c00,puVar22,uVar25);
      pppppppiVar45 = pppppppiVar24;
      pppppppiVar48 = pppppppiVar18;
      goto LAB_1097680d0;
    }
    if (1 < uVar50 - 0x1f) {
      if (uVar50 == 0x22) {
        puVar22 = &UNK_10dff7938;
        goto code_r0x000109769924;
      }
      goto code_r0x000109769624;
    }
    break;
  case 0xd:
    if (cVar8 != '\0') {
      pppppppiVar49 = pppppppiVar17;
      func_0x00010976bfac();
      ppppppiVar28 = pppppppiVar39[9];
      *ppppppiVar28 = (int *****)(long)(int)pppppppiVar49;
      ppppppiVar28[1] = (int *****)0x0;
      pppppppiVar40 = pppppppiVar17;
      func_0x00010976bfac();
      *pppppppiVar39[8] = (int *****)(long)((int)pppppppiVar40 + *(int *)pppppppiVar39[8]);
      cStack_1d1 = '\x01';
      pppppppiVar45 = pppppppiVar38;
      pppppppiVar48 = pppppppiVar21;
      pppppppiVar49 = pppppppiVar18;
      if (*(char *)((long)pppppppiVar39 + 0x5b) != '\0') goto code_r0x00010976b540;
      if (iVar14 == 0) {
code_r0x00010976aa38:
        cStack_1d1 = '\x01';
      }
      else {
        uStack_194 = uStack_194 + (int)pppppppiVar40;
      }
    }
    break;
  case 0xe:
    if ((cVar8 == '\0') || (iVar14 != 0)) {
      iVar16 = (int)((ulong)((long)pppppppiVar17[3] - (long)pppppppiVar17[2]) >> 3);
      if (((iVar16 == 1) || (iVar16 == 5)) && (cStack_1d1 == '\0')) {
        pppppppiVar45 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,0);
        *param_8 = (int)pppppppiVar45 + iVar5;
      }
      cStack_1d1 = '\x01';
      pppppppiVar45 = pppppppiVar43;
      if (((*(char *)(pppppppiVar39 + 0x87) != '\0') ||
          (FUN_10976c3f8(&pppiStack_4c00), *(char *)((long)param_1 + 0xd) != '\0')) ||
         (*(char *)((long)param_1 + 0xc) != '\0')) {
        pppppppiVar40 = (int *******)0x0;
        iVar16 = 0;
        goto code_r0x000109767f1c;
      }
      if (((long)pppppppiVar17[3] - (long)pppppppiVar17[2] & 0x7fffffff0U) != 0) {
        if (param_5 == 0) {
          pppppppiVar43 = pppppppiVar17;
          FUN_10976bc5c(pppppppiVar17);
          pppppppiVar40 = pppppppiVar17;
          FUN_10976bc5c(pppppppiVar17);
          pppppppiVar35 = pppppppiVar17;
          func_0x00010976bfac();
          uStack_198 = (uint)pppppppiVar35;
          pppppppiVar45 = pppppppiVar17;
          func_0x00010976bfac();
          uStack_194 = (uint)pppppppiVar45;
          pppppppiVar18 = pppppppiVar39;
          FUN_10976c7dc(pppppppiVar39,pppppppiVar43,&pppiStack_6440);
          if ((int)pppppppiVar18 != 0) goto LAB_10976b730;
          FUN_109767bf0(param_1,&pppiStack_6440,param_3,param_4,1,pppppppiVar45,pppppppiVar35,
                        &pppppppiStack_190);
          (*(code *)pppppppiVar39[0x90])
                    (pppppppiVar39[1],&ppppiStack_6438,
                     (long)pppppppiStack_6430 - (long)ppppiStack_6438);
          pppppppiVar18 = pppppppiVar39;
          FUN_10976c7dc(pppppppiVar39,pppppppiVar40,&pppiStack_6440);
          if ((int)pppppppiVar18 != 0) goto LAB_10976b730;
          FUN_109767bf0(param_1,&pppiStack_6440,param_3,param_4,1,0,0,&pppppppiStack_190);
          (*(code *)pppppppiVar39[0x90])
                    (pppppppiVar39[1],&ppppiStack_6438,
                     (long)pppppppiStack_6430 - (long)ppppiStack_6438);
          pppppppiVar18 = (int *******)0x0;
          goto LAB_10976b730;
        }
        goto code_r0x00010976b628;
      }
code_r0x00010976b630:
      pppppppiVar49 = (int *******)0xb;
      pppppppiVar40 = (int *******)0x0;
      pppppppiVar18 = (int *******)0x0;
      goto LAB_109767f18;
    }
    FUN_10976c014(&pppiStack_4c00,uStack_194,uStack_198);
    lStack_228 = 0;
    lStack_1f0 = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_130 = 0;
    pppppppiStack_158 = pppppppiVar2;
    uStack_150 = 0x100;
    if (0 < iVar36) {
      uVar33 = (long)pppppppiVar38 + 1;
      do {
        pppppppiVar48 = (int *******)(uVar33 - 2);
        pppppppiVar49 = pppppppiVar48;
        if (pppppppiStack_1b0 <= pppppppiVar48) {
          pppppppiVar49 = (int *******)0x0;
        }
        if (pppppppiStack_1b0 <= pppppppiVar48 && pppppppiStack_1c8 != (int *******)0x0) {
          if (*(int *)pppppppiStack_1c8 == 0) {
            pppppppiVar49 = (int *******)0x0;
            *(int *)pppppppiStack_1c8 = 0x82;
          }
          else {
            pppppppiVar49 = (int *******)0x0;
          }
        }
        uVar33 = uVar33 - 1;
      } while (1 < uVar33);
      pppppppiVar38 = (int *******)0x0;
      pppppppiVar23 = (int *******)((long)pppppppiStack_1a0 + (long)pppppppiVar49 * lStack_1c0);
    }
    pppppppiVar23[3] = pppppppiVar23[1];
    pppppppiVar21 = (int *******)0x1;
    pppppppiVar45 = pppppppiVar24;
    pppppppiVar48 = pppppppiVar18;
    break;
  case 0xf:
    if (*(char *)((long)param_1 + 0xd) != '\0') {
      if (*(char *)((long)param_1 + 0x61) != '\0') goto code_r0x00010976b48c;
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bc5c();
      pppppppiVar45 = pppppppiVar24;
      pppppppiVar48 = pppppppiVar18;
      if (-1 < (int)pppppppiVar49) {
        *(int *)(param_1 + 0x12) = (int)pppppppiVar49;
      }
    }
    break;
  case 0x10:
    if (*(char *)((long)param_1 + 0xd) != '\0') {
      if (param_1[0xd] == (int **)0x0) goto code_r0x00010976b48c;
      pppiVar19 = param_1 + 0xc;
      (*(code *)param_1[0x51][3])
                (pppiVar19,*(undefined4 *)(param_1 + 0x12),*(undefined4 *)((long)param_1 + 0x94),
                 param_1[0x13]);
      if ((int)pppiVar19 != 0) {
        pppppppiVar18 = (int *******)(param_1 + 0xc);
        (*(code *)param_1[0x51][4])
                  (pppppppiVar18,*(undefined4 *)(param_1 + 0x12),
                   *(undefined4 *)((long)param_1 + 0x94),param_1[0x13]);
        pppppppiVar48 = pppppppiVar2;
        if ((int)pppppppiVar18 != 0) goto code_r0x00010976b5c8;
      }
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bc5c();
      if ((uint)pppppppiVar49 <= uVar44) {
        FUN_10976bcc8(param_1 + 0xc,pppppppiVar17,pppppppiVar49);
        *(undefined1 *)((long)param_1 + 0x61) = 1;
        pppppppiVar45 = pppppppiVar24;
        pppppppiVar48 = pppppppiVar2;
        goto LAB_1097680d0;
      }
      pppppppiVar18 = (int *******)0x12;
      pppppppiVar48 = pppppppiVar2;
code_r0x00010976b5c8:
      pppppppiVar40 = (int *******)0x0;
      pppppppiVar45 = pppppppiVar24;
      pppppppiVar49 = pppppppiVar26;
LAB_109767f18:
      while( true ) {
        iVar16 = (int)pppppppiVar18;
code_r0x000109767f1c:
        if (*(int *)pppppppiVar2 == 0) {
LAB_109767f24:
          *(int *)pppppppiVar2 = iVar16;
        }
LAB_109767f7c:
        pppppppiVar35 = (int *******)&pppppppiStack_248;
        if (lStack_348 != 0) {
          (*(code *)pppppppiStack_378[2])();
        }
        lStack_348 = 0;
        lStack_228 = 0;
        uStack_220 = 0;
        uStack_230 = 0;
        if (lStack_218 != 0) {
          (*(code *)pppppppiStack_248[2])();
        }
        iVar16 = (int)&pppppppiStack_1d0;
        lStack_218 = 0;
        lStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_1f8 = 0;
        if (lStack_1e0 != 0) {
          (*(code *)pppppppiStack_210[2])();
        }
        lStack_1e0 = 0;
        pppppppiStack_1b0 = (int *******)0x0;
        uStack_1a8 = 0;
        uStack_1b8 = 0;
        if (pppppppiStack_1a0 != (int *******)0x0) {
          (*(code *)pppppppiStack_1d0[2])();
        }
        pppppppiStack_1a0 = (int *******)0x0;
        if (((ulong)pppppppiVar40 & 1) == 0) {
          pppppppiVar40 = (int *******)*pppppppiVar17;
          if (pppppppiVar17[2] != (int ******)0x0) {
            (*(code *)pppppppiVar40[2])(pppppppiVar40);
          }
          pppppppiVar17[2] = (int ******)0x0;
          (*(code *)pppppppiVar40[2])(pppppppiVar40,pppppppiVar17);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) break;
        ___stack_chk_fail();
code_r0x00010976b8b8:
        func_0x000109753d08(pppppppiStack_64b8[3]);
        ppppiStack_6438 = pppppppiStack_64b8[1][0x52][(ulong)pppppppiVar40 & 0xffffffff];
        pppiStack_6440 = (int ***)0x0;
        pppppppiStack_6430 =
             (int *******)
             ((long)ppppiStack_6438 +
             (ulong)*(uint *)((long)pppppppiStack_64b8[1][0x53] +
                             ((ulong)pppppppiVar40 & 0xffffffff) * 4));
        pppppiStack_188 = pppppppiStack_64b8[8][1];
        pppppppiStack_190 = (int *******)*pppppppiStack_64b8[8];
        pppppiStack_4c08 = pppppppiStack_64b8[9][1];
        pppppiStack_4c10 = *pppppppiStack_64b8[9];
        uStack_6428 = ppppiStack_6438;
        FUN_109767bf0(pppiStack_64a8,&pppiStack_6440,param_3,param_4,1,0,0,auStack_4c14);
        ppppppiVar28 = pppppppiStack_64b8[8];
        if (*(char *)((long)pppppppiVar49 + 0x77) == '\0') {
          pppppiStack_188 = ppppppiVar28[1];
          pppppppiStack_190 = (int *******)*ppppppiVar28;
          pppppiStack_4c08 = pppppppiStack_64b8[9][1];
          pppppiStack_4c10 = *pppppppiStack_64b8[9];
        }
        *ppppppiVar28 = (int *****)0x0;
        ppppppiVar28[1] = (int *****)0x0;
        ppppiStack_6438 = pppppppiStack_64b8[1][0x52][(ulong)pppppppiVar48 & 0xffffffff];
        pppiStack_6440 = (int ***)0x0;
        pppppppiStack_6430 =
             (int *******)
             ((long)ppppiStack_6438 +
             (ulong)*(uint *)((long)pppppppiStack_64b8[1][0x53] +
                             ((ulong)pppppppiVar48 & 0xffffffff) * 4));
        uStack_6428 = ppppiStack_6438;
        FUN_109767bf0(pppiStack_64a8,&pppiStack_6440,param_3,param_4,1,(int)pppppppiVar45 - iVar16,
                      pppppppiVar35,auStack_4c14);
        pppppppiVar18 = (int *******)0x0;
        ppppppiVar28 = pppppppiStack_64b8[8];
        ppppppiVar28[1] = pppppiStack_188;
        *ppppppiVar28 = (int *****)pppppppiStack_190;
        ppppppiVar28 = pppppppiStack_64b8[9];
        ppppppiVar28[1] = pppppiStack_4c08;
        *ppppppiVar28 = pppppiStack_4c10;
LAB_10976b730:
        pppppppiVar40 = (int *******)0x0;
        pppppppiVar17 = pppppppiStack_6448;
      }
      return;
    }
    break;
  case 0x13:
  case 0x14:
    if ((((long)pppppppiVar17[3] - (long)pppppppiVar17[2] & 0x7fffffff0U) == 0) ||
       ((char)uStack_150 == '\0')) {
      FUN_10976be3c(param_1,pppppppiVar17,&pppppppiStack_248,param_8,&cStack_1d1,0);
      pppppppiVar45 = pppppppiVar24;
      pppppppiVar48 = pppppppiVar18;
      pppppppiVar49 = pppppppiVar26;
      if (*(char *)(pppppppiVar39 + 0x87) != '\0') {
code_r0x00010976b4b0:
        iVar16 = 0;
code_r0x00010976b524:
        pppppppiVar40 = (int *******)0x0;
        goto code_r0x000109767f1c;
      }
      if (uVar50 == 0x13) {
        FUN_10976c8a4(&pppppppiStack_158,pppppppiVar24,lStack_228 + lStack_1f0);
      }
      else {
        _bzero(&uStack_6428,0x1810);
        uStack_6428._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x20),(undefined1)uStack_6428);
        uStack_6428 = (int ****)CONCAT44(uVar6,(undefined4)uStack_6428);
        uStack_180 = 0;
        pppppiStack_188 = (int *****)0x0;
        uStack_170 = 0;
        uStack_178 = 0;
        uStack_168 = 0;
        pppiStack_6440 = param_1;
        ppppiStack_6438 = &pppiStack_1ba0;
        pppppppiStack_6430 = (int *******)&pppppppiStack_378;
        pppppppiStack_190 = pppppppiVar2;
        FUN_10976c8a4(&pppppppiStack_190,pppppppiVar24,lStack_228 + lStack_1f0);
        FUN_10976c93c(&pppiStack_6440,&pppppppiStack_210,&pppppppiStack_248,&pppppppiStack_190,0,0);
      }
    }
    break;
  case 0x15:
    if ((2 < (uint)((ulong)((long)pppppppiVar17[3] - (long)pppppppiVar17[2]) >> 3)) &&
       (cStack_1d1 == '\0')) {
      pppppppiVar45 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,0);
      *param_8 = (int)pppppppiVar45 + iVar5;
    }
    uVar50 = uStack_198;
    cStack_1d1 = '\x01';
    if (*(char *)(pppppppiVar39 + 0x87) != '\0') {
code_r0x00010976b4a4:
      cStack_1d1 = '\x01';
      pppppppiVar40 = (int *******)0x0;
      iVar16 = 0;
      pppppppiVar45 = pppppppiVar35;
      goto code_r0x000109767f1c;
    }
    pppppppiVar49 = pppppppiVar17;
    func_0x00010976bfac();
    uVar27 = uStack_194;
    uVar50 = (int)pppppppiVar49 + uVar50;
    pppppppiVar49 = pppppppiVar17;
    uStack_198 = uVar50;
    func_0x00010976bfac();
    uStack_194 = (int)pppppppiVar49 + uVar27;
    pppppppiVar45 = pppppppiVar35;
    pppppppiVar48 = (int *******)&pppppppiStack_248;
    if (*(int *)(pppppppiVar39 + 0x74) == 0) {
      FUN_10976c014(&pppiStack_4c00,uStack_194,uVar50);
    }
    break;
  case 0x16:
    if ((((long)pppppppiVar17[3] - (long)pppppppiVar17[2] & 0x7fffffff0U) != 0) &&
       (cStack_1d1 == '\0')) {
      pppppppiVar48 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,0);
      *param_8 = (int)pppppppiVar48 + iVar5;
      pppppppiVar48 = pppppppiVar18;
    }
    uVar50 = uStack_194;
    cStack_1d1 = '\x01';
    if (*(char *)(pppppppiVar39 + 0x87) != '\0') goto code_r0x00010976b4a4;
    pppppppiVar49 = pppppppiVar17;
    func_0x00010976bfac();
    uStack_194 = (int)pppppppiVar49 + uVar50;
    pppppppiVar45 = pppppppiVar35;
    pppppppiVar48 = pppppppiVar24;
    if (*(int *)(pppppppiVar39 + 0x74) == 0) {
      FUN_10976c014(&pppiStack_4c00,uStack_194,uStack_198);
    }
    break;
  case 0x19:
    uVar29 = (uint)((ulong)((long)pppppppiVar17[3] - (long)pppppppiVar17[2]) >> 3);
    uVar15 = uStack_198;
    uVar50 = uStack_194;
    if (uVar29 < 7) {
      uVar42 = 0;
    }
    else {
      uVar41 = 0;
      do {
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar41);
        uVar50 = (int)pppppppiVar49 + uVar50;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar41 + 1);
        uVar15 = (int)pppppppiVar49 + uVar15;
        FUN_10976c0a4(&pppiStack_4c00,uVar50,uVar15);
        uVar42 = uVar41 + 2;
        uVar1 = uVar41 + 8;
        uVar41 = uVar42;
      } while (uVar1 < uVar29);
    }
    for (; uVar42 < uVar29; uVar42 = uVar42 + 6) {
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,uVar42);
      iVar36 = (int)pppppppiVar49 + uVar50;
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,uVar42 + 1);
      iVar14 = (int)pppppppiVar49 + uVar15;
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,uVar42 + 2);
      uVar50 = (int)pppppppiVar49 + iVar36;
      pppppppiVar45 = (int *******)(ulong)uVar50;
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,uVar42 + 3);
      iVar3 = (int)pppppppiVar49 + iVar14;
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,uVar42 + 4);
      uVar50 = (int)pppppppiVar49 + uVar50;
      pppppppiVar49 = pppppppiVar17;
      FUN_10976bf40(pppppppiVar17,uVar42 + 5);
      uVar15 = (int)pppppppiVar49 + iVar3;
      FUN_10976c218(&pppiStack_4c00,iVar36,iVar14,pppppppiVar45,iVar3,uVar50,uVar15);
    }
    uStack_194 = uVar50;
    uStack_198 = uVar15;
    pppppppiVar17[3] = pppppppiVar17[2];
    pppppppiVar35 = (int *******)(ulong)uVar27;
    pppppppiVar48 = pppppppiVar17;
    goto LAB_1097680d0;
  case 0x1a:
    ppppppiVar28 = pppppppiVar17[2];
    uVar15 = (uint)((ulong)((long)pppppppiVar17[3] - (long)ppppppiVar28) >> 3);
    uVar50 = uVar15 & 2;
    pppppppiVar49 = (int *******)(ulong)uStack_194;
    uVar27 = uStack_198;
    if (uVar50 < (uVar15 & 0xfffffffd)) {
      do {
        pppppppiVar45 = pppppppiVar49;
        if ((uVar15 - uVar50 & 1) != 0) {
          pppppppiVar48 = pppppppiVar17;
          FUN_10976bf40(pppppppiVar17,uVar50);
          uVar50 = uVar50 + 1;
          pppppppiVar45 = (int *******)(ulong)(uint)((int)pppppppiVar48 + (int)pppppppiVar49);
        }
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50);
        iVar36 = (int)pppppppiVar49 + uVar27;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50 + 1);
        uVar29 = (int)pppppppiVar49 + (int)pppppppiVar45;
        pppppppiVar49 = (int *******)(ulong)uVar29;
        pppppppiVar48 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50 + 2);
        uVar27 = (int)pppppppiVar48 + iVar36;
        pppppppiVar48 = (int *******)(ulong)uVar27;
        pppppppiVar18 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50 + 3);
        uVar27 = (int)pppppppiVar18 + uVar27;
        FUN_10976c218(&pppiStack_4c00,pppppppiVar45,iVar36,pppppppiVar49,pppppppiVar48,pppppppiVar49
                      ,uVar27);
        uVar50 = uVar50 + 4;
      } while (uVar50 < (uVar15 & 0xfffffffd));
      ppppppiVar28 = pppppppiVar17[2];
      uStack_194 = uVar29;
      uStack_198 = uVar27;
    }
    goto code_r0x0001097691d0;
  case 0x1b:
    ppppppiVar28 = pppppppiVar17[2];
    uVar15 = (uint)((ulong)((long)pppppppiVar17[3] - (long)ppppppiVar28) >> 3);
    uVar50 = uVar15 & 2;
    pppppppiVar49 = (int *******)(ulong)uStack_198;
    uVar27 = uStack_194;
    if (uVar50 < (uVar15 & 0xfffffffd)) {
      do {
        pppppppiVar45 = pppppppiVar49;
        if ((uVar15 - uVar50 & 1) != 0) {
          pppppppiVar48 = pppppppiVar17;
          FUN_10976bf40(pppppppiVar17,uVar50);
          uVar50 = uVar50 + 1;
          pppppppiVar45 = (int *******)(ulong)(uint)((int)pppppppiVar48 + (int)pppppppiVar49);
        }
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50);
        iVar36 = (int)pppppppiVar49 + uVar27;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50 + 1);
        uVar27 = (int)pppppppiVar49 + iVar36;
        pppppppiVar48 = (int *******)(ulong)uVar27;
        pppppppiVar49 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50 + 2);
        uVar29 = (int)pppppppiVar49 + (int)pppppppiVar45;
        pppppppiVar49 = (int *******)(ulong)uVar29;
        pppppppiVar18 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar50 + 3);
        uVar27 = (int)pppppppiVar18 + uVar27;
        FUN_10976c218(&pppiStack_4c00,iVar36,pppppppiVar45,pppppppiVar48,pppppppiVar49,uVar27,
                      pppppppiVar49);
        uVar50 = uVar50 + 4;
      } while (uVar50 < (uVar15 & 0xfffffffd));
      ppppppiVar28 = pppppppiVar17[2];
      uStack_198 = uVar29;
      uStack_194 = uVar27;
    }
code_r0x0001097691d0:
    pppppppiVar17[3] = ppppppiVar28;
    goto LAB_1097680d0;
  case 0x1c:
    if (ppppppiVar31 < ppppppiVar28) {
      pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
      uVar50 = (uint)*(byte *)ppppppiVar31 << 0x18;
      ppppppiVar31 = (int ******)((long)ppppppiVar31 + 1);
    }
    else {
      ppppppiVar34 = *pppppppiVar24;
      if ((ppppppiVar34 == (int ******)0x0) || (*(int *)ppppppiVar34 != 0)) {
        uVar50 = 0;
      }
      else {
        *(int *)ppppppiVar34 = 0x55;
        uVar50 = 0;
      }
    }
    if (ppppppiVar31 < ppppppiVar28) {
      pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
      uVar27 = (uint)*(byte *)ppppppiVar31 << 0x10;
    }
    else {
      ppppppiVar28 = *pppppppiVar24;
      if ((ppppppiVar28 == (int ******)0x0) || (*(int *)ppppppiVar28 != 0)) {
        uVar27 = 0;
      }
      else {
        *(int *)ppppppiVar28 = 0x55;
        uVar27 = 0;
      }
    }
    if (pppppppiVar17[3] != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
      *(int *)pppppppiVar17[3] = (int)(uVar27 | uVar50) >> 0x10;
LAB_1097699c4:
      ppppppiVar28 = pppppppiVar17[3];
      *(undefined4 *)((long)ppppppiVar28 + 4) = 2;
LAB_1097699d0:
      ppppppiVar28 = ppppppiVar28 + 1;
      goto LAB_10976939c;
    }
code_r0x00010976a410:
    ppppppiVar28 = pppppppiVar17[1];
    if ((ppppppiVar28 != (int ******)0x0) && (*(int *)ppppppiVar28 == 0)) {
      *(int *)ppppppiVar28 = 0x82;
    }
    goto LAB_1097680d0;
  case 0x1e:
  case 0x1f:
    ppppppiVar28 = pppppppiVar17[2];
    uVar29 = (uint)((ulong)((long)pppppppiVar17[3] - (long)ppppppiVar28) >> 3);
    uVar15 = uVar29 & 2;
    pppppppiVar45 = (int *******)(ulong)uStack_194;
    uStack_6468 = uVar29 & 0xfffffffd;
    if (uVar15 < (uVar29 & 0xfffffffd)) {
      bVar12 = uVar50 == 0x1f;
      pppppppiVar49 = pppppppiVar45;
      uVar50 = uStack_198;
      do {
        pppppppiVar45 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar15);
        uVar29 = uVar15 + 1;
        pppppppiVar48 = (int *******)(ulong)uVar29;
        pppppppiVar18 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,pppppppiVar48);
        pppppppiVar40 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar15 + 2);
        pppppppiVar35 = pppppppiVar17;
        FUN_10976bf40(pppppppiVar17,uVar15 + 3);
        if (bVar12) {
          uVar41 = (int)pppppppiVar45 + (int)pppppppiVar49;
          pppppppiVar49 = (int *******)(ulong)uVar41;
          uVar41 = (int)pppppppiVar18 + uVar41;
          pppppppiVar18 = (int *******)(ulong)uVar41;
          uVar42 = (int)pppppppiVar40 + uVar50;
          pppppppiVar45 = pppppppiVar18;
          if (uStack_6468 - uVar15 == 5) {
            pppppppiVar45 = pppppppiVar17;
            FUN_10976bf40(pppppppiVar17,uVar15 + 4);
            pppppppiVar45 = (int *******)(ulong)((int)pppppppiVar45 + uVar41);
            uVar15 = uVar29;
          }
          bVar12 = false;
          uVar29 = (int)pppppppiVar35 + uVar42;
          uVar41 = uVar50;
        }
        else {
          uVar41 = (int)pppppppiVar45 + uVar50;
          uVar50 = (int)pppppppiVar18 + (int)pppppppiVar49;
          pppppppiVar18 = (int *******)(ulong)uVar50;
          uVar42 = (int)pppppppiVar40 + uVar41;
          pppppppiVar45 = (int *******)(ulong)((int)pppppppiVar35 + uVar50);
          if (uStack_6468 - uVar15 == 5) {
            pppppppiVar40 = pppppppiVar17;
            FUN_10976bf40(pppppppiVar17,uVar15 + 4);
            bVar12 = true;
            uVar15 = uVar29;
            uVar29 = (int)pppppppiVar40 + uVar42;
          }
          else {
            bVar12 = true;
            uVar29 = uVar42;
          }
        }
        uVar50 = uVar29;
        FUN_10976c218(&pppiStack_4c00,pppppppiVar49,uVar41,pppppppiVar18,uVar42,pppppppiVar45,uVar50
                     );
        uVar15 = uVar15 + 4;
        pppppppiVar49 = pppppppiVar45;
      } while (uVar15 < uStack_6468);
      ppppppiVar28 = pppppppiVar17[2];
      uStack_198 = uVar50;
    }
    pppppppiVar35 = (int *******)(ulong)uVar27;
    uStack_194 = (uint)pppppppiVar45;
    pppppppiVar17[3] = ppppppiVar28;
    goto LAB_1097680d0;
  default:
    if (uVar50 < 0xf7) {
      ppppppiVar28 = pppppppiVar17[3];
      if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
        uVar50 = uVar50 - 0x8b;
LAB_109768dc4:
        *(uint *)ppppppiVar28 = uVar50;
        goto LAB_1097699c4;
      }
    }
    else if (uVar50 < 0xfb) {
      if (ppppppiVar31 < ppppppiVar28) {
        pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
        uVar27 = (uint)*(byte *)ppppppiVar31;
      }
      else {
        ppppppiVar28 = *pppppppiVar24;
        if ((ppppppiVar28 == (int ******)0x0) || (*(int *)ppppppiVar28 != 0)) {
          uVar27 = 0;
        }
        else {
          *(int *)ppppppiVar28 = 0x55;
          uVar27 = 0;
        }
      }
      ppppppiVar28 = pppppppiVar17[3];
      if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
        iVar36 = uVar50 * 0x100 + uVar27 + -0xf694;
LAB_1097699c0:
        *(int *)ppppppiVar28 = iVar36;
        goto LAB_1097699c4;
      }
    }
    else if (uVar50 == 0xff) {
      if (ppppppiVar31 < ppppppiVar28) {
        pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
        uVar50 = (uint)*(byte *)ppppppiVar31 << 0x18;
        ppppppiVar31 = (int ******)((long)ppppppiVar31 + 1);
      }
      else {
        ppppppiVar34 = *pppppppiVar24;
        if ((ppppppiVar34 == (int ******)0x0) || (*(int *)ppppppiVar34 != 0)) {
          uVar50 = 0;
        }
        else {
          *(int *)ppppppiVar34 = 0x55;
          uVar50 = 0;
        }
      }
      if (ppppppiVar31 < ppppppiVar28) {
        pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
        uVar27 = (uint)*(byte *)ppppppiVar31 << 0x10;
        ppppppiVar31 = (int ******)((long)ppppppiVar31 + 1);
      }
      else {
        ppppppiVar34 = *pppppppiVar24;
        if ((ppppppiVar34 == (int ******)0x0) || (*(int *)ppppppiVar34 != 0)) {
          uVar27 = 0;
        }
        else {
          *(int *)ppppppiVar34 = 0x55;
          uVar27 = 0;
        }
      }
      if (ppppppiVar31 < ppppppiVar28) {
        pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
        uVar15 = (uint)*(byte *)ppppppiVar31 << 8;
        ppppppiVar31 = (int ******)((long)ppppppiVar31 + 1);
      }
      else {
        ppppppiVar34 = *pppppppiVar24;
        if ((ppppppiVar34 == (int ******)0x0) || (*(int *)ppppppiVar34 != 0)) {
          uVar15 = 0;
        }
        else {
          *(int *)ppppppiVar34 = 0x55;
          uVar15 = 0;
        }
      }
      if (ppppppiVar31 < ppppppiVar28) {
        pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
        uVar29 = (uint)*(byte *)ppppppiVar31;
      }
      else {
        ppppppiVar28 = *pppppppiVar24;
        if ((ppppppiVar28 == (int ******)0x0) || (*(int *)ppppppiVar28 != 0)) {
          uVar29 = 0;
        }
        else {
          *(int *)ppppppiVar28 = 0x55;
          uVar29 = 0;
        }
      }
      uVar50 = uVar27 | uVar50 | uVar15 | uVar29;
      if (cVar8 == '\0') {
        if (pppppppiVar17[3] != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
          *(uint *)pppppppiVar17[3] = uVar50;
code_r0x000109769af8:
          ppppppiVar28 = pppppppiVar17[3];
          *(undefined4 *)((long)ppppppiVar28 + 4) = 0;
          goto LAB_1097699d0;
        }
      }
      else {
        if (!bVar10 && 64000 < uVar50 + 32000) {
          bVar10 = true;
        }
        ppppppiVar28 = pppppppiVar17[3];
        if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) goto LAB_109768dc4;
      }
    }
    else {
      if (ppppppiVar31 < ppppppiVar28) {
        pppppppiVar24[3] = (int ******)((long)ppppppiVar31 + 1);
        uVar27 = (uint)*(byte *)ppppppiVar31;
      }
      else {
        ppppppiVar28 = *pppppppiVar24;
        if ((ppppppiVar28 == (int ******)0x0) || (*(int *)ppppppiVar28 != 0)) {
          uVar27 = 0;
        }
        else {
          *(int *)ppppppiVar28 = 0x55;
          uVar27 = 0;
        }
      }
      ppppppiVar28 = pppppppiVar17[3];
      if (ppppppiVar28 != pppppppiVar17[2] + *(uint *)(pppppppiVar17 + 4)) {
        iVar36 = 0xfa94 - (uVar27 | uVar50 << 8);
        goto LAB_1097699c0;
      }
    }
    ppppppiVar28 = pppppppiVar17[1];
    if ((ppppppiVar28 != (int ******)0x0) && (*(int *)ppppppiVar28 == 0)) {
      *(int *)ppppppiVar28 = 0x82;
    }
    goto LAB_1097680d0;
  }
code_r0x000109769398:
  ppppppiVar28 = pppppppiVar17[2];
  pppppppiVar24 = pppppppiVar23;
LAB_10976939c:
  pppppppiVar17[3] = ppppppiVar28;
  pppppppiVar11 = pppppppiVar21;
  pppppppiVar37 = pppppppiVar38;
  goto LAB_1097680d0;
}



/* Entry: 10976b9ac; end: 10976bc5b;  */

void FUN_10976b9ac(uint param_1,uint param_2,int param_3,int *param_4,int param_5,int param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  
  *param_4 = 0;
  if ((int)param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == 0) {
    return;
  }
  if (param_6 == 0) {
    iVar12 = 0;
    goto LAB_10976bc38;
  }
  iVar12 = *param_7;
  iVar10 = param_7[6];
  lVar13 = (long)(param_5 + param_3) * (ulong)param_1;
  iVar9 = (int)((ulong)(lVar13 + (lVar13 >> 0x3f) + 0x8000) >> 0x10);
  if ((uint)((int)LZCOUNT(iVar9) + (int)LZCOUNT(param_2)) < 0x11) {
    iVar17 = iVar10 << 0x10;
  }
  else {
    iVar17 = (int)((long)iVar9 * (ulong)param_2 + ((long)((long)iVar9 * (ulong)param_2) >> 0x3f) +
                   0x8000 >> 0x10);
  }
  iVar5 = param_7[1];
  if (iVar17 < iVar12 * 0x10000) {
    uVar6 = iVar5 * 0x10000;
    uVar15 = iVar5 * -0x10000;
    if (-1 < (int)uVar6) {
      uVar15 = uVar6;
    }
    uVar7 = 0;
    if ((ulong)param_2 != 0) {
      uVar7 = (uint)(CONCAT44(uVar15 >> 0x10,param_2 >> 1) / (ulong)param_2);
    }
    uVar11 = -uVar7;
    if (-1 < (int)uVar6) {
      uVar11 = uVar7;
    }
  }
  else {
    iVar1 = param_7[2];
    iVar3 = param_7[3];
    iVar2 = param_7[4];
    iVar4 = param_7[5];
    if (iVar17 < iVar1 * 0x10000) {
      uVar18 = (ulong)param_2;
      if (iVar1 - iVar12 == 0) {
LAB_10976bb04:
        uVar18 = (ulong)param_2;
        uVar15 = iVar1 * 0x10000;
        if (iVar2 - iVar1 != 0) {
          uVar11 = iVar1 * -0x10000;
          if (-1 < (int)uVar15) {
            uVar11 = uVar15;
          }
          iVar12 = 0;
          if (uVar18 != 0) {
            iVar12 = (int)(((ulong)(param_2 >> 1) | (ulong)uVar11 << 0x10) / uVar18);
          }
          iVar10 = -iVar12;
          if (-1 >= (int)uVar15) {
            iVar10 = iVar12;
          }
          lVar13 = (long)(iVar10 + iVar9);
          FUN_1097532ac(lVar13,(long)(iVar4 - iVar3),(long)(iVar2 - iVar1));
          iVar12 = (int)lVar13;
          bVar8 = iVar3 * 0x10000 < 0;
          uVar15 = iVar3 * -0x10000;
          if (!bVar8) {
            uVar15 = iVar3 * 0x10000;
          }
          iVar10 = 0;
          if (uVar18 != 0) {
            iVar10 = (int)(CONCAT44(uVar15 >> 0x10,param_2 >> 1) / uVar18);
          }
          goto LAB_10976bb58;
        }
LAB_10976bb70:
        uVar18 = (ulong)param_2;
        if (iVar10 - iVar2 == 0) goto LAB_10976bb78;
        uVar16 = (ulong)(int)uVar15;
        uVar14 = -uVar16;
        if (-1 < (long)uVar16) {
          uVar14 = uVar16;
        }
        iVar12 = 0;
        if (uVar18 != 0) {
          iVar12 = (int)((uVar14 * 0x10000 + (ulong)(param_2 >> 1)) / uVar18);
        }
        iVar17 = -iVar12;
        if ((long)(uVar18 ^ uVar16) < 0) {
          iVar17 = iVar12;
        }
        lVar13 = (long)(iVar17 + iVar9);
        FUN_1097532ac(lVar13,(long)(param_7[7] - iVar4),(long)(iVar10 - iVar2));
        iVar12 = (int)lVar13;
        uVar16 = (ulong)(iVar4 << 0x10);
        uVar14 = -uVar16;
        if (-1 < (long)uVar16) {
          uVar14 = uVar16;
        }
        iVar10 = 0;
        if (uVar18 != 0) {
          iVar10 = (int)(((ulong)(param_2 >> 1) | (uVar14 >> 0x10 & 0x7fffffff) << 0x20) / uVar18);
        }
        iVar9 = -iVar10;
        if (-1 < (long)(uVar18 ^ uVar16)) {
          iVar9 = iVar10;
        }
      }
      else {
        uVar11 = iVar12 * 0x10000;
        uVar15 = iVar12 * -0x10000;
        if (-1 < (int)uVar11) {
          uVar15 = uVar11;
        }
        iVar10 = 0;
        if (uVar18 != 0) {
          iVar10 = (int)(((ulong)uVar15 << 0x10 | (ulong)(param_2 >> 1)) / uVar18);
        }
        iVar17 = -iVar10;
        if (-1 >= (int)uVar11) {
          iVar17 = iVar10;
        }
        lVar13 = (long)(iVar17 + iVar9);
        FUN_1097532ac(lVar13,(long)(iVar3 - iVar5),(long)(iVar1 - iVar12));
        iVar12 = (int)lVar13;
        bVar8 = iVar5 * 0x10000 < 0;
        uVar15 = iVar5 * -0x10000;
        if (!bVar8) {
          uVar15 = iVar5 * 0x10000;
        }
        iVar10 = 0;
        if (uVar18 != 0) {
          iVar10 = (int)(CONCAT44(uVar15 >> 0x10,param_2 >> 1) / uVar18);
        }
LAB_10976bb58:
        iVar9 = -iVar10;
        if (!bVar8) {
          iVar9 = iVar10;
        }
      }
      uVar11 = iVar9 + iVar12;
    }
    else {
      if (iVar17 < iVar2 * 0x10000) goto LAB_10976bb04;
      if (iVar17 < iVar10 * 0x10000) {
        uVar15 = iVar2 << 0x10;
        goto LAB_10976bb70;
      }
LAB_10976bb78:
      uVar16 = (ulong)param_2;
      uVar14 = (ulong)(param_7[7] << 0x10);
      uVar18 = -uVar14;
      if (-1 < (long)uVar14) {
        uVar18 = uVar14;
      }
      uVar15 = 0;
      if (uVar16 != 0) {
        uVar15 = (uint)(((ulong)(param_2 >> 1) | (uVar18 >> 0x10 & 0x7fffffff) << 0x20) / uVar16);
      }
      uVar11 = -uVar15;
      if (-1 < (long)(uVar16 ^ uVar14)) {
        uVar11 = uVar15;
      }
    }
  }
  uVar15 = -uVar11;
  if (-1 < (int)uVar11) {
    uVar15 = uVar11;
  }
  iVar10 = 0;
  if ((ulong)(param_1 << 1) != 0) {
    iVar10 = (int)(((ulong)uVar15 * 0x10000 + (ulong)(param_1 & 0x7fffffff)) / (ulong)(param_1 << 1)
                  );
  }
  iVar12 = -iVar10;
  if (-1 < (int)uVar11) {
    iVar12 = iVar10;
  }
LAB_10976bc38:
  *param_4 = iVar12 + param_5 / 2;
  return;
}



/* Entry: 10976bc5c; end: 10976bcc7;  */

undefined4 FUN_10976bc5c(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      iVar3 = 0xa1;
      goto LAB_10976bcc0;
    }
  }
  else {
    if (*(int *)(lVar1 + -4) == 2) {
      *(long *)(param_1 + 0x18) = lVar1 + -8;
      return *(undefined4 *)(lVar1 + -8);
    }
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      iVar3 = 0xa0;
LAB_10976bcc0:
      *piVar2 = iVar3;
      return 0;
    }
  }
  return 0;
}



/* Entry: 10976bcc8; end: 10976be3b;  */

void FUN_10976bcc8(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  
  iVar2 = *(int *)(param_1 + 0x20) * param_3;
  lVar12 = *(long *)(param_2 + 0x18);
  uVar7 = (uint)((ulong)(lVar12 - *(long *)(param_2 + 0x10)) >> 3);
  if (param_3 != 0) {
    uVar13 = 0;
    iVar3 = uVar7 - iVar2;
    iVar14 = iVar3 + param_3;
    do {
      lVar12 = *(long *)(param_1 + 0x28);
      uVar7 = iVar3 + (int)uVar13;
      uVar10 = (ulong)uVar7;
      uVar11 = param_2;
      FUN_10976bf40(param_2,uVar10);
      uVar4 = (uint)uVar11;
      if (1 < *(uint *)(param_1 + 0x20)) {
        lVar9 = 1;
        iVar6 = iVar14;
        do {
          iVar1 = *(int *)(lVar12 + lVar9 * 4);
          iVar14 = iVar6 + 1;
          uVar5 = param_2;
          FUN_10976bf40(param_2,iVar6);
          uVar4 = (int)uVar11 +
                  (int)((ulong)(((long)iVar1 * (long)(int)uVar5 >> 0x3f) +
                                (long)iVar1 * (long)(int)uVar5 + 0x8000) >> 0x10);
          uVar11 = (ulong)uVar4;
          lVar9 = lVar9 + 1;
          iVar6 = iVar14;
        } while ((uint)lVar9 < *(uint *)(param_1 + 0x20));
      }
      lVar9 = *(long *)(param_2 + 0x10);
      if ((uint)((ulong)(*(long *)(param_2 + 0x18) - lVar9) >> 3) < uVar7) {
        piVar8 = *(int **)(param_2 + 8);
        if ((piVar8 != (int *)0x0) && (*piVar8 == 0)) {
          *piVar8 = 0x82;
        }
      }
      else {
        *(uint *)(lVar9 + uVar10 * 8) = uVar4;
        lVar9 = *(long *)(param_2 + 0x10);
        *(undefined4 *)(lVar9 + uVar10 * 8 + 4) = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_3);
    lVar12 = *(long *)(param_2 + 0x18);
    uVar7 = (uint)((ulong)(lVar12 - lVar9) >> 3);
  }
  param_3 = iVar2 - param_3;
  if (uVar7 < param_3) {
    piVar8 = *(int **)(param_2 + 8);
    if ((piVar8 != (int *)0x0) && (*piVar8 == 0)) {
      *piVar8 = 0xa1;
    }
  }
  else {
    *(ulong *)(param_2 + 0x18) = lVar12 + (ulong)param_3 * -8;
  }
  return;
}



/* Entry: 10976be3c; end: 10976bf3f;  */

void FUN_10976be3c(long param_1,long param_2,undefined8 param_3,int *param_4,char *param_5,
                  int param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_64 [4];
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  uVar5 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
  uVar3 = uVar5 >> 3 & 1;
  if ((*(char *)(param_1 + 0xc) == '\0' && (int)uVar3 != 0) && (*param_5 == '\0')) {
    lVar2 = param_2;
    FUN_10976bf40(param_2,0);
    *param_4 = (int)lVar2 + *(int *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x420) + 0x408) * 0x10000
    ;
  }
  if (*(char *)(*(long *)(param_1 + 0xf0) + 0x438) == '\0') {
    uVar4 = (uint)(uVar5 >> 3);
    if (1 < uVar4) {
      do {
        lVar2 = param_2;
        FUN_10976bf40(param_2,uVar3);
        param_6 = (int)lVar2 + param_6;
        lVar2 = param_2;
        iStack_60 = param_6;
        FUN_10976bf40(param_2,(int)uVar3 + 1);
        auStack_64[0] = 0;
        param_6 = (int)lVar2 + param_6;
        uStack_58 = 0;
        iStack_5c = param_6;
        FUN_10976d234(param_3,auStack_64);
        uVar1 = (int)uVar3 + 2;
        uVar3 = (ulong)uVar1;
      } while (uVar1 < uVar4);
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  }
  *param_5 = '\x01';
  return;
}



/* Entry: 10976bf40; end: 10976c013;  */

int FUN_10976bf40(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 < (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3)) {
    piVar3 = (int *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
    iVar1 = *piVar3;
    iVar2 = piVar3[1];
    if (iVar2 == 1) {
      iVar1 = iVar1 + (iVar1 >> 0x1f) + 0x2000 >> 0xe;
    }
    else if (iVar2 == 2) {
      return iVar1 << 0x10;
    }
    return iVar1;
  }
  piVar3 = *(int **)(param_1 + 8);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    *piVar3 = 0x82;
    return 0;
  }
  return 0;
}


