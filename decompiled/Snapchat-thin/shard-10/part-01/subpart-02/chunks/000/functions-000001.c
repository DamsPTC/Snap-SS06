/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1076c2c7c; end: 1076c309f;  */

/* WARNING: Possible PIC construction at 0x0001076c36d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076c37c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076c36d8) */
/* WARNING: Removing unreachable block (ram,0x0001076c36e0) */
/* WARNING: Removing unreachable block (ram,0x0001076c3770) */
/* WARNING: Removing unreachable block (ram,0x0001076c3700) */
/* WARNING: Removing unreachable block (ram,0x0001076c3780) */
/* WARNING: Removing unreachable block (ram,0x0001076c370c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3714) */
/* WARNING: Removing unreachable block (ram,0x0001076c3724) */
/* WARNING: Removing unreachable block (ram,0x0001076c3734) */
/* WARNING: Removing unreachable block (ram,0x0001076c3754) */
/* WARNING: Removing unreachable block (ram,0x0001076c3790) */
/* WARNING: Removing unreachable block (ram,0x0001076c3794) */
/* WARNING: Removing unreachable block (ram,0x0001076c3798) */
/* WARNING: Removing unreachable block (ram,0x0001076c37a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c37bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c37c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c37cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c37d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c3868) */
/* WARNING: Removing unreachable block (ram,0x0001076c37f4) */
/* WARNING: Removing unreachable block (ram,0x0001076c3878) */
/* WARNING: Removing unreachable block (ram,0x0001076c3800) */
/* WARNING: Removing unreachable block (ram,0x0001076c3808) */
/* WARNING: Removing unreachable block (ram,0x0001076c3818) */
/* WARNING: Removing unreachable block (ram,0x0001076c3828) */
/* WARNING: Removing unreachable block (ram,0x0001076c384c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3888) */
/* WARNING: Removing unreachable block (ram,0x0001076c388c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3890) */
/* WARNING: Removing unreachable block (ram,0x0001076c389c) */
/* WARNING: Removing unreachable block (ram,0x0001076c38ac) */
/* WARNING: Removing unreachable block (ram,0x0001076c38bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c38c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c38d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c38e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c38ec) */
/* WARNING: Removing unreachable block (ram,0x0001076c38fc) */
/* WARNING: Removing unreachable block (ram,0x0001076c390c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3920) */
/* WARNING: Removing unreachable block (ram,0x0001076c392c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3948) */
/* WARNING: Removing unreachable block (ram,0x0001076c3934) */
/* WARNING: Removing unreachable block (ram,0x0001076c394c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3958) */
/* WARNING: Removing unreachable block (ram,0x0001076c3968) */
/* WARNING: Removing unreachable block (ram,0x0001076c3970) */
/* WARNING: Removing unreachable block (ram,0x0001076c3990) */
/* WARNING: Removing unreachable block (ram,0x0001076c39a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c39d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39f4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39fc) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a0c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a1c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a30) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a3c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a58) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a44) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a5c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a68) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a78) */
/* WARNING: Removing unreachable block (ram,0x0001076c3aa0) */
/* WARNING: Removing unreachable block (ram,0x0001076c3aac) */
/* WARNING: Removing unreachable block (ram,0x0001076c3ac8) */
/* WARNING: Removing unreachable block (ram,0x0001076c3ab4) */
/* WARNING: Removing unreachable block (ram,0x0001076c3acc) */
/* WARNING: Removing unreachable block (ram,0x0001076c3ad0) */
/* WARNING: Removing unreachable block (ram,0x0001076c439c) */
/* WARNING: Removing unreachable block (ram,0x0001076c46bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c480c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3af8) */

void FUN_1076c2c7c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  uint extraout_w8;
  ulong unaff_x21;
  int iVar9;
  undefined8 in_stack_00000040;
  undefined1 auStack_418 [104];
  int iStack_3b0;
  byte bStack_328;
  undefined1 auStack_320 [192];
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 auStack_220 [104];
  int iStack_1b8;
  byte bStack_130;
  undefined1 auStack_128 [296];
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d46e8 & 1) == 0) {
    iVar4 = 0x136d46e8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107708f50(0x1137136b8);
      ___cxa_guard_release(0x1136d46e8);
    }
  }
  if ((bRam00000001136d46f0 & 1) == 0) {
    iVar4 = 0x136d46f0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107708f00(0x1137136f0);
      ___cxa_guard_release(0x1136d46f0);
    }
  }
  if ((bRam00000001136d46f8 & 1) == 0) {
    iVar4 = 0x136d46f8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107708f70(0x113713728);
      ___cxa_guard_release(0x1136d46f8);
    }
  }
  if ((bRam00000001136d4700 & 1) == 0) {
    iVar4 = 0x136d4700;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107708fd0(0x113713760);
      ___cxa_guard_release(0x1136d4700);
    }
  }
  if ((bRam00000001136d4708 & 1) == 0) {
    iVar4 = 0x136d4708;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770abb8(0x113713798);
      ___cxa_guard_release(0x1136d4708);
    }
  }
  if ((bRam00000001136d4710 & 1) == 0) {
    iVar4 = 0x136d4710;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107708ef0(0x1137137d0);
      ___cxa_guard_release(0x1136d4710);
    }
  }
  if ((bRam00000001136d4718 & 1) == 0) {
    iVar4 = 0x136d4718;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107708ee0(0x113713808);
      ___cxa_guard_release(0x1136d4718);
    }
  }
  func_0x00010770e788();
  func_0x00010770a4cc();
  func_0x00010770b69c();
  func_0x000107714848();
  if (iStack_1b8 == 0) {
    func_0x00010770a4cc();
    func_0x00010770c2e4();
    func_0x000107714848();
  }
  func_0x00010770d7e8();
  func_0x000107714838();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x0001077190e0();
    func_0x000107714858();
    if ((bStack_130 & 1) == 0) {
      func_0x000107709214();
      iStack_1b8 = 0;
      func_0x00010770aac0();
      func_0x00010770b69c();
      func_0x000107714848();
      if (iStack_1b8 == 0) {
        func_0x00010770a070();
        func_0x000107714848();
      }
      func_0x00010770c454();
      func_0x00010771b008();
      if ((bool)in_ZR) {
        func_0x000107719280();
        func_0x000107714a5c();
        uVar2 = 0xe00;
        if ((bool)in_ZR) {
          uVar2 = 0xe38;
        }
        func_0x000107712de4(uVar2);
        func_0x00010770f5a0();
        func_0x000107712dd8();
        func_0x000107714860();
      }
      else {
        func_0x00010770ca24();
        func_0x000107712dcc();
        func_0x000107718714();
      }
      func_0x000107714848();
      func_0x000107714838();
      func_0x000107715ab8();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076c2e5c;
      func_0x000107714870();
      func_0x000107717a38();
      func_0x000107714858();
    }
    func_0x00010770b6dc();
    func_0x00010770b64c(auStack_128);
    func_0x00010771b0ec();
    func_0x000107707b44(auStack_220);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
    } while (!(bool)in_ZR);
    func_0x000107718de0();
    if ((bool)in_ZR) {
      func_0x000107717ab8();
      func_0x0001077081d4();
      func_0x00010770e718();
      func_0x000107714850();
    }
    else {
      func_0x00010770c010();
    }
    func_0x00010770f800();
  }
LAB_1076c2e5c:
  func_0x0001077160f4();
  func_0x000107717100();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  iVar4 = 0x136d4718;
  ___cxa_guard_abort();
  func_0x000107714988();
  puVar8 = &DAT_1076c30a0;
  func_0x00010771cb70();
  puStack_260 = &stack0x00000040;
  puStack_258 = puVar8;
  func_0x0001077073b8();
  if ((bRam00000001136d4720 & 1) == 0) {
    iVar9 = 0x136d4720;
    ___cxa_guard_acquire();
    iVar4 = 0;
    if (iVar9 != 0) {
      func_0x000107708f50(0x113713840);
      iVar4 = 0x136d4720;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4728 & 1) == 0) {
    iVar9 = 0x136d4728;
    ___cxa_guard_acquire();
    iVar4 = 0;
    if (iVar9 != 0) {
      func_0x000107708f00(0x113713878);
      iVar4 = 0x136d4728;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4730 & 1) == 0) {
    iVar9 = 0x136d4730;
    ___cxa_guard_acquire();
    iVar4 = 0;
    if (iVar9 != 0) {
      func_0x00010770abb8(0x1137138b0);
      iVar4 = 0x136d4730;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4738 & 1) == 0) {
    iVar9 = 0x136d4738;
    ___cxa_guard_acquire();
    iVar4 = 0;
    if (iVar9 != 0) {
      func_0x000107708ef0(0x1137138e8);
      iVar4 = 0x136d4738;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4740 & 1) == 0) {
    iVar9 = 0x136d4740;
    ___cxa_guard_acquire();
    iVar4 = 0;
    if (iVar9 != 0) {
      func_0x000107708ee0(0x113713920);
      iVar4 = 0x136d4740;
      ___cxa_guard_release();
    }
  }
  func_0x00010770b614();
  func_0x000107709f2c();
  iVar9 = (int)auStack_418;
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_3b0 == 0) {
    func_0x000107709f2c();
    func_0x00010770c2e4();
    func_0x000107714848();
  }
  func_0x000107711644();
  func_0x000107714838();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x000107715f2c();
    func_0x000107714858();
    if ((bStack_328 & 1) == 0) {
      func_0x000107711434();
      func_0x00010770ff30();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x0001076c31f0;
      func_0x000107714870();
      func_0x0001077183c8();
      func_0x000107714858();
    }
    iVar9 = 0x137138e8;
    func_0x00010770929c();
    func_0x00010770928c(auStack_320);
    func_0x0001077193e4();
    puVar5 = auStack_418;
    func_0x000107707b44();
    do {
      func_0x000107714ea0();
      func_0x000107715184();
      iVar4 = (int)puVar5;
    } while (!(bool)in_ZR);
    func_0x000107718518();
    if ((bool)in_ZR) {
      func_0x000107717204();
      func_0x000107707cfc();
      func_0x00010770c3dc();
      func_0x000107714850();
    }
    else {
      func_0x00010770b73c();
    }
    func_0x00010770fcd4();
  }
code_r0x0001076c31f0:
  func_0x000107716464();
  func_0x000107715540();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = 0x1136d4740;
  ___cxa_guard_abort();
  func_0x000107714988();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4748 & 1) == 0) {
    uVar6 = 0x1136d4748;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708e10(0x113713958);
      uVar6 = 0x1136d4748;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4750 & 1) == 0) {
    uVar6 = 0x1136d4750;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708bb0(0x113713990);
      uVar6 = 0x1136d4750;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4758 & 1) == 0) {
    uVar6 = 0x1136d4758;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708de0(0x1137139c8);
      uVar6 = 0x1136d4758;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4760 & 1) == 0) {
    uVar6 = 0x1136d4760;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708dc0(0x113713a00);
      uVar6 = 0x1136d4760;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4768 & 1) == 0) {
    uVar6 = 0x1136d4768;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708dd0(0x113713a38);
      uVar6 = 0x1136d4768;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4770 & 1) == 0) {
    uVar6 = 0x1136d4770;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708e00(0x113713a70);
      uVar6 = 0x1136d4770;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4778 & 1) == 0) {
    uVar6 = 0x1136d4778;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708df0(0x113713aa8);
      uVar6 = 0x1136d4778;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4780 & 1) == 0) {
    uVar6 = 0x1136d4780;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708db0(0x113713ae0);
      uVar6 = 0x1136d4780;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4788 & 1) == 0) {
    uVar6 = 0x1136d4788;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077092ac(0x113713b18);
      uVar6 = 0x1136d4788;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4790 & 1) == 0) {
    uVar6 = 0x1136d4790;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770d200(0x113713b50);
      uVar6 = 0x1136d4790;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4798 & 1) == 0) {
    uVar6 = 0x1136d4798;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a9c(0x113713b88);
      uVar6 = 0x1136d4798;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47a0 & 1) == 0) {
    uVar6 = 0x1136d47a0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708f70(0x113713bc0);
      uVar6 = 0x1136d47a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47a8 & 1) == 0) {
    uVar6 = 0x1136d47a8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708fd0(0x113713bf8);
      uVar6 = 0x1136d47a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47b0 & 1) == 0) {
    uVar6 = 0x1136d47b0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a8c(0x113713c30);
      uVar6 = 0x1136d47b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47b8 & 1) == 0) {
    uVar6 = 0x1136d47b8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a7c(0x113713c68);
      uVar6 = 0x1136d47b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47c0 & 1) == 0) {
    uVar6 = 0x1136d47c0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a6c(0x113713ca0);
      uVar6 = 0x1136d47c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47c8 & 1) == 0) {
    uVar6 = 0x1136d47c8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a5c(0x113713cd8);
      uVar6 = 0x1136d47c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47d0 & 1) == 0) {
    uVar6 = 0x1136d47d0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770995c(0x113713d10);
      uVar6 = 0x1136d47d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47d8 & 1) == 0) {
    uVar6 = 0x1136d47d8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770c128(0x113713d48);
      uVar6 = 0x1136d47d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47e0 & 1) == 0) {
    uVar6 = 0x1136d47e0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709570(0x113713d80);
      uVar6 = 0x1136d47e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47e8 & 1) == 0) {
    uVar6 = 0x1136d47e8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077094a0(0x113713db8);
      uVar6 = 0x1136d47e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47f0 & 1) == 0) {
    uVar6 = 0x1136d47f0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a4c(0x113713df0);
      uVar6 = 0x1136d47f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47f8 & 1) == 0) {
    uVar6 = 0x1136d47f8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770c108(0x113713e28);
      uVar6 = 0x1136d47f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4800 & 1) == 0) {
    uVar6 = 0x1136d4800;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709394(0x113713e60);
      uVar6 = 0x1136d4800;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4808 & 1) == 0) {
    uVar6 = 0x1136d4808;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a3c(0x113713e98);
      uVar6 = 0x1136d4808;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4810 & 1) == 0) {
    uVar6 = 0x1136d4810;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770abb8(0x113713ed0);
      uVar6 = 0x1136d4810;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4818 & 1) == 0) {
    uVar6 = 0x1136d4818;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770927c(0x113713f08);
      uVar6 = 0x1136d4818;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4820 & 1) == 0) {
    uVar6 = 0x1136d4820;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a2c(0x113713f40);
      uVar6 = 0x1136d4820;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4828 & 1) == 0) {
    uVar6 = 0x1136d4828;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077090d0(0x113713f78);
      uVar6 = 0x1136d4828;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4830 & 1) == 0) {
    uVar6 = 0x1136d4830;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709738(0x113713fb0);
      uVar6 = 0x1136d4830;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4838 & 1) == 0) {
    uVar6 = 0x1136d4838;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709728(0x113713fe8);
      uVar6 = 0x1136d4838;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4840 & 1) == 0) {
    uVar6 = 0x1136d4840;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770c0f8(0x113714020);
      uVar6 = 0x1136d4840;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4848 & 1) == 0) {
    uVar6 = 0x1136d4848;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770bab4(0x113714058);
      uVar6 = 0x1136d4848;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4850 & 1) == 0) {
    uVar6 = 0x1136d4850;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077093c4(0x113714090);
      uVar6 = 0x1136d4850;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4858 & 1) == 0) {
    uVar6 = 0x1136d4858;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a1c(0x1137140c8);
      uVar6 = 0x1136d4858;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4860 & 1) == 0) {
    uVar6 = 0x1136d4860;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709020(0x113714100);
      uVar6 = 0x1136d4860;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4868 & 1) == 0) {
    uVar6 = 0x1136d4868;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077093a4(0x113714138);
      uVar6 = 0x1136d4868;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4870 & 1) == 0) {
    uVar6 = 0x1136d4870;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709a0c(0x113714170);
      uVar6 = 0x1136d4870;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4878 & 1) == 0) {
    uVar6 = 0x1136d4878;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077099fc(0x1137141a8);
      uVar6 = 0x1136d4878;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4880 & 1) == 0) {
    uVar6 = 0x1136d4880;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770c0c0(0x1137141e0);
      uVar6 = 0x1136d4880;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4888 & 1) == 0) {
    uVar6 = 0x1136d4888;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077099ac(0x113714218);
      uVar6 = 0x1136d4888;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4890 & 1) == 0) {
    uVar6 = 0x1136d4890;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708f50(0x113714250);
      uVar6 = 0x1136d4890;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4898 & 1) == 0) {
    uVar6 = 0x1136d4898;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708f00(0x113714288);
      uVar6 = 0x1136d4898;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48a0 & 1) == 0) {
    uVar6 = 0x1136d48a0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709eac(0x1137142c0);
      uVar6 = 0x1136d48a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48a8 & 1) == 0) {
    uVar6 = 0x1136d48a8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709e9c(0x1137142f8);
      uVar6 = 0x1136d48a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48b0 & 1) == 0) {
    uVar6 = 0x1136d48b0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077090e0(0x113714330);
      uVar6 = 0x1136d48b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48b8 & 1) == 0) {
    uVar6 = 0x1136d48b8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x0001077090f0(0x113714368);
      uVar6 = 0x1136d48b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48c0 & 1) == 0) {
    uVar6 = 0x1136d48c0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107709060(0x1137143a0);
      uVar6 = 0x1136d48c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48c8 & 1) == 0) {
    uVar6 = 0x1136d48c8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708ef0(0x1137143d8);
      uVar6 = 0x1136d48c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48d0 & 1) == 0) {
    uVar6 = 0x1136d48d0;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107708ee0(0x113714410);
      uVar6 = 0x1136d48d0;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x0001077169c4();
  func_0x00010770cc98();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770fc78();
  func_0x00010770ab58();
  func_0x00010770f980();
  func_0x000107714830();
  func_0x000107714f58();
  func_0x000107714850();
  func_0x000107715f6c();
  uVar7 = uVar6;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar7 = uVar6;
    if (!(bool)in_ZR) goto code_r0x0001076c48ac;
    func_0x000107716fdc();
    uVar7 = uVar6;
    func_0x000107717974();
    unaff_x21 = uVar6;
    if ((uVar7 & 1) == 0) {
      func_0x00010771f4f4();
      func_0x000107714c8c();
      if ((int)uVar7 != 0) {
        func_0x0001077169c4();
        goto code_r0x0001076c49c8;
      }
      func_0x00010771a834();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a828();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077169c4();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a81c();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar3 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x000107708600();
          func_0x00010770c430();
          func_0x0001077169c4();
          func_0x00010770e048();
          func_0x00010770c424();
          func_0x000107714860();
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          func_0x00010770c260();
          func_0x000107715f90();
          if (!(bool)in_ZR) {
            func_0x0001077081c0();
            goto code_r0x0001076c497c;
          }
          func_0x000107714cc4();
          func_0x000107715434();
          goto code_r0x0001076c4984;
        }
        goto code_r0x0001076c49a4;
      }
      func_0x000107707fe0();
      uVar3 = in_ZR;
      goto code_r0x0001076c499c;
    }
    func_0x00010771d224();
code_r0x0001076c49c8:
    func_0x000107715434();
code_r0x0001076c49cc:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar7 & 1) == 0) {
      func_0x000107709200();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x0001077169c4();
      func_0x000107714ebc();
      func_0x00010770c1b8();
      func_0x000107714830();
      func_0x000107710080();
      func_0x000107710170();
      func_0x00010770fa0c();
      func_0x000107714830();
      func_0x000107714ffc();
      func_0x000107714850();
      func_0x000107717edc();
      uVar6 = uVar7;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar6 = uVar7;
        if (!(bool)in_ZR) goto code_r0x0001076c4a6c;
        func_0x000107716d50();
        uVar6 = uVar7;
        func_0x000107717974();
        unaff_x21 = uVar7;
        if ((uVar6 & 1) == 0) {
          func_0x00010771f4f4();
          func_0x000107714c8c();
          if ((int)uVar6 != 0) {
            func_0x0001077169c4();
            goto code_r0x0001076c4bc8;
          }
          func_0x00010771a834();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a828();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x0001077169c4();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a81c();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar3 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x0001077169c4();
              func_0x00010770dda0();
              func_0x00010770c424();
              func_0x000107714860();
              func_0x000107714848();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714838();
              func_0x00010770c260();
              func_0x000107715cdc();
              if (!(bool)in_ZR) {
                func_0x000107707fe0();
                goto code_r0x0001076c4b40;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076c4b48;
            }
            goto code_r0x0001076c4ba4;
          }
          func_0x0001077086d0();
          uVar3 = in_ZR;
          goto code_r0x0001076c4b9c;
        }
        func_0x00010771d224();
code_r0x0001076c4bc8:
        func_0x0001077154cc();
code_r0x0001076c4bcc:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar6 & 1) == 0) {
          func_0x000107708d8c();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x0001077169c4();
          func_0x00010770d818();
          func_0x00010770c1b8();
          func_0x000107714830();
          func_0x00010770f4d0();
          func_0x00010770b9f4();
          func_0x00010771017c();
          func_0x000107714830();
          func_0x000107714dc4();
          func_0x000107714850();
          func_0x000107717230();
          if ((bool)in_ZR) {
            func_0x000107716474();
            func_0x000107707ee8();
            func_0x000107715018();
            if (!(bool)in_ZR) goto code_r0x0001076c4c6c;
            func_0x000107714bc0();
            uVar7 = uVar6;
            func_0x000107717974();
            iVar9 = (int)uVar7;
            if ((uVar7 & 1) == 0) {
              func_0x00010771f4f4();
              func_0x000107714c8c();
              if (iVar9 != 0) {
                func_0x0001077169c4();
                goto code_r0x0001076c4e68;
              }
              func_0x00010771a834();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a828();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x0001077169c4();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar6;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a81c();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar3 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x0001077169c4();
                  func_0x00010770d228();
                  func_0x00010770cc14();
                  func_0x000107714848();
                  func_0x000107714838();
                  func_0x000107714858();
                  func_0x000107714830();
                  func_0x000107714890();
                  func_0x00010770c260();
                  func_0x00010771638c();
                  if (!(bool)in_ZR) {
                    func_0x00010770843c();
                    goto code_r0x0001076c4dd8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076c4de0;
                }
                goto code_r0x0001076c4e44;
              }
              func_0x000107708428();
              uVar3 = in_ZR;
              goto code_r0x0001076c4e3c;
            }
            func_0x00010771d224();
code_r0x0001076c4e68:
            func_0x000107715370();
code_r0x0001076c4e6c:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            uVar1 = extraout_w8;
            if ((bool)in_ZR) {
              uVar1 = 0;
            }
            unaff_x21 = (ulong)uVar1;
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
code_r0x0001076c4c6c:
            func_0x00010771a834();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a828();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077169c4();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a81c();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar3 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076c4e44;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x0001077169c4();
              func_0x00010770d228();
              func_0x00010770cc14();
              func_0x000107714848();
              func_0x000107714838();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714890();
              func_0x00010770c260();
              func_0x00010771638c();
              if ((bool)in_ZR) {
                func_0x000107715910();
                func_0x000107715370();
              }
              else {
                func_0x00010770843c();
code_r0x0001076c4dd8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076c4de0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = iVar4 == 3;
              if ((bool)in_ZR) goto code_r0x0001076c4e6c;
            }
            else {
              func_0x000107708428();
              uVar3 = in_ZR;
code_r0x0001076c4e3c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076c4e44:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar3;
            }
            func_0x000107715758();
          }
          func_0x00010770c324();
          func_0x00010770d83c();
          func_0x000107714ed0();
        }
        else {
          func_0x000107715ce8();
        }
        func_0x000107715710();
        func_0x000107714bf4();
      }
      else {
code_r0x0001076c4a6c:
        func_0x00010771a834();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a828();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x0001077169c4();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a81c();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar3 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076c4ba4;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x0001077169c4();
          func_0x00010770dda0();
          func_0x00010770c424();
          func_0x000107714860();
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          func_0x00010770c260();
          func_0x000107715cdc();
          if ((bool)in_ZR) {
            func_0x000107714bc0();
            func_0x0001077154cc();
          }
          else {
            func_0x000107707fe0();
code_r0x0001076c4b40:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076c4b48:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = iVar9 == 3;
          if ((bool)in_ZR) goto code_r0x0001076c4bcc;
        }
        else {
          func_0x0001077086d0();
          uVar3 = in_ZR;
code_r0x0001076c4b9c:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076c4ba4:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar3;
        }
        func_0x000107715758();
      }
      func_0x00010770d210();
      func_0x00010770df2c();
      func_0x0001077158e8();
    }
    else {
      func_0x000107715ce8();
    }
    func_0x000107715274();
    func_0x00010771513c();
    goto code_r0x0001076c4eb8;
  }
code_r0x0001076c48ac:
  func_0x00010771a834();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a828();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x0001077169c4();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a81c();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar3 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076c49a4;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x0001077169c4();
    func_0x00010770e048();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f90();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x000107715434();
    }
    else {
      func_0x0001077081c0();
code_r0x0001076c497c:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076c4984:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = iVar9 == 3;
    if ((bool)in_ZR) goto code_r0x0001076c49cc;
  }
  else {
    func_0x000107707fe0();
    uVar3 = in_ZR;
code_r0x0001076c499c:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076c49a4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar3;
  }
  func_0x000107715758();
code_r0x0001076c4eb8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010770883c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107714858();
  func_0x000107714830();
  func_0x000107715380();
  func_0x00010726af18();
  func_0x00010770edc0();
  func_0x00010770c324();
  func_0x00010770d83c();
  func_0x000107714ed0();
  func_0x000107715710();
  func_0x000107714bf4();
  func_0x00010770d210();
  func_0x00010770df2c();
  func_0x0001077158e8();
  func_0x000107715274();
  func_0x00010771513c();
  func_0x00010770d3b0();
  func_0x00010770ddb8();
  func_0x000107715294();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076c7fb8; end: 1076c8d23;  */

void FUN_1076c7fb8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *unaff_x22;
  int iVar6;
  int unaff_w24;
  int iStack_3d8;
  undefined1 auStack_78 [104];
  int iStack_10;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  iStack_10 = 0;
  func_0x00010771f3ec();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  if (iStack_10 == 0) {
    func_0x0001077169ac();
    func_0x00010770ddac();
    func_0x00010770c2cc();
    func_0x000107714838();
  }
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    puVar4 = param_1;
    if (!(bool)in_ZR) goto LAB_1076c8050;
    func_0x0001077152cc();
    puVar4 = param_1;
    func_0x000107717930();
    unaff_x22 = param_1;
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010771f3e0();
      func_0x000107714b98();
      if ((int)puVar4 != 0) {
        func_0x0001077169ac();
        goto LAB_1076c8168;
      }
      func_0x00010771a7ec();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771a7e0();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x0001077169ac();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771a7d4();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x0001077169ac();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto LAB_1076c8124;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076c812c;
        }
        goto LAB_1076c814c;
      }
      func_0x000107707e58();
      goto LAB_1076c8144;
    }
    func_0x00010771d1c4();
LAB_1076c8168:
    func_0x000107714d34();
LAB_1076c816c:
    iVar6 = (int)unaff_x22;
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076c8174:
    func_0x000107714830();
  }
  else {
    iStack_10 = 0;
    puVar4 = param_1;
LAB_1076c8050:
    func_0x00010771a7ec();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771a7e0();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x0001077169ac();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076c8144:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076c814c:
      iVar6 = (int)unaff_x22;
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076c8174;
    }
    func_0x000107715044();
    func_0x00010771a7d4();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076c814c;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x0001077169ac();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076c8124:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076c812c:
    iVar6 = (int)unaff_x22;
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076c816c;
  }
  func_0x00010770c3d0();
  func_0x00010770ce8c();
  func_0x000107714e44();
  uVar2 = iStack_3d8 == 1;
  if ((bool)uVar2) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar2) goto LAB_1076c8244;
    func_0x0001077154e4();
    puVar5 = puVar4;
    func_0x000104c32db4();
    if ((int)puVar5 == 0) {
      func_0x00010771d1c4();
      func_0x000107714bfc();
      iVar3 = 0x13714678;
      iVar6 = 0x13714678;
      if ((int)puVar5 != 0) {
        func_0x000107718fd4();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770a534();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x000107714a5c();
          uVar1 = 0xd90;
          if ((bool)uVar2) {
            uVar1 = 0xee0;
          }
          func_0x00010771d1b8(uVar1);
          func_0x00010770c364();
          func_0x000107708ba0();
          func_0x00010770c6ec();
          iVar6 = iVar3;
          goto LAB_1076c82b8;
        }
        func_0x000107707ad0();
        iVar6 = iVar3;
        goto LAB_1076c82e0;
      }
      func_0x000107714bfc();
      if ((int)puVar5 != 0) {
        func_0x000107718fd4();
        func_0x0001072ddd58(auStack_78,0x1137148a8);
        func_0x00010770c880();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ec68();
        func_0x00010770c880();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770926c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x000107714a5c();
          uVar1 = 0xd90;
          if ((bool)uVar2) {
            uVar1 = 0xfc0;
          }
          func_0x00010771d1b8(uVar1);
          func_0x00010770c364();
          func_0x000107708ba0();
          func_0x00010770c6ec();
          iVar6 = iVar3;
          goto LAB_1076c82b8;
        }
        func_0x000107707ad0();
        iVar6 = iVar3;
        goto LAB_1076c82e0;
      }
      func_0x000107714bfc();
      if ((int)puVar5 != 0) {
        func_0x000107718fd4();
        func_0x00010770fda0();
        func_0x000107712000();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x00010770ccf8();
        func_0x000107715ac0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x00010770ccf8();
        func_0x000107710b1c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x00010771a1dc();
          func_0x000107715dec();
          func_0x00010771502c();
          func_0x000107708f10();
          func_0x00010770c6ec();
LAB_1076c86e4:
          func_0x00010770c4c4();
          func_0x000107714830();
          func_0x00010770d8f8();
          func_0x000107708490();
          func_0x000107714878();
          func_0x000107714830();
          func_0x000107715718();
        }
        else {
          func_0x000107707ad0();
LAB_1076c88a8:
          func_0x00010770d3ec();
          func_0x000107714b48();
        }
        func_0x000107714850();
        func_0x000107714890();
        func_0x000107714bf4();
        func_0x000107715034();
        iVar6 = (int)puVar4;
        goto joined_r0x0001076c82fc;
      }
      func_0x000107714bfc();
      if ((int)puVar5 != 0) {
        func_0x000107718fd4();
        func_0x00010770d3c8();
        func_0x000107712000();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713c08();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107709610();
        func_0x000107710b1c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076c88a8;
        }
        func_0x0001077149e4();
        func_0x00010771a1dc();
        func_0x000107715dec();
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c6ec();
        goto LAB_1076c86e4;
      }
      func_0x000107714bfc();
      if ((int)puVar5 != 0) {
        func_0x000107718fd4();
        func_0x00010770d3c8();
        func_0x000107712000();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713c08();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107710b1c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x0001077169dc(*puVar5);
          func_0x00010771502c();
          func_0x000107708ba0();
          func_0x00010770c6ec();
          goto LAB_1076c82b8;
        }
        func_0x000107707ad0();
        goto LAB_1076c82e0;
      }
      func_0x000107714bfc();
      if ((int)puVar5 != 0) {
        func_0x000107718fd4();
        func_0x00010770d3c8();
        func_0x000107712000();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713c08();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107710b1c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x0001077169dc(*puVar5);
          func_0x00010771502c();
          func_0x000107708ba0();
          func_0x00010770c6ec();
          goto LAB_1076c82b8;
        }
        func_0x000107707ad0();
        goto LAB_1076c82e0;
      }
      func_0x000107714bfc();
      iVar3 = (int)puVar5;
      if (iVar3 != 0) {
        func_0x000107708884();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x000107714a5c();
          uVar1 = 0xd90;
          if ((bool)uVar2) {
            uVar1 = 0xfc0;
          }
          func_0x00010771d1b8(uVar1);
          func_0x00010770c364();
          func_0x000107708ba0();
          func_0x00010770c6ec();
          goto LAB_1076c82b8;
        }
        func_0x000107707ad0();
        goto LAB_1076c82e0;
      }
      func_0x000107714bfc();
      if (iVar3 == 0) {
        func_0x000107718fd4();
        func_0x00010770d3c8();
        func_0x000107710b1c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718fc8();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar2) {
          func_0x0001077149e4();
          func_0x00010771a1dc();
          func_0x0001077169dc();
          func_0x00010771502c();
          func_0x000107708ba0();
          func_0x00010770c6ec();
          goto LAB_1076c82b8;
        }
        func_0x000107707ad0();
        goto LAB_1076c82e0;
      }
      func_0x000107718fd4();
      func_0x00010770fda0();
      func_0x000107712000();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107714c1c();
      func_0x000107713c08();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x00010770cef8();
      func_0x00010770c3a0();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      iStack_10 = 0;
      func_0x000107718fc8();
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      if (iStack_10 == 0) {
        func_0x000107707428();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x000107714b50();
      if (!(bool)uVar2) {
        func_0x000107707ad0();
        goto LAB_1076c82e0;
      }
      func_0x0001077149e4();
      func_0x000107714a5c();
      uVar1 = 0xd90;
      if ((bool)uVar2) {
        uVar1 = 0xfc0;
      }
      func_0x00010771d1b8(uVar1);
      func_0x00010770c364();
      func_0x000107708ba0();
      func_0x00010770c6ec();
      goto LAB_1076c82b8;
    }
    func_0x000107718fd4();
    func_0x000107709610();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    iStack_10 = 0;
    func_0x000107718fc8();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    if (iStack_10 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107714b50();
    iVar6 = 0x13714640;
    if ((bool)uVar2) {
      func_0x0001077149e4();
      func_0x000107714a5c();
      uVar1 = 0xd90;
      if ((bool)uVar2) {
        uVar1 = 0xce8;
      }
      func_0x00010771d1b8(uVar1);
      func_0x00010770c364();
      func_0x000107708ba0();
      func_0x00010770c6ec();
      goto LAB_1076c82b8;
    }
    func_0x000107707ad0();
LAB_1076c82e0:
    func_0x00010770d3ec();
    func_0x000107714b48();
  }
  else {
LAB_1076c8244:
    func_0x000107718fd4();
    func_0x00010770d3c8();
    func_0x000107710b1c();
    func_0x00010770c4c4();
    func_0x000107714830();
    func_0x000107707abc();
    iStack_10 = 0;
    func_0x000107718fc8();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    if (iStack_10 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar2) {
      func_0x000107707ad0();
      goto LAB_1076c82e0;
    }
    func_0x0001077149e4();
    func_0x00010771a1dc();
    func_0x0001077169dc();
    func_0x00010771502c();
    func_0x000107708ba0();
    func_0x00010770c6ec();
LAB_1076c82b8:
    func_0x00010770c200();
    func_0x000107714838();
    func_0x00010770d8f8();
    func_0x00010770779c();
    func_0x000107714838();
    func_0x000107715718();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
joined_r0x0001076c82fc:
  uVar2 = iVar6 == 1;
  if ((bool)uVar2) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107714f14();
    func_0x00010726af18();
    func_0x000107714850();
    func_0x00010770c3d0();
    func_0x000107714bf4();
    func_0x000107715034();
    func_0x00010770cc2c();
    func_0x00010770c3b8();
    do {
      func_0x00010770cd04();
      func_0x0001077149ec();
    } while( true );
  }
  return;
}



/* Entry: 1076cd8b0; end: 1076ce54f;  */

void FUN_1076cd8b0(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  int iVar4;
  int unaff_w24;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  func_0x00010771f264();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x000107716994();
  func_0x00010770ddac();
  func_0x00010770c2cc();
  func_0x000107714838();
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    if (!(bool)in_ZR) goto LAB_1076cd948;
    func_0x0001077152cc();
    func_0x000107717850();
    if ((param_1 & 1) == 0) {
      func_0x00010771f258();
      func_0x000107714b98();
      if (param_1 != 0) {
        func_0x000107716994();
        goto LAB_1076cda60;
      }
      func_0x00010771a768();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771a75c();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x000107716994();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771a750();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x000107716994();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto LAB_1076cda1c;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076cda24;
        }
        goto LAB_1076cda44;
      }
      func_0x000107707e58();
      goto LAB_1076cda3c;
    }
    func_0x00010771d164();
LAB_1076cda60:
    func_0x000107714d34();
LAB_1076cda64:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076cda6c:
    func_0x000107714830();
  }
  else {
LAB_1076cd948:
    func_0x00010771a768();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771a75c();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x000107716994();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076cda3c:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076cda44:
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076cda6c;
    }
    func_0x000107715044();
    func_0x00010771a750();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076cda44;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x000107716994();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076cda1c:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076cda24:
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076cda64;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  iVar1 = 0x13715c58;
  iVar4 = 0x13715c58;
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar3) goto LAB_1076cdb3c;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if (param_1 == 0) {
      func_0x00010771d164();
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107714b7c();
        func_0x00010770985c();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770a534();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x0001077125d4();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = extraout_x8;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        iVar4 = iVar1;
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708238();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770a980();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770926c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x5b0;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        iVar4 = iVar1;
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708854();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770985c();
        func_0x00010770f758();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x658;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        iVar4 = iVar1;
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708208();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab98();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x658;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708250();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab88();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x7e0;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708220();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770aba8();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x7e0;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107707ff4();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x5b0;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        goto LAB_1076cdbac;
      }
      func_0x000107714c14();
      if (param_1 == 0) {
        func_0x000107707940();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076cdbcc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0x380;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        goto LAB_1076cdbac;
      }
      func_0x0001077083fc();
      func_0x00010770c85c();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x00010770b404();
      func_0x00010770c880();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010770926c();
      func_0x00010770c3a0();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      func_0x000107707428();
      func_0x000107714850();
      func_0x00010770c1c4();
      func_0x000107714b50();
      if ((bool)uVar3) {
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x380;
        if ((bool)uVar3) {
          uVar2 = 0x5b0;
        }
        func_0x0001077188f4(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c6bc();
        goto LAB_1076cdbac;
      }
      func_0x000107707ad0();
      goto LAB_1076cdbcc;
    }
    func_0x000107714b7c();
    func_0x000107709610();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    iVar4 = 0x13715c20;
    if (!(bool)uVar3) {
      func_0x000107707ad0();
      goto LAB_1076cdbcc;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0x380;
    if ((bool)uVar3) {
      uVar2 = 0x2d8;
    }
    func_0x0001077188f4(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c6bc();
  }
  else {
LAB_1076cdb3c:
    func_0x000107707940();
    func_0x00010770c3a0();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar3) {
      func_0x000107707ad0();
LAB_1076cdbcc:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076cdbd4;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0x9a0;
    if ((bool)uVar3) {
      uVar2 = 0x380;
    }
    func_0x0001077188f4(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c6bc();
  }
LAB_1076cdbac:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x0001077075a0();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076cdbd4:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar3 = iVar4 == 1;
  if ((bool)uVar3) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e03c();
  func_0x000107714850();
  func_0x00010770c3d0();
  func_0x000107714bf4();
  func_0x000107715034();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  do {
    func_0x00010770cd04();
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 1076d24dc; end: 1076d318b;  */

void FUN_1076d24dc(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  int iVar4;
  int unaff_w24;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x000107718554();
  func_0x00010770ddac();
  func_0x00010770c2cc();
  func_0x000107714838();
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    if (!(bool)in_ZR) goto LAB_1076d257c;
    func_0x0001077152cc();
    func_0x00010771dce8();
    if ((param_1 & 1) == 0) {
      func_0x000107714b98();
      if (param_1 != 0) {
        func_0x000107718554();
        goto LAB_1076d2698;
      }
      func_0x00010771f1a0();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771f194();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x000107718554();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771f188();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x000107718554();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto LAB_1076d2650;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076d2658;
        }
        goto LAB_1076d2678;
      }
      func_0x000107707e58();
      goto LAB_1076d2670;
    }
LAB_1076d2698:
    func_0x000107714d34();
LAB_1076d269c:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076d26a4:
    func_0x000107714830();
  }
  else {
LAB_1076d257c:
    func_0x00010771f1a0();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771f194();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x000107718554();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076d2670:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076d2678:
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076d26a4;
    }
    func_0x000107715044();
    func_0x00010771f188();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076d2678;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x000107718554();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076d2650:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076d2658:
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076d269c;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  iVar1 = 0x13717270;
  iVar4 = 0x13717270;
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar3) goto LAB_1076d2770;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if (param_1 == 0) {
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107714b7c();
        func_0x00010770985c();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770a534();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xaf0;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        iVar4 = iVar1;
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708238();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770a980();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770926c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xbd0;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        iVar4 = iVar1;
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708854();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770985c();
        func_0x00010770f758();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xc78;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        iVar4 = iVar1;
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708208();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab98();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xc78;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708250();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab88();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xe00;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708220();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770aba8();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xe00;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107707ff4();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xbd0;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        goto LAB_1076d27e0;
      }
      func_0x000107714c14();
      if (param_1 == 0) {
        func_0x000107707940();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076d2800;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0xfc0;
        if ((bool)uVar3) {
          uVar2 = 0x9a0;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        goto LAB_1076d27e0;
      }
      func_0x0001077083fc();
      func_0x00010770c85c();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x00010770b404();
      func_0x00010770c880();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010770926c();
      func_0x00010770c3a0();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      func_0x000107707428();
      func_0x000107714850();
      func_0x00010770c1c4();
      func_0x000107714b50();
      if ((bool)uVar3) {
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x9a0;
        if ((bool)uVar3) {
          uVar2 = 0xbd0;
        }
        func_0x000107718f5c(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c69c();
        goto LAB_1076d27e0;
      }
      func_0x000107707ad0();
      goto LAB_1076d2800;
    }
    func_0x000107714b7c();
    func_0x000107709610();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    iVar4 = 0x13717238;
    if (!(bool)uVar3) {
      func_0x000107707ad0();
      goto LAB_1076d2800;
    }
    func_0x0001077149e4();
    func_0x0001077144a0();
    uVar2 = 0x9a0;
    if ((bool)uVar3) {
      uVar2 = extraout_x8;
    }
    func_0x000107718f5c(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c69c();
  }
  else {
LAB_1076d2770:
    func_0x000107707940();
    func_0x00010770c3a0();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar3) {
      func_0x000107707ad0();
LAB_1076d2800:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076d2808;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0xfc0;
    if ((bool)uVar3) {
      uVar2 = 0x9a0;
    }
    func_0x000107718f5c(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c69c();
  }
LAB_1076d27e0:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x0001077075a0();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076d2808:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar3 = iVar4 == 1;
  if ((bool)uVar3) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e03c();
  func_0x000107714850();
  func_0x00010770c3d0();
  func_0x000107714bf4();
  func_0x000107715034();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  do {
    func_0x00010770cd04();
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 1076dd1b4; end: 1076dd9ff;  */

void FUN_1076dd1b4(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 unaff_w20;
  int unaff_w23;
  ulong unaff_x30;
  undefined1 auStack_210 [104];
  int iStack_1a8;
  undefined1 uStack_198;
  undefined1 auStack_e8 [104];
  int iStack_80;
  int iStack_10;
  
  func_0x00010771cb48();
  func_0x000107707aa0();
  if ((bRam00000001136d5568 & 1) == 0) {
    unaff_x30 = 0x1136d5568;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708e10(0x113719c00);
      unaff_x30 = 0x1136d5568;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5570 & 1) == 0) {
    unaff_x30 = 0x1136d5570;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708bb0(0x113719c38);
      unaff_x30 = 0x1136d5570;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5578 & 1) == 0) {
    unaff_x30 = 0x1136d5578;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708de0(0x113719c70);
      unaff_x30 = 0x1136d5578;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5580 & 1) == 0) {
    unaff_x30 = 0x1136d5580;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708dc0(0x113719ca8);
      unaff_x30 = 0x1136d5580;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5588 & 1) == 0) {
    unaff_x30 = 0x1136d5588;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708dd0(0x113719ce0);
      unaff_x30 = 0x1136d5588;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5590 & 1) == 0) {
    unaff_x30 = 0x1136d5590;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708e00(0x113719d18);
      unaff_x30 = 0x1136d5590;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5598 & 1) == 0) {
    unaff_x30 = 0x1136d5598;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708df0(0x113719d50);
      unaff_x30 = 0x1136d5598;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55a0 & 1) == 0) {
    unaff_x30 = 0x1136d55a0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708db0(0x113719d88);
      unaff_x30 = 0x1136d55a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55a8 & 1) == 0) {
    unaff_x30 = 0x1136d55a8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x00010770d04c(0x113719dc0);
      unaff_x30 = 0x1136d55a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55b0 & 1) == 0) {
    unaff_x30 = 0x1136d55b0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077095a0(0x113719df8);
      unaff_x30 = 0x1136d55b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55b8 & 1) == 0) {
    unaff_x30 = 0x1136d55b8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077098bc(0x113719e30);
      unaff_x30 = 0x1136d55b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55c0 & 1) == 0) {
    unaff_x30 = 0x1136d55c0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x00010770b448(0x113719e68);
      unaff_x30 = 0x1136d55c0;
      ___cxa_guard_release();
    }
  }
  func_0x000107712404();
  iStack_10 = 0;
  func_0x00010770f7dc();
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_10 == 0) {
    func_0x00010771ba9c();
    func_0x000107716320();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107715120(auStack_210);
  func_0x000107717a28();
  func_0x000107719fa0();
  func_0x000107714830();
  func_0x000107715564();
  func_0x000107714850();
  func_0x0001077188a0();
  if (!(bool)in_ZR) {
    iStack_10 = 0;
    uVar2 = unaff_x30;
LAB_1076dd328:
    iStack_80 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_80 == 0) {
      iStack_1a8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_210;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_1a8 == 0) {
        func_0x00010771ba9c();
        func_0x000107711978();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771a780();
      if ((bool)in_ZR) {
        func_0x000107718c7c();
        func_0x000107718d94();
        func_0x00010770e1d0();
        func_0x000107714848();
        func_0x000107714898();
        uVar1 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(uVar2);
          func_0x00010770c430();
          if (iStack_80 == 0) {
            func_0x00010771ba9c();
            func_0x000107713e80();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto LAB_1076dd34c;
        }
      }
      else {
        func_0x00010770b88c();
        uVar1 = in_ZR;
LAB_1076dd43c:
        func_0x00010770d3a4();
        func_0x0001077150e4();
      }
LAB_1076dd444:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      in_ZR = uVar1;
    }
    else {
LAB_1076dd34c:
      func_0x00010770c260();
      func_0x00010771c430();
      if ((bool)in_ZR) {
        func_0x000107716cbc();
        func_0x000107717538();
      }
      else {
        func_0x00010770b940();
LAB_1076dd41c:
        func_0x00010770eccc();
        func_0x000107715720();
      }
LAB_1076dd424:
      unaff_x30 = 0;
      func_0x000107714830();
      func_0x000107714850();
      in_ZR = unaff_w23 == 3;
      if ((bool)in_ZR) goto LAB_1076dd470;
    }
    unaff_x30 = 0;
    func_0x0001077193a8();
    goto LAB_1076dd500;
  }
  func_0x00010771c3e8();
  func_0x000107707ee8();
  func_0x000107715018();
  uVar2 = unaff_x30;
  if (!(bool)in_ZR) goto LAB_1076dd328;
  func_0x000107714bc0();
  uVar2 = unaff_x30;
  func_0x000104c32db4();
  if ((uVar2 & 1) == 0) {
    func_0x000107714c8c();
    if ((int)uVar2 != 0) {
      func_0x00010771ba9c();
      goto LAB_1076dd46c;
    }
    iStack_80 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_80 == 0) {
      iStack_1a8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_210;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_1a8 == 0) {
        func_0x00010771ba9c();
        func_0x000107711978();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771a780();
      if ((bool)in_ZR) {
        func_0x000107718c7c();
        func_0x000107718d94();
        func_0x00010770e1d0();
        func_0x000107714848();
        func_0x000107714898();
        uVar1 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(uVar2);
          func_0x00010770c430();
          if (iStack_80 == 0) {
            func_0x00010771ba9c();
            func_0x000107713e80();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto LAB_1076dd558;
        }
        goto LAB_1076dd444;
      }
      func_0x00010770b88c();
      uVar1 = in_ZR;
      goto LAB_1076dd43c;
    }
LAB_1076dd558:
    func_0x00010770c260();
    func_0x00010771c430();
    if (!(bool)in_ZR) {
      func_0x00010770b940();
      goto LAB_1076dd41c;
    }
    func_0x000107716cbc();
    func_0x000107717538();
    goto LAB_1076dd424;
  }
LAB_1076dd46c:
  func_0x000107717538();
LAB_1076dd470:
  func_0x0001077178bc();
  func_0x000107717e84();
  func_0x0001077128fc();
  if ((uVar2 & 1) == 0) {
LAB_1076dd4f4:
    func_0x00010771a924();
  }
  else {
    func_0x00010770f7dc();
    func_0x000107718200();
    puVar3 = auStack_e8;
    func_0x00010771878c();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010770ccbc();
      func_0x00010770ce5c();
      goto LAB_1076dd4f4;
    }
    func_0x00010770d70c();
    func_0x000107717e34();
    unaff_x30 = 0;
    func_0x0001077100f8();
    unaff_w20 = SUB81(puVar3,0);
    func_0x000107714830();
    func_0x000107714850();
    func_0x00010770ccbc();
    func_0x00010770ce5c();
    if (((ulong)puVar3 & 1) != 0) goto LAB_1076dd4f4;
    func_0x00010771fd28();
  }
  func_0x000107714ad4();
  func_0x0001077157a8();
LAB_1076dd500:
  func_0x00010770c324();
  func_0x000107714f40();
  func_0x000107715514();
  if ((unaff_x30 & 1) == 0) {
    uStack_198 = unaff_w20;
    func_0x0001077123b4();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d55c0);
    do {
      func_0x000107714988();
    } while( true );
  }
  return;
}



/* Entry: 1076e45dc; end: 1076e63a7;  */

/* WARNING: Possible PIC construction at 0x0001076e4f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076e5054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076e4f28) */
/* WARNING: Removing unreachable block (ram,0x0001076e4f34) */
/* WARNING: Removing unreachable block (ram,0x0001076e4ff0) */
/* WARNING: Removing unreachable block (ram,0x0001076e4f54) */
/* WARNING: Removing unreachable block (ram,0x0001076e5000) */
/* WARNING: Removing unreachable block (ram,0x0001076e4f60) */
/* WARNING: Removing unreachable block (ram,0x0001076e4f68) */
/* WARNING: Removing unreachable block (ram,0x0001076e4f78) */
/* WARNING: Removing unreachable block (ram,0x0001076e4f88) */
/* WARNING: Removing unreachable block (ram,0x0001076e4fb0) */
/* WARNING: Removing unreachable block (ram,0x0001076e5018) */
/* WARNING: Removing unreachable block (ram,0x0001076e501c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5020) */
/* WARNING: Removing unreachable block (ram,0x0001076e502c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5044) */
/* WARNING: Removing unreachable block (ram,0x0001076e5050) */
/* WARNING: Removing unreachable block (ram,0x0001076e5058) */
/* WARNING: Removing unreachable block (ram,0x0001076e5060) */
/* WARNING: Removing unreachable block (ram,0x0001076e5070) */
/* WARNING: Removing unreachable block (ram,0x0001076e50fc) */
/* WARNING: Removing unreachable block (ram,0x0001076e5080) */
/* WARNING: Removing unreachable block (ram,0x0001076e510c) */
/* WARNING: Removing unreachable block (ram,0x0001076e508c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5094) */
/* WARNING: Removing unreachable block (ram,0x0001076e50a4) */
/* WARNING: Removing unreachable block (ram,0x0001076e50b4) */
/* WARNING: Removing unreachable block (ram,0x0001076e50d8) */
/* WARNING: Removing unreachable block (ram,0x0001076e5124) */
/* WARNING: Removing unreachable block (ram,0x0001076e5128) */
/* WARNING: Removing unreachable block (ram,0x0001076e512c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5138) */
/* WARNING: Removing unreachable block (ram,0x0001076e5148) */
/* WARNING: Removing unreachable block (ram,0x0001076e5158) */
/* WARNING: Removing unreachable block (ram,0x0001076e5160) */
/* WARNING: Removing unreachable block (ram,0x0001076e5170) */
/* WARNING: Removing unreachable block (ram,0x0001076e5180) */
/* WARNING: Removing unreachable block (ram,0x0001076e5188) */
/* WARNING: Removing unreachable block (ram,0x0001076e5198) */
/* WARNING: Removing unreachable block (ram,0x0001076e51a8) */
/* WARNING: Removing unreachable block (ram,0x0001076e51c8) */
/* WARNING: Removing unreachable block (ram,0x0001076e51dc) */
/* WARNING: Removing unreachable block (ram,0x0001076e51f8) */
/* WARNING: Removing unreachable block (ram,0x0001076e51e4) */
/* WARNING: Removing unreachable block (ram,0x0001076e5200) */
/* WARNING: Removing unreachable block (ram,0x0001076e520c) */
/* WARNING: Removing unreachable block (ram,0x0001076e521c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5224) */
/* WARNING: Removing unreachable block (ram,0x0001076e5248) */
/* WARNING: Removing unreachable block (ram,0x0001076e5258) */
/* WARNING: Removing unreachable block (ram,0x0001076e5268) */
/* WARNING: Removing unreachable block (ram,0x0001076e5278) */
/* WARNING: Removing unreachable block (ram,0x0001076e5280) */
/* WARNING: Removing unreachable block (ram,0x0001076e5288) */
/* WARNING: Removing unreachable block (ram,0x0001076e5298) */
/* WARNING: Removing unreachable block (ram,0x0001076e52a8) */
/* WARNING: Removing unreachable block (ram,0x0001076e52b0) */
/* WARNING: Removing unreachable block (ram,0x0001076e52c0) */
/* WARNING: Removing unreachable block (ram,0x0001076e52d0) */
/* WARNING: Removing unreachable block (ram,0x0001076e52f0) */
/* WARNING: Removing unreachable block (ram,0x0001076e5300) */
/* WARNING: Removing unreachable block (ram,0x0001076e531c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5308) */
/* WARNING: Removing unreachable block (ram,0x0001076e5324) */
/* WARNING: Removing unreachable block (ram,0x0001076e5330) */
/* WARNING: Removing unreachable block (ram,0x0001076e5340) */
/* WARNING: Removing unreachable block (ram,0x0001076e537c) */
/* WARNING: Removing unreachable block (ram,0x0001076e5388) */
/* WARNING: Removing unreachable block (ram,0x0001076e53bc) */
/* WARNING: Removing unreachable block (ram,0x0001076e5390) */
/* WARNING: Removing unreachable block (ram,0x0001076e53c0) */

void FUN_1076e45dc(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  uint extraout_w8;
  char *unaff_x21;
  int iVar6;
  undefined1 auStack_a80 [224];
  int iStack_9a0;
  undefined1 *puStack_990;
  undefined1 *puStack_8d0;
  undefined1 auStack_8c8 [120];
  undefined1 auStack_850 [112];
  byte bStack_7e0;
  undefined1 auStack_7d8 [112];
  byte bStack_768;
  undefined1 auStack_760 [112];
  byte bStack_6f0;
  undefined1 auStack_6e8 [112];
  byte bStack_678;
  char acStack_668 [112];
  undefined1 auStack_5f8 [112];
  undefined1 auStack_588 [112];
  byte bStack_518;
  int iStack_510;
  undefined1 auStack_508 [112];
  undefined1 auStack_498 [112];
  undefined1 auStack_428 [112];
  byte bStack_3b8;
  int iStack_3b0;
  undefined1 auStack_3a8 [224];
  undefined1 auStack_2c8 [120];
  int iStack_250;
  char acStack_248 [112];
  undefined1 auStack_1d8 [216];
  undefined4 uStack_100;
  undefined1 auStack_88 [112];
  byte bStack_18;
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d5960 & 1) == 0) {
    iVar6 = 0x136d5960;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708dc0(0x11371b758);
      ___cxa_guard_release(0x1136d5960);
    }
  }
  if ((bRam00000001136d5968 & 1) == 0) {
    iVar6 = 0x136d5968;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a0ec(0x11371b790);
      ___cxa_guard_release(0x1136d5968);
    }
  }
  if ((bRam00000001136d5970 & 1) == 0) {
    iVar6 = 0x136d5970;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f50(0x11371b7c8);
      ___cxa_guard_release(0x1136d5970);
    }
  }
  if ((bRam00000001136d5978 & 1) == 0) {
    iVar6 = 0x136d5978;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f00(0x11371b800);
      ___cxa_guard_release(0x1136d5978);
    }
  }
  if ((bRam00000001136d5980 & 1) == 0) {
    iVar6 = 0x136d5980;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a4ac(0x11371b838);
      ___cxa_guard_release(0x1136d5980);
    }
  }
  if ((bRam00000001136d5988 & 1) == 0) {
    iVar6 = 0x136d5988;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708ef0(0x11371b870);
      ___cxa_guard_release(0x1136d5988);
    }
  }
  if ((bRam00000001136d5990 & 1) == 0) {
    iVar6 = 0x136d5990;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708ee0(0x11371b8a8);
      ___cxa_guard_release(0x1136d5990);
    }
  }
  if ((bRam00000001136d5998 & 1) == 0) {
    iVar6 = 0x136d5998;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770927c(0x11371b8e0);
      ___cxa_guard_release(0x1136d5998);
    }
  }
  if ((bRam00000001136d59a0 & 1) == 0) {
    iVar6 = 0x136d59a0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770986c(0x11371b918);
      ___cxa_guard_release(0x1136d59a0);
    }
  }
  if ((bRam00000001136d59a8 & 1) == 0) {
    iVar6 = 0x136d59a8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077094a0(0x11371b950);
      ___cxa_guard_release(0x1136d59a8);
    }
  }
  if ((bRam00000001136d59b0 & 1) == 0) {
    iVar6 = 0x136d59b0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a49c(0x11371b988);
      ___cxa_guard_release(0x1136d59b0);
    }
  }
  if ((bRam00000001136d59b8 & 1) == 0) {
    iVar6 = 0x136d59b8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077090d0(0x11371b9c0);
      ___cxa_guard_release(0x1136d59b8);
    }
  }
  if ((bRam00000001136d59c0 & 1) == 0) {
    iVar6 = 0x136d59c0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a1c0(0x11371b9f8);
      ___cxa_guard_release(0x1136d59c0);
    }
  }
  if ((bRam00000001136d59c8 & 1) == 0) {
    iVar6 = 0x136d59c8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709738(0x11371ba30);
      ___cxa_guard_release(0x1136d59c8);
    }
  }
  if ((bRam00000001136d59d0 & 1) == 0) {
    iVar6 = 0x136d59d0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709728(0x11371ba68);
      ___cxa_guard_release(0x1136d59d0);
    }
  }
  if ((bRam00000001136d59d8 & 1) == 0) {
    iVar6 = 0x136d59d8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077090e0(0x11371baa0);
      ___cxa_guard_release(0x1136d59d8);
    }
  }
  if ((bRam00000001136d59e0 & 1) == 0) {
    iVar6 = 0x136d59e0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077090f0(0x11371bad8);
      ___cxa_guard_release(0x1136d59e0);
    }
  }
  if ((bRam00000001136d59e8 & 1) == 0) {
    iVar6 = 0x136d59e8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709060(0x11371bb10);
      ___cxa_guard_release(0x1136d59e8);
    }
  }
  if ((bRam00000001136d59f0 & 1) == 0) {
    iVar6 = 0x136d59f0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708e10(0x11371bb48);
      ___cxa_guard_release(0x1136d59f0);
    }
  }
  if ((bRam00000001136d59f8 & 1) == 0) {
    iVar6 = 0x136d59f8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708bb0(0x11371bb80);
      ___cxa_guard_release(0x1136d59f8);
    }
  }
  if ((bRam00000001136d5a00 & 1) == 0) {
    iVar6 = 0x136d5a00;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708de0(0x11371bbb8);
      ___cxa_guard_release(0x1136d5a00);
    }
  }
  if ((bRam00000001136d5a08 & 1) == 0) {
    iVar6 = 0x136d5a08;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708dd0(0x11371bbf0);
      ___cxa_guard_release(0x1136d5a08);
    }
  }
  if ((bRam00000001136d5a10 & 1) == 0) {
    iVar6 = 0x136d5a10;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708e00(0x11371bc28);
      ___cxa_guard_release(0x1136d5a10);
    }
  }
  if ((bRam00000001136d5a18 & 1) == 0) {
    iVar6 = 0x136d5a18;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708df0(0x11371bc60);
      ___cxa_guard_release(0x1136d5a18);
    }
  }
  if ((bRam00000001136d5a20 & 1) == 0) {
    iVar6 = 0x136d5a20;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708db0(0x11371bc98);
      ___cxa_guard_release(0x1136d5a20);
    }
  }
  if ((bRam00000001136d5a28 & 1) == 0) {
    iVar6 = 0x136d5a28;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077092ac(0x11371bcd0);
      ___cxa_guard_release(0x1136d5a28);
    }
  }
  if ((bRam00000001136d5a30 & 1) == 0) {
    iVar6 = 0x136d5a30;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a1b0(0x11371bd08);
      ___cxa_guard_release(0x1136d5a30);
    }
  }
  if ((bRam00000001136d5a38 & 1) == 0) {
    iVar6 = 0x136d5a38;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a9c(0x11371bd40);
      ___cxa_guard_release(0x1136d5a38);
    }
  }
  if ((bRam00000001136d5a40 & 1) == 0) {
    iVar6 = 0x136d5a40;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f70(0x11371bd78);
      ___cxa_guard_release(0x1136d5a40);
    }
  }
  if ((bRam00000001136d5a48 & 1) == 0) {
    iVar6 = 0x136d5a48;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708fd0(0x11371bdb0);
      ___cxa_guard_release(0x1136d5a48);
    }
  }
  if ((bRam00000001136d5a50 & 1) == 0) {
    iVar6 = 0x136d5a50;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a8c(0x11371bde8);
      ___cxa_guard_release(0x1136d5a50);
    }
  }
  if ((bRam00000001136d5a58 & 1) == 0) {
    iVar6 = 0x136d5a58;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a7c(0x11371be20);
      ___cxa_guard_release(0x1136d5a58);
    }
  }
  if ((bRam00000001136d5a60 & 1) == 0) {
    iVar6 = 0x136d5a60;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a6c(0x11371be58);
      ___cxa_guard_release(0x1136d5a60);
    }
  }
  if ((bRam00000001136d5a68 & 1) == 0) {
    iVar6 = 0x136d5a68;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a5c(0x11371be90);
      ___cxa_guard_release(0x1136d5a68);
    }
  }
  if ((bRam00000001136d5a70 & 1) == 0) {
    iVar6 = 0x136d5a70;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770995c(0x11371bec8);
      ___cxa_guard_release(0x1136d5a70);
    }
  }
  if ((bRam00000001136d5a78 & 1) == 0) {
    iVar6 = 0x136d5a78;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709570(0x11371bf00);
      ___cxa_guard_release(0x1136d5a78);
    }
  }
  if ((bRam00000001136d5a80 & 1) == 0) {
    iVar6 = 0x136d5a80;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a4c(0x11371bf38);
      ___cxa_guard_release(0x1136d5a80);
    }
  }
  if ((bRam00000001136d5a88 & 1) == 0) {
    iVar6 = 0x136d5a88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709394(0x11371bf70);
      ___cxa_guard_release(0x1136d5a88);
    }
  }
  if ((bRam00000001136d5a90 & 1) == 0) {
    iVar6 = 0x136d5a90;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a3c(0x11371bfa8);
      ___cxa_guard_release(0x1136d5a90);
    }
  }
  if ((bRam00000001136d5a98 & 1) == 0) {
    iVar6 = 0x136d5a98;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a2c(0x11371bfe0);
      ___cxa_guard_release(0x1136d5a98);
    }
  }
  if ((bRam00000001136d5aa0 & 1) == 0) {
    iVar6 = 0x136d5aa0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a0dc(0x11371c018);
      ___cxa_guard_release(0x1136d5aa0);
    }
  }
  if ((bRam00000001136d5aa8 & 1) == 0) {
    iVar6 = 0x136d5aa8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077093c4(0x11371c050);
      ___cxa_guard_release(0x1136d5aa8);
    }
  }
  if ((bRam00000001136d5ab0 & 1) == 0) {
    iVar6 = 0x136d5ab0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a1c(0x11371c088);
      ___cxa_guard_release(0x1136d5ab0);
    }
  }
  if ((bRam00000001136d5ab8 & 1) == 0) {
    iVar6 = 0x136d5ab8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709020(0x11371c0c0);
      ___cxa_guard_release(0x1136d5ab8);
    }
  }
  if ((bRam00000001136d5ac0 & 1) == 0) {
    iVar6 = 0x136d5ac0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077093a4(0x11371c0f8);
      ___cxa_guard_release(0x1136d5ac0);
    }
  }
  if ((bRam00000001136d5ac8 & 1) == 0) {
    iVar6 = 0x136d5ac8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709a0c(0x11371c130);
      ___cxa_guard_release(0x1136d5ac8);
    }
  }
  if ((bRam00000001136d5ad0 & 1) == 0) {
    iVar6 = 0x136d5ad0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077099fc(0x11371c168);
      ___cxa_guard_release(0x1136d5ad0);
    }
  }
  if ((bRam00000001136d5ad8 & 1) == 0) {
    iVar6 = 0x136d5ad8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a57c(0x11371c1a0);
      ___cxa_guard_release(0x1136d5ad8);
    }
  }
  if ((bRam00000001136d5ae0 & 1) == 0) {
    iVar6 = 0x136d5ae0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077099ac(0x11371c1d8);
      ___cxa_guard_release(0x1136d5ae0);
    }
  }
  if ((bRam00000001136d5ae8 & 1) == 0) {
    iVar6 = 0x136d5ae8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a990(0x11371c210);
      ___cxa_guard_release(0x1136d5ae8);
    }
  }
  if ((bRam00000001136d5af0 & 1) == 0) {
    iVar6 = 0x136d5af0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709eac(0x11371c248);
      ___cxa_guard_release(0x1136d5af0);
    }
  }
  if ((bRam00000001136d5af8 & 1) == 0) {
    iVar6 = 0x136d5af8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709e9c(0x11371c280);
      ___cxa_guard_release(0x1136d5af8);
    }
  }
  uStack_100 = 0;
  iVar6 = 0x1371b758;
  func_0x000107714c2c(auStack_1d8);
  pcVar4 = acStack_248;
  func_0x00010770c178();
  func_0x0001077174e0();
  uVar3 = iStack_250 == 1;
  if ((bool)uVar3) {
    func_0x00010771d7f8();
    func_0x00010756e584();
    iVar6 = 0x1371b870;
    uVar3 = *pcVar4 == '\x01';
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cd04();
      func_0x00010771d044();
      func_0x00010771039c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_9a0 == 0) {
        func_0x00010771d038();
        func_0x00010771039c();
        func_0x00010770c37c();
        func_0x000107714860();
      }
      func_0x00010770ee6c();
      func_0x000107714848();
      func_0x000107714898();
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x000107715900();
        func_0x000107714858();
        if ((bStack_3b8 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4ba0;
          func_0x000107714870();
          func_0x00010771d7f0();
          func_0x000107714858();
        }
        func_0x00010770d9e4();
        func_0x00010770b1c0();
        puStack_990 = auStack_428;
        func_0x000107707b44();
        do {
          func_0x000107714ea0();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_588);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x0001077186b4();
          func_0x00010771538c();
LAB_1076e5408:
          func_0x00010771a388();
          iVar6 = 0x1371b870;
          goto LAB_1076e5434;
        }
      }
LAB_1076e4ba0:
      func_0x0001077186b4();
      func_0x00010771538c();
      iVar6 = 0x1371b870;
      goto LAB_1076e5434;
    }
    func_0x00010771d7cc();
    func_0x00010770b3f4(auStack_3a8);
    func_0x0001077174d0();
    uVar3 = iStack_3b0 == 1;
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_428);
LAB_1076e5428:
      func_0x00010771180c();
      func_0x0001077117f4();
      func_0x0001077117e8();
      iVar6 = 0x1371b870;
      goto LAB_1076e5434;
    }
    func_0x00010771d7e8();
    func_0x00010756e584();
    func_0x000107714974();
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cbb4();
      func_0x00010771d044();
      func_0x00010771038c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_9a0 == 0) {
        func_0x00010771d038();
        func_0x00010771038c();
        func_0x00010770c37c();
        func_0x000107714860();
      }
      func_0x00010770ee6c();
      func_0x000107714848();
      func_0x000107714898();
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x000107715900();
        func_0x000107714858();
        if ((bStack_518 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4ce4;
          func_0x000107714870();
          func_0x00010771d7e0();
          func_0x000107714858();
        }
        func_0x00010770d9e4();
        func_0x00010770b1c0();
        puStack_990 = auStack_588;
        func_0x000107707b44();
        do {
          func_0x000107714ea0();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_6e8);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x0001077186ac();
          func_0x00010771538c();
LAB_1076e53fc:
          func_0x00010771180c();
          func_0x0001077117f4();
          func_0x0001077117e8();
          goto LAB_1076e5408;
        }
      }
LAB_1076e4ce4:
      func_0x0001077186ac();
      func_0x00010771538c();
      goto LAB_1076e5428;
    }
    func_0x0001072ddd58(auStack_498,0x11371b950);
    func_0x00010770c178(auStack_508);
    func_0x0001077174c0();
    uVar3 = iStack_510 == 1;
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_588);
LAB_1076e541c:
      func_0x000107711818();
      func_0x00010771183c();
      func_0x000107711800();
      goto LAB_1076e5428;
    }
    func_0x00010771d7d8();
    func_0x00010756e584();
    func_0x000107714974();
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cba4();
      func_0x00010771d044();
      func_0x00010771036c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_9a0 == 0) {
        func_0x00010771d038();
        func_0x00010771036c();
        func_0x00010770c37c();
        func_0x000107714860();
      }
      func_0x00010770ee6c();
      func_0x000107714848();
      func_0x000107714898();
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x000107715900();
        func_0x000107714858();
        if ((bStack_678 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4f00;
          func_0x000107714870();
          func_0x00010771d7b8();
          func_0x000107714858();
        }
        func_0x00010770d9e4();
        func_0x00010770b1c0();
        puStack_990 = auStack_6e8;
        func_0x000107707b44();
        do {
          func_0x000107714ea0();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_760);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x0001077186a4();
          func_0x00010771538c();
LAB_1076e53f0:
          func_0x000107711818();
          func_0x00010771183c();
          func_0x000107711800();
          goto LAB_1076e53fc;
        }
      }
LAB_1076e4f00:
      func_0x0001077186a4();
      func_0x00010771538c();
      goto LAB_1076e541c;
    }
    func_0x0001072ddd58(auStack_5f8,0x11371b9c0);
    pcVar4 = acStack_668;
    func_0x00010770c178();
    func_0x000107711ca8();
    func_0x00010771cf78();
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_6e8);
LAB_1076e5410:
      func_0x00010771005c();
      func_0x00010770fe04();
      func_0x00010770fdf8();
      goto LAB_1076e541c;
    }
    func_0x00010771ab18();
    func_0x00010756e584();
    uVar3 = *pcVar4 == '\x01';
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x0001077074c4();
      func_0x000107712ba8();
      func_0x00010770ec50();
      func_0x000107714860();
      func_0x000107714898();
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x0001077153c0();
        func_0x000107714858();
        if ((bStack_7e0 & 1) == 0) {
          func_0x000107712ba8();
          func_0x00010770ec50();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4fd8;
          func_0x000107714870();
          func_0x0001077150d4();
          func_0x000107714858();
        }
        if ((bStack_768 & 1) == 0) {
          func_0x000107712ba8();
          func_0x00010770ec50();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4fd8;
          func_0x000107714870();
          func_0x00010771515c();
          func_0x000107714858();
        }
        if ((bStack_18 & 1) == 0) {
          iStack_9a0 = 0;
          func_0x00010771d044();
          func_0x000107712c44();
          func_0x00010770ee54();
          func_0x000107714888();
          if (iStack_9a0 == 0) {
            func_0x00010771d038();
            func_0x000107712c44();
            func_0x00010770ee54();
            func_0x000107714888();
          }
          func_0x00010770ee6c();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4fd8;
          func_0x000107714870();
          func_0x000107715900();
          func_0x000107714858();
        }
        if ((bStack_6f0 & 1) == 0) {
          func_0x000107712ba8();
          func_0x00010770ec50();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076e4fd8;
          func_0x000107714870();
          func_0x000107714cbc();
          func_0x000107714858();
        }
        func_0x0001077144c0();
        func_0x0001077134c4(auStack_8c8);
        func_0x0001077134b4(auStack_850);
        func_0x000107713458(auStack_7d8);
        func_0x00010771371c(auStack_88);
        puStack_8d0 = auStack_760;
        func_0x000107707d9c();
        func_0x000107715164();
        do {
          func_0x00010771b500();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_a80);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x000107714d80();
          func_0x000107715024();
          func_0x00010771507c();
          func_0x0001077150ac();
          func_0x00010771538c();
          func_0x00010771005c();
          func_0x00010770fe04();
          func_0x00010770fdf8();
          goto LAB_1076e53f0;
        }
      }
LAB_1076e4fd8:
      func_0x000107714d80();
      func_0x000107715024();
      func_0x00010771507c();
      func_0x0001077150ac();
      func_0x00010771538c();
      goto LAB_1076e5410;
    }
    func_0x0001077074c4();
    func_0x00010771314c();
    func_0x000107714af0();
  }
  else {
    func_0x00010770c1d0(auStack_2c8);
LAB_1076e5434:
    func_0x00010771349c();
    func_0x000107710338();
    func_0x000107713440();
    func_0x0001077134a8();
    func_0x000107707d28();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    pcVar4 = (char *)0x1136d5af8;
    ___cxa_guard_abort();
    func_0x000107714988();
  }
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718548();
  func_0x00010770debc();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770df98();
  func_0x0001077099bc();
  func_0x00010770dec8();
  func_0x000107714830();
  func_0x00010771505c();
  func_0x000107714850();
  func_0x000107715a10();
  pcVar5 = pcVar4;
  if ((bool)uVar3) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    pcVar5 = pcVar4;
    if (!(bool)uVar3) goto code_r0x0001076e6448;
    func_0x000107714bc0();
    pcVar5 = pcVar4;
    func_0x00010771da2c();
    unaff_x21 = pcVar4;
    if (((ulong)pcVar5 & 1) != 0) {
code_r0x0001076e656c:
      func_0x000107714da8();
code_r0x0001076e6570:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if (((ulong)pcVar5 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)uVar3) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (char *)(ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076e65d0;
    }
    func_0x000107714c8c();
    if ((int)pcVar5 != 0) {
      func_0x000107718548();
      goto code_r0x0001076e656c;
    }
    func_0x00010771ef00();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eef4();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718548();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)uVar3) {
      func_0x000107714cc4();
      func_0x00010771eee8();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718548();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)uVar3) {
          func_0x000107707ed4();
          goto code_r0x0001076e651c;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076e6524;
      }
      goto code_r0x0001076e6544;
    }
    func_0x000107707eac();
    uVar2 = uVar3;
code_r0x0001076e653c:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076e6544:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    uVar3 = uVar2;
  }
  else {
code_r0x0001076e6448:
    func_0x00010771ef00();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eef4();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718548();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)uVar3) {
      func_0x000107707eac();
      uVar2 = uVar3;
      goto code_r0x0001076e653c;
    }
    func_0x000107714cc4();
    func_0x00010771eee8();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)uVar3) goto code_r0x0001076e6544;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718548();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)uVar3) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076e651c:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076e6524:
    func_0x000107714830();
    func_0x000107714850();
    uVar3 = iVar6 == 3;
    if ((bool)uVar3) goto code_r0x0001076e6570;
  }
  func_0x000107715758();
code_r0x0001076e65d0:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if (((ulong)unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c284();
  func_0x000107714858();
  func_0x000107714830();
  func_0x0001077151f4();
  func_0x00010726af18();
  func_0x00010770d27c();
  func_0x00010770c324();
  func_0x00010770d640();
  func_0x000107714b48();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076eae1c; end: 1076eb5cb;  */

void FUN_1076eae1c(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  uint unaff_w23;
  undefined8 in_stack_00000040;
  undefined1 auStack_898 [104];
  int iStack_830;
  int iStack_7c0;
  int iStack_750;
  int iStack_6e0;
  undefined1 auStack_6d8 [112];
  byte bStack_668;
  undefined1 auStack_660 [160];
  undefined8 *puStack_5c0;
  undefined *puStack_5b8;
  int iStack_5b0;
  undefined1 auStack_4d8 [120];
  undefined1 auStack_460 [112];
  byte bStack_3f0;
  undefined1 auStack_3e8 [112];
  byte bStack_378;
  byte bStack_300;
  byte bStack_288;
  undefined1 auStack_c0 [192];
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d5d18 & 1) == 0) {
    iVar3 = 0x136d5d18;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f50(0x11371d128);
      ___cxa_guard_release(0x1136d5d18);
    }
  }
  if ((bRam00000001136d5d20 & 1) == 0) {
    iVar3 = 0x136d5d20;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f00(0x11371d160);
      ___cxa_guard_release(0x1136d5d20);
    }
  }
  if ((bRam00000001136d5d28 & 1) == 0) {
    iVar3 = 0x136d5d28;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770986c(0x11371d198);
      ___cxa_guard_release(0x1136d5d28);
    }
  }
  if ((bRam00000001136d5d30 & 1) == 0) {
    iVar3 = 0x136d5d30;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708bb0(0x11371d1d0);
      ___cxa_guard_release(0x1136d5d30);
    }
  }
  if ((bRam00000001136d5d38 & 1) == 0) {
    iVar3 = 0x136d5d38;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a18c(0x11371d208);
      ___cxa_guard_release(0x1136d5d38);
    }
  }
  if ((bRam00000001136d5d40 & 1) == 0) {
    iVar3 = 0x136d5d40;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a850(0x11371d240);
      ___cxa_guard_release(0x1136d5d40);
    }
  }
  if ((bRam00000001136d5d48 & 1) == 0) {
    iVar3 = 0x136d5d48;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770b4c8(0x11371d278);
      ___cxa_guard_release(0x1136d5d48);
    }
  }
  if ((bRam00000001136d5d50 & 1) == 0) {
    iVar3 = 0x136d5d50;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077090e0(0x11371d2b0);
      ___cxa_guard_release(0x1136d5d50);
    }
  }
  if ((bRam00000001136d5d58 & 1) == 0) {
    iVar3 = 0x136d5d58;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077090f0(0x11371d2e8);
      ___cxa_guard_release(0x1136d5d58);
    }
  }
  if ((bRam00000001136d5d60 & 1) == 0) {
    iVar3 = 0x136d5d60;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107709060(0x11371d320);
      ___cxa_guard_release(0x1136d5d60);
    }
  }
  if ((bRam00000001136d5d68 & 1) == 0) {
    iVar3 = 0x136d5d68;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ef0(0x11371d358);
      ___cxa_guard_release(0x1136d5d68);
    }
  }
  if ((bRam00000001136d5d70 & 1) == 0) {
    iVar3 = 0x136d5d70;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ee0(0x11371d390);
      ___cxa_guard_release(0x1136d5d70);
    }
  }
  func_0x00010770738c();
  func_0x000107709214();
  func_0x00010770cc74();
  func_0x00010770f170();
  func_0x00010770c330();
  if ((unaff_w23 & 1) == 0) {
    func_0x000107707718();
    func_0x000107714898();
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x00010770835c();
      func_0x000107714e60();
      func_0x00010770c330();
      func_0x000107714858();
      if (unaff_w23 == 0) goto LAB_1076eaf18;
      puVar4 = auStack_c0;
      func_0x000107707d58(puVar4);
      func_0x0001077180d0();
      if ((bool)in_ZR) {
        func_0x000107716fec();
        func_0x00010770c30c(puVar4);
        func_0x000107709e54();
        func_0x0001077102ac();
        func_0x000107718ed8();
        if ((bool)in_ZR) {
          func_0x0001077173f4();
          func_0x000107714974();
          if ((bool)in_ZR) {
            func_0x000107707b18();
            func_0x000107714898();
            if (!(bool)in_ZR) goto LAB_1076eaff4;
            func_0x000107714870();
            func_0x00010770835c();
            func_0x000107711064();
            func_0x00010771104c();
            func_0x000107710360();
            func_0x000107710744();
            func_0x000107715274();
            func_0x00010771612c();
            func_0x000107714848();
            func_0x000107714858();
          }
          else {
            func_0x00010771ee20();
            func_0x000107717714();
          }
          func_0x0001077109e4();
          func_0x000107711040();
          func_0x00010771ee20();
          func_0x000107717ca0();
          func_0x000107711058();
          func_0x0001077134fc();
          func_0x00010771513c();
          func_0x000107715ca8();
          func_0x00010770d80c();
          func_0x000107715484();
          func_0x000107714838();
          func_0x00010770f470();
          goto LAB_1076eaf20;
        }
        func_0x000107709d54();
        func_0x00010770c460();
        func_0x000107714ad4();
LAB_1076eaff4:
        func_0x00010770d80c();
        func_0x000107715484();
        func_0x000107714838();
        func_0x0001077155f8();
      }
      else {
        func_0x00010770f028();
      }
      func_0x00010727f7f8();
    }
  }
  else {
LAB_1076eaf18:
    func_0x00010771ee20();
    func_0x000107718a40();
LAB_1076eaf20:
    func_0x000107710ee0();
    func_0x00010770c2b4();
    func_0x000107714838();
  }
  func_0x000107715ab8();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x000107715708();
    func_0x000107714858();
    if ((bStack_3f0 & 1) == 0) {
      func_0x00010771ee20();
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076eb18c;
      func_0x000107714870();
      func_0x000107715538();
      func_0x000107714858();
    }
    if ((bStack_378 & 1) == 0) {
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076eb18c;
      func_0x000107714870();
      func_0x00010771548c();
      func_0x000107714858();
    }
    if ((bStack_288 & 1) == 0) {
      iStack_5b0 = 0;
      func_0x000107710c74();
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_5b0 == 0) {
        func_0x000107710c74();
        func_0x00010770c2e4();
        func_0x000107714848();
      }
      func_0x00010770c3dc();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076eb18c;
      func_0x000107714870();
      func_0x0001077153c0();
      func_0x000107714858();
    }
    if ((bStack_300 & 1) == 0) {
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076eb18c;
      func_0x000107714870();
      func_0x00010771543c();
      func_0x000107714858();
    }
    func_0x00010770929c();
    func_0x00010770928c(auStack_4d8);
    func_0x0001077094c0(auStack_460);
    func_0x0001077095c0(auStack_3e8);
    func_0x000107708384();
    func_0x000107718bf8();
    func_0x000107707604(auStack_c0);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
    } while (!(bool)in_ZR);
    func_0x0001077180d0();
    if ((bool)in_ZR) {
      func_0x000107716fec();
      func_0x000107707cfc();
      func_0x00010770c3dc();
      func_0x000107714850();
    }
    else {
      func_0x00010770c1d0(auStack_c0);
    }
    func_0x00010770f470();
  }
LAB_1076eb18c:
  func_0x000107714f20();
  func_0x000107714e58();
  func_0x000107714e1c();
  func_0x000107714e24();
  func_0x000107714d80();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5d70);
  func_0x000107714988();
  puVar5 = &DAT_1076eb5cc;
  func_0x000107715308();
  puStack_5c0 = &stack0x00000040;
  puStack_5b8 = puVar5;
  func_0x000107707ae4();
  if ((bRam00000001136d5d78 & 1) == 0) {
    iVar3 = 0x136d5d78;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ab38(0x11371d3c8);
      ___cxa_guard_release(0x1136d5d78);
    }
  }
  if ((bRam00000001136d5d80 & 1) == 0) {
    iVar3 = 0x136d5d80;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107710e04(0x11371d400);
      ___cxa_guard_release(0x1136d5d80);
    }
  }
  if ((bRam00000001136d5d88 & 1) == 0) {
    iVar3 = 0x136d5d88;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x11371d438,&UNK_10f421a88);
      ___cxa_guard_release(0x1136d5d88);
    }
  }
  if ((bRam00000001136d5d90 & 1) == 0) {
    iVar3 = 0x136d5d90;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x11371d470,&UNK_10f421acc);
      ___cxa_guard_release(0x1136d5d90);
    }
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_660);
  auStack_6d8[0] = 0;
  bStack_668 = 0;
  iStack_6e0 = 0;
  func_0x000107715d78();
  func_0x00010770c394();
  func_0x00010770c1dc();
  func_0x000107714830();
  if (iStack_6e0 == 0) {
    func_0x00010770d364();
    func_0x00010770c1dc();
    func_0x000107714830();
  }
  func_0x00010770c230();
  uVar2 = iStack_750 == 2;
  if (!(bool)uVar2) {
    func_0x0001077110d0();
    func_0x0001077158f8();
    func_0x00010770de00();
    func_0x00010771519c();
    goto code_r0x0001076eb7e4;
  }
  iStack_7c0 = 0;
  func_0x00010770cf68();
  func_0x00010770c37c();
  func_0x000107714860();
  if (iStack_7c0 == 0) {
    func_0x00010770c788();
    func_0x000107711638();
    func_0x000107714850();
    if (iStack_7c0 == 0) {
      func_0x00010770d364();
      func_0x00010770f86c();
      func_0x000107714890();
    }
  }
  func_0x00010770f524();
  uVar2 = iStack_830 == 2;
  if ((bool)uVar2) {
    if ((bStack_668 & 1) == 0) {
      func_0x00010771efac();
      func_0x00010770dc2c(2);
      func_0x000107714890();
      func_0x000107714898();
      if (!(bool)uVar2) goto code_r0x0001076eb7dc;
      func_0x000107714870();
      func_0x000107715be0();
      func_0x000107714858();
    }
    func_0x00010771df34();
    func_0x0001072cb4bc(auStack_898);
    func_0x0001077171bc();
    func_0x000107719f14();
    func_0x00010770e84c(auStack_6d8);
    func_0x000107712ecc();
    func_0x00010771577c();
    if ((bool)uVar2) {
      func_0x000107715228();
      func_0x00010756e584();
      func_0x000107714a5c();
      uVar1 = 0xb28;
      if ((bool)uVar2) {
        uVar1 = 0xb60;
      }
      func_0x000107714a68(uVar1,auStack_660);
      func_0x000107714d74();
      FUN_107579a48();
      func_0x00010770c2b4();
      func_0x000107714890();
    }
    else {
      func_0x0001077096cc();
    }
    func_0x00010770cd34();
    func_0x000107714888();
    func_0x000107714860();
  }
  else {
    func_0x0001077110d0();
    func_0x000107715ef8();
    func_0x00010770de00();
    func_0x00010771519c();
  }
code_r0x0001076eb7dc:
  func_0x000107714850();
  func_0x000107714848();
code_r0x0001076eb7e4:
  func_0x000107714830();
  func_0x000107714838();
  func_0x0001077160e4();
  func_0x00010771c394();
  func_0x000107708038();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5d90);
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076ef8e4; end: 1076f0583;  */

void FUN_1076ef8e4(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int iVar4;
  int unaff_w24;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x000107718530();
  func_0x00010770ddac();
  func_0x00010770c2cc();
  func_0x000107714838();
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    if (!(bool)in_ZR) goto LAB_1076ef984;
    func_0x0001077152cc();
    func_0x00010771d894();
    if ((param_1 & 1) == 0) {
      func_0x000107714b98();
      if (param_1 != 0) {
        func_0x000107718530();
        goto LAB_1076efaa0;
      }
      func_0x00010771ed28();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771ed1c();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x000107718530();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771ed10();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x000107718530();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto LAB_1076efa58;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076efa60;
        }
        goto LAB_1076efa80;
      }
      func_0x000107707e58();
      goto LAB_1076efa78;
    }
LAB_1076efaa0:
    func_0x000107714d34();
LAB_1076efaa4:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076efaac:
    func_0x000107714830();
  }
  else {
LAB_1076ef984:
    func_0x00010771ed28();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771ed1c();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x000107718530();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076efa78:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076efa80:
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076efaac;
    }
    func_0x000107715044();
    func_0x00010771ed10();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076efa80;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x000107718530();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076efa58:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076efa60:
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076efaa4;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  iVar1 = 0x1371e200;
  iVar4 = 0x1371e200;
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar3) goto LAB_1076efb7c;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if (param_1 == 0) {
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107714b7c();
        func_0x00010770985c();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770a534();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = 0xab8;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        iVar4 = iVar1;
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708238();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770a980();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770926c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x0001077131e4();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = extraout_x8;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        iVar4 = iVar1;
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708854();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770985c();
        func_0x00010770f758();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = 0xc40;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        iVar4 = iVar1;
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708208();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab98();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = 0xc40;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708250();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab88();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x000107713214();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_00;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708220();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770aba8();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x000107713214();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_01;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107707ff4();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x0001077131e4();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_02;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        goto LAB_1076efbec;
      }
      func_0x000107714c14();
      if (param_1 == 0) {
        func_0x000107707940();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076efc0c;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0xf88;
        if ((bool)uVar3) {
          uVar2 = 0xf50;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        goto LAB_1076efbec;
      }
      func_0x0001077083fc();
      func_0x00010770c85c();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x00010770b404();
      func_0x00010770c880();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010770926c();
      func_0x00010770c3a0();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      func_0x000107707428();
      func_0x000107714850();
      func_0x00010770c1c4();
      func_0x000107714b50();
      if ((bool)uVar3) {
        func_0x0001077149e4();
        func_0x0001077131e4();
        uVar2 = 0x968;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_03;
        }
        func_0x0001077188ac(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c61c();
        goto LAB_1076efbec;
      }
      func_0x000107707ad0();
      goto LAB_1076efc0c;
    }
    func_0x000107714b7c();
    func_0x000107709610();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    iVar4 = 0x1371e1c8;
    if (!(bool)uVar3) {
      func_0x000107707ad0();
      goto LAB_1076efc0c;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0x968;
    if ((bool)uVar3) {
      uVar2 = 0x8c0;
    }
    func_0x0001077188ac(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c61c();
  }
  else {
LAB_1076efb7c:
    func_0x000107707940();
    func_0x00010770c3a0();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar3) {
      func_0x000107707ad0();
LAB_1076efc0c:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076efc14;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0xf88;
    if ((bool)uVar3) {
      uVar2 = 0xf50;
    }
    func_0x0001077188ac(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c61c();
  }
LAB_1076efbec:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x0001077075a0();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076efc14:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar3 = iVar4 == 1;
  if ((bool)uVar3) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e03c();
  func_0x000107714850();
  func_0x00010770c3d0();
  func_0x000107714bf4();
  func_0x000107715034();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  do {
    func_0x00010770cd04();
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 1076f50c0; end: 1076f5d9f;  */

void FUN_1076f50c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_w8;
  int iVar6;
  int unaff_w23;
  int unaff_w24;
  undefined1 auStack_280 [112];
  undefined1 auStack_210 [104];
  int iStack_1a8;
  undefined4 uStack_138;
  int iStack_80;
  int iStack_10;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (uint)param_1;
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  iStack_10 = 0;
  func_0x00010771ec14();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  if (iStack_10 == 0) {
    func_0x0001077165a8();
    func_0x00010770ddac();
    func_0x00010770c2cc();
    func_0x000107714838();
  }
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    if (!(bool)in_ZR) goto LAB_1076f5158;
    func_0x0001077152cc();
    func_0x000107717498();
    if ((uVar4 & 1) == 0) {
      func_0x00010771ec08();
      func_0x000107714b98();
      if (uVar4 != 0) {
        func_0x0001077165a8();
        goto LAB_1076f5270;
      }
      iStack_80 = 0;
      func_0x00010771a5a0();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      if (iStack_80 == 0) {
        iStack_1a8 = 0;
        func_0x00010771a594();
        func_0x000107708fa0();
        func_0x000107708f90();
        func_0x000107714838();
        if (iStack_1a8 == 0) {
          func_0x0001077165a8();
          func_0x00010770ceb0();
          func_0x00010770c290();
          func_0x000107714838();
        }
        func_0x00010770c3f4();
        func_0x0001077154a0();
        if ((bool)in_ZR) {
          func_0x000107715044();
          func_0x00010771a588();
          func_0x00010771503c();
          func_0x000107707e98();
          func_0x000107714860();
          func_0x0001077150bc();
          if ((bool)in_ZR) {
            func_0x000107714c84();
            func_0x000107707ec0();
            func_0x00010770cdcc();
            if (iStack_80 == 0) {
              func_0x0001077165a8();
              func_0x00010770cea4();
              func_0x00010770cce0();
              func_0x000107714888();
            }
            func_0x000107714860();
            func_0x00010770c3b8();
            func_0x000107714838();
            func_0x000107714848();
            goto LAB_1076f54f8;
          }
          goto LAB_1076f5254;
        }
        func_0x000107707e58();
        goto LAB_1076f524c;
      }
LAB_1076f54f8:
      func_0x00010770c4e8();
      func_0x0001077154c0();
      if (!(bool)in_ZR) {
        func_0x000107707e6c();
        goto LAB_1076f522c;
      }
      func_0x000107714f50();
      func_0x000107714d34();
      goto LAB_1076f5234;
    }
    func_0x00010771cf6c();
LAB_1076f5270:
    func_0x000107714d34();
LAB_1076f5274:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076f527c:
    func_0x000107714830();
  }
  else {
    iStack_10 = 0;
LAB_1076f5158:
    iStack_80 = 0;
    func_0x00010771a5a0();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    if (iStack_80 == 0) {
      iStack_1a8 = 0;
      func_0x00010771a594();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      if (iStack_1a8 == 0) {
        func_0x0001077165a8();
        func_0x00010770ceb0();
        func_0x00010770c290();
        func_0x000107714838();
      }
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771a588();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          if (iStack_80 == 0) {
            func_0x0001077165a8();
            func_0x00010770cea4();
            func_0x00010770cce0();
            func_0x000107714888();
          }
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          goto LAB_1076f5174;
        }
      }
      else {
        func_0x000107707e58();
LAB_1076f524c:
        func_0x00010770dd7c();
        func_0x000107714ed0();
      }
LAB_1076f5254:
      unaff_w23 = (int)auStack_280;
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076f527c;
    }
LAB_1076f5174:
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076f522c:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076f5234:
    unaff_w23 = (int)auStack_210;
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076f5274;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  iVar6 = 0x1371f8f8;
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar3) goto LAB_1076f5360;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if (uVar4 != 0) {
      func_0x000107714b7c();
      iVar6 = 0x1371f7e0;
      func_0x000107709610();
      func_0x00010770d76c();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      iStack_10 = 0;
      func_0x000107718f20();
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      if (iStack_10 == 0) {
        func_0x000107707428();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x000107714b50();
      if (!(bool)uVar3) {
        func_0x000107707ad0();
        goto LAB_1076f55cc;
      }
      func_0x0001077149e4();
      func_0x000107714a5c();
      uVar2 = 0xf88;
      if ((bool)uVar3) {
        uVar2 = 0xee0;
      }
      func_0x000107718a48(uVar2);
      func_0x00010770c364();
      func_0x000107708ba0();
      func_0x00010770c5dc();
      goto LAB_1076f5340;
    }
    func_0x00010771cf6c();
    func_0x000107714c14();
    if (uVar4 == 0) {
      func_0x000107714c14();
      iVar1 = 0x1371f9a0;
      unaff_w23 = 0x1371f9a0;
      if (uVar4 != 0) {
        func_0x000107714b7c();
        func_0x00010770ef24();
        func_0x00010770c85c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x00010770ec68();
        func_0x00010770c880();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107709610();
        func_0x00010770d02c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          unaff_w23 = iVar1;
          goto LAB_1076f53f8;
        }
        func_0x0001077149e4();
        func_0x00010770fd10();
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c5dc();
        unaff_w23 = iVar1;
        goto LAB_1076f53d4;
      }
      func_0x000107714c14();
      if (uVar4 != 0) {
        func_0x000107714b7c();
        func_0x00010770ef18();
        func_0x00010770c85c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x0001077165a8();
        func_0x000107714c1c();
        func_0x000107714954();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107709610();
        func_0x00010770d02c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          unaff_w23 = iVar1;
          goto LAB_1076f53f8;
        }
        func_0x0001077149e4();
        func_0x00010770fd10();
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c5dc();
        unaff_w23 = iVar1;
        goto LAB_1076f53d4;
      }
      func_0x000107714c14();
      if (uVar4 != 0) {
        func_0x00010770ff98();
        func_0x0001072ddd58();
        func_0x00010770c85c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x00010770ef0c();
        func_0x00010770c880();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107709610();
        func_0x00010770d02c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          unaff_w23 = iVar1;
          goto LAB_1076f53f8;
        }
        func_0x0001077149e4();
        func_0x00010770fd10();
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c5dc();
        unaff_w23 = iVar1;
        goto LAB_1076f53d4;
      }
      func_0x000107714c14();
      if (uVar4 != 0) {
        func_0x00010770ff98();
        func_0x0001072ddd58();
        func_0x00010770c85c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x00010770ef00();
        func_0x00010770c880();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x00010770d02c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if ((bool)uVar3) {
          func_0x0001077149e4();
          func_0x0001077169dc(*(undefined1 *)CONCAT44(uVar5,uVar4));
          func_0x00010771502c();
          func_0x000107708ba0();
          func_0x00010770c5dc();
LAB_1076f5340:
          func_0x00010770c200();
          func_0x000107714838();
          func_0x00010770d8f8();
          func_0x0001077075a0();
          func_0x000107714838();
          func_0x000107715718();
        }
        else {
          func_0x000107707ad0();
LAB_1076f55cc:
          func_0x00010770d3ec();
          func_0x000107714b48();
        }
        func_0x000107714850();
        func_0x000107714890();
        func_0x000107714bf4();
        func_0x000107715034();
        goto joined_r0x0001076f5414;
      }
      func_0x000107714c14();
      if (uVar4 != 0) {
        func_0x00010770ff98();
        func_0x0001072ddd58();
        func_0x00010770c85c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x00010770efbc();
        func_0x00010770c880();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x00010770d02c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076f55cc;
        }
        func_0x0001077149e4();
        func_0x0001077169dc(*(undefined1 *)CONCAT44(uVar5,uVar4));
        func_0x00010771502c();
        func_0x000107708ba0();
        func_0x00010770c5dc();
        goto LAB_1076f5340;
      }
      func_0x000107714c14();
      if (uVar4 != 0) {
        func_0x000107714b7c();
        func_0x000107709610();
        func_0x00010770d02c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076f53f8;
        }
        func_0x0001077149e4();
        func_0x00010770fd10();
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c5dc();
        goto LAB_1076f53d4;
      }
      func_0x000107714c14();
      if (uVar4 == 0) {
        func_0x000107714b7c();
        func_0x00010770fda0();
        func_0x00010770d02c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107718f20();
        func_0x000107707f34();
        func_0x000107709490();
        func_0x000107714838();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076f53f8;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x5b0;
        if ((bool)uVar3) {
          uVar2 = 0x578;
        }
        func_0x00010770df8c(uVar2);
        func_0x000107708f10();
        func_0x00010770c5dc();
        goto LAB_1076f53d4;
      }
      func_0x00010770ff98();
      func_0x0001072ddd58();
      func_0x00010770c85c();
      func_0x00010770c4c4();
      func_0x000107714830();
      func_0x00010770f2b4();
      func_0x00010770c880();
      func_0x00010770c4c4();
      func_0x000107714830();
      func_0x000107709610();
      func_0x00010770d02c();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      iStack_10 = 0;
      func_0x000107718f20();
      func_0x000107707f34();
      func_0x000107709490();
      func_0x000107714838();
      if (iStack_10 == 0) {
        func_0x000107707428();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x000107715494();
      if ((bool)uVar3) {
        func_0x0001077149e4();
        func_0x00010770fd10();
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c5dc();
        goto LAB_1076f53d4;
      }
      func_0x000107707ad0();
      goto LAB_1076f53f8;
    }
    func_0x000107709434();
    func_0x000107714d54();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x00010770ccf8();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x00010770ccf8();
    func_0x00010770d02c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    iStack_10 = 0;
    func_0x000107718f20();
    func_0x000107707f34();
    func_0x000107709490();
    func_0x000107714838();
    if (iStack_10 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107715494();
    if (!(bool)uVar3) {
      func_0x000107707ad0();
      goto LAB_1076f53f8;
    }
    func_0x0001077149e4();
    func_0x00010770fd10();
    func_0x00010771502c();
    func_0x000107708f10();
    func_0x00010770c5dc();
LAB_1076f53d4:
    func_0x00010770c4c4();
    func_0x000107714830();
    func_0x00010770d8f8();
    func_0x0001077077f4();
    func_0x000107714878();
    func_0x000107714830();
    func_0x000107715718();
  }
  else {
    uStack_138 = 0;
LAB_1076f5360:
    func_0x000107714b7c();
    func_0x00010770fda0();
    func_0x00010770d02c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    iStack_10 = 0;
    func_0x000107718f20();
    func_0x000107707f34();
    func_0x000107709490();
    func_0x000107714838();
    if (iStack_10 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107715494();
    if ((bool)uVar3) {
      func_0x0001077149e4();
      func_0x000107714a5c();
      uVar2 = 0x5b0;
      if ((bool)uVar3) {
        uVar2 = 0x578;
      }
      func_0x00010770df8c(uVar2);
      func_0x000107708f10();
      func_0x00010770c5dc();
      goto LAB_1076f53d4;
    }
    func_0x000107707ad0();
LAB_1076f53f8:
    func_0x00010770d3ec();
    func_0x000107714b48();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  iVar6 = unaff_w23;
joined_r0x0001076f5414:
  uVar3 = iVar6 == 1;
  if ((bool)uVar3) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107715478();
  func_0x00010726af18();
  func_0x000107714850();
  func_0x00010770c3d0();
  func_0x000107714bf4();
  func_0x000107715034();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  do {
    func_0x00010770cd04();
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 1076fa940; end: 1076fb5d3;  */

void FUN_1076fa940(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int iVar4;
  int unaff_w24;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  func_0x00010771eb78();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x00010771694c();
  func_0x00010770ddac();
  func_0x00010770c2cc();
  func_0x000107714838();
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    if (!(bool)in_ZR) goto LAB_1076fa9d8;
    func_0x0001077152cc();
    func_0x000107717438();
    if ((param_1 & 1) == 0) {
      func_0x00010771eb6c();
      func_0x000107714b98();
      if (param_1 != 0) {
        func_0x00010771694c();
        goto LAB_1076faaf0;
      }
      func_0x00010771a54c();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771a540();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x00010771694c();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771a534();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x00010771694c();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto LAB_1076faaac;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076faab4;
        }
        goto LAB_1076faad4;
      }
      func_0x000107707e58();
      goto LAB_1076faacc;
    }
    func_0x00010771cf30();
LAB_1076faaf0:
    func_0x000107714d34();
LAB_1076faaf4:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076faafc:
    func_0x000107714830();
  }
  else {
LAB_1076fa9d8:
    func_0x00010771a54c();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771a540();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x00010771694c();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076faacc:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076faad4:
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076faafc;
    }
    func_0x000107715044();
    func_0x00010771a534();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076faad4;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x00010771694c();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076faaac:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076faab4:
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076faaf4;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  iVar1 = 0x13720df8;
  iVar4 = 0x13720df8;
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar3) goto LAB_1076fabc8;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if (param_1 == 0) {
      func_0x00010771cf30();
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107714b7c();
        func_0x00010770985c();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770a534();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x0001077125e4();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_00;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        iVar4 = iVar1;
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708238();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770a980();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770926c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          iVar4 = iVar1;
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = 0x7a8;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        iVar4 = iVar1;
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708854();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770985c();
        func_0x00010770f758();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = 0x850;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        iVar4 = iVar1;
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708208();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab98();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = 0x850;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708250();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770ab88();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107712d68();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_01;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107708220();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010770aba8();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107712d68();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_02;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107707ff4();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = 0x7a8;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        goto LAB_1076fac38;
      }
      func_0x000107714c14();
      if (param_1 == 0) {
        func_0x000107707940();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076fac58;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0xb98;
        if ((bool)uVar3) {
          uVar2 = 0xb60;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        goto LAB_1076fac38;
      }
      func_0x0001077083fc();
      func_0x00010770c85c();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x00010770b404();
      func_0x00010770c880();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010770926c();
      func_0x00010770c3a0();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      func_0x000107707428();
      func_0x000107714850();
      func_0x00010770c1c4();
      func_0x000107714b50();
      if ((bool)uVar3) {
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x578;
        if ((bool)uVar3) {
          uVar2 = 0x7a8;
        }
        func_0x000107718894(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c5ac();
        goto LAB_1076fac38;
      }
      func_0x000107707ad0();
      goto LAB_1076fac58;
    }
    func_0x000107714b7c();
    func_0x000107709610();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    iVar4 = 0x13720dc0;
    if (!(bool)uVar3) {
      func_0x000107707ad0();
      goto LAB_1076fac58;
    }
    func_0x0001077149e4();
    func_0x0001077125d4();
    uVar2 = 0x578;
    if ((bool)uVar3) {
      uVar2 = extraout_x8;
    }
    func_0x000107718894(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c5ac();
  }
  else {
LAB_1076fabc8:
    func_0x000107707940();
    func_0x00010770c3a0();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar3) {
      func_0x000107707ad0();
LAB_1076fac58:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076fac60;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0xb98;
    if ((bool)uVar3) {
      uVar2 = 0xb60;
    }
    func_0x000107718894(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c5ac();
  }
LAB_1076fac38:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x0001077075a0();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076fac60:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar3 = iVar4 == 1;
  if ((bool)uVar3) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e03c();
  func_0x000107714850();
  func_0x00010770c3d0();
  func_0x000107714bf4();
  func_0x000107715034();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  do {
    func_0x00010770cd04();
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 1076ff484; end: 1077001b7;  */

void FUN_1076ff484(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int iVar5;
  undefined1 *unaff_x22;
  int unaff_w24;
  undefined1 auStack_78 [104];
  int iStack_10;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  iStack_10 = 0;
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  if (iStack_10 == 0) {
    func_0x000107718500();
    func_0x00010770ddac();
    func_0x00010770c2cc();
    func_0x000107714838();
  }
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    puVar4 = param_1;
    if (!(bool)in_ZR) goto LAB_1076ff524;
    func_0x0001077152cc();
    puVar4 = param_1;
    func_0x00010771d620();
    unaff_x22 = param_1;
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107714b98();
      if ((int)puVar4 != 0) {
        func_0x000107718500();
        goto LAB_1076ff640;
      }
      func_0x00010771eaa0();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771ea94();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x000107718500();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771ea88();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x000107718500();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto LAB_1076ff5f8;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076ff600;
        }
        goto LAB_1076ff620;
      }
      func_0x000107707e58();
      goto LAB_1076ff618;
    }
LAB_1076ff640:
    func_0x000107714d34();
LAB_1076ff644:
    iVar5 = (int)unaff_x22;
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076ff64c:
    func_0x000107714830();
  }
  else {
    iStack_10 = 0;
    puVar4 = param_1;
LAB_1076ff524:
    func_0x00010771eaa0();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771ea94();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x000107718500();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076ff618:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076ff620:
      iVar5 = (int)unaff_x22;
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076ff64c;
    }
    func_0x000107715044();
    func_0x00010771ea88();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076ff620;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x000107718500();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076ff5f8:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076ff600:
    iVar5 = (int)unaff_x22;
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076ff644;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  uVar2 = extraout_w8 == 1;
  if ((bool)uVar2) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar2) goto LAB_1076ff714;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if ((int)puVar4 == 0) {
      func_0x0001077153a0();
      iVar3 = 0x13722410;
      iVar5 = 0x13722410;
      if ((int)puVar4 != 0) {
        func_0x000107714b7c();
        func_0x00010770985c();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770cfb4();
        func_0x00010770d610();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770a534();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          iVar5 = iVar3;
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xb98;
        if ((bool)uVar2) {
          uVar1 = 0xce8;
        }
        func_0x00010771aec0(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        iVar5 = iVar3;
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      if ((int)puVar4 != 0) {
        func_0x00010771341c();
        func_0x00010771e4a4();
        func_0x00010770f090();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770ec68();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770926c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          iVar5 = iVar3;
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x000107713214();
        uVar1 = 0xb98;
        if ((bool)uVar2) {
          uVar1 = extraout_x8;
        }
        func_0x00010771aec0(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        iVar5 = iVar3;
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      if ((int)puVar4 != 0) {
        func_0x00010771341c();
        func_0x00010771b478();
        func_0x00010770f090();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770cfb4();
        func_0x00010770f758();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xb98;
        if ((bool)uVar2) {
          uVar1 = 0xe70;
        }
        func_0x00010771aec0(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      if ((int)puVar4 != 0) {
        func_0x00010771341c();
        func_0x00010771e49c();
        func_0x00010770f090();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770ef0c();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x0001077098ec();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xb98;
        if ((bool)uVar2) {
          uVar1 = 0xe70;
        }
        func_0x00010771aec0(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      if ((int)puVar4 != 0) {
        func_0x00010771341c();
        func_0x0001072ddd58();
        func_0x00010770f090();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770ef00();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010770987c();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x00010771ea70(*puVar4);
        func_0x0001077169dc();
        func_0x00010771502c();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      iVar3 = (int)puVar4;
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x00010770fda0();
        func_0x000107714954();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107714c1c();
        func_0x000107714954();
        func_0x00010770c200();
        func_0x000107714838();
        puVar4 = auStack_78;
        func_0x0001072ddd58(puVar4,0x1137228a8);
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x00010771ea70(*puVar4);
        func_0x0001077169dc();
        func_0x00010771502c();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      if (iVar3 != 0) {
        func_0x000107707ff4();
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x000107713214();
        uVar1 = 0xb98;
        if ((bool)uVar2) {
          uVar1 = extraout_x8_00;
        }
        func_0x00010771aec0(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x0001077153a0();
      if (iVar3 == 0) {
        func_0x000107714b7c();
        func_0x00010770d3c8();
        func_0x000107714954();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_10 = 0;
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        if (iStack_10 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076ff7b8;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x1c0;
        if ((bool)uVar2) {
          uVar1 = 0x188;
        }
        func_0x00010771ea70(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x000107714b7c();
      func_0x00010770fda0();
      func_0x000107714954();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107714c1c();
      func_0x000107714954();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x00010770cef8();
      func_0x00010770c3a0();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      iStack_10 = 0;
      func_0x000107707b30();
      func_0x000107708b90();
      func_0x000107714830();
      if (iStack_10 == 0) {
        func_0x000107707428();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x000107714b50();
      if ((bool)uVar2) {
        func_0x0001077149e4();
        func_0x000107713214();
        uVar1 = 0xb98;
        if ((bool)uVar2) {
          uVar1 = extraout_x8_01;
        }
        func_0x00010771aec0(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c56c();
        goto LAB_1076ff798;
      }
      func_0x000107707ad0();
      goto LAB_1076ff7b8;
    }
    func_0x000107714b7c();
    func_0x000107709610();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    iStack_10 = 0;
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    if (iStack_10 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107714b50();
    iVar5 = 0x137223d8;
    if (!(bool)uVar2) {
      func_0x000107707ad0();
      goto LAB_1076ff7b8;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar1 = 0xb98;
    if ((bool)uVar2) {
      uVar1 = 0xaf0;
    }
    func_0x00010771aec0(uVar1);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c56c();
  }
  else {
LAB_1076ff714:
    func_0x000107714b7c();
    func_0x00010770d3c8();
    func_0x000107714954();
    func_0x00010770c4c4();
    func_0x000107714830();
    func_0x000107707abc();
    iStack_10 = 0;
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    if (iStack_10 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar2) {
      func_0x000107707ad0();
LAB_1076ff7b8:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076ff7c0;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar1 = 0x1c0;
    if ((bool)uVar2) {
      uVar1 = 0x188;
    }
    func_0x00010771ea70(uVar1);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c56c();
  }
LAB_1076ff798:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x0001077075a0();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076ff7c0:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar2 = iVar5 == 1;
  if ((bool)uVar2) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107707d28();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e03c();
  func_0x000107714850();
  func_0x00010770c3d0();
  func_0x000107714bf4();
  func_0x000107715034();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  do {
    func_0x00010770cd04();
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 107705b48; end: 1077060af;  */

void FUN_107705b48(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  uint uVar5;
  ulong unaff_x22;
  int iVar6;
  undefined1 *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  double unaff_d8;
  undefined8 in_stack_00000040;
  undefined1 auStack_8b0 [104];
  int iStack_848;
  byte abStack_790 [104];
  int iStack_728;
  undefined4 uStack_5c8;
  undefined1 auStack_5c0 [112];
  byte bStack_550;
  undefined1 auStack_508 [104];
  undefined4 uStack_4a0;
  undefined1 *puStack_460;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined1 *puStack_3a8;
  undefined1 *puStack_368;
  undefined1 *puStack_328;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [128];
  undefined1 auStack_260 [120];
  undefined1 auStack_1e8 [112];
  byte bStack_178;
  undefined1 auStack_170 [112];
  byte bStack_100;
  undefined1 auStack_f8 [112];
  byte bStack_88;
  undefined1 auStack_80 [112];
  byte bStack_10;
  
  func_0x00010771cb70();
  func_0x0001077073b8();
  if ((bRam00000001136d6ca0 & 1) == 0) {
    iVar6 = 0x136d6ca0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f50(0x113723da8);
      ___cxa_guard_release(0x1136d6ca0);
    }
  }
  if ((bRam00000001136d6ca8 & 1) == 0) {
    iVar6 = 0x136d6ca8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f00(0x113723de0);
      ___cxa_guard_release(0x1136d6ca8);
    }
  }
  if ((bRam00000001136d6cb0 & 1) == 0) {
    iVar6 = 0x136d6cb0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a1c0(0x113723e18);
      ___cxa_guard_release(0x1136d6cb0);
    }
  }
  if ((bRam00000001136d6cb8 & 1) == 0) {
    iVar6 = 0x136d6cb8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709738(0x113723e50);
      ___cxa_guard_release(0x1136d6cb8);
    }
  }
  if ((bRam00000001136d6cc0 & 1) == 0) {
    iVar6 = 0x136d6cc0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709728(0x113723e88);
      ___cxa_guard_release(0x1136d6cc0);
    }
  }
  if ((bRam00000001136d6cc8 & 1) == 0) {
    iVar6 = 0x136d6cc8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077090e0(0x113723ec0);
      ___cxa_guard_release(0x1136d6cc8);
    }
  }
  if ((bRam00000001136d6cd0 & 1) == 0) {
    iVar6 = 0x136d6cd0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077090f0(0x113723ef8);
      ___cxa_guard_release(0x1136d6cd0);
    }
  }
  if ((bRam00000001136d6cd8 & 1) == 0) {
    iVar6 = 0x136d6cd8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709060(0x113723f30);
      ___cxa_guard_release(0x1136d6cd8);
    }
  }
  if ((bRam00000001136d6ce0 & 1) == 0) {
    iVar6 = 0x136d6ce0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708ef0(0x113723f68);
      ___cxa_guard_release(0x1136d6ce0);
    }
  }
  if ((bRam00000001136d6ce8 & 1) == 0) {
    iVar6 = 0x136d6ce8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708ee0(0x113723fa0);
      ___cxa_guard_release(0x1136d6ce8);
    }
  }
  func_0x0001077170d4();
  func_0x000107707464();
  func_0x00010770f4f4();
  func_0x00010770d688();
  func_0x000107714838();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x000107715538();
    func_0x000107714858();
    if ((bStack_178 & 1) == 0) {
      func_0x00010770f4f4();
      func_0x00010770d688();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_107705dbc;
      func_0x000107714870();
      func_0x00010771548c();
      func_0x000107714858();
    }
    if ((bStack_100 & 1) == 0) {
      func_0x00010770f4f4();
      func_0x00010770d688();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_107705dbc;
      func_0x000107714870();
      func_0x00010771543c();
      func_0x000107714858();
    }
    if ((bStack_10 & 1) == 0) {
      puStack_3b8 = (undefined *)((ulong)puStack_3b8 & 0xffffffff00000000);
      func_0x00010770d01c();
      func_0x00010770c2e4();
      func_0x000107714848();
      if ((int)puStack_3b8 == 0) {
        func_0x00010770d01c();
        func_0x00010770c2e4();
        func_0x000107714848();
      }
      func_0x00010770e718();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_107705dbc;
      func_0x000107714870();
      func_0x000107715f2c();
      func_0x000107714858();
    }
    if ((bStack_88 & 1) == 0) {
      func_0x00010770f4f4();
      func_0x00010770d688();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_107705dbc;
      func_0x000107714870();
      func_0x0001077153c0();
      func_0x000107714858();
    }
    func_0x00010770b6dc();
    func_0x00010770b64c(auStack_260);
    puStack_3a8 = auStack_1e8;
    func_0x00010770d33c();
    puStack_368 = auStack_170;
    func_0x00010770d428();
    puStack_328 = auStack_80;
    func_0x00010770d41c();
    puStack_2e8 = auStack_f8;
    func_0x000107708510(auStack_2e0);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
    } while (!(bool)in_ZR);
    func_0x00010771d434();
    if ((bool)in_ZR) {
      func_0x00010771ae70();
      func_0x0001077081d4();
      func_0x00010770e718();
      func_0x000107714850();
    }
    else {
      func_0x00010770c1d0(auStack_2e0);
    }
    func_0x000107714868(auStack_2e0);
  }
LAB_107705dbc:
  func_0x000107714e58();
  func_0x000107714e1c();
  func_0x000107714e24();
  func_0x000107714d80();
  func_0x000107715540();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pbVar2 = (byte *)0x1136d6ce8;
  ___cxa_guard_abort();
  func_0x000107714988();
  puVar4 = &DAT_1077060b0;
  func_0x000107715308();
  puStack_3c0 = &stack0x00000040;
  puStack_3b8 = puVar4;
  func_0x000107707444();
  if ((bRam00000001136d6cf0 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6cf0;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708e10(0x113723fd8);
      pbVar2 = (byte *)0x1136d6cf0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6cf8 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6cf8;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708bb0(0x113724010);
      pbVar2 = (byte *)0x1136d6cf8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d00 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d00;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708de0(0x113724048);
      pbVar2 = (byte *)0x1136d6d00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d08 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d08;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708dc0(0x113724080);
      pbVar2 = (byte *)0x1136d6d08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d10 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d10;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708dd0(0x1137240b8);
      pbVar2 = (byte *)0x1136d6d10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d18 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d18;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708e00(0x1137240f0);
      pbVar2 = (byte *)0x1136d6d18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d20 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d20;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708df0(0x113724128);
      pbVar2 = (byte *)0x1136d6d20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d28 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d28;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107708db0(0x113724160);
      pbVar2 = (byte *)0x1136d6d28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d30 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d30;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010771d464();
      func_0x00010771490c();
      func_0x0001077148e0(abStack_790);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x0001077192b8();
      func_0x000107714980(abStack_790);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107717320();
      func_0x000107714a40(abStack_790);
      func_0x00010770cfec();
      func_0x0001077115cc();
      unaff_x24 = (undefined1 *)0x113725160;
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107719780();
      func_0x0001077126ac();
      func_0x000107718ea8();
      pbVar2 = (byte *)0x1136d6d30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d38 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d38;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x0001077098bc(0x113724198);
      pbVar2 = (byte *)0x1136d6d38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d40 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d40;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x0001077095a0(0x1137241d0);
      pbVar2 = (byte *)0x1136d6d40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d48 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d48;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107709658(0x113724208);
      pbVar2 = (byte *)0x1136d6d48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d50 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d50;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770a12c(0x113724240);
      pbVar2 = (byte *)0x1136d6d50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d58 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d58;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770b2e8(0x113724278);
      pbVar2 = (byte *)0x1136d6d58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d60 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d60;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770984c(0x1137242b0);
      pbVar2 = (byte *)0x1136d6d60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d68 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d68;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x000107709adc(0x1137242e8);
      pbVar2 = (byte *)0x1136d6d68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d70 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d70;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770b3d4(0x113724320);
      pbVar2 = (byte *)0x1136d6d70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d78 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d78;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770b62c(0x113724358);
      pbVar2 = (byte *)0x1136d6d78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d80 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d80;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770ab28(0x113724390);
      pbVar2 = (byte *)0x1136d6d80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d88 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d88;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770f558(0x1137243c8);
      pbVar2 = (byte *)0x1136d6d88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d90 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d90;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770f548(0x113724400);
      pbVar2 = (byte *)0x1136d6d90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d98 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6d98;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770d9d4(0x113724438);
      pbVar2 = (byte *)0x1136d6d98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6da0 & 1) == 0) {
    pbVar2 = (byte *)0x1136d6da0;
    ___cxa_guard_acquire();
    if ((int)pbVar2 != 0) {
      func_0x00010770d00c(0x113724470);
      pbVar2 = (byte *)0x1136d6da0;
      ___cxa_guard_release();
    }
  }
  uStack_4a0 = 0;
  func_0x00010770fd64();
  iStack_728 = 0;
  func_0x00010770a4cc();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_728 == 0) {
    func_0x00010771b148();
    func_0x00010770d228();
    func_0x00010770c2e4();
    func_0x000107714848();
  }
  func_0x000107719e04();
  func_0x000107715150();
  func_0x000107717e1c();
  func_0x00010771978c();
  func_0x000107714848();
  func_0x000107714bc8();
  func_0x000107714838();
  func_0x00010771cedc();
  if ((bool)in_ZR) {
    func_0x00010771ab30();
    func_0x00010770c29c(pbVar2);
    func_0x00010771ced0();
    pbVar3 = pbVar2;
    if (!(bool)in_ZR) goto code_r0x0001077062e0;
    func_0x000107716a68();
    pbVar3 = pbVar2;
    func_0x000104c32db4();
    if (((ulong)pbVar3 & 1) == 0) {
      func_0x000107714bfc();
      if ((int)pbVar3 != 0) {
        func_0x00010771b148();
        goto code_r0x00010770641c;
      }
      iStack_728 = 0;
      func_0x00010770a4cc();
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_728 == 0) {
        iStack_848 = 0;
        func_0x00010770a58c();
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_848 == 0) {
          func_0x00010771b148();
          func_0x000107714c44();
          func_0x00010770c3e8();
          func_0x000107714848();
        }
        func_0x00010770c4dc();
        func_0x000107715f78();
        if ((bool)in_ZR) {
          func_0x00010771551c();
          func_0x00010771975c();
          func_0x00010770e1bc();
          func_0x000107714888();
          func_0x000107714898();
          if ((bool)in_ZR) {
            func_0x000107714870();
            unaff_x26 = 0;
            func_0x00010770c43c(pbVar3);
            func_0x00010770d258();
            if (iStack_728 == 0) {
              func_0x00010771b148();
              func_0x0001077135f8();
              func_0x00010770d264();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            unaff_w25 = (int)auStack_8b0;
            goto code_r0x0001077064d0;
          }
          goto code_r0x0001077063f4;
        }
        func_0x00010770e498();
        goto code_r0x0001077063ec;
      }
code_r0x0001077064d0:
      func_0x00010770c454();
      func_0x00010771b5b0();
      if (!(bool)in_ZR) {
        func_0x00010770e54c();
        goto code_r0x0001077063cc;
      }
      func_0x000107718ea0();
      func_0x000107716f5c();
      goto code_r0x0001077063d4;
    }
code_r0x00010770641c:
    func_0x000107716f5c();
code_r0x000107706420:
    iVar6 = (int)pbVar2;
    func_0x000107719750();
    func_0x000107717c64();
    func_0x0001077178c8();
    func_0x000107718668();
    if ((bool)in_ZR) {
      func_0x00010771def8();
      func_0x00010756e584();
      if ((*pbVar3 & 1) == 0) {
        iVar6 = 0x13724198;
        func_0x0001077145e8();
        func_0x00010770bf88();
        func_0x0001077145f4();
        if (((ulong)pbVar3 & 1) == 0) {
code_r0x00010770667c:
          func_0x00010770c23c();
          func_0x00010770d5e8();
code_r0x000107706684:
          unaff_x24 = (undefined1 *)0x0;
        }
        else {
          func_0x000107711a6c();
          func_0x000107717f54();
          if ((bool)in_ZR) {
            func_0x000107716da4();
            func_0x000107715344();
            uVar5 = 0;
            if ((bool)in_ZR) {
              uVar5 = 0x10;
            }
            unaff_x24 = (undefined1 *)(ulong)uVar5;
          }
          else {
            func_0x00010770b7ec();
            func_0x00010770de00();
            func_0x00010771519c();
            func_0x00010771552c();
          }
          func_0x00010770ce38();
          func_0x00010770c23c();
          func_0x00010770d5e8();
          uVar1 = ((ulong)unaff_x24 & 0xf) == 0;
          if ((bool)uVar1) {
            if ((unaff_x26 & 1) != 0) {
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar1) {
                func_0x000107716da4();
                if ((*pbVar3 & 1) != 0) {
                  func_0x00010770dfb0();
                  func_0x000107719278();
                  func_0x00010770d8b0();
                  if (((ulong)unaff_x24 & 1) == 0) {
                    func_0x000107718f74();
                    func_0x00010770f0f4();
                    func_0x00010770d21c();
                    func_0x000107714848();
                    func_0x000107714898();
                    if ((bool)uVar1) {
                      func_0x000107714870();
                      func_0x000107715150();
                      func_0x00010751da6c();
                      func_0x000107714858();
                      func_0x0001077150a4();
                      puStack_460 = unaff_x24;
                      func_0x000107707508();
                      func_0x000107714bc8();
                      func_0x000107714898();
                      if (!(bool)uVar1) goto code_r0x000107706af0;
                      func_0x000107714870();
                      func_0x0001077087c8();
                      func_0x0001077154dc();
                      func_0x000107717308();
                      uVar5 = 0xe;
                      if ((bool)uVar1) {
                        uVar5 = 0;
                      }
                      unaff_x24 = (undefined1 *)(ulong)uVar5;
                      func_0x000107714888();
                      func_0x000107714858();
                    }
                    else {
code_r0x000107706af0:
                      func_0x000107715508();
                    }
                    func_0x000107715e18();
                    goto code_r0x000107706630;
                  }
                }
                unaff_x22 = 0;
                unaff_x24 = (undefined1 *)0xe;
              }
              else {
                func_0x00010770ee20();
                func_0x000107716080();
                func_0x00010770cf5c();
                func_0x000107714fdc();
                func_0x000107715508();
              }
code_r0x000107706630:
              func_0x00010770ce38();
              goto code_r0x000107706634;
            }
            goto code_r0x000107706684;
          }
          unaff_x22 = 1;
code_r0x000107706634:
          uVar1 = (int)unaff_x24 == 0xe;
          if (((bool)uVar1) || ((int)unaff_x24 == 0)) {
            if ((unaff_x22 & 1) != 0) {
              func_0x0001077145e8();
              func_0x00010770bf88();
              func_0x0001077145f4();
              if (((ulong)pbVar3 & 1) == 0) goto code_r0x00010770667c;
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar1) {
                func_0x000107716da4();
                func_0x0001077153ec();
                uVar5 = 0;
                if ((bool)uVar1) {
                  uVar5 = 0x14;
                }
                unaff_x24 = (undefined1 *)(ulong)uVar5;
              }
              else {
                func_0x00010770b7ec();
                func_0x00010770de00();
                func_0x00010771519c();
                func_0x000107716450();
              }
              func_0x00010770ce38();
              func_0x00010770c23c();
              func_0x00010770d5e8();
              if (((int)unaff_x24 != 0x14) && ((int)unaff_x24 != 0)) goto code_r0x000107706a64;
              if ((unaff_x22 & 1) != 0) {
                func_0x00010770dfb0();
                func_0x000107715ff8();
                func_0x000107579140();
                func_0x00010770c8b0();
                func_0x0001077189f0();
                unaff_x24 = (undefined1 *)0x0;
                goto code_r0x00010770668c;
              }
            }
            goto code_r0x000107706684;
          }
code_r0x000107706a64:
          if (((int)unaff_x24 == 0xc) || ((int)unaff_x24 == 0)) goto code_r0x000107706450;
        }
        iVar6 = 0;
      }
      else {
code_r0x000107706450:
        iVar6 = 1;
        unaff_x24 = (undefined1 *)0x0;
      }
    }
    else {
      func_0x00010770c1d0(abStack_790);
      func_0x00010771574c();
    }
code_r0x00010770668c:
    func_0x000107713b7c();
    func_0x000107714860();
    func_0x00010770f41c();
  }
  else {
    uStack_5c8 = 0;
    pbVar3 = pbVar2;
code_r0x0001077062e0:
    iStack_728 = 0;
    func_0x00010770a4cc();
    func_0x00010770c2e4();
    func_0x000107714848();
    if (iStack_728 == 0) {
      iStack_848 = 0;
      func_0x00010770a58c();
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_848 == 0) {
        func_0x00010771b148();
        func_0x000107714c44();
        func_0x00010770c3e8();
        func_0x000107714848();
      }
      func_0x00010770c4dc();
      func_0x000107715f78();
      if ((bool)in_ZR) {
        func_0x00010771551c();
        func_0x00010771975c();
        func_0x00010770e1bc();
        func_0x000107714888();
        func_0x000107714898();
        if ((bool)in_ZR) {
          func_0x000107714870();
          unaff_x26 = 0;
          func_0x00010770c43c(pbVar3);
          func_0x00010770d258();
          if (iStack_728 == 0) {
            func_0x00010771b148();
            func_0x0001077135f8();
            func_0x00010770d264();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          unaff_w25 = (int)auStack_8b0;
          goto code_r0x000107706304;
        }
      }
      else {
        func_0x00010770e498();
code_r0x0001077063ec:
        func_0x00010771024c();
        func_0x000107715d8c();
      }
code_r0x0001077063f4:
      iVar6 = (int)abStack_790;
      func_0x000107714848();
      func_0x000107714860();
      func_0x000107714838();
    }
    else {
code_r0x000107706304:
      func_0x00010770c454();
      func_0x00010771b5b0();
      if ((bool)in_ZR) {
        func_0x000107718ea0();
        func_0x000107716f5c();
      }
      else {
        func_0x00010770e54c();
code_r0x0001077063cc:
        func_0x00010770dd34();
        func_0x000107714bc8();
      }
code_r0x0001077063d4:
      pbVar2 = abStack_790;
      iVar6 = (int)pbVar2;
      func_0x000107714848();
      func_0x000107714838();
      unaff_x24 = auStack_8b0;
      if (unaff_w25 == 3) {
        in_ZR = 1;
        unaff_x24 = auStack_8b0;
        goto code_r0x000107706420;
      }
    }
    func_0x00010771574c();
  }
  func_0x00010770eda8();
  func_0x0001077103f4();
  func_0x0001077173b8();
  uVar1 = ((ulong)unaff_x24 & 0xfffffffd) == 0;
  if (!(bool)uVar1) goto code_r0x000107706864;
  if (iVar6 == 0) {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar1) {
      func_0x000107709d18();
      goto code_r0x00010770684c;
    }
    func_0x00010771509c();
    if ((*pbVar3 & 1) == 0) {
      func_0x00010770c23c();
code_r0x0001077067e4:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar1) {
        func_0x000107709d18();
        goto code_r0x00010770684c;
      }
      func_0x00010771509c();
      if ((*pbVar3 & 1) == 0) {
        func_0x00010770c23c();
        iVar6 = (int)pbVar3;
      }
      else {
        func_0x00010771e9c8();
        iVar6 = (int)pbVar3;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar1) goto code_r0x000107706854;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar1 = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x00010771e9c8();
          func_0x000107709aac();
          goto code_r0x000107706950;
        }
      }
      func_0x00010770fa00();
    }
    else {
      func_0x00010771e9d4();
      func_0x00010770f8f0();
      func_0x00010770bb20();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)uVar1) goto code_r0x000107706854;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar1 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto code_r0x0001077067e4;
      func_0x00010771e9d4();
      iVar6 = (int)pbVar3;
      func_0x000107709aac();
    }
code_r0x000107706950:
    func_0x00010770cbf0(auStack_8b0);
    func_0x000107714830();
    func_0x000107713d58();
    func_0x00010771527c();
    func_0x0001077132c0();
    func_0x000107711070();
    func_0x00010770892c();
    func_0x00010770c448();
    func_0x000107714848();
    func_0x000107714838();
    func_0x000107715684();
    func_0x0001077178d8();
    if (iVar6 != 0) {
      if ((bStack_550 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_5c8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_728 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar6 != 0) {
        if ((bStack_550 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_5c0);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_508);
  }
  else {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar1) {
      func_0x000107709d18();
code_r0x00010770684c:
      func_0x000107711410();
      func_0x000107715514();
code_r0x000107706854:
      func_0x00010770c23c();
      func_0x00010770d5e8();
      func_0x0001077186cc();
      func_0x00010770cd5c();
      goto code_r0x000107706864;
    }
    func_0x00010771509c();
    if ((*pbVar3 & 1) == 0) {
      func_0x00010770c23c();
code_r0x000107706784:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar1) {
        func_0x000107709d18();
        goto code_r0x00010770684c;
      }
      func_0x00010771509c();
      if ((*pbVar3 & 1) == 0) {
        func_0x00010770c23c();
        iVar6 = (int)pbVar3;
      }
      else {
        func_0x00010771e9c8();
        iVar6 = (int)pbVar3;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar1) goto code_r0x000107706854;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar1 = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x00010771e9c8();
          func_0x000107709aac();
          goto code_r0x00010770688c;
        }
      }
      func_0x00010770fa00();
    }
    else {
      func_0x00010771e9d4();
      func_0x00010770f8f0();
      func_0x00010770bb20();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)uVar1) goto code_r0x000107706854;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar1 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto code_r0x000107706784;
      func_0x00010771e9d4();
      iVar6 = (int)pbVar3;
      func_0x000107709aac();
    }
code_r0x00010770688c:
    func_0x00010770cbf0(auStack_8b0);
    func_0x000107714830();
    func_0x000107713d58();
    func_0x00010771527c();
    func_0x0001077132c0();
    func_0x000107711070();
    func_0x00010770892c();
    func_0x00010770c448();
    func_0x000107714848();
    func_0x000107714838();
    func_0x000107715684();
    func_0x0001077178d8();
    if (iVar6 != 0) {
      if ((bStack_550 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_5c8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_728 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar6 != 0) {
        if ((bStack_550 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_5c0);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_508);
  }
  func_0x0001077186cc();
  func_0x000107714830();
  func_0x00010771a364();
code_r0x000107706864:
  func_0x0001077117dc();
  func_0x000107708038();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107715720();
  func_0x000107718ea8();
  ___cxa_guard_abort(0x1136d6d30);
  do {
    func_0x000107714988();
    func_0x0001077117dc();
  } while( true );
}



/* Entry: 1077208dc; end: 107720907;  */

void FUN_1077208dc(long param_1,byte *param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(ulong *)(param_1 + 8) = (*(ulong *)(param_1 + 8) ^ (ulong)*param_2) * 0x100000001b3;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 107721188; end: 107721787;  */

/* WARNING: Possible PIC construction at 0x00010772121c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772123c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077218c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107721880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077218cc) */
/* WARNING: Removing unreachable block (ram,0x0001077218dc) */
/* WARNING: Removing unreachable block (ram,0x0001077218f8) */
/* WARNING: Removing unreachable block (ram,0x000107721900) */
/* WARNING: Removing unreachable block (ram,0x000107721908) */
/* WARNING: Removing unreachable block (ram,0x00010772190c) */
/* WARNING: Removing unreachable block (ram,0x000107722180) */
/* WARNING: Removing unreachable block (ram,0x000107721240) */
/* WARNING: Removing unreachable block (ram,0x000107721220) */
/* WARNING: Removing unreachable block (ram,0x000107721884) */
/* WARNING: Removing unreachable block (ram,0x000107721890) */
/* WARNING: Removing unreachable block (ram,0x000107721898) */
/* WARNING: Removing unreachable block (ram,0x0001077218a0) */
/* WARNING: Removing unreachable block (ram,0x0001077218a4) */

void FUN_107721188(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *unaff_x19;
  ulong *puVar17;
  ulong *unaff_x23;
  long lVar18;
  long unaff_x24;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lStack_c0;
  ulong *puStack_b8;
  long lStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  plVar4 = (long *)auStack_80;
  puVar3 = auStack_80;
LAB_1077211b4:
  puVar17 = param_2 + -1;
  puStack_70 = param_2 + -2;
  puStack_78 = param_2 + -3;
  puVar9 = param_1;
  puStack_68 = param_2;
LAB_1077211cc:
  param_1 = puVar9;
  puVar7 = puStack_68;
  uVar19 = (long)puStack_68 - (long)param_1 >> 3;
  puVar9 = param_1;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_107721774;
  case 2:
    uVar19 = puStack_68[-1];
    func_0x000107721788(uVar19,*param_1);
    if ((int)uVar19 != 0) {
      uVar19 = *param_1;
      *param_1 = puVar7[-1];
      puVar7[-1] = uVar19;
    }
    goto LAB_107721774;
  case 3:
    puVar8 = param_1 + 1;
    puVar7 = puVar17;
    func_0x00010772226c();
    goto code_r0x0001077217d4;
  case 4:
    puVar8 = param_1 + 1;
    puVar7 = param_1 + 2;
    func_0x00010772226c();
    break;
  case 5:
    puVar8 = param_1 + 1;
    puVar7 = param_1 + 2;
    func_0x00010772226c();
    plVar4 = &lStack_c0;
    unaff_x29 = auStack_90;
    lStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    lStack_b0 = param_3;
    puStack_a8 = puVar17;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x000107722364();
    unaff_x30 = &UNK_1077218cc;
    break;
  default:
    if ((long)uVar19 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 != puStack_68) {
          while( true ) {
            param_1 = param_1 + 1;
            puVar17 = puVar9 + 1;
            if (puVar17 == puVar7) break;
            uVar19 = puVar9[1];
            func_0x000107721788(uVar19,*puVar9);
            puVar9 = puVar17;
            if ((int)uVar19 != 0) {
              uVar19 = *puVar17;
              puVar17 = param_1;
              do {
                puVar8 = puVar17 + -1;
                *puVar17 = *puVar8;
                uVar6 = uVar19;
                func_0x000107721788(uVar19,puVar17[-2]);
                puVar17 = puVar8;
              } while ((uVar6 & 1) != 0);
              *puVar8 = uVar19;
            }
          }
        }
        goto LAB_107721774;
      }
      if (param_1 == puStack_68) goto LAB_107721774;
      lVar16 = 0;
      goto LAB_1077214e0;
    }
    if (param_3 == 0) {
      if (param_1 == puStack_68) goto LAB_107721774;
      uVar14 = uVar19 - 2 >> 1;
      uVar6 = uVar14;
      puVar9 = puStack_68;
      goto LAB_10772155c;
    }
    puVar8 = param_1 + (uVar19 >> 1);
    if (0x80 < uVar19) {
      func_0x0001077222f4(param_1,puVar8);
      puVar8 = puVar8 + -1;
      puVar9 = param_1 + 1;
      unaff_x30 = (undefined *)0x107721220;
      puVar3 = auStack_80;
      puVar7 = puStack_70;
      unaff_x29 = &stack0xfffffffffffffff0;
      goto code_r0x0001077217d4;
    }
    func_0x0001077222f4(puVar8,param_1);
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) {
LAB_107721274:
      unaff_x24 = 0;
      uVar19 = *param_1;
      do {
        uVar6 = *(ulong *)((long)param_1 + unaff_x24 + 8);
        func_0x00010772223c();
        unaff_x24 = unaff_x24 + 8;
      } while ((uVar6 & 1) != 0);
      unaff_x23 = (ulong *)((long)param_1 + unaff_x24);
      puVar9 = unaff_x23;
      if (unaff_x24 == 8) {
        do {
          unaff_x19 = puVar7;
          if (puVar7 <= unaff_x23) break;
          puVar7 = puVar7 + -1;
          uVar6 = *puVar7;
          func_0x00010772223c();
          unaff_x19 = puVar7;
        } while ((uVar6 & 1) == 0);
      }
      else {
        do {
          puVar7 = puVar7 + -1;
          iVar5 = (int)*puVar7;
          func_0x00010772223c();
          unaff_x19 = puVar7;
        } while (iVar5 == 0);
      }
      while (puVar9 < puVar7) {
        uVar6 = *puVar9;
        *puVar9 = *puVar7;
        *puVar7 = uVar6;
        do {
          puVar9 = puVar9 + 1;
          uVar6 = *puVar9;
          func_0x00010772223c();
        } while ((uVar6 & 1) != 0);
        do {
          puVar7 = puVar7 + -1;
          uVar6 = *puVar7;
          func_0x00010772223c();
        } while ((uVar6 & 1) == 0);
      }
      param_2 = puVar9 + -1;
      if (param_1 != param_2) {
        *param_1 = *param_2;
      }
      *param_2 = uVar19;
      if (unaff_x19 <= unaff_x23) {
        puVar7 = param_1;
        func_0x000107721914(param_1,param_2);
        puVar8 = puVar9;
        func_0x000107721914(puVar9,puStack_68);
        if ((int)puVar8 != 0) goto LAB_107721418;
        if (((ulong)puVar7 & 1) != 0) goto LAB_1077211cc;
      }
      FUN_107721188(param_1,param_2,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_1077211cc;
    }
    uVar19 = param_1[-1];
    func_0x000107721788(uVar19,*param_1);
    if ((uVar19 & 1) != 0) goto LAB_107721274;
    uVar6 = *param_1;
    func_0x000107722228();
    if ((uVar19 & 1) == 0) {
      do {
        puVar9 = puVar9 + 1;
        if (puVar7 <= puVar9) break;
        func_0x000107722228();
      } while ((int)uVar19 == 0);
    }
    else {
      do {
        puVar9 = puVar9 + 1;
        func_0x000107722228();
      } while ((uVar19 & 1) == 0);
    }
    if (puVar9 < puVar7) {
      do {
        puVar7 = puVar7 + -1;
        func_0x000107722228();
      } while ((uVar19 & 1) != 0);
    }
    while (puVar9 < puVar7) {
      uVar14 = *puVar9;
      *puVar9 = *puVar7;
      *puVar7 = uVar14;
      do {
        puVar9 = puVar9 + 1;
        func_0x000107722228();
      } while ((int)uVar19 == 0);
      do {
        puVar7 = puVar7 + -1;
        func_0x000107722228();
      } while ((uVar19 & 1) != 0);
    }
    puVar8 = puVar9 + -1;
    if (param_1 != puVar8) {
      *param_1 = *puVar8;
    }
    param_4 = 0;
    *puVar8 = uVar6;
    unaff_x19 = puVar7;
    goto LAB_1077211cc;
  }
  puVar3 = (undefined1 *)((long)plVar4 + -0x30);
  *(long *)((long)plVar4 + -0x30) = param_3;
  *(ulong **)((long)plVar4 + -0x28) = puVar17;
  *(ulong **)((long)plVar4 + -0x20) = param_1;
  *(ulong **)((long)plVar4 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar4 + -0x10) = unaff_x29;
  *(undefined **)((long)plVar4 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)plVar4 + -0x10);
  func_0x000107722364();
  unaff_x30 = &UNK_107721884;
code_r0x0001077217d4:
  *(long *)(puVar3 + -0x30) = param_3;
  *(ulong **)(puVar3 + -0x28) = puVar17;
  *(ulong **)(puVar3 + -0x20) = param_1;
  *(ulong **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  uVar19 = *puVar8;
  func_0x00010772224c();
  iVar5 = (int)*puVar7;
  func_0x000107722254();
  if ((uVar19 & 1) == 0) {
    if (iVar5 != 0) {
      func_0x000107722344();
      iVar5 = (int)*puVar8;
      func_0x00010772224c();
      if (iVar5 != 0) {
        uVar19 = *puVar9;
        *puVar9 = *puVar8;
        *puVar8 = uVar19;
      }
    }
  }
  else {
    uVar19 = *puVar9;
    if (iVar5 == 0) {
      *puVar9 = *puVar8;
      *puVar8 = uVar19;
      iVar5 = (int)*puVar7;
      func_0x000107721788();
      if (iVar5 != 0) {
        func_0x000107722344();
      }
    }
    else {
      *puVar9 = *puVar7;
      *puVar7 = uVar19;
    }
  }
  return;
LAB_1077214e0:
  puVar17 = puVar9 + 1;
  if (puVar17 == puVar7) goto LAB_107721774;
  uVar19 = puVar9[1];
  func_0x000107721788(uVar19,*puVar9);
  if ((int)uVar19 != 0) {
    uVar19 = *puVar17;
    lVar2 = lVar16;
    do {
      lVar18 = lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar18);
      puVar1[1] = *puVar1;
      puVar9 = param_1;
      if (lVar18 == 0) goto LAB_107721534;
      uVar6 = uVar19;
      func_0x000107721788(uVar19,puVar1[-1]);
      lVar2 = lVar18 + -8;
    } while ((uVar6 & 1) != 0);
    puVar9 = (ulong *)((long)param_1 + lVar18);
LAB_107721534:
    *puVar9 = uVar19;
  }
  lVar16 = lVar16 + 8;
  puVar9 = puVar17;
  goto LAB_1077214e0;
LAB_107721418:
  if (((ulong)puVar7 & 1) != 0) goto LAB_107721774;
  goto LAB_1077211b4;
LAB_10772155c:
  do {
    if ((long)uVar6 <= (long)uVar14) {
      uVar13 = (uVar6 & 0x3fffffffffffffff) << 1 | 1;
      puVar17 = param_1 + uVar13;
      uVar11 = uVar6 * 2 + 2;
      puVar7 = puVar17;
      uVar15 = uVar13;
      if ((long)uVar11 < (long)uVar19) {
        uVar10 = *puVar17;
        func_0x000107721788(uVar10,puVar17[1]);
        puVar7 = puVar17 + 1;
        uVar15 = uVar11;
        if ((int)uVar10 == 0) {
          puVar7 = puVar17;
          uVar15 = uVar13;
        }
      }
      puVar17 = param_1 + uVar6;
      uVar11 = *puVar7;
      func_0x000107721788(uVar11,*puVar17);
      if ((uVar11 & 1) == 0) {
        uVar11 = *puVar17;
        do {
          puVar9 = puVar7;
          *puVar17 = *puVar9;
          if ((long)uVar14 < (long)uVar15) break;
          uVar10 = uVar15 << 1 | 1;
          puVar17 = param_1 + uVar10;
          uVar13 = uVar15 * 2 + 2;
          puVar7 = puVar17;
          uVar15 = uVar10;
          if ((long)uVar13 < (long)uVar19) {
            uVar12 = *puVar17;
            func_0x000107721788(uVar12,puVar17[1]);
            puVar7 = puVar17 + 1;
            uVar15 = uVar13;
            if ((int)uVar12 == 0) {
              puVar7 = puVar17;
              uVar15 = uVar10;
            }
          }
          uVar13 = *puVar7;
          func_0x000107721788(uVar13,uVar11);
          puVar17 = puVar9;
        } while ((int)uVar13 == 0);
        *puVar9 = uVar11;
        puVar9 = puStack_68;
      }
    }
    uVar6 = uVar6 - 1;
  } while (-1 < (long)uVar6);
  for (; 1 < (long)uVar19; uVar19 = uVar19 - 1) {
    uVar14 = *param_1;
    uVar6 = 0;
    puVar17 = param_1;
    do {
      uVar13 = uVar6 << 1 | 1;
      uVar11 = uVar6 * 2 + 2;
      uVar15 = uVar13;
      puVar7 = puVar17 + uVar6 + 1;
      if ((long)uVar11 < (long)uVar19) {
        uVar10 = puVar17[uVar6 + 1];
        func_0x000107721788(uVar10,puVar17[uVar6 + 2]);
        uVar15 = uVar11;
        puVar7 = puVar17 + uVar6 + 2;
        if ((int)uVar10 == 0) {
          uVar15 = uVar13;
          puVar7 = puVar17 + uVar6 + 1;
        }
      }
      *puVar17 = *puVar7;
      uVar6 = uVar15;
      puVar17 = puVar7;
    } while ((long)uVar15 <= (long)(uVar19 - 2 >> 1));
    puVar9 = puVar9 + -1;
    if (puVar7 == puVar9) {
      *puVar7 = uVar14;
    }
    else {
      *puVar7 = *puVar9;
      *puVar9 = uVar14;
      lVar16 = (long)puVar7 + (8 - (long)param_1) >> 3;
      if (1 < lVar16) {
        uVar6 = lVar16 - 2U >> 1;
        iVar5 = (int)param_1[uVar6];
        func_0x000107722254();
        if (iVar5 != 0) {
          uVar14 = *puVar7;
          puVar17 = param_1 + uVar6;
          do {
            puVar8 = puVar17;
            *puVar7 = *puVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1 >> 1;
            uVar11 = param_1[uVar6];
            func_0x000107721788(uVar11,uVar14);
            puVar7 = puVar8;
            puVar17 = param_1 + uVar6;
          } while ((uVar11 & 1) != 0);
          *puVar8 = uVar14;
        }
      }
    }
  }
LAB_107721774:
  func_0x00010772226c(unaff_x30);
  return;
}



/* Entry: 107721bac; end: 107721bf3;  */

long * FUN_107721bac(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x68;
    func_0x000107326ea8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107721e64; end: 107721e8f;  */

undefined8 * FUN_107721e64(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d0df0;
  param_1[1] = 0;
  func_0x000107721f00(param_1 + 3);
  return param_1;
}



/* Entry: 107721fb4; end: 107721fc7;  */

void FUN_107721fb4(void)

{
  func_0x0001074d1e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107722390; end: 107722417;  */

undefined8 FUN_107722390(void)

{
  int iVar1;
  
  if ((bRam0000000113822c80 & 1) == 0) {
    iVar1 = 0x13822c80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113822c60 = 0;
      uRam0000000113822c58 = 0;
      uRam0000000113822c70 = 0;
      uRam0000000113822c68 = 0;
      uRam0000000113822c78 = 0x3f800000;
      func_0x000107575f70();
      ___cxa_guard_release(0x113822c80);
    }
  }
  return 0x113822c58;
}



/* Entry: 107722dc8; end: 107722e23;  */

long FUN_107722dc8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  uVar3 = param_2;
  func_0x000107324c18();
  if ((uVar3 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 8) + lVar1 * 0x48;
    func_0x000104c318bc(lVar2,param_2);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
  }
  return *(long *)(param_1 + 8) + lVar1 * 0x48 + 0x38;
}



/* Entry: 1077231ec; end: 1077232eb;  */

ulong FUN_1077231ec(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_2;
  func_0x000107723a50();
  uStack_38 = extraout_x8;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(param_1);
  uVar5 = *(ulong *)(param_2 + 0x98);
  if (uVar5 == 0) goto LAB_1077232a8;
  func_0x000107753050(auStack_b8,uVar5,param_3,param_4);
  in_ZR = iStack_40 == 1;
  if ((*(int *)(param_1 + 0x78) == 1) == (bool)in_ZR) {
    in_ZR = *(int *)(param_1 + 0x78) == 1;
    if ((bool)in_ZR) {
      uVar5 = param_1;
      func_0x00010727f7dc();
      puVar6 = auStack_b8;
      func_0x00010727f7dc(puVar6);
      func_0x000107722e80(uVar5,puVar6);
      if ((uVar5 & 1) == 0) goto LAB_107723260;
    }
  }
  else {
LAB_107723260:
    piVar1 = (int *)(param_2 + 0xa8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107723a94();
LAB_1077232a8:
  func_0x000107723a3c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107723a94();
    func_0x00010727f7f8(param_1 + 8);
    __Unwind_Resume();
    func_0x000107723314();
    func_0x000107723368(uVar5,0);
    return uVar5;
  }
  return uVar5;
}



/* Entry: 10772342c; end: 10772343f;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_10772342c(long *param_1)

{
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_70 [64];
  
  func_0x0001074d3a84();
  (**(code **)(*param_1 + 0x40))(auStack_70);
  puStack_88 = &UNK_1074d24e8;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,auStack_70);
  return uStack_98;
}



/* Entry: 107723a08; end: 107723a0b;  */

void FUN_107723a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d1028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107726a78; end: 107726b5b;  */

undefined8 FUN_107726a78(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_15d0 [64];
  long lStack_1590;
  undefined1 auStack_1500 [24];
  undefined4 uStack_14e8;
  long lStack_14b0;
  undefined1 auStack_1410 [64];
  long lStack_13d0;
  undefined1 auStack_870 [64];
  undefined1 auStack_7a0 [64];
  
  func_0x000107741ca8();
  if ((bRam0000000113725510 & 1) == 0) {
    iVar2 = 0x13725510;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742048();
      func_0x000107741d3c();
      unaff_x20 = 0x113725508;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2b28;
      func_0x000107741cd0(&UNK_10773494c);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x113725508;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725510);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam0000000113725520 & 1) == 0) {
      iVar2 = 0x13725520;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742048();
        func_0x000107741d3c();
        unaff_x20 = 0x113725518;
        func_0x000107741810();
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d2b68;
        func_0x000107741cd0(&UNK_107734aec);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar3 = 0x113725518;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725520);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam0000000113725530 & 1) == 0) {
        iVar2 = 0x13725530;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742048();
          func_0x000107741d3c();
          unaff_x20 = 0x113725528;
          func_0x000107741810();
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d2ba8;
          func_0x000107741cd0(&UNK_107734c8c);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar3 = 0x113725528;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725530);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam0000000113725540 & 1) == 0) {
          iVar2 = 0x13725540;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742048();
            func_0x000107741d3c();
            unaff_x20 = 0x113725538;
            func_0x000107741810();
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d2be8;
            func_0x000107741cd0(&UNK_107734e2c);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          uVar3 = 0x113725538;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725540);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam0000000113725550 & 1) == 0) {
            iVar2 = 0x13725550;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742048();
              func_0x000107741d3c();
              unaff_x20 = 0x113725548;
              func_0x000107741810();
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d2c28;
              func_0x000107741cd0(&UNK_107734fcc);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            uVar3 = 0x113725548;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725550);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam0000000113725560 & 1) == 0) {
              iVar2 = 0x13725560;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742048();
                func_0x000107741d3c();
                unaff_x20 = 0x113725558;
                func_0x000107741810();
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_FUN_1109d2c68;
                func_0x000107741cd0(&UNK_10773516c);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              uVar3 = 0x113725558;
            }
            else {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725560);
              func_0x00010774297c();
              func_0x000107741ca8();
              if ((bRam0000000113725570 & 1) == 0) {
                iVar2 = 0x13725570;
                ___cxa_guard_acquire();
                if (iVar2 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742048();
                  func_0x000107741d3c();
                  unaff_x20 = 0x113725568;
                  func_0x000107741810();
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d2ca8;
                  func_0x000107741cd0(&UNK_10773530c);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107742144();
                func_0x00010774291c();
                func_0x00010774298c();
                func_0x000107742914();
                ___cxa_guard_abort(0x113725570);
                func_0x00010774297c();
                func_0x000107741ca8();
                if ((bRam0000000113725580 & 1) == 0) {
                  puVar4 = (undefined8 *)0x113725580;
                  ___cxa_guard_acquire();
                  if ((int)puVar4 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    unaff_x20 = 0x113725578;
                    func_0x000107741c30(1);
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar4 = &PTR_DAT_1109d2ce8;
                    func_0x000107741cd0(FUN_1077354ac);
                    func_0x000107742924();
                    unaff_x19 = puVar4;
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  uVar3 = 0x113725578;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x113725580);
                  func_0x000107742904();
                  func_0x000107741ca8();
                  if ((bRam0000000113725590 & 1) == 0) {
                    puVar4 = (undefined8 *)0x113725590;
                    ___cxa_guard_acquire();
                    if ((int)puVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      unaff_x20 = 0x113725588;
                      func_0x000107741c30(1);
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar4 = &PTR_DAT_1109d2d28;
                      func_0x000107741cd0(&UNK_1077356c8);
                      func_0x000107742924();
                      unaff_x19 = puVar4;
                    }
                  }
                  func_0x0001077419ec();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x113725590);
                    func_0x000107742904();
                    func_0x000107741ca8();
                    if ((bRam00000001137255a0 & 1) == 0) {
                      iVar2 = 0x137255a0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742334();
                        func_0x0001077753dc(auStack_7a0);
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725598;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2d68;
                        func_0x000107741cd0(&UNK_1077358e4);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725598;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137255a0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam00000001137255b0 & 1) == 0) {
                      iVar2 = 0x137255b0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742334();
                        func_0x0001077753dc(auStack_870);
                        func_0x000107741d3c();
                        unaff_x20 = 0x1137255a8;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2da8;
                        func_0x000107741cd0(FUN_107735b44);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137255a8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137255b0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam00000001137255c0 & 1) == 0) {
                      iVar2 = 0x137255c0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742334();
                        func_0x000107741d3c();
                        unaff_x20 = 0x1137255b8;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_FUN_1109d2de8;
                        func_0x000107741cd0(&UNK_107735d78);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137255b8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137255c0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam00000001137255d0 & 1) == 0) {
                      iVar2 = 0x137255d0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742048();
                        func_0x000107741d3c();
                        unaff_x20 = 0x1137255c8;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2e28;
                        func_0x000107741cd0(&UNK_107735f84);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137255c8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137255d0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam00000001137255e0 & 1) == 0) {
                      iVar2 = 0x137255e0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107741f7c();
                        func_0x000107741bb4();
                        unaff_x20 = 0x1137255d8;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        unaff_x22 = 0x10;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2e68;
                        func_0x000107741cd0(FUN_10773610c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137255d8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742e34();
                    do {
                      func_0x0001077429ac();
                      func_0x000107742a1c();
                    } while (!(bool)in_ZR);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137255e0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam00000001137255f0 & 1) == 0) {
                      iVar2 = 0x137255f0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742048();
                        func_0x000107741d3c();
                        unaff_x20 = 0x1137255e8;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2ea8;
                        func_0x000107741cd0(&UNK_1077362d4);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137255e8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137255f0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725600 & 1) == 0) {
                      iVar2 = 0x13725600;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742048();
                        func_0x000107741d3c();
                        unaff_x20 = 0x1137255f8;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2ee8;
                        func_0x000107741cd0(&UNK_10773645c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137255f8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725600);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725610 & 1) == 0) {
                      iVar2 = 0x13725610;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742048();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725608;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2f28;
                        func_0x000107741cd0(&UNK_1077365e4);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725608;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725610);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725620 & 1) == 0) {
                      iVar2 = 0x13725620;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725618;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2f68;
                        func_0x000107741cd0(&UNK_10773676c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725618;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725620);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725630 & 1) == 0) {
                      iVar2 = 0x13725630;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742240();
                        func_0x000107742e40();
                        func_0x000107741bb4();
                        unaff_x20 = 0x113725628;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        unaff_x22 = 0x10;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2fa8;
                        func_0x000107741cd0(&UNK_107736914);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725628;
                    }
                    ___stack_chk_fail();
                    func_0x000107742e34();
                    do {
                      func_0x0001077429ac();
                      func_0x000107742a1c();
                    } while (!(bool)in_ZR);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725630);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725640 & 1) == 0) {
                      iVar2 = 0x13725640;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x00010774230c();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725638;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d2fe8;
                        func_0x000107741cd0(&UNK_107736b64);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725638;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725640);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725650 & 1) == 0) {
                      iVar2 = 0x13725650;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107743174();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725648;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_FUN_1109d3028;
                        func_0x000107741cd0(&UNK_107736d60);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725648;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725650);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725660 & 1) == 0) {
                      iVar2 = 0x13725660;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107743174();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725658;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3068;
                        func_0x000107741cd0(&UNK_107736fa4);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725658;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725660);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725670 & 1) == 0) {
                      iVar2 = 0x13725670;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742b9c();
                        func_0x000107742da0();
                        func_0x000107741bb4();
                        unaff_x20 = 0x113725668;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        unaff_x22 = 0x10;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d30a8;
                        func_0x000107741cd0(&UNK_1077371e8);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725668;
                    }
                    ___stack_chk_fail();
                    func_0x000107742e34();
                    do {
                      func_0x0001077429ac();
                      func_0x000107742a1c();
                    } while (!(bool)in_ZR);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725670);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725680 & 1) == 0) {
                      iVar2 = 0x13725680;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x00010774251c();
                        func_0x000107742da0();
                        func_0x000107741bb4();
                        unaff_x20 = 0x113725678;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        unaff_x22 = 0x10;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d30f8;
                        func_0x000107741cd0(&UNK_107737668);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725678;
                    }
                    ___stack_chk_fail();
                    func_0x000107742e34();
                    do {
                      func_0x0001077429ac();
                      func_0x000107742a1c();
                    } while (!(bool)in_ZR);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725680);
                    func_0x00010774297c();
                    lStack_13d0 = unaff_x22;
                    func_0x000107741ca8();
                    if ((bRam0000000113725690 & 1) == 0) {
                      iVar2 = 0x13725690;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742b9c();
                        func_0x000107742da0();
                        func_0x000107775500(auStack_1410);
                        func_0x000107741bb4();
                        unaff_x20 = 0x113725688;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        unaff_x22 = 0x10;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3138;
                        func_0x000107741cd0(FUN_107737910);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725688;
                    }
                    ___stack_chk_fail();
                    func_0x00010774281c();
                    do {
                      func_0x000107743108();
                      func_0x00010774330c();
                    } while (unaff_x22 != 0);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725690);
                    func_0x00010774297c();
                    lStack_14b0 = unaff_x22;
                    func_0x000107741ca8();
                    lVar5 = 0;
                    if ((bRam00000001137256a0 & 1) == 0) {
                      puVar4 = (undefined8 *)0x1137256a0;
                      ___cxa_guard_acquire();
                      if ((int)puVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107775500(auStack_1500);
                        uStack_14e8 = 3;
                        func_0x000107741bb4();
                        unaff_x20 = 0x113725698;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        lVar5 = 0x10;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *puVar4 = &PTR_DAT_1109d3178;
                        func_0x000107741cd0(&UNK_107737c18);
                        func_0x000107742924();
                        unaff_x19 = puVar4;
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x113725698;
                    }
                    ___stack_chk_fail();
                    func_0x00010774281c();
                    do {
                      func_0x000107743108();
                      func_0x00010774330c();
                    } while (lVar5 != 0);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137256a0);
                    func_0x00010774297c();
                    lStack_1590 = lVar5;
                    func_0x000107741ca8();
                    bVar1 = false;
                    if ((bRam00000001137256b0 & 1) == 0) {
                      iVar2 = 0x137256b0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742b9c();
                        func_0x000107742da0();
                        func_0x000107775500(auStack_15d0);
                        func_0x000107741bb4();
                        unaff_x20 = 0x1137256a8;
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        bVar1 = true;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_FUN_1109d31b8;
                        func_0x000107741cd0(&UNK_107737edc);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137256a8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774281c();
                    do {
                      func_0x000107743108();
                      func_0x00010774330c();
                    } while (bVar1);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137256b0);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam00000001137256c0 & 1) == 0) {
                      puVar4 = (undefined8 *)0x1137256c0;
                      ___cxa_guard_acquire();
                      if ((int)puVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        unaff_x20 = 0x1137256b8;
                        func_0x000107741c30(6);
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar4 = &PTR_DAT_1109d31f8;
                        func_0x000107741cd0(&UNK_107738154);
                        func_0x000107742924();
                        unaff_x19 = puVar4;
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137256b8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137256c0);
                    func_0x000107742904();
                    func_0x000107741ca8();
                    bVar1 = false;
                    if ((bRam00000001137256d0 & 1) == 0) {
                      iVar2 = 0x137256d0;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742b9c();
                        func_0x00010774396c();
                        func_0x000107775500(unaff_x20 + 0x10);
                        func_0x000107741bb4();
                        func_0x00010774185c();
                        func_0x000107741a04();
                        func_0x000107742a90();
                        func_0x000107742944();
                        bVar1 = true;
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3238;
                        func_0x000107741cd0(&UNK_107738544);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return 0x1137256c8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774281c();
                    do {
                      func_0x000107743108();
                      func_0x00010774330c();
                    } while (bVar1);
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    do {
                      ___cxa_guard_abort(0x1137256d0);
                      func_0x00010774297c();
                    } while( true );
                  }
                  uVar3 = 0x113725588;
                }
                return uVar3;
              }
              uVar3 = 0x113725568;
            }
          }
        }
      }
    }
  }
  return uVar3;
}



/* Entry: 107727180; end: 10772724b;  */

undefined8 FUN_107727180(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_f60 [64];
  long lStack_f20;
  undefined1 auStack_e90 [24];
  undefined4 uStack_e78;
  long lStack_e40;
  undefined1 auStack_da0 [64];
  long lStack_d60;
  undefined1 auStack_200 [64];
  undefined1 auStack_130 [64];
  
  func_0x000107741ca8();
  if ((bRam0000000113725590 & 1) == 0) {
    puVar3 = (undefined8 *)0x113725590;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      unaff_x20 = 0x113725588;
      func_0x000107741c30(1);
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar3 = &PTR_DAT_1109d2d28;
      func_0x000107741cd0(&UNK_1077356c8);
      func_0x000107742924();
      unaff_x19 = puVar3;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return 0x113725588;
  }
  ___stack_chk_fail();
  func_0x00010774219c();
  ___cxa_guard_abort(0x113725590);
  func_0x000107742904();
  func_0x000107741ca8();
  if ((bRam00000001137255a0 & 1) == 0) {
    iVar2 = 0x137255a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742334();
      func_0x0001077753dc(auStack_130);
      func_0x000107741d3c();
      unaff_x20 = 0x113725598;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2d68;
      func_0x000107741cd0(&UNK_1077358e4);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar4 = 0x113725598;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x1137255a0);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam00000001137255b0 & 1) == 0) {
      iVar2 = 0x137255b0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742334();
        func_0x0001077753dc(auStack_200);
        func_0x000107741d3c();
        unaff_x20 = 0x1137255a8;
        func_0x000107741810();
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d2da8;
        func_0x000107741cd0(FUN_107735b44);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar4 = 0x1137255a8;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x1137255b0);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam00000001137255c0 & 1) == 0) {
        iVar2 = 0x137255c0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742334();
          func_0x000107741d3c();
          unaff_x20 = 0x1137255b8;
          func_0x000107741810();
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_FUN_1109d2de8;
          func_0x000107741cd0(&UNK_107735d78);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar4 = 0x1137255b8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137255c0);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam00000001137255d0 & 1) == 0) {
          iVar2 = 0x137255d0;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742048();
            func_0x000107741d3c();
            unaff_x20 = 0x1137255c8;
            func_0x000107741810();
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d2e28;
            func_0x000107741cd0(&UNK_107735f84);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          uVar4 = 0x1137255c8;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137255d0);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam00000001137255e0 & 1) == 0) {
            iVar2 = 0x137255e0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107741f7c();
              func_0x000107741bb4();
              unaff_x20 = 0x1137255d8;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d2e68;
              func_0x000107741cd0(FUN_10773610c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x1137255d8;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137255e0);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam00000001137255f0 & 1) == 0) {
            iVar2 = 0x137255f0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742048();
              func_0x000107741d3c();
              unaff_x20 = 0x1137255e8;
              func_0x000107741810();
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d2ea8;
              func_0x000107741cd0(&UNK_1077362d4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            uVar4 = 0x1137255e8;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x1137255f0);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam0000000113725600 & 1) == 0) {
              iVar2 = 0x13725600;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742048();
                func_0x000107741d3c();
                unaff_x20 = 0x1137255f8;
                func_0x000107741810();
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d2ee8;
                func_0x000107741cd0(&UNK_10773645c);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              uVar4 = 0x1137255f8;
            }
            else {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725600);
              func_0x00010774297c();
              func_0x000107741ca8();
              if ((bRam0000000113725610 & 1) == 0) {
                iVar2 = 0x13725610;
                ___cxa_guard_acquire();
                if (iVar2 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742048();
                  func_0x000107741d3c();
                  unaff_x20 = 0x113725608;
                  func_0x000107741810();
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d2f28;
                  func_0x000107741cd0(&UNK_1077365e4);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                uVar4 = 0x113725608;
              }
              else {
                ___stack_chk_fail();
                func_0x000107742144();
                func_0x00010774291c();
                func_0x00010774298c();
                func_0x000107742914();
                ___cxa_guard_abort(0x113725610);
                func_0x00010774297c();
                func_0x000107741ca8();
                if ((bRam0000000113725620 & 1) == 0) {
                  iVar2 = 0x13725620;
                  ___cxa_guard_acquire();
                  if (iVar2 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x0001077425c0();
                    func_0x000107741d3c();
                    unaff_x20 = 0x113725618;
                    func_0x000107741810();
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742944();
                    func_0x00010774293c();
                    func_0x00010774291c();
                    *unaff_x19 = &PTR_DAT_1109d2f68;
                    func_0x000107741cd0(&UNK_10773676c);
                    func_0x000107742924();
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  uVar4 = 0x113725618;
                }
                else {
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725620);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725630 & 1) == 0) {
                    iVar2 = 0x13725630;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x000107742e40();
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725628;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2fa8;
                      func_0x000107741cd0(&UNK_107736914);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725628;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725630);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725640 & 1) == 0) {
                    iVar2 = 0x13725640;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725638;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2fe8;
                      func_0x000107741cd0(&UNK_107736b64);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    uVar4 = 0x113725638;
                  }
                  else {
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725640);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725650 & 1) == 0) {
                      iVar2 = 0x13725650;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107743174();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725648;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_FUN_1109d3028;
                        func_0x000107741cd0(&UNK_107736d60);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      uVar4 = 0x113725648;
                    }
                    else {
                      ___stack_chk_fail();
                      func_0x000107742144();
                      func_0x00010774291c();
                      func_0x00010774298c();
                      func_0x000107742914();
                      ___cxa_guard_abort(0x113725650);
                      func_0x00010774297c();
                      func_0x000107741ca8();
                      if ((bRam0000000113725660 & 1) == 0) {
                        iVar2 = 0x13725660;
                        ___cxa_guard_acquire();
                        if (iVar2 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107743174();
                          func_0x000107741d3c();
                          unaff_x20 = 0x113725658;
                          func_0x000107741810();
                          func_0x000107741a04();
                          func_0x000107742984();
                          func_0x000107742944();
                          func_0x00010774293c();
                          func_0x00010774291c();
                          *unaff_x19 = &PTR_DAT_1109d3068;
                          func_0x000107741cd0(&UNK_107736fa4);
                          func_0x000107742924();
                        }
                      }
                      func_0x0001077419ec();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x000107742144();
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725660);
                        func_0x00010774297c();
                        func_0x000107741ca8();
                        if ((bRam0000000113725670 & 1) == 0) {
                          iVar2 = 0x13725670;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x000107742da0();
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725668;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            unaff_x22 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d30a8;
                            func_0x000107741cd0(&UNK_1077371e8);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725668;
                        }
                        ___stack_chk_fail();
                        func_0x000107742e34();
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725670);
                        func_0x00010774297c();
                        func_0x000107741ca8();
                        if ((bRam0000000113725680 & 1) == 0) {
                          iVar2 = 0x13725680;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x00010774251c();
                            func_0x000107742da0();
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725678;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            unaff_x22 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d30f8;
                            func_0x000107741cd0(&UNK_107737668);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725678;
                        }
                        ___stack_chk_fail();
                        func_0x000107742e34();
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725680);
                        func_0x00010774297c();
                        lStack_d60 = unaff_x22;
                        func_0x000107741ca8();
                        if ((bRam0000000113725690 & 1) == 0) {
                          iVar2 = 0x13725690;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x000107742da0();
                            func_0x000107775500(auStack_da0);
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725688;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            unaff_x22 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d3138;
                            func_0x000107741cd0(FUN_107737910);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725688;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (unaff_x22 != 0);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725690);
                        func_0x00010774297c();
                        lStack_e40 = unaff_x22;
                        func_0x000107741ca8();
                        lVar5 = 0;
                        if ((bRam00000001137256a0 & 1) == 0) {
                          puVar3 = (undefined8 *)0x1137256a0;
                          ___cxa_guard_acquire();
                          if ((int)puVar3 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107775500(auStack_e90);
                            uStack_e78 = 3;
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725698;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            lVar5 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *puVar3 = &PTR_DAT_1109d3178;
                            func_0x000107741cd0(&UNK_107737c18);
                            func_0x000107742924();
                            unaff_x19 = puVar3;
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725698;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (lVar5 != 0);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x1137256a0);
                        func_0x00010774297c();
                        lStack_f20 = lVar5;
                        func_0x000107741ca8();
                        bVar1 = false;
                        if ((bRam00000001137256b0 & 1) == 0) {
                          iVar2 = 0x137256b0;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x000107742da0();
                            func_0x000107775500(auStack_f60);
                            func_0x000107741bb4();
                            unaff_x20 = 0x1137256a8;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            bVar1 = true;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_FUN_1109d31b8;
                            func_0x000107741cd0(&UNK_107737edc);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x1137256a8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (bVar1);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x1137256b0);
                        func_0x00010774297c();
                        func_0x000107741ca8();
                        if ((bRam00000001137256c0 & 1) == 0) {
                          puVar3 = (undefined8 *)0x1137256c0;
                          ___cxa_guard_acquire();
                          if ((int)puVar3 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            unaff_x20 = 0x1137256b8;
                            func_0x000107741c30(6);
                            func_0x000107741a04();
                            func_0x000107742984();
                            func_0x000107742cb4();
                            func_0x00010774291c();
                            *puVar3 = &PTR_DAT_1109d31f8;
                            func_0x000107741cd0(&UNK_107738154);
                            func_0x000107742924();
                            unaff_x19 = puVar3;
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x1137256b8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774219c();
                        ___cxa_guard_abort(0x1137256c0);
                        func_0x000107742904();
                        func_0x000107741ca8();
                        bVar1 = false;
                        if ((bRam00000001137256d0 & 1) == 0) {
                          iVar2 = 0x137256d0;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x00010774396c();
                            func_0x000107775500(unaff_x20 + 0x10);
                            func_0x000107741bb4();
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            bVar1 = true;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d3238;
                            func_0x000107741cd0(&UNK_107738544);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x1137256c8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (bVar1);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        do {
                          ___cxa_guard_abort(0x1137256d0);
                          func_0x00010774297c();
                        } while( true );
                      }
                      uVar4 = 0x113725658;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}



/* Entry: 1077278c8; end: 1077279ab;  */

undefined8 FUN_1077278c8(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_8e0 [64];
  long lStack_8a0;
  undefined1 auStack_810 [24];
  undefined4 uStack_7f8;
  long lStack_7c0;
  undefined1 auStack_720 [64];
  long lStack_6e0;
  
  func_0x000107741ca8();
  if ((bRam0000000113725610 & 1) == 0) {
    iVar2 = 0x13725610;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742048();
      func_0x000107741d3c();
      unaff_x20 = 0x113725608;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2f28;
      func_0x000107741cd0(&UNK_1077365e4);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x113725608;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725610);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam0000000113725620 & 1) == 0) {
      iVar2 = 0x13725620;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x0001077425c0();
        func_0x000107741d3c();
        unaff_x20 = 0x113725618;
        func_0x000107741810();
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d2f68;
        func_0x000107741cd0(&UNK_10773676c);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar3 = 0x113725618;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725620);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam0000000113725630 & 1) == 0) {
        iVar2 = 0x13725630;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          func_0x000107742e40();
          func_0x000107741bb4();
          unaff_x20 = 0x113725628;
          func_0x00010774185c();
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          unaff_x22 = 0x10;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d2fa8;
          func_0x000107741cd0(&UNK_107736914);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        return 0x113725628;
      }
      ___stack_chk_fail();
      func_0x000107742e34();
      do {
        func_0x0001077429ac();
        func_0x000107742a1c();
      } while (!(bool)in_ZR);
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725630);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam0000000113725640 & 1) == 0) {
        iVar2 = 0x13725640;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x00010774230c();
          func_0x000107741d3c();
          unaff_x20 = 0x113725638;
          func_0x000107741810();
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d2fe8;
          func_0x000107741cd0(&UNK_107736b64);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar3 = 0x113725638;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725640);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam0000000113725650 & 1) == 0) {
          iVar2 = 0x13725650;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107743174();
            func_0x000107741d3c();
            unaff_x20 = 0x113725648;
            func_0x000107741810();
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_FUN_1109d3028;
            func_0x000107741cd0(&UNK_107736d60);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          uVar3 = 0x113725648;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725650);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam0000000113725660 & 1) == 0) {
            iVar2 = 0x13725660;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107743174();
              func_0x000107741d3c();
              unaff_x20 = 0x113725658;
              func_0x000107741810();
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3068;
              func_0x000107741cd0(&UNK_107736fa4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725660);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam0000000113725670 & 1) == 0) {
              iVar2 = 0x13725670;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742b9c();
                func_0x000107742da0();
                func_0x000107741bb4();
                unaff_x20 = 0x113725668;
                func_0x00010774185c();
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                unaff_x22 = 0x10;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d30a8;
                func_0x000107741cd0(&UNK_1077371e8);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x113725668;
            }
            ___stack_chk_fail();
            func_0x000107742e34();
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725670);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam0000000113725680 & 1) == 0) {
              iVar2 = 0x13725680;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x00010774251c();
                func_0x000107742da0();
                func_0x000107741bb4();
                unaff_x20 = 0x113725678;
                func_0x00010774185c();
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                unaff_x22 = 0x10;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d30f8;
                func_0x000107741cd0(&UNK_107737668);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x113725678;
            }
            ___stack_chk_fail();
            func_0x000107742e34();
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725680);
            func_0x00010774297c();
            lStack_6e0 = unaff_x22;
            func_0x000107741ca8();
            if ((bRam0000000113725690 & 1) == 0) {
              iVar2 = 0x13725690;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742b9c();
                func_0x000107742da0();
                func_0x000107775500(auStack_720);
                func_0x000107741bb4();
                unaff_x20 = 0x113725688;
                func_0x00010774185c();
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                unaff_x22 = 0x10;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d3138;
                func_0x000107741cd0(FUN_107737910);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x113725688;
            }
            ___stack_chk_fail();
            func_0x00010774281c();
            do {
              func_0x000107743108();
              func_0x00010774330c();
            } while (unaff_x22 != 0);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725690);
            func_0x00010774297c();
            lStack_7c0 = unaff_x22;
            func_0x000107741ca8();
            lVar5 = 0;
            if ((bRam00000001137256a0 & 1) == 0) {
              puVar4 = (undefined8 *)0x1137256a0;
              ___cxa_guard_acquire();
              if ((int)puVar4 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107775500(auStack_810);
                uStack_7f8 = 3;
                func_0x000107741bb4();
                unaff_x20 = 0x113725698;
                func_0x00010774185c();
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                lVar5 = 0x10;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *puVar4 = &PTR_DAT_1109d3178;
                func_0x000107741cd0(&UNK_107737c18);
                func_0x000107742924();
                unaff_x19 = puVar4;
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x113725698;
            }
            ___stack_chk_fail();
            func_0x00010774281c();
            do {
              func_0x000107743108();
              func_0x00010774330c();
            } while (lVar5 != 0);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x1137256a0);
            func_0x00010774297c();
            lStack_8a0 = lVar5;
            func_0x000107741ca8();
            bVar1 = false;
            if ((bRam00000001137256b0 & 1) == 0) {
              iVar2 = 0x137256b0;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742b9c();
                func_0x000107742da0();
                func_0x000107775500(auStack_8e0);
                func_0x000107741bb4();
                unaff_x20 = 0x1137256a8;
                func_0x00010774185c();
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                bVar1 = true;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *unaff_x19 = &PTR_FUN_1109d31b8;
                func_0x000107741cd0(&UNK_107737edc);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x1137256a8;
            }
            ___stack_chk_fail();
            func_0x00010774281c();
            do {
              func_0x000107743108();
              func_0x00010774330c();
            } while (bVar1);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x1137256b0);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam00000001137256c0 & 1) == 0) {
              puVar4 = (undefined8 *)0x1137256c0;
              ___cxa_guard_acquire();
              if ((int)puVar4 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                unaff_x20 = 0x1137256b8;
                func_0x000107741c30(6);
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742cb4();
                func_0x00010774291c();
                *puVar4 = &PTR_DAT_1109d31f8;
                func_0x000107741cd0(&UNK_107738154);
                func_0x000107742924();
                unaff_x19 = puVar4;
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x1137256b8;
            }
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x1137256c0);
            func_0x000107742904();
            func_0x000107741ca8();
            bVar1 = false;
            if ((bRam00000001137256d0 & 1) == 0) {
              iVar2 = 0x137256d0;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742b9c();
                func_0x00010774396c();
                func_0x000107775500(unaff_x20 + 0x10);
                func_0x000107741bb4();
                func_0x00010774185c();
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                bVar1 = true;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d3238;
                func_0x000107741cd0(&UNK_107738544);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              return 0x1137256c8;
            }
            ___stack_chk_fail();
            func_0x00010774281c();
            do {
              func_0x000107743108();
              func_0x00010774330c();
            } while (bVar1);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            do {
              ___cxa_guard_abort(0x1137256d0);
              func_0x00010774297c();
            } while( true );
          }
          uVar3 = 0x113725658;
        }
      }
    }
  }
  return uVar3;
}



/* Entry: 107728064; end: 107728183;  */

undefined8 FUN_107728064(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_230 [64];
  long lStack_1f0;
  undefined1 auStack_160 [24];
  undefined4 uStack_148;
  long lStack_110;
  undefined1 auStack_70 [64];
  
  func_0x000107741ca8();
  if ((bRam0000000113725690 & 1) == 0) {
    iVar2 = 0x13725690;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742b9c();
      func_0x000107742da0();
      func_0x000107775500(auStack_70);
      func_0x000107741bb4();
      unaff_x20 = 0x113725688;
      func_0x00010774185c();
      func_0x000107741a04();
      func_0x000107742a90();
      func_0x000107742944();
      unaff_x22 = 0x10;
      do {
        func_0x0001077429ac();
        func_0x000107742a1c();
      } while (!(bool)in_ZR);
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3138;
      func_0x000107741cd0(FUN_107737910);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar4 = 0x113725688;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774281c();
    do {
      func_0x000107743108();
      func_0x00010774330c();
    } while (unaff_x22 != 0);
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725690);
    func_0x00010774297c();
    lStack_110 = unaff_x22;
    func_0x000107741ca8();
    lVar5 = 0;
    if ((bRam00000001137256a0 & 1) == 0) {
      puVar3 = (undefined8 *)0x1137256a0;
      ___cxa_guard_acquire();
      if ((int)puVar3 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107775500(auStack_160);
        uStack_148 = 3;
        func_0x000107741bb4();
        unaff_x20 = 0x113725698;
        func_0x00010774185c();
        func_0x000107741a04();
        func_0x000107742a90();
        func_0x000107742944();
        lVar5 = 0x10;
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        *puVar3 = &PTR_DAT_1109d3178;
        func_0x000107741cd0(&UNK_107737c18);
        func_0x000107742924();
        unaff_x19 = puVar3;
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar4 = 0x113725698;
    }
    else {
      ___stack_chk_fail();
      func_0x00010774281c();
      do {
        func_0x000107743108();
        func_0x00010774330c();
      } while (lVar5 != 0);
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x1137256a0);
      func_0x00010774297c();
      lStack_1f0 = lVar5;
      func_0x000107741ca8();
      bVar1 = false;
      if ((bRam00000001137256b0 & 1) == 0) {
        iVar2 = 0x137256b0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742b9c();
          func_0x000107742da0();
          func_0x000107775500(auStack_230);
          func_0x000107741bb4();
          unaff_x20 = 0x1137256a8;
          func_0x00010774185c();
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          bVar1 = true;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_FUN_1109d31b8;
          func_0x000107741cd0(&UNK_107737edc);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar4 = 0x1137256a8;
      }
      else {
        ___stack_chk_fail();
        func_0x00010774281c();
        do {
          func_0x000107743108();
          func_0x00010774330c();
        } while (bVar1);
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137256b0);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam00000001137256c0 & 1) == 0) {
          puVar3 = (undefined8 *)0x1137256c0;
          ___cxa_guard_acquire();
          if ((int)puVar3 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            unaff_x20 = 0x1137256b8;
            func_0x000107741c30(6);
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742cb4();
            func_0x00010774291c();
            *puVar3 = &PTR_DAT_1109d31f8;
            func_0x000107741cd0(&UNK_107738154);
            func_0x000107742924();
            unaff_x19 = puVar3;
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          return 0x1137256b8;
        }
        ___stack_chk_fail();
        func_0x00010774219c();
        ___cxa_guard_abort(0x1137256c0);
        func_0x000107742904();
        func_0x000107741ca8();
        bVar1 = false;
        if ((bRam00000001137256d0 & 1) == 0) {
          iVar2 = 0x137256d0;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742b9c();
            func_0x00010774396c();
            func_0x000107775500(unaff_x20 + 0x10);
            func_0x000107741bb4();
            func_0x00010774185c();
            func_0x000107741a04();
            func_0x000107742a90();
            func_0x000107742944();
            bVar1 = true;
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3238;
            func_0x000107741cd0(&UNK_107738544);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010774281c();
          do {
            func_0x000107743108();
            func_0x00010774330c();
          } while (bVar1);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          do {
            ___cxa_guard_abort(0x1137256d0);
            func_0x00010774297c();
          } while( true );
        }
        uVar4 = 0x1137256c8;
      }
    }
  }
  return uVar4;
}



/* Entry: 1077297e0; end: 1077298ab;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_1077297e0(undefined8 param_1,code *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  char **ppcVar11;
  char **ppcVar12;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  ulong *puVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined *puVar15;
  char **ppcStack_1b80;
  char **ppcStack_1b78;
  ulong *puStack_1b70;
  undefined8 ***pppuStack_1b68;
  undefined8 ***pppuStack_1b60;
  undefined *puStack_1b58;
  undefined8 **ppuStack_1b50;
  undefined1 auStack_1b48 [24];
  undefined8 **ppuStack_1b30;
  undefined8 **ppuStack_1b28;
  undefined8 uStack_1b20;
  undefined8 **ppuStack_1b18;
  undefined8 **ppuStack_1b10;
  undefined8 uStack_1b08;
  undefined1 auStack_1b00 [24];
  undefined8 **ppuStack_1ae8;
  undefined8 uStack_1ae0;
  undefined8 uStack_1ad8;
  undefined8 ***pppuStack_1ad0;
  ulong uStack_1ac8;
  undefined8 uStack_1ac0;
  char *pcStack_1ab8;
  char *pcStack_1ab0;
  undefined8 uStack_1a80;
  undefined8 ***pppuStack_1a20;
  code *pcStack_1a18;
  undefined1 auStack_19f8 [120];
  undefined8 uStack_1980;
  undefined8 ***pppuStack_1960;
  undefined *puStack_1958;
  undefined8 uStack_18b0;
  undefined8 ***pppuStack_1890;
  undefined *puStack_1888;
  undefined8 uStack_17e0;
  undefined8 ***pppuStack_17c0;
  undefined *puStack_17b8;
  undefined8 uStack_1720;
  undefined8 ***pppuStack_1700;
  undefined *puStack_16f8;
  undefined8 uStack_1660;
  undefined8 ***pppuStack_1640;
  undefined *puStack_1638;
  undefined8 uStack_15a0;
  undefined8 ***pppuStack_1580;
  undefined *puStack_1578;
  undefined4 uStack_1550;
  undefined8 uStack_14e0;
  undefined8 ***pppuStack_14c0;
  undefined *puStack_14b8;
  undefined8 uStack_1420;
  undefined8 ***pppuStack_1400;
  code *pcStack_13f8;
  undefined8 uStack_1350;
  undefined8 ***pppuStack_1330;
  undefined *puStack_1328;
  undefined8 uStack_1280;
  undefined8 ***pppuStack_1260;
  undefined *puStack_1258;
  undefined8 uStack_11b0;
  undefined8 ***pppuStack_1190;
  undefined *puStack_1188;
  undefined8 uStack_10d0;
  undefined8 ***pppuStack_10b0;
  undefined *puStack_10a8;
  undefined8 uStack_ff0;
  undefined8 ***pppuStack_fd0;
  undefined *puStack_fc8;
  undefined8 uStack_f20;
  undefined8 ***pppuStack_f00;
  undefined *puStack_ef8;
  undefined8 uStack_e50;
  undefined8 ***pppuStack_e30;
  undefined *puStack_e28;
  undefined8 uStack_d70;
  undefined8 ***pppuStack_d50;
  code *pcStack_d48;
  undefined8 uStack_c90;
  undefined8 ***pppuStack_c70;
  undefined *puStack_c68;
  undefined8 uStack_bc0;
  undefined8 ***pppuStack_ba0;
  undefined *puStack_b98;
  undefined8 uStack_af0;
  undefined8 ***pppuStack_ad0;
  undefined *puStack_ac8;
  undefined8 uStack_a10;
  undefined8 ***pppuStack_9f0;
  undefined *puStack_9e8;
  undefined8 uStack_930;
  undefined8 ***pppuStack_910;
  undefined *puStack_908;
  undefined8 uStack_860;
  undefined8 ***pppuStack_840;
  undefined *puStack_838;
  undefined8 uStack_790;
  undefined8 ***pppuStack_770;
  undefined *puStack_768;
  undefined8 uStack_6b0;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_5d0;
  undefined8 ***pppuStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_500;
  undefined8 ***pppuStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_430;
  undefined8 ***pppuStack_410;
  undefined *puStack_408;
  undefined4 uStack_388;
  undefined8 ***pppuStack_330;
  undefined *puStack_328;
  undefined1 ***pppuStack_260;
  undefined *puStack_258;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725810 & 1) == 0) {
    puVar5 = (undefined8 *)0x113725810;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107741c30(6);
      param_2 = (code *)&UNK_10773c5b4;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar5 = &PTR_DAT_1109d37c8;
      func_0x000107741cd0(&UNK_10773c404);
      func_0x000107742924();
      unaff_x19 = puVar5;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    ppppuVar6 = (undefined8 ****)0x113725808;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774219c();
    ___cxa_guard_abort(0x113725810);
    func_0x000107742904();
    puStack_c8 = &DAT_1077298ac;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam0000000113725820 & 1) == 0) {
      puVar5 = (undefined8 *)0x113725820;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107741c30(6);
        param_2 = (code *)&UNK_10773c960;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742cb4();
        func_0x00010774291c();
        *puVar5 = &PTR_DAT_1109d3808;
        func_0x000107741cd0(&UNK_10773c7a4);
        func_0x000107742924();
        unaff_x19 = puVar5;
      }
    }
    func_0x0001077419ec();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010774219c();
      ___cxa_guard_abort(0x113725820);
      func_0x000107742904();
      puStack_188 = &DAT_107729978;
      ppuStack_190 = &puStack_d0;
      func_0x000107741ca8();
      if ((bRam0000000113725830 & 1) == 0) {
        iVar4 = 0x13725830;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742334();
          func_0x000107742da0();
          func_0x000107741d3c();
          func_0x000107741810();
          param_2 = (code *)&UNK_10773cd4c;
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3848;
          func_0x000107741cd0(FUN_10773cb58);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        ppppuVar6 = (undefined8 ****)0x113725828;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725830);
        func_0x00010774297c();
        puStack_258 = &DAT_107729a60;
        pppuStack_260 = &ppuStack_190;
        func_0x000107741ca8();
        if ((bRam0000000113725840 & 1) == 0) {
          iVar4 = 0x13725840;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107743174();
            func_0x000107741d3c();
            func_0x000107741810();
            param_2 = FUN_10773d054;
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3888;
            func_0x000107741cd0(&UNK_10773cf04);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          ppppuVar6 = (undefined8 ****)0x113725838;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725840);
          func_0x00010774297c();
          puStack_328 = &DAT_107729b48;
          pppuStack_330 = &pppuStack_260;
          func_0x000107741ca8();
          if ((bRam0000000113725850 & 1) == 0) {
            iVar4 = 0x13725850;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              uStack_388 = 6;
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773d2a0;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d38c8;
              func_0x000107741cd0(&UNK_10773d224);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725848;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725850);
          func_0x00010774297c();
          puStack_408 = &DAT_107729c54;
          uStack_430 = unaff_x22;
          pppuStack_410 = &pppuStack_330;
          func_0x000107741ca8();
          if ((bRam0000000113725860 & 1) == 0) {
            iVar4 = 0x13725860;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x0001077438b4();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773d51c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3908;
              func_0x000107741cd0(&UNK_10773d4ac);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            ppppuVar6 = (undefined8 ****)0x113725858;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725860);
            func_0x00010774297c();
            puStack_4d8 = &DAT_107729d3c;
            uStack_500 = unaff_x22;
            pppuStack_4e0 = &pppuStack_410;
            func_0x000107741ca8();
            if ((bRam0000000113725870 & 1) == 0) {
              iVar4 = 0x13725870;
              ___cxa_guard_acquire();
              if (iVar4 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x00010774230c();
                func_0x000107741d3c();
                func_0x000107741810();
                param_2 = (code *)&UNK_10773d774;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d3948;
                func_0x000107741cd0(FUN_10773d6cc);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725870);
              func_0x00010774297c();
              puStack_5a8 = &DAT_107729e20;
              uStack_5d0 = unaff_x22;
              pppuStack_5b0 = &pppuStack_4e0;
              func_0x000107741ca8();
              if ((bRam0000000113725880 & 1) == 0) {
                iVar4 = 0x13725880;
                ___cxa_guard_acquire();
                if (iVar4 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x0001077433bc();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = (code *)&UNK_10773d950;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_FUN_1109d3988;
                  func_0x000107741cd0(&UNK_10773d928);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                ppppuVar6 = (undefined8 ****)0x113725878;
              }
              else {
                ___stack_chk_fail();
                func_0x000107742e34();
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                func_0x00010774298c();
                func_0x000107742914();
                ___cxa_guard_abort(0x113725880);
                func_0x00010774297c();
                pcStack_688 = FUN_107729f24;
                uStack_6b0 = unaff_x22;
                pppuStack_690 = &pppuStack_5b0;
                func_0x000107741ca8();
                if ((bRam0000000113725890 & 1) == 0) {
                  iVar4 = 0x13725890;
                  ___cxa_guard_acquire();
                  if (iVar4 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107742240();
                    func_0x000107742e40();
                    func_0x000107741bb4();
                    func_0x00010774185c();
                    param_2 = (code *)&UNK_10773db9c;
                    func_0x000107741a04();
                    func_0x000107742a90();
                    func_0x000107742944();
                    unaff_x22 = 0x10;
                    do {
                      func_0x0001077429ac();
                      func_0x000107742a1c();
                    } while (!(bool)in_ZR);
                    func_0x00010774291c();
                    *unaff_x19 = &PTR_DAT_1109d39c8;
                    func_0x000107741cd0(&UNK_10773db38);
                    func_0x000107742924();
                  }
                }
                func_0x0001077419ec();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725890);
                  func_0x00010774297c();
                  puStack_768 = &DAT_10772a028;
                  uStack_790 = unaff_x22;
                  pppuStack_770 = &pppuStack_690;
                  func_0x000107741ca8();
                  if ((bRam00000001137258a0 & 1) == 0) {
                    iVar4 = 0x137258a0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x000107743bb8();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_10773ddd8;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3a08;
                      func_0x000107741cd0(&UNK_10773ddb0);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725898;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137258a0);
                  func_0x00010774297c();
                  puStack_838 = &DAT_10772a110;
                  uStack_860 = unaff_x22;
                  pppuStack_840 = &pppuStack_770;
                  func_0x000107741ca8();
                  if ((bRam00000001137258b0 & 1) == 0) {
                    iVar4 = 0x137258b0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = FUN_10773dfd8;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3a48;
                      func_0x000107741cd0(&UNK_10773df70);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137258a8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137258b0);
                  func_0x00010774297c();
                  puStack_908 = &DAT_10772a1f4;
                  uStack_930 = unaff_x22;
                  pppuStack_910 = &pppuStack_840;
                  func_0x000107741ca8();
                  if ((bRam00000001137258c0 & 1) == 0) {
                    iVar4 = 0x137258c0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x0001077433bc();
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      param_2 = (code *)&UNK_10773e1b4;
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3a88;
                      func_0x000107741cd0(&UNK_10773e18c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137258b8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137258c0);
                  func_0x00010774297c();
                  puStack_9e8 = &DAT_10772a2f8;
                  uStack_a10 = unaff_x22;
                  pppuStack_9f0 = &pppuStack_910;
                  func_0x000107741ca8();
                  if ((bRam00000001137258d0 & 1) == 0) {
                    iVar4 = 0x137258d0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x000107742e40();
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      param_2 = (code *)&UNK_10773e400;
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3ac8;
                      func_0x000107741cd0(&UNK_10773e39c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137258c8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137258d0);
                  func_0x00010774297c();
                  puStack_ac8 = &DAT_10772a3fc;
                  uStack_af0 = unaff_x22;
                  pppuStack_ad0 = &pppuStack_9f0;
                  func_0x000107741ca8();
                  if ((bRam00000001137258e0 & 1) == 0) {
                    iVar4 = 0x137258e0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x000107743bb8();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = FUN_10773e63c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3b08;
                      func_0x000107741cd0(&UNK_10773e614);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137258d8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137258e0);
                  func_0x00010774297c();
                  puStack_b98 = &DAT_10772a4e4;
                  uStack_bc0 = unaff_x22;
                  pppuStack_ba0 = &pppuStack_ad0;
                  func_0x000107741ca8();
                  if ((bRam00000001137258f0 & 1) == 0) {
                    iVar4 = 0x137258f0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_10773e83c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3b48;
                      func_0x000107741cd0(&UNK_10773e7d4);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137258e8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137258f0);
                  func_0x00010774297c();
                  puStack_c68 = &DAT_10772a5c8;
                  uStack_c90 = unaff_x22;
                  pppuStack_c70 = &pppuStack_ba0;
                  func_0x000107741ca8();
                  if ((bRam0000000113725900 & 1) == 0) {
                    iVar4 = 0x13725900;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x0001077433bc();
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      param_2 = (code *)&UNK_10773ea18;
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3b88;
                      func_0x000107741cd0(&UNK_10773e9f0);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137258f8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725900);
                  func_0x00010774297c();
                  pcStack_d48 = FUN_10772a6cc;
                  uStack_d70 = unaff_x22;
                  pppuStack_d50 = &pppuStack_c70;
                  func_0x000107741ca8();
                  if ((bRam0000000113725910 & 1) == 0) {
                    iVar4 = 0x13725910;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x000107742e40();
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      param_2 = (code *)&UNK_10773ec78;
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3bc8;
                      func_0x000107741cd0(&UNK_10773ec00);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725908;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725910);
                  func_0x00010774297c();
                  puStack_e28 = &DAT_10772a7d0;
                  uStack_e50 = unaff_x22;
                  pppuStack_e30 = &pppuStack_d50;
                  func_0x000107741ca8();
                  if ((bRam0000000113725920 & 1) == 0) {
                    iVar4 = 0x13725920;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x000107743bb8();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_10773eeb4;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3c08;
                      func_0x000107741cd0(&UNK_10773ee8c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725918;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725920);
                  func_0x00010774297c();
                  puStack_ef8 = &DAT_10772a8b8;
                  uStack_f20 = unaff_x22;
                  pppuStack_f00 = &pppuStack_e30;
                  func_0x000107741ca8();
                  if ((bRam0000000113725930 & 1) == 0) {
                    iVar4 = 0x13725930;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_10773f0b4;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3c48;
                      func_0x000107741cd0(&UNK_10773f04c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725928;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725930);
                  func_0x00010774297c();
                  puStack_fc8 = &DAT_10772a99c;
                  uStack_ff0 = unaff_x22;
                  pppuStack_fd0 = &pppuStack_f00;
                  func_0x000107741ca8();
                  if ((bRam0000000113725940 & 1) == 0) {
                    iVar4 = 0x13725940;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x0001077433bc();
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      param_2 = (code *)&UNK_10773f290;
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3c88;
                      func_0x000107741cd0(FUN_10773f268);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725938;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725940);
                  func_0x00010774297c();
                  puStack_10a8 = &DAT_10772aaa0;
                  uStack_10d0 = unaff_x22;
                  pppuStack_10b0 = &pppuStack_fd0;
                  func_0x000107741ca8();
                  if ((bRam0000000113725950 & 1) == 0) {
                    iVar4 = 0x13725950;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x000107742e40();
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      param_2 = (code *)&UNK_10773f4f0;
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_FUN_1109d3cc8;
                      func_0x000107741cd0(&UNK_10773f478);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725948;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725950);
                  func_0x00010774297c();
                  puStack_1188 = &DAT_10772aba4;
                  uStack_11b0 = unaff_x22;
                  pppuStack_1190 = &pppuStack_10b0;
                  func_0x000107741ca8();
                  if ((bRam0000000113725960 & 1) == 0) {
                    iVar4 = 0x13725960;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x000107743bb8();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_10773f72c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3d08;
                      func_0x000107741cd0(&UNK_10773f704);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725958;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725960);
                  func_0x00010774297c();
                  puStack_1258 = &DAT_10772ac8c;
                  uStack_1280 = unaff_x22;
                  pppuStack_1260 = &pppuStack_1190;
                  func_0x000107741ca8();
                  if ((bRam0000000113725970 & 1) == 0) {
                    iVar4 = 0x13725970;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_10773f92c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3d48;
                      func_0x000107741cd0(FUN_10773f8c4);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725968;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725970);
                  func_0x00010774297c();
                  puStack_1328 = &DAT_10772ad70;
                  uStack_1350 = unaff_x22;
                  pppuStack_1330 = &pppuStack_1260;
                  func_0x000107741ca8();
                  if ((bRam0000000113725980 & 1) == 0) {
                    iVar4 = 0x13725980;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = FUN_10773fb34;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3d88;
                      func_0x000107741cd0(&UNK_10773fae0);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725978;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725980);
                  func_0x00010774297c();
                  pcStack_13f8 = FUN_10772ae54;
                  uStack_1420 = unaff_x22;
                  pppuStack_1400 = &pppuStack_1330;
                  func_0x000107741ca8();
                  if ((bRam0000000113725990 & 1) == 0) {
                    iVar4 = 0x13725990;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x000107741ae8();
                      param_2 = (code *)&UNK_10773fda4;
                      func_0x000107741ebc();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3dc8;
                      func_0x000107741cd0(&UNK_10773fce8);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725988;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x113725990);
                  func_0x000107742904();
                  puStack_14b8 = &DAT_10772af1c;
                  uStack_14e0 = unaff_x22;
                  pppuStack_14c0 = &pppuStack_1400;
                  func_0x000107741ca8();
                  if ((bRam00000001137259a0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259a0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      uStack_1550 = 2;
                      func_0x000107741c80(3);
                      param_2 = (code *)&UNK_10773ff94;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar5 = &PTR_DAT_1109d3e08;
                      func_0x000107741cd0(&UNK_10773fea8);
                      func_0x000107742924();
                      unaff_x19 = puVar5;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x113725998;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259a0);
                  func_0x000107742904();
                  puStack_1578 = &DAT_10772aff0;
                  uStack_15a0 = unaff_x22;
                  pppuStack_1580 = &pppuStack_14c0;
                  func_0x000107741ca8();
                  if ((bRam00000001137259b0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259b0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107743448(2);
                      func_0x000107741c80();
                      param_2 = (code *)&UNK_1077406b0;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar5 = &PTR_FUN_1109d3e48;
                      func_0x000107741cd0(&UNK_1077405e0);
                      func_0x000107742924();
                      unaff_x19 = puVar5;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137259a8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259b0);
                  func_0x000107742904();
                  puStack_1638 = &DAT_10772b0c0;
                  uStack_1660 = unaff_x22;
                  pppuStack_1640 = &pppuStack_1580;
                  func_0x000107741ca8();
                  if ((bRam00000001137259c0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259c0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107743448(2);
                      func_0x000107741c80();
                      param_2 = (code *)&UNK_107740978;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar5 = &PTR_DAT_1109d3e88;
                      func_0x000107741cd0(&UNK_1077408b4);
                      func_0x000107742924();
                      unaff_x19 = puVar5;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137259b8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_16f8 = &DAT_10772b190;
                  uStack_1720 = unaff_x22;
                  pppuStack_1700 = &pppuStack_1640;
                  func_0x000107741ca8();
                  if ((bRam00000001137259d0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259d0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741c30(6);
                      param_2 = (code *)&UNK_107740c6c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar5 = &PTR_DAT_1109d3ec8;
                      func_0x000107741cd0(&UNK_107740b7c);
                      func_0x000107742924();
                      unaff_x19 = puVar5;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137259c8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259d0);
                  func_0x000107742904();
                  puStack_17b8 = &DAT_10772b25c;
                  uStack_17e0 = unaff_x22;
                  pppuStack_17c0 = &pppuStack_1700;
                  func_0x000107741ca8();
                  if ((bRam00000001137259e0 & 1) == 0) {
                    iVar4 = 0x137259e0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x0001077438b4();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_107740f20;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3f08;
                      func_0x000107741cd0(&UNK_107740e8c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137259d8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137259e0);
                  func_0x00010774297c();
                  puStack_1888 = &DAT_10772b344;
                  uStack_18b0 = unaff_x22;
                  pppuStack_1890 = &pppuStack_17c0;
                  func_0x000107741ca8();
                  if ((bRam00000001137259f0 & 1) == 0) {
                    iVar4 = 0x137259f0;
                    ___cxa_guard_acquire();
                    if (iVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x0001077438b4();
                      func_0x000107741d3c();
                      func_0x000107741810();
                      param_2 = (code *)&UNK_107741138;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_FUN_1109d3f48;
                      func_0x000107741cd0(&UNK_1077410a8);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137259e8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  puVar7 = (ulong *)0x1137259f0;
                  ___cxa_guard_abort();
                  func_0x00010774297c();
                  puStack_1958 = &DAT_10772b42c;
                  uStack_1980 = unaff_x22;
                  pppuStack_1960 = &pppuStack_1890;
                  func_0x000107741ca8();
                  if ((bRam0000000113725a00 & 1) == 0) {
                    puVar8 = (ulong *)0x113725a00;
                    ___cxa_guard_acquire();
                    puVar7 = puVar8;
                    if ((int)puVar8 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      puVar7 = puVar8;
                      func_0x0001077753dc(auStack_19f8);
                      func_0x000107741c80(1);
                      param_2 = (code *)&UNK_1077413dc;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                      func_0x000107741cd0(&UNK_1077412c0);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return (undefined8 ****)0x1137259f8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774298c();
                  func_0x000107742914();
                  pppuVar9 = (undefined8 ***)0x113725a00;
                  ___cxa_guard_abort();
                  func_0x00010774297c();
                  pcStack_1a18 = FUN_10772b510;
                  pppuStack_1a20 = &pppuStack_1960;
                  func_0x0001077429f8();
                  ppuStack_1b50 = pppuVar9;
                  func_0x00010774205c();
                  ppuStack_1b18 = (undefined8 ***)0x0;
                  ppuStack_1b10 = (undefined8 ***)0x0;
                  uStack_1b08 = 0;
                  ppuStack_1b30 = (undefined8 ***)0x0;
                  ppuStack_1b28 = (undefined8 ***)0x0;
                  uStack_1b20 = 0;
                  lVar14 = *(long *)param_2;
                  uStack_1a80 = extraout_x8;
                  do {
                    if (lVar14 == *(long *)(unaff_x21 + 8)) {
                      pppuVar1 = (undefined8 ***)ppuStack_1b10;
                      pppuVar9 = (undefined8 ***)ppuStack_1b18;
                      if (ppuStack_1b30 != ppuStack_1b28) {
                        pppuVar1 = (undefined8 ***)ppuStack_1b28;
                        pppuVar9 = (undefined8 ***)ppuStack_1b30;
                      }
                      uStack_1ac8 = 0;
                      uStack_1ac0 = 0;
                      pppuStack_1ad0 = (undefined8 ****)0x0;
                      if (pppuVar9 != pppuVar1) {
                        func_0x000100602d9c(&pppuStack_1ad0,&pppuStack_1ad0,pppuVar9);
                        pppuVar9 = pppuVar9 + 3;
                      }
                      for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                        ppppuVar6 = (undefined8 ****)pppuStack_1ad0;
                        if (-1 < (long)uStack_1ac0._7_1_) {
                          ppppuVar6 = &pppuStack_1ad0;
                        }
                        uVar2 = uStack_1ac8;
                        if (-1 < (long)uStack_1ac0) {
                          uVar2 = (long)uStack_1ac0._7_1_;
                        }
                        pcStack_1ab8 = " | ";
                        pcStack_1ab0 = "";
                        func_0x000106887580(&pppuStack_1ad0,(long)ppppuVar6 + uVar2,&pcStack_1ab8);
                        uVar2 = uStack_1ac8;
                        ppppuVar6 = (undefined8 ****)pppuStack_1ad0;
                        if (-1 < (long)uStack_1ac0) {
                          uVar2 = uStack_1ac0 >> 0x38;
                          ppppuVar6 = &pppuStack_1ad0;
                        }
                        func_0x000100602d9c(&pppuStack_1ad0,(long)ppppuVar6 + uVar2,pppuVar9);
                      }
                      ppuStack_1ae8 = (undefined8 ***)0x0;
                      uStack_1ae0 = 0;
                      uStack_1ad8 = 0;
                      uVar3 = (*puVar7 & 1) == 0;
                      puVar8 = puVar7 + 1;
                      if (!(bool)uVar3) {
                        puVar8 = (ulong *)puVar7[1];
                      }
                      puVar13 = (ulong *)&DAT_10f68f19e;
                      if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                  (auStack_1b48,&UNK_10f424ce9,&pppuStack_1ad0);
                        func_0x00010048a6c8(auStack_1b00,auStack_1b48,&UNK_10f424d05);
                        func_0x000100610910(&pcStack_1ab8,auStack_1b00,&ppuStack_1ae8);
                        ppcVar11 = (char **)&UNK_10f417e7a;
                        func_0x00010048a6c8(ppuStack_1b50,&pcStack_1ab8);
                        func_0x0001077435f4();
                        func_0x0001077433f8();
                        func_0x000107742c9c();
                        func_0x000107743354();
                        func_0x0001077435e4();
                        func_0x0001000e30f4(&ppuStack_1b30);
                        ppppuVar6 = (undefined8 ****)&ppuStack_1b18;
                        func_0x0001000e30f4();
                        func_0x000107741c94(uStack_1a80);
                        if ((bool)uVar3) {
                          return ppppuVar6;
                        }
                        ___stack_chk_fail();
                        func_0x0001077435e4();
                        func_0x0001000e30f4(&ppuStack_1b30);
                        ppppuVar10 = (undefined8 ****)&ppuStack_1b18;
                        func_0x0001000e30f4(ppppuVar10);
                        puVar15 = &SUB_10772b8e8;
                        func_0x000107742904();
                      }
                      else {
                        uStack_1ad8 = 0;
                        uStack_1ae0 = 0;
                        ppuStack_1ae8 = (undefined8 ***)0x0;
                        ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                        func_0x00010756a788(&pcStack_1ab8,*puVar8 + 0x10);
                        ppppuVar10 = (undefined8 ****)&ppuStack_1ae8;
                        ppcVar11 = &pcStack_1ab8;
                        puVar15 = (undefined *)0x10772b78c;
                        puVar13 = (ulong *)&DAT_10f68f19e;
                      }
code_r0x00010772b8e8:
                      ppcVar12 = ppcVar11;
                      puStack_1b70 = puVar13;
                      pppuStack_1b68 = ppppuVar6;
                      pppuStack_1b60 = &pppuStack_1a20;
                      puStack_1b58 = puVar15;
                      func_0x000107264c5c();
                      ppcStack_1b80 = ppcVar11;
                      ppcStack_1b78 = ppcVar12;
                      func_0x0001073727e0(ppppuVar10,&ppcStack_1b80);
                      return ppppuVar10;
                    }
                    (**(code **)(lVar14 + 8))();
                    ppppuVar6 = (undefined8 ****)*pppuVar9;
                    if (*(int *)(ppppuVar6 + 8) == 0) {
                      func_0x00010002b838(&pppuStack_1ad0,&DAT_10f68e8ec);
                      if (ppppuVar6[5] != ppppuVar6[6]) {
                        func_0x00010756a788(&pcStack_1ab8,ppppuVar6[5]);
                        ppppuVar10 = &pppuStack_1ad0;
                        ppcVar11 = &pcStack_1ab8;
                        puVar15 = (undefined *)0x10772b628;
                        puVar13 = puVar7;
                        goto code_r0x00010772b8e8;
                      }
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&pppuStack_1ad0,&DAT_10f684600);
                      pppuVar9 = &ppuStack_1b30;
                      if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                        pppuVar9 = &ppuStack_1b18;
                      }
                      func_0x000100206870(pppuVar9,&pppuStack_1ad0);
                    }
                    else {
                      func_0x00010756a788(&pcStack_1ab8,ppppuVar6 + 5);
                      func_0x00010724ef84(auStack_1b00,&pcStack_1ab8);
                      func_0x0001004c3cd0(&ppuStack_1ae8,&DAT_10f68e8ec,auStack_1b00);
                      func_0x00010048a6c8(&pppuStack_1ad0,&ppuStack_1ae8,&DAT_10f684600);
                      func_0x000107743354();
                      func_0x0001077433f8();
                      func_0x00010774335c();
                      pppuVar9 = &ppuStack_1b30;
                      func_0x000100206870(pppuVar9,&pppuStack_1ad0);
                    }
                    func_0x0001077435e4();
                    lVar14 = lVar14 + 0x18;
                  } while( true );
                }
                ppppuVar6 = (undefined8 ****)0x113725888;
              }
              return ppppuVar6;
            }
            ppppuVar6 = (undefined8 ****)0x113725868;
          }
        }
      }
      return ppppuVar6;
    }
    ppppuVar6 = (undefined8 ****)0x113725818;
  }
  return ppppuVar6;
}



/* Entry: 107729f24; end: 10772a027;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_107729f24(undefined8 param_1,code *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  char **ppcVar11;
  char **ppcVar12;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  ulong *puVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined *puVar15;
  char **ppcStack_1500;
  char **ppcStack_14f8;
  ulong *puStack_14f0;
  undefined8 ***pppuStack_14e8;
  undefined8 ***pppuStack_14e0;
  undefined *puStack_14d8;
  undefined8 **ppuStack_14d0;
  undefined1 auStack_14c8 [24];
  undefined8 **ppuStack_14b0;
  undefined8 **ppuStack_14a8;
  undefined8 uStack_14a0;
  undefined8 **ppuStack_1498;
  undefined8 **ppuStack_1490;
  undefined8 uStack_1488;
  undefined1 auStack_1480 [24];
  undefined8 **ppuStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 ***pppuStack_1450;
  ulong uStack_1448;
  undefined8 uStack_1440;
  char *pcStack_1438;
  char *pcStack_1430;
  undefined8 uStack_1400;
  undefined8 ***pppuStack_13a0;
  code *pcStack_1398;
  undefined1 auStack_1378 [120];
  undefined8 uStack_1300;
  undefined8 ***pppuStack_12e0;
  undefined *puStack_12d8;
  undefined8 uStack_1230;
  undefined8 ***pppuStack_1210;
  undefined *puStack_1208;
  undefined8 uStack_1160;
  undefined8 ***pppuStack_1140;
  undefined *puStack_1138;
  undefined8 uStack_10a0;
  undefined8 ***pppuStack_1080;
  undefined *puStack_1078;
  undefined8 uStack_fe0;
  undefined8 ***pppuStack_fc0;
  undefined *puStack_fb8;
  undefined8 uStack_f20;
  undefined8 ***pppuStack_f00;
  undefined *puStack_ef8;
  undefined4 uStack_ed0;
  undefined8 uStack_e60;
  undefined8 ***pppuStack_e40;
  undefined *puStack_e38;
  undefined8 uStack_da0;
  undefined8 ***pppuStack_d80;
  code *pcStack_d78;
  undefined8 uStack_cd0;
  undefined8 ***pppuStack_cb0;
  undefined *puStack_ca8;
  undefined8 uStack_c00;
  undefined8 ***pppuStack_be0;
  undefined *puStack_bd8;
  undefined8 uStack_b30;
  undefined8 ***pppuStack_b10;
  undefined *puStack_b08;
  undefined8 uStack_a50;
  undefined8 ***pppuStack_a30;
  undefined *puStack_a28;
  undefined8 uStack_970;
  undefined8 ***pppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_8a0;
  undefined8 ***pppuStack_880;
  undefined *puStack_878;
  undefined8 uStack_7d0;
  undefined8 ***pppuStack_7b0;
  undefined *puStack_7a8;
  undefined8 uStack_6f0;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_610;
  undefined8 ***pppuStack_5f0;
  undefined *puStack_5e8;
  undefined8 uStack_540;
  undefined8 ***pppuStack_520;
  undefined *puStack_518;
  undefined8 uStack_470;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_110;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725890 & 1) == 0) {
    iVar4 = 0x13725890;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742240();
      func_0x000107742e40();
      func_0x000107741bb4();
      func_0x00010774185c();
      param_2 = (code *)&UNK_10773db9c;
      func_0x000107741a04();
      func_0x000107742a90();
      func_0x000107742944();
      unaff_x22 = 0x10;
      do {
        func_0x0001077429ac();
        func_0x000107742a1c();
      } while (!(bool)in_ZR);
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d39c8;
      func_0x000107741cd0(&UNK_10773db38);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return (undefined8 ****)0x113725888;
  }
  ___stack_chk_fail();
  func_0x000107742e34();
  do {
    func_0x0001077429ac();
    func_0x000107742a1c();
  } while (!(bool)in_ZR);
  func_0x00010774291c();
  func_0x00010774298c();
  func_0x000107742914();
  ___cxa_guard_abort(0x113725890);
  func_0x00010774297c();
  puStack_e8 = &DAT_10772a028;
  uStack_110 = unaff_x22;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107741ca8();
  if ((bRam00000001137258a0 & 1) == 0) {
    iVar4 = 0x137258a0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x0001077425c0();
      func_0x000107743bb8();
      func_0x000107741d3c();
      func_0x000107741810();
      param_2 = (code *)&UNK_10773ddd8;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3a08;
      func_0x000107741cd0(&UNK_10773ddb0);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    ppppuVar5 = (undefined8 ****)0x113725898;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x1137258a0);
    func_0x00010774297c();
    puStack_1b8 = &DAT_10772a110;
    uStack_1e0 = unaff_x22;
    ppuStack_1c0 = &puStack_f0;
    func_0x000107741ca8();
    if ((bRam00000001137258b0 & 1) == 0) {
      iVar4 = 0x137258b0;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x00010774230c();
        func_0x000107741d3c();
        func_0x000107741810();
        param_2 = FUN_10773dfd8;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d3a48;
        func_0x000107741cd0(&UNK_10773df70);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x1137258b0);
      func_0x00010774297c();
      puStack_288 = &DAT_10772a1f4;
      uStack_2b0 = unaff_x22;
      pppuStack_290 = &ppuStack_1c0;
      func_0x000107741ca8();
      if ((bRam00000001137258c0 & 1) == 0) {
        iVar4 = 0x137258c0;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          func_0x0001077433bc();
          func_0x000107741bb4();
          func_0x00010774185c();
          param_2 = (code *)&UNK_10773e1b4;
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          unaff_x22 = 0x10;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3a88;
          func_0x000107741cd0(&UNK_10773e18c);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        ppppuVar5 = (undefined8 ****)0x1137258b8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742e34();
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137258c0);
        func_0x00010774297c();
        puStack_368 = &DAT_10772a2f8;
        uStack_390 = unaff_x22;
        pppuStack_370 = &pppuStack_290;
        func_0x000107741ca8();
        if ((bRam00000001137258d0 & 1) == 0) {
          iVar4 = 0x137258d0;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742240();
            func_0x000107742e40();
            func_0x000107741bb4();
            func_0x00010774185c();
            param_2 = (code *)&UNK_10773e400;
            func_0x000107741a04();
            func_0x000107742a90();
            func_0x000107742944();
            unaff_x22 = 0x10;
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3ac8;
            func_0x000107741cd0(&UNK_10773e39c);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258d0);
          func_0x00010774297c();
          puStack_448 = &DAT_10772a3fc;
          uStack_470 = unaff_x22;
          pppuStack_450 = &pppuStack_370;
          func_0x000107741ca8();
          if ((bRam00000001137258e0 & 1) == 0) {
            iVar4 = 0x137258e0;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = FUN_10773e63c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3b08;
              func_0x000107741cd0(&UNK_10773e614);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x1137258d8;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258e0);
          func_0x00010774297c();
          puStack_518 = &DAT_10772a4e4;
          uStack_540 = unaff_x22;
          pppuStack_520 = &pppuStack_450;
          func_0x000107741ca8();
          if ((bRam00000001137258f0 & 1) == 0) {
            iVar4 = 0x137258f0;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773e83c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3b48;
              func_0x000107741cd0(&UNK_10773e7d4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x1137258e8;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258f0);
          func_0x00010774297c();
          puStack_5e8 = &DAT_10772a5c8;
          uStack_610 = unaff_x22;
          pppuStack_5f0 = &pppuStack_520;
          func_0x000107741ca8();
          if ((bRam0000000113725900 & 1) == 0) {
            iVar4 = 0x13725900;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x0001077433bc();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773ea18;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3b88;
              func_0x000107741cd0(&UNK_10773e9f0);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x1137258f8;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725900);
          func_0x00010774297c();
          pcStack_6c8 = FUN_10772a6cc;
          uStack_6f0 = unaff_x22;
          pppuStack_6d0 = &pppuStack_5f0;
          func_0x000107741ca8();
          if ((bRam0000000113725910 & 1) == 0) {
            iVar4 = 0x13725910;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x000107742e40();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773ec78;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3bc8;
              func_0x000107741cd0(&UNK_10773ec00);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725908;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725910);
          func_0x00010774297c();
          puStack_7a8 = &DAT_10772a7d0;
          uStack_7d0 = unaff_x22;
          pppuStack_7b0 = &pppuStack_6d0;
          func_0x000107741ca8();
          if ((bRam0000000113725920 & 1) == 0) {
            iVar4 = 0x13725920;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773eeb4;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3c08;
              func_0x000107741cd0(&UNK_10773ee8c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725918;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725920);
          func_0x00010774297c();
          puStack_878 = &DAT_10772a8b8;
          uStack_8a0 = unaff_x22;
          pppuStack_880 = &pppuStack_7b0;
          func_0x000107741ca8();
          if ((bRam0000000113725930 & 1) == 0) {
            iVar4 = 0x13725930;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f0b4;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3c48;
              func_0x000107741cd0(&UNK_10773f04c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725928;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725930);
          func_0x00010774297c();
          puStack_948 = &DAT_10772a99c;
          uStack_970 = unaff_x22;
          pppuStack_950 = &pppuStack_880;
          func_0x000107741ca8();
          if ((bRam0000000113725940 & 1) == 0) {
            iVar4 = 0x13725940;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x0001077433bc();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773f290;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3c88;
              func_0x000107741cd0(FUN_10773f268);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725938;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725940);
          func_0x00010774297c();
          puStack_a28 = &DAT_10772aaa0;
          uStack_a50 = unaff_x22;
          pppuStack_a30 = &pppuStack_950;
          func_0x000107741ca8();
          if ((bRam0000000113725950 & 1) == 0) {
            iVar4 = 0x13725950;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x000107742e40();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773f4f0;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_FUN_1109d3cc8;
              func_0x000107741cd0(&UNK_10773f478);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725948;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725950);
          func_0x00010774297c();
          puStack_b08 = &DAT_10772aba4;
          uStack_b30 = unaff_x22;
          pppuStack_b10 = &pppuStack_a30;
          func_0x000107741ca8();
          if ((bRam0000000113725960 & 1) == 0) {
            iVar4 = 0x13725960;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f72c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d08;
              func_0x000107741cd0(&UNK_10773f704);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725958;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725960);
          func_0x00010774297c();
          puStack_bd8 = &DAT_10772ac8c;
          uStack_c00 = unaff_x22;
          pppuStack_be0 = &pppuStack_b10;
          func_0x000107741ca8();
          if ((bRam0000000113725970 & 1) == 0) {
            iVar4 = 0x13725970;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f92c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d48;
              func_0x000107741cd0(FUN_10773f8c4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725968;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725970);
          func_0x00010774297c();
          puStack_ca8 = &DAT_10772ad70;
          uStack_cd0 = unaff_x22;
          pppuStack_cb0 = &pppuStack_be0;
          func_0x000107741ca8();
          if ((bRam0000000113725980 & 1) == 0) {
            iVar4 = 0x13725980;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = FUN_10773fb34;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d88;
              func_0x000107741cd0(&UNK_10773fae0);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725978;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725980);
          func_0x00010774297c();
          pcStack_d78 = FUN_10772ae54;
          uStack_da0 = unaff_x22;
          pppuStack_d80 = &pppuStack_cb0;
          func_0x000107741ca8();
          if ((bRam0000000113725990 & 1) == 0) {
            iVar4 = 0x13725990;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107741ae8();
              param_2 = (code *)&UNK_10773fda4;
              func_0x000107741ebc();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3dc8;
              func_0x000107741cd0(&UNK_10773fce8);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            ppppuVar5 = (undefined8 ****)0x113725988;
          }
          else {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x113725990);
            func_0x000107742904();
            puStack_e38 = &DAT_10772af1c;
            uStack_e60 = unaff_x22;
            pppuStack_e40 = &pppuStack_d80;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar6 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar6 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_ed0 = 2;
                func_0x000107741c80(3);
                param_2 = (code *)&UNK_10773ff94;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742cb4();
                func_0x00010774291c();
                *puVar6 = &PTR_DAT_1109d3e08;
                func_0x000107741cd0(&UNK_10773fea8);
                func_0x000107742924();
                unaff_x19 = puVar6;
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              ppppuVar5 = (undefined8 ****)0x113725998;
            }
            else {
              ___stack_chk_fail();
              func_0x00010774219c();
              ___cxa_guard_abort(0x1137259a0);
              func_0x000107742904();
              puStack_ef8 = &DAT_10772aff0;
              uStack_f20 = unaff_x22;
              pppuStack_f00 = &pppuStack_e40;
              func_0x000107741ca8();
              if ((bRam00000001137259b0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259b0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107743448(2);
                  func_0x000107741c80();
                  param_2 = (code *)&UNK_1077406b0;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar6 = &PTR_FUN_1109d3e48;
                  func_0x000107741cd0(&UNK_1077405e0);
                  func_0x000107742924();
                  unaff_x19 = puVar6;
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                ppppuVar5 = (undefined8 ****)0x1137259a8;
              }
              else {
                ___stack_chk_fail();
                func_0x00010774219c();
                ___cxa_guard_abort(0x1137259b0);
                func_0x000107742904();
                puStack_fb8 = &DAT_10772b0c0;
                uStack_fe0 = unaff_x22;
                pppuStack_fc0 = &pppuStack_f00;
                func_0x000107741ca8();
                if ((bRam00000001137259c0 & 1) == 0) {
                  puVar6 = (undefined8 *)0x1137259c0;
                  ___cxa_guard_acquire();
                  if ((int)puVar6 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107743448(2);
                    func_0x000107741c80();
                    param_2 = (code *)&UNK_107740978;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar6 = &PTR_DAT_1109d3e88;
                    func_0x000107741cd0(&UNK_1077408b4);
                    func_0x000107742924();
                    unaff_x19 = puVar6;
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  ppppuVar5 = (undefined8 ****)0x1137259b8;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_1078 = &DAT_10772b190;
                  uStack_10a0 = unaff_x22;
                  pppuStack_1080 = &pppuStack_fc0;
                  func_0x000107741ca8();
                  if ((bRam00000001137259d0 & 1) == 0) {
                    puVar6 = (undefined8 *)0x1137259d0;
                    ___cxa_guard_acquire();
                    if ((int)puVar6 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741c30(6);
                      param_2 = (code *)&UNK_107740c6c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar6 = &PTR_DAT_1109d3ec8;
                      func_0x000107741cd0(&UNK_107740b7c);
                      func_0x000107742924();
                      unaff_x19 = puVar6;
                    }
                  }
                  func_0x0001077419ec();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259d0);
                    func_0x000107742904();
                    puStack_1138 = &DAT_10772b25c;
                    uStack_1160 = unaff_x22;
                    pppuStack_1140 = &pppuStack_1080;
                    func_0x000107741ca8();
                    if ((bRam00000001137259e0 & 1) == 0) {
                      iVar4 = 0x137259e0;
                      ___cxa_guard_acquire();
                      if (iVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = (code *)&UNK_107740f20;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3f08;
                        func_0x000107741cd0(&UNK_107740e8c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (undefined8 ****)0x1137259d8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137259e0);
                    func_0x00010774297c();
                    puStack_1208 = &DAT_10772b344;
                    uStack_1230 = unaff_x22;
                    pppuStack_1210 = &pppuStack_1140;
                    func_0x000107741ca8();
                    if ((bRam00000001137259f0 & 1) == 0) {
                      iVar4 = 0x137259f0;
                      ___cxa_guard_acquire();
                      if (iVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = (code *)&UNK_107741138;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_FUN_1109d3f48;
                        func_0x000107741cd0(&UNK_1077410a8);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (undefined8 ****)0x1137259e8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    puVar7 = (ulong *)0x1137259f0;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    puStack_12d8 = &DAT_10772b42c;
                    uStack_1300 = unaff_x22;
                    pppuStack_12e0 = &pppuStack_1210;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar8 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar7 = puVar8;
                      if ((int)puVar8 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar7 = puVar8;
                        func_0x0001077753dc(auStack_1378);
                        func_0x000107741c80(1);
                        param_2 = (code *)&UNK_1077413dc;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                        func_0x000107741cd0(&UNK_1077412c0);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (undefined8 ****)0x1137259f8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774298c();
                    func_0x000107742914();
                    pppuVar9 = (undefined8 ***)0x113725a00;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    pcStack_1398 = FUN_10772b510;
                    pppuStack_13a0 = &pppuStack_12e0;
                    func_0x0001077429f8();
                    ppuStack_14d0 = pppuVar9;
                    func_0x00010774205c();
                    ppuStack_1498 = (undefined8 ***)0x0;
                    ppuStack_1490 = (undefined8 ***)0x0;
                    uStack_1488 = 0;
                    ppuStack_14b0 = (undefined8 ***)0x0;
                    ppuStack_14a8 = (undefined8 ***)0x0;
                    uStack_14a0 = 0;
                    lVar14 = *(long *)param_2;
                    uStack_1400 = extraout_x8;
                    do {
                      if (lVar14 == *(long *)(unaff_x21 + 8)) {
                        pppuVar1 = (undefined8 ***)ppuStack_1490;
                        pppuVar9 = (undefined8 ***)ppuStack_1498;
                        if (ppuStack_14b0 != ppuStack_14a8) {
                          pppuVar1 = (undefined8 ***)ppuStack_14a8;
                          pppuVar9 = (undefined8 ***)ppuStack_14b0;
                        }
                        uStack_1448 = 0;
                        uStack_1440 = 0;
                        pppuStack_1450 = (undefined8 ****)0x0;
                        if (pppuVar9 != pppuVar1) {
                          func_0x000100602d9c(&pppuStack_1450,&pppuStack_1450,pppuVar9);
                          pppuVar9 = pppuVar9 + 3;
                        }
                        for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                          ppppuVar5 = (undefined8 ****)pppuStack_1450;
                          if (-1 < (long)uStack_1440._7_1_) {
                            ppppuVar5 = &pppuStack_1450;
                          }
                          uVar2 = uStack_1448;
                          if (-1 < (long)uStack_1440) {
                            uVar2 = (long)uStack_1440._7_1_;
                          }
                          pcStack_1438 = " | ";
                          pcStack_1430 = "";
                          func_0x000106887580(&pppuStack_1450,(long)ppppuVar5 + uVar2,&pcStack_1438)
                          ;
                          uVar2 = uStack_1448;
                          ppppuVar5 = (undefined8 ****)pppuStack_1450;
                          if (-1 < (long)uStack_1440) {
                            uVar2 = uStack_1440 >> 0x38;
                            ppppuVar5 = &pppuStack_1450;
                          }
                          func_0x000100602d9c(&pppuStack_1450,(long)ppppuVar5 + uVar2,pppuVar9);
                        }
                        ppuStack_1468 = (undefined8 ***)0x0;
                        uStack_1460 = 0;
                        uStack_1458 = 0;
                        uVar3 = (*puVar7 & 1) == 0;
                        puVar8 = puVar7 + 1;
                        if (!(bool)uVar3) {
                          puVar8 = (ulong *)puVar7[1];
                        }
                        puVar13 = (ulong *)&DAT_10f68f19e;
                        if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (auStack_14c8,&UNK_10f424ce9,&pppuStack_1450);
                          func_0x00010048a6c8(auStack_1480,auStack_14c8,&UNK_10f424d05);
                          func_0x000100610910(&pcStack_1438,auStack_1480,&ppuStack_1468);
                          ppcVar11 = (char **)&UNK_10f417e7a;
                          func_0x00010048a6c8(ppuStack_14d0,&pcStack_1438);
                          func_0x0001077435f4();
                          func_0x0001077433f8();
                          func_0x000107742c9c();
                          func_0x000107743354();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_14b0);
                          ppppuVar5 = (undefined8 ****)&ppuStack_1498;
                          func_0x0001000e30f4();
                          func_0x000107741c94(uStack_1400);
                          if ((bool)uVar3) {
                            return ppppuVar5;
                          }
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_14b0);
                          ppppuVar10 = (undefined8 ****)&ppuStack_1498;
                          func_0x0001000e30f4(ppppuVar10);
                          puVar15 = &SUB_10772b8e8;
                          func_0x000107742904();
                        }
                        else {
                          uStack_1458 = 0;
                          uStack_1460 = 0;
                          ppuStack_1468 = (undefined8 ***)0x0;
                          ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                          func_0x00010756a788(&pcStack_1438,*puVar8 + 0x10);
                          ppppuVar10 = (undefined8 ****)&ppuStack_1468;
                          ppcVar11 = &pcStack_1438;
                          puVar15 = (undefined *)0x10772b78c;
                          puVar13 = (ulong *)&DAT_10f68f19e;
                        }
code_r0x00010772b8e8:
                        ppcVar12 = ppcVar11;
                        puStack_14f0 = puVar13;
                        pppuStack_14e8 = ppppuVar5;
                        pppuStack_14e0 = &pppuStack_13a0;
                        puStack_14d8 = puVar15;
                        func_0x000107264c5c();
                        ppcStack_1500 = ppcVar11;
                        ppcStack_14f8 = ppcVar12;
                        func_0x0001073727e0(ppppuVar10,&ppcStack_1500);
                        return ppppuVar10;
                      }
                      (**(code **)(lVar14 + 8))();
                      ppppuVar5 = (undefined8 ****)*pppuVar9;
                      if (*(int *)(ppppuVar5 + 8) == 0) {
                        func_0x00010002b838(&pppuStack_1450,&DAT_10f68e8ec);
                        if (ppppuVar5[5] != ppppuVar5[6]) {
                          func_0x00010756a788(&pcStack_1438,ppppuVar5[5]);
                          ppppuVar10 = &pppuStack_1450;
                          ppcVar11 = &pcStack_1438;
                          puVar15 = (undefined *)0x10772b628;
                          puVar13 = puVar7;
                          goto code_r0x00010772b8e8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_1450,&DAT_10f684600);
                        pppuVar9 = &ppuStack_14b0;
                        if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                          pppuVar9 = &ppuStack_1498;
                        }
                        func_0x000100206870(pppuVar9,&pppuStack_1450);
                      }
                      else {
                        func_0x00010756a788(&pcStack_1438,ppppuVar5 + 5);
                        func_0x00010724ef84(auStack_1480,&pcStack_1438);
                        func_0x0001004c3cd0(&ppuStack_1468,&DAT_10f68e8ec,auStack_1480);
                        func_0x00010048a6c8(&pppuStack_1450,&ppuStack_1468,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        pppuVar9 = &ppuStack_14b0;
                        func_0x000100206870(pppuVar9,&pppuStack_1450);
                      }
                      func_0x0001077435e4();
                      lVar14 = lVar14 + 0x18;
                    } while( true );
                  }
                  ppppuVar5 = (undefined8 ****)0x1137259c8;
                }
              }
            }
          }
          return ppppuVar5;
        }
        ppppuVar5 = (undefined8 ****)0x1137258c8;
      }
      return ppppuVar5;
    }
    ppppuVar5 = (undefined8 ****)0x1137258a8;
  }
  return ppppuVar5;
}



/* Entry: 10772a6cc; end: 10772a7cf;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772a6cc(undefined8 param_1,code *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  char **ppcVar11;
  char **ppcVar12;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  ulong *puVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined *puVar15;
  char **ppcStack_e40;
  char **ppcStack_e38;
  ulong *puStack_e30;
  undefined8 ***pppuStack_e28;
  undefined8 ***pppuStack_e20;
  undefined *puStack_e18;
  undefined8 **ppuStack_e10;
  undefined1 auStack_e08 [24];
  undefined8 **ppuStack_df0;
  undefined8 **ppuStack_de8;
  undefined8 uStack_de0;
  undefined8 **ppuStack_dd8;
  undefined8 **ppuStack_dd0;
  undefined8 uStack_dc8;
  undefined1 auStack_dc0 [24];
  undefined8 **ppuStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 ***pppuStack_d90;
  ulong uStack_d88;
  undefined8 uStack_d80;
  char *pcStack_d78;
  char *pcStack_d70;
  undefined8 uStack_d40;
  undefined8 ***pppuStack_ce0;
  code *pcStack_cd8;
  undefined1 auStack_cb8 [120];
  undefined8 uStack_c40;
  undefined8 ***pppuStack_c20;
  undefined *puStack_c18;
  undefined8 uStack_b70;
  undefined8 ***pppuStack_b50;
  undefined *puStack_b48;
  undefined8 uStack_aa0;
  undefined8 ***pppuStack_a80;
  undefined *puStack_a78;
  undefined8 uStack_9e0;
  undefined8 ***pppuStack_9c0;
  undefined *puStack_9b8;
  undefined8 uStack_920;
  undefined8 ***pppuStack_900;
  undefined *puStack_8f8;
  undefined8 uStack_860;
  undefined8 ***pppuStack_840;
  undefined *puStack_838;
  undefined4 uStack_810;
  undefined8 uStack_7a0;
  undefined8 ***pppuStack_780;
  undefined *puStack_778;
  undefined8 uStack_6e0;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_610;
  undefined8 ***pppuStack_5f0;
  undefined *puStack_5e8;
  undefined8 uStack_540;
  undefined8 ***pppuStack_520;
  undefined *puStack_518;
  undefined8 uStack_470;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_110;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725910 & 1) == 0) {
    iVar4 = 0x13725910;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742240();
      func_0x000107742e40();
      func_0x000107741bb4();
      func_0x00010774185c();
      param_2 = (code *)&UNK_10773ec78;
      func_0x000107741a04();
      func_0x000107742a90();
      func_0x000107742944();
      unaff_x22 = 0x10;
      do {
        func_0x0001077429ac();
        func_0x000107742a1c();
      } while (!(bool)in_ZR);
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3bc8;
      func_0x000107741cd0(&UNK_10773ec00);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return (undefined8 ****)0x113725908;
  }
  ___stack_chk_fail();
  func_0x000107742e34();
  do {
    func_0x0001077429ac();
    func_0x000107742a1c();
  } while (!(bool)in_ZR);
  func_0x00010774291c();
  func_0x00010774298c();
  func_0x000107742914();
  ___cxa_guard_abort(0x113725910);
  func_0x00010774297c();
  puStack_e8 = &DAT_10772a7d0;
  uStack_110 = unaff_x22;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107741ca8();
  if ((bRam0000000113725920 & 1) == 0) {
    iVar4 = 0x13725920;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x0001077425c0();
      func_0x000107743bb8();
      func_0x000107741d3c();
      func_0x000107741810();
      param_2 = (code *)&UNK_10773eeb4;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3c08;
      func_0x000107741cd0(&UNK_10773ee8c);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    ppppuVar5 = (undefined8 ****)0x113725918;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725920);
    func_0x00010774297c();
    puStack_1b8 = &DAT_10772a8b8;
    uStack_1e0 = unaff_x22;
    ppuStack_1c0 = &puStack_f0;
    func_0x000107741ca8();
    if ((bRam0000000113725930 & 1) == 0) {
      iVar4 = 0x13725930;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x00010774230c();
        func_0x000107741d3c();
        func_0x000107741810();
        param_2 = (code *)&UNK_10773f0b4;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d3c48;
        func_0x000107741cd0(&UNK_10773f04c);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725930);
      func_0x00010774297c();
      puStack_288 = &DAT_10772a99c;
      uStack_2b0 = unaff_x22;
      pppuStack_290 = &ppuStack_1c0;
      func_0x000107741ca8();
      if ((bRam0000000113725940 & 1) == 0) {
        iVar4 = 0x13725940;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          func_0x0001077433bc();
          func_0x000107741bb4();
          func_0x00010774185c();
          param_2 = (code *)&UNK_10773f290;
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          unaff_x22 = 0x10;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3c88;
          func_0x000107741cd0(FUN_10773f268);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        ppppuVar5 = (undefined8 ****)0x113725938;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742e34();
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725940);
        func_0x00010774297c();
        puStack_368 = &DAT_10772aaa0;
        uStack_390 = unaff_x22;
        pppuStack_370 = &pppuStack_290;
        func_0x000107741ca8();
        if ((bRam0000000113725950 & 1) == 0) {
          iVar4 = 0x13725950;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742240();
            func_0x000107742e40();
            func_0x000107741bb4();
            func_0x00010774185c();
            param_2 = (code *)&UNK_10773f4f0;
            func_0x000107741a04();
            func_0x000107742a90();
            func_0x000107742944();
            unaff_x22 = 0x10;
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            *unaff_x19 = &PTR_FUN_1109d3cc8;
            func_0x000107741cd0(&UNK_10773f478);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725950);
          func_0x00010774297c();
          puStack_448 = &DAT_10772aba4;
          uStack_470 = unaff_x22;
          pppuStack_450 = &pppuStack_370;
          func_0x000107741ca8();
          if ((bRam0000000113725960 & 1) == 0) {
            iVar4 = 0x13725960;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f72c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d08;
              func_0x000107741cd0(&UNK_10773f704);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725958;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725960);
          func_0x00010774297c();
          puStack_518 = &DAT_10772ac8c;
          uStack_540 = unaff_x22;
          pppuStack_520 = &pppuStack_450;
          func_0x000107741ca8();
          if ((bRam0000000113725970 & 1) == 0) {
            iVar4 = 0x13725970;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f92c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d48;
              func_0x000107741cd0(FUN_10773f8c4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725968;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725970);
          func_0x00010774297c();
          puStack_5e8 = &DAT_10772ad70;
          uStack_610 = unaff_x22;
          pppuStack_5f0 = &pppuStack_520;
          func_0x000107741ca8();
          if ((bRam0000000113725980 & 1) == 0) {
            iVar4 = 0x13725980;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = FUN_10773fb34;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d88;
              func_0x000107741cd0(&UNK_10773fae0);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (undefined8 ****)0x113725978;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725980);
          func_0x00010774297c();
          pcStack_6b8 = FUN_10772ae54;
          uStack_6e0 = unaff_x22;
          pppuStack_6c0 = &pppuStack_5f0;
          func_0x000107741ca8();
          if ((bRam0000000113725990 & 1) == 0) {
            iVar4 = 0x13725990;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107741ae8();
              param_2 = (code *)&UNK_10773fda4;
              func_0x000107741ebc();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3dc8;
              func_0x000107741cd0(&UNK_10773fce8);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            ppppuVar5 = (undefined8 ****)0x113725988;
          }
          else {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x113725990);
            func_0x000107742904();
            puStack_778 = &DAT_10772af1c;
            uStack_7a0 = unaff_x22;
            pppuStack_780 = &pppuStack_6c0;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar6 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar6 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_810 = 2;
                func_0x000107741c80(3);
                param_2 = (code *)&UNK_10773ff94;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742cb4();
                func_0x00010774291c();
                *puVar6 = &PTR_DAT_1109d3e08;
                func_0x000107741cd0(&UNK_10773fea8);
                func_0x000107742924();
                unaff_x19 = puVar6;
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              ppppuVar5 = (undefined8 ****)0x113725998;
            }
            else {
              ___stack_chk_fail();
              func_0x00010774219c();
              ___cxa_guard_abort(0x1137259a0);
              func_0x000107742904();
              puStack_838 = &DAT_10772aff0;
              uStack_860 = unaff_x22;
              pppuStack_840 = &pppuStack_780;
              func_0x000107741ca8();
              if ((bRam00000001137259b0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259b0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107743448(2);
                  func_0x000107741c80();
                  param_2 = (code *)&UNK_1077406b0;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar6 = &PTR_FUN_1109d3e48;
                  func_0x000107741cd0(&UNK_1077405e0);
                  func_0x000107742924();
                  unaff_x19 = puVar6;
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                ppppuVar5 = (undefined8 ****)0x1137259a8;
              }
              else {
                ___stack_chk_fail();
                func_0x00010774219c();
                ___cxa_guard_abort(0x1137259b0);
                func_0x000107742904();
                puStack_8f8 = &DAT_10772b0c0;
                uStack_920 = unaff_x22;
                pppuStack_900 = &pppuStack_840;
                func_0x000107741ca8();
                if ((bRam00000001137259c0 & 1) == 0) {
                  puVar6 = (undefined8 *)0x1137259c0;
                  ___cxa_guard_acquire();
                  if ((int)puVar6 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107743448(2);
                    func_0x000107741c80();
                    param_2 = (code *)&UNK_107740978;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar6 = &PTR_DAT_1109d3e88;
                    func_0x000107741cd0(&UNK_1077408b4);
                    func_0x000107742924();
                    unaff_x19 = puVar6;
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  ppppuVar5 = (undefined8 ****)0x1137259b8;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_9b8 = &DAT_10772b190;
                  uStack_9e0 = unaff_x22;
                  pppuStack_9c0 = &pppuStack_900;
                  func_0x000107741ca8();
                  if ((bRam00000001137259d0 & 1) == 0) {
                    puVar6 = (undefined8 *)0x1137259d0;
                    ___cxa_guard_acquire();
                    if ((int)puVar6 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741c30(6);
                      param_2 = (code *)&UNK_107740c6c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar6 = &PTR_DAT_1109d3ec8;
                      func_0x000107741cd0(&UNK_107740b7c);
                      func_0x000107742924();
                      unaff_x19 = puVar6;
                    }
                  }
                  func_0x0001077419ec();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259d0);
                    func_0x000107742904();
                    puStack_a78 = &DAT_10772b25c;
                    uStack_aa0 = unaff_x22;
                    pppuStack_a80 = &pppuStack_9c0;
                    func_0x000107741ca8();
                    if ((bRam00000001137259e0 & 1) == 0) {
                      iVar4 = 0x137259e0;
                      ___cxa_guard_acquire();
                      if (iVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = (code *)&UNK_107740f20;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3f08;
                        func_0x000107741cd0(&UNK_107740e8c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (undefined8 ****)0x1137259d8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137259e0);
                    func_0x00010774297c();
                    puStack_b48 = &DAT_10772b344;
                    uStack_b70 = unaff_x22;
                    pppuStack_b50 = &pppuStack_a80;
                    func_0x000107741ca8();
                    if ((bRam00000001137259f0 & 1) == 0) {
                      iVar4 = 0x137259f0;
                      ___cxa_guard_acquire();
                      if (iVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = (code *)&UNK_107741138;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_FUN_1109d3f48;
                        func_0x000107741cd0(&UNK_1077410a8);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (undefined8 ****)0x1137259e8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    puVar7 = (ulong *)0x1137259f0;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    puStack_c18 = &DAT_10772b42c;
                    uStack_c40 = unaff_x22;
                    pppuStack_c20 = &pppuStack_b50;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar8 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar7 = puVar8;
                      if ((int)puVar8 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar7 = puVar8;
                        func_0x0001077753dc(auStack_cb8);
                        func_0x000107741c80(1);
                        param_2 = (code *)&UNK_1077413dc;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                        func_0x000107741cd0(&UNK_1077412c0);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (undefined8 ****)0x1137259f8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774298c();
                    func_0x000107742914();
                    pppuVar9 = (undefined8 ***)0x113725a00;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    pcStack_cd8 = FUN_10772b510;
                    pppuStack_ce0 = &pppuStack_c20;
                    func_0x0001077429f8();
                    ppuStack_e10 = pppuVar9;
                    func_0x00010774205c();
                    ppuStack_dd8 = (undefined8 ***)0x0;
                    ppuStack_dd0 = (undefined8 ***)0x0;
                    uStack_dc8 = 0;
                    ppuStack_df0 = (undefined8 ***)0x0;
                    ppuStack_de8 = (undefined8 ***)0x0;
                    uStack_de0 = 0;
                    lVar14 = *(long *)param_2;
                    uStack_d40 = extraout_x8;
                    do {
                      if (lVar14 == *(long *)(unaff_x21 + 8)) {
                        pppuVar1 = (undefined8 ***)ppuStack_dd0;
                        pppuVar9 = (undefined8 ***)ppuStack_dd8;
                        if (ppuStack_df0 != ppuStack_de8) {
                          pppuVar1 = (undefined8 ***)ppuStack_de8;
                          pppuVar9 = (undefined8 ***)ppuStack_df0;
                        }
                        uStack_d88 = 0;
                        uStack_d80 = 0;
                        pppuStack_d90 = (undefined8 ****)0x0;
                        if (pppuVar9 != pppuVar1) {
                          func_0x000100602d9c(&pppuStack_d90,&pppuStack_d90,pppuVar9);
                          pppuVar9 = pppuVar9 + 3;
                        }
                        for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                          ppppuVar5 = (undefined8 ****)pppuStack_d90;
                          if (-1 < (long)uStack_d80._7_1_) {
                            ppppuVar5 = &pppuStack_d90;
                          }
                          uVar2 = uStack_d88;
                          if (-1 < (long)uStack_d80) {
                            uVar2 = (long)uStack_d80._7_1_;
                          }
                          pcStack_d78 = " | ";
                          pcStack_d70 = "";
                          func_0x000106887580(&pppuStack_d90,(long)ppppuVar5 + uVar2,&pcStack_d78);
                          uVar2 = uStack_d88;
                          ppppuVar5 = (undefined8 ****)pppuStack_d90;
                          if (-1 < (long)uStack_d80) {
                            uVar2 = uStack_d80 >> 0x38;
                            ppppuVar5 = &pppuStack_d90;
                          }
                          func_0x000100602d9c(&pppuStack_d90,(long)ppppuVar5 + uVar2,pppuVar9);
                        }
                        ppuStack_da8 = (undefined8 ***)0x0;
                        uStack_da0 = 0;
                        uStack_d98 = 0;
                        uVar3 = (*puVar7 & 1) == 0;
                        puVar8 = puVar7 + 1;
                        if (!(bool)uVar3) {
                          puVar8 = (ulong *)puVar7[1];
                        }
                        puVar13 = (ulong *)&DAT_10f68f19e;
                        if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (auStack_e08,&UNK_10f424ce9,&pppuStack_d90);
                          func_0x00010048a6c8(auStack_dc0,auStack_e08,&UNK_10f424d05);
                          func_0x000100610910(&pcStack_d78,auStack_dc0,&ppuStack_da8);
                          ppcVar11 = (char **)&UNK_10f417e7a;
                          func_0x00010048a6c8(ppuStack_e10,&pcStack_d78);
                          func_0x0001077435f4();
                          func_0x0001077433f8();
                          func_0x000107742c9c();
                          func_0x000107743354();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_df0);
                          ppppuVar5 = (undefined8 ****)&ppuStack_dd8;
                          func_0x0001000e30f4();
                          func_0x000107741c94(uStack_d40);
                          if ((bool)uVar3) {
                            return ppppuVar5;
                          }
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_df0);
                          ppppuVar10 = (undefined8 ****)&ppuStack_dd8;
                          func_0x0001000e30f4(ppppuVar10);
                          puVar15 = &SUB_10772b8e8;
                          func_0x000107742904();
                        }
                        else {
                          uStack_d98 = 0;
                          uStack_da0 = 0;
                          ppuStack_da8 = (undefined8 ***)0x0;
                          ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                          func_0x00010756a788(&pcStack_d78,*puVar8 + 0x10);
                          ppppuVar10 = (undefined8 ****)&ppuStack_da8;
                          ppcVar11 = &pcStack_d78;
                          puVar15 = (undefined *)0x10772b78c;
                          puVar13 = (ulong *)&DAT_10f68f19e;
                        }
code_r0x00010772b8e8:
                        ppcVar12 = ppcVar11;
                        puStack_e30 = puVar13;
                        pppuStack_e28 = ppppuVar5;
                        pppuStack_e20 = &pppuStack_ce0;
                        puStack_e18 = puVar15;
                        func_0x000107264c5c();
                        ppcStack_e40 = ppcVar11;
                        ppcStack_e38 = ppcVar12;
                        func_0x0001073727e0(ppppuVar10,&ppcStack_e40);
                        return ppppuVar10;
                      }
                      (**(code **)(lVar14 + 8))();
                      ppppuVar5 = (undefined8 ****)*pppuVar9;
                      if (*(int *)(ppppuVar5 + 8) == 0) {
                        func_0x00010002b838(&pppuStack_d90,&DAT_10f68e8ec);
                        if (ppppuVar5[5] != ppppuVar5[6]) {
                          func_0x00010756a788(&pcStack_d78,ppppuVar5[5]);
                          ppppuVar10 = &pppuStack_d90;
                          ppcVar11 = &pcStack_d78;
                          puVar15 = (undefined *)0x10772b628;
                          puVar13 = puVar7;
                          goto code_r0x00010772b8e8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_d90,&DAT_10f684600);
                        pppuVar9 = &ppuStack_df0;
                        if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                          pppuVar9 = &ppuStack_dd8;
                        }
                        func_0x000100206870(pppuVar9,&pppuStack_d90);
                      }
                      else {
                        func_0x00010756a788(&pcStack_d78,ppppuVar5 + 5);
                        func_0x00010724ef84(auStack_dc0,&pcStack_d78);
                        func_0x0001004c3cd0(&ppuStack_da8,&DAT_10f68e8ec,auStack_dc0);
                        func_0x00010048a6c8(&pppuStack_d90,&ppuStack_da8,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        pppuVar9 = &ppuStack_df0;
                        func_0x000100206870(pppuVar9,&pppuStack_d90);
                      }
                      func_0x0001077435e4();
                      lVar14 = lVar14 + 0x18;
                    } while( true );
                  }
                  ppppuVar5 = (undefined8 ****)0x1137259c8;
                }
              }
            }
          }
          return ppppuVar5;
        }
        ppppuVar5 = (undefined8 ****)0x113725948;
      }
      return ppppuVar5;
    }
    ppppuVar5 = (undefined8 ****)0x113725928;
  }
  return ppppuVar5;
}



/* Entry: 10772ae54; end: 10772af1b;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772ae54(undefined8 param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  char **ppcVar11;
  char **ppcVar12;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  ulong *puVar13;
  long unaff_x21;
  long lVar14;
  undefined *puVar15;
  char **ppcStack_790;
  char **ppcStack_788;
  ulong *puStack_780;
  undefined8 ***pppuStack_778;
  undefined8 ***pppuStack_770;
  undefined *puStack_768;
  undefined8 **ppuStack_760;
  undefined1 auStack_758 [24];
  undefined8 **ppuStack_740;
  undefined8 **ppuStack_738;
  undefined8 uStack_730;
  undefined8 **ppuStack_728;
  undefined8 **ppuStack_720;
  undefined8 uStack_718;
  undefined1 auStack_710 [24];
  undefined8 **ppuStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 ***pppuStack_6e0;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  undefined8 uStack_690;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined1 auStack_608 [120];
  undefined8 ***pppuStack_570;
  undefined *puStack_568;
  undefined8 ***pppuStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined1 ***pppuStack_250;
  undefined *puStack_248;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined4 uStack_160;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725990 & 1) == 0) {
    iVar4 = 0x13725990;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x0001077425c0();
      func_0x000107741ae8();
      param_2 = (long *)&UNK_10773fda4;
      func_0x000107741ebc();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3dc8;
      func_0x000107741cd0(&UNK_10773fce8);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    ppppuVar6 = (undefined8 ****)0x113725988;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774219c();
    ___cxa_guard_abort(0x113725990);
    func_0x000107742904();
    puStack_c8 = &DAT_10772af1c;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam00000001137259a0 & 1) == 0) {
      puVar5 = (undefined8 *)0x1137259a0;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        uStack_160 = 2;
        func_0x000107741c80(3);
        param_2 = (long *)&UNK_10773ff94;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742cb4();
        func_0x00010774291c();
        *puVar5 = &PTR_DAT_1109d3e08;
        func_0x000107741cd0(&UNK_10773fea8);
        func_0x000107742924();
        unaff_x19 = puVar5;
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      ppppuVar6 = (undefined8 ****)0x113725998;
    }
    else {
      ___stack_chk_fail();
      func_0x00010774219c();
      ___cxa_guard_abort(0x1137259a0);
      func_0x000107742904();
      puStack_188 = &DAT_10772aff0;
      ppuStack_190 = &puStack_d0;
      func_0x000107741ca8();
      if ((bRam00000001137259b0 & 1) == 0) {
        puVar5 = (undefined8 *)0x1137259b0;
        ___cxa_guard_acquire();
        if ((int)puVar5 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107743448(2);
          func_0x000107741c80();
          param_2 = (long *)&UNK_1077406b0;
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742cb4();
          func_0x00010774291c();
          *puVar5 = &PTR_FUN_1109d3e48;
          func_0x000107741cd0(&UNK_1077405e0);
          func_0x000107742924();
          unaff_x19 = puVar5;
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        ppppuVar6 = (undefined8 ****)0x1137259a8;
      }
      else {
        ___stack_chk_fail();
        func_0x00010774219c();
        ___cxa_guard_abort(0x1137259b0);
        func_0x000107742904();
        puStack_248 = &DAT_10772b0c0;
        pppuStack_250 = &ppuStack_190;
        func_0x000107741ca8();
        if ((bRam00000001137259c0 & 1) == 0) {
          puVar5 = (undefined8 *)0x1137259c0;
          ___cxa_guard_acquire();
          if ((int)puVar5 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107743448(2);
            func_0x000107741c80();
            param_2 = (long *)&UNK_107740978;
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742cb4();
            func_0x00010774291c();
            *puVar5 = &PTR_DAT_1109d3e88;
            func_0x000107741cd0(&UNK_1077408b4);
            func_0x000107742924();
            unaff_x19 = puVar5;
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          ppppuVar6 = (undefined8 ****)0x1137259b8;
        }
        else {
          ___stack_chk_fail();
          func_0x00010774219c();
          ___cxa_guard_abort(0x1137259c0);
          func_0x000107742904();
          puStack_308 = &DAT_10772b190;
          pppuStack_310 = &pppuStack_250;
          func_0x000107741ca8();
          if ((bRam00000001137259d0 & 1) == 0) {
            puVar5 = (undefined8 *)0x1137259d0;
            ___cxa_guard_acquire();
            if ((int)puVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107741c30(6);
              param_2 = (long *)&UNK_107740c6c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742cb4();
              func_0x00010774291c();
              *puVar5 = &PTR_DAT_1109d3ec8;
              func_0x000107741cd0(&UNK_107740b7c);
              func_0x000107742924();
              unaff_x19 = puVar5;
            }
          }
          func_0x0001077419ec();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x1137259d0);
            func_0x000107742904();
            puStack_3c8 = &DAT_10772b25c;
            pppuStack_3d0 = &pppuStack_310;
            func_0x000107741ca8();
            if ((bRam00000001137259e0 & 1) == 0) {
              iVar4 = 0x137259e0;
              ___cxa_guard_acquire();
              if (iVar4 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x0001077425c0();
                func_0x0001077438b4();
                func_0x000107741d3c();
                func_0x000107741810();
                param_2 = (long *)&UNK_107740f20;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d3f08;
                func_0x000107741cd0(&UNK_107740e8c);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              ppppuVar6 = (undefined8 ****)0x1137259d8;
            }
            else {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137259e0);
              func_0x00010774297c();
              puStack_498 = &DAT_10772b344;
              pppuStack_4a0 = &pppuStack_3d0;
              func_0x000107741ca8();
              if ((bRam00000001137259f0 & 1) == 0) {
                iVar4 = 0x137259f0;
                ___cxa_guard_acquire();
                if (iVar4 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x0001077425c0();
                  func_0x0001077438b4();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (long *)&UNK_107741138;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_FUN_1109d3f48;
                  func_0x000107741cd0(&UNK_1077410a8);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107742144();
                func_0x00010774291c();
                func_0x00010774298c();
                func_0x000107742914();
                puVar7 = (ulong *)0x1137259f0;
                ___cxa_guard_abort();
                func_0x00010774297c();
                puStack_568 = &DAT_10772b42c;
                pppuStack_570 = &pppuStack_4a0;
                func_0x000107741ca8();
                if ((bRam0000000113725a00 & 1) == 0) {
                  puVar8 = (ulong *)0x113725a00;
                  ___cxa_guard_acquire();
                  puVar7 = puVar8;
                  if ((int)puVar8 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    puVar7 = puVar8;
                    func_0x0001077753dc(auStack_608);
                    func_0x000107741c80(1);
                    param_2 = (long *)&UNK_1077413dc;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                    func_0x000107741cd0(&UNK_1077412c0);
                    func_0x000107742924();
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  return (undefined8 ****)0x1137259f8;
                }
                ___stack_chk_fail();
                func_0x00010774298c();
                func_0x000107742914();
                pppuVar9 = (undefined8 ***)0x113725a00;
                ___cxa_guard_abort();
                func_0x00010774297c();
                pcStack_628 = FUN_10772b510;
                pppuStack_630 = &pppuStack_570;
                func_0x0001077429f8();
                ppuStack_760 = pppuVar9;
                func_0x00010774205c();
                ppuStack_728 = (undefined8 ***)0x0;
                ppuStack_720 = (undefined8 ***)0x0;
                uStack_718 = 0;
                ppuStack_740 = (undefined8 ***)0x0;
                ppuStack_738 = (undefined8 ***)0x0;
                uStack_730 = 0;
                lVar14 = *param_2;
                uStack_690 = extraout_x8;
                do {
                  if (lVar14 == *(long *)(unaff_x21 + 8)) {
                    pppuVar1 = (undefined8 ***)ppuStack_720;
                    pppuVar9 = (undefined8 ***)ppuStack_728;
                    if (ppuStack_740 != ppuStack_738) {
                      pppuVar1 = (undefined8 ***)ppuStack_738;
                      pppuVar9 = (undefined8 ***)ppuStack_740;
                    }
                    uStack_6d8 = 0;
                    uStack_6d0 = 0;
                    pppuStack_6e0 = (undefined8 ****)0x0;
                    if (pppuVar9 != pppuVar1) {
                      func_0x000100602d9c(&pppuStack_6e0,&pppuStack_6e0,pppuVar9);
                      pppuVar9 = pppuVar9 + 3;
                    }
                    for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                      ppppuVar6 = (undefined8 ****)pppuStack_6e0;
                      if (-1 < (long)uStack_6d0._7_1_) {
                        ppppuVar6 = &pppuStack_6e0;
                      }
                      uVar2 = uStack_6d8;
                      if (-1 < (long)uStack_6d0) {
                        uVar2 = (long)uStack_6d0._7_1_;
                      }
                      pcStack_6c8 = " | ";
                      pcStack_6c0 = "";
                      func_0x000106887580(&pppuStack_6e0,(long)ppppuVar6 + uVar2,&pcStack_6c8);
                      uVar2 = uStack_6d8;
                      ppppuVar6 = (undefined8 ****)pppuStack_6e0;
                      if (-1 < (long)uStack_6d0) {
                        uVar2 = uStack_6d0 >> 0x38;
                        ppppuVar6 = &pppuStack_6e0;
                      }
                      func_0x000100602d9c(&pppuStack_6e0,(long)ppppuVar6 + uVar2,pppuVar9);
                    }
                    ppuStack_6f8 = (undefined8 ***)0x0;
                    uStack_6f0 = 0;
                    uStack_6e8 = 0;
                    uVar3 = (*puVar7 & 1) == 0;
                    puVar8 = puVar7 + 1;
                    if (!(bool)uVar3) {
                      puVar8 = (ulong *)puVar7[1];
                    }
                    puVar13 = (ulong *)&DAT_10f68f19e;
                    if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_758,&UNK_10f424ce9,&pppuStack_6e0);
                      func_0x00010048a6c8(auStack_710,auStack_758,&UNK_10f424d05);
                      func_0x000100610910(&pcStack_6c8,auStack_710,&ppuStack_6f8);
                      ppcVar11 = (char **)&UNK_10f417e7a;
                      func_0x00010048a6c8(ppuStack_760,&pcStack_6c8);
                      func_0x0001077435f4();
                      func_0x0001077433f8();
                      func_0x000107742c9c();
                      func_0x000107743354();
                      func_0x0001077435e4();
                      func_0x0001000e30f4(&ppuStack_740);
                      ppppuVar6 = (undefined8 ****)&ppuStack_728;
                      func_0x0001000e30f4();
                      func_0x000107741c94(uStack_690);
                      if ((bool)uVar3) {
                        return ppppuVar6;
                      }
                      ___stack_chk_fail();
                      func_0x0001077435e4();
                      func_0x0001000e30f4(&ppuStack_740);
                      ppppuVar10 = (undefined8 ****)&ppuStack_728;
                      func_0x0001000e30f4(ppppuVar10);
                      puVar15 = &SUB_10772b8e8;
                      func_0x000107742904();
                    }
                    else {
                      uStack_6e8 = 0;
                      uStack_6f0 = 0;
                      ppuStack_6f8 = (undefined8 ***)0x0;
                      ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                      func_0x00010756a788(&pcStack_6c8,*puVar8 + 0x10);
                      ppppuVar10 = (undefined8 ****)&ppuStack_6f8;
                      ppcVar11 = &pcStack_6c8;
                      puVar15 = (undefined *)0x10772b78c;
                      puVar13 = (ulong *)&DAT_10f68f19e;
                    }
code_r0x00010772b8e8:
                    ppcVar12 = ppcVar11;
                    puStack_780 = puVar13;
                    pppuStack_778 = ppppuVar6;
                    pppuStack_770 = &pppuStack_630;
                    puStack_768 = puVar15;
                    func_0x000107264c5c();
                    ppcStack_790 = ppcVar11;
                    ppcStack_788 = ppcVar12;
                    func_0x0001073727e0(ppppuVar10,&ppcStack_790);
                    return ppppuVar10;
                  }
                  (**(code **)(lVar14 + 8))();
                  ppppuVar6 = (undefined8 ****)*pppuVar9;
                  if (*(int *)(ppppuVar6 + 8) == 0) {
                    func_0x00010002b838(&pppuStack_6e0,&DAT_10f68e8ec);
                    if (ppppuVar6[5] != ppppuVar6[6]) {
                      func_0x00010756a788(&pcStack_6c8,ppppuVar6[5]);
                      ppppuVar10 = &pppuStack_6e0;
                      ppcVar11 = &pcStack_6c8;
                      puVar15 = (undefined *)0x10772b628;
                      puVar13 = puVar7;
                      goto code_r0x00010772b8e8;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                              (&pppuStack_6e0,&DAT_10f684600);
                    pppuVar9 = &ppuStack_740;
                    if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                      pppuVar9 = &ppuStack_728;
                    }
                    func_0x000100206870(pppuVar9,&pppuStack_6e0);
                  }
                  else {
                    func_0x00010756a788(&pcStack_6c8,ppppuVar6 + 5);
                    func_0x00010724ef84(auStack_710,&pcStack_6c8);
                    func_0x0001004c3cd0(&ppuStack_6f8,&DAT_10f68e8ec,auStack_710);
                    func_0x00010048a6c8(&pppuStack_6e0,&ppuStack_6f8,&DAT_10f684600);
                    func_0x000107743354();
                    func_0x0001077433f8();
                    func_0x00010774335c();
                    pppuVar9 = &ppuStack_740;
                    func_0x000100206870(pppuVar9,&pppuStack_6e0);
                  }
                  func_0x0001077435e4();
                  lVar14 = lVar14 + 0x18;
                } while( true );
              }
              ppppuVar6 = (undefined8 ****)0x1137259e8;
            }
            return ppppuVar6;
          }
          ppppuVar6 = (undefined8 ****)0x1137259c8;
        }
      }
    }
  }
  return ppppuVar6;
}



/* Entry: 10772b510; end: 10772b8e7;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

void FUN_10772b510(undefined8 ***param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined8 ****ppppuVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined8 ***pppuVar8;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined *puVar10;
  char **ppcStack_170;
  char **ppcStack_168;
  ulong *puStack_160;
  undefined8 **ppuStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  undefined1 auStack_138 [24];
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  undefined8 uStack_70;
  
  func_0x0001077429f8();
  ppuStack_140 = param_1;
  func_0x00010774205c();
  ppuStack_108 = (undefined8 ***)0x0;
  ppuStack_100 = (undefined8 ***)0x0;
  uStack_f8 = 0;
  ppuStack_120 = (undefined8 ***)0x0;
  ppuStack_118 = (undefined8 ***)0x0;
  uStack_110 = 0;
  lVar9 = *param_2;
  uStack_70 = extraout_x8;
  do {
    if (lVar9 == *(long *)(unaff_x21 + 8)) {
      pppuVar1 = (undefined8 ***)ppuStack_100;
      pppuVar8 = (undefined8 ***)ppuStack_108;
      if (ppuStack_120 != ppuStack_118) {
        pppuVar1 = (undefined8 ***)ppuStack_118;
        pppuVar8 = (undefined8 ***)ppuStack_120;
      }
      uStack_b8 = 0;
      uStack_b0 = 0;
      pppuStack_c0 = (undefined8 ****)0x0;
      if (pppuVar8 != pppuVar1) {
        func_0x000100602d9c(&pppuStack_c0,&pppuStack_c0,pppuVar8);
        pppuVar8 = pppuVar8 + 3;
      }
      for (; pppuVar8 != pppuVar1; pppuVar8 = pppuVar8 + 3) {
        ppppuVar4 = (undefined8 ****)pppuStack_c0;
        if (-1 < (long)uStack_b0._7_1_) {
          ppppuVar4 = &pppuStack_c0;
        }
        uVar7 = uStack_b8;
        if (-1 < (long)uStack_b0) {
          uVar7 = (long)uStack_b0._7_1_;
        }
        pcStack_a8 = " | ";
        pcStack_a0 = "";
        func_0x000106887580(&pppuStack_c0,(long)ppppuVar4 + uVar7,&pcStack_a8);
        uVar7 = uStack_b8;
        ppppuVar4 = (undefined8 ****)pppuStack_c0;
        if (-1 < (long)uStack_b0) {
          uVar7 = uStack_b0 >> 0x38;
          ppppuVar4 = &pppuStack_c0;
        }
        func_0x000100602d9c(&pppuStack_c0,(long)ppppuVar4 + uVar7,pppuVar8);
      }
      ppuStack_d8 = (undefined8 ***)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uVar7 = *unaff_x20;
      uVar3 = (uVar7 & 1) == 0;
      puVar2 = unaff_x20 + 1;
      if (!(bool)uVar3) {
        puVar2 = (ulong *)unaff_x20[1];
      }
      unaff_x20 = (ulong *)&DAT_10f68f19e;
      if ((uVar7 & 0x1ffffffffffffffe) == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_138,&UNK_10f424ce9,&pppuStack_c0);
        func_0x00010048a6c8(auStack_f0,auStack_138,&UNK_10f424d05);
        func_0x000100610910(&pcStack_a8,auStack_f0,&ppuStack_d8);
        ppcVar5 = (char **)&UNK_10f417e7a;
        func_0x00010048a6c8(ppuStack_140,&pcStack_a8);
        func_0x0001077435f4();
        func_0x0001077433f8();
        func_0x000107742c9c();
        func_0x000107743354();
        func_0x0001077435e4();
        func_0x0001000e30f4(&ppuStack_120);
        pppuVar8 = &ppuStack_108;
        func_0x0001000e30f4();
        func_0x000107741c94(uStack_70);
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
        func_0x0001077435e4();
        func_0x0001000e30f4(&ppuStack_120);
        ppppuVar4 = (undefined8 ****)&ppuStack_108;
        func_0x0001000e30f4(ppppuVar4);
        puVar10 = &SUB_10772b8e8;
        func_0x000107742904();
      }
      else {
        uStack_c8 = 0;
        uStack_d0 = 0;
        ppuStack_d8 = (undefined8 ***)0x0;
        pppuVar8 = (undefined8 ***)(puVar2 + 2);
        func_0x00010756a788(&pcStack_a8,*puVar2 + 0x10);
        ppppuVar4 = (undefined8 ****)&ppuStack_d8;
        ppcVar5 = &pcStack_a8;
        puVar10 = (undefined *)0x10772b78c;
      }
code_r0x00010772b8e8:
      ppcVar6 = ppcVar5;
      puStack_160 = unaff_x20;
      ppuStack_158 = pppuVar8;
      puStack_150 = &stack0xfffffffffffffff0;
      puStack_148 = puVar10;
      func_0x000107264c5c();
      ppcStack_170 = ppcVar5;
      ppcStack_168 = ppcVar6;
      func_0x0001073727e0(ppppuVar4,&ppcStack_170);
      return;
    }
    (**(code **)(lVar9 + 8))();
    pppuVar8 = (undefined8 ***)*param_1;
    if (*(int *)(pppuVar8 + 8) == 0) {
      func_0x00010002b838(&pppuStack_c0,&DAT_10f68e8ec);
      if (pppuVar8[5] != pppuVar8[6]) {
        func_0x00010756a788(&pcStack_a8,pppuVar8[5]);
        ppppuVar4 = &pppuStack_c0;
        ppcVar5 = &pcStack_a8;
        puVar10 = (undefined *)0x10772b628;
        goto code_r0x00010772b8e8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&pppuStack_c0,&DAT_10f684600);
      param_1 = &ppuStack_120;
      if ((long)pppuVar8[6] - (long)pppuVar8[5] >> 4 != *unaff_x20 >> 1) {
        param_1 = &ppuStack_108;
      }
      func_0x000100206870(param_1,&pppuStack_c0);
    }
    else {
      func_0x00010756a788(&pcStack_a8,pppuVar8 + 5);
      func_0x00010724ef84(auStack_f0,&pcStack_a8);
      func_0x0001004c3cd0(&ppuStack_d8,&DAT_10f68e8ec,auStack_f0);
      func_0x00010048a6c8(&pppuStack_c0,&ppuStack_d8,&DAT_10f684600);
      func_0x000107743354();
      func_0x0001077433f8();
      func_0x00010774335c();
      param_1 = &ppuStack_120;
      func_0x000100206870(param_1,&pppuStack_c0);
    }
    func_0x0001077435e4();
    lVar9 = lVar9 + 0x18;
  } while( true );
}



/* Entry: 10772cef0; end: 10772cf1b;  */

undefined8 * FUN_10772cef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d1078;
  func_0x0001072c9c34(param_1 + 0xb);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772d24c; end: 10772d25f;  */

void FUN_10772d24c(void)

{
  func_0x00010772cec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772d3f4; end: 10772d407;  */

void FUN_10772d3f4(void)

{
  func_0x00010772d418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772d580; end: 10772d627;  */

undefined8 *
FUN_10772d580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_DAT_1109d1d80;
  param_1[1] = param_2;
  func_0x0001072ca12c(param_1 + 2,param_3);
  puVar2 = param_1 + 5;
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_10772d754(puVar2);
  uVar1 = *(uint *)(param_4 + 0x20);
  if (uVar1 != 0xffffffff) {
    puStack_48 = puVar2;
    (*(code *)(&PTR_DAT_1109d1da8)[uVar1])(&puStack_48,param_4 + 8);
    *(uint *)(param_1 + 8) = uVar1;
  }
  func_0x000104c2fe00(param_1 + 9,param_5);
  return param_1;
}



/* Entry: 10772d754; end: 10772d797;  */

void FUN_10772d754(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x000107742644((&PTR_DAT_1109d1d98)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10772d910; end: 10772d923;  */

void FUN_10772d910(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772da74; end: 10772db3b;  */

void FUN_10772da74(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x000107743300();
  puVar1 = PTR___tlv_bootstrap_11340d570;
  ppuVar3 = &PTR___tlv_bootstrap_11340d570;
  ppuVar2 = ppuVar3;
  (*(code *)PTR___tlv_bootstrap_11340d570)();
  if (((ulong)*ppuVar2 & 1) == 0) {
    func_0x000107743958();
    func_0x000100078a88();
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar3 = 1;
  }
  if (*(int *)(unaff_x21 + 0x68) == 0) {
    puVar4 = (undefined8 *)0x0;
    _time(0);
  }
  else {
    uStack_48 = 0;
    puVar4 = &uStack_48;
    func_0x00010772db3c(puVar4);
  }
  func_0x000107743958();
  func_0x000100078a88();
  func_0x000100078b40(puVar4);
  func_0x00010774250c((double)((ulong)puVar4 & 0xffffffff) / 4294967295.0);
  return;
}



/* Entry: 10772de34; end: 10772de77;  */

long FUN_10772de34(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      func_0x000107743940();
    }
  }
  return param_1;
}



/* Entry: 10772e118; end: 10772e1c7;  */

void FUN_10772e118(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong *unaff_x20;
  long lVar4;
  undefined8 uStack_70;
  
  uVar2 = *(ulong *)(param_1 + 0x10) == param_2;
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    func_0x000107743614();
    func_0x00010772e1c8();
    uVar1 = *unaff_x20;
    lVar4 = uVar1 + unaff_x20[1] * 0x70;
    uVar3 = param_2;
    func_0x0001077430fc();
    func_0x00010772e2ec();
    func_0x00010772e2ec(lVar4,lVar4,uVar3);
    func_0x000107743a44();
    uStack_70 = 0;
    if (uVar1 != 0) {
      func_0x00010772e2b8(uVar1,unaff_x20[1]);
      func_0x000107743840();
      if (!(bool)uVar2) {
        __ZdlPv();
      }
    }
    *unaff_x20 = param_2;
    unaff_x20[2] = unaff_x19;
    func_0x00010772e374(&uStack_70);
  }
  return;
}



/* Entry: 10772e2a4; end: 10772e2b7;  */

void FUN_10772e2a4(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772e618; end: 10772e6f3;  */

undefined8 * FUN_10772e618(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  int unaff_w20;
  undefined8 auStack_b8 [17];
  
  func_0x000107741910();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
  func_0x000107741e48();
  func_0x000107743728();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x00010774371c();
    func_0x00010772e5a8();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      puVar2 = auStack_b8;
      func_0x00010772d6b8();
      func_0x000107741f18();
    }
    else {
      puVar2 = auStack_b8;
      func_0x00010772d6a0();
      func_0x0001077428fc();
    }
    func_0x000107742974(auStack_b8);
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772d714();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  FUN_10772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10772e8c8; end: 10772e987;  */

undefined8 * FUN_10772e8c8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w20;
  
  func_0x0001077418ec();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741dcc();
  func_0x000107742de8();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x00010774386c();
    func_0x00010772e844();
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x0001077435a4();
      func_0x000107743044();
    }
    else {
      func_0x00010774359c();
      func_0x0001077428fc();
    }
    func_0x000107742794();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077420f0();
  func_0x00010772ead4();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772eb14; end: 10772eb3b;  */

void FUN_10772eb14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010785e024();
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  func_0x000107742a28();
  return;
}



/* Entry: 10772edb8; end: 10772edc3;  */

void FUN_10772edb8(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10772f094; end: 10772f1a3;  */

undefined8 * FUN_10772f094(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined8 uVar2;
  undefined8 auStack_88 [17];
  
  func_0x0001077431e0();
  func_0x0001077418c8();
  func_0x00010774249c();
  func_0x000107742e70();
  do {
    uVar1 = unaff_x23 == 3;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      uVar2 = *param_1;
      func_0x000107742e2c();
      func_0x0001077436bc();
      func_0x000107743384();
      func_0x000107774c38(auStack_88,uVar2);
      func_0x000107743b44();
      if ((bool)uVar1) {
        param_1 = auStack_88;
        func_0x00010772f000();
        func_0x00010774375c();
      }
      else {
        param_1 = auStack_88;
        func_0x000107572644();
        func_0x0001077428fc();
      }
      func_0x000107742fb4();
      goto LAB_10772f164;
    }
    func_0x0001077422ac();
    param_1 = (undefined8 *)*param_1;
    func_0x000107742138(auStack_88);
    func_0x00010774343c();
    if ((bool)uVar1) {
      func_0x000107742f9c();
      func_0x000107742190();
    }
    else {
      func_0x000107742f94();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_10772f164:
  func_0x000107743058();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742fb4();
  func_0x000107743058();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772f370; end: 10772f3db;  */

undefined8 * FUN_10772f370(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_70 [10];
  
  puVar1 = auStack_70;
  func_0x000107741b64();
  func_0x00010772f300(*param_1,auStack_70,*(undefined1 *)(param_1 + 1));
  func_0x000107743214();
  if ((bool)in_ZR) {
    func_0x000107742e98();
    func_0x000107741f18();
  }
  else {
    func_0x00010774313c();
    func_0x0001077428fc();
  }
  func_0x000107742374();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107742118();
  func_0x000107742904();
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  FUN_10772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 10772f578; end: 10772f58b;  */

void FUN_10772f578(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772f788; end: 10772f793;  */

void FUN_10772f788(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 uStack_99;
  undefined1 auStack_98 [120];
  
  func_0x000107741be8(param_1);
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    func_0x0001077765a4(auStack_98,param_2 + 8,&uStack_99);
    func_0x00010774257c();
    func_0x000107742bf8();
    while (func_0x000107741a50(), !(bool)in_ZR) {
      ___stack_chk_fail();
code_r0x00010772f814:
      iVar1 = 0x13725a18;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000100060964(0x113725b70,&UNK_10f424f21);
        ___cxa_guard_release(0x113725a18);
      }
code_r0x00010772f7e0:
      func_0x000104c2fe00(auStack_98,0x113725b70);
      func_0x00010756c0ec();
      func_0x000107743a50();
    }
    return;
  }
  if ((bRam0000000113725a18 & 1) == 0) goto code_r0x00010772f814;
  goto code_r0x00010772f7e0;
}



/* Entry: 10772fa50; end: 10772fb1f;  */

undefined8 * FUN_10772fa50(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107742324();
  func_0x000107743228();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = param_2 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x000107742a54();
    func_0x00010772f958();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar1) {
      func_0x000107742a0c();
      func_0x000107742a04();
    }
    else {
      func_0x000107742a14();
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772fd34; end: 10772fe27;  */

long * FUN_10772fd34(long *param_1)

{
  undefined1 uVar1;
  long extraout_x8;
  long *unaff_x19;
  code *pcVar2;
  long unaff_x22;
  long unaff_x24;
  long alStack_c0 [7];
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  func_0x000107741834();
  func_0x000107742484();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      pcVar2 = *(code **)(unaff_x22 + 0x80);
      func_0x000107742538();
      func_0x0001074d2730();
      param_1 = alStack_c0;
      (*pcVar2)(auStack_88);
      func_0x000107742c54();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107742ce0();
        func_0x000107742548();
      }
      else {
        func_0x000107742d60();
        func_0x0001077428fc();
      }
      func_0x000107742220();
      goto LAB_10772fde4;
    }
    func_0x0001077422b8();
    param_1 = (long *)*param_1;
    func_0x000107741f6c();
    func_0x000107742d80();
    if ((bool)uVar1) {
      func_0x0001077429f0();
      func_0x000107742184();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_10772fde4:
  func_0x000107742c4c();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x000107742c4c();
  func_0x000107742904();
  if ((int)param_1[8] != 0) {
    func_0x00010563ab98();
    uVar1 = (int)param_1[8] == 1;
    if (!(bool)uVar1) {
      func_0x00010563ab98();
      func_0x000107741be8();
      func_0x000107742f04(1);
      func_0x000107742bf8();
      func_0x000107741a50();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000107742a64();
        if (!(bool)uVar1) {
          func_0x000107742644((&PTR_DAT_1109d21d8)[extraout_x8]);
        }
        func_0x00010774352c();
        return param_1;
      }
      return unaff_x19;
    }
  }
  return param_1 + 1;
}



/* Entry: 1077301bc; end: 10773021b;  */

long * FUN_1077301bc(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 extraout_w8;
  long lVar2;
  long *unaff_x19;
  
  if ((int)param_2[0xf] != 0) {
    func_0x000107730690();
    param_1 = param_1 + 8;
    func_0x000107274918(param_1,param_2 + 1);
    *(undefined4 *)(param_1 + 0x60) = extraout_w8;
    func_0x00010726cc2c();
    return unaff_x19;
  }
  func_0x000107730678();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar1 = (long *)(param_1 + 8);
    *(undefined1 *)plVar1 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    func_0x000107278710(plVar1,lVar2 + 8);
    return plVar1;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_2;
}



/* Entry: 1077307c4; end: 1077307eb;  */

long FUN_1077307c4(long param_1)

{
  func_0x0001077307ec(param_1 + 8);
  return param_1;
}



/* Entry: 1077308d0; end: 1077309b3;  */

void FUN_1077308d0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  func_0x000107742a34();
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_88 = uStack_68;
  uStack_80 = uStack_60;
  for (param_4 = param_4 * 0x70; uStack_68 = uStack_88, uStack_60 = uStack_80, param_4 != 0;
      param_4 = param_4 + -0x70) {
    func_0x000107776500(auStack_50,unaff_x21);
    param_2 = auStack_50;
    func_0x0001000fecf4(&uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    unaff_x21 = unaff_x21 + 0x70;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
  }
  puStack_78 = &DAT_10f68f19e;
  uStack_70 = 2;
  func_0x0001005d466c();
  puStack_40 = &uStack_88;
  puStack_38 = &UNK_1072ac1a8;
  puStack_48 = param_2;
  func_0x0001003a91d4(&UNK_10f424fa7);
  func_0x0001003a9204();
  func_0x0001000e30f4(&uStack_68);
  return;
}



/* Entry: 107730ac8; end: 107730aef;  */

void FUN_107730ac8(undefined8 param_1)

{
  func_0x0001077438a8();
  func_0x0001077434d8(param_1,&PTR_DAT_1109d22f8);
  func_0x0001077430ec();
  return;
}



/* Entry: 107730bf4; end: 107730bff;  */

undefined ** FUN_107730bf4(void)

{
  return &PTR_DAT_1109d2388;
}



/* Entry: 107730fbc; end: 107730fbf;  */

undefined8 * FUN_107730fbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077311bc; end: 10773121f;  */

/* WARNING: Possible PIC construction at 0x0001077312a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077312a4) */
/* WARNING: Removing unreachable block (ram,0x0001077312bc) */
/* WARNING: Removing unreachable block (ram,0x0001077312ac) */
/* WARNING: Removing unreachable block (ram,0x0001077312c8) */
/* WARNING: Removing unreachable block (ram,0x0001077312dc) */
/* WARNING: Removing unreachable block (ram,0x0001077312ec) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x0001077312d4) */

void FUN_1077311bc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong extraout_x8;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 auStack_b0 [144];
  
  func_0x000107741acc();
  func_0x000107741fec();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &UNK_107731220;
  func_0x000107742904();
  puVar1 = auStack_b0;
  uVar2 = extraout_x8;
  while( true ) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0xb0);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined **)(puVar1 + -8) = puVar4;
    func_0x000107742ea0();
    func_0x000107741ca8();
    func_0x0001077432ec();
    if ((uVar2 & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      unaff_x21 = puVar1 + -0xa8;
      func_0x000107743c1c();
      func_0x000107751a40();
      func_0x00010774257c();
      func_0x000107742e4c();
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)(puVar1 + -0xd0) = unaff_x20;
    *(undefined8 *)(puVar1 + -200) = param_1;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_107731284;
    func_0x000107741b64();
    uVar2 = 0;
    puVar4 = &UNK_1077312a4;
    puVar1 = puVar1 + -0x160;
  }
  return;
}



/* Entry: 107731378; end: 10773140b;  */

undefined8 * FUN_107731378(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 auStack_118 [17];
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 auStack_60 [64];
  
  func_0x000107741be8();
  puVar1 = param_2;
  FUN_107751edc();
  uStack_68 = SUB84(puVar1,0);
  uStack_64 = (undefined1)((ulong)puVar1 >> 0x20);
  puStack_70 = param_2;
  if (((ulong)puVar1 >> 0x20 & 1) == 0) {
    func_0x00010774238c();
  }
  else {
    func_0x000107608764(auStack_60,&UNK_10f409262,8,&puStack_70,(ulong)&puStack_70 | 4,&uStack_68);
    param_2 = (undefined8 *)(unaff_x19 + 8);
    func_0x00010756de48(param_2,auStack_60);
    func_0x0001077432d4();
  }
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001077432d4();
  func_0x000107742904();
  func_0x000107741b64();
  puVar1 = auStack_118;
  FUN_107731378();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  FUN_10772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 1077315a4; end: 1077315a7;  */

undefined8 * FUN_1077315a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077316e4; end: 107731747;  */

void FUN_1077316e4(ulong param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  ulong uVar2;
  uint extraout_w8;
  undefined8 uVar3;
  
  func_0x000107741acc();
  func_0x000107741fec();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = param_1;
  func_0x000107742904();
  uVar1 = extraout_w8;
  func_0x000107743424();
  if ((uVar2 >> 0x20 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    *(double *)(param_1 + 0x10) = (double)(uVar1 & 0xff);
    uVar3 = 2;
  }
  func_0x0001077424ac(uVar3);
  return;
}



/* Entry: 107731880; end: 1077318d7;  */

undefined8 * FUN_107731880(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_158 [17];
  
  func_0x000107742ea0();
  func_0x000107741ca8();
  func_0x0001077432ec();
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010774238c();
  }
  else {
    func_0x000107743c1c();
    func_0x000107751cd8();
    func_0x00010774257c();
    func_0x000107742e4c();
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107741b64();
  puVar1 = auStack_158;
  FUN_107731880();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  FUN_10772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 107731b48; end: 107731baf;  */

void FUN_107731b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001077429f8();
    func_0x0001072d2d10();
    func_0x0001077429d4(param_1);
    func_0x000107731bb0();
  }
  uStack_38 = 1;
  func_0x0001072d2e3c(&uStack_40);
  return;
}



/* Entry: 107731f18; end: 107731f2f;  */

void FUN_107731f18(long param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  do {
    *(undefined4 *)(param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x70;
  } while (lVar1 != 0x298);
  return;
}



/* Entry: 1077321bc; end: 1077322cb;  */

/* WARNING: Possible PIC construction at 0x000107732458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773245c) */
/* WARNING: Removing unreachable block (ram,0x000107732474) */
/* WARNING: Removing unreachable block (ram,0x000107732464) */
/* WARNING: Removing unreachable block (ram,0x000107732480) */
/* WARNING: Removing unreachable block (ram,0x000107732494) */
/* WARNING: Removing unreachable block (ram,0x0001077324a4) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x00010773248c) */
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_1077321bc(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  undefined1 *unaff_x19;
  code *unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000070;
  undefined1 auStack_250 [456];
  undefined1 auStack_88 [128];
  undefined8 uStack_8;
  
  func_0x000107742d00();
  puVar5 = &stack0x00000070;
  func_0x000107741834();
  func_0x00010774246c();
  func_0x000107742e64();
  do {
    uVar3 = unaff_x24 == 4;
    if ((bool)uVar3) {
      unaff_x20 = *(code **)(unaff_x22 + 0x80);
      func_0x0001077424d4();
      func_0x000107742ce8();
      func_0x000107743b68();
      func_0x00010774368c();
      func_0x000107743684();
      func_0x000107742864();
      (*unaff_x20)();
      func_0x000107743acc();
      if ((bool)uVar3) {
        func_0x000107742fd4();
        func_0x000107742b70();
      }
      else {
        func_0x000107742fcc();
        func_0x0001077428fc();
      }
      func_0x00010774290c(auStack_88);
      goto LAB_107732284;
    }
    func_0x0001077422b8();
    func_0x0001077422a0(auStack_88);
    func_0x000107743b5c();
    if ((bool)uVar3) {
      func_0x000107742fd4();
      func_0x000107742184();
    }
    else {
      func_0x000107742fcc();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar3);
  uVar3 = 0;
LAB_107732284:
  func_0x00010774306c();
  func_0x000107741c94(uStack_8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742a74();
  func_0x00010727f7f8();
  func_0x00010774306c();
  puVar6 = &UNK_1077322cc;
  func_0x000107742904();
  puVar2 = auStack_250;
  puVar4 = extraout_x8;
  do {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(code **)(puVar2 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar2 + -0x10) = puVar5;
    *(undefined **)(puVar2 + -8) = puVar6;
    func_0x000107742ea0();
    func_0x000107741ca8();
    func_0x0001077432ec();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010774238c();
      unaff_x19 = puVar4;
    }
    else {
      func_0x000107751674(puVar2 + -0xf8,unaff_x20);
      if ((puVar2[-0xb8] & 1) == 0) {
        func_0x00010774238c();
      }
      else {
        iVar1 = *(int *)(puVar2 + -0xf8);
        uVar3 = iVar1 == 2;
        if ((bool)uVar3) {
          func_0x000107743c10();
          func_0x0001077428b0();
code_r0x000107732394:
          func_0x00010774357c();
        }
        else {
          uVar3 = iVar1 == 3;
          if ((bool)uVar3) {
            func_0x000107743c10();
            func_0x0001077428b0();
            goto code_r0x000107732394;
          }
          uVar3 = iVar1 == 4;
          if ((bool)uVar3) {
            *(undefined4 *)(puVar2 + -0x78) = 7;
            func_0x0001077428b0();
            goto code_r0x000107732394;
          }
          uVar3 = iVar1 == 1;
          if ((bool)uVar3) {
            *(undefined4 *)(puVar2 + -0x78) = 3;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf0);
            func_0x0001077428b0();
            goto code_r0x000107732394;
          }
          func_0x000104c2fe00(puVar2 + -0xb0,puVar2 + -0xf0);
          func_0x000104c33004(puVar2 + -0x78,puVar2 + -0xb0);
          func_0x0001077765a4(puVar2 + -0x168);
          func_0x00010774357c();
          func_0x000104c2f714(puVar2 + -0xb0);
        }
        unaff_x20 = (code *)(puVar2 + -0x168);
        func_0x00010774257c();
        func_0x000107742bf8();
      }
      unaff_x19 = puVar2 + -0xf8;
      func_0x00010737c444();
    }
    func_0x0001077419ec();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010774357c();
    func_0x000104c2f714(puVar2 + -0xb0);
    func_0x00010737c444(puVar2 + -0xf8);
    func_0x000107742904();
    *(code **)(puVar2 + -400) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x188) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x178) = &UNK_10773243c;
    puVar5 = (undefined8 *)(puVar2 + -0x180);
    func_0x000107741b64();
    puVar4 = puVar2 + -0x218;
    puVar6 = &UNK_10773245c;
    puVar2 = puVar2 + -0x220;
  } while( true );
}



/* Entry: 107732530; end: 10773262f;  */

undefined8 * FUN_107732530(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined8 *in_stack_00000068;
  
  func_0x000107742d00();
  func_0x000107742ea0();
  Hint_Prefetch(*param_2,0,2,0);
  func_0x0001072cb490(*param_2,param_2,&DAT_10f4249c6);
  lVar7 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar6 = *unaff_x20;
  uVar4 = uVar6 >> 0xc ^ (ulong)param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar10 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar11 = *(undefined8 *)(uVar6 + uVar4);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar5 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar4 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
      param_2 = (undefined8 *)(uVar1 + uVar5 * 0xa8);
      func_0x000107278484(param_2,&DAT_10f4249c6);
      if (((ulong)param_2 & 1) != 0) {
        func_0x0001074d46a8(unaff_x19 + 8,unaff_x20[1] + uVar5 * 0xa8 + 0x38);
        *(undefined4 *)(in_stack_00000068 + 0xe) = 1;
        return in_stack_00000068;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar4 = lVar7 + uVar4;
  }
  func_0x00010774238c();
  return param_2;
}



/* Entry: 10773281c; end: 10773281f;  */

undefined8 * FUN_10773281c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077329b4; end: 107732a17;  */

void FUN_1077329b4(long *param_1)

{
  double *pdVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  double dVar3;
  
  func_0x000107741acc();
  func_0x000107741fec();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742904();
    dVar3 = 0.0;
    pdVar1 = (double *)*param_1;
    for (lVar2 = param_1[1] << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
      dVar3 = dVar3 + *pdVar1;
      pdVar1 = pdVar1 + 1;
    }
    *(double *)(extraout_x8 + 8) = dVar3;
    *(undefined4 *)(extraout_x8 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 107732ce8; end: 107732d03;  */

void FUN_107732ce8(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107732f9c; end: 10773305b;  */

double * FUN_107732f9c(double *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  double dVar2;
  
  func_0x000107742954();
  func_0x0001077418c8();
  func_0x000107742010();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      dVar2 = *param_1;
      func_0x000107742e2c();
      func_0x000107742624(dVar2 + *param_1);
      func_0x000107742e14();
      func_0x0001077420e4();
      func_0x0001077429bc();
      goto LAB_107733024;
    }
    func_0x0001077422ac();
    param_1 = (double *)*param_1;
    func_0x000107742138(&stack0x000000e8);
    func_0x000107743550();
    if ((bool)uVar1) {
      func_0x000107742e24();
      func_0x000107742190();
    }
    else {
      func_0x000107742e1c();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107733024:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733250; end: 107733357;  */

void FUN_107733250(double param_1,double param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long unaff_x24;
  undefined1 auStack_88 [120];
  int iStack_10;
  
  func_0x0001077431e0();
  func_0x000107741834();
  func_0x00010774249c();
  func_0x000107742e64();
  do {
    uVar1 = unaff_x24 == 3;
    if ((bool)uVar1) {
      func_0x0001077424d4();
      func_0x000107742ce8();
      func_0x0001077436bc();
      func_0x000107743384();
      func_0x000107742fa4();
      func_0x000107743b44();
      if ((bool)uVar1) {
        func_0x00010774366c();
        func_0x0001077420e4();
      }
      else {
        func_0x00010772d6a0(auStack_88);
        func_0x0001077428fc();
      }
      func_0x000107742974(auStack_88);
      goto LAB_107733314;
    }
    func_0x0001077422b8();
    func_0x0001077422a0(auStack_88);
    uVar1 = iStack_10 == 1;
    if ((bool)uVar1) {
      func_0x000107742f9c();
      func_0x000107742184();
    }
    else {
      func_0x000107742f94();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107733314:
  func_0x000107743058();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742974(auStack_88);
  func_0x000107743058();
  func_0x000107742904();
  *(double *)(extraout_x8 + 8) = param_1 - param_2;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 1077335c0; end: 1077335c3;  */

undefined8 * FUN_1077335c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733850; end: 10773385b;  */

void FUN_107733850(long param_1,double param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 8) = param_2 * param_3 * param_4;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107733b6c; end: 107733b7f;  */

void FUN_107733b6c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107733ef0; end: 107733feb;  */

double * FUN_107733ef0(double *param_1)

{
  undefined1 uVar1;
  double dVar2;
  long unaff_x23;
  double dVar3;
  
  func_0x000107742954();
  func_0x0001077418c8();
  func_0x000107742010();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      dVar3 = *param_1;
      func_0x000107742e2c();
      uVar1 = *param_1 == 0.0;
      if ((bool)uVar1) {
        if (dVar3 == 0.0) {
          dVar2 = NAN;
        }
        else if (dVar3 <= 0.0) {
          uVar1 = dVar3 == 0.0;
          if (0.0 <= dVar3) goto LAB_107733fa0;
          dVar2 = -INFINITY;
        }
        else {
          dVar2 = INFINITY;
        }
        uVar1 = dVar3 == 0.0;
      }
      else {
LAB_107733fa0:
        dVar2 = dVar3 / *param_1;
      }
      func_0x000107742624(dVar2);
      func_0x000107742e14();
      func_0x0001077420e4();
      func_0x0001077429bc();
      goto LAB_107733fb4;
    }
    func_0x0001077422ac();
    param_1 = (double *)*param_1;
    func_0x000107742138(&stack0x000000e8);
    func_0x000107743550();
    if ((bool)uVar1) {
      func_0x000107742e24();
      func_0x000107742190();
    }
    else {
      func_0x000107742e1c();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107733fb4:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077341d8; end: 1077342af;  */

void FUN_1077341d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long unaff_x24;
  
  func_0x000107742954();
  func_0x000107741834();
  func_0x00010774202c();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      func_0x0001077424d4();
      func_0x000107742ce8();
      func_0x000107742838(param_1,*param_2);
      func_0x000107743538();
      if ((bool)uVar1) {
        func_0x000107742e14();
        func_0x0001077420e4();
      }
      else {
        func_0x0001077432a8();
        func_0x0001077428fc();
      }
      func_0x0001077424bc();
      goto LAB_107734278;
    }
    func_0x0001077422b8();
    param_2 = (undefined8 *)*param_2;
    func_0x0001077422a0(&stack0x000000e8);
    func_0x000107743544();
    if ((bool)uVar1) {
      func_0x000107742e24();
      func_0x000107742184();
    }
    else {
      func_0x000107742e1c();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107734278:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077423f0();
  func_0x0001077429e0();
  func_0x000107742904();
  _pow();
  func_0x00010774250c();
  return;
}



/* Entry: 107734534; end: 107734537;  */

undefined8 * FUN_107734534(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077347ac; end: 1077347cb;  */

void FUN_1077347ac(void)

{
  _log();
  func_0x00010774250c();
  return;
}



/* Entry: 107734a18; end: 107734a2b;  */

void FUN_107734a18(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107734cac; end: 107734d53;  */

undefined8 * FUN_107734cac(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w20;
  
  func_0x0001077418ec();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741dcc();
  func_0x000107742de8();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    _cos(*param_1);
    func_0x000107741ffc();
    func_0x000107742ab0();
    func_0x0001077420e4();
    func_0x0001077429bc();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107734f0c; end: 107734fcb;  */

void FUN_107734f0c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741e20();
  func_0x000107742cc4();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w21 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    func_0x000107742df4(*param_1);
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x000107742ab0();
      func_0x0001077420e4();
    }
    else {
      func_0x000107742d50();
      func_0x0001077428fc();
    }
    func_0x000107742214();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741eec();
  func_0x000107742088();
  func_0x000107742904();
  _asin();
  func_0x00010774250c();
  return;
}



/* Entry: 107735234; end: 107735237;  */

undefined8 * FUN_107735234(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077354ac; end: 1077354d3;  */

void FUN_1077354ac(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x7ff0000000000000;
  puVar1 = (undefined8 *)*param_2;
  for (lVar2 = param_2[1] << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    uVar3 = NEON_fminnm(*puVar1,uVar3);
    puVar1 = puVar1 + 1;
  }
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077357e4; end: 1077357f7;  */

void FUN_1077357e4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107735b44; end: 107735b8f;  */

void FUN_107735b44(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  double dVar4;
  
  pfVar2 = *(float **)*param_2;
  pfVar1 = (float *)((long *)*param_2)[1];
  if (pfVar2 == pfVar1) {
    uVar3 = 0;
  }
  else {
    dVar4 = -INFINITY;
    for (; pfVar2 != pfVar1; pfVar2 = pfVar2 + 1) {
      dVar4 = (double)*pfVar2;
    }
    *(double *)(param_1 + 0x10) = dVar4;
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 107735eb0; end: 107735eb3;  */

undefined8 * FUN_107735eb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773610c; end: 10773611b;  */

void FUN_10773610c(long param_1,double param_2,double param_3)

{
  *(double *)(param_1 + 8) = param_3 * (double)(long)(param_2 / param_3);
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107736388; end: 10773639b;  */

void FUN_107736388(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077365ec; end: 107736693;  */

double * FUN_1077365ec(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  int unaff_w20;
  
  func_0x0001077418ec();
  func_0x000107742168();
  pdVar2 = (double *)*param_1;
  func_0x000107741dcc();
  func_0x000107742de8();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    func_0x000107741ffc(ABS(*pdVar2));
    func_0x000107742ab0();
    func_0x0001077420e4();
    func_0x0001077429bc();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return pdVar2;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x000107742088();
  func_0x000107742904();
  *pdVar2 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(pdVar2 + 9);
  FUN_10772d754(pdVar2 + 5);
  func_0x0001072c9884(pdVar2 + 2);
  return pdVar2;
}



/* Entry: 10773684c; end: 107736913;  */

void FUN_10773684c(ulong *param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 extraout_x8;
  code unaff_w19;
  code *unaff_x20;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  uVar2 = *param_1;
  func_0x000107741e20(uVar2);
  func_0x000107742cc4();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    param_2 = uVar2;
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w21 == 1;
  if ((bool)uVar1) {
    unaff_x20 = *(code **)(unaff_x20 + 0x80);
    pbVar3 = &stack0x00000008;
    func_0x000107280568();
    uVar2 = (ulong)*pbVar3;
    (*unaff_x20)(&stack0x00000078,uVar2);
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x000107742d68();
      func_0x000107742548();
    }
    else {
      func_0x0001077430b8();
      param_2 = uVar2;
      func_0x0001077428fc();
    }
    func_0x000107742344();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  func_0x000107743614(extraout_x8,uVar2,param_2);
  func_0x000107264c5c(param_2);
  func_0x000107278cfc();
  unaff_x20[8] = unaff_w19;
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107736b70; end: 107736bab;  */

void FUN_107736b70(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107742e7c();
  func_0x00010724ef84();
  func_0x000107874628(auStack_38);
  func_0x000107742678();
  func_0x000107742c9c();
  return;
}



/* Entry: 107736eb4; end: 107736eb7;  */

undefined8 * FUN_107736eb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107737110; end: 1077371e7;  */

/* WARNING: Possible PIC construction at 0x000107737414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107737418) */
/* WARNING: Removing unreachable block (ram,0x000107737438) */
/* WARNING: Removing unreachable block (ram,0x000107737428) */
/* WARNING: Removing unreachable block (ram,0x000107737444) */

long * FUN_107737110(long *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000160;
  
  func_0x000107743c34();
  puVar8 = &stack0x00000160;
  func_0x0001077418a4();
  in_stack_00000068 = 0;
  func_0x00010774215c();
  param_1 = (long *)*param_1;
  func_0x000107742138(&stack0x000000a8);
  func_0x000107743228();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar2 = (int)unaff_x21 == 1;
  if ((bool)uVar2) {
    unaff_x20 = *(undefined1 **)(unaff_x20 + 0x80);
    func_0x0001077421a8();
    func_0x000107743018();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar2) {
      func_0x0001077433dc();
      func_0x000107743044();
    }
    else {
      func_0x0001077433d4();
      func_0x0001077428fc();
    }
    func_0x000107742598();
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  puVar9 = &UNK_1077371e8;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar5 = (long *)(puVar1 + -0xa0);
    plVar6 = (long *)(puVar1 + -0xa0);
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    func_0x000107742a34();
    func_0x000107741cf4();
    iVar7 = (int)param_1;
    func_0x000104c2d614();
    if (iVar7 == 0) {
      puVar3 = unaff_x21;
      func_0x000104c2d614();
      if ((int)puVar3 == 0) {
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *(undefined8 *)(puVar1 + -0x90) = 0;
        unaff_x22 = unaff_x20;
        func_0x000104c2d634();
        func_0x0001072dd514(puVar1 + -0xa0);
        func_0x000107264c5c();
        unaff_x23 = (undefined1 *)0x0;
        puVar3 = unaff_x21;
        while( true ) {
          func_0x000107742cf0();
          func_0x0001072784dc();
          uVar2 = puVar3 == (undefined1 *)0xffffffffffffffff;
          if ((bool)uVar2) break;
          puVar4 = unaff_x20;
          func_0x000107526df0(puVar1 + -0x80,unaff_x20,unaff_x23,(long)puVar3 - (long)unaff_x23);
          func_0x000107743a14();
          func_0x0001077432dc();
          unaff_x23 = puVar3 + 1;
          puVar3 = puVar4;
        }
        func_0x000107526df0(puVar1 + -0x80,unaff_x20,unaff_x23,0xffffffffffffffff);
        func_0x000107743a14();
        func_0x0001077432dc();
        func_0x0001073fb2d4(puVar1 + -0x80);
        lVar10 = *(long *)(puVar1 + -0x80);
        unaff_x19[2] = *(long *)(puVar1 + -0x78);
        unaff_x19[1] = lVar10;
        *(undefined8 *)(puVar1 + -0x80) = 0;
        *(undefined8 *)(puVar1 + -0x78) = 0;
        func_0x000107742a28();
        plVar5 = (long *)(puVar1 + -0x80);
        func_0x00010726b09c();
        func_0x000107743708();
        unaff_x24 = 0xffffffffffffffff;
        param_1 = plVar6;
      }
      else {
        func_0x000104c2fe00(puVar1 + -0x80,unaff_x20);
        unaff_x20 = (undefined1 *)0x1;
        param_1 = (long *)(puVar1 + -0x80);
        func_0x000107404228(puVar1 + -0xa0,param_1,1);
        lVar10 = *(long *)(puVar1 + -0xa0);
        unaff_x19[2] = *(long *)(puVar1 + -0x98);
        unaff_x19[1] = lVar10;
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *(undefined4 *)(unaff_x19 + 8) = 1;
        func_0x000107742d20();
        func_0x0001077432dc();
      }
    }
    else {
      func_0x0001072d124c(puVar1 + -0x80);
      lVar10 = *(long *)(puVar1 + -0x80);
      unaff_x19[2] = *(long *)(puVar1 + -0x78);
      unaff_x19[1] = lVar10;
      *(undefined8 *)(puVar1 + -0x80) = 0;
      *(undefined8 *)(puVar1 + -0x78) = 0;
      func_0x000107742a28();
      plVar5 = (long *)(puVar1 + -0x80);
      func_0x00010726b09c();
    }
    func_0x000107741a68();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    plVar6 = plVar5;
    func_0x0001077432dc();
    func_0x000107743708();
    func_0x000107742904();
    puVar9 = &UNK_1077373a0;
    func_0x000107743290();
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = puVar9;
    puVar8 = (undefined8 *)(puVar1 + -0x50);
    func_0x0001077418c8();
    func_0x000107741f34();
    while (uVar2 = unaff_x23 == (undefined1 *)0x2, !(bool)uVar2) {
      func_0x0001077422ac();
      plVar6 = (long *)*plVar6;
      func_0x000107741f94();
      func_0x000107742eac();
      if ((bool)uVar2) {
        func_0x0001077429f0();
        func_0x000107742190();
      }
      else {
        func_0x0001077429e8();
        param_1 = plVar6;
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)uVar2) {
        func_0x0001077429e0();
        func_0x000107741a80();
        if ((bool)uVar2) {
          return plVar6;
        }
        ___stack_chk_fail();
        func_0x000107742128();
        func_0x0001077429e0();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x2a0) = unaff_x20;
        *(long **)(puVar1 + -0x298) = plVar5;
        *(undefined8 **)(puVar1 + -0x290) = puVar8;
        *(undefined **)(puVar1 + -0x288) = &DAT_10773749c;
        *plVar6 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar6 + 9);
        FUN_10772d754(plVar6 + 5);
        func_0x0001072c9884(plVar6 + 2);
        return plVar6;
      }
    }
    unaff_x20 = puVar1 + -0x278;
    func_0x0001077424e0();
    func_0x000107743318();
    func_0x000107743810();
    puVar9 = &UNK_107737418;
    puVar1 = puVar1 + -0x280;
    unaff_x19 = plVar5;
  }
  return plVar5;
}



/* Entry: 1077375e0; end: 107737623;  */

void FUN_1077375e0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107741be8();
  func_0x0001077425b0();
  func_0x000107775530();
  func_0x00010774257c();
  func_0x000107742bf8();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d30d8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 107737910; end: 10773791f;  */

void FUN_107737910(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x21;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107742a34(param_1,param_2);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  func_0x000107743184(*param_3);
  puVar2 = &uStack_48;
  func_0x0001072dd514(puVar2,extraout_x8 / 0x38);
  lVar1 = ((long *)*unaff_x21)[1];
  for (lVar3 = *(long *)*unaff_x21; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    func_0x000107742be0();
    func_0x000107262f24();
    if ((int)puVar2 != 0) {
      puVar2 = &uStack_48;
      func_0x0001072d17f4(puVar2,lVar3);
    }
  }
  func_0x0001073fb2d4(auStack_60,&uStack_48);
  func_0x0001077423a8();
  func_0x00010726e078(&uStack_48);
  return;
}



/* Entry: 107737c2c; end: 107737c73;  */

undefined8 * FUN_107737c2c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long unaff_x23;
  undefined8 *puStack_210;
  undefined1 auStack_190 [112];
  undefined1 auStack_120 [56];
  undefined8 auStack_e8 [25];
  
  func_0x000107741be8();
  func_0x0001077433b0();
  func_0x0001074faaa4();
  func_0x0001077432e4();
  func_0x0001077431c4();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107743290();
  func_0x0001077418c8();
  func_0x000107742d28();
  func_0x000107743820();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x00010774339c();
      func_0x000107737bec();
      func_0x00010772e7e8(auStack_120,auStack_190);
      FUN_107737c2c(auStack_e8,*puStack_210,puStack_210[1],auStack_120);
      func_0x000107742f80();
      func_0x000107742d20();
      func_0x000107742c84();
      if ((bool)uVar1) {
        param_1 = auStack_e8;
        func_0x00010772ea78();
        func_0x000107743044();
      }
      else {
        param_1 = auStack_e8;
        func_0x00010772ea60();
        func_0x0001077428fc();
      }
      func_0x000107742bd0(auStack_e8);
      goto code_r0x000107737d44;
    }
    func_0x0001077422ac();
    param_1 = (undefined8 *)*param_1;
    func_0x000107741f94();
    func_0x000107742eac();
    if ((bool)uVar1) {
      func_0x0001077429f0();
      func_0x000107742190();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
code_r0x000107737d44:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010772ead4();
  func_0x000107742f34();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107738038; end: 10773803b;  */

undefined8 * FUN_107738038(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107738460; end: 107738543;  */

void FUN_107738460(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *puStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x000107742f4c();
  func_0x000107742774();
  func_0x0001077419ac();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107742b78();
      func_0x00010774333c();
      if ((bool)in_ZR) {
        func_0x0001077431bc();
        puVar2 = param_1;
        func_0x000107742b70();
      }
      else {
        func_0x000107742c64();
        puVar2 = param_1;
        func_0x0001077428fc();
      }
      func_0x00010774270c();
      break;
    }
    param_1 = (undefined8 *)*unaff_x24;
    func_0x000107742638(&stack0x00000028);
    func_0x0001077431d4();
    if ((bool)in_ZR) {
      func_0x000107742e90();
      puVar2 = param_1;
      func_0x000107742e88();
    }
    else {
      func_0x000107742c64();
      puVar2 = param_1;
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    func_0x000107742688();
  } while ((bool)in_ZR);
  func_0x000107742aa8();
  func_0x000107741a80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742698();
  func_0x00010727f7f8();
  func_0x000107742aa8();
  func_0x000107742904();
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_88 = &uStack_80;
  puStack_70 = &uStack_68;
  func_0x0001077386b8(&puStack_70,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  func_0x0001077386b8(&puStack_88,*(undefined8 *)*puVar2,((undefined8 *)*puVar2)[1]);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x000107743184(*param_1);
  func_0x0001072dd514(&uStack_a0,
                      (((long *)*puVar2)[1] - *(long *)*puVar2) / 0x38 + extraout_x8 / 0x38);
  puStack_b0 = puStack_70;
  puStack_48 = puStack_88;
  uStack_51 = 0;
  puStack_50 = &uStack_a0;
  while (puStack_48 != &uStack_80) {
    puVar1 = puStack_b0;
    func_0x0001077387b8(puStack_b0,&uStack_68,puStack_48 + 4);
    func_0x0001077434a0(puVar1 == puStack_b0);
    puVar2 = puStack_48;
    if (puVar1 == &uStack_68) break;
    func_0x0001077387b8(puStack_48,&uStack_80,puVar1 + 4);
    func_0x0001077434a0(puStack_48 == puVar2);
    puStack_b0 = puVar1;
  }
  func_0x00010774339c();
  func_0x0001073fb2d4();
  func_0x0001077423a8();
  func_0x00010726e078(&uStack_a0);
  func_0x0001077436e8();
  func_0x0001077437c0();
  return;
}



/* Entry: 107738980; end: 107738a83;  */

undefined8 * FUN_107738980(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x000107742fc0();
      func_0x0001077436e0(&stack0x00000008);
      param_1 = (undefined8 *)&stack0x00000108;
      func_0x000107738554(param_1,&stack0x00000018,&stack0x00000008);
      func_0x000107743244();
      func_0x000107743234();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107743120();
        func_0x000107742ff4();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107738a30;
    }
    func_0x0001077422ac();
    param_1 = (undefined8 *)*param_1;
    func_0x000107741f94();
    func_0x000107742eac();
    if ((bool)uVar1) {
      func_0x0001077429f0();
      func_0x000107742190();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107738a30:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742c44();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107738e1c; end: 107738e2f;  */

void FUN_107738e1c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


