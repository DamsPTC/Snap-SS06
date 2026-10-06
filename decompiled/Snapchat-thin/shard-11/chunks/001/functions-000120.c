/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10823c52c; end: 10823c64b;  */

long * FUN_10823c52c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  byte *pbVar13;
  long *unaff_x19;
  long unaff_x20;
  byte *pbVar14;
  undefined8 *puVar15;
  byte *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  byte *unaff_x24;
  undefined1 *unaff_x25;
  long lVar16;
  long unaff_x26;
  ulong unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  int iVar17;
  uint uVar18;
  int iVar20;
  undefined8 uVar19;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined8 uVar35;
  
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(int *)((long)param_1 + 0x21c) == 0) {
      return (long *)0x1;
    }
    if (0 < (int)param_1[0xb8a]) {
      iVar17 = (int)param_1 + 0x230;
      (*(code *)PTR_FUN_113254c80)();
      if (iVar17 != 0) {
        (*(code *)PTR_FUN_113254c90)(param_1 + 0x46);
        return (long *)0x1;
      }
      if (*(int *)(param_1[1] + 0x88) == 0) {
        *(undefined4 *)(param_1[1] + 0x88) = 1;
        return (long *)0x0;
      }
      return (long *)0x0;
    }
    unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *param_1;
    unaff_x20 = param_1[1];
    uVar4 = *(uint *)(lVar16 + 8);
    pbVar14 = (byte *)(ulong)uVar4;
    uVar6 = *(uint *)(lVar16 + 0x30);
    unaff_x22 = (ulong)uVar6;
    iVar17 = *(int *)(lVar16 + 0x34);
    uVar18 = 5;
    if (iVar17 == 1) {
      uVar18 = 6;
    }
    uVar5 = *(uint *)(lVar16 + 0x38);
    unaff_x27 = (ulong)uVar5;
    uVar2 = *(uint *)(unaff_x20 + 8);
    uVar3 = *(uint *)(unaff_x20 + 0xc);
    unaff_x23 = (ulong)uVar3;
    lVar16 = (long)(int)uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
    unaff_x24 = (byte *)(ulong)((int)uVar5 < 100);
    if ((uVar5 < 0x65) && (uVar6 < 2)) {
      unaff_x25 = (undefined1 *)(long)(int)(uVar3 * uVar2);
      uVar1 = 0;
      if (iVar17 != 0 && uVar6 != 0) {
        uVar1 = uVar18;
      }
      unaff_x28 = (byte *)(ulong)uVar1;
      if (((int)(uVar3 * uVar2) < 0) ||
         (puVar7 = unaff_x25, _malloc(), unaff_x19 = param_1, puVar7 == (undefined1 *)0x0)) {
        if (*(int *)(unaff_x20 + 0x88) == 0) {
          uVar9 = 1;
          goto LAB_10823c078;
        }
        goto LAB_10823c4ec;
      }
      *(uint *)((long)register0x00000008 + -0x298) = uVar1;
      *(undefined1 **)((long)register0x00000008 + -0x2b0) = unaff_x25;
      *(uint *)((long)register0x00000008 + -0x290) = (uint)((int)uVar5 < 100);
      *(uint *)((long)register0x00000008 + -0x28c) = uVar4;
      *(undefined1 **)((long)register0x00000008 + -0x2a0) = puVar7;
      if (0 < (int)uVar3) {
        iVar17 = *(int *)(unaff_x20 + 0x38);
        unaff_x25 = *(undefined1 **)(unaff_x20 + 0x30);
        pbVar14 = (byte *)(ulong)(uVar3 + 1);
        unaff_x28 = *(byte **)((long)register0x00000008 + -0x2a0);
        do {
          _memcpy(unaff_x28,unaff_x25,lVar16);
          unaff_x25 = unaff_x25 + iVar17;
          unaff_x28 = unaff_x28 + lVar16;
          uVar18 = (int)pbVar14 - 1;
          pbVar14 = (byte *)(ulong)uVar18;
        } while (1 < uVar18);
      }
      unaff_x24 = *(byte **)((long)register0x00000008 + -0x2a0);
      if ((int)uVar5 < 100) {
        iVar17 = uVar5 * 8 + -0x220;
        if (uVar5 < 0x47) {
          iVar17 = (uVar5 * 0xcd >> 10 & 0x3f) + 2;
        }
        pbVar8 = unaff_x24;
        FUN_108254ff4(unaff_x24,lVar16,unaff_x23,iVar17,
                      (undefined1 *)((long)register0x00000008 + -0x288));
        unaff_x21 = unaff_x24;
        if ((int)pbVar8 != 0) goto LAB_10823c138;
LAB_10823c4e8:
        _free(unaff_x21);
        goto LAB_10823c4ec;
      }
LAB_10823c138:
      unaff_x28 = (byte *)(ulong)uVar2;
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x280);
      FUN_10822e85c();
      unaff_x27 = *(ulong *)(unaff_x20 + 0x80);
      if (*(int *)((long)register0x00000008 + -0x298) == 6) {
        iVar17 = 0;
        iVar20 = 0;
        iVar21 = 0;
        iVar22 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
        *(undefined8 *)((long)register0x00000008 + -200) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        if (0 < (int)uVar3) {
          uVar10 = 0;
          pbVar14 = unaff_x24;
          do {
            pbVar13 = pbVar14;
            pbVar8 = unaff_x28;
            if (0 < (int)uVar2) {
              do {
                *(undefined1 *)((long)register0x00000008 + ((ulong)*pbVar13 - 0x180)) = 1;
                pbVar8 = pbVar8 + -1;
                pbVar13 = pbVar13 + 1;
              } while (pbVar8 != (byte *)0x0);
            }
            uVar10 = uVar10 + 1;
            pbVar14 = pbVar14 + lVar16;
          } while (uVar10 != unaff_x23);
        }
        lVar11 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar29 = 0;
        iVar30 = 0;
        iVar31 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar34 = 0;
        do {
          uVar35 = ((undefined8 *)((long)register0x00000008 + lVar11 + -0x180))[1];
          uVar19 = *(undefined8 *)((long)register0x00000008 + lVar11 + -0x180);
          iVar31 = iVar31 + (uint)(-((char)((ulong)uVar35 >> 0x20) != '\0') & 1);
          iVar32 = iVar32 + (uint)(-((char)((ulong)uVar35 >> 0x28) != '\0') & 1);
          iVar33 = iVar33 + (uint)(-((char)((ulong)uVar35 >> 0x30) != '\0') & 1);
          iVar34 = iVar34 + (uint)(-((char)((ulong)uVar35 >> 0x38) != '\0') & 1);
          iVar27 = iVar27 + (uint)(-((char)uVar35 != '\0') & 1);
          iVar28 = iVar28 + (uint)(-((char)((ulong)uVar35 >> 8) != '\0') & 1);
          iVar29 = iVar29 + (uint)(-((char)((ulong)uVar35 >> 0x10) != '\0') & 1);
          iVar30 = iVar30 + (uint)(-((char)((ulong)uVar35 >> 0x18) != '\0') & 1);
          iVar23 = iVar23 + (uint)(-((char)((ulong)uVar19 >> 0x20) != '\0') & 1);
          iVar24 = iVar24 + (uint)(-((char)((ulong)uVar19 >> 0x28) != '\0') & 1);
          iVar25 = iVar25 + (uint)(-((char)((ulong)uVar19 >> 0x30) != '\0') & 1);
          iVar26 = iVar26 + (uint)(-((char)((ulong)uVar19 >> 0x38) != '\0') & 1);
          iVar17 = iVar17 + (uint)(-((char)uVar19 != '\0') & 1);
          iVar20 = iVar20 + (uint)(-((char)((ulong)uVar19 >> 8) != '\0') & 1);
          iVar21 = iVar21 + (uint)(-((char)((ulong)uVar19 >> 0x10) != '\0') & 1);
          iVar22 = iVar22 + (uint)(-((char)((ulong)uVar19 >> 0x18) != '\0') & 1);
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x100);
        uVar18 = iVar17 + iVar27 + iVar23 + iVar31 + iVar20 + iVar28 + iVar24 + iVar32 +
                 iVar21 + iVar29 + iVar25 + iVar33 + iVar22 + iVar30 + iVar26 + iVar34;
        if (uVar18 < 0x11) {
          uVar6 = 0;
        }
        else {
          pbVar14 = unaff_x24;
          FUN_108252520(unaff_x24,lVar16,unaff_x23,unaff_x28);
          uVar6 = (uint)pbVar14;
        }
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0xffffffff;
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0xfffffff800000000;
        *(undefined8 *)((long)register0x00000008 + -0x278) = 0xfe;
        uVar18 = 1 << (ulong)(uVar6 & 0x1f) |
                 (uint)(3 < *(int *)((long)register0x00000008 + -0x28c) || 0xc0 < uVar18);
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x2a8) =
             (undefined1 *)((long)register0x00000008 + -0x278);
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x250) = 0;
        if (uVar18 != 1) goto LAB_10823c38c;
LAB_10823c330:
        *(undefined1 **)((long)register0x00000008 + -0x2c0) =
             (undefined1 *)((long)register0x00000008 + -0x280);
        unaff_x28 = unaff_x24;
        FUN_10823c6c4(unaff_x24,lVar16,unaff_x23,unaff_x22,0,
                      *(undefined4 *)((long)register0x00000008 + -0x290),
                      *(undefined4 *)((long)register0x00000008 + -0x28c),0);
        unaff_x26 = lVar16;
        if ((int)unaff_x28 != 0) goto LAB_10823c360;
LAB_10823c474:
        puVar15 = *(undefined8 **)((long)register0x00000008 + -0x2a8);
        _free(puVar15[2]);
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        puVar15[1] = 0;
        *puVar15 = 0;
        lVar16 = unaff_x26;
LAB_10823c48c:
        unaff_x26 = lVar16;
        unaff_x22 = 1;
        unaff_x21 = (byte *)0x0;
        unaff_x23 = 0;
        if (*(int *)(unaff_x20 + 0x88) == 0) {
          *(undefined4 *)(unaff_x20 + 0x88) = 1;
        }
      }
      else {
        if (*(int *)((long)register0x00000008 + -0x298) == 0) {
          *(undefined8 *)((long)register0x00000008 + -0x280) = 0xffffffff;
          *(undefined1 **)((long)register0x00000008 + -0x2a8) =
               (undefined1 *)((long)register0x00000008 + -0x278);
          *(undefined8 *)((long)register0x00000008 + -0x270) = 0xfffffff800000000;
          *(undefined8 *)((long)register0x00000008 + -0x278) = 0xfe;
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          *(undefined8 *)((long)register0x00000008 + -600) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
          *(undefined4 *)((long)register0x00000008 + -0x250) = 0;
          goto LAB_10823c330;
        }
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0xffffffff;
        *(undefined1 **)((long)register0x00000008 + -0x2a8) =
             (undefined1 *)((long)register0x00000008 + -0x278);
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0xfffffff800000000;
        *(undefined8 *)((long)register0x00000008 + -0x278) = 0xfe;
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x250) = 0;
        uVar18 = 0xf;
LAB_10823c38c:
        unaff_x26 = *(long *)((long)register0x00000008 + -0x2b0);
        _malloc();
        if (unaff_x26 == 0) goto LAB_10823c48c;
        *(byte **)((long)register0x00000008 + -0x298) = unaff_x28;
        *(ulong *)((long)register0x00000008 + -0x2b0) = unaff_x27;
        iVar17 = 0;
        do {
          if ((uVar18 & 1) == 0) {
            unaff_x28 = (byte *)0x1;
          }
          else {
            *(undefined1 **)((long)register0x00000008 + -0x2c0) =
                 (undefined1 *)((long)register0x00000008 + -0x180);
            unaff_x28 = unaff_x24;
            FUN_10823c6c4(unaff_x24,*(undefined8 *)((long)register0x00000008 + -0x298),unaff_x23,
                          unaff_x22,iVar17,*(undefined4 *)((long)register0x00000008 + -0x290),
                          *(undefined4 *)((long)register0x00000008 + -0x28c),unaff_x26);
            if (((int)unaff_x28 == 0) ||
               (*(ulong *)((long)register0x00000008 + -0x280) <=
                *(ulong *)((long)register0x00000008 + -0x180))) {
              _free(*(undefined8 *)((long)register0x00000008 + -0x168));
            }
            else {
              _free(*(undefined8 *)((long)register0x00000008 + -0x268));
              *(undefined8 *)((long)register0x00000008 + -0x1b8) =
                   *(undefined8 *)((long)register0x00000008 + -0xb8);
              *(undefined8 *)((long)register0x00000008 + -0x1c0) =
                   *(undefined8 *)((long)register0x00000008 + -0xc0);
              *(undefined8 *)((long)register0x00000008 + -0x1a8) =
                   *(undefined8 *)((long)register0x00000008 + -0xa8);
              *(undefined8 *)((long)register0x00000008 + -0x1b0) =
                   *(undefined8 *)((long)register0x00000008 + -0xb0);
              *(undefined8 *)((long)register0x00000008 + -0x198) =
                   *(undefined8 *)((long)register0x00000008 + -0x98);
              *(undefined8 *)((long)register0x00000008 + -0x1a0) =
                   *(undefined8 *)((long)register0x00000008 + -0xa0);
              *(undefined8 *)((long)register0x00000008 + -400) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
              *(undefined8 *)((long)register0x00000008 + -0x1f8) =
                   *(undefined8 *)((long)register0x00000008 + -0xf8);
              *(undefined8 *)((long)register0x00000008 + -0x200) =
                   *(undefined8 *)((long)register0x00000008 + -0x100);
              *(undefined8 *)((long)register0x00000008 + -0x1e8) =
                   *(undefined8 *)((long)register0x00000008 + -0xe8);
              *(undefined8 *)((long)register0x00000008 + -0x1f0) =
                   *(undefined8 *)((long)register0x00000008 + -0xf0);
              *(undefined8 *)((long)register0x00000008 + -0x1d8) =
                   *(undefined8 *)((long)register0x00000008 + -0xd8);
              *(undefined8 *)((long)register0x00000008 + -0x1e0) =
                   *(undefined8 *)((long)register0x00000008 + -0xe0);
              *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                   *(undefined8 *)((long)register0x00000008 + -200);
              *(undefined8 *)((long)register0x00000008 + -0x1d0) =
                   *(undefined8 *)((long)register0x00000008 + -0xd0);
              *(undefined8 *)((long)register0x00000008 + -0x238) =
                   *(undefined8 *)((long)register0x00000008 + -0x138);
              *(undefined8 *)((long)register0x00000008 + -0x240) =
                   *(undefined8 *)((long)register0x00000008 + -0x140);
              *(undefined8 *)((long)register0x00000008 + -0x228) =
                   *(undefined8 *)((long)register0x00000008 + -0x128);
              *(undefined8 *)((long)register0x00000008 + -0x230) =
                   *(undefined8 *)((long)register0x00000008 + -0x130);
              *(undefined8 *)((long)register0x00000008 + -0x218) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0x220) =
                   *(undefined8 *)((long)register0x00000008 + -0x120);
              *(undefined8 *)((long)register0x00000008 + -0x208) =
                   *(undefined8 *)((long)register0x00000008 + -0x108);
              *(undefined8 *)((long)register0x00000008 + -0x210) =
                   *(undefined8 *)((long)register0x00000008 + -0x110);
              *(undefined8 *)((long)register0x00000008 + -0x278) =
                   *(undefined8 *)((long)register0x00000008 + -0x178);
              *(undefined8 *)((long)register0x00000008 + -0x280) =
                   *(undefined8 *)((long)register0x00000008 + -0x180);
              *(undefined8 *)((long)register0x00000008 + -0x268) =
                   *(undefined8 *)((long)register0x00000008 + -0x168);
              *(undefined8 *)((long)register0x00000008 + -0x270) =
                   *(undefined8 *)((long)register0x00000008 + -0x170);
              *(undefined8 *)((long)register0x00000008 + -600) =
                   *(undefined8 *)((long)register0x00000008 + -0x158);
              *(undefined8 *)((long)register0x00000008 + -0x260) =
                   *(undefined8 *)((long)register0x00000008 + -0x160);
              *(undefined8 *)((long)register0x00000008 + -0x248) =
                   *(undefined8 *)((long)register0x00000008 + -0x148);
              *(undefined8 *)((long)register0x00000008 + -0x250) =
                   *(undefined8 *)((long)register0x00000008 + -0x150);
            }
          }
          if (uVar18 < 2) break;
          iVar17 = iVar17 + 1;
          uVar18 = uVar18 >> 1;
        } while ((int)unaff_x28 != 0);
        _free(unaff_x26);
        unaff_x27 = *(ulong *)((long)register0x00000008 + -0x2b0);
        if ((int)unaff_x28 == 0) goto LAB_10823c474;
LAB_10823c360:
        if (unaff_x27 != 0) {
          *(undefined4 *)(unaff_x27 + 0xb4) = *(undefined4 *)((long)register0x00000008 + -0x194);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1b4);
          *(undefined8 *)(unaff_x27 + 0x9c) = *(undefined8 *)((long)register0x00000008 + -0x1ac);
          *(undefined8 *)(unaff_x27 + 0x94) = uVar19;
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1a4);
          *(undefined8 *)(unaff_x27 + 0xac) = *(undefined8 *)((long)register0x00000008 + -0x19c);
          *(undefined8 *)(unaff_x27 + 0xa4) = uVar19;
        }
        unaff_x22 = 0;
        unaff_x21 = *(byte **)(*(long *)((long)register0x00000008 + -0x2a8) + 0x10);
        unaff_x23 = *(ulong *)(*(long *)((long)register0x00000008 + -0x2a8) + 0x18);
      }
      piVar12 = *(int **)(unaff_x20 + 0x80);
      if (piVar12 != (int *)0x0) {
        *piVar12 = *piVar12 + (int)unaff_x23;
        param_1[0xb7e] = *(long *)((long)register0x00000008 + -0x288);
      }
      _free(unaff_x24);
      pbVar14 = unaff_x21;
      lVar16 = unaff_x26;
      if ((int)unaff_x22 != 0) goto LAB_10823c4ec;
      if (unaff_x23 >> 0x20 != 0) goto LAB_10823c4e8;
      *(int *)(param_1 + 0x45) = (int)unaff_x23;
      param_1[0x44] = (long)unaff_x21;
      param_1 = (long *)0x1;
    }
    else {
      if (*(int *)(unaff_x20 + 0x88) == 0) {
        uVar9 = 4;
LAB_10823c078:
        *(undefined4 *)(unaff_x20 + 0x88) = uVar9;
      }
LAB_10823c4ec:
      param_1 = (long *)0x0;
      unaff_x21 = pbVar14;
      unaff_x26 = lVar16;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return param_1;
    }
    unaff_x30 = FUN_10823c52c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2c0);
  } while( true );
}



/* Entry: 10823c64c; end: 10823c6c3;  */

long FUN_10823c64c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x5c50) < 1) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1 + 0x230;
    (*(code *)PTR_FUN_113254c88)(lVar1);
    (*(code *)PTR_DAT_113254ca0)(param_1 + 0x230);
  }
  _free(*(undefined8 *)(param_1 + 0x220));
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  return lVar1;
}



/* Entry: 10823c6c4; end: 10823d267;  */

bool FUN_10823c6c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5
                  ,int param_6,int param_7,undefined1 *param_8,undefined8 *param_9)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d4;
  float fStack_d0;
  int iStack_cc;
  undefined4 uStack_74;
  
  iVar8 = (int)&uStack_210;
  puVar3 = &uStack_210;
  uVar9 = (ulong)((int)param_3 * (int)param_2);
  pcVar7 = *(code **)((long)param_5 * 8 + 0x113869c10);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(param_1,param_2,param_3,param_2,param_8);
    param_1 = param_8;
  }
  if (param_4 != 0) {
    uStack_1f0 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    lStack_200 = 0;
    FUN_108254570(&uStack_210,uVar9 >> 3);
    if (iVar8 == 0) {
LAB_10823c970:
      _free(lStack_208);
      param_9[6] = 0;
      param_9[5] = 0;
      param_9[4] = 0;
      param_9[3] = 0;
      param_9[2] = 0;
      param_9[1] = 0;
      return false;
    }
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_180 = 0x108245dd0;
    puStack_160 = param_9 + 7;
    uStack_1d8 = CONCAT44((int)param_3,(int)param_2);
    uStack_1e0 = 1;
    iVar8 = (int)&uStack_1e0;
    FUN_108245ff0();
    if (iVar8 == 0) goto LAB_10823c970;
    (*pcRam0000000113869a78)
              (param_1,param_2,uStack_1d8 & 0xffffffff,uStack_1d8._4_4_,uStack_198,
               uStack_190 & 0xffffffff);
    puVar2 = &uStack_d4;
    FUN_1082400c0(0x42960000,puVar2,0,0x210);
    if ((int)puVar2 == 0) goto LAB_10823c970;
    uStack_d4 = 1;
    uStack_74 = 1;
    fStack_d0 = 100.0;
    if (param_7 != 6 || param_6 != 0) {
      fStack_d0 = (float)param_7 * 8.0;
    }
    puVar2 = &uStack_d4;
    iStack_cc = param_7;
    func_0x00010824e44c(puVar2,&uStack_1e0,&uStack_210);
    _free(uStack_100);
    _free(uStack_f8);
    uStack_198 = 0;
    uStack_190 = uStack_190 & 0xffffffff00000000;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    if (((int)puVar2 == 0) || ((int)uStack_1f0 != 0)) {
      _free(lStack_208);
      uStack_1f0 = 0;
      lStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      lStack_200 = 0;
      goto LAB_10823c970;
    }
    FUN_10825478c(&uStack_210);
    if ((int)uStack_1f0 != 0) goto LAB_10823c970;
    uVar10 = (lStack_200 - lStack_208) + (long)(uStack_210._4_4_ + 7 >> 3);
    if (uVar10 <= uVar9) {
      bVar1 = false;
      bVar6 = 1;
      goto LAB_10823c8b4;
    }
    _free(lStack_208);
    uStack_1f0 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    lStack_200 = 0;
  }
  bVar6 = 0;
  bVar1 = true;
  puVar3 = (undefined8 *)param_1;
  uVar10 = uVar9;
LAB_10823c8b4:
  bVar6 = bVar6 | (byte)(param_5 << 2);
  puVar5 = param_9 + 1;
  param_9[2] = 0xfffffff800000000;
  *puVar5 = 0xfe;
  if (param_6 != 0) {
    bVar6 = bVar6 | 0x10;
  }
  uStack_1e0 = CONCAT71(uStack_1e0._1_7_,bVar6);
  param_9[4] = 0;
  param_9[5] = 0;
  param_9[3] = 0;
  *(undefined4 *)(param_9 + 6) = 0;
  if (((uVar10 == 0xffffffffffffffff) ||
      (puVar4 = puVar5, FUN_1082543fc(puVar5,uVar10 + 1), (int)puVar4 != 0)) &&
     (puVar4 = puVar5, FUN_108254500(puVar5,&uStack_1e0,1), (int)puVar4 != 0)) {
    FUN_108254500(puVar5,puVar3,uVar10);
    iVar8 = (int)puVar5;
  }
  else {
    iVar8 = 0;
  }
  if (!bVar1) {
    _free(lStack_208);
  }
  if (iVar8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_9 + 6) == 0;
  }
  *param_9 = param_9[4];
  return bVar1;
}



/* Entry: 10823d268; end: 10823d313;  */

void FUN_10823d268(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_FUN_113254c78)(param_2);
  lVar1 = param_2 + 0x438;
  *(long *)(param_2 + 0x18) = param_2;
  *(long *)(param_2 + 0x20) = lVar1;
  *(code **)(param_2 + 0x10) = FUN_10823d314;
  FUN_108244df0(param_1,lVar1);
  FUN_108244d3c(lVar1,param_3);
  iVar2 = *(int *)(param_1 + 0x30) * (param_4 - (int)param_3);
  *(int *)(param_2 + 0x588) = iVar2;
  *(int *)(param_2 + 0x584) = iVar2;
  _bzero(param_2 + 0x30,0x400);
  *(undefined8 *)(param_2 + 0x430) = 0;
  uVar3 = 0x14;
  if ((int)param_3 != 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x1340) = uVar3;
  return;
}



/* Entry: 10823d314; end: 10823d7c7;  */

int * FUN_10823d314(int *param_1,int *param_2,uint *param_3,ulong *param_4,long *param_5,
                   ulong *param_6,long param_7)

{
  bool bVar1;
  ushort *puVar2;
  ushort uVar3;
  int *piVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ushort *puVar17;
  uint *puVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  long lVar23;
  long *plVar24;
  char *pcVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  long lVar31;
  ushort *puVar32;
  ushort *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong *puVar37;
  undefined8 *puVar38;
  ulong *puVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  float fVar52;
  long lStack_200;
  uint uStack_1e4;
  ulong *puStack_1d8;
  undefined1 auStack_100 [48];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [9];
  
  alStack_b8[7] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2[0x53] < 1) {
    piVar30 = (int *)0x1;
    piVar4 = param_1;
    piVar8 = param_2;
  }
  else {
    do {
      FUN_108244f68(param_2,auStack_100);
      lVar11 = *(long *)(param_2 + 10);
      puVar22 = *(undefined4 **)(param_2 + 0x10);
      iVar40 = 4;
      do {
        *puVar22 = 0;
        puVar22 = (undefined4 *)((long)puVar22 + (long)*(int *)(*(long *)(param_2 + 10) + 0x38));
        iVar40 = iVar40 + -1;
      } while (iVar40 != 0);
      **(byte **)(param_2 + 0xc) = **(byte **)(param_2 + 0xc) & 0xfc | 1;
      **(byte **)(param_2 + 0xc) = **(byte **)(param_2 + 0xc) & 0xef;
      **(byte **)(param_2 + 0xc) = **(byte **)(param_2 + 0xc) & 0x9f;
      if (*(int *)(lVar11 + 0x5c40) < 2) {
        lVar11 = 0;
        fVar52 = *(float *)(**(long **)(param_2 + 10) + 4);
        uVar34 = 0xfffffffffffffffc;
        puVar38 = &uStack_c0;
        do {
          (*pcRam000000011386a010)(*(long *)(param_2 + 2) + lVar11,puVar38);
          uVar34 = uVar34 + 4;
          puVar38 = puVar38 + 2;
          lVar11 = lVar11 + 0x80;
        } while (uVar34 < 0xc);
        lVar11 = 0;
        iVar40 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar43 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        do {
          uVar7 = *(undefined8 *)((long)alStack_b8 + lVar11 + -8);
          iVar48 = (int)uVar7;
          iVar44 = iVar48 + iVar44;
          iVar49 = (int)((ulong)uVar7 >> 0x20);
          iVar45 = iVar49 + iVar45;
          iVar50 = (int)*(undefined8 *)((long)alStack_b8 + lVar11);
          iVar46 = iVar50 + iVar46;
          iVar51 = (int)((ulong)*(undefined8 *)((long)alStack_b8 + lVar11) >> 0x20);
          iVar47 = iVar51 + iVar47;
          iVar40 = iVar40 + iVar48 * iVar48;
          iVar41 = iVar41 + iVar49 * iVar49;
          iVar42 = iVar42 + iVar50 * iVar50;
          iVar43 = iVar43 + iVar51 * iVar51;
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x40);
        iVar44 = iVar44 + iVar45 + iVar46 + iVar47;
        if ((uint)((iVar40 + iVar41 + iVar42 + iVar43) * (((int)fVar52 * 9) / 100 + 8)) <
            (uint)(iVar44 * iVar44)) {
          puVar22 = *(undefined4 **)(param_2 + 0x10);
          iVar40 = 4;
          do {
            *puVar22 = 0;
            puVar22 = (undefined4 *)((long)puVar22 + (long)*(int *)(*(long *)(param_2 + 10) + 0x38))
            ;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
          pbVar12 = *(byte **)(param_2 + 0xc);
          bVar19 = *pbVar12 & 0xfc | 1;
        }
        else {
          uStack_d0 = 0;
          uStack_c8 = 0;
          uVar20 = 5;
          puVar22 = *(undefined4 **)(param_2 + 0x10);
          puVar38 = &uStack_d0;
          do {
            *puVar22 = *(undefined4 *)puVar38;
            puVar22 = (undefined4 *)((long)puVar22 + (long)*(int *)(*(long *)(param_2 + 10) + 0x38))
            ;
            uVar20 = uVar20 - 1;
            puVar38 = (undefined8 *)((long)puVar38 + 4);
          } while (1 < uVar20);
          pbVar12 = *(byte **)(param_2 + 0xc);
          bVar19 = *pbVar12 & 0xfc;
        }
        *pbVar12 = bVar19;
        iVar40 = 2;
      }
      else {
        if (*param_2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(param_2 + 0x5a);
        }
        if (param_2[1] == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(param_2 + 0x60);
        }
        (*pcRam0000000113869fc8)(*(undefined8 *)(param_2 + 8),uVar7,uVar9);
        lVar11 = 0;
        iVar40 = -1;
        iVar41 = 0;
        bVar1 = true;
        do {
          bVar10 = bVar1;
          uStack_c0 = 0x100000000;
          (*pcRam0000000113869fa8)
                    (*(undefined8 *)(param_2 + 2),
                     *(long *)(param_2 + 8) + (ulong)*(ushort *)(&UNK_10df0fca0 + lVar11 * 2),0,0x10
                     ,&uStack_c0);
          iVar42 = 0;
          if (1 < (int)uStack_c0) {
            iVar42 = 0;
            if ((int)uStack_c0 != 0) {
              iVar42 = (uStack_c0._4_4_ * 0x1fe) / (int)uStack_c0;
            }
          }
          iVar43 = (int)lVar11;
          if (iVar42 <= iVar40) {
            iVar43 = iVar41;
            iVar42 = iVar40;
          }
          iVar40 = iVar42;
          lVar11 = 1;
          iVar41 = iVar43;
          bVar1 = false;
        } while (bVar10);
        piVar30 = *(int **)(param_2 + 0x10);
        iVar41 = 4;
        do {
          *piVar30 = iVar43 * 0x1010101;
          piVar30 = (int *)((long)piVar30 + (long)*(int *)(*(long *)(param_2 + 10) + 0x38));
          iVar41 = iVar41 + -1;
        } while (iVar41 != 0);
        **(byte **)(param_2 + 0xc) = **(byte **)(param_2 + 0xc) & 0xfc | 1;
        iVar40 = iVar40 * 3 + 2;
      }
      if (*param_2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + 0x5c);
      }
      if (param_2[1] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(param_2 + 0x62);
      }
      (*pcRam0000000113869fc0)(*(undefined8 *)(param_2 + 8),uVar7,uVar9);
      lVar11 = 0;
      iVar41 = 0;
      iVar42 = 0;
      bVar1 = true;
      iVar43 = -1;
      do {
        bVar10 = bVar1;
        uStack_c0 = 0x100000000;
        param_5 = &uStack_c0;
        param_3 = (uint *)0x10;
        param_4 = (ulong *)0x18;
        (*pcRam0000000113869fa8)
                  (*(long *)(param_2 + 2) + 0x10,
                   *(long *)(param_2 + 8) + (ulong)*(ushort *)(&UNK_10df0fca8 + lVar11 * 2));
        if ((int)uStack_c0 < 2) {
          iVar44 = 0;
        }
        else {
          iVar44 = 0;
          if ((int)uStack_c0 != 0) {
            iVar44 = (uStack_c0._4_4_ * 0x1fe) / (int)uStack_c0;
          }
        }
        iVar45 = iVar44;
        if (iVar44 <= iVar43) {
          iVar45 = iVar43;
        }
        iVar43 = (int)lVar11;
        if (!bVar10 && iVar42 <= iVar44) {
          iVar44 = iVar42;
          iVar43 = iVar41;
        }
        iVar41 = iVar43;
        lVar11 = 1;
        iVar42 = iVar44;
        bVar1 = false;
        iVar43 = iVar45;
      } while (bVar10);
      iVar40 = iVar45 + iVar40 >> 2;
      uVar20 = 0xff - iVar40;
      if (0xfe < uVar20) {
        uVar20 = 0xff;
      }
      **(byte **)(param_2 + 0xc) = **(byte **)(param_2 + 0xc) & 0xf3 | (byte)(iVar41 << 2);
      uVar21 = 0;
      if (iVar40 < 0x100) {
        uVar21 = uVar20;
      }
      param_1[(ulong)uVar21 + 0xc] = param_1[(ulong)uVar21 + 0xc] + 1;
      *(char *)(*(long *)(param_2 + 0xc) + 1) = (char)uVar21;
      param_1[0x10c] = param_1[0x10c] + uVar21;
      param_1[0x10d] = param_1[0x10d] + iVar45;
      piVar8 = (int *)(ulong)(uint)param_1[0x4d0];
      piVar30 = param_2;
      func_0x000108244ec8();
      piVar4 = piVar30;
    } while (((int)piVar30 != 0) && (piVar4 = param_2, FUN_108245738(), (int)piVar4 != 0));
  }
  iVar40 = (int)piVar4;
  iVar41 = (int)piVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_b8[7]) {
    return piVar30;
  }
  ___stack_chk_fail();
  uVar20 = iVar41 * iVar40;
  if ((int)uVar20 < 0) {
    puVar32 = (ushort *)0x0;
  }
  else {
    uVar34 = (ulong)(int)uVar20;
    puVar32 = (ushort *)(uVar34 * 2);
    _malloc();
    if (puVar32 != (ushort *)0x0) {
      uVar29 = (uint)param_4;
      uVar28 = 1 << (ulong)(uVar29 & 0x1f);
      puVar39 = (ulong *)(ulong)uVar28;
      uVar21 = 0x118;
      if (0 < (int)uVar29) {
        uVar21 = uVar28 + 0x118;
      }
      if ((-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2) + 0xca8 < 0x400000001
         ) {
        uVar35 = 1;
        _calloc();
      }
      else {
        uVar35 = 0;
      }
      plVar5 = (long *)0x1;
      _calloc(1,0x81c8);
      piVar30 = (int *)0x0;
      if ((uVar35 != 0) && (plVar5 != (long *)0x0)) {
        *(ulong *)(uVar35 + 0xca0) = uVar35 + 0xca8;
        if (0 < (int)uVar29) {
          if ((uVar29 == 0x1f) ||
             (puStack_1d8 = puVar39, _calloc(puVar39,4), puStack_1d8 == (ulong *)0x0)) {
            piVar30 = (int *)0x0;
            goto LAB_10823e084;
          }
          uStack_1e4 = 0x20 - uVar29;
        }
        puVar6 = param_4;
        FUN_108242c98();
        puVar37 = param_6;
        if (puVar6 == (ulong *)0x0) {
LAB_10823dc10:
          piVar30 = (int *)0x0;
        }
        else {
          *(uint *)(puVar6 + 0x195) = uVar29;
          FUN_108242b88();
          FUN_108242c0c(param_6,FUN_10823e7e4,iVar40,puVar6);
          iVar41 = (1 << (ulong)((uint)puVar6[0x195] & 0x1f)) + 0x118;
          if ((int)(uint)puVar6[0x195] < 1) {
            iVar41 = 0x118;
          }
          func_0x00010823e564(iVar41,*puVar6,*(undefined8 *)(uVar35 + 0xca0));
          func_0x00010823e564(0x100,puVar6 + 1);
          func_0x00010823e564(0x100,puVar6 + 0x81);
          func_0x00010823e564(0x100,puVar6 + 0x101,uVar35);
          func_0x00010823e564(0x28,puVar6 + 0x181);
          _free(puVar6);
          plVar13 = (long *)0x0;
          plVar5[2] = 0;
          *plVar5 = 0;
          plVar5[0x1038] = 0;
          *(undefined4 *)(plVar5 + 1) = 0;
          lVar11 = 10;
          plVar5[0x1003] = 0;
          plVar5[0x1004] = (long)puVar32;
          plVar16 = plVar5 + 0x1000;
          do {
            plVar16[9] = (long)plVar13;
            plVar13 = plVar16 + 5;
            lVar11 = lVar11 + -1;
            plVar16 = plVar13;
          } while (lVar11 != 0);
          uVar21 = uVar20;
          if (0xffe < uVar20) {
            uVar21 = 0xfff;
          }
          uVar36 = (ulong)uVar21;
          plVar5[0x1037] = (long)plVar13;
          if (uVar20 != 0) {
            uVar14 = 0;
            lVar11 = *(long *)(uVar35 + 0xca0);
            uVar21 = 0xffffffff;
            pcVar25 = "";
            do {
              if (uVar14 < 0x200) {
                uVar28 = (uint)(byte)pcVar25[-1];
                uVar27 = (uint)*pcVar25;
              }
              else {
                uVar28 = (uint)LZCOUNT(uVar21) ^ 0x1f;
                uVar27 = uVar28 - 1;
                uVar28 = uVar21 >> (ulong)(uVar27 & 0x1f) & 1 | uVar28 << 1;
              }
              plVar5[uVar14 + 4] =
                   (ulong)*(uint *)(lVar11 + 0x400 + (long)(int)uVar28 * 4) +
                   (long)(int)uVar27 * 0x800000;
              uVar14 = uVar14 + 1;
              uVar21 = uVar21 + 1;
              pcVar25 = pcVar25 + 2;
            } while (uVar36 != uVar14);
            uVar14 = 1;
            plVar5[3] = 1;
            if (uVar20 == 1) {
              bVar1 = false;
              goto LAB_10823daec;
            }
            lVar11 = uVar36 - 1;
            uVar14 = 1;
            plVar13 = plVar5 + 5;
            lVar23 = plVar5[4];
            do {
              lVar15 = *plVar13;
              if (lVar15 != lVar23) {
                uVar14 = uVar14 + 1;
                plVar5[3] = uVar14;
              }
              lVar11 = lVar11 + -1;
              plVar13 = plVar13 + 1;
              lVar23 = lVar15;
            } while (lVar11 != 0);
            if ((uVar14 == 0) || (uVar14 < 0x40000001)) {
              bVar1 = true;
              goto LAB_10823daec;
            }
LAB_10823dbe8:
            func_0x00010823e47c(plVar5);
            puVar37 = puVar6;
            goto LAB_10823dc10;
          }
          bVar1 = false;
          uVar14 = 1;
          plVar5[3] = 1;
LAB_10823daec:
          plVar13 = (long *)(uVar14 << 4);
          _malloc();
          plVar5[2] = (long)plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10823dbe8;
          plVar13[1] = 0x100000000;
          lVar11 = plVar5[4];
          *plVar13 = lVar11;
          if (bVar1) {
            lVar23 = uVar36 - 1;
            iVar41 = 2;
            plVar16 = plVar5 + 5;
            do {
              lVar15 = *plVar16;
              plVar24 = plVar13;
              if (lVar15 != lVar11) {
                plVar24 = plVar13 + 2;
                *plVar24 = lVar15;
                *(int *)(plVar13 + 3) = iVar41 + -1;
              }
              *(int *)((long)plVar24 + 0xc) = iVar41;
              iVar41 = iVar41 + 1;
              lVar23 = lVar23 + -1;
              plVar13 = plVar24;
              lVar11 = lVar15;
              plVar16 = plVar16 + 1;
            } while (lVar23 != 0);
          }
          puVar37 = (ulong *)(uVar34 << 3);
          _malloc();
          plVar5[0x1003] = (long)puVar37;
          if (puVar37 == (ulong *)0x0) {
            func_0x00010823e47c(plVar5);
            puVar37 = puVar6;
            goto LAB_10823dc10;
          }
          if (uVar20 != 0) {
            _memset_pattern16(puVar37,&UNK_10df0df70,(ulong *)(uVar34 << 3));
          }
          *puVar32 = 0;
          uVar21 = *param_3;
          if ((int)uVar29 < 1) {
LAB_10823dc1c:
            lVar11 = ((ulong)*(uint *)(uVar35 + 0x400 + ((ulong)(uVar21 >> 0x10) & 0xff) * 4) +
                      (ulong)*(uint *)(uVar35 + (ulong)(uVar21 >> 0x18) * 4) +
                     (ulong)*(uint *)(*(long *)(uVar35 + 0xca0) + ((ulong)(uVar21 >> 8) & 0xff) * 4)
                     + (ulong)*(uint *)(uVar35 + 0x800 + ((ulong)uVar21 & 0xff) * 4)) * 0x52;
          }
          else {
            uVar28 = uVar21 * 0x1e35a7bd >> (ulong)(uStack_1e4 & 0x1f);
            if (((int)uVar28 < 0) ||
               (*(uint *)((long)puStack_1d8 + (long)(int)uVar28 * 4) != uVar21)) {
              *(uint *)((long)puStack_1d8 + (long)(int)uVar28 * 4) = uVar21;
              goto LAB_10823dc1c;
            }
            lVar11 = (ulong)*(uint *)(*(long *)(uVar35 + 0xca0) + (long)(int)(uVar28 + 0x118) * 4) *
                     0x44;
          }
          uVar36 = (lVar11 + 0x32U) / 100;
          if ((long)uVar36 < (long)*puVar37) {
            *puVar37 = uVar36;
            *puVar32 = 1;
          }
          if (1 < (int)uVar20) {
            iVar41 = 0;
            lStack_200 = -1;
            iVar42 = -1;
            lVar11 = 8;
            uVar36 = 1;
            puVar6 = (ulong *)0xffffffff;
            uVar21 = 0xffffffff;
            do {
              uVar28 = param_3[uVar36];
              if ((int)uVar29 < 1) {
LAB_10823dd28:
                lVar23 = ((ulong)*(uint *)(uVar35 + 0x400 + ((ulong)(uVar28 >> 0x10) & 0xff) * 4) +
                          (ulong)*(uint *)(uVar35 + (ulong)(uVar28 >> 0x18) * 4) +
                         (ulong)*(uint *)(*(long *)(uVar35 + 0xca0) +
                                         ((ulong)(uVar28 >> 8) & 0xff) * 4) +
                         (ulong)*(uint *)(uVar35 + 0x800 + ((ulong)uVar28 & 0xff) * 4)) * 0x52;
              }
              else {
                uVar27 = uVar28 * 0x1e35a7bd >> (ulong)(uStack_1e4 & 0x1f);
                if (((int)uVar27 < 0) ||
                   (*(uint *)((long)puStack_1d8 + (long)(int)uVar27 * 4) != uVar28)) {
                  *(uint *)((long)puStack_1d8 + (long)(int)uVar27 * 4) = uVar28;
                  goto LAB_10823dd28;
                }
                lVar23 = (ulong)*(uint *)(*(long *)(uVar35 + 0xca0) +
                                         (long)(int)(uVar27 + 0x118) * 4) * 0x44;
              }
              lVar15 = plVar5[0x1003];
              lVar31 = *(long *)(lVar15 + (uVar36 - 1) * 8);
              lVar26 = *param_5;
              uVar28 = *(uint *)(lVar26 + uVar36 * 4);
              lVar23 = (lVar23 + 0x32U) / 100 + lVar31;
              if (lVar23 < *(long *)(lVar15 + uVar36 * 8)) {
                *(long *)(lVar15 + uVar36 * 8) = lVar23;
                puVar32[uVar36] = 1;
              }
              uVar27 = uVar28 >> 0xc;
              puVar37 = (ulong *)(ulong)uVar27;
              uVar28 = uVar28 & 0xfff;
              if (1 < uVar28) {
                if (uVar27 == (uint)puVar6) {
                  if (iVar42 != 0) {
                    iVar41 = (int)(uVar36 - 1) + uVar21 + -1;
                  }
                  if (iVar41 < (int)((int)uVar36 + uVar28 + -1)) {
                    uVar14 = uVar36;
                    if ((long)iVar41 < (long)uVar36) {
                      uVar21 = 0;
                    }
                    else {
                      puVar18 = (uint *)(lVar26 + lVar11);
                      do {
                        uVar21 = *puVar18;
                        if ((uint)puVar6 != uVar21 >> 0xc) {
                          uVar21 = *(uint *)(lVar26 + (uVar14 & 0xffffffff) * 4) & 0xfff;
                          goto LAB_10823deb4;
                        }
                        bVar1 = (long)uVar14 < (long)iVar41;
                        uVar14 = uVar14 + 1;
                        puVar18 = puVar18 + 1;
                      } while (bVar1);
                      uVar21 = uVar21 & 0xfff;
                      uVar14 = (ulong)(iVar41 + 1);
                    }
LAB_10823deb4:
                    iVar42 = (int)uVar14;
                    iVar41 = iVar42 + -1;
                    plVar13 = (long *)*plVar5;
                    lVar23 = (long)iVar41;
                    plVar16 = plVar13;
                    if (plVar13 != (long *)0x0) {
                      do {
                        if (iVar42 <= (int)plVar16[1]) break;
                        plVar24 = (long *)plVar16[4];
                        if ((iVar42 <= *(int *)((long)plVar16 + 0xc)) &&
                           (*plVar16 < *(long *)(lVar15 + lVar23 * 8))) {
                          lVar26 = plVar16[2];
                          *(long *)(lVar15 + lVar23 * 8) = *plVar16;
                          *(short *)(plVar5[0x1004] + lVar23 * 2) =
                               ((short)iVar41 - (short)(int)lVar26) + 1;
                        }
                        plVar16 = plVar24;
                      } while (plVar24 != (long *)0x0);
                      do {
                        if (iVar42 < (int)plVar13[1]) break;
                        plVar16 = (long *)plVar13[4];
                        if ((iVar42 < *(int *)((long)plVar13 + 0xc)) &&
                           (*plVar13 < *(long *)(lVar15 + (uVar14 & 0xffffffff) * 8))) {
                          lVar26 = plVar13[2];
                          *(long *)(lVar15 + (uVar14 & 0xffffffff) * 8) = *plVar13;
                          *(short *)(plVar5[0x1004] + (uVar14 & 0xffffffff) * 2) =
                               ((short)uVar14 - (short)(int)lVar26) + 1;
                        }
                        plVar13 = plVar16;
                      } while (plVar16 != (long *)0x0);
                    }
                    func_0x00010823e230(plVar5,*(long *)(lVar15 + lVar23 * 8) + lStack_200,uVar14,
                                        uVar21);
                    iVar42 = 0;
                    iVar41 = iVar41 + uVar21;
                  }
                  else {
                    iVar42 = 0;
                  }
                }
                else {
                  iVar42 = iVar40;
                  FUN_10823e7e4(iVar40,puVar37);
                  if (iVar42 < 0x200) {
                    uVar21 = (uint)(char)(&UNK_10df0d838)[(long)iVar42 * 2];
                    uVar27 = (uint)(char)(&UNK_10df0d839)[(long)iVar42 * 2];
                  }
                  else {
                    uVar21 = (uint)LZCOUNT(iVar42 - 1U) ^ 0x1f;
                    uVar27 = uVar21 - 1;
                    uVar21 = iVar42 - 1U >> (ulong)(uVar27 & 0x1f) & 1 | uVar21 << 1;
                  }
                  lStack_200 = (ulong)*(uint *)(uVar35 + 0xc00 + (long)(int)uVar21 * 4) +
                               (long)(int)uVar27 * 0x800000;
                  func_0x00010823e230(plVar5,lStack_200 + lVar31,uVar36,uVar28);
                  iVar42 = 1;
                }
              }
              plVar13 = (long *)*plVar5;
              while (plVar16 = plVar13, plVar13 != (long *)0x0) {
                while( true ) {
                  if ((long)uVar36 < (long)(int)plVar16[1]) goto LAB_10823e040;
                  plVar13 = (long *)plVar16[4];
                  if ((long)*(int *)((long)plVar16 + 0xc) <= (long)uVar36) break;
                  if (*plVar16 < *(long *)(plVar5[0x1003] + uVar36 * 8)) {
                    lVar23 = plVar16[2];
                    *(long *)(plVar5[0x1003] + uVar36 * 8) = *plVar16;
                    *(short *)(plVar5[0x1004] + uVar36 * 2) =
                         ((short)uVar36 - (short)(int)lVar23) + 1;
                  }
                  plVar16 = plVar13;
                  if (plVar13 == (long *)0x0) goto LAB_10823e040;
                }
                lVar23 = plVar16[3];
                plVar24 = plVar5;
                if (lVar23 != 0) {
                  plVar24 = (long *)(lVar23 + 0x20);
                }
                *plVar24 = (long)plVar13;
                if (plVar13 != (long *)0x0) {
                  plVar13[3] = lVar23;
                }
                lVar23 = 0x81c0;
                if (plVar16 <= plVar5 + 0x1032 && plVar5 + 0x1005 <= plVar16) {
                  lVar23 = 0x81b8;
                }
                lVar15 = *(long *)((long)plVar5 + lVar23);
                *(long **)((long)plVar5 + lVar23) = plVar16;
                plVar16[4] = lVar15;
                *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
              }
LAB_10823e040:
              uVar36 = uVar36 + 1;
              lVar11 = lVar11 + 4;
              puVar6 = puVar37;
              uVar21 = uVar28;
            } while (uVar36 != uVar34);
          }
          piVar30 = (int *)(ulong)(*(int *)((long)param_6 + 4) == 0);
          param_4 = (ulong *)((ulong)param_4 & 0xffffffff);
        }
        param_6 = puVar37;
        if (0 < (int)param_4) {
          _free(puStack_1d8);
        }
      }
LAB_10823e084:
      func_0x00010823e47c(plVar5);
      _free(uVar35);
      _free(plVar5);
      if ((int)piVar30 == 0) goto LAB_10823d85c;
      puVar2 = puVar32 + uVar34;
      puVar33 = puVar2;
      if (uVar20 != 0) {
        puVar17 = puVar2 + -1;
        do {
          uVar3 = *puVar17;
          puVar33 = puVar33 + -1;
          *puVar33 = uVar3;
          puVar17 = puVar17 + -(ulong)uVar3;
        } while (puVar32 <= puVar17);
      }
      iVar40 = (int)param_4;
      if (0 < iVar40) {
        if ((iVar40 == 0x1f) || (_calloc(puVar39,4), puVar39 == (ulong *)0x0)) goto LAB_10823d858;
        uVar35 = (ulong)(0x20 - iVar40);
        param_6 = puVar39;
      }
      if (*(undefined8 **)(param_7 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_7 + 0x10) = *(undefined8 *)(param_7 + 0x18);
      }
      puVar38 = (undefined8 *)(param_7 + 8);
      *(undefined8 *)(param_7 + 0x18) = *puVar38;
      *(undefined8 *)(param_7 + 0x20) = 0;
      *puVar38 = 0;
      *(undefined8 **)(param_7 + 0x10) = puVar38;
      if (0 < (int)((ulong)((long)puVar2 - (long)puVar33) >> 1)) {
        uVar34 = 0;
        uVar36 = 0;
        do {
          uVar3 = puVar33[uVar34];
          uVar14 = (ulong)uVar3;
          if (uVar3 == 1) {
            uVar20 = param_3[uVar36];
            if (iVar40 < 1) {
LAB_10823e1ec:
              uVar14 = 0x10000;
            }
            else {
              uVar21 = uVar20 * 0x1e35a7bd >> (ulong)((uint)uVar35 & 0x1f);
              if ((*(uint *)((long)param_6 + (long)(int)uVar21 * 4) != uVar20) || ((int)uVar21 < 0))
              {
                *(uint *)((long)param_6 + (long)(int)uVar21 * 4) = uVar20;
                goto LAB_10823e1ec;
              }
              uVar14 = 0x10001;
              uVar20 = uVar21;
            }
            func_0x00010823e894(param_7,uVar14 | (ulong)uVar20 << 0x20);
          }
          else {
            func_0x00010823e894(param_7,((ulong)*(uint *)(*param_5 + uVar36 * 4) & 0xfffff000) <<
                                        0x14 | uVar14 << 0x10 | 2);
            if ((0 < iVar40) && (uVar3 != 0)) {
              puVar18 = param_3 + uVar36;
              do {
                *(uint *)((long)param_6 +
                         (long)(int)(*puVar18 * 0x1e35a7bd >> (ulong)((uint)uVar35 & 0x1f)) * 4) =
                     *puVar18;
                uVar14 = uVar14 - 1;
                puVar18 = puVar18 + 1;
              } while (uVar14 != 0);
            }
          }
          uVar36 = (ulong)((int)uVar36 + (uint)uVar3);
          uVar34 = uVar34 + 1;
        } while (uVar34 != ((ulong)((long)puVar2 - (long)puVar33) >> 1 & 0x7fffffff));
      }
      piVar30 = (int *)(ulong)(*(int *)(param_7 + 4) == 0);
      if (0 < iVar40) {
        _free(param_6);
      }
      goto LAB_10823d85c;
    }
  }
LAB_10823d858:
  piVar30 = (int *)0x0;
LAB_10823d85c:
  _free(puVar32);
  return piVar30;
}



/* Entry: 10823d7c8; end: 10823e47b;  */

bool FUN_10823d7c8(int param_1,int param_2,uint *param_3,ulong *param_4,long *param_5,ulong *param_6
                  ,long param_7)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ushort *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ushort *puVar26;
  ushort *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  long lStack_d0;
  uint uStack_b4;
  ulong *puStack_a8;
  
  uVar3 = param_2 * param_1;
  if ((int)uVar3 < 0) {
    puVar26 = (ushort *)0x0;
  }
  else {
    uVar31 = (ulong)(int)uVar3;
    puVar26 = (ushort *)(uVar31 * 2);
    _malloc();
    if (puVar26 != (ushort *)0x0) {
      uVar23 = (uint)param_4;
      uVar22 = 1 << (ulong)(uVar23 & 0x1f);
      puVar33 = (ulong *)(ulong)uVar22;
      uVar15 = 0x118;
      if (0 < (int)uVar23) {
        uVar15 = uVar22 + 0x118;
      }
      if ((-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2) + 0xca8 < 0x400000001
         ) {
        uVar28 = 1;
        _calloc();
      }
      else {
        uVar28 = 0;
      }
      plVar6 = (long *)0x1;
      _calloc(1,0x81c8);
      bVar4 = false;
      if ((uVar28 != 0) && (plVar6 != (long *)0x0)) {
        *(ulong *)(uVar28 + 0xca0) = uVar28 + 0xca8;
        if (0 < (int)uVar23) {
          if ((uVar23 == 0x1f) ||
             (puStack_a8 = puVar33, _calloc(puVar33,4), puStack_a8 == (ulong *)0x0)) {
            bVar4 = false;
            goto LAB_10823e084;
          }
          uStack_b4 = 0x20 - uVar23;
        }
        puVar7 = param_4;
        FUN_108242c98();
        puVar30 = param_6;
        if (puVar7 == (ulong *)0x0) {
LAB_10823dc10:
          bVar4 = false;
        }
        else {
          *(uint *)(puVar7 + 0x195) = uVar23;
          FUN_108242b88();
          FUN_108242c0c(param_6,FUN_10823e7e4,param_1,puVar7);
          iVar24 = (1 << (ulong)((uint)puVar7[0x195] & 0x1f)) + 0x118;
          if ((int)(uint)puVar7[0x195] < 1) {
            iVar24 = 0x118;
          }
          func_0x00010823e564(iVar24,*puVar7,*(undefined8 *)(uVar28 + 0xca0));
          func_0x00010823e564(0x100,puVar7 + 1);
          func_0x00010823e564(0x100,puVar7 + 0x81);
          func_0x00010823e564(0x100,puVar7 + 0x101,uVar28);
          func_0x00010823e564(0x28,puVar7 + 0x181);
          _free(puVar7);
          plVar9 = (long *)0x0;
          plVar6[2] = 0;
          *plVar6 = 0;
          plVar6[0x1038] = 0;
          *(undefined4 *)(plVar6 + 1) = 0;
          lVar17 = 10;
          plVar6[0x1003] = 0;
          plVar6[0x1004] = (long)puVar26;
          plVar12 = plVar6 + 0x1000;
          do {
            plVar12[9] = (long)plVar9;
            plVar9 = plVar12 + 5;
            lVar17 = lVar17 + -1;
            plVar12 = plVar9;
          } while (lVar17 != 0);
          uVar15 = uVar3;
          if (0xffe < uVar3) {
            uVar15 = 0xfff;
          }
          uVar29 = (ulong)uVar15;
          plVar6[0x1037] = (long)plVar9;
          if (uVar3 != 0) {
            uVar10 = 0;
            lVar17 = *(long *)(uVar28 + 0xca0);
            uVar15 = 0xffffffff;
            pcVar19 = "";
            do {
              if (uVar10 < 0x200) {
                uVar22 = (uint)(byte)pcVar19[-1];
                uVar21 = (uint)*pcVar19;
              }
              else {
                uVar22 = (uint)LZCOUNT(uVar15) ^ 0x1f;
                uVar21 = uVar22 - 1;
                uVar22 = uVar15 >> (ulong)(uVar21 & 0x1f) & 1 | uVar22 << 1;
              }
              plVar6[uVar10 + 4] =
                   (ulong)*(uint *)(lVar17 + 0x400 + (long)(int)uVar22 * 4) +
                   (long)(int)uVar21 * 0x800000;
              uVar10 = uVar10 + 1;
              uVar15 = uVar15 + 1;
              pcVar19 = pcVar19 + 2;
            } while (uVar29 != uVar10);
            uVar10 = 1;
            plVar6[3] = 1;
            if (uVar3 == 1) {
              bVar4 = false;
              goto LAB_10823daec;
            }
            lVar17 = uVar29 - 1;
            uVar10 = 1;
            plVar9 = plVar6 + 5;
            lVar16 = plVar6[4];
            do {
              lVar11 = *plVar9;
              if (lVar11 != lVar16) {
                uVar10 = uVar10 + 1;
                plVar6[3] = uVar10;
              }
              lVar17 = lVar17 + -1;
              plVar9 = plVar9 + 1;
              lVar16 = lVar11;
            } while (lVar17 != 0);
            if ((uVar10 == 0) || (uVar10 < 0x40000001)) {
              bVar4 = true;
              goto LAB_10823daec;
            }
LAB_10823dbe8:
            func_0x00010823e47c(plVar6);
            puVar30 = puVar7;
            goto LAB_10823dc10;
          }
          bVar4 = false;
          uVar10 = 1;
          plVar6[3] = 1;
LAB_10823daec:
          plVar9 = (long *)(uVar10 << 4);
          _malloc();
          plVar6[2] = (long)plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10823dbe8;
          plVar9[1] = 0x100000000;
          lVar17 = plVar6[4];
          *plVar9 = lVar17;
          if (bVar4) {
            lVar16 = uVar29 - 1;
            iVar24 = 2;
            plVar12 = plVar6 + 5;
            do {
              lVar11 = *plVar12;
              plVar18 = plVar9;
              if (lVar11 != lVar17) {
                plVar18 = plVar9 + 2;
                *plVar18 = lVar11;
                *(int *)(plVar9 + 3) = iVar24 + -1;
              }
              *(int *)((long)plVar18 + 0xc) = iVar24;
              iVar24 = iVar24 + 1;
              lVar16 = lVar16 + -1;
              plVar9 = plVar18;
              lVar17 = lVar11;
              plVar12 = plVar12 + 1;
            } while (lVar16 != 0);
          }
          puVar30 = (ulong *)(uVar31 << 3);
          _malloc();
          plVar6[0x1003] = (long)puVar30;
          if (puVar30 == (ulong *)0x0) {
            func_0x00010823e47c(plVar6);
            puVar30 = puVar7;
            goto LAB_10823dc10;
          }
          if (uVar3 != 0) {
            _memset_pattern16(puVar30,&UNK_10df0df70,(ulong *)(uVar31 << 3));
          }
          *puVar26 = 0;
          uVar15 = *param_3;
          if ((int)uVar23 < 1) {
LAB_10823dc1c:
            lVar17 = ((ulong)*(uint *)(uVar28 + 0x400 + ((ulong)(uVar15 >> 0x10) & 0xff) * 4) +
                      (ulong)*(uint *)(uVar28 + (ulong)(uVar15 >> 0x18) * 4) +
                     (ulong)*(uint *)(*(long *)(uVar28 + 0xca0) + ((ulong)(uVar15 >> 8) & 0xff) * 4)
                     + (ulong)*(uint *)(uVar28 + 0x800 + ((ulong)uVar15 & 0xff) * 4)) * 0x52;
          }
          else {
            uVar22 = uVar15 * 0x1e35a7bd >> (ulong)(uStack_b4 & 0x1f);
            if (((int)uVar22 < 0) || (*(uint *)((long)puStack_a8 + (long)(int)uVar22 * 4) != uVar15)
               ) {
              *(uint *)((long)puStack_a8 + (long)(int)uVar22 * 4) = uVar15;
              goto LAB_10823dc1c;
            }
            lVar17 = (ulong)*(uint *)(*(long *)(uVar28 + 0xca0) + (long)(int)(uVar22 + 0x118) * 4) *
                     0x44;
          }
          uVar29 = (lVar17 + 0x32U) / 100;
          if ((long)uVar29 < (long)*puVar30) {
            *puVar30 = uVar29;
            *puVar26 = 1;
          }
          if (1 < (int)uVar3) {
            iVar24 = 0;
            lStack_d0 = -1;
            iVar8 = -1;
            lVar17 = 8;
            uVar29 = 1;
            puVar7 = (ulong *)0xffffffff;
            uVar15 = 0xffffffff;
            do {
              uVar22 = param_3[uVar29];
              if ((int)uVar23 < 1) {
LAB_10823dd28:
                lVar16 = ((ulong)*(uint *)(uVar28 + 0x400 + ((ulong)(uVar22 >> 0x10) & 0xff) * 4) +
                          (ulong)*(uint *)(uVar28 + (ulong)(uVar22 >> 0x18) * 4) +
                         (ulong)*(uint *)(*(long *)(uVar28 + 0xca0) +
                                         ((ulong)(uVar22 >> 8) & 0xff) * 4) +
                         (ulong)*(uint *)(uVar28 + 0x800 + ((ulong)uVar22 & 0xff) * 4)) * 0x52;
              }
              else {
                uVar21 = uVar22 * 0x1e35a7bd >> (ulong)(uStack_b4 & 0x1f);
                if (((int)uVar21 < 0) ||
                   (*(uint *)((long)puStack_a8 + (long)(int)uVar21 * 4) != uVar22)) {
                  *(uint *)((long)puStack_a8 + (long)(int)uVar21 * 4) = uVar22;
                  goto LAB_10823dd28;
                }
                lVar16 = (ulong)*(uint *)(*(long *)(uVar28 + 0xca0) +
                                         (long)(int)(uVar21 + 0x118) * 4) * 0x44;
              }
              lVar11 = plVar6[0x1003];
              lVar25 = *(long *)(lVar11 + (uVar29 - 1) * 8);
              lVar20 = *param_5;
              uVar22 = *(uint *)(lVar20 + uVar29 * 4);
              lVar16 = (lVar16 + 0x32U) / 100 + lVar25;
              if (lVar16 < *(long *)(lVar11 + uVar29 * 8)) {
                *(long *)(lVar11 + uVar29 * 8) = lVar16;
                puVar26[uVar29] = 1;
              }
              uVar21 = uVar22 >> 0xc;
              puVar30 = (ulong *)(ulong)uVar21;
              uVar22 = uVar22 & 0xfff;
              if (1 < uVar22) {
                if (uVar21 == (uint)puVar7) {
                  if (iVar8 != 0) {
                    iVar24 = (int)(uVar29 - 1) + uVar15 + -1;
                  }
                  if (iVar24 < (int)((int)uVar29 + uVar22 + -1)) {
                    uVar10 = uVar29;
                    if ((long)iVar24 < (long)uVar29) {
                      uVar15 = 0;
                    }
                    else {
                      puVar14 = (uint *)(lVar20 + lVar17);
                      do {
                        uVar15 = *puVar14;
                        if ((uint)puVar7 != uVar15 >> 0xc) {
                          uVar15 = *(uint *)(lVar20 + (uVar10 & 0xffffffff) * 4) & 0xfff;
                          goto LAB_10823deb4;
                        }
                        bVar4 = (long)uVar10 < (long)iVar24;
                        uVar10 = uVar10 + 1;
                        puVar14 = puVar14 + 1;
                      } while (bVar4);
                      uVar15 = uVar15 & 0xfff;
                      uVar10 = (ulong)(iVar24 + 1);
                    }
LAB_10823deb4:
                    iVar8 = (int)uVar10;
                    iVar24 = iVar8 + -1;
                    plVar9 = (long *)*plVar6;
                    lVar16 = (long)iVar24;
                    plVar12 = plVar9;
                    if (plVar9 != (long *)0x0) {
                      do {
                        if (iVar8 <= (int)plVar12[1]) break;
                        plVar18 = (long *)plVar12[4];
                        if ((iVar8 <= *(int *)((long)plVar12 + 0xc)) &&
                           (*plVar12 < *(long *)(lVar11 + lVar16 * 8))) {
                          lVar20 = plVar12[2];
                          *(long *)(lVar11 + lVar16 * 8) = *plVar12;
                          *(short *)(plVar6[0x1004] + lVar16 * 2) =
                               ((short)iVar24 - (short)(int)lVar20) + 1;
                        }
                        plVar12 = plVar18;
                      } while (plVar18 != (long *)0x0);
                      do {
                        if (iVar8 < (int)plVar9[1]) break;
                        plVar12 = (long *)plVar9[4];
                        if ((iVar8 < *(int *)((long)plVar9 + 0xc)) &&
                           (*plVar9 < *(long *)(lVar11 + (uVar10 & 0xffffffff) * 8))) {
                          lVar20 = plVar9[2];
                          *(long *)(lVar11 + (uVar10 & 0xffffffff) * 8) = *plVar9;
                          *(short *)(plVar6[0x1004] + (uVar10 & 0xffffffff) * 2) =
                               ((short)uVar10 - (short)(int)lVar20) + 1;
                        }
                        plVar9 = plVar12;
                      } while (plVar12 != (long *)0x0);
                    }
                    func_0x00010823e230(plVar6,*(long *)(lVar11 + lVar16 * 8) + lStack_d0,uVar10,
                                        uVar15);
                    iVar8 = 0;
                    iVar24 = iVar24 + uVar15;
                  }
                  else {
                    iVar8 = 0;
                  }
                }
                else {
                  iVar8 = param_1;
                  FUN_10823e7e4(param_1,puVar30);
                  if (iVar8 < 0x200) {
                    uVar15 = (uint)(char)(&UNK_10df0d838)[(long)iVar8 * 2];
                    uVar21 = (uint)(char)(&UNK_10df0d839)[(long)iVar8 * 2];
                  }
                  else {
                    uVar15 = (uint)LZCOUNT(iVar8 - 1U) ^ 0x1f;
                    uVar21 = uVar15 - 1;
                    uVar15 = iVar8 - 1U >> (ulong)(uVar21 & 0x1f) & 1 | uVar15 << 1;
                  }
                  lStack_d0 = (ulong)*(uint *)(uVar28 + 0xc00 + (long)(int)uVar15 * 4) +
                              (long)(int)uVar21 * 0x800000;
                  func_0x00010823e230(plVar6,lStack_d0 + lVar25,uVar29,uVar22);
                  iVar8 = 1;
                }
              }
              plVar9 = (long *)*plVar6;
              while (plVar12 = plVar9, plVar9 != (long *)0x0) {
                while( true ) {
                  if ((long)uVar29 < (long)(int)plVar12[1]) goto LAB_10823e040;
                  plVar9 = (long *)plVar12[4];
                  if ((long)*(int *)((long)plVar12 + 0xc) <= (long)uVar29) break;
                  if (*plVar12 < *(long *)(plVar6[0x1003] + uVar29 * 8)) {
                    lVar16 = plVar12[2];
                    *(long *)(plVar6[0x1003] + uVar29 * 8) = *plVar12;
                    *(short *)(plVar6[0x1004] + uVar29 * 2) =
                         ((short)uVar29 - (short)(int)lVar16) + 1;
                  }
                  plVar12 = plVar9;
                  if (plVar9 == (long *)0x0) goto LAB_10823e040;
                }
                lVar16 = plVar12[3];
                plVar18 = plVar6;
                if (lVar16 != 0) {
                  plVar18 = (long *)(lVar16 + 0x20);
                }
                *plVar18 = (long)plVar9;
                if (plVar9 != (long *)0x0) {
                  plVar9[3] = lVar16;
                }
                lVar16 = 0x81c0;
                if (plVar12 <= plVar6 + 0x1032 && plVar6 + 0x1005 <= plVar12) {
                  lVar16 = 0x81b8;
                }
                lVar11 = *(long *)((long)plVar6 + lVar16);
                *(long **)((long)plVar6 + lVar16) = plVar12;
                plVar12[4] = lVar11;
                *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
              }
LAB_10823e040:
              uVar29 = uVar29 + 1;
              lVar17 = lVar17 + 4;
              puVar7 = puVar30;
              uVar15 = uVar22;
            } while (uVar29 != uVar31);
          }
          bVar4 = *(int *)((long)param_6 + 4) == 0;
          param_4 = (ulong *)((ulong)param_4 & 0xffffffff);
        }
        param_6 = puVar30;
        if (0 < (int)param_4) {
          _free(puStack_a8);
        }
      }
LAB_10823e084:
      func_0x00010823e47c(plVar6);
      _free(uVar28);
      _free(plVar6);
      bVar5 = false;
      if (!bVar4) goto LAB_10823d85c;
      puVar1 = puVar26 + uVar31;
      puVar27 = puVar1;
      if (uVar3 != 0) {
        puVar13 = puVar1 + -1;
        do {
          uVar2 = *puVar13;
          puVar27 = puVar27 + -1;
          *puVar27 = uVar2;
          puVar13 = puVar13 + -(ulong)uVar2;
        } while (puVar26 <= puVar13);
      }
      iVar24 = (int)param_4;
      if (0 < iVar24) {
        if ((iVar24 == 0x1f) || (_calloc(puVar33,4), puVar33 == (ulong *)0x0)) goto LAB_10823d858;
        uVar28 = (ulong)(0x20 - iVar24);
        param_6 = puVar33;
      }
      if (*(undefined8 **)(param_7 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_7 + 0x10) = *(undefined8 *)(param_7 + 0x18);
      }
      puVar32 = (undefined8 *)(param_7 + 8);
      *(undefined8 *)(param_7 + 0x18) = *puVar32;
      *(undefined8 *)(param_7 + 0x20) = 0;
      *puVar32 = 0;
      *(undefined8 **)(param_7 + 0x10) = puVar32;
      if (0 < (int)((ulong)((long)puVar1 - (long)puVar27) >> 1)) {
        uVar31 = 0;
        uVar29 = 0;
        do {
          uVar2 = puVar27[uVar31];
          uVar10 = (ulong)uVar2;
          if (uVar2 == 1) {
            uVar3 = param_3[uVar29];
            if (iVar24 < 1) {
LAB_10823e1ec:
              uVar10 = 0x10000;
            }
            else {
              uVar15 = uVar3 * 0x1e35a7bd >> (ulong)((uint)uVar28 & 0x1f);
              if ((*(uint *)((long)param_6 + (long)(int)uVar15 * 4) != uVar3) || ((int)uVar15 < 0))
              {
                *(uint *)((long)param_6 + (long)(int)uVar15 * 4) = uVar3;
                goto LAB_10823e1ec;
              }
              uVar10 = 0x10001;
              uVar3 = uVar15;
            }
            func_0x00010823e894(param_7,uVar10 | (ulong)uVar3 << 0x20);
          }
          else {
            func_0x00010823e894(param_7,((ulong)*(uint *)(*param_5 + uVar29 * 4) & 0xfffff000) <<
                                        0x14 | uVar10 << 0x10 | 2);
            if ((0 < iVar24) && (uVar2 != 0)) {
              puVar14 = param_3 + uVar29;
              do {
                *(uint *)((long)param_6 +
                         (long)(int)(*puVar14 * 0x1e35a7bd >> (ulong)((uint)uVar28 & 0x1f)) * 4) =
                     *puVar14;
                uVar10 = uVar10 - 1;
                puVar14 = puVar14 + 1;
              } while (uVar10 != 0);
            }
          }
          uVar29 = (ulong)((int)uVar29 + (uint)uVar2);
          uVar31 = uVar31 + 1;
        } while (uVar31 != ((ulong)((long)puVar1 - (long)puVar27) >> 1 & 0x7fffffff));
      }
      bVar5 = *(int *)(param_7 + 4) == 0;
      if (0 < iVar24) {
        _free(param_6);
      }
      goto LAB_10823d85c;
    }
  }
LAB_10823d858:
  bVar5 = false;
LAB_10823d85c:
  _free(puVar26);
  return bVar5;
}



/* Entry: 10823e47c; end: 10823e643;  */

void FUN_10823e47c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    _free(param_1[0x1003]);
    _free(param_1[2]);
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*param_1;
      do {
        puVar3 = (undefined8 *)puVar1[4];
        if ((puVar1 < param_1 + 0x1005) || (param_1 + 0x1032 < puVar1)) {
          _free();
        }
        puVar1 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    *param_1 = 0;
    if ((undefined8 *)param_1[0x1038] != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[0x1038];
      do {
        puVar3 = (undefined8 *)puVar1[4];
        if ((puVar1 < param_1 + 0x1005) || (param_1 + 0x1032 < puVar1)) {
          _free();
        }
        puVar1 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    _bzero(param_1,0x81c8);
    puVar1 = param_1 + 0x1000;
    lVar2 = 10;
    puVar3 = (undefined8 *)0x0;
    do {
      puVar1[9] = puVar3;
      puVar1 = puVar1 + 5;
      lVar2 = lVar2 + -1;
      puVar3 = puVar1;
    } while (lVar2 != 0);
    param_1[0x1037] = puVar1;
  }
  return;
}



/* Entry: 10823e644; end: 10823e7e3;  */

void FUN_10823e644(long *param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_6 <= param_5) {
    return;
  }
  lVar4 = param_1[1];
  if (499 < (int)lVar4) {
    lVar2 = param_1[0x1003];
    lVar4 = (long)param_5;
    param_5 = param_5 - param_4;
    do {
      if (param_3 < *(long *)(lVar2 + lVar4 * 8)) {
        *(long *)(lVar2 + lVar4 * 8) = param_3;
        *(short *)(param_1[0x1004] + lVar4 * 2) = (short)param_5 + 1;
      }
      lVar4 = lVar4 + 1;
      param_5 = param_5 + 1;
    } while (param_6 != lVar4);
    return;
  }
  plVar1 = (long *)param_1[0x1037];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)param_1[0x1038];
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x28;
      _malloc();
      if (plVar1 == (long *)0x0) {
        lVar2 = param_1[0x1003];
        lVar4 = (long)param_5;
        param_5 = param_5 - param_4;
        do {
          if (param_3 < *(long *)(lVar2 + lVar4 * 8)) {
            *(long *)(lVar2 + lVar4 * 8) = param_3;
            *(short *)(param_1[0x1004] + lVar4 * 2) = (short)param_5 + 1;
          }
          lVar4 = lVar4 + 1;
          param_5 = param_5 + 1;
        } while (param_6 != lVar4);
        return;
      }
      goto LAB_10823e6f0;
    }
    plVar3 = param_1 + 0x1038;
  }
  else {
    plVar3 = param_1 + 0x1037;
  }
  *plVar3 = plVar1[4];
LAB_10823e6f0:
  *plVar1 = param_3;
  *(int *)((long)plVar1 + 0xc) = param_6;
  *(int *)(plVar1 + 2) = param_4;
  *(int *)(plVar1 + 1) = param_5;
  if (param_2 != 0) goto LAB_10823e708;
  for (param_2 = *param_1; param_2 != 0; param_2 = *(long *)(param_2 + 0x18)) {
LAB_10823e708:
    if (*(int *)(param_2 + 8) <= param_5) break;
  }
  do {
    lVar2 = param_2;
    if (lVar2 == 0) {
      lVar5 = *param_1;
      plVar1[4] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x18) = plVar1;
      }
LAB_10823e754:
      plVar3 = param_1;
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0x20);
      }
      goto LAB_10823e770;
    }
    param_2 = *(long *)(lVar2 + 0x20);
    if (param_2 == 0) {
      plVar1[4] = 0;
      goto LAB_10823e754;
    }
  } while (*(int *)(param_2 + 8) < param_5);
  plVar1[4] = param_2;
  *(long **)(param_2 + 0x18) = plVar1;
  plVar3 = (long *)(lVar2 + 0x20);
LAB_10823e770:
  *plVar3 = (long)plVar1;
  plVar1[3] = lVar2;
  *(int *)(param_1 + 1) = (int)lVar4 + 1;
  return;
}



/* Entry: 10823e7e4; end: 10823e83f;  */

int FUN_10823e7e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_2 / param_1;
  }
  iVar2 = param_2 - iVar1 * param_1;
  if (iVar1 < 8 && iVar2 < 9) {
    iVar2 = (iVar1 << 4 | 8U) - iVar2;
  }
  else {
    if (6 < iVar1 || iVar2 <= param_1 + -8) {
      return param_2 + 0x78;
    }
    iVar2 = ((param_1 + iVar1 * 0x10) - iVar2) + 0x18;
  }
  return (byte)(&UNK_10df0df80)[iVar2] + 1;
}



/* Entry: 10823e840; end: 10823e96f;  */

void FUN_10823e840(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar2;
  *(long **)(param_1 + 0x18) = plVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *plVar2 = 0;
  *(long **)(param_1 + 0x10) = plVar2;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return;
}



/* Entry: 10823e970; end: 10823ffb7;  */

undefined8
FUN_10823e970(long *param_1,int param_2,int *param_3,uint param_4,int param_5,int param_6,
             long param_7,int param_8,int *param_9)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  int *piVar28;
  int *piVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  iVar9 = param_5 * param_4;
  uVar19 = 6;
  if (param_2 < 0x1a) {
    uVar19 = 4;
  }
  uVar19 = param_4 << (ulong)uVar19;
  if (0x32 < param_2) {
    uVar19 = param_4 << 8;
  }
  uVar6 = 0xfff88;
  if (param_2 < 0x4c) {
    uVar6 = uVar19;
  }
  if (0xfff87 < (int)uVar6) {
    uVar6 = 0xfff88;
  }
  puVar20 = (undefined4 *)*param_1;
  uVar19 = iVar9 - 2;
  if (uVar19 == 0 || iVar9 < 2) {
    puVar20[(long)iVar9 + -1] = 0;
    *puVar20 = 0;
  }
  else {
    iVar14 = *param_9;
    lVar15 = 0x100000;
    _malloc();
    if (lVar15 == 0) {
      if (*(int *)(param_7 + 0x88) != 0) {
        return 0;
      }
      uVar17 = 1;
LAB_10823efa0:
      *(undefined4 *)(param_7 + 0x88) = uVar17;
      return 0;
    }
    uVar30 = (uint)(param_2 * param_2) >> 7;
    iVar2 = uVar30 + 8;
    iVar4 = param_8 / 2;
    _memset();
    bVar11 = *param_3 == param_3[1];
    uVar26 = 0;
    do {
      iVar25 = (int)uVar26;
      uVar18 = (ulong)iVar25;
      uVar27 = uVar18 + 1;
      iVar12 = param_3[uVar27];
      piVar1 = param_3 + iVar25;
      if ((bVar11) && (iVar12 == piVar1[2])) {
        iVar12 = *piVar1;
        if (iVar25 + 3 < iVar9) {
          uVar16 = uVar19 - iVar25;
          iVar22 = 3;
          do {
            if (param_3[(uint)(iVar25 + iVar22)] != iVar12) {
              uVar16 = iVar22 - 2;
              break;
            }
            iVar22 = iVar22 + 1;
          } while ((iVar25 - param_5 * param_4) + iVar22 != 0);
          if (0xfff < uVar16) {
            _memset(puVar20 + uVar18,0xff,(ulong)(uVar16 - 0xfff) << 2);
            uVar18 = (ulong)(int)((uVar16 - 0xfff) + iVar25);
            uVar16 = 0xfff;
            goto LAB_10823eb8c;
          }
          if (uVar16 != 0) goto LAB_10823eb8c;
        }
        else {
          uVar16 = 1;
LAB_10823eb8c:
          uVar23 = iVar12 * 0x5bd1e996 + uVar16 * -0x395b586d;
          puVar21 = puVar20 + uVar18;
          uVar26 = uVar18;
          do {
            *puVar21 = *(undefined4 *)(lVar15 + (ulong)(uVar23 >> 0xe) * 4);
            *(int *)(lVar15 + (ulong)(uVar23 >> 0xe) * 4) = (int)uVar26;
            uVar26 = (ulong)((int)uVar26 + 1);
            uVar23 = uVar23 + 0x395b586d;
            uVar16 = uVar16 - 1;
            puVar21 = puVar21 + 1;
          } while (uVar16 != 0);
        }
        bVar11 = false;
        uVar27 = uVar26;
      }
      else {
        bVar11 = iVar12 == piVar1[2];
        uVar16 = (uint)(iVar12 * -0x395b586d + *piVar1 * 0x5bd1e996) >> 0xe;
        puVar20[uVar18] = *(undefined4 *)(lVar15 + (ulong)uVar16 * 4);
        *(int *)(lVar15 + (ulong)uVar16 * 4) = iVar25;
      }
      iVar12 = 0;
      if (uVar19 != 0) {
        iVar12 = ((int)uVar27 * iVar4) / (int)uVar19;
      }
      iVar12 = iVar12 + iVar14;
      if (*param_9 != iVar12) {
        *param_9 = iVar12;
        if ((*(code **)(param_7 + 0x90) != (code *)0x0) &&
           ((**(code **)(param_7 + 0x90))(iVar12,param_7), iVar12 == 0)) {
          if (*(int *)(param_7 + 0x88) == 0) {
            *(undefined4 *)(param_7 + 0x88) = 10;
          }
          _free(lVar15);
          return 0;
        }
      }
      uVar26 = uVar27;
    } while ((int)uVar27 < (int)uVar19);
    puVar20[uVar27 & 0xffffffff] =
         *(undefined4 *)
          (lVar15 + (ulong)((uint)((param_3 + (uVar27 & 0xffffffff))[1] * -0x395b586d +
                                  param_3[uVar27 & 0xffffffff] * 0x5bd1e996) >> 0xe) * 4);
    _free(lVar15);
    iVar12 = iVar14 + iVar4;
    if (*param_9 != iVar12) {
      *param_9 = iVar12;
      if ((*(code **)(param_7 + 0x90) != (code *)0x0) &&
         (iVar25 = iVar12, (**(code **)(param_7 + 0x90))(iVar12,param_7), iVar25 == 0)) {
        if (*(int *)(param_7 + 0x88) != 0) {
          return 0;
        }
        uVar17 = 10;
        goto LAB_10823efa0;
      }
    }
    puVar21 = (undefined4 *)*param_1;
    puVar21[iVar9 - 1U] = 0;
    *puVar21 = 0;
    iVar25 = uVar30 + 7;
    uVar30 = uVar19;
    do {
      iVar10 = (iVar9 - 1U) - uVar30;
      iVar22 = iVar10;
      if (0xffe < iVar10) {
        iVar22 = 0xfff;
      }
      piVar1 = param_3 + uVar30;
      iVar7 = 0;
      if (uVar6 <= uVar30) {
        iVar7 = uVar30 - uVar6;
      }
      if (0xff < iVar10) {
        iVar10 = 0x100;
      }
      iVar33 = puVar20[uVar30];
      if (param_6 == 0) {
        if (uVar30 < param_4) {
          uVar16 = 0;
          iVar32 = iVar2;
          uVar23 = 0;
        }
        else {
          piVar28 = piVar1 + -(ulong)param_4;
          iVar32 = iVar25;
          if (*piVar28 == *piVar1) {
            (*pcRam000000011386a1b8)(piVar28,piVar1,iVar22);
            uVar13 = (uint)piVar28;
            uVar16 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
            uVar23 = param_4;
            if ((int)uVar13 < 1) {
              uVar23 = 0;
            }
          }
          else {
            uVar16 = 0;
            uVar23 = 0;
          }
        }
        piVar28 = piVar1 + -1;
        if (piVar28[uVar16] == piVar1[uVar16]) {
          (*pcRam000000011386a1b8)(piVar28,piVar1,iVar22);
          uVar13 = (uint)piVar28;
        }
        else {
          uVar13 = 0;
        }
        uVar24 = uVar13;
        if ((int)uVar13 <= (int)uVar16) {
          uVar24 = uVar16;
        }
        piVar28 = (int *)(ulong)uVar24;
        if ((int)uVar16 < (int)uVar13) {
          uVar23 = 1;
        }
        iVar32 = iVar32 + -1;
        iVar31 = iVar7 + -1;
        if (uVar24 != 0xfff) {
          iVar31 = iVar33;
        }
      }
      else {
        piVar28 = (int *)0x0;
        uVar23 = 0;
        iVar31 = iVar33;
        iVar32 = iVar2;
      }
      if (iVar7 <= iVar31) {
        iVar33 = piVar1[(long)piVar28];
        piVar29 = piVar28;
        do {
          iVar32 = iVar32 + -1;
          piVar28 = piVar29;
          if (iVar32 == 0) break;
          if (param_3[iVar31 + (int)piVar29] == iVar33) {
            piVar28 = param_3 + iVar31;
            (*pcRam000000011386a1b8)(piVar28,piVar1,iVar22);
            if ((int)piVar29 < (int)piVar28) {
              uVar23 = uVar30 - iVar31;
              if (iVar10 <= (int)piVar28) break;
              iVar33 = piVar1[(ulong)piVar28 & 0xffffffff];
              piVar29 = piVar28;
            }
          }
          piVar28 = piVar29;
          iVar31 = puVar20[iVar31];
          piVar29 = piVar28;
        } while (iVar7 <= iVar31);
      }
      lVar15 = *param_1;
      *(uint *)(lVar15 + (ulong)uVar30 * 4) = (uint)piVar28 | uVar23 << 0xc;
      uVar16 = uVar30 - 1;
      uVar13 = uVar16;
      if (((uVar23 != 0) && (uVar16 != 0)) && (uVar23 <= uVar16)) {
        uVar24 = uVar30 - 2;
        while( true ) {
          uVar3 = uVar24 + 1;
          uVar13 = uVar16;
          if (param_3[uVar3 - uVar23] != param_3[uVar3]) break;
          uVar13 = (uint)piVar28;
          if (((uVar23 != 1) && (uVar13 == 0xfff)) && (uVar24 + 0x1000 < uVar30)) {
            uVar13 = uVar24 + 1;
            break;
          }
          uVar5 = uVar13;
          if ((int)uVar13 < 0xfff) {
            uVar5 = uVar13 + 1;
          }
          piVar28 = (int *)(ulong)uVar5;
          uVar8 = uVar3;
          if (0xffe < (int)uVar13) {
            uVar8 = uVar30;
          }
          *(uint *)(lVar15 + (ulong)uVar3 * 4) = uVar5 | uVar23 << 0xc;
          uVar13 = uVar24;
          if ((uVar24 == 0) ||
             (uVar16 = uVar16 - 1, bVar11 = uVar24 < uVar23, uVar30 = uVar8, uVar24 = uVar24 - 1,
             bVar11)) break;
        }
      }
      uVar30 = uVar13;
      uVar16 = 0;
      if (uVar19 != 0) {
        uVar16 = ((uVar19 - uVar30) * (param_8 - iVar4)) / uVar19;
      }
      iVar22 = uVar16 + iVar12;
      if (*param_9 != iVar22) {
        *param_9 = iVar22;
        if ((*(code **)(param_7 + 0x90) != (code *)0x0) &&
           ((**(code **)(param_7 + 0x90))(iVar22,param_7), iVar22 == 0)) goto LAB_10823ef78;
      }
    } while (uVar30 != 0);
    iVar14 = iVar14 + param_8;
    if (*param_9 != iVar14) {
      *param_9 = iVar14;
      if ((*(code **)(param_7 + 0x90) != (code *)0x0) &&
         ((**(code **)(param_7 + 0x90))(iVar14,param_7), iVar14 == 0)) {
LAB_10823ef78:
        if (*(int *)(param_7 + 0x88) != 0) {
          return 0;
        }
        *(undefined4 *)(param_7 + 0x88) = 10;
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 10823ffb8; end: 1082400bf;  */

void FUN_10823ffb8(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_2 != (long *)0x0) && (pcVar2 = (char *)param_2[1], pcVar2 != (char *)0x0)) {
    pcVar3 = pcVar2 + (long)(int)param_2[2] * 8;
    do {
      while( true ) {
        if (*pcVar2 == '\x02') {
          uVar1 = param_1;
          FUN_10823e7e4(param_1,*(undefined4 *)(pcVar2 + 4));
          *(int *)(pcVar2 + 4) = (int)uVar1;
        }
        pcVar2 = pcVar2 + 8;
        if (pcVar2 == pcVar3) break;
        if (pcVar2 == (char *)0x0) {
          return;
        }
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return;
      }
      pcVar2 = (char *)param_2[1];
      pcVar3 = pcVar2 + (long)*(int *)(param_2 + 2) * 8;
    } while (pcVar2 != (char *)0x0);
  }
  return;
}



/* Entry: 1082400c0; end: 10824033f;  */

bool FUN_1082400c0(uint param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((param_2 == (uint *)0x0) || ((param_4 & 0xffffff00) != 0x200)) {
    return false;
  }
  param_2[1] = param_1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0x3c;
  param_2[9] = 0;
  param_2[6] = 4;
  param_2[7] = 0x32;
  param_2[0x1c] = 100;
  param_2[0xc] = 1;
  param_2[0xd] = 1;
  param_2[10] = 1;
  param_2[0xb] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 100;
  param_2[0xf] = 1;
  *param_2 = 0;
  param_2[0x18] = 0;
  param_2[2] = 4;
  param_2[3] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 100;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  if (param_3 < 3) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        param_2[9] = 3;
        param_2[7] = 0x50;
        param_2[8] = 0x1e;
        param_2[0x11] = 2;
      }
      goto SUB_1082401cc;
    }
    param_2[9] = 4;
    uVar5 = 0x2300000050;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        param_2[7] = 0;
        param_2[8] = 0;
      }
      else if (param_3 == 5) {
        param_2[8] = 0;
        param_2[6] = 2;
        param_2[7] = 0;
      }
      goto SUB_1082401cc;
    }
    param_2[9] = 6;
    uVar5 = 0xa00000019;
  }
  *(undefined8 *)(param_2 + 7) = uVar5;
SUB_1082401cc:
  if (param_2 != (uint *)0x0) {
    fVar4 = (float)param_2[1];
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar4) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 100.0;
        bVar2 = fVar4 == 100.0;
        bVar3 = false;
      }
    }
    if ((((((bVar2 || bVar1 != bVar3) && (-1 < (int)param_2[4])) && (0.0 <= (float)param_2[5])) &&
         ((param_2[2] < 7 && (0xfffffffb < param_2[6] - 5)))) && (param_2[7] < 0x65)) &&
       (((param_2[8] < 0x65 && (param_2[9] < 8)) &&
        ((param_2[10] < 2 &&
         (((param_2[0xb] < 2 && (0xfffffff5 < param_2[0xf] - 0xb)) && (-1 < (int)param_2[0x1b]))))))
       )) {
      if (100 < (int)param_2[0x1c]) {
        return false;
      }
      if ((int)param_2[0x1c] < (int)param_2[0x1b]) {
        return false;
      }
      if ((((param_2[0x10] < 2) && (param_2[0x11] < 8)) &&
          ((param_2[0x12] < 4 && ((param_2[0x13] < 0x65 && (-1 < (int)param_2[0xc])))))) &&
         (((-1 < (int)param_2[0xd] &&
           (((param_2[0xe] < 0x65 && (*param_2 < 2)) && (param_2[0x17] < 0x65)))) &&
          (((param_2[3] < 4 && (param_2[0x14] < 2)) &&
           ((param_2[0x15] < 2 && ((param_2[0x16] < 2 && (param_2[0x18] < 2)))))))))) {
        return param_2[0x1a] < 2;
      }
    }
  }
  return false;
}



/* Entry: 108240340; end: 108240523;  */

void FUN_108240340(long param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  short sVar15;
  short *psVar16;
  long lVar17;
  short sVar18;
  uint uVar19;
  
  if (*(int *)(param_1 + 0x4da8) != 0) {
    lVar9 = 0;
    lVar10 = param_1 + 0x47a8;
    pbVar12 = (byte *)(param_1 + 6);
    lVar4 = param_1 + 0x14a4;
    do {
      lVar5 = 0;
      pbVar11 = pbVar12;
      do {
        lVar14 = 0;
        pbVar13 = pbVar11;
        do {
          pbVar8 = (byte *)(param_1 + 4 + lVar9 * 0x108 + lVar5 * 0x21 + lVar14 * 0xb);
          if (lVar14 == 0) {
            sVar15 = 0;
          }
          else {
            sVar15 = *(short *)(&UNK_10df0c9ca + ((ulong)~(uint)*pbVar8 & 0xff) * 2);
          }
          psVar16 = (short *)(param_1 + 0x14a4 + lVar9 * 0xcc0 + lVar5 * 0x198 + lVar14 * 0x88);
          bVar2 = pbVar8[1];
          sVar3 = *(short *)(&UNK_10df0c9ca + ((ulong)~(uint)bVar2 & 0xff) * 2);
          *psVar16 = *(short *)(&UNK_10df0c9ca + (ulong)bVar2 * 2) + sVar15;
          lVar17 = 1;
          do {
            if (*(ushort *)(&UNK_10df0e82c + lVar17 * 4) == 0) {
              sVar18 = 0;
            }
            else {
              sVar18 = 0;
              uVar7 = (uint)*(ushort *)(&UNK_10df0e82e + lVar17 * 4);
              pbVar8 = pbVar13;
              uVar19 = (uint)*(ushort *)(&UNK_10df0e82c + lVar17 * 4);
              do {
                if ((uVar19 & 1) != 0) {
                  sVar18 = sVar18 + *(short *)(&UNK_10df0c9ca +
                                              ((ulong)((uint)*pbVar8 ^ -(uVar7 & 1)) & 0xff) * 2);
                }
                uVar7 = uVar7 >> 1;
                pbVar8 = pbVar8 + 1;
                bVar1 = 1 < uVar19;
                uVar19 = uVar19 >> 1;
              } while (bVar1);
            }
            psVar16[lVar17] = sVar15 + sVar3 + sVar18;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x44);
          lVar14 = lVar14 + 1;
          pbVar13 = pbVar13 + 0xb;
        } while (lVar14 != 3);
        lVar5 = lVar5 + 1;
        pbVar11 = pbVar11 + 0x21;
      } while (lVar5 != 8);
      lVar5 = 0;
      lVar14 = lVar10;
      do {
        lVar17 = 0;
        lVar6 = lVar4 + (ulong)(byte)(&UNK_10df0c9b8)[lVar5] * 0x198;
        do {
          *(long *)(lVar14 + lVar17) = lVar6;
          lVar17 = lVar17 + 8;
          lVar6 = lVar6 + 0x88;
        } while (lVar17 != 0x18);
        lVar5 = lVar5 + 1;
        lVar14 = lVar14 + 0x18;
      } while (lVar5 != 0x10);
      lVar9 = lVar9 + 1;
      pbVar12 = pbVar12 + 0x108;
      lVar10 = lVar10 + 0x180;
      lVar4 = lVar4 + 0xcc0;
    } while (lVar9 != 4);
    *(undefined4 *)(param_1 + 0x4da8) = 0;
  }
  return;
}



/* Entry: 108240524; end: 1082407cb;  */

ulong FUN_108240524(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar5 = *(long *)(param_1 + 0x28);
  FUN_108245590();
  lStack_78 = lVar5 + 0xf2c;
  lStack_70 = lVar5 + 0x1664;
  lStack_68 = lVar5 + 0x5748;
  uStack_80 = 1;
  uStack_90 = 0;
  (*pcRam0000000113869fa0)(param_2 + 0x28,&uStack_90);
  uVar3 = (ulong)(uint)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xa4));
  (*pcRam0000000113869f98)(uVar3,&uStack_90);
  lVar6 = 0;
  param_2 = param_2 + 0x48;
  uStack_80 = 0;
  uStack_90 = 1;
  lStack_78 = lVar5 + 0xe24;
  lStack_70 = lVar5 + 0x1244;
  lStack_68 = lVar5 + 0x55c8;
  do {
    lVar5 = 0;
    lVar4 = param_2;
    do {
      iVar1 = *(int *)(param_1 + 0x84 + lVar5);
      iVar2 = *(int *)(param_1 + 0xa8 + lVar6 * 4);
      (*pcRam0000000113869fa0)(lVar4,&uStack_90);
      iVar2 = iVar2 + iVar1;
      (*pcRam0000000113869f98)(iVar2,&uStack_90);
      *(uint *)(param_1 + 0xa8 + lVar6 * 4) = ~uStack_8c >> 0x1f;
      uVar3 = (ulong)(uint)(iVar2 + (int)uVar3);
      *(uint *)(param_1 + 0x84 + lVar5) = ~uStack_8c >> 0x1f;
      lVar5 = lVar5 + 4;
      lVar4 = lVar4 + 0x20;
    } while (lVar5 != 0x10);
    lVar6 = lVar6 + 1;
    param_2 = param_2 + 0x80;
  } while (lVar6 != 4);
  return uVar3;
}



/* Entry: 1082407cc; end: 108240987;  */

undefined8 FUN_1082407cc(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  short *psVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  
  lVar12 = *(long *)(param_2 + 8);
  iVar13 = *param_2;
  puVar7 = (uint *)(lVar12 + (long)iVar13 * 0x84 + (long)param_1 * 0x2c);
  if (param_2[1] < 0) {
    uVar6 = 0;
  }
  else {
    if (iVar13 <= param_2[1]) {
      lVar14 = *(long *)(param_2 + 2);
      do {
        uVar16 = *puVar7;
        uVar9 = uVar16 + 1 >> 1 & 0x7fff7fff;
        if (uVar16 < 0xfffe0000) {
          uVar9 = uVar16;
        }
        *puVar7 = uVar9 + 0x10001;
        sVar3 = *(short *)(lVar14 + (long)iVar13 * 2);
        iVar13 = iVar13 + 1;
        if (sVar3 == 0) {
          psVar10 = (short *)(lVar14 + (long)iVar13 * 2);
          pbVar11 = &UNK_10df0c9b8 + iVar13;
          do {
            uVar16 = puVar7[1];
            uVar9 = uVar16 + 1 >> 1 & 0x7fff7fff;
            if (uVar16 < 0xfffe0000) {
              uVar9 = uVar16;
            }
            puVar7[1] = uVar9 + 0x10000;
            puVar7 = (uint *)(lVar12 + (ulong)*pbVar11 * 0x84);
            sVar3 = *psVar10;
            iVar13 = iVar13 + 1;
            psVar10 = psVar10 + 1;
            pbVar11 = pbVar11 + 1;
          } while (sVar3 == 0);
        }
        uVar9 = (uint)sVar3;
        bVar5 = 2 < uVar9 + 1;
        iVar1 = 0x10000;
        if (bVar5) {
          iVar1 = 0x10001;
        }
        uVar15 = *(ulong *)(puVar7 + 1);
        uVar16 = (uint)(uVar15 >> 0x20);
        uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(uVar16 + 1 >> 1,(uint)uVar15 + 1 >> 1) &
                                    0xffff7fffffff7fff) &
                          CONCAT44(-(uint)(0xfffdffff < uVar16),-(uint)(0xfffdffff < (uint)uVar15));
        *(ulong *)(puVar7 + 1) = CONCAT44((int)(uVar15 >> 0x20) + iVar1,(int)uVar15 + 0x10001);
        if (bVar5) {
          uVar16 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar16 = uVar9;
          }
          if (0x42 < uVar16) {
            uVar16 = 0x43;
          }
          if (1 < *(ushort *)(&UNK_10df0e82c + (ulong)uVar16 * 4)) {
            lVar8 = 0;
            uVar4 = *(ushort *)(&UNK_10df0e82e + (ulong)uVar16 * 4);
            uVar9 = (uint)*(ushort *)(&UNK_10df0e82c + (ulong)uVar16 * 4);
            do {
              if ((uVar9 >> 1 & 1) != 0) {
                uVar2 = puVar7[lVar8 + 3];
                uVar16 = uVar2 + 1 >> 1 & 0x7fff7fff;
                if (uVar2 < 0xfffe0000) {
                  uVar16 = uVar2;
                }
                iVar1 = 0x10000;
                if ((uVar4 >> (ulong)((uint)lVar8 & 0x1f) & 2) != 0) {
                  iVar1 = 0x10001;
                }
                puVar7[lVar8 + 3] = uVar16 + iVar1;
              }
              lVar8 = lVar8 + 1;
              bVar5 = 3 < uVar9;
              uVar9 = uVar9 >> 1;
            } while (bVar5);
          }
          lVar8 = 2;
        }
        else {
          lVar8 = 1;
        }
        puVar7 = (uint *)(lVar12 + (ulong)(byte)(&UNK_10df0c9b8)[iVar13] * 0x84 + lVar8 * 0x2c);
      } while (iVar13 <= param_2[1]);
    }
    uVar6 = 1;
    if (0xf < iVar13) {
      return uVar6;
    }
  }
  uVar16 = *puVar7;
  uVar9 = uVar16 + 1 >> 1 & 0x7fff7fff;
  if (uVar16 < 0xfffe0000) {
    uVar9 = uVar16;
  }
  *puVar7 = uVar9 + 0x10000;
  return uVar6;
}



/* Entry: 108240988; end: 108240bbf;  */

void FUN_108240988(double param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  
  uVar10 = (ulong)(**(byte **)(param_2 + 0x30) >> 5) & 3;
  lVar8 = *(long *)(param_2 + 0x28) + uVar10 * 0x2e8;
  iVar3 = *(int *)(lVar8 + 0x508);
  iVar9 = 4;
  if (iVar3 < 2) {
    iVar9 = 1;
  }
  if ((**(byte **)(param_2 + 0x30) & 0x13) != 0x11 && *(long *)(param_2 + 0x140) != 0) {
    iVar4 = *(int *)(lVar8 + 0x50c);
    FUN_108240bc0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    param_1 = param_1 + *(double *)(*(long *)(param_2 + 0x140) + uVar10 * 0x200);
    *(double *)(*(long *)(param_2 + 0x140) + uVar10 * 0x200) = param_1;
    if (-1 < iVar3) {
      iVar13 = -iVar3;
      iVar12 = iVar4 * 2 + iVar3 * -2;
      do {
        uVar1 = iVar4 + iVar13;
        if (0xffffffc0 < uVar1 - 0x40) {
          plVar11 = *(long **)(param_2 + 0x28);
          uVar5 = *(uint *)(*plVar11 + 0x24);
          uVar7 = uVar1;
          if (0 < (int)uVar5) {
            uVar6 = 1;
            if (4 < uVar5) {
              uVar6 = 2;
            }
            uVar7 = uVar1 >> (ulong)uVar6;
            if ((int)(9 - uVar5) <= (int)(uVar1 >> (ulong)uVar6)) {
              uVar7 = 9 - uVar5;
            }
          }
          if ((int)uVar7 < 2) {
            uVar7 = 1;
          }
          lVar8 = *(long *)(param_2 + 0x18);
          _memcpy(lVar8,*(undefined8 *)(param_2 + 0x10),0x200);
          if ((int)plVar11[2] == 1) {
            (*pcRam0000000113869ba8)(lVar8,0x20,uVar7 + iVar12);
            (*pcRam0000000113869bb8)(lVar8,0x20,uVar7 + iVar12);
          }
          else {
            uVar2 = 2;
            if (uVar1 < 0x28) {
              uVar2 = 0xe < uVar1;
            }
            (*pcRam0000000113869ac8)(lVar8,0x20,uVar7 + iVar12,uVar7,uVar2);
            (*pcRam0000000113869ad8)(lVar8 + 0x10,lVar8 + 0x18,0x20,uVar7 + iVar12,uVar7,uVar2);
            (*pcRam0000000113869bf8)(lVar8,0x20,uVar7 + iVar12,uVar7,uVar2);
            (*pcRam0000000113869c08)(lVar8 + 0x10,lVar8 + 0x18,0x20,uVar7 + iVar12,uVar7,uVar2);
          }
          FUN_108240bc0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
          lVar8 = *(long *)(param_2 + 0x140) + uVar10 * 0x200;
          param_1 = param_1 + *(double *)(lVar8 + (ulong)uVar1 * 8);
          *(double *)(lVar8 + (ulong)uVar1 * 8) = param_1;
        }
        iVar13 = iVar13 + iVar9;
        iVar12 = iVar12 + iVar9 * 2;
      } while (iVar13 <= iVar3);
    }
  }
  return;
}



/* Entry: 108240bc0; end: 108240cc7;  */

double FUN_108240bc0(double param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = 3;
  dVar3 = 0.0;
  do {
    iVar2 = 3;
    do {
      (*pcRam000000011386a1d0)(param_2,0x20,param_3,0x20,iVar2,iVar1,0x10,0x10);
      dVar3 = dVar3 + param_1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xd);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xd);
  iVar1 = 1;
  do {
    iVar2 = 1;
    do {
      (*pcRam000000011386a1d0)(param_2 + 0x10,0x20,param_3 + 0x10,0x20,iVar1,iVar2,8,8);
      dVar3 = dVar3 + param_1;
      (*pcRam000000011386a1d0)(param_2 + 0x18,0x20,param_3 + 0x18,0x20,iVar1,iVar2,8,8);
      dVar3 = dVar3 + param_1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 7);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  return dVar3;
}



/* Entry: 108240cc8; end: 108240db3;  */

void FUN_108240cc8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  
  plVar3 = *(long **)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x140);
  if (lVar5 == 0) {
    if (0 < *(int *)(*plVar3 + 0x20)) {
      uVar4 = 0;
      lVar6 = plVar3[3];
      lVar5 = 4;
      plVar9 = plVar3;
      do {
        iVar1 = (int)((int)plVar9[0xa2] * (uint)*(ushort *)((long)plVar9 + 0x342)) >> 3;
        if (0x3e < iVar1) {
          iVar1 = 0x3f;
        }
        uVar10 = (uint)(byte)(&UNK_10df0e948)[(long)iVar1 + (long)(int)lVar6 * 0x40];
        uVar12 = *(uint *)((long)plVar9 + 0x50c);
        if ((int)*(uint *)((long)plVar9 + 0x50c) < (int)uVar10) {
          *(uint *)((long)plVar9 + 0x50c) = uVar10;
          uVar12 = uVar10;
        }
        if ((int)uVar4 <= (int)uVar12) {
          uVar4 = uVar12;
        }
        plVar9 = plVar9 + 0x5d;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(uint *)((long)plVar3 + 0x14) = uVar4;
      return;
    }
  }
  else {
    lVar6 = 0;
    lVar7 = lVar5;
    do {
      dVar13 = *(double *)(lVar5 + lVar6 * 0x200) * 1.00001;
      lVar11 = 1;
      uVar8 = 0;
      do {
        dVar14 = *(double *)(lVar7 + lVar11 * 8);
        uVar2 = (int)lVar11;
        if (dVar14 <= dVar13) {
          uVar2 = uVar8;
          dVar14 = dVar13;
        }
        dVar13 = dVar14;
        lVar11 = lVar11 + 1;
        uVar8 = uVar2;
      } while (lVar11 != 0x40);
      *(undefined4 *)((long)plVar3 + lVar6 * 0x2e8 + 0x50c) = uVar2;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x200;
    } while (lVar6 != 4);
  }
  return;
}



/* Entry: 108240db4; end: 10824182b;  */

uint * FUN_108240db4(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong uVar29;
  undefined1 *puVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  undefined8 uStack_1380;
  float fStack_1378;
  float fStack_1374;
  undefined8 uStack_1370;
  double dStack_1368;
  long lStack_1360;
  double dStack_1358;
  uint uStack_1350;
  uint auStack_1348 [4];
  undefined4 uStack_1338;
  long lStack_1330;
  long lStack_1328;
  long lStack_1320;
  long alStack_1318 [2];
  long lStack_1308;
  long lStack_1300;
  undefined1 auStack_12f0 [32];
  undefined1 auStack_12d0 [512];
  undefined1 auStack_10d0 [296];
  uint auStack_fa8 [10];
  long lStack_f80;
  byte *pbStack_f78;
  ulong uStack_f70;
  uint *puStack_f60;
  uint auStack_f24 [8];
  int iStack_f04;
  uint auStack_f00 [8];
  int iStack_ee0;
  long alStack_ed8 [12];
  long lStack_e78;
  long lStack_e70;
  long lStack_e68;
  long lStack_a0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_1;
  FUN_10824182c();
  if ((int)puVar13 != 0) {
    uVar3 = param_1[0x1710];
    uVar4 = param_1[0x1715];
    lVar16 = *(long *)param_1;
    iVar20 = *(int *)(lVar16 + 0x3c);
    uVar12 = param_1[0x86];
    uVar2 = param_1[0xc];
    uVar22 = param_1[0xd];
    iVar6 = *(int *)(lVar16 + 0x10);
    bVar8 = (long)iVar6 != 0;
    uStack_1380 = 0x4120000000000001;
    uStack_1370 = NEON_scvtf(*(undefined8 *)(lVar16 + 0x6c),4);
    fVar37 = *(float *)(lVar16 + 4);
    fVar36 = (float)((ulong)uStack_1370 >> 0x20);
    if (fVar37 <= fVar36) {
      fVar36 = fVar37;
    }
    fStack_1378 = (float)uStack_1370;
    if ((float)uStack_1370 <= fVar37) {
      fStack_1378 = fVar36;
    }
    dVar38 = (double)*(float *)(lVar16 + 0x14);
    if (*(float *)(lVar16 + 0x14) <= 0.0) {
      dVar38 = 40.0;
    }
    dStack_1358 = (double)(ulong)(long)iVar6;
    if (iVar6 == 0) {
      dStack_1358 = dVar38;
    }
    dStack_1368 = 0.0;
    lStack_1360 = 0;
    uStack_1350 = (uint)bVar8;
    fStack_1374 = fStack_1378;
    _bzero(param_1 + 0x491,0x1080);
    uVar22 = uVar22 * uVar2;
    if ((uVar3 == 3 || uVar3 == 0) && (uVar4 == 0)) {
      if ((int)uVar22 < 0xc9) {
        uVar22 = 200;
      }
      if (uVar3 == 3) {
        uVar22 = uVar22 >> 1;
      }
      else {
        uVar22 = uVar22 >> 2;
      }
    }
    if (0 < iVar20) {
      iVar6 = 0;
      if (iVar20 != 0) {
        iVar6 = (iVar20 / 2 + 0x14) / iVar20;
      }
      fVar36 = 10.0;
      do {
        iVar7 = iVar20 + -1;
        if (0.4 < ABS(fVar36) && iVar7 != 0) {
          bVar8 = param_1[0x1712] == 0;
        }
        else {
          bVar8 = true;
        }
        FUN_108244df0(param_1,auStack_fa8);
        FUN_108242304(fStack_1378,param_1);
        lVar16 = 0;
        lVar26 = 0;
        uVar29 = 0;
        uVar2 = uVar22;
        do {
          FUN_108244f68(auStack_fa8,0);
          puVar13 = auStack_fa8;
          FUN_10824ad70(puVar13,alStack_1318,2 < (int)uVar3 || uVar4 != 0);
          lVar31 = lStack_f80;
          if ((int)puVar13 != 0) {
            param_1[0x16f4] = param_1[0x16f4] + 1;
          }
          FUN_108245590(auStack_fa8);
          bVar9 = (*pbStack_f78 & 3) != 1;
          if (bVar9) {
            uStack_1338 = 3;
            lStack_1330 = lVar31 + 0x113c;
            lStack_1328 = lVar31 + 0x1ea4;
            lVar35 = lVar31 + 0x5a48;
          }
          else {
            lStack_1330 = lVar31 + 0xf2c;
            lStack_1328 = lVar31 + 0x1664;
            lVar35 = lVar31 + 0x55c8;
            lStack_1320 = lVar31 + 0x5748;
            uStack_1338 = 1;
            auStack_1348[0] = 0;
            (*pcRam0000000113869fa0)(auStack_12f0,auStack_1348);
            iVar10 = iStack_ee0 + iStack_f04;
            FUN_1082407cc(iVar10,auStack_1348);
            iStack_ee0 = iVar10;
            iStack_f04 = iVar10;
            uStack_1338 = 0;
            lStack_1330 = lVar31 + 0xe24;
            lStack_1328 = lVar31 + 0x1244;
          }
          lVar33 = 0;
          auStack_1348[0] = (uint)!bVar9;
          puVar30 = auStack_12d0;
          lStack_1320 = lVar35;
          do {
            lVar35 = 0x84;
            puVar28 = puVar30;
            do {
              iVar10 = *(int *)((long)auStack_fa8 + lVar35);
              uVar11 = auStack_f00[lVar33];
              (*pcRam0000000113869fa0)(puVar28,auStack_1348);
              uVar11 = uVar11 + iVar10;
              FUN_1082407cc(uVar11,auStack_1348);
              auStack_f00[lVar33] = uVar11;
              *(uint *)((long)auStack_fa8 + lVar35) = uVar11;
              lVar35 = lVar35 + 4;
              puVar28 = puVar28 + 0x20;
            } while (lVar35 != 0x94);
            lVar33 = lVar33 + 1;
            puVar30 = puVar30 + 0x80;
          } while (lVar33 != 4);
          uVar23 = 0;
          lStack_1330 = lVar31 + 0x1034;
          lStack_1328 = lVar31 + 0x1a84;
          lStack_1320 = lVar31 + 0x58c8;
          uStack_1338 = 2;
          auStack_1348[0] = 0;
          bVar9 = true;
          do {
            bVar15 = bVar9;
            uVar21 = 0;
            bVar9 = true;
            do {
              bVar19 = bVar9;
              uVar17 = 0;
              uVar27 = uVar21 | uVar23 | 4;
              uVar32 = (ulong)auStack_f00[uVar27];
              bVar9 = true;
              do {
                bVar18 = bVar9;
                uVar34 = uVar17 | uVar23 | 4;
                uVar11 = auStack_f24[uVar34];
                (*pcRam0000000113869fa0)
                          (auStack_10d0 + (uVar17 | (uVar21 | uVar23) << 1) * 0x20,auStack_1348);
                uVar32 = (ulong)(uVar11 + (int)uVar32);
                FUN_1082407cc(uVar32,auStack_1348);
                auStack_f00[uVar27] = (uint)uVar32;
                auStack_f24[uVar34] = (uint)uVar32;
                uVar17 = 1;
                bVar9 = false;
              } while (bVar18);
              uVar21 = 1;
              bVar9 = false;
            } while (bVar19);
            uVar23 = 2;
            bVar9 = false;
          } while (bVar15);
          func_0x00010824560c(auStack_fa8);
          lVar33 = lStack_1300;
          lVar35 = lStack_1308;
          lVar31 = alStack_1318[0];
          if (iVar6 != 0) {
            puVar13 = auStack_fa8;
            func_0x000108244ec8(puVar13,iVar6);
            if ((int)puVar13 == 0) goto LAB_1082413e8;
          }
          lVar16 = lVar33 + lVar16 + lVar35;
          lVar26 = lVar35 + lVar26;
          uVar29 = lVar31 + uVar29;
          func_0x000108245674(auStack_fa8);
          iVar10 = (int)auStack_fa8;
          FUN_108245738();
          uVar11 = uVar2 - 1;
        } while ((iVar10 != 0) && (bVar9 = 0 < (int)uVar2, uVar2 = uVar11, uVar11 != 0 && bVar9));
        uVar23 = lVar26 + (int)param_1[10];
        if (uStack_1350 == 0) {
          dVar38 = 99.0;
          if ((uVar22 != 0) && (uVar29 != 0)) {
            dVar38 = ((double)(ulong)((long)(int)uVar22 * 0x180) * 65025.0) / (double)uVar29;
            _log10();
            dVar38 = dVar38 * 10.0;
          }
        }
        else {
          puVar13 = param_1;
          func_0x0001082427b0();
          iVar10 = (int)param_1 + 0xe20;
          FUN_108242560();
          dVar38 = (double)((lVar16 + uVar23 + (long)(int)puVar13 + (long)iVar10 + 0x400 >> 0xb) +
                           0x1e);
        }
        dStack_1368 = dVar38;
        if (uVar23 == 0) goto LAB_1082413e8;
        if ((uVar23 < 0x3fc00001) || ((int)param_1[0x1712] < 1)) {
          if (bVar8) break;
          iVar20 = iVar7;
          if (uVar4 != 0) {
            func_0x00010824270c(&uStack_1380);
            fVar36 = uStack_1380._4_4_;
            if (ABS(uStack_1380._4_4_) <= 0.4) break;
          }
        }
        else {
          param_1[0x1712] = param_1[0x1712] >> 1;
        }
      } while (0 < iVar20);
      bVar8 = uStack_1350 != 0;
    }
    uVar12 = uVar12 + 0x14;
    if ((uVar4 == 0) || (!bVar8)) {
      func_0x0001082427b0(param_1);
      FUN_108242560(param_1 + 0x388);
    }
    FUN_108240340(param_1 + 0x388);
    if (param_1[0x86] != uVar12) {
      lVar16 = *(long *)(param_1 + 2);
      param_1[0x86] = uVar12;
      if (((*(code **)(lVar16 + 0x90) != (code *)0x0) &&
          ((**(code **)(lVar16 + 0x90))(uVar12,lVar16), uVar12 == 0)) &&
         (*(int *)(lVar16 + 0x88) == 0)) {
        *(undefined4 *)(lVar16 + 0x88) = 10;
      }
    }
LAB_1082413e8:
    FUN_108244df0(param_1,auStack_fa8);
    if (lStack_e68 != 0) {
      _bzero(lStack_e68,0x800);
      FUN_10823ad54();
    }
    do {
      uVar12 = param_1[0x16f3];
      uVar22 = param_1[0x1711];
      FUN_108244f68(auStack_fa8,0);
      puVar13 = auStack_fa8;
      FUN_10824ad70(puVar13,alStack_1318,uVar22);
      uVar29 = uStack_f70;
      lVar16 = lStack_f80;
      if ((int)puVar13 == 0 || uVar12 == 0) {
        bVar5 = *pbStack_f78;
        bVar1 = bVar5 & 3;
        FUN_108245590(auStack_fa8);
        lVar26 = *(long *)(uVar29 + 0x18);
        iVar20 = *(int *)(uVar29 + 8);
        iVar6 = *(int *)(uVar29 + 0xc);
        if (bVar1 != 1) {
          uStack_1370 = CONCAT44(uStack_1370._4_4_,3);
          dStack_1368 = (double)(lVar16 + 0x113c);
          lStack_1360 = lVar16 + 0x1ea4;
          lVar31 = lVar16 + 0x5a48;
        }
        else {
          dStack_1368 = (double)(lVar16 + 0xf2c);
          lStack_1360 = lVar16 + 0x1664;
          lVar31 = lVar16 + 0x55c8;
          dStack_1358 = (double)(lVar16 + 0x5748);
          uStack_1370._0_4_ = 1;
          uStack_1380 = uStack_1380 & 0xffffffff00000000;
          (*pcRam0000000113869fa0)(auStack_12f0,&uStack_1380);
          uVar23 = uVar29;
          FUN_108242830(uVar29,iStack_ee0 + iStack_f04,&uStack_1380);
          iStack_ee0 = (int)uVar23;
          iStack_f04 = (int)uVar23;
          uStack_1370 = (ulong)uStack_1370._4_4_ << 0x20;
          dStack_1368 = (double)(lVar16 + 0xe24);
          lStack_1360 = lVar16 + 0x1244;
        }
        lVar35 = 0;
        uStack_1380 = CONCAT44(uStack_1380._4_4_,(uint)(bVar1 == 1));
        puVar30 = auStack_12d0;
        dStack_1358 = (double)lVar31;
        do {
          lVar31 = 0x84;
          puVar28 = puVar30;
          do {
            iVar7 = *(int *)((long)auStack_fa8 + lVar31);
            uVar12 = auStack_f00[lVar35];
            (*pcRam0000000113869fa0)(puVar28,&uStack_1380);
            uVar23 = uVar29;
            FUN_108242830(uVar29,uVar12 + iVar7,&uStack_1380);
            auStack_f00[lVar35] = (uint)uVar23;
            *(uint *)((long)auStack_fa8 + lVar31) = (uint)uVar23;
            lVar31 = lVar31 + 4;
            puVar28 = puVar28 + 0x20;
          } while (lVar31 != 0x94);
          lVar35 = lVar35 + 1;
          puVar30 = puVar30 + 0x80;
        } while (lVar35 != 4);
        uVar23 = 0;
        lVar31 = *(long *)(uVar29 + 0x18);
        iVar7 = *(int *)(uVar29 + 8);
        iVar10 = *(int *)(uVar29 + 0xc);
        dStack_1368 = (double)(lVar16 + 0x1034);
        lStack_1360 = lVar16 + 0x1a84;
        dStack_1358 = (double)(lVar16 + 0x58c8);
        uStack_1370 = CONCAT44(uStack_1370._4_4_,2);
        uStack_1380 = uStack_1380 & 0xffffffff00000000;
        bVar8 = true;
        do {
          bVar9 = bVar8;
          uVar21 = 0;
          bVar8 = true;
          do {
            bVar15 = bVar8;
            uVar17 = 0;
            uVar27 = uVar21 | uVar23 | 4;
            uVar32 = (ulong)auStack_f00[uVar27];
            bVar8 = true;
            do {
              bVar19 = bVar8;
              uVar34 = uVar17 | uVar23 | 4;
              uVar12 = auStack_f24[uVar34];
              (*pcRam0000000113869fa0)
                        (auStack_10d0 + (uVar17 | (uVar21 | uVar23) << 1) * 0x20,&uStack_1380);
              iVar25 = (int)uVar32;
              uVar32 = uVar29;
              FUN_108242830(uVar29,uVar12 + iVar25,&uStack_1380);
              auStack_f00[uVar27] = (uint)uVar32;
              auStack_f24[uVar34] = (uint)uVar32;
              uVar17 = 1;
              bVar8 = false;
            } while (bVar19);
            uVar21 = 1;
            bVar8 = false;
          } while (bVar15);
          uVar23 = 2;
          bVar8 = false;
        } while (bVar9);
        lVar16 = (long)iVar10 + (lVar31 + iVar7) * 8 + 8;
        uVar23 = (ulong)(bVar5 >> 5) & 3;
        lVar26 = (lVar16 - ((long)iVar6 + (lVar26 + iVar20) * 8)) + -8;
        lVar16 = (*(int *)(uVar29 + 0xc) - lVar16) +
                 (*(long *)(uVar29 + 0x18) + (long)*(int *)(uVar29 + 8)) * 8 + 8;
        alStack_ed8[uVar23 * 3 + (ulong)(bVar1 == 1)] =
             alStack_ed8[uVar23 * 3 + (ulong)(bVar1 == 1)] + lVar26;
        alStack_ed8[uVar23 * 3 + 2] = alStack_ed8[uVar23 * 3 + 2] + lVar16;
        lStack_e78 = lVar26;
        lStack_e70 = lVar16;
        func_0x00010824560c(auStack_fa8);
        if (*(int *)(uStack_f70 + 0x28) != 0) {
          puVar24 = (uint *)0x0;
          break;
        }
      }
      else if ((*pbStack_f78 & 3) == 1) {
        *puStack_f60 = 0;
        iStack_ee0 = 0;
      }
      else {
        *puStack_f60 = *puStack_f60 & 0x1000000;
      }
      FUN_108241914(auStack_fa8);
      FUN_108240988(auStack_fa8);
      func_0x00010824541c(auStack_fa8);
      puVar24 = auStack_fa8;
      func_0x000108244ec8(puVar24,0x14);
      func_0x000108245674(auStack_fa8);
      if ((int)puVar24 == 0) break;
      iVar20 = (int)auStack_fa8;
      FUN_108245738();
    } while (iVar20 != 0);
    puVar13 = auStack_fa8;
    FUN_108241af4(puVar13,puVar24);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar13;
  }
  ___stack_chk_fail();
  uVar12 = puVar13[0xf];
  if (0 < (int)uVar12) {
    lVar16 = 0;
    iVar20 = 0;
    if (uVar12 != 0) {
      iVar20 = (int)(puVar13[0xc] * (uint)(byte)(&UNK_10df0eb50)[(int)puVar13[0x380] >> 4] *
                    puVar13[0xd]) / (int)uVar12;
    }
    puVar24 = puVar13 + 0x1c;
    while( true ) {
      puVar24[2] = 0;
      puVar24[3] = 0xfffffff8;
      puVar24[0] = 0xfe;
      puVar24[1] = 0;
      puVar24[6] = 0;
      puVar24[7] = 0;
      puVar24[8] = 0;
      puVar24[9] = 0;
      puVar24[4] = 0;
      puVar24[5] = 0;
      puVar24[10] = 0;
      if ((iVar20 != 0) &&
         (puVar14 = puVar24, FUN_1082543fc(puVar24,(long)iVar20), (int)puVar14 == 0)) break;
      lVar16 = lVar16 + 1;
      puVar24 = puVar24 + 0xc;
      if ((int)puVar13[0xf] <= lVar16) {
        return (uint *)0x1;
      }
    }
    FUN_10824caf0(puVar13);
    if (*(int *)(*(long *)(puVar13 + 2) + 0x88) != 0) {
      return (uint *)0x0;
    }
    *(undefined4 *)(*(long *)(puVar13 + 2) + 0x88) = 1;
    return (uint *)0x0;
  }
  return (uint *)0x1;
}



/* Entry: 10824182c; end: 108241913;  */

undefined8 FUN_10824182c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 < 1) {
    return 1;
  }
  lVar5 = 0;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)(*(int *)(param_1 + 0x30) *
                  (uint)(byte)(&UNK_10df0eb50)[*(int *)(param_1 + 0xe00) >> 4] *
                 *(int *)(param_1 + 0x34)) / iVar1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x70);
  while( true ) {
    puVar4[1] = 0xfffffff800000000;
    *puVar4 = 0xfe;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    if ((iVar2 != 0) && (puVar3 = puVar4, FUN_1082543fc(puVar4,(long)iVar2), (int)puVar3 == 0))
    break;
    lVar5 = lVar5 + 1;
    puVar4 = puVar4 + 6;
    if (*(int *)(param_1 + 0x3c) <= lVar5) {
      return 1;
    }
  }
  FUN_10824caf0(param_1);
  if (*(int *)(*(long *)(param_1 + 8) + 0x88) != 0) {
    return 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x88) = 1;
  return 0;
}



/* Entry: 108241914; end: 108241af3;  */

void FUN_108241914(int *param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 10);
  pbVar2 = *(byte **)(param_1 + 0xc);
  lVar8 = *(long *)(lVar1 + 8);
  if (*(long *)(lVar8 + 0x80) != 0) {
    lVar5 = *(long *)(param_1 + 2);
    lVar3 = *(long *)(param_1 + 4);
    lVar4 = lVar5;
    (*pcRam000000011386a018)(lVar5,lVar3);
    *(long *)(lVar1 + 0x5bd8) = *(long *)(lVar1 + 0x5bd8) + (long)(int)lVar4;
    lVar4 = lVar5 + 0x10;
    (*pcRam000000011386a030)(lVar4,lVar3 + 0x10);
    *(long *)(lVar1 + 0x5be0) = *(long *)(lVar1 + 0x5be0) + (long)(int)lVar4;
    lVar5 = lVar5 + 0x18;
    (*pcRam000000011386a030)(lVar5,lVar3 + 0x18);
    *(long *)(lVar1 + 0x5be8) = *(long *)(lVar1 + 0x5be8) + (long)(int)lVar5;
    *(long *)(lVar1 + 0x5bf8) = *(long *)(lVar1 + 0x5bf8) + 0x100;
    iVar7 = *(int *)(lVar1 + 0x5c34);
    if ((*pbVar2 & 3) == 0) {
      iVar7 = iVar7 + 1;
    }
    *(int *)(lVar1 + 0x5c34) = iVar7;
    iVar7 = *(int *)(lVar1 + 0x5c38);
    if ((*pbVar2 & 3) == 1) {
      iVar7 = iVar7 + 1;
    }
    *(int *)(lVar1 + 0x5c38) = iVar7;
    *(uint *)(lVar1 + 0x5c3c) = *(int *)(lVar1 + 0x5c3c) + (*pbVar2 >> 4 & 1);
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    bVar6 = 0;
    iVar7 = *(int *)(lVar8 + 0x70);
    if (iVar7 < 4) {
      if (iVar7 == 1) {
        bVar6 = *pbVar2 & 3;
      }
      else if (iVar7 == 2) {
        bVar6 = *pbVar2 >> 5 & 3;
      }
      else if (iVar7 == 3) {
        bVar6 = (byte)*(undefined4 *)(lVar1 + ((ulong)(*pbVar2 >> 5) & 3) * 0x2e8 + 0x508);
      }
    }
    else if (iVar7 < 6) {
      if (iVar7 == 4) {
        if ((*pbVar2 & 3) == 1) {
          bVar6 = **(byte **)(param_1 + 0x10);
        }
        else {
          bVar6 = 0xff;
        }
      }
      else if (iVar7 == 5) {
        bVar6 = *pbVar2 >> 2 & 3;
      }
    }
    else if (iVar7 == 6) {
      iVar7 = (int)(*(long *)(param_1 + 0x4c) + *(long *)(param_1 + 0x4e) + 7U >> 3);
      if (0xfe < iVar7) {
        iVar7 = 0xff;
      }
      bVar6 = (byte)iVar7;
    }
    else if (iVar7 == 7) {
      bVar6 = pbVar2[1];
    }
    *(byte *)(*(long *)(lVar8 + 0x78) +
             (long)*param_1 + (long)*(int *)(lVar1 + 0x30) * (long)param_1[1]) = bVar6;
  }
  return;
}



/* Entry: 108241af4; end: 108241c0b;  */

ulong FUN_108241af4(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if ((uint)param_2 == 0) {
LAB_108241bcc:
    FUN_10824caf0(lVar5);
    if (*(int *)(*(long *)(lVar5 + 8) + 0x88) == 0) {
      param_2 = 0;
      *(undefined4 *)(*(long *)(lVar5 + 8) + 0x88) = 1;
    }
    else {
      param_2 = 0;
    }
  }
  else {
    if (0 < *(int *)(lVar5 + 0x3c)) {
      lVar6 = 0;
      lVar3 = lVar5 + 0x70;
      uVar1 = (uint)param_2 & 1;
      do {
        param_2 = (ulong)uVar1;
        FUN_1082544a8(lVar3);
        if (*(int *)(lVar3 + 0x28) != 0) {
          uVar1 = 0;
        }
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + 0x30;
      } while (lVar6 < *(int *)(lVar5 + 0x3c));
      if (uVar1 == 0) goto LAB_108241bcc;
    }
    if (*(long *)(*(long *)(lVar5 + 8) + 0x80) != 0) {
      lVar3 = 0;
      plVar4 = (long *)(param_1 + 0xd0);
      do {
        lVar6 = *plVar4;
        lVar7 = plVar4[3];
        puVar2 = (undefined8 *)(lVar5 + 0x5c04 + lVar3);
        puVar2[1] = CONCAT44((int)(plVar4[9] + 7U >> 3),(int)(plVar4[6] + 7U >> 3));
        *puVar2 = CONCAT44((int)(lVar7 + 7U >> 3),(int)(lVar6 + 7U >> 3));
        lVar3 = lVar3 + 0x10;
        plVar4 = plVar4 + 1;
      } while (lVar3 != 0x30);
    }
    FUN_108240cc8(param_1);
  }
  return param_2;
}



/* Entry: 108241c0c; end: 108242303;  */

uint * FUN_108241c0c(uint *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  unkuint9 Var5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  undefined *puVar26;
  uint *puVar27;
  uint uVar28;
  undefined *puVar29;
  undefined *puVar30;
  int iVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  ulong uVar39;
  uint uVar40;
  long lVar41;
  double dVar42;
  float fVar44;
  double dVar43;
  float fVar45;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  long lStack_1428;
  ulong uStack_1420;
  uint *puStack_1418;
  undefined1 *puStack_1410;
  code *pcStack_1408;
  ulong uStack_13f8;
  uint uStack_13f0;
  int iStack_13ec;
  int iStack_13e8;
  int iStack_13e4;
  uint *puStack_13e0;
  int iStack_13d4;
  int iStack_13d0;
  uint uStack_13cc;
  undefined1 *puStack_13c8;
  uint uStack_13c0;
  int iStack_13bc;
  long lStack_13b8;
  ulong uStack_13b0;
  uint uStack_13a4;
  uint *puStack_13a0;
  undefined1 *puStack_1398;
  ulong uStack_1390;
  uint uStack_1384;
  ulong uStack_1380;
  ulong uStack_1378;
  undefined8 uStack_1370;
  float fStack_1368;
  float fStack_1364;
  undefined8 uStack_1360;
  double dStack_1358;
  undefined8 uStack_1350;
  double dStack_1348;
  uint uStack_1340;
  uint auStack_1338 [4];
  undefined4 uStack_1328;
  long lStack_1320;
  ulong uStack_1318;
  long lStack_1310;
  ulong auStack_1308 [2];
  long lStack_12f8;
  undefined1 auStack_12e0 [32];
  undefined1 auStack_12c0 [512];
  undefined1 auStack_10c0 [296];
  uint auStack_f98 [10];
  long lStack_f70;
  byte *pbStack_f68;
  uint auStack_f14 [8];
  int iStack_ef4;
  uint auStack_ef0 [8];
  int iStack_ed0;
  long lStack_e58;
  long lStack_90;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_13e0 = param_1 + 0x1400;
  uVar25 = param_1[0xc];
  uVar28 = param_1[0xd];
  lVar19 = *(long *)param_1;
  iVar31 = *(int *)(lVar19 + 0x3c);
  uVar2 = param_1[0x1715];
  uStack_13c0 = param_1[0x1711];
  iVar8 = *(int *)(lVar19 + 0x10);
  uVar22 = (ulong)iVar8;
  uVar32 = (ulong)(uVar22 != 0);
  uStack_1370 = 0x4120000000000001;
  uStack_1360 = NEON_scvtf(*(undefined8 *)(lVar19 + 0x6c),4);
  fVar45 = *(float *)(lVar19 + 4);
  fVar44 = (float)((ulong)uStack_1360 >> 0x20);
  if (fVar45 <= fVar44) {
    fVar44 = fVar45;
  }
  fStack_1368 = (float)uStack_1360;
  if ((float)uStack_1360 <= fVar45) {
    fStack_1368 = fVar44;
  }
  dVar43 = (double)*(float *)(lVar19 + 0x14);
  if (*(float *)(lVar19 + 0x14) <= 0.0) {
    dVar43 = 40.0;
  }
  dVar42 = (double)uVar22;
  if (iVar8 == 0) {
    dVar42 = dVar43;
  }
  dStack_1358 = 0.0;
  uStack_1350 = 0;
  uStack_1340 = (uint)(uVar22 != 0);
  puVar9 = param_1;
  fStack_1364 = fStack_1368;
  dStack_1348 = dVar42;
  FUN_10824182c();
  fVar44 = SUB84(dVar42,0);
  if ((int)puVar9 == 0) goto LAB_1082422ac;
  iStack_13d4 = (int)(uVar28 * uVar25) >> 3;
  if (iStack_13d4 < 0x61) {
    iStack_13d4 = 0x60;
  }
  if (iVar31 < 1) {
    iVar31 = 0x28;
  }
  else {
    uStack_13f8 = (long)(int)uVar25 * (long)(int)uVar28 * 0x180;
    puStack_13a0 = auStack_f14;
    puStack_13c8 = auStack_12c0;
    Var5 = (unkuint9)uStack_13f8;
    puStack_1398 = auStack_10c0;
    iStack_13e4 = 0x28;
    uStack_13f0 = uVar2;
    do {
      iStack_13e8 = iVar31;
      iStack_13ec = iStack_13e8 + -1;
      if (0.4 < ABS(uStack_1370._4_4_) && iStack_13ec != 0) {
        uVar25 = (uint)(puStack_13e0[0x312] == 0);
      }
      else {
        uVar25 = 1;
      }
      FUN_108244df0(param_1,auStack_f98);
      uVar22 = (ulong)(uint)fStack_1368;
      FUN_108242304(param_1);
      if ((uVar25 != 0) && (_bzero(param_1 + 0x491,0x1080), lStack_e58 != 0)) {
        _bzero(lStack_e58,0x800);
        FUN_10823ad54();
      }
      iStack_13d0 = 0;
      if (iStack_13e8 + 1 != 0) {
        iStack_13d0 = iStack_13e4 / (iStack_13e8 + 1);
      }
      iStack_13e4 = iStack_13e4 - iStack_13d0;
      FUN_10824d438(param_1 + 0x7c);
      lVar19 = 0;
      uVar34 = 0;
      iVar31 = iStack_13d4;
      uStack_13cc = uVar25;
      do {
        FUN_108244f68(auStack_f98,0);
        if (iVar31 < 1) {
          FUN_108242560(param_1 + 0x388);
          FUN_108240340(param_1 + 0x388);
          iVar31 = iStack_13d4;
        }
        else {
          iVar31 = iVar31 + -1;
        }
        lStack_13b8 = lVar19;
        uStack_13b0 = uVar34;
        FUN_10824ad70(auStack_f98,auStack_1308,uStack_13c0);
        lVar19 = lStack_f70;
        FUN_108245590(auStack_f98);
        iVar8 = iStack_ed0;
        iVar1 = iStack_ef4;
        bVar7 = (*pbStack_f68 & 3) != 1;
        iStack_13bc = iVar31;
        uStack_1378 = lVar19;
        if (bVar7) {
          uStack_1328 = 3;
          lStack_1320 = lVar19 + 0x113c;
          uStack_1318 = lVar19 + 0x1ea4;
          lVar41 = lVar19 + 0x5a48;
        }
        else {
          lStack_1320 = lVar19 + 0xf2c;
          uStack_1380 = lVar19 + 0x1244;
          uStack_1318 = lVar19 + 0x1664;
          lVar41 = lVar19 + 0x55c8;
          lStack_1310 = lVar19 + 0x5748;
          uStack_1328 = 1;
          auStack_1338[0] = 0;
          (*pcRam0000000113869fa0)(auStack_12e0,auStack_1338);
          iVar8 = iVar8 + iVar1;
          FUN_10824d490(iVar8,auStack_1338,param_1 + 0x7c);
          iStack_ed0 = iVar8;
          iStack_ef4 = iVar8;
          uStack_1328 = 0;
          lStack_1320 = lVar19 + 0xe24;
          uStack_1318 = uStack_1380;
        }
        lVar19 = 0;
        lStack_1310 = lVar41;
        auStack_1338[0] = (uint)!bVar7;
        puVar37 = puStack_13c8;
        do {
          lVar41 = 0x84;
          puVar38 = puVar37;
          do {
            iVar31 = *(int *)((long)auStack_f98 + lVar41);
            uVar25 = auStack_ef0[lVar19];
            (*pcRam0000000113869fa0)(puVar38,auStack_1338);
            uVar25 = uVar25 + iVar31;
            FUN_10824d490(uVar25,auStack_1338,param_1 + 0x7c);
            auStack_ef0[lVar19] = uVar25;
            *(uint *)((long)auStack_f98 + lVar41) = uVar25;
            lVar41 = lVar41 + 4;
            puVar38 = puVar38 + 0x20;
          } while (lVar41 != 0x94);
          lVar19 = lVar19 + 1;
          puVar37 = puVar37 + 0x80;
        } while (lVar19 != 4);
        uVar34 = 0;
        lStack_1320 = uStack_1378 + 0x1034;
        uStack_1318 = uStack_1378 + 0x1a84;
        lStack_1310 = uStack_1378 + 0x58c8;
        uVar25 = 1;
        uStack_1328 = 2;
        auStack_1338[0] = 0;
        do {
          uVar23 = 0;
          uStack_13a4 = uVar25;
          uVar25 = 1;
          uStack_1390 = uVar34;
          do {
            puVar37 = puStack_1398;
            puVar9 = puStack_13a0;
            uVar20 = 0;
            uStack_1384 = uVar25;
            uStack_1378 = uVar23 | uVar34 | 4;
            uStack_1380 = (uVar23 | uStack_1390) << 1;
            uVar39 = (ulong)auStack_ef0[uStack_1378];
            uVar23 = 1;
            do {
              uVar32 = uVar23;
              uVar23 = uVar20 | uVar34 | 4;
              uVar25 = puVar9[uVar23];
              (*pcRam0000000113869fa0)(puVar37 + (uVar20 | uStack_1380) * 0x20,auStack_1338);
              uVar39 = (ulong)(uVar25 + (int)uVar39);
              FUN_10824d490(uVar39,auStack_1338,param_1 + 0x7c);
              auStack_ef0[uStack_1378] = (uint)uVar39;
              puVar9[uVar23] = (uint)uVar39;
              uVar20 = 1;
              uVar23 = 0;
            } while ((int)uVar32 != 0);
            uVar25 = 0;
            uVar23 = 1;
          } while ((uStack_1384 & 1) != 0);
          uVar25 = 0;
          uVar34 = 2;
        } while ((uStack_13a4 & 1) != 0);
        func_0x00010824560c(auStack_f98);
        lVar19 = lStack_12f8;
        uVar34 = auStack_1308[0];
        uVar25 = uStack_13cc;
        fVar44 = (float)uVar22;
        if (param_1[0x84] != 0) {
          if (*(int *)(*(long *)(param_1 + 2) + 0x88) == 0) {
            *(undefined4 *)(*(long *)(param_1 + 2) + 0x88) = 1;
          }
          goto LAB_1082422a0;
        }
        if ((uStack_13cc & 1) == 0) {
          func_0x000108245674(auStack_f98);
        }
        else {
          FUN_108241914(auStack_f98);
          FUN_108240988(auStack_f98);
          func_0x00010824541c(auStack_f98);
          puVar9 = auStack_f98;
          func_0x000108244ec8(puVar9,iStack_13d0);
          func_0x000108245674(auStack_f98);
          fVar44 = (float)uVar22;
          uVar32 = uVar34;
          if ((int)puVar9 == 0) goto LAB_1082422a0;
        }
        lVar19 = lVar19 + lStack_13b8;
        uVar34 = uVar34 + uStack_13b0;
        iVar8 = (int)auStack_f98;
        FUN_108245738();
        uVar28 = uStack_1340;
        iVar31 = iStack_13bc;
      } while (iVar8 != 0);
      uVar2 = param_1[10];
      if (uStack_1340 == 0) {
        dVar43 = 99.0;
        if ((uStack_13f8 != 0) && (uVar34 != 0)) {
          dVar43 = ((double)(unkint9)Var5 * 65025.0) / (double)uVar34;
          _log10();
          dVar43 = dVar43 * 10.0;
        }
      }
      else {
        iVar31 = (int)param_1 + 0xe20;
        FUN_108242560();
        puVar9 = param_1 + 0x7c;
        FUN_10824dee8(puVar9,param_1 + 0x389);
        dVar43 = (double)(((ulong)((long)puVar9 + lVar19 + (int)uVar2 + (long)iVar31 + 0x400) >> 0xb
                          ) + 0x1e);
      }
      dStack_1358 = dVar43;
      if (((int)puStack_13e0[0x312] < 1) || ((ulong)(lVar19 + (int)uVar2) < 0x3fc00001)) {
        if ((uVar25 & 1) != 0) break;
        iVar31 = iStack_13ec;
        if (uStack_13f0 != 0) {
          FUN_10824270c(&uStack_1370);
          iVar31 = iStack_13ec;
        }
      }
      else {
        puStack_13e0[0x312] = puStack_13e0[0x312] >> 1;
        iVar31 = iStack_13e8;
        if (uVar25 != 0) {
          if (*(long *)(*(long *)(lStack_f70 + 8) + 0x80) != 0) {
            *(undefined4 *)(lStack_f70 + 0x5c3c) = 0;
            *(undefined8 *)(lStack_f70 + 0x5c34) = 0;
          }
          *(undefined8 *)(lStack_f70 + 0x5bf8) = 0;
          *(undefined8 *)(lStack_f70 + 0x5bd8) = 0;
          *(undefined8 *)(lStack_f70 + 0x5be8) = 0;
          *(undefined8 *)(lStack_f70 + 0x5be0) = 0;
        }
      }
      uVar28 = uStack_1340;
    } while (0 < iVar31);
    fVar44 = SUB84(dVar43,0);
    uVar32 = (ulong)uVar28;
    iVar31 = iStack_13e4;
  }
  if ((int)uVar32 == 0) {
    FUN_108242560(param_1 + 0x388);
  }
  puVar9 = param_1 + 0x7c;
  func_0x00010824de20(puVar9,param_1 + 0x1c,param_1 + 0x389,1);
  if ((int)puVar9 == 0) {
LAB_1082422a0:
    uVar11 = 0;
  }
  else {
    if (iVar31 != 0) {
      uVar32 = *(ulong *)(param_1 + 2);
      uVar25 = param_1[0x86] + iVar31;
      param_1[0x86] = uVar25;
      if ((*(code **)(uVar32 + 0x90) != (code *)0x0) &&
         ((**(code **)(uVar32 + 0x90))(uVar25,uVar32), uVar25 == 0)) {
        if (*(int *)(uVar32 + 0x88) != 0) goto LAB_1082422a0;
        uVar11 = 0;
        *(undefined4 *)(uVar32 + 0x88) = 10;
        goto LAB_1082422a4;
      }
    }
    uVar11 = 1;
  }
LAB_1082422a4:
  puVar9 = auStack_f98;
  FUN_108241af4(puVar9,uVar11);
LAB_1082422ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_1408 = FUN_108242304;
  lStack_1428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar45 = 100.0;
  if (fVar44 <= 100.0) {
    fVar45 = fVar44;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar44) {
    fVar6 = fVar45;
  }
  uStack_1420 = uVar32;
  puStack_1418 = param_1;
  puStack_1410 = &stack0xfffffffffffffff0;
  FUN_10824a6c8(fVar6);
  uStack_1438 = 0;
  uStack_1430 = 0;
  uVar32 = (ulong)(puVar9[0xd] * puVar9[0xc]);
  if (0 < (int)(puVar9[0xd] * puVar9[0xc])) {
    pbVar24 = *(byte **)(puVar9 + 0x1718);
    do {
      uVar22 = (ulong)(*pbVar24 >> 5) & 3;
      *(int *)((long)&uStack_1438 + uVar22 * 4) = *(int *)((long)&uStack_1438 + uVar22 * 4) + 1;
      uVar32 = uVar32 - 1;
      pbVar24 = pbVar24 + 4;
    } while (uVar32 != 0);
  }
  lVar19 = *(long *)(*(long *)(puVar9 + 2) + 0x80);
  if (lVar19 != 0) {
    *(undefined8 *)(lVar19 + 100) = uStack_1430;
    *(undefined8 *)(lVar19 + 0x5c) = uStack_1438;
  }
  if ((int)puVar9[8] < 2) {
    uVar25 = 0;
    puVar9[9] = 0;
  }
  else {
    iVar31 = uStack_1438._4_4_ + (int)uStack_1438;
    iVar8 = uStack_1430._4_4_ + (int)uStack_1430;
    iVar1 = iVar8 + iVar31;
    if (iVar1 == 0) {
      uVar25 = 0xff;
    }
    else {
      uVar25 = 0;
      if (iVar1 != 0) {
        uVar25 = (iVar31 * 0xff + iVar1 / 2) / iVar1;
      }
      uVar25 = uVar25 & 0xff;
    }
    *(char *)(puVar9 + 0x388) = (char)uVar25;
    if (iVar31 == 0) {
      uVar28 = 0xff;
    }
    else {
      uVar28 = 0;
      if (iVar31 != 0) {
        uVar28 = ((int)uStack_1438 * 0xff + iVar31 / 2) / iVar31;
      }
      uVar28 = uVar28 & 0xff;
    }
    *(char *)((long)puVar9 + 0xe21) = (char)uVar28;
    if (iVar8 == 0) {
      uVar32 = 0xff;
    }
    else {
      uVar2 = 0;
      if (iVar8 != 0) {
        uVar2 = ((int)uStack_1430 * 0xff + iVar8 / 2) / iVar8;
      }
      uVar32 = (ulong)uVar2;
    }
    *(char *)((long)puVar9 + 0xe22) = (char)uVar32;
    if ((uVar25 == 0xff) && (uVar28 == 0xff)) {
      bVar7 = ((uint)uVar32 & 0xff) != 0xff;
      puVar9[9] = (uint)bVar7;
      if ((bVar7) || ((int)(puVar9[0xd] * puVar9[0xc]) < 1)) {
        uVar28 = 0xff;
        uVar25 = 0xff;
      }
      else {
        lVar41 = 0;
        lVar19 = 0;
        do {
          *(byte *)(*(long *)(puVar9 + 0x1718) + lVar41) =
               *(byte *)(*(long *)(puVar9 + 0x1718) + lVar41) & 0x9f;
          lVar19 = lVar19 + 1;
          lVar41 = lVar41 + 4;
        } while (lVar19 < (long)(int)puVar9[0xd] * (long)(int)puVar9[0xc]);
        uVar25 = (uint)(byte)puVar9[0x388];
        uVar28 = (uint)*(byte *)((long)puVar9 + 0xe21);
        uVar32 = (ulong)*(byte *)((long)puVar9 + 0xe22);
      }
    }
    else {
      puVar9[9] = 1;
    }
    uVar25 = ((uint)*(ushort *)(&UNK_10df0c9ca + (ulong)uVar28 * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)uVar25 * 2)) * (int)uStack_1438 +
             ((uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar28 ^ 0xff) * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)uVar25 * 2)) * uStack_1438._4_4_ +
             ((uint)*(ushort *)(&UNK_10df0c9ca + (uVar32 & 0xff) * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar25 ^ 0xff) * 2)) * (int)uStack_1430 +
             ((uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~(uint)uVar32 & 0xff) * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar25 ^ 0xff) * 2)) * uStack_1430._4_4_;
  }
  puVar9[10] = uVar25;
  puVar10 = puVar9 + 0x388;
  FUN_108240340();
  puVar9[0x16f4] = 0;
  puVar9[0x16fe] = 0;
  puVar9[0x16ff] = 0;
  puVar9[0x16f6] = 0;
  puVar9[0x16f7] = 0;
  puVar9[0x16fa] = 0;
  puVar9[0x16fb] = 0;
  puVar9[0x16f8] = 0;
  puVar9[0x16f9] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1428) {
    ___stack_chk_fail();
    lVar19 = 0;
    uVar25 = 0;
    puVar21 = (uint *)0x0;
    puVar9 = puVar10 + 0x109;
    puVar26 = &UNK_10df0ffe8;
    puVar27 = puVar10 + 1;
    puVar29 = &UNK_10df1078c;
    do {
      lVar41 = 0;
      puVar12 = puVar9;
      puVar13 = puVar29;
      puVar14 = puVar26;
      puVar15 = puVar27;
      do {
        lVar16 = 0;
        puVar17 = puVar12;
        puVar18 = puVar13;
        puVar30 = puVar14;
        puVar33 = puVar15;
        do {
          lVar35 = 0;
          do {
            uVar2 = puVar17[lVar35] >> 0x10;
            uVar28 = puVar17[lVar35] & 0xffff;
            if (uVar28 == 0) {
              uVar36 = 0xff;
            }
            else {
              uVar36 = 0;
              if (uVar2 != 0) {
                uVar36 = (uVar28 * 0xff) / uVar2;
              }
              uVar36 = 0xff - uVar36;
            }
            bVar3 = puVar18[lVar35];
            bVar4 = puVar30[lVar35];
            iVar8 = uVar28 * *(ushort *)(&UNK_10df0c9ca + ((ulong)bVar4 ^ 0xff) * 2) +
                    (uVar2 - uVar28) * (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar4 * 2) +
                    (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar3 * 2);
            uVar40 = (uint)bVar3;
            iVar31 = (uVar2 - uVar28) *
                     (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar36 & 0xff) * 2) +
                     uVar28 * *(ushort *)(&UNK_10df0c9ca + (ulong)(uVar36 & 0xff ^ 0xff) * 2) +
                     (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~uVar40 & 0xff) * 2) + 0x800;
            if (iVar31 < iVar8) {
              uVar40 = ~(uint)bVar3;
            }
            uVar28 = (int)puVar21 + (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)uVar40 & 0xff) * 2);
            uVar2 = uVar28 + 0x800;
            uVar40 = uVar36;
            if (iVar8 <= iVar31) {
              uVar2 = uVar28;
              uVar40 = (uint)bVar4;
            }
            puVar21 = (uint *)(ulong)uVar2;
            uVar28 = 0;
            if (uVar36 != bVar4) {
              uVar28 = (uint)(iVar31 < iVar8);
            }
            uVar25 = uVar25 | uVar28;
            *(char *)((long)puVar33 + lVar35) = (char)uVar40;
            lVar35 = lVar35 + 1;
          } while (lVar35 != 0xb);
          lVar16 = lVar16 + 1;
          puVar33 = (uint *)((long)puVar33 + 0xb);
          puVar30 = puVar30 + 0xb;
          puVar18 = puVar18 + 0xb;
          puVar17 = puVar17 + 0xb;
        } while (lVar16 != 3);
        lVar41 = lVar41 + 1;
        puVar15 = (uint *)((long)puVar15 + 0x21);
        puVar14 = puVar14 + 0x21;
        puVar13 = puVar13 + 0x21;
        puVar12 = puVar12 + 0x21;
      } while (lVar41 != 8);
      lVar19 = lVar19 + 1;
      puVar27 = puVar27 + 0x42;
      puVar26 = puVar26 + 0x108;
      puVar29 = puVar29 + 0x108;
      puVar9 = puVar9 + 0x108;
    } while (lVar19 != 4);
    puVar10[0x136a] = uVar25;
    return puVar21;
  }
  return puVar10;
}



/* Entry: 108242304; end: 10824255f;  */

ulong FUN_108242304(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  undefined *puVar23;
  uint uVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar32 = 100.0;
  if (param_1 <= 100.0) {
    fVar32 = param_1;
  }
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = fVar32;
  }
  FUN_10824a6c8(fVar6);
  uStack_38 = 0;
  uStack_30 = 0;
  uVar21 = *(int *)(param_2 + 0x34) * *(int *)(param_2 + 0x30);
  uVar16 = (ulong)uVar21;
  if (0 < (int)uVar21) {
    pbVar18 = *(byte **)(param_2 + 0x5c60);
    do {
      uVar20 = (ulong)(*pbVar18 >> 5) & 3;
      *(int *)((long)&uStack_38 + uVar20 * 4) = *(int *)((long)&uStack_38 + uVar20 * 4) + 1;
      uVar16 = uVar16 - 1;
      pbVar18 = pbVar18 + 4;
    } while (uVar16 != 0);
  }
  lVar17 = *(long *)(*(long *)(param_2 + 8) + 0x80);
  if (lVar17 != 0) {
    *(undefined8 *)(lVar17 + 100) = uStack_30;
    *(undefined8 *)(lVar17 + 0x5c) = uStack_38;
  }
  if (*(int *)(param_2 + 0x20) < 2) {
    iVar15 = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    iVar15 = uStack_38._4_4_ + (int)uStack_38;
    iVar1 = uStack_30._4_4_ + (int)uStack_30;
    iVar2 = iVar1 + iVar15;
    if (iVar2 == 0) {
      uVar21 = 0xff;
    }
    else {
      uVar21 = 0;
      if (iVar2 != 0) {
        uVar21 = (iVar15 * 0xff + iVar2 / 2) / iVar2;
      }
      uVar21 = uVar21 & 0xff;
    }
    *(char *)(param_2 + 0xe20) = (char)uVar21;
    if (iVar15 == 0) {
      uVar24 = 0xff;
    }
    else {
      uVar24 = 0;
      if (iVar15 != 0) {
        uVar24 = ((int)uStack_38 * 0xff + iVar15 / 2) / iVar15;
      }
      uVar24 = uVar24 & 0xff;
    }
    *(char *)(param_2 + 0xe21) = (char)uVar24;
    if (iVar1 == 0) {
      uVar16 = 0xff;
    }
    else {
      uVar5 = 0;
      if (iVar1 != 0) {
        uVar5 = ((int)uStack_30 * 0xff + iVar1 / 2) / iVar1;
      }
      uVar16 = (ulong)uVar5;
    }
    *(char *)(param_2 + 0xe22) = (char)uVar16;
    if ((uVar21 == 0xff) && (uVar24 == 0xff)) {
      bVar7 = ((uint)uVar16 & 0xff) != 0xff;
      *(uint *)(param_2 + 0x24) = (uint)bVar7;
      if ((bVar7) || (*(int *)(param_2 + 0x34) * *(int *)(param_2 + 0x30) < 1)) {
        uVar24 = 0xff;
        uVar21 = 0xff;
      }
      else {
        lVar22 = 0;
        lVar17 = 0;
        do {
          *(byte *)(*(long *)(param_2 + 0x5c60) + lVar22) =
               *(byte *)(*(long *)(param_2 + 0x5c60) + lVar22) & 0x9f;
          lVar17 = lVar17 + 1;
          lVar22 = lVar22 + 4;
        } while (lVar17 < (long)*(int *)(param_2 + 0x34) * (long)*(int *)(param_2 + 0x30));
        uVar21 = (uint)*(byte *)(param_2 + 0xe20);
        uVar24 = (uint)*(byte *)(param_2 + 0xe21);
        uVar16 = (ulong)*(byte *)(param_2 + 0xe22);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x24) = 1;
    }
    iVar15 = ((uint)*(ushort *)(&UNK_10df0c9ca + (ulong)uVar24 * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)uVar21 * 2)) * (int)uStack_38 +
             ((uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar24 ^ 0xff) * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)uVar21 * 2)) * uStack_38._4_4_ +
             ((uint)*(ushort *)(&UNK_10df0c9ca + (uVar16 & 0xff) * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar21 ^ 0xff) * 2)) * (int)uStack_30 +
             ((uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~(uint)uVar16 & 0xff) * 2) +
             (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar21 ^ 0xff) * 2)) * uStack_30._4_4_;
  }
  *(int *)(param_2 + 0x28) = iVar15;
  uVar16 = param_2 + 0xe20;
  FUN_108240340();
  *(undefined4 *)(param_2 + 0x5bd0) = 0;
  *(undefined8 *)(param_2 + 0x5bf8) = 0;
  *(undefined8 *)(param_2 + 0x5bd8) = 0;
  *(undefined8 *)(param_2 + 0x5be8) = 0;
  *(undefined8 *)(param_2 + 0x5be0) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    lVar19 = 0;
    uVar21 = 0;
    uVar20 = 0;
    lVar17 = uVar16 + 0x424;
    puVar23 = &UNK_10df0ffe8;
    lVar22 = uVar16 + 4;
    puVar25 = &UNK_10df1078c;
    do {
      lVar26 = 0;
      lVar8 = lVar17;
      puVar9 = puVar25;
      puVar10 = puVar23;
      lVar11 = lVar22;
      do {
        lVar12 = 0;
        lVar13 = lVar8;
        puVar14 = puVar9;
        puVar27 = puVar10;
        lVar28 = lVar11;
        do {
          lVar29 = 0;
          do {
            uVar24 = *(uint *)(lVar13 + lVar29 * 4);
            uVar5 = uVar24 >> 0x10;
            uVar24 = uVar24 & 0xffff;
            if (uVar24 == 0) {
              uVar30 = 0xff;
            }
            else {
              uVar30 = 0;
              if (uVar5 != 0) {
                uVar30 = (uVar24 * 0xff) / uVar5;
              }
              uVar30 = 0xff - uVar30;
            }
            bVar3 = puVar14[lVar29];
            bVar4 = puVar27[lVar29];
            iVar1 = uVar24 * *(ushort *)(&UNK_10df0c9ca + ((ulong)bVar4 ^ 0xff) * 2) +
                    (uVar5 - uVar24) * (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar4 * 2) +
                    (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar3 * 2);
            uVar31 = (uint)bVar3;
            iVar15 = (uVar5 - uVar24) *
                     (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar30 & 0xff) * 2) +
                     uVar24 * *(ushort *)(&UNK_10df0c9ca + (ulong)(uVar30 & 0xff ^ 0xff) * 2) +
                     (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~uVar31 & 0xff) * 2) + 0x800;
            if (iVar15 < iVar1) {
              uVar31 = ~(uint)bVar3;
            }
            uVar24 = (int)uVar20 + (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)uVar31 & 0xff) * 2);
            uVar5 = uVar24 + 0x800;
            uVar31 = uVar30;
            if (iVar1 <= iVar15) {
              uVar5 = uVar24;
              uVar31 = (uint)bVar4;
            }
            uVar20 = (ulong)uVar5;
            uVar24 = 0;
            if (uVar30 != bVar4) {
              uVar24 = (uint)(iVar15 < iVar1);
            }
            uVar21 = uVar21 | uVar24;
            *(char *)(lVar28 + lVar29) = (char)uVar31;
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0xb);
          lVar12 = lVar12 + 1;
          lVar28 = lVar28 + 0xb;
          puVar27 = puVar27 + 0xb;
          puVar14 = puVar14 + 0xb;
          lVar13 = lVar13 + 0x2c;
        } while (lVar12 != 3);
        lVar26 = lVar26 + 1;
        lVar11 = lVar11 + 0x21;
        puVar10 = puVar10 + 0x21;
        puVar9 = puVar9 + 0x21;
        lVar8 = lVar8 + 0x84;
      } while (lVar26 != 8);
      lVar19 = lVar19 + 1;
      lVar22 = lVar22 + 0x108;
      puVar23 = puVar23 + 0x108;
      puVar25 = puVar25 + 0x108;
      lVar17 = lVar17 + 0x420;
    } while (lVar19 != 4);
    *(uint *)(uVar16 + 0x4da8) = uVar21;
    return uVar20;
  }
  return uVar16;
}



/* Entry: 108242560; end: 10824270b;  */

int FUN_108242560(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  lVar16 = 0;
  uVar15 = 0;
  iVar14 = 0;
  lVar17 = param_1 + 0x424;
  puVar18 = &UNK_10df0ffe8;
  lVar19 = param_1 + 4;
  puVar20 = &UNK_10df1078c;
  do {
    lVar21 = 0;
    lVar7 = lVar17;
    puVar8 = puVar20;
    puVar9 = puVar18;
    lVar10 = lVar19;
    do {
      lVar11 = 0;
      lVar12 = lVar7;
      puVar13 = puVar8;
      puVar22 = puVar9;
      lVar23 = lVar10;
      do {
        lVar24 = 0;
        do {
          uVar4 = *(uint *)(lVar12 + lVar24 * 4);
          uVar26 = uVar4 >> 0x10;
          uVar4 = uVar4 & 0xffff;
          if (uVar4 == 0) {
            uVar25 = 0xff;
          }
          else {
            uVar25 = 0;
            if (uVar26 != 0) {
              uVar25 = (uVar4 * 0xff) / uVar26;
            }
            uVar25 = 0xff - uVar25;
          }
          bVar5 = puVar13[lVar24];
          bVar6 = puVar22[lVar24];
          iVar2 = uVar4 * *(ushort *)(&UNK_10df0c9ca + ((ulong)bVar6 ^ 0xff) * 2) +
                  (uVar26 - uVar4) * (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar6 * 2) +
                  (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar5 * 2);
          uVar27 = (uint)bVar5;
          iVar1 = (uVar26 - uVar4) * (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)(uVar25 & 0xff) * 2)
                  + uVar4 * *(ushort *)(&UNK_10df0c9ca + (ulong)(uVar25 & 0xff ^ 0xff) * 2) +
                  (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~uVar27 & 0xff) * 2) + 0x800;
          if (iVar1 < iVar2) {
            uVar27 = ~(uint)bVar5;
          }
          iVar3 = iVar14 + (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)uVar27 & 0xff) * 2);
          iVar14 = iVar3 + 0x800;
          uVar4 = uVar25;
          if (iVar2 <= iVar1) {
            iVar14 = iVar3;
            uVar4 = (uint)bVar6;
          }
          uVar26 = 0;
          if (uVar25 != bVar6) {
            uVar26 = (uint)(iVar1 < iVar2);
          }
          uVar15 = uVar15 | uVar26;
          *(char *)(lVar23 + lVar24) = (char)uVar4;
          lVar24 = lVar24 + 1;
        } while (lVar24 != 0xb);
        lVar11 = lVar11 + 1;
        lVar23 = lVar23 + 0xb;
        puVar22 = puVar22 + 0xb;
        puVar13 = puVar13 + 0xb;
        lVar12 = lVar12 + 0x2c;
      } while (lVar11 != 3);
      lVar21 = lVar21 + 1;
      lVar10 = lVar10 + 0x21;
      puVar9 = puVar9 + 0x21;
      puVar8 = puVar8 + 0x21;
      lVar7 = lVar7 + 0x84;
    } while (lVar21 != 8);
    lVar16 = lVar16 + 1;
    lVar19 = lVar19 + 0x108;
    puVar18 = puVar18 + 0x108;
    puVar20 = puVar20 + 0x108;
    lVar17 = lVar17 + 0x420;
  } while (lVar16 != 4);
  *(uint *)(param_1 + 0x4da8) = uVar15;
  return iVar14;
}



/* Entry: 10824270c; end: 10824282f;  */

void FUN_10824270c(int *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  dVar3 = *(double *)(param_1 + 6);
  if (*param_1 == 0) {
    if (dVar3 == *(double *)(param_1 + 8)) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)(((*(double *)(param_1 + 10) - dVar3) / (*(double *)(param_1 + 8) - dVar3)) *
                     (double)((float)param_1[3] - (float)param_1[2]));
    }
  }
  else {
    fVar4 = -(float)param_1[1];
    if (dVar3 <= *(double *)(param_1 + 10)) {
      fVar4 = (float)param_1[1];
    }
    *param_1 = 0;
  }
  fVar1 = 30.0;
  if (fVar4 <= 30.0) {
    fVar1 = fVar4;
  }
  fVar5 = -30.0;
  if (-30.0 <= fVar4) {
    fVar5 = fVar1;
  }
  param_1[3] = param_1[2];
  *(double *)(param_1 + 8) = dVar3;
  fVar1 = (float)param_1[2] + fVar5;
  fVar4 = (float)param_1[5];
  if (fVar1 <= (float)param_1[5]) {
    fVar4 = fVar1;
  }
  fVar2 = (float)param_1[4];
  if ((float)param_1[4] <= fVar1) {
    fVar2 = fVar4;
  }
  param_1[1] = (int)fVar5;
  param_1[2] = (int)fVar2;
  return;
}



/* Entry: 108242830; end: 108242b47;  */

undefined8 FUN_108242830(undefined8 param_1,int param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  
  iVar13 = *param_3;
  uVar5 = param_3[1];
  lVar8 = (long)iVar13;
  puVar10 = (undefined1 *)(*(long *)(param_3 + 6) + lVar8 * 0x21 + (long)param_2 * 0xb);
  FUN_108254188(param_1,~uVar5 >> 0x1f,*puVar10);
  if ((int)uVar5 < 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    if (iVar13 < 0x10) {
      do {
        lVar2 = lVar8 + 1;
        sVar4 = *(short *)(*(long *)(param_3 + 2) + lVar8 * 2);
        iVar13 = (int)sVar4;
        uVar14 = (uint)sVar4;
        uVar5 = -iVar13;
        if (-1 < iVar13) {
          uVar5 = uVar14;
        }
        FUN_108254188(param_1,iVar13 != 0,puVar10[1]);
        if (uVar14 == 0) {
          puVar10 = (undefined1 *)
                    (*(long *)(param_3 + 6) + (ulong)(byte)(&UNK_10df0c9b9)[lVar8] * 0x21);
        }
        else {
          uVar9 = uVar5 & 0xffff;
          FUN_108254188(param_1,1 < uVar9,puVar10[2]);
          if (uVar9 < 2) {
            lVar11 = 1;
          }
          else {
            FUN_108254188(param_1,4 < uVar9,puVar10[3]);
            if (uVar9 < 5) {
              uVar5 = uVar5 & 0xffff;
              FUN_108254188(param_1,uVar5 != 2,puVar10[4]);
              if (uVar5 != 2) {
                uVar5 = (uint)(uVar5 == 4);
                uVar6 = puVar10[5];
                goto LAB_108242a40;
              }
            }
            else {
              uVar9 = uVar5 & 0xffff;
              FUN_108254188(param_1,10 < uVar9,puVar10[6]);
              if (uVar9 < 0xb) {
                FUN_108254188(param_1,6 < uVar9,puVar10[7]);
                if (uVar9 < 7) {
                  uVar5 = (uint)((uVar5 & 0xffff) == 6);
                  uVar6 = 0x9f;
                }
                else {
                  FUN_108254188(param_1,8 < (uVar5 & 0xffff),0xa5);
                  uVar5 = (uVar5 ^ 0xffffffff) & 1;
                  uVar6 = 0x91;
                }
LAB_108242a40:
                FUN_108254188(param_1,uVar5,uVar6);
              }
              else {
                if (uVar9 < 0x13) {
                  FUN_108254188(param_1,0,puVar10[8]);
                  FUN_108254188(param_1,0,puVar10[9]);
                  uVar9 = 4;
                  iVar13 = -0xb;
                  puVar15 = &UNK_10df0eb58;
                }
                else if ((uVar5 & 0xffff) < 0x23) {
                  FUN_108254188(param_1,0,puVar10[8]);
                  FUN_108254188(param_1,1,puVar10[9]);
                  uVar9 = 8;
                  iVar13 = -0x13;
                  puVar15 = &UNK_10df0eb5b;
                }
                else {
                  FUN_108254188(param_1,1,puVar10[8]);
                  if ((uVar5 & 0xffff) < 0x43) {
                    FUN_108254188(param_1,0,puVar10[10]);
                    uVar9 = 0x10;
                    iVar13 = -0x23;
                    puVar15 = &UNK_10df0eb5f;
                  }
                  else {
                    FUN_108254188(param_1,1,puVar10[10]);
                    uVar9 = 0x400;
                    iVar13 = -0x43;
                    puVar15 = &UNK_10df0eb64;
                  }
                }
                do {
                  FUN_108254188(param_1,(uVar9 & iVar13 + uVar5) != 0,*puVar15);
                  bVar1 = 1 < uVar9;
                  puVar15 = puVar15 + 1;
                  uVar9 = uVar9 >> 1;
                } while (bVar1);
              }
            }
            lVar11 = 2;
          }
          lVar12 = *(long *)(param_3 + 6);
          bVar3 = (&UNK_10df0c9b9)[lVar8];
          FUN_1082542f8(param_1,uVar14 >> 0xf & 1);
          if (lVar2 == 0x10) break;
          puVar10 = (undefined1 *)(lVar12 + (ulong)bVar3 * 0x21 + lVar11 * 0xb);
          iVar13 = param_3[1];
          FUN_108254188(param_1,lVar8 < iVar13,*puVar10);
          if (iVar13 <= lVar8) break;
        }
        lVar8 = lVar2;
      } while (lVar2 != 0x10);
      uVar7 = 1;
    }
  }
  return uVar7;
}



/* Entry: 108242b48; end: 108242b87;  */

void FUN_108242b48(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (-1 < param_3) {
    *(int *)(param_1 + 0xca8) = param_3;
  }
  FUN_108242b88(param_1);
  plVar2 = *(long **)(param_2 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], lVar1 != 0)) {
    lVar3 = lVar1 + (long)(int)plVar2[2] * 8;
    do {
      while( true ) {
        FUN_108242f00(param_1,lVar1,0,0);
        lVar1 = lVar1 + 8;
        if (lVar1 == lVar3) break;
        if (lVar1 == 0) {
          return;
        }
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = plVar2[1];
      lVar3 = lVar1 + (long)*(int *)(plVar2 + 2) * 8;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 108242b88; end: 108242c0b;  */

void FUN_108242b88(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar2 = *(uint *)(param_1 + 0x195);
  iVar1 = (4 << (ulong)(uVar2 & 0x1f)) + 0x1150;
  if ((int)uVar2 < 1) {
    iVar1 = 0x1150;
  }
  _bzero(param_1,(long)iVar1);
  *(uint *)(param_1 + 0x195) = uVar2;
  *param_1 = uVar3;
  *(undefined8 *)((long)param_1 + 0xcac) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0xcb4) = 0xffff;
  *(undefined4 *)(param_1 + 0x19d) = 0x1010101;
  *(undefined1 *)((long)param_1 + 0xcec) = 1;
  param_1[0x197] = 0;
  param_1[0x199] = 0;
  param_1[0x198] = 0;
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  param_1[0x19c] = 0;
  return;
}



/* Entry: 108242c0c; end: 108242c97;  */

void FUN_108242c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], lVar1 != 0)) {
    lVar3 = lVar1 + (long)(int)plVar2[2] * 8;
    do {
      while( true ) {
        FUN_108242f00(param_4,lVar1,param_2,param_3);
        lVar1 = lVar1 + 8;
        if (lVar1 == lVar3) break;
        if (lVar1 == 0) {
          return;
        }
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = plVar2[1];
      lVar3 = lVar1 + (long)*(int *)(plVar2 + 2) * 8;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 108242c98; end: 108242d1b;  */

void FUN_108242c98(uint param_1)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (4 << (ulong)(param_1 & 0x1f)) + 0x1150;
  if ((int)param_1 < 1) {
    uVar1 = 0x1150;
  }
  plVar2 = (long *)(ulong)uVar1;
  if ((-1 < (int)uVar1) && (_malloc(), plVar2 != (long *)0x0)) {
    *plVar2 = (long)(plVar2 + 0x19e);
    *(uint *)(plVar2 + 0x195) = param_1;
    *(undefined8 *)((long)plVar2 + 0xcac) = 0xffffffffffffffff;
    *(undefined2 *)((long)plVar2 + 0xcb4) = 0xffff;
    *(undefined4 *)(plVar2 + 0x19d) = 0x1010101;
    *(undefined1 *)((long)plVar2 + 0xcec) = 1;
    plVar2[0x197] = 0;
    plVar2[0x199] = 0;
    plVar2[0x198] = 0;
    plVar2[0x19b] = 0;
    plVar2[0x19a] = 0;
    plVar2[0x19c] = 0;
  }
  return;
}



/* Entry: 108242d1c; end: 108242e03;  */

uint * FUN_108242d1c(uint param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (uint)param_2;
  iVar1 = (4 << (ulong)(uVar3 & 0x1f)) + 0x1150;
  if ((int)uVar3 < 1) {
    iVar1 = 0x1150;
  }
  puVar2 = (uint *)(((long)iVar1 + 0x27) * (long)(int)param_1 + 0x10);
  if (puVar2 < (uint *)0x400000001) {
    _malloc();
    if (puVar2 != (uint *)0x0) {
      *(uint **)(puVar2 + 2) = puVar2 + 4;
      *puVar2 = param_1;
      puVar2[1] = param_1;
      FUN_108242e04(puVar2,param_2);
      if (0 < (int)param_1) {
        lVar4 = 0;
        do {
          lVar5 = *(long *)(*(long *)(puVar2 + 2) + lVar4);
          *(uint *)(lVar5 + 0xca8) = uVar3;
          *(undefined2 *)(lVar5 + 0xcb4) = 0xffff;
          *(undefined8 *)(lVar5 + 0xcac) = 0xffffffffffffffff;
          *(undefined4 *)(lVar5 + 0xce8) = 0x1010101;
          *(undefined1 *)(lVar5 + 0xcec) = 1;
          *(undefined8 *)(lVar5 + 0xcb8) = 0;
          *(undefined8 *)(lVar5 + 0xcc8) = 0;
          *(undefined8 *)(lVar5 + 0xcc0) = 0;
          *(undefined8 *)(lVar5 + 0xcd8) = 0;
          *(undefined8 *)(lVar5 + 0xcd0) = 0;
          *(undefined8 *)(lVar5 + 0xce0) = 0;
          lVar4 = lVar4 + 8;
        } while ((ulong)param_1 << 3 != lVar4);
      }
    }
  }
  else {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



/* Entry: 108242e04; end: 108242e6b;  */

void FUN_108242e04(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = lVar4 + (ulong)uVar2 * 8;
    iVar1 = (4 << (ulong)(param_2 & 0x1f)) + 0x1150;
    if ((int)param_2 < 1) {
      iVar1 = 0x1150;
    }
    do {
      uVar6 = lVar5 + 0x1fU & 0xffffffffffffffe0;
      *(ulong *)(lVar4 + lVar3) = uVar6;
      lVar4 = *(long *)(param_1 + 8);
      **(long **)(lVar4 + lVar3) = uVar6 + 0xcf0;
      lVar5 = uVar6 + (long)iVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar2 * 8 - lVar3 != 0);
  }
  return;
}



/* Entry: 108242e6c; end: 108242eff;  */

void FUN_108242e6c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = *(uint *)(**(long **)(param_1 + 2) + 0xca8);
  iVar3 = param_1[1];
  lVar5 = (long)iVar3;
  iVar1 = (4 << (ulong)(uVar2 & 0x1f)) + 0x1150;
  if ((int)uVar2 < 1) {
    iVar1 = 0x1150;
  }
  _bzero(param_1,((long)iVar1 + 0x27) * lVar5 + 0x10);
  *(int **)(param_1 + 2) = param_1 + 4;
  *param_1 = iVar3;
  param_1[1] = iVar3;
  FUN_108242e04(param_1,uVar2);
  if (0 < iVar3) {
    plVar4 = *(long **)(param_1 + 2);
    do {
      *(uint *)(*plVar4 + 0xca8) = uVar2;
      lVar5 = lVar5 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 108242f00; end: 10824304f;  */

void FUN_108242f00(long *param_1,char *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  
  if (*param_2 == '\x01') {
    piVar6 = (int *)(*param_1 + (long)(*(int *)(param_2 + 4) + 0x118) * 4);
    goto LAB_108243038;
  }
  if (*param_2 == '\0') {
    *(int *)((long)param_1 + (ulong)(byte)param_2[7] * 4 + 0x808) =
         *(int *)((long)param_1 + (ulong)(byte)param_2[7] * 4 + 0x808) + 1;
    *(int *)((long)param_1 + (ulong)(byte)param_2[6] * 4 + 8) =
         *(int *)((long)param_1 + (ulong)(byte)param_2[6] * 4 + 8) + 1;
    *(int *)(*param_1 + (ulong)(byte)param_2[5] * 4) =
         *(int *)(*param_1 + (ulong)(byte)param_2[5] * 4) + 1;
    piVar6 = (int *)((long)param_1 + (ulong)(byte)param_2[4] * 4 + 0x408);
    goto LAB_108243038;
  }
  uVar2 = *(ushort *)(param_2 + 2);
  if ((ulong)uVar2 < 0x200) {
    uVar4 = (uint)(char)(&UNK_10df0d838)[(ulong)uVar2 * 2];
  }
  else {
    uVar4 = (uint)LZCOUNT(uVar2 - 1) ^ 0x1f;
    uVar4 = uVar2 - 1 >> (ulong)(uVar4 - 1 & 0x1f) & 1 | uVar4 << 1;
  }
  lVar1 = *param_1 + (long)(int)uVar4 * 4;
  *(int *)(lVar1 + 0x400) = *(int *)(lVar1 + 0x400) + 1;
  iVar3 = *(int *)(param_2 + 4);
  if (param_3 == (code *)0x0) {
    if (iVar3 < 0x200) {
      uVar5 = (long)iVar3 << 1;
      goto LAB_108242ffc;
    }
LAB_108243018:
    uVar4 = (uint)LZCOUNT(iVar3 - 1U) ^ 0x1f;
    uVar4 = iVar3 - 1U >> (ulong)(uVar4 - 1 & 0x1f) & 1 | uVar4 << 1;
  }
  else {
    (*param_3)();
    iVar3 = (int)param_4;
    if (0x1ff < iVar3) goto LAB_108243018;
    uVar5 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
LAB_108242ffc:
    uVar4 = (uint)(char)(&UNK_10df0d838)[uVar5];
  }
  piVar6 = (int *)((long)param_1 + (long)(int)uVar4 * 4 + 0xc08);
LAB_108243038:
  *piVar6 = *piVar6 + 1;
  return;
}



/* Entry: 108243050; end: 10824314f;  */

ulong FUN_108243050(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uStack_28;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_108239a0c(param_1,param_2,&uStack_28);
  if (iStack_1c < 5) {
    if (iStack_1c < 2) {
      return 0;
    }
    if (iStack_1c == 3) {
      lVar3 = 0x3b6;
    }
    else {
      if (iStack_1c == 2) {
        lVar2 = uStack_28 + (ulong)uStack_20 * 0x31800000;
        lVar3 = 0x32;
        if (lVar2 < 0) {
          lVar3 = -0x32;
        }
        return (lVar3 + lVar2) / 100;
      }
      lVar3 = 700;
    }
  }
  else {
    lVar3 = 0x273;
  }
  lVar3 = uStack_28 * (1000 - lVar3) + lVar3 * (ulong)(uStack_20 * 2 - iStack_18) * 0x800000;
  lVar2 = 500;
  if (lVar3 < 0) {
    lVar2 = -500;
  }
  uVar1 = (lVar2 + lVar3) / 1000;
  if (uStack_28 <= uVar1) {
    uStack_28 = uVar1;
  }
  return uStack_28;
}



/* Entry: 108243150; end: 10824324f;  */

long FUN_108243150(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  lVar6 = 0;
  iVar7 = 0;
  plVar4 = param_1 + 0x181;
  do {
    if (iVar7 < 2) {
      if (iVar7 == 0) {
        plVar2 = (long *)*param_1;
        iVar5 = (1 << (ulong)(*(uint *)(param_1 + 0x195) & 0x1f)) + 0x118;
        if ((int)*(uint *)(param_1 + 0x195) < 1) {
          iVar5 = 0x118;
        }
      }
      else {
        plVar2 = param_1 + 1;
        iVar5 = 0x100;
      }
    }
    else {
      plVar1 = param_1 + 0x101;
      iVar8 = 0x100;
      if (iVar7 != 3) {
        iVar8 = 0x28;
        plVar1 = plVar4;
      }
      plVar2 = param_1 + 0x81;
      iVar5 = 0x100;
      if (iVar7 != 2) {
        plVar2 = plVar1;
        iVar5 = iVar8;
      }
    }
    FUN_108243250(plVar2,iVar5,0,0);
    lVar6 = (long)plVar2 + lVar6;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 5);
  lVar3 = *param_1 + 0x400;
  (*pcRam000000011386a078)(lVar3,0x18);
  (*pcRam000000011386a078)(plVar4,0x28);
  return lVar6 + (ulong)(uint)((int)plVar4 + (int)lVar3) * 0x800000;
}



/* Entry: 108243250; end: 1082433e7;  */

long FUN_108243250(undefined8 param_1,undefined8 param_2,undefined2 *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulong uStack_38;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined2 uStack_24;
  
  (*pcRam000000011386a098)(param_1,param_2,&uStack_38,&iStack_50);
  if (param_3 != (undefined2 *)0x0) {
    if (iStack_2c != 1) {
      uStack_24 = 0xffff;
    }
    *param_3 = uStack_24;
  }
  if (param_4 != 0) {
    *(bool *)param_4 = iStack_40 != 0 || iStack_3c != 0;
  }
  if (iStack_2c < 5) {
    if (iStack_2c < 2) {
      uStack_38 = 0;
      goto LAB_108243328;
    }
    if (iStack_2c == 3) {
      lVar3 = 0x3b6;
    }
    else {
      if (iStack_2c == 2) {
        lVar2 = uStack_38 + (ulong)uStack_30 * 0x31800000;
        lVar3 = 0x32;
        if (lVar2 < 0) {
          lVar3 = -0x32;
        }
        uStack_38 = (lVar3 + lVar2) / 100;
        goto LAB_108243328;
      }
      lVar3 = 700;
    }
  }
  else {
    lVar3 = 0x273;
  }
  lVar3 = uStack_38 * (1000 - lVar3) + lVar3 * (ulong)(uStack_30 * 2 - iStack_28) * 0x800000;
  lVar2 = 500;
  if (lVar3 < 0) {
    lVar2 = -500;
  }
  uVar1 = (lVar2 + lVar3) / 1000;
  if (uStack_38 <= uVar1) {
    uStack_38 = uVar1;
  }
LAB_108243328:
  return uStack_38 +
         (ulong)(uint)(iStack_50 * 0x640 + iStack_44 * 0xf0 + iStack_4c * 0xa50 + iStack_3c * 0x2d0
                       + iStack_48 * 0x730 + iStack_40 * 0xd20) * 0x2000 + 0x17f33333;
}



/* Entry: 1082433e8; end: 108244c0f;  */

/* WARNING: Possible PIC construction at 0x000108243580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108244524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108243584) */
/* WARNING: Removing unreachable block (ram,0x00010824358c) */
/* WARNING: Removing unreachable block (ram,0x000108243594) */
/* WARNING: Removing unreachable block (ram,0x00010824359c) */
/* WARNING: Removing unreachable block (ram,0x0001082435a4) */
/* WARNING: Removing unreachable block (ram,0x00010824362c) */
/* WARNING: Removing unreachable block (ram,0x0001082435ac) */
/* WARNING: Removing unreachable block (ram,0x0001082435d0) */
/* WARNING: Removing unreachable block (ram,0x0001082435e0) */
/* WARNING: Removing unreachable block (ram,0x000108243614) */
/* WARNING: Removing unreachable block (ram,0x000108243628) */
/* WARNING: Removing unreachable block (ram,0x000108243634) */
/* WARNING: Removing unreachable block (ram,0x000108243648) */
/* WARNING: Removing unreachable block (ram,0x000108243654) */
/* WARNING: Removing unreachable block (ram,0x000108243ea0) */
/* WARNING: Removing unreachable block (ram,0x000108243664) */
/* WARNING: Removing unreachable block (ram,0x000108243670) */
/* WARNING: Removing unreachable block (ram,0x000108243ea4) */
/* WARNING: Removing unreachable block (ram,0x000108243ed4) */
/* WARNING: Removing unreachable block (ram,0x000108243ee0) */
/* WARNING: Removing unreachable block (ram,0x000108243ee8) */
/* WARNING: Removing unreachable block (ram,0x000108243ef4) */
/* WARNING: Removing unreachable block (ram,0x000108243efc) */
/* WARNING: Removing unreachable block (ram,0x000108243f08) */
/* WARNING: Removing unreachable block (ram,0x000108243f10) */
/* WARNING: Removing unreachable block (ram,0x000108243f1c) */
/* WARNING: Removing unreachable block (ram,0x000108243f40) */
/* WARNING: Removing unreachable block (ram,0x000108243f58) */
/* WARNING: Removing unreachable block (ram,0x000108243f4c) */
/* WARNING: Removing unreachable block (ram,0x000108243f74) */
/* WARNING: Removing unreachable block (ram,0x000108243f84) */
/* WARNING: Removing unreachable block (ram,0x000108243f7c) */
/* WARNING: Removing unreachable block (ram,0x000108243fa0) */
/* WARNING: Removing unreachable block (ram,0x000108243fb0) */
/* WARNING: Removing unreachable block (ram,0x000108243fa8) */
/* WARNING: Removing unreachable block (ram,0x000108243fc8) */
/* WARNING: Removing unreachable block (ram,0x000108243f54) */
/* WARNING: Removing unreachable block (ram,0x000108243fd0) */
/* WARNING: Removing unreachable block (ram,0x000108243fdc) */
/* WARNING: Removing unreachable block (ram,0x000108243fe8) */
/* WARNING: Removing unreachable block (ram,0x000108243ff8) */
/* WARNING: Removing unreachable block (ram,0x000108243ffc) */
/* WARNING: Removing unreachable block (ram,0x000108244184) */
/* WARNING: Removing unreachable block (ram,0x000108244018) */
/* WARNING: Removing unreachable block (ram,0x000108244190) */
/* WARNING: Removing unreachable block (ram,0x0001082441a4) */
/* WARNING: Removing unreachable block (ram,0x0001082441e4) */
/* WARNING: Removing unreachable block (ram,0x0001082441e8) */
/* WARNING: Removing unreachable block (ram,0x0001082441f0) */
/* WARNING: Removing unreachable block (ram,0x00010824420c) */
/* WARNING: Removing unreachable block (ram,0x000108244274) */
/* WARNING: Removing unreachable block (ram,0x0001082442c4) */
/* WARNING: Removing unreachable block (ram,0x0001082442f8) */
/* WARNING: Removing unreachable block (ram,0x0001082442c8) */
/* WARNING: Removing unreachable block (ram,0x0001082442f0) */
/* WARNING: Removing unreachable block (ram,0x000108244280) */
/* WARNING: Removing unreachable block (ram,0x00010824428c) */
/* WARNING: Removing unreachable block (ram,0x000108244294) */
/* WARNING: Removing unreachable block (ram,0x0001082442a0) */
/* WARNING: Removing unreachable block (ram,0x0001082442a8) */
/* WARNING: Removing unreachable block (ram,0x0001082442b0) */
/* WARNING: Removing unreachable block (ram,0x0001082442b4) */
/* WARNING: Removing unreachable block (ram,0x0001082442b8) */
/* WARNING: Removing unreachable block (ram,0x0001082442bc) */
/* WARNING: Removing unreachable block (ram,0x000108244304) */
/* WARNING: Removing unreachable block (ram,0x000108244338) */
/* WARNING: Removing unreachable block (ram,0x00010824433c) */
/* WARNING: Removing unreachable block (ram,0x000108244348) */
/* WARNING: Removing unreachable block (ram,0x000108244314) */
/* WARNING: Removing unreachable block (ram,0x000108244364) */
/* WARNING: Removing unreachable block (ram,0x000108244370) */
/* WARNING: Removing unreachable block (ram,0x00010824431c) */
/* WARNING: Removing unreachable block (ram,0x00010824437c) */
/* WARNING: Removing unreachable block (ram,0x000108244388) */
/* WARNING: Removing unreachable block (ram,0x000108244320) */
/* WARNING: Removing unreachable block (ram,0x00010824438c) */
/* WARNING: Removing unreachable block (ram,0x000108244398) */
/* WARNING: Removing unreachable block (ram,0x0001082443ac) */
/* WARNING: Removing unreachable block (ram,0x0001082443c0) */
/* WARNING: Removing unreachable block (ram,0x0001082443dc) */
/* WARNING: Removing unreachable block (ram,0x0001082443d4) */
/* WARNING: Removing unreachable block (ram,0x0001082443e8) */
/* WARNING: Removing unreachable block (ram,0x0001082443f8) */
/* WARNING: Removing unreachable block (ram,0x000108244424) */
/* WARNING: Removing unreachable block (ram,0x000108244430) */
/* WARNING: Removing unreachable block (ram,0x000108244448) */
/* WARNING: Removing unreachable block (ram,0x00010824447c) */
/* WARNING: Removing unreachable block (ram,0x00010824445c) */
/* WARNING: Removing unreachable block (ram,0x000108244488) */
/* WARNING: Removing unreachable block (ram,0x00010824446c) */
/* WARNING: Removing unreachable block (ram,0x00010824448c) */
/* WARNING: Removing unreachable block (ram,0x00010824449c) */
/* WARNING: Removing unreachable block (ram,0x0001082444b8) */
/* WARNING: Removing unreachable block (ram,0x0001082444a8) */
/* WARNING: Removing unreachable block (ram,0x0001082444bc) */
/* WARNING: Removing unreachable block (ram,0x0001082444c4) */
/* WARNING: Removing unreachable block (ram,0x000108244504) */
/* WARNING: Removing unreachable block (ram,0x000108244188) */
/* WARNING: Removing unreachable block (ram,0x00010824443c) */
/* WARNING: Removing unreachable block (ram,0x0001082444d0) */
/* WARNING: Removing unreachable block (ram,0x000108244020) */
/* WARNING: Removing unreachable block (ram,0x000108244050) */
/* WARNING: Removing unreachable block (ram,0x000108244088) */
/* WARNING: Removing unreachable block (ram,0x0001082440b4) */
/* WARNING: Removing unreachable block (ram,0x00010824408c) */
/* WARNING: Removing unreachable block (ram,0x0001082440ac) */
/* WARNING: Removing unreachable block (ram,0x00010824405c) */
/* WARNING: Removing unreachable block (ram,0x000108244060) */
/* WARNING: Removing unreachable block (ram,0x00010824406c) */
/* WARNING: Removing unreachable block (ram,0x000108244070) */
/* WARNING: Removing unreachable block (ram,0x000108244078) */
/* WARNING: Removing unreachable block (ram,0x00010824407c) */
/* WARNING: Removing unreachable block (ram,0x000108244080) */
/* WARNING: Removing unreachable block (ram,0x0001082440c0) */
/* WARNING: Removing unreachable block (ram,0x0001082440c8) */
/* WARNING: Removing unreachable block (ram,0x0001082440e4) */
/* WARNING: Removing unreachable block (ram,0x0001082440d0) */
/* WARNING: Removing unreachable block (ram,0x0001082440f4) */
/* WARNING: Removing unreachable block (ram,0x000108244100) */
/* WARNING: Removing unreachable block (ram,0x00010824411c) */
/* WARNING: Removing unreachable block (ram,0x000108244128) */
/* WARNING: Removing unreachable block (ram,0x000108244140) */
/* WARNING: Removing unreachable block (ram,0x000108244138) */
/* WARNING: Removing unreachable block (ram,0x00010824414c) */
/* WARNING: Removing unreachable block (ram,0x000108244160) */
/* WARNING: Removing unreachable block (ram,0x0001082444f4) */
/* WARNING: Removing unreachable block (ram,0x000108244500) */
/* WARNING: Removing unreachable block (ram,0x000108244510) */
/* WARNING: Removing unreachable block (ram,0x000108244514) */
/* WARNING: Removing unreachable block (ram,0x000108244540) */
/* WARNING: Removing unreachable block (ram,0x00010824451c) */
/* WARNING: Removing unreachable block (ram,0x000108244528) */
/* WARNING: Removing unreachable block (ram,0x000108244520) */
/* WARNING: Removing unreachable block (ram,0x000108244538) */
/* WARNING: Removing unreachable block (ram,0x000108243720) */
/* WARNING: Removing unreachable block (ram,0x000108243750) */
/* WARNING: Removing unreachable block (ram,0x000108243760) */
/* WARNING: Removing unreachable block (ram,0x000108243764) */
/* WARNING: Removing unreachable block (ram,0x000108243768) */
/* WARNING: Removing unreachable block (ram,0x000108243778) */
/* WARNING: Removing unreachable block (ram,0x00010824376c) */
/* WARNING: Removing unreachable block (ram,0x00010824377c) */
/* WARNING: Removing unreachable block (ram,0x000108243784) */
/* WARNING: Removing unreachable block (ram,0x000108243798) */
/* WARNING: Removing unreachable block (ram,0x0001082437c0) */
/* WARNING: Removing unreachable block (ram,0x0001082437d0) */
/* WARNING: Removing unreachable block (ram,0x0001082437dc) */
/* WARNING: Removing unreachable block (ram,0x0001082437f4) */
/* WARNING: Removing unreachable block (ram,0x000108243808) */
/* WARNING: Removing unreachable block (ram,0x000108243814) */
/* WARNING: Removing unreachable block (ram,0x000108243820) */
/* WARNING: Removing unreachable block (ram,0x000108243824) */
/* WARNING: Removing unreachable block (ram,0x000108243828) */
/* WARNING: Removing unreachable block (ram,0x00010824382c) */
/* WARNING: Removing unreachable block (ram,0x000108243870) */
/* WARNING: Removing unreachable block (ram,0x0001082438ac) */
/* WARNING: Removing unreachable block (ram,0x0001082438d8) */
/* WARNING: Removing unreachable block (ram,0x0001082438b0) */
/* WARNING: Removing unreachable block (ram,0x0001082438d0) */
/* WARNING: Removing unreachable block (ram,0x00010824387c) */
/* WARNING: Removing unreachable block (ram,0x000108243884) */
/* WARNING: Removing unreachable block (ram,0x000108243890) */
/* WARNING: Removing unreachable block (ram,0x000108243894) */
/* WARNING: Removing unreachable block (ram,0x00010824389c) */
/* WARNING: Removing unreachable block (ram,0x0001082438a0) */
/* WARNING: Removing unreachable block (ram,0x0001082438a4) */
/* WARNING: Removing unreachable block (ram,0x0001082438e0) */
/* WARNING: Removing unreachable block (ram,0x0001082438e8) */
/* WARNING: Removing unreachable block (ram,0x000108243904) */
/* WARNING: Removing unreachable block (ram,0x0001082438f0) */
/* WARNING: Removing unreachable block (ram,0x000108243914) */
/* WARNING: Removing unreachable block (ram,0x000108243920) */
/* WARNING: Removing unreachable block (ram,0x000108243938) */
/* WARNING: Removing unreachable block (ram,0x000108243944) */
/* WARNING: Removing unreachable block (ram,0x00010824395c) */
/* WARNING: Removing unreachable block (ram,0x000108243954) */
/* WARNING: Removing unreachable block (ram,0x000108243968) */
/* WARNING: Removing unreachable block (ram,0x00010824397c) */
/* WARNING: Removing unreachable block (ram,0x000108243994) */
/* WARNING: Removing unreachable block (ram,0x0001082439ac) */
/* WARNING: Removing unreachable block (ram,0x0001082439d0) */
/* WARNING: Removing unreachable block (ram,0x0001082439d8) */
/* WARNING: Removing unreachable block (ram,0x0001082439e8) */
/* WARNING: Removing unreachable block (ram,0x0001082439ec) */
/* WARNING: Removing unreachable block (ram,0x0001082439f4) */
/* WARNING: Removing unreachable block (ram,0x0001082439f8) */
/* WARNING: Removing unreachable block (ram,0x000108243a00) */
/* WARNING: Removing unreachable block (ram,0x000108243a04) */
/* WARNING: Removing unreachable block (ram,0x000108243a48) */
/* WARNING: Removing unreachable block (ram,0x000108243a08) */
/* WARNING: Removing unreachable block (ram,0x000108243a14) */
/* WARNING: Removing unreachable block (ram,0x000108243a1c) */
/* WARNING: Removing unreachable block (ram,0x000108243a24) */
/* WARNING: Removing unreachable block (ram,0x000108243a2c) */
/* WARNING: Removing unreachable block (ram,0x000108243a34) */
/* WARNING: Removing unreachable block (ram,0x000108243a68) */
/* WARNING: Removing unreachable block (ram,0x000108243a3c) */
/* WARNING: Removing unreachable block (ram,0x000108243a70) */
/* WARNING: Removing unreachable block (ram,0x000108243b00) */
/* WARNING: Removing unreachable block (ram,0x000108243a4c) */
/* WARNING: Removing unreachable block (ram,0x000108243a88) */
/* WARNING: Removing unreachable block (ram,0x000108243a8c) */
/* WARNING: Removing unreachable block (ram,0x000108243a98) */
/* WARNING: Removing unreachable block (ram,0x000108243aa0) */
/* WARNING: Removing unreachable block (ram,0x000108243aac) */
/* WARNING: Removing unreachable block (ram,0x000108243ab4) */
/* WARNING: Removing unreachable block (ram,0x000108243abc) */
/* WARNING: Removing unreachable block (ram,0x000108243ac0) */
/* WARNING: Removing unreachable block (ram,0x000108243ad0) */
/* WARNING: Removing unreachable block (ram,0x000108243af0) */
/* WARNING: Removing unreachable block (ram,0x000108243af4) */
/* WARNING: Removing unreachable block (ram,0x000108243afc) */
/* WARNING: Removing unreachable block (ram,0x000108243b08) */
/* WARNING: Removing unreachable block (ram,0x000108243b18) */
/* WARNING: Removing unreachable block (ram,0x000108243b28) */
/* WARNING: Removing unreachable block (ram,0x000108243b2c) */

void FUN_1082433e8(int param_1,int param_2,long param_3,int param_4,undefined8 param_5,uint param_6,
                  undefined8 param_7,uint *param_8,undefined4 param_9,undefined4 param_10,
                  long param_11,long param_12,int param_13,undefined4 param_14,int *param_15)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  uint *puStack_1a0;
  ulong uStack_198;
  long alStack_a0 [5];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar20 = 1 << (ulong)(param_6 & 0x1f);
  uVar12 = (param_1 + iVar20) - 1U >> (ulong)(param_6 & 0x1f);
  uVar16 = 1;
  if (param_6 != 0) {
    uVar16 = uVar12 * ((param_2 + iVar20) - 1U >> (ulong)(param_6 & 0x1f));
  }
  uVar28 = (ulong)uVar16;
  FUN_108242d1c(uVar28,param_7);
  if (uVar28 == 0) {
    if (*(int *)(param_12 + 0x88) != 0) goto LAB_1082447dc;
LAB_108243e94:
    uVar13 = 1;
LAB_108243e98:
    *(undefined4 *)(param_12 + 0x88) = uVar13;
  }
  else {
    plVar22 = *(long **)(param_3 + 8);
    if (plVar22 == (long *)0x0) {
      FUN_108242e6c(uVar28);
    }
    else {
      lVar23 = *(long *)(uVar28 + 8);
      lVar32 = plVar22[1];
      lVar33 = plVar22[2];
      FUN_108242e6c();
      if (lVar32 != 0) {
        iVar10 = 0;
        iVar20 = 0;
        lVar33 = lVar32 + (long)(int)lVar33 * 8;
        do {
          while( true ) {
            FUN_108242f00(*(undefined8 *)
                           (lVar23 + (long)(int)((iVar10 >> (param_6 & 0x1f)) +
                                                (iVar20 >> (param_6 & 0x1f)) * uVar12) * 8),lVar32,0
                          ,0);
            for (iVar10 = iVar10 + (uint)*(ushort *)(lVar32 + 2); param_1 <= iVar10;
                iVar10 = iVar10 - param_1) {
              iVar20 = iVar20 + 1;
            }
            lVar32 = lVar32 + 8;
            if (lVar32 == lVar33) break;
            if (lVar32 == 0) goto LAB_108243548;
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) break;
          lVar32 = plVar22[1];
          lVar33 = lVar32 + (long)*(int *)(plVar22 + 2) * 8;
        } while (lVar32 != 0);
      }
    }
LAB_108243548:
    puVar21 = *(undefined8 **)(uVar28 + 8);
    *param_8 = 0;
    if (0 < *(int *)(uVar28 + 4)) {
      plVar22 = (long *)*puVar21;
      goto SUB_108244834;
    }
    uVar16 = 0;
    param_4 = param_4 * param_4 * param_4;
    lVar32 = 500000;
    if (param_4 < 0) {
      lVar32 = -500000;
    }
    auVar6 = SEXT816(lVar32 + param_4 * 99) * SEXT816(0x431bde82d7b634db);
    iVar20 = (int)(auVar6._8_8_ >> 0x12) - (auVar6._12_4_ >> 0x1f);
    lVar32 = *(long *)(param_8 + 2);
    if (iVar20 < 0) {
      uStack_198 = 0x900000000;
      puVar8 = (uint *)0x280;
      _malloc();
      puStack_1a0 = puVar8;
      if (puVar8 == (uint *)0x0) goto LAB_108243e8c;
      _free();
      uVar16 = *param_8;
      if (-1 < iVar20 + 1) {
        lVar32 = *(long *)(param_8 + 2);
        goto LAB_108243b50;
      }
LAB_108244544:
      lVar33 = *(long *)(uVar28 + 8);
      lVar32 = *(long *)(param_8 + 2);
      uVar12 = param_8[1];
      uVar24 = (ulong)uVar12;
      if ((int)uVar16 < 2) {
        if (0 < (int)uVar12) {
          _bzero(param_11,uVar24 << 2);
          goto LAB_10824462c;
        }
LAB_108244798:
        FUN_108242e6c(param_8);
        *param_8 = uVar16;
      }
      else {
        if ((int)uVar12 < 1) goto LAB_108244798;
        uVar19 = 0;
        do {
          if (*(long *)(lVar33 + uVar19 * 8) == 0) {
            puVar3 = (undefined4 *)(param_11 + uVar19 * 4);
            *puVar3 = puVar3[-1];
          }
          else {
            uVar25 = 0;
            uVar29 = 0;
            uVar30 = 0x7fffffffffffffff;
            do {
              lVar26 = *(long *)(lVar32 + uVar25 * 8);
              lVar23 = 0x7fffffffffffffff;
              if (*(long *)(lVar26 + 0xcb8) <= (long)(uVar30 ^ 0x7fffffffffffffff) ||
                  0x7fffffffffffffff < uVar30) {
                lVar23 = *(long *)(lVar26 + 0xcb8) + uVar30;
              }
              lVar9 = lVar26;
              func_0x00010824492c(lVar26,*(undefined8 *)(lVar33 + uVar19 * 8),lVar23,alStack_a0,
                                  &puStack_1a0);
              if ((int)lVar9 != 0) {
                uVar30 = alStack_a0[0] - *(long *)(lVar26 + 0xcb8);
                uVar29 = uVar25;
              }
              uVar25 = uVar25 + 1;
            } while (uVar16 != uVar25);
            *(int *)(param_11 + uVar19 * 4) = (int)uVar29;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar24);
LAB_10824462c:
        FUN_108242e6c(param_8);
        uVar19 = 0;
        *param_8 = uVar16;
        do {
          plVar22 = *(long **)(lVar33 + uVar19 * 8);
          if (plVar22 != (long *)0x0) {
            plVar27 = *(long **)(lVar32 + (long)*(int *)(param_11 + uVar19 * 4) * 8);
            lVar23 = 0xce8;
            do {
              iVar20 = (int)lVar23 + -0xce8;
              if (iVar20 < 2) {
                if ((int)lVar23 == 0xce8) {
                  uVar16 = (1 << (ulong)(*(uint *)(plVar27 + 0x195) & 0x1f)) + 0x118;
                  if ((int)*(uint *)(plVar27 + 0x195) < 1) {
                    uVar16 = 0x118;
                  }
                  uVar25 = (ulong)uVar16;
                  plVar11 = (long *)*plVar27;
                  plVar14 = (long *)*plVar22;
                }
                else {
                  uVar25 = 0x100;
                  plVar11 = plVar27 + 1;
                  plVar14 = plVar22 + 1;
                }
              }
              else {
                plVar11 = plVar22 + 0x101;
                if (iVar20 != 3) {
                  plVar11 = plVar22 + 0x181;
                }
                plVar4 = plVar27 + 0x101;
                uVar16 = 0x100;
                if (iVar20 != 3) {
                  uVar16 = 0x28;
                  plVar4 = plVar27 + 0x181;
                }
                uVar12 = 0x100;
                plVar14 = plVar22 + 0x81;
                if (iVar20 != 2) {
                  uVar12 = uVar16;
                  plVar14 = plVar11;
                }
                uVar25 = (ulong)uVar12;
                plVar11 = plVar27 + 0x81;
                if (iVar20 != 2) {
                  plVar11 = plVar4;
                }
              }
              if (*(char *)((long)plVar22 + lVar23) != '\0') {
                if (*(char *)((long)plVar27 + lVar23) == '\0') {
                  _memcpy(plVar11,plVar14,-(uVar25 >> 0x1f) & 0xfffffffc00000000 | uVar25 << 2);
                }
                else {
                  (*pcRam000000011386a050)(plVar14);
                }
              }
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0xced);
            lVar26 = 0xce8;
            lVar23 = 0xcac;
            do {
              sVar17 = *(short *)((long)plVar22 + lVar23);
              if (sVar17 != *(short *)((long)plVar27 + lVar23)) {
                sVar17 = -1;
              }
              *(short *)((long)plVar27 + lVar23) = sVar17;
              if (*(char *)((long)plVar22 + lVar26) == '\0') {
                bVar7 = *(char *)((long)plVar27 + lVar26) != '\0';
              }
              else {
                bVar7 = true;
              }
              *(bool *)((long)plVar27 + lVar26) = bVar7;
              lVar23 = lVar23 + 2;
              lVar26 = lVar26 + 1;
            } while (lVar23 != 0xcb6);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar24);
      }
      if (param_13 == 0) goto LAB_1082447dc;
      param_13 = *param_15 + param_13;
      *param_15 = param_13;
      if (((*(code **)(param_12 + 0x90) == (code *)0x0) ||
          ((**(code **)(param_12 + 0x90))(param_13,param_12), param_13 != 0)) ||
         (*(int *)(param_12 + 0x88) != 0)) goto LAB_1082447dc;
      uVar13 = 10;
      goto LAB_108243e98;
    }
LAB_108243b50:
    uVar12 = uVar16 * uVar16;
    uStack_198 = (ulong)uVar12 << 0x20;
    if (uVar12 >> 0x1c == 0) {
      puVar8 = (uint *)((ulong)(uVar12 + 1) << 6);
      _malloc();
      puStack_1a0 = puVar8;
      if (puVar8 != (uint *)0x0) {
        if (0 < (int)uVar16) {
          uVar12 = 0;
          do {
            uVar15 = uVar12 + 1;
            uVar18 = uVar15;
            if ((int)uVar15 < (int)uVar16) {
              do {
                FUN_108244c10(&puStack_1a0,lVar32,uVar12,uVar18,0);
                uVar18 = uVar18 + 1;
              } while (uVar16 != uVar18);
            }
            uVar12 = uVar15;
          } while (uVar15 != uVar16);
          uVar24 = uStack_198 & 0xffffffff;
          puVar8 = puStack_1a0;
          iVar20 = (int)uStack_198;
          while (puStack_1a0 = puVar8, 0 < iVar20) {
            uVar16 = *puVar8;
            uVar12 = puVar8[1];
            lVar23 = (long)(int)uVar16;
            plVar22 = *(long **)(lVar32 + (long)(int)uVar12 * 8);
            plVar27 = *(long **)(lVar32 + lVar23 * 8);
            lVar33 = 0xce8;
            do {
              iVar20 = (int)lVar33 + -0xce8;
              if (iVar20 < 2) {
                if ((int)lVar33 == 0xce8) {
                  uVar15 = (1 << (ulong)(*(uint *)(plVar27 + 0x195) & 0x1f)) + 0x118;
                  if ((int)*(uint *)(plVar27 + 0x195) < 1) {
                    uVar15 = 0x118;
                  }
                  uVar19 = (ulong)uVar15;
                  plVar11 = (long *)*plVar27;
                  plVar14 = (long *)*plVar22;
                }
                else {
                  uVar19 = 0x100;
                  plVar11 = plVar27 + 1;
                  plVar14 = plVar22 + 1;
                }
              }
              else {
                plVar11 = plVar22 + 0x101;
                if (iVar20 != 3) {
                  plVar11 = plVar22 + 0x181;
                }
                plVar4 = plVar27 + 0x101;
                uVar15 = 0x100;
                if (iVar20 != 3) {
                  uVar15 = 0x28;
                  plVar4 = plVar27 + 0x181;
                }
                uVar18 = 0x100;
                plVar14 = plVar22 + 0x81;
                if (iVar20 != 2) {
                  uVar18 = uVar15;
                  plVar14 = plVar11;
                }
                uVar19 = (ulong)uVar18;
                plVar11 = plVar27 + 0x81;
                if (iVar20 != 2) {
                  plVar11 = plVar4;
                }
              }
              if (*(char *)((long)plVar22 + lVar33) != '\0') {
                if (*(char *)((long)plVar27 + lVar33) == '\0') {
                  _memcpy(plVar11,plVar14,-(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2);
                }
                else {
                  (*pcRam000000011386a050)(plVar14);
                }
              }
              lVar33 = lVar33 + 1;
            } while (lVar33 != 0xced);
            lVar26 = 0xce8;
            lVar33 = 0xcac;
            do {
              sVar17 = *(short *)((long)plVar22 + lVar33);
              if (sVar17 != *(short *)((long)plVar27 + lVar33)) {
                sVar17 = -1;
              }
              *(short *)((long)plVar27 + lVar33) = sVar17;
              if (*(char *)((long)plVar22 + lVar26) == '\0') {
                bVar7 = *(char *)((long)plVar27 + lVar26) != '\0';
              }
              else {
                bVar7 = true;
              }
              *(bool *)((long)plVar27 + lVar26) = bVar7;
              lVar33 = lVar33 + 2;
              lVar26 = lVar26 + 1;
            } while (lVar33 != 0xcb6);
            lVar33 = 0;
            lVar26 = *(long *)(lVar32 + lVar23 * 8);
            *(undefined8 *)(lVar26 + 0xcb8) = *(undefined8 *)(puVar8 + 4);
            do {
              *(undefined8 *)(lVar26 + 0xcc0 + lVar33) =
                   *(undefined8 *)((long)puVar8 + lVar33 + 0x18);
              lVar33 = lVar33 + 8;
            } while (lVar33 != 0x28);
            iVar20 = 0;
            uVar15 = *param_8;
            *(undefined8 *)(*(long *)(param_8 + 2) + (long)(int)uVar12 * 8) =
                 *(undefined8 *)(*(long *)(param_8 + 2) + (long)(int)uVar15 * 8 + -8);
            *param_8 = uVar15 - 1;
            do {
              puVar1 = puVar8 + (long)iVar20 * 0x10;
              uVar15 = *puVar1;
              if ((uVar15 == uVar16) ||
                 (uVar18 = puVar1[1], (uVar18 == uVar12 || uVar15 == uVar12) || uVar18 == uVar16)) {
                puVar2 = puVar8 + (long)(int)uVar24 * 0x10 + -0x10;
                uVar35 = *(undefined8 *)(puVar2 + 2);
                uVar34 = *(undefined8 *)puVar2;
                uVar37 = *(undefined8 *)(puVar2 + 6);
                uVar36 = *(undefined8 *)(puVar2 + 4);
                uVar38 = *(undefined8 *)(puVar2 + 8);
                uVar40 = *(undefined8 *)(puVar2 + 0xe);
                uVar39 = *(undefined8 *)(puVar2 + 0xc);
                *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(puVar2 + 10);
                *(undefined8 *)(puVar1 + 8) = uVar38;
                *(undefined8 *)(puVar1 + 0xe) = uVar40;
                *(undefined8 *)(puVar1 + 0xc) = uVar39;
                *(undefined8 *)(puVar1 + 2) = uVar35;
                *(undefined8 *)puVar1 = uVar34;
                *(undefined8 *)(puVar1 + 6) = uVar37;
                *(undefined8 *)(puVar1 + 4) = uVar36;
                uVar24 = (ulong)((int)uVar24 - 1);
              }
              else {
                uVar5 = *param_8;
                if (uVar15 == uVar5) {
                  *puVar1 = uVar12;
                  uVar15 = uVar12;
                }
                if (uVar18 == uVar5) {
                  puVar1[1] = uVar12;
                  uVar18 = uVar12;
                }
                if ((int)uVar18 < (int)uVar15) {
                  *puVar1 = uVar18;
                  puVar1[1] = uVar15;
                }
                if (*(long *)(puVar1 + 2) < *(long *)(puVar8 + 2)) {
                  uVar37 = *(undefined8 *)(puVar8 + 10);
                  uVar36 = *(undefined8 *)(puVar8 + 8);
                  uVar35 = *(undefined8 *)(puVar8 + 0xe);
                  uVar34 = *(undefined8 *)(puVar8 + 0xc);
                  uVar41 = *(undefined8 *)(puVar8 + 2);
                  uVar40 = *(undefined8 *)puVar8;
                  uVar39 = *(undefined8 *)(puVar8 + 6);
                  uVar38 = *(undefined8 *)(puVar8 + 4);
                  uVar42 = *(undefined8 *)(puVar1 + 8);
                  uVar44 = *(undefined8 *)(puVar1 + 0xe);
                  uVar43 = *(undefined8 *)(puVar1 + 0xc);
                  uVar48 = *(undefined8 *)(puVar1 + 2);
                  uVar47 = *(undefined8 *)puVar1;
                  uVar46 = *(undefined8 *)(puVar1 + 6);
                  uVar45 = *(undefined8 *)(puVar1 + 4);
                  *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar1 + 10);
                  *(undefined8 *)(puVar8 + 8) = uVar42;
                  *(undefined8 *)(puVar8 + 0xe) = uVar44;
                  *(undefined8 *)(puVar8 + 0xc) = uVar43;
                  *(undefined8 *)(puVar8 + 2) = uVar48;
                  *(undefined8 *)puVar8 = uVar47;
                  *(undefined8 *)(puVar8 + 6) = uVar46;
                  *(undefined8 *)(puVar8 + 4) = uVar45;
                  *(undefined8 *)(puVar1 + 2) = uVar41;
                  *(undefined8 *)puVar1 = uVar40;
                  *(undefined8 *)(puVar1 + 6) = uVar39;
                  *(undefined8 *)(puVar1 + 4) = uVar38;
                  *(undefined8 *)(puVar1 + 10) = uVar37;
                  *(undefined8 *)(puVar1 + 8) = uVar36;
                  *(undefined8 *)(puVar1 + 0xe) = uVar35;
                  *(undefined8 *)(puVar1 + 0xc) = uVar34;
                }
                iVar20 = iVar20 + 1;
              }
            } while (iVar20 < (int)uVar24);
            uVar12 = *param_8;
            uStack_198 = CONCAT44(uStack_198._4_4_,(int)uVar24);
            if (0 < (int)uVar12) {
              uVar15 = 0;
              do {
                if (uVar16 != uVar15) {
                  FUN_108244c10(&puStack_1a0,*(undefined8 *)(param_8 + 2),lVar23,uVar15,0);
                  uVar12 = *param_8;
                }
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < (int)uVar12);
              uVar24 = uStack_198 & 0xffffffff;
            }
            puVar8 = puStack_1a0;
            iVar20 = (int)uVar24;
          }
        }
        _free(puStack_1a0);
        uVar16 = *param_8;
        goto LAB_108244544;
      }
    }
LAB_108243e8c:
    if (*(int *)(param_12 + 0x88) == 0) goto LAB_108243e94;
  }
LAB_1082447dc:
  _free(uVar28);
  plVar22 = (long *)(ulong)(*(int *)(param_12 + 0x88) == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
SUB_108244834:
  lVar32 = 0;
  lVar33 = 0xcac;
  do {
    iVar20 = (int)lVar32;
    if (iVar20 < 2) {
      if (iVar20 == 0) {
        plVar27 = (long *)*plVar22;
        iVar10 = (1 << (ulong)(*(uint *)(plVar22 + 0x195) & 0x1f)) + 0x118;
        if ((int)*(uint *)(plVar22 + 0x195) < 1) {
          iVar10 = 0x118;
        }
      }
      else {
        plVar27 = plVar22 + 1;
        iVar10 = 0x100;
      }
    }
    else {
      plVar14 = plVar22 + 0x101;
      if (iVar20 != 3) {
        plVar14 = plVar22 + 0x181;
      }
      iVar31 = 0x100;
      if (iVar20 != 3) {
        iVar31 = 0x28;
      }
      plVar27 = plVar22 + 0x81;
      iVar10 = 0x100;
      if (iVar20 != 2) {
        plVar27 = plVar14;
        iVar10 = iVar31;
      }
    }
    FUN_108243250(plVar27,iVar10,(long)plVar22 + lVar33,(long)plVar22 + lVar32 + 0xce8);
    plVar22[lVar32 + 0x198] = (long)plVar27;
    lVar32 = lVar32 + 1;
    lVar33 = lVar33 + 2;
  } while (lVar33 != 0xcb6);
  plVar22[0x197] =
       plVar22[0x198] + plVar22[0x19a] + plVar22[0x199] + plVar22[0x19b] + plVar22[0x19c];
  return;
}



/* Entry: 108244c10; end: 108244d3b;  */

undefined8 FUN_108244c10(long *param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((int)param_1[1] != *(int *)((long)param_1 + 0xc)) {
    iStack_9c = param_3;
    if (param_3 <= param_4) {
      iStack_9c = param_4;
    }
    iStack_a0 = param_3;
    if (param_4 <= param_3) {
      iStack_a0 = param_4;
    }
    uVar3 = *(undefined8 *)(param_2 + (long)iStack_a0 * 8);
    func_0x000108244cdc(uVar3,*(undefined8 *)(param_2 + (long)iStack_9c * 8),param_5,&iStack_a0);
    if ((int)uVar3 == 0) {
      uStack_98 = 0;
    }
    else {
      lVar2 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar2 + 1;
      puVar4 = (undefined8 *)(*param_1 + (long)(int)lVar2 * 0x40);
      puVar4[1] = uStack_98;
      *puVar4 = CONCAT44(iStack_9c,iStack_a0);
      puVar4[3] = uStack_88;
      puVar4[2] = uStack_90;
      puVar4[5] = uStack_78;
      puVar4[4] = uStack_80;
      puVar4[7] = uStack_68;
      puVar4[6] = uStack_70;
      puVar4 = (undefined8 *)*param_1;
      iVar1 = (int)param_1[1];
      if ((long)puVar4[(long)iVar1 * 8 + -7] < (long)puVar4[1]) {
        uVar7 = puVar4[5];
        uVar6 = puVar4[4];
        uVar5 = puVar4[7];
        uVar3 = puVar4[6];
        uVar11 = puVar4[1];
        uVar10 = *puVar4;
        uVar9 = puVar4[3];
        uVar8 = puVar4[2];
        uVar12 = puVar4[(long)iVar1 * 8 + -4];
        uVar14 = puVar4[(long)iVar1 * 8 + -1];
        uVar13 = puVar4[(long)iVar1 * 8 + -2];
        uVar18 = puVar4[(long)iVar1 * 8 + -7];
        uVar17 = puVar4[(long)iVar1 * 8 + -8];
        uVar16 = puVar4[(long)iVar1 * 8 + -5];
        uVar15 = puVar4[(long)iVar1 * 8 + -6];
        puVar4[5] = puVar4[(long)iVar1 * 8 + -3];
        puVar4[4] = uVar12;
        puVar4[7] = uVar14;
        puVar4[6] = uVar13;
        puVar4[1] = uVar18;
        *puVar4 = uVar17;
        puVar4[3] = uVar16;
        puVar4[2] = uVar15;
        puVar4[(long)iVar1 * 8 + -7] = uVar11;
        puVar4[(long)iVar1 * 8 + -8] = uVar10;
        puVar4[(long)iVar1 * 8 + -5] = uVar9;
        puVar4[(long)iVar1 * 8 + -6] = uVar8;
        puVar4[(long)iVar1 * 8 + -3] = uVar7;
        puVar4[(long)iVar1 * 8 + -4] = uVar6;
        puVar4[(long)iVar1 * 8 + -1] = uVar5;
        puVar4[(long)iVar1 * 8 + -2] = uVar3;
      }
    }
    return uStack_98;
  }
  return 0;
}



/* Entry: 108244d3c; end: 108244def;  */

void FUN_108244d3c(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 10);
  *param_1 = 0;
  param_1[1] = param_2;
  iVar2 = *(int *)(lVar3 + 0x3c);
  uVar5 = *(undefined8 *)(lVar3 + 0x5c70);
  *(long *)(param_1 + 0x10) =
       *(long *)(lVar3 + 0x5c68) + (long)*(int *)(lVar3 + 0x38) * (long)(int)param_2 * 4;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  *(long *)(param_1 + 0xc) =
       *(long *)(lVar3 + 0x5c60) + (long)(int)(*(int *)(lVar3 + 0x30) * param_2) * 4;
  *(long *)(param_1 + 0xe) = lVar3 + (long)(int)(iVar2 - 1U & param_2) * 0x30 + 0x70;
  uVar5 = *(undefined8 *)(lVar3 + 0x5c78);
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(lVar3 + 0x5c80);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  uVar1 = 0x7f;
  if (0 < (int)param_1[1]) {
    uVar1 = 0x81;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x5e) + -1) = uVar1;
  *(undefined1 *)(*(long *)(param_1 + 0x5c) + -1) = uVar1;
  *(undefined1 *)(*(long *)(param_1 + 0x5a) + -1) = uVar1;
  puVar4 = *(undefined8 **)(param_1 + 0x5a);
  *puVar4 = 0x8181818181818181;
  puVar4[1] = 0x8181818181818181;
  **(undefined8 **)(param_1 + 0x5c) = 0x8181818181818181;
  **(undefined8 **)(param_1 + 0x5e) = 0x8181818181818181;
  param_1[0x32] = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    param_1[0x56] = 0;
  }
  return;
}



/* Entry: 108244df0; end: 108244f67;  */

void FUN_108244df0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_2 + 0x207U & 0xffffffffffffffe0;
  *(ulong *)(param_2 + 8) = uVar2;
  *(ulong *)(param_2 + 0x10) = uVar2 + 0x200;
  *(ulong *)(param_2 + 0x18) = uVar2 + 0x400;
  *(ulong *)(param_2 + 0x20) = uVar2 + 0x600;
  *(long *)(param_2 + 0x28) = param_1;
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_1 + 0x5c88);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_1 + 0x218);
  uVar2 = param_2 + 0x1b0U & 0xffffffffffffffe0;
  *(ulong *)(param_2 + 0x170) = uVar2 + 0x20;
  *(ulong *)(param_2 + 0x178) = uVar2 + 0x30;
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_1 + 0x5c90);
  *(ulong *)(param_2 + 0x168) = uVar2;
  FUN_108244d3c(param_2,0);
  iVar1 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
  *(int *)(param_2 + 0x150) = iVar1;
  *(int *)(param_2 + 0x14c) = iVar1;
  lVar3 = *(long *)(param_2 + 0x28);
  _memset(*(undefined8 *)(lVar3 + 0x5c78),0x7f,(long)*(int *)(lVar3 + 0x30) << 5);
  _bzero(*(undefined8 *)(lVar3 + 0x5c70),(long)*(int *)(lVar3 + 0x30) << 2);
  if (*(long *)(lVar3 + 0x5c90) != 0) {
    _bzero(*(long *)(lVar3 + 0x5c90),(long)*(int *)(lVar3 + 0x30) << 2);
  }
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined4 *)(param_2 + 0x148) = 0;
  return;
}



/* Entry: 108244f68; end: 10824558f;  */

void FUN_108244f68(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  
  iVar8 = *param_1;
  iVar9 = param_1[1];
  lVar26 = *(long *)(*(long *)(param_1 + 10) + 8);
  lVar1 = *(long *)(lVar26 + 0x10) + (long)((iVar8 + *(int *)(lVar26 + 0x28) * iVar9) * 0x10);
  iVar10 = (iVar8 + *(int *)(lVar26 + 0x2c) * iVar9) * 8;
  lVar2 = *(long *)(lVar26 + 0x18) + (long)iVar10;
  lVar3 = *(long *)(lVar26 + 0x20) + (long)iVar10;
  uVar11 = *(int *)(lVar26 + 8) + iVar8 * -0x10;
  uVar6 = uVar11;
  if (0xf < (int)uVar11) {
    uVar6 = 0x10;
  }
  uVar13 = (ulong)uVar6;
  uVar12 = *(int *)(lVar26 + 0xc) + iVar9 * -0x10;
  uVar7 = uVar12;
  if (0xf < (int)uVar12) {
    uVar7 = 0x10;
  }
  uVar23 = (ulong)uVar7;
  uVar4 = (int)(uVar6 + 1) >> 1;
  uVar24 = (ulong)uVar4;
  uVar5 = (int)(uVar7 + 1) >> 1;
  uVar25 = (ulong)uVar5;
  func_0x000108245354(lVar1,*(int *)(lVar26 + 0x28),*(undefined8 *)(param_1 + 2),uVar13,uVar23,0x10)
  ;
  func_0x000108245354(lVar2,*(undefined4 *)(lVar26 + 0x2c),*(long *)(param_1 + 2) + 0x10,uVar24,
                      uVar25,8);
  func_0x000108245354(lVar3,*(undefined4 *)(lVar26 + 0x2c),*(long *)(param_1 + 2) + 0x18,uVar24,
                      uVar25,8);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (iVar8 == 0) {
    func_0x000108244d98(param_1);
  }
  else {
    if (iVar9 == 0) {
      uVar14 = 0x7f;
      *(undefined1 *)(*(long *)(param_1 + 0x5e) + -1) = 0x7f;
      *(undefined1 *)(*(long *)(param_1 + 0x5c) + -1) = 0x7f;
      lVar18 = 0x168;
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + -1) =
           *(undefined1 *)(lVar1 + (int)~*(uint *)(lVar26 + 0x28));
      *(undefined1 *)(*(long *)(param_1 + 0x5c) + -1) =
           *(undefined1 *)(lVar2 + (int)~*(uint *)(lVar26 + 0x2c));
      uVar14 = *(undefined1 *)(lVar3 + (int)~*(uint *)(lVar26 + 0x2c));
      lVar18 = 0x178;
    }
    *(undefined1 *)(*(long *)((long)param_1 + lVar18) + -1) = uVar14;
    puVar15 = *(undefined1 **)(param_1 + 0x5a);
    if ((int)uVar12 < 1) {
      uVar23 = 0;
LAB_108245120:
      _memset(puVar15 + uVar23,puVar15[(long)(int)uVar7 + -1],0x10 - uVar23);
    }
    else {
      iVar8 = *(int *)(lVar26 + 0x28);
      puVar19 = (undefined1 *)(lVar1 + -1);
      puVar21 = puVar15;
      uVar22 = uVar23;
      do {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + iVar8;
        uVar22 = uVar22 - 1;
        puVar21 = puVar21 + 1;
      } while (uVar22 != 0);
      if (uVar12 < 0x10) goto LAB_108245120;
    }
    plVar16 = *(long **)(param_1 + 0x5c);
    if ((int)uVar5 < 1) {
      uVar25 = 0;
      uVar23 = (ulong)(int)uVar5;
      *plVar16 = (ulong)*(byte *)((long)plVar16 + (long)(int)uVar5 + -1) * 0x101010101010101;
      lVar18 = *(long *)(param_1 + 0x5e);
    }
    else {
      iVar8 = *(int *)(lVar26 + 0x2c);
      puVar15 = (undefined1 *)(lVar2 + -1);
      plVar20 = plVar16;
      uVar23 = uVar25;
      do {
        *(undefined1 *)plVar20 = *puVar15;
        puVar15 = puVar15 + iVar8;
        uVar23 = uVar23 - 1;
        plVar20 = (long *)((long)plVar20 + 1);
      } while (uVar23 != 0);
      if (uVar5 < 8) {
        _memset((undefined1 *)((long)plVar16 + uVar25),((undefined1 *)((long)plVar16 + uVar25))[-1],
                8 - uVar25);
      }
      uVar23 = 0;
      lVar18 = *(long *)(param_1 + 0x5e);
      iVar8 = *(int *)(lVar26 + 0x2c);
      puVar15 = (undefined1 *)(lVar3 + -1);
      do {
        *(undefined1 *)(lVar18 + uVar23) = *puVar15;
        uVar23 = uVar23 + 1;
        puVar15 = puVar15 + iVar8;
      } while (uVar25 != uVar23);
      uVar23 = uVar25;
      if (7 < uVar5) goto LAB_1082451f4;
    }
    _memset(lVar18 + uVar25,*(undefined1 *)(lVar18 + uVar23 + -1),8 - uVar25);
  }
LAB_1082451f4:
  plVar16 = param_2 + 2;
  *(undefined8 **)(param_1 + 0x60) = param_2;
  *(long **)(param_1 + 0x62) = plVar16;
  if (iVar9 == 0) {
    param_2[1] = 0x7f7f7f7f7f7f7f7f;
    *param_2 = 0x7f7f7f7f7f7f7f7f;
    param_2[3] = 0x7f7f7f7f7f7f7f7f;
    param_2[2] = 0x7f7f7f7f7f7f7f7f;
    return;
  }
  if ((int)uVar11 < 1) {
    uVar13 = 0;
  }
  else {
    puVar15 = (undefined1 *)(lVar1 - *(int *)(lVar26 + 0x28));
    puVar17 = param_2;
    uVar23 = uVar13;
    do {
      *(undefined1 *)puVar17 = *puVar15;
      uVar23 = uVar23 - 1;
      puVar15 = puVar15 + 1;
      puVar17 = (undefined8 *)((long)puVar17 + 1);
    } while (uVar23 != 0);
    if (0xf < uVar11) goto LAB_108245270;
  }
  _memset((long)param_2 + uVar13,*(undefined1 *)((long)param_2 + (long)(int)uVar6 + -1),
          0x10 - uVar13);
LAB_108245270:
  if ((int)uVar4 < 1) {
    uVar24 = 0;
    uVar13 = (ulong)(int)uVar4;
    *plVar16 = (ulong)*(byte *)((long)param_2 + (long)(int)uVar4 + 0xf) * 0x101010101010101;
  }
  else {
    puVar15 = (undefined1 *)(lVar2 - *(int *)(lVar26 + 0x2c));
    uVar13 = uVar24;
    do {
      *(undefined1 *)plVar16 = *puVar15;
      uVar13 = uVar13 - 1;
      puVar15 = puVar15 + 1;
      plVar16 = (long *)((long)plVar16 + 1);
    } while (uVar13 != 0);
    if (uVar4 < 8) {
      _memset((long)param_2 + uVar24 + 0x10,*(undefined1 *)((long)param_2 + uVar24 + 0xf),8 - uVar24
             );
    }
    puVar17 = param_2 + 3;
    puVar15 = (undefined1 *)(lVar3 - *(int *)(lVar26 + 0x2c));
    uVar13 = uVar24;
    do {
      *(undefined1 *)puVar17 = *puVar15;
      uVar13 = uVar13 - 1;
      puVar17 = (undefined8 *)((long)puVar17 + 1);
      puVar15 = puVar15 + 1;
    } while (uVar13 != 0);
    uVar13 = uVar24;
    if (7 < uVar4) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memset_11034c668)
            ((long)param_2 + uVar24 + 0x18,*(undefined1 *)((long)param_2 + uVar13 + 0x17),8 - uVar24
            );
  return;
}



/* Entry: 108245590; end: 108245737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108245590(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [13];
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  undefined1 auVar8 [16];
  undefined1 auVar9 [13];
  undefined1 auVar10 [16];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x48) + -4);
  uVar1 = (uint)uVar2;
  auVar4._0_8_ = CONCAT44(uVar1,uVar1);
  auVar4._8_4_ = uVar1;
  auVar4._12_4_ = uVar1;
  auVar10._8_8_ = auVar4._8_8_;
  auVar10._0_8_ = auVar4._0_8_;
  uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
  auVar6._4_12_ = auVar10._4_12_;
  auVar6._0_4_ = uVar3;
  auVar4 = NEON_ushl(auVar4,_UNK_10df0ebb0,4);
  auVar8._4_4_ = uVar3;
  auVar8._0_4_ = uVar3;
  auVar8._8_4_ = uVar3;
  auVar8._12_4_ = uVar3;
  auVar10 = NEON_ushl(auVar8,_UNK_10df0eb80,4);
  auVar9._0_8_ = CONCAT35(0,CONCAT14(auVar10[4],(uint)(auVar10[0] & 1)) & 0x1ffffffff);
  auVar9[8] = auVar10[8] & 1;
  auVar9._9_3_ = 0;
  auVar9[0xc] = auVar10[0xc] & 1;
  *(ulong *)(param_1 + 0x8c) = (ulong)auVar9._8_5_;
  *(ulong *)(param_1 + 0x84) = auVar9._0_8_;
  auVar10 = NEON_ushl(auVar8,_UNK_10df0eb90,4);
  auVar7._0_8_ = CONCAT35(0,CONCAT14(auVar10[4],(uint)(auVar10[0] & 1)) & 0x1ffffffff);
  auVar7[8] = auVar10[8] & 1;
  auVar7._9_3_ = 0;
  auVar7[0xc] = auVar10[0xc] & 1;
  *(ulong *)(param_1 + 0x9c) = (ulong)auVar7._8_5_;
  *(ulong *)(param_1 + 0x94) = auVar7._0_8_;
  auVar10 = NEON_ushl(auVar6,_UNK_10df0eba0,4);
  auVar5._0_8_ = CONCAT35(0,CONCAT14(auVar10[4],(uint)(auVar10[0] & 1)) & 0x1ffffffff);
  auVar5[8] = auVar10[8] & 1;
  auVar5._9_3_ = 0;
  auVar5[0xc] = auVar10[0xc] & 1;
  *(ulong *)(param_1 + 0xac) = (ulong)auVar5._8_5_;
  *(ulong *)(param_1 + 0xa4) = auVar5._0_8_;
  *(ulong *)(param_1 + 0xbc) = (ulong)(CONCAT14(auVar4[0xc],(uint)(auVar4[8] & 1)) & 0x1ffffffff);
  *(ulong *)(param_1 + 0xb4) = (ulong)(CONCAT14(auVar4[4],(uint)(auVar4[0] & 1)) & 0x1ffffffff);
  *(uint *)(param_1 + 0xc4) = uVar1 >> 0x17 & 1;
  return;
}



/* Entry: 108245738; end: 1082457cb;  */

bool FUN_108245738(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  if (iVar1 + 1 == *(int *)(*(long *)(param_1 + 10) + 0x30)) {
    param_1[1] = param_1[1] + 1;
    FUN_108244d3c(param_1);
  }
  else {
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 4;
    *(long *)(param_1 + 0x12) = *(long *)(param_1 + 0x12) + 4;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
    *(long *)(param_1 + 0x62) = *(long *)(param_1 + 0x62) + 0x10;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x10;
  }
  iVar1 = param_1[0x53];
  iVar2 = iVar1 + -1;
  param_1[0x53] = iVar2;
  return iVar2 != 0 && 0 < iVar1;
}



/* Entry: 1082457cc; end: 108245917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1082457cc(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  undefined1 auVar8 [16];
  undefined1 auVar9 [13];
  undefined1 auVar10 [16];
  undefined1 auVar11 [13];
  undefined1 auVar12 [16];
  
  lVar1 = *(long *)(param_1 + 10);
  param_1[0x20] = 0;
  *(long *)(param_1 + 0x1e) = (long)param_1 + 0x61;
  lVar2 = 0xf;
  lVar3 = 0x50;
  do {
    *(undefined1 *)((long)param_1 + lVar3) = *(undefined1 *)(*(long *)(param_1 + 0x5a) + lVar2);
    lVar2 = lVar2 + -1;
    lVar3 = lVar3 + 1;
  } while (lVar2 != -2);
  lVar3 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar3 + 0x61) =
         *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar3);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  if (*param_1 < *(int *)(lVar1 + 0x30) + -1) {
    lVar3 = 0;
    do {
      *(undefined1 *)((long)param_1 + lVar3 + 0x71) =
           *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar3 + 0x10);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
  }
  else {
    *(uint *)((long)param_1 + 0x71) = (uint)*(byte *)(param_1 + 0x1c) * 0x1010101;
  }
  uVar4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x12) + -4);
  auVar6._0_8_ = CONCAT44(uVar4,uVar4);
  auVar6._8_4_ = uVar4;
  auVar6._12_4_ = uVar4;
  auVar12._8_8_ = auVar6._8_8_;
  auVar12._0_8_ = auVar6._0_8_;
  uVar5 = (undefined4)((ulong)*(undefined8 *)(*(long *)(param_1 + 0x12) + -4) >> 0x20);
  auVar8._4_12_ = auVar12._4_12_;
  auVar8._0_4_ = uVar5;
  auVar6 = NEON_ushl(auVar6,_UNK_10df0ebb0,4);
  auVar10._4_4_ = uVar5;
  auVar10._0_4_ = uVar5;
  auVar10._8_4_ = uVar5;
  auVar10._12_4_ = uVar5;
  auVar12 = NEON_ushl(auVar10,_UNK_10df0eb80,4);
  auVar11._0_8_ = CONCAT35(0,CONCAT14(auVar12[4],(uint)(auVar12[0] & 1)) & 0x1ffffffff);
  auVar11[8] = auVar12[8] & 1;
  auVar11._9_3_ = 0;
  auVar11[0xc] = auVar12[0xc] & 1;
  *(ulong *)(param_1 + 0x23) = (ulong)auVar11._8_5_;
  *(ulong *)(param_1 + 0x21) = auVar11._0_8_;
  auVar12 = NEON_ushl(auVar10,_UNK_10df0eb90,4);
  auVar9._0_8_ = CONCAT35(0,CONCAT14(auVar12[4],(uint)(auVar12[0] & 1)) & 0x1ffffffff);
  auVar9[8] = auVar12[8] & 1;
  auVar9._9_3_ = 0;
  auVar9[0xc] = auVar12[0xc] & 1;
  *(ulong *)(param_1 + 0x27) = (ulong)auVar9._8_5_;
  *(ulong *)(param_1 + 0x25) = auVar9._0_8_;
  auVar12 = NEON_ushl(auVar8,_UNK_10df0eba0,4);
  auVar7._0_8_ = CONCAT35(0,CONCAT14(auVar12[4],(uint)(auVar12[0] & 1)) & 0x1ffffffff);
  auVar7[8] = auVar12[8] & 1;
  auVar7._9_3_ = 0;
  auVar7[0xc] = auVar12[0xc] & 1;
  *(ulong *)(param_1 + 0x2b) = (ulong)auVar7._8_5_;
  *(ulong *)(param_1 + 0x29) = auVar7._0_8_;
  *(ulong *)(param_1 + 0x2f) = (ulong)(CONCAT14(auVar6[0xc],(uint)(auVar6[8] & 1)) & 0x1ffffffff);
  *(ulong *)(param_1 + 0x2d) = (ulong)(CONCAT14(auVar6[4],(uint)(auVar6[0] & 1)) & 0x1ffffffff);
  param_1[0x31] = uVar4 >> 0x17 & 1;
  return;
}



/* Entry: 108245918; end: 108245a3f;  */

void FUN_108245918(long param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = (ulong)uVar2;
  if (-1 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar6 = (ulong)uVar3;
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    lVar5 = uVar7 * 0xc;
    _malloc();
    if (lVar5 != 0) {
      if ((((int)uVar3 >= 0x40 || uVar2 >= 0x40) && uVar3 != 2) &&
          ((int)uVar3 < 0x40 && uVar2 < 0x40 || 1 < (int)uVar3)) {
        iVar1 = (int)((ulong)((long)param_2 * -0x66666667) >> 0x20);
        iVar1 = (iVar1 >> 3) - (iVar1 >> 0x1f);
        FUN_108245a40(uVar7,uVar6,*(undefined8 *)(param_1 + 0x48),uVar4,iVar1 + 5,lVar5,param_3);
        for (iVar1 = iVar1 + 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          FUN_108245a40(uVar7,uVar6,param_3,uVar7,iVar1,lVar5,param_3);
        }
      }
      else if (0 < (int)uVar3) {
        uVar8 = 0;
        do {
          _memcpy(param_3,*(long *)(param_1 + 0x48) + uVar8 * (long)*(int *)(param_1 + 0x50) * 4,
                  uVar7 * 4);
          uVar8 = uVar8 + 1;
          param_3 = param_3 + uVar7 * 4;
        } while (uVar6 != uVar8);
      }
      _free(lVar5);
    }
  }
  return;
}



/* Entry: 108245a40; end: 108245d73;  */

void FUN_108245a40(ulong param_1,int param_2,undefined4 *param_3,int param_4,uint param_5,
                  long param_6,undefined4 *param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar25 [16];
  ushort uVar29;
  int iVar30;
  int iVar34;
  int iVar35;
  undefined1 auVar31 [16];
  int iVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  long lStack_68;
  
  uVar22 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
  iVar17 = (int)param_1;
  lStack_68 = param_6 + (long)iVar17 * 4;
  lVar21 = lStack_68 + (long)iVar17 * 4;
  _memcpy(lStack_68,param_3,uVar22);
  _memcpy(lVar21,param_3 + param_4,uVar22);
  if (0 < param_2) {
    iVar20 = 0;
    iVar4 = 1 << (ulong)(param_5 & 0x1f);
    uVar8 = iVar17 - 1;
    iVar7 = -iVar4;
    uVar5 = -1 << (ulong)(param_5 & 0x1f);
    uVar6 = ~uVar5 >> 1;
    do {
      lVar23 = lVar21;
      lVar21 = param_6;
      if ((iVar20 == 0) || (iVar20 == param_2 + -1)) {
        _memcpy(param_7,param_3,uVar22);
      }
      else {
        _memcpy(lVar23,param_3 + param_4,uVar22);
        *param_7 = *param_3;
        param_7[(int)uVar8] = param_3[(int)uVar8];
        auVar15._8_8_ = 0xffffffe8fffffff0;
        auVar15._0_8_ = 0xfffffff800000000;
        auVar14._8_8_ = 0xffffffe8fffffff0;
        auVar14._0_8_ = 0xfffffff800000000;
        auVar13._8_8_ = 0xffffffe8fffffff0;
        auVar13._0_8_ = 0xfffffff800000000;
        auVar12._8_8_ = 0xffffffe8fffffff0;
        auVar12._0_8_ = 0xfffffff800000000;
        if (2 < iVar17) {
          uVar18 = 1;
          do {
            puVar1 = (uint *)(lStack_68 + uVar18 * 4);
            uVar19 = *puVar1;
            auVar25._4_4_ = uVar19;
            auVar25._0_4_ = uVar19;
            auVar25._8_4_ = uVar19;
            auVar25._12_4_ = uVar19;
            uVar24 = puVar1[-1];
            auVar31._4_4_ = uVar24;
            auVar31._0_4_ = uVar24;
            auVar31._8_4_ = uVar24;
            auVar31._12_4_ = uVar24;
            auVar25 = NEON_ushl(auVar25,auVar12,4);
            uVar24 = (uint)auVar25[0];
            bVar26 = auVar25[4];
            bVar27 = auVar25[8];
            bVar28 = auVar25[0xc];
            auVar25 = NEON_ushl(auVar31,auVar13,4);
            iVar30 = uVar24 - auVar25[0];
            iVar34 = (uint)bVar26 - (uint)auVar25[4];
            iVar35 = (uint)bVar27 - (uint)auVar25[8];
            iVar36 = (uint)bVar28 - (uint)auVar25[0xc];
            iVar37 = -(uint)(iVar4 <= iVar30);
            iVar38 = -(uint)(iVar4 <= iVar34);
            iVar39 = -(uint)(iVar4 <= iVar35);
            iVar40 = -(uint)(iVar4 <= iVar36);
            iVar30 = -(uint)(iVar30 <= iVar7);
            iVar34 = -(uint)(iVar34 <= iVar7);
            iVar35 = -(uint)(iVar35 <= iVar7);
            iVar36 = -(uint)(iVar36 <= iVar7);
            uVar29 = NEON_umaxv(CONCAT26(CONCAT11((byte)((uint)iVar40 >> 8) |
                                                  (byte)((uint)iVar36 >> 8),
                                                  (byte)iVar40 | (byte)iVar36),
                                         CONCAT24(CONCAT11((byte)((uint)iVar39 >> 8) |
                                                           (byte)((uint)iVar35 >> 8),
                                                           (byte)iVar39 | (byte)iVar35),
                                                  CONCAT22(CONCAT11((byte)((uint)iVar38 >> 8) |
                                                                    (byte)((uint)iVar34 >> 8),
                                                                    (byte)iVar38 | (byte)iVar34),
                                                           CONCAT11((byte)((uint)iVar37 >> 8) |
                                                                    (byte)((uint)iVar30 >> 8),
                                                                    (byte)iVar37 | (byte)iVar30)))),
                                2);
            if ((uVar29 & 1) == 0) {
              uVar9 = puVar1[1];
              auVar32._4_4_ = uVar9;
              auVar32._0_4_ = uVar9;
              auVar32._8_4_ = uVar9;
              auVar32._12_4_ = uVar9;
              auVar25 = NEON_ushl(auVar32,auVar14,4);
              iVar30 = uVar24 - auVar25[0];
              iVar34 = (uint)bVar26 - (uint)auVar25[4];
              iVar35 = (uint)bVar27 - (uint)auVar25[8];
              iVar36 = (uint)bVar28 - (uint)auVar25[0xc];
              iVar37 = -(uint)(iVar4 <= iVar30);
              iVar38 = -(uint)(iVar4 <= iVar34);
              iVar39 = -(uint)(iVar4 <= iVar35);
              iVar40 = -(uint)(iVar4 <= iVar36);
              iVar30 = -(uint)(iVar30 <= iVar7);
              iVar34 = -(uint)(iVar34 <= iVar7);
              iVar35 = -(uint)(iVar35 <= iVar7);
              iVar36 = -(uint)(iVar36 <= iVar7);
              uVar29 = NEON_umaxv(CONCAT26(CONCAT11((byte)((uint)iVar40 >> 8) |
                                                    (byte)((uint)iVar36 >> 8),
                                                    (byte)iVar40 | (byte)iVar36),
                                           CONCAT24(CONCAT11((byte)((uint)iVar39 >> 8) |
                                                             (byte)((uint)iVar35 >> 8),
                                                             (byte)iVar39 | (byte)iVar35),
                                                    CONCAT22(CONCAT11((byte)((uint)iVar38 >> 8) |
                                                                      (byte)((uint)iVar34 >> 8),
                                                                      (byte)iVar38 | (byte)iVar34),
                                                             CONCAT11((byte)((uint)iVar37 >> 8) |
                                                                      (byte)((uint)iVar30 >> 8),
                                                                      (byte)iVar37 | (byte)iVar30)))
                                          ),2);
              if ((uVar29 & 1) != 0) goto LAB_108245c68;
              uVar10 = *(undefined4 *)(lVar21 + uVar18 * 4);
              auVar33._4_4_ = uVar10;
              auVar33._0_4_ = uVar10;
              auVar33._8_4_ = uVar10;
              auVar33._12_4_ = uVar10;
              auVar25 = NEON_ushl(auVar33,auVar15,4);
              iVar30 = uVar24 - auVar25[0];
              iVar34 = (uint)bVar26 - (uint)auVar25[4];
              iVar35 = (uint)bVar27 - (uint)auVar25[8];
              iVar36 = (uint)bVar28 - (uint)auVar25[0xc];
              iVar37 = -(uint)(iVar4 <= iVar30);
              iVar38 = -(uint)(iVar4 <= iVar34);
              iVar39 = -(uint)(iVar4 <= iVar35);
              iVar40 = -(uint)(iVar4 <= iVar36);
              iVar30 = -(uint)(iVar30 <= iVar7);
              iVar34 = -(uint)(iVar34 <= iVar7);
              iVar35 = -(uint)(iVar35 <= iVar7);
              iVar36 = -(uint)(iVar36 <= iVar7);
              uVar29 = NEON_umaxv(CONCAT26(CONCAT11((byte)((uint)iVar40 >> 8) |
                                                    (byte)((uint)iVar36 >> 8),
                                                    (byte)iVar40 | (byte)iVar36),
                                           CONCAT24(CONCAT11((byte)((uint)iVar39 >> 8) |
                                                             (byte)((uint)iVar35 >> 8),
                                                             (byte)iVar39 | (byte)iVar35),
                                                    CONCAT22(CONCAT11((byte)((uint)iVar38 >> 8) |
                                                                      (byte)((uint)iVar34 >> 8),
                                                                      (byte)iVar38 | (byte)iVar34),
                                                             CONCAT11((byte)((uint)iVar37 >> 8) |
                                                                      (byte)((uint)iVar30 >> 8),
                                                                      (byte)iVar37 | (byte)iVar30)))
                                          ),2);
              if ((uVar29 & 1) != 0) goto LAB_108245c68;
              uVar24 = 0;
              do {
                iVar30 = (uVar19 >> (ulong)(uVar24 & 0x1f) & 0xff) -
                         (*(uint *)(lVar23 + uVar18 * 4) >> (ulong)(uVar24 & 0x1f) & 0xff);
                bVar11 = iVar4 > iVar30;
                bVar16 = uVar24 != 0x18;
                uVar24 = uVar24 + 8;
              } while (((bVar11 && iVar30 != iVar7) && (iVar4 <= iVar30 || iVar7 <= iVar30)) &&
                       bVar16);
              if (!bVar11 || (iVar30 == iVar7 || iVar7 > iVar30)) goto LAB_108245c68;
            }
            else {
LAB_108245c68:
              uVar24 = uVar6 + (uVar19 >> 0x18) + ((uVar19 >> 0x18) >> (ulong)(param_5 & 0x1f) & 1);
              uVar9 = 0xff000000;
              if (uVar24 < 0x100) {
                uVar9 = (uVar24 & uVar5) << 0x18;
              }
              uVar24 = uVar6 + (uVar19 >> 0x10 & 0xff) +
                       ((uVar19 >> 0x10 & 0xff) >> (ulong)(param_5 & 0x1f) & 1);
              uVar2 = 0xff0000;
              if (uVar24 < 0x100) {
                uVar2 = (uVar24 & uVar5) << 0x10;
              }
              uVar24 = uVar6 + (uVar19 >> 8 & 0xff) +
                       ((uVar19 >> 8 & 0xff) >> (ulong)(param_5 & 0x1f) & 1);
              uVar3 = 0xff00;
              if (uVar24 < 0x100) {
                uVar3 = (uVar24 & uVar5) << 8;
              }
              uVar19 = uVar6 + (uVar19 & 0xff) + ((uVar19 & 0xff) >> (ulong)(param_5 & 0x1f) & 1);
              uVar24 = 0xff;
              if (uVar19 < 0x100) {
                uVar24 = uVar19 & uVar5;
              }
              uVar19 = uVar9 | uVar24 | uVar2 | uVar3;
            }
            param_7[uVar18] = uVar19;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar8);
        }
      }
      iVar20 = iVar20 + 1;
      param_7 = param_7 + iVar17;
      param_6 = lStack_68;
      param_3 = param_3 + param_4;
      lStack_68 = lVar23;
    } while (iVar20 != param_2);
  }
  return;
}



/* Entry: 108245d74; end: 108245e2f;  */

undefined8 FUN_108245d74(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xffffff00) == 0x200) {
    if (param_1 == (undefined8 *)0x0) {
      uVar1 = 1;
    }
    else {
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[0xc] = 0x108245dd0;
      uVar1 = 1;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108245e30; end: 108245ecf;  */

void FUN_108245e30(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  lVar4 = param_1;
  func_0x000108245dd8();
  if ((int)lVar4 != 0) {
    _free(*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar1 = (long)iVar3 * (long)iVar2 + 0x1f;
    if (uVar1 < 0x100000001) {
      lVar4 = uVar1 * 4;
      _malloc();
      if (lVar4 != 0) {
        *(long *)(param_1 + 0xe8) = lVar4;
        *(ulong *)(param_1 + 0x48) = lVar4 + 0x1fU & 0xffffffffffffffe0;
        *(int *)(param_1 + 0x50) = iVar2;
        return;
      }
    }
    if (*(int *)(param_1 + 0x88) == 0) {
      *(undefined4 *)(param_1 + 0x88) = 1;
    }
  }
  return;
}



/* Entry: 108245ed0; end: 108245fef;  */

void FUN_108245ed0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  lVar11 = param_1;
  func_0x000108245dd8();
  if ((int)lVar11 == 0) {
    return;
  }
  _free(*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  if ((0 < (int)uVar4) && (0 < iVar5)) {
    iVar13 = (int)((long)(int)uVar4 + 1U >> 1);
    bVar7 = false;
    bVar6 = true;
    if (0 < iVar13) {
      iVar10 = (int)((long)iVar5 + 1U >> 1);
      bVar7 = iVar10 < 0;
      bVar6 = iVar10 == 0;
    }
    if (!bVar6 && !bVar7) {
      uVar2 = uVar4 & (iVar3 << 0x1d) >> 0x1f;
      lVar12 = (long)(int)((long)((long)iVar5 + 1U) >> 1) * (long)iVar13;
      lVar11 = (long)iVar5 * (long)(int)uVar2;
      uVar8 = lVar11 + (long)iVar5 * (long)(int)uVar4 + lVar12 * 2;
      if ((uVar8 < 0x400000001) && (_malloc(), uVar8 != 0)) {
        *(ulong *)(param_1 + 0xe0) = uVar8;
        *(uint *)(param_1 + 0x28) = uVar4;
        *(int *)(param_1 + 0x2c) = iVar13;
        *(uint *)(param_1 + 0x38) = uVar2;
        lVar1 = uVar8 + (long)iVar5 * (long)(int)uVar4;
        *(ulong *)(param_1 + 0x10) = uVar8;
        *(long *)(param_1 + 0x18) = lVar1;
        lVar1 = lVar1 + lVar12;
        *(long *)(param_1 + 0x20) = lVar1;
        if (lVar11 == 0) {
          return;
        }
        *(long *)(param_1 + 0x30) = lVar1 + lVar12;
        return;
      }
      if (*(int *)(param_1 + 0x88) != 0) {
        return;
      }
      uVar9 = 1;
      goto LAB_108245fd4;
    }
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    return;
  }
  uVar9 = 5;
LAB_108245fd4:
  *(undefined4 *)(param_1 + 0x88) = uVar9;
  return;
}



/* Entry: 108245ff0; end: 1082460ab;  */

int * FUN_108245ff0(int *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x1;
  }
  _free(*(undefined8 *)(param_1 + 0x38));
  _free(*(undefined8 *)(param_1 + 0x3a));
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if (*param_1 != 0) {
    iVar10 = param_1[2];
    iVar3 = param_1[3];
    piVar8 = param_1;
    func_0x000108245dd8();
    if ((int)piVar8 != 0) {
      _free(*(undefined8 *)(param_1 + 0x3a));
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      uVar9 = (long)iVar3 * (long)iVar10 + 0x1f;
      if (uVar9 < 0x100000001) {
        lVar7 = uVar9 * 4;
        _malloc();
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x3a) = lVar7;
          *(ulong *)(param_1 + 0x12) = lVar7 + 0x1fU & 0xffffffffffffffe0;
          param_1[0x14] = iVar10;
          return (int *)0x1;
        }
      }
      if (param_1[0x22] == 0) {
        piVar8 = (int *)0x0;
        param_1[0x22] = 1;
      }
      else {
        piVar8 = (int *)0x0;
      }
    }
    return piVar8;
  }
  iVar10 = param_1[1];
  uVar4 = param_1[2];
  iVar3 = param_1[3];
  piVar8 = param_1;
  func_0x000108245dd8();
  if ((int)piVar8 == 0) {
    return piVar8;
  }
  _free(*(undefined8 *)(param_1 + 0x38));
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if ((0 < (int)uVar4) && (0 < iVar3)) {
    iVar13 = (int)((long)(int)uVar4 + 1U >> 1);
    bVar6 = false;
    bVar5 = true;
    if (0 < iVar13) {
      iVar11 = (int)((long)iVar3 + 1U >> 1);
      bVar6 = iVar11 < 0;
      bVar5 = iVar11 == 0;
    }
    if (!bVar5 && !bVar6) {
      uVar2 = uVar4 & (iVar10 << 0x1d) >> 0x1f;
      lVar12 = (long)(int)((long)((long)iVar3 + 1U) >> 1) * (long)iVar13;
      lVar7 = (long)iVar3 * (long)(int)uVar2;
      uVar9 = lVar7 + (long)iVar3 * (long)(int)uVar4 + lVar12 * 2;
      if ((uVar9 < 0x400000001) && (_malloc(), uVar9 != 0)) {
        *(ulong *)(param_1 + 0x38) = uVar9;
        param_1[10] = uVar4;
        param_1[0xb] = iVar13;
        param_1[0xe] = uVar2;
        lVar1 = uVar9 + (long)iVar3 * (long)(int)uVar4;
        *(ulong *)(param_1 + 4) = uVar9;
        *(long *)(param_1 + 6) = lVar1;
        lVar1 = lVar1 + lVar12;
        *(long *)(param_1 + 8) = lVar1;
        if (lVar7 != 0) {
          *(long *)(param_1 + 0xc) = lVar1 + lVar12;
        }
        return (int *)0x1;
      }
      if (param_1[0x22] != 0) {
        return (int *)0x0;
      }
      iVar10 = 1;
      goto LAB_108245fd4;
    }
  }
  if (param_1[0x22] != 0) {
    return (int *)0x0;
  }
  iVar10 = 5;
LAB_108245fd4:
  param_1[0x22] = iVar10;
  return (int *)0x0;
}



/* Entry: 1082460ac; end: 108246187;  */

void FUN_1082460ac(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = *(ulong **)(param_3 + 0x68);
  if (puVar5 != (ulong *)0x0) {
    uVar2 = puVar5[1];
    uVar1 = uVar2 + param_2;
    if (puVar5[2] < uVar1) {
      uVar3 = puVar5[2] * 2;
      if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
        uVar3 = uVar1;
      }
      uVar1 = uVar3;
      if (uVar3 < 0x2001) {
        uVar1 = 0x2000;
      }
      if (0x400000000 < uVar3) {
        return;
      }
      uVar3 = uVar1;
      _malloc();
      if (uVar3 == 0) {
        return;
      }
      uVar4 = *puVar5;
      if (uVar2 != 0) {
        _memcpy(uVar3,uVar4,uVar2);
      }
      _free(uVar4);
      *puVar5 = uVar3;
      puVar5[2] = uVar1;
    }
    if (param_2 != 0) {
      _memcpy(*puVar5 + puVar5[1],param_1,param_2);
      puVar5[1] = puVar5[1] + param_2;
    }
  }
  return;
}



/* Entry: 108246188; end: 1082462f3;  */

undefined8
FUN_108246188(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             code *param_5,int param_6,undefined8 *param_7)

{
  uint *puVar1;
  ulong *puVar2;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  uint auStack_1d4 [29];
  ulong uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 *puStack_f8;
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
  
  if (param_7 == (undefined8 *)0x0) {
    return 0;
  }
  puVar1 = auStack_1d4;
  FUN_1082400c0(puVar1,0,0x210);
  if ((int)puVar1 != 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
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
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    auStack_1d4[0] = (uint)(param_6 != 0);
    uStack_160 = (ulong)auStack_1d4[0];
    _uStack_158 = CONCAT44(param_3,param_2);
    puStack_f8 = &uStack_1f8;
    pcStack_100 = FUN_1082460ac;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    puVar2 = &uStack_160;
    (*param_5)(puVar2,param_1,param_4);
    if ((int)puVar2 == 0) {
      _free(uStack_80);
      _free(uStack_78);
    }
    else {
      puVar1 = auStack_1d4;
      FUN_108251920(puVar1,&uStack_160);
      _free(uStack_80);
      _free(uStack_78);
      if ((int)puVar1 != 0) {
        *param_7 = uStack_1f8;
        return uStack_1f0;
      }
    }
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_12c = 0;
    uStack_130 = 0;
    uStack_134 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    _free(uStack_1f8);
    *param_7 = 0;
  }
  return 0;
}



/* Entry: 1082462f4; end: 1082463d3;  */

undefined8 FUN_1082462f4(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      lVar4 = *(long *)(param_1 + 0xc);
      if (lVar4 != 0) {
        iVar1 = param_1[2];
        iVar5 = param_1[3];
        iVar2 = param_1[0xe];
        FUN_10822dff4();
        if (0 < iVar5) {
          iVar5 = iVar5 + 1;
          do {
            lVar3 = lVar4;
            (*pcRam0000000113869a98)(lVar4,iVar1);
            if ((int)lVar3 != 0) {
              return 1;
            }
            lVar4 = lVar4 + iVar2;
            iVar5 = iVar5 + -1;
          } while (1 < iVar5);
        }
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x12);
      if (lVar4 != 0) {
        iVar1 = param_1[2];
        iVar5 = param_1[3];
        iVar2 = param_1[0x14];
        FUN_10822dff4();
        if (0 < iVar5) {
          lVar4 = lVar4 + 3;
          iVar5 = iVar5 + 1;
          do {
            lVar3 = lVar4;
            (*pcRam0000000113869a90)(lVar4,iVar1);
            if ((int)lVar3 != 0) {
              return 1;
            }
            lVar4 = lVar4 + (iVar2 << 2);
            iVar5 = iVar5 + -1;
          } while (1 < iVar5);
        }
      }
    }
  }
  return 0;
}



/* Entry: 1082463d4; end: 108246437;  */

/* WARNING: Removing unreachable block (ram,0x00010824691c) */
/* WARNING: Removing unreachable block (ram,0x000108246924) */
/* WARNING: Removing unreachable block (ram,0x00010824693c) */
/* WARNING: Removing unreachable block (ram,0x000108246958) */
/* WARNING: Removing unreachable block (ram,0x000108246968) */
/* WARNING: Removing unreachable block (ram,0x00010824702c) */
/* WARNING: Removing unreachable block (ram,0x000108247034) */
/* WARNING: Removing unreachable block (ram,0x00010824741c) */
/* WARNING: Removing unreachable block (ram,0x000108247420) */
/* WARNING: Removing unreachable block (ram,0x000108247434) */

undefined4 * FUN_1082463d4(float param_1,undefined4 *param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  undefined *puVar13;
  bool bVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 uVar28;
  ushort *puVar27;
  int *piVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined **ppuVar35;
  uint uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  int iVar47;
  double dVar45;
  uint uVar48;
  undefined1 auVar46 [16];
  int iVar49;
  uint uVar50;
  int iVar53;
  uint uVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar55;
  undefined1 auVar56 [16];
  double dVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  long lStack_208;
  ushort *puStack_1d8;
  int iStack_1d0;
  long lStack_198;
  undefined1 *puStack_180;
  int *piStack_178;
  undefined *puStack_170;
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  int aiStack_8c [3];
  
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  lVar19 = *(long *)(param_2 + 0x12);
  if (lVar19 == 0) {
    if (param_2[0x22] != 0) {
      return (undefined4 *)0x0;
    }
    uVar21 = 3;
  }
  else {
    if ((param_3 & 3) == 0) {
      param_2[1] = 0;
      uVar5 = param_2[0x14];
      uVar12 = uVar5 << 2;
      uVar20 = (ulong)uVar12;
      lVar17 = lVar19 + 2;
      lVar32 = lVar19 + 1;
      lStack_198 = lVar19 + 3;
      uVar2 = param_2[2];
      uVar3 = (ulong)uVar2;
      uVar4 = param_2[3];
      if (lStack_198 == 0) {
        uVar21 = 0;
        bVar14 = true;
      }
      else {
        FUN_10822dff4();
        if ((int)uVar4 < 1) {
          uVar21 = 0;
          bVar14 = true;
        }
        else {
          iVar47 = uVar4 + 1;
          lVar33 = lStack_198;
          do {
            lVar15 = lVar33;
            (*pcRam0000000113869a90)(lVar33,uVar3);
            bVar14 = (int)lVar15 == 0;
            if ((int)lVar15 != 0) {
              uVar21 = 4;
              goto LAB_1082469f0;
            }
            lVar33 = lVar33 + (int)uVar12;
            iVar47 = iVar47 + -1;
          } while (1 < iVar47);
          uVar21 = 0;
        }
      }
LAB_1082469f0:
      *param_2 = 0;
      param_2[1] = uVar21;
      puVar16 = param_2;
      FUN_108245ed0();
      if ((int)puVar16 == 0) {
        return puVar16;
      }
      if (((param_4 == 0) || ((int)uVar2 < 4)) || ((int)uVar4 < 4)) {
        uVar1 = (int)(uVar2 + 1) >> 1;
        uVar31 = (ulong)uVar1;
        if ((uVar2 + 1 < 2) || (-1 < (int)uVar1)) {
          puStack_1d8 = (ushort *)
                        (-(ulong)((uVar1 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                        (ulong)(uVar1 << 2) << 1);
          _malloc();
        }
        else {
          puStack_1d8 = (ushort *)0x0;
        }
        if (param_1 <= 0.0) {
          ppuVar35 = (undefined **)0x0;
          piVar29 = (int *)0x4;
          puVar30 = (undefined8 *)0x8;
          piStack_178 = (int *)0xe4;
        }
        else {
          piStack_178 = aiStack_8c;
          piVar29 = (int *)((ulong)&puStack_170 | 4);
          puVar30 = &uStack_168;
          uStack_c0 = 0x28264d4244cab16f;
          uStack_c8 = 0x73e502e356b41583;
          uStack_b0 = 0xd3ad40b1d6ab6fb;
          uStack_b8 = 0xa50ebed73baaefb;
          uStack_a0 = 0x77ce6b95;
          uStack_a8 = 0x2b081e8335db3b68;
          uStack_94 = 0x27e5ed3c009f9494;
          uStack_9c = 0x5181e5f0;
          uStack_98 = 0x78853bbc;
          uStack_100 = 0x496b153c4fc0d9c6;
          uStack_108 = 0x4730a7ed6e990e83;
          uStack_f0 = 0x26d7cb1c73990b32;
          uStack_f8 = 0x541afb0c4f1403fa;
          uStack_e0 = 0x6425ccdd75762f2a;
          uStack_e8 = 0x2cbb77d86fcc3706;
          uStack_d0 = 0x141ebf67220414a8;
          uStack_d8 = 0xa7d871524b35461;
          uStack_140 = 0xd7ec1da4a290000;
          uStack_148 = 0x5c55028964fcf397;
          uStack_130 = 0x38d38c694e19ca72;
          uStack_138 = 0x5492577d5940b7ab;
          uStack_120 = 0x5abb2c325437f652;
          uStack_128 = 0x32a1755f0c01ee65;
          uStack_110 = 0x7563cce2685feeda;
          uStack_118 = 0x73f533e70faa57b1;
          uStack_160 = 0x1c88626a775faccb;
          uStack_168 = 0x3b318860de15230;
          uStack_150 = 0x49ddb84b4a85fef8;
          uStack_158 = 0x14b3b82868385c55;
          aiStack_8c[0] = 0x100;
          if (param_1 <= 1.0) {
            aiStack_8c[0] = (int)(param_1 * 256.0);
          }
          ppuVar35 = &puStack_170;
          puStack_170 = (undefined *)0x1f00000000;
        }
        puStack_180 = *(undefined1 **)(param_2 + 4);
        puVar18 = *(undefined1 **)(param_2 + 6);
        puVar22 = *(undefined1 **)(param_2 + 8);
        lStack_208 = *(long *)(param_2 + 0xc);
        FUN_108230ad8();
        iVar47 = 0x13254c38;
        _pthread_mutex_lock();
        puVar13 = PTR_DAT_1132548c8;
        if (iVar47 == 0) {
          if ((PTR_LOOP_113254c30 != PTR_DAT_1132548c8) && (iRam000000011372a020 == 0)) {
            lVar33 = 0;
            uVar50 = 4;
            iVar53 = 5;
            uVar54 = 6;
            iVar55 = 7;
            uVar36 = 0;
            iVar47 = 1;
            uVar48 = 2;
            iVar49 = 3;
            auVar56 = NEON_fmov(0x3fe0000000000000,8);
            dVar59 = auVar56._8_8_;
            dVar45 = auVar56._0_8_;
            do {
              auVar46._4_4_ = 0;
              auVar46._0_4_ = uVar48;
              auVar46._8_4_ = iVar49;
              auVar46._12_4_ = 0;
              auVar56 = NEON_ucvtf(auVar46,8);
              auVar51._4_4_ = 0;
              auVar51._0_4_ = uVar54;
              auVar51._8_4_ = iVar55;
              auVar51._12_4_ = 0;
              auVar52 = NEON_ucvtf(auVar51,8);
              auVar57._4_4_ = 0;
              auVar57._0_4_ = uVar36;
              auVar57._8_4_ = iVar47;
              auVar57._12_4_ = 0;
              auVar58 = NEON_ucvtf(auVar57,8);
              auVar60._4_4_ = 0;
              auVar60._0_4_ = uVar50;
              auVar60._8_4_ = iVar53;
              auVar60._12_4_ = 0;
              auVar61 = NEON_ucvtf(auVar60,8);
              dVar37 = (double)_pow(auVar56._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar38 = (double)_pow(auVar56._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar39 = (double)_pow(auVar52._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar40 = (double)_pow(auVar52._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar41 = (double)_pow(auVar58._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar42 = (double)_pow(auVar58._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar43 = (double)_pow(auVar61._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar44 = (double)_pow(auVar61._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              auVar62._4_4_ = (int)(long)(dVar59 + dVar41 * 4095.0);
              auVar62._0_4_ = (int)(long)(dVar45 + dVar42 * 4095.0);
              auVar62._8_8_ = 0;
              auVar61._8_8_ = 0x3534313025242120;
              auVar61._0_8_ = 0x1514111005040100;
              auVar56._4_4_ = (int)(long)(dVar59 + dVar37 * 4095.0);
              auVar56._0_4_ = (int)(long)(dVar45 + dVar38 * 4095.0);
              auVar56._8_8_ = 0;
              auVar52._4_4_ = (int)(long)(dVar59 + dVar43 * 4095.0);
              auVar52._0_4_ = (int)(long)(dVar45 + dVar44 * 4095.0);
              auVar52._8_8_ = 0;
              auVar58._4_4_ = (int)(long)(dVar59 + dVar39 * 4095.0);
              auVar58._0_4_ = (int)(long)(dVar45 + dVar40 * 4095.0);
              auVar58._8_8_ = 0;
              auVar56 = a64_TBL(ZEXT816(0),auVar62,auVar56,auVar52,auVar58,auVar61);
              *(long *)(lVar33 + 0x11372a0b0) = auVar56._8_8_;
              *(long *)(lVar33 + 0x11372a0a8) = auVar56._0_8_;
              uVar36 = uVar36 + 8;
              iVar47 = iVar47 + 8;
              uVar48 = uVar48 + 8;
              iVar49 = iVar49 + 8;
              uVar50 = uVar50 + 8;
              iVar53 = iVar53 + 8;
              uVar54 = uVar54 + 8;
              iVar55 = iVar55 + 8;
              lVar33 = lVar33 + 0x10;
            } while (lVar33 != 0x200);
            uVar34 = 0;
            do {
              dVar45 = (double)_pow((double)(uVar34 & 0xffffffff) * 0.03125763125763126,
                                    0x3ff4000000000000);
              *(int *)(uVar34 * 4 + 0x11372a024) = (int)(dVar45 * 255.0 + 0.5);
              uVar34 = uVar34 + 1;
            } while (uVar34 != 0x21);
            iRam000000011372a020 = 1;
          }
          PTR_LOOP_113254c30 = puVar13;
          _pthread_mutex_unlock(0x113254c38);
        }
        if (puStack_1d8 == (ushort *)0x0) {
          if (param_2[0x22] != 0) {
            return (undefined4 *)0x0;
          }
          param_2[0x22] = 1;
          return (undefined4 *)0x0;
        }
        if (0 < (int)uVar4 >> 1) {
          iStack_1d0 = 0;
          uVar24 = -(ulong)((uVar5 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 | uVar20 << 1;
          uVar34 = 0;
          if (!bVar14) {
            uVar34 = uVar24;
          }
          do {
            if (0 < (int)uVar2) {
              lVar33 = 0;
              puVar23 = puStack_180;
              uVar26 = uVar3;
              do {
                bVar6 = *(byte *)(lVar32 + lVar33);
                bVar7 = *(byte *)(lVar19 + lVar33);
                iVar47 = (uint)*(byte *)(lVar17 + lVar33) * 0x41c7 + 0x108000;
                if (ppuVar35 == (undefined **)0x0) {
                  uVar28 = (undefined1)
                           (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 >> 0x10);
                }
                else {
                  iVar53 = *piStack_178;
                  uVar5 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                          *(int *)((long)puVar30 + (long)*piVar29 * 4);
                  *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar5 & 0x7fffffff;
                  iVar49 = 0;
                  if (*(int *)ppuVar35 != 0x36) {
                    iVar49 = *(int *)ppuVar35 + 1;
                  }
                  *(int *)ppuVar35 = iVar49;
                  iVar49 = 0;
                  if (*piVar29 != 0x36) {
                    iVar49 = *piVar29 + 1;
                  }
                  *piVar29 = iVar49;
                  uVar28 = (undefined1)
                           (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 +
                            (((int)(uVar5 * 2) >> 0x10) * iVar53 >> 8) >> 0x10);
                }
                *puVar23 = uVar28;
                lVar33 = lVar33 + 4;
                uVar26 = uVar26 - 1;
                puVar23 = puVar23 + 1;
              } while (uVar26 != 0);
              puVar23 = puStack_180 + (int)param_2[10];
              lVar33 = (long)(int)uVar12;
              uVar26 = uVar3;
              do {
                bVar6 = *(byte *)(lVar32 + lVar33);
                bVar7 = *(byte *)(lVar19 + lVar33);
                iVar47 = (uint)*(byte *)(lVar17 + lVar33) * 0x41c7 + 0x108000;
                if (ppuVar35 == (undefined **)0x0) {
                  uVar28 = (undefined1)
                           (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 >> 0x10);
                }
                else {
                  iVar53 = *piStack_178;
                  uVar5 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                          *(int *)((long)puVar30 + (long)*piVar29 * 4);
                  *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar5 & 0x7fffffff;
                  iVar49 = 0;
                  if (*(int *)ppuVar35 != 0x36) {
                    iVar49 = *(int *)ppuVar35 + 1;
                  }
                  *(int *)ppuVar35 = iVar49;
                  iVar49 = 0;
                  if (*piVar29 != 0x36) {
                    iVar49 = *piVar29 + 1;
                  }
                  *piVar29 = iVar49;
                  uVar28 = (undefined1)
                           (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 +
                            (((int)(uVar5 * 2) >> 0x10) * iVar53 >> 8) >> 0x10);
                }
                lVar33 = lVar33 + 4;
                *puVar23 = uVar28;
                uVar26 = uVar26 - 1;
                puVar23 = puVar23 + 1;
              } while (uVar26 != 0);
            }
            iVar47 = param_2[10];
            if (bVar14) {
LAB_1082470dc:
              FUN_108247658(lVar17,lVar32,lVar19,4,uVar20,puStack_1d8,uVar3);
            }
            else {
              lVar33 = lStack_198;
              (*pcRam0000000113869a80)(lStack_198,uVar20,uVar3,2,lStack_208,param_2[0xe]);
              lStack_208 = lStack_208 + (long)(int)param_2[0xe] * 2;
              if ((int)lVar33 != 0) goto LAB_1082470dc;
              FUN_1082478cc(lVar17,lVar32,lVar19,lStack_198,uVar20,puStack_1d8,uVar3);
            }
            if (ppuVar35 == (undefined **)0x0) {
              (*pcRam0000000113869f28)(puStack_1d8,puVar18,puVar22,uVar31);
            }
            else {
              puVar23 = puVar18;
              puVar25 = puVar22;
              uVar26 = uVar31;
              puVar27 = puStack_1d8;
              if (0 < (int)uVar1) {
                do {
                  uVar9 = puVar27[1];
                  uVar10 = *puVar27;
                  uVar11 = puVar27[2];
                  iVar53 = *piStack_178;
                  uVar5 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                          *(int *)((long)puVar30 + (long)*piVar29 * 4);
                  *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar5 & 0x7fffffff;
                  iVar49 = 0;
                  if (*(int *)ppuVar35 != 0x36) {
                    iVar49 = *(int *)ppuVar35 + 1;
                  }
                  *(int *)ppuVar35 = iVar49;
                  iVar49 = 0;
                  if (*piVar29 != 0x36) {
                    iVar49 = *piVar29 + 1;
                  }
                  iVar53 = (uint)uVar9 * -0x4a89 + (uint)uVar10 * -0x25f7 + (uint)uVar11 * 0x7080 +
                           (((int)(uVar5 * 2) >> 0xe) * iVar53 >> 8) + 0x2020000;
                  *piVar29 = iVar49;
                  uVar5 = iVar53 >> 0x12 & (iVar53 >> 0x1f ^ 0xffffffffU);
                  if (0xfe < (int)uVar5) {
                    uVar5 = 0xff;
                  }
                  *puVar23 = (char)uVar5;
                  iVar53 = *piStack_178;
                  uVar5 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                          *(int *)((long)puVar30 + (long)*piVar29 * 4);
                  *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar5 & 0x7fffffff;
                  iVar49 = 0;
                  if (*(int *)ppuVar35 != 0x36) {
                    iVar49 = *(int *)ppuVar35 + 1;
                  }
                  iVar55 = *piVar29;
                  *(int *)ppuVar35 = iVar49;
                  iVar49 = 0;
                  if (iVar55 != 0x36) {
                    iVar49 = iVar55 + 1;
                  }
                  iVar53 = (uint)uVar9 * -0x5e34 + (uint)uVar10 * 0x7080 + (uint)uVar11 * -0x124c +
                           (((int)(uVar5 * 2) >> 0xe) * iVar53 >> 8) + 0x2020000;
                  uVar5 = iVar53 >> 0x12 & (iVar53 >> 0x1f ^ 0xffffffffU);
                  *piVar29 = iVar49;
                  if (0xfe < (int)uVar5) {
                    uVar5 = 0xff;
                  }
                  *puVar25 = (char)uVar5;
                  uVar26 = uVar26 - 1;
                  puVar23 = puVar23 + 1;
                  puVar25 = puVar25 + 1;
                  puVar27 = puVar27 + 4;
                } while (uVar26 != 0);
              }
            }
            puStack_180 = puStack_180 + (long)iVar47 * 2;
            puVar18 = puVar18 + (int)param_2[0xb];
            puVar22 = puVar22 + (int)param_2[0xb];
            lVar17 = lVar17 + uVar24;
            lVar19 = lVar19 + uVar24;
            lVar32 = lVar32 + uVar24;
            lStack_198 = lStack_198 + uVar34;
            iStack_1d0 = iStack_1d0 + 1;
          } while (iStack_1d0 != (int)uVar4 >> 1);
        }
        if ((uVar4 & 1) != 0) {
          if (0 < (int)uVar2) {
            lVar33 = 0;
            uVar20 = uVar3;
            do {
              bVar6 = *(byte *)(lVar17 + lVar33);
              bVar7 = *(byte *)(lVar32 + lVar33);
              bVar8 = *(byte *)(lVar19 + lVar33);
              if (ppuVar35 == (undefined **)0x0) {
                uVar28 = (undefined1)
                         ((uint)bVar6 * 0x41c7 + 0x108000 + (uint)bVar7 * 0x8123 +
                          (uint)bVar8 * 0x1914 >> 0x10);
              }
              else {
                iVar49 = *piStack_178;
                uVar2 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                        *(int *)((long)puVar30 + (long)*piVar29 * 4);
                *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar2 & 0x7fffffff;
                iVar47 = 0;
                if (*(int *)ppuVar35 != 0x36) {
                  iVar47 = *(int *)ppuVar35 + 1;
                }
                *(int *)ppuVar35 = iVar47;
                iVar47 = 0;
                if (*piVar29 != 0x36) {
                  iVar47 = *piVar29 + 1;
                }
                *piVar29 = iVar47;
                uVar28 = (undefined1)
                         ((uint)bVar6 * 0x41c7 + 0x108000 + (uint)bVar7 * 0x8123 +
                          (uint)bVar8 * 0x1914 + (((int)(uVar2 * 2) >> 0x10) * iVar49 >> 8) >> 0x10)
                ;
              }
              *puStack_180 = uVar28;
              lVar33 = lVar33 + 4;
              uVar20 = uVar20 - 1;
              puStack_180 = puStack_180 + 1;
            } while (uVar20 != 0);
          }
          if ((bVar14) ||
             (lVar33 = lStack_198, (*pcRam0000000113869a80)(lStack_198,0,uVar3,1,lStack_208,0),
             (int)lVar33 != 0)) {
            FUN_108247658(lVar17,lVar32,lVar19,4,0,puStack_1d8,uVar3);
          }
          else {
            FUN_1082478cc(lVar17,lVar32,lVar19,lStack_198,0,puStack_1d8,uVar3);
          }
          if (ppuVar35 == (undefined **)0x0) {
            (*pcRam0000000113869f28)(puStack_1d8,puVar18,puVar22,uVar31);
          }
          else {
            puVar27 = puStack_1d8;
            if (0 < (int)uVar1) {
              do {
                uVar9 = puVar27[1];
                uVar10 = *puVar27;
                uVar11 = puVar27[2];
                iVar49 = *piStack_178;
                uVar2 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                        *(int *)((long)puVar30 + (long)*piVar29 * 4);
                *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar2 & 0x7fffffff;
                iVar47 = 0;
                if (*(int *)ppuVar35 != 0x36) {
                  iVar47 = *(int *)ppuVar35 + 1;
                }
                *(int *)ppuVar35 = iVar47;
                iVar47 = 0;
                if (*piVar29 != 0x36) {
                  iVar47 = *piVar29 + 1;
                }
                iVar49 = (uint)uVar9 * -0x4a89 + (uint)uVar10 * -0x25f7 + (uint)uVar11 * 0x7080 +
                         (((int)(uVar2 * 2) >> 0xe) * iVar49 >> 8) + 0x2020000;
                *piVar29 = iVar47;
                uVar2 = iVar49 >> 0x12 & (iVar49 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar2) {
                  uVar2 = 0xff;
                }
                *puVar18 = (char)uVar2;
                iVar49 = *piStack_178;
                uVar2 = *(int *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) -
                        *(int *)((long)puVar30 + (long)*piVar29 * 4);
                *(uint *)((long)puVar30 + (long)*(int *)ppuVar35 * 4) = uVar2 & 0x7fffffff;
                iVar47 = 0;
                if (*(int *)ppuVar35 != 0x36) {
                  iVar47 = *(int *)ppuVar35 + 1;
                }
                iVar53 = *piVar29;
                *(int *)ppuVar35 = iVar47;
                iVar47 = 0;
                if (iVar53 != 0x36) {
                  iVar47 = iVar53 + 1;
                }
                iVar49 = (uint)uVar9 * -0x5e34 + (uint)uVar10 * 0x7080 + (uint)uVar11 * -0x124c +
                         (((int)(uVar2 * 2) >> 0xe) * iVar49 >> 8) + 0x2020000;
                uVar2 = iVar49 >> 0x12 & (iVar49 >> 0x1f ^ 0xffffffffU);
                *piVar29 = iVar47;
                if (0xfe < (int)uVar2) {
                  uVar2 = 0xff;
                }
                *puVar22 = (char)uVar2;
                uVar31 = uVar31 - 1;
                puVar22 = puVar22 + 1;
                puVar18 = puVar18 + 1;
                puVar27 = puVar27 + 4;
              } while (uVar31 != 0);
            }
          }
        }
        _free(puStack_1d8);
      }
      else {
        FUN_108221d00(PTR_DAT_1132548c8);
        puStack_170 = &UNK_10df0a9c0;
        uStack_168 = CONCAT44(uStack_168._4_4_,0xd);
        FUN_108221db8(lVar17,lVar32,lVar19,4,uVar20,8,*(undefined8 *)(param_2 + 4),param_2[10],
                      *(undefined8 *)(param_2 + 6),param_2[0xb]);
        if ((int)lVar17 == 0) {
          if (param_2[0x22] != 0) {
            return (undefined4 *)0x0;
          }
          param_2[0x22] = 1;
          return (undefined4 *)0x0;
        }
        if (!bVar14) {
          (*pcRam0000000113869a80)
                    (lStack_198,uVar20,uVar3,uVar4,*(undefined8 *)(param_2 + 0xc),param_2[0xe]);
        }
      }
      return (undefined4 *)0x1;
    }
    if (param_2[0x22] != 0) {
      return (undefined4 *)0x0;
    }
    uVar21 = 4;
  }
  param_2[0x22] = uVar21;
  return (undefined4 *)0x0;
}



/* Entry: 108246438; end: 10824667f;  */

void FUN_108246438(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((((*(long *)(param_1 + 4) == 0) || (*(long *)(param_1 + 6) == 0)) ||
        (*(long *)(param_1 + 8) == 0)) ||
       ((((uint)param_1[1] >> 2 & 1) != 0 && (*(long *)(param_1 + 0xc) == 0)))) {
      uVar6 = 3;
    }
    else {
      if ((param_1[1] & 3) == 0) {
        puVar5 = param_1;
        FUN_108245e30();
        if ((int)puVar5 == 0) {
          return;
        }
        *param_1 = 1;
        uVar1 = param_1[2];
        uVar2 = param_1[3];
        iVar18 = param_1[0x14];
        iVar3 = iVar18 << 2;
        lVar15 = *(long *)(param_1 + 0x12);
        lVar17 = *(long *)(param_1 + 6);
        lVar16 = *(long *)(param_1 + 8);
        lVar12 = *(long *)(param_1 + 4);
        func_0x000108230034();
        pcVar4 = pcRam0000000113869e50;
        (*pcRam0000000113869e50)(lVar12,0,lVar17,lVar16,lVar17,lVar16,lVar15,0,uVar1);
        lVar8 = (long)(int)param_1[10];
        lVar12 = lVar12 + lVar8;
        lVar9 = lVar15 + iVar3;
        if (2 < (int)uVar2) {
          lVar19 = (long)(iVar18 << 3);
          iVar18 = 2;
          lVar15 = lVar15 + (long)iVar3 * 2;
          lVar13 = lVar17;
          lVar14 = lVar16;
          do {
            lVar17 = lVar13 + (int)param_1[0xb];
            lVar16 = lVar14 + (int)param_1[0xb];
            (*pcVar4)(lVar12,lVar12 + (int)lVar8,lVar13,lVar14,lVar17,lVar16,lVar9,lVar15,uVar1);
            lVar8 = (long)(int)param_1[10];
            lVar12 = lVar12 + lVar8 * 2;
            lVar9 = lVar9 + lVar19;
            iVar18 = iVar18 + 2;
            lVar15 = lVar15 + lVar19;
            lVar13 = lVar17;
            lVar14 = lVar16;
          } while (iVar18 < (int)uVar2);
        }
        if ((1 < (int)uVar2) && ((uVar2 & 1) == 0)) {
          (*pcVar4)(lVar12,0,lVar17,lVar16,lVar17,lVar16,lVar9,0,uVar1);
        }
        if ((*(byte *)(param_1 + 1) >> 2 & 1) == 0) {
          return;
        }
        if ((int)uVar2 < 1) {
          return;
        }
        uVar7 = 0;
        lVar9 = *(long *)(param_1 + 0x12);
        lVar12 = *(long *)(param_1 + 0xc);
        do {
          if (0 < (int)uVar1) {
            lVar15 = lVar9 + (long)(int)(param_1[0x14] * uVar7) * 4;
            puVar10 = (undefined1 *)(lVar12 + (int)(param_1[0xe] * uVar7));
            uVar11 = (ulong)uVar1;
            do {
              *(undefined1 *)(lVar15 + 3) = *puVar10;
              lVar15 = lVar15 + 4;
              uVar11 = uVar11 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar2);
        return;
      }
      uVar6 = 4;
    }
    if (param_1[0x22] == 0) {
      param_1[0x22] = uVar6;
    }
  }
  return;
}



/* Entry: 108246680; end: 10824669f;  */

/* WARNING: Removing unreachable block (ram,0x000108246734) */
/* WARNING: Removing unreachable block (ram,0x000108246740) */
/* WARNING: Removing unreachable block (ram,0x000108246744) */
/* WARNING: Removing unreachable block (ram,0x00010824674c) */
/* WARNING: Removing unreachable block (ram,0x000108246770) */
/* WARNING: Removing unreachable block (ram,0x000108246a04) */
/* WARNING: Removing unreachable block (ram,0x000108246a0c) */
/* WARNING: Removing unreachable block (ram,0x000108246a14) */
/* WARNING: Removing unreachable block (ram,0x0001082472f4) */
/* WARNING: Removing unreachable block (ram,0x0001082472fc) */
/* WARNING: Removing unreachable block (ram,0x000108246a88) */
/* WARNING: Removing unreachable block (ram,0x000108246a8c) */
/* WARNING: Removing unreachable block (ram,0x00010824677c) */
/* WARNING: Removing unreachable block (ram,0x0001082466e0) */
/* WARNING: Removing unreachable block (ram,0x00010824691c) */
/* WARNING: Removing unreachable block (ram,0x000108246924) */
/* WARNING: Removing unreachable block (ram,0x00010824693c) */
/* WARNING: Removing unreachable block (ram,0x000108246958) */
/* WARNING: Removing unreachable block (ram,0x000108246968) */
/* WARNING: Removing unreachable block (ram,0x000108246b00) */
/* WARNING: Removing unreachable block (ram,0x000108246b64) */
/* WARNING: Removing unreachable block (ram,0x000108246b68) */
/* WARNING: Removing unreachable block (ram,0x000108246b74) */
/* WARNING: Removing unreachable block (ram,0x000108246808) */
/* WARNING: Removing unreachable block (ram,0x00010824680c) */
/* WARNING: Removing unreachable block (ram,0x000108246814) */
/* WARNING: Removing unreachable block (ram,0x000108247388) */
/* WARNING: Removing unreachable block (ram,0x0001082473b8) */
/* WARNING: Removing unreachable block (ram,0x0001082473cc) */
/* WARNING: Removing unreachable block (ram,0x000108247118) */
/* WARNING: Removing unreachable block (ram,0x00010824712c) */
/* WARNING: Removing unreachable block (ram,0x00010824713c) */
/* WARNING: Removing unreachable block (ram,0x000108247178) */
/* WARNING: Removing unreachable block (ram,0x000108247194) */
/* WARNING: Removing unreachable block (ram,0x0001082471bc) */
/* WARNING: Removing unreachable block (ram,0x0001082471f0) */
/* WARNING: Removing unreachable block (ram,0x000108247214) */
/* WARNING: Removing unreachable block (ram,0x000108247234) */
/* WARNING: Removing unreachable block (ram,0x000108247248) */
/* WARNING: Removing unreachable block (ram,0x000108246f00) */
/* WARNING: Removing unreachable block (ram,0x000108246f30) */
/* WARNING: Removing unreachable block (ram,0x000108246f44) */
/* WARNING: Removing unreachable block (ram,0x00010824690c) */
/* WARNING: Removing unreachable block (ram,0x0001082469cc) */
/* WARNING: Removing unreachable block (ram,0x000108246980) */
/* WARNING: Removing unreachable block (ram,0x000108246998) */
/* WARNING: Removing unreachable block (ram,0x0001082469dc) */
/* WARNING: Removing unreachable block (ram,0x0001082469b4) */
/* WARNING: Removing unreachable block (ram,0x0001082469c4) */
/* WARNING: Removing unreachable block (ram,0x0001082469e0) */
/* WARNING: Removing unreachable block (ram,0x000108246ec8) */
/* WARNING: Removing unreachable block (ram,0x000108246ee0) */
/* WARNING: Removing unreachable block (ram,0x000108246eec) */
/* WARNING: Removing unreachable block (ram,0x000108246f64) */
/* WARNING: Removing unreachable block (ram,0x000108246f6c) */
/* WARNING: Removing unreachable block (ram,0x000108246f80) */
/* WARNING: Removing unreachable block (ram,0x000108246fa8) */
/* WARNING: Removing unreachable block (ram,0x000108246fd8) */
/* WARNING: Removing unreachable block (ram,0x000108246fec) */
/* WARNING: Removing unreachable block (ram,0x000108247014) */
/* WARNING: Removing unreachable block (ram,0x000108246f94) */
/* WARNING: Removing unreachable block (ram,0x00010824700c) */
/* WARNING: Removing unreachable block (ram,0x000108247028) */
/* WARNING: Removing unreachable block (ram,0x000108247348) */
/* WARNING: Removing unreachable block (ram,0x000108247358) */
/* WARNING: Removing unreachable block (ram,0x000108247378) */
/* WARNING: Removing unreachable block (ram,0x0001082473f0) */
/* WARNING: Removing unreachable block (ram,0x0001082473fc) */
/* WARNING: Removing unreachable block (ram,0x000108247418) */
/* WARNING: Removing unreachable block (ram,0x0001082474b0) */
/* WARNING: Removing unreachable block (ram,0x0001082474b8) */
/* WARNING: Removing unreachable block (ram,0x0001082474d8) */
/* WARNING: Removing unreachable block (ram,0x000108247514) */
/* WARNING: Removing unreachable block (ram,0x000108247530) */
/* WARNING: Removing unreachable block (ram,0x000108247558) */
/* WARNING: Removing unreachable block (ram,0x00010824758c) */
/* WARNING: Removing unreachable block (ram,0x0001082475b0) */
/* WARNING: Removing unreachable block (ram,0x0001082475d0) */
/* WARNING: Removing unreachable block (ram,0x0001082475e4) */
/* WARNING: Removing unreachable block (ram,0x000108247094) */
/* WARNING: Removing unreachable block (ram,0x0001082470d4) */
/* WARNING: Removing unreachable block (ram,0x0001082472cc) */
/* WARNING: Removing unreachable block (ram,0x000108246e84) */
/* WARNING: Removing unreachable block (ram,0x00010824745c) */
/* WARNING: Removing unreachable block (ram,0x000108247634) */

int * FUN_108246680(int *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *puVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  int iVar28;
  double dVar26;
  uint uVar29;
  undefined1 auVar27 [16];
  int iVar30;
  uint uVar31;
  int iVar34;
  uint uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar36;
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong uStack_1d8;
  int iStack_1d0;
  long lStack_180;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar28 = param_1[2];
    iVar9 = (int)param_3;
    iVar15 = -iVar9;
    if (-1 < iVar9) {
      iVar15 = iVar9;
    }
    if (iVar15 < iVar28 * 3) {
      piVar7 = (int *)0x0;
    }
    else {
      if (*param_1 == 0) {
        uVar1 = param_2 + 2;
        lVar12 = param_2 + 1;
        iVar15 = param_1[2];
        uVar5 = param_1[3];
        *param_1 = 0;
        param_1[1] = 0;
        piVar7 = param_1;
        FUN_108245ed0();
        if ((int)piVar7 != 0) {
          uVar2 = (int)(iVar15 + 1U) >> 1;
          if ((iVar15 + 1U < 2) || (-1 < (int)uVar2)) {
            uStack_1d8 = -(ulong)((uVar2 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                         (ulong)(uVar2 << 2) << 1;
            _malloc();
          }
          else {
            uStack_1d8 = 0;
          }
          lStack_180 = *(long *)(param_1 + 4);
          lVar8 = *(long *)(param_1 + 6);
          lVar10 = *(long *)(param_1 + 8);
          FUN_108230ad8();
          iVar28 = 0x13254c38;
          _pthread_mutex_lock();
          puVar6 = PTR_DAT_1132548c8;
          if (iVar28 == 0) {
            if ((PTR_LOOP_113254c30 != PTR_DAT_1132548c8) && (iRam000000011372a020 == 0)) {
              lVar13 = 0;
              uVar31 = 4;
              iVar34 = 5;
              uVar35 = 6;
              iVar36 = 7;
              uVar17 = 0;
              iVar28 = 1;
              uVar29 = 2;
              iVar30 = 3;
              auVar37 = NEON_fmov(0x3fe0000000000000,8);
              dVar40 = auVar37._8_8_;
              dVar26 = auVar37._0_8_;
              do {
                auVar27._4_4_ = 0;
                auVar27._0_4_ = uVar29;
                auVar27._8_4_ = iVar30;
                auVar27._12_4_ = 0;
                auVar37 = NEON_ucvtf(auVar27,8);
                auVar32._4_4_ = 0;
                auVar32._0_4_ = uVar35;
                auVar32._8_4_ = iVar36;
                auVar32._12_4_ = 0;
                auVar33 = NEON_ucvtf(auVar32,8);
                auVar38._4_4_ = 0;
                auVar38._0_4_ = uVar17;
                auVar38._8_4_ = iVar28;
                auVar38._12_4_ = 0;
                auVar39 = NEON_ucvtf(auVar38,8);
                auVar41._4_4_ = 0;
                auVar41._0_4_ = uVar31;
                auVar41._8_4_ = iVar34;
                auVar41._12_4_ = 0;
                auVar42 = NEON_ucvtf(auVar41,8);
                dVar18 = (double)_pow(auVar37._8_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar19 = (double)_pow(auVar37._0_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar20 = (double)_pow(auVar33._8_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar21 = (double)_pow(auVar33._0_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar22 = (double)_pow(auVar39._8_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar23 = (double)_pow(auVar39._0_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar24 = (double)_pow(auVar42._8_8_ * 0.00392156862745098,0x3fe999999999999a);
                dVar25 = (double)_pow(auVar42._0_8_ * 0.00392156862745098,0x3fe999999999999a);
                auVar43._4_4_ = (int)(long)(dVar40 + dVar22 * 4095.0);
                auVar43._0_4_ = (int)(long)(dVar26 + dVar23 * 4095.0);
                auVar43._8_8_ = 0;
                auVar42._8_8_ = 0x3534313025242120;
                auVar42._0_8_ = 0x1514111005040100;
                auVar37._4_4_ = (int)(long)(dVar40 + dVar18 * 4095.0);
                auVar37._0_4_ = (int)(long)(dVar26 + dVar19 * 4095.0);
                auVar37._8_8_ = 0;
                auVar33._4_4_ = (int)(long)(dVar40 + dVar24 * 4095.0);
                auVar33._0_4_ = (int)(long)(dVar26 + dVar25 * 4095.0);
                auVar33._8_8_ = 0;
                auVar39._4_4_ = (int)(long)(dVar40 + dVar20 * 4095.0);
                auVar39._0_4_ = (int)(long)(dVar26 + dVar21 * 4095.0);
                auVar39._8_8_ = 0;
                auVar37 = a64_TBL(ZEXT816(0),auVar43,auVar37,auVar33,auVar39,auVar42);
                *(long *)(lVar13 + 0x11372a0b0) = auVar37._8_8_;
                *(long *)(lVar13 + 0x11372a0a8) = auVar37._0_8_;
                uVar17 = uVar17 + 8;
                iVar28 = iVar28 + 8;
                uVar29 = uVar29 + 8;
                iVar30 = iVar30 + 8;
                uVar31 = uVar31 + 8;
                iVar34 = iVar34 + 8;
                uVar35 = uVar35 + 8;
                iVar36 = iVar36 + 8;
                lVar13 = lVar13 + 0x10;
              } while (lVar13 != 0x200);
              uVar14 = 0;
              do {
                dVar26 = (double)_pow((double)(uVar14 & 0xffffffff) * 0.03125763125763126,
                                      0x3ff4000000000000);
                *(int *)(uVar14 * 4 + 0x11372a024) = (int)(dVar26 * 255.0 + 0.5);
                uVar14 = uVar14 + 1;
              } while (uVar14 != 0x21);
              iRam000000011372a020 = 1;
            }
            PTR_LOOP_113254c30 = puVar6;
            _pthread_mutex_unlock(0x113254c38);
          }
          if (uStack_1d8 == 0) {
            if (param_1[0x22] == 0) {
              param_1[0x22] = 1;
            }
            piVar7 = (int *)0x0;
          }
          else {
            iVar28 = (int)uVar5 >> 1;
            uVar14 = uVar1;
            uVar16 = param_2;
            if (0 < iVar28) {
              iStack_1d0 = 0;
              uVar11 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
              puVar4 = (undefined8 *)0x113869f20;
              if (param_2 <= uVar1) {
                puVar4 = (undefined8 *)0x113869f18;
              }
              do {
                uVar3 = uVar14;
                if (param_2 <= uVar1) {
                  uVar3 = uVar16;
                }
                (*(code *)*puVar4)(uVar3,lStack_180,iVar15);
                (*(code *)*puVar4)(uVar3 + (long)iVar9,lStack_180 + param_1[10],iVar15);
                iVar30 = param_1[10];
                FUN_108247658(uVar14,lVar12,uVar16,3,param_3,uStack_1d8,iVar15);
                (*pcRam0000000113869f28)(uStack_1d8,lVar8,lVar10,uVar2);
                lStack_180 = lStack_180 + (long)iVar30 * 2;
                lVar8 = lVar8 + param_1[0xb];
                lVar10 = lVar10 + param_1[0xb];
                uVar14 = uVar14 + uVar11;
                uVar16 = uVar16 + uVar11;
                lVar12 = lVar12 + uVar11;
                iStack_1d0 = iStack_1d0 + 1;
              } while (iStack_1d0 != iVar28);
            }
            if ((uVar5 & 1) != 0) {
              uVar1 = uVar14;
              if (uVar16 <= uVar14) {
                uVar1 = uVar16;
              }
              puVar4 = (undefined8 *)0x113869f20;
              if (uVar16 <= uVar14) {
                puVar4 = (undefined8 *)0x113869f18;
              }
              (*(code *)*puVar4)(uVar1,lStack_180,iVar15);
              FUN_108247658(uVar14,lVar12,uVar16,3,0,uStack_1d8,iVar15);
              (*pcRam0000000113869f28)(uStack_1d8,lVar8,lVar10,uVar2);
            }
            _free(uStack_1d8);
            piVar7 = (int *)0x1;
          }
        }
        return piVar7;
      }
      iVar15 = param_1[3];
      piVar7 = param_1;
      FUN_108245ff0();
      if ((int)piVar7 != 0) {
        func_0x00010822f518();
        FUN_10822dff4();
        if (0 < iVar15) {
          lVar12 = *(long *)(param_1 + 0x12);
          do {
            (*pcRam0000000113869ab0)(param_2 + 2,param_2 + 1,param_2,(long)iVar28,3,lVar12);
            lVar12 = lVar12 + (long)param_1[0x14] * 4;
            param_2 = param_2 + (long)iVar9;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        piVar7 = (int *)0x1;
      }
    }
    return piVar7;
  }
  return (int *)0x0;
}



/* Entry: 1082466a0; end: 10824685b;  */

/* WARNING: Removing unreachable block (ram,0x000108246a04) */
/* WARNING: Removing unreachable block (ram,0x000108246a0c) */
/* WARNING: Removing unreachable block (ram,0x000108246a14) */
/* WARNING: Removing unreachable block (ram,0x0001082472f4) */
/* WARNING: Removing unreachable block (ram,0x0001082472fc) */
/* WARNING: Removing unreachable block (ram,0x000108246a88) */
/* WARNING: Removing unreachable block (ram,0x000108246a8c) */
/* WARNING: Removing unreachable block (ram,0x000108246b00) */
/* WARNING: Removing unreachable block (ram,0x000108246b64) */
/* WARNING: Removing unreachable block (ram,0x000108246b68) */
/* WARNING: Removing unreachable block (ram,0x000108246b74) */
/* WARNING: Removing unreachable block (ram,0x000108247388) */
/* WARNING: Removing unreachable block (ram,0x0001082473b8) */
/* WARNING: Removing unreachable block (ram,0x0001082473cc) */
/* WARNING: Removing unreachable block (ram,0x000108246fa8) */
/* WARNING: Removing unreachable block (ram,0x000108246fd8) */
/* WARNING: Removing unreachable block (ram,0x000108246fec) */
/* WARNING: Removing unreachable block (ram,0x000108246f00) */
/* WARNING: Removing unreachable block (ram,0x000108246f30) */
/* WARNING: Removing unreachable block (ram,0x000108246f44) */
/* WARNING: Removing unreachable block (ram,0x000108247118) */
/* WARNING: Removing unreachable block (ram,0x00010824712c) */
/* WARNING: Removing unreachable block (ram,0x00010824713c) */
/* WARNING: Removing unreachable block (ram,0x000108247178) */
/* WARNING: Removing unreachable block (ram,0x000108247194) */
/* WARNING: Removing unreachable block (ram,0x0001082471bc) */
/* WARNING: Removing unreachable block (ram,0x0001082471f0) */
/* WARNING: Removing unreachable block (ram,0x000108247214) */
/* WARNING: Removing unreachable block (ram,0x000108247234) */
/* WARNING: Removing unreachable block (ram,0x000108247248) */
/* WARNING: Removing unreachable block (ram,0x0001082474b0) */
/* WARNING: Removing unreachable block (ram,0x0001082474b8) */
/* WARNING: Removing unreachable block (ram,0x0001082474d8) */
/* WARNING: Removing unreachable block (ram,0x000108247514) */
/* WARNING: Removing unreachable block (ram,0x000108247530) */
/* WARNING: Removing unreachable block (ram,0x000108247558) */
/* WARNING: Removing unreachable block (ram,0x00010824758c) */
/* WARNING: Removing unreachable block (ram,0x0001082475b0) */
/* WARNING: Removing unreachable block (ram,0x0001082475d0) */
/* WARNING: Removing unreachable block (ram,0x0001082475e4) */

void FUN_1082466a0(int *param_1,long param_2,ulong param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  int iVar37;
  double dVar35;
  uint uVar38;
  undefined1 auVar36 [16];
  int iVar39;
  uint uVar40;
  int iVar43;
  uint uVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar45;
  undefined1 auVar46 [16];
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  long lStack_208;
  ulong uStack_1d8;
  int iStack_1d0;
  long lStack_198;
  undefined1 *puStack_180;
  
  lVar21 = 0;
  if (param_5 != 0) {
    lVar21 = 2;
  }
  lVar14 = 2;
  if (param_5 != 0) {
    lVar14 = 0;
  }
  lVar20 = (long)param_1[2];
  iVar15 = (int)param_3;
  iVar24 = -iVar15;
  if (-1 < iVar15) {
    iVar24 = iVar15;
  }
  iVar37 = 3;
  if (param_6 != 0) {
    iVar37 = 4;
  }
  if (iVar24 < param_1[2] * iVar37) {
    return;
  }
  if (*param_1 != 0) {
    iVar24 = param_1[3];
    piVar13 = param_1;
    FUN_108245ff0();
    if ((int)piVar13 == 0) {
      return;
    }
    func_0x00010822f518();
    FUN_10822dff4();
    if (param_6 == 0) {
      if (iVar24 < 1) {
        return;
      }
      lVar22 = *(long *)(param_1 + 0x12);
      do {
        (*pcRam0000000113869ab0)
                  (param_2 + lVar21,param_2 + 1,param_2 + lVar14,lVar20,param_4,lVar22);
        lVar22 = lVar22 + (long)param_1[0x14] * 4;
        param_2 = param_2 + iVar15;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      return;
    }
    lVar21 = *(long *)(param_1 + 0x12);
    if (param_5 == 0) {
      if (iVar24 < 1) {
        return;
      }
      do {
        (*pcRam0000000113869c70)(param_2,lVar20,lVar21);
        param_2 = param_2 + iVar15;
        lVar21 = lVar21 + (long)param_1[0x14] * 4;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      return;
    }
    if (iVar24 < 1) {
      return;
    }
    do {
      _memcpy(lVar21,param_2,lVar20 << 2);
      param_2 = param_2 + iVar15;
      lVar21 = lVar21 + (long)param_1[0x14] * 4;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    return;
  }
  lStack_198 = 0;
  if (param_6 != 0) {
    lStack_198 = param_2 + 3;
  }
  uVar19 = param_2 + lVar21;
  lVar21 = param_2 + 1;
  uVar4 = param_2 + lVar14;
  uVar8 = param_1[2];
  uVar9 = (ulong)uVar8;
  uVar10 = param_1[3];
  iVar24 = (int)param_4;
  if (lStack_198 == 0) {
    iVar37 = 0;
    bVar12 = true;
    goto LAB_1082469f0;
  }
  FUN_10822dff4();
  if (iVar24 == 1) {
    if ((int)uVar10 < 1) {
LAB_1082469cc:
      iVar37 = 0;
      bVar12 = true;
      goto LAB_1082469f0;
    }
    iVar37 = uVar10 + 1;
    lVar14 = lStack_198;
    do {
      lVar20 = lVar14;
      (*pcRam0000000113869a98)(lVar14,uVar9);
      bVar12 = (int)lVar20 == 0;
      if ((int)lVar20 != 0) goto LAB_1082469dc;
      lVar14 = lVar14 + iVar15;
      iVar37 = iVar37 + -1;
    } while (1 < iVar37);
  }
  else {
    if ((int)uVar10 < 1) goto LAB_1082469cc;
    iVar37 = uVar10 + 1;
    lVar14 = lStack_198;
    do {
      lVar20 = lVar14;
      (*pcRam0000000113869a90)(lVar14,uVar9);
      bVar12 = (int)lVar20 == 0;
      if ((int)lVar20 != 0) goto LAB_1082469dc;
      lVar14 = lVar14 + iVar15;
      iVar37 = iVar37 + -1;
    } while (1 < iVar37);
  }
  iVar37 = 0;
LAB_1082469f0:
  *param_1 = 0;
  param_1[1] = iVar37;
  piVar13 = param_1;
  FUN_108245ed0();
  if ((int)piVar13 != 0) {
    uVar5 = (int)(uVar8 + 1) >> 1;
    if ((uVar8 + 1 < 2) || (-1 < (int)uVar5)) {
      uStack_1d8 = -(ulong)((uVar5 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                   (ulong)(uVar5 << 2) << 1;
      _malloc();
    }
    else {
      uStack_1d8 = 0;
    }
    puStack_180 = *(undefined1 **)(param_1 + 4);
    lVar14 = *(long *)(param_1 + 6);
    lVar20 = *(long *)(param_1 + 8);
    lStack_208 = *(long *)(param_1 + 0xc);
    FUN_108230ad8();
    iVar37 = 0x13254c38;
    _pthread_mutex_lock();
    puVar11 = PTR_DAT_1132548c8;
    if (iVar37 == 0) {
      if ((PTR_LOOP_113254c30 != PTR_DAT_1132548c8) && (iRam000000011372a020 == 0)) {
        lVar22 = 0;
        uVar40 = 4;
        iVar43 = 5;
        uVar44 = 6;
        iVar45 = 7;
        uVar26 = 0;
        iVar37 = 1;
        uVar38 = 2;
        iVar39 = 3;
        auVar46 = NEON_fmov(0x3fe0000000000000,8);
        dVar49 = auVar46._8_8_;
        dVar35 = auVar46._0_8_;
        do {
          auVar36._4_4_ = 0;
          auVar36._0_4_ = uVar38;
          auVar36._8_4_ = iVar39;
          auVar36._12_4_ = 0;
          auVar46 = NEON_ucvtf(auVar36,8);
          auVar41._4_4_ = 0;
          auVar41._0_4_ = uVar44;
          auVar41._8_4_ = iVar45;
          auVar41._12_4_ = 0;
          auVar42 = NEON_ucvtf(auVar41,8);
          auVar47._4_4_ = 0;
          auVar47._0_4_ = uVar26;
          auVar47._8_4_ = iVar37;
          auVar47._12_4_ = 0;
          auVar48 = NEON_ucvtf(auVar47,8);
          auVar50._4_4_ = 0;
          auVar50._0_4_ = uVar40;
          auVar50._8_4_ = iVar43;
          auVar50._12_4_ = 0;
          auVar51 = NEON_ucvtf(auVar50,8);
          dVar27 = (double)_pow(auVar46._8_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar28 = (double)_pow(auVar46._0_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar29 = (double)_pow(auVar42._8_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar30 = (double)_pow(auVar42._0_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar31 = (double)_pow(auVar48._8_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar32 = (double)_pow(auVar48._0_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar33 = (double)_pow(auVar51._8_8_ * 0.00392156862745098,0x3fe999999999999a);
          dVar34 = (double)_pow(auVar51._0_8_ * 0.00392156862745098,0x3fe999999999999a);
          auVar52._4_4_ = (int)(long)(dVar49 + dVar31 * 4095.0);
          auVar52._0_4_ = (int)(long)(dVar35 + dVar32 * 4095.0);
          auVar52._8_8_ = 0;
          auVar51._8_8_ = 0x3534313025242120;
          auVar51._0_8_ = 0x1514111005040100;
          auVar46._4_4_ = (int)(long)(dVar49 + dVar27 * 4095.0);
          auVar46._0_4_ = (int)(long)(dVar35 + dVar28 * 4095.0);
          auVar46._8_8_ = 0;
          auVar42._4_4_ = (int)(long)(dVar49 + dVar33 * 4095.0);
          auVar42._0_4_ = (int)(long)(dVar35 + dVar34 * 4095.0);
          auVar42._8_8_ = 0;
          auVar48._4_4_ = (int)(long)(dVar49 + dVar29 * 4095.0);
          auVar48._0_4_ = (int)(long)(dVar35 + dVar30 * 4095.0);
          auVar48._8_8_ = 0;
          auVar46 = a64_TBL(ZEXT816(0),auVar52,auVar46,auVar42,auVar48,auVar51);
          *(long *)(lVar22 + 0x11372a0b0) = auVar46._8_8_;
          *(long *)(lVar22 + 0x11372a0a8) = auVar46._0_8_;
          uVar26 = uVar26 + 8;
          iVar37 = iVar37 + 8;
          uVar38 = uVar38 + 8;
          iVar39 = iVar39 + 8;
          uVar40 = uVar40 + 8;
          iVar43 = iVar43 + 8;
          uVar44 = uVar44 + 8;
          iVar45 = iVar45 + 8;
          lVar22 = lVar22 + 0x10;
        } while (lVar22 != 0x200);
        uVar23 = 0;
        do {
          dVar35 = (double)_pow((double)(uVar23 & 0xffffffff) * 0.03125763125763126,
                                0x3ff4000000000000);
          *(int *)(uVar23 * 4 + 0x11372a024) = (int)(dVar35 * 255.0 + 0.5);
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x21);
        iRam000000011372a020 = 1;
      }
      PTR_LOOP_113254c30 = puVar11;
      _pthread_mutex_unlock(0x113254c38);
    }
    if (uStack_1d8 == 0) {
      if (param_1[0x22] == 0) {
        param_1[0x22] = 1;
      }
    }
    else {
      uVar23 = uVar19;
      uVar25 = uVar4;
      if (0 < (int)uVar10 >> 1) {
        iStack_1d0 = 0;
        uVar17 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
        uVar6 = 0;
        if (!bVar12) {
          uVar6 = uVar17;
        }
        puVar7 = (undefined8 *)0x113869f20;
        if (uVar4 <= uVar19) {
          puVar7 = (undefined8 *)0x113869f18;
        }
        do {
          if (iVar24 == 3) {
            uVar18 = uVar23;
            if (uVar4 <= uVar19) {
              uVar18 = uVar25;
            }
            (*(code *)*puVar7)(uVar18,puStack_180,uVar9);
            (*(code *)*puVar7)(uVar18 + (long)iVar15,puStack_180 + param_1[10],uVar9);
          }
          else if (0 < (int)uVar8) {
            lVar22 = 0;
            puVar16 = puStack_180;
            uVar18 = uVar9;
            do {
              *puVar16 = (char)((uint)*(byte *)(uVar23 + lVar22) * 0x41c7 + 0x108000 +
                                (uint)*(byte *)(lVar21 + lVar22) * 0x8123 +
                                (uint)*(byte *)(uVar25 + lVar22) * 0x1914 >> 0x10);
              lVar22 = lVar22 + iVar24;
              uVar18 = uVar18 - 1;
              puVar16 = puVar16 + 1;
            } while (uVar18 != 0);
            puVar16 = puStack_180 + param_1[10];
            lVar22 = (long)iVar15;
            uVar18 = uVar9;
            do {
              pbVar1 = (byte *)(uVar23 + lVar22);
              pbVar2 = (byte *)(lVar21 + lVar22);
              pbVar3 = (byte *)(uVar25 + lVar22);
              lVar22 = lVar22 + iVar24;
              *puVar16 = (char)((uint)*pbVar1 * 0x41c7 + 0x108000 + (uint)*pbVar2 * 0x8123 +
                                (uint)*pbVar3 * 0x1914 >> 0x10);
              uVar18 = uVar18 - 1;
              puVar16 = puVar16 + 1;
            } while (uVar18 != 0);
          }
          iVar37 = param_1[10];
          if (bVar12) {
LAB_1082470dc:
            FUN_108247658(uVar23,lVar21,uVar25,param_4,param_3,uStack_1d8,uVar9);
          }
          else {
            lVar22 = lStack_198;
            (*pcRam0000000113869a80)(lStack_198,param_3,uVar9,2,lStack_208,param_1[0xe]);
            lStack_208 = lStack_208 + (long)param_1[0xe] * 2;
            if ((int)lVar22 != 0) goto LAB_1082470dc;
            FUN_1082478cc(uVar23,lVar21,uVar25,lStack_198,param_3,uStack_1d8,uVar9);
          }
          (*pcRam0000000113869f28)(uStack_1d8,lVar14,lVar20,uVar5);
          puStack_180 = puStack_180 + (long)iVar37 * 2;
          lVar14 = lVar14 + param_1[0xb];
          lVar20 = lVar20 + param_1[0xb];
          uVar23 = uVar23 + uVar17;
          uVar25 = uVar25 + uVar17;
          lVar21 = lVar21 + uVar17;
          lStack_198 = lStack_198 + uVar6;
          iStack_1d0 = iStack_1d0 + 1;
        } while (iStack_1d0 != (int)uVar10 >> 1);
      }
      if ((uVar10 & 1) != 0) {
        if (iVar24 == 3) {
          uVar19 = uVar23;
          if (uVar25 <= uVar23) {
            uVar19 = uVar25;
          }
          puVar7 = (undefined8 *)0x113869f20;
          if (uVar25 <= uVar23) {
            puVar7 = (undefined8 *)0x113869f18;
          }
          (*(code *)*puVar7)(uVar19,puStack_180,uVar9);
        }
        else if (0 < (int)uVar8) {
          lVar22 = 0;
          uVar19 = uVar9;
          do {
            *puStack_180 = (char)((uint)*(byte *)(uVar23 + lVar22) * 0x41c7 + 0x108000 +
                                  (uint)*(byte *)(lVar21 + lVar22) * 0x8123 +
                                  (uint)*(byte *)(uVar25 + lVar22) * 0x1914 >> 0x10);
            lVar22 = lVar22 + iVar24;
            uVar19 = uVar19 - 1;
            puStack_180 = puStack_180 + 1;
          } while (uVar19 != 0);
        }
        if ((bVar12) ||
           (lVar22 = lStack_198, (*pcRam0000000113869a80)(lStack_198,0,uVar9,1,lStack_208,0),
           (int)lVar22 != 0)) {
          FUN_108247658(uVar23,lVar21,uVar25,param_4,0,uStack_1d8,uVar9);
        }
        else {
          FUN_1082478cc(uVar23,lVar21,uVar25,lStack_198,0,uStack_1d8,uVar9);
        }
        (*pcRam0000000113869f28)(uStack_1d8,lVar14,lVar20,uVar5);
      }
      _free(uStack_1d8);
    }
  }
  return;
LAB_1082469dc:
  iVar37 = 4;
  goto LAB_1082469f0;
}



/* Entry: 10824685c; end: 1082468bb;  */

/* WARNING: Removing unreachable block (ram,0x000108246808) */
/* WARNING: Removing unreachable block (ram,0x00010824680c) */
/* WARNING: Removing unreachable block (ram,0x000108246814) */
/* WARNING: Removing unreachable block (ram,0x00010824691c) */
/* WARNING: Removing unreachable block (ram,0x000108246924) */
/* WARNING: Removing unreachable block (ram,0x00010824693c) */
/* WARNING: Removing unreachable block (ram,0x000108246958) */
/* WARNING: Removing unreachable block (ram,0x000108246968) */
/* WARNING: Removing unreachable block (ram,0x000108246a04) */
/* WARNING: Removing unreachable block (ram,0x000108246a0c) */
/* WARNING: Removing unreachable block (ram,0x000108246a14) */
/* WARNING: Removing unreachable block (ram,0x0001082472f4) */
/* WARNING: Removing unreachable block (ram,0x0001082472fc) */
/* WARNING: Removing unreachable block (ram,0x000108246a88) */
/* WARNING: Removing unreachable block (ram,0x000108246a8c) */
/* WARNING: Removing unreachable block (ram,0x0001082467bc) */
/* WARNING: Removing unreachable block (ram,0x0001082467c4) */
/* WARNING: Removing unreachable block (ram,0x0001082467d0) */
/* WARNING: Removing unreachable block (ram,0x000108246804) */
/* WARNING: Removing unreachable block (ram,0x00010824702c) */
/* WARNING: Removing unreachable block (ram,0x000108247034) */
/* WARNING: Removing unreachable block (ram,0x000108246b00) */
/* WARNING: Removing unreachable block (ram,0x00010824741c) */
/* WARNING: Removing unreachable block (ram,0x000108247420) */
/* WARNING: Removing unreachable block (ram,0x000108247434) */
/* WARNING: Removing unreachable block (ram,0x000108247388) */
/* WARNING: Removing unreachable block (ram,0x0001082473b8) */
/* WARNING: Removing unreachable block (ram,0x0001082473cc) */
/* WARNING: Removing unreachable block (ram,0x000108246fa8) */
/* WARNING: Removing unreachable block (ram,0x000108246fd8) */
/* WARNING: Removing unreachable block (ram,0x000108246fec) */
/* WARNING: Removing unreachable block (ram,0x000108246f00) */
/* WARNING: Removing unreachable block (ram,0x000108246f30) */
/* WARNING: Removing unreachable block (ram,0x000108246f44) */
/* WARNING: Removing unreachable block (ram,0x000108247118) */
/* WARNING: Removing unreachable block (ram,0x00010824712c) */
/* WARNING: Removing unreachable block (ram,0x00010824713c) */
/* WARNING: Removing unreachable block (ram,0x000108247178) */
/* WARNING: Removing unreachable block (ram,0x000108247194) */
/* WARNING: Removing unreachable block (ram,0x0001082471bc) */
/* WARNING: Removing unreachable block (ram,0x0001082471f0) */
/* WARNING: Removing unreachable block (ram,0x000108247214) */
/* WARNING: Removing unreachable block (ram,0x000108247234) */
/* WARNING: Removing unreachable block (ram,0x000108247248) */
/* WARNING: Removing unreachable block (ram,0x0001082474b0) */
/* WARNING: Removing unreachable block (ram,0x0001082474b8) */
/* WARNING: Removing unreachable block (ram,0x0001082474d8) */
/* WARNING: Removing unreachable block (ram,0x000108247514) */
/* WARNING: Removing unreachable block (ram,0x000108247530) */
/* WARNING: Removing unreachable block (ram,0x000108247558) */
/* WARNING: Removing unreachable block (ram,0x00010824758c) */
/* WARNING: Removing unreachable block (ram,0x0001082475b0) */
/* WARNING: Removing unreachable block (ram,0x0001082475d0) */
/* WARNING: Removing unreachable block (ram,0x0001082475e4) */

int * FUN_10824685c(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar32;
  double dVar30;
  uint uVar33;
  undefined1 auVar31 [16];
  int iVar34;
  uint uVar35;
  int iVar38;
  uint uVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_208;
  ulong uStack_1d8;
  int iStack_1d0;
  long lStack_198;
  undefined1 *puStack_180;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return (int *)0x0;
  }
  iVar34 = param_1[2];
  iVar12 = (int)param_3;
  iVar32 = -iVar12;
  if (-1 < iVar12) {
    iVar32 = iVar12;
  }
  if (iVar32 < iVar34 * 4) {
    piVar10 = (int *)0x0;
  }
  else {
    if (*param_1 == 0) {
      lStack_198 = param_2 + 3;
      lVar17 = param_2 + 2;
      lVar18 = param_2 + 1;
      uVar5 = param_1[2];
      uVar6 = (ulong)uVar5;
      uVar7 = param_1[3];
      if (lStack_198 == 0) {
        iVar32 = 0;
        bVar9 = true;
      }
      else {
        FUN_10822dff4();
        if ((int)uVar7 < 1) {
          iVar32 = 0;
          bVar9 = true;
        }
        else {
          iVar32 = uVar7 + 1;
          lVar11 = lStack_198;
          do {
            lVar13 = lVar11;
            (*pcRam0000000113869a90)(lVar11,uVar6);
            bVar9 = (int)lVar13 == 0;
            if ((int)lVar13 != 0) {
              iVar32 = 4;
              goto LAB_1082469f0;
            }
            lVar11 = lVar11 + iVar12;
            iVar32 = iVar32 + -1;
          } while (1 < iVar32);
          iVar32 = 0;
        }
      }
LAB_1082469f0:
      *param_1 = 0;
      param_1[1] = iVar32;
      piVar10 = param_1;
      FUN_108245ed0();
      if ((int)piVar10 != 0) {
        uVar4 = (int)(uVar5 + 1) >> 1;
        if ((uVar5 + 1 < 2) || (-1 < (int)uVar4)) {
          uStack_1d8 = -(ulong)((uVar4 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                       (ulong)(uVar4 << 2) << 1;
          _malloc();
        }
        else {
          uStack_1d8 = 0;
        }
        puStack_180 = *(undefined1 **)(param_1 + 4);
        lVar11 = *(long *)(param_1 + 6);
        lVar13 = *(long *)(param_1 + 8);
        lStack_208 = *(long *)(param_1 + 0xc);
        FUN_108230ad8();
        iVar32 = 0x13254c38;
        _pthread_mutex_lock();
        puVar8 = PTR_DAT_1132548c8;
        if (iVar32 == 0) {
          if ((PTR_LOOP_113254c30 != PTR_DAT_1132548c8) && (iRam000000011372a020 == 0)) {
            lVar19 = 0;
            uVar35 = 4;
            iVar38 = 5;
            uVar39 = 6;
            iVar40 = 7;
            uVar21 = 0;
            iVar32 = 1;
            uVar33 = 2;
            iVar34 = 3;
            auVar41 = NEON_fmov(0x3fe0000000000000,8);
            dVar44 = auVar41._8_8_;
            dVar30 = auVar41._0_8_;
            do {
              auVar31._4_4_ = 0;
              auVar31._0_4_ = uVar33;
              auVar31._8_4_ = iVar34;
              auVar31._12_4_ = 0;
              auVar41 = NEON_ucvtf(auVar31,8);
              auVar36._4_4_ = 0;
              auVar36._0_4_ = uVar39;
              auVar36._8_4_ = iVar40;
              auVar36._12_4_ = 0;
              auVar37 = NEON_ucvtf(auVar36,8);
              auVar42._4_4_ = 0;
              auVar42._0_4_ = uVar21;
              auVar42._8_4_ = iVar32;
              auVar42._12_4_ = 0;
              auVar43 = NEON_ucvtf(auVar42,8);
              auVar45._4_4_ = 0;
              auVar45._0_4_ = uVar35;
              auVar45._8_4_ = iVar38;
              auVar45._12_4_ = 0;
              auVar46 = NEON_ucvtf(auVar45,8);
              dVar22 = (double)_pow(auVar41._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar23 = (double)_pow(auVar41._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar24 = (double)_pow(auVar37._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar25 = (double)_pow(auVar37._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar26 = (double)_pow(auVar43._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar27 = (double)_pow(auVar43._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar28 = (double)_pow(auVar46._8_8_ * 0.00392156862745098,0x3fe999999999999a);
              dVar29 = (double)_pow(auVar46._0_8_ * 0.00392156862745098,0x3fe999999999999a);
              auVar47._4_4_ = (int)(long)(dVar44 + dVar26 * 4095.0);
              auVar47._0_4_ = (int)(long)(dVar30 + dVar27 * 4095.0);
              auVar47._8_8_ = 0;
              auVar46._8_8_ = 0x3534313025242120;
              auVar46._0_8_ = 0x1514111005040100;
              auVar41._4_4_ = (int)(long)(dVar44 + dVar22 * 4095.0);
              auVar41._0_4_ = (int)(long)(dVar30 + dVar23 * 4095.0);
              auVar41._8_8_ = 0;
              auVar37._4_4_ = (int)(long)(dVar44 + dVar28 * 4095.0);
              auVar37._0_4_ = (int)(long)(dVar30 + dVar29 * 4095.0);
              auVar37._8_8_ = 0;
              auVar43._4_4_ = (int)(long)(dVar44 + dVar24 * 4095.0);
              auVar43._0_4_ = (int)(long)(dVar30 + dVar25 * 4095.0);
              auVar43._8_8_ = 0;
              auVar41 = a64_TBL(ZEXT816(0),auVar47,auVar41,auVar37,auVar43,auVar46);
              *(long *)(lVar19 + 0x11372a0b0) = auVar41._8_8_;
              *(long *)(lVar19 + 0x11372a0a8) = auVar41._0_8_;
              uVar21 = uVar21 + 8;
              iVar32 = iVar32 + 8;
              uVar33 = uVar33 + 8;
              iVar34 = iVar34 + 8;
              uVar35 = uVar35 + 8;
              iVar38 = iVar38 + 8;
              uVar39 = uVar39 + 8;
              iVar40 = iVar40 + 8;
              lVar19 = lVar19 + 0x10;
            } while (lVar19 != 0x200);
            uVar20 = 0;
            do {
              dVar30 = (double)_pow((double)(uVar20 & 0xffffffff) * 0.03125763125763126,
                                    0x3ff4000000000000);
              *(int *)(uVar20 * 4 + 0x11372a024) = (int)(dVar30 * 255.0 + 0.5);
              uVar20 = uVar20 + 1;
            } while (uVar20 != 0x21);
            iRam000000011372a020 = 1;
          }
          PTR_LOOP_113254c30 = puVar8;
          _pthread_mutex_unlock(0x113254c38);
        }
        if (uStack_1d8 == 0) {
          if (param_1[0x22] == 0) {
            param_1[0x22] = 1;
          }
          piVar10 = (int *)0x0;
        }
        else {
          if (0 < (int)uVar7 >> 1) {
            iStack_1d0 = 0;
            uVar15 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
            uVar20 = 0;
            if (!bVar9) {
              uVar20 = uVar15;
            }
            do {
              if (0 < (int)uVar5) {
                lVar19 = 0;
                puVar14 = puStack_180;
                uVar16 = uVar6;
                do {
                  *puVar14 = (char)((uint)*(byte *)(lVar17 + lVar19) * 0x41c7 + 0x108000 +
                                    (uint)*(byte *)(lVar18 + lVar19) * 0x8123 +
                                    (uint)*(byte *)(param_2 + lVar19) * 0x1914 >> 0x10);
                  lVar19 = lVar19 + 4;
                  uVar16 = uVar16 - 1;
                  puVar14 = puVar14 + 1;
                } while (uVar16 != 0);
                puVar14 = puStack_180 + param_1[10];
                lVar19 = (long)iVar12;
                uVar16 = uVar6;
                do {
                  pbVar1 = (byte *)(lVar17 + lVar19);
                  pbVar2 = (byte *)(lVar18 + lVar19);
                  pbVar3 = (byte *)(param_2 + lVar19);
                  lVar19 = lVar19 + 4;
                  *puVar14 = (char)((uint)*pbVar1 * 0x41c7 + 0x108000 + (uint)*pbVar2 * 0x8123 +
                                    (uint)*pbVar3 * 0x1914 >> 0x10);
                  uVar16 = uVar16 - 1;
                  puVar14 = puVar14 + 1;
                } while (uVar16 != 0);
              }
              iVar32 = param_1[10];
              if (bVar9) {
LAB_1082470dc:
                FUN_108247658(lVar17,lVar18,param_2,4,param_3,uStack_1d8,uVar6);
              }
              else {
                lVar19 = lStack_198;
                (*pcRam0000000113869a80)(lStack_198,param_3,uVar6,2,lStack_208,param_1[0xe]);
                lStack_208 = lStack_208 + (long)param_1[0xe] * 2;
                if ((int)lVar19 != 0) goto LAB_1082470dc;
                FUN_1082478cc(lVar17,lVar18,param_2,lStack_198,param_3,uStack_1d8,uVar6);
              }
              (*pcRam0000000113869f28)(uStack_1d8,lVar11,lVar13,uVar4);
              puStack_180 = puStack_180 + (long)iVar32 * 2;
              lVar11 = lVar11 + param_1[0xb];
              lVar13 = lVar13 + param_1[0xb];
              lVar17 = lVar17 + uVar15;
              param_2 = param_2 + uVar15;
              lVar18 = lVar18 + uVar15;
              lStack_198 = lStack_198 + uVar20;
              iStack_1d0 = iStack_1d0 + 1;
            } while (iStack_1d0 != (int)uVar7 >> 1);
          }
          if ((uVar7 & 1) != 0) {
            if (0 < (int)uVar5) {
              lVar19 = 0;
              uVar20 = uVar6;
              do {
                *puStack_180 = (char)((uint)*(byte *)(lVar17 + lVar19) * 0x41c7 + 0x108000 +
                                      (uint)*(byte *)(lVar18 + lVar19) * 0x8123 +
                                      (uint)*(byte *)(param_2 + lVar19) * 0x1914 >> 0x10);
                lVar19 = lVar19 + 4;
                uVar20 = uVar20 - 1;
                puStack_180 = puStack_180 + 1;
              } while (uVar20 != 0);
            }
            if ((bVar9) ||
               (lVar19 = lStack_198, (*pcRam0000000113869a80)(lStack_198,0,uVar6,1,lStack_208,0),
               (int)lVar19 != 0)) {
              FUN_108247658(lVar17,lVar18,param_2,4,0,uStack_1d8,uVar6);
            }
            else {
              FUN_1082478cc(lVar17,lVar18,param_2,lStack_198,0,uStack_1d8,uVar6);
            }
            (*pcRam0000000113869f28)(uStack_1d8,lVar11,lVar13,uVar4);
          }
          _free(uStack_1d8);
          piVar10 = (int *)0x1;
        }
      }
      return piVar10;
    }
    iVar32 = param_1[3];
    piVar10 = param_1;
    FUN_108245ff0();
    if ((int)piVar10 != 0) {
      func_0x00010822f518();
      FUN_10822dff4();
      lVar18 = *(long *)(param_1 + 0x12);
      if (0 < iVar32) {
        do {
          _memcpy(lVar18,param_2,(long)iVar34 << 2);
          param_2 = param_2 + iVar12;
          lVar18 = lVar18 + (long)param_1[0x14] * 4;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
      piVar10 = (int *)0x1;
    }
  }
  return piVar10;
}



/* Entry: 1082468bc; end: 108247657;  */

void FUN_1082468bc(float param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,ulong param_7,int param_8,undefined4 *param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined1 uVar25;
  ushort *puVar24;
  ulong uVar26;
  int *piVar27;
  undefined8 *puVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  undefined **ppuVar33;
  ulong uVar34;
  int iVar35;
  uint uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  int iVar47;
  double dVar45;
  uint uVar48;
  undefined1 auVar46 [16];
  int iVar49;
  uint uVar50;
  int iVar53;
  uint uVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar55;
  undefined1 auVar56 [16];
  double dVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  long lStack_208;
  ushort *puStack_1d8;
  int iStack_1d0;
  long lStack_198;
  undefined1 *puStack_180;
  int *piStack_178;
  undefined *puStack_170;
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  int aiStack_8c [3];
  
  uVar3 = param_9[2];
  uVar4 = (ulong)uVar3;
  uVar5 = param_9[3];
  iVar30 = (int)param_6;
  iVar35 = (int)param_7;
  if (param_5 == 0) {
    uVar18 = 0;
    bVar13 = true;
    goto LAB_1082469f0;
  }
  FUN_10822dff4();
  if (iVar30 == 1) {
    if ((int)uVar5 < 1) {
LAB_1082469cc:
      uVar18 = 0;
      bVar13 = true;
      goto LAB_1082469f0;
    }
    iVar47 = uVar5 + 1;
    lVar31 = param_5;
    do {
      lVar15 = lVar31;
      (*pcRam0000000113869a98)(lVar31,uVar4);
      bVar13 = (int)lVar15 == 0;
      if ((int)lVar15 != 0) goto LAB_1082469dc;
      lVar31 = lVar31 + iVar35;
      iVar47 = iVar47 + -1;
    } while (1 < iVar47);
  }
  else {
    if ((int)uVar5 < 1) goto LAB_1082469cc;
    iVar47 = uVar5 + 1;
    lVar31 = param_5;
    do {
      lVar15 = lVar31;
      (*pcRam0000000113869a90)(lVar31,uVar4);
      bVar13 = (int)lVar15 == 0;
      if ((int)lVar15 != 0) goto LAB_1082469dc;
      lVar31 = lVar31 + iVar35;
      iVar47 = iVar47 + -1;
    } while (1 < iVar47);
  }
  uVar18 = 0;
LAB_1082469f0:
  *param_9 = 0;
  param_9[1] = uVar18;
  puVar16 = param_9;
  FUN_108245ed0();
  if ((int)puVar16 != 0) {
    if (((param_8 == 0) || ((int)uVar3 < 4)) || ((int)uVar5 < 4)) {
      uVar1 = (int)(uVar3 + 1) >> 1;
      uVar29 = (ulong)uVar1;
      bVar14 = iVar30 != 3;
      if ((uVar3 + 1 < 2) || (-1 < (int)uVar1)) {
        puStack_1d8 = (ushort *)
                      (-(ulong)((uVar1 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                      (ulong)(uVar1 << 2) << 1);
        _malloc();
      }
      else {
        puStack_1d8 = (ushort *)0x0;
      }
      if (param_1 <= 0.0) {
        ppuVar33 = (undefined **)0x0;
        piVar27 = (int *)0x4;
        puVar28 = (undefined8 *)0x8;
        piStack_178 = (int *)0xe4;
      }
      else {
        piStack_178 = aiStack_8c;
        piVar27 = (int *)((ulong)&puStack_170 | 4);
        puVar28 = &uStack_168;
        uStack_c0 = 0x28264d4244cab16f;
        uStack_c8 = 0x73e502e356b41583;
        uStack_b0 = 0xd3ad40b1d6ab6fb;
        uStack_b8 = 0xa50ebed73baaefb;
        uStack_a0 = 0x77ce6b95;
        uStack_a8 = 0x2b081e8335db3b68;
        uStack_94 = 0x27e5ed3c009f9494;
        uStack_9c = 0x5181e5f0;
        uStack_98 = 0x78853bbc;
        uStack_100 = 0x496b153c4fc0d9c6;
        uStack_108 = 0x4730a7ed6e990e83;
        uStack_f0 = 0x26d7cb1c73990b32;
        uStack_f8 = 0x541afb0c4f1403fa;
        uStack_e0 = 0x6425ccdd75762f2a;
        uStack_e8 = 0x2cbb77d86fcc3706;
        uStack_d0 = 0x141ebf67220414a8;
        uStack_d8 = 0xa7d871524b35461;
        uStack_140 = 0xd7ec1da4a290000;
        uStack_148 = 0x5c55028964fcf397;
        uStack_130 = 0x38d38c694e19ca72;
        uStack_138 = 0x5492577d5940b7ab;
        uStack_120 = 0x5abb2c325437f652;
        uStack_128 = 0x32a1755f0c01ee65;
        uStack_110 = 0x7563cce2685feeda;
        uStack_118 = 0x73f533e70faa57b1;
        uStack_160 = 0x1c88626a775faccb;
        uStack_168 = 0x3b318860de15230;
        uStack_150 = 0x49ddb84b4a85fef8;
        uStack_158 = 0x14b3b82868385c55;
        aiStack_8c[0] = 0x100;
        if (param_1 <= 1.0) {
          aiStack_8c[0] = (int)(param_1 * 256.0);
        }
        ppuVar33 = &puStack_170;
        bVar14 = true;
        puStack_170 = (undefined *)0x1f00000000;
      }
      puStack_180 = *(undefined1 **)(param_9 + 4);
      puVar17 = *(undefined1 **)(param_9 + 6);
      puVar19 = *(undefined1 **)(param_9 + 8);
      lStack_208 = *(long *)(param_9 + 0xc);
      FUN_108230ad8();
      iVar47 = 0x13254c38;
      _pthread_mutex_lock();
      puVar12 = PTR_DAT_1132548c8;
      if (iVar47 == 0) {
        if ((PTR_LOOP_113254c30 != PTR_DAT_1132548c8) && (iRam000000011372a020 == 0)) {
          lVar31 = 0;
          uVar50 = 4;
          iVar53 = 5;
          uVar54 = 6;
          iVar55 = 7;
          uVar36 = 0;
          iVar47 = 1;
          uVar48 = 2;
          iVar49 = 3;
          auVar56 = NEON_fmov(0x3fe0000000000000,8);
          dVar59 = auVar56._8_8_;
          dVar45 = auVar56._0_8_;
          do {
            auVar46._4_4_ = 0;
            auVar46._0_4_ = uVar48;
            auVar46._8_4_ = iVar49;
            auVar46._12_4_ = 0;
            auVar56 = NEON_ucvtf(auVar46,8);
            auVar51._4_4_ = 0;
            auVar51._0_4_ = uVar54;
            auVar51._8_4_ = iVar55;
            auVar51._12_4_ = 0;
            auVar52 = NEON_ucvtf(auVar51,8);
            auVar57._4_4_ = 0;
            auVar57._0_4_ = uVar36;
            auVar57._8_4_ = iVar47;
            auVar57._12_4_ = 0;
            auVar58 = NEON_ucvtf(auVar57,8);
            auVar60._4_4_ = 0;
            auVar60._0_4_ = uVar50;
            auVar60._8_4_ = iVar53;
            auVar60._12_4_ = 0;
            auVar61 = NEON_ucvtf(auVar60,8);
            dVar37 = (double)_pow(auVar56._8_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar38 = (double)_pow(auVar56._0_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar39 = (double)_pow(auVar52._8_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar40 = (double)_pow(auVar52._0_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar41 = (double)_pow(auVar58._8_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar42 = (double)_pow(auVar58._0_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar43 = (double)_pow(auVar61._8_8_ * 0.00392156862745098,0x3fe999999999999a);
            dVar44 = (double)_pow(auVar61._0_8_ * 0.00392156862745098,0x3fe999999999999a);
            auVar62._4_4_ = (int)(long)(dVar59 + dVar41 * 4095.0);
            auVar62._0_4_ = (int)(long)(dVar45 + dVar42 * 4095.0);
            auVar62._8_8_ = 0;
            auVar61._8_8_ = 0x3534313025242120;
            auVar61._0_8_ = 0x1514111005040100;
            auVar56._4_4_ = (int)(long)(dVar59 + dVar37 * 4095.0);
            auVar56._0_4_ = (int)(long)(dVar45 + dVar38 * 4095.0);
            auVar56._8_8_ = 0;
            auVar52._4_4_ = (int)(long)(dVar59 + dVar43 * 4095.0);
            auVar52._0_4_ = (int)(long)(dVar45 + dVar44 * 4095.0);
            auVar52._8_8_ = 0;
            auVar58._4_4_ = (int)(long)(dVar59 + dVar39 * 4095.0);
            auVar58._0_4_ = (int)(long)(dVar45 + dVar40 * 4095.0);
            auVar58._8_8_ = 0;
            auVar56 = a64_TBL(ZEXT816(0),auVar62,auVar56,auVar52,auVar58,auVar61);
            *(long *)(lVar31 + 0x11372a0b0) = auVar56._8_8_;
            *(long *)(lVar31 + 0x11372a0a8) = auVar56._0_8_;
            uVar36 = uVar36 + 8;
            iVar47 = iVar47 + 8;
            uVar48 = uVar48 + 8;
            iVar49 = iVar49 + 8;
            uVar50 = uVar50 + 8;
            iVar53 = iVar53 + 8;
            uVar54 = uVar54 + 8;
            iVar55 = iVar55 + 8;
            lVar31 = lVar31 + 0x10;
          } while (lVar31 != 0x200);
          uVar32 = 0;
          do {
            dVar45 = (double)_pow((double)(uVar32 & 0xffffffff) * 0.03125763125763126,
                                  0x3ff4000000000000);
            *(int *)(uVar32 * 4 + 0x11372a024) = (int)(dVar45 * 255.0 + 0.5);
            uVar32 = uVar32 + 1;
          } while (uVar32 != 0x21);
          iRam000000011372a020 = 1;
        }
        PTR_LOOP_113254c30 = puVar12;
        _pthread_mutex_unlock(0x113254c38);
      }
      if (puStack_1d8 == (ushort *)0x0) {
        if (param_9[0x22] == 0) {
          param_9[0x22] = 1;
        }
      }
      else {
        uVar32 = param_2;
        uVar34 = param_4;
        lStack_198 = param_5;
        if (0 < (int)uVar5 >> 1) {
          iStack_1d0 = 0;
          uVar21 = -(param_7 >> 0x1f & 1) & 0xfffffffe00000000 | (param_7 & 0xffffffff) << 1;
          uVar26 = 0;
          if (!bVar13) {
            uVar26 = uVar21;
          }
          puVar2 = (undefined8 *)0x113869f20;
          if (param_4 <= param_2) {
            puVar2 = (undefined8 *)0x113869f18;
          }
          do {
            if (bVar14) {
              if (0 < (int)uVar3) {
                lVar31 = 0;
                puVar20 = puStack_180;
                uVar23 = uVar4;
                do {
                  bVar6 = *(byte *)(param_3 + lVar31);
                  bVar7 = *(byte *)(uVar34 + lVar31);
                  iVar47 = (uint)*(byte *)(uVar32 + lVar31) * 0x41c7 + 0x108000;
                  if (ppuVar33 == (undefined **)0x0) {
                    uVar25 = (undefined1)
                             (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 >> 0x10);
                  }
                  else {
                    iVar53 = *piStack_178;
                    uVar36 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                             *(int *)((long)puVar28 + (long)*piVar27 * 4);
                    *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar36 & 0x7fffffff;
                    iVar49 = 0;
                    if (*(int *)ppuVar33 != 0x36) {
                      iVar49 = *(int *)ppuVar33 + 1;
                    }
                    *(int *)ppuVar33 = iVar49;
                    iVar49 = 0;
                    if (*piVar27 != 0x36) {
                      iVar49 = *piVar27 + 1;
                    }
                    *piVar27 = iVar49;
                    uVar25 = (undefined1)
                             (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 +
                              (((int)(uVar36 * 2) >> 0x10) * iVar53 >> 8) >> 0x10);
                  }
                  *puVar20 = uVar25;
                  lVar31 = lVar31 + iVar30;
                  uVar23 = uVar23 - 1;
                  puVar20 = puVar20 + 1;
                } while (uVar23 != 0);
                puVar20 = puStack_180 + (int)param_9[10];
                lVar31 = (long)iVar35;
                uVar23 = uVar4;
                do {
                  bVar6 = *(byte *)(param_3 + lVar31);
                  bVar7 = *(byte *)(uVar34 + lVar31);
                  iVar47 = (uint)*(byte *)(uVar32 + lVar31) * 0x41c7 + 0x108000;
                  if (ppuVar33 == (undefined **)0x0) {
                    uVar25 = (undefined1)
                             (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 >> 0x10);
                  }
                  else {
                    iVar53 = *piStack_178;
                    uVar36 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                             *(int *)((long)puVar28 + (long)*piVar27 * 4);
                    *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar36 & 0x7fffffff;
                    iVar49 = 0;
                    if (*(int *)ppuVar33 != 0x36) {
                      iVar49 = *(int *)ppuVar33 + 1;
                    }
                    *(int *)ppuVar33 = iVar49;
                    iVar49 = 0;
                    if (*piVar27 != 0x36) {
                      iVar49 = *piVar27 + 1;
                    }
                    *piVar27 = iVar49;
                    uVar25 = (undefined1)
                             (iVar47 + (uint)bVar6 * 0x8123 + (uint)bVar7 * 0x1914 +
                              (((int)(uVar36 * 2) >> 0x10) * iVar53 >> 8) >> 0x10);
                  }
                  lVar31 = lVar31 + iVar30;
                  *puVar20 = uVar25;
                  uVar23 = uVar23 - 1;
                  puVar20 = puVar20 + 1;
                } while (uVar23 != 0);
              }
            }
            else {
              uVar23 = uVar32;
              if (param_4 <= param_2) {
                uVar23 = uVar34;
              }
              (*(code *)*puVar2)(uVar23,puStack_180,uVar4);
              (*(code *)*puVar2)(uVar23 + (long)iVar35,puStack_180 + (int)param_9[10],uVar4);
            }
            iVar47 = param_9[10];
            if (bVar13) {
LAB_1082470dc:
              FUN_108247658(uVar32,param_3,uVar34,param_6,param_7,puStack_1d8,uVar4);
            }
            else {
              lVar31 = lStack_198;
              (*pcRam0000000113869a80)(lStack_198,param_7,uVar4,2,lStack_208,param_9[0xe]);
              lStack_208 = lStack_208 + (long)(int)param_9[0xe] * 2;
              if ((int)lVar31 != 0) goto LAB_1082470dc;
              FUN_1082478cc(uVar32,param_3,uVar34,lStack_198,param_7,puStack_1d8,uVar4);
            }
            if (ppuVar33 == (undefined **)0x0) {
              (*pcRam0000000113869f28)(puStack_1d8,puVar17,puVar19,uVar29);
            }
            else {
              puVar20 = puVar17;
              puVar22 = puVar19;
              uVar23 = uVar29;
              puVar24 = puStack_1d8;
              if (0 < (int)uVar1) {
                do {
                  uVar9 = puVar24[1];
                  uVar10 = *puVar24;
                  uVar11 = puVar24[2];
                  iVar53 = *piStack_178;
                  uVar36 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                           *(int *)((long)puVar28 + (long)*piVar27 * 4);
                  *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar36 & 0x7fffffff;
                  iVar49 = 0;
                  if (*(int *)ppuVar33 != 0x36) {
                    iVar49 = *(int *)ppuVar33 + 1;
                  }
                  *(int *)ppuVar33 = iVar49;
                  iVar49 = 0;
                  if (*piVar27 != 0x36) {
                    iVar49 = *piVar27 + 1;
                  }
                  iVar53 = (uint)uVar9 * -0x4a89 + (uint)uVar10 * -0x25f7 + (uint)uVar11 * 0x7080 +
                           (((int)(uVar36 * 2) >> 0xe) * iVar53 >> 8) + 0x2020000;
                  *piVar27 = iVar49;
                  uVar36 = iVar53 >> 0x12 & (iVar53 >> 0x1f ^ 0xffffffffU);
                  if (0xfe < (int)uVar36) {
                    uVar36 = 0xff;
                  }
                  *puVar20 = (char)uVar36;
                  iVar53 = *piStack_178;
                  uVar36 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                           *(int *)((long)puVar28 + (long)*piVar27 * 4);
                  *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar36 & 0x7fffffff;
                  iVar49 = 0;
                  if (*(int *)ppuVar33 != 0x36) {
                    iVar49 = *(int *)ppuVar33 + 1;
                  }
                  iVar55 = *piVar27;
                  *(int *)ppuVar33 = iVar49;
                  iVar49 = 0;
                  if (iVar55 != 0x36) {
                    iVar49 = iVar55 + 1;
                  }
                  iVar53 = (uint)uVar9 * -0x5e34 + (uint)uVar10 * 0x7080 + (uint)uVar11 * -0x124c +
                           (((int)(uVar36 * 2) >> 0xe) * iVar53 >> 8) + 0x2020000;
                  uVar36 = iVar53 >> 0x12 & (iVar53 >> 0x1f ^ 0xffffffffU);
                  *piVar27 = iVar49;
                  if (0xfe < (int)uVar36) {
                    uVar36 = 0xff;
                  }
                  *puVar22 = (char)uVar36;
                  uVar23 = uVar23 - 1;
                  puVar20 = puVar20 + 1;
                  puVar22 = puVar22 + 1;
                  puVar24 = puVar24 + 4;
                } while (uVar23 != 0);
              }
            }
            puStack_180 = puStack_180 + (long)iVar47 * 2;
            puVar17 = puVar17 + (int)param_9[0xb];
            puVar19 = puVar19 + (int)param_9[0xb];
            uVar32 = uVar32 + uVar21;
            uVar34 = uVar34 + uVar21;
            param_3 = param_3 + uVar21;
            lStack_198 = lStack_198 + uVar26;
            iStack_1d0 = iStack_1d0 + 1;
          } while (iStack_1d0 != (int)uVar5 >> 1);
        }
        if ((uVar5 & 1) != 0) {
          if (bVar14) {
            if (0 < (int)uVar3) {
              lVar31 = 0;
              uVar26 = uVar4;
              do {
                bVar6 = *(byte *)(uVar32 + lVar31);
                bVar7 = *(byte *)(param_3 + lVar31);
                bVar8 = *(byte *)(uVar34 + lVar31);
                if (ppuVar33 == (undefined **)0x0) {
                  uVar25 = (undefined1)
                           ((uint)bVar6 * 0x41c7 + 0x108000 + (uint)bVar7 * 0x8123 +
                            (uint)bVar8 * 0x1914 >> 0x10);
                }
                else {
                  iVar47 = *piStack_178;
                  uVar3 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                          *(int *)((long)puVar28 + (long)*piVar27 * 4);
                  *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar3 & 0x7fffffff;
                  iVar35 = 0;
                  if (*(int *)ppuVar33 != 0x36) {
                    iVar35 = *(int *)ppuVar33 + 1;
                  }
                  *(int *)ppuVar33 = iVar35;
                  iVar35 = 0;
                  if (*piVar27 != 0x36) {
                    iVar35 = *piVar27 + 1;
                  }
                  *piVar27 = iVar35;
                  uVar25 = (undefined1)
                           ((uint)bVar6 * 0x41c7 + 0x108000 + (uint)bVar7 * 0x8123 +
                            (uint)bVar8 * 0x1914 + (((int)(uVar3 * 2) >> 0x10) * iVar47 >> 8) >>
                           0x10);
                }
                *puStack_180 = uVar25;
                lVar31 = lVar31 + iVar30;
                uVar26 = uVar26 - 1;
                puStack_180 = puStack_180 + 1;
              } while (uVar26 != 0);
            }
          }
          else {
            uVar26 = uVar32;
            if (uVar34 <= uVar32) {
              uVar26 = uVar34;
            }
            puVar2 = (undefined8 *)0x113869f20;
            if (uVar34 <= uVar32) {
              puVar2 = (undefined8 *)0x113869f18;
            }
            (*(code *)*puVar2)(uVar26,puStack_180,uVar4);
          }
          if ((bVar13) ||
             (lVar31 = lStack_198, (*pcRam0000000113869a80)(lStack_198,0,uVar4,1,lStack_208,0),
             (int)lVar31 != 0)) {
            FUN_108247658(uVar32,param_3,uVar34,param_6,0,puStack_1d8,uVar4);
          }
          else {
            FUN_1082478cc(uVar32,param_3,uVar34,lStack_198,0,puStack_1d8,uVar4);
          }
          if (ppuVar33 == (undefined **)0x0) {
            (*pcRam0000000113869f28)(puStack_1d8,puVar17,puVar19,uVar29);
          }
          else {
            puVar24 = puStack_1d8;
            if (0 < (int)uVar1) {
              do {
                uVar9 = puVar24[1];
                uVar10 = *puVar24;
                uVar11 = puVar24[2];
                iVar35 = *piStack_178;
                uVar3 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                        *(int *)((long)puVar28 + (long)*piVar27 * 4);
                *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar3 & 0x7fffffff;
                iVar30 = 0;
                if (*(int *)ppuVar33 != 0x36) {
                  iVar30 = *(int *)ppuVar33 + 1;
                }
                *(int *)ppuVar33 = iVar30;
                iVar30 = 0;
                if (*piVar27 != 0x36) {
                  iVar30 = *piVar27 + 1;
                }
                iVar35 = (uint)uVar9 * -0x4a89 + (uint)uVar10 * -0x25f7 + (uint)uVar11 * 0x7080 +
                         (((int)(uVar3 * 2) >> 0xe) * iVar35 >> 8) + 0x2020000;
                *piVar27 = iVar30;
                uVar3 = iVar35 >> 0x12 & (iVar35 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar3) {
                  uVar3 = 0xff;
                }
                *puVar17 = (char)uVar3;
                iVar35 = *piStack_178;
                uVar3 = *(int *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) -
                        *(int *)((long)puVar28 + (long)*piVar27 * 4);
                *(uint *)((long)puVar28 + (long)*(int *)ppuVar33 * 4) = uVar3 & 0x7fffffff;
                iVar30 = 0;
                if (*(int *)ppuVar33 != 0x36) {
                  iVar30 = *(int *)ppuVar33 + 1;
                }
                iVar47 = *piVar27;
                *(int *)ppuVar33 = iVar30;
                iVar30 = 0;
                if (iVar47 != 0x36) {
                  iVar30 = iVar47 + 1;
                }
                iVar35 = (uint)uVar9 * -0x5e34 + (uint)uVar10 * 0x7080 + (uint)uVar11 * -0x124c +
                         (((int)(uVar3 * 2) >> 0xe) * iVar35 >> 8) + 0x2020000;
                uVar3 = iVar35 >> 0x12 & (iVar35 >> 0x1f ^ 0xffffffffU);
                *piVar27 = iVar30;
                if (0xfe < (int)uVar3) {
                  uVar3 = 0xff;
                }
                *puVar19 = (char)uVar3;
                uVar29 = uVar29 - 1;
                puVar19 = puVar19 + 1;
                puVar17 = puVar17 + 1;
                puVar24 = puVar24 + 4;
              } while (uVar29 != 0);
            }
          }
        }
        _free(puStack_1d8);
      }
    }
    else {
      FUN_108221d00(PTR_DAT_1132548c8);
      puStack_170 = &UNK_10df0a9c0;
      uStack_168 = CONCAT44(uStack_168._4_4_,0xd);
      FUN_108221db8(param_2,param_3,param_4,param_6,param_7,8,*(undefined8 *)(param_9 + 4),
                    param_9[10],*(undefined8 *)(param_9 + 6),param_9[0xb]);
      if ((int)param_2 == 0) {
        if (param_9[0x22] == 0) {
          param_9[0x22] = 1;
        }
      }
      else if (!bVar13) {
        (*pcRam0000000113869a80)
                  (param_5,param_7,uVar4,uVar5,*(undefined8 *)(param_9 + 0xc),param_9[0xe]);
      }
    }
  }
  return;
LAB_1082469dc:
  uVar18 = 4;
  goto LAB_1082469f0;
}



/* Entry: 108247658; end: 1082478cb;  */

void FUN_108247658(long param_1,long param_2,long param_3,uint param_4,int param_5,
                  undefined2 *param_6,uint param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = (int)param_7 >> 1;
  if (iVar4 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar1 = (long)param_5 + (long)(int)param_4;
    do {
      uVar2 = (uint)*(ushort *)
                     ((ulong)*(byte *)(param_1 + (ulong)param_4 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_1 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_1 + param_5 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_1 + lVar1 + uVar5) * 2 + 0x11372a0a8);
      uVar3 = uVar2 >> 9;
      uVar2 = uVar2 & 0x1ff;
      *param_6 = (short)((0x200 - uVar2) * *(int *)((ulong)uVar3 * 4 + 0x11372a024) +
                         uVar2 * *(int *)((ulong)(uVar3 + 1) * 4 + 0x11372a024) + 0x40 >> 7);
      uVar2 = (uint)*(ushort *)
                     ((ulong)*(byte *)(param_2 + (ulong)param_4 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_2 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_2 + param_5 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_2 + lVar1 + uVar5) * 2 + 0x11372a0a8);
      uVar3 = uVar2 >> 9;
      uVar2 = uVar2 & 0x1ff;
      param_6[1] = (short)((0x200 - uVar2) * *(int *)((ulong)uVar3 * 4 + 0x11372a024) +
                           uVar2 * *(int *)((ulong)(uVar3 + 1) * 4 + 0x11372a024) + 0x40 >> 7);
      uVar2 = (uint)*(ushort *)
                     ((ulong)*(byte *)(param_3 + (ulong)param_4 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_3 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_3 + param_5 + uVar5) * 2 + 0x11372a0a8) +
              (uint)*(ushort *)((ulong)*(byte *)(param_3 + lVar1 + uVar5) * 2 + 0x11372a0a8);
      uVar3 = uVar2 >> 9;
      uVar2 = uVar2 & 0x1ff;
      param_6[2] = (short)((0x200 - uVar2) * *(int *)((ulong)uVar3 * 4 + 0x11372a024) +
                           uVar2 * *(int *)((ulong)(uVar3 + 1) * 4 + 0x11372a024) + 0x40 >> 7);
      uVar5 = uVar5 + (param_4 << 1);
      param_6 = param_6 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((param_7 & 1) != 0) {
    uVar2 = (uint)*(ushort *)((ulong)((byte *)(param_1 + uVar5))[param_5] * 2 + 0x11372a0a8) +
            (uint)*(ushort *)((ulong)*(byte *)(param_1 + uVar5) * 2 + 0x11372a0a8);
    uVar3 = uVar2 >> 8;
    uVar2 = uVar2 & 0xff;
    *param_6 = (short)((uVar2 * -2 + 0x200) * *(int *)((ulong)uVar3 * 4 + 0x11372a024) +
                       uVar2 * 2 * *(int *)((ulong)(uVar3 + 1) * 4 + 0x11372a024) + 0x40 >> 7);
    uVar2 = (uint)*(ushort *)((ulong)((byte *)(param_2 + uVar5))[param_5] * 2 + 0x11372a0a8) +
            (uint)*(ushort *)((ulong)*(byte *)(param_2 + uVar5) * 2 + 0x11372a0a8);
    uVar3 = uVar2 >> 8;
    uVar2 = uVar2 & 0xff;
    param_6[1] = (short)((uVar2 * -2 + 0x200) * *(int *)((ulong)uVar3 * 4 + 0x11372a024) +
                         uVar2 * 2 * *(int *)((ulong)(uVar3 + 1) * 4 + 0x11372a024) + 0x40 >> 7);
    uVar2 = (uint)*(ushort *)((ulong)((byte *)(param_3 + uVar5))[param_5] * 2 + 0x11372a0a8) +
            (uint)*(ushort *)((ulong)*(byte *)(param_3 + uVar5) * 2 + 0x11372a0a8);
    uVar3 = uVar2 >> 8;
    uVar2 = uVar2 & 0xff;
    param_6[2] = (short)((uVar2 * -2 + 0x200) * *(int *)((ulong)uVar3 * 4 + 0x11372a024) +
                         uVar2 * 2 * *(int *)((ulong)(uVar3 + 1) * 4 + 0x11372a024) + 0x40 >> 7);
  }
  return;
}



/* Entry: 1082478cc; end: 108247d8b;  */

void FUN_1082478cc(long param_1,long param_2,long param_3,long param_4,int param_5,
                  undefined2 *param_6,uint param_7)

{
  int iVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar12 = (int)param_7 >> 1;
  if (iVar12 < 1) {
    uVar15 = 0;
  }
  else {
    uVar13 = 0;
    iVar1 = param_5 + 4;
    do {
      bVar6 = *(byte *)(param_4 + uVar13);
      pbVar2 = (byte *)(param_4 + param_5 + uVar13);
      bVar7 = *pbVar2;
      bVar8 = ((byte *)(param_4 + uVar13))[4];
      bVar9 = pbVar2[4];
      uVar14 = (uint)bVar7 + (uint)bVar6 + (uint)bVar8 + (uint)bVar9;
      pbVar2 = (byte *)(param_1 + uVar13);
      if (uVar14 == 0x3fc || uVar14 == 0) {
        uVar16 = (uint)*(ushort *)((ulong)pbVar2[4] * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*pbVar2 * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_1 + param_5 + uVar13) * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_1 + iVar1 + uVar13) * 2 + 0x11372a0a8);
        uVar17 = uVar16 >> 9;
        uVar16 = uVar16 & 0x1ff;
        iVar10 = (0x200 - uVar16) * *(int *)((ulong)uVar17 * 4 + 0x11372a024) +
                 uVar16 * *(int *)((ulong)(uVar17 + 1) * 4 + 0x11372a024);
        uVar16 = (uint)*(ushort *)((ulong)((byte *)(param_2 + uVar13))[4] * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_2 + uVar13) * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_2 + param_5 + uVar13) * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_2 + iVar1 + uVar13) * 2 + 0x11372a0a8);
        uVar17 = uVar16 >> 9;
        uVar16 = uVar16 & 0x1ff;
        iVar11 = (0x200 - uVar16) * *(int *)((ulong)uVar17 * 4 + 0x11372a024) +
                 uVar16 * *(int *)((ulong)(uVar17 + 1) * 4 + 0x11372a024);
        uVar16 = (uint)*(ushort *)((ulong)((byte *)(param_3 + uVar13))[4] * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_3 + uVar13) * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_3 + param_5 + uVar13) * 2 + 0x11372a0a8) +
                 (uint)*(ushort *)((ulong)*(byte *)(param_3 + iVar1 + uVar13) * 2 + 0x11372a0a8);
        uVar17 = uVar16 >> 9;
      }
      else {
        iVar4 = *(int *)(&UNK_10df0ec40 + (ulong)uVar14 * 4);
        uVar17 = ((uint)*(ushort *)((ulong)*pbVar2 * 2 + 0x11372a0a8) * (uint)bVar6 +
                  (uint)*(ushort *)((ulong)pbVar2[4] * 2 + 0x11372a0a8) * (uint)bVar8 +
                  (uint)*(ushort *)((ulong)*(byte *)(param_1 + param_5 + uVar13) * 2 + 0x11372a0a8)
                  * (uint)bVar7 +
                 (uint)*(ushort *)((ulong)*(byte *)(param_1 + iVar1 + uVar13) * 2 + 0x11372a0a8) *
                 (uint)bVar9) * iVar4;
        uVar16 = uVar17 >> 0x1a;
        uVar17 = uVar17 >> 0x11 & 0x1ff;
        iVar10 = (0x200 - uVar17) * *(int *)((ulong)uVar16 * 4 + 0x11372a024) +
                 uVar17 * *(int *)((ulong)(uVar16 + 1) * 4 + 0x11372a024);
        uVar17 = ((uint)*(ushort *)((ulong)*(byte *)(param_2 + uVar13) * 2 + 0x11372a0a8) *
                  (uint)bVar6 +
                  (uint)*(ushort *)((ulong)((byte *)(param_2 + uVar13))[4] * 2 + 0x11372a0a8) *
                  (uint)bVar8 +
                  (uint)*(ushort *)((ulong)*(byte *)(param_2 + param_5 + uVar13) * 2 + 0x11372a0a8)
                  * (uint)bVar7 +
                 (uint)*(ushort *)((ulong)*(byte *)(param_2 + iVar1 + uVar13) * 2 + 0x11372a0a8) *
                 (uint)bVar9) * iVar4;
        uVar16 = uVar17 >> 0x1a;
        uVar17 = uVar17 >> 0x11 & 0x1ff;
        iVar11 = (0x200 - uVar17) * *(int *)((ulong)uVar16 * 4 + 0x11372a024) +
                 uVar17 * *(int *)((ulong)(uVar16 + 1) * 4 + 0x11372a024);
        uVar17 = ((uint)*(ushort *)((ulong)*(byte *)(param_3 + uVar13) * 2 + 0x11372a0a8) *
                  (uint)bVar6 +
                  (uint)*(ushort *)((ulong)((byte *)(param_3 + uVar13))[4] * 2 + 0x11372a0a8) *
                  (uint)bVar8 +
                  (uint)*(ushort *)((ulong)*(byte *)(param_3 + param_5 + uVar13) * 2 + 0x11372a0a8)
                  * (uint)bVar7 +
                 (uint)*(ushort *)((ulong)*(byte *)(param_3 + iVar1 + uVar13) * 2 + 0x11372a0a8) *
                 (uint)bVar9) * iVar4;
        uVar16 = uVar17 >> 0x11;
        uVar17 = uVar17 >> 0x1a;
      }
      puVar3 = (undefined2 *)((long)param_6 + uVar13);
      iVar4 = *(int *)((ulong)uVar17 * 4 + 0x11372a024);
      iVar5 = *(int *)((ulong)(uVar17 + 1) * 4 + 0x11372a024);
      *puVar3 = (short)(iVar10 + 0x40U >> 7);
      puVar3[1] = (short)(iVar11 + 0x40U >> 7);
      puVar3[2] = (short)(iVar5 * (uVar16 & 0x1ff) + iVar4 * (0x200 - (uVar16 & 0x1ff)) + 0x40 >> 7)
      ;
      puVar3[3] = (short)uVar14;
      uVar13 = uVar13 + 8;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    uVar15 = uVar13 & 0xfffffff8;
    param_6 = (undefined2 *)((long)param_6 + uVar13);
  }
  if ((param_7 & 1) != 0) {
    bVar6 = *(byte *)(param_4 + uVar15);
    bVar7 = ((byte *)(param_4 + uVar15))[param_5];
    iVar12 = (uint)bVar7 + (uint)bVar6;
    if (iVar12 == 0x1fe || iVar12 == 0) {
      uVar14 = (uint)*(ushort *)((ulong)((byte *)(param_1 + uVar15))[param_5] * 2 + 0x11372a0a8) +
               (uint)*(ushort *)((ulong)*(byte *)(param_1 + uVar15) * 2 + 0x11372a0a8);
      uVar16 = uVar14 >> 8;
      uVar14 = uVar14 & 0xff;
      iVar4 = (uVar14 * -2 + 0x200) * *(int *)((ulong)uVar16 * 4 + 0x11372a024) +
              uVar14 * 2 * *(int *)((ulong)(uVar16 + 1) * 4 + 0x11372a024);
      uVar14 = (uint)*(ushort *)((ulong)((byte *)(param_2 + uVar15))[param_5] * 2 + 0x11372a0a8) +
               (uint)*(ushort *)((ulong)*(byte *)(param_2 + uVar15) * 2 + 0x11372a0a8);
      uVar16 = uVar14 >> 8;
      uVar14 = uVar14 & 0xff;
      iVar10 = (uVar14 * -2 + 0x200) * *(int *)((ulong)uVar16 * 4 + 0x11372a024) +
               uVar14 * 2 * *(int *)((ulong)(uVar16 + 1) * 4 + 0x11372a024);
      uVar16 = (uint)*(ushort *)((ulong)((byte *)(param_3 + uVar15))[param_5] * 2 + 0x11372a0a8) +
               (uint)*(ushort *)((ulong)*(byte *)(param_3 + uVar15) * 2 + 0x11372a0a8);
      uVar14 = uVar16 >> 8;
      uVar16 = (uVar16 & 0xff) << 1;
    }
    else {
      iVar1 = *(int *)(&UNK_10df0ec40 + (ulong)(uint)(iVar12 * 2) * 4);
      uVar14 = ((uint)*(ushort *)((ulong)*(byte *)(param_1 + uVar15) * 2 + 0x11372a0a8) *
                (uint)bVar6 +
               (uint)*(ushort *)((ulong)((byte *)(param_1 + uVar15))[param_5] * 2 + 0x11372a0a8) *
               (uint)bVar7) * iVar1;
      uVar16 = uVar14 >> 0x19 & 0x3f;
      uVar14 = uVar14 >> 0x10 & 0x1ff;
      iVar4 = (0x200 - uVar14) * *(int *)((ulong)uVar16 * 4 + 0x11372a024) +
              uVar14 * *(int *)((ulong)(uVar16 + 1) * 4 + 0x11372a024);
      uVar14 = ((uint)*(ushort *)((ulong)*(byte *)(param_2 + uVar15) * 2 + 0x11372a0a8) *
                (uint)bVar6 +
               (uint)*(ushort *)((ulong)((byte *)(param_2 + uVar15))[param_5] * 2 + 0x11372a0a8) *
               (uint)bVar7) * iVar1;
      uVar16 = uVar14 >> 0x19 & 0x3f;
      uVar14 = uVar14 >> 0x10 & 0x1ff;
      iVar10 = (0x200 - uVar14) * *(int *)((ulong)uVar16 * 4 + 0x11372a024) +
               uVar14 * *(int *)((ulong)(uVar16 + 1) * 4 + 0x11372a024);
      uVar16 = ((uint)*(ushort *)((ulong)*(byte *)(param_3 + uVar15) * 2 + 0x11372a0a8) *
                (uint)bVar6 +
               (uint)*(ushort *)((ulong)((byte *)(param_3 + uVar15))[param_5] * 2 + 0x11372a0a8) *
               (uint)bVar7) * iVar1;
      uVar14 = uVar16 >> 0x19 & 0x3f;
      uVar16 = uVar16 >> 0x10 & 0x1ff;
    }
    iVar1 = *(int *)((ulong)uVar14 * 4 + 0x11372a024);
    iVar11 = *(int *)((ulong)(uVar14 + 1) * 4 + 0x11372a024);
    *param_6 = (short)(iVar4 + 0x40U >> 7);
    param_6[1] = (short)(iVar10 + 0x40U >> 7);
    param_6[2] = (short)(iVar11 * uVar16 + iVar1 * (0x200 - uVar16) + 0x40 >> 7);
    param_6[3] = (short)(iVar12 * 2);
  }
  return;
}



/* Entry: 108247d8c; end: 108247fe3;  */

void FUN_108247d8c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_1 != param_2)) {
    uVar10 = *(undefined8 *)(param_1 + 2);
    uVar9 = *(undefined8 *)param_1;
    uVar12 = *(undefined8 *)(param_1 + 6);
    uVar11 = *(undefined8 *)(param_1 + 4);
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar15 = *(undefined8 *)(param_1 + 0xe);
    uVar14 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_2 + 8) = uVar13;
    *(undefined8 *)(param_2 + 0xe) = uVar15;
    *(undefined8 *)(param_2 + 0xc) = uVar14;
    *(undefined8 *)(param_2 + 2) = uVar10;
    *(undefined8 *)param_2 = uVar9;
    *(undefined8 *)(param_2 + 6) = uVar12;
    *(undefined8 *)(param_2 + 4) = uVar11;
    uVar10 = *(undefined8 *)(param_1 + 0x12);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 0x16);
    uVar11 = *(undefined8 *)(param_1 + 0x14);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)(param_1 + 0x1e);
    uVar14 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)(param_2 + 0x18) = uVar13;
    *(undefined8 *)(param_2 + 0x1e) = uVar15;
    *(undefined8 *)(param_2 + 0x1c) = uVar14;
    *(undefined8 *)(param_2 + 0x12) = uVar10;
    *(undefined8 *)(param_2 + 0x10) = uVar9;
    *(undefined8 *)(param_2 + 0x16) = uVar12;
    *(undefined8 *)(param_2 + 0x14) = uVar11;
    uVar10 = *(undefined8 *)(param_1 + 0x22);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x26);
    uVar11 = *(undefined8 *)(param_1 + 0x24);
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    uVar15 = *(undefined8 *)(param_1 + 0x2e);
    uVar14 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_1 + 0x2a);
    *(undefined8 *)(param_2 + 0x28) = uVar13;
    *(undefined8 *)(param_2 + 0x2e) = uVar15;
    *(undefined8 *)(param_2 + 0x2c) = uVar14;
    *(undefined8 *)(param_2 + 0x22) = uVar10;
    *(undefined8 *)(param_2 + 0x20) = uVar9;
    *(undefined8 *)(param_2 + 0x26) = uVar12;
    *(undefined8 *)(param_2 + 0x24) = uVar11;
    uVar10 = *(undefined8 *)(param_1 + 0x32);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x36);
    uVar11 = *(undefined8 *)(param_1 + 0x34);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(param_1 + 0x3e);
    uVar14 = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(param_1 + 0x3a);
    *(undefined8 *)(param_2 + 0x38) = uVar13;
    *(undefined8 *)(param_2 + 0x3e) = uVar15;
    *(undefined8 *)(param_2 + 0x3c) = uVar14;
    *(undefined8 *)(param_2 + 0x32) = uVar10;
    *(undefined8 *)(param_2 + 0x30) = uVar9;
    *(undefined8 *)(param_2 + 0x36) = uVar12;
    *(undefined8 *)(param_2 + 0x34) = uVar11;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    piVar4 = param_2;
    FUN_108245ff0();
    if ((int)piVar4 != 0) {
      if (*param_1 == 0) {
        iVar5 = param_2[3];
        if (0 < iVar5) {
          iVar1 = param_2[2];
          iVar2 = param_2[10];
          lVar7 = *(long *)(param_2 + 4);
          iVar3 = param_1[10];
          uVar8 = iVar5 + 1;
          lVar6 = *(long *)(param_1 + 4);
          do {
            _memcpy(lVar7,lVar6,(long)iVar1);
            lVar6 = lVar6 + iVar3;
            lVar7 = lVar7 + iVar2;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
          iVar5 = param_2[3];
        }
        iVar5 = iVar5 + 1 >> 1;
        if (0 < iVar5) {
          iVar1 = param_2[2];
          iVar2 = param_2[0xb];
          lVar7 = *(long *)(param_2 + 6);
          iVar3 = param_1[0xb];
          lVar6 = *(long *)(param_1 + 6);
          uVar8 = iVar5 + 1;
          do {
            _memcpy(lVar7,lVar6,(long)((ulong)(iVar1 + 1) << 0x20) >> 0x21);
            lVar6 = lVar6 + iVar3;
            lVar7 = lVar7 + iVar2;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
          iVar5 = param_2[3] + 1 >> 1;
          if (0 < iVar5) {
            iVar1 = param_2[2];
            iVar2 = param_2[0xb];
            lVar7 = *(long *)(param_2 + 8);
            iVar3 = param_1[0xb];
            lVar6 = *(long *)(param_1 + 8);
            uVar8 = iVar5 + 1;
            do {
              _memcpy(lVar7,lVar6,(long)((ulong)(iVar1 + 1) << 0x20) >> 0x21);
              lVar6 = lVar6 + iVar3;
              lVar7 = lVar7 + iVar2;
              uVar8 = uVar8 - 1;
            } while (1 < uVar8);
          }
        }
        lVar6 = *(long *)(param_2 + 0xc);
        if ((lVar6 != 0) && (0 < param_2[3])) {
          iVar5 = param_2[2];
          iVar1 = param_2[0xe];
          iVar2 = param_1[0xe];
          uVar8 = param_2[3] + 1;
          lVar7 = *(long *)(param_1 + 0xc);
          do {
            _memcpy(lVar6,lVar7,(long)iVar5);
            lVar7 = lVar7 + iVar2;
            lVar6 = lVar6 + iVar1;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
        }
      }
      else if (0 < param_2[3]) {
        iVar5 = param_2[2];
        iVar1 = param_2[0x14];
        lVar7 = *(long *)(param_2 + 0x12);
        iVar2 = param_1[0x14];
        lVar6 = *(long *)(param_1 + 0x12);
        uVar8 = param_2[3] + 1;
        do {
          _memcpy(lVar7,lVar6,(long)iVar5 << 2);
          lVar6 = lVar6 + (long)iVar2 * 4;
          lVar7 = lVar7 + (long)iVar1 * 4;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
    }
  }
  return;
}



/* Entry: 108247fe4; end: 10824813f;  */

void FUN_108247fe4(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack_38;
  int iStack_34;
  
  if (((param_1 != (int *)0x0) && (param_6 != (int *)0x0)) &&
     (piVar3 = param_1, iStack_38 = param_3, iStack_34 = param_2,
     FUN_108248140(param_1,&iStack_34,&iStack_38), (int)piVar3 != 0)) {
    if (param_1 != param_6) {
      uVar9 = *(undefined8 *)(param_1 + 2);
      uVar8 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 6);
      uVar10 = *(undefined8 *)(param_1 + 4);
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar14 = *(undefined8 *)(param_1 + 0xe);
      uVar13 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_6 + 10) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_6 + 8) = uVar12;
      *(undefined8 *)(param_6 + 0xe) = uVar14;
      *(undefined8 *)(param_6 + 0xc) = uVar13;
      *(undefined8 *)(param_6 + 2) = uVar9;
      *(undefined8 *)param_6 = uVar8;
      *(undefined8 *)(param_6 + 6) = uVar11;
      *(undefined8 *)(param_6 + 4) = uVar10;
      uVar9 = *(undefined8 *)(param_1 + 0x12);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x16);
      uVar10 = *(undefined8 *)(param_1 + 0x14);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x1e);
      uVar13 = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(param_6 + 0x1a) = *(undefined8 *)(param_1 + 0x1a);
      *(undefined8 *)(param_6 + 0x18) = uVar12;
      *(undefined8 *)(param_6 + 0x1e) = uVar14;
      *(undefined8 *)(param_6 + 0x1c) = uVar13;
      *(undefined8 *)(param_6 + 0x12) = uVar9;
      *(undefined8 *)(param_6 + 0x10) = uVar8;
      *(undefined8 *)(param_6 + 0x16) = uVar11;
      *(undefined8 *)(param_6 + 0x14) = uVar10;
      uVar9 = *(undefined8 *)(param_1 + 0x22);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x26);
      uVar10 = *(undefined8 *)(param_1 + 0x24);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar14 = *(undefined8 *)(param_1 + 0x2e);
      uVar13 = *(undefined8 *)(param_1 + 0x2c);
      *(undefined8 *)(param_6 + 0x2a) = *(undefined8 *)(param_1 + 0x2a);
      *(undefined8 *)(param_6 + 0x28) = uVar12;
      *(undefined8 *)(param_6 + 0x2e) = uVar14;
      *(undefined8 *)(param_6 + 0x2c) = uVar13;
      *(undefined8 *)(param_6 + 0x22) = uVar9;
      *(undefined8 *)(param_6 + 0x20) = uVar8;
      *(undefined8 *)(param_6 + 0x26) = uVar11;
      *(undefined8 *)(param_6 + 0x24) = uVar10;
      uVar9 = *(undefined8 *)(param_1 + 0x32);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar11 = *(undefined8 *)(param_1 + 0x36);
      uVar10 = *(undefined8 *)(param_1 + 0x34);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uVar14 = *(undefined8 *)(param_1 + 0x3e);
      uVar13 = *(undefined8 *)(param_1 + 0x3c);
      *(undefined8 *)(param_6 + 0x3a) = *(undefined8 *)(param_1 + 0x3a);
      *(undefined8 *)(param_6 + 0x38) = uVar12;
      *(undefined8 *)(param_6 + 0x3e) = uVar14;
      *(undefined8 *)(param_6 + 0x3c) = uVar13;
      *(undefined8 *)(param_6 + 0x32) = uVar9;
      *(undefined8 *)(param_6 + 0x30) = uVar8;
      *(undefined8 *)(param_6 + 0x36) = uVar11;
      *(undefined8 *)(param_6 + 0x34) = uVar10;
      param_6[0x12] = 0;
      param_6[0x13] = 0;
      param_6[0x14] = 0;
      param_6[6] = 0;
      param_6[7] = 0;
      param_6[4] = 0;
      param_6[5] = 0;
      param_6[10] = 0;
      param_6[0xb] = 0;
      param_6[8] = 0;
      param_6[9] = 0;
      param_6[0xd] = 0;
      param_6[0xe] = 0;
      param_6[0xb] = 0;
      param_6[0xc] = 0;
      param_6[0x38] = 0;
      param_6[0x39] = 0;
      param_6[0x3a] = 0;
      param_6[0x3b] = 0;
    }
    param_6[2] = param_4;
    param_6[3] = param_5;
    lVar4 = (long)iStack_34;
    if (*param_1 == 0) {
      iVar6 = param_1[10];
      iVar1 = param_1[0xb];
      lVar5 = *(long *)(param_1 + 6);
      iVar2 = iVar1 * (iStack_38 >> 1);
      *(long *)(param_6 + 4) = *(long *)(param_1 + 4) + (long)(iVar6 * iStack_38) + lVar4;
      *(long *)(param_6 + 6) = lVar5 + iVar2 + (long)(iStack_34 >> 1);
      *(long *)(param_6 + 8) = *(long *)(param_1 + 8) + (long)iVar2 + (long)(iStack_34 >> 1);
      param_6[10] = iVar6;
      param_6[0xb] = iVar1;
      if (*(long *)(param_1 + 0xc) == 0) {
        return;
      }
      iVar6 = param_1[0xe];
      lVar4 = *(long *)(param_1 + 0xc) + (long)(iVar6 * iStack_38) + lVar4;
      lVar5 = 0x38;
      lVar7 = 0x30;
    }
    else {
      iVar6 = param_1[0x14];
      lVar4 = *(long *)(param_1 + 0x12) + (long)(iVar6 * iStack_38) * 4 + lVar4 * 4;
      lVar5 = 0x50;
      lVar7 = 0x48;
    }
    *(long *)((long)param_6 + lVar7) = lVar4;
    *(int *)((long)param_6 + lVar5) = iVar6;
  }
  return;
}



/* Entry: 108248140; end: 1082481b3;  */

bool FUN_108248140(int *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  if (*param_1 == 0) {
    *param_2 = *param_2 & 0xfffffffe;
    *param_3 = *param_3 & 0xfffffffe;
  }
  if ((-1 < (int)*param_2) && (-1 < (int)*param_3)) {
    if (param_4 < 1) {
      return false;
    }
    if (param_5 < 1) {
      return false;
    }
    if ((int)(*param_2 + param_4) <= param_1[2]) {
      return (int)(*param_3 + param_5) <= param_1[3];
    }
  }
  return false;
}



/* Entry: 1082481b4; end: 108248233;  */

void FUN_1082481b4(int *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = param_1[3];
    lVar2 = *(long *)(param_1 + 0x12);
    FUN_10822dff4();
    if (0 < iVar1) {
      uVar3 = iVar1 + 1;
      do {
        (*pcRam0000000113869a58)(lVar2,param_1[2],param_2 & 0xffffff);
        lVar2 = lVar2 + (long)param_1[0x14] * 4;
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  return;
}



/* Entry: 108248234; end: 1082485d7;  */

int * FUN_108248234(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  int *piStack_68;
  
  if (param_1 != (int *)0x0) {
    iVar12 = param_1[2];
    iVar9 = param_1[3];
    iVar2 = iVar12 + 7;
    if (-1 < iVar12) {
      iVar2 = iVar12;
    }
    iVar3 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar3 = iVar9;
    }
    if (*param_1 == 0) {
      piStack_68 = *(int **)(param_1 + 0xc);
      if ((((piStack_68 != (int *)0x0) && (lStack_70 = *(long *)(param_1 + 4), lStack_70 != 0)) &&
          (lVar14 = *(long *)(param_1 + 6), lVar14 != 0)) &&
         (lVar22 = *(long *)(param_1 + 8), lVar22 != 0)) {
        iVar2 = param_1[10];
        lVar8 = (long)iVar2;
        iVar3 = param_1[0xe];
        lVar21 = (long)iVar3;
        if (iVar9 < 8) {
          iVar7 = 0;
        }
        else {
          uStack_80 = 0;
          uStack_78 = 0;
          lVar23 = (long)param_1[0xb];
          lVar10 = (long)(param_1[0xb] << 2);
          iVar13 = 8;
          do {
            iVar7 = iVar13;
            if (iVar12 < 8) {
              uVar19 = 0;
            }
            else {
              uVar16 = 0;
              bVar6 = true;
              uVar17 = 8;
              do {
                uVar19 = uVar17;
                pbVar18 = (byte *)(lStack_70 + uVar16);
                param_1 = (int *)((long)piStack_68 + uVar16);
                FUN_1082485d8(param_1,lVar21,pbVar18,lVar8,8,8);
                if ((int)param_1 == 0) {
                  bVar6 = true;
                }
                else {
                  if (bVar6) {
                    uStack_78 = (ulong)*pbVar18;
                    uStack_80 = (ulong)CONCAT14(*(undefined1 *)(lVar14 + (uVar16 >> 1)),
                                                (uint)*(byte *)(lVar22 + (uVar16 >> 1)));
                  }
                  iVar13 = 8;
                  do {
                    *(ulong *)pbVar18 = uStack_78 * 0x101010101010101;
                    pbVar18 = pbVar18 + lVar8;
                    iVar13 = iVar13 + -1;
                  } while (iVar13 != 0);
                  bVar6 = false;
                  piVar20 = (int *)(lVar14 + (uVar16 >> 1));
                  iVar13 = uStack_80._4_4_ * 0x1010101;
                  *piVar20 = iVar13;
                  piVar20 = (int *)((long)piVar20 + lVar23);
                  *piVar20 = iVar13;
                  piVar20 = (int *)((long)piVar20 + lVar23);
                  *piVar20 = iVar13;
                  *(int *)((long)piVar20 + lVar23) = iVar13;
                  piVar20 = (int *)(lVar22 + (uVar16 >> 1));
                  iVar13 = (int)uStack_80 * 0x1010101;
                  *piVar20 = iVar13;
                  piVar20 = (int *)((long)piVar20 + lVar23);
                  *piVar20 = iVar13;
                  piVar20 = (int *)((long)piVar20 + lVar23);
                  *piVar20 = iVar13;
                  *(int *)((long)piVar20 + lVar23) = iVar13;
                }
                uVar16 = uVar16 + 8;
                uVar17 = uVar19 + 8;
              } while ((int)(uVar19 + 8) <= iVar12);
            }
            if (iVar12 - uVar19 != 0 && (int)uVar19 <= iVar12) {
              param_1 = (int *)((long)piStack_68 + (ulong)uVar19);
              FUN_1082485d8(param_1,lVar21,lStack_70 + (ulong)uVar19,lVar8,iVar12 - uVar19,8);
            }
            piStack_68 = piStack_68 + lVar21 * 2;
            lStack_70 = lStack_70 + lVar8 * 8;
            lVar14 = lVar14 + lVar10;
            lVar22 = lVar22 + lVar10;
            iVar13 = iVar7 + 8;
          } while (iVar7 + 8 <= iVar9);
        }
        iVar13 = iVar9 - iVar7;
        if (iVar13 != 0 && iVar7 <= iVar9) {
          if (iVar12 < 8) {
            uVar19 = 0;
          }
          else {
            piVar20 = piStack_68;
            lVar14 = lStack_70;
            uVar17 = 0;
            do {
              param_1 = piVar20;
              FUN_1082485d8(piVar20,lVar21,lVar14,lVar8,8,iVar13);
              lVar14 = lVar14 + 8;
              piVar20 = piVar20 + 2;
              uVar19 = uVar17 + 8;
              iVar9 = uVar17 + 0x10;
              uVar17 = uVar19;
            } while (iVar9 <= iVar12);
          }
          uVar17 = iVar12 - uVar19;
          if (uVar17 != 0 && (int)uVar19 <= iVar12) {
            lVar14 = (long)piStack_68 + (ulong)uVar19;
            lStack_70 = lStack_70 + (ulong)uVar19;
            if (iVar13 < 1) {
              iVar12 = 0;
            }
            else {
              iVar7 = 0;
              iVar9 = 0;
              iVar12 = 0;
              lVar8 = lStack_70;
              lVar22 = lVar14;
              do {
                if (0 < (int)uVar17) {
                  uVar16 = 0;
                  do {
                    if (*(char *)(lVar22 + uVar16) != '\0') {
                      iVar12 = iVar12 + 1;
                      iVar7 = iVar7 + (uint)*(byte *)(lVar8 + uVar16);
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar17 != uVar16);
                }
                lVar22 = lVar22 + iVar3;
                lVar8 = lVar8 + iVar2;
                iVar9 = iVar9 + 1;
              } while (iVar9 != iVar13);
              if ((0 < iVar12) && (iVar12 < (int)(iVar13 * uVar17))) {
                iVar9 = 0;
                uVar5 = 0;
                if (iVar12 != 0) {
                  uVar5 = (undefined1)(iVar7 / iVar12);
                }
                do {
                  if (0 < (int)uVar17) {
                    uVar16 = 0;
                    do {
                      if (*(char *)(lVar14 + uVar16) == '\0') {
                        *(undefined1 *)(lStack_70 + uVar16) = uVar5;
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar17 != uVar16);
                  }
                  lVar14 = lVar14 + iVar3;
                  lStack_70 = lStack_70 + iVar2;
                  iVar9 = iVar9 + 1;
                } while (iVar9 != iVar13);
                iVar12 = 1;
              }
            }
            return (int *)(ulong)(iVar12 == 0);
          }
        }
      }
    }
    else if (7 < iVar9) {
      iVar9 = 0;
      uVar11 = 0;
      do {
        if (7 < iVar12) {
          iVar13 = 0;
          lVar14 = *(long *)(param_1 + 0x12);
          bVar6 = true;
          do {
            iVar7 = 0;
            iVar1 = param_1[0x14];
            iVar4 = (iVar13 + iVar1 * iVar9) * 8;
            lVar22 = lVar14 + (long)iVar4 * 4;
            do {
              lVar8 = 0;
              do {
                if (*(char *)(lVar22 + lVar8 + 3) != '\0') {
                  bVar6 = true;
                  goto LAB_108248328;
                }
                lVar8 = lVar8 + 4;
              } while (lVar8 != 0x20);
              iVar7 = iVar7 + 1;
              lVar22 = lVar22 + (long)iVar1 * 4;
            } while (iVar7 != 8);
            if (bVar6) {
              uVar11 = *(undefined4 *)(lVar14 + (long)iVar4 * 4);
            }
            puVar15 = (undefined8 *)(lVar14 + 0x10 + (long)((iVar13 + iVar9 * iVar1) * 8) * 4);
            iVar7 = 8;
            do {
              puVar15[-1] = CONCAT44(uVar11,uVar11);
              puVar15[-2] = CONCAT44(uVar11,uVar11);
              puVar15[1] = CONCAT44(uVar11,uVar11);
              *puVar15 = CONCAT44(uVar11,uVar11);
              puVar15 = (undefined8 *)((long)puVar15 + (long)iVar1 * 4);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            bVar6 = false;
LAB_108248328:
            iVar13 = iVar13 + 1;
          } while (iVar13 != iVar2 >> 3);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar3 >> 3);
    }
  }
  return param_1;
}



/* Entry: 1082485d8; end: 1082486ab;  */

bool FUN_1082485d8(long param_1,int param_2,long param_3,int param_4,uint param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_6 < 1) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    iVar2 = 0;
    lVar5 = param_3;
    lVar6 = param_1;
    do {
      if (0 < (int)param_5) {
        uVar7 = 0;
        do {
          if (*(char *)(lVar6 + uVar7) != '\0') {
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + (uint)*(byte *)(lVar5 + uVar7);
          }
          uVar7 = uVar7 + 1;
        } while (param_5 != uVar7);
      }
      lVar6 = lVar6 + param_2;
      lVar5 = lVar5 + param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_6);
    if ((0 < iVar2) && (iVar2 < (int)(param_6 * param_5))) {
      iVar4 = 0;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (undefined1)(iVar3 / iVar2);
      }
      do {
        if (0 < (int)param_5) {
          uVar7 = 0;
          do {
            if (*(char *)(param_1 + uVar7) == '\0') {
              *(undefined1 *)(param_3 + uVar7) = uVar1;
            }
            uVar7 = uVar7 + 1;
          } while (param_5 != uVar7);
        }
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        iVar4 = iVar4 + 1;
      } while (iVar4 != param_6);
      iVar2 = 1;
    }
  }
  return iVar2 == 0;
}



/* Entry: 1082486ac; end: 10824a2d7;  */

void FUN_1082486ac(long param_1,int param_2,int param_3,uint param_4,uint param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  
  *param_6 = param_4;
  if ((int)param_4 < (int)param_5) {
    iVar13 = 1 << (ulong)(param_4 & 0x1f);
    uVar3 = (uint)(iVar13 + param_2 + -1) >> (ulong)(param_4 & 0x1f);
    uVar4 = (uint)(iVar13 + param_3 + -1) >> (ulong)(param_4 & 0x1f);
    lVar9 = (long)(int)uVar3;
    uVar18 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    uVar19 = param_4;
    do {
      uVar1 = uVar19 + 1;
      iVar13 = 1 << (ulong)(uVar19 - param_4 & 0x1f);
      if (iVar13 < (int)uVar4) {
        lVar21 = 0;
        lVar17 = (long)(1 << (ulong)(uVar1 - param_4 & 0x1f));
        lVar16 = param_1;
        do {
          lVar5 = lVar16;
          _memcmp(lVar16,lVar16 + uVar18 * (long)iVar13,uVar18);
          uVar20 = uVar19;
          if ((int)lVar5 != 0) goto LAB_1082487bc;
          lVar21 = lVar21 + lVar17;
          lVar16 = lVar16 + uVar18 * lVar17;
        } while (lVar21 < (long)(int)uVar4 - (long)iVar13);
      }
      uVar19 = uVar1;
      uVar20 = param_5;
    } while (uVar1 != param_5);
LAB_1082487bc:
    if (uVar20 != param_4) {
      uVar19 = uVar20;
      if ((int)param_4 <= (int)uVar20) {
        uVar19 = param_4;
      }
      if (((int)param_4 < (int)uVar20) && (0 < (int)uVar4)) {
        uVar1 = uVar20;
LAB_1082487f0:
        uVar20 = uVar1;
        lVar21 = 0;
        uVar1 = 1 << (ulong)(uVar20 - param_4 & 0x1f);
        piVar14 = (int *)(param_1 + 4);
        do {
          if (0 < (int)uVar3) {
            lVar16 = 1;
            piVar6 = piVar14;
            lVar17 = 0;
            do {
              lVar5 = lVar17 + (int)uVar1;
              uVar2 = (uint)lVar5;
              if ((int)uVar3 <= (int)(uint)lVar5) {
                uVar2 = uVar3;
              }
              lVar7 = lVar16;
              piVar8 = piVar6;
              while (lVar7 < (int)uVar2) {
                iVar13 = *piVar8;
                lVar7 = lVar7 + 1;
                piVar8 = piVar8 + 1;
                if (iVar13 != *(int *)(param_1 + lVar21 * lVar9 * 4 + lVar17 * 4)) {
                  uVar1 = uVar20 - 1;
                  uVar20 = uVar19;
                  if ((int)uVar1 <= (int)param_4) goto LAB_108248894;
                  goto LAB_1082487f0;
                }
              }
              piVar6 = (int *)((long)piVar6 +
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
              lVar16 = lVar16 + (int)uVar1;
              lVar17 = lVar5;
            } while (lVar5 < lVar9);
          }
          lVar21 = lVar21 + 1;
          piVar14 = piVar14 + lVar9;
        } while (lVar21 != (int)uVar4);
      }
LAB_108248894:
      if (uVar20 - param_4 != 0) {
        iVar13 = 1 << (ulong)(uVar20 & 0x1f);
        uVar4 = (uint)(iVar13 + param_3 + -1) >> (ulong)(uVar20 & 0x1f);
        if (0 < (int)uVar4) {
          iVar10 = 0;
          uVar11 = 0;
          uVar18 = 0;
          uVar19 = (uint)(iVar13 + param_2 + -1) >> (ulong)(uVar20 & 0x1f);
          do {
            if (0 < (int)uVar19) {
              puVar12 = (undefined4 *)(param_1 + uVar11 * 4);
              uVar15 = (ulong)uVar19;
              iVar13 = iVar10;
              do {
                *puVar12 = *(undefined4 *)
                            (param_1 + (long)(iVar13 << (ulong)(uVar20 - param_4 & 0x1f)) * 4);
                iVar13 = iVar13 + 1;
                uVar15 = uVar15 - 1;
                puVar12 = puVar12 + 1;
              } while (uVar15 != 0);
            }
            uVar18 = uVar18 + 1;
            uVar11 = (ulong)((int)uVar11 + uVar19);
            iVar10 = iVar10 + uVar3;
          } while (uVar18 != uVar4);
        }
        *param_6 = uVar20;
      }
    }
  }
  return;
}



/* Entry: 10824a2d8; end: 10824a457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10824a2d8(uint param_1,uint param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [16];
  undefined1 auVar8 [13];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9 = NEON_ushl(ZEXT416(param_1),_UNK_10df0fc40,4);
  auVar3._4_8_ = 0;
  auVar3._0_4_ = param_1;
  auVar1._1_11_ = SUB1211(auVar3 << 0x40,1);
  auVar1[0] = (char)(param_1 >> 0x10);
  auVar6._0_5_ = auVar1._0_5_ << 0x20;
  auVar6._5_3_ = 0;
  auVar6[8] = (undefined1)(param_1 >> 8);
  auVar6._9_3_ = 0;
  auVar6[0xc] = (undefined1)param_1;
  auVar7._4_9_ = auVar6._4_9_;
  auVar7._0_4_ = auVar9._0_4_;
  auVar7._13_3_ = 0;
  auVar9 = NEON_ushl(ZEXT416(param_2),_UNK_10df0fc40,4);
  auVar4._4_8_ = 0;
  auVar4._0_4_ = param_2;
  auVar2._1_11_ = SUB1211(auVar4 << 0x40,1);
  auVar2[0] = (char)(param_2 >> 0x10);
  auVar8._0_5_ = auVar2._0_5_ << 0x20;
  auVar8._5_3_ = 0;
  auVar8[8] = (undefined1)(param_2 >> 8);
  auVar8._9_3_ = 0;
  auVar8[0xc] = (undefined1)param_2;
  auVar10._4_9_ = auVar8._4_9_;
  auVar10._0_4_ = auVar9._0_4_;
  auVar10._13_3_ = 0;
  auVar7 = NEON_uabd(auVar10,auVar7,4);
  uVar5 = NEON_umaxv(auVar7,4);
  return uVar5;
}



/* Entry: 10824a458; end: 10824a6c7;  */

/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x00010824a7b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ushort * FUN_10824a458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      uint param_5,uint param_6,ulong param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  char cVar4;
  uint7 uVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ushort *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 *puVar24;
  long lVar25;
  uint uVar26;
  ushort *puVar27;
  ushort *puVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  bool bVar33;
  ushort *puVar34;
  ushort uVar35;
  long lVar36;
  int iVar37;
  ushort *puVar38;
  long lVar39;
  ushort *puVar40;
  long lVar41;
  int iVar42;
  byte *pbVar43;
  long lVar44;
  uint *puVar45;
  ushort *puVar46;
  ushort *puVar47;
  undefined8 *puVar48;
  long lVar49;
  undefined *puVar50;
  byte bVar51;
  byte bVar52;
  float fVar53;
  uint7 uVar54;
  double dVar55;
  undefined8 extraout_d0;
  undefined8 uVar56;
  int iVar59;
  long lVar61;
  int iVar62;
  undefined1 auVar57 [16];
  int iVar60;
  undefined1 auVar58 [16];
  undefined1 in_b1;
  undefined1 in_register_00005021;
  undefined1 in_register_00005022;
  undefined1 in_register_00005023;
  undefined1 in_register_00005024;
  undefined1 in_register_00005025;
  undefined1 in_register_00005026;
  undefined1 in_register_00005027;
  double dVar63;
  undefined8 uVar64;
  long lStack_e70;
  long lStack_e68;
  long lStack_e60;
  ulong uStack_e58;
  uint uStack_e4c;
  long lStack_e38;
  ulong uStack_e00;
  long lStack_df8;
  int iStack_de0;
  undefined4 uStack_ddc;
  long lStack_dd8;
  undefined4 auStack_dd0 [4];
  undefined4 uStack_dc0;
  long lStack_db8;
  long lStack_db0;
  long lStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  long lStack_d80;
  long lStack_d78;
  ulong uStack_d70;
  long lStack_d68;
  long lStack_d60;
  undefined8 auStack_d38 [64];
  long alStack_b38 [7];
  long lStack_b00;
  long lStack_af8;
  long lStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  long lStack_ad8;
  long lStack_ad0;
  long lStack_ac8;
  long lStack_ac0;
  long lStack_ab8;
  long lStack_ab0;
  long lStack_aa8;
  long lStack_aa0;
  long lStack_a98;
  long lStack_a90;
  long lStack_a88;
  long lStack_a80;
  long lStack_a78;
  long lStack_a70;
  long lStack_a68;
  long lStack_a60;
  long lStack_a58;
  long lStack_a50;
  long lStack_a48;
  long lStack_a40;
  uint uStack_a20;
  undefined4 uStack_a1c;
  ushort uStack_a18;
  long lStack_a10;
  undefined *puStack_a00;
  undefined8 *puStack_9f8;
  ushort *puStack_9f0;
  ushort *puStack_9e8;
  ushort *puStack_9e0;
  undefined *puStack_9d8;
  ushort *puStack_9d0;
  ushort *puStack_9c8;
  ushort *puStack_9c0;
  ushort *puStack_9b8;
  undefined1 ***pppuStack_9b0;
  code *pcStack_9a8;
  int iStack_994;
  undefined8 uStack_990;
  undefined8 uStack_988;
  long lStack_978;
  undefined1 **ppuStack_900;
  code *pcStack_8f8;
  ulong uStack_8e8;
  undefined1 auStack_8e0 [1024];
  long lStack_4e0;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined1 auStack_468 [1024];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_7;
  uVar56 = param_8;
  _bzero(auStack_468,0x400);
  puVar16 = auStack_468;
  uVar22 = param_7;
  (*pcRam000000011386a068)(param_1,param_2,param_3,param_4);
  puVar7 = auStack_468;
  (*pcRam000000011386a070)(puVar7,param_8);
  puVar8 = auStack_468;
  uVar13 = 3;
  uVar15 = 0xf0;
  func_0x00010824a3a0();
  uVar19 = (uint)param_7 & 0xff;
  puVar46 = (ushort *)((long)(puVar8 + (long)puVar7) + -0x1800000);
  if (uVar19 != (param_5 & 0xff)) {
    puVar46 = (ushort *)(puVar8 + (long)puVar7);
  }
  puVar14 = puVar46 + -0xc00000;
  if (uVar19 != (param_6 & 0xff)) {
    puVar14 = puVar46;
  }
  puVar46 = puVar14 + -0xc00000;
  if ((uint)param_7 != 0) {
    puVar46 = puVar14;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar46;
  }
  ___stack_chk_fail();
  uStack_478 = 0x10824a570;
  lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_8e8 = uVar22 >> 8 & 0xffffff;
  puVar50 = (undefined *)((ulong)puVar16 >> 8 & 0xffffff);
  puStack_480 = &stack0xfffffffffffffff0;
  _bzero(auStack_8e0,0x400);
  (*pcRam000000011386a060)(puVar46,uVar13,uVar15,param_4,uVar17,uVar56,auStack_8e0);
  puVar7 = auStack_8e0;
  (*pcRam000000011386a070)(puVar7,puStack_470);
  puVar8 = auStack_8e0;
  puVar14 = (ushort *)0x3;
  uVar13 = 0xf0;
  func_0x00010824a3a0();
  uVar19 = (uint)uVar17 & 0xff;
  puVar46 = (ushort *)((long)(puVar8 + (long)puVar7) + -0x1800000);
  if (uVar19 != ((uint)uStack_8e8 & 0xff)) {
    puVar46 = (ushort *)(puVar8 + (long)puVar7);
  }
  puVar9 = puVar46 + -0xc00000;
  if (uVar19 != ((uint)puVar50 & 0xff)) {
    puVar9 = puVar46;
  }
  uVar19 = (uint)uVar56 & 0xff;
  puVar46 = puVar9 + -0xc00000;
  if (uVar19 != (uint)uVar22 >> 0x10) {
    puVar46 = puVar9;
  }
  puVar9 = puVar46 + -0xc00000;
  if (uVar19 != (uint)puVar16 >> 0x10) {
    puVar9 = puVar46;
  }
  puVar46 = puVar9 + -0xc00000;
  if ((uint)uVar17 != 0) {
    puVar46 = puVar9;
  }
  puVar9 = puVar46 + -0xc00000;
  if ((uint)uVar56 != 0) {
    puVar9 = puVar46;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e0) {
    return puVar9;
  }
  fVar53 = (float)___stack_chk_fail();
  ppuStack_900 = &puStack_480;
  pcStack_8f8 = FUN_10824a6c8;
  lStack_978 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(uint *)(puVar9 + 0x10);
  puVar38 = (ushort *)(ulong)uVar19;
  puVar40 = (ushort *)(long)(int)uVar19;
  puVar46 = *(ushort **)puVar9;
  uVar30 = *(uint *)(puVar46 + 0xe);
  puStack_9d0 = (ushort *)(ulong)uVar30;
  dVar55 = (double)fVar53 / 100.0;
  if (*(int *)(puVar46 + 0x28) == 0) {
    dVar63 = dVar55 * 2.0 + -1.0;
    bVar6 = 0.75 <= dVar55;
    dVar55 = dVar55 * 0.6666666666666666;
    if (bVar6) {
      dVar55 = dVar63;
    }
  }
  else {
    dVar63 = 0.9;
    if (0.3 <= (double)*(int *)(puVar9 + 0x702) / 255.0) {
      dVar63 = ((double)*(int *)(puVar9 + 0x702) / 255.0 + -0.3) * -0.9090909090909091 + 0.9;
    }
  }
  puVar10 = puVar9;
  _pow(dVar55,CONCAT17(in_register_00005027,
                       CONCAT16(in_register_00005026,
                                CONCAT15(in_register_00005025,
                                         CONCAT14(in_register_00005024,
                                                  CONCAT13(in_register_00005023,
                                                           CONCAT12(in_register_00005022,
                                                                    CONCAT11(in_register_00005021,
                                                                             in_b1))))))),dVar63);
  puVar47 = puVar9 + 0x706;
  if ((int)uVar19 < 1) {
    iVar42 = *(int *)(puVar9 + 0x284);
    *(int *)(puVar9 + 0x700) = iVar42;
LAB_10824a858:
    puVar28 = puVar9 + (long)(int)uVar19 * 0x174 + 0x284;
    puVar27 = puVar40;
    do {
      puVar27 = (ushort *)((long)puVar27 + 1);
      *(int *)puVar28 = iVar42;
      puVar28 = puVar28 + 0x174;
      puVar48 = puStack_470;
    } while ((int)puVar27 != 4);
  }
  else {
    puVar45 = (uint *)(puVar9 + 0x284);
    puVar48 = (undefined8 *)0x7f;
    puVar28 = puVar38;
    do {
      dVar55 = (double)_pow(extraout_d0);
      uVar18 = (uint)((1.0 - dVar55) * 127.0);
      uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar18) {
        uVar18 = 0x7f;
      }
      *puVar45 = uVar18;
      puVar45 = puVar45 + 0xba;
      puVar28 = (ushort *)((long)puVar28 + -1);
    } while (puVar28 != (ushort *)0x0);
    iVar42 = *(int *)(puVar9 + 0x284);
    *(int *)(puVar9 + 0x700) = iVar42;
    puVar50 = (undefined *)0x0;
    puStack_470 = puVar48;
    if (uVar19 < 4) goto LAB_10824a858;
  }
  lVar21 = 0;
  puStack_9e0 = puVar9 + 0x130;
  iVar42 = ((*(int *)(puVar9 + 0x704) * 10 + -0x280) / 0x46) * uVar30;
  puVar47[0] = 0;
  puVar47[1] = 0;
  puVar47[2] = 0;
  puVar47[3] = 0;
  puVar9[0x70a] = 0;
  puVar9[0x70b] = 0;
  lVar61 = (long)iVar42 * 0x51eb851f;
  iVar20 = (int)((ulong)((long)(int)uVar30 * -0x51eb851f) >> 0x20);
  uVar56 = NEON_sshl(CONCAT17((char)(iVar42 / 0x3200000) + (char)(iVar42 >> 0x1f),
                              CONCAT16((char)((ulong)lVar61 >> 0x30),
                                       CONCAT15((char)((ulong)lVar61 >> 0x28),
                                                CONCAT14((char)((ulong)lVar61 >> 0x20),iVar20)))),
                     0xfffffffbfffffffd,4);
  uVar56 = NEON_smax(CONCAT44((int)((ulong)uVar56 >> 0x20) - (iVar42 >> 0x1f),
                              (int)uVar56 - (iVar20 >> 0x1f)),0xfffffffcfffffff1,4);
  lVar61 = NEON_smin(uVar56,0x60000000f,4);
  *(long *)(puVar9 + 0x70c) = lVar61;
  iVar42 = *(int *)(puVar46 + 0x10);
  iVar20 = *(int *)(puVar9 + 0xc);
  do {
    uVar30 = *(uint *)((long)puVar9 + lVar21 + 0x508);
    uVar30 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar30) {
      uVar30 = 0x7f;
    }
    uVar18 = (uint)(*(ushort *)(&UNK_10df0fcb0 + (ulong)uVar30 * 2) >> 2);
    if (0x3e < *(ushort *)(&UNK_10df0fcb0 + (ulong)uVar30 * 2) >> 2) {
      uVar18 = 0x3f;
    }
    iVar60 = *(int *)((long)puVar9 + lVar21 + 0x504) + 0x100;
    iVar37 = 0;
    if (iVar60 != 0) {
      iVar37 = (int)(iVar42 * 5 * (uint)(byte)(&UNK_10df0e948)[(ulong)uVar18 + (long)iVar20 * 0x40])
               / iVar60;
    }
    iVar60 = iVar37;
    if (0x3e < iVar37) {
      iVar60 = 0x3f;
    }
    iVar59 = 0;
    if (1 < iVar37) {
      iVar59 = iVar60;
    }
    *(int *)((long)puVar9 + lVar21 + 0x50c) = iVar59;
    lVar21 = lVar21 + 0x2e8;
  } while (lVar21 != 0xba0);
  iVar42 = *(int *)(puVar46 + 0x12);
  *(uint *)(puVar9 + 8) = (uint)(*(int *)(puVar46 + 0x14) == 0);
  *(int *)(puVar9 + 10) = *(int *)(puVar9 + 0x286);
  *(int *)(puVar9 + 0xc) = iVar42;
  if (1 < (int)uVar19) {
    uStack_988 = 0x300000002;
    uStack_990 = 0x100000000;
    if (3 < uVar19) {
      uVar19 = 4;
    }
    puVar40 = (ushort *)(ulong)uVar19;
    puVar38 = puVar9 + 0x286;
    puVar46 = (ushort *)0x1;
    puVar47 = (ushort *)0x2e8;
    puVar48 = &uStack_990;
    puStack_9d0 = (ushort *)0x1;
    do {
      iVar42 = (int)puStack_9d0;
      puVar14 = puStack_9e0 + (long)puVar46 * 0x174;
      if (iVar42 < 1) {
        puVar28 = (ushort *)0x0;
      }
      else {
        puVar27 = (ushort *)0x0;
        puVar34 = puVar38;
        do {
          if ((*(int *)(puVar14 + 0x154) == *(int *)(puVar34 + -2)) &&
             (*(int *)(puVar14 + 0x156) == *(int *)puVar34)) {
            *(int *)((long)puVar48 + (long)puVar46 * 4) = (int)puVar27;
            goto LAB_10824aa58;
          }
          puVar27 = (ushort *)((long)puVar27 + 1);
          puVar34 = puVar34 + 0x174;
          puVar28 = puStack_9d0;
        } while (puStack_9d0 != puVar27);
      }
      *(int *)((long)puVar48 + (long)puVar46 * 4) = (int)puVar28;
      if (puStack_9d0 != puVar46) {
        puVar10 = puStack_9e0 + (long)iVar42 * 0x174;
        uVar13 = 0x2e8;
        _memcpy();
      }
      puStack_9d0 = (ushort *)(ulong)(iVar42 + 1);
LAB_10824aa58:
      puVar46 = (ushort *)((long)puVar46 + 1);
    } while (puVar46 != puVar40);
    iVar42 = (int)puStack_9d0;
    puVar50 = &UNK_10df0fcb0;
    if (iVar42 < (int)uVar19) {
      uVar19 = *(int *)(puVar9 + 0x1a) * *(int *)(puVar9 + 0x18);
      if (0 < (int)uVar19) {
        uVar22 = (ulong)uVar19 + 1;
        lVar21 = (ulong)uVar19 * 4;
        do {
          lVar21 = lVar21 + -4;
          bVar51 = *(byte *)(*(long *)(puVar9 + 0x2e30) + lVar21);
          *(byte *)(*(long *)(puVar9 + 0x2e30) + lVar21) =
               (byte)((*(uint *)((ulong)&uStack_990 | (ulong)(bVar51 >> 3) & 0xc) & 3) << 5) |
               bVar51 & 0x9f;
          uVar22 = uVar22 - 1;
        } while (1 < uVar22);
      }
      *(int *)(puVar9 + 0x10) = iVar42;
      puVar38 = puStack_9e0 + (long)iVar42 * 0x174 + -0x174;
      lVar21 = (long)puVar40 - (long)iVar42;
      puVar40 = puVar9 + (long)iVar42 * 0x174 + 0x130;
      do {
        uVar13 = 0x2e8;
        puVar10 = puVar40;
        puVar14 = puVar38;
        _memcpy();
        puVar40 = puVar40 + 0x174;
        lVar21 = lVar21 + -1;
        puStack_9e0 = (ushort *)0x0;
      } while (lVar21 != 0);
    }
  }
  uVar19 = (uint)uVar13;
  if (*(int *)(puVar9 + 0x2e20) < 4) {
    iStack_994 = 0;
  }
  else {
    iStack_994 = *(int *)(*(long *)puVar9 + 0x1c);
  }
  puStack_9d8 = (undefined *)0x5c40;
  if (0 < (int)*(uint *)(puVar9 + 0x10)) {
    puStack_9e0 = (ushort *)0x0;
    puVar46 = (ushort *)((ulong)*(uint *)(puVar9 + 0x10) * 0x2e8);
    puVar47 = (ushort *)&UNK_10df0fdb0;
    puVar48 = (undefined8 *)0x7f;
    puVar50 = (undefined *)0x1;
    do {
      puStack_9d0 = (ushort *)((long)puVar9 + (long)puStack_9e0);
      uVar30 = *(uint *)(puStack_9d0 + 0x284);
      uVar19 = *(int *)(puVar9 + 0x706) + uVar30 &
               ((int)(*(int *)(puVar9 + 0x706) + uVar30) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar19) {
        uVar19 = 0x7f;
      }
      puStack_9d0[0x130] = (ushort)(byte)(&UNK_10df0fdb0)[uVar19];
      uVar19 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar19) {
        uVar19 = 0x7f;
      }
      puStack_9d0[0x131] = *(ushort *)(&UNK_10df0fcb0 + (ulong)uVar19 * 2);
      uVar19 = *(int *)(puVar9 + 0x708) + uVar30 &
               ((int)(*(int *)(puVar9 + 0x708) + uVar30) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar19) {
        uVar19 = 0x7f;
      }
      puStack_9d0[0x1a0] = (ushort)(byte)(&UNK_10df0fdb0)[uVar19] << 1;
      uVar19 = *(int *)(puVar9 + 0x70a) + uVar30 &
               ((int)(*(int *)(puVar9 + 0x70a) + uVar30) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar19) {
        uVar19 = 0x7f;
      }
      puStack_9d0[0x1a1] = *(ushort *)(&UNK_10df0fe30 + (ulong)uVar19 * 2);
      uVar19 = *(int *)(puVar9 + 0x70c) + uVar30 &
               ((int)(*(int *)(puVar9 + 0x70c) + uVar30) >> 0x1f ^ 0xffffffffU);
      if (0x74 < (int)uVar19) {
        uVar19 = 0x75;
      }
      puStack_9d0[0x210] = (ushort)(byte)(&UNK_10df0fdb0)[uVar19];
      uVar19 = *(int *)(puVar9 + 0x70e) + uVar30 &
               ((int)(*(int *)(puVar9 + 0x70e) + uVar30) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar19) {
        uVar19 = 0x7f;
      }
      puStack_9d0[0x211] = *(ushort *)(&UNK_10df0fcb0 + (ulong)uVar19 * 2);
      puVar38 = puStack_9d0 + 0x130;
      FUN_10824be98(puVar38,0);
      puVar40 = puStack_9d0 + 0x1a0;
      FUN_10824be98(puVar40,1);
      puVar10 = puStack_9d0 + 0x210;
      puVar14 = (ushort *)0x2;
      FUN_10824be98();
      uVar19 = (uint)uVar13;
      iVar37 = (int)puVar38;
      uVar30 = iVar37 * iVar37;
      iVar42 = (int)(uVar30 * 3) >> 7;
      *(int *)(puStack_9d0 + 0x28e) = iVar42;
      uVar18 = (int)puVar40 * (int)puVar40;
      *(uint *)(puStack_9d0 + 0x28c) = uVar18 * 3;
      iVar59 = (int)puVar10 * (int)puVar10;
      iVar20 = iVar59 * 3 >> 6;
      *(int *)(puStack_9d0 + 0x290) = iVar20;
      *(uint *)(puStack_9d0 + 0x292) = uVar30 >> 7;
      iVar60 = (int)(uVar30 * 7) >> 3;
      *(int *)(puStack_9d0 + 0x29a) = iVar60;
      *(uint *)(puStack_9d0 + 0x298) = uVar18 >> 2;
      iVar59 = iVar59 * 2;
      *(int *)(puStack_9d0 + 0x29c) = iVar59;
      iVar37 = iVar37 * iStack_994 >> 5;
      *(int *)(puStack_9d0 + 0x296) = iVar37;
      if (iVar42 < 1) {
        puStack_9d0[0x28e] = 1;
        puStack_9d0[0x28f] = 0;
      }
      if ((int)(uVar18 * 3) < 1) {
        puStack_9d0[0x28c] = 1;
        puStack_9d0[0x28d] = 0;
      }
      if (iVar20 < 1) {
        puStack_9d0[0x290] = 1;
        puStack_9d0[0x291] = 0;
      }
      if (uVar30 < 0x80) {
        puStack_9d0[0x292] = 1;
        puStack_9d0[0x293] = 0;
      }
      if (iVar60 < 1) {
        puStack_9d0[0x29a] = 1;
        puStack_9d0[0x29b] = 0;
      }
      if (uVar18 < 4) {
        puStack_9d0[0x298] = 1;
        puStack_9d0[0x299] = 0;
      }
      if (iVar59 < 1) {
        puStack_9d0[0x29c] = 1;
        puStack_9d0[0x29d] = 0;
      }
      if (iVar37 < 1) {
        puStack_9d0[0x296] = 1;
        puStack_9d0[0x297] = 0;
      }
      lVar21 = (long)puVar9 + (long)puStack_9e0;
      *(uint *)(lVar21 + 0x514) = ((uint)puStack_9d0[0x130] + (uint)puStack_9d0[0x130] * 4) * 4;
      *(undefined4 *)(lVar21 + 0x510) = 0;
      *(long *)(lVar21 + 0x540) = (long)(int)(uVar30 * 1000);
      puStack_9e0 = puStack_9e0 + 0x174;
      puStack_9d8 = &UNK_10df0fcb0;
    } while ((long)puVar46 - (long)puStack_9e0 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_978) {
    return puVar10;
  }
  ___stack_chk_fail();
  puStack_a00 = puVar50;
  puStack_9f8 = puVar48;
  puStack_9f0 = puVar47;
  puStack_9e8 = puVar46;
  puStack_9c8 = puVar40;
  puStack_9c0 = puVar38;
  puStack_9b8 = puVar9;
  pppuStack_9b0 = &ppuStack_900;
  pcStack_9a8 = FUN_10824ad70;
  lStack_a10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar42 = *(int *)(*(long *)(puVar10 + 0x14) + 0x5c40);
  puVar14[0x1b0] = 0;
  puVar14[0x1b1] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[0] = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0x10] = 0xffff;
  puVar14[0x11] = 0xffff;
  puVar14[0x12] = 0xffff;
  puVar14[0x13] = 0x7f;
  if (*(int *)puVar10 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(puVar10 + 0xb4);
  }
  if (*(int *)(puVar10 + 2) == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = *(long *)(puVar10 + 0xc0);
  }
  (*pcRam0000000113869fc8)(*(long *)(puVar10 + 0x10),lVar21,lVar61);
  if (*(int *)puVar10 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(puVar10 + 0xb8);
  }
  if (*(int *)(puVar10 + 2) == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = *(long *)(puVar10 + 0xc4);
  }
  (*pcRam0000000113869fc0)(*(long *)(puVar10 + 0x10),lVar21,lVar61);
  if (uVar19 != 0) {
    lVar21 = 0;
    *(uint *)(puVar10 + 0xa4) = (uint)(2 < uVar19);
    lVar61 = *(long *)(puVar10 + 0x14) + ((ulong)(**(byte **)(puVar10 + 0x18) >> 5) & 3) * 0x2e8;
    iVar60 = *(int *)(lVar61 + 0x518);
    iVar20 = *(int *)(lVar61 + 0x52c);
    pbVar43 = *(byte **)(puVar10 + 4);
    iVar37 = (uint)*pbVar43 * 0x1010101;
    lStack_d80 = CONCAT44(lStack_d80._4_4_,iVar37);
    do {
      pbVar12 = pbVar43 + lVar21;
      if ((((*(int *)pbVar12 != iVar37) || (*(int *)(pbVar12 + 4) != iVar37)) ||
          (*(int *)(pbVar12 + 8) != iVar37)) || (*(int *)(pbVar12 + 0xc) != iVar37)) {
        bVar6 = false;
        goto LAB_10824aef0;
      }
      lVar21 = lVar21 + 0x20;
    } while ((int)lVar21 != 0x200);
    bVar6 = true;
LAB_10824aef0:
    lVar21 = 0;
    puVar14[0x1a4] = 0xffff;
    puVar14[0x1a5] = 0xffff;
    puVar46 = (ushort *)&lStack_d80;
    puVar9 = puVar14;
    do {
      lVar41 = *(long *)(puVar10 + 0xc);
      *(int *)(puVar46 + 0x1a4) = (int)lVar21;
      puVar38 = puVar10;
      FUN_10824bf80(puVar10,puVar46,lVar41,lVar21);
      *(int *)(puVar46 + 0x1b0) = (int)puVar38;
      pbVar12 = pbVar43;
      (*pcRam000000011386a018)(pbVar43,lVar41);
      *(long *)puVar46 = (long)(int)pbVar12;
      if (iVar20 == 0) {
        lVar41 = 0;
      }
      else {
        pbVar12 = pbVar43;
        (*pcRam000000011386a038)(pbVar43,lVar41,&UNK_10df0ff46);
        lVar41 = (long)((ulong)((int)pbVar12 * iVar20 + 0x80) << 0x20) >> 0x28;
      }
      uVar3 = *(ushort *)(&UNK_10df0e058 + lVar21 * 2);
      *(long *)(puVar46 + 4) = lVar41;
      *(ulong *)(puVar46 + 8) = (ulong)uVar3;
      puVar38 = puVar10;
      FUN_108240524(puVar10,puVar46);
      *(long *)(puVar46 + 0xc) = (long)(int)puVar38;
      if (bVar6) {
        auVar57._0_9_ = (unkuint9)0;
        auVar57._9_7_ = 0;
        lVar41 = 0x48;
        do {
          puVar48 = (undefined8 *)((long)puVar46 + lVar41);
          uVar13 = puVar48[1];
          uVar56 = *puVar48;
          uVar64 = puVar48[3];
          uVar15 = puVar48[2];
          bVar51 = ~-((short)((ulong)uVar15 >> 0x10) == 0);
          bVar52 = ~-((short)((ulong)uVar64 >> 0x10) == 0);
          iVar37 = auVar57._4_4_;
          iVar59 = auVar57._8_4_;
          iVar62 = auVar57._12_4_;
          auVar57._0_4_ =
               auVar57._0_4_ + (uint)(~-((short)((ulong)uVar56 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar51,(ushort)(~-((short)uVar15 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar51 & 1);
          auVar57._4_4_ =
               iVar37 + (uint)(~-((short)((ulong)uVar56 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar56 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar15 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar15 >> 0x30) == 0) & 1);
          auVar57._8_4_ =
               iVar59 + (uint)(~-((short)uVar13 == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar13 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar52,(ushort)(~-((short)uVar64 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar52 & 1);
          auVar57._12_4_ =
               iVar62 + (uint)(~-((short)((ulong)uVar13 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar13 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar64 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar64 >> 0x30) == 0) & 1);
          lVar41 = lVar41 + 0x20;
        } while ((int)lVar41 != 0x248);
        lVar41 = *(long *)puVar46;
        lVar49 = *(long *)(puVar46 + 4);
        if (auVar57._0_4_ + auVar57._4_4_ + auVar57._8_4_ + auVar57._12_4_ < 1) {
          lVar41 = lVar41 << 1;
          lVar49 = lVar49 << 1;
          *(long *)puVar46 = lVar41;
          *(long *)(puVar46 + 4) = lVar49;
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
      }
      else {
        lVar41 = *(long *)puVar46;
        lVar49 = *(long *)(puVar46 + 4);
      }
      lVar41 = (*(long *)(puVar46 + 8) + (long)(int)puVar38) * (long)iVar60 +
               (lVar41 + lVar49) * 0x100;
      *(long *)(puVar46 + 0x10) = lVar41;
      if ((lVar21 == 0) || (puVar38 = puVar46, lVar41 < *(long *)(puVar9 + 0x10))) {
        auVar57 = NEON_ext(*(undefined1 (*) [16])(puVar10 + 8),*(undefined1 (*) [16])(puVar10 + 8),8
                           ,1);
        *(long *)(puVar10 + 0xc) = auVar57._8_8_;
        *(long *)(puVar10 + 8) = auVar57._0_8_;
        puVar38 = puVar9;
        puVar9 = puVar46;
      }
      lVar21 = lVar21 + 1;
      puVar46 = puVar38;
    } while (lVar21 != 4);
    if (puVar9 != puVar14) {
      _memcpy(puVar14,puVar9,0x370);
    }
    *(long *)(puVar14 + 0x10) =
         (*(long *)(puVar14 + 8) + *(long *)(puVar14 + 0xc)) * (long)*(int *)(lVar61 + 0x524) +
         (*(long *)(puVar14 + 4) + *(long *)puVar14) * 0x100;
    uVar30 = *(uint *)(puVar14 + 0x1a4);
    piVar23 = *(int **)(puVar10 + 0x20);
    iVar20 = 4;
    do {
      *piVar23 = (uVar30 & 0xff) * 0x1010101;
      piVar23 = (int *)((long)piVar23 + (long)*(int *)(*(long *)(puVar10 + 0x14) + 0x38));
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xfc | 1;
    if (((*(uint *)(puVar14 + 0x1b0) & 0x100ffff) == 0x1000000) &&
       ((long)*(int *)(lVar61 + 0x514) < *(long *)puVar14)) {
      uVar18 = (uint)(short)puVar14[0x15];
      uVar30 = -uVar18;
      if (-1 < (int)uVar18) {
        uVar30 = uVar18;
      }
      uVar26 = (uint)(short)puVar14[0x16];
      uVar18 = -uVar26;
      if (-1 < (int)uVar26) {
        uVar18 = uVar26;
      }
      uVar31 = (uint)(short)puVar14[0x18];
      uVar26 = -uVar31;
      if (-1 < (int)uVar31) {
        uVar26 = uVar31;
      }
      if (uVar18 <= uVar30) {
        uVar18 = uVar30;
      }
      if (uVar26 <= uVar18) {
        uVar26 = uVar18;
      }
      if (*(int *)(lVar61 + 0x510) < (int)uVar26) {
        *(uint *)(lVar61 + 0x510) = uVar26;
      }
    }
    lVar21 = *(long *)(puVar10 + 0x14);
    pbVar43 = *(byte **)(puVar10 + 0x18);
    lStack_e38 = *(long *)(puVar10 + 4);
    lVar61 = *(long *)(puVar10 + 0xc);
    if (1 < iVar42) {
      if (*(int *)(lVar21 + 0x5c48) != 0) {
        lVar41 = lVar21 + ((ulong)(*pbVar43 >> 5) & 3) * 0x2e8;
        iVar60 = *(int *)(lVar41 + 0x51c);
        iVar20 = *(int *)(lVar41 + 0x52c);
        uStack_a20 = 0;
        lStack_d78 = 0;
        lStack_d80 = 0;
        lStack_d68 = 0;
        uStack_d70 = 0xd3;
        lStack_d60 = (long)*(int *)(lVar41 + 0x524) * 0xd3;
        FUN_1082457cc(puVar10);
        iVar42 = 0;
        puVar46 = puVar14 + 0x1a6;
        do {
          uVar22 = (ulong)*(ushort *)(&UNK_10df0ffba + (long)*(int *)(puVar10 + 0x40) * 2);
          puVar9 = puVar10;
          FUN_10824c670(puVar10,puVar46);
          lVar44 = lVar61 + uVar22;
          lVar11 = *(long *)(puVar10 + 0x10);
          (*pcRam0000000113869fd0)(lVar11,*(long *)(puVar10 + 0x3c));
          lVar49 = 0;
          lStack_e70 = 0;
          lStack_e68 = 0;
          lStack_e60 = 0;
          uStack_e58 = 0;
          uStack_e4c = 0;
          uStack_e00 = 0x7fffffffffffff;
          iStack_de0 = -1;
          lVar11 = lVar11 + 0x688;
          do {
            puVar38 = puVar10;
            FUN_10824c6e4(puVar10,&uStack_da0,lStack_e38 + uVar22,lVar11,lVar49);
            uVar30 = *(uint *)(puVar10 + 0x40);
            lVar25 = lStack_e38 + uVar22;
            (*pcRam000000011386a028)(lVar25,lVar11);
            if (iVar20 == 0) {
              lVar36 = 0;
            }
            else {
              lVar36 = lStack_e38 + uVar22;
              (*pcRam000000011386a040)(lVar36,lVar11,&UNK_10df0ff46);
              lVar36 = (long)((ulong)((int)lVar36 * iVar20 + 0x80) << 0x20) >> 0x28;
            }
            uVar3 = puVar9[lVar49];
            if (lVar49 == 0) {
LAB_10824b308:
              lVar39 = 0;
            }
            else {
              uVar54 = CONCAT16(~-((short)((ulong)uStack_da0 >> 0x30) == 0),
                                (uint6)(CONCAT14(~-((short)((ulong)uStack_da0 >> 0x20) == 0),
                                                 (uint)(uint3)(((byte)~-((short)((ulong)uStack_da0
                                                                                >> 0x10) == 0) & 1)
                                                              << 0x10)) & 0x1ffffffff)) &
                       0x1ffffffffffff;
              uVar5 = CONCAT16(~-((short)((ulong)uStack_d90 >> 0x30) == 0),
                               (uint6)(CONCAT14(~-((short)((ulong)uStack_d90 >> 0x20) == 0),
                                                (uint)(CONCAT12(~-((short)((ulong)uStack_d90 >> 0x10
                                                                          ) == 0),
                                                                (ushort)(~-((short)uStack_d90 == 0)
                                                                        & 1)) & 0x1ffff)) &
                                      0x1ffffffff)) & 0x1ffffffffffff;
              if (3 < (ushort)((short)uVar5 + (short)(uVar5 >> 0x10) + (short)(uVar54 >> 0x10) +
                               (short)(uVar5 >> 0x20) + (ushort)(byte)(uVar5 >> 0x30) +
                               (short)(uVar54 >> 0x20) + (ushort)(byte)(uVar54 >> 0x30) +
                              (ushort)(~-((short)uStack_d88 == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_d88 >> 0x10) == 0) & 1) +
                              (ushort)(~-((short)uStack_d98 == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_d98 >> 0x10) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_d88 >> 0x20) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_d88 >> 0x30) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_d98 >> 0x20) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_d98 >> 0x30) == 0) & 1)))
              goto LAB_10824b308;
              lVar39 = 0x8c;
            }
            lVar29 = lVar36 + (int)lVar25;
            lVar32 = lVar11;
            if ((iStack_de0 < 0) ||
               ((long)(int)((int)lVar39 + (uint)uVar3) * (long)iVar60 + lVar29 * 0x100 <
                (long)uStack_e00)) {
              lStack_da8 = *(long *)(puVar10 + 0x14);
              lStack_db8 = lStack_da8 + 0x113c;
              lStack_db0 = lStack_da8 + 0x1ea4;
              lStack_da8 = lStack_da8 + 0x5a48;
              uStack_dc0 = 3;
              auStack_dd0[0] = 0;
              iVar59 = *(int *)(puVar10 + ((ulong)*(uint *)(puVar10 + 0x40) & 3) * 2 + 0x42);
              iVar37 = *(int *)(puVar10 + (long)((int)*(uint *)(puVar10 + 0x40) >> 2) * 2 + 0x54);
              (*pcRam0000000113869fa0)(&uStack_da0,auStack_dd0);
              iVar37 = iVar37 + iVar59;
              (*pcRam0000000113869f98)(iVar37,auStack_dd0);
              lVar29 = lVar29 * 0x100 + (lVar39 + iVar37 + (ulong)uVar3) * (long)iVar60;
              if ((iStack_de0 < 0) || (lVar29 < (long)uStack_e00)) {
                uStack_e4c = (int)puVar38 << (ulong)(uVar30 & 0x1f);
                lVar32 = (long)*(int *)(puVar10 + 0x40);
                auStack_d38[lVar32 * 4 + 1] = uStack_d98;
                auStack_d38[lVar32 * 4] = uStack_da0;
                auStack_d38[lVar32 * 4 + 3] = uStack_d88;
                auStack_d38[lVar32 * 4 + 2] = uStack_d90;
                iStack_de0 = (int)lVar49;
                lVar32 = lVar44;
                lVar44 = lVar11;
                lStack_e70 = (long)(int)lVar25;
                lStack_e68 = lVar36;
                lStack_e60 = lVar39 + iVar37;
                uStack_e58 = (ulong)uVar3;
                uStack_e00 = lVar29;
              }
            }
            lVar49 = lVar49 + 1;
            lVar11 = lVar32;
          } while (lVar49 != 10);
          lStack_d80 = lStack_d80 + lStack_e70;
          lStack_d78 = lStack_d78 + lStack_e68;
          lStack_d68 = lStack_d68 + lStack_e60;
          uStack_d70 = uStack_d70 + uStack_e58;
          uStack_a20 = uStack_a20 | uStack_e4c;
          lStack_d60 = (uStack_e58 + lStack_e60) * (long)*(int *)(lVar41 + 0x524) +
                       (lStack_e70 + lStack_e68) * 0x100 + lStack_d60;
          if ((*(long *)(puVar14 + 0x10) <= lStack_d60) ||
             (iVar42 = iVar42 + (int)uStack_e58, *(int *)(lVar21 + 0x5c48) < iVar42)) {
            lVar61 = *(long *)(puVar10 + 0xc);
            goto LAB_10824b970;
          }
          iVar37 = *(int *)(puVar10 + 0x40);
          if (lVar44 != lVar61 + (ulong)*(ushort *)(&UNK_10df0ffba + (long)iVar37 * 2)) {
            (*pcRam0000000113869fb8)(lVar44);
            iVar37 = *(int *)(puVar10 + 0x40);
          }
          *(char *)((long)puVar46 + (long)iVar37) = (char)iStack_de0;
          *(uint *)(puVar10 + (long)(iVar37 >> 2) * 2 + 0x54) = (uint)(uStack_e4c != 0);
          *(uint *)(puVar10 + ((ulong)*(uint *)(puVar10 + 0x40) & 3) * 2 + 0x42) =
               (uint)(uStack_e4c != 0);
          puVar9 = puVar10;
          func_0x000108245870(puVar10,lVar61);
        } while ((int)puVar9 != 0);
        *(long *)(puVar14 + 4) = lStack_d78;
        *(long *)puVar14 = lStack_d80;
        *(long *)(puVar14 + 0xc) = lStack_d68;
        *(ulong *)(puVar14 + 8) = uStack_d70;
        *(uint *)(puVar14 + 0x1b0) = uStack_a20;
        *(long *)(puVar14 + 0x10) = lStack_d60;
        puVar24 = *(undefined4 **)(puVar10 + 0x20);
        uVar30 = 5;
        do {
          *puVar24 = *(undefined4 *)puVar46;
          puVar24 = (undefined4 *)((long)puVar24 + (long)*(int *)(*(long *)(puVar10 + 0x14) + 0x38))
          ;
          uVar30 = uVar30 - 1;
          puVar46 = puVar46 + 2;
        } while (1 < uVar30);
        **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xfc;
        auVar57 = *(undefined1 (*) [16])(puVar10 + 8);
        lVar61 = auVar57._0_8_;
        auVar57 = NEON_ext(auVar57,auVar57,8,1);
        *(long *)(puVar10 + 0xc) = auVar57._8_8_;
        *(long *)(puVar10 + 8) = auVar57._0_8_;
        _memcpy(puVar14 + 0x24,auStack_d38,0x200);
      }
LAB_10824b970:
      lVar21 = *(long *)(puVar10 + 0x14);
      pbVar43 = *(byte **)(puVar10 + 0x18);
      lStack_e38 = *(long *)(puVar10 + 4);
    }
    lVar41 = 0;
    iVar42 = *(int *)(lVar21 + ((ulong)(*pbVar43 >> 5) & 3) * 0x2e8 + 0x520);
    puVar46 = (ushort *)(lVar61 + 0x10);
    uVar30 = 0;
    puVar9 = (ushort *)(*(long *)(puVar10 + 8) + 0x10);
    puVar14[0x1ae] = 0xffff;
    puVar14[0x1af] = 0xffff;
    lStack_dd8 = 0;
    iStack_de0 = 0;
    uStack_ddc = 0;
    lVar21 = 0x7fffffffffffff;
    lStack_df8 = 0;
    uStack_e00 = 0;
    puVar38 = puVar9;
    do {
      puVar40 = puVar10;
      FUN_10824c818(puVar10,&lStack_d80,puVar46,lVar41);
      uStack_a20 = (uint)puVar40;
      lVar61 = lStack_e38 + 0x10;
      (*pcRam000000011386a020)(lVar61,puVar46);
      lStack_d80 = (long)(int)lVar61;
      lStack_d78 = 0;
      uStack_d70 = (ulong)*(ushort *)(&UNK_10df0e050 + lVar41 * 2);
      puVar40 = puVar10;
      func_0x000108240678(puVar10,&lStack_d80);
      lStack_d68 = (long)(int)puVar40;
      lVar61 = lStack_d68;
      if (lVar41 != 0) {
        lVar49 = 0;
        auVar58._0_9_ = (unkuint9)0;
        auVar58._9_7_ = 0;
        do {
          uVar13 = *(undefined8 *)((long)alStack_b38 + lVar49 + 8);
          uVar56 = *(undefined8 *)((long)alStack_b38 + lVar49);
          uVar64 = *(undefined8 *)((long)alStack_b38 + lVar49 + 0x18);
          uVar15 = *(undefined8 *)((long)alStack_b38 + lVar49 + 0x10);
          bVar51 = ~-((short)((ulong)uVar15 >> 0x10) == 0);
          bVar52 = ~-((short)((ulong)uVar64 >> 0x10) == 0);
          iVar20 = auVar58._4_4_;
          iVar60 = auVar58._8_4_;
          iVar37 = auVar58._12_4_;
          auVar58._0_4_ =
               auVar58._0_4_ + (uint)(~-((short)((ulong)uVar56 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar51,(ushort)(~-((short)uVar15 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar51 & 1);
          auVar58._4_4_ =
               iVar20 + (uint)(~-((short)((ulong)uVar56 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar56 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar15 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar15 >> 0x30) == 0) & 1);
          auVar58._8_4_ =
               iVar60 + (uint)(~-((short)uVar13 == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar13 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar52,(ushort)(~-((short)uVar64 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar52 & 1);
          auVar58._12_4_ =
               iVar37 + (uint)(~-((short)((ulong)uVar13 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar13 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar64 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar64 >> 0x30) == 0) & 1);
          lVar49 = lVar49 + 0x20;
        } while ((int)lVar49 != 0x100);
        if (auVar58._0_4_ + auVar58._4_4_ + auVar58._8_4_ + auVar58._12_4_ < 3) {
          lVar61 = lStack_d68 + 0x460;
        }
      }
      lVar49 = (uStack_d70 + lVar61) * (long)iVar42 + (lStack_d78 + lStack_d80) * 0x100;
      if ((lVar41 == 0) || (puVar40 = puVar38, lVar49 < lVar21)) {
        lStack_dd8 = lStack_d78;
        iStack_de0 = (int)lStack_d80;
        uStack_ddc = (undefined4)((ulong)lStack_d80 >> 0x20);
        *(int *)(puVar14 + 0x1ae) = (int)lVar41;
        *(long *)(puVar14 + 0x188) = lStack_a70;
        *(long *)(puVar14 + 0x184) = lStack_a78;
        *(long *)(puVar14 + 400) = lStack_a60;
        *(long *)(puVar14 + 0x18c) = lStack_a68;
        *(long *)(puVar14 + 0x198) = lStack_a50;
        *(long *)(puVar14 + 0x194) = lStack_a58;
        *(long *)(puVar14 + 0x1a0) = lStack_a40;
        *(long *)(puVar14 + 0x19c) = lStack_a48;
        *(long *)(puVar14 + 0x168) = lStack_ab0;
        *(long *)(puVar14 + 0x164) = lStack_ab8;
        *(long *)(puVar14 + 0x170) = lStack_aa0;
        *(long *)(puVar14 + 0x16c) = lStack_aa8;
        *(long *)(puVar14 + 0x178) = lStack_a90;
        *(long *)(puVar14 + 0x174) = lStack_a98;
        *(long *)(puVar14 + 0x180) = lStack_a80;
        *(long *)(puVar14 + 0x17c) = lStack_a88;
        *(long *)(puVar14 + 0x148) = lStack_af0;
        *(long *)(puVar14 + 0x144) = lStack_af8;
        *(long *)(puVar14 + 0x150) = lStack_ae0;
        *(long *)(puVar14 + 0x14c) = lStack_ae8;
        *(long *)(puVar14 + 0x158) = lStack_ad0;
        *(long *)(puVar14 + 0x154) = lStack_ad8;
        *(long *)(puVar14 + 0x160) = lStack_ac0;
        *(long *)(puVar14 + 0x15c) = lStack_ac8;
        *(long *)(puVar14 + 0x128) = alStack_b38[1];
        *(long *)(puVar14 + 0x124) = alStack_b38[0];
        *(long *)(puVar14 + 0x130) = alStack_b38[3];
        *(long *)(puVar14 + 300) = alStack_b38[2];
        *(long *)(puVar14 + 0x138) = alStack_b38[5];
        *(long *)(puVar14 + 0x134) = alStack_b38[4];
        *(long *)(puVar14 + 0x140) = lStack_b00;
        *(long *)(puVar14 + 0x13c) = alStack_b38[6];
        uStack_e00 = uStack_d70;
        puVar40 = puVar46;
        lVar21 = lVar49;
        puVar46 = puVar38;
        lStack_df8 = lVar61;
        uVar30 = uStack_a20;
        if (*(long *)(puVar10 + 0xb0) != 0) {
          *(undefined4 *)(puVar14 + 0x1b2) = uStack_a1c;
          puVar14[0x1b4] = uStack_a18;
        }
      }
      lVar41 = lVar41 + 1;
      puVar38 = puVar40;
    } while (lVar41 != 4);
    **(byte **)(puVar10 + 0x18) =
         **(byte **)(puVar10 + 0x18) & 0xf3 | ((byte)puVar14[0x1ae] & 3) << 2;
    *(long *)(puVar14 + 4) = *(long *)(puVar14 + 4) + lStack_dd8;
    *(long *)puVar14 = *(long *)puVar14 + CONCAT44(uStack_ddc,iStack_de0);
    *(long *)(puVar14 + 0xc) = *(long *)(puVar14 + 0xc) + lStack_df8;
    *(ulong *)(puVar14 + 8) = *(long *)(puVar14 + 8) + uStack_e00;
    *(uint *)(puVar14 + 0x1b0) = *(uint *)(puVar14 + 0x1b0) | uVar30;
    *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + lVar21;
    if (puVar40 != puVar9) {
      (*pcRam0000000113869fb0)();
    }
    lVar21 = *(long *)(puVar10 + 0xb0);
    if (lVar21 != 0) {
      lVar61 = 0;
      iVar42 = *(int *)puVar10;
      bVar6 = true;
      do {
        bVar33 = bVar6;
        puVar16 = (undefined1 *)(lVar21 + (long)iVar42 * 4 + lVar61 * 2);
        puVar7 = (undefined1 *)((long)(puVar14 + 0x1b2) + lVar61 * 3);
        *(undefined1 *)(puVar10 + lVar61 + 0xac) = *puVar7;
        cVar4 = puVar7[2];
        uVar30 = (int)cVar4 + cVar4 * 2;
        *(char *)((long)(puVar10 + lVar61 + 0xac) + 1) = (char)(uVar30 >> 2);
        *puVar16 = puVar7[1];
        puVar16[1] = cVar4 - (char)((uVar30 & 0xfffc) >> 2);
        lVar61 = 1;
        bVar6 = false;
      } while (bVar33);
    }
    if (uVar19 == 2) {
      puVar10[0xa4] = 1;
      puVar10[0xa5] = 0;
      if ((**(byte **)(puVar10 + 0x18) & 3) == 1) {
        puVar46 = puVar10;
        FUN_10824bf80(puVar10,puVar14,*(long *)(puVar10 + 8),**(undefined1 **)(puVar10 + 0x20));
        uVar19 = (uint)puVar46;
      }
      else {
        lVar21 = *(long *)(puVar10 + 0x14);
        FUN_1082457cc(puVar10);
        uVar19 = 0;
        do {
          uVar30 = *(uint *)(puVar10 + 0x40);
          uVar2 = *(undefined1 *)
                   (*(long *)(puVar10 + 0x20) +
                   (long)(int)((uVar30 & 3) + ((int)uVar30 >> 2) * *(int *)(lVar21 + 0x38)));
          uVar3 = *(ushort *)(&UNK_10df0ffba + (long)(int)uVar30 * 2);
          lVar61 = *(long *)(puVar10 + 4);
          lVar41 = *(long *)(puVar10 + 8);
          (*pcRam0000000113869fd0)(*(long *)(puVar10 + 0x10),*(long *)(puVar10 + 0x3c));
          puVar46 = puVar10;
          FUN_10824c6e4(puVar10,puVar14 + (long)*(int *)(puVar10 + 0x40) * 0x10 + 0x24,
                        lVar61 + (ulong)uVar3,lVar41 + (ulong)uVar3,uVar2);
          uVar19 = (int)puVar46 << (ulong)(*(uint *)(puVar10 + 0x40) & 0x1f) | uVar19;
          puVar46 = puVar10;
          func_0x000108245870(puVar10,*(long *)(puVar10 + 8));
        } while ((int)puVar46 != 0);
      }
      puVar46 = puVar10;
      puVar9 = puVar14;
      FUN_10824c818(puVar10,puVar14,*(long *)(puVar10 + 8) + 0x10,
                    **(byte **)(puVar10 + 0x18) >> 2 & 3);
      uVar19 = (uint)puVar46 | uVar19;
      *(uint *)(puVar14 + 0x1b0) = uVar19;
    }
    else {
      uVar19 = *(uint *)(puVar14 + 0x1b0);
    }
    goto LAB_10824be38;
  }
  bVar51 = **(byte **)(puVar10 + 0x18);
  if (iVar42 < 2) {
    uVar56 = *(undefined8 *)(*(long *)(puVar10 + 0x14) + ((ulong)(bVar51 >> 5) & 3) * 0x2e8 + 0x540)
    ;
    iStack_de0 = (int)uVar56;
    uStack_ddc = (undefined4)((ulong)uVar56 >> 0x20);
    lVar21 = 0x7fffffffffffff;
    lVar61 = 0x7fffffffffffff;
    if ((bVar51 & 3) == 1) goto LAB_10824b630;
LAB_10824b720:
    lVar41 = CONCAT44(uStack_ddc,iStack_de0);
    FUN_1082457cc(puVar10);
    uStack_e00 = 0;
    uVar19 = 0;
    puVar46 = puVar14 + 0x1a6;
    do {
      lVar11 = *(long *)(puVar10 + 4);
      uVar3 = *(ushort *)(&UNK_10df0ffba + (long)*(int *)(puVar10 + 0x40) * 2);
      puVar9 = puVar10;
      FUN_10824c670(puVar10,puVar46);
      (*pcRam0000000113869fd0)(*(long *)(puVar10 + 0x10),*(long *)(puVar10 + 0x3c));
      lVar49 = 0;
      lVar44 = 0x7fffffffffffff;
      iVar20 = -1;
      do {
        uVar22 = lVar11 + (ulong)uVar3;
        (*pcRam000000011386a028)
                  (uVar22,*(long *)(puVar10 + 0x10) +
                          (ulong)*(ushort *)(&UNK_10df0ff96 + lVar49 * 2));
        lVar25 = (-(uVar22 >> 0x1f & 1) & 0xffffff0000000000 | (uVar22 & 0xffffffff) << 8) +
                 (ulong)puVar9[lVar49] * 0xb;
        iVar60 = (int)lVar49;
        if (lVar44 <= lVar25) {
          iVar60 = iVar20;
        }
        if (lVar25 <= lVar44) {
          lVar44 = lVar25;
        }
        lVar49 = lVar49 + 1;
        iVar20 = iVar60;
      } while (lVar49 != 10);
      uStack_e00 = uStack_e00 + puVar9[iVar60];
      lVar49 = (long)*(int *)(puVar10 + 0x40);
      *(char *)((long)puVar46 + lVar49) = (char)iVar60;
      lVar41 = lVar44 + lVar41;
      if (lVar61 <= lVar41 || lVar21 < (long)uStack_e00) goto LAB_10824bd50;
      puVar9 = puVar10;
      FUN_10824c6e4(puVar10,puVar14 + lVar49 * 0x10 + 0x24,lVar11 + (ulong)uVar3,
                    *(long *)(puVar10 + 0xc) + (ulong)*(ushort *)(&UNK_10df0ffba + lVar49 * 2),
                    iVar60);
      uVar19 = (int)puVar9 << (ulong)(*(uint *)(puVar10 + 0x40) & 0x1f) | uVar19;
      puVar9 = puVar10;
      func_0x000108245870(puVar10,*(long *)(puVar10 + 0xc));
    } while ((int)puVar9 != 0);
    puVar24 = *(undefined4 **)(puVar10 + 0x20);
    uVar30 = 5;
    do {
      *puVar24 = *(undefined4 *)puVar46;
      puVar24 = (undefined4 *)((long)puVar24 + (long)*(int *)(*(long *)(puVar10 + 0x14) + 0x38));
      uVar30 = uVar30 - 1;
      puVar46 = puVar46 + 2;
    } while (1 < uVar30);
    **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xfc;
    auVar57 = NEON_ext(*(undefined1 (*) [16])(puVar10 + 8),*(undefined1 (*) [16])(puVar10 + 8),8,1);
    *(long *)(puVar10 + 0xc) = auVar57._8_8_;
    *(long *)(puVar10 + 8) = auVar57._0_8_;
  }
  else {
    uVar56 = *(undefined8 *)(*(long *)(puVar10 + 0x14) + ((ulong)(bVar51 >> 5) & 3) * 0x2e8 + 0x540)
    ;
    iStack_de0 = (int)uVar56;
    uStack_ddc = (undefined4)((ulong)uVar56 >> 0x20);
    lVar21 = (long)*(int *)(*(long *)(puVar10 + 0x14) + 0x5c4c);
LAB_10824b630:
    lVar41 = 0;
    pbVar43 = *(byte **)(puVar10 + 4);
    lVar49 = *(long *)(puVar10 + 0x10);
    uVar19 = 0xffffffff;
    lVar61 = 0x7fffffffffffff;
    do {
      pbVar12 = pbVar43;
      (*pcRam000000011386a018)(pbVar43,lVar49 + (ulong)*(ushort *)(&UNK_10df0fca0 + lVar41 * 2));
      lVar44 = (-((ulong)pbVar12 >> 0x1f & 1) & 0xffffff0000000000 |
               ((ulong)pbVar12 & 0xffffffff) << 8) +
               (ulong)*(ushort *)(&UNK_10df0e058 + lVar41 * 2) * 0x6a;
      uVar30 = (uint)lVar41;
      if (lVar61 <= lVar44) {
        lVar44 = lVar61;
        uVar30 = uVar19;
      }
      if (lVar41 == 0 || (long)(ulong)*(ushort *)(&UNK_10df0e058 + lVar41 * 2) <= lVar21) {
        lVar61 = lVar44;
        uVar19 = uVar30;
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 != 4);
    if ((*(int *)puVar10 == 0) || (*(int *)(puVar10 + 2) == 0)) {
      iVar20 = (uint)*pbVar43 * 0x1010101;
      lStack_d80 = CONCAT44(lStack_d80._4_4_,iVar20);
      iVar60 = 0x10;
      do {
        if ((((*(int *)pbVar43 != iVar20) || (*(int *)(pbVar43 + 4) != iVar20)) ||
            (*(int *)(pbVar43 + 8) != iVar20)) || (*(int *)(pbVar43 + 0xc) != iVar20))
        goto LAB_10824b6d0;
        pbVar43 = pbVar43 + 0x20;
        iVar60 = iVar60 + -1;
      } while (iVar60 != 0);
      piVar23 = *(int **)(puVar10 + 0x20);
      iVar20 = 0;
      if (*(int *)puVar10 != 0) {
        iVar20 = 2;
      }
      iVar60 = 4;
      do {
        *piVar23 = iVar20 * 0x1010101;
        piVar23 = (int *)((long)piVar23 + (long)*(int *)(*(long *)(puVar10 + 0x14) + 0x38));
        iVar60 = iVar60 + -1;
      } while (iVar60 != 0);
      **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xfc | 1;
    }
    else {
LAB_10824b6d0:
      piVar23 = *(int **)(puVar10 + 0x20);
      iVar20 = 4;
      do {
        *piVar23 = (uVar19 & 0xff) * 0x1010101;
        piVar23 = (int *)((long)piVar23 + (long)*(int *)(*(long *)(puVar10 + 0x14) + 0x38));
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xfc | 1;
      if (1 < iVar42) goto LAB_10824b720;
    }
LAB_10824bd50:
    lVar41 = lVar61;
    puVar46 = puVar10;
    FUN_10824bf80(puVar10,puVar14,*(long *)(puVar10 + 8),**(undefined1 **)(puVar10 + 0x20));
    uVar19 = (uint)puVar46;
  }
  if (0 < iVar42) {
    lVar21 = 0;
    lVar49 = *(long *)(puVar10 + 4);
    lVar61 = 0x7fffffffffffff;
    uVar30 = 0xffffffff;
    do {
      uVar22 = lVar49 + 0x10;
      (*pcRam000000011386a020)
                (uVar22,*(long *)(puVar10 + 0x10) + (ulong)*(ushort *)(&UNK_10df0fca8 + lVar21 * 2))
      ;
      lVar44 = (-(uVar22 >> 0x1f & 1) & 0xffffff0000000000 | (uVar22 & 0xffffffff) << 8) +
               (ulong)*(ushort *)(&UNK_10df0e050 + lVar21 * 2) * 0x78;
      uVar18 = (uint)lVar21;
      if (lVar61 <= lVar44) {
        uVar18 = uVar30;
      }
      if (lVar44 <= lVar61) {
        lVar61 = lVar44;
      }
      lVar21 = lVar21 + 1;
      uVar30 = uVar18;
    } while (lVar21 != 4);
    **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xf3 | (byte)((uVar18 & 3) << 2);
  }
  puVar46 = puVar10;
  puVar9 = puVar14;
  FUN_10824c818(puVar10,puVar14,*(long *)(puVar10 + 8) + 0x10,**(byte **)(puVar10 + 0x18) >> 2 & 3);
  uVar19 = (uint)puVar46 | uVar19;
  *(uint *)(puVar14 + 0x1b0) = uVar19;
  *(long *)(puVar14 + 0x10) = lVar41;
LAB_10824be38:
  puVar46 = (ushort *)(ulong)(uVar19 == 0);
  bVar51 = 0x10;
  if (uVar19 != 0) {
    bVar51 = 0;
  }
  **(byte **)(puVar10 + 0x18) = **(byte **)(puVar10 + 0x18) & 0xef | bVar51;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a10) {
    return puVar46;
  }
  ___stack_chk_fail();
  lVar21 = 0;
  bVar6 = true;
  do {
    bVar33 = bVar6;
    bVar51 = (&UNK_10df0ff30)[lVar21 + ((ulong)puVar9 & 0xffffffff) * 2];
    uVar19 = 0;
    if (puVar46[lVar21] != 0) {
      uVar19 = 0x20000 / puVar46[lVar21];
    }
    puVar46[lVar21 + 0x10] = (ushort)uVar19;
    *(uint *)(puVar46 + lVar21 * 2 + 0x20) = (uint)bVar51 << 9;
    uVar30 = 0;
    if ((uVar19 & 0xffff) != 0) {
      uVar30 = ((uint)bVar51 << 9 ^ 0x1ffff) / (uVar19 & 0xffff);
    }
    *(uint *)(puVar46 + lVar21 * 2 + 0x40) = uVar30;
    lVar21 = 1;
    bVar6 = false;
  } while (bVar33);
  uVar3 = puVar46[1];
  uVar1 = *(undefined4 *)(puVar46 + 0x22);
  lVar21 = 0xe;
  puVar14 = puVar46 + 0x12;
  puVar38 = puVar46 + 0x44;
  do {
    puVar14[-0x10] = uVar3;
    *puVar14 = puVar46[0x11];
    *(undefined4 *)(puVar38 + -0x20) = uVar1;
    *(undefined4 *)puVar38 = *(undefined4 *)(puVar46 + 0x42);
    lVar21 = lVar21 + -1;
    puVar14 = puVar14 + 1;
    puVar38 = puVar38 + 2;
  } while (lVar21 != 0);
  lVar21 = 0;
  iVar42 = 0;
  do {
    if ((int)puVar9 == 0) {
      uVar3 = *puVar46;
      uVar35 = (ushort)((uint)uVar3 * (uint)(byte)(&UNK_10df0ff36)[lVar21] >> 0xb);
    }
    else {
      uVar35 = 0;
      uVar3 = *puVar46;
    }
    puVar46[0x60] = uVar35;
    iVar42 = (uint)uVar3 + iVar42;
    lVar21 = lVar21 + 1;
    puVar46 = puVar46 + 1;
  } while (lVar21 != 0x10);
  return (ushort *)(ulong)(iVar42 + 8U >> 4);
}



/* Entry: 10824a6c8; end: 10824ad6f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d1 : 0x00010824a7b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ushort * FUN_10824a6c8(float param_1,ushort *param_2,ushort *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  char cVar7;
  uint7 uVar8;
  undefined8 uVar9;
  bool bVar10;
  ushort *puVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 *puVar20;
  long lVar21;
  uint uVar22;
  ushort *puVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  long lVar28;
  bool bVar29;
  ushort *puVar30;
  ushort uVar31;
  long lVar32;
  int iVar33;
  ushort *puVar34;
  long lVar35;
  ushort *puVar36;
  long lVar37;
  int iVar38;
  ushort *puVar39;
  byte *pbVar40;
  long lVar41;
  undefined *puVar42;
  uint *puVar43;
  ushort *puVar44;
  ushort *puVar45;
  ushort *puVar46;
  undefined8 *unaff_x27;
  long lVar47;
  undefined *unaff_x28;
  byte bVar48;
  byte bVar49;
  uint7 uVar50;
  double dVar51;
  undefined8 extraout_d0;
  undefined8 uVar52;
  int iVar55;
  long lVar57;
  int iVar58;
  undefined1 auVar53 [16];
  int iVar56;
  undefined1 auVar54 [16];
  undefined1 in_b1;
  undefined1 in_register_00005021;
  undefined1 in_register_00005022;
  undefined1 in_register_00005023;
  undefined1 in_register_00005024;
  undefined1 in_register_00005025;
  undefined1 in_register_00005026;
  undefined1 in_register_00005027;
  double dVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  ulong uStack_568;
  uint uStack_55c;
  long lStack_548;
  ulong uStack_510;
  long lStack_508;
  int iStack_4f0;
  undefined4 uStack_4ec;
  long lStack_4e8;
  undefined4 auStack_4e0 [4];
  undefined4 uStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
  ulong uStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 auStack_448 [64];
  long alStack_248 [7];
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  uint uStack_130;
  undefined4 uStack_12c;
  ushort uStack_128;
  long lStack_120;
  undefined *puStack_110;
  undefined8 *puStack_108;
  ushort *puStack_100;
  ushort *puStack_f8;
  ushort *puStack_f0;
  undefined *puStack_e8;
  ushort *puStack_e0;
  ushort *puStack_d8;
  ushort *puStack_d0;
  ushort *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(uint *)(param_2 + 0x10);
  puVar34 = (ushort *)(ulong)uVar15;
  puVar36 = (ushort *)(long)(int)uVar15;
  puVar45 = *(ushort **)param_2;
  uVar25 = *(uint *)(puVar45 + 0xe);
  puVar39 = (ushort *)(ulong)uVar25;
  dVar51 = (double)param_1 / 100.0;
  if (*(int *)(puVar45 + 0x28) == 0) {
    dVar59 = dVar51 * 2.0 + -1.0;
    bVar10 = 0.75 <= dVar51;
    dVar51 = dVar51 * 0.6666666666666666;
    if (bVar10) {
      dVar51 = dVar59;
    }
  }
  else {
    dVar59 = 0.9;
    if (0.3 <= (double)*(int *)(param_2 + 0x702) / 255.0) {
      dVar59 = ((double)*(int *)(param_2 + 0x702) / 255.0 + -0.3) * -0.9090909090909091 + 0.9;
    }
  }
  puVar11 = param_2;
  _pow(dVar51,CONCAT17(in_register_00005027,
                       CONCAT16(in_register_00005026,
                                CONCAT15(in_register_00005025,
                                         CONCAT14(in_register_00005024,
                                                  CONCAT13(in_register_00005023,
                                                           CONCAT12(in_register_00005022,
                                                                    CONCAT11(in_register_00005021,
                                                                             in_b1))))))),dVar59);
  puVar46 = param_2 + 0x706;
  if ((int)uVar15 < 1) {
    iVar38 = *(int *)(param_2 + 0x284);
    *(int *)(param_2 + 0x700) = iVar38;
LAB_10824a858:
    puVar44 = param_2 + (long)(int)uVar15 * 0x174 + 0x284;
    puVar27 = puVar36;
    do {
      puVar27 = (ushort *)((long)puVar27 + 1);
      *(int *)puVar44 = iVar38;
      puVar44 = puVar44 + 0x174;
    } while ((int)puVar27 != 4);
  }
  else {
    puVar43 = (uint *)(param_2 + 0x284);
    unaff_x27 = (undefined8 *)0x7f;
    puVar44 = puVar34;
    do {
      dVar51 = (double)_pow(extraout_d0);
      uVar14 = (uint)((1.0 - dVar51) * 127.0);
      uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar14) {
        uVar14 = 0x7f;
      }
      *puVar43 = uVar14;
      puVar43 = puVar43 + 0xba;
      puVar44 = (ushort *)((long)puVar44 + -1);
    } while (puVar44 != (ushort *)0x0);
    iVar38 = *(int *)(param_2 + 0x284);
    *(int *)(param_2 + 0x700) = iVar38;
    unaff_x28 = (undefined *)0x0;
    if (uVar15 < 4) goto LAB_10824a858;
  }
  lVar17 = 0;
  puVar44 = param_2 + 0x130;
  iVar38 = ((*(int *)(param_2 + 0x704) * 10 + -0x280) / 0x46) * uVar25;
  puVar46[0] = 0;
  puVar46[1] = 0;
  puVar46[2] = 0;
  puVar46[3] = 0;
  param_2[0x70a] = 0;
  param_2[0x70b] = 0;
  lVar57 = (long)iVar38 * 0x51eb851f;
  iVar16 = (int)((ulong)((long)(int)uVar25 * -0x51eb851f) >> 0x20);
  uVar52 = NEON_sshl(CONCAT17((char)(iVar38 / 0x3200000) + (char)(iVar38 >> 0x1f),
                              CONCAT16((char)((ulong)lVar57 >> 0x30),
                                       CONCAT15((char)((ulong)lVar57 >> 0x28),
                                                CONCAT14((char)((ulong)lVar57 >> 0x20),iVar16)))),
                     0xfffffffbfffffffd,4);
  uVar52 = NEON_smax(CONCAT44((int)((ulong)uVar52 >> 0x20) - (iVar38 >> 0x1f),
                              (int)uVar52 - (iVar16 >> 0x1f)),0xfffffffcfffffff1,4);
  lVar57 = NEON_smin(uVar52,0x60000000f,4);
  *(long *)(param_2 + 0x70c) = lVar57;
  iVar38 = *(int *)(puVar45 + 0x10);
  iVar16 = *(int *)(param_2 + 0xc);
  do {
    uVar25 = *(uint *)((long)param_2 + lVar17 + 0x508);
    uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar25) {
      uVar25 = 0x7f;
    }
    uVar14 = (uint)(*(ushort *)(&UNK_10df0fcb0 + (ulong)uVar25 * 2) >> 2);
    if (0x3e < *(ushort *)(&UNK_10df0fcb0 + (ulong)uVar25 * 2) >> 2) {
      uVar14 = 0x3f;
    }
    iVar56 = *(int *)((long)param_2 + lVar17 + 0x504) + 0x100;
    iVar33 = 0;
    if (iVar56 != 0) {
      iVar33 = (int)(iVar38 * 5 * (uint)(byte)(&UNK_10df0e948)[(ulong)uVar14 + (long)iVar16 * 0x40])
               / iVar56;
    }
    iVar56 = iVar33;
    if (0x3e < iVar33) {
      iVar56 = 0x3f;
    }
    iVar55 = 0;
    if (1 < iVar33) {
      iVar55 = iVar56;
    }
    *(int *)((long)param_2 + lVar17 + 0x50c) = iVar55;
    lVar17 = lVar17 + 0x2e8;
  } while (lVar17 != 0xba0);
  iVar38 = *(int *)(puVar45 + 0x12);
  *(uint *)(param_2 + 8) = (uint)(*(int *)(puVar45 + 0x14) == 0);
  *(int *)(param_2 + 10) = *(int *)(param_2 + 0x286);
  *(int *)(param_2 + 0xc) = iVar38;
  if (1 < (int)uVar15) {
    uStack_98 = 0x300000002;
    uStack_a0 = 0x100000000;
    if (3 < uVar15) {
      uVar15 = 4;
    }
    puVar36 = (ushort *)(ulong)uVar15;
    puVar34 = param_2 + 0x286;
    puVar45 = (ushort *)0x1;
    puVar46 = (ushort *)0x2e8;
    unaff_x27 = &uStack_a0;
    puVar39 = (ushort *)0x1;
    do {
      iVar38 = (int)puVar39;
      param_3 = puVar44 + (long)puVar45 * 0x174;
      if (iVar38 < 1) {
        puVar27 = (ushort *)0x0;
      }
      else {
        puVar23 = (ushort *)0x0;
        puVar30 = puVar34;
        do {
          if ((*(int *)(param_3 + 0x154) == *(int *)(puVar30 + -2)) &&
             (*(int *)(param_3 + 0x156) == *(int *)puVar30)) {
            *(int *)((long)unaff_x27 + (long)puVar45 * 4) = (int)puVar23;
            goto LAB_10824aa58;
          }
          puVar23 = (ushort *)((long)puVar23 + 1);
          puVar30 = puVar30 + 0x174;
          puVar27 = puVar39;
        } while (puVar39 != puVar23);
      }
      *(int *)((long)unaff_x27 + (long)puVar45 * 4) = (int)puVar27;
      if (puVar39 != puVar45) {
        puVar11 = puVar44 + (long)iVar38 * 0x174;
        param_4 = 0x2e8;
        _memcpy();
      }
      puVar39 = (ushort *)(ulong)(iVar38 + 1);
LAB_10824aa58:
      puVar45 = (ushort *)((long)puVar45 + 1);
    } while (puVar45 != puVar36);
    iVar38 = (int)puVar39;
    unaff_x28 = &UNK_10df0fcb0;
    if (iVar38 < (int)uVar15) {
      uVar15 = *(int *)(param_2 + 0x1a) * *(int *)(param_2 + 0x18);
      if (0 < (int)uVar15) {
        uVar18 = (ulong)uVar15 + 1;
        lVar17 = (ulong)uVar15 * 4;
        do {
          lVar17 = lVar17 + -4;
          bVar48 = *(byte *)(*(long *)(param_2 + 0x2e30) + lVar17);
          *(byte *)(*(long *)(param_2 + 0x2e30) + lVar17) =
               (byte)((*(uint *)((ulong)&uStack_a0 | (ulong)(bVar48 >> 3) & 0xc) & 3) << 5) |
               bVar48 & 0x9f;
          uVar18 = uVar18 - 1;
        } while (1 < uVar18);
      }
      *(int *)(param_2 + 0x10) = iVar38;
      puVar34 = puVar44 + (long)iVar38 * 0x174 + -0x174;
      lVar17 = (long)puVar36 - (long)iVar38;
      puVar36 = param_2 + (long)iVar38 * 0x174 + 0x130;
      do {
        param_4 = 0x2e8;
        puVar11 = puVar36;
        param_3 = puVar34;
        _memcpy();
        puVar36 = puVar36 + 0x174;
        lVar17 = lVar17 + -1;
        puVar44 = (ushort *)0x0;
      } while (lVar17 != 0);
    }
  }
  uVar15 = (uint)param_4;
  if (*(int *)(param_2 + 0x2e20) < 4) {
    iStack_a4 = 0;
  }
  else {
    iStack_a4 = *(int *)(*(long *)param_2 + 0x1c);
  }
  puVar42 = (undefined *)0x5c40;
  if (0 < (int)*(uint *)(param_2 + 0x10)) {
    puVar44 = (ushort *)0x0;
    puVar45 = (ushort *)((ulong)*(uint *)(param_2 + 0x10) * 0x2e8);
    puVar46 = (ushort *)&UNK_10df0fdb0;
    unaff_x27 = (undefined8 *)0x7f;
    unaff_x28 = (undefined *)0x1;
    do {
      puVar39 = (ushort *)((long)param_2 + (long)puVar44);
      uVar25 = *(uint *)(puVar39 + 0x284);
      uVar15 = *(int *)(param_2 + 0x706) + uVar25 &
               ((int)(*(int *)(param_2 + 0x706) + uVar25) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar15) {
        uVar15 = 0x7f;
      }
      puVar39[0x130] = (ushort)(byte)(&UNK_10df0fdb0)[uVar15];
      uVar15 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar15) {
        uVar15 = 0x7f;
      }
      puVar39[0x131] = *(ushort *)(&UNK_10df0fcb0 + (ulong)uVar15 * 2);
      uVar15 = *(int *)(param_2 + 0x708) + uVar25 &
               ((int)(*(int *)(param_2 + 0x708) + uVar25) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar15) {
        uVar15 = 0x7f;
      }
      puVar39[0x1a0] = (ushort)(byte)(&UNK_10df0fdb0)[uVar15] << 1;
      uVar15 = *(int *)(param_2 + 0x70a) + uVar25 &
               ((int)(*(int *)(param_2 + 0x70a) + uVar25) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar15) {
        uVar15 = 0x7f;
      }
      puVar39[0x1a1] = *(ushort *)(&UNK_10df0fe30 + (ulong)uVar15 * 2);
      uVar15 = *(int *)(param_2 + 0x70c) + uVar25 &
               ((int)(*(int *)(param_2 + 0x70c) + uVar25) >> 0x1f ^ 0xffffffffU);
      if (0x74 < (int)uVar15) {
        uVar15 = 0x75;
      }
      puVar39[0x210] = (ushort)(byte)(&UNK_10df0fdb0)[uVar15];
      uVar15 = *(int *)(param_2 + 0x70e) + uVar25 &
               ((int)(*(int *)(param_2 + 0x70e) + uVar25) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar15) {
        uVar15 = 0x7f;
      }
      puVar39[0x211] = *(ushort *)(&UNK_10df0fcb0 + (ulong)uVar15 * 2);
      puVar34 = puVar39 + 0x130;
      FUN_10824be98(puVar34,0);
      puVar36 = puVar39 + 0x1a0;
      FUN_10824be98(puVar36,1);
      puVar11 = puVar39 + 0x210;
      param_3 = (ushort *)0x2;
      FUN_10824be98();
      uVar15 = (uint)param_4;
      iVar33 = (int)puVar34;
      uVar25 = iVar33 * iVar33;
      iVar38 = (int)(uVar25 * 3) >> 7;
      *(int *)(puVar39 + 0x28e) = iVar38;
      uVar14 = (int)puVar36 * (int)puVar36;
      *(uint *)(puVar39 + 0x28c) = uVar14 * 3;
      iVar55 = (int)puVar11 * (int)puVar11;
      iVar16 = iVar55 * 3 >> 6;
      *(int *)(puVar39 + 0x290) = iVar16;
      *(uint *)(puVar39 + 0x292) = uVar25 >> 7;
      iVar56 = (int)(uVar25 * 7) >> 3;
      *(int *)(puVar39 + 0x29a) = iVar56;
      *(uint *)(puVar39 + 0x298) = uVar14 >> 2;
      iVar55 = iVar55 * 2;
      *(int *)(puVar39 + 0x29c) = iVar55;
      iVar33 = iVar33 * iStack_a4 >> 5;
      *(int *)(puVar39 + 0x296) = iVar33;
      if (iVar38 < 1) {
        puVar39[0x28e] = 1;
        puVar39[0x28f] = 0;
      }
      if ((int)(uVar14 * 3) < 1) {
        puVar39[0x28c] = 1;
        puVar39[0x28d] = 0;
      }
      if (iVar16 < 1) {
        puVar39[0x290] = 1;
        puVar39[0x291] = 0;
      }
      if (uVar25 < 0x80) {
        puVar39[0x292] = 1;
        puVar39[0x293] = 0;
      }
      if (iVar56 < 1) {
        puVar39[0x29a] = 1;
        puVar39[0x29b] = 0;
      }
      if (uVar14 < 4) {
        puVar39[0x298] = 1;
        puVar39[0x299] = 0;
      }
      if (iVar55 < 1) {
        puVar39[0x29c] = 1;
        puVar39[0x29d] = 0;
      }
      if (iVar33 < 1) {
        puVar39[0x296] = 1;
        puVar39[0x297] = 0;
      }
      lVar17 = (long)param_2 + (long)puVar44;
      *(uint *)(lVar17 + 0x514) = ((uint)puVar39[0x130] + (uint)puVar39[0x130] * 4) * 4;
      *(undefined4 *)(lVar17 + 0x510) = 0;
      *(long *)(lVar17 + 0x540) = (long)(int)(uVar25 * 1000);
      puVar44 = puVar44 + 0x174;
      puVar42 = &UNK_10df0fcb0;
    } while ((long)puVar45 - (long)puVar44 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10824ad70;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar38 = *(int *)(*(long *)(puVar11 + 0x14) + 0x5c40);
  param_3[0x1b0] = 0;
  param_3[0x1b1] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0x10] = 0xffff;
  param_3[0x11] = 0xffff;
  param_3[0x12] = 0xffff;
  param_3[0x13] = 0x7f;
  if (*(int *)puVar11 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(puVar11 + 0xb4);
  }
  if (*(int *)(puVar11 + 2) == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = *(long *)(puVar11 + 0xc0);
  }
  puStack_110 = unaff_x28;
  puStack_108 = unaff_x27;
  puStack_100 = puVar46;
  puStack_f8 = puVar45;
  puStack_f0 = puVar44;
  puStack_e8 = puVar42;
  puStack_e0 = puVar39;
  puStack_d8 = puVar36;
  puStack_d0 = puVar34;
  puStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  (*pcRam0000000113869fc8)(*(long *)(puVar11 + 0x10),lVar17,lVar57);
  if (*(int *)puVar11 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(puVar11 + 0xb8);
  }
  if (*(int *)(puVar11 + 2) == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = *(long *)(puVar11 + 0xc4);
  }
  (*pcRam0000000113869fc0)(*(long *)(puVar11 + 0x10),lVar17,lVar57);
  if (uVar15 != 0) {
    lVar17 = 0;
    *(uint *)(puVar11 + 0xa4) = (uint)(2 < uVar15);
    lVar57 = *(long *)(puVar11 + 0x14) + ((ulong)(**(byte **)(puVar11 + 0x18) >> 5) & 3) * 0x2e8;
    iVar56 = *(int *)(lVar57 + 0x518);
    iVar16 = *(int *)(lVar57 + 0x52c);
    pbVar40 = *(byte **)(puVar11 + 4);
    iVar33 = (uint)*pbVar40 * 0x1010101;
    lStack_490 = CONCAT44(lStack_490._4_4_,iVar33);
    do {
      pbVar13 = pbVar40 + lVar17;
      if ((((*(int *)pbVar13 != iVar33) || (*(int *)(pbVar13 + 4) != iVar33)) ||
          (*(int *)(pbVar13 + 8) != iVar33)) || (*(int *)(pbVar13 + 0xc) != iVar33)) {
        bVar10 = false;
        goto LAB_10824aef0;
      }
      lVar17 = lVar17 + 0x20;
    } while ((int)lVar17 != 0x200);
    bVar10 = true;
LAB_10824aef0:
    lVar17 = 0;
    param_3[0x1a4] = 0xffff;
    param_3[0x1a5] = 0xffff;
    puVar45 = (ushort *)&lStack_490;
    puVar34 = param_3;
    do {
      lVar37 = *(long *)(puVar11 + 0xc);
      *(int *)(puVar45 + 0x1a4) = (int)lVar17;
      puVar36 = puVar11;
      FUN_10824bf80(puVar11,puVar45,lVar37,lVar17);
      *(int *)(puVar45 + 0x1b0) = (int)puVar36;
      pbVar13 = pbVar40;
      (*pcRam000000011386a018)(pbVar40,lVar37);
      *(long *)puVar45 = (long)(int)pbVar13;
      if (iVar16 == 0) {
        lVar37 = 0;
      }
      else {
        pbVar13 = pbVar40;
        (*pcRam000000011386a038)(pbVar40,lVar37,&UNK_10df0ff46);
        lVar37 = (long)((ulong)((int)pbVar13 * iVar16 + 0x80) << 0x20) >> 0x28;
      }
      uVar6 = *(ushort *)(&UNK_10df0e058 + lVar17 * 2);
      *(long *)(puVar45 + 4) = lVar37;
      *(ulong *)(puVar45 + 8) = (ulong)uVar6;
      puVar36 = puVar11;
      FUN_108240524(puVar11,puVar45);
      *(long *)(puVar45 + 0xc) = (long)(int)puVar36;
      if (bVar10) {
        auVar53._0_9_ = (unkuint9)0;
        auVar53._9_7_ = 0;
        lVar37 = 0x48;
        do {
          puVar1 = (undefined8 *)((long)puVar45 + lVar37);
          uVar9 = puVar1[1];
          uVar52 = *puVar1;
          uVar61 = puVar1[3];
          uVar60 = puVar1[2];
          bVar48 = ~-((short)((ulong)uVar60 >> 0x10) == 0);
          bVar49 = ~-((short)((ulong)uVar61 >> 0x10) == 0);
          iVar33 = auVar53._4_4_;
          iVar55 = auVar53._8_4_;
          iVar58 = auVar53._12_4_;
          auVar53._0_4_ =
               auVar53._0_4_ + (uint)(~-((short)((ulong)uVar52 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar48,(ushort)(~-((short)uVar60 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar48 & 1);
          auVar53._4_4_ =
               iVar33 + (uint)(~-((short)((ulong)uVar52 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar52 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar60 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar60 >> 0x30) == 0) & 1);
          auVar53._8_4_ =
               iVar55 + (uint)(~-((short)uVar9 == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar9 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar49,(ushort)(~-((short)uVar61 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar49 & 1);
          auVar53._12_4_ =
               iVar58 + (uint)(~-((short)((ulong)uVar9 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar9 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar61 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar61 >> 0x30) == 0) & 1);
          lVar37 = lVar37 + 0x20;
        } while ((int)lVar37 != 0x248);
        lVar37 = *(long *)puVar45;
        lVar47 = *(long *)(puVar45 + 4);
        if (auVar53._0_4_ + auVar53._4_4_ + auVar53._8_4_ + auVar53._12_4_ < 1) {
          lVar37 = lVar37 << 1;
          lVar47 = lVar47 << 1;
          *(long *)puVar45 = lVar37;
          *(long *)(puVar45 + 4) = lVar47;
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
      }
      else {
        lVar37 = *(long *)puVar45;
        lVar47 = *(long *)(puVar45 + 4);
      }
      lVar37 = (*(long *)(puVar45 + 8) + (long)(int)puVar36) * (long)iVar56 +
               (lVar37 + lVar47) * 0x100;
      *(long *)(puVar45 + 0x10) = lVar37;
      if ((lVar17 == 0) || (puVar36 = puVar45, lVar37 < *(long *)(puVar34 + 0x10))) {
        auVar53 = NEON_ext(*(undefined1 (*) [16])(puVar11 + 8),*(undefined1 (*) [16])(puVar11 + 8),8
                           ,1);
        *(long *)(puVar11 + 0xc) = auVar53._8_8_;
        *(long *)(puVar11 + 8) = auVar53._0_8_;
        puVar36 = puVar34;
        puVar34 = puVar45;
      }
      lVar17 = lVar17 + 1;
      puVar45 = puVar36;
    } while (lVar17 != 4);
    if (puVar34 != param_3) {
      _memcpy(param_3,puVar34,0x370);
    }
    *(long *)(param_3 + 0x10) =
         (*(long *)(param_3 + 8) + *(long *)(param_3 + 0xc)) * (long)*(int *)(lVar57 + 0x524) +
         (*(long *)(param_3 + 4) + *(long *)param_3) * 0x100;
    uVar25 = *(uint *)(param_3 + 0x1a4);
    piVar19 = *(int **)(puVar11 + 0x20);
    iVar16 = 4;
    do {
      *piVar19 = (uVar25 & 0xff) * 0x1010101;
      piVar19 = (int *)((long)piVar19 + (long)*(int *)(*(long *)(puVar11 + 0x14) + 0x38));
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xfc | 1;
    if (((*(uint *)(param_3 + 0x1b0) & 0x100ffff) == 0x1000000) &&
       ((long)*(int *)(lVar57 + 0x514) < *(long *)param_3)) {
      uVar14 = (uint)(short)param_3[0x15];
      uVar25 = -uVar14;
      if (-1 < (int)uVar14) {
        uVar25 = uVar14;
      }
      uVar22 = (uint)(short)param_3[0x16];
      uVar14 = -uVar22;
      if (-1 < (int)uVar22) {
        uVar14 = uVar22;
      }
      uVar26 = (uint)(short)param_3[0x18];
      uVar22 = -uVar26;
      if (-1 < (int)uVar26) {
        uVar22 = uVar26;
      }
      if (uVar14 <= uVar25) {
        uVar14 = uVar25;
      }
      if (uVar22 <= uVar14) {
        uVar22 = uVar14;
      }
      if (*(int *)(lVar57 + 0x510) < (int)uVar22) {
        *(uint *)(lVar57 + 0x510) = uVar22;
      }
    }
    lVar17 = *(long *)(puVar11 + 0x14);
    pbVar40 = *(byte **)(puVar11 + 0x18);
    lStack_548 = *(long *)(puVar11 + 4);
    lVar57 = *(long *)(puVar11 + 0xc);
    if (1 < iVar38) {
      if (*(int *)(lVar17 + 0x5c48) != 0) {
        lVar37 = lVar17 + ((ulong)(*pbVar40 >> 5) & 3) * 0x2e8;
        iVar56 = *(int *)(lVar37 + 0x51c);
        iVar16 = *(int *)(lVar37 + 0x52c);
        uStack_130 = 0;
        lStack_488 = 0;
        lStack_490 = 0;
        lStack_478 = 0;
        uStack_480 = 0xd3;
        lStack_470 = (long)*(int *)(lVar37 + 0x524) * 0xd3;
        FUN_1082457cc(puVar11);
        iVar38 = 0;
        puVar45 = param_3 + 0x1a6;
        do {
          uVar18 = (ulong)*(ushort *)(&UNK_10df0ffba + (long)*(int *)(puVar11 + 0x40) * 2);
          puVar34 = puVar11;
          FUN_10824c670(puVar11,puVar45);
          lVar41 = lVar57 + uVar18;
          lVar12 = *(long *)(puVar11 + 0x10);
          (*pcRam0000000113869fd0)(lVar12,*(long *)(puVar11 + 0x3c));
          lVar47 = 0;
          lStack_580 = 0;
          lStack_578 = 0;
          lStack_570 = 0;
          uStack_568 = 0;
          uStack_55c = 0;
          uStack_510 = 0x7fffffffffffff;
          iStack_4f0 = -1;
          lVar12 = lVar12 + 0x688;
          do {
            puVar36 = puVar11;
            FUN_10824c6e4(puVar11,&uStack_4b0,lStack_548 + uVar18,lVar12,lVar47);
            uVar25 = *(uint *)(puVar11 + 0x40);
            lVar21 = lStack_548 + uVar18;
            (*pcRam000000011386a028)(lVar21,lVar12);
            if (iVar16 == 0) {
              lVar32 = 0;
            }
            else {
              lVar32 = lStack_548 + uVar18;
              (*pcRam000000011386a040)(lVar32,lVar12,&UNK_10df0ff46);
              lVar32 = (long)((ulong)((int)lVar32 * iVar16 + 0x80) << 0x20) >> 0x28;
            }
            uVar6 = puVar34[lVar47];
            if (lVar47 == 0) {
LAB_10824b308:
              lVar35 = 0;
            }
            else {
              uVar50 = CONCAT16(~-((short)((ulong)uStack_4b0 >> 0x30) == 0),
                                (uint6)(CONCAT14(~-((short)((ulong)uStack_4b0 >> 0x20) == 0),
                                                 (uint)(uint3)(((byte)~-((short)((ulong)uStack_4b0
                                                                                >> 0x10) == 0) & 1)
                                                              << 0x10)) & 0x1ffffffff)) &
                       0x1ffffffffffff;
              uVar8 = CONCAT16(~-((short)((ulong)uStack_4a0 >> 0x30) == 0),
                               (uint6)(CONCAT14(~-((short)((ulong)uStack_4a0 >> 0x20) == 0),
                                                (uint)(CONCAT12(~-((short)((ulong)uStack_4a0 >> 0x10
                                                                          ) == 0),
                                                                (ushort)(~-((short)uStack_4a0 == 0)
                                                                        & 1)) & 0x1ffff)) &
                                      0x1ffffffff)) & 0x1ffffffffffff;
              if (3 < (ushort)((short)uVar8 + (short)(uVar8 >> 0x10) + (short)(uVar50 >> 0x10) +
                               (short)(uVar8 >> 0x20) + (ushort)(byte)(uVar8 >> 0x30) +
                               (short)(uVar50 >> 0x20) + (ushort)(byte)(uVar50 >> 0x30) +
                              (ushort)(~-((short)uStack_498 == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_498 >> 0x10) == 0) & 1) +
                              (ushort)(~-((short)uStack_4a8 == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_4a8 >> 0x10) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_498 >> 0x20) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_498 >> 0x30) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_4a8 >> 0x20) == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_4a8 >> 0x30) == 0) & 1)))
              goto LAB_10824b308;
              lVar35 = 0x8c;
            }
            lVar24 = lVar32 + (int)lVar21;
            lVar28 = lVar12;
            if ((iStack_4f0 < 0) ||
               ((long)(int)((int)lVar35 + (uint)uVar6) * (long)iVar56 + lVar24 * 0x100 <
                (long)uStack_510)) {
              lStack_4b8 = *(long *)(puVar11 + 0x14);
              lStack_4c8 = lStack_4b8 + 0x113c;
              lStack_4c0 = lStack_4b8 + 0x1ea4;
              lStack_4b8 = lStack_4b8 + 0x5a48;
              uStack_4d0 = 3;
              auStack_4e0[0] = 0;
              iVar55 = *(int *)(puVar11 + ((ulong)*(uint *)(puVar11 + 0x40) & 3) * 2 + 0x42);
              iVar33 = *(int *)(puVar11 + (long)((int)*(uint *)(puVar11 + 0x40) >> 2) * 2 + 0x54);
              (*pcRam0000000113869fa0)(&uStack_4b0,auStack_4e0);
              iVar33 = iVar33 + iVar55;
              (*pcRam0000000113869f98)(iVar33,auStack_4e0);
              lVar24 = lVar24 * 0x100 + (lVar35 + iVar33 + (ulong)uVar6) * (long)iVar56;
              if ((iStack_4f0 < 0) || (lVar24 < (long)uStack_510)) {
                uStack_55c = (int)puVar36 << (ulong)(uVar25 & 0x1f);
                lVar28 = (long)*(int *)(puVar11 + 0x40);
                auStack_448[lVar28 * 4 + 1] = uStack_4a8;
                auStack_448[lVar28 * 4] = uStack_4b0;
                auStack_448[lVar28 * 4 + 3] = uStack_498;
                auStack_448[lVar28 * 4 + 2] = uStack_4a0;
                iStack_4f0 = (int)lVar47;
                lVar28 = lVar41;
                lVar41 = lVar12;
                lStack_580 = (long)(int)lVar21;
                lStack_578 = lVar32;
                lStack_570 = lVar35 + iVar33;
                uStack_568 = (ulong)uVar6;
                uStack_510 = lVar24;
              }
            }
            lVar47 = lVar47 + 1;
            lVar12 = lVar28;
          } while (lVar47 != 10);
          lStack_490 = lStack_490 + lStack_580;
          lStack_488 = lStack_488 + lStack_578;
          lStack_478 = lStack_478 + lStack_570;
          uStack_480 = uStack_480 + uStack_568;
          uStack_130 = uStack_130 | uStack_55c;
          lStack_470 = (uStack_568 + lStack_570) * (long)*(int *)(lVar37 + 0x524) +
                       (lStack_580 + lStack_578) * 0x100 + lStack_470;
          if ((*(long *)(param_3 + 0x10) <= lStack_470) ||
             (iVar38 = iVar38 + (int)uStack_568, *(int *)(lVar17 + 0x5c48) < iVar38)) {
            lVar57 = *(long *)(puVar11 + 0xc);
            goto LAB_10824b970;
          }
          iVar33 = *(int *)(puVar11 + 0x40);
          if (lVar41 != lVar57 + (ulong)*(ushort *)(&UNK_10df0ffba + (long)iVar33 * 2)) {
            (*pcRam0000000113869fb8)(lVar41);
            iVar33 = *(int *)(puVar11 + 0x40);
          }
          *(char *)((long)puVar45 + (long)iVar33) = (char)iStack_4f0;
          *(uint *)(puVar11 + (long)(iVar33 >> 2) * 2 + 0x54) = (uint)(uStack_55c != 0);
          *(uint *)(puVar11 + ((ulong)*(uint *)(puVar11 + 0x40) & 3) * 2 + 0x42) =
               (uint)(uStack_55c != 0);
          puVar34 = puVar11;
          func_0x000108245870(puVar11,lVar57);
        } while ((int)puVar34 != 0);
        *(long *)(param_3 + 4) = lStack_488;
        *(long *)param_3 = lStack_490;
        *(long *)(param_3 + 0xc) = lStack_478;
        *(ulong *)(param_3 + 8) = uStack_480;
        *(uint *)(param_3 + 0x1b0) = uStack_130;
        *(long *)(param_3 + 0x10) = lStack_470;
        puVar20 = *(undefined4 **)(puVar11 + 0x20);
        uVar25 = 5;
        do {
          *puVar20 = *(undefined4 *)puVar45;
          puVar20 = (undefined4 *)((long)puVar20 + (long)*(int *)(*(long *)(puVar11 + 0x14) + 0x38))
          ;
          uVar25 = uVar25 - 1;
          puVar45 = puVar45 + 2;
        } while (1 < uVar25);
        **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xfc;
        auVar53 = *(undefined1 (*) [16])(puVar11 + 8);
        lVar57 = auVar53._0_8_;
        auVar53 = NEON_ext(auVar53,auVar53,8,1);
        *(long *)(puVar11 + 0xc) = auVar53._8_8_;
        *(long *)(puVar11 + 8) = auVar53._0_8_;
        _memcpy(param_3 + 0x24,auStack_448,0x200);
      }
LAB_10824b970:
      lVar17 = *(long *)(puVar11 + 0x14);
      pbVar40 = *(byte **)(puVar11 + 0x18);
      lStack_548 = *(long *)(puVar11 + 4);
    }
    lVar37 = 0;
    iVar38 = *(int *)(lVar17 + ((ulong)(*pbVar40 >> 5) & 3) * 0x2e8 + 0x520);
    puVar45 = (ushort *)(lVar57 + 0x10);
    uVar25 = 0;
    puVar34 = (ushort *)(*(long *)(puVar11 + 8) + 0x10);
    param_3[0x1ae] = 0xffff;
    param_3[0x1af] = 0xffff;
    lStack_4e8 = 0;
    iStack_4f0 = 0;
    uStack_4ec = 0;
    lVar17 = 0x7fffffffffffff;
    lStack_508 = 0;
    uStack_510 = 0;
    puVar36 = puVar34;
    do {
      puVar39 = puVar11;
      FUN_10824c818(puVar11,&lStack_490,puVar45,lVar37);
      uStack_130 = (uint)puVar39;
      lVar57 = lStack_548 + 0x10;
      (*pcRam000000011386a020)(lVar57,puVar45);
      lStack_490 = (long)(int)lVar57;
      lStack_488 = 0;
      uStack_480 = (ulong)*(ushort *)(&UNK_10df0e050 + lVar37 * 2);
      puVar39 = puVar11;
      func_0x000108240678(puVar11,&lStack_490);
      lStack_478 = (long)(int)puVar39;
      lVar57 = lStack_478;
      if (lVar37 != 0) {
        lVar47 = 0;
        auVar54._0_9_ = (unkuint9)0;
        auVar54._9_7_ = 0;
        do {
          uVar9 = *(undefined8 *)((long)alStack_248 + lVar47 + 8);
          uVar52 = *(undefined8 *)((long)alStack_248 + lVar47);
          uVar61 = *(undefined8 *)((long)alStack_248 + lVar47 + 0x18);
          uVar60 = *(undefined8 *)((long)alStack_248 + lVar47 + 0x10);
          bVar48 = ~-((short)((ulong)uVar60 >> 0x10) == 0);
          bVar49 = ~-((short)((ulong)uVar61 >> 0x10) == 0);
          iVar16 = auVar54._4_4_;
          iVar56 = auVar54._8_4_;
          iVar33 = auVar54._12_4_;
          auVar54._0_4_ =
               auVar54._0_4_ + (uint)(~-((short)((ulong)uVar52 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar48,(ushort)(~-((short)uVar60 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar48 & 1);
          auVar54._4_4_ =
               iVar16 + (uint)(~-((short)((ulong)uVar52 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar52 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar60 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar60 >> 0x30) == 0) & 1);
          auVar54._8_4_ =
               iVar56 + (uint)(~-((short)uVar9 == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar9 >> 0x10) == 0) & 1) +
               ((CONCAT12(bVar49,(ushort)(~-((short)uVar61 == 0) & 1)) & 0x1ffff) & 0xffff) +
               (uint)(bVar49 & 1);
          auVar54._12_4_ =
               iVar33 + (uint)(~-((short)((ulong)uVar9 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar9 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar61 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar61 >> 0x30) == 0) & 1);
          lVar47 = lVar47 + 0x20;
        } while ((int)lVar47 != 0x100);
        if (auVar54._0_4_ + auVar54._4_4_ + auVar54._8_4_ + auVar54._12_4_ < 3) {
          lVar57 = lStack_478 + 0x460;
        }
      }
      lVar47 = (uStack_480 + lVar57) * (long)iVar38 + (lStack_488 + lStack_490) * 0x100;
      if ((lVar37 == 0) || (puVar39 = puVar36, lVar47 < lVar17)) {
        lStack_4e8 = lStack_488;
        iStack_4f0 = (int)lStack_490;
        uStack_4ec = (undefined4)((ulong)lStack_490 >> 0x20);
        *(int *)(param_3 + 0x1ae) = (int)lVar37;
        *(long *)(param_3 + 0x188) = lStack_180;
        *(long *)(param_3 + 0x184) = lStack_188;
        *(long *)(param_3 + 400) = lStack_170;
        *(long *)(param_3 + 0x18c) = lStack_178;
        *(long *)(param_3 + 0x198) = lStack_160;
        *(long *)(param_3 + 0x194) = lStack_168;
        *(long *)(param_3 + 0x1a0) = lStack_150;
        *(long *)(param_3 + 0x19c) = lStack_158;
        *(long *)(param_3 + 0x168) = lStack_1c0;
        *(long *)(param_3 + 0x164) = lStack_1c8;
        *(long *)(param_3 + 0x170) = lStack_1b0;
        *(long *)(param_3 + 0x16c) = lStack_1b8;
        *(long *)(param_3 + 0x178) = lStack_1a0;
        *(long *)(param_3 + 0x174) = lStack_1a8;
        *(long *)(param_3 + 0x180) = lStack_190;
        *(long *)(param_3 + 0x17c) = lStack_198;
        *(long *)(param_3 + 0x148) = lStack_200;
        *(long *)(param_3 + 0x144) = lStack_208;
        *(long *)(param_3 + 0x150) = lStack_1f0;
        *(long *)(param_3 + 0x14c) = lStack_1f8;
        *(long *)(param_3 + 0x158) = lStack_1e0;
        *(long *)(param_3 + 0x154) = lStack_1e8;
        *(long *)(param_3 + 0x160) = lStack_1d0;
        *(long *)(param_3 + 0x15c) = lStack_1d8;
        *(long *)(param_3 + 0x128) = alStack_248[1];
        *(long *)(param_3 + 0x124) = alStack_248[0];
        *(long *)(param_3 + 0x130) = alStack_248[3];
        *(long *)(param_3 + 300) = alStack_248[2];
        *(long *)(param_3 + 0x138) = alStack_248[5];
        *(long *)(param_3 + 0x134) = alStack_248[4];
        *(long *)(param_3 + 0x140) = lStack_210;
        *(long *)(param_3 + 0x13c) = alStack_248[6];
        uStack_510 = uStack_480;
        puVar39 = puVar45;
        lVar17 = lVar47;
        puVar45 = puVar36;
        lStack_508 = lVar57;
        uVar25 = uStack_130;
        if (*(long *)(puVar11 + 0xb0) != 0) {
          *(undefined4 *)(param_3 + 0x1b2) = uStack_12c;
          param_3[0x1b4] = uStack_128;
        }
      }
      lVar37 = lVar37 + 1;
      puVar36 = puVar39;
    } while (lVar37 != 4);
    **(byte **)(puVar11 + 0x18) =
         **(byte **)(puVar11 + 0x18) & 0xf3 | ((byte)param_3[0x1ae] & 3) << 2;
    *(long *)(param_3 + 4) = *(long *)(param_3 + 4) + lStack_4e8;
    *(long *)param_3 = *(long *)param_3 + CONCAT44(uStack_4ec,iStack_4f0);
    *(long *)(param_3 + 0xc) = *(long *)(param_3 + 0xc) + lStack_508;
    *(ulong *)(param_3 + 8) = *(long *)(param_3 + 8) + uStack_510;
    *(uint *)(param_3 + 0x1b0) = *(uint *)(param_3 + 0x1b0) | uVar25;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + lVar17;
    if (puVar39 != puVar34) {
      (*pcRam0000000113869fb0)();
    }
    lVar17 = *(long *)(puVar11 + 0xb0);
    if (lVar17 != 0) {
      lVar57 = 0;
      iVar38 = *(int *)puVar11;
      bVar10 = true;
      do {
        bVar29 = bVar10;
        puVar2 = (undefined1 *)(lVar17 + (long)iVar38 * 4 + lVar57 * 2);
        puVar3 = (undefined1 *)((long)(param_3 + 0x1b2) + lVar57 * 3);
        *(undefined1 *)(puVar11 + lVar57 + 0xac) = *puVar3;
        cVar7 = puVar3[2];
        uVar25 = (int)cVar7 + cVar7 * 2;
        *(char *)((long)(puVar11 + lVar57 + 0xac) + 1) = (char)(uVar25 >> 2);
        *puVar2 = puVar3[1];
        puVar2[1] = cVar7 - (char)((uVar25 & 0xfffc) >> 2);
        lVar57 = 1;
        bVar10 = false;
      } while (bVar29);
    }
    if (uVar15 == 2) {
      puVar11[0xa4] = 1;
      puVar11[0xa5] = 0;
      if ((**(byte **)(puVar11 + 0x18) & 3) == 1) {
        puVar45 = puVar11;
        FUN_10824bf80(puVar11,param_3,*(long *)(puVar11 + 8),**(undefined1 **)(puVar11 + 0x20));
        uVar15 = (uint)puVar45;
      }
      else {
        lVar17 = *(long *)(puVar11 + 0x14);
        FUN_1082457cc(puVar11);
        uVar15 = 0;
        do {
          uVar25 = *(uint *)(puVar11 + 0x40);
          uVar5 = *(undefined1 *)
                   (*(long *)(puVar11 + 0x20) +
                   (long)(int)((uVar25 & 3) + ((int)uVar25 >> 2) * *(int *)(lVar17 + 0x38)));
          uVar6 = *(ushort *)(&UNK_10df0ffba + (long)(int)uVar25 * 2);
          lVar57 = *(long *)(puVar11 + 4);
          lVar37 = *(long *)(puVar11 + 8);
          (*pcRam0000000113869fd0)(*(long *)(puVar11 + 0x10),*(long *)(puVar11 + 0x3c));
          puVar45 = puVar11;
          FUN_10824c6e4(puVar11,param_3 + (long)*(int *)(puVar11 + 0x40) * 0x10 + 0x24,
                        lVar57 + (ulong)uVar6,lVar37 + (ulong)uVar6,uVar5);
          uVar15 = (int)puVar45 << (ulong)(*(uint *)(puVar11 + 0x40) & 0x1f) | uVar15;
          puVar45 = puVar11;
          func_0x000108245870(puVar11,*(long *)(puVar11 + 8));
        } while ((int)puVar45 != 0);
      }
      puVar45 = puVar11;
      puVar34 = param_3;
      FUN_10824c818(puVar11,param_3,*(long *)(puVar11 + 8) + 0x10,
                    **(byte **)(puVar11 + 0x18) >> 2 & 3);
      uVar15 = (uint)puVar45 | uVar15;
      *(uint *)(param_3 + 0x1b0) = uVar15;
    }
    else {
      uVar15 = *(uint *)(param_3 + 0x1b0);
    }
    goto LAB_10824be38;
  }
  bVar48 = **(byte **)(puVar11 + 0x18);
  if (iVar38 < 2) {
    uVar52 = *(undefined8 *)(*(long *)(puVar11 + 0x14) + ((ulong)(bVar48 >> 5) & 3) * 0x2e8 + 0x540)
    ;
    iStack_4f0 = (int)uVar52;
    uStack_4ec = (undefined4)((ulong)uVar52 >> 0x20);
    lVar17 = 0x7fffffffffffff;
    lVar57 = 0x7fffffffffffff;
    if ((bVar48 & 3) == 1) goto LAB_10824b630;
LAB_10824b720:
    lVar37 = CONCAT44(uStack_4ec,iStack_4f0);
    FUN_1082457cc(puVar11);
    uStack_510 = 0;
    uVar15 = 0;
    puVar45 = param_3 + 0x1a6;
    do {
      lVar12 = *(long *)(puVar11 + 4);
      uVar6 = *(ushort *)(&UNK_10df0ffba + (long)*(int *)(puVar11 + 0x40) * 2);
      puVar34 = puVar11;
      FUN_10824c670(puVar11,puVar45);
      (*pcRam0000000113869fd0)(*(long *)(puVar11 + 0x10),*(long *)(puVar11 + 0x3c));
      lVar47 = 0;
      lVar41 = 0x7fffffffffffff;
      iVar16 = -1;
      do {
        uVar18 = lVar12 + (ulong)uVar6;
        (*pcRam000000011386a028)
                  (uVar18,*(long *)(puVar11 + 0x10) +
                          (ulong)*(ushort *)(&UNK_10df0ff96 + lVar47 * 2));
        lVar21 = (-(uVar18 >> 0x1f & 1) & 0xffffff0000000000 | (uVar18 & 0xffffffff) << 8) +
                 (ulong)puVar34[lVar47] * 0xb;
        iVar56 = (int)lVar47;
        if (lVar41 <= lVar21) {
          iVar56 = iVar16;
        }
        if (lVar21 <= lVar41) {
          lVar41 = lVar21;
        }
        lVar47 = lVar47 + 1;
        iVar16 = iVar56;
      } while (lVar47 != 10);
      uStack_510 = uStack_510 + puVar34[iVar56];
      lVar47 = (long)*(int *)(puVar11 + 0x40);
      *(char *)((long)puVar45 + lVar47) = (char)iVar56;
      lVar37 = lVar41 + lVar37;
      if (lVar57 <= lVar37 || lVar17 < (long)uStack_510) goto LAB_10824bd50;
      puVar34 = puVar11;
      FUN_10824c6e4(puVar11,param_3 + lVar47 * 0x10 + 0x24,lVar12 + (ulong)uVar6,
                    *(long *)(puVar11 + 0xc) + (ulong)*(ushort *)(&UNK_10df0ffba + lVar47 * 2),
                    iVar56);
      uVar15 = (int)puVar34 << (ulong)(*(uint *)(puVar11 + 0x40) & 0x1f) | uVar15;
      puVar34 = puVar11;
      func_0x000108245870(puVar11,*(long *)(puVar11 + 0xc));
    } while ((int)puVar34 != 0);
    puVar20 = *(undefined4 **)(puVar11 + 0x20);
    uVar25 = 5;
    do {
      *puVar20 = *(undefined4 *)puVar45;
      puVar20 = (undefined4 *)((long)puVar20 + (long)*(int *)(*(long *)(puVar11 + 0x14) + 0x38));
      uVar25 = uVar25 - 1;
      puVar45 = puVar45 + 2;
    } while (1 < uVar25);
    **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xfc;
    auVar53 = NEON_ext(*(undefined1 (*) [16])(puVar11 + 8),*(undefined1 (*) [16])(puVar11 + 8),8,1);
    *(long *)(puVar11 + 0xc) = auVar53._8_8_;
    *(long *)(puVar11 + 8) = auVar53._0_8_;
  }
  else {
    uVar52 = *(undefined8 *)(*(long *)(puVar11 + 0x14) + ((ulong)(bVar48 >> 5) & 3) * 0x2e8 + 0x540)
    ;
    iStack_4f0 = (int)uVar52;
    uStack_4ec = (undefined4)((ulong)uVar52 >> 0x20);
    lVar17 = (long)*(int *)(*(long *)(puVar11 + 0x14) + 0x5c4c);
LAB_10824b630:
    lVar37 = 0;
    pbVar40 = *(byte **)(puVar11 + 4);
    lVar47 = *(long *)(puVar11 + 0x10);
    uVar15 = 0xffffffff;
    lVar57 = 0x7fffffffffffff;
    do {
      pbVar13 = pbVar40;
      (*pcRam000000011386a018)(pbVar40,lVar47 + (ulong)*(ushort *)(&UNK_10df0fca0 + lVar37 * 2));
      lVar41 = (-((ulong)pbVar13 >> 0x1f & 1) & 0xffffff0000000000 |
               ((ulong)pbVar13 & 0xffffffff) << 8) +
               (ulong)*(ushort *)(&UNK_10df0e058 + lVar37 * 2) * 0x6a;
      uVar25 = (uint)lVar37;
      if (lVar57 <= lVar41) {
        lVar41 = lVar57;
        uVar25 = uVar15;
      }
      if (lVar37 == 0 || (long)(ulong)*(ushort *)(&UNK_10df0e058 + lVar37 * 2) <= lVar17) {
        lVar57 = lVar41;
        uVar15 = uVar25;
      }
      lVar37 = lVar37 + 1;
    } while (lVar37 != 4);
    if ((*(int *)puVar11 == 0) || (*(int *)(puVar11 + 2) == 0)) {
      iVar16 = (uint)*pbVar40 * 0x1010101;
      lStack_490 = CONCAT44(lStack_490._4_4_,iVar16);
      iVar56 = 0x10;
      do {
        if ((((*(int *)pbVar40 != iVar16) || (*(int *)(pbVar40 + 4) != iVar16)) ||
            (*(int *)(pbVar40 + 8) != iVar16)) || (*(int *)(pbVar40 + 0xc) != iVar16))
        goto LAB_10824b6d0;
        pbVar40 = pbVar40 + 0x20;
        iVar56 = iVar56 + -1;
      } while (iVar56 != 0);
      piVar19 = *(int **)(puVar11 + 0x20);
      iVar16 = 0;
      if (*(int *)puVar11 != 0) {
        iVar16 = 2;
      }
      iVar56 = 4;
      do {
        *piVar19 = iVar16 * 0x1010101;
        piVar19 = (int *)((long)piVar19 + (long)*(int *)(*(long *)(puVar11 + 0x14) + 0x38));
        iVar56 = iVar56 + -1;
      } while (iVar56 != 0);
      **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xfc | 1;
    }
    else {
LAB_10824b6d0:
      piVar19 = *(int **)(puVar11 + 0x20);
      iVar16 = 4;
      do {
        *piVar19 = (uVar15 & 0xff) * 0x1010101;
        piVar19 = (int *)((long)piVar19 + (long)*(int *)(*(long *)(puVar11 + 0x14) + 0x38));
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xfc | 1;
      if (1 < iVar38) goto LAB_10824b720;
    }
LAB_10824bd50:
    lVar37 = lVar57;
    puVar45 = puVar11;
    FUN_10824bf80(puVar11,param_3,*(long *)(puVar11 + 8),**(undefined1 **)(puVar11 + 0x20));
    uVar15 = (uint)puVar45;
  }
  if (0 < iVar38) {
    lVar17 = 0;
    lVar47 = *(long *)(puVar11 + 4);
    lVar57 = 0x7fffffffffffff;
    uVar25 = 0xffffffff;
    do {
      uVar18 = lVar47 + 0x10;
      (*pcRam000000011386a020)
                (uVar18,*(long *)(puVar11 + 0x10) + (ulong)*(ushort *)(&UNK_10df0fca8 + lVar17 * 2))
      ;
      lVar41 = (-(uVar18 >> 0x1f & 1) & 0xffffff0000000000 | (uVar18 & 0xffffffff) << 8) +
               (ulong)*(ushort *)(&UNK_10df0e050 + lVar17 * 2) * 0x78;
      uVar14 = (uint)lVar17;
      if (lVar57 <= lVar41) {
        uVar14 = uVar25;
      }
      if (lVar41 <= lVar57) {
        lVar57 = lVar41;
      }
      lVar17 = lVar17 + 1;
      uVar25 = uVar14;
    } while (lVar17 != 4);
    **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xf3 | (byte)((uVar14 & 3) << 2);
  }
  puVar45 = puVar11;
  puVar34 = param_3;
  FUN_10824c818(puVar11,param_3,*(long *)(puVar11 + 8) + 0x10,**(byte **)(puVar11 + 0x18) >> 2 & 3);
  uVar15 = (uint)puVar45 | uVar15;
  *(uint *)(param_3 + 0x1b0) = uVar15;
  *(long *)(param_3 + 0x10) = lVar37;
LAB_10824be38:
  puVar45 = (ushort *)(ulong)(uVar15 == 0);
  bVar48 = 0x10;
  if (uVar15 != 0) {
    bVar48 = 0;
  }
  **(byte **)(puVar11 + 0x18) = **(byte **)(puVar11 + 0x18) & 0xef | bVar48;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return puVar45;
  }
  ___stack_chk_fail();
  lVar17 = 0;
  bVar10 = true;
  do {
    bVar29 = bVar10;
    bVar48 = (&UNK_10df0ff30)[lVar17 + ((ulong)puVar34 & 0xffffffff) * 2];
    uVar15 = 0;
    if (puVar45[lVar17] != 0) {
      uVar15 = 0x20000 / puVar45[lVar17];
    }
    puVar45[lVar17 + 0x10] = (ushort)uVar15;
    *(uint *)(puVar45 + lVar17 * 2 + 0x20) = (uint)bVar48 << 9;
    uVar25 = 0;
    if ((uVar15 & 0xffff) != 0) {
      uVar25 = ((uint)bVar48 << 9 ^ 0x1ffff) / (uVar15 & 0xffff);
    }
    *(uint *)(puVar45 + lVar17 * 2 + 0x40) = uVar25;
    lVar17 = 1;
    bVar10 = false;
  } while (bVar29);
  uVar6 = puVar45[1];
  uVar4 = *(undefined4 *)(puVar45 + 0x22);
  lVar17 = 0xe;
  puVar36 = puVar45 + 0x12;
  puVar39 = puVar45 + 0x44;
  do {
    puVar36[-0x10] = uVar6;
    *puVar36 = puVar45[0x11];
    *(undefined4 *)(puVar39 + -0x20) = uVar4;
    *(undefined4 *)puVar39 = *(undefined4 *)(puVar45 + 0x42);
    lVar17 = lVar17 + -1;
    puVar36 = puVar36 + 1;
    puVar39 = puVar39 + 2;
  } while (lVar17 != 0);
  lVar17 = 0;
  iVar38 = 0;
  do {
    if ((int)puVar34 == 0) {
      uVar6 = *puVar45;
      uVar31 = (ushort)((uint)uVar6 * (uint)(byte)(&UNK_10df0ff36)[lVar17] >> 0xb);
    }
    else {
      uVar31 = 0;
      uVar6 = *puVar45;
    }
    puVar45[0x60] = uVar31;
    iVar38 = (uint)uVar6 + iVar38;
    lVar17 = lVar17 + 1;
    puVar45 = puVar45 + 1;
  } while (lVar17 != 0x10);
  return (ushort *)(ulong)(iVar38 + 8U >> 4);
}



/* Entry: 10824ad70; end: 10824be97;  */

ushort * FUN_10824ad70(int *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  char cVar8;
  short sVar9;
  uint7 uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  long lVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  long *plVar18;
  ushort *puVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  int *piVar26;
  undefined4 *puVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  byte bVar31;
  uint uVar32;
  long lVar33;
  ushort *puVar34;
  bool bVar35;
  ushort *puVar36;
  ushort uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  byte *pbVar43;
  undefined4 *puVar44;
  long *plVar45;
  int iVar46;
  int iVar47;
  long lVar48;
  uint7 uVar49;
  int iVar52;
  int iVar54;
  undefined1 auVar50 [16];
  int iVar53;
  undefined1 auVar51 [16];
  uint3 uVar55;
  undefined8 uVar56;
  uint3 uVar57;
  undefined8 uVar58;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  ulong uStack_4b8;
  uint uStack_4ac;
  long lStack_498;
  ulong uStack_460;
  long lStack_458;
  long lStack_440;
  long lStack_438;
  undefined4 auStack_430 [4];
  undefined4 uStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined2 uStack_400;
  short sStack_3fe;
  short sStack_3fc;
  short sStack_3fa;
  short sStack_3f8;
  short sStack_3f6;
  short sStack_3f4;
  short sStack_3f2;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  ulong uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined8 auStack_398 [64];
  long alStack_198 [7];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar46 = *(int *)(*(long *)(param_1 + 10) + 0x5c40);
  *(undefined4 *)(param_2 + 0x6c) = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[4] = 0x7fffffffffffff;
  if (*param_1 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined8 *)(param_1 + 0x5a);
  }
  if (param_1[1] == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + 0x60);
  }
  (*pcRam0000000113869fc8)(*(undefined8 *)(param_1 + 8),uVar20,uVar22);
  if (*param_1 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined8 *)(param_1 + 0x5c);
  }
  if (param_1[1] == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + 0x62);
  }
  (*pcRam0000000113869fc0)(*(undefined8 *)(param_1 + 8),uVar20,uVar22);
  if (param_3 != 0) {
    lVar25 = 0;
    param_1[0x52] = (uint)(2 < param_3);
    lVar38 = *(long *)(param_1 + 10) + ((ulong)(**(byte **)(param_1 + 0xc) >> 5) & 3) * 0x2e8;
    iVar53 = *(int *)(lVar38 + 0x518);
    iVar24 = *(int *)(lVar38 + 0x52c);
    pbVar43 = *(byte **)(param_1 + 2);
    iVar47 = (uint)*pbVar43 * 0x1010101;
    lStack_3e0 = CONCAT44(lStack_3e0._4_4_,iVar47);
    do {
      pbVar16 = pbVar43 + lVar25;
      if ((((*(int *)pbVar16 != iVar47) || (*(int *)(pbVar16 + 4) != iVar47)) ||
          (*(int *)(pbVar16 + 8) != iVar47)) || (*(int *)(pbVar16 + 0xc) != iVar47)) {
        bVar11 = false;
        goto LAB_10824aef0;
      }
      lVar25 = lVar25 + 0x20;
    } while ((int)lVar25 != 0x200);
    bVar11 = true;
LAB_10824aef0:
    lVar25 = 0;
    *(undefined4 *)(param_2 + 0x69) = 0xffffffff;
    plVar45 = &lStack_3e0;
    plVar21 = param_2;
    do {
      uVar20 = *(undefined8 *)(param_1 + 6);
      *(int *)(plVar45 + 0x69) = (int)lVar25;
      piVar26 = param_1;
      FUN_10824bf80(param_1,plVar45,uVar20,lVar25);
      *(int *)(plVar45 + 0x6c) = (int)piVar26;
      pbVar16 = pbVar43;
      (*pcRam000000011386a018)(pbVar43,uVar20);
      *plVar45 = (long)(int)pbVar16;
      if (iVar24 == 0) {
        lVar29 = 0;
      }
      else {
        pbVar16 = pbVar43;
        (*pcRam000000011386a038)(pbVar43,uVar20,&UNK_10df0ff46);
        lVar29 = (long)((ulong)((int)pbVar16 * iVar24 + 0x80) << 0x20) >> 0x28;
      }
      uVar7 = *(ushort *)(&UNK_10df0e058 + lVar25 * 2);
      plVar45[1] = lVar29;
      plVar45[2] = (ulong)uVar7;
      piVar26 = param_1;
      FUN_108240524(param_1,plVar45);
      plVar45[3] = (long)(int)piVar26;
      if (bVar11) {
        auVar50 = ZEXT216(0);
        lVar29 = 0x48;
        do {
          puVar1 = (undefined8 *)((long)plVar45 + lVar29);
          uVar22 = puVar1[1];
          uVar20 = *puVar1;
          uVar58 = puVar1[3];
          uVar56 = puVar1[2];
          uVar55 = CONCAT12(~-((short)((ulong)uVar56 >> 0x10) == 0),
                            (ushort)(~-((short)uVar56 == 0) & 1)) & 0x1ffff;
          uVar57 = CONCAT12(~-((short)((ulong)uVar58 >> 0x10) == 0),
                            (ushort)(~-((short)uVar58 == 0) & 1)) & 0x1ffff;
          iVar47 = auVar50._4_4_;
          iVar52 = auVar50._8_4_;
          iVar54 = auVar50._12_4_;
          auVar50._0_4_ =
               auVar50._0_4_ + (uint)(~-((short)((ulong)uVar20 >> 0x10) == 0) & 1) +
               (uVar55 & 0xffff) + (uint)(uVar55 >> 0x10);
          auVar50._4_4_ =
               iVar47 + (uint)(~-((short)((ulong)uVar20 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar20 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar56 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar56 >> 0x30) == 0) & 1);
          auVar50._8_4_ =
               iVar52 + (uint)(~-((short)uVar22 == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar22 >> 0x10) == 0) & 1) +
               (uVar57 & 0xffff) + (uint)(uVar57 >> 0x10);
          auVar50._12_4_ =
               iVar54 + (uint)(~-((short)((ulong)uVar22 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar22 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar58 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar58 >> 0x30) == 0) & 1);
          lVar29 = lVar29 + 0x20;
        } while ((int)lVar29 != 0x248);
        lVar29 = *plVar45;
        lVar48 = plVar45[1];
        if (auVar50._0_4_ + auVar50._4_4_ + auVar50._8_4_ + auVar50._12_4_ < 1) {
          lVar29 = lVar29 << 1;
          lVar48 = lVar48 << 1;
          *plVar45 = lVar29;
          plVar45[1] = lVar48;
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
      }
      else {
        lVar29 = *plVar45;
        lVar48 = plVar45[1];
      }
      lVar29 = (plVar45[2] + (long)(int)piVar26) * (long)iVar53 + (lVar29 + lVar48) * 0x100;
      plVar45[4] = lVar29;
      if ((lVar25 == 0) || (plVar17 = plVar45, lVar29 < plVar21[4])) {
        auVar50 = NEON_ext(*(undefined1 (*) [16])(param_1 + 4),*(undefined1 (*) [16])(param_1 + 4),8
                           ,1);
        *(long *)(param_1 + 6) = auVar50._8_8_;
        *(long *)(param_1 + 4) = auVar50._0_8_;
        plVar17 = plVar21;
        plVar21 = plVar45;
      }
      lVar25 = lVar25 + 1;
      plVar45 = plVar17;
    } while (lVar25 != 4);
    if (plVar21 != param_2) {
      _memcpy(param_2,plVar21,0x370);
    }
    param_2[4] = (param_2[2] + param_2[3]) * (long)*(int *)(lVar38 + 0x524) +
                 (param_2[1] + *param_2) * 0x100;
    uVar23 = *(uint *)(param_2 + 0x69);
    piVar26 = *(int **)(param_1 + 0x10);
    iVar24 = 4;
    do {
      *piVar26 = (uVar23 & 0xff) * 0x1010101;
      piVar26 = (int *)((long)piVar26 + (long)*(int *)(*(long *)(param_1 + 10) + 0x38));
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xfc | 1;
    if (((*(uint *)(param_2 + 0x6c) & 0x100ffff) == 0x1000000) &&
       ((long)*(int *)(lVar38 + 0x514) < *param_2)) {
      sVar9 = *(short *)((long)param_2 + 0x2a);
      uVar23 = -(int)sVar9;
      if (-1 < sVar9) {
        uVar23 = (uint)sVar9;
      }
      sVar9 = *(short *)((long)param_2 + 0x2c);
      uVar28 = -(int)sVar9;
      if (-1 < sVar9) {
        uVar28 = (uint)sVar9;
      }
      sVar9 = (short)param_2[6];
      uVar32 = -(int)sVar9;
      if (-1 < sVar9) {
        uVar32 = (uint)sVar9;
      }
      if (uVar28 <= uVar23) {
        uVar28 = uVar23;
      }
      if (uVar32 <= uVar28) {
        uVar32 = uVar28;
      }
      if (*(int *)(lVar38 + 0x510) < (int)uVar32) {
        *(uint *)(lVar38 + 0x510) = uVar32;
      }
    }
    lVar25 = *(long *)(param_1 + 10);
    pbVar43 = *(byte **)(param_1 + 0xc);
    lStack_498 = *(long *)(param_1 + 2);
    lVar38 = *(long *)(param_1 + 6);
    if (1 < iVar46) {
      if (*(int *)(lVar25 + 0x5c48) != 0) {
        lVar29 = lVar25 + ((ulong)(*pbVar43 >> 5) & 3) * 0x2e8;
        iVar53 = *(int *)(lVar29 + 0x51c);
        iVar24 = *(int *)(lVar29 + 0x52c);
        uStack_80 = 0;
        lStack_3d8 = 0;
        lStack_3e0 = 0;
        lStack_3c8 = 0;
        uStack_3d0 = 0xd3;
        lStack_3c0 = (long)*(int *)(lVar29 + 0x524) * 0xd3;
        FUN_1082457cc(param_1);
        iVar46 = 0;
        puVar44 = (undefined4 *)((long)param_2 + 0x34c);
        do {
          uVar39 = (ulong)*(ushort *)(&UNK_10df0ffba + (long)param_1[0x20] * 2);
          piVar26 = param_1;
          FUN_10824c670(param_1,puVar44);
          lVar41 = lVar38 + uVar39;
          lVar13 = *(long *)(param_1 + 8);
          (*pcRam0000000113869fd0)(lVar13,*(undefined8 *)(param_1 + 0x1e));
          lVar48 = 0;
          lStack_4d0 = 0;
          lStack_4c8 = 0;
          lStack_4c0 = 0;
          uStack_4b8 = 0;
          uStack_4ac = 0;
          uStack_460 = 0x7fffffffffffff;
          iVar47 = -1;
          lVar13 = lVar13 + 0x688;
          do {
            piVar14 = param_1;
            FUN_10824c6e4(param_1,&uStack_400,lStack_498 + uVar39,lVar13,lVar48);
            uVar23 = param_1[0x20];
            lVar15 = lStack_498 + uVar39;
            (*pcRam000000011386a028)(lVar15,lVar13);
            if (iVar24 == 0) {
              lVar40 = 0;
            }
            else {
              lVar40 = lStack_498 + uVar39;
              (*pcRam000000011386a040)(lVar40,lVar13,&UNK_10df0ff46);
              lVar40 = (long)((ulong)((int)lVar40 * iVar24 + 0x80) << 0x20) >> 0x28;
            }
            uVar7 = *(ushort *)((long)piVar26 + lVar48 * 2);
            if (lVar48 == 0) {
LAB_10824b308:
              lVar42 = 0;
            }
            else {
              uVar49 = CONCAT16(~-(sStack_3fa == 0),
                                (uint6)(CONCAT14(~-(sStack_3fc == 0),
                                                 (uint)(uint3)(((byte)~-(sStack_3fe == 0) & 1) <<
                                                              0x10)) & 0x1ffffffff)) &
                       0x1ffffffffffff;
              uVar10 = CONCAT16(~-((short)((ulong)uStack_3f0 >> 0x30) == 0),
                                (uint6)(CONCAT14(~-((short)((ulong)uStack_3f0 >> 0x20) == 0),
                                                 (uint)(CONCAT12(~-((short)((ulong)uStack_3f0 >>
                                                                           0x10) == 0),
                                                                 (ushort)(~-((short)uStack_3f0 == 0)
                                                                         & 1)) & 0x1ffff)) &
                                       0x1ffffffff)) & 0x1ffffffffffff;
              if (3 < (ushort)((short)uVar10 + (short)(uVar10 >> 0x10) + (short)(uVar49 >> 0x10) +
                               (short)(uVar10 >> 0x20) + (ushort)(byte)(uVar10 >> 0x30) +
                               (short)(uVar49 >> 0x20) + (ushort)(byte)(uVar49 >> 0x30) +
                              (ushort)(~-((short)uStack_3e8 == 0) & 1) +
                              (ushort)(~-((short)((ulong)uStack_3e8 >> 0x10) == 0) & 1) +
                              (ushort)(~-(sStack_3f8 == 0) & 1) + (ushort)(~-(sStack_3f6 == 0) & 1)
                              + (ushort)(~-((short)((ulong)uStack_3e8 >> 0x20) == 0) & 1) +
                                (ushort)(~-((short)((ulong)uStack_3e8 >> 0x30) == 0) & 1) +
                                (ushort)(~-(sStack_3f4 == 0) & 1) +
                                (ushort)(~-(sStack_3f2 == 0) & 1))) goto LAB_10824b308;
              lVar42 = 0x8c;
            }
            lVar30 = lVar40 + (int)lVar15;
            lVar33 = lVar13;
            if ((iVar47 < 0) ||
               ((long)(int)((int)lVar42 + (uint)uVar7) * (long)iVar53 + lVar30 * 0x100 <
                (long)uStack_460)) {
              lStack_408 = *(long *)(param_1 + 10);
              lStack_418 = lStack_408 + 0x113c;
              lStack_410 = lStack_408 + 0x1ea4;
              lStack_408 = lStack_408 + 0x5a48;
              uStack_420 = 3;
              auStack_430[0] = 0;
              iVar54 = param_1[((ulong)(uint)param_1[0x20] & 3) + 0x21];
              iVar52 = param_1[(long)(param_1[0x20] >> 2) + 0x2a];
              (*pcRam0000000113869fa0)(&uStack_400,auStack_430);
              iVar52 = iVar52 + iVar54;
              (*pcRam0000000113869f98)(iVar52,auStack_430);
              lVar30 = lVar30 * 0x100 + (lVar42 + iVar52 + (ulong)uVar7) * (long)iVar53;
              if ((iVar47 < 0) || (lVar30 < (long)uStack_460)) {
                uStack_4ac = (int)piVar14 << (ulong)(uVar23 & 0x1f);
                lVar33 = (long)param_1[0x20];
                uVar20 = CONCAT26(sStack_3fa,CONCAT24(sStack_3fc,CONCAT22(sStack_3fe,uStack_400)));
                auVar12._8_2_ = sStack_3f8;
                auVar12._0_8_ = uVar20;
                auVar12._10_2_ = sStack_3f6;
                auVar12._12_2_ = sStack_3f4;
                auVar12._14_2_ = sStack_3f2;
                auStack_398[lVar33 * 4 + 1] = auVar12._8_8_;
                auStack_398[lVar33 * 4] = uVar20;
                auStack_398[lVar33 * 4 + 3] = uStack_3e8;
                auStack_398[lVar33 * 4 + 2] = uStack_3f0;
                iVar47 = (int)lVar48;
                lVar33 = lVar41;
                lVar41 = lVar13;
                lStack_4d0 = (long)(int)lVar15;
                lStack_4c8 = lVar40;
                lStack_4c0 = lVar42 + iVar52;
                uStack_4b8 = (ulong)uVar7;
                uStack_460 = lVar30;
              }
            }
            lVar48 = lVar48 + 1;
            lVar13 = lVar33;
          } while (lVar48 != 10);
          lStack_3e0 = lStack_3e0 + lStack_4d0;
          lStack_3d8 = lStack_3d8 + lStack_4c8;
          lStack_3c8 = lStack_3c8 + lStack_4c0;
          uStack_3d0 = uStack_3d0 + uStack_4b8;
          uStack_80 = uStack_80 | uStack_4ac;
          lStack_3c0 = (uStack_4b8 + lStack_4c0) * (long)*(int *)(lVar29 + 0x524) +
                       (lStack_4d0 + lStack_4c8) * 0x100 + lStack_3c0;
          if ((param_2[4] <= lStack_3c0) ||
             (iVar46 = iVar46 + (int)uStack_4b8, *(int *)(lVar25 + 0x5c48) < iVar46)) {
            lVar38 = *(long *)(param_1 + 6);
            goto LAB_10824b970;
          }
          iVar52 = param_1[0x20];
          if (lVar41 != lVar38 + (ulong)*(ushort *)(&UNK_10df0ffba + (long)iVar52 * 2)) {
            (*pcRam0000000113869fb8)(lVar41);
            iVar52 = param_1[0x20];
          }
          *(char *)((long)puVar44 + (long)iVar52) = (char)iVar47;
          param_1[(long)(iVar52 >> 2) + 0x2a] = (uint)(uStack_4ac != 0);
          param_1[((ulong)(uint)param_1[0x20] & 3) + 0x21] = (uint)(uStack_4ac != 0);
          piVar26 = param_1;
          func_0x000108245870(param_1,lVar38);
        } while ((int)piVar26 != 0);
        param_2[1] = lStack_3d8;
        *param_2 = lStack_3e0;
        param_2[3] = lStack_3c8;
        param_2[2] = uStack_3d0;
        *(uint *)(param_2 + 0x6c) = uStack_80;
        param_2[4] = lStack_3c0;
        puVar27 = *(undefined4 **)(param_1 + 0x10);
        uVar23 = 5;
        do {
          *puVar27 = *puVar44;
          puVar27 = (undefined4 *)((long)puVar27 + (long)*(int *)(*(long *)(param_1 + 10) + 0x38));
          uVar23 = uVar23 - 1;
          puVar44 = puVar44 + 1;
        } while (1 < uVar23);
        **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xfc;
        auVar50 = *(undefined1 (*) [16])(param_1 + 4);
        lVar38 = auVar50._0_8_;
        auVar50 = NEON_ext(auVar50,auVar50,8,1);
        *(long *)(param_1 + 6) = auVar50._8_8_;
        *(long *)(param_1 + 4) = auVar50._0_8_;
        _memcpy(param_2 + 9,auStack_398,0x200);
      }
LAB_10824b970:
      lVar25 = *(long *)(param_1 + 10);
      pbVar43 = *(byte **)(param_1 + 0xc);
      lStack_498 = *(long *)(param_1 + 2);
    }
    lVar29 = 0;
    iVar46 = *(int *)(lVar25 + ((ulong)(*pbVar43 >> 5) & 3) * 0x2e8 + 0x520);
    plVar45 = (long *)(lVar38 + 0x10);
    uVar23 = 0;
    plVar21 = (long *)(*(long *)(param_1 + 4) + 0x10);
    *(undefined4 *)((long)param_2 + 0x35c) = 0xffffffff;
    lStack_438 = 0;
    lStack_440 = 0;
    lVar25 = 0x7fffffffffffff;
    lStack_458 = 0;
    uStack_460 = 0;
    plVar17 = plVar21;
    do {
      piVar26 = param_1;
      FUN_10824c818(param_1,&lStack_3e0,plVar45,lVar29);
      uStack_80 = (uint)piVar26;
      lVar38 = lStack_498 + 0x10;
      (*pcRam000000011386a020)(lVar38,plVar45);
      lStack_3e0 = (long)(int)lVar38;
      lStack_3d8 = 0;
      uStack_3d0 = (ulong)*(ushort *)(&UNK_10df0e050 + lVar29 * 2);
      piVar26 = param_1;
      func_0x000108240678(param_1,&lStack_3e0);
      lStack_3c8 = (long)(int)piVar26;
      lVar38 = lStack_3c8;
      if (lVar29 != 0) {
        lVar48 = 0;
        auVar51 = ZEXT216(0);
        do {
          uVar22 = *(undefined8 *)((long)alStack_198 + lVar48 + 8);
          uVar20 = *(undefined8 *)((long)alStack_198 + lVar48);
          uVar58 = *(undefined8 *)((long)alStack_198 + lVar48 + 0x18);
          uVar56 = *(undefined8 *)((long)alStack_198 + lVar48 + 0x10);
          uVar55 = CONCAT12(~-((short)((ulong)uVar56 >> 0x10) == 0),
                            (ushort)(~-((short)uVar56 == 0) & 1)) & 0x1ffff;
          uVar57 = CONCAT12(~-((short)((ulong)uVar58 >> 0x10) == 0),
                            (ushort)(~-((short)uVar58 == 0) & 1)) & 0x1ffff;
          iVar24 = auVar51._4_4_;
          iVar53 = auVar51._8_4_;
          iVar47 = auVar51._12_4_;
          auVar51._0_4_ =
               auVar51._0_4_ + (uint)(~-((short)((ulong)uVar20 >> 0x10) == 0) & 1) +
               (uVar55 & 0xffff) + (uint)(uVar55 >> 0x10);
          auVar51._4_4_ =
               iVar24 + (uint)(~-((short)((ulong)uVar20 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar20 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar56 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar56 >> 0x30) == 0) & 1);
          auVar51._8_4_ =
               iVar53 + (uint)(~-((short)uVar22 == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar22 >> 0x10) == 0) & 1) +
               (uVar57 & 0xffff) + (uint)(uVar57 >> 0x10);
          auVar51._12_4_ =
               iVar47 + (uint)(~-((short)((ulong)uVar22 >> 0x20) == 0) & 1) +
                        (uint)(~-((short)((ulong)uVar22 >> 0x30) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar58 >> 0x20) == 0) & 1) +
               (uint)(~-((short)((ulong)uVar58 >> 0x30) == 0) & 1);
          lVar48 = lVar48 + 0x20;
        } while ((int)lVar48 != 0x100);
        if (auVar51._0_4_ + auVar51._4_4_ + auVar51._8_4_ + auVar51._12_4_ < 3) {
          lVar38 = lStack_3c8 + 0x460;
        }
      }
      lVar48 = (uStack_3d0 + lVar38) * (long)iVar46 + (lStack_3d8 + lStack_3e0) * 0x100;
      if ((lVar29 == 0) || (plVar18 = plVar17, lVar48 < lVar25)) {
        lStack_438 = lStack_3d8;
        lStack_440 = lStack_3e0;
        *(int *)((long)param_2 + 0x35c) = (int)lVar29;
        param_2[0x62] = lStack_d0;
        param_2[0x61] = lStack_d8;
        param_2[100] = lStack_c0;
        param_2[99] = lStack_c8;
        param_2[0x66] = lStack_b0;
        param_2[0x65] = lStack_b8;
        param_2[0x68] = lStack_a0;
        param_2[0x67] = lStack_a8;
        param_2[0x5a] = lStack_110;
        param_2[0x59] = lStack_118;
        param_2[0x5c] = lStack_100;
        param_2[0x5b] = lStack_108;
        param_2[0x5e] = lStack_f0;
        param_2[0x5d] = lStack_f8;
        param_2[0x60] = lStack_e0;
        param_2[0x5f] = lStack_e8;
        param_2[0x52] = lStack_150;
        param_2[0x51] = lStack_158;
        param_2[0x54] = lStack_140;
        param_2[0x53] = lStack_148;
        param_2[0x56] = lStack_130;
        param_2[0x55] = lStack_138;
        param_2[0x58] = lStack_120;
        param_2[0x57] = lStack_128;
        param_2[0x4a] = alStack_198[1];
        param_2[0x49] = alStack_198[0];
        param_2[0x4c] = alStack_198[3];
        param_2[0x4b] = alStack_198[2];
        param_2[0x4e] = alStack_198[5];
        param_2[0x4d] = alStack_198[4];
        param_2[0x50] = lStack_160;
        param_2[0x4f] = alStack_198[6];
        uStack_460 = uStack_3d0;
        plVar18 = plVar45;
        lVar25 = lVar48;
        plVar45 = plVar17;
        uVar23 = uStack_80;
        lStack_458 = lVar38;
        if (*(long *)(param_1 + 0x58) != 0) {
          *(undefined4 *)((long)param_2 + 0x364) = uStack_7c;
          *(undefined2 *)(param_2 + 0x6d) = uStack_78;
        }
      }
      lVar29 = lVar29 + 1;
      plVar17 = plVar18;
    } while (lVar29 != 4);
    **(byte **)(param_1 + 0xc) =
         **(byte **)(param_1 + 0xc) & 0xf3 | (*(byte *)((long)param_2 + 0x35c) & 3) << 2;
    param_2[1] = param_2[1] + lStack_438;
    *param_2 = *param_2 + lStack_440;
    param_2[3] = param_2[3] + lStack_458;
    param_2[2] = param_2[2] + uStack_460;
    *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) | uVar23;
    param_2[4] = param_2[4] + lVar25;
    if (plVar18 != plVar21) {
      (*pcRam0000000113869fb0)();
    }
    lVar25 = *(long *)(param_1 + 0x58);
    if (lVar25 != 0) {
      lVar38 = 0;
      iVar46 = *param_1;
      bVar11 = true;
      do {
        bVar35 = bVar11;
        puVar2 = (undefined1 *)(lVar25 + (long)iVar46 * 4 + lVar38 * 2);
        puVar3 = (undefined1 *)((long)param_1 + lVar38 * 2 + 0x158);
        puVar4 = (undefined1 *)((long)param_2 + 0x364 + lVar38 * 3);
        *puVar3 = *puVar4;
        cVar8 = puVar4[2];
        uVar23 = cVar8 * 3;
        puVar3[1] = (char)(uVar23 >> 2);
        *puVar2 = puVar4[1];
        puVar2[1] = cVar8 - (char)((uVar23 & 0xfffc) >> 2);
        lVar38 = 1;
        bVar11 = false;
      } while (bVar35);
    }
    if (param_3 == 2) {
      param_1[0x52] = 1;
      if ((**(byte **)(param_1 + 0xc) & 3) == 1) {
        piVar26 = param_1;
        FUN_10824bf80(param_1,param_2,*(undefined8 *)(param_1 + 4),**(undefined1 **)(param_1 + 0x10)
                     );
        uVar23 = (uint)piVar26;
      }
      else {
        lVar25 = *(long *)(param_1 + 10);
        FUN_1082457cc(param_1);
        uVar23 = 0;
        do {
          uVar28 = param_1[0x20];
          uVar6 = *(undefined1 *)
                   (*(long *)(param_1 + 0x10) +
                   (long)(int)((uVar28 & 3) + ((int)uVar28 >> 2) * *(int *)(lVar25 + 0x38)));
          uVar7 = *(ushort *)(&UNK_10df0ffba + (long)(int)uVar28 * 2);
          lVar38 = *(long *)(param_1 + 2);
          lVar29 = *(long *)(param_1 + 4);
          (*pcRam0000000113869fd0)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1e));
          piVar26 = param_1;
          FUN_10824c6e4(param_1,param_2 + (long)param_1[0x20] * 4 + 9,lVar38 + (ulong)uVar7,
                        lVar29 + (ulong)uVar7,uVar6);
          uVar23 = (int)piVar26 << (ulong)(param_1[0x20] & 0x1f) | uVar23;
          piVar26 = param_1;
          func_0x000108245870(param_1,*(undefined8 *)(param_1 + 4));
        } while ((int)piVar26 != 0);
      }
      piVar26 = param_1;
      plVar21 = param_2;
      FUN_10824c818(param_1,param_2,*(long *)(param_1 + 4) + 0x10,
                    **(byte **)(param_1 + 0xc) >> 2 & 3);
      uVar23 = (uint)piVar26 | uVar23;
      *(uint *)(param_2 + 0x6c) = uVar23;
    }
    else {
      uVar23 = *(uint *)(param_2 + 0x6c);
    }
    goto LAB_10824be38;
  }
  bVar31 = **(byte **)(param_1 + 0xc);
  if (iVar46 < 2) {
    lStack_440 = *(long *)(*(long *)(param_1 + 10) + ((ulong)(bVar31 >> 5) & 3) * 0x2e8 + 0x540);
    lVar25 = 0x7fffffffffffff;
    lVar38 = 0x7fffffffffffff;
    if ((bVar31 & 3) == 1) goto LAB_10824b630;
LAB_10824b720:
    FUN_1082457cc(param_1);
    uStack_460 = 0;
    uVar23 = 0;
    puVar44 = (undefined4 *)((long)param_2 + 0x34c);
    do {
      lVar41 = *(long *)(param_1 + 2);
      uVar7 = *(ushort *)(&UNK_10df0ffba + (long)param_1[0x20] * 2);
      piVar26 = param_1;
      FUN_10824c670(param_1,puVar44);
      (*pcRam0000000113869fd0)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1e));
      lVar29 = 0;
      lVar48 = 0x7fffffffffffff;
      iVar24 = -1;
      do {
        uVar39 = lVar41 + (ulong)uVar7;
        (*pcRam000000011386a028)
                  (uVar39,*(long *)(param_1 + 8) + (ulong)*(ushort *)(&UNK_10df0ff96 + lVar29 * 2));
        lVar13 = (-(uVar39 >> 0x1f & 1) & 0xffffff0000000000 | (uVar39 & 0xffffffff) << 8) +
                 (ulong)*(ushort *)((long)piVar26 + lVar29 * 2) * 0xb;
        iVar53 = (int)lVar29;
        if (lVar48 <= lVar13) {
          iVar53 = iVar24;
        }
        if (lVar13 <= lVar48) {
          lVar48 = lVar13;
        }
        lVar29 = lVar29 + 1;
        iVar24 = iVar53;
      } while (lVar29 != 10);
      uStack_460 = uStack_460 + *(ushort *)((long)piVar26 + (long)iVar53 * 2);
      lVar29 = (long)param_1[0x20];
      *(char *)((long)puVar44 + lVar29) = (char)iVar53;
      lStack_440 = lVar48 + lStack_440;
      if (lVar38 <= lStack_440 || lVar25 < (long)uStack_460) goto LAB_10824bd50;
      piVar26 = param_1;
      FUN_10824c6e4(param_1,param_2 + lVar29 * 4 + 9,lVar41 + (ulong)uVar7,
                    *(long *)(param_1 + 6) + (ulong)*(ushort *)(&UNK_10df0ffba + lVar29 * 2),iVar53)
      ;
      uVar23 = (int)piVar26 << (ulong)(param_1[0x20] & 0x1f) | uVar23;
      piVar26 = param_1;
      func_0x000108245870(param_1,*(undefined8 *)(param_1 + 6));
    } while ((int)piVar26 != 0);
    puVar27 = *(undefined4 **)(param_1 + 0x10);
    uVar28 = 5;
    do {
      *puVar27 = *puVar44;
      puVar27 = (undefined4 *)((long)puVar27 + (long)*(int *)(*(long *)(param_1 + 10) + 0x38));
      uVar28 = uVar28 - 1;
      puVar44 = puVar44 + 1;
    } while (1 < uVar28);
    **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xfc;
    auVar50 = NEON_ext(*(undefined1 (*) [16])(param_1 + 4),*(undefined1 (*) [16])(param_1 + 4),8,1);
    *(long *)(param_1 + 6) = auVar50._8_8_;
    *(long *)(param_1 + 4) = auVar50._0_8_;
  }
  else {
    lStack_440 = *(long *)(*(long *)(param_1 + 10) + ((ulong)(bVar31 >> 5) & 3) * 0x2e8 + 0x540);
    lVar25 = (long)*(int *)(*(long *)(param_1 + 10) + 0x5c4c);
LAB_10824b630:
    lVar29 = 0;
    pbVar43 = *(byte **)(param_1 + 2);
    lVar48 = *(long *)(param_1 + 8);
    uVar23 = 0xffffffff;
    lVar38 = 0x7fffffffffffff;
    do {
      pbVar16 = pbVar43;
      (*pcRam000000011386a018)(pbVar43,lVar48 + (ulong)*(ushort *)(&UNK_10df0fca0 + lVar29 * 2));
      lVar41 = (-((ulong)pbVar16 >> 0x1f & 1) & 0xffffff0000000000 |
               ((ulong)pbVar16 & 0xffffffff) << 8) +
               (ulong)*(ushort *)(&UNK_10df0e058 + lVar29 * 2) * 0x6a;
      uVar28 = (uint)lVar29;
      if (lVar38 <= lVar41) {
        lVar41 = lVar38;
        uVar28 = uVar23;
      }
      if (lVar29 == 0 || (long)(ulong)*(ushort *)(&UNK_10df0e058 + lVar29 * 2) <= lVar25) {
        lVar38 = lVar41;
        uVar23 = uVar28;
      }
      lVar29 = lVar29 + 1;
    } while (lVar29 != 4);
    if ((*param_1 == 0) || (param_1[1] == 0)) {
      iVar24 = (uint)*pbVar43 * 0x1010101;
      lStack_3e0 = CONCAT44(lStack_3e0._4_4_,iVar24);
      iVar53 = 0x10;
      do {
        if ((((*(int *)pbVar43 != iVar24) || (*(int *)(pbVar43 + 4) != iVar24)) ||
            (*(int *)(pbVar43 + 8) != iVar24)) || (*(int *)(pbVar43 + 0xc) != iVar24))
        goto LAB_10824b6d0;
        pbVar43 = pbVar43 + 0x20;
        iVar53 = iVar53 + -1;
      } while (iVar53 != 0);
      piVar26 = *(int **)(param_1 + 0x10);
      iVar24 = 0;
      if (*param_1 != 0) {
        iVar24 = 2;
      }
      iVar53 = 4;
      do {
        *piVar26 = iVar24 * 0x1010101;
        piVar26 = (int *)((long)piVar26 + (long)*(int *)(*(long *)(param_1 + 10) + 0x38));
        iVar53 = iVar53 + -1;
      } while (iVar53 != 0);
      **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xfc | 1;
    }
    else {
LAB_10824b6d0:
      piVar26 = *(int **)(param_1 + 0x10);
      iVar24 = 4;
      do {
        *piVar26 = (uVar23 & 0xff) * 0x1010101;
        piVar26 = (int *)((long)piVar26 + (long)*(int *)(*(long *)(param_1 + 10) + 0x38));
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xfc | 1;
      if (1 < iVar46) goto LAB_10824b720;
    }
LAB_10824bd50:
    lStack_440 = lVar38;
    piVar26 = param_1;
    FUN_10824bf80(param_1,param_2,*(undefined8 *)(param_1 + 4),**(undefined1 **)(param_1 + 0x10));
    uVar23 = (uint)piVar26;
  }
  if (0 < iVar46) {
    lVar25 = 0;
    lVar29 = *(long *)(param_1 + 2);
    lVar38 = 0x7fffffffffffff;
    uVar28 = 0xffffffff;
    do {
      uVar39 = lVar29 + 0x10;
      (*pcRam000000011386a020)
                (uVar39,*(long *)(param_1 + 8) + (ulong)*(ushort *)(&UNK_10df0fca8 + lVar25 * 2));
      lVar48 = (-(uVar39 >> 0x1f & 1) & 0xffffff0000000000 | (uVar39 & 0xffffffff) << 8) +
               (ulong)*(ushort *)(&UNK_10df0e050 + lVar25 * 2) * 0x78;
      uVar32 = (uint)lVar25;
      if (lVar38 <= lVar48) {
        uVar32 = uVar28;
      }
      if (lVar48 <= lVar38) {
        lVar38 = lVar48;
      }
      lVar25 = lVar25 + 1;
      uVar28 = uVar32;
    } while (lVar25 != 4);
    **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xf3 | (byte)((uVar32 & 3) << 2);
  }
  piVar26 = param_1;
  plVar21 = param_2;
  FUN_10824c818(param_1,param_2,*(long *)(param_1 + 4) + 0x10,**(byte **)(param_1 + 0xc) >> 2 & 3);
  uVar23 = (uint)piVar26 | uVar23;
  *(uint *)(param_2 + 0x6c) = uVar23;
  param_2[4] = lStack_440;
LAB_10824be38:
  puVar19 = (ushort *)(ulong)(uVar23 == 0);
  bVar31 = 0x10;
  if (uVar23 != 0) {
    bVar31 = 0;
  }
  **(byte **)(param_1 + 0xc) = **(byte **)(param_1 + 0xc) & 0xef | bVar31;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar25 = 0;
    bVar11 = true;
    do {
      bVar35 = bVar11;
      bVar31 = (&UNK_10df0ff30)[lVar25 + ((ulong)plVar21 & 0xffffffff) * 2];
      uVar23 = 0;
      if (puVar19[lVar25] != 0) {
        uVar23 = 0x20000 / puVar19[lVar25];
      }
      puVar19[lVar25 + 0x10] = (ushort)uVar23;
      *(uint *)(puVar19 + lVar25 * 2 + 0x20) = (uint)bVar31 << 9;
      uVar28 = 0;
      if ((uVar23 & 0xffff) != 0) {
        uVar28 = ((uint)bVar31 << 9 ^ 0x1ffff) / (uVar23 & 0xffff);
      }
      *(uint *)(puVar19 + lVar25 * 2 + 0x40) = uVar28;
      lVar25 = 1;
      bVar11 = false;
    } while (bVar35);
    uVar7 = puVar19[1];
    uVar5 = *(undefined4 *)(puVar19 + 0x22);
    lVar25 = 0xe;
    puVar34 = puVar19 + 0x12;
    puVar36 = puVar19 + 0x44;
    do {
      puVar34[-0x10] = uVar7;
      *puVar34 = puVar19[0x11];
      *(undefined4 *)(puVar36 + -0x20) = uVar5;
      *(undefined4 *)puVar36 = *(undefined4 *)(puVar19 + 0x42);
      lVar25 = lVar25 + -1;
      puVar34 = puVar34 + 1;
      puVar36 = puVar36 + 2;
    } while (lVar25 != 0);
    lVar25 = 0;
    iVar46 = 0;
    do {
      if ((int)plVar21 == 0) {
        uVar7 = *puVar19;
        uVar37 = (ushort)((uint)uVar7 * (uint)(byte)(&UNK_10df0ff36)[lVar25] >> 0xb);
      }
      else {
        uVar37 = 0;
        uVar7 = *puVar19;
      }
      puVar19[0x60] = uVar37;
      iVar46 = (uint)uVar7 + iVar46;
      lVar25 = lVar25 + 1;
      puVar19 = puVar19 + 1;
    } while (lVar25 != 0x10);
    return (ushort *)(ulong)(iVar46 + 8U >> 4);
  }
  return puVar19;
}



/* Entry: 10824be98; end: 10824bf7f;  */

uint FUN_10824be98(ushort *param_1,uint param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  bool bVar12;
  
  lVar8 = 0;
  bVar6 = true;
  do {
    bVar12 = bVar6;
    bVar2 = (&UNK_10df0ff30)[lVar8 + (ulong)param_2 * 2];
    uVar4 = 0;
    if (param_1[lVar8] != 0) {
      uVar4 = 0x20000 / param_1[lVar8];
    }
    param_1[lVar8 + 0x10] = (ushort)uVar4;
    *(uint *)(param_1 + lVar8 * 2 + 0x20) = (uint)bVar2 << 9;
    uVar5 = 0;
    if ((uVar4 & 0xffff) != 0) {
      uVar5 = ((uint)bVar2 << 9 ^ 0x1ffff) / (uVar4 & 0xffff);
    }
    *(uint *)(param_1 + lVar8 * 2 + 0x40) = uVar5;
    lVar8 = 1;
    bVar6 = false;
  } while (bVar12);
  uVar3 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 0x22);
  lVar8 = 0xe;
  puVar9 = param_1 + 0x12;
  puVar10 = param_1 + 0x44;
  do {
    puVar9[-0x10] = uVar3;
    *puVar9 = param_1[0x11];
    *(undefined4 *)(puVar10 + -0x20) = uVar1;
    *(undefined4 *)puVar10 = *(undefined4 *)(param_1 + 0x42);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 2;
  } while (lVar8 != 0);
  lVar8 = 0;
  iVar7 = 0;
  do {
    if (param_2 == 0) {
      uVar3 = *param_1;
      uVar11 = (ushort)((uint)uVar3 * (uint)(byte)(&UNK_10df0ff36)[lVar8] >> 0xb);
    }
    else {
      uVar11 = 0;
      uVar3 = *param_1;
    }
    param_1[0x60] = uVar11;
    iVar7 = (uint)uVar3 + iVar7;
    lVar8 = lVar8 + 1;
    param_1 = param_1 + 1;
  } while (lVar8 != 0x10);
  return iVar7 + 8U >> 4;
}



/* Entry: 10824bf80; end: 10824c66f;  */

/* WARNING: Possible PIC construction at 0x00010824c0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010824c0d8) */
/* WARNING: Removing unreachable block (ram,0x00010824c104) */
/* WARNING: Removing unreachable block (ram,0x00010824c118) */

undefined *
FUN_10824bf80(long param_1,long param_2,undefined8 *param_3,int param_4,ulong param_5,long param_6,
             undefined8 param_7)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  byte *pbVar26;
  byte bVar27;
  long lVar28;
  long lVar29;
  byte *pbVar30;
  int iVar31;
  long *plVar32;
  ulong uVar33;
  bool bVar34;
  ulong uVar35;
  long lVar36;
  int *piVar37;
  undefined *puVar38;
  undefined8 *puVar39;
  uint uVar40;
  ushort *puVar41;
  ulong uVar42;
  long *plVar43;
  int *piVar44;
  long lVar45;
  int *piVar46;
  long lVar47;
  undefined8 uVar48;
  uint uStack_410;
  ulong uStack_408;
  long alStack_3f0 [8];
  byte abStack_3b0 [128];
  long lStack_330;
  long lStack_320;
  int *piStack_318;
  long lStack_310;
  int *piStack_308;
  undefined8 *puStack_300;
  long lStack_2f8;
  ushort *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined *puStack_2e0;
  int *piStack_2d8;
  undefined1 *puStack_2d0;
  undefined8 uStack_2c8;
  int *piStack_2c0;
  undefined8 *puStack_2b8;
  ushort *puStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [32];
  undefined8 auStack_270 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar47 = *(long *)(param_1 + 0x28);
  piVar46 = (int *)(*(long *)(param_1 + 0x20) +
                   (ulong)*(ushort *)(&UNK_10df0fca0 + (long)param_4 * 2));
  lVar36 = *(long *)(param_1 + 8);
  bVar27 = **(byte **)(param_1 + 0x30);
  uVar42 = 0xfffffffffffffffe;
  puVar39 = auStack_270;
  lVar45 = 0x113869000;
  puVar25 = (ushort *)&UNK_10df0ffba;
  puStack_2b8 = param_3;
  do {
    (*pcRam0000000113869ff8)(lVar36 + (ulong)*puVar25,(long)piVar46 + (ulong)*puVar25,puVar39);
    uVar42 = uVar42 + 2;
    puVar39 = puVar39 + 8;
    puVar25 = puVar25 + 2;
  } while (uVar42 < 0xe);
  lVar36 = lVar47 + ((ulong)(bVar27 >> 5) & 3) * 0x2e8;
  piStack_2c0 = piVar46;
  (*pcRam000000011386a000)(auStack_270,auStack_290);
  puVar11 = auStack_290;
  (*pcRam0000000113869fe8)(puVar11,param_2 + 0x28,lVar36 + 0x340);
  puVar38 = (undefined *)(ulong)(uint)((int)puVar11 << 0x18);
  lStack_2a0 = lVar36;
  if (*(int *)(param_1 + 0x148) == 0) {
    param_2 = param_2 + 0x48;
    uVar42 = 0xfffffffffffffffe;
    puVar39 = auStack_270;
    do {
      *(undefined2 *)(puVar39 + 4) = 0;
      *(undefined2 *)puVar39 = 0;
      puVar12 = puVar39;
      (*pcRam0000000113869fd8)(puVar39,param_2,lStack_2a0 + 0x260);
      uVar42 = uVar42 + 2;
      puVar38 = (undefined *)(ulong)((int)puVar12 << (ulong)((uint)uVar42 & 0x1f) | (uint)puVar38);
      param_2 = param_2 + 0x40;
      puVar39 = puVar39 + 8;
    } while (uVar42 < 0xe);
    puVar39 = auStack_270;
    (*pcRam0000000113869be8)(auStack_290,auStack_270);
    puVar12 = puStack_2b8;
    piVar44 = piStack_2c0;
    piVar37 = (int *)0xfffffffffffffffe;
    lVar36 = 0x11386a000;
    puVar25 = (ushort *)&UNK_10df0ffba;
    do {
      puVar41 = puVar25 + 2;
      lVar28 = (long)piVar44 + (ulong)*puVar25;
      puVar15 = (ushort *)((long)puVar12 + (ulong)*puVar25);
      iVar16 = 1;
      puVar14 = puVar39;
      (*pcRam000000011386a008)();
      uVar19 = (uint)param_7;
      piVar37 = (int *)((long)piVar37 + 2);
      puVar39 = puVar39 + 8;
      puVar25 = puVar41;
    } while (piVar37 < (int *)0xe);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar38;
    }
    uVar48 = 0x10824c200;
    ___stack_chk_fail();
  }
  else {
    lStack_2a8 = lVar47;
    FUN_108245590(param_1);
    lVar47 = 0;
    piVar46 = (int *)(param_1 + 0x84);
    piVar37 = (int *)(param_1 + 0xa8);
    uVar19 = *(uint *)(lVar36 + 0x530);
    puVar39 = (undefined8 *)(ulong)uVar19;
    puVar15 = (ushort *)(param_2 + 0x48);
    puStack_2b0 = puVar15;
    piVar44 = (int *)0x0;
    puVar14 = auStack_270;
    uStack_298 = 0;
    iVar16 = *piVar37 + *piVar46;
    param_6 = lStack_2a0 + 0x260;
    param_5 = 0;
    uVar48 = 0x10824c0d8;
    lVar28 = lStack_2a8;
    puVar41 = puVar15;
    lVar36 = lStack_2a0;
    puVar12 = puVar14;
    lVar45 = lStack_2a8;
  }
  lStack_320 = lVar47;
  piStack_318 = piVar46;
  lStack_310 = lVar45;
  piStack_308 = piVar44;
  puStack_300 = puVar12;
  lStack_2f8 = lVar36;
  puStack_2f0 = puVar41;
  puStack_2e8 = puVar39;
  puStack_2e0 = puVar38;
  piStack_2d8 = piVar37;
  puStack_2d0 = &stack0xfffffffffffffff0;
  uStack_2c8 = uVar48;
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar47 = lVar28 + (param_5 & 0xffffffff) * 0x108 + 0xe24;
  lVar45 = lVar28 + (param_5 & 0xffffffff) * 0x180 + 0x55c8;
  iVar17 = (int)param_5;
  bVar10 = iVar17 == 0;
  uVar42 = (ulong)bVar10;
  pbVar26 = &UNK_10df0c9b8;
  if (bVar10) {
    pbVar26 = &UNK_10df0c9b9;
  }
  bVar27 = *(byte *)(lVar47 + (ulong)*pbVar26 * 0x21 + (long)iVar16 * 0xb);
  uVar23 = 0xf;
  do {
    iVar31 = (int)*(short *)((long)puVar14 + (ulong)(byte)(&UNK_10df0ff66)[uVar23] * 2);
    uVar24 = uVar23;
    if ((uint)*(ushort *)(param_6 + 2) * (uint)*(ushort *)(param_6 + 2) >> 2 <
        (uint)(iVar31 * iVar31)) break;
    bVar1 = bVar10 < uVar23;
    uVar24 = -(uint)!bVar10;
    uVar23 = uVar23 - 1;
  } while (bVar1);
  uVar20 = *(ushort *)(&UNK_10df0c9ca + (ulong)bVar27 * 2);
  lVar36 = *(long *)(lVar45 + uVar42 * 0x18 + (long)iVar16 * 8);
  plVar32 = alStack_3f0;
  bVar1 = true;
  do {
    bVar34 = bVar1;
    if (iVar16 == 0) {
      uVar23 = (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~(uint)bVar27 & 0xff) * 2);
    }
    else {
      uVar23 = 0;
    }
    *plVar32 = (long)(int)uVar23 * (long)(int)uVar19;
    plVar32[1] = lVar36;
    plVar32 = alStack_3f0 + 2;
    bVar1 = false;
  } while (bVar34);
  if ((int)uVar24 < 0xf) {
    uVar24 = uVar24 + 1;
  }
  if ((int)uVar24 < (int)(uint)bVar10) {
    bVar27 = 0xff;
    uStack_410 = 0xffffffff;
    uStack_408 = 0xffffffff;
    bVar5 = 0xff;
    if (iVar17 == 0) goto LAB_10824c590;
LAB_10824c350:
    iVar16 = (int)uVar42;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[0] = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
  }
  else {
    lVar36 = (long)(int)(uint)uVar20 * (long)(int)uVar19;
    uStack_408 = 0xffffffff;
    uStack_410 = 0xffffffff;
    bVar27 = 0xff;
    plVar32 = alStack_3f0;
    plVar43 = alStack_3f0 + 4;
    do {
      plVar21 = plVar32;
      uVar35 = 0;
      uVar33 = (ulong)(byte)(&UNK_10df0ff66)[uVar42];
      uVar20 = *(ushort *)(param_6 + uVar33 * 2);
      sVar8 = *(short *)((long)puVar14 + uVar33 * 2);
      iVar16 = -(int)sVar8;
      if (-1 < sVar8) {
        iVar16 = (int)sVar8;
      }
      iVar16 = iVar16 + (uint)*(ushort *)(param_6 + 0xc0 + uVar33 * 2);
      uVar23 = iVar16 * (uint)*(ushort *)(param_6 + 0x20 + uVar33 * 2);
      uVar9 = uVar23 >> 0x11;
      uVar23 = uVar23 + 0x10000 >> 0x11;
      if (0x7fe < uVar23) {
        uVar23 = 0x7ff;
      }
      if (0x7fe < uVar9) {
        uVar9 = 0x7ff;
      }
      uVar3 = uVar42 + 1;
      bVar5 = (&UNK_10df0c9b9)[uVar42];
      bVar1 = true;
      do {
        bVar34 = bVar1;
        uVar4 = uVar35 + uVar9;
        uVar13 = (uint)uVar4;
        uVar40 = uVar13;
        if (1 < uVar13) {
          uVar40 = 2;
        }
        plVar32 = plVar43 + uVar35 * 2;
        plVar32[1] = *(long *)(lVar45 + uVar3 * 0x18 + (ulong)uVar40 * 8);
        if (uVar23 < uVar4) {
          *plVar32 = 0x7fffffffffffff;
        }
        else {
          uVar6 = *(ushort *)(&UNK_10df0ff76 + uVar33 * 2);
          uVar18 = (uint)uVar20;
          iVar31 = uVar13 * uVar18;
          if (0x42 < uVar13) {
            uVar13 = 0x43;
          }
          lVar29 = *plVar21 +
                   (long)(int)((uint)*(ushort *)(plVar21[1] + (ulong)uVar13 * 2) +
                              (uint)*(ushort *)(&UNK_10df0b9b8 + uVar4 * 2)) * (long)(int)uVar19;
          pbVar26 = abStack_3b0 + uVar35 * 4 + uVar42 * 8;
          lVar22 = plVar21[2] +
                   (long)(int)((uint)*(ushort *)(plVar21[3] + (ulong)uVar13 * 2) +
                              (uint)*(ushort *)(&UNK_10df0b9b8 + uVar4 * 2)) * (long)(int)uVar19;
          lVar28 = lVar22;
          if (lVar29 <= lVar22) {
            lVar28 = lVar29;
          }
          pbVar26[1] = (byte)((ushort)sVar8 >> 0xf);
          *(short *)(pbVar26 + 2) = (short)uVar4;
          lVar28 = lVar28 + (long)(int)((iVar16 * -2 + (uVar9 + (int)uVar35) * uVar18) * iVar31 *
                                       (uint)uVar6) * 0x100;
          *pbVar26 = lVar22 < lVar29;
          *plVar32 = lVar28;
          if ((uVar4 != 0) && (lVar28 < lVar36)) {
            if (uVar42 < 0xf) {
              uVar40 = (uint)*(ushort *)
                              (&UNK_10df0c9ca +
                              (ulong)*(byte *)(lVar47 + (ulong)bVar5 * 0x21 + (ulong)uVar40 * 0xb) *
                              2);
            }
            else {
              uVar40 = 0;
            }
            lVar28 = lVar28 + (long)(int)uVar40 * (long)(int)uVar19;
            if (lVar28 < lVar36) {
              uStack_410 = (uint)uVar42;
              lVar36 = lVar28;
              uStack_408 = uVar35;
              bVar27 = lVar22 < lVar29;
            }
          }
        }
        uVar35 = 1;
        bVar1 = false;
      } while (bVar34);
      plVar32 = plVar43;
      uVar42 = uVar3;
      plVar43 = plVar21;
    } while (uVar3 != uVar24 + 1);
    uVar42 = (ulong)(uint)bVar10;
    bVar5 = bVar27;
    if (iVar17 != 0) goto LAB_10824c350;
LAB_10824c590:
    bVar27 = bVar5;
    iVar16 = (int)uVar42;
    *(undefined8 *)((long)puVar14 + 10) = 0;
    *(undefined8 *)((long)puVar14 + 2) = 0;
    puVar14[3] = 0;
    *(undefined8 *)((long)puVar14 + 0x12) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
  }
  if (uStack_410 != 0xffffffff) {
    abStack_3b0
    [(-(uStack_408 >> 0x1f) & 0xfffffffc00000000 | uStack_408 << 2) + (long)(int)uStack_410 * 8] =
         bVar27;
    if (iVar16 <= (int)uStack_410) {
      uVar20 = 0;
      iVar17 = uStack_410 + 1;
      pbVar26 = abStack_3b0 + (ulong)uStack_410 * 8;
      puVar25 = puVar15 + uStack_410;
      pbVar30 = &UNK_10df0ff66 + uStack_410;
      do {
        pbVar2 = pbVar26 + (long)(int)uStack_408 * 4;
        bVar27 = *pbVar30;
        uVar7 = *(ushort *)(pbVar2 + 2);
        uVar6 = -uVar7;
        if (pbVar2[1] == 0) {
          uVar6 = uVar7;
        }
        *puVar25 = uVar6;
        uVar20 = uVar20 | uVar7;
        *(ushort *)((long)puVar14 + (ulong)bVar27 * 2) =
             *(short *)(param_6 + (ulong)bVar27 * 2) * uVar6;
        uStack_408 = (ulong)(char)*pbVar2;
        iVar17 = iVar17 + -1;
        pbVar26 = pbVar26 + -8;
        puVar25 = puVar25 + -1;
        pbVar30 = pbVar30 + -1;
      } while (iVar16 < iVar17);
      puVar38 = (undefined *)(ulong)(uVar20 != 0);
      goto LAB_10824c634;
    }
  }
  puVar38 = (undefined *)0x0;
LAB_10824c634:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_330) {
    ___stack_chk_fail();
    uVar19 = *(uint *)(puVar38 + 0x80);
    puVar39 = puVar14;
    uVar23 = uVar19;
    if ((uVar19 & 3) == 0) {
      puVar39 = *(undefined8 **)(puVar38 + 0x40);
      uVar23 = ((int)uVar19 >> 2) * *(int *)(*(long *)(puVar38 + 0x28) + 0x38);
    }
    if (uVar19 < 4) {
      pbVar26 = (byte *)(*(long *)(puVar38 + 0x40) +
                        (long)(int)((uVar19 & 3) - *(int *)(*(long *)(puVar38 + 0x28) + 0x38)));
    }
    else {
      pbVar26 = (byte *)((long)puVar14 + (long)(int)uVar19 + -4);
    }
    return &UNK_10df0e060 +
           (ulong)*(byte *)((long)puVar39 + (long)(int)uVar23 + -1) * 0x14 + (ulong)*pbVar26 * 200;
  }
  return puVar38;
}



/* Entry: 10824c670; end: 10824c6e3;  */

undefined * FUN_10824c670(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x38);
  uVar2 = *(uint *)(param_1 + 0x80);
  lVar3 = param_2;
  uVar5 = uVar2;
  if ((uVar2 & 3) == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    uVar5 = ((int)uVar2 >> 2) * iVar1;
  }
  if (uVar2 < 4) {
    pbVar4 = (byte *)(*(long *)(param_1 + 0x40) + (long)(int)((uVar2 & 3) - iVar1));
  }
  else {
    pbVar4 = (byte *)(param_2 + (int)uVar2 + -4);
  }
  return &UNK_10df0e060 + (ulong)*(byte *)(lVar3 + (int)uVar5 + -1) * 0x14 + (ulong)*pbVar4 * 200;
}



/* Entry: 10824c6e4; end: 10824c817;  */

undefined1 *
FUN_10824c6e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  short *psVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  short sVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  ushort auStack_1f0 [128];
  long lStack_f0;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  puVar9 = *(undefined1 **)(param_1 + 0x28);
  uVar6 = *(ushort *)(&UNK_10df0ff96 + (long)param_5 * 2);
  uVar22 = (ulong)(**(byte **)(param_1 + 0x30) >> 5) & 3;
  (*pcRam0000000113869ff0)(param_3,lVar4 + (ulong)uVar6,auStack_78);
  if (*(int *)(param_1 + 0x148) == 0) {
    puVar10 = auStack_78;
    (*pcRam0000000113869fe0)(puVar10,param_2,puVar9 + uVar22 * 0x2e8 + 0x260);
  }
  else {
    func_0x00010824c200(puVar9,auStack_78,param_2,
                        *(int *)(param_1 + (long)((int)*(uint *)(param_1 + 0x80) >> 2) * 4 + 0xa8) +
                        *(int *)(param_1 + ((ulong)*(uint *)(param_1 + 0x80) & 3) * 4 + 0x84),3,
                        puVar9 + uVar22 * 0x2e8 + 0x260,
                        *(undefined4 *)(puVar9 + uVar22 * 0x2e8 + 0x534));
    puVar10 = puVar9;
  }
  piVar11 = (int *)(lVar4 + (ulong)uVar6);
  puVar9 = auStack_78;
  iVar16 = 0;
  (*pcRam000000011386a008)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(piVar11 + 8);
  lVar20 = *(long *)(piVar11 + 10);
  uVar6 = *(ushort *)(&UNK_10df0fca8 + (long)iVar16 * 2);
  lVar19 = *(long *)(piVar11 + 2);
  bVar5 = **(byte **)(piVar11 + 0xc);
  uVar22 = 0xfffffffffffffffe;
  puVar12 = auStack_1f0;
  puVar13 = (ushort *)&UNK_10df0ffaa;
  do {
    (*pcRam0000000113869ff8)
              (lVar19 + 0x10 + (ulong)*puVar13,lVar4 + (ulong)uVar6 + (ulong)*puVar13,puVar12);
    uVar22 = uVar22 + 2;
    puVar12 = puVar12 + 0x20;
    puVar13 = puVar13 + 2;
  } while (uVar22 < 6);
  lVar20 = lVar20 + ((ulong)(bVar5 >> 5) & 3) * 0x2e8;
  lVar19 = *(long *)(piVar11 + 0x58);
  if (lVar19 != 0) {
    lVar23 = 0;
    iVar16 = *piVar11;
    bVar8 = true;
    do {
      bVar17 = bVar8;
      pcVar1 = (char *)(lVar19 + (long)iVar16 * 4 + lVar23 * 2);
      pcVar2 = (char *)((long)piVar11 + lVar23 * 2 + 0x158);
      puVar12 = auStack_1f0 + lVar23 * 0x40;
      *puVar12 = *puVar12 + (short)((uint)(*pcVar1 * 7 + *pcVar2 * 8) >> 3);
      FUN_10824ca98(puVar12,lVar20 + 0x420);
      puVar13 = auStack_1f0 + lVar23 * 0x40 + 0x10;
      *puVar13 = *puVar13 + (short)puVar12 + (short)((uint)(pcVar1[1] * 7) >> 3);
      FUN_10824ca98(puVar13,lVar20 + 0x420);
      puVar14 = auStack_1f0 + lVar23 * 0x40 + 0x20;
      *puVar14 = *puVar14 + (short)pcVar2[1] + (short)((uint)((int)puVar12 * 7) >> 3);
      FUN_10824ca98(puVar14,lVar20 + 0x420);
      puVar12 = auStack_1f0 + lVar23 * 0x40 + 0x30;
      *puVar12 = *puVar12 + (short)puVar14 + (short)((uint)((int)puVar13 * 7) >> 3);
      FUN_10824ca98(puVar12,lVar20 + 0x420);
      puVar10 = puVar9 + lVar23 * 3 + 0x364;
      *puVar10 = (char)puVar13;
      puVar10[1] = (char)puVar14;
      puVar10[2] = (char)puVar12;
      lVar23 = 1;
      bVar8 = false;
    } while (bVar17);
  }
  uVar24 = 0;
  puVar9 = puVar9 + 0x248;
  uVar22 = 0xfffffffffffffffe;
  puVar12 = auStack_1f0;
  do {
    puVar13 = puVar12;
    (*pcRam0000000113869fd8)(puVar12,puVar9,lVar20 + 0x420);
    uVar22 = uVar22 + 2;
    uVar24 = (int)puVar13 << (ulong)((uint)uVar22 & 0x1f) | uVar24;
    puVar9 = puVar9 + 0x40;
    puVar12 = puVar12 + 0x20;
  } while (uVar22 < 6);
  uVar22 = 0xfffffffffffffffe;
  puVar12 = auStack_1f0;
  puVar13 = (ushort *)&UNK_10df0ffaa;
  do {
    psVar15 = (short *)(lVar4 + (ulong)uVar6 + (ulong)*puVar13);
    puVar14 = puVar12;
    (*pcRam000000011386a008)(psVar15,puVar12,param_4 + (ulong)*puVar13,1);
    uVar22 = uVar22 + 2;
    puVar12 = puVar12 + 0x20;
    puVar13 = puVar13 + 2;
  } while (uVar22 < 6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return (undefined1 *)(ulong)(uVar24 << 0x10);
  }
  ___stack_chk_fail();
  sVar21 = *psVar15;
  iVar18 = (int)sVar21;
  iVar16 = -(int)sVar21;
  if (-1 < sVar21) {
    iVar16 = iVar18;
  }
  if (*(int *)(puVar14 + 0x40) < iVar16) {
    iVar7 = (*(int *)(puVar14 + 0x20) + (uint)puVar14[0x10] * iVar16 >> 0x11) * (uint)*puVar14;
    iVar16 = iVar16 - iVar7;
    iVar3 = -iVar7;
    if (-1 < iVar18) {
      iVar3 = iVar7;
    }
    sVar21 = (short)iVar3;
  }
  else {
    sVar21 = 0;
  }
  iVar3 = -iVar16;
  if (-1 < iVar18) {
    iVar3 = iVar16;
  }
  *psVar15 = sVar21;
  return (undefined1 *)(ulong)(uint)(iVar3 >> 1);
}



/* Entry: 10824c818; end: 10824ca97;  */

int FUN_10824c818(int *param_1,long param_2,long param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  short *psVar13;
  bool bVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  short sVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ushort auStack_170 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  lVar17 = *(long *)(param_1 + 10);
  uVar7 = *(ushort *)(&UNK_10df0fca8 + (long)param_4 * 2);
  lVar16 = *(long *)(param_1 + 2);
  bVar6 = **(byte **)(param_1 + 0xc);
  uVar22 = 0xfffffffffffffffe;
  puVar10 = auStack_170;
  puVar11 = (ushort *)&UNK_10df0ffaa;
  do {
    (*pcRam0000000113869ff8)
              (lVar16 + 0x10 + (ulong)*puVar11,lVar5 + (ulong)uVar7 + (ulong)*puVar11,puVar10);
    uVar22 = uVar22 + 2;
    puVar10 = puVar10 + 0x20;
    puVar11 = puVar11 + 2;
  } while (uVar22 < 6);
  lVar17 = lVar17 + ((ulong)(bVar6 >> 5) & 3) * 0x2e8;
  lVar16 = *(long *)(param_1 + 0x58);
  if (lVar16 != 0) {
    lVar20 = 0;
    iVar18 = *param_1;
    bVar9 = true;
    do {
      bVar14 = bVar9;
      pcVar1 = (char *)(lVar16 + (long)iVar18 * 4 + lVar20 * 2);
      pcVar2 = (char *)((long)param_1 + lVar20 * 2 + 0x158);
      puVar10 = auStack_170 + lVar20 * 0x40;
      *puVar10 = *puVar10 + (short)((uint)(*pcVar1 * 7 + *pcVar2 * 8) >> 3);
      FUN_10824ca98(puVar10,lVar17 + 0x420);
      puVar11 = auStack_170 + lVar20 * 0x40 + 0x10;
      *puVar11 = *puVar11 + (short)puVar10 + (short)((uint)(pcVar1[1] * 7) >> 3);
      FUN_10824ca98(puVar11,lVar17 + 0x420);
      puVar12 = auStack_170 + lVar20 * 0x40 + 0x20;
      *puVar12 = *puVar12 + (short)pcVar2[1] + (short)((uint)((int)puVar10 * 7) >> 3);
      FUN_10824ca98(puVar12,lVar17 + 0x420);
      puVar10 = auStack_170 + lVar20 * 0x40 + 0x30;
      *puVar10 = *puVar10 + (short)puVar12 + (short)((uint)((int)puVar11 * 7) >> 3);
      FUN_10824ca98(puVar10,lVar17 + 0x420);
      puVar3 = (undefined1 *)(param_2 + 0x364 + lVar20 * 3);
      *puVar3 = (char)puVar11;
      puVar3[1] = (char)puVar12;
      puVar3[2] = (char)puVar10;
      lVar20 = 1;
      bVar9 = false;
    } while (bVar14);
  }
  uVar21 = 0;
  param_2 = param_2 + 0x248;
  uVar22 = 0xfffffffffffffffe;
  puVar10 = auStack_170;
  do {
    puVar11 = puVar10;
    (*pcRam0000000113869fd8)(puVar10,param_2,lVar17 + 0x420);
    uVar22 = uVar22 + 2;
    uVar21 = (int)puVar11 << (ulong)((uint)uVar22 & 0x1f) | uVar21;
    param_2 = param_2 + 0x40;
    puVar10 = puVar10 + 0x20;
  } while (uVar22 < 6);
  uVar22 = 0xfffffffffffffffe;
  puVar10 = auStack_170;
  puVar11 = (ushort *)&UNK_10df0ffaa;
  do {
    psVar13 = (short *)(lVar5 + (ulong)uVar7 + (ulong)*puVar11);
    puVar12 = puVar10;
    (*pcRam000000011386a008)(psVar13,puVar10,param_3 + (ulong)*puVar11,1);
    uVar22 = uVar22 + 2;
    puVar10 = puVar10 + 0x20;
    puVar11 = puVar11 + 2;
  } while (uVar22 < 6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar21 << 0x10;
  }
  ___stack_chk_fail();
  sVar19 = *psVar13;
  iVar15 = (int)sVar19;
  iVar18 = -(int)sVar19;
  if (-1 < sVar19) {
    iVar18 = iVar15;
  }
  if (*(int *)(puVar12 + 0x40) < iVar18) {
    iVar8 = (*(int *)(puVar12 + 0x20) + (uint)puVar12[0x10] * iVar18 >> 0x11) * (uint)*puVar12;
    iVar18 = iVar18 - iVar8;
    iVar4 = -iVar8;
    if (-1 < iVar15) {
      iVar4 = iVar8;
    }
    sVar19 = (short)iVar4;
  }
  else {
    sVar19 = 0;
  }
  iVar4 = -iVar18;
  if (-1 < iVar15) {
    iVar4 = iVar18;
  }
  *psVar13 = sVar19;
  return iVar4 >> 1;
}



/* Entry: 10824ca98; end: 10824caef;  */

int FUN_10824ca98(short *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  sVar5 = *param_1;
  iVar3 = (int)sVar5;
  iVar4 = -(int)sVar5;
  if (-1 < sVar5) {
    iVar4 = iVar3;
  }
  if (*(int *)(param_2 + 0x40) < iVar4) {
    iVar2 = (*(int *)(param_2 + 0x20) + (uint)param_2[0x10] * iVar4 >> 0x11) * (uint)*param_2;
    iVar4 = iVar4 - iVar2;
    iVar1 = -iVar2;
    if (-1 < iVar3) {
      iVar1 = iVar2;
    }
    sVar5 = (short)iVar1;
  }
  else {
    sVar5 = 0;
  }
  iVar1 = -iVar4;
  if (-1 < iVar3) {
    iVar1 = iVar4;
  }
  *param_1 = sVar5;
  return iVar1 >> 1;
}



/* Entry: 10824caf0; end: 10824cb63;  */

void FUN_10824caf0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  _free(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar1 = 0;
    puVar2 = (undefined8 *)(param_1 + 0x80);
    do {
      _free(*puVar2);
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      lVar1 = lVar1 + 1;
      puVar2 = puVar2 + 6;
    } while (lVar1 < *(int *)(param_1 + 0x3c));
  }
  return;
}



/* Entry: 10824cb64; end: 10824d437;  */

void FUN_10824cb64(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined1 uStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x4c);
  puVar26 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0xfffffff800000000;
  *puVar26 = 0xfe;
  lVar24 = *(long *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0x3c);
  iVar11 = *(int *)(param_1 + 0x218);
  lVar31 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar20 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34) * 7;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (uVar20 + 7 < 0xf) {
LAB_10824cc00:
    iVar11 = iVar11 + 0x13;
    iVar8 = 0;
    if (iVar10 != 0) {
      iVar8 = 0x13 / iVar10;
    }
    FUN_1082542f8(puVar26,0);
    FUN_1082542f8(puVar26,0);
    lVar18 = param_1 + 0xe20;
    iVar10 = *(int *)(param_1 + 0x20);
    FUN_1082542f8(puVar26,1 < iVar10);
    if (1 < iVar10) {
      FUN_1082542f8(puVar26,*(undefined4 *)(param_1 + 0x24));
      FUN_1082542f8(puVar26,1);
      FUN_1082542f8(puVar26,1);
      lVar25 = 0;
      do {
        FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0x508 + lVar25),7);
        lVar25 = lVar25 + 0x2e8;
      } while (lVar25 != 0xba0);
      lVar25 = 0;
      do {
        FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0x50c + lVar25),6);
        lVar25 = lVar25 + 0x2e8;
      } while (lVar25 != 0xba0);
      if (*(int *)(param_1 + 0x24) != 0) {
        lVar25 = 0;
        do {
          cVar6 = *(char *)(lVar18 + lVar25);
          FUN_1082542f8(puVar26,cVar6 != -1);
          if (cVar6 != -1) {
            bVar7 = *(byte *)(lVar18 + lVar25);
            uVar20 = 0x80;
            do {
              FUN_1082542f8(puVar26,uVar20 & bVar7);
              bVar9 = 1 < uVar20;
              uVar20 = uVar20 >> 1;
            } while (bVar9);
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 != 3);
      }
    }
    iVar10 = *(int *)(param_1 + 0x1c);
    FUN_1082542f8(puVar26,*(undefined4 *)(param_1 + 0x10));
    uVar20 = *(uint *)(param_1 + 0x14);
    uVar27 = 0x20;
    do {
      FUN_1082542f8(puVar26,uVar27 & uVar20);
      bVar9 = 1 < uVar27;
      uVar27 = uVar27 >> 1;
    } while (bVar9);
    uVar20 = *(uint *)(param_1 + 0x18);
    uVar27 = 4;
    do {
      FUN_1082542f8(puVar26,uVar27 & uVar20);
      bVar9 = 1 < uVar27;
      uVar27 = uVar27 >> 1;
    } while (bVar9);
    FUN_1082542f8(puVar26,iVar10 != 0);
    if ((iVar10 != 0) &&
       (iVar10 = *(int *)(param_1 + 0x1c), FUN_1082542f8(puVar26,iVar10 != 0), iVar10 != 0)) {
      FUN_1082542f8(puVar26,0);
      FUN_1082542f8(puVar26,0);
      FUN_1082542f8(puVar26,0);
      FUN_1082542f8(puVar26,0);
      FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0x1c),6);
      FUN_1082542f8(puVar26,0);
      FUN_1082542f8(puVar26,0);
      FUN_1082542f8(puVar26,0);
    }
    iVar10 = *(int *)(param_1 + 0x3c);
    uVar20 = 3;
    if (iVar10 != 8) {
      uVar20 = (uint)(iVar10 == 2);
    }
    uVar27 = 2;
    if (iVar10 != 4) {
      uVar27 = uVar20;
    }
    uVar20 = 2;
    do {
      FUN_1082542f8(puVar26,uVar20 & uVar27);
      bVar9 = 1 < uVar20;
      uVar20 = uVar20 >> 1;
    } while (bVar9);
    uVar20 = *(uint *)(param_1 + 0xe00);
    uVar27 = 0x40;
    do {
      FUN_1082542f8(puVar26,uVar27 & uVar20);
      bVar9 = 1 < uVar27;
      uVar27 = uVar27 >> 1;
    } while (bVar9);
    FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0xe0c),4);
    FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0xe10),4);
    FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0xe14),4);
    FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0xe18),4);
    FUN_108254370(puVar26,*(undefined4 *)(param_1 + 0xe1c),4);
    FUN_1082542f8(puVar26,0);
    func_0x00010824e2d8(puVar26,lVar18);
    lVar32 = *(long *)(param_1 + 0x58);
    uVar20 = *(uint *)(param_1 + 0x48);
    iVar10 = *(int *)(param_1 + 0x4c);
    func_0x00010824dff0(param_1);
    FUN_1082544a8(puVar26);
    lVar25 = *(long *)(param_1 + 8);
    lVar18 = *(long *)(lVar25 + 0x80);
    if (lVar18 != 0) {
      iVar5 = *(int *)(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar4 = *(int *)(param_1 + 0x4c);
      lVar32 = (long)iVar10 + (lVar32 + (ulong)uVar20) * 8 + 8;
      *(int *)(lVar18 + 0x24) =
           (int)(lVar32 + (lVar31 + (ulong)uVar1) * -8 + (long)(int)~uVar3 >> 3);
      *(int *)(lVar18 + 0x28) = iVar5 + iVar2 + (int)((iVar4 - lVar32) + 0xfU >> 3);
      *(undefined4 *)(lVar18 + 0x8c) = *(undefined4 *)(param_1 + 0x228);
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar28 = *(ulong *)(param_1 + 0x58);
      uVar1 = *(uint *)(param_1 + 0x3c);
      uVar21 = (ulong)uVar1;
      uVar19 = uVar28 + (long)(int)(uVar1 * 3 + -3) + 10;
      if (0 < (int)uVar1) {
        plVar13 = (long *)(param_1 + 0x88);
        do {
          uVar19 = *plVar13 + uVar19;
          uVar21 = uVar21 - 1;
          plVar13 = plVar13 + 6;
        } while (uVar21 != 0);
      }
      lVar31 = (uVar19 & 1) + uVar19;
      lVar18 = 0xc;
      if (*(int *)(param_1 + 0x21c) != 0) {
        lVar18 = 0x1e;
      }
      uVar21 = lVar18 + lVar31;
      if (*(int *)(param_1 + 0x21c) != 0) {
        uVar21 = uVar21 + (*(uint *)(param_1 + 0x228) + (*(uint *)(param_1 + 0x228) & 1) + 8);
      }
      if (uVar21 < 0xffffffff) {
        uVar30 = *(undefined8 *)(param_1 + 0x50);
        bStack_80 = 0x52;
        uStack_7f = 0x49;
        uStack_7e = 0x46;
        uStack_7d = 0x46;
        uStack_7c = (undefined1)uVar21;
        uStack_7b = (undefined1)(uVar21 >> 8);
        uStack_7a = (undefined1)(uVar21 >> 0x10);
        uStack_79 = (undefined1)(uVar21 >> 0x18);
        uStack_78 = 0x4557;
        uStack_76 = 0x5042;
        pbVar14 = &bStack_80;
        (**(code **)(lVar25 + 0x60))(pbVar14,0xc,lVar25);
        if ((int)pbVar14 == 0) {
LAB_10824d23c:
          uVar29 = 8;
LAB_10824d240:
          if (*(int *)(lVar25 + 0x88) == 0) {
            *(undefined4 *)(lVar25 + 0x88) = uVar29;
          }
LAB_10824d258:
          bVar9 = false;
        }
        else {
          if (*(int *)(param_1 + 0x21c) != 0) {
            lVar18 = *(long *)(param_1 + 8);
            bStack_80 = 0x56;
            uStack_7f = 0x50;
            uStack_7e = 0x38;
            uStack_7d = 0x58;
            uStack_7c = 10;
            uStack_7b = 0;
            uStack_7a = 0;
            uStack_79 = 0;
            uStack_78 = 0x10;
            uStack_76 = 0;
            iVar10 = *(int *)(lVar18 + 8) + -1;
            uStack_74 = (undefined1)iVar10;
            uStack_73 = (undefined1)((uint)iVar10 >> 8);
            uStack_72 = (undefined1)((uint)iVar10 >> 0x10);
            iVar10 = *(int *)(lVar18 + 0xc) + -1;
            uStack_71 = (undefined1)iVar10;
            uStack_70 = (undefined1)((uint)iVar10 >> 8);
            uStack_6f = (undefined1)((uint)iVar10 >> 0x10);
            pbVar14 = &bStack_80;
            (**(code **)(lVar18 + 0x60))(pbVar14,0x12);
            if ((int)pbVar14 != 0) {
              if (*(int *)(param_1 + 0x21c) == 0) goto LAB_10824d10c;
              lVar18 = *(long *)(param_1 + 8);
              bStack_80 = 0x41;
              uStack_7f = 0x4c;
              uStack_7e = 0x50;
              uStack_7d = 0x48;
              uVar29 = *(undefined4 *)(param_1 + 0x228);
              uStack_7c = (undefined1)uVar29;
              uStack_7b = (undefined1)((uint)uVar29 >> 8);
              uStack_7a = (undefined1)((uint)uVar29 >> 0x10);
              uStack_79 = (undefined1)((uint)uVar29 >> 0x18);
              pbVar14 = &bStack_80;
              (**(code **)(lVar18 + 0x60))(pbVar14,8,lVar18);
              if ((int)pbVar14 != 0) {
                uVar15 = *(undefined8 *)(param_1 + 0x220);
                (**(code **)(lVar18 + 0x60))(uVar15,*(undefined4 *)(param_1 + 0x228),lVar18);
                if ((int)uVar15 != 0) {
                  if ((*(byte *)(param_1 + 0x228) & 1) != 0) {
                    uStack_81 = 0;
                    puVar16 = &uStack_81;
                    (**(code **)(lVar18 + 0x60))(puVar16,1,lVar18);
                    if ((int)puVar16 == 0) goto LAB_10824d23c;
                  }
                  goto LAB_10824d10c;
                }
              }
            }
            goto LAB_10824d23c;
          }
LAB_10824d10c:
          bStack_80 = 0x56;
          uStack_7f = 0x50;
          uStack_7e = 0x38;
          uStack_7d = 0x20;
          uStack_7c = (undefined1)lVar31;
          uStack_7b = (undefined1)((ulong)lVar31 >> 8);
          uStack_7a = (undefined1)((ulong)lVar31 >> 0x10);
          uStack_79 = (undefined1)((ulong)lVar31 >> 0x18);
          uVar29 = 8;
          pbVar14 = &bStack_80;
          (**(code **)(lVar25 + 0x60))(pbVar14,8,lVar25);
          if ((int)pbVar14 == 0) goto LAB_10824d240;
          if (uVar28 >> 0x13 != 0) {
            uVar29 = 6;
            goto LAB_10824d240;
          }
          uVar1 = *(int *)(param_1 + 0x2c) << 1 | (int)uVar28 << 5;
          bStack_80 = (byte)uVar1 | 0x10;
          uStack_7f = (undefined1)(uVar1 >> 8);
          uStack_7e = (undefined1)(uVar1 >> 0x10);
          uStack_7d = 0x9d;
          uStack_7c = 1;
          uStack_7b = 0x2a;
          uStack_7a = (undefined1)*(undefined4 *)(lVar25 + 8);
          uStack_79 = (undefined1)((uint)*(undefined4 *)(lVar25 + 8) >> 8);
          uStack_78 = (undefined2)*(undefined4 *)(lVar25 + 0xc);
          pbVar14 = &bStack_80;
          (**(code **)(lVar25 + 0x60))(pbVar14,10,lVar25);
          if ((int)pbVar14 == 0) goto LAB_10824d23c;
          (**(code **)(lVar24 + 0x60))(uVar30,uVar28,lVar24);
          if ((int)uVar30 == 0) goto LAB_10824d258;
          if (*(int *)(param_1 + 0x3c) < 2) {
LAB_10824d234:
            bVar9 = true;
          }
          else {
            uVar1 = *(int *)(param_1 + 0x3c) - 1;
            uVar28 = (ulong)uVar1;
            puVar22 = (ulong *)(param_1 + 0x88);
            puVar16 = &uStack_7e;
            do {
              uVar23 = *puVar22;
              if (uVar23 >> 0x18 != 0) {
                if (*(int *)(lVar24 + 0x88) != 0) goto LAB_10824d41c;
                uVar29 = 7;
                goto LAB_10824d42c;
              }
              puVar16[-2] = (char)uVar23;
              puVar16[-1] = (char)(uVar23 >> 8);
              *puVar16 = (char)(uVar23 >> 0x10);
              uVar28 = uVar28 - 1;
              puVar22 = puVar22 + 6;
              puVar16 = puVar16 + 3;
            } while (uVar28 != 0);
            pbVar14 = &bStack_80;
            (**(code **)(lVar24 + 0x60))(pbVar14,uVar1 * 3,lVar24);
            if ((int)pbVar14 != 0) goto LAB_10824d234;
            if (*(int *)(lVar24 + 0x88) == 0) {
              uVar29 = 8;
LAB_10824d42c:
              bVar9 = false;
              *(undefined4 *)(lVar24 + 0x88) = uVar29;
            }
            else {
LAB_10824d41c:
              bVar9 = false;
            }
          }
        }
        _free(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *puVar26 = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          lVar31 = 0;
          puVar26 = (undefined8 *)(param_1 + 0x70);
          do {
            uVar30 = puVar26[2];
            if (puVar26[3] == 0) {
LAB_10824d2ac:
              _free(uVar30);
              puVar26[3] = 0;
              puVar26[2] = 0;
              puVar26[5] = 0;
              puVar26[4] = 0;
              puVar26[1] = 0;
              *puVar26 = 0;
              if (bVar9) {
                if (iVar8 != 0) {
                  iVar10 = *(int *)(param_1 + 0x218) + iVar8;
                  *(int *)(param_1 + 0x218) = iVar10;
                  if ((*(code **)(lVar24 + 0x90) != (code *)0x0) &&
                     ((**(code **)(lVar24 + 0x90))(iVar10,lVar24), iVar10 == 0)) {
                    if (*(int *)(lVar24 + 0x88) == 0) {
                      bVar9 = false;
                      *(undefined4 *)(lVar24 + 0x88) = 10;
                    }
                    else {
                      bVar9 = false;
                    }
                    goto LAB_10824d2fc;
                  }
                }
                bVar9 = true;
              }
            }
            else {
              if (bVar9) {
                (**(code **)(lVar24 + 0x60))(uVar30,puVar26[3],lVar24);
                bVar9 = (int)uVar30 != 0;
                uVar30 = puVar26[2];
                goto LAB_10824d2ac;
              }
              _free();
              puVar26[3] = 0;
              puVar26[2] = 0;
              puVar26[5] = 0;
              puVar26[4] = 0;
              puVar26[1] = 0;
              *puVar26 = 0;
            }
LAB_10824d2fc:
            lVar31 = lVar31 + 1;
            puVar26 = puVar26 + 6;
          } while (lVar31 < *(int *)(param_1 + 0x3c));
        }
        if ((bVar9) && ((uVar19 & 1) != 0)) {
          bStack_80 = 0;
          pbVar14 = &bStack_80;
          (**(code **)(lVar24 + 0x60))(pbVar14,1,lVar24);
          bVar9 = (int)pbVar14 != 0;
        }
        *(int *)(param_1 + 0x5c00) = (int)uVar21 + 8;
        if (bVar9) {
          if (*(int *)(param_1 + 0x218) != iVar11) {
            *(int *)(param_1 + 0x218) = iVar11;
            if ((*(code **)(lVar24 + 0x90) != (code *)0x0) &&
               ((**(code **)(lVar24 + 0x90))(iVar11,lVar24), iVar11 == 0)) {
              if (*(int *)(lVar24 + 0x88) == 0) {
                uVar29 = 10;
                goto LAB_10824d3e4;
              }
              goto LAB_10824d3a0;
            }
          }
          plVar13 = (long *)0x1;
          goto LAB_10824d3a4;
        }
        if (*(int *)(lVar24 + 0x88) != 0) goto LAB_10824d3a0;
        uVar29 = 8;
      }
      else {
        if (*(int *)(lVar24 + 0x88) != 0) goto LAB_10824d3a0;
        uVar29 = 9;
      }
LAB_10824d3e4:
      plVar13 = (long *)0x0;
      *(undefined4 *)(lVar24 + 0x88) = uVar29;
      goto LAB_10824d3a4;
    }
    if (*(int *)(lVar25 + 0x88) == 0) {
      plVar13 = (long *)0x0;
      *(undefined4 *)(lVar25 + 0x88) = 1;
      goto LAB_10824d3a4;
    }
  }
  else {
    uVar27 = uVar20 + 7;
    if (-1 < (int)uVar20) {
      uVar27 = uVar20;
    }
    puVar12 = puVar26;
    FUN_1082543fc(puVar26,(long)((ulong)uVar27 << 0x20) >> 0x23);
    if ((int)puVar12 != 0) goto LAB_10824cc00;
    if (*(int *)(*(long *)(param_1 + 8) + 0x88) == 0) {
      plVar13 = (long *)0x0;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x88) = 1;
      goto LAB_10824d3a4;
    }
  }
LAB_10824d3a0:
  plVar13 = (long *)0x0;
LAB_10824d3a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (plVar13 != (long *)0x0) {
    plVar17 = (long *)*plVar13;
    while (plVar17 != (long *)0x0) {
      plVar17 = (long *)*plVar17;
      _free();
    }
    iVar11 = *(int *)((long)plVar13 + 0x1c);
    plVar13[1] = (long)plVar13;
    plVar13[2] = 0;
    *plVar13 = 0;
    if (iVar11 < 0x2001) {
      iVar11 = 0x2000;
    }
    *(undefined4 *)(plVar13 + 3) = 0;
    *(int *)((long)plVar13 + 0x1c) = iVar11;
    *(undefined4 *)(plVar13 + 4) = 0;
  }
  return;
}



/* Entry: 10824d438; end: 10824d48f;  */

void FUN_10824d438(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      _free();
    }
    iVar1 = *(int *)((long)param_1 + 0x1c);
    param_1[1] = (long)param_1;
    param_1[2] = 0;
    *param_1 = 0;
    if (iVar1 < 0x2001) {
      iVar1 = 0x2000;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    *(int *)((long)param_1 + 0x1c) = iVar1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Entry: 10824d490; end: 10824dee7;  */

undefined8 FUN_10824d490(int param_1,int *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ushort uVar14;
  ushort uVar15;
  int iVar16;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  byte *pbVar23;
  uint uVar24;
  
  lVar13 = *(long *)(param_2 + 2);
  iVar3 = param_2[4];
  iVar19 = *param_2;
  uVar1 = param_2[1];
  uVar2 = (ulong)uVar1;
  iVar18 = ((iVar19 + iVar3 * 8) * 3 + param_1) * 0xb;
  puVar21 = (uint *)(*(long *)(param_2 + 8) + (long)iVar19 * 0x84 + (long)param_1 * 0x2c);
  iVar16 = *(int *)(param_3 + 0x18);
  if (iVar16 < 1) {
    lVar9 = param_3;
    FUN_10824df80();
    if ((int)lVar9 == 0) goto LAB_10824d530;
    iVar16 = *(int *)(param_3 + 0x18);
  }
  *(int *)(param_3 + 0x18) = iVar16 + -1;
  uVar14 = 0;
  if (-1 < (int)uVar1) {
    uVar14 = 0x8000;
  }
  *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar16 + -1) * 2) = (ushort)iVar18 | uVar14;
LAB_10824d530:
  uVar4 = *puVar21;
  uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
  if (uVar4 < 0xfffe0000) {
    uVar24 = uVar4;
  }
  iVar16 = 0x10000;
  if (-1 < (int)uVar1) {
    iVar16 = 0x10001;
  }
  *puVar21 = uVar24 + iVar16;
  if ((int)uVar1 < 0) {
    uVar12 = 0;
  }
  else {
    if (iVar19 < 0x10) {
      iVar3 = iVar3 * 8;
      lVar9 = (long)iVar19;
      do {
        uVar14 = *(ushort *)(lVar13 + lVar9 * 2);
        uVar1 = -(int)(short)uVar14;
        if (-1 < (short)uVar14) {
          uVar1 = (int)(short)uVar14;
        }
        iVar19 = *(int *)(param_3 + 0x18);
        sVar7 = (short)iVar18;
        if (iVar19 < 1) {
          lVar10 = param_3;
          FUN_10824df80();
          if ((int)lVar10 != 0) {
            iVar19 = *(int *)(param_3 + 0x18);
            goto LAB_10824d5a8;
          }
        }
        else {
LAB_10824d5a8:
          *(int *)(param_3 + 0x18) = iVar19 + -1;
          uVar15 = 0;
          if (uVar14 != 0) {
            uVar15 = 0x8000;
          }
          *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar19 + -1) * 2) = uVar15 | sVar7 + 1U;
        }
        lVar10 = lVar9 + 1;
        uVar4 = puVar21[1];
        uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
        if (uVar4 < 0xfffe0000) {
          uVar24 = uVar4;
        }
        iVar18 = 0x10000;
        if (uVar14 != 0) {
          iVar18 = 0x10001;
        }
        puVar21[1] = uVar24 + iVar18;
        if (uVar14 == 0) {
          iVar18 = (iVar3 + (uint)(byte)(&UNK_10df0c9b9)[lVar9]) * 0x21;
          puVar21 = (uint *)(*(long *)(param_2 + 8) +
                            (ulong)(uint)(byte)(&UNK_10df0c9b9)[lVar9] * 0x84);
        }
        else {
          iVar18 = *(int *)(param_3 + 0x18);
          if (iVar18 < 1) {
            lVar22 = param_3;
            FUN_10824df80();
            if ((int)lVar22 != 0) {
              iVar18 = *(int *)(param_3 + 0x18);
              goto LAB_10824d61c;
            }
          }
          else {
LAB_10824d61c:
            *(int *)(param_3 + 0x18) = iVar18 + -1;
            uVar15 = 0;
            if ((uVar1 & 0xfffe) != 0) {
              uVar15 = 0x8000;
            }
            *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) = uVar15 | sVar7 + 2U;
          }
          uVar4 = puVar21[2];
          uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
          if (uVar4 < 0xfffe0000) {
            uVar24 = uVar4;
          }
          bVar8 = 1 < (uVar1 & 0xffff);
          iVar18 = 0x10000;
          if (bVar8) {
            iVar18 = 0x10001;
          }
          puVar21[2] = uVar24 + iVar18;
          if (bVar8) {
            iVar18 = *(int *)(param_3 + 0x18);
            if (iVar18 < 1) {
              lVar22 = param_3;
              FUN_10824df80();
              if ((int)lVar22 != 0) {
                iVar18 = *(int *)(param_3 + 0x18);
                goto LAB_10824d6c4;
              }
            }
            else {
LAB_10824d6c4:
              *(int *)(param_3 + 0x18) = iVar18 + -1;
              uVar15 = 0;
              if (4 < (uVar1 & 0xffff)) {
                uVar15 = 0x8000;
              }
              *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) = uVar15 | sVar7 + 3U
              ;
            }
            uVar4 = puVar21[3];
            uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
            if (uVar4 < 0xfffe0000) {
              uVar24 = uVar4;
            }
            iVar18 = 0x10000;
            if (4 < (uVar1 & 0xffff)) {
              iVar18 = 0x10001;
            }
            puVar21[3] = uVar24 + iVar18;
            iVar18 = *(int *)(param_3 + 0x18);
            if ((uVar1 & 0xffff) < 5) {
              if (iVar18 < 1) {
                lVar22 = param_3;
                FUN_10824df80();
                if ((int)lVar22 != 0) {
                  iVar18 = *(int *)(param_3 + 0x18);
                  goto LAB_10824d740;
                }
              }
              else {
LAB_10824d740:
                *(int *)(param_3 + 0x18) = iVar18 + -1;
                uVar15 = 0;
                if ((uVar1 & 0xffff) != 2) {
                  uVar15 = 0x8000;
                }
                *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                     uVar15 | sVar7 + 4U;
              }
              uVar4 = puVar21[4];
              uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
              if (uVar4 < 0xfffe0000) {
                uVar24 = uVar4;
              }
              bVar8 = (uVar1 & 0xffff) != 2;
              iVar18 = 0x10000;
              if (bVar8) {
                iVar18 = 0x10001;
              }
              puVar21[4] = uVar24 + iVar18;
              if (bVar8) {
                iVar18 = *(int *)(param_3 + 0x18);
                if (iVar18 < 1) {
                  lVar22 = param_3;
                  FUN_10824df80();
                  if ((int)lVar22 != 0) {
                    iVar18 = *(int *)(param_3 + 0x18);
                    goto LAB_10824d7b8;
                  }
                }
                else {
LAB_10824d7b8:
                  *(int *)(param_3 + 0x18) = iVar18 + -1;
                  uVar15 = 0x8000;
                  if ((uVar1 & 0xffff) != 4) {
                    uVar15 = 0;
                  }
                  *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                       uVar15 | sVar7 + 5U;
                }
                uVar4 = puVar21[5];
                uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
                if (uVar4 < 0xfffe0000) {
                  uVar24 = uVar4;
                }
                iVar18 = 0x10001;
                if ((uVar1 & 0xffff) != 4) {
                  iVar18 = 0x10000;
                }
                puVar21[5] = uVar24 + iVar18;
              }
            }
            else {
              if (iVar18 < 1) {
                lVar22 = param_3;
                FUN_10824df80();
                if ((int)lVar22 != 0) {
                  iVar18 = *(int *)(param_3 + 0x18);
                  goto LAB_10824d82c;
                }
              }
              else {
LAB_10824d82c:
                *(int *)(param_3 + 0x18) = iVar18 + -1;
                uVar15 = 0;
                if (10 < (uVar1 & 0xffff)) {
                  uVar15 = 0x8000;
                }
                *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                     uVar15 | sVar7 + 6U;
              }
              uVar4 = puVar21[6];
              uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
              if (uVar4 < 0xfffe0000) {
                uVar24 = uVar4;
              }
              iVar18 = 0x10000;
              if (10 < (uVar1 & 0xffff)) {
                iVar18 = 0x10001;
              }
              puVar21[6] = uVar24 + iVar18;
              if ((uVar1 & 0xffff) < 0xb) {
                iVar18 = *(int *)(param_3 + 0x18);
                if (iVar18 < 1) {
                  lVar22 = param_3;
                  FUN_10824df80();
                  if ((int)lVar22 != 0) {
                    iVar18 = *(int *)(param_3 + 0x18);
                    goto LAB_10824d8a8;
                  }
                }
                else {
LAB_10824d8a8:
                  *(int *)(param_3 + 0x18) = iVar18 + -1;
                  uVar15 = 0;
                  if (6 < (uVar1 & 0xffff)) {
                    uVar15 = 0x8000;
                  }
                  *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                       uVar15 | sVar7 + 7U;
                }
                uVar4 = puVar21[7];
                uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
                if (uVar4 < 0xfffe0000) {
                  uVar24 = uVar4;
                }
                iVar18 = 0x10000;
                if (6 < (uVar1 & 0xffff)) {
                  iVar18 = 0x10001;
                }
                puVar21[7] = uVar24 + iVar18;
                iVar18 = *(int *)(param_3 + 0x18);
                if ((uVar1 & 0xffff) < 7) {
                  if (iVar18 < 1) {
                    lVar22 = param_3;
                    FUN_10824df80();
                    if ((int)lVar22 == 0) goto LAB_10824dc98;
                    iVar18 = *(int *)(param_3 + 0x18);
                  }
                  iVar18 = iVar18 + -1;
                  *(int *)(param_3 + 0x18) = iVar18;
                  uVar15 = 0xc09f;
                  if ((uVar1 & 0xffff) != 6) {
                    uVar15 = 0x409f;
                  }
                }
                else {
                  if (iVar18 < 1) {
                    lVar22 = param_3;
                    FUN_10824df80();
                    iVar18 = *(int *)(param_3 + 0x18);
                    if ((int)lVar22 != 0) goto LAB_10824d9f8;
                  }
                  else {
LAB_10824d9f8:
                    iVar18 = iVar18 + -1;
                    *(int *)(param_3 + 0x18) = iVar18;
                    uVar17 = 0xc0a5;
                    if ((uVar1 & 0xffff) < 9) {
                      uVar17 = 0x40a5;
                    }
                    *(undefined2 *)(*(long *)(param_3 + 0x10) + (long)iVar18 * 2) = uVar17;
                  }
                  if (iVar18 < 1) {
                    lVar22 = param_3;
                    FUN_10824df80();
                    if ((int)lVar22 == 0) goto LAB_10824dc98;
                    iVar18 = *(int *)(param_3 + 0x18);
                  }
                  iVar18 = iVar18 + -1;
                  *(int *)(param_3 + 0x18) = iVar18;
                  uVar15 = (ushort)(uVar1 << 0xf) ^ 0xc091;
                }
                *(ushort *)(*(long *)(param_3 + 0x10) + (long)iVar18 * 2) = uVar15;
              }
              else {
                uVar24 = uVar1 - 3;
                if (uVar24 < 0x10) {
                  iVar18 = *(int *)(param_3 + 0x18);
                  if (iVar18 < 1) {
                    lVar22 = param_3;
                    FUN_10824df80();
                    if ((int)lVar22 != 0) {
                      iVar18 = *(int *)(param_3 + 0x18);
                      goto LAB_10824d96c;
                    }
                  }
                  else {
LAB_10824d96c:
                    *(int *)(param_3 + 0x18) = iVar18 + -1;
                    *(short *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) = sVar7 + 8;
                  }
                  uVar4 = puVar21[8];
                  uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
                  if (uVar4 < 0xfffe0000) {
                    uVar24 = uVar4;
                  }
                  puVar21[8] = uVar24 + 0x10000;
                  iVar18 = *(int *)(param_3 + 0x18);
                  if (0 < iVar18) {
LAB_10824d9bc:
                    iVar18 = iVar18 + -1;
                    uVar15 = sVar7 + 9;
                    *(int *)(param_3 + 0x18) = iVar18;
                    uVar24 = 4;
                    iVar16 = -0xb;
                    iVar19 = 0x10000;
                    pbVar23 = &UNK_10df0eb58;
                    goto LAB_10824dc20;
                  }
                  lVar22 = param_3;
                  FUN_10824df80();
                  if ((int)lVar22 != 0) {
                    iVar18 = *(int *)(param_3 + 0x18);
                    goto LAB_10824d9bc;
                  }
                  uVar24 = 4;
                  iVar16 = -0xb;
                  iVar19 = 0x10000;
                  pbVar23 = &UNK_10df0eb58;
                }
                else {
                  if (uVar24 < 0x20) {
                    iVar18 = *(int *)(param_3 + 0x18);
                    if (iVar18 < 1) {
                      lVar22 = param_3;
                      FUN_10824df80();
                      if ((int)lVar22 != 0) {
                        iVar18 = *(int *)(param_3 + 0x18);
                        goto LAB_10824da74;
                      }
                    }
                    else {
LAB_10824da74:
                      *(int *)(param_3 + 0x18) = iVar18 + -1;
                      *(short *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) = sVar7 + 8;
                    }
                    uVar4 = puVar21[8];
                    uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
                    if (uVar4 < 0xfffe0000) {
                      uVar24 = uVar4;
                    }
                    puVar21[8] = uVar24 + 0x10000;
                    iVar18 = *(int *)(param_3 + 0x18);
                    if (iVar18 < 1) {
                      lVar22 = param_3;
                      FUN_10824df80();
                      if ((int)lVar22 != 0) {
                        iVar18 = *(int *)(param_3 + 0x18);
                        goto LAB_10824dac4;
                      }
                      uVar24 = 8;
                      iVar16 = -0x13;
                      iVar19 = 0x10001;
                      pbVar23 = &UNK_10df0eb5b;
                      goto LAB_10824dc28;
                    }
LAB_10824dac4:
                    iVar18 = iVar18 + -1;
                    *(int *)(param_3 + 0x18) = iVar18;
                    uVar15 = sVar7 + 9U | 0x8000;
                    uVar24 = 8;
                    iVar16 = -0x13;
                    iVar19 = 0x10001;
                    pbVar23 = &UNK_10df0eb5b;
                  }
                  else {
                    iVar18 = *(int *)(param_3 + 0x18);
                    if (uVar24 < 0x40) {
                      if (iVar18 < 1) {
                        lVar22 = param_3;
                        FUN_10824df80();
                        if ((int)lVar22 != 0) {
                          iVar18 = *(int *)(param_3 + 0x18);
                          goto LAB_10824db10;
                        }
                      }
                      else {
LAB_10824db10:
                        *(int *)(param_3 + 0x18) = iVar18 + -1;
                        *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                             sVar7 + 8U | 0x8000;
                      }
                      uVar4 = puVar21[8];
                      uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
                      if (uVar4 < 0xfffe0000) {
                        uVar24 = uVar4;
                      }
                      puVar21[8] = uVar24 + 0x10001;
                      iVar18 = *(int *)(param_3 + 0x18);
                      if (iVar18 < 1) {
                        lVar22 = param_3;
                        FUN_10824df80();
                        if ((int)lVar22 == 0) {
                          uVar24 = 0x10;
                          iVar16 = -0x23;
                          iVar19 = 0x10000;
                          pbVar23 = &UNK_10df0eb5f;
                          goto LAB_10824dc28;
                        }
                        iVar18 = *(int *)(param_3 + 0x18);
                      }
                      iVar18 = iVar18 + -1;
                      uVar15 = sVar7 + 10;
                      *(int *)(param_3 + 0x18) = iVar18;
                      uVar24 = 0x10;
                      iVar16 = -0x23;
                      iVar19 = 0x10000;
                      pbVar23 = &UNK_10df0eb5f;
                    }
                    else {
                      if (iVar18 < 1) {
                        lVar22 = param_3;
                        FUN_10824df80();
                        if ((int)lVar22 != 0) {
                          iVar18 = *(int *)(param_3 + 0x18);
                          goto LAB_10824dba4;
                        }
                      }
                      else {
LAB_10824dba4:
                        *(int *)(param_3 + 0x18) = iVar18 + -1;
                        *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                             sVar7 + 8U | 0x8000;
                      }
                      uVar4 = puVar21[8];
                      uVar24 = uVar4 + 1 >> 1 & 0x7fff7fff;
                      if (uVar4 < 0xfffe0000) {
                        uVar24 = uVar4;
                      }
                      puVar21[8] = uVar24 + 0x10001;
                      iVar18 = *(int *)(param_3 + 0x18);
                      if (iVar18 < 1) {
                        lVar22 = param_3;
                        FUN_10824df80();
                        if ((int)lVar22 != 0) {
                          iVar18 = *(int *)(param_3 + 0x18);
                          goto LAB_10824dbfc;
                        }
                        uVar24 = 0x400;
                        iVar16 = -0x43;
                        iVar19 = 0x10001;
                        pbVar23 = &UNK_10df0eb64;
                        goto LAB_10824dc28;
                      }
LAB_10824dbfc:
                      iVar18 = iVar18 + -1;
                      *(int *)(param_3 + 0x18) = iVar18;
                      uVar15 = sVar7 + 10U | 0x8000;
                      uVar24 = 0x400;
                      iVar16 = -0x43;
                      iVar19 = 0x10001;
                      pbVar23 = &UNK_10df0eb64;
                    }
                  }
LAB_10824dc20:
                  *(ushort *)(*(long *)(param_3 + 0x10) + (long)iVar18 * 2) = uVar15;
                }
LAB_10824dc28:
                uVar5 = puVar21[9];
                uVar4 = uVar5 + 1 >> 1 & 0x7fff7fff;
                if (uVar5 < 0xfffe0000) {
                  uVar4 = uVar5;
                }
                puVar21[9] = uVar4 + iVar19;
                do {
                  bVar6 = *pbVar23;
                  iVar18 = *(int *)(param_3 + 0x18);
                  if (iVar18 < 1) {
                    lVar22 = param_3;
                    FUN_10824df80();
                    if ((int)lVar22 != 0) {
                      iVar18 = *(int *)(param_3 + 0x18);
                      goto LAB_10824dc6c;
                    }
                  }
                  else {
LAB_10824dc6c:
                    *(int *)(param_3 + 0x18) = iVar18 + -1;
                    uVar15 = 0xc000;
                    if ((uVar24 & iVar16 + uVar1) == 0) {
                      uVar15 = 0x4000;
                    }
                    *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar18 + -1) * 2) =
                         uVar15 | bVar6;
                  }
                  bVar8 = 1 < uVar24;
                  pbVar23 = pbVar23 + 1;
                  uVar24 = uVar24 >> 1;
                } while (bVar8);
              }
            }
LAB_10824dc98:
            iVar18 = 0x16;
            lVar22 = 2;
          }
          else {
            iVar18 = 0xb;
            lVar22 = 1;
          }
          bVar6 = (&UNK_10df0c9b9)[lVar9];
          lVar20 = *(long *)(param_2 + 8);
          iVar19 = *(int *)(param_3 + 0x18);
          if (iVar19 < 1) {
            lVar11 = param_3;
            FUN_10824df80();
            if ((int)lVar11 != 0) {
              iVar19 = *(int *)(param_3 + 0x18);
              goto LAB_10824dccc;
            }
          }
          else {
LAB_10824dccc:
            *(int *)(param_3 + 0x18) = iVar19 + -1;
            *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar19 + -1) * 2) =
                 uVar14 & 0x8000 | 0x4080;
          }
          if (lVar10 == 0x10) break;
          iVar18 = (iVar3 + (uint)bVar6) * 0x21 + iVar18;
          iVar19 = *(int *)(param_3 + 0x18);
          if (iVar19 < 1) {
            lVar11 = param_3;
            FUN_10824df80();
            if ((int)lVar11 != 0) {
              iVar19 = *(int *)(param_3 + 0x18);
              goto LAB_10824dd20;
            }
          }
          else {
LAB_10824dd20:
            *(int *)(param_3 + 0x18) = iVar19 + -1;
            uVar14 = 0x8000;
            if ((long)uVar2 <= lVar9) {
              uVar14 = 0;
            }
            *(ushort *)(*(long *)(param_3 + 0x10) + (long)(iVar19 + -1) * 2) =
                 (ushort)iVar18 | uVar14;
          }
          puVar21 = (uint *)(lVar20 + (ulong)(uint)bVar6 * 0x84 + lVar22 * 0x2c);
          uVar24 = *puVar21;
          uVar1 = uVar24 + 1 >> 1 & 0x7fff7fff;
          if (uVar24 < 0xfffe0000) {
            uVar1 = uVar24;
          }
          iVar19 = 0x10001;
          if ((long)uVar2 <= lVar9) {
            iVar19 = 0x10000;
          }
          *puVar21 = uVar1 + iVar19;
          if ((long)uVar2 <= lVar9) break;
        }
        lVar9 = lVar10;
      } while (lVar10 != 0x10);
    }
    uVar12 = 1;
  }
  return uVar12;
}



/* Entry: 10824dee8; end: 10824df7f;  */

long FUN_10824dee8(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if ((long *)*param_1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    plVar5 = (long *)*param_1;
    do {
      plVar3 = (long *)*plVar5;
      if (plVar3 == (long *)0x0) {
        iVar4 = *(int *)(param_1 + 3);
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 < *(int *)((long)param_1 + 0x1c)) {
        lVar6 = (long)*(int *)((long)param_1 + 0x1c);
        do {
          uVar1 = *(ushort *)((long)plVar5 + lVar6 * 2 + 6);
          if ((uVar1 >> 0xe & 1) == 0) {
            uVar7 = (ulong)((uint)*(byte *)(param_2 + ((ulong)uVar1 & 0x3fff)) ^
                           (uint)(int)(short)uVar1 >> 0xf) & 0xff;
          }
          else {
            uVar7 = (ulong)(((uint)uVar1 ^ (int)((uint)uVar1 << 0x10) >> 0x1f) & 0xff);
          }
          lVar6 = lVar6 + -1;
          lVar2 = lVar2 + (ulong)*(ushort *)(&UNK_10df0c9ca + uVar7 * 2);
        } while (iVar4 < lVar6);
      }
      plVar5 = plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return lVar2;
}



/* Entry: 10824df80; end: 10824dfef;  */

undefined8 FUN_10824df80(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    puVar2 = (undefined8 *)((long)iVar1 * 2 + 8);
    if ((puVar2 < (undefined8 *)0x400000001) && (_malloc(), puVar2 != (undefined8 *)0x0)) {
      *puVar2 = 0;
      **(undefined8 **)(param_1 + 8) = puVar2;
      *(int *)(param_1 + 0x18) = iVar1;
      *(undefined8 **)(param_1 + 8) = puVar2;
      *(undefined8 **)(param_1 + 0x10) = puVar2 + 1;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  return 0;
}



/* Entry: 10824dff0; end: 10824ef83;  */

void FUN_10824dff0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_f78 [48];
  byte *pbStack_f48;
  byte *pbStack_f38;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108244df0(param_1,auStack_f78);
  do {
    pbVar15 = pbStack_f38;
    pbVar4 = pbStack_f48;
    if (*(int *)(param_1 + 0x24) != 0) {
      bVar7 = *pbStack_f48;
      uVar14 = (ulong)(bVar7 >> 6) & 1;
      FUN_108254188(param_1 + 0x40,uVar14,*(undefined1 *)(param_1 + 0xe20));
      FUN_108254188(param_1 + 0x40,bVar7 >> 5 & 1,*(undefined1 *)(param_1 + 0xe21 + uVar14));
    }
    if (*(int *)(param_1 + 0x5bcc) != 0) {
      FUN_108254188(param_1 + 0x40,*pbVar4 >> 4 & 1,*(undefined1 *)(param_1 + 0xe23));
    }
    bVar7 = *pbVar4;
    uVar13 = bVar7 & 3;
    FUN_108254188(param_1 + 0x40,(bVar7 & 3) != 0,0x91);
    if ((bVar7 & 3) == 0) {
      iVar2 = *(int *)(param_1 + 0x38);
      do {
        lVar10 = 0;
        bVar7 = pbVar15[-1];
        do {
          puVar1 = &UNK_10df10408 + (ulong)bVar7 * 9 + (ulong)pbVar15[lVar10 - iVar2] * 0x5a;
          bVar7 = pbVar15[lVar10];
          FUN_108254188(param_1 + 0x40,bVar7 != 0,*puVar1);
          if (bVar7 != 0) {
            FUN_108254188(param_1 + 0x40,bVar7 != 1,puVar1[1]);
            if ((bVar7 != 1) && (FUN_108254188(param_1 + 0x40,bVar7 != 2,puVar1[2]), bVar7 != 2)) {
              FUN_108254188(param_1 + 0x40,5 < bVar7,puVar1[3]);
              if (bVar7 < 6) {
                FUN_108254188(param_1 + 0x40,bVar7 != 3,puVar1[4]);
                if (bVar7 != 3) {
                  bVar8 = 4;
                  lVar12 = 5;
                  goto LAB_10824e20c;
                }
              }
              else {
                FUN_108254188(param_1 + 0x40,bVar7 != 6,puVar1[6]);
                if ((bVar7 != 6) && (FUN_108254188(param_1 + 0x40,bVar7 != 7,puVar1[7]), bVar7 != 7)
                   ) {
                  bVar8 = 8;
                  lVar12 = 8;
LAB_10824e20c:
                  FUN_108254188(param_1 + 0x40,bVar8 != bVar7,puVar1[lVar12]);
                }
              }
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
        pbVar15 = pbVar15 + iVar2;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 4);
    }
    else {
      bVar8 = *pbVar15;
      bVar5 = (bVar8 & 0xfd) == 1;
      bVar7 = 1;
      if (!bVar5) {
        bVar7 = 2;
      }
      uVar9 = 0x80;
      if (!bVar5) {
        uVar9 = 0xa3;
      }
      FUN_108254188(param_1 + 0x40,bVar5,0x9c);
      FUN_108254188(param_1 + 0x40,bVar7 == bVar8,uVar9);
    }
    bVar8 = *pbVar4 >> 2;
    bVar7 = bVar8 & 3;
    uVar14 = (ulong)((bVar8 & 3) != 0);
    FUN_108254188(param_1 + 0x40,uVar14,0x8e);
    if ((bVar8 & 3) != 0) {
      uVar14 = (ulong)(bVar7 != 2);
      FUN_108254188(param_1 + 0x40,uVar14,0x72);
      if (bVar7 != 2) {
        uVar14 = (ulong)(bVar7 != 3);
        FUN_108254188(param_1 + 0x40,uVar14,0xb7);
      }
    }
    puVar6 = auStack_f78;
    FUN_108245738();
    if ((int)puVar6 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      lVar10 = 0;
      do {
        lVar12 = 0;
        do {
          lVar16 = 0;
          lVar3 = lVar12 * 0x21;
          do {
            lVar17 = 0;
            lVar11 = lVar16 * 0xb;
            do {
              bVar7 = *(byte *)(uVar14 + 4 + lVar10 * 0x108 + lVar3 + lVar11 + lVar17);
              bVar8 = (&UNK_10df0ffe8)[lVar17 + lVar11 + lVar3 + lVar10 * 0x108];
              FUN_108254188(puVar6,bVar7 != bVar8,
                            (&UNK_10df1078c)[lVar17 + lVar11 + lVar3 + lVar10 * 0x108]);
              if (bVar7 != bVar8) {
                uVar13 = 0x80;
                do {
                  FUN_1082542f8(puVar6,uVar13 & bVar7);
                  bVar5 = 1 < uVar13;
                  uVar13 = uVar13 >> 1;
                } while (bVar5);
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0xb);
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 8);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
      iVar2 = *(int *)(uVar14 + 0x4dac);
      FUN_1082542f8(puVar6,iVar2);
      if (iVar2 != 0) {
        bVar7 = *(byte *)(uVar14 + 3);
        uVar13 = 0x80;
        do {
          FUN_1082542f8(puVar6,uVar13 & bVar7);
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
      }
      return;
    }
  } while( true );
}



/* Entry: 10824ef84; end: 10824efdf;  */

undefined8 * FUN_10824ef84(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x918);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(int *)(param_2 + 0x88) == 0) {
      *(undefined4 *)(param_2 + 0x88) = 1;
    }
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    FUN_108239cd8();
  }
  return puVar1;
}



/* Entry: 10824efe0; end: 10824f037;  */

void FUN_10824efe0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    _free(*(undefined8 *)(param_1 + 0x908));
    *(undefined4 *)(param_1 + 0x910) = 0;
    *(undefined8 *)(param_1 + 0x908) = 0;
    lVar1 = 0x868;
    do {
      FUN_10823e840(param_1 + lVar1);
      lVar1 = lVar1 + 0x28;
    } while (lVar1 != 0x908);
    _free(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10824f038; end: 10824f0d7;  */

void FUN_10824f038(long param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  
  uVar2 = *(int *)(*(long *)(param_1 + 8) + 0xc) * *(int *)(*(long *)(param_1 + 8) + 8);
  iVar1 = uVar2 + 0xe;
  if (0 < (int)uVar2) {
    iVar1 = uVar2 - 1;
  }
  if ((int)uVar2 < 0) {
    *(undefined8 *)(param_1 + 0x908) = 0;
  }
  else {
    lVar4 = (ulong)uVar2 << 2;
    _malloc();
    *(long *)(param_1 + 0x908) = lVar4;
    if (lVar4 != 0) {
      iVar1 = iVar1 >> 4;
      *(uint *)(param_1 + 0x910) = uVar2;
      if (iVar1 < 0x100) {
        iVar1 = 0xff;
      }
      lVar4 = 4;
      piVar3 = (int *)(param_1 + 0x868);
      do {
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[0] = 0;
        piVar3[1] = 0;
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[8] = 0;
        piVar3[9] = 0;
        *(int **)(piVar3 + 4) = piVar3 + 2;
        *piVar3 = iVar1 + 1;
        lVar4 = lVar4 + -1;
        piVar3 = piVar3 + 10;
      } while (lVar4 != 0);
    }
  }
  return;
}



/* Entry: 10824f0d8; end: 108250607;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10824f0d8(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  uint *puVar26;
  long lVar27;
  long *plVar28;
  uint *puVar29;
  undefined1 uVar30;
  undefined2 uVar31;
  int iVar32;
  int iVar33;
  uint *unaff_x24;
  code *pcVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  float fVar39;
  long lVar40;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined8 uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  int aiStack_1b58 [2];
  uint *puStack_1b50;
  uint *puStack_1b48;
  long *plStack_1b40;
  uint *puStack_1b38;
  uint *puStack_1b30;
  uint *puStack_1b28;
  undefined1 *puStack_1b20;
  undefined8 uStack_1b18;
  undefined8 uStack_1b10;
  uint *puStack_1b08;
  uint *puStack_1b00;
  uint *puStack_1af8;
  uint *puStack_1af0;
  uint *puStack_1ae8;
  uint *puStack_1ae0;
  int iStack_1ad4;
  long lStack_1ad0;
  int iStack_1ac4;
  uint *puStack_1ac0;
  long lStack_1ab8;
  long lStack_1ab0;
  ulong uStack_1aa8;
  uint *puStack_1aa0;
  uint uStack_1a94;
  uint uStack_1a90;
  int iStack_1a8c;
  long *plStack_1a88;
  long lStack_1a80;
  int iStack_1a74;
  long lStack_1a70;
  long lStack_1a68;
  uint uStack_1a5c;
  uint uStack_1a58;
  uint uStack_1a54;
  int iStack_1a50;
  uint uStack_1a4c;
  long lStack_1a48;
  undefined4 uStack_1a3c;
  long lStack_1a38;
  uint *puStack_1a30;
  undefined4 uStack_1a24;
  long lStack_1a20;
  uint uStack_1a14;
  ulong uStack_1a10;
  long *plStack_1a08;
  ulong uStack_1a00;
  long *plStack_19f8;
  int iStack_19f0;
  int iStack_19ec;
  uint *puStack_19e8;
  uint *puStack_19e0;
  uint *puStack_19d8;
  uint uStack_19d0;
  int iStack_19cc;
  uint *puStack_19c8;
  long *plStack_19c0;
  uint uStack_19b4;
  uint *puStack_19b0;
  uint uStack_19a4;
  ulong uStack_19a0;
  int *piStack_1998;
  long lStack_1990;
  undefined8 uStack_1988;
  long lStack_1980;
  long lStack_1978;
  long lStack_1970;
  long lStack_1968;
  long lStack_1960;
  uint uStack_1958;
  uint auStack_1954 [49];
  uint auStack_1890 [256];
  uint *puStack_1490;
  ulong uStack_1488;
  long lStack_1090;
  long lStack_1088;
  long lStack_1080;
  long lStack_1078;
  long lStack_1070;
  long lStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar36 = *param_1;
  puStack_19c8 = (uint *)param_1[1];
  plVar11 = (long *)param_1[2];
  plVar28 = (long *)param_1[3];
  uVar22 = *(uint *)(param_1 + 0x35);
  puVar29 = (uint *)(ulong)uVar22;
  iStack_19ec = *(int *)((long)param_1 + 0x1ac);
  lStack_1a20 = param_1[0x36];
  fVar39 = *(float *)(lVar36 + 4);
  iStack_19f0 = *(int *)(lVar36 + 8);
  uStack_19a4 = (uint)(iStack_19f0 == 0);
  uStack_1a5c = puStack_19c8[2];
  uStack_19b4 = puStack_19c8[3];
  puVar24 = (uint *)plVar11[1];
  puVar23 = (uint *)plVar11[2];
  uStack_1958 = 2;
  uVar21 = *(uint *)((long)plVar11 + 4);
  puVar26 = (uint *)(ulong)uVar21;
  lVar38 = *plVar11;
  uStack_1a24 = (undefined4)plVar11[4];
  lStack_1960 = 0;
  lStack_1978 = 0;
  lStack_1980 = 0;
  lStack_1968 = 0;
  lStack_1970 = 0;
  iVar32 = (int)&lStack_1980;
  puVar17 = (uint *)0x0;
  plStack_19f8 = param_1;
  FUN_108254570();
  if (iVar32 == 0) {
LAB_10824f1bc:
    uVar22 = puStack_19c8[0x22];
joined_r0x00010824f1c4:
    if (uVar22 == 0) {
      *(uint *)((long)puStack_19c8 + 0x88) = 1;
    }
  }
  else {
    if ((int)uVar22 < 2) {
      if (uVar22 == 1) goto LAB_10824f1dc;
    }
    else {
      puVar17 = (uint *)&lStack_1980;
      plVar10 = plVar11;
      FUN_108254630();
      if ((int)plVar10 == 0) goto LAB_10824f1bc;
LAB_10824f1dc:
      unaff_x24 = (uint *)0x0;
      iStack_1a74 = 0;
      uStack_1a58 = 0;
      if (uVar22 != 0) {
        uStack_1a58 = 0x61 / uVar22;
      }
      plStack_1a08 = plStack_19f8 + 4;
      lStack_1a68 = (long)puVar23 - (long)puVar24;
      lStack_1a70 = 0;
      lStack_1a80 = lStack_1a68 + (ulong)(uint)((int)(uVar21 + 7) >> 3);
      puStack_19b0 = (uint *)(plVar28 + 0x10d);
      puVar1 = (uint *)(plVar28 + 0xd);
      uStack_1a4c = uStack_1a58 >> 2;
      puStack_19d8 = (uint *)(plVar28 + 0x121);
      uStack_1a14 = uStack_1a58 - (uStack_1a58 >> 2);
      iStack_19cc = uStack_19b4 - 1;
      uStack_1a00 = 0xffffffffffffffff;
      uStack_19d0 = (uint)fVar39;
      plStack_1a88 = plVar28;
      lStack_1a48 = lVar36;
      puStack_1a30 = puVar29;
      plStack_19c0 = plVar11;
      do {
        plVar11 = plStack_19c0;
        puStack_19e0 = (uint *)((long)plStack_1a08 + (long)unaff_x24 * 0x1c);
        uVar21 = *puStack_19e0;
        uStack_1988 = 0;
        uVar22 = uVar21 & 0xfffffffe;
        *(uint *)(plVar28 + 0xb) = (uint)(uVar22 == 2);
        uVar21 = (uint)(uVar21 == 5 || (uVar21 & 0xfffffffd) == 1);
        *(uint *)((long)plVar28 + 0x5c) = uVar21;
        *(uint *)(plVar28 + 0xc) = (uint)(uVar22 == 4);
        if (iStack_19ec != 0) {
          uVar21 = 0;
        }
        uVar5 = 0;
        if (iStack_19f0 != 0 && uVar22 != 4) {
          uVar5 = uVar21;
        }
        *(undefined4 *)(plVar28 + 10) = 0;
        *(uint *)((long)plVar28 + 0x54) = uVar5;
        FUN_10823e840(puStack_19b0);
        FUN_10823e840(plVar28 + 0x112);
        puStack_19e8 = unaff_x24;
        if (*(int *)(lVar36 + 0x5c) < 100) {
          if ((int)plVar28[0xc] == 0) {
            if (*(int *)((long)plVar28 + 0x5c) != 0) {
              *(undefined4 *)(plVar28 + 3) = 0;
              goto LAB_10824f770;
            }
            puVar17 = (uint *)(ulong)uStack_1a5c;
            plVar10 = plVar28;
            FUN_108250abc(plVar28,puVar17,uStack_19b4);
            if ((int)plVar10 == 0) goto LAB_108250564;
            if ((int)plVar28[3] != 2) {
              puVar17 = (uint *)(ulong)*(uint *)(lVar36 + 0x5c);
              puVar15 = puStack_19c8;
              FUN_108245918(puStack_19c8,puVar17,plVar28[2]);
              if ((int)puVar15 == 0) {
                uVar22 = puStack_19c8[0x22];
                goto joined_r0x00010824f1c4;
              }
            }
            *(undefined4 *)(plVar28 + 3) = 2;
            unaff_x24 = (uint *)(ulong)uStack_1a58;
            if ((int)plVar28[0xc] == 0) goto LAB_10824f958;
          }
          else {
            *(undefined4 *)(plVar28 + 3) = 0;
          }
LAB_10824f308:
          uVar22 = puStack_19e0[1];
          puVar17 = (uint *)plVar28[1];
          FUN_108252fdc(uVar22,puVar17,plVar28 + 0x8d,*(undefined4 *)((long)plVar28 + 100),puVar1);
          puVar26 = (uint *)0xff00ff00;
          puVar29 = (uint *)0xff00ff;
          if (uVar22 == 0) {
            if (*(int *)(plVar28[1] + 0x88) == 0) {
              *(undefined4 *)(plVar28[1] + 0x88) = 1;
            }
          }
          else {
            uVar21 = *(uint *)((long)plVar28 + 100);
            uVar22 = uVar21 - 1;
            if (puVar1[(int)(uVar21 - 1)] != 0 || (int)uVar21 < 0x12) {
              uVar22 = uVar21;
            }
            puVar23 = (uint *)(ulong)uVar22;
            FUN_1082546a0(plVar11,1,1);
            FUN_1082546a0(plVar11,3,2);
            uVar22 = uVar22 - 1;
            puVar24 = (uint *)(ulong)uVar22;
            FUN_1082546a0(plVar11,puVar24,8);
            if (0 < (int)uVar22) {
              uVar16 = (long)puVar24 + 1;
              puVar17 = puVar1 + uVar22;
              puVar15 = (uint *)((long)&lStack_1090 + (long)puVar24 * 4);
              do {
                uVar22 = *puVar17;
                puVar17 = puVar17 + -1;
                *puVar15 = (uVar22 | 0xff0000) - (*puVar17 & 0xff00ff00) & 0xff00ff00 |
                           (uVar22 | 0xff00) - (*puVar17 & 0xff00ff) & 0xff00ff;
                uVar16 = uVar16 - 1;
                puVar15 = puVar15 + -1;
              } while (1 < uVar16);
            }
            lStack_1090 = CONCAT44(lStack_1090._4_4_,(int)plVar28[0xd]);
            uStack_1b10 = (uint *)plVar28[1];
            puStack_1b00 = &uStack_1958;
            puStack_1b08 = (uint *)CONCAT44(puStack_1b08._4_4_,uStack_1a4c);
            puVar17 = (uint *)&lStack_1090;
            FUN_108250bd8(plVar11,puVar17,puStack_19d8,puStack_19b0,puVar23,1,0x14,uStack_19a4);
            if ((int)plVar11 != 0) {
              puVar26 = (uint *)plVar28[1];
              uVar21 = puVar26[2];
              puVar29 = (uint *)(ulong)uVar21;
              iVar32 = *(int *)((long)plVar28 + 100);
              puVar23 = (uint *)(long)iVar32;
              uVar22 = 2;
              if (iVar32 < 3) {
                uVar22 = 3;
              }
              if (4 < iVar32) {
                uVar22 = (uint)((long)puVar23 < 0x11);
              }
              piStack_1998 = (int *)CONCAT44(piStack_1998._4_4_,uVar22);
              puVar17 = (uint *)(ulong)((uVar21 + (1 << (ulong)uVar22)) - 1 >> (ulong)uVar22);
              lStack_1990 = CONCAT44(lStack_1990._4_4_,puVar26[3]);
              plVar11 = plVar28;
              FUN_108250abc();
              if ((int)plVar11 != 0) {
                if (-1 < (int)uVar21) {
                  puVar24 = *(uint **)(puVar26 + 0x12);
                  uStack_1a10 = (ulong)puVar26[0x14];
                  lVar36 = plVar28[2];
                  uStack_19a0 = (ulong)*(uint *)(plVar28 + 8);
                  puVar15 = puVar29;
                  _malloc();
                  uVar16 = uStack_1a10;
                  if (puVar15 != (uint *)0x0) {
                    if (iVar32 < 4) {
                      if (0 < (int)lStack_1990) {
                        iVar32 = 0;
                        uVar30 = 0;
                        uVar22 = *puVar1;
                        puVar26 = (uint *)(uStack_1a10 * 4);
                        do {
                          if (uVar21 != 0) {
                            puVar17 = (uint *)0x0;
                            do {
                              uVar5 = puVar24[(long)puVar17];
                              if (uVar5 != uVar22) {
                                uVar22 = uVar5;
                                if (*puVar1 == uVar5) {
                                  uVar30 = 0;
                                }
                                else if (*(uint *)((long)plVar28 + 0x6c) == uVar5) {
                                  uVar30 = 1;
                                }
                                else {
                                  uVar30 = 2;
                                  if (*(uint *)(plVar28 + 0xe) != uVar5) {
                                    uVar30 = 3;
                                  }
                                }
                              }
                              *(undefined1 *)((long)puVar15 + (long)puVar17) = uVar30;
                              puVar17 = (uint *)((long)puVar17 + 1);
                            } while (puVar29 != puVar17);
                          }
                          (*pcRam000000011386a058)
                                    (puVar15,puVar29,(ulong)piStack_1998 & 0xffffffff,lVar36);
                          lVar36 = lVar36 + uStack_19a0 * 4;
                          iVar32 = iVar32 + 1;
                          puVar24 = puVar24 + uVar16;
                        } while (iVar32 != (int)lStack_1990);
                      }
                    }
                    else {
                      puVar26 = (uint *)0x0;
                      do {
                        _memset(&lStack_1090,0xff,0x1000);
                        puVar17 = (uint *)0x0;
                        pcVar34 = (code *)(&PTR_FUN_110a32618)[(long)puVar26];
                        while( true ) {
                          uVar35 = (ulong)puVar1[(long)puVar17];
                          (*pcVar34)();
                          uVar16 = uStack_1a10;
                          plVar28 = plStack_1a88;
                          if (*(short *)((long)&lStack_1090 + (uVar35 & 0xffffffff) * 2) != -1)
                          break;
                          *(short *)((long)&lStack_1090 + (uVar35 & 0xffffffff) * 2) =
                               (short)puVar17;
                          puVar17 = (uint *)((long)puVar17 + 1);
                          if (puVar23 == puVar17) {
                            if ((int)puVar26 == 2) {
                              if (0 < (int)lStack_1990) {
                                uVar31 = 0;
                                iVar32 = 0;
                                uVar22 = *puVar1;
                                puVar26 = (uint *)(uStack_1a10 * 4);
                                do {
                                  if (uVar21 != 0) {
                                    puVar17 = (uint *)0x0;
                                    do {
                                      uVar5 = puVar24[(long)puVar17];
                                      if (uVar5 != uVar22) {
                                        uVar31 = *(undefined2 *)
                                                  ((long)&lStack_1090 +
                                                  (ulong)(uVar5 * -0x80000000 - (uVar5 & 0xffffff)
                                                         >> 0x15) * 2);
                                        uVar22 = uVar5;
                                      }
                                      *(char *)((long)puVar15 + (long)puVar17) = (char)uVar31;
                                      puVar17 = (uint *)((long)puVar17 + 1);
                                    } while (puVar29 != puVar17);
                                  }
                                  (*pcRam000000011386a058)
                                            (puVar15,puVar29,(ulong)piStack_1998 & 0xffffffff,lVar36
                                            );
                                  lVar36 = lVar36 + uStack_19a0 * 4;
                                  iVar32 = iVar32 + 1;
                                  puVar24 = puVar24 + uVar16;
                                } while (iVar32 != (int)lStack_1990);
                              }
                            }
                            else if ((int)puVar26 == 1) {
                              if (0 < (int)lStack_1990) {
                                uVar31 = 0;
                                iVar32 = 0;
                                uVar22 = *puVar1;
                                puVar26 = (uint *)(uStack_1a10 * 4);
                                do {
                                  if (uVar21 != 0) {
                                    puVar17 = (uint *)0x0;
                                    do {
                                      uVar5 = puVar24[(long)puVar17];
                                      if (uVar5 != uVar22) {
                                        uVar31 = *(undefined2 *)
                                                  ((long)&lStack_1090 +
                                                  (ulong)((uVar5 & 0xffffff) * -0x455ab19 >> 0x15) *
                                                  2);
                                        uVar22 = uVar5;
                                      }
                                      *(char *)((long)puVar15 + (long)puVar17) = (char)uVar31;
                                      puVar17 = (uint *)((long)puVar17 + 1);
                                    } while (puVar29 != puVar17);
                                  }
                                  (*pcRam000000011386a058)
                                            (puVar15,puVar29,(ulong)piStack_1998 & 0xffffffff,lVar36
                                            );
                                  lVar36 = lVar36 + uStack_19a0 * 4;
                                  iVar32 = iVar32 + 1;
                                  puVar24 = puVar24 + uVar16;
                                } while (iVar32 != (int)lStack_1990);
                              }
                            }
                            else if (0 < (int)lStack_1990) {
                              uVar31 = 0;
                              iVar32 = 0;
                              uVar22 = *puVar1;
                              puVar26 = (uint *)(uStack_1a10 * 4);
                              do {
                                if (uVar21 != 0) {
                                  puVar17 = (uint *)0x0;
                                  do {
                                    uVar5 = puVar24[(long)puVar17];
                                    if (uVar5 != uVar22) {
                                      uVar31 = *(undefined2 *)
                                                ((long)&lStack_1090 +
                                                ((ulong)(uVar5 >> 8) & 0xff) * 2);
                                      uVar22 = uVar5;
                                    }
                                    *(char *)((long)puVar15 + (long)puVar17) = (char)uVar31;
                                    puVar17 = (uint *)((long)puVar17 + 1);
                                  } while (puVar29 != puVar17);
                                }
                                (*pcRam000000011386a058)
                                          (puVar15,puVar29,(ulong)piStack_1998 & 0xffffffff,lVar36);
                                lVar36 = lVar36 + uStack_19a0 * 4;
                                iVar32 = iVar32 + 1;
                                puVar24 = puVar24 + uVar16;
                              } while (iVar32 != (int)lStack_1990);
                            }
                            goto LAB_10824f91c;
                          }
                        }
                        puVar26 = (uint *)((long)puVar26 + 1);
                      } while (puVar26 != (uint *)0x3);
                      FUN_108252d40(puVar1,puVar23,auStack_1890,&puStack_1490);
                      plVar28 = plStack_1a88;
                      if (0 < (int)lStack_1990) {
                        puVar26 = (uint *)0x0;
                        iVar32 = 0;
                        uVar22 = *puVar1;
                        do {
                          lStack_1a38 = CONCAT44(lStack_1a38._4_4_,iVar32);
                          if (uVar21 != 0) {
                            puVar17 = (uint *)0x0;
                            do {
                              uVar5 = puVar24[(long)puVar17];
                              if (uVar5 != uVar22) {
                                if (auStack_1890[0] == uVar5) {
                                  lVar25 = 0;
                                }
                                else {
                                  uVar22 = 0;
                                  puVar26 = puVar23;
                                  do {
                                    uVar2 = (uint)puVar26 + uVar22;
                                    uVar3 = (int)uVar2 >> 1;
                                    uVar4 = (uint)puVar26;
                                    uVar6 = uVar3;
                                    if (uVar5 <= auStack_1890[(int)uVar3]) {
                                      uVar4 = uVar3;
                                      uVar6 = uVar22;
                                    }
                                    uVar22 = uVar6;
                                    puVar26 = (uint *)(ulong)uVar4;
                                  } while (auStack_1890[(int)uVar3] != uVar5);
                                  lVar25 = (long)((ulong)uVar2 << 0x20) >> 0x21;
                                }
                                puVar26 = (uint *)(ulong)*(uint *)((long)&puStack_1490 + lVar25 * 4)
                                ;
                                uVar22 = uVar5;
                              }
                              *(char *)((long)puVar15 + (long)puVar17) = (char)puVar26;
                              puVar17 = (uint *)((long)puVar17 + 1);
                            } while (puVar17 != puVar29);
                          }
                          (*pcRam000000011386a058)
                                    (puVar15,puVar29,(ulong)piStack_1998 & 0xffffffff,lVar36);
                          puVar24 = puVar24 + uStack_1a10;
                          lVar36 = lVar36 + uStack_19a0 * 4;
                          iVar32 = (int)lStack_1a38 + 1;
                        } while (iVar32 != (int)lStack_1990);
                      }
                    }
LAB_10824f91c:
                    _free(puVar15);
                    *(undefined4 *)(plVar28 + 3) = 3;
                    unaff_x24 = (uint *)(ulong)uStack_1a14;
                    plVar11 = plStack_19c0;
                    lVar36 = lStack_1a48;
                    if (*(int *)((long)plVar28 + 100) < 0x400) {
                      *(uint *)(plVar28 + 10) =
                           ((uint)LZCOUNT(*(int *)((long)plVar28 + 100)) ^ 0x1f) + 1;
                      unaff_x24 = (uint *)(ulong)uStack_1a14;
                    }
                    goto LAB_10824f958;
                  }
                }
                if (puVar26[0x22] == 0) {
                  puVar26[0x22] = 1;
                }
              }
            }
          }
          goto LAB_108250564;
        }
        *(undefined4 *)(plVar28 + 3) = 0;
        if ((int)plVar28[0xc] != 0) goto LAB_10824f308;
LAB_10824f770:
        puVar26 = (uint *)plVar28[1];
        uVar22 = puVar26[2];
        puVar24 = (uint *)(ulong)uVar22;
        uVar21 = puVar26[3];
        puVar23 = (uint *)(ulong)uVar21;
        plVar10 = plVar28;
        puVar17 = puVar24;
        FUN_108250abc(plVar28,puVar24,puVar23);
        if ((int)plVar10 == 0) goto LAB_108250564;
        unaff_x24 = (uint *)(ulong)uStack_1a58;
        if ((int)plVar28[3] != 1) {
          if (0 < (int)uVar21) {
            lVar25 = *(long *)(puVar26 + 0x12);
            puVar29 = (uint *)plVar28[2];
            do {
              _memcpy(puVar29,lVar25,(long)(int)uVar22 * 4);
              lVar25 = lVar25 + (long)(int)puVar26[0x14] * 4;
              puVar29 = puVar29 + (int)uVar22;
              uVar21 = (int)puVar23 - 1;
              puVar23 = (uint *)(ulong)uVar21;
            } while (uVar21 != 0);
          }
          *(undefined4 *)(plVar28 + 3) = 1;
          unaff_x24 = (uint *)(ulong)uStack_1a58;
        }
LAB_10824f958:
        if ((int)plVar28[0xb] != 0) {
          lVar25 = plVar28[8];
          FUN_1082546a0(plVar11,1,1);
          FUN_1082546a0(plVar11,2,2);
          (*pcRam000000011386a1a8)(plVar28[2],(int)lVar25 * uStack_19b4);
        }
        if (*(int *)((long)plVar28 + 0x5c) != 0) {
          if ((int)plVar28[0xc] == 0) {
            puVar29 = (uint *)(ulong)*(uint *)(*plVar28 + 0x5c);
          }
          else {
            puVar29 = (uint *)0x64;
          }
          uVar22 = *(uint *)(plVar28 + 8);
          puVar23 = (uint *)(ulong)uVar22;
          lVar25 = plVar28[0xb];
          puVar17 = (uint *)(ulong)uStack_19b4;
          puVar24 = puVar23;
          FUN_1082509fc(puVar23,puVar17,(int)plVar28[9],0x4000);
          lVar27 = *plVar28;
          iVar33 = *(int *)(lVar27 + 8);
          iVar32 = iVar33 * 2 + -8;
          if (iVar33 < 5) {
            iVar32 = 0;
          }
          puVar15 = puVar23;
          FUN_1082509fc(puVar23,puVar17,(int)puVar24 - iVar32,0x4000);
          puStack_1b00 = (uint *)plVar28[1];
          iVar32 = (int)unaff_x24;
          uVar21 = iVar32 / 6;
          puVar26 = (uint *)(ulong)uVar21;
          puStack_1ae8 = (uint *)((long)&uStack_1988 + 4);
          puStack_1af0 = &uStack_1958;
          puStack_1af8 = (uint *)CONCAT44(puStack_1af8._4_4_,uVar21);
          puStack_1b08 = (uint *)CONCAT44(puStack_1b08._4_4_,(int)lVar25);
          uStack_1b10 = (uint *)CONCAT44(*(undefined4 *)(lVar27 + 0x60),(int)puVar29);
          puVar12 = puVar23;
          func_0x000108248934(puVar23,puVar17,puVar15,puVar24,uStack_19a4,plVar28[2],plVar28[4],
                              plVar28[5]);
          plVar11 = plStack_19c0;
          if ((int)puVar12 == 0) goto LAB_108250564;
          uVar5 = iVar32 / 3;
          puVar24 = (uint *)(ulong)uVar5;
          FUN_1082546a0(plStack_19c0,1,1);
          FUN_1082546a0(plVar11,0,2);
          FUN_1082546a0(plVar11,uStack_1988._4_4_ + -2,3);
          puVar17 = (uint *)plVar28[5];
          iVar33 = 1 << (ulong)(uStack_1988._4_4_ & 0x1f);
          uStack_1b10 = (uint *)plVar28[1];
          puStack_1b00 = &uStack_1958;
          puStack_1b08 = (uint *)CONCAT44(puStack_1b08._4_4_,uVar5 - uVar21);
          plVar10 = plVar11;
          FUN_108250bd8(plVar11,puVar17,puStack_19d8,puStack_19b0,
                        (uVar22 + iVar33) - 1 >> (ulong)(uStack_1988._4_4_ & 0x1f),
                        (uint)(iVar33 + iStack_19cc) >> (ulong)(uStack_1988._4_4_ & 0x1f),
                        uStack_19d0,uStack_19a4);
          if ((int)plVar10 == 0) goto LAB_108250564;
          unaff_x24 = (uint *)(ulong)(iVar32 - uVar5);
        }
        if (*(int *)((long)plVar28 + 0x54) != 0) {
          uVar22 = *(uint *)(plVar28 + 8);
          puVar23 = (uint *)(ulong)uVar22;
          iVar33 = (int)unaff_x24;
          iVar32 = iVar33 + 3;
          if (-1 < iVar33) {
            iVar32 = iVar33;
          }
          puVar24 = (uint *)(ulong)(uint)(iVar32 >> 2);
          puStack_1b08 = (uint *)&uStack_1988;
          uStack_1b10 = &uStack_1958;
          puVar17 = (uint *)(ulong)uStack_19b4;
          puVar15 = puVar23;
          func_0x0001082496f4(puVar23,puVar17,*(undefined4 *)((long)plVar28 + 0x4c),uStack_19d0,
                              plVar28[2],plVar28[5],plVar28[1],puVar24);
          if ((int)puVar15 == 0) goto LAB_108250564;
          uVar21 = iVar33 / 2;
          puVar26 = (uint *)(ulong)uVar21;
          FUN_1082546a0(plVar11,1,1);
          FUN_1082546a0(plVar11,1,2);
          FUN_1082546a0(plVar11,(uint)uStack_1988 - 2,3);
          puVar17 = (uint *)plVar28[5];
          iVar9 = 1 << (ulong)((uint)uStack_1988 & 0x1f);
          uStack_1b10 = (uint *)plVar28[1];
          puStack_1b00 = &uStack_1958;
          puStack_1b08 = (uint *)CONCAT44(puStack_1b08._4_4_,uVar21 - (iVar32 >> 2));
          plVar10 = plVar11;
          FUN_108250bd8(plVar11,puVar17,puStack_19d8,puStack_19b0,
                        (uVar22 + iVar9) - 1 >> (ulong)((uint)uStack_1988 & 0x1f),
                        (uint)(iVar9 + iStack_19cc) >> (ulong)((uint)uStack_1988 & 0x1f),uStack_19d0
                        ,uStack_19a4);
          if ((int)plVar10 == 0) goto LAB_108250564;
          unaff_x24 = (uint *)(ulong)(iVar33 - uVar21);
        }
        FUN_1082546a0(plVar11,0,1);
        lStack_1a38 = plVar28[2];
        uVar22 = *(uint *)((long)plVar28 + 0x44);
        uStack_1a10 = (ulong)uVar22;
        iVar32 = 1 << (ulong)(uVar22 & 0x1f);
        uStack_19a0 = CONCAT44(uStack_19a0._4_4_,(int)plVar28[8]);
        iStack_1a50 = (int)plVar28[8] + -1;
        piVar20 = (int *)(ulong)(((uint)(iVar32 + iStack_1a50) >> (ulong)(uVar22 & 0x1f)) *
                                ((uint)(iVar32 + iStack_19cc) >> (ulong)(uVar22 & 0x1f)));
        uStack_1a54 = uStack_1958;
        lVar13 = 0x390;
        _malloc();
        puVar26 = (uint *)((long)piVar20 << 2);
        puVar15 = puVar26;
        piStack_1998 = piVar20;
        _malloc();
        lVar40 = *plVar11;
        lVar25 = plVar11[1];
        lVar27 = plVar11[2];
        uStack_1a3c = (undefined4)plVar11[4];
        uStack_1488 = 0;
        puStack_1490 = (uint *)0x0;
        lStack_1088 = 0;
        lStack_1090 = 0;
        lStack_1078 = 0;
        lStack_1080 = 0;
        lStack_1070 = 0;
        iVar32 = (int)&lStack_1090;
        puVar17 = (uint *)0x0;
        FUN_108254570();
        lStack_1990 = lVar13;
        if (((iVar32 == 0) || (lVar13 == 0)) || (puVar15 == (uint *)0x0)) {
LAB_1082502a8:
          puVar26 = puStack_19c8;
          if (puStack_19c8[0x22] == 0) {
            puVar24 = (uint *)0x0;
            puVar29 = (uint *)0x0;
            piVar20 = (int *)0x0;
LAB_1082502d8:
            uVar22 = 1;
LAB_1082502dc:
            puVar23 = (uint *)0x0;
            puVar26[0x22] = uVar22;
          }
          else {
LAB_1082502b4:
            puVar23 = (uint *)0x0;
            puVar24 = (uint *)0x0;
            puVar29 = (uint *)0x0;
            piVar20 = (int *)0x0;
          }
        }
        else {
          if ((int)piStack_1998 < 0) {
            puStack_1490 = (uint *)0x0;
            goto LAB_1082502a8;
          }
          _malloc();
          puStack_1490 = puVar26;
          if (puVar26 == (uint *)0x0) goto LAB_1082502a8;
          uStack_1488 = CONCAT44(uStack_1488._4_4_,(int)piStack_1998);
          iVar32 = (int)unaff_x24;
          uStack_1b10 = &uStack_1958;
          puVar17 = (uint *)(ulong)uStack_19d0;
          puVar26 = puStack_19d8;
          FUN_10823e970(puStack_19d8,puVar17,lStack_1a38,uStack_19a0 & 0xffffffff,uStack_19b4,
                        uStack_19a4,puStack_19c8,iVar32 / 5);
          if ((int)puVar26 != 0) {
            iStack_1ac4 = 10;
            if ((int)plVar28[10] != 0) {
              iStack_1ac4 = (int)plVar28[10];
            }
            uVar22 = puStack_19e0[6];
            if ((1 < (int)uVar22) || (puStack_19e0[3] != 0)) {
              puVar17 = (uint *)&lStack_1090;
              plVar10 = plVar11;
              FUN_108254630();
              if ((int)plVar10 == 0) goto LAB_1082502a8;
              uVar22 = puStack_19e0[6];
            }
            uVar16 = (ulong)uVar22;
            if (0 < (int)uVar22) {
              lVar13 = 0;
              iStack_1ad4 = iVar32 - iVar32 / 5;
              puStack_1ae0 = puStack_19e0 + 2;
              lStack_1ab0 = lVar27 - lVar25;
              lStack_1ab8 = (long)piStack_1998 << 2;
              uStack_1aa8 = 0xffffffffffffffff;
              do {
                puStack_1ac0 = puStack_1ae0 + lVar13 * 2;
                iVar33 = 0;
                if ((int)uVar16 != 0) {
                  iVar33 = iStack_1ad4 / (int)uVar16;
                }
                iVar9 = iVar33 + 3;
                if (-1 < iVar33) {
                  iVar9 = iVar33;
                }
                puStack_1ae8 = &uStack_1958;
                puStack_1af0 = (uint *)CONCAT44(puStack_1af0._4_4_,iVar9 >> 2);
                puStack_1b00 = auStack_1890;
                puStack_1af8 = puStack_19c8;
                uStack_1b10 = puStack_19d8;
                puStack_1b08 = puStack_19b0;
                iVar8 = (int)uStack_19a0;
                puVar17 = (uint *)(ulong)uStack_19b4;
                lStack_1ad0 = lVar13;
                func_0x00010823eff8(uStack_19a0 & 0xffffffff,puVar17,lStack_1a38,uStack_19d0,
                                    uStack_19a4,*puStack_1ac0,iStack_1ac4,puStack_1ac0[1]);
                if (iVar8 == 0) goto LAB_10825028c;
                bVar7 = false;
                lVar25 = 0;
                iStack_1a8c = iVar33 - (iVar9 >> 2);
                uVar22 = 1;
                do {
                  uVar21 = auStack_1890[0];
                  if (uVar22 == 0) {
                    uVar21 = 0;
                  }
                  puVar24 = (uint *)(ulong)uVar21;
                  auStack_1954[0] = (uint)uStack_1a10;
                  if ((bVar7) && (auStack_1890[0] == 0)) break;
                  *plVar11 = lVar40;
                  plVar11[2] = plVar11[1] + lStack_1ab0;
                  *(undefined4 *)(plVar11 + 4) = uStack_1a3c;
                  piVar20 = piStack_1998;
                  puVar17 = puVar24;
                  FUN_108242d1c();
                  puVar29 = puVar24;
                  FUN_108242c98();
                  puVar26 = puStack_19c8;
                  if (piVar20 == (int *)0x0 || puVar29 == (uint *)0x0) {
                    puVar24 = (uint *)0x0;
                    goto LAB_108250518;
                  }
                  iVar33 = iStack_1a8c / 3;
                  puVar23 = puStack_19b0 + lVar25 * 10;
                  puStack_1af0 = &uStack_1958;
                  puStack_1b00 = puStack_19c8;
                  puStack_1af8 = (uint *)CONCAT44(puStack_1af8._4_4_,iVar33);
                  iVar9 = (int)uStack_19a0;
                  puVar17 = (uint *)(ulong)uStack_19b4;
                  uStack_1b10 = puVar29;
                  puStack_1b08 = puVar15;
                  uStack_1a94 = uVar22;
                  uStack_1a90 = uVar21;
                  FUN_1082433e8(uStack_19a0 & 0xffffffff,puVar17,puVar23,uStack_19d0,uStack_19a4,
                                auStack_1954[0],puVar24,piVar20);
                  if (iVar9 == 0) {
                    puVar23 = (uint *)0x0;
                    puVar24 = (uint *)0x0;
                    goto LAB_1082502e0;
                  }
                  puVar24 = (uint *)(ulong)(uint)(*piVar20 * 5);
                  if (0x2aaaaaaa < (uint)(*piVar20 * 5)) {
                    puVar24 = (uint *)0x0;
LAB_108250518:
                    if (puVar26[0x22] == 0) goto LAB_1082502d8;
                    puVar23 = (uint *)0x0;
                    goto LAB_1082502e0;
                  }
                  puVar17 = (uint *)0x18;
                  puStack_1aa0 = puVar23;
                  _calloc();
                  if ((puVar24 == (uint *)0x0) ||
                     (piVar14 = piVar20, puVar17 = puVar24, func_0x000108250e70(), (int)piVar14 == 0
                     )) goto LAB_108250518;
                  _free(piVar20);
                  _free(puVar29);
                  plVar11 = plStack_19c0;
                  uVar22 = uStack_1a90;
                  if ((int)uStack_1a90 < 1) {
                    uVar22 = 0;
                    uVar18 = 1;
                  }
                  else {
                    FUN_1082546a0(plStack_19c0,1,1);
                    uVar18 = 4;
                  }
                  FUN_1082546a0(plVar11,uVar22,uVar18);
                  iVar33 = iStack_1a8c - iVar33;
                  if ((int)piStack_1998 != 0) {
                    lVar25 = 0;
                    uVar22 = 0;
                    do {
                      uVar21 = *(uint *)((long)puVar15 + lVar25);
                      if (uVar22 <= uVar21) {
                        uVar22 = uVar21 + 1;
                      }
                      *(uint *)((long)puVar15 + lVar25) = uVar21 << 8;
                      lVar25 = lVar25 + 4;
                    } while (lStack_1ab8 != lVar25);
                    puVar17 = (uint *)(ulong)(1 < uVar22);
                    FUN_1082546a0(plVar11,puVar17,1);
                    if (uVar22 < 2) {
                      if (uVar22 != 0) goto LAB_108250088;
                      goto LAB_10825010c;
                    }
                    func_0x0001082486ac(puVar15,uStack_19a0 & 0xffffffff,uStack_19b4,uStack_1a10,9,
                                        auStack_1954);
                    FUN_1082546a0(plVar11,auStack_1954[0] - 2,3);
                    iVar9 = 1 << (ulong)(auStack_1954[0] & 0x1f);
                    puStack_1b00 = &uStack_1958;
                    puStack_1b08 = (uint *)CONCAT44(puStack_1b08._4_4_,iVar33 / 2);
                    uStack_1b10 = puVar26;
                    puVar17 = puVar15;
                    FUN_108250bd8(plVar11,puVar15,&puStack_1490,plVar28 + 0x117,
                                  (uint)(iVar9 + iStack_1a50) >> (ulong)(auStack_1954[0] & 0x1f),
                                  (uint)(iVar9 + iStack_19cc) >> (ulong)(auStack_1954[0] & 0x1f),
                                  uStack_19d0,uStack_19a4);
                    if ((int)plVar11 != 0) {
                      iVar33 = iVar33 - iVar33 / 2;
LAB_108250088:
                      lVar36 = 0;
                      uVar16 = 0;
                      uVar22 = uVar22 * 5;
                      if (uVar22 < 2) {
                        uVar22 = 1;
                      }
                      uVar35 = (ulong)uVar22;
                      do {
                        uVar22 = (uint)uVar16;
                        if ((int)(uint)uVar16 <= (int)*(uint *)((long)puVar24 + lVar36)) {
                          uVar22 = *(uint *)((long)puVar24 + lVar36);
                        }
                        uVar16 = (ulong)uVar22;
                        lVar36 = lVar36 + 0x18;
                      } while (uVar35 * 0x18 - lVar36 != 0);
                      puVar23 = (uint *)(uVar16 << 1);
                      iStack_1a8c = iVar33;
                      _malloc();
                      lVar36 = lStack_1990;
                      plVar11 = plStack_19c0;
                      puVar26 = puVar24;
                      if (puVar23 == (uint *)0x0) {
                        puVar29 = (uint *)0x0;
                        piVar20 = (int *)0x0;
                        puVar26 = puStack_19c8;
                        lVar36 = lStack_1a48;
                        goto LAB_108250518;
                      }
                      do {
                        func_0x000108251114(plVar11,lVar36,puVar23,puVar26);
                        FUN_1082515a8(puVar26);
                        puVar26 = puVar26 + 6;
                        uVar35 = uVar35 - 1;
                        iVar33 = iStack_1a8c;
                      } while (uVar35 != 0);
                      goto LAB_108250120;
                    }
                    puVar23 = (uint *)0x0;
LAB_10825053c:
                    piVar20 = (int *)0x0;
                    puVar29 = (uint *)0x0;
                    lVar36 = lStack_1a48;
                    goto LAB_1082502e0;
                  }
                  puVar17 = (uint *)0x0;
                  FUN_1082546a0(plVar11,0,1);
LAB_10825010c:
                  puVar23 = (uint *)0x0;
                  _malloc();
                  if (puVar23 == (uint *)0x0) {
                    puVar29 = (uint *)0x0;
                    piVar20 = (int *)0x0;
                    goto LAB_108250518;
                  }
LAB_108250120:
                  iStack_1a8c = iVar33;
                  lVar36 = plVar11[1];
                  lVar25 = plVar11[2];
                  iVar33 = *(int *)((long)plVar11 + 4);
                  puVar17 = (uint *)(uStack_19a0 & 0xffffffff);
                  plVar10 = plVar11;
                  FUN_1082515f8(plVar11,puVar17,auStack_1954[0],*(undefined8 *)(puStack_1aa0 + 2),
                                puVar15,puVar24,puStack_19c8);
                  puVar26 = puStack_19c8;
                  if ((int)plVar10 == 0) goto LAB_10825053c;
                  lVar27 = plVar11[1];
                  lVar13 = plVar11[2];
                  uVar16 = (lVar13 - lVar27) + (long)(*(int *)((long)plVar11 + 4) + 7 >> 3);
                  if (uVar16 < uStack_1aa8) {
                    lStack_1a70 = (lVar25 - (lStack_1a80 + lVar36)) + (ulong)(uint)(iVar33 + 7 >> 3)
                    ;
                    *(uint *)(plVar28 + 10) = uStack_1a90;
                    iStack_1a74 = (((int)(lVar13 - lVar27) - (int)lStack_1a80) - (int)lStack_1a70) +
                                  (*(int *)((long)plStack_19c0 + 4) + 7 >> 3);
                    lVar36 = plStack_19c0[4];
                    lVar37 = plStack_19c0[1];
                    lVar13 = *plStack_19c0;
                    lVar27 = plStack_19c0[3];
                    lVar25 = plStack_19c0[2];
                    plStack_19c0[1] = lStack_1088;
                    *plStack_19c0 = lStack_1090;
                    plStack_19c0[3] = lStack_1078;
                    plStack_19c0[2] = lStack_1080;
                    plStack_19c0[4] = lStack_1070;
                    uStack_1aa8 = uVar16;
                    lStack_1090 = lVar13;
                    lStack_1088 = lVar37;
                    lStack_1080 = lVar25;
                    lStack_1078 = lVar27;
                    lStack_1070 = lVar36;
                  }
                  _free(puVar23);
                  _free(*(long *)(puVar24 + 4));
                  _free(puVar24);
                  bVar7 = true;
                  lVar25 = 1;
                  uVar22 = 0;
                  plVar11 = plStack_19c0;
                  lVar36 = lStack_1a48;
                } while ((uStack_1a94 & puStack_1ac0[1] != 0) != 0);
                lVar13 = lStack_1ad0 + 1;
                uVar16 = (ulong)(int)puStack_19e0[6];
              } while (lVar13 < (long)uVar16);
            }
            puVar26 = puStack_19c8;
            lVar25 = plVar11[4];
            lVar37 = plVar11[1];
            lVar40 = *plVar11;
            lVar13 = plVar11[3];
            lVar27 = plVar11[2];
            plVar11[1] = lStack_1088;
            *plVar11 = lStack_1090;
            plVar11[3] = lStack_1078;
            plVar11[2] = lStack_1080;
            plVar11[4] = lStack_1070;
            uVar22 = uStack_1a54 + iVar32;
            lStack_1090 = lVar40;
            lStack_1088 = lVar37;
            lStack_1080 = lVar27;
            lStack_1078 = lVar13;
            lStack_1070 = lVar25;
            if (uStack_1958 == uVar22) goto LAB_10825028c;
            uStack_1958 = uVar22;
            if (((*(code **)(puStack_19c8 + 0x24) == (code *)0x0) ||
                (puVar17 = puStack_19c8, (**(code **)(puStack_19c8 + 0x24))(), uVar22 != 0)) ||
               (puVar26[0x22] != 0)) goto LAB_1082502b4;
            puVar24 = (uint *)0x0;
            puVar29 = (uint *)0x0;
            piVar20 = (int *)0x0;
            uVar22 = 10;
            goto LAB_1082502dc;
          }
LAB_10825028c:
          puVar23 = (uint *)0x0;
          puVar24 = (uint *)0x0;
          puVar29 = (uint *)0x0;
          piVar20 = (int *)0x0;
          puVar26 = puStack_19c8;
        }
LAB_1082502e0:
        _free(puVar23);
        _free(lStack_1990);
        _free(piVar20);
        _free(puVar29);
        _free(puStack_1490);
        uStack_1488 = uStack_1488 & 0xffffffff00000000;
        puStack_1490 = (uint *)0x0;
        if (puVar24 != (uint *)0x0) {
          _free(*(long *)(puVar24 + 4));
          _free(puVar24);
        }
        _free(puVar15);
        _free(lStack_1088);
        if (puVar26[0x22] != 0) goto LAB_108250564;
        uVar16 = (plStack_19c0[2] - plStack_19c0[1]) +
                 (long)(*(int *)((long)plStack_19c0 + 4) + 7 >> 3);
        if (uVar16 < uStack_1a00) {
          lVar25 = plStack_19c0[4];
          lVar37 = plStack_19c0[1];
          lVar40 = *plStack_19c0;
          lVar13 = plStack_19c0[3];
          lVar27 = plStack_19c0[2];
          plStack_19c0[1] = lStack_1978;
          *plStack_19c0 = lStack_1980;
          plStack_19c0[3] = lStack_1968;
          plStack_19c0[2] = lStack_1970;
          plStack_19c0[4] = lStack_1960;
          uStack_1a00 = uVar16;
          lStack_1980 = lVar40;
          lStack_1978 = lVar37;
          lStack_1970 = lVar27;
          lStack_1968 = lVar13;
          lStack_1960 = lVar25;
          if (lStack_1a20 != 0) {
            bVar7 = *(int *)((long)plVar28 + 0x5c) != 0;
            uVar22 = (uint)bVar7;
            uVar21 = (uint)bVar7;
            *(uint *)(lStack_1a20 + 0x94) = uVar21;
            if (*(int *)((long)plVar28 + 0x54) != 0) {
              uVar22 = uVar21 | 2;
              *(uint *)(lStack_1a20 + 0x94) = uVar22;
            }
            if ((int)plVar28[0xb] != 0) {
              uVar22 = uVar22 | 4;
              *(uint *)(lStack_1a20 + 0x94) = uVar22;
            }
            if ((int)plVar28[0xc] != 0) {
              *(uint *)(lStack_1a20 + 0x94) = uVar22 | 8;
            }
            *(undefined4 *)(lStack_1a20 + 0x98) = *(undefined4 *)((long)plVar28 + 0x44);
            *(uint *)(lStack_1a20 + 0x9c) = uStack_1988._4_4_;
            *(uint *)(lStack_1a20 + 0xb4) = (uint)uStack_1988;
            *(int *)(lStack_1a20 + 0xa0) = (int)plVar28[10];
            *(undefined4 *)(lStack_1a20 + 0xa4) = *(undefined4 *)((long)plVar28 + 100);
            *(int *)(lStack_1a20 + 0xa8) = (int)uVar16 - (int)lStack_1a80;
            *(int *)(lStack_1a20 + 0xac) = (int)lStack_1a70;
            *(int *)(lStack_1a20 + 0xb0) = iStack_1a74;
          }
        }
        if (1 < (int)puStack_1a30) {
          *plStack_19c0 = lVar38;
          plStack_19c0[2] = plStack_19c0[1] + lStack_1a68;
          *(undefined4 *)(plStack_19c0 + 4) = uStack_1a24;
        }
        unaff_x24 = (uint *)((long)puStack_19e8 + 1);
        plVar11 = plStack_19c0;
      } while (unaff_x24 != puStack_1a30);
    }
    lVar25 = plVar11[1];
    lVar38 = *plVar11;
    lVar13 = plVar11[3];
    lVar27 = plVar11[2];
    lVar36 = plVar11[4];
    plVar11[1] = lStack_1978;
    *plVar11 = lStack_1980;
    plVar11[3] = lStack_1968;
    plVar11[2] = lStack_1970;
    plVar11[4] = lStack_1960;
    lStack_1980 = lVar38;
    lStack_1978 = lVar25;
    lStack_1970 = lVar27;
    lStack_1968 = lVar13;
    lStack_1960 = lVar36;
  }
LAB_108250564:
  _free(lStack_1978);
  uVar16 = (ulong)(*(int *)(plStack_19f8[1] + 0x88) == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar16;
  }
  ___stack_chk_fail();
  if (puVar17 == (uint *)0x0) {
    return 0;
  }
  iVar32 = (int)&uStack_1b80;
  uStack_1b18 = 0x108250608;
  if ((uVar16 == 0) || (*(long *)(puVar17 + 0x12) == 0)) {
    if (puVar17[0x22] == 0) {
      puVar17[0x22] = 3;
      return 0;
    }
    return 0;
  }
  uVar22 = puVar17[2];
  uVar21 = puVar17[3];
  uStack_1b78 = 0;
  uStack_1b80 = 0;
  uStack_1b68 = 0;
  uStack_1b70 = 0;
  uStack_1b60 = 0;
  puStack_1b50 = unaff_x24;
  puStack_1b48 = puVar29;
  plStack_1b40 = plVar28;
  puStack_1b38 = puVar26;
  puStack_1b30 = puVar24;
  puStack_1b28 = puVar23;
  puStack_1b20 = &stack0xfffffffffffffff0;
  FUN_108254570(&uStack_1b80,(long)(int)(uVar21 * uVar22 << (*(int *)(uVar16 + 0xc) != 3)));
  if (iVar32 == 0) {
LAB_10825071c:
    if (puVar17[0x22] != 0) goto LAB_108250814;
    uVar22 = 1;
  }
  else {
    if (*(code **)(puVar17 + 0x24) == (code *)0x0) {
LAB_108250684:
      puVar19 = *(undefined8 **)(puVar17 + 0x20);
      if (puVar19 != (undefined8 *)0x0) {
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        *(undefined8 *)((long)puVar19 + 0xb4) = 0;
        *(undefined8 *)((long)puVar19 + 0xac) = 0;
        puVar19[0x13] = 0;
        puVar19[0x12] = 0;
        puVar19[0x15] = 0;
        puVar19[0x14] = 0;
        puVar19[0xf] = 0;
        puVar19[0xe] = 0;
        puVar19[0x11] = 0;
        puVar19[0x10] = 0;
        puVar19[0xb] = 0;
        puVar19[10] = 0;
        puVar19[0xd] = 0;
        puVar19[0xc] = 0;
        puVar19[7] = 0;
        puVar19[6] = 0;
        puVar19[9] = 0;
        puVar19[8] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        *(undefined8 *)((long)puVar19 + 0xc) = 0x42c6000042c60000;
        *(undefined8 *)((long)puVar19 + 4) = 0x42c6000042c60000;
        *(undefined4 *)((long)puVar19 + 0x14) = 0x42c60000;
      }
      uVar5 = puVar17[3];
      FUN_1082546a0(&uStack_1b80,puVar17[2] - 1,0xe);
      FUN_1082546a0(&uStack_1b80,uVar5 - 1,0xe);
      if ((int)uStack_1b60 == 0) {
        puVar26 = puVar17;
        FUN_1082462f4(puVar17);
        FUN_1082546a0(&uStack_1b80,puVar26,1);
        FUN_1082546a0(&uStack_1b80,0,3);
        if ((int)uStack_1b60 == 0) {
          if (*(code **)(puVar17 + 0x24) != (code *)0x0) {
            iVar32 = 2;
            (**(code **)(puVar17 + 0x24))(2,puVar17);
            if (iVar32 == 0) goto LAB_10825080c;
          }
          func_0x00010824e44c(uVar16,puVar17,&uStack_1b80);
          if ((int)uVar16 == 0) goto LAB_108250814;
          if (*(code **)(puVar17 + 0x24) != (code *)0x0) {
            iVar32 = 99;
            (**(code **)(puVar17 + 0x24))(99,puVar17);
            if (iVar32 == 0) goto LAB_10825080c;
          }
          puVar26 = puVar17;
          func_0x000108250860(puVar17,&uStack_1b80,aiStack_1b58);
          if ((int)puVar26 == 0) goto LAB_108250814;
          if (*(code **)(puVar17 + 0x24) != (code *)0x0) {
            iVar32 = 100;
            (**(code **)(puVar17 + 0x24))(100,puVar17);
            if (iVar32 == 0) goto LAB_10825080c;
          }
          piVar20 = *(int **)(puVar17 + 0x20);
          if (piVar20 != (int *)0x0) {
            *piVar20 = *piVar20 + aiStack_1b58[0];
            piVar20[0x2a] = aiStack_1b58[0];
          }
          if (*(long *)(puVar17 + 0x1e) != 0) {
            _bzero(*(long *)(puVar17 + 0x1e),
                   (long)(((int)(uVar21 + 0xf) >> 4) * ((int)(uVar22 + 0xf) >> 4)));
          }
          goto LAB_108250814;
        }
      }
      goto LAB_10825071c;
    }
    iVar32 = 1;
    (**(code **)(puVar17 + 0x24))(1,puVar17);
    if (iVar32 != 0) goto LAB_108250684;
LAB_10825080c:
    if (puVar17[0x22] != 0) goto LAB_108250814;
    uVar22 = 10;
  }
  puVar17[0x22] = uVar22;
LAB_108250814:
  if (((int)uStack_1b60 != 0) && (puVar17[0x22] == 0)) {
    puVar17[0x22] = 1;
  }
  _free(uStack_1b78);
  return (ulong)(puVar17[0x22] == 0);
}



/* Entry: 108250608; end: 1082509fb;  */

bool FUN_108250608(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int aiStack_48 [2];
  
  if (param_2 == 0) {
    return false;
  }
  iVar3 = (int)&uStack_70;
  if ((param_1 == 0) || (*(long *)(param_2 + 0x48) == 0)) {
    if (*(int *)(param_2 + 0x88) != 0) {
      return false;
    }
    *(undefined4 *)(param_2 + 0x88) = 3;
    return false;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  FUN_108254570(&uStack_70,(long)(iVar2 * iVar1 << (*(int *)(param_1 + 0xc) != 3)));
  if (iVar3 == 0) {
LAB_10825071c:
    if (*(int *)(param_2 + 0x88) != 0) goto LAB_108250814;
    uVar5 = 1;
  }
  else {
    if (*(code **)(param_2 + 0x90) == (code *)0x0) {
LAB_108250684:
      puVar6 = *(undefined8 **)(param_2 + 0x80);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        *(undefined8 *)((long)puVar6 + 0xb4) = 0;
        *(undefined8 *)((long)puVar6 + 0xac) = 0;
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        puVar6[0x15] = 0;
        puVar6[0x14] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
        puVar6[0x11] = 0;
        puVar6[0x10] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[7] = 0;
        puVar6[6] = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        *(undefined8 *)((long)puVar6 + 0xc) = 0x42c6000042c60000;
        *(undefined8 *)((long)puVar6 + 4) = 0x42c6000042c60000;
        *(undefined4 *)((long)puVar6 + 0x14) = 0x42c60000;
      }
      iVar3 = *(int *)(param_2 + 0xc);
      FUN_1082546a0(&uStack_70,*(int *)(param_2 + 8) + -1,0xe);
      FUN_1082546a0(&uStack_70,iVar3 + -1,0xe);
      if ((int)uStack_50 == 0) {
        lVar4 = param_2;
        FUN_1082462f4(param_2);
        FUN_1082546a0(&uStack_70,lVar4,1);
        FUN_1082546a0(&uStack_70,0,3);
        if ((int)uStack_50 == 0) {
          if (*(code **)(param_2 + 0x90) != (code *)0x0) {
            iVar3 = 2;
            (**(code **)(param_2 + 0x90))(2,param_2);
            if (iVar3 == 0) goto LAB_10825080c;
          }
          func_0x00010824e44c(param_1,param_2,&uStack_70);
          if ((int)param_1 == 0) goto LAB_108250814;
          if (*(code **)(param_2 + 0x90) != (code *)0x0) {
            iVar3 = 99;
            (**(code **)(param_2 + 0x90))(99,param_2);
            if (iVar3 == 0) goto LAB_10825080c;
          }
          lVar4 = param_2;
          func_0x000108250860(param_2,&uStack_70,aiStack_48);
          if ((int)lVar4 == 0) goto LAB_108250814;
          if (*(code **)(param_2 + 0x90) != (code *)0x0) {
            iVar3 = 100;
            (**(code **)(param_2 + 0x90))(100,param_2);
            if (iVar3 == 0) goto LAB_10825080c;
          }
          piVar7 = *(int **)(param_2 + 0x80);
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar7 + aiStack_48[0];
            piVar7[0x2a] = aiStack_48[0];
          }
          if (*(long *)(param_2 + 0x78) != 0) {
            _bzero(*(long *)(param_2 + 0x78),(long)((iVar2 + 0xf >> 4) * (iVar1 + 0xf >> 4)));
          }
          goto LAB_108250814;
        }
      }
      goto LAB_10825071c;
    }
    iVar3 = 1;
    (**(code **)(param_2 + 0x90))(1,param_2);
    if (iVar3 != 0) goto LAB_108250684;
LAB_10825080c:
    if (*(int *)(param_2 + 0x88) != 0) goto LAB_108250814;
    uVar5 = 10;
  }
  *(undefined4 *)(param_2 + 0x88) = uVar5;
LAB_108250814:
  if (((int)uStack_50 != 0) && (*(int *)(param_2 + 0x88) == 0)) {
    *(undefined4 *)(param_2 + 0x88) = 1;
  }
  _free(uStack_68);
  return *(int *)(param_2 + 0x88) == 0;
}



/* Entry: 1082509fc; end: 108250abb;  */

void FUN_1082509fc(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_3;
  if ((int)param_3 < 3) {
    uVar3 = 2;
  }
  if (8 < (int)uVar3) {
    uVar3 = 9;
  }
  iVar4 = 1 << (ulong)(uVar3 & 0x1f);
  param_1 = param_1 + -1;
  param_2 = param_2 + -1;
  iVar4 = ((uint)(iVar4 + param_1) >> (ulong)(uVar3 & 0x1f)) *
          ((uint)(iVar4 + param_2) >> (ulong)(uVar3 & 0x1f));
  uVar1 = uVar3;
  if ((int)param_3 < 9) {
    do {
      uVar3 = uVar1;
      if (iVar4 <= param_4) break;
      iVar4 = 2 << (ulong)(uVar1 & 0x1f);
      uVar3 = uVar1 + 1;
      iVar4 = ((uint)(iVar4 + param_1) >> (ulong)(uVar3 & 0x1f)) *
              ((uint)(iVar4 + param_2) >> (ulong)(uVar3 & 0x1f));
      bVar2 = uVar1 < 8;
      uVar1 = uVar3;
    } while (bVar2);
  }
  bVar2 = iVar4 == 1;
  while( true ) {
    if ((int)uVar3 < 3) {
      return;
    }
    if (!bVar2) break;
    uVar3 = uVar3 - 1;
    bVar2 = true;
    iVar4 = 1 << (ulong)(uVar3 & 0x1f);
    if (((uint)(iVar4 + param_1) >> (ulong)(uVar3 & 0x1f)) *
        ((uint)(iVar4 + param_2) >> (ulong)(uVar3 & 0x1f)) != 1) {
      return;
    }
  }
  return;
}



/* Entry: 108250abc; end: 108250bd7;  */

undefined8 FUN_108250abc(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    lVar1 = 0;
    lVar5 = 0;
    lVar4 = 0;
    if (*(int *)(param_1 + 0x54) != 0) goto LAB_108250b14;
  }
  else {
    lVar1 = ((long)(param_2 * 2) + 3U >> 2) + (long)(param_2 * 2 + 2);
LAB_108250b14:
    lVar4 = (ulong)(param_3 + 3U >> 2) * (ulong)(param_2 + 3U >> 2);
    lVar5 = lVar1;
  }
  uVar3 = (long)param_3 * (long)param_2 + lVar5 + lVar4 + 0x10;
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 == 0) || (*(ulong *)(param_1 + 0x38) < uVar3)) {
    _free();
    *(long *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar3 < 0x100000001) {
      lVar1 = uVar3 * 4;
      _malloc();
      if (lVar1 != 0) {
        *(long *)(param_1 + 0x30) = lVar1;
        *(ulong *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x18) = 0;
        goto LAB_108250b78;
      }
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x88) == 0) {
      uVar2 = 0;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x88) = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
LAB_108250b78:
    *(long *)(param_1 + 0x10) = lVar1;
    uVar3 = lVar1 + (long)param_3 * (long)param_2 * 4 + 0x1fU & 0xffffffffffffffe0;
    *(ulong *)(param_1 + 0x20) = uVar3;
    *(ulong *)(param_1 + 0x28) = uVar3 + lVar5 * 4 + 0x1f & 0xffffffffffffffe0;
    *(int *)(param_1 + 0x40) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 108250bd8; end: 1082515a7;  */

/* WARNING: Possible PIC construction at 0x000108250d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108250d28) */
/* WARNING: Removing unreachable block (ram,0x000108250d2c) */
/* WARNING: Removing unreachable block (ram,0x000108250d48) */
/* WARNING: Removing unreachable block (ram,0x000108250d50) */
/* WARNING: Removing unreachable block (ram,0x000108250d60) */
/* WARNING: Removing unreachable block (ram,0x000108250e60) */
/* WARNING: Removing unreachable block (ram,0x000108250e68) */
/* WARNING: Removing unreachable block (ram,0x000108250d6c) */
/* WARNING: Removing unreachable block (ram,0x000108250d78) */
/* WARNING: Removing unreachable block (ram,0x000108250da0) */
/* WARNING: Type propagation algorithm not settling */

uint * FUN_108250bd8(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,ulong *param_6,ulong *param_7,undefined8 param_8,long param_9
                    ,int param_10,undefined4 param_11,undefined8 param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong auStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_f8[0xf] = 0;
  auStack_f8[0xc] = 0;
  auStack_f8[0xb] = 0;
  auStack_f8[0xe] = 0;
  auStack_f8[0xd] = 0;
  auStack_f8[8] = 0;
  auStack_f8[7] = 0;
  auStack_f8[10] = 0;
  auStack_f8[9] = 0;
  auStack_f8[4] = 0;
  auStack_f8[3] = 0;
  auStack_f8[6] = 0;
  auStack_f8[5] = 0;
  auStack_f8[2] = 0;
  auStack_f8[1] = 0;
  auStack_f8[0] = 0;
  lVar5 = 0x390;
  puVar8 = param_2;
  _malloc();
  if (lVar5 == 0) {
LAB_108250dc8:
    if (*(int *)(param_9 + 0x88) == 0) {
      *(undefined4 *)(param_9 + 0x88) = 1;
    }
LAB_108250dfc:
    _free(0);
    _free(lVar5);
    _free(0);
    _free(auStack_f8[3]);
    puVar7 = (uint *)(ulong)(*(int *)(param_9 + 0x88) == 0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar7;
    }
    ___stack_chk_fail();
  }
  else {
    uVar6 = param_3;
    puVar8 = param_7;
    FUN_10823e970(param_3,param_7,param_2,param_5,param_6,param_8,param_9,param_10 / 2,param_12);
    if (((int)uVar6 == 0) ||
       (func_0x00010823eff8(param_5,param_6,param_2,param_7,0,3,0,0,param_3,param_4,auStack_f8,
                            param_9,param_10 - param_10 / 2), puVar8 = param_6, (int)param_5 == 0))
    goto LAB_108250dfc;
    puVar8 = (ulong *)(auStack_f8[0] & 0xffffffff);
    puVar7 = (uint *)0x1;
    FUN_108242d1c();
    if (puVar7 == (uint *)0x0) goto LAB_108250dc8;
    FUN_108242e6c();
    FUN_108242c0c(param_4,0,0,**(undefined8 **)(puVar7 + 2));
    puVar8 = auStack_f8 + 1;
  }
  uVar2 = *puVar7;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
    _calloc(0,3);
    if (uVar9 == 0) goto LAB_108250fc8;
    uVar17 = 0;
    _malloc();
LAB_108250fd4:
    lVar5 = 0;
LAB_108250fd8:
    lVar5 = lVar5 << 4;
    _malloc();
    if (uVar17 != 0 && lVar5 != 0) {
      if ((int)uVar2 < 1) {
        bVar4 = false;
        puVar7 = (uint *)0x1;
      }
      else {
        lVar14 = 0;
        puVar11 = puVar8;
        do {
          puVar16 = *(undefined8 **)(*(long *)(puVar7 + 2) + lVar14);
          func_0x000108254a24(*puVar16,0xf,uVar17,lVar5,puVar11);
          func_0x000108254a24(puVar16 + 1,0xf,uVar17,lVar5,puVar11 + 3);
          func_0x000108254a24(puVar16 + 0x81,0xf,uVar17,lVar5,puVar11 + 6);
          func_0x000108254a24(puVar16 + 0x101,0xf,uVar17,lVar5,puVar11 + 9);
          func_0x000108254a24(puVar16 + 0x181,0xf,uVar17,lVar5,puVar11 + 0xc);
          lVar14 = lVar14 + 8;
          puVar11 = puVar11 + 0xf;
        } while ((ulong)uVar2 * 8 - lVar14 != 0);
        bVar4 = false;
        puVar7 = (uint *)0x1;
      }
      goto LAB_108250ff8;
    }
  }
  else {
    uVar9 = 0;
    uVar17 = 0;
    lVar5 = *(long *)(puVar7 + 2);
    puVar11 = puVar8;
    do {
      lVar14 = 0;
      lVar15 = *(long *)(lVar5 + uVar9 * 8);
      do {
        if (lVar14 == 0) {
          uVar1 = *(uint *)(lVar15 + 0xca8);
          iVar13 = (1 << (ulong)(uVar1 & 0x1f)) + 0x118;
          if ((int)uVar1 < 1) {
            iVar13 = 0x118;
          }
        }
        else {
          iVar13 = 0x28;
          if (lVar14 != 0x60) {
            iVar13 = 0x100;
          }
        }
        *(int *)((long)puVar11 + lVar14) = iVar13;
        uVar17 = uVar17 + (long)iVar13;
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != 0x78);
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 0xf;
    } while (uVar9 != uVar2);
    if (uVar17 < 0x155555556) {
      uVar9 = uVar17;
      _calloc(uVar17,3);
      if (uVar9 == 0) goto LAB_108250fc8;
      uVar18 = 0;
      uVar1 = uVar2 * 5;
      uVar17 = uVar9 + uVar17 * 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar10 = (ulong)uVar1;
      puVar11 = puVar8 + 1;
      uVar12 = uVar9;
      do {
        uVar3 = (uint)puVar11[-1];
        *puVar11 = uVar17;
        puVar11[1] = uVar12;
        uVar12 = uVar12 + (long)(int)uVar3 * 2;
        uVar17 = uVar17 + (long)(int)uVar3;
        uVar1 = (uint)uVar18;
        if ((int)(uint)uVar18 <= (int)uVar3) {
          uVar1 = uVar3;
        }
        uVar18 = (ulong)uVar1;
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 3;
      } while (uVar10 != 0);
      uVar17 = uVar18;
      _malloc();
      if (uVar1 == 0) goto LAB_108250fd4;
      if (uVar1 < 0x15555556) {
        lVar5 = uVar18 * 3;
        goto LAB_108250fd8;
      }
    }
    else {
      uVar9 = 0;
LAB_108250fc8:
      uVar17 = 0;
    }
    lVar5 = 0;
  }
  puVar7 = (uint *)0x0;
  bVar4 = true;
LAB_108250ff8:
  _free(lVar5);
  _free(uVar17);
  if (bVar4) {
    _free(uVar9);
    _bzero(puVar8,(long)(int)uVar2 * 0x78);
  }
  return puVar7;
}



/* Entry: 1082515a8; end: 1082515f7;  */

void FUN_1082515a8(uint *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  
  uVar2 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    bVar1 = false;
    pcVar4 = *(char **)(param_1 + 2);
    do {
      if (*pcVar4 != '\0') {
        if (bVar1) {
          return;
        }
        bVar1 = true;
      }
      uVar2 = uVar2 - 1;
      lVar3 = 0;
      pcVar4 = pcVar4 + 1;
    } while (uVar2 != 0);
    do {
      *(undefined1 *)(*(long *)(param_1 + 2) + lVar3) = 0;
      *(undefined2 *)(*(long *)(param_1 + 4) + lVar3 * 2) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)*param_1);
  }
  return;
}



/* Entry: 1082515f8; end: 1082518eb;  */

undefined8
FUN_1082515f8(long param_1,int param_2,uint param_3,long *param_4,uint *param_5,long param_6,
             long param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  char *pcStack_70;
  undefined8 uStack_68;
  
  uVar3 = (param_2 + (1 << (ulong)(param_3 & 0x1f))) - 1U >> (ulong)(param_3 & 0x1f);
  if (param_3 == 0) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = -1 << (ulong)(param_3 & 0x1f);
  }
  if ((param_4 != (long *)0x0) && (pcVar12 = (char *)param_4[1], pcVar12 != (char *)0x0)) {
    uVar15 = 0;
    uVar11 = 0;
    pcStack_70 = pcVar12 + (long)(int)param_4[2] * 8;
    uStack_68 = 0;
    lVar10 = param_6 + ((ulong)(*param_5 >> 8) & 0xffff) * 0x78;
LAB_10825169c:
    do {
      if (uStack_68._4_4_ != (uVar15 & uVar1) || (uint)uStack_68 != (uVar11 & uVar1)) {
        lVar10 = param_6 + (ulong)*(ushort *)
                                   ((long)param_5 +
                                   (long)(int)(((int)uVar15 >> (param_3 & 0x1f)) +
                                              ((int)uVar11 >> (param_3 & 0x1f)) * uVar3) * 4 + 1) *
                           0x78;
        uStack_68 = CONCAT44(uVar15 & uVar1,uVar11 & uVar1);
      }
      if (*pcVar12 == '\x01') {
        uVar6 = (ulong)*(byte *)(*(long *)(lVar10 + 8) + (long)*(int *)(pcVar12 + 4) + 0x118);
        uVar7 = (uint)*(ushort *)
                       (*(long *)(lVar10 + 0x10) + ((long)*(int *)(pcVar12 + 4) + 0x118) * 2);
LAB_108251848:
        FUN_1082546a0(param_1,uVar7,uVar6);
      }
      else {
        if (*pcVar12 != '\0') {
          uVar6 = (ulong)*(ushort *)(pcVar12 + 2);
          if (uVar6 < 0x200) {
            uVar8 = (uint)(char)(&UNK_10df0d838)[uVar6 * 2];
            uVar5 = (uint)(char)(&UNK_10df0d839)[uVar6 * 2];
            uVar7 = (uint)(byte)(&UNK_10df0dc38)[uVar6];
          }
          else {
            uVar9 = *(ushort *)(pcVar12 + 2) - 1;
            uVar8 = (uint)LZCOUNT(uVar9) ^ 0x1f;
            uVar5 = uVar8 - 1;
            uVar7 = uVar9 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
            uVar8 = uVar9 >> (ulong)(uVar5 & 0x1f) & 1 | uVar8 << 1;
          }
          iVar2 = *(int *)(pcVar12 + 4);
          uVar9 = (uint)*(byte *)(*(long *)(lVar10 + 8) + (ulong)(uVar8 + 0x100));
          FUN_1082546a0(param_1,uVar7 << (ulong)(uVar9 & 0x1f) |
                                (uint)*(ushort *)
                                       (*(long *)(lVar10 + 0x10) + (ulong)(uVar8 + 0x100) * 2),
                        uVar5 + uVar9);
          if (iVar2 < 0x200) {
            lVar13 = (long)iVar2 * 2;
            uVar8 = (uint)(char)(&UNK_10df0d838)[lVar13];
            uVar6 = (ulong)(char)(&UNK_10df0d839)[lVar13];
            uVar7 = (uint)(byte)(&UNK_10df0dc38)[iVar2];
          }
          else {
            uVar9 = iVar2 - 1;
            uVar8 = (uint)LZCOUNT(uVar9) ^ 0x1f;
            uVar5 = uVar8 - 1;
            uVar6 = (ulong)uVar5;
            uVar7 = uVar9 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
            uVar8 = uVar9 >> (ulong)(uVar5 & 0x1f) & 1 | uVar8 << 1;
          }
          FUN_1082546a0(param_1,*(undefined2 *)(*(long *)(lVar10 + 0x70) + (long)(int)uVar8 * 2),
                        *(undefined1 *)(*(long *)(lVar10 + 0x68) + (long)(int)uVar8));
          goto LAB_108251848;
        }
        lVar13 = 0;
        plVar14 = (long *)(lVar10 + 0x10);
        do {
          uVar6 = (ulong)(*(uint *)(pcVar12 + 4) >>
                         (ulong)(((byte)(&UNK_10df10bc9)[lVar13] & 3) << 3)) & 0xff;
          FUN_1082546a0(param_1,*(undefined2 *)(*plVar14 + uVar6 * 2),
                        *(undefined1 *)(plVar14[-1] + uVar6));
          lVar13 = lVar13 + 1;
          plVar14 = plVar14 + 3;
        } while (lVar13 != 4);
      }
      for (uVar15 = uVar15 + *(ushort *)(pcVar12 + 2); param_2 <= (int)uVar15;
          uVar15 = uVar15 - param_2) {
        uVar11 = uVar11 + 1;
      }
      pcVar12 = pcVar12 + 8;
      if (pcVar12 != pcStack_70) {
        if (pcVar12 == (char *)0x0) break;
        goto LAB_10825169c;
      }
      param_4 = (long *)*param_4;
      if (param_4 == (long *)0x0) break;
      pcVar12 = (char *)param_4[1];
      pcStack_70 = pcVar12 + (long)*(int *)(param_4 + 2) * 8;
    } while (pcVar12 != (char *)0x0);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar4 = 1;
  }
  else if (*(int *)(param_7 + 0x88) == 0) {
    uVar4 = 0;
    *(undefined4 *)(param_7 + 0x88) = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1082518ec; end: 10825191f;  */

uint FUN_1082518ec(uint param_1)

{
  return param_1 >> 8 & 0xff;
}



/* Entry: 108251920; end: 108251b87;  */

int * FUN_108251920(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int aiStack_48 [2];
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  param_2[0x22] = 0;
  if (param_1 == (int *)0x0) {
    iVar4 = 3;
    goto LAB_108251a24;
  }
  piVar5 = param_1;
  func_0x0001082401cc();
  if ((int)piVar5 == 0) {
    if (param_2[0x22] != 0) {
      return (int *)0x0;
    }
    iVar4 = 4;
    goto LAB_108251a24;
  }
  if ((param_2[2] < 1) || (param_2[3] < 1)) {
    iVar4 = 5;
  }
  else {
    if ((param_2[1] & 0xfffffffbU) == 0) {
      if (((uint)param_2[2] >> 0xe != 0) || (0x3fff < (uint)param_2[3])) {
        if (param_2[0x22] != 0) {
          return (int *)0x0;
        }
        iVar4 = 5;
        goto LAB_108251a24;
      }
      puVar6 = *(undefined8 **)(param_2 + 0x20);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)((long)puVar6 + 0xb4) = 0;
        *(undefined8 *)((long)puVar6 + 0xac) = 0;
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        puVar6[0x15] = 0;
        puVar6[0x14] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
        puVar6[0x11] = 0;
        puVar6[0x10] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[7] = 0;
        puVar6[6] = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
      }
      if (*param_1 == 0) {
        if ((((*param_2 != 0) || (*(long *)(param_2 + 4) == 0)) || (*(long *)(param_2 + 6) == 0)) ||
           (*(long *)(param_2 + 8) == 0)) {
          if ((param_1[0x1a] == 0) && (((uint)param_1[0x11] >> 2 & 1) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          piVar5 = param_2;
          FUN_1082463d4(param_2,0,uVar3);
          if ((int)piVar5 == 0) {
            return piVar5;
          }
        }
        if (param_1[0x18] == 0) {
          FUN_108248234(param_2);
        }
        FUN_108251b88(param_1,param_2);
        if (param_1 == (int *)0x0) {
          return (int *)0x0;
        }
        piVar5 = param_1;
        func_0x00010823c9c0();
        if ((int)piVar5 != 0) {
          piVar5 = param_1;
          FUN_10823c52c();
          if (param_1[0x1716] == 0) {
            if ((int)piVar5 != 0) {
              piVar5 = param_1;
              FUN_108240db4();
              iVar4 = (int)piVar5;
              goto LAB_108251b34;
            }
          }
          else if ((int)piVar5 != 0) {
            piVar5 = param_1;
            FUN_108241c0c();
            iVar4 = (int)piVar5;
LAB_108251b34:
            if ((iVar4 != 0) && (piVar5 = param_1, func_0x00010823c5bc(), (int)piVar5 != 0)) {
              piVar5 = param_1;
              FUN_10824cb64();
              FUN_108251f6c(param_1);
              if ((int)piVar5 != 0) {
                FUN_10825219c(param_1);
                return (int *)(ulong)((uint)param_1 & 1);
              }
              goto LAB_108251b74;
            }
          }
        }
        FUN_108251f6c(param_1);
LAB_108251b74:
        FUN_10824caf0(param_1);
        FUN_10825219c(param_1);
        return (int *)0x0;
      }
      if ((*(long *)(param_2 + 0x12) == 0) && (piVar5 = param_2, FUN_108246438(), (int)piVar5 == 0))
      {
        return piVar5;
      }
      if (param_1[0x18] == 0) {
        FUN_1082481b4(param_2,0);
      }
      if (param_2 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar4 = (int)&uStack_70;
      if ((param_1 == (int *)0x0) || (*(long *)(param_2 + 0x12) == 0)) {
        if (param_2[0x22] != 0) {
          return (int *)0x0;
        }
        param_2[0x22] = 3;
        return (int *)0x0;
      }
      iVar1 = param_2[2];
      iVar2 = param_2[3];
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_50 = 0;
      FUN_108254570(&uStack_70,(long)(iVar2 * iVar1 << (param_1[3] != 3)));
      if (iVar4 == 0) {
LAB_10825071c:
        if (param_2[0x22] != 0) goto LAB_108250814;
        iVar4 = 1;
      }
      else {
        if (*(code **)(param_2 + 0x24) == (code *)0x0) {
LAB_108250684:
          puVar6 = *(undefined8 **)(param_2 + 0x20);
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = 0;
            *puVar6 = 0;
            puVar6[3] = 0;
            puVar6[2] = 0;
            *(undefined8 *)((long)puVar6 + 0xb4) = 0;
            *(undefined8 *)((long)puVar6 + 0xac) = 0;
            puVar6[0x13] = 0;
            puVar6[0x12] = 0;
            puVar6[0x15] = 0;
            puVar6[0x14] = 0;
            puVar6[0xf] = 0;
            puVar6[0xe] = 0;
            puVar6[0x11] = 0;
            puVar6[0x10] = 0;
            puVar6[0xb] = 0;
            puVar6[10] = 0;
            puVar6[0xd] = 0;
            puVar6[0xc] = 0;
            puVar6[7] = 0;
            puVar6[6] = 0;
            puVar6[9] = 0;
            puVar6[8] = 0;
            puVar6[5] = 0;
            puVar6[4] = 0;
            *(undefined8 *)((long)puVar6 + 0xc) = 0x42c6000042c60000;
            *(undefined8 *)((long)puVar6 + 4) = 0x42c6000042c60000;
            *(undefined4 *)((long)puVar6 + 0x14) = 0x42c60000;
          }
          iVar4 = param_2[3];
          FUN_1082546a0(&uStack_70,param_2[2] + -1,0xe);
          FUN_1082546a0(&uStack_70,iVar4 + -1,0xe);
          if ((int)uStack_50 == 0) {
            piVar5 = param_2;
            FUN_1082462f4(param_2);
            FUN_1082546a0(&uStack_70,piVar5,1);
            FUN_1082546a0(&uStack_70,0,3);
            if ((int)uStack_50 == 0) {
              if (*(code **)(param_2 + 0x24) != (code *)0x0) {
                iVar4 = 2;
                (**(code **)(param_2 + 0x24))(2,param_2);
                if (iVar4 == 0) goto LAB_10825080c;
              }
              func_0x00010824e44c(param_1,param_2,&uStack_70);
              if ((int)param_1 == 0) goto LAB_108250814;
              if (*(code **)(param_2 + 0x24) != (code *)0x0) {
                iVar4 = 99;
                (**(code **)(param_2 + 0x24))(99,param_2);
                if (iVar4 == 0) goto LAB_10825080c;
              }
              piVar5 = param_2;
              func_0x000108250860(param_2,&uStack_70,aiStack_48);
              if ((int)piVar5 == 0) goto LAB_108250814;
              if (*(code **)(param_2 + 0x24) != (code *)0x0) {
                iVar4 = 100;
                (**(code **)(param_2 + 0x24))(100,param_2);
                if (iVar4 == 0) goto LAB_10825080c;
              }
              piVar5 = *(int **)(param_2 + 0x20);
              if (piVar5 != (int *)0x0) {
                *piVar5 = *piVar5 + aiStack_48[0];
                piVar5[0x2a] = aiStack_48[0];
              }
              if (*(long *)(param_2 + 0x1e) != 0) {
                _bzero(*(long *)(param_2 + 0x1e),(long)((iVar2 + 0xf >> 4) * (iVar1 + 0xf >> 4)));
              }
              goto LAB_108250814;
            }
          }
          goto LAB_10825071c;
        }
        iVar4 = 1;
        (**(code **)(param_2 + 0x24))(1,param_2);
        if (iVar4 != 0) goto LAB_108250684;
LAB_10825080c:
        if (param_2[0x22] != 0) goto LAB_108250814;
        iVar4 = 10;
      }
      param_2[0x22] = iVar4;
LAB_108250814:
      if (((int)uStack_50 != 0) && (param_2[0x22] == 0)) {
        param_2[0x22] = 1;
      }
      _free(uStack_68);
      return (int *)(ulong)(param_2[0x22] == 0);
    }
    iVar4 = 4;
  }
  if (param_2[0x22] != 0) {
    return (int *)0x0;
  }
LAB_108251a24:
  param_2[0x22] = iVar4;
  return (int *)0x0;
}


