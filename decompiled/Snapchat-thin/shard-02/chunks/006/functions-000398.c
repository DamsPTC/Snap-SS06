/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f421f8; end: 101f423ff;  */

undefined8 FUN_101f421f8(long param_1,long param_2)

{
  double dVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  byte *pbVar12;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 != 0) && (param_1 != param_2)) {
      pcVar11 = (char *)(param_2 + 0x30);
      pbVar12 = (byte *)(param_1 + 0x30);
      do {
        dVar8 = *(double *)(pbVar12 + -0x10);
        lVar2 = *(long *)(pbVar12 + -8);
        bVar4 = *pbVar12;
        dVar1 = *(double *)(pcVar11 + -0x10);
        lVar3 = *(long *)(pcVar11 + -8);
        cVar5 = *pcVar11;
        if (bVar4 < 4) {
          if (bVar4 < 2) {
            if (bVar4 == 0) {
              if (cVar5 != '\0') {
                return 0;
              }
              if (((SUB84(dVar1,0) ^ SUB84(dVar8,0)) & 1) != 0) {
                return 0;
              }
            }
            else {
              if (cVar5 != '\x01') goto LAB_101f423dc;
              if ((dVar8 != dVar1) || (lVar2 != lVar3)) {
                func_0x000107c605b8(dVar8,lVar2,dVar1,lVar3,0);
                goto joined_r0x000101f423c4;
              }
            }
          }
          else if (bVar4 == 2) {
            if (cVar5 != '\x02' || dVar8 != dVar1) goto LAB_101f423dc;
          }
          else if (cVar5 != '\x03' || dVar8 != dVar1) goto LAB_101f423dc;
        }
        else if (bVar4 < 6) {
          if (bVar4 == 4) {
            bVar6 = false;
            if ((cVar5 == '\x04') && (bVar6 = false, !NAN(dVar8) && !NAN(dVar1))) {
              bVar6 = dVar8 == dVar1;
            }
            if (!bVar6) goto LAB_101f423dc;
          }
          else {
            if (cVar5 != '\x05') goto LAB_101f423dc;
            func_0x000101f347b4(dVar1,lVar3,5);
            func_0x000101f347b4(dVar8,lVar2,5);
            dVar7 = dVar8;
            FUN_101f421f8(dVar8,dVar1);
            func_0x000101f347f4(dVar1,lVar3,5);
            func_0x000101f347f4(dVar8,lVar2,5);
            dVar8 = dVar7;
joined_r0x000101f423c4:
            if (((ulong)dVar8 & 1) == 0) goto LAB_101f423dc;
          }
        }
        else {
          if (bVar4 == 6) {
            if (cVar5 == '\x06') {
              func_0x000101f347b4(dVar1,lVar3,6);
              func_0x000101f347b4(dVar8,lVar2,6);
              dVar7 = dVar8;
              FUN_101f340bc(dVar8,dVar1);
              func_0x000101f347f4(dVar1,lVar3,6);
              func_0x000101f347f4(dVar8,lVar2,6);
              dVar8 = dVar7;
              goto joined_r0x000101f423c4;
            }
            goto LAB_101f423dc;
          }
          if (cVar5 != '\a' || (lVar3 != 0 || dVar1 != 0.0)) goto LAB_101f423dc;
        }
        pcVar11 = pcVar11 + 0x18;
        pbVar12 = pbVar12 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    uVar9 = 1;
  }
  else {
LAB_101f423dc:
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 101f42400; end: 101f42567;  */

uint FUN_101f42400(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  ulong uVar4;
  long extraout_x12;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lStack_68 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = (long)puVar5 - extraout_x12;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 == 0) || (param_1 == param_2)) {
      uVar7 = 1;
    }
    else {
      uVar4 = (ulong)*(byte *)(lStack_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lStack_68 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar4;
      param_2 = param_2 + uVar4;
      lVar9 = *(long *)(lStack_68 + 0x48);
      pcVar10 = *(code **)(lStack_68 + 0x10);
      do {
        lVar3 = lVar3 + -1;
        (*pcVar10)(uVar6,param_1,lVar1);
        puVar2 = puVar5;
        (*pcVar10)(puVar5,param_2,lVar1);
        func_0x000101207ba8();
        uVar4 = uVar6;
        func_0x000107c5fab8(uVar6,puVar5,lVar1,puVar2);
        uVar7 = (uint)uVar4;
        pcVar8 = *(code **)(lStack_68 + 8);
        (*pcVar8)(puVar5,lVar1);
        (*pcVar8)(uVar6,lVar1);
        if ((uVar4 & 1) == 0) break;
        param_2 = param_2 + lVar9;
        param_1 = param_1 + lVar9;
      } while (lVar3 != 0);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7 & 1;
}



/* Entry: 101f42568; end: 101f42713;  */

/* WARNING: Possible PIC construction at 0x000101f42758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f427f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f427f8) */

undefined1  [16]
FUN_101f42568(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined1 *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  long in_register_00005008;
  long in_register_00005028;
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
  undefined1 auStack_1c0 [416];
  
  puVar5 = (undefined1 *)0xe600000000000000;
  puVar2 = (undefined1 *)0x64692d696f70;
  puVar6 = (ulong *)(param_3 & 0xff);
  puVar3 = puVar2;
  puVar1 = param_5;
  switch(puVar6) {
  default:
    puVar5 = (undefined1 *)0xe800000000000000;
  case (ulong *)0x22:
  case (ulong *)0x3c:
  case (ulong *)0x4a:
  case (ulong *)0x64:
  case (ulong *)0x72:
  case (ulong *)0xc4:
  case (ulong *)0xd2:
  case (ulong *)0xec:
  case (ulong *)0xfa:
    puVar2 = (undefined1 *)0x616c;
  case (ulong *)0x13:
  case (ulong *)0x1b:
  case (ulong *)0x1e:
  case (ulong *)0x2f:
  case (ulong *)0x43:
  case (ulong *)0x57:
  case (ulong *)0x6b:
  case (ulong *)0xb7:
  case (ulong *)0xcb:
  case (ulong *)0xdf:
  case (ulong *)0xf3:
    puVar2 = (undefined1 *)((ulong)puVar2 & 0xffffffff0000ffff | 0x69740000);
  case (ulong *)0x20:
  case (ulong *)0x3a:
  case (ulong *)0x62:
  case (ulong *)0xc2:
  case (ulong *)0xea:
    puVar2 = (undefined1 *)((ulong)puVar2 & 0xffff0000ffffffff | 0x6564757400000000);
  case (ulong *)0x2b:
  case (ulong *)0x53:
  case (ulong *)0x7b:
  case (ulong *)0xdb:
    auVar7._8_8_ = puVar5;
    auVar7._0_8_ = puVar2;
    return auVar7;
  case (ulong *)0x2:
    auVar13._8_8_ = 0xe900000000000065;
    auVar13._0_8_ = 0x64757469676e6f6c;
    return auVar13;
  case (ulong *)0x3:
    puVar5 = (undefined1 *)0xe800000000000000;
    puVar2 = (undefined1 *)0x6c70;
  case (ulong *)0x99:
    auVar14._0_8_ = (ulong)puVar2 & 0xffff00000000ffff | 0x64692d6563610000;
    auVar14._8_8_ = puVar5;
    return auVar14;
  case (ulong *)0x4:
  case (ulong *)0xf4:
    auVar10._8_8_ = 0xe500000000000000;
    auVar10._0_8_ = 0x6c6562616c;
    return auVar10;
  case (ulong *)0x5:
    auVar16._8_8_ = 0x800000010f01c9e0;
    auVar16._0_8_ = 0xd000000000000010;
    return auVar16;
  case (ulong *)0x6:
    puVar5 = (undefined1 *)0xe400000000000000;
  case (ulong *)0xae:
    puVar2 = (undefined1 *)0x646e696b;
  case (ulong *)0x80:
    auVar18._8_8_ = puVar5;
    auVar18._0_8_ = puVar2;
    return auVar18;
  case (ulong *)0x7:
    puVar5 = (undefined1 *)0xed00006c72755f6c;
    puVar2 = (undefined1 *)0x6d756874;
  case (ulong *)0x44:
    auVar15._0_8_ = (ulong)puVar2 & 0xffff0000ffffffff | 0x69616e6200000000;
    auVar15._8_8_ = puVar5;
    return auVar15;
  case (ulong *)0x8:
    puVar6 = (ulong *)0x10f01c000;
  case (ulong *)0x8a:
    puVar6 = puVar6 + 0x126;
  case (ulong *)0x8f:
    puVar5 = (undefined1 *)((ulong)(puVar6 + -4) | 0x8000000000000000);
    puVar2 = (undefined1 *)0xd000000000000013;
  case (ulong *)0xf0:
    auVar20._8_8_ = puVar5;
    auVar20._0_8_ = puVar2;
    return auVar20;
  case (ulong *)0x9:
    auVar12._8_8_ = 0xe800000000000000;
    auVar12._0_8_ = 0x64695f726579616c;
    return auVar12;
  case (ulong *)0xa:
    puVar2 = (undefined1 *)0x7267;
  case (ulong *)0x88:
    puVar2 = (undefined1 *)((ulong)puVar2 & 0xffffffff0000ffff | 0x756f0000);
  case (ulong *)0x26:
  case (ulong *)0x46:
  case (ulong *)0x50:
  case (ulong *)0x6e:
  case (ulong *)0x83:
  case (ulong *)0x87:
  case (ulong *)0xce:
  case (ulong *)0xf6:
    auVar19._0_8_ = (ulong)puVar2 & 0xffff0000ffffffff | 0x737000000000;
    auVar19._8_8_ = 0xe600000000000000;
    return auVar19;
  case (ulong *)0xb:
    puVar5 = (undefined1 *)0xe800000000000000;
    puVar2 = (undefined1 *)0x65726373;
  case (ulong *)0x19:
    puVar2 = (undefined1 *)((ulong)puVar2 & 0xffff0000ffffffff | 0x6e6500000000);
  case (ulong *)0x11:
  case (ulong *)0x2d:
  case (ulong *)0x41:
  case (ulong *)0x55:
  case (ulong *)0x69:
  case (ulong *)0xb5:
  case (ulong *)0xc9:
  case (ulong *)0xdd:
  case (ulong *)0xf1:
    auVar9._0_8_ = (ulong)puVar2 | 0x785f000000000000;
    auVar9._8_8_ = puVar5;
    return auVar9;
  case (ulong *)0xc:
    auVar11._8_8_ = 0xe800000000000000;
    auVar11._0_8_ = 0x795f6e6565726373;
    return auVar11;
  case (ulong *)0xd:
    puVar6 = (ulong *)0x65;
  case (ulong *)0xa8:
    puVar5 = (undefined1 *)(((ulong)puVar6 | 0xe900000000000000) + 0xf);
    puVar2 = (undefined1 *)0x5f646c726f77;
  case (ulong *)0xe0:
    puVar2 = (undefined1 *)((ulong)puVar2 | 0x616c000000000000);
  case (ulong *)0x89:
    auVar17._8_8_ = puVar5;
    auVar17._0_8_ = puVar2;
    return auVar17;
  case (ulong *)0xe:
    puVar5 = (undefined1 *)0xe900000000000067;
    puVar2 = (undefined1 *)0x5f646c726f77;
  case (ulong *)0x9c:
    puVar2 = (undefined1 *)((ulong)puVar2 | 0x6e6c000000000000);
  case (ulong *)0x0:
    auVar8._8_8_ = puVar5;
    auVar8._0_8_ = puVar2;
    return auVar8;
  case (ulong *)0x15:
  case (ulong *)0x31:
  case (ulong *)0x59:
  case (ulong *)0xb9:
  case (ulong *)0xe1:
    puVar2 = puRam000064692d696f70;
    puVar5 = puRam000064692d696f78;
    FUN_101f42e08(puRam000064692d696f70,puRam000064692d696f78);
    *unaff_x19 = (char)puVar2;
  case (ulong *)0x12:
  case (ulong *)0x1a:
  case (ulong *)0x2a:
  case (ulong *)0x2e:
  case (ulong *)0x42:
  case (ulong *)0x52:
  case (ulong *)0x56:
  case (ulong *)0x6a:
  case (ulong *)0x7a:
  case (ulong *)0xb6:
  case (ulong *)0xca:
  case (ulong *)0xda:
  case (ulong *)0xde:
  case (ulong *)0xf2:
  case (ulong *)0x78:
    auVar22._8_8_ = puVar5;
    auVar22._0_8_ = puVar2;
    return auVar22;
  case (ulong *)0x16:
  case (ulong *)0x32:
  case (ulong *)0x5a:
  case (ulong *)0xba:
  case (ulong *)0xe2:
    *(char *)puVar6 = -0x50;
    auVar26._8_8_ = 0xe600000000000000;
    auVar26._0_8_ = 0x64692d696f70;
    return auVar26;
  case (ulong *)0x18:
    func_0x000107c5fb58(&stack0x00000008,0x64692d696f70,0xe600000000000000);
    puVar2 = (undefined1 *)0xe600000000000000;
    break;
  case (ulong *)0x24:
  case (ulong *)0x6c:
    uVar4 = (ulong)*unaff_x20;
    FUN_101f42568(uVar4);
    auVar24._8_8_ = puVar5;
    auVar24._0_8_ = uVar4;
    return auVar24;
  case (ulong *)0x29:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (ulong *)0x51:
  case (ulong *)0x79:
  case (ulong *)0xd9:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (ulong *)0x86:
  case (ulong *)0x8e:
  case (ulong *)0xb0:
    puVar3 = (undefined1 *)(ulong)*unaff_x20;
    FUN_101f42568(puVar3);
    unaff_x19 = puVar2;
  case (ulong *)0xb4:
    puVar2 = puVar5;
    func_0x000107c5fb58(unaff_x19,puVar3,puVar2);
    break;
  case (ulong *)0x2c:
    register0x00000008 = (BADSPACEBASE *)auStack_1c0;
  case (ulong *)0x9a:
    *(undefined8 *)((long)register0x00000008 + 0xa8) = uRam000064692d697018;
    *(undefined8 *)((long)register0x00000008 + 0xa0) = uRam000064692d697010;
    *(ulong *)((long)register0x00000008 + 0xb8) =
         CONCAT71(uRam000064692d697029,uRam000064692d697028);
    *(undefined8 *)((long)register0x00000008 + 0xb0) = uRam000064692d697020;
    *(undefined8 *)((long)register0x00000008 + 0xc1) = uRam000064692d697031;
    *(ulong *)((long)register0x00000008 + 0xb9) =
         CONCAT17(uRam000064692d697030,uRam000064692d697029);
    *(undefined8 *)((long)register0x00000008 + 0x68) = uRam000064692d696fd8;
    *(undefined8 *)((long)register0x00000008 + 0x60) = uRam000064692d696fd0;
    *(undefined8 *)((long)register0x00000008 + 0x78) = uRam000064692d696fe8;
    *(undefined8 *)((long)register0x00000008 + 0x70) = uRam000064692d696fe0;
  case (ulong *)0xcd:
  case (ulong *)0xf5:
    param_1 = lRam000064692d697000;
    in_register_00005008 = lRam000064692d697008;
    param_2 = lRam000064692d696ff0;
    in_register_00005028 = lRam000064692d696ff8;
  case (ulong *)0x14:
  case (ulong *)0x45:
  case (ulong *)0x6d:
    *(long *)((long)register0x00000008 + 0x88) = in_register_00005028;
    *(long *)((long)register0x00000008 + 0x80) = param_2;
    *(long *)((long)register0x00000008 + 0x98) = in_register_00005008;
    *(long *)((long)register0x00000008 + 0x90) = param_1;
    *(undefined8 *)((long)register0x00000008 + 0x28) = uRam000064692d696f98;
    *(undefined8 *)((long)register0x00000008 + 0x20) = uRam000064692d696f90;
    *(undefined8 *)((long)register0x00000008 + 0x38) = uRam000064692d696fa8;
    *(undefined8 *)((long)register0x00000008 + 0x30) = uRam000064692d696fa0;
    param_1 = lRam000064692d696fc0;
    in_register_00005008 = lRam000064692d696fc8;
    param_2 = lRam000064692d696fb0;
    in_register_00005028 = lRam000064692d696fb8;
  case (ulong *)0x27:
  case (ulong *)0x47:
  case (ulong *)0x6f:
  case (ulong *)0xcf:
  case (ulong *)0xf7:
    *(long *)((long)register0x00000008 + 0x48) = in_register_00005028;
    *(long *)((long)register0x00000008 + 0x40) = param_2;
    *(long *)((long)register0x00000008 + 0x58) = in_register_00005008;
    *(long *)((long)register0x00000008 + 0x50) = param_1;
    *(undefined1 **)((long)register0x00000008 + 8) = puRam000064692d696f78;
    *(undefined1 **)register0x00000008 = puRam000064692d696f70;
    *(long *)((long)register0x00000008 + 0x18) = lRam000064692d696f88;
    *(long *)((long)register0x00000008 + 0x10) = lRam000064692d696f80;
    in_register_00005028 = CONCAT71(uRame6000000000000b9,uRame6000000000000b8);
    param_1 = lRame6000000000000a0;
    in_register_00005008 = lRame6000000000000a8;
    param_2 = lRame6000000000000b0;
  case (ulong *)0x28:
    *(long *)((long)register0x00000008 + 0x178) = in_register_00005008;
    *(long *)((long)register0x00000008 + 0x170) = param_1;
    *(long *)((long)register0x00000008 + 0x188) = in_register_00005028;
    *(long *)((long)register0x00000008 + 0x180) = param_2;
  case (ulong *)0x10:
    *(undefined8 *)((long)register0x00000008 + 0x191) = uRame6000000000000c1;
    *(ulong *)((long)register0x00000008 + 0x189) =
         CONCAT17(uRame6000000000000c0,uRame6000000000000b9);
  case (ulong *)0x25:
    *(undefined8 *)((long)register0x00000008 + 0x138) = uRame600000000000068;
    *(undefined8 *)((long)register0x00000008 + 0x130) = uRame600000000000060;
    *(undefined8 *)((long)register0x00000008 + 0x148) = uRame600000000000078;
    *(undefined8 *)((long)register0x00000008 + 0x140) = uRame600000000000070;
    *(undefined8 *)((long)register0x00000008 + 0x158) = uRame600000000000088;
    *(undefined8 *)((long)register0x00000008 + 0x150) = uRame600000000000080;
    *(undefined8 *)((long)register0x00000008 + 0x168) = uRame600000000000098;
    *(undefined8 *)((long)register0x00000008 + 0x160) = uRame600000000000090;
    *(undefined8 *)((long)register0x00000008 + 0xf8) = uRame600000000000028;
    *(undefined8 *)((long)register0x00000008 + 0xf0) = uRame600000000000020;
    *(undefined8 *)((long)register0x00000008 + 0x108) = uRame600000000000038;
    *(undefined8 *)((long)register0x00000008 + 0x100) = uRame600000000000030;
    *(undefined8 *)((long)register0x00000008 + 0x118) = uRame600000000000048;
    *(undefined8 *)((long)register0x00000008 + 0x110) = uRame600000000000040;
    *(undefined8 *)((long)register0x00000008 + 0x128) = uRame600000000000058;
    *(undefined8 *)((long)register0x00000008 + 0x120) = uRame600000000000050;
    *(undefined8 *)((long)register0x00000008 + 0xd8) = uRame600000000000008;
    *(undefined8 *)((long)register0x00000008 + 0xd0) = uRame600000000000000;
    *(undefined8 *)((long)register0x00000008 + 0xe8) = uRame600000000000018;
    *(undefined8 *)((long)register0x00000008 + 0xe0) = uRame600000000000010;
    puVar5 = (undefined1 *)((long)register0x00000008 + 0xd0);
    FUN_101f42a38(register0x00000008,puVar5);
    auVar27._4_4_ = 0;
    auVar27._0_4_ = (uint)register0x00000008 & 1;
    auVar27._8_8_ = puVar5;
    return auVar27;
  case (ulong *)0x30:
    puVar5 = puVar2;
    FUN_101f43bc4();
  case (ulong *)0x40:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)(0x64692d696f70,puVar5);
    auVar28._8_8_ = puVar5;
    auVar28._0_8_ = puVar2;
    return auVar28;
  case (ulong *)0x58:
    uVar4 = (ulong)*unaff_x20;
    FUN_101f42568();
    *puVar6 = uVar4;
    puVar6[1] = (ulong)puVar5;
    auVar23._8_8_ = puVar5;
    auVar23._0_8_ = uVar4;
    return auVar23;
  case (ulong *)0x68:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = 0x64692d696f70;
    return auVar25;
  case (ulong *)0x81:
  case (ulong *)0x85:
    unaff_x19 = (undefined1 *)(ulong)*unaff_x20;
  case (ulong *)0xaa:
  case (ulong *)0xcc:
    puVar6 = (ulong *)&stack0x00000008;
  case (ulong *)0x94:
  case (ulong *)0xaf:
  case (ulong *)0xdc:
    func_0x000107c6068c(puVar6,0);
  case (ulong *)0x92:
  case (ulong *)0x93:
  case (ulong *)0xad:
    puVar3 = unaff_x19;
    FUN_101f42568(puVar3);
  case (ulong *)0x91:
  case (ulong *)0xab:
    puVar2 = &stack0x00000008;
    puVar1 = puVar3;
    unaff_x19 = puVar5;
  case (ulong *)0x84:
    param_5 = unaff_x19;
    puVar5 = puVar1;
    unaff_x19 = param_5;
  case (ulong *)0xac:
    func_0x000107c5fb58(puVar2,puVar5,param_5);
  case (ulong *)0x8c:
  case (ulong *)0xa9:
    puVar2 = unaff_x19;
  case (ulong *)0x82:
  case (ulong *)0xb8:
    puVar3 = puVar5;
    break;
  case (ulong *)0xc8:
  case (ulong *)0x8d:
  case (ulong *)0x90:
  case (ulong *)0x95:
    func_0x000107c606a8();
  case (ulong *)0xb1:
  case (ulong *)0x8b:
    auVar21._8_8_ = puVar5;
    auVar21._0_8_ = puVar2;
    return auVar21;
  case (ulong *)0xd8:
  case (ulong *)0x98:
    FUN_101f43bc4();
    unaff_x19 = puVar2;
  case (ulong *)0x54:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(unaff_x19,puVar3);
    auVar29._8_8_ = puVar3;
    auVar29._0_8_ = unaff_x19;
    return auVar29;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  auVar30._8_8_ = puVar3;
  auVar30._0_8_ = puVar2;
  return auVar30;
}



/* Entry: 101f42714; end: 101f42863;  */

void FUN_101f42714(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_101f42568(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f42864; end: 101f4287b;  */

void FUN_101f42864(void)

{
  undefined1 *unaff_x20;
  
  FUN_101f42568(*unaff_x20);
  return;
}



/* Entry: 101f4287c; end: 101f4289f;  */

void FUN_101f4287c(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f42e08();
  *param_1 = param_2;
  return;
}



/* Entry: 101f428a0; end: 101f428b7;  */

undefined1  [16] FUN_101f428a0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f428b8; end: 101f42907;  */

void FUN_101f428b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f43bc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f42908; end: 101f4292b;  */

undefined1  [16] FUN_101f42908(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee0079726f74732d;
  auVar1._0_8_ = 0x696f702d79616c70;
  return auVar1;
}



/* Entry: 101f4292c; end: 101f429cf;  */

uint FUN_101f4292c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
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
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_110 = param_1[0x16];
  uStack_108 = (undefined1)param_1[0x17];
  uStack_ff = *(undefined8 *)((long)param_1 + 0xc1);
  uStack_107 = (undefined7)*(undefined8 *)((long)param_1 + 0xb9);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb9) >> 0x38);
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_40 = param_2[0x16];
  uStack_38 = (undefined1)param_2[0x17];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xc1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0xb9);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xb9) >> 0x38);
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_101f42a38(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 101f429d0; end: 101f42a37;  */

void FUN_101f429d0(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_101f42e6c(&uStack_f0);
  if (unaff_x21 == 0) {
    param_1[0x15] = uStack_48;
    param_1[0x14] = uStack_50;
    param_1[0x17] = CONCAT71(uStack_37,uStack_38);
    param_1[0x16] = uStack_40;
    *(undefined8 *)((long)param_1 + 0xc1) = uStack_2f;
    *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_30,uStack_37);
    param_1[0xd] = uStack_88;
    param_1[0xc] = uStack_90;
    param_1[0xf] = uStack_78;
    param_1[0xe] = uStack_80;
    param_1[0x11] = uStack_68;
    param_1[0x10] = uStack_70;
    param_1[0x13] = uStack_58;
    param_1[0x12] = uStack_60;
    param_1[5] = uStack_c8;
    param_1[4] = uStack_d0;
    param_1[7] = uStack_b8;
    param_1[6] = uStack_c0;
    param_1[9] = uStack_a8;
    param_1[8] = uStack_b0;
    param_1[0xb] = uStack_98;
    param_1[10] = uStack_a0;
    param_1[1] = uStack_e8;
    *param_1 = uStack_f0;
    param_1[3] = uStack_d8;
    param_1[2] = uStack_e0;
  }
  return;
}



/* Entry: 101f42a38; end: 101f42e07;  */

undefined8 FUN_101f42a38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar1 = *param_1;
  if ((uVar1 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar1 & 1) == 0))
  {
    return 0;
  }
  if ((double)param_1[2] != (double)param_2[2]) {
    return 0;
  }
  if ((double)param_1[3] != (double)param_2[3]) {
    return 0;
  }
  uVar1 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[4];
    if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[6];
    if (((uVar2 != param_2[6]) || (param_1[7] != uVar1)) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar5 = param_1[9];
  uVar4 = param_1[8];
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  uStack_60 = uVar4;
  uStack_58 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) goto LAB_101f42b78;
    func_0x00010105aabc(&uStack_60,auStack_80);
    func_0x00010105aabc(&uStack_70,auStack_80);
    uVar3 = uVar4;
    func_0x000100e25fcc(uVar4,uVar5,uVar1,uVar2);
    func_0x0001000b44c0(uVar1,uVar2);
    func_0x0001000b44c0(uVar4,uVar5);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar2 >> 0x3c < 0xf) {
LAB_101f42b78:
      func_0x00010105aabc(&uStack_60,auStack_80);
      func_0x00010105aabc(&uStack_70,auStack_80);
      func_0x0001000b44c0(uVar4,uVar5);
      func_0x0001000b44c0(uVar1,uVar2);
      return 0;
    }
    func_0x00010105aabc(&uStack_60,auStack_80);
    func_0x00010105aabc(&uStack_70,auStack_80);
    func_0x0001000b44c0(uVar4,uVar5);
  }
  uVar1 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[10];
    if (((uVar2 != param_2[10]) || (param_1[0xb] != uVar1)) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_2[0xd];
  if (param_1[0xd] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[0xc];
    if (((uVar2 != param_2[0xc]) || (param_1[0xd] != uVar1)) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_1[0xe];
  uVar2 = param_2[0xe];
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    func_0x000107c61434(uVar2);
    FUN_101f340bc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = param_2[0x10];
  if (param_1[0x10] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[0xf];
    if (((uVar2 != param_2[0xf]) || (param_1[0x10] != uVar1)) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_1[0x11];
  if (uVar1 == 0) {
    if (param_2[0x11] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[0x11] == 0) {
      return 0;
    }
    func_0x00010142cfc4();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[0x13] == '\x01') {
    if ((char)param_2[0x13] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x13] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x12] != (double)param_2[0x12]) {
      return 0;
    }
  }
  if ((char)param_1[0x15] == '\x01') {
    if ((char)param_2[0x15] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x15] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x14] != (double)param_2[0x14]) {
      return 0;
    }
  }
  if ((char)param_1[0x17] == '\x01') {
    if ((char)param_2[0x17] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x17] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x16] != (double)param_2[0x16]) {
      return 0;
    }
  }
  if ((char)param_1[0x19] == '\x01') {
    if ((char)param_2[0x19] == '\x01') {
      return 1;
    }
  }
  else if (((char)param_2[0x19] != '\x01') && ((double)param_1[0x18] == (double)param_2[0x18])) {
    return 1;
  }
  return 0;
}



/* Entry: 101f42e08; end: 101f42e6b;  */

ulong FUN_101f42e08(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (0xe < uVar1) {
    uVar1 = 0xf;
  }
  return uVar1;
}



/* Entry: 101f42e6c; end: 101f43587;  */

/* WARNING: Removing unreachable block (ram,0x000101f43204) */
/* WARNING: Removing unreachable block (ram,0x000101f430d0) */
/* WARNING: Removing unreachable block (ram,0x000101f42fec) */
/* WARNING: Removing unreachable block (ram,0x000101f431a4) */
/* WARNING: Removing unreachable block (ram,0x000101f42f44) */
/* WARNING: Removing unreachable block (ram,0x000101f43070) */
/* WARNING: Removing unreachable block (ram,0x000101f43144) */
/* WARNING: Removing unreachable block (ram,0x000101f43464) */
/* WARNING: Removing unreachable block (ram,0x000101f432f4) */
/* WARNING: Removing unreachable block (ram,0x000101f43290) */
/* WARNING: Removing unreachable block (ram,0x000101f43380) */
/* WARNING: Removing unreachable block (ram,0x000101f4301c) */
/* WARNING: Removing unreachable block (ram,0x000101f43030) */
/* WARNING: Removing unreachable block (ram,0x000101f43074) */
/* WARNING: Removing unreachable block (ram,0x000101f4303c) */
/* WARNING: Removing unreachable block (ram,0x000101f43080) */
/* WARNING: Removing unreachable block (ram,0x000101f43040) */
/* WARNING: Removing unreachable block (ram,0x000101f43084) */
/* WARNING: Removing unreachable block (ram,0x000101f4304c) */
/* WARNING: Removing unreachable block (ram,0x000101f43090) */
/* WARNING: Removing unreachable block (ram,0x000101f43050) */
/* WARNING: Removing unreachable block (ram,0x000101f43094) */
/* WARNING: Removing unreachable block (ram,0x000101f430a0) */
/* WARNING: Removing unreachable block (ram,0x000101f4305c) */
/* WARNING: Removing unreachable block (ram,0x000101f43060) */
/* WARNING: Removing unreachable block (ram,0x000101f43068) */

void FUN_101f42e6c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined8 **ppuStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 **ppuStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e0 [208];
  undefined8 ***pppuStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 ***pppuStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 **ppuStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 ***pppuStack_198;
  long lStack_190;
  undefined8 **ppuStack_188;
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined1 uStack_141;
  undefined8 ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_f0;
  long lStack_e8;
  undefined8 ***pppuStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar1 = 0x112e42978;
  func_0x0001000285a8(0x112e42978,&UNK_10da33948);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  lVar2 = param_3;
  func_0x0001000a8868(param_3,uVar5);
  FUN_101f43bc4();
  func_0x000107c606e0((long)&ppuStack_330 - extraout_x8,&UNK_1104a4ba8,&UNK_1104a4ba8,lVar2,uVar5,
                      uVar6);
  if (unaff_x21 == 0) {
    pppuStack_210 = (undefined8 ***)((ulong)pppuStack_210 & 0xffffffffffffff00);
    ppppuVar3 = &pppuStack_210;
    lVar2 = lVar1;
    func_0x000107c604f4();
    pppuStack_210._0_1_ = 1;
    lStack_2f0 = lVar2;
    pppuStack_140 = ppppuVar3;
    lStack_138 = lVar2;
    func_0x000107c604fc(&pppuStack_210,lVar1);
    pppuStack_210._0_1_ = 2;
    lStack_130 = param_2;
    func_0x000107c604fc(&pppuStack_210,lVar1);
    pppuStack_210._0_1_ = 3;
    ppppuVar3 = &pppuStack_210;
    lVar2 = lVar1;
    lStack_128 = param_2;
    func_0x000107c604d4();
    pppuStack_210 = (undefined8 ***)CONCAT71(pppuStack_210._1_7_,4);
    ppppuVar4 = &pppuStack_210;
    lVar8 = lVar1;
    lStack_2f8 = lVar2;
    pppuStack_120 = ppppuVar3;
    lStack_118 = lVar2;
    func_0x000107c604d4();
    auStack_2e0[0] = 5;
    lStack_300 = lVar8;
    pppuStack_110 = ppppuVar4;
    lStack_108 = lVar8;
    func_0x0001006e2f9c();
    func_0x000107c604e8(&pppuStack_210,PTR___s10Foundation4DataVN_110350ae0,auStack_2e0,lVar1,
                        PTR___s10Foundation4DataVN_110350ae0,ppppuVar4);
    ppuStack_310 = pppuStack_210;
    lStack_308 = lStack_208;
    ppuStack_100 = pppuStack_210;
    lStack_f8 = lStack_208;
    pppuStack_210._0_1_ = 6;
    ppppuVar3 = &pppuStack_210;
    lVar2 = lVar1;
    func_0x000107c604d4();
    pppuStack_210 = (undefined8 ***)CONCAT71(pppuStack_210._1_7_,7);
    ppppuVar4 = &pppuStack_210;
    lVar8 = lVar1;
    lStack_318 = lVar2;
    pppuStack_f0 = ppppuVar3;
    lStack_e8 = lVar2;
    func_0x000107c604d4();
    uVar5 = 0x112e42530;
    lStack_320 = lVar8;
    pppuStack_e0 = ppppuVar4;
    lStack_d8 = lVar8;
    func_0x0001000285a8(0x112e42530,&UNK_10da32d50);
    auStack_2e0[0] = 8;
    uVar6 = uVar5;
    FUN_101f3e558();
    func_0x000107c604e8(&pppuStack_210,uVar5,auStack_2e0,lVar1,uVar5,uVar6);
    ppuStack_330 = pppuStack_210;
    ppuStack_d0 = pppuStack_210;
    pppuStack_210 = (undefined8 ***)CONCAT71(pppuStack_210._1_7_,9);
    ppppuVar3 = &pppuStack_210;
    lVar2 = lVar1;
    func_0x000107c604d4();
    uVar5 = 0x112d38270;
    lStack_328 = lVar2;
    pppuStack_c8 = ppppuVar3;
    lStack_c0 = lVar2;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    auStack_2e0[0] = 10;
    uVar6 = uVar5;
    FUN_10188fe58();
    func_0x000107c604e8(&pppuStack_210,uVar5,auStack_2e0,lVar1,uVar5,uVar6);
    ppuStack_b8 = pppuStack_210;
    pppuStack_210._0_1_ = 0xb;
    ppppuVar3 = &pppuStack_210;
    lVar2 = lVar1;
    func_0x000107c604dc();
    uStack_a8 = (undefined1)lVar2;
    pppuStack_210._0_1_ = 0xc;
    ppppuVar4 = &pppuStack_210;
    lVar2 = lVar1;
    pppuStack_b0 = ppppuVar3;
    func_0x000107c604dc();
    uStack_98 = (undefined1)lVar2;
    pppuStack_210._0_1_ = 0xd;
    ppppuVar3 = &pppuStack_210;
    lVar2 = lVar1;
    pppuStack_a0 = ppppuVar4;
    func_0x000107c604dc();
    uStack_88 = (undefined1)lVar2;
    uStack_141 = 0xe;
    puVar7 = &uStack_141;
    lVar2 = lVar1;
    pppuStack_90 = ppppuVar3;
    func_0x000107c604dc();
    (**(code **)(lVar9 + 8))((long)&ppuStack_330 - extraout_x8,lVar1);
    uStack_80 = SUB81(puVar7,0);
    uStack_7f = (undefined7)((ulong)puVar7 >> 8);
    uStack_78 = (undefined1)lVar2;
    lStack_168 = CONCAT71(uStack_97,uStack_98);
    pppuStack_170 = pppuStack_a0;
    uStack_158 = uStack_88;
    pppuStack_160 = pppuStack_90;
    lStack_1a8 = lStack_d8;
    pppuStack_1b0 = pppuStack_e0;
    pppuStack_198 = pppuStack_c8;
    ppuStack_1a0 = ppuStack_d0;
    lStack_178 = CONCAT71(uStack_a7,uStack_a8);
    ppuStack_188 = ppuStack_b8;
    lStack_190 = lStack_c0;
    pppuStack_180 = pppuStack_b0;
    lStack_1e8 = lStack_118;
    pppuStack_1f0 = pppuStack_120;
    lStack_1d8 = lStack_108;
    pppuStack_1e0 = pppuStack_110;
    lStack_1c8 = lStack_f8;
    ppuStack_1d0 = ppuStack_100;
    lStack_1b8 = lStack_e8;
    pppuStack_1c0 = pppuStack_f0;
    lStack_208 = lStack_138;
    pppuStack_210 = pppuStack_140;
    lStack_1f8 = lStack_128;
    lStack_200 = lStack_130;
    uStack_14f = CONCAT17(uStack_78,uStack_7f);
    uStack_157 = uStack_87;
    uStack_150 = uStack_80;
    FUN_101f43c04(&pppuStack_210,auStack_2e0);
    func_0x0001000834e4(param_3);
    func_0x000101f43c38(&pppuStack_140);
    param_1[0x15] = lStack_168;
    param_1[0x14] = (long)pppuStack_170;
    param_1[0x17] = CONCAT71(uStack_157,uStack_158);
    param_1[0x16] = (long)pppuStack_160;
    *(undefined8 *)((long)param_1 + 0xc1) = uStack_14f;
    *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_150,uStack_157);
    param_1[0xd] = lStack_1a8;
    param_1[0xc] = (long)pppuStack_1b0;
    param_1[0xf] = (long)pppuStack_198;
    param_1[0xe] = (long)ppuStack_1a0;
    param_1[0x11] = (long)ppuStack_188;
    param_1[0x10] = lStack_190;
    param_1[0x13] = lStack_178;
    param_1[0x12] = (long)pppuStack_180;
    param_1[5] = lStack_1e8;
    param_1[4] = (long)pppuStack_1f0;
    param_1[7] = lStack_1d8;
    param_1[6] = (long)pppuStack_1e0;
    param_1[9] = lStack_1c8;
    param_1[8] = (long)ppuStack_1d0;
    param_1[0xb] = lStack_1b8;
    param_1[10] = (long)pppuStack_1c0;
    param_1[1] = lStack_208;
    *param_1 = (long)pppuStack_210;
    param_1[3] = lStack_1f8;
    param_1[2] = lStack_200;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f43588; end: 101f435ab;  */

void FUN_101f43588(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f435ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f435ac; end: 101f435eb;  */

void FUN_101f435ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33904;
  func_0x000107c61520(&UNK_10da33904,&UNK_1104a4ad8);
  puRam0000000112e42970 = puVar1;
  return;
}



/* Entry: 101f435ec; end: 101f43687;  */

long FUN_101f435ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f43688; end: 101f437a3;  */

undefined8 * FUN_101f43688(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar5 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar1);
  if (uVar5 >> 0x3c < 0xf) {
    uVar6 = param_2[8];
    func_0x00010006c00c(uVar6,uVar5);
    param_1[8] = uVar6;
    param_1[9] = uVar5;
  }
  else {
    uVar6 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
  }
  uVar6 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar6;
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  uVar6 = param_2[0xe];
  uVar1 = param_2[0xf];
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x10];
  uVar3 = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar3;
  uVar4 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar4;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[0x18] = param_2[0x18];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 101f437a4; end: 101f43983;  */

undefined8 * FUN_101f437a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[9];
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[8];
      func_0x00010006c00c(uVar4,uVar3);
      uVar2 = param_1[8];
      uVar1 = param_1[9];
      param_1[8] = uVar4;
      param_1[9] = uVar3;
      func_0x00010006c090(uVar2,uVar1);
      goto LAB_101f438a0;
    }
    func_0x0001006e5814(param_1 + 8);
  }
  else if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
    goto LAB_101f438a0;
  }
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
LAB_101f438a0:
  param_1[10] = param_2[10];
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0xc] = param_2[0xc];
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0xf] = param_2[0xf];
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar2;
  uVar2 = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = uVar2;
  uVar2 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = uVar2;
  uVar2 = param_2[0x18];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[0x18] = uVar2;
  return param_1;
}



/* Entry: 101f43984; end: 101f439c7;  */

void FUN_101f43984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  uVar7 = *(undefined8 *)((long)param_2 + 0xb9);
  *(undefined8 *)((long)param_1 + 0xc1) = *(undefined8 *)((long)param_2 + 0xc1);
  *(undefined8 *)((long)param_1 + 0xb9) = uVar7;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Entry: 101f439c8; end: 101f43af7;  */

undefined8 * FUN_101f439c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_101f43a58;
    }
    func_0x0001006e5814(param_1 + 8);
  }
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
LAB_101f43a58:
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0x10];
  uVar1 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c6142c(uVar2);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 101f43af8; end: 101f43bc3;  */

int FUN_101f43af8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xc9) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f43bc4; end: 101f43c03;  */

void FUN_101f43bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33a54;
  func_0x000107c61520(&UNK_10da33a54,&UNK_1104a4ba8);
  puRam0000000112e42980 = puVar1;
  return;
}



/* Entry: 101f43c04; end: 101f43c63;  */

undefined8 FUN_101f43c04(undefined8 param_1,undefined8 param_2)

{
  FUN_101f43688(param_2,param_1,&UNK_1104a4ad8);
  return param_2;
}



/* Entry: 101f43c64; end: 101f43dcb;  */

int FUN_101f43c64(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f43ce0;
        goto LAB_101f43cc4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f43cc4:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_101f43ce0:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f43dcc; end: 101f43e0b;  */

void FUN_101f43dcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33a2c;
  func_0x000107c61520(&UNK_10da33a2c,&UNK_1104a4ba8);
  puRam0000000112e42988 = puVar1;
  return;
}



/* Entry: 101f43e0c; end: 101f43e0f;  */

void FUN_101f43e0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3398c;
  func_0x000107c61520(&UNK_10da3398c,&UNK_1104a4ba8);
  puRam0000000112e42990 = puVar1;
  return;
}



/* Entry: 101f43e10; end: 101f43e4f;  */

void FUN_101f43e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3398c;
  func_0x000107c61520(&UNK_10da3398c,&UNK_1104a4ba8);
  puRam0000000112e42990 = puVar1;
  return;
}



/* Entry: 101f43e50; end: 101f43e53;  */

void FUN_101f43e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33964;
  func_0x000107c61520(&UNK_10da33964,&UNK_1104a4ba8);
  puRam0000000112e42998 = puVar1;
  return;
}



/* Entry: 101f43e54; end: 101f43e93;  */

void FUN_101f43e54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33964;
  func_0x000107c61520(&UNK_10da33964,&UNK_1104a4ba8);
  puRam0000000112e42998 = puVar1;
  return;
}



/* Entry: 101f43e94; end: 101f43ea7;  */

bool FUN_101f43e94(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f43ea8; end: 101f43eff;  */

void FUN_101f43ea8(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,*(undefined8 *)(&UNK_10da33c98 + (ulong)bVar1 * 8),
                      0xe800000000000000);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f43f00; end: 101f43f2b;  */

void FUN_101f43f00(undefined8 param_1)

{
  byte *unaff_x20;
  
  func_0x000107c5fb58(param_1,*(undefined8 *)(&UNK_10da33c98 + (ulong)*unaff_x20 * 8),
                      0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe800000000000000);
  return;
}



/* Entry: 101f43f2c; end: 101f43fab;  */

void FUN_101f43f2c(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,*(undefined8 *)(&UNK_10da33c98 + (ulong)bVar1 * 8),
                      0xe800000000000000);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f43fac; end: 101f43fdf;  */

void FUN_101f43fac(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_10da33c98 + (ulong)*unaff_x20 * 8);
  param_1[1] = 0xe800000000000000;
  return;
}



/* Entry: 101f43fe0; end: 101f44003;  */

void FUN_101f43fe0(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f44134();
  *param_1 = param_2;
  return;
}



/* Entry: 101f44004; end: 101f4401b;  */

undefined1  [16] FUN_101f44004(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f4401c; end: 101f4406b;  */

void FUN_101f4401c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f44548();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f4406c; end: 101f44087;  */

undefined1  [16] FUN_101f4406c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01ca40;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Entry: 101f44088; end: 101f44107;  */

bool FUN_101f44088(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *param_1;
  dVar4 = (double)param_1[2];
  dVar2 = (double)param_1[3];
  dVar5 = (double)param_2[2];
  dVar3 = (double)param_2[3];
  if (uVar1 == *param_2 && param_1[1] == param_2[1]) {
    if (dVar4 != dVar5) {
      return false;
    }
  }
  else {
    func_0x000107c605b8();
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (dVar4 != dVar5) {
      return false;
    }
  }
  return dVar2 == dVar3;
}



/* Entry: 101f44108; end: 101f44133;  */

void FUN_101f44108(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_101f44198();
  if (unaff_x21 == 0) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_2;
    param_1[3] = param_3;
  }
  return;
}



/* Entry: 101f44134; end: 101f44197;  */

ulong FUN_101f44134(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101f44198; end: 101f4434b;  */

/* WARNING: Removing unreachable block (ram,0x000101f442dc) */
/* WARNING: Removing unreachable block (ram,0x000101f4432c) */
/* WARNING: Removing unreachable block (ram,0x000101f44264) */

undefined1 * FUN_101f44198(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [13];
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar2 = 0x112e42b38;
  func_0x0001000285a8(0x112e42b38,&UNK_10da33b40);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_101f44548();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a4da0,&UNK_1104a4da0,lVar3,uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    puVar4 = &uStack_61;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_62 = 1;
    func_0x000107c604fc(&uStack_62,lVar2);
    uStack_63 = 2;
    func_0x000107c604fc(&uStack_63,lVar2);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 101f4434c; end: 101f4436f;  */

void FUN_101f4434c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f44370();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f44370; end: 101f443af;  */

void FUN_101f44370(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33af4;
  func_0x000107c61520(&UNK_10da33af4,&UNK_1104a4d00);
  puRam0000000112e42b30 = puVar1;
  return;
}



/* Entry: 101f443b0; end: 101f443db;  */

long FUN_101f443b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f443dc; end: 101f443e3;  */

void FUN_101f443dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f443e4; end: 101f44417;  */

undefined8 * FUN_101f443e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f44418; end: 101f44473;  */

undefined8 * FUN_101f44418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 101f44474; end: 101f444af;  */

undefined8 * FUN_101f44474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 101f444b0; end: 101f44547;  */

int FUN_101f444b0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f44548; end: 101f44587;  */

void FUN_101f44548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33c44;
  func_0x000107c61520(&UNK_10da33c44,&UNK_1104a4da0);
  puRam0000000112e42b40 = puVar1;
  return;
}



/* Entry: 101f44588; end: 101f446ef;  */

int FUN_101f44588(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f44604;
        goto LAB_101f445e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f445e8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101f44604:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f446f0; end: 101f4472f;  */

void FUN_101f446f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33c1c;
  func_0x000107c61520(&UNK_10da33c1c,&UNK_1104a4da0);
  puRam0000000112e42b48 = puVar1;
  return;
}



/* Entry: 101f44730; end: 101f44733;  */

void FUN_101f44730(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33b7c;
  func_0x000107c61520(&UNK_10da33b7c,&UNK_1104a4da0);
  puRam0000000112e42b50 = puVar1;
  return;
}



/* Entry: 101f44734; end: 101f44773;  */

void FUN_101f44734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33b7c;
  func_0x000107c61520(&UNK_10da33b7c,&UNK_1104a4da0);
  puRam0000000112e42b50 = puVar1;
  return;
}



/* Entry: 101f44774; end: 101f44777;  */

void FUN_101f44774(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33b54;
  func_0x000107c61520(&UNK_10da33b54,&UNK_1104a4da0);
  puRam0000000112e42b58 = puVar1;
  return;
}



/* Entry: 101f44778; end: 101f447b7;  */

void FUN_101f44778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33b54;
  func_0x000107c61520(&UNK_10da33b54,&UNK_1104a4da0);
  puRam0000000112e42b58 = puVar1;
  return;
}



/* Entry: 101f447b8; end: 101f44857;  */

bool FUN_101f447b8(double *param_1,double *param_2)

{
  if (*param_1 == *param_2) {
    return param_1[1] == param_2[1];
  }
  return false;
}



/* Entry: 101f44858; end: 101f4487b;  */

void FUN_101f44858(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f4487c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f4487c; end: 101f448bb;  */

void FUN_101f4487c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33d34;
  func_0x000107c61520(&UNK_10da33d34,&UNK_1104a4f30);
  puRam0000000112e42bd0 = puVar1;
  return;
}



/* Entry: 101f448bc; end: 101f448c3;  */

undefined8 FUN_101f448bc(void)

{
  return 1;
}



/* Entry: 101f448c4; end: 101f448e7;  */

void FUN_101f448c4(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 101f448e8; end: 101f448ff;  */

undefined1  [16] FUN_101f448e8(void)

{
  return ZEXT816(0x1104a4f30);
}



/* Entry: 101f44900; end: 101f44953;  */

void FUN_101f44900(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f44954; end: 101f4496f;  */

void FUN_101f44954(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x692d646e65697266,0xe900000000000064);
  return;
}



/* Entry: 101f44970; end: 101f449bf;  */

void FUN_101f44970(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x692d646e65697266,0xe900000000000064);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f449c0; end: 101f44a2b;  */

void FUN_101f449c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f44a2c; end: 101f44a67;  */

void FUN_101f44a2c(undefined8 *param_1)

{
  *param_1 = 0x692d646e65697266;
  param_1[1] = 0xe900000000000064;
  return;
}



/* Entry: 101f44a68; end: 101f44ad7;  */

void FUN_101f44a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f44ad8; end: 101f44aef;  */

undefined1  [16] FUN_101f44ad8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f44af0; end: 101f44b3f;  */

void FUN_101f44af0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f44b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f44b40; end: 101f44b7f;  */

void FUN_101f44b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33f20;
  func_0x000107c61520(&UNK_10da33f20,&UNK_1104a5080);
  puRam0000000112e42be0 = puVar1;
  return;
}



/* Entry: 101f44b80; end: 101f44b9b;  */

undefined1  [16] FUN_101f44b80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01ca80;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Entry: 101f44b9c; end: 101f44bbf;  */

void FUN_101f44b9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f44bc0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f44bc0; end: 101f44bff;  */

void FUN_101f44bc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33dcc;
  func_0x000107c61520(&UNK_10da33dcc,&UNK_1104a4fe8);
  puRam0000000112e42be8 = puVar1;
  return;
}



/* Entry: 101f44c00; end: 101f44c2f;  */

long FUN_101f44c00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f44c30; end: 101f44d57;  */

/* WARNING: Removing unreachable block (ram,0x000101f44cf4) */

void FUN_101f44c30(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e42bd8;
  func_0x0001000285a8(0x112e42bd8,&UNK_10da33d80);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f44b40();
  puVar5 = &UNK_1104a5080;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a5080,&UNK_1104a5080,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f44d58; end: 101f44d5f;  */

void FUN_101f44d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f44d60; end: 101f44dcf;  */

undefined8 * FUN_101f44d60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f44dd0; end: 101f44f53;  */

int FUN_101f44dd0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f44f54; end: 101f44f93;  */

void FUN_101f44f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33ef8;
  func_0x000107c61520(&UNK_10da33ef8,&UNK_1104a5080);
  puRam0000000112e42bf0 = puVar1;
  return;
}



/* Entry: 101f44f94; end: 101f44f97;  */

void FUN_101f44f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33e58;
  func_0x000107c61520(&UNK_10da33e58,&UNK_1104a5080);
  puRam0000000112e42bf8 = puVar1;
  return;
}



/* Entry: 101f44f98; end: 101f44fd7;  */

void FUN_101f44f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33e58;
  func_0x000107c61520(&UNK_10da33e58,&UNK_1104a5080);
  puRam0000000112e42bf8 = puVar1;
  return;
}



/* Entry: 101f44fd8; end: 101f44fdb;  */

void FUN_101f44fd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33e30;
  func_0x000107c61520(&UNK_10da33e30,&UNK_1104a5080);
  puRam0000000112e42c00 = puVar1;
  return;
}



/* Entry: 101f44fdc; end: 101f4501b;  */

void FUN_101f44fdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33e30;
  func_0x000107c61520(&UNK_10da33e30,&UNK_1104a5080);
  puRam0000000112e42c00 = puVar1;
  return;
}



/* Entry: 101f4501c; end: 101f45037;  */

undefined8 * FUN_101f4501c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f45038; end: 101f4524b;  */

void FUN_101f45038(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xe900000000000065;
  uVar3 = 0x64757469676e6f6c;
  if (cVar4 != '\x01') {
    uVar1 = 0xee00676e69727473;
    uVar3 = 0x2d73736572646461;
  }
  uVar2 = 0x656475746974616c;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f4524c; end: 101f45327;  */

void FUN_101f4524c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0xe900000000000065;
  uVar3 = 0x64757469676e6f6c;
  if (cVar4 != '\x01') {
    uVar1 = 0xee00676e69727473;
    uVar3 = 0x2d73736572646461;
  }
  uVar2 = 0x656475746974616c;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101f45328; end: 101f4534b;  */

void FUN_101f45328(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f45448();
  *param_1 = param_2;
  return;
}



/* Entry: 101f4534c; end: 101f45363;  */

undefined1  [16] FUN_101f4534c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f45364; end: 101f453b3;  */

void FUN_101f45364(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f45824();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f453b4; end: 101f4541b;  */

undefined1  [16] FUN_101f453b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01caa0;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 101f4541c; end: 101f45447;  */

void FUN_101f4541c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_101f454ac();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 101f45448; end: 101f454ab;  */

ulong FUN_101f45448(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101f454ac; end: 101f45637;  */

/* WARNING: Removing unreachable block (ram,0x000101f455c8) */

undefined1 * FUN_101f454ac(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [13];
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112e42c90;
  func_0x0001000285a8(0x112e42c90,&UNK_10da34000);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  puVar5 = puVar4;
  FUN_101f45824();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a5278,&UNK_1104a5278,puVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    func_0x000107c604fc(&uStack_61,lVar3);
    uStack_62 = 1;
    func_0x000107c604fc(&uStack_62,lVar3);
    uStack_63 = 2;
    puVar4 = &uStack_63;
    func_0x000107c604f4(puVar4,lVar3);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 101f45638; end: 101f4565b;  */

void FUN_101f45638(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f4565c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f4565c; end: 101f4569b;  */

void FUN_101f4565c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33fb4;
  func_0x000107c61520(&UNK_10da33fb4,&UNK_1104a51d8);
  puRam0000000112e42c88 = puVar1;
  return;
}



/* Entry: 101f4569c; end: 101f456c7;  */

long FUN_101f4569c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f456c8; end: 101f456cf;  */

void FUN_101f456c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}


