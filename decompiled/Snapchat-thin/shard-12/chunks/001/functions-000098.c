/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d96a1c; end: 108d96bc3;  */

void FUN_108d96a1c(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar4 = (ulong)*param_1;
  if ((int)*param_1 < 0) {
    uVar4 = 0;
    param_1[0] = 0;
    param_1[1] = 0xffffffff;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined1 *)((long)param_1 + 0x12) = 0;
  }
  *(undefined8 *)(param_1 + 2) = param_5;
  uStack_68 = param_3;
  uStack_60 = param_4;
  do {
    uVar4 = (ulong)(ushort)param_1[uVar4 * 8 + 4];
    if (uVar4 < 0x1ae) {
      sVar3 = *(short *)(&UNK_10dfa1094 + uVar4 * 2);
      uVar6 = param_2;
      if (sVar3 == -0x56) goto LAB_108d96b08;
      do {
        uVar7 = (uint)uVar6;
        uVar1 = (int)sVar3 + (uVar7 & 0xff);
        if ((uVar1 < 0x5d9) && ((uint)(byte)(&UNK_10dfa18f4)[uVar1] == (uVar7 & 0xff))) {
          puVar5 = (ushort *)(&UNK_10dfa1f14 + (ulong)uVar1 * 2);
          goto LAB_108d96b0c;
        }
        if ((uVar6 & 0xff) == 0) goto LAB_108d96b08;
      } while (((uVar7 & 0xff) < 0x46) &&
              (uVar8 = uVar6 & 0xff, uVar6 = (ulong)(byte)(&UNK_10dfa1ecd)[uVar8],
              (&UNK_10dfa1ecd)[uVar8] != 0));
      if ((sVar3 < -0x46) || (uVar6 = (ulong)((int)sVar3 + 0x46), (&UNK_10dfa18f4)[uVar6] != 'F'))
      goto LAB_108d96b08;
      puVar5 = (ushort *)(&UNK_10dfa1f14 + uVar6 * 2);
    }
    else {
LAB_108d96b08:
      puVar5 = (ushort *)(&UNK_10dfa13f0 + uVar4 * 2);
    }
LAB_108d96b0c:
    uVar2 = *puVar5;
    if (uVar2 < 0x282) {
      FUN_108d96bc4(param_1,uVar2,param_2,&uStack_68);
      param_1[1] = param_1[1] - 1;
      return;
    }
    if (0x3c8 < uVar2) {
      uVar9 = *(undefined8 *)(param_1 + 2);
      func_0x000108d6a85c(uVar9,&UNK_10f518f4a);
      *(undefined8 *)(param_1 + 2) = uVar9;
      FUN_108d9884c(uVar9,(uint)param_2 & 0xff,&uStack_68);
      return;
    }
    FUN_108d96c68(param_1,uVar2 - 0x282);
    if ((uint)param_2 == 0xfe) {
      return;
    }
    uVar4 = (ulong)*param_1;
    if ((int)*param_1 < 0) {
      return;
    }
  } while( true );
}



/* Entry: 108d96bc4; end: 108d96c67;  */

void FUN_108d96bc4(uint *param_1,undefined2 param_2,undefined1 param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *param_1;
  uVar4 = (ulong)(int)uVar2;
  lVar1 = uVar4 + 1;
  *param_1 = (uint)lVar1;
  if ((int)uVar2 < 99) {
    *(undefined2 *)(param_1 + lVar1 * 8 + 4) = param_2;
    *(undefined1 *)((long)param_1 + lVar1 * 0x20 + 0x12) = param_3;
    uVar6 = param_4[1];
    uVar5 = *param_4;
    *(undefined8 *)(param_1 + lVar1 * 8 + 10) = param_4[2];
    *(undefined8 *)(param_1 + lVar1 * 8 + 8) = uVar6;
    *(undefined8 *)(param_1 + lVar1 * 8 + 6) = uVar5;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 2);
    *param_1 = uVar2;
    do {
      FUN_108d9884c(*(undefined8 *)(param_1 + 2),
                    *(undefined1 *)((long)param_1 + (uVar4 & 0xffffffff) * 0x20 + 0x12),
                    param_1 + (uVar4 & 0xffffffff) * 8 + 6);
      uVar2 = *param_1;
      uVar3 = uVar2 - 1;
      uVar4 = (ulong)uVar3;
      *param_1 = uVar3;
    } while (0 < (int)uVar2);
    func_0x000108d6a85c(uVar5,&UNK_10f518f0a);
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  return;
}



/* Entry: 108d96c68; end: 108d9884b;  */

void FUN_108d96c68(uint *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  undefined *puVar10;
  uint *puVar11;
  uint **ppuVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint *puVar21;
  undefined2 uVar22;
  undefined1 uVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  uint *puVar32;
  uint *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  
  puVar32 = *(uint **)(param_1 + 2);
  lVar27 = (long)(int)*param_1;
  lVar30 = lVar27 * 0x20;
  lVar6 = lVar30 + 0x10;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = (uint *)0x0;
  puVar11 = puVar32;
  switch(param_2) {
  case 5:
    *(undefined1 *)((long)puVar32 + 0x1f2) = 0;
    goto code_r0x000108d98458;
  case 6:
    uVar23 = 1;
    goto code_r0x000108d98454;
  case 7:
    uVar23 = 2;
code_r0x000108d98454:
    *(undefined1 *)((long)puVar32 + 0x1f2) = uVar23;
code_r0x000108d98458:
    puVar32[0x7a] = 0;
    break;
  case 8:
    FUN_108d988d8(puVar32);
    break;
  case 9:
    FUN_108d98bd4(puVar32,param_1[lVar27 * 8 + -2]);
    break;
  case 0xd:
  case 0x4c:
    uVar24 = 7;
    goto code_r0x000108d983ec;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x73:
  case 0x75:
    uVar24 = (uint)*(byte *)((long)param_1 + lVar30 + 0x12);
    goto code_r0x000108d983ec;
  case 0x11:
  case 0x12:
    func_0x000108d98ce8(puVar32);
    break;
  case 0x13:
    func_0x000108d98d48(puVar32);
    break;
  case 0x16:
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar24 = param_1[lVar27 * 8 + 8];
    uVar31 = 0;
    goto code_r0x000108d98424;
  case 0x17:
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar24 = param_1[lVar27 * 8 + 8];
    uVar31 = 1;
    goto code_r0x000108d98424;
  case 0x18:
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar24 = param_1[lVar27 * 8 + 8];
    uVar31 = 2;
code_r0x000108d98424:
    FUN_108d98da8(puVar32,uVar31,uVar13,uVar24);
    break;
  case 0x1a:
    func_0x000108d98e74(puVar32,param_1 + lVar27 * 8 + -2,param_1 + lVar27 * 8 + 6,
                        param_1[lVar27 * 8 + -0x1a],0,0,param_1[lVar27 * 8 + -10]);
    break;
  case 0x1b:
    *(undefined1 *)(*(long *)puVar32 + 0x152) = 0;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2d:
  case 0x30:
  case 0x82:
  case 0x83:
  case 0x8d:
  case 0x96:
  case 0xf7:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x117:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 8);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    break;
  case 0x1d:
  case 0x1e:
  case 0x45:
  case 0x54:
  case 0x6b:
  case 0x8f:
  case 0x9f:
  case 0xdb:
  case 0xde:
  case 0x122:
    uVar24 = 1;
    goto code_r0x000108d983ec;
  case 0x20:
    func_0x000108d99364(puVar32,param_1 + lVar27 * 8 + -10,param_1 + lVar27 * 8 + -2,
                        (char)param_1[lVar27 * 8 + 6],0);
    break;
  case 0x21:
    func_0x000108d99364(puVar32,0,0,0,*(undefined8 *)(param_1 + lVar27 * 8 + 6));
    goto code_r0x000108d97a64;
  case 0x23:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    if ((param_1[lVar27 * 8 + 8] == 5) &&
       (func_0x000108d5ea34(uVar31,&UNK_10f518f20,5), (int)uVar31 == 0)) {
      uVar23 = 0x20;
      goto code_r0x000108d972f0;
    }
    puVar10 = &UNK_10f518f26;
    goto code_r0x000108d97d54;
  case 0x26:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -10);
    iVar26 = puVar32[0x92] - (int)uStack_70;
    uVar24 = puVar32[0x94];
    goto code_r0x000108d972b8;
  case 0x27:
    func_0x000108d997d0(puVar32,param_1 + lVar27 * 8 + 6);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 8);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
  case 0x5a:
    puVar32[0x58] = 0;
    break;
  case 0x2c:
    func_0x000108d99984(puVar32,param_1 + lVar27 * 8 + 6);
    break;
  case 0x2e:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -0x12);
    goto code_r0x000108d98464;
  case 0x2f:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -0x22);
code_r0x000108d98464:
    uVar24 = (param_1[lVar27 * 8 + 6] + param_1[lVar27 * 8 + 8]) - (int)uStack_70;
    goto code_r0x000108d98478;
  case 0x31:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -2);
    uVar24 = param_1[lVar27 * 8 + 8];
    iVar26 = param_1[lVar27 * 8 + 6] - (int)uStack_70;
code_r0x000108d972b8:
    uVar24 = uVar24 + iVar26;
code_r0x000108d98478:
    uStack_68 = (ulong)uVar24;
    break;
  case 0x36:
  case 0x5c:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    *(undefined8 *)(puVar32 + 0x58) = *(undefined8 *)(param_1 + lVar27 * 8 + 8);
    *(undefined8 *)(puVar32 + 0x56) = uVar31;
    break;
  case 0x37:
  case 0x39:
    ppuVar12 = (uint **)(param_1 + lVar27 * 8 + 6);
    goto code_r0x000108d9810c;
  case 0x38:
    ppuVar12 = (uint **)(param_1 + lVar27 * 8 + -2);
    goto code_r0x000108d9810c;
  case 0x3a:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x9d,*(undefined8 *)(param_1 + lVar27 * 8 + 6),0,0);
    uStack_88 = *(long *)(param_1 + lVar27 * 8 + -2);
    lStack_80 = *(long *)(param_1 + lVar27 * 8 + 10);
    puStack_90 = puVar11;
    goto code_r0x000108d98104;
  case 0x3b:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x61,0,0,param_1 + lVar27 * 8 + 6);
    uStack_88 = *(long *)(param_1 + lVar27 * 8 + 6);
    lStack_80 = uStack_88 + (ulong)param_1[lVar27 * 8 + 8];
    puStack_90 = puVar11;
code_r0x000108d98104:
    ppuVar12 = &puStack_90;
code_r0x000108d9810c:
    func_0x000108d99a08(puVar32,ppuVar12);
    break;
  case 0x3d:
    lVar30 = *(long *)(puVar32 + 0x88);
    if ((lVar30 != 0) && (0 < *(short *)(lVar30 + 0x3e))) {
      *(char *)(*(long *)(lVar30 + 8) + (ulong)((int)*(short *)(lVar30 + 0x3e) - 1) * 0x30 + 0x28) =
           (char)param_1[lVar27 * 8 + 6];
    }
    break;
  case 0x3e:
    uVar1 = param_1[lVar27 * 8 + -2];
    uVar24 = param_1[lVar27 * 8 + 6];
    uVar14 = param_1[lVar27 * 8 + -10];
    uVar31 = 0;
    goto code_r0x000108d97bb0;
  case 0x3f:
    uVar24 = param_1[lVar27 * 8 + 6];
    uVar13 = 0;
    goto code_r0x000108d97fa0;
  case 0x40:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    goto code_r0x000108d98400;
  case 0x41:
    FUN_108d9aab0(puVar32,0,param_1 + lVar27 * 8 + -10,*(undefined8 *)(param_1 + lVar27 * 8 + -2),
                  param_1[lVar27 * 8 + 6]);
    break;
  case 0x42:
    goto code_r0x000108d9723c;
  case 0x43:
    FUN_108d9ae4c(puVar32,param_1 + lVar27 * 8 + 6);
    break;
  case 0x47:
    uVar24 = param_1[lVar27 * 8 + -2] & (param_1[lVar27 * 8 + 7] ^ 0xffffffff) |
             param_1[lVar27 * 8 + 6];
    goto code_r0x000108d983ec;
  case 0x4a:
    uVar24 = param_1[lVar27 * 8 + 6];
    uVar25 = 0xff;
    goto code_r0x000108d97a9c;
  case 0x4b:
    uVar24 = param_1[lVar27 * 8 + 6] << 8;
    uVar25 = 0xff00;
code_r0x000108d97a9c:
    uStack_70 = (uint *)CONCAT44(uVar25,uVar24);
    break;
  case 0x4d:
    uVar24 = 8;
    goto code_r0x000108d983ec;
  case 0x4e:
    uVar24 = 9;
    goto code_r0x000108d983ec;
  case 0x4f:
    uVar24 = 6;
    goto code_r0x000108d983ec;
  case 0x52:
  case 0x62:
  case 100:
  case 0x67:
    uVar24 = param_1[lVar27 * 8 + 6];
    goto code_r0x000108d983ec;
  case 0x57:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -2);
    break;
  case 0x5d:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x12);
    uVar1 = param_1[lVar27 * 8 + 6];
    uVar24 = param_1[lVar27 * 8 + -10];
    uVar14 = 0;
code_r0x000108d97bb0:
    func_0x000108d99bc4(puVar32,uVar31,uVar1,uVar24,uVar14);
    break;
  case 0x5e:
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar24 = param_1[lVar27 * 8 + 6];
code_r0x000108d97fa0:
    lVar30 = 0;
    uVar31 = 0;
    puVar9 = (uint *)0x0;
    puVar11 = (uint *)0x0;
    puVar21 = (uint *)0x0;
    uVar16 = 0;
code_r0x000108d97fa8:
    func_0x000108d99e20(puVar32,puVar11,puVar9,uVar31,uVar13,uVar24,puVar21,uVar16,lVar30);
    break;
  case 0x5f:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
code_r0x000108d98400:
    FUN_108d9aa24(puVar32,uVar31);
    break;
  case 0x60:
    FUN_108d9aab0(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x2a),param_1 + lVar27 * 8 + -0x12
                  ,*(undefined8 *)(param_1 + lVar27 * 8 + -10),param_1[lVar27 * 8 + -2]);
    goto code_r0x000108d9723c;
  case 99:
    uVar24 = 10;
    goto code_r0x000108d983ec;
  case 0x65:
    uVar23 = 10;
    goto code_r0x000108d972f0;
  case 0x66:
    uVar23 = (undefined1)param_1[lVar27 * 8 + 6];
    goto code_r0x000108d972f0;
  case 0x68:
    uVar24 = 4;
    goto code_r0x000108d983ec;
  case 0x69:
    uVar24 = 5;
    goto code_r0x000108d983ec;
  case 0x6a:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar24 = param_1[lVar27 * 8 + -2];
    uVar13 = 0;
    goto code_r0x000108d97e18;
  case 0x6d:
    func_0x000108d9b254(puVar32,param_1 + lVar27 * 8 + -0x32,param_1 + lVar27 * 8 + -0x12,
                        param_1 + lVar27 * 8 + -10,*(undefined8 *)(param_1 + lVar27 * 8 + 6),
                        param_1[lVar27 * 8 + -0x2a],param_1[lVar27 * 8 + -0x1a]);
    break;
  case 0x6e:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar24 = param_1[lVar27 * 8 + -2];
    uVar13 = 1;
code_r0x000108d97e18:
    FUN_108d9af20(puVar32,uVar31,uVar13,uVar24);
    break;
  case 0x6f:
    uStack_88 = 0;
    puStack_90 = (uint *)0x9;
    lStack_80 = 0;
    FUN_108d9b494(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + 6),&puStack_90);
code_r0x000108d97a64:
    func_0x000108d93f18(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + 6),1);
    break;
  case 0x70:
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + 6);
    if (puVar11 == (uint *)0x0) {
      func_0x000108d9409c(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2));
      uStack_70 = puVar11;
    }
    else {
      *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
      FUN_108d9c9fc(puVar32,puVar11);
      uStack_70 = puVar11;
    }
    break;
  case 0x71:
  case 0x77:
  case 0x93:
  case 0x9b:
  case 0xa2:
  case 0xa4:
  case 0xab:
  case 0xe7:
  case 0xe9:
  case 0xeb:
  case 0x114:
  case 0x129:
  case 0x143:
  case 0x144:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    break;
  case 0x72:
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + 6);
    if (puVar11 == (uint *)0x0) {
code_r0x000108d9848c:
      func_0x000108d93f18(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -10),1);
      uStack_70 = (uint *)0x0;
    }
    else {
      if (*(long *)(puVar11 + 0x14) != 0) {
        uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
        FUN_108d9c9fc(puVar32,puVar11);
        puVar9 = puVar32;
        FUN_108d9ca60(puVar32,0,0,0,&puStack_90,puVar11,0,0);
        puVar11 = puVar32;
        FUN_108d9cb64(puVar32,0,puVar9,0,0,0,0,0,0,0);
        if (puVar11 == (uint *)0x0) goto code_r0x000108d9848c;
      }
      *(char *)(puVar11 + 2) = (char)param_1[lVar27 * 8 + -2];
      *(undefined8 *)(puVar11 + 0x14) = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
      *(ushort *)((long)puVar11 + 10) = *(ushort *)((long)puVar11 + 10) & 0xfeff;
      uStack_70 = puVar11;
      if (param_1[lVar27 * 8 + -2] != 0x74) {
        *(undefined1 *)((long)puVar32 + 0x22) = 1;
      }
    }
    break;
  case 0x74:
    uVar24 = 0x74;
    goto code_r0x000108d983ec;
  case 0x76:
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x2a);
    uVar19 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x22);
    uVar18 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
    uVar15 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x12);
    uVar17 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar20 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    uVar22 = (undefined2)param_1[lVar27 * 8 + -0x32];
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 8);
    goto code_r0x000108d972e4;
  case 0x78:
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    uVar31 = 0;
    uVar13 = 0;
    uVar19 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar20 = 0;
    uVar22 = 0x80;
code_r0x000108d972e4:
    FUN_108d9cb64(puVar32,uVar16,uVar19,uVar18,uVar15,uVar17,uVar20,uVar22,uVar31,uVar13);
    uStack_70 = puVar32;
    break;
  case 0x79:
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + -0x1a);
    FUN_108d9cb64(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2),0,0,0,0,0,0x180,0,0);
    if (puVar11 != (uint *)0x0) {
      *(ushort *)((long)puVar11 + 10) = *(ushort *)((long)puVar11 + 10) & 0xfeff;
    }
    uStack_70 = puVar11;
    if (puVar32 != (uint *)0x0) {
      *(undefined1 *)(puVar32 + 2) = 0x74;
      *(undefined8 *)(puVar32 + 0x14) = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
      uStack_70 = puVar32;
    }
    break;
  case 0x7a:
    uStack_70 = (uint *)0x1;
    break;
  case 0x7d:
  case 0x98:
  case 0xb4:
  case 0xf3:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -2);
    break;
  case 0x7f:
    puVar11 = *(uint **)puVar32;
    FUN_108d9ccd4(puVar11,*(undefined8 *)(param_1 + lVar27 * 8 + -10),
                  *(undefined8 *)(param_1 + lVar27 * 8 + -2));
    uStack_70 = puVar11;
    if (param_1[lVar27 * 8 + 8] != 0) {
      FUN_108d9cda4(puVar32,puVar11,param_1 + lVar27 * 8 + 6);
    }
    FUN_108d9cde8(puVar32,puVar11,param_1 + lVar27 * 8 + -2);
    break;
  case 0x80:
    puVar11 = *(uint **)puVar32;
    puStack_90 = (uint *)0x0;
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    FUN_108db0138(puVar11,0x74,&puStack_90,0);
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    goto code_r0x000108d97860;
  case 0x81:
    puVar9 = puVar32;
    func_0x000108d99b04(puVar32,0x74,0,0,param_1 + lVar27 * 8 + 6);
    puVar21 = puVar32;
    func_0x000108d99b04(puVar32,0x1b,0,0,param_1 + lVar27 * 8 + -10);
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x7a,puVar21,puVar9,0);
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x12);
    goto code_r0x000108d97860;
  case 0x85:
    puVar32 = *(uint **)puVar32;
    FUN_108d6a6fc(puVar32,0x78);
    uStack_70 = puVar32;
    if (puVar32 != (uint *)0x0) {
      puVar32[0x1c] = 0;
      puVar32[0x1d] = 0;
      puVar32[0x16] = 0;
      puVar32[0x17] = 0;
      puVar32[0x14] = 0;
      puVar32[0x15] = 0;
      puVar32[0x1a] = 0;
      puVar32[0x1b] = 0;
      puVar32[0x18] = 0;
      puVar32[0x19] = 0;
      puVar32[0xe] = 0;
      puVar32[0xf] = 0;
      puVar32[0xc] = 0;
      puVar32[0xd] = 0;
      puVar32[0x12] = 0;
      puVar32[0x13] = 0;
      puVar32[0x10] = 0;
      puVar32[0x11] = 0;
      puVar32[6] = 0;
      puVar32[7] = 0;
      puVar32[4] = 0;
      puVar32[5] = 0;
      puVar32[10] = 0;
      puVar32[0xb] = 0;
      puVar32[8] = 0;
      puVar32[9] = 0;
      puVar32[2] = 0;
      puVar32[3] = 0;
      puVar32[0] = 0;
      puVar32[1] = 0;
    }
    break;
  case 0x86:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    if (uStack_70 != (uint *)0x0) {
      uVar24 = *uStack_70;
      if (1 < (int)uVar24) {
        uVar29 = (ulong)uVar24 + 1;
        puVar11 = uStack_70 + (ulong)uVar24 * 0x1c + -0x27;
        do {
          *(char *)(puVar11 + 0x1c) = (char)*puVar11;
          uVar29 = uVar29 - 1;
          puVar11 = puVar11 + -0x1c;
        } while (2 < uVar29);
      }
      *(undefined1 *)(uStack_70 + 0x11) = 0;
    }
    break;
  case 0x87:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -2);
    if ((uStack_70 != (uint *)0x0) && (0 < (int)*uStack_70)) {
      *(char *)(uStack_70 + (ulong)(*uStack_70 - 1) * 0x1c + 0x11) = (char)param_1[lVar27 * 8 + 6];
    }
    break;
  case 0x89:
    puVar11 = puVar32;
    FUN_108d9ca60(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x2a),param_1 + lVar27 * 8 + -0x22
                  ,param_1 + lVar27 * 8 + -0x1a,param_1 + lVar27 * 8 + -0x12,0,
                  *(undefined8 *)(param_1 + lVar27 * 8 + -2),
                  *(undefined8 *)(param_1 + lVar27 * 8 + 6));
    uStack_70 = puVar11;
    func_0x000108d9cea4(puVar32,puVar11,param_1 + lVar27 * 8 + -10);
    break;
  case 0x8a:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x2a);
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + -0x1a);
    goto code_r0x000108d9850c;
  case 0x8b:
    if ((((*(long *)(param_1 + lVar27 * 8 + -0x2a) == 0) && (param_1[lVar27 * 8 + -8] == 0)) &&
        (*(long *)(param_1 + lVar27 * 8 + -2) == 0)) && (*(long *)(param_1 + lVar27 * 8 + 6) == 0))
    {
      uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -0x1a);
      break;
    }
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + -0x1a);
    uVar24 = *puVar11;
    if (uVar24 == 1) {
      puVar11 = puVar32;
      FUN_108d9ca60(puVar32,*(long *)(param_1 + lVar27 * 8 + -0x2a),0,0,param_1 + lVar27 * 8 + -10,0
                    ,*(undefined8 *)(param_1 + lVar27 * 8 + -2),
                    *(undefined8 *)(param_1 + lVar27 * 8 + 6));
      if (puVar11 != (uint *)0x0) {
        uVar24 = *puVar11;
        lVar30 = *(long *)(param_1 + lVar27 * 8 + -0x1a);
        uVar31 = *(undefined8 *)(lVar30 + 0x10);
        *(undefined8 *)(puVar11 + (long)(int)uVar24 * 0x1c + -0x16) = *(undefined8 *)(lVar30 + 0x18)
        ;
        *(undefined8 *)(puVar11 + (long)(int)uVar24 * 0x1c + -0x18) = uVar31;
        *(undefined8 *)(puVar11 + (long)(int)uVar24 * 0x1c + -0x10) = *(undefined8 *)(lVar30 + 0x30)
        ;
        *(undefined8 *)(lVar30 + 0x30) = 0;
        *(undefined8 *)(lVar30 + 0x10) = 0;
        *(undefined8 *)(lVar30 + 0x18) = 0;
      }
      uStack_70 = puVar11;
      func_0x000108d93fd8(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a));
      break;
    }
    if (1 < (int)uVar24) {
      uVar29 = (ulong)uVar24 + 1;
      puVar9 = puVar11 + (ulong)uVar24 * 0x1c + -0x27;
      do {
        *(char *)(puVar9 + 0x1c) = (char)*puVar9;
        uVar29 = uVar29 - 1;
        puVar9 = puVar9 + -0x1c;
      } while (2 < uVar29);
    }
    *(undefined1 *)(puVar11 + 0x11) = 0;
    puVar11 = puVar32;
    FUN_108d9cb64(puVar32,0,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a),0,0,0,0,0x200,0,0);
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x2a);
code_r0x000108d9850c:
    FUN_108d9ca60(puVar32,uVar31,0,0,param_1 + lVar27 * 8 + -10,puVar11,
                  *(undefined8 *)(param_1 + lVar27 * 8 + -2),
                  *(undefined8 *)(param_1 + lVar27 * 8 + 6));
    uStack_70 = puVar32;
    break;
  case 0x8e:
    puVar32 = *(uint **)puVar32;
    FUN_108d9cf10(puVar32,0,param_1 + lVar27 * 8 + -2,param_1 + lVar27 * 8 + 6);
    uStack_70 = puVar32;
    break;
  case 0x90:
    lVar30 = -0x18;
    puVar11 = (uint *)0x0;
    goto code_r0x000108d97d6c;
  case 0x91:
    lVar30 = -0x38;
    puVar11 = param_1 + lVar27 * 8 + -2;
code_r0x000108d97d6c:
    puVar9 = (uint *)0x0;
code_r0x000108d97d70:
    func_0x000108d9d000(puVar32,(long)param_1 + lVar30 + lVar6,puVar11,puVar9);
    uStack_70 = (uint *)CONCAT44(uStack_70._4_4_,(int)puVar32);
    break;
  case 0x92:
    lVar30 = -0x58;
    puVar11 = param_1 + lVar27 * 8 + -10;
    puVar9 = param_1 + lVar27 * 8 + -2;
    goto code_r0x000108d97d70;
  case 0x97:
    uVar24 = 1;
    goto code_r0x000108d98478;
  case 0x9c:
    puVar32 = *(uint **)puVar32;
    FUN_108d9ccd4(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x12),
                  *(undefined8 *)(param_1 + lVar27 * 8 + -2));
    uStack_70 = puVar32;
    if (puVar32 != (uint *)0x0) {
      *(char *)(*(long *)(puVar32 + 2) + (long)(int)*puVar32 * 0x20 + -8) =
           (char)param_1[lVar27 * 8 + 6];
    }
    break;
  case 0x9d:
    puVar32 = *(uint **)puVar32;
    FUN_108d9ccd4(puVar32,0,*(undefined8 *)(param_1 + lVar27 * 8 + -2));
    uStack_70 = puVar32;
    if ((puVar32 != (uint *)0x0) && (*(long *)(puVar32 + 2) != 0)) {
      *(char *)(*(long *)(puVar32 + 2) + 0x18) = (char)param_1[lVar27 * 8 + 6];
    }
    break;
  case 0xa5:
    uStack_70 = (uint *)0x0;
    uStack_68 = 0;
    break;
  case 0xa6:
    uStack_68 = 0;
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    break;
  case 0xa7:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 6);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -10);
    break;
  case 0xa8:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -10);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    break;
  case 0xa9:
    lVar30 = *(long *)(param_1 + lVar27 * 8 + -0x22);
    if (lVar30 != 0) {
      *(undefined8 *)(lVar30 + 8) = *(undefined8 *)(puVar32 + 0xa0);
      *(long *)(puVar32 + 0xa0) = lVar30;
      *(undefined1 *)((long)puVar32 + 0x1f1) = 1;
    }
    func_0x000108d9cea4(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -10),
                        param_1 + lVar27 * 8 + -2);
    func_0x000108d9d16c(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -10),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6));
    break;
  case 0xac:
    lVar30 = *(long *)(param_1 + lVar27 * 8 + -0x32);
    if (lVar30 != 0) {
      *(undefined8 *)(lVar30 + 8) = *(undefined8 *)(puVar32 + 0xa0);
      *(long *)(puVar32 + 0xa0) = lVar30;
      *(undefined1 *)((long)puVar32 + 0x1f1) = 1;
    }
    func_0x000108d9cea4(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a),
                        param_1 + lVar27 * 8 + -0x12);
    piVar28 = *(int **)(param_1 + lVar27 * 8 + -2);
    if ((piVar28 != (int *)0x0) && (*(int *)(*(long *)puVar32 + 0x70) < *piVar28)) {
      func_0x000108d6a85c(puVar32,&UNK_10f51a277);
      piVar28 = *(int **)(param_1 + lVar27 * 8 + -2);
    }
    func_0x000108d9db40(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a),piVar28,
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),(char)param_1[lVar27 * 8 + -0x22])
    ;
    break;
  case 0xad:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    puVar11 = *(uint **)puVar32;
    goto code_r0x000108d98264;
  case 0xae:
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    puVar11 = *(uint **)puVar32;
    uVar31 = 0;
code_r0x000108d98264:
    FUN_108d9ccd4(puVar11,uVar31,uVar13);
    uStack_70 = puVar11;
    FUN_108d9cda4(puVar32,puVar11,param_1 + lVar27 * 8 + -10);
    break;
  case 0xaf:
    lVar30 = *(long *)(param_1 + lVar27 * 8 + -0x22);
    if (lVar30 != 0) {
      *(undefined8 *)(lVar30 + 8) = *(undefined8 *)(puVar32 + 0xa0);
      *(long *)(puVar32 + 0xa0) = lVar30;
      *(undefined1 *)((long)puVar32 + 0x1f1) = 1;
    }
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    uVar23 = (undefined1)param_1[lVar27 * 8 + -0x1a];
    goto code_r0x000108d97ef4;
  case 0xb0:
    lVar30 = *(long *)(param_1 + lVar27 * 8 + -0x2a);
    if (lVar30 != 0) {
      *(undefined8 *)(lVar30 + 8) = *(undefined8 *)(puVar32 + 0xa0);
      *(long *)(puVar32 + 0xa0) = lVar30;
      *(undefined1 *)((long)puVar32 + 0x1f1) = 1;
    }
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x12);
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar23 = (undefined1)param_1[lVar27 * 8 + -0x22];
    uVar13 = 0;
code_r0x000108d97ef4:
    func_0x000108d9ecf0(puVar32,uVar31,uVar13,uVar16,uVar23);
    break;
  case 0xb1:
    uVar23 = (undefined1)param_1[lVar27 * 8 + 6];
    goto code_r0x000108d972f0;
  case 0xb2:
    uVar23 = 5;
code_r0x000108d972f0:
    uStack_70 = (uint *)CONCAT71(uStack_70._1_7_,uVar23);
    break;
  case 0xb5:
    puVar32 = *(uint **)puVar32;
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    goto code_r0x000108d981bc;
  case 0xb6:
    puVar32 = *(uint **)puVar32;
    uVar31 = 0;
code_r0x000108d981bc:
    FUN_108d9ffc8(puVar32,uVar31,param_1 + lVar27 * 8 + 6);
    uStack_70 = puVar32;
    break;
  case 0xb7:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 8);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    goto code_r0x000108d97e40;
  case 0xb8:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -10);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -2);
    goto code_r0x000108d98004;
  case 0xb9:
  case 0xbe:
  case 0xbf:
    uVar23 = *(undefined1 *)((long)param_1 + lVar30 + 0x12);
    goto code_r0x000108d96d74;
  case 0xba:
  case 0xbb:
    uVar23 = 0x1b;
code_r0x000108d96d74:
    func_0x000108d99b04(puVar32,uVar23,0,0,param_1 + lVar27 * 8 + 6);
code_r0x000108d96d80:
    uVar29 = *(ulong *)(param_1 + lVar27 * 8 + 6);
    uStack_70 = puVar32;
    uStack_68 = uVar29;
    goto code_r0x000108d98008;
  case 0xbc:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x1b,0,0,param_1 + lVar27 * 8 + -10);
    puVar9 = puVar32;
    func_0x000108d99b04(puVar32,0x1b,0,0,param_1 + lVar27 * 8 + 6);
    func_0x000108d99b04(puVar32,0x7a,puVar11,puVar9,0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -10);
    uStack_70 = puVar32;
    goto code_r0x000108d98004;
  case 0xbd:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x1b,0,0,param_1 + lVar27 * 8 + -0x1a);
    puVar9 = puVar32;
    func_0x000108d99b04(puVar32,0x1b,0,0,param_1 + lVar27 * 8 + -10);
    puVar21 = puVar32;
    func_0x000108d99b04(puVar32,0x1b,0,0,param_1 + lVar27 * 8 + 6);
    puVar8 = puVar32;
    func_0x000108d99b04(puVar32,0x7a,puVar9,puVar21,0);
    func_0x000108d99b04(puVar32,0x7a,puVar11,puVar8,0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x1a);
    uStack_70 = puVar32;
    goto code_r0x000108d98004;
  case 0xc0:
    puVar11 = param_1 + lVar27 * 8 + 6;
    if (((param_1[lVar27 * 8 + 8] < 2) || (**(char **)puVar11 != '#')) ||
       ((ulong)(byte)(*(char **)puVar11)[1] - 0x3a < 0xfffffffffffffff6)) {
      puVar9 = puVar32;
      func_0x000108d99b04(puVar32,0x87,0,0,puVar11);
      uStack_70 = puVar9;
      FUN_108da0078(puVar32,puVar9);
    }
    else if (*(char *)((long)puVar32 + 0x1e) == '\0') {
      func_0x000108d6a85c(puVar32,&UNK_10f518f4a);
      uStack_70 = (uint *)0x0;
    }
    else {
      func_0x000108d99b04(puVar32,0x9f,0,0,puVar11);
      uStack_70 = puVar32;
      if (puVar32 != (uint *)0x0) {
        FUN_108d934c8(*(long *)puVar11 + 1,puVar32 + 0xb);
      }
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 6);
    lStack_60 = uStack_68 + param_1[lVar27 * 8 + 8];
    break;
  case 0xc1:
    FUN_108da0288(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -10),param_1 + lVar27 * 8 + 6,1);
    goto code_r0x000108d97948;
  case 0xc2:
    func_0x000108d99b04(puVar32,0x26,*(undefined8 *)(param_1 + lVar27 * 8 + -0x12),0,
                        param_1 + lVar27 * 8 + -2);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x22);
    uStack_70 = puVar32;
    goto code_r0x000108d98004;
  case 0xc3:
    piVar28 = *(int **)(param_1 + lVar27 * 8 + -2);
    if ((piVar28 != (int *)0x0) && (*(int *)(*(long *)puVar32 + 0x80) < *piVar28)) {
      func_0x000108d6a85c(puVar32,&UNK_10f518f62);
      piVar28 = *(int **)(param_1 + lVar27 * 8 + -2);
    }
    FUN_108da02d8(puVar32,piVar28,param_1 + lVar27 * 8 + -0x1a);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x1a);
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 6) + (ulong)param_1[lVar27 * 8 + 8];
    uStack_70 = puVar32;
    if ((short)param_1[lVar27 * 8 + -10] != 0 && puVar32 != (uint *)0x0) {
      puVar32[1] = puVar32[1] | 0x10;
    }
    break;
  case 0xc4:
    FUN_108da02d8(puVar32,0,param_1 + lVar27 * 8 + -0x12);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x12);
    uStack_70 = puVar32;
    goto code_r0x000108d98004;
  case 0xc5:
    FUN_108da02d8(puVar32,0,param_1 + lVar27 * 8 + 6);
    goto code_r0x000108d96d80;
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
    func_0x000108d99b04(puVar32,*(undefined1 *)((long)param_1 + lVar30 + -0xe),
                        *(undefined8 *)(param_1 + lVar27 * 8 + -10),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -8);
    uStack_70 = puVar32;
    goto code_r0x000108d97e40;
  case 0xce:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 8);
    lStack_60 = 0;
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    break;
  case 0xcf:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 8);
    lStack_60 = 1;
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    break;
  case 0xd0:
    uVar31 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar31,0,*(undefined8 *)(param_1 + lVar27 * 8 + 6));
    uVar13 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar13,uVar31,*(undefined8 *)(param_1 + lVar27 * 8 + -10));
    puVar11 = puVar32;
    FUN_108da02d8(puVar32,uVar13,param_1 + lVar27 * 8 + -2);
    uStack_70 = puVar11;
    if (param_1[lVar27 * 8 + 2] != 0) {
      func_0x000108d99b04(puVar32,0x13,puVar11,0,0);
      uStack_70 = puVar32;
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -8);
    goto code_r0x000108d97ea8;
  case 0xd1:
    uVar31 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar31,0,*(undefined8 *)(param_1 + lVar27 * 8 + -10));
    uVar13 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar13,uVar31,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a));
    uVar31 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar31,uVar13,*(undefined8 *)(param_1 + lVar27 * 8 + 6));
    puVar11 = puVar32;
    FUN_108da02d8(puVar32,uVar31,param_1 + lVar27 * 8 + -0x12);
    uStack_70 = puVar11;
    if (param_1[lVar27 * 8 + -0xe] != 0) {
      func_0x000108d99b04(puVar32,0x13,puVar11,0,0);
      uStack_70 = puVar32;
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x18);
code_r0x000108d97ea8:
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 10);
    if (uStack_70 != (uint *)0x0) {
      uStack_70[1] = uStack_70[1] | 0x80;
    }
    break;
  case 0xd2:
    func_0x000108d99b04(puVar32,*(undefined1 *)((long)param_1 + lVar30 + 0x12),
                        *(undefined8 *)(param_1 + lVar27 * 8 + -2),0,0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8);
    uStack_70 = puVar32;
    goto code_r0x000108d98004;
  case 0xd3:
    func_0x000108d99b04(puVar32,0x4d,*(undefined8 *)(param_1 + lVar27 * 8 + -10),0,0);
code_r0x000108d97948:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -8);
    uStack_70 = puVar32;
code_r0x000108d98004:
    uVar29 = *(ulong *)(param_1 + lVar27 * 8 + 6);
code_r0x000108d98008:
    uVar24 = param_1[lVar27 * 8 + 8];
code_r0x000108d9800c:
    lStack_60 = uVar29 + uVar24;
    break;
  case 0xd4:
    func_0x000108d99b04(puVar32,0x49,*(undefined8 *)(param_1 + lVar27 * 8 + -10),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -8);
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 10);
    uStack_70 = puVar11;
    if ((puVar11 == (uint *)0x0 || *(char **)(param_1 + lVar27 * 8 + 6) == (char *)0x0) ||
       (**(char **)(param_1 + lVar27 * 8 + 6) != 'e')) break;
    uVar31 = *(undefined8 *)puVar32;
    uVar23 = 0x4c;
    goto code_r0x000108d97f4c;
  case 0xd5:
    func_0x000108d99b04(puVar32,0x94,*(undefined8 *)(param_1 + lVar27 * 8 + -0x12),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x10);
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 10);
    uStack_70 = puVar11;
    if ((puVar11 == (uint *)0x0 || *(char **)(param_1 + lVar27 * 8 + 6) == (char *)0x0) ||
       (**(char **)(param_1 + lVar27 * 8 + 6) != 'e')) break;
    uVar31 = *(undefined8 *)puVar32;
    uVar23 = 0x4d;
code_r0x000108d97f4c:
    *(undefined1 *)puVar11 = uVar23;
    uStack_70 = puVar11;
    func_0x000108d93df0(uVar31,*(undefined8 *)(puVar11 + 6));
    puVar11[6] = 0;
    puVar11[7] = 0;
    break;
  case 0xd6:
  case 0xd7:
    uVar23 = *(undefined1 *)((long)param_1 + lVar30 + -0xe);
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    goto code_r0x000108d97e2c;
  case 0xd8:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar23 = 0x9d;
    goto code_r0x000108d97e2c;
  case 0xd9:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    uVar23 = 0x9e;
code_r0x000108d97e2c:
    func_0x000108d99b04(puVar32,uVar23,uVar31,0,0);
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -2);
    uStack_70 = puVar32;
code_r0x000108d97e40:
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 10);
    break;
  case 0xdc:
    uVar31 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar31,0,*(undefined8 *)(param_1 + lVar27 * 8 + -10));
    uVar13 = *(undefined8 *)puVar32;
    FUN_108d9ccd4(uVar13,uVar31,*(undefined8 *)(param_1 + lVar27 * 8 + 6));
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x4a,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a),0,0);
    uStack_70 = puVar11;
    if (puVar11 == (uint *)0x0) {
      FUN_108d93e84(*(undefined8 *)puVar32,uVar13);
    }
    else {
      *(undefined8 *)(puVar11 + 8) = uVar13;
    }
    if (param_1[lVar27 * 8 + -0x12] != 0) {
      func_0x000108d99b04(puVar32,0x13,puVar11,0,0);
      uStack_70 = puVar32;
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x18);
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 10);
    break;
  case 0xdf:
    piVar28 = *(int **)(param_1 + lVar27 * 8 + -2);
    if (piVar28 != (int *)0x0) {
      if (*piVar28 != 1) {
        func_0x000108d99b04(puVar32,0x4b,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a),0,0);
        if (puVar11 != (uint *)0x0) {
          *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
          goto code_r0x000108d986ac;
        }
        uStack_70 = puVar11;
        FUN_108d93e84(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2));
        goto code_r0x000108d986b8;
      }
      lVar30 = **(long **)(piVar28 + 2);
      **(long **)(piVar28 + 2) = 0;
      FUN_108d93e84(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2));
      if (lVar30 != 0) {
        *(uint *)(lVar30 + 4) = *(uint *)(lVar30 + 4) & 0xfffffcff | 0x200;
      }
      uVar25 = 0x4e;
      if (param_1[lVar27 * 8 + -0x12] == 0) {
        uVar25 = 0x4f;
      }
      puVar11 = *(uint **)(param_1 + lVar27 * 8 + -0x1a);
      goto code_r0x000108d986d0;
    }
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x84,0,0,
                        &PTR_DAT_110ac4a88 + (long)(int)param_1[lVar27 * 8 + -0x12] * 2);
    uStack_70 = puVar11;
    func_0x000108d93df0(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a));
    goto code_r0x000108d986dc;
  case 0xe0:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x77,0,0,0);
    uStack_70 = puVar11;
    if (puVar11 == (uint *)0x0) {
      func_0x000108d93f18(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2),1);
    }
    else {
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
      puVar11[1] = puVar11[1] | 0x200800;
      FUN_108da0340(puVar32,puVar11);
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -10);
    goto code_r0x000108d986e0;
  case 0xe1:
    func_0x000108d99b04(puVar32,0x4b,*(undefined8 *)(param_1 + lVar27 * 8 + -0x1a),0,0);
    if (puVar11 == (uint *)0x0) {
      uStack_70 = puVar11;
      func_0x000108d93f18(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2),1);
      puVar11 = (uint *)0x0;
    }
    else {
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
      puVar11[1] = puVar11[1] | 0x200800;
code_r0x000108d986ac:
      uStack_70 = puVar11;
      FUN_108da0340(puVar32,puVar11);
    }
code_r0x000108d986b8:
    if (param_1[lVar27 * 8 + -0x12] != 0) {
      uVar25 = 0x13;
      lVar30 = 0;
code_r0x000108d986d0:
      func_0x000108d99b04(puVar32,uVar25,puVar11,lVar30,0);
      uStack_70 = puVar32;
    }
code_r0x000108d986dc:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x18);
    goto code_r0x000108d986e0;
  case 0xe2:
    uVar31 = *(undefined8 *)puVar32;
    FUN_108d9cf10(uVar31,0,param_1 + lVar27 * 8 + -2,param_1 + lVar27 * 8 + 6);
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x4b,*(undefined8 *)(param_1 + lVar27 * 8 + -0x12),0,0);
    uStack_70 = puVar11;
    if (puVar11 == (uint *)0x0) {
      func_0x000108d93fd8(*(undefined8 *)puVar32,uVar31);
      puVar9 = (uint *)0x0;
    }
    else {
      puVar21 = puVar32;
      FUN_108d9cb64(puVar32,0,uVar31,0,0,0,0,0,0,0);
      puVar9 = uStack_70;
      *(uint **)(puVar11 + 8) = puVar21;
      puVar11[1] = puVar11[1] | 0x200800;
      FUN_108da0340(puVar32,uStack_70);
    }
    if (param_1[lVar27 * 8 + -10] != 0) {
      func_0x000108d99b04(puVar32,0x13,puVar9,0,0);
      uStack_70 = puVar32;
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x10);
    uVar29 = *(ulong *)(param_1 + lVar27 * 8 + 6);
    if (uVar29 == 0) {
      uVar29 = *(ulong *)(param_1 + lVar27 * 8 + -2);
      lVar30 = -0x10;
    }
    else {
      lVar30 = 0x10;
    }
    uVar24 = *(uint *)((long)param_1 + lVar30 + lVar6);
    goto code_r0x000108d9800c;
  case 0xe3:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x14,0,0,0);
    uStack_70 = puVar11;
    if (puVar11 == (uint *)0x0) {
      func_0x000108d93f18(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2),1);
    }
    else {
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
      puVar11[1] = puVar11[1] | 0x200800;
      FUN_108da0340(puVar32,puVar11);
    }
    goto code_r0x000108d985c8;
  case 0xe4:
    puVar11 = puVar32;
    func_0x000108d99b04(puVar32,0x88,*(undefined8 *)(param_1 + lVar27 * 8 + -0x12),0,0);
    uStack_70 = puVar11;
    if (puVar11 == (uint *)0x0) {
      FUN_108d93e84(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -10));
      func_0x000108d93df0(*(undefined8 *)puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2));
    }
    else {
      uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
      if (*(long *)(param_1 + lVar27 * 8 + -2) != 0) {
        uVar31 = *(undefined8 *)puVar32;
        FUN_108d9ccd4();
      }
      *(undefined8 *)(puVar11 + 8) = uVar31;
      FUN_108da0340(puVar32,puVar11);
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x1a);
    goto code_r0x000108d986e0;
  case 0xe5:
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar31 = *(undefined8 *)puVar32;
    goto code_r0x000108d97854;
  case 0xe6:
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar31 = *(undefined8 *)puVar32;
    uVar13 = 0;
code_r0x000108d97854:
    FUN_108d9ccd4(uVar31,uVar13,uVar16);
code_r0x000108d9785c:
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + 6);
code_r0x000108d97860:
    puVar32 = *(uint **)puVar32;
code_r0x000108d97864:
    FUN_108d9ccd4(puVar32,uVar31,puVar11);
    uStack_70 = puVar32;
    break;
  case 0xed:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    goto code_r0x000108d9785c;
  case 0xee:
    puVar11 = *(uint **)(param_1 + lVar27 * 8 + 6);
    puVar32 = *(uint **)puVar32;
    uVar31 = 0;
    goto code_r0x000108d97864;
  case 0xef:
    puVar11 = param_1 + lVar27 * 8 + -0x32;
    puVar9 = param_1 + lVar27 * 8 + -0x2a;
    uVar31 = *(undefined8 *)puVar32;
    FUN_108d9cf10(uVar31,0,param_1 + lVar27 * 8 + -0x1a,0);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + -10);
    uVar24 = param_1[lVar27 * 8 + -0x4a];
    puVar21 = param_1 + lVar27 * 8 + -0x52;
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    lVar30 = (ulong)param_1[lVar27 * 8 + -0x3a] << 0x20;
    goto code_r0x000108d97fa8;
  case 0xf0:
  case 0x123:
    uVar24 = 2;
    goto code_r0x000108d983ec;
  case 0xf4:
    FUN_108da0288(puVar32,0,param_1 + lVar27 * 8 + -2,1);
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
    puVar9 = *(uint **)puVar32;
    goto code_r0x000108d97d9c;
  case 0xf5:
    FUN_108da0288(puVar32,0,param_1 + lVar27 * 8 + -2,1);
    puVar9 = *(uint **)puVar32;
    uVar31 = 0;
code_r0x000108d97d9c:
    FUN_108d9ccd4(puVar9,uVar31,puVar11);
    uStack_70 = puVar9;
    FUN_108d9cda4(puVar32,puVar9,param_1 + lVar27 * 8 + -10);
    if (puVar9 != (uint *)0x0) {
      uVar24 = *puVar9;
      if (*(int *)(*(long *)puVar32 + 0x70) < (int)uVar24) {
        func_0x000108d6a85c(puVar32,&UNK_10f51a277);
        uVar24 = *puVar9;
      }
      *(char *)(*(long *)(puVar9 + 2) + (long)(int)uVar24 * 0x20 + -8) =
           (char)param_1[lVar27 * 8 + 6];
    }
    break;
  case 0xf8:
    FUN_108da03a0(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + 6),param_1[lVar27 * 8 + -2]);
    break;
  case 0xf9:
  case 0xfa:
    FUN_108da0604(puVar32);
    break;
  case 0xfb:
    lVar30 = -0x18;
    puVar11 = param_1 + lVar27 * 8 + 6;
    puVar9 = (uint *)0x0;
    goto code_r0x000108d97b3c;
  case 0xfc:
    lVar30 = -0x58;
    lVar5 = -0x38;
    lVar7 = lVar27 * 8 + 6;
    goto code_r0x000108d978bc;
  case 0xfd:
    lVar30 = -0x78;
    lVar5 = -0x58;
    lVar7 = lVar27 * 8 + -2;
code_r0x000108d978bc:
    puVar9 = param_1 + lVar7;
    puVar11 = (uint *)((long)param_1 + lVar5 + lVar6);
code_r0x000108d97b3c:
    uVar31 = 0;
code_r0x000108d97b40:
    func_0x000108da0668(puVar32,(long)param_1 + lVar30 + lVar6,puVar11,puVar9,uVar31);
    break;
  case 0xfe:
    lVar30 = -0x58;
    lVar5 = -0x38;
    lVar7 = lVar27 * 8 + 6;
    goto code_r0x000108d97a84;
  case 0xff:
    lVar30 = -0x78;
    lVar5 = -0x58;
    lVar7 = lVar27 * 8 + -2;
code_r0x000108d97a84:
    puVar9 = param_1 + lVar7;
    puVar11 = (uint *)((long)param_1 + lVar5 + lVar6);
    uVar31 = 1;
    goto code_r0x000108d97b40;
  case 0x108:
    puStack_90 = *(uint **)(param_1 + lVar27 * 8 + -0x12);
    uStack_88 = CONCAT44(uStack_88._4_4_,
                         param_1[lVar27 * 8 + 8] + (param_1[lVar27 * 8 + 6] - (int)puStack_90));
    func_0x000108da4694(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -2),&puStack_90);
    break;
  case 0x109:
    func_0x000108da4984(puVar32,param_1 + lVar27 * 8 + -0x32,param_1 + lVar27 * 8 + -0x2a,
                        param_1[lVar27 * 8 + -0x22],param_1[lVar27 * 8 + -0x1a],
                        *(undefined8 *)(param_1 + lVar27 * 8 + -0x18),
                        *(undefined8 *)(param_1 + lVar27 * 8 + -10),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),param_1[lVar27 * 8 + -0x4a],
                        param_1[lVar27 * 8 + -0x3a]);
    if (param_1[lVar27 * 8 + -0x28] == 0) {
      uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x30);
      uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -0x32);
    }
    else {
      uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x28);
      uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -0x2a);
    }
    break;
  case 0x10a:
  case 0x10d:
    uVar24 = 0x23;
    goto code_r0x000108d983ec;
  case 0x10b:
    uVar24 = 0x1f;
    goto code_r0x000108d983ec;
  case 0x10c:
    uVar24 = 0x31;
    goto code_r0x000108d983ec;
  case 0x10e:
  case 0x10f:
    uStack_70 = (uint *)(ulong)*(byte *)((long)param_1 + lVar30 + 0x12);
    uStack_68 = 0;
    break;
  case 0x110:
    uStack_70 = (uint *)0x6e;
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 6);
    break;
  case 0x115:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + lVar27 * 8 + -10) + 0x40) + 0x38) = uVar31;
    *(undefined8 *)(*(long *)(param_1 + lVar27 * 8 + -10) + 0x40) = uVar31;
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -10);
    break;
  case 0x116:
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + -2);
    *(uint **)(uStack_70 + 0x10) = uStack_70;
    break;
  case 0x118:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + 8);
    uStack_70 = *(uint **)(param_1 + lVar27 * 8 + 6);
    puVar10 = &UNK_10f518f84;
    goto code_r0x000108d97d54;
  case 0x11a:
    puVar10 = &UNK_10f518fe3;
    goto code_r0x000108d97d54;
  case 0x11b:
    puVar10 = &UNK_10f519037;
code_r0x000108d97d54:
    func_0x000108d6a85c(puVar32,puVar10);
    break;
  case 0x11c:
    puVar32 = *(uint **)puVar32;
    func_0x000108da4e20(puVar32,param_1 + lVar27 * 8 + -0x1a,
                        *(undefined8 *)(param_1 + lVar27 * 8 + -2),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),(char)param_1[lVar27 * 8 + -0x22])
    ;
    uStack_70 = puVar32;
    break;
  case 0x11d:
    puVar32 = *(uint **)puVar32;
    func_0x000108da4eb8(puVar32,param_1 + lVar27 * 8 + -10,
                        *(undefined8 *)(param_1 + lVar27 * 8 + -2),
                        *(undefined8 *)(param_1 + lVar27 * 8 + 6),(char)param_1[lVar27 * 8 + -0x1a])
    ;
    uStack_70 = puVar32;
    break;
  case 0x11e:
    puVar32 = *(uint **)puVar32;
    func_0x000108da4f44(puVar32,param_1 + lVar27 * 8 + -10,*(undefined8 *)(param_1 + lVar27 * 8 + 6)
                       );
    uStack_70 = puVar32;
    break;
  case 0x11f:
    puVar32 = *(uint **)puVar32;
    func_0x000108da4fb0(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + 6));
    uStack_70 = puVar32;
    break;
  case 0x120:
    func_0x000108d99b04(puVar32,0x39,0,0,0);
    uStack_70 = puVar32;
    if (puVar32 != (uint *)0x0) {
      *(undefined1 *)((long)puVar32 + 1) = 4;
    }
code_r0x000108d985c8:
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x12);
    goto code_r0x000108d986e0;
  case 0x121:
    func_0x000108d99b04(puVar32,0x39,0,0,param_1 + lVar27 * 8 + -2);
    if (puVar32 != (uint *)0x0) {
      *(char *)((long)puVar32 + 1) = (char)param_1[lVar27 * 8 + -0x12];
    }
    uStack_68 = *(ulong *)(param_1 + lVar27 * 8 + -0x22);
    uStack_70 = puVar32;
code_r0x000108d986e0:
    lStack_60 = *(long *)(param_1 + lVar27 * 8 + 6) + (ulong)param_1[lVar27 * 8 + 8];
    break;
  case 0x124:
    uVar24 = 3;
code_r0x000108d983ec:
    uStack_70 = (uint *)(ulong)uVar24;
    break;
  case 0x125:
    FUN_108da501c(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + 6),param_1[lVar27 * 8 + -2]);
    break;
  case 0x126:
    uVar19 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x12);
    uVar18 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    puVar10 = &UNK_110ac4f40;
    uVar16 = 0x18;
    uVar31 = uVar19;
    goto code_r0x000108d976a4;
  case 0x127:
    uVar19 = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
    puVar10 = &UNK_110ac5008;
    uVar16 = 0x19;
    uVar18 = 0;
    uVar31 = 0;
    uVar13 = uVar19;
code_r0x000108d976a4:
    func_0x000108dc59b8(puVar32,uVar16,puVar10,uVar19,uVar31,uVar18,uVar13);
    break;
  case 300:
    puVar9 = (uint *)0x0;
    puVar11 = (uint *)0x0;
    goto code_r0x000108d97838;
  case 0x12d:
    puVar9 = param_1 + lVar27 * 8 + -2;
    puVar11 = param_1 + lVar27 * 8 + 6;
code_r0x000108d97838:
    FUN_108da5130(puVar32,puVar9,puVar11);
    break;
  case 0x12e:
    puVar9 = (uint *)0x0;
    puVar11 = (uint *)0x0;
    goto code_r0x000108d97700;
  case 0x12f:
    puVar9 = param_1 + lVar27 * 8 + -2;
    puVar11 = param_1 + lVar27 * 8 + 6;
code_r0x000108d97700:
    FUN_108da5334(puVar32,puVar9,puVar11);
    break;
  case 0x130:
    func_0x000108da54dc(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + -0x12),
                        param_1 + lVar27 * 8 + 6);
    break;
  case 0x131:
    func_0x000108da5948(puVar32,param_1 + lVar27 * 8 + 6);
    break;
  case 0x132:
    *(undefined1 *)(*(long *)puVar32 + 0x152) = 0;
    func_0x000108da5c28(puVar32,*(undefined8 *)(param_1 + lVar27 * 8 + 6));
    break;
  case 0x135:
    puVar11 = (uint *)0x0;
    goto code_r0x000108d978cc;
  case 0x136:
    puVar11 = param_1 + lVar27 * 8 + 6;
code_r0x000108d978cc:
    func_0x000108da5e8c(puVar32,puVar11);
    break;
  case 0x137:
    func_0x000108da60cc(puVar32,param_1 + lVar27 * 8 + -0x12,param_1 + lVar27 * 8 + -10,
                        param_1 + lVar27 * 8 + 6,param_1[lVar27 * 8 + -0x1a]);
    break;
  case 0x13a:
    FUN_108dc7a44(puVar32);
    puVar32[0x96] = 0;
    puVar32[0x97] = 0;
    puVar32[0x98] = 0;
    break;
  case 0x13c:
  case 0x13d:
  case 0x13e:
    if (*(long *)(puVar32 + 0x96) == 0) {
      *(undefined8 *)(puVar32 + 0x96) = *(undefined8 *)(param_1 + lVar27 * 8 + 6);
      uVar24 = param_1[lVar27 * 8 + 8];
    }
    else {
      uVar24 = ((int)*(undefined8 *)(param_1 + lVar27 * 8 + 6) + param_1[lVar27 * 8 + 8]) -
               (int)*(long *)(puVar32 + 0x96);
    }
    puVar32[0x98] = uVar24;
    break;
  case 0x145:
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
    uVar19 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x22);
    uVar24 = param_1[lVar27 * 8 + -0x20];
    uVar31 = 0;
    goto code_r0x000108d977e4;
  case 0x146:
    uVar31 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x32);
    uVar16 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x1a);
    uVar19 = *(undefined8 *)(param_1 + lVar27 * 8 + -2);
    uVar13 = *(undefined8 *)(param_1 + lVar27 * 8 + -0x22);
    uVar24 = param_1[lVar27 * 8 + -0x20];
code_r0x000108d977e4:
    FUN_108da6224(puVar32,uVar31,uVar13,uVar24,uVar16,uVar19);
    uStack_70 = puVar32;
  }
LAB_108d986f0:
  bVar2 = (&UNK_10dfa2ae0)[(ulong)param_2 * 2];
  bVar3 = (&UNK_10dfa2ae1)[(ulong)param_2 * 2];
  uVar24 = *param_1 - (uint)bVar3;
  *param_1 = uVar24;
  uVar4 = *(ushort *)
           (&UNK_10dfa1f14 +
           ((long)*(short *)(&UNK_10dfa2e66 +
                            (ulong)(ushort)param_1[lVar27 * 8 + (ulong)bVar3 * -8 + 4] * 2) +
           (ulong)bVar2) * 2);
  if (uVar4 < 0x282) {
    if (bVar3 == 0) {
      FUN_108d96bc4(param_1,uVar4,(ulong)bVar2,&uStack_70);
    }
    else {
      *param_1 = uVar24 + 1;
      param_1 = param_1 + lVar27 * 8 + (ulong)(bVar3 - 1) * -8 + 4;
      *(ushort *)param_1 = uVar4;
      *(byte *)((long)param_1 + 2) = bVar2;
      *(ulong *)(param_1 + 4) = uStack_68;
      *(uint **)(param_1 + 2) = uStack_70;
      *(long *)(param_1 + 6) = lStack_60;
    }
  }
  else {
    uVar31 = *(undefined8 *)(param_1 + 2);
    if (-1 < (int)uVar24) {
      do {
        FUN_108d9884c(*(undefined8 *)(param_1 + 2),
                      *(undefined1 *)((long)param_1 + (ulong)uVar24 * 0x20 + 0x12),
                      param_1 + (ulong)uVar24 * 8 + 6);
        uVar1 = *param_1;
        uVar24 = uVar1 - 1;
        *param_1 = uVar24;
      } while (0 < (int)uVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar31;
  }
  return;
code_r0x000108d9723c:
  if ((*(long *)(puVar32 + 0x88) != 0) &&
     (lVar30 = *(long *)(*(long *)(puVar32 + 0x88) + 0x20), lVar30 != 0)) {
    *(char *)(lVar30 + 0x2c) = (char)param_1[lVar27 * 8 + 6];
  }
  goto LAB_108d986f0;
}



/* Entry: 108d9884c; end: 108d988d7;  */

/* WARNING: Possible PIC construction at 0x000108d940e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d969e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d96a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d9401c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93f94) */
/* WARNING: Removing unreachable block (ram,0x000108d93f7c) */
/* WARNING: Removing unreachable block (ram,0x000108d93f58) */
/* WARNING: Removing unreachable block (ram,0x000108d9406c) */
/* WARNING: Removing unreachable block (ram,0x000108d94054) */
/* WARNING: Removing unreachable block (ram,0x000108d94038) */
/* WARNING: Removing unreachable block (ram,0x000108d94020) */
/* WARNING: Removing unreachable block (ram,0x000108d93efc) */
/* WARNING: Removing unreachable block (ram,0x000108d93ecc) */
/* WARNING: Removing unreachable block (ram,0x000108d93eec) */
/* WARNING: Removing unreachable block (ram,0x000108d94184) */
/* WARNING: Removing unreachable block (ram,0x000108d96a04) */
/* WARNING: Removing unreachable block (ram,0x000108d96a0c) */
/* WARNING: Removing unreachable block (ram,0x000108d969ec) */
/* WARNING: Removing unreachable block (ram,0x000108d93e3c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e1c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e40) */
/* WARNING: Removing unreachable block (ram,0x000108d93e54) */
/* WARNING: Removing unreachable block (ram,0x000108d93e4c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e30) */
/* WARNING: Removing unreachable block (ram,0x000108d940e8) */
/* WARNING: Removing unreachable block (ram,0x000108d93fac) */
/* WARNING: Removing unreachable block (ram,0x000108d93fb0) */
/* WARNING: Removing unreachable block (ram,0x000108d93fbc) */
/* WARNING: Removing unreachable block (ram,0x000108d93fc8) */

void FUN_108d9884c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  switch(param_2) {
  case 0xa3:
  case 0xc3:
  case 0xc4:
  case 0xcf:
    plVar3 = (long *)*param_1;
    plVar4 = (long *)*param_3;
    break;
  default:
    return;
  case 0xae:
  case 0xaf:
  case 0xca:
  case 0xcc:
  case 0xd8:
  case 0xe3:
  case 0xe5:
  case 0xee:
  case 0xf3:
    plVar3 = (long *)*param_1;
    puVar1 = (undefined1 *)register0x00000008;
    plVar4 = (long *)*param_3;
    while( true ) {
      plVar6 = plVar4;
      *(long **)(puVar1 + -0x20) = unaff_x20;
      *(long **)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
      unaff_x29 = puVar1 + -0x10;
      if (plVar6 == (long *)0x0) {
        return;
      }
      if ((*(byte *)((long)plVar6 + 5) >> 6 & 1) != 0) break;
      unaff_x30 = 0x108d93e1c;
      puVar1 = puVar1 + -0x20;
      plVar4 = (long *)plVar6[2];
      unaff_x19 = plVar6;
      unaff_x20 = plVar3;
    }
    if (*(char *)((long)plVar6 + 5) < '\0') {
      return;
    }
    unaff_x29 = *(undefined1 **)(puVar1 + -0x10);
    unaff_x30 = *(undefined8 *)(puVar1 + -8);
    register0x00000008 = (BADSPACEBASE *)puVar1;
    unaff_x19 = *(long **)(puVar1 + -0x18);
    unaff_x20 = *(long **)(puVar1 + -0x20);
    goto SUB_108d60660;
  case 0xb3:
  case 0xbc:
  case 200:
  case 0xcb:
  case 0xcd:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xdc:
  case 0xdd:
  case 0xe4:
    plVar3 = (long *)*param_1;
    unaff_x19 = (long *)*param_3;
    if (unaff_x19 == (long *)0x0) {
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x21 = (long *)unaff_x19[1];
    unaff_x20 = plVar3;
    if ((int)*unaff_x19 < 1) {
      unaff_x30 = 0x108d93efc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar6 = unaff_x21;
    }
    else {
      unaff_x22 = (long *)0x0;
      func_0x000108d93df0(plVar3,*unaff_x21);
      unaff_x30 = 0x108d93ecc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar6 = (long *)unaff_x21[1];
    }
    goto SUB_108d60660;
  case 0xc2:
  case 0xc9:
  case 0xd4:
  case 0xd5:
    plVar3 = (long *)*param_1;
    plVar5 = (long *)*param_3;
    plVar4 = unaff_x20;
    goto SUB_108d93fd8;
  case 0xc5:
  case 0xfc:
    plVar3 = (long *)*param_1;
    plVar6 = (long *)*param_3;
    if (plVar6 == (long *)0x0) {
      return;
    }
    puVar1 = &stack0xfffffffffffffff0;
    if ((int)*plVar6 < 1) goto SUB_108d60660;
    unaff_x21 = (long *)0x0;
    unaff_x22 = plVar6 + 4;
    FUN_108d93e84(plVar3,plVar6[3]);
    plVar4 = (long *)*unaff_x22;
    unaff_x30 = 0x108d940e8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = plVar6;
    unaff_x20 = plVar3;
    unaff_x29 = puVar1;
    break;
  case 0xd9:
  case 0xdb:
  case 0xdf:
    plVar3 = (long *)*param_1;
    unaff_x19 = (long *)*param_3;
    goto SUB_108d94124;
  case 0xea:
  case 0xef:
    plVar3 = (long *)*param_1;
    unaff_x20 = (long *)*param_3;
    if (unaff_x20 == (long *)0x0) {
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x21 = (long *)unaff_x20[7];
    func_0x000108d93df0(plVar3,unaff_x20[4]);
    FUN_108d93e84(plVar3,unaff_x20[5]);
    plVar4 = (long *)unaff_x20[2];
    unaff_x30 = 0x108d969ec;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = plVar3;
    break;
  case 0xec:
    plVar3 = (long *)*param_1;
    unaff_x19 = (long *)param_3[1];
SUB_108d94124:
    if (unaff_x19 == (long *)0x0) {
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    if (0 < (int)unaff_x19[1]) {
      unaff_x21 = (long *)0x0;
      unaff_x22 = (long *)0x0;
      do {
        func_0x000108d60660(plVar3,*(undefined8 *)(*unaff_x19 + (long)unaff_x21));
        unaff_x22 = (long *)((long)unaff_x22 + 1);
        unaff_x21 = unaff_x21 + 2;
      } while ((long)unaff_x22 < (long)(int)unaff_x19[1]);
    }
    unaff_x30 = 0x108d94184;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    plVar6 = (long *)*unaff_x19;
    unaff_x20 = plVar3;
    goto SUB_108d60660;
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x22 = (long *)0x0;
  unaff_x21 = (long *)plVar4[10];
  FUN_108d93e84(plVar3,*plVar4);
  plVar5 = (long *)plVar4[5];
  unaff_x30 = 0x108d93f58;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  unaff_x19 = plVar3;
SUB_108d93fd8:
  if (plVar5 == (long *)0x0) {
    return;
  }
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = plVar4;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((int)*plVar5 < 1) {
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
    plVar6 = plVar5;
  }
  else {
    unaff_x21 = (long *)0x0;
    unaff_x22 = plVar5 + 10;
    func_0x000108d60660(plVar3,plVar5[2]);
    unaff_x30 = 0x108d94020;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    plVar6 = (long *)plVar5[3];
    unaff_x19 = plVar5;
    unaff_x20 = plVar3;
  }
SUB_108d60660:
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (plVar3 != (long *)0x0) {
    if (plVar3[0x65] != 0) {
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((plVar6 < (long *)plVar3[0x2e]) || ((long *)plVar3[0x2f] <= plVar6)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)plVar6;
      }
      else {
        uVar2 = (uint)*(ushort *)(plVar3 + 0x2a);
      }
      *(int *)plVar3[0x65] = *(int *)plVar3[0x65] + uVar2;
      return;
    }
    if (((long *)plVar3[0x2e] <= plVar6) && (plVar6 < (long *)plVar3[0x2f])) {
      *plVar6 = plVar3[0x2d];
      plVar3[0x2d] = (long)plVar6;
      *(int *)((long)plVar3 + 0x154) = *(int *)((long)plVar3 + 0x154) + -1;
      return;
    }
  }
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (plVar6 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar3 = plVar6;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(plVar6);
    plVar6 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6);
  return;
}



/* Entry: 108d988d8; end: 108d98bd3;  */

void FUN_108d988d8(long *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  if (*(char *)((long)param_1 + 0x1e) != '\0') {
    return;
  }
  lVar8 = *param_1;
  if ((*(char *)(lVar8 + 0x51) != '\0') || (*(int *)((long)param_1 + 0x4c) != 0)) {
    if ((int)param_1[3] != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 3) = 1;
    return;
  }
  plVar3 = param_1;
  FUN_108d70f98();
  if (plVar3 != (long *)0x0) {
    do {
      plVar6 = plVar3;
      FUN_108da6380(plVar3,0x3d);
    } while ((int)plVar6 != 0);
    FUN_108d71098(plVar3,0x18,0,0,0);
    if ((*(char *)(lVar8 + 0x51) == '\0') &&
       ((*(int *)((long)param_1 + 0x16c) != 0 || (param_1[0x2a] != 0)))) {
      iVar1 = *(int *)((long)plVar3 + 0x3c);
      if (iVar1 != 0) {
        *(int *)(plVar3[1] + 8) = iVar1;
      }
      *(int *)(plVar3[6] + 100) = iVar1 + -1;
      if (0 < *(int *)(lVar8 + 0x28)) {
        lVar9 = 0;
        lVar5 = 0;
        do {
          uVar2 = 1 << (ulong)((uint)lVar5 & 0x1f);
          if ((uVar2 & *(uint *)((long)param_1 + 0x16c)) != 0) {
            *(uint *)((long)plVar3 + 0x94) = *(uint *)((long)plVar3 + 0x94) | uVar2;
            if ((lVar5 != 1) &&
               (*(char *)(*(long *)(*(long *)(*plVar3 + 0x20) + lVar9 + 8) + 0x11) != '\0')) {
              *(uint *)(plVar3 + 0x13) = *(uint *)(plVar3 + 0x13) | uVar2;
            }
            iVar1 = *(int *)(*(long *)(*(long *)(lVar8 + 0x20) + lVar9 + 0x18) + 4);
            plVar6 = plVar3;
            FUN_108d71098(plVar3,4,lVar5,
                          *(uint *)(param_1 + 0x2d) >> (ulong)((uint)lVar5 & 0x1f) & 1,
                          *(undefined4 *)((long)param_1 + lVar5 * 4 + 0x170));
            FUN_108d6aaec(plVar3,plVar6,(long)iVar1,0xfffffff2);
            if ((*(char *)(lVar8 + 0xa1) == '\0') && (plVar3[1] != 0)) {
              *(undefined1 *)(plVar3[1] + (long)*(int *)((long)plVar3 + 0x3c) * 0x18 + -0x15) = 1;
            }
          }
          lVar5 = lVar5 + 1;
          lVar9 = lVar9 + 0x20;
        } while (lVar5 < *(int *)(lVar8 + 0x28));
      }
      if (0 < *(int *)((long)param_1 + 500)) {
        lVar5 = 0;
        do {
          for (plVar6 = *(long **)(*(long *)(param_1[0x4d] + lVar5 * 8) + 0x58);
              (plVar6 != (long *)0x0 && (*plVar6 != lVar8)); plVar6 = (long *)plVar6[5]) {
          }
          plVar4 = plVar3;
          FUN_108d71098(plVar3,0x92,0,0,0);
          FUN_108d6aaec(plVar3,plVar4,plVar6,0xfffffff6);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((long)param_1 + 500));
      }
      *(undefined4 *)((long)param_1 + 500) = 0;
      FUN_108da63d4(param_1);
      FUN_108da6464(param_1);
      piVar7 = (int *)param_1[0x2a];
      if ((piVar7 != (int *)0x0) && (*(undefined1 *)((long)param_1 + 0x23) = 0, 0 < *piVar7)) {
        lVar9 = 0;
        lVar5 = 0;
        do {
          FUN_108da6628(param_1,*(undefined8 *)(*(long *)(piVar7 + 2) + lVar9),
                        *(undefined4 *)(*(long *)(piVar7 + 2) + lVar9 + 0x1c));
          lVar5 = lVar5 + 1;
          lVar9 = lVar9 + 0x20;
        } while (lVar5 < *piVar7);
      }
      FUN_108d71098(plVar3,0x10,0,1,0);
    }
    if ((*(int *)((long)param_1 + 0x4c) == 0) && (*(char *)(lVar8 + 0x51) == '\0')) {
      if ((param_1[0x37] != 0) && ((int)param_1[10] == 0)) {
        *(undefined4 *)(param_1 + 10) = 1;
      }
      FUN_108d6ac74(plVar3,param_1);
      *(undefined4 *)(param_1 + 3) = 0x65;
      *(undefined1 *)((long)param_1 + 0x1c) = 0;
      goto LAB_108d98b74;
    }
  }
  *(undefined4 *)(param_1 + 3) = 1;
LAB_108d98b74:
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  return;
}



/* Entry: 108d98bd4; end: 108d98ce7;  */

long * FUN_108d98bd4(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  
  lVar6 = *param_1;
  plVar2 = param_1;
  FUN_108dabcbc(param_1,0x16,&DAT_10f519150,0,0);
  if ((int)plVar2 == 0) {
    FUN_108d70f98();
    plVar2 = (long *)0x0;
    if (param_1 != (long *)0x0) {
      if ((param_2 != 7) && (0 < *(int *)(lVar6 + 0x28))) {
        lVar5 = 0;
        uVar7 = 1;
        if (param_2 == 9) {
          uVar7 = 2;
        }
        lVar8 = 8;
        do {
          FUN_108d71098(param_1,4,lVar5,uVar7,0);
          uVar1 = 1 << (ulong)((uint)lVar5 & 0x1f);
          *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | uVar1;
          if ((lVar5 != 1) &&
             (*(char *)(*(long *)(*(long *)(*param_1 + 0x20) + lVar8) + 0x11) != '\0')) {
            *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | uVar1;
          }
          lVar5 = lVar5 + 1;
          lVar8 = lVar8 + 0x20;
        } while (lVar5 < *(int *)(lVar6 + 0x28));
      }
      uVar1 = *(uint *)((long)param_1 + 0x3c);
      uVar3 = uVar1;
      if (*(int *)(param_1[6] + 0x60) <= (int)uVar1) {
        plVar2 = param_1;
        FUN_108d71134();
        if ((int)plVar2 != 0) {
          return (long *)0x1;
        }
        uVar3 = *(uint *)((long)param_1 + 0x3c);
      }
      *(uint *)((long)param_1 + 0x3c) = uVar3 + 1;
      puVar4 = (undefined1 *)(param_1[1] + (long)(int)uVar1 * 0x18);
      *puVar4 = 3;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      puVar4[1] = 0;
      return (long *)(ulong)uVar1;
    }
  }
  return plVar2;
}



/* Entry: 108d98ce8; end: 108d98da7;  */

ulong FUN_108d98ce8(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar2 = param_1;
  FUN_108dabcbc(param_1,0x16,&UNK_10f51916d,0,0);
  if ((int)uVar2 == 0) {
    FUN_108d70f98();
    uVar2 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0x3c);
      uVar3 = uVar1;
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x60) <= (int)uVar1) {
        uVar2 = param_1;
        FUN_108d71134();
        if ((int)uVar2 != 0) {
          return 1;
        }
        uVar3 = *(uint *)(param_1 + 0x3c);
      }
      *(uint *)(param_1 + 0x3c) = uVar3 + 1;
      puVar4 = (undefined1 *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 0x18);
      *puVar4 = 3;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 1;
      *(undefined4 *)(puVar4 + 8) = 0;
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      puVar4[1] = 0;
      return (ulong)uVar1;
    }
  }
  return uVar2;
}



/* Entry: 108d98da8; end: 108d98e73;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */
/* WARNING: Removing unreachable block (ram,0x000108d80cfc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d18) */
/* WARNING: Removing unreachable block (ram,0x000108d80c4c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d80cc4) */
/* WARNING: Removing unreachable block (ram,0x000108d80ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d6c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d78) */
/* WARNING: Removing unreachable block (ram,0x000108d80d84) */
/* WARNING: Removing unreachable block (ram,0x000108d80d90) */
/* WARNING: Removing unreachable block (ram,0x000108d80c54) */
/* WARNING: Removing unreachable block (ram,0x000108d80c60) */
/* WARNING: Removing unreachable block (ram,0x000108d80c68) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc4) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc0) */
/* WARNING: Removing unreachable block (ram,0x000108d6abd0) */
/* WARNING: Removing unreachable block (ram,0x000108d6aba0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c84) */
/* WARNING: Removing unreachable block (ram,0x000108d80c8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c9c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d2c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c74) */
/* WARNING: Removing unreachable block (ram,0x000108d80c7c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d6d618) */
/* WARNING: Removing unreachable block (ram,0x000108d6d660) */
/* WARNING: Removing unreachable block (ram,0x000108d6d61c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d63c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d644) */
/* WARNING: Removing unreachable block (ram,0x000108d6d64c) */
/* WARNING: Removing unreachable block (ram,0x000108d80ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cec) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab68) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab70) */

void FUN_108d98da8(ulong *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  
  puVar4 = (undefined8 *)*param_1;
  FUN_108d95eb4(puVar4,param_3,param_4);
  FUN_108dabd84();
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = param_1;
  FUN_108d70f98();
  if ((puVar5 == (ulong *)0x0) ||
     (puVar6 = param_1,
     FUN_108dabcbc(param_1,0x20,(&PTR_DAT_110ac4a28)[param_2 & 0xffffffff],puVar4,0),
     (int)puVar6 != 0)) {
    uVar7 = *param_1;
  }
  else {
    puVar6 = puVar5;
    FUN_108d71098(puVar5,2,param_2,0,0);
    iVar2 = (int)puVar6;
    uVar7 = *puVar5;
    if ((puVar5[1] != 0) && (*(char *)(uVar7 + 0x51) == '\0')) {
      if (iVar2 < 0) {
        iVar2 = *(int *)((long)puVar5 + 0x3c) + -1;
      }
      lVar8 = puVar5[1] + (long)iVar2 * 0x18;
      FUN_108d80c2c(uVar7,(long)*(char *)(lVar8 + 1),*(undefined8 *)(lVar8 + 0x10));
      *(undefined8 *)(lVar8 + 0x10) = 0;
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined1 *)(lVar8 + 1) = 0;
      }
      else {
        *(undefined8 **)(lVar8 + 0x10) = puVar4;
        *(undefined1 *)(lVar8 + 1) = 0xff;
      }
      return;
    }
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if (uVar7 != 0) {
    if (*(long *)(uVar7 + 0x328) != 0) {
      if ((puVar4 < *(undefined8 **)(uVar7 + 0x170)) || (*(undefined8 **)(uVar7 + 0x178) <= puVar4))
      {
        (*pcRam0000000113297950)();
        uVar1 = (uint)puVar4;
      }
      else {
        uVar1 = (uint)*(ushort *)(uVar7 + 0x150);
      }
      **(int **)(uVar7 + 0x328) = **(int **)(uVar7 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(uVar7 + 0x170) <= puVar4) && (puVar4 < *(undefined8 **)(uVar7 + 0x178))) {
      *puVar4 = *(undefined8 *)(uVar7 + 0x168);
      *(undefined8 **)(uVar7 + 0x168) = puVar4;
      *(int *)(uVar7 + 0x154) = *(int *)(uVar7 + 0x154) + -1;
      return;
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar3 = puVar4;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar4);
    puVar4 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar4);
  return;
}



/* Entry: 108d98e74; end: 108d99983;  */

/* WARNING: Possible PIC construction at 0x000108d6a8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d9935c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d6a8a4) */
/* WARNING: Removing unreachable block (ram,0x000108d99360) */

undefined8 *
FUN_108d98e74(undefined8 *param_1,undefined8 param_2,long param_3,int param_4,int param_5,
             undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar15;
  undefined8 *unaff_x21;
  undefined8 *puVar16;
  undefined8 unaff_x22;
  undefined8 uVar17;
  long lVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  ppuVar5 = &puStack_70;
  puVar13 = &stack0xfffffffffffffff0;
  puVar16 = (undefined8 *)*param_1;
  puVar15 = param_1;
  FUN_108dabe00();
  iVar6 = (int)puVar15;
  if (iVar6 < 0) {
    return puVar15;
  }
  if (((param_4 == 0) || (puVar15 = (undefined8 *)0x1, iVar6 == 1)) || (*(int *)(param_3 + 8) == 0))
  {
    uVar17 = *puStack_68;
    param_1[0x48] = puStack_68[1];
    param_1[0x47] = uVar17;
    puVar7 = puVar16;
    FUN_108d95eb4(puVar16,*puStack_68,*(undefined4 *)(puStack_68 + 1));
    puVar8 = puVar7;
    FUN_108dabd84();
    if (puVar7 == (undefined8 *)0x0) {
      return puVar8;
    }
    puVar8 = param_1;
    FUN_108dabe80(param_1,puVar7);
    if ((int)puVar8 != 0) goto SUB_108d60660;
    if (*(char *)(puVar16 + 0x14) == '\x01') {
      param_4 = 1;
    }
    uVar17 = *(undefined8 *)(puVar16[4] + ((ulong)puVar15 & 0xffffffff) * 0x20);
    puVar10 = &UNK_10f518224;
    if (param_4 != 1) {
      puVar10 = &UNK_10f518237;
    }
    puVar8 = param_1;
    FUN_108dabcbc(param_1,0x12,puVar10,0,uVar17);
    if ((int)puVar8 != 0) goto SUB_108d60660;
    iVar6 = (int)param_6;
    if (iVar6 == 0) {
      uVar12 = 2;
      if (param_4 != 0) {
        uVar12 = 4;
      }
      uVar14 = 8;
      if (param_4 != 0) {
        uVar14 = 6;
      }
      if (param_5 != 0) {
        uVar12 = uVar14;
      }
      puVar8 = param_1;
      FUN_108dabcbc(param_1,uVar12,puVar7,0,uVar17);
      if ((int)puVar8 != 0) goto SUB_108d60660;
    }
    if (*(char *)((long)param_1 + 499) != '\0') {
LAB_108d98fc0:
      puVar8 = puVar16;
      FUN_108d6a6fc(puVar16,0x78);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[0xe] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        *puVar8 = puVar7;
        *(undefined2 *)((long)puVar8 + 0x3c) = 0xffff;
        lVar18 = *(long *)(puVar16[4] + ((ulong)puVar15 & 0xffffffff) * 0x20 + 0x18);
        puVar8[0xd] = lVar18;
        *(undefined4 *)(puVar8 + 8) = 0xc80001;
        param_1[0x44] = puVar8;
        puVar9 = puVar8;
        if ((*(char *)((long)param_1 + 0x1e) == '\0') &&
           (_strcmp(puVar7,&UNK_10f5191e1), puVar9 = puVar7, (int)puVar7 == 0)) {
          *(undefined8 **)(lVar18 + 0x68) = puVar8;
        }
        if (*(char *)((long)puVar16 + 0xa1) == '\0') {
          puVar7 = param_1;
          FUN_108d70f98();
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar8 = param_1;
          if ((undefined8 *)param_1[0x38] != (undefined8 *)0x0) {
            puVar8 = (undefined8 *)param_1[0x38];
          }
          func_0x000108dab6e4(param_1,puVar15);
          *(uint *)(puVar8 + 0x2d) = *(uint *)(puVar8 + 0x2d) | 1 << (ulong)((uint)puVar15 & 0x1f);
          if (iVar6 != 0) {
            FUN_108d71098(puVar7,0x92,0,0,0);
          }
          iVar3 = *(int *)((long)param_1 + 0x54);
          iVar1 = iVar3 + 1;
          *(int *)(param_1 + 0x34) = iVar1;
          iVar2 = iVar3 + 2;
          *(int *)((long)param_1 + 0x1a4) = iVar2;
          iVar3 = iVar3 + 3;
          *(int *)((long)param_1 + 0x54) = iVar3;
          FUN_108d71098(puVar7,0x33,puVar15,iVar3,2);
          FUN_108d6aaa4(puVar7,puVar15);
          puVar8 = puVar7;
          FUN_108d71098(puVar7,0x2d,iVar3,0,0);
          uVar12 = 4;
          if ((*(uint *)((long)puVar16 + 0x2c) & 0x8000) != 0) {
            uVar12 = 1;
          }
          FUN_108d71098(puVar7,0x19,uVar12,iVar3,0);
          FUN_108d71098(puVar7,0x34,puVar15,2,iVar3);
          FUN_108d71098(puVar7,0x19,*(undefined1 *)((long)puVar16 + 0x4e),iVar3,0);
          FUN_108d71098(puVar7,0x34,puVar15,5,iVar3);
          uVar4 = *(uint *)((long)puVar7 + 0x3c);
          if ((uint)puVar8 < uVar4) {
            *(uint *)(puVar7[1] + ((ulong)puVar8 & 0xffffffff) * 0x18 + 8) = uVar4;
          }
          *(uint *)(puVar7[6] + 100) = uVar4 - 1;
          if (iVar6 == 0 && param_5 == 0) {
            puVar16 = puVar7;
            FUN_108d71098(puVar7,0x79,puVar15,iVar2,0);
            *(int *)(param_1 + 0x3a) = (int)puVar16;
          }
          else {
            FUN_108d71098(puVar7,0x19,0,iVar2,0);
          }
          func_0x000108dabf7c(param_1,puVar15);
          FUN_108d71098(puVar7,0x4a,0,iVar1,0);
          FUN_108d71098(puVar7,0x1c,0,iVar3,0);
          FUN_108d71098(puVar7,0x4b,0,iVar3,iVar1);
          if (puVar7[1] != 0) {
            *(undefined1 *)(puVar7[1] + (long)*(int *)((long)puVar7 + 0x3c) * 0x18 + -0x15) = 8;
          }
          uVar4 = *(uint *)((long)puVar7 + 0x3c);
          uVar11 = uVar4;
          if (*(int *)(puVar7[6] + 0x60) <= (int)uVar4) {
            puVar15 = puVar7;
            FUN_108d71134();
            if ((int)puVar15 != 0) {
              return (undefined8 *)0x1;
            }
            uVar11 = *(uint *)((long)puVar7 + 0x3c);
          }
          *(uint *)((long)puVar7 + 0x3c) = uVar11 + 1;
          puVar13 = (undefined1 *)(puVar7[1] + (long)(int)uVar4 * 0x18);
          *puVar13 = 0x3d;
          puVar13[3] = 0;
          *(undefined4 *)(puVar13 + 4) = 0;
          *(undefined4 *)(puVar13 + 8) = 0;
          *(undefined4 *)(puVar13 + 0xc) = 0;
          *(undefined8 *)(puVar13 + 0x10) = 0;
          puVar13[1] = 0;
          return (undefined8 *)(ulong)uVar4;
        }
        return puVar9;
      }
      *(undefined1 *)((long)puVar16 + 0x51) = 1;
      *(undefined4 *)(param_1 + 3) = 7;
      *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
      goto SUB_108d60660;
    }
    uVar17 = *(undefined8 *)(puVar16[4] + ((ulong)puVar15 & 0xffffffff) * 0x20);
    puVar8 = param_1;
    FUN_108d9605c();
    if ((int)puVar8 != 0) goto SUB_108d60660;
    puVar8 = puVar16;
    func_0x000108d700dc(puVar16,puVar7,uVar17);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = puVar16;
      FUN_108d93428(puVar16,puVar7,uVar17);
      if (puVar8 == (undefined8 *)0x0) goto LAB_108d98fc0;
      puVar10 = &UNK_10f5191be;
      puStack_70 = puVar7;
    }
    else {
      if (param_7 != 0) {
        func_0x000108dab6e4(param_1,puVar15);
        goto SUB_108d60660;
      }
      puStack_70 = puStack_68;
      puVar10 = &UNK_10f5191a6;
    }
    unaff_x30 = 0x108d99360;
    unaff_x19 = param_1;
    unaff_x22 = param_6;
  }
  else {
    puVar10 = &UNK_10f51917d;
    ppuVar5 = (undefined8 **)register0x00000008;
    puVar15 = unaff_x20;
    puVar16 = unaff_x21;
    puVar13 = unaff_x29;
  }
  register0x00000008 = (BADSPACEBASE *)((long)ppuVar5 + -0x40);
  *(undefined8 *)((long)ppuVar5 + -0x30) = unaff_x22;
  *(undefined8 **)((long)ppuVar5 + -0x28) = puVar16;
  *(undefined8 **)((long)ppuVar5 + -0x20) = puVar15;
  *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar5 + -0x10) = puVar13;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)ppuVar5 + -0x10);
  puVar16 = (undefined8 *)*param_1;
  *(undefined8 ***)((long)ppuVar5 + -0x38) = ppuVar5;
  puVar7 = puVar16;
  FUN_108d7169c(puVar16,puVar10,ppuVar5);
  if (*(char *)((long)puVar16 + 0x54) == '\0') {
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
    func_0x000108d60660(puVar16,param_1[1]);
    param_1[1] = puVar7;
    *(undefined4 *)(param_1 + 3) = 1;
    return puVar16;
  }
  unaff_x30 = 0x108d6a8a4;
  unaff_x19 = param_1;
  unaff_x20 = puVar16;
  unaff_x21 = puVar7;
SUB_108d60660:
  if (puVar7 == (undefined8 *)0x0) {
    return puVar16;
  }
  if (puVar16 != (undefined8 *)0x0) {
    if (puVar16[0x65] != 0) {
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((puVar7 < (undefined8 *)puVar16[0x2e]) || ((undefined8 *)puVar16[0x2f] <= puVar7)) {
        (*pcRam0000000113297950)();
      }
      else {
        puVar7 = (undefined8 *)(ulong)*(ushort *)(puVar16 + 0x2a);
      }
      *(int *)puVar16[0x65] = *(int *)puVar16[0x65] + (int)puVar7;
      return puVar7;
    }
    if (((undefined8 *)puVar16[0x2e] <= puVar7) && (puVar7 < (undefined8 *)puVar16[0x2f])) {
      *puVar7 = puVar16[0x2d];
      puVar16[0x2d] = puVar7;
      *(int *)((long)puVar16 + 0x154) = *(int *)((long)puVar16 + 0x154) + -1;
      return puVar16;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar15 = puVar7;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar15;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar7);
    puVar7 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar7);
  return puVar7;
}



/* Entry: 108d99984; end: 108d99bc3;  */

void FUN_108d99984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1[0x44];
  if ((lVar2 != 0) && (0 < *(short *)(lVar2 + 0x3e))) {
    lVar2 = *(long *)(lVar2 + 8) + (ulong)((int)*(short *)(lVar2 + 0x3e) - 1) * 0x30;
    func_0x000108d60660(*param_1,*(undefined8 *)(lVar2 + 0x18));
    uVar1 = *param_1;
    FUN_108d95eb4(uVar1,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_108dabd84();
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    func_0x000108da803c(uVar1,lVar2 + 0x2a);
    *(char *)(lVar2 + 0x29) = (char)uVar1;
  }
  return;
}



/* Entry: 108d99bc4; end: 108d9aa23;  */

/* WARNING: Possible PIC construction at 0x000108d93ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93ecc) */
/* WARNING: Removing unreachable block (ram,0x000108d93eec) */
/* WARNING: Removing unreachable block (ram,0x000108d93efc) */

void FUN_108d99bc4(long *param_1,uint *param_2,ulong param_3,int param_4,int param_5)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lStack_68;
  
  lVar13 = param_1[0x44];
  if ((lVar13 == 0) || (*(char *)((long)param_1 + 499) != '\0')) goto FUN_108d93e84;
  if ((*(byte *)(lVar13 + 0x46) >> 2 & 1) == 0) {
    bVar2 = *(byte *)(lVar13 + 0x46) | 4;
    *(byte *)(lVar13 + 0x46) = bVar2;
    if (param_2 == (uint *)0x0) {
      iVar14 = *(short *)(lVar13 + 0x3e) + -1;
      lVar8 = *(long *)(lVar13 + 8) + (long)iVar14 * 0x30;
      *(byte *)(lVar8 + 0x2b) = *(byte *)(lVar8 + 0x2b) | 1;
      lStack_68 = *(long *)(lVar8 + 0x18);
LAB_108d99d04:
      if ((lStack_68 != 0) &&
         (FUN_108d5e044(lStack_68,&DAT_10f517574), (int)lStack_68 == 0 && param_5 == 0)) {
        *(short *)(lVar13 + 0x3c) = (short)iVar14;
        *(char *)(lVar13 + 0x47) = (char)param_3;
        *(byte *)(lVar13 + 0x46) = bVar2 | (byte)(param_4 << 3);
        if (param_2 != (uint *)0x0) {
          *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(*(long *)(param_2 + 2) + 0x18);
        }
        goto FUN_108d93e84;
      }
    }
    else {
      uVar3 = *param_2;
      if (0 < (int)uVar3) {
        uVar10 = 0;
        lStack_68 = 0;
        sVar1 = *(short *)(lVar13 + 0x3e);
        do {
          if (sVar1 < 1) {
            lVar8 = 0;
          }
          else {
            lVar15 = 0;
            uVar12 = *(undefined8 *)(*(long *)(param_2 + 2) + uVar10 * 0x20 + 8);
            pbVar11 = (byte *)(*(long *)(lVar13 + 8) + 0x2b);
            do {
              uVar5 = uVar12;
              FUN_108d5e044(uVar12,*(undefined8 *)(pbVar11 + -0x2b));
              if ((int)uVar5 == 0) {
                *pbVar11 = *pbVar11 | 1;
                lStack_68 = *(long *)(pbVar11 + -0x13);
                lVar8 = lVar15;
                break;
              }
              lVar15 = lVar15 + 1;
              pbVar11 = pbVar11 + 0x30;
              lVar8 = (long)sVar1;
            } while (sVar1 != lVar15);
          }
          iVar14 = (int)lVar8;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar3);
        param_3 = param_3 & 0xffffffff;
        if (uVar3 == 1) goto LAB_108d99d04;
      }
    }
    if (param_4 == 0) {
      lVar13 = param_1[2];
      if (lVar13 != 0) {
        lVar8 = lVar13;
        FUN_108d71098(lVar13,0x9c,0,0,0);
        *(int *)((long)param_1 + 0x1d4) = (int)lVar8;
      }
      plVar6 = param_1;
      func_0x000108d99e20(param_1,0,0,0,param_2,param_3,0,0,param_5,0);
      if ((plVar6 == (long *)0x0) ||
         (*(byte *)((long)plVar6 + 0x5b) = *(byte *)((long)plVar6 + 0x5b) & 0xfc | 2, lVar13 == 0))
      {
        param_2 = (uint *)0x0;
      }
      else {
        uVar3 = *(uint *)(lVar13 + 0x3c);
        if (*(uint *)((long)param_1 + 0x1d4) < uVar3) {
          *(uint *)(*(long *)(lVar13 + 8) + (ulong)*(uint *)((long)param_1 + 0x1d4) * 0x18 + 8) =
               uVar3;
        }
        param_2 = (uint *)0x0;
        *(uint *)(*(long *)(lVar13 + 0x30) + 100) = uVar3 - 1;
      }
      goto FUN_108d93e84;
    }
    puVar7 = &UNK_10f519934;
  }
  else {
    puVar7 = &UNK_10f51990b;
  }
  func_0x000108d6a85c(param_1,puVar7);
FUN_108d93e84:
  lVar13 = *param_1;
  if (param_2 == (uint *)0x0) {
    return;
  }
  puVar9 = *(undefined8 **)(param_2 + 2);
  if (0 < (int)*param_2) {
    func_0x000108d93df0(lVar13,*puVar9);
    puVar9 = (undefined8 *)puVar9[1];
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x328) != 0) {
      if ((puVar9 < *(undefined8 **)(lVar13 + 0x170)) ||
         (*(undefined8 **)(lVar13 + 0x178) <= puVar9)) {
        (*pcRam0000000113297950)();
        uVar3 = (uint)puVar9;
      }
      else {
        uVar3 = (uint)*(ushort *)(lVar13 + 0x150);
      }
      **(int **)(lVar13 + 0x328) = **(int **)(lVar13 + 0x328) + uVar3;
      return;
    }
    if ((*(undefined8 **)(lVar13 + 0x170) <= puVar9) && (puVar9 < *(undefined8 **)(lVar13 + 0x178)))
    {
      *puVar9 = *(undefined8 *)(lVar13 + 0x168);
      *(undefined8 **)(lVar13 + 0x168) = puVar9;
      *(int *)(lVar13 + 0x154) = *(int *)(lVar13 + 0x154) + -1;
      return;
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar4 = puVar9;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar4;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar9);
    puVar9 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar9);
  return;
}



/* Entry: 108d9aa24; end: 108d9aaaf;  */

/* WARNING: Possible PIC construction at 0x000108d93e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93e1c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e30) */
/* WARNING: Removing unreachable block (ram,0x000108d93e3c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e40) */
/* WARNING: Removing unreachable block (ram,0x000108d93e54) */
/* WARNING: Removing unreachable block (ram,0x000108d93e4c) */

void FUN_108d9aa24(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  byte *pbVar6;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  lVar11 = param_1[0x44];
  piVar5 = (int *)*param_1;
  if (((lVar11 != 0) && (*(char *)((long)param_1 + 499) == '\0')) &&
     ((*(ushort *)
        (*(long *)(*(long *)(*(long *)(piVar5 + 8) + (ulong)*(byte *)(piVar5 + 0x28) * 0x20 + 8) + 8
                  ) + 0x28) & 1) == 0)) {
    FUN_108d9ccd4(piVar5,*(undefined8 *)(lVar11 + 0x30));
    *(int **)(lVar11 + 0x30) = piVar5;
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    if (piVar5 != (int *)0x0) {
      lVar11 = *(long *)(piVar5 + 2);
      iVar1 = *piVar5;
      pbVar6 = (byte *)*param_1;
      FUN_108d95eb4(pbVar6,param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
      *(byte **)(lVar11 + (long)iVar1 * 0x20 + -0x18) = pbVar6;
      if (pbVar6 != (byte *)0x0) {
        if (pbVar6 == (byte *)0x0) {
          return;
        }
        bVar7 = *pbVar6;
        if (bVar7 < 0x5b) {
          if ((bVar7 != 0x22) && (bVar7 != 0x27)) {
            return;
          }
        }
        else if (bVar7 != 0x60) {
          if (bVar7 != 0x5b) {
            return;
          }
          bVar7 = 0x5d;
        }
        uVar8 = 0;
        uVar9 = 1;
        while( true ) {
          bVar10 = pbVar6[(int)uVar9];
          if ((pbVar6[(int)uVar9] == bVar7) &&
             (uVar9 = (long)(int)uVar9 + 1, bVar10 = bVar7, pbVar6[uVar9] != bVar7)) break;
          pbVar6[uVar8] = bVar10;
          uVar8 = uVar8 + 1;
          uVar9 = (ulong)((int)uVar9 + 1);
        }
        pbVar6[uVar8 & 0xffffffff] = 0;
        return;
      }
    }
    return;
  }
  while( true ) {
    puVar4 = param_2;
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if ((*(byte *)((long)puVar4 + 5) >> 6 & 1) != 0) break;
    unaff_x30 = 0x108d93e1c;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_2 = (undefined8 *)puVar4[2];
    unaff_x19 = puVar4;
    unaff_x20 = piVar5;
  }
  if (*(char *)((long)puVar4 + 5) < '\0') {
    return;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    if (*(long *)(piVar5 + 0xca) != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if ((puVar4 < *(undefined8 **)(piVar5 + 0x5c)) || (*(undefined8 **)(piVar5 + 0x5e) <= puVar4))
      {
        (*pcRam0000000113297950)();
        uVar2 = (uint)puVar4;
      }
      else {
        uVar2 = (uint)*(ushort *)(piVar5 + 0x54);
      }
      **(int **)(piVar5 + 0xca) = **(int **)(piVar5 + 0xca) + uVar2;
      return;
    }
    if ((*(undefined8 **)(piVar5 + 0x5c) <= puVar4) && (puVar4 < *(undefined8 **)(piVar5 + 0x5e))) {
      *puVar4 = *(undefined8 *)(piVar5 + 0x5a);
      *(undefined8 **)(piVar5 + 0x5a) = puVar4;
      piVar5[0x55] = piVar5[0x55] + -1;
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar3 = puVar4;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar4);
    puVar4 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar4);
  return;
}



/* Entry: 108d9aab0; end: 108d9ae4b;  */

/* WARNING: Possible PIC construction at 0x000108d9aafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93ecc) */
/* WARNING: Removing unreachable block (ram,0x000108d93eec) */
/* WARNING: Removing unreachable block (ram,0x000108d9ab00) */
/* WARNING: Removing unreachable block (ram,0x000108d93e84) */
/* WARNING: Removing unreachable block (ram,0x000108d93f14) */
/* WARNING: Removing unreachable block (ram,0x000108d93e88) */
/* WARNING: Removing unreachable block (ram,0x000108d93ef0) */
/* WARNING: Removing unreachable block (ram,0x000108d93eb0) */
/* WARNING: Removing unreachable block (ram,0x000108d93eb4) */
/* WARNING: Removing unreachable block (ram,0x000108d93efc) */

void FUN_108d9aab0(undefined8 *param_1,uint *param_2,undefined8 *param_3,uint *param_4,
                  undefined4 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  
  plVar12 = (long *)*param_1;
  lVar22 = param_1[0x44];
  if ((lVar22 != 0) && (*(char *)((long)param_1 + 499) == '\0')) {
    if (param_2 == (uint *)0x0) {
      if (*(short *)(lVar22 + 0x3e) < 1) goto LAB_108d9aaf0;
      if (param_4 != (uint *)0x0) {
        if (*param_4 == 1) {
          iVar18 = *(int *)(param_3 + 1) + 0x51;
          uVar5 = 1;
          goto LAB_108d9ab98;
        }
        puVar8 = &UNK_10f519b47;
        goto LAB_108d9ae14;
      }
      iVar18 = *(int *)(param_3 + 1) + 0x51;
      bVar4 = true;
      uVar14 = 1;
    }
    else {
      uVar5 = *param_2;
      uVar14 = (ulong)uVar5;
      if (param_4 == (uint *)0x0) {
        iVar18 = *(int *)(param_3 + 1) + uVar5 * 0x10 + 0x41;
        bVar4 = true;
      }
      else {
        if (*param_4 != uVar5) {
          puVar8 = &UNK_10f519b86;
LAB_108d9ae14:
          func_0x000108d6a85c(param_1,puVar8);
          goto LAB_108d9aaf0;
        }
        iVar18 = *(int *)(param_3 + 1) + uVar5 * 0x10 + 0x41;
        if ((int)uVar5 < 1) {
          bVar4 = false;
        }
        else {
LAB_108d9ab98:
          uVar14 = (ulong)uVar5;
          plVar19 = (long *)(*(long *)(param_4 + 2) + 8);
          do {
            lVar9 = *plVar19;
            if (lVar9 == 0) {
              iVar13 = 1;
            }
            else {
              _strlen();
              iVar13 = ((uint)lVar9 & 0x3fffffff) + 1;
            }
            iVar18 = iVar13 + iVar18;
            uVar14 = uVar14 - 1;
            plVar19 = plVar19 + 4;
          } while (uVar14 != 0);
          bVar4 = false;
          uVar14 = (ulong)uVar5;
        }
      }
    }
    plVar19 = plVar12;
    FUN_108d68fc8(plVar12,(long)iVar18);
    if (plVar19 == (long *)0x0) goto SUB_108d60660;
    lVar9 = *(long *)(lVar22 + 0x20);
    *plVar19 = lVar22;
    plVar19[1] = lVar9;
    plVar1 = plVar19 + 8;
    iVar13 = (int)uVar14;
    plVar7 = plVar1 + (long)iVar13 * 2;
    plVar19[2] = (long)plVar7;
    _memcpy(plVar7,*param_3,*(undefined4 *)(param_3 + 1));
    *(undefined1 *)((long)plVar7 + (ulong)*(uint *)(param_3 + 1)) = 0;
    FUN_108dabd84(plVar7);
    iVar18 = *(int *)(param_3 + 1);
    *(int *)(plVar19 + 5) = iVar13;
    if (param_2 == (uint *)0x0) {
      *(int *)plVar1 = *(short *)(lVar22 + 0x3e) + -1;
    }
    else if (0 < iVar13) {
      sVar3 = *(short *)(lVar22 + 0x3e);
      if ((long)sVar3 < 1) {
LAB_108d9ae2c:
        func_0x000108d6a85c(param_1,&UNK_10f519be4);
        goto SUB_108d60660;
      }
      uVar10 = 0;
      puVar11 = *(undefined8 **)(lVar22 + 8);
      lVar9 = *(long *)(param_2 + 2);
      do {
        lVar16 = 0;
        uVar20 = *(undefined8 *)(lVar9 + uVar10 * 0x20 + 8);
        puVar15 = puVar11;
        while( true ) {
          uVar6 = *puVar15;
          FUN_108d5e044(uVar6,uVar20);
          if ((int)uVar6 == 0) break;
          lVar16 = lVar16 + 1;
          puVar15 = puVar15 + 6;
          if (sVar3 == lVar16) goto LAB_108d9ae2c;
        }
        *(int *)(plVar1 + uVar10 * 2) = (int)lVar16;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar14);
    }
    if ((!bVar4) && (0 < iVar13)) {
      puVar17 = (undefined1 *)((long)plVar7 + (ulong)(iVar18 + 1));
      lVar9 = 8;
      plVar7 = plVar19 + 9;
      do {
        uVar10 = *(ulong *)(*(long *)(param_4 + 2) + lVar9);
        if (uVar10 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar10;
          _strlen();
          uVar21 = uVar21 & 0x3fffffff;
        }
        *plVar7 = (long)puVar17;
        _memcpy(puVar17,uVar10,uVar21);
        puVar2 = puVar17 + uVar21;
        puVar17 = puVar2 + 1;
        *puVar2 = 0;
        lVar9 = lVar9 + 0x20;
        uVar14 = uVar14 - 1;
        plVar7 = plVar7 + 2;
      } while (uVar14 != 0);
    }
    *(undefined1 *)((long)plVar19 + 0x2c) = 0;
    *(char *)((long)plVar19 + 0x2d) = (char)param_5;
    *(char *)((long)plVar19 + 0x2e) = (char)((uint)param_5 >> 8);
    plVar7 = (long *)(*(long *)(lVar22 + 0x68) + 0x50);
    FUN_108d93af0(plVar7,plVar19[2],plVar19);
    if (plVar7 == plVar19) {
      *(undefined1 *)((long)plVar12 + 0x51) = 1;
      goto SUB_108d60660;
    }
    if (plVar7 != (long *)0x0) {
      plVar19[3] = (long)plVar7;
      plVar7[4] = (long)plVar19;
    }
    *(long **)(lVar22 + 0x20) = plVar19;
  }
LAB_108d9aaf0:
  plVar19 = (long *)0x0;
SUB_108d60660:
  if (plVar19 == (long *)0x0) {
    return;
  }
  if (plVar12 != (long *)0x0) {
    if (plVar12[0x65] != 0) {
      if ((plVar19 < (long *)plVar12[0x2e]) || ((long *)plVar12[0x2f] <= plVar19)) {
        (*pcRam0000000113297950)();
        uVar5 = (uint)plVar19;
      }
      else {
        uVar5 = (uint)*(ushort *)(plVar12 + 0x2a);
      }
      *(int *)plVar12[0x65] = *(int *)plVar12[0x65] + uVar5;
      return;
    }
    if (((long *)plVar12[0x2e] <= plVar19) && (plVar19 < (long *)plVar12[0x2f])) {
      *plVar19 = plVar12[0x2d];
      plVar12[0x2d] = (long)plVar19;
      *(int *)((long)plVar12 + 0x154) = *(int *)((long)plVar12 + 0x154) + -1;
      return;
    }
  }
  if (plVar19 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar12 = plVar19;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar12;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(plVar19);
    plVar19 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar19);
  return;
}



/* Entry: 108d9ae4c; end: 108d9af1f;  */

/* WARNING: Possible PIC construction at 0x000108d9aebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d9aec0) */
/* WARNING: Removing unreachable block (ram,0x000108d9aed0) */
/* WARNING: Removing unreachable block (ram,0x000108d9aee0) */
/* WARNING: Removing unreachable block (ram,0x000108d9aee8) */

void FUN_108d9ae4c(ulong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar7 = param_1[0x44];
  if (uVar7 != 0) {
    sVar2 = *(short *)(uVar7 + 0x3e);
    puVar6 = (undefined8 *)*param_1;
    puVar5 = puVar6;
    FUN_108d95eb4(puVar6,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_108dabd84();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000108da6a20(param_1,puVar5);
      puVar4 = puVar5;
      if (param_1 != (ulong *)0x0) {
        unaff_x21 = (long)sVar2 + -1;
        unaff_x30 = 0x108d9aec0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar4 = *(undefined8 **)(*(long *)(uVar7 + 8) + unaff_x21 * 0x30 + 0x20);
        unaff_x19 = puVar5;
        unaff_x20 = puVar6;
        unaff_x22 = uVar7;
        unaff_x29 = puVar1;
      }
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      if (puVar6 != (undefined8 *)0x0) {
        if (puVar6[0x65] != 0) {
          *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          if ((puVar4 < (undefined8 *)puVar6[0x2e]) || ((undefined8 *)puVar6[0x2f] <= puVar4)) {
            (*pcRam0000000113297950)();
            uVar3 = (uint)puVar4;
          }
          else {
            uVar3 = (uint)*(ushort *)(puVar6 + 0x2a);
          }
          *(int *)puVar6[0x65] = *(int *)puVar6[0x65] + uVar3;
          return;
        }
        if (((undefined8 *)puVar6[0x2e] <= puVar4) && (puVar4 < (undefined8 *)puVar6[0x2f])) {
          *puVar4 = puVar6[0x2d];
          puVar6[0x2d] = puVar4;
          *(int *)((long)puVar6 + 0x154) = *(int *)((long)puVar6 + 0x154) + -1;
          return;
        }
      }
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
      if (iRam0000000113297910 != 0) {
        if (puRam0000000113829af0 != (undefined8 *)0x0) {
          (*pcRam0000000113297998)();
        }
        puVar5 = puVar4;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar5;
        lRam0000000113829a98 = lRam0000000113829a98 + -1;
        (*pcRam0000000113297940)(puVar4);
        puVar4 = puRam0000000113829af0;
        UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
        if (puRam0000000113829af0 == (undefined8 *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 108d9af20; end: 108d9b493;  */

/* WARNING: Possible PIC construction at 0x000108d94010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d94014) */
/* WARNING: Removing unreachable block (ram,0x000108d9402c) */

void FUN_108d9af20(long *param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  char cVar16;
  int *unaff_x19;
  long unaff_x20;
  long lVar17;
  undefined8 unaff_x21;
  int *unaff_x22;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  lVar17 = *param_1;
  if ((*(char *)(lVar17 + 0x51) != '\0') || (plVar6 = param_1, FUN_108d9605c(), (int)plVar6 != 0))
  goto SUB_108d93fd8;
  plVar6 = param_1;
  if (param_4 == 0) {
    FUN_108dafaec(param_1,param_3,param_2 + 2);
    if (plVar6 == (long *)0x0) goto SUB_108d93fd8;
  }
  else {
    *(char *)(lVar17 + 0x54) = *(char *)(lVar17 + 0x54) + '\x01';
    FUN_108dafaec(param_1,param_3,param_2 + 2);
    *(char *)(lVar17 + 0x54) = *(char *)(lVar17 + 0x54) + -1;
    if (plVar6 == (long *)0x0) {
      FUN_108db169c(param_1,*(undefined8 *)(param_2 + 4));
      goto SUB_108d93fd8;
    }
  }
  if (plVar6[0xd] == 0) {
    uVar18 = 0xfff0bdc0;
  }
  else {
    uVar3 = *(uint *)(lVar17 + 0x28);
    if ((int)uVar3 < 1) {
      uVar18 = 0;
    }
    else {
      uVar13 = 0;
      plVar7 = (long *)(*(long *)(lVar17 + 0x20) + 0x18);
      do {
        uVar18 = uVar13;
        if (*plVar7 == plVar6[0xd]) break;
        uVar13 = uVar13 + 1;
        plVar7 = plVar7 + 4;
        uVar18 = (ulong)uVar3;
      } while (uVar3 != uVar13);
    }
  }
  if (((*(byte *)((long)plVar6 + 0x46) >> 4 & 1) != 0) &&
     (plVar7 = param_1, FUN_108dafb54(param_1,plVar6), (int)plVar7 != 0)) goto SUB_108d93fd8;
  puVar8 = &UNK_10f518224;
  if ((int)uVar18 != 1) {
    puVar8 = &UNK_10f518237;
  }
  uVar19 = *(undefined8 *)
            (*(long *)(lVar17 + 0x20) +
            (-(uVar18 >> 0x1f & 1) & 0xffffffe000000000 | (uVar18 & 0xffffffff) << 5));
  plVar7 = param_1;
  FUN_108dabcbc(param_1,9,puVar8,0,uVar19);
  if ((int)plVar7 != 0) goto SUB_108d93fd8;
  if ((int)param_3 == 0) {
    if ((*(byte *)((long)plVar6 + 0x46) >> 4 & 1) == 0) {
      uVar10 = 0xb;
      uVar12 = 0xd;
      goto LAB_108d9b0b4;
    }
    plVar7 = plVar6 + 0xb;
    do {
      plVar14 = (long *)*plVar7;
      plVar7 = plVar14 + 5;
    } while (*plVar14 != lVar17);
    uVar9 = *(undefined8 *)(plVar14[1] + 8);
    uVar12 = 0x1e;
  }
  else {
    uVar10 = 0x11;
    uVar12 = 0xf;
LAB_108d9b0b4:
    uVar9 = 0;
    if ((int)uVar18 != 1) {
      uVar12 = uVar10;
    }
  }
  plVar7 = param_1;
  FUN_108dabcbc(param_1,uVar12,*plVar6,uVar9,uVar19);
  if (((int)plVar7 != 0) ||
     (plVar7 = param_1, FUN_108dabcbc(param_1,9,*plVar6,0,uVar19), (int)plVar7 != 0))
  goto SUB_108d93fd8;
  lVar11 = *plVar6;
  if (lVar11 != 0) {
    lVar15 = 0;
    do {
      if ((ulong)*(byte *)(lVar11 + lVar15) == 0) {
        cVar2 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar15]];
        cVar16 = '\0';
LAB_108d9b160:
        if (cVar16 != cVar2) goto LAB_108d9b1b0;
        break;
      }
      cVar16 = (&UNK_10dfa05fd)[*(byte *)(lVar11 + lVar15)];
      cVar2 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar15]];
      if (cVar16 != cVar2) goto LAB_108d9b160;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 7);
    lVar15 = 0;
    do {
      if ((ulong)*(byte *)(lVar11 + lVar15) == 0) {
        cVar2 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519c12)[lVar15]];
        cVar16 = '\0';
LAB_108d9b1a8:
        if (cVar16 != cVar2) {
          puVar8 = &UNK_10f519c1e;
          goto LAB_108d9b248;
        }
        break;
      }
      cVar16 = (&UNK_10dfa05fd)[*(byte *)(lVar11 + lVar15)];
      cVar2 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519c12)[lVar15]];
      if (cVar16 != cVar2) goto LAB_108d9b1a8;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0xb);
  }
LAB_108d9b1b0:
  if ((int)param_3 == 0) {
    if (plVar6[3] == 0) goto LAB_108d9b1e0;
    puVar8 = &UNK_10f519c5c;
  }
  else {
    if (plVar6[3] != 0) {
LAB_108d9b1e0:
      plVar7 = param_1;
      FUN_108d70f98();
      if (plVar7 != (long *)0x0) {
        FUN_108dabf20(param_1,1,uVar18);
        FUN_108db1728(param_1,uVar18,&UNK_10f519c7c,*plVar6);
        FUN_108db1808(param_1,param_2,plVar6);
        FUN_108db1974(param_1,plVar6,uVar18,param_3);
      }
      goto SUB_108d93fd8;
    }
    puVar8 = &UNK_10f519c3a;
  }
LAB_108d9b248:
  func_0x000108d6a85c(param_1,puVar8);
SUB_108d93fd8:
  if (param_2 == (int *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  piVar5 = param_2;
  if (0 < *param_2) {
    unaff_x21 = 0;
    unaff_x22 = param_2 + 0x14;
    unaff_x30 = 0x108d94014;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    piVar5 = *(int **)(param_2 + 4);
    unaff_x19 = param_2;
    unaff_x20 = lVar17;
    unaff_x29 = puVar1;
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (lVar17 != 0) {
    if (*(long *)(lVar17 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((piVar5 < *(int **)(lVar17 + 0x170)) || (*(int **)(lVar17 + 0x178) <= piVar5)) {
        (*pcRam0000000113297950)();
        uVar3 = (uint)piVar5;
      }
      else {
        uVar3 = (uint)*(ushort *)(lVar17 + 0x150);
      }
      **(int **)(lVar17 + 0x328) = **(int **)(lVar17 + 0x328) + uVar3;
      return;
    }
    if ((*(int **)(lVar17 + 0x170) <= piVar5) && (piVar5 < *(int **)(lVar17 + 0x178))) {
      *(undefined8 *)piVar5 = *(undefined8 *)(lVar17 + 0x168);
      *(int **)(lVar17 + 0x168) = piVar5;
      *(int *)(lVar17 + 0x154) = *(int *)(lVar17 + 0x154) + -1;
      return;
    }
  }
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (piVar5 == (int *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (piRam0000000113829af0 != (int *)0x0) {
      (*pcRam0000000113297998)();
    }
    piVar4 = piVar5;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)piVar4;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(piVar5);
    piVar5 = piRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (piRam0000000113829af0 == (int *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar5);
  return;
}



/* Entry: 108d9b494; end: 108d9c9fb;  */

long * FUN_108d9b494(long *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  code *pcVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined *puVar22;
  ushort uVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined8 uVar29;
  int iVar30;
  undefined2 *puVar31;
  undefined8 *puVar32;
  long lVar33;
  code *pcVar34;
  long *plVar35;
  bool bVar36;
  int iVar37;
  long lVar38;
  int iVar39;
  int *piVar40;
  int iVar41;
  code *pcVar42;
  char cVar43;
  int *piVar44;
  int *piVar45;
  long *plVar46;
  ulong uVar47;
  uint uVar48;
  int iStack_1dc;
  int *piStack_190;
  int iStack_16c;
  code *pcStack_168;
  undefined8 uStack_148;
  int *piStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  int *piStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  byte bStack_a4;
  char cStack_a3;
  int iStack_a0;
  undefined4 uStack_9c;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  
  iVar4 = (int)param_1[0x40];
  iVar30 = *(int *)((long)param_1 + 0x204);
  *(int *)((long)param_1 + 0x204) = iVar30 + 1;
  *(int *)(param_1 + 0x40) = iVar30;
  if ((((param_2 == (undefined8 *)0x0) || (pcVar34 = (code *)*param_1, pcVar34[0x51] != (code)0x0))
      || (*(int *)((long)param_1 + 0x4c) != 0)) ||
     (plVar35 = param_1, FUN_108dabcbc(param_1,0x15,0,0,0), (int)plVar35 != 0)) {
    return (long *)0x1;
  }
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  pcStack_f8 = (code *)0x0;
  uStack_100 = 0;
  if (*param_3 < 9) {
    FUN_108d93e84(pcVar34,param_2[9]);
    param_2[9] = 0;
    *(ushort *)((long)param_2 + 10) = *(ushort *)((long)param_2 + 10) & 0xfffe;
  }
  FUN_108dae318(param_1,param_2,0);
  uStack_b8 = 0;
  uStack_b0 = 0;
  piStack_c8 = (int *)param_2[9];
  uStack_c0 = 0;
  if ((*(int *)((long)param_1 + 0x4c) == 0) && (pcVar34[0x51] == (code)0x0)) {
    piVar44 = (int *)param_2[5];
    piVar40 = (int *)*param_2;
    uVar23 = *(ushort *)((long)param_2 + 10);
    plVar35 = param_1;
    FUN_108d70f98();
    if (plVar35 == (long *)0x0) goto LAB_108d9b590;
    if ((1 < *piVar40) && ((*param_3 & 0xfe) == 10)) {
      func_0x000108d6a85c(param_1,&UNK_10f519d9f);
      goto LAB_108d9b590;
    }
    uVar23 = uVar23 >> 2 & 1;
    if (param_2[10] == 0) {
      iVar30 = 0;
      do {
        bVar36 = *piVar44 <= iVar30;
        if (*piVar44 <= iVar30) break;
        lVar27 = *(long *)(piVar44 + (long)iVar30 * 0x1c + 0xc);
        if (lVar27 != 0) {
          if (piVar44[(long)iVar30 * 0x1c + 0xe] == 0) {
            pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffff00000000);
            func_0x000108db03f8(param_2,&pcStack_98);
            *(int *)((long)param_1 + 0x1fc) = *(int *)((long)param_1 + 0x1fc) + (int)pcStack_98;
            uVar11 = *(ushort *)(lVar27 + 10);
            plVar46 = param_1;
            func_0x000108db2004(param_1,param_2,iVar30,uVar23,uVar11 >> 2 & 1);
            if ((int)plVar46 == 0) {
              if ((*piVar44 == 1) && ((*(ushort *)(pcVar34 + 0x4c) >> 8 & 1) == 0)) {
                uVar48 = *(uint *)((long)plVar35 + 0x3c);
                iVar1 = *(int *)((long)param_1 + 0x54) + 1;
                *(int *)((long)param_1 + 0x54) = iVar1;
                piVar44[(long)iVar30 * 0x1c + 0xf] = iVar1;
                FUN_108d71098(plVar35,0x14,iVar1,0);
                piVar44[(long)iVar30 * 0x1c + 0xe] = uVar48 + 1;
                uStack_148 = (long *)CONCAT62(uStack_148._2_6_,0xd);
                piStack_140 = (int *)0x0;
                uStack_148 = (long *)CONCAT44(piVar44[(long)iVar30 * 0x1c + 0xf],
                                              (undefined4)uStack_148);
                *(char *)((long)piVar44 + (long)iVar30 * 0x70 + 0x46) =
                     (char)*(int *)((long)param_1 + 0x204);
                FUN_108d9b494(param_1,lVar27,&uStack_148);
                uVar13 = (undefined2)*(undefined8 *)(lVar27 + 0x20);
                FUN_108d93a54();
                *(undefined2 *)(*(long *)(piVar44 + (long)iVar30 * 0x1c + 10) + 0x42) = uVar13;
                *(byte *)((long)piVar44 + (long)iVar30 * 0x70 + 0x45) =
                     *(byte *)((long)piVar44 + (long)iVar30 * 0x70 + 0x45) | 4;
                piVar44[(long)iVar30 * 0x1c + 0x10] = (int)piStack_140;
                FUN_108d71098(plVar35,0x15,piVar44[(long)iVar30 * 0x1c + 0xf],0,0);
                uVar14 = *(uint *)((long)plVar35 + 0x3c);
                if (uVar48 < uVar14) {
                  *(uint *)(plVar35[1] + (ulong)uVar48 * 0x18 + 8) = uVar14;
                }
                *(uint *)(plVar35[6] + 100) = uVar14 - 1;
              }
              else {
                iVar1 = *(int *)((long)param_1 + 0x54) + 1;
                *(int *)((long)param_1 + 0x54) = iVar1;
                piVar44[(long)iVar30 * 0x1c + 0xf] = iVar1;
                plVar46 = plVar35;
                FUN_108d71098(plVar35,0x19,0,iVar1,0);
                uVar48 = 0;
                piVar44[(long)iVar30 * 0x1c + 0xe] = (uint)plVar46 + 1;
                if ((*(byte *)((long)piVar44 + (long)iVar30 * 0x70 + 0x45) >> 1 & 1) == 0) {
                  plVar16 = param_1;
                  func_0x000108dab058();
                  uVar48 = (uint)plVar16;
                }
                uStack_148 = (long *)CONCAT62(uStack_148._2_6_,0xc);
                piStack_140 = (int *)0x0;
                uStack_148 = (long *)CONCAT44(piVar44[(long)iVar30 * 0x1c + 0x12],
                                              (undefined4)uStack_148);
                *(char *)((long)piVar44 + (long)iVar30 * 0x70 + 0x46) =
                     (char)*(int *)((long)param_1 + 0x204);
                FUN_108d9b494(param_1,lVar27,&uStack_148);
                uVar13 = (undefined2)*(undefined8 *)(lVar27 + 0x20);
                FUN_108d93a54();
                *(undefined2 *)(*(long *)(piVar44 + (long)iVar30 * 0x1c + 10) + 0x42) = uVar13;
                if (uVar48 != 0) {
                  uVar14 = *(uint *)((long)plVar35 + 0x3c);
                  if (uVar48 < uVar14) {
                    *(uint *)(plVar35[1] + (ulong)uVar48 * 0x18 + 8) = uVar14;
                  }
                  *(uint *)(plVar35[6] + 100) = uVar14 - 1;
                }
                plVar16 = plVar35;
                FUN_108d71098(plVar35,0x12,piVar44[(long)iVar30 * 0x1c + 0xf],0,0);
                if ((uint)plVar46 < *(uint *)((long)plVar35 + 0x3c)) {
                  *(int *)(plVar35[1] + ((ulong)plVar46 & 0xffffffff) * 0x18 + 4) = (int)plVar16;
                }
              }
              *(undefined1 *)((long)param_1 + 0x1f) = 0;
              *(int *)((long)param_1 + 0x44) = 0;
            }
            else {
              if ((uVar11 >> 2 & 1) != 0) {
                *(ushort *)((long)param_2 + 10) = *(ushort *)((long)param_2 + 10) | 4;
                uVar23 = 1;
              }
              iVar30 = -1;
            }
            if (pcVar34[0x51] != (code)0x0) goto LAB_108d9b590;
            pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffff00000000);
            func_0x000108db03f8(param_2,&pcStack_98);
            *(int *)((long)param_1 + 0x1fc) = *(int *)((long)param_1 + 0x1fc) - (int)pcStack_98;
            piVar44 = (int *)param_2[5];
            if (8 < *param_3) {
              piStack_c8 = (int *)param_2[9];
            }
          }
          else if ((*(byte *)((long)piVar44 + (long)iVar30 * 0x70 + 0x45) >> 2 & 1) == 0) {
            FUN_108d71098(plVar35,0x11,piVar44[(long)iVar30 * 0x1c + 0xf],
                          piVar44[(long)iVar30 * 0x1c + 0xe],0);
          }
        }
        iVar30 = iVar30 + 1;
      } while (param_2[10] == 0);
    }
    else {
      bVar36 = false;
    }
    piVar40 = piStack_c8;
    piVar45 = (int *)*param_2;
    uVar3 = param_2[6];
    pcStack_168 = (code *)param_2[7];
    lVar27 = param_2[8];
    uVar11 = *(ushort *)((long)param_2 + 10);
    bStack_a4 = (byte)uVar11 & 1;
    if (!bVar36) {
      plVar35 = param_1;
      func_0x000108db26b0(param_1,param_2,param_3);
      *(int *)(param_1 + 0x40) = iVar4;
      return plVar35;
    }
    if (((uVar11 & 5) == 1) &&
       (piVar17 = piStack_c8, func_0x000108daa588(piStack_c8,piVar45,0xffffffff), (int)piVar17 == 0)
       ) {
      *(ushort *)((long)param_2 + 10) = uVar11 & 0xfffa;
      pcStack_168 = pcVar34;
      func_0x000108daaabc(pcVar34,piVar45,0);
      param_2[7] = pcStack_168;
    }
    if (piVar40 == (int *)0x0) {
      plVar46 = (long *)0xffffffff;
    }
    else {
      plVar16 = param_1;
      FUN_108db3058(param_1,piVar40,0,*piVar45);
      iVar30 = (int)param_1[10];
      *(int *)(param_1 + 10) = iVar30 + 1;
      uStack_c0 = CONCAT44(iVar30,(int)uStack_c0);
      plVar46 = plVar35;
      FUN_108d71098(plVar35,0x39,iVar30,*piVar40 + *piVar45 + 1,0);
      FUN_108d6aaec(plVar35,plVar46,plVar16,0xfffffffa);
    }
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)plVar46);
    if (*param_3 == 0xc) {
      FUN_108d71098(plVar35,0x39,*(undefined4 *)(param_3 + 4),*piVar45,0);
    }
    uVar18 = plVar35[6];
    FUN_108da84a4();
    param_2[4] = 0x7fffffffffffffff;
    FUN_108db310c(param_1,param_2,uVar18);
    if ((-1 < (int)plVar46) && (*(int *)((long)param_2 + 0xc) == 0)) {
      if (*(char *)(*plVar35 + 0x51) == '\0') {
        puVar28 = (undefined1 *)(plVar35[1] + ((ulong)plVar46 & 0xffffffff) * 0x18);
      }
      else {
        puVar28 = (undefined1 *)0x11372e6a0;
      }
      *puVar28 = 0x3a;
      uStack_b0 = uStack_b0 | 0x100000000;
    }
    if ((*(ushort *)((long)param_2 + 10) & 1) == 0) {
      cVar43 = '\0';
    }
    else {
      iVar30 = (int)param_1[10];
      *(int *)(param_1 + 10) = iVar30 + 1;
      plVar46 = param_1;
      iStack_a0 = iVar30;
      FUN_108db3058(param_1,*param_2,0,0);
      plVar16 = plVar35;
      FUN_108d71098(plVar35,0x39,iVar30,0,0);
      FUN_108d6aaec(plVar35,plVar16,plVar46,0xfffffffa);
      uStack_9c = SUB84(plVar16,0);
      if (plVar35[1] != 0) {
        *(undefined1 *)(plVar35[1] + (long)*(int *)((long)plVar35 + 0x3c) * 0x18 + -0x15) = 8;
      }
      cVar43 = '\x03';
    }
    cStack_a3 = cVar43;
    if ((uVar23 == 0) && (pcStack_168 == (code *)0x0)) {
      uVar24 = 0;
      if ((uVar11 & 1) != 0) {
        uVar24 = 0x400;
      }
      plVar46 = param_1;
      FUN_108db3324(param_1,piVar44,uVar3,piVar40,*param_2,uVar24,0);
      if (plVar46 == (long *)0x0) goto LAB_108d9b590;
      uVar19 = (ulong)(short)plVar46[6];
      FUN_108dbf1d8();
      if (uVar19 < (ulong)param_2[4]) {
        param_2[4] = uVar19;
      }
      if (((uVar11 & 1) != 0) && (cVar9 = (char)plVar46[7], cVar9 != '\0')) {
        cStack_a3 = cVar9;
        cVar43 = cVar9;
      }
      if (piStack_c8 == (int *)0x0) {
LAB_108d9bbe4:
        if (-1 < (int)uStack_b0) {
          func_0x000108d6ac04(plVar35);
        }
      }
      else {
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)*(char *)((long)plVar46 + 0x34));
        if (*piStack_c8 == (int)*(char *)((long)plVar46 + 0x34)) {
          piStack_c8 = (int *)0x0;
          goto LAB_108d9bbe4;
        }
      }
      func_0x000108db4148(param_1,param_2,piVar45,0xffffffff,&piStack_c8,&bStack_a4,param_3,
                          (int)plVar46[8],*(int *)((long)plVar46 + 0x44));
      func_0x000108db4bc0(plVar46);
    }
    else {
      if (pcStack_168 == (code *)0x0) {
        uVar29 = 1;
LAB_108d9bc98:
        param_2[4] = uVar29;
      }
      else {
        iVar30 = *(int *)*param_2;
        if (0 < iVar30) {
          uVar48 = iVar30 + 1;
          puVar31 = (undefined2 *)(*(long *)((int *)*param_2 + 2) + 0x1e);
          do {
            *puVar31 = 0;
            uVar48 = uVar48 - 1;
            puVar31 = puVar31 + 0x10;
          } while (1 < uVar48);
        }
        if (0 < *(int *)pcStack_168) {
          uVar48 = *(int *)pcStack_168 + 1;
          puVar31 = (undefined2 *)(*(long *)(pcStack_168 + 8) + 0x1e);
          do {
            *puVar31 = 0;
            uVar48 = uVar48 - 1;
            puVar31 = puVar31 + 0x10;
          } while (1 < uVar48);
        }
        if (100 < (ulong)param_2[4]) {
          uVar29 = 100;
          goto LAB_108d9bc98;
        }
      }
      pcVar42 = pcStack_168;
      func_0x000108daa588(pcStack_168,piVar40,0xffffffff);
      uVar48 = (uint)plVar35[6];
      FUN_108da84a4();
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      puStack_130 = &uStack_110;
      uStack_118 = 0;
      uStack_100 = CONCAT44(uStack_100._4_4_,*(int *)((long)param_1 + 0x54) + 1);
      if (pcStack_168 == (code *)0x0) {
        iVar30 = 0;
      }
      else {
        iVar30 = *(int *)pcStack_168;
      }
      uStack_108 = CONCAT44(iVar30,(undefined4)uStack_108);
      pcStack_f8 = pcStack_168;
      uStack_148 = param_1;
      piStack_140 = piVar44;
      FUN_108db523c(&uStack_148,piVar45);
      FUN_108db523c(&uStack_148,piVar40);
      if (lVar27 != 0) {
        uStack_88 = 0;
        uStack_80 = 0;
        pcStack_98 = FUN_108dbf720;
        pcStack_90 = FUN_108dbf9d4;
        uStack_78 = 0;
        puStack_70 = &uStack_148;
        func_0x000108daa320(&pcStack_98);
      }
      uVar19 = uStack_d8 & 0xffffffff;
      uStack_e8 = CONCAT44((int)uStack_e8,(int)uStack_e8);
      if (0 < (int)uStack_d8) {
        lVar38 = 0;
        lVar33 = 0;
        uVar23 = (ushort)uStack_118;
        do {
          uStack_118 = CONCAT62(uStack_118._2_6_,uVar23) | 8;
          FUN_108db523c(&uStack_148,*(undefined8 *)(*(long *)(lStack_e0 + lVar38) + 0x20));
          uVar23 = (ushort)uStack_118 & 0xfff7;
          uStack_118 = uStack_118 & 0xfffffffffffffff7;
          lVar33 = lVar33 + 1;
          uVar19 = (ulong)(int)uStack_d8;
          lVar38 = lVar38 + 0x18;
        } while (lVar33 < (long)uVar19);
      }
      lVar33 = lStack_e0;
      uStack_100 = CONCAT44(*(int *)((long)param_1 + 0x54),(undefined4)uStack_100);
      if (pcVar34[0x51] != (code)0x0) goto LAB_108d9b590;
      if (pcStack_168 == (code *)0x0) {
        puVar32 = param_2;
        FUN_108db589c(param_2,lStack_e0,uVar19);
        if (puVar32 == (undefined8 *)0x0) {
          pcStack_98 = (code *)0x0;
          if (param_2[8] == 0) {
            func_0x000108db59ec(lVar33,uVar19,&pcStack_98);
            if (((int)lVar33 == 0) ||
               (pcVar42 = pcVar34, func_0x000108daaabc(pcVar34,pcStack_98,0), pcStack_98 = pcVar42,
               pcVar42 == (code *)0x0)) goto LAB_108d9c040;
            if (pcVar34[0x51] == (code)0x0) {
              puVar32 = *(undefined8 **)(pcVar42 + 8);
              *(bool *)(puVar32 + 3) = (int)lVar33 != 1;
              *(undefined1 *)*puVar32 = 0x9a;
            }
          }
          else {
            lVar33 = 0;
LAB_108d9c040:
            pcVar42 = (code *)0x0;
          }
          pcVar12 = pcStack_98;
          FUN_108db5790(param_1,&uStack_110);
          plVar46 = param_1;
          FUN_108db3324(param_1,piVar44,uVar3,pcVar12,0,lVar33,0);
          if (plVar46 == (long *)0x0) {
            FUN_108d93e84(pcVar34,pcVar42);
            goto LAB_108d9b590;
          }
          FUN_108db53f0(param_1,&uStack_110);
          if ('\0' < *(char *)((long)plVar46 + 0x34)) {
            FUN_108d71098(plVar35,0x10,0,*(int *)((long)plVar46 + 0x44),0);
          }
          func_0x000108db4bc0(plVar46);
          FUN_108db56f4(param_1[2],&uStack_110);
        }
        else {
          if (puVar32[0xd] == 0) {
            uVar19 = 0xfff0bdc0;
          }
          else {
            uVar14 = *(uint *)(*param_1 + 0x28);
            if ((int)uVar14 < 1) {
              uVar19 = 0;
            }
            else {
              uVar47 = 0;
              plVar46 = (long *)(*(long *)(*param_1 + 0x20) + 0x18);
              do {
                uVar19 = uVar47;
                if (*plVar46 == puVar32[0xd]) break;
                uVar47 = uVar47 + 1;
                plVar46 = plVar46 + 4;
                uVar19 = (ulong)uVar14;
              } while (uVar14 != uVar47);
            }
          }
          iVar30 = (int)param_1[10];
          *(int *)(param_1 + 10) = iVar30 + 1;
          uVar24 = *(undefined4 *)(puVar32 + 7);
          func_0x000108dab6e4(param_1,uVar19);
          func_0x000108da6790(param_1,uVar19,*(undefined4 *)(puVar32 + 7),0,*puVar32);
          lVar33 = puVar32[2];
          if ((*(byte *)((long)puVar32 + 0x46) >> 5 & 1) == 0) {
            lVar38 = 0;
joined_r0x000108d9c284:
            for (; lVar33 != 0; lVar33 = *(long *)(lVar33 + 0x28)) {
              if (((((*(byte *)(lVar33 + 0x5b) >> 2 & 1) == 0) &&
                   (*(short *)(lVar33 + 0x54) < *(short *)((long)puVar32 + 0x44))) &&
                  (*(long *)(lVar33 + 0x48) == 0)) &&
                 ((lVar38 == 0 || (*(short *)(lVar33 + 0x54) < *(short *)(lVar38 + 0x54))))) {
                lVar38 = lVar33;
              }
            }
            if (lVar38 == 0) goto LAB_108d9c318;
            uVar24 = *(undefined4 *)(lVar38 + 0x50);
            plVar46 = param_1;
            FUN_108da68a8(param_1,lVar38);
            FUN_108d6a98c(plVar35,0x36,iVar30,uVar24,uVar19,1);
            if (plVar46 != (long *)0x0) {
              FUN_108d6aaec(plVar35,0xffffffff,plVar46,0xfffffffa);
            }
          }
          else {
            lVar38 = lVar33;
            if (lVar33 != 0) {
              do {
                if ((*(byte *)(lVar38 + 0x5b) & 3) == 2) break;
                lVar38 = *(long *)(lVar38 + 0x28);
              } while (lVar38 != 0);
              goto joined_r0x000108d9c284;
            }
LAB_108d9c318:
            FUN_108d6a98c(plVar35,0x36,iVar30,uVar24,uVar19,1);
            lVar38 = 0;
          }
          FUN_108d71098(plVar35,0x32,iVar30,*(undefined4 *)(lStack_e0 + 0x10),0);
          FUN_108d71098(plVar35,0x3d,iVar30,0,0);
          FUN_108db5914(param_1,puVar32,lVar38);
          pcVar42 = (code *)0x0;
        }
        piStack_c8 = (int *)0x0;
        FUN_108da95f4(param_1,lVar27,uVar48,0x10);
        func_0x000108db4148(param_1,param_2,*param_2,0xffffffff,0,0,param_3,uVar48,uVar48);
        FUN_108d93e84(pcVar34,pcVar42);
      }
      else {
        lVar33 = param_1[10];
        *(int *)(param_1 + 10) = (int)lVar33 + 1;
        uStack_110 = CONCAT44((int)lVar33,(undefined4)uStack_110);
        plVar46 = param_1;
        FUN_108db3058(param_1,pcStack_168,0,uStack_e8 & 0xffffffff);
        plVar16 = plVar35;
        FUN_108d71098(plVar35,0x3a,uStack_110._4_4_,uStack_108._4_4_,0);
        FUN_108d6aaec(plVar35,plVar16,plVar46,0xfffffffa);
        iVar5 = *(int *)((long)param_1 + 0x54);
        iVar30 = iVar5 + 3;
        *(int *)((long)param_1 + 0x54) = iVar30;
        uVar14 = (uint)plVar35[6];
        FUN_108da84a4();
        iVar1 = *(int *)((long)param_1 + 0x54) + 1;
        *(int *)((long)param_1 + 0x54) = iVar1;
        uVar15 = (uint)plVar35[6];
        FUN_108da84a4();
        iVar39 = *(int *)((long)param_1 + 0x54);
        iVar2 = *(int *)pcStack_168 + iVar39;
        *(int *)((long)param_1 + 0x54) = iVar2 + *(int *)pcStack_168;
        FUN_108d71098(plVar35,0x19,0,iVar5 + 2,0);
        FUN_108d71098(plVar35,0x19,0,iVar5 + 1,0);
        FUN_108d71098(plVar35,0x1c,0,iVar39 + 1,*(int *)pcStack_168 + iVar39);
        FUN_108d71098(plVar35,0x11,iVar1,uVar15,0);
        uVar24 = 0x900;
        if ((int)pcVar42 != 0) {
          uVar24 = 0x100;
        }
        plVar20 = param_1;
        FUN_108db3324(param_1,piVar44,uVar3,pcStack_168,0,uVar24,0);
        if (plVar20 == (long *)0x0) goto LAB_108d9b590;
        iVar6 = *(int *)pcStack_168;
        iVar25 = (int)*(char *)((long)plVar20 + 0x34);
        if (iVar6 == iVar25) {
          iVar37 = 0;
          iStack_16c = 0;
        }
        else {
          puVar22 = &UNK_10f519d76;
          if (((uVar11 & 1) != 0) &&
             (puVar22 = &UNK_10f519d6d, (*(ushort *)((long)param_2 + 10) & 1) != 0)) {
            puVar22 = &UNK_10f519d76;
          }
          FUN_108db52d4(param_1,puVar22);
          iVar37 = *(int *)pcStack_168;
          uVar19 = uStack_e8 & 0xffffffff;
          iVar41 = iVar37;
          if (0 < (int)uStack_e8) {
            piVar40 = (int *)(lStack_f0 + 0x10);
            iVar26 = iVar37;
            do {
              if (iVar26 <= *piVar40) {
                iVar41 = iVar41 + 1;
                iVar26 = iVar26 + 1;
              }
              uVar19 = uVar19 - 1;
              piVar40 = piVar40 + 8;
            } while (uVar19 != 0);
          }
          if (*(int *)((long)param_1 + 0x44) < iVar41) {
            iStack_16c = *(int *)((long)param_1 + 0x54) + 1;
            *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + iVar41;
          }
          else {
            iStack_16c = (int)param_1[9];
            *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - iVar41;
            *(int *)(param_1 + 9) = iStack_16c + iVar41;
          }
          FUN_108db5354(param_1);
          FUN_108da8740(param_1,pcStack_168,iStack_16c,0);
          if (0 < (int)uStack_e8) {
            lVar38 = 0;
            lVar33 = 0;
            iVar26 = (int)uStack_e8;
            do {
              puVar32 = (undefined8 *)(lStack_f0 + lVar38);
              if (iVar37 <= *(int *)(puVar32 + 2)) {
                iVar26 = iVar37 + iStack_16c;
                plVar21 = param_1;
                FUN_108da7c68(param_1,*puVar32,*(undefined4 *)((long)puVar32 + 0xc),
                              *(undefined4 *)(puVar32 + 1),iVar26,0);
                if (iVar26 != (int)plVar21) {
                  FUN_108d71098(plVar35,0x22,plVar21,iVar26,0);
                }
                iVar37 = iVar37 + 1;
                iVar26 = (int)uStack_e8;
              }
              lVar33 = lVar33 + 1;
              lVar38 = lVar38 + 0x20;
            } while (lVar33 < iVar26);
          }
          if (*(char *)((long)param_1 + 0x1f) == '\0') {
            iVar37 = *(int *)((long)param_1 + 0x54) + 1;
            *(int *)((long)param_1 + 0x54) = iVar37;
          }
          else {
            bVar10 = *(char *)((long)param_1 + 0x1f) - 1;
            *(byte *)((long)param_1 + 0x1f) = bVar10;
            iVar37 = *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24);
          }
          FUN_108d71098(plVar35,0x31,iStack_16c,iVar41,iVar37);
          FUN_108d71098(plVar35,0x6d,uStack_110._4_4_,iVar37,0);
          if (iVar37 != 0) {
            bVar10 = *(byte *)((long)param_1 + 0x1f);
            if (bVar10 < 8) {
              puVar28 = (undefined1 *)((long)param_1 + 0x8e);
              iVar26 = 10;
              do {
                if (*(int *)(puVar28 + 6) == iVar37) {
                  *puVar28 = 1;
                  goto LAB_108d9c458;
                }
                puVar28 = puVar28 + 0x14;
                iVar26 = iVar26 + -1;
              } while (iVar26 != 0);
              *(byte *)((long)param_1 + 0x1f) = bVar10 + 1;
              *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24) = iVar37;
            }
          }
LAB_108d9c458:
          FUN_108da8510(param_1,iStack_16c,iVar41);
          if (*(int *)((long)param_1 + 0x44) < iVar41) {
            *(int *)((long)param_1 + 0x44) = iVar41;
            *(int *)(param_1 + 9) = iStack_16c;
          }
          func_0x000108db4bc0(plVar20);
          iStack_16c = (int)param_1[10];
          *(int *)(param_1 + 10) = iStack_16c + 1;
          uStack_108 = CONCAT44(uStack_108._4_4_,iStack_16c);
          if (*(char *)((long)param_1 + 0x1f) == '\0') {
            iVar37 = *(int *)((long)param_1 + 0x54) + 1;
            *(int *)((long)param_1 + 0x54) = iVar37;
          }
          else {
            bVar10 = *(char *)((long)param_1 + 0x1f) - 1;
            *(byte *)((long)param_1 + 0x1f) = bVar10;
            iVar37 = *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24);
          }
          FUN_108d71098(plVar35,0x3c,iStack_16c,iVar37,iVar41);
          FUN_108d71098(plVar35,0x6a,uStack_110._4_4_,uVar48,0);
          uStack_110._0_2_ = CONCAT11(1,(undefined1)uStack_110);
          FUN_108db5354(param_1);
        }
        if (((int)pcVar42 == 0) && ((*(ushort *)(pcVar34 + 0x4c) >> 2 & 1) == 0)) {
          if ((iVar6 != iVar25) || (*(char *)((long)plVar20 + 0x35) != '\0')) {
            piStack_c8 = (int *)0x0;
            func_0x000108d6ac04(plVar35,uStack_b0 & 0xffffffff);
            goto LAB_108d9c540;
          }
          iStack_1dc = *(int *)((long)plVar35 + 0x3c);
          FUN_108db5354(param_1);
        }
        else {
LAB_108d9c540:
          iStack_1dc = *(int *)((long)plVar35 + 0x3c);
          FUN_108db5354(param_1);
          if (iVar6 != iVar25) {
            FUN_108d71098(plVar35,100,uStack_110._4_4_,iVar37,iStack_16c);
          }
        }
        piStack_190 = (int *)((long)plVar35 + 0x3c);
        iVar2 = iVar2 + 1;
        if (0 < *(int *)pcStack_168) {
          lVar38 = 0;
          lVar33 = 0;
          do {
            if (iVar6 == iVar25) {
              uStack_110 = CONCAT71(uStack_110._1_7_,1);
              FUN_108da6628(param_1,*(undefined8 *)(*(long *)(pcStack_168 + 8) + lVar38),
                            iVar2 + (int)lVar33);
            }
            else {
              FUN_108d71098(plVar35,0x2f,iStack_16c,lVar33,iVar2 + (int)lVar33);
            }
            lVar33 = lVar33 + 1;
            lVar38 = lVar38 + 0x20;
          } while (lVar33 < *(int *)pcStack_168);
        }
        if (plVar46 != (long *)0x0) {
          *(int *)plVar46 = (int)*plVar46 + 1;
        }
        plVar21 = plVar35;
        FUN_108d71098(plVar35,0x2a,iVar39 + 1,iVar2);
        FUN_108d6aaec(plVar35,plVar21,plVar46,0xfffffffa);
        uVar7 = *(uint *)((long)plVar35 + 0x3c);
        FUN_108d71098(plVar35,0x2b,uVar7 + 1,0,uVar7 + 1);
        FUN_108db53a0(param_1,iVar2,iVar39 + 1,*(int *)pcStack_168);
        FUN_108d71098(plVar35,0x11,iVar30,uVar14,0);
        FUN_108d71098(plVar35,0x89,iVar5 + 2,uVar48,0);
        FUN_108d71098(plVar35,0x11,iVar1,uVar15,0);
        uVar8 = *(uint *)((long)plVar35 + 0x3c);
        if (uVar7 < uVar8) {
          *(uint *)(plVar35[1] + (ulong)uVar7 * 0x18 + 8) = uVar8;
        }
        *(uint *)(plVar35[6] + 100) = uVar8 - 1;
        FUN_108db53f0(param_1,&uStack_110);
        FUN_108d71098(plVar35,0x19,1,iVar5 + 1,0);
        if (iVar6 == iVar25) {
          func_0x000108db4bc0(plVar20);
          func_0x000108d6ac04(plVar35,(int)plVar16);
        }
        else {
          FUN_108d71098(plVar35,5,uStack_110._4_4_,iStack_1dc,0);
        }
        FUN_108d71098(plVar35,0x11,iVar30,uVar14,0);
        FUN_108d71098(plVar35,0x10,0,uVar48,0);
        iVar2 = *(int *)((long)plVar35 + 0x3c);
        FUN_108d71098(plVar35,0x19,1,iVar5 + 2,0);
        FUN_108d71098(plVar35,0x12,iVar30,0,0);
        lVar33 = plVar35[6];
        if ((int)uVar14 < 0) {
          lVar38 = *(long *)(lVar33 + 0x80);
          iVar39 = *piStack_190;
          if (lVar38 != 0) {
            *(int *)(lVar38 + (ulong)~uVar14 * 4) = iVar39;
          }
        }
        else {
          iVar39 = *piStack_190;
        }
        *(int *)(lVar33 + 100) = iVar39 + -1;
        FUN_108d71098(plVar35,0x89,iVar5 + 1,iVar39 + 2,0);
        FUN_108d71098(plVar35,0x12,iVar30,0,0);
        FUN_108db56f4(param_1[2],&uStack_110);
        FUN_108da95f4(param_1,lVar27,iVar39 + 1,0x10);
        func_0x000108db4148(param_1,param_2,*param_2,0xffffffff,&piStack_c8,&bStack_a4,param_3,
                            iVar39 + 1,iVar2);
        FUN_108d71098(plVar35,0x12,iVar30,0,0);
        lVar27 = plVar35[6];
        if ((int)uVar15 < 0) {
          lVar33 = *(long *)(lVar27 + 0x80);
          iVar30 = *piStack_190;
          if (lVar33 != 0) {
            *(int *)(lVar33 + (ulong)~uVar15 * 4) = iVar30;
          }
        }
        else {
          iVar30 = *piStack_190;
        }
        *(int *)(lVar27 + 100) = iVar30 + -1;
        FUN_108db5790(param_1,&uStack_110);
        FUN_108d71098(plVar35,0x12,iVar1,0,0);
      }
      uVar18 = uVar18 & 0xffffffff;
      lVar27 = plVar35[6];
      if (((int)uVar48 < 0) && (lVar33 = *(long *)(lVar27 + 0x80), lVar33 != 0)) {
        *(int *)(lVar33 + (ulong)~uVar48 * 4) = *(int *)((long)plVar35 + 0x3c);
      }
      *(int *)(lVar27 + 100) = *(int *)((long)plVar35 + 0x3c) + -1;
    }
    if (cVar43 == '\x03') {
      FUN_108db52d4(param_1,&UNK_10f519d6d);
    }
    if (piStack_c8 != (int *)0x0) {
      puVar22 = &UNK_10f519d7f;
      if ((int)uStack_c0 < 1) {
        puVar22 = &UNK_10f519d96;
      }
      FUN_108db52d4(param_1,puVar22);
      FUN_108db5a94(param_1,param_2,&piStack_c8,*piVar45,param_3);
    }
    lVar27 = plVar35[6];
    if (((int)(uint)uVar18 < 0) && (lVar33 = *(long *)(lVar27 + 0x80), lVar33 != 0)) {
      *(int *)(lVar33 + (ulong)~(uint)uVar18 * 4) = *(int *)((long)plVar35 + 0x3c);
    }
    *(int *)(lVar27 + 100) = *(int *)((long)plVar35 + 0x3c) + -1;
    *(int *)(param_1 + 0x40) = iVar4;
    if (*(int *)((long)param_1 + 0x4c) < 1) {
      if (*param_3 == 9) {
        func_0x000108db6010(param_1,piVar44,piVar45);
      }
      plVar35 = (long *)0x0;
      goto LAB_108d9b598;
    }
  }
  else {
LAB_108d9b590:
    *(int *)(param_1 + 0x40) = iVar4;
  }
  plVar35 = (long *)0x1;
LAB_108d9b598:
  func_0x000108d60660(pcVar34,lStack_f0);
  func_0x000108d60660(pcVar34,lStack_e0);
  return plVar35;
}



/* Entry: 108d9c9fc; end: 108d9ca5f;  */

void FUN_108d9c9fc(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_2 + 0x50) != 0) {
    iVar2 = -1;
    lVar1 = param_2;
    lVar4 = 0;
    do {
      lVar3 = lVar1;
      *(long *)(lVar3 + 0x58) = lVar4;
      *(ushort *)(lVar3 + 10) = *(ushort *)(lVar3 + 10) | 0x40;
      iVar2 = iVar2 + 1;
      lVar1 = *(long *)(lVar3 + 0x50);
      lVar4 = lVar3;
    } while (*(long *)(lVar3 + 0x50) != 0);
    if (((*(ushort *)(param_2 + 10) >> 8 & 1) == 0) &&
       (0 < *(int *)(*param_1 + 0x78) && *(int *)(*param_1 + 0x78) <= iVar2)) {
      lVar4 = *param_1;
      lVar1 = lVar4;
      FUN_108d7169c(lVar4,&UNK_10f51a13d,&stack0x00000000);
      if (*(char *)(lVar4 + 0x54) == '\0') {
        *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
        func_0x000108d60660(lVar4,param_1[1]);
        param_1[1] = lVar1;
        *(undefined4 *)(param_1 + 3) = 1;
      }
      else {
        func_0x000108d60660(lVar4,lVar1);
      }
      return;
    }
  }
  return;
}



/* Entry: 108d9ca60; end: 108d9cb63;  */

int * FUN_108d9ca60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if ((param_2 == 0) && (param_7 != 0 || param_8 != 0)) {
    func_0x000108d6a85c(param_1,&UNK_10f51a15f);
  }
  else {
    piVar2 = piVar3;
    FUN_108d9cf10();
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      iVar1 = *piVar2 + -1;
      if (*(int *)(param_5 + 1) != 0) {
        FUN_108d95eb4(piVar3,*param_5);
        FUN_108dabd84();
        *(int **)(piVar2 + (long)iVar1 * 0x1c + 8) = piVar3;
      }
      *(undefined8 *)(piVar2 + (long)iVar1 * 0x1c + 0xc) = param_6;
      *(long *)(piVar2 + (long)iVar1 * 0x1c + 0x14) = param_7;
      *(long *)(piVar2 + (long)iVar1 * 0x1c + 0x16) = param_8;
      return piVar2;
    }
  }
  func_0x000108d93df0(piVar3,param_7);
  func_0x000108d94124(piVar3,param_8);
  func_0x000108d93f18(piVar3,param_6,1);
  return (int *)0x0;
}



/* Entry: 108d9cb64; end: 108d9ccd3;  */

long * FUN_108d9cb64(long *param_1,long param_2,long *param_3,long param_4,long param_5,long param_6
                    ,long param_7,undefined2 param_8,long param_9,long param_10)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lStack_f0;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  plVar2 = (long *)*param_1;
  plVar3 = plVar2;
  FUN_108d6a6fc(plVar2,0x78);
  if (plVar3 == (long *)0x0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    plVar3 = &lStack_f0;
    uStack_e8 = 0;
    lStack_f0 = 0;
  }
  else {
    plVar3[0xe] = 0;
    plVar3[0xb] = 0;
    plVar3[10] = 0;
    plVar3[0xd] = 0;
    plVar3[0xc] = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    plVar3[5] = 0;
    plVar3[4] = 0;
    plVar3[1] = 0;
    *plVar3 = 0;
  }
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    plVar1 = plVar2;
    FUN_108db0138(plVar2,0x74,&uStack_78,0);
    param_2 = *param_1;
    FUN_108d9ccd4(param_2,0,plVar1);
  }
  *plVar3 = param_2;
  if ((param_3 == (long *)0x0) &&
     (param_3 = plVar2, FUN_108d6a6fc(plVar2,0x78), param_3 != (long *)0x0)) {
    param_3[0xe] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
  }
  plVar3[5] = (long)param_3;
  plVar3[6] = param_4;
  plVar3[7] = param_5;
  plVar3[8] = param_6;
  plVar3[9] = param_7;
  *(undefined2 *)((long)plVar3 + 10) = param_8;
  *(undefined1 *)(plVar3 + 1) = 0x77;
  plVar3[0xc] = param_9;
  plVar3[0xd] = param_10;
  *(undefined8 *)((long)plVar3 + 0x14) = 0xffffffffffffffff;
  if (*(char *)((long)plVar2 + 0x51) != '\0') {
    func_0x000108d93f18(plVar2,plVar3,plVar3 != &lStack_f0);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 108d9ccd4; end: 108d9cda3;  */

uint * FUN_108d9ccd4(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    param_2 = param_1;
    FUN_108d6a6fc(param_1,0x10);
    if (param_2 != (uint *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      puVar2 = param_1;
      FUN_108d6a6fc(param_1,0x20);
      *(uint **)(param_2 + 2) = puVar2;
      if (puVar2 != (uint *)0x0) goto LAB_108d9cd54;
    }
LAB_108d9cd74:
    func_0x000108d93df0(param_1,param_3);
    FUN_108d93e84(param_1,param_2);
    param_2 = (uint *)0x0;
  }
  else {
    uVar1 = *param_2;
    puVar2 = *(uint **)(param_2 + 2);
    if ((uVar1 & uVar1 - 1) == 0) {
      puVar2 = param_1;
      func_0x000108d711ec(param_1,*(uint **)(param_2 + 2),(long)(int)uVar1 << 6);
      if (puVar2 == (uint *)0x0) goto LAB_108d9cd74;
      *(uint **)(param_2 + 2) = puVar2;
    }
LAB_108d9cd54:
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    puVar2 = puVar2 + (long)(int)uVar1 * 8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined8 *)puVar2 = param_3;
  }
  return param_2;
}



/* Entry: 108d9cda4; end: 108d9cde7;  */

void FUN_108d9cda4(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  if (param_2 != (int *)0x0) {
    lVar4 = *(long *)(param_2 + 2);
    iVar1 = *param_2;
    pbVar2 = (byte *)*param_1;
    FUN_108d95eb4(pbVar2,*param_3,*(undefined4 *)(param_3 + 1));
    *(byte **)(lVar4 + (long)iVar1 * 0x20 + -0x18) = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      if (pbVar2 == (byte *)0x0) {
        return;
      }
      bVar3 = *pbVar2;
      if (bVar3 < 0x5b) {
        if ((bVar3 != 0x22) && (bVar3 != 0x27)) {
          return;
        }
      }
      else if (bVar3 != 0x60) {
        if (bVar3 != 0x5b) {
          return;
        }
        bVar3 = 0x5d;
      }
      uVar5 = 0;
      uVar6 = 1;
      while( true ) {
        bVar7 = pbVar2[(int)uVar6];
        if ((pbVar2[(int)uVar6] == bVar3) &&
           (uVar6 = (long)(int)uVar6 + 1, bVar7 = bVar3, pbVar2[uVar6] != bVar3)) break;
        pbVar2[uVar5] = bVar7;
        uVar5 = uVar5 + 1;
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      pbVar2[uVar5 & 0xffffffff] = 0;
      return;
    }
  }
  return;
}



/* Entry: 108d9cde8; end: 108d9ce47;  */

void FUN_108d9cde8(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != (int *)0x0) {
    uVar2 = *param_1;
    lVar1 = *(long *)(param_2 + 2) + (long)*param_2 * 0x20;
    func_0x000108d60660(uVar2,*(undefined8 *)(lVar1 + -0x10));
    FUN_108d95eb4(uVar2,*(undefined8 *)(param_3 + 8),
                  (long)(*(int *)(param_3 + 0x10) - (int)*(undefined8 *)(param_3 + 8)));
    *(undefined8 *)(lVar1 + -0x10) = uVar2;
  }
  return;
}



/* Entry: 108d9ce48; end: 108d9cf0f;  */

void FUN_108d9ce48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_30;
  uint uStack_28;
  
  lStack_30 = param_3;
  if (param_3 == 0) {
    uStack_28 = 0;
  }
  else {
    _strlen();
    uStack_28 = (uint)param_3 & 0x3fffffff;
  }
  FUN_108db0138(param_1,param_2,&lStack_30,0);
  return;
}



/* Entry: 108d9cf10; end: 108d9cfff;  */

int * FUN_108d9cf10(int *param_1,int *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long *plVar6;
  
  if (param_2 == (int *)0x0) {
    param_2 = param_1;
    FUN_108d6a6fc(param_1,0x78);
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[1] = 1;
  }
  piVar4 = param_1;
  FUN_108db62c4(param_1,param_2,1,*param_2);
  if (*(char *)((long)param_1 + 0x51) != '\0') {
    func_0x000108d93fd8(param_1,piVar4);
    return (int *)0x0;
  }
  iVar3 = *piVar4;
  if (param_4 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)0x0;
    if (*param_4 != 0) {
      plVar6 = param_4;
    }
  }
  plVar1 = param_3;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6;
  }
  plVar2 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar2 = param_3;
  }
  piVar5 = param_1;
  func_0x000108dabd44(param_1,plVar1);
  *(int **)(piVar4 + (long)iVar3 * 0x1c + -0x16) = piVar5;
  func_0x000108dabd44(param_1,plVar2);
  *(int **)(piVar4 + (long)iVar3 * 0x1c + -0x18) = param_1;
  return piVar4;
}



/* Entry: 108d9d000; end: 108d9ffc7;  */

ulong FUN_108d9d000(ulong *param_1,undefined *param_2,ulong param_3,long param_4)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  byte *unaff_x22;
  uint uVar20;
  ulong unaff_x24;
  ulong *puVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long unaff_x26;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  int iStack_1b0;
  int iStack_1ac;
  ulong uStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  ulong uStack_188;
  ulong *puStack_170;
  ulong *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  byte *pbStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  long lStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  char *pcStack_a0;
  long lStack_98;
  undefined *puStack_90;
  ulong *puStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar23 = 0;
  uVar17 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = param_2;
  uStack_78 = param_3;
  lStack_70 = param_4;
  pbVar26 = &UNK_10dfa2deb;
  uVar12 = param_3;
  puStack_90 = param_2;
  puStack_88 = param_1;
LAB_108d9d064:
  puVar18 = (ulong *)(&puStack_80)[lVar23];
  if (puVar18 != (ulong *)0x0) {
    uVar19 = puVar18[1];
    unaff_x24 = (ulong)(uint)uVar19;
    unaff_x26 = 7;
    pbVar25 = pbVar26;
    do {
      unaff_x22 = pbVar26;
      if ((uint)uVar19 == (uint)pbVar25[-1]) {
        param_1 = (ulong *)*puVar18;
        param_2 = &UNK_10dfa2dc7 + pbVar25[-2];
        uVar12 = unaff_x24;
        func_0x000108d5ea34();
        if ((int)param_1 == 0) goto LAB_108d9d0ac;
      }
      pbVar25 = pbVar25 + 3;
      unaff_x26 = unaff_x26 + -1;
      if (unaff_x26 == 0) {
        uVar17 = (ulong)((uint)uVar17 | 0x40);
        pbVar26 = pbVar25;
        break;
      }
    } while( true );
  }
  goto LAB_108d9d0d0;
LAB_108d9d0ac:
  uVar17 = (ulong)((uint)uVar17 | (uint)*pbVar25);
  lVar23 = lVar23 + 1;
  if (lVar23 == 3) goto LAB_108d9d0d0;
  goto LAB_108d9d064;
LAB_108d9d0d0:
  uVar16 = (uint)uVar17;
  if ((((uVar16 ^ 0xffffffff) & 0x21) == 0) || ((uVar16 >> 6 & 1) != 0)) {
    pcStack_a0 = " ";
    if (param_4 == 0) {
      pcStack_a0 = "";
    }
    puStack_b0 = puStack_90;
    param_2 = &UNK_10f51a189;
    uStack_a8 = param_3;
    lStack_98 = param_4;
LAB_108d9d120:
    param_1 = puStack_88;
    func_0x000108d6a85c();
    uVar17 = 1;
  }
  else if (((uVar16 >> 5 & 1) != 0) && ((uVar16 & 0x18) != 8)) {
    param_2 = &UNK_10f51a1b5;
    goto LAB_108d9d120;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar17;
  }
  ___stack_chk_fail();
  puStack_110 = &UNK_10dfa2dc7;
  uStack_b8 = 0x108d9d16c;
  uStack_120 = 0;
  uVar19 = *param_1;
  pbStack_108 = pbVar26;
  lStack_100 = unaff_x26;
  lStack_f8 = lVar23;
  uStack_f0 = unaff_x24;
  uStack_e8 = param_3;
  pbStack_e0 = unaff_x22;
  lStack_d8 = param_4;
  puStack_d0 = puVar18;
  uStack_c8 = uVar17;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (((*(int *)((long)param_1 + 0x4c) == 0) && (*(char *)(uVar19 + 0x51) == '\0')) &&
     (puVar18 = param_1, FUN_108db0ae0(), puVar18 != (ulong *)0x0)) {
    puVar21 = param_1;
    func_0x000108dbfa84(param_1,puVar18,0x6d,0,0);
    uVar17 = puVar18[3];
    puVar5 = param_1;
    FUN_108dafb54(param_1,puVar18);
    if (((int)puVar5 == 0) &&
       (puVar5 = param_1, FUN_108dbfb3c(param_1,puVar18,puVar21 != (ulong *)0x0), (int)puVar5 == 0))
    {
      if (puVar18[0xd] == 0) {
        uVar27 = 0xfff0bdc0;
      }
      else {
        uVar16 = *(uint *)(uVar19 + 0x28);
        if ((int)uVar16 < 1) {
          uVar27 = 0;
        }
        else {
          uVar24 = 0;
          puVar5 = (ulong *)(*(long *)(uVar19 + 0x20) + 0x18);
          do {
            uVar27 = uVar24;
            if (*puVar5 == puVar18[0xd]) break;
            uVar24 = uVar24 + 1;
            puVar5 = puVar5 + 4;
            uVar27 = (ulong)uVar16;
          } while (uVar16 != uVar24);
        }
      }
      puVar5 = param_1;
      FUN_108dabcbc(param_1,9,*puVar18,0,
                    *(undefined8 *)
                     (*(long *)(uVar19 + 0x20) +
                     (-(uVar27 >> 0x1f & 1) & 0xffffffe000000000 | (uVar27 & 0xffffffff) << 5)));
      if ((int)puVar5 != 1) {
        iVar1 = (int)param_1[10];
        iVar14 = iVar1 + 1;
        *(int *)(param_1 + 10) = iVar14;
        *(int *)(param_2 + 0x48) = iVar1;
        uVar24 = puVar18[2];
        if (uVar24 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          iVar13 = iVar14;
          do {
            iVar13 = iVar13 + 1;
            uVar16 = uVar16 + 1;
            uVar24 = *(ulong *)(uVar24 + 0x28);
          } while (uVar24 != 0);
          *(int *)(param_1 + 10) = iVar13;
        }
        if (uVar17 == 0) {
          uStack_188 = 0;
          puStack_170 = (ulong *)0x0;
        }
        else {
          uStack_188 = param_1[0x46];
          param_1[0x46] = *puVar18;
          puStack_170 = param_1;
        }
        puVar6 = param_1;
        FUN_108d70f98();
        if (puVar6 == (ulong *)0x0) {
LAB_108d9d3d4:
          uVar24 = 0;
        }
        else {
          if (*(char *)((long)param_1 + 0x1e) == '\0') {
            *(ushort *)((long)puVar6 + 0x8c) = *(ushort *)((long)puVar6 + 0x8c) | 4;
          }
          FUN_108dabf20(param_1,1,uVar27);
          if (uVar17 != 0) {
            FUN_108dbfbdc(param_1,puVar18,uVar12,iVar1);
            uStack_120 = CONCAT44(iVar1,iVar1);
          }
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          ppuVar7 = &puStack_158;
          puStack_158 = param_1;
          puStack_150 = param_2;
          func_0x000108dacc04(ppuVar7,uVar12);
          if ((int)ppuVar7 != 0) goto LAB_108d9d3d4;
          if (*(char *)(uVar19 + 0x2c) < '\0') {
            iStack_19c = *(int *)((long)param_1 + 0x54) + 1;
            *(int *)((long)param_1 + 0x54) = iStack_19c;
            FUN_108d71098(puVar6,0x19,0,iStack_19c,0);
          }
          else {
            iStack_19c = -1;
          }
          if (((puVar21 == (ulong *)0x0) && (uVar12 == 0)) &&
             (((int)puVar5 == 0 && ((*(byte *)((long)puVar18 + 0x46) >> 4 & 1) == 0)))) {
            iVar13 = *(int *)(*param_1 + 0x2c);
            FUN_108dbfd2c(iVar13,puVar18,0,0);
            if (iVar13 != 0) goto LAB_108d9d454;
            func_0x000108da6790(param_1,uVar27,(int)puVar18[7],1,*puVar18);
            if ((*(byte *)((long)puVar18 + 0x46) >> 5 & 1) == 0) {
              uVar17 = *puVar18;
              puVar21 = puVar6;
              FUN_108d71098(puVar6,0x76,(int)puVar18[7],uVar27,iStack_19c);
              func_0x000108d6aaec(puVar6,puVar21,uVar17,0xfffffffe);
            }
            for (uVar17 = puVar18[2]; uVar17 != 0; uVar17 = *(ulong *)(uVar17 + 0x28)) {
              FUN_108d71098(puVar6,0x76,*(undefined4 *)(uVar17 + 0x50),uVar27,0);
            }
            uVar24 = 0;
LAB_108d9dabc:
            if ((*(char *)((long)param_1 + 0x1e) == '\0') && (param_1[0x39] == 0)) {
              func_0x000108dc03ac(param_1);
            }
            if (((*(char *)(uVar19 + 0x2c) < '\0') && (*(char *)((long)param_1 + 0x1e) == '\0')) &&
               (param_1[0x39] == 0)) {
              FUN_108d71098(puVar6,0x23,iStack_19c,1,0);
              FUN_108d71004(puVar6,1);
              if (*(char *)(*puVar6 + 0x51) == '\0') {
                FUN_108d67c04(puVar6[4],&UNK_10f51a1ec,0xffffffff,1,0);
              }
            }
          }
          else {
LAB_108d9d454:
            if ((*(byte *)((long)puVar18 + 0x46) >> 5 & 1) == 0) {
              iStack_1b0 = *(int *)((long)param_1 + 0x54) + 1;
              *(int *)((long)param_1 + 0x54) = iStack_1b0;
              FUN_108d71098(puVar6,0x1c,0,iStack_1b0,0);
              uVar27 = 0;
              uVar20 = 0;
              iStack_1a0 = 0;
              iStack_1ac = 0;
              uVar22 = 1;
            }
            else {
              for (uVar27 = puVar18[2]; (uVar27 != 0 && ((*(byte *)(uVar27 + 0x5b) & 3) != 2));
                  uVar27 = *(ulong *)(uVar27 + 0x28)) {
              }
              uVar3 = *(ushort *)(uVar27 + 0x56);
              uVar22 = (uint)uVar3;
              iStack_1a0 = (int)param_1[10];
              uVar20 = *(int *)((long)param_1 + 0x54) + 1;
              *(int *)(param_1 + 10) = iStack_1a0 + 1;
              *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + (int)(short)uVar3;
              puVar5 = puVar6;
              FUN_108d71098(puVar6,0x39,iStack_1a0,(long)(short)uVar3,0);
              iStack_1ac = (int)puVar5;
              FUN_108da6878(param_1,uVar27);
              iStack_1b0 = 0;
            }
            puVar5 = param_1;
            FUN_108db3324(param_1,param_2,uVar12,0,0,0xc,iVar14);
            if (puVar5 == (ulong *)0x0) goto LAB_108d9d3d4;
            puVar15 = (ulong *)(ulong)uVar20;
            lVar23 = *(long *)((long)puVar5 + 0x4c);
            cVar2 = *(char *)((long)puVar5 + 0x36);
            if (*(char *)(uVar19 + 0x2c) < '\0') {
              FUN_108d71098(puVar6,0x25,iStack_19c,1,0);
            }
            sVar4 = (short)uVar22;
            if (uVar27 == 0) {
              puVar8 = param_1;
              FUN_108da7c68(param_1,puVar18,0xffffffff,iVar1,*(int *)((long)param_1 + 0x54) + 1,0);
              if (*(int *)((long)param_1 + 0x54) < (int)puVar8) {
                *(int *)((long)param_1 + 0x54) = (int)puVar8;
              }
            }
            else {
              puVar8 = puVar15;
              if (0 < sVar4) {
                uVar24 = 0;
                do {
                  FUN_108da9a60(puVar6,puVar18,iVar1,
                                (long)*(short *)(*(long *)(uVar27 + 8) + uVar24 * 2),
                                uVar20 + (int)uVar24);
                  uVar24 = uVar24 + 1;
                } while (uVar22 != uVar24);
              }
            }
            iVar14 = (int)puVar8;
            if (cVar2 == '\0') {
              if (uVar27 == 0) {
                FUN_108d71098(puVar6,0x80,iStack_1b0,puVar8,0);
              }
              else {
                iVar14 = *(int *)((long)param_1 + 0x54) + 1;
                *(int *)((long)param_1 + 0x54) = iVar14;
                puVar8 = puVar6;
                FUN_108dbf060(puVar6,uVar27);
                puVar10 = puVar6;
                FUN_108d71098(puVar6,0x31,puVar15,(int)sVar4,iVar14);
                func_0x000108d6aaec(puVar6,puVar10,puVar8,(int)sVar4);
                FUN_108d71098(puVar6,0x6e,iStack_1a0,iVar14,0);
              }
              uVar22 = (uint)(uVar27 == 0);
              func_0x000108db4bc0(puVar5);
              uVar24 = 0;
              uStack_1a8 = 0;
LAB_108d9d838:
              if (uVar17 == 0) {
                FUN_108dbfe30(param_1,puVar18,0x37,iVar1,uVar24,(long)&uStack_120 + 4,&uStack_120);
              }
              if (cVar2 == '\0') {
                if (uVar27 == 0) {
                  puVar5 = puVar6;
                  FUN_108d71098(puVar6,0x81,iStack_1b0,0,iVar14);
                  uVar16 = (uint)puVar5;
                }
                else {
                  puVar5 = puVar6;
                  FUN_108d71098(puVar6,0x6c,iStack_1a0,0,0);
                  uVar16 = (uint)puVar5;
                  FUN_108d71098(puVar6,0x65,iStack_1a0,iVar14,0);
                }
              }
              else {
                if (*(char *)(uVar24 + (long)(uStack_120._4_4_ - iVar1)) != '\0') {
                  FUN_108d6a98c(puVar6,0x44,uStack_120._4_4_,uStack_1a8,iVar14,(int)(short)uVar22);
                }
                uVar16 = 0;
              }
              if ((*(byte *)((long)puVar18 + 0x46) >> 4 & 1) == 0) {
                FUN_108dc00b8(param_1,puVar18,puVar21,uStack_120._4_4_,uStack_120 & 0xffffffff,
                              iVar14,(int)(short)uVar22,*(char *)((long)param_1 + 0x1e) == '\0',10);
              }
              else {
                for (puVar21 = (ulong *)puVar18[0xb];
                    (puVar21 != (ulong *)0x0 && (*puVar21 != uVar19)); puVar21 = (ulong *)puVar21[5]
                    ) {
                }
                FUN_108dc0018(param_1,puVar18);
                puVar5 = puVar6;
                FUN_108d71098(puVar6,0xf,0,1,iVar14);
                func_0x000108d6aaec(puVar6,puVar5,puVar21,0xfffffff6);
                if (puVar6[1] != 0) {
                  *(undefined1 *)(puVar6[1] + (long)*(int *)((long)puVar6 + 0x3c) * 0x18 + -0x15) =
                       2;
                }
                puVar21 = param_1;
                if ((ulong *)param_1[0x38] != (ulong *)0x0) {
                  puVar21 = (ulong *)param_1[0x38];
                }
                *(undefined1 *)((long)puVar21 + 0x21) = 1;
              }
              if (cVar2 == '\0') {
                if (uVar27 == 0) {
                  uVar11 = 0x10;
                  iStack_1a0 = 0;
                  uVar20 = uVar16;
                }
                else {
                  uVar11 = 9;
                  uVar20 = uVar16 + 1;
                }
                FUN_108d71098(puVar6,uVar11,iStack_1a0,uVar20,0);
                uVar20 = *(uint *)((long)puVar6 + 0x3c);
                if (uVar16 < uVar20) {
                  *(uint *)(puVar6[1] + (ulong)uVar16 * 0x18 + 8) = uVar20;
                }
                uVar9 = puVar6[6];
              }
              else {
                uVar9 = puVar6[6];
                if (((int)(uint)uStack_1a8 < 0) && (*(long *)(uVar9 + 0x80) != 0)) {
                  *(undefined4 *)(*(long *)(uVar9 + 0x80) + (ulong)~(uint)uStack_1a8 * 4) =
                       *(undefined4 *)((long)puVar6 + 0x3c);
                }
                uVar20 = *(uint *)((long)puVar6 + 0x3c);
              }
              *(uint *)(uVar9 + 100) = uVar20 - 1;
              if ((uVar17 == 0) && ((*(byte *)((long)puVar18 + 0x46) >> 4 & 1) == 0)) {
                if (uVar27 == 0) {
                  FUN_108d71098(puVar6,0x3d,uStack_120._4_4_,0,0);
                }
                uVar17 = puVar18[2];
                if (uVar17 != 0) {
                  iVar14 = (int)uStack_120;
                  do {
                    FUN_108d71098(puVar6,0x3d,iVar14,0,0);
                    uVar17 = *(ulong *)(uVar17 + 0x28);
                    iVar14 = iVar14 + 1;
                  } while (uVar17 != 0);
                }
              }
              goto LAB_108d9dabc;
            }
            uVar24 = uVar19;
            FUN_108d6a6fc(uVar19,uVar16 + 2);
            if (uVar24 != 0) {
              _memset(uVar24,1,(ulong)uVar16 + 1);
              *(undefined1 *)(uVar24 + (ulong)uVar16 + 1) = 0;
              if (-1 < (int)lVar23) {
                *(undefined1 *)(uVar24 + (long)((int)lVar23 - iVar1)) = 0;
              }
              if (-1 < lVar23) {
                *(undefined1 *)(uVar24 + (long)((int)((ulong)lVar23 >> 0x20) - iVar1)) = 0;
              }
              if (iStack_1ac != 0) {
                func_0x000108d6ac04(puVar6);
              }
              puVar15 = puVar6;
              FUN_108d71098(puVar6,0x10,0,0,0);
              func_0x000108db4bc0(puVar5);
              uVar9 = puVar6[6];
              FUN_108da84a4();
              uStack_1a8 = uVar9 & 0xffffffff;
              FUN_108d71098(puVar6,0x10,0,uVar9,0);
              uVar16 = *(uint *)((long)puVar6 + 0x3c);
              if ((uint)puVar15 < uVar16) {
                *(uint *)(puVar6[1] + ((ulong)puVar15 & 0xffffffff) * 0x18 + 8) = uVar16;
              }
              *(uint *)(puVar6[6] + 100) = uVar16 - 1;
              goto LAB_108d9d838;
            }
            func_0x000108db4bc0(puVar5);
          }
        }
        if (puStack_170 != (ulong *)0x0) {
          puStack_170[0x46] = uStack_188;
        }
        goto LAB_108d9d1b0;
      }
    }
  }
  uVar24 = 0;
LAB_108d9d1b0:
  func_0x000108d93fd8(uVar19,param_2);
  func_0x000108d93df0(uVar19,uVar12);
  func_0x000108d60660(uVar19,uVar24);
  return uVar19;
}



/* Entry: 108d9ffc8; end: 108da0077;  */

long * FUN_108d9ffc8(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uStack_34;
  
  if (param_2 == (long *)0x0) {
    param_2 = param_1;
    FUN_108d6a6fc(param_1,0x10);
    if (param_2 == (long *)0x0) {
      return (long *)0x0;
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  plVar1 = param_1;
  FUN_108dbf9dc(param_1,*param_2,0x10,param_2 + 1,&uStack_34);
  *param_2 = (long)plVar1;
  if ((int)uStack_34 < 0) {
    func_0x000108d94124(param_1,param_2);
    param_2 = (long *)0x0;
  }
  else {
    FUN_108d95eb4(param_1,*param_3,*(undefined4 *)(param_3 + 1));
    FUN_108dabd84();
    *(long **)(*param_2 + (ulong)uStack_34 * 0x10) = param_1;
  }
  return param_2;
}



/* Entry: 108da0078; end: 108da0287;  */

/* WARNING: Possible PIC construction at 0x000108da0118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108da011c) */

void FUN_108da0078(long *param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  long *unaff_x19;
  long lVar7;
  long unaff_x20;
  long lVar8;
  char *unaff_x21;
  char *pcVar9;
  char *unaff_x22;
  uint uVar10;
  char *pcVar11;
  ushort uVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 != 0) {
    lVar8 = *param_1;
    pcVar9 = *(char **)(param_2 + 8);
    pcVar11 = pcVar9 + 1;
    if (*pcVar11 == '\0') {
      iVar2 = (int)param_1[0x3d] + 1;
      *(int *)(param_1 + 0x3d) = iVar2;
      *(short *)(param_2 + 0x30) = (short)iVar2;
    }
    else {
      pcVar4 = pcVar9;
      _strlen();
      if (*pcVar9 == '?') {
        func_0x000108d82f50(pcVar11,&lStack_58,((uint)pcVar4 & 0x3fffffff) - 1,1);
        uVar10 = (uint)lStack_58;
        *(short *)(param_2 + 0x30) = (short)lStack_58;
        if (((int)pcVar11 != 0 || lStack_58 < 1) || (int)*(uint *)(lVar8 + 0x8c) < lStack_58) {
          puVar6 = &UNK_10f51a33a;
          unaff_x30 = 0x108da011c;
          register0x00000008 = (BADSPACEBASE *)&uStack_60;
          unaff_x19 = param_1;
          unaff_x20 = lVar8;
          unaff_x21 = pcVar9;
          unaff_x22 = pcVar4;
          unaff_x29 = puVar1;
          uStack_60 = (ulong)*(uint *)(lVar8 + 0x8c);
          goto SUB_108d6a85c;
        }
        if ((int)param_1[0x3d] < lStack_58) {
          *(uint *)(param_1 + 0x3d) = uVar10;
        }
      }
      else {
        iVar2 = *(int *)((long)param_1 + 0x1ec);
        if (0 < iVar2) {
          uVar12 = 0;
          lVar7 = param_1[0x41];
          do {
            lVar5 = *(long *)(lVar7 + (long)(short)uVar12 * 8);
            if ((lVar5 != 0) && (_strcmp(lVar5,pcVar9), (int)lVar5 == 0)) {
              uVar10 = uVar12 + 1;
              *(short *)(param_2 + 0x30) = (short)uVar10;
              if (uVar10 >> 0x10 == 0) goto LAB_108da01a4;
              break;
            }
            uVar12 = uVar12 + 1;
          } while ((short)uVar12 < iVar2);
        }
        uVar10 = (int)param_1[0x3d] + 1;
        *(uint *)(param_1 + 0x3d) = uVar10;
        *(short *)(param_2 + 0x30) = (short)uVar10;
      }
LAB_108da01a4:
      uVar10 = (uint)(short)uVar10;
      if (0 < (int)uVar10) {
        if (*(int *)((long)param_1 + 0x1ec) < (int)uVar10) {
          lVar7 = lVar8;
          func_0x000108d711ec(lVar8,param_1[0x41],
                              -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3);
          if (lVar7 == 0) {
            return;
          }
          param_1[0x41] = lVar7;
          uVar3 = uVar10 - *(int *)((long)param_1 + 0x1ec);
          _bzero(lVar7 + (long)*(int *)((long)param_1 + 0x1ec) * 8,
                 -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
          *(uint *)((long)param_1 + 0x1ec) = uVar10;
        }
        if ((*pcVar9 != '?') || (*(long *)(param_1[0x41] + (long)(int)uVar10 * 8 + -8) == 0)) {
          func_0x000108d60660(lVar8,*(undefined8 *)(param_1[0x41] + (ulong)(uVar10 - 1) * 8));
          lVar7 = lVar8;
          FUN_108d95eb4(lVar8,pcVar9,(ulong)pcVar4 & 0x3fffffff);
          *(long *)(param_1[0x41] + (ulong)(uVar10 - 1) * 8) = lVar7;
        }
      }
    }
    if ((*(int *)((long)param_1 + 0x4c) == 0) && (*(int *)(lVar8 + 0x8c) < (int)param_1[0x3d])) {
      puVar6 = &UNK_10f51a365;
SUB_108d6a85c:
      *(char **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar7 = *param_1;
      *(BADSPACEBASE **)((long)register0x00000008 + -0x38) = register0x00000008;
      lVar8 = lVar7;
      FUN_108d7169c(lVar7,puVar6,register0x00000008);
      if (*(char *)(lVar7 + 0x54) == '\0') {
        *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
        func_0x000108d60660(lVar7,param_1[1]);
        param_1[1] = lVar8;
        *(undefined4 *)(param_1 + 3) = 1;
      }
      else {
        func_0x000108d60660(lVar7,lVar8);
      }
      return;
    }
  }
  return;
}



/* Entry: 108da0288; end: 108da02d7;  */

long FUN_108da0288(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (*(int *)(param_3 + 8) != 0) {
    lVar1 = *param_1;
    FUN_108db0138(lVar1,0x5f);
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = param_2;
      *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 0x1100;
      param_2 = lVar1;
    }
  }
  return param_2;
}



/* Entry: 108da02d8; end: 108da033f;  */

long FUN_108da02d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  FUN_108db0138(lVar2,0x99,param_3,1);
  if (lVar1 == 0) {
    FUN_108d93e84(lVar2,param_2);
  }
  else {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    FUN_108da0340(param_1,lVar1);
  }
  return lVar1;
}



/* Entry: 108da0340; end: 108da039f;  */

void FUN_108da0340(long *param_1,long param_2)

{
  if (*(int *)((long)param_1 + 0x4c) == 0) {
    func_0x000108db02fc(param_2);
    if (*(int *)(*param_1 + 0x74) < *(int *)(param_2 + 0x28)) {
      func_0x000108d6a85c(param_1,&UNK_10f519352);
    }
  }
  return;
}



/* Entry: 108da03a0; end: 108da0603;  */

/* WARNING: Possible PIC construction at 0x000108d94010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d94014) */
/* WARNING: Removing unreachable block (ram,0x000108d9402c) */

void FUN_108da03a0(undefined8 *param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  int *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 unaff_x21;
  int *unaff_x22;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar10 = (undefined8 *)*param_1;
  if ((*(char *)((long)puVar10 + 0x51) != '\0') ||
     (puVar5 = param_1, FUN_108d9605c(), (int)puVar5 != 0)) goto SUB_108d93fd8;
  puVar5 = puVar10;
  FUN_108d93428(puVar10,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 4));
  if (puVar5 == (undefined8 *)0x0) {
    if (param_3 == 0) {
      func_0x000108d6a85c(param_1,&UNK_10f51a37c);
    }
    else {
      FUN_108db169c(param_1,*(undefined8 *)(param_2 + 4));
    }
    *(undefined1 *)((long)param_1 + 0x1d) = 1;
    goto SUB_108d93fd8;
  }
  if ((*(byte *)((long)puVar5 + 0x5b) & 3) != 0) {
    func_0x000108d6a85c(param_1,&UNK_10f51a38e);
    goto SUB_108d93fd8;
  }
  if (puVar5[6] == 0) {
    uVar11 = 0xfff0bdc0;
LAB_108da04c8:
    puVar6 = (undefined8 *)(puVar10[4] + (long)(int)uVar11 * 0x20);
    puVar12 = &UNK_10f518237;
  }
  else {
    uVar2 = *(uint *)(puVar10 + 5);
    if ((int)uVar2 < 1) {
      uVar11 = 0;
      goto LAB_108da04c8;
    }
    uVar8 = 0;
    plVar9 = (long *)(puVar10[4] + 0x18);
    do {
      uVar11 = uVar8;
      if (*plVar9 == puVar5[6]) break;
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 4;
      uVar11 = (ulong)uVar2;
    } while (uVar2 != uVar8);
    puVar6 = (undefined8 *)(puVar10[4] + (long)(int)uVar11 * 0x20);
    puVar12 = &UNK_10f518224;
    if ((int)uVar11 != 1) {
      puVar12 = &UNK_10f518237;
    }
  }
  puVar14 = (undefined8 *)puVar5[3];
  uVar13 = *puVar6;
  puVar6 = param_1;
  FUN_108dabcbc(param_1,9,puVar12,0,uVar13);
  if ((int)puVar6 == 0) {
    uVar7 = 10;
    if ((int)uVar11 != 0) {
      uVar7 = 0xc;
    }
    puVar6 = param_1;
    FUN_108dabcbc(param_1,uVar7,*puVar5,*puVar14,uVar13);
    if (((int)puVar6 == 0) && (puVar6 = param_1, FUN_108d70f98(), puVar6 != (undefined8 *)0x0)) {
      FUN_108dabf20(param_1,1,uVar11);
      FUN_108dac88c(param_1,&UNK_10f51a3d7);
      FUN_108db1728(param_1,uVar11,&DAT_10f4183c5,*puVar5);
      func_0x000108dac9bc(param_1,uVar11);
      FUN_108db1eec(param_1,*(undefined4 *)(puVar5 + 10),uVar11);
      uVar13 = *puVar5;
      puVar5 = puVar6;
      FUN_108d71098(puVar6,0x7d,uVar11,0,0);
      FUN_108d6aaec(puVar6,puVar5,uVar13,0);
    }
  }
SUB_108d93fd8:
  if (param_2 == (int *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  piVar4 = param_2;
  if (0 < *param_2) {
    unaff_x21 = 0;
    unaff_x22 = param_2 + 0x14;
    unaff_x30 = 0x108d94014;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    piVar4 = *(int **)(param_2 + 4);
    unaff_x19 = param_2;
    unaff_x20 = puVar10;
    unaff_x29 = puVar1;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (puVar10 != (undefined8 *)0x0) {
    if (puVar10[0x65] != 0) {
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((piVar4 < (int *)puVar10[0x2e]) || ((int *)puVar10[0x2f] <= piVar4)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)piVar4;
      }
      else {
        uVar2 = (uint)*(ushort *)(puVar10 + 0x2a);
      }
      *(int *)puVar10[0x65] = *(int *)puVar10[0x65] + uVar2;
      return;
    }
    if (((int *)puVar10[0x2e] <= piVar4) && (piVar4 < (int *)puVar10[0x2f])) {
      *(undefined8 *)piVar4 = puVar10[0x2d];
      puVar10[0x2d] = piVar4;
      *(int *)((long)puVar10 + 0x154) = *(int *)((long)puVar10 + 0x154) + -1;
      return;
    }
  }
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (piVar4 == (int *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (piRam0000000113829af0 != (int *)0x0) {
      (*pcRam0000000113297998)();
    }
    piVar3 = piVar4;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)piVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(piVar4);
    piVar4 = piRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (piRam0000000113829af0 == (int *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar4);
  return;
}



/* Entry: 108da0604; end: 108da0667;  */

void FUN_108da0604(long *param_1)

{
  FUN_108d70f98();
  if (param_1 != (long *)0x0) {
    FUN_108d71098();
    *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 1;
    if (*(char *)(*(long *)(*(long *)(*param_1 + 0x20) + 8) + 0x11) != '\0') {
      *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | 1;
    }
  }
  return;
}



/* Entry: 108da0668; end: 108da4e1f;  */

void FUN_108da0668(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  undefined *puVar20;
  long *plVar21;
  int iVar22;
  undefined8 uVar23;
  char *pcVar24;
  short sVar25;
  undefined4 uVar26;
  long *plVar27;
  short *psVar28;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  char cVar36;
  byte *pbVar37;
  long lVar38;
  byte *pbVar39;
  long lVar40;
  long *plVar41;
  byte *pbVar42;
  undefined **ppuVar43;
  ulong uVar44;
  long lVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  byte *unaff_x27;
  byte *pbVar48;
  long *plStack_130;
  byte *pbStack_128;
  long *plStack_118;
  int iStack_10c;
  long *plStack_108;
  byte *pbStack_f8;
  ulong uStack_f0;
  byte *pbStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char *pcStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar37 = (byte *)*param_1;
  plVar27 = param_1;
  FUN_108d70f98();
  if (plVar27 == (long *)0x0) goto LAB_108da0794;
  *(ushort *)((long)plVar27 + 0x8c) = *(ushort *)((long)plVar27 + 0x8c) | 0x10;
  *(undefined4 *)((long)param_1 + 0x54) = 2;
  plVar41 = param_1;
  FUN_108dabe00(param_1,param_2,param_3,&uStack_c0);
  uVar8 = (uint)plVar41;
  if ((int)uVar8 < 0) goto LAB_108da0794;
  lVar38 = *(long *)(pbVar37 + 0x20);
  if ((uVar8 == 1) && (plVar21 = param_1, FUN_108d7d85c(), (int)plVar21 != 0)) goto LAB_108da0794;
  pbVar12 = pbVar37;
  func_0x000108dabd44(pbVar37,uStack_c0);
  if (pbVar12 == (byte *)0x0) goto LAB_108da0794;
  pbVar48 = (byte *)((ulong)plVar41 & 0xffffffff);
  puVar47 = (undefined8 *)(lVar38 + (long)pbVar48 * 0x20);
  pbVar13 = pbVar37;
  if (param_5 == 0) {
    func_0x000108dabd44(pbVar37,param_4);
  }
  else {
    FUN_108d6a8e0(pbVar37,&UNK_10f51a408);
  }
  if ((int)param_3[1] == 0) {
    pbVar42 = (byte *)0x0;
  }
  else {
    pbVar42 = (byte *)*puVar47;
  }
  plVar21 = param_1;
  func_0x000108dabcbc(param_1,0x13,pbVar12,pbVar13,pbVar42);
  unaff_x27 = pbVar48;
  if ((int)plVar21 != 0) goto LAB_108da077c;
  pcStack_90 = (char *)0x0;
  uStack_78 = 0;
  pbVar37[0x2b8] = 0;
  pbVar37[0x2b9] = 0;
  pbVar37[0x2ba] = 0;
  pbVar37[699] = 0;
  unaff_x27 = pbVar37;
  pbStack_88 = pbVar12;
  pbStack_80 = pbVar13;
  FUN_108d7029c(pbVar37,pbVar42,0xe,&pcStack_90);
  pcVar19 = pcStack_90;
  iVar9 = (int)unaff_x27;
  if (iVar9 == 0xc) {
    lVar38 = *(long *)(pbVar37 + 0x20) + (long)pbVar48 * 0x20;
    if (*(long *)(lVar38 + 8) == 0) {
      unaff_x27 = (byte *)0x0;
    }
    else {
      unaff_x27 = *(byte **)(**(long **)(*(long *)(lVar38 + 8) + 8) + 0x120);
    }
    pbVar14 = pbVar12;
    FUN_108d5e044(pbVar12,&UNK_10f516e15);
    if ((pbVar13 == (byte *)0x0) && ((int)pbVar14 == 0)) {
      if (unaff_x27 != (byte *)0x0) {
        (**(code **)(*(long *)(*(long *)(unaff_x27 + 0x28) + 0x50) + 0x90))();
        puVar20 = &UNK_10f516e15;
LAB_108da099c:
        pcVar19 = "%d";
        FUN_108d5e0b4("%d");
        func_0x000108d5e0fc(param_1,puVar20,pcVar19);
        func_0x000108d5e198(pcVar19);
        pbStack_e8 = pbVar13;
      }
      FUN_108d5e044(pbVar12,&UNK_10f516e3a);
      FUN_108d5e044(pbVar12,&UNK_10f516e49);
LAB_108da09f0:
      pbVar14 = pbVar12;
      FUN_108d5e044(pbVar12,&UNK_10f516e5b);
      if ((pbVar13 != (byte *)0x0) || ((int)pbVar14 != 0)) {
        pbVar14 = pbVar12;
        FUN_108d5e044(pbVar12,&UNK_10f516e6a);
        if ((pbVar13 == (byte *)0x0) && ((int)pbVar14 == 0)) {
          if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
          puVar15 = *(undefined **)(unaff_x27 + 0x28);
          (**(code **)(*(long *)(puVar15 + 0x50) + 0x10))();
          puVar20 = &UNK_10f516e6a;
        }
        else {
          pbVar14 = pbVar12;
          FUN_108d5e044(pbVar12,&UNK_10f516e7a);
          if ((pbVar13 != (byte *)0x0) || ((int)pbVar14 != 0)) {
            pbVar14 = pbVar12;
            FUN_108d5e044(pbVar12,&DAT_10f3f2df6);
            if ((int)pbVar14 == 0) {
              if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
              if (pbVar13 == (byte *)0x0) {
                puVar15 = *(undefined **)(*(long *)(unaff_x27 + 0x30) + 0x58);
                (**(code **)(*(long *)(*(long *)(unaff_x27 + 0x30) + 0x50) + 0x48))(puVar15);
                puVar20 = &DAT_10f3f2df6;
                goto LAB_108da0b44;
              }
              uVar23 = 2;
            }
            else {
              pbVar14 = pbVar12;
              FUN_108d5e044(pbVar12,&UNK_10f516e89);
              if ((pbVar13 == (byte *)0x0) || ((int)pbVar14 != 0)) {
                pbVar14 = pbVar12;
                FUN_108d5e044(pbVar12,&UNK_10f516e96);
                if ((int)pbVar14 != 0) {
                  pbVar14 = pbVar12;
                  FUN_108d5e044(pbVar12,&UNK_10f516eae);
                  if ((int)pbVar14 == 0) {
                    if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
                    if (pbVar13 == (byte *)0x0) {
                      pcVar19 = "%d";
                      FUN_108d5e0b4("%d");
                      puVar20 = &UNK_10f516eae;
LAB_108da0e98:
                      func_0x000108d5e0fc(param_1,puVar20,pcVar19);
                      func_0x000108d5e198(pcVar19);
                      goto LAB_108da077c;
                    }
                    pbVar48 = pbVar13;
                    _atoi();
                    lVar38 = *(long *)(unaff_x27 + 0x30);
                    *(int *)(lVar38 + 8) = (int)pbVar48;
                  }
                  else {
                    pbVar14 = pbVar12;
                    FUN_108d5e044(pbVar12,&UNK_10f516eb7);
                    if ((int)pbVar14 != 0) {
                      pbVar14 = pbVar12;
                      FUN_108d5e044(pbVar12,&UNK_10f516ec5);
                      if ((pbVar13 != (byte *)0x0) && ((int)pbVar14 == 0)) {
                        pbStack_e8 = pbVar13;
                        if (unaff_x27 != (byte *)0x0) {
                          pbVar48 = pbVar13;
                          _atoi();
                          lVar38 = *(long *)(unaff_x27 + 0x30);
                          *(undefined4 *)(lVar38 + 4) = 1;
                          *(int *)(lVar38 + 8) = (int)pbVar48;
                        }
                        goto LAB_108da077c;
                      }
                      pbVar14 = pbVar12;
                      FUN_108d5e044(pbVar12,&UNK_10f516ed4);
                      pbStack_f8 = pbVar12;
                      if ((int)pbVar14 == 0) {
                        pbStack_e8 = pbVar13;
                        if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
                        if (pbVar13 != (byte *)0x0) {
                          pbVar48 = pbVar13;
                          _atoi(pbVar13);
                          pbVar42 = unaff_x27;
                          FUN_108d5e8f4(unaff_x27,pbVar48);
                          iVar9 = (int)pbVar42;
                          if (iVar9 != 0) {
                            plVar27 = *(long **)(*(long *)(unaff_x27 + 0x20) + 8);
                            *(int *)(*plVar27 + 0x2c) = iVar9;
                            *(int *)(plVar27[1] + 0x44) = iVar9;
                          }
                          pbVar48 = pbVar37;
                          FUN_108d5e93c(pbVar37,lVar38,*(undefined4 *)(unaff_x27 + 4),
                                        *(undefined4 *)(*(long *)(unaff_x27 + 0x28) + 0x20));
                          iVar9 = (int)pbVar48;
joined_r0x000108da0e54:
                          pbStack_e8 = pbVar13;
                          if (iVar9 != 0) {
                            plVar27 = *(long **)(*(long *)(unaff_x27 + 0x20) + 8);
                            *(int *)(*plVar27 + 0x2c) = iVar9;
                            *(int *)(plVar27[1] + 0x44) = iVar9;
                          }
                          goto LAB_108da077c;
                        }
                        pcVar19 = "%d";
                        FUN_108d5e0b4("%d");
                        puVar20 = &UNK_10f516ed4;
                      }
                      else {
                        pbVar14 = pbVar12;
                        FUN_108d5e044(pbVar12,&UNK_10f516ee5);
                        if ((int)pbVar14 == 0) {
                          if (pbVar13 != (byte *)0x0) {
                            pbVar48 = pbVar13;
                            _atoi();
                            uRam0000000113298da0 = SUB84(pbVar48,0);
                            pbStack_e8 = pbVar13;
                            goto LAB_108da077c;
                          }
                          pcVar19 = "%d";
                          FUN_108d5e0b4("%d");
                          puVar20 = &UNK_10f516ee5;
                        }
                        else {
                          pbVar14 = pbVar12;
                          FUN_108d5e044(pbVar12,&UNK_10f516efe);
                          if ((int)pbVar14 == 0) {
                            if (pbVar13 != (byte *)0x0) {
                              pbVar48 = pbVar13;
                              FUN_108d96384(pbVar13,1,1);
                              uRam000000011372e6c0 = (int)pbVar48 == 0;
                              pbStack_e8 = pbVar13;
                              goto LAB_108da077c;
                            }
                            pcVar19 = "%d";
                            FUN_108d5e0b4("%d");
                            puVar20 = &UNK_10f516efe;
                          }
                          else {
                            pbVar14 = pbVar12;
                            FUN_108d5e044(pbVar12,&UNK_10f516f16);
                            if ((int)pbVar14 == 0) {
                              pbStack_e8 = pbVar13;
                              if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
                              if (pbVar13 != (byte *)0x0) {
                                pbVar48 = pbVar13;
                                FUN_108d96384(pbVar13,1,1);
                                func_0x000108d5e9c4(unaff_x27,(int)pbVar48 != 0);
                                pbVar48 = pbVar37;
                                FUN_108d5e93c(pbVar37,lVar38,*(undefined4 *)(unaff_x27 + 4),
                                              *(undefined4 *)(*(long *)(unaff_x27 + 0x28) + 0x20));
                                iVar9 = (int)pbVar48;
                                goto joined_r0x000108da0e54;
                              }
                              pcVar19 = "%d";
                              FUN_108d5e0b4("%d");
                              puVar20 = &UNK_10f516f16;
                            }
                            else {
                              pbVar14 = pbVar12;
                              FUN_108d5e044(pbVar12,&UNK_10f516f26);
                              if ((int)pbVar14 == 0) {
                                pbStack_e8 = pbVar13;
                                if (unaff_x27 != (byte *)0x0) {
                                  if (pbVar13 == (byte *)0x0) {
                                    if ((*(uint *)(*(long *)(unaff_x27 + 0x30) + 0x2c) >> 1 & 1) ==
                                        0) {
                                      if ((*(uint *)(*(long *)(unaff_x27 + 0x30) + 0x2c) >> 2 & 1)
                                          == 0) {
                                        pcVar19 = "native";
                                      }
                                      else {
                                        pcVar19 = "be";
                                      }
                                    }
                                    else {
                                      pcVar19 = "le";
                                    }
                                    func_0x000108d5e0fc(param_1,&UNK_10f516f26,pcVar19);
                                  }
                                  else {
                                    pbVar48 = pbVar13;
                                    FUN_108d5e044(pbVar13,&DAT_10f516f37);
                                    if ((int)pbVar48 == 0) goto LAB_108da1208;
                                    pbVar48 = pbVar13;
                                    FUN_108d5e044(pbVar13,&DAT_10f465392);
                                    if ((int)pbVar48 == 0) {
                                      lVar38 = *(long *)(unaff_x27 + 0x30);
                                      *(uint *)(lVar38 + 0x2c) =
                                           *(uint *)(lVar38 + 0x2c) & 0xfffffffd;
                                      lVar33 = *(long *)(unaff_x27 + 0x28);
                                      *(uint *)(lVar33 + 0x2c) =
                                           *(uint *)(lVar33 + 0x2c) & 0xfffffffd;
                                      *(uint *)(lVar38 + 0x2c) = *(uint *)(lVar38 + 0x2c) | 4;
                                      uVar8 = *(uint *)(lVar33 + 0x2c) | 4;
                                      goto LAB_108da12cc;
                                    }
                                    pbVar48 = pbVar13;
                                    FUN_108d5e044(pbVar13,"native");
                                    if ((int)pbVar48 == 0) {
                                      lVar38 = *(long *)(unaff_x27 + 0x30);
                                      *(uint *)(lVar38 + 0x2c) =
                                           *(uint *)(lVar38 + 0x2c) & 0xfffffffd;
                                      lVar33 = *(long *)(unaff_x27 + 0x28);
                                      *(uint *)(lVar33 + 0x2c) =
                                           *(uint *)(lVar33 + 0x2c) & 0xfffffffd;
                                      *(uint *)(lVar38 + 0x2c) =
                                           *(uint *)(lVar38 + 0x2c) & 0xfffffffb;
                                      *(uint *)(lVar33 + 0x2c) =
                                           *(uint *)(lVar33 + 0x2c) & 0xfffffffb;
                                    }
                                  }
                                }
                                goto LAB_108da077c;
                              }
                              pbVar14 = pbVar12;
                              FUN_108d5e044(pbVar12,&UNK_10f516f3a);
                              if ((int)pbVar14 != 0) {
                                iVar9 = 0;
                                iVar32 = 0x3e;
LAB_108da0d70:
                                iVar30 = (int)pbVar12;
                                uVar31 = (iVar32 + iVar9) / 2;
                                lVar38 = (long)(int)uVar31 * 0x10;
                                pcVar19 = (&PTR_DAT_110ac4b50)[(long)(int)uVar31 * 2];
                                FUN_108d5e044();
                                if (iVar30 != 0) goto code_r0x000108da0da4;
                                bVar4 = (&UNK_110ac4b59)[lVar38];
                                unaff_x27 = pbVar42;
                                if (((bVar4 & 1) == 0) ||
                                   (plVar21 = param_1, FUN_108d9605c(), pbStack_e8 = pbVar13,
                                   (int)plVar21 == 0)) {
                                  pbStack_e8 = pbVar13;
                                  plVar21 = plVar27;
                                  switch((&UNK_110ac4b58)[lVar38]) {
                                  case 0:
                                    uVar26 = *(undefined4 *)(&UNK_110ac4b5c + lVar38);
                                    FUN_108d6aaa4(plVar27,plVar41);
                                    if ((pbVar13 == (byte *)0x0) || ((bVar4 >> 1 & 1) != 0)) {
                                      plVar41 = plVar27;
                                      func_0x000108d6a9d4(plVar27,3,&UNK_10dfa2e52);
                                      uVar31 = *(uint *)((long)plVar27 + 0x3c);
                                      if ((uint)plVar41 < uVar31) {
                                        *(uint *)(plVar27[1] + ((ulong)plVar41 & 0xffffffff) * 0x18
                                                 + 4) = uVar8;
                                      }
                                      uVar11 = (uint)plVar41 + 1;
                                      if (uVar11 < uVar31) {
                                        lVar38 = plVar27[1] + (ulong)uVar11 * 0x18;
                                        *(uint *)(lVar38 + 4) = uVar8;
                                        *(undefined4 *)(lVar38 + 0xc) = uVar26;
                                      }
                                      goto code_r0x000108da4550;
                                    }
                                    plVar41 = plVar27;
                                    func_0x000108d6a9d4(plVar27,3,&UNK_10dfa2e46);
                                    uVar31 = *(uint *)((long)plVar27 + 0x3c);
                                    uVar11 = (uint)plVar41;
                                    if (uVar11 < uVar31) {
                                      *(uint *)(plVar27[1] + ((ulong)plVar41 & 0xffffffff) * 0x18 +
                                               4) = uVar8;
                                    }
                                    uStack_b8 = (char *)((ulong)uStack_b8 & 0xffffffff00000000);
                                    FUN_108d934c8(pbVar13,&uStack_b8);
                                    if (uVar11 + 1 < uVar31) {
                                      *(uint *)(plVar27[1] + (ulong)(uVar11 + 1) * 0x18 + 4) =
                                           (uint)uStack_b8;
                                    }
                                    if (uVar11 + 2 < uVar31) {
                                      lVar38 = plVar27[1] + (ulong)(uVar11 + 2) * 0x18;
                                      *(uint *)(lVar38 + 4) = uVar8;
                                      *(undefined4 *)(lVar38 + 8) = uVar26;
                                    }
                                    break;
                                  case 1:
                                    uVar29 = puVar47[1];
                                    if (pbVar13 == (byte *)0x0) {
                                      FUN_108d9511c(uVar29);
                                      pcVar24 = (char *)(uVar29 & 0xffffffff);
                                      pcVar19 = "auto_vacuum";
                                      goto code_r0x000108da468c;
                                    }
                                    pbVar48 = pbVar13;
                                    func_0x000108dc4d90();
                                    pbVar37[0x53] = (byte)pbVar48;
                                    FUN_108d71534(uVar29,pbVar48);
                                    if (((int)uVar29 == 0) &&
                                       (uVar31 = (int)pbVar48 - 1, uVar31 < 2)) {
                                      func_0x000108d6a9d4(plVar27,6,&UNK_10dfa2e22);
                                      uVar11 = *(uint *)((long)plVar27 + 0x3c);
                                      uVar10 = (uint)plVar21;
                                      if (uVar10 < uVar11) {
                                        *(uint *)(plVar27[1] + ((ulong)plVar21 & 0xffffffff) * 0x18
                                                 + 4) = uVar8;
                                      }
                                      if (uVar10 + 1 < uVar11) {
                                        *(uint *)(plVar27[1] + (ulong)(uVar10 + 1) * 0x18 + 4) =
                                             uVar8;
                                      }
                                      uVar2 = uVar10 + 4;
                                      if (uVar10 + 2 < uVar11) {
                                        *(uint *)(plVar27[1] + (ulong)(uVar10 + 2) * 0x18 + 8) =
                                             uVar2;
                                      }
                                      if (uVar2 < uVar11) {
                                        *(uint *)(plVar27[1] + (ulong)uVar2 * 0x18 + 4) = uVar31;
                                      }
                                      if (uVar10 + 5 < uVar11) {
                                        *(uint *)(plVar27[1] + (ulong)(uVar10 + 5) * 0x18 + 4) =
                                             uVar8;
                                      }
                                      FUN_108d6aaa4(plVar27,plVar41);
                                    }
                                    break;
                                  case 2:
                                    if (pbVar13 == (byte *)0x0) {
                                      pcVar24 = (char *)(ulong)((*(uint *)(&UNK_110ac4b5c + lVar38)
                                                                & *(uint *)(pbVar37 + 0x2c)) != 0);
                                      goto code_r0x000108da468c;
                                    }
                                    uVar8 = *(uint *)(&UNK_110ac4b5c + lVar38) & 0xfff7ffff;
                                    if (pbVar37[0x4f] != 0) {
                                      uVar8 = *(uint *)(&UNK_110ac4b5c + lVar38);
                                    }
                                    pbVar48 = pbVar13;
                                    FUN_108d96384(pbVar13,1,0);
                                    if ((int)pbVar48 == 0) {
                                      *(uint *)(pbVar37 + 0x2c) =
                                           *(uint *)(pbVar37 + 0x2c) & (uVar8 ^ 0xffffffff);
                                      if (uVar8 == 0x1000000) {
                                        pbVar37[800] = 0;
                                        pbVar37[0x321] = 0;
                                        pbVar37[0x322] = 0;
                                        pbVar37[0x323] = 0;
                                        pbVar37[0x324] = 0;
                                        pbVar37[0x325] = 0;
                                        pbVar37[0x326] = 0;
                                        pbVar37[0x327] = 0;
                                      }
                                    }
                                    else {
                                      *(uint *)(pbVar37 + 0x2c) = *(uint *)(pbVar37 + 0x2c) | uVar8;
                                    }
                                    FUN_108d71098(plVar27,0x90,0,0,0);
                                    FUN_108dc4f1c(pbVar37);
                                    break;
                                  default:
                                    if (pbVar13 != (byte *)0x0) {
                                      uStack_b8 = (char *)((ulong)uStack_b8._4_4_ << 0x20);
                                      FUN_108d934c8(pbVar13,&uStack_b8);
                                      FUN_108d6df80(pbVar37,(ulong)uStack_b8 & 0xffffffff);
                                    }
                                    pcVar19 = "timeout";
                                    pcVar24 = (char *)(long)*(int *)(pbVar37 + 0x308);
                                    goto code_r0x000108da468c;
                                  case 4:
                                    if (pbVar13 != (byte *)0x0) {
                                      uStack_b8 = (char *)((ulong)uStack_b8._4_4_ << 0x20);
                                      FUN_108d934c8(pbVar13,&uStack_b8);
                                      uVar29 = (ulong)uStack_b8 & 0xffffffff;
                                      *(uint *)(puVar47[3] + 0x74) = (uint)uStack_b8;
                                      uVar23 = puVar47[1];
                                      goto code_r0x000108da2f20;
                                    }
                                    pcVar24 = (char *)(long)*(int *)(puVar47[3] + 0x74);
                                    pcVar19 = "cache_size";
                                    goto code_r0x000108da468c;
                                  case 5:
                                    if (pbVar13 != (byte *)0x0) {
                                      pbVar48 = pbVar13;
                                      FUN_108d96384(pbVar13,1,0);
                                      FUN_108dc4f8c(pbVar37,(int)pbVar48 != 0);
                                    }
                                    break;
                                  case 6:
                                    FUN_108d71004(plVar27,2);
                                    *(undefined4 *)((long)param_1 + 0x54) = 2;
                                    if ((*(char *)(*plVar27 + 0x51) == '\0') &&
                                       (FUN_108d67c04(plVar27[4],&UNK_10f51a545,0xffffffff,1,0),
                                       *(char *)(*plVar27 + 0x51) == '\0')) {
                                      FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f68f148,0xffffffff,1,0)
                                      ;
                                    }
                                    plVar41 = *(long **)(pbVar37 + 0x298);
                                    if (plVar41 != (long *)0x0) {
                                      iVar9 = 0;
                                      do {
                                        puVar47 = (undefined8 *)plVar41[2];
                                        FUN_108d71098(plVar27,0x19,iVar9,1,0);
                                        uVar23 = *puVar47;
                                        plVar21 = plVar27;
                                        FUN_108d71098(plVar27,0x61,0,2,0);
                                        FUN_108d6aaec(plVar27,plVar21,uVar23,0);
                                        FUN_108d71098(plVar27,0x23,1,2,0);
                                        plVar41 = (long *)*plVar41;
                                        iVar9 = iVar9 + 1;
                                      } while (plVar41 != (long *)0x0);
                                    }
                                    break;
                                  case 7:
                                    FUN_108d71004(plVar27,1);
                                    *(undefined4 *)((long)param_1 + 0x54) = 1;
                                    if (*(char *)(*plVar27 + 0x51) == '\0') {
                                      FUN_108d67c04(plVar27[4],&UNK_10f51a643,0xffffffff,1,0);
                                    }
                                    lVar38 = 0;
                                    do {
                                      uVar23 = *(undefined8 *)((long)&PTR_DAT_110ac3818 + lVar38);
                                      plVar41 = plVar27;
                                      FUN_108d71098(plVar27,0x61,0,1,0);
                                      FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                      FUN_108d71098(plVar27,0x23,1,1,0);
                                      lVar38 = lVar38 + 8;
                                    } while (lVar38 != 0x20);
                                    break;
                                  case 9:
                                    FUN_108d71004(plVar27,3);
                                    *(undefined4 *)((long)param_1 + 0x54) = 3;
                                    if (((*(char *)(*plVar27 + 0x51) == '\0') &&
                                        (FUN_108d67c04(plVar27[4],&UNK_10f51a545,0xffffffff,1,0),
                                        *(char *)(*plVar27 + 0x51) == '\0')) &&
                                       (FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f68f148,0xffffffff,1,
                                                      0), *(char *)(*plVar27 + 0x51) == '\0')) {
                                      FUN_108d67c04(plVar27[4] + 0x70,&DAT_10f2df167,0xffffffff,1,0)
                                      ;
                                    }
                                    iVar9 = *(int *)(pbVar37 + 0x28);
                                    if (0 < iVar9) {
                                      lVar33 = 0;
                                      lVar38 = 0;
                                      do {
                                        if (*(long *)(*(long *)(pbVar37 + 0x20) + lVar33 + 8) != 0)
                                        {
                                          FUN_108d71098(plVar27,0x19,lVar38,1,0);
                                          uVar23 = *(undefined8 *)
                                                    (*(long *)(pbVar37 + 0x20) + lVar33);
                                          plVar41 = plVar27;
                                          FUN_108d71098(plVar27,0x61,0,2,0);
                                          FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                          lVar45 = **(long **)(*(long *)(*(long *)(pbVar37 + 0x20) +
                                                                         lVar33 + 8) + 8);
                                          pcVar19 = "";
                                          if (*(char *)(lVar45 + 0x13) == '\0') {
                                            pcVar19 = *(char **)(lVar45 + 0xd0);
                                          }
                                          plVar41 = plVar27;
                                          FUN_108d71098(plVar27,0x61,0,3,0);
                                          FUN_108d6aaec(plVar27,plVar41,pcVar19,0);
                                          FUN_108d71098(plVar27,0x23,1,3,0);
                                          iVar9 = *(int *)(pbVar37 + 0x28);
                                        }
                                        lVar38 = lVar38 + 1;
                                        lVar33 = lVar33 + 0x20;
                                      } while (lVar38 < iVar9);
                                    }
                                    break;
                                  case 10:
                                    FUN_108d6aaa4(plVar27,plVar41);
                                    if (pbVar13 == (byte *)0x0) {
                                      FUN_108d71004(plVar27,1);
                                      if (*(char *)(*plVar27 + 0x51) == '\0') {
                                        FUN_108d67c04(plVar27[4],&DAT_10f51a40c,0xffffffff,1,0);
                                      }
                                      *(int *)((long)param_1 + 0x54) =
                                           *(int *)((long)param_1 + 0x54) + 2;
                                      plVar41 = plVar27;
                                      func_0x000108d6a9d4(plVar27,9,&UNK_10dfa2dfe);
                                      uVar31 = *(uint *)((long)plVar27 + 0x3c);
                                      uVar11 = (uint)plVar41;
                                      if (uVar11 < uVar31) {
                                        *(uint *)(plVar27[1] + ((ulong)plVar41 & 0xffffffff) * 0x18
                                                 + 4) = uVar8;
                                      }
                                      if (uVar11 + 1 < uVar31) {
                                        *(uint *)(plVar27[1] + (ulong)(uVar11 + 1) * 0x18 + 4) =
                                             uVar8;
                                      }
                                      if (uVar11 + 6 < uVar31) {
                                        *(undefined4 *)(plVar27[1] + (ulong)(uVar11 + 6) * 0x18 + 4)
                                             = 2000;
                                      }
                                    }
                                    else {
                                      uStack_b8 = (char *)((ulong)uStack_b8 & 0xffffffff00000000);
                                      FUN_108d934c8(pbVar13,&uStack_b8);
                                      uVar31 = 0x7fffffff;
                                      if ((uint)uStack_b8 != 0x80000000) {
                                        uVar31 = -(uint)uStack_b8;
                                      }
                                      if (-1 < (int)(uint)uStack_b8) {
                                        uVar31 = (uint)uStack_b8;
                                      }
                                      uVar29 = (ulong)uVar31;
                                      plVar21 = param_1;
                                      if ((long *)param_1[0x38] != (long *)0x0) {
                                        plVar21 = (long *)param_1[0x38];
                                      }
                                      func_0x000108dab6e4(param_1,plVar41);
                                      *(uint *)(plVar21 + 0x2d) =
                                           *(uint *)(plVar21 + 0x2d) | 1 << (ulong)(uVar8 & 0x1f);
                                      FUN_108d71098(plVar27,0x19,uVar29,1,0);
                                      FUN_108d71098(plVar27,0x34,plVar41,3,1);
                                      *(uint *)(puVar47[3] + 0x74) = uVar31;
                                      uVar23 = puVar47[1];
code_r0x000108da2f20:
                                      FUN_108dc4bbc(uVar23,uVar29);
                                    }
                                    break;
                                  case 0xb:
                                    if (pbVar13 == (byte *)0x0) {
                                      plVar41 = param_1;
                                      FUN_108d9605c();
                                      if ((int)plVar41 == 0) {
                                        FUN_108d71004(plVar27,1);
                                        if (*(char *)(*plVar27 + 0x51) == '\0') {
                                          FUN_108d67c04(plVar27[4],&DAT_10f4178bf,0xffffffff,1,0);
                                        }
                                        FUN_108d71098(plVar27,0x61,0,1,0);
                                        pcVar19 = (&PTR_DAT_110ac4ac0)
                                                  [(ulong)*(byte *)(*param_1 + 0x4e) * 2];
                                        plVar21 = (long *)0xffffffff;
                                        uVar23 = 0xfffffffe;
                                        goto code_r0x000108da4384;
                                      }
                                    }
                                    else {
                                      lVar38 = *(long *)(*(long *)(pbVar37 + 0x20) + 0x18);
                                      if ((*(ushort *)(lVar38 + 0x72) & 5) != 1) {
                                        puVar20 = &DAT_10f51a5f0;
                                        ppuVar43 = &PTR_DAT_110ac4ad0;
                                        goto code_r0x000108da1448;
                                      }
                                    }
                                    break;
                                  case 0xc:
                                    iVar32 = *(int *)((long)param_1 + 0x54);
                                    iVar9 = iVar32 + 6;
                                    *(int *)((long)param_1 + 0x54) = iVar9;
                                    plVar27 = param_1;
                                    FUN_108d70f98();
                                    FUN_108d71004();
                                    if ((((*(char *)(*plVar27 + 0x51) == '\0') &&
                                         (FUN_108d67c04(plVar27[4],&DAT_10f30fc41,0xffffffff,1,0),
                                         *(char *)(*plVar27 + 0x51) == '\0')) &&
                                        (FUN_108d67c04(plVar27[4] + 0x38,&UNK_10f518f20,0xffffffff,1
                                                       ,0), *(char *)(*plVar27 + 0x51) == '\0')) &&
                                       (FUN_108d67c04(plVar27[4] + 0x70,&UNK_10f378231,0xffffffff,1,
                                                      0), *(char *)(*plVar27 + 0x51) == '\0')) {
                                      FUN_108d67c04(plVar27[4] + 0xa8,&UNK_10f51a55d,0xffffffff,1,0)
                                      ;
                                    }
                                    func_0x000108dab6e4(param_1,plVar41);
                                    plStack_130 = *(long **)(*(long *)(*(long *)(pbVar37 + 0x20) +
                                                                       (long)pbVar48 * 0x20 + 0x18)
                                                            + 0x10);
                                    while (plStack_130 != (long *)0x0) {
                                      if (pbVar13 == (byte *)0x0) {
                                        plStack_108 = (long *)plStack_130[2];
                                        plStack_130 = (long *)*plStack_130;
                                      }
                                      else {
                                        plStack_108 = param_1;
                                        func_0x000108d6a7b0(param_1,0,pbVar13,pbVar42);
                                        plStack_130 = (long *)0x0;
                                      }
                                      if ((plStack_108 != (long *)0x0) && (plStack_108[4] != 0)) {
                                        func_0x000108da6790(param_1,plVar41,(int)plStack_108[7],0,
                                                            *plStack_108);
                                        iVar30 = iVar9 + *(short *)((long)plStack_108 + 0x3e);
                                        if (*(int *)((long)param_1 + 0x54) < iVar30) {
                                          *(int *)((long)param_1 + 0x54) = iVar30;
                                        }
                                        func_0x000108da66a0(param_1,0,plVar41,plStack_108,0x36);
                                        lVar38 = *plStack_108;
                                        plVar21 = plVar27;
                                        FUN_108d71098(plVar27,0x61,0,iVar32 + 1,0);
                                        FUN_108d6aaec(plVar27,plVar21,lVar38,0);
                                        lVar38 = plStack_108[4];
                                        if (lVar38 == 0) {
                                          unaff_x27 = (byte *)0x1;
                                        }
                                        else {
                                          unaff_x27 = (byte *)0x1;
                                          do {
                                            pbVar48 = pbVar37;
                                            func_0x000108d700dc(pbVar37,*(undefined8 *)
                                                                         (lVar38 + 0x10),pbVar42);
                                            if (pbVar48 != (byte *)0x0) {
                                              uStack_b8 = (char *)0x0;
                                              func_0x000108da6790(param_1,plVar41,
                                                                  *(undefined4 *)(pbVar48 + 0x38),0,
                                                                  *(undefined8 *)pbVar48);
                                              plVar21 = param_1;
                                              FUN_108dc1c34(param_1,pbVar48,lVar38,&uStack_b8,0);
                                              pcVar19 = uStack_b8;
                                              if ((int)plVar21 != 0) goto LAB_108da077c;
                                              if (uStack_b8 == (char *)0x0) {
                                                func_0x000108da66a0(param_1,unaff_x27,plVar41,
                                                                    pbVar48,0x36);
                                              }
                                              else {
                                                FUN_108d71098(plVar27,0x36,unaff_x27,
                                                              *(undefined4 *)(uStack_b8 + 0x50),
                                                              plVar41);
                                                FUN_108da6878(param_1,pcVar19);
                                              }
                                            }
                                            unaff_x27 = (byte *)(ulong)((int)unaff_x27 + 1);
                                            lVar38 = *(long *)(lVar38 + 8);
                                          } while (lVar38 != 0);
                                        }
                                        if ((int)param_1[10] < (int)unaff_x27) {
                                          *(int *)(param_1 + 10) = (int)unaff_x27;
                                        }
                                        plVar21 = plVar27;
                                        FUN_108d71098(plVar27,0x6c,0,0,0);
                                        lVar38 = plStack_108[4];
                                        if (lVar38 != 0) {
                                          iStack_10c = 1;
                                          do {
                                            pbVar48 = pbVar37;
                                            func_0x000108d700dc(pbVar37,*(undefined8 *)
                                                                         (lVar38 + 0x10),pbVar42);
                                            uStack_b8 = (char *)0x0;
                                            pbStack_c8 = (byte *)0x0;
                                            if (pbVar48 == (byte *)0x0) {
                                              uVar8 = (uint)plVar27[6];
                                              FUN_108da84a4();
                                              pbStack_128 = (byte *)0x0;
code_r0x000108da1a8c:
                                              pbVar14 = pbStack_c8;
                                              uVar29 = (ulong)*(uint *)(lVar38 + 0x28);
                                              if (0 < (int)*(uint *)(lVar38 + 0x28)) {
                                                lVar33 = 0;
                                                unaff_x27 = (byte *)(lVar38 + 0x40);
                                                pbVar39 = pbStack_c8;
                                                do {
                                                  pbVar3 = unaff_x27;
                                                  if (pbVar14 != (byte *)0x0) {
                                                    pbVar3 = pbVar39;
                                                  }
                                                  FUN_108da9a60(plVar27,plStack_108,0,
                                                                *(undefined4 *)pbVar3,
                                                                iVar9 + (int)lVar33);
                                                  FUN_108d71098(plVar27,0x4c,iVar9 + (int)lVar33,
                                                                uVar8,0);
                                                  lVar33 = lVar33 + 1;
                                                  uVar29 = (ulong)*(int *)(lVar38 + 0x28);
                                                  unaff_x27 = unaff_x27 + 0x10;
                                                  pbVar39 = pbVar39 + 4;
                                                } while (lVar33 < (long)uVar29);
                                              }
                                              if (pbVar48 != (byte *)0x0) {
                                                plVar16 = plVar27;
                                                FUN_108dbf060(plVar27,pbStack_128);
                                                uVar26 = *(undefined4 *)(lVar38 + 0x28);
                                                plVar17 = plVar27;
                                                FUN_108d71098(plVar27,0x31,iVar9,uVar29,iVar32 + 5);
                                                FUN_108d6aaec(plVar27,plVar17,plVar16,uVar26);
                                                func_0x000108d6a98c(plVar27,0x45,iStack_10c,uVar8,
                                                                    iVar32 + 5,0);
                                              }
                                            }
                                            else {
                                              FUN_108dc1c34(param_1,pbVar48,lVar38,&uStack_b8,
                                                            &pbStack_c8);
                                              pbStack_128 = (byte *)uStack_b8;
                                              uVar8 = (uint)plVar27[6];
                                              FUN_108da84a4();
                                              if (pbStack_128 != (byte *)0x0)
                                              goto code_r0x000108da1a8c;
                                              iVar30 = *(int *)(lVar38 + 0x40);
                                              if (iVar30 == *(short *)((long)plStack_108 + 0x3c)) {
                                                uVar23 = 0x67;
                                                iVar22 = 0;
                                                iVar30 = iVar9;
                                              }
                                              else {
                                                FUN_108d71098(plVar27,0x2f,0,iVar30,iVar9);
                                                FUN_108da9bfc(plVar27,plStack_108,iVar30,iVar9);
                                                FUN_108d71098(plVar27,0x4c,iVar9,uVar8,0);
                                                iVar30 = *(int *)((long)plVar27 + 0x3c) + 3;
                                                uVar23 = 0x26;
                                                iVar22 = iVar9;
                                              }
                                              FUN_108d71098(plVar27,uVar23,iVar22,iVar30,0);
                                              FUN_108d71098(plVar27,0x46,iStack_10c,0,iVar9);
                                              FUN_108d71098(plVar27,0x10,0,uVar8,0);
                                              uVar31 = *(uint *)((long)plVar27 + 0x3c);
                                              if (1 < uVar31) {
                                                *(uint *)(plVar27[1] + (ulong)(uVar31 - 2) * 0x18 +
                                                         8) = uVar31;
                                              }
                                              *(uint *)(plVar27[6] + 100) = uVar31 - 1;
                                            }
                                            FUN_108d71098(plVar27,0x67,0,iVar32 + 2,0);
                                            uVar23 = *(undefined8 *)(lVar38 + 0x10);
                                            plVar16 = plVar27;
                                            FUN_108d71098(plVar27,0x61,0,iVar32 + 3,0);
                                            FUN_108d6aaec(plVar27,plVar16,uVar23,0);
                                            FUN_108d71098(plVar27,0x19,iStack_10c + -1,iVar32 + 4,0)
                                            ;
                                            FUN_108d71098(plVar27,0x23,iVar32 + 1,4,0);
                                            lVar33 = plVar27[6];
                                            if ((int)uVar8 < 0) {
                                              lVar45 = *(long *)(lVar33 + 0x80);
                                              iVar30 = *(int *)((long)plVar27 + 0x3c);
                                              if (lVar45 != 0) {
                                                *(int *)(lVar45 + (ulong)~uVar8 * 4) = iVar30;
                                              }
                                            }
                                            else {
                                              iVar30 = *(int *)((long)plVar27 + 0x3c);
                                            }
                                            *(int *)(lVar33 + 100) = iVar30 + -1;
                                            func_0x000108d60660(pbVar37,pbStack_c8);
                                            iStack_10c = iStack_10c + 1;
                                            lVar38 = *(long *)(lVar38 + 8);
                                          } while (lVar38 != 0);
                                        }
                                        FUN_108d71098(plVar27,9,0,(uint)plVar21 + 1,0);
                                        uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                        if ((uint)plVar21 < uVar8) {
                                          *(uint *)(plVar27[1] +
                                                    ((ulong)plVar21 & 0xffffffff) * 0x18 + 8) =
                                               uVar8;
                                        }
                                        *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                      }
                                    }
                                    break;
                                  case 0xd:
                                    if ((pbVar13 != (byte *)0x0) &&
                                       (pbVar48 = pbVar37,
                                       func_0x000108d700dc(pbVar37,pbVar13,pbVar42),
                                       pbVar48 != (byte *)0x0)) {
                                      plVar27 = param_1;
                                      FUN_108d70f98();
                                      lStack_d8 = *(long *)(pbVar48 + 0x20);
                                      if (lStack_d8 != 0) {
                                        FUN_108d71004();
                                        *(undefined4 *)((long)param_1 + 0x54) = 8;
                                        func_0x000108dab6e4(param_1,plVar41);
                                        if ((((*(char *)(*plVar27 + 0x51) == '\0') &&
                                             (FUN_108d67c04(plVar27[4],"id",0xffffffff,1,0),
                                             *(char *)(*plVar27 + 0x51) == '\0')) &&
                                            (FUN_108d67c04(plVar27[4] + 0x38,&UNK_10f51a545,
                                                           0xffffffff,1,0),
                                            *(char *)(*plVar27 + 0x51) == '\0')) &&
                                           (((FUN_108d67c04(plVar27[4] + 0x70,&DAT_10f30fc41,
                                                            0xffffffff,1,0),
                                             *(char *)(*plVar27 + 0x51) == '\0' &&
                                             (FUN_108d67c04(plVar27[4] + 0xa8,"from",0xffffffff,1,0)
                                             , *(char *)(*plVar27 + 0x51) == '\0')) &&
                                            ((FUN_108d67c04(plVar27[4] + 0xe0,"to",0xffffffff,1,0),
                                             *(char *)(*plVar27 + 0x51) == '\0' &&
                                             ((FUN_108d67c04(plVar27[4] + 0x118,&UNK_10f51a549,
                                                             0xffffffff,1,0),
                                              *(char *)(*plVar27 + 0x51) == '\0' &&
                                              (FUN_108d67c04(plVar27[4] + 0x150,&UNK_10f51a553,
                                                             0xffffffff,1,0),
                                              *(char *)(*plVar27 + 0x51) == '\0')))))))) {
                                          FUN_108d67c04(plVar27[4] + 0x188,"match",0xffffffff,1,0);
                                        }
                                        iVar9 = 0;
                                        do {
                                          if (0 < *(int *)(lStack_d8 + 0x28)) {
                                            lVar38 = 0;
                                            plVar41 = (long *)(lStack_d8 + 0x48);
                                            do {
                                              pbVar42 = &UNK_10f51a981;
                                              if ((byte)(*(char *)(lStack_d8 + 0x2d) - 6U) < 4) {
                                                pbVar42 = (&PTR_DAT_110ac52e0)
                                                          [(byte)(*(char *)(lStack_d8 + 0x2d) - 6)];
                                              }
                                              puVar20 = &UNK_10f51a981;
                                              if ((byte)(*(char *)(lStack_d8 + 0x2e) - 6U) < 4) {
                                                puVar20 = (&PTR_DAT_110ac52e0)
                                                          [(byte)(*(char *)(lStack_d8 + 0x2e) - 6)];
                                              }
                                              lVar33 = *plVar41;
                                              FUN_108d71098(plVar27,0x19,iVar9,1,0);
                                              FUN_108d71098(plVar27,0x19,lVar38,2,0);
                                              uVar23 = *(undefined8 *)(lStack_d8 + 0x10);
                                              plVar21 = plVar27;
                                              FUN_108d71098(plVar27,0x61,0,3,0);
                                              FUN_108d6aaec(plVar27,plVar21,uVar23,0);
                                              uVar23 = *(undefined8 *)
                                                        (*(long *)(pbVar48 + 8) +
                                                        (long)(int)plVar41[-1] * 0x30);
                                              plVar21 = plVar27;
                                              FUN_108d71098(plVar27,0x61,0,4,0);
                                              FUN_108d6aaec(plVar27,plVar21,uVar23,0);
                                              uVar26 = 0x1c;
                                              if (lVar33 != 0) {
                                                uVar26 = 0x61;
                                              }
                                              plVar21 = plVar27;
                                              FUN_108d71098(plVar27,uVar26,0,5,0);
                                              FUN_108d6aaec(plVar27,plVar21,lVar33,0);
                                              plVar21 = plVar27;
                                              FUN_108d71098(plVar27,0x61,0,6,0);
                                              FUN_108d6aaec(plVar27,plVar21,puVar20,0);
                                              plVar21 = plVar27;
                                              FUN_108d71098(plVar27,0x61,0,7,0);
                                              FUN_108d6aaec(plVar27,plVar21,pbVar42,0);
                                              plVar21 = plVar27;
                                              FUN_108d71098(plVar27,0x61,0,8,0);
                                              FUN_108d6aaec(plVar27,plVar21,"NONE",0);
                                              FUN_108d71098(plVar27,0x23,1,8,0);
                                              lVar38 = lVar38 + 1;
                                              plVar41 = plVar41 + 2;
                                            } while (lVar38 < *(int *)(lStack_d8 + 0x28));
                                          }
                                          iVar9 = iVar9 + 1;
                                          lStack_d8 = *(long *)(lStack_d8 + 8);
                                          unaff_x27 = pbVar42;
                                        } while (lStack_d8 != 0);
                                      }
                                    }
                                    break;
                                  case 0xe:
                                    if (((pbVar13 == (byte *)0x0) ||
                                        (pbVar48 = pbVar13, FUN_108d934c8(pbVar13,&uStack_b8),
                                        (int)pbVar48 == 0)) || ((int)(uint)uStack_b8 < 1)) {
                                      uStack_b8 = (char *)CONCAT44(uStack_b8._4_4_,0x7fffffff);
                                    }
                                    plVar21 = param_1;
                                    if ((long *)param_1[0x38] != (long *)0x0) {
                                      plVar21 = (long *)param_1[0x38];
                                    }
                                    func_0x000108dab6e4(param_1,plVar41);
                                    *(uint *)(plVar21 + 0x2d) =
                                         *(uint *)(plVar21 + 0x2d) | 1 << (ulong)(uVar8 & 0x1f);
                                    FUN_108d71098(plVar27,0x19,(ulong)uStack_b8 & 0xffffffff,1,0);
                                    plVar21 = plVar27;
                                    FUN_108d71098(plVar27,0x8f,plVar41,0,0);
                                    FUN_108d71098(plVar27,0x23,1,0,0);
                                    FUN_108d71098(plVar27,0x25,1,0xffffffff,0);
                                    FUN_108d71098(plVar27,0x89,1,plVar21,0);
                                    uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                    if ((uint)plVar21 < uVar8) {
                                      *(uint *)(plVar27[1] + ((ulong)plVar21 & 0xffffffff) * 0x18 +
                                               8) = uVar8;
                                    }
                                    *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                    break;
                                  case 0xf:
                                    if ((pbVar13 != (byte *)0x0) &&
                                       (pbVar48 = pbVar37, FUN_108d93428(pbVar37,pbVar13,pbVar42),
                                       pbVar48 != (byte *)0x0)) {
                                      iVar9 = *(int *)(&UNK_110ac4b5c + lVar38);
                                      uVar26 = 3;
                                      if (iVar9 != 0) {
                                        uVar26 = 6;
                                      }
                                      lVar38 = 0x56;
                                      if (iVar9 != 0) {
                                        lVar38 = 0x58;
                                      }
                                      uVar7 = *(ushort *)(pbVar48 + lVar38);
                                      *(undefined4 *)((long)param_1 + 0x54) = uVar26;
                                      lVar38 = *(long *)(pbVar48 + 0x18);
                                      FUN_108d71004(plVar27);
                                      func_0x000108dab6e4(param_1,plVar41);
                                      if (((*(char *)(*plVar27 + 0x51) == '\0') &&
                                          (FUN_108d67c04(plVar27[4],&UNK_10f51a53a,0xffffffff,1,0),
                                          *(char *)(*plVar27 + 0x51) == '\0')) &&
                                         (FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f366d0b,0xffffffff,
                                                        1,0), *(char *)(*plVar27 + 0x51) == '\0')) {
                                        FUN_108d67c04(plVar27[4] + 0x70,&DAT_10f68f148,0xffffffff,1,
                                                      0);
                                      }
                                      if ((((iVar9 != 0) && (*(char *)(*plVar27 + 0x51) == '\0')) &&
                                          (FUN_108d67c04(plVar27[4] + 0xa8,&DAT_10f2cc857,0xffffffff
                                                         ,1,0), *(char *)(*plVar27 + 0x51) == '\0'))
                                         && (FUN_108d67c04(plVar27[4] + 0xe0,&UNK_10f51a540,
                                                           0xffffffff,1,0),
                                            *(char *)(*plVar27 + 0x51) == '\0')) {
                                        FUN_108d67c04(plVar27[4] + 0x118,"key",0xffffffff,1,0);
                                      }
                                      unaff_x27 = pbVar48;
                                      if (uVar7 != 0) {
                                        uVar29 = 0;
                                        do {
                                          sVar25 = *(short *)(*(long *)(pbVar48 + 8) + uVar29 * 2);
                                          FUN_108d71098(plVar27,0x19,uVar29,1,0);
                                          FUN_108d71098(plVar27,0x19,(long)sVar25,2,0);
                                          if (sVar25 < 0) {
                                            FUN_108d71098(plVar27,0x1c,0,3,0);
                                          }
                                          else {
                                            uVar23 = *(undefined8 *)
                                                      (*(long *)(lVar38 + 8) +
                                                      (long)(int)sVar25 * 0x30);
                                            plVar41 = plVar27;
                                            FUN_108d71098(plVar27,0x61,0,3,0);
                                            FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                          }
                                          if (iVar9 != 0) {
                                            FUN_108d71098(plVar27,0x19,
                                                          *(undefined1 *)
                                                           (*(long *)(pbVar48 + 0x38) + uVar29),4,0)
                                            ;
                                            uVar23 = *(undefined8 *)
                                                      (*(long *)(pbVar48 + 0x40) + uVar29 * 8);
                                            plVar41 = plVar27;
                                            FUN_108d71098(plVar27,0x61,0,5,0);
                                            FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                            FUN_108d71098(plVar27,0x19,
                                                          uVar29 < *(ushort *)(pbVar48 + 0x56),6,0);
                                          }
                                          FUN_108d71098(plVar27,0x23,1,
                                                        *(undefined4 *)((long)param_1 + 0x54),0);
                                          uVar29 = uVar29 + 1;
                                        } while (uVar7 != uVar29);
                                      }
                                    }
                                    break;
                                  case 0x10:
                                    if ((pbVar13 != (byte *)0x0) &&
                                       (pbVar48 = pbVar37,
                                       func_0x000108d700dc(pbVar37,pbVar13,pbVar42),
                                       pbVar48 != (byte *)0x0)) {
                                      plVar27 = param_1;
                                      FUN_108d70f98();
                                      FUN_108d71004();
                                      *(undefined4 *)((long)param_1 + 0x54) = 5;
                                      func_0x000108dab6e4(param_1,plVar41);
                                      if (((*(char *)(*plVar27 + 0x51) == '\0') &&
                                          (((FUN_108d67c04(plVar27[4],&UNK_10f51a545,0xffffffff,1,0)
                                            , *(char *)(*plVar27 + 0x51) == '\0' &&
                                            (FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f68f148,
                                                           0xffffffff,1,0),
                                            *(char *)(*plVar27 + 0x51) == '\0')) &&
                                           (FUN_108d67c04(plVar27[4] + 0x70,&DAT_10f2fedff,
                                                          0xffffffff,1,0),
                                           *(char *)(*plVar27 + 0x51) == '\0')))) &&
                                         (FUN_108d67c04(plVar27[4] + 0xa8,"origin",0xffffffff,1,0),
                                         *(char *)(*plVar27 + 0x51) == '\0')) {
                                        FUN_108d67c04(plVar27[4] + 0xe0,&DAT_10f2dee16,0xffffffff,1,
                                                      0);
                                      }
                                      puVar47 = *(undefined8 **)(pbVar48 + 0x10);
                                      if (puVar47 != (undefined8 *)0x0) {
                                        iVar9 = 0;
                                        do {
                                          FUN_108d71098(plVar27,0x19,iVar9,1,0);
                                          uVar23 = *puVar47;
                                          plVar41 = plVar27;
                                          FUN_108d71098(plVar27,0x61,0,2,0);
                                          FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                          FUN_108d71098(plVar27,0x19,
                                                        *(char *)((long)puVar47 + 0x5a) != '\0',3,0)
                                          ;
                                          puVar20 = (&PTR_DAT_110ac4aa8)
                                                    [(ulong)*(byte *)((long)puVar47 + 0x5b) & 3];
                                          plVar41 = plVar27;
                                          FUN_108d71098(plVar27,0x61,0,4,0);
                                          FUN_108d6aaec(plVar27,plVar41,puVar20,0);
                                          FUN_108d71098(plVar27,0x19,puVar47[9] != 0,5,0);
                                          FUN_108d71098(plVar27,0x23,1,5,0);
                                          iVar9 = iVar9 + 1;
                                          puVar47 = (undefined8 *)puVar47[5];
                                        } while (puVar47 != (undefined8 *)0x0);
                                      }
                                    }
                                    break;
                                  case 0x11:
                                    bVar4 = *pbVar12;
                                    lVar38 = *param_3;
                                    *(undefined4 *)((long)param_1 + 0x54) = 6;
                                    FUN_108d71004(plVar27,1);
                                    if (*(char *)(*plVar27 + 0x51) == '\0') {
                                      FUN_108d67c04(plVar27[4],&DAT_10f51a562,0xffffffff,1,0);
                                    }
                                    uVar29 = 100;
                                    uStack_b8 = (char *)CONCAT44(uStack_b8._4_4_,100);
                                    if (pbVar13 != (byte *)0x0) {
                                      FUN_108d934c8(pbVar13,&uStack_b8);
                                      uVar29 = (ulong)uStack_b8 & 0xffffffff;
                                      if ((int)(uint)uStack_b8 < 1) {
                                        uVar29 = 100;
                                        uStack_b8 = (char *)CONCAT44(uStack_b8._4_4_,100);
                                      }
                                    }
                                    FUN_108d71098(plVar27,0x19,uVar29,1,0);
                                    if (0 < *(int *)(pbVar37 + 0x28)) {
                                      pbStack_128 = (byte *)0x0;
                                      do {
                                        if ((lVar38 == 0) || (pbStack_128 == pbVar48)) {
                                          func_0x000108dab6e4(param_1,pbStack_128);
                                          plVar41 = plVar27;
                                          FUN_108d71098(plVar27,0x89,1,0,0);
                                          FUN_108d71098(plVar27,0x18,0,0,0);
                                          uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                          if ((uint)plVar41 < uVar8) {
                                            *(uint *)(plVar27[1] +
                                                      ((ulong)plVar41 & 0xffffffff) * 0x18 + 8) =
                                                 uVar8;
                                          }
                                          *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                          lVar33 = *(long *)(*(long *)(pbVar37 + 0x20) +
                                                             (long)pbStack_128 * 0x20 + 0x18);
                                          plVar41 = *(long **)(lVar33 + 0x10);
                                          if (plVar41 == (long *)0x0) {
                                            iVar9 = 0;
                                          }
                                          else {
                                            iVar9 = 0;
                                            do {
                                              lVar45 = plVar41[2];
                                              if ((*(byte *)(lVar45 + 0x46) >> 5 & 1) == 0) {
                                                FUN_108d71098(plVar27,0x19,
                                                              *(undefined4 *)(lVar45 + 0x38),
                                                              iVar9 + 2,0);
                                                iVar9 = iVar9 + 1;
                                              }
                                              for (lVar45 = *(long *)(lVar45 + 0x10); lVar45 != 0;
                                                  lVar45 = *(long *)(lVar45 + 0x28)) {
                                                FUN_108d71098(plVar27,0x19,
                                                              *(undefined4 *)(lVar45 + 0x50),
                                                              iVar9 + 2,0);
                                                iVar9 = iVar9 + 1;
                                              }
                                              plVar41 = (long *)*plVar41;
                                            } while (plVar41 != (long *)0x0);
                                          }
                                          iVar32 = *(int *)((long)param_1 + 0x54);
                                          if (*(int *)((long)param_1 + 0x54) <= iVar9 + 8) {
                                            iVar32 = iVar9 + 8;
                                          }
                                          *(int *)((long)param_1 + 0x54) = iVar32;
                                          FUN_108d71098(plVar27,0x7f,2,iVar9,1);
                                          if (plVar27[1] != 0) {
                                            *(char *)(plVar27[1] +
                                                      (long)*(int *)((long)plVar27 + 0x3c) * 0x18 +
                                                     -0x15) = (char)pbStack_128;
                                          }
                                          plVar41 = plVar27;
                                          FUN_108d71098(plVar27,0x4c,2,0,0);
                                          pbVar14 = pbVar37;
                                          FUN_108d6a8e0(pbVar37,&UNK_10f51a572);
                                          plVar21 = plVar27;
                                          FUN_108d71098(plVar27,0x61,0,3,0);
                                          FUN_108d6aaec(plVar27,plVar21,pbVar14,0xffffffff);
                                          FUN_108d71098(plVar27,0x20,2,4,1);
                                          FUN_108d71098(plVar27,0x5e,4,3,2);
                                          FUN_108d71098(plVar27,0x23,2,1,0);
                                          uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                          if ((uint)plVar41 < uVar8) {
                                            *(uint *)(plVar27[1] +
                                                      ((ulong)plVar41 & 0xffffffff) * 0x18 + 8) =
                                                 uVar8;
                                          }
                                          *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                          plStack_118 = *(long **)(lVar33 + 0x10);
                                          if ((plStack_118 != (long *)0x0) &&
                                             ((bVar4 & 0xdf) != 0x51)) {
                                            do {
                                              lVar33 = plStack_118[2];
                                              puStack_e0 = *(undefined8 **)(lVar33 + 0x10);
                                              if (puStack_e0 != (undefined8 *)0x0) {
                                                if ((*(byte *)(lVar33 + 0x46) >> 5 & 1) != 0) {
                                                  do {
                                                    if ((*(byte *)((long)puStack_e0 + 0x5b) & 3) ==
                                                        2) goto code_r0x000108da33d4;
                                                    puStack_e0 = (undefined8 *)puStack_e0[5];
                                                  } while (puStack_e0 != (undefined8 *)0x0);
                                                }
                                                puStack_e0 = (undefined8 *)0x0;
code_r0x000108da33d4:
                                                plVar41 = plVar27;
                                                FUN_108d71098(plVar27,0x89,1,0,0);
                                                FUN_108d71098(plVar27,0x18,0,0,0);
                                                uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                                if ((uint)plVar41 < uVar8) {
                                                  *(uint *)(plVar27[1] +
                                                            ((ulong)plVar41 & 0xffffffff) * 0x18 + 8
                                                           ) = uVar8;
                                                }
                                                *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                                FUN_108db5354(param_1);
                                                FUN_108dbfe30(param_1,lVar33,0x36,1,0,&pbStack_c8,
                                                              &iStack_cc);
                                                FUN_108d71098(plVar27,0x19,0,7,0);
                                                lVar45 = *(long *)(lVar33 + 0x10);
                                                if (lVar45 == 0) {
                                                  iVar9 = 8;
                                                }
                                                else {
                                                  iVar9 = 8;
                                                  do {
                                                    FUN_108d71098(plVar27,0x19,0,iVar9,0);
                                                    lVar45 = *(long *)(lVar45 + 0x28);
                                                    iVar9 = iVar9 + 1;
                                                  } while (lVar45 != 0);
                                                }
                                                pbVar14 = pbStack_c8;
                                                iVar32 = *(int *)((long)param_1 + 0x54);
                                                if (*(int *)((long)param_1 + 0x54) <= iVar9) {
                                                  iVar32 = iVar9;
                                                }
                                                *(int *)((long)param_1 + 0x54) = iVar32;
                                                uVar26 = pbStack_c8._0_4_;
                                                FUN_108d71098(plVar27,0x6c,
                                                              (ulong)pbStack_c8 & 0xffffffff,0,0);
                                                plVar41 = plVar27;
                                                FUN_108d71098(plVar27,0x25,7,1,0);
                                                sVar25 = *(short *)(lVar33 + 0x3e);
                                                if (0 < sVar25) {
                                                  lVar40 = 0;
                                                  lVar45 = 0;
                                                  do {
                                                    if ((lVar45 != *(short *)(lVar33 + 0x3c)) &&
                                                       (*(char *)(*(long *)(lVar33 + 8) + lVar40 +
                                                                 0x28) != '\0')) {
                                                      FUN_108da9a60(plVar27,lVar33,uVar26,lVar45,3);
                                                      if (plVar27[1] != 0) {
                                                        *(undefined1 *)
                                                         (plVar27[1] +
                                                          (long)*(int *)((long)plVar27 + 0x3c) *
                                                          0x18 + -0x15) = 0x80;
                                                      }
                                                      plVar21 = plVar27;
                                                      FUN_108d71098(plVar27,0x4d,3,0,0);
                                                      FUN_108d71098(plVar27,0x25,1,0xffffffff,0);
                                                      pbVar42 = pbVar37;
                                                      FUN_108d6a8e0(pbVar37,&UNK_10f51a58a);
                                                      plVar16 = plVar27;
                                                      FUN_108d71098(plVar27,0x61,0,3,0);
                                                      FUN_108d6aaec(plVar27,plVar16,pbVar42,
                                                                    0xffffffff);
                                                      FUN_108d71098(plVar27,0x23,3,1,0);
                                                      plVar16 = plVar27;
                                                      FUN_108d71098(plVar27,0x89,1,0,0);
                                                      FUN_108d71098(plVar27,0x18,0,0,0);
                                                      uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                                      if ((uint)plVar21 < uVar8) {
                                                        *(uint *)(plVar27[1] +
                                                                  ((ulong)plVar21 & 0xffffffff) *
                                                                  0x18 + 8) = uVar8;
                                                      }
                                                      lVar35 = plVar27[6];
                                                      if ((uint)plVar16 < uVar8) {
                                                        *(uint *)(plVar27[1] +
                                                                  ((ulong)plVar16 & 0xffffffff) *
                                                                  0x18 + 8) = uVar8;
                                                      }
                                                      *(uint *)(lVar35 + 100) = uVar8 - 1;
                                                      sVar25 = *(short *)(lVar33 + 0x3e);
                                                    }
                                                    lVar45 = lVar45 + 1;
                                                    lVar40 = lVar40 + 0x30;
                                                  } while (lVar45 < sVar25);
                                                }
                                                iVar9 = iStack_cc;
                                                puVar47 = *(undefined8 **)(lVar33 + 0x10);
                                                if (puVar47 != (undefined8 *)0x0) {
                                                  puVar46 = (undefined8 *)0x0;
                                                  iVar32 = 0;
                                                  uStack_f0 = 0xffffffff;
                                                  do {
                                                    lVar45 = plVar27[6];
                                                    FUN_108da84a4(lVar45);
                                                    if (puStack_e0 != puVar47) {
                                                      plVar21 = param_1;
                                                      FUN_108db1340(param_1,puVar47,uVar26,0,0,
                                                                    &uStack_d0,puVar46,uStack_f0);
                                                      FUN_108d71098(plVar27,0x25,iVar32 + 8,1,0);
                                                      uVar6 = *(undefined2 *)(puVar47 + 0xb);
                                                      uStack_f0 = (ulong)plVar21 & 0xffffffff;
                                                      plVar16 = plVar27;
                                                      FUN_108d71098(plVar27,0x45,iVar32 + iVar9,
                                                                    lVar45,plVar21);
                                                      FUN_108d6aaec(plVar27,plVar16,uVar6,0xfffffff2
                                                                   );
                                                      FUN_108d71098(plVar27,0x25,1,0xffffffff,0);
                                                      plVar17 = plVar27;
                                                      FUN_108d71098(plVar27,0x61,0,3,0);
                                                      FUN_108d6aaec(plVar27,plVar17,&UNK_10f51a59e,
                                                                    0xfffffffe);
                                                      FUN_108d71098(plVar27,0x5e,7,3,3);
                                                      plVar17 = plVar27;
                                                      FUN_108d71098(plVar27,0x61,0,4,0);
                                                      FUN_108d6aaec(plVar27,plVar17,&UNK_10f51a5a3,
                                                                    0xfffffffe);
                                                      FUN_108d71098(plVar27,0x5e,4,3,3);
                                                      uVar23 = *puVar47;
                                                      plVar17 = plVar27;
                                                      FUN_108d71098(plVar27,0x61,0,4,0);
                                                      FUN_108d6aaec(plVar27,plVar17,uVar23,0);
                                                      FUN_108d71098(plVar27,0x5e,4,3,3);
                                                      FUN_108d71098(plVar27,0x23,3,1,0);
                                                      plVar18 = plVar27;
                                                      FUN_108d71098(plVar27,0x89,1,0,0);
                                                      FUN_108d71098(plVar27,0x18,0,0,0);
                                                      uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                                      if ((uint)plVar16 < uVar8) {
                                                        *(uint *)(plVar27[1] +
                                                                  ((ulong)plVar16 & 0xffffffff) *
                                                                  0x18 + 8) = uVar8;
                                                      }
                                                      lVar40 = plVar27[6];
                                                      *(uint *)(lVar40 + 100) = uVar8 - 1;
                                                      lVar45 = lVar40;
                                                      if (*(char *)((long)puVar47 + 0x5a) != '\0') {
                                                        FUN_108da84a4();
                                                        uVar29 = (ulong)*(ushort *)
                                                                         ((long)puVar47 + 0x56);
                                                        if (*(ushort *)((long)puVar47 + 0x56) != 0)
                                                        {
                                                          uVar44 = 0;
                                                          do {
                                                            if (*(char *)(*(long *)(lVar33 + 8) +
                                                                          (long)(int)*(short *)(
                                                  puVar47[1] + uVar44 * 2) * 0x30 + 0x28) == '\0') {
                                                    FUN_108d71098(plVar27,0x4c,
                                                                  (int)plVar21 + (int)uVar44,lVar40,
                                                                  0);
                                                    uVar29 = (ulong)*(ushort *)
                                                                     ((long)puVar47 + 0x56);
                                                  }
                                                  uVar44 = uVar44 + 1;
                                                  } while (uVar44 < uVar29);
                                                  }
                                                  plVar16 = plVar27;
                                                  FUN_108d71098(plVar27,9,iVar32 + iVar9,0,0);
                                                  FUN_108d71098(plVar27,0x10,0,lVar40,0);
                                                  uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                                  if ((uint)plVar16 < uVar8) {
                                                    *(uint *)(plVar27[1] +
                                                              ((ulong)plVar16 & 0xffffffff) * 0x18 +
                                                             8) = uVar8;
                                                  }
                                                  *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                                  uVar6 = *(undefined2 *)((long)puVar47 + 0x56);
                                                  plVar16 = plVar27;
                                                  FUN_108d71098(plVar27,0x72,iVar32 + iVar9,lVar40,
                                                                (ulong)plVar21 & 0xffffffff);
                                                  FUN_108d6aaec(plVar27,plVar16,uVar6,0xfffffff2);
                                                  FUN_108d71098(plVar27,0x25,1,0xffffffff,0);
                                                  plVar21 = plVar27;
                                                  FUN_108d71098(plVar27,0x61,0,3,0);
                                                  FUN_108d6aaec(plVar27,plVar21,&UNK_10f51a5b8,
                                                                0xfffffffe);
                                                  FUN_108d71098(plVar27,0x10,0,plVar17,0);
                                                  lVar45 = plVar27[6];
                                                  if ((int)(uint)lVar40 < 0) {
                                                    uVar31 = *(uint *)((long)plVar27 + 0x3c);
                                                    uVar8 = uVar31;
                                                    if (*(long *)(lVar45 + 0x80) != 0) {
                                                      *(uint *)(*(long *)(lVar45 + 0x80) +
                                                               (ulong)~(uint)lVar40 * 4) = uVar31;
                                                      uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                                    }
                                                  }
                                                  else {
                                                    uVar31 = *(uint *)((long)plVar27 + 0x3c);
                                                    uVar8 = uVar31;
                                                  }
                                                  *(uint *)(lVar45 + 100) = uVar31 - 1;
                                                  }
                                                  if ((uint)plVar18 < uVar8) {
                                                    *(uint *)(plVar27[1] +
                                                              ((ulong)plVar18 & 0xffffffff) * 0x18 +
                                                             8) = uVar8;
                                                  }
                                                  *(uint *)(lVar45 + 100) = uVar8 - 1;
                                                  FUN_108db14f4(param_1,uStack_d0);
                                                  puVar46 = puVar47;
                                                  }
                                                  iVar32 = iVar32 + 1;
                                                  puVar47 = (undefined8 *)puVar47[5];
                                                  } while (puVar47 != (undefined8 *)0x0);
                                                }
                                                pbVar42 = (byte *)0x0;
                                                FUN_108d71098(plVar27,9,(ulong)pbVar14 & 0xffffffff,
                                                              (int)plVar41,0);
                                                uVar31 = (int)plVar41 - 1;
                                                uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                                if (uVar31 < uVar8) {
                                                  *(uint *)(plVar27[1] + (ulong)uVar31 * 0x18 + 8) =
                                                       uVar8;
                                                }
                                                *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                                plVar41 = plVar27;
                                                FUN_108d71098(plVar27,0x61,0,2,0);
                                                FUN_108d6aaec(plVar27,plVar41,&UNK_10f51a5d3,
                                                              0xfffffffe);
                                                iVar9 = iStack_cc;
                                                puVar47 = *(undefined8 **)(lVar33 + 0x10);
                                                if (puVar47 != (undefined8 *)0x0) {
                                                  iVar32 = 8;
                                                  do {
                                                    if (puStack_e0 != puVar47) {
                                                      iVar30 = *(int *)((long)plVar27 + 0x3c);
                                                      FUN_108d71098(plVar27,0x89,1,iVar30 + 2,0);
                                                      FUN_108d71098(plVar27,0x18,0,0,0);
                                                      FUN_108d71098(plVar27,0x32,iVar9 + iVar32 + -8
                                                                    ,3,0);
                                                      FUN_108d71098(plVar27,0x4f,iVar32,iVar30 + 8,3
                                                                   );
                                                      if (plVar27[1] != 0) {
                                                        *(undefined1 *)
                                                         (plVar27[1] +
                                                          (long)*(int *)((long)plVar27 + 0x3c) *
                                                          0x18 + -0x15) = 0x90;
                                                      }
                                                      FUN_108d71098(plVar27,0x25,1,0xffffffff,0);
                                                      uVar23 = *puVar47;
                                                      plVar41 = plVar27;
                                                      FUN_108d71098(plVar27,0x61,0,3,0);
                                                      FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                                      FUN_108d71098(plVar27,0x5e,3,2,7);
                                                      FUN_108d71098(plVar27,0x23,7,1,0);
                                                    }
                                                    puVar47 = (undefined8 *)puVar47[5];
                                                    iVar32 = iVar32 + 1;
                                                  } while (puVar47 != (undefined8 *)0x0);
                                                }
                                              }
                                              plStack_118 = (long *)*plStack_118;
                                            } while (plStack_118 != (long *)0x0);
                                          }
                                        }
                                        pbStack_128 = pbStack_128 + 1;
                                      } while ((long)pbStack_128 < (long)*(int *)(pbVar37 + 0x28));
                                    }
                                    plVar41 = plVar27;
                                    func_0x000108d6a9d4(plVar27,3,&UNK_10dfa2e3a);
                                    uVar8 = *(uint *)((long)plVar27 + 0x3c);
                                    if ((uint)plVar41 < uVar8) {
                                      lVar38 = plVar27[1] + ((ulong)plVar41 & 0xffffffff) * 0x18;
                                      *(uint *)(lVar38 + 8) = uVar8;
                                      *(uint *)(lVar38 + 0xc) = -(uint)uStack_b8;
                                    }
                                    *(uint *)(plVar27[6] + 100) = uVar8 - 1;
                                    FUN_108d6aaec(plVar27,(uint)plVar41 + 1,"ok",0xfffffffe);
                                    unaff_x27 = pbVar42;
                                    break;
                                  case 0x12:
                                    FUN_108d71004(plVar27,1);
                                    if (*(char *)(*plVar27 + 0x51) == '\0') {
                                      FUN_108d67c04(plVar27[4],&DAT_10f51a446,0xffffffff,1,0);
                                    }
                                    if (pbVar13 == (byte *)0x0) goto code_r0x000108da2f9c;
                                    pbVar48 = pbVar13;
                                    _strlen(pbVar13);
                                    lVar38 = 0;
                                    goto code_r0x000108da2f7c;
                                  case 0x13:
                                    lVar38 = **(long **)(puVar47[1] + 8);
                                    uStack_b8 = (char *)0xfffffffffffffffe;
                                    if (pbVar13 == (byte *)0x0) {
                                      uStack_b8 = *(char **)(lVar38 + 200);
                                    }
                                    else {
                                      func_0x000108d70e6c(pbVar13,&uStack_b8);
                                      if ((char *)0x7fffffffffffffff < uStack_b8) {
                                        uStack_b8 = (char *)0xffffffffffffffff;
                                      }
                                      *(char **)(lVar38 + 200) = uStack_b8;
                                      if (*(long *)(lVar38 + 0x138) != 0) {
                                        *(char **)(*(long *)(lVar38 + 0x138) + 0x20) = uStack_b8;
                                      }
                                    }
                                    pcVar19 = "journal_size_limit";
                                    pcVar24 = uStack_b8;
                                    goto code_r0x000108da468c;
                                  case 0x14:
                                    if (pbVar13 == (byte *)0x0) {
                                      uStack_b8 = (char *)0x0;
                                      plVar41 = *(long **)(**(long **)(puVar47[1] + 8) + 0x48);
                                      (**(code **)(*plVar41 + 0x50))(plVar41,2,&uStack_b8);
                                      if (uStack_b8 != (char *)0x0) {
                                        FUN_108d71004(plVar27,1);
                                        pcVar19 = uStack_b8;
                                        if (*(char *)(*plVar27 + 0x51) == '\0') {
                                          FUN_108d67c04(plVar27[4],&DAT_10f51a4b5,0xffffffff,1,0);
                                          pcVar19 = uStack_b8;
                                        }
                                        goto code_r0x000108da435c;
                                      }
                                    }
                                    else {
                                      plVar27 = *(long **)(**(long **)(puVar47[1] + 8) + 0x48);
                                      pbVar48 = (byte *)0x0;
                                      if (*pbVar13 != 0) {
                                        pbVar48 = pbVar13;
                                      }
                                      (**(code **)(*plVar27 + 0x50))(plVar27,3,pbVar48);
                                      if ((int)plVar27 != 0) {
                                        func_0x000108d6a85c(param_1,&UNK_10f51a4c5);
                                      }
                                    }
                                    break;
                                  case 0x15:
                                    pbVar48 = pbVar13;
                                    FUN_108dc4d40();
                                    iVar9 = (int)pbVar48;
                                    if (((int)param_3[1] == 0) && (iVar9 == -1)) {
                                      pbVar48 = pbVar37 + 0x52;
                                    }
                                    else {
                                      bVar4 = (byte)pbVar48;
                                      if ((int)param_3[1] == 0) {
                                        if (2 < (int)*(uint *)(pbVar37 + 0x28)) {
                                          lVar38 = (ulong)*(uint *)(pbVar37 + 0x28) - 2;
                                          plVar41 = (long *)(*(long *)(pbVar37 + 0x20) + 0x48);
                                          do {
                                            if (((-1 < iVar9) &&
                                                (lVar33 = **(long **)(*plVar41 + 8),
                                                *(char *)(lVar33 + 0x10) == '\0')) &&
                                               ((*(long *)(lVar33 + 0x138) == 0 ||
                                                (*(char *)(*(long *)(lVar33 + 0x138) + 0x3f) !=
                                                 '\x02')))) {
                                              *(byte *)(lVar33 + 8) = bVar4;
                                            }
                                            lVar38 = lVar38 + -1;
                                            plVar41 = plVar41 + 4;
                                          } while (lVar38 != 0);
                                        }
                                        pbVar37[0x52] = bVar4;
                                      }
                                      lVar38 = **(long **)(puVar47[1] + 8);
                                      if (((-1 < iVar9) && (*(char *)(lVar38 + 0x10) == '\0')) &&
                                         ((*(long *)(lVar38 + 0x138) == 0 ||
                                          (*(char *)(*(long *)(lVar38 + 0x138) + 0x3f) != '\x02'))))
                                      {
                                        *(byte *)(lVar38 + 8) = bVar4;
                                      }
                                      pbVar48 = (byte *)(lVar38 + 8);
                                    }
                                    pcVar19 = "exclusive";
                                    if (*pbVar48 != 1) {
                                      pcVar19 = "normal";
                                    }
                                    FUN_108d71004(plVar27,1);
                                    if (*(char *)(*plVar27 + 0x51) == '\0') {
                                      FUN_108d67c04(plVar27[4],&DAT_10f51a439,0xffffffff,1,0);
                                    }
                                    FUN_108d71098(plVar27,0x61,0,1,0);
code_r0x000108da4380:
                                    uVar23 = 0;
code_r0x000108da4384:
                                    FUN_108d6aaec(plVar27,plVar21,pcVar19,uVar23);
                                    goto code_r0x000108da4388;
                                  case 0x16:
                                    func_0x000108dab6e4(param_1,plVar41);
                                    iVar9 = *(int *)((long)param_1 + 0x54) + 1;
                                    *(int *)((long)param_1 + 0x54) = iVar9;
                                    if ((*pbVar12 & 0xdf) == 0x50) {
                                      uVar23 = 0x99;
                                      iVar32 = 0;
                                    }
                                    else {
                                      uStack_b8 = (char *)((ulong)uStack_b8 & 0xffffffff00000000);
                                      if (pbVar13 == (byte *)0x0) {
                                        iVar32 = 0;
                                      }
                                      else {
                                        FUN_108d934c8(pbVar13,&uStack_b8);
                                        iVar32 = 0x7fffffff;
                                        if ((uint)uStack_b8 != -0x80000000) {
                                          iVar32 = -(uint)uStack_b8;
                                        }
                                        if (-1 < (int)(uint)uStack_b8) {
                                          iVar32 = (uint)uStack_b8;
                                        }
                                      }
                                      uVar23 = 0x9a;
                                    }
                                    FUN_108d71098(plVar27,uVar23,plVar41,iVar9,iVar32);
                                    FUN_108d71098(plVar27,0x23,iVar9,1,0);
code_r0x000108da4550:
                                    FUN_108d71004(plVar27,1);
                                    if (*(char *)(*plVar27 + 0x51) == '\0') {
                                      FUN_108d67c04(plVar27[4],pbVar12,0xffffffff,1,
                                                    0xffffffffffffffff);
                                    }
                                    break;
                                  case 0x17:
                                    FUN_108dc4c70(param_1,&DAT_10f51a472,0);
                                    break;
                                  case 0x18:
                                    lVar38 = puVar47[1];
                                    if (pbVar13 == (byte *)0x0) {
                                      if (lVar38 == 0) {
                                        pcVar24 = (char *)0x0;
                                      }
                                      else {
                                        pcVar24 = (char *)(long)*(int *)(*(long *)(lVar38 + 8) +
                                                                        0x34);
                                      }
                                      pcVar19 = "page_size";
                                      goto code_r0x000108da468c;
                                    }
                                    uStack_b8 = (char *)((ulong)uStack_b8._4_4_ << 0x20);
                                    FUN_108d934c8(pbVar13,&uStack_b8);
                                    *(uint *)(pbVar37 + 0x58) = (uint)uStack_b8;
                                    FUN_108d70994(lVar38,(ulong)uStack_b8 & 0xffffffff,0xffffffff,0)
                                    ;
                                    if ((int)lVar38 == 7) {
                                      pbVar37[0x51] = 1;
                                    }
                                    break;
                                  case 0x19:
                                    uVar29 = puVar47[1];
                                    if (pbVar13 == (byte *)0x0) {
                                      uVar44 = 0xffffffff;
                                    }
                                    else {
                                      pbVar48 = pbVar13;
                                      FUN_108d96384(pbVar13,1,0);
                                      uVar44 = (ulong)((int)pbVar48 != 0);
                                      if (((int)param_3[1] == 0) && (0 < *(int *)(pbVar37 + 0x28)))
                                      {
                                        lVar38 = 0;
                                        lVar33 = 8;
                                        do {
                                          func_0x000108d71494(*(undefined8 *)
                                                               (*(long *)(pbVar37 + 0x20) + lVar33),
                                                              uVar44);
                                          lVar38 = lVar38 + 1;
                                          lVar33 = lVar33 + 0x20;
                                        } while (lVar38 < *(int *)(pbVar37 + 0x28));
                                      }
                                    }
                                    func_0x000108d71494(uVar29,uVar44);
                                    pcVar19 = "secure_delete";
                                    pcVar24 = (char *)(uVar29 & 0xffffffff);
code_r0x000108da468c:
                                    FUN_108dc4c70(param_1,pcVar19,pcVar24);
                                    break;
                                  case 0x1a:
                                    FUN_108d6d9d8(pbVar37);
                                    break;
                                  case 0x1b:
                                    if ((pbVar13 != (byte *)0x0) &&
                                       (pbVar48 = pbVar13, func_0x000108d70e6c(pbVar13,&uStack_b8),
                                       (int)pbVar48 == 0)) {
                                      FUN_108d63284(uStack_b8);
                                    }
                                    pcVar24 = (char *)0xffffffffffffffff;
                                    FUN_108d63284(0xffffffffffffffff);
                                    pcVar19 = "soft_heap_limit";
                                    goto code_r0x000108da468c;
                                  case 0x1c:
                                    plVar27 = param_1;
                                    FUN_108d70f98();
                                    FUN_108d71004();
                                    *(undefined4 *)((long)param_1 + 0x54) = 4;
                                    func_0x000108dab6e4(param_1,plVar41);
                                    if ((((*(char *)(*plVar27 + 0x51) == '\0') &&
                                         (FUN_108d67c04(plVar27[4],&DAT_10f30fc41,0xffffffff,1,0),
                                         *(char *)(*plVar27 + 0x51) == '\0')) &&
                                        (FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f2c4679,0xffffffff,1
                                                       ,0), *(char *)(*plVar27 + 0x51) == '\0')) &&
                                       (FUN_108d67c04(plVar27[4] + 0x70,"width",0xffffffff,1,0),
                                       *(char *)(*plVar27 + 0x51) == '\0')) {
                                      FUN_108d67c04(plVar27[4] + 0xa8,"height",0xffffffff,1,0);
                                    }
                                    for (plVar41 = *(long **)(puVar47[3] + 0x10);
                                        plVar41 != (long *)0x0; plVar41 = (long *)*plVar41) {
                                      puVar47 = (undefined8 *)plVar41[2];
                                      uVar23 = *puVar47;
                                      plVar21 = plVar27;
                                      FUN_108d71098(plVar27,0x61,0,1,0);
                                      FUN_108d6aaec(plVar27,plVar21,uVar23,0);
                                      FUN_108d71098(plVar27,0x1c,0,2,0);
                                      lVar38 = (long)*(short *)((long)puVar47 + 0x44);
                                      FUN_108dbf1d8(lVar38);
                                      FUN_108d71098(plVar27,0x19,lVar38,3,0);
                                      lVar38 = (long)*(short *)((long)puVar47 + 0x42);
                                      FUN_108dbf1d8(lVar38);
                                      FUN_108d71098(plVar27,0x19,lVar38,4,0);
                                      FUN_108d71098(plVar27,0x23,1,4,0);
                                      for (puVar47 = (undefined8 *)puVar47[2];
                                          puVar47 != (undefined8 *)0x0;
                                          puVar47 = (undefined8 *)puVar47[5]) {
                                        uVar23 = *puVar47;
                                        plVar21 = plVar27;
                                        FUN_108d71098(plVar27,0x61,0,2,0);
                                        FUN_108d6aaec(plVar27,plVar21,uVar23,0);
                                        lVar38 = (long)*(short *)((long)puVar47 + 0x54);
                                        FUN_108dbf1d8(lVar38);
                                        FUN_108d71098(plVar27,0x19,lVar38,3,0);
                                        lVar38 = (long)*(short *)puVar47[2];
                                        FUN_108dbf1d8(lVar38);
                                        FUN_108d71098(plVar27,0x19,lVar38,4,0);
                                        FUN_108d71098(plVar27,0x23,1,4,0);
                                      }
                                    }
                                    break;
                                  case 0x1d:
                                    if (pbVar13 == (byte *)0x0) {
                                      pcVar19 = "synchronous";
                                      pcVar24 = (char *)((ulong)*(byte *)(puVar47 + 2) - 1);
                                      goto code_r0x000108da468c;
                                    }
                                    if (pbVar37[0x4f] == 0) {
                                      puVar20 = &UNK_10f51a4ef;
code_r0x000108da44cc:
                                      func_0x000108d6a85c(param_1,puVar20);
                                    }
                                    else {
                                      pbVar48 = pbVar13;
                                      FUN_108d96384(pbVar13,0,1);
                                      bVar4 = (char)pbVar48 + 1U & 3;
                                      if ((((uint)pbVar48 ^ 0xffffffff) & 3) == 0) {
                                        bVar4 = 1;
                                      }
                                      *(byte *)(puVar47 + 2) = bVar4;
                                      FUN_108dc4f1c(pbVar37);
                                    }
                                    break;
                                  case 0x1e:
                                    if ((pbVar13 != (byte *)0x0) &&
                                       (pbVar48 = pbVar37,
                                       func_0x000108d700dc(pbVar37,pbVar13,pbVar42),
                                       pbVar48 != (byte *)0x0)) {
                                      for (lVar38 = *(long *)(pbVar48 + 0x10);
                                          (lVar38 != 0 && ((*(byte *)(lVar38 + 0x5b) & 3) != 2));
                                          lVar38 = *(long *)(lVar38 + 0x28)) {
                                      }
                                      FUN_108d71004(plVar27,6);
                                      *(undefined4 *)((long)param_1 + 0x54) = 6;
                                      func_0x000108dab6e4(param_1,plVar41);
                                      if (((((*(char *)(*plVar27 + 0x51) == '\0') &&
                                            (FUN_108d67c04(plVar27[4],&DAT_10f366d0b,0xffffffff,1,0)
                                            , *(char *)(*plVar27 + 0x51) == '\0')) &&
                                           (FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f68f148,
                                                          0xffffffff,1,0),
                                           *(char *)(*plVar27 + 0x51) == '\0')) &&
                                          ((FUN_108d67c04(plVar27[4] + 0x70,&DAT_10f6389e8,
                                                          0xffffffff,1,0),
                                           *(char *)(*plVar27 + 0x51) == '\0' &&
                                           (FUN_108d67c04(plVar27[4] + 0xa8,&UNK_10f51a524,
                                                          0xffffffff,1,0),
                                           *(char *)(*plVar27 + 0x51) == '\0')))) &&
                                         (FUN_108d67c04(plVar27[4] + 0xe0,&UNK_10f51a52c,0xffffffff,
                                                        1,0), *(char *)(*plVar27 + 0x51) == '\0')) {
                                        FUN_108d67c04(plVar27[4] + 0x118,&DAT_10f51a537,0xffffffff,1
                                                      ,0);
                                      }
                                      FUN_108dafb54(param_1,pbVar48);
                                      sVar25 = *(short *)(pbVar48 + 0x3e);
                                      unaff_x27 = pbVar48;
                                      if (0 < sVar25) {
                                        iVar32 = 0;
                                        iVar9 = 0;
                                        puVar47 = *(undefined8 **)(pbVar48 + 8);
                                        do {
                                          if ((*(byte *)((long)puVar47 + 0x2b) >> 1 & 1) == 0) {
                                            FUN_108d71098(plVar27,0x19,iVar32 - iVar9,1,0);
                                            uVar23 = *puVar47;
                                            plVar41 = plVar27;
                                            FUN_108d71098(plVar27,0x61,0,2,0);
                                            FUN_108d6aaec(plVar27,plVar41,uVar23,0);
                                            pcVar19 = "";
                                            if ((char *)puVar47[3] != (char *)0x0) {
                                              pcVar19 = (char *)puVar47[3];
                                            }
                                            plVar41 = plVar27;
                                            FUN_108d71098(plVar27,0x61,0,3,0);
                                            FUN_108d6aaec(plVar27,plVar41,pcVar19,0);
                                            FUN_108d71098(plVar27,0x19,
                                                          *(char *)(puVar47 + 5) != '\0',4,0);
                                            lVar33 = puVar47[2];
                                            if (lVar33 == 0) {
                                              FUN_108d71098(plVar27,0x1c,0,5,0);
                                            }
                                            else {
                                              plVar41 = plVar27;
                                              FUN_108d71098(plVar27,0x61,0,5,0);
                                              FUN_108d6aaec(plVar27,plVar41,lVar33,0);
                                            }
                                            uVar29 = (ulong)(*(byte *)((long)puVar47 + 0x2b) & 1);
                                            if ((lVar38 != 0) &&
                                               ((*(byte *)((long)puVar47 + 0x2b) & 1) != 0)) {
                                              if ((short)*(ushort *)(pbVar48 + 0x3e) < 1) {
                                                uVar29 = 1;
                                              }
                                              else {
                                                uVar44 = (ulong)*(ushort *)(pbVar48 + 0x3e) + 1;
                                                uVar34 = 1;
                                                psVar28 = *(short **)(lVar38 + 8);
                                                do {
                                                  uVar29 = uVar34;
                                                  if (iVar32 == *psVar28) break;
                                                  uVar34 = uVar34 + 1;
                                                  uVar29 = uVar44;
                                                  psVar28 = psVar28 + 1;
                                                } while (uVar44 != uVar34);
                                              }
                                            }
                                            FUN_108d71098(plVar27,0x19,uVar29,6,0);
                                            FUN_108d71098(plVar27,0x23,1,6,0);
                                            sVar25 = *(short *)(pbVar48 + 0x3e);
                                          }
                                          else {
                                            iVar9 = iVar9 + 1;
                                          }
                                          iVar32 = iVar32 + 1;
                                          puVar47 = puVar47 + 6;
                                        } while (iVar32 < sVar25);
                                      }
                                    }
                                    break;
                                  case 0x1f:
                                    if (pbVar13 == (byte *)0x0) {
                                      pcVar19 = "temp_store";
                                      pcVar24 = (char *)(ulong)pbVar37[0x50];
                                      goto code_r0x000108da468c;
                                    }
                                    FUN_108dc4e1c(param_1,pbVar13);
                                    break;
                                  case 0x20:
                                    if (pbVar13 == (byte *)0x0) {
                                      if (pcRam000000011372e6e8 != (char *)0x0) {
                                        FUN_108d71004(plVar27,1);
                                        pcVar19 = pcRam000000011372e6e8;
                                        if (*(char *)(*plVar27 + 0x51) == '\0') {
                                          FUN_108d67c04(plVar27[4],&DAT_10f51a487,0xffffffff,1,0);
                                          pcVar19 = pcRam000000011372e6e8;
                                        }
code_r0x000108da435c:
                                        FUN_108d71098(plVar27,0x61,0,1,0);
                                        goto code_r0x000108da4380;
                                      }
                                    }
                                    else {
                                      if (*pbVar13 != 0) {
                                        lVar38 = *(long *)pbVar37;
                                        (**(code **)(lVar38 + 0x38))(lVar38,pbVar13,1,&uStack_b8);
                                        if ((int)lVar38 != 0 || (uint)uStack_b8 == 0) {
                                          puVar20 = &UNK_10f51a49c;
                                          goto code_r0x000108da44cc;
                                        }
                                      }
                                      if (pbVar37[0x50] < 2) {
                                        FUN_108dc4eb4(param_1);
                                      }
                                      func_0x000108d5e198(pcRam000000011372e6e8);
                                      if (*pbVar13 == 0) {
                                        pcRam000000011372e6e8 = (char *)0x0;
                                      }
                                      else {
                                        pcVar19 = "%s";
                                        FUN_108d5e0b4();
                                        pcRam000000011372e6e8 = pcVar19;
                                      }
                                    }
                                    break;
                                  case 0x21:
                                    if (((pbVar13 != (byte *)0x0) &&
                                        (pbVar48 = pbVar13, func_0x000108d70e6c(pbVar13,&uStack_b8),
                                        (int)pbVar48 == 0)) && (-1 < (long)uStack_b8)) {
                                      uVar8 = (uint)uStack_b8 & 0x7fffffff;
                                      if (((ulong)uStack_b8 & 0x7ffffff8) != 0) {
                                        uVar8 = 8;
                                      }
                                      *(uint *)(pbVar37 + 0x94) = uVar8;
                                    }
                                    pcVar19 = "threads";
                                    pcVar24 = (char *)(long)*(int *)(pbVar37 + 0x94);
                                    goto code_r0x000108da468c;
                                  case 0x22:
                                    if (pbVar13 != (byte *)0x0) {
                                      uStack_b8 = (char *)((ulong)uStack_b8._4_4_ << 0x20);
                                      FUN_108d934c8(pbVar13,&uStack_b8);
                                      FUN_108d6ea54(pbVar37,(ulong)uStack_b8 & 0xffffffff);
                                    }
                                    if (*(code **)(pbVar37 + 0x118) == FUN_108d6eb5c) {
                                      pcVar24 = (char *)(long)*(int *)(pbVar37 + 0x120);
                                    }
                                    else {
                                      pcVar24 = (char *)0x0;
                                    }
                                    pcVar19 = "wal_autocheckpoint";
                                    goto code_r0x000108da468c;
                                  case 0x23:
                                    uVar31 = 10;
                                    if (*param_3 != 0) {
                                      uVar31 = uVar8;
                                    }
                                    uVar26 = 0;
                                    if (pbVar13 != (byte *)0x0) {
                                      pbVar48 = pbVar13;
                                      FUN_108d5e044(pbVar13,"full");
                                      if ((int)pbVar48 == 0) {
                                        uVar26 = 1;
                                      }
                                      else {
                                        pbVar48 = pbVar13;
                                        FUN_108d5e044(pbVar13,&DAT_10f51a652);
                                        if ((int)pbVar48 == 0) {
                                          uVar26 = 2;
                                        }
                                        else {
                                          pbVar48 = pbVar13;
                                          FUN_108d5e044(pbVar13,&DAT_10f518792);
                                          uVar26 = 3;
                                          if ((int)pbVar48 != 0) {
                                            uVar26 = 0;
                                          }
                                        }
                                      }
                                    }
                                    FUN_108d71004(plVar27,3);
                                    *(undefined4 *)((long)param_1 + 0x54) = 3;
                                    if (((*(char *)(*plVar27 + 0x51) == '\0') &&
                                        (FUN_108d67c04(plVar27[4],&DAT_10f51429e,0xffffffff,1,0),
                                        *(char *)(*plVar27 + 0x51) == '\0')) &&
                                       (FUN_108d67c04(plVar27[4] + 0x38,&DAT_10f3dd908,0xffffffff,1,
                                                      0), *(char *)(*plVar27 + 0x51) == '\0')) {
                                      FUN_108d67c04(plVar27[4] + 0x70,&UNK_10f51a65a,0xffffffff,1,0)
                                      ;
                                    }
                                    FUN_108d71098(plVar27,0xb,uVar31,uVar26,1);
                                    uVar23 = 3;
                                    goto code_r0x000108da4670;
                                  case 0x24:
                                    break;
                                  case 0x25:
                                    if (pbVar13 != (byte *)0x0) {
                                      uVar29 = 0;
                                      uVar8 = 0;
                                      goto code_r0x000108da3f7c;
                                    }
                                    break;
                                  case 0x26:
                                    if (pbVar13 != (byte *)0x0) {
                                      pbVar48 = pbVar13;
                                      _strlen(pbVar13);
                                      FUN_108d5eff4(pbVar37,pbVar42,pbVar13,
                                                    (uint)pbVar48 & 0x3fffffff);
                                    }
                                    break;
                                  case 0x27:
                                    if (pbVar13 != (byte *)0x0) {
                                      pbVar48 = pbVar13;
                                      _strlen(pbVar13);
                                      FUN_108d5f470(pbVar37,pbVar42,pbVar13,
                                                    (uint)pbVar48 & 0x3fffffff);
                                    }
                                  }
                                }
                                goto LAB_108da077c;
                              }
                              pbStack_e8 = pbVar13;
                              if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
                              if (pbVar13 != (byte *)0x0) {
                                lVar38 = 0;
                                do {
                                  if ((ulong)pbVar13[lVar38] == 0) {
                                    cVar5 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar38]];
                                    cVar36 = '\0';
LAB_108da12dc:
                                    if (cVar36 != cVar5) goto LAB_108da077c;
                                    break;
                                  }
                                  cVar36 = (&UNK_10dfa05fd)[pbVar13[lVar38]];
                                  cVar5 = (&UNK_10dfa05fd)[(byte)(&UNK_10f516f50)[lVar38]];
                                  if (cVar36 != cVar5) goto LAB_108da12dc;
                                  lVar38 = lVar38 + 1;
                                } while (lVar38 != 2);
                                pbVar48 = pbVar13;
                                _strlen();
                                if (((ulong)pbVar48 & 0x3fffffff) == 5) {
                                  uStack_b8 = (char *)((ulong)uStack_b8 & 0xffffffffffffff00);
                                  func_0x000108d5eaa4(pbVar13 + 2,2,&uStack_b8);
                                  uRam0000000113298d98 = (undefined1)uStack_b8;
                                }
                                goto LAB_108da077c;
                              }
                              pcVar19 = "%02x";
                              FUN_108d5e0b4(&DAT_10f3212df);
                              puVar20 = &UNK_10f516f3a;
                            }
                          }
                        }
                      }
                      func_0x000108d5e0fc(param_1,puVar20,pcVar19);
                      func_0x000108d5e198(pcVar19);
                      pbStack_e8 = pbVar13;
                      goto LAB_108da077c;
                    }
                    if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
                    if (pbVar13 == (byte *)0x0) {
                      pcVar19 = "%d";
                      FUN_108d5e0b4("%d");
                      puVar20 = &UNK_10f516eb7;
                      goto LAB_108da0e98;
                    }
                    pbVar48 = pbVar13;
                    _atoi();
                    lVar38 = *(long *)(unaff_x27 + 0x30);
                    *(int *)(lVar38 + 0xc) = (int)pbVar48;
                  }
                  *(undefined4 *)(lVar38 + 4) = 1;
                  FUN_108d60a40(*(undefined8 *)(unaff_x27 + 0x28));
                  goto LAB_108da077c;
                }
                if (pbVar13 != (byte *)0x0) {
                  pbVar48 = pbVar13;
                  _atoi();
                  uRam0000000113298d9c = SUB84(pbVar48,0);
                  goto LAB_108da077c;
                }
                pcVar19 = "%d";
                FUN_108d5e0b4("%d");
                puVar20 = &UNK_10f516e96;
                goto LAB_108da0b04;
              }
              if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
              uVar23 = 1;
            }
            FUN_108d5e848(unaff_x27,pbVar13,uVar23);
            goto LAB_108da077c;
          }
          puVar20 = &UNK_10f516e7a;
          puVar15 = &UNK_10f51759f;
        }
LAB_108da0b44:
        func_0x000108d5e0fc(param_1,puVar20,puVar15);
        goto LAB_108da077c;
      }
      if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
      FUN_108d5e444();
      pcVar19 = "%d";
      FUN_108d5e0b4("%d");
      puVar20 = &UNK_10f516e5b;
    }
    else {
      pbVar14 = pbVar12;
      FUN_108d5e044(pbVar12,&UNK_10f516e28);
      if ((pbVar13 == (byte *)0x0) || ((int)pbVar14 != 0)) {
        if (((pbVar13 == (byte *)0x0) && ((int)pbVar14 == 0)) && (unaff_x27 != (byte *)0x0)) {
          puVar20 = &UNK_10f516e28;
          goto LAB_108da099c;
        }
      }
      else if (unaff_x27 != (byte *)0x0) {
        pbVar14 = pbVar13;
        FUN_108d96384(pbVar13,1,1);
        **(uint **)(unaff_x27 + 0x28) = (uint)((int)pbVar14 != 0);
      }
      pbVar14 = pbVar12;
      FUN_108d5e044(pbVar12,&UNK_10f516e3a);
      if ((pbVar13 == (byte *)0x0) || ((int)pbVar14 != 0)) {
        pbVar14 = pbVar12;
        FUN_108d5e044(pbVar12,&UNK_10f516e49);
        if ((pbVar13 == (byte *)0x0) || ((int)pbVar14 != 0)) goto LAB_108da09f0;
        if (unaff_x27 == (byte *)0x0) goto LAB_108da077c;
        pbVar48 = pbVar13;
        _strlen(pbVar13);
        FUN_108d5e338(unaff_x27,pbVar13,(uint)pbVar48 & 0x3fffffff);
        pcVar19 = "%d";
        FUN_108d5e0b4("%d");
        puVar20 = &UNK_10f516e49;
      }
      else {
        FUN_108d5e254(pbVar37,pbVar13);
        pcVar19 = "%d";
        FUN_108d5e0b4("%d");
        puVar20 = &UNK_10f516e3a;
      }
    }
LAB_108da0b04:
    func_0x000108d5e0fc(param_1,puVar20,pcVar19);
  }
  else {
    if (iVar9 != 0) {
      if (pcStack_90 != (char *)0x0) {
        func_0x000108d6a85c(param_1,&UNK_10f517517);
        func_0x000108d5e198(pcStack_90);
      }
      *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
      *(int *)(param_1 + 3) = iVar9;
      goto LAB_108da077c;
    }
    if (pcStack_90 == (char *)0x0) goto LAB_108da077c;
    iVar9 = *(int *)((long)param_1 + 0x54) + 1;
    *(int *)((long)param_1 + 0x54) = iVar9;
    plVar41 = plVar27;
    FUN_108d71098(plVar27,0x61,0,iVar9,0);
    FUN_108d6aaec(plVar27,plVar41,pcVar19,0);
    FUN_108d71004(plVar27,1);
    if (*(char *)(*plVar27 + 0x51) == '\0') {
      FUN_108d67c04(plVar27[4],"result",0xffffffff,1,0);
    }
    FUN_108d71098(plVar27,0x23,iVar9,1,0);
    pcVar19 = pcStack_90;
  }
  func_0x000108d5e198(pcVar19);
  goto LAB_108da077c;
code_r0x000108da0da4:
  iVar22 = uVar31 - 1;
  if (-1 < iVar30) {
    iVar9 = uVar31 + 1;
    iVar22 = iVar32;
  }
  iVar32 = iVar22;
  unaff_x27 = (byte *)(ulong)uVar31;
  pbStack_e8 = pbVar13;
  if (iVar32 < iVar9) goto LAB_108da077c;
  goto LAB_108da0d70;
  while( true ) {
    uVar8 = ((uint)(int)(char)(bVar4 << 1) >> 7 & 0xfffffff9) + (uint)bVar4 & 0xf |
            (uVar8 & 0xff) << 4;
    if ((uVar29 & 1) != 0) {
      *(char *)((long)&uStack_b8 + (uVar29 >> 1 & 0x7fffffff)) = (char)uVar8;
    }
    uVar29 = uVar29 + 1;
    if (uVar29 == 0x50) break;
code_r0x000108da3f7c:
    bVar4 = pbVar13[uVar29];
    if (((byte)(&UNK_10dfa0749)[bVar4] >> 3 & 1) == 0) break;
  }
  if ((pbVar12[3] & 0xf) == 0xb) {
    FUN_108d5eff4(pbVar37,pbVar42);
  }
  else {
    FUN_108d5f470(pbVar37,pbVar42,&uStack_b8,uVar29 >> 1 & 0x7fffffff);
  }
  goto LAB_108da077c;
  while (lVar38 = lVar38 + 1, lVar38 != 6) {
code_r0x000108da2f7c:
    pbVar42 = pbVar13;
    func_0x000108d5ea34(pbVar13,(&PTR_s_delete_110ac4338)[lVar38],(uint)pbVar48 & 0x3fffffff);
    if ((int)pbVar42 == 0) goto code_r0x000108da2fb4;
  }
code_r0x000108da2f9c:
  if ((int)param_3[1] == 0) {
    plVar41 = (long *)0x0;
    *(undefined4 *)(param_3 + 1) = 1;
  }
  lVar38 = 0xffffffff;
code_r0x000108da2fb4:
  uVar8 = *(uint *)(pbVar37 + 0x28);
  if (0 < (int)uVar8) {
    lVar33 = (ulong)uVar8 * 0x20 + -0x18;
    uVar29 = (ulong)uVar8;
    do {
      if ((*(long *)(*(long *)(pbVar37 + 0x20) + lVar33) != 0) &&
         ((((ulong)plVar41 & 0xffffffff) + 1 == uVar29 || ((int)param_3[1] == 0)))) {
        iVar9 = (int)uVar29 + -1;
        FUN_108d6aaa4(plVar27,iVar9);
        FUN_108d71098(plVar27,0xc,iVar9,1,lVar38);
      }
      lVar33 = lVar33 + -0x20;
      bVar1 = 1 < uVar29;
      uVar29 = uVar29 - 1;
    } while (bVar1);
  }
code_r0x000108da4388:
  uVar23 = 1;
code_r0x000108da4670:
  FUN_108d71098(plVar27,0x23,1,uVar23,0);
  goto LAB_108da077c;
  while( true ) {
    puVar20 = *ppuVar43;
    ppuVar43 = ppuVar43 + 2;
    if (puVar20 == (undefined *)0x0) break;
code_r0x000108da1448:
    pbVar48 = pbVar13;
    FUN_108d5e044(pbVar13,puVar20);
    if ((int)pbVar48 == 0) {
      bVar4 = 2;
      if (*(byte *)(ppuVar43 + -1) != 0) {
        bVar4 = *(byte *)(ppuVar43 + -1);
      }
      pbVar37[0x4e] = bVar4;
      *(byte *)(lVar38 + 0x71) = bVar4;
      goto LAB_108da077c;
    }
  }
  func_0x000108d6a85c(param_1,&UNK_10f51a62a);
LAB_108da077c:
  while( true ) {
    func_0x000108d60660(pbVar37,pbVar12);
    func_0x000108d60660(pbVar37,pbVar13);
LAB_108da0794:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_108da1208:
    lVar38 = *(long *)(unaff_x27 + 0x30);
    *(uint *)(lVar38 + 0x2c) = *(uint *)(lVar38 + 0x2c) & 0xfffffffb;
    lVar33 = *(long *)(unaff_x27 + 0x28);
    *(uint *)(lVar33 + 0x2c) = *(uint *)(lVar33 + 0x2c) & 0xfffffffb;
    *(uint *)(lVar38 + 0x2c) = *(uint *)(lVar38 + 0x2c) | 2;
    uVar8 = *(uint *)(lVar33 + 0x2c) | 2;
LAB_108da12cc:
    *(uint *)(lVar33 + 0x2c) = uVar8;
    pbVar13 = pbStack_e8;
    pbVar12 = pbStack_f8;
  }
  return;
}



/* Entry: 108da4e20; end: 108da4f43;  */

long FUN_108da4e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000108dc53ec(param_1,0x6e,param_2);
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000108daaabc(param_1,param_3,1);
    *(long *)(lVar1 + 0x28) = lVar2;
    lVar2 = param_1;
    FUN_108daa624(param_1,param_4,1,0);
    *(long *)(lVar1 + 0x20) = lVar2;
    *(undefined1 *)(lVar1 + 1) = param_5;
  }
  FUN_108d93e84(param_1,param_3);
  func_0x000108d93df0(param_1,param_4);
  return lVar1;
}



/* Entry: 108da4f44; end: 108da501b;  */

long FUN_108da4f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000108dc53ec(param_1,0x6d,param_2);
  if (lVar1 != 0) {
    lVar2 = param_1;
    FUN_108daa624(param_1,param_3,1,0);
    *(long *)(lVar1 + 0x20) = lVar2;
    *(undefined1 *)(lVar1 + 1) = 10;
  }
  func_0x000108d93df0(param_1,param_3);
  return lVar1;
}



/* Entry: 108da501c; end: 108da512f;  */

/* WARNING: Possible PIC construction at 0x000108d94010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d94028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d94014) */
/* WARNING: Removing unreachable block (ram,0x000108d9402c) */

void FUN_108da501c(long *param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  int *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 unaff_x21;
  int *unaff_x22;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_64 [4];
  
  lVar8 = *param_1;
  if ((*(char *)(lVar8 + 0x51) == '\0') && (plVar5 = param_1, FUN_108d9605c(), (int)plVar5 == 0)) {
    lVar9 = *(long *)(param_2 + 4);
    uVar2 = *(uint *)(lVar8 + 0x28);
    if (0 < (int)uVar2) {
      uVar11 = 0;
      uVar10 = *(undefined8 *)(param_2 + 6);
      lVar12 = *(long *)(lVar8 + 0x20);
      do {
        uVar13 = (ulong)(uVar11 ^ uVar11 < 2);
        if (lVar9 == 0) {
LAB_108da509c:
          lVar7 = *(long *)(lVar12 + uVar13 * 0x20 + 0x18) + 0x38;
          func_0x000108d93668(lVar7,uVar10,auStack_64);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
            func_0x000108db1ce8(param_1);
            goto SUB_108d93fd8;
          }
        }
        else {
          uVar6 = *(undefined8 *)(lVar12 + uVar13 * 0x20);
          FUN_108d5e044(uVar6,lVar9);
          if ((int)uVar6 == 0) goto LAB_108da509c;
        }
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    if (param_3 == 0) {
      func_0x000108d6a85c(param_1,&UNK_10f51ab37);
    }
    else {
      FUN_108db169c(param_1,lVar9);
    }
    *(undefined1 *)((long)param_1 + 0x1d) = 1;
  }
SUB_108d93fd8:
  if (param_2 == (int *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  piVar4 = param_2;
  if (0 < *param_2) {
    unaff_x21 = 0;
    unaff_x22 = param_2 + 0x14;
    unaff_x30 = 0x108d94014;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    piVar4 = *(int **)(param_2 + 4);
    unaff_x19 = param_2;
    unaff_x20 = lVar8;
    unaff_x29 = puVar1;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((piVar4 < *(int **)(lVar8 + 0x170)) || (*(int **)(lVar8 + 0x178) <= piVar4)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)piVar4;
      }
      else {
        uVar2 = (uint)*(ushort *)(lVar8 + 0x150);
      }
      **(int **)(lVar8 + 0x328) = **(int **)(lVar8 + 0x328) + uVar2;
      return;
    }
    if ((*(int **)(lVar8 + 0x170) <= piVar4) && (piVar4 < *(int **)(lVar8 + 0x178))) {
      *(undefined8 *)piVar4 = *(undefined8 *)(lVar8 + 0x168);
      *(int **)(lVar8 + 0x168) = piVar4;
      *(int *)(lVar8 + 0x154) = *(int *)(lVar8 + 0x154) + -1;
      return;
    }
  }
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (piVar4 == (int *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (piRam0000000113829af0 != (int *)0x0) {
      (*pcRam0000000113297998)();
    }
    piVar3 = piVar4;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)piVar3;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(piVar4);
    piVar4 = piRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (piRam0000000113829af0 == (int *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar4);
  return;
}



/* Entry: 108da5130; end: 108da5333;  */

/* WARNING: Possible PIC construction at 0x000108da51e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108da52b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d6a8a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108da52bc) */
/* WARNING: Removing unreachable block (ram,0x000108da5310) */
/* WARNING: Removing unreachable block (ram,0x000108d6a85c) */
/* WARNING: Removing unreachable block (ram,0x000108d6a8a8) */
/* WARNING: Removing unreachable block (ram,0x000108d6a898) */
/* WARNING: Removing unreachable block (ram,0x000108da52c0) */
/* WARNING: Removing unreachable block (ram,0x000108da52c8) */
/* WARNING: Removing unreachable block (ram,0x000108db0ccc) */
/* WARNING: Removing unreachable block (ram,0x000108db0d48) */
/* WARNING: Removing unreachable block (ram,0x000108db0d14) */
/* WARNING: Removing unreachable block (ram,0x000108db0d54) */
/* WARNING: Removing unreachable block (ram,0x000108db0d20) */
/* WARNING: Removing unreachable block (ram,0x000108db0d2c) */
/* WARNING: Removing unreachable block (ram,0x000108db0d5c) */
/* WARNING: Removing unreachable block (ram,0x000108db0d38) */
/* WARNING: Removing unreachable block (ram,0x000108db0d44) */
/* WARNING: Removing unreachable block (ram,0x000108db0d60) */
/* WARNING: Removing unreachable block (ram,0x000108db0d84) */
/* WARNING: Removing unreachable block (ram,0x000108db0da8) */
/* WARNING: Removing unreachable block (ram,0x000108db0db4) */
/* WARNING: Removing unreachable block (ram,0x000108db0db8) */
/* WARNING: Removing unreachable block (ram,0x000108db0de0) */
/* WARNING: Removing unreachable block (ram,0x000108db0dec) */
/* WARNING: Removing unreachable block (ram,0x000108db0e64) */
/* WARNING: Removing unreachable block (ram,0x000108db0e50) */
/* WARNING: Removing unreachable block (ram,0x000108db0e70) */
/* WARNING: Removing unreachable block (ram,0x000108db0edc) */
/* WARNING: Removing unreachable block (ram,0x000108db0eec) */
/* WARNING: Removing unreachable block (ram,0x000108db0f00) */
/* WARNING: Removing unreachable block (ram,0x000108db0f18) */
/* WARNING: Removing unreachable block (ram,0x000108db0f4c) */
/* WARNING: Removing unreachable block (ram,0x000108db0f54) */
/* WARNING: Removing unreachable block (ram,0x000108db0f68) */
/* WARNING: Removing unreachable block (ram,0x000108db0f8c) */
/* WARNING: Removing unreachable block (ram,0x000108db0f94) */
/* WARNING: Removing unreachable block (ram,0x000108db0ff4) */
/* WARNING: Removing unreachable block (ram,0x000108db1044) */
/* WARNING: Removing unreachable block (ram,0x000108db1058) */
/* WARNING: Removing unreachable block (ram,0x000108db105c) */
/* WARNING: Removing unreachable block (ram,0x000108db1068) */
/* WARNING: Removing unreachable block (ram,0x000108db1070) */
/* WARNING: Removing unreachable block (ram,0x000108db109c) */
/* WARNING: Removing unreachable block (ram,0x000108db107c) */
/* WARNING: Removing unreachable block (ram,0x000108db1088) */
/* WARNING: Removing unreachable block (ram,0x000108db10a4) */
/* WARNING: Removing unreachable block (ram,0x000108db10c8) */
/* WARNING: Removing unreachable block (ram,0x000108db10d8) */
/* WARNING: Removing unreachable block (ram,0x000108db112c) */
/* WARNING: Removing unreachable block (ram,0x000108d6a8a4) */
/* WARNING: Removing unreachable block (ram,0x000108d6a8cc) */

void FUN_108da5130(ulong *param_1,undefined8 *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  ulong *unaff_x21;
  ulong uVar9;
  int iVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_50;
  undefined1 auStack_44 [4];
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = (undefined8 *)*param_1;
  puVar4 = param_1;
  FUN_108d9605c();
  if ((int)puVar4 != 0) {
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar9 = *param_1;
    iVar7 = *(int *)(uVar9 + 0x28);
    if (0 < iVar7) {
      iVar10 = 0;
      lVar12 = *(long *)(uVar9 + 0x20);
      do {
        plVar13 = *(long **)(*(long *)(lVar12 + 0x18) + 0x10);
        if (plVar13 != (long *)0x0) {
          do {
            FUN_108dc6420(param_1,plVar13[2],0);
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
          iVar7 = *(int *)(uVar9 + 0x28);
        }
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 0x20;
      } while (iVar10 < iVar7);
    }
    return;
  }
  if ((param_3 == (ulong *)0x0) || (*param_3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    FUN_108d95eb4(puVar5,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_108dabd84();
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    bVar2 = *(byte *)((long)puVar8 + 0x4e);
    puVar6 = puVar8 + 0x52;
    func_0x000108d93668(puVar6,puVar5,auStack_44);
    if ((puVar6 == (undefined8 *)0x0) || (puVar6[2] == 0 || puVar6[2] + (ulong)bVar2 * 0x28 == 0x28)
       ) {
      unaff_x30 = 0x108da51e4;
      register0x00000008 = (BADSPACEBASE *)&uStack_50;
      unaff_x19 = param_1;
      unaff_x20 = puVar8;
      unaff_x21 = param_3;
      unaff_x22 = param_2;
      unaff_x29 = puVar1;
    }
    else {
      FUN_108dc63a0(param_1,puVar5);
    }
  }
  else {
    puVar4 = param_1;
    FUN_108dabe00(param_1,param_2,param_3,&uStack_50);
    if ((int)puVar4 < 0) {
      return;
    }
    puVar5 = puVar8;
    func_0x000108dabd44(puVar8,uStack_50);
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    uVar11 = *(undefined8 *)(puVar8[4] + ((ulong)puVar4 & 0xffffffff) * 0x20);
    puVar6 = puVar8;
    func_0x000108d700dc(puVar8,puVar5,uVar11);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_108d93428(puVar8,puVar5,uVar11);
      unaff_x30 = 0x108da52bc;
      register0x00000008 = (BADSPACEBASE *)&uStack_50;
      unaff_x19 = param_1;
      unaff_x20 = puVar8;
      unaff_x21 = puVar4;
      unaff_x22 = puVar5;
      unaff_x29 = puVar1;
    }
    else {
      FUN_108dc6420(param_1,puVar6,0);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if (puVar8 != (undefined8 *)0x0) {
    if (puVar8[0x65] != 0) {
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((puVar5 < (undefined8 *)puVar8[0x2e]) || ((undefined8 *)puVar8[0x2f] <= puVar5)) {
        (*pcRam0000000113297950)();
        uVar3 = (uint)puVar5;
      }
      else {
        uVar3 = (uint)*(ushort *)(puVar8 + 0x2a);
      }
      *(int *)puVar8[0x65] = *(int *)puVar8[0x65] + uVar3;
      return;
    }
    if (((undefined8 *)puVar8[0x2e] <= puVar5) && (puVar5 < (undefined8 *)puVar8[0x2f])) {
      *puVar5 = puVar8[0x2d];
      puVar8[0x2d] = puVar5;
      *(int *)((long)puVar8 + 0x154) = *(int *)((long)puVar8 + 0x154) + -1;
      return;
    }
  }
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar8 = puVar5;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar8;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar5);
    puVar5 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar5);
  return;
}



/* Entry: 108da5334; end: 108da54db;  */

long * FUN_108da5334(long *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 in_stack_ffffffffffffffc8;
  
  lVar9 = *param_1;
  plVar4 = param_1;
  FUN_108d9605c();
  if ((int)plVar4 != 0) {
    return plVar4;
  }
  if (param_2 == (undefined8 *)0x0) {
    iVar7 = *(int *)(lVar9 + 0x28);
    if (0 < iVar7) {
      iVar10 = 0;
      do {
        if (iVar10 != 1) {
          func_0x000108dc653c(param_1,iVar10);
          iVar7 = *(int *)(lVar9 + 0x28);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar7);
    }
    goto LAB_108da54ac;
  }
  lVar3 = lVar9;
  lVar5 = lVar9;
  if (*(int *)(param_3 + 8) == 0) {
    lVar2 = lVar9;
    func_0x000108dac014(lVar9,param_2);
    if (-1 < (int)lVar2) {
      func_0x000108dc653c(param_1,lVar2);
      goto LAB_108da54ac;
    }
    FUN_108d95eb4(lVar9,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_108dabd84();
    if (lVar3 == 0) goto LAB_108da54ac;
    FUN_108d93428(lVar9,lVar3,0);
    if (lVar5 != 0) goto LAB_108da5468;
    uVar11 = 0;
LAB_108da5488:
    plVar4 = param_1;
    FUN_108d6a7b0(param_1,0,lVar3,uVar11);
    if (plVar4 != (long *)0x0) {
      lVar5 = 0;
      goto LAB_108da549c;
    }
  }
  else {
    plVar4 = param_1;
    FUN_108dabe00(param_1,param_2,param_3,&stack0xffffffffffffffc8);
    if ((int)plVar4 < 0) goto LAB_108da54ac;
    uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + ((ulong)plVar4 & 0xffffffff) * 0x20);
    func_0x000108dabd44(lVar9,in_stack_ffffffffffffffc8);
    if (lVar3 == 0) goto LAB_108da54ac;
    FUN_108d93428(lVar9,lVar3,uVar11);
    if (lVar5 == 0) goto LAB_108da5488;
LAB_108da5468:
    plVar4 = *(long **)(lVar5 + 0x18);
LAB_108da549c:
    func_0x000108dc6600(param_1,plVar4,lVar5);
  }
  func_0x000108d60660(lVar9,lVar3);
LAB_108da54ac:
  FUN_108d70f98();
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  uVar6 = uVar1;
  if (*(int *)(param_1[6] + 0x60) <= (int)uVar1) {
    plVar4 = param_1;
    FUN_108d71134();
    if ((int)plVar4 != 0) {
      return (long *)0x1;
    }
    uVar6 = *(uint *)((long)param_1 + 0x3c);
  }
  *(uint *)((long)param_1 + 0x3c) = uVar6 + 1;
  puVar8 = (undefined1 *)(param_1[1] + (long)(int)uVar1 * 0x18);
  *puVar8 = 0x90;
  puVar8[3] = 0;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined4 *)(puVar8 + 8) = 0;
  *(undefined4 *)(puVar8 + 0xc) = 0;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  puVar8[1] = 0;
  return (long *)(ulong)uVar1;
}



/* Entry: 108da54dc; end: 108da5e8b;  */

void FUN_108da54dc(long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined1 auStack_64 [4];
  
  lVar14 = *param_1;
  uVar2 = *(undefined4 *)(lVar14 + 0x2c);
  if ((*(char *)(lVar14 + 0x51) == '\0') &&
     (plVar4 = param_1, FUN_108dafaec(param_1,0,param_2 + 8), plVar4 != (long *)0x0)) {
    if (plVar4[0xd] == 0) {
      uVar18 = 0xfff0bdc0;
    }
    else {
      uVar3 = *(uint *)(*param_1 + 0x28);
      if ((int)uVar3 < 1) {
        uVar18 = 0;
      }
      else {
        uVar11 = 0;
        plVar8 = (long *)(*(long *)(*param_1 + 0x20) + 0x18);
        do {
          uVar18 = uVar11;
          if (*plVar8 == plVar4[0xd]) break;
          uVar11 = uVar11 + 1;
          plVar8 = plVar8 + 4;
          uVar18 = (ulong)uVar3;
        } while (uVar3 != uVar11);
      }
    }
    uVar16 = *(undefined8 *)
              (*(long *)(lVar14 + 0x20) +
              (-(uVar18 >> 0x1f & 1) & 0xffffffe000000000 | (uVar18 & 0xffffffff) << 5));
    *(uint *)(lVar14 + 0x2c) = *(uint *)(lVar14 + 0x2c) | 0x200000;
    lVar15 = lVar14;
    FUN_108d95eb4(lVar14,*param_3,*(undefined4 *)(param_3 + 1));
    FUN_108dabd84();
    if (lVar15 != 0) {
      lVar5 = lVar14;
      func_0x000108d700dc(lVar14,lVar15,uVar16);
      if ((lVar5 == 0) && (lVar5 = lVar14, FUN_108d93428(lVar14,lVar15,uVar16), lVar5 == 0)) {
        plVar8 = param_1;
        FUN_108dc7400(param_1,*plVar4);
        if (((int)plVar8 != 0) ||
           (plVar8 = param_1, FUN_108dabe80(param_1,lVar15), (int)plVar8 != 0)) goto LAB_108da5514;
        if (plVar4[3] == 0) {
          plVar8 = param_1;
          FUN_108dabcbc(param_1,0x1a,uVar16,*plVar4,0);
          if (((int)plVar8 == 0) &&
             (plVar8 = param_1, FUN_108dafb54(param_1,plVar4), (int)plVar8 == 0)) {
            if ((*(byte *)((long)plVar4 + 0x46) >> 4 & 1) == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar4 + 0xb;
              do {
                plVar9 = (long *)*plVar8;
                plVar8 = plVar9 + 5;
              } while (*plVar9 != lVar14);
              plVar8 = (long *)0x0;
              if (*(long *)(*(long *)plVar9[2] + 0x98) != 0) {
                plVar8 = plVar9;
              }
            }
            plVar9 = param_1;
            FUN_108d70f98();
            if (plVar9 != (long *)0x0) {
              FUN_108dabf20(param_1,plVar8 != (long *)0x0,uVar18);
              func_0x000108dac9bc(param_1,uVar18);
              if (plVar8 != (long *)0x0) {
                iVar1 = *(int *)((long)param_1 + 0x54) + 1;
                *(int *)((long)param_1 + 0x54) = iVar1;
                plVar6 = plVar9;
                FUN_108d71098(plVar9,0x61,0,iVar1,0);
                FUN_108d6aaec(plVar9,plVar6,lVar15,0);
                plVar6 = plVar9;
                FUN_108d71098(plVar9,0x98,iVar1,0,0);
                FUN_108d6aaec(plVar9,plVar6,plVar8,0xfffffff6);
                plVar8 = param_1;
                if ((long *)param_1[0x38] != (long *)0x0) {
                  plVar8 = (long *)param_1[0x38];
                }
                *(undefined1 *)((long)plVar8 + 0x21) = 1;
              }
              pbVar10 = (byte *)*plVar4;
              if ((pbVar10 != (byte *)0xffffffffffffffff) &&
                 (bVar13 = *pbVar10, pbVar12 = pbVar10, bVar13 != 0)) {
                do {
                  if (bVar13 < 0xc0) {
                    pbVar12 = pbVar12 + 1;
                    bVar13 = *pbVar12;
                  }
                  else {
                    do {
                      pbVar12 = pbVar12 + 1;
                      bVar13 = *pbVar12;
                    } while ((char)bVar13 < -0x40);
                  }
                } while (bVar13 != 0 && pbVar12 != (byte *)0xffffffffffffffff);
              }
              if (((*(byte *)(lVar14 + 0x2e) >> 3 & 1) != 0) &&
                 (plVar8 = param_1, func_0x000108dc74b8(param_1,pbVar10,plVar4[0xd]),
                 plVar8 != (long *)0x0)) {
                func_0x000108dac88c(param_1,&UNK_10f51ae1d);
                func_0x000108d60660(lVar14,plVar8);
              }
              func_0x000108dac88c(param_1,&UNK_10f51ae62);
              lVar5 = lVar14;
              func_0x000108d700dc(lVar14,&UNK_10f5191e1,uVar16);
              if (lVar5 != 0) {
                func_0x000108dac88c(param_1,&UNK_10f51afe2);
              }
              plVar8 = param_1;
              FUN_108dc7520(param_1,plVar4);
              if (plVar8 != (long *)0x0) {
                func_0x000108dac88c(param_1,&UNK_10f51b01c);
                func_0x000108d60660(lVar14,plVar8);
              }
              if ((*(byte *)(lVar14 + 0x2e) >> 3 & 1) != 0) {
                lVar5 = plVar4[0xd] + 0x50;
                func_0x000108d93668(lVar5,*plVar4,auStack_64);
                if (lVar5 != 0) {
                  for (puVar17 = *(undefined8 **)(lVar5 + 0x10); puVar17 != (undefined8 *)0x0;
                      puVar17 = (undefined8 *)puVar17[3]) {
                    plVar8 = (long *)*puVar17;
                    if (plVar8 != plVar4) {
                      FUN_108dc75e4(param_1,plVar8,*plVar8);
                    }
                  }
                }
              }
              FUN_108dc75e4(param_1,plVar4,lVar15);
            }
          }
          goto LAB_108da5514;
        }
        puVar7 = &UNK_10f51ae02;
      }
      else {
        puVar7 = &UNK_10f51adc7;
      }
      func_0x000108d6a85c(param_1,puVar7);
    }
  }
  else {
    lVar15 = 0;
  }
LAB_108da5514:
  func_0x000108d93fd8(lVar14,param_2);
  func_0x000108d60660(lVar14,lVar15);
  *(undefined4 *)(lVar14 + 0x2c) = uVar2;
  return;
}



/* Entry: 108da5e8c; end: 108da6223;  */

long * FUN_108da5e8c(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  
  puVar10 = (undefined8 *)param_1[0x44];
  if (puVar10 == (undefined8 *)0x0) {
    return param_1;
  }
  lVar11 = *param_1;
  plVar3 = param_1;
  FUN_108dc7a44();
  param_1[0x4b] = 0;
  if (*(int *)((long)puVar10 + 0x4c) < 1) {
    return plVar3;
  }
  if (*(char *)(lVar11 + 0xa1) != '\0') {
    plVar3 = (long *)(puVar10[0xd] + 8);
    FUN_108d93af0(plVar3,*puVar10,puVar10);
    if (plVar3 != (long *)0x0) {
      *(undefined1 *)(lVar11 + 0x51) = 1;
      return plVar3;
    }
    param_1[0x44] = 0;
    return (long *)0x0;
  }
  if (param_2 != (int *)0x0) {
    *(int *)(param_1 + 0x48) = param_2[2] + (*param_2 - (int)param_1[0x47]);
  }
  lVar4 = lVar11;
  FUN_108d6a8e0(lVar11,&UNK_10f51b267);
  if (puVar10[0xd] == 0) {
    uVar12 = 0xfff0bdc0;
  }
  else {
    uVar2 = *(uint *)(lVar11 + 0x28);
    if ((int)uVar2 < 1) {
      uVar12 = 0;
    }
    else {
      uVar8 = 0;
      plVar3 = (long *)(*(long *)(lVar11 + 0x20) + 0x18);
      do {
        uVar12 = uVar8;
        if (*plVar3 == puVar10[0xd]) break;
        uVar8 = uVar8 + 1;
        plVar3 = plVar3 + 4;
        uVar12 = (ulong)uVar2;
      } while (uVar2 != uVar8);
    }
  }
  FUN_108dac88c(param_1,&UNK_10f51b27f);
  func_0x000108d60660(lVar11,lVar4);
  plVar3 = param_1;
  FUN_108d70f98();
  func_0x000108dac9bc(param_1,uVar12);
  FUN_108d71098(plVar3,0x90,0,0,0);
  FUN_108d6a8e0(lVar11,&UNK_10f51b2d7);
  FUN_108dacaa4(plVar3,uVar12,lVar11);
  iVar1 = *(int *)((long)param_1 + 0x54) + 1;
  *(int *)((long)param_1 + 0x54) = iVar1;
  uVar9 = *puVar10;
  plVar5 = plVar3;
  FUN_108d71098(plVar3,0x61,0,iVar1,0);
  FUN_108d6aaec(plVar3,plVar5,uVar9,0);
  uVar2 = *(uint *)((long)plVar3 + 0x3c);
  uVar6 = uVar2;
  if (*(int *)(plVar3[6] + 0x60) <= (int)uVar2) {
    plVar5 = plVar3;
    FUN_108d71134();
    if ((int)plVar5 != 0) {
      return (long *)0x1;
    }
    uVar6 = *(uint *)((long)plVar3 + 0x3c);
  }
  *(uint *)((long)plVar3 + 0x3c) = uVar6 + 1;
  puVar7 = (undefined1 *)(plVar3[1] + (long)(int)uVar2 * 0x18);
  *puVar7 = 0x93;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = (int)uVar12;
  *(int *)(puVar7 + 8) = iVar1;
  *(undefined4 *)(puVar7 + 0xc) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  puVar7[1] = 0;
  return (long *)(ulong)uVar2;
}



/* Entry: 108da6224; end: 108da637f;  */

int * FUN_108da6224(undefined8 *param_1,int *param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  piVar4 = (int *)*param_1;
  piVar1 = piVar4;
  FUN_108d95eb4(piVar4,param_3,param_4);
  FUN_108dabd84();
  piVar3 = piVar4;
  if ((param_2 == (int *)0x0) || (piVar1 == (int *)0x0)) {
    if (param_2 == (int *)0x0) {
      FUN_108d6a6fc(piVar4,0x30);
      if (piVar3 == (int *)0x0) goto LAB_108da6334;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[0] = 0;
      piVar3[1] = 0;
      goto LAB_108da62f4;
    }
    iVar5 = *param_2;
  }
  else {
    iVar5 = *param_2;
    if (0 < iVar5) {
      lVar6 = 0;
      lVar7 = 0x10;
      do {
        piVar2 = piVar1;
        FUN_108d5e044(piVar1,*(undefined8 *)((long)param_2 + lVar7));
        if ((int)piVar2 == 0) {
          func_0x000108d6a85c(param_1,&UNK_10f51b2f2);
          iVar5 = *param_2;
        }
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while (lVar6 < iVar5);
    }
  }
  func_0x000108d711ec(piVar4,param_2,(long)(iVar5 * 0x20 + 0x30));
  if (piVar3 == (int *)0x0) {
LAB_108da6334:
    FUN_108d93e84(piVar4,param_5);
    func_0x000108d93f18(piVar4,param_6,1);
    func_0x000108d60660(piVar4,piVar1);
    return param_2;
  }
LAB_108da62f4:
  iVar5 = *piVar3;
  *(int **)(piVar3 + (long)iVar5 * 8 + 4) = piVar1;
  *(undefined8 *)(piVar3 + (long)iVar5 * 8 + 6) = param_5;
  *(undefined8 *)(piVar3 + (long)iVar5 * 8 + 8) = param_6;
  (piVar3 + (long)iVar5 * 8 + 10)[0] = 0;
  (piVar3 + (long)iVar5 * 8 + 10)[1] = 0;
  *piVar3 = iVar5 + 1;
  return piVar3;
}



/* Entry: 108da6380; end: 108da63d3;  */

undefined8 FUN_108da6380(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_1 + 0x3c) + -1;
  if ((*(int *)(*(long *)(param_1 + 0x30) + 100) < (int)lVar1) &&
     (*(byte *)(*(long *)(param_1 + 8) + lVar1 * 0x18) == param_2)) {
    func_0x000108d6ac04();
    return 1;
  }
  return 0;
}



/* Entry: 108da63d4; end: 108da6463;  */

void FUN_108da63d4(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  FUN_108d70f98();
  if (0 < *(int *)(param_1 + 0x1ac)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x1b0) + lVar5);
      uVar4 = *(undefined8 *)(puVar1 + 4);
      lVar3 = lVar2;
      FUN_108d71098(lVar2,0x91,*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
      FUN_108d6aaec(lVar2,lVar3,uVar4,0xfffffffe);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < *(int *)(param_1 + 0x1ac));
  }
  return;
}



/* Entry: 108da6464; end: 108da6627;  */

void FUN_108da6464(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)param_1[0x37];
  if (plVar6 != (long *)0x0) {
    lVar4 = param_1[2];
    lVar7 = *param_1;
    do {
      iVar1 = *(int *)((long)plVar6 + 0x14);
      FUN_108da66a0(param_1,0,(long)(int)plVar6[2],
                    *(undefined8 *)
                     (*(long *)(*(long *)(lVar7 + 0x20) + (long)(int)plVar6[2] * 0x20 + 0x18) + 0x68
                     ),0x36);
      FUN_108d71098(lVar4,0x1c,0,iVar1,iVar1 + 1);
      iVar2 = *(int *)(lVar4 + 0x3c);
      uVar5 = *(undefined8 *)plVar6[1];
      lVar3 = lVar4;
      FUN_108d71098(lVar4,0x61,0,iVar1 + -1,0);
      FUN_108d6aaec(lVar4,lVar3,uVar5,0);
      FUN_108d71098(lVar4,0x6c,0,iVar2 + 9,0);
      FUN_108d71098(lVar4,0x2f,0,0,iVar1);
      FUN_108d71098(lVar4,0x4e,iVar1 + -1,iVar2 + 7,iVar1);
      if (*(long *)(lVar4 + 8) != 0) {
        *(undefined1 *)(*(long *)(lVar4 + 8) + (long)*(int *)(lVar4 + 0x3c) * 0x18 + -0x15) = 0x10;
      }
      FUN_108d71098(lVar4,0x67,0,iVar1 + 1,0);
      FUN_108d71098(lVar4,0x2f,0,1,iVar1);
      FUN_108d71098(lVar4,0x10,0,iVar2 + 9,0);
      FUN_108d71098(lVar4,9,0,iVar2 + 2,0);
      FUN_108d71098(lVar4,0x19,0,iVar1,0);
      FUN_108d71098(lVar4,0x3d,0,0,0);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}



/* Entry: 108da6628; end: 108da669f;  */

ulong FUN_108da6628(ulong param_1,char *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  if ((param_2 != (char *)0x0) && (*param_2 == -0x61)) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar6 = (ulong)*(uint *)(param_2 + 0x2c);
    uVar5 = 0x21;
LAB_108da6680:
    uVar1 = *(uint *)(lVar3 + 0x3c);
    uVar7 = uVar1;
    if (*(int *)(*(long *)(lVar3 + 0x30) + 0x60) <= (int)uVar1) {
      lVar2 = lVar3;
      FUN_108d71134();
      if ((int)lVar2 != 0) {
        return 1;
      }
      uVar7 = *(uint *)(lVar3 + 0x3c);
    }
    *(uint *)(lVar3 + 0x3c) = uVar7 + 1;
    puVar8 = (undefined1 *)(*(long *)(lVar3 + 8) + (long)(int)uVar1 * 0x18);
    *puVar8 = uVar5;
    puVar8[3] = 0;
    *(int *)(puVar8 + 4) = (int)uVar6;
    *(int *)(puVar8 + 8) = (int)param_3;
    *(undefined4 *)(puVar8 + 0xc) = 0;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    puVar8[1] = 0;
    return (ulong)uVar1;
  }
  uVar6 = param_1;
  FUN_108da6d64(param_1,param_2,param_3);
  uVar4 = uVar6;
  if ((int)uVar6 != (int)param_3) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar5 = 0x22;
      goto LAB_108da6680;
    }
  }
  return uVar4;
}



/* Entry: 108da66a0; end: 108da6877;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */

void FUN_108da66a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar6;
  long *unaff_x19;
  long *plVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  plVar7 = param_1;
  FUN_108d70f98();
  func_0x000108da6790(param_1,param_3,*(undefined4 *)(param_4 + 7),(int)param_5 == 0x37,*param_4);
  if ((*(byte *)((long)param_4 + 0x46) >> 5 & 1) == 0) {
    param_1 = (long *)(long)*(short *)((long)param_4 + 0x3e);
    plVar4 = plVar7;
    FUN_108d71098(plVar7,param_5,param_2,*(undefined4 *)(param_4 + 7),param_3);
    iVar5 = (int)plVar4;
    uVar2 = 0xfffffff2;
  }
  else {
    for (lVar3 = param_4[2]; (lVar3 != 0 && ((*(byte *)(lVar3 + 0x5b) & 3) != 2));
        lVar3 = *(long *)(lVar3 + 0x28)) {
    }
    FUN_108d71098(plVar7,param_5,param_2,*(undefined4 *)(lVar3 + 0x50),param_3);
    plVar7 = (long *)param_1[2];
    FUN_108da68a8(param_1,lVar3);
    iVar5 = -1;
    uVar2 = 0xfffffffa;
  }
  lVar3 = *plVar7;
  if ((plVar7[1] != 0) && (*(char *)(lVar3 + 0x51) == '\0')) {
    if (iVar5 < 0) {
      iVar5 = *(int *)((long)plVar7 + 0x3c) + -1;
    }
    lVar8 = plVar7[1] + (long)iVar5 * 0x18;
    FUN_108d80c2c(lVar3,(long)*(char *)(lVar8 + 1),*(undefined8 *)(lVar8 + 0x10));
    *(undefined8 *)(lVar8 + 0x10) = 0;
    if (uVar2 == 0xfffffff2) {
      *(int *)(lVar8 + 0x10) = (int)param_1;
      uVar6 = 0xf2;
    }
    else {
      if (param_1 == (long *)0x0) {
        *(undefined1 *)(lVar8 + 1) = 0;
        return;
      }
      if (uVar2 == 0xfffffff6) {
        *(long **)(lVar8 + 0x10) = param_1;
        *(undefined1 *)(lVar8 + 1) = 0xf6;
        *(int *)(param_1 + 3) = (int)param_1[3] + 1;
        return;
      }
      if (uVar2 == 0xfffffffa) {
        *(long **)(lVar8 + 0x10) = param_1;
        uVar6 = 0xfa;
      }
      else {
        if ((int)uVar2 < 0) {
          *(long **)(lVar8 + 0x10) = param_1;
          *(char *)(lVar8 + 1) = (char)uVar2;
          return;
        }
        if (uVar2 == 0) {
          plVar4 = param_1;
          _strlen(param_1);
          uVar2 = (uint)plVar4 & 0x3fffffff;
        }
        lVar3 = *plVar7;
        FUN_108d95eb4(lVar3,param_1,uVar2);
        *(long *)(lVar8 + 0x10) = lVar3;
        uVar6 = 0xff;
      }
    }
    *(undefined1 *)(lVar8 + 1) = uVar6;
    return;
  }
  if (uVar2 == 0xfffffff6) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar7 = param_1;
  if ((int)uVar2 < -8) {
    if ((int)uVar2 < -0xb) {
      if ((1 < uVar2 + 0xd) && (uVar2 != 0xfffffff1)) {
        return;
      }
    }
    else {
      if (uVar2 == 0xfffffff5) {
        if (*(long *)(lVar3 + 0x328) != 0) {
          return;
        }
        goto SUB_108d5e198;
      }
      if (uVar2 != 0xfffffff6) {
        return;
      }
      if (*(long *)(lVar3 + 0x328) != 0) {
        return;
      }
      lVar3 = *param_1;
      iVar5 = (int)param_1[3] + -1;
      *(int *)(param_1 + 3) = iVar5;
      if (iVar5 != 0) {
        return;
      }
      if ((long *)param_1[2] != (long *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0x20))();
      }
    }
  }
  else if ((int)uVar2 < -5) {
    if (uVar2 != 0xfffffff8) {
      if (uVar2 != 0xfffffffa) {
        return;
      }
      if (*(long *)(lVar3 + 0x328) != 0) {
        return;
      }
      iVar5 = (int)*param_1 + -1;
      *(int *)param_1 = iVar5;
      if (iVar5 != 0) {
        return;
      }
      goto SUB_108d5e198;
    }
    if (*(long *)(lVar3 + 0x328) == 0) {
      if (param_1 == (long *)0x0) {
        return;
      }
      if (((*(ushort *)(param_1 + 1) & 0x2460) != 0) || ((int)param_1[4] != 0)) {
        FUN_108d826d0(param_1);
      }
      lVar3 = param_1[5];
    }
    else if ((int)param_1[4] != 0) {
      unaff_x30 = 0x108d80cf8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar7 = (long *)param_1[3];
      unaff_x19 = param_1;
      unaff_x20 = lVar3;
      unaff_x29 = puVar1;
    }
  }
  else if (uVar2 == 0xfffffffb) {
    if ((*(ushort *)((long)param_1 + 2) >> 4 & 1) == 0) {
      return;
    }
  }
  else if (uVar2 != 0xffffffff) {
    return;
  }
  param_1 = plVar7;
  if (param_1 == (long *)0x0) {
    return;
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((param_1 < *(long **)(lVar3 + 0x170)) || (*(long **)(lVar3 + 0x178) <= param_1)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)param_1;
      }
      else {
        uVar2 = (uint)*(ushort *)(lVar3 + 0x150);
      }
      **(int **)(lVar3 + 0x328) = **(int **)(lVar3 + 0x328) + uVar2;
      return;
    }
    if ((*(long **)(lVar3 + 0x170) <= param_1) && (param_1 < *(long **)(lVar3 + 0x178))) {
      *param_1 = *(long *)(lVar3 + 0x168);
      *(long **)(lVar3 + 0x168) = param_1;
      *(int *)(lVar3 + 0x154) = *(int *)(lVar3 + 0x154) + -1;
      return;
    }
  }
SUB_108d5e198:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_1 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar7 = param_1;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar7;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(param_1);
    param_1 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* Entry: 108da6878; end: 108da68a7;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */
/* WARNING: Removing unreachable block (ram,0x000108d80ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d80cfc) */
/* WARNING: Removing unreachable block (ram,0x000108d80ca8) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d6aba0) */
/* WARNING: Removing unreachable block (ram,0x000108d6abbc) */
/* WARNING: Removing unreachable block (ram,0x000108d6abec) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc0) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc4) */
/* WARNING: Removing unreachable block (ram,0x000108d6abd0) */
/* WARNING: Removing unreachable block (ram,0x000108d80c54) */
/* WARNING: Removing unreachable block (ram,0x000108d80c60) */
/* WARNING: Removing unreachable block (ram,0x000108d80c68) */
/* WARNING: Removing unreachable block (ram,0x000108d80cc4) */
/* WARNING: Removing unreachable block (ram,0x000108d80ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d6c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d78) */
/* WARNING: Removing unreachable block (ram,0x000108d80d84) */
/* WARNING: Removing unreachable block (ram,0x000108d80d90) */
/* WARNING: Removing unreachable block (ram,0x000108d80c4c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d18) */
/* WARNING: Removing unreachable block (ram,0x000108d80cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d6d618) */
/* WARNING: Removing unreachable block (ram,0x000108d6d660) */
/* WARNING: Removing unreachable block (ram,0x000108d6d61c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d63c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d644) */
/* WARNING: Removing unreachable block (ram,0x000108d6d64c) */
/* WARNING: Removing unreachable block (ram,0x000108d80ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d80d04) */
/* WARNING: Removing unreachable block (ram,0x000108d80cec) */
/* WARNING: Removing unreachable block (ram,0x000108d60660) */
/* WARNING: Removing unreachable block (ram,0x000108d60664) */
/* WARNING: Removing unreachable block (ram,0x000108d60668) */
/* WARNING: Removing unreachable block (ram,0x000108d60670) */
/* WARNING: Removing unreachable block (ram,0x000108d71958) */
/* WARNING: Removing unreachable block (ram,0x000108d7196c) */
/* WARNING: Removing unreachable block (ram,0x000108d71964) */
/* WARNING: Removing unreachable block (ram,0x000108d7197c) */
/* WARNING: Removing unreachable block (ram,0x000108d60674) */
/* WARNING: Removing unreachable block (ram,0x000108d60680) */
/* WARNING: Removing unreachable block (ram,0x000108d6068c) */
/* WARNING: Removing unreachable block (ram,0x000108d606a4) */
/* WARNING: Removing unreachable block (ram,0x000108d606a8) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab68) */

void FUN_108da6878(int *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 4);
  FUN_108da68a8();
  lVar3 = *plVar4;
  if ((plVar4[1] != 0) && (*(char *)(lVar3 + 0x51) == '\0')) {
    lVar5 = plVar4[1] + (long)(*(int *)((long)plVar4 + 0x3c) + -1) * 0x18;
    FUN_108d80c2c(lVar3,(long)*(char *)(lVar5 + 1),*(undefined8 *)(lVar5 + 0x10));
    *(undefined8 *)(lVar5 + 0x10) = 0;
    if (param_1 == (int *)0x0) {
      *(undefined1 *)(lVar5 + 1) = 0;
    }
    else {
      *(int **)(lVar5 + 0x10) = param_1;
      *(undefined1 *)(lVar5 + 1) = 0xfa;
    }
    return;
  }
  if (((param_1 != (int *)0x0) && (*(long *)(lVar3 + 0x328) == 0)) &&
     (iVar1 = *param_1, *param_1 = iVar1 + -1, iVar1 + -1 == 0)) {
    if (param_1 == (int *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (piRam0000000113829af0 != (int *)0x0) {
        (*pcRam0000000113297998)();
      }
      piVar2 = param_1;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)piVar2;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(param_1);
      param_1 = piRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (piRam0000000113829af0 == (int *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



/* Entry: 108da68a8; end: 108da69a3;  */

int * FUN_108da68a8(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*(int *)((long)param_1 + 0x4c) == 0) {
    uVar1 = *(ushort *)(param_2 + 0x58);
    piVar2 = (int *)*param_1;
    if ((*(byte *)(param_2 + 0x5b) >> 3 & 1) == 0) {
      iVar5 = 0;
      uVar7 = (ulong)uVar1;
    }
    else {
      uVar7 = (ulong)*(ushort *)(param_2 + 0x56);
      iVar5 = (uint)uVar1 - (uint)*(ushort *)(param_2 + 0x56);
    }
    FUN_108da69a4(piVar2,uVar7,iVar5);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if (uVar1 != 0) {
      uVar7 = 0;
      do {
        uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x40) + uVar7 * 8);
        uVar3 = uVar6;
        _strcmp(uVar6,&UNK_10f51757c);
        if ((int)uVar3 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = param_1;
          func_0x000108da6a20(param_1,uVar6);
        }
        *(undefined8 **)(piVar2 + uVar7 * 2 + 8) = puVar4;
        *(undefined1 *)(*(long *)(piVar2 + 6) + uVar7) =
             *(undefined1 *)(*(long *)(param_2 + 0x38) + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    if (*(int *)((long)param_1 + 0x4c) == 0) {
      return piVar2;
    }
    iVar5 = *piVar2;
    *piVar2 = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      func_0x000108d5e198(piVar2);
    }
  }
  return (int *)0x0;
}



/* Entry: 108da69a4; end: 108da6a97;  */

void FUN_108da69a4(long param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_3 + param_2;
  puVar2 = (undefined4 *)0x0;
  FUN_108d68fc8(0,(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) +
                  (long)(int)uVar1 + 0x28);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  else {
    *(short *)((long)puVar2 + 6) = (short)param_2;
    *(short *)(puVar2 + 2) = (short)param_3;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 0x4e);
    *(long *)(puVar2 + 4) = param_1;
    *(undefined4 **)(puVar2 + 6) = puVar2 + (long)(int)uVar1 * 2 + 8;
    *puVar2 = 1;
  }
  return;
}



/* Entry: 108da6a98; end: 108da6d63;  */

long * FUN_108da6a98(long *param_1,ulong param_2,ulong param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_54 [4];
  
  if (param_3 == 0) {
    plVar3 = (long *)param_1[2];
  }
  else {
    plVar3 = param_1 + 0x52;
    func_0x000108d93668(plVar3,param_3,auStack_54);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)plVar3[2];
    }
    if ((param_4 != 0) && (plVar3 == (long *)0x0)) {
      uVar4 = param_3;
      _strlen();
      uVar4 = uVar4 & 0x3fffffff;
      plVar3 = param_1;
      FUN_108d68fc8(param_1,uVar4 + 0x79);
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 0xf;
        *plVar3 = (long)plVar1;
        *(undefined1 *)(plVar3 + 1) = 1;
        plVar3[5] = (long)plVar1;
        *(undefined1 *)(plVar3 + 6) = 2;
        plVar3[10] = (long)plVar1;
        *(undefined1 *)(plVar3 + 0xb) = 3;
        _memcpy(plVar1,param_3,uVar4);
        *(undefined1 *)((long)plVar1 + uVar4) = 0;
        plVar2 = param_1 + 0x52;
        FUN_108d93af0(plVar2,plVar1,plVar3);
        if (plVar2 != (long *)0x0) {
          *(undefined1 *)((long)param_1 + 0x51) = 1;
          func_0x000108d60660(param_1,plVar2);
          plVar3 = (long *)0x0;
        }
      }
    }
  }
  plVar1 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + (param_2 & 0xffffffff) * 5 + -5;
  }
  return plVar1;
}



/* Entry: 108da6d64; end: 108da7c67;  */

long * FUN_108da6d64(long *param_1,byte *param_2,long *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  long *plVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  int *piVar14;
  uint *puVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plStack_118;
  undefined1 auStack_108 [16];
  undefined4 *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  puVar20 = (undefined8 *)param_1[2];
  uStack_70 = 0;
  if (puVar20 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  if (param_2 == (byte *)0x0) {
LAB_108da6e0c:
    bVar10 = 0x1c;
    plVar9 = (long *)0x0;
    plVar11 = param_3;
    goto code_r0x000108da6e1c;
  }
  bVar10 = *param_2;
  plVar9 = param_1;
  if (bVar10 < 0x26) {
    if (bVar10 == 0x13) goto LAB_108da6f50;
    if (bVar10 == 0x14) goto LAB_108da6f38;
    if (bVar10 == 0x18) goto code_r0x000108da6f24;
    goto LAB_108da70b8;
  }
  plVar11 = param_1;
  puVar22 = puVar20;
  plVar12 = param_3;
  switch(bVar10) {
  case 0x39:
    if (param_1[0x39] == 0) {
      func_0x000108d6a85c(param_1,&UNK_10f5190de);
      return (long *)0x0;
    }
    bVar10 = param_2[1];
    if (bVar10 != 4) {
      if (bVar10 == 2) {
        plVar9 = param_1;
        if ((long *)param_1[0x38] != (long *)0x0) {
          plVar9 = (long *)param_1[0x38];
        }
        *(undefined1 *)((long)plVar9 + 0x21) = 1;
      }
      FUN_108da99ac(param_1,0x713,(int)(char)bVar10,*(undefined8 *)(param_2 + 8),0,0);
      plVar9 = param_3;
      break;
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = 0x18;
    plVar9 = (long *)0x4;
    goto code_r0x000108da716c;
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x54:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
    goto LAB_108da70b8;
  case 0x3e:
    lVar26 = *(long *)(param_2 + 0x40);
    FUN_108d71098(puVar20,0x84,
                  (int)*(short *)(param_2 + 0x30) +
                  *(int *)(param_2 + 0x2c) +
                  *(int *)(param_2 + 0x2c) * (int)*(short *)(lVar26 + 0x3e) + 1,param_3,0);
    plVar9 = param_3;
    if ((*(short *)(param_2 + 0x30) < 0) ||
       (*(char *)(*(long *)(lVar26 + 8) + (long)(int)*(short *)(param_2 + 0x30) * 0x30 + 0x29) !=
        'E')) break;
    bVar10 = 0x27;
    plVar11 = (long *)0x0;
    goto code_r0x000108da6e1c;
  case 0x47:
  case 0x48:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_70 + 4);
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_70);
    goto code_r0x000108da6e20;
  case 0x49:
  case 0x94:
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_70 + 4);
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_70);
    bVar4 = bVar10 == 0x49;
    bVar10 = 0x4e;
    if (bVar4) {
      bVar10 = 0x4f;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = 0xa0;
    goto code_r0x000108da6fb8;
  case 0x4a:
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    puVar22 = *(undefined8 **)(*(long *)(param_2 + 0x20) + 8);
    uVar6 = *puVar22;
    plVar9 = param_1;
    FUN_108da8210(param_1,uVar5,(long)&uStack_70 + 4);
    plVar11 = param_1;
    FUN_108da8210(param_1,uVar6,&uStack_70);
    cVar2 = *(char *)((long)param_1 + 0x1f);
    if (cVar2 == '\0') {
      iVar19 = *(int *)((long)param_1 + 0x54) + 1;
      iVar28 = iVar19;
code_r0x000108da785c:
      iVar28 = iVar28 + 1;
      *(int *)((long)param_1 + 0x54) = iVar28;
    }
    else {
      *(byte *)((long)param_1 + 0x1f) = cVar2 - 1U;
      iVar19 = *(int *)((long)param_1 + (ulong)(byte)(cVar2 - 1U) * 4 + 0x24);
      if (cVar2 == '\x01') {
        iVar28 = *(int *)((long)param_1 + 0x54);
        goto code_r0x000108da785c;
      }
      *(byte *)((long)param_1 + 0x1f) = cVar2 - 2U;
      iVar28 = *(int *)((long)param_1 + (ulong)(byte)(cVar2 - 2U) * 4 + 0x24);
    }
    FUN_108da83dc(param_1,uVar5,uVar6,0x53,plVar9,plVar11,iVar19,0x20);
    uVar6 = puVar22[4];
    if ((int)uStack_70 != 0) {
      bVar10 = *(byte *)((long)param_1 + 0x1f);
      if (bVar10 < 8) {
        puVar24 = (undefined1 *)((long)param_1 + 0x8e);
        iVar17 = 10;
        do {
          if (*(int *)(puVar24 + 6) == (int)uStack_70) {
            *puVar24 = 1;
            goto code_r0x000108da799c;
          }
          puVar24 = puVar24 + 0x14;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        *(byte *)((long)param_1 + 0x1f) = bVar10 + 1;
        *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24) = (int)uStack_70;
      }
    }
code_r0x000108da799c:
    plVar11 = param_1;
    FUN_108da8210(param_1,uVar6,&uStack_70);
    FUN_108da83dc(param_1,uVar5,uVar6,0x51,plVar9,plVar11,iVar28,0x20);
    FUN_108d71098(puVar20,0x48,iVar19,iVar28,param_3);
    if (iVar19 != 0) {
      bVar10 = *(byte *)((long)param_1 + 0x1f);
      if (bVar10 < 8) {
        puVar24 = (undefined1 *)((long)param_1 + 0x8e);
        iVar17 = 10;
        do {
          if (*(int *)(puVar24 + 6) == iVar19) {
            *puVar24 = 1;
            goto code_r0x000108da7a34;
          }
          puVar24 = puVar24 + 0x14;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        *(byte *)((long)param_1 + 0x1f) = bVar10 + 1;
        *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24) = iVar19;
      }
    }
code_r0x000108da7a34:
    plVar9 = param_3;
    if (iVar28 != 0) {
      bVar10 = *(byte *)((long)param_1 + 0x1f);
      if (bVar10 < 8) {
        puVar24 = (undefined1 *)((long)param_1 + 0x8e);
        iVar19 = 10;
        do {
          if (*(int *)(puVar24 + 6) == iVar28) {
            *puVar24 = 1;
            goto LAB_108da6e24;
          }
          puVar24 = puVar24 + 0x14;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        *(byte *)((long)param_1 + 0x1f) = bVar10 + 1;
        *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24) = iVar28;
      }
    }
    break;
  case 0x4b:
    uVar5 = puVar20[6];
    FUN_108da84a4();
    uVar6 = puVar20[6];
    FUN_108da84a4();
    FUN_108d71098(puVar20,0x1c,0,param_3,0);
    func_0x000108da9060(param_1,param_2,uVar5,uVar6);
    FUN_108d71098(puVar20,0x19,1,param_3,0);
    lVar26 = puVar20[6];
    if (((int)(uint)uVar5 < 0) && (lVar30 = *(long *)(lVar26 + 0x80), lVar30 != 0)) {
      *(undefined4 *)(lVar30 + (ulong)~(uint)uVar5 * 4) = *(undefined4 *)((long)puVar20 + 0x3c);
    }
    *(int *)(lVar26 + 100) = *(int *)((long)puVar20 + 0x3c) + -1;
    FUN_108d71098(puVar20,0x25,param_3,0,0);
    lVar26 = puVar20[6];
    if (-1 < (int)(uint)uVar6) goto LAB_108da797c;
    iVar19 = *(int *)((long)puVar20 + 0x3c);
    if (*(long *)(lVar26 + 0x80) != 0) {
      *(int *)(*(long *)(lVar26 + 0x80) + (ulong)~(uint)uVar6 * 4) = iVar19;
    }
    goto code_r0x000108da7980;
  case 0x4c:
  case 0x4d:
    FUN_108d71098(puVar20,0x19,1,param_3,0);
    plVar9 = param_1;
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_70 + 4);
    FUN_108d71098(puVar20,bVar10,plVar9,0,0);
    FUN_108d71098(puVar20,0x19,0,param_3,0);
    uVar21 = *(uint *)((long)puVar20 + 0x3c);
    if ((uint)puVar22 < uVar21) {
      *(uint *)(puVar20[1] + ((ulong)puVar22 & 0xffffffff) * 0x18 + 8) = uVar21;
    }
    *(uint *)(puVar20[6] + 100) = uVar21 - 1;
    plVar9 = param_3;
    break;
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_70 + 4);
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_70);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = 0x20;
code_r0x000108da6fb8:
    FUN_108da83dc(param_1,uVar5,uVar6,bVar10,plVar9,plVar11,param_3,uVar13);
    plVar9 = param_3;
    break;
  case 0x5f:
  case 0x9e:
code_r0x000108da6f24:
    FUN_108da6d64(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
    break;
  case 0x60:
LAB_108da6f50:
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_70 + 4);
    plVar11 = param_3;
code_r0x000108da6e1c:
    plVar12 = (long *)0x0;
    goto code_r0x000108da6e20;
  case 0x61:
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = 0x61;
    plVar9 = param_3;
code_r0x000108da716c:
    FUN_108d71098(puVar20,uVar6,0,plVar9,0);
    uVar6 = 0;
    goto code_r0x000108da73c0;
  case 0x65:
    goto LAB_108da6e0c;
  case 0x77:
LAB_108da6f38:
    FUN_108da8a4c(param_1,param_2,0,0);
    break;
  case 0x84:
    uVar5 = 0;
code_r0x000108da73e8:
    func_0x000108da7d6c(param_1,param_2,uVar5,param_3);
    plVar9 = param_3;
    break;
  case 0x85:
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = 0;
code_r0x000108da7800:
    FUN_108da7eec(puVar20,uVar5,uVar6,param_3);
    plVar9 = param_3;
    break;
  case 0x86:
    lVar30 = *(long *)(param_2 + 8);
    lVar26 = lVar30 + 2;
    _strlen(lVar26);
    iVar19 = ((uint)lVar26 & 0x3fffffff) - 1;
    uVar5 = *puVar20;
    func_0x000108da7f9c(uVar5,lVar30 + 2,iVar19);
    FUN_108d71098(puVar20,0x1e,iVar19 / 2,param_3,0);
    uVar6 = 0xffffffff;
    goto code_r0x000108da73c0;
  case 0x87:
    FUN_108d71098(puVar20,0x1f,(long)*(short *)(param_2 + 0x30),param_3,0);
    plVar9 = param_3;
    if (*(char *)(*(long *)(param_2 + 8) + 1) == '\0') break;
    uVar5 = *(undefined8 *)(param_1[0x41] + (long)*(short *)(param_2 + 0x30) * 8 + -8);
    puVar22 = (undefined8 *)0xffffffff;
    uVar6 = 0xfffffffe;
code_r0x000108da73c0:
    FUN_108d6aaec(puVar20,puVar22,uVar5,uVar6);
    plVar9 = param_3;
    break;
  case 0x99:
    lVar26 = *param_1;
    uVar1 = *(undefined1 *)(lVar26 + 0x4e);
    if ((param_2[5] >> 6 & 1) == 0) {
      puVar15 = *(uint **)(param_2 + 0x20);
      if (puVar15 == (uint *)0x0) goto code_r0x000108da74f4;
      bVar4 = false;
      uVar27 = (ulong)*puVar15;
    }
    else {
      puVar15 = (uint *)0x0;
code_r0x000108da74f4:
      uVar27 = 0;
      bVar4 = true;
    }
    lVar30 = *(long *)(param_2 + 8);
    if (lVar30 == 0) {
      uVar21 = 0;
    }
    else {
      lVar18 = lVar30;
      _strlen();
      uVar21 = (uint)lVar18 & 0x3fffffff;
    }
    lVar18 = lVar26;
    FUN_108d6e688(lVar26,lVar30,uVar21,uVar27,uVar1,0);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x18) == 0)) {
      puVar8 = &UNK_10f5190c5;
      goto code_r0x000108da77d0;
    }
    uVar3 = *(ushort *)(lVar18 + 2);
    iVar19 = (int)uVar27;
    if ((uVar3 >> 9 & 1) == 0) {
      if ((uVar3 >> 10 & 1) != 0) {
        FUN_108da6628(param_1,**(undefined8 **)(puVar15 + 2),param_3);
        plVar9 = param_3;
        break;
      }
      if (iVar19 < 1) {
        if (!bVar4) {
          plStack_118 = (long *)0x0;
code_r0x000108da7adc:
          uVar21 = 0;
          if (*(int *)((long)param_1 + 0x44) < iVar19) goto code_r0x000108da7af0;
          iVar28 = (int)param_1[9];
          *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - iVar19;
          *(int *)(param_1 + 9) = iVar28 + iVar19;
          goto code_r0x000108da7b14;
        }
        iVar28 = 0;
        uVar21 = 0;
        if ((uVar3 >> 5 & 1) != 0) goto code_r0x000108da7bc8;
      }
      else {
        lVar30 = 0;
        uVar23 = 0;
        uVar21 = 0;
        plStack_118 = (long *)0x0;
        do {
          if (uVar23 < 0x20) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0x100000000;
            uStack_c0 = 0x8daa264;
            uStack_bc = 1;
            uStack_b8 = 0x8daa314;
            uStack_b4 = 1;
            FUN_108daa320(&uStack_c0,*(undefined8 *)(*(long *)(puVar15 + 2) + lVar30));
            if (uStack_a0._4_1_ != '\0') {
              uVar21 = 1 << (ulong)((uint)uVar23 & 0x1f) | uVar21;
            }
          }
          if (((*(ushort *)(lVar18 + 2) >> 5 & 1) != 0) && (plStack_118 == (long *)0x0)) {
            plStack_118 = param_1;
            FUN_108da85d0(param_1,*(undefined8 *)(*(long *)(puVar15 + 2) + lVar30));
          }
          uVar23 = uVar23 + 1;
          lVar30 = lVar30 + 0x20;
        } while (uVar27 << 5 != lVar30);
        if (bVar4) {
          iVar28 = 0;
        }
        else {
          if (uVar21 == 0) goto code_r0x000108da7adc;
code_r0x000108da7af0:
          iVar28 = *(int *)((long)param_1 + 0x54) + 1;
          *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + iVar19;
code_r0x000108da7b14:
          if ((*(ushort *)(lVar18 + 2) & 0xc0) != 0) {
            cVar2 = *(char *)**(undefined8 **)(puVar15 + 2);
            if ((cVar2 == -100) || (cVar2 == -0x66)) {
              ((char *)**(undefined8 **)(puVar15 + 2))[0x36] = (byte)*(ushort *)(lVar18 + 2) & 0xc0;
            }
          }
          *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
          FUN_108da8740(param_1,puVar15,iVar28,3);
          func_0x000108da8568(param_1);
        }
        if (iVar19 < 2) {
          if (iVar19 == 1) goto code_r0x000108da7b94;
        }
        else {
          if ((char)param_2[4] < '\0') {
            puVar22 = (undefined8 *)(*(long *)(puVar15 + 2) + 0x20);
          }
          else {
code_r0x000108da7b94:
            puVar22 = *(undefined8 **)(puVar15 + 2);
          }
          lVar30 = lVar26;
          FUN_108da88b8(lVar26,lVar18,uVar27,*puVar22);
          lVar18 = lVar30;
        }
        if ((*(ushort *)(lVar18 + 2) >> 5 & 1) != 0) {
          if (plStack_118 == (long *)0x0) {
code_r0x000108da7bc8:
            plStack_118 = *(long **)(lVar26 + 0x10);
          }
          puVar22 = puVar20;
          FUN_108d71098(puVar20,0x24,0,0,0);
          FUN_108d6aaec(puVar20,puVar22,plStack_118,0xfffffffc);
        }
      }
      puVar22 = puVar20;
      FUN_108d71098(puVar20,1,uVar21,iVar28,param_3);
      FUN_108d6aaec(puVar20,puVar22,lVar18,0xfffffffb);
      if (puVar20[1] != 0) {
        *(char *)(puVar20[1] + (long)*(int *)((long)puVar20 + 0x3c) * 0x18 + -0x15) = (char)uVar27;
      }
      plVar9 = param_3;
      if (((iVar19 != 0) && (uVar21 == 0)) &&
         (FUN_108da8510(param_1,iVar28,uVar27), *(int *)((long)param_1 + 0x44) < iVar19)) {
        *(int *)((long)param_1 + 0x44) = iVar19;
        *(int *)(param_1 + 9) = iVar28;
      }
      break;
    }
    uVar5 = puVar20[6];
    FUN_108da84a4();
    FUN_108da6628(param_1,**(undefined8 **)(puVar15 + 2),param_3);
    if (1 < iVar19) {
      lVar26 = 0x20;
      do {
        FUN_108d71098(puVar20,0x4d,param_3,uVar5,0);
        FUN_108da8510(param_1,param_3,1);
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        FUN_108da6628(param_1,*(undefined8 *)(*(long *)(puVar15 + 2) + lVar26),param_3);
        func_0x000108da8568(param_1);
        lVar26 = lVar26 + 0x20;
      } while (uVar27 << 5 != lVar26);
    }
    lVar26 = puVar20[6];
    uVar21 = (uint)uVar5;
    if ((-1 < (int)uVar21) || (lVar30 = *(long *)(lVar26 + 0x80), lVar30 == 0)) goto LAB_108da797c;
    goto code_r0x000108da7648;
  case 0x9a:
code_r0x000108da74c8:
    iVar19 = *(int *)(param_2 + 0x2c);
    if (iVar19 < 0) {
      if (0 < (int)param_1[0xd]) {
        plVar9 = (long *)(ulong)(uint)((int)param_1[0xd] + (int)*(short *)(param_2 + 0x30));
        break;
      }
      iVar19 = *(int *)((long)param_1 + 0x6c);
    }
    func_0x000108da7c68(param_1,*(undefined8 *)(param_2 + 0x40),(long)*(short *)(param_2 + 0x30),
                        iVar19,param_3,param_2[0x36]);
    break;
  case 0x9b:
    if (*(long *)(param_2 + 0x38) != 0) {
      plVar9 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0x38) + 0x30) +
                                        (long)(int)*(short *)(param_2 + 0x32) * 0x18 + 0x10);
      break;
    }
    puVar8 = &UNK_10f5190ab;
code_r0x000108da77d0:
    func_0x000108d6a85c(param_1,puVar8);
    plVar9 = param_3;
    break;
  case 0x9c:
    pcVar16 = *(char **)(param_2 + 0x38);
    lVar26 = *(long *)(pcVar16 + 0x20) + (long)*(short *)(param_2 + 0x32) * 0x20;
    if (*pcVar16 == '\0') {
      plVar9 = (long *)(ulong)*(uint *)(lVar26 + 0x14);
      break;
    }
    if (pcVar16[1] == '\0') goto code_r0x000108da74c8;
    plVar9 = (long *)(ulong)*(uint *)(pcVar16 + 8);
    plVar11 = (long *)(ulong)*(uint *)(lVar26 + 0x10);
    bVar10 = 0x2f;
    goto code_r0x000108da6e20;
  case 0x9d:
    pbVar7 = *(byte **)(param_2 + 0x10);
    if (*pbVar7 == 0x85) {
      uVar5 = *(undefined8 *)(pbVar7 + 8);
      uVar6 = 1;
      goto code_r0x000108da7800;
    }
    if (*pbVar7 == 0x84) {
      uVar5 = 1;
      param_2 = pbVar7;
      goto code_r0x000108da73e8;
    }
    uStack_c0 = CONCAT31(uStack_c0._1_3_,0x84);
    uStack_bc = 0x4400;
    uStack_b8 = 0;
    FUN_108da8210(param_1,&uStack_c0,(long)&uStack_70 + 4);
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),&uStack_70);
    bVar10 = 0x5a;
code_r0x000108da6e20:
    FUN_108d71098(puVar20,bVar10,plVar9,plVar11,plVar12);
    plVar9 = param_3;
    break;
  case 0x9f:
    plVar9 = (long *)(ulong)*(uint *)(param_2 + 0x2c);
    break;
  default:
    if (bVar10 == 0x26) {
      plVar9 = param_1;
      FUN_108da6d64(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
      if ((int)plVar9 != (int)param_3) {
        FUN_108d71098(puVar20,0x22,plVar9,param_3,0);
      }
      uVar5 = *(undefined8 *)(param_2 + 8);
      func_0x000108da803c(uVar5,0);
      FUN_108d71098(puVar20,0x28,param_3,uVar5,0);
      FUN_108da8510(param_1,param_3,1);
      plVar9 = param_3;
      break;
    }
    goto LAB_108da70b8;
  }
LAB_108da6e24:
  if (uStack_70._4_4_ != 0) {
    bVar10 = *(byte *)((long)param_1 + 0x1f);
    if (bVar10 < 8) {
      puVar24 = (undefined1 *)((long)param_1 + 0x8e);
      iVar19 = 10;
      do {
        if (*(int *)(puVar24 + 6) == uStack_70._4_4_) {
          *puVar24 = 1;
          goto LAB_108da6e74;
        }
        puVar24 = puVar24 + 0x14;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar10 + 1;
      *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24) = uStack_70._4_4_;
    }
  }
LAB_108da6e74:
  if ((int)uStack_70 != 0) {
    bVar10 = *(byte *)((long)param_1 + 0x1f);
    if (bVar10 < 8) {
      puVar24 = (undefined1 *)((long)param_1 + 0x8e);
      iVar19 = 10;
      do {
        if (*(int *)(puVar24 + 6) == (int)uStack_70) {
          *puVar24 = 1;
          return plVar9;
        }
        puVar24 = puVar24 + 0x14;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar10 + 1;
      *(int *)((long)param_1 + (ulong)bVar10 * 4 + 0x24) = (int)uStack_70;
    }
  }
  return plVar9;
LAB_108da70b8:
  piVar14 = *(int **)(param_2 + 0x20);
  lVar26 = *(long *)(piVar14 + 2);
  iVar19 = *piVar14;
  uVar5 = puVar20[6];
  FUN_108da84a4();
  puVar22 = *(undefined8 **)(param_2 + 0x10);
  if (puVar22 == (undefined8 *)0x0) {
    puVar24 = (undefined1 *)0x0;
  }
  else {
    uStack_b8 = (undefined4)puVar22[1];
    uStack_b4 = (undefined4)((ulong)puVar22[1] >> 0x20);
    uStack_c0 = (undefined4)*puVar22;
    uStack_bc = (uint)((ulong)*puVar22 >> 0x20);
    uStack_a8 = puVar22[3];
    uStack_b0 = puVar22[2];
    uStack_98 = puVar22[5];
    uStack_a0 = puVar22[4];
    uStack_88 = puVar22[7];
    uStack_90 = puVar22[6];
    uStack_80 = puVar22[8];
    plVar9 = param_1;
    FUN_108da8210(param_1,puVar22,(long)&uStack_70 + 4);
    uStack_90._0_7_ = CONCAT16((undefined1)uStack_c0,(undefined6)uStack_90);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,0x9f);
    uStack_bc = uStack_bc & 0xffffefff;
    uStack_98 = CONCAT44((int)plVar9,(undefined4)uStack_98);
    auStack_108[0] = 0x4f;
    puStack_f8 = &uStack_c0;
    uStack_70 = uStack_70 & 0xffffffff;
    puVar24 = auStack_108;
  }
  lVar30 = (long)iVar19 - 1;
  if (1 < iVar19) {
    iVar28 = 0;
    puVar29 = (undefined8 *)(lVar26 + 0x20);
    do {
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
      puVar25 = (undefined1 *)puVar29[-4];
      if (puVar22 != (undefined8 *)0x0) {
        puVar25 = puVar24;
        puStack_f0 = (undefined1 *)puVar29[-4];
      }
      uVar6 = puVar20[6];
      FUN_108da84a4();
      FUN_108da95f4(param_1,puVar25,uVar6,0x10);
      FUN_108da6628(param_1,*puVar29,param_3);
      FUN_108d71098(puVar20,0x10,0,uVar5,0);
      func_0x000108da8568(param_1);
      lVar26 = puVar20[6];
      if ((int)(uint)uVar6 < 0) {
        lVar18 = *(long *)(lVar26 + 0x80);
        iVar17 = *(int *)((long)puVar20 + 0x3c);
        if (lVar18 != 0) {
          *(int *)(lVar18 + (ulong)~(uint)uVar6 * 4) = iVar17;
        }
      }
      else {
        iVar17 = *(int *)((long)puVar20 + 0x3c);
      }
      *(int *)(lVar26 + 100) = iVar17 + -1;
      iVar28 = iVar28 + 2;
      puVar29 = puVar29 + 8;
      puVar24 = puVar25;
    } while (iVar28 < (int)lVar30);
  }
  if (((long)iVar19 & 1U) == 0) {
    FUN_108d71098(puVar20,0x1c,0,param_3,0);
  }
  else {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    FUN_108da6628(param_1,*(undefined8 *)(*(long *)(piVar14 + 2) + lVar30 * 0x20),param_3);
    func_0x000108da8568(param_1);
  }
  lVar26 = puVar20[6];
  uVar21 = (uint)uVar5;
  if (((int)uVar21 < 0) && (lVar30 = *(long *)(lVar26 + 0x80), lVar30 != 0)) {
code_r0x000108da7648:
    *(undefined4 *)(lVar30 + (ulong)~uVar21 * 4) = *(undefined4 *)((long)puVar20 + 0x3c);
  }
LAB_108da797c:
  iVar19 = *(int *)((long)puVar20 + 0x3c);
code_r0x000108da7980:
  *(int *)(lVar26 + 100) = iVar19 + -1;
  plVar9 = param_3;
  goto LAB_108da6e24;
}



/* Entry: 108da7c68; end: 108da7eeb;  */

ulong FUN_108da7c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  
  lVar2 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  while( true ) {
    uVar1 = *(uint *)(param_1 + lVar2 + 0x94);
    if (((0 < (int)uVar1) && (*(int *)(param_1 + lVar2 + 0x88) == (int)param_4)) &&
       ((int)param_3 == (int)*(short *)(param_1 + lVar2 + 0x8c))) break;
    lVar2 = lVar2 + 0x14;
    if ((int)lVar2 == 200) {
      FUN_108da9a60(lVar5,param_2,param_4,param_3,param_5);
      if (param_6 == 0) {
        FUN_108da9b5c(param_1,param_4,param_3,param_5);
      }
      else if (*(long *)(lVar5 + 8) != 0) {
        *(char *)(*(long *)(lVar5 + 8) + (long)*(int *)(lVar5 + 0x3c) * 0x18 + -0x15) =
             (char)param_6;
      }
      return param_5;
    }
  }
  iVar4 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar4 + 1;
  *(int *)(param_1 + lVar2 + 0x98) = iVar4;
  puVar3 = (undefined1 *)(param_1 + 0x8e);
  iVar4 = 10;
  do {
    if (*(uint *)(puVar3 + 6) == uVar1) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return (ulong)uVar1;
}



/* Entry: 108da7eec; end: 108da7f9b;  */

void FUN_108da7eec(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  double *pdVar2;
  long *plVar3;
  double dStack_38;
  
  if (param_2 != 0) {
    lVar1 = param_2;
    _strlen(param_2);
    FUN_108d82a1c(param_2,&dStack_38,(uint)lVar1 & 0x3fffffff,1);
    if (param_3 != 0) {
      dStack_38 = -dStack_38;
    }
    pdVar2 = (double *)*param_1;
    FUN_108d6a6fc(pdVar2,8);
    if (pdVar2 != (double *)0x0) {
      *pdVar2 = dStack_38;
    }
    plVar3 = param_1;
    FUN_108d71098(param_1,0x85,0,param_4,0);
    FUN_108d6aaec(param_1,plVar3,pdVar2,0xfffffff4);
  }
  return;
}



/* Entry: 108da7f9c; end: 108da820f;  */

void FUN_108da7f9c(long param_1,long param_2,int param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_108d6a6fc(param_1,param_3 / 2 + 1);
  if (param_1 != 0) {
    if (param_3 < 2) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      uVar4 = 0;
      do {
        cVar1 = *(char *)(param_2 + uVar4);
        cVar2 = ((char *)(param_2 + uVar4))[1];
        *(byte *)(param_1 + lVar3) =
             ((byte)((uint)(int)(char)(cVar2 << 1) >> 7) & 0xf9) + cVar2 & 0xf |
             (((byte)((uint)(int)(char)(cVar1 << 1) >> 7) & 0xf9) + cVar1) * '\x10';
        uVar4 = uVar4 + 2;
        lVar3 = lVar3 + 1;
      } while (uVar4 < param_3 - 1);
    }
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  return;
}



/* Entry: 108da8210; end: 108da83db;  */

ulong FUN_108da8210(ulong param_1,char *param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  while ((param_2 != (char *)0x0 && ((*(uint *)(param_2 + 4) >> 0xc & 1) != 0))) {
    if ((*(uint *)(param_2 + 4) >> 0x12 & 1) == 0) {
      param_2 = param_2 + 0x10;
    }
    else {
      param_2 = *(char **)(*(long *)(param_2 + 0x20) + 8);
    }
    param_2 = *(char **)param_2;
  }
  if ((*(char *)(param_1 + 0x23) != '\0') && (*param_2 != -0x61)) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0x200000000;
    pcStack_70 = FUN_108daa264;
    uStack_68 = 0x108daa314;
    FUN_108daa320(&pcStack_70,param_2);
    if (uStack_50._4_1_ != '\0') {
      piVar5 = *(int **)(param_1 + 0x150);
      *param_3 = 0;
      if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
        puVar8 = (uint *)(*(long *)(piVar5 + 2) + 0x1c);
        iVar9 = *piVar5 + 1;
        do {
          if ((*(byte *)((long)puVar8 + -3) >> 2 & 1) != 0) {
            uVar3 = *(undefined8 *)(puVar8 + -7);
            FUN_108daa04c(uVar3,param_2,0xffffffff);
            if ((int)uVar3 == 0) {
              return (ulong)*puVar8;
            }
          }
          puVar8 = puVar8 + 8;
          iVar9 = iVar9 + -1;
        } while (1 < iVar9);
      }
      uVar1 = *(int *)(param_1 + 0x54) + 1;
      *(uint *)(param_1 + 0x54) = uVar1;
      FUN_108daa1ec(param_1,param_2,(ulong)uVar1,1);
      return (ulong)uVar1;
    }
  }
  if (*(char *)(param_1 + 0x1f) == '\0') {
    iVar9 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar9;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar2;
    iVar9 = *(int *)(param_1 + (ulong)bVar2 * 4 + 0x24);
  }
  uVar4 = param_1;
  FUN_108da6d64(param_1,param_2,iVar9);
  if (((int)uVar4 != iVar9) && (iVar9 != 0)) {
    bVar2 = *(byte *)(param_1 + 0x1f);
    if (bVar2 < 8) {
      puVar6 = (undefined1 *)(param_1 + 0x8e);
      iVar7 = 10;
      do {
        if (*(int *)(puVar6 + 6) == iVar9) {
          iVar9 = 0;
          *puVar6 = 1;
          goto LAB_108da83b4;
        }
        puVar6 = puVar6 + 0x14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      *(byte *)(param_1 + 0x1f) = bVar2 + 1;
      *(int *)(param_1 + (ulong)bVar2 * 4 + 0x24) = iVar9;
    }
    iVar9 = 0;
  }
LAB_108da83b4:
  *param_3 = iVar9;
  return uVar4;
}



/* Entry: 108da83dc; end: 108da84a3;  */

void FUN_108da83dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_108daaedc();
  FUN_108daaf34(param_3);
  FUN_108daaffc(param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = uVar3;
  FUN_108d71098(uVar3,param_4,param_6,param_7,param_5);
  FUN_108d6aaec(uVar3,uVar1,lVar2,0xfffffffc);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x3c) * 0x18 + -0x15) =
         (byte)param_2 | param_8;
  }
  return;
}



/* Entry: 108da84a4; end: 108da850f;  */

uint FUN_108da84a4(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = uVar1 + 1;
  if ((uVar1 & uVar1 - 1) == 0) {
    lVar2 = *param_1;
    func_0x000108d829d8(lVar2,param_1[0x10],
                        -(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                        (ulong)(uVar1 << 1 | 1) << 2);
    param_1[0x10] = lVar2;
  }
  else {
    lVar2 = param_1[0x10];
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4) = 0xffffffff;
  }
  return ~uVar1;
}



/* Entry: 108da8510; end: 108da85cf;  */

void FUN_108da8510(long param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(param_1 + 0x8e);
  iVar4 = 10;
  do {
    iVar1 = *(int *)(pcVar3 + 6);
    if (param_2 <= iVar1 && iVar1 < param_3 + param_2) {
      if (*pcVar3 != '\0') {
        bVar2 = *(byte *)(param_1 + 0x1f);
        if (bVar2 < 8) {
          *(byte *)(param_1 + 0x1f) = bVar2 + 1;
          *(int *)(param_1 + 0x24 + (ulong)bVar2 * 4) = iVar1;
        }
        *pcVar3 = '\0';
      }
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
    }
    pcVar3 = pcVar3 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* Entry: 108da85d0; end: 108da873f;  */

long * FUN_108da85d0(long *param_1,byte *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  if (param_2 == (byte *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)*param_1;
  do {
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 >> 9 & 1) != 0) {
      return (long *)0x0;
    }
    bVar3 = *param_2;
    if (bVar3 < 0x9c) {
      if (0x5e < bVar3) {
        if (bVar3 == 0x9a) goto LAB_108da8658;
        if (bVar3 == 0x5f) {
LAB_108da86ec:
          puVar1 = (undefined1 *)((long)plVar4 + 0x4e);
          plVar4 = param_1;
          func_0x000108da6bb0(param_1,*puVar1,0,*(undefined8 *)(param_2 + 8));
          goto LAB_108da8704;
        }
        goto LAB_108da8660;
      }
      if (bVar3 != 0x26) {
        if (bVar3 == 0x3e) goto LAB_108da8658;
        goto LAB_108da8660;
      }
LAB_108da8630:
      pbVar6 = *(byte **)(param_2 + 0x10);
    }
    else {
      if (bVar3 != 0x9c) {
        if (bVar3 != 0x9f) {
          if (bVar3 != 0x9e) goto LAB_108da8660;
          goto LAB_108da8630;
        }
        if (param_2[0x36] == 0x5f) goto LAB_108da86ec;
      }
LAB_108da8658:
      if (*(long *)(param_2 + 0x40) != 0) {
        if (*(short *)(param_2 + 0x30) < 0) {
          return (long *)0x0;
        }
        FUN_108da6a98(plVar4,*(undefined1 *)((long)plVar4 + 0x4e),
                      *(undefined8 *)
                       (*(long *)(*(long *)(param_2 + 0x40) + 8) +
                        (long)(int)*(short *)(param_2 + 0x30) * 0x30 + 0x20),0);
LAB_108da8704:
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        func_0x000108da6bb0(param_1,*(undefined1 *)(*param_1 + 0x4e),plVar4,*plVar4);
        if (param_1 != (long *)0x0) {
          return plVar4;
        }
        return (long *)0x0;
      }
LAB_108da8660:
      if ((uVar2 >> 8 & 1) == 0) {
        return (long *)0x0;
      }
      pbVar6 = *(byte **)(param_2 + 0x10);
      if ((((pbVar6 == (byte *)0x0) || ((pbVar6[5] & 1) == 0)) &&
          (pbVar7 = *(byte **)(param_2 + 0x18), pbVar6 = pbVar7, (uVar2 >> 0xb & 1) == 0)) &&
         ((puVar8 = *(uint **)(param_2 + 0x20), puVar8 != (uint *)0x0 &&
          (uVar5 = (ulong)*puVar8, 0 < (int)*puVar8)))) {
        puVar9 = *(undefined8 **)(puVar8 + 2);
        do {
          pbVar6 = (byte *)*puVar9;
          if ((((byte *)*puVar9)[5] & 1) != 0) break;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar7;
          puVar9 = puVar9 + 4;
        } while (uVar5 != 0);
      }
    }
    param_2 = pbVar6;
    if (param_2 == (byte *)0x0) {
      return (long *)0x0;
    }
  } while( true );
}



/* Entry: 108da8740; end: 108da88b7;  */

void FUN_108da8740(long param_1,int *param_2,ulong param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar8 = *param_2;
  if (0 < iVar8) {
    puVar9 = *(undefined8 **)(param_2 + 2);
    cVar2 = *(char *)(param_1 + 0x23);
    do {
      uVar7 = *puVar9;
      iVar6 = (int)param_3;
      if (cVar2 == '\0' || param_4 < 2) {
LAB_108da87f0:
        lVar3 = param_1;
        FUN_108da6d64(param_1,uVar7,param_3);
        if (iVar6 != (int)lVar3) {
          plVar4 = *(long **)(param_1 + 0x10);
          if ((param_4 & 1) != 0) {
            pcVar5 = (char *)0x11372e6a0;
            if (*(char *)(*plVar4 + 0x51) == '\0') {
              pcVar5 = (char *)(plVar4[1] + (long)*(int *)((long)plVar4 + 0x3c) * 0x18 + -0x18);
            }
            if (((*pcVar5 == '!') &&
                (iVar1 = *(int *)(pcVar5 + 0xc) + 1, iVar1 + *(int *)(pcVar5 + 4) == (int)lVar3)) &&
               (iVar6 == *(int *)(pcVar5 + 8) + iVar1)) {
              *(int *)(pcVar5 + 0xc) = iVar1;
              goto LAB_108da8888;
            }
          }
          FUN_108d71098(plVar4,0x22 - (param_4 & 1),lVar3,param_3,0);
        }
      }
      else {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0x100000000;
        pcStack_90 = FUN_108daa264;
        uStack_88 = 0x108daa314;
        FUN_108daa320(&pcStack_90,uVar7);
        if (uStack_70._4_1_ == '\0') goto LAB_108da87f0;
        FUN_108daa1ec(param_1,uVar7,param_3,0);
      }
LAB_108da8888:
      puVar9 = puVar9 + 4;
      param_3 = (ulong)(iVar6 + 1);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



/* Entry: 108da88b8; end: 108da8a4b;  */

byte * FUN_108da88b8(byte *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  if ((((param_4 != (char *)0x0) && (*param_4 == -0x66)) &&
      (lVar6 = *(long *)(param_4 + 0x40), lVar6 != 0)) && ((*(byte *)(lVar6 + 0x46) >> 4 & 1) != 0))
  {
    puVar7 = (undefined8 *)(lVar6 + 0x58);
    do {
      puVar9 = (undefined8 *)*puVar7;
      puVar7 = puVar9 + 5;
    } while ((byte *)*puVar9 != param_1);
    plVar10 = (long *)puVar9[2];
    lVar6 = *plVar10;
    if ((*(long *)(lVar6 + 0x90) != 0) &&
       (pbVar3 = param_1, FUN_108d68d58(param_1,*(undefined8 *)(param_2 + 0x30)),
       pbVar3 != (byte *)0x0)) {
      bVar1 = *pbVar3;
      pbVar2 = pbVar3;
      while (bVar1 != 0) {
        *pbVar2 = (&UNK_10dfa05fd)[bVar1];
        bVar1 = pbVar2[1];
        pbVar2 = pbVar2 + 1;
      }
      (**(code **)(lVar6 + 0x90))(plVar10,param_3,pbVar3,&uStack_48,&uStack_50);
      func_0x000108d60660(param_1,pbVar3);
      if ((int)plVar10 != 0) {
        uVar4 = *(ulong *)(param_2 + 0x30);
        if (uVar4 == 0) {
          lVar6 = 0x49;
        }
        else {
          _strlen();
          lVar6 = (uVar4 & 0x3fffffff) + 0x49;
        }
        FUN_108d68fc8(param_1,lVar6);
        if (param_1 != (byte *)0x0) {
          uVar12 = *(undefined8 *)(param_2 + 0x18);
          uVar11 = *(undefined8 *)(param_2 + 0x10);
          uVar14 = *(undefined8 *)(param_2 + 0x28);
          uVar13 = *(undefined8 *)(param_2 + 0x20);
          uVar8 = *(undefined8 *)(param_2 + 0x40);
          uVar15 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
          *(undefined8 *)(param_1 + 0x30) = uVar15;
          uVar16 = *(undefined8 *)(param_2 + 8);
          uVar15 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 0x40) = uVar8;
          *(undefined8 *)(param_1 + 0x18) = uVar12;
          *(undefined8 *)(param_1 + 0x10) = uVar11;
          *(undefined8 *)(param_1 + 0x28) = uVar14;
          *(undefined8 *)(param_1 + 0x20) = uVar13;
          *(undefined8 *)(param_1 + 8) = uVar16;
          *(undefined8 *)param_1 = uVar15;
          *(byte **)(param_1 + 0x30) = param_1 + 0x48;
          uVar4 = *(ulong *)(param_2 + 0x30);
          if (uVar4 == 0) {
            lVar6 = 1;
          }
          else {
            uVar5 = uVar4;
            _strlen(uVar4);
            lVar6 = (uVar5 & 0x3fffffff) + 1;
          }
          _memcpy(param_1 + 0x48,uVar4,lVar6);
          *(undefined8 *)(param_1 + 0x18) = uStack_48;
          *(undefined8 *)(param_1 + 8) = uStack_50;
          *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x10;
          param_2 = param_1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 108da8a4c; end: 108da95f3;  */

undefined4 FUN_108da8a4c(long *param_1,char *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  undefined1 uStack_91;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar5 = param_1;
  FUN_108d70f98();
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
  if (((byte)param_2[4] >> 5 & 1) == 0) {
    plVar18 = param_1;
    FUN_108d70f98();
    *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 1;
    FUN_108d71098();
  }
  else {
    plVar18 = (long *)0xffffffff;
  }
  if (*(char *)((long)param_1 + 0x1f2) == '\x02') {
    lVar6 = *param_1;
    FUN_108d6a8e0(lVar6,&UNK_10f51912b);
    plVar19 = plVar5;
    FUN_108d71098(plVar5,0x9d,(int)param_1[0x40],0,0);
    FUN_108d6aaec(plVar5,plVar19,lVar6,0xffffffff);
  }
  cVar2 = *param_2;
  iVar14 = (int)param_3;
  if (cVar2 != 'K') {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar1 = *(int *)((long)param_1 + 0x54) + 1;
    *(uint *)((long)param_1 + 0x54) = uVar1;
    uStack_90._0_2_ = (ushort)(byte)uStack_90;
    uStack_88 = 0;
    uStack_90 = (code *)CONCAT44(uVar1,(undefined4)uStack_90);
    if (cVar2 == 'w') {
      uStack_88 = (ulong)uVar1;
      uVar10 = 10;
      uVar17 = 0x1c;
    }
    else {
      uVar10 = 3;
      uVar17 = 0x19;
    }
    FUN_108d71098(plVar5,uVar17,0,uVar1,0);
    uStack_90 = (code *)CONCAT71(uStack_90._1_7_,uVar10);
    func_0x000108d93df0(*param_1,*(undefined8 *)(lVar6 + 0x60));
    plVar19 = param_1;
    func_0x000108d99b04(param_1,0x84,0,0,&PTR_s_1_110ac4a98);
    *(long **)(lVar6 + 0x60) = plVar19;
    *(undefined4 *)(lVar6 + 0xc) = 0;
    *(ushort *)(lVar6 + 10) = *(ushort *)(lVar6 + 10) & 0xfeff;
    plVar19 = param_1;
    FUN_108d9b494(param_1,lVar6,&uStack_90);
    if ((int)plVar19 != 0) {
      return 0;
    }
    uVar15 = uStack_90._4_4_;
    goto joined_r0x000108da8d58;
  }
  iVar4 = (int)*(undefined8 *)(param_2 + 0x10);
  FUN_108daaf34();
  iVar14 = (int)param_1[10];
  *(int *)(param_1 + 10) = iVar14 + 1;
  *(int *)(param_2 + 0x2c) = iVar14;
  plVar19 = plVar5;
  uStack_91 = (char)iVar4;
  FUN_108d71098(plVar5,0x39,iVar14,param_4 ^ 1,0);
  if (param_4 == 0) {
    lVar6 = *param_1;
    piVar11 = (int *)0x3a;
    FUN_108d60848();
    if (piVar11 == (int *)0x0) {
      *(undefined1 *)(lVar6 + 0x51) = 1;
      goto LAB_108da8ba0;
    }
    piVar11[2] = 0;
    piVar11[3] = 0;
    piVar11[0] = 0;
    piVar11[1] = 0;
    piVar11[6] = 0;
    piVar11[7] = 0;
    piVar11[4] = 0;
    piVar11[5] = 0;
    *(undefined8 *)((long)piVar11 + 0x32) = 0;
    *(undefined8 *)((long)piVar11 + 0x2a) = 0;
    piVar11[10] = 0;
    piVar11[0xb] = 0;
    piVar11[8] = 0;
    piVar11[9] = 0;
    *(int **)(piVar11 + 6) = piVar11 + 0xc;
    *(undefined4 *)((long)piVar11 + 6) = 0x10001;
    *(undefined1 *)(piVar11 + 1) = *(undefined1 *)(lVar6 + 0x4e);
    *(long *)(piVar11 + 4) = lVar6;
    *piVar11 = 1;
  }
  else {
LAB_108da8ba0:
    piVar11 = (int *)0x0;
  }
  plVar16 = *(long **)(param_2 + 0x20);
  if (((byte)param_2[5] >> 3 & 1) == 0) {
    if (plVar16 != (long *)0x0) {
      if (iVar4 == 0) {
        uStack_91 = 0x41;
      }
      if (piVar11 != (int *)0x0) {
        plVar7 = param_1;
        FUN_108da85d0(param_1,*(undefined8 *)(param_2 + 0x10));
        *(long **)(piVar11 + 8) = plVar7;
      }
      cVar2 = *(char *)((long)param_1 + 0x1f);
      if (cVar2 == '\0') {
        iVar14 = *(int *)((long)param_1 + 0x54) + 1;
        iVar4 = iVar14;
LAB_108da8da0:
        iVar4 = iVar4 + 1;
        *(int *)((long)param_1 + 0x54) = iVar4;
      }
      else {
        *(byte *)((long)param_1 + 0x1f) = cVar2 - 1U;
        iVar14 = *(int *)((long)param_1 + (ulong)(byte)(cVar2 - 1U) * 4 + 0x24);
        if (cVar2 == '\x01') {
          iVar4 = *(int *)((long)param_1 + 0x54);
          goto LAB_108da8da0;
        }
        *(byte *)((long)param_1 + 0x1f) = cVar2 - 2U;
        iVar4 = *(int *)((long)param_1 + (ulong)(byte)(cVar2 - 2U) * 4 + 0x24);
      }
      if (param_4 != 0) {
        FUN_108d71098(plVar5,0x1c,0,iVar4,0);
      }
      if (0 < (int)*plVar16) {
        puVar12 = (undefined8 *)plVar16[1];
        iVar13 = (int)*plVar16 + 1;
        do {
          uVar17 = *puVar12;
          if ((int)plVar18 < 0) {
LAB_108da8e24:
            if (param_4 != 0) goto LAB_108da8e28;
LAB_108da8e64:
            plVar16 = param_1;
            FUN_108da6d64(param_1,uVar17,iVar14);
            plVar7 = plVar5;
            FUN_108d71098(plVar5,0x31,plVar16,1,iVar4);
            FUN_108d6aaec(plVar5,plVar7,&uStack_91,1);
            func_0x000108da8510(param_1,plVar16,1);
            uVar15 = *(undefined4 *)(param_2 + 0x2c);
            uVar17 = 0x6e;
            plVar16 = (long *)0x0;
          }
          else {
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0x100000000;
            uStack_90 = FUN_108daa264;
            uStack_88 = 0x108daa314;
            FUN_108daa320(&uStack_90,uVar17);
            if (uStack_70._4_1_ != '\0') goto LAB_108da8e24;
            func_0x000108d6ac04(plVar5,plVar18);
            plVar18 = (long *)0xffffffff;
            if (param_4 == 0) goto LAB_108da8e64;
LAB_108da8e28:
            uVar8 = uVar17;
            func_0x000108dab090(uVar17,&uStack_90);
            if ((int)uVar8 == 0) {
              plVar16 = param_1;
              FUN_108da6d64(param_1,uVar17,iVar14);
              FUN_108d71098(plVar5,0x26,plVar16,*(int *)((long)plVar5 + 0x3c) + 2,0);
              uVar15 = *(undefined4 *)(param_2 + 0x2c);
              uVar17 = 0x4b;
            }
            else {
              uVar15 = *(undefined4 *)(param_2 + 0x2c);
              plVar16 = (long *)((ulong)uStack_90 & 0xffffffff);
              uVar17 = 0x54;
            }
          }
          FUN_108d71098(plVar5,uVar17,uVar15,iVar4,plVar16);
          puVar12 = puVar12 + 4;
          iVar13 = iVar13 + -1;
        } while (1 < iVar13);
      }
      param_3 = param_3 & 0xffffffff;
      if (iVar14 != 0) {
        bVar3 = *(byte *)((long)param_1 + 0x1f);
        if (bVar3 < 8) {
          puVar9 = (undefined1 *)((long)param_1 + 0x8e);
          iVar13 = 10;
          do {
            if (*(int *)(puVar9 + 6) == iVar14) {
              *puVar9 = 1;
              goto LAB_108da8f78;
            }
            puVar9 = puVar9 + 0x14;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          *(byte *)((long)param_1 + 0x1f) = bVar3 + 1;
          *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x24) = iVar14;
        }
      }
LAB_108da8f78:
      if (iVar4 == 0) {
        plVar19 = (long *)((ulong)plVar19 & 0xffffffff);
      }
      else {
        bVar3 = *(byte *)((long)param_1 + 0x1f);
        plVar19 = (long *)((ulong)plVar19 & 0xffffffff);
        if (bVar3 < 8) {
          puVar9 = (undefined1 *)((long)param_1 + 0x8e);
          iVar14 = 10;
          do {
            if (*(int *)(puVar9 + 6) == iVar4) {
              *puVar9 = 1;
              goto joined_r0x000108da9058;
            }
            puVar9 = puVar9 + 0x14;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          *(byte *)((long)param_1 + 0x1f) = bVar3 + 1;
          *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x24) = iVar4;
        }
      }
    }
joined_r0x000108da9058:
    if (piVar11 != (int *)0x0) goto LAB_108da8fcc;
  }
  else {
    uStack_90 = (code *)CONCAT71(uStack_90._1_7_,0xb);
    uStack_88 = 0;
    uStack_90 = (code *)CONCAT44(*(undefined4 *)(param_2 + 0x2c),(undefined4)uStack_90);
    uStack_90._0_2_ = CONCAT11((char)iVar4,0xb);
    *(int *)((long)plVar16 + 0xc) = 0;
    plVar7 = param_1;
    FUN_108d9b494(param_1,plVar16,&uStack_90);
    if ((int)plVar7 != 0) {
      if ((piVar11 != (int *)0x0) && (iVar14 = *piVar11, *piVar11 = iVar14 + -1, iVar14 + -1 == 0))
      {
        func_0x000108d5e198(piVar11);
      }
      return 0;
    }
    plVar7 = param_1;
    FUN_108daaedc(param_1,*(undefined8 *)(param_2 + 0x10),**(undefined8 **)(*plVar16 + 8));
    *(long **)(piVar11 + 8) = plVar7;
LAB_108da8fcc:
    FUN_108d6aaec(plVar5,plVar19,piVar11,0xfffffffa);
  }
  uVar15 = 0;
  iVar14 = (int)param_3;
joined_r0x000108da8d58:
  if (iVar14 != 0) {
    FUN_108dab108(plVar5,*(undefined4 *)(param_2 + 0x2c),param_3);
  }
  if (-1 < (int)(uint)plVar18) {
    uVar1 = *(uint *)((long)plVar5 + 0x3c);
    if ((uint)plVar18 < uVar1) {
      *(uint *)(plVar5[1] + ((ulong)plVar18 & 0xffffffff) * 0x18 + 8) = uVar1;
    }
    *(uint *)(plVar5[6] + 100) = uVar1 - 1;
  }
  func_0x000108da8568(param_1);
  return uVar15;
}



/* Entry: 108da95f4; end: 108da99ab;  */

void FUN_108da95f4(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uStack_48;
  
  lVar11 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (lVar11 == 0) {
    return;
  }
  bVar4 = *param_2;
  uVar12 = (uint)bVar4;
  uVar10 = (uint)param_4;
  lVar6 = param_1;
  lVar7 = param_1;
  if (0x4d < bVar4) {
    if (uVar12 - 0x4e < 6) {
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_48 + 4);
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_48);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      bVar4 = bVar4 ^ 1;
    }
    else {
      if (uVar12 != 0x94) goto LAB_108da97d8;
LAB_108da975c:
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_48 + 4);
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_48);
      bVar4 = 0x4e;
      if (*param_2 != 0x49) {
        bVar4 = 0x4f;
      }
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_4 = 0x80;
    }
    FUN_108da83dc(param_1,uVar2,uVar5,bVar4,lVar6,lVar7,param_3,param_4);
    goto LAB_108da9870;
  }
  if (bVar4 < 0x4a) {
    if (uVar12 == 0x47 || bVar4 < 0x47) {
      if (uVar12 == 0x13) {
        FUN_108dab73c(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
        goto LAB_108da9870;
      }
      if (uVar12 != 0x47) goto LAB_108da97d8;
      uVar2 = *(undefined8 *)(lVar11 + 0x30);
      FUN_108da84a4();
      FUN_108dab73c(param_1,*(undefined8 *)(param_2 + 0x10),uVar2,uVar10 ^ 0x10);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_108da95f4(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
      lVar6 = *(long *)(lVar11 + 0x30);
      if (((int)(uint)uVar2 < 0) && (lVar7 = *(long *)(lVar6 + 0x80), lVar7 != 0)) {
        *(undefined4 *)(lVar7 + (ulong)~(uint)uVar2 * 4) = *(undefined4 *)(lVar11 + 0x3c);
      }
      *(int *)(lVar6 + 100) = *(int *)(lVar11 + 0x3c) + -1;
    }
    else {
      if (uVar12 != 0x48) {
        if (uVar12 == 0x49) goto LAB_108da975c;
        goto LAB_108da97d8;
      }
      FUN_108da95f4(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_108da95f4(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
    }
    func_0x000108da8568(param_1);
    goto LAB_108da9870;
  }
  if (uVar12 - 0x4c < 2) {
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_48 + 4);
    bVar4 = bVar4 ^ 1;
LAB_108da97f0:
    bVar1 = false;
  }
  else {
    if (bVar4 == 0x4a) {
      FUN_108dabaf0(param_1,param_2,param_3,0,param_4);
      goto LAB_108da9870;
    }
    if (uVar12 == 0x4b) {
      if (uVar10 == 0) {
        uVar2 = *(undefined8 *)(lVar11 + 0x30);
        FUN_108da84a4();
        func_0x000108da9060(param_1,param_2,param_3,uVar2);
        lVar6 = *(long *)(lVar11 + 0x30);
        if (((int)(uint)uVar2 < 0) && (lVar7 = *(long *)(lVar6 + 0x80), lVar7 != 0)) {
          *(undefined4 *)(lVar7 + (ulong)~(uint)uVar2 * 4) = *(undefined4 *)(lVar11 + 0x3c);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar11 + 0x3c) + -1;
      }
      else {
        func_0x000108da9060(param_1,param_2,param_3,param_3);
      }
      goto LAB_108da9870;
    }
LAB_108da97d8:
    pbVar3 = param_2;
    FUN_108dabc34();
    if ((int)pbVar3 != 0) {
      bVar4 = 0x10;
      lVar6 = 0;
      goto LAB_108da97f0;
    }
    pbVar3 = param_2;
    func_0x000108dabc78();
    if ((int)pbVar3 != 0) goto LAB_108da9870;
    FUN_108da8210(param_1,param_2,(long)&uStack_48 + 4);
    bVar1 = uVar10 != 0;
    bVar4 = 0x2e;
  }
  FUN_108d71098(lVar11,bVar4,lVar6,param_3,bVar1);
LAB_108da9870:
  if (uStack_48._4_4_ != 0) {
    bVar4 = *(byte *)(param_1 + 0x1f);
    if (bVar4 < 8) {
      puVar8 = (undefined1 *)(param_1 + 0x8e);
      iVar9 = 10;
      do {
        if (*(int *)(puVar8 + 6) == uStack_48._4_4_) {
          *puVar8 = 1;
          goto LAB_108da98c0;
        }
        puVar8 = puVar8 + 0x14;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      *(byte *)(param_1 + 0x1f) = bVar4 + 1;
      *(int *)(param_1 + (ulong)bVar4 * 4 + 0x24) = uStack_48._4_4_;
    }
  }
LAB_108da98c0:
  if ((int)uStack_48 != 0) {
    bVar4 = *(byte *)(param_1 + 0x1f);
    if (bVar4 < 8) {
      puVar8 = (undefined1 *)(param_1 + 0x8e);
      iVar9 = 10;
      do {
        if (*(int *)(puVar8 + 6) == (int)uStack_48) {
          *puVar8 = 1;
          return;
        }
        puVar8 = puVar8 + 0x14;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      *(byte *)(param_1 + 0x1f) = bVar4 + 1;
      *(int *)(param_1 + (ulong)bVar4 * 4 + 0x24) = (int)uStack_48;
    }
  }
  return;
}



/* Entry: 108da99ac; end: 108da9a5f;  */

void FUN_108da99ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_108d70f98();
  if ((int)param_3 == 2) {
    if (*(long *)(param_1 + 0x1c0) != 0) {
      param_1 = *(long *)(param_1 + 0x1c0);
    }
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  lVar2 = lVar1;
  FUN_108d71098(lVar1,0x18,param_2,param_3,0);
  FUN_108d6aaec(lVar1,lVar2,param_4,param_5);
  if ((param_6 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    *(char *)(*(long *)(lVar1 + 8) + (long)*(int *)(lVar1 + 0x3c) * 0x18 + -0x15) = (char)param_6;
  }
  return;
}



/* Entry: 108da9a60; end: 108da9b5b;  */

void FUN_108da9a60(long *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  ushort *puVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lStack_38;
  
  uVar1 = (uint)param_4;
  if (((int)uVar1 < 0) || (uVar1 == (int)*(short *)(param_2 + 0x3c))) {
    uVar5 = 0x67;
    param_4 = param_5;
    uVar2 = 0;
  }
  else {
    uVar5 = 0x2f;
    if ((*(byte *)(param_2 + 0x46) & 0x10) != 0) {
      uVar5 = 0x96;
    }
    uVar2 = param_5;
    if ((*(byte *)(param_2 + 0x46) >> 5 & 1) != 0) {
      for (lVar4 = *(long *)(param_2 + 0x10); (lVar4 != 0 && ((*(byte *)(lVar4 + 0x5b) & 3) != 2));
          lVar4 = *(long *)(lVar4 + 0x28)) {
      }
      if ((ulong)*(ushort *)(lVar4 + 0x58) != 0) {
        lVar6 = 0;
        puVar3 = *(ushort **)(lVar4 + 8);
        do {
          if ((uint)*puVar3 == (uVar1 & 0xffff)) {
            param_4 = (ulong)(uint)((int)lVar6 >> 0x10);
            goto LAB_108da9b24;
          }
          lVar6 = lVar6 + 0x10000;
          puVar3 = puVar3 + 1;
        } while ((ulong)*(ushort *)(lVar4 + 0x58) * 0x10000 - lVar6 != 0);
      }
      param_4 = 0xffffffff;
    }
  }
LAB_108da9b24:
  FUN_108d71098(param_1,uVar5,param_3,param_4,uVar2);
  if ((int)uVar1 < 0) {
    return;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    return;
  }
  lStack_38 = 0;
  lVar4 = *(long *)(param_2 + 8) + (long)(int)uVar1 * 0x30;
  FUN_108da9cb0(*param_1,*(undefined8 *)(lVar4 + 8),*(undefined1 *)(*param_1 + 0x4e),
                *(undefined1 *)(lVar4 + 0x29),&lStack_38);
  if (lStack_38 != 0) {
    FUN_108d6aaec(param_1,0xffffffff,lStack_38,0xfffffff8);
  }
  if (*(char *)(*(long *)(param_2 + 8) + (long)(int)uVar1 * 0x30 + 0x29) == 'E') {
    FUN_108d71098(param_1,0x27,param_5,0,0);
  }
  return;
}



/* Entry: 108da9b5c; end: 108da9bfb;  */

void FUN_108da9b5c(long *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(ushort *)(*param_1 + 0x4c) >> 1 & 1) == 0) {
    iVar6 = 10;
    plVar5 = param_1 + 0x11;
    do {
      if (*(int *)((long)plVar5 + 0xc) == 0) {
        lVar2 = param_1[0xe];
        *(undefined4 *)plVar5 = param_2;
        *(undefined2 *)((long)plVar5 + 4) = param_3;
        *(int *)(plVar5 + 1) = (int)lVar2;
        goto LAB_108da9be0;
      }
      plVar5 = (long *)((long)plVar5 + 0x14);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = 0x7fffffff;
    uVar7 = 0;
    plVar5 = param_1 + 0x13;
    uVar4 = 0xffffffff;
    do {
      uVar1 = uVar7;
      iVar3 = (int)*plVar5;
      if (iVar6 <= (int)*plVar5) {
        uVar1 = uVar4;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar7 = uVar7 + 1;
      plVar5 = (long *)((long)plVar5 + 0x14);
      uVar4 = uVar1;
    } while (uVar7 != 10);
    if (-1 < (int)uVar1) {
      lVar2 = param_1[0xe];
      plVar5 = (long *)((long)(param_1 + 0x11) + (ulong)uVar1 * 0x14);
      *(undefined4 *)plVar5 = param_2;
      *(undefined2 *)((long)plVar5 + 4) = param_3;
      *(int *)(plVar5 + 1) = (int)lVar2;
LAB_108da9be0:
      *(undefined4 *)((long)plVar5 + 0xc) = param_4;
      *(undefined1 *)((long)plVar5 + 6) = 0;
      iVar6 = *(int *)((long)param_1 + 0x74);
      *(int *)((long)param_1 + 0x74) = iVar6 + 1;
      *(int *)(plVar5 + 2) = iVar6;
    }
  }
  return;
}



/* Entry: 108da9bfc; end: 108da9caf;  */

void FUN_108da9bfc(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_38;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    return;
  }
  lStack_38 = 0;
  lVar1 = *(long *)(param_2 + 8) + (long)param_3 * 0x30;
  FUN_108da9cb0(*param_1,*(undefined8 *)(lVar1 + 8),*(undefined1 *)(*param_1 + 0x4e),
                *(undefined1 *)(lVar1 + 0x29),&lStack_38);
  if (lStack_38 != 0) {
    FUN_108d6aaec(param_1,0xffffffff,lStack_38,0xfffffff8);
  }
  if (*(char *)(*(long *)(param_2 + 8) + (long)param_3 * 0x30 + 0x29) == 'E') {
    FUN_108d71098(param_1,0x27,param_4,0,0);
  }
  return;
}



/* Entry: 108da9cb0; end: 108daa04b;  */

double * FUN_108da9cb0(double *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                      long *param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  double *pdStack_68;
  
  pdStack_68 = (double *)0x0;
  if (param_2 == (byte *)0x0) {
    *param_5 = 0;
    return (double *)0x0;
  }
  for (; bVar1 = *param_2, bVar1 == 0x9e; param_2 = *(byte **)(param_2 + 0x10)) {
  }
  if (bVar1 == 0x9f) {
    bVar1 = param_2[0x36];
  }
  uVar9 = (uint)bVar1;
  if (uVar9 == 0x9d) {
    param_2 = *(byte **)(param_2 + 0x10);
    uVar9 = (uint)*param_2;
    if ((uVar9 & 0xfe) == 0x84) {
      iVar10 = -1;
      goto LAB_108da9dac;
    }
    FUN_108da9cb0(param_1,param_2,param_3,param_4,&pdStack_68);
    pdVar6 = pdStack_68;
    pdVar8 = (double *)0x0;
    if (((int)param_1 != 0) || (pdStack_68 == (double *)0x0)) goto LAB_108daa024;
    func_0x000108d8d91c(pdStack_68);
    if ((*(ushort *)(pdVar6 + 1) >> 3 & 1) == 0) {
      if (*pdVar6 == -0.0) {
        *pdVar6 = 9.223372036854776e+18;
        *(ushort *)(pdVar6 + 1) = *(ushort *)(pdVar6 + 1) & 0xbe00 | 8;
      }
      else {
        *pdVar6 = (double)-(long)*pdVar6;
      }
    }
    else {
      *pdVar6 = -*pdVar6;
    }
    func_0x000108d893f8(pdVar6,(int)(char)param_4,param_3);
  }
  else {
    if (uVar9 == 0x26) {
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000108da803c(uVar3,0);
      FUN_108da9cb0(param_1,*(undefined8 *)(param_2 + 0x10),param_3,(uint)uVar3 & 0xff,param_5);
      if (*param_5 == 0) {
        return param_1;
      }
      func_0x000108d894c0(*param_5,(uint)uVar3 & 0xff,1);
      func_0x000108d893f8(*param_5,(int)(char)param_4,1);
      return param_1;
    }
    iVar10 = 1;
LAB_108da9dac:
    pdVar8 = (double *)0x0;
    pdVar6 = (double *)0x0;
    if (uVar9 < 0x84) {
      if (uVar9 != 0x61) {
        if (uVar9 == 0x65) {
          pdVar5 = param_1;
          FUN_108d6a6fc(param_1,0x38);
          pdVar6 = (double *)0x0;
          if (pdVar5 != (double *)0x0) {
            pdVar8 = (double *)0x0;
            pdVar5[3] = 0.0;
            pdVar5[2] = 0.0;
            pdVar5[5] = 0.0;
            pdVar5[4] = 0.0;
            pdVar5[1] = 0.0;
            *pdVar5 = 0.0;
            *(undefined2 *)(pdVar5 + 1) = 1;
            pdVar5[5] = (double)param_1;
            pdVar5[6] = 0.0;
            pdVar6 = pdVar5;
            goto LAB_108daa024;
          }
          goto LAB_108da9ef8;
        }
        goto LAB_108daa024;
      }
    }
    else if (1 < uVar9 - 0x84) {
      if (uVar9 != 0x86) goto LAB_108daa024;
      pdVar8 = param_1;
      FUN_108d6a6fc(param_1,0x38);
      pdVar6 = (double *)0x0;
      if (pdVar8 == (double *)0x0) goto LAB_108da9ef8;
      pdVar8[3] = 0.0;
      pdVar8[2] = 0.0;
      pdVar8[5] = 0.0;
      pdVar8[4] = 0.0;
      pdVar8[1] = 0.0;
      *pdVar8 = 0.0;
      *(undefined2 *)(pdVar8 + 1) = 1;
      pdVar8[5] = (double)param_1;
      pdVar8[6] = 0.0;
      lVar7 = *(long *)(param_2 + 8);
      lVar4 = lVar7 + 2;
      _strlen(lVar4);
      iVar10 = ((uint)lVar4 & 0x3fffffff) - 1;
      func_0x000108da7f9c(param_1,lVar7 + 2,iVar10);
      FUN_108d67c04(pdVar8,param_1,iVar10 / 2,0,FUN_108d627f0);
      pdVar6 = pdVar8;
      goto LAB_108daa020;
    }
    pdVar6 = param_1;
    FUN_108d6a6fc(param_1,0x38);
    if (pdVar6 == (double *)0x0) {
LAB_108da9ef8:
      *(undefined1 *)((long)param_1 + 0x51) = 1;
      FUN_108d6d618(pdVar6);
      return (double *)0x7;
    }
    pdVar6[3] = 0.0;
    pdVar6[2] = 0.0;
    pdVar6[5] = 0.0;
    pdVar6[4] = 0.0;
    pdVar6[1] = 0.0;
    *pdVar6 = 0.0;
    *(undefined2 *)(pdVar6 + 1) = 1;
    pdVar6[5] = (double)param_1;
    pdVar6[6] = 0.0;
    if ((param_2[5] >> 2 & 1) == 0) {
      pdVar8 = param_1;
      FUN_108d6a8e0(param_1,&UNK_10f48da3e);
      if (pdVar8 == (double *)0x0) goto LAB_108da9ef8;
      FUN_108d67c04(pdVar6,pdVar8,0xffffffff,1,FUN_108d627f0);
    }
    else {
      *pdVar6 = (double)((long)iVar10 * (long)*(int *)(param_2 + 8));
      *(undefined2 *)(pdVar6 + 1) = 4;
    }
    iVar10 = 0x43;
    if ((uVar9 & 0xe4) != 0x84 || (int)param_4 != 0x41) {
      iVar10 = (int)param_4;
    }
    func_0x000108d893f8(pdVar6,(int)(char)iVar10,1);
    uVar2 = *(ushort *)(pdVar6 + 1);
    uVar9 = (uint)uVar2;
    if ((uVar2 & 0xc) != 0) {
      uVar9 = uVar2 & 0xfffffffd;
      *(short *)(pdVar6 + 1) = (short)uVar9;
    }
    pdVar8 = (double *)0x0;
    if (((uint)param_3 == 1) || ((uVar9 >> 1 & 1) == 0)) goto LAB_108daa024;
    if ((uint)param_3 != (uint)*(byte *)((long)pdVar6 + 10)) {
      pdVar8 = pdVar6;
      FUN_108d833e4(pdVar6,param_3);
      goto LAB_108daa024;
    }
  }
LAB_108daa020:
  pdVar8 = (double *)0x0;
LAB_108daa024:
  *param_5 = (long)pdVar6;
  return pdVar8;
}



/* Entry: 108daa04c; end: 108daa1eb;  */

undefined4 FUN_108daa04c(char *param_1,char *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    if (param_2 == param_1) {
      return 0;
    }
    return 2;
  }
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_2 + 4);
  uVar5 = uVar2 | uVar1;
  if ((uVar5 >> 10 & 1) == 0) {
    cVar3 = *param_1;
    cVar4 = *param_2;
    if (cVar3 == cVar4) {
      if ((((cVar3 != -0x66) && (cVar3 != -100)) && (lVar6 = *(long *)(param_1 + 8), lVar6 != 0)) &&
         (_strcmp(lVar6,*(undefined8 *)(param_2 + 8)), (int)lVar6 != 0)) {
        if (cVar3 == '_') {
          return 1;
        }
        return 2;
      }
      if (((uVar2 ^ uVar1) >> 4 & 1) != 0) {
        return 2;
      }
      if ((uVar5 >> 0xe & 1) != 0) {
        return 0;
      }
      if ((uVar5 >> 0xb & 1) != 0) {
        return 2;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      FUN_108daa04c(uVar7,*(undefined8 *)(param_2 + 0x10),param_3);
      if ((int)uVar7 != 0) {
        return 2;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      FUN_108daa04c(uVar7,*(undefined8 *)(param_2 + 0x18),param_3);
      if ((int)uVar7 != 0) {
        return 2;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x000108daa588(uVar7,*(undefined8 *)(param_2 + 0x20),param_3);
      if ((int)uVar7 != 0) {
        return 2;
      }
      if (((uVar5 >> 0xd & 1) != 0) || (cVar3 == 'a')) {
        return 0;
      }
      if (*(short *)(param_1 + 0x30) != *(short *)(param_2 + 0x30)) {
        return 2;
      }
      if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
        if (*(int *)(param_1 + 0x2c) != (int)param_3) {
          return 2;
        }
        if (-1 < *(int *)(param_2 + 0x2c)) {
          return 2;
        }
        return 0;
      }
      return 0;
    }
    if (cVar3 == '_') {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      FUN_108daa04c(uVar7,param_2,param_3);
      if ((uint)uVar7 < 2) {
        return 1;
      }
    }
    if ((cVar4 == '_') &&
       (FUN_108daa04c(param_1,*(undefined8 *)(param_2 + 0x10),param_3), (uint)param_1 < 2)) {
      return 1;
    }
  }
  else if ((((uVar1 & uVar2) >> 10 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    return 0;
  }
  return 2;
}



/* Entry: 108daa1ec; end: 108daa263;  */

void FUN_108daa1ec(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = param_1[0x2a];
  uVar2 = *param_1;
  FUN_108daa624(uVar2,param_2,0,0);
  piVar3 = (int *)*param_1;
  FUN_108d9ccd4(piVar3,uVar4,uVar2);
  if (piVar3 != (int *)0x0) {
    lVar1 = *(long *)(piVar3 + 2) + (long)*piVar3 * 0x20;
    *(undefined4 *)(lVar1 + -4) = param_3;
    *(byte *)(lVar1 + -7) = *(byte *)(lVar1 + -7) & 0xfb | param_4 << 2;
  }
  param_1[0x2a] = piVar3;
  return;
}



/* Entry: 108daa264; end: 108daa31f;  */

undefined8 FUN_108daa264(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if ((bVar1 != 2) || ((param_2[4] & 1) == 0)) {
    uVar2 = (uint)*param_2;
    if (*param_2 < 0x9a) {
      if (uVar2 != 0x1b) {
        if (uVar2 == 0x87) {
          if (bVar1 != 4) {
            if (bVar1 != 5) {
              return 0;
            }
            *param_2 = 0x65;
            return 0;
          }
        }
        else {
          if (uVar2 != 0x99) {
            return 0;
          }
          if (3 < bVar1) {
            return 0;
          }
          if ((param_2[6] >> 3 & 1) != 0) {
            return 0;
          }
        }
        goto LAB_108daa2fc;
      }
    }
    else if (2 < uVar2 - 0x9a) {
      return 0;
    }
    if ((bVar1 == 3) && (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x28))) {
      return 0;
    }
  }
LAB_108daa2fc:
  *(undefined1 *)(param_1 + 0x24) = 0;
  return 2;
}



/* Entry: 108daa320; end: 108daa623;  */

uint FUN_108daa320(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar3 = param_1;
  (*(code *)*param_1)();
  if (((uint)puVar3 == 0) && ((*(byte *)(param_2 + 5) >> 6 & 1) == 0)) {
    puVar4 = param_1;
    FUN_108daa320(param_1,*(undefined8 *)(param_2 + 0x10));
    if (((int)puVar4 == 0) &&
       (puVar4 = param_1, FUN_108daa320(param_1,*(undefined8 *)(param_2 + 0x18)), (int)puVar4 == 0))
    {
      if ((*(byte *)(param_2 + 5) >> 3 & 1) == 0) {
        func_0x000108daa51c();
        iVar1 = (int)param_1;
      }
      else {
        func_0x000108daa3c0(param_1,*(undefined8 *)(param_2 + 0x20));
        iVar1 = (int)param_1;
      }
      if (iVar1 == 0) goto LAB_108daa3ac;
    }
    uVar2 = 2;
  }
  else {
LAB_108daa3ac:
    uVar2 = (uint)puVar3 & 2;
  }
  return uVar2;
}



/* Entry: 108daa624; end: 108daa85b;  */

long FUN_108daa624(long param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lStack_68;
  
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    if (param_4 == (long *)0x0) {
      uVar2 = param_2;
      FUN_108daa85c(param_2,param_3);
      lVar5 = param_1;
      FUN_108d6a6fc(param_1,uVar2 & 0xffffffff);
      uVar6 = 0;
    }
    else {
      lVar5 = *param_4;
      uVar6 = 0x8000;
    }
    if (lVar5 != 0) {
      if ((int)param_3 == 0) {
        uVar4 = 0x48;
      }
      else {
        uVar4 = 0x202c;
        if ((*(long *)(param_2 + 0x10) == 0) && (uVar4 = 0x4010, *(long *)(param_2 + 0x20) != 0)) {
          uVar4 = 0x202c;
        }
      }
      uVar1 = *(uint *)(param_2 + 4);
      if (((uVar1 >> 10 & 1) == 0) && (lVar3 = *(long *)(param_2 + 8), lVar3 != 0)) {
        _strlen();
        iVar7 = ((uint)lVar3 & 0x3fffffff) + 1;
      }
      else {
        iVar7 = 0;
      }
      if ((int)param_3 == 0) {
        lVar3 = 0x48;
        if ((uVar1 & 0x2000) != 0) {
          lVar3 = 0x2c;
        }
        if ((uVar1 & 0x4000) != 0) {
          lVar3 = 0x10;
        }
        _memcpy(lVar5,param_2,lVar3);
        _bzero(lVar5 + lVar3,0x48 - lVar3);
      }
      else {
        _memcpy(lVar5,param_2,(ulong)(uVar4 & 0x7c));
      }
      uVar6 = uVar4 & 0x6000 | uVar6 | *(uint *)(lVar5 + 4) & 0xfffe1fff;
      *(uint *)(lVar5 + 4) = uVar6;
      if (iVar7 != 0) {
        lVar3 = lVar5 + (ulong)(uVar4 & 0x7c);
        *(long *)(lVar5 + 8) = lVar3;
        _memcpy(lVar3,*(undefined8 *)(param_2 + 8),iVar7);
        uVar6 = *(uint *)(lVar5 + 4);
      }
      if (((*(uint *)(param_2 + 4) | uVar6) >> 0xe & 1) == 0) {
        lVar3 = param_1;
        if ((*(uint *)(param_2 + 4) >> 0xb & 1) == 0) {
          func_0x000108daaabc();
        }
        else {
          func_0x000108daa8c8(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
        }
        *(long *)(lVar5 + 0x20) = lVar3;
        uVar6 = *(uint *)(lVar5 + 4);
      }
      if ((uVar6 & 0x6000) == 0) {
        if ((*(byte *)(param_2 + 5) >> 6 & 1) == 0) {
          lVar3 = param_1;
          FUN_108daa624(param_1,*(undefined8 *)(param_2 + 0x10),0,0);
          *(long *)(lVar5 + 0x10) = lVar3;
          FUN_108daa624(param_1,*(undefined8 *)(param_2 + 0x18),0,0);
          *(long *)(lVar5 + 0x18) = param_1;
        }
      }
      else {
        uVar2 = param_2;
        FUN_108daabf4(param_2,param_3);
        lStack_68 = lVar5 + (uVar2 & 0xffffffff);
        if ((uVar6 >> 0xd & 1) != 0) {
          lVar3 = param_1;
          FUN_108daa624(param_1,*(undefined8 *)(param_2 + 0x10),1,&lStack_68);
          *(long *)(lVar5 + 0x10) = lVar3;
          FUN_108daa624(param_1,*(undefined8 *)(param_2 + 0x18),1,&lStack_68);
          *(long *)(lVar5 + 0x18) = param_1;
        }
        if (param_4 != (long *)0x0) {
          *param_4 = lStack_68;
        }
      }
    }
  }
  return lVar5;
}



/* Entry: 108daa85c; end: 108daa8c7;  */

int FUN_108daa85c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar4 = 0;
    do {
      lVar1 = param_1;
      FUN_108daabf4(param_1,param_2);
      iVar3 = (int)lVar1;
      if ((int)param_2 == 0) goto LAB_108daa8b4;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      param_2 = 1;
      FUN_108daa85c(uVar2,1);
      param_1 = *(long *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar4 + (int)uVar2;
    } while (param_1 != 0);
    iVar3 = 0;
LAB_108daa8b4:
    iVar3 = iVar3 + iVar4;
  }
  return iVar3;
}



/* Entry: 108daa8c8; end: 108daabf3;  */

int * FUN_108daa8c8(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 == (undefined8 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = param_1;
    FUN_108d6a6fc(param_1,0x78);
    if (piVar5 != (int *)0x0) {
      piVar7 = param_1;
      func_0x000108daaabc(param_1,*param_2,param_3);
      *(int **)piVar5 = piVar7;
      piVar7 = param_1;
      FUN_108daac5c(param_1,param_2[5],param_3);
      *(int **)(piVar5 + 10) = piVar7;
      piVar7 = param_1;
      FUN_108daa624(param_1,param_2[6],param_3,0);
      *(int **)(piVar5 + 0xc) = piVar7;
      piVar7 = param_1;
      func_0x000108daaabc(param_1,param_2[7],param_3);
      *(int **)(piVar5 + 0xe) = piVar7;
      piVar7 = param_1;
      FUN_108daa624(param_1,param_2[8],param_3,0);
      *(int **)(piVar5 + 0x10) = piVar7;
      piVar7 = param_1;
      func_0x000108daaabc(param_1,param_2[9],param_3);
      *(int **)(piVar5 + 0x12) = piVar7;
      *(undefined1 *)(piVar5 + 2) = *(undefined1 *)(param_2 + 1);
      piVar7 = param_1;
      FUN_108daa8c8(param_1,param_2[10],param_3);
      *(int **)(piVar5 + 0x14) = piVar7;
      if (piVar7 != (int *)0x0) {
        *(int **)(piVar7 + 0x16) = piVar5;
      }
      piVar5[0x16] = 0;
      piVar5[0x17] = 0;
      piVar7 = param_1;
      FUN_108daa624(param_1,param_2[0xc],param_3,0);
      *(int **)(piVar5 + 0x18) = piVar7;
      piVar7 = param_1;
      FUN_108daa624(param_1,param_2[0xd],param_3,0);
      *(int **)(piVar5 + 0x1a) = piVar7;
      *(ushort *)((long)piVar5 + 10) = *(ushort *)((long)param_2 + 10) & 0xfff7;
      piVar5[5] = -1;
      piVar5[6] = -1;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *(undefined8 *)(piVar5 + 8) = param_2[4];
      piVar7 = (int *)param_2[0xe];
      if (piVar7 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = param_1;
        FUN_108d68fc8(param_1,(long)(int)(*piVar7 << 5 | 0x10));
        if ((piVar6 != (int *)0x0) && (iVar3 = *piVar7, *piVar6 = iVar3, 0 < iVar3)) {
          lVar8 = 0;
          lVar9 = 0x20;
          do {
            puVar1 = (undefined8 *)((long)piVar7 + lVar9);
            piVar4 = param_1;
            FUN_108daa8c8(param_1,*puVar1,0);
            puVar2 = (undefined8 *)((long)piVar6 + lVar9);
            *puVar2 = piVar4;
            piVar4 = param_1;
            func_0x000108daaabc(param_1,puVar1[-1],0);
            puVar2[-1] = piVar4;
            piVar4 = param_1;
            FUN_108d68d58(param_1,puVar1[-2]);
            puVar2[-2] = piVar4;
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 0x20;
          } while (lVar8 < *piVar7);
        }
      }
      *(int **)(piVar5 + 0x1c) = piVar6;
    }
  }
  return piVar5;
}



/* Entry: 108daabf4; end: 108daac5b;  */

uint FUN_108daabf4(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0x48;
  }
  else {
    iVar2 = 0x2c;
    if ((*(long *)(param_1 + 0x10) == 0) && (iVar2 = 0x10, *(long *)(param_1 + 0x20) != 0)) {
      iVar2 = 0x2c;
    }
  }
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    _strlen();
    iVar2 = ((uint)lVar1 & 0x3fffffff) + iVar2 + 1;
  }
  return iVar2 + 7U & 0xfffffff8;
}



/* Entry: 108daac5c; end: 108daaedb;  */

int * FUN_108daac5c(int *param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    uVar4 = *param_2 * 0x70 | 8;
    if (*param_2 < 1) {
      uVar4 = 0x78;
    }
    piVar8 = param_1;
    FUN_108d6a6fc(param_1,(long)(int)uVar4);
    if (piVar8 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar8 = iVar2;
      piVar8[1] = iVar2;
      if (0 < iVar2) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          uVar7 = *(undefined8 *)((long)param_2 + lVar9 + 0x10);
          *(undefined8 *)((long)piVar8 + lVar9 + 8) = *(undefined8 *)((long)param_2 + lVar9 + 8);
          piVar5 = param_1;
          FUN_108d68d58(param_1,uVar7);
          *(int **)((long)piVar8 + lVar9 + 0x10) = piVar5;
          piVar5 = param_1;
          FUN_108d68d58(param_1,*(undefined8 *)((long)param_2 + lVar9 + 0x18));
          *(int **)((long)piVar8 + lVar9 + 0x18) = piVar5;
          piVar5 = param_1;
          FUN_108d68d58(param_1,*(undefined8 *)((long)param_2 + lVar9 + 0x20));
          *(int **)((long)piVar8 + lVar9 + 0x20) = piVar5;
          *(undefined1 *)((long)piVar8 + lVar9 + 0x44) =
               *(undefined1 *)((long)param_2 + lVar9 + 0x44);
          *(undefined4 *)((long)piVar8 + lVar9 + 0x48) =
               *(undefined4 *)((long)param_2 + lVar9 + 0x48);
          *(undefined8 *)((long)piVar8 + lVar9 + 0x38) =
               *(undefined8 *)((long)param_2 + lVar9 + 0x38);
          bVar3 = *(byte *)((long)piVar8 + lVar9 + 0x45);
          bVar1 = bVar3 & 1 | (*(byte *)((long)param_2 + lVar9 + 0x45) >> 1 & 1) << 1;
          *(byte *)((long)piVar8 + lVar9 + 0x45) = bVar3 & 0xfc | bVar1;
          bVar1 = bVar1 | (*(byte *)((long)param_2 + lVar9 + 0x45) >> 2 & 1) << 2;
          *(byte *)((long)piVar8 + lVar9 + 0x45) = bVar3 & 0xf8 | bVar1;
          *(byte *)((long)piVar8 + lVar9 + 0x45) =
               bVar3 & 0xf0 | bVar1 | *(byte *)((long)param_2 + lVar9 + 0x45) & 8;
          piVar5 = param_1;
          FUN_108d68d58(param_1,*(undefined8 *)((long)param_2 + lVar9 + 0x68));
          *(int **)((long)piVar8 + lVar9 + 0x68) = piVar5;
          *(byte *)((long)piVar8 + lVar9 + 0x45) =
               *(byte *)((long)piVar8 + lVar9 + 0x45) & 0xfe |
               *(byte *)((long)param_2 + lVar9 + 0x45) & 1;
          *(undefined8 *)((long)piVar8 + lVar9 + 0x70) =
               *(undefined8 *)((long)param_2 + lVar9 + 0x70);
          lVar6 = *(long *)((long)param_2 + lVar9 + 0x28);
          *(long *)((long)piVar8 + lVar9 + 0x28) = lVar6;
          if (lVar6 != 0) {
            *(short *)(lVar6 + 0x40) = *(short *)(lVar6 + 0x40) + 1;
          }
          piVar5 = param_1;
          FUN_108daa8c8(param_1,*(undefined8 *)((long)param_2 + lVar9 + 0x30),param_3);
          *(int **)((long)piVar8 + lVar9 + 0x30) = piVar5;
          piVar5 = param_1;
          FUN_108daa624(param_1,*(undefined8 *)((long)param_2 + lVar9 + 0x50),param_3,0);
          *(int **)((long)piVar8 + lVar9 + 0x50) = piVar5;
          piVar5 = param_1;
          func_0x000108daae0c(param_1,*(undefined8 *)((long)param_2 + lVar9 + 0x58));
          uVar7 = *(undefined8 *)((long)param_2 + lVar9 + 0x60);
          *(int **)((long)piVar8 + lVar9 + 0x58) = piVar5;
          *(undefined8 *)((long)piVar8 + lVar9 + 0x60) = uVar7;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x70;
        } while (lVar10 < *param_2);
      }
    }
  }
  return piVar8;
}



/* Entry: 108daaedc; end: 108daaf33;  */

long * FUN_108daaedc(long *param_1,byte *param_2,byte *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  if (((param_2[5] & 1) == 0) &&
     (((param_2 = param_3, param_3 == (byte *)0x0 || ((param_3[5] & 1) == 0)) &&
      (plVar4 = param_1, FUN_108da85d0(), plVar4 != (long *)0x0)))) {
    return plVar4;
  }
  if (param_2 == (byte *)0x0) {
    return (long *)0x0;
  }
  plVar4 = (long *)*param_1;
  do {
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 >> 9 & 1) != 0) {
      return (long *)0x0;
    }
    bVar3 = *param_2;
    if (bVar3 < 0x9c) {
      if (0x5e < bVar3) {
        if (bVar3 == 0x9a) goto LAB_108da8658;
        if (bVar3 == 0x5f) {
LAB_108da86ec:
          puVar1 = (undefined1 *)((long)plVar4 + 0x4e);
          plVar4 = param_1;
          func_0x000108da6bb0(param_1,*puVar1,0,*(undefined8 *)(param_2 + 8));
          goto LAB_108da8704;
        }
        goto LAB_108da8660;
      }
      if (bVar3 != 0x26) {
        if (bVar3 == 0x3e) goto LAB_108da8658;
        goto LAB_108da8660;
      }
LAB_108da8630:
      pbVar6 = *(byte **)(param_2 + 0x10);
    }
    else {
      if (bVar3 != 0x9c) {
        if (bVar3 != 0x9f) {
          if (bVar3 != 0x9e) goto LAB_108da8660;
          goto LAB_108da8630;
        }
        if (param_2[0x36] == 0x5f) goto LAB_108da86ec;
      }
LAB_108da8658:
      if (*(long *)(param_2 + 0x40) != 0) {
        if (*(short *)(param_2 + 0x30) < 0) {
          return (long *)0x0;
        }
        FUN_108da6a98(plVar4,*(undefined1 *)((long)plVar4 + 0x4e),
                      *(undefined8 *)
                       (*(long *)(*(long *)(param_2 + 0x40) + 8) +
                        (long)(int)*(short *)(param_2 + 0x30) * 0x30 + 0x20),0);
LAB_108da8704:
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        func_0x000108da6bb0(param_1,*(undefined1 *)(*param_1 + 0x4e),plVar4,*plVar4);
        if (param_1 != (long *)0x0) {
          return plVar4;
        }
        return (long *)0x0;
      }
LAB_108da8660:
      if ((uVar2 >> 8 & 1) == 0) {
        return (long *)0x0;
      }
      pbVar6 = *(byte **)(param_2 + 0x10);
      if (((pbVar6 == (byte *)0x0) || ((pbVar6[5] & 1) == 0)) &&
         ((pbVar7 = *(byte **)(param_2 + 0x18), pbVar6 = pbVar7, (uVar2 >> 0xb & 1) == 0 &&
          ((puVar8 = *(uint **)(param_2 + 0x20), puVar8 != (uint *)0x0 &&
           (uVar5 = (ulong)*puVar8, 0 < (int)*puVar8)))))) {
        puVar9 = *(undefined8 **)(puVar8 + 2);
        do {
          pbVar6 = (byte *)*puVar9;
          if ((((byte *)*puVar9)[5] & 1) != 0) break;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar7;
          puVar9 = puVar9 + 4;
        } while (uVar5 != 0);
      }
    }
    param_2 = pbVar6;
    if (param_2 == (byte *)0x0) {
      return (long *)0x0;
    }
  } while( true );
}



/* Entry: 108daaf34; end: 108daaffb;  */

/* WARNING: Removing unreachable block (ram,0x000108da81c0) */
/* WARNING: Removing unreachable block (ram,0x000108da8160) */
/* WARNING: Removing unreachable block (ram,0x000108da8170) */
/* WARNING: Removing unreachable block (ram,0x000108da81d0) */
/* WARNING: Removing unreachable block (ram,0x000108da8174) */
/* WARNING: Removing unreachable block (ram,0x000108da817c) */
/* WARNING: Removing unreachable block (ram,0x000108da81d8) */
/* WARNING: Removing unreachable block (ram,0x000108da81f0) */
/* WARNING: Removing unreachable block (ram,0x000108da8200) */
/* WARNING: Removing unreachable block (ram,0x000108da8208) */
/* WARNING: Removing unreachable block (ram,0x000108da818c) */
/* WARNING: Removing unreachable block (ram,0x000108da8194) */
/* WARNING: Removing unreachable block (ram,0x000108da819c) */

int FUN_108daaf34(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  
  while( true ) {
    while ((param_1 != (byte *)0x0 && ((*(uint *)(param_1 + 4) >> 0xc & 1) != 0))) {
      if ((*(uint *)(param_1 + 4) >> 0x12 & 1) == 0) {
        param_1 = param_1 + 0x10;
      }
      else {
        param_1 = *(byte **)(*(long *)(param_1 + 0x20) + 8);
      }
      param_1 = *(byte **)param_1;
    }
    if ((param_1[5] >> 1 & 1) != 0) {
      bVar3 = 0;
      goto LAB_108daaff4;
    }
    bVar3 = *param_1;
    if (bVar3 != 0x77) break;
    param_1 = (byte *)**(undefined8 **)(**(long **)(param_1 + 0x20) + 8);
  }
  uVar4 = bVar3 - 0x9a;
  if (uVar4 < 6 && (1 << (ulong)(uVar4 & 0x1f) & 0x25U) != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(short *)(param_1 + 0x30) < 0) {
        bVar3 = 0x44;
      }
      else {
        bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) +
                          (long)(int)*(short *)(param_1 + 0x30) * 0x30 + 0x29);
      }
      goto LAB_108daaff4;
    }
  }
  else if (bVar3 == 0x26) {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((pbVar2 == (byte *)0x0) || (bVar3 = *pbVar2, bVar3 == 0)) {
      cVar5 = 'C';
LAB_108da81a8:
      return (int)cVar5;
    }
    uVar4 = 0;
    cVar5 = 'C';
LAB_108da80c0:
    pbVar2 = pbVar2 + 1;
    uVar1 = uVar4 << 8;
    uVar4 = (byte)(&UNK_10dfa05fd)[bVar3] | uVar1;
    if ((int)uVar4 < 0x636c6f62) {
      if (uVar4 == 0x626c6f62) {
        if ((cVar5 != 'E') && (cVar5 != 'C')) goto LAB_108da8124;
        bVar3 = *pbVar2;
        cVar5 = 'A';
        goto LAB_108da8154;
      }
      if (uVar4 == 0x63686172) {
        cVar5 = 'B';
        goto LAB_108da8150;
      }
LAB_108da8124:
      if (((uVar4 == 0x666c6f61 || uVar4 == 0x7265616c) || uVar4 == 0x646f7562) && (cVar5 == 'C')) {
        cVar5 = 'E';
        goto LAB_108da8150;
      }
      if (((uint)(byte)(&UNK_10dfa05fd)[bVar3] | uVar1 & 0xffffff) == 0x696e74) {
        cVar5 = 'D';
        goto LAB_108da81a8;
      }
    }
    else {
      if (uVar4 != 0x636c6f62 && uVar4 != 0x74657874) goto LAB_108da8124;
      cVar5 = 'B';
    }
LAB_108da8150:
    bVar3 = *pbVar2;
LAB_108da8154:
    if (bVar3 == 0) goto LAB_108da81a8;
    goto LAB_108da80c0;
  }
  bVar3 = param_1[1];
LAB_108daaff4:
  return (int)(char)bVar3;
}



/* Entry: 108daaffc; end: 108dab107;  */

int FUN_108daaffc(int param_1,int param_2)

{
  char cVar1;
  
  FUN_108daaf34();
  if ((param_2 == 0) || (param_1 == 0)) {
    cVar1 = 'A';
    if (param_1 != 0 || param_2 != 0) {
      cVar1 = (char)param_1 + (char)param_2;
    }
  }
  else {
    cVar1 = 'C';
    if (param_1 < 0x43 && param_2 < 0x43) {
      cVar1 = 'A';
    }
  }
  return (int)cVar1;
}



/* Entry: 108dab108; end: 108dab1b7;  */

void FUN_108dab108(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_108d71098(param_1,0x19,0,param_3,0);
  uVar2 = param_1;
  FUN_108d71098(param_1,0x6c,param_2,0,0);
  FUN_108d71098(param_1,0x2f,param_2,0,param_3);
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + (long)(int)uVar1 * 0x18 + -0x15) = 0x80;
  }
  if ((uint)uVar2 < uVar1) {
    *(uint *)(lVar3 + (uVar2 & 0xffffffff) * 0x18 + 8) = uVar1;
  }
  *(uint *)(*(long *)(param_1 + 0x30) + 100) = uVar1 - 1;
  return;
}



/* Entry: 108dab1b8; end: 108dab5fb;  */

int FUN_108dab1b8(long *param_1,long param_2,uint param_3,int *param_4)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  long *plVar20;
  char *pcVar21;
  long lVar22;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar9 = (int)param_1[10];
  *(int *)(param_1 + 10) = iVar9 + 1;
  plVar6 = param_1;
  FUN_108d70f98();
  if ((((((((*(byte *)(param_2 + 5) >> 3 & 1) != 0) &&
          (puVar12 = *(undefined8 **)(param_2 + 0x20),
          *(int *)((long)param_1 + 0x4c) == 0 && puVar12 != (undefined8 *)0x0)) &&
         (puVar12[10] == 0)) &&
        (((*(ushort *)((long)puVar12 + 10) & 5) == 0 && (puVar12[0xc] == 0)))) &&
       ((puVar12[6] == 0 &&
        ((piVar15 = (int *)puVar12[5], *piVar15 == 1 && (*(long *)(piVar15 + 0xc) == 0)))))) &&
      (puVar18 = *(undefined8 **)(piVar15 + 10), puVar18 != (undefined8 *)0x0)) &&
     ((((*(byte *)((long)puVar18 + 0x46) >> 4 & 1) == 0 && (*(int *)*puVar12 == 1)) &&
      (pcVar21 = (char *)**(undefined8 **)((int *)*puVar12 + 2), *pcVar21 == -0x66)))) {
    plVar20 = (long *)*param_1;
    uVar2 = *(ushort *)(pcVar21 + 0x30);
    if (puVar18[0xd] == 0) {
      uVar14 = 0xfff0bdc0;
    }
    else {
      uVar19 = *(uint *)(plVar20 + 5);
      if ((int)uVar19 < 1) {
        uVar14 = 0;
      }
      else {
        uVar13 = 0;
        plVar7 = (long *)(plVar20[4] + 0x18);
        do {
          uVar14 = uVar13;
          if (*plVar7 == puVar18[0xd]) break;
          uVar13 = uVar13 + 1;
          uVar14 = (ulong)uVar19;
          plVar7 = plVar7 + 4;
        } while (uVar19 != uVar13);
      }
    }
    iVar10 = (int)(short)uVar14;
    func_0x000108dab6e4(param_1,iVar10);
    func_0x000108da6790(param_1,iVar10,*(undefined4 *)(puVar18 + 7),0,*puVar18);
    if ((short)uVar2 < 0) {
      plVar20 = param_1;
      FUN_108d70f98();
      uVar19 = (uint)plVar20;
      *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 1;
      FUN_108d71098();
      func_0x000108da66a0(param_1,iVar9,iVar10,puVar18,0x36);
      uVar11 = *(uint *)((long)plVar6 + 0x3c);
      iVar10 = 1;
LAB_108dab524:
      if (uVar19 < uVar11) {
        *(uint *)(plVar6[1] + (ulong)uVar19 * 0x18 + 8) = uVar11;
      }
      *(uint *)(plVar6[6] + 100) = uVar11 - 1;
      goto LAB_108dab2b8;
    }
    plVar7 = param_1;
    FUN_108daaedc(param_1,*(undefined8 *)(param_2 + 0x10),pcVar21);
    cVar3 = *(char *)(puVar18[1] + (ulong)uVar2 * 0x30 + 0x29);
    lVar22 = param_2;
    FUN_108dab5fc();
    bVar5 = 'B' < cVar3;
    if (((uint)lVar22 & 0xff) == 0x42) {
      bVar5 = cVar3 == 'B';
    }
    bVar4 = true;
    if ((uint)lVar22 != 0x41) {
      bVar4 = bVar5;
    }
    lVar22 = puVar18[2];
    if ((lVar22 != 0) && (bVar4)) {
      do {
        if (((**(ushort **)(lVar22 + 8) == uVar2) &&
            (plVar8 = plVar20,
            FUN_108da6a98(plVar20,*(undefined1 *)((long)plVar20 + 0x4e),
                          **(undefined8 **)(lVar22 + 0x40),0), plVar8 == plVar7)) &&
           ((param_3 < 4 || ((*(short *)(lVar22 + 0x56) == 1 && (*(char *)(lVar22 + 0x5a) != '\0')))
            ))) {
          plVar20 = param_1;
          FUN_108d70f98();
          uVar19 = (uint)plVar20;
          *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 1;
          FUN_108d71098();
          FUN_108d71098(plVar6,0x36,iVar9,*(undefined4 *)(lVar22 + 0x50),iVar10);
          lVar17 = param_1[2];
          plVar20 = param_1;
          FUN_108da68a8(param_1,lVar22);
          FUN_108d6aaec(lVar17,0xffffffff,plVar20,0xfffffffa);
          iVar10 = **(byte **)(lVar22 + 0x38) + 3;
          if ((param_4 != (int *)0x0) &&
             (*(char *)(puVar18[1] + (ulong)uVar2 * 0x30 + 0x28) == '\0')) {
            iVar1 = *(int *)((long)param_1 + 0x54) + 1;
            *(int *)((long)param_1 + 0x54) = iVar1;
            *param_4 = iVar1;
            FUN_108dab108(plVar6,iVar9);
          }
          uVar11 = *(uint *)((long)plVar6 + 0x3c);
          goto LAB_108dab524;
        }
        lVar22 = *(long *)(lVar22 + 0x28);
      } while (lVar22 != 0);
    }
  }
  if (((param_3 & 1) != 0) && ((*(byte *)(param_2 + 5) >> 3 & 1) == 0)) {
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0x100000000;
    pcStack_90 = FUN_108daa264;
    uStack_88 = 0x108daa314;
    FUN_108daa320(&pcStack_90,param_2);
    *(undefined8 *)(param_2 + 0x10) = uVar16;
    if ((uStack_70._4_1_ == '\0') || (**(int **)(param_2 + 0x20) < 3)) {
      iVar10 = 5;
LAB_108dab2b8:
      *(int *)(param_2 + 0x2c) = iVar9;
      return iVar10;
    }
  }
  lVar22 = param_1[0x3b];
  if (param_3 < 4) {
    if (param_4 == (int *)0x0) goto LAB_108dab2f8;
    iVar9 = *(int *)((long)param_1 + 0x54) + 1;
    *(int *)((long)param_1 + 0x54) = iVar9;
    *param_4 = iVar9;
  }
  else {
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (*(short *)(*(long *)(param_2 + 0x10) + 0x30) < 0) {
      iVar9 = 0;
      uVar19 = *(uint *)(param_2 + 4) & 0x800;
      uVar11 = uVar19 >> 0xb ^ 1;
      iVar10 = 1;
      if (uVar19 != 0) {
        iVar10 = 2;
      }
      goto LAB_108dab304;
    }
LAB_108dab2f8:
    iVar9 = 0;
  }
  uVar11 = 0;
  iVar10 = 2;
LAB_108dab304:
  FUN_108da8a4c(param_1,param_2,iVar9,uVar11);
  *(int *)(param_1 + 0x3b) = (int)lVar22;
  return iVar10;
}



/* Entry: 108dab5fc; end: 108dab65b;  */

int FUN_108dab5fc(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  FUN_108daaf34();
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    if ((*(byte *)(param_1 + 5) >> 3 & 1) == 0) {
      iVar2 = 0x41;
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
      return iVar2;
    }
    lVar3 = **(long **)(**(long **)(param_1 + 0x20) + 8);
  }
  iVar2 = (int)lVar3;
  FUN_108daaf34();
  if ((iVar1 == 0) || (iVar2 == 0)) {
    cVar4 = 'A';
    if (iVar2 != 0 || iVar1 != 0) {
      cVar4 = (char)iVar2 + (char)iVar1;
    }
  }
  else {
    cVar4 = 'C';
    if (iVar2 < 0x43 && iVar1 < 0x43) {
      cVar4 = 'A';
    }
  }
  return (int)cVar4;
}



/* Entry: 108dab65c; end: 108dab73b;  */

bool FUN_108dab65c(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    if (1 < bVar1 - 0x9d) break;
    param_1 = *(byte **)(param_1 + 0x10);
  }
  if (bVar1 == 0x9f) {
    bVar1 = param_1[0x36];
  }
  bVar2 = false;
  if ((2 < bVar1 - 0x84) && (bVar1 != 0x61)) {
    if ((bVar1 == 0x9a) && ((param_1[6] >> 4 & 1) == 0)) {
      if (*(short *)(param_1 + 0x30) < 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) +
                          (long)(int)*(short *)(param_1 + 0x30) * 0x30 + 0x28) == '\0';
      }
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}



/* Entry: 108dab73c; end: 108dabaef;  */

void FUN_108dab73c(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uStack_48;
  
  lVar12 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  bVar7 = *param_2;
  uVar11 = (uint)bVar7;
  uVar13 = (uint)param_4;
  lVar6 = param_1;
  lVar8 = param_1;
  if (0x4d < bVar7) {
    if (uVar11 - 0x4e < 6) {
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_48 + 4);
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_48);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      if (uVar11 != 0x94) goto LAB_108dab934;
LAB_108dab8bc:
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_48 + 4);
      FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_48);
      bVar1 = bVar7 == 0x49;
      bVar7 = 0x4e;
      if (bVar1) {
        bVar7 = 0x4f;
      }
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_4 = 0x80;
    }
    FUN_108da83dc(param_1,uVar4,uVar5,bVar7,lVar6,lVar8,param_3,param_4);
    goto LAB_108daba00;
  }
  if (bVar7 < 0x4a) {
    if (uVar11 == 0x47 || bVar7 < 0x47) {
      if (uVar11 == 0x13) {
        FUN_108da95f4(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
        goto LAB_108daba00;
      }
      if (bVar7 != 0x47) goto LAB_108dab934;
      FUN_108dab73c(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_108dab73c(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
    }
    else {
      if (uVar11 != 0x48) {
        if (uVar11 == 0x49) goto LAB_108dab8bc;
        goto LAB_108dab934;
      }
      uVar4 = *(undefined8 *)(lVar12 + 0x30);
      FUN_108da84a4();
      FUN_108da95f4(param_1,*(undefined8 *)(param_2 + 0x10),uVar4,uVar13 ^ 0x10);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_108dab73c(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
      lVar6 = *(long *)(lVar12 + 0x30);
      if (((int)(uint)uVar4 < 0) && (lVar8 = *(long *)(lVar6 + 0x80), lVar8 != 0)) {
        *(undefined4 *)(lVar8 + (ulong)~(uint)uVar4 * 4) = *(undefined4 *)(lVar12 + 0x3c);
      }
      *(int *)(lVar6 + 100) = *(int *)(lVar12 + 0x3c) + -1;
    }
    func_0x000108da8568(param_1);
    goto LAB_108daba00;
  }
  if (uVar11 - 0x4c < 2) {
    FUN_108da8210(param_1,*(undefined8 *)(param_2 + 0x10),(long)&uStack_48 + 4);
LAB_108dab94c:
    bVar1 = false;
  }
  else {
    if (uVar11 == 0x4a) {
      FUN_108dabaf0(param_1,param_2,param_3,1,param_4);
      goto LAB_108daba00;
    }
    if (uVar11 == 0x4b) {
      uVar4 = *(undefined8 *)(lVar12 + 0x30);
      FUN_108da84a4();
      uVar2 = (uint)uVar4;
      uVar11 = uVar2;
      if (uVar13 != 0) {
        uVar11 = (uint)param_3;
      }
      func_0x000108da9060(param_1,param_2,uVar4,uVar11);
      FUN_108d71098(lVar12,0x10,0,param_3,0);
      lVar6 = *(long *)(lVar12 + 0x30);
      if (((int)uVar2 < 0) && (lVar8 = *(long *)(lVar6 + 0x80), lVar8 != 0)) {
        *(undefined4 *)(lVar8 + (ulong)~uVar2 * 4) = *(undefined4 *)(lVar12 + 0x3c);
      }
      *(int *)(lVar6 + 100) = *(int *)(lVar12 + 0x3c) + -1;
      goto LAB_108daba00;
    }
LAB_108dab934:
    pbVar3 = param_2;
    func_0x000108dabc78();
    if ((int)pbVar3 != 0) {
      bVar7 = 0x10;
      lVar6 = 0;
      goto LAB_108dab94c;
    }
    pbVar3 = param_2;
    func_0x000108dabc34();
    if ((int)pbVar3 != 0) goto LAB_108daba00;
    FUN_108da8210(param_1,param_2,(long)&uStack_48 + 4);
    bVar1 = uVar13 != 0;
    bVar7 = 0x2d;
  }
  FUN_108d71098(lVar12,bVar7,lVar6,param_3,bVar1);
LAB_108daba00:
  if (uStack_48._4_4_ != 0) {
    bVar7 = *(byte *)(param_1 + 0x1f);
    if (bVar7 < 8) {
      puVar9 = (undefined1 *)(param_1 + 0x8e);
      iVar10 = 10;
      do {
        if (*(int *)(puVar9 + 6) == uStack_48._4_4_) {
          *puVar9 = 1;
          goto LAB_108daba50;
        }
        puVar9 = puVar9 + 0x14;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      *(byte *)(param_1 + 0x1f) = bVar7 + 1;
      *(int *)(param_1 + (ulong)bVar7 * 4 + 0x24) = uStack_48._4_4_;
    }
  }
LAB_108daba50:
  if ((int)uStack_48 != 0) {
    bVar7 = *(byte *)(param_1 + 0x1f);
    if (bVar7 < 8) {
      puVar9 = (undefined1 *)(param_1 + 0x8e);
      iVar10 = 10;
      do {
        if (*(int *)(puVar9 + 6) == (int)uStack_48) {
          *puVar9 = 1;
          return;
        }
        puVar9 = puVar9 + 0x14;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      *(byte *)(param_1 + 0x1f) = bVar7 + 1;
      *(int *)(param_1 + (ulong)bVar7 * 4 + 0x24) = (int)uStack_48;
    }
  }
  return;
}



/* Entry: 108dabaf0; end: 108dabc33;  */

void FUN_108dabaf0(long param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_d0 [16];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_88 [16];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  
  puStack_78 = auStack_d0;
  iStack_164 = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  uStack_158 = puVar5[1];
  uStack_160 = *puVar5;
  uStack_148 = puVar5[3];
  uStack_150 = puVar5[2];
  uStack_138 = puVar5[5];
  uStack_140 = puVar5[4];
  uStack_128 = puVar5[7];
  uStack_130 = puVar5[6];
  uStack_120 = puVar5[8];
  auStack_88[0] = 0x48;
  puStack_70 = auStack_118;
  auStack_d0[0] = 0x53;
  puStack_108 = &uStack_160;
  puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x20) + 8);
  uStack_b8 = *puVar5;
  auStack_118[0] = 0x51;
  uStack_100 = puVar5[4];
  lVar4 = param_1;
  puStack_c0 = puStack_108;
  FUN_108da8210(param_1,&uStack_160,&iStack_164);
  uVar2 = uStack_160;
  uStack_130._0_7_ = CONCAT16((undefined1)uStack_160,(undefined6)uStack_130);
  uStack_160 = CONCAT71(uStack_160._1_7_,0x9f);
  uVar3 = uStack_160;
  uStack_160._4_4_ = SUB84(uVar2,4);
  uStack_138 = CONCAT44((int)lVar4,(undefined4)uStack_138);
  uStack_160._0_4_ = (undefined4)uVar3;
  uStack_160 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160) & 0xffffefffffffffff;
  if (param_4 == 0) {
    FUN_108da95f4(param_1,auStack_88,param_3,param_5);
  }
  else {
    FUN_108dab73c();
  }
  if (iStack_164 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
    if (bVar1 < 8) {
      puVar6 = (undefined1 *)(param_1 + 0x8e);
      iVar7 = 10;
      do {
        if (*(int *)(puVar6 + 6) == iStack_164) {
          *puVar6 = 1;
          return;
        }
        puVar6 = puVar6 + 0x14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      *(byte *)(param_1 + 0x1f) = bVar1 + 1;
      *(int *)(param_1 + (ulong)bVar1 * 4 + 0x24) = iStack_164;
    }
  }
  return;
}



/* Entry: 108dabc34; end: 108dabcbb;  */

void FUN_108dabc34(long param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    func_0x000108dab090(param_1,&uStack_14);
  }
  return;
}



/* Entry: 108dabcbc; end: 108dabd83;  */

void FUN_108dabcbc(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = *param_1;
  if (((*(char *)(lVar3 + 0xa1) == '\0') && (*(char *)((long)param_1 + 499) == '\0')) &&
     (*(code **)(lVar3 + 0x180) != (code *)0x0)) {
    uVar1 = *(ulong *)(lVar3 + 0x188);
    (**(code **)(lVar3 + 0x180))();
    if ((int)uVar1 == 1) {
      uVar4 = 0x17;
      puVar2 = &UNK_10f518dad;
    }
    else {
      if ((uVar1 & 0xfffffffd) == 0) {
        return;
      }
      uVar4 = 1;
      puVar2 = &UNK_10f519156;
    }
    func_0x000108d6a85c(param_1,puVar2);
    *(undefined4 *)(param_1 + 3) = uVar4;
  }
  return;
}



/* Entry: 108dabd84; end: 108dabdff;  */

void FUN_108dabd84(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  bVar1 = *param_1;
  if (bVar1 < 0x5b) {
    if ((bVar1 != 0x22) && (bVar1 != 0x27)) {
      return;
    }
  }
  else if (bVar1 != 0x60) {
    if (bVar1 != 0x5b) {
      return;
    }
    bVar1 = 0x5d;
  }
  uVar2 = 0;
  uVar3 = 1;
  while( true ) {
    bVar4 = param_1[(int)uVar3];
    if ((param_1[(int)uVar3] == bVar1) &&
       (uVar3 = (long)(int)uVar3 + 1, bVar4 = bVar1, param_1[uVar3] != bVar1)) break;
    param_1[uVar2] = bVar4;
    uVar2 = uVar2 + 1;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  param_1[uVar2 & 0xffffffff] = 0;
  return;
}



/* Entry: 108dabe00; end: 108dabe7f;  */

void FUN_108dabe00(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *param_1;
  if ((param_3 == 0) || (*(int *)(param_3 + 8) == 0)) {
    *param_4 = param_2;
  }
  else {
    if (*(char *)(lVar1 + 0xa1) == '\0') {
      *param_4 = param_3;
      func_0x000108dac014(lVar1,param_2);
      if (-1 < (int)lVar1) {
        return;
      }
      puVar2 = &UNK_10f519202;
    }
    else {
      puVar2 = &UNK_10f5191f1;
    }
    func_0x000108d6a85c(param_1,puVar2);
  }
  return;
}



/* Entry: 108dabe80; end: 108dabf1f;  */

undefined8 FUN_108dabe80(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  
  if (((*(char *)(*param_1 + 0xa1) != '\0') || (*(char *)((long)param_1 + 0x1e) != '\0')) ||
     ((*(byte *)(*param_1 + 0x2d) >> 3 & 1) != 0)) {
    return 0;
  }
  lVar2 = 0;
  do {
    if ((ulong)*(byte *)(param_2 + lVar2) == 0) {
      cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar2]];
      cVar3 = '\0';
LAB_108dabee4:
      if (cVar3 != cVar1) {
        return 0;
      }
      break;
    }
    cVar3 = (&UNK_10dfa05fd)[*(byte *)(param_2 + lVar2)];
    cVar1 = (&UNK_10dfa05fd)[(byte)(&UNK_10f519216)[lVar2]];
    if (cVar3 != cVar1) goto LAB_108dabee4;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  func_0x000108d6a85c(param_1,&UNK_10f51921e);
  return 1;
}



/* Entry: 108dabf20; end: 108dac05f;  */

void FUN_108dabf20(long param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1c0);
  }
  func_0x000108dab6e4(param_1,param_3);
  *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | 1 << (ulong)((uint)param_3 & 0x1f);
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | param_2;
  return;
}



/* Entry: 108dac060; end: 108dac40f;  */

void FUN_108dac060(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  
  lVar17 = *param_1;
  plVar5 = (long *)param_1[2];
  iVar10 = (int)param_1[0x3a];
  if (iVar10 != 0) {
    if (iVar10 < 0) {
      iVar10 = *(int *)((long)plVar5 + 0x3c) + -1;
    }
    if (*(char *)(*plVar5 + 0x51) == '\0') {
      puVar6 = (undefined1 *)(plVar5[1] + (long)iVar10 * 0x18);
    }
    else {
      puVar6 = (undefined1 *)0x11372e6a0;
    }
    *puVar6 = 0x78;
  }
  iVar10 = *(int *)((long)param_1 + 0x1d4);
  if (iVar10 != 0) {
    if (iVar10 < 0) {
      iVar10 = *(int *)((long)plVar5 + 0x3c) + -1;
    }
    if (*(char *)(*plVar5 + 0x51) == '\0') {
      puVar6 = (undefined1 *)(plVar5[1] + (long)iVar10 * 0x18);
    }
    else {
      puVar6 = (undefined1 *)0x11372e6a0;
    }
    *puVar6 = 0x10;
  }
  if (*(short *)(param_2 + 0x3c) < 0) {
    for (param_1 = *(long **)(param_2 + 0x10);
        (param_1 != (long *)0x0 && ((*(byte *)((long)param_1 + 0x5b) & 3) != 2));
        param_1 = (long *)param_1[5]) {
    }
    uVar13 = (ulong)*(ushort *)((long)param_1 + 0x56);
    if (*(ushort *)((long)param_1 + 0x56) < 2) {
      uVar18 = 1;
    }
    else {
      psVar14 = (short *)param_1[1];
      uVar12 = 1;
      uVar18 = 1;
      do {
        psVar15 = psVar14;
        uVar11 = uVar18;
        do {
          if ((int)uVar11 < 1) {
            psVar14[(int)uVar18] = psVar14[uVar12];
            uVar18 = uVar18 + 1;
            uVar13 = (ulong)*(ushort *)((long)param_1 + 0x56);
            goto LAB_108dac218;
          }
          sVar9 = *psVar15;
          psVar15 = psVar15 + 1;
          uVar11 = uVar11 - 1;
        } while (psVar14[uVar12] != sVar9);
        *(short *)(param_1 + 0xb) = (short)param_1[0xb] + -1;
LAB_108dac218:
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar18 = uVar18 & 0xffff;
    }
    *(short *)((long)param_1 + 0x56) = (short)uVar18;
  }
  else {
    lVar8 = lVar17;
    FUN_108d9ccd4(lVar17,0,0);
    if (lVar8 == 0) {
      return;
    }
    lVar2 = *param_1;
    FUN_108d68d58(lVar2,*(undefined8 *)
                         (*(long *)(param_2 + 8) + (long)(int)*(short *)(param_2 + 0x3c) * 0x30));
    lVar7 = *(long *)(lVar8 + 8);
    *(long *)(lVar7 + 8) = lVar2;
    *(char *)(lVar7 + 0x18) = (char)param_1[0x3e];
    func_0x000108d99e20(param_1,0,0,0,lVar8,*(undefined1 *)(param_2 + 0x47),0,0,0);
    if (param_1 == (long *)0x0) {
      return;
    }
    *(byte *)((long)param_1 + 0x5b) = *(byte *)((long)param_1 + 0x5b) & 0xfc | 2;
    *(undefined2 *)(param_2 + 0x3c) = 0xffff;
    uVar18 = (uint)*(ushort *)((long)param_1 + 0x56);
  }
  bVar3 = *(byte *)((long)param_1 + 0x5b) | 0x20;
  *(byte *)((long)param_1 + 0x5b) = bVar3;
  if (*(char *)(lVar17 + 0xa3) == '\0') {
    if (uVar18 != 0) {
      lVar8 = *(long *)(param_2 + 8);
      uVar13 = (ulong)uVar18;
      psVar14 = (short *)param_1[1];
      do {
        *(undefined1 *)(lVar8 + (long)(int)*psVar14 * 0x30 + 0x28) = 1;
        uVar13 = uVar13 - 1;
        psVar14 = psVar14 + 1;
      } while (uVar13 != 0);
      bVar3 = *(byte *)((long)param_1 + 0x5b);
    }
    *(byte *)((long)param_1 + 0x5b) = bVar3 | 8;
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x38);
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    do {
      if ((*(byte *)(lVar8 + 0x5b) & 3) != 2) {
        if (uVar18 == 0) {
          uVar4 = *(ushort *)(lVar8 + 0x56);
        }
        else {
          uVar13 = 0;
          iVar10 = 0;
          uVar4 = *(ushort *)(lVar8 + 0x56);
          do {
            psVar14 = *(short **)(lVar8 + 8);
            uVar11 = (uint)uVar4;
            do {
              if ((int)uVar11 < 1) {
                iVar10 = iVar10 + 1;
                break;
              }
              sVar9 = *psVar14;
              psVar14 = psVar14 + 1;
              uVar11 = uVar11 - 1;
            } while (*(short *)(param_1[1] + uVar13 * 2) != sVar9);
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar18);
          if (iVar10 != 0) {
            lVar2 = lVar17;
            FUN_108dacb4c(lVar17,lVar8,iVar10 + (uint)uVar4);
            if ((int)lVar2 != 0) {
              return;
            }
            uVar13 = 0;
            uVar11 = (uint)*(ushort *)(lVar8 + 0x56);
            psVar14 = *(short **)(lVar8 + 8);
            lVar2 = param_1[1];
            do {
              sVar9 = *(short *)(lVar2 + uVar13 * 2);
              psVar15 = psVar14;
              uVar16 = (uint)*(ushort *)(lVar8 + 0x56);
              do {
                if ((int)uVar16 < 1) {
                  psVar14[(int)uVar11] = sVar9;
                  *(undefined8 *)(*(long *)(lVar8 + 0x40) + (long)(int)uVar11 * 8) =
                       *(undefined8 *)(param_1[8] + uVar13 * 8);
                  uVar11 = uVar11 + 1;
                  break;
                }
                sVar1 = *psVar15;
                psVar15 = psVar15 + 1;
                uVar16 = uVar16 - 1;
              } while (sVar9 != sVar1);
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar18);
            goto LAB_108dac36c;
          }
        }
        *(ushort *)(lVar8 + 0x58) = uVar4;
      }
LAB_108dac36c:
      lVar8 = *(long *)(lVar8 + 0x28);
    } while (lVar8 != 0);
  }
  if ((int)uVar18 < (int)*(short *)(param_2 + 0x3e)) {
    FUN_108dacb4c(lVar17,param_1);
    if (((int)lVar17 == 0) && (sVar9 = *(short *)(param_2 + 0x3e), 0 < sVar9)) {
      iVar10 = 0;
      psVar15 = (short *)param_1[1];
      psVar14 = psVar15;
      uVar11 = uVar18;
LAB_108dac3b4:
      do {
        if ((int)uVar18 < 1) {
          psVar15[(int)uVar11] = (short)iVar10;
          *(undefined **)(param_1[8] + (long)(int)uVar11 * 8) = &UNK_10f51757c;
          sVar9 = *(short *)(param_2 + 0x3e);
          uVar11 = uVar11 + 1;
        }
        else {
          sVar1 = *psVar14;
          psVar14 = psVar14 + 1;
          uVar18 = uVar18 - 1;
          if (iVar10 != sVar1) goto LAB_108dac3b4;
        }
        uVar18 = uVar11;
        iVar10 = iVar10 + 1;
        psVar14 = psVar15;
        uVar11 = uVar18;
      } while (iVar10 < sVar9);
    }
  }
  else {
    *(short *)(param_1 + 0xb) = *(short *)(param_2 + 0x3e);
  }
  return;
}



/* Entry: 108dac410; end: 108dac4d7;  */

void FUN_108dac410(undefined8 param_1,undefined8 *param_2,ushort param_3,undefined8 param_4,
                  int *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  puStack_e0 = &uStack_b0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_b0 = 1;
  uStack_98 = *param_2;
  uStack_68 = 0xffffffff;
  uStack_b8 = (ulong)param_3;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  puStack_88 = param_2;
  func_0x000108dacc04(puVar1,param_4);
  if (((param_5 != (int *)0x0) && ((int)puVar1 == 0)) && (0 < *param_5)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      puVar1 = &uStack_e8;
      func_0x000108dacc04(puVar1,*(undefined8 *)(*(long *)(param_5 + 2) + lVar2));
      if ((int)puVar1 != 0) {
        return;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (lVar3 < *param_5);
  }
  return;
}



/* Entry: 108dac4d8; end: 108dac547;  */

void FUN_108dac4d8(long param_1)

{
  short sVar1;
  ulong uVar2;
  short *psVar3;
  ushort uVar4;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x58);
  if (uVar2 == 0) {
    sVar1 = 0;
  }
  else {
    sVar1 = 0;
    psVar3 = *(short **)(param_1 + 8);
    do {
      if (*psVar3 < 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (ushort)*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 8) +
                                  (long)(int)*psVar3 * 0x30 + 0x2a);
      }
      sVar1 = uVar4 + sVar1;
      uVar2 = uVar2 - 1;
      psVar3 = psVar3 + 1;
    } while (uVar2 != 0);
    sVar1 = sVar1 * 4;
  }
  FUN_108d93a54();
  *(short *)(param_1 + 0x54) = sVar1;
  return;
}



/* Entry: 108dac548; end: 108dac633;  */

undefined8 * FUN_108dac548(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  uVar1 = *(uint *)((long)puVar3 + 0x2c);
  *(uint *)((long)puVar3 + 0x2c) = uVar1 & 0xffffff9f | 0x40;
  FUN_108dae318(param_1,param_2,0);
  if (*(int *)((long)param_1 + 0x4c) == 0) {
    do {
      puVar4 = param_2;
      param_2 = (undefined8 *)puVar4[10];
    } while ((undefined8 *)puVar4[10] != (undefined8 *)0x0);
    *(uint *)((long)puVar3 + 0x2c) = uVar1;
    puVar2 = puVar3;
    FUN_108d6a6fc(puVar3,0x78);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar2[0xe] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 8) = 0xc80001;
    *puVar2 = 0;
    FUN_108daf830(*param_1,*puVar4,(long)puVar2 + 0x3e,puVar2 + 1);
    FUN_108db058c(param_1,puVar2,puVar4);
    *(undefined2 *)((long)puVar2 + 0x3c) = 0xffff;
    if (*(char *)((long)puVar3 + 0x51) == '\0') {
      return puVar2;
    }
    FUN_108d62864(puVar3,puVar2);
  }
  return (undefined8 *)0x0;
}



/* Entry: 108dac634; end: 108dac88b;  */

long FUN_108dac634(long param_1,undefined8 *param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined *puVar11;
  uint uVar12;
  uint uStack_64;
  
  sVar1 = *(short *)((long)param_2 + 0x3e);
  if (0 < sVar1) {
    iVar6 = 0;
    iVar7 = 0;
    puVar8 = (undefined8 *)param_2[1];
LAB_108dac674:
    iVar9 = 0;
    pcVar10 = (char *)*puVar8;
    do {
      if (*pcVar10 == '\"') {
        iVar9 = iVar9 + 1;
      }
      else if (*pcVar10 == '\0') goto LAB_108dac6a0;
      iVar9 = iVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
  iVar9 = 2;
LAB_108dac6c4:
  iVar7 = 0;
  pcVar10 = (char *)*param_2;
  do {
    if (*pcVar10 == '\"') {
      iVar7 = iVar7 + 1;
    }
    else if (*pcVar10 == '\0') {
      iVar7 = iVar7 + iVar9;
      pcVar10 = ",";
      if (0x31 < iVar7) {
        pcVar10 = ",\n  ";
      }
      iVar6 = iVar7 + sVar1 * 6 + 0x23;
      lVar2 = (long)iVar6;
      FUN_108d60848();
      if (lVar2 == 0) {
        *(undefined1 *)(param_1 + 0x51) = 1;
      }
      else {
        func_0x000108d64bd8(iVar6,lVar2,&UNK_10f519889);
        lVar3 = lVar2;
        _strlen();
        uStack_64 = (uint)lVar3 & 0x3fffffff;
        FUN_108db09a4(lVar2,&uStack_64,*param_2);
        uVar12 = uStack_64 + 1;
        *(undefined1 *)(lVar2 + (int)uStack_64) = 0x28;
        if (0 < *(short *)((long)param_2 + 0x3e)) {
          iVar9 = 0;
          puVar8 = (undefined8 *)param_2[1];
          pcVar5 = "";
          if (0x31 < iVar7) {
            pcVar5 = "\n  ";
          }
          do {
            lVar3 = lVar2 + (int)uVar12;
            func_0x000108d64bd8(iVar6 - uVar12,lVar3,pcVar5);
            _strlen();
            uStack_64 = ((uint)lVar3 & 0x3fffffff) + uVar12;
            FUN_108db09a4(lVar2,&uStack_64,*puVar8);
            puVar11 = (&PTR_FUN_110ac4838)[*(char *)((long)puVar8 + 0x29)];
            puVar4 = puVar11;
            _strlen();
            uVar12 = uStack_64;
            _memcpy(lVar2 + (int)uStack_64,puVar11,(ulong)puVar4 & 0x3fffffff);
            uVar12 = ((uint)puVar4 & 0x3fffffff) + uVar12;
            iVar9 = iVar9 + 1;
            puVar8 = puVar8 + 6;
            pcVar5 = pcVar10;
            uStack_64 = uVar12;
          } while (iVar9 < *(short *)((long)param_2 + 0x3e));
        }
        func_0x000108d64bd8(iVar6 - uVar12,lVar2 + (int)uVar12,&UNK_10f517517);
      }
      return lVar2;
    }
    iVar7 = iVar7 + 1;
    pcVar10 = pcVar10 + 1;
  } while( true );
LAB_108dac6a0:
  iVar9 = iVar7 + iVar9;
  iVar7 = iVar9 + 7;
  iVar6 = iVar6 + 1;
  puVar8 = puVar8 + 6;
  if (iVar6 == sVar1) goto code_r0x000108dac6b8;
  goto LAB_108dac674;
code_r0x000108dac6b8:
  iVar9 = iVar9 + 9;
  goto LAB_108dac6c4;
}



/* Entry: 108dac88c; end: 108dacaa3;  */

void FUN_108dac88c(long *param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uStack_f0;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = 0;
  plVar4 = param_1;
  if (*(int *)((long)param_1 + 0x4c) == 0) {
    plVar8 = (long *)*param_1;
    plVar3 = plVar8;
    FUN_108d7169c(plVar8,param_2,&stack0x00000000);
    plVar4 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      *(char *)((long)param_1 + 0x1e) = *(char *)((long)param_1 + 0x1e) + '\x01';
      plVar4 = param_1 + 0x3d;
      lVar14 = param_1[0x4a];
      lVar9 = param_1[0x49];
      lVar24 = param_1[0x4c];
      lVar19 = param_1[0x4b];
      lVar15 = param_1[0x4e];
      lVar10 = param_1[0x4d];
      lVar25 = param_1[0x50];
      lVar20 = param_1[0x4f];
      lVar16 = param_1[0x42];
      lVar11 = param_1[0x41];
      lVar26 = param_1[0x44];
      lVar21 = param_1[0x43];
      lVar17 = param_1[0x46];
      lVar12 = param_1[0x45];
      lVar27 = param_1[0x48];
      lVar22 = param_1[0x47];
      lVar18 = param_1[0x3e];
      lVar13 = *plVar4;
      lVar28 = param_1[0x40];
      lVar23 = param_1[0x3f];
      param_1[0x4e] = 0;
      param_1[0x4d] = 0;
      param_1[0x50] = 0;
      param_1[0x4f] = 0;
      param_1[0x4a] = 0;
      param_1[0x49] = 0;
      param_1[0x4c] = 0;
      param_1[0x4b] = 0;
      param_1[0x46] = 0;
      param_1[0x45] = 0;
      param_1[0x48] = 0;
      param_1[0x47] = 0;
      param_1[0x42] = 0;
      param_1[0x41] = 0;
      param_1[0x44] = 0;
      param_1[0x43] = 0;
      param_1[0x3e] = 0;
      *plVar4 = 0;
      param_1[0x40] = 0;
      param_1[0x3f] = 0;
      FUN_108d6ccb0(param_1,plVar3,&uStack_f0);
      func_0x000108d60660(plVar8,uStack_f0);
      func_0x000108d60660();
      param_1[0x4a] = lVar14;
      param_1[0x49] = lVar9;
      param_1[0x4c] = lVar24;
      param_1[0x4b] = lVar19;
      param_1[0x4e] = lVar15;
      param_1[0x4d] = lVar10;
      param_1[0x50] = lVar25;
      param_1[0x4f] = lVar20;
      param_1[0x42] = lVar16;
      param_1[0x41] = lVar11;
      param_1[0x44] = lVar26;
      param_1[0x43] = lVar21;
      param_1[0x46] = lVar17;
      param_1[0x45] = lVar12;
      param_1[0x48] = lVar27;
      param_1[0x47] = lVar22;
      param_1[0x3e] = lVar18;
      *plVar4 = lVar13;
      param_1[0x40] = lVar28;
      param_1[0x3f] = lVar23;
      *(char *)((long)param_1 + 0x1e) = *(char *)((long)param_1 + 0x1e) + -1;
      plVar4 = plVar8;
      param_2 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    if (*(char *)((long)plVar4 + 0x1f) == '\0') {
      iVar2 = *(int *)((long)plVar4 + 0x54) + 1;
      *(int *)((long)plVar4 + 0x54) = iVar2;
    }
    else {
      bVar1 = *(char *)((long)plVar4 + 0x1f) - 1;
      *(byte *)((long)plVar4 + 0x1f) = bVar1;
      iVar2 = *(int *)((long)plVar4 + (ulong)bVar1 * 4 + 0x24);
    }
    lVar5 = plVar4[2];
    FUN_108d71098(lVar5,0x19,
                  **(int **)(*(long *)(*plVar4 + 0x20) + (long)(int)param_2 * 0x20 + 0x18) + 1,iVar2
                  ,0);
    FUN_108d71098(lVar5,0x34,param_2,1,iVar2);
    if (iVar2 != 0) {
      bVar1 = *(byte *)((long)plVar4 + 0x1f);
      if (bVar1 < 8) {
        puVar6 = (undefined1 *)((long)plVar4 + 0x8e);
        iVar7 = 10;
        do {
          if (*(int *)(puVar6 + 6) == iVar2) {
            *puVar6 = 1;
            return;
          }
          puVar6 = puVar6 + 0x14;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *(byte *)((long)plVar4 + 0x1f) = bVar1 + 1;
        *(int *)((long)plVar4 + (ulong)bVar1 * 4 + 0x24) = iVar2;
      }
    }
    return;
  }
  return;
}



/* Entry: 108dacaa4; end: 108dacb4b;  */

void FUN_108dacaa4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  plVar3 = param_1;
  FUN_108d71098(param_1,0x7a,param_2,0,0);
  FUN_108d6aaec(param_1,plVar3,param_3,0xffffffff);
  uVar1 = *(uint *)(*param_1 + 0x28);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    uVar5 = *(uint *)((long)param_1 + 0x94);
    lVar6 = 8;
    do {
      uVar2 = 1 << (ulong)((uint)uVar4 & 0x1f);
      if ((uVar4 != 1) && (*(char *)(*(long *)(*(long *)(*param_1 + 0x20) + lVar6) + 0x11) != '\0'))
      {
        *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | uVar2;
      }
      uVar5 = uVar2 | uVar5;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar1 != uVar4);
    *(uint *)((long)param_1 + 0x94) = uVar5;
  }
  return;
}



/* Entry: 108dacb4c; end: 108dacd1b;  */

undefined8 FUN_108dacb4c(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((int)(uint)*(ushort *)(param_2 + 0x58) < (int)param_3) {
    FUN_108d68fc8(param_1,(long)(int)(param_3 * 0xb));
    if (param_1 == 0) {
      uVar1 = 7;
    }
    else {
      _memcpy();
      *(long *)(param_2 + 0x40) = param_1;
      param_1 = param_1 + (ulong)param_3 * 8;
      _memcpy(param_1,*(undefined8 *)(param_2 + 8),(ulong)*(ushort *)(param_2 + 0x58) << 1);
      *(long *)(param_2 + 8) = param_1;
      param_1 = param_1 + (ulong)param_3 * 2;
      _memcpy(param_1,*(undefined8 *)(param_2 + 0x38),*(undefined2 *)(param_2 + 0x58));
      uVar1 = 0;
      *(long *)(param_2 + 0x38) = param_1;
      *(short *)(param_2 + 0x58) = (short)param_3;
      *(byte *)(param_2 + 0x5b) = *(byte *)(param_2 + 0x5b) | 0x10;
    }
    return uVar1;
  }
  return 0;
}


