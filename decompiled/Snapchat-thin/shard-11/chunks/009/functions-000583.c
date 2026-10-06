/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b3c174; end: 108b3c8c7;  */

/* WARNING: Possible PIC construction at 0x000108b3c8dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b3c8e0) */

void FUN_108b3c174(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint param_7,long param_8,uint param_9)

{
  byte *pbVar1;
  undefined8 *puVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  byte bVar14;
  long extraout_x8;
  long lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  ulong extraout_x12;
  undefined1 *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *unaff_x22;
  int iVar24;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *unaff_x26;
  uint *puVar25;
  uint *unaff_x28;
  undefined8 uVar26;
  uint uStack_d0;
  int iStack_cc;
  byte *pbStack_c8;
  uint *puStack_c0;
  int iStack_b4;
  uint *puStack_b0;
  uint uStack_a4;
  uint *puStack_a0;
  uint uStack_98;
  uint uStack_94;
  ulong uStack_90;
  uint *puStack_88;
  uint *puStack_80;
  uint *puStack_78;
  uint auStack_6c [3];
  
  func_0x000108b3c91c();
  puVar25 = (uint *)0xffffffff;
  iVar8 = (int)param_2;
  puVar6 = &uStack_d0;
  puVar9 = param_1;
  puVar13 = param_3;
  if (-1 < iVar8) {
    uVar12 = (uint)param_3;
    uVar4 = uVar12 - iVar8;
    in_ZR = uVar4 == 0;
    puVar6 = &uStack_d0;
    unaff_x21 = param_2;
    unaff_x28 = param_3;
    if ((!(bool)in_ZR && iVar8 <= (int)uVar12) &&
       (in_ZR = uVar12 == param_1[1], puVar6 = &uStack_d0, unaff_x26 = param_1,
       (int)uVar12 <= (int)param_1[1])) {
      uVar22 = (ulong)param_2 & 0xffffffff;
      puStack_88 = (uint *)((long)param_1 + ((ulong)param_2 & 0xffffffff) * 2 + 0x188);
      puStack_c0 = param_1 + ((ulong)param_2 & 0xffffffff) * 2 + 2;
      pbStack_c8 = (byte *)((long)puStack_88 + (long)(int)uVar4 * 2);
      uStack_98 = (uint)param_5;
      iStack_b4 = (int)param_6;
      if (iStack_b4 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
        if (0xfb < *(short *)(pbStack_c8 + -2)) {
          uVar21 = 2;
        }
      }
      puStack_78 = param_1 + 0x7c;
      puStack_80 = param_1 + 0xdc;
      unaff_x24 = param_1 + 0x10c;
      uVar19 = param_9;
      puStack_b0 = (uint *)(ulong)uVar4;
      uStack_a4 = param_7;
      puStack_a0 = param_4;
      uStack_90 = uVar22;
      for (; (int)uVar22 < (int)uVar12; uVar22 = uVar22 + 1) {
        puVar9 = *(uint **)(param_1 + uVar22 * 2 + 0x7c);
        param_2 = (uint *)(ulong)param_1[uVar22 + 0xdc];
        func_0x000108b398d8(puVar9,param_2,*(byte *)((long)param_1 + uVar22 + 0x430));
        uVar19 = ((uint)puVar9 & ((int)(uint)puVar9 >> 0x1f ^ 0xffffffffU)) + uVar19;
      }
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((long)(int)uVar19 * 0x18 + 0xfU & 0xfffffffffffffff0);
      puVar6 = (uint *)((long)&uStack_d0 + -extraout_x8);
      unaff_x23 = (uint *)(ulong)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU));
      for (lVar15 = 0; (long)unaff_x23 * (extraout_x12 & 0xffffffff) - lVar15 != 0;
          lVar15 = lVar15 + 0x18) {
        pbVar1 = (byte *)((long)puVar6 + lVar15);
        puVar2 = (undefined8 *)(param_8 + lVar15);
        uVar26 = *puVar2;
        *(undefined8 *)(pbVar1 + 8) = puVar2[1];
        *(undefined8 *)pbVar1 = uVar26;
        *(undefined8 *)(pbVar1 + 0x10) = puVar2[2];
      }
      unaff_x19 = (undefined1 *)((long)&iStack_cc + -extraout_x8);
      uVar22 = uStack_90;
      uStack_94 = uVar21;
      while( true ) {
        uVar21 = uStack_98;
        unaff_x22 = puStack_a0;
        uVar4 = uStack_a4;
        unaff_x25 = puStack_b0;
        uVar17 = (uint)uVar22;
        in_ZR = uVar12 == uVar17;
        iVar24 = (int)unaff_x23;
        if ((int)uVar12 <= (int)uVar17) break;
        auStack_6c[0] = uVar19 - iVar24;
        puVar9 = *(uint **)(puStack_78 + uVar22 * 2);
        param_2 = (uint *)(ulong)puStack_80[uVar22];
        puVar13 = puVar6 + (long)iVar24 * 6;
        param_5 = (uint *)(ulong)*(byte *)((long)unaff_x24 + uVar22);
        param_4 = auStack_6c;
        FUN_108b3992c();
        uVar4 = auStack_6c[0];
        if ((int)puVar9 < 0) {
          unaff_x20 = puVar6;
          unaff_x22 = (uint *)(ulong)uVar19;
          unaff_x25 = (uint *)0x18;
          puVar25 = (uint *)0xfffffffd;
          goto LAB_108b3c7ac;
        }
        piVar5 = (int *)(unaff_x19 + (long)iVar24 * 0x18);
        for (uVar20 = (ulong)(auStack_6c[0] & ((int)auStack_6c[0] >> 0x1f ^ 0xffffffffU));
            uVar20 != 0; uVar20 = uVar20 - 1) {
          *piVar5 = (uVar17 - iVar8) + *piVar5;
          piVar5 = piVar5 + 6;
        }
        unaff_x23 = (uint *)(ulong)(uVar4 + iVar24);
        uVar22 = uVar22 + 1;
      }
      uVar12 = (uint)puStack_b0;
      unaff_x21 = puStack_88;
      if (uVar12 == 2) {
        iVar8 = (int)(short)*puStack_88;
        if (*(short *)((long)puStack_88 + 2) == (short)*puStack_88) {
          uVar19 = uStack_94 + iVar8 * 2 + 1;
          in_ZR = uVar19 == uStack_98;
          if ((int)uVar19 <= (int)uStack_98) {
            bVar14 = (byte)*param_1 & 0xfc | 1;
            goto LAB_108b3c3d0;
          }
        }
        else {
          iVar23 = uStack_94 + (int)*(short *)((long)puStack_88 + 2) + iVar8;
          if (0xfb < iVar8) {
            iVar23 = iVar23 + 1;
          }
          uVar19 = iVar23 + 2;
          in_ZR = uVar19 == uStack_98;
          if ((int)uVar19 <= (int)uStack_98) {
            *(byte *)puStack_a0 = (byte)*param_1 & 0xfc | 2;
            uVar17 = (uint)(short)*puStack_88;
            if ((short)*puStack_88 < 0xfc) {
              lVar15 = 1;
              uVar18 = uVar17;
            }
            else {
              uVar18 = uVar17 | 0xfffffffc;
              *(byte *)((long)puStack_a0 + 2) = (byte)(uVar17 - (uVar18 & 0xff) >> 2);
              lVar15 = 2;
            }
            *(byte *)((long)puStack_a0 + 1) = (byte)uVar18;
            unaff_x28 = (uint *)((byte *)((long)puStack_a0 + 1) + lVar15);
            goto LAB_108b3c454;
          }
        }
LAB_108b3c7a8:
        unaff_x28 = param_3;
        unaff_x20 = (uint *)(ulong)uVar4;
        puVar25 = (uint *)0xfffffffe;
        puVar13 = puVar6;
        unaff_x26 = param_1;
      }
      else {
        if (uVar12 != 1) {
          unaff_x28 = puStack_a0;
          param_3 = puStack_a0;
          uVar19 = uStack_94;
          if ((int)uVar12 < 3) goto LAB_108b3c454;
          goto LAB_108b3c4a0;
        }
        uVar19 = uStack_94 + (int)(short)*puStack_88 + 1;
        in_ZR = uVar19 == uStack_98;
        if (!(bool)in_ZR && (int)uStack_98 <= (int)uVar19) goto LAB_108b3c7a8;
        bVar14 = (byte)*param_1 & 0xfc;
LAB_108b3c3d0:
        *(byte *)puStack_a0 = bVar14;
        unaff_x28 = (uint *)((long)puStack_a0 + 1);
LAB_108b3c454:
        param_3 = unaff_x28;
        if (uStack_a4 == 0) {
          if (0 < iVar24) goto LAB_108b3c4a0;
LAB_108b3c464:
          puVar25 = (uint *)0x0;
          puStack_80 = (uint *)0x0;
          puStack_78 = (uint *)0x0;
          uStack_94 = uVar19;
        }
        else {
          if ((int)uStack_98 <= (int)uVar19 && iVar24 < 1) goto LAB_108b3c464;
LAB_108b3c4a0:
          unaff_x28 = (uint *)(ulong)uStack_98;
          unaff_x20 = (uint *)(ulong)uStack_a4;
          unaff_x21 = (uint *)(long)(int)uVar12;
          if (iStack_b4 == 0) {
            iVar8 = 2;
          }
          else {
            iVar8 = 3;
            if (0xfb < *(short *)((long)puStack_88 + (long)unaff_x21 * 2 + -2)) {
              iVar8 = 4;
            }
          }
          lVar15 = uStack_90 * 2 + 0x18a;
          puVar16 = (undefined1 *)0x1;
          do {
            unaff_x19 = puVar16;
            if ((long)unaff_x21 <= (long)unaff_x19) {
              uVar19 = iVar8 + uVar12 * (int)(short)*puStack_88;
              in_ZR = uVar19 == uStack_98;
              if (!(bool)in_ZR && (int)uStack_98 <= (int)uVar19) goto LAB_108b3c7a8;
              *(byte *)puStack_a0 = (byte)*param_1 | 3;
              *(byte *)((long)puStack_a0 + 1) = (byte)puStack_b0;
              goto LAB_108b3c588;
            }
            pbVar1 = (byte *)((long)param_1 + lVar15);
            lVar15 = lVar15 + 2;
            puVar16 = unaff_x19 + 1;
          } while (*(short *)pbVar1 == (short)*puStack_88);
          uVar19 = (uint)(byte *)((long)unaff_x21 + -1);
          lVar15 = uStack_90 * 2 + 0x188;
          for (uVar22 = (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar22 != 0;
              uVar22 = uVar22 - 1) {
            iVar23 = 1;
            if (0xfb < *(short *)((long)param_1 + lVar15)) {
              iVar23 = 2;
            }
            iVar8 = iVar8 + *(short *)((long)param_1 + lVar15) + iVar23;
            lVar15 = lVar15 + 2;
          }
          uVar19 = iVar8 + *(short *)((long)puStack_88 + ((long)unaff_x21 + -1) * 2);
          in_ZR = uVar19 == uStack_98;
          if (!(bool)in_ZR && (int)uStack_98 <= (int)uVar19) goto LAB_108b3c7a8;
          *(byte *)puStack_a0 = (byte)*param_1 | 3;
          *(byte *)((long)puStack_a0 + 1) = (byte)puStack_b0 | 0x80;
LAB_108b3c588:
          unaff_x26 = (uint *)(ulong)(uStack_98 - uVar19);
          uVar17 = 0;
          if (uStack_a4 != 0) {
            uVar17 = uStack_98 - uVar19;
          }
          param_1 = (uint *)(ulong)uVar17;
          in_ZR = iVar24 == 1;
          uStack_94 = uVar19;
          if (iVar24 < 1) {
            puVar25 = (uint *)0x0;
LAB_108b3c6b8:
            if ((int)param_1 != 0) goto LAB_108b3c6d0;
            puStack_80 = (uint *)0x0;
            puStack_78 = (uint *)0x0;
            unaff_x28 = (uint *)((long)unaff_x22 + 2);
          }
          else {
            puVar9 = (uint *)0x0;
            param_6 = (uint *)0x0;
            param_2 = unaff_x26;
            puVar13 = puVar6;
            param_4 = unaff_x23;
            param_5 = puStack_b0;
            FUN_108b399d0();
            iVar8 = (int)puVar9;
            unaff_x24 = puVar6;
            puVar25 = puVar9;
            if (iVar8 < 0) goto LAB_108b3c7ac;
            param_1 = unaff_x26;
            param_3 = unaff_x28;
            if (uVar4 != 0) goto LAB_108b3c6b8;
            if (iVar8 == 0) {
              uVar19 = 1;
            }
            else {
              uVar19 = (iVar8 + 0xfdU) / 0xfe;
            }
            param_1 = (uint *)(ulong)(uVar19 + iVar8);
LAB_108b3c6d0:
            *(byte *)((long)unaff_x22 + 1) = *(byte *)((long)unaff_x22 + 1) | 0x40;
            uVar17 = ((int)param_1 + -1) / 0xff;
            uVar19 = uVar17 + uStack_94 + (int)puVar25;
            in_ZR = uVar19 == uVar21;
            if ((int)uVar21 <= (int)uVar19) goto LAB_108b3c7a8;
            unaff_x28 = (uint *)((long)unaff_x22 + 3);
            for (uVar21 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU); uVar21 != 0;
                uVar21 = uVar21 - 1) {
              *(byte *)((long)unaff_x28 + -1) = 0xff;
              unaff_x28 = (uint *)((long)unaff_x28 + 1);
            }
            iVar8 = uStack_94 + uVar17;
            uStack_94 = (int)param_1 + uStack_94;
            puStack_78 = (uint *)(ulong)(uStack_94 - (int)puVar25);
            puStack_80 = (uint *)(ulong)(iVar8 + 1);
            *(byte *)((long)unaff_x28 + -1) = ((char)uVar17 + (char)param_1) - 1;
          }
          if ((long)unaff_x19 < (long)unaff_x21) {
            uVar21 = uVar12;
            if ((int)uVar12 < 2) {
              uVar21 = 1;
            }
            puVar13 = puStack_88;
            for (uVar22 = (ulong)(uVar21 - 1); uVar22 != 0; uVar22 = uVar22 - 1) {
              uVar21 = (uint)(short)*puVar13;
              if ((short)*puVar13 < 0xfc) {
                lVar15 = 1;
                uVar19 = uVar21;
              }
              else {
                uVar19 = uVar21 | 0xfffffffc;
                *(byte *)((long)unaff_x28 + 1) = (byte)(uVar21 - (uVar19 & 0xff) >> 2);
                lVar15 = 2;
              }
              *(byte *)unaff_x28 = (byte)uVar19;
              unaff_x28 = (uint *)((long)unaff_x28 + lVar15);
              puVar13 = (uint *)((long)puVar13 + 2);
            }
          }
        }
        unaff_x20 = (uint *)(ulong)uVar4;
        if (iStack_b4 != 0) {
          sVar3 = *(short *)(pbStack_c8 + -2);
          bVar14 = (byte)sVar3;
          if (sVar3 < 0xfc) {
            lVar15 = 1;
          }
          else {
            uVar21 = (int)sVar3 | 0xfffffffc;
            bVar14 = (byte)uVar21;
            *(byte *)((long)unaff_x28 + 1) = (byte)((int)sVar3 - (uVar21 & 0xff) >> 2);
            lVar15 = 2;
          }
          *(byte *)unaff_x28 = bVar14;
          unaff_x28 = (uint *)((long)unaff_x28 + lVar15);
        }
        puVar13 = puVar6;
        unaff_x26 = puStack_c0;
        unaff_x21 = puStack_88;
        for (uVar22 = (ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)); uVar22 != 0;
            uVar22 = uVar22 - 1) {
          param_2 = *(uint **)unaff_x26;
          puVar13 = (uint *)(long)(short)*unaff_x21;
          puVar9 = unaff_x28;
          _memmove();
          unaff_x28 = (uint *)((long)unaff_x28 + (long)(short)*unaff_x21);
          unaff_x26 = unaff_x26 + 2;
          unaff_x21 = (uint *)((long)unaff_x21 + 2);
        }
        unaff_x19 = (undefined1 *)(long)(int)puStack_78;
        if (0 < (int)puVar25) {
          puVar9 = (uint *)((long)unaff_x22 + (long)unaff_x19);
          param_6 = (uint *)0x0;
          param_2 = puVar25;
          puVar13 = puVar6;
          param_4 = unaff_x23;
          param_5 = unaff_x25;
          FUN_108b399d0();
          unaff_x24 = puVar6;
          if ((int)puVar9 != (int)puVar25) goto LAB_108b3c7d0;
        }
        puVar25 = (uint *)(ulong)uStack_94;
        for (puVar16 = (undefined1 *)(long)(int)puStack_80; in_ZR = puVar16 == unaff_x19,
            (long)puVar16 < (long)unaff_x19; puVar16 = puVar16 + 1) {
          *(byte *)((long)unaff_x22 + (long)puVar16) = 1;
        }
        unaff_x24 = puVar6;
        if ((uVar4 != 0) && (iVar24 == 0)) {
          for (; in_ZR = unaff_x28 == (uint *)((long)unaff_x22 + (long)(int)uStack_98),
              unaff_x28 < (uint *)((long)unaff_x22 + (long)(int)uStack_98);
              unaff_x28 = (uint *)((long)unaff_x28 + 1)) {
            *(byte *)unaff_x28 = 0;
          }
        }
      }
    }
  }
LAB_108b3c7ac:
  func_0x000108b3c904();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108b3c7d0:
  uVar26 = 0x108b3c7d4;
  _abort();
  do {
    *(uint **)((long)puVar6 + -0x60) = unaff_x28;
    *(uint **)((long)puVar6 + -0x58) = puVar25;
    *(uint **)((long)puVar6 + -0x50) = unaff_x26;
    *(uint **)((long)puVar6 + -0x48) = unaff_x25;
    *(uint **)((long)puVar6 + -0x40) = unaff_x24;
    *(uint **)((long)puVar6 + -0x38) = unaff_x23;
    *(uint **)((long)puVar6 + -0x30) = unaff_x22;
    *(uint **)((long)puVar6 + -0x28) = unaff_x21;
    *(uint **)((long)puVar6 + -0x20) = unaff_x20;
    *(undefined1 **)((long)puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar6 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)puVar6 + -8) = uVar26;
    puVar16 = (undefined1 *)((long)puVar6 + -0x10);
    register0x00000008 = (BADSPACEBASE *)((long)puVar6 + -0x4d0);
    unaff_x19 = (undefined1 *)((long)puVar6 + -0x4d0);
    func_0x000108b3c91c();
    iVar8 = (int)param_2;
    uVar7 = iVar8 == 1;
    puVar11 = param_2;
    if (iVar8 < 1) {
LAB_108b3c820:
      puVar10 = (uint *)0xffffffff;
    }
    else {
      uVar7 = iVar8 == (int)puVar13;
      unaff_x25 = param_2;
      unaff_x22 = puVar13;
      if ((bool)uVar7) {
        puVar10 = (uint *)0x0;
        register0x00000008 = (BADSPACEBASE *)((long)puVar6 + -0x4d0);
      }
      else {
        if ((int)puVar13 < iVar8) goto LAB_108b3c820;
        uVar22 = (ulong)param_2 & 0xffffffff;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        register0x00000008 =
             (BADSPACEBASE *)((long)puVar6 + (-0x4d0 - (uVar22 + 0xf & 0x1fffffff0)));
        *(undefined4 *)((long)puVar6 + -0x4c4) = 0;
        _memcpy(register0x00000008,puVar9);
        puVar10 = (uint *)((long)puVar6 + -0x4c8);
        puVar11 = (uint *)register0x00000008;
        puVar13 = param_2;
        func_0x000108b3c01c();
        unaff_x20 = param_5;
        unaff_x21 = param_4;
        unaff_x23 = puVar9;
        unaff_x24 = param_6;
        unaff_x26 = (uint *)register0x00000008;
        if ((int)puVar10 == 0) {
          puVar13 = (uint *)(ulong)*(uint *)((long)puVar6 + -0x4c4);
          *(int *)((long)register0x00000008 + -0x10) = (int)param_6;
          puVar10 = (uint *)((long)puVar6 + -0x4c8);
          puVar11 = (uint *)0x0;
          FUN_108b3c174();
        }
      }
    }
    func_0x000108b3c904();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar6 = (uint *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar16;
    *(code **)((long)register0x00000008 + -8) = FUN_108b3c8c8;
    param_4 = (uint *)0x1;
    param_5 = (uint *)0x0;
    param_6 = (uint *)0x0;
    uVar26 = 0x108b3c8e0;
    puVar9 = puVar10;
    param_2 = puVar11;
  } while( true );
}



/* Entry: 108b3c8c8; end: 108b3c8eb;  */

uint FUN_108b3c8c8(uint param_1)

{
  func_0x000108b3c7d4();
  return param_1 & (int)param_1 >> 0x1f;
}



/* Entry: 108b3c8ec; end: 108b3cc83;  */

void FUN_108b3c8ec(void)

{
  return;
}



/* Entry: 108b3cc84; end: 108b3cd7f;  */

void FUN_108b3cc84(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,int param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,int *param_13)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (param_3 != 0) {
    uVar6 = (param_9 * 0x5f) / 0x32;
    if ((int)(param_4 & 0xfffffffe) <= (int)uVar6) {
      uVar6 = param_4 & 0xfffffffe;
    }
    iVar8 = *(int *)(param_1 + 0x1d10);
    param_9 = param_9 / 0x32;
    iVar12 = uVar6 - iVar8;
    while (0 < iVar12) {
      iVar14 = param_9;
      if (iVar12 - param_9 == 0 || iVar12 < param_9) {
        iVar14 = iVar12;
      }
      FUN_108b3cd80(param_1,param_2,param_3,iVar14,iVar8,param_6,param_7,param_8,param_10);
      iVar8 = iVar8 + param_9;
      iVar12 = iVar12 - param_9;
    }
    *(uint *)(param_1 + 0x1d10) = uVar6 - param_5;
  }
  iVar12 = *(int *)(param_1 + 0x1d18);
  iVar14 = *(int *)(param_1 + 0x1d14);
  iVar11 = *(int *)(param_1 + 8) / 400;
  iVar8 = 0;
  if (iVar11 != 0) {
    iVar8 = param_5 / iVar11;
  }
  iVar8 = *(int *)(param_1 + 0x1d1c) + iVar8;
  *(int *)(param_1 + 0x1d1c) = iVar8;
  iVar11 = iVar12;
  while (7 < iVar8) {
    *(int *)(param_1 + 0x1d1c) = iVar8 + -8;
    iVar11 = iVar11 + 1;
    *(int *)(param_1 + 0x1d18) = iVar11;
    iVar8 = iVar8 + -8;
  }
  iVar8 = (iVar14 - iVar12) + 100;
  if (iVar12 <= iVar14) {
    iVar8 = iVar14 - iVar12;
  }
  if (99 < iVar11) {
    *(int *)(param_1 + 0x1d18) = iVar11 + -100;
  }
  iVar11 = 0;
  if (iVar12 != 99) {
    iVar11 = iVar12 + 1;
  }
  if (iVar14 != iVar12 && *(int *)(param_1 + 8) / 0x32 < param_5) {
    iVar12 = iVar11;
  }
  uVar7 = iVar12 - (uint)(iVar12 == iVar14);
  uVar6 = 99;
  if (-1 < (int)uVar7) {
    uVar6 = uVar7;
  }
  uVar9 = (ulong)uVar6;
  lVar1 = param_1 + 0x1db4;
  lVar10 = (long)(int)uVar6;
  puVar2 = (undefined8 *)(lVar1 + lVar10 * 0x40);
  uVar18 = puVar2[4];
  uVar20 = puVar2[7];
  uVar19 = puVar2[6];
  uVar26 = puVar2[1];
  uVar25 = *puVar2;
  uVar24 = puVar2[3];
  uVar23 = puVar2[2];
  *(undefined8 *)(param_13 + 10) = puVar2[5];
  *(undefined8 *)(param_13 + 8) = uVar18;
  *(undefined8 *)(param_13 + 0xe) = uVar20;
  *(undefined8 *)(param_13 + 0xc) = uVar19;
  *(undefined8 *)(param_13 + 2) = uVar26;
  *(undefined8 *)param_13 = uVar25;
  *(undefined8 *)(param_13 + 6) = uVar24;
  *(undefined8 *)(param_13 + 4) = uVar23;
  if (*param_13 != 0) {
    fVar16 = (float)param_13[1];
    uVar15 = uVar9;
    fVar22 = fVar16;
    for (iVar12 = -1; iVar12 != -4; iVar12 = iVar12 + -1) {
      uVar7 = 0;
      if ((int)uVar15 != 99) {
        uVar7 = (int)uVar15 + 1;
      }
      uVar15 = (ulong)uVar7;
      if (uVar7 == *(uint *)(param_1 + 0x1d14)) {
        iVar14 = iVar12 + 7;
        goto LAB_108b3ca58;
      }
      lVar3 = lVar1 + (long)(int)uVar7 * 0x40;
      fVar21 = *(float *)(lVar3 + 4);
      if (fVar22 <= fVar21) {
        fVar22 = fVar21;
      }
      fVar16 = fVar16 + fVar21;
      iVar11 = *(int *)(lVar3 + 0x20);
      iVar14 = param_13[8];
      if (param_13[8] <= iVar11) {
        iVar14 = iVar11;
      }
      param_13[8] = iVar14;
    }
    iVar14 = 3;
LAB_108b3ca58:
    uVar15 = uVar9;
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      uVar7 = 99;
      if (0 < (int)uVar15) {
        uVar7 = (int)uVar15 - 1;
      }
      uVar15 = (ulong)uVar7;
      if (uVar7 == *(uint *)(param_1 + 0x1d14)) break;
      iVar5 = *(int *)(param_1 + 0x1dd4 +
                      (-(ulong)(uVar7 >> 0x1f) & 0xffffffc000000000 | uVar15 << 6));
      iVar11 = param_13[8];
      if (param_13[8] <= iVar5) {
        iVar11 = iVar5;
      }
      param_13[8] = iVar11;
    }
    fVar21 = fVar16 / (float)(uint)-iVar12;
    if (fVar16 / (float)(uint)-iVar12 <= fVar22 + -0.2) {
      fVar21 = fVar22 + -0.2;
    }
    param_13[1] = (int)fVar21;
    iVar12 = -0x5f;
    if ((int)uVar6 < 0x5f) {
      iVar12 = 5;
    }
    uVar7 = uVar6 - 99;
    if ((int)uVar6 < 99) {
      uVar7 = uVar6 + 1;
    }
    uVar4 = uVar6;
    lVar3 = lVar10;
    if (0xf < iVar8) {
      uVar4 = iVar12 + uVar6;
      lVar10 = (long)(int)uVar7;
      lVar3 = (long)(int)(iVar12 + uVar6);
    }
    uVar15 = (ulong)uVar4;
    if (0xf < iVar8) {
      uVar6 = uVar7;
    }
    uVar13 = (ulong)uVar6;
    fVar16 = *(float *)(lVar1 + lVar10 * 0x40 + 0x24);
    fVar22 = 0.1;
    if (0.1 <= fVar16) {
      fVar22 = fVar16;
    }
    fVar21 = *(float *)(lVar1 + lVar3 * 0x40 + 0x14) * fVar22;
    fVar17 = 0.0;
    fVar27 = 1.0;
    while( true ) {
      uVar6 = 0;
      if ((int)uVar15 != 99) {
        uVar6 = (int)uVar15 + 1;
      }
      uVar15 = (ulong)uVar6;
      if (uVar6 == *(uint *)(param_1 + 0x1d14)) break;
      uVar7 = 0;
      if ((int)uVar13 != 99) {
        uVar7 = (int)uVar13 + 1;
      }
      uVar13 = (ulong)uVar7;
      if (uVar7 == *(uint *)(param_1 + 0x1d14)) break;
      fVar28 = *(float *)(param_1 + 0x1dd8 +
                         (-(ulong)(uVar7 >> 0x1f) & 0xffffffc000000000 | uVar13 << 6));
      fVar29 = (fVar21 + (fVar16 - fVar28) * -10.0) / fVar22;
      if (fVar27 <= fVar29) {
        fVar29 = fVar27;
      }
      fVar27 = fVar29;
      fVar29 = (fVar21 + (fVar16 - fVar28) * 10.0) / fVar22;
      if (fVar29 <= fVar17) {
        fVar29 = fVar17;
      }
      fVar17 = fVar29;
      fVar29 = 0.1;
      if (0.1 <= fVar28) {
        fVar29 = fVar28;
      }
      fVar22 = fVar22 + fVar29;
      fVar21 = fVar21 + *(float *)(param_1 + 0x1dc8 +
                                  (-(ulong)(uVar6 >> 0x1f) & 0xffffffc000000000 | uVar15 << 6)) *
                        fVar29;
    }
    fVar21 = fVar21 / fVar22;
    param_13[5] = (int)fVar21;
    fVar22 = fVar21;
    if (fVar27 <= fVar21) {
      fVar22 = fVar27;
    }
    if (fVar21 <= fVar17) {
      fVar21 = fVar17;
    }
    fVar21 = (float)NEON_fminnm(fVar21,0x3f800000);
    if (iVar8 < 10) {
      iVar12 = *(int *)(param_1 + 0x1d0c);
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      fVar17 = fVar21;
      fVar27 = fVar22;
      if (0xf < iVar12) {
        iVar12 = 0x10;
      }
      while (iVar12 = iVar12 + -1, iVar12 != 0) {
        uVar6 = 99;
        if (0 < (int)uVar9) {
          uVar6 = (int)uVar9 - 1;
        }
        uVar9 = (ulong)uVar6;
        fVar29 = *(float *)(param_1 + 0x1dc8 +
                           (-(ulong)(uVar6 >> 0x1f) & 0xffffffc000000000 | uVar9 << 6));
        if (fVar29 <= fVar27) {
          fVar27 = fVar29;
        }
        if (fVar17 <= fVar29) {
          fVar17 = fVar29;
        }
      }
      fVar27 = fVar27 + fVar16 * -0.1;
      fVar29 = 0.0;
      if (0.0 <= fVar27) {
        fVar29 = fVar27;
      }
      fVar17 = fVar17 + fVar16 * 0.1;
      fVar16 = 1.0;
      if (fVar17 <= 1.0) {
        fVar16 = fVar17;
      }
      fVar17 = (float)iVar8 * -0.1 + 1.0;
      fVar22 = fVar22 + (fVar29 - fVar22) * fVar17;
      fVar21 = fVar21 + (fVar16 - fVar21) * fVar17;
    }
    param_13[6] = (int)fVar22;
    param_13[7] = (int)fVar21;
  }
  return;
}



/* Entry: 108b3cd80; end: 108b3e05f;  */

/* WARNING: Possible PIC construction at 0x000108b3d124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b3d128) */
/* WARNING: Removing unreachable block (ram,0x000108b3d1f4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d21c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d224) */
/* WARNING: Removing unreachable block (ram,0x000108b3d22c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d230) */
/* WARNING: Removing unreachable block (ram,0x000108b3d234) */
/* WARNING: Removing unreachable block (ram,0x000108b3d238) */
/* WARNING: Removing unreachable block (ram,0x000108b3d23c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d244) */
/* WARNING: Removing unreachable block (ram,0x000108b3d248) */
/* WARNING: Removing unreachable block (ram,0x000108b3d24c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d25c) */
/* WARNING: Removing unreachable block (ram,0x000108b3dad0) */
/* WARNING: Removing unreachable block (ram,0x000108b3daf0) */
/* WARNING: Removing unreachable block (ram,0x000108b3db04) */
/* WARNING: Removing unreachable block (ram,0x000108b3d26c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d294) */
/* WARNING: Removing unreachable block (ram,0x000108b3d2c0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d390) */
/* WARNING: Removing unreachable block (ram,0x000108b3d678) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6bc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6c4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6e0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6e4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6e8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6f4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6f8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d6fc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d70c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d71c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d724) */
/* WARNING: Removing unreachable block (ram,0x000108b3d74c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d750) */
/* WARNING: Removing unreachable block (ram,0x000108b3d754) */
/* WARNING: Removing unreachable block (ram,0x000108b3d764) */
/* WARNING: Removing unreachable block (ram,0x000108b3d768) */
/* WARNING: Removing unreachable block (ram,0x000108b3d76c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d778) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7a0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7a8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7b4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7b8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7bc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7c0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7c8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7cc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7d0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7ec) */
/* WARNING: Removing unreachable block (ram,0x000108b3d7fc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d810) */
/* WARNING: Removing unreachable block (ram,0x000108b3d818) */
/* WARNING: Removing unreachable block (ram,0x000108b3d824) */
/* WARNING: Removing unreachable block (ram,0x000108b3d82c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d834) */
/* WARNING: Removing unreachable block (ram,0x000108b3d83c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d854) */
/* WARNING: Removing unreachable block (ram,0x000108b3d858) */
/* WARNING: Removing unreachable block (ram,0x000108b3d85c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d860) */
/* WARNING: Removing unreachable block (ram,0x000108b3d86c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d87c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d890) */
/* WARNING: Removing unreachable block (ram,0x000108b3d8cc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d8d0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d8d8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d8dc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d924) */
/* WARNING: Removing unreachable block (ram,0x000108b3da14) */
/* WARNING: Removing unreachable block (ram,0x000108b3db08) */
/* WARNING: Removing unreachable block (ram,0x000108b3da30) */
/* WARNING: Removing unreachable block (ram,0x000108b3da48) */
/* WARNING: Removing unreachable block (ram,0x000108b3da4c) */
/* WARNING: Removing unreachable block (ram,0x000108b3da54) */
/* WARNING: Removing unreachable block (ram,0x000108b3da58) */
/* WARNING: Removing unreachable block (ram,0x000108b3da5c) */
/* WARNING: Removing unreachable block (ram,0x000108b3da60) */
/* WARNING: Removing unreachable block (ram,0x000108b3da64) */
/* WARNING: Removing unreachable block (ram,0x000108b3da68) */
/* WARNING: Removing unreachable block (ram,0x000108b3da80) */
/* WARNING: Removing unreachable block (ram,0x000108b3da84) */
/* WARNING: Removing unreachable block (ram,0x000108b3da90) */
/* WARNING: Removing unreachable block (ram,0x000108b3da94) */
/* WARNING: Removing unreachable block (ram,0x000108b3da98) */
/* WARNING: Removing unreachable block (ram,0x000108b3da9c) */
/* WARNING: Removing unreachable block (ram,0x000108b3daa8) */
/* WARNING: Removing unreachable block (ram,0x000108b3dab4) */
/* WARNING: Removing unreachable block (ram,0x000108b3dab8) */
/* WARNING: Removing unreachable block (ram,0x000108b3db14) */
/* WARNING: Removing unreachable block (ram,0x000108b3db1c) */
/* WARNING: Removing unreachable block (ram,0x000108b3db20) */
/* WARNING: Removing unreachable block (ram,0x000108b3db24) */
/* WARNING: Removing unreachable block (ram,0x000108b3db28) */
/* WARNING: Removing unreachable block (ram,0x000108b3db34) */
/* WARNING: Removing unreachable block (ram,0x000108b3db40) */
/* WARNING: Removing unreachable block (ram,0x000108b3db4c) */
/* WARNING: Removing unreachable block (ram,0x000108b3db58) */
/* WARNING: Removing unreachable block (ram,0x000108b3db38) */
/* WARNING: Removing unreachable block (ram,0x000108b3db5c) */
/* WARNING: Removing unreachable block (ram,0x000108b3db8c) */
/* WARNING: Removing unreachable block (ram,0x000108b3db90) */
/* WARNING: Removing unreachable block (ram,0x000108b3db94) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbb4) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbb8) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbbc) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbd4) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbdc) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbe4) */
/* WARNING: Removing unreachable block (ram,0x000108b3dbec) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc00) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc10) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc24) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc2c) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc40) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc64) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc74) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc88) */
/* WARNING: Removing unreachable block (ram,0x000108b3dc8c) */
/* WARNING: Removing unreachable block (ram,0x000108b3dcb8) */
/* WARNING: Removing unreachable block (ram,0x000108b3dcbc) */
/* WARNING: Removing unreachable block (ram,0x000108b3dcc0) */
/* WARNING: Removing unreachable block (ram,0x000108b3dcdc) */
/* WARNING: Removing unreachable block (ram,0x000108b3dcf0) */
/* WARNING: Removing unreachable block (ram,0x000108b3dd3c) */
/* WARNING: Removing unreachable block (ram,0x000108b3dd44) */
/* WARNING: Removing unreachable block (ram,0x000108b3dd80) */
/* WARNING: Removing unreachable block (ram,0x000108b3dd90) */
/* WARNING: Removing unreachable block (ram,0x000108b3ddb4) */
/* WARNING: Removing unreachable block (ram,0x000108b3ddcc) */
/* WARNING: Removing unreachable block (ram,0x000108b3ddd4) */
/* WARNING: Removing unreachable block (ram,0x000108b3de08) */
/* WARNING: Removing unreachable block (ram,0x000108b3de28) */
/* WARNING: Removing unreachable block (ram,0x000108b3de30) */
/* WARNING: Removing unreachable block (ram,0x000108b3de6c) */
/* WARNING: Removing unreachable block (ram,0x000108b3de74) */
/* WARNING: Removing unreachable block (ram,0x000108b3de84) */
/* WARNING: Removing unreachable block (ram,0x000108b3de94) */
/* WARNING: Removing unreachable block (ram,0x000108b3de9c) */
/* WARNING: Removing unreachable block (ram,0x000108b3debc) */
/* WARNING: Removing unreachable block (ram,0x000108b3ded0) */
/* WARNING: Removing unreachable block (ram,0x000108b3ded8) */
/* WARNING: Removing unreachable block (ram,0x000108b3def0) */
/* WARNING: Removing unreachable block (ram,0x000108b3def8) */
/* WARNING: Removing unreachable block (ram,0x000108b3df00) */
/* WARNING: Removing unreachable block (ram,0x000108b3df28) */
/* WARNING: Removing unreachable block (ram,0x000108b3df40) */
/* WARNING: Removing unreachable block (ram,0x000108b3df48) */
/* WARNING: Removing unreachable block (ram,0x000108b3df68) */
/* WARNING: Removing unreachable block (ram,0x000108b3dd98) */
/* WARNING: Removing unreachable block (ram,0x000108b3d92c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d948) */
/* WARNING: Removing unreachable block (ram,0x000108b3d950) */
/* WARNING: Removing unreachable block (ram,0x000108b3d97c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d984) */
/* WARNING: Removing unreachable block (ram,0x000108b3d988) */
/* WARNING: Removing unreachable block (ram,0x000108b3d98c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d998) */
/* WARNING: Removing unreachable block (ram,0x000108b3d99c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9a0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9a8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9ac) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9b0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9b8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9bc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9c0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9c4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9cc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9d0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9d8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9dc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9e0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9e4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9e8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9f4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d9f8) */
/* WARNING: Removing unreachable block (ram,0x000108b3da04) */
/* WARNING: Removing unreachable block (ram,0x000108b3da08) */
/* WARNING: Removing unreachable block (ram,0x000108b3da0c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d398) */
/* WARNING: Removing unreachable block (ram,0x000108b3d3c4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d3cc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d3f0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d3f4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d3f8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d41c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d420) */
/* WARNING: Removing unreachable block (ram,0x000108b3d424) */
/* WARNING: Removing unreachable block (ram,0x000108b3d490) */
/* WARNING: Removing unreachable block (ram,0x000108b3d484) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4a0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4b8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4bc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4d8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4e0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4e4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4f8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d4e8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d508) */
/* WARNING: Removing unreachable block (ram,0x000108b3d50c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d530) */
/* WARNING: Removing unreachable block (ram,0x000108b3d534) */
/* WARNING: Removing unreachable block (ram,0x000108b3d538) */
/* WARNING: Removing unreachable block (ram,0x000108b3d544) */
/* WARNING: Removing unreachable block (ram,0x000108b3d548) */
/* WARNING: Removing unreachable block (ram,0x000108b3d54c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d510) */
/* WARNING: Removing unreachable block (ram,0x000108b3d51c) */
/* WARNING: Removing unreachable block (ram,0x000108b3d520) */
/* WARNING: Removing unreachable block (ram,0x000108b3d524) */
/* WARNING: Removing unreachable block (ram,0x000108b3d554) */
/* WARNING: Removing unreachable block (ram,0x000108b3d580) */
/* WARNING: Removing unreachable block (ram,0x000108b3d588) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5a0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5cc) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5d0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5d4) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5e8) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5ec) */
/* WARNING: Removing unreachable block (ram,0x000108b3d5f0) */
/* WARNING: Removing unreachable block (ram,0x000108b3d604) */
/* WARNING: Removing unreachable block (ram,0x000108b3d610) */
/* WARNING: Removing unreachable block (ram,0x000108b3d654) */
/* WARNING: Removing unreachable block (ram,0x000108b3d658) */
/* WARNING: Removing unreachable block (ram,0x000108b3d660) */
/* WARNING: Removing unreachable block (ram,0x000108b3d664) */

ulong FUN_108b3cd80(long param_1,long param_2,ulong *param_3,int param_4,int param_5,
                   undefined8 *param_6,undefined1 *param_7,float *param_8,undefined4 param_9,
                   undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  float *pfVar8;
  ulong *puVar9;
  int iVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  long extraout_x12;
  long extraout_x12_00;
  float *pfVar17;
  float *pfVar18;
  undefined1 *puVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  uint uVar24;
  ulong uVar23;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_2d80 [960];
  undefined1 auStack_29c0 [960];
  float afStack_2600 [960];
  ulong auStack_1700 [478];
  undefined4 uStack_810;
  int iStack_80c;
  undefined1 auStack_800 [8];
  float fStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  undefined8 *puStack_7e8;
  undefined4 uStack_7dc;
  uint uStack_7d8;
  float *pfStack_7d0;
  long lStack_790;
  int iStack_784;
  undefined8 uStack_780;
  float fStack_778;
  uint uStack_774;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_b0;
  
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x1d24) == 0) {
    *(undefined4 *)(param_1 + 0x168c) = 0xf0;
    *(undefined4 *)(param_1 + 0x1d24) = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x1d0c);
  puVar19 = (undefined1 *)(ulong)uVar3;
  fVar34 = 1.0 / (float)(int)(uVar3 + 1);
  fVar30 = 0.1;
  if ((int)uVar3 < 10) {
    fVar30 = fVar34;
  }
  fVar32 = 0.04;
  if ((int)uVar3 < 0x19) {
    fVar32 = fVar34;
  }
  iStack_80c = *(int *)(param_1 + 8);
  uVar12 = CONCAT44(param_4,param_5);
  if (iStack_80c == 48000) {
    uVar12 = CONCAT44(param_4 / 2,param_5 / 2);
  }
  uVar23 = CONCAT44((param_4 * 3) / 2,(param_5 * 3) / 2);
  if (iStack_80c != 16000) {
    uVar23 = uVar12;
  }
  uStack_770 = *(undefined8 *)(param_2 + 0x58);
  pfVar18 = (float *)(param_1 + 0xb4c);
  pfVar8 = pfVar18 + *(int *)(param_1 + 0x168c);
  uVar5 = 0x2d0 - *(int *)(param_1 + 0x168c);
  uVar24 = (uint)(uVar23 >> 0x20);
  uVar2 = uVar24;
  if ((int)uVar5 <= (int)uVar24) {
    uVar2 = uVar5;
  }
  pfVar11 = (float *)(ulong)uVar2;
  uVar12 = uVar23 & 0xffffffff;
  lVar15 = param_1 + 0x1da8;
  uStack_768 = CONCAT44(uStack_768._4_4_,(int)uVar23);
  uVar7 = param_11;
  puVar9 = param_3;
  puVar13 = param_6;
  puVar14 = param_7;
  uStack_810 = (int)param_8;
  FUN_108b3e060(param_11,param_3,pfVar8,lVar15,pfVar11,uVar12,param_6);
  piVar6 = (int *)auStack_800;
  uVar26 = (ulong)(uint)*(float *)(param_1 + 0x1d20);
  fVar33 = (float)uVar23 + *(float *)(param_1 + 0x1d20);
  *(float *)(param_1 + 0x1d20) = fVar33;
  iVar10 = *(int *)(param_1 + 0x168c) + uVar24;
  if (iVar10 < 0x2d0) {
    *(int *)(param_1 + 0x168c) = iVar10;
    pfVar17 = param_8;
  }
  else {
    uStack_780 = param_11;
    fStack_778 = SUB84(param_6,0);
    uStack_774 = (uint)param_7;
    iVar4 = *(int *)(param_1 + 0x1d14);
    iVar10 = iVar4 + -99;
    if (iVar4 < 99) {
      iVar10 = iVar4 + 1;
    }
    *(int *)(param_1 + 0x1d14) = iVar10;
    uStack_7dc = param_9;
    pfVar8 = pfVar18;
    uStack_7d8 = uVar3;
    func_0x000108b35e14(pfVar18,0x2d0,1);
    iStack_784 = (int)pfVar8;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar9 = auStack_1700;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfStack_7d0 = afStack_2600;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar19 = auStack_29c0;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    param_7 = auStack_2d80;
    lVar16 = 0xef8;
    pfVar8 = (float *)(param_1 + 0x12c8);
    pfVar11 = pfVar18;
    for (lVar15 = 0; uVar21 = (undefined4)uVar23, lVar15 != 0xf0; lVar15 = lVar15 + 1) {
      fVar20 = *(float *)(&UNK_10df8a250 + lVar15 * 4);
      puVar9[lVar15] = CONCAT44(pfVar11[0xf0] * fVar20,*pfVar11 * fVar20);
      uVar26 = CONCAT44(pfVar8[0xf0],*pfVar8);
      uVar23 = CONCAT44(pfVar8[0xf0] * fVar20,*pfVar8 * fVar20);
      *(ulong *)((long)puVar9 + lVar16) = uVar23;
      lVar16 = lVar16 + -8;
      pfVar8 = pfVar8 + -1;
      pfVar11 = pfVar11 + 1;
    }
    lStack_790 = param_1 + 0x1db4;
    param_6 = (undefined8 *)(lStack_790 + (long)iVar4 * 0x40);
    _memmove(pfVar18,param_1 + 0x12cc,0x3c0);
    iVar10 = uVar24 + *(int *)(param_1 + 0x168c);
    pfVar18 = (float *)(ulong)(iVar10 - 0x2d0);
    pfVar8 = (float *)(param_1 + 0xf0c);
    lVar15 = param_1 + 0x1da8;
    uVar12 = (ulong)(((int)uStack_768 - *(int *)(param_1 + 0x168c)) + 0x2d0);
    puVar13 = (undefined8 *)(ulong)(uint)fStack_778;
    puVar14 = (undefined1 *)(ulong)uStack_774;
    uVar7 = uStack_780;
    pfVar11 = pfVar18;
    FUN_108b3e060(uStack_780,param_3,pfVar8,lVar15,pfVar18,uVar12,puVar13,puVar14,(int)param_8,
                  *(undefined4 *)(param_1 + 8));
    pfVar17 = pfStack_7d0;
    piVar6 = (int *)auStack_2d80;
    *(undefined4 *)(param_1 + 0x1d20) = uVar21;
    *(int *)(param_1 + 0x168c) = iVar10 + -0x1e0;
    if (iStack_784 == 0) {
      uVar7 = uStack_770;
      pfVar8 = pfStack_7d0;
      fStack_7f8 = fVar34;
      fStack_7f4 = fVar33;
      fStack_7f0 = fVar32;
      fStack_7ec = fVar30;
      puStack_7e8 = param_6;
      FUN_108b4ac9c(uStack_770,puVar9,pfStack_7d0);
      fStack_778 = *pfVar17;
      if (!NAN(fStack_778)) {
        fVar33 = pfVar17[2] + pfVar17[0x3be];
        fVar34 = pfVar17[3] - pfVar17[0x3bf];
        goto FUN_108b3e260;
      }
      uVar23 = (ulong)(uint)fStack_778;
      *(undefined4 *)puStack_7e8 = 0;
    }
    else {
      lVar16 = 0x62;
      if (1 < (long)*(int *)(param_1 + 0x1d14)) {
        lVar16 = -2;
      }
      puVar1 = (undefined8 *)(lStack_790 + (lVar16 + *(int *)(param_1 + 0x1d14)) * 0x40);
      uVar25 = puVar1[5];
      uVar23 = puVar1[4];
      uVar27 = puVar1[7];
      uVar26 = puVar1[6];
      uVar31 = *puVar1;
      uVar29 = puVar1[3];
      uVar28 = puVar1[2];
      param_6[1] = puVar1[1];
      *param_6 = uVar31;
      param_6[3] = uVar29;
      param_6[2] = uVar28;
      param_6[5] = uVar25;
      param_6[4] = uVar23;
      param_6[7] = uVar27;
      param_6[6] = uVar26;
      puVar9 = param_3;
      pfVar17 = param_8;
    }
  }
  fVar33 = (float)uVar26;
  func_0x000108b3e3d0(uStack_b0);
  if (extraout_x9 == extraout_x8) {
    return uVar23;
  }
  ___stack_chk_fail();
  fVar34 = (float)uVar23;
  *(ulong *)(piVar6 + -0x18) = (ulong)(uint)fVar32;
  *(ulong *)(piVar6 + -0x16) = (ulong)(uint)fVar30;
  *(undefined8 **)(piVar6 + -0x14) = param_6;
  *(ulong *)(piVar6 + -0x12) = (ulong)uVar24;
  *(undefined1 **)(piVar6 + -0x10) = param_7;
  *(undefined1 **)(piVar6 + -0xe) = puVar19;
  *(float **)(piVar6 + -0xc) = pfVar17;
  *(float **)(piVar6 + -10) = pfVar18;
  *(long *)(piVar6 + -8) = param_1;
  *(undefined1 **)(piVar6 + -6) = auStack_800;
  *(undefined1 **)(piVar6 + -4) = &stack0xfffffffffffffff0;
  *(code **)(piVar6 + -2) = FUN_108b3e060;
  func_0x000108b3e3d0();
  *(undefined8 *)(piVar6 + -0x1a) = extraout_x9_00;
  uVar23 = 0;
  iVar10 = (int)pfVar11;
  if (iVar10 == 0) {
LAB_108b3e224:
    func_0x000108b3e3d0(*(undefined8 *)(piVar6 + -0x1a));
    if (extraout_x9_01 == extraout_x8_02) {
      return uVar23;
    }
    ___stack_chk_fail();
  }
  else {
    iVar4 = piVar6[1];
    if (iVar4 == 48000) {
      pfVar11 = (float *)(ulong)(uint)(iVar10 << 1);
      uVar12 = (ulong)(uint)((int)uVar12 << 1);
LAB_108b3e0ec:
      iVar10 = *piVar6;
      (*(code *)PTR____chkstk_darwin_11034bd40)(uVar7);
      pfVar18 = (float *)((long)piVar6 + (-0x70 - extraout_x12));
      (*extraout_x8_00)(puVar9,pfVar18,pfVar11,uVar12,puVar13,puVar14,iVar10);
      uVar12 = (ulong)((uint)pfVar11 & ((int)(uint)pfVar11 >> 0x1f ^ 0xffffffffU));
      if ((-1 < (int)puVar14) || ((int)puVar14 == -2 && iVar10 == 2)) {
        fVar34 = 0.5;
        pfVar17 = pfVar18;
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          fVar33 = *pfVar17 * 0.5;
          *pfVar17 = fVar33;
          pfVar17 = pfVar17 + 1;
        }
      }
      if (iVar4 == 48000) {
        func_0x000108b3e338(lVar15,pfVar8,pfVar18,pfVar11);
        fVar33 = 9.313226e-10;
        uVar23 = (ulong)(uint)(fVar34 * 9.313226e-10);
      }
      else if (iVar4 == 16000) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pfVar11 = (float *)((long)pfVar18 + (8 - extraout_x12_00));
        for (lVar16 = extraout_x8_01; lVar16 != 0; lVar16 = lVar16 + -1) {
          fVar34 = *pfVar18;
          pfVar11[-2] = fVar34;
          pfVar11[-1] = fVar34;
          *pfVar11 = fVar34;
          pfVar18 = pfVar18 + 1;
          pfVar11 = pfVar11 + 3;
        }
        func_0x000108b3e338(lVar15,pfVar8);
      }
      else if (iVar4 == 24000) {
        _memcpy(pfVar8,pfVar18,
                -((ulong)pfVar11 >> 0x1f & 1) & 0xfffffffc00000000 |
                ((ulong)pfVar11 & 0xffffffff) << 2);
      }
      goto LAB_108b3e224;
    }
    if (iVar4 == 24000) goto LAB_108b3e0ec;
    if (iVar4 == 16000) {
      pfVar11 = (float *)(ulong)(uint)((iVar10 << 1) / 3);
      uVar12 = (ulong)(uint)(((int)uVar12 << 1) / 3);
      goto LAB_108b3e0ec;
    }
  }
  _abort();
FUN_108b3e260:
  fVar30 = fVar33 * fVar33;
  fVar32 = fVar34 * fVar34;
  uVar12 = 0;
  if (1e-18 <= fVar32 + fVar30) {
    if (fVar32 <= fVar30) {
      fVar20 = -1.5707964;
      if (0.0 <= fVar34) {
        fVar20 = 1.5707964;
      }
      fVar22 = -1.5707964;
      if (0.0 <= fVar34 * fVar33) {
        fVar22 = 1.5707964;
      }
      uVar12 = (ulong)(uint)((fVar20 + (fVar34 * fVar33 * (fVar30 + fVar32 * 0.43157974)) /
                                       ((fVar30 + fVar32 * 0.678484) *
                                       (fVar30 + fVar32 * 0.08595542))) - fVar22);
    }
    else {
      lVar15 = 4;
      if (0.0 <= fVar34) {
        lVar15 = 0;
      }
      uVar12 = (ulong)(uint)(*(float *)(&UNK_10df8a238 + lVar15) -
                            (fVar34 * fVar33 * (fVar32 + fVar30 * 0.43157974)) /
                            ((fVar32 + fVar30 * 0.678484) * (fVar32 + fVar30 * 0.08595542)));
    }
  }
  return uVar12;
}



/* Entry: 108b3e060; end: 108b3e25f;  */

float FUN_108b3e060(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8,
                   undefined8 param_9,undefined8 param_10,int param_11,int param_12)

{
  float *pfVar1;
  int iVar2;
  code *extraout_x8;
  ulong uVar3;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x12;
  long extraout_x12_00;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float afStack_70 [2];
  undefined8 uStack_68;
  
  func_0x000108b3e3d0();
  fVar9 = 0.0;
  iVar2 = (int)param_7;
  uStack_68 = extraout_x9;
  if (iVar2 != 0) {
    if (param_12 == 48000) {
      param_7 = (ulong)(uint)(iVar2 << 1);
      param_8 = (ulong)(uint)((int)param_8 << 1);
    }
    else if (param_12 != 24000) {
      if (param_12 != 16000) goto LAB_108b3e25c;
      param_7 = (ulong)(uint)((iVar2 << 1) / 3);
      param_8 = (ulong)(uint)(((int)param_8 << 1) / 3);
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_3);
    pfVar5 = (float *)((long)afStack_70 - extraout_x12);
    (*extraout_x8)(param_4,pfVar5,param_7,param_8,param_9,param_10,param_11);
    uVar3 = (ulong)((uint)param_7 & ((int)(uint)param_7 >> 0x1f ^ 0xffffffffU));
    if ((-1 < (int)param_10) || ((int)param_10 == -2 && param_11 == 2)) {
      param_1 = 0.5;
      pfVar1 = pfVar5;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        param_2 = *pfVar1 * 0.5;
        *pfVar1 = param_2;
        pfVar1 = pfVar1 + 1;
      }
    }
    if (param_12 == 48000) {
      func_0x000108b3e338(param_6,param_5,pfVar5,param_7);
      param_2 = 9.313226e-10;
      fVar9 = param_1 * 9.313226e-10;
    }
    else if (param_12 == 16000) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      pfVar1 = (float *)((long)pfVar5 + (8 - extraout_x12_00));
      for (lVar4 = extraout_x8_00; lVar4 != 0; lVar4 = lVar4 + -1) {
        param_1 = *pfVar5;
        pfVar1[-2] = param_1;
        pfVar1[-1] = param_1;
        *pfVar1 = param_1;
        pfVar5 = pfVar5 + 1;
        pfVar1 = pfVar1 + 3;
      }
      func_0x000108b3e338(param_6,param_5);
    }
    else if (param_12 == 24000) {
      _memcpy(param_5,pfVar5,
              -(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2);
    }
  }
  func_0x000108b3e3d0(uStack_68);
  if (extraout_x9_00 == extraout_x8_01) {
    return fVar9;
  }
  ___stack_chk_fail();
LAB_108b3e25c:
  _abort();
  fVar6 = param_2 * param_2;
  fVar7 = param_1 * param_1;
  fVar9 = 0.0;
  if (1e-18 <= fVar7 + fVar6) {
    if (fVar7 <= fVar6) {
      fVar8 = -1.5707964;
      if (0.0 <= param_1) {
        fVar8 = 1.5707964;
      }
      fVar9 = -1.5707964;
      if (0.0 <= param_1 * param_2) {
        fVar9 = 1.5707964;
      }
      fVar9 = (fVar8 + (param_1 * param_2 * (fVar6 + fVar7 * 0.43157974)) /
                       ((fVar6 + fVar7 * 0.678484) * (fVar6 + fVar7 * 0.08595542))) - fVar9;
    }
    else {
      lVar4 = 4;
      if (0.0 <= param_1) {
        lVar4 = 0;
      }
      fVar9 = *(float *)(&UNK_10df8a238 + lVar4) -
              (param_1 * param_2 * (fVar7 + fVar6 * 0.43157974)) /
              ((fVar7 + fVar6 * 0.678484) * (fVar7 + fVar6 * 0.08595542));
    }
  }
  return fVar9;
}



/* Entry: 108b3e260; end: 108b3e3f3;  */

float FUN_108b3e260(float param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_2 * param_2;
  fVar4 = param_1 * param_1;
  fVar2 = 0.0;
  if (1e-18 <= fVar4 + fVar3) {
    if (fVar4 <= fVar3) {
      fVar5 = -1.5707964;
      if (0.0 <= param_1) {
        fVar5 = 1.5707964;
      }
      fVar2 = -1.5707964;
      if (0.0 <= param_1 * param_2) {
        fVar2 = 1.5707964;
      }
      fVar2 = (fVar5 + (param_1 * param_2 * (fVar3 + fVar4 * 0.43157974)) /
                       ((fVar3 + fVar4 * 0.678484) * (fVar3 + fVar4 * 0.08595542))) - fVar2;
    }
    else {
      lVar1 = 4;
      if (0.0 <= param_1) {
        lVar1 = 0;
      }
      fVar2 = *(float *)(&UNK_10df8a238 + lVar1) -
              (param_1 * param_2 * (fVar4 + fVar3 * 0.43157974)) /
              ((fVar4 + fVar3 * 0.678484) * (fVar4 + fVar3 * 0.08595542));
    }
  }
  return fVar2;
}



/* Entry: 108b3e3f4; end: 108b3e4b7;  */

void FUN_108b3e3f4(long *param_1,float *param_2,undefined8 param_3)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  lVar3 = param_1[2];
  uVar1 = *(uint *)((long)param_1 + 0x14);
  uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  for (uVar4 = 0; uVar5 != uVar4; uVar4 = uVar4 + 1) {
    param_2[uVar4] = (float)(int)*(char *)(*param_1 + uVar4);
  }
  FUN_108b3e4b8(param_2,param_1[1],uVar1,(int)lVar3,uVar1,param_3);
  pfVar2 = param_2;
  for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pfVar2 = *pfVar2 * 0.0078125;
    pfVar2 = pfVar2 + 1;
  }
  if ((int)param_1[3] == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      fVar6 = *param_2;
      FUN_108b3e53c();
      *param_2 = fVar6;
      param_2 = param_2 + 1;
    }
  }
  else {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      fVar6 = *param_2;
      FUN_108b3e514();
      *param_2 = fVar6;
      param_2 = param_2 + 1;
    }
  }
  return;
}



/* Entry: 108b3e4b8; end: 108b3e513;  */

void FUN_108b3e4b8(long param_1,char *param_2,uint param_3,uint param_4,int param_5,float *param_6)

{
  ulong uVar1;
  char *pcVar2;
  float *pfVar3;
  ulong uVar4;
  
  for (uVar4 = 0; uVar1 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)), pcVar2 = param_2,
      pfVar3 = param_6, uVar4 != (param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar4 = uVar4 + 1
      ) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(float *)(param_1 + uVar4 * 4) =
           *(float *)(param_1 + uVar4 * 4) + *pfVar3 * (float)(int)*pcVar2;
      pcVar2 = pcVar2 + param_5;
      pfVar3 = pfVar3 + 1;
    }
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 108b3e514; end: 108b3e53b;  */

float FUN_108b3e514(float param_1)

{
  param_1 = param_1 * 0.5;
  FUN_108b3e53c(param_1);
  return param_1 * 0.5 + 0.5;
}



/* Entry: 108b3e53c; end: 108b3e5a3;  */

float FUN_108b3e53c(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 * param_1;
  fVar1 = (param_1 * (fVar2 * (fVar2 * 0.6086304 + 96.39236) + 952.528)) /
          (fVar2 * (fVar2 * 11.886009 + 413.368) + 952.724);
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  fVar1 = -1.0;
  if (-1.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}



/* Entry: 108b3e5a4; end: 108b3e7e3;  */

void FUN_108b3e5a4(float param_1,long *param_2,long param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  float *pfVar4;
  float *pfVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_2a0 [32];
  float afStack_220 [32];
  float afStack_1a0 [32];
  float afStack_120 [32];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_2 + 3);
  uVar2 = *(uint *)((long)param_2 + 0x1c);
  lVar9 = (long)(int)uVar2;
  uVar12 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  for (uVar7 = 0; uVar12 != uVar7; uVar7 = uVar7 + 1) {
    param_1 = (float)(int)*(char *)(*param_2 + uVar7);
    afStack_1a0[uVar7] = param_1;
  }
  lVar10 = param_2[1];
  FUN_108b3e7e4(afStack_1a0,lVar10);
  lVar11 = param_2[2];
  FUN_108b3e820(afStack_1a0,lVar11);
  lVar13 = uVar12 * 4;
  for (; lVar13 - unaff_x21 != 0; unaff_x21 = unaff_x21 + 4) {
    func_0x000108b3e814();
    *(float *)((long)afStack_1a0 + unaff_x21) = param_1;
  }
  lVar8 = 0;
  while (lVar13 - lVar8 != 0) {
    func_0x000108b3e7f8();
    lVar8 = extraout_x8;
  }
  FUN_108b3e7e4(afStack_220,lVar10 + lVar9);
  FUN_108b3e820(afStack_220,lVar11 + lVar9);
  for (; lVar13 - unaff_x21 != 0; unaff_x21 = unaff_x21 + 4) {
    func_0x000108b3e814();
    *(float *)((long)afStack_220 + unaff_x21) = param_1;
  }
  lVar8 = 0;
  while (lVar13 - lVar8 != 0) {
    func_0x000108b3e7f8();
    lVar8 = extraout_x8_00;
  }
  for (lVar8 = 0; lVar13 - lVar8 != 0; lVar8 = lVar8 + 4) {
    *(float *)((long)afStack_120 + lVar8) =
         *(float *)(param_3 + lVar8) * *(float *)((long)afStack_220 + lVar8);
  }
  FUN_108b3e7e4(afStack_2a0,lVar10 + (int)(uVar2 << 1));
  pfVar5 = afStack_2a0;
  pcVar6 = (char *)(lVar11 + (int)(uVar2 << 1));
  FUN_108b3e4b8(pfVar5,pcVar6,lVar9,lVar9,uVar2 * 3,afStack_120);
  for (lVar9 = 0; lVar13 - lVar9 != 0; lVar9 = lVar9 + 4) {
    fVar15 = *(float *)((long)afStack_1a0 + lVar9);
    fVar16 = *(float *)(param_3 + lVar9);
    fVar14 = *(float *)((long)afStack_2a0 + lVar9) * 0.0078125;
    FUN_108b3e53c();
    *(float *)((long)afStack_2a0 + lVar9) = (1.0 - fVar15) * fVar14 + fVar16 * fVar15;
  }
  for (lVar10 = 0; lVar13 - lVar10 != 0; lVar10 = lVar10 + 4) {
    *(undefined4 *)(param_3 + lVar10) = *(undefined4 *)((long)afStack_2a0 + lVar10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  for (uVar7 = 0; uVar12 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)), pcVar3 = pcVar6,
      pfVar4 = param_4, uVar7 != ((uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU));
      uVar7 = uVar7 + 1) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      pfVar5[uVar7] = pfVar5[uVar7] + *pfVar4 * (float)(int)*pcVar3;
      pcVar3 = pcVar3 + (int)(uVar2 * 3);
      pfVar4 = pfVar4 + 1;
    }
    pcVar6 = pcVar6 + 1;
  }
  return;
}



/* Entry: 108b3e7e4; end: 108b3e81f;  */

void FUN_108b3e7e4(long param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  float *pfVar3;
  ulong uVar4;
  uint unaff_w20;
  uint unaff_w22;
  int unaff_w23;
  float *in_stack_00000008;
  
  for (uVar4 = 0; uVar1 = (ulong)(unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU)),
      pcVar2 = param_2, pfVar3 = in_stack_00000008,
      uVar4 != (unaff_w20 & ((int)unaff_w20 >> 0x1f ^ 0xffffffffU)); uVar4 = uVar4 + 1) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(float *)(param_1 + uVar4 * 4) =
           *(float *)(param_1 + uVar4 * 4) + *pfVar3 * (float)(int)*pcVar2;
      pcVar2 = pcVar2 + unaff_w23;
      pfVar3 = pfVar3 + 1;
    }
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 108b3e820; end: 108b3e843;  */

void FUN_108b3e820(void)

{
  FUN_108b3e4b8();
  return;
}



/* Entry: 108b3e844; end: 108b3e973;  */

ulong FUN_108b3e844(float param_1,long param_2,long param_3,uint param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = (uint)param_5;
  uVar1 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
  for (uVar4 = 0;
      (uVar2 = uVar1, uVar1 != uVar4 && (uVar2 = uVar4, *(float *)(param_2 + uVar4 * 4) <= param_1))
      ; uVar4 = uVar4 + 1) {
  }
  if ((((int)uVar3 < (int)uVar2) &&
      (param_1 < *(float *)(param_2 + (long)(int)uVar3 * 4) +
                 *(float *)(param_3 + (long)(int)uVar3 * 4))) ||
     (((int)uVar2 < (int)uVar3 &&
      (lVar5 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2) - 4,
      *(float *)(param_2 + lVar5) - *(float *)(param_3 + lVar5) < param_1)))) {
    uVar2 = param_5;
  }
  return uVar2;
}



/* Entry: 108b3e974; end: 108b3ea63;  */

void FUN_108b3e974(float param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                  uint param_7)

{
  long lVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  ulong uVar6;
  
  iVar5 = 0;
  psVar4 = *(short **)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  do {
    psVar3 = psVar4;
    for (uVar6 = 0; (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
      lVar1 = param_3 + (long)(((int)*psVar3 << (ulong)(param_7 & 0x1f)) +
                              iVar5 * (iVar2 << (ulong)(param_7 & 0x1f))) * 4;
      FUN_108b60920(lVar1,lVar1,(int)psVar3[1] - (int)*psVar3 << (ulong)(param_7 & 0x1f));
      param_1 = SQRT(param_1 + 1e-27);
      *(float *)(param_4 + (uVar6 + (long)*(int *)(param_2 + 8) * (long)iVar5) * 4) = param_1;
      psVar3 = psVar3 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < param_6);
  return;
}



/* Entry: 108b3ea64; end: 108b3eaf7;  */

void FUN_108b3ea64(long param_1,long param_2,long param_3,long param_4,uint param_5,int param_6,
                  int param_7)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  lVar3 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  uVar2 = *(int *)(param_1 + 0x30) * param_7;
  uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  do {
    uVar6 = 0;
    while (uVar6 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU))) {
      fVar8 = *(float *)(param_4 + (long)((int)uVar6 + *(int *)(param_1 + 8) * (int)lVar3) * 4);
      lVar7 = uVar6 * 2;
      uVar6 = uVar6 + 1;
      sVar1 = *(short *)(lVar4 + uVar6 * 2);
      for (lVar7 = (long)(param_7 * *(short *)(lVar4 + lVar7));
          lVar7 < (long)(int)sVar1 * (long)param_7; lVar7 = lVar7 + 1) {
        *(float *)(param_3 + lVar7 * 4) = (1.0 / (fVar8 + 1e-27)) * *(float *)(param_2 + lVar7 * 4);
      }
    }
    lVar3 = lVar3 + 1;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
  } while (lVar3 < param_6);
  return;
}



/* Entry: 108b3eaf8; end: 108b3ec7b;  */

void FUN_108b3eaf8(long param_1,long param_2,float *param_3,long param_4,int param_5,uint param_6,
                  int param_7,int param_8,int param_9)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long lStack_a0;
  undefined4 uStack_98;
  
  uVar10 = (uint)param_4;
  lVar20 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30) * param_7;
  iVar3 = param_7 * *(short *)(lVar20 + (long)(int)param_6 * 2);
  iVar6 = 0;
  if (param_8 != 0) {
    iVar6 = iVar2 / param_8;
  }
  iVar12 = iVar3;
  if (iVar6 <= iVar3) {
    iVar12 = iVar6;
  }
  if (param_8 != 1) {
    iVar3 = iVar12;
  }
  iVar6 = param_5;
  uVar18 = param_6;
  if (param_9 != 0) {
    uVar18 = 0;
    iVar6 = 0;
  }
  iVar12 = (int)*(short *)(lVar20 + (long)iVar6 * 2);
  uVar4 = param_7 * iVar12;
  pfVar21 = (float *)(param_2 + (long)(int)uVar4 * 4);
  if (iVar6 == 0) {
    pfVar16 = param_3 + (int)uVar4;
  }
  else {
    pfVar16 = param_3;
    for (uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU); uVar4 != 0; uVar4 = uVar4 - 1) {
      *pfVar16 = 0.0;
      pfVar16 = pfVar16 + 1;
    }
  }
  pfVar9 = param_3;
  iVar11 = param_7;
  lVar14 = (long)iVar6;
  while (lVar14 < (int)uVar18) {
    lVar19 = lVar14 + 1;
    iVar5 = param_7 * (short)iVar12;
    iVar12 = (int)*(short *)(lVar20 + lVar19 * 2);
    fVar23 = *(float *)(param_4 + lVar14 * 4) + *(float *)(&UNK_10df90bb8 + lVar14 * 4);
    fVar28 = 32.0;
    if (fVar23 <= 32.0) {
      fVar28 = fVar23;
    }
    dVar24 = (double)(ulong)(uint)fVar28;
    func_0x000108b415c8();
    pfVar17 = pfVar16;
    pfVar22 = pfVar21;
    do {
      pfVar21 = pfVar22 + 1;
      pfVar16 = pfVar17 + 1;
      *pfVar17 = *pfVar22 * (float)dVar24;
      iVar5 = iVar5 + 1;
      lVar14 = lVar19;
      pfVar17 = pfVar16;
      pfVar22 = pfVar21;
    } while (iVar5 < param_7 * iVar12);
  }
  if (iVar6 <= (int)uVar18) {
    if (param_9 != 0) {
      iVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)
              (param_3 + iVar3,
               -(ulong)((uint)(iVar2 - iVar3) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar2 - iVar3) << 2);
    return;
  }
  _abort();
  uVar4 = 1 << (ulong)(uVar10 & 0x1f);
  lVar20 = (long)iVar11;
  while (lVar14 = lVar20, lVar14 < param_8) {
    uVar7 = (int)*(short *)(*(long *)(param_1 + 0x20) + (lVar14 + 1) * 2) -
            (int)*(short *)(*(long *)(param_1 + 0x20) + lVar14 * 2);
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = ((int)param_3[lVar14] + 1U) / uVar7;
    }
    dVar24 = (double)(ulong)(uint)((float)(int)(uVar13 >> (ulong)(uVar10 & 0x1f)) * -0.125);
    func_0x000108b415c8();
    lVar19 = 0;
    iVar12 = uVar7 << (ulong)(uVar10 & 0x1f);
    fVar28 = 1.0 / SQRT((float)iVar12);
    do {
      lVar20 = lVar14 + *(int *)(param_1 + 8) * lVar19;
      fVar23 = *(float *)(CONCAT44(iVar3,uStack_98) + lVar20 * 4);
      fVar26 = *(float *)(CONCAT44(param_9,iVar2) + lVar20 * 4);
      if (param_5 == 1) {
        lVar1 = lVar14 + *(int *)(param_1 + 8);
        fVar27 = *(float *)(CONCAT44(iVar3,uStack_98) + lVar1 * 4);
        if (fVar23 <= fVar27) {
          fVar23 = fVar27;
        }
        fVar27 = *(float *)(CONCAT44(param_9,iVar2) + lVar1 * 4);
        if (fVar26 <= fVar27) {
          fVar26 = fVar27;
        }
      }
      if (fVar26 <= fVar23) {
        fVar23 = fVar26;
      }
      fVar23 = *(float *)(lStack_a0 + lVar20 * 4) - fVar23;
      fVar26 = 0.0;
      if (0.0 <= fVar23) {
        fVar26 = fVar23;
      }
      dVar25 = (double)fVar26 * -0.6931471805599453;
      _exp();
      uVar13 = 0;
      bVar8 = false;
      lVar20 = param_2 + lVar19 * (int)param_6 * 4 +
               (long)((int)*(short *)(*(long *)(param_1 + 0x20) + lVar14 * 2) <<
                     (ulong)(uVar10 & 0x1f)) * 4;
      fVar26 = (float)dVar25 + (float)dVar25;
      fVar23 = fVar26 * 1.4142135;
      if (uVar10 != 3) {
        fVar23 = fVar26;
      }
      fVar26 = (float)dVar24 * 0.5;
      if (fVar23 <= (float)dVar24 * 0.5) {
        fVar26 = fVar23;
      }
      for (; uVar13 != (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar13 = uVar13 + 1) {
        if ((*(byte *)((long)pfVar9 + lVar19 + lVar14 * param_5) >> (ulong)(uVar13 & 0x1f) & 1) == 0
           ) {
          for (uVar15 = 0; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            uVar18 = uVar18 * 0x660d + 0xf35f;
            fVar23 = -(fVar28 * fVar26);
            if ((uVar18 & 0x8000) != 0) {
              fVar23 = fVar28 * fVar26;
            }
            *(float *)(lVar20 + (long)(int)((uVar15 << (ulong)(uVar10 & 0x1f)) + uVar13) * 4) =
                 fVar23;
          }
          bVar8 = true;
        }
      }
      if (bVar8) {
        FUN_108b4e9fc(0x3f800000,lVar20,iVar12,iVar6);
      }
      lVar19 = lVar19 + 1;
      lVar20 = lVar14 + 1;
    } while (lVar19 < param_5);
  }
  return;
}



/* Entry: 108b3ec7c; end: 108b3ef17;  */

void FUN_108b3ec7c(long param_1,long param_2,long param_3,uint param_4,int param_5,int param_6,
                  int param_7,int param_8,long param_9,long param_10,long param_11,long param_12,
                  uint param_13,int param_14,undefined4 param_15)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = 1 << (ulong)(param_4 & 0x1f);
  lVar7 = (long)param_7;
  while (lVar10 = lVar7, lVar10 < param_8) {
    uVar4 = (int)*(short *)(*(long *)(param_1 + 0x20) + (lVar10 + 1) * 2) -
            (int)*(short *)(*(long *)(param_1 + 0x20) + lVar10 * 2);
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = (*(int *)(param_12 + lVar10 * 4) + 1U) / uVar4;
    }
    dVar12 = (double)(ulong)(uint)((float)(int)(uVar6 >> (ulong)(param_4 & 0x1f)) * -0.125);
    func_0x000108b415c8();
    lVar9 = 0;
    iVar3 = uVar4 << (ulong)(param_4 & 0x1f);
    fVar16 = 1.0 / SQRT((float)iVar3);
    do {
      lVar7 = lVar10 + *(int *)(param_1 + 8) * lVar9;
      fVar11 = *(float *)(param_10 + lVar7 * 4);
      fVar14 = *(float *)(param_11 + lVar7 * 4);
      if (param_5 == 1 && param_14 == 0) {
        lVar1 = lVar10 + *(int *)(param_1 + 8);
        fVar15 = *(float *)(param_10 + lVar1 * 4);
        if (fVar11 <= fVar15) {
          fVar11 = fVar15;
        }
        fVar15 = *(float *)(param_11 + lVar1 * 4);
        if (fVar14 <= fVar15) {
          fVar14 = fVar15;
        }
      }
      if (fVar14 <= fVar11) {
        fVar11 = fVar14;
      }
      fVar11 = *(float *)(param_9 + lVar7 * 4) - fVar11;
      fVar14 = 0.0;
      if (0.0 <= fVar11) {
        fVar14 = fVar11;
      }
      dVar13 = (double)fVar14 * -0.6931471805599453;
      _exp();
      uVar6 = 0;
      bVar5 = false;
      lVar7 = param_2 + lVar9 * param_6 * 4 +
              (long)((int)*(short *)(*(long *)(param_1 + 0x20) + lVar10 * 2) <<
                    (ulong)(param_4 & 0x1f)) * 4;
      fVar14 = (float)dVar13 + (float)dVar13;
      fVar11 = fVar14 * 1.4142135;
      if (param_4 != 3) {
        fVar11 = fVar14;
      }
      fVar14 = (float)dVar12 * 0.5;
      if (fVar11 <= (float)dVar12 * 0.5) {
        fVar14 = fVar11;
      }
      for (; uVar6 != (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar6 = uVar6 + 1) {
        if ((*(byte *)(param_3 + lVar10 * param_5 + lVar9) >> (ulong)(uVar6 & 0x1f) & 1) == 0) {
          for (uVar8 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar8; uVar8 = uVar8 + 1)
          {
            param_13 = param_13 * 0x660d + 0xf35f;
            fVar11 = -(fVar16 * fVar14);
            if ((param_13 & 0x8000) != 0) {
              fVar11 = fVar16 * fVar14;
            }
            *(float *)(lVar7 + (long)(int)((uVar8 << (ulong)(param_4 & 0x1f)) + uVar6) * 4) = fVar11
            ;
          }
          bVar5 = true;
        }
      }
      if (bVar5) {
        FUN_108b4e9fc(0x3f800000,lVar7,iVar3,param_15);
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar10 + 1;
    } while (lVar9 < param_5);
  }
  return;
}



/* Entry: 108b3ef18; end: 108b3f16f;  */

float * FUN_108b3ef18(float *param_1,long param_2,int *param_3,int param_4,int *param_5,
                     uint *param_6,int param_7,uint param_8,int param_9,int param_10,long param_11)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = (uint)param_3;
  if ((int)param_8 < 1) {
LAB_108b3f16c:
    iVar6 = (int)param_2;
    _abort();
    pfVar10 = param_1 + (int)uVar4;
    for (uVar11 = 0; uVar12 = (ulong)(iVar6 >> 1 & (iVar6 >> 0x1f ^ 0xffffffffU)), pfVar2 = param_1,
        pfVar3 = pfVar10, uVar11 != (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
        uVar11 = uVar11 + 1) {
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        fVar19 = *pfVar2;
        fVar20 = *pfVar3;
        *pfVar2 = fVar19 * 0.70710677 + fVar20 * 0.70710677;
        *pfVar3 = fVar19 * 0.70710677 - fVar20 * 0.70710677;
        pfVar2 = (float *)((long)pfVar2 +
                          (-(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                          (ulong)(uVar4 << 1) << 2));
        pfVar3 = (float *)((long)pfVar3 +
                          (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
      }
      param_1 = param_1 + 1;
      pfVar10 = pfVar10 + 1;
    }
    return param_1;
  }
  psVar15 = (short *)(*(long *)(param_1 + 8) + (ulong)param_8 * 2);
  if (((int)*psVar15 - (int)psVar15[-1]) * param_10 < 9) {
    return (float *)0x0;
  }
  lVar9 = 0;
  uVar5 = 0;
  iVar6 = 0;
  uVar8 = 0;
LAB_108b3efa8:
  uVar11 = 0;
  do {
    psVar15 = (short *)(*(long *)(param_1 + 8) + 2 + uVar11 * 2);
    do {
      uVar12 = uVar11;
      if (param_8 == uVar12) {
        lVar9 = lVar9 + 1;
        param_2 = param_2 + (-(ulong)((uint)((int)param_1[0xc] * param_10) >> 0x1f) &
                             0xfffffffc00000000 | (ulong)(uint)((int)param_1[0xc] * param_10) << 2);
        if (lVar9 < param_9) goto LAB_108b3efa8;
        if (param_7 != 0) {
          if (uVar8 == 0) {
            uVar7 = 0;
          }
          else {
            uVar18 = ((param_8 - (int)param_1[2]) + 4) * param_9;
            uVar7 = 0;
            if (uVar18 != 0) {
              uVar7 = uVar8 / uVar18;
            }
          }
          iVar17 = (int)(*param_5 + uVar7) >> 1;
          *param_5 = iVar17;
          iVar16 = iVar17;
          if (*param_6 == 2) {
            iVar16 = iVar17 + 4;
          }
          iVar17 = iVar17 + -4;
          if (*param_6 != 0) {
            iVar17 = iVar16;
          }
          uVar8 = 2;
          if (iVar17 < 0x17) {
            uVar8 = (uint)(0x12 < iVar17);
          }
          *param_6 = uVar8;
        }
        if ((0 < (int)uVar5) && (-1 < iVar6)) {
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = (uint)(iVar6 << 8) / uVar5;
          }
          iVar17 = *param_3;
          iVar6 = (int)(iVar17 + uVar4) >> 1;
          *param_3 = iVar6;
          uVar4 = (int)((iVar17 + uVar4 & 0xfffffffe) + iVar6 + param_4 * -0x80 + 0x1c2) >> 2;
          if ((int)uVar4 < 0x50) {
            return (float *)0x3;
          }
          if (uVar4 < 0x100) {
            return (float *)0x2;
          }
          return (float *)(ulong)(uVar4 < 0x180);
        }
        goto LAB_108b3f16c;
      }
      psVar1 = psVar15 + -1;
      uVar11 = uVar12 + 1;
      uVar7 = ((int)*psVar15 - (int)*psVar1) * param_10;
      uVar13 = (ulong)uVar7;
      psVar15 = psVar15 + 1;
    } while ((int)uVar7 < 9);
    iVar17 = 0;
    iVar16 = 0;
    iVar14 = 0;
    fVar19 = (float)uVar13;
    pfVar10 = (float *)(param_2 + (long)(param_10 * *psVar1) * 4);
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      fVar20 = *pfVar10 * *pfVar10 * fVar19;
      if (fVar20 < 0.25) {
        iVar17 = iVar17 + 1;
      }
      if (fVar20 < 0.0625) {
        iVar16 = iVar16 + 1;
      }
      if (fVar20 < 0.015625) {
        iVar14 = iVar14 + 1;
      }
      pfVar10 = pfVar10 + 1;
    }
    uVar18 = 0;
    if (uVar7 != 0) {
      uVar18 = (uint)((iVar16 + iVar17) * 0x20) / uVar7;
    }
    if ((long)(int)param_1[2] + -4 < (long)uVar12) {
      uVar8 = uVar18 + uVar8;
    }
    uVar18 = (uint)(uVar7 + iVar17 * -2 == 0 || (int)uVar7 < iVar17 * 2);
    if (uVar7 + iVar16 * -2 == 0 || (int)uVar7 < iVar16 * 2) {
      uVar18 = uVar18 + 1;
    }
    if (uVar7 + iVar14 * -2 == 0 || (int)uVar7 < iVar14 * 2) {
      uVar18 = uVar18 + 1;
    }
    iVar17 = *(int *)(param_11 + -4 + uVar11 * 4);
    iVar6 = iVar6 + iVar17 * uVar18;
    uVar5 = iVar17 + uVar5;
  } while( true );
}



/* Entry: 108b3f170; end: 108b3f1f3;  */

void FUN_108b3f170(float *param_1,int param_2,uint param_3)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  pfVar5 = param_1 + (int)param_3;
  for (uVar4 = 0; uVar1 = (ulong)(param_2 >> 1 & (param_2 >> 0x1f ^ 0xffffffffU)), pfVar2 = param_1,
      pfVar3 = pfVar5, uVar4 != (param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar4 = uVar4 + 1)
  {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      fVar6 = *pfVar2;
      fVar7 = *pfVar3;
      *pfVar2 = fVar6 * 0.70710677 + fVar7 * 0.70710677;
      *pfVar3 = fVar6 * 0.70710677 - fVar7 * 0.70710677;
      pfVar2 = (float *)((long)pfVar2 +
                        (-(ulong)((param_3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                        (ulong)(param_3 << 1) << 2));
      pfVar3 = (float *)((long)pfVar3 +
                        (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3));
    }
    param_1 = param_1 + 1;
    pfVar5 = pfVar5 + 1;
  }
  return;
}



/* Entry: 108b3f1f4; end: 108b3fd9f;  */

void FUN_108b3f1f4(float *param_1,float *param_2,undefined8 param_3,float *param_4,ulong param_5,
                  long param_6,ulong param_7,long param_8,long param_9,int param_10,
                  undefined4 param_11,int param_12,undefined4 param_13,long param_14,int param_15,
                  int param_16,float *param_17,uint param_18,uint param_19,undefined4 *param_20,
                  int param_21,undefined4 param_22,undefined4 param_23)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  ulong uVar17;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  short *extraout_x8;
  long extraout_x8_00;
  float *pfVar18;
  undefined8 uVar19;
  long extraout_x8_01;
  uint extraout_w9;
  int iVar20;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  short *psVar21;
  long lVar22;
  int extraout_w12;
  int iVar23;
  long extraout_x12;
  long extraout_x12_00;
  int extraout_w13;
  int extraout_w14;
  int extraout_w15;
  long extraout_x15;
  long lVar24;
  float *pfVar25;
  uint uVar26;
  float fVar27;
  float *pfVar28;
  int iVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float afStack_3e0 [2];
  undefined4 *puStack_3d8;
  float *pfStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  float *pfStack_3b8;
  long lStack_3b0;
  uint uStack_3a4;
  float *pfStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  float fStack_37c;
  float *pfStack_378;
  undefined1 *puStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  float *pfStack_350;
  uint uStack_344;
  undefined8 uStack_340;
  int iStack_334;
  float *pfStack_330;
  long lStack_328;
  float fStack_320;
  uint uStack_31c;
  long lStack_318;
  float *pfStack_310;
  int iStack_304;
  long lStack_300;
  ulong uStack_2f8;
  float *pfStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  float *pfStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  float *pfStack_2b0;
  uint uStack_2a4;
  long lStack_2a0;
  int iStack_294;
  ulong uStack_290;
  float *pfStack_288;
  uint uStack_27c;
  long lStack_278;
  uint uStack_26c;
  float *pfStack_268;
  int iStack_25c;
  long lStack_258;
  int iStack_250;
  uint uStack_24c;
  float *pfStack_248;
  float *pfStack_240;
  long lStack_238;
  uint uStack_22c;
  float *pfStack_228;
  int iStack_21c;
  undefined1 *puStack_218;
  undefined1 auStack_210 [80];
  undefined1 auStack_1c0 [80];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  uint uStack_11c;
  float *pfStack_118;
  int iStack_110;
  int iStack_104;
  float *pfStack_100;
  int iStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  
  uStack_360 = (ulong)param_19;
  pfStack_268 = param_17;
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pfVar25 = *(float **)(param_2 + 8);
  iStack_294 = 1;
  if (param_6 != 0) {
    iStack_294 = 2;
  }
  uStack_24c = param_12;
  uVar32 = (uint)(param_6 != 0);
  uStack_26c = 0;
  if (param_12 == 0 && 7 < param_21) {
    uStack_26c = uVar32;
  }
  bVar10 = (int)param_1 != 0;
  uVar13 = 0;
  if (bVar10) {
    uVar13 = uStack_26c;
  }
  pfVar28 = (float *)(ulong)uVar13;
  if (!bVar10) {
    uStack_26c = 1;
  }
  uStack_344 = 1 << (ulong)(param_18 & 0x1f);
  iStack_334 = (int)*(short *)((long)pfVar25 + (long)(int)param_3 * 2);
  iVar12 = iStack_334 << (ulong)(param_18 & 0x1f);
  uVar6 = ((int)*(short *)((long)pfVar25 + (long)(int)param_2[2] * 2 + -2) <<
          (ulong)(param_18 & 0x1f)) - iVar12 << (ulong)uVar32;
  uVar17 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2) + 0xf &
           0xfffffffffffffff0;
  lStack_300 = param_14;
  lStack_2a0 = param_9;
  uStack_2a4 = uStack_344;
  if (param_10 == 0) {
    uStack_2a4 = 1;
  }
  lStack_278 = (long)(int)param_3;
  lStack_3c0 = param_8;
  uStack_340 = param_3;
  lStack_2e0 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar18 = (float *)((long)afStack_3e0 - uVar17);
  pfVar14 = (float *)(long)extraout_w15;
  lStack_368 = (long)iVar12;
  pfStack_330 = pfVar18 + ((long)extraout_w15 - (long)iVar12);
  iStack_250 = param_16;
  uStack_2f8 = param_5;
  uStack_27c = uVar13;
  pfStack_228 = pfVar18;
  if (uVar13 == 1) {
    uVar13 = *extraout_x8 - extraout_w12 << (ulong)(param_18 & 0x1f);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2) + 0xf &
               0xfffffffffffffff0);
    pfVar18 = (float *)((long)pfVar18 - extraout_x8_00);
    uVar19 = 0x4fb;
    puStack_218 = (undefined1 *)pfVar18;
  }
  else {
    uVar19 = 0;
    puStack_218 = (undefined1 *)
                  (param_5 +
                  (long)((int)*(short *)((long)pfVar25 + (long)(int)param_2[3] * 2 + -2) <<
                        (ulong)(param_18 & 0x1f)) * 4);
  }
  iStack_304 = param_15;
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar19);
  pfVar16 = (float *)(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lStack_2d0 = (long)pfVar18 - (long)pfVar16;
  func_0x000108b41608();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108b41614();
  uStack_2d8 = extraout_x9;
  func_0x000108b41608();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108b41614();
  uStack_390 = extraout_x9_00;
  func_0x000108b41608();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108b41614();
  uStack_398 = extraout_x9_01;
  func_0x000108b41608();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108b41614();
  lStack_f0 = lStack_3c0;
  pfStack_100 = pfStack_268;
  puStack_3d8 = param_20;
  uStack_e8 = *param_20;
  fStack_120 = SUB84(param_1,0);
  uStack_11c = uStack_26c;
  uStack_dc = param_23;
  uStack_e0 = 0;
  lStack_3c8 = extraout_x9_02;
  pfStack_288 = param_2;
  pfStack_118 = param_2;
  uStack_e4 = param_22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar18 = (float *)(extraout_x9_02 - extraout_x12_00);
  iStack_21c = 0;
  lVar24 = param_7 - 1;
  pfStack_310 = pfStack_228;
  if (lStack_2e0 == 0) {
    pfStack_310 = (float *)0x0;
  }
  pfStack_2b0 = pfStack_228 + extraout_x15;
  lStack_2e8 = (long)(int)param_4;
  uStack_d8 = (uint)(1 < (int)uStack_2a4);
  lStack_318 = (long)(int)uStack_360;
  lStack_2b8 = (long)extraout_w13;
  uStack_31c = (uint)(extraout_w14 != 3);
  if (1 < (int)uStack_2a4) {
    uStack_31c = 1;
  }
  fStack_320 = (float)~(-1 << (ulong)(uStack_2a4 & 0x1f));
  lStack_2c0 = (long)((int)uStack_340 + 1);
  lStack_238 = (long)((int)param_4 + -1);
  puStack_370 = (undefined1 *)((long)pfVar25 + -2);
  uVar17 = 1;
  pfStack_3d0 = pfStack_330 + extraout_x15;
  lStack_328 = (long)pfVar14 * 4 + lStack_368 * -4;
  lVar30 = lStack_278;
  pfStack_3a0 = pfVar18;
  uStack_290 = param_7;
  pfStack_240 = pfVar25;
  do {
    iVar15 = (int)pfVar16;
    iVar12 = (int)param_5;
    iVar20 = (int)param_4;
    if (lStack_2e8 <= lVar30) {
      *puStack_3d8 = uStack_e8;
      func_0x000108b414c4(uStack_b0);
      if (extraout_x9_06 == extraout_x8_01) {
        return;
      }
LAB_108b3fd9c:
      ___stack_chk_fail();
      *(float **)(pfVar18 + -0x10) = pfVar28;
      *(float **)(pfVar18 + -0xe) = pfVar25;
      *(ulong *)(pfVar18 + -0xc) = param_7;
      *(ulong *)(pfVar18 + -10) = uVar17;
      *(long *)(pfVar18 + -8) = lVar24;
      *(float **)(pfVar18 + -6) = afStack_3e0;
      *(undefined1 **)(pfVar18 + -4) = &stack0xfffffffffffffff0;
      *(code **)(pfVar18 + -2) = FUN_108b3fda0;
      psVar21 = (short *)((long)param_1 + (long)iVar20 * 2);
      iVar20 = ((int)psVar21[1] - (int)*psVar21) * iVar12;
      iVar12 = ((int)psVar21[2] - (int)psVar21[1]) * iVar12;
      iVar29 = iVar20 * 2 - iVar12;
      uVar32 = iVar12 - iVar20;
      uVar17 = -(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2;
      _memcpy(param_2 + iVar20,param_2 + iVar29,uVar17);
      if (iVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(pfVar14 + iVar20,pfVar14 + iVar29,uVar17);
        return;
      }
      return;
    }
    iVar29 = (int)lVar30;
    sVar5 = *(short *)((long)pfStack_240 + lVar30 * 2);
    uVar13 = (int)sVar5 << (ulong)(param_18 & 0x1f);
    pfVar25 = (float *)(ulong)uVar13;
    pfVar16 = (float *)(lStack_2e0 + (long)(int)uVar13 * 4);
    if (lStack_2e0 == 0) {
      pfVar16 = (float *)0x0;
    }
    lStack_258 = lVar30 + 1;
    uVar7 = (int)*(short *)((long)pfStack_240 + lStack_258 * 2) - (int)sVar5;
    param_7 = (ulong)uVar7;
    uVar6 = uVar7 << (ulong)(param_18 & 0x1f);
    pfStack_248 = (float *)(ulong)uVar6;
    iStack_110 = iVar29;
    if ((int)uVar6 < 1) {
      _abort();
      pfVar28 = pfVar16;
      goto LAB_108b3fd9c;
    }
    pfVar28 = pfStack_268;
    func_0x000108b49c74();
    pfVar2 = pfStack_288;
    uStack_22c = 0;
    iVar12 = (int)pfVar28;
    iStack_25c = 0;
    if (lVar30 != lStack_278) {
      iStack_25c = iVar12;
    }
    iStack_25c = iStack_250 - iStack_25c;
    uVar6 = iStack_304 - iVar12;
    iStack_f8 = uVar6 - 1;
    if (lVar30 < lStack_318) {
      iVar20 = (int)uStack_360 - iVar29;
      if (2 < iVar20) {
        iVar20 = 3;
      }
      iVar15 = 0;
      if (iVar20 != 0) {
        iVar15 = iStack_25c / iVar20;
      }
      uVar31 = *(int *)(lStack_2a0 + lVar30 * 4) + iVar15;
      if ((int)uVar31 <= (int)uVar6) {
        uVar6 = uVar31;
      }
      uStack_22c = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
      if (0x3ffe < (int)uStack_22c) {
        uStack_22c = 0x3fff;
      }
    }
    iVar20 = iStack_21c;
    if ((uStack_26c != 0) &&
       (iVar20 = iVar29,
       ((uint)((int)*(short *)((long)pfStack_240 + lStack_278 * 2) << (ulong)(param_18 & 0x1f) <=
               (int)((int)sVar5 - uVar7 << (ulong)(param_18 & 0x1f)) || lVar30 == lStack_2c0) &
       ((uint)uVar17 | (uint)(iStack_21c == 0))) == 0)) {
      iVar20 = iStack_21c;
    }
    iStack_21c = iVar20;
    iStack_250 = iVar12;
    if (lVar30 == lStack_2c0) {
      pfVar28 = *(float **)(pfStack_288 + 8);
      func_0x000108b415e0();
      FUN_108b3fda0();
    }
    bVar10 = lVar30 == (int)pfVar2[3];
    param_2 = (float *)(uStack_2f8 + (long)(int)uVar13 * 4);
    pfVar14 = pfVar16;
    if ((int)pfVar2[3] <= lVar30) {
      param_2 = pfStack_228;
      pfVar14 = pfStack_310;
    }
    func_0x000108b415d4();
    uVar31 = uStack_22c;
    pfVar2 = pfStack_248;
    pfVar16 = pfStack_268;
    iStack_104 = *(int *)(lStack_300 + lVar30 * 4);
    uVar6 = uStack_27c;
    if (!bVar10) {
      uVar6 = 1;
    }
    puVar1 = puStack_218;
    if ((uVar6 & extraout_w9) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    uVar6 = uStack_31c;
    if (iStack_104 < 0) {
      uVar6 = 1;
    }
    uVar26 = 0xffffffff;
    fVar33 = fStack_320;
    fVar34 = fStack_320;
    if ((iStack_21c != 0) && (uVar6 != 0)) {
      uVar26 = (*(short *)((long)pfStack_240 + (long)iStack_21c * 2) - iStack_334) - uVar7 <<
               (ulong)(param_18 & 0x1f);
      uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
      iVar12 = uVar26 + (int)lStack_368;
      psVar21 = (short *)(puStack_370 + (long)iStack_21c * 2);
      iVar20 = iStack_21c;
      do {
        sVar4 = *psVar21;
        iVar20 = iVar20 + -1;
        psVar21 = psVar21 + -1;
      } while (iVar12 < (int)sVar4 << (ulong)(param_18 & 0x1f));
      lVar22 = (long)(iStack_21c + -1);
      iVar15 = iStack_21c + -1;
      do {
        iVar23 = iVar15;
        lVar22 = lVar22 + 1;
        if (lVar30 <= lVar22) break;
        iVar15 = iVar23 + 1;
      } while ((int)*(short *)((long)pfStack_240 + lVar22 * 2) << (ulong)(param_18 & 0x1f) <
               iVar12 + (int)pfStack_248);
      fVar34 = 0.0;
      fVar33 = 0.0;
      do {
        fVar34 = (float)((uint)fVar34 |
                        (uint)*(byte *)(uStack_290 + (long)(iVar20 << (ulong)uVar32)));
        fVar33 = (float)((uint)fVar33 |
                        (uint)*(byte *)(lVar24 + (long)(iVar20 << (ulong)uVar32) + (long)iStack_294)
                        );
        bVar10 = iVar20 < iVar23;
        iVar20 = iVar20 + 1;
      } while (bVar10);
    }
    pfVar3 = pfStack_2b0 + (int)uVar13;
    puStack_218 = puVar1;
    if (uStack_24c == 0) {
LAB_108b3f860:
      if (pfVar14 == (float *)0x0) {
        pfVar16 = (float *)0x0;
        if (uVar26 != 0xffffffff) {
          pfVar16 = pfStack_228 + (int)uVar26;
        }
        pfVar18[-2] = (float)((uint)fVar33 | (uint)fVar34);
        *(undefined1 **)(pfVar18 + -4) = puVar1;
        func_0x000108b415f4();
        uVar31 = uStack_22c;
        param_4 = (float *)(ulong)uStack_22c;
        param_5 = (ulong)uStack_2a4;
        func_0x000108b415b8();
        param_1 = pfVar28;
      }
      else {
        uVar13 = uStack_27c ^ 1;
        if (lStack_2b8 <= lVar30) {
          uVar13 = 1;
        }
        if ((uVar13 & 1) == 0) {
          pfVar25 = (float *)(lStack_3c0 + lVar30 * 4);
          fVar36 = *pfVar25;
          fVar37 = pfVar25[(int)pfStack_288[2]];
          fVar35 = fVar36;
          if (fVar37 <= fVar36) {
            fVar35 = fVar37;
          }
          uStack_24c = (uint)fVar33 | (uint)fVar34;
          pfStack_350 = *(float **)pfStack_268;
          fStack_37c = pfStack_268[2];
          uStack_128 = *(undefined8 *)(pfStack_268 + 5);
          uStack_130 = *(undefined8 *)(pfStack_268 + 3);
          uStack_388 = (ulong)(uint)pfStack_268[7];
          uStack_c8 = *(undefined8 *)(pfStack_268 + 10);
          uVar19 = *(undefined8 *)(pfStack_268 + 8);
          uStack_c0 = *(undefined8 *)(pfStack_268 + 0xc);
          pfStack_378 = pfStack_228 + (int)uVar26;
          pfStack_2f0 = param_2;
          pfStack_2c8 = pfVar3;
          uStack_d0 = uVar19;
          _memcpy(auStack_1c0,&fStack_120,0x50);
          pfVar25 = pfStack_248;
          fVar34 = (float)uVar19;
          lVar22 = ((ulong)pfStack_248 & 0xffffffff) << 2;
          lStack_358 = lVar22;
          _memcpy(lStack_2d0,param_2);
          uVar19 = uStack_2d8;
          _memcpy(uStack_2d8,pfVar14,lVar22);
          uVar13 = (uint)uVar19;
          uStack_e0 = 0xffffffff;
          uVar11 = uVar26 == 0xffffffff;
          pfVar28 = (float *)0x0;
          if (!(bool)uVar11) {
            pfVar28 = pfStack_378;
          }
          func_0x000108b415d4();
          pfVar2 = pfStack_2c8;
          if ((bool)uVar11) {
            pfVar2 = (float *)0x0;
          }
          func_0x000108b4150c(pfVar2);
          pfVar2 = pfStack_2f0;
          pfStack_378 = pfVar28;
          func_0x000108b41594();
          uStack_3a4 = uVar13;
          func_0x000108b41504(lStack_2d0,pfVar2);
          fVar33 = fVar34;
          func_0x000108b41504(uStack_2d8,pfVar14);
          uStack_168 = *(undefined8 *)(pfVar16 + 2);
          uStack_170 = *(undefined8 *)pfVar16;
          uStack_158 = *(undefined8 *)(pfVar16 + 6);
          uStack_160 = *(undefined8 *)(pfVar16 + 4);
          uStack_148 = *(undefined8 *)(pfVar16 + 10);
          uStack_150 = *(undefined8 *)(pfVar16 + 8);
          uStack_140 = *(undefined8 *)(pfVar16 + 0xc);
          func_0x000108b415b0(auStack_210,&fStack_120);
          func_0x000108b414fc(uStack_390,pfVar2);
          pfStack_2c8 = pfVar14;
          func_0x000108b414fc(uStack_398,pfVar14);
          func_0x000108b415d4();
          if (!(bool)uVar11) {
            func_0x000108b4156c(pfStack_240);
            func_0x000108b414fc(lStack_3c8,extraout_x9_03 + (long)extraout_w8 * 4);
          }
          pfVar28 = pfStack_350;
          fVar9 = fStack_37c;
          fVar27 = (float)uStack_388;
          lStack_3b0 = (long)(int)fVar27;
          pfStack_3b8 = (float *)(long)((int)fStack_37c - (int)fVar27);
          ___memcpy_chk(pfStack_3a0,(undefined1 *)((long)pfStack_350 + lStack_3b0),pfStack_3b8,0x4fb
                       );
          *(float **)pfStack_268 = pfVar28;
          pfStack_268[2] = fVar9;
          *(undefined8 *)(pfStack_268 + 5) = uStack_128;
          *(undefined8 *)(pfStack_268 + 3) = uStack_130;
          pfStack_268[7] = fVar27;
          *(undefined8 *)(pfStack_268 + 10) = uStack_c8;
          *(undefined8 *)(pfStack_268 + 8) = uStack_d0;
          *(undefined8 *)(pfStack_268 + 0xc) = uStack_c0;
          func_0x000108b415b0(&fStack_120,auStack_1c0);
          func_0x000108b414fc(pfStack_2f0,lStack_2d0);
          pfVar28 = pfStack_2c8;
          func_0x000108b414fc(pfStack_2c8,uStack_2d8);
          param_7 = uStack_290;
          uVar13 = (uint)pfVar28;
          if (lVar30 == lStack_2c0) {
            uVar13 = (uint)*(undefined8 *)(pfStack_288 + 8);
            func_0x000108b415e0();
            FUN_108b3fda0();
          }
          uVar31 = uStack_22c;
          uStack_e0 = 1;
          param_5 = (ulong)uStack_22c;
          if (lVar30 == lStack_238) {
            lVar22 = 0;
          }
          else {
            func_0x000108b4156c(pfStack_240);
            lVar22 = extraout_x9_04 + (long)extraout_w8_00 * 4;
          }
          pfVar2 = pfStack_2c8;
          pfVar28 = pfStack_2f0;
          fVar36 = fVar36 + fVar35 / 3.0;
          fVar37 = fVar37 + fVar35 / 3.0;
          fVar33 = fVar37 * fVar33;
          fVar35 = fVar33 + fVar34 * fVar36;
          func_0x000108b4150c(lVar22);
          pfVar16 = (float *)(ulong)uStack_2a4;
          pfVar14 = pfVar2;
          param_4 = pfVar25;
          func_0x000108b41594();
          pfVar18 = pfVar18 + 0x10;
          uStack_24c = uVar13;
          func_0x000108b41504(lStack_2d0,pfVar28);
          param_2 = pfVar2;
          fVar34 = fVar33;
          func_0x000108b41504(uStack_2d8);
          fVar34 = fVar37 * fVar34 + fVar33 * fVar36;
          uVar11 = fVar35 == fVar34;
          if (fVar34 <= fVar35) {
            *(undefined8 *)(pfStack_268 + 2) = uStack_168;
            *(undefined8 *)pfStack_268 = uStack_170;
            *(undefined8 *)(pfStack_268 + 6) = uStack_158;
            *(undefined8 *)(pfStack_268 + 4) = uStack_160;
            *(undefined8 *)(pfStack_268 + 10) = uStack_148;
            *(undefined8 *)(pfStack_268 + 8) = uStack_150;
            *(undefined8 *)(pfStack_268 + 0xc) = uStack_140;
            func_0x000108b415b0(&fStack_120,auStack_210);
            func_0x000108b415a8(pfVar28,uStack_390);
            func_0x000108b415a8(pfVar2,uStack_398);
            func_0x000108b415d4();
            if (!(bool)uVar11) {
              func_0x000108b4156c(pfStack_240);
              func_0x000108b415a8(extraout_x9_05 + (long)extraout_w8_01 * 4,lStack_3c8);
            }
            param_2 = pfStack_3a0;
            pfVar14 = pfStack_3b8;
            _memcpy((undefined1 *)((long)pfStack_350 + lStack_3b0));
            uStack_24c = uStack_3a4;
          }
          param_1 = (float *)(ulong)uStack_24c;
          uStack_24c = 0;
          pfVar28 = param_1;
          goto LAB_108b3fd04;
        }
        uStack_e0 = 0;
        if (lVar30 == lStack_238) {
          pfVar3 = (float *)0x0;
        }
        pfVar18[-4] = (float)((uint)fVar33 | (uint)fVar34);
        param_1 = &fStack_120;
        *(float **)(pfVar18 + -8) = pfVar3;
        *(undefined1 **)(pfVar18 + -6) = puVar1;
        param_5 = (ulong)uStack_22c;
        pfVar16 = (float *)(ulong)uStack_2a4;
        param_4 = pfStack_248;
        func_0x000108b41594();
        pfVar25 = pfVar2;
      }
      uStack_24c = 0;
      param_7 = uStack_290;
      pfVar28 = param_1;
    }
    else {
      if ((uStack_26c != 0) && (lVar30 == lStack_2b8)) {
        uVar13 = sVar5 - iStack_334 << (ulong)(param_18 & 0x1f);
        pfVar8 = pfStack_228;
        for (uVar17 = (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)); uVar17 != 0;
            uVar17 = uVar17 - 1) {
          *pfVar8 = (*pfVar8 + *(float *)((long)pfVar8 + lStack_328)) * 0.5;
          pfVar8 = pfVar8 + 1;
        }
        goto LAB_108b3f860;
      }
      if (lVar30 == lStack_2b8) goto LAB_108b3f860;
      param_4 = (float *)(ulong)(uStack_22c >> 1);
      pfVar18[-2] = fVar34;
      *(undefined1 **)(pfVar18 + -4) = puVar1;
      pfStack_350 = (float *)0x0;
      if (uVar26 != 0xffffffff) {
        pfStack_350 = pfStack_330 + (int)uVar26;
      }
      pfStack_2c8 = pfVar14;
      func_0x000108b415f4();
      func_0x000108b415b8();
      pfVar18[-2] = fVar33;
      *(undefined1 **)(pfVar18 + -4) = puStack_218;
      param_1 = &fStack_120;
      param_5 = (ulong)uStack_2a4;
      param_2 = pfStack_2c8;
      pfVar14 = pfVar25;
      pfVar16 = pfStack_350;
      func_0x000108b415b8(0x3f800000);
      param_7 = uStack_290;
      uVar31 = uStack_22c;
    }
LAB_108b3fd04:
    uStack_d8 = 0;
    *(char *)(param_7 + (long)(iVar29 << (ulong)uVar32)) = (char)pfVar28;
    *(char *)(lVar24 + (long)(iVar29 << (ulong)uVar32) + (long)iStack_294) = (char)param_1;
    iStack_250 = iStack_25c + iStack_250 + *(int *)(lStack_2a0 + lVar30 * 4);
    uVar17 = (ulong)((int)pfVar25 * 8 < (int)uVar31);
    lVar30 = lStack_258;
  } while( true );
}



/* Entry: 108b3fda0; end: 108b3fe3b;  */

void FUN_108b3fda0(long param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  psVar1 = (short *)(param_1 + (long)param_4 * 2);
  iVar2 = ((int)psVar1[1] - (int)*psVar1) * param_5;
  param_5 = ((int)psVar1[2] - (int)psVar1[1]) * param_5;
  iVar3 = iVar2 * 2 - param_5;
  uVar4 = param_5 - iVar2;
  uVar5 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
  _memcpy(param_2 + (long)iVar2 * 4,param_2 + (long)iVar3 * 4,uVar5);
  if (param_6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_3 + (long)iVar2 * 4,param_3 + (long)iVar3 * 4,uVar5);
    return;
  }
  return;
}



/* Entry: 108b3fe3c; end: 108b406a3;  */

int * FUN_108b3fe3c(undefined8 param_1,int *param_2,float *param_3,ulong param_4,undefined4 param_5,
                   uint param_6,long param_7,undefined4 param_8,float *param_9,long param_10,
                   uint param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  
  uVar4 = (uint)param_4;
  if (uVar4 == 1) {
    func_0x000108b405b4(param_2,param_3,0,param_9);
    return (int *)0x1;
  }
  iVar2 = *param_2;
  uVar3 = param_2[7];
  uVar5 = 0;
  if (param_6 != 0) {
    uVar5 = uVar4 / param_6;
  }
  if ((param_7 != 0) && (param_10 != 0)) {
    if ((int)uVar3 < 1) {
      if (((int)param_6 < 2) && ((uVar5 & 1) != 0 || uVar3 == 0)) goto LAB_108b3fefc;
    }
    _memcpy(param_10,param_7,(param_4 & 0xffffffff) << 2);
    param_7 = param_10;
  }
LAB_108b3fefc:
  uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  for (uVar6 = 0; uVar9 = (ulong)param_11, uVar1 != uVar6; uVar6 = uVar6 + 1) {
    if (iVar2 != 0) {
      func_0x000108b4159c(param_3);
    }
    if (param_7 != 0) {
      func_0x000108b4159c(param_7);
    }
    param_11 = (uint)(byte)(&UNK_10df8bc28)[uVar9 & 0xf] |
               (uint)(byte)(&UNK_10df8bc28)[(int)param_11 >> 4] << 2;
  }
  uVar6 = (int)param_6 >> (uVar1 & 0x1f);
  uVar5 = uVar5 << (ulong)(uVar1 & 0x1f);
  for (iVar8 = 0; ((uVar5 & 1) == 0 && ((int)(uVar3 + iVar8) < 0)); iVar8 = iVar8 + 1) {
    if (iVar2 != 0) {
      func_0x000108b414f0(param_3);
    }
    if (param_7 != 0) {
      func_0x000108b414f0(param_7);
    }
    uVar9 = (ulong)((uint)uVar9 << (ulong)(uVar6 & 0x1f) | (uint)uVar9);
    uVar6 = uVar6 << 1;
    uVar5 = (int)uVar5 >> 1;
  }
  if (1 < (int)uVar6) {
    if (iVar2 != 0) {
      func_0x000108b4155c(param_3);
    }
    if (param_7 != 0) {
      func_0x000108b4155c(param_7);
    }
  }
  piVar7 = param_2;
  FUN_108b407d4(param_1,param_2,param_3,param_4,param_5,uVar6,param_7,param_8,uVar9);
  if (param_2[1] != 0) {
    if (1 < (int)uVar6) {
      FUN_108b40c88(param_3,(int)uVar5 >> (uVar1 & 0x1f),uVar6 << (ulong)(uVar1 & 0x1f),param_6 == 1
                   );
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar6 = (int)uVar6 >> 1;
      piVar7 = (int *)(ulong)((uint)piVar7 >> (ulong)(uVar6 & 0x1f) | (uint)piVar7);
      func_0x000108b414f0(param_3);
    }
    for (uVar5 = 0; uVar1 != uVar5; uVar5 = uVar5 + 1) {
      piVar7 = (int *)(ulong)(byte)(&UNK_10df8bc38)[(ulong)piVar7 & 0xffffffff];
      FUN_108b3f170(param_3,uVar4 >> (ulong)(uVar5 & 0x1f),1 << (ulong)(uVar5 & 0x1f));
    }
    if (param_9 != (float *)0x0) {
      for (uVar9 = param_4 & 0xffffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *param_9 = *param_3 * SQRT((float)(param_4 & 0xffffffff));
        param_3 = param_3 + 1;
        param_9 = param_9 + 1;
      }
    }
    piVar7 = (int *)(ulong)((uint)piVar7 &
                           (-1 << (ulong)(uVar6 << (ulong)(uVar1 & 0x1f) & 0x1f) ^ 0xffffffffU));
  }
  return piVar7;
}



/* Entry: 108b406a4; end: 108b407d3;  */

float * FUN_108b406a4(ulong param_1,float *param_2,undefined8 param_3,ulong param_4,int param_5,
                     float *param_6,float *param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  undefined1 uVar11;
  float *pfVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  uint uVar18;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ulong extraout_x12;
  undefined8 uVar22;
  long extraout_x13;
  ulong uVar23;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  float *pfVar24;
  undefined8 unaff_x21;
  int iVar25;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  float *pfVar26;
  undefined8 unaff_x27;
  ulong uVar27;
  undefined8 unaff_x28;
  float *pfVar28;
  ulong uVar29;
  float fVar30;
  undefined8 unaff_d8;
  float fVar31;
  undefined8 unaff_d9;
  undefined4 unaff_s10;
  float fVar32;
  undefined4 unaff_00005144;
  undefined8 unaff_d11;
  float afStack_170 [2];
  ulong auStack_168 [3];
  float afStack_150 [2];
  ulong auStack_148 [9];
  undefined8 auStack_100 [2];
  int aiStack_f0 [2];
  long lStack_e8;
  float afStack_e0 [2];
  long lStack_d8;
  int aiStack_d0 [2];
  long lStack_c8;
  undefined1 auStack_c0 [4];
  int aiStack_bc [5];
  uint uStack_a8;
  uint uStack_a4;
  ulong auStack_a0 [14];
  undefined8 auStack_30 [2];
  float afStack_20 [2];
  undefined8 uStack_18;
  
  func_0x000108b414c4(param_3);
  uStack_18 = extraout_x9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = -extraout_x13;
  pfVar24 = (float *)((long)afStack_20 + lVar9);
  if ((int)param_4 < 1) {
    _abort();
  }
  else {
    param_4 = param_4 & 0xffffffff;
    uVar19 = 0;
    uVar17 = (uint)extraout_x8;
    if (param_5 == 0) {
      pfVar12 = pfVar24;
      pfVar28 = param_2;
      for (; uVar23 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)), pfVar26 = pfVar12,
          pfVar10 = pfVar28, uVar19 != param_4; uVar19 = uVar19 + 1) {
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          param_1 = (ulong)(uint)*pfVar10;
          *pfVar26 = *pfVar10;
          pfVar26 = pfVar26 + 1;
          pfVar10 = pfVar10 + param_4;
        }
        pfVar28 = pfVar28 + 1;
        pfVar12 = (float *)((long)pfVar12 +
                           (-(extraout_x8 >> 0x1f & 1) & 0xfffffffc00000000 |
                           (extraout_x8 & 0xffffffff) << 2));
      }
    }
    else {
      pfVar28 = param_2;
      for (; uVar19 != param_4; uVar19 = uVar19 + 1) {
        pfVar12 = pfVar28;
        for (uVar23 = 0; (uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) != uVar23;
            uVar23 = uVar23 + 1) {
          param_1 = (ulong)(uint)*pfVar12;
          pfVar24[uVar23 + (long)*(int *)(&UNK_10df8bc40 + uVar19 * 4 + param_4 * 4) *
                           (long)(int)uVar17] = *pfVar12;
          pfVar12 = pfVar12 + param_4;
        }
        pfVar28 = pfVar28 + 1;
      }
    }
    param_4 = extraout_x12;
    _memcpy();
    func_0x000108b414c4(uStack_18);
    if (extraout_x9_00 == extraout_x8_00) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)auStack_a0 + lVar9) = unaff_d11;
  *(ulong *)((long)auStack_a0 + lVar9 + 8) = CONCAT44(unaff_00005144,unaff_s10);
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x10) = unaff_d9;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x18) = unaff_d8;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x20) = unaff_x28;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x28) = unaff_x27;
  *(ulong *)((long)auStack_a0 + lVar9 + 0x30) = unaff_x26;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x38) = unaff_x25;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x40) = unaff_x24;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x48) = unaff_x23;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x50) = unaff_x22;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x58) = unaff_x21;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x60) = unaff_x20;
  *(undefined8 *)((long)auStack_a0 + lVar9 + 0x68) = unaff_x19;
  *(undefined1 **)((long)auStack_30 + lVar9) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_30 + lVar9 + 8) = FUN_108b407d4;
  uVar17 = (uint)param_9;
  *(uint *)((long)&uStack_a8 + lVar9) = uVar17;
  *(int *)((long)&uStack_a4 + lVar9) = param_5;
  fVar31 = *param_2;
  pfVar28 = *(float **)(param_2 + 2);
  fVar5 = param_2[4];
  uVar19 = (ulong)(int)fVar5;
  fVar32 = param_2[6];
  uVar22 = *(undefined8 *)(param_2 + 8);
  lVar20 = *(long *)(pfVar28 + 0x22);
  lVar3 = *(long *)(pfVar28 + 0x24);
  iVar13 = (int)param_8;
  *(float **)((long)&lStack_c8 + lVar9) = pfVar24;
  if (iVar13 == -1) {
    *(float *)((long)afStack_e0 + lVar9) = fVar31;
    *(float *)((long)&lStack_d8 + lVar9) = fVar32;
    *(undefined8 *)((long)aiStack_d0 + lVar9) = uVar22;
    lVar20 = (long)*(short *)(lVar20 + uVar19 * 2);
    uVar23 = (ulong)*(byte *)(lVar3 + lVar20);
  }
  else {
    lVar20 = (long)*(short *)(lVar20 + (long)((int)pfVar28[2] + (int)pfVar28[2] * iVar13 +
                                             (int)fVar5) * 2);
    uVar23 = (ulong)*(byte *)(lVar3 + lVar20);
    if ((int)(((byte *)(lVar3 + lVar20))[uVar23] + 0xc) < param_5 && 2 < (uint)param_4) {
      uVar18 = (uint)param_4 >> 1;
      uVar19 = (ulong)uVar18;
      iVar25 = (int)param_6;
      if (iVar25 == 1) {
        *(uint *)((long)&uStack_a8 + lVar9) = uVar17 & 1 | uVar17 << 1;
      }
      uVar21 = iVar25 + 1 >> 1;
      *(long *)((long)&lStack_e8 + lVar9) = (long)&uStack_a8 + lVar9;
      *(int *)((long)aiStack_f0 + lVar9) = iVar13 + -1;
      *(undefined4 *)((long)aiStack_f0 + lVar9 + 4) = 0;
      *(int *)((long)aiStack_d0 + lVar9) = iVar13 + -1;
      *(float **)((long)&lStack_d8 + lVar9) = pfVar24 + uVar19;
      FUN_108b40db8(param_2,auStack_c0 + lVar9,pfVar24,pfVar24 + uVar19,uVar19,
                    (long)&uStack_a4 + lVar9,uVar21,param_6);
      uVar1 = *(uint *)((long)aiStack_bc + lVar9 + 8);
      uVar2 = *(uint *)((long)aiStack_bc + lVar9 + 0xc);
      fVar31 = (float)*(int *)((long)aiStack_bc + lVar9) * 3.0517578e-05;
      fVar32 = (float)*(int *)((long)aiStack_bc + lVar9 + 4) * 3.0517578e-05;
      uVar17 = uVar1 + ((int)(uVar18 << 3) >> (6U - iVar13 & 0x1f));
      uVar17 = uVar17 & (int)uVar17 >> 0x1f;
      if (0x2000 < (int)uVar2) {
        uVar17 = uVar1 - ((int)uVar1 >> (5U - iVar13 & 0x1f));
      }
      uVar18 = uVar1;
      if ((uVar2 & 0x3fff) != 0) {
        uVar18 = uVar17;
      }
      if (1 < iVar25) {
        uVar1 = uVar18;
      }
      iVar13 = *(int *)((long)&uStack_a8 + lVar9);
      uVar18 = *(uint *)((long)&uStack_a4 + lVar9);
      uVar1 = (int)(uVar18 - uVar1) / 2;
      uVar17 = uVar18;
      if ((int)uVar1 <= (int)uVar18) {
        uVar17 = uVar1;
      }
      uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
      iVar8 = uVar18 - uVar17;
      fVar5 = (float)((int)param_2[10] - *(int *)((long)aiStack_bc + lVar9 + 0x10));
      param_2[10] = fVar5;
      pfVar24 = (float *)0x0;
      if (param_7 != (float *)0x0) {
        pfVar24 = param_7 + uVar19;
      }
      fVar30 = (float)param_1;
      if ((int)uVar17 < iVar8) {
        uVar22 = *(undefined8 *)((long)&lStack_d8 + lVar9);
        *(uint *)((long)&lStack_d8 + lVar9) = uVar21;
        uVar4 = *(undefined4 *)((long)aiStack_d0 + lVar9);
        pfVar28 = param_2;
        FUN_108b407d4(fVar30 * fVar32,param_2,uVar22,uVar19,iVar8,uVar21,pfVar24,uVar4,
                      iVar13 >> (uVar21 & 0x1f));
        iVar8 = ((int)param_2[10] - (int)fVar5) + iVar8;
        iVar6 = iVar8 + -0x18;
        if (uVar2 == 0x4000 || iVar8 < 0x19) {
          iVar6 = 0;
        }
        FUN_108b407d4(fVar30 * fVar31,param_2,*(undefined8 *)((long)&lStack_c8 + lVar9),uVar19,
                      iVar6 + uVar17,*(undefined4 *)((long)&lStack_d8 + lVar9),param_7,uVar4,iVar13)
        ;
        pfVar24 = (float *)(ulong)((uint)param_2 | (int)pfVar28 << (ulong)(iVar25 >> 1 & 0x1f));
      }
      else {
        *(float **)((long)afStack_e0 + lVar9) = pfVar24;
        uVar4 = *(undefined4 *)((long)aiStack_d0 + lVar9);
        pfVar24 = param_2;
        FUN_108b407d4(fVar30 * fVar31,param_2,*(undefined8 *)((long)&lStack_c8 + lVar9),uVar19,
                      uVar17,uVar21,param_7,uVar4,iVar13);
        *(int *)((long)&lStack_c8 + lVar9) = (int)pfVar24;
        iVar6 = ((int)param_2[10] - (int)fVar5) + uVar17;
        iVar7 = iVar6 + -0x18;
        if (uVar2 == 0 || iVar6 < 0x19) {
          iVar7 = 0;
        }
        FUN_108b407d4(fVar30 * fVar32,param_2,*(undefined8 *)((long)&lStack_d8 + lVar9),uVar19,
                      iVar7 + iVar8,uVar21,*(undefined8 *)((long)afStack_e0 + lVar9),uVar4,
                      iVar13 >> (uVar21 & 0x1f));
        pfVar24 = (float *)(ulong)((int)param_2 << (ulong)(iVar25 >> 1 & 0x1f) |
                                  *(uint *)((long)&lStack_c8 + lVar9));
      }
      goto LAB_108b40c70;
    }
    *(float *)((long)afStack_e0 + lVar9) = fVar31;
    *(float *)((long)&lStack_d8 + lVar9) = fVar32;
    *(undefined8 *)((long)aiStack_d0 + lVar9) = uVar22;
  }
  uVar18 = 0;
  lVar3 = lVar3 + lVar20;
  param_5 = param_5 + -1;
  iVar13 = 6;
  do {
    uVar21 = (int)(uVar18 + (uint)uVar23 + 1) >> 1;
    uVar1 = (uint)uVar23;
    if (param_5 <= (int)(uint)*(byte *)(lVar3 + (int)uVar21)) {
      uVar1 = uVar21;
      uVar21 = uVar18;
    }
    uVar18 = uVar21;
    uVar23 = (ulong)uVar1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  if (uVar18 == 0) {
    uVar21 = 0xffffffff;
  }
  else {
    uVar21 = (uint)*(byte *)(lVar3 + (int)uVar18);
  }
  if ((int)(param_5 - uVar21) <= (int)((uint)*(byte *)(lVar3 + (int)uVar1) - param_5)) {
    uVar1 = uVar18;
  }
  uVar27 = (ulong)uVar1;
  pfVar24 = pfVar28;
  uVar23 = uVar19;
  uVar15 = uVar27;
  pfVar12 = param_6;
  uVar29 = param_1;
  func_0x000108b41440(pfVar28,uVar19,param_8,uVar27);
  fVar31 = (float)((int)param_2[10] - (int)pfVar24);
  while( true ) {
    param_2[10] = fVar31;
    uVar18 = (uint)uVar27;
    if ((-1 < (int)fVar31) || (unaff_x26 = (ulong)(uVar18 - 1), (int)uVar18 < 1)) break;
    fVar31 = (float)((int)pfVar24 + (int)fVar31);
    param_2[10] = fVar31;
    pfVar24 = pfVar28;
    uVar23 = uVar19;
    uVar15 = unaff_x26;
    func_0x000108b41440(pfVar28,uVar19,param_8);
    fVar31 = (float)((int)fVar31 - (int)pfVar24);
    uVar27 = unaff_x26;
  }
  if (uVar18 == 0) {
    if (param_2[1] == 0.0) {
      pfVar24 = (float *)0x0;
    }
    else {
      uVar18 = (int)(1L << ((ulong)param_6 & 0x3f)) - 1;
      uVar17 = uVar17 & uVar18;
      pfVar24 = (float *)(ulong)uVar17;
      if (uVar17 == 0) {
        _bzero(*(undefined8 *)((long)&lStack_c8 + lVar9),(param_4 & 0xffffffff) << 2);
      }
      else {
        fVar31 = param_2[0xe];
        uVar19 = param_4 & 0xffffffff;
        pfVar12 = *(float **)((long)&lStack_c8 + lVar9);
        pfVar28 = pfVar12;
        if (param_7 == (float *)0x0) {
          for (; pfVar24 = (float *)(ulong)uVar18, uVar19 != 0; uVar19 = uVar19 - 1) {
            fVar31 = (float)((int)fVar31 * 0x19660d + 0x3c6ef35f);
            *pfVar28 = (float)((int)fVar31 >> 0x14);
            pfVar28 = pfVar28 + 1;
          }
        }
        else {
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            fVar31 = (float)((int)fVar31 * 0x19660d + 0x3c6ef35f);
            fVar32 = -0.00390625;
            if (((uint)fVar31 & 0x8000) != 0) {
              fVar32 = 0.00390625;
            }
            *pfVar28 = fVar32 + *param_7;
            pfVar28 = pfVar28 + 1;
            param_7 = param_7 + 1;
          }
        }
        param_2[0xe] = fVar31;
        FUN_108b4e9fc(param_1,pfVar12,param_4,param_2[0xf]);
      }
    }
LAB_108b40c70:
    func_0x000108b41538(pfVar24,*(undefined8 *)((long)auStack_30 + lVar9 + 8));
    return pfVar24;
  }
  if (7 < (int)uVar18) {
    uVar18 = (uVar18 & 7 | 8) << (ulong)((uVar18 >> 3) - 1 & 0x1f);
  }
  uVar14 = (ulong)uVar18;
  if (*(int *)((long)afStack_e0 + lVar9) == 0) {
    func_0x000108b4157c();
    uVar22 = *(undefined8 *)((long)auStack_30 + lVar9);
    uVar16 = *(undefined8 *)((long)auStack_30 + lVar9 + 8);
    func_0x000108b41538();
    *(undefined8 *)((long)auStack_148 + lVar9 + 8) = unaff_d9;
    *(ulong *)((long)auStack_148 + lVar9 + 0x10) = param_1;
    *(undefined8 *)((long)auStack_148 + lVar9 + 0x18) = param_8;
    *(ulong *)((long)auStack_148 + lVar9 + 0x20) = param_4;
    *(float **)((long)auStack_148 + lVar9 + 0x28) = param_6;
    *(float **)((long)auStack_148 + lVar9 + 0x30) = param_7;
    *(ulong *)((long)auStack_148 + lVar9 + 0x38) = uVar19;
    *(float **)((long)auStack_148 + lVar9 + 0x40) = param_2;
    *(undefined8 *)((long)auStack_100 + lVar9) = uVar22;
    *(undefined8 *)((long)auStack_100 + lVar9 + 8) = uVar16;
    pfVar28 = (float *)((long)afStack_150 + lVar9);
    func_0x000108b4ebc0();
    *(undefined8 *)((long)auStack_148 + lVar9) = extraout_x8_04;
    if (((int)uVar14 < 1) || (uVar11 = (int)uVar23 == 1, uVar19 = uVar23, (int)uVar23 < 2)) {
      _abort();
      fVar31 = (float)uVar29;
      uVar17 = (uint)uVar23;
    }
    else {
      uVar27 = uVar29;
      (*(code *)PTR____chkstk_darwin_11034bd40)((uVar23 & 0xffffffff) * 4 + 0xf & 0x7fffffff0);
      fVar31 = (float)uVar27;
      pfVar28 = (float *)((long)afStack_150 + (lVar9 - extraout_x8_05));
      FUN_108b49a7c(pfVar28,uVar23);
      func_0x000108b4e8dc(pfVar28,pfVar24,uVar23);
      FUN_108b4e298(pfVar24,uVar23,0xffffffff,pfVar12,uVar14,uVar15);
      pfVar24 = pfVar28;
      FUN_108b4e874(pfVar28,uVar23,pfVar12);
      uVar17 = (uint)uVar23;
      func_0x000108b4ebac(*(undefined8 *)((long)auStack_148 + lVar9));
      param_2 = pfVar12;
      param_1 = uVar29;
      if ((bool)uVar11) {
        return pfVar24;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)(pfVar28 + -0xc) = unaff_d9;
    *(ulong *)(pfVar28 + -10) = param_1;
    *(ulong *)(pfVar28 + -8) = uVar19;
    *(float **)(pfVar28 + -6) = param_2;
    *(long *)(pfVar28 + -4) = (long)auStack_100 + lVar9;
    *(code **)(pfVar28 + -2) = FUN_108b4e9fc;
    pfVar28 = pfVar24;
    fVar32 = fVar31;
    func_0x000108b4ebd0();
    for (uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU); uVar17 != 0; uVar17 = uVar17 - 1) {
      *pfVar24 = fVar31 * (1.0 / SQRT(fVar32 + 1e-15)) * *pfVar24;
      pfVar24 = pfVar24 + 1;
    }
    return pfVar28;
  }
  fVar31 = param_2[1];
  func_0x000108b4157c();
  uVar22 = *(undefined8 *)((long)auStack_30 + lVar9);
  func_0x000108b41538(*(undefined8 *)((long)auStack_30 + lVar9 + 8));
  *(undefined8 *)((long)auStack_168 + lVar9 + 8) = unaff_d9;
  *(ulong *)((long)auStack_168 + lVar9 + 0x10) = param_1;
  *(float **)((long)afStack_150 + lVar9) = pfVar28;
  *(ulong *)((long)auStack_148 + lVar9) = uVar27;
  *(ulong *)((long)auStack_148 + lVar9 + 8) = unaff_x26;
  *(undefined8 *)((long)auStack_148 + lVar9 + 0x10) = param_9;
  *(undefined8 *)((long)auStack_148 + lVar9 + 0x18) = param_8;
  *(ulong *)((long)auStack_148 + lVar9 + 0x20) = param_4;
  *(float **)((long)auStack_148 + lVar9 + 0x28) = param_6;
  *(float **)((long)auStack_148 + lVar9 + 0x30) = param_7;
  *(ulong *)((long)auStack_148 + lVar9 + 0x38) = uVar19;
  *(float **)((long)auStack_148 + lVar9 + 0x40) = param_2;
  *(undefined8 *)((long)auStack_100 + lVar9) = uVar22;
  *(undefined8 *)((long)auStack_100 + lVar9 + 8) = extraout_x8_01;
  func_0x000108b4ebc0();
  *(undefined8 *)((long)auStack_168 + lVar9) = extraout_x8_02;
  if (0 < (int)uVar14) {
    iVar13 = (int)uVar23;
    uVar11 = iVar13 == 1;
    if (1 < iVar13) {
      uVar15 = uVar29;
      (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)(iVar13 + 3) * 4 + 0xf & 0x7fffffff0);
      pfVar26 = (float *)((long)afStack_170 + (lVar9 - extraout_x8_03));
      func_0x000108b4ebdc();
      FUN_108b4e490(pfVar24,pfVar26,uVar14,uVar23);
      pfVar28 = pfVar26;
      FUN_108b4e874(pfVar26,uVar23,pfVar12);
      pfVar12 = pfVar26;
      uVar19 = uVar23;
      FUN_108b49998();
      uVar17 = (uint)uVar19;
      uVar18 = (uint)uVar14;
      if (fVar31 != 0.0) {
        func_0x000108b4e8dc(uVar15,uVar29,pfVar26,pfVar24,uVar23);
        uVar18 = 0xffffffff;
        func_0x000108b4ebdc();
        uVar17 = (uint)uVar23;
        pfVar12 = pfVar24;
      }
      pfVar24 = pfVar12;
      func_0x000108b4ebac(*(undefined8 *)((long)auStack_168 + lVar9));
      if ((bool)uVar11) {
        return pfVar28;
      }
      goto LAB_108b4e870;
    }
  }
  _abort();
  uVar17 = (uint)uVar23;
  uVar18 = (uint)uVar14;
LAB_108b4e870:
  ___stack_chk_fail();
  if ((int)uVar18 < 2) {
    return (float *)0x1;
  }
  uVar19 = 0;
  pfVar28 = (float *)0x0;
  uVar21 = 0;
  if (uVar18 != 0) {
    uVar21 = uVar17 / uVar18;
  }
  do {
    uVar23 = 0;
    uVar17 = 0;
    do {
      uVar17 = (uint)pfVar24[uVar19 * uVar21 + uVar23] | uVar17;
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar21);
    pfVar28 = (float *)(ulong)((uint)(uVar17 != 0) << (ulong)((uint)uVar19 & 0x1f) | (uint)pfVar28);
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar18);
  return pfVar28;
}



/* Entry: 108b407d4; end: 108b40c87;  */

float * FUN_108b407d4(undefined8 param_1,undefined4 *param_2,float *param_3,ulong param_4,
                     uint param_5,undefined4 *param_6,float *param_7,undefined8 param_8,uint param_9
                     )

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float **ppfVar6;
  undefined1 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  uint uVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  undefined8 unaff_x30;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 unaff_d9;
  float afStack_150 [2];
  undefined8 uStack_148;
  float *pfStack_130;
  ulong uStack_128;
  undefined1 auStack_e0 [16];
  int iStack_d0;
  undefined4 uStack_cc;
  uint *puStack_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  ulong uStack_b0;
  float *pfStack_a8;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  
  pfVar23 = *(float **)(param_2 + 2);
  uVar20 = (ulong)(int)param_2[4];
  lVar1 = *(long *)(pfVar23 + 0x24);
  iVar14 = (int)param_8;
  pfStack_a8 = param_3;
  uStack_88 = param_9;
  uStack_84 = param_5;
  if (iVar14 == -1) {
    lVar17 = (long)*(short *)(*(long *)(pfVar23 + 0x22) + uVar20 * 2);
    uVar15 = (ulong)*(byte *)(lVar1 + lVar17);
  }
  else {
    lVar17 = (long)*(short *)(*(long *)(pfVar23 + 0x22) +
                             (long)((int)pfVar23[2] + (int)pfVar23[2] * iVar14 + param_2[4]) * 2);
    uVar15 = (ulong)*(byte *)(lVar1 + lVar17);
    if ((int)(((byte *)(lVar1 + lVar17))[uVar15] + 0xc) < (int)param_5 && 2 < (uint)param_4) {
      uVar16 = (uint)param_4 >> 1;
      uVar20 = (ulong)uVar16;
      pfStack_b8 = param_3 + uVar20;
      iStack_d0 = iVar14 + -1;
      iVar11 = (int)param_6;
      if (iVar11 == 1) {
        uStack_88 = param_9 & 1 | param_9 << 1;
      }
      uVar18 = iVar11 + 1 >> 1;
      puStack_c8 = &uStack_88;
      uStack_cc = 0;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,iStack_d0);
      FUN_108b40db8(param_2,auStack_a0,param_3,pfStack_b8,uVar20,&uStack_84,uVar18,param_6);
      uVar5 = uStack_88;
      pfVar23 = pfStack_b8;
      uVar16 = uStack_94 + ((int)(uVar16 << 3) >> (6U - iVar14 & 0x1f));
      uVar16 = uVar16 & (int)uVar16 >> 0x1f;
      if (0x2000 < (int)uStack_90) {
        uVar16 = uStack_94 - ((int)uStack_94 >> (5U - iVar14 & 0x1f));
      }
      uVar2 = uStack_94;
      if ((uStack_90 & 0x3fff) != 0) {
        uVar2 = uVar16;
      }
      if (1 < iVar11) {
        uStack_94 = uVar2;
      }
      uVar2 = (int)(uStack_84 - uStack_94) / 2;
      uVar16 = uStack_84;
      if ((int)uVar2 <= (int)uStack_84) {
        uVar16 = uVar2;
      }
      uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
      iVar14 = uStack_84 - uVar16;
      iVar4 = param_2[10] - iStack_8c;
      param_2[10] = iVar4;
      pfVar8 = (float *)0x0;
      if (param_7 != (float *)0x0) {
        pfVar8 = param_7 + uVar20;
      }
      fVar19 = (float)param_1;
      if ((int)uVar16 < iVar14) {
        pfStack_b8 = (float *)CONCAT44(pfStack_b8._4_4_,uVar18);
        uVar15 = uStack_b0 & 0xffffffff;
        puVar9 = param_2;
        FUN_108b407d4(fVar19 * (float)iStack_98 * 3.0517578e-05,param_2,pfVar23,uVar20,iVar14,uVar18
                      ,pfVar8,uVar15,(int)uStack_88 >> (uVar18 & 0x1f));
        iVar14 = (param_2[10] - iVar4) + iVar14;
        iVar4 = iVar14 + -0x18;
        if (uStack_90 == 0x4000 || iVar14 < 0x19) {
          iVar4 = 0;
        }
        FUN_108b407d4(fVar19 * (float)iStack_9c * 3.0517578e-05,param_2,pfStack_a8,uVar20,
                      iVar4 + uVar16,(ulong)pfStack_b8 & 0xffffffff,param_7,uVar15,uVar5);
        pfVar23 = (float *)(ulong)((uint)param_2 | (int)puVar9 << (ulong)(iVar11 >> 1 & 0x1f));
      }
      else {
        uVar15 = uStack_b0 & 0xffffffff;
        puVar9 = param_2;
        pfStack_c0 = pfVar8;
        FUN_108b407d4(fVar19 * (float)iStack_9c * 3.0517578e-05,param_2,pfStack_a8,uVar20,uVar16,
                      uVar18,param_7,uVar15,uStack_88);
        pfStack_a8 = (float *)CONCAT44(pfStack_a8._4_4_,(int)puVar9);
        iVar4 = (param_2[10] - iVar4) + uVar16;
        iVar3 = iVar4 + -0x18;
        if (uStack_90 == 0 || iVar4 < 0x19) {
          iVar3 = 0;
        }
        FUN_108b407d4(fVar19 * (float)iStack_98 * 3.0517578e-05,param_2,pfStack_b8,uVar20,
                      iVar3 + iVar14,uVar18,pfStack_c0,uVar15,(int)uVar5 >> (uVar18 & 0x1f));
        pfVar23 = (float *)(ulong)((int)param_2 << (ulong)(iVar11 >> 1 & 0x1f) | (uint)pfStack_a8);
      }
      goto LAB_108b40c70;
    }
  }
  pfStack_b8 = (float *)CONCAT44(pfStack_b8._4_4_,param_2[6]);
  pfStack_c0 = (float *)CONCAT44(pfStack_c0._4_4_,*param_2);
  uVar16 = 0;
  lVar1 = lVar1 + lVar17;
  iVar14 = param_5 - 1;
  iVar11 = 6;
  do {
    uVar18 = (int)(uVar16 + (uint)uVar15 + 1) >> 1;
    uVar5 = (uint)uVar15;
    if (iVar14 <= (int)(uint)*(byte *)(lVar1 + (int)uVar18)) {
      uVar5 = uVar18;
      uVar18 = uVar16;
    }
    uVar16 = uVar18;
    uVar15 = (ulong)uVar5;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (uVar16 == 0) {
    uVar18 = 0xffffffff;
  }
  else {
    uVar18 = (uint)*(byte *)(lVar1 + (int)uVar16);
  }
  if ((int)(iVar14 - uVar18) <= (int)((uint)*(byte *)(lVar1 + (int)uVar5) - iVar14)) {
    uVar5 = uVar16;
  }
  uVar22 = (ulong)uVar5;
  pfVar8 = pfVar23;
  uVar15 = uVar20;
  uVar13 = uVar22;
  puVar9 = param_6;
  uVar25 = param_1;
  uStack_b0 = *(ulong *)(param_2 + 8);
  FUN_108b41440(pfVar23,uVar20,param_8,uVar22);
  iVar14 = param_2[10] - (int)pfVar8;
  while( true ) {
    param_2[10] = iVar14;
    uVar16 = (uint)uVar22;
    if ((-1 < iVar14) || ((int)uVar16 < 1)) break;
    iVar14 = (int)pfVar8 + iVar14;
    param_2[10] = iVar14;
    pfVar8 = pfVar23;
    uVar15 = uVar20;
    uVar13 = (ulong)(uVar16 - 1);
    FUN_108b41440(pfVar23,uVar20,param_8);
    iVar14 = iVar14 - (int)pfVar8;
    uVar22 = (ulong)(uVar16 - 1);
  }
  if (uVar16 == 0) {
    if (param_2[1] == 0) {
      pfVar23 = (float *)0x0;
    }
    else {
      uVar16 = (int)(1L << ((ulong)param_6 & 0x3f)) - 1;
      param_9 = param_9 & uVar16;
      pfVar23 = (float *)(ulong)param_9;
      if (param_9 == 0) {
        _bzero(pfStack_a8,(param_4 & 0xffffffff) << 2);
      }
      else {
        uVar18 = param_2[0xe];
        uVar20 = param_4 & 0xffffffff;
        pfVar8 = pfStack_a8;
        if (param_7 == (float *)0x0) {
          for (; pfVar23 = (float *)(ulong)uVar16, uVar20 != 0; uVar20 = uVar20 - 1) {
            uVar18 = uVar18 * 0x19660d + 0x3c6ef35f;
            *pfVar8 = (float)((int)uVar18 >> 0x14);
            pfVar8 = pfVar8 + 1;
          }
        }
        else {
          for (; uVar20 != 0; uVar20 = uVar20 - 1) {
            uVar18 = uVar18 * 0x19660d + 0x3c6ef35f;
            fVar19 = -0.00390625;
            if ((uVar18 & 0x8000) != 0) {
              fVar19 = 0.00390625;
            }
            *pfVar8 = fVar19 + *param_7;
            param_7 = param_7 + 1;
            pfVar8 = pfVar8 + 1;
          }
        }
        param_2[0xe] = uVar18;
        FUN_108b4e9fc(param_1,pfStack_a8,param_4,param_2[0xf]);
      }
    }
LAB_108b40c70:
    func_0x000108b41538(pfVar23,unaff_x30);
    return pfVar23;
  }
  if (7 < (int)uVar16) {
    uVar16 = (uVar16 & 7 | 8) << (ulong)((uVar16 >> 3) - 1 & 0x1f);
  }
  uVar12 = (ulong)uVar16;
  if ((int)pfStack_c0 == 0) {
    func_0x000108b4157c();
    func_0x000108b41538();
    ppfVar6 = &pfStack_130;
    func_0x000108b4ebc0();
    if (((int)uVar12 < 1) || (uVar7 = (int)uVar15 == 1, uVar20 = uVar15, (int)uVar15 < 2)) {
      _abort();
      fVar19 = (float)uVar25;
      uVar16 = (uint)uVar15;
    }
    else {
      uVar26 = uVar25;
      uStack_128 = extraout_x8_01;
      (*(code *)PTR____chkstk_darwin_11034bd40)((uVar15 & 0xffffffff) * 4 + 0xf & 0x7fffffff0);
      fVar19 = (float)uVar26;
      ppfVar6 = (float **)((long)&pfStack_130 - extraout_x8_02);
      FUN_108b49a7c(ppfVar6,uVar15);
      func_0x000108b4e8dc(ppfVar6,pfVar8,uVar15);
      FUN_108b4e298(pfVar8,uVar15,0xffffffff,puVar9,uVar12,uVar13);
      pfVar8 = (float *)ppfVar6;
      FUN_108b4e874(ppfVar6,uVar15,puVar9);
      uVar16 = (uint)uVar15;
      func_0x000108b4ebac(uStack_128);
      param_2 = puVar9;
      param_1 = uVar25;
      if ((bool)uVar7) {
        return pfVar8;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)ppfVar6 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppfVar6 + -0x28) = param_1;
    *(ulong *)((long)ppfVar6 + -0x20) = uVar20;
    *(undefined4 **)((long)ppfVar6 + -0x18) = param_2;
    *(undefined1 **)((long)ppfVar6 + -0x10) = auStack_e0;
    *(code **)((long)ppfVar6 + -8) = FUN_108b4e9fc;
    pfVar23 = pfVar8;
    fVar24 = fVar19;
    func_0x000108b4ebd0();
    for (uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU); uVar16 != 0; uVar16 = uVar16 - 1) {
      *pfVar8 = fVar19 * (1.0 / SQRT(fVar24 + 1e-15)) * *pfVar8;
      pfVar8 = pfVar8 + 1;
    }
    return pfVar23;
  }
  iVar14 = param_2[1];
  func_0x000108b4157c();
  func_0x000108b41538(unaff_x30);
  pfStack_130 = pfVar23;
  uStack_128 = uVar22;
  func_0x000108b4ebc0();
  if (0 < (int)uVar12) {
    iVar11 = (int)uVar15;
    uVar7 = iVar11 == 1;
    if (1 < iVar11) {
      uVar26 = uVar25;
      uStack_148 = extraout_x8;
      (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)(iVar11 + 3) * 4 + 0xf & 0x7fffffff0);
      pfVar21 = (float *)((long)afStack_150 - extraout_x8_00);
      func_0x000108b4ebdc();
      FUN_108b4e490(pfVar8,pfVar21,uVar12,uVar15);
      pfVar23 = pfVar21;
      FUN_108b4e874(pfVar21,uVar15,puVar9);
      pfVar10 = pfVar21;
      uVar20 = uVar15;
      FUN_108b49998();
      uVar16 = (uint)uVar20;
      uVar18 = (uint)uVar12;
      if (iVar14 != 0) {
        func_0x000108b4e8dc(uVar26,uVar25,pfVar21,pfVar8,uVar15);
        uVar18 = 0xffffffff;
        func_0x000108b4ebdc();
        uVar16 = (uint)uVar15;
        pfVar10 = pfVar8;
      }
      pfVar8 = pfVar10;
      func_0x000108b4ebac(uStack_148);
      if ((bool)uVar7) {
        return pfVar23;
      }
      goto LAB_108b4e870;
    }
  }
  _abort();
  uVar16 = (uint)uVar15;
  uVar18 = (uint)uVar12;
LAB_108b4e870:
  ___stack_chk_fail();
  if ((int)uVar18 < 2) {
    return (float *)0x1;
  }
  uVar20 = 0;
  pfVar23 = (float *)0x0;
  uVar5 = 0;
  if (uVar18 != 0) {
    uVar5 = uVar16 / uVar18;
  }
  do {
    uVar15 = 0;
    uVar16 = 0;
    do {
      uVar16 = (uint)pfVar8[uVar20 * uVar5 + uVar15] | uVar16;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar5);
    pfVar23 = (float *)(ulong)((uint)(uVar16 != 0) << (ulong)((uint)uVar20 & 0x1f) | (uint)pfVar23);
    uVar20 = uVar20 + 1;
  } while (uVar20 != uVar18);
  return pfVar23;
}



/* Entry: 108b40c88; end: 108b40db7;  */

float * FUN_108b40c88(float *param_1,undefined8 param_2,int param_3,float *param_4,float *param_5,
                     int *param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  short sVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  ulong extraout_x8;
  long extraout_x8_00;
  uint uVar18;
  float fVar19;
  undefined8 extraout_x9;
  ulong uVar20;
  long extraout_x9_00;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  uint *puVar24;
  uint extraout_w12;
  int iVar25;
  long extraout_x13;
  undefined8 unaff_x19;
  float fVar26;
  undefined8 unaff_x20;
  float *pfVar27;
  float fVar28;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  int *piVar29;
  float fVar30;
  float fVar31;
  int aiStack_c4 [3];
  long alStack_b8 [4];
  uint auStack_98 [2];
  long alStack_90 [12];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  float fStack_20;
  uint uStack_1c;
  undefined8 uStack_18;
  
  func_0x000108b414c4(param_2);
  uVar17 = param_3 * (int)param_2;
  pfVar12 = (float *)(-(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2);
  uStack_18 = extraout_x9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = -extraout_x13;
  pfVar13 = (float *)((long)&fStack_20 + lVar4);
  lVar23 = (long)(int)extraout_w12;
  uVar20 = 0;
  uVar17 = (uint)extraout_x8;
  if ((int)param_4 == 0) {
    pfVar10 = pfVar13;
    pfVar15 = param_1;
    for (; uVar5 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)), pfVar11 = pfVar10,
        pfVar14 = pfVar15, uVar20 != (extraout_w12 & ((int)extraout_w12 >> 0x1f ^ 0xffffffffU));
        uVar20 = uVar20 + 1) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pfVar11 = *pfVar14;
        pfVar11 = pfVar11 + lVar23;
        pfVar14 = pfVar14 + 1;
      }
      pfVar15 = (float *)((long)pfVar15 +
                         (-(extraout_x8 >> 0x1f & 1) & 0xfffffffc00000000 |
                         (extraout_x8 & 0xffffffff) << 2));
      pfVar10 = pfVar10 + 1;
    }
  }
  else {
    pfVar10 = pfVar13;
    for (; uVar5 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)), pfVar15 = param_1,
        pfVar11 = pfVar10, uVar20 != (extraout_w12 & ((int)extraout_w12 >> 0x1f ^ 0xffffffffU));
        uVar20 = uVar20 + 1) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        param_4 = (float *)(ulong)(*(int *)(&UNK_10df8bc40 + uVar20 * 4 + lVar23 * 4) * uVar17);
        *pfVar11 = pfVar15[(int)(*(int *)(&UNK_10df8bc40 + uVar20 * 4 + lVar23 * 4) * uVar17)];
        pfVar15 = pfVar15 + 1;
        pfVar11 = pfVar11 + lVar23;
      }
      pfVar10 = pfVar10 + 1;
    }
  }
  pfVar10 = pfVar13;
  _memcpy();
  func_0x000108b414c4(uStack_18);
  if (extraout_x9_00 == extraout_x8_00) {
    return param_1;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x10) = unaff_x28;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x18) = unaff_x27;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x20) = unaff_x26;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x28) = unaff_x25;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x30) = unaff_x24;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x38) = unaff_x23;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x40) = unaff_x22;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x48) = unaff_x21;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x50) = unaff_x20;
  *(undefined8 *)((long)alStack_90 + lVar4 + 0x58) = unaff_x19;
  *(undefined1 **)(auStack_30 + lVar4) = &stack0xfffffffffffffff0;
  *(code **)((long)&uStack_28 + lVar4) = FUN_108b40db8;
  fVar26 = *pfVar13;
  uVar17 = *(uint *)((long)&uStack_1c + lVar4);
  pfVar13 = (float *)(ulong)uVar17;
  fVar19 = *param_1;
  lVar23 = *(long *)(param_1 + 2);
  fVar30 = param_1[4];
  fVar31 = param_1[5];
  uVar22 = *(undefined8 *)(param_1 + 8);
  *(int **)((long)alStack_90 + lVar4) = param_6;
  *(undefined8 *)((long)alStack_90 + lVar4 + 8) = uVar22;
  uVar22 = *(undefined8 *)(param_1 + 0xc);
  iVar9 = (int)*(short *)(*(long *)(lVar23 + 0x40) + (long)(int)fVar30 * 2) + (int)fVar26 * 8;
  uVar16 = (uint)param_5;
  iVar21 = -0x10;
  if (uVar16 != 2 || uVar17 == 0) {
    iVar21 = -4;
  }
  iVar25 = -2;
  if (uVar16 != 2 || uVar17 == 0) {
    iVar25 = -1;
  }
  iVar25 = iVar25 + uVar16 * 2;
  uVar18 = 0;
  if (iVar25 != 0) {
    uVar18 = (*param_6 + (iVar21 + (iVar9 >> 1)) * iVar25) / iVar25;
  }
  uVar7 = (*param_6 - iVar9) - 0x20;
  if ((int)uVar18 <= (int)uVar7) {
    uVar7 = uVar18;
  }
  pfVar15 = param_4;
  if ((int)uVar7 < 4) {
    uVar18 = 1;
  }
  else {
    if (0x3f < uVar7) {
      uVar7 = 0x40;
    }
    uVar18 = ((int)*(short *)(&UNK_10df8bcc0 + (ulong)(uVar7 & 7) * 2) >>
             (0xe - (uVar7 >> 3) & 0x1f)) + 1U & 0xfffffffe;
    pfVar11 = pfVar10;
    pfVar14 = pfVar12;
    if (0x100 < (int)uVar18) goto LAB_108b4143c;
  }
  *(long *)((long)alStack_b8 + lVar4 + 8) = lVar23;
  *(undefined8 *)((long)alStack_b8 + lVar4 + 0x10) = uVar22;
  *(undefined4 *)((long)auStack_98 + lVar4) = param_7;
  *(undefined8 *)((long)alStack_b8 + lVar4 + 0x18) = *(undefined8 *)((long)&uStack_18 + lVar4);
  *(long *)((long)alStack_b8 + lVar4) = (long)(int)fVar30;
  if ((int)fVar31 <= (int)fVar30 && uVar17 != 0) {
    uVar18 = 1;
  }
  if (fVar19 == 0.0) {
    pfVar27 = (float *)0x0;
    pfVar8 = param_1;
    pfVar13 = pfVar12;
  }
  else {
    pfVar8 = pfVar12;
    pfVar15 = param_5;
    func_0x000108b4ea64(pfVar12,param_4,pfVar13,param_5,param_1[0xf]);
    pfVar27 = (float *)(ulong)(uint)((int)pfVar8 >> 0x10);
  }
  func_0x000108b415c0();
  *(int *)((long)auStack_98 + lVar4 + 4) = (int)pfVar8;
  iVar9 = uVar16 * 0x80;
  uVar7 = uVar18 - 1;
  fVar26 = SUB84(pfVar27,0);
  if (uVar7 == 0) {
    if (uVar17 == 0) {
      *(int *)((long)aiStack_c4 + lVar4 + 8) = iVar9;
LAB_108b412f8:
      piVar29 = *(int **)((long)alStack_90 + lVar4);
      iVar21 = *(int *)((long)auStack_98 + lVar4 + 4);
      goto LAB_108b41340;
    }
    if (fVar19 == 0.0) {
      pfVar12 = (float *)0x0;
      piVar29 = *(int **)((long)alStack_90 + lVar4);
    }
    else {
      if (((int)fVar26 < 0x2001) || (param_1[0x11] != 0.0)) {
        pfVar12 = (float *)0x0;
        piVar29 = *(int **)((long)alStack_90 + lVar4);
      }
      else {
        piVar29 = *(int **)((long)alStack_90 + lVar4);
        pfVar12 = (float *)0x1;
        for (uVar20 = (ulong)param_5 & 0xffffffff; uVar20 != 0; uVar20 = uVar20 - 1) {
          *param_4 = -*param_4;
          param_4 = param_4 + 1;
        }
      }
      func_0x000108b414d4();
    }
    if ((*piVar29 < 0x11) || ((int)param_1[10] < 0x11)) {
      pfVar12 = (float *)0x0;
    }
    else if (fVar19 == 0.0) {
      pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
      FUN_108b49de4(pfVar8,2);
      pfVar12 = pfVar8;
    }
    else {
      pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
      func_0x000108b4a0a0(pfVar8,pfVar12,2);
    }
    fVar30 = SUB84(pfVar12,0);
    if (param_1[0x11] != 0.0) {
      fVar30 = 0.0;
    }
LAB_108b412dc:
    iVar9 = *(int *)((long)auStack_98 + lVar4 + 4);
    func_0x000108b415c0();
    fVar31 = (float)((int)pfVar8 - iVar9);
    *piVar29 = *piVar29 - (int)fVar31;
  }
  else {
    *(int *)((long)aiStack_c4 + lVar4 + 8) = iVar9;
    iVar21 = (int)uVar18 >> 1;
    if (fVar19 == 0.0) {
joined_r0x000108b40f7c:
      if ((uVar17 != 0) && (2 < uVar16)) {
        uVar7 = (int)uVar18 / 2;
        iVar9 = (uVar7 + 1) * 3;
        uVar16 = iVar9 + uVar7;
        pfVar15 = (float *)(ulong)uVar16;
        if (fVar19 != 0.0) {
          iVar21 = (int)pfVar27;
          uVar16 = iVar9 + ~uVar7 + iVar21;
          if (iVar21 <= (int)uVar7) {
            uVar16 = iVar21 * 3;
          }
          uVar1 = (iVar9 - uVar7) + iVar21;
          if (iVar21 <= (int)uVar7) {
            uVar1 = iVar21 * 3 + 3;
          }
          pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
          goto LAB_108b412b0;
        }
        lVar23 = *(long *)((long)alStack_90 + lVar4 + 8);
        uVar1 = 0;
        if (uVar16 != 0) {
          uVar1 = *(uint *)(lVar23 + 0x20) / uVar16;
        }
        *(uint *)(lVar23 + 0x28) = uVar1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = *(uint *)(lVar23 + 0x24) / uVar1;
        }
        iVar21 = 0;
        if (uVar3 + 1 <= uVar16) {
          iVar21 = uVar16 - (uVar3 + 1);
        }
        if (iVar21 < iVar9) {
          uVar16 = iVar21 / 3;
        }
        else {
          uVar16 = iVar21 + (uVar7 + 1) * -2;
        }
        uVar1 = iVar9 + ~uVar7 + uVar16;
        if ((int)uVar16 <= (int)uVar7) {
          uVar1 = uVar16 * 3;
        }
        pfVar11 = (float *)(ulong)uVar1;
        uVar1 = (iVar9 - uVar7) + uVar16;
        if ((int)uVar16 <= (int)uVar7) {
          uVar1 = uVar16 * 3 + 3;
        }
        pfVar13 = (float *)(ulong)uVar1;
        pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
        FUN_108b49db0();
        pfVar27 = (float *)(ulong)uVar16;
        goto LAB_108b412b4;
      }
      if ((1 < param_8) || (uVar17 != 0)) {
        if (fVar19 != 0.0) goto LAB_108b41258;
        pfVar11 = (float *)(ulong)(uVar18 + 1);
        pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
        FUN_108b49e68();
        pfVar27 = pfVar8;
        goto LAB_108b412b4;
      }
      iVar9 = iVar21 + 1;
      uVar16 = iVar9 * iVar9;
      pfVar15 = (float *)(ulong)uVar16;
      if (fVar19 != 0.0) goto LAB_108b41278;
      lVar23 = *(long *)((long)alStack_90 + lVar4 + 8);
      uVar17 = 0;
      if (uVar16 != 0) {
        uVar17 = *(uint *)(lVar23 + 0x20) / uVar16;
      }
      *(uint *)(lVar23 + 0x28) = uVar17;
      uVar7 = 0;
      if (uVar17 != 0) {
        uVar7 = *(uint *)(lVar23 + 0x24) / uVar17;
      }
      uVar17 = 0;
      if (uVar7 + 1 <= uVar16) {
        uVar17 = uVar16 - (uVar7 + 1);
      }
      if ((int)uVar17 < iVar9 * iVar21 >> 1) {
        uVar17 = uVar17 << 3 | 1;
        FUN_108b4aed8();
        uVar17 = uVar17 - 1 >> 1;
        iVar9 = uVar17 + 1;
        uVar16 = iVar9 * uVar17 >> 1;
      }
      else {
        uVar7 = (uVar16 + ~uVar17) * 8 | 1;
        FUN_108b4aed8();
        uVar7 = (uVar18 + 1) * 2 - uVar7;
        uVar17 = uVar7 >> 1;
        iVar9 = (uVar18 + 1) - (uVar7 >> 1);
        uVar16 = uVar16 - ((int)(iVar9 * ((uVar18 - (uVar7 >> 1)) + 2)) >> 1);
      }
      piVar29 = *(int **)((long)alStack_90 + lVar4);
      pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
      iVar21 = *(int *)((long)auStack_98 + lVar4 + 4);
      FUN_108b49db0(pfVar8,uVar16,uVar16 + iVar9,pfVar15);
      fVar26 = 0.0;
      if (uVar18 != 0) {
        fVar26 = (float)((uVar17 << 0xe) / uVar18);
      }
    }
    else {
      if (uVar17 != 0) {
        if (param_1[0x10] == 0.0) {
          pfVar27 = (float *)(ulong)(uint)((int)((int)fVar26 * uVar18 + 0x2000) >> 0xe);
        }
        else {
          iVar9 = -0x7fff;
          if (0x2000 < (int)fVar26) {
            iVar9 = 0x7fff;
          }
          iVar25 = 0;
          if (uVar18 != 0) {
            iVar25 = iVar9 / (int)uVar18;
          }
          iVar25 = iVar25 + (int)fVar26 * uVar18;
          uVar1 = iVar25 >> 0xe & (iVar25 >> 0x1f ^ 0xffffffffU);
          if ((int)uVar7 <= (int)uVar1) {
            uVar1 = uVar7;
          }
          pfVar27 = (float *)(ulong)(uVar1 - ((int)~(uint)param_1[0x10] >> 0x1f));
        }
        goto joined_r0x000108b40f7c;
      }
      uVar7 = (int)fVar26 * uVar18 + 0x2000;
      uVar16 = (int)uVar7 >> 0xe;
      pfVar27 = (float *)(ulong)uVar16;
      if ((param_1[0x12] != 0.0) && (0 < (int)uVar16 && (int)uVar16 < (int)uVar18)) {
        sVar6 = 0;
        if (uVar18 != 0) {
          sVar6 = (short)((uVar7 & 0xffffc000) / uVar18);
        }
        iVar25 = (int)sVar6;
        *(uint *)((long)aiStack_c4 + lVar4 + 4) = uVar16;
        func_0x000108b3e8b8();
        *(int *)((long)aiStack_c4 + lVar4) = iVar25;
        sVar6 = 0x4000 - sVar6;
        func_0x000108b3e8b8();
        func_0x000108b3e910();
        iVar9 = (int)sVar6 * (int)(short)((short)iVar9 + -0x80) + 0x4000 >> 0xf;
        iVar25 = **(int **)((long)alStack_90 + lVar4);
        pfVar27 = (float *)(ulong)uVar18;
        if (iVar9 <= iVar25) {
          uVar16 = 0;
          if (iVar9 + iVar25 < 0 == SCARRY4(iVar9,iVar25)) {
            uVar16 = *(uint *)((long)aiStack_c4 + lVar4 + 4);
          }
          pfVar27 = (float *)(ulong)uVar16;
        }
      }
      if (param_8 < 2) {
        pfVar15 = (float *)(ulong)(uint)((iVar21 + 1) * (iVar21 + 1));
LAB_108b41278:
        iVar25 = (int)pfVar27;
        iVar9 = (uVar18 - iVar25) + 1;
        uVar16 = (int)pfVar15 - ((int)(iVar9 * ((uVar18 - iVar25) + 2)) >> 1);
        if (iVar25 <= iVar21) {
          iVar9 = iVar25 + 1;
          uVar16 = (iVar25 + 1) * iVar25 >> 1;
        }
        uVar1 = uVar16 + iVar9;
        pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
LAB_108b412b0:
        pfVar13 = (float *)(ulong)uVar1;
        pfVar11 = (float *)(ulong)uVar16;
        func_0x000108b49fd0();
      }
      else {
LAB_108b41258:
        pfVar13 = (float *)(ulong)(uVar18 + 1);
        pfVar8 = *(float **)((long)alStack_90 + lVar4 + 8);
        pfVar11 = pfVar27;
        FUN_108b4a10c();
      }
LAB_108b412b4:
      param_1 = pfVar8;
      pfVar14 = pfVar13;
      if ((int)pfVar27 < 0) {
LAB_108b4143c:
        iVar9 = (int)pfVar11;
        iVar21 = (int)pfVar14;
        iVar25 = (int)pfVar15;
        _abort();
        if (iVar25 != 0) {
          return (float *)(ulong)(*(byte *)(*(long *)(param_1 + 0x24) +
                                            (long)*(short *)(*(long *)(param_1 + 0x22) +
                                                            (long)((int)param_1[2] +
                                                                   (int)param_1[2] * iVar21 + iVar9)
                                                            * 2) + (long)iVar25) + 1);
        }
        return (float *)0x0;
      }
      uVar16 = (int)pfVar27 * 0x4000;
      fVar26 = 0.0;
      if (uVar18 != 0) {
        fVar26 = (float)(uVar16 / uVar18);
      }
      if ((uVar17 == 0) || (fVar19 == 0.0)) goto LAB_108b412f8;
      piVar29 = *(int **)((long)alStack_90 + lVar4);
      if (uVar16 < uVar18) {
        func_0x000108b414d4();
        fVar30 = 0.0;
        goto LAB_108b412dc;
      }
      iVar21 = *(int *)((long)auStack_98 + lVar4 + 4);
      for (uVar20 = (ulong)param_5 & 0xffffffff; uVar20 != 0; uVar20 = uVar20 - 1) {
        fVar30 = *pfVar12;
        fVar31 = *param_4;
        *pfVar12 = fVar30 * 0.70710677 + fVar31 * 0.70710677;
        *param_4 = fVar31 * 0.70710677 - fVar30 * 0.70710677;
        pfVar12 = pfVar12 + 1;
        param_4 = param_4 + 1;
      }
    }
LAB_108b41340:
    func_0x000108b415c0();
    fVar31 = (float)((int)pfVar8 - iVar21);
    *piVar29 = *piVar29 - (int)fVar31;
    if (fVar26 == 2.29589e-41) {
      fVar30 = 0.0;
      fVar28 = 0.0;
      puVar24 = *(uint **)((long)alStack_b8 + lVar4 + 0x18);
      *puVar24 = *puVar24 &
                 ~(-1 << (ulong)(*(uint *)((long)auStack_98 + lVar4) & 0x1f)) <<
                 (ulong)(*(uint *)((long)auStack_98 + lVar4) & 0x1f);
      pfVar12 = (float *)0x7fff;
      fVar19 = 2.29589e-41;
      goto LAB_108b41410;
    }
    fVar30 = 0.0;
    if (fVar26 != 0.0) {
      fVar28 = (float)(int)SUB42(fVar26,0);
      func_0x000108b3e8b8();
      pfVar12 = (float *)(ulong)(uint)(int)(short)(0x4000 - SUB42(fVar26,0));
      func_0x000108b3e8b8();
      uVar2 = *(undefined4 *)((long)aiStack_c4 + lVar4 + 8);
      pfVar8 = pfVar12;
      func_0x000108b3e910();
      fVar30 = 0.0;
      fVar19 = (float)((int)(short)pfVar8 * (int)(short)((short)uVar2 + -0x80) + 0x4000 >> 0xf);
      goto LAB_108b41410;
    }
  }
  pfVar12 = (float *)0x0;
  puVar24 = *(uint **)((long)alStack_b8 + lVar4 + 0x18);
  *puVar24 = *puVar24 & (-1 << (ulong)(*(uint *)((long)auStack_98 + lVar4) & 0x1f) ^ 0xffffffffU);
  fVar19 = -NAN;
  fVar28 = 4.59163e-41;
  fVar26 = 0.0;
LAB_108b41410:
  *pfVar10 = fVar30;
  pfVar10[1] = fVar28;
  pfVar10[2] = SUB84(pfVar12,0);
  pfVar10[3] = fVar19;
  pfVar10[4] = fVar26;
  pfVar10[5] = fVar31;
  return pfVar8;
}



/* Entry: 108b40db8; end: 108b4143f;  */

float * FUN_108b40db8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     int *param_6,uint param_7,int param_8,int param_9,uint param_10,uint *param_11)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  pfVar19 = (float *)(ulong)param_10;
  fVar21 = *param_1;
  pfVar13 = *(float **)(param_1 + 8);
  iVar3 = (int)*(short *)(*(long *)(*(long *)(param_1 + 2) + 0x40) + (long)(int)param_1[4] * 2) +
          param_9 * 8;
  uVar8 = (uint)param_5;
  iVar12 = -0x10;
  if (uVar8 != 2 || param_10 == 0) {
    iVar12 = -4;
  }
  iVar14 = -2;
  if (uVar8 != 2 || param_10 == 0) {
    iVar14 = -1;
  }
  iVar14 = iVar14 + uVar8 * 2;
  uVar10 = 0;
  if (iVar14 != 0) {
    uVar10 = (*param_6 + (iVar12 + (iVar3 >> 1)) * iVar14) / iVar14;
  }
  uVar16 = (*param_6 - iVar3) - 0x20;
  if ((int)uVar10 <= (int)uVar16) {
    uVar16 = uVar10;
  }
  pfVar7 = param_4;
  if ((int)uVar16 < 4) {
    uVar10 = 1;
  }
  else {
    if (0x3f < uVar16) {
      uVar16 = 0x40;
    }
    uVar10 = ((int)*(short *)(&UNK_10df8bcc0 + (ulong)(uVar16 & 7) * 2) >>
             (0xe - (uVar16 >> 3) & 0x1f)) + 1U & 0xfffffffe;
    pfVar5 = param_2;
    pfVar6 = param_3;
    if (0x100 < (int)uVar10) goto LAB_108b4143c;
  }
  if ((int)param_1[5] <= (int)param_1[4] && param_10 != 0) {
    uVar10 = 1;
  }
  if (fVar21 == 0.0) {
    pfVar18 = (float *)0x0;
    pfVar5 = param_1;
    pfVar19 = param_3;
  }
  else {
    pfVar5 = param_3;
    pfVar7 = param_5;
    func_0x000108b4ea64(param_3,param_4,pfVar19,param_5,param_1[0xf]);
    pfVar18 = (float *)(ulong)(uint)((int)pfVar5 >> 0x10);
  }
  func_0x000108b415c0();
  iVar3 = (int)pfVar5;
  sVar1 = (short)param_5 * 0x80;
  uVar16 = uVar10 - 1;
  fVar15 = SUB84(pfVar18,0);
  if (uVar16 == 0) {
    if (param_10 == 0) goto LAB_108b41340;
    if (fVar21 == 0.0) {
      pfVar19 = (float *)0x0;
    }
    else {
      if (((int)fVar15 < 0x2001) || (param_1[0x11] != 0.0)) {
        pfVar19 = (float *)0x0;
      }
      else {
        pfVar19 = (float *)0x1;
        for (uVar9 = (ulong)param_5 & 0xffffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
          *param_4 = -*param_4;
          param_4 = param_4 + 1;
        }
      }
      func_0x000108b414d4();
    }
    if ((*param_6 < 0x11) || ((int)param_1[10] < 0x11)) {
      pfVar19 = (float *)0x0;
      pfVar13 = pfVar5;
    }
    else if (fVar21 == 0.0) {
      FUN_108b49de4(pfVar13,2);
      pfVar19 = pfVar13;
    }
    else {
      func_0x000108b4a0a0(pfVar13,pfVar19,2);
    }
    fVar21 = SUB84(pfVar19,0);
    if (param_1[0x11] != 0.0) {
      fVar21 = 0.0;
    }
LAB_108b412dc:
    func_0x000108b415c0();
    fVar22 = (float)((int)pfVar13 - iVar3);
    *param_6 = *param_6 - (int)fVar22;
    pfVar5 = pfVar13;
  }
  else {
    iVar12 = (int)uVar10 >> 1;
    if (fVar21 == 0.0) {
joined_r0x000108b40f7c:
      if ((param_10 == 0) || (uVar8 < 3)) {
        if ((param_8 < 2) && (param_10 == 0)) {
          iVar14 = iVar12 + 1;
          uVar8 = iVar14 * iVar14;
          pfVar7 = (float *)(ulong)uVar8;
          if (fVar21 != 0.0) goto LAB_108b41278;
          fVar21 = 0.0;
          if (uVar8 != 0) {
            fVar21 = (float)((uint)pfVar13[8] / uVar8);
          }
          pfVar13[10] = fVar21;
          uVar16 = 0;
          if (fVar21 != 0.0) {
            uVar16 = (uint)pfVar13[9] / (uint)fVar21;
          }
          uVar4 = 0;
          if (uVar16 + 1 <= uVar8) {
            uVar4 = uVar8 - (uVar16 + 1);
          }
          if ((int)uVar4 < iVar14 * iVar12 >> 1) {
            uVar8 = uVar4 << 3 | 1;
            FUN_108b4aed8();
            uVar16 = uVar8 - 1 >> 1;
            iVar12 = uVar16 + 1;
            uVar8 = iVar12 * uVar16 >> 1;
          }
          else {
            uVar4 = (uVar8 + ~uVar4) * 8 | 1;
            FUN_108b4aed8();
            uVar4 = (uVar10 + 1) * 2 - uVar4;
            uVar16 = uVar4 >> 1;
            iVar12 = (uVar10 + 1) - (uVar4 >> 1);
            uVar8 = uVar8 - ((int)(iVar12 * ((uVar10 - (uVar4 >> 1)) + 2)) >> 1);
          }
          FUN_108b49db0(pfVar13,uVar8,uVar8 + iVar12,pfVar7);
          fVar15 = 0.0;
          pfVar5 = pfVar13;
          if (uVar10 != 0) {
            fVar15 = (float)((uVar16 << 0xe) / uVar10);
          }
          goto LAB_108b41340;
        }
        if (fVar21 != 0.0) goto LAB_108b41258;
        pfVar5 = (float *)(ulong)(uVar10 + 1);
        FUN_108b49e68();
        pfVar18 = pfVar13;
      }
      else {
        uVar16 = (int)uVar10 / 2;
        iVar12 = (uVar16 + 1) * 3;
        uVar8 = iVar12 + uVar16;
        pfVar7 = (float *)(ulong)uVar8;
        if (fVar21 != 0.0) {
          iVar14 = (int)pfVar18;
          uVar8 = iVar12 + ~uVar16 + iVar14;
          if (iVar14 <= (int)uVar16) {
            uVar8 = iVar14 * 3;
          }
          uVar4 = (iVar12 - uVar16) + iVar14;
          if (iVar14 <= (int)uVar16) {
            uVar4 = iVar14 * 3 + 3;
          }
          goto LAB_108b412b0;
        }
        fVar15 = 0.0;
        if (uVar8 != 0) {
          fVar15 = (float)((uint)pfVar13[8] / uVar8);
        }
        pfVar13[10] = fVar15;
        uVar4 = 0;
        if (fVar15 != 0.0) {
          uVar4 = (uint)pfVar13[9] / (uint)fVar15;
        }
        iVar14 = 0;
        if (uVar4 + 1 <= uVar8) {
          iVar14 = uVar8 - (uVar4 + 1);
        }
        if (iVar14 < iVar12) {
          uVar8 = iVar14 / 3;
        }
        else {
          uVar8 = iVar14 + (uVar16 + 1) * -2;
        }
        uVar4 = iVar12 + ~uVar16 + uVar8;
        if ((int)uVar8 <= (int)uVar16) {
          uVar4 = uVar8 * 3;
        }
        pfVar5 = (float *)(ulong)uVar4;
        uVar4 = (iVar12 - uVar16) + uVar8;
        if ((int)uVar8 <= (int)uVar16) {
          uVar4 = uVar8 * 3 + 3;
        }
        pfVar19 = (float *)(ulong)uVar4;
        FUN_108b49db0();
        pfVar18 = (float *)(ulong)uVar8;
      }
    }
    else {
      if (param_10 != 0) {
        if (param_1[0x10] == 0.0) {
          pfVar18 = (float *)(ulong)(uint)((int)((int)fVar15 * uVar10 + 0x2000) >> 0xe);
        }
        else {
          iVar14 = -0x7fff;
          if (0x2000 < (int)fVar15) {
            iVar14 = 0x7fff;
          }
          iVar17 = 0;
          if (uVar10 != 0) {
            iVar17 = iVar14 / (int)uVar10;
          }
          iVar17 = iVar17 + (int)fVar15 * uVar10;
          uVar4 = iVar17 >> 0xe & (iVar17 >> 0x1f ^ 0xffffffffU);
          if ((int)uVar16 <= (int)uVar4) {
            uVar4 = uVar16;
          }
          pfVar18 = (float *)(ulong)(uVar4 - ((int)~(uint)param_1[0x10] >> 0x1f));
        }
        goto joined_r0x000108b40f7c;
      }
      uVar16 = (int)fVar15 * uVar10 + 0x2000;
      uVar8 = (int)uVar16 >> 0xe;
      pfVar18 = (float *)(ulong)uVar8;
      if ((param_1[0x12] != 0.0) && (0 < (int)uVar8 && (int)uVar8 < (int)uVar10)) {
        sVar2 = 0;
        if (uVar10 != 0) {
          sVar2 = (short)((uVar16 & 0xffffc000) / uVar10);
        }
        func_0x000108b3e8b8();
        sVar2 = 0x4000 - sVar2;
        func_0x000108b3e8b8();
        func_0x000108b3e910();
        iVar14 = (int)sVar2 * (int)(short)(sVar1 + -0x80) + 0x4000 >> 0xf;
        iVar17 = *param_6;
        pfVar18 = (float *)(ulong)uVar10;
        if (iVar14 <= iVar17) {
          uVar16 = 0;
          if (iVar14 + iVar17 < 0 == SCARRY4(iVar14,iVar17)) {
            uVar16 = uVar8;
          }
          pfVar18 = (float *)(ulong)uVar16;
        }
      }
      if (param_8 < 2) {
        pfVar7 = (float *)(ulong)(uint)((iVar12 + 1) * (iVar12 + 1));
LAB_108b41278:
        iVar17 = (int)pfVar18;
        iVar14 = (uVar10 - iVar17) + 1;
        uVar8 = (int)pfVar7 - ((int)(iVar14 * ((uVar10 - iVar17) + 2)) >> 1);
        if (iVar17 <= iVar12) {
          iVar14 = iVar17 + 1;
          uVar8 = (iVar17 + 1) * iVar17 >> 1;
        }
        uVar4 = uVar8 + iVar14;
LAB_108b412b0:
        pfVar19 = (float *)(ulong)uVar4;
        pfVar5 = (float *)(ulong)uVar8;
        func_0x000108b49fd0();
      }
      else {
LAB_108b41258:
        pfVar19 = (float *)(ulong)(uVar10 + 1);
        pfVar5 = pfVar18;
        FUN_108b4a10c();
      }
    }
    param_1 = pfVar13;
    pfVar6 = pfVar19;
    if ((int)pfVar18 < 0) {
LAB_108b4143c:
      iVar3 = (int)pfVar5;
      iVar12 = (int)pfVar6;
      iVar14 = (int)pfVar7;
      _abort();
      if (iVar14 != 0) {
        return (float *)(ulong)(*(byte *)(*(long *)(param_1 + 0x24) +
                                          (long)*(short *)(*(long *)(param_1 + 0x22) +
                                                          (long)((int)param_1[2] +
                                                                 (int)param_1[2] * iVar12 + iVar3) *
                                                          2) + (long)iVar14) + 1);
      }
      return (float *)0x0;
    }
    uVar8 = (int)pfVar18 * 0x4000;
    fVar15 = 0.0;
    if (uVar10 != 0) {
      fVar15 = (float)(uVar8 / uVar10);
    }
    pfVar5 = pfVar13;
    if ((param_10 != 0) && (fVar21 != 0.0)) {
      if (uVar8 < uVar10) {
        func_0x000108b414d4();
        fVar21 = 0.0;
        goto LAB_108b412dc;
      }
      for (uVar9 = (ulong)param_5 & 0xffffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        fVar21 = *param_3;
        fVar22 = *param_4;
        *param_3 = fVar21 * 0.70710677 + fVar22 * 0.70710677;
        *param_4 = fVar22 * 0.70710677 - fVar21 * 0.70710677;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
      }
    }
LAB_108b41340:
    func_0x000108b415c0();
    fVar22 = (float)((int)pfVar5 - iVar3);
    *param_6 = *param_6 - (int)fVar22;
    if (fVar15 == 2.29589e-41) {
      fVar21 = 0.0;
      fVar20 = 0.0;
      *param_11 = *param_11 & ~(-1 << (ulong)(param_7 & 0x1f)) << (ulong)(param_7 & 0x1f);
      pfVar19 = (float *)0x7fff;
      fVar11 = 2.29589e-41;
      goto LAB_108b41410;
    }
    fVar21 = 0.0;
    if (fVar15 != 0.0) {
      fVar20 = (float)(int)SUB42(fVar15,0);
      func_0x000108b3e8b8();
      pfVar19 = (float *)(ulong)(uint)(int)(short)(0x4000 - SUB42(fVar15,0));
      func_0x000108b3e8b8();
      pfVar5 = pfVar19;
      func_0x000108b3e910();
      fVar21 = 0.0;
      fVar11 = (float)((int)(short)pfVar5 * (int)(short)(sVar1 + -0x80) + 0x4000 >> 0xf);
      goto LAB_108b41410;
    }
  }
  pfVar19 = (float *)0x0;
  *param_11 = *param_11 & (-1 << (ulong)(param_7 & 0x1f) ^ 0xffffffffU);
  fVar11 = -NAN;
  fVar20 = 4.59163e-41;
  fVar15 = 0.0;
LAB_108b41410:
  *param_2 = fVar21;
  param_2[1] = fVar20;
  param_2[2] = SUB84(pfVar19,0);
  param_2[3] = fVar11;
  param_2[4] = fVar15;
  param_2[5] = fVar22;
  return pfVar5;
}



/* Entry: 108b41440; end: 108b41633;  */

int FUN_108b41440(long param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 0) {
    return *(byte *)(*(long *)(param_1 + 0x90) +
                     (long)*(short *)(*(long *)(param_1 + 0x88) +
                                     (long)(*(int *)(param_1 + 8) + *(int *)(param_1 + 8) * param_3
                                           + param_2) * 2) + (long)param_4) + 1;
  }
  return 0;
}



/* Entry: 108b41634; end: 108b416a3;  */

long FUN_108b41634(float param_1,float param_2,long param_3,long param_4,uint param_5,uint param_6,
                  int param_7,int param_8,int param_9,long param_10)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  uint unaff_w29;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar5 = (int)param_3;
  if (iVar5 == 8000) {
    return 6;
  }
  if (iVar5 == 12000) {
    return 4;
  }
  if (iVar5 == 16000) {
    return 3;
  }
  if (iVar5 == 48000) {
    return 1;
  }
  if (iVar5 == 24000) {
    return 2;
  }
  _abort();
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    if (param_4 != param_3) {
_memmove:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)();
      return param_3;
    }
  }
  else {
    lVar7 = 0;
    if ((int)param_5 < 0x10) {
      param_5 = 0xf;
    }
    if ((int)param_6 < 0x10) {
      param_6 = 0xf;
    }
    uVar6 = (ulong)param_6;
    lVar4 = (long)param_8 * 0xc;
    fVar11 = *(float *)(&UNK_10df8bcd0 + lVar4);
    fVar14 = *(float *)(&UNK_10df8bcd4 + lVar4);
    fVar12 = *(float *)(&UNK_10df8bcd8 + lVar4);
    lVar4 = (long)param_9 * 0xc;
    fVar13 = *(float *)(&UNK_10df8bcd0 + lVar4);
    fVar15 = *(float *)(&UNK_10df8bcd4 + lVar4);
    fVar16 = *(float *)(&UNK_10df8bcd8 + lVar4);
    pfVar9 = (float *)(param_4 + uVar6 * -4);
    uVar3 = 0;
    if ((param_1 != param_2 || param_8 != param_9) || param_5 != param_6) {
      uVar3 = unaff_w29;
    }
    uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar10 = (ulong)uVar2;
    fVar19 = *(float *)(param_4 + (1 - uVar6) * 4);
    fVar17 = *pfVar9;
    fVar18 = *(float *)(param_4 + (long)(int)~param_6 * 4);
    fVar21 = *(float *)(param_4 + (long)(int)(-2 - param_6) * 4);
    for (; fVar20 = fVar18, fVar18 = fVar17, fVar17 = fVar19, uVar10 << 2 != lVar7;
        lVar7 = lVar7 + 4) {
      fVar19 = *(float *)((long)pfVar9 + lVar7 + 8);
      fVar22 = *(float *)(param_10 + lVar7) * *(float *)(param_10 + lVar7);
      fVar23 = 1.0 - fVar22;
      pfVar1 = (float *)(param_4 + (ulong)param_5 * -4 + lVar7);
      *(float *)(param_3 + lVar7) =
           *(float *)(param_4 + lVar7) + *pfVar1 * param_1 * fVar11 * fVar23 +
           (pfVar1[1] + pfVar1[-1]) * param_1 * fVar14 * fVar23 +
           (pfVar1[2] + pfVar1[-2]) * param_1 * fVar12 * fVar23 + fVar18 * param_2 * fVar13 * fVar22
           + (fVar17 + fVar20) * param_2 * fVar15 * fVar22 +
           (fVar21 + fVar19) * param_2 * fVar16 * fVar22;
      fVar21 = fVar20;
    }
    if (param_2 == 0.0) {
      if (param_4 != param_3) {
        param_3 = param_3 + (long)(int)uVar3 * 4;
        goto _memmove;
      }
    }
    else {
      pfVar9 = (float *)(param_4 + uVar10 * 4);
      uVar2 = param_7 - uVar2;
      pfVar1 = (float *)(param_3 + uVar10 * 4);
      fVar11 = pfVar9[(int)(-2 - param_6)];
      fVar12 = pfVar9[(int)~param_6];
      fVar14 = pfVar9[-uVar6];
      fVar19 = pfVar9[1 - uVar6];
      for (uVar8 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
          uVar8 = uVar8 - 1) {
        fVar17 = pfVar9[2 - uVar6];
        *pfVar1 = *pfVar9 + fVar14 * param_2 * fVar13 + (fVar19 + fVar12) * param_2 * fVar15 +
                  (fVar11 + fVar17) * param_2 * fVar16;
        pfVar1 = pfVar1 + 1;
        pfVar9 = pfVar9 + 1;
        fVar11 = fVar12;
        fVar12 = fVar14;
        fVar14 = fVar19;
        fVar19 = fVar17;
      }
    }
  }
  return param_3;
}



/* Entry: 108b416a4; end: 108b418df;  */

void FUN_108b416a4(float param_1,float param_2,long param_3,long param_4,uint param_5,uint param_6,
                  uint param_7,int param_8,int param_9,long param_10,uint param_11)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    if (param_4 != param_3) {
      uVar5 = -(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2;
_memmove:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(param_3,param_4,uVar5);
      return;
    }
  }
  else {
    lVar6 = 0;
    if ((int)param_5 < 0x10) {
      param_5 = 0xf;
    }
    if ((int)param_6 < 0x10) {
      param_6 = 0xf;
    }
    uVar5 = (ulong)param_6;
    lVar4 = (long)param_8 * 0xc;
    fVar10 = *(float *)(&UNK_10df8bcd0 + lVar4);
    fVar13 = *(float *)(&UNK_10df8bcd4 + lVar4);
    fVar11 = *(float *)(&UNK_10df8bcd8 + lVar4);
    lVar4 = (long)param_9 * 0xc;
    fVar12 = *(float *)(&UNK_10df8bcd0 + lVar4);
    fVar14 = *(float *)(&UNK_10df8bcd4 + lVar4);
    fVar15 = *(float *)(&UNK_10df8bcd8 + lVar4);
    pfVar8 = (float *)(param_4 + uVar5 * -4);
    uVar3 = 0;
    if ((param_1 != param_2 || param_8 != param_9) || param_5 != param_6) {
      uVar3 = param_11;
    }
    uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar9 = (ulong)uVar2;
    fVar18 = *(float *)(param_4 + (1 - uVar5) * 4);
    fVar16 = *pfVar8;
    fVar17 = *(float *)(param_4 + (long)(int)~param_6 * 4);
    fVar20 = *(float *)(param_4 + (long)(int)(-2 - param_6) * 4);
    for (; fVar19 = fVar17, fVar17 = fVar16, fVar16 = fVar18, uVar9 << 2 != lVar6; lVar6 = lVar6 + 4
        ) {
      fVar18 = *(float *)((long)pfVar8 + lVar6 + 8);
      fVar21 = *(float *)(param_10 + lVar6) * *(float *)(param_10 + lVar6);
      fVar22 = 1.0 - fVar21;
      pfVar1 = (float *)(param_4 + (ulong)param_5 * -4 + lVar6);
      *(float *)(param_3 + lVar6) =
           *(float *)(param_4 + lVar6) + *pfVar1 * param_1 * fVar10 * fVar22 +
           (pfVar1[1] + pfVar1[-1]) * param_1 * fVar13 * fVar22 +
           (pfVar1[2] + pfVar1[-2]) * param_1 * fVar11 * fVar22 + fVar17 * param_2 * fVar12 * fVar21
           + (fVar16 + fVar19) * param_2 * fVar14 * fVar21 +
           (fVar20 + fVar18) * param_2 * fVar15 * fVar21;
      fVar20 = fVar19;
    }
    if (param_2 == 0.0) {
      if (param_4 != param_3) {
        param_3 = param_3 + (long)(int)uVar3 * 4;
        param_4 = param_4 + (long)(int)uVar3 * 4;
        uVar5 = -(ulong)(param_7 - uVar3 >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(param_7 - uVar3) << 2;
        goto _memmove;
      }
    }
    else {
      pfVar8 = (float *)(param_4 + uVar9 * 4);
      param_7 = param_7 - uVar2;
      pfVar1 = (float *)(param_3 + uVar9 * 4);
      fVar10 = pfVar8[(int)(-2 - param_6)];
      fVar11 = pfVar8[(int)~param_6];
      fVar13 = pfVar8[-uVar5];
      fVar18 = pfVar8[1 - uVar5];
      for (uVar7 = (ulong)(param_7 & ((int)param_7 >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
          uVar7 = uVar7 - 1) {
        fVar16 = pfVar8[2 - uVar5];
        *pfVar1 = *pfVar8 + fVar13 * param_2 * fVar12 + (fVar18 + fVar11) * param_2 * fVar14 +
                  (fVar10 + fVar16) * param_2 * fVar15;
        pfVar1 = pfVar1 + 1;
        pfVar8 = pfVar8 + 1;
        fVar10 = fVar11;
        fVar11 = fVar13;
        fVar13 = fVar18;
        fVar18 = fVar16;
      }
    }
  }
  return;
}



/* Entry: 108b418e0; end: 108b41917;  */

int FUN_108b418e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108b47154();
  return (int)param_1 * (*(int *)(lVar1 + 4) + *(int *)(lVar1 + 8) * 4 + 0x400) * 4 + 0xfc;
}



/* Entry: 108b41918; end: 108b419f7;  */

undefined8 FUN_108b41918(long *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = param_1;
  func_0x000108b47154();
  if (param_3 < 3) {
    uVar3 = 0xfffffff9;
    if ((param_1 != (long *)0x0) && (plVar2 != (long *)0x0)) {
      _bzero(param_1,(long)(int)(param_3 * (*(int *)((long)plVar2 + 4) + (int)plVar2[1] * 4 + 0x400)
                                 * 4 + 0xfc));
      *param_1 = (long)plVar2;
      *(uint *)(param_1 + 1) = param_3;
      *(uint *)((long)param_1 + 0xc) = param_3;
      uVar1 = *(undefined4 *)((long)plVar2 + 0xc);
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 5) = uVar1;
      *(undefined4 *)((long)param_1 + 0x4c) = param_4;
      *(undefined8 *)((long)param_1 + 0x34) = 0x100000001;
      *(undefined8 *)((long)param_1 + 0x2c) = 0xffffffff;
      param_1[2] = 0x100000000;
      *(undefined8 *)((long)param_1 + 0x1c) = 0x100000005;
      *(undefined4 *)(param_1 + 8) = 0x18;
      FUN_108b46af8(param_1,0xfbc);
      FUN_108b41634();
      uVar3 = 0;
      *(undefined4 *)(param_1 + 4) = param_2;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Entry: 108b419f8; end: 108b41b6f;  */

void FUN_108b419f8(float *param_1,float *param_2,ulong param_3,ulong param_4,ulong param_5,
                  float *param_6,float *param_7,int param_8)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *param_6;
  fVar9 = *param_7;
  iVar6 = (int)param_5;
  uVar5 = (uint)param_3;
  if (((param_8 == 0) && (iVar6 == 1)) && (param_6[1] == 0.0)) {
    for (uVar3 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar3 != 0; uVar3 = uVar3 - 1)
    {
      fVar8 = *param_1;
      *param_2 = fVar8 * 32768.0 - fVar9;
      fVar9 = fVar10 * fVar8 * 32768.0;
      param_1 = (float *)((long)param_1 +
                         (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2)
                         );
      param_2 = param_2 + 1;
    }
  }
  else {
    uVar2 = 0;
    if (iVar6 != 0) {
      uVar2 = (int)uVar5 / iVar6;
    }
    if (iVar6 != 1) {
      _bzero(param_2,-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
    }
    uVar4 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    pfVar1 = param_2;
    for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pfVar1 = *param_1 * 32768.0;
      param_1 = (float *)((long)param_1 +
                         (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2)
                         );
      pfVar1 = (float *)((long)pfVar1 +
                        (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2))
      ;
    }
    pfVar1 = param_2;
    if (param_8 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        fVar7 = *pfVar1;
        fVar8 = -65536.0;
        if (-65536.0 <= fVar7 || 65536.0 < fVar7) {
          fVar8 = 65536.0;
        }
        if (fVar7 <= 65536.0 && -65536.0 <= fVar7) {
          fVar8 = fVar7;
        }
        *pfVar1 = fVar8;
        pfVar1 = pfVar1 + iVar6;
      }
    }
    for (uVar3 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar3 != 0; uVar3 = uVar3 - 1)
    {
      fVar8 = *param_2;
      *param_2 = fVar8 - fVar9;
      fVar9 = fVar10 * fVar8;
      param_2 = param_2 + 1;
    }
  }
  *param_7 = fVar9;
  return;
}



/* Entry: 108b41b70; end: 108b44b93;  */

ulong FUN_108b41b70(ulong param_1,float *param_2,float *param_3,int param_4,float *param_5,
                   float param_6,float *param_7)

{
  short *psVar1;
  ulong uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  short *psVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  int extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar17;
  uint uVar18;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  int extraout_w8_13;
  int iVar19;
  int extraout_w8_14;
  undefined4 extraout_w8_15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar20;
  ulong uVar21;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long lVar22;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  uint extraout_w9;
  uint extraout_w9_00;
  undefined4 extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  undefined4 extraout_w9_04;
  undefined1 *extraout_x9;
  long extraout_x9_00;
  undefined1 *puVar23;
  float *extraout_x9_01;
  float *extraout_x9_02;
  float *extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  undefined8 uVar24;
  ulong extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  float *pfVar25;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint uVar26;
  float extraout_w10_02;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  undefined4 *extraout_x10_02;
  undefined4 *extraout_x10_03;
  undefined4 *extraout_x10_04;
  int extraout_w11;
  int extraout_w11_00;
  float *pfVar27;
  ulong uVar28;
  float *extraout_x11;
  long lVar29;
  float *pfVar30;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  uint uVar31;
  ulong uVar32;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  int iVar33;
  undefined8 extraout_x13;
  float *extraout_x13_00;
  float *extraout_x13_01;
  float *extraout_x13_02;
  int extraout_w14;
  int iVar34;
  undefined *puVar35;
  long lVar36;
  int extraout_w15;
  undefined4 extraout_w15_00;
  long extraout_x15;
  int extraout_w17;
  ulong extraout_x17;
  ulong extraout_x17_00;
  ulong extraout_x17_01;
  uint uVar37;
  long lVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  float *pfVar42;
  long lVar43;
  float *pfVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float afStack_260 [2];
  long lStack_258;
  float fStack_250;
  int iStack_24c;
  float *pfStack_248;
  int iStack_23c;
  undefined *puStack_238;
  int iStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  short *psStack_220;
  int iStack_214;
  float *pfStack_210;
  float *pfStack_208;
  uint uStack_1fc;
  long lStack_1f8;
  uint uStack_1ec;
  float *pfStack_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  long lStack_1d0;
  uint uStack_1c4;
  float fStack_1c0;
  int iStack_1bc;
  float *pfStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  float *pfStack_1a0;
  ulong uStack_198;
  uint uStack_190;
  float fStack_18c;
  long lStack_188;
  float *pfStack_180;
  float fStack_178;
  undefined4 uStack_174;
  long lStack_170;
  long lStack_168;
  float fStack_160;
  float fStack_15c;
  float *pfStack_158;
  float *pfStack_150;
  float fStack_144;
  float *pfStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  float *pfStack_120;
  long lStack_118;
  short *psStack_110;
  float *pfStack_108;
  ulong uStack_100;
  float *pfStack_f8;
  long lStack_f0;
  long lStack_e8;
  float *pfStack_e0;
  float *pfStack_d8;
  float fStack_d0;
  int iStack_cc;
  int iStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  float afStack_78 [16];
  undefined1 auStack_38 [40];
  undefined8 uStack_10;
  
  func_0x000108b472b4();
  pfVar10 = param_2;
  func_0x000108b470b4();
  fVar57 = pfVar10[2];
  lVar41 = (long)(int)fVar57;
  lVar20 = (long)(int)pfVar10[3];
  fStack_b4 = 2.10195e-44;
  fStack_b8 = 0.0;
  uStack_bc = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  fStack_d0 = 0.0;
  pfVar27 = *(float **)pfVar10;
  fVar54 = pfVar27[1];
  lStack_130 = (long)(int)pfVar27[2];
  psStack_110 = *(short **)(pfVar27 + 8);
  pfVar42 = (float *)(long)(int)pfVar10[9];
  bVar8 = pfVar42 == (float *)0x0;
  bVar9 = !bVar8;
  fStack_c4 = 0.0;
  pfVar11 = (float *)0xffffffff;
  uStack_10 = extraout_x8;
  if ((param_3 != (float *)0x0) && (bVar8 = param_6 == 2.8026e-45, 1 < (int)param_6)) {
    uVar32 = 0;
    uVar18 = (int)param_2[8] * param_4;
    uVar45 = (ulong)uVar18;
    iVar39 = 0x10;
    puVar35 = &UNK_10df8bcf4;
LAB_108b41c38:
    fVar55 = (float)uVar32;
    bVar8 = fVar55 == pfVar27[10];
    if ((int)fVar55 <= (int)pfVar27[10]) {
      if ((int)pfVar27[0xc] << (ulong)((uint)fVar55 & 0x1f) != uVar18) goto code_r0x000108b41c50;
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(uint)bVar9);
      pfVar44 = param_3;
      puStack_238 = puVar35;
      iStack_22c = iVar39;
      pfStack_120 = pfVar27;
      uStack_100 = uVar32;
      pfStack_f8 = (float *)(long)(int)pfVar10[10];
      if (param_7 == (float *)0x0) {
        iVar34 = 0;
        iVar39 = 0x168;
        lStack_138 = CONCAT44(lStack_138._4_4_,1);
      }
      else {
        pfVar11 = param_7;
        func_0x000108b49c74();
        func_0x000108b47114(param_7[6]);
        lStack_138 = CONCAT44(lStack_138._4_4_,extraout_w8 + -0x20);
        iVar34 = extraout_w8 + -0x1c >> 3;
        iVar39 = (int)pfVar11 + 0x167;
      }
      uVar37 = (uint)pfVar44;
      uStack_128 = uVar45;
      pfStack_108 = pfVar42;
      lStack_f0 = lVar20;
      if (param_2[0xd] == 0.0) {
        uVar37 = ((int)fVar54 + 0x400) * (int)fVar57;
        pfStack_d8 = (float *)(ulong)uVar37;
        pfVar42 = param_2 + (long)(int)uVar37 + 0x3f;
        iVar33 = (int)lStack_130 * (int)fVar57;
        if (0x4fa < (int)param_6) {
          param_6 = 1.78666e-42;
        }
        fVar55 = param_2[0xb];
        fStack_15c = SUB84(pfStack_f8,0);
        iStack_214 = iVar39;
        if ((param_2[0xc] == 0.0) || (fVar55 == -NAN)) {
          iVar39 = (int)fVar55 * uVar18;
          if (1 < (int)(uint)lStack_138) {
            iVar39 = iVar39 + (int)*pfStack_120 * (uint)lStack_138;
          }
          if (fVar55 != -NAN) {
            iVar40 = (int)*pfStack_120 << 3;
            fVar46 = 0.0;
            if (iVar40 != 0) {
              fVar46 = (float)((iVar39 + (int)*pfStack_120 * 4) / iVar40);
            }
            if ((int)fVar46 <= (int)param_6) {
              param_6 = fVar46;
            }
            if ((int)param_6 < 3) {
              param_6 = 2.8026e-45;
            }
            if (param_7 != (float *)0x0) {
              pfStack_e0 = param_5;
              FUN_108b4a30c(param_7,param_6);
              fStack_15c = SUB84(pfStack_f8,0);
              fVar55 = param_2[0xb];
              param_5 = pfStack_e0;
            }
          }
          iStack_1e0 = 0;
          fVar46 = (float)((int)param_6 - iVar34);
          lVar20 = -0x11c;
          fStack_160 = fVar46;
        }
        else {
          iVar39 = 0;
          if (uVar18 != 0) {
            iVar39 = ((int)*pfStack_120 * 6) / (int)uVar18;
          }
          iVar40 = 0;
          if (iVar39 != 0) {
            iVar40 = ((int)fVar55 * 6) / iVar39;
          }
          iStack_1e0 = iVar40 << 3;
          fStack_18c = (float)((iVar40 << 3) >> 6);
          fVar46 = (float)((int)param_6 - iVar34);
          lVar20 = -0xf0;
        }
        *(float *)((long)afStack_78 + lVar20 + 8) = fVar46;
        pfStack_208 = pfVar42 + iVar33;
        lStack_1f8 = 3 - uStack_100;
        fStack_178 = (float)((int)param_6 * 400 << (ulong)((uint)lStack_1f8 & 0x1f));
        fVar46 = fStack_178;
        if ((int)fVar55 <= (int)fStack_178) {
          fVar46 = fVar55;
        }
        if (fVar55 != -NAN) {
          fStack_178 = fVar46;
        }
        if (param_7 == (float *)0x0) {
          uStack_9c = 0x2100000000;
          uStack_a4 = 0;
          uStack_8c = 0;
          uStack_94 = 0x8000000000000000;
          param_1 = 0xffffffff;
          uStack_84 = 0xffffffff;
          param_7 = (float *)&uStack_b0;
          uStack_b0 = param_5;
          fStack_a8 = param_6;
        }
        uVar18 = (uint)uStack_100;
        pfStack_1a0 = pfStack_208 + iVar33;
        lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar34);
        lStack_170 = lVar41;
        pfStack_158 = pfVar42;
        fStack_144 = param_6;
        pfStack_140 = param_2;
        pfStack_e0 = param_7;
        if ((0 < iStack_1e0) && (param_2[0xe] != 0.0)) {
          fVar55 = 2.8026e-45;
          if ((uint)lStack_138 != 1) {
            fVar55 = 0.0;
          }
          fVar46 = (float)(iStack_1e0 * 2 - (int)param_2[0x35] >> 6);
          if ((int)fVar55 <= (int)fVar46) {
            fVar55 = fVar46;
          }
          if ((int)fVar55 < (int)fStack_160) {
            fStack_144 = (float)((int)fVar55 + iVar34);
            FUN_108b4a30c(param_7);
            fStack_15c = SUB84(pfStack_f8,0);
            fStack_160 = fVar55;
          }
        }
        fVar55 = fStack_144;
        pfStack_180 = param_2 + (long)((int)fVar54 * (int)fVar57) + 0x3f;
        lStack_188 = (long)iVar33;
        pfVar42 = pfStack_1a0 + iVar33;
        iVar39 = (int)lStack_f0;
        iStack_1bc = iVar39 * 0x28 + 0x14;
        if ((int)pfStack_120[3] <= (int)fStack_15c) {
          fStack_15c = pfStack_120[3];
        }
        uVar37 = (int)uStack_128 + (int)fVar54;
        pfStack_150 = (float *)(ulong)uVar37;
        func_0x000108b470d0(uVar37 * (int)lStack_170);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        func_0x000108b47120((long)afStack_260 - extraout_x8_00);
        pfVar10 = pfStack_140;
        fVar59 = pfStack_140[0x39];
        fVar46 = pfStack_140[8];
        iVar34 = 0;
        if (fVar46 != 0.0) {
          iVar34 = ((extraout_w12 - (int)fVar54) * iVar39) / (int)fVar46;
        }
        FUN_108b44b94(param_3,iVar34);
        if (fVar59 <= (float)param_1) {
          fVar59 = (float)param_1;
        }
        iVar33 = 0;
        if (fVar46 != 0.0) {
          iVar33 = ((int)fVar54 * iVar39) / (int)fVar46;
        }
        FUN_108b44b94(param_3 + iVar34,iVar33);
        fVar46 = (float)param_1;
        pfVar10[0x39] = fVar46;
        if (fVar59 <= fVar46) {
          fVar59 = fVar46;
        }
        pfStack_210 = pfVar42;
        if ((uint)lStack_138 == 1) {
          fVar46 = (float)(1 << (ulong)((uint)pfVar10[0x10] & 0x1f));
          param_1 = (ulong)(uint)fVar46;
          fVar46 = 1.0 / fVar46;
          func_0x000108b4a0a0(pfStack_e0,fVar59 <= fVar46,0xf);
          pfVar42 = pfStack_e0;
          if (fVar46 < fVar59) {
            func_0x000108b472a0();
            *(undefined4 *)(extraout_x9_00 + -0x100) = extraout_w8_01;
            puVar23 = auStack_38;
            uVar17 = extraout_w8_01;
            goto LAB_108b4217c;
          }
          if (0 < iStack_1e0) {
            fVar55 = fStack_144;
            if ((int)((int)lStack_e8 + 2U) <= (int)fStack_144) {
              fVar55 = (float)((int)lStack_e8 + 2U);
            }
            FUN_108b4a30c(pfStack_e0,fVar55);
            fStack_160 = 2.8026e-45;
            fStack_18c = fVar55;
            fStack_144 = fVar55;
          }
          iVar39 = (int)fVar55 * 8;
          func_0x000108b471a4();
          uStack_190 = 0;
          pfVar42[6] = (float)((iVar39 - (int)LZCOUNT(pfVar42[8])) + 0x20);
          lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar39);
          lStack_138 = CONCAT44(lStack_138._4_4_,iVar39);
          uVar37 = extraout_w9_00;
          iVar39 = extraout_w10_00;
          iVar34 = extraout_w11_00;
          iVar33 = extraout_w12_01;
        }
        else {
          func_0x000108b472a0();
          puVar23 = extraout_x9;
          uVar17 = extraout_w8_00;
LAB_108b4217c:
          *(undefined4 *)(puVar23 + -0x100) = uVar17;
          func_0x000108b471a4();
          uVar37 = extraout_w9;
          iVar39 = extraout_w10;
          iVar34 = extraout_w11;
          iVar33 = extraout_w12_00;
        }
        pfVar27 = pfStack_120;
        uVar32 = uStack_128;
        lVar38 = lStack_170;
        lVar41 = 0;
        uStack_1dc = iVar39 << (ulong)(uVar37 & 0x1f);
        lStack_168 = (long)iVar34;
        uStack_1ec = iVar33 - ((400U >> (ulong)(uVar18 & 0x1f)) - 0x32) * iStack_1bc;
        pfVar42 = pfVar10 + 0x31;
        lVar43 = (long)(int)fVar54 * 4;
        pfVar11 = pfVar10 + (((long)((int)fVar54 * (int)fVar57) + 0x43f) - (long)(int)fVar54);
        pfStack_d8 = (float *)(-((ulong)pfStack_150 >> 0x1f & 1) & 0xfffffffc00000000 |
                              ((ulong)pfStack_150 & 0xffffffff) << 2);
        lVar20 = lStack_118;
        do {
          FUN_108b419f8(param_3,lVar20 + lVar43,uVar32,lVar38,pfVar10[8],pfVar27 + 4,pfVar42,
                        65536.0 < fVar59 && pfVar10[5] != 0.0);
          lVar41 = lVar41 + 1;
          _memcpy(lVar20,pfVar11,lVar43);
          pfVar11 = pfVar11 + 0x400;
          pfVar42 = pfVar42 + 1;
          lVar20 = lVar20 + (long)pfStack_d8;
          param_3 = param_3 + 1;
        } while (lVar41 < lVar38);
        FUN_108b44bd0(lStack_118,lVar38,pfStack_150,&fStack_d0,*pfVar27);
        pfVar27 = pfStack_e0;
        uVar32 = uStack_128;
        pfVar42 = pfStack_180;
        iVar39 = (int)lStack_e8;
        iVar33 = (int)lStack_f0;
        iVar34 = (int)pfStack_108;
        if (((int)pfVar10[7] < 1) || (pfVar10[0x11] != 0.0)) {
          pfStack_d8 = (float *)CONCAT44(pfStack_d8._4_4_,1);
          fVar57 = 0.0;
        }
        else {
          bVar9 = false;
          if ((iVar34 != 0) && ((int)fStack_18c < 0xf)) {
            bVar9 = pfVar10[0x2f] != 2.8026e-45;
          }
          lVar41 = lStack_118;
          FUN_108b44d54(param_1,fStack_d0,lStack_118,pfStack_150,lVar38,&fStack_c4,&uStack_c0,bVar9,
                        &iStack_cc);
          pfStack_d8 = (float *)CONCAT44(pfStack_d8._4_4_,(uint)((int)lVar41 == 0));
          fVar57 = fStack_c4;
        }
        fVar54 = fStack_d0;
        if (1.0 - fVar57 <= fStack_d0) {
          fVar54 = 1.0 - fVar57;
        }
        fStack_d0 = fVar54;
        if (pfVar10[0x11] == 0.0) {
LAB_108b4242c:
          bVar8 = false;
          fVar55 = (float)(iVar33 * 0xc);
          cVar7 = SBORROW4((int)fStack_160,(int)fVar55);
          iVar40 = (int)fStack_160 + iVar33 * -0xc;
          bVar9 = fStack_160 == fVar55;
          if ((int)fVar55 < (int)fStack_160) goto LAB_108b42444;
        }
        else {
          cVar7 = SBORROW4((int)fStack_160,3);
          iVar40 = (int)fStack_160 + -3;
          bVar9 = fStack_160 == 4.2039e-45;
          if ((int)fStack_160 < 4) goto LAB_108b4242c;
LAB_108b42444:
          cVar6 = iVar40 < 0;
          bVar8 = false;
          if ((iVar34 == 0) && (((uStack_190 ^ 1) & 1) == 0)) {
            func_0x000108b4724c();
            if (bVar9 || cVar6 != cVar7) {
              bVar8 = pfVar10[6] == 0.0;
            }
            else {
              bVar8 = false;
            }
          }
        }
        pfVar44 = pfVar10 + 0x1a;
        fStack_1c0 = *pfVar44;
        pfStack_180 = pfVar10 + 0x1f;
        pfVar11 = pfVar10;
        FUN_108b450a0(fVar57,param_1,fVar54,pfVar10,lStack_118,pfVar42,lVar38,uVar32,fStack_1c0,
                      &fStack_b4,&fStack_b8,afStack_78,bVar8,pfVar10[7],fStack_160);
        fVar55 = fStack_b8;
        lVar41 = lStack_130;
        fVar46 = 0.4;
        if (0.4 < fStack_b8) {
LAB_108b4250c:
          if (*pfStack_180 != 0.0) {
            fVar59 = pfVar10[0x20];
            bVar9 = fVar59 == 0.3;
            cVar7 = fVar59 < 0.3;
            if (fVar59 <= 0.3) goto LAB_108b42574;
          }
          dVar49 = (double)(int)fStack_b4;
          dVar52 = (double)(int)pfVar10[0x1b] * 0.79;
          cVar6 = NAN(dVar52) || NAN(dVar49);
          bVar9 = dVar52 == dVar49;
          cVar7 = dVar52 < dVar49;
          uVar18 = 0;
          if (dVar52 <= dVar49) {
            uVar18 = (uint)(dVar49 <= (double)(int)pfVar10[0x1b] * 1.26);
          }
          pfVar42 = (float *)(ulong)uVar18;
        }
        else {
          fVar59 = pfVar10[0x1c];
          bVar9 = fVar59 == 0.4;
          cVar7 = fVar59 < 0.4;
          if (0.4 < fVar59) goto LAB_108b4250c;
LAB_108b42574:
          cVar6 = NAN(fVar59);
          pfVar42 = (float *)0x1;
        }
        iStack_24c = (int)pfVar11;
        if (iStack_24c == 0) {
          if ((iVar34 == 0) && (func_0x000108b4724c(), bVar9 || cVar7 != cVar6)) {
            pfVar11 = pfVar27;
            func_0x000108b471dc(pfVar27,0);
          }
        }
        else {
          func_0x000108b471dc(pfVar27,1);
          iVar34 = (int)fStack_b4 + 1;
          iVar40 = (int)LZCOUNT(iVar34);
          uVar18 = 0x1b - iVar40;
          FUN_108b4a10c(pfVar27,uVar18,6);
          iVar39 = (int)lStack_e8;
          FUN_108b4a1a0(pfVar27,(-0x10 << (ulong)(uVar18 & 0x1f)) + iVar34,0x1f - iVar40);
          FUN_108b4a1a0(pfVar27,afStack_78[0],3);
          pfVar11 = pfVar27;
          func_0x000108b4a0c4(pfVar27,fStack_1c0,&UNK_10df8bd9f,2);
          lVar41 = lStack_130;
        }
        iStack_23c = (int)pfVar42;
        pfStack_248 = pfVar44;
        if (((int)uStack_100 == 0) ||
           (func_0x000108b47114(pfVar27[6]), iVar39 < extraout_w8_02 + -0x1d)) {
          func_0x000108b47224();
          uStack_1fc = 1;
        }
        else if (((ulong)pfStack_d8 & 1) == 0) {
          uStack_1fc = 0;
          lStack_138 = CONCAT44(lStack_138._4_4_,1);
          pfVar42 = (float *)0x1;
          pfVar44 = (float *)(ulong)uStack_1dc;
        }
        else {
          uStack_1fc = 0;
          func_0x000108b47224();
        }
        func_0x000108b470d0((int)uVar32 * (int)lVar38);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pfVar4 = (float *)((long)afStack_260 - extraout_x8_01);
        (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_188);
        func_0x000108b47210();
        func_0x000108b47120();
        uStack_1d8 = extraout_x13;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pfVar27 = (float *)((long)pfVar4 - extraout_x12);
        uVar18 = (int)lVar41 * iVar33;
        uStack_198 = (ulong)uVar18;
        uVar32 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | uStack_198 << 2;
        (*(code *)PTR____chkstk_darwin_11034bd40)(uVar32 + 0xf & 0xfffffffffffffff0);
        func_0x000108b47120((long)pfVar27 - extraout_x8_02);
        lStack_130 = CONCAT44(lStack_130._4_4_,extraout_w12_02);
        pfVar13 = pfVar27;
        pfStack_1b8 = pfVar27;
        uStack_1a8 = uVar32;
        pfStack_d8 = pfVar4;
        if (extraout_w12_02 != 0) {
          func_0x000108b47164();
          lVar20 = lStack_f0;
          uVar45 = uStack_100;
          pfVar11 = pfStack_120;
          lStack_e8 = CONCAT44(lStack_e8._4_4_,iVar39);
          FUN_108b4584c(pfStack_120,0,lStack_118,pfStack_d8,lStack_f0,lVar38,uStack_100);
          fVar59 = fStack_15c;
          pfVar27 = pfVar27 + 4;
          uVar24 = CONCAT44(uStack_174,fStack_178);
          FUN_108b3e974(pfVar11,pfStack_d8,uVar24,fStack_15c,lVar20,uVar45,pfVar10[0x13]);
          pfVar14 = pfStack_f8;
          pfVar4 = pfStack_150;
          lVar38 = lStack_170;
          pfVar13 = pfStack_1b8;
          func_0x000108b4d58c(pfVar11,fVar59,pfStack_f8,uVar24,pfStack_150,lVar20);
          for (uVar32 = 0; iVar39 = (int)lStack_e8,
              uVar28 = (ulong)((uint)pfVar14 & ((int)(uint)pfVar14 >> 0x1f ^ 0xffffffffU)),
              pfVar30 = pfVar4, uVar32 != ((uint)lVar20 & ((int)(uint)lVar20 >> 0x1f ^ 0xffffffffU))
              ; uVar32 = uVar32 + 1) {
            for (; uVar28 != 0; uVar28 = uVar28 - 1) {
              *pfVar30 = *pfVar30 + (float)(uVar45 & 0xffffffff) * 0.5;
              pfVar30 = pfVar30 + 1;
            }
            pfVar4 = pfVar4 + lVar41;
          }
        }
        pfVar4 = pfStack_d8;
        uVar32 = uStack_1a8;
        func_0x000108b47164();
        func_0x000108b470c4();
        uVar37 = (uint)pfVar44;
        func_0x000108b471bc();
        if (NAN(*pfVar4)) goto LAB_108b44b90;
        uStack_1c4 = (uint)pfVar44;
        if ((int)lStack_f0 == 1) {
          bVar9 = (int)lVar38 == 2;
          pfVar11 = (float *)CONCAT44(uStack_174,fStack_178);
          if (bVar9) {
            uStack_c0 = 0;
          }
          uVar18 = (uint)bVar9;
          func_0x000108b470c4();
        }
        else {
          if (NAN(pfVar4[(int)uStack_128])) goto LAB_108b44b90;
          uVar18 = 0;
          func_0x000108b470c4();
          pfVar11 = (float *)CONCAT44(uStack_174,fStack_178);
        }
        pfVar44 = pfVar11;
        func_0x000108b471c8();
        fVar59 = pfVar10[0x11];
        func_0x000108b471e4();
        if (fVar59 != 0.0) {
          fVar50 = *(float *)(extraout_x10 + 0xf90);
          for (lVar20 = 2; lVar20 < (long)pfVar44; lVar20 = lVar20 + 1) {
            fVar47 = pfVar11[lVar20];
            if (*pfVar11 * 0.0001 <= pfVar11[lVar20]) {
              fVar47 = *pfVar11 * 0.0001;
            }
            if (fVar47 <= fVar50) {
              fVar47 = fVar50;
            }
            pfVar11[lVar20] = fVar47;
          }
        }
        func_0x000108b470c4();
        func_0x000108b4d58c();
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pfVar27 = (float *)((long)pfVar27 + (0x10 - (uVar32 + 0xf & 0xfffffffffffffff0)));
        psVar12 = (short *)((long)pfVar44 << 2);
        pfVar11 = pfVar27;
        psStack_220 = psVar12;
        _bzero();
        func_0x000108b47260();
        if ((extraout_w8_03 == 0) && (*(long *)(pfVar10 + 0x3c) != 0)) {
          func_0x000108b47204();
          pfVar44 = pfStack_f8;
          iVar34 = (int)extraout_x17;
          if (fVar59 == 0.0) {
            uVar28 = 0;
            uVar26 = 0;
            fVar59 = pfVar10[0x18];
            if ((int)fVar59 < 3) {
              fVar59 = 2.8026e-45;
            }
            uVar21 = (ulong)(uint)fVar59;
            uVar31 = (uint)lStack_f0;
            fVar50 = 0.0;
            fVar47 = 0.0;
            pfVar4 = extraout_x9_01;
            uVar45 = extraout_x17;
            for (; uVar37 = (uint)psVar12, uVar2 = uVar21, pfVar14 = pfVar4, psVar1 = psStack_110,
                uVar16 = extraout_w15 - (int)fVar59,
                uVar28 != (uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU)); uVar28 = uVar28 + 1) {
              while( true ) {
                pfVar11 = (float *)(ulong)uVar16;
                psVar12 = psVar1 + 1;
                if (uVar2 == 0) break;
                fVar48 = *pfVar14;
                fVar58 = 0.25;
                if (fVar48 <= -2.0 && fVar48 < 0.25) {
                  fVar58 = -2.0;
                }
                if (-2.0 < fVar48 && fVar48 < 0.25) {
                  fVar58 = fVar48;
                }
                fVar48 = fVar58 * 0.5;
                if (fVar58 <= 0.0) {
                  fVar48 = fVar58;
                }
                fVar50 = fVar50 + (float)((int)*psVar12 - (int)*psVar1) * fVar48;
                uVar26 = ((int)*psVar12 - (int)*psVar1) + uVar26;
                fVar47 = fVar47 + (float)(int)uVar16 * fVar48;
                uVar2 = uVar2 - 1;
                pfVar14 = pfVar14 + 1;
                psVar1 = psVar12;
                uVar16 = uVar16 + 2;
              }
              pfVar4 = pfVar4 + lVar41;
              uVar45 = uStack_100;
            }
            if ((int)uVar26 < 1) goto LAB_108b44b90;
            iVar34 = 1;
            psVar12 = psStack_110;
            do {
              psVar12 = psVar12 + 1;
              iVar34 = iVar34 + -1;
            } while (*psVar12 < psStack_110[uVar21] / 2);
            lVar20 = 0;
            iVar33 = 0;
            iVar40 = (int)fVar59 * uVar31 * ((int)fVar59 - 1U);
            fVar50 = fVar50 / (float)uVar26 + 0.2;
            fVar59 = (float)NEON_fminnm(((fVar47 * 6.0) / (float)(iVar40 + iVar40 * (int)fVar59)) *
                                        0.5,0x3cfdf3b6);
            if (fVar59 <= -0.031) {
              fVar59 = -0.031;
            }
            pfVar11 = extraout_x9_01;
            for (; uVar21 * 4 - lVar20 != 0; lVar20 = lVar20 + 4) {
              fVar47 = *pfVar11;
              if ((uVar31 == 2) && (fVar47 <= pfVar11[lVar41])) {
                fVar47 = pfVar11[lVar41];
              }
              fVar47 = (float)NEON_fminnm(fVar47,0);
              fVar47 = fVar47 - (fVar50 + (float)iVar34 * fVar59);
              if (0.25 < fVar47) {
                *(float *)((long)pfVar27 + lVar20) = fVar47 + -0.25;
                iVar33 = iVar33 + 1;
              }
              iVar34 = iVar34 + 1;
              pfVar11 = pfVar11 + 1;
            }
            if (iVar33 < 3) {
LAB_108b42e00:
              uVar37 = (uint)lStack_130;
            }
            else {
              fVar50 = fVar50 + 0.25;
              if (0.0 < fVar50) {
                _bzero(pfVar27);
                func_0x000108b47204();
                fVar50 = 0.0;
                fVar59 = 0.0;
                pfVar44 = pfStack_f8;
                uVar45 = extraout_x17_01;
                goto LAB_108b42e00;
              }
              uVar37 = (uint)lStack_130;
              pfVar11 = pfVar27;
              for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                fVar47 = 0.0;
                if (0.0 <= *pfVar11 + -0.25) {
                  fVar47 = *pfVar11 + -0.25;
                }
                *pfVar11 = fVar47;
                pfVar11 = pfVar11 + 1;
              }
            }
            fVar50 = fVar50 + 0.2;
            fVar59 = fVar59 * 64.0;
            goto LAB_108b42e18;
          }
LAB_108b42aa0:
          uStack_1b0 = CONCAT44(uStack_1b0._4_4_,1);
          fVar59 = 0.0;
          fVar50 = 0.0;
          fVar58 = 0.0;
          pfVar44 = pfStack_f8;
          uVar37 = (uint)lStack_130;
        }
        else {
          func_0x000108b47204();
          iVar34 = (int)extraout_x17_00;
          if (fVar59 != 0.0) {
            goto LAB_108b42aa0;
          }
          fVar59 = 0.0;
          fVar50 = 0.0;
          pfVar44 = pfStack_f8;
          uVar45 = extraout_x17_00;
          uVar37 = (uint)lStack_130;
LAB_108b42e18:
          iVar34 = (int)uVar45;
          fVar58 = 0.0;
          fVar47 = fVar58;
          if (uStack_1c4 != 0) {
            fVar47 = (float)(uVar45 & 0xffffffff) / 2.0;
          }
          pfVar4 = pfVar13 + (long)pfStack_108;
          fVar48 = -10.0;
          for (pfVar11 = pfStack_108; (long)pfVar11 < (long)pfVar44;
              pfVar11 = (float *)((long)pfVar11 + 1)) {
            fVar51 = fVar48 + -1.0;
            if (fVar48 + -1.0 <= *pfVar4 - fVar47) {
              fVar51 = *pfVar4 - fVar47;
            }
            fVar48 = fVar51;
            if (((int)lStack_f0 == 2) && (fVar51 <= pfVar4[lVar41] - fVar47)) {
              fVar48 = pfVar4[lVar41] - fVar47;
            }
            fVar58 = fVar58 + fVar48;
            pfVar4 = pfVar4 + 1;
          }
          fVar58 = fVar58 / (float)((int)pfVar44 - (int)pfStack_108) - pfVar10[0x3e];
          fVar47 = -1.5;
          if (-1.5 <= fVar58) {
            fVar47 = fVar58;
          }
          fVar58 = 3.0;
          if (fVar47 <= 3.0) {
            fVar58 = fVar47;
          }
          pfVar10[0x3e] = pfVar10[0x3e] + fVar58 * 0.02;
        }
        if ((uVar37 & 1) == 0) {
          _memcpy(pfStack_150,pfVar13,uVar32);
          func_0x000108b47204();
          pfVar44 = pfStack_f8;
          iVar34 = extraout_w17;
        }
        pfStack_1e8 = pfVar10 + lStack_168;
        pfVar11 = pfVar27;
        lStack_130 = lVar41;
        if (iVar34 != 0) {
          pfVar11 = pfStack_120;
          func_0x000108b470f4(pfStack_120);
          uVar37 = (uint)lStack_138;
          if (iVar39 < extraout_w8_04) {
            uVar37 = 1;
          }
          pfVar4 = pfVar27;
          iVar34 = extraout_w8_04;
          if ((uVar37 & 1) == 0) {
            if ((int)pfVar10[7] < 5 || (uStack_1b0 & 1) != 0) {
              pfVar42 = (float *)0x0;
            }
            else {
              afStack_78[0] = *pfStack_158;
              uVar32 = (ulong)(uint)afStack_78[0];
              if ((int)lStack_f0 == 1) {
                func_0x000108b471f0();
                pfVar42 = extraout_x9_02;
                for (lVar20 = extraout_x10_00; iVar34 = extraout_w8_05, lVar20 < (long)pfVar44;
                    lVar20 = lVar20 + 1) {
                  fVar47 = (float)uVar32 + -1.0;
                  if (fVar47 <= *pfVar42) {
                    fVar47 = *pfVar42;
                  }
                  uVar32 = (ulong)(uint)fVar47;
                  afStack_78[lVar20] = fVar47;
                  pfVar42 = pfVar42 + 1;
                }
              }
              else {
                if (afStack_78[0] <= pfStack_158[lVar41]) {
                  afStack_78[0] = pfStack_158[lVar41];
                }
                uVar32 = (ulong)(uint)afStack_78[0];
                func_0x000108b471f0();
                pfVar42 = extraout_x9_03;
                for (lVar20 = extraout_x10_01; iVar34 = extraout_w8_06, lVar20 < (long)pfVar44;
                    lVar20 = lVar20 + 1) {
                  fVar47 = (float)uVar32 + -1.0;
                  fVar48 = *pfVar42;
                  if (*pfVar42 <= pfVar42[lVar41]) {
                    fVar48 = pfVar42[lVar41];
                  }
                  if (fVar47 <= fVar48) {
                    fVar47 = fVar48;
                  }
                  uVar32 = (ulong)(uint)fVar47;
                  afStack_78[lVar20] = fVar47;
                  pfVar42 = pfVar42 + 1;
                }
              }
              pfVar42 = afStack_78;
              uVar37 = (int)pfVar44 - 2;
              lVar20 = lStack_f0;
              while (lStack_f0 = lVar20, -1 < (int)uVar37) {
                fVar47 = pfVar42[uVar37];
                func_0x000108b47194();
                extraout_x11[extraout_x9_04 & 0xffffffff] = fVar47;
                pfVar42 = extraout_x11;
                iVar34 = extraout_w8_07;
                lVar20 = lStack_f0;
                uVar37 = (int)extraout_x9_04 - 1;
              }
              lVar38 = 0;
              fVar47 = 0.0;
              pfVar42 = pfVar13;
              do {
                for (lVar43 = 2; lVar43 < (long)pfVar44 + -1; lVar43 = lVar43 + 1) {
                  fVar48 = 0.0;
                  if (0.0 <= pfVar42[lVar43]) {
                    fVar48 = pfVar42[lVar43];
                  }
                  fVar51 = 0.0;
                  if (0.0 <= afStack_78[lVar43]) {
                    fVar51 = afStack_78[lVar43];
                  }
                  fVar53 = 0.0;
                  if (0.0 <= fVar48 - fVar51) {
                    fVar53 = fVar48 - fVar51;
                  }
                  fVar47 = fVar47 + fVar53;
                }
                lVar38 = lVar38 + 1;
                pfVar42 = pfVar42 + lVar41;
              } while (lVar38 < lVar20);
              uVar37 = (uint)lVar20;
              if (1.0 < fVar47 / (float)(int)(((int)pfVar44 + -3) * uVar37)) {
                func_0x000108b47164();
                pfVar42 = pfStack_d8;
                func_0x000108b471bc();
                fVar57 = fStack_15c;
                pfVar4 = pfVar27 + 4;
                func_0x000108b471c8(pfVar11,pfVar42,CONCAT44(uStack_174,fStack_178),fStack_15c,
                                    lVar20);
                pfVar13 = pfStack_1b8;
                func_0x000108b471e4(pfVar11,fVar57);
                func_0x000108b4d58c();
                func_0x000108b4712c(0);
                pfVar42 = pfStack_150;
                for (uVar32 = extraout_x8_03;
                    uVar45 = (ulong)((uint)pfStack_f8 &
                                    ((int)(uint)pfStack_f8 >> 0x1f ^ 0xffffffffU)),
                    pfVar11 = pfVar42, uVar32 != (uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU));
                    uVar32 = uVar32 + 1) {
                  for (; uVar45 != 0; uVar45 = uVar45 - 1) {
                    *pfVar11 = *pfVar11 + (float)(extraout_x9_05 & 0xffffffff) * 0.5;
                    pfVar11 = pfVar11 + 1;
                  }
                  pfVar42 = pfVar42 + lVar41;
                }
                fStack_c4 = 0.2;
                func_0x000108b470f4();
                pfVar42 = (float *)0x1;
                fVar57 = 0.2;
                uStack_1c4 = uStack_1dc;
                lVar41 = lStack_130;
                iVar34 = extraout_w8_08;
              }
              else {
                pfVar42 = (float *)0x0;
              }
            }
          }
          pfVar11 = pfVar4;
          if (iVar34 <= iVar39) {
            func_0x000108b4a0a0(pfStack_e0,pfVar42,3);
            func_0x000108b470c4();
          }
        }
        iVar39 = (int)lStack_f0;
        uStack_224 = uVar18;
        func_0x000108b470d0((int)uStack_128 * iVar39);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lStack_138 = (long)pfVar11 - extraout_x8_04;
        FUN_108b3ea64();
        if (((int)fStack_18c < iVar39 * 0xf) || (func_0x000108b47260(), extraout_w8_09 != 0)) {
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        }
        else if ((int)pfVar10[7] < 2) {
          uStack_1b0 = (ulong)uStack_1b0._4_4_ << 0x20;
        }
        else {
          uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(uint)(fVar54 < 0.98 && pfVar10[0x11] == 0.0));
        }
        pfVar44 = pfStack_f8;
        lStack_1d0 = (long)(int)uStack_198;
        uVar32 = uStack_100;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar17 = (undefined4)uVar32;
        uVar32 = lVar41 * 4 + 0xfU & 0xfffffffffffffff0;
        pfVar11 = (float *)(((long)pfVar11 - extraout_x8_04) - uVar32);
        pfVar14 = pfVar11;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar38 = (long)pfVar11 - uVar32;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar20 = lVar38 - uVar32;
        fVar47 = pfVar10[0x10];
        uVar24 = *(undefined8 *)(extraout_x13_00 + 0x10);
        fVar48 = pfVar10[0xc];
        fVar51 = pfVar10[0xe];
        *(long *)(lVar20 + -0x10) = lVar38;
        *(long *)(lVar20 + -8) = lVar20;
        pfVar11 = pfStack_180;
        *(float **)(lVar20 + -0x20) = pfVar27;
        *(float **)(lVar20 + -0x18) = pfVar11;
        lStack_258 = lVar20;
        uStack_228 = extraout_w15_00;
        *(undefined4 *)(lVar20 + -0x28) = extraout_w15_00;
        *(int **)(lVar20 + -0x30) = &iStack_c8;
        *(undefined4 *)(lVar20 + -0x38) = uVar17;
        *(int *)(lVar20 + -0x34) = extraout_w14;
        *(short **)(lVar20 + -0x40) = psStack_110;
        *(float *)(lVar20 + -0x4c) = fVar48;
        *(float *)(lVar20 + -0x48) = fVar51;
        *(int *)(lVar20 + -0x50) = (int)pfVar42;
        *(undefined8 *)(lVar20 + -0x58) = uVar24;
        *(float *)(lVar20 + -0x60) = fVar47;
        pfVar27 = pfStack_108;
        pfVar4 = pfStack_158;
        pfVar11 = pfStack_108;
        pfStack_d8 = pfVar14;
        FUN_108b45a30(param_1,fVar54,pfVar13,pfStack_150);
        uStack_198 = lVar41 * 4;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar17 = uStack_c0;
        lStack_118 = lVar20 - uVar32;
        pfStack_150 = pfVar42;
        if ((int)uStack_1b0 == 0) {
          pfVar13 = extraout_x13_00;
          if (((int)pfVar27 == 0) || (iStack_cc == 0)) {
            func_0x000108b471e4();
            func_0x000108b47260();
            uVar18 = (uint)pfVar4;
            pfVar42 = pfStack_150;
            pfVar11 = pfStack_1b8;
            if ((extraout_w8_11 != 0) && (((int)fStack_18c < 0xf && (pfVar10[0x2f] != 2.8026e-45))))
            {
              puVar3 = extraout_x10_04;
              for (uVar32 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
                  pfVar27 = pfStack_150, uVar32 != 0; uVar32 = uVar32 - 1) {
                *puVar3 = 0;
                puVar3 = puVar3 + 1;
              }
              goto LAB_108b434b4;
            }
            puVar3 = extraout_x10_04;
            for (uVar32 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar32 != 0;
                uVar32 = uVar32 - 1) {
              *puVar3 = (int)pfStack_150;
              puVar3 = puVar3 + 1;
            }
          }
          else {
            func_0x000108b471e4();
            pfVar42 = pfStack_150;
            func_0x000108b4726c((uint)pfVar4 & ((int)(uint)pfVar4 >> 0x1f ^ 0xffffffffU));
            puVar3 = extraout_x10_03;
            for (lVar41 = extraout_x8_06; lVar41 != 0; lVar41 = lVar41 + -1) {
              *puVar3 = extraout_w9_01;
              puVar3 = puVar3 + 1;
            }
          }
          pfVar27 = (float *)0x0;
        }
        else {
          iVar39 = 0;
          if (extraout_w14 != 0) {
            iVar39 = 0x5000 / extraout_w14;
          }
          if (iVar39 < 0x4f) {
            iVar39 = 0x4e;
          }
          pfVar27 = *(float **)(extraout_x13_00 + 8);
          puVar5 = (undefined4 *)(lStack_118 + -0x10);
          *(long *)(lStack_118 + -8) = lVar38;
          *puVar5 = uVar17;
          fVar54 = fStack_15c;
          pfVar11 = (float *)(ulong)(iVar39 + 2);
          FUN_108b465fc(fVar57,pfVar27,fStack_15c,pfVar42,lStack_118,pfVar11,lStack_138,uStack_128,
                        uStack_100);
          pfVar13 = pfVar27;
          func_0x000108b4726c(lStack_118 + -4);
          uVar18 = (uint)extraout_x9_06;
          uVar32 = extraout_x9_06;
          puVar3 = extraout_x10_02;
          while (uVar18 != 0) {
            *puVar3 = *(undefined4 *)(extraout_x8_05 + (long)(int)fVar54 * 4);
            uVar18 = (int)uVar32 - 1;
            uVar32 = (ulong)uVar18;
            puVar3 = puVar3 + 1;
          }
          func_0x000108b470c4();
          pfVar4 = pfVar44;
        }
LAB_108b434b4:
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        func_0x000108b47184();
        pfVar25 = pfStack_e0;
        lVar20 = lStack_f0;
        pfVar30 = pfStack_108;
        uVar32 = extraout_x8_07 - extraout_x9_07;
        lVar41 = 0;
        pfVar44 = pfVar10 + (long)pfStack_108 + lStack_168 + 0x3f;
        pfVar14 = pfVar44 + (long)(int)lStack_188 * 3;
        uStack_1b0 = extraout_x15 * 4;
        pfVar11 = pfVar11 + (long)pfStack_108;
        uVar45 = 0x40000000;
        do {
          for (lVar38 = 0; (long)pfStack_108 + lVar38 < (long)pfVar4; lVar38 = lVar38 + 1) {
            if (ABS(pfVar11[lVar38] - pfVar44[lVar38]) < 2.0) {
              pfVar11[lVar38] = pfVar11[lVar38] + pfVar14[lVar38] * -0.25;
            }
          }
          lVar41 = lVar41 + 1;
          pfVar14 = pfVar14 + extraout_x15;
          pfVar44 = pfVar44 + extraout_x15;
          pfVar11 = pfVar11 + extraout_x15;
        } while (lVar41 < lStack_f0);
        fVar57 = pfVar10[4];
        fVar54 = pfVar10[7];
        *(float *)(uVar32 - 0xc) = pfVar10[0xf];
        *(undefined4 *)(uVar32 - 8) = uStack_228;
        *(uint *)(uVar32 - 0x10) = (uint)(3 < (int)fVar54);
        *(float **)(uVar32 - 0x18) = pfVar10 + 0x16;
        *(float *)(uVar32 - 0x1c) = fVar57;
        *(float *)(uVar32 - 0x20) = fStack_160;
        iVar40 = (int)lStack_f0;
        iVar33 = (int)uStack_100;
        *(int *)(uVar32 - 0x28) = iVar40;
        *(int *)(uVar32 - 0x24) = iVar33;
        *(float **)(uVar32 - 0x30) = pfStack_e0;
        uStack_1a8 = uVar32;
        FUN_108b4c578();
        fVar54 = fStack_18c;
        uVar18 = 0;
        uVar37 = 0;
        fVar57 = pfVar25[2];
        iVar39 = (int)pfVar25[6] + (int)LZCOUNT(pfVar25[8]) + -0x20;
        iVar34 = 4;
        if ((int)pfVar42 == 0) {
          iVar19 = 5;
        }
        else {
          iVar19 = iVar34;
          iVar34 = 2;
        }
        uVar26 = (uint)(iVar33 != 0 && iVar39 + iVar34 + 1U <= (uint)((int)fVar57 * 8));
        lVar41 = lStack_118;
        pfVar11 = pfStack_f8;
        for (pfVar42 = pfVar30; pfVar10 = pfStack_e0, (long)pfVar42 < (long)pfVar11;
            pfVar42 = (float *)((long)pfVar42 + 1)) {
          if ((int)fVar57 * 8 - uVar26 < (uint)(iVar39 + iVar34)) {
            *(uint *)(lVar41 + (long)pfVar42 * 4) = uVar18;
          }
          else {
            pfVar13 = pfStack_e0;
            func_0x000108b4a0a0(pfStack_e0,*(uint *)(lVar41 + (long)pfVar42 * 4) ^ uVar18);
            func_0x000108b47114(pfVar10[6]);
            iVar39 = extraout_w8_10 + -0x20;
            uVar18 = *(uint *)(extraout_x12_00 + (long)pfVar42 * 4);
            uVar37 = uVar18 | uVar37;
            lVar41 = extraout_x12_00;
            pfVar11 = extraout_x13_01;
          }
          iVar34 = iVar19;
        }
        func_0x000108b470c4();
        pfVar11 = pfStack_e0;
        pfVar42 = pfStack_140;
        iVar39 = (int)pfStack_150;
        lVar41 = extraout_x12_01;
        if (uVar26 == 0) {
          iVar33 = 0;
          iVar34 = iVar39 << 2;
          pfVar10 = extraout_x13_02;
        }
        else {
          iVar34 = (int)(((ulong)pfStack_150 & 0xffffffff) << 2);
          if (puStack_238[(long)(int)uVar37 + ((ulong)pfStack_150 & 0xffffffff) * 4] ==
              (puStack_238 + (long)(int)uVar37 + ((ulong)pfStack_150 & 0xffffffff) * 4)[2]) {
            iVar33 = 0;
            pfVar10 = extraout_x13_02;
          }
          else {
            pfVar13 = pfStack_e0;
            func_0x000108b471dc(pfStack_e0,pfVar27);
            func_0x000108b470c4();
            iVar33 = (int)pfVar27 << 1;
            lVar41 = extraout_x12_02;
            pfVar10 = pfStack_f8;
          }
        }
        for (pfVar27 = pfVar30; (long)pfVar27 < (long)pfVar10;
            pfVar27 = (float *)((long)pfVar27 + 1)) {
          *(int *)(lVar41 + (long)pfVar27 * 4) =
               (int)(char)(&UNK_10df8bcf4)
                          [(long)*(int *)(lVar41 + (long)pfVar27 * 4) +
                           (ulong)(uint)(iVar33 + iVar34) + uStack_100 * 8];
        }
        func_0x000108b47114(pfVar11[6]);
        iVar34 = (int)lStack_e8;
        if ((int)lStack_e8 < extraout_w8_12 + -0x1c) {
          pfVar42[0x15] = 2.8026e-45;
        }
        else {
          if (pfVar42[0x11] == 0.0) {
            if ((int)pfVar30 == 0) {
              if ((uStack_1c4 == 0) && (2 < (int)pfVar42[7] && iVar40 * 10 <= (int)fStack_160)) {
                *(long *)(uVar32 - 8) = lStack_258;
                *(int *)(uVar32 - 0x10) = iVar40;
                *(uint *)(uVar32 - 0xc) = uStack_1dc;
                FUN_108b3ef18();
                pfVar42[0x15] = SUB84(pfVar13,0);
              }
              else if (pfVar42[7] == 0.0) {
                pfVar13 = (float *)0x0;
                pfVar42[0x15] = 0.0;
              }
              else {
                pfVar13 = (float *)0x2;
                pfVar42[0x15] = 2.8026e-45;
              }
            }
            else {
              if (pfVar42[7] != 0.0) {
                if (iVar39 != 0) goto LAB_108b4383c;
                pfVar13 = (float *)0x3;
                goto LAB_108b43840;
              }
              pfVar13 = (float *)0x0;
              pfVar42[0x15] = 0.0;
            }
          }
          else {
            pfVar42[0x1a] = 0.0;
LAB_108b4383c:
            pfVar13 = (float *)0x2;
LAB_108b43840:
            pfVar42[0x15] = SUB84(pfVar13,0);
          }
          func_0x000108b4a0c4(pfVar11,pfVar13,&UNK_10df8bda2,5);
          func_0x000108b470c4();
        }
        if (pfVar42[0x11] != 0.0) {
          fVar57 = 1.12104e-44;
          if ((int)fVar54 < 0x1b) {
            fVar57 = (float)((int)fVar54 / 3);
          }
          *pfStack_d8 = fVar57;
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        func_0x000108b47184();
        lVar41 = extraout_x8_08 - extraout_x9_08;
        lStack_e8 = lVar41;
        func_0x000108b41884();
        func_0x000108b49c74();
        fVar57 = 0.0;
        iVar39 = 6;
        pfVar42 = pfVar30;
        while( true ) {
          pfVar27 = pfStack_e0;
          pfVar10 = pfStack_140;
          fVar54 = fStack_144;
          lVar38 = lStack_170;
          uVar18 = uStack_1ec;
          iVar33 = (int)pfVar11;
          iVar40 = (int)lVar20;
          if ((long)pfStack_f8 <= (long)pfVar30) break;
          fVar57 = 0.0;
          iVar33 = 0;
          func_0x000108b4712c(((int)psStack_110[(long)pfVar30 + 1] - (int)psStack_110[(long)pfVar30]
                              ) * iVar40);
          iVar40 = extraout_w8_13 << (ulong)(extraout_w9_02 & 0x1f);
          iVar19 = iVar40 * 8;
          if (iVar40 < 0x31) {
            iVar40 = 0x30;
          }
          if (iVar40 <= iVar19) {
            iVar19 = iVar40;
          }
          iVar40 = -extraout_w10_01;
          iVar15 = iVar39;
          for (; (pfVar42 = pfStack_e0, (int)pfVar11 + iVar15 * 8 < iVar34 * 8 + iVar40 &&
                 ((int)fVar57 < *(int *)(lStack_e8 + (long)pfVar30 * 4)));
              fVar57 = (float)((int)fVar57 + iVar19)) {
            fVar54 = pfStack_d8[(long)pfVar30];
            func_0x000108b4a0a0(pfStack_e0,iVar33 < (int)fVar54);
            func_0x000108b49c74();
            pfVar11 = pfVar42;
            if ((int)fVar54 <= iVar33) break;
            iVar33 = iVar33 + 1;
            iVar40 = iVar40 - iVar19;
            iVar15 = 1;
          }
          iVar19 = iVar39;
          if (iVar39 < 4) {
            iVar19 = 3;
          }
          if (iVar33 != 0) {
            iVar39 = iVar19 + -1;
          }
          pfStack_d8[(long)pfVar30] = fVar57;
          fVar57 = (float)-iVar40;
          pfVar30 = (float *)((long)pfVar30 + 1);
          pfVar42 = pfStack_108;
          lVar20 = lStack_f0;
        }
        uVar37 = (uint)uStack_100;
        fVar47 = SUB84(pfVar42,0);
        if (iVar40 == 2) {
          if (uVar37 != 0) {
            lVar43 = 0;
            lVar22 = *(long *)(pfStack_120 + 8);
            fVar51 = 1e-15;
            fVar48 = fVar51;
            while (lVar43 != 0xd) {
              iVar39 = (int)*(short *)(lVar22 + lVar43 * 2) << (ulong)(uVar37 & 0x1f);
              lVar43 = lVar43 + 1;
              pfVar11 = (float *)(lStack_138 + (long)iVar39 * 4);
              for (lVar29 = (long)iVar39;
                  lVar29 < (int)*(short *)(lVar22 + lVar43 * 2) << (ulong)(uVar37 & 0x1f);
                  lVar29 = lVar29 + 1) {
                fVar53 = pfVar11[(int)uStack_128];
                fVar56 = *pfVar11;
                fVar48 = fVar48 + ABS(fVar56) + ABS(fVar53);
                fVar51 = fVar51 + ABS(fVar56 + fVar53) + ABS(fVar56 - fVar53);
                pfVar11 = pfVar11 + 1;
              }
            }
            iVar39 = 5;
            if (uVar37 != 1) {
              iVar39 = 0xd;
            }
            iVar19 = (int)*(short *)(lVar22 + 0x1a) << (ulong)(uVar37 + 1 & 0x1f);
            uStack_bc = (uint)(fVar48 * (float)iVar19 < fVar51 * 0.707107 * (float)(iVar19 + iVar39)
                              );
          }
          uVar45 = (ulong)(uint)(float)((int)uStack_1ec / 1000);
          fVar48 = 1.5329838e-30;
          FUN_108b3e844(&UNK_10df8bda8,&UNK_10df8bdfc,0x15,pfStack_140[0x3b]);
          uVar37 = (uint)uStack_100;
          fVar51 = fVar47;
          if ((int)fVar47 <= (int)fVar48) {
            fVar51 = fVar48;
          }
          fVar48 = SUB84(pfStack_f8,0);
          if ((int)fVar51 <= (int)SUB84(pfStack_f8,0)) {
            fVar48 = fVar51;
          }
          pfVar10[0x3b] = fVar48;
        }
        iVar39 = (int)pfStack_f8;
        if (iVar33 + 0x30 <= iVar34 * 8 - (int)fVar57) {
          fStack_15c = fVar57;
          if (((int)fVar47 < 1) && (pfVar10[0x11] == 0.0)) {
            fVar57 = 4.0;
            if ((63999 < (int)uVar18) && (fVar57 = 5.0, uVar18 >> 7 < 0x271)) {
              fVar57 = (float)(uVar18 - 64000 >> 10);
              uVar45 = (ulong)(uint)fVar57;
              fVar57 = fVar57 * 0.0625 + 4.0;
            }
            pfVar11 = pfStack_1b8;
            fVar48 = fStack_c4;
            if (iVar40 == 2) {
              fStack_18c = fStack_c4;
              fVar54 = pfVar10[0x3b];
              psVar12 = *(short **)(pfStack_120 + 8);
              fVar46 = 0.0;
              lVar43 = 8;
              psVar1 = psVar12;
              fStack_160 = fVar57;
              do {
                func_0x000108b47138((long)*psVar1);
                func_0x000108b470e0();
                func_0x000108b47238();
                pfVar11 = pfStack_1b8;
                fVar46 = fVar46 + (float)uVar45;
                lVar43 = lVar43 + -1;
                psVar1 = psVar1 + 1;
              } while (lVar43 != 0);
              lStack_f0 = CONCAT44(lStack_f0._4_4_,fVar50);
              fVar46 = ABS(fVar46 * 0.125);
              fVar57 = 1.0;
              if (fVar46 <= 1.0) {
                fVar57 = fVar46;
              }
              psVar12 = psVar12 + 9;
              lVar43 = 8;
              fVar50 = fVar57;
              while (lVar43 < (int)fVar54) {
                func_0x000108b47138((long)psVar12[-1]);
                lVar43 = lVar43 + 1;
                func_0x000108b470e0();
                func_0x000108b47238();
                fVar46 = ABS(fVar46);
                if (fVar46 <= fVar50) {
                  fVar50 = fVar46;
                }
                psVar12 = psVar12 + 1;
              }
              fVar54 = 1.0;
              if (fVar50 <= 1.0) {
                fVar54 = fVar50;
              }
              dVar49 = (double)(1.001 - fVar57 * fVar57);
              _log();
              pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,0x3ecccccd);
              psStack_110 = (short *)CONCAT44(psStack_110._4_4_,fVar55);
              fVar55 = (float)(dVar49 * 1.4426950408889634) * 0.5;
              dVar52 = (double)(1.001 - fVar54 * fVar54);
              _log();
              if (fVar55 <= (float)(dVar52 * 1.4426950408889634)) {
                fVar55 = (float)(dVar52 * 1.4426950408889634);
              }
              fVar54 = (float)(dVar49 * 1.4426950408889634) * 0.75;
              fVar57 = -4.0;
              if (-4.0 <= fVar54) {
                fVar57 = fVar54;
              }
              fVar57 = fStack_160 + fVar57;
              fVar54 = pfVar10[0x3a] + 0.25;
              if (fVar55 * -0.5 <= pfVar10[0x3a] + 0.25) {
                fVar54 = fVar55 * -0.5;
              }
              pfVar10[0x3a] = fVar54;
              iVar39 = (int)pfStack_f8;
              fVar48 = fStack_18c;
              fVar55 = psStack_110._0_4_;
              fVar46 = pfStack_108._0_4_;
              fVar50 = (float)lStack_f0;
              uVar18 = uStack_1ec;
              fVar54 = fStack_144;
            }
            iVar34 = 0;
            uVar37 = iVar39 - 1;
            fVar51 = 0.0;
            do {
              iVar33 = -iVar39;
              for (lVar43 = 0; iVar33 = iVar33 + 2,
                  (uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU)) != (uint)lVar43;
                  lVar43 = lVar43 + 1) {
                fVar51 = fVar51 + (float)iVar33 *
                                  pfVar11[lVar43 + (long)(int)pfStack_120[2] * (long)iVar34];
              }
              iVar34 = iVar34 + 1;
            } while (iVar34 < iVar40);
            fVar56 = (fVar51 / (float)(int)(uVar37 * iVar40) + 1.0) / 6.0;
            fVar53 = -2.0;
            fVar51 = -2.0;
            if (-2.0 <= fVar56 || 2.0 < fVar56) {
              fVar51 = 2.0;
            }
            if (fVar56 <= 2.0 && -2.0 <= fVar56) {
              fVar51 = fVar56;
            }
            fVar57 = ((fVar57 - fVar51) - fVar59) + fVar48 * -2.0;
            if (*pfStack_180 != 0.0) {
              fVar59 = pfVar10[0x21] + 0.05 + pfVar10[0x21] + 0.05;
              if (-2.0 <= fVar59 || 2.0 < fVar59) {
                fVar53 = 2.0;
              }
              if (fVar59 <= 2.0 && -2.0 <= fVar59) {
                fVar53 = fVar59;
              }
              fVar57 = fVar57 - fVar53;
            }
            uVar37 = (int)(fVar57 + 0.5) & ((int)(fVar57 + 0.5) >> 0x1f ^ 0xffffffffU);
            if (9 < (int)uVar37) {
              uVar37 = 10;
            }
          }
          else {
            pfVar10[0x3a] = 0.0;
            uVar37 = 5;
          }
          func_0x000108b4a0c4(pfVar27,uVar37,&UNK_10df8be50,7);
          pfVar11 = pfVar27;
          func_0x000108b49c74();
          iVar33 = (int)pfVar11;
          uVar37 = (uint)uStack_100;
          fVar57 = fStack_15c;
        }
        fVar59 = (float)(((int)fVar57 + iVar33 + 0x3f >> 6) + 2);
        fVar57 = (float)((int)fVar57 + iStack_214 >> 6);
        fVar48 = fVar59;
        if ((int)fVar59 <= (int)fVar57) {
          fVar48 = fVar57;
        }
        if (fVar47 == 0.0) {
          fVar48 = fVar59;
        }
        cVar6 = SBORROW4(iStack_1e0,1);
        cVar7 = iStack_1e0 + -1 < 0;
        if (0 < iStack_1e0) {
          fVar57 = pfStack_120[10];
          uVar26 = (uint)lStack_1f8;
          fVar59 = (float)(0x4fb >> (ulong)(uVar26 & 0x1f));
          if ((int)fVar59 <= (int)fVar54) {
            fVar54 = fVar59;
          }
          uVar31 = (iStack_1e0 + iVar40 * -0x48) - 0x20;
          uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
          if (fVar47 == 0.0) {
            uVar31 = iStack_1e0 + iStack_1bc * -8;
          }
          fVar59 = pfVar10[0xe];
          if (fVar59 != 0.0) {
            uVar31 = ((int)pfVar10[0x37] >> ((int)fVar57 - uVar37 & 0x1f)) + uVar31;
          }
          if (fVar47 == 0.0) {
            fVar53 = pfVar10[0x3b];
            lVar43 = *(long *)(pfStack_120 + 8);
            fVar51 = pfStack_120[2];
            if (pfVar10[0x18] != 0.0) {
              fVar51 = pfVar10[0x18];
            }
            iVar39 = (int)*(short *)(lVar43 + (long)(int)fVar51 * 2);
            if (iVar40 == 2) {
              fVar56 = fVar53;
              if ((int)fVar51 <= (int)fVar53) {
                fVar56 = fVar51;
              }
              iVar39 = *(short *)(lVar43 + (long)(int)fVar56 * 2) + iVar39;
            }
            fVar56 = pfVar10[0x11];
            iVar39 = iVar39 << (ulong)(uVar37 & 0x1f);
            iVar34 = iVar39 << 3;
            uVar26 = uVar31;
            if ((*pfStack_180 != 0.0) && (pfVar10[0x23] < 0.4)) {
              uVar26 = uVar31 - (int)((fVar46 - pfVar10[0x23]) * (float)iVar34);
            }
            uVar16 = (uint)uStack_100;
            if (iVar40 == 2) {
              if ((int)fVar51 <= (int)fVar53) {
                fVar53 = fVar51;
              }
              iVar19 = ((int)*(short *)(lVar43 + (long)(int)fVar53 * 2) << (ulong)(uVar16 & 0x1f)) -
                       (int)fVar53;
              fVar51 = (float)NEON_fminnm(pfVar10[0x3a],0x3f800000);
              fVar46 = (((float)iVar19 * 0.8) / (float)iVar39) * (float)(int)uVar26;
              fVar51 = (fVar51 + -0.1) * (float)(iVar19 * 8);
              if (fVar51 <= fVar46) {
                fVar46 = fVar51;
              }
              uVar26 = uVar26 - (int)fVar46;
            }
            lVar22 = *(long *)(pfVar10 + 0x3c);
            iStack_c8 = iStack_c8 + (-0x13 << (ulong)(uVar16 & 0x1f)) + uVar26;
            iStack_c8 = iStack_c8 + (int)((fStack_c4 + -0.044) * (float)iStack_c8);
            if ((fVar56 == 0.0) && (*pfStack_180 != 0.0)) {
              fVar46 = -0.12;
              if (0.0 <= pfVar10[0x20] + -0.15) {
                fVar46 = pfVar10[0x20] + -0.15 + -0.12;
              }
              iVar39 = 0;
              if (iStack_23c == 0) {
                iVar39 = (int)((float)iVar34 * 0.8);
              }
              iStack_c8 = iStack_c8 + iVar39 + (int)((float)iVar34 * 1.2 * fVar46);
            }
            iVar39 = iStack_c8 + (int)(fVar50 * (float)iVar34);
            iVar34 = iStack_c8 / 4;
            if (iStack_c8 / 4 <= iVar39) {
              iVar34 = iVar39;
            }
            if (fVar56 == 0.0 && lVar22 != 0) {
              iStack_c8 = iVar34;
            }
            iVar34 = (int)((float)param_1 *
                          (float)(iVar40 * ((int)*(short *)(lVar43 + (long)(int)pfStack_120[2] * 2 +
                                                           -4) << (ulong)(uVar16 & 0x1f)) * 8));
            iVar39 = iStack_c8 >> 2;
            if (iStack_c8 >> 2 <= iVar34) {
              iVar39 = iVar34;
            }
            if (iVar39 <= iStack_c8) {
              iStack_c8 = iVar39;
            }
            if (fVar59 != 0.0 && (fVar56 != 0.0 || lVar22 == 0)) {
              iStack_c8 = uVar31 + (int)((float)(int)(iStack_c8 - uVar31) * 0.67);
            }
            if ((fStack_c4 < 0.2) && (lVar22 == 0)) {
              fVar46 = 0.0;
              if ((int)uVar18 < 0x17701) {
                uVar18 = 96000 - uVar18;
                if (31999 < uVar18) {
                  uVar18 = 32000;
                }
                fVar46 = (float)uVar18 * 3.1e-06;
              }
              iStack_c8 = iStack_c8 + (int)(fVar58 * fVar46 * (float)iStack_c8);
            }
            iVar39 = uVar31 * 2;
            if (iStack_c8 <= (int)(uVar31 * 2)) {
              iVar39 = iStack_c8;
            }
          }
          else {
            uVar18 = 0x60 >> (ulong)(uVar26 & 0x1f);
            if (99 < (int)pfVar10[0x30]) {
              uVar18 = 0;
            }
            uVar26 = 0x90 >> (ulong)(uVar26 & 0x1f);
            if ((int)pfVar10[0x30] < 0x65) {
              uVar26 = 0;
            }
            iVar39 = ((uVar18 + uVar31) - uVar26) + (int)((fStack_c4 + -0.25) * 400.0);
            iVar34 = iVar39;
            if (iVar39 < 0x191) {
              iVar34 = 400;
            }
            if (0.7 < fStack_c4) {
              iVar39 = iVar34;
            }
          }
          fVar46 = (float)(iVar39 + iVar33 + 0x20 >> 6);
          if ((int)fVar48 <= (int)fVar46) {
            fVar48 = fVar46;
          }
          fVar46 = fVar54;
          if ((int)fVar48 <= (int)fVar54) {
            fVar46 = fVar48;
          }
          iVar39 = (iVar39 + iVar33) - iStack_1e0;
          iVar34 = (int)fVar46 << 6;
          if (uStack_190 == 0) {
            fVar46 = 2.8026e-45;
            iVar39 = 0;
            iVar34 = 0x80;
          }
          fVar50 = pfVar10[0x38];
          if ((int)fVar50 < 0x3ca) {
            pfVar10[0x38] = (float)((int)fVar50 + 1);
            fVar50 = 1.0 / (float)((int)fVar50 + 0x15);
          }
          else {
            fVar50 = 0.001;
          }
          if (fVar59 != 0.0) {
            fVar59 = (float)((int)pfVar10[0x35] + (iVar34 - iStack_1e0));
            fVar57 = (float)((int)pfVar10[0x36] +
                            (int)(fVar50 * (float)((iVar39 << (ulong)((int)fVar57 - uVar37 & 0x1f))
                                                  - ((int)pfVar10[0x37] + (int)pfVar10[0x36]))));
            pfVar10[0x35] = fVar59;
            pfVar10[0x36] = fVar57;
            pfVar10[0x37] = (float)-(int)fVar57;
            if ((int)fVar59 < 0) {
              uVar18 = (uint)-(int)fVar59 >> 6;
              if (uStack_190 == 0) {
                uVar18 = 0;
              }
              fVar46 = (float)(uVar18 + (int)fVar46);
              pfVar10[0x35] = 0.0;
            }
          }
          cVar6 = SBORROW4((int)fVar54,(int)fVar46);
          cVar7 = (int)fVar54 - (int)fVar46 < 0;
          if ((int)fVar46 <= (int)fVar54) {
            fVar54 = fVar46;
          }
          FUN_108b4a30c(pfVar27,fVar54);
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        func_0x000108b47210();
        func_0x000108b47120();
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        func_0x000108b47120(lVar41 - extraout_x12_03);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        psVar12 = (short *)(lVar41 - extraout_x12_04);
        pfVar11 = pfVar27;
        func_0x000108b49c74();
        fVar57 = 0.0;
        fVar46 = SUB84(pfVar11,0);
        iVar39 = ~(uint)fVar46 + (int)fVar54 * 0x40;
        if ((int)pfStack_150 == 0) {
          iVar34 = 0;
        }
        else {
          iVar34 = 0;
          func_0x000108b4712c();
          cVar6 = SBORROW4(extraout_w9_03,2);
          cVar7 = (int)(extraout_w9_03 - 2) < 0;
          iVar39 = extraout_w8_14;
          fVar57 = extraout_w10_02;
          if (1 < extraout_w9_03) {
            cVar6 = SBORROW4(extraout_w8_14,iStack_22c);
            cVar7 = extraout_w8_14 - iStack_22c < 0;
            fVar57 = (float)(uint)(iStack_22c <= extraout_w8_14);
            iVar34 = 8;
            if (extraout_w8_14 < iStack_22c) {
              iVar34 = 0;
            }
          }
        }
        fStack_15c = fVar57;
        if (*pfStack_180 == 0.0) {
          fVar57 = (float)((int)pfStack_f8 + -1);
        }
        else {
          func_0x000108b47280(iVar39 - iVar34);
          if (cVar7 == cVar6) {
            func_0x000108b47280();
            if (cVar7 == cVar6) {
              func_0x000108b47280();
              if (cVar7 == cVar6) {
                func_0x000108b47280();
                fVar59 = 2.66247e-44;
                if (cVar7 == cVar6) {
                  fVar59 = 2.8026e-44;
                }
              }
              else {
                fVar59 = 2.52234e-44;
              }
            }
            else {
              fVar59 = 2.24208e-44;
            }
          }
          else {
            fVar59 = 1.82169e-44;
          }
          fVar57 = pfVar10[0x27];
          if ((int)pfVar10[0x27] <= (int)fVar59) {
            fVar57 = fVar59;
          }
        }
        fStack_160 = (float)((int)fVar54 << 6);
        if (pfVar10[0x11] != 0.0) {
          fVar57 = 1.4013e-45;
        }
        *(float *)(psVar12 + -10) = pfVar10[0x18];
        *(float *)(psVar12 + -8) = fVar57;
        psVar12[-0xc] = 1;
        psVar12[-0xb] = 0;
        *(float **)(psVar12 + -0x10) = pfVar27;
        func_0x000108b4712c();
        *(int *)(psVar12 + -0x14) = iVar40;
        *(undefined4 *)(psVar12 + -0x12) = extraout_w9_04;
        *(short **)(psVar12 + -0x18) = psVar12;
        *(long *)(psVar12 + -0x1c) = lStack_f0;
        *(float **)(psVar12 + -0x24) = afStack_78;
        *(float **)(psVar12 + -0x20) = pfStack_108;
        *(undefined4 *)(psVar12 + -0x28) = extraout_w8_15;
        psStack_110 = psVar12;
        func_0x000108b470c4();
        FUN_108b4d718();
        pfVar13 = pfStack_e0;
        pfVar44 = pfStack_f8;
        pfVar27 = pfStack_120;
        pfVar11 = pfStack_140;
        fVar59 = pfVar10[0x18];
        fVar57 = fVar46;
        if (fVar59 != 0.0) {
          fVar57 = (float)((int)fVar59 - 1U);
          if ((int)((int)fVar59 - 1U) <= (int)fVar46) {
            fVar57 = fVar46;
          }
          if ((int)fVar59 + 1 < (int)fVar57) {
            fVar57 = (float)((int)fVar59 + 1);
          }
        }
        pfStack_140[0x18] = fVar57;
        *(int *)(psVar12 + -8) = iVar40;
        fStack_144 = fVar54;
        FUN_108b4ce9c(pfStack_120,pfVar42,pfStack_f8,pfStack_158,uStack_1a8,0,lStack_f0,pfStack_e0);
        _bzero(pfStack_210,uStack_1d8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        func_0x000108b47184();
        lVar41 = extraout_x8_09 - extraout_x9_09;
        fVar54 = pfVar11[0x15];
        fVar59 = pfVar11[0x3b];
        fVar50 = pfVar11[7];
        fVar57 = pfVar11[0x12];
        *(float *)(lVar41 + -0xc) = pfVar11[0x13];
        *(float *)(lVar41 + -8) = fVar57;
        *(float *)(lVar41 + -0x10) = fVar50;
        *(float **)(lVar41 + -0x18) = pfVar11 + 0x14;
        *(float *)(lVar41 + -0x1c) = fVar46;
        *(int *)(lVar41 + -0x20) = (int)uStack_100;
        *(float **)(lVar41 + -0x28) = pfVar13;
        *(int *)(lVar41 + -0x30) = (int)fStack_160 - iVar34;
        *(float *)(lVar41 + -0x2c) = afStack_78[0];
        *(long *)(lVar41 + -0x38) = lStack_118;
        *(uint *)(lVar41 + -0x40) = uStack_bc;
        *(float *)(lVar41 + -0x3c) = fVar59;
        *(float *)(lVar41 + -0x44) = fVar54;
        *(uint *)(lVar41 + -0x48) = uStack_1c4;
        func_0x000108b47260();
        *(undefined8 *)(lVar41 + -0x50) = extraout_x8_10;
        FUN_108b3f1f4(1,pfVar27,pfVar42,pfVar44);
        if (fStack_15c != 0.0) {
          FUN_108b4a1a0(pfVar13,(int)pfVar11[0x1e] < 2,1);
        }
        *(int *)(lVar41 + -8) = iVar40;
        *(float **)(lVar41 + -0x10) = pfVar13;
        func_0x000108b470c4();
        pfVar4 = pfStack_f8;
        param_3 = pfStack_158;
        uVar32 = uStack_1a8;
        pfVar14 = pfVar42;
        FUN_108b4d050();
        lVar22 = lStack_130;
        lVar43 = lStack_188;
        pfVar44 = pfStack_1a0;
        pfVar27 = pfStack_208;
        lVar41 = 0;
        uVar18 = (uint)lStack_188;
        pfVar10 = pfVar11 + (long)pfVar42 + lStack_168 + (long)(int)uVar18 * 3 + 0x3f;
        param_1 = 0xbf000000;
        pfVar30 = pfVar42;
        pfVar25 = pfVar10;
        do {
          for (; (long)pfVar30 < (long)pfVar4; pfVar30 = (float *)((long)pfVar30 + 1)) {
            fVar54 = *(float *)(uVar32 + (long)pfVar30 * 4);
            fVar57 = -0.5;
            if (-0.5 <= fVar54 || 0.5 < fVar54) {
              fVar57 = 0.5;
            }
            if (fVar54 <= 0.5 && -0.5 <= fVar54) {
              fVar57 = fVar54;
            }
            *pfVar10 = fVar57;
            pfVar10 = pfVar10 + 1;
          }
          lVar41 = lVar41 + 1;
          pfVar10 = (float *)((long)pfVar25 + uStack_1b0);
          uVar32 = uVar32 + uStack_1b0;
          pfVar30 = pfVar42;
          pfVar25 = pfVar10;
        } while (lVar41 < lVar20);
        if ((uStack_190 & 1) == 0) {
          pfVar42 = param_3;
          for (uVar32 = (ulong)((uint)lStack_1d0 & ((int)(uint)lStack_1d0 >> 0x1f ^ 0xffffffffU));
              uVar32 != 0; uVar32 = uVar32 - 1) {
            *pfVar42 = -28.0;
            pfVar42 = pfVar42 + 1;
          }
        }
        pfVar11[0x1b] = fStack_b4;
        pfVar11[0x1c] = fVar55;
        pfVar11[0x1d] = fStack_1c0;
        if (uStack_224 != 0) {
          pfVar14 = param_3;
          _memcpy(param_3 + lStack_130,param_3,uStack_198);
        }
        if ((int)pfStack_150 == 0) {
          _memcpy(pfVar44,pfVar27,uStack_1d8);
          _memcpy(pfVar27,param_3,uStack_1d8);
        }
        else {
          pfVar42 = param_3;
          for (uVar32 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); param_3 = pfVar14,
              uVar32 != 0; uVar32 = uVar32 - 1) {
            fVar57 = pfVar42[lVar43];
            if (*pfVar42 <= pfVar42[lVar43]) {
              fVar57 = *pfVar42;
            }
            param_1 = (ulong)(uint)fVar57;
            pfVar42[lVar43] = fVar57;
            pfVar42 = pfVar42 + 1;
          }
        }
        fVar57 = fStack_144;
        lVar20 = 0;
        lVar41 = (long)(psStack_220 + lStack_168 * 2) + (long)pfVar11 + 0xfc;
        lVar29 = lVar41 + lVar43 * 4;
        lVar43 = lVar41 + lVar43 * 8;
        pfVar42 = pfStack_1e8;
        do {
          for (lVar36 = 0;
              (ulong)((uint)fVar47 & ((int)fVar47 >> 0x1f ^ 0xffffffffU)) << 2 != lVar36;
              lVar36 = lVar36 + 4) {
            *(undefined4 *)((long)pfVar42 + lVar36 + 0xfc) = 0;
            *(undefined4 *)((long)pfVar44 + lVar36) = 0xc1e00000;
            *(undefined4 *)((long)pfVar27 + lVar36) = 0xc1e00000;
          }
          for (lVar36 = 0; (long)pfStack_f8 + lVar36 < lVar22; lVar36 = lVar36 + 1) {
            *(undefined4 *)(lVar41 + lVar36 * 4) = 0;
            *(undefined4 *)(lVar43 + lVar36 * 4) = 0xc1e00000;
            *(undefined4 *)(lVar29 + lVar36 * 4) = 0xc1e00000;
          }
          lVar20 = lVar20 + 1;
          pfVar27 = (float *)((long)pfVar27 + uStack_1b0);
          pfVar44 = (float *)((long)pfVar44 + uStack_1b0);
          pfVar42 = (float *)((long)pfVar42 + uStack_1b0);
          lVar29 = lVar29 + uStack_1b0;
          lVar43 = lVar43 + uStack_1b0;
          lVar41 = lVar41 + uStack_1b0;
        } while (lVar20 < lVar38);
        if (((uint)((int)pfStack_150 == 0) & (uStack_1fc ^ 0xffffffff)) == 0) {
          fVar54 = (float)((int)pfVar11[0x1e] + 1);
        }
        else {
          fVar54 = 0.0;
        }
        pfVar11[0x1e] = fVar54;
        pfVar11[0x14] = pfVar13[8];
        FUN_108b4a364(pfVar13);
        bVar8 = pfVar13[0xc] == 0.0;
        if (!bVar8) {
          fVar57 = -NAN;
        }
        pfVar11 = (float *)(ulong)(uint)fVar57;
        goto LAB_108b44738;
      }
      goto LAB_108b44b90;
    }
    pfVar11 = (float *)0xffffffff;
  }
LAB_108b44738:
  uVar37 = (uint)param_3;
  func_0x000108b470a0(uStack_10);
  if (bVar8) {
    func_0x000108b472dc();
    return param_1;
  }
  ___stack_chk_fail();
LAB_108b44b90:
  _abort();
  fVar57 = 0.0;
  fVar54 = 0.0;
  for (uVar32 = (ulong)(uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU)); uVar32 != 0;
      uVar32 = uVar32 - 1) {
    fVar55 = *pfVar11;
    if (fVar57 <= fVar55) {
      fVar57 = fVar55;
    }
    if (fVar55 <= fVar54) {
      fVar54 = fVar55;
    }
    pfVar11 = pfVar11 + 1;
  }
  if (fVar57 <= -fVar54) {
    fVar57 = -fVar54;
  }
  return (ulong)(uint)fVar57;
code_r0x000108b41c50:
  iVar39 = iVar39 + 8;
  uVar32 = uVar32 + 1;
  puVar35 = puVar35 + 8;
  goto LAB_108b41c38;
}



/* Entry: 108b44b94; end: 108b44bcf;  */

float FUN_108b44b94(float *param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  fVar3 = 0.0;
  for (uVar1 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    fVar4 = *param_1;
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    param_1 = param_1 + 1;
  }
  if (fVar2 <= -fVar3) {
    fVar2 = -fVar3;
  }
  return fVar2;
}



/* Entry: 108b44bd0; end: 108b44d53;  */

float * FUN_108b44bd0(undefined8 param_1,double param_2,float *param_3,int param_4,ulong param_5,
                     float *param_6,undefined4 *param_7,ulong param_8,undefined4 *param_9)

{
  bool bVar1;
  undefined1 uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  uint uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar19;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined4 *puVar20;
  long extraout_x8_05;
  long lVar21;
  long extraout_x8_06;
  long extraout_x8_07;
  int iVar22;
  float *pfVar23;
  undefined8 uVar24;
  float *pfVar25;
  int *piVar26;
  long extraout_x12;
  long extraout_x12_00;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long unaff_x24;
  int iVar33;
  ulong unaff_x25;
  long lVar34;
  undefined8 unaff_x26;
  int iVar35;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar36;
  float fVar37;
  double dVar38;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_210 [8];
  float afStack_208 [50];
  float afStack_140 [34];
  undefined8 uStack_b8;
  float afStack_b0 [2];
  ulong uStack_a8;
  float afStack_a0 [2];
  ulong auStack_98 [5];
  long alStack_70 [2];
  float afStack_60 [2];
  undefined8 uStack_58;
  
  uVar19 = param_5;
  puVar12 = param_7;
  func_0x000108b470b4();
  uVar18 = (uint)uVar19;
  uStack_58 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(uVar19 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar19 & 0xffffffff) << 2) + 0xf &
             0xfffffffffffffff0);
  lVar34 = -extraout_x8_00;
  pfVar28 = (float *)((long)afStack_60 + lVar34);
  uVar19 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
  pfVar29 = pfVar28;
  if (param_4 == 2) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      param_2 = (double)(ulong)(uint)*param_3;
      *pfVar29 = *param_3 + param_3[(int)param_5];
      pfVar29 = pfVar29 + 1;
      param_3 = param_3 + 1;
    }
  }
  else {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pfVar29 = *param_3;
      pfVar29 = pfVar29 + 1;
      param_3 = param_3 + 1;
    }
  }
  uVar32 = 1;
  pfVar4 = afStack_60;
  uVar6 = 1;
  pfVar3 = pfVar28;
  uVar19 = param_5;
  FUN_108b46e8c();
  uVar18 = (int)param_7 / 3000;
  pfVar29 = (float *)(ulong)uVar18;
  while( true ) {
    uVar5 = (uint)uVar6;
    uVar30 = (uint)uVar32;
    uVar2 = uVar30 == uVar18;
    if (!(bool)uVar2 && (int)uVar18 <= (int)uVar30) break;
    if (((int)pfVar3 == 0) &&
       ((param_2 = (double)(ulong)(uint)afStack_60[1], afStack_60[0] <= 1.0 ||
        (0.0 <= afStack_60[1])))) goto LAB_108b44cbc;
    uVar32 = (ulong)(uVar30 << 1);
    pfVar4 = afStack_60;
    pfVar3 = pfVar28;
    uVar19 = param_5;
    uVar6 = uVar32;
    FUN_108b46e8c();
  }
  if ((int)pfVar3 == 0) {
LAB_108b44cbc:
    param_2 = (double)(ulong)(uint)afStack_60[1];
    fVar36 = afStack_60[0] * afStack_60[0] + afStack_60[1] * 3.999999;
    uVar2 = fVar36 == 0.0;
    if (0.0 <= fVar36) goto LAB_108b44d04;
    *param_6 = -afStack_60[1];
    dVar38 = (double)(afStack_60[0] * 0.5);
    _acos();
    param_2 = (double)uVar32;
    fVar36 = (float)(dVar38 / param_2);
  }
  else {
LAB_108b44d04:
    *param_6 = 0.0;
    fVar36 = -1.0;
  }
  fVar17 = SUB84(param_2,0);
  func_0x000108b470a0(uStack_58);
  if ((bool)uVar2) {
    return pfVar3;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)afStack_b0 + lVar34) = unaff_x26;
  *(ulong *)((long)&uStack_a8 + lVar34) = unaff_x25;
  *(long *)((long)afStack_a0 + lVar34) = unaff_x24;
  *(ulong *)((long)auStack_98 + lVar34) = uVar32;
  *(float **)((long)auStack_98 + lVar34 + 8) = pfVar29;
  *(float **)((long)auStack_98 + lVar34 + 0x10) = pfVar28;
  *(ulong *)((long)auStack_98 + lVar34 + 0x18) = param_5;
  *(float **)((long)auStack_98 + lVar34 + 0x20) = param_6;
  *(undefined1 **)((long)alStack_70 + lVar34) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_70 + lVar34 + 8) = FUN_108b44d54;
  func_0x000108b470b4();
  uVar18 = (uint)uVar19;
  *(undefined8 *)((long)&uStack_b8 + lVar34) = extraout_x8_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-(uVar19 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar19 & 0xffffffff) << 2);
  pfVar25 = (float *)((long)afStack_140 + (lVar34 - extraout_x12) + 0x80);
  uVar19 = 0;
  pfVar23 = (float *)0x0;
  *param_9 = 0;
  fVar37 = 0.03125;
  if ((int)param_8 == 0) {
    fVar37 = 0.0625;
  }
  uVar30 = (int)uVar18 / 2;
  iVar35 = uVar30 * 6 + -0x66;
  lVar21 = (ulong)(uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU)) << 2;
  lVar7 = 0x42800000;
  uVar16 = 0x42fe0000;
  for (; iVar22 = (int)pfVar23, uVar19 != (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
      uVar19 = uVar19 + 1) {
    fVar39 = 0.0;
    fVar40 = 0.0;
    for (lVar27 = 0; (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)) << 2 != lVar27;
        lVar27 = lVar27 + 4) {
      fVar41 = *(float *)((long)pfVar3 + lVar27);
      fVar42 = fVar39 * 0.5;
      fVar39 = fVar41 - fVar40;
      *(float *)((long)pfVar25 + lVar27) = fVar40 + fVar41;
      fVar40 = (fVar40 - fVar41) + fVar42;
    }
    pfVar25[6] = 0.0;
    pfVar25[7] = 0.0;
    pfVar25[4] = 0.0;
    pfVar25[5] = 0.0;
    pfVar25[10] = 0.0;
    pfVar25[0xb] = 0.0;
    pfVar25[8] = 0.0;
    pfVar25[9] = 0.0;
    fVar40 = 0.0;
    fVar39 = 0.0;
    pfVar25[2] = 0.0;
    pfVar25[3] = 0.0;
    pfVar25[0] = 0.0;
    pfVar25[1] = 0.0;
    pfVar29 = pfVar25 + 1;
    for (lVar27 = 0; lVar21 != lVar27; lVar27 = lVar27 + 4) {
      fVar42 = *pfVar29 * *pfVar29 + pfVar29[-1] * pfVar29[-1];
      fVar40 = fVar40 + fVar42;
      fVar39 = fVar42 + fVar39 * (1.0 - fVar37);
      *(float *)((long)pfVar25 + lVar27) = fVar37 * fVar39;
      pfVar29 = pfVar29 + 2;
    }
    fVar42 = 0.0;
    pfVar28 = (float *)(ulong)uVar30;
    fVar39 = 0.0;
    while (0 < (int)pfVar28) {
      pfVar29 = pfVar25 + (long)pfVar28;
      pfVar28 = (float *)((long)pfVar28 - 1);
      fVar42 = pfVar29[-1] + fVar42 * 0.875;
      fVar41 = fVar42 * 0.125;
      pfVar29[-1] = fVar41;
      if (fVar39 <= fVar41) {
        fVar39 = fVar41;
      }
    }
    if ((NAN(*pfVar25)) ||
       (fVar40 = (float)(int)uVar30 / (SQRT(fVar40 * fVar39 * 0.5 * (float)(int)uVar30) + 1e-15),
       NAN(fVar40))) {
      _abort();
      goto LAB_108b4509c;
    }
    iVar33 = 0;
    for (pfVar29 = (float *)0xc; (long)pfVar29 < (long)(int)(uVar30 - 5); pfVar29 = pfVar29 + 1) {
      fVar39 = fVar40 * 64.0 * (pfVar25[(long)pfVar29] + 1e-15);
      fVar42 = (float)(int)fVar39;
      uVar31 = (uint)(fVar42 < 0.0);
      if (127.0 < fVar42) {
        uVar31 = 1;
      }
      unaff_x25 = (ulong)uVar31;
      lVar27 = 0;
      if (fVar42 >= 0.0 || 127.0 < fVar42) {
        lVar27 = 0x7f;
      }
      unaff_x24 = (long)(int)fVar39;
      if (uVar31 == 0) {
        lVar27 = unaff_x24;
      }
      uVar32 = (ulong)(byte)(&UNK_10df8be5b)[lVar27];
      iVar33 = iVar33 + (uint)(byte)(&UNK_10df8be5b)[lVar27];
    }
    uVar31 = 0;
    if (iVar35 != 0) {
      uVar31 = (iVar33 << 8) / iVar35;
    }
    pfVar28 = (float *)(ulong)uVar31;
    if (iVar22 < (int)uVar31) {
      *puVar12 = (int)uVar19;
      pfVar23 = pfVar28;
    }
    pfVar3 = (float *)((long)pfVar3 + extraout_x8_02);
  }
  fVar37 = 0.026;
  uVar18 = (uint)(0.026 <= fVar36);
  if (fVar17 <= 0.98) {
    uVar18 = 1;
  }
  iVar35 = iVar22;
  if (uVar18 == 0) {
    iVar35 = 0;
  }
  uVar5 = 0;
  if (200 < iVar22) {
    uVar5 = uVar18;
  }
  pfVar3 = (float *)(ulong)uVar5;
  if ((((int)param_8 != 0) && (uVar5 != 0)) && (iVar35 < 600)) {
    pfVar3 = (float *)0x0;
    *param_9 = 1;
  }
  fVar17 = SQRT((float)(uint)(iVar35 * 0x1b)) + -42.0;
  fVar36 = 0.0;
  if (0.0 <= fVar17) {
    fVar36 = fVar17;
  }
  fVar17 = 163.0;
  if (fVar36 <= 163.0) {
    fVar17 = fVar36;
  }
  fVar40 = fVar17 * 0.0069 + -0.139;
  bVar1 = fVar40 == 0.0;
  fVar17 = 0.0;
  fVar36 = 0.0;
  if (0.0 <= fVar40) {
    fVar36 = fVar40;
  }
  fVar36 = SQRT(fVar36);
  *pfVar4 = fVar36;
  func_0x000108b470a0(*(undefined8 *)((long)&uStack_b8 + lVar34));
  if (bVar1) {
    return pfVar3;
  }
LAB_108b4509c:
  ___stack_chk_fail();
  *(undefined8 *)(pfVar25 + -0x20) = unaff_d11;
  *(undefined8 *)(pfVar25 + -0x1e) = unaff_d10;
  *(undefined8 *)(pfVar25 + -0x1c) = unaff_d9;
  pfVar25[-0x1a] = 1.0;
  pfVar25[-0x19] = 0.0;
  *(undefined8 *)(pfVar25 + -0x18) = unaff_x28;
  *(undefined8 *)(pfVar25 + -0x16) = unaff_x27;
  *(undefined8 *)(pfVar25 + -0x14) = unaff_x26;
  *(ulong *)(pfVar25 + -0x12) = unaff_x25;
  *(long *)(pfVar25 + -0x10) = unaff_x24;
  *(ulong *)(pfVar25 + -0xe) = uVar32;
  *(float **)(pfVar25 + -0xc) = pfVar29;
  *(float **)(pfVar25 + -10) = pfVar28;
  *(undefined **)(pfVar25 + -8) = &UNK_10df8be5b;
  pfVar25[-6] = 1.77965e-43;
  pfVar25[-5] = 0.0;
  *(long *)(pfVar25 + -4) = (long)alStack_70 + lVar34;
  *(code **)(pfVar25 + -2) = FUN_108b450a0;
  *(undefined8 *)(pfVar25 + -0x4c) = uVar16;
  *(undefined4 **)(pfVar25 + -0x4a) = param_9;
  pfVar25[-0x39] = (float)param_8;
  *(undefined8 *)(pfVar25 + -0x44) = *(undefined8 *)(pfVar25 + 6);
  fVar40 = pfVar25[3];
  pfVar25[-0x34] = pfVar25[4];
  fVar39 = pfVar25[2];
  *(undefined8 *)(pfVar25 + -0x50) = *(undefined8 *)pfVar25;
  pfVar29 = pfVar3;
  lVar8 = lVar7;
  func_0x000108b470b4();
  *(undefined8 *)(pfVar25 + -0x24) = extraout_x8_03;
  pfVar25[-0x2c] = 0.0;
  pfVar25[-0x2b] = 0.0;
  pfVar25[-0x2a] = 0.0;
  pfVar25[-0x29] = 0.0;
  *(undefined8 *)(pfVar25 + -0x36) = *(undefined8 *)pfVar29;
  *(long *)(pfVar25 + -0x52) = (long)(int)puVar12;
  lVar34 = (long)(int)puVar12 + 0x400;
  iVar35 = (int)lVar34;
  func_0x000108b470d0(iVar35 * (int)pfVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (undefined4 *)((long)pfVar25 + (-0x150 - extraout_x8_04));
  lVar27 = 0;
  *(undefined4 **)(pfVar25 + -0x28) = puVar20;
  *(undefined1 **)(pfVar25 + -0x26) = (undefined1 *)((long)puVar20 + lVar34 * 4);
  lVar34 = extraout_x12_00 + (int)puVar12;
  *(undefined4 **)(pfVar25 + -0x3e) = puVar12;
  *(float **)(pfVar25 + -0x48) = pfVar4;
  *(long *)(pfVar25 + -0x40) = lVar21;
  *(long *)(pfVar25 + -0x38) = extraout_x12_00;
  pfVar29 = (float *)(lVar21 + extraout_x12_00 * 4);
  *(long *)(pfVar25 + -0x4e) = lVar8;
  *(long *)(pfVar25 + -0x42) = lVar34;
  *(ulong *)(pfVar25 + -0x3c) =
       -((ulong)puVar12 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)puVar12 & 0xffffffff) << 2;
  *(long *)(pfVar25 + -0x32) = lVar34 * 4;
  *(long *)(pfVar25 + -0x30) = (long)(int)pfVar4;
  pfVar28 = pfVar29;
  do {
    lVar34 = *(long *)(pfVar25 + lVar27 * 2 + -0x28);
    _memcpy(lVar34,lVar7,0x1000);
    _memcpy(lVar34 + 0x1000,pfVar28,*(undefined8 *)(pfVar25 + -0x3c));
    lVar27 = lVar27 + 1;
    pfVar28 = (float *)((long)pfVar28 + *(long *)(pfVar25 + -0x32));
    lVar7 = lVar7 + 0x1000;
  } while (lVar27 < *(long *)(pfVar25 + -0x30));
  if ((fVar39 == 0.0) || (fVar37 <= 0.99)) {
    uVar16 = *(undefined8 *)(pfVar25 + -0x3e);
    if ((fVar39 == 0.0) || ((int)fVar40 < 5)) {
      fVar17 = 2.10195e-44;
      pfVar25[-0x2d] = 2.10195e-44;
      uVar19 = *(ulong *)(pfVar25 + -0x38);
      lVar34 = *(long *)(pfVar25 + -0x36);
      fVar37 = 0.0;
    }
    else {
      uVar18 = iVar35 >> 1;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2) + 0xf &
                 0xfffffffffffffff0);
      puVar20 = (undefined4 *)((long)puVar20 + -extraout_x8_05);
      FUN_108b4b430(pfVar25 + -0x28,puVar20);
      FUN_108b4b694((undefined1 *)((long)puVar20 + 0x800),puVar20,uVar16,0x3d3,pfVar25 + -0x2d,
                    pfVar3[0x13]);
      pfVar25[-0x2d] = (float)(0x400 - (int)pfVar25[-0x2d]);
      param_8 = (ulong)(uint)pfVar3[0x1b];
      fVar37 = pfVar3[0x1c];
      FUN_108b4b9f0(puVar20,0x400,0xf,uVar16,pfVar25 + -0x2d,param_8,pfVar3[0x13]);
      fVar17 = pfVar25[-0x2d];
      uVar19 = *(ulong *)(pfVar25 + -0x38);
      lVar34 = *(long *)(pfVar25 + -0x36);
      if (0x3fe < (int)fVar17) {
        fVar17 = 1.43213e-42;
        pfVar25[-0x2d] = 1.43213e-42;
      }
      fVar40 = pfVar3[0xf];
      fVar39 = fVar37 * 0.7 * 0.5;
      if ((int)fVar40 < 3) {
        fVar39 = fVar37 * 0.7;
      }
      fVar42 = fVar39 * 0.5;
      if ((int)fVar40 < 5) {
        fVar42 = fVar39;
      }
      fVar37 = 0.0;
      if ((int)fVar40 < 9) {
        fVar37 = fVar42;
      }
    }
    piVar26 = *(int **)(pfVar25 + -0x44);
  }
  else {
    uVar18 = 0;
    if (3.1416 <= fVar17) {
      fVar17 = 3.141593 - fVar17;
    }
    uVar16 = *(undefined8 *)(pfVar25 + -0x3e);
    do {
      uVar18 = uVar18 + 1;
    } while ((float)uVar18 * 0.39 <= fVar17);
    uVar19 = *(ulong *)(pfVar25 + -0x38);
    lVar34 = *(long *)(pfVar25 + -0x36);
    piVar26 = *(int **)(pfVar25 + -0x44);
    if (fVar17 <= 0.006148) {
      fVar17 = 2.10195e-44;
    }
    else {
      fVar17 = (float)(int)(((double)uVar18 * 6.283185307179586) / (double)fVar17 + 0.5);
      if (0x3fd < (int)fVar17) {
        fVar17 = 1.43213e-42;
      }
    }
    pfVar25[-0x2d] = fVar17;
    fVar37 = 0.75;
  }
  if (*piVar26 != 0) {
    fVar37 = fVar37 * (float)piVar26[10];
  }
  iVar22 = (int)fVar17 - (int)pfVar3[0x1b];
  iVar35 = -iVar22;
  if (-1 < iVar22) {
    iVar35 = iVar22;
  }
  fVar40 = 0.2;
  if (((int)fVar17 < iVar35 * 10) && (fVar40 = 0.4, 0.98 < fVar36)) {
    fVar37 = 0.0;
  }
  fVar36 = fVar40 + 0.1;
  if (0x18 < (int)pfVar25[-0x34]) {
    fVar36 = fVar40;
  }
  fVar36 = fVar36 + 0.1;
  if (0x22 < (int)pfVar25[-0x34]) {
    fVar36 = fVar40;
  }
  fVar40 = pfVar3[0x1c];
  fVar17 = fVar36 + -0.1;
  if (fVar40 <= 0.4) {
    fVar17 = fVar36;
  }
  fVar36 = fVar17 + -0.1;
  if (fVar40 <= 0.55) {
    fVar36 = fVar17;
  }
  if (fVar36 <= fVar37) {
    if (0.1 <= ABS(fVar37 - fVar40)) {
      fVar40 = fVar37;
    }
    uVar18 = (uint)((fVar40 * 32.0) / 3.0 + 0.5);
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    if (7 < (int)uVar18) {
      uVar18 = 8;
    }
    pfVar25[-0x45] = (float)(uVar18 - 1);
    fVar36 = (float)uVar18 * 0.09375;
    pfVar25[-0x46] = 1.4013e-45;
  }
  else {
    func_0x000108b4728c();
    fVar36 = 0.0;
  }
  uVar32 = (ulong)(uint)fVar36;
  lVar7 = 0;
  pfVar28 = pfVar3 + 0x3f;
  uVar6 = (ulong)((uint)uVar16 & ((int)(uint)uVar16 >> 0x1f ^ 0xffffffffU));
  *(ulong *)(pfVar25 + -0x44) = uVar6;
  *(ulong *)(pfVar25 + -0x34) = uVar19 << 2;
  do {
    iVar35 = *(int *)(lVar34 + 0x30);
    fVar17 = pfVar3[0x1b];
    if ((int)fVar17 < 0x10) {
      fVar17 = 2.10195e-44;
    }
    pfVar3[0x1b] = fVar17;
    lVar34 = *(long *)(pfVar25 + -0x40) + lVar7 * *(long *)(pfVar25 + -0x42) * 4;
    _memcpy(lVar34,pfVar28 + lVar7 * uVar19);
    pfVar4 = pfVar29;
    for (lVar21 = *(long *)(pfVar25 + -0x44); lVar21 != 0; lVar21 = lVar21 + -1) {
      pfVar25[lVar7 + -0x2a] = pfVar25[lVar7 + -0x2a] + ABS(*pfVar4);
      pfVar4 = pfVar4 + 1;
    }
    lVar34 = lVar34 + uVar19 * 4;
    iVar35 = iVar35 - (int)uVar19;
    if (iVar35 != 0) {
      func_0x000108b47174(*(undefined8 *)(pfVar25 + lVar7 * 2 + -0x28));
      fVar17 = pfVar3[0x13];
      puVar20[-4] = 0;
      puVar20[-3] = fVar17;
      FUN_108b416a4(lVar34,extraout_x8_06 + 0x1000);
    }
    uVar11 = (ulong)(uint)pfVar25[-0x2d];
    uVar24 = *(undefined8 *)(pfVar25 + -0x3e);
    iVar22 = (int)uVar24;
    uVar13 = (ulong)(uint)(iVar22 - iVar35);
    func_0x000108b47174(*(long *)(pfVar25 + lVar7 * 2 + -0x28) + (long)iVar35 * 4,
                        lVar34 + (long)iVar35 * 4);
    lVar34 = *(long *)(pfVar25 + -0x36);
    uVar16 = *(undefined8 *)(lVar34 + 0x48);
    puVar20[-3] = pfVar3[0x13];
    uVar19 = *(ulong *)(pfVar25 + -0x38);
    puVar20[-4] = (int)uVar19;
    uVar14 = (ulong)(uint)pfVar25[-0x39];
    FUN_108b416a4();
    lVar27 = *(long *)(pfVar25 + -0x32);
    lVar10 = *(long *)(pfVar25 + -0x30);
    lVar8 = *(long *)(pfVar25 + -0x34);
    for (lVar21 = 0; uVar6 << 2 != lVar21; lVar21 = lVar21 + 4) {
      pfVar25[lVar7 + -0x2c] = pfVar25[lVar7 + -0x2c] + ABS(*(float *)((long)pfVar29 + lVar21));
    }
    lVar7 = lVar7 + 1;
    pfVar29 = (float *)((long)pfVar29 + lVar27);
  } while (lVar7 < lVar10);
  fVar17 = pfVar25[-0x2a];
  if ((int)*(undefined8 *)(pfVar25 + -0x48) == 2) {
    fVar37 = pfVar25[-0x29];
    fVar40 = fVar37 * 0.01 + fVar17 * fVar36 * 0.25;
    lVar34 = *(long *)(pfVar25 + -0x40);
    if (pfVar25[-0x2c] - fVar17 <= fVar40) {
      fVar39 = fVar17 * 0.01 + fVar37 * fVar36 * 0.25;
      if (pfVar25[-0x2b] - fVar37 <= fVar39) {
        fVar37 = fVar37 - pfVar25[-0x2b];
        bVar1 = false;
        if ((fVar17 - pfVar25[-0x2c] < fVar40) && (bVar1 = false, !NAN(fVar37) && !NAN(fVar39))) {
          bVar1 = fVar37 < fVar39;
        }
        if (!bVar1) goto LAB_108b45740;
      }
    }
  }
  else {
    lVar34 = *(long *)(pfVar25 + -0x40);
    if (pfVar25[-0x2c] <= fVar17) goto LAB_108b45740;
  }
  lVar7 = 0;
  uVar9 = *(undefined8 *)(pfVar25 + -0x3c);
  lVar21 = lVar34;
  do {
    iVar35 = *(int *)(*(long *)(pfVar25 + -0x36) + 0x30);
    iVar33 = (int)uVar19;
    lVar27 = *(long *)(pfVar25 + lVar7 * 2 + -0x28);
    _memcpy(lVar21 + lVar8,lVar27 + 0x1000,uVar9);
    uVar19 = *(ulong *)(pfVar25 + -0x38);
    uVar11 = (ulong)(uint)pfVar25[-0x2d];
    func_0x000108b47174(*(undefined8 *)(pfVar25 + -0x36),lVar21 + (long)iVar35 * 4,
                        lVar27 + 0x1000 + (long)(iVar35 - iVar33) * 4,pfVar3[0x1b]);
    uVar16 = *(undefined8 *)(extraout_x8_07 + 0x48);
    fVar17 = pfVar3[0x13];
    puVar20[-4] = (int)uVar19;
    puVar20[-3] = fVar17;
    uVar32 = 0;
    uVar14 = (ulong)(uint)pfVar25[-0x39];
    uVar13 = uVar19;
    FUN_108b416a4();
    lVar8 = *(long *)(pfVar25 + -0x34);
    lVar7 = lVar7 + 1;
    lVar21 = lVar21 + *(long *)(pfVar25 + -0x32);
  } while (lVar7 < *(long *)(pfVar25 + -0x30));
  func_0x000108b4728c();
LAB_108b45740:
  lVar7 = 0;
  lVar21 = (ulong)(0x400 - iVar22) << 2;
  lVar27 = *(long *)(pfVar25 + -0x52);
  pfVar3 = pfVar25 + -0x28;
  pfVar29 = *(float **)(pfVar25 + -0x4e);
  do {
    _memcpy(pfVar28,lVar34 + lVar27 * 4);
    if (iVar22 < 0x401) {
      _memmove(pfVar29,pfVar29 + lVar27,lVar21);
      pfVar4 = pfVar29 + (0x400 - lVar27);
      lVar8 = *(long *)(pfVar3 + lVar7 * 2) + 0x1000;
      uVar9 = *(undefined8 *)(pfVar25 + -0x3c);
    }
    else {
      lVar8 = *(long *)(pfVar3 + lVar7 * 2) + lVar27 * 4;
      uVar9 = 0x1000;
      pfVar4 = pfVar29;
    }
    _memcpy(pfVar4,lVar8,uVar9);
    uVar18 = (uint)uVar14;
    uVar15 = (undefined4)uVar16;
    lVar7 = lVar7 + 1;
    pfVar29 = pfVar29 + 0x400;
    lVar10 = *(long *)(pfVar25 + -0x34);
    lVar34 = lVar34 + *(long *)(pfVar25 + -0x32);
    pfVar28 = (float *)((long)pfVar28 + lVar10);
    bVar1 = lVar7 == *(long *)(pfVar25 + -0x30);
  } while (lVar7 < *(long *)(pfVar25 + -0x30));
  **(undefined4 **)(pfVar25 + -0x4c) = (int)uVar32;
  **(float **)(pfVar25 + -0x4a) = pfVar25[-0x2d];
  **(float **)(pfVar25 + -0x50) = pfVar25[-0x45];
  func_0x000108b470a0(*(undefined8 *)(pfVar25 + -0x24));
  if (bVar1) {
    return (float *)(ulong)(uint)pfVar25[-0x46];
  }
  ___stack_chk_fail();
  *(ulong *)(puVar20 + -0x1c) = uVar32;
  *(ulong *)(puVar20 + -0x1a) = (ulong)(uint)-fVar36;
  *(undefined8 *)(puVar20 + -0x18) = uVar24;
  *(long *)(puVar20 + -0x16) = lVar34;
  *(long *)(puVar20 + -0x14) = lVar27;
  *(long *)(puVar20 + -0x12) = lVar21;
  *(float **)(puVar20 + -0x10) = pfVar3;
  *(float **)(puVar20 + -0xe) = pfVar29;
  *(long *)(puVar20 + -0xc) = lVar27 * -4 + 0x1000;
  *(long *)(puVar20 + -10) = lVar27 * 4;
  *(long *)(puVar20 + -8) = lVar7;
  *(float **)(puVar20 + -6) = pfVar28;
  *(float **)(puVar20 + -4) = pfVar25 + -4;
  *(code **)(puVar20 + -2) = FUN_108b4584c;
  puVar20[-0x2d] = uVar15;
  *(ulong *)(puVar20 + -0x2c) = uVar13;
  *(ulong *)(puVar20 + -0x22) = uVar11;
  uVar15 = *puVar20;
  fVar36 = pfVar4[1];
  fVar17 = pfVar4[0xc];
  if ((int)lVar8 == 0) {
    fVar17 = (float)((int)fVar17 << (ulong)(uVar18 & 0x1f));
    fVar37 = (float)((int)pfVar4[10] - uVar18);
    lVar8 = 1;
  }
  else {
    fVar37 = pfVar4[10];
  }
  iVar35 = 0;
  lVar34 = 0;
  uVar18 = (uint)lVar8;
  *(ulong *)(puVar20 + -0x26) = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
  *(ulong *)(puVar20 + -0x24) = (ulong)((int)fVar17 * uVar18);
  *(ulong *)(puVar20 + -0x30) = param_8;
  uVar18 = (int)fVar17 * uVar18 + (int)fVar36;
  *(ulong *)(puVar20 + -0x2a) = -(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2;
  *(long *)(puVar20 + -0x28) = (long)(int)param_8;
  pfVar29 = pfVar4;
  do {
    puVar20[-0x1f] = iVar35;
    lVar7 = *(long *)(puVar20 + -0x22) + (long)iVar35 * 4;
    lVar21 = *(long *)(puVar20 + -0x26);
    *(long *)(puVar20 + -0x1e) = lVar10;
    for (; lVar21 != 0; lVar21 = lVar21 + -1) {
      pfVar29 = pfVar4 + 0x14;
      FUN_108b4af28(pfVar29,lVar10,lVar7,*(undefined8 *)(pfVar4 + 0x12),fVar36,fVar37,lVar8,uVar15);
      lVar10 = lVar10 + (-(ulong)((uint)fVar17 >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)fVar17 << 2);
      lVar7 = lVar7 + 4;
    }
    lVar34 = lVar34 + 1;
    lVar10 = *(long *)(puVar20 + -0x1e) + *(long *)(puVar20 + -0x2a);
    iVar35 = puVar20[-0x1f] + (int)*(undefined8 *)(puVar20 + -0x24);
  } while (lVar34 < *(long *)(puVar20 + -0x28));
  uVar16 = *(undefined8 *)(puVar20 + -0x2c);
  pfVar28 = *(float **)(puVar20 + -0x22);
  uVar18 = (uint)*(undefined8 *)(puVar20 + -0x24);
  if ((int)uVar16 == 1 && (int)*(undefined8 *)(puVar20 + -0x30) == 2) {
    pfVar3 = pfVar28;
    for (uVar19 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
        uVar19 = uVar19 - 1) {
      *pfVar3 = pfVar3[(int)uVar18] * 0.5 + *pfVar3 * 0.5;
      pfVar3 = pfVar3 + 1;
    }
  }
  iVar35 = puVar20[-0x2d];
  if (iVar35 != 1) {
    iVar22 = 0;
    lVar34 = 0;
    uVar5 = 0;
    if (iVar35 != 0) {
      uVar5 = (int)uVar18 / iVar35;
    }
    do {
      pfVar29 = pfVar28 + iVar22;
      for (uVar19 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
          uVar19 = uVar19 - 1) {
        *pfVar29 = *pfVar29 * (float)iVar35;
        pfVar29 = pfVar29 + 1;
      }
      pfVar29 = pfVar28 + (int)(uVar18 * (int)lVar34 + uVar5);
      _bzero(pfVar29,-(ulong)(uVar18 - uVar5 >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uVar18 - uVar5) << 2);
      lVar34 = lVar34 + 1;
      iVar22 = iVar22 + uVar18;
    } while (lVar34 < (int)uVar16);
  }
  return pfVar29;
}



/* Entry: 108b44d54; end: 108b4509f;  */

float * FUN_108b44d54(float param_1,float param_2,float *param_3,ulong param_4,uint param_5,
                     float *param_6,undefined4 *param_7,ulong param_8,undefined4 *param_9)

{
  uint uVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  undefined4 *puVar21;
  float *pfVar22;
  ulong unaff_x21;
  long lVar23;
  float *unaff_x22;
  long lVar24;
  uint uVar25;
  ulong unaff_x23;
  float *pfVar26;
  long unaff_x24;
  int iVar27;
  ulong unaff_x25;
  long lVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar29;
  undefined8 unaff_x28;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong uVar33;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [6];
  uint auStack_178 [2];
  ulong auStack_170 [5];
  uint uStack_144;
  ulong auStack_140 [2];
  long alStack_130 [3];
  uint uStack_114;
  float afStack_110 [2];
  undefined8 uStack_108;
  long alStack_100 [18];
  long lStack_70;
  float afStack_64 [3];
  undefined8 uStack_58;
  
  func_0x000108b470b4();
  uVar14 = (uint)param_4;
  uStack_58 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2);
  lVar24 = -extraout_x12;
  pfVar26 = (float *)((long)afStack_64 + lVar24 + 4);
  uVar20 = 0;
  uVar17 = 0;
  *param_9 = 0;
  fVar31 = 0.03125;
  if ((int)param_8 == 0) {
    fVar31 = 0.0625;
  }
  uVar1 = (int)uVar14 / 2;
  iVar13 = uVar1 * 6 + -0x66;
  lVar28 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 2;
  lVar4 = 0x42800000;
  uVar12 = 0x42fe0000;
  for (; iVar16 = (int)uVar17, uVar20 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU));
      uVar20 = uVar20 + 1) {
    fVar34 = 0.0;
    fVar35 = 0.0;
    for (lVar23 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) << 2 != lVar23;
        lVar23 = lVar23 + 4) {
      fVar36 = *(float *)((long)param_3 + lVar23);
      fVar37 = fVar34 * 0.5;
      fVar34 = fVar36 - fVar35;
      *(float *)((long)pfVar26 + lVar23) = fVar35 + fVar36;
      fVar35 = (fVar35 - fVar36) + fVar37;
    }
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar24) = 0;
    *(undefined8 *)(&stack0xffffffffffffffb0 + lVar24) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar24) = 0;
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar24) = 0;
    fVar35 = 0.0;
    fVar34 = 0.0;
    *(undefined8 *)((long)&uStack_58 + lVar24) = 0;
    pfVar26[0] = 0.0;
    pfVar26[1] = 0.0;
    unaff_x22 = (float *)((long)afStack_64 + lVar24 + 8);
    for (lVar23 = 0; lVar28 != lVar23; lVar23 = lVar23 + 4) {
      fVar37 = *unaff_x22 * *unaff_x22 + unaff_x22[-1] * unaff_x22[-1];
      fVar35 = fVar35 + fVar37;
      fVar34 = fVar37 + fVar34 * (1.0 - fVar31);
      *(float *)((long)pfVar26 + lVar23) = fVar31 * fVar34;
      unaff_x22 = unaff_x22 + 2;
    }
    fVar37 = 0.0;
    unaff_x21 = (ulong)uVar1;
    fVar34 = 0.0;
    while (0 < (int)unaff_x21) {
      unaff_x22 = pfVar26 + unaff_x21;
      unaff_x21 = unaff_x21 - 1;
      fVar37 = unaff_x22[-1] + fVar37 * 0.875;
      fVar36 = fVar37 * 0.125;
      unaff_x22[-1] = fVar36;
      if (fVar34 <= fVar36) {
        fVar34 = fVar36;
      }
    }
    if ((NAN(*pfVar26)) ||
       (fVar35 = (float)(int)uVar1 / (SQRT(fVar35 * fVar34 * 0.5 * (float)(int)uVar1) + 1e-15),
       NAN(fVar35))) {
      _abort();
      goto LAB_108b4509c;
    }
    iVar27 = 0;
    for (unaff_x22 = (float *)0xc; (long)unaff_x22 < (long)(int)(uVar1 - 5);
        unaff_x22 = unaff_x22 + 1) {
      fVar34 = fVar35 * 64.0 * (pfVar26[(long)unaff_x22] + 1e-15);
      fVar37 = (float)(int)fVar34;
      uVar25 = (uint)(fVar37 < 0.0);
      if (127.0 < fVar37) {
        uVar25 = 1;
      }
      unaff_x25 = (ulong)uVar25;
      lVar23 = 0;
      if (fVar37 >= 0.0 || 127.0 < fVar37) {
        lVar23 = 0x7f;
      }
      unaff_x24 = (long)(int)fVar34;
      if (uVar25 == 0) {
        lVar23 = unaff_x24;
      }
      unaff_x23 = (ulong)(byte)(&UNK_10df8be5b)[lVar23];
      iVar27 = iVar27 + (uint)(byte)(&UNK_10df8be5b)[lVar23];
    }
    uVar25 = 0;
    if (iVar13 != 0) {
      uVar25 = (iVar27 << 8) / iVar13;
    }
    unaff_x21 = (ulong)uVar25;
    if (iVar16 < (int)uVar25) {
      *param_7 = (int)uVar20;
      uVar17 = unaff_x21;
    }
    param_3 = (float *)((long)param_3 + extraout_x8_00);
  }
  fVar31 = 0.026;
  uVar14 = (uint)(0.026 <= param_1);
  if (param_2 <= 0.98) {
    uVar14 = 1;
  }
  iVar13 = iVar16;
  if (uVar14 == 0) {
    iVar13 = 0;
  }
  uVar1 = 0;
  if (200 < iVar16) {
    uVar1 = uVar14;
  }
  param_3 = (float *)(ulong)uVar1;
  if ((((int)param_8 != 0) && (uVar1 != 0)) && (iVar13 < 600)) {
    param_3 = (float *)0x0;
    *param_9 = 1;
  }
  fVar34 = SQRT((float)(uint)(iVar13 * 0x1b)) + -42.0;
  fVar35 = 0.0;
  if (0.0 <= fVar34) {
    fVar35 = fVar34;
  }
  fVar34 = 163.0;
  if (fVar35 <= 163.0) {
    fVar34 = fVar35;
  }
  fVar35 = fVar34 * 0.0069 + -0.139;
  bVar2 = fVar35 == 0.0;
  param_2 = 0.0;
  param_1 = 0.0;
  if (0.0 <= fVar35) {
    param_1 = fVar35;
  }
  param_1 = SQRT(param_1);
  *param_6 = param_1;
  func_0x000108b470a0(uStack_58);
  if (bVar2) {
    return param_3;
  }
LAB_108b4509c:
  ___stack_chk_fail();
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x20) = unaff_d11;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x28) = unaff_d10;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x30) = unaff_d9;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x38) = unaff_d8;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x40) = unaff_x28;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x48) = unaff_x27;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x50) = unaff_x26;
  *(ulong *)((long)alStack_100 + lVar24 + 0x58) = unaff_x25;
  *(long *)((long)alStack_100 + lVar24 + 0x60) = unaff_x24;
  *(ulong *)((long)alStack_100 + lVar24 + 0x68) = unaff_x23;
  *(float **)((long)alStack_100 + lVar24 + 0x70) = unaff_x22;
  *(ulong *)((long)alStack_100 + lVar24 + 0x78) = unaff_x21;
  *(undefined **)((long)alStack_100 + lVar24 + 0x80) = &UNK_10df8be5b;
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x88) = 0x7f;
  *(undefined1 **)((long)&lStack_70 + lVar24) = &stack0xfffffffffffffff0;
  *(code **)(&stack0xffffffffffffff98 + lVar24) = FUN_108b450a0;
  *(undefined8 *)((long)alStack_1a8 + lVar24 + 0x18) = uVar12;
  *(undefined4 **)((long)alStack_1a8 + lVar24 + 0x20) = param_9;
  *(int *)((long)&uStack_144 + lVar24) = (int)param_8;
  *(undefined8 *)((long)auStack_170 + lVar24) = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar24);
  iVar13 = *(int *)((long)&uStack_58 + lVar24 + 4);
  *(undefined4 *)((long)alStack_130 + lVar24) = *(undefined4 *)(&stack0xffffffffffffffb0 + lVar24);
  iVar16 = *(int *)((long)&uStack_58 + lVar24);
  *(undefined8 *)((long)alStack_1a8 + lVar24 + 8) = *(undefined8 *)pfVar26;
  pfVar26 = param_3;
  lVar5 = lVar4;
  func_0x000108b470b4();
  *(undefined8 *)((long)alStack_100 + lVar24 + 0x10) = extraout_x8_01;
  *(undefined8 *)((long)afStack_110 + lVar24) = 0;
  *(undefined8 *)((long)&uStack_108 + lVar24) = 0;
  *(undefined8 *)((long)auStack_140 + lVar24 + 8) = *(undefined8 *)pfVar26;
  *(long *)((long)alStack_1a8 + lVar24) = (long)(int)param_7;
  lVar23 = (long)(int)param_7 + 0x400;
  iVar27 = (int)lVar23;
  func_0x000108b470d0(iVar27 * (int)param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined4 *)(auStack_1b0 + (lVar24 - extraout_x8_02));
  lVar30 = 0;
  *(undefined4 **)((long)alStack_100 + lVar24) = puVar21;
  *(undefined1 **)((long)alStack_100 + lVar24 + 8) = (undefined1 *)((long)puVar21 + lVar23 * 4);
  lVar23 = extraout_x12_00 + (int)param_7;
  *(undefined4 **)((long)auStack_170 + lVar24 + 0x18) = param_7;
  *(float **)((long)alStack_1a8 + lVar24 + 0x28) = param_6;
  *(long *)((long)auStack_170 + lVar24 + 0x10) = lVar28;
  *(long *)((long)auStack_140 + lVar24) = extraout_x12_00;
  pfVar26 = (float *)(lVar28 + extraout_x12_00 * 4);
  *(long *)((long)alStack_1a8 + lVar24 + 0x10) = lVar5;
  *(long *)((long)auStack_170 + lVar24 + 8) = lVar23;
  *(ulong *)((long)auStack_170 + lVar24 + 0x20) =
       -((ulong)param_7 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)param_7 & 0xffffffff) << 2;
  *(long *)((long)alStack_130 + lVar24 + 8) = lVar23 * 4;
  *(long *)((long)alStack_130 + lVar24 + 0x10) = (long)(int)param_6;
  pfVar22 = pfVar26;
  do {
    lVar28 = *(long *)((long)alStack_100 + lVar30 * 8 + lVar24);
    _memcpy(lVar28,lVar4,0x1000);
    _memcpy(lVar28 + 0x1000,pfVar22,*(undefined8 *)((long)auStack_170 + lVar24 + 0x20));
    lVar30 = lVar30 + 1;
    pfVar22 = (float *)((long)pfVar22 + *(long *)((long)alStack_130 + lVar24 + 8));
    lVar4 = lVar4 + 0x1000;
  } while (lVar30 < *(long *)((long)alStack_130 + lVar24 + 0x10));
  if ((iVar16 == 0) || (fVar31 <= 0.99)) {
    uVar12 = *(undefined8 *)((long)auStack_170 + lVar24 + 0x18);
    if ((iVar16 == 0) || (iVar13 < 5)) {
      iVar13 = 0xf;
      *(undefined4 *)((long)&uStack_114 + lVar24) = 0xf;
      uVar20 = *(ulong *)((long)auStack_140 + lVar24);
      lVar4 = *(long *)((long)auStack_140 + lVar24 + 8);
      fVar31 = 0.0;
    }
    else {
      uVar14 = iVar27 >> 1;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2) + 0xf &
                 0xfffffffffffffff0);
      puVar21 = (undefined4 *)((long)puVar21 + -extraout_x8_03);
      FUN_108b4b430((long)alStack_100 + lVar24,puVar21);
      FUN_108b4b694((undefined1 *)((long)puVar21 + 0x800),puVar21,uVar12,0x3d3,
                    (long)&uStack_114 + lVar24,param_3[0x13]);
      *(int *)((long)&uStack_114 + lVar24) = 0x400 - *(int *)((long)&uStack_114 + lVar24);
      param_8 = (ulong)(uint)param_3[0x1b];
      fVar31 = param_3[0x1c];
      FUN_108b4b9f0(puVar21,0x400,0xf,uVar12,(long)&uStack_114 + lVar24,param_8,param_3[0x13]);
      iVar13 = *(int *)((long)&uStack_114 + lVar24);
      uVar20 = *(ulong *)((long)auStack_140 + lVar24);
      lVar4 = *(long *)((long)auStack_140 + lVar24 + 8);
      if (0x3fe < iVar13) {
        iVar13 = 0x3fe;
        *(undefined4 *)((long)&uStack_114 + lVar24) = 0x3fe;
      }
      fVar35 = param_3[0xf];
      fVar34 = fVar31 * 0.7 * 0.5;
      if ((int)fVar35 < 3) {
        fVar34 = fVar31 * 0.7;
      }
      fVar37 = fVar34 * 0.5;
      if ((int)fVar35 < 5) {
        fVar37 = fVar34;
      }
      fVar31 = 0.0;
      if ((int)fVar35 < 9) {
        fVar31 = fVar37;
      }
    }
    piVar19 = *(int **)((long)auStack_170 + lVar24);
  }
  else {
    uVar14 = 0;
    if (3.1416 <= param_2) {
      param_2 = 3.141593 - param_2;
    }
    uVar12 = *(undefined8 *)((long)auStack_170 + lVar24 + 0x18);
    do {
      uVar14 = uVar14 + 1;
    } while ((float)uVar14 * 0.39 <= param_2);
    uVar20 = *(ulong *)((long)auStack_140 + lVar24);
    lVar4 = *(long *)((long)auStack_140 + lVar24 + 8);
    piVar19 = *(int **)((long)auStack_170 + lVar24);
    if (param_2 <= 0.006148) {
      iVar13 = 0xf;
    }
    else {
      iVar13 = (int)(((double)uVar14 * 6.283185307179586) / (double)param_2 + 0.5);
      if (0x3fd < iVar13) {
        iVar13 = 0x3fe;
      }
    }
    *(int *)((long)&uStack_114 + lVar24) = iVar13;
    fVar31 = 0.75;
  }
  if (*piVar19 != 0) {
    fVar31 = fVar31 * (float)piVar19[10];
  }
  iVar27 = iVar13 - (int)param_3[0x1b];
  iVar16 = -iVar27;
  if (-1 < iVar27) {
    iVar16 = iVar27;
  }
  fVar35 = 0.2;
  if ((iVar13 < iVar16 * 10) && (fVar35 = 0.4, 0.98 < param_1)) {
    fVar31 = 0.0;
  }
  fVar34 = fVar35 + 0.1;
  if (0x18 < *(int *)((long)alStack_130 + lVar24)) {
    fVar34 = fVar35;
  }
  fVar34 = fVar34 + 0.1;
  if (0x22 < *(int *)((long)alStack_130 + lVar24)) {
    fVar34 = fVar35;
  }
  fVar37 = param_3[0x1c];
  fVar35 = fVar34 + -0.1;
  if (fVar37 <= 0.4) {
    fVar35 = fVar34;
  }
  fVar34 = fVar35 + -0.1;
  if (fVar37 <= 0.55) {
    fVar34 = fVar35;
  }
  if (fVar34 <= fVar31) {
    if (0.1 <= ABS(fVar31 - fVar37)) {
      fVar37 = fVar31;
    }
    uVar14 = (uint)((fVar37 * 32.0) / 3.0 + 0.5);
    if ((int)uVar14 < 2) {
      uVar14 = 1;
    }
    if (7 < (int)uVar14) {
      uVar14 = 8;
    }
    *(uint *)((long)auStack_178 + lVar24 + 4) = uVar14 - 1;
    fVar31 = (float)uVar14 * 0.09375;
    *(undefined4 *)((long)auStack_178 + lVar24) = 1;
  }
  else {
    func_0x000108b4728c();
    fVar31 = 0.0;
  }
  uVar33 = (ulong)(uint)fVar31;
  lVar28 = 0;
  pfVar22 = param_3 + 0x3f;
  uVar17 = (ulong)((uint)uVar12 & ((int)(uint)uVar12 >> 0x1f ^ 0xffffffffU));
  *(ulong *)((long)auStack_170 + lVar24) = uVar17;
  *(ulong *)((long)alStack_130 + lVar24) = uVar20 << 2;
  do {
    iVar13 = *(int *)(lVar4 + 0x30);
    fVar35 = param_3[0x1b];
    if ((int)fVar35 < 0x10) {
      fVar35 = 2.10195e-44;
    }
    param_3[0x1b] = fVar35;
    lVar4 = *(long *)((long)auStack_170 + lVar24 + 0x10) +
            lVar28 * *(long *)((long)auStack_170 + lVar24 + 8) * 4;
    _memcpy(lVar4,pfVar22 + lVar28 * uVar20);
    pfVar3 = pfVar26;
    for (lVar23 = *(long *)((long)auStack_170 + lVar24); lVar23 != 0; lVar23 = lVar23 + -1) {
      *(float *)((long)&uStack_108 + lVar28 * 4 + lVar24) =
           *(float *)((long)&uStack_108 + lVar28 * 4 + lVar24) + ABS(*pfVar3);
      pfVar3 = pfVar3 + 1;
    }
    lVar4 = lVar4 + uVar20 * 4;
    iVar13 = iVar13 - (int)uVar20;
    if (iVar13 != 0) {
      func_0x000108b47174(*(undefined8 *)((long)alStack_100 + lVar28 * 8 + lVar24));
      fVar35 = param_3[0x13];
      puVar21[-4] = 0;
      puVar21[-3] = fVar35;
      FUN_108b416a4(lVar4,extraout_x8_04 + 0x1000);
    }
    uVar8 = (ulong)*(uint *)((long)&uStack_114 + lVar24);
    uVar18 = *(undefined8 *)((long)auStack_170 + lVar24 + 0x18);
    iVar16 = (int)uVar18;
    uVar9 = (ulong)(uint)(iVar16 - iVar13);
    func_0x000108b47174(*(long *)((long)alStack_100 + lVar28 * 8 + lVar24) + (long)iVar13 * 4,
                        lVar4 + (long)iVar13 * 4);
    lVar4 = *(long *)((long)auStack_140 + lVar24 + 8);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    puVar21[-3] = param_3[0x13];
    uVar20 = *(ulong *)((long)auStack_140 + lVar24);
    puVar21[-4] = (int)uVar20;
    uVar10 = (ulong)*(uint *)((long)&uStack_144 + lVar24);
    FUN_108b416a4();
    lVar30 = *(long *)((long)alStack_130 + lVar24 + 8);
    lVar29 = *(long *)((long)alStack_130 + lVar24 + 0x10);
    lVar5 = *(long *)((long)alStack_130 + lVar24);
    for (lVar23 = 0; uVar17 << 2 != lVar23; lVar23 = lVar23 + 4) {
      *(float *)((long)afStack_110 + lVar28 * 4 + lVar24) =
           *(float *)((long)afStack_110 + lVar28 * 4 + lVar24) +
           ABS(*(float *)((long)pfVar26 + lVar23));
    }
    lVar28 = lVar28 + 1;
    pfVar26 = (float *)((long)pfVar26 + lVar30);
  } while (lVar28 < lVar29);
  fVar35 = *(float *)((long)&uStack_108 + lVar24);
  if ((int)*(undefined8 *)((long)alStack_1a8 + lVar24 + 0x28) == 2) {
    fVar34 = *(float *)((long)alStack_100 + lVar24 + -4);
    fVar37 = fVar34 * 0.01 + fVar35 * fVar31 * 0.25;
    lVar4 = *(long *)((long)auStack_170 + lVar24 + 0x10);
    if (*(float *)((long)afStack_110 + lVar24) - fVar35 <= fVar37) {
      fVar36 = fVar35 * 0.01 + fVar34 * fVar31 * 0.25;
      fVar32 = *(float *)((long)afStack_110 + lVar24 + 4);
      if (fVar32 - fVar34 <= fVar36) {
        fVar34 = fVar34 - fVar32;
        bVar2 = false;
        if ((fVar35 - *(float *)((long)afStack_110 + lVar24) < fVar37) &&
           (bVar2 = false, !NAN(fVar34) && !NAN(fVar36))) {
          bVar2 = fVar34 < fVar36;
        }
        if (!bVar2) goto LAB_108b45740;
      }
    }
  }
  else {
    lVar4 = *(long *)((long)auStack_170 + lVar24 + 0x10);
    if (*(float *)((long)afStack_110 + lVar24) <= fVar35) goto LAB_108b45740;
  }
  lVar28 = 0;
  uVar6 = *(undefined8 *)((long)auStack_170 + lVar24 + 0x20);
  lVar23 = lVar4;
  do {
    iVar13 = *(int *)(*(long *)((long)auStack_140 + lVar24 + 8) + 0x30);
    iVar27 = (int)uVar20;
    lVar30 = *(long *)((long)alStack_100 + lVar28 * 8 + lVar24) + 0x1000;
    _memcpy(lVar23 + lVar5,lVar30,uVar6);
    uVar20 = *(ulong *)((long)auStack_140 + lVar24);
    uVar8 = (ulong)*(uint *)((long)&uStack_114 + lVar24);
    func_0x000108b47174(*(undefined8 *)((long)auStack_140 + lVar24 + 8),lVar23 + (long)iVar13 * 4,
                        lVar30 + (long)(iVar13 - iVar27) * 4,param_3[0x1b]);
    uVar12 = *(undefined8 *)(extraout_x8_05 + 0x48);
    fVar35 = param_3[0x13];
    puVar21[-4] = (int)uVar20;
    puVar21[-3] = fVar35;
    uVar33 = 0;
    uVar10 = (ulong)*(uint *)((long)&uStack_144 + lVar24);
    uVar9 = uVar20;
    FUN_108b416a4();
    lVar5 = *(long *)((long)alStack_130 + lVar24);
    lVar28 = lVar28 + 1;
    lVar23 = lVar23 + *(long *)((long)alStack_130 + lVar24 + 8);
  } while (lVar28 < *(long *)((long)alStack_130 + lVar24 + 0x10));
  func_0x000108b4728c();
LAB_108b45740:
  lVar28 = 0;
  lVar23 = (ulong)(0x400 - iVar16) << 2;
  lVar5 = *(long *)((long)alStack_1a8 + lVar24);
  lVar30 = (long)alStack_100 + lVar24;
  pfVar26 = *(float **)((long)alStack_1a8 + lVar24 + 0x10);
  do {
    _memcpy(pfVar22,lVar4 + lVar5 * 4);
    if (iVar16 < 0x401) {
      _memmove(pfVar26,pfVar26 + lVar5,lVar23);
      pfVar3 = pfVar26 + (0x400 - lVar5);
      lVar29 = *(long *)(lVar30 + lVar28 * 8) + 0x1000;
      uVar6 = *(undefined8 *)((long)auStack_170 + lVar24 + 0x20);
    }
    else {
      lVar29 = *(long *)(lVar30 + lVar28 * 8) + lVar5 * 4;
      uVar6 = 0x1000;
      pfVar3 = pfVar26;
    }
    _memcpy(pfVar3,lVar29,uVar6);
    uVar14 = (uint)uVar10;
    uVar11 = (undefined4)uVar12;
    lVar28 = lVar28 + 1;
    pfVar26 = pfVar26 + 0x400;
    lVar7 = *(long *)((long)alStack_130 + lVar24);
    lVar4 = lVar4 + *(long *)((long)alStack_130 + lVar24 + 8);
    pfVar22 = (float *)((long)pfVar22 + lVar7);
    lVar15 = *(long *)((long)alStack_130 + lVar24 + 0x10);
    bVar2 = lVar28 == lVar15;
  } while (lVar28 < lVar15);
  **(undefined4 **)((long)alStack_1a8 + lVar24 + 0x18) = (int)uVar33;
  **(undefined4 **)((long)alStack_1a8 + lVar24 + 0x20) = *(undefined4 *)((long)&uStack_114 + lVar24)
  ;
  **(undefined4 **)((long)alStack_1a8 + lVar24 + 8) =
       *(undefined4 *)((long)auStack_178 + lVar24 + 4);
  func_0x000108b470a0(*(undefined8 *)((long)alStack_100 + lVar24 + 0x10));
  if (bVar2) {
    return (float *)(ulong)*(uint *)((long)auStack_178 + lVar24);
  }
  ___stack_chk_fail();
  *(ulong *)(puVar21 + -0x1c) = uVar33;
  *(ulong *)(puVar21 + -0x1a) = (ulong)(uint)-fVar31;
  *(undefined8 *)(puVar21 + -0x18) = uVar18;
  *(long *)(puVar21 + -0x16) = lVar4;
  *(long *)(puVar21 + -0x14) = lVar5;
  *(long *)(puVar21 + -0x12) = lVar23;
  *(long *)(puVar21 + -0x10) = lVar30;
  *(float **)(puVar21 + -0xe) = pfVar26;
  *(long *)(puVar21 + -0xc) = lVar5 * -4 + 0x1000;
  *(long *)(puVar21 + -10) = lVar5 * 4;
  *(long *)(puVar21 + -8) = lVar28;
  *(float **)(puVar21 + -6) = pfVar22;
  *(long *)(puVar21 + -4) = (long)&lStack_70 + lVar24;
  *(code **)(puVar21 + -2) = FUN_108b4584c;
  puVar21[-0x2d] = uVar11;
  *(ulong *)(puVar21 + -0x2c) = uVar9;
  *(ulong *)(puVar21 + -0x22) = uVar8;
  uVar11 = *puVar21;
  fVar31 = pfVar3[1];
  fVar35 = pfVar3[0xc];
  if ((int)lVar29 == 0) {
    fVar35 = (float)((int)fVar35 << (ulong)(uVar14 & 0x1f));
    fVar34 = (float)((int)pfVar3[10] - uVar14);
    lVar29 = 1;
  }
  else {
    fVar34 = pfVar3[10];
  }
  iVar13 = 0;
  lVar24 = 0;
  uVar14 = (uint)lVar29;
  *(ulong *)(puVar21 + -0x26) = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU));
  *(ulong *)(puVar21 + -0x24) = (ulong)((int)fVar35 * uVar14);
  *(ulong *)(puVar21 + -0x30) = param_8;
  uVar14 = (int)fVar35 * uVar14 + (int)fVar31;
  *(ulong *)(puVar21 + -0x2a) = -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2;
  *(long *)(puVar21 + -0x28) = (long)(int)param_8;
  pfVar26 = pfVar3;
  do {
    puVar21[-0x1f] = iVar13;
    lVar4 = *(long *)(puVar21 + -0x22) + (long)iVar13 * 4;
    lVar28 = *(long *)(puVar21 + -0x26);
    *(long *)(puVar21 + -0x1e) = lVar7;
    for (; lVar28 != 0; lVar28 = lVar28 + -1) {
      pfVar26 = pfVar3 + 0x14;
      FUN_108b4af28(pfVar26,lVar7,lVar4,*(undefined8 *)(pfVar3 + 0x12),fVar31,fVar34,lVar29,uVar11);
      lVar7 = lVar7 + (-(ulong)((uint)fVar35 >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(uint)fVar35 << 2);
      lVar4 = lVar4 + 4;
    }
    lVar24 = lVar24 + 1;
    lVar7 = *(long *)(puVar21 + -0x1e) + *(long *)(puVar21 + -0x2a);
    iVar13 = puVar21[-0x1f] + (int)*(undefined8 *)(puVar21 + -0x24);
  } while (lVar24 < *(long *)(puVar21 + -0x28));
  uVar12 = *(undefined8 *)(puVar21 + -0x2c);
  pfVar22 = *(float **)(puVar21 + -0x22);
  uVar14 = (uint)*(undefined8 *)(puVar21 + -0x24);
  if ((int)uVar12 == 1 && (int)*(undefined8 *)(puVar21 + -0x30) == 2) {
    pfVar3 = pfVar22;
    for (uVar20 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
        uVar20 = uVar20 - 1) {
      *pfVar3 = pfVar3[(int)uVar14] * 0.5 + *pfVar3 * 0.5;
      pfVar3 = pfVar3 + 1;
    }
  }
  iVar13 = puVar21[-0x2d];
  if (iVar13 != 1) {
    iVar16 = 0;
    lVar24 = 0;
    uVar1 = 0;
    if (iVar13 != 0) {
      uVar1 = (int)uVar14 / iVar13;
    }
    do {
      pfVar26 = pfVar22 + iVar16;
      for (uVar20 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
          uVar20 = uVar20 - 1) {
        *pfVar26 = *pfVar26 * (float)iVar13;
        pfVar26 = pfVar26 + 1;
      }
      pfVar26 = pfVar22 + (int)(uVar14 * (int)lVar24 + uVar1);
      _bzero(pfVar26,-(ulong)(uVar14 - uVar1 >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uVar14 - uVar1) << 2);
      lVar24 = lVar24 + 1;
      iVar16 = iVar16 + uVar14;
    } while (lVar24 < (int)uVar12);
  }
  return pfVar26;
}



/* Entry: 108b450a0; end: 108b4584b;  */

float * FUN_108b450a0(float param_1,float param_2,float param_3,long *param_4,long param_5,
                     float *param_6,undefined8 param_7,ulong param_8,ulong param_9,uint *param_10,
                     undefined4 *param_11,int *param_12,int param_13,int param_14,
                     undefined4 param_15,undefined4 param_16,int *param_17)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  bool bVar5;
  long *plVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int *piVar17;
  long extraout_x8_02;
  long lVar18;
  long extraout_x8_03;
  int iVar19;
  ulong uVar20;
  ulong extraout_x12;
  int iVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  undefined1 *puVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  undefined1 auStack_150 [8];
  long lStack_148;
  int *piStack_140;
  float *pfStack_138;
  undefined4 *puStack_130;
  uint *puStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  int iStack_114;
  int *piStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  uint uStack_e4;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *apuStack_a0 [4];
  
  uStack_e4 = (uint)param_9;
  piStack_110 = param_17;
  lStack_d0 = CONCAT44(lStack_d0._4_4_,param_15);
  piStack_140 = param_12;
  plVar6 = param_4;
  pfVar7 = param_6;
  puStack_130 = param_11;
  puStack_128 = param_10;
  func_0x000108b470b4();
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_d8 = *plVar6;
  lStack_148 = (long)(int)param_8;
  lVar23 = lStack_148 + 0x400;
  iVar19 = (int)lVar23;
  apuStack_a0[2] = (undefined1 *)extraout_x8;
  func_0x000108b470d0(iVar19 * (int)param_7);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar22 = (undefined4 *)(auStack_150 + -extraout_x8_00);
  lVar29 = 0;
  apuStack_a0[0] = (undefined1 *)puVar22;
  apuStack_a0[1] = (undefined1 *)((long)puVar22 + lVar23 * 4);
  lStack_108 = extraout_x12 + (long)(int)param_8;
  uStack_f8 = param_8;
  uStack_120 = param_7;
  lStack_100 = param_5;
  uStack_e0 = extraout_x12;
  pfVar8 = (float *)(param_5 + extraout_x12 * 4);
  pfStack_138 = pfVar7;
  uStack_f0 = -(param_8 >> 0x1f & 1) & 0xfffffffc00000000 | (param_8 & 0xffffffff) << 2;
  lStack_c8 = lStack_108 * 4;
  lStack_c0 = (long)(int)param_7;
  pfVar7 = pfVar8;
  do {
    puVar27 = apuStack_a0[lVar29];
    _memcpy(puVar27,param_6,0x1000);
    _memcpy(puVar27 + 0x1000,pfVar7,uStack_f0);
    uVar20 = uStack_f8;
    lVar29 = lVar29 + 1;
    pfVar7 = (float *)((long)pfVar7 + lStack_c8);
    param_6 = param_6 + 0x400;
  } while (lVar29 < lStack_c0);
  if ((param_13 == 0) || (param_3 <= 0.99)) {
    if ((param_13 == 0) || (param_14 < 5)) {
      uStack_b4 = 0xf;
      fVar30 = 0.0;
    }
    else {
      uVar16 = iVar19 >> 1;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2) + 0xf &
                 0xfffffffffffffff0);
      puVar22 = (undefined4 *)((long)puVar22 + -extraout_x8_01);
      FUN_108b4b430(apuStack_a0,puVar22);
      FUN_108b4b694((undefined1 *)((long)puVar22 + 0x800),puVar22,uVar20,0x3d3,&uStack_b4,
                    *(undefined4 *)((long)param_4 + 0x4c));
      uStack_b4 = 0x400 - uStack_b4;
      param_9 = (ulong)*(uint *)((long)param_4 + 0x6c);
      fVar30 = *(float *)(param_4 + 0xe);
      FUN_108b4b9f0(puVar22,0x400,0xf,uVar20,&uStack_b4,param_9,
                    *(undefined4 *)((long)param_4 + 0x4c));
      if (0x3fe < (int)uStack_b4) {
        uStack_b4 = 0x3fe;
      }
      iVar19 = *(int *)((long)param_4 + 0x3c);
      fVar31 = fVar30 * 0.7 * 0.5;
      if (iVar19 < 3) {
        fVar31 = fVar30 * 0.7;
      }
      fVar33 = fVar31 * 0.5;
      if (iVar19 < 5) {
        fVar33 = fVar31;
      }
      fVar30 = 0.0;
      if (iVar19 < 9) {
        fVar30 = fVar33;
      }
    }
  }
  else {
    uVar16 = 0;
    if (3.1416 <= param_2) {
      param_2 = 3.141593 - param_2;
    }
    do {
      uVar16 = uVar16 + 1;
    } while ((float)uVar16 * 0.39 <= param_2);
    if (param_2 <= 0.006148) {
      uStack_b4 = 0xf;
    }
    else {
      uStack_b4 = (uint)(((double)uVar16 * 6.283185307179586) / (double)param_2 + 0.5);
      if (0x3fd < (int)uStack_b4) {
        uStack_b4 = 0x3fe;
      }
    }
    fVar30 = 0.75;
  }
  lVar23 = lStack_d8;
  uVar9 = uStack_e0;
  if (*piStack_110 != 0) {
    fVar30 = fVar30 * (float)piStack_110[10];
  }
  iVar21 = uStack_b4 - *(int *)((long)param_4 + 0x6c);
  iVar19 = -iVar21;
  if (-1 < iVar21) {
    iVar19 = iVar21;
  }
  fVar31 = 0.2;
  if (((int)uStack_b4 < iVar19 * 10) && (fVar31 = 0.4, 0.98 < param_1)) {
    fVar30 = 0.0;
  }
  fVar33 = fVar31 + 0.1;
  if (0x18 < (int)lStack_d0) {
    fVar33 = fVar31;
  }
  fVar33 = fVar33 + 0.1;
  if (0x22 < (int)lStack_d0) {
    fVar33 = fVar31;
  }
  fVar32 = *(float *)(param_4 + 0xe);
  fVar31 = fVar33 + -0.1;
  if (fVar32 <= 0.4) {
    fVar31 = fVar33;
  }
  fVar33 = fVar31 + -0.1;
  if (fVar32 <= 0.55) {
    fVar33 = fVar31;
  }
  if (fVar33 <= fVar30) {
    if (0.1 <= ABS(fVar30 - fVar32)) {
      fVar32 = fVar30;
    }
    uVar16 = (uint)((fVar32 * 32.0) / 3.0 + 0.5);
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    if (7 < (int)uVar16) {
      uVar16 = 8;
    }
    iStack_114 = uVar16 - 1;
    fVar30 = (float)uVar16 * 0.09375;
    uStack_118 = 1;
  }
  else {
    func_0x000108b4728c();
    fVar30 = 0.0;
  }
  uVar34 = (ulong)(uint)fVar30;
  lVar25 = 0;
  lVar29 = (long)param_4 + 0xfc;
  lStack_d0 = uVar9 << 2;
  piStack_110 = (int *)(ulong)((uint)uVar20 & ((int)(uint)uVar20 >> 0x1f ^ 0xffffffffU));
  lVar2 = (long)piStack_110 << 2;
  do {
    iVar21 = *(int *)(lVar23 + 0x30);
    iVar19 = *(int *)((long)param_4 + 0x6c);
    if (iVar19 < 0x10) {
      iVar19 = 0xf;
    }
    *(int *)((long)param_4 + 0x6c) = iVar19;
    lVar23 = lStack_100 + lVar25 * lStack_108 * 4;
    _memcpy(lVar23,lVar29 + lVar25 * uVar9 * 4);
    pfVar7 = pfVar8;
    for (piVar17 = piStack_110; piVar17 != (int *)0x0; piVar17 = (int *)((long)piVar17 - 1)) {
      *(float *)((long)apuStack_a0 + lVar25 * 4 + -8) =
           *(float *)((long)apuStack_a0 + lVar25 * 4 + -8) + ABS(*pfVar7);
      pfVar7 = pfVar7 + 1;
    }
    lVar23 = lVar23 + uVar9 * 4;
    iVar21 = iVar21 - (int)uVar9;
    if (iVar21 != 0) {
      func_0x000108b47174(apuStack_a0[lVar25]);
      uVar14 = *(undefined4 *)((long)param_4 + 0x4c);
      puVar22[-4] = 0;
      puVar22[-3] = uVar14;
      FUN_108b416a4(lVar23,extraout_x8_02 + 0x1000);
    }
    uVar20 = uStack_f8;
    uVar11 = (ulong)uStack_b4;
    iVar19 = (int)uStack_f8;
    uVar12 = (ulong)(uint)(iVar19 - iVar21);
    func_0x000108b47174(apuStack_a0[lVar25] + (long)iVar21 * 4,lVar23 + (long)iVar21 * 4);
    lVar23 = lStack_d8;
    uVar15 = *(undefined8 *)(lStack_d8 + 0x48);
    puVar22[-3] = *(undefined4 *)((long)param_4 + 0x4c);
    uVar9 = uStack_e0;
    puVar22[-4] = (int)uStack_e0;
    uVar13 = (ulong)uStack_e4;
    FUN_108b416a4();
    uVar4 = uStack_f0;
    lVar28 = lStack_100;
    for (lVar18 = 0; lVar2 != lVar18; lVar18 = lVar18 + 4) {
      *(float *)((long)&uStack_b0 + lVar25 * 4) =
           *(float *)((long)&uStack_b0 + lVar25 * 4) + ABS(*(float *)((long)pfVar8 + lVar18));
    }
    lVar25 = lVar25 + 1;
    pfVar8 = (float *)((long)pfVar8 + lStack_c8);
  } while (lVar25 < lStack_c0);
  if ((int)uStack_120 == 2) {
    fVar31 = uStack_a8._4_4_ * 0.01 + (float)uStack_a8 * fVar30 * 0.25;
    if ((float)uStack_b0 - (float)uStack_a8 <= fVar31) {
      fVar33 = (float)uStack_a8 * 0.01 + uStack_a8._4_4_ * fVar30 * 0.25;
      if (uStack_b0._4_4_ - uStack_a8._4_4_ <= fVar33) {
        bVar5 = false;
        if (((float)uStack_a8 - (float)uStack_b0 < fVar31) &&
           (bVar5 = false, !NAN(uStack_a8._4_4_ - uStack_b0._4_4_) && !NAN(fVar33))) {
          bVar5 = uStack_a8._4_4_ - uStack_b0._4_4_ < fVar33;
        }
        if (!bVar5) goto LAB_108b45740;
      }
    }
  }
  else if ((float)uStack_b0 <= (float)uStack_a8) goto LAB_108b45740;
  lVar23 = 0;
  lVar25 = lStack_100;
  do {
    iVar21 = *(int *)(lStack_d8 + 0x30);
    iVar26 = (int)uVar9;
    puVar27 = apuStack_a0[lVar23];
    _memcpy(lVar25 + lStack_d0,puVar27 + 0x1000,uVar4);
    uVar9 = uStack_e0;
    uVar11 = (ulong)uStack_b4;
    func_0x000108b47174(lStack_d8,lVar25 + (long)iVar21 * 4,
                        puVar27 + 0x1000 + (long)(iVar21 - iVar26) * 4,
                        *(undefined4 *)((long)param_4 + 0x6c));
    uVar15 = *(undefined8 *)(extraout_x8_03 + 0x48);
    uVar14 = *(undefined4 *)((long)param_4 + 0x4c);
    puVar22[-4] = (int)uVar9;
    puVar22[-3] = uVar14;
    uVar34 = 0;
    uVar13 = (ulong)uStack_e4;
    uVar12 = uVar9;
    FUN_108b416a4();
    lVar23 = lVar23 + 1;
    lVar25 = lVar25 + lStack_c8;
  } while (lVar23 < lStack_c0);
  func_0x000108b4728c();
LAB_108b45740:
  lVar18 = lStack_148;
  lVar23 = 0;
  lVar25 = (ulong)(0x400 - iVar19) << 2;
  lVar24 = lStack_148 * 4;
  lVar2 = lStack_148 * -4;
  pfVar8 = pfStack_138;
  do {
    _memcpy(lVar29,lVar28 + lVar24);
    if (iVar19 < 0x401) {
      _memmove(pfVar8,pfVar8 + lVar18,lVar25);
      pfVar7 = pfVar8 + (0x400 - lVar18);
      puVar27 = apuStack_a0[lVar23] + 0x1000;
      uVar9 = uStack_f0;
    }
    else {
      puVar27 = apuStack_a0[lVar23] + lVar18 * 4;
      pfVar7 = pfVar8;
      uVar9 = 0x1000;
    }
    _memcpy(pfVar7,puVar27,uVar9);
    uVar16 = (uint)uVar13;
    uVar14 = (undefined4)uVar15;
    lVar23 = lVar23 + 1;
    pfVar8 = pfVar8 + 0x400;
    lVar28 = lVar28 + lStack_c8;
    lVar29 = lVar29 + lStack_d0;
    bVar5 = lVar23 == lStack_c0;
  } while (lVar23 < lStack_c0);
  *puStack_130 = (int)uVar34;
  *puStack_128 = uStack_b4;
  *piStack_140 = iStack_114;
  lVar10 = lStack_d0;
  func_0x000108b470a0(apuStack_a0[2]);
  if (bVar5) {
    return (float *)(ulong)uStack_118;
  }
  ___stack_chk_fail();
  *(ulong *)(puVar22 + -0x1c) = uVar34;
  *(ulong *)(puVar22 + -0x1a) = (ulong)(uint)-fVar30;
  *(ulong *)(puVar22 + -0x18) = uVar20;
  *(long *)(puVar22 + -0x16) = lVar28;
  *(long *)(puVar22 + -0x14) = lVar18;
  *(long *)(puVar22 + -0x12) = lVar25;
  *(undefined1 ***)(puVar22 + -0x10) = apuStack_a0;
  *(float **)(puVar22 + -0xe) = pfVar8;
  *(long *)(puVar22 + -0xc) = lVar2 + 0x1000;
  *(long *)(puVar22 + -10) = lVar24;
  *(long *)(puVar22 + -8) = lVar23;
  *(long *)(puVar22 + -6) = lVar29;
  *(undefined1 **)(puVar22 + -4) = &stack0xfffffffffffffff0;
  *(code **)(puVar22 + -2) = FUN_108b4584c;
  puVar22[-0x2d] = uVar14;
  *(ulong *)(puVar22 + -0x2c) = uVar12;
  *(ulong *)(puVar22 + -0x22) = uVar11;
  uVar14 = *puVar22;
  fVar30 = pfVar7[1];
  fVar31 = pfVar7[0xc];
  if ((int)puVar27 == 0) {
    fVar31 = (float)((int)fVar31 << (ulong)(uVar16 & 0x1f));
    fVar33 = (float)((int)pfVar7[10] - uVar16);
    puVar27 = (undefined1 *)0x1;
  }
  else {
    fVar33 = pfVar7[10];
  }
  iVar19 = 0;
  lVar23 = 0;
  uVar16 = (uint)puVar27;
  *(ulong *)(puVar22 + -0x26) = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
  *(ulong *)(puVar22 + -0x24) = (ulong)((int)fVar31 * uVar16);
  *(ulong *)(puVar22 + -0x30) = param_9;
  uVar16 = (int)fVar31 * uVar16 + (int)fVar30;
  *(ulong *)(puVar22 + -0x2a) = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2;
  *(long *)(puVar22 + -0x28) = (long)(int)param_9;
  pfVar8 = pfVar7;
  do {
    puVar22[-0x1f] = iVar19;
    lVar29 = *(long *)(puVar22 + -0x22) + (long)iVar19 * 4;
    lVar25 = *(long *)(puVar22 + -0x26);
    *(long *)(puVar22 + -0x1e) = lVar10;
    for (; lVar25 != 0; lVar25 = lVar25 + -1) {
      pfVar8 = pfVar7 + 0x14;
      FUN_108b4af28(pfVar8,lVar10,lVar29,*(undefined8 *)(pfVar7 + 0x12),fVar30,fVar33,puVar27,uVar14
                   );
      lVar10 = lVar10 + (-(ulong)((uint)fVar31 >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)fVar31 << 2);
      lVar29 = lVar29 + 4;
    }
    lVar23 = lVar23 + 1;
    lVar10 = *(long *)(puVar22 + -0x1e) + *(long *)(puVar22 + -0x2a);
    iVar19 = puVar22[-0x1f] + (int)*(undefined8 *)(puVar22 + -0x24);
  } while (lVar23 < *(long *)(puVar22 + -0x28));
  uVar15 = *(undefined8 *)(puVar22 + -0x2c);
  pfVar7 = *(float **)(puVar22 + -0x22);
  uVar16 = (uint)*(undefined8 *)(puVar22 + -0x24);
  if ((int)uVar15 == 1 && (int)*(undefined8 *)(puVar22 + -0x30) == 2) {
    pfVar3 = pfVar7;
    for (uVar20 = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
        uVar20 = uVar20 - 1) {
      *pfVar3 = pfVar3[(int)uVar16] * 0.5 + *pfVar3 * 0.5;
      pfVar3 = pfVar3 + 1;
    }
  }
  iVar19 = puVar22[-0x2d];
  if (iVar19 != 1) {
    iVar21 = 0;
    lVar23 = 0;
    uVar1 = 0;
    if (iVar19 != 0) {
      uVar1 = (int)uVar16 / iVar19;
    }
    do {
      pfVar8 = pfVar7 + iVar21;
      for (uVar20 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
          uVar20 = uVar20 - 1) {
        *pfVar8 = *pfVar8 * (float)iVar19;
        pfVar8 = pfVar8 + 1;
      }
      pfVar8 = pfVar7 + (int)(uVar16 * (int)lVar23 + uVar1);
      _bzero(pfVar8,-(ulong)(uVar16 - uVar1 >> 0x1f) & 0xfffffffc00000000 |
                    (ulong)(uVar16 - uVar1) << 2);
      lVar23 = lVar23 + 1;
      iVar21 = iVar21 + uVar16;
    } while (lVar23 < (int)uVar15);
  }
  return pfVar8;
}



/* Entry: 108b4584c; end: 108b45a2f;  */

void FUN_108b4584c(long param_1,undefined8 param_2,long param_3,float *param_4,int param_5,
                  int param_6,uint param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  iVar8 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((int)param_2 == 0) {
    uVar3 = uVar3 << (ulong)(param_7 & 0x1f);
    iVar4 = *(int *)(param_1 + 0x28) - param_7;
    param_2 = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  iVar7 = 0;
  lVar10 = 0;
  uVar11 = (uint)param_2;
  uVar5 = uVar3 * uVar11;
  uVar1 = uVar5 + iVar8;
  do {
    pfVar6 = param_4 + iVar7;
    lVar2 = param_3;
    for (uVar9 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar9 != 0;
        uVar9 = uVar9 - 1) {
      FUN_108b4af28(param_1 + 0x50,lVar2,pfVar6,*(undefined8 *)(param_1 + 0x48),iVar8,iVar4,param_2,
                    param_9);
      lVar2 = lVar2 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
      pfVar6 = pfVar6 + 1;
    }
    lVar10 = lVar10 + 1;
    param_3 = param_3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
    iVar7 = iVar7 + uVar5;
  } while (lVar10 < param_6);
  if (param_5 == 1 && param_6 == 2) {
    pfVar6 = param_4;
    for (uVar9 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1)
    {
      *pfVar6 = pfVar6[(int)uVar5] * 0.5 + *pfVar6 * 0.5;
      pfVar6 = pfVar6 + 1;
    }
  }
  if (param_8 != 1) {
    iVar8 = 0;
    lVar10 = 0;
    uVar3 = 0;
    if (param_8 != 0) {
      uVar3 = (int)uVar5 / param_8;
    }
    do {
      pfVar6 = param_4 + iVar8;
      for (uVar9 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar9 != 0;
          uVar9 = uVar9 - 1) {
        *pfVar6 = *pfVar6 * (float)param_8;
        pfVar6 = pfVar6 + 1;
      }
      _bzero(param_4 + (int)(uVar5 * (int)lVar10 + uVar3),
             -(ulong)(uVar5 - uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar5 - uVar3) << 2);
      lVar10 = lVar10 + 1;
      iVar8 = iVar8 + uVar5;
    } while (lVar10 < param_5);
  }
  return;
}



/* Entry: 108b45a30; end: 108b465fb;  */

ulong FUN_108b45a30(undefined8 param_1,float param_2,float *param_3,float *param_4,float *param_5,
                   ulong param_6,undefined8 param_7,ulong param_8,undefined8 param_9,long param_10)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  float *pfVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int extraout_w8;
  uint uVar16;
  uint extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined4 extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined4 extraout_w8_06;
  undefined4 extraout_w8_07;
  uint extraout_w8_08;
  undefined4 extraout_w8_09;
  uint extraout_w8_10;
  uint extraout_w8_11;
  int extraout_w8_12;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar17;
  long lVar18;
  float *extraout_x8_03;
  float *pfVar19;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  undefined8 *puVar20;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  undefined4 *puVar21;
  undefined4 uVar22;
  long extraout_x9;
  float *extraout_x9_00;
  short *psVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint extraout_w11;
  int iVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  int extraout_w13;
  long extraout_x13;
  float *pfVar28;
  float *extraout_x13_00;
  float *extraout_x13_01;
  uint uVar29;
  int iVar30;
  long extraout_x14;
  float *pfVar31;
  float *extraout_x14_00;
  float *extraout_x14_01;
  long extraout_x14_02;
  long extraout_x14_03;
  long extraout_x15;
  long *plVar32;
  long lVar33;
  float *pfVar34;
  int *piVar35;
  undefined8 uVar36;
  float *pfVar37;
  float *pfVar38;
  ulong uVar39;
  float *pfVar40;
  float *pfVar41;
  ulong uVar42;
  ulong uVar43;
  float *pfVar44;
  long lVar45;
  long lVar46;
  float *pfVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ulong uVar62;
  undefined8 in_stack_00000090;
  int in_stack_000000a0;
  long in_stack_000000a8;
  uint in_stack_000000b0;
  int in_stack_000000b4;
  int in_stack_000000b8;
  long in_stack_000000c0;
  uint in_stack_000000c8;
  int in_stack_000000cc;
  int *in_stack_000000d0;
  undefined4 in_stack_000000d8;
  long in_stack_000000e0;
  float *in_stack_000000e8;
  ulong in_stack_000000f0;
  float *in_stack_000000f8;
  long alStack_258 [9];
  float afStack_210 [44];
  float afStack_160 [30];
  int *piStack_e8;
  long lStack_e0;
  float *pfStack_d8;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  float *pfStack_90;
  int iStack_84;
  ulong uStack_80;
  float *pfStack_78;
  float *pfStack_70;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  float *pfStack_48;
  float *pfStack_40;
  long lStack_38;
  uint uStack_2c;
  long lStack_28;
  float *pfStack_20;
  float *pfStack_18;
  undefined8 uStack_10;
  
  func_0x000108b472b4();
  pfStack_20 = in_stack_000000f8;
  uStack_a8 = in_stack_000000f0;
  pfStack_d8 = in_stack_000000e8;
  lStack_e0 = in_stack_000000e0;
  lStack_28 = CONCAT44(lStack_28._4_4_,in_stack_000000d8);
  iStack_84 = in_stack_000000cc;
  uStack_2c = in_stack_000000c8;
  lStack_c0 = in_stack_000000c0;
  iStack_c4 = in_stack_000000b8;
  iStack_c8 = in_stack_000000b4;
  uStack_cc = in_stack_000000b0;
  uVar13 = param_8;
  uVar36 = param_9;
  uStack_b0 = param_7;
  pfStack_90 = param_3;
  pfStack_48 = param_4;
  pfStack_18 = param_5;
  func_0x000108b470b4();
  uVar16 = (int)uVar36 * (int)param_6;
  uStack_10 = extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2);
  pfVar38 = (float *)((long)afStack_160 + (0x70 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
  pfStack_40 = pfVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar38 = (float *)((long)pfVar38 - extraout_x12);
  lStack_38 = (long)(int)param_6;
  uVar39 = -(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar39 + 0xf & 0xfffffffffffffff0);
  pfVar44 = (float *)((long)pfVar38 - extraout_x8_02);
  lStack_b8 = param_10;
  _bzero(param_10,uVar39);
  uStack_98 = param_8;
  uVar16 = (uint)param_8 & ((int)(uint)param_8 >> 0x1f ^ 0xffffffffU);
  uVar42 = (ulong)uVar16;
  for (uVar17 = 0; uVar42 != uVar17; uVar17 = uVar17 + 1) {
    fVar59 = (float)((int)uVar17 + 5);
    pfVar38[uVar17] =
         (((float)(int)*(short *)(in_stack_000000a8 + uVar17 * 2) * 0.0625 + 0.5 +
          (float)(9 - in_stack_000000a0)) - *(float *)(&UNK_10df90bb8 + uVar17 * 4)) +
         fVar59 * fVar59 * 0.0062;
  }
  lVar18 = 0;
  lVar33 = (long)(int)param_9;
  uVar62 = 0xc1ff3333;
  pfVar40 = pfVar38;
  uVar17 = uVar42;
  pfVar47 = pfStack_90;
  pfVar12 = pfStack_90;
  do {
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      if ((float)uVar62 <= *pfVar47 - *pfVar40) {
        uVar62 = (ulong)(uint)(*pfVar47 - *pfVar40);
      }
      pfVar40 = pfVar40 + 1;
      pfVar47 = pfVar47 + 1;
    }
    lVar18 = lVar18 + 1;
    pfVar47 = pfVar12 + lStack_38;
    pfVar40 = pfVar38;
    uVar17 = uVar42;
    pfVar12 = pfVar47;
  } while (lVar18 < lVar33);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar47 = (float *)((long)pfVar44 - (uVar39 + 0xf & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar40 = (float *)((long)pfVar47 - extraout_x12_00);
  lVar46 = uVar42 * 4;
  for (lVar18 = 0; lVar46 - lVar18 != 0; lVar18 = lVar18 + 4) {
    *(float *)((long)pfVar47 + lVar18) =
         *(float *)(extraout_x13 + lVar18) - *(float *)((long)pfVar38 + lVar18);
  }
  if ((int)param_9 == 2) {
    pfVar12 = pfVar38;
    pfVar19 = pfVar47;
    pfVar8 = (float *)(extraout_x13 + lStack_38 * 4);
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      fVar59 = *pfVar19;
      if (*pfVar19 <= *pfVar8 - *pfVar12) {
        fVar59 = *pfVar8 - *pfVar12;
      }
      *pfVar19 = fVar59;
      pfVar12 = pfVar12 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar8 = pfVar8 + 1;
    }
  }
  pfVar37 = (float *)(long)(int)uStack_98;
  uVar17 = -(uStack_98 >> 0x1f & 1) & 0xfffffffc00000000 | (uStack_98 & 0xffffffff) << 2;
  pfVar8 = pfVar40;
  pfVar12 = pfVar47;
  uStack_58 = uVar17;
  lStack_50 = extraout_x14;
  _memcpy();
  lVar18 = 1;
  pfVar28 = pfStack_18;
  pfVar31 = pfStack_20;
  pfVar19 = pfVar47;
  while (lVar18 < (long)pfVar37) {
    fVar59 = pfVar19[1];
    func_0x000108b47194();
    *extraout_x8_03 = fVar59;
    pfVar28 = extraout_x13_00;
    pfVar31 = extraout_x14_00;
    pfVar19 = extraout_x8_03;
    lVar18 = extraout_x9 + 1;
  }
  uStack_a0 = param_9;
  uVar43 = (long)pfVar37 - 2;
  uVar15 = (uint)uVar43;
  uVar39 = uVar43;
  pfVar19 = pfStack_48;
  pfVar34 = pfStack_40;
  while (pfStack_48 = pfVar19, pfStack_40 = pfVar34, -1 < (int)uVar15) {
    fVar59 = pfVar47[uVar39 & 0xffffffff];
    func_0x000108b47194();
    *extraout_x9_00 = fVar59;
    uVar15 = extraout_w8 - 1;
    uVar39 = (ulong)uVar15;
    pfVar28 = extraout_x13_01;
    pfVar31 = extraout_x14_01;
    pfVar19 = pfStack_48;
    pfVar34 = pfStack_40;
  }
  iVar14 = (int)uVar36;
  fVar48 = (float)uVar62 + -12.0;
  uVar39 = uVar42;
  pfVar41 = pfVar40;
  fVar59 = 0.0;
  if (0.0 <= fVar48) {
    fVar59 = fVar48;
  }
  for (; uVar39 != 0; uVar39 = uVar39 - 1) {
    fVar48 = fVar59;
    if (fVar59 <= *pfVar47) {
      fVar48 = *pfVar47;
    }
    iVar24 = (int)((*pfVar41 - fVar48) + 0.5);
    uVar15 = 5;
    if ((uint)-iVar24 < 5) {
      uVar15 = -iVar24;
    }
    fVar48 = 4.48416e-44;
    if (iVar24 < 1) {
      fVar48 = (float)(0x20 >> (ulong)(uVar15 & 0x1f));
    }
    *pfVar31 = fVar48;
    pfVar47 = pfVar47 + 1;
    pfVar41 = pfVar41 + 1;
    pfVar31 = pfVar31 + 1;
  }
  if (iStack_84 < (int)(uStack_2c * 5 + 0x1e) || (int)lStack_28 != 0) {
    for (pfVar19 = (float *)(long)(int)uStack_b0; bVar7 = pfVar19 == pfVar37,
        (long)pfVar19 < (long)pfVar37; pfVar19 = (float *)((long)pfVar19 + 1)) {
      *(undefined4 *)(uStack_a8 + (long)pfVar19 * 4) = 0xd;
    }
    iVar27 = 0;
  }
  else {
    piStack_e8 = in_stack_000000d0;
    pfVar12 = (float *)0x0;
    uVar15 = 0;
    lStack_60 = (long)pfVar37 - 1;
    if (7 < uVar16) {
      uVar16 = 8;
    }
    uStack_80 = (ulong)uVar16;
    pfVar8 = pfVar34 + -1;
    pfStack_70 = pfVar44 + 2;
    pfStack_78 = pfVar44 + (long)pfVar37;
    lStack_68 = lVar33;
    do {
      pfVar47 = pfVar28;
      lStack_28 = (long)pfVar12 * lStack_38;
      uVar17 = uStack_58;
      pfStack_20 = pfVar8;
      pfStack_18 = pfVar12;
      _memcpy(pfVar44,pfStack_48 + lStack_28);
      pfVar12 = pfVar44;
      pfVar8 = pfVar47;
      pfVar28 = pfVar19;
      uVar42 = uStack_80;
      if (uStack_2c == 0) {
        for (; uVar42 != 0; uVar42 = uVar42 - 1) {
          fVar59 = *pfVar28;
          if (*pfVar28 <= *pfVar8) {
            fVar59 = *pfVar8;
          }
          *pfVar12 = fVar59;
          pfVar12 = pfVar12 + 1;
          pfVar8 = pfVar8 + 1;
          pfVar28 = pfVar28 + 1;
        }
      }
      pfVar41 = pfStack_40;
      uVar42 = uStack_a8;
      pfVar12 = pfStack_40 + lStack_28;
      fVar49 = *pfVar44;
      *pfVar12 = fVar49;
      fVar59 = fVar49;
      fVar48 = fVar49;
      for (lVar18 = 1; lVar18 < (long)pfVar37; lVar18 = lVar18 + 1) {
        fVar54 = fVar59 + 0.5;
        fVar59 = pfVar44[lVar18];
        uVar16 = (uint)lVar18;
        if (fVar59 <= fVar54) {
          uVar16 = uVar15;
        }
        fVar48 = fVar48 + 1.5;
        if (fVar59 <= fVar48) {
          fVar48 = fVar59;
        }
        pfVar34[lVar18] = fVar48;
        uVar15 = uVar16;
      }
      uVar39 = (ulong)uVar15;
      pfVar8 = pfStack_20 + uVar15;
      while (0 < (int)uVar39) {
        lVar18 = uVar39 - 1;
        uVar39 = uVar39 - 1;
        fVar59 = pfVar8[1] + 2.0;
        if (pfVar44[lVar18] <= pfVar8[1] + 2.0) {
          fVar59 = pfVar44[lVar18];
        }
        fVar48 = *pfVar8;
        if (fVar59 <= *pfVar8) {
          fVar48 = fVar59;
        }
        *pfVar8 = fVar48;
        pfVar8 = pfVar8 + -1;
      }
      pfVar8 = pfStack_70;
      for (lVar18 = 2; lVar18 < (long)uVar43; lVar18 = lVar18 + 1) {
        fVar59 = pfVar8[-2];
        fVar54 = pfVar8[-1];
        fVar48 = fVar54;
        if (fVar59 <= fVar54) {
          fVar48 = fVar59;
          fVar59 = fVar54;
        }
        fVar57 = *pfVar8;
        fVar60 = pfVar8[1];
        fVar54 = pfVar8[2];
        fVar61 = fVar60;
        if (fVar60 <= fVar54) {
          fVar61 = fVar54;
          fVar54 = fVar60;
        }
        fVar60 = fVar59;
        if (fVar48 <= fVar54) {
          fVar60 = fVar61;
          fVar48 = fVar54;
          fVar61 = fVar59;
        }
        fVar59 = fVar57;
        if (fVar60 <= fVar57) {
          fVar59 = fVar60;
        }
        fVar54 = fVar61;
        if (fVar48 <= fVar61) {
          fVar54 = fVar48;
        }
        if (fVar57 < fVar48) {
          fVar59 = fVar54;
        }
        if (fVar61 <= fVar60) {
          fVar60 = fVar61;
        }
        fVar54 = fVar57;
        if (fVar48 <= fVar57) {
          fVar54 = fVar48;
        }
        if (fVar61 < fVar48) {
          fVar60 = fVar54;
        }
        if (fVar61 < fVar57) {
          fVar59 = fVar60;
        }
        fVar48 = pfVar34[lVar18];
        if (pfVar34[lVar18] <= fVar59 + -1.0) {
          fVar48 = fVar59 + -1.0;
        }
        pfVar34[lVar18] = fVar48;
        pfVar8 = pfVar8 + 1;
      }
      lVar18 = 0;
      fVar59 = pfVar44[1];
      fVar54 = pfVar44[2];
      fVar48 = fVar49;
      if (fVar49 <= fVar59) {
        fVar48 = fVar59;
        fVar59 = fVar49;
      }
      fVar49 = fVar54;
      if (fVar54 <= fVar59) {
        fVar49 = fVar59;
      }
      if (fVar54 <= fVar48) {
        fVar48 = fVar49;
      }
      fVar48 = fVar48 + -1.0;
      uVar39 = *(ulong *)pfVar12;
      *(ulong *)pfVar12 =
           CONCAT44(fVar48,fVar48) ^
           (CONCAT44(fVar48,fVar48) ^ uVar39) &
           CONCAT44(-(uint)(fVar48 < (float)(uVar39 >> 0x20)),-(uint)(fVar48 < (float)uVar39));
      fVar49 = pfStack_78[-3];
      fVar59 = pfStack_78[-2];
      fVar48 = fVar49;
      if (fVar49 <= fVar59) {
        fVar48 = fVar59;
        fVar59 = fVar49;
      }
      fVar54 = pfStack_78[-1];
      fVar49 = fVar54;
      if (fVar54 <= fVar59) {
        fVar49 = fVar59;
      }
      if (fVar54 <= fVar48) {
        fVar48 = fVar49;
      }
      fVar48 = fVar48 + -1.0;
      fVar59 = pfVar12[uVar43];
      if (pfVar12[uVar43] <= fVar48) {
        fVar59 = fVar48;
      }
      pfVar12[uVar43] = fVar59;
      fVar59 = pfVar12[lStack_60];
      if (pfVar12[lStack_60] <= fVar48) {
        fVar59 = fVar48;
      }
      pfVar12[lStack_60] = fVar59;
      for (; lVar46 - lVar18 != 0; lVar18 = lVar18 + 4) {
        fVar59 = *(float *)((long)pfVar34 + lVar18);
        if (*(float *)((long)pfVar34 + lVar18) <= *(float *)((long)pfVar38 + lVar18)) {
          fVar59 = *(float *)((long)pfVar38 + lVar18);
        }
        *(float *)((long)pfVar34 + lVar18) = fVar59;
      }
      pfVar12 = (float *)((long)pfStack_18 + 1);
      pfVar19 = (float *)((long)pfVar19 + lStack_50);
      pfVar34 = (float *)((long)pfVar34 + lStack_50);
      pfVar8 = (float *)((long)pfStack_20 + lStack_50);
      pfVar28 = (float *)((long)pfVar47 + lStack_50);
    } while ((long)pfVar12 < lStack_68);
    pfVar38 = (float *)(long)(int)uStack_b0;
    pfVar12 = pfVar38;
    if ((int)uStack_a0 == 2) {
      lVar18 = ((long)pfVar38 + lStack_38) * 4;
      for (pfVar19 = pfVar38; (long)pfVar19 < (long)pfVar37; pfVar19 = (float *)((long)pfVar19 + 1))
      {
        fVar59 = *(float *)((long)pfStack_40 + lVar18);
        if (*(float *)((long)pfStack_40 + lVar18) <= pfStack_40[(long)pfVar19] + -4.0) {
          fVar59 = pfStack_40[(long)pfVar19] + -4.0;
        }
        *(float *)((long)pfStack_40 + lVar18) = fVar59;
        fVar48 = pfStack_40[(long)pfVar19];
        if (pfStack_40[(long)pfVar19] <= fVar59 + -4.0) {
          fVar48 = fVar59 + -4.0;
        }
        pfStack_40[(long)pfVar19] = fVar48;
        fVar59 = 0.0;
        if (0.0 <= pfStack_90[(long)pfVar19] - fVar48) {
          fVar59 = pfStack_90[(long)pfVar19] - fVar48;
        }
        fVar49 = *(float *)((long)pfStack_90 + lVar18) - *(float *)((long)pfStack_40 + lVar18);
        fVar48 = 0.0;
        if (0.0 <= fVar49) {
          fVar48 = fVar49;
        }
        pfStack_40[(long)pfVar19] = (fVar59 + fVar48) * 0.5;
        lVar18 = lVar18 + 4;
      }
    }
    else {
      for (pfVar19 = pfVar38; (long)pfVar19 < (long)pfVar37; pfVar19 = (float *)((long)pfVar19 + 1))
      {
        fVar59 = 0.0;
        if (0.0 <= pfStack_90[(long)pfVar19] - pfStack_40[(long)pfVar19]) {
          fVar59 = pfStack_90[(long)pfVar19] - pfStack_40[(long)pfVar19];
        }
        pfStack_40[(long)pfVar19] = fVar59;
      }
    }
    for (; (long)pfVar12 < (long)pfVar37; pfVar12 = (float *)((long)pfVar12 + 1)) {
      fVar48 = *(float *)(lStack_e0 + (long)pfVar12 * 4);
      fVar59 = pfStack_40[(long)pfVar12];
      if (pfStack_40[(long)pfVar12] <= fVar48) {
        fVar59 = fVar48;
      }
      pfStack_40[(long)pfVar12] = fVar59;
    }
    lVar33 = 0x43500000;
    for (pfVar12 = pfVar38; iVar14 = (int)uVar36, (long)pfVar12 < (long)pfVar37;
        pfVar12 = (float *)((long)pfVar12 + 1)) {
      fVar48 = pfVar41[(long)pfVar12];
      dVar50 = (double)fVar48 * 0.6931471805599453;
      _exp();
      fVar59 = (float)(int)((float)dVar50 * 13.0 + 0.5);
      if (4.0 <= fVar48) {
        fVar59 = 208.0;
      }
      *(int *)(uVar42 + (long)pfVar12 * 4) = (int)fVar59;
    }
    pfVar8 = (float *)(ulong)uStack_cc;
    pfVar12 = pfVar38;
    if ((uStack_cc == 0) && (pfVar19 = pfVar38, iStack_c8 == 0 || iStack_c4 != 0)) {
      for (; (long)pfVar19 < (long)pfVar37; pfVar19 = (float *)((long)pfVar19 + 1)) {
        pfVar41[(long)pfVar19] = pfVar41[(long)pfVar19] * 0.5;
      }
    }
    for (; (long)pfVar12 < (long)pfVar37; pfVar12 = (float *)((long)pfVar12 + 1)) {
      fVar59 = 2.0;
      if (((long)pfVar12 < 8) || (fVar59 = 0.5, (float *)0xb < pfVar12)) {
        pfVar41[(long)pfVar12] = fVar59 * pfVar41[(long)pfVar12];
      }
    }
    if (0.98 < param_2) {
      iVar24 = (int)(((float)param_1 * 120.0) / 3.1415927 + 0.5);
      psVar1 = (short *)(lStack_c0 + (long)pfVar38 * 2);
      for (pfVar12 = pfVar38; psVar23 = psVar1 + 1, (long)pfVar12 < (long)pfVar37;
          pfVar12 = (float *)((long)pfVar12 + 1)) {
        sVar4 = *psVar1;
        if ((sVar4 <= iVar24) && (iVar24 <= *psVar23)) {
          pfVar41[(long)pfVar12] = pfVar41[(long)pfVar12] + 2.0;
        }
        iVar25 = (int)sVar4;
        if ((iVar25 + -1 <= iVar24) && (iVar24 <= *psVar23 + 1)) {
          pfVar41[(long)pfVar12] = pfVar41[(long)pfVar12] + 1.0;
        }
        if ((iVar25 + -2 <= iVar24) && (iVar24 <= *psVar23 + 2)) {
          pfVar41[(long)pfVar12] = pfVar41[(long)pfVar12] + 1.0;
        }
        if ((iVar25 + -3 <= iVar24) && (iVar24 <= *psVar23 + 3)) {
          pfVar41[(long)pfVar12] = pfVar41[(long)pfVar12] + 0.5;
        }
        psVar1 = psVar23;
      }
      if (*(short *)(lStack_c0 + (long)pfVar37 * 2) <= iVar24) {
        pfVar41[lStack_60] = pfVar41[lStack_60] + 2.0;
        pfVar41[uVar43] = pfVar41[uVar43] + 1.0;
      }
    }
    if (*pfStack_d8 != 0.0) {
      iVar24 = (int)uStack_98;
      if (0x12 < iVar24) {
        iVar24 = 0x13;
      }
      for (pfVar12 = pfVar38; (long)pfVar12 < (long)iVar24; pfVar12 = (float *)((long)pfVar12 + 1))
      {
        fVar59 = (float)NEON_ucvtf((uint)*(byte *)((long)(pfStack_d8 + 0xb) + (long)pfVar12));
        pfVar41[(long)pfVar12] = pfVar41[(long)pfVar12] + fVar59 * 0.015625;
      }
    }
    fVar59 = 4.0;
    iVar24 = (iStack_84 << 1) / 3;
    iVar25 = 0;
    for (; bVar7 = pfVar38 == pfVar37, pfVar12 = pfStack_d8, in_stack_000000d0 = piStack_e8,
        iVar27 = iVar25, (long)pfVar38 < (long)pfVar37; pfVar38 = (float *)((long)pfVar38 + 1)) {
      fVar48 = (float)NEON_fminnm(pfVar41[(long)pfVar38],0x40800000);
      pfVar41[(long)pfVar38] = fVar48;
      psVar1 = (short *)(lStack_c0 + (long)pfVar38 * 2);
      uVar16 = ((int)psVar1[1] - (int)*psVar1) * (int)uStack_a0 << (ulong)(uStack_2c & 0x1f);
      if ((int)uVar16 < 6) {
        iVar26 = (int)fVar48;
        iVar27 = iVar26 * uVar16 * 8;
      }
      else if (uVar16 < 0x31) {
        iVar26 = (int)((fVar48 * (float)uVar16) / 6.0);
        iVar27 = iVar26 * 0x30;
      }
      else {
        iVar26 = (int)(fVar48 * 8.0);
        iVar27 = (int)(iVar26 * uVar16 * 8) >> 3;
      }
      iVar11 = iVar27 + iVar25 >> 6;
      bVar7 = iVar11 == iVar24;
      if ((!bVar7 && iVar24 <= iVar11) && (uStack_cc == 0 && iStack_c4 != 0 || iStack_c8 == 0)) {
        iVar27 = iVar24 * 0x40;
        *(int *)(lStack_b8 + (long)pfVar38 * 4) = iVar27 - iVar25;
        break;
      }
      *(int *)(lStack_b8 + (long)pfVar38 * 4) = iVar26;
      iVar25 = iVar27 + iVar25;
    }
  }
  *in_stack_000000d0 = iVar27;
  func_0x000108b470a0(uStack_10);
  if (bVar7) {
    uVar17 = extraout_x8;
    func_0x000108b472dc(uVar62,extraout_x8);
    return uVar17;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pfVar40 + -0x1c) = param_1;
  *(ulong *)(pfVar40 + -0x1a) = uVar62;
  *(float **)(pfVar40 + -0x18) = pfVar47;
  *(long *)(pfVar40 + -0x16) = lVar46;
  *(float **)(pfVar40 + -0x14) = pfVar44;
  *(ulong *)(pfVar40 + -0x12) = uVar43;
  *(ulong *)(pfVar40 + -0x10) = uVar42;
  *(float **)(pfVar40 + -0xe) = pfVar41;
  *(int **)(pfVar40 + -0xc) = in_stack_000000d0;
  *(float **)(pfVar40 + -10) = pfVar38;
  *(float **)(pfVar40 + -8) = pfVar37;
  *(long *)(pfVar40 + -6) = lVar33;
  *(undefined8 **)(pfVar40 + -4) = &stack0x00000090;
  *(code **)(pfVar40 + -2) = FUN_108b465fc;
  *(ulong *)(pfVar40 + -0x30) = uVar13;
  *(ulong *)(pfVar40 + -0x3c) = param_6;
  *(undefined8 *)(pfVar40 + -0x40) = *(undefined8 *)(pfVar40 + 2);
  uVar13 = uVar17;
  lVar18 = param_10;
  func_0x000108b470b4();
  iVar24 = (int)uVar13;
  *(undefined8 *)(pfVar40 + -0x20) = extraout_x8_04;
  fVar48 = -0.25;
  if (-0.25 <= 0.5 - fVar59) {
    fVar48 = 0.5 - fVar59;
  }
  uVar13 = (ulong)(uint)fVar48;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-((ulong)pfVar12 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)pfVar12 & 0xffffffff) << 2
             ,uVar13,0x3d23d70a);
  piVar35 = (int *)((long)pfVar40 + (-0x120 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0)));
  *(long *)(pfVar40 + -0x44) = extraout_x12_01 + -1;
  *(long *)(pfVar40 + -0x42) = extraout_x12_01;
  *(float **)(pfVar40 + -0x32) = pfVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar45 = (long)piVar35 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  *(long *)(pfVar40 + -0x38) = lVar45 - extraout_x15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar33 = (lVar45 - extraout_x15) - extraout_x14_02;
  *(long *)(pfVar40 + -0x46) = lVar33;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108b47120(lVar33 - extraout_x14_03);
  lVar46 = 0;
  fVar48 = (float)lVar18;
  fVar59 = fVar48;
  if (iVar24 == 0) {
    fVar59 = 0.0;
  }
  pfVar40[-0x34] = fVar59;
  pfVar40[-0x33] = (float)(extraout_w13 * iVar14);
  pfVar40[-0x35] = (float)((int)fVar48 - 1);
  pfVar40[-0x3a] = (float)((int)fVar48 * -2);
  pfVar40[-0x39] = (float)(1 << (ulong)((uint)fVar48 & 0x1f));
  *(float **)(pfVar40 + -0x3e) = pfVar12;
  *(int **)(pfVar40 + -0x2c) = piVar35;
  *(ulong *)(pfVar40 + -0x2a) = (ulong)((uint)pfVar12 & ((int)(uint)pfVar12 >> 0x1f ^ 0xffffffffU));
  *(long *)(pfVar40 + -0x2e) = lVar18;
  while( true ) {
    uVar16 = (uint)param_10;
    iVar14 = (int)uVar17;
    if (lVar46 == *(long *)(pfVar40 + -0x2a)) break;
    iVar24 = (int)*(short *)(*(long *)(pfVar40 + -0x32) + lVar46 * 2);
    fVar59 = (float)(*(short *)(*(long *)(pfVar40 + -0x32) + (lVar46 + 1) * 2) - iVar24);
    uVar15 = (int)fVar59 << (ulong)(uVar16 & 0x1f);
    pfVar38 = (float *)(ulong)uVar15;
    uVar42 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (long)pfVar38 << 2;
    _memcpy(lVar45,*(long *)(pfVar40 + -0x30) +
                   (long)((iVar24 << (ulong)(uVar16 & 0x1f)) + (int)pfVar40[-0x33]) * 4,uVar42);
    pfVar12 = pfVar38;
    func_0x000108b471d4(lVar45,pfVar38,pfVar40[-0x34]);
    iVar24 = 0;
    *(long *)(pfVar40 + -0x26) = lVar46;
    *(long *)(pfVar40 + -0x24) = lVar46 + 1;
    uVar39 = uVar13;
    if ((iVar14 != 0) && (fVar59 != 1.4013e-45)) {
      uVar36 = *(undefined8 *)(pfVar40 + -0x38);
      _memcpy(uVar36,lVar45,uVar42);
      FUN_108b3f170(uVar36,(int)uVar15 >> (uVar16 & 0x1f),pfVar40[-0x39]);
      pfVar12 = pfVar38;
      func_0x000108b471d4(uVar36,pfVar38,uVar16 + 1);
      fVar49 = (float)uVar39;
      fVar54 = (float)uVar13;
      fVar48 = fVar54;
      if (fVar49 < fVar54) {
        fVar48 = fVar49;
      }
      uVar13 = (ulong)(uint)fVar48;
      iVar24 = 0;
      if (fVar49 < fVar54) {
        iVar24 = -1;
      }
    }
    pfVar41 = (float *)0x0;
    pfVar40[-0x27] = fVar59;
    if (iVar14 == 0 && fVar59 != 1.4013e-45) {
      uVar16 = uVar16 + 1;
    }
    fVar59 = pfVar40[-0x35];
    uVar62 = uVar13;
    for (uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU); uVar13 = uVar39, uVar16 != 0;
        uVar16 = uVar16 - 1) {
      uVar29 = (uint)pfVar41;
      pfVar41 = (float *)(ulong)(uVar29 + 1);
      fVar48 = fVar59;
      if (iVar14 == 0) {
        fVar48 = (float)(uVar29 + 1);
      }
      uVar42 = (ulong)(uint)fVar48;
      FUN_108b3f170(lVar45,(int)uVar15 >> (uVar29 & 0x1f),1 << (ulong)(uVar29 & 0x1f));
      pfVar12 = pfVar38;
      func_0x000108b471d4(lVar45,pfVar38,uVar42);
      fVar49 = (float)uVar13;
      fVar54 = (float)uVar62;
      fVar48 = fVar49;
      if (fVar54 <= fVar49) {
        fVar48 = fVar54;
      }
      uVar62 = (ulong)(uint)fVar48;
      if (fVar54 > fVar49) {
        iVar24 = uVar29 + 1;
      }
      fVar59 = (float)((int)fVar59 - 1);
      uVar39 = uVar13;
    }
    fVar59 = (float)(iVar24 * -2);
    if (iVar14 != 0) {
      fVar59 = (float)(iVar24 * 2);
    }
    param_10 = *(long *)(pfVar40 + -0x2e);
    piVar35 = *(int **)(pfVar40 + -0x2c);
    lVar18 = *(long *)(pfVar40 + -0x26);
    piVar35[lVar18] = (int)fVar59;
    lVar46 = *(long *)(pfVar40 + -0x24);
    if ((pfVar40[-0x27] == 1.4013e-45) && ((fVar59 == 0.0 || (fVar59 == pfVar40[-0x3a])))) {
      piVar35[lVar18] = (int)fVar59 + -1;
    }
  }
  lVar18 = 0;
  lVar46 = *(long *)(pfVar40 + -0x42);
  piVar3 = *(int **)(pfVar40 + -0x40);
  iVar25 = *piVar3;
  iVar27 = *piVar35;
  uVar15 = iVar14 << 2;
  iVar26 = (int)param_7;
  iVar24 = iVar26;
  if (iVar14 != 0) {
    iVar24 = 0;
  }
  for (; iVar11 = (int)pfVar12, lVar18 != 2; lVar18 = lVar18 + 1) {
    iVar30 = (int)(char)(&UNK_10df8bcf4)[((ulong)uVar15 | lVar18 << 1) + (long)(int)uVar16 * 8];
    iVar5 = iVar27 + iVar30 * -2;
    iVar11 = -iVar5;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    fVar59 = (float)(iVar11 * iVar25);
    iVar10 = (int)(char)(&UNK_10df8bcf4)[((ulong)uVar15 | 1 | lVar18 << 1) + (long)(int)uVar16 * 8];
    iVar5 = iVar27 + iVar10 * -2;
    iVar11 = -iVar5;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    fVar48 = (float)(iVar24 + iVar11 * iVar25);
    for (pfVar12 = (float *)0x1; (long)pfVar12 < lVar46; pfVar12 = (float *)((long)pfVar12 + 1)) {
      fVar49 = fVar59;
      if ((int)fVar48 + iVar26 <= (int)fVar59) {
        fVar49 = (float)((int)fVar48 + iVar26);
      }
      fVar54 = (float)((int)fVar59 + iVar26);
      if ((int)fVar48 <= (int)fVar59 + iVar26) {
        fVar54 = fVar48;
      }
      iVar5 = piVar35[(long)pfVar12] + iVar30 * -2;
      iVar11 = -iVar5;
      if (-1 < iVar5) {
        iVar11 = iVar5;
      }
      fVar59 = (float)((int)fVar49 + iVar11 * piVar3[(long)pfVar12]);
      iVar5 = piVar35[(long)pfVar12] + iVar10 * -2;
      iVar11 = -iVar5;
      if (-1 < iVar5) {
        iVar11 = iVar5;
      }
      fVar48 = (float)((int)fVar54 + iVar11 * piVar3[(long)pfVar12]);
    }
    if ((int)fVar48 <= (int)fVar59) {
      fVar59 = fVar48;
    }
    pfVar40[lVar18 + -0x22] = fVar59;
  }
  uVar29 = 2;
  if (iVar14 == 0 || (int)pfVar40[-0x22] <= (int)pfVar40[-0x21]) {
    uVar29 = 0;
  }
  iVar30 = (int)(char)(&UNK_10df8bcf4)[(ulong)(uVar29 | uVar15) + (long)(int)uVar16 * 8];
  iVar5 = iVar27 + iVar30 * -2;
  iVar14 = -iVar5;
  if (-1 < iVar5) {
    iVar14 = iVar5;
  }
  iVar14 = iVar14 * iVar25;
  iVar10 = (int)(char)(&UNK_10df8bcf4)[(ulong)(uVar29 | uVar15 | 1) + (long)(int)uVar16 * 8];
  iVar27 = iVar27 + iVar10 * -2;
  iVar5 = -iVar27;
  if (-1 < iVar27) {
    iVar5 = iVar27;
  }
  iVar24 = iVar24 + iVar5 * iVar25;
  plVar32 = *(long **)(pfVar40 + -0x46);
  plVar9 = *(long **)(pfVar40 + -0x48);
  for (lVar18 = 1; lVar18 < lVar46; lVar18 = lVar18 + 1) {
    iVar25 = iVar24 + iVar26;
    *(uint *)((long)plVar32 + lVar18 * 4) = (uint)(iVar25 <= iVar14);
    iVar27 = iVar14;
    if (iVar25 <= iVar14) {
      iVar27 = iVar25;
    }
    iVar25 = iVar14 + iVar26;
    *(uint *)((long)plVar9 + lVar18 * 4) = (uint)(iVar24 <= iVar25);
    if (iVar24 <= iVar25) {
      iVar25 = iVar24;
    }
    iVar24 = piVar35[lVar18] + iVar30 * -2;
    iVar14 = -iVar24;
    if (-1 < iVar24) {
      iVar14 = iVar24;
    }
    iVar14 = iVar27 + iVar14 * piVar3[lVar18];
    iVar27 = piVar35[lVar18] + iVar10 * -2;
    iVar24 = -iVar27;
    if (-1 < iVar27) {
      iVar24 = iVar27;
    }
    iVar24 = iVar25 + iVar24 * piVar3[lVar18];
  }
  bVar7 = iVar14 == iVar24;
  lVar46 = *(long *)(pfVar40 + -0x3c);
  *(uint *)(lVar46 + *(long *)(pfVar40 + -0x44) * 4) = (uint)(iVar24 <= iVar14);
  lVar18 = (ulong)((int)*(undefined8 *)(pfVar40 + -0x3e) - 1) << 2;
  for (uVar16 = (int)*(undefined8 *)(pfVar40 + -0x3e) - 2; -1 < (int)uVar16; uVar16 = uVar16 - 1) {
    bVar7 = *(int *)(lVar46 + lVar18) == 1;
    plVar2 = plVar9;
    if (!bVar7) {
      plVar2 = plVar32;
    }
    *(undefined4 *)(lVar46 + (ulong)uVar16 * 4) = *(undefined4 *)((long)plVar2 + lVar18);
    lVar18 = lVar18 + -4;
  }
  func_0x000108b470a0(*(undefined8 *)(pfVar40 + -0x20));
  if (bVar7) {
    return (ulong)(extraout_w11 & 1);
  }
  ___stack_chk_fail();
  *(ulong *)(lVar33 + -0x40) = uVar42;
  *(float **)(lVar33 + -0x38) = pfVar41;
  *(ulong *)(lVar33 + -0x30) = uVar17;
  *(undefined8 *)(lVar33 + -0x28) = param_7;
  *(long *)(lVar33 + -0x20) = param_10;
  *(int **)(lVar33 + -0x18) = piVar35;
  *(float **)(lVar33 + -0x10) = pfVar40 + -4;
  *(code **)(lVar33 + -8) = FUN_108b46af8;
  *(long *)(lVar33 + -0x48) = lVar33;
  uVar17 = 0xfffffffb;
  switch(iVar11) {
  case 0x2718:
    func_0x000108b4707c();
    if (0xfffffffd < extraout_w8_01 - 3U) {
      *(int *)((long)plVar9 + 0xc) = extraout_w8_01;
      return 0;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
  case 0x2721:
  case 0x2722:
  case 0x2723:
  case 0x2724:
  case 0x2725:
  case 0x2727:
  case 0x2729:
  case 0x272b:
    goto LAB_108b46e6c;
  case 0x271a:
    func_0x000108b4707c();
    if ((-1 < extraout_w8_05) && (extraout_w8_05 < *(int *)(*plVar9 + 8))) {
      *(int *)((long)plVar9 + 0x24) = extraout_w8_05;
      return 0;
    }
    break;
  case 0x271c:
    func_0x000108b4707c();
    if ((0 < extraout_w8_04) && (extraout_w8_04 <= *(int *)(*plVar9 + 8))) {
      *(int *)(plVar9 + 5) = extraout_w8_04;
      return 0;
    }
    break;
  case 0x271f:
    func_0x000108b47090(0xfffffffb);
    if ((long *)*extraout_x8_09 != (long *)0x0) {
      *(long *)*extraout_x8_09 = *plVar9;
      return 0;
    }
    break;
  case 0x2720:
    uVar17 = 0;
    func_0x000108b4707c(0);
    *(undefined4 *)((long)plVar9 + 0x34) = extraout_w8_03;
    return uVar17;
  case 0x2726:
    func_0x000108b47090(0xfffffffb);
    puVar20 = (undefined8 *)*extraout_x8_08;
    if (puVar20 == (undefined8 *)0x0) {
      return 0;
    }
    uVar51 = puVar20[1];
    uVar36 = *puVar20;
    uVar53 = puVar20[3];
    uVar52 = puVar20[2];
    uVar56 = puVar20[5];
    uVar55 = puVar20[4];
    uVar58 = puVar20[6];
    *(undefined8 *)((long)plVar9 + 0xb4) = puVar20[7];
    *(undefined8 *)((long)plVar9 + 0xac) = uVar58;
    *(undefined8 *)((long)plVar9 + 0xa4) = uVar56;
    *(undefined8 *)((long)plVar9 + 0x9c) = uVar55;
    *(undefined8 *)((long)plVar9 + 0x94) = uVar53;
    *(undefined8 *)((long)plVar9 + 0x8c) = uVar52;
    *(undefined8 *)((long)plVar9 + 0x84) = uVar51;
    *(undefined8 *)((long)plVar9 + 0x7c) = uVar36;
    return 0;
  case 0x2728:
    uVar17 = 0;
    func_0x000108b4707c(0);
    *(undefined4 *)((long)plVar9 + 0x44) = extraout_w8_06;
    return uVar17;
  case 0x272a:
    uVar17 = 0;
    func_0x000108b47090(0);
    plVar9[0x1e] = *extraout_x8_10;
    return uVar17;
  case 0x272c:
    func_0x000108b47090(0xfffffffb);
    if ((undefined8 *)*extraout_x8_11 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)((long)plVar9 + 0xbc) = *(undefined8 *)*extraout_x8_11;
    return 0;
  default:
    switch(iVar11) {
    case 0xfbc:
      iVar24 = (int)plVar9[1];
      lVar18 = *plVar9;
      iVar14 = *(int *)(lVar18 + 4) + 0x400;
      iVar25 = *(int *)(lVar18 + 8) * iVar24;
      puVar21 = (undefined4 *)((long)plVar9 + (long)iVar25 * 4 + (long)(iVar14 * iVar24) * 4 + 0xfc)
      ;
      _bzero(plVar9 + 10,(long)(iVar24 * (iVar14 + *(int *)(lVar18 + 8) * 4) * 4 + 0xfc) + -0x50);
      uVar16 = *(int *)(lVar18 + 8) * iVar24;
      puVar6 = puVar21 + iVar25;
      for (uVar17 = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU)); uVar17 != 0;
          uVar17 = uVar17 - 1) {
        *puVar6 = 0xc1e00000;
        *puVar21 = 0xc1e00000;
        puVar21 = puVar21 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)((long)plVar9 + 0xdc) = 0;
      *(undefined8 *)((long)plVar9 + 0x54) = 0x3f80000000000002;
      *(undefined4 *)((long)plVar9 + 0x5c) = 0x100;
      *(undefined4 *)((long)plVar9 + 100) = 0;
      *(undefined4 *)(plVar9 + 0xd) = 0;
      return 0;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
    case 0xfc1:
    case 0xfc2:
    case 0xfc3:
      goto LAB_108b46e6c;
    case 0xfbf:
      func_0x000108b47090(0xfffffffb);
      puVar21 = (undefined4 *)*extraout_x8_06;
      if (puVar21 != (undefined4 *)0x0) {
        uVar17 = 0;
        uVar22 = (undefined4)plVar9[10];
        goto code_r0x000108b46dc4;
      }
      break;
    case 0xfc4:
      func_0x000108b4707c();
      if (0xffffffee < extraout_w8_02 - 0x19U) {
        *(int *)(plVar9 + 8) = extraout_w8_02;
        return 0;
      }
      break;
    case 0xfc5:
      uVar17 = 0;
      func_0x000108b47090(0);
      puVar21 = (undefined4 *)*extraout_x8_07;
      uVar22 = (undefined4)plVar9[8];
code_r0x000108b46dc4:
      *puVar21 = uVar22;
      return uVar17;
    default:
      if (iVar11 == 0xfa2) {
        func_0x000108b4707c();
        if (500 < extraout_w8_12 || extraout_w8_12 == -1) {
          iVar24 = (int)plVar9[1] * 750000;
          iVar14 = extraout_w8_12;
          if (iVar24 <= extraout_w8_12) {
            iVar14 = iVar24;
          }
          *(int *)((long)plVar9 + 0x2c) = iVar14;
          return 0;
        }
      }
      else {
        if (iVar11 == 0xfa6) {
          uVar17 = 0;
          func_0x000108b4707c(0);
          *(undefined4 *)(plVar9 + 6) = extraout_w8_09;
          return uVar17;
        }
        if (iVar11 == 0x2712) {
          func_0x000108b4707c();
          if (extraout_w8_11 < 3) {
            *(uint *)(plVar9 + 3) = (uint)(extraout_w8_11 != 2);
            *(uint *)(plVar9 + 2) = (uint)(extraout_w8_11 == 0);
            return 0;
          }
        }
        else if (iVar11 == 0xfae) {
          func_0x000108b4707c();
          if (extraout_w8_10 < 0x65) {
            *(uint *)((long)plVar9 + 0x3c) = extraout_w8_10;
            return 0;
          }
        }
        else {
          if (iVar11 == 0xfb4) {
            uVar17 = 0;
            func_0x000108b4707c(0);
            *(undefined4 *)(plVar9 + 7) = extraout_w8_07;
            return uVar17;
          }
          if (iVar11 == 0xfce) {
            func_0x000108b4707c();
            if (extraout_w8_08 < 2) {
              *(uint *)(plVar9 + 9) = extraout_w8_08;
              return 0;
            }
          }
          else if (iVar11 == 0xfcf) {
            func_0x000108b47090(0xfffffffb);
            puVar21 = (undefined4 *)*extraout_x8_12;
            if (puVar21 != (undefined4 *)0x0) {
              uVar17 = 0;
              uVar22 = (undefined4)plVar9[9];
              goto code_r0x000108b46dc4;
            }
          }
          else {
            if (iVar11 != 0xfaa) {
              return 0xfffffffb;
            }
            func_0x000108b4707c();
            if (extraout_w8_00 < 0xb) {
              *(uint *)((long)plVar9 + 0x1c) = extraout_w8_00;
              return 0;
            }
          }
        }
      }
    }
  }
  uVar17 = 0xffffffff;
LAB_108b46e6c:
  return uVar17;
}



/* Entry: 108b465fc; end: 108b46af7;  */

ulong FUN_108b465fc(float param_1,long param_2,ulong param_3,long param_4,long param_5,long param_6,
                   long param_7,int param_8,long param_9,undefined4 param_10,undefined4 param_11,
                   int *param_12)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined4 *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined4 extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  undefined4 extraout_w8_05;
  undefined4 extraout_w8_06;
  uint extraout_w8_07;
  undefined4 extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  int extraout_w8_11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  undefined8 *puVar18;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  undefined4 *puVar19;
  undefined4 uVar20;
  long *plVar21;
  ulong uVar22;
  uint extraout_w11;
  long extraout_x12;
  long extraout_x12_00;
  int extraout_w13;
  uint uVar23;
  int iVar24;
  long extraout_x14;
  long extraout_x14_00;
  int iVar25;
  long extraout_x15;
  int *piVar26;
  int iVar27;
  uint uVar28;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar29;
  ulong uVar30;
  float fVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  ulong uVar41;
  long alStack_168 [9];
  long *aplStack_120 [2];
  long lStack_110;
  long lStack_108;
  int *piStack_100;
  ulong uStack_f8;
  long lStack_f0;
  int iStack_e8;
  int iStack_e4;
  long lStack_e0;
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  int *piStack_b0;
  ulong uStack_a8;
  int iStack_9c;
  ulong uStack_98;
  ulong uStack_90;
  int aiStack_88 [2];
  undefined8 uStack_80;
  
  piStack_100 = param_12;
  lVar29 = param_4;
  lVar16 = param_9;
  lStack_f0 = param_5;
  lStack_c0 = param_7;
  func_0x000108b470b4();
  iVar13 = (int)lVar29;
  fVar6 = -0.25;
  if (-0.25 <= 0.5 - param_1) {
    fVar6 = 0.5 - param_1;
  }
  uVar11 = (ulong)(uint)fVar6;
  uStack_80 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2,uVar11,
             0x3d23d70a);
  piVar26 = (int *)((long)aplStack_120 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lStack_110 = extraout_x12 + -1;
  lStack_108 = extraout_x12;
  lStack_c8 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = (long)piVar26 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_e0 = lVar29 - extraout_x15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar21 = (long *)((lVar29 - extraout_x15) - extraout_x14);
  aplStack_120[1] = plVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108b47120((long)plVar21 - extraout_x14_00);
  uVar22 = 0;
  uVar15 = (uint)lVar16;
  uStack_d0 = uVar15;
  if (iVar13 == 0) {
    uStack_d0 = 0;
  }
  iStack_cc = extraout_w13 * param_8;
  uStack_d4 = uVar15 - 1;
  iStack_e8 = uVar15 * -2;
  iStack_e4 = 1 << (ulong)(uVar15 & 0x1f);
  uStack_f8 = param_3;
  piStack_b0 = piVar26;
  uStack_a8 = (ulong)((uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU));
  lStack_b8 = lVar16;
  while( true ) {
    piVar26 = piStack_b0;
    uVar15 = (uint)param_9;
    iVar13 = (int)param_4;
    if (uVar22 == uStack_a8) break;
    iVar17 = (int)*(short *)(lStack_c8 + uVar22 * 2);
    iVar5 = *(short *)(lStack_c8 + (uVar22 + 1) * 2) - iVar17;
    uVar4 = iVar5 << (ulong)(uVar15 & 0x1f);
    uVar30 = (ulong)uVar4;
    unaff_x24 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
    _memcpy(lVar29,lStack_c0 + (long)((iVar17 << (ulong)(uVar15 & 0x1f)) + iStack_cc) * 4,unaff_x24)
    ;
    param_3 = uVar30;
    func_0x000108b471d4(lVar29,uVar30,uStack_d0);
    lVar16 = lStack_e0;
    iVar17 = 0;
    uStack_98 = uVar22;
    uStack_90 = uVar22 + 1;
    uVar32 = uVar11;
    if ((iVar13 != 0) && (iVar5 != 1)) {
      _memcpy(lStack_e0,lVar29,unaff_x24);
      FUN_108b3f170(lVar16,(int)uVar4 >> (uVar15 & 0x1f),iStack_e4);
      param_3 = uVar30;
      func_0x000108b471d4(lVar16,uVar30,uVar15 + 1);
      fVar31 = (float)uVar32;
      fVar40 = (float)uVar11;
      fVar6 = fVar40;
      if (fVar31 < fVar40) {
        fVar6 = fVar31;
      }
      uVar11 = (ulong)(uint)fVar6;
      iVar17 = 0;
      if (fVar31 < fVar40) {
        iVar17 = -1;
      }
    }
    unaff_x23 = 0;
    iStack_9c = iVar5;
    if (iVar13 == 0 && iVar5 != 1) {
      uVar15 = uVar15 + 1;
    }
    uVar41 = uVar11;
    uVar23 = uStack_d4;
    param_9 = lStack_b8;
    uVar22 = uStack_90;
    for (uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU); uVar11 = uVar32, lStack_b8 = param_9
        , uStack_90 = uVar22, uVar15 != 0; uVar15 = uVar15 - 1) {
      uVar28 = (uint)unaff_x23;
      unaff_x23 = (ulong)(uVar28 + 1);
      uVar2 = uVar23;
      if (iVar13 == 0) {
        uVar2 = uVar28 + 1;
      }
      unaff_x24 = (ulong)uVar2;
      FUN_108b3f170(lVar29,(int)uVar4 >> (uVar28 & 0x1f),1 << (ulong)(uVar28 & 0x1f));
      param_3 = uVar30;
      func_0x000108b471d4(lVar29,uVar30,unaff_x24);
      fVar31 = (float)uVar11;
      fVar40 = (float)uVar41;
      fVar6 = fVar31;
      if (fVar40 <= fVar31) {
        fVar6 = fVar40;
      }
      uVar41 = (ulong)(uint)fVar6;
      if (fVar40 > fVar31) {
        iVar17 = uVar28 + 1;
      }
      uVar23 = uVar23 - 1;
      uVar32 = uVar11;
      param_9 = lStack_b8;
      uVar22 = uStack_90;
    }
    iVar5 = iVar17 * -2;
    if (iVar13 != 0) {
      iVar5 = iVar17 * 2;
    }
    piStack_b0[uStack_98] = iVar5;
    if ((iStack_9c == 1) && ((iVar5 == 0 || (iVar5 == iStack_e8)))) {
      piStack_b0[uStack_98] = iVar5 + -1;
    }
  }
  lVar29 = 0;
  iVar5 = *piStack_100;
  iVar3 = *piStack_b0;
  uVar4 = iVar13 << 2;
  iVar27 = (int)param_6;
  iVar17 = iVar27;
  if (iVar13 != 0) {
    iVar17 = 0;
  }
  for (; iVar9 = (int)param_3, lVar29 != 2; lVar29 = lVar29 + 1) {
    iVar24 = (int)(char)(&UNK_10df8bcf4)[((ulong)uVar4 | lVar29 << 1) + (long)(int)uVar15 * 8];
    iVar14 = iVar3 + iVar24 * -2;
    iVar9 = -iVar14;
    if (-1 < iVar14) {
      iVar9 = iVar14;
    }
    iVar9 = iVar9 * iVar5;
    iVar12 = (int)(char)(&UNK_10df8bcf4)[((ulong)uVar4 | 1 | lVar29 << 1) + (long)(int)uVar15 * 8];
    iVar25 = iVar3 + iVar12 * -2;
    iVar14 = -iVar25;
    if (-1 < iVar25) {
      iVar14 = iVar25;
    }
    iVar14 = iVar17 + iVar14 * iVar5;
    for (param_3 = 1; (long)param_3 < lStack_108; param_3 = param_3 + 1) {
      iVar25 = iVar9;
      if (iVar14 + iVar27 <= iVar9) {
        iVar25 = iVar14 + iVar27;
      }
      iVar1 = iVar9 + iVar27;
      if (iVar14 <= iVar9 + iVar27) {
        iVar1 = iVar14;
      }
      iVar14 = piStack_b0[param_3] + iVar24 * -2;
      iVar9 = -iVar14;
      if (-1 < iVar14) {
        iVar9 = iVar14;
      }
      iVar9 = iVar25 + iVar9 * piStack_100[param_3];
      iVar25 = piStack_b0[param_3] + iVar12 * -2;
      iVar14 = -iVar25;
      if (-1 < iVar25) {
        iVar14 = iVar25;
      }
      iVar14 = iVar1 + iVar14 * piStack_100[param_3];
    }
    if (iVar14 <= iVar9) {
      iVar9 = iVar14;
    }
    aiStack_88[lVar29] = iVar9;
  }
  uVar23 = 2;
  if (iVar13 == 0 || aiStack_88[0] <= aiStack_88[1]) {
    uVar23 = 0;
  }
  iVar24 = (int)(char)(&UNK_10df8bcf4)[(ulong)(uVar23 | uVar4) + (long)(int)uVar15 * 8];
  iVar14 = iVar3 + iVar24 * -2;
  iVar13 = -iVar14;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  iVar13 = iVar13 * iVar5;
  iVar25 = (int)(char)(&UNK_10df8bcf4)[(ulong)(uVar23 | uVar4 | 1) + (long)(int)uVar15 * 8];
  iVar3 = iVar3 + iVar25 * -2;
  iVar14 = -iVar3;
  if (-1 < iVar3) {
    iVar14 = iVar3;
  }
  iVar17 = iVar17 + iVar14 * iVar5;
  for (lVar29 = 1; lVar29 < lStack_108; lVar29 = lVar29 + 1) {
    iVar5 = iVar17 + iVar27;
    *(uint *)((long)aplStack_120[1] + lVar29 * 4) = (uint)(iVar5 <= iVar13);
    iVar3 = iVar13;
    if (iVar5 <= iVar13) {
      iVar3 = iVar5;
    }
    iVar5 = iVar13 + iVar27;
    *(uint *)((long)aplStack_120[0] + lVar29 * 4) = (uint)(iVar17 <= iVar5);
    if (iVar17 <= iVar5) {
      iVar5 = iVar17;
    }
    iVar17 = piStack_b0[lVar29] + iVar24 * -2;
    iVar13 = -iVar17;
    if (-1 < iVar17) {
      iVar13 = iVar17;
    }
    iVar13 = iVar3 + iVar13 * piStack_100[lVar29];
    iVar3 = piStack_b0[lVar29] + iVar25 * -2;
    iVar17 = -iVar3;
    if (-1 < iVar3) {
      iVar17 = iVar3;
    }
    iVar17 = iVar5 + iVar17 * piStack_100[lVar29];
  }
  bVar8 = iVar13 == iVar17;
  *(uint *)(lStack_f0 + lStack_110 * 4) = (uint)(iVar17 <= iVar13);
  lVar29 = (ulong)((int)uStack_f8 - 1) << 2;
  for (uVar15 = (int)uStack_f8 - 2; -1 < (int)uVar15; uVar15 = uVar15 - 1) {
    bVar8 = *(int *)(lStack_f0 + lVar29) == 1;
    plVar10 = aplStack_120[0];
    if (!bVar8) {
      plVar10 = aplStack_120[1];
    }
    *(undefined4 *)(lStack_f0 + (ulong)uVar15 * 4) = *(undefined4 *)((long)plVar10 + lVar29);
    lVar29 = lVar29 + -4;
  }
  func_0x000108b470a0(uStack_80);
  if (bVar8) {
    return (ulong)(extraout_w11 & 1);
  }
  plVar10 = aplStack_120[0];
  ___stack_chk_fail();
  plVar21[-8] = unaff_x24;
  plVar21[-7] = unaff_x23;
  plVar21[-6] = param_4;
  plVar21[-5] = param_6;
  plVar21[-4] = param_9;
  plVar21[-3] = (long)piVar26;
  plVar21[-2] = (long)&stack0xfffffffffffffff0;
  plVar21[-1] = (long)FUN_108b46af8;
  plVar21[-9] = (long)plVar21;
  uVar11 = 0xfffffffb;
  switch(iVar9) {
  case 0x2718:
    func_0x000108b4707c();
    if (0xfffffffd < extraout_w8_00 - 3U) {
      *(int *)((long)plVar10 + 0xc) = extraout_w8_00;
      return 0;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
  case 0x2721:
  case 0x2722:
  case 0x2723:
  case 0x2724:
  case 0x2725:
  case 0x2727:
  case 0x2729:
  case 0x272b:
    goto LAB_108b46e6c;
  case 0x271a:
    func_0x000108b4707c();
    if ((-1 < extraout_w8_04) && (extraout_w8_04 < *(int *)(*plVar10 + 8))) {
      *(int *)((long)plVar10 + 0x24) = extraout_w8_04;
      return 0;
    }
    break;
  case 0x271c:
    func_0x000108b4707c();
    if ((0 < extraout_w8_03) && (extraout_w8_03 <= *(int *)(*plVar10 + 8))) {
      *(int *)(plVar10 + 5) = extraout_w8_03;
      return 0;
    }
    break;
  case 0x271f:
    func_0x000108b47090(0xfffffffb);
    if ((long *)*extraout_x8_04 != (long *)0x0) {
      *(long *)*extraout_x8_04 = *plVar10;
      return 0;
    }
    break;
  case 0x2720:
    uVar11 = 0;
    func_0x000108b4707c(0);
    *(undefined4 *)((long)plVar10 + 0x34) = extraout_w8_02;
    return uVar11;
  case 0x2726:
    func_0x000108b47090(0xfffffffb);
    puVar18 = (undefined8 *)*extraout_x8_03;
    if (puVar18 == (undefined8 *)0x0) {
      return 0;
    }
    uVar34 = puVar18[1];
    uVar33 = *puVar18;
    uVar36 = puVar18[3];
    uVar35 = puVar18[2];
    uVar38 = puVar18[5];
    uVar37 = puVar18[4];
    uVar39 = puVar18[6];
    *(undefined8 *)((long)plVar10 + 0xb4) = puVar18[7];
    *(undefined8 *)((long)plVar10 + 0xac) = uVar39;
    *(undefined8 *)((long)plVar10 + 0xa4) = uVar38;
    *(undefined8 *)((long)plVar10 + 0x9c) = uVar37;
    *(undefined8 *)((long)plVar10 + 0x94) = uVar36;
    *(undefined8 *)((long)plVar10 + 0x8c) = uVar35;
    *(undefined8 *)((long)plVar10 + 0x84) = uVar34;
    *(undefined8 *)((long)plVar10 + 0x7c) = uVar33;
    return 0;
  case 0x2728:
    uVar11 = 0;
    func_0x000108b4707c(0);
    *(undefined4 *)((long)plVar10 + 0x44) = extraout_w8_05;
    return uVar11;
  case 0x272a:
    uVar11 = 0;
    func_0x000108b47090(0);
    plVar10[0x1e] = *extraout_x8_05;
    return uVar11;
  case 0x272c:
    func_0x000108b47090(0xfffffffb);
    if ((undefined8 *)*extraout_x8_06 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)((long)plVar10 + 0xbc) = *(undefined8 *)*extraout_x8_06;
    return 0;
  default:
    switch(iVar9) {
    case 0xfbc:
      iVar17 = (int)plVar10[1];
      lVar29 = *plVar10;
      iVar13 = *(int *)(lVar29 + 4) + 0x400;
      iVar5 = *(int *)(lVar29 + 8) * iVar17;
      puVar19 = (undefined4 *)((long)plVar10 + (long)iVar5 * 4 + (long)(iVar13 * iVar17) * 4 + 0xfc)
      ;
      _bzero(plVar10 + 10,(long)(iVar17 * (iVar13 + *(int *)(lVar29 + 8) * 4) * 4 + 0xfc) + -0x50);
      uVar15 = *(int *)(lVar29 + 8) * iVar17;
      puVar7 = puVar19 + iVar5;
      for (uVar11 = (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
          uVar11 = uVar11 - 1) {
        *puVar7 = 0xc1e00000;
        *puVar19 = 0xc1e00000;
        puVar19 = puVar19 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((long)plVar10 + 0xdc) = 0;
      *(undefined8 *)((long)plVar10 + 0x54) = 0x3f80000000000002;
      *(undefined4 *)((long)plVar10 + 0x5c) = 0x100;
      *(undefined4 *)((long)plVar10 + 100) = 0;
      *(undefined4 *)(plVar10 + 0xd) = 0;
      return 0;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
    case 0xfc1:
    case 0xfc2:
    case 0xfc3:
      goto LAB_108b46e6c;
    case 0xfbf:
      func_0x000108b47090(0xfffffffb);
      puVar19 = (undefined4 *)*extraout_x8_01;
      if (puVar19 != (undefined4 *)0x0) {
        uVar11 = 0;
        uVar20 = (undefined4)plVar10[10];
        goto code_r0x000108b46dc4;
      }
      break;
    case 0xfc4:
      func_0x000108b4707c();
      if (0xffffffee < extraout_w8_01 - 0x19U) {
        *(int *)(plVar10 + 8) = extraout_w8_01;
        return 0;
      }
      break;
    case 0xfc5:
      uVar11 = 0;
      func_0x000108b47090(0);
      puVar19 = (undefined4 *)*extraout_x8_02;
      uVar20 = (undefined4)plVar10[8];
code_r0x000108b46dc4:
      *puVar19 = uVar20;
      return uVar11;
    default:
      if (iVar9 == 0xfa2) {
        func_0x000108b4707c();
        if (500 < extraout_w8_11 || extraout_w8_11 == -1) {
          iVar17 = (int)plVar10[1] * 750000;
          iVar13 = extraout_w8_11;
          if (iVar17 <= extraout_w8_11) {
            iVar13 = iVar17;
          }
          *(int *)((long)plVar10 + 0x2c) = iVar13;
          return 0;
        }
      }
      else {
        if (iVar9 == 0xfa6) {
          uVar11 = 0;
          func_0x000108b4707c(0);
          *(undefined4 *)(plVar10 + 6) = extraout_w8_08;
          return uVar11;
        }
        if (iVar9 == 0x2712) {
          func_0x000108b4707c();
          if (extraout_w8_10 < 3) {
            *(uint *)(plVar10 + 3) = (uint)(extraout_w8_10 != 2);
            *(uint *)(plVar10 + 2) = (uint)(extraout_w8_10 == 0);
            return 0;
          }
        }
        else if (iVar9 == 0xfae) {
          func_0x000108b4707c();
          if (extraout_w8_09 < 0x65) {
            *(uint *)((long)plVar10 + 0x3c) = extraout_w8_09;
            return 0;
          }
        }
        else {
          if (iVar9 == 0xfb4) {
            uVar11 = 0;
            func_0x000108b4707c(0);
            *(undefined4 *)(plVar10 + 7) = extraout_w8_06;
            return uVar11;
          }
          if (iVar9 == 0xfce) {
            func_0x000108b4707c();
            if (extraout_w8_07 < 2) {
              *(uint *)(plVar10 + 9) = extraout_w8_07;
              return 0;
            }
          }
          else if (iVar9 == 0xfcf) {
            func_0x000108b47090(0xfffffffb);
            puVar19 = (undefined4 *)*extraout_x8_07;
            if (puVar19 != (undefined4 *)0x0) {
              uVar11 = 0;
              uVar20 = (undefined4)plVar10[9];
              goto code_r0x000108b46dc4;
            }
          }
          else {
            if (iVar9 != 0xfaa) {
              return 0xfffffffb;
            }
            func_0x000108b4707c();
            if (extraout_w8 < 0xb) {
              *(uint *)((long)plVar10 + 0x1c) = extraout_w8;
              return 0;
            }
          }
        }
      }
    }
  }
  uVar11 = 0xffffffff;
LAB_108b46e6c:
  return uVar11;
}



/* Entry: 108b46af8; end: 108b46e8b;  */

void FUN_108b46af8(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined4 extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  undefined4 extraout_w8_05;
  undefined4 extraout_w8_06;
  uint extraout_w8_07;
  undefined4 extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  int extraout_w8_11;
  ulong uVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar7;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  switch(param_2) {
  case 0x2718:
    func_0x000108b4707c();
    if (0xfffffffd < extraout_w8_00 - 3U) {
      *(int *)((long)param_1 + 0xc) = extraout_w8_00;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
  case 0x2721:
  case 0x2722:
  case 0x2723:
  case 0x2724:
  case 0x2725:
  case 0x2727:
  case 0x2729:
  case 0x272b:
    break;
  case 0x271a:
    func_0x000108b4707c();
    if ((-1 < extraout_w8_04) && (extraout_w8_04 < *(int *)(*param_1 + 8))) {
      *(int *)((long)param_1 + 0x24) = extraout_w8_04;
    }
    break;
  case 0x271c:
    func_0x000108b4707c();
    if ((0 < extraout_w8_03) && (extraout_w8_03 <= *(int *)(*param_1 + 8))) {
      *(int *)(param_1 + 5) = extraout_w8_03;
    }
    break;
  case 0x271f:
    func_0x000108b47090(0xfffffffb);
    if ((long *)*extraout_x8_02 != (long *)0x0) {
      *(long *)*extraout_x8_02 = *param_1;
    }
    break;
  case 0x2720:
    func_0x000108b4707c(0);
    *(undefined4 *)((long)param_1 + 0x34) = extraout_w8_02;
    break;
  case 0x2726:
    func_0x000108b47090(0xfffffffb);
    puVar7 = (undefined8 *)*extraout_x8_01;
    if (puVar7 != (undefined8 *)0x0) {
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      uVar14 = puVar7[3];
      uVar13 = puVar7[2];
      uVar16 = puVar7[5];
      uVar15 = puVar7[4];
      uVar17 = puVar7[6];
      *(undefined8 *)((long)param_1 + 0xb4) = puVar7[7];
      *(undefined8 *)((long)param_1 + 0xac) = uVar17;
      *(undefined8 *)((long)param_1 + 0xa4) = uVar16;
      *(undefined8 *)((long)param_1 + 0x9c) = uVar15;
      *(undefined8 *)((long)param_1 + 0x94) = uVar14;
      *(undefined8 *)((long)param_1 + 0x8c) = uVar13;
      *(undefined8 *)((long)param_1 + 0x84) = uVar12;
      *(undefined8 *)((long)param_1 + 0x7c) = uVar11;
    }
    break;
  case 0x2728:
    func_0x000108b4707c(0);
    *(undefined4 *)((long)param_1 + 0x44) = extraout_w8_05;
    break;
  case 0x272a:
    func_0x000108b47090(0);
    param_1[0x1e] = *extraout_x8_03;
    break;
  case 0x272c:
    func_0x000108b47090(0xfffffffb);
    if ((undefined8 *)*extraout_x8_04 != (undefined8 *)0x0) {
      *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)*extraout_x8_04;
    }
    break;
  default:
    switch(param_2) {
    case 0xfbc:
      iVar4 = (int)param_1[1];
      lVar10 = *param_1;
      iVar1 = *(int *)(lVar10 + 4) + 0x400;
      iVar2 = *(int *)(lVar10 + 8) * iVar4;
      puVar8 = (undefined4 *)((long)param_1 + (long)iVar2 * 4 + (long)(iVar1 * iVar4) * 4 + 0xfc);
      _bzero(param_1 + 10,(long)(iVar4 * (iVar1 + *(int *)(lVar10 + 8) * 4) * 4 + 0xfc) + -0x50);
      uVar3 = *(int *)(lVar10 + 8) * iVar4;
      puVar5 = puVar8 + iVar2;
      for (uVar6 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
          uVar6 = uVar6 - 1) {
        *puVar5 = 0xc1e00000;
        *puVar8 = 0xc1e00000;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)((long)param_1 + 0xdc) = 0;
      *(undefined8 *)((long)param_1 + 0x54) = 0x3f80000000000002;
      *(undefined4 *)((long)param_1 + 0x5c) = 0x100;
      *(undefined4 *)((long)param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
      return;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
    case 0xfc1:
    case 0xfc2:
    case 0xfc3:
      goto LAB_108b46e6c;
    case 0xfbf:
      func_0x000108b47090(0xfffffffb);
      puVar8 = (undefined4 *)*extraout_x8;
      if (puVar8 == (undefined4 *)0x0) {
        return;
      }
      uVar9 = (undefined4)param_1[10];
      break;
    case 0xfc4:
      func_0x000108b4707c();
      if (extraout_w8_01 - 0x19U < 0xffffffef) {
        return;
      }
      *(int *)(param_1 + 8) = extraout_w8_01;
      return;
    case 0xfc5:
      func_0x000108b47090(0);
      puVar8 = (undefined4 *)*extraout_x8_00;
      uVar9 = (undefined4)param_1[8];
      break;
    default:
      if (param_2 == 0xfa2) {
        func_0x000108b4707c();
        if (extraout_w8_11 < 0x1f5 && extraout_w8_11 != -1) {
          return;
        }
        iVar4 = (int)param_1[1] * 750000;
        iVar1 = extraout_w8_11;
        if (iVar4 <= extraout_w8_11) {
          iVar1 = iVar4;
        }
        *(int *)((long)param_1 + 0x2c) = iVar1;
        return;
      }
      if (param_2 == 0xfa6) {
        func_0x000108b4707c(0);
        *(undefined4 *)(param_1 + 6) = extraout_w8_08;
        return;
      }
      if (param_2 == 0x2712) {
        func_0x000108b4707c();
        if (2 < extraout_w8_10) {
          return;
        }
        *(uint *)(param_1 + 3) = (uint)(extraout_w8_10 != 2);
        *(uint *)(param_1 + 2) = (uint)(extraout_w8_10 == 0);
        return;
      }
      if (param_2 == 0xfae) {
        func_0x000108b4707c();
        if (100 < extraout_w8_09) {
          return;
        }
        *(uint *)((long)param_1 + 0x3c) = extraout_w8_09;
        return;
      }
      if (param_2 == 0xfb4) {
        func_0x000108b4707c(0);
        *(undefined4 *)(param_1 + 7) = extraout_w8_06;
        return;
      }
      if (param_2 == 0xfce) {
        func_0x000108b4707c();
        if (1 < extraout_w8_07) {
          return;
        }
        *(uint *)(param_1 + 9) = extraout_w8_07;
        return;
      }
      if (param_2 != 0xfcf) {
        if (param_2 != 0xfaa) {
          return;
        }
        func_0x000108b4707c();
        if (10 < extraout_w8) {
          return;
        }
        *(uint *)((long)param_1 + 0x1c) = extraout_w8;
        return;
      }
      func_0x000108b47090(0xfffffffb);
      puVar8 = (undefined4 *)*extraout_x8_05;
      if (puVar8 == (undefined4 *)0x0) {
        return;
      }
      uVar9 = (undefined4)param_1[9];
    }
    *puVar8 = uVar9;
  }
LAB_108b46e6c:
  return;
}



/* Entry: 108b46e8c; end: 108b4704b;  */

float * FUN_108b46e8c(float *param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((int)param_2 <= (int)(param_3 * 2)) {
    _abort();
    for (uVar6 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
        uVar6 = uVar6 - 1) {
      param_1 = param_1 + 1;
    }
    return param_1;
  }
  lVar3 = (long)(int)param_3;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  uVar5 = (ulong)(param_2 + param_3 * -2);
  pfVar2 = param_1;
  for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
    fVar10 = *pfVar2;
    fVar9 = fVar9 + fVar10 * fVar10;
    fVar8 = fVar8 + pfVar2[lVar3] * fVar10;
    fVar7 = fVar7 + pfVar2[(int)(param_3 * 2)] * fVar10;
    pfVar2 = pfVar2 + 1;
  }
  fVar10 = 0.0;
  uVar4 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  pfVar2 = param_1;
  for (uVar6 = uVar4; uVar6 != 0; uVar6 = uVar6 - 1) {
    fVar10 = fVar10 + -(*pfVar2 * *pfVar2) + param_1[(int)uVar5] * param_1[(int)uVar5];
    uVar5 = (ulong)((int)uVar5 + 1);
    pfVar2 = pfVar2 + 1;
  }
  iVar1 = param_2 - param_3;
  fVar11 = 0.0;
  pfVar2 = param_1 + (int)param_3;
  for (uVar6 = uVar4; uVar6 != 0; uVar6 = uVar6 - 1) {
    fVar11 = fVar11 + -(*pfVar2 * *pfVar2) + param_1[iVar1] * param_1[iVar1];
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  uVar6 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2;
  fVar12 = 0.0;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    fVar12 = fVar12 + -(param_1[lVar3] * *param_1) +
                      *(float *)((long)param_1 + uVar6 + lVar3 * -4) *
                      *(float *)((long)param_1 + uVar6 + (long)(int)(param_3 * 2) * -4);
    param_1 = param_1 + 1;
  }
  fVar10 = fVar9 + fVar10;
  fVar9 = fVar9 + fVar10 + fVar11;
  fVar8 = fVar8 + fVar8 + fVar12;
  fVar10 = fVar10 + fVar10;
  fVar11 = -(fVar8 * fVar8) + fVar10 * fVar9;
  if (fVar10 * fVar9 * 0.001 <= fVar11) {
    fVar12 = -(fVar8 * fVar8) + fVar10 * (fVar7 + fVar7);
    fVar10 = 1.0;
    if ((fVar12 < fVar11) && (fVar10 = -1.0, -fVar11 < fVar12)) {
      fVar10 = fVar12 / fVar11;
    }
    param_4[1] = fVar10;
    fVar9 = (fVar7 + fVar7) * -fVar8 + fVar8 * fVar9;
    fVar8 = fVar9 * 0.5;
    if (fVar11 <= fVar8) {
      fVar9 = 1.999999;
    }
    else if (fVar8 <= -fVar11) {
      fVar9 = -1.999999;
    }
    else {
      fVar9 = fVar9 / fVar11;
    }
    pfVar2 = (float *)0x0;
    *param_4 = fVar9;
  }
  else {
    pfVar2 = (float *)0x1;
  }
  return pfVar2;
}



/* Entry: 108b4704c; end: 108b47303;  */

float FUN_108b4704c(float param_1,float *param_2,uint param_3,int param_4)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = 0.0;
  for (uVar1 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    fVar2 = fVar2 + ABS(*param_2);
    param_2 = param_2 + 1;
  }
  return fVar2 + fVar2 * param_1 * (float)param_4;
}



/* Entry: 108b47304; end: 108b47327;  */

int FUN_108b47304(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108b4992c();
  return ((*(int *)(lVar1 + 4) + 0x818) * (int)param_1 + *(int *)(lVar1 + 8) * 8) * 4 + 0x74;
}



/* Entry: 108b47328; end: 108b47343;  */

int FUN_108b47328(long param_1,int param_2)

{
  return ((*(int *)(param_1 + 4) + 0x818) * param_2 + *(int *)(param_1 + 8) * 8) * 4 + 0x74;
}



/* Entry: 108b47344; end: 108b473ff;  */

undefined8 FUN_108b47344(long *param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar1 = param_1;
  func_0x000108b4992c();
  if (param_3 < 3) {
    if (param_1 == (long *)0x0) {
      uVar2 = 0xfffffff9;
    }
    else {
      plVar3 = plVar1;
      FUN_108b47328();
      _bzero(param_1,(long)(int)plVar3);
      *param_1 = (long)plVar1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)plVar1 + 4);
      *(uint *)((long)param_1 + 0xc) = param_3;
      *(uint *)(param_1 + 2) = param_3;
      *(undefined8 *)((long)param_1 + 0x14) = 1;
      *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)plVar1 + 0xc);
      *(undefined4 *)(param_1 + 4) = 1;
      *(uint *)((long)param_1 + 0x24) = (uint)(param_3 == 1);
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      FUN_108b49614(param_1,0xfbc);
      FUN_108b41634();
      uVar2 = 0;
      *(undefined4 *)((long)param_1 + 0x14) = param_2;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 108b47400; end: 108b486f3;  */

/* WARNING: Possible PIC construction at 0x000108b48308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b48a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b4830c) */
/* WARNING: Removing unreachable block (ram,0x000108b48320) */
/* WARNING: Removing unreachable block (ram,0x000108b4836c) */
/* WARNING: Removing unreachable block (ram,0x000108b483b4) */
/* WARNING: Removing unreachable block (ram,0x000108b483c8) */
/* WARNING: Removing unreachable block (ram,0x000108b483f0) */
/* WARNING: Removing unreachable block (ram,0x000108b483fc) */
/* WARNING: Removing unreachable block (ram,0x000108b48424) */
/* WARNING: Removing unreachable block (ram,0x000108b48440) */
/* WARNING: Removing unreachable block (ram,0x000108b484b8) */
/* WARNING: Removing unreachable block (ram,0x000108b4845c) */
/* WARNING: Removing unreachable block (ram,0x000108b4846c) */
/* WARNING: Removing unreachable block (ram,0x000108b48474) */
/* WARNING: Removing unreachable block (ram,0x000108b48478) */
/* WARNING: Removing unreachable block (ram,0x000108b4847c) */
/* WARNING: Removing unreachable block (ram,0x000108b48504) */
/* WARNING: Removing unreachable block (ram,0x000108b48530) */
/* WARNING: Removing unreachable block (ram,0x000108b48534) */
/* WARNING: Removing unreachable block (ram,0x000108b48540) */
/* WARNING: Removing unreachable block (ram,0x000108b4854c) */
/* WARNING: Removing unreachable block (ram,0x000108b48550) */
/* WARNING: Removing unreachable block (ram,0x000108b48554) */
/* WARNING: Removing unreachable block (ram,0x000108b48564) */
/* WARNING: Removing unreachable block (ram,0x000108b485b0) */
/* WARNING: Removing unreachable block (ram,0x000108b485cc) */
/* WARNING: Removing unreachable block (ram,0x000108b485ec) */
/* WARNING: Removing unreachable block (ram,0x000108b48600) */
/* WARNING: Removing unreachable block (ram,0x000108b48624) */
/* WARNING: Removing unreachable block (ram,0x000108b48630) */
/* WARNING: Removing unreachable block (ram,0x000108b4869c) */
/* WARNING: Removing unreachable block (ram,0x000108b486ac) */
/* WARNING: Removing unreachable block (ram,0x000108b48694) */
/* WARNING: Removing unreachable block (ram,0x000108b4860c) */
/* WARNING: Removing unreachable block (ram,0x000108b485d4) */
/* WARNING: Removing unreachable block (ram,0x000108b4848c) */
/* WARNING: Removing unreachable block (ram,0x000108b48a38) */
/* WARNING: Removing unreachable block (ram,0x000108b48a48) */
/* WARNING: Removing unreachable block (ram,0x000108b48a90) */
/* WARNING: Removing unreachable block (ram,0x000108b48ad0) */
/* WARNING: Removing unreachable block (ram,0x000108b48adc) */

void FUN_108b47400(long *param_1,long param_2,uint param_3,long param_4,ulong param_5,
                  undefined1 *param_6,uint param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  bool bVar9;
  undefined1 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  undefined4 extraout_w8;
  int iVar28;
  int extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  long lVar29;
  long *plVar30;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar31;
  undefined4 *puVar32;
  undefined8 extraout_x8_03;
  ulong uVar33;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int *extraout_x8_08;
  undefined4 *extraout_x8_09;
  uint *extraout_x8_10;
  int *extraout_x8_11;
  long *extraout_x8_12;
  int *extraout_x8_13;
  int *extraout_x8_14;
  undefined4 *extraout_x8_15;
  int *extraout_x8_16;
  int *extraout_x8_17;
  int *extraout_x8_18;
  int *extraout_x8_19;
  int *piVar34;
  uint *extraout_x8_20;
  int iVar35;
  undefined1 *puVar36;
  long lVar37;
  undefined4 uVar38;
  undefined4 extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  uint extraout_w12_02;
  uint extraout_w12_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 extraout_x12_03;
  bool bVar39;
  int extraout_w13;
  long extraout_x13;
  ulong uVar40;
  int iVar41;
  uint extraout_w14;
  long lVar42;
  long *extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  ulong uVar43;
  undefined4 *extraout_x15;
  ulong uVar44;
  long extraout_x15_00;
  float *pfVar45;
  uint uVar46;
  long *plVar47;
  uint uVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  long lVar52;
  float *pfVar53;
  long *unaff_x25;
  long *plVar54;
  undefined *puVar55;
  long lVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float afStack_2410 [2];
  undefined8 uStack_2408;
  long alStack_2400 [2];
  undefined1 auStack_23f0 [4160];
  uint auStack_13b0 [8];
  ulong uStack_1390;
  int iStack_1384;
  float *pfStack_1380;
  int iStack_1374;
  int iStack_1370;
  int iStack_136c;
  ulong uStack_1368;
  ulong uStack_1360;
  ulong uStack_1358;
  long lStack_1350;
  undefined4 *puStack_1348;
  undefined1 *puStack_1340;
  ulong uStack_1338;
  undefined4 *puStack_1330;
  ulong uStack_1328;
  long *plStack_1320;
  long lStack_1318;
  long *plStack_1310;
  long *plStack_1308;
  float *pfStack_1300;
  long *plStack_12f8;
  long lStack_12f0;
  long lStack_12e8;
  long *plStack_12e0;
  uint uStack_12d8;
  int iStack_12d4;
  long alStack_12d0 [4];
  float afStack_12b0 [360];
  undefined1 auStack_d10 [2656];
  undefined8 uStack_2b0;
  long *plStack_250;
  long *plStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  long lStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  int iStack_1bc;
  float *pfStack_1b8;
  float *pfStack_1b0;
  undefined4 *puStack_1a8;
  int iStack_1a0;
  uint uStack_19c;
  ulong uStack_198;
  long lStack_190;
  int iStack_184;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  int iStack_164;
  long lStack_160;
  uint uStack_154;
  long *plStack_150;
  uint uStack_148;
  uint uStack_144;
  float *pfStack_140;
  long lStack_138;
  undefined4 uStack_12c;
  ulong uStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  uint uStack_fc;
  long *plStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [56];
  long alStack_a0 [6];
  
  plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,param_3);
  plVar11 = param_1;
  lVar56 = param_2;
  func_0x000108b49954();
  uStack_e0 = 0;
  uVar19 = *(uint *)((long)plVar11 + 0xc);
  plVar30 = (long *)(ulong)uVar19;
  uVar46 = *(uint *)(plVar11 + 2);
  plVar47 = (long *)*plVar11;
  alStack_a0[4] = extraout_x8;
  func_0x000108b4992c();
  if ((plVar47 == plVar11) && ((int)param_1[1] == 0x78)) {
    iVar41 = *(int *)((long)param_1 + 0x1c);
    unaff_x25 = (long *)(long)iVar41;
    if ((0x15 < iVar41) ||
       (((1 < uVar19 - 1 || (1 < uVar46 - 1)) || (*(int *)((long)param_1 + 0x14) < 1))))
    goto LAB_108b486ec;
    uStack_144 = param_7;
    iVar16 = (int)param_1[3];
    if (((((iVar16 != 0) && (iVar16 != 0x11)) || (plVar54 = (long *)(long)iVar16, iVar41 <= iVar16))
        || (((*(int *)((long)param_1 + 0x2c) < 0 || (*(int *)((long)param_1 + 0x2c) != 0)) ||
            (((iVar35 = (int)param_1[7], 0x2d0 < iVar35 ||
              (((((iVar35 < 100 && (iVar35 != 0)) ||
                 (iVar35 = *(int *)((long)param_1 + 0x4c), 0x3ff < iVar35)) ||
                ((iVar35 < 0xf && (iVar35 != 0)))) || (iVar35 = (int)param_1[10], 0x3ff < iVar35))))
             || ((iVar35 < 0xf && (iVar35 != 0)))))))) ||
       ((2 < *(int *)((long)param_1 + 0x5c) ||
        (((*(int *)((long)param_1 + 0x5c) < 0 || (2 < (int)param_1[0xc])) ||
         (uStack_fc = uVar46, (int)param_1[0xc] < 0)))))) goto LAB_108b486ec;
    uVar20 = 0;
    lVar29 = plVar47[1];
    plStack_108 = (long *)plVar47[4];
    uVar3 = *(int *)((long)param_1 + 0x14) * (int)param_5;
    param_5 = (ulong)uVar3;
    uStack_148 = *(uint *)((long)plVar47 + 4);
    uVar46 = *(uint *)((long)plVar47 + 4) + 0x800;
    pfStack_140 = (float *)((long)param_1 + (long)(int)(uVar46 * uVar19) * 4 + 0x70);
    iVar35 = (int)lVar29 << 1;
    pfVar53 = pfStack_140 + iVar35;
    uVar48 = 0x10;
    puVar55 = &UNK_10df8bcf4;
    while( true ) {
      uVar18 = (uint)uVar20;
      uVar10 = uVar18 == *(uint *)(plVar47 + 5);
      if (!(bool)uVar10 && (int)*(uint *)(plVar47 + 5) <= (int)uVar18) break;
      if ((int)plVar47[6] << (ulong)(uVar18 & 0x1f) == uVar3) {
        plVar11 = (long *)0xffffffff;
        uVar10 = (uint)plStack_f8 == 0x4fb;
        if (((uint)plStack_f8 < 0x4fc) && (param_4 != 0)) {
          uStack_19c = uVar48;
          pfStack_1b8 = pfVar53 + iVar35;
          pfStack_1b0 = pfVar53;
          plVar11 = (long *)0x0;
          iStack_184 = 1 << (ulong)(uVar18 & 0x1f);
          lStack_190 = (long)(int)uVar3;
          uStack_198 = (ulong)uVar46;
          plVar24 = param_1;
          do {
            alStack_a0[(long)plVar11 + 2] = (long)(plVar24 + 0xe);
            alStack_a0[(long)plVar11] = (long)plVar24 + (long)(int)uVar3 * -4 + 0x2070;
            plVar11 = (long *)((long)plVar11 + 1);
            plVar24 = (long *)((long)plVar24 +
                              (-(ulong)(uVar46 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar46 << 2));
          } while (plVar11 < plVar30);
          iVar28 = *(int *)((long)plVar47 + 0xc);
          uVar10 = iVar41 == iVar28;
          if (iVar28 <= iVar41) {
            iVar41 = iVar28;
          }
          if ((param_2 == 0) || (uVar10 = (uint)plStack_f8 == 1, (uint)plStack_f8 < 2)) {
            FUN_108b486f4(param_1,param_5);
            param_8 = (ulong)uStack_144;
            lVar56 = param_4;
            uVar20 = param_5;
            FUN_108b48fc8(alStack_a0,param_4,param_5,plVar30,*(undefined4 *)((long)param_1 + 0x14),
                          plVar47 + 2,param_1 + 0xd);
            uVar19 = 0;
            if (*(int *)((long)param_1 + 0x14) != 0) {
              uVar19 = (int)uVar3 / *(int *)((long)param_1 + 0x14);
            }
            plVar11 = (long *)(ulong)uVar19;
            goto LAB_108b486bc;
          }
          iStack_1e4 = iVar41;
          if (*(int *)((long)param_1 + 0x3c) == 0) {
            *(undefined4 *)(param_1 + 9) = 0;
          }
          lStack_160 = (long)(int)lVar29;
          lStack_180 = (long)(int)(uVar46 * uVar19);
          lStack_170 = (long)iVar35;
          uStack_f0 = uVar20;
          if (param_6 == (undefined1 *)0x0) {
            param_6 = auStack_d8;
            FUN_108b49cc0(auStack_d8,param_2,(ulong)plStack_f8 & 0xffffffff);
          }
          if (uStack_fc == 1) {
            pfVar53 = pfStack_140;
            for (uVar20 = (ulong)((uint)lStack_160 & ((int)(uint)lStack_160 >> 0x1f ^ 0xffffffffU));
                uVar20 != 0; uVar20 = uVar20 - 1) {
              fVar57 = *pfVar53;
              if (*pfVar53 <= pfVar53[lStack_160]) {
                fVar57 = pfVar53[lStack_160];
              }
              *pfVar53 = fVar57;
              pfVar53 = pfVar53 + 1;
            }
          }
          iStack_164 = (uint)plStack_f8 << 3;
          iVar35 = (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20));
          iVar41 = *(int *)(param_6 + 0x18) + iVar35 + -0x20;
          if (iVar41 < (int)((uint)plStack_f8 * 8)) {
            if (iVar41 == 1) {
              puVar36 = param_6;
              FUN_108b49de4(param_6,0xf);
              if ((int)puVar36 != 0) {
                iVar35 = (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20));
                goto LAB_108b4776c;
              }
              uStack_1e8 = 0;
              iVar41 = 1;
              uStack_1ec = 1;
            }
            else {
              uStack_1e8 = 0;
              uStack_1ec = 1;
            }
          }
          else {
LAB_108b4776c:
            uStack_1ec = 0;
            *(int *)(param_6 + 0x18) = (iStack_164 - iVar35) + 0x20;
            uStack_1e8 = 1;
            iVar41 = iStack_164;
          }
          uStack_12c = 0;
          plStack_110 = plVar47;
          if (iVar16 == 0) {
            iStack_1bc = 0;
            if (iVar41 + 0x10 <= iStack_164) {
              puVar36 = param_6;
              FUN_108b49de4(param_6,1);
              if ((int)puVar36 == 0) {
                iStack_1bc = 0;
                uStack_12c = 0;
              }
              else {
                puVar36 = param_6;
                FUN_108b49e68(param_6,6);
                puVar12 = param_6;
                FUN_108b49f40(param_6,(uint)puVar36 + 4);
                iStack_1bc = (int)puVar12 + (0x10 << (ulong)((uint)puVar36 & 0x1f)) + -1;
                FUN_108b49f40(param_6,3);
                if (iStack_164 <
                    *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) + -0x1e
                   ) {
                  uStack_12c = 0;
                  plVar47 = plStack_110;
                }
                else {
                  puVar36 = param_6;
                  func_0x000108b49e28(param_6,&UNK_10df8bef5,2);
                  uStack_12c = SUB84(puVar36,0);
                  plVar47 = plStack_110;
                }
              }
              iVar41 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) +
                       -0x20;
            }
          }
          else {
            iStack_1bc = 0;
          }
          uVar19 = 0;
          iVar41 = iVar41 + 3;
          if (((int)uStack_f0 != 0) && (iVar41 <= iStack_164)) {
            uVar19 = 0;
            func_0x000108b4996c();
            iVar41 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) +
                     -0x1d;
          }
          iStack_1f0 = iStack_184;
          if (uVar19 == 0) {
            iStack_1f0 = 0;
          }
          lStack_1c8 = lStack_170 << 3;
          lStack_1d0 = lStack_180 << 2;
          puStack_1a8 = (undefined4 *)((long)param_1 + lStack_180 * 4);
          lStack_1e0 = param_4;
          plStack_1d8 = param_1;
          uStack_154 = uVar19;
          uStack_128 = param_5;
          plStack_118 = plVar30;
          if ((iStack_164 < iVar41) || (func_0x000108b4996c(), uVar19 == 0)) {
            if (*(int *)((long)param_1 + 0x3c) != 0) {
              iVar16 = 0;
              uVar19 = (uint)uStack_f0;
              iVar41 = *(int *)((long)param_1 + 0x3c) >> (uVar19 & 0x1f);
              fVar57 = 11.0;
              if (iVar41 < 0xb) {
                fVar57 = (float)(iVar41 + 1);
              }
              fVar60 = 0.5;
              if (uVar19 != 1) {
                fVar60 = 0.0;
              }
              fVar61 = 1.5;
              if (uVar19 != 0) {
                fVar61 = fVar60;
              }
              bVar9 = true;
              do {
                bVar39 = bVar9;
                lVar56 = (long)plVar54 + (long)(iVar16 * (int)lStack_160);
                for (lVar29 = 0; (long)plVar54 + lVar29 < (long)unaff_x25; lVar29 = lVar29 + 1) {
                  fVar58 = *(float *)((long)param_1 +
                                     lVar29 * 4 + lVar56 * 4 + lStack_1d0 + lStack_170 * 4 + 0x70);
                  fVar60 = (float)puStack_1a8[lVar56 + lVar29 + 0x1c];
                  fVar62 = *(float *)((long)param_1 +
                                     lVar29 * 4 + lVar56 * 4 + lStack_1c8 + lStack_180 * 4 + 0x70);
                  fVar59 = fVar58;
                  if (fVar58 <= fVar62) {
                    fVar59 = fVar62;
                  }
                  if (fVar59 <= fVar60) {
                    if (fVar58 <= fVar60) {
                      fVar60 = fVar58;
                    }
                    if (fVar60 < fVar62) {
                      fVar62 = fVar60;
                    }
                  }
                  else {
                    fVar62 = (fVar62 - fVar60) * 0.5;
                    fVar59 = fVar58 - fVar60;
                    if (fVar58 - fVar60 <= fVar62) {
                      fVar59 = fVar62;
                    }
                    fVar62 = (float)NEON_fminnm(fVar59,0x40000000);
                    fVar59 = 0.0;
                    if (0.0 <= fVar57 * fVar62) {
                      fVar59 = fVar57 * fVar62;
                    }
                    fVar62 = -20.0;
                    if (-20.0 <= fVar60 - fVar59) {
                      fVar62 = fVar60 - fVar59;
                    }
                  }
                  puStack_1a8[lVar56 + lVar29 + 0x1c] = fVar62 - fVar61;
                }
                iVar16 = 1;
                bVar9 = false;
              } while (bVar39);
            }
            uVar23 = 0;
          }
          else {
            uVar23 = 1;
          }
          uVar20 = uStack_f0;
          func_0x000108b4d174(plVar47,plVar54,unaff_x25,pfStack_140,uVar23,param_6,uStack_fc,
                              uStack_f0);
          (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_160);
          lStack_178 = extraout_x12;
          lVar56 = (long)&uStack_200 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
          uVar19 = 0;
          uVar46 = 0;
          iVar41 = *(int *)(param_6 + 8);
          iVar16 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) + -0x20;
          iVar35 = 4;
          if (uStack_154 == 0) {
            iVar28 = 5;
          }
          else {
            iVar28 = iVar35;
            iVar35 = 2;
          }
          uVar48 = (uint)((int)uVar20 != 0 && iVar16 + iVar35 + 1U <= (uint)(iVar41 * 8));
          plStack_150 = plVar54;
          lStack_138 = lVar56;
          lVar29 = lVar56;
          for (; plVar30 = plStack_150, (long)plVar54 < (long)unaff_x25;
              plVar54 = (long *)((long)plVar54 + 1)) {
            if ((uint)(iVar16 + iVar35) <= iVar41 * 8 - uVar48) {
              puVar36 = param_6;
              FUN_108b49de4();
              uVar19 = (uint)puVar36 ^ uVar19;
              iVar16 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) +
                       -0x20;
              uVar46 = uVar19 | uVar46;
              lVar29 = lStack_138;
            }
            *(uint *)(lVar29 + (long)plVar54 * 4) = uVar19;
            iVar35 = iVar28;
          }
          uVar19 = uStack_154 * 4;
          if (uVar48 == 0) {
            iVar41 = 0;
          }
          else if (puVar55[(ulong)uVar19 + (ulong)uVar46] ==
                   puVar55[(ulong)((uStack_154 & 1) << 2 | 2) + (ulong)uVar46]) {
            iVar41 = 0;
          }
          else {
            puVar36 = param_6;
            FUN_108b49de4(param_6,1);
            iVar41 = (int)puVar36 << 1;
            lVar29 = lStack_138;
          }
          lVar42 = uStack_f0 * 8;
          for (plVar11 = plVar30; (long)plVar11 < (long)unaff_x25;
              plVar11 = (long *)((long)plVar11 + 1)) {
            *(int *)(lVar29 + (long)plVar11 * 4) =
                 (int)(char)(&UNK_10df8bcf4)
                            [(long)*(int *)(lVar29 + (long)plVar11 * 4) + (ulong)(iVar41 + uVar19) +
                             lVar42];
          }
          if (iStack_164 <
              *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20)) + -0x1c) {
            uStack_1f4 = 2;
          }
          else {
            puVar36 = param_6;
            func_0x000108b49e28(param_6,&UNK_10df8bef8,5);
            uStack_1f4 = SUB84(puVar36,0);
          }
          lVar29 = lStack_178;
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar20 = lVar29 + 0xfU & 0xfffffffffffffff0;
          lVar56 = lVar56 - uVar20;
          func_0x000108b41884(plStack_110,lVar56,uStack_f0,uStack_fc);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar29 = lVar56 - uVar20;
          iVar41 = (uint)plStack_f8 << 6;
          puVar36 = param_6;
          lStack_120 = lVar29;
          func_0x000108b49c74();
          iStack_1a0 = iVar41;
          iVar16 = 6;
          while (iVar35 = iVar16, iVar16 = (int)puVar36, (long)plVar30 < (long)unaff_x25) {
            iVar28 = 0;
            plStack_f8 = (long *)((long)plVar30 + 1);
            iVar16 = ((int)*(short *)((long)plStack_108 + ((long)plVar30 + 1) * 2) -
                     (int)*(short *)((long)plStack_108 + (long)plVar30 * 2)) * uStack_fc <<
                     (ulong)((uint)uStack_f0 & 0x1f);
            iVar2 = iVar16 * 8;
            if (iVar16 < 0x31) {
              iVar16 = 0x30;
            }
            iVar15 = iVar35;
            if (iVar16 <= iVar2) {
              iVar2 = iVar16;
            }
            while (((int)puVar36 + iVar15 * 8 < iVar41 &&
                   (iVar28 < *(int *)(lVar56 + (long)plVar30 * 4)))) {
              puVar12 = param_6;
              FUN_108b49de4();
              puVar36 = param_6;
              func_0x000108b49c74();
              if ((int)puVar12 == 0) break;
              iVar41 = iVar41 - iVar2;
              iVar28 = iVar28 + iVar2;
              iVar15 = 1;
            }
            *(int *)(lStack_120 + (long)plVar30 * 4) = iVar28;
            iVar16 = iVar35;
            if (iVar35 < 4) {
              iVar16 = 3;
            }
            plVar30 = plStack_f8;
            iVar16 = iVar16 + -1;
            if (iVar28 < 1) {
              iVar16 = iVar35;
            }
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar20 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
          plVar30 = (long *)(lVar29 - uVar20);
          plStack_f8 = plVar30;
          if (iVar41 < iVar16 + 0x30) {
            uStack_1f8 = 5;
          }
          else {
            puVar36 = param_6;
            func_0x000108b49e28(param_6,&UNK_10df8befc,7);
            uStack_1f8 = SUB84(puVar36,0);
          }
          lVar29 = lStack_190;
          plVar11 = plStack_1d8;
          puVar36 = param_6;
          func_0x000108b49c74();
          iVar41 = iStack_1a0 + ~(uint)puVar36;
          iVar16 = 8;
          if (iVar41 < (int)uStack_19c) {
            iVar16 = 0;
          }
          bVar9 = 1 < (uint)uStack_f0;
          uVar19 = 0;
          if (bVar9) {
            uVar19 = (uint)((int)uStack_19c <= iVar41);
          }
          iVar35 = 0;
          if (bVar9) {
            iVar35 = iVar16;
          }
          uStack_19c = 0;
          if (uStack_154 != 0) {
            uStack_19c = uVar19;
          }
          iVar16 = 0;
          if (uStack_154 != 0) {
            iVar16 = iVar35;
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)(iVar41 - iVar16);
          lVar42 = (long)plVar30 + uVar20 * -2;
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          *(undefined4 *)(lVar42 + -0x10) = 0;
          *(undefined1 **)(lVar42 + -0x20) = param_6;
          *(undefined8 *)(lVar42 + -0x18) = 0;
          *(undefined4 *)(lVar42 + -0x24) = extraout_w12;
          uVar19 = uStack_fc;
          *(uint *)(lVar42 + -0x28) = uStack_fc;
          lStack_190 = lVar42;
          *(long *)(lVar42 + -0x30) = lVar42;
          plVar54 = plStack_f8;
          *(long **)(lVar42 + -0x38) = plStack_f8;
          plStack_108 = extraout_x14;
          *(undefined4 **)(lVar42 + -0x48) = &uStack_e4;
          *(long **)(lVar42 + -0x40) = extraout_x14;
          *(undefined4 *)(lVar42 + -0x50) = extraout_w8;
          plVar47 = plStack_110;
          plVar30 = plStack_150;
          plVar24 = plStack_110;
          FUN_108b4d718(plStack_110,plStack_150,unaff_x25,lStack_120,lVar56,uStack_1f8,
                        (long)&uStack_e0 + 4,&uStack_e0);
          lStack_120 = CONCAT44(lStack_120._4_4_,(int)plVar24);
          func_0x000108b4d324(plVar47,plVar30,unaff_x25,pfStack_140,0,plVar54,param_6,uVar19);
          uVar19 = (int)uStack_128 * uVar19;
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    ((-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2) + 0xf &
                     0xfffffffffffffff0);
          plVar47 = plStack_118;
          lVar42 = lVar42 - extraout_x8_00;
          plVar30 = (long *)0x0;
          uVar19 = (int)uStack_198 - extraout_w12_00;
          do {
            _memmove(alStack_a0[(long)plVar30 + 2],alStack_a0[(long)plVar30 + 2] + lVar29 * 4,
                     -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
            uVar46 = uStack_fc;
            plVar30 = (long *)((long)plVar30 + 1);
          } while (plVar30 < plVar47);
          uVar19 = (int)lStack_160 * uStack_fc;
          uStack_198 = (ulong)uVar19;
          (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)uVar19 + 0xfU & 0xfffffffffffffff0);
          plVar30 = (long *)(lVar42 - extraout_x8_01);
          lVar56 = lVar42 + lVar29 * 4;
          if (uVar46 != 2) {
            lVar56 = 0;
          }
          uVar22 = (undefined4)uStack_e0;
          uVar7 = uStack_e0._4_4_;
          iVar16 = iStack_1a0 - iVar16;
          uVar38 = *(undefined4 *)((long)plVar11 + 0x24);
          *(undefined4 *)((long)plVar30 + -0xc) = *(undefined4 *)((long)plVar11 + 0x2c);
          *(undefined4 *)(plVar30 + -1) = uVar38;
          *(undefined4 *)(plVar30 + -2) = 0;
          plVar30[-3] = (long)(plVar11 + 6);
          *(undefined4 *)((long)plVar30 + -0x1c) = (undefined4)lStack_120;
          *(int *)(plVar30 + -4) = (int)uStack_f0;
          plVar30[-5] = (long)param_6;
          *(int *)(plVar30 + -6) = iVar16;
          *(undefined4 *)((long)plVar30 + -0x2c) = uStack_e4;
          plVar30[-7] = lStack_138;
          *(undefined4 *)(plVar30 + -8) = uVar22;
          *(undefined4 *)((long)plVar30 + -0x3c) = uVar7;
          *(undefined4 *)((long)plVar30 + -0x44) = uStack_1f4;
          *(int *)(plVar30 + -9) = iStack_1f0;
          plVar47 = plStack_108;
          plVar30[-10] = (long)plStack_108;
          plVar24 = plStack_110;
          plVar54 = plStack_150;
          FUN_108b3f1f4(0,plStack_110,plStack_150,unaff_x25,lVar42,lVar56,plVar30,0);
          if (uStack_19c == 0) {
            func_0x000108b498dc();
          }
          else {
            puVar36 = param_6;
            FUN_108b49f40(param_6,1);
            func_0x000108b498dc();
            if ((int)puVar36 != 0) {
              uVar38 = *(undefined4 *)((long)plVar11 + 0x2c);
              lVar56 = plVar11[6];
              *(undefined4 *)((long)plVar30 + 4) = 0;
              *(undefined4 *)(plVar30 + 1) = uVar38;
              *(int *)plVar30 = (int)lVar56;
              plVar30[-1] = (long)plVar47;
              plVar30[-2] = (long)pfStack_1b8;
              pfVar53 = pfStack_1b0;
              plVar30[-4] = (long)plVar54;
              plVar30[-3] = (long)pfVar53;
              FUN_108b3ec7c(plVar24,lVar42,plVar30,uStack_f0,uStack_fc,uStack_128,plStack_150,
                            unaff_x25);
            }
          }
          uVar38 = (undefined4)uStack_f0;
          uVar20 = (ulong)uStack_148;
          if ((uStack_1ec & 1) == 0) {
            plVar24 = plVar54;
            for (uVar31 = (ulong)((uint)uStack_198 & ((int)(uint)uStack_198 >> 0x1f ^ 0xffffffffU));
                uVar31 != 0; uVar31 = uVar31 - 1) {
              *(undefined4 *)plVar24 = 0xc1e00000;
              plVar24 = (long *)((long)plVar24 + 4);
            }
          }
          if (*(int *)((long)plVar11 + 100) != 0) {
            FUN_108b491c4(plVar11,uStack_128);
            uVar38 = (undefined4)uStack_f0;
          }
          uVar22 = *(undefined4 *)((long)plVar11 + 0x14);
          plVar50 = plVar30 + -2;
          *(undefined4 *)plVar30 = *(undefined4 *)((long)plVar11 + 0x2c);
          uVar7 = uStack_1e8;
          puVar13 = (ulong *)alStack_a0;
          plVar21 = alStack_a0;
          *(undefined4 *)(plVar30 + -1) = uVar22;
          *(undefined4 *)((long)plVar30 + -4) = uVar7;
          *(undefined4 *)((long)plVar30 + -0xc) = uVar38;
          *(uint *)(plVar30 + -2) = uStack_154;
          lVar29 = 0x108b4830c;
          plVar14 = plStack_110;
          plVar24 = plStack_150;
          plVar26 = (long *)(ulong)uStack_fc;
          plVar27 = plStack_118;
          plVar49 = plVar54;
          plVar51 = (long *)(ulong)uStack_fc;
          lVar56 = lVar42;
          pfVar53 = (float *)&stack0xfffffffffffffff0;
          iVar41 = iStack_1e4;
          goto SUB_108b49320;
        }
        goto LAB_108b486bc;
      }
      uVar48 = uVar48 + 8;
      uVar20 = uVar20 + 1;
      puVar55 = puVar55 + 8;
    }
    plVar11 = (long *)0xffffffff;
LAB_108b486bc:
    param_3 = (uint)uVar20;
    func_0x000108b498c8(alStack_a0[4]);
    if ((bool)uVar10) {
      return;
    }
  }
  else {
LAB_108b486ec:
    _abort();
  }
  ___stack_chk_fail();
  uStack_208 = FUN_108b486f4;
  pfVar53 = (float *)&uStack_210;
  plStack_250 = (long *)param_6;
  plStack_248 = unaff_x25;
  uStack_240 = param_4;
  uStack_238 = param_5;
  uStack_230 = param_1;
  uStack_228 = param_2;
  uStack_220 = plVar30;
  plStack_218 = plVar47;
  uStack_210 = (float *)&stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = &uStack_1390;
  lVar29 = 0;
  uStack_2b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar41 = *(int *)((long)plVar11 + 0xc);
  plVar47 = (long *)(long)iVar41;
  plVar54 = (long *)*plVar11;
  uVar46 = *(uint *)((long)plVar54 + 4);
  lVar37 = (long)(int)uVar46;
  lVar42 = plVar54[1];
  lVar52 = plVar54[4];
  uVar19 = uVar46 + 0x800;
  iVar16 = (int)lVar56;
  lStack_12f0 = (long)iVar16;
  plStack_1310 = (long *)-(long)iVar16;
  plVar30 = plVar11;
  do {
    alStack_12d0[lVar29 + 2] = (long)(plVar30 + 0xe);
    alStack_12d0[lVar29] = (long)plVar30 + (long)iVar16 * -4 + 0x2070;
    lVar29 = lVar29 + 1;
    plVar30 = (long *)((long)plVar30 +
                      (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2));
  } while (lVar29 < (long)plVar47);
  plVar30 = (long *)((long)plVar11 + (long)(int)(uVar19 * iVar41) * 4 + 0x70);
  iVar35 = (int)lVar42 << 1;
  iStack_1384 = *(int *)((long)plVar11 + 0x3c);
  lStack_1318 = lVar37;
  plStack_1308 = plVar47;
  lStack_12e8 = lVar56;
  plStack_12e0 = plVar11;
  uStack_12d8 = param_3;
  if ((((int)plVar11[8] < 0x28) && ((int)plVar11[3] == 0)) && ((int)plVar11[9] == 0)) {
    if (*(int *)((long)plVar11 + 0x44) == 3) {
      uVar19 = *(uint *)(plVar11 + 7);
      fVar57 = 0.8;
    }
    else {
      uVar38 = *(undefined4 *)((long)plVar11 + 0x2c);
      FUN_108b4b430(alStack_12d0 + 2,afStack_12b0,0x400,plVar47,2,uVar38);
      FUN_108b4b694(auStack_d10,afStack_12b0,0x530,0x26c,&iStack_12d4,uVar38);
      uVar19 = 0x2d0 - iStack_12d4;
      *(uint *)(plVar11 + 7) = uVar19;
      fVar57 = 1.0;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)(0x400);
    uStack_1338 = -(extraout_x14_00 >> 0x1f & 1) & 0xfffffffc00000000 |
                  (extraout_x14_00 & 0xffffffff) << 2;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar29 = -extraout_x13;
    puStack_1340 = auStack_23f0 + lVar29;
    lVar56 = 0;
    lVar42 = extraout_x12_01 + -0x1000;
    iVar41 = (int)extraout_x14_01;
    puStack_1348 = extraout_x15 + -(long)iVar41;
    iStack_1370 = (int)lStack_12e8;
    uVar48 = 0x800 - iStack_1370;
    lStack_1350 = (long)(int)uVar48;
    uStack_1358 = -(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar48 << 2;
    pfStack_1380 = (float *)plVar54[9];
    uVar18 = extraout_w8_00 - uVar19;
    uVar3 = uVar46 + iStack_1370;
    uStack_1360 = (ulong)(int)uVar3;
    uStack_1368 = (ulong)(iVar41 >> 1 & (iVar41 >> 0x1f ^ 0xffffffffU));
    uVar48 = (uVar18 - iStack_1370) + 0x400;
    plStack_12f8 = (long *)(ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    iStack_136c = extraout_w8_00 - iVar41;
    iStack_1370 = 0x7ff - iStack_1370;
    uStack_1390 = (ulong)(uVar46 & ((int)uVar46 >> 0x1f ^ 0xffffffffU));
    iStack_1374 = extraout_w8_00 - (iVar41 >> 1);
    puStack_1330 = extraout_x15;
    uStack_1328 = extraout_x14_01;
    plStack_1320 = (long *)((long)plVar30 +
                           (long)iVar35 * 4 + (long)iVar35 * 4 + (long)iVar35 * 4 + (long)iVar35 * 4
                           );
    do {
      lVar52 = alStack_12d0[lVar56 + 2];
      puVar32 = puStack_1330;
      for (lVar37 = 1000; lVar37 != 0x800; lVar37 = lVar37 + 1) {
        *puVar32 = *(undefined4 *)(lVar52 + lVar37 * 4);
        puVar32 = puVar32 + 1;
      }
      plVar30 = plStack_1320;
      lStack_12e8 = lVar56;
      if (*(int *)((long)plVar11 + 0x44) != 3) {
        FUN_108b4c3b8(lVar42,afStack_12b0,pfStack_1380,lStack_1318,0x18,0x400,
                      *(undefined4 *)((long)plVar11 + 0x2c));
        plVar30 = plStack_1320;
        afStack_12b0[0] = afStack_12b0[0] * 1.0001;
        for (uVar20 = 1; uVar20 != 0x19; uVar20 = uVar20 + 1) {
          fVar60 = afStack_12b0[uVar20];
          afStack_12b0[uVar20] =
               fVar60 + (float)(uVar20 & 0xffffffff) *
                        fVar60 * -6.400001e-05 * (float)(uVar20 & 0xffffffff);
        }
        FUN_108b4bdd4(plStack_1320 + lVar56 * 0xc,afStack_12b0,0x18);
      }
      puVar36 = puStack_1340;
      puVar32 = puStack_1348;
      pfStack_1300 = (float *)(plVar30 + lVar56 * 0xc);
      FUN_108b4bee0(puStack_1348 + 0x418,pfStack_1300,puStack_1340,uStack_1328,0x18,
                    *(undefined4 *)((long)plVar11 + 0x2c));
      _memcpy(puVar32 + 0x418,puVar36,uStack_1338);
      lVar56 = lStack_12e8;
      fVar61 = 1.0;
      fVar60 = 1.0;
      iVar16 = iStack_1374;
      iVar41 = iStack_136c;
      for (uVar20 = uStack_1368; uVar20 != 0; uVar20 = uVar20 - 1) {
        fVar59 = *(float *)(lVar42 + (long)iVar16 * 4);
        fVar61 = fVar61 + fVar59 * fVar59;
        fVar59 = *(float *)(lVar42 + (long)iVar41 * 4);
        fVar60 = fVar60 + fVar59 * fVar59;
        iVar41 = iVar41 + 1;
        iVar16 = iVar16 + 1;
      }
      if (fVar60 <= fVar61) {
        fVar61 = fVar60;
      }
      _memmove(lVar52,lVar52 + lStack_12f0 * 4,uStack_1358);
      uVar20 = uStack_1360;
      iVar41 = 0;
      fVar59 = fVar57 * SQRT(fVar61 / fVar60);
      pfVar8 = (float *)(lVar52 + lStack_1350 * 4);
      fVar62 = 0.0;
      pfVar45 = pfVar8;
      for (plVar30 = plStack_12f8; plVar30 != (long *)0x0; plVar30 = (long *)((long)plVar30 + -1)) {
        if ((int)uVar19 <= iVar41) {
          fVar59 = SQRT(fVar61 / fVar60) * fVar59;
        }
        uVar46 = 0;
        if ((int)uVar19 <= iVar41) {
          uVar46 = uVar19;
        }
        iVar41 = iVar41 - uVar46;
        *pfVar45 = fVar59 * *(float *)(lVar42 + (long)(int)(iVar41 + uVar18) * 4);
        fVar58 = *(float *)(lVar52 + (long)(int)(uVar48 + iVar41) * 4);
        fVar62 = fVar62 + fVar58 * fVar58;
        iVar41 = iVar41 + 1;
        pfVar45 = pfVar45 + 1;
      }
      iVar41 = iStack_1370;
      for (lVar37 = 0; lVar37 != 0x60; lVar37 = lVar37 + 4) {
        *(undefined4 *)((long)afStack_12b0 + lVar37) = *(undefined4 *)(lVar52 + (long)iVar41 * 4);
        iVar41 = iVar41 + -1;
      }
      lVar52 = lVar52 + (long)plStack_1310 * 4;
      puVar25 = (undefined8 *)(ulong)*(uint *)((long)plStack_12e0 + 0x2c);
      puVar13 = (ulong *)(lVar52 + 0x2000);
      uVar46 = (int)lVar52 + 0x2000;
      pfVar45 = afStack_12b0;
      uVar43 = 0x18;
      pfVar17 = pfStack_1300;
      uVar31 = uStack_1360;
      FUN_108b4c184();
      plVar11 = plStack_12e0;
      iVar41 = (int)param_8;
      fVar60 = 0.0;
      pfVar4 = pfVar8;
      for (plVar30 = plStack_12f8; plVar30 != (long *)0x0; plVar30 = (long *)((long)plVar30 + -1)) {
        fVar60 = fVar60 + *pfVar4 * *pfVar4;
        pfVar4 = pfVar4 + 1;
      }
      plVar30 = plStack_12f8;
      if (fVar62 <= fVar60 * 0.2) {
        for (; plVar30 != (long *)0x0; plVar30 = (long *)((long)plVar30 + -1)) {
          *pfVar8 = 0.0;
          pfVar8 = pfVar8 + 1;
        }
      }
      else if (fVar62 < fVar60) {
        fVar60 = SQRT((fVar62 + 1.0) / (fVar60 + 1.0));
        pfVar4 = pfVar8;
        pfVar5 = pfStack_1380;
        for (uVar33 = uStack_1390; lVar37 = lStack_1318, uVar33 != 0; uVar33 = uVar33 - 1) {
          *pfVar4 = (1.0 - (1.0 - fVar60) * *pfVar5) * *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        }
        for (; lVar37 < (long)uVar20; lVar37 = lVar37 + 1) {
          pfVar8[lVar37] = fVar60 * pfVar8[lVar37];
        }
      }
      lVar56 = lVar56 + 1;
    } while (lVar56 < (long)plStack_1308);
    *(undefined4 *)((long)plStack_12e0 + 100) = 1;
    iVar35 = 1 << (ulong)(uStack_12d8 & 0x1f);
    iVar16 = iStack_1384 + iVar35;
    iVar35 = (int)plStack_12e0[8] + iVar35;
    if (9999 < iVar16) {
      iVar16 = 10000;
    }
    bVar9 = iVar35 == 10000;
    if (9999 < iVar35) {
      iVar35 = 10000;
    }
    *(int *)((long)plStack_12e0 + 0x3c) = iVar16;
    *(int *)(plStack_12e0 + 8) = iVar35;
    *(undefined4 *)((long)plStack_12e0 + 0x44) = 3;
    func_0x000108b498c8(uStack_2b0);
    if (bVar9) {
      return;
    }
    ___stack_chk_fail();
    *(float **)((long)alStack_2400 + lVar29) = pfVar53;
    *(code **)((long)alStack_2400 + lVar29 + 8) = FUN_108b48fc8;
    pfVar8 = (float *)((long)afStack_2410 + lVar29);
    func_0x000108b49954();
    *(undefined8 *)((long)&uStack_2408 + lVar29) = extraout_x8_03;
    uVar33 = (ulong)(uVar46 & ((int)uVar46 >> 0x1f ^ 0xffffffffU));
    if (((int)uVar31 == 2 && (int)uVar43 == 1) && iVar41 == 0) {
      pfVar53 = (float *)puVar13[1];
      uVar23 = *puVar25;
      fVar57 = *pfVar45;
      pfVar45 = (float *)*puVar13;
      for (; uVar33 != 0; uVar33 = uVar33 - 1) {
        fVar61 = *pfVar53;
        pfVar53 = pfVar53 + 1;
        fVar60 = (float)uVar23 + *pfVar45 + 1e-30;
        fVar61 = (float)((ulong)uVar23 >> 0x20) + fVar61 + 1e-30;
        uVar23 = CONCAT44(fVar61 * fVar57,fVar60 * fVar57);
        *(long *)pfVar17 = CONCAT44(fVar61 * 3.0517578e-05,fVar60 * 3.0517578e-05);
        pfVar45 = pfVar45 + 1;
        pfVar17 = pfVar17 + 2;
      }
      *puVar25 = uVar23;
      bVar9 = true;
    }
    else {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      pfVar8 = (float *)((long)afStack_2410 + (lVar29 - extraout_x12_02));
      lVar37 = 0;
      bVar39 = false;
      fVar57 = *pfVar45;
      uVar3 = 0;
      iVar16 = (int)uVar43;
      if (iVar16 != 0) {
        uVar3 = (int)uVar46 / iVar16;
      }
      uVar33 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      uVar40 = -(uVar31 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar31 & 0xffffffff) << 2;
      uVar43 = -(uVar43 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar43 & 0xffffffff) << 2;
      do {
        fVar60 = *(float *)((long)puVar25 + lVar37 * 4);
        pfVar45 = (float *)puVar13[lVar37];
        pfVar53 = pfVar8;
        lVar52 = extraout_x8_04;
        if (iVar16 < 2) {
          pfVar53 = pfVar17;
          if (iVar41 == 0) {
            for (; lVar52 != 0; lVar52 = lVar52 + -1) {
              fVar61 = fVar60 + *pfVar45 + 1e-30;
              fVar60 = fVar57 * fVar61;
              *pfVar53 = fVar61 * 3.0517578e-05;
              pfVar53 = (float *)((long)pfVar53 + uVar40);
              pfVar45 = pfVar45 + 1;
            }
          }
          else {
            for (; lVar52 != 0; lVar52 = lVar52 + -1) {
              fVar61 = fVar60 + *pfVar45 + 1e-30;
              fVar60 = fVar57 * fVar61;
              *pfVar53 = *pfVar53 + fVar61 * 3.0517578e-05;
              pfVar53 = (float *)((long)pfVar53 + uVar40);
              pfVar45 = pfVar45 + 1;
            }
          }
          *(float *)((long)puVar25 + lVar37 * 4) = fVar60;
          if (bVar39) goto LAB_108b490e8;
        }
        else {
          for (; lVar52 != 0; lVar52 = lVar52 + -1) {
            fVar61 = fVar60 + *pfVar45 + 1e-30;
            fVar60 = fVar57 * fVar61;
            *pfVar53 = fVar61;
            pfVar53 = pfVar53 + 1;
            pfVar45 = pfVar45 + 1;
          }
          *(float *)((long)puVar25 + lVar37 * 4) = fVar60;
LAB_108b490e8:
          uVar44 = uVar33;
          pfVar45 = pfVar17;
          pfVar53 = pfVar8;
          if (iVar41 == 0) {
            for (; uVar44 != 0; uVar44 = uVar44 - 1) {
              *pfVar45 = *pfVar53 * 3.0517578e-05;
              pfVar53 = (float *)((long)pfVar53 + uVar43);
              pfVar45 = (float *)((long)pfVar45 + uVar40);
            }
          }
          else {
            for (; uVar44 != 0; uVar44 = uVar44 - 1) {
              *pfVar45 = *pfVar45 + *pfVar53 * 3.0517578e-05;
              pfVar53 = (float *)((long)pfVar53 + uVar43);
              pfVar45 = (float *)((long)pfVar45 + uVar40);
            }
          }
          bVar39 = true;
        }
        lVar37 = lVar37 + 1;
        pfVar17 = pfVar17 + 1;
        bVar9 = lVar37 == (int)uVar31;
      } while (lVar37 < (int)uVar31);
    }
    iVar16 = (int)pfVar17;
    func_0x000108b498c8(*(undefined8 *)((long)&uStack_2408 + lVar29));
    if (bVar9) {
      return;
    }
    ___stack_chk_fail();
    *(ulong *)(pfVar8 + -0x18) = (ulong)uVar19;
    *(long *)(pfVar8 + -0x16) = lVar42;
    *(ulong *)(pfVar8 + -0x14) = (ulong)uVar18;
    *(long **)(pfVar8 + -0x12) = plVar11;
    *(ulong *)(pfVar8 + -0x10) = uVar20;
    *(ulong *)(pfVar8 + -0xe) = (ulong)uVar48;
    *(float **)(pfVar8 + -0xc) = afStack_12b0;
    *(long *)(pfVar8 + -10) = lVar56;
    *(undefined4 **)(pfVar8 + -8) = puVar32;
    *(ulong **)(pfVar8 + -6) = &uStack_1390;
    *(long *)(pfVar8 + -4) = (long)alStack_2400 + lVar29;
    *(code **)(pfVar8 + -2) = FUN_108b491c4;
    pfVar53 = pfVar8 + -4;
    plVar47 = (long *)puVar13;
    func_0x000108b49954();
    *(undefined8 *)(pfVar8 + -0x1a) = extraout_x8_05;
    plVar11 = (long *)*plVar47;
    plVar30 = (long *)(long)*(int *)((long)plVar47 + 0xc);
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)plVar47[1] << 2);
    plVar50 = (long *)((long)pfVar8 + (-0x80 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0)));
    lVar56 = 0;
    plVar47 = plVar47 + 0xe;
    *(undefined8 *)(pfVar8 + -0x20) = extraout_x12_03;
    uVar19 = (int)extraout_x12_03 + 0x800;
    do {
      *(long **)(pfVar8 + lVar56 * 2 + -0x1e) = plVar47;
      lVar56 = lVar56 + 1;
      plVar47 = (long *)((long)plVar47 +
                        (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2));
    } while (lVar56 < (long)plVar30);
    plVar47 = (long *)0x0;
    unaff_x25 = (long *)-(long)iVar16;
    uVar19 = (int)*(undefined8 *)(pfVar8 + -0x20) / 2;
    uVar20 = (ulong)(0x800 - iVar16);
    param_6 = (undefined1 *)(ulong)((int)*(undefined8 *)(pfVar8 + -0x20) - 1);
    lVar56 = (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) << 2;
    do {
      plVar49 = *(long **)(pfVar8 + (long)plVar47 * 2 + -0x1e);
      plVar54 = (long *)(ulong)*(uint *)((long)puVar13 + 0x4c);
      plVar21 = (long *)(ulong)*(uint *)(puVar13 + 10);
      fVar60 = *(float *)((long)puVar13 + 0x54);
      fVar57 = *(float *)(puVar13 + 0xb);
      plVar26 = (long *)(ulong)*(uint *)((long)puVar13 + 0x5c);
      iVar41 = (int)puVar13[0xc];
      uVar38 = *(undefined4 *)((long)puVar13 + 0x2c);
      *(undefined4 *)(plVar50 + -2) = 0;
      *(undefined4 *)((long)plVar50 + -0xc) = uVar38;
      lVar42 = (long)plVar49 + (long)iVar16 * -4 + 0x2000;
      plVar24 = *(long **)(pfVar8 + -0x20);
      plVar27 = (long *)0x0;
      plVar14 = plVar50;
      func_0x000108b416a4(-fVar57,-fVar60);
      puVar36 = param_6;
      uVar31 = uVar20;
      for (lVar29 = 0; lVar56 != lVar29; lVar29 = lVar29 + 4) {
        iVar35 = (int)puVar36;
        *(float *)((long)plVar49 + (long)(int)uVar31 * 4) =
             *(float *)(plVar11[9] + (long)iVar35 * 4) * *(float *)((long)plVar50 + lVar29) +
             *(float *)((long)plVar50 + (long)iVar35 * 4) * *(float *)(plVar11[9] + lVar29);
        uVar31 = (ulong)((int)uVar31 + 1);
        puVar36 = (undefined1 *)(ulong)(iVar35 - 1);
      }
      plVar47 = (long *)((long)plVar47 + 1);
      bVar9 = plVar47 == plVar30;
    } while ((long)plVar47 < (long)plVar30);
    func_0x000108b498c8(*(undefined8 *)(pfVar8 + -0x1a));
    if (bVar9) {
      return;
    }
    lVar29 = 0x108b49320;
    ___stack_chk_fail();
    plVar51 = plVar50;
  }
  else {
    uStack_1328 = (ulong)iVar35;
    plStack_12f8 = (long *)(long)(int)plVar11[3];
    uVar3 = *(uint *)((long)plVar11 + 0x1c);
    uVar48 = *(uint *)((long)plVar54 + 0xc);
    plStack_1320 = plVar30;
    plStack_1310 = plVar54;
    pfStack_1300 = (float *)(long)(int)lVar42;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((-(ulong)((uint)(iVar41 * iVar16) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar41 * iVar16) << 2) + 0xf & 0xfffffffffffffff0);
    lVar29 = -extraout_x8_02;
    lVar42 = (long)&uStack_1390 + lVar29;
    lVar56 = 0;
    uVar46 = ((int)lVar37 - extraout_w12_01) + 0x800;
    do {
      _memmove(alStack_12d0[lVar56 + 2],alStack_12d0[lVar56 + 2] + lStack_12f0 * 4,
               -(ulong)(uVar46 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar46 << 2);
      plVar30 = plStack_12e0;
      plVar24 = plStack_12f8;
      lVar56 = lVar56 + 1;
    } while (lVar56 < (long)plVar47);
    uVar46 = uVar3;
    if ((int)uVar48 <= (int)uVar3) {
      uVar46 = uVar48;
    }
    uVar48 = (uint)plStack_12f8;
    if ((int)(uint)plStack_12f8 <= (int)uVar46) {
      uVar48 = uVar46;
    }
    if (*(int *)((long)plStack_12e0 + 100) != 0) {
      FUN_108b491c4(plStack_12e0,lStack_12e8);
    }
    lVar56 = 0;
    fVar57 = 1.5;
    if (iStack_1384 != 0) {
      fVar57 = 0.5;
    }
    pfVar8 = (float *)((long)plVar30 + (long)plVar24 * 4 + (long)(int)(uVar19 * iVar41) * 4 + 0x70);
    plVar11 = plVar24;
    pfVar45 = pfVar8;
    do {
      for (; (long)plVar11 < (long)(int)uVar3; plVar11 = (long *)((long)plVar11 + 1)) {
        fVar60 = pfVar8[uStack_1328 * 3];
        if (pfVar8[uStack_1328 * 3] <= *pfVar8 - fVar57) {
          fVar60 = *pfVar8 - fVar57;
        }
        *pfVar8 = fVar60;
        pfVar8 = pfVar8 + 1;
      }
      lVar56 = lVar56 + 1;
      pfVar8 = pfVar45 + (long)pfStack_1300;
      plVar11 = plVar24;
      pfVar45 = pfVar8;
    } while (lVar56 < (long)plStack_1308);
    uVar20 = 0;
    plVar30 = (long *)(ulong)*(uint *)(plVar30 + 6);
    param_6 = (undefined1 *)0x19660d;
    pfStack_1300 = (float *)CONCAT44(pfStack_1300._4_4_,
                                     (uint)plStack_1308 &
                                     ((int)(uint)plStack_1308 >> 0x1f ^ 0xffffffffU));
    iVar41 = 0;
    uStack_1328 = (ulong)uVar48;
    while (unaff_x25 = plStack_12e0, iVar41 != (int)pfStack_1300) {
      lStack_12f0 = CONCAT44(lStack_12f0._4_4_,iVar41);
      iVar16 = (int)lStack_12e8;
      while (plVar24 != (long *)(long)(int)uVar48) {
        iVar28 = (int)*(short *)(lVar52 + (long)plVar24 * 2);
        iVar35 = iVar28 << (ulong)(uStack_12d8 & 0x1f);
        plVar24 = (long *)((long)plVar24 + 1);
        uVar19 = *(short *)(lVar52 + (long)plVar24 * 2) - iVar28 << (ulong)(uStack_12d8 & 0x1f);
        pfVar8 = (float *)(lVar42 + (long)((int)uVar20 + iVar35) * 4);
        for (uVar31 = (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar31 != 0;
            uVar31 = uVar31 - 1) {
          uVar46 = (int)plVar30 * 0x19660d + 0x3c6ef35f;
          plVar30 = (long *)(ulong)uVar46;
          *pfVar8 = (float)((int)uVar46 >> 0x14);
          pfVar8 = pfVar8 + 1;
        }
        FUN_108b4e9fc(0x3f800000,lVar42 + (long)(iVar35 + iVar41 * iVar16) * 4,uVar19,
                      *(undefined4 *)((long)plStack_12e0 + 0x2c));
      }
      uVar20 = (ulong)(uint)((int)uVar20 + (int)lStack_12e8);
      plVar24 = plStack_12f8;
      iVar41 = (int)lStack_12f0 + 1;
    }
    *(int *)(plStack_12e0 + 6) = (int)plVar30;
    uVar38 = *(undefined4 *)((long)plStack_12e0 + 0x14);
    uVar22 = *(undefined4 *)((long)plStack_12e0 + 0x2c);
    plVar50 = (long *)((long)auStack_13b0 + lVar29);
    *(undefined4 *)((long)auStack_13b0 + lVar29 + 0xc) = 0;
    *(undefined4 *)((long)auStack_13b0 + lVar29 + 0x10) = uVar22;
    plVar11 = alStack_12d0;
    plVar21 = alStack_12d0;
    *(undefined4 *)((long)auStack_13b0 + lVar29 + 8) = uVar38;
    uVar19 = uStack_12d8;
    *(undefined4 *)((long)auStack_13b0 + lVar29) = 0;
    *(uint *)((long)auStack_13b0 + lVar29 + 4) = uVar19;
    iVar41 = (int)uStack_1328;
    lVar29 = 0x108b48a38;
    plVar14 = plStack_1310;
    plVar54 = plStack_1320;
    plVar26 = plStack_1308;
    plVar27 = plStack_1308;
    plVar49 = plStack_1308;
    plVar51 = plVar24;
    plVar47 = plStack_1310;
    lVar56 = lVar42;
  }
SUB_108b49320:
  uVar22 = SUB84(plVar24,0);
  iVar35 = (int)plVar27;
  iVar16 = (int)plVar26;
  plVar50[-0xc] = lVar56;
  plVar50[-0xb] = (long)param_6;
  plVar50[-10] = uVar20;
  plVar50[-9] = (long)unaff_x25;
  plVar50[-8] = (long)plVar47;
  plVar50[-7] = (long)plVar30;
  plVar50[-6] = (long)plVar11;
  plVar50[-5] = (long)plVar51;
  plVar50[-4] = (long)plVar49;
  plVar50[-3] = (long)puVar13;
  plVar50[-2] = (long)pfVar53;
  plVar50[-1] = lVar29;
  uVar38 = *(undefined4 *)((long)plVar50 + 0xc);
  *(int *)((long)plVar50 + -0x6c) = (int)plVar50[2];
  lVar56 = plVar50[1];
  func_0x000108b49954();
  plVar50[-0xd] = extraout_x8_07;
  uVar46 = *(uint *)((long)plVar14 + 4);
  plVar50[-0x10] = (long)(int)plVar14[1];
  uVar48 = (int)plVar14[6] << (ulong)(extraout_w12_02 & 0x1f);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar53 = (float *)((long)plVar50 + (-0xc0 - extraout_x15_00));
  uVar3 = 1 << (ulong)(extraout_w12_03 & 0x1f);
  uVar19 = extraout_w8_01;
  if (extraout_w13 != 0) {
    uVar19 = extraout_w14;
  }
  uVar18 = uVar3;
  if (extraout_w13 == 0) {
    uVar18 = 1;
  }
  uVar10 = iVar16 == 1 && iVar35 == 2;
  plVar50[-0xf] = (long)pfVar53;
  uVar1 = (int)uVar18 >> 0x1f;
  if ((bool)uVar10) {
    func_0x000108b49984();
    func_0x000108b49964();
    pfVar8 = pfVar53 + 4;
    plVar30 = (long *)(plVar21[1] + (long)((int)uVar46 / 2) * 4);
    plVar11 = plVar30;
    _memcpy(plVar30,pfVar53,-(ulong)(uVar48 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar48 << 2);
    iVar41 = (int)pfVar53;
    plVar50[-0x10] = (long)(int)uVar19;
    uVar31 = (ulong)(uVar18 & (uVar1 ^ 0xffffffff));
    for (uVar20 = uVar31; uVar20 != 0; uVar20 = uVar20 - 1) {
      iVar41 = (int)plVar30;
      func_0x000108b49978(*plVar21);
      func_0x000108b498b4();
      plVar30 = (long *)((long)plVar30 + 4);
    }
    plVar30 = (long *)plVar50[-0xf];
    for (; uVar31 != 0; uVar31 = uVar31 - 1) {
      func_0x000108b49978(plVar21[1]);
      plVar47 = plVar30;
      func_0x000108b498b4();
      iVar41 = (int)plVar47;
      plVar30 = (long *)((long)plVar30 + 4);
    }
  }
  else {
    uVar10 = iVar16 == 2 && iVar35 == 1;
    *(undefined4 *)(plVar50 + -0x12) = uVar22;
    *(int *)((long)plVar50 + -0x8c) = iVar41;
    *(uint *)(plVar50 + -0x13) = uVar3;
    *(undefined4 *)((long)plVar50 + -0x94) = uVar38;
    plVar50[-0x11] = (long)(int)extraout_w8_01;
    if ((bool)uVar10) {
      pfVar8 = (float *)(*plVar21 + (long)((int)uVar46 / 2) * 4);
      pfVar53[-4] = (float)uVar38;
      plVar50[-0xf] = (ulong)uVar19;
      func_0x000108b49964(plVar14);
      lVar56 = plVar50[-0x10];
      lVar42 = lVar42 + plVar50[-0x11] * 4;
      plVar30 = (long *)plVar50[-0xf];
      pfVar53[-4] = (float)*(undefined4 *)((long)plVar50 + -0x94);
      plVar11 = plVar14;
      func_0x000108b49964(plVar14,lVar42,pfVar8,(undefined4 *)((long)plVar54 + lVar56 * 4),
                          (int)plVar50[-0x12],*(undefined4 *)((long)plVar50 + -0x8c),
                          (int)plVar50[-0x13]);
      iVar41 = (int)lVar42;
      pfVar45 = pfVar53;
      for (uVar20 = (ulong)((uint)plVar50[-0x11] & ((int)(uint)plVar50[-0x11] >> 0x1f ^ 0xffffffffU)
                           ); uVar20 != 0; uVar20 = uVar20 - 1) {
        *pfVar45 = *pfVar8 * 0.5 + *pfVar45 * 0.5;
        pfVar45 = pfVar45 + 1;
        pfVar8 = pfVar8 + 1;
      }
      pfVar45 = pfVar53;
      for (uVar20 = (ulong)(uVar18 & (uVar1 ^ 0xffffffff)); pfVar8 = pfVar53, uVar20 != 0;
          uVar20 = uVar20 - 1) {
        iVar41 = (int)pfVar45;
        func_0x000108b49978(*plVar21);
        func_0x000108b498b4();
        pfVar45 = pfVar45 + 1;
      }
    }
    else {
      *(int *)((long)plVar50 + -0x9c) = (int)lVar56;
      lVar56 = 0;
      plVar50[-0x18] = (ulong)(uVar18 & (uVar1 ^ 0xffffffff));
      plVar50[-0x17] = (long)iVar35;
      plVar50[-0x16] = lVar42;
      plVar50[-0x15] = (long)plVar54;
      do {
        func_0x000108b49984();
        FUN_108b3eaf8();
        pfVar53 = pfVar53 + 4;
        for (lVar29 = plVar50[-0x18]; lVar29 != 0; lVar29 = lVar29 + -1) {
          func_0x000108b49978(plVar21[lVar56]);
          func_0x000108b498b4();
        }
        lVar56 = lVar56 + 1;
        iVar41 = (int)plVar50[-0x16];
        uVar10 = lVar56 == plVar50[-0x17];
        plVar11 = (long *)(ulong)*(uint *)((long)plVar50 + -0x94);
        pfVar8 = pfVar53;
        plVar30 = plVar21;
      } while (lVar56 < plVar50[-0x17]);
    }
  }
  func_0x000108b498c8(plVar50[-0xd]);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(pfVar8 + -0xc) = (ulong)uVar46;
  *(long **)(pfVar8 + -10) = plVar30;
  *(long **)(pfVar8 + -8) = plVar14;
  *(long **)(pfVar8 + -6) = plVar21;
  *(long **)(pfVar8 + -4) = plVar50 + -2;
  *(code **)(pfVar8 + -2) = FUN_108b49614;
  *(float **)(pfVar8 + -0xe) = pfVar8;
  switch(iVar41) {
  case 0x2717:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_09 != (undefined4 *)0x0) {
      *extraout_x8_09 = *(undefined4 *)((long)plVar11 + 0x34);
      *(undefined4 *)((long)plVar11 + 0x34) = 0;
    }
    break;
  case 0x2718:
    func_0x000108b498a4();
    if (0xfffffffd < *extraout_x8_14 - 3U) {
      *(int *)(plVar11 + 2) = *extraout_x8_14;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
    break;
  case 0x271a:
    func_0x000108b498a4();
    iVar41 = *extraout_x8_11;
    if ((-1 < iVar41) && (iVar41 < *(int *)(*plVar11 + 8))) {
      *(int *)(plVar11 + 3) = iVar41;
    }
    break;
  case 0x271c:
    func_0x000108b498a4();
    iVar41 = *extraout_x8_13;
    if ((0 < iVar41) && (iVar41 <= *(int *)(*plVar11 + 8))) {
      *(int *)((long)plVar11 + 0x1c) = iVar41;
    }
    break;
  case 0x271f:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_12 != (long *)0x0) {
      *extraout_x8_12 = *plVar11;
    }
    break;
  case 0x2720:
    func_0x000108b498a4(0);
    *(undefined4 *)(plVar11 + 4) = *extraout_x8_15;
    break;
  default:
    switch(iVar41) {
    case 0xfbb:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_08 == (int *)0x0) {
        return;
      }
      iVar41 = 0;
      piVar34 = extraout_x8_08;
      if (*(int *)((long)plVar11 + 0x14) != 0) {
        iVar41 = (int)plVar11[1] / *(int *)((long)plVar11 + 0x14);
      }
      break;
    case 0xfbc:
      lVar56 = *plVar11;
      iVar41 = *(int *)(lVar56 + 8) << 1;
      puVar32 = (undefined4 *)
                ((long)plVar11 +
                (long)iVar41 * 4 +
                (long)(((int)plVar11[1] + 0x800) * *(int *)((long)plVar11 + 0xc)) * 4 + 0x70);
      FUN_108b47328();
      _bzero(plVar11 + 6,(long)(int)lVar56 + -0x30);
      puVar6 = puVar32 + iVar41;
      for (uVar20 = (long)iVar41 & ((long)iVar41 >> 0x3f ^ 0xffffffffffffffffU); uVar20 != 0;
          uVar20 = uVar20 - 1) {
        *puVar6 = 0xc1e00000;
        *puVar32 = 0xc1e00000;
        puVar32 = puVar32 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined8 *)((long)plVar11 + 0x44) = 0x100000000;
      return;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
      goto LAB_108b49870;
    case 0xfbf:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_17 == (int *)0x0) {
        return;
      }
      iVar41 = (int)plVar11[6];
      piVar34 = extraout_x8_17;
      break;
    case 0xfc1:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_16 == (int *)0x0) {
        return;
      }
      iVar41 = *(int *)((long)plVar11 + 0x4c);
      piVar34 = extraout_x8_16;
      break;
    default:
      if (iVar41 == 0xfcf) {
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_19 == (int *)0x0) {
          return;
        }
        iVar41 = *(int *)((long)plVar11 + 0x24);
        piVar34 = extraout_x8_19;
      }
      else {
        if (iVar41 != 0xfab) {
          if (iVar41 == 0xfce) {
            func_0x000108b498a4();
            if (1 < *extraout_x8_20) {
              return;
            }
            *(uint *)((long)plVar11 + 0x24) = *extraout_x8_20;
            return;
          }
          if (iVar41 != 0xfaa) {
            return;
          }
          func_0x000108b498a4();
          if (10 < *extraout_x8_10) {
            return;
          }
          *(uint *)(plVar11 + 5) = *extraout_x8_10;
          return;
        }
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_18 == (int *)0x0) {
          return;
        }
        iVar41 = (int)plVar11[5];
        piVar34 = extraout_x8_18;
      }
    }
    *piVar34 = iVar41;
  }
LAB_108b49870:
  return;
}



/* Entry: 108b486f4; end: 108b48fc7;  */

/* WARNING: Possible PIC construction at 0x000108b48a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b48a38) */
/* WARNING: Removing unreachable block (ram,0x000108b48a48) */
/* WARNING: Removing unreachable block (ram,0x000108b48a90) */
/* WARNING: Removing unreachable block (ram,0x000108b48ad0) */
/* WARNING: Removing unreachable block (ram,0x000108b48adc) */

void FUN_108b486f4(ulong *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  ulong *puVar16;
  long *plVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 *puVar25;
  undefined8 in_x7;
  int iVar26;
  int extraout_w8;
  uint extraout_w8_00;
  long lVar27;
  long extraout_x8;
  ulong uVar28;
  undefined4 *puVar29;
  undefined8 extraout_x8_00;
  ulong uVar30;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int *extraout_x8_05;
  undefined4 *extraout_x8_06;
  uint *extraout_x8_07;
  int *extraout_x8_08;
  long *extraout_x8_09;
  int *extraout_x8_10;
  int *extraout_x8_11;
  undefined4 *extraout_x8_12;
  int *extraout_x8_13;
  int *extraout_x8_14;
  int *extraout_x8_15;
  int *extraout_x8_16;
  int *piVar31;
  uint *extraout_x8_17;
  ulong uVar32;
  ulong uVar33;
  int extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x12_01;
  int iVar34;
  int extraout_w13;
  long extraout_x13;
  ulong uVar35;
  uint extraout_w14;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong *puVar36;
  undefined4 *extraout_x15;
  long lVar37;
  long extraout_x15_00;
  float *pfVar38;
  ulong uVar39;
  long *plVar40;
  long *plVar41;
  long lVar42;
  long *plVar43;
  long *plVar44;
  float *pfVar45;
  long *plVar46;
  long *plVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float afStack_2210 [2];
  undefined8 uStack_2208;
  long alStack_2200 [2];
  undefined1 auStack_21f0 [4160];
  uint auStack_11b0 [8];
  ulong uStack_1190;
  int iStack_1184;
  float *pfStack_1180;
  int iStack_1174;
  int iStack_1170;
  int iStack_116c;
  ulong uStack_1168;
  ulong uStack_1160;
  ulong uStack_1158;
  long lStack_1150;
  undefined4 *puStack_1148;
  undefined1 *puStack_1140;
  ulong uStack_1138;
  undefined4 *puStack_1130;
  ulong uStack_1128;
  ulong uStack_1120;
  long lStack_1118;
  long *plStack_1110;
  ulong uStack_1108;
  float *pfStack_1100;
  long *plStack_10f8;
  long lStack_10f0;
  long lStack_10e8;
  ulong *puStack_10e0;
  uint uStack_10d8;
  int iStack_10d4;
  long alStack_10d0 [4];
  float afStack_10b0 [360];
  undefined1 auStack_b10 [2656];
  undefined8 uStack_b0;
  
  pfVar45 = (float *)&stack0xfffffffffffffff0;
  uStack_10d8 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = &uStack_1190;
  lVar27 = 0;
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar34 = *(int *)((long)param_1 + 0xc);
  uVar22 = (ulong)iVar34;
  plVar46 = (long *)*param_1;
  uVar20 = *(uint *)((long)plVar46 + 4);
  lVar50 = (long)(int)uVar20;
  lVar49 = plVar46[1];
  lVar42 = plVar46[4];
  uVar2 = uVar20 + 0x800;
  iVar18 = (int)param_2;
  lStack_10f0 = (long)iVar18;
  plStack_1110 = (long *)-(long)iVar18;
  puVar36 = param_1;
  do {
    alStack_10d0[lVar27 + 2] = (long)(puVar36 + 0xe);
    alStack_10d0[lVar27] = (long)puVar36 + (long)iVar18 * -4 + 0x2070;
    lVar27 = lVar27 + 1;
    puVar36 = (ulong *)((long)puVar36 +
                       (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
  } while (lVar27 < (long)uVar22);
  uStack_1120 = (long)param_1 + (long)(int)(uVar2 * iVar34) * 4 + 0x70;
  iVar6 = (int)lVar49 << 1;
  iStack_1184 = *(int *)((long)param_1 + 0x3c);
  lStack_1118 = lVar50;
  uStack_1108 = uVar22;
  lStack_10e8 = param_2;
  puStack_10e0 = param_1;
  if ((((int)param_1[8] < 0x28) && ((int)param_1[3] == 0)) && ((int)param_1[9] == 0)) {
    if (*(int *)((long)param_1 + 0x44) == 3) {
      uVar2 = (uint)param_1[7];
      fVar51 = 0.8;
    }
    else {
      uVar24 = *(undefined4 *)((long)param_1 + 0x2c);
      FUN_108b4b430(alStack_10d0 + 2,afStack_10b0,0x400,uVar22,2,uVar24);
      FUN_108b4b694(auStack_b10,afStack_10b0,0x530,0x26c,&iStack_10d4,uVar24);
      uVar2 = 0x2d0 - iStack_10d4;
      *(uint *)(param_1 + 7) = uVar2;
      fVar51 = 1.0;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)(0x400);
    uStack_1138 = -(extraout_x14 >> 0x1f & 1) & 0xfffffffc00000000 |
                  (extraout_x14 & 0xffffffff) << 2;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar50 = -extraout_x13;
    puStack_1140 = auStack_21f0 + lVar50;
    lVar27 = 0;
    lVar49 = extraout_x12 + -0x1000;
    puStack_1130 = extraout_x15;
    iVar18 = (int)extraout_x14_00;
    puStack_1148 = extraout_x15 + -(long)iVar18;
    iVar34 = (int)lStack_10e8;
    uVar4 = 0x800 - iVar34;
    uStack_1158 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    lStack_1150 = (long)(int)uVar4;
    pfStack_1180 = (float *)plVar46[9];
    uVar3 = extraout_w8 - uVar2;
    uVar5 = uVar20 + iVar34;
    uStack_1168 = (ulong)(iVar18 >> 1 & (iVar18 >> 0x1f ^ 0xffffffffU));
    uVar4 = (uVar3 - iVar34) + 0x400;
    plStack_10f8 = (long *)(ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
    iStack_116c = extraout_w8 - iVar18;
    iStack_1170 = 0x7ff - iVar34;
    uStack_1190 = (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
    uStack_1128 = extraout_x14_00;
    uStack_1120 = uStack_1120 + (long)iVar6 * 4 + (long)iVar6 * 4 + (long)iVar6 * 4 +
                  (long)iVar6 * 4;
    iStack_1174 = extraout_w8 - (iVar18 >> 1);
    uStack_1160 = (long)(int)uVar5;
    do {
      lVar37 = alStack_10d0[lVar27 + 2];
      puVar29 = puStack_1130;
      for (lVar42 = 1000; lVar42 != 0x800; lVar42 = lVar42 + 1) {
        *puVar29 = *(undefined4 *)(lVar37 + lVar42 * 4);
        puVar29 = puVar29 + 1;
      }
      uVar22 = uStack_1120;
      lStack_10e8 = lVar27;
      if (*(int *)((long)param_1 + 0x44) != 3) {
        FUN_108b4c3b8(lVar49,afStack_10b0,pfStack_1180,lStack_1118,0x18,0x400,
                      *(undefined4 *)((long)param_1 + 0x2c));
        uVar22 = uStack_1120;
        afStack_10b0[0] = afStack_10b0[0] * 1.0001;
        for (uVar48 = 1; uVar48 != 0x19; uVar48 = uVar48 + 1) {
          fVar55 = afStack_10b0[uVar48];
          afStack_10b0[uVar48] =
               fVar55 + (float)(uVar48 & 0xffffffff) *
                        fVar55 * -6.400001e-05 * (float)(uVar48 & 0xffffffff);
        }
        FUN_108b4bdd4(uStack_1120 + lVar27 * 0x60,afStack_10b0,0x18);
      }
      puVar11 = puStack_1140;
      puVar29 = puStack_1148;
      pfStack_1100 = (float *)(uVar22 + lVar27 * 0x60);
      FUN_108b4bee0(puStack_1148 + 0x418,pfStack_1100,puStack_1140,uStack_1128,0x18,
                    *(undefined4 *)((long)param_1 + 0x2c));
      _memcpy(puVar29 + 0x418,puVar11,uStack_1138);
      lVar27 = lStack_10e8;
      fVar56 = 1.0;
      fVar55 = 1.0;
      iVar18 = iStack_1174;
      iVar34 = iStack_116c;
      for (uVar22 = uStack_1168; uVar22 != 0; uVar22 = uVar22 - 1) {
        fVar54 = *(float *)(lVar49 + (long)iVar18 * 4);
        fVar56 = fVar56 + fVar54 * fVar54;
        fVar54 = *(float *)(lVar49 + (long)iVar34 * 4);
        fVar55 = fVar55 + fVar54 * fVar54;
        iVar34 = iVar34 + 1;
        iVar18 = iVar18 + 1;
      }
      if (fVar55 <= fVar56) {
        fVar56 = fVar55;
      }
      _memmove(lVar37,lVar37 + lStack_10f0 * 4,uStack_1158);
      uVar22 = uStack_1160;
      iVar34 = 0;
      fVar54 = fVar51 * SQRT(fVar56 / fVar55);
      pfVar12 = (float *)(lVar37 + lStack_1150 * 4);
      fVar57 = 0.0;
      pfVar38 = pfVar12;
      for (plVar46 = plStack_10f8; plVar46 != (long *)0x0; plVar46 = (long *)((long)plVar46 - 1)) {
        if ((int)uVar2 <= iVar34) {
          fVar54 = SQRT(fVar56 / fVar55) * fVar54;
        }
        uVar20 = 0;
        if ((int)uVar2 <= iVar34) {
          uVar20 = uVar2;
        }
        iVar34 = iVar34 - uVar20;
        *pfVar38 = fVar54 * *(float *)(lVar49 + (long)(int)(iVar34 + uVar3) * 4);
        fVar53 = *(float *)(lVar37 + (long)(int)(uVar4 + iVar34) * 4);
        fVar57 = fVar57 + fVar53 * fVar53;
        iVar34 = iVar34 + 1;
        pfVar38 = pfVar38 + 1;
      }
      iVar34 = iStack_1170;
      for (lVar42 = 0; lVar42 != 0x60; lVar42 = lVar42 + 4) {
        *(undefined4 *)((long)afStack_10b0 + lVar42) = *(undefined4 *)(lVar37 + (long)iVar34 * 4);
        iVar34 = iVar34 + -1;
      }
      lVar37 = lVar37 + (long)plStack_1110 * 4;
      puVar25 = (undefined8 *)(ulong)*(uint *)((long)puStack_10e0 + 0x2c);
      puVar16 = (ulong *)(lVar37 + 0x2000);
      uVar20 = (int)lVar37 + 0x2000;
      pfVar38 = afStack_10b0;
      uVar28 = 0x18;
      pfVar19 = pfStack_1100;
      uVar48 = uStack_1160;
      FUN_108b4c184();
      puVar36 = puStack_10e0;
      iVar34 = (int)in_x7;
      fVar55 = 0.0;
      pfVar8 = pfVar12;
      for (plVar46 = plStack_10f8; plVar46 != (long *)0x0; plVar46 = (long *)((long)plVar46 - 1)) {
        fVar55 = fVar55 + *pfVar8 * *pfVar8;
        pfVar8 = pfVar8 + 1;
      }
      plVar46 = plStack_10f8;
      if (fVar57 <= fVar55 * 0.2) {
        for (; plVar46 != (long *)0x0; plVar46 = (long *)((long)plVar46 - 1)) {
          *pfVar12 = 0.0;
          pfVar12 = pfVar12 + 1;
        }
      }
      else if (fVar57 < fVar55) {
        fVar55 = SQRT((fVar57 + 1.0) / (fVar55 + 1.0));
        pfVar8 = pfVar12;
        pfVar9 = pfStack_1180;
        for (uVar30 = uStack_1190; lVar42 = lStack_1118, uVar30 != 0; uVar30 = uVar30 - 1) {
          *pfVar8 = (1.0 - (1.0 - fVar55) * *pfVar9) * *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        }
        for (; lVar42 < (long)uVar22; lVar42 = lVar42 + 1) {
          pfVar12[lVar42] = fVar55 * pfVar12[lVar42];
        }
      }
      lVar27 = lVar27 + 1;
      param_1 = puStack_10e0;
    } while (lVar27 < (long)uStack_1108);
    *(undefined4 *)((long)puStack_10e0 + 100) = 1;
    iVar6 = 1 << (ulong)(uStack_10d8 & 0x1f);
    iVar18 = iStack_1184 + iVar6;
    iVar6 = (int)puStack_10e0[8] + iVar6;
    if (9999 < iVar18) {
      iVar18 = 10000;
    }
    bVar13 = iVar6 == 10000;
    if (9999 < iVar6) {
      iVar6 = 10000;
    }
    *(int *)((long)puStack_10e0 + 0x3c) = iVar18;
    *(int *)(puStack_10e0 + 8) = iVar6;
    *(undefined4 *)((long)puStack_10e0 + 0x44) = 3;
    func_0x000108b498c8(uStack_b0);
    if (bVar13) {
      return;
    }
    ___stack_chk_fail();
    *(float **)((long)alStack_2200 + lVar50) = pfVar45;
    *(code **)((long)alStack_2200 + lVar50 + 8) = FUN_108b48fc8;
    pfVar12 = (float *)((long)afStack_2210 + lVar50);
    func_0x000108b49954();
    *(undefined8 *)((long)&uStack_2208 + lVar50) = extraout_x8_00;
    uVar30 = (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
    if (((int)uVar48 == 2 && (int)uVar28 == 1) && iVar34 == 0) {
      pfVar45 = (float *)puVar16[1];
      uVar52 = *puVar25;
      fVar51 = *pfVar38;
      pfVar38 = (float *)*puVar16;
      for (; uVar30 != 0; uVar30 = uVar30 - 1) {
        fVar56 = *pfVar45;
        pfVar45 = pfVar45 + 1;
        fVar55 = (float)uVar52 + *pfVar38 + 1e-30;
        fVar56 = (float)((ulong)uVar52 >> 0x20) + fVar56 + 1e-30;
        uVar52 = CONCAT44(fVar56 * fVar51,fVar55 * fVar51);
        *(ulong *)pfVar19 = CONCAT44(fVar56 * 3.0517578e-05,fVar55 * 3.0517578e-05);
        pfVar38 = pfVar38 + 1;
        pfVar19 = pfVar19 + 2;
      }
      *puVar25 = uVar52;
      bVar13 = true;
    }
    else {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      pfVar12 = (float *)((long)afStack_2210 + (lVar50 - extraout_x12_00));
      lVar42 = 0;
      bVar7 = false;
      fVar51 = *pfVar38;
      uVar5 = 0;
      iVar18 = (int)uVar28;
      if (iVar18 != 0) {
        uVar5 = (int)uVar20 / iVar18;
      }
      uVar30 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
      uVar35 = -(uVar48 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar48 & 0xffffffff) << 2;
      uVar28 = -(uVar28 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar28 & 0xffffffff) << 2;
      do {
        fVar55 = *(float *)((long)puVar25 + lVar42 * 4);
        pfVar38 = (float *)puVar16[lVar42];
        pfVar45 = pfVar12;
        lVar37 = extraout_x8_01;
        if (iVar18 < 2) {
          pfVar45 = pfVar19;
          if (iVar34 == 0) {
            for (; lVar37 != 0; lVar37 = lVar37 + -1) {
              fVar56 = fVar55 + *pfVar38 + 1e-30;
              fVar55 = fVar51 * fVar56;
              *pfVar45 = fVar56 * 3.0517578e-05;
              pfVar45 = (float *)((long)pfVar45 + uVar35);
              pfVar38 = pfVar38 + 1;
            }
          }
          else {
            for (; lVar37 != 0; lVar37 = lVar37 + -1) {
              fVar56 = fVar55 + *pfVar38 + 1e-30;
              fVar55 = fVar51 * fVar56;
              *pfVar45 = *pfVar45 + fVar56 * 3.0517578e-05;
              pfVar45 = (float *)((long)pfVar45 + uVar35);
              pfVar38 = pfVar38 + 1;
            }
          }
          *(float *)((long)puVar25 + lVar42 * 4) = fVar55;
          if (bVar7) goto LAB_108b490e8;
        }
        else {
          for (; lVar37 != 0; lVar37 = lVar37 + -1) {
            fVar56 = fVar55 + *pfVar38 + 1e-30;
            fVar55 = fVar51 * fVar56;
            *pfVar45 = fVar56;
            pfVar45 = pfVar45 + 1;
            pfVar38 = pfVar38 + 1;
          }
          *(float *)((long)puVar25 + lVar42 * 4) = fVar55;
LAB_108b490e8:
          uVar39 = uVar30;
          pfVar38 = pfVar19;
          pfVar45 = pfVar12;
          if (iVar34 == 0) {
            for (; uVar39 != 0; uVar39 = uVar39 - 1) {
              *pfVar38 = *pfVar45 * 3.0517578e-05;
              pfVar45 = (float *)((long)pfVar45 + uVar28);
              pfVar38 = (float *)((long)pfVar38 + uVar35);
            }
          }
          else {
            for (; uVar39 != 0; uVar39 = uVar39 - 1) {
              *pfVar38 = *pfVar38 + *pfVar45 * 3.0517578e-05;
              pfVar45 = (float *)((long)pfVar45 + uVar28);
              pfVar38 = (float *)((long)pfVar38 + uVar35);
            }
          }
          bVar7 = true;
        }
        lVar42 = lVar42 + 1;
        pfVar19 = pfVar19 + 1;
        bVar13 = lVar42 == (int)uVar48;
      } while (lVar42 < (int)uVar48);
    }
    iVar34 = (int)pfVar19;
    func_0x000108b498c8(*(undefined8 *)((long)&uStack_2208 + lVar50));
    if (bVar13) {
      return;
    }
    ___stack_chk_fail();
    *(ulong *)(pfVar12 + -0x18) = (ulong)uVar2;
    *(long *)(pfVar12 + -0x16) = lVar49;
    *(ulong *)(pfVar12 + -0x14) = (ulong)uVar3;
    *(ulong **)(pfVar12 + -0x12) = puVar36;
    *(ulong *)(pfVar12 + -0x10) = uVar22;
    *(ulong *)(pfVar12 + -0xe) = (ulong)uVar4;
    *(float **)(pfVar12 + -0xc) = afStack_10b0;
    *(long *)(pfVar12 + -10) = lVar27;
    *(undefined4 **)(pfVar12 + -8) = puVar29;
    *(ulong **)(pfVar12 + -6) = &uStack_1190;
    *(long *)(pfVar12 + -4) = (long)alStack_2200 + lVar50;
    *(code **)(pfVar12 + -2) = FUN_108b491c4;
    pfVar45 = pfVar12 + -4;
    plVar46 = (long *)puVar16;
    func_0x000108b49954();
    *(undefined8 *)(pfVar12 + -0x1a) = extraout_x8_02;
    plVar43 = (long *)*plVar46;
    plVar44 = (long *)(long)*(int *)((long)plVar46 + 0xc);
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)plVar46[1] << 2);
    plVar40 = (long *)((long)pfVar12 + (-0x80 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)));
    lVar27 = 0;
    plVar46 = plVar46 + 0xe;
    *(undefined8 *)(pfVar12 + -0x20) = extraout_x12_01;
    uVar2 = (int)extraout_x12_01 + 0x800;
    do {
      *(long **)(pfVar12 + lVar27 * 2 + -0x1e) = plVar46;
      lVar27 = lVar27 + 1;
      plVar46 = (long *)((long)plVar46 +
                        (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
    } while (lVar27 < (long)plVar44);
    plVar47 = (long *)0x0;
    puVar36 = (ulong *)-(long)iVar34;
    uVar2 = (int)*(undefined8 *)(pfVar12 + -0x20) / 2;
    uVar22 = (ulong)(0x800 - iVar34);
    uVar48 = (ulong)((int)*(undefined8 *)(pfVar12 + -0x20) - 1);
    lVar27 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 2;
    do {
      uVar39 = *(ulong *)(pfVar12 + (long)plVar47 * 2 + -0x1e);
      uVar28 = (ulong)*(uint *)((long)puVar16 + 0x4c);
      plVar21 = (long *)(ulong)*(uint *)(puVar16 + 10);
      fVar55 = *(float *)((long)puVar16 + 0x54);
      fVar51 = *(float *)(puVar16 + 0xb);
      uVar30 = (ulong)*(uint *)((long)puVar16 + 0x5c);
      uVar24 = (undefined4)puVar16[0xc];
      uVar15 = *(undefined4 *)((long)puVar16 + 0x2c);
      *(undefined4 *)(plVar40 + -2) = 0;
      *(undefined4 *)((long)plVar40 - 0xc) = uVar15;
      lVar49 = uVar39 + (long)iVar34 * -4 + 0x2000;
      plVar46 = *(long **)(pfVar12 + -0x20);
      uVar35 = 0;
      plVar17 = plVar40;
      FUN_108b416a4(-fVar51,-fVar55);
      uVar32 = uVar48;
      uVar33 = uVar22;
      for (lVar50 = 0; lVar27 != lVar50; lVar50 = lVar50 + 4) {
        iVar18 = (int)uVar32;
        *(float *)(uVar39 + (long)(int)uVar33 * 4) =
             *(float *)(plVar43[9] + (long)iVar18 * 4) * *(float *)((long)plVar40 + lVar50) +
             *(float *)((long)plVar40 + (long)iVar18 * 4) * *(float *)(plVar43[9] + lVar50);
        uVar33 = (ulong)((int)uVar33 + 1);
        uVar32 = (ulong)(iVar18 - 1);
      }
      plVar47 = (long *)((long)plVar47 + 1);
      bVar13 = plVar47 == plVar44;
    } while ((long)plVar47 < (long)plVar44);
    func_0x000108b498c8(*(undefined8 *)(pfVar12 + -0x1a));
    if (bVar13) {
      return;
    }
    lVar50 = 0x108b49320;
    ___stack_chk_fail();
    plVar41 = plVar40;
  }
  else {
    uStack_1128 = (ulong)iVar6;
    plStack_10f8 = (long *)(long)(int)param_1[3];
    uVar5 = *(uint *)((long)param_1 + 0x1c);
    uVar4 = *(uint *)((long)plVar46 + 0xc);
    plStack_1110 = plVar46;
    pfStack_1100 = (float *)(long)(int)lVar49;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((-(ulong)((uint)(iVar34 * iVar18) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar34 * iVar18) << 2) + 0xf & 0xfffffffffffffff0);
    lVar37 = -extraout_x8;
    lVar49 = (long)&uStack_1190 + lVar37;
    lVar27 = 0;
    uVar20 = ((int)lVar50 - extraout_w12) + 0x800;
    do {
      _memmove(alStack_10d0[lVar27 + 2],alStack_10d0[lVar27 + 2] + lStack_10f0 * 4,
               -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2);
      puVar36 = puStack_10e0;
      plVar46 = plStack_10f8;
      lVar27 = lVar27 + 1;
    } while (lVar27 < (long)uVar22);
    uVar20 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar20 = uVar4;
    }
    uVar4 = (uint)plStack_10f8;
    if ((int)(uint)plStack_10f8 <= (int)uVar20) {
      uVar4 = uVar20;
    }
    if (*(int *)((long)puStack_10e0 + 100) != 0) {
      FUN_108b491c4(puStack_10e0,lStack_10e8);
    }
    lVar27 = 0;
    fVar51 = 1.5;
    if (iStack_1184 != 0) {
      fVar51 = 0.5;
    }
    pfVar12 = (float *)((long)puVar36 + (long)plVar46 * 4 + (long)(int)(uVar2 * iVar34) * 4 + 0x70);
    plVar44 = plVar46;
    pfVar38 = pfVar12;
    do {
      for (; (long)plVar44 < (long)(int)uVar5; plVar44 = (long *)((long)plVar44 + 1)) {
        fVar55 = pfVar12[uStack_1128 * 3];
        if (pfVar12[uStack_1128 * 3] <= *pfVar12 - fVar51) {
          fVar55 = *pfVar12 - fVar51;
        }
        *pfVar12 = fVar55;
        pfVar12 = pfVar12 + 1;
      }
      lVar27 = lVar27 + 1;
      pfVar12 = pfVar38 + (long)pfStack_1100;
      plVar44 = plVar46;
      pfVar38 = pfVar12;
    } while (lVar27 < (long)uStack_1108);
    uVar22 = 0;
    plVar44 = (long *)(ulong)(uint)puVar36[6];
    uStack_1128 = (ulong)uVar4;
    uVar48 = 0x19660d;
    pfStack_1100 = (float *)CONCAT44(pfStack_1100._4_4_,
                                     (uint)uStack_1108 &
                                     ((int)(uint)uStack_1108 >> 0x1f ^ 0xffffffffU));
    iVar34 = 0;
    while (puVar36 = puStack_10e0, iVar34 != (int)pfStack_1100) {
      lStack_10f0 = CONCAT44(lStack_10f0._4_4_,iVar34);
      iVar18 = (int)lStack_10e8;
      while (plVar46 != (long *)(long)(int)uVar4) {
        iVar26 = (int)*(short *)(lVar42 + (long)plVar46 * 2);
        iVar6 = iVar26 << (ulong)(uStack_10d8 & 0x1f);
        plVar46 = (long *)((long)plVar46 + 1);
        uVar2 = *(short *)(lVar42 + (long)plVar46 * 2) - iVar26 << (ulong)(uStack_10d8 & 0x1f);
        pfVar12 = (float *)(lVar49 + (long)((int)uVar22 + iVar6) * 4);
        for (uVar28 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar28 != 0;
            uVar28 = uVar28 - 1) {
          uVar20 = (int)plVar44 * 0x19660d + 0x3c6ef35f;
          plVar44 = (long *)(ulong)uVar20;
          *pfVar12 = (float)((int)uVar20 >> 0x14);
          pfVar12 = pfVar12 + 1;
        }
        FUN_108b4e9fc(0x3f800000,lVar49 + (long)(iVar6 + iVar34 * iVar18) * 4,uVar2,
                      *(undefined4 *)((long)puStack_10e0 + 0x2c));
      }
      uVar22 = (ulong)(uint)((int)uVar22 + (int)lStack_10e8);
      plVar46 = plStack_10f8;
      iVar34 = (int)lStack_10f0 + 1;
    }
    *(int *)(puStack_10e0 + 6) = (int)plVar44;
    uVar24 = *(undefined4 *)((long)puStack_10e0 + 0x14);
    uVar15 = *(undefined4 *)((long)puStack_10e0 + 0x2c);
    plVar40 = (long *)((long)auStack_11b0 + lVar37);
    *(undefined4 *)((long)auStack_11b0 + lVar37 + 0xc) = 0;
    *(undefined4 *)((long)auStack_11b0 + lVar37 + 0x10) = uVar15;
    plVar43 = alStack_10d0;
    plVar21 = alStack_10d0;
    *(undefined4 *)((long)auStack_11b0 + lVar37 + 8) = uVar24;
    uVar2 = uStack_10d8;
    *(undefined4 *)((long)auStack_11b0 + lVar37) = 0;
    *(uint *)((long)auStack_11b0 + lVar37 + 4) = uVar2;
    uVar24 = (undefined4)uStack_1128;
    lVar50 = 0x108b48a38;
    plVar17 = plStack_1110;
    uVar28 = uStack_1120;
    uVar30 = uStack_1108;
    uVar35 = uStack_1108;
    uVar39 = uStack_1108;
    plVar41 = plVar46;
    plVar47 = plStack_1110;
    lVar27 = lVar49;
  }
  uVar23 = SUB84(plVar46,0);
  iVar18 = (int)uVar35;
  iVar34 = (int)uVar30;
  plVar40[-0xc] = lVar27;
  plVar40[-0xb] = uVar48;
  plVar40[-10] = uVar22;
  plVar40[-9] = (long)puVar36;
  plVar40[-8] = (long)plVar47;
  plVar40[-7] = (long)plVar44;
  plVar40[-6] = (long)plVar43;
  plVar40[-5] = (long)plVar41;
  plVar40[-4] = uVar39;
  plVar40[-3] = (long)puVar16;
  plVar40[-2] = (long)pfVar45;
  plVar40[-1] = lVar50;
  uVar15 = *(undefined4 *)((long)plVar40 + 0xc);
  *(int *)((long)plVar40 - 0x6c) = (int)plVar40[2];
  lVar27 = plVar40[1];
  func_0x000108b49954();
  plVar40[-0xd] = extraout_x8_04;
  uVar20 = *(uint *)((long)plVar17 + 4);
  plVar40[-0x10] = (long)(int)plVar17[1];
  uVar4 = (int)plVar17[6] << (ulong)(extraout_w12_00 & 0x1f);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar45 = (float *)((long)plVar40 + (-0xc0 - extraout_x15_00));
  uVar5 = 1 << (ulong)(extraout_w12_01 & 0x1f);
  uVar2 = extraout_w8_00;
  if (extraout_w13 != 0) {
    uVar2 = extraout_w14;
  }
  uVar3 = uVar5;
  if (extraout_w13 == 0) {
    uVar3 = 1;
  }
  uVar14 = iVar34 == 1 && iVar18 == 2;
  plVar40[-0xf] = (long)pfVar45;
  uVar1 = (int)uVar3 >> 0x1f;
  if ((bool)uVar14) {
    func_0x000108b49984();
    func_0x000108b49964();
    pfVar12 = pfVar45 + 4;
    plVar46 = (long *)(plVar21[1] + (long)((int)uVar20 / 2) * 4);
    plVar44 = plVar46;
    _memcpy(plVar46,pfVar45,-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
    iVar34 = (int)pfVar45;
    plVar40[-0x10] = (long)(int)uVar2;
    uVar48 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff));
    for (uVar22 = uVar48; uVar22 != 0; uVar22 = uVar22 - 1) {
      iVar34 = (int)plVar46;
      func_0x000108b49978(*plVar21);
      func_0x000108b498b4();
      plVar46 = (long *)((long)plVar46 + 4);
    }
    plVar46 = (long *)plVar40[-0xf];
    for (; uVar48 != 0; uVar48 = uVar48 - 1) {
      func_0x000108b49978(plVar21[1]);
      plVar43 = plVar46;
      func_0x000108b498b4();
      iVar34 = (int)plVar43;
      plVar46 = (long *)((long)plVar46 + 4);
    }
  }
  else {
    uVar14 = iVar34 == 2 && iVar18 == 1;
    *(undefined4 *)(plVar40 + -0x12) = uVar23;
    *(undefined4 *)((long)plVar40 - 0x8c) = uVar24;
    *(uint *)(plVar40 + -0x13) = uVar5;
    *(undefined4 *)((long)plVar40 - 0x94) = uVar15;
    plVar40[-0x11] = (long)(int)extraout_w8_00;
    if ((bool)uVar14) {
      pfVar12 = (float *)(*plVar21 + (long)((int)uVar20 / 2) * 4);
      pfVar45[-4] = (float)uVar15;
      plVar40[-0xf] = (ulong)uVar2;
      func_0x000108b49964(plVar17);
      lVar27 = plVar40[-0x10];
      lVar49 = lVar49 + plVar40[-0x11] * 4;
      plVar46 = (long *)plVar40[-0xf];
      pfVar45[-4] = (float)*(undefined4 *)((long)plVar40 - 0x94);
      plVar44 = plVar17;
      func_0x000108b49964(plVar17,lVar49,pfVar12,uVar28 + lVar27 * 4,(int)plVar40[-0x12],
                          *(undefined4 *)((long)plVar40 - 0x8c),(int)plVar40[-0x13]);
      iVar34 = (int)lVar49;
      pfVar38 = pfVar45;
      for (uVar22 = (ulong)((uint)plVar40[-0x11] & ((int)(uint)plVar40[-0x11] >> 0x1f ^ 0xffffffffU)
                           ); uVar22 != 0; uVar22 = uVar22 - 1) {
        *pfVar38 = *pfVar12 * 0.5 + *pfVar38 * 0.5;
        pfVar38 = pfVar38 + 1;
        pfVar12 = pfVar12 + 1;
      }
      pfVar38 = pfVar45;
      for (uVar22 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); pfVar12 = pfVar45, uVar22 != 0;
          uVar22 = uVar22 - 1) {
        iVar34 = (int)pfVar38;
        func_0x000108b49978(*plVar21);
        func_0x000108b498b4();
        pfVar38 = pfVar38 + 1;
      }
    }
    else {
      *(int *)((long)plVar40 - 0x9c) = (int)lVar27;
      lVar27 = 0;
      plVar40[-0x18] = (ulong)(uVar3 & (uVar1 ^ 0xffffffff));
      plVar40[-0x17] = (long)iVar18;
      plVar40[-0x16] = lVar49;
      plVar40[-0x15] = uVar28;
      do {
        func_0x000108b49984();
        FUN_108b3eaf8();
        pfVar45 = pfVar45 + 4;
        for (lVar50 = plVar40[-0x18]; lVar50 != 0; lVar50 = lVar50 + -1) {
          func_0x000108b49978(plVar21[lVar27]);
          func_0x000108b498b4();
        }
        lVar27 = lVar27 + 1;
        iVar34 = (int)plVar40[-0x16];
        uVar14 = lVar27 == plVar40[-0x17];
        plVar44 = (long *)(ulong)*(uint *)((long)plVar40 - 0x94);
        pfVar12 = pfVar45;
        plVar46 = plVar21;
      } while (lVar27 < plVar40[-0x17]);
    }
  }
  func_0x000108b498c8(plVar40[-0xd]);
  if ((bool)uVar14) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(pfVar12 + -0xc) = (ulong)uVar20;
  *(long **)(pfVar12 + -10) = plVar46;
  *(long **)(pfVar12 + -8) = plVar17;
  *(long **)(pfVar12 + -6) = plVar21;
  *(long **)(pfVar12 + -4) = plVar40 + -2;
  *(code **)(pfVar12 + -2) = FUN_108b49614;
  *(float **)(pfVar12 + -0xe) = pfVar12;
  switch(iVar34) {
  case 0x2717:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_06 != (undefined4 *)0x0) {
      *extraout_x8_06 = *(undefined4 *)((long)plVar44 + 0x34);
      *(undefined4 *)((long)plVar44 + 0x34) = 0;
    }
    break;
  case 0x2718:
    func_0x000108b498a4();
    if (0xfffffffd < *extraout_x8_11 - 3U) {
      *(int *)(plVar44 + 2) = *extraout_x8_11;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
    break;
  case 0x271a:
    func_0x000108b498a4();
    iVar34 = *extraout_x8_08;
    if ((-1 < iVar34) && (iVar34 < *(int *)(*plVar44 + 8))) {
      *(int *)(plVar44 + 3) = iVar34;
    }
    break;
  case 0x271c:
    func_0x000108b498a4();
    iVar34 = *extraout_x8_10;
    if ((0 < iVar34) && (iVar34 <= *(int *)(*plVar44 + 8))) {
      *(int *)((long)plVar44 + 0x1c) = iVar34;
    }
    break;
  case 0x271f:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_09 != (long *)0x0) {
      *extraout_x8_09 = *plVar44;
    }
    break;
  case 0x2720:
    func_0x000108b498a4(0);
    *(undefined4 *)(plVar44 + 4) = *extraout_x8_12;
    break;
  default:
    switch(iVar34) {
    case 0xfbb:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_05 == (int *)0x0) {
        return;
      }
      iVar34 = 0;
      piVar31 = extraout_x8_05;
      if (*(int *)((long)plVar44 + 0x14) != 0) {
        iVar34 = (int)plVar44[1] / *(int *)((long)plVar44 + 0x14);
      }
      break;
    case 0xfbc:
      lVar27 = *plVar44;
      iVar34 = *(int *)(lVar27 + 8) << 1;
      puVar29 = (undefined4 *)
                ((long)plVar44 +
                (long)iVar34 * 4 +
                (long)(((int)plVar44[1] + 0x800) * *(int *)((long)plVar44 + 0xc)) * 4 + 0x70);
      FUN_108b47328();
      _bzero(plVar44 + 6,(long)(int)lVar27 + -0x30);
      puVar10 = puVar29 + iVar34;
      for (uVar22 = (long)iVar34 & ((long)iVar34 >> 0x3f ^ 0xffffffffffffffffU); uVar22 != 0;
          uVar22 = uVar22 - 1) {
        *puVar10 = 0xc1e00000;
        *puVar29 = 0xc1e00000;
        puVar29 = puVar29 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined8 *)((long)plVar44 + 0x44) = 0x100000000;
      return;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
      goto LAB_108b49870;
    case 0xfbf:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_14 == (int *)0x0) {
        return;
      }
      iVar34 = (int)plVar44[6];
      piVar31 = extraout_x8_14;
      break;
    case 0xfc1:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_13 == (int *)0x0) {
        return;
      }
      iVar34 = *(int *)((long)plVar44 + 0x4c);
      piVar31 = extraout_x8_13;
      break;
    default:
      if (iVar34 == 0xfcf) {
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_16 == (int *)0x0) {
          return;
        }
        iVar34 = *(int *)((long)plVar44 + 0x24);
        piVar31 = extraout_x8_16;
      }
      else {
        if (iVar34 != 0xfab) {
          if (iVar34 == 0xfce) {
            func_0x000108b498a4();
            if (1 < *extraout_x8_17) {
              return;
            }
            *(uint *)((long)plVar44 + 0x24) = *extraout_x8_17;
            return;
          }
          if (iVar34 != 0xfaa) {
            return;
          }
          func_0x000108b498a4();
          if (10 < *extraout_x8_07) {
            return;
          }
          *(uint *)(plVar44 + 5) = *extraout_x8_07;
          return;
        }
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_15 == (int *)0x0) {
          return;
        }
        iVar34 = (int)plVar44[5];
        piVar31 = extraout_x8_15;
      }
    }
    *piVar31 = iVar34;
  }
LAB_108b49870:
  return;
}



/* Entry: 108b48fc8; end: 108b491c3;  */

void FUN_108b48fc8(long *param_1,float *param_2,uint param_3,ulong param_4,ulong param_5,
                  float *param_6,undefined8 *param_7,int param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  undefined4 *puVar10;
  float *pfVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  uint extraout_w8;
  undefined8 extraout_x8;
  ulong uVar25;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar26;
  long extraout_x8_03;
  int *extraout_x8_04;
  undefined4 *extraout_x8_05;
  uint *extraout_x8_06;
  int *extraout_x8_07;
  long *extraout_x8_08;
  int *extraout_x8_09;
  int *extraout_x8_10;
  undefined4 *extraout_x8_11;
  int *extraout_x8_12;
  int *extraout_x8_13;
  int *extraout_x8_14;
  int *extraout_x8_15;
  int *piVar27;
  uint *extraout_x8_16;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  uint extraout_w12;
  uint extraout_w12_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  int extraout_w13;
  ulong uVar32;
  uint extraout_w14;
  ulong uVar33;
  long lVar34;
  long extraout_x15;
  float *pfVar35;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar36;
  undefined8 unaff_x21;
  long *plVar37;
  long *plVar38;
  undefined8 unaff_x22;
  long lVar39;
  undefined8 unaff_x23;
  float *pfVar40;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float afStack_20 [2];
  undefined8 uStack_18;
  
  pfVar40 = afStack_20;
  func_0x000108b49954();
  uVar25 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  uStack_18 = extraout_x8;
  if (((int)param_4 == 2 && (int)param_5 == 1) && param_8 == 0) {
    pfVar11 = (float *)param_1[1];
    uVar42 = *param_7;
    fVar41 = *param_6;
    pfVar35 = (float *)*param_1;
    for (; uVar25 != 0; uVar25 = uVar25 - 1) {
      fVar44 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar43 = (float)uVar42 + *pfVar35 + 1e-30;
      fVar44 = (float)((ulong)uVar42 >> 0x20) + fVar44 + 1e-30;
      uVar42 = CONCAT44(fVar44 * fVar41,fVar43 * fVar41);
      *(ulong *)param_2 = CONCAT44(fVar44 * 3.0517578e-05,fVar43 * 3.0517578e-05);
      pfVar35 = pfVar35 + 1;
      param_2 = param_2 + 2;
    }
    *param_7 = uVar42;
    bVar12 = true;
  }
  else {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar40 = (float *)((long)afStack_20 - extraout_x12);
    lVar29 = 0;
    bVar9 = false;
    fVar41 = *param_6;
    uVar7 = 0;
    iVar20 = (int)param_5;
    if (iVar20 != 0) {
      uVar7 = (int)param_3 / iVar20;
    }
    uVar25 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
    uVar32 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
    uVar33 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
    do {
      fVar43 = *(float *)((long)param_7 + lVar29 * 4);
      pfVar35 = (float *)param_1[lVar29];
      pfVar11 = pfVar40;
      lVar34 = extraout_x8_00;
      if (iVar20 < 2) {
        pfVar11 = param_2;
        if (param_8 == 0) {
          for (; lVar34 != 0; lVar34 = lVar34 + -1) {
            fVar44 = fVar43 + *pfVar35 + 1e-30;
            fVar43 = fVar41 * fVar44;
            *pfVar11 = fVar44 * 3.0517578e-05;
            pfVar11 = (float *)((long)pfVar11 + uVar32);
            pfVar35 = pfVar35 + 1;
          }
        }
        else {
          for (; lVar34 != 0; lVar34 = lVar34 + -1) {
            fVar44 = fVar43 + *pfVar35 + 1e-30;
            fVar43 = fVar41 * fVar44;
            *pfVar11 = *pfVar11 + fVar44 * 3.0517578e-05;
            pfVar11 = (float *)((long)pfVar11 + uVar32);
            pfVar35 = pfVar35 + 1;
          }
        }
        *(float *)((long)param_7 + lVar29 * 4) = fVar43;
        if (bVar9) goto LAB_108b490e8;
      }
      else {
        for (; lVar34 != 0; lVar34 = lVar34 + -1) {
          fVar44 = fVar43 + *pfVar35 + 1e-30;
          fVar43 = fVar41 * fVar44;
          *pfVar11 = fVar44;
          pfVar11 = pfVar11 + 1;
          pfVar35 = pfVar35 + 1;
        }
        *(float *)((long)param_7 + lVar29 * 4) = fVar43;
LAB_108b490e8:
        uVar30 = uVar25;
        pfVar35 = param_2;
        pfVar11 = pfVar40;
        if (param_8 == 0) {
          for (; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pfVar35 = *pfVar11 * 3.0517578e-05;
            pfVar11 = (float *)((long)pfVar11 + uVar33);
            pfVar35 = (float *)((long)pfVar35 + uVar32);
          }
        }
        else {
          for (; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pfVar35 = *pfVar35 + *pfVar11 * 3.0517578e-05;
            pfVar11 = (float *)((long)pfVar11 + uVar33);
            pfVar35 = (float *)((long)pfVar35 + uVar32);
          }
        }
        bVar9 = true;
      }
      lVar29 = lVar29 + 1;
      param_2 = param_2 + 1;
      bVar12 = lVar29 == (int)param_4;
    } while (lVar29 < (int)param_4);
  }
  iVar20 = (int)param_2;
  func_0x000108b498c8(uStack_18);
  if (bVar12) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pfVar40 + -0x18) = unaff_x28;
  *(undefined8 *)(pfVar40 + -0x16) = unaff_x27;
  *(undefined8 *)(pfVar40 + -0x14) = unaff_x26;
  *(undefined8 *)(pfVar40 + -0x12) = unaff_x25;
  *(undefined8 *)(pfVar40 + -0x10) = unaff_x24;
  *(undefined8 *)(pfVar40 + -0xe) = unaff_x23;
  *(undefined8 *)(pfVar40 + -0xc) = unaff_x22;
  *(undefined8 *)(pfVar40 + -10) = unaff_x21;
  *(undefined8 *)(pfVar40 + -8) = unaff_x20;
  *(undefined8 *)(pfVar40 + -6) = unaff_x19;
  *(undefined1 **)(pfVar40 + -4) = &stack0xfffffffffffffff0;
  *(code **)(pfVar40 + -2) = FUN_108b491c4;
  plVar15 = param_1;
  func_0x000108b49954();
  *(undefined8 *)(pfVar40 + -0x1a) = extraout_x8_01;
  lVar39 = *plVar15;
  lVar34 = (long)*(int *)((long)plVar15 + 0xc);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)plVar15[1] << 2);
  plVar37 = (long *)((long)pfVar40 + (-0x80 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0)));
  lVar29 = 0;
  plVar15 = plVar15 + 0xe;
  *(undefined8 *)(pfVar40 + -0x20) = extraout_x12_00;
  uVar7 = (int)extraout_x12_00 + 0x800;
  do {
    *(long **)(pfVar40 + lVar29 * 2 + -0x1e) = plVar15;
    lVar29 = lVar29 + 1;
    plVar15 = (long *)((long)plVar15 +
                      (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
  } while (lVar29 < lVar34);
  lVar29 = 0;
  uVar7 = (int)*(undefined8 *)(pfVar40 + -0x20) / 2;
  uVar25 = (ulong)((int)*(undefined8 *)(pfVar40 + -0x20) - 1);
  lVar8 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) << 2;
  do {
    lVar36 = *(long *)(pfVar40 + lVar29 * 2 + -0x1e);
    uVar32 = (ulong)*(uint *)((long)param_1 + 0x4c);
    plVar15 = (long *)(ulong)*(uint *)(param_1 + 10);
    fVar43 = *(float *)((long)param_1 + 0x54);
    fVar41 = *(float *)(param_1 + 0xb);
    iVar23 = *(int *)((long)param_1 + 0x5c);
    uVar22 = (undefined4)param_1[0xc];
    uVar21 = *(undefined4 *)((long)param_1 + 0x2c);
    *(undefined4 *)(plVar37 + -2) = 0;
    *(undefined4 *)((long)plVar37 - 0xc) = uVar21;
    lVar18 = lVar36 + (long)iVar20 * -4 + 0x2000;
    uVar21 = (undefined4)*(undefined8 *)(pfVar40 + -0x20);
    iVar24 = 0;
    plVar16 = plVar37;
    FUN_108b416a4(-fVar41,-fVar43);
    uVar33 = uVar25;
    uVar30 = (ulong)(0x800 - iVar20);
    for (lVar26 = 0; lVar8 != lVar26; lVar26 = lVar26 + 4) {
      lVar31 = *(long *)(lVar39 + 0x48);
      iVar28 = (int)uVar33;
      *(float *)(lVar36 + (long)(int)uVar30 * 4) =
           *(float *)(lVar31 + (long)iVar28 * 4) * *(float *)((long)plVar37 + lVar26) +
           *(float *)((long)plVar37 + (long)iVar28 * 4) * *(float *)(lVar31 + lVar26);
      uVar30 = (ulong)((int)uVar30 + 1);
      uVar33 = (ulong)(iVar28 - 1);
    }
    lVar29 = lVar29 + 1;
    bVar12 = lVar29 == lVar34;
  } while (lVar29 < lVar34);
  func_0x000108b498c8(*(undefined8 *)(pfVar40 + -0x1a));
  if (bVar12) {
    return;
  }
  ___stack_chk_fail();
  plVar37[-0xc] = lVar8;
  plVar37[-0xb] = uVar25;
  plVar37[-10] = (ulong)(0x800 - iVar20);
  plVar37[-9] = -(long)iVar20;
  plVar37[-8] = lVar29;
  plVar37[-7] = lVar34;
  plVar37[-6] = lVar39;
  plVar37[-5] = (long)plVar37;
  plVar37[-4] = lVar36;
  plVar37[-3] = (long)param_1;
  plVar37[-2] = (long)(pfVar40 + -4);
  plVar37[-1] = 0x108b49320;
  uVar14 = *(undefined4 *)((long)plVar37 + 0xc);
  *(int *)((long)plVar37 - 0x6c) = (int)plVar37[2];
  lVar29 = plVar37[1];
  func_0x000108b49954();
  plVar37[-0xd] = extraout_x8_03;
  uVar4 = *(uint *)((long)plVar16 + 4);
  plVar37[-0x10] = (long)(int)plVar16[1];
  uVar5 = (int)plVar16[6] << (ulong)(extraout_w12 & 0x1f);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar40 = (float *)((long)plVar37 + (-0xc0 - extraout_x15));
  uVar6 = 1 << (ulong)(extraout_w12_00 & 0x1f);
  uVar7 = extraout_w8;
  if (extraout_w13 != 0) {
    uVar7 = extraout_w14;
  }
  uVar3 = uVar6;
  if (extraout_w13 == 0) {
    uVar3 = 1;
  }
  uVar13 = iVar23 == 1 && iVar24 == 2;
  plVar37[-0xf] = (long)pfVar40;
  uVar1 = (int)uVar3 >> 0x1f;
  if ((bool)uVar13) {
    func_0x000108b49984();
    func_0x000108b49964();
    pfVar11 = pfVar40 + 4;
    plVar38 = (long *)(plVar15[1] + (long)((int)uVar4 / 2) * 4);
    plVar17 = plVar38;
    _memcpy(plVar38,pfVar40,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
    iVar20 = (int)pfVar40;
    plVar37[-0x10] = (long)(int)uVar7;
    uVar32 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff));
    for (uVar25 = uVar32; uVar25 != 0; uVar25 = uVar25 - 1) {
      iVar20 = (int)plVar38;
      func_0x000108b49978(*plVar15);
      func_0x000108b498b4();
      plVar38 = (long *)((long)plVar38 + 4);
    }
    plVar38 = (long *)plVar37[-0xf];
    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
      func_0x000108b49978(plVar15[1]);
      plVar19 = plVar38;
      func_0x000108b498b4();
      iVar20 = (int)plVar19;
      plVar38 = (long *)((long)plVar38 + 4);
    }
  }
  else {
    uVar13 = iVar23 == 2 && iVar24 == 1;
    *(undefined4 *)(plVar37 + -0x12) = uVar21;
    *(undefined4 *)((long)plVar37 - 0x8c) = uVar22;
    *(uint *)(plVar37 + -0x13) = uVar6;
    *(undefined4 *)((long)plVar37 - 0x94) = uVar14;
    plVar37[-0x11] = (long)(int)extraout_w8;
    if ((bool)uVar13) {
      pfVar11 = (float *)(*plVar15 + (long)((int)uVar4 / 2) * 4);
      pfVar40[-4] = (float)uVar14;
      plVar37[-0xf] = (ulong)uVar7;
      func_0x000108b49964(plVar16);
      lVar29 = plVar37[-0x10];
      lVar18 = lVar18 + plVar37[-0x11] * 4;
      plVar38 = (long *)plVar37[-0xf];
      pfVar40[-4] = (float)*(undefined4 *)((long)plVar37 - 0x94);
      plVar17 = plVar16;
      func_0x000108b49964(plVar16,lVar18,pfVar11,uVar32 + lVar29 * 4,(int)plVar37[-0x12],
                          *(undefined4 *)((long)plVar37 - 0x8c),(int)plVar37[-0x13]);
      iVar20 = (int)lVar18;
      pfVar35 = pfVar40;
      for (uVar25 = (ulong)((uint)plVar37[-0x11] & ((int)(uint)plVar37[-0x11] >> 0x1f ^ 0xffffffffU)
                           ); uVar25 != 0; uVar25 = uVar25 - 1) {
        *pfVar35 = *pfVar11 * 0.5 + *pfVar35 * 0.5;
        pfVar35 = pfVar35 + 1;
        pfVar11 = pfVar11 + 1;
      }
      pfVar35 = pfVar40;
      for (uVar25 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); pfVar11 = pfVar40, uVar25 != 0;
          uVar25 = uVar25 - 1) {
        iVar20 = (int)pfVar35;
        func_0x000108b49978(*plVar15);
        func_0x000108b498b4();
        pfVar35 = pfVar35 + 1;
      }
    }
    else {
      *(int *)((long)plVar37 - 0x9c) = (int)lVar29;
      lVar29 = 0;
      plVar37[-0x18] = (ulong)(uVar3 & (uVar1 ^ 0xffffffff));
      plVar37[-0x17] = (long)iVar24;
      plVar37[-0x16] = lVar18;
      plVar37[-0x15] = uVar32;
      do {
        func_0x000108b49984();
        FUN_108b3eaf8();
        pfVar40 = pfVar40 + 4;
        for (lVar34 = plVar37[-0x18]; lVar34 != 0; lVar34 = lVar34 + -1) {
          func_0x000108b49978(plVar15[lVar29]);
          func_0x000108b498b4();
        }
        lVar29 = lVar29 + 1;
        iVar20 = (int)plVar37[-0x16];
        uVar13 = lVar29 == plVar37[-0x17];
        plVar17 = (long *)(ulong)*(uint *)((long)plVar37 - 0x94);
        pfVar11 = pfVar40;
        plVar38 = plVar15;
      } while (lVar29 < plVar37[-0x17]);
    }
  }
  func_0x000108b498c8(plVar37[-0xd]);
  if ((bool)uVar13) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(pfVar11 + -0xc) = (ulong)uVar4;
  *(long **)(pfVar11 + -10) = plVar38;
  *(long **)(pfVar11 + -8) = plVar16;
  *(long **)(pfVar11 + -6) = plVar15;
  *(long **)(pfVar11 + -4) = plVar37 + -2;
  *(code **)(pfVar11 + -2) = FUN_108b49614;
  *(float **)(pfVar11 + -0xe) = pfVar11;
  switch(iVar20) {
  case 0x2717:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_05 != (undefined4 *)0x0) {
      *extraout_x8_05 = *(undefined4 *)((long)plVar17 + 0x34);
      *(undefined4 *)((long)plVar17 + 0x34) = 0;
    }
    break;
  case 0x2718:
    func_0x000108b498a4();
    if (0xfffffffd < *extraout_x8_10 - 3U) {
      *(int *)(plVar17 + 2) = *extraout_x8_10;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
    break;
  case 0x271a:
    func_0x000108b498a4();
    iVar20 = *extraout_x8_07;
    if ((-1 < iVar20) && (iVar20 < *(int *)(*plVar17 + 8))) {
      *(int *)(plVar17 + 3) = iVar20;
    }
    break;
  case 0x271c:
    func_0x000108b498a4();
    iVar20 = *extraout_x8_09;
    if ((0 < iVar20) && (iVar20 <= *(int *)(*plVar17 + 8))) {
      *(int *)((long)plVar17 + 0x1c) = iVar20;
    }
    break;
  case 0x271f:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_08 != (long *)0x0) {
      *extraout_x8_08 = *plVar17;
    }
    break;
  case 0x2720:
    func_0x000108b498a4(0);
    *(undefined4 *)(plVar17 + 4) = *extraout_x8_11;
    break;
  default:
    switch(iVar20) {
    case 0xfbb:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_04 == (int *)0x0) {
        return;
      }
      iVar20 = 0;
      piVar27 = extraout_x8_04;
      if (*(int *)((long)plVar17 + 0x14) != 0) {
        iVar20 = (int)plVar17[1] / *(int *)((long)plVar17 + 0x14);
      }
      break;
    case 0xfbc:
      lVar29 = *plVar17;
      iVar20 = *(int *)(lVar29 + 8) << 1;
      puVar2 = (undefined4 *)
               ((long)plVar17 +
               (long)iVar20 * 4 +
               (long)(((int)plVar17[1] + 0x800) * *(int *)((long)plVar17 + 0xc)) * 4 + 0x70);
      FUN_108b47328();
      _bzero(plVar17 + 6,(long)(int)lVar29 + -0x30);
      puVar10 = puVar2 + iVar20;
      for (uVar25 = (long)iVar20 & ((long)iVar20 >> 0x3f ^ 0xffffffffffffffffU); uVar25 != 0;
          uVar25 = uVar25 - 1) {
        *puVar10 = 0xc1e00000;
        *puVar2 = 0xc1e00000;
        puVar2 = puVar2 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined8 *)((long)plVar17 + 0x44) = 0x100000000;
      return;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
      goto LAB_108b49870;
    case 0xfbf:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_13 == (int *)0x0) {
        return;
      }
      iVar20 = (int)plVar17[6];
      piVar27 = extraout_x8_13;
      break;
    case 0xfc1:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_12 == (int *)0x0) {
        return;
      }
      iVar20 = *(int *)((long)plVar17 + 0x4c);
      piVar27 = extraout_x8_12;
      break;
    default:
      if (iVar20 == 0xfcf) {
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_15 == (int *)0x0) {
          return;
        }
        iVar20 = *(int *)((long)plVar17 + 0x24);
        piVar27 = extraout_x8_15;
      }
      else {
        if (iVar20 != 0xfab) {
          if (iVar20 == 0xfce) {
            func_0x000108b498a4();
            if (1 < *extraout_x8_16) {
              return;
            }
            *(uint *)((long)plVar17 + 0x24) = *extraout_x8_16;
            return;
          }
          if (iVar20 != 0xfaa) {
            return;
          }
          func_0x000108b498a4();
          if (10 < *extraout_x8_06) {
            return;
          }
          *(uint *)(plVar17 + 5) = *extraout_x8_06;
          return;
        }
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_14 == (int *)0x0) {
          return;
        }
        iVar20 = (int)plVar17[5];
        piVar27 = extraout_x8_14;
      }
    }
    *piVar27 = iVar20;
  }
LAB_108b49870:
  return;
}



/* Entry: 108b491c4; end: 108b49613;  */

void FUN_108b491c4(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  bool bVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  uint extraout_w8;
  uint uVar26;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar27;
  long lVar28;
  undefined8 extraout_x8_01;
  int *extraout_x8_02;
  undefined4 *extraout_x8_03;
  uint *extraout_x8_04;
  int *extraout_x8_05;
  long *extraout_x8_06;
  int *extraout_x8_07;
  int *extraout_x8_08;
  undefined4 *extraout_x8_09;
  int *extraout_x8_10;
  int *extraout_x8_11;
  int *extraout_x8_12;
  int *extraout_x8_13;
  int *piVar30;
  uint *extraout_x8_14;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  uint extraout_w12;
  uint extraout_w12_00;
  long extraout_x12;
  int extraout_w13;
  uint extraout_w14;
  long extraout_x15;
  long lVar36;
  long lVar37;
  long *plVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float afStack_150 [4];
  float afStack_140 [2];
  long lStack_138;
  float afStack_130 [2];
  ulong uStack_128;
  uint auStack_11c [5];
  long alStack_108 [3];
  undefined4 uStack_ec;
  long alStack_e8 [11];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  ulong uVar29;
  
  plVar17 = param_1;
  func_0x000108b49954();
  lVar39 = *plVar17;
  lVar36 = (long)*(int *)((long)plVar17 + 0xc);
  alStack_70[1] = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)plVar17[1] << 2);
  lVar9 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  plVar38 = (long *)((long)&lStack_80 + lVar9);
  lVar27 = 0;
  plVar17 = plVar17 + 0xe;
  lStack_80 = extraout_x12;
  iVar35 = (int)extraout_x12;
  do {
    alStack_70[lVar27 + -1] = (long)plVar17;
    lVar27 = lVar27 + 1;
    plVar17 = (long *)((long)plVar17 +
                      (-(ulong)(iVar35 + 0x800U >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(iVar35 + 0x800U) << 2));
  } while (lVar27 < lVar36);
  lVar27 = 0;
  lVar8 = (ulong)(iVar35 / 2 & (iVar35 / 2 >> 0x1f ^ 0xffffffffU)) << 2;
  do {
    lVar37 = alStack_70[lVar27 + -1];
    uVar29 = (ulong)*(uint *)((long)param_1 + 0x4c);
    plVar17 = (long *)(ulong)*(uint *)(param_1 + 10);
    fVar41 = *(float *)((long)param_1 + 0x54);
    fVar40 = *(float *)(param_1 + 0xb);
    iVar24 = *(int *)((long)param_1 + 0x5c);
    uVar23 = (undefined4)param_1[0xc];
    uVar22 = *(undefined4 *)((long)param_1 + 0x2c);
    *(undefined4 *)((long)&uStack_90 + lVar9) = 0;
    *(undefined4 *)((long)&uStack_90 + lVar9 + 4) = uVar22;
    lVar20 = lVar37 + (long)param_2 * -4 + 0x2000;
    iVar25 = 0;
    plVar18 = plVar38;
    lVar28 = lStack_80;
    FUN_108b416a4(-fVar40,-fVar41);
    uVar22 = (undefined4)lVar28;
    uVar32 = (ulong)(iVar35 - 1);
    uVar33 = (ulong)(0x800 - param_2);
    for (lVar28 = 0; lVar8 != lVar28; lVar28 = lVar28 + 4) {
      lVar34 = *(long *)(lVar39 + 0x48);
      iVar31 = (int)uVar32;
      *(float *)(lVar37 + (long)(int)uVar33 * 4) =
           *(float *)(lVar34 + (long)iVar31 * 4) * *(float *)((long)plVar38 + lVar28) +
           *(float *)((long)plVar38 + (long)iVar31 * 4) * *(float *)(lVar34 + lVar28);
      uVar33 = (ulong)((int)uVar33 + 1);
      uVar32 = (ulong)(iVar31 - 1);
    }
    lVar27 = lVar27 + 1;
    bVar14 = lVar27 == lVar36;
  } while (lVar27 < lVar36);
  func_0x000108b498c8(alStack_70[1]);
  if (bVar14) {
    return;
  }
  ___stack_chk_fail();
  *(long *)((long)alStack_e8 + lVar9 + 8) = lVar8;
  *(ulong *)((long)alStack_e8 + lVar9 + 0x10) = (ulong)(iVar35 - 1);
  *(ulong *)((long)alStack_e8 + lVar9 + 0x18) = (ulong)(0x800 - param_2);
  *(long *)((long)alStack_e8 + lVar9 + 0x20) = -(long)param_2;
  *(long *)((long)alStack_e8 + lVar9 + 0x28) = lVar27;
  *(long *)((long)alStack_e8 + lVar9 + 0x30) = lVar36;
  *(long *)((long)alStack_e8 + lVar9 + 0x38) = lVar39;
  *(long **)((long)alStack_e8 + lVar9 + 0x40) = plVar38;
  *(long *)((long)alStack_e8 + lVar9 + 0x48) = lVar37;
  *(long **)((long)alStack_e8 + lVar9 + 0x50) = param_1;
  *(undefined1 **)((long)&uStack_90 + lVar9) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)&uStack_88 + lVar9) = 0x108b49320;
  uVar16 = *(undefined4 *)((long)alStack_70 + lVar9 + -4);
  *(undefined4 *)((long)&uStack_ec + lVar9) = *(undefined4 *)((long)alStack_70 + lVar9);
  uVar5 = *(undefined4 *)((long)alStack_70 + lVar9 + -8);
  func_0x000108b49954();
  *(undefined8 *)((long)alStack_e8 + lVar9) = extraout_x8_01;
  uVar4 = *(uint *)((long)plVar18 + 4);
  *(long *)((long)alStack_108 + lVar9 + 8) = (long)(int)plVar18[1];
  uVar6 = (int)plVar18[6] << (ulong)(extraout_w12 & 0x1f);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar12 = (float *)((long)afStack_140 + (lVar9 - extraout_x15));
  uVar7 = 1 << (ulong)(extraout_w12_00 & 0x1f);
  uVar26 = extraout_w8;
  if (extraout_w13 != 0) {
    uVar26 = extraout_w14;
  }
  uVar3 = uVar7;
  if (extraout_w13 == 0) {
    uVar3 = 1;
  }
  uVar15 = iVar24 == 1 && iVar25 == 2;
  *(float **)((long)alStack_108 + lVar9 + 0x10) = pfVar12;
  uVar1 = (int)uVar3 >> 0x1f;
  if ((bool)uVar15) {
    func_0x000108b49984();
    func_0x000108b49964();
    pfVar13 = pfVar12 + 4;
    plVar38 = (long *)(plVar17[1] + (long)((int)uVar4 / 2) * 4);
    plVar19 = plVar38;
    _memcpy(plVar38,pfVar12,-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
    iVar35 = (int)pfVar12;
    *(long *)((long)alStack_108 + lVar9 + 8) = (long)(int)uVar26;
    uVar32 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff));
    for (uVar29 = uVar32; uVar29 != 0; uVar29 = uVar29 - 1) {
      iVar35 = (int)plVar38;
      func_0x000108b49978(*plVar17);
      func_0x000108b498b4();
      plVar38 = (long *)((long)plVar38 + 4);
    }
    plVar38 = *(long **)((long)alStack_108 + lVar9 + 0x10);
    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
      func_0x000108b49978(plVar17[1]);
      plVar21 = plVar38;
      func_0x000108b498b4();
      iVar35 = (int)plVar21;
      plVar38 = (long *)((long)plVar38 + 4);
    }
  }
  else {
    uVar15 = iVar24 == 2 && iVar25 == 1;
    *(undefined4 *)((long)auStack_11c + lVar9 + 0xc) = uVar22;
    *(undefined4 *)((long)auStack_11c + lVar9 + 0x10) = uVar23;
    *(uint *)((long)auStack_11c + lVar9 + 4) = uVar7;
    *(undefined4 *)((long)auStack_11c + lVar9 + 8) = uVar16;
    *(long *)((long)alStack_108 + lVar9) = (long)(int)extraout_w8;
    if ((bool)uVar15) {
      pfVar13 = (float *)(*plVar17 + (long)((int)uVar4 / 2) * 4);
      pfVar12[-4] = (float)uVar16;
      *(ulong *)((long)alStack_108 + lVar9 + 0x10) = (ulong)uVar26;
      func_0x000108b49964(plVar18);
      lVar27 = *(long *)((long)alStack_108 + lVar9 + 8);
      lVar20 = lVar20 + *(long *)((long)alStack_108 + lVar9) * 4;
      plVar38 = *(long **)((long)alStack_108 + lVar9 + 0x10);
      pfVar12[-4] = (float)*(undefined4 *)((long)auStack_11c + lVar9 + 8);
      plVar19 = plVar18;
      func_0x000108b49964(plVar18,lVar20,pfVar13,uVar29 + lVar27 * 4,
                          *(undefined4 *)((long)auStack_11c + lVar9 + 0xc),
                          *(undefined4 *)((long)auStack_11c + lVar9 + 0x10),
                          *(undefined4 *)((long)auStack_11c + lVar9 + 4));
      iVar35 = (int)lVar20;
      uVar26 = (uint)*(undefined8 *)((long)alStack_108 + lVar9);
      pfVar10 = pfVar12;
      for (uVar29 = (ulong)(uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU)); uVar29 != 0;
          uVar29 = uVar29 - 1) {
        *pfVar10 = *pfVar13 * 0.5 + *pfVar10 * 0.5;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 1;
      }
      pfVar10 = pfVar12;
      for (uVar29 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); pfVar13 = pfVar12, uVar29 != 0;
          uVar29 = uVar29 - 1) {
        iVar35 = (int)pfVar10;
        func_0x000108b49978(*plVar17);
        func_0x000108b498b4();
        pfVar10 = pfVar10 + 1;
      }
    }
    else {
      *(undefined4 *)((long)auStack_11c + lVar9) = uVar5;
      lVar27 = 0;
      *(ulong *)((long)afStack_140 + lVar9) = (ulong)(uVar3 & (uVar1 ^ 0xffffffff));
      *(long *)((long)&lStack_138 + lVar9) = (long)iVar25;
      *(long *)((long)afStack_130 + lVar9) = lVar20;
      *(ulong *)((long)&uStack_128 + lVar9) = uVar29;
      do {
        func_0x000108b49984();
        FUN_108b3eaf8();
        pfVar12 = pfVar12 + 4;
        for (lVar36 = *(long *)((long)afStack_140 + lVar9); lVar36 != 0; lVar36 = lVar36 + -1) {
          func_0x000108b49978(plVar17[lVar27]);
          func_0x000108b498b4();
        }
        lVar27 = lVar27 + 1;
        iVar35 = (int)*(undefined8 *)((long)afStack_130 + lVar9);
        uVar15 = lVar27 == *(long *)((long)&lStack_138 + lVar9);
        plVar19 = (long *)(ulong)*(uint *)((long)auStack_11c + lVar9 + 8);
        pfVar13 = pfVar12;
        plVar38 = plVar17;
      } while (lVar27 < *(long *)((long)&lStack_138 + lVar9));
    }
  }
  func_0x000108b498c8(*(undefined8 *)((long)alStack_e8 + lVar9));
  if ((bool)uVar15) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(pfVar13 + -0xc) = (ulong)uVar4;
  *(long **)(pfVar13 + -10) = plVar38;
  *(long **)(pfVar13 + -8) = plVar18;
  *(long **)(pfVar13 + -6) = plVar17;
  *(long *)(pfVar13 + -4) = (long)&uStack_90 + lVar9;
  *(code **)(pfVar13 + -2) = FUN_108b49614;
  *(float **)(pfVar13 + -0xe) = pfVar13;
  switch(iVar35) {
  case 0x2717:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_03 != (undefined4 *)0x0) {
      *extraout_x8_03 = *(undefined4 *)((long)plVar19 + 0x34);
      *(undefined4 *)((long)plVar19 + 0x34) = 0;
    }
    break;
  case 0x2718:
    func_0x000108b498a4();
    if (0xfffffffd < *extraout_x8_08 - 3U) {
      *(int *)(plVar19 + 2) = *extraout_x8_08;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
    break;
  case 0x271a:
    func_0x000108b498a4();
    iVar35 = *extraout_x8_05;
    if ((-1 < iVar35) && (iVar35 < *(int *)(*plVar19 + 8))) {
      *(int *)(plVar19 + 3) = iVar35;
    }
    break;
  case 0x271c:
    func_0x000108b498a4();
    iVar35 = *extraout_x8_07;
    if ((0 < iVar35) && (iVar35 <= *(int *)(*plVar19 + 8))) {
      *(int *)((long)plVar19 + 0x1c) = iVar35;
    }
    break;
  case 0x271f:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_06 != (long *)0x0) {
      *extraout_x8_06 = *plVar19;
    }
    break;
  case 0x2720:
    func_0x000108b498a4(0);
    *(undefined4 *)(plVar19 + 4) = *extraout_x8_09;
    break;
  default:
    switch(iVar35) {
    case 0xfbb:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_02 == (int *)0x0) {
        return;
      }
      iVar35 = 0;
      piVar30 = extraout_x8_02;
      if (*(int *)((long)plVar19 + 0x14) != 0) {
        iVar35 = (int)plVar19[1] / *(int *)((long)plVar19 + 0x14);
      }
      break;
    case 0xfbc:
      lVar27 = *plVar19;
      iVar35 = *(int *)(lVar27 + 8) << 1;
      puVar2 = (undefined4 *)
               ((long)plVar19 +
               (long)iVar35 * 4 +
               (long)(((int)plVar19[1] + 0x800) * *(int *)((long)plVar19 + 0xc)) * 4 + 0x70);
      FUN_108b47328();
      _bzero(plVar19 + 6,(long)(int)lVar27 + -0x30);
      puVar11 = puVar2 + iVar35;
      for (uVar29 = (long)iVar35 & ((long)iVar35 >> 0x3f ^ 0xffffffffffffffffU); uVar29 != 0;
          uVar29 = uVar29 - 1) {
        *puVar11 = 0xc1e00000;
        *puVar2 = 0xc1e00000;
        puVar2 = puVar2 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined8 *)((long)plVar19 + 0x44) = 0x100000000;
      return;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
      goto LAB_108b49870;
    case 0xfbf:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_11 == (int *)0x0) {
        return;
      }
      iVar35 = (int)plVar19[6];
      piVar30 = extraout_x8_11;
      break;
    case 0xfc1:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_10 == (int *)0x0) {
        return;
      }
      iVar35 = *(int *)((long)plVar19 + 0x4c);
      piVar30 = extraout_x8_10;
      break;
    default:
      if (iVar35 == 0xfcf) {
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_13 == (int *)0x0) {
          return;
        }
        iVar35 = *(int *)((long)plVar19 + 0x24);
        piVar30 = extraout_x8_13;
      }
      else {
        if (iVar35 != 0xfab) {
          if (iVar35 == 0xfce) {
            func_0x000108b498a4();
            if (1 < *extraout_x8_14) {
              return;
            }
            *(uint *)((long)plVar19 + 0x24) = *extraout_x8_14;
            return;
          }
          if (iVar35 != 0xfaa) {
            return;
          }
          func_0x000108b498a4();
          if (10 < *extraout_x8_04) {
            return;
          }
          *(uint *)(plVar19 + 5) = *extraout_x8_04;
          return;
        }
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_12 == (int *)0x0) {
          return;
        }
        iVar35 = (int)plVar19[5];
        piVar30 = extraout_x8_12;
      }
    }
    *piVar30 = iVar35;
  }
LAB_108b49870:
  return;
}



/* Entry: 108b49614; end: 108b4988f;  */

void FUN_108b49614(long *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int *extraout_x8;
  undefined4 *extraout_x8_00;
  uint *extraout_x8_01;
  int *extraout_x8_02;
  long *extraout_x8_03;
  int *extraout_x8_04;
  int *extraout_x8_05;
  undefined4 *extraout_x8_06;
  int *extraout_x8_07;
  int *extraout_x8_08;
  ulong uVar4;
  int *extraout_x8_09;
  int *extraout_x8_10;
  int *piVar5;
  uint *extraout_x8_11;
  int iVar6;
  
  switch(param_2) {
  case 0x2717:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_00 != (undefined4 *)0x0) {
      *extraout_x8_00 = *(undefined4 *)((long)param_1 + 0x34);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    break;
  case 0x2718:
    func_0x000108b498a4();
    if (0xfffffffd < *extraout_x8_05 - 3U) {
      *(int *)(param_1 + 2) = *extraout_x8_05;
    }
    break;
  case 0x2719:
  case 0x271b:
  case 0x271d:
  case 0x271e:
    break;
  case 0x271a:
    func_0x000108b498a4();
    iVar6 = *extraout_x8_02;
    if ((-1 < iVar6) && (iVar6 < *(int *)(*param_1 + 8))) {
      *(int *)(param_1 + 3) = iVar6;
    }
    break;
  case 0x271c:
    func_0x000108b498a4();
    iVar6 = *extraout_x8_04;
    if ((0 < iVar6) && (iVar6 <= *(int *)(*param_1 + 8))) {
      *(int *)((long)param_1 + 0x1c) = iVar6;
    }
    break;
  case 0x271f:
    func_0x000108b49890(0xfffffffb);
    if (extraout_x8_03 != (long *)0x0) {
      *extraout_x8_03 = *param_1;
    }
    break;
  case 0x2720:
    func_0x000108b498a4(0);
    *(undefined4 *)(param_1 + 4) = *extraout_x8_06;
    break;
  default:
    switch(param_2) {
    case 0xfbb:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8 == (int *)0x0) {
        return;
      }
      iVar6 = 0;
      piVar5 = extraout_x8;
      if (*(int *)((long)param_1 + 0x14) != 0) {
        iVar6 = (int)param_1[1] / *(int *)((long)param_1 + 0x14);
      }
      break;
    case 0xfbc:
      lVar3 = *param_1;
      iVar6 = *(int *)(lVar3 + 8) << 1;
      puVar1 = (undefined4 *)
               ((long)param_1 +
               (long)iVar6 * 4 +
               (long)(((int)param_1[1] + 0x800) * *(int *)((long)param_1 + 0xc)) * 4 + 0x70);
      FUN_108b47328();
      _bzero(param_1 + 6,(long)(int)lVar3 + -0x30);
      puVar2 = puVar1 + iVar6;
      for (uVar4 = (long)iVar6 & ((long)iVar6 >> 0x3f ^ 0xffffffffffffffffU); uVar4 != 0;
          uVar4 = uVar4 - 1) {
        *puVar2 = 0xc1e00000;
        *puVar1 = 0xc1e00000;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      *(undefined8 *)((long)param_1 + 0x44) = 0x100000000;
      return;
    case 0xfbd:
    case 0xfbe:
    case 0xfc0:
      goto LAB_108b49870;
    case 0xfbf:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_08 == (int *)0x0) {
        return;
      }
      iVar6 = (int)param_1[6];
      piVar5 = extraout_x8_08;
      break;
    case 0xfc1:
      func_0x000108b49890(0xfffffffb);
      if (extraout_x8_07 == (int *)0x0) {
        return;
      }
      iVar6 = *(int *)((long)param_1 + 0x4c);
      piVar5 = extraout_x8_07;
      break;
    default:
      if (param_2 == 0xfcf) {
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_10 == (int *)0x0) {
          return;
        }
        iVar6 = *(int *)((long)param_1 + 0x24);
        piVar5 = extraout_x8_10;
      }
      else {
        if (param_2 != 0xfab) {
          if (param_2 == 0xfce) {
            func_0x000108b498a4();
            if (1 < *extraout_x8_11) {
              return;
            }
            *(uint *)((long)param_1 + 0x24) = *extraout_x8_11;
            return;
          }
          if (param_2 != 0xfaa) {
            return;
          }
          func_0x000108b498a4();
          if (10 < *extraout_x8_01) {
            return;
          }
          *(uint *)(param_1 + 5) = *extraout_x8_01;
          return;
        }
        func_0x000108b49890(0xfffffffb);
        if (extraout_x8_09 == (int *)0x0) {
          return;
        }
        iVar6 = (int)param_1[5];
        piVar5 = extraout_x8_09;
      }
    }
    *piVar5 = iVar6;
  }
LAB_108b49870:
  return;
}



/* Entry: 108b49890; end: 108b49997;  */

void FUN_108b49890(void)

{
  return;
}



/* Entry: 108b49998; end: 108b49a7b;  */

/* WARNING: Possible PIC construction at 0x000108b4a154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b4a158) */

long * FUN_108b49998(int *param_1,ulong param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong extraout_x8;
  ulong extraout_x8_00;
  short extraout_w9;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong extraout_x11;
  ulong uVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  uint uVar24;
  long *extraout_x13;
  ulong unaff_x19;
  int iVar25;
  long *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar13 = (uint)param_3;
  if (0 < (int)uVar13) {
    uVar11 = (uint)param_2;
    uVar19 = (ulong)(uVar11 - 1);
    if (uVar11 - 1 != 0 && 0 < (int)uVar11) {
      puVar17 = (uint *)(param_1 + uVar19);
      uVar15 = *puVar17;
      uVar16 = (ulong)(uVar15 >> 0x1f);
      uVar18 = -uVar15;
      if (-1 < (int)uVar15) {
        uVar18 = uVar15;
      }
      uVar21 = uVar19 + 1;
      lVar20 = (param_2 & 0xffffffff) - uVar19;
      do {
        lVar20 = lVar20 + 1;
        puVar17 = puVar17 + -1;
        uVar24 = (uint)lVar20;
        uVar15 = uVar24;
        if ((int)uVar18 <= (int)uVar24) {
          uVar15 = uVar18;
        }
        uVar5 = uVar24;
        if ((int)uVar24 <= (int)uVar18) {
          uVar5 = uVar18;
        }
        uVar15 = *(int *)((&PTR_DAT_110ab3260)[(int)uVar15] + (ulong)uVar5 * 4) + (int)uVar16;
        uVar8 = *puVar17;
        uVar5 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar5 = uVar8;
        }
        uVar18 = uVar5 + uVar18;
        if ((int)uVar8 < 0) {
          uVar5 = uVar24;
          if ((long)(ulong)uVar18 < lVar20) {
            uVar5 = uVar18 + 1;
          }
          if ((int)uVar24 <= (int)(uVar18 + 1)) {
            uVar24 = uVar18 + 1;
          }
          uVar15 = *(int *)((&PTR_DAT_110ab3260)[(int)uVar5] + (ulong)uVar24 * 4) + uVar15;
        }
        uVar16 = (ulong)uVar15;
        uVar21 = uVar21 - 1;
      } while (1 < uVar21);
      uVar18 = uVar11;
      if ((int)uVar13 <= (int)uVar11) {
        uVar18 = uVar13;
      }
      uVar24 = uVar11;
      if ((int)uVar11 <= (int)uVar13) {
        uVar24 = uVar13;
      }
      uVar5 = uVar11;
      if ((int)(uVar13 + 1) <= (int)uVar11) {
        uVar5 = uVar13 + 1;
      }
      if ((int)uVar11 <= (int)(uVar13 + 1)) {
        uVar11 = uVar13 + 1;
      }
      uVar13 = *(int *)((&PTR_DAT_110ab3260)[uVar5] + (ulong)uVar11 * 4) +
               *(int *)((&PTR_DAT_110ab3260)[uVar18] + (ulong)uVar24 * 4);
      puVar2 = &stack0xfffffffffffffff0;
      uVar11 = uVar13 - 1;
      if (uVar13 != 0 && uVar11 != 0) {
        if (0xff < uVar11) {
          uVar13 = 0x18 - (int)LZCOUNT(uVar11);
          uVar15 = uVar15 >> (ulong)(uVar13 & 0x1f);
          uVar13 = (uVar11 >> (ulong)(uVar13 & 0x1f)) + 1;
          unaff_x30 = 0x108b4a158;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x19 = uVar16;
          unaff_x20 = param_4;
          unaff_x29 = puVar2;
        }
        uVar11 = *(uint *)(param_4 + 4);
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar11 / uVar13;
        }
        if (uVar15 == 0) {
          uVar18 = uVar11 + uVar18 * (1 - uVar13);
        }
        else {
          *(uint *)((long)param_4 + 0x24) =
               uVar11 + uVar18 * (uVar15 - uVar13) + *(int *)((long)param_4 + 0x24);
        }
        *(uint *)(param_4 + 4) = uVar18;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        uVar13 = *(uint *)(param_4 + 4);
        plVar10 = param_4;
        while (uVar13 < 0x800001) {
          plVar10 = param_4;
          FUN_108b4a4c0(param_4,*(uint *)((long)param_4 + 0x24) >> 0x17);
          uVar13 = (int)param_4[4] << 8;
          *(uint *)(param_4 + 4) = uVar13;
          *(uint *)((long)param_4 + 0x24) = (*(uint *)((long)param_4 + 0x24) & 0x7fffff) << 8;
          *(int *)(param_4 + 3) = (int)param_4[3] + 8;
        }
        return plVar10;
      }
      _abort();
      iVar25 = (int)uVar16;
      if (uVar13 != 0) {
        uVar18 = *(uint *)(param_4 + 2);
        uVar15 = *(uint *)((long)param_4 + 0x14);
        uVar11 = uVar15 + uVar13;
        plVar10 = param_4;
        uVar24 = uVar15;
        if (0x20 < uVar11) {
          do {
            plVar10 = param_4;
            FUN_108b4a228(param_4,uVar18 & 0xff);
            *(uint *)(param_4 + 6) = *(uint *)(param_4 + 6) | (uint)plVar10;
            uVar18 = uVar18 >> 8;
            uVar15 = uVar24 - 8;
            bVar1 = 0xf < (int)uVar24;
            uVar24 = uVar15;
          } while (bVar1);
          uVar11 = uVar13 + uVar15;
        }
        *(uint *)(param_4 + 2) = iVar25 << (ulong)(uVar15 & 0x1f) | uVar18;
        *(uint *)((long)param_4 + 0x14) = uVar11;
        *(uint *)(param_4 + 3) = (int)param_4[3] + uVar13;
        return plVar10;
      }
      _abort();
      if ((uint)(*(int *)((long)param_4 + 0xc) + *(int *)((long)param_4 + 0x1c)) <
          *(uint *)(param_4 + 1)) {
        iVar12 = *(int *)((long)param_4 + 0xc) + 1;
        *(int *)((long)param_4 + 0xc) = iVar12;
        *(char *)(*param_4 + (ulong)(*(uint *)(param_4 + 1) - iVar12)) = (char)iVar25;
        return (long *)0x0;
      }
      return (long *)0xffffffff;
    }
  }
  _abort();
  iVar12 = (int)param_2;
  iVar14 = (int)param_3;
  iVar25 = iVar12;
  if (iVar14 <= iVar12) {
    iVar25 = iVar14;
  }
  iVar4 = iVar12;
  if (iVar12 <= iVar14) {
    iVar4 = iVar14;
  }
  iVar6 = iVar12;
  if (iVar14 + 1 <= iVar12) {
    iVar6 = iVar14 + 1;
  }
  iVar7 = iVar12;
  if (iVar12 <= iVar14 + 1) {
    iVar7 = iVar14 + 1;
  }
  FUN_108b49e68(param_4,*(int *)((&PTR_DAT_110ab3260)[iVar6] + (long)iVar7 * 4) +
                        *(int *)((&PTR_DAT_110ab3260)[iVar25] + (long)iVar4 * 4));
  if ((0 < iVar14) && (1 < iVar12)) {
    param_2 = param_2 & 0xffffffff;
    while( true ) {
      uVar13 = (uint)param_4;
      iVar25 = (int)param_3;
      if ((long)param_2 < 3) break;
      lVar20 = (long)iVar25;
      if ((long)iVar25 < (long)param_2) {
        ppuVar22 = &PTR_DAT_110ab3260 + lVar20;
        uVar11 = *(uint *)((&PTR_DAT_110ab3268)[lVar20] + param_2 * 4);
        param_4 = (long *)(ulong)(uVar13 - *(uint *)(*ppuVar22 + param_2 * 4));
        if (uVar13 < *(uint *)(*ppuVar22 + param_2 * 4) || uVar11 <= uVar13) {
          iVar12 = 0;
          uVar18 = 0;
          if (uVar11 <= uVar13) {
            uVar18 = uVar11;
          }
          do {
            ppuVar22 = ppuVar22 + -1;
            iVar12 = iVar12 + 1;
          } while (uVar13 - uVar18 < *(uint *)(*ppuVar22 + param_2 * 4));
          param_3 = (ulong)(uint)(iVar25 - iVar12);
          FUN_108b49c60();
          param_4 = extraout_x13;
          param_2 = extraout_x8;
        }
        else {
          *param_1 = 0;
        }
      }
      else {
        puVar23 = (&PTR_DAT_110ab3260)[param_2];
        uVar11 = 0;
        if (*(uint *)(puVar23 + (param_3 & 0xffffffff) * 4 + 4) <= uVar13) {
          uVar11 = *(uint *)(puVar23 + (param_3 & 0xffffffff) * 4 + 4);
        }
        uVar13 = uVar13 - uVar11;
        uVar19 = param_2;
        if (uVar13 < *(uint *)(puVar23 + param_2 * 4)) {
          do {
            uVar11 = *(uint *)(*(long *)(&UNK_110ab3258 + uVar19 * 8) + param_2 * 4);
            uVar19 = uVar19 - 1;
          } while (uVar13 < uVar11);
        }
        else {
          param_3 = param_3 & 0xffffffff;
          lVar20 = lVar20 + 1;
          do {
            uVar11 = *(uint *)(puVar23 + param_3 * 4);
            param_3 = lVar20 - 2;
            lVar20 = lVar20 + -1;
          } while (uVar13 < uVar11);
        }
        param_4 = (long *)(ulong)(uVar13 - uVar11);
        FUN_108b49c60();
        param_2 = extraout_x8_00;
        param_3 = extraout_x11;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    }
    uVar11 = 0;
    if ((uint)(iVar25 * 2) < uVar13) {
      uVar11 = ~(iVar25 << 1);
    }
    uVar18 = uVar11 + uVar13 + 1;
    sVar9 = (short)param_3 - (short)(uVar18 >> 1);
    sVar3 = -sVar9;
    if (uVar13 <= (uint)(iVar25 * 2)) {
      sVar3 = sVar9;
    }
    sVar9 = 0;
    if (1 < uVar18) {
      sVar9 = ((ushort)uVar18 & 0xfffe) - 1;
    }
    sVar9 = (short)(uVar11 + uVar13) - sVar9;
    *param_1 = (int)sVar3;
    param_1[1] = (int)(short)((short)(uVar18 >> 1) - sVar9 ^ -sVar9);
    return param_4;
  }
  _abort();
  *param_1 = (int)extraout_w9;
  return param_4;
}



/* Entry: 108b49a7c; end: 108b49c5f;  */

float FUN_108b49a7c(float param_1,int *param_2,uint param_3,uint param_4,ulong param_5)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  short extraout_w9;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x11;
  undefined **ppuVar10;
  undefined *puVar11;
  uint uVar12;
  ulong extraout_x13;
  int iVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar14 = (ulong)param_4;
  uVar5 = param_3;
  if ((int)param_4 <= (int)param_3) {
    uVar5 = param_4;
  }
  uVar12 = param_3;
  if ((int)param_3 <= (int)param_4) {
    uVar12 = param_4;
  }
  uVar2 = param_3;
  if ((int)(param_4 + 1) <= (int)param_3) {
    uVar2 = param_4 + 1;
  }
  uVar3 = param_3;
  if ((int)param_3 <= (int)(param_4 + 1)) {
    uVar3 = param_4 + 1;
  }
  FUN_108b49e68(param_5,*(int *)((&PTR_DAT_110ab3260)[(int)uVar2] + (long)(int)uVar3 * 4) +
                        *(int *)((&PTR_DAT_110ab3260)[(int)uVar5] + (long)(int)uVar12 * 4));
  if ((0 < (int)param_4) && (1 < (int)param_3)) {
    uVar6 = (ulong)param_3;
    fVar15 = 0.0;
    while( true ) {
      uVar5 = (uint)param_5;
      iVar13 = (int)uVar14;
      if ((long)uVar6 < 3) break;
      lVar8 = (long)iVar13;
      if ((long)iVar13 < (long)uVar6) {
        ppuVar10 = &PTR_DAT_110ab3260 + lVar8;
        uVar12 = *(uint *)((&PTR_DAT_110ab3268)[lVar8] + uVar6 * 4);
        param_5 = (ulong)(uVar5 - *(uint *)(*ppuVar10 + uVar6 * 4));
        if (uVar5 < *(uint *)(*ppuVar10 + uVar6 * 4) || uVar12 <= uVar5) {
          iVar7 = 0;
          uVar2 = 0;
          if (uVar12 <= uVar5) {
            uVar2 = uVar12;
          }
          do {
            ppuVar10 = ppuVar10 + -1;
            iVar7 = iVar7 + 1;
          } while (uVar5 - uVar2 < *(uint *)(*ppuVar10 + uVar6 * 4));
          uVar14 = (ulong)(uint)(iVar13 - iVar7);
          FUN_108b49c60();
          param_5 = extraout_x13;
          uVar6 = extraout_x8;
        }
        else {
          *param_2 = 0;
        }
      }
      else {
        puVar11 = (&PTR_DAT_110ab3260)[uVar6];
        uVar12 = 0;
        if (*(uint *)(puVar11 + (uVar14 & 0xffffffff) * 4 + 4) <= uVar5) {
          uVar12 = *(uint *)(puVar11 + (uVar14 & 0xffffffff) * 4 + 4);
        }
        uVar5 = uVar5 - uVar12;
        uVar9 = uVar6;
        if (uVar5 < *(uint *)(puVar11 + uVar6 * 4)) {
          do {
            uVar12 = *(uint *)(*(long *)(&UNK_110ab3258 + uVar9 * 8) + uVar6 * 4);
            uVar9 = uVar9 - 1;
          } while (uVar5 < uVar12);
        }
        else {
          uVar14 = uVar14 & 0xffffffff;
          lVar8 = lVar8 + 1;
          do {
            uVar12 = *(uint *)(puVar11 + uVar14 * 4);
            uVar14 = lVar8 - 2;
            lVar8 = lVar8 + -1;
          } while (uVar5 < uVar12);
        }
        param_5 = (ulong)(uVar5 - uVar12);
        FUN_108b49c60();
        uVar6 = extraout_x8_00;
        uVar14 = extraout_x11;
      }
      param_2 = param_2 + 1;
      uVar6 = uVar6 - 1;
    }
    uVar12 = 0;
    if ((uint)(iVar13 * 2) < uVar5) {
      uVar12 = ~(iVar13 << 1);
    }
    uVar2 = uVar12 + uVar5 + 1;
    sVar4 = (short)uVar14 - (short)(uVar2 >> 1);
    sVar1 = -sVar4;
    if (uVar5 <= (uint)(iVar13 * 2)) {
      sVar1 = sVar4;
    }
    sVar4 = 0;
    if (1 < uVar2) {
      sVar4 = ((ushort)uVar2 & 0xfffe) - 1;
    }
    fVar16 = (float)(int)sVar1;
    sVar4 = (short)(uVar12 + uVar5) - sVar4;
    iVar13 = (int)(short)((short)(uVar2 >> 1) - sVar4 ^ -sVar4);
    *param_2 = (int)sVar1;
    param_2[1] = iVar13;
    fVar17 = (float)iVar13;
    return fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
  }
  _abort();
  *param_2 = (int)extraout_w9;
  fVar15 = (float)(int)extraout_w9;
  return param_1 + fVar15 * fVar15;
}



/* Entry: 108b49c60; end: 108b49cbf;  */

float FUN_108b49c60(float param_1)

{
  short in_w9;
  int *unaff_x19;
  float fVar1;
  
  *unaff_x19 = (int)in_w9;
  fVar1 = (float)(int)in_w9;
  return param_1 + fVar1 * fVar1;
}



/* Entry: 108b49cc0; end: 108b49d1b;  */

void FUN_108b49cc0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined8 *)((long)param_1 + 0x14) = 0x900000000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x8000000000;
  puVar2 = param_1;
  FUN_108b49d1c();
  *(uint *)((long)param_1 + 0x24) = *(int *)(param_1 + 4) + ((uint)puVar2 >> 1 ^ 0xffffffff);
  *(uint *)((long)param_1 + 0x2c) = (uint)puVar2;
  *(undefined4 *)(param_1 + 6) = 0;
  while (*(uint *)(param_1 + 4) < 0x800001) {
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) << 8;
    iVar1 = *(int *)((long)param_1 + 0x2c);
    puVar2 = param_1;
    FUN_108b49d1c();
    *(uint *)((long)param_1 + 0x2c) = (uint)puVar2;
    *(uint *)((long)param_1 + 0x24) =
         (((uint)puVar2 | iVar1 << 8) >> 1 & 0xff |
         (*(uint *)((long)param_1 + 0x24) & 0x7fffff) << 8) ^ 0xff;
  }
  return;
}



/* Entry: 108b49d1c; end: 108b49d47;  */

undefined1 FUN_108b49d1c(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  if (uVar1 < *(uint *)(param_1 + 1)) {
    *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
    return *(undefined1 *)(*param_1 + (ulong)uVar1);
  }
  return 0;
}



/* Entry: 108b49d48; end: 108b49daf;  */

void FUN_108b49d48(long param_1)

{
  int iVar1;
  long lVar2;
  
  while (*(uint *)(param_1 + 0x20) < 0x800001) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) << 8;
    iVar1 = *(int *)(param_1 + 0x2c);
    lVar2 = param_1;
    FUN_108b49d1c();
    *(uint *)(param_1 + 0x2c) = (uint)lVar2;
    *(uint *)(param_1 + 0x24) =
         (((uint)lVar2 | iVar1 << 8) >> 1 & 0xff | (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8) ^
         0xff;
  }
  return;
}



/* Entry: 108b49db0; end: 108b49de3;  */

void FUN_108b49db0(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28) * (param_4 - param_3);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar2;
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x20) - iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28) * (param_3 - param_2);
  }
  *(int *)(param_1 + 0x20) = iVar2;
  while (*(uint *)(param_1 + 0x20) < 0x800001) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) << 8;
    iVar2 = *(int *)(param_1 + 0x2c);
    lVar1 = param_1;
    FUN_108b49d1c();
    *(uint *)(param_1 + 0x2c) = (uint)lVar1;
    *(uint *)(param_1 + 0x24) =
         (((uint)lVar1 | iVar2 << 8) >> 1 & 0xff | (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8) ^
         0xff;
  }
  return;
}



/* Entry: 108b49de4; end: 108b49e67;  */

bool FUN_108b49de4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x20) >> (ulong)(param_2 & 0x1f);
  if (uVar3 <= uVar2) {
    *(uint *)(param_1 + 0x24) = uVar2 - uVar3;
  }
  uVar1 = uVar3;
  if (uVar2 >= uVar3) {
    uVar1 = *(uint *)(param_1 + 0x20) - uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  FUN_108b49d48();
  return uVar2 < uVar3;
}



/* Entry: 108b49e68; end: 108b49f3f;  */

uint FUN_108b49e68(long *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = (uint)param_2;
  uVar8 = uVar4 - 1;
  if (uVar4 == 0 || uVar8 == 0) {
    _abort();
    uVar4 = *(uint *)(param_1 + 2);
    uVar8 = *(uint *)((long)param_1 + 0x14);
    uVar5 = (uint)param_2;
    if (uVar8 < uVar5) {
      uVar7 = *(uint *)((long)param_1 + 0xc);
      uVar6 = uVar8;
      do {
        if (uVar7 < *(uint *)(param_1 + 1)) {
          uVar7 = uVar7 + 1;
          *(uint *)((long)param_1 + 0xc) = uVar7;
          uVar8 = (uint)*(byte *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - uVar7));
        }
        else {
          uVar8 = 0;
        }
        uVar4 = uVar8 << (ulong)(uVar6 & 0x1f) | uVar4;
        uVar8 = uVar6 + 8;
        bVar1 = (int)uVar6 < 0x11;
        uVar6 = uVar8;
      } while (bVar1);
    }
    *(uint *)(param_1 + 2) = uVar4 >> (ulong)(uVar5 & 0x1f);
    *(uint *)((long)param_1 + 0x14) = uVar8 - uVar5;
    *(uint *)(param_1 + 3) = (int)param_1[3] + uVar5;
    return uVar4 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
  }
  if (uVar8 < 0x100) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = *(uint *)(param_1 + 4) / uVar4;
    }
    *(uint *)(param_1 + 5) = uVar8;
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = *(uint *)((long)param_1 + 0x24) / uVar8;
    }
    uVar7 = 0;
    if (uVar5 + 1 <= uVar4) {
      uVar7 = uVar4 - (uVar5 + 1);
    }
    FUN_108b49db0(param_1,uVar7,uVar7 + 1,param_2);
  }
  else {
    uVar5 = 0x18 - (int)LZCOUNT(uVar8);
    uVar4 = (uVar8 >> (ulong)(uVar5 & 0x1f)) + 1;
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = *(uint *)(param_1 + 4) / uVar4;
    }
    *(uint *)(param_1 + 5) = uVar7;
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = *(uint *)((long)param_1 + 0x24) / uVar7;
    }
    iVar2 = 0;
    if (uVar6 + 1 <= uVar4) {
      iVar2 = uVar4 - (uVar6 + 1);
    }
    FUN_108b49db0(param_1,iVar2,iVar2 + 1);
    plVar3 = param_1;
    FUN_108b49f40(param_1,uVar5);
    uVar7 = iVar2 << (ulong)(uVar5 & 0x1f) | (uint)plVar3;
    if (uVar8 < uVar7) {
      *(undefined4 *)(param_1 + 6) = 1;
      uVar7 = uVar8;
    }
  }
  return uVar7;
}



/* Entry: 108b49f40; end: 108b4a007;  */

uint FUN_108b49f40(long *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar5 = *(uint *)((long)param_1 + 0x14);
  if (uVar5 < param_2) {
    uVar4 = *(uint *)((long)param_1 + 0xc);
    uVar3 = uVar5;
    do {
      if (uVar4 < *(uint *)(param_1 + 1)) {
        uVar4 = uVar4 + 1;
        *(uint *)((long)param_1 + 0xc) = uVar4;
        uVar5 = (uint)*(byte *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - uVar4));
      }
      else {
        uVar5 = 0;
      }
      uVar2 = uVar5 << (ulong)(uVar3 & 0x1f) | uVar2;
      uVar5 = uVar3 + 8;
      bVar1 = (int)uVar3 < 0x11;
      uVar3 = uVar5;
    } while (bVar1);
  }
  *(uint *)(param_1 + 2) = uVar2 >> (ulong)(param_2 & 0x1f);
  *(uint *)((long)param_1 + 0x14) = uVar5 - param_2;
  *(uint *)(param_1 + 3) = (int)param_1[3] + param_2;
  return uVar2 & (-1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
}



/* Entry: 108b4a008; end: 108b4a05f;  */

void FUN_108b4a008(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  while (uVar1 < 0x800001) {
    FUN_108b4a4c0(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    uVar1 = *(int *)(param_1 + 0x20) << 8;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b4a060; end: 108b4a10b;  */

void FUN_108b4a060(long param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar1 = uVar2 >> (ulong)(param_4 & 0x1f);
  iVar3 = -1 << (ulong)(param_4 & 0x1f);
  if (param_2 == 0) {
    iVar3 = uVar2 + uVar1 * (iVar3 + param_3);
  }
  else {
    *(uint *)(param_1 + 0x24) = uVar2 + uVar1 * (iVar3 + param_2) + *(int *)(param_1 + 0x24);
    iVar3 = uVar1 * (param_3 - param_2);
  }
  *(int *)(param_1 + 0x20) = iVar3;
  uVar2 = *(uint *)(param_1 + 0x20);
  while (uVar2 < 0x800001) {
    FUN_108b4a4c0(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    uVar2 = *(int *)(param_1 + 0x20) << 8;
    *(uint *)(param_1 + 0x20) = uVar2;
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b4a10c; end: 108b4a19f;  */

/* WARNING: Possible PIC construction at 0x000108b4a154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b4a158) */

long * FUN_108b4a10c(long *param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar3 = &stack0xfffffffffffffff0;
  uVar8 = param_3 - 1;
  if (param_3 != 0 && uVar8 != 0) {
    uVar10 = (uint)param_2;
    uVar7 = param_2;
    if (0xff < uVar8) {
      uVar9 = 0x18 - (int)LZCOUNT(uVar8);
      uVar10 = uVar10 >> (ulong)(uVar9 & 0x1f);
      param_3 = (uVar8 >> (ulong)(uVar9 & 0x1f)) + 1;
      unaff_x30 = 0x108b4a158;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      uVar7 = (ulong)uVar10;
      unaff_x19 = param_2;
      unaff_x20 = param_1;
      unaff_x29 = puVar3;
    }
    uVar8 = *(uint *)(param_1 + 4);
    uVar9 = 0;
    if (param_3 != 0) {
      uVar9 = uVar8 / param_3;
    }
    iVar6 = (int)uVar7;
    if (iVar6 == 0) {
      iVar6 = uVar8 + uVar9 * ((uVar10 + 1) - param_3);
    }
    else {
      *(uint *)((long)param_1 + 0x24) =
           uVar8 + uVar9 * (iVar6 - param_3) + *(int *)((long)param_1 + 0x24);
      iVar6 = uVar9 * ((uVar10 + 1) - iVar6);
    }
    *(int *)(param_1 + 4) = iVar6;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar8 = *(uint *)(param_1 + 4);
    plVar5 = param_1;
    while (uVar8 < 0x800001) {
      plVar5 = param_1;
      FUN_108b4a4c0(param_1,*(uint *)((long)param_1 + 0x24) >> 0x17);
      uVar8 = (int)param_1[4] << 8;
      *(uint *)(param_1 + 4) = uVar8;
      *(uint *)((long)param_1 + 0x24) = (*(uint *)((long)param_1 + 0x24) & 0x7fffff) << 8;
      *(int *)(param_1 + 3) = (int)param_1[3] + 8;
    }
    return plVar5;
  }
  _abort();
  iVar6 = (int)param_2;
  if (param_3 == 0) {
    _abort();
    if (*(uint *)(param_1 + 1) <=
        (uint)(*(int *)((long)param_1 + 0xc) + *(int *)((long)param_1 + 0x1c))) {
      return (long *)0xffffffff;
    }
    iVar2 = *(int *)((long)param_1 + 0xc) + 1;
    *(int *)((long)param_1 + 0xc) = iVar2;
    *(char *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - iVar2)) = (char)iVar6;
    return (long *)0x0;
  }
  uVar10 = *(uint *)(param_1 + 2);
  uVar9 = *(uint *)((long)param_1 + 0x14);
  uVar8 = uVar9 + param_3;
  plVar5 = param_1;
  uVar4 = uVar9;
  if (0x20 < uVar8) {
    do {
      plVar5 = param_1;
      FUN_108b4a228(param_1,uVar10 & 0xff);
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | (uint)plVar5;
      uVar10 = uVar10 >> 8;
      uVar9 = uVar4 - 8;
      bVar1 = 0xf < (int)uVar4;
      uVar4 = uVar9;
    } while (bVar1);
    uVar8 = param_3 + uVar9;
  }
  *(uint *)(param_1 + 2) = iVar6 << (ulong)(uVar9 & 0x1f) | uVar10;
  *(uint *)((long)param_1 + 0x14) = uVar8;
  *(uint *)(param_1 + 3) = (int)param_1[3] + param_3;
  return plVar5;
}



/* Entry: 108b4a1a0; end: 108b4a227;  */

long * FUN_108b4a1a0(long *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 != 0) {
    uVar7 = *(uint *)(param_1 + 2);
    uVar5 = *(uint *)((long)param_1 + 0x14);
    uVar6 = uVar5 + param_3;
    plVar4 = param_1;
    uVar3 = uVar5;
    if (0x20 < uVar6) {
      do {
        plVar4 = param_1;
        FUN_108b4a228(param_1,uVar7 & 0xff);
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | (uint)plVar4;
        uVar7 = uVar7 >> 8;
        uVar5 = uVar3 - 8;
        bVar1 = 0xf < (int)uVar3;
        uVar3 = uVar5;
      } while (bVar1);
      uVar6 = param_3 + uVar5;
    }
    *(uint *)(param_1 + 2) = (int)param_2 << (ulong)(uVar5 & 0x1f) | uVar7;
    *(uint *)((long)param_1 + 0x14) = uVar6;
    *(int *)(param_1 + 3) = (int)param_1[3] + param_3;
    return plVar4;
  }
  _abort();
  if ((uint)(*(int *)((long)param_1 + 0xc) + *(int *)((long)param_1 + 0x1c)) <
      *(uint *)(param_1 + 1)) {
    iVar2 = *(int *)((long)param_1 + 0xc) + 1;
    *(int *)((long)param_1 + 0xc) = iVar2;
    *(char *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - iVar2)) = (char)param_2;
    return (long *)0x0;
  }
  return (long *)0xffffffff;
}



/* Entry: 108b4a228; end: 108b4a263;  */

undefined8 FUN_108b4a228(long *param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((uint)(*(int *)((long)param_1 + 0xc) + *(int *)((long)param_1 + 0x1c)) <
      *(uint *)(param_1 + 1)) {
    iVar1 = *(int *)((long)param_1 + 0xc) + 1;
    *(int *)((long)param_1 + 0xc) = iVar1;
    *(undefined1 *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - iVar1)) = param_2;
    return 0;
  }
  return 0xffffffff;
}



/* Entry: 108b4a264; end: 108b4a30b;  */

void FUN_108b4a264(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (8 < param_3) {
    _abort();
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if ((uint)param_2 < uVar6 + *(int *)((long)param_1 + 0x1c)) {
      _abort();
      iVar4 = *(int *)((long)param_1 + 0x24);
      uVar5 = (uint)LZCOUNT((int)param_1[4]);
      uVar2 = 0x7fffffff >> (ulong)(uVar5 & 0x1f);
      uVar6 = uVar2 + iVar4 & -0x80000000 >> (uVar5 & 0x1f);
      uVar1 = uVar5 & 0x1f;
      uVar3 = uVar5 & 0x1f;
      if ((uint)(iVar4 + (int)param_1[4]) <= (uVar6 | uVar2)) {
        uVar5 = uVar5 + 1;
        uVar6 = (0x3fffffffU >> (ulong)uVar1) + iVar4 & -0x40000000 >> uVar3;
      }
      for (; 0 < (int)uVar5; uVar5 = uVar5 - 8) {
        FUN_108b4a4c0(param_1,uVar6 >> 0x17);
        uVar6 = (uVar6 & 0x7fffff) << 8;
      }
      if ((-1 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[5] != 0)) {
        FUN_108b4a4c0(param_1,0);
      }
      uVar6 = *(uint *)(param_1 + 2);
      iVar4 = *(int *)((long)param_1 + 0x14);
      while (7 < iVar4) {
        FUN_108b4a228(param_1,uVar6 & 0xff);
        func_0x000108b4a5a0();
        uVar6 = uVar6 >> 8;
        iVar4 = iVar4 + -8;
      }
      if ((int)param_1[6] == 0) {
        if (*param_1 != 0) {
          _bzero(*param_1 + (ulong)*(uint *)((long)param_1 + 0x1c),
                 (int)param_1[1] - (*(uint *)((long)param_1 + 0x1c) + *(int *)((long)param_1 + 0xc))
                );
        }
        if (0 < iVar4) {
          uVar3 = *(uint *)(param_1 + 1);
          uVar1 = *(uint *)((long)param_1 + 0xc);
          if (uVar1 < uVar3) {
            if (uVar3 <= *(int *)((long)param_1 + 0x1c) + uVar1 && (int)-uVar5 < iVar4) {
              uVar6 = uVar6 & (-1 << (ulong)(-uVar5 & 0x1f) ^ 0xffffffffU);
              *(undefined4 *)(param_1 + 6) = 0xffffffff;
            }
            *(byte *)(*param_1 + (ulong)(uVar3 + ~uVar1)) =
                 *(byte *)(*param_1 + (ulong)(uVar3 + ~uVar1)) | (byte)uVar6;
          }
          else {
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
          }
        }
      }
      return;
    }
    _memmove((*param_1 + (param_2 & 0xffffffff)) - (ulong)uVar6,
             (*param_1 + (ulong)*(uint *)(param_1 + 1)) - (ulong)uVar6);
    *(uint *)(param_1 + 1) = (uint)param_2;
    return;
  }
  uVar3 = 8 - param_3;
  uVar6 = ~(-1 << (ulong)(param_3 & 0x1f)) << (ulong)(uVar3 & 0x1f);
  iVar4 = (int)param_2;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    *(byte *)*param_1 =
         *(byte *)*param_1 & ((byte)uVar6 ^ 0xff) | (byte)(iVar4 << (ulong)(uVar3 & 0x1f));
    return;
  }
  if (-1 < (int)*(uint *)((long)param_1 + 0x2c)) {
    *(uint *)((long)param_1 + 0x2c) =
         *(uint *)((long)param_1 + 0x2c) & (uVar6 ^ 0xffffffff) | iVar4 << (ulong)(uVar3 & 0x1f);
    return;
  }
  if (*(uint *)(param_1 + 4) <= 0x80000000U >> (ulong)(param_3 & 0x1f)) {
    *(uint *)((long)param_1 + 0x24) =
         *(uint *)((long)param_1 + 0x24) & (uVar6 << 0x17 ^ 0xffffffff) |
         iVar4 << (ulong)(~param_3 & 0x1f);
    return;
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return;
}



/* Entry: 108b4a30c; end: 108b4a363;  */

void FUN_108b4a30c(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (param_2 < uVar5 + *(int *)((long)param_1 + 0x1c)) {
    _abort();
    iVar6 = *(int *)((long)param_1 + 0x24);
    uVar4 = (uint)LZCOUNT((int)param_1[4]);
    uVar3 = 0x7fffffff >> (ulong)(uVar4 & 0x1f);
    uVar5 = uVar3 + iVar6 & -0x80000000 >> (uVar4 & 0x1f);
    uVar2 = uVar4 & 0x1f;
    uVar1 = uVar4 & 0x1f;
    if ((uint)(iVar6 + (int)param_1[4]) <= (uVar5 | uVar3)) {
      uVar4 = uVar4 + 1;
      uVar5 = (0x3fffffffU >> (ulong)uVar2) + iVar6 & -0x40000000 >> uVar1;
    }
    for (; 0 < (int)uVar4; uVar4 = uVar4 - 8) {
      FUN_108b4a4c0(param_1,uVar5 >> 0x17);
      uVar5 = (uVar5 & 0x7fffff) << 8;
    }
    if ((-1 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[5] != 0)) {
      FUN_108b4a4c0(param_1,0);
    }
    uVar5 = *(uint *)(param_1 + 2);
    iVar6 = *(int *)((long)param_1 + 0x14);
    while (7 < iVar6) {
      FUN_108b4a228(param_1,uVar5 & 0xff);
      func_0x000108b4a5a0();
      uVar5 = uVar5 >> 8;
      iVar6 = iVar6 + -8;
    }
    if ((int)param_1[6] == 0) {
      if (*param_1 != 0) {
        _bzero(*param_1 + (ulong)*(uint *)((long)param_1 + 0x1c),
               (int)param_1[1] - (*(uint *)((long)param_1 + 0x1c) + *(int *)((long)param_1 + 0xc)));
      }
      if (0 < iVar6) {
        uVar1 = *(uint *)(param_1 + 1);
        uVar2 = *(uint *)((long)param_1 + 0xc);
        if (uVar2 < uVar1) {
          if (uVar1 <= *(int *)((long)param_1 + 0x1c) + uVar2 && (int)-uVar4 < iVar6) {
            uVar5 = uVar5 & (-1 << (ulong)(-uVar4 & 0x1f) ^ 0xffffffffU);
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
          }
          *(byte *)(*param_1 + (ulong)(uVar1 + ~uVar2)) =
               *(byte *)(*param_1 + (ulong)(uVar1 + ~uVar2)) | (byte)uVar5;
        }
        else {
          *(undefined4 *)(param_1 + 6) = 0xffffffff;
        }
      }
    }
    return;
  }
  _memmove((*param_1 + (ulong)param_2) - (ulong)uVar5,
           (*param_1 + (ulong)*(uint *)(param_1 + 1)) - (ulong)uVar5);
  *(uint *)(param_1 + 1) = param_2;
  return;
}



/* Entry: 108b4a364; end: 108b4a4bf;  */

void FUN_108b4a364(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)((long)param_1 + 0x24);
  uVar4 = (uint)LZCOUNT((int)param_1[4]);
  uVar3 = 0x7fffffff >> (ulong)(uVar4 & 0x1f);
  uVar5 = uVar3 + iVar6 & -0x80000000 >> (uVar4 & 0x1f);
  uVar2 = uVar4 & 0x1f;
  uVar1 = uVar4 & 0x1f;
  if ((uint)(iVar6 + (int)param_1[4]) <= (uVar5 | uVar3)) {
    uVar4 = uVar4 + 1;
    uVar5 = (0x3fffffffU >> (ulong)uVar2) + iVar6 & -0x40000000 >> uVar1;
  }
  for (; 0 < (int)uVar4; uVar4 = uVar4 - 8) {
    FUN_108b4a4c0(param_1,uVar5 >> 0x17);
    uVar5 = (uVar5 & 0x7fffff) << 8;
  }
  if ((-1 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[5] != 0)) {
    FUN_108b4a4c0(param_1,0);
  }
  uVar5 = *(uint *)(param_1 + 2);
  iVar6 = *(int *)((long)param_1 + 0x14);
  while (7 < iVar6) {
    FUN_108b4a228(param_1,uVar5 & 0xff);
    func_0x000108b4a5a0();
    uVar5 = uVar5 >> 8;
    iVar6 = iVar6 + -8;
  }
  if ((int)param_1[6] == 0) {
    if (*param_1 != 0) {
      _bzero(*param_1 + (ulong)*(uint *)((long)param_1 + 0x1c),
             (int)param_1[1] - (*(uint *)((long)param_1 + 0x1c) + *(int *)((long)param_1 + 0xc)));
    }
    if (0 < iVar6) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar2 = *(uint *)((long)param_1 + 0xc);
      if (uVar2 < uVar1) {
        if (uVar1 <= *(int *)((long)param_1 + 0x1c) + uVar2 && (int)-uVar4 < iVar6) {
          uVar5 = uVar5 & (-1 << (ulong)(-uVar4 & 0x1f) ^ 0xffffffffU);
          *(undefined4 *)(param_1 + 6) = 0xffffffff;
        }
        *(byte *)(*param_1 + (ulong)(uVar1 + ~uVar2)) =
             *(byte *)(*param_1 + (ulong)(uVar1 + ~uVar2)) | (byte)uVar5;
      }
      else {
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
    }
  }
  return;
}



/* Entry: 108b4a4c0; end: 108b4a54f;  */

void FUN_108b4a4c0(long param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0xff) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x2c)) {
      FUN_108b4a550(param_1,*(int *)(param_1 + 0x2c) + (param_2 >> 8));
      func_0x000108b4a5a0();
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      do {
        FUN_108b4a550(param_1,(param_2 >> 8) - 1 & 0xff);
        func_0x000108b4a5a0();
        iVar1 = *(int *)(param_1 + 0x28) + -1;
        *(int *)(param_1 + 0x28) = iVar1;
      } while (iVar1 != 0);
    }
    *(uint *)(param_1 + 0x2c) = param_2 & 0xff;
  }
  return;
}



/* Entry: 108b4a550; end: 108b4a5af;  */

undefined8 FUN_108b4a550(long *param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)((long)param_1 + 0x1c);
  if (*(int *)((long)param_1 + 0xc) + uVar1 < *(uint *)(param_1 + 1)) {
    uVar2 = 0;
    *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
    *(undefined1 *)(*param_1 + (ulong)uVar1) = param_2;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 108b4a5b0; end: 108b4ac9b;  */

uint * FUN_108b4a5b0(uint *param_1,float *param_2,float *param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  undefined8 *puVar23;
  float *pfVar24;
  float *pfVar25;
  ulong unaff_x19;
  uint *puVar26;
  float *unaff_x20;
  float *unaff_x21;
  float *pfVar27;
  float *unaff_x22;
  float *pfVar28;
  float *unaff_x23;
  float *pfVar29;
  float *unaff_x24;
  float *pfVar30;
  float *unaff_x25;
  float *pfVar31;
  float *unaff_x26;
  float *unaff_x27;
  float *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(float **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(float **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(float **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(float **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(float **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    iVar13 = 1;
    uVar10 = param_1[2];
    *(undefined4 *)((long)register0x00000008 + -0x98) = 1;
    iVar18 = -1;
    lVar19 = 4;
    uVar7 = 0xffffffff;
    psVar17 = (short *)((long)param_1 + 0xe);
    do {
      iVar13 = iVar13 * psVar17[-1];
      *(int *)((long)register0x00000008 + lVar19 + -0x98) = iVar13;
      uVar7 = uVar7 + 1;
      sVar4 = *psVar17;
      iVar18 = iVar18 + 2;
      lVar19 = lVar19 + 4;
      psVar17 = psVar17 + 2;
    } while (sVar4 != 1);
    sVar4 = *(short *)((long)param_1 + (long)iVar18 * 2 + 0xc);
    *(float **)((long)register0x00000008 + -0xa8) = param_2 + 1;
    *(float **)((long)register0x00000008 + -0xb0) = param_2 + 8;
    *(uint *)((long)register0x00000008 + -0x9c) = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
    uVar21 = (long)sVar4;
    for (; -1 < (int)uVar7; uVar7 = uVar7 - 1) {
      if (uVar7 == 0) {
        uVar12 = 0;
        uVar20 = 1;
      }
      else {
        uVar12 = (ulong)(uVar7 * 2);
        uVar20 = (ulong)*(short *)((long)param_1 + (ulong)(uVar7 * 2 - 1) * 2 + 0xc);
      }
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar12 * 2 + 0xc);
      if (uVar10 - 2 < 4) {
        uVar16 = (uint)uVar21;
        iVar18 = uVar16 << 1;
        uVar21 = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
        pfVar22 = param_2 + (long)(int)uVar16 * 2;
        switch(uVar10) {
        case 2:
          if (uVar16 != 4) {
            _abort();
            goto LAB_108b4ac98;
          }
          puVar23 = *(undefined8 **)((long)register0x00000008 + -0xb0);
          for (uVar10 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98) &
                        ((int)*(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98) >> 0x1f
                        ^ 0xffffffffU); uVar10 != 0; uVar10 = uVar10 - 1) {
            fVar33 = (*(float *)(puVar23 + 1) + *(float *)((long)puVar23 + 0xc)) * 0.70710677;
            fVar32 = (*(float *)((long)puVar23 + 0xc) - *(float *)(puVar23 + 1)) * 0.70710677;
            *(float *)(puVar23 + 1) = *(float *)(puVar23 + -3) - fVar33;
            *(float *)((long)puVar23 + 0xc) = *(float *)((long)puVar23 + -0x14) - fVar32;
            *(float *)(puVar23 + -3) = *(float *)(puVar23 + -3) + fVar33;
            *(float *)((long)puVar23 + -0x14) = fVar32 + *(float *)((long)puVar23 + -0x14);
            fVar33 = *(float *)(puVar23 + 2);
            fVar32 = *(float *)((long)puVar23 + 0x14);
            *(float *)(puVar23 + 2) = *(float *)(puVar23 + -2) - fVar32;
            *(float *)((long)puVar23 + 0x14) = fVar33 + *(float *)((long)puVar23 + -0xc);
            *(float *)(puVar23 + -2) = fVar32 + *(float *)(puVar23 + -2);
            *(float *)((long)puVar23 + -0xc) = *(float *)((long)puVar23 + -0xc) - fVar33;
            fVar11 = (*(float *)((long)puVar23 + 0x1c) - *(float *)(puVar23 + 3)) * 0.70710677;
            fVar32 = (*(float *)((long)puVar23 + 0x1c) + *(float *)(puVar23 + 3)) * -0.70710677;
            uVar2 = puVar23[-4];
            fVar33 = (float)uVar2;
            puVar23[-4] = CONCAT44((float)((ulong)*puVar23 >> 0x20) +
                                   *(float *)((long)puVar23 + -0x1c),(float)*puVar23 + fVar33);
            fVar35 = (float)puVar23[-1];
            *(float *)(puVar23 + 3) = fVar35 - fVar11;
            *(float *)((long)puVar23 + 0x1c) = *(float *)((long)puVar23 + -4) - fVar32;
            *puVar23 = CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)*puVar23 >> 0x20),
                                fVar33 - (float)*puVar23);
            puVar23[-1] = CONCAT44((float)((ulong)puVar23[-1] >> 0x20) + fVar32,fVar35 + fVar11);
            puVar23 = puVar23 + 8;
          }
          break;
        case 3:
          uVar10 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98);
          uVar15 = uVar10 << (ulong)(*(uint *)((long)register0x00000008 + -0x9c) & 0x1f);
          param_3 = (float *)(long)(int)uVar16;
          fVar32 = *(float *)(*(long *)(param_1 + 0xe) + (long)(int)uVar15 * (long)(int)uVar16 * 8 +
                             4);
          param_4 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar15 << 4;
          uVar12 = -(uVar20 >> 0x1f & 1) & 0xfffffff800000000 | (uVar20 & 0xffffffff) << 3;
          pfVar8 = (float *)(*(long *)(param_1 + 0xe) + 4);
          pfVar24 = param_2 + (long)iVar18 * 2;
          unaff_x19 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
          unaff_x20 = *(float **)((long)register0x00000008 + -0xa8);
          for (uVar21 = 0; pfVar27 = unaff_x20, pfVar28 = pfVar8, pfVar29 = pfVar24,
              pfVar30 = pfVar8, pfVar31 = pfVar22, pfVar25 = param_3,
              uVar21 != (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)); uVar21 = uVar21 + 1) {
            do {
              fVar35 = -(*pfVar28 * pfVar31[1]) + pfVar28[-1] * *pfVar31;
              fVar33 = pfVar28[-1] * pfVar31[1] + *pfVar28 * *pfVar31;
              fVar38 = -(*pfVar30 * pfVar29[1]) + pfVar30[-1] * *pfVar29;
              fVar11 = pfVar30[-1] * pfVar29[1] + *pfVar30 * *pfVar29;
              fVar40 = fVar35 + fVar38;
              fVar36 = fVar33 + fVar11;
              fVar37 = *pfVar27;
              *pfVar31 = pfVar27[-1] - fVar40 * 0.5;
              pfVar31[1] = fVar37 - fVar36 * 0.5;
              fVar35 = fVar32 * (fVar35 - fVar38);
              fVar33 = fVar32 * (fVar33 - fVar11);
              pfVar27[-1] = fVar40 + pfVar27[-1];
              *pfVar27 = fVar36 + *pfVar27;
              fVar11 = pfVar31[1];
              unaff_x23 = pfVar29 + 2;
              *pfVar29 = fVar33 + *pfVar31;
              pfVar29[1] = fVar11 - fVar35;
              unaff_x25 = pfVar31 + 2;
              *pfVar31 = *pfVar31 - fVar33;
              pfVar31[1] = fVar35 + pfVar31[1];
              unaff_x24 = (float *)((long)pfVar30 + param_4);
              unaff_x22 = (float *)((long)pfVar28 + unaff_x19);
              unaff_x21 = pfVar27 + 2;
              pfVar25 = (float *)((long)pfVar25 + -1);
              pfVar27 = unaff_x21;
              pfVar28 = unaff_x22;
              pfVar29 = unaff_x23;
              pfVar30 = unaff_x24;
              pfVar31 = unaff_x25;
            } while (pfVar25 != (float *)0x0);
            pfVar22 = (float *)((long)pfVar22 + uVar12);
            pfVar24 = (float *)((long)pfVar24 + uVar12);
            unaff_x20 = (float *)((long)unaff_x20 + uVar12);
            unaff_x26 = (float *)0x0;
          }
          break;
        case 4:
          uVar15 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98);
          param_4 = (ulong)uVar15;
          uVar10 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
          pfVar24 = (float *)(ulong)uVar10;
          pfVar8 = param_2;
          if (uVar16 == 1) {
            while (uVar10 != 0) {
              fVar40 = (float)*(undefined8 *)(pfVar8 + 2);
              fVar36 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
              fVar32 = (float)*(undefined8 *)pfVar8;
              fVar33 = (float)*(undefined8 *)(pfVar8 + 4);
              fVar39 = fVar32 + fVar33;
              fVar11 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
              fVar35 = (float)((ulong)*(undefined8 *)(pfVar8 + 4) >> 0x20);
              fVar41 = fVar11 + fVar35;
              fVar32 = fVar32 - fVar33;
              fVar11 = fVar11 - fVar35;
              fVar37 = (float)*(undefined8 *)(pfVar8 + 6);
              fVar33 = fVar40 + fVar37;
              fVar38 = (float)((ulong)*(undefined8 *)(pfVar8 + 6) >> 0x20);
              fVar35 = fVar36 + fVar38;
              fVar36 = fVar36 - fVar38;
              auVar34._4_4_ = fVar36;
              auVar34._0_4_ = fVar40 - fVar37;
              auVar34._8_8_ = 0;
              auVar34 = NEON_rev64(auVar34,4);
              *(ulong *)(pfVar8 + 2) = CONCAT44(fVar11 - auVar34._4_4_,fVar32 + fVar36);
              *(ulong *)pfVar8 = CONCAT44(fVar41 + fVar35,fVar39 + fVar33);
              pfVar8[6] = fVar32 - fVar36;
              pfVar8[7] = fVar11 + auVar34._4_4_;
              pfVar8[4] = fVar39 - fVar33;
              pfVar8[5] = fVar41 - fVar35;
              uVar10 = (int)pfVar24 - 1;
              pfVar24 = (float *)(ulong)uVar10;
              pfVar8 = pfVar8 + 8;
            }
          }
          else {
            lVar19 = (long)(int)(uVar15 <<
                                (ulong)(*(uint *)((long)register0x00000008 + -0x9c) & 0x1f));
            param_4 = lVar19 * 0x10;
            uVar12 = -(uVar20 >> 0x1f & 1) & 0xfffffff800000000 | (uVar20 & 0xffffffff) << 3;
            pfVar8 = param_2 + (long)iVar18 * 2;
            unaff_x19 = uVar21 << 3;
            unaff_x21 = param_2 + (long)(int)(uVar16 * 3) * 2;
            unaff_x20 = param_2;
            for (param_3 = (float *)0x0; param_3 != pfVar24; param_3 = (float *)((long)param_3 + 1))
            {
              unaff_x23 = (float *)(*(long *)(param_1 + 0xe) + 4);
              unaff_x24 = unaff_x23;
              unaff_x25 = unaff_x23;
              for (unaff_x22 = (float *)0x0; (int)unaff_x19 != (int)unaff_x22;
                  unaff_x22 = unaff_x22 + 2) {
                pfVar25 = (float *)((long)pfVar22 + (long)unaff_x22);
                fVar40 = -(*unaff_x25 * pfVar25[1]) + unaff_x25[-1] * *pfVar25;
                fVar32 = unaff_x25[-1] * pfVar25[1] + *unaff_x25 * *pfVar25;
                pfVar27 = (float *)((long)pfVar8 + (long)unaff_x22);
                fVar35 = -(*unaff_x24 * pfVar27[1]) + unaff_x24[-1] * *pfVar27;
                fVar33 = unaff_x24[-1] * pfVar27[1] + *unaff_x24 * *pfVar27;
                pfVar28 = (float *)((long)unaff_x21 + (long)unaff_x22);
                fVar39 = -(*unaff_x23 * pfVar28[1]) + unaff_x23[-1] * *pfVar28;
                fVar11 = unaff_x23[-1] * pfVar28[1] + *unaff_x23 * *pfVar28;
                pfVar29 = (float *)((long)unaff_x20 + (long)unaff_x22);
                fVar38 = *pfVar29 - fVar35;
                fVar41 = pfVar29[1] - fVar33;
                fVar35 = fVar35 + *pfVar29;
                fVar33 = fVar33 + pfVar29[1];
                *pfVar29 = fVar35;
                pfVar29[1] = fVar33;
                fVar36 = fVar40 + fVar39;
                fVar37 = fVar32 + fVar11;
                fVar40 = fVar40 - fVar39;
                fVar32 = fVar32 - fVar11;
                *pfVar27 = fVar35 - fVar36;
                pfVar27[1] = fVar33 - fVar37;
                *pfVar29 = fVar36 + *pfVar29;
                pfVar29[1] = fVar37 + pfVar29[1];
                *pfVar25 = fVar38 + fVar32;
                pfVar25[1] = fVar41 - fVar40;
                *pfVar28 = fVar38 - fVar32;
                pfVar28[1] = fVar41 + fVar40;
                unaff_x25 = unaff_x25 + lVar19 * 2;
                unaff_x24 = unaff_x24 + lVar19 * 4;
                unaff_x23 = unaff_x23 + lVar19 * 6;
              }
              pfVar22 = (float *)((long)pfVar22 + uVar12);
              pfVar8 = (float *)((long)pfVar8 + uVar12);
              unaff_x21 = (float *)((long)unaff_x21 + uVar12);
              unaff_x20 = (float *)((long)unaff_x20 + uVar12);
            }
          }
          break;
        case 5:
          uVar10 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98);
          uVar15 = uVar10 << (ulong)(*(uint *)((long)register0x00000008 + -0x9c) & 0x1f);
          uVar12 = (ulong)uVar15;
          lVar19 = *(long *)(param_1 + 0xe);
          pfVar24 = (float *)(lVar19 + (long)(int)uVar15 * (long)(int)uVar16 * 8);
          fVar32 = *pfVar24;
          fVar33 = pfVar24[1];
          pfVar24 = (float *)(lVar19 + (long)(int)uVar15 * (long)(int)uVar16 * 0x10);
          fVar11 = *pfVar24;
          fVar35 = pfVar24[1];
          param_3 = (float *)(ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
          param_4 = -(uVar20 >> 0x1f & 1) & 0xfffffff800000000 | (uVar20 & 0xffffffff) << 3;
          pfVar8 = (float *)(lVar19 + 4);
          pfVar24 = param_2 + (long)iVar18 * 2;
          lVar19 = (-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1) + (long)(int)uVar15
          ;
          unaff_x19 = lVar19 * 8;
          unaff_x20 = param_2 + (long)(int)(uVar16 * 3) * 2;
          unaff_x21 = (float *)(-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | uVar12 << 5);
          unaff_x22 = (float *)(uVar21 << 3);
          unaff_x23 = (float *)(*(long *)((long)register0x00000008 + -0xa8) +
                               (long)(int)(uVar16 << 2) * 8);
          unaff_x24 = param_2;
          for (pfVar25 = (float *)0x0; pfVar25 != param_3; pfVar25 = (float *)((long)pfVar25 + 1)) {
            unaff_x26 = pfVar8;
            unaff_x27 = pfVar8;
            unaff_x28 = pfVar8;
            pfVar27 = pfVar8;
            for (unaff_x25 = (float *)0x0; unaff_x22 != unaff_x25; unaff_x25 = unaff_x25 + 2) {
              pfVar28 = (float *)((long)unaff_x24 + (long)unaff_x25);
              fVar37 = *pfVar28;
              fVar36 = pfVar28[1];
              pfVar29 = (float *)((long)pfVar22 + (long)unaff_x25);
              fVar42 = -(*pfVar27 * pfVar29[1]) + pfVar27[-1] * *pfVar29;
              fVar38 = pfVar27[-1] * pfVar29[1] + *pfVar27 * *pfVar29;
              pfVar30 = (float *)((long)pfVar24 + (long)unaff_x25);
              fVar44 = -(*unaff_x28 * pfVar30[1]) + unaff_x28[-1] * *pfVar30;
              fVar39 = unaff_x28[-1] * pfVar30[1] + *unaff_x28 * *pfVar30;
              pfVar31 = (float *)((long)unaff_x20 + (long)unaff_x25);
              fVar46 = -(*unaff_x27 * pfVar31[1]) + unaff_x27[-1] * *pfVar31;
              fVar40 = unaff_x27[-1] * pfVar31[1] + *unaff_x27 * *pfVar31;
              fVar41 = *(float *)((long)unaff_x23 + (long)unaff_x25 + -4);
              fVar48 = -(*unaff_x26 * *(float *)((long)unaff_x23 + (long)unaff_x25)) +
                       unaff_x26[-1] * fVar41;
              fVar41 = unaff_x26[-1] * *(float *)((long)unaff_x23 + (long)unaff_x25) +
                       *unaff_x26 * fVar41;
              fVar43 = fVar42 + fVar48;
              fVar45 = fVar38 + fVar41;
              fVar42 = fVar42 - fVar48;
              fVar38 = fVar38 - fVar41;
              fVar48 = fVar44 + fVar46;
              fVar47 = fVar39 + fVar40;
              fVar44 = fVar44 - fVar46;
              fVar39 = fVar39 - fVar40;
              *pfVar28 = fVar37 + fVar48 + fVar43;
              pfVar28[1] = fVar36 + fVar47 + fVar45;
              fVar41 = fVar37 + fVar11 * fVar48 + fVar32 * fVar43;
              fVar46 = fVar36 + fVar11 * fVar47 + fVar32 * fVar45;
              fVar49 = fVar35 * fVar39 + fVar33 * fVar38;
              fVar50 = fVar35 * fVar44 + fVar33 * fVar42;
              fVar40 = fVar46 + fVar50;
              unaff_d8 = (ulong)(uint)fVar40;
              *pfVar29 = fVar41 - fVar49;
              pfVar29[1] = fVar40;
              *(float *)((long)unaff_x23 + (long)unaff_x25) = fVar46 - fVar50;
              *(float *)((long)unaff_x23 + (long)unaff_x25 + -4) = fVar49 + fVar41;
              fVar37 = fVar37 + fVar32 * fVar48 + fVar11 * fVar43;
              fVar36 = fVar36 + fVar32 * fVar47 + fVar11 * fVar45;
              fVar40 = fVar38 * -fVar35 + fVar33 * fVar39;
              fVar38 = fVar44 * -fVar33 + fVar35 * fVar42;
              *pfVar30 = fVar40 + fVar37;
              pfVar30[1] = fVar36 + fVar38;
              *pfVar31 = fVar37 - fVar40;
              pfVar31[1] = fVar36 - fVar38;
              pfVar27 = (float *)((long)pfVar27 +
                                 (-(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
              unaff_x28 = (float *)((long)unaff_x28 +
                                   (-(ulong)(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4));
              unaff_x27 = unaff_x27 + lVar19 * 2;
              unaff_x26 = (float *)((long)unaff_x26 + (long)unaff_x21);
            }
            unaff_x24 = (float *)((long)unaff_x24 + param_4);
            pfVar22 = (float *)((long)pfVar22 + param_4);
            pfVar24 = (float *)((long)pfVar24 + param_4);
            unaff_x20 = (float *)((long)unaff_x20 + param_4);
            unaff_x23 = (float *)((long)unaff_x23 + param_4);
          }
        }
      }
      uVar21 = uVar20;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return param_1;
    }
LAB_108b4ac98:
    ___stack_chk_fail();
    iVar18 = (int)param_4;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_108b4ac9c;
    if (param_2 == param_3) break;
    uVar7 = *param_1;
    fVar32 = (float)param_1[1];
    for (uVar21 = 0; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar21; uVar21 = uVar21 + 1) {
      *(ulong *)(param_3 + (long)*(short *)(*(long *)(param_1 + 0xc) + uVar21 * 2) * 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + uVar21 * 2) >> 0x20) * fVar32,
                    (float)*(undefined8 *)(param_2 + uVar21 * 2) * fVar32);
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_2 = param_3;
  } while( true );
  _abort();
  uVar7 = (uint)param_3;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -200) = 0x108b4acf0;
  fVar32 = *param_2;
  iVar13 = 0;
  if (fVar32 == 0.0) {
LAB_108b4adc8:
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    uVar3 = *(undefined8 *)((long)register0x00000008 + -200);
    uVar10 = param_1[8];
    uVar16 = uVar10 >> 0xf;
    if (iVar13 == 0) {
      uVar16 = uVar10 + uVar16 * (uVar7 + iVar13 + -0x8000);
    }
    else {
      param_1[9] = uVar10 + uVar16 * (iVar13 + -0x8000) + param_1[9];
      uVar16 = uVar16 * ((uVar7 + iVar13) - iVar13);
    }
    param_1[8] = uVar16;
    *(float **)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar3;
    uVar7 = param_1[8];
    puVar26 = param_1;
    while (uVar7 < 0x800001) {
      puVar26 = param_1;
      FUN_108b4a4c0(param_1,param_1[9] >> 0x17);
      uVar7 = param_1[8] << 8;
      param_1[8] = uVar7;
      param_1[9] = (param_1[9] & 0x7fffff) << 8;
      param_1[6] = param_1[6] + 8;
    }
    return puVar26;
  }
  uVar10 = (int)fVar32 >> 0x1f;
  fVar33 = (float)-(int)fVar32;
  if (-1 < (int)fVar32) {
    fVar33 = fVar32;
  }
  uVar16 = (0x4000 - iVar18) * (0x7fe0 - uVar7);
  iVar14 = 1;
  fVar11 = fVar33;
  while( true ) {
    fVar11 = (float)((int)fVar11 - 1);
    uVar7 = uVar16 >> 0xf;
    iVar6 = (int)param_3;
    if (uVar16 < 0x8000 || (int)fVar33 <= iVar14) break;
    param_3 = (float *)(ulong)(iVar6 + uVar7 * 2 + 2);
    uVar16 = uVar7 * 2 * iVar18;
    iVar14 = iVar14 + 1;
  }
  if (uVar7 == 0) {
    fVar35 = (float)(((int)(((uint)fVar32 >> 0x1f | 0x8000) - iVar6) >> 1) - 1);
    fVar32 = (float)((int)fVar33 - iVar14);
    if ((int)fVar35 <= (int)fVar33 - iVar14) {
      fVar32 = fVar35;
    }
    iVar13 = uVar10 + iVar6 + (int)fVar32 * 2 + 1;
    uVar7 = (uint)(iVar13 != 0x8000);
    if ((int)fVar35 <= (int)fVar11) {
      fVar11 = fVar35;
    }
    *param_2 = (float)((int)fVar11 + uVar10 + iVar14 ^ uVar10);
  }
  else {
    iVar13 = 0;
    if (-1 < (int)fVar32) {
      iVar13 = uVar7 + 1;
    }
    iVar13 = iVar13 + iVar6;
    uVar7 = uVar7 + 1;
  }
  if ((uVar7 + iVar13 < 0x8001) && (uVar7 != 0)) goto LAB_108b4adc8;
  _abort();
  uVar10 = (uint)param_2;
  *(float **)((long)register0x00000008 + -0xf0) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(code **)((long)register0x00000008 + -0xd8) = FUN_108b4ade0;
  uVar16 = param_1[8] >> 0xf;
  param_1[10] = uVar16;
  uVar15 = 0;
  if (uVar16 != 0) {
    uVar15 = param_1[9] / uVar16;
  }
  uVar16 = 0;
  if (uVar15 + 1 < 0x8001) {
    uVar16 = 0x8000 - (uVar15 + 1);
  }
  if (uVar16 < uVar10) {
    uVar5 = 0;
    puVar26 = (uint *)0x0;
  }
  else {
    uVar9 = (0x4000 - uVar7) * (0x7fe0 - uVar10);
    uVar15 = 1;
    while( true ) {
      uVar10 = (uVar9 >> 0xf) + 1;
      uVar5 = (uint)param_2;
      if (uVar9 < 0x8000) break;
      uVar9 = uVar5 + uVar10 * 2;
      param_2 = (float *)(ulong)uVar9;
      if (uVar16 < uVar9) goto LAB_108b4ae7c;
      uVar9 = (uVar10 * 2 + -2) * uVar7;
      uVar15 = uVar15 + 1;
    }
    uVar15 = uVar15 + (uVar16 - uVar5 >> 1);
    uVar5 = (uVar16 - uVar5 & 0xfffffffe) + uVar5;
LAB_108b4ae7c:
    uVar7 = uVar5 + uVar10;
    if (uVar7 <= uVar16) {
      uVar5 = uVar7;
    }
    if (0x7fff < uVar5) goto LAB_108b4aed4;
    uVar9 = -uVar15;
    if (uVar7 <= uVar16) {
      uVar9 = uVar15;
    }
    puVar26 = (uint *)(ulong)uVar9;
    if (uVar16 < uVar5) goto LAB_108b4aed4;
  }
  uVar10 = uVar10 + uVar5;
  if (0x7fff < uVar10) {
    uVar10 = 0x8000;
  }
  if (uVar16 < uVar10) {
    FUN_108b49db0();
    return puVar26;
  }
LAB_108b4aed4:
  _abort();
  puVar26 = (uint *)0x0;
  uVar7 = 0x1f - (int)LZCOUNT((int)param_1) >> 1;
  uVar10 = 1 << (ulong)(uVar7 & 0x1f);
  do {
    uVar15 = uVar10 + (int)puVar26 * 2 << (ulong)(uVar7 & 0x1f);
    uVar9 = (uint)param_1;
    uVar16 = 0;
    if (uVar15 <= uVar9) {
      uVar16 = uVar10;
    }
    puVar26 = (uint *)(ulong)(uVar16 + (int)puVar26);
    uVar16 = 0;
    if (uVar15 <= uVar9) {
      uVar16 = uVar15;
    }
    param_1 = (uint *)(ulong)(uVar9 - uVar16);
    uVar10 = uVar10 >> 1;
    bVar1 = 0 < (int)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  return puVar26;
}



/* Entry: 108b4ac9c; end: 108b4addf;  */

uint * FUN_108b4ac9c(uint *param_1,float *param_2,float *param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  short *psVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  undefined8 *puVar24;
  float *pfVar25;
  float *pfVar26;
  ulong unaff_x19;
  uint *puVar27;
  float *unaff_x20;
  float *pfVar28;
  float *unaff_x21;
  float *pfVar29;
  float *unaff_x22;
  float *pfVar30;
  float *unaff_x23;
  float *pfVar31;
  float *unaff_x24;
  float *pfVar32;
  float *unaff_x25;
  float *unaff_x26;
  float *unaff_x27;
  float *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  while( true ) {
    iVar20 = (int)param_4;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (param_2 == param_3) break;
    uVar7 = *param_1;
    fVar33 = (float)param_1[1];
    for (uVar11 = 0; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar11; uVar11 = uVar11 + 1) {
      *(ulong *)(param_3 + (long)*(short *)(*(long *)(param_1 + 0xc) + uVar11 * 2) * 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + uVar11 * 2) >> 0x20) * fVar33,
                    (float)*(undefined8 *)(param_2 + uVar11 * 2) * fVar33);
    }
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(float **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(float **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(float **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(float **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(float **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    iVar15 = 1;
    uVar12 = param_1[2];
    *(undefined4 *)((long)register0x00000008 + -0x98) = 1;
    iVar20 = -1;
    lVar21 = 4;
    uVar7 = 0xffffffff;
    psVar19 = (short *)((long)param_1 + 0xe);
    do {
      iVar15 = iVar15 * psVar19[-1];
      *(int *)((long)register0x00000008 + lVar21 + -0x98) = iVar15;
      uVar7 = uVar7 + 1;
      sVar4 = *psVar19;
      iVar20 = iVar20 + 2;
      lVar21 = lVar21 + 4;
      psVar19 = psVar19 + 2;
    } while (sVar4 != 1);
    sVar4 = *(short *)((long)param_1 + (long)iVar20 * 2 + 0xc);
    *(float **)((long)register0x00000008 + -0xa8) = param_3 + 1;
    *(float **)((long)register0x00000008 + -0xb0) = param_3 + 8;
    *(uint *)((long)register0x00000008 + -0x9c) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    uVar11 = (long)sVar4;
    pfVar8 = param_3;
    for (; -1 < (int)uVar7; uVar7 = uVar7 - 1) {
      if (uVar7 == 0) {
        uVar14 = 0;
        uVar22 = 1;
      }
      else {
        uVar14 = (ulong)(uVar7 * 2);
        uVar22 = (ulong)*(short *)((long)param_1 + (ulong)(uVar7 * 2 - 1) * 2 + 0xc);
      }
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar14 * 2 + 0xc);
      if (uVar12 - 2 < 4) {
        uVar18 = (uint)uVar11;
        iVar20 = uVar18 << 1;
        uVar11 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
        pfVar23 = param_3 + (long)(int)uVar18 * 2;
        switch(uVar12) {
        case 2:
          if (uVar18 != 4) {
            _abort();
            goto LAB_108b4ac98;
          }
          puVar24 = *(undefined8 **)((long)register0x00000008 + -0xb0);
          for (uVar12 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98) &
                        ((int)*(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98) >> 0x1f
                        ^ 0xffffffffU); uVar12 != 0; uVar12 = uVar12 - 1) {
            fVar34 = (*(float *)(puVar24 + 1) + *(float *)((long)puVar24 + 0xc)) * 0.70710677;
            fVar33 = (*(float *)((long)puVar24 + 0xc) - *(float *)(puVar24 + 1)) * 0.70710677;
            *(float *)(puVar24 + 1) = *(float *)(puVar24 + -3) - fVar34;
            *(float *)((long)puVar24 + 0xc) = *(float *)((long)puVar24 + -0x14) - fVar33;
            *(float *)(puVar24 + -3) = *(float *)(puVar24 + -3) + fVar34;
            *(float *)((long)puVar24 + -0x14) = fVar33 + *(float *)((long)puVar24 + -0x14);
            fVar34 = *(float *)(puVar24 + 2);
            fVar33 = *(float *)((long)puVar24 + 0x14);
            *(float *)(puVar24 + 2) = *(float *)(puVar24 + -2) - fVar33;
            *(float *)((long)puVar24 + 0x14) = fVar34 + *(float *)((long)puVar24 + -0xc);
            *(float *)(puVar24 + -2) = fVar33 + *(float *)(puVar24 + -2);
            *(float *)((long)puVar24 + -0xc) = *(float *)((long)puVar24 + -0xc) - fVar34;
            fVar13 = (*(float *)((long)puVar24 + 0x1c) - *(float *)(puVar24 + 3)) * 0.70710677;
            fVar33 = (*(float *)((long)puVar24 + 0x1c) + *(float *)(puVar24 + 3)) * -0.70710677;
            uVar2 = puVar24[-4];
            fVar34 = (float)uVar2;
            puVar24[-4] = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                   *(float *)((long)puVar24 + -0x1c),(float)*puVar24 + fVar34);
            fVar36 = (float)puVar24[-1];
            *(float *)(puVar24 + 3) = fVar36 - fVar13;
            *(float *)((long)puVar24 + 0x1c) = *(float *)((long)puVar24 + -4) - fVar33;
            *puVar24 = CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)*puVar24 >> 0x20),
                                fVar34 - (float)*puVar24);
            puVar24[-1] = CONCAT44((float)((ulong)puVar24[-1] >> 0x20) + fVar33,fVar36 + fVar13);
            puVar24 = puVar24 + 8;
          }
          break;
        case 3:
          uVar12 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98);
          uVar17 = uVar12 << (ulong)(*(uint *)((long)register0x00000008 + -0x9c) & 0x1f);
          pfVar8 = (float *)(long)(int)uVar18;
          fVar33 = *(float *)(*(long *)(param_1 + 0xe) + (long)(int)uVar17 * (long)(int)uVar18 * 8 +
                             4);
          param_4 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar17 << 4;
          uVar14 = -(uVar22 >> 0x1f & 1) & 0xfffffff800000000 | (uVar22 & 0xffffffff) << 3;
          pfVar9 = (float *)(*(long *)(param_1 + 0xe) + 4);
          pfVar25 = param_3 + (long)iVar20 * 2;
          unaff_x19 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3;
          unaff_x20 = *(float **)((long)register0x00000008 + -0xa8);
          for (uVar11 = 0; pfVar28 = unaff_x20, pfVar29 = pfVar9, pfVar30 = pfVar25,
              pfVar31 = pfVar9, pfVar32 = pfVar23, pfVar26 = pfVar8,
              uVar11 != (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)); uVar11 = uVar11 + 1) {
            do {
              fVar36 = -(*pfVar29 * pfVar32[1]) + pfVar29[-1] * *pfVar32;
              fVar34 = pfVar29[-1] * pfVar32[1] + *pfVar29 * *pfVar32;
              fVar39 = -(*pfVar31 * pfVar30[1]) + pfVar31[-1] * *pfVar30;
              fVar13 = pfVar31[-1] * pfVar30[1] + *pfVar31 * *pfVar30;
              fVar41 = fVar36 + fVar39;
              fVar37 = fVar34 + fVar13;
              fVar38 = *pfVar28;
              *pfVar32 = pfVar28[-1] - fVar41 * 0.5;
              pfVar32[1] = fVar38 - fVar37 * 0.5;
              fVar36 = fVar33 * (fVar36 - fVar39);
              fVar34 = fVar33 * (fVar34 - fVar13);
              pfVar28[-1] = fVar41 + pfVar28[-1];
              *pfVar28 = fVar37 + *pfVar28;
              fVar13 = pfVar32[1];
              unaff_x23 = pfVar30 + 2;
              *pfVar30 = fVar34 + *pfVar32;
              pfVar30[1] = fVar13 - fVar36;
              unaff_x25 = pfVar32 + 2;
              *pfVar32 = *pfVar32 - fVar34;
              pfVar32[1] = fVar36 + pfVar32[1];
              unaff_x24 = (float *)((long)pfVar31 + param_4);
              unaff_x22 = (float *)((long)pfVar29 + unaff_x19);
              unaff_x21 = pfVar28 + 2;
              pfVar26 = (float *)((long)pfVar26 + -1);
              pfVar28 = unaff_x21;
              pfVar29 = unaff_x22;
              pfVar30 = unaff_x23;
              pfVar31 = unaff_x24;
              pfVar32 = unaff_x25;
            } while (pfVar26 != (float *)0x0);
            pfVar23 = (float *)((long)pfVar23 + uVar14);
            pfVar25 = (float *)((long)pfVar25 + uVar14);
            unaff_x20 = (float *)((long)unaff_x20 + uVar14);
            unaff_x26 = (float *)0x0;
          }
          break;
        case 4:
          uVar17 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98);
          param_4 = (ulong)uVar17;
          uVar12 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          pfVar25 = (float *)(ulong)uVar12;
          pfVar9 = param_3;
          if (uVar18 == 1) {
            while (uVar12 != 0) {
              fVar41 = (float)*(undefined8 *)(pfVar9 + 2);
              fVar37 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
              fVar33 = (float)*(undefined8 *)pfVar9;
              fVar34 = (float)*(undefined8 *)(pfVar9 + 4);
              fVar40 = fVar33 + fVar34;
              fVar13 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
              fVar36 = (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
              fVar42 = fVar13 + fVar36;
              fVar33 = fVar33 - fVar34;
              fVar13 = fVar13 - fVar36;
              fVar38 = (float)*(undefined8 *)(pfVar9 + 6);
              fVar34 = fVar41 + fVar38;
              fVar39 = (float)((ulong)*(undefined8 *)(pfVar9 + 6) >> 0x20);
              fVar36 = fVar37 + fVar39;
              fVar37 = fVar37 - fVar39;
              auVar35._4_4_ = fVar37;
              auVar35._0_4_ = fVar41 - fVar38;
              auVar35._8_8_ = 0;
              auVar35 = NEON_rev64(auVar35,4);
              *(ulong *)(pfVar9 + 2) = CONCAT44(fVar13 - auVar35._4_4_,fVar33 + fVar37);
              *(ulong *)pfVar9 = CONCAT44(fVar42 + fVar36,fVar40 + fVar34);
              pfVar9[6] = fVar33 - fVar37;
              pfVar9[7] = fVar13 + auVar35._4_4_;
              pfVar9[4] = fVar40 - fVar34;
              pfVar9[5] = fVar42 - fVar36;
              uVar12 = (int)pfVar25 - 1;
              pfVar25 = (float *)(ulong)uVar12;
              pfVar9 = pfVar9 + 8;
            }
          }
          else {
            lVar21 = (long)(int)(uVar17 <<
                                (ulong)(*(uint *)((long)register0x00000008 + -0x9c) & 0x1f));
            param_4 = lVar21 * 0x10;
            uVar14 = -(uVar22 >> 0x1f & 1) & 0xfffffff800000000 | (uVar22 & 0xffffffff) << 3;
            pfVar9 = param_3 + (long)iVar20 * 2;
            unaff_x19 = uVar11 << 3;
            unaff_x21 = param_3 + (long)(int)(uVar18 * 3) * 2;
            unaff_x20 = param_3;
            for (pfVar8 = (float *)0x0; pfVar8 != pfVar25; pfVar8 = (float *)((long)pfVar8 + 1)) {
              unaff_x23 = (float *)(*(long *)(param_1 + 0xe) + 4);
              unaff_x24 = unaff_x23;
              unaff_x25 = unaff_x23;
              for (unaff_x22 = (float *)0x0; (int)unaff_x19 != (int)unaff_x22;
                  unaff_x22 = unaff_x22 + 2) {
                pfVar26 = (float *)((long)pfVar23 + (long)unaff_x22);
                fVar41 = -(*unaff_x25 * pfVar26[1]) + unaff_x25[-1] * *pfVar26;
                fVar33 = unaff_x25[-1] * pfVar26[1] + *unaff_x25 * *pfVar26;
                pfVar28 = (float *)((long)pfVar9 + (long)unaff_x22);
                fVar36 = -(*unaff_x24 * pfVar28[1]) + unaff_x24[-1] * *pfVar28;
                fVar34 = unaff_x24[-1] * pfVar28[1] + *unaff_x24 * *pfVar28;
                pfVar29 = (float *)((long)unaff_x21 + (long)unaff_x22);
                fVar40 = -(*unaff_x23 * pfVar29[1]) + unaff_x23[-1] * *pfVar29;
                fVar13 = unaff_x23[-1] * pfVar29[1] + *unaff_x23 * *pfVar29;
                pfVar30 = (float *)((long)unaff_x20 + (long)unaff_x22);
                fVar39 = *pfVar30 - fVar36;
                fVar42 = pfVar30[1] - fVar34;
                fVar36 = fVar36 + *pfVar30;
                fVar34 = fVar34 + pfVar30[1];
                *pfVar30 = fVar36;
                pfVar30[1] = fVar34;
                fVar37 = fVar41 + fVar40;
                fVar38 = fVar33 + fVar13;
                fVar41 = fVar41 - fVar40;
                fVar33 = fVar33 - fVar13;
                *pfVar28 = fVar36 - fVar37;
                pfVar28[1] = fVar34 - fVar38;
                *pfVar30 = fVar37 + *pfVar30;
                pfVar30[1] = fVar38 + pfVar30[1];
                *pfVar26 = fVar39 + fVar33;
                pfVar26[1] = fVar42 - fVar41;
                *pfVar29 = fVar39 - fVar33;
                pfVar29[1] = fVar42 + fVar41;
                unaff_x25 = unaff_x25 + lVar21 * 2;
                unaff_x24 = unaff_x24 + lVar21 * 4;
                unaff_x23 = unaff_x23 + lVar21 * 6;
              }
              pfVar23 = (float *)((long)pfVar23 + uVar14);
              pfVar9 = (float *)((long)pfVar9 + uVar14);
              unaff_x21 = (float *)((long)unaff_x21 + uVar14);
              unaff_x20 = (float *)((long)unaff_x20 + uVar14);
            }
          }
          break;
        case 5:
          uVar12 = *(uint *)((long)register0x00000008 + (ulong)uVar7 * 4 + -0x98);
          uVar17 = uVar12 << (ulong)(*(uint *)((long)register0x00000008 + -0x9c) & 0x1f);
          uVar14 = (ulong)uVar17;
          lVar21 = *(long *)(param_1 + 0xe);
          pfVar8 = (float *)(lVar21 + (long)(int)uVar17 * (long)(int)uVar18 * 8);
          fVar33 = *pfVar8;
          fVar34 = pfVar8[1];
          pfVar8 = (float *)(lVar21 + (long)(int)uVar17 * (long)(int)uVar18 * 0x10);
          fVar13 = *pfVar8;
          fVar36 = pfVar8[1];
          pfVar8 = (float *)(ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU));
          param_4 = -(uVar22 >> 0x1f & 1) & 0xfffffff800000000 | (uVar22 & 0xffffffff) << 3;
          pfVar9 = (float *)(lVar21 + 4);
          pfVar25 = param_3 + (long)iVar20 * 2;
          lVar21 = (-(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) + (long)(int)uVar17
          ;
          unaff_x19 = lVar21 * 8;
          unaff_x20 = param_3 + (long)(int)(uVar18 * 3) * 2;
          unaff_x21 = (float *)(-(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | uVar14 << 5);
          unaff_x22 = (float *)(uVar11 << 3);
          unaff_x23 = (float *)(*(long *)((long)register0x00000008 + -0xa8) +
                               (long)(int)(uVar18 << 2) * 8);
          unaff_x24 = param_3;
          for (pfVar26 = (float *)0x0; pfVar26 != pfVar8; pfVar26 = (float *)((long)pfVar26 + 1)) {
            unaff_x26 = pfVar9;
            unaff_x27 = pfVar9;
            unaff_x28 = pfVar9;
            pfVar28 = pfVar9;
            for (unaff_x25 = (float *)0x0; unaff_x22 != unaff_x25; unaff_x25 = unaff_x25 + 2) {
              pfVar29 = (float *)((long)unaff_x24 + (long)unaff_x25);
              fVar38 = *pfVar29;
              fVar37 = pfVar29[1];
              pfVar30 = (float *)((long)pfVar23 + (long)unaff_x25);
              fVar43 = -(*pfVar28 * pfVar30[1]) + pfVar28[-1] * *pfVar30;
              fVar39 = pfVar28[-1] * pfVar30[1] + *pfVar28 * *pfVar30;
              pfVar31 = (float *)((long)pfVar25 + (long)unaff_x25);
              fVar45 = -(*unaff_x28 * pfVar31[1]) + unaff_x28[-1] * *pfVar31;
              fVar40 = unaff_x28[-1] * pfVar31[1] + *unaff_x28 * *pfVar31;
              pfVar32 = (float *)((long)unaff_x20 + (long)unaff_x25);
              fVar47 = -(*unaff_x27 * pfVar32[1]) + unaff_x27[-1] * *pfVar32;
              fVar41 = unaff_x27[-1] * pfVar32[1] + *unaff_x27 * *pfVar32;
              fVar42 = *(float *)((long)unaff_x23 + (long)unaff_x25 + -4);
              fVar49 = -(*unaff_x26 * *(float *)((long)unaff_x23 + (long)unaff_x25)) +
                       unaff_x26[-1] * fVar42;
              fVar42 = unaff_x26[-1] * *(float *)((long)unaff_x23 + (long)unaff_x25) +
                       *unaff_x26 * fVar42;
              fVar44 = fVar43 + fVar49;
              fVar46 = fVar39 + fVar42;
              fVar43 = fVar43 - fVar49;
              fVar39 = fVar39 - fVar42;
              fVar49 = fVar45 + fVar47;
              fVar48 = fVar40 + fVar41;
              fVar45 = fVar45 - fVar47;
              fVar40 = fVar40 - fVar41;
              *pfVar29 = fVar38 + fVar49 + fVar44;
              pfVar29[1] = fVar37 + fVar48 + fVar46;
              fVar42 = fVar38 + fVar13 * fVar49 + fVar33 * fVar44;
              fVar47 = fVar37 + fVar13 * fVar48 + fVar33 * fVar46;
              fVar50 = fVar36 * fVar40 + fVar34 * fVar39;
              fVar51 = fVar36 * fVar45 + fVar34 * fVar43;
              fVar41 = fVar47 + fVar51;
              unaff_d8 = (ulong)(uint)fVar41;
              *pfVar30 = fVar42 - fVar50;
              pfVar30[1] = fVar41;
              *(float *)((long)unaff_x23 + (long)unaff_x25) = fVar47 - fVar51;
              *(float *)((long)unaff_x23 + (long)unaff_x25 + -4) = fVar50 + fVar42;
              fVar38 = fVar38 + fVar33 * fVar49 + fVar13 * fVar44;
              fVar37 = fVar37 + fVar33 * fVar48 + fVar13 * fVar46;
              fVar41 = fVar39 * -fVar36 + fVar34 * fVar40;
              fVar39 = fVar45 * -fVar34 + fVar36 * fVar43;
              *pfVar31 = fVar41 + fVar38;
              pfVar31[1] = fVar37 + fVar39;
              *pfVar32 = fVar38 - fVar41;
              pfVar32[1] = fVar37 - fVar39;
              pfVar28 = (float *)((long)pfVar28 +
                                 (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
              unaff_x28 = (float *)((long)unaff_x28 +
                                   (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              unaff_x27 = unaff_x27 + lVar21 * 2;
              unaff_x26 = (float *)((long)unaff_x26 + (long)unaff_x21);
            }
            unaff_x24 = (float *)((long)unaff_x24 + param_4);
            pfVar23 = (float *)((long)pfVar23 + param_4);
            pfVar25 = (float *)((long)pfVar25 + param_4);
            unaff_x20 = (float *)((long)unaff_x20 + param_4);
            unaff_x23 = (float *)((long)unaff_x23 + param_4);
          }
        }
      }
      uVar11 = uVar22;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return param_1;
    }
LAB_108b4ac98:
    unaff_x30 = FUN_108b4ac9c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_2 = param_3;
    param_3 = pfVar8;
  }
  _abort();
  uVar7 = (uint)param_3;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x108b4acf0;
  fVar33 = *param_2;
  iVar15 = 0;
  if (fVar33 == 0.0) {
LAB_108b4adc8:
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar12 = param_1[8];
    uVar18 = uVar12 >> 0xf;
    if (iVar15 == 0) {
      uVar18 = uVar12 + uVar18 * (uVar7 + iVar15 + -0x8000);
    }
    else {
      param_1[9] = uVar12 + uVar18 * (iVar15 + -0x8000) + param_1[9];
      uVar18 = uVar18 * ((uVar7 + iVar15) - iVar15);
    }
    param_1[8] = uVar18;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar3;
    uVar7 = param_1[8];
    puVar27 = param_1;
    while (uVar7 < 0x800001) {
      puVar27 = param_1;
      FUN_108b4a4c0(param_1,param_1[9] >> 0x17);
      uVar7 = param_1[8] << 8;
      param_1[8] = uVar7;
      param_1[9] = (param_1[9] & 0x7fffff) << 8;
      param_1[6] = param_1[6] + 8;
    }
    return puVar27;
  }
  uVar12 = (int)fVar33 >> 0x1f;
  fVar34 = (float)-(int)fVar33;
  if (-1 < (int)fVar33) {
    fVar34 = fVar33;
  }
  uVar18 = (0x4000 - iVar20) * (0x7fe0 - uVar7);
  iVar16 = 1;
  fVar13 = fVar34;
  while( true ) {
    fVar13 = (float)((int)fVar13 - 1);
    uVar7 = uVar18 >> 0xf;
    iVar6 = (int)param_3;
    if (uVar18 < 0x8000 || (int)fVar34 <= iVar16) break;
    param_3 = (float *)(ulong)(iVar6 + uVar7 * 2 + 2);
    uVar18 = uVar7 * 2 * iVar20;
    iVar16 = iVar16 + 1;
  }
  if (uVar7 == 0) {
    fVar36 = (float)(((int)(((uint)fVar33 >> 0x1f | 0x8000) - iVar6) >> 1) - 1);
    fVar33 = (float)((int)fVar34 - iVar16);
    if ((int)fVar36 <= (int)fVar34 - iVar16) {
      fVar33 = fVar36;
    }
    iVar15 = uVar12 + iVar6 + (int)fVar33 * 2 + 1;
    uVar7 = (uint)(iVar15 != 0x8000);
    if ((int)fVar36 <= (int)fVar13) {
      fVar13 = fVar36;
    }
    *param_2 = (float)((int)fVar13 + uVar12 + iVar16 ^ uVar12);
  }
  else {
    iVar15 = 0;
    if (-1 < (int)fVar33) {
      iVar15 = uVar7 + 1;
    }
    iVar15 = iVar15 + iVar6;
    uVar7 = uVar7 + 1;
  }
  if ((uVar7 + iVar15 < 0x8001) && (uVar7 != 0)) goto LAB_108b4adc8;
  _abort();
  uVar12 = (uint)param_2;
  *(float **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_108b4ade0;
  uVar18 = param_1[8] >> 0xf;
  param_1[10] = uVar18;
  uVar17 = 0;
  if (uVar18 != 0) {
    uVar17 = param_1[9] / uVar18;
  }
  uVar18 = 0;
  if (uVar17 + 1 < 0x8001) {
    uVar18 = 0x8000 - (uVar17 + 1);
  }
  if (uVar18 < uVar12) {
    uVar5 = 0;
    puVar27 = (uint *)0x0;
  }
  else {
    uVar10 = (0x4000 - uVar7) * (0x7fe0 - uVar12);
    uVar17 = 1;
    while( true ) {
      uVar12 = (uVar10 >> 0xf) + 1;
      uVar5 = (uint)param_2;
      if (uVar10 < 0x8000) break;
      uVar10 = uVar5 + uVar12 * 2;
      param_2 = (float *)(ulong)uVar10;
      if (uVar18 < uVar10) goto LAB_108b4ae7c;
      uVar10 = (uVar12 * 2 + -2) * uVar7;
      uVar17 = uVar17 + 1;
    }
    uVar17 = uVar17 + (uVar18 - uVar5 >> 1);
    uVar5 = (uVar18 - uVar5 & 0xfffffffe) + uVar5;
LAB_108b4ae7c:
    uVar7 = uVar5 + uVar12;
    if (uVar7 <= uVar18) {
      uVar5 = uVar7;
    }
    if (0x7fff < uVar5) goto LAB_108b4aed4;
    uVar10 = -uVar17;
    if (uVar7 <= uVar18) {
      uVar10 = uVar17;
    }
    puVar27 = (uint *)(ulong)uVar10;
    if (uVar18 < uVar5) goto LAB_108b4aed4;
  }
  uVar12 = uVar12 + uVar5;
  if (0x7fff < uVar12) {
    uVar12 = 0x8000;
  }
  if (uVar18 < uVar12) {
    FUN_108b49db0();
    return puVar27;
  }
LAB_108b4aed4:
  _abort();
  puVar27 = (uint *)0x0;
  uVar7 = 0x1f - (int)LZCOUNT((int)param_1) >> 1;
  uVar12 = 1 << (ulong)(uVar7 & 0x1f);
  do {
    uVar17 = uVar12 + (int)puVar27 * 2 << (ulong)(uVar7 & 0x1f);
    uVar10 = (uint)param_1;
    uVar18 = 0;
    if (uVar17 <= uVar10) {
      uVar18 = uVar12;
    }
    puVar27 = (uint *)(ulong)(uVar18 + (int)puVar27);
    uVar18 = 0;
    if (uVar17 <= uVar10) {
      uVar18 = uVar17;
    }
    param_1 = (uint *)(ulong)(uVar10 - uVar18);
    uVar12 = uVar12 >> 1;
    bVar1 = 0 < (int)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  return puVar27;
}



/* Entry: 108b4ade0; end: 108b4aed7;  */

int FUN_108b4ade0(ulong param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = *(uint *)(param_1 + 0x20) >> 0xf;
  *(uint *)(param_1 + 0x28) = uVar6;
  uVar5 = 0;
  if (uVar6 != 0) {
    uVar5 = *(uint *)(param_1 + 0x24) / uVar6;
  }
  uVar6 = 0;
  if (uVar5 + 1 < 0x8001) {
    uVar6 = 0x8000 - (uVar5 + 1);
  }
  if (uVar6 < param_2) {
    uVar5 = 0;
    iVar8 = 0;
  }
  else {
    iVar7 = 1;
    uVar3 = (0x4000 - param_3) * (0x7fe0 - param_2);
    uVar5 = param_2;
    while (param_2 = (uVar3 >> 0xf) + 1, 0x7fff < uVar3) {
      uVar2 = uVar5 + param_2 * 2;
      if (uVar6 < uVar2) goto LAB_108b4ae7c;
      iVar7 = iVar7 + 1;
      uVar5 = uVar2;
      uVar3 = (param_2 * 2 + -2) * param_3;
    }
    iVar7 = iVar7 + (uVar6 - uVar5 >> 1);
    uVar5 = (uVar6 - uVar5 & 0xfffffffe) + uVar5;
LAB_108b4ae7c:
    uVar3 = uVar5 + param_2;
    if (uVar3 <= uVar6) {
      uVar5 = uVar3;
    }
    if (0x7fff < uVar5) goto LAB_108b4aed4;
    iVar8 = -iVar7;
    if (uVar3 <= uVar6) {
      iVar8 = iVar7;
    }
    if (uVar6 < uVar5) goto LAB_108b4aed4;
  }
  param_2 = param_2 + uVar5;
  if (0x7fff < param_2) {
    param_2 = 0x8000;
  }
  if (uVar6 < param_2) {
    FUN_108b49db0(param_1,uVar5,param_2,0x8000);
    return iVar8;
  }
LAB_108b4aed4:
  _abort();
  iVar7 = 0;
  uVar6 = 0x1f - (int)LZCOUNT((int)param_1) >> 1;
  uVar5 = 1 << (ulong)(uVar6 & 0x1f);
  do {
    uVar2 = uVar5 + iVar7 * 2 << (ulong)(uVar6 & 0x1f);
    uVar4 = (uint)param_1;
    uVar3 = 0;
    if (uVar2 <= uVar4) {
      uVar3 = uVar5;
    }
    iVar7 = uVar3 + iVar7;
    uVar3 = 0;
    if (uVar2 <= uVar4) {
      uVar3 = uVar2;
    }
    param_1 = (ulong)(uVar4 - uVar3);
    uVar5 = uVar5 >> 1;
    bVar1 = 0 < (int)uVar6;
    uVar6 = uVar6 - 1;
  } while (bVar1);
  return iVar7;
}



/* Entry: 108b4aed8; end: 108b4af27;  */

void FUN_108b4aed8(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar6 = 0x1f - (int)LZCOUNT(param_1) >> 1;
  uVar5 = 1 << (ulong)(uVar6 & 0x1f);
  do {
    uVar3 = uVar5 + iVar4 * 2 << (ulong)(uVar6 & 0x1f);
    uVar2 = 0;
    if (uVar3 <= param_1) {
      uVar2 = uVar5;
    }
    iVar4 = uVar2 + iVar4;
    uVar2 = 0;
    if (uVar3 <= param_1) {
      uVar2 = uVar3;
    }
    param_1 = param_1 - uVar2;
    uVar5 = uVar5 >> 1;
    bVar1 = 0 < (int)uVar6;
    uVar6 = uVar6 - 1;
  } while (bVar1);
  return;
}



/* Entry: 108b4af28; end: 108b4b3c7;  */

void FUN_108b4af28(uint *param_1,long param_2,float *param_3,long param_4,ulong param_5,uint param_6
                  ,undefined8 param_7)

{
  float *pfVar1;
  long lVar2;
  short *psVar3;
  uint *puVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long lVar19;
  long lVar20;
  float *pfVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  float *pfVar26;
  ulong uVar27;
  undefined8 unaff_x26;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float afStack_b0 [22];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(uint **)(param_1 + (long)(int)param_6 * 2 + 2);
  fVar28 = (float)puVar4[1];
  uVar18 = (ulong)*param_1;
  pfVar26 = *(float **)(param_1 + 10);
  param_6 = param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    uVar14 = (int)uVar18 >> 1;
    uVar18 = (ulong)uVar14;
    if (param_6 == 0) break;
    pfVar26 = pfVar26 + (int)uVar14;
    param_6 = param_6 - 1;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2) + 0xf &
             0xfffffffffffffff0);
  lVar2 = (extraout_x12 << 0x20) >> 0x22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar21 = (float *)((long)afStack_b0 + (-extraout_x12_00 - extraout_x8) + 0x50);
  lVar22 = 0;
  iVar8 = (int)param_5;
  uVar25 = iVar8 >> 1;
  lVar13 = param_2 + (long)(int)uVar25 * 4;
  uVar15 = -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2;
  lVar20 = param_2 + (long)(int)uVar14 * 4;
  uVar9 = iVar8 + 3 >> 2;
  lVar7 = uVar15 - 4;
  lVar5 = extraout_x8_00 + 4;
  lVar10 = param_2 + (long)(int)uVar14 * -4;
  uVar11 = uVar9 & (iVar8 + 3 >> 0x1f ^ 0xffffffffU);
  for (uVar12 = uVar11; puVar17 = (undefined4 *)(lVar5 + lVar22), uVar12 != 0; uVar12 = uVar12 - 1)
  {
    fVar29 = *(float *)(param_4 + lVar7);
    fVar33 = *(float *)(param_4 + (long)(int)uVar25 * 4 + lVar22);
    puVar17[-1] = *(float *)(lVar20 + lVar7) * fVar33 +
                  fVar29 * *(float *)(lVar13 + (long)(int)uVar14 * 4 + lVar22);
    *(float *)(lVar5 + lVar22) =
         -(fVar29 * *(float *)(param_2 + lVar7)) + fVar33 * *(float *)(lVar13 + lVar22);
    lVar22 = lVar22 + 8;
    lVar7 = lVar7 + -8;
  }
  uVar25 = (int)extraout_x12 >> 2;
  lVar19 = param_2 + lVar22;
  lVar13 = lVar10 + lVar22;
  lVar20 = (lVar20 - lVar22) + -4;
  lVar22 = (param_2 + (long)(int)uVar14 * 8 + -4) - lVar22;
  for (; (int)uVar11 < (int)(uVar25 - uVar9); uVar11 = uVar11 + 1) {
    uVar30 = *(undefined4 *)(lVar19 + uVar15);
    lVar22 = lVar22 + -8;
    puVar17[-1] = *(undefined4 *)(lVar20 + uVar15);
    *puVar17 = uVar30;
    puVar17 = puVar17 + 2;
    lVar20 = lVar20 + -8;
    lVar13 = lVar13 + 8;
    lVar19 = lVar19 + 8;
  }
  lVar23 = 0;
  lVar24 = 0;
  pfVar16 = (float *)(lVar22 + uVar15);
  for (; uVar9 = (uint)lVar10, (int)uVar11 < (int)uVar25; uVar11 = uVar11 + 1) {
    lVar7 = (long)puVar17 + lVar23;
    param_5 = uVar15 + lVar24;
    lVar10 = uVar15 + lVar23;
    fVar29 = *(float *)(param_4 + lVar23);
    fVar33 = *(float *)(param_4 + (long)iVar8 * 4 + -4 + lVar24);
    *(float *)(lVar7 + -4) =
         *(float *)(lVar20 + param_5) * fVar33 - fVar29 * *(float *)(lVar13 + lVar10);
    *(float *)((long)puVar17 + lVar23) = fVar29 * *pfVar16 + fVar33 * *(float *)(lVar19 + lVar10);
    lVar24 = lVar24 + -8;
    lVar23 = lVar23 + 8;
    pfVar16 = pfVar16 + -2;
  }
  uVar27 = (ulong)(uVar25 & ((int)extraout_x12 >> 0x1f ^ 0xffffffffU));
  pfVar16 = pfVar26;
  for (uVar15 = 0; uVar27 != uVar15; uVar15 = uVar15 + 1) {
    uVar34 = *(undefined8 *)(extraout_x8_00 + uVar15 * 8);
    fVar29 = (float)uVar34;
    fVar33 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_rev64(CONCAT44(fVar33 * -pfVar16[lVar2],fVar29 * pfVar16[lVar2]),4);
    *(ulong *)(pfVar21 + (long)*(short *)(*(long *)(puVar4 + 0xc) + uVar15 * 2) * 2) =
         CONCAT44(((float)((ulong)uVar34 >> 0x20) + fVar33 * *pfVar16) * fVar28,
                  ((float)uVar34 + fVar29 * *pfVar16) * fVar28);
    pfVar16 = pfVar16 + 1;
  }
  pfVar6 = pfVar21;
  FUN_108b4a5b0();
  uVar11 = (uint)lVar5;
  uVar25 = (uint)param_7;
  pfVar16 = param_3 + (int)((uVar14 - 1) * uVar25);
  pfVar1 = pfVar21 + 1;
  for (; uVar27 != 0; uVar27 = uVar27 - 1) {
    fVar28 = *pfVar26;
    fVar29 = pfVar26[lVar2];
    fVar31 = pfVar1[-1];
    fVar33 = *pfVar1;
    pfVar26 = pfVar26 + 1;
    *param_3 = -(fVar28 * fVar31) + fVar29 * fVar33;
    *pfVar16 = fVar28 * fVar33 + fVar29 * fVar31;
    pfVar1 = pfVar1 + 2;
    param_3 = (float *)((long)param_3 +
                       (-(ulong)((uVar25 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                       (ulong)(uVar25 << 1) << 2));
    pfVar16 = pfVar16 + -(long)(int)(uVar25 << 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    *(undefined8 *)(pfVar21 + -0x14) = unaff_x26;
    pfVar21[-0x12] = 0.0;
    pfVar21[-0x11] = 0.0;
    *(ulong *)(pfVar21 + -0x10) = uVar18;
    *(long *)(pfVar21 + -0xe) = lVar2;
    *(float **)(pfVar21 + -0xc) = pfVar26;
    *(float **)(pfVar21 + -10) = pfVar21;
    *(undefined8 *)(pfVar21 + -8) = param_7;
    *(float **)(pfVar21 + -6) = param_3;
    *(undefined1 **)(pfVar21 + -4) = &stack0xfffffffffffffff0;
    pfVar21[-2] = 1.08752035e-33;
    pfVar21[-1] = 1.4013e-45;
    pfVar26 = *(float **)(puVar4 + 10);
    uVar14 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    uVar18 = (ulong)*puVar4;
    while( true ) {
      iVar8 = (int)uVar18;
      uVar25 = iVar8 >> 1;
      if (uVar14 == 0) break;
      pfVar26 = pfVar26 + (int)uVar25;
      uVar14 = uVar14 - 1;
      uVar18 = (ulong)uVar25;
    }
    pfVar21 = pfVar6 + (int)((uVar25 - 1) * uVar11);
    lVar5 = *(long *)(puVar4 + (long)(int)uVar9 * 2 + 2);
    lVar20 = (long)(uVar18 << 0x20) >> 0x22;
    lVar13 = lVar7 + (long)((int)param_5 >> 1) * 4;
    psVar3 = *(short **)(lVar5 + 0x30);
    pfVar16 = pfVar26;
    for (uVar18 = (ulong)(iVar8 >> 2 & (iVar8 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
        uVar18 = uVar18 - 1) {
      fVar28 = *pfVar6;
      fVar29 = *pfVar21;
      fVar33 = pfVar16[lVar20];
      fVar31 = *pfVar16;
      pfVar1 = (float *)(lVar13 + (long)*psVar3 * 8);
      *pfVar1 = -(fVar33 * fVar29) + fVar31 * fVar28;
      pfVar1[1] = fVar28 * fVar33 + fVar31 * fVar29;
      pfVar21 = pfVar21 + -(long)(int)(uVar11 << 1);
      pfVar6 = (float *)((long)pfVar6 +
                        (-(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                        (ulong)(uVar11 << 1) << 2));
      psVar3 = psVar3 + 1;
      pfVar16 = pfVar16 + 1;
    }
    FUN_108b4a5b0(lVar5,lVar13);
    iVar8 = (iVar8 >> 2) + 1;
    lVar20 = lVar20 * 4;
    lVar22 = (-(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2) - 4;
    lVar5 = lVar7 + ((long)(param_5 << 0x20) >> 0x21) * 4;
    pfVar21 = (float *)(lVar22 + lVar5);
    pfVar16 = (float *)(lVar5 + 4);
    lVar5 = lVar20;
    for (lVar13 = 0; lVar5 = lVar5 + -4,
        (ulong)(iVar8 >> 1 & (iVar8 >> 0x1f ^ 0xffffffffU)) << 2 != lVar13; lVar13 = lVar13 + 4) {
      fVar28 = pfVar16[-1];
      fVar33 = *(float *)((long)pfVar26 + lVar13);
      fVar32 = *(float *)((long)pfVar26 + lVar20);
      fVar31 = pfVar21[-1];
      fVar29 = *pfVar21;
      pfVar16[-1] = fVar28 * fVar32 + fVar33 * *pfVar16;
      *pfVar21 = -(fVar33 * fVar28) + fVar32 * *pfVar16;
      fVar28 = *(float *)((long)pfVar26 + lVar5);
      fVar33 = *(float *)((long)pfVar26 + lVar22);
      lVar20 = lVar20 + 4;
      pfVar21[-1] = fVar31 * fVar33 + fVar28 * fVar29;
      *pfVar16 = -(fVar28 * fVar31) + fVar33 * fVar29;
      lVar22 = lVar22 + -4;
      pfVar21 = pfVar21 + -2;
      pfVar16 = pfVar16 + 2;
    }
    uVar14 = (int)param_5 / 2;
    uVar18 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
    for (lVar13 = 0; uVar18 = uVar18 - 4,
        (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) != (uint)lVar13; lVar13 = lVar13 + 1) {
      fVar28 = *(float *)(lVar7 + uVar18);
      fVar29 = *(float *)(lVar7 + lVar13 * 4);
      fVar33 = *(float *)(param_4 + uVar18);
      fVar31 = *(float *)(param_4 + lVar13 * 4);
      *(float *)(lVar7 + lVar13 * 4) = -(fVar31 * fVar28) + fVar33 * fVar29;
      *(float *)(lVar7 + uVar18) = fVar28 * fVar33 + fVar31 * fVar29;
    }
  }
  return;
}



/* Entry: 108b4b3c8; end: 108b4b42f;  */

void FUN_108b4b3c8(void)

{
  return;
}



/* Entry: 108b4b430; end: 108b4b693;  */

void FUN_108b4b430(long *param_1,float *param_2,undefined8 param_3,int param_4,ulong param_5)

{
  uint uVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  uint extraout_w12;
  uint extraout_w12_00;
  long extraout_x14;
  long lVar14;
  int iVar15;
  ulong uVar16;
  float *pfVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_e4;
  float afStack_e0 [2];
  undefined8 uStack_d8;
  float afStack_5c [4];
  float afStack_4c [5];
  undefined8 uStack_38;
  
  uVar5 = param_3;
  func_0x000108b4bdc4();
  iVar15 = (int)param_5;
  lVar11 = (long)(iVar15 / 2);
  pfVar13 = (float *)*param_1;
  pfVar7 = pfVar13 + iVar15;
  for (lVar14 = 1; lVar14 < (int)uVar5; lVar14 = lVar14 + 1) {
    param_2[lVar14] =
         pfVar7[lVar11] * 0.25 +
         *(float *)((long)pfVar7 + extraout_x14 + (long)(iVar15 / 2) * -4) * 0.25 + *pfVar7 * 0.5;
    pfVar7 = (float *)((long)pfVar7 +
                      (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2));
  }
  fVar19 = *pfVar13 * 0.5 + pfVar13[lVar11] * 0.25;
  *param_2 = fVar19;
  if (param_4 == 2) {
    pfVar13 = (float *)param_1[1];
    pfVar7 = pfVar13;
    for (lVar14 = 1; pfVar7 = pfVar7 + iVar15, lVar14 < (int)uVar5; lVar14 = lVar14 + 1) {
      param_2[lVar14] =
           param_2[lVar14] + pfVar7[lVar11] * 0.25 + pfVar7[-lVar11] * 0.25 + *pfVar7 * 0.5;
    }
    *param_2 = fVar19 + *pfVar13 * 0.5 + pfVar13[lVar11] * 0.25;
  }
  uVar6 = 0;
  pfVar7 = (float *)0x4;
  uStack_38 = extraout_x8;
  FUN_108b4c3b8(param_2,afStack_4c,0,0,4,param_3);
  afStack_4c[0] = afStack_4c[0] * 1.0001;
  for (uVar9 = 1; uVar9 != 5; uVar9 = uVar9 + 1) {
    fVar19 = (float)(uVar9 & 0xffffffff) * 0.008;
    afStack_4c[uVar9] = afStack_4c[uVar9] + fVar19 * -(fVar19 * afStack_4c[uVar9]);
  }
  pfVar13 = afStack_5c;
  pfVar3 = afStack_4c;
  uVar9 = 4;
  FUN_108b4bdd4();
  fVar19 = 1.0;
  for (lVar14 = 0; bVar2 = lVar14 == 0x10, !bVar2; lVar14 = lVar14 + 4) {
    fVar19 = fVar19 * 0.9;
    *(float *)((long)afStack_5c + lVar14) = fVar19 * *(float *)((long)afStack_5c + lVar14);
  }
  uVar12 = (ulong)(uint)(afStack_5c[0] + 0.8);
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar22 = 0.0;
  fVar21 = 0.0;
  fVar25 = 0.0;
  for (uVar10 = (ulong)((uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    fVar23 = *param_2;
    *param_2 = fVar23 + fVar25 * (afStack_5c[0] + 0.8) +
               fVar21 * (afStack_5c[1] + afStack_5c[0] * 0.8) +
               fVar22 * (afStack_5c[2] + afStack_5c[1] * 0.8) +
               fVar20 * (afStack_5c[3] + afStack_5c[2] * 0.8) + fVar19 * afStack_5c[3] * 0.8;
    param_2 = param_2 + 1;
    fVar19 = fVar20;
    fVar20 = fVar22;
    fVar22 = fVar21;
    fVar21 = fVar25;
    fVar25 = fVar23;
  }
  func_0x000108b4bdb0(uStack_38);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b4bdc4();
  uVar4 = (uint)uVar9;
  if (((int)uVar4 < 1) || ((int)uVar6 < 1)) {
    _abort();
  }
  else {
    uStack_d8 = extraout_x8_00;
    (*(code *)PTR____chkstk_darwin_11034bd40)((uVar4 & 0x7ffffffc) + 0xf & 0xfffffff0);
    lVar14 = (long)afStack_e0 - extraout_x8_01;
    (*(code *)PTR____chkstk_darwin_11034bd40)((extraout_w12 & 0x7ffffffc) + 0xf & 0xfffffff0);
    lVar11 = ((long)afStack_e0 - extraout_x8_01) - extraout_x8_02;
    uVar16 = uVar6 >> 1 & 0x7fffffff;
    iVar15 = (int)uVar16;
    (*(code *)PTR____chkstk_darwin_11034bd40)(iVar15 << 2);
    pfVar17 = (float *)(lVar11 - (extraout_x8_03 + 0xfU & 0x1fffffff0));
    pfVar8 = pfVar13;
    for (uVar10 = 0; (uVar4 >> 2) << 2 != uVar10; uVar10 = uVar10 + 4) {
      uVar12 = (ulong)(uint)*pfVar8;
      *(float *)(lVar14 + uVar10) = *pfVar8;
      pfVar8 = pfVar8 + 2;
    }
    pfVar8 = pfVar3;
    for (uVar10 = 0; (extraout_w12_00 & 0xfffffffc) != uVar10; uVar10 = uVar10 + 4) {
      uVar12 = (ulong)(uint)*pfVar8;
      *(float *)(lVar11 + uVar10) = *pfVar8;
      pfVar8 = pfVar8 + 2;
    }
    FUN_108b607a8();
    FUN_108b4b900(pfVar17,lVar11,uVar4 >> 2,uVar6 >> 2 & 0x3fffffff,afStack_e0);
    uVar9 = uVar9 >> 1 & 0x7fffffff;
    uVar4 = (int)afStack_e0[1] * -2;
    uVar18 = (int)afStack_e0[0] * -2;
    for (lVar14 = 0; fVar19 = (float)uVar12, uVar16 << 2 != lVar14; lVar14 = lVar14 + 4) {
      *(undefined4 *)((long)pfVar17 + lVar14) = 0;
      uVar1 = -uVar18;
      if (-1 < (int)uVar18) {
        uVar1 = uVar18;
      }
      if (uVar1 < 3) {
LAB_108b4b81c:
        FUN_108b60920(pfVar13,(long)pfVar3 + lVar14,uVar9);
        fVar20 = -1.0;
        if (-1.0 <= fVar19) {
          fVar20 = fVar19;
        }
        uVar12 = (ulong)(uint)fVar20;
        *(float *)((long)pfVar17 + lVar14) = fVar20;
      }
      else {
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        if (uVar1 < 3) goto LAB_108b4b81c;
      }
      uVar4 = uVar4 + 1;
      uVar18 = uVar18 + 1;
    }
    pfVar8 = afStack_e0;
    pfVar13 = pfVar17;
    FUN_108b4b900();
    fVar19 = (float)(iVar15 - 1);
    bVar2 = 0 < (int)afStack_e0[0] && afStack_e0[0] == fVar19;
    if (0 < (int)afStack_e0[0] && (int)afStack_e0[0] < (int)fVar19) {
      pfVar17 = pfVar17 + (uint)afStack_e0[0];
      fVar19 = pfVar17[-1];
      fVar20 = pfVar17[1];
      fVar22 = (*pfVar17 - fVar19) * 0.7;
      bVar2 = fVar20 - fVar19 == fVar22;
      if (fVar20 - fVar19 <= fVar22) {
        fVar22 = (*pfVar17 - fVar20) * 0.7;
        bVar2 = fVar19 - fVar20 == fVar22;
        uVar4 = (uint)(!bVar2 && fVar22 <= fVar19 - fVar20);
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    else {
      uVar4 = 0;
    }
    *pfVar7 = (float)(uVar4 + (int)afStack_e0[0] * 2);
    func_0x000108b4bdb0(uStack_d8);
    uVar6 = uVar16;
    pfVar7 = pfVar8;
    if (bVar2) {
      return;
    }
  }
  ___stack_chk_fail();
  pfVar7[0] = 0.0;
  pfVar7[1] = 1.4013e-45;
  fVar19 = 1.0;
  pfVar17 = pfVar3;
  for (uVar10 = uVar9 & 0xffffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
    fVar19 = fVar19 + *pfVar17 * *pfVar17;
    pfVar17 = pfVar17 + 1;
  }
  uVar12 = 0;
  fVar22 = 0.0;
  fVar21 = -1.0;
  fVar25 = -1.0;
  fVar20 = 0.0;
  for (uVar10 = 0; (uVar6 & 0xffffffff) != uVar10; uVar10 = uVar10 + 1) {
    fVar23 = fVar20;
    if ((0.0 < pfVar13[uVar10]) &&
       (fVar24 = pfVar13[uVar10] * 1e-12, fVar24 = fVar24 * fVar24,
       fVar19 * fVar21 < fVar22 * fVar24)) {
      if (fVar20 * fVar24 <= fVar19 * fVar25) {
        pfVar7[1] = (float)uVar10;
        fVar22 = fVar19;
        fVar21 = fVar24;
      }
      else {
        *pfVar7 = (float)uVar10;
        pfVar7[1] = (float)uVar12;
        uVar12 = uVar10;
        fVar23 = fVar19;
        fVar22 = fVar20;
        fVar21 = fVar25;
        fVar25 = fVar24;
      }
    }
    fVar20 = fVar19 + -(pfVar3[uVar10] * pfVar3[uVar10]) +
                      pfVar3[(uVar9 & 0xffffffff) + uVar10] * pfVar3[(uVar9 & 0xffffffff) + uVar10];
    fVar19 = 1.0;
    if (1.0 <= fVar20) {
      fVar19 = fVar20;
    }
    fVar20 = fVar23;
  }
  return;
}



/* Entry: 108b4b694; end: 108b4b8ff;  */

void FUN_108b4b694(ulong param_1,uint *param_2,float *param_3,ulong param_4,ulong param_5,
                  float *param_6)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar6;
  uint *puVar7;
  uint extraout_w12;
  uint extraout_w12_00;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_84;
  float afStack_80 [2];
  undefined8 uStack_78;
  
  func_0x000108b4bdc4();
  uVar4 = (uint)param_4;
  if (((int)uVar4 < 1) || ((int)param_5 < 1)) {
    _abort();
  }
  else {
    uStack_78 = extraout_x8;
    (*(code *)PTR____chkstk_darwin_11034bd40)((uVar4 & 0x7ffffffc) + 0xf & 0xfffffff0);
    lVar11 = (long)afStack_80 - extraout_x8_00;
    (*(code *)PTR____chkstk_darwin_11034bd40)((extraout_w12 & 0x7ffffffc) + 0xf & 0xfffffff0);
    lVar12 = ((long)afStack_80 - extraout_x8_00) - extraout_x8_01;
    uVar9 = param_5 >> 1 & 0x7fffffff;
    iVar8 = (int)uVar9;
    (*(code *)PTR____chkstk_darwin_11034bd40)(iVar8 << 2);
    puVar10 = (uint *)(lVar12 - (extraout_x8_02 + 0xfU & 0x1fffffff0));
    puVar7 = param_2;
    for (uVar6 = 0; (uVar4 >> 2) << 2 != uVar6; uVar6 = uVar6 + 4) {
      param_1 = (ulong)*puVar7;
      *(uint *)(lVar11 + uVar6) = *puVar7;
      puVar7 = puVar7 + 2;
    }
    pfVar5 = param_3;
    for (uVar6 = 0; (extraout_w12_00 & 0xfffffffc) != uVar6; uVar6 = uVar6 + 4) {
      param_1 = (ulong)(uint)*pfVar5;
      *(float *)(lVar12 + uVar6) = *pfVar5;
      pfVar5 = pfVar5 + 2;
    }
    FUN_108b607a8();
    FUN_108b4b900(puVar10,lVar12,uVar4 >> 2,param_5 >> 2 & 0x3fffffff,afStack_80);
    param_4 = param_4 >> 1 & 0x7fffffff;
    uVar4 = (int)afStack_80[1] * -2;
    uVar13 = (int)afStack_80[0] * -2;
    for (lVar11 = 0; fVar14 = (float)param_1, uVar9 << 2 != lVar11; lVar11 = lVar11 + 4) {
      *(undefined4 *)((long)puVar10 + lVar11) = 0;
      uVar2 = -uVar13;
      if (-1 < (int)uVar13) {
        uVar2 = uVar13;
      }
      if (uVar2 < 3) {
LAB_108b4b81c:
        FUN_108b60920(param_2,(long)param_3 + lVar11,param_4);
        fVar15 = -1.0;
        if (-1.0 <= fVar14) {
          fVar15 = fVar14;
        }
        param_1 = (ulong)(uint)fVar15;
        *(float *)((long)puVar10 + lVar11) = fVar15;
      }
      else {
        uVar2 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar2 = uVar4;
        }
        if (uVar2 < 3) goto LAB_108b4b81c;
      }
      uVar4 = uVar4 + 1;
      uVar13 = uVar13 + 1;
    }
    pfVar5 = afStack_80;
    param_2 = puVar10;
    FUN_108b4b900();
    fVar14 = (float)(iVar8 - 1);
    bVar3 = 0 < (int)afStack_80[0] && afStack_80[0] == fVar14;
    if (0 < (int)afStack_80[0] && (int)afStack_80[0] < (int)fVar14) {
      pfVar1 = (float *)(puVar10 + (uint)afStack_80[0]);
      fVar14 = pfVar1[-1];
      fVar15 = pfVar1[1];
      fVar18 = (*pfVar1 - fVar14) * 0.7;
      bVar3 = fVar15 - fVar14 == fVar18;
      if (fVar15 - fVar14 <= fVar18) {
        fVar18 = (*pfVar1 - fVar15) * 0.7;
        bVar3 = fVar14 - fVar15 == fVar18;
        uVar4 = (uint)(!bVar3 && fVar18 <= fVar14 - fVar15);
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    else {
      uVar4 = 0;
    }
    *param_6 = (float)(uVar4 + (int)afStack_80[0] * 2);
    func_0x000108b4bdb0(uStack_78);
    param_5 = uVar9;
    param_6 = pfVar5;
    if (bVar3) {
      return;
    }
  }
  ___stack_chk_fail();
  param_6[0] = 0.0;
  param_6[1] = 1.4013e-45;
  fVar14 = 1.0;
  pfVar5 = param_3;
  for (uVar6 = param_4 & 0xffffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
    fVar14 = fVar14 + *pfVar5 * *pfVar5;
    pfVar5 = pfVar5 + 1;
  }
  uVar9 = 0;
  fVar18 = 0.0;
  fVar16 = -1.0;
  fVar20 = -1.0;
  fVar15 = 0.0;
  for (uVar6 = 0; (param_5 & 0xffffffff) != uVar6; uVar6 = uVar6 + 1) {
    fVar17 = fVar15;
    if ((0.0 < (float)param_2[uVar6]) &&
       (fVar19 = (float)param_2[uVar6] * 1e-12, fVar19 = fVar19 * fVar19,
       fVar14 * fVar16 < fVar18 * fVar19)) {
      if (fVar15 * fVar19 <= fVar14 * fVar20) {
        param_6[1] = (float)uVar6;
        fVar18 = fVar14;
        fVar16 = fVar19;
      }
      else {
        *param_6 = (float)uVar6;
        param_6[1] = (float)uVar9;
        uVar9 = uVar6;
        fVar17 = fVar14;
        fVar18 = fVar15;
        fVar16 = fVar20;
        fVar20 = fVar19;
      }
    }
    fVar15 = fVar14 + -(param_3[uVar6] * param_3[uVar6]) +
                      param_3[(param_4 & 0xffffffff) + uVar6] *
                      param_3[(param_4 & 0xffffffff) + uVar6];
    fVar14 = 1.0;
    if (1.0 <= fVar15) {
      fVar14 = fVar15;
    }
    fVar15 = fVar17;
  }
  return;
}



/* Entry: 108b4b900; end: 108b4b9ef;  */

void FUN_108b4b900(long param_1,float *param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_5 = 0x100000000;
  fVar4 = 1.0;
  pfVar1 = param_2;
  for (uVar2 = (ulong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
    fVar4 = fVar4 + *pfVar1 * *pfVar1;
    pfVar1 = pfVar1 + 1;
  }
  uVar3 = 0;
  fVar8 = 0.0;
  fVar6 = -1.0;
  fVar10 = -1.0;
  fVar5 = 0.0;
  for (uVar2 = 0; param_4 != uVar2; uVar2 = uVar2 + 1) {
    fVar9 = *(float *)(param_1 + uVar2 * 4);
    fVar7 = fVar5;
    if ((0.0 < fVar9) &&
       (fVar9 = fVar9 * 1e-12, fVar9 = fVar9 * fVar9, fVar4 * fVar6 < fVar8 * fVar9)) {
      if (fVar5 * fVar9 <= fVar4 * fVar10) {
        *(int *)((long)param_5 + 4) = (int)uVar2;
        fVar8 = fVar4;
        fVar6 = fVar9;
      }
      else {
        *(int *)param_5 = (int)uVar2;
        *(int *)((long)param_5 + 4) = (int)uVar3;
        uVar3 = uVar2;
        fVar7 = fVar4;
        fVar8 = fVar5;
        fVar6 = fVar10;
        fVar10 = fVar9;
      }
    }
    fVar5 = fVar4 + -(param_2[uVar2] * param_2[uVar2]) +
                    param_2[param_3 + uVar2] * param_2[param_3 + uVar2];
    fVar4 = 1.0;
    if (1.0 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = fVar7;
  }
  return;
}



/* Entry: 108b4b9f0; end: 108b4bdaf;  */

/* WARNING: Possible PIC construction at 0x000108b4bd74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b4bd78) */
/* WARNING: Removing unreachable block (ram,0x000108b4bdac) */
/* WARNING: Removing unreachable block (ram,0x000108b4bd7c) */

float FUN_108b4b9f0(float param_1,long param_2,int param_3,uint param_4,int param_5,uint *param_6,
                   int param_7)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long extraout_x8;
  float *pfVar7;
  long lVar8;
  undefined8 extraout_x12;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float afStack_110 [3];
  uint uStack_104;
  uint *puStack_100;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [11];
  
  func_0x000108b4bdc4();
  uVar5 = param_3 / 2;
  pfVar1 = (float *)(param_2 + (long)(int)uVar5 * 4);
  uVar10 = (int)*param_6 / 2;
  if ((int)(uVar5 - 1) <= (int)*param_6 / 2) {
    uVar10 = uVar5 - 1;
  }
  *param_6 = uVar10;
  puStack_100 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) + 0x13 &
             0xfffffffffffffff0);
  pfVar13 = (float *)((long)afStack_110 - extraout_x8);
  uStack_e0 = extraout_x12;
  func_0x000108b609a8(pfVar1,pfVar1,pfVar1 + -(long)(int)extraout_x12,param_5 / 2,&fStack_c4,
                      &fStack_c0);
  *pfVar13 = fStack_c4;
  lVar9 = (long)(param_5 / 2);
  fVar15 = fStack_c4;
  pfVar7 = pfVar1;
  for (lVar8 = 1; pfVar7 = pfVar7 + -1, lVar8 <= (int)uVar5; lVar8 = lVar8 + 1) {
    fVar15 = (fVar15 + *pfVar7 * *pfVar7) - pfVar7[lVar9] * pfVar7[lVar9];
    fVar19 = 0.0;
    if (0.0 <= fVar15) {
      fVar19 = fVar15;
    }
    pfVar13[lVar8] = fVar19;
  }
  uStack_e4 = uVar10;
  lVar8 = 2;
  uStack_104 = param_4;
  iStack_cc = (int)param_4 / 2;
  fVar19 = pfVar13[(int)extraout_x12];
  iStack_d0 = param_7 / -2;
  fVar20 = fStack_c0 / SQRT(fVar19 * fStack_c4 + 1.0);
  iVar4 = (int)uStack_e0 * 2;
  fStack_f4 = param_1 * 0.5;
  iStack_d4 = iStack_cc * 3;
  uVar10 = 4;
  iVar11 = 10;
  fStack_f0 = 0.85;
  fStack_ec = 0.7;
  fVar15 = fStack_c0;
  fStack_e8 = fVar20;
  while( true ) {
    uVar12 = uStack_e4;
    fVar17 = fStack_ec;
    iVar14 = (int)lVar8;
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = (uint)(iVar4 + iVar14) / uVar10;
    }
    if (lVar8 == 0x10 || (int)uVar6 < iStack_cc) break;
    if (lVar8 == 2) {
      uVar2 = uVar6 + (uint)uStack_e0;
      uVar12 = (uint)uStack_e0;
      if ((int)uVar2 <= (int)uVar5) {
        uVar12 = uVar2;
      }
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = (uint)(iVar14 + *(int *)(&UNK_10df90b74 + lVar8 * 4) * iVar4) / uVar10;
      }
    }
    func_0x000108b609a8(pfVar1,pfVar1 + -(long)(int)uVar6,pfVar1 + -(long)(int)uVar12,lVar9,
                        &fStack_c0,&fStack_c8);
    fStack_c0 = (fStack_c0 + fStack_c8) * 0.5;
    uVar2 = uVar6 + iStack_d0;
    uVar3 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar3 = uVar2;
    }
    fVar17 = param_1;
    if (((1 < uVar3) && (fVar17 = 0.0, uVar3 == 2)) &&
       (fVar17 = fStack_f4, (int)uStack_e0 <= iVar11 * iVar14)) {
      fVar17 = 0.0;
    }
    if ((int)uVar6 < iStack_d4) {
      fVar18 = -fVar17 + fStack_f0 * fVar20;
      fVar17 = 0.4;
      if (0.4 <= fVar18) {
        fVar17 = fVar18;
      }
    }
    else {
      fVar18 = -fVar17 + fStack_ec * fVar20;
      fVar17 = 0.3;
      if (0.3 <= fVar18) {
        fVar17 = fVar18;
      }
    }
    fVar18 = (pfVar13[(int)uVar6] + pfVar13[(int)uVar12]) * 0.5;
    fVar16 = fStack_c0 / SQRT(fVar18 * fStack_c4 + 1.0);
    if (fVar17 < fVar16) {
      fVar15 = fStack_c0;
      fStack_e8 = fVar16;
      uStack_e4 = uVar6;
      fVar19 = fVar18;
    }
    lVar8 = lVar8 + 1;
    iVar11 = iVar11 + 5;
    uVar10 = uVar10 + 2;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar15) {
    fVar20 = fVar15;
  }
  fVar15 = 1.0;
  if (fVar20 < fVar19) {
    fVar15 = fVar20 / (fVar19 + 1.0);
  }
  iVar11 = uStack_e4 - 1;
  for (lVar8 = 0; lVar8 != 0xc; lVar8 = lVar8 + 4) {
    func_0x000108b60920(pfVar1,pfVar1 + -(long)iVar11,lVar9);
    *(float *)((long)afStack_bc + lVar8) = fVar20;
    iVar11 = iVar11 + 1;
  }
  if (afStack_bc[2] - afStack_bc[0] <= (afStack_bc[1] - afStack_bc[0]) * fVar17) {
    iVar11 = -(uint)((afStack_bc[1] - afStack_bc[2]) * fVar17 < afStack_bc[0] - afStack_bc[2]);
  }
  else {
    iVar11 = 1;
  }
  if (fVar15 <= fStack_e8) {
    fStack_e8 = fVar15;
  }
  uVar10 = iVar11 + uVar12 * 2;
  if ((int)uVar10 <= (int)uStack_104) {
    uVar10 = uStack_104;
  }
  *puStack_100 = uVar10;
  return fStack_e8;
}



/* Entry: 108b4bdb0; end: 108b4bdd3;  */

void FUN_108b4bdb0(void)

{
  return;
}



/* Entry: 108b4bdd4; end: 108b4bedf;  */

void FUN_108b4bdd4(float *param_1,float *param_2,ulong param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = *param_2;
  _bzero(param_1,-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
  if (1e-10 < *param_2) {
    lVar3 = 0;
    pfVar4 = param_1 + -1;
    uVar5 = 1;
    uVar6 = 0;
    do {
      if (uVar6 == ((uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU))) {
        return;
      }
      uVar7 = uVar5 >> 1;
      fVar9 = 0.0;
      pfVar1 = param_1;
      for (lVar8 = lVar3; lVar8 != 0; lVar8 = lVar8 + -4) {
        fVar9 = fVar9 + *(float *)((long)param_2 + lVar8) * *pfVar1;
        pfVar1 = pfVar1 + 1;
      }
      fVar9 = -(fVar9 + param_2[uVar6 + 1]) / fVar12;
      param_1[uVar6] = fVar9;
      pfVar1 = pfVar4;
      pfVar2 = param_1;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        fVar10 = *pfVar2;
        fVar11 = *pfVar1;
        *pfVar2 = fVar10 + fVar11 * fVar9;
        *pfVar1 = fVar11 + fVar10 * fVar9;
        pfVar1 = pfVar1 + -1;
        pfVar2 = pfVar2 + 1;
      }
      fVar12 = fVar12 + fVar12 * -(fVar9 * fVar9);
      lVar3 = lVar3 + 4;
      pfVar4 = pfVar4 + 1;
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (*param_2 * 0.001 < fVar12);
  }
  return;
}



/* Entry: 108b4bee0; end: 108b4c02b;  */

float * FUN_108b4bee0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     ulong param_6,undefined8 param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float **ppfVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  float *pfVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  float *unaff_x19;
  float *unaff_x20;
  int iVar20;
  float *unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  float *pfVar21;
  long unaff_x28;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float *pfStack_90;
  float *pfStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  ppfVar4 = &pfStack_90;
  func_0x000108b4c554();
  if (param_1 == param_3) {
    _abort();
    pfVar6 = param_1;
    pfVar12 = param_5;
  }
  else {
    pfVar6 = param_1;
    pfVar12 = param_5;
    uStack_68 = extraout_x8;
    func_0x000108b4c564();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    ppfVar4 = (float **)((long)&pfStack_90 - extraout_x12);
    uVar17 = (uint)pfVar12;
    unaff_x24 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    for (lVar14 = 0; uVar17 = uVar17 - 1, unaff_x24 << 2 != lVar14; lVar14 = lVar14 + 4) {
      *(float *)((long)ppfVar4 + lVar14) = param_2[(int)uVar17];
    }
    pfStack_90 = param_4;
    pfStack_88 = param_3;
    unaff_x27 = (long)((int)param_4 + -3);
    uVar17 = -(int)param_5;
    unaff_x28 = extraout_x8_00 * -4;
    pfVar21 = param_1;
    unaff_x19 = param_3;
    for (unaff_x25 = 0; unaff_x25 < unaff_x27; unaff_x25 = unaff_x25 + 4) {
      unaff_x22 = pfVar21 + 4;
      uStack_78 = *(undefined8 *)(pfVar21 + 2);
      uStack_80 = *(undefined8 *)pfVar21;
      param_2 = pfVar21 + -extraout_x8_00;
      param_3 = (float *)&uStack_80;
      pfVar6 = (float *)ppfVar4;
      param_4 = param_5;
      FUN_108b4c02c();
      *(undefined8 *)(unaff_x19 + 2) = uStack_78;
      *(undefined8 *)unaff_x19 = uStack_80;
      uVar17 = uVar17 + 4;
      pfVar21 = unaff_x22;
      unaff_x19 = unaff_x19 + 4;
    }
    while( true ) {
      unaff_x26 = (ulong)uVar17;
      bVar5 = unaff_x25 == (int)pfStack_90;
      if ((int)pfStack_90 <= unaff_x25) break;
      fVar22 = param_1[unaff_x25];
      pfVar21 = (float *)ppfVar4;
      for (uVar15 = unaff_x24; uVar15 != 0; uVar15 = uVar15 - 1) {
        fVar22 = fVar22 + param_1[(int)unaff_x26] * *pfVar21;
        unaff_x26 = (ulong)((int)unaff_x26 + 1);
        pfVar21 = pfVar21 + 1;
      }
      pfStack_88[unaff_x25] = fVar22;
      unaff_x25 = unaff_x25 + 1;
      uVar17 = uVar17 + 1;
    }
    func_0x000108b4c540(uStack_68);
    unaff_x20 = param_1;
    unaff_x21 = (float *)ppfVar4;
    unaff_x23 = param_5;
    if (bVar5) {
      return pfVar6;
    }
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)ppfVar4 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppfVar4 + -8) = FUN_108b4c02c;
  uVar17 = (uint)param_4;
  if (2 < (int)uVar17) {
    fVar22 = *param_2;
    fVar26 = param_2[1];
    pfVar12 = param_2 + 3;
    fVar24 = 0.0;
    fVar25 = param_2[2];
    for (iVar13 = 0; iVar13 < (int)(uVar17 - 3); iVar13 = iVar13 + 4) {
      fVar27 = *pfVar6;
      fVar24 = *pfVar12;
      fVar28 = *param_3 + fVar22 * fVar27;
      fVar29 = param_3[1] + fVar26 * fVar27;
      *param_3 = fVar28;
      param_3[1] = fVar29;
      fVar32 = param_3[2] + fVar25 * fVar27;
      fVar27 = param_3[3] + fVar24 * fVar27;
      param_3[2] = fVar32;
      param_3[3] = fVar27;
      fVar30 = pfVar6[1];
      fVar22 = pfVar12[1];
      fVar28 = fVar28 + fVar26 * fVar30;
      fVar29 = fVar29 + fVar25 * fVar30;
      *param_3 = fVar28;
      param_3[1] = fVar29;
      fVar32 = fVar32 + fVar24 * fVar30;
      fVar27 = fVar27 + fVar22 * fVar30;
      param_3[2] = fVar32;
      param_3[3] = fVar27;
      fVar30 = pfVar6[2];
      fVar26 = pfVar12[2];
      fVar28 = fVar28 + fVar25 * fVar30;
      fVar29 = fVar29 + fVar24 * fVar30;
      *param_3 = fVar28;
      param_3[1] = fVar29;
      fVar32 = fVar32 + fVar22 * fVar30;
      fVar27 = fVar27 + fVar26 * fVar30;
      param_3[2] = fVar32;
      param_3[3] = fVar27;
      fVar30 = pfVar6[3];
      pfVar6 = pfVar6 + 4;
      fVar25 = pfVar12[3];
      pfVar12 = pfVar12 + 4;
      *param_3 = fVar28 + fVar24 * fVar30;
      param_3[1] = fVar29 + fVar22 * fVar30;
      param_3[2] = fVar32 + fVar26 * fVar30;
      param_3[3] = fVar27 + fVar25 * fVar30;
    }
    uVar3 = uVar17 & 0x7ffffffc;
    pfVar21 = pfVar6;
    pfVar7 = pfVar12;
    if ((int)uVar3 < (int)uVar17) {
      pfVar21 = pfVar6 + 1;
      fVar27 = *pfVar6;
      pfVar7 = pfVar12 + 1;
      fVar24 = *pfVar12;
      *(ulong *)(param_3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + fVar24 * fVar27,
                    (float)*(undefined8 *)(param_3 + 2) + fVar25 * fVar27);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar26 * fVar27,
                    (float)*(undefined8 *)param_3 + fVar22 * fVar27);
    }
    pfVar6 = pfVar21;
    pfVar12 = pfVar7;
    if ((int)(uVar3 | 1) < (int)uVar17) {
      pfVar6 = pfVar21 + 1;
      fVar27 = *pfVar21;
      pfVar12 = pfVar7 + 1;
      fVar22 = *pfVar7;
      *(ulong *)(param_3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + fVar22 * fVar27,
                    (float)*(undefined8 *)(param_3 + 2) + fVar24 * fVar27);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar25 * fVar27,
                    (float)*(undefined8 *)param_3 + fVar26 * fVar27);
    }
    if ((int)(uVar3 | 2) < (int)uVar17) {
      fVar26 = *pfVar6;
      *(ulong *)(param_3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + *pfVar12 * fVar26,
                    (float)*(undefined8 *)(param_3 + 2) + fVar22 * fVar26);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar24 * fVar26,
                    (float)*(undefined8 *)param_3 + fVar25 * fVar26);
    }
    return pfVar6;
  }
  _abort();
  *(long *)((long)ppfVar4 + -0x70) = unaff_x28;
  *(long *)((long)ppfVar4 + -0x68) = unaff_x27;
  *(ulong *)((long)ppfVar4 + -0x60) = unaff_x26;
  *(long *)((long)ppfVar4 + -0x58) = unaff_x25;
  *(ulong *)((long)ppfVar4 + -0x50) = unaff_x24;
  *(float **)((long)ppfVar4 + -0x48) = unaff_x23;
  *(float **)((long)ppfVar4 + -0x40) = unaff_x22;
  *(float **)((long)ppfVar4 + -0x38) = unaff_x21;
  *(float **)((long)ppfVar4 + -0x30) = unaff_x20;
  *(float **)((long)ppfVar4 + -0x28) = unaff_x19;
  *(float **)((long)ppfVar4 + -0x20) = (float *)((long)ppfVar4 + -0x10);
  *(code **)((long)ppfVar4 + -0x18) = FUN_108b4c184;
  pfVar21 = (float *)((long)ppfVar4 + -0xb0);
  func_0x000108b4c554();
  *(undefined8 *)((long)ppfVar4 + -0x78) = extraout_x8_01;
  if (((ulong)pfVar12 & 3) == 0) {
    pfVar7 = pfVar6;
    pfVar8 = param_2;
    pfVar9 = param_3;
    pfVar10 = pfVar12;
    func_0x000108b4c564();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x23 = (float *)((long)ppfVar4 + (-0xb0 - extraout_x12_00));
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar21 = (float *)((long)unaff_x23 - extraout_x13);
    uVar17 = (uint)pfVar10;
    uVar15 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    iVar11 = uVar17 - 1;
    iVar13 = iVar11;
    for (lVar14 = 0; pfVar1 = pfVar21, uVar18 = uVar15, uVar15 << 2 != lVar14; lVar14 = lVar14 + 4)
    {
      *(float *)((long)unaff_x23 + lVar14) = param_2[iVar13];
      iVar13 = iVar13 + -1;
    }
    for (; uVar16 = uVar15, uVar18 != 0; uVar18 = uVar18 - 1) {
      *pfVar1 = -*(float *)(param_6 + (long)iVar11 * 4);
      iVar11 = iVar11 + -1;
      pfVar1 = pfVar1 + 1;
    }
    for (; (long)uVar16 < extraout_x12_01; uVar16 = uVar16 + 1) {
      pfVar21[uVar16] = 0.0;
    }
    *(ulong *)((long)ppfVar4 + -0xa8) = param_6;
    *(float **)((long)ppfVar4 + -0xa0) = param_4;
    unaff_x24 = 0;
    *(long *)((long)ppfVar4 + -0x98) = (long)((int)param_4 + -3);
    unaff_x21 = pfVar21 + extraout_x8_02;
    for (lVar14 = 0; iVar13 = (int)pfVar10, lVar14 < *(long *)((long)ppfVar4 + -0x98);
        lVar14 = lVar14 + 4) {
      uVar23 = *(undefined8 *)((long)pfVar6 + unaff_x24);
      *(undefined8 *)((long)ppfVar4 + -0x88) = ((undefined8 *)((long)pfVar6 + unaff_x24))[1];
      *(undefined8 *)((long)ppfVar4 + -0x90) = uVar23;
      pfVar8 = (float *)((long)pfVar21 + unaff_x24);
      pfVar9 = (float *)((long)ppfVar4 + -0x90);
      pfVar7 = unaff_x23;
      param_4 = pfVar12;
      FUN_108b4c02c();
      pfVar1 = (float *)((long)param_3 + unaff_x24);
      fVar22 = *(float *)((long)ppfVar4 + -0x90);
      fVar24 = *(float *)((long)ppfVar4 + -0x8c);
      *pfVar1 = fVar22;
      fVar25 = *param_2;
      fVar26 = fVar24 - fVar25 * fVar22;
      pfVar1[1] = fVar26;
      fVar27 = *param_2;
      fVar28 = param_2[1];
      fVar29 = *(float *)((long)ppfVar4 + -0x88);
      fVar32 = *(float *)((long)ppfVar4 + -0x84);
      fVar30 = (fVar29 - fVar27 * fVar26) - fVar28 * fVar22;
      pfVar1[2] = fVar30;
      fVar33 = *param_2;
      fVar34 = param_2[1];
      fVar31 = -fVar22;
      pfVar2 = (float *)((long)unaff_x21 + unaff_x24);
      *pfVar2 = fVar31;
      pfVar2[1] = -(fVar31 * fVar25) - fVar24;
      fVar24 = (fVar32 - fVar33 * fVar30) - fVar34 * fVar26;
      fVar25 = param_2[2];
      pfVar2[2] = -(fVar31 * fVar28) - (fVar29 - fVar27 * fVar26);
      pfVar2[3] = -(fVar31 * fVar25) - fVar24;
      pfVar1[3] = fVar24 - fVar25 * fVar22;
      unaff_x24 = unaff_x24 + 0x10;
    }
    iVar11 = (int)*(undefined8 *)((long)ppfVar4 + -0xa0);
    pfVar10 = (float *)((long)pfVar21 + unaff_x24);
    for (; bVar5 = lVar14 == iVar11, lVar14 < iVar11; lVar14 = lVar14 + 1) {
      fVar22 = pfVar6[lVar14];
      pfVar1 = unaff_x23;
      pfVar2 = pfVar10;
      for (uVar18 = uVar15; uVar18 != 0; uVar18 = uVar18 - 1) {
        fVar22 = fVar22 - *pfVar2 * *pfVar1;
        pfVar1 = pfVar1 + 1;
        pfVar2 = pfVar2 + 1;
      }
      unaff_x21[lVar14] = fVar22;
      param_3[lVar14] = fVar22;
      pfVar10 = pfVar10 + 1;
    }
    pfVar10 = *(float **)((long)ppfVar4 + -0xa8);
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      iVar11 = iVar11 + -1;
      *pfVar10 = param_3[iVar11];
      pfVar10 = pfVar10 + 1;
    }
    func_0x000108b4c540(*(undefined8 *)((long)ppfVar4 + -0x78));
    param_2 = pfVar8;
    unaff_x19 = pfVar12;
    unaff_x20 = param_3;
    unaff_x22 = pfVar6;
    if (bVar5) {
      return pfVar7;
    }
  }
  else {
    _abort();
    iVar13 = (int)pfVar12;
    pfVar7 = pfVar6;
    pfVar9 = param_3;
  }
  ___stack_chk_fail();
  *(ulong *)(pfVar21 + -0x10) = unaff_x24;
  *(float **)(pfVar21 + -0xe) = unaff_x23;
  *(float **)(pfVar21 + -0xc) = unaff_x22;
  *(float **)(pfVar21 + -10) = unaff_x21;
  *(float **)(pfVar21 + -8) = unaff_x20;
  *(float **)(pfVar21 + -6) = unaff_x19;
  *(float **)(pfVar21 + -4) = (float *)((long)ppfVar4 + -0x20);
  *(code **)(pfVar21 + -2) = FUN_108b4c3b8;
  pfVar6 = pfVar7;
  func_0x000108b4c554();
  *(undefined8 *)(pfVar21 + -0x12) = extraout_x8_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2) + 0xf &
             0xfffffffffffffff0);
  pfVar12 = (float *)((long)pfVar21 + (-0x50 - extraout_x8_04));
  iVar11 = (int)param_6;
  if ((iVar11 < 1) || ((int)param_4 < 0)) {
    _abort();
  }
  else {
    iVar20 = iVar11 - iVar13;
    pfVar8 = pfVar7;
    if ((int)param_4 != 0) {
      for (lVar14 = 0; (param_6 & 0xffffffff) << 2 != lVar14; lVar14 = lVar14 + 4) {
        *(undefined4 *)((long)pfVar12 + lVar14) = *(undefined4 *)((long)pfVar7 + lVar14);
      }
      lVar19 = (long)iVar11 * 4;
      for (lVar14 = 0; lVar19 = lVar19 + -4, pfVar8 = pfVar12,
          ((ulong)param_4 & 0xffffffff) << 2 != lVar14; lVar14 = lVar14 + 4) {
        fVar22 = *(float *)((long)pfVar9 + lVar14);
        *(float *)((long)pfVar12 + lVar14) = fVar22 * *(float *)((long)pfVar7 + lVar14);
        *(float *)((long)pfVar12 + lVar19) = fVar22 * *(float *)((long)pfVar7 + lVar19);
      }
    }
    pfVar6 = pfVar8;
    FUN_108b607a8(pfVar8,pfVar8,param_2,iVar20,iVar13 + 1,param_7);
    pfVar12 = pfVar8;
    for (lVar14 = 0; bVar5 = lVar14 == iVar13, lVar14 <= iVar13; lVar14 = lVar14 + 1) {
      fVar22 = 0.0;
      pfVar7 = pfVar8 + iVar20;
      for (lVar19 = (long)iVar20; lVar19 < iVar11; lVar19 = lVar19 + 1) {
        fVar22 = fVar22 + pfVar12[lVar19] * *pfVar7;
        pfVar7 = pfVar7 + 1;
      }
      param_2[lVar14] = fVar22 + param_2[lVar14];
      iVar20 = iVar20 + 1;
      pfVar12 = pfVar12 + -1;
    }
    func_0x000108b4c540(*(undefined8 *)(pfVar21 + -0x12));
    if (bVar5) {
      return (float *)0x0;
    }
  }
  ___stack_chk_fail();
  return pfVar6;
}



/* Entry: 108b4c02c; end: 108b4c183;  */

float * FUN_108b4c02c(float *param_1,float *param_2,float *param_3,ulong param_4,ulong param_5,
                     float *param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  ulong unaff_x19;
  float *unaff_x20;
  float *pfVar16;
  int iVar17;
  float *unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  long unaff_x24;
  ulong uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float afStack_b0 [2];
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  uVar8 = (uint)param_4;
  if (2 < (int)uVar8) {
    fVar20 = *param_2;
    fVar23 = param_2[1];
    pfVar19 = param_2 + 3;
    fVar21 = 0.0;
    fVar22 = param_2[2];
    for (iVar11 = 0; iVar11 < (int)(uVar8 - 3); iVar11 = iVar11 + 4) {
      fVar24 = *param_1;
      fVar21 = *pfVar19;
      fVar25 = *param_3 + fVar20 * fVar24;
      fVar26 = param_3[1] + fVar23 * fVar24;
      *param_3 = fVar25;
      param_3[1] = fVar26;
      fVar28 = param_3[2] + fVar22 * fVar24;
      fVar24 = param_3[3] + fVar21 * fVar24;
      param_3[2] = fVar28;
      param_3[3] = fVar24;
      fVar27 = param_1[1];
      fVar20 = pfVar19[1];
      fVar25 = fVar25 + fVar23 * fVar27;
      fVar26 = fVar26 + fVar22 * fVar27;
      *param_3 = fVar25;
      param_3[1] = fVar26;
      fVar28 = fVar28 + fVar21 * fVar27;
      fVar24 = fVar24 + fVar20 * fVar27;
      param_3[2] = fVar28;
      param_3[3] = fVar24;
      fVar27 = param_1[2];
      fVar23 = pfVar19[2];
      fVar25 = fVar25 + fVar22 * fVar27;
      fVar26 = fVar26 + fVar21 * fVar27;
      *param_3 = fVar25;
      param_3[1] = fVar26;
      fVar28 = fVar28 + fVar20 * fVar27;
      fVar24 = fVar24 + fVar23 * fVar27;
      param_3[2] = fVar28;
      param_3[3] = fVar24;
      fVar27 = param_1[3];
      param_1 = param_1 + 4;
      fVar22 = pfVar19[3];
      pfVar19 = pfVar19 + 4;
      *param_3 = fVar25 + fVar21 * fVar27;
      param_3[1] = fVar26 + fVar20 * fVar27;
      param_3[2] = fVar28 + fVar23 * fVar27;
      param_3[3] = fVar24 + fVar22 * fVar27;
    }
    uVar1 = uVar8 & 0x7ffffffc;
    pfVar5 = param_1;
    pfVar7 = pfVar19;
    if ((int)uVar1 < (int)uVar8) {
      pfVar5 = param_1 + 1;
      fVar24 = *param_1;
      pfVar7 = pfVar19 + 1;
      fVar21 = *pfVar19;
      *(ulong *)(param_3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + fVar21 * fVar24,
                    (float)*(undefined8 *)(param_3 + 2) + fVar22 * fVar24);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar23 * fVar24,
                    (float)*(undefined8 *)param_3 + fVar20 * fVar24);
    }
    pfVar19 = pfVar5;
    pfVar6 = pfVar7;
    if ((int)(uVar1 | 1) < (int)uVar8) {
      pfVar19 = pfVar5 + 1;
      fVar24 = *pfVar5;
      pfVar6 = pfVar7 + 1;
      fVar20 = *pfVar7;
      *(ulong *)(param_3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + fVar20 * fVar24,
                    (float)*(undefined8 *)(param_3 + 2) + fVar21 * fVar24);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar22 * fVar24,
                    (float)*(undefined8 *)param_3 + fVar23 * fVar24);
    }
    if ((int)(uVar1 | 2) < (int)uVar8) {
      fVar23 = *pfVar19;
      *(ulong *)(param_3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + *pfVar6 * fVar23,
                    (float)*(undefined8 *)(param_3 + 2) + fVar20 * fVar23);
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar21 * fVar23,
                    (float)*(undefined8 *)param_3 + fVar22 * fVar23);
    }
    return pfVar19;
  }
  _abort();
  pcStack_18 = FUN_108b4c184;
  pfVar19 = afStack_b0;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000108b4c554();
  if ((param_5 & 3) == 0) {
    pfVar5 = param_1;
    pfVar6 = param_2;
    pfVar7 = param_3;
    uVar14 = param_5;
    uStack_78 = extraout_x8;
    func_0x000108b4c564();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x23 = (float *)((long)afStack_b0 - extraout_x12);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar19 = (float *)((long)unaff_x23 - extraout_x13);
    uVar8 = (uint)uVar14;
    uVar18 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    iVar9 = uVar8 - 1;
    iVar11 = iVar9;
    for (lVar13 = 0; pfVar10 = pfVar19, uVar2 = uVar18, uVar18 << 2 != lVar13; lVar13 = lVar13 + 4)
    {
      *(float *)((long)unaff_x23 + lVar13) = param_2[iVar11];
      iVar11 = iVar11 + -1;
    }
    for (; uVar12 = uVar18, uVar2 != 0; uVar2 = uVar2 - 1) {
      *pfVar10 = -param_6[iVar9];
      iVar9 = iVar9 + -1;
      pfVar10 = pfVar10 + 1;
    }
    for (; (long)uVar12 < extraout_x12_00; uVar12 = uVar12 + 1) {
      pfVar19[uVar12] = 0.0;
    }
    uStack_a8 = param_6;
    uStack_a0 = param_4;
    unaff_x24 = 0;
    lStack_98 = (long)((int)param_4 + -3);
    unaff_x21 = pfVar19 + extraout_x8_00;
    for (lVar13 = 0; iVar11 = (int)uVar14, lVar13 < lStack_98; lVar13 = lVar13 + 4) {
      uStack_88 = ((undefined8 *)((long)param_1 + unaff_x24))[1];
      uStack_90 = *(undefined8 *)((long)param_1 + unaff_x24);
      pfVar6 = (float *)((long)pfVar19 + unaff_x24);
      pfVar7 = (float *)&uStack_90;
      pfVar5 = unaff_x23;
      param_4 = param_5;
      FUN_108b4c02c();
      pfVar10 = (float *)((long)param_3 + unaff_x24);
      fVar20 = (float)uStack_90;
      *pfVar10 = (float)uStack_90;
      fVar21 = *param_2;
      fVar23 = uStack_90._4_4_ - fVar21 * (float)uStack_90;
      pfVar10[1] = fVar23;
      fVar25 = param_2[1];
      fVar24 = (float)uStack_88 - *param_2 * fVar23;
      fVar22 = fVar24 - fVar25 * (float)uStack_90;
      pfVar10[2] = fVar22;
      fVar27 = param_2[1];
      fVar22 = uStack_88._4_4_ - *param_2 * fVar22;
      fVar26 = -(float)uStack_90;
      fVar21 = -(fVar26 * fVar21) - uStack_90._4_4_;
      pfVar16 = (float *)((long)unaff_x21 + unaff_x24);
      *pfVar16 = fVar26;
      pfVar16[1] = fVar21;
      fVar22 = fVar22 - fVar27 * fVar23;
      fVar21 = param_2[2];
      pfVar16[2] = -(fVar26 * fVar25) - fVar24;
      pfVar16[3] = -(fVar26 * fVar21) - fVar22;
      pfVar10[3] = fVar22 - fVar21 * fVar20;
      unaff_x24 = unaff_x24 + 0x10;
    }
    iVar9 = (int)uStack_a0;
    pfVar10 = (float *)((long)pfVar19 + unaff_x24);
    for (; bVar4 = lVar13 == iVar9, pfVar16 = uStack_a8, lVar13 < iVar9; lVar13 = lVar13 + 1) {
      fVar20 = param_1[lVar13];
      pfVar16 = unaff_x23;
      pfVar3 = pfVar10;
      for (uVar14 = uVar18; uVar14 != 0; uVar14 = uVar14 - 1) {
        fVar20 = fVar20 - *pfVar3 * *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar3 = pfVar3 + 1;
      }
      unaff_x21[lVar13] = fVar20;
      param_3[lVar13] = fVar20;
      pfVar10 = pfVar10 + 1;
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      iVar9 = iVar9 + -1;
      *pfVar16 = param_3[iVar9];
      pfVar16 = pfVar16 + 1;
    }
    func_0x000108b4c540(uStack_78);
    param_2 = pfVar6;
    unaff_x19 = param_5;
    unaff_x20 = param_3;
    unaff_x22 = param_1;
    if (bVar4) {
      return pfVar5;
    }
  }
  else {
    _abort();
    iVar11 = (int)param_5;
    pfVar5 = param_1;
    pfVar7 = param_3;
  }
  ___stack_chk_fail();
  *(long *)(pfVar19 + -0x10) = unaff_x24;
  *(float **)(pfVar19 + -0xe) = unaff_x23;
  *(float **)(pfVar19 + -0xc) = unaff_x22;
  *(float **)(pfVar19 + -10) = unaff_x21;
  *(float **)(pfVar19 + -8) = unaff_x20;
  *(ulong *)(pfVar19 + -6) = unaff_x19;
  *(undefined1 ***)(pfVar19 + -4) = &puStack_20;
  *(code **)(pfVar19 + -2) = FUN_108b4c3b8;
  pfVar6 = pfVar5;
  func_0x000108b4c554();
  *(undefined8 *)(pfVar19 + -0x12) = extraout_x8_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-((ulong)param_6 >> 0x1f & 1) & 0xfffffffc00000000 |
             ((ulong)param_6 & 0xffffffff) << 2) + 0xf & 0xfffffffffffffff0);
  pfVar10 = (float *)((long)pfVar19 + (-0x50 - extraout_x8_02));
  iVar9 = (int)param_6;
  if ((iVar9 < 1) || ((int)param_4 < 0)) {
    _abort();
  }
  else {
    iVar17 = iVar9 - iVar11;
    pfVar16 = pfVar5;
    if ((int)param_4 != 0) {
      for (lVar13 = 0; ((ulong)param_6 & 0xffffffff) << 2 != lVar13; lVar13 = lVar13 + 4) {
        *(undefined4 *)((long)pfVar10 + lVar13) = *(undefined4 *)((long)pfVar5 + lVar13);
      }
      lVar15 = (long)iVar9 * 4;
      for (lVar13 = 0; lVar15 = lVar15 + -4, pfVar16 = pfVar10,
          (param_4 & 0xffffffff) << 2 != lVar13; lVar13 = lVar13 + 4) {
        fVar20 = *(float *)((long)pfVar7 + lVar13);
        *(float *)((long)pfVar10 + lVar13) = fVar20 * *(float *)((long)pfVar5 + lVar13);
        *(float *)((long)pfVar10 + lVar15) = fVar20 * *(float *)((long)pfVar5 + lVar15);
      }
    }
    pfVar6 = pfVar16;
    FUN_108b607a8(pfVar16,pfVar16,param_2,iVar17,iVar11 + 1,param_7);
    pfVar5 = pfVar16;
    for (lVar13 = 0; bVar4 = lVar13 == iVar11, lVar13 <= iVar11; lVar13 = lVar13 + 1) {
      fVar20 = 0.0;
      pfVar7 = pfVar16 + iVar17;
      for (lVar15 = (long)iVar17; lVar15 < iVar9; lVar15 = lVar15 + 1) {
        fVar20 = fVar20 + pfVar5[lVar15] * *pfVar7;
        pfVar7 = pfVar7 + 1;
      }
      param_2[lVar13] = fVar20 + param_2[lVar13];
      iVar17 = iVar17 + 1;
      pfVar5 = pfVar5 + -1;
    }
    func_0x000108b4c540(*(undefined8 *)(pfVar19 + -0x12));
    if (bVar4) {
      return (float *)0x0;
    }
  }
  ___stack_chk_fail();
  return pfVar6;
}



/* Entry: 108b4c184; end: 108b4c3b7;  */

float * FUN_108b4c184(float *param_1,float *param_2,undefined8 *param_3,ulong param_4,ulong param_5,
                     undefined4 *param_6,undefined8 param_7)

{
  ulong uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  int iVar15;
  long extraout_x13;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  float *pfVar16;
  int iVar17;
  float *unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  long unaff_x24;
  ulong uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float afStack_a0 [2];
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  pfVar19 = afStack_a0;
  func_0x000108b4c554();
  if ((param_5 & 3) == 0) {
    pfVar5 = param_1;
    pfVar6 = param_2;
    puVar7 = param_3;
    uVar13 = param_5;
    uStack_68 = extraout_x8;
    func_0x000108b4c564();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x23 = (float *)((long)afStack_a0 - extraout_x12);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar19 = (float *)((long)unaff_x23 - extraout_x13);
    uVar8 = (uint)uVar13;
    uVar18 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    iVar9 = uVar8 - 1;
    iVar15 = iVar9;
    for (lVar12 = 0; pfVar10 = pfVar19, uVar1 = uVar18, uVar18 << 2 != lVar12; lVar12 = lVar12 + 4)
    {
      *(float *)((long)unaff_x23 + lVar12) = param_2[iVar15];
      iVar15 = iVar15 + -1;
    }
    for (; uVar11 = uVar18, uVar1 != 0; uVar1 = uVar1 - 1) {
      *pfVar10 = -(float)param_6[iVar9];
      iVar9 = iVar9 + -1;
      pfVar10 = pfVar10 + 1;
    }
    for (; (long)uVar11 < extraout_x12_00; uVar11 = uVar11 + 1) {
      pfVar19[uVar11] = 0.0;
    }
    uStack_98 = param_6;
    uStack_90 = param_4;
    unaff_x24 = 0;
    lStack_88 = (long)((int)param_4 + -3);
    unaff_x21 = pfVar19 + extraout_x8_00;
    for (lVar12 = 0; iVar15 = (int)uVar13, lVar12 < lStack_88; lVar12 = lVar12 + 4) {
      uStack_78 = ((undefined8 *)((long)param_1 + unaff_x24))[1];
      uStack_80 = *(undefined8 *)((long)param_1 + unaff_x24);
      pfVar6 = (float *)((long)pfVar19 + unaff_x24);
      puVar7 = &uStack_80;
      pfVar5 = unaff_x23;
      param_4 = param_5;
      FUN_108b4c02c();
      pfVar10 = (float *)((long)param_3 + unaff_x24);
      fVar20 = (float)uStack_80;
      *pfVar10 = (float)uStack_80;
      fVar21 = *param_2;
      fVar22 = uStack_80._4_4_ - fVar21 * (float)uStack_80;
      pfVar10[1] = fVar22;
      fVar24 = param_2[1];
      fVar23 = (float)uStack_78 - *param_2 * fVar22;
      fVar25 = fVar23 - fVar24 * (float)uStack_80;
      pfVar10[2] = fVar25;
      fVar27 = param_2[1];
      fVar25 = uStack_78._4_4_ - *param_2 * fVar25;
      fVar26 = -(float)uStack_80;
      fVar21 = -(fVar26 * fVar21) - uStack_80._4_4_;
      pfVar16 = (float *)((long)unaff_x21 + unaff_x24);
      *pfVar16 = fVar26;
      pfVar16[1] = fVar21;
      fVar25 = fVar25 - fVar27 * fVar22;
      fVar21 = param_2[2];
      pfVar16[2] = -(fVar26 * fVar24) - fVar23;
      pfVar16[3] = -(fVar26 * fVar21) - fVar25;
      pfVar10[3] = fVar25 - fVar21 * fVar20;
      unaff_x24 = unaff_x24 + 0x10;
    }
    iVar9 = (int)uStack_90;
    pfVar10 = (float *)((long)pfVar19 + unaff_x24);
    for (; bVar4 = lVar12 == iVar9, puVar3 = uStack_98, lVar12 < iVar9; lVar12 = lVar12 + 1) {
      fVar20 = param_1[lVar12];
      pfVar16 = unaff_x23;
      pfVar2 = pfVar10;
      for (uVar13 = uVar18; uVar13 != 0; uVar13 = uVar13 - 1) {
        fVar20 = fVar20 - *pfVar2 * *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar2 = pfVar2 + 1;
      }
      unaff_x21[lVar12] = fVar20;
      *(float *)((long)param_3 + lVar12 * 4) = fVar20;
      pfVar10 = pfVar10 + 1;
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      iVar9 = iVar9 + -1;
      *puVar3 = *(undefined4 *)((long)param_3 + (long)iVar9 * 4);
      puVar3 = puVar3 + 1;
    }
    func_0x000108b4c540(uStack_68);
    param_2 = pfVar6;
    unaff_x19 = param_5;
    unaff_x20 = param_3;
    unaff_x22 = param_1;
    if (bVar4) {
      return pfVar5;
    }
  }
  else {
    _abort();
    iVar15 = (int)param_5;
    pfVar5 = param_1;
    puVar7 = param_3;
  }
  ___stack_chk_fail();
  *(long *)(pfVar19 + -0x10) = unaff_x24;
  *(float **)(pfVar19 + -0xe) = unaff_x23;
  *(float **)(pfVar19 + -0xc) = unaff_x22;
  *(float **)(pfVar19 + -10) = unaff_x21;
  *(undefined8 **)(pfVar19 + -8) = unaff_x20;
  *(ulong *)(pfVar19 + -6) = unaff_x19;
  *(undefined1 **)(pfVar19 + -4) = &stack0xfffffffffffffff0;
  *(code **)(pfVar19 + -2) = FUN_108b4c3b8;
  pfVar6 = pfVar5;
  func_0x000108b4c554();
  *(undefined8 *)(pfVar19 + -0x12) = extraout_x8_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-((ulong)param_6 >> 0x1f & 1) & 0xfffffffc00000000 |
             ((ulong)param_6 & 0xffffffff) << 2) + 0xf & 0xfffffffffffffff0);
  pfVar10 = (float *)((long)pfVar19 + (-0x50 - extraout_x8_02));
  iVar9 = (int)param_6;
  if ((iVar9 < 1) || ((int)param_4 < 0)) {
    _abort();
  }
  else {
    iVar17 = iVar9 - iVar15;
    pfVar16 = pfVar5;
    if ((int)param_4 != 0) {
      for (lVar12 = 0; ((ulong)param_6 & 0xffffffff) << 2 != lVar12; lVar12 = lVar12 + 4) {
        *(undefined4 *)((long)pfVar10 + lVar12) = *(undefined4 *)((long)pfVar5 + lVar12);
      }
      lVar14 = (long)iVar9 * 4;
      for (lVar12 = 0; lVar14 = lVar14 + -4, pfVar16 = pfVar10,
          (param_4 & 0xffffffff) << 2 != lVar12; lVar12 = lVar12 + 4) {
        fVar20 = *(float *)((long)puVar7 + lVar12);
        *(float *)((long)pfVar10 + lVar12) = fVar20 * *(float *)((long)pfVar5 + lVar12);
        *(float *)((long)pfVar10 + lVar14) = fVar20 * *(float *)((long)pfVar5 + lVar14);
      }
    }
    pfVar6 = pfVar16;
    FUN_108b607a8(pfVar16,pfVar16,param_2,iVar17,iVar15 + 1,param_7);
    pfVar5 = pfVar16;
    for (lVar12 = 0; bVar4 = lVar12 == iVar15, lVar12 <= iVar15; lVar12 = lVar12 + 1) {
      fVar20 = 0.0;
      pfVar10 = pfVar16 + iVar17;
      for (lVar14 = (long)iVar17; lVar14 < iVar9; lVar14 = lVar14 + 1) {
        fVar20 = fVar20 + pfVar5[lVar14] * *pfVar10;
        pfVar10 = pfVar10 + 1;
      }
      param_2[lVar12] = fVar20 + param_2[lVar12];
      iVar17 = iVar17 + 1;
      pfVar5 = pfVar5 + -1;
    }
    func_0x000108b4c540(*(undefined8 *)(pfVar19 + -0x12));
    if (bVar4) {
      return (float *)0x0;
    }
  }
  ___stack_chk_fail();
  return pfVar6;
}



/* Entry: 108b4c3b8; end: 108b4c527;  */

long FUN_108b4c3b8(long param_1,long param_2,long param_3,ulong param_4,int param_5,ulong param_6,
                  undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fStack_54;
  float afStack_50 [2];
  undefined8 uStack_48;
  
  lVar4 = param_1;
  func_0x000108b4c554();
  uStack_48 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2) + 0xf &
             0xfffffffffffffff0);
  lVar3 = (long)afStack_50 - extraout_x8_00;
  iVar2 = (int)param_6;
  if ((iVar2 < 1) || ((int)param_4 < 0)) {
    _abort();
  }
  else {
    iVar9 = iVar2 - param_5;
    lVar8 = param_1;
    if ((int)param_4 != 0) {
      for (lVar4 = 0; (param_6 & 0xffffffff) << 2 != lVar4; lVar4 = lVar4 + 4) {
        *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(param_1 + lVar4);
      }
      lVar5 = (long)iVar2 * 4;
      for (lVar4 = 0; lVar5 = lVar5 + -4, lVar8 = lVar3, (param_4 & 0xffffffff) << 2 != lVar4;
          lVar4 = lVar4 + 4) {
        fVar10 = *(float *)(param_3 + lVar4);
        *(float *)(lVar3 + lVar4) = fVar10 * *(float *)(param_1 + lVar4);
        *(float *)(lVar3 + lVar5) = fVar10 * *(float *)(param_1 + lVar5);
      }
    }
    lVar4 = lVar8;
    FUN_108b607a8(lVar8,lVar8,param_2,iVar9,param_5 + 1,param_7);
    lVar5 = lVar8;
    for (lVar3 = 0; bVar1 = lVar3 == param_5, lVar3 <= param_5; lVar3 = lVar3 + 1) {
      fVar10 = 0.0;
      pfVar7 = (float *)(lVar8 + (long)iVar9 * 4);
      for (lVar6 = (long)iVar9; lVar6 < iVar2; lVar6 = lVar6 + 1) {
        fVar10 = fVar10 + *(float *)(lVar5 + lVar6 * 4) * *pfVar7;
        pfVar7 = pfVar7 + 1;
      }
      *(float *)(param_2 + lVar3 * 4) = fVar10 + *(float *)(param_2 + lVar3 * 4);
      iVar9 = iVar9 + 1;
      lVar5 = lVar5 + -4;
    }
    func_0x000108b4c540(uStack_48);
    if (bVar1) {
      return 0;
    }
  }
  ___stack_chk_fail();
  return lVar4;
}



/* Entry: 108b4c528; end: 108b4c577;  */

void FUN_108b4c528(void)

{
  return;
}



/* Entry: 108b4c578; end: 108b4cb63;  */

void FUN_108b4c578(byte *param_1,byte *param_2,byte *param_3,int param_4,ulong param_5,ulong param_6
                  ,ulong param_7,byte *param_8,byte *param_9,uint param_10,uint param_11,
                  int param_12,int param_13,float *param_14,int param_15,undefined4 param_16,
                  int param_17)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint uVar20;
  float extraout_w9;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 extraout_x11;
  int iVar24;
  long lVar25;
  long extraout_x12;
  undefined8 uVar26;
  undefined8 extraout_x12_00;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  byte *pbVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  ulong uVar41;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  ulong unaff_d13;
  undefined8 unaff_d14;
  float fVar42;
  undefined8 unaff_d15;
  byte abStack_1b0 [8];
  byte abStack_1a8 [8];
  uint uStack_1a0;
  byte abStack_19c [4];
  byte abStack_198 [4];
  byte abStack_194 [4];
  undefined8 uStack_190;
  byte *pbStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  byte *pbStack_178;
  uint uStack_16c;
  byte *pbStack_168;
  ulong uStack_160;
  int iStack_154;
  byte *pbStack_150;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  uint uStack_134;
  float *pfStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_90;
  
  uVar14 = (undefined4)(param_7 >> 0x20);
  uVar31 = (uint)param_7;
  uStack_118 = (ulong)param_11;
  uVar30 = (ulong)param_10;
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pfStack_130 = param_14;
  uVar16 = (uint)param_3;
  iVar21 = (int)param_2;
  if (param_13 == 0) {
    uVar12 = (ulong)(uint)*param_14;
    if ((param_15 != 0) || (*param_14 <= (float)(int)((uVar16 - iVar21) * param_10 * 2))) {
      uStack_17c = 0;
    }
    else {
      uStack_17c = (uint)((int)(param_10 * (uVar16 - iVar21)) < param_12);
    }
  }
  else {
    uVar12 = (ulong)(uint)*param_14;
    uStack_17c = 1;
  }
  lVar25 = 0;
  uStack_180 = param_16;
  uVar27 = -((ulong)param_2 >> 0x1f & 1) & 0xfffffffc00000000 | ((ulong)param_2 & 0xffffffff) << 2;
  fVar35 = 0.0;
  lVar6 = (long)iVar21;
  uVar41 = uVar27;
  do {
    for (; lVar6 < param_4; lVar6 = lVar6 + 1) {
      fVar37 = *(float *)(param_5 + uVar27) - *(float *)(param_6 + uVar27);
      fVar35 = fVar35 + fVar37 * fVar37;
      uVar27 = uVar27 + 4;
    }
    lVar25 = lVar25 + 1;
    uVar27 = uVar41 + (long)*(int *)(param_1 + 8) * 4;
    lVar6 = (long)iVar21;
    uVar41 = uVar27;
  } while (lVar25 < (int)param_10);
  pbStack_168 = param_9 + 0x20;
  uStack_160 = (ulong)*(uint *)(param_9 + 0x1c);
  iVar8 = *(int *)(param_9 + 0x18) + (int)LZCOUNT(*(undefined4 *)pbStack_168);
  uVar13 = iVar8 - 0x1d;
  uStack_16c = 0;
  if (uVar13 <= uVar31) {
    uStack_16c = (uint)(param_15 != 0);
  }
  uStack_140 = (uint)(uVar13 <= uVar31);
  uStack_17c = uStack_140 & uStack_17c;
  if (param_15 == 0) {
    uStack_140 = uStack_17c;
  }
  fVar37 = 200.0;
  if (fVar35 <= 200.0) {
    fVar37 = fVar35;
  }
  uStack_134 = iVar8 - 0x20;
  fVar35 = 16.0;
  if ((float)param_12 / 8.0 <= 16.0) {
    fVar35 = (float)param_12 / 8.0;
  }
  if ((int)(uVar16 - iVar21) < 0xb) {
    fVar35 = 16.0;
  }
  if (param_17 != 0) {
    fVar35 = 3.0;
  }
  uVar41 = (ulong)(uint)fVar35;
  uStack_b0 = *(undefined8 *)param_9;
  uStack_a8 = (undefined4)*(undefined8 *)(param_9 + 8);
  uStack_9c = *(undefined8 *)(param_9 + 0x14);
  uStack_a4 = (undefined4)*(undefined8 *)(param_9 + 0xc);
  uStack_a0 = (undefined4)((ulong)*(undefined8 *)(param_9 + 0xc) >> 0x20);
  uStack_c0 = *(undefined8 *)(param_9 + 0x30);
  uStack_c8 = *(undefined8 *)(param_9 + 0x28);
  uVar23 = *(undefined8 *)pbStack_168;
  uVar13 = *(int *)(param_1 + 8) * param_10;
  uVar27 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
  uVar13 = uVar31;
  pbStack_128 = param_8;
  pbStack_120 = param_1;
  uStack_d0 = uVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  fVar35 = (float)uVar23;
  uVar27 = (long)&uStack_190 - (uVar27 + 0xf & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar28 = (byte *)(uVar27 - extraout_x12);
  _memcpy(uVar27,param_6);
  iVar21 = (int)uStack_118;
  pbStack_178 = (byte *)(long)iVar21;
  uVar3 = uStack_140 == 1;
  iStack_154 = param_17;
  pbStack_150 = param_2;
  uStack_148 = uVar16;
  uStack_144 = uVar31;
  if ((bool)uVar3) {
    pbVar28[-8] = 1;
    pbVar28[-7] = 0;
    pbVar28[-6] = 0;
    pbVar28[-5] = 0;
    *(int *)(pbVar28 + -4) = param_17;
    *(uint *)(pbVar28 + -0x10) = param_10;
    *(int *)(pbVar28 + -0xc) = iVar21;
    puVar15 = &UNK_10df90c46 + (long)iVar21 * 0x54;
    *(byte **)(pbVar28 + -0x20) = pbVar28;
    *(byte **)(pbVar28 + -0x18) = param_9;
    pbVar34 = pbStack_120;
    uVar33 = (ulong)uStack_134;
    pbVar7 = pbStack_120;
    uVar10 = param_5;
    uVar11 = uVar27;
    func_0x000108b4d6c8(pbStack_120,param_2,param_3);
    if ((uStack_17c & 1) == 0) {
      uStack_17c = (uint)pbVar7;
      func_0x000108b4d6b0();
      *(ulong *)(extraout_x8_00 + -0x100) = uVar30;
      uVar30 = (ulong)*(uint *)(param_9 + 0x1c);
      goto LAB_108b4c8e8;
    }
    _memcpy(param_6,uVar27,
            -(ulong)(*(int *)(pbVar34 + 8) * param_10 >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(*(int *)(pbVar34 + 8) * param_10) << 2);
    param_10 = *(int *)(pbVar34 + 8) * param_10;
    pbVar7 = pbVar28;
    pbVar29 = pbVar28;
    uVar32 = param_5;
LAB_108b4caac:
    puVar9 = (undefined *)((ulong)param_10 << 2);
    pbVar5 = pbStack_128;
    _memcpy();
    param_5 = uVar10;
  }
  else {
    func_0x000108b4d6b0();
    *(ulong *)(extraout_x8 + -0x100) = uVar30;
    uStack_17c = 0;
    uVar33 = (ulong)uStack_134;
    uVar30 = uStack_160;
LAB_108b4c8e8:
    uVar27 = uStack_160;
    pbVar34 = param_9;
    func_0x000108b49c74();
    param_3 = pbStack_168;
    uStack_160 = CONCAT44(uStack_160._4_4_,(int)pbVar34);
    pbVar29 = *(byte **)param_9;
    uStack_108 = *(undefined8 *)(param_9 + 0x10);
    uStack_110 = *(undefined8 *)(param_9 + 8);
    uStack_100 = *(undefined4 *)(param_9 + 0x18);
    uStack_e8 = *(undefined8 *)(pbStack_168 + 8);
    uStack_f0 = *(undefined8 *)pbStack_168;
    uStack_e0 = *(undefined8 *)(pbStack_168 + 0x10);
    uStack_134 = (uint)uVar30;
    uVar30 = (ulong)(uStack_134 - (int)uVar27);
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar30 + 0xf & 0x1fffffff0);
    pbVar28 = pbVar28 + -extraout_x8_01;
    _memcpy(pbVar28,pbVar29 + uVar27,uVar30);
    iVar21 = iStack_154;
    param_2 = pbStack_178;
    *(ulong *)(param_9 + 8) = CONCAT44(uStack_a4,uStack_a8);
    *(undefined8 *)param_9 = uStack_b0;
    *(undefined8 *)(param_9 + 0x14) = uStack_9c;
    *(ulong *)(param_9 + 0xc) = CONCAT44(uStack_a0,uStack_a4);
    *(int *)(param_9 + 0x1c) = (int)uVar27;
    *(undefined8 *)(param_3 + 8) = uStack_c8;
    *(undefined8 *)param_3 = uStack_d0;
    *(undefined8 *)(param_3 + 0x10) = uStack_c0;
    puVar15 = &UNK_10df90c1c + (long)(int)pbStack_178 * 0x54;
    pbVar28[-8] = 0;
    pbVar28[-7] = 0;
    pbVar28[-6] = 0;
    pbVar28[-5] = 0;
    *(int *)(pbVar28 + -4) = iVar21;
    *(int *)(pbVar28 + -0xc) = (int)uStack_118;
    *(uint *)(pbVar28 + -0x10) = uStack_140;
    *(byte **)(pbVar28 + -0x18) = param_9;
    *(byte **)(pbVar28 + -0x20) = pbStack_128;
    puVar9 = (undefined *)(ulong)uStack_148;
    uVar32 = (ulong)uStack_144;
    pbVar5 = pbStack_120;
    pbVar7 = pbStack_150;
    uVar11 = param_6;
    param_7 = uVar32;
    func_0x000108b4d6c8();
    if (uStack_16c != 0) {
      uVar3 = uStack_17c == (uint)pbVar5;
      if (uStack_17c < (uint)pbVar5) {
LAB_108b4ca28:
        *(byte **)param_9 = pbVar29;
        *(undefined8 *)(param_9 + 0x10) = uStack_108;
        *(undefined8 *)(param_9 + 8) = uStack_110;
        *(undefined4 *)(param_9 + 0x18) = uStack_100;
        *(uint *)(param_9 + 0x1c) = uStack_134;
        *(undefined8 *)(param_3 + 8) = uStack_e8;
        *(undefined8 *)param_3 = uStack_f0;
        *(undefined8 *)(param_3 + 0x10) = uStack_e0;
        uVar23 = uStack_f0;
        _memcpy(pbVar29 + uVar27,pbVar28,uVar30);
        pbVar29 = pbStack_120;
        param_10 = uStack_140;
        fVar35 = (float)uVar23;
        pbVar34 = (byte *)CONCAT44(uStack_13c,uStack_140);
        _memcpy(param_6,uStack_190,
                -(ulong)(*(int *)(pbStack_120 + 8) * uStack_140 >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(*(int *)(pbStack_120 + 8) * uStack_140) << 2);
        param_10 = *(int *)(pbVar29 + 8) * param_10;
        pbVar7 = pbStack_188;
        uVar10 = param_5;
        goto LAB_108b4caac;
      }
      if ((bool)uVar3) {
        fVar35 = (float)uVar12 * (float)uVar32;
        func_0x000108b4d6e8(uStack_180);
        uVar31 = (uint)(fVar35 / (float)(int)(uStack_140 << 9));
        uVar32 = (ulong)uVar31;
        pbVar5 = param_9;
        func_0x000108b49c74();
        iVar21 = (int)pbVar5 + uVar31;
        uVar3 = iVar21 == (int)uStack_160;
        if (!(bool)uVar3 && (int)uStack_160 <= iVar21) goto LAB_108b4ca28;
      }
    }
    fVar35 = *(float *)(&UNK_10df90d6c + (long)param_2 * 4) *
             *(float *)(&UNK_10df90d6c + (long)param_2 * 4);
    fVar37 = fVar37 + *pfStack_130 * fVar35;
    pbVar34 = pbVar28;
  }
  *pfStack_130 = fVar37;
  func_0x000108b4d69c(uStack_90);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pbVar28 + -0xa0) = unaff_d15;
  *(undefined8 *)(pbVar28 + -0x98) = unaff_d14;
  *(ulong *)(pbVar28 + -0x90) = unaff_d13;
  *(undefined8 *)(pbVar28 + -0x88) = unaff_d12;
  *(undefined8 *)(pbVar28 + -0x80) = unaff_d11;
  *(ulong *)(pbVar28 + -0x78) = (ulong)(uint)fVar37;
  *(ulong *)(pbVar28 + -0x70) = uVar12;
  *(ulong *)(pbVar28 + -0x68) = uVar41;
  *(byte **)(pbVar28 + -0x60) = param_2;
  *(ulong *)(pbVar28 + -0x58) = uVar33;
  *(ulong *)(pbVar28 + -0x50) = uVar27;
  *(byte **)(pbVar28 + -0x48) = param_3;
  *(ulong *)(pbVar28 + -0x40) = uVar32;
  *(ulong *)(pbVar28 + -0x38) = uVar30;
  *(byte **)(pbVar28 + -0x30) = param_9;
  *(ulong *)(pbVar28 + -0x28) = param_6;
  *(byte **)(pbVar28 + -0x20) = pbVar34;
  *(byte **)(pbVar28 + -0x18) = pbVar29;
  *(undefined1 **)(pbVar28 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(pbVar28 + -8) = FUN_108b4cb64;
  *(float *)(pbVar28 + -0xd0) = fVar35;
  *(undefined **)(pbVar28 + -0x100) = puVar15;
  *(ulong *)(pbVar28 + -0xd8) = param_5;
  *(int *)(pbVar28 + -0xf0) = (int)puVar9;
  *(int *)(pbVar28 + -0xcc) = (int)pbVar7;
  *(byte **)(pbVar28 + -200) = pbVar5;
  uVar31 = *(uint *)(pbVar28 + 0x18);
  pbVar34 = (byte *)(ulong)uVar31;
  lVar25 = *(long *)(pbVar28 + 8);
  *(undefined8 *)(pbVar28 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pbVar28[-0xb8] = 0;
  pbVar28[-0xb7] = 0;
  pbVar28[-0xb6] = 0;
  pbVar28[-0xb5] = 0;
  pbVar28[-0xb4] = 0;
  pbVar28[-0xb3] = 0;
  pbVar28[-0xb2] = 0;
  pbVar28[-0xb1] = 0;
  uVar30 = uVar11;
  uVar12 = param_7;
  if ((int)(uVar13 + 3) <= (int)param_7) {
    puVar9 = (undefined *)0x3;
    func_0x000108b4a0a0(lVar25);
    pbVar7 = pbVar34;
  }
  *(undefined8 *)(pbVar28 + -0xe0) = *(undefined8 *)pbVar28;
  if (uVar31 == 0) {
    fVar35 = *(float *)(&UNK_10df90d7c + (long)*(int *)(pbVar28 + 0x14) * 4);
    fVar37 = *(float *)(&UNK_10df90d6c + (long)*(int *)(pbVar28 + 0x14) * 4);
  }
  else {
    fVar37 = 0.0;
    fVar35 = 0.1499939;
  }
  uVar27 = 0;
  *(undefined4 *)(pbVar28 + -0xf4) = *(undefined4 *)(pbVar28 + 0x1c);
  *(long *)(pbVar28 + -0xe8) = (long)*(int *)(pbVar28 + 0x10);
  *(int *)(pbVar28 + -0xec) = (int)param_7 + 0x20;
  *(int *)(pbVar28 + -0x104) = *(int *)(pbVar28 + 0x10) * 3;
  uVar31 = *(uint *)(pbVar28 + -0xcc);
  do {
    iVar8 = (int)puVar9;
    iVar21 = (int)pbVar7;
    if (*(int *)(pbVar28 + -0xf0) <= (int)uVar31) {
      bVar4 = *(int *)(pbVar28 + -0xf4) == 0;
      uVar16 = (uint)uVar27;
      if (!bVar4) {
        uVar16 = 0;
      }
      uVar33 = (ulong)uVar16;
      func_0x000108b4d69c(*(undefined8 *)(pbVar28 + -0xb0));
      if (bVar4) {
        return;
      }
      ___stack_chk_fail();
      *(ulong *)(pbVar28 + -0x1a0) = unaff_d13;
      pbVar28[-0x198] = 0;
      pbVar28[-0x197] = 0;
      pbVar28[-0x196] = 0x10;
      pbVar28[-0x195] = 0xc1;
      pbVar28[-0x194] = 0;
      pbVar28[-0x193] = 0;
      pbVar28[-0x192] = 0;
      pbVar28[-0x191] = 0;
      *(ulong *)(pbVar28 + -400) = (ulong)(uint)-fVar35;
      *(ulong *)(pbVar28 + -0x188) = (ulong)(uint)-fVar37;
      *(ulong *)(pbVar28 + -0x180) = (ulong)(uint)fVar37;
      *(ulong *)(pbVar28 + -0x178) = uVar41;
      *(byte **)(pbVar28 + -0x170) = param_2;
      *(ulong *)(pbVar28 + -0x168) = uVar27;
      *(ulong *)(pbVar28 + -0x160) = param_7;
      *(long *)(pbVar28 + -0x158) = lVar25;
      *(ulong *)(pbVar28 + -0x150) = uVar32;
      *(ulong *)(pbVar28 + -0x148) = (ulong)uVar31;
      *(byte **)(pbVar28 + -0x140) = param_9;
      *(ulong *)(pbVar28 + -0x138) = param_6;
      *(ulong *)(pbVar28 + -0x130) = uVar11;
      *(byte **)(pbVar28 + -0x128) = pbVar29;
      *(byte **)(pbVar28 + -0x120) = pbVar28 + -0x10;
      *(code **)(pbVar28 + -0x118) = FUN_108b4ce9c;
      *(ulong *)(pbVar28 + -0x1b8) = uVar12;
      iVar1 = *(int *)(pbVar28 + -0x110);
      *(long *)(pbVar28 + -0x1b0) = (long)iVar8;
      uVar23 = 1;
      uVar26 = 0xe;
      for (lVar25 = (long)iVar21; lVar25 < *(long *)(pbVar28 + -0x1b0); lVar25 = lVar25 + 1) {
        uVar31 = *(uint *)(CONCAT44(uVar14,uVar13) + lVar25 * 4);
        if ((0 < (int)uVar31) &&
           ((int)(*(int *)(puVar15 + 0x18) + uVar31 * iVar1 +
                  (int)LZCOUNT(*(undefined4 *)(puVar15 + 0x20)) + -0x20) <=
            *(int *)(puVar15 + 8) * 8)) {
          if (*(long *)(pbVar28 + -0x1b8) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = (uint)*(short *)(*(long *)(pbVar28 + -0x1b8) + lVar25 * 4);
          }
          iVar21 = 0;
          iVar22 = (int)uVar23;
          iVar8 = (0x10000 << (ulong)(uVar31 & 0x1f)) >> 0x10;
          uVar31 = iVar8 - 1;
          iVar24 = (int)uVar26;
          iVar18 = *(int *)(uVar33 + 8);
          *(ulong *)(pbVar28 + -0x1a8) = uVar30 + lVar25 * 4;
          do {
            uVar19 = (uint)(((float)(iVar22 << (ulong)(uVar16 & 0x1f)) *
                             *(float *)(*(long *)(pbVar28 + -0x1a8) + (long)(iVar21 * iVar18) * 4) +
                            0.5) * (float)iVar8);
            if ((int)uVar31 <= (int)uVar19) {
              uVar19 = uVar31;
            }
            uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
            FUN_108b4a1a0(puVar15,uVar19);
            fVar35 = (float)uVar19 + 0.5;
            func_0x000108b4d6e8(1 << (ulong)(0xeU - *(int *)(CONCAT44(uVar14,uVar13) + lVar25 * 4) &
                                            0x1f));
            iVar18 = *(int *)(uVar33 + 8);
            lVar6 = lVar25 + iVar18 * iVar21;
            fVar35 = ((float)(iVar22 << (ulong)(iVar24 - uVar16 & 0x1f)) / 16384.0) *
                     (extraout_w9 * fVar35 + -0.5);
            *(float *)(param_5 + lVar6 * 4) = *(float *)(param_5 + lVar6 * 4) + fVar35;
            *(float *)(uVar30 + lVar6 * 4) = *(float *)(uVar30 + lVar6 * 4) - fVar35;
            iVar21 = iVar21 + 1;
            uVar23 = extraout_x11;
            uVar26 = extraout_x12_00;
          } while (iVar21 < iVar1);
        }
      }
      return;
    }
    param_6 = 0;
    uVar19 = *(int *)(pbVar28 + -0x104) * (uVar31 - *(int *)(pbVar28 + -0xf0));
    uVar32 = (ulong)uVar19;
    bVar4 = *(int *)(pbVar28 + -0xf4) != 0;
    param_2 = (byte *)(ulong)((bVar4 && uVar31 != 1) &&
                             (*(int *)(pbVar28 + -0xf4) == 0 || 0 < (int)uVar31));
    uVar16 = uVar31;
    if (0x13 < (int)uVar31) {
      uVar16 = 0x14;
    }
    param_9 = (byte *)(*(long *)(pbVar28 + -0x100) + (long)(int)(uVar16 << 1));
    iVar21 = *(int *)(*(long *)(pbVar28 + -200) + 8);
    do {
      iVar21 = uVar31 + iVar21 * (int)param_6;
      fVar36 = *(float *)(*(long *)(pbVar28 + -0xd8) + (long)iVar21 * 4);
      fVar38 = *(float *)(uVar11 + (long)iVar21 * 4);
      fVar2 = -9.0;
      if (-9.0 <= fVar38) {
        fVar2 = fVar38;
      }
      unaff_d13 = (ulong)(uint)fVar2;
      fVar42 = *(float *)(pbVar28 + param_6 * 4 + -0xb8);
      fVar40 = (fVar36 + fVar2 * -fVar37) - fVar42;
      uVar41 = (ulong)(uint)fVar40;
      uVar16 = (uint)(fVar40 + 0.5);
      fVar39 = -28.0;
      if (-28.0 <= fVar38) {
        fVar39 = fVar38;
      }
      uVar17 = uVar16 + (int)((fVar39 - *(float *)(pbVar28 + -0xd0)) - fVar36);
      uVar20 = uVar16;
      if (fVar36 < fVar39 - *(float *)(pbVar28 + -0xd0)) {
        uVar20 = uVar17 & (int)uVar17 >> 0x1f;
      }
      if ((uVar16 & 0x80000000) != 0) {
        uVar16 = uVar20;
      }
      pbVar29 = (byte *)(ulong)uVar16;
      *(uint *)(pbVar28 + -0xbc) = uVar16;
      iVar8 = (*(int *)(pbVar28 + -0xec) - *(int *)(lVar25 + 0x18)) -
              (int)LZCOUNT(*(undefined4 *)(lVar25 + 0x20));
      iVar21 = iVar8 + uVar19;
      uVar17 = uVar16;
      if (uVar31 != *(uint *)(pbVar28 + -0xcc) && iVar21 < 0x18) {
        if (0 < (int)uVar16) {
          uVar17 = 1;
        }
        *(uint *)(pbVar28 + -0xbc) = uVar17;
        if (iVar21 < 0x10) {
          if (0x7fffffff < uVar17) {
            uVar17 = 0xffffffff;
          }
          *(uint *)(pbVar28 + -0xbc) = uVar17;
        }
      }
      if (bVar4 && 1 < (int)uVar31) {
        uVar17 = uVar17 & (int)uVar17 >> 0x1f;
        *(uint *)(pbVar28 + -0xbc) = uVar17;
      }
      if (iVar8 < 0xf) {
        if (iVar8 < 2) {
          if (iVar8 != 1) {
            param_7 = 0xffffffff;
            goto LAB_108b4cdf8;
          }
          uVar20 = uVar17 & (int)uVar17 >> 0x1f;
          pbVar7 = (byte *)(ulong)-uVar20;
          puVar9 = (undefined *)0x1;
          func_0x000108b4a0a0(lVar25);
        }
        else {
          uVar20 = (uint)(0 < (int)uVar17);
          if ((int)uVar17 < 0) {
            uVar20 = 0xffffffff;
          }
          pbVar7 = (byte *)(ulong)(uVar20 << 1 ^ (int)uVar17 >> 0x1f);
          puVar9 = &UNK_10df90d8c;
          param_5 = 2;
          func_0x000108b4a0c4(lVar25);
        }
        param_7 = (ulong)uVar20;
      }
      else {
        puVar9 = (undefined *)((ulong)*param_9 << 7);
        param_5 = (ulong)param_9[1] << 6;
        pbVar7 = pbVar28 + -0xbc;
        func_0x000108b4acf0(lVar25);
        param_7 = (ulong)*(uint *)(pbVar28 + -0xbc);
      }
LAB_108b4cdf8:
      fVar36 = (float)(int)param_7;
      iVar21 = *(int *)(*(long *)(pbVar28 + -200) + 8);
      iVar1 = uVar31 + iVar21 * (int)param_6;
      *(float *)(*(long *)(pbVar28 + -0xe0) + (long)iVar1 * 4) = fVar40 - fVar36;
      iVar18 = uVar16 - (int)param_7;
      iVar8 = -iVar18;
      if (-1 < iVar18) {
        iVar8 = iVar18;
      }
      uVar27 = (ulong)(uint)(iVar8 + (int)uVar27);
      *(float *)(uVar11 + (long)iVar1 * 4) = fVar42 + fVar2 * fVar37 + fVar36;
      *(float *)(pbVar28 + param_6 * 4 + -0xb8) = fVar42 + fVar36 + fVar36 * -fVar35;
      param_6 = param_6 + 1;
    } while ((long)param_6 < *(long *)(pbVar28 + -0xe8));
    uVar31 = uVar31 + 1;
  } while( true );
}



/* Entry: 108b4cb64; end: 108b4ce9b;  */

void FUN_108b4cb64(float param_1,long param_2,uint *param_3,undefined *param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,long param_10,
                  long param_11,int param_12,int param_13,uint param_14,int param_15)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  float extraout_w9;
  int iVar22;
  undefined8 uVar23;
  undefined8 extraout_x11;
  int iVar24;
  undefined8 uVar25;
  undefined8 extraout_x12;
  long lVar26;
  uint uVar27;
  uint *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iStack_110;
  uint uStack_bc;
  float afStack_b8 [2];
  undefined8 uStack_b0;
  
  uVar17 = (undefined4)((ulong)param_8 >> 0x20);
  iVar16 = (int)param_8;
  uVar15 = (undefined4)((ulong)param_7 >> 0x20);
  iVar13 = (int)param_7;
  iVar9 = (int)param_4;
  puVar28 = (uint *)(ulong)param_14;
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  afStack_b8[0] = 0.0;
  afStack_b8[1] = 0.0;
  puVar8 = param_3;
  lVar11 = param_5;
  lVar12 = param_6;
  iVar14 = iVar13;
  lVar18 = param_9;
  if (iVar16 + 3 <= iVar13) {
    param_4 = (undefined *)0x3;
    func_0x000108b4a0a0(param_11);
    puVar8 = puVar28;
  }
  if (param_14 == 0) {
    fVar29 = *(float *)(&UNK_10df90d7c + (long)param_13 * 4);
    fVar34 = *(float *)(&UNK_10df90d6c + (long)param_13 * 4);
  }
  else {
    fVar34 = 0.0;
    fVar29 = 0.1499939;
  }
  uVar27 = 0;
  iVar20 = (int)param_3;
  while( true ) {
    iVar10 = (int)param_4;
    iVar22 = (int)puVar8;
    if (iVar9 <= iVar20) break;
    lVar26 = 0;
    iVar22 = iVar20;
    if (0x13 < iVar20) {
      iVar22 = 0x14;
    }
    pbVar1 = (byte *)(param_9 + (iVar22 << 1));
    iVar22 = *(int *)(param_2 + 8);
    do {
      iVar22 = iVar20 + iVar22 * (int)lVar26;
      fVar30 = *(float *)(param_5 + (long)iVar22 * 4);
      fVar31 = *(float *)(param_6 + (long)iVar22 * 4);
      fVar5 = -9.0;
      if (-9.0 <= fVar31) {
        fVar5 = fVar31;
      }
      fVar35 = afStack_b8[lVar26];
      fVar33 = (fVar30 + fVar5 * -fVar34) - fVar35;
      uVar19 = (uint)(fVar33 + 0.5);
      fVar32 = -28.0;
      if (-28.0 <= fVar31) {
        fVar32 = fVar31;
      }
      uVar21 = uVar19 + (int)((fVar32 - param_1) - fVar30);
      uVar3 = uVar19;
      if (fVar30 < fVar32 - param_1) {
        uVar3 = uVar21 & (int)uVar21 >> 0x1f;
      }
      if ((uVar19 & 0x80000000) != 0) {
        uVar19 = uVar3;
      }
      iVar10 = ((iVar13 + 0x20) - *(int *)(param_11 + 0x18)) -
               (int)LZCOUNT(*(undefined4 *)(param_11 + 0x20));
      iVar22 = iVar10 + param_12 * 3 * (iVar20 - iVar9);
      uStack_bc = uVar19;
      if (iVar20 != (int)param_3 && iVar22 < 0x18) {
        if (0 < (int)uVar19) {
          uStack_bc = 1;
        }
        if ((iVar22 < 0x10) && (0x7fffffff < uStack_bc)) {
          uStack_bc = 0xffffffff;
        }
      }
      if (param_15 != 0 && 1 < iVar20) {
        uStack_bc = uStack_bc & (int)uStack_bc >> 0x1f;
      }
      if (iVar10 < 0xf) {
        if (iVar10 < 2) {
          if (iVar10 == 1) {
            uVar21 = uStack_bc & (int)uStack_bc >> 0x1f;
            puVar8 = (uint *)(ulong)-uVar21;
            param_4 = (undefined *)0x1;
            func_0x000108b4a0a0(param_11);
          }
          else {
            uVar21 = 0xffffffff;
          }
        }
        else {
          uVar21 = (uint)(0 < (int)uStack_bc);
          if ((int)uStack_bc < 0) {
            uVar21 = 0xffffffff;
          }
          puVar8 = (uint *)(ulong)(uVar21 << 1 ^ (int)uStack_bc >> 0x1f);
          param_4 = &UNK_10df90d8c;
          lVar11 = 2;
          func_0x000108b4a0c4(param_11);
        }
      }
      else {
        param_4 = (undefined *)((ulong)*pbVar1 << 7);
        lVar11 = (ulong)pbVar1[1] << 6;
        puVar8 = &uStack_bc;
        func_0x000108b4acf0(param_11);
        uVar21 = uStack_bc;
      }
      fVar30 = (float)(int)uVar21;
      iVar22 = *(int *)(param_2 + 8);
      iVar24 = iVar20 + iVar22 * (int)lVar26;
      *(float *)(param_10 + (long)iVar24 * 4) = fVar33 - fVar30;
      iVar4 = uVar19 - uVar21;
      iVar10 = -iVar4;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      uVar27 = iVar10 + uVar27;
      *(float *)(param_6 + (long)iVar24 * 4) = fVar35 + fVar5 * fVar34 + fVar30;
      afStack_b8[lVar26] = fVar35 + fVar30 + fVar30 * -fVar29;
      lVar26 = lVar26 + 1;
    } while (lVar26 < param_12);
    iVar20 = iVar20 + 1;
  }
  bVar6 = param_15 == 0;
  if (!bVar6) {
    uVar27 = 0;
  }
  uVar7 = (ulong)uVar27;
  func_0x000108b4d69c(uStack_b0);
  if (bVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = 1;
  uVar25 = 0xe;
  for (lVar26 = (long)iVar22; lVar26 < iVar10; lVar26 = lVar26 + 1) {
    uVar27 = *(uint *)(CONCAT44(uVar17,iVar16) + lVar26 * 4);
    if ((0 < (int)uVar27) &&
       ((int)(*(int *)(lVar18 + 0x18) + uVar27 * iStack_110 +
              (int)LZCOUNT(*(undefined4 *)(lVar18 + 0x20)) + -0x20) <= *(int *)(lVar18 + 8) * 8)) {
      if (CONCAT44(uVar15,iVar14) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (uint)*(short *)(CONCAT44(uVar15,iVar14) + lVar26 * 4);
      }
      iVar9 = 0;
      iVar22 = (int)uVar23;
      iVar13 = (0x10000 << (ulong)(uVar27 & 0x1f)) >> 0x10;
      uVar27 = iVar13 - 1;
      iVar24 = (int)uVar25;
      iVar20 = *(int *)(uVar7 + 8);
      do {
        uVar21 = (uint)(((float)(iVar22 << (ulong)(uVar19 & 0x1f)) *
                         *(float *)(lVar12 + lVar26 * 4 + (long)(iVar9 * iVar20) * 4) + 0.5) *
                       (float)iVar13);
        if ((int)uVar27 <= (int)uVar21) {
          uVar21 = uVar27;
        }
        uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
        FUN_108b4a1a0(lVar18,uVar21);
        fVar29 = (float)uVar21 + 0.5;
        func_0x000108b4d6e8(1 << (ulong)(0xeU - *(int *)(CONCAT44(uVar17,iVar16) + lVar26 * 4) &
                                        0x1f));
        iVar20 = *(int *)(uVar7 + 8);
        lVar2 = lVar26 + iVar20 * iVar9;
        fVar29 = ((float)(iVar22 << (ulong)(iVar24 - uVar19 & 0x1f)) / 16384.0) *
                 (extraout_w9 * fVar29 + -0.5);
        *(float *)(lVar11 + lVar2 * 4) = *(float *)(lVar11 + lVar2 * 4) + fVar29;
        *(float *)(lVar12 + lVar2 * 4) = *(float *)(lVar12 + lVar2 * 4) - fVar29;
        iVar9 = iVar9 + 1;
        uVar23 = extraout_x11;
        uVar25 = extraout_x12;
      } while (iVar9 < iStack_110);
    }
  }
  return;
}



/* Entry: 108b4ce9c; end: 108b4d04f;  */

void FUN_108b4ce9c(long param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,int param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float extraout_w9;
  int iVar7;
  undefined8 uVar8;
  undefined8 extraout_x11;
  int iVar9;
  undefined8 uVar10;
  undefined8 extraout_x12;
  long lVar11;
  int iVar12;
  float fVar13;
  
  uVar8 = 1;
  uVar10 = 0xe;
  for (lVar11 = (long)param_2; lVar11 < param_3; lVar11 = lVar11 + 1) {
    uVar3 = *(uint *)(param_7 + lVar11 * 4);
    if ((0 < (int)uVar3) &&
       ((int)(*(int *)(param_8 + 0x18) + uVar3 * param_9 +
              (int)LZCOUNT(*(undefined4 *)(param_8 + 0x20)) + -0x20) <= *(int *)(param_8 + 8) * 8))
    {
      if (param_6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(short *)(param_6 + lVar11 * 4);
      }
      iVar12 = 0;
      iVar7 = (int)uVar8;
      iVar2 = (0x10000 << (ulong)(uVar3 & 0x1f)) >> 0x10;
      uVar3 = iVar2 - 1;
      iVar9 = (int)uVar10;
      iVar5 = *(int *)(param_1 + 8);
      do {
        uVar6 = (uint)(((float)(iVar7 << (ulong)(uVar4 & 0x1f)) *
                        *(float *)(param_5 + lVar11 * 4 + (long)(iVar12 * iVar5) * 4) + 0.5) *
                      (float)iVar2);
        if ((int)uVar3 <= (int)uVar6) {
          uVar6 = uVar3;
        }
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        FUN_108b4a1a0(param_8,uVar6);
        fVar13 = (float)uVar6 + 0.5;
        func_0x000108b4d6e8(1 << (ulong)(0xeU - *(int *)(param_7 + lVar11 * 4) & 0x1f));
        iVar5 = *(int *)(param_1 + 8);
        lVar1 = lVar11 + iVar5 * iVar12;
        fVar13 = ((float)(iVar7 << (ulong)(iVar9 - uVar4 & 0x1f)) / 16384.0) *
                 (extraout_w9 * fVar13 + -0.5);
        *(float *)(param_4 + lVar1 * 4) = *(float *)(param_4 + lVar1 * 4) + fVar13;
        *(float *)(param_5 + lVar1 * 4) = *(float *)(param_5 + lVar1 * 4) - fVar13;
        iVar12 = iVar12 + 1;
        uVar8 = extraout_x11;
        uVar10 = extraout_x12;
      } while (iVar12 < param_9);
    }
  }
  return;
}



/* Entry: 108b4d050; end: 108b4d46b;  */

void FUN_108b4d050(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,long param_7,ulong param_8)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar8;
  undefined8 in_stack_000000a0;
  int in_stack_000000a8;
  
  func_0x000108b4d6f4();
  func_0x000108b4d6d4();
  uVar5 = extraout_x9;
  while (uVar4 = uVar5, lVar6 = (long)param_2, (int)uVar5 != 2) {
    while( true ) {
      if (param_3 <= lVar6 || (int)param_8 < in_stack_000000a8) break;
      if ((*(int *)(param_6 + lVar6 * 4) < 8) && (*(int *)(param_7 + lVar6 * 4) == (int)uVar4)) {
        iVar7 = 0;
        iVar3 = *(int *)(unaff_x24 + 8);
        do {
          bVar2 = 0.0 <= *(float *)(unaff_x22 + lVar6 * 4 + (long)(iVar7 * iVar3) * 4);
          fVar8 = 1.0;
          if (!bVar2) {
            fVar8 = 0.0;
          }
          FUN_108b4a1a0(in_stack_000000a0,bVar2,1);
          fVar8 = fVar8 + -0.5;
          func_0x000108b4d6e8(1 << (ulong)(0xdU - *(int *)(param_6 + lVar6 * 4) & 0x1f));
          iVar3 = *(int *)(unaff_x24 + 8);
          lVar1 = lVar6 + iVar3 * iVar7;
          if (unaff_x23 != 0) {
            *(float *)(unaff_x23 + lVar1 * 4) =
                 fVar8 * 6.1035156e-05 + *(float *)(unaff_x23 + lVar1 * 4);
          }
          *(float *)(unaff_x22 + lVar1 * 4) =
               *(float *)(unaff_x22 + lVar1 * 4) - fVar8 * 6.1035156e-05;
          iVar7 = iVar7 + 1;
        } while (iVar7 < in_stack_000000a8);
        uVar4 = uVar5 & 0xffffffff;
        param_8 = (ulong)(uint)((int)param_8 - iVar7);
      }
      lVar6 = lVar6 + 1;
    }
    uVar5 = (ulong)((int)uVar4 + 1);
  }
  return;
}



/* Entry: 108b4d46c; end: 108b4d677;  */

void FUN_108b4d46c(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,ulong param_7,ulong param_8,int param_9)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong extraout_x9;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  float fVar7;
  
  func_0x000108b4d6d4();
  uVar4 = extraout_x9;
  while (uVar3 = uVar4, lVar6 = (long)param_2, (int)uVar4 != 2) {
    while( true ) {
      if (param_3 <= lVar6 || (int)param_7 < param_9) break;
      if ((*(int *)(unaff_x22 + lVar6 * 4) < 8) && (*(int *)(param_6 + lVar6 * 4) == (int)uVar3)) {
        iVar5 = 0;
        lVar1 = unaff_x23 + lVar6 * 4;
        do {
          uVar3 = param_8;
          FUN_108b49f40(param_8,1);
          if (unaff_x23 != 0) {
            fVar7 = (float)(uVar3 & 0xffffffff) + -0.5;
            func_0x000108b4d6e8(1 << (ulong)(0xdU - *(int *)(unaff_x22 + lVar6 * 4) & 0x1f));
            iVar2 = *(int *)(unaff_x24 + 8) * iVar5;
            *(float *)(lVar1 + (long)iVar2 * 4) =
                 *(float *)(lVar1 + (long)iVar2 * 4) + fVar7 * 6.1035156e-05;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_9);
        uVar3 = uVar4 & 0xffffffff;
        param_7 = (ulong)(uint)((int)param_7 - iVar5);
      }
      lVar6 = lVar6 + 1;
    }
    uVar4 = (ulong)((int)uVar3 + 1);
  }
  return;
}



/* Entry: 108b4d678; end: 108b4d717;  */

void FUN_108b4d678(void)

{
  return;
}



/* Entry: 108b4d718; end: 108b4e283;  */

ulong FUN_108b4d718(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,int param_6,
                   int *param_7,uint *param_8,uint param_9,undefined4 param_10,int *param_11,
                   ulong param_12,long param_13,undefined4 param_14,undefined4 param_15,
                   uint param_16,uint param_17,ulong param_18,int param_19,uint param_20,
                   uint param_21)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  long extraout_x8;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar28;
  ulong uVar29;
  long extraout_x13;
  long extraout_x15;
  short sVar30;
  short sVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long alStack_170 [3];
  int iStack_154;
  uint auStack_150 [4];
  int *piStack_140;
  uint uStack_138;
  int iStack_134;
  long lStack_130;
  long lStack_128;
  uint uStack_11c;
  uint *puStack_118;
  ulong uStack_110;
  int *piStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  int iStack_b4;
  ulong uStack_b0;
  int iStack_a4;
  ulong uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  ulong uStack_88;
  int iStack_7c;
  long lStack_78;
  long lStack_70;
  
  uStack_a0 = param_18;
  piStack_140 = param_11;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)*(int *)(param_1 + 8);
  auStack_150[3] = 0;
  if (7 < (int)param_9) {
    auStack_150[3] = 8;
  }
  iStack_7c = (param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU)) - auStack_150[3];
  uStack_f8 = param_2 & 0xffffffff;
  if (param_16 == 2) {
    uVar20 = (uint)(byte)(&UNK_10df90d8f)[(long)(int)param_3 - (long)(int)param_2];
    iVar5 = 0;
    if (7 < (int)(iStack_7c - uVar20)) {
      iVar5 = 8;
    }
    iStack_134 = 0;
    if ((int)uVar20 <= iStack_7c) {
      iStack_134 = iVar5;
    }
    uStack_11c = 0;
    if ((int)uVar20 <= iStack_7c) {
      uStack_11c = (uint)(byte)(&UNK_10df90d8f)[(long)(int)param_3 - (long)(int)param_2];
      iStack_7c = (iStack_7c - uVar20) - iVar5;
    }
  }
  else {
    iStack_134 = 0;
    uStack_11c = 0;
  }
  uStack_b0 = (ulong)param_20;
  puStack_98 = (undefined *)(ulong)param_21;
  iStack_a4 = param_19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 << 2);
  iVar11 = (int)lVar12;
  lVar12 = (long)auStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = (lVar12 - extraout_x12_00) - extraout_x12_01;
  iVar5 = param_16 * 8;
  lStack_78 = (long)(int)param_3;
  uStack_f0 = param_2;
  iVar24 = param_16 * ((param_6 - param_17) + -5);
  iVar21 = iVar24 * (~(uint)param_2 + (int)param_3);
  uVar32 = (ulong)(int)(uint)param_2;
  for (uVar33 = uVar32; lVar16 = lStack_90, uVar13 = uStack_f8, (long)uVar33 < lStack_78;
      uVar33 = uVar33 + 1) {
    psVar1 = (short *)(*(long *)(param_1 + 0x20) + uVar33 * 2);
    iVar22 = (int)psVar1[1] - (int)*psVar1;
    iVar15 = iVar22 * 3 << (ulong)(param_17 & 0x1f);
    iVar18 = iVar5;
    if (iVar5 <= (iVar15 << 3) >> 4) {
      iVar18 = (iVar15 << 3) >> 4;
    }
    *(int *)(extraout_x15 + uVar33 * 4) = iVar18;
    iVar18 = iVar5;
    if (iVar22 << (ulong)(param_17 & 0x1f) != 1) {
      iVar18 = 0;
    }
    *(int *)(lVar25 + uVar33 * 4) =
         ((iVar21 * iVar22 << (ulong)(param_17 + 3 & 0x1f)) >> 6) - iVar18;
    iVar21 = iVar21 - iVar24;
  }
  uStack_110 = param_3;
  piStack_108 = param_7;
  puStack_118 = param_8;
  lStack_130 = param_13;
  lStack_128 = extraout_x13;
  iVar21 = *(int *)(param_1 + 0x34);
  iVar18 = iVar21 + -1;
  uStack_88 = lStack_78 * 2;
  lStack_100 = param_5;
  lVar19 = param_5 + -4;
  lVar23 = extraout_x15 + -4;
  iVar24 = 1;
  lVar34 = lStack_78;
  do {
    bVar7 = false;
    iVar15 = 0;
    iVar22 = iVar24 + iVar18 >> 1;
    uVar33 = lStack_78 * 2;
    for (; uVar33 = uVar33 - 2, (long)uVar32 < lVar34; lVar34 = lVar34 + -1) {
      psVar1 = (short *)(*(long *)(param_1 + 0x20) + uVar33);
      uVar20 = (int)(((int)psVar1[1] - (int)*psVar1) * param_16 *
                     (uint)*(byte *)(*(long *)(param_1 + 0x38) + (long)(iVar22 * iVar11) + -1 +
                                    lVar34) << (ulong)(param_17 & 0x1f)) >> 2;
      if (0 < (int)uVar20) {
        uVar20 = *(int *)(lVar25 + -4 + lVar34 * 4) + uVar20;
        uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
      }
      iVar27 = *(int *)(param_4 + -4 + lVar34 * 4) + uVar20;
      if ((bVar7) || (*(int *)(lVar23 + lVar34 * 4) <= iVar27)) {
        iVar26 = *(int *)(lVar19 + lVar34 * 4);
        if (iVar26 <= iVar27) {
          iVar27 = iVar26;
        }
        bVar7 = true;
        iVar26 = iVar27;
      }
      else {
        bVar7 = false;
        iVar26 = 0;
        if (iVar5 <= iVar27) {
          iVar26 = iVar5;
        }
      }
      iVar15 = iVar26 + iVar15;
    }
    iVar27 = iVar22 + -1;
    if (iVar15 <= iStack_7c) {
      iVar24 = iVar22 + 1;
      iVar27 = iVar18;
    }
    iVar18 = iVar27;
    lVar34 = lStack_78;
  } while (iVar24 <= iVar18);
  lVar34 = 0;
  lVar28 = uVar32 * 2;
  lVar2 = lVar25 + uVar32 * 4;
  lVar3 = lStack_90 + uVar32 * 4;
  uVar33 = uStack_f0;
  lVar35 = lStack_78;
  while( true ) {
    lVar10 = lStack_78;
    lVar28 = lVar28 + 2;
    if (lVar35 <= (long)(uVar32 + lVar34)) break;
    psVar1 = (short *)(*(long *)(param_1 + 0x20) + lVar28);
    iVar18 = ((int)*psVar1 - (int)psVar1[-1]) * param_16;
    if (iVar24 < iVar21) {
      uVar20 = (int)(iVar18 * (uint)*(byte *)(*(long *)(param_1 + 0x38) +
                                              uVar32 + (long)(iVar24 * iVar11) + lVar34) <<
                    (ulong)(param_17 & 0x1f)) >> 2;
    }
    else {
      uVar20 = *(uint *)(param_5 + uVar32 * 4 + lVar34 * 4);
    }
    uVar17 = (int)(iVar18 * (uint)*(byte *)(*(long *)(param_1 + 0x38) +
                                            uVar32 + (long)((iVar24 + -1) * iVar11) + lVar34) <<
                  (ulong)(param_17 & 0x1f)) >> 2;
    if (0 < (int)uVar17) {
      uVar17 = *(int *)(lVar2 + lVar34 * 4) + uVar17;
      uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
    }
    if (0 < (int)uVar20) {
      uVar20 = *(int *)(lVar2 + lVar34 * 4) + uVar20;
      uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    }
    iVar15 = *(int *)(param_4 + uVar32 * 4 + lVar34 * 4);
    iVar18 = iVar15;
    if (iVar24 < 2) {
      iVar18 = 0;
    }
    uVar14 = (int)uVar13 + (int)lVar34;
    if (iVar15 < 1) {
      uVar14 = (uint)uVar33;
    }
    uVar33 = (ulong)uVar14;
    uVar20 = (iVar15 + uVar20) - (iVar18 + uVar17);
    *(uint *)(lVar3 + lVar34 * 4) = iVar18 + uVar17;
    *(uint *)(lVar12 + uVar32 * 4 + lVar34 * 4) = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    lVar34 = lVar34 + 1;
    lVar35 = lVar10;
  }
  iVar21 = 0;
  iVar11 = 0x40;
  for (iVar24 = 0; iVar24 != 6; iVar24 = iVar24 + 1) {
    bVar7 = false;
    iVar18 = 0;
    iVar15 = iVar21 + iVar11 >> 1;
    for (lVar34 = lVar35; (long)uVar32 < lVar34; lVar34 = lVar34 + -1) {
      iVar22 = *(int *)(lVar16 + -4 + lVar34 * 4) +
               (*(int *)(lVar12 + -4 + lVar34 * 4) * iVar15 >> 6);
      if ((bVar7) || (*(int *)(lVar23 + lVar34 * 4) <= iVar22)) {
        iVar27 = *(int *)(lVar19 + lVar34 * 4);
        if (iVar27 <= iVar22) {
          iVar22 = iVar27;
        }
        bVar7 = true;
        iVar27 = iVar22;
      }
      else {
        bVar7 = false;
        iVar27 = 0;
        if (iVar5 <= iVar22) {
          iVar27 = iVar5;
        }
      }
      iVar18 = iVar27 + iVar18;
    }
    if (iVar18 <= iStack_7c) {
      iVar21 = iVar15;
      iVar15 = iVar11;
    }
    iVar11 = iVar15;
  }
  bVar7 = false;
  iVar24 = 0;
  for (lVar34 = lVar35; (long)uVar32 < lVar34; lVar34 = lVar34 + -1) {
    iVar11 = *(int *)(lVar16 + -4 + lVar34 * 4) + (*(int *)(lVar12 + -4 + lVar34 * 4) * iVar21 >> 6)
    ;
    bVar7 = (bool)(bVar7 | *(int *)(lVar23 + lVar34 * 4) <= iVar11);
    iVar18 = 0;
    if (iVar5 <= iVar11) {
      iVar18 = iVar5;
    }
    if (!bVar7) {
      iVar11 = iVar18;
    }
    iVar18 = *(int *)(lVar19 + lVar34 * 4);
    if (iVar18 <= iVar11) {
      iVar11 = iVar18;
    }
    *(int *)(param_12 + -4 + lVar34 * 4) = iVar11;
    iVar24 = iVar11 + iVar24;
  }
  lVar34 = 0;
  uStack_138 = (uint)(1 < (int)param_16);
  lStack_90 = CONCAT44(lStack_90._4_4_,param_17 << 3);
  iVar21 = iVar5 + 8;
  lStack_d8 = (long)((int)uStack_f0 + 2);
  uVar13 = (ulong)(int)(uint)uVar33;
  lStack_e0 = (long)(int)puStack_98;
  lStack_e8 = (long)(int)uStack_b0;
  lVar12 = lVar35 * 4 + -4;
  uVar33 = param_12 + lVar12;
  lVar12 = extraout_x15 + lVar12;
  puStack_98 = &UNK_10df90d8f + ~uVar32 + lVar35;
  lVar16 = -2;
  uStack_b0 = param_12;
  uVar20 = uStack_11c;
  lStack_d0 = lVar12;
  uStack_c8 = uVar33;
  uStack_c0 = uVar13;
  iStack_b4 = iVar21;
  iVar11 = iStack_7c;
  while( true ) {
    lVar19 = lVar35 + lVar34;
    if (lVar19 + -1 <= (long)uVar13) break;
    psVar1 = (short *)(*(long *)(param_1 + 0x20) + uStack_88 + lVar16);
    sVar30 = psVar1[1];
    sVar31 = *(short *)(*(long *)(param_1 + 0x20) + uVar32 * 2);
    uVar17 = (int)sVar30 - (int)sVar31;
    uVar14 = 0;
    if (uVar17 != 0) {
      uVar14 = (uint)(iVar11 - iVar24) / uVar17;
    }
    iVar27 = (int)*psVar1;
    uVar17 = (((iVar11 - iVar24) + (int)sVar31) - iVar27) + ((int)sVar31 - (int)sVar30) * uVar14;
    iVar27 = sVar30 - iVar27;
    iVar22 = *(int *)(uVar33 + lVar34 * 4);
    iVar18 = iVar22 + iVar27 * uVar14 + (uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    iVar15 = *(int *)(lVar12 + lVar34 * 4);
    if (iVar15 <= iVar21) {
      iVar15 = iVar21;
    }
    if (iVar15 <= iVar18) {
      if (iStack_a4 != 0) {
        if (lStack_d8 < lVar19) {
          iVar21 = 9;
          if (lVar19 <= lStack_e8) {
            iVar21 = 7;
          }
          if (lVar19 < 0x12) {
            iVar21 = 0;
          }
          if (lStack_e0 < lVar19 + -1 ||
              iVar18 <= ((iVar27 * iVar21 << (ulong)(param_17 & 0x1f)) << 3) >> 4) {
            FUN_108b4e284(uStack_a0,0);
            goto LAB_108b4ddc4;
          }
        }
        uVar33 = 1;
        uVar13 = uStack_a0;
        FUN_108b4e284();
        iVar21 = (int)uStack_f8;
        lVar35 = lStack_78;
        iVar11 = iStack_7c;
        goto LAB_108b4de78;
      }
      func_0x000108b4e28c();
      if ((int)uVar13 != 0) {
        iVar21 = (int)uStack_f8;
        param_12 = uStack_b0;
        lVar35 = lStack_78;
        iVar11 = iStack_7c;
        goto LAB_108b4de78;
      }
LAB_108b4ddc4:
      iVar24 = iVar24 + 8;
      iVar18 = iVar18 + -8;
      iVar22 = *(int *)(uStack_c8 + lVar34 * 4);
      uVar13 = uStack_c0;
      uVar33 = uStack_c8;
      lVar12 = lStack_d0;
      param_12 = uStack_b0;
      lVar35 = lStack_78;
      iVar21 = iStack_b4;
      iVar11 = iStack_7c;
    }
    if (uVar20 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (uint)(byte)puStack_98[lVar34];
    }
    iVar15 = 0;
    if (iVar5 <= iVar18) {
      iVar15 = iVar5;
    }
    iVar24 = ((iVar24 - uVar20) - iVar22) + uVar17 + iVar15;
    *(int *)(uVar33 + lVar34 * 4) = iVar15;
    lVar34 = lVar34 + -1;
    lVar16 = lVar16 + -2;
    uVar20 = uVar17;
  }
  iVar11 = iVar11 + auStack_150[3];
  iVar21 = (int)uStack_f8;
LAB_108b4de78:
  piVar9 = piStack_108;
  puVar8 = puStack_118;
  iVar15 = (int)uVar33;
  uVar29 = lVar34 + (uStack_110 & 0xffffffff);
  iVar18 = (int)uStack_f0;
  iVar22 = (int)uVar29;
  if (iVar18 < iVar22) {
    uStack_88 = uVar29;
    iStack_7c = iVar11;
    if ((int)uVar20 < 1) {
      iVar18 = 0;
      *piStack_108 = 0;
    }
    else {
      uVar13 = uStack_a0;
      if (iStack_a4 == 0) {
        uVar33 = (ulong)(((int)uStack_110 - iVar18) + (int)lVar34 + 1);
        FUN_108b49e68();
        iVar18 = (int)uVar13 + iVar18;
        *piStack_108 = iVar18;
      }
      else {
        iVar21 = *piStack_108;
        if (iVar22 <= *piStack_108) {
          iVar21 = iVar22;
        }
        *piStack_108 = iVar21;
        uVar33 = (ulong)(uint)(iVar21 - iVar18);
        FUN_108b4a10c(uStack_a0,uVar33,((int)uStack_110 - iVar18) + (int)lVar34 + 1);
        iVar18 = *piVar9;
      }
      iVar21 = (int)uStack_f8;
      lVar35 = lStack_78;
    }
    iVar11 = iStack_134;
    if (iVar21 < iVar18) {
      iVar11 = 0;
    }
    if ((iStack_134 == 0) || (iVar18 <= iVar21)) {
      *puVar8 = 0;
    }
    else if (iStack_a4 == 0) {
      func_0x000108b4e28c();
      *puVar8 = (uint)uVar13;
      lVar35 = lStack_78;
    }
    else {
      uVar33 = (ulong)*puVar8;
      uVar13 = uStack_a0;
      FUN_108b4e284();
      lVar35 = lStack_78;
    }
    lVar12 = lVar35 + lVar34;
    uVar20 = iVar11 + (iStack_7c - iVar24);
    lVar16 = *(long *)(param_1 + 0x20);
    sVar30 = *(short *)(lVar16 + uVar32 * 2);
    iVar24 = (int)*(short *)(lVar16 + lVar35 * 2 + lVar34 * 2);
    uVar17 = iVar24 - sVar30;
    uVar14 = 0;
    if (uVar17 != 0) {
      uVar14 = uVar20 / uVar17;
    }
    sVar31 = sVar30;
    for (uVar29 = uVar32; (long)uVar29 < lVar12; uVar29 = uVar29 + 1) {
      sVar4 = *(short *)(lVar16 + 2 + uVar29 * 2);
      uVar13 = (ulong)sVar4;
      uVar17 = *(uint *)(param_12 + uVar29 * 4);
      uVar33 = (ulong)uVar17;
      *(uint *)(param_12 + uVar29 * 4) = uVar17 + ((int)sVar4 - (int)sVar31) * uVar14;
      sVar31 = sVar4;
    }
    iVar24 = uVar20 + (sVar30 - iVar24) * uVar14;
    sVar31 = sVar30;
    for (uVar29 = uVar32; (long)uVar29 < lVar12; uVar29 = uVar29 + 1) {
      sVar4 = *(short *)(lVar16 + 2 + uVar29 * 2);
      iVar11 = (int)sVar4 - (int)sVar31;
      iVar21 = iVar24;
      if (iVar11 <= iVar24) {
        iVar21 = iVar11;
      }
      *(int *)(param_12 + uVar29 * 4) = iVar21 + *(int *)(param_12 + uVar29 * 4);
      iVar24 = iVar24 - iVar21;
      sVar31 = sVar4;
    }
    iVar24 = 0;
    uVar20 = 3;
    if (1 < (int)param_16) {
      uVar20 = 4;
    }
    while( true ) {
      iVar15 = (int)uVar33;
      if (lVar12 <= (long)uVar32) {
        *piStack_140 = iVar24;
        goto LAB_108b4e1fc;
      }
      iVar21 = *(int *)(param_12 + uVar32 * 4);
      if (iVar21 < 0) break;
      sVar31 = *(short *)(lVar16 + 2 + uVar32 * 2);
      uVar17 = (int)sVar31 - (int)sVar30 << (ulong)(param_17 & 0x1f);
      iVar21 = iVar21 + iVar24;
      if ((int)uVar17 < 2) {
        uVar14 = iVar21 + param_16 * -8;
        uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        if (iVar5 <= iVar21) {
          iVar21 = iVar5;
        }
        *(int *)(param_12 + uVar32 * 4) = iVar21;
        *(undefined4 *)(lStack_130 + uVar32 * 4) = 0;
        *(undefined4 *)(lStack_128 + uVar32 * 4) = 1;
        if (uVar14 == 0) goto LAB_108b4e1c0;
LAB_108b4e16c:
        iVar21 = *(int *)(lStack_130 + uVar32 * 4);
        uVar17 = 8 - iVar21;
        uVar33 = (ulong)uVar17;
        uVar6 = uVar14 >> (ulong)uVar20;
        if ((int)uVar17 <= (int)(uVar14 >> (ulong)uVar20)) {
          uVar6 = uVar17;
        }
        uVar17 = uVar6 + iVar21;
        *(uint *)(lStack_130 + uVar32 * 4) = uVar17;
        *(uint *)(lStack_128 + uVar32 * 4) = (uint)((int)(uVar14 - iVar24) <= (int)(uVar6 * iVar5));
        iVar24 = uVar14 - uVar6 * iVar5;
      }
      else {
        iVar18 = *(int *)(lStack_100 + uVar32 * 4);
        iVar11 = iVar21;
        if (iVar18 <= iVar21) {
          iVar11 = iVar18;
        }
        *(int *)(param_12 + uVar32 * 4) = iVar11;
        if ((param_16 == 2 && uVar17 != 2) && (*puVar8 == 0)) {
          uVar14 = (uint)((long)uVar32 < (long)*piStack_108);
        }
        else {
          uVar14 = 0;
        }
        uVar14 = uVar14 + uVar17 * param_16;
        iVar15 = ((int)lStack_90 + *(short *)(*(long *)(param_1 + 0x40) + uVar32 * 2)) * uVar14;
        uVar6 = -(uVar14 >> 0x1c & 1) & 0xc0000000 | (uVar14 & 0x1fffffff) << 1;
        if (uVar17 != 2) {
          uVar6 = 0;
        }
        iVar22 = uVar6 + uVar14 * -0x15 + (iVar15 >> 1);
        iVar27 = iVar22;
        if (iVar22 + iVar11 < (int)(uVar14 * 0x18)) {
          iVar27 = iVar22 + (iVar15 >> 3);
        }
        if (iVar22 + iVar11 < (int)(uVar14 * 0x10)) {
          iVar27 = iVar22 + (iVar15 >> 2);
        }
        uVar17 = iVar11 + uVar14 * 4 + iVar27;
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = (uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) / uVar14;
        }
        uVar6 = uVar6 >> 3;
        *(uint *)(lStack_130 + uVar32 * 4) = uVar6;
        iVar11 = *(int *)(param_12 + uVar32 * 4);
        uVar17 = (iVar11 >> (uStack_138 & 0x1f)) >> 3;
        if ((int)(uVar6 * param_16) <= iVar11 >> 3) {
          uVar17 = uVar6;
        }
        if (7 < (int)uVar17) {
          uVar17 = 8;
        }
        *(uint *)(lStack_130 + uVar32 * 4) = uVar17;
        uVar6 = *(uint *)(param_12 + uVar32 * 4);
        uVar33 = (ulong)uVar6;
        *(uint *)(lStack_128 + uVar32 * 4) =
             (uint)((int)(uVar6 + iVar27) <= (int)(uVar17 * uVar14 * 8));
        uVar14 = iVar21 - iVar18 & (iVar21 - iVar18 >> 0x1f ^ 0xffffffffU);
        uVar17 = *(uint *)(param_12 + uVar32 * 4);
        *(uint *)(param_12 + uVar32 * 4) = uVar17 - *(int *)(lStack_130 + uVar32 * 4) * iVar5;
        if (uVar14 != 0) goto LAB_108b4e16c;
LAB_108b4e1c0:
        iVar24 = 0;
      }
      iVar15 = (int)uVar33;
      uVar13 = (ulong)uVar17;
      if ((*(int *)(param_12 + uVar32 * 4) < 0) ||
         (lVar34 = uVar32 * 4, uVar32 = uVar32 + 1, sVar30 = sVar31,
         *(int *)(lStack_130 + lVar34) < 0)) break;
    }
  }
LAB_108b4e27c:
  _abort();
SUB_108b4a0a0:
  ___stack_chk_fail();
  uVar20 = *(uint *)(uVar13 + 0x20) >> 1;
  uVar17 = *(uint *)(uVar13 + 0x20) - uVar20;
  if (iVar15 != 0) {
    *(uint *)(uVar13 + 0x24) = *(int *)(uVar13 + 0x24) + uVar17;
    uVar17 = uVar20;
  }
  *(uint *)(uVar13 + 0x20) = uVar17;
  *(ulong *)(lVar25 + -0x20) = param_12;
  *(ulong *)(lVar25 + -0x18) = (ulong)param_16;
  *(undefined1 **)(lVar25 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar25 + -8) = FUN_108b4e284;
  uVar20 = *(uint *)(uVar13 + 0x20);
  uVar33 = uVar13;
  while (uVar20 < 0x800001) {
    uVar33 = uVar13;
    FUN_108b4a4c0(uVar13,*(uint *)(uVar13 + 0x24) >> 0x17);
    uVar20 = *(int *)(uVar13 + 0x20) << 8;
    *(uint *)(uVar13 + 0x20) = uVar20;
    *(uint *)(uVar13 + 0x24) = (*(uint *)(uVar13 + 0x24) & 0x7fffff) << 8;
    *(int *)(uVar13 + 0x18) = *(int *)(uVar13 + 0x18) + 8;
  }
  return uVar33;
LAB_108b4e1fc:
  if (lVar35 <= (long)uVar32) goto LAB_108b4e240;
  iVar24 = (*(int *)(param_12 + uVar32 * 4) >> (uStack_138 & 0x1f)) >> 3;
  *(int *)(lStack_130 + uVar32 * 4) = iVar24;
  if (iVar24 * iVar5 != *(int *)(param_12 + uVar32 * 4)) goto LAB_108b4e27c;
  *(undefined4 *)(param_12 + uVar32 * 4) = 0;
  *(uint *)(lStack_128 + uVar32 * 4) = (uint)(*(int *)(lStack_130 + uVar32 * 4) < 1);
  uVar32 = uVar32 + 1;
  goto LAB_108b4e1fc;
LAB_108b4e240:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uStack_88;
  }
  goto SUB_108b4a0a0;
}



/* Entry: 108b4e284; end: 108b4e297;  */

void FUN_108b4e284(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20) >> 1;
  uVar2 = *(uint *)(param_1 + 0x20) - uVar1;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar2;
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x20);
  while (uVar1 < 0x800001) {
    FUN_108b4a4c0(param_1,*(uint *)(param_1 + 0x24) >> 0x17);
    uVar1 = *(int *)(param_1 + 0x20) << 8;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x24) = (*(uint *)(param_1 + 0x24) & 0x7fffff) << 8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  }
  return;
}



/* Entry: 108b4e298; end: 108b4e40f;  */

void FUN_108b4e298(undefined8 param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  
  if ((param_5 * 2 < (int)param_2) && (param_6 != 0)) {
    fVar6 = (float)(int)param_2 /
            (float)(int)(param_2 + *(int *)(&UNK_10df90dc4 + (long)param_6 * 4) * param_5);
    fVar10 = fVar6 * fVar6 * 0.5;
    dVar8 = (double)fVar10 * 1.5707963267948966;
    _cos(dVar8);
    fVar6 = (float)dVar8;
    dVar8 = (double)(1.0 - fVar10) * 1.5707963267948966;
    _cos(dVar8);
    fVar10 = (float)dVar8;
    if ((int)param_2 < (int)(param_4 * 8)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar2 = param_4;
      do {
        iVar1 = uVar2 * (iVar3 + 2);
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 + param_4;
      } while (((int)param_4 >> 2) + iVar1 < (int)param_2);
    }
    lVar4 = 0;
    uVar2 = 0;
    if (param_4 != 0) {
      uVar2 = param_2 / param_4;
    }
    for (uVar5 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
        uVar5 = uVar5 - 1) {
      if (param_3 < 0) {
        if (iVar3 != 0) {
          func_0x000108b4ebe8(lVar4 * (int)uVar2);
          FUN_108b4e410(fVar10,fVar6);
        }
        func_0x000108b4ebe8();
        fVar7 = fVar6;
        fVar9 = fVar10;
LAB_108b4e3e0:
        FUN_108b4e410(fVar7,fVar9);
      }
      else {
        func_0x000108b4ebe8(lVar4 * (int)uVar2);
        FUN_108b4e410(fVar6,-fVar10);
        if (iVar3 != 0) {
          func_0x000108b4ebe8();
          fVar7 = fVar10;
          fVar9 = -fVar6;
          goto LAB_108b4e3e0;
        }
      }
      lVar4 = lVar4 + 1;
    }
  }
  return;
}


