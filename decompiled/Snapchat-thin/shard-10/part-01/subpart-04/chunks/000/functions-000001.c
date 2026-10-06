/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1076c3390; end: 1076c480f;  */

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

void FUN_1076c3390(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4748 & 1) == 0) {
    param_1 = 0x1136d4748;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113713958);
      param_1 = 0x1136d4748;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4750 & 1) == 0) {
    param_1 = 0x1136d4750;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113713990);
      param_1 = 0x1136d4750;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4758 & 1) == 0) {
    param_1 = 0x1136d4758;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x1137139c8);
      param_1 = 0x1136d4758;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4760 & 1) == 0) {
    param_1 = 0x1136d4760;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113713a00);
      param_1 = 0x1136d4760;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4768 & 1) == 0) {
    param_1 = 0x1136d4768;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x113713a38);
      param_1 = 0x1136d4768;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4770 & 1) == 0) {
    param_1 = 0x1136d4770;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x113713a70);
      param_1 = 0x1136d4770;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4778 & 1) == 0) {
    param_1 = 0x1136d4778;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113713aa8);
      param_1 = 0x1136d4778;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4780 & 1) == 0) {
    param_1 = 0x1136d4780;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113713ae0);
      param_1 = 0x1136d4780;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4788 & 1) == 0) {
    param_1 = 0x1136d4788;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x113713b18);
      param_1 = 0x1136d4788;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4790 & 1) == 0) {
    param_1 = 0x1136d4790;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d200(0x113713b50);
      param_1 = 0x1136d4790;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4798 & 1) == 0) {
    param_1 = 0x1136d4798;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113713b88);
      param_1 = 0x1136d4798;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47a0 & 1) == 0) {
    param_1 = 0x1136d47a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113713bc0);
      param_1 = 0x1136d47a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47a8 & 1) == 0) {
    param_1 = 0x1136d47a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x113713bf8);
      param_1 = 0x1136d47a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47b0 & 1) == 0) {
    param_1 = 0x1136d47b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x113713c30);
      param_1 = 0x1136d47b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47b8 & 1) == 0) {
    param_1 = 0x1136d47b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x113713c68);
      param_1 = 0x1136d47b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47c0 & 1) == 0) {
    param_1 = 0x1136d47c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113713ca0);
      param_1 = 0x1136d47c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47c8 & 1) == 0) {
    param_1 = 0x1136d47c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113713cd8);
      param_1 = 0x1136d47c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47d0 & 1) == 0) {
    param_1 = 0x1136d47d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x113713d10);
      param_1 = 0x1136d47d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47d8 & 1) == 0) {
    param_1 = 0x1136d47d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c128(0x113713d48);
      param_1 = 0x1136d47d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47e0 & 1) == 0) {
    param_1 = 0x1136d47e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113713d80);
      param_1 = 0x1136d47e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47e8 & 1) == 0) {
    param_1 = 0x1136d47e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113713db8);
      param_1 = 0x1136d47e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47f0 & 1) == 0) {
    param_1 = 0x1136d47f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x113713df0);
      param_1 = 0x1136d47f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47f8 & 1) == 0) {
    param_1 = 0x1136d47f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c108(0x113713e28);
      param_1 = 0x1136d47f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4800 & 1) == 0) {
    param_1 = 0x1136d4800;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113713e60);
      param_1 = 0x1136d4800;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4808 & 1) == 0) {
    param_1 = 0x1136d4808;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113713e98);
      param_1 = 0x1136d4808;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4810 & 1) == 0) {
    param_1 = 0x1136d4810;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770abb8(0x113713ed0);
      param_1 = 0x1136d4810;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4818 & 1) == 0) {
    param_1 = 0x1136d4818;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113713f08);
      param_1 = 0x1136d4818;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4820 & 1) == 0) {
    param_1 = 0x1136d4820;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113713f40);
      param_1 = 0x1136d4820;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4828 & 1) == 0) {
    param_1 = 0x1136d4828;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113713f78);
      param_1 = 0x1136d4828;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4830 & 1) == 0) {
    param_1 = 0x1136d4830;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113713fb0);
      param_1 = 0x1136d4830;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4838 & 1) == 0) {
    param_1 = 0x1136d4838;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113713fe8);
      param_1 = 0x1136d4838;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4840 & 1) == 0) {
    param_1 = 0x1136d4840;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0f8(0x113714020);
      param_1 = 0x1136d4840;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4848 & 1) == 0) {
    param_1 = 0x1136d4848;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770bab4(0x113714058);
      param_1 = 0x1136d4848;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4850 & 1) == 0) {
    param_1 = 0x1136d4850;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113714090);
      param_1 = 0x1136d4850;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4858 & 1) == 0) {
    param_1 = 0x1136d4858;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x1137140c8);
      param_1 = 0x1136d4858;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4860 & 1) == 0) {
    param_1 = 0x1136d4860;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113714100);
      param_1 = 0x1136d4860;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4868 & 1) == 0) {
    param_1 = 0x1136d4868;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113714138);
      param_1 = 0x1136d4868;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4870 & 1) == 0) {
    param_1 = 0x1136d4870;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113714170);
      param_1 = 0x1136d4870;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4878 & 1) == 0) {
    param_1 = 0x1136d4878;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x1137141a8);
      param_1 = 0x1136d4878;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4880 & 1) == 0) {
    param_1 = 0x1136d4880;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0c0(0x1137141e0);
      param_1 = 0x1136d4880;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4888 & 1) == 0) {
    param_1 = 0x1136d4888;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113714218);
      param_1 = 0x1136d4888;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4890 & 1) == 0) {
    param_1 = 0x1136d4890;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113714250);
      param_1 = 0x1136d4890;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4898 & 1) == 0) {
    param_1 = 0x1136d4898;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113714288);
      param_1 = 0x1136d4898;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48a0 & 1) == 0) {
    param_1 = 0x1136d48a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x1137142c0);
      param_1 = 0x1136d48a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48a8 & 1) == 0) {
    param_1 = 0x1136d48a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x1137142f8);
      param_1 = 0x1136d48a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48b0 & 1) == 0) {
    param_1 = 0x1136d48b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113714330);
      param_1 = 0x1136d48b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48b8 & 1) == 0) {
    param_1 = 0x1136d48b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113714368);
      param_1 = 0x1136d48b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48c0 & 1) == 0) {
    param_1 = 0x1136d48c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x1137143a0);
      param_1 = 0x1136d48c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48c8 & 1) == 0) {
    param_1 = 0x1136d48c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x1137143d8);
      param_1 = 0x1136d48c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48d0 & 1) == 0) {
    param_1 = 0x1136d48d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x113714410);
      param_1 = 0x1136d48d0;
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
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076c48ac;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x000107717974();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771f4f4();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
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
        uVar2 = 0;
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
        if (!(bool)in_ZR) {
          func_0x0001077081c0();
          goto code_r0x0001076c497c;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076c4984;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076c499c;
    }
    func_0x00010771d224();
code_r0x0001076c49c8:
    func_0x000107715434();
code_r0x0001076c49cc:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
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
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076c4a6c;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x000107717974();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771f4f4();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
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
            uVar2 = 0;
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
          uVar2 = in_ZR;
          goto code_r0x0001076c4b9c;
        }
        func_0x00010771d224();
code_r0x0001076c4bc8:
        func_0x0001077154cc();
code_r0x0001076c4bcc:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
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
            uVar4 = uVar5;
            func_0x000107717974();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771f4f4();
              func_0x000107714c8c();
              if (iVar3 != 0) {
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
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a81c();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
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
              uVar2 = in_ZR;
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
              uVar2 = 0;
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
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076c4e6c;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076c4e3c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076c4e44:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
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
          uVar2 = 0;
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
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076c4bcc;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076c4b9c:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076c4ba4:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
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
    uVar2 = 0;
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
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076c49cc;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076c499c:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076c49a4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
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



/* Entry: 1076c8d60; end: 1076ca21b;  */

/* WARNING: Possible PIC construction at 0x0001076c90a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076c9198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076c90a8) */
/* WARNING: Removing unreachable block (ram,0x0001076c90b0) */
/* WARNING: Removing unreachable block (ram,0x0001076c9140) */
/* WARNING: Removing unreachable block (ram,0x0001076c90d0) */
/* WARNING: Removing unreachable block (ram,0x0001076c9150) */
/* WARNING: Removing unreachable block (ram,0x0001076c90dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c90e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c90f4) */
/* WARNING: Removing unreachable block (ram,0x0001076c9104) */
/* WARNING: Removing unreachable block (ram,0x0001076c9124) */
/* WARNING: Removing unreachable block (ram,0x0001076c9160) */
/* WARNING: Removing unreachable block (ram,0x0001076c9164) */
/* WARNING: Removing unreachable block (ram,0x0001076c9168) */
/* WARNING: Removing unreachable block (ram,0x0001076c9174) */
/* WARNING: Removing unreachable block (ram,0x0001076c918c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9194) */
/* WARNING: Removing unreachable block (ram,0x0001076c919c) */
/* WARNING: Removing unreachable block (ram,0x0001076c91a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c91b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c9238) */
/* WARNING: Removing unreachable block (ram,0x0001076c91c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c9248) */
/* WARNING: Removing unreachable block (ram,0x0001076c91d0) */
/* WARNING: Removing unreachable block (ram,0x0001076c91d8) */
/* WARNING: Removing unreachable block (ram,0x0001076c91e8) */
/* WARNING: Removing unreachable block (ram,0x0001076c91f8) */
/* WARNING: Removing unreachable block (ram,0x0001076c921c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9258) */
/* WARNING: Removing unreachable block (ram,0x0001076c925c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9260) */
/* WARNING: Removing unreachable block (ram,0x0001076c926c) */
/* WARNING: Removing unreachable block (ram,0x0001076c927c) */
/* WARNING: Removing unreachable block (ram,0x0001076c928c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9294) */
/* WARNING: Removing unreachable block (ram,0x0001076c92a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c92b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c92bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c92cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c92dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c92f0) */
/* WARNING: Removing unreachable block (ram,0x0001076c92fc) */
/* WARNING: Removing unreachable block (ram,0x0001076c9318) */
/* WARNING: Removing unreachable block (ram,0x0001076c9304) */
/* WARNING: Removing unreachable block (ram,0x0001076c931c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9328) */
/* WARNING: Removing unreachable block (ram,0x0001076c9338) */
/* WARNING: Removing unreachable block (ram,0x0001076c9340) */
/* WARNING: Removing unreachable block (ram,0x0001076c9360) */
/* WARNING: Removing unreachable block (ram,0x0001076c9374) */
/* WARNING: Removing unreachable block (ram,0x0001076c9384) */
/* WARNING: Removing unreachable block (ram,0x0001076c9394) */
/* WARNING: Removing unreachable block (ram,0x0001076c939c) */
/* WARNING: Removing unreachable block (ram,0x0001076c93a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c93b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c93c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c93cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c93dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c93ec) */
/* WARNING: Removing unreachable block (ram,0x0001076c9400) */
/* WARNING: Removing unreachable block (ram,0x0001076c940c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9428) */
/* WARNING: Removing unreachable block (ram,0x0001076c9414) */
/* WARNING: Removing unreachable block (ram,0x0001076c942c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9438) */
/* WARNING: Removing unreachable block (ram,0x0001076c9448) */
/* WARNING: Removing unreachable block (ram,0x0001076c94ac) */
/* WARNING: Removing unreachable block (ram,0x0001076c94b8) */
/* WARNING: Removing unreachable block (ram,0x0001076c94d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c94c0) */
/* WARNING: Removing unreachable block (ram,0x0001076c94d8) */
/* WARNING: Removing unreachable block (ram,0x0001076c94dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c9da8) */
/* WARNING: Removing unreachable block (ram,0x0001076ca0c8) */
/* WARNING: Removing unreachable block (ram,0x0001076ca218) */
/* WARNING: Removing unreachable block (ram,0x0001076c9504) */

void FUN_1076c8d60(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4a68 & 1) == 0) {
    param_1 = 0x1136d4a68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113714f38);
      param_1 = 0x1136d4a68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a70 & 1) == 0) {
    param_1 = 0x1136d4a70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113714f70);
      param_1 = 0x1136d4a70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a78 & 1) == 0) {
    param_1 = 0x1136d4a78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113714fa8);
      param_1 = 0x1136d4a78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a80 & 1) == 0) {
    param_1 = 0x1136d4a80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113714fe0);
      param_1 = 0x1136d4a80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a88 & 1) == 0) {
    param_1 = 0x1136d4a88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x113715018);
      param_1 = 0x1136d4a88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a90 & 1) == 0) {
    param_1 = 0x1136d4a90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x113715050);
      param_1 = 0x1136d4a90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a98 & 1) == 0) {
    param_1 = 0x1136d4a98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113715088);
      param_1 = 0x1136d4a98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4aa0 & 1) == 0) {
    param_1 = 0x1136d4aa0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x1137150c0);
      param_1 = 0x1136d4aa0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4aa8 & 1) == 0) {
    param_1 = 0x1136d4aa8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x1137150f8);
      param_1 = 0x1136d4aa8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ab0 & 1) == 0) {
    param_1 = 0x1136d4ab0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d200(0x113715130);
      param_1 = 0x1136d4ab0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ab8 & 1) == 0) {
    param_1 = 0x1136d4ab8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113715168);
      param_1 = 0x1136d4ab8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ac0 & 1) == 0) {
    param_1 = 0x1136d4ac0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x1137151a0);
      param_1 = 0x1136d4ac0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ac8 & 1) == 0) {
    param_1 = 0x1136d4ac8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x1137151d8);
      param_1 = 0x1136d4ac8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ad0 & 1) == 0) {
    param_1 = 0x1136d4ad0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x113715210);
      param_1 = 0x1136d4ad0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ad8 & 1) == 0) {
    param_1 = 0x1136d4ad8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x113715248);
      param_1 = 0x1136d4ad8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ae0 & 1) == 0) {
    param_1 = 0x1136d4ae0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113715280);
      param_1 = 0x1136d4ae0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ae8 & 1) == 0) {
    param_1 = 0x1136d4ae8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x1137152b8);
      param_1 = 0x1136d4ae8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4af0 & 1) == 0) {
    param_1 = 0x1136d4af0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x1137152f0);
      param_1 = 0x1136d4af0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4af8 & 1) == 0) {
    param_1 = 0x1136d4af8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c128(0x113715328);
      param_1 = 0x1136d4af8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b00 & 1) == 0) {
    param_1 = 0x1136d4b00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113715360);
      param_1 = 0x1136d4b00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b08 & 1) == 0) {
    param_1 = 0x1136d4b08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113715398);
      param_1 = 0x1136d4b08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b10 & 1) == 0) {
    param_1 = 0x1136d4b10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x1137153d0);
      param_1 = 0x1136d4b10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b18 & 1) == 0) {
    param_1 = 0x1136d4b18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c108(0x113715408);
      param_1 = 0x1136d4b18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b20 & 1) == 0) {
    param_1 = 0x1136d4b20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113715440);
      param_1 = 0x1136d4b20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b28 & 1) == 0) {
    param_1 = 0x1136d4b28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113715478);
      param_1 = 0x1136d4b28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b30 & 1) == 0) {
    param_1 = 0x1136d4b30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770abb8(0x1137154b0);
      param_1 = 0x1136d4b30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b38 & 1) == 0) {
    param_1 = 0x1136d4b38;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x1137154e8);
      param_1 = 0x1136d4b38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b40 & 1) == 0) {
    param_1 = 0x1136d4b40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113715520);
      param_1 = 0x1136d4b40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b48 & 1) == 0) {
    param_1 = 0x1136d4b48;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113715558);
      param_1 = 0x1136d4b48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b50 & 1) == 0) {
    param_1 = 0x1136d4b50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113715590);
      param_1 = 0x1136d4b50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b58 & 1) == 0) {
    param_1 = 0x1136d4b58;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x1137155c8);
      param_1 = 0x1136d4b58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b60 & 1) == 0) {
    param_1 = 0x1136d4b60;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0f8(0x113715600);
      param_1 = 0x1136d4b60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b68 & 1) == 0) {
    param_1 = 0x1136d4b68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770bab4(0x113715638);
      param_1 = 0x1136d4b68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b70 & 1) == 0) {
    param_1 = 0x1136d4b70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113715670);
      param_1 = 0x1136d4b70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b78 & 1) == 0) {
    param_1 = 0x1136d4b78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x1137156a8);
      param_1 = 0x1136d4b78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b80 & 1) == 0) {
    param_1 = 0x1136d4b80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x1137156e0);
      param_1 = 0x1136d4b80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b88 & 1) == 0) {
    param_1 = 0x1136d4b88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113715718);
      param_1 = 0x1136d4b88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b90 & 1) == 0) {
    param_1 = 0x1136d4b90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113715750);
      param_1 = 0x1136d4b90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b98 & 1) == 0) {
    param_1 = 0x1136d4b98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113715788);
      param_1 = 0x1136d4b98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ba0 & 1) == 0) {
    param_1 = 0x1136d4ba0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0c0(0x1137157c0);
      param_1 = 0x1136d4ba0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ba8 & 1) == 0) {
    param_1 = 0x1136d4ba8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x1137157f8);
      param_1 = 0x1136d4ba8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bb0 & 1) == 0) {
    param_1 = 0x1136d4bb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113715830);
      param_1 = 0x1136d4bb0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bb8 & 1) == 0) {
    param_1 = 0x1136d4bb8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113715868);
      param_1 = 0x1136d4bb8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bc0 & 1) == 0) {
    param_1 = 0x1136d4bc0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x1137158a0);
      param_1 = 0x1136d4bc0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bc8 & 1) == 0) {
    param_1 = 0x1136d4bc8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x1137158d8);
      param_1 = 0x1136d4bc8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bd0 & 1) == 0) {
    param_1 = 0x1136d4bd0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113715910);
      param_1 = 0x1136d4bd0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bd8 & 1) == 0) {
    param_1 = 0x1136d4bd8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113715948);
      param_1 = 0x1136d4bd8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4be0 & 1) == 0) {
    param_1 = 0x1136d4be0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113715980);
      param_1 = 0x1136d4be0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4be8 & 1) == 0) {
    param_1 = 0x1136d4be8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x1137159b8);
      param_1 = 0x1136d4be8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bf0 & 1) == 0) {
    param_1 = 0x1136d4bf0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x1137159f0);
      param_1 = 0x1136d4bf0;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x00010771f350();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x0001077169a0();
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
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076ca2b4;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x0001077178f0();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771f344();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
        func_0x0001077169a0();
        goto code_r0x0001076ca3d0;
      }
      func_0x00010771a7c8();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a7bc();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077169a0();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a7b0();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076ca3ac;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x0001077169a0();
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
          goto code_r0x0001076ca384;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076ca38c;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076ca3a4;
    }
    func_0x00010771d1a0();
code_r0x0001076ca3d0:
    func_0x000107715434();
code_r0x0001076ca3d4:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771f350();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x0001077169a0();
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
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076ca470;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x0001077178f0();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771f344();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
            func_0x0001077169a0();
            goto code_r0x0001076ca5cc;
          }
          func_0x00010771a7c8();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a7bc();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x0001077169a0();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a7b0();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x0001077169a0();
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
                goto code_r0x0001076ca544;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076ca54c;
            }
            goto code_r0x0001076ca5a8;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076ca5a0;
        }
        func_0x00010771d1a0();
code_r0x0001076ca5cc:
        func_0x0001077154cc();
code_r0x0001076ca5d0:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771f350();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x0001077169a0();
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
            if (!(bool)in_ZR) goto code_r0x0001076ca66c;
            func_0x000107714bc0();
            uVar4 = uVar5;
            func_0x0001077178f0();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771f344();
              func_0x000107714c8c();
              if (iVar3 != 0) {
                func_0x0001077169a0();
                goto code_r0x0001076ca868;
              }
              func_0x00010771a7c8();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a7bc();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x0001077169a0();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a7b0();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x0001077169a0();
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
                    goto code_r0x0001076ca7d8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076ca7e0;
                }
                goto code_r0x0001076ca844;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076ca83c;
            }
            func_0x00010771d1a0();
code_r0x0001076ca868:
            func_0x000107715370();
code_r0x0001076ca86c:
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
code_r0x0001076ca66c:
            func_0x00010771a7c8();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a7bc();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077169a0();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a7b0();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076ca844;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x0001077169a0();
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
code_r0x0001076ca7d8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076ca7e0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076ca86c;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076ca83c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076ca844:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
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
code_r0x0001076ca470:
        func_0x00010771a7c8();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a7bc();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x0001077169a0();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a7b0();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076ca5a8;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x0001077169a0();
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
code_r0x0001076ca544:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076ca54c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076ca5d0;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076ca5a0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076ca5a8:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
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
    goto code_r0x0001076ca8b8;
  }
code_r0x0001076ca2b4:
  func_0x00010771a7c8();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a7bc();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x0001077169a0();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a7b0();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076ca3ac;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x0001077169a0();
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
code_r0x0001076ca384:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076ca38c:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076ca3d4;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076ca3a4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076ca3ac:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076ca8b8:
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



/* Entry: 1076ce58c; end: 1076cfa57;  */

/* WARNING: Possible PIC construction at 0x0001076ce8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076ce9d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076ce8e4) */
/* WARNING: Removing unreachable block (ram,0x0001076ce8ec) */
/* WARNING: Removing unreachable block (ram,0x0001076ce97c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce90c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce98c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce918) */
/* WARNING: Removing unreachable block (ram,0x0001076ce920) */
/* WARNING: Removing unreachable block (ram,0x0001076ce930) */
/* WARNING: Removing unreachable block (ram,0x0001076ce940) */
/* WARNING: Removing unreachable block (ram,0x0001076ce960) */
/* WARNING: Removing unreachable block (ram,0x0001076ce99c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9a0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9a4) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9b0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9c8) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9d0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9d8) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9e0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9f0) */
/* WARNING: Removing unreachable block (ram,0x0001076cea74) */
/* WARNING: Removing unreachable block (ram,0x0001076cea00) */
/* WARNING: Removing unreachable block (ram,0x0001076cea84) */
/* WARNING: Removing unreachable block (ram,0x0001076cea0c) */
/* WARNING: Removing unreachable block (ram,0x0001076cea14) */
/* WARNING: Removing unreachable block (ram,0x0001076cea24) */
/* WARNING: Removing unreachable block (ram,0x0001076cea34) */
/* WARNING: Removing unreachable block (ram,0x0001076cea58) */
/* WARNING: Removing unreachable block (ram,0x0001076cea94) */
/* WARNING: Removing unreachable block (ram,0x0001076cea98) */
/* WARNING: Removing unreachable block (ram,0x0001076cea9c) */
/* WARNING: Removing unreachable block (ram,0x0001076ceaa8) */
/* WARNING: Removing unreachable block (ram,0x0001076ceab8) */
/* WARNING: Removing unreachable block (ram,0x0001076ceac8) */
/* WARNING: Removing unreachable block (ram,0x0001076cead0) */
/* WARNING: Removing unreachable block (ram,0x0001076ceae0) */
/* WARNING: Removing unreachable block (ram,0x0001076ceaf0) */
/* WARNING: Removing unreachable block (ram,0x0001076ceaf8) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb08) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb18) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb2c) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb38) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb54) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb40) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb58) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb64) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb74) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb7c) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb9c) */
/* WARNING: Removing unreachable block (ram,0x0001076cebb0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebc0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebd0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebd8) */
/* WARNING: Removing unreachable block (ram,0x0001076cebe0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebf0) */
/* WARNING: Removing unreachable block (ram,0x0001076cec00) */
/* WARNING: Removing unreachable block (ram,0x0001076cec08) */
/* WARNING: Removing unreachable block (ram,0x0001076cec18) */
/* WARNING: Removing unreachable block (ram,0x0001076cec28) */
/* WARNING: Removing unreachable block (ram,0x0001076cec3c) */
/* WARNING: Removing unreachable block (ram,0x0001076cec48) */
/* WARNING: Removing unreachable block (ram,0x0001076cec64) */
/* WARNING: Removing unreachable block (ram,0x0001076cec50) */
/* WARNING: Removing unreachable block (ram,0x0001076cec68) */
/* WARNING: Removing unreachable block (ram,0x0001076cec74) */
/* WARNING: Removing unreachable block (ram,0x0001076cec84) */
/* WARNING: Removing unreachable block (ram,0x0001076cecac) */
/* WARNING: Removing unreachable block (ram,0x0001076cecb8) */
/* WARNING: Removing unreachable block (ram,0x0001076cecd4) */
/* WARNING: Removing unreachable block (ram,0x0001076cecc0) */
/* WARNING: Removing unreachable block (ram,0x0001076cecd8) */
/* WARNING: Removing unreachable block (ram,0x0001076cecdc) */
/* WARNING: Removing unreachable block (ram,0x0001076cf5d4) */
/* WARNING: Removing unreachable block (ram,0x0001076cf904) */
/* WARNING: Removing unreachable block (ram,0x0001076cfa54) */
/* WARNING: Removing unreachable block (ram,0x0001076ced04) */

void FUN_1076ce58c(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  uint extraout_w8;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4d88 & 1) == 0) {
    param_1 = 0x1136d4d88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113716518);
      param_1 = 0x1136d4d88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4d90 & 1) == 0) {
    param_1 = 0x1136d4d90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113716550);
      param_1 = 0x1136d4d90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4d98 & 1) == 0) {
    param_1 = 0x1136d4d98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113716588);
      param_1 = 0x1136d4d98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4da0 & 1) == 0) {
    param_1 = 0x1136d4da0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x1137165c0);
      param_1 = 0x1136d4da0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4da8 & 1) == 0) {
    param_1 = 0x1136d4da8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x1137165f8);
      param_1 = 0x1136d4da8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4db0 & 1) == 0) {
    param_1 = 0x1136d4db0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x113716630);
      param_1 = 0x1136d4db0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4db8 & 1) == 0) {
    param_1 = 0x1136d4db8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113716668);
      param_1 = 0x1136d4db8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dc0 & 1) == 0) {
    param_1 = 0x1136d4dc0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x1137166a0);
      param_1 = 0x1136d4dc0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dc8 & 1) == 0) {
    param_1 = 0x1136d4dc8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x1137166d8);
      param_1 = 0x1136d4dc8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dd0 & 1) == 0) {
    param_1 = 0x1136d4dd0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d200(0x113716710);
      param_1 = 0x1136d4dd0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dd8 & 1) == 0) {
    param_1 = 0x1136d4dd8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113716748);
      param_1 = 0x1136d4dd8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4de0 & 1) == 0) {
    param_1 = 0x1136d4de0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113716780);
      param_1 = 0x1136d4de0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4de8 & 1) == 0) {
    param_1 = 0x1136d4de8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x1137167b8);
      param_1 = 0x1136d4de8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4df0 & 1) == 0) {
    param_1 = 0x1136d4df0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x1137167f0);
      param_1 = 0x1136d4df0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4df8 & 1) == 0) {
    param_1 = 0x1136d4df8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x113716828);
      param_1 = 0x1136d4df8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e00 & 1) == 0) {
    param_1 = 0x1136d4e00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113716860);
      param_1 = 0x1136d4e00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e08 & 1) == 0) {
    param_1 = 0x1136d4e08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113716898);
      param_1 = 0x1136d4e08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e10 & 1) == 0) {
    param_1 = 0x1136d4e10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x1137168d0);
      param_1 = 0x1136d4e10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e18 & 1) == 0) {
    param_1 = 0x1136d4e18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c128(0x113716908);
      param_1 = 0x1136d4e18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e20 & 1) == 0) {
    param_1 = 0x1136d4e20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113716940);
      param_1 = 0x1136d4e20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e28 & 1) == 0) {
    param_1 = 0x1136d4e28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113716978);
      param_1 = 0x1136d4e28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e30 & 1) == 0) {
    param_1 = 0x1136d4e30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x1137169b0);
      param_1 = 0x1136d4e30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e38 & 1) == 0) {
    param_1 = 0x1136d4e38;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c108(0x1137169e8);
      param_1 = 0x1136d4e38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e40 & 1) == 0) {
    param_1 = 0x1136d4e40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113716a20);
      param_1 = 0x1136d4e40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e48 & 1) == 0) {
    param_1 = 0x1136d4e48;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113716a58);
      param_1 = 0x1136d4e48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e50 & 1) == 0) {
    param_1 = 0x1136d4e50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770abb8(0x113716a90);
      param_1 = 0x1136d4e50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e58 & 1) == 0) {
    param_1 = 0x1136d4e58;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113716ac8);
      param_1 = 0x1136d4e58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e60 & 1) == 0) {
    param_1 = 0x1136d4e60;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113716b00);
      param_1 = 0x1136d4e60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e68 & 1) == 0) {
    param_1 = 0x1136d4e68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113716b38);
      param_1 = 0x1136d4e68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e70 & 1) == 0) {
    param_1 = 0x1136d4e70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113716b70);
      param_1 = 0x1136d4e70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e78 & 1) == 0) {
    param_1 = 0x1136d4e78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113716ba8);
      param_1 = 0x1136d4e78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e80 & 1) == 0) {
    param_1 = 0x1136d4e80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0f8(0x113716be0);
      param_1 = 0x1136d4e80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e88 & 1) == 0) {
    param_1 = 0x1136d4e88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770bab4(0x113716c18);
      param_1 = 0x1136d4e88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e90 & 1) == 0) {
    param_1 = 0x1136d4e90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113716c50);
      param_1 = 0x1136d4e90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e98 & 1) == 0) {
    param_1 = 0x1136d4e98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113716c88);
      param_1 = 0x1136d4e98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ea0 & 1) == 0) {
    param_1 = 0x1136d4ea0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113716cc0);
      param_1 = 0x1136d4ea0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ea8 & 1) == 0) {
    param_1 = 0x1136d4ea8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113716cf8);
      param_1 = 0x1136d4ea8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4eb0 & 1) == 0) {
    param_1 = 0x1136d4eb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113716d30);
      param_1 = 0x1136d4eb0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4eb8 & 1) == 0) {
    param_1 = 0x1136d4eb8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113716d68);
      param_1 = 0x1136d4eb8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ec0 & 1) == 0) {
    param_1 = 0x1136d4ec0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0c0(0x113716da0);
      param_1 = 0x1136d4ec0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ec8 & 1) == 0) {
    param_1 = 0x1136d4ec8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113716dd8);
      param_1 = 0x1136d4ec8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ed0 & 1) == 0) {
    param_1 = 0x1136d4ed0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a990(0x113716e10);
      param_1 = 0x1136d4ed0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ed8 & 1) == 0) {
    param_1 = 0x1136d4ed8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113716e48);
      param_1 = 0x1136d4ed8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ee0 & 1) == 0) {
    param_1 = 0x1136d4ee0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113716e80);
      param_1 = 0x1136d4ee0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ee8 & 1) == 0) {
    param_1 = 0x1136d4ee8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113716eb8);
      param_1 = 0x1136d4ee8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ef0 & 1) == 0) {
    param_1 = 0x1136d4ef0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113716ef0);
      param_1 = 0x1136d4ef0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ef8 & 1) == 0) {
    param_1 = 0x1136d4ef8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113716f28);
      param_1 = 0x1136d4ef8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f00 & 1) == 0) {
    param_1 = 0x1136d4f00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113716f60);
      param_1 = 0x1136d4f00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f08 & 1) == 0) {
    param_1 = 0x1136d4f08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113716f98);
      param_1 = 0x1136d4f08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f10 & 1) == 0) {
    param_1 = 0x1136d4f10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113716fd0);
      param_1 = 0x1136d4f10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f18 & 1) == 0) {
    param_1 = 0x1136d4f18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x113717008);
      param_1 = 0x1136d4f18;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718560();
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
  uVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar3 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076cfaf8;
    func_0x000107714bc0();
    uVar3 = param_1;
    func_0x00010771dd60();
    unaff_x21 = param_1;
    if ((uVar3 & 1) != 0) {
code_r0x0001076cfc1c:
      func_0x000107714da8();
code_r0x0001076cfc20:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar3 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)in_ZR) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076cfc80;
    }
    func_0x000107714c8c();
    if ((int)uVar3 != 0) {
      func_0x000107718560();
      goto code_r0x0001076cfc1c;
    }
    func_0x00010771f1d8();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f1cc();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718560();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771f1c0();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718560();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto code_r0x0001076cfbcc;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076cfbd4;
      }
      goto code_r0x0001076cfbf4;
    }
    func_0x000107707eac();
    uVar2 = in_ZR;
code_r0x0001076cfbec:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076cfbf4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  else {
code_r0x0001076cfaf8:
    func_0x00010771f1d8();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f1cc();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718560();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar2 = in_ZR;
      goto code_r0x0001076cfbec;
    }
    func_0x000107714cc4();
    func_0x00010771f1c0();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076cfbf4;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718560();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076cfbcc:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076cfbd4:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076cfc20;
  }
  func_0x000107715758();
code_r0x0001076cfc80:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
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



/* Entry: 1076db8cc; end: 1076db963;  */

void FUN_1076db8cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  int unaff_w23;
  undefined1 *puVar14;
  byte unaff_w25;
  undefined8 **in_stack_00000080;
  undefined *in_stack_00000088;
  int in_stack_000000a8;
  undefined1 *in_stack_00000120;
  undefined *in_stack_00000128;
  undefined1 auStack_a40 [104];
  int iStack_9d8;
  undefined1 uStack_9c8;
  undefined1 auStack_918 [104];
  int iStack_8b0;
  int iStack_840;
  undefined8 ***pppuStack_7f0;
  undefined *puStack_7e8;
  undefined1 auStack_780 [8];
  undefined8 uStack_778;
  uint uStack_718;
  undefined1 auStack_710 [104];
  int iStack_6a8;
  undefined1 auStack_6a0 [104];
  uint uStack_638;
  undefined1 auStack_630 [8];
  undefined1 auStack_628 [176];
  byte abStack_578 [8];
  undefined1 auStack_570 [104];
  undefined1 auStack_508 [8];
  undefined8 uStack_500;
  int iStack_4a0;
  undefined1 auStack_498 [104];
  int iStack_430;
  undefined1 auStack_410 [80];
  undefined8 **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined1 auStack_2b8 [128];
  undefined1 auStack_238 [112];
  undefined1 auStack_1c8 [216];
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  
  func_0x000107708a5c();
  if ((bRam00000001136d5438 & 1) == 0) {
    iVar6 = 0x136d5438;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107714998(0x1137193b0,&UNK_10f42481a);
      ___cxa_guard_release(0x1136d5438);
    }
  }
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5438);
  func_0x0001077149ec();
  puVar7 = &DAT_1076db964;
  func_0x00010771fbd0();
  in_stack_00000120 = &stack0xfffffffffffffff0;
  in_stack_00000128 = puVar7;
  func_0x000107707564();
  if ((bRam00000001136d5440 & 1) == 0) {
    iVar6 = 0x136d5440;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f70(0x1137193e8);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5448 & 1) == 0) {
    iVar6 = 0x136d5448;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077099ac(0x113719420);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5450 & 1) == 0) {
    iVar6 = 0x136d5450;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107714998(0x113719458,&UNK_10f42481a);
      ___cxa_guard_release();
    }
  }
  func_0x0001077091ec();
  in_stack_000000a8 = 0;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  if (in_stack_000000a8 == 0) {
    func_0x000107709348();
    func_0x000107714850();
  }
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x000107714a5c();
    uVar1 = 0xaf0;
    if ((bool)in_ZR) {
      uVar1 = 0xb28;
    }
    func_0x0001077113e0(uVar1);
    func_0x00010770eabc();
    func_0x00010770d688();
    func_0x000107714830();
  }
  else {
    func_0x00010770b7b0();
    func_0x00010770cf5c();
    func_0x000107714fdc();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107715a9c();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5450);
  func_0x0001077149ec();
  puStack_a8 = &DAT_1076dbb30;
  puStack_b0 = &stack0x00000120;
  func_0x000107708a5c();
  if ((bRam00000001136d5458 & 1) == 0) {
    iVar6 = 0x136d5458;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107714998(0x113719490,&UNK_10f42482d);
      ___cxa_guard_release(0x1136d5458);
    }
  }
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5458);
  func_0x0001077149ec();
  puVar7 = &DAT_1076dbbc8;
  func_0x00010771fbd0();
  in_stack_00000080 = &puStack_b0;
  in_stack_00000088 = puVar7;
  func_0x000107707564();
  if ((bRam00000001136d5460 & 1) == 0) {
    iVar6 = 0x136d5460;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708f70(0x1137194c8);
      ___cxa_guard_release(0x1136d5460);
    }
  }
  if ((bRam00000001136d5468 & 1) == 0) {
    iVar6 = 0x136d5468;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107711de0(0x113719500);
      ___cxa_guard_release(0x1136d5468);
    }
  }
  if ((bRam00000001136d5470 & 1) == 0) {
    iVar6 = 0x136d5470;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107714998(0x113719538,&UNK_10f42482d);
      ___cxa_guard_release(0x1136d5470);
    }
  }
  func_0x0001077091ec();
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  func_0x000107709348();
  func_0x000107714850();
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x000107714a5c();
    uVar1 = 0xbd0;
    if ((bool)in_ZR) {
      uVar1 = 0xc08;
    }
    func_0x0001077113e0(uVar1);
    func_0x00010770eabc();
    func_0x00010770d688();
    func_0x000107714830();
  }
  else {
    func_0x00010770b7b0();
    func_0x00010770cf5c();
    func_0x000107714fdc();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107715a9c();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5470);
  func_0x0001077149ec();
  puVar7 = &DAT_1076dbd94;
  func_0x0001077184d0();
  puStack_f0 = &stack0x00000080;
  puStack_e8 = puVar7;
  func_0x000107707444();
  if ((bRam00000001136d5478 & 1) == 0) {
    iVar6 = 0x136d5478;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a504(0x113719570);
      ___cxa_guard_release(0x1136d5478);
    }
  }
  if ((bRam00000001136d5480 & 1) == 0) {
    iVar6 = 0x136d5480;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a514(0x1137195a8);
      ___cxa_guard_release(0x1136d5480);
    }
  }
  if ((bRam00000001136d5488 & 1) == 0) {
    iVar6 = 0x136d5488;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710c58(0x1137195e0);
      ___cxa_guard_release(0x1136d5488);
    }
  }
  if ((bRam00000001136d5490 & 1) == 0) {
    iVar6 = 0x136d5490;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710c48(0x113719618);
      ___cxa_guard_release(0x1136d5490);
    }
  }
  if ((bRam00000001136d5498 & 1) == 0) {
    iVar6 = 0x136d5498;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710c38(0x113719650);
      ___cxa_guard_release(0x1136d5498);
    }
  }
  if ((bRam00000001136d54a0 & 1) == 0) {
    iVar6 = 0x136d54a0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710c28(0x113719688);
      ___cxa_guard_release(0x1136d54a0);
    }
  }
  if ((bRam00000001136d54a8 & 1) == 0) {
    iVar6 = 0x136d54a8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710c18(0x1137196c0);
      ___cxa_guard_release(0x1136d54a8);
    }
  }
  if ((bRam00000001136d54b0 & 1) == 0) {
    iVar6 = 0x136d54b0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710c08(0x1137196f8);
      ___cxa_guard_release(0x1136d54b0);
    }
  }
  if ((bRam00000001136d54b8 & 1) == 0) {
    iVar6 = 0x136d54b8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770dbc0(0x113719730);
      ___cxa_guard_release(0x1136d54b8);
    }
  }
  if ((bRam00000001136d54c0 & 1) == 0) {
    iVar6 = 0x136d54c0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710bf8(0x113719768);
      ___cxa_guard_release(0x1136d54c0);
    }
  }
  if ((bRam00000001136d54c8 & 1) == 0) {
    iVar6 = 0x136d54c8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770ea4c(0x1137197a0);
      ___cxa_guard_release(0x1136d54c8);
    }
  }
  if ((bRam00000001136d54d0 & 1) == 0) {
    iVar6 = 0x136d54d0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107719820(0x1137197d8,&UNK_10f42225c);
      ___cxa_guard_release(0x1136d54d0);
    }
  }
  if ((bRam00000001136d54d8 & 1) == 0) {
    iVar6 = 0x136d54d8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710be8(0x113719810);
      ___cxa_guard_release(0x1136d54d8);
    }
  }
  if ((bRam00000001136d54e0 & 1) == 0) {
    iVar6 = 0x136d54e0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710bd8(0x113719848);
      ___cxa_guard_release(0x1136d54e0);
    }
  }
  if ((bRam00000001136d54e8 & 1) == 0) {
    iVar6 = 0x136d54e8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107710bc8(0x113719880);
      ___cxa_guard_release(0x1136d54e8);
    }
  }
  if ((bRam00000001136d54f0 & 1) == 0) {
    iVar6 = 0x136d54f0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770f5f0(0x1137198b8);
      ___cxa_guard_release(0x1136d54f0);
    }
  }
  func_0x00010770f25c();
  func_0x000107715e00();
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010771f5bc();
  func_0x000107715e00();
  func_0x00010770c200();
  func_0x000107714838();
  puVar13 = auStack_1c8;
  func_0x000107707bdc(puVar13);
  func_0x00010771557c();
  if ((bool)in_ZR) {
    func_0x000107717dcc();
    unaff_w23 = (int)auStack_238;
    func_0x00010770c30c(puVar13);
    func_0x000107715e00();
    func_0x00010771159c();
    puVar13 = auStack_2b8;
    func_0x000107707bdc(puVar13);
    func_0x00010771bbd0();
    if ((bool)in_ZR) {
      func_0x000107719fb4();
      func_0x00010770cc44(puVar13);
      func_0x000107715e00();
      func_0x00010771303c();
      func_0x000107713ec0();
      func_0x000107715e00();
      func_0x00010770f518();
      func_0x000107714890();
      func_0x000107710798();
      func_0x000107715c24();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x000107717c54();
      func_0x000107719fd8();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x0001077116a8();
      func_0x000107715e00();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x00010771f5b0();
      func_0x00010771765c();
      func_0x000107714360();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010771766c();
      func_0x000107714360();
      func_0x00010770c388();
      func_0x000107714848();
      unaff_w25 = 0;
      func_0x00010771c158();
      func_0x000107716ae8();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010771c158();
      func_0x000107716ae8();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x000107710798();
      func_0x00010771a14c();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x0001077116a8();
      func_0x000107716ae8();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x000107718930();
      func_0x000107713d28();
      func_0x00010771cc54();
      func_0x000107712b90();
      func_0x000107714850();
      func_0x0001077116a8();
      func_0x000107712b90();
      func_0x000107714850();
      func_0x0001077172a8(auStack_410);
      func_0x00010771386c();
      func_0x000107716ae8();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x00010771720c();
      func_0x000107716b44();
      func_0x000107713024();
      func_0x000107717bf8();
      func_0x00010770d1c8();
      func_0x000107717b98(auStack_410);
      func_0x000107714850();
      func_0x00010771611c();
      func_0x00010770ebe0();
      func_0x000107711b78();
      func_0x00010771aa14();
      func_0x000107715e00();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x000107715548();
      func_0x000107717bec();
      func_0x00010770d1c8();
      func_0x00010770ff30();
      func_0x000107714850();
      func_0x00010771611c();
      func_0x000107715978();
      func_0x000107716af0();
      func_0x000107718e38();
      func_0x000107714830();
    }
    else {
      func_0x00010770c1d0(auStack_2b8);
    }
    func_0x000107710d10();
    func_0x000107714838();
  }
  else {
    func_0x00010770c1d0(auStack_1c8);
  }
  func_0x00010770f284();
  func_0x000107718d9c();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d54f0);
  func_0x0001077149ec();
  puVar7 = &DAT_1076dc5dc;
  func_0x000107715308();
  ppuStack_3c0 = &puStack_f0;
  puStack_3b8 = puVar7;
  func_0x000107707ae4();
  if ((bRam00000001136d54f8 & 1) == 0) {
    iVar6 = 0x136d54f8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077163d4(0x1137198f0,&UNK_10f422396);
      ___cxa_guard_release(0x1136d54f8);
    }
  }
  if ((bRam00000001136d5500 & 1) == 0) {
    iVar6 = 0x136d5500;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708e10(0x113719928);
      ___cxa_guard_release(0x1136d5500);
    }
  }
  if ((bRam00000001136d5508 & 1) == 0) {
    iVar6 = 0x136d5508;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708bb0(0x113719960);
      ___cxa_guard_release(0x1136d5508);
    }
  }
  if ((bRam00000001136d5510 & 1) == 0) {
    iVar6 = 0x136d5510;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708de0(0x113719998);
      ___cxa_guard_release(0x1136d5510);
    }
  }
  if ((bRam00000001136d5518 & 1) == 0) {
    iVar6 = 0x136d5518;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708dc0(0x1137199d0);
      ___cxa_guard_release(0x1136d5518);
    }
  }
  if ((bRam00000001136d5520 & 1) == 0) {
    iVar6 = 0x136d5520;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708dd0(0x113719a08);
      ___cxa_guard_release(0x1136d5520);
    }
  }
  if ((bRam00000001136d5528 & 1) == 0) {
    iVar6 = 0x136d5528;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708e00(0x113719a40);
      ___cxa_guard_release(0x1136d5528);
    }
  }
  if ((bRam00000001136d5530 & 1) == 0) {
    iVar6 = 0x136d5530;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708df0(0x113719a78);
      ___cxa_guard_release(0x1136d5530);
    }
  }
  if ((bRam00000001136d5538 & 1) == 0) {
    iVar6 = 0x136d5538;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708db0(0x113719ab0);
      ___cxa_guard_release(0x1136d5538);
    }
  }
  if ((bRam00000001136d5540 & 1) == 0) {
    iVar6 = 0x136d5540;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770d04c(0x113719ae8);
      ___cxa_guard_release(0x1136d5540);
    }
  }
  if ((bRam00000001136d5548 & 1) == 0) {
    iVar6 = 0x136d5548;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077095a0(0x113719b20);
      ___cxa_guard_release(0x1136d5548);
    }
  }
  if ((bRam00000001136d5550 & 1) == 0) {
    iVar6 = 0x136d5550;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077098bc(0x113719b58);
      ___cxa_guard_release(0x1136d5550);
    }
  }
  if ((bRam00000001136d5558 & 1) == 0) {
    iVar6 = 0x136d5558;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770b448(0x113719b90);
      ___cxa_guard_release(0x1136d5558);
    }
  }
  if ((bRam00000001136d5560 & 1) == 0) {
    iVar6 = 0x136d5560;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770ab38(0x113719bc8);
      ___cxa_guard_release(0x1136d5560);
    }
  }
  pbVar8 = abStack_578;
  func_0x000107715980();
  func_0x000107717368();
  if ((bool)in_ZR) {
    func_0x0001077164f4();
    if ((*pbVar8 & 1) == 0) {
code_r0x0001076dccb8:
      uVar12 = 0;
code_r0x0001076dccbc:
      func_0x00010770ce5c();
code_r0x0001076dccc0:
      auStack_628[0] = uVar12;
      func_0x0001077123b4();
      uVar12 = SUB81(auStack_628,0);
      goto code_r0x0001076dccd0;
    }
    func_0x000107712404();
    iStack_430 = 0;
    func_0x0001077148ac(auStack_508);
    func_0x00010770c2cc();
    func_0x000107714838();
    if (iStack_430 == 0) {
      func_0x00010771bab4();
      func_0x00010771b528();
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    func_0x000107719a78(auStack_6a0);
    unaff_w23 = (int)auStack_508;
    func_0x000107719ce8(auStack_508);
    puVar13 = auStack_630;
    func_0x0001074b0ce4(puVar13,auStack_508);
    func_0x000107714838();
    func_0x000107715564();
    func_0x000107714830();
    func_0x0001077188a0();
    if ((bool)in_ZR) {
      func_0x00010771c3e8();
      func_0x0001077096ec();
      func_0x000107715f78();
      puVar9 = puVar13;
      if (!(bool)in_ZR) goto code_r0x0001076dc7d0;
      func_0x00010771551c();
      puVar9 = puVar13;
      func_0x000104c32db4();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000107714b98();
        if ((int)puVar9 != 0) {
          func_0x00010771bab4();
          goto code_r0x0001076dc920;
        }
        iStack_4a0 = 0;
        func_0x00010770f44c();
        func_0x00010770c2cc();
        func_0x000107714838();
        if (iStack_4a0 == 0) {
          uStack_638 = 0;
          func_0x00010770d70c();
          func_0x00010770c290();
          func_0x000107714838();
          if (uStack_638 == 0) {
            func_0x00010771ac0c();
            func_0x00010770c290();
            func_0x000107714838();
          }
          func_0x00010770c3f4();
          func_0x00010771a780();
          if ((bool)in_ZR) {
            func_0x000107718c7c();
            func_0x000107718d94();
            unaff_w25 = 0;
            func_0x00010770eb54();
            func_0x000107714860();
            func_0x000107714898();
            if ((bool)in_ZR) {
              func_0x000107714870();
              unaff_w25 = 0;
              func_0x00010770c494(puVar9);
              func_0x00010770cdcc();
              if (iStack_4a0 == 0) {
                func_0x00010771bab4();
                func_0x000107717e0c();
                func_0x00010770cce0();
                func_0x000107714888();
              }
              func_0x000107714860();
              func_0x000107714858();
              func_0x000107714838();
              func_0x000107714848();
              goto code_r0x0001076dcae8;
            }
            goto code_r0x0001076dc8f8;
          }
          func_0x00010770b88c();
          goto code_r0x0001076dc8f0;
        }
code_r0x0001076dcae8:
        func_0x00010770c4e8();
        puVar14 = (undefined1 *)(ulong)uStack_638;
        if (uStack_638 != 3) {
          func_0x00010770b940();
          goto code_r0x0001076dc8d0;
        }
        func_0x000107716cbc();
        func_0x000107717538();
        goto code_r0x0001076dc8d8;
      }
code_r0x0001076dc920:
      func_0x000107717538();
code_r0x0001076dc924:
      func_0x0001077178bc();
      func_0x000107717e84();
      func_0x0001077128fc();
      uVar12 = SUB81(puVar9,0);
      if (((ulong)puVar9 & 1) == 0) {
        uVar11 = 0;
        puVar14 = (undefined1 *)0x6;
      }
      else {
        func_0x0001077148ac(auStack_508);
        func_0x000107718200();
        puVar9 = auStack_508;
        func_0x00010771878c();
        uVar12 = SUB81(puVar9,0);
        if (((ulong)puVar9 & 1) == 0) {
          func_0x00010770d70c();
          func_0x000107717e34();
          unaff_w23 = (int)auStack_710;
          func_0x0001077100f8();
          func_0x0001077111a8();
          func_0x000107714838();
        }
        else {
          puVar13 = (undefined1 *)0x1;
        }
        func_0x00010770ccbc();
        func_0x00010770f8e4();
        uVar11 = 6;
        if (((ulong)puVar13 & 1) == 0) {
          uVar11 = 0;
        }
        puVar14 = (undefined1 *)(ulong)uVar11;
        uVar11 = (uint)puVar13 ^ 1;
      }
      func_0x000107714ad4();
      func_0x0001077157a8();
    }
    else {
      iStack_430 = 0;
      puVar9 = puVar13;
code_r0x0001076dc7d0:
      iStack_4a0 = 0;
      func_0x00010770f44c();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_4a0 == 0) {
        uStack_638 = 0;
        func_0x00010770d70c();
        func_0x00010770c290();
        func_0x000107714838();
        if (uStack_638 == 0) {
          func_0x00010771ac0c();
          func_0x00010770c290();
          func_0x000107714838();
        }
        func_0x00010770c3f4();
        func_0x00010771a780();
        if ((bool)in_ZR) {
          func_0x000107718c7c();
          func_0x000107718d94();
          unaff_w25 = 0;
          func_0x00010770eb54();
          func_0x000107714860();
          func_0x000107714898();
          if ((bool)in_ZR) {
            func_0x000107714870();
            unaff_w25 = 0;
            func_0x00010770c494(puVar9);
            func_0x00010770cdcc();
            if (iStack_4a0 == 0) {
              func_0x00010771bab4();
              func_0x000107717e0c();
              func_0x00010770cce0();
              func_0x000107714888();
            }
            func_0x000107714860();
            func_0x000107714858();
            func_0x000107714838();
            func_0x000107714848();
            goto code_r0x0001076dc7f8;
          }
        }
        else {
          func_0x00010770b88c();
code_r0x0001076dc8f0:
          func_0x00010770d3a4();
          func_0x0001077150e4();
        }
code_r0x0001076dc8f8:
        uVar12 = SUB81(puVar9,0);
        puVar14 = auStack_6a0;
        unaff_w23 = (int)auStack_710;
        func_0x000107714838();
        func_0x000107714848();
        func_0x000107714830();
      }
      else {
code_r0x0001076dc7f8:
        func_0x00010770c4e8();
        puVar14 = (undefined1 *)(ulong)uStack_638;
        if (uStack_638 == 3) {
          func_0x000107716cbc();
          func_0x000107717538();
        }
        else {
          func_0x00010770b940();
code_r0x0001076dc8d0:
          func_0x00010770eccc();
          func_0x000107715720();
        }
code_r0x0001076dc8d8:
        unaff_w23 = (int)auStack_6a0;
        puVar13 = (undefined1 *)0x0;
        func_0x000107714838();
        func_0x000107714830();
        uVar12 = SUB81(puVar9,0);
        if ((int)puVar14 == 3) goto code_r0x0001076dc924;
      }
      uVar11 = 0;
      func_0x000107716450();
    }
    func_0x00010770c23c();
    func_0x000107712f24();
    func_0x000107715514();
    in_ZR = (int)puVar14 == 6;
    if (((bool)in_ZR) || ((int)puVar14 == 0)) {
      if ((uVar11 & 1) == 0) goto code_r0x0001076dccb8;
      uVar12 = SUB81(auStack_630,0);
      func_0x00010770c394();
      func_0x000107719040();
      if ((bool)in_ZR) {
        iStack_430 = 0;
        func_0x0001077148ac(auStack_508);
        unaff_w23 = (int)auStack_498;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_430 == 0) {
          uStack_500 = 0;
          iStack_4a0 = 2;
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        cVar3 = SBORROW4(iStack_4a0,2);
        cVar4 = iStack_4a0 + -2 < 0;
        uVar5 = iStack_4a0 == 2;
        if ((bool)uVar5) {
          func_0x0001077172c0();
          func_0x00010771d798();
          func_0x00010771f2a0();
          func_0x00010771aed8(param_1,param_2,0xc0e5180000000000);
          if (cVar4 == cVar3) {
            uVar12 = SUB81(auStack_6a0,0);
            func_0x00010770c394();
            func_0x000107719cf0();
            if ((bool)uVar5) {
              iStack_6a8 = 0;
              func_0x0001077148ac(auStack_780);
              func_0x00010770c184();
              func_0x000107714850();
              if (iStack_6a8 == 0) {
                uStack_778 = 0;
                func_0x00010771945c();
                func_0x00010770c184();
                func_0x000107714850();
              }
              func_0x00010770c1c4();
              uVar2 = 1 < uStack_718;
              uVar5 = uStack_718 == 2;
              if ((bool)uVar5) {
                func_0x000107718208();
                func_0x000107718d8c();
                func_0x00010771f2a0();
                func_0x00010771aed8(param_1,param_2,0x40bc200000000000);
                unaff_w25 = !(bool)uVar2 || (bool)uVar5;
                uVar11 = 0;
                if ((bool)uVar2 && !(bool)uVar5) {
                  uVar11 = 4;
                }
                puVar14 = (undefined1 *)(ulong)uVar11;
              }
              else {
                func_0x00010770caec();
                func_0x0001077106ec();
                func_0x0001077157a8();
                func_0x000107716f48();
              }
              func_0x000107714850();
              func_0x000107714890();
            }
            else {
              func_0x000107714934();
              func_0x00010770ecfc();
              func_0x00010770eccc();
              func_0x000107715720();
              func_0x000107716f48();
            }
            func_0x00010770ccbc();
          }
          else {
            unaff_w25 = 0;
            puVar14 = (undefined1 *)0x4;
          }
        }
        else {
          func_0x000107714934();
          uVar12 = SUB81(auStack_6a0,0);
          func_0x000107717278();
          func_0x00010770e000();
          func_0x000107715564();
          func_0x000107716f48();
        }
        func_0x000107714830();
        func_0x000107714838();
      }
      else {
        func_0x0001077131a4();
        func_0x0001077156d0();
        func_0x00010770dd34();
        func_0x000107714bc8();
        func_0x000107716f48();
      }
      func_0x00010770d2c4();
    }
    else {
      unaff_w25 = 1;
    }
    if (((ulong)puVar14 & 3) == 0) {
      in_ZR = 1;
      if ((unaff_w25 & 1) == 0) goto code_r0x0001076dccb8;
      uVar12 = 1;
      goto code_r0x0001076dccbc;
    }
    func_0x00010770ce5c();
    in_ZR = (int)puVar14 == 2;
    if ((bool)in_ZR) {
      uVar12 = 1;
      goto code_r0x0001076dccc0;
    }
  }
  else {
    func_0x0001077148b4();
    func_0x0001077158f8(auStack_630);
    func_0x00010770edcc();
    func_0x000107716338();
    uVar12 = SUB81(auStack_570,0);
code_r0x0001076dccd0:
    func_0x00010726af18();
  }
  func_0x000107708038();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5560);
  func_0x000107714988();
  puVar7 = &DAT_1076dd1b4;
  func_0x00010771cb48();
  pppuStack_7f0 = &ppuStack_3c0;
  puStack_7e8 = puVar7;
  func_0x000107707aa0();
  if ((bRam00000001136d5568 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5568;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708e10(0x113719c00);
      puVar7 = (undefined *)0x1136d5568;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5570 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5570;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708bb0(0x113719c38);
      puVar7 = (undefined *)0x1136d5570;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5578 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5578;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708de0(0x113719c70);
      puVar7 = (undefined *)0x1136d5578;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5580 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5580;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708dc0(0x113719ca8);
      puVar7 = (undefined *)0x1136d5580;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5588 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5588;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708dd0(0x113719ce0);
      puVar7 = (undefined *)0x1136d5588;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5590 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5590;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708e00(0x113719d18);
      puVar7 = (undefined *)0x1136d5590;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5598 & 1) == 0) {
    puVar7 = (undefined *)0x1136d5598;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708df0(0x113719d50);
      puVar7 = (undefined *)0x1136d5598;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55a0 & 1) == 0) {
    puVar7 = (undefined *)0x1136d55a0;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x000107708db0(0x113719d88);
      puVar7 = (undefined *)0x1136d55a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55a8 & 1) == 0) {
    puVar7 = (undefined *)0x1136d55a8;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x00010770d04c(0x113719dc0);
      puVar7 = (undefined *)0x1136d55a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55b0 & 1) == 0) {
    puVar7 = (undefined *)0x1136d55b0;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x0001077095a0(0x113719df8);
      puVar7 = (undefined *)0x1136d55b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55b8 & 1) == 0) {
    puVar7 = (undefined *)0x1136d55b8;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x0001077098bc(0x113719e30);
      puVar7 = (undefined *)0x1136d55b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55c0 & 1) == 0) {
    puVar7 = (undefined *)0x1136d55c0;
    ___cxa_guard_acquire();
    if ((int)puVar7 != 0) {
      func_0x00010770b448(0x113719e68);
      puVar7 = (undefined *)0x1136d55c0;
      ___cxa_guard_release();
    }
  }
  func_0x000107712404();
  iStack_840 = 0;
  func_0x00010770f7dc();
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_840 == 0) {
    func_0x00010771ba9c();
    func_0x000107716320();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107715120(auStack_a40);
  func_0x000107717a28();
  func_0x000107719fa0();
  func_0x000107714830();
  func_0x000107715564();
  func_0x000107714850();
  func_0x0001077188a0();
  if (!(bool)in_ZR) {
    iStack_840 = 0;
    puVar10 = puVar7;
code_r0x0001076dd328:
    iStack_8b0 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_8b0 == 0) {
      iStack_9d8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_a40;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_9d8 == 0) {
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
        uVar5 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(puVar10);
          func_0x00010770c430();
          if (iStack_8b0 == 0) {
            func_0x00010771ba9c();
            func_0x000107713e80();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076dd34c;
        }
      }
      else {
        func_0x00010770b88c();
        uVar5 = in_ZR;
code_r0x0001076dd43c:
        func_0x00010770d3a4();
        func_0x0001077150e4();
      }
code_r0x0001076dd444:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      in_ZR = uVar5;
    }
    else {
code_r0x0001076dd34c:
      func_0x00010770c260();
      func_0x00010771c430();
      if ((bool)in_ZR) {
        func_0x000107716cbc();
        func_0x000107717538();
      }
      else {
        func_0x00010770b940();
code_r0x0001076dd41c:
        func_0x00010770eccc();
        func_0x000107715720();
      }
code_r0x0001076dd424:
      puVar7 = (undefined *)0x0;
      func_0x000107714830();
      func_0x000107714850();
      in_ZR = unaff_w23 == 3;
      if ((bool)in_ZR) goto code_r0x0001076dd470;
    }
    puVar7 = (undefined *)0x0;
    func_0x0001077193a8();
    goto code_r0x0001076dd500;
  }
  func_0x00010771c3e8();
  func_0x000107707ee8();
  func_0x000107715018();
  puVar10 = puVar7;
  if (!(bool)in_ZR) goto code_r0x0001076dd328;
  func_0x000107714bc0();
  puVar10 = puVar7;
  func_0x000104c32db4();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000107714c8c();
    if ((int)puVar10 != 0) {
      func_0x00010771ba9c();
      goto code_r0x0001076dd46c;
    }
    iStack_8b0 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_8b0 == 0) {
      iStack_9d8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_a40;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_9d8 == 0) {
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
        uVar5 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(puVar10);
          func_0x00010770c430();
          if (iStack_8b0 == 0) {
            func_0x00010771ba9c();
            func_0x000107713e80();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076dd558;
        }
        goto code_r0x0001076dd444;
      }
      func_0x00010770b88c();
      uVar5 = in_ZR;
      goto code_r0x0001076dd43c;
    }
code_r0x0001076dd558:
    func_0x00010770c260();
    func_0x00010771c430();
    if (!(bool)in_ZR) {
      func_0x00010770b940();
      goto code_r0x0001076dd41c;
    }
    func_0x000107716cbc();
    func_0x000107717538();
    goto code_r0x0001076dd424;
  }
code_r0x0001076dd46c:
  func_0x000107717538();
code_r0x0001076dd470:
  func_0x0001077178bc();
  func_0x000107717e84();
  func_0x0001077128fc();
  if (((ulong)puVar10 & 1) == 0) {
code_r0x0001076dd4f4:
    func_0x00010771a924();
  }
  else {
    func_0x00010770f7dc();
    func_0x000107718200();
    puVar13 = auStack_918;
    func_0x00010771878c();
    if (((ulong)puVar13 & 1) != 0) {
      func_0x00010770ccbc();
      func_0x00010770ce5c();
      goto code_r0x0001076dd4f4;
    }
    func_0x00010770d70c();
    func_0x000107717e34();
    puVar7 = (undefined *)0x0;
    func_0x0001077100f8();
    uVar12 = SUB81(puVar13,0);
    func_0x000107714830();
    func_0x000107714850();
    func_0x00010770ccbc();
    func_0x00010770ce5c();
    if (((ulong)puVar13 & 1) != 0) goto code_r0x0001076dd4f4;
    func_0x00010771fd28();
  }
  func_0x000107714ad4();
  func_0x0001077157a8();
code_r0x0001076dd500:
  func_0x00010770c324();
  func_0x000107714f40();
  func_0x000107715514();
  if (((ulong)puVar7 & 1) == 0) {
    uStack_9c8 = uVar12;
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



/* Entry: 1076ddc48; end: 1076ddf97;  */

void FUN_1076ddc48(double param_1,undefined8 param_2,double param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double unaff_d8;
  double unaff_d9;
  undefined1 auStack_e8 [104];
  int iStack_80;
  undefined8 auStack_78 [13];
  int iStack_10;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  func_0x00010771a3d8();
  func_0x000107707ae4();
  if ((bRam00000001136d55d8 & 1) == 0) {
    iVar4 = 0x136d55d8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a1d0(0x113719f10);
      ___cxa_guard_release(0x1136d55d8);
    }
  }
  if ((bRam00000001136d55e0 & 1) == 0) {
    iVar4 = 0x136d55e0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a514(0x113719f48);
      ___cxa_guard_release(0x1136d55e0);
    }
  }
  if ((bRam00000001136d55e8 & 1) == 0) {
    iVar4 = 0x136d55e8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770b67c(0x113719f80);
      ___cxa_guard_release(0x1136d55e8);
    }
  }
  func_0x00010770c394(auStack_78);
  cVar1 = SBORROW4(iStack_10,2);
  cVar2 = iStack_10 + -2 < 0;
  uVar3 = iStack_10 == 2;
  if (!(bool)uVar3) {
    func_0x000107714934();
    func_0x000107714fc4(auStack_e8);
    goto LAB_1076ddd08;
  }
  puVar5 = auStack_78;
  func_0x0001072cb4bc();
  func_0x00010770d7b4();
  if ((bool)cVar1) goto LAB_1076ddef4;
  func_0x000107712d18();
  if ((cVar2 != cVar1) && (func_0x000107713270(), !(bool)cVar2)) {
    func_0x0001077162e4();
    if ((bool)cVar2) {
      uVar6 = 0xc1400000;
      uVar7 = 0;
      func_0x00010770996c();
      func_0x00010770b36c();
      if ((!(bool)uVar3) && (func_0x000107713e04(), !(bool)uVar3)) {
        func_0x00010770b398();
LAB_1076ddd38:
        unaff_d8 = param_1 + param_3 * (double)CONCAT44(uVar7,uVar6);
      }
    }
    else {
      func_0x000107708e54();
      func_0x000107709630();
      func_0x00010771a8b8();
      if (!(bool)uVar3) {
        func_0x000107715190();
        unaff_d8 = 1.0;
        if (!(bool)uVar3) {
          func_0x00010770bae8();
          goto LAB_1076ddd38;
        }
      }
    }
  }
  iStack_80 = 0;
  func_0x000107710134();
  func_0x00010770c51c();
  func_0x000107714850();
  if (iStack_80 == 0) {
    func_0x0001077155d0();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x00010771a774();
  if (!(bool)uVar3) {
    func_0x00010770b800();
    func_0x00010770dfa4();
    func_0x000107715378();
    goto LAB_1076dde4c;
  }
  func_0x00010770ee48();
  func_0x00010770c2e4();
  func_0x000107714848();
  func_0x00010770d364();
  func_0x00010770d410();
  func_0x000107714890();
  func_0x00010770c454();
  func_0x0001077150c8();
  if ((bool)uVar3) {
    func_0x000107718e18();
    func_0x000107714dd4();
    func_0x00010770bfc8(*puVar5);
    if ((bool)cVar1) {
      func_0x00010770d0b8();
      goto LAB_1076dde3c;
    }
    func_0x00010770ffac();
    if ((cVar2 != cVar1) && (func_0x00010770ff84(), !(bool)cVar2)) {
      func_0x000107709778();
      func_0x00010770b600();
      if (!(bool)uVar3) {
        func_0x0001077176e4();
        unaff_d9 = 2.0;
        if (!(bool)uVar3) {
          func_0x000107709f90();
        }
      }
    }
    uVar3 = unaff_d9 == unaff_d8;
    if (unaff_d8 <= unaff_d9) {
      unaff_d9 = unaff_d8;
    }
    func_0x000107707784(unaff_d9);
    func_0x000107714890();
  }
  else {
    func_0x000107707df4();
LAB_1076dde3c:
    func_0x00010770c460();
    func_0x000107714ad4();
  }
  func_0x000107714848();
  func_0x000107714838();
LAB_1076dde4c:
  func_0x000107714850();
  func_0x000107714830();
  while( true ) {
    func_0x00010770c3d0();
    func_0x000107707d28();
    if ((bool)uVar3) break;
    ___stack_chk_fail();
LAB_1076ddef4:
    func_0x000107715230();
    func_0x000100060964(auStack_e8);
LAB_1076ddd08:
    func_0x000107714880();
    func_0x000107715fdc();
  }
  return;
}



/* Entry: 1076e67b4; end: 1076e7553;  */

void FUN_1076e67b4(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  int unaff_w23;
  int unaff_w24;
  int iStack_3e8;
  undefined1 auStack_300 [112];
  undefined1 auStack_290 [112];
  undefined1 auStack_220 [104];
  int iStack_1b8;
  undefined4 uStack_148;
  int iStack_90;
  undefined1 auStack_88 [104];
  int iStack_20;
  
  func_0x0001077184d0();
  func_0x000107707a30();
  func_0x0001077083d4();
  iStack_20 = 0;
  func_0x00010770989c();
  func_0x00010770c2cc();
  func_0x000107714838();
  if (iStack_20 == 0) {
    func_0x000107718548();
    func_0x00010770ddac();
    func_0x00010770c2cc();
    func_0x000107714838();
  }
  func_0x000107719a78(auStack_220);
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077096ec();
    func_0x000107715f78();
    if (!(bool)in_ZR) goto LAB_1076e6864;
    func_0x00010771551c();
    func_0x00010771da2c();
    if (((ulong)param_1 & 1) == 0) {
      func_0x000107714b98();
      if ((int)param_1 != 0) {
        func_0x000107718548();
        goto LAB_1076e6980;
      }
      iStack_90 = 0;
      func_0x00010771ef00();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      if (iStack_90 == 0) {
        iStack_1b8 = 0;
        func_0x00010771eef4();
        func_0x000107708fa0();
        func_0x000107708f90();
        func_0x000107714838();
        if (iStack_1b8 == 0) {
          func_0x000107718548();
          func_0x00010770ceb0();
          func_0x00010770c290();
          func_0x000107714838();
        }
        func_0x00010770c3f4();
        func_0x0001077154a0();
        if ((bool)in_ZR) {
          func_0x000107715044();
          func_0x00010771eee8();
          func_0x00010771503c();
          func_0x000107707e98();
          func_0x000107714860();
          func_0x0001077150bc();
          if ((bool)in_ZR) {
            func_0x000107714c84();
            func_0x000107707ec0();
            func_0x00010770cdcc();
            if (iStack_90 == 0) {
              func_0x000107718548();
              func_0x00010770cea4();
              func_0x00010770cce0();
              func_0x000107714888();
            }
            func_0x000107714860();
            func_0x00010770c3b8();
            func_0x000107714838();
            func_0x000107714848();
            goto LAB_1076e6c30;
          }
          goto LAB_1076e6960;
        }
        func_0x000107707e58();
        goto LAB_1076e6958;
      }
LAB_1076e6c30:
      func_0x00010770c4e8();
      func_0x0001077154c0();
      if (!(bool)in_ZR) {
        func_0x000107707e6c();
        goto LAB_1076e6938;
      }
      func_0x000107714f50();
      func_0x000107714d34();
      goto LAB_1076e6940;
    }
LAB_1076e6980:
    func_0x000107714d34();
LAB_1076e6984:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076e698c:
    func_0x000107714830();
  }
  else {
    iStack_20 = 0;
LAB_1076e6864:
    iStack_90 = 0;
    func_0x00010771ef00();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    if (iStack_90 == 0) {
      iStack_1b8 = 0;
      func_0x00010771eef4();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      if (iStack_1b8 == 0) {
        func_0x000107718548();
        func_0x00010770ceb0();
        func_0x00010770c290();
        func_0x000107714838();
      }
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771eee8();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          if (iStack_90 == 0) {
            func_0x000107718548();
            func_0x00010770cea4();
            func_0x00010770cce0();
            func_0x000107714888();
          }
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          goto LAB_1076e6880;
        }
      }
      else {
        func_0x000107707e58();
LAB_1076e6958:
        func_0x00010770dd7c();
        func_0x000107714ed0();
      }
LAB_1076e6960:
      unaff_w23 = (int)auStack_290;
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076e698c;
    }
LAB_1076e6880:
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076e6938:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076e6940:
    unaff_w23 = (int)auStack_220;
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076e6984;
  }
  func_0x00010770c23c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  uVar2 = iStack_3e8 == 1;
  if ((bool)uVar2) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar2) goto LAB_1076e6a6c;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if ((int)param_1 == 0) {
      func_0x000107716ac8();
      if ((int)param_1 != 0) {
        func_0x0001077170a4();
        func_0x000107710774();
        func_0x00010770d76c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107710774();
        func_0x00010770d76c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107710774();
        func_0x000107714954();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        unaff_w23 = (int)auStack_88;
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107715dec(*param_1);
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      iVar3 = (int)param_1;
      if (iVar3 != 0) {
        func_0x0001077170a4();
        func_0x0001072ddd58(auStack_88,0x11371b950);
        puVar4 = auStack_300;
        func_0x0001072baf4c(puVar4,0x11371be58);
        func_0x000107714aa8(puVar4 + 8);
        func_0x0001077148e8();
        func_0x000107717ef4();
        func_0x0001072ddd58();
        func_0x00010770c85c();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x000107713894();
        func_0x0001077197b4();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x498;
        if ((bool)uVar2) {
          uVar1 = 0x70;
        }
        func_0x00010770df8c(uVar1);
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      unaff_w23 = 0x1371be58;
      if (iVar3 != 0) {
        func_0x0001077170a4();
        func_0x000107715d6c();
        func_0x000107718c9c();
        func_0x00010770c880();
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010771280c();
        puVar4 = auStack_300;
        func_0x0001072baf4c(puVar4,0x11371bec8);
        func_0x00010770c388();
        func_0x000107714848();
        func_0x000107710774();
        func_0x0001077197c0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        unaff_w23 = (int)auStack_88;
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107715dec(*puVar4);
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      if (iVar3 != 0) {
        func_0x0001077170a4();
        func_0x00010770d964();
        func_0x000107714954();
        func_0x00010770c200();
        func_0x000107714838();
        puVar4 = auStack_88;
        func_0x0001072ddd58(puVar4,0x11371bfe0);
        func_0x00010770c85c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107710774();
        func_0x0001077197c0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        unaff_w23 = 0x1371be58;
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107715dec(*puVar4);
        func_0x00010771502c();
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      if (iVar3 != 0) {
        func_0x0001077170a4();
        func_0x00010771280c();
        func_0x0001077197cc();
        func_0x00010770c388();
        func_0x000107714848();
        unaff_w23 = 0x1371ba68;
        func_0x00010771280c();
        func_0x0001072baf4c(auStack_300,0x11371bec8);
        func_0x00010770c388();
        func_0x000107714848();
        func_0x00010771520c();
        func_0x00010771687c();
        func_0x00010771d8f0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x498;
        if ((bool)uVar2) {
          uVar1 = 0x700;
        }
        func_0x00010770df8c(uVar1);
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      if (iVar3 != 0) {
        func_0x0001077170a4();
        func_0x000107717ef4();
        func_0x0001072ddd58();
        func_0x00010770c880();
        func_0x00010770c874();
        func_0x000107714860();
        func_0x00010771520c();
        func_0x0001072ddd58();
        func_0x00010770c85c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x00010771687c(auStack_88);
        func_0x00010771d8f0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x498;
        if ((bool)uVar2) {
          uVar1 = 0x700;
        }
        func_0x00010770df8c(uVar1);
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      if (iVar3 != 0) {
        func_0x0001077170a4();
        func_0x000107713894();
        func_0x0001077197b4();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x498;
        if ((bool)uVar2) {
          uVar1 = 0x70;
        }
        func_0x00010770df8c(uVar1);
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107716ac8();
      if (iVar3 == 0) {
        func_0x0001077170a4();
        func_0x00010771520c();
        func_0x0001072ddd58();
        func_0x00010770f090();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707f34();
        func_0x00010770c67c();
        func_0x000107714838();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107715494();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076e6b08;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x8c0;
        if ((bool)uVar2) {
          uVar1 = 0x888;
        }
        func_0x00010770df8c(uVar1);
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x0001077170a4();
      func_0x000107717ef4();
      func_0x0001072ddd58();
      func_0x00010770c880();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x0001072ddd58(auStack_88,0x11371c168);
      func_0x00010770c85c();
      func_0x00010770c874();
      func_0x000107714860();
      func_0x000107713894();
      func_0x0001077197b4();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107707abc();
      iStack_20 = 0;
      func_0x000107707f34();
      func_0x00010770c67c();
      func_0x000107714838();
      if (iStack_20 == 0) {
        func_0x000107707428();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x000107715494();
      if ((bool)uVar2) {
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x498;
        if ((bool)uVar2) {
          uVar1 = 0x70;
        }
        func_0x00010770df8c(uVar1);
        func_0x000107708f10();
        func_0x00010770c66c();
        goto LAB_1076e6ae4;
      }
      func_0x000107707ad0();
      goto LAB_1076e6b08;
    }
    func_0x0001077170a4();
    func_0x00010771280c();
    func_0x00010770d610();
    func_0x00010770c388();
    func_0x000107714848();
    func_0x000107707abc();
    iStack_20 = 0;
    func_0x000107707f34();
    func_0x00010770c67c();
    func_0x000107714838();
    if (iStack_20 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107715494();
    unaff_w23 = 0x1371bd08;
    if (!(bool)uVar2) {
      func_0x000107707ad0();
      goto LAB_1076e6b08;
    }
    func_0x0001077149e4();
    func_0x000107713204();
    uVar1 = 0x498;
    if ((bool)uVar2) {
      uVar1 = extraout_x8;
    }
    func_0x00010770df8c(uVar1);
    func_0x000107708f10();
    func_0x00010770c66c();
  }
  else {
    uStack_148 = 0;
LAB_1076e6a6c:
    func_0x0001077170a4();
    func_0x00010771520c();
    func_0x0001072ddd58();
    func_0x00010770f090();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    iStack_20 = 0;
    func_0x000107707f34();
    func_0x00010770c67c();
    func_0x000107714838();
    if (iStack_20 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107715494();
    if (!(bool)uVar2) {
      func_0x000107707ad0();
LAB_1076e6b08:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076e6b10;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar1 = 0x8c0;
    if ((bool)uVar2) {
      uVar1 = 0x888;
    }
    func_0x00010770df8c(uVar1);
    func_0x000107708f10();
    func_0x00010770c66c();
  }
LAB_1076e6ae4:
  func_0x00010770c4c4();
  func_0x000107714830();
  func_0x00010770d8f8();
  func_0x0001077077f4();
  func_0x000107714878();
  func_0x000107714830();
  func_0x000107715718();
LAB_1076e6b10:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar2 = unaff_w23 == 1;
  if ((bool)uVar2) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107708038();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010770d9b8();
    func_0x000107714850();
    func_0x00010770c23c();
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



/* Entry: 1076eb990; end: 1076ece5b;  */

/* WARNING: Possible PIC construction at 0x0001076ebce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076ebdd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076ebce8) */
/* WARNING: Removing unreachable block (ram,0x0001076ebcf0) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd80) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd10) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd90) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd1c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd24) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd34) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd44) */
/* WARNING: Removing unreachable block (ram,0x0001076ebd64) */
/* WARNING: Removing unreachable block (ram,0x0001076ebda0) */
/* WARNING: Removing unreachable block (ram,0x0001076ebda4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebda8) */
/* WARNING: Removing unreachable block (ram,0x0001076ebdb4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebdcc) */
/* WARNING: Removing unreachable block (ram,0x0001076ebdd4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebddc) */
/* WARNING: Removing unreachable block (ram,0x0001076ebde4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebdf4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe78) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe04) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe88) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe10) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe18) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe28) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe38) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe5c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe98) */
/* WARNING: Removing unreachable block (ram,0x0001076ebe9c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebea0) */
/* WARNING: Removing unreachable block (ram,0x0001076ebeac) */
/* WARNING: Removing unreachable block (ram,0x0001076ebebc) */
/* WARNING: Removing unreachable block (ram,0x0001076ebecc) */
/* WARNING: Removing unreachable block (ram,0x0001076ebed4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebee4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebef4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebefc) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf0c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf1c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf30) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf3c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf58) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf44) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf5c) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf68) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf78) */
/* WARNING: Removing unreachable block (ram,0x0001076ebf80) */
/* WARNING: Removing unreachable block (ram,0x0001076ebfa0) */
/* WARNING: Removing unreachable block (ram,0x0001076ebfb4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebfc4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebfd4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebfdc) */
/* WARNING: Removing unreachable block (ram,0x0001076ebfe4) */
/* WARNING: Removing unreachable block (ram,0x0001076ebff4) */
/* WARNING: Removing unreachable block (ram,0x0001076ec004) */
/* WARNING: Removing unreachable block (ram,0x0001076ec00c) */
/* WARNING: Removing unreachable block (ram,0x0001076ec01c) */
/* WARNING: Removing unreachable block (ram,0x0001076ec02c) */
/* WARNING: Removing unreachable block (ram,0x0001076ec040) */
/* WARNING: Removing unreachable block (ram,0x0001076ec04c) */
/* WARNING: Removing unreachable block (ram,0x0001076ec068) */
/* WARNING: Removing unreachable block (ram,0x0001076ec054) */
/* WARNING: Removing unreachable block (ram,0x0001076ec06c) */
/* WARNING: Removing unreachable block (ram,0x0001076ec078) */
/* WARNING: Removing unreachable block (ram,0x0001076ec088) */
/* WARNING: Removing unreachable block (ram,0x0001076ec0b0) */
/* WARNING: Removing unreachable block (ram,0x0001076ec0bc) */
/* WARNING: Removing unreachable block (ram,0x0001076ec0d8) */
/* WARNING: Removing unreachable block (ram,0x0001076ec0c4) */
/* WARNING: Removing unreachable block (ram,0x0001076ec0dc) */
/* WARNING: Removing unreachable block (ram,0x0001076ec0e0) */
/* WARNING: Removing unreachable block (ram,0x0001076ec9d8) */
/* WARNING: Removing unreachable block (ram,0x0001076ecd08) */
/* WARNING: Removing unreachable block (ram,0x0001076ece58) */
/* WARNING: Removing unreachable block (ram,0x0001076ec108) */

void FUN_1076eb990(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  uint extraout_w8;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d5d98 & 1) == 0) {
    param_1 = 0x1136d5d98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x11371d4a8);
      param_1 = 0x1136d5d98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5da0 & 1) == 0) {
    param_1 = 0x1136d5da0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x11371d4e0);
      param_1 = 0x1136d5da0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5da8 & 1) == 0) {
    param_1 = 0x1136d5da8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x11371d518);
      param_1 = 0x1136d5da8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5db0 & 1) == 0) {
    param_1 = 0x1136d5db0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x11371d550);
      param_1 = 0x1136d5db0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5db8 & 1) == 0) {
    param_1 = 0x1136d5db8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x11371d588);
      param_1 = 0x1136d5db8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5dc0 & 1) == 0) {
    param_1 = 0x1136d5dc0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x11371d5c0);
      param_1 = 0x1136d5dc0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5dc8 & 1) == 0) {
    param_1 = 0x1136d5dc8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x11371d5f8);
      param_1 = 0x1136d5dc8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5dd0 & 1) == 0) {
    param_1 = 0x1136d5dd0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x11371d630);
      param_1 = 0x1136d5dd0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5dd8 & 1) == 0) {
    param_1 = 0x1136d5dd8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x11371d668);
      param_1 = 0x1136d5dd8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5de0 & 1) == 0) {
    param_1 = 0x1136d5de0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x11371d6a0);
      param_1 = 0x1136d5de0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5de8 & 1) == 0) {
    param_1 = 0x1136d5de8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x11371d6d8);
      param_1 = 0x1136d5de8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5df0 & 1) == 0) {
    param_1 = 0x1136d5df0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x11371d710);
      param_1 = 0x1136d5df0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5df8 & 1) == 0) {
    param_1 = 0x1136d5df8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x11371d748);
      param_1 = 0x1136d5df8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e00 & 1) == 0) {
    param_1 = 0x1136d5e00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x11371d780);
      param_1 = 0x1136d5e00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e08 & 1) == 0) {
    param_1 = 0x1136d5e08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x11371d7b8);
      param_1 = 0x1136d5e08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e10 & 1) == 0) {
    param_1 = 0x1136d5e10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x11371d7f0);
      param_1 = 0x1136d5e10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e18 & 1) == 0) {
    param_1 = 0x1136d5e18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x11371d828);
      param_1 = 0x1136d5e18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e20 & 1) == 0) {
    param_1 = 0x1136d5e20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x11371d860);
      param_1 = 0x1136d5e20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e28 & 1) == 0) {
    param_1 = 0x1136d5e28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x11371d898);
      param_1 = 0x1136d5e28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e30 & 1) == 0) {
    param_1 = 0x1136d5e30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x11371d8d0);
      param_1 = 0x1136d5e30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e38 & 1) == 0) {
    param_1 = 0x1136d5e38;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x11371d908);
      param_1 = 0x1136d5e38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e40 & 1) == 0) {
    param_1 = 0x1136d5e40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x11371d940);
      param_1 = 0x1136d5e40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e48 & 1) == 0) {
    param_1 = 0x1136d5e48;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x11371d978);
      param_1 = 0x1136d5e48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e50 & 1) == 0) {
    param_1 = 0x1136d5e50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x11371d9b0);
      param_1 = 0x1136d5e50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e58 & 1) == 0) {
    param_1 = 0x1136d5e58;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x11371d9e8);
      param_1 = 0x1136d5e58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e60 & 1) == 0) {
    param_1 = 0x1136d5e60;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x11371da20);
      param_1 = 0x1136d5e60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e68 & 1) == 0) {
    param_1 = 0x1136d5e68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x11371da58);
      param_1 = 0x1136d5e68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e70 & 1) == 0) {
    param_1 = 0x1136d5e70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x11371da90);
      param_1 = 0x1136d5e70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e78 & 1) == 0) {
    param_1 = 0x1136d5e78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x11371dac8);
      param_1 = 0x1136d5e78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e80 & 1) == 0) {
    param_1 = 0x1136d5e80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x11371db00);
      param_1 = 0x1136d5e80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e88 & 1) == 0) {
    param_1 = 0x1136d5e88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x11371db38);
      param_1 = 0x1136d5e88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e90 & 1) == 0) {
    param_1 = 0x1136d5e90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x11371db70);
      param_1 = 0x1136d5e90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5e98 & 1) == 0) {
    param_1 = 0x1136d5e98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x11371dba8);
      param_1 = 0x1136d5e98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ea0 & 1) == 0) {
    param_1 = 0x1136d5ea0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x11371dbe0);
      param_1 = 0x1136d5ea0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ea8 & 1) == 0) {
    param_1 = 0x1136d5ea8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x11371dc18);
      param_1 = 0x1136d5ea8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5eb0 & 1) == 0) {
    param_1 = 0x1136d5eb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x11371dc50);
      param_1 = 0x1136d5eb0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5eb8 & 1) == 0) {
    param_1 = 0x1136d5eb8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x11371dc88);
      param_1 = 0x1136d5eb8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ec0 & 1) == 0) {
    param_1 = 0x1136d5ec0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x11371dcc0);
      param_1 = 0x1136d5ec0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ec8 & 1) == 0) {
    param_1 = 0x1136d5ec8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x11371dcf8);
      param_1 = 0x1136d5ec8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ed0 & 1) == 0) {
    param_1 = 0x1136d5ed0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x11371dd30);
      param_1 = 0x1136d5ed0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ed8 & 1) == 0) {
    param_1 = 0x1136d5ed8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x11371dd68);
      param_1 = 0x1136d5ed8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ee0 & 1) == 0) {
    param_1 = 0x1136d5ee0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a990(0x11371dda0);
      param_1 = 0x1136d5ee0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ee8 & 1) == 0) {
    param_1 = 0x1136d5ee8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x11371ddd8);
      param_1 = 0x1136d5ee8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ef0 & 1) == 0) {
    param_1 = 0x1136d5ef0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x11371de10);
      param_1 = 0x1136d5ef0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5ef8 & 1) == 0) {
    param_1 = 0x1136d5ef8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x11371de48);
      param_1 = 0x1136d5ef8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5f00 & 1) == 0) {
    param_1 = 0x1136d5f00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x11371de80);
      param_1 = 0x1136d5f00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5f08 & 1) == 0) {
    param_1 = 0x1136d5f08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x11371deb8);
      param_1 = 0x1136d5f08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5f10 & 1) == 0) {
    param_1 = 0x1136d5f10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x11371def0);
      param_1 = 0x1136d5f10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5f18 & 1) == 0) {
    param_1 = 0x1136d5f18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x11371df28);
      param_1 = 0x1136d5f18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5f20 & 1) == 0) {
    param_1 = 0x1136d5f20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x11371df60);
      param_1 = 0x1136d5f20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5f28 & 1) == 0) {
    param_1 = 0x1136d5f28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x11371df98);
      param_1 = 0x1136d5f28;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x00010771853c();
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
  uVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar3 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076ecefc;
    func_0x000107714bc0();
    uVar3 = param_1;
    func_0x00010771d8cc();
    unaff_x21 = param_1;
    if ((uVar3 & 1) != 0) {
code_r0x0001076ed020:
      func_0x000107714da8();
code_r0x0001076ed024:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar3 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)in_ZR) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076ed084;
    }
    func_0x000107714c8c();
    if ((int)uVar3 != 0) {
      func_0x00010771853c();
      goto code_r0x0001076ed020;
    }
    func_0x00010771edd0();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771edc4();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x00010771853c();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771edb8();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x00010771853c();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto code_r0x0001076ecfd0;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076ecfd8;
      }
      goto code_r0x0001076ecff8;
    }
    func_0x000107707eac();
    uVar2 = in_ZR;
code_r0x0001076ecff0:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076ecff8:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  else {
code_r0x0001076ecefc:
    func_0x00010771edd0();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771edc4();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x00010771853c();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar2 = in_ZR;
      goto code_r0x0001076ecff0;
    }
    func_0x000107714cc4();
    func_0x00010771edb8();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076ecff8;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x00010771853c();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076ecfd0:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076ecfd8:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076ed024;
  }
  func_0x000107715758();
code_r0x0001076ed084:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
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



/* Entry: 1076f05c0; end: 1076f1a3f;  */

/* WARNING: Possible PIC construction at 0x0001076f0904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076f09f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076f0908) */
/* WARNING: Removing unreachable block (ram,0x0001076f0910) */
/* WARNING: Removing unreachable block (ram,0x0001076f09a0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0930) */
/* WARNING: Removing unreachable block (ram,0x0001076f09b0) */
/* WARNING: Removing unreachable block (ram,0x0001076f093c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0944) */
/* WARNING: Removing unreachable block (ram,0x0001076f0954) */
/* WARNING: Removing unreachable block (ram,0x0001076f0964) */
/* WARNING: Removing unreachable block (ram,0x0001076f0984) */
/* WARNING: Removing unreachable block (ram,0x0001076f09c0) */
/* WARNING: Removing unreachable block (ram,0x0001076f09c4) */
/* WARNING: Removing unreachable block (ram,0x0001076f09c8) */
/* WARNING: Removing unreachable block (ram,0x0001076f09d4) */
/* WARNING: Removing unreachable block (ram,0x0001076f09ec) */
/* WARNING: Removing unreachable block (ram,0x0001076f09f4) */
/* WARNING: Removing unreachable block (ram,0x0001076f09fc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a04) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a14) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a98) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a24) */
/* WARNING: Removing unreachable block (ram,0x0001076f0aa8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a30) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a38) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a48) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a58) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a7c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ab8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0abc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ac0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0acc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0adc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0aec) */
/* WARNING: Removing unreachable block (ram,0x0001076f0af4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b04) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b14) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b1c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b2c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b3c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b50) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b5c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b78) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b64) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b7c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b88) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b98) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ba0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bc0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bd4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0be4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bf4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bfc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c04) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c14) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c24) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c2c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c3c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c4c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c60) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c6c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c88) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c74) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c8c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c98) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ca8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cd0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cdc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cf8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ce4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cfc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0d00) */
/* WARNING: Removing unreachable block (ram,0x0001076f15cc) */
/* WARNING: Removing unreachable block (ram,0x0001076f18ec) */
/* WARNING: Removing unreachable block (ram,0x0001076f1a3c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0d28) */

void FUN_1076f05c0(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d60c8 & 1) == 0) {
    param_1 = 0x1136d60c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x11371eaf8);
      param_1 = 0x1136d60c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60d0 & 1) == 0) {
    param_1 = 0x1136d60d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x11371eb30);
      param_1 = 0x1136d60d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60d8 & 1) == 0) {
    param_1 = 0x1136d60d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x11371eb68);
      param_1 = 0x1136d60d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60e0 & 1) == 0) {
    param_1 = 0x1136d60e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x11371eba0);
      param_1 = 0x1136d60e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60e8 & 1) == 0) {
    param_1 = 0x1136d60e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x11371ebd8);
      param_1 = 0x1136d60e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60f0 & 1) == 0) {
    param_1 = 0x1136d60f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x11371ec10);
      param_1 = 0x1136d60f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60f8 & 1) == 0) {
    param_1 = 0x1136d60f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x11371ec48);
      param_1 = 0x1136d60f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6100 & 1) == 0) {
    param_1 = 0x1136d6100;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x11371ec80);
      param_1 = 0x1136d6100;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6108 & 1) == 0) {
    param_1 = 0x1136d6108;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x11371ecb8);
      param_1 = 0x1136d6108;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6110 & 1) == 0) {
    param_1 = 0x1136d6110;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x11371ecf0);
      param_1 = 0x1136d6110;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6118 & 1) == 0) {
    param_1 = 0x1136d6118;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x11371ed28);
      param_1 = 0x1136d6118;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6120 & 1) == 0) {
    param_1 = 0x1136d6120;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x11371ed60);
      param_1 = 0x1136d6120;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6128 & 1) == 0) {
    param_1 = 0x1136d6128;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x11371ed98);
      param_1 = 0x1136d6128;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6130 & 1) == 0) {
    param_1 = 0x1136d6130;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x11371edd0);
      param_1 = 0x1136d6130;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6138 & 1) == 0) {
    param_1 = 0x1136d6138;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x11371ee08);
      param_1 = 0x1136d6138;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6140 & 1) == 0) {
    param_1 = 0x1136d6140;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x11371ee40);
      param_1 = 0x1136d6140;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6148 & 1) == 0) {
    param_1 = 0x1136d6148;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x11371ee78);
      param_1 = 0x1136d6148;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6150 & 1) == 0) {
    param_1 = 0x1136d6150;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x11371eeb0);
      param_1 = 0x1136d6150;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6158 & 1) == 0) {
    param_1 = 0x1136d6158;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x11371eee8);
      param_1 = 0x1136d6158;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6160 & 1) == 0) {
    param_1 = 0x1136d6160;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x11371ef20);
      param_1 = 0x1136d6160;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6168 & 1) == 0) {
    param_1 = 0x1136d6168;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x11371ef58);
      param_1 = 0x1136d6168;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6170 & 1) == 0) {
    param_1 = 0x1136d6170;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x11371ef90);
      param_1 = 0x1136d6170;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6178 & 1) == 0) {
    param_1 = 0x1136d6178;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x11371efc8);
      param_1 = 0x1136d6178;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6180 & 1) == 0) {
    param_1 = 0x1136d6180;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x11371f000);
      param_1 = 0x1136d6180;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6188 & 1) == 0) {
    param_1 = 0x1136d6188;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x11371f038);
      param_1 = 0x1136d6188;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6190 & 1) == 0) {
    param_1 = 0x1136d6190;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x11371f070);
      param_1 = 0x1136d6190;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6198 & 1) == 0) {
    param_1 = 0x1136d6198;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x11371f0a8);
      param_1 = 0x1136d6198;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61a0 & 1) == 0) {
    param_1 = 0x1136d61a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x11371f0e0);
      param_1 = 0x1136d61a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61a8 & 1) == 0) {
    param_1 = 0x1136d61a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x11371f118);
      param_1 = 0x1136d61a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61b0 & 1) == 0) {
    param_1 = 0x1136d61b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x11371f150);
      param_1 = 0x1136d61b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61b8 & 1) == 0) {
    param_1 = 0x1136d61b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x11371f188);
      param_1 = 0x1136d61b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61c0 & 1) == 0) {
    param_1 = 0x1136d61c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x11371f1c0);
      param_1 = 0x1136d61c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61c8 & 1) == 0) {
    param_1 = 0x1136d61c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x11371f1f8);
      param_1 = 0x1136d61c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61d0 & 1) == 0) {
    param_1 = 0x1136d61d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x11371f230);
      param_1 = 0x1136d61d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61d8 & 1) == 0) {
    param_1 = 0x1136d61d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x11371f268);
      param_1 = 0x1136d61d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61e0 & 1) == 0) {
    param_1 = 0x1136d61e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x11371f2a0);
      param_1 = 0x1136d61e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61e8 & 1) == 0) {
    param_1 = 0x1136d61e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x11371f2d8);
      param_1 = 0x1136d61e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61f0 & 1) == 0) {
    param_1 = 0x1136d61f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x11371f310);
      param_1 = 0x1136d61f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61f8 & 1) == 0) {
    param_1 = 0x1136d61f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x11371f348);
      param_1 = 0x1136d61f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6200 & 1) == 0) {
    param_1 = 0x1136d6200;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x11371f380);
      param_1 = 0x1136d6200;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6208 & 1) == 0) {
    param_1 = 0x1136d6208;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x11371f3b8);
      param_1 = 0x1136d6208;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6210 & 1) == 0) {
    param_1 = 0x1136d6210;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x11371f3f0);
      param_1 = 0x1136d6210;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6218 & 1) == 0) {
    param_1 = 0x1136d6218;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x11371f428);
      param_1 = 0x1136d6218;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6220 & 1) == 0) {
    param_1 = 0x1136d6220;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x11371f460);
      param_1 = 0x1136d6220;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6228 & 1) == 0) {
    param_1 = 0x1136d6228;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x11371f498);
      param_1 = 0x1136d6228;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6230 & 1) == 0) {
    param_1 = 0x1136d6230;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x11371f4d0);
      param_1 = 0x1136d6230;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6238 & 1) == 0) {
    param_1 = 0x1136d6238;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x11371f508);
      param_1 = 0x1136d6238;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6240 & 1) == 0) {
    param_1 = 0x1136d6240;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x11371f540);
      param_1 = 0x1136d6240;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6248 & 1) == 0) {
    param_1 = 0x1136d6248;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x11371f578);
      param_1 = 0x1136d6248;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6250 & 1) == 0) {
    param_1 = 0x1136d6250;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x11371f5b0);
      param_1 = 0x1136d6250;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x00010771ecc8();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x000107716964();
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
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076f1ad8;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x000107717508();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771ecb0();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
        func_0x000107716964();
        goto code_r0x0001076f1bf4;
      }
      func_0x00010771a5f4();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a5e8();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x000107716964();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a5dc();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076f1bd0;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x000107716964();
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
          goto code_r0x0001076f1ba8;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076f1bb0;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076f1bc8;
    }
    func_0x00010771cfb4();
code_r0x0001076f1bf4:
    func_0x000107715434();
code_r0x0001076f1bf8:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771ecc8();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x000107716964();
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
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076f1c94;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x000107717508();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771ecb0();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
            func_0x000107716964();
            goto code_r0x0001076f1df0;
          }
          func_0x00010771a5f4();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a5e8();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x000107716964();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a5dc();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x000107716964();
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
                goto code_r0x0001076f1d68;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076f1d70;
            }
            goto code_r0x0001076f1dcc;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076f1dc4;
        }
        func_0x00010771cfb4();
code_r0x0001076f1df0:
        func_0x0001077154cc();
code_r0x0001076f1df4:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771ecc8();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x000107716964();
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
            if (!(bool)in_ZR) goto code_r0x0001076f1e90;
            func_0x000107714bc0();
            uVar4 = uVar5;
            func_0x000107717508();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771ecb0();
              func_0x000107714c8c();
              if (iVar3 != 0) {
                func_0x000107716964();
                goto code_r0x0001076f208c;
              }
              func_0x00010771a5f4();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a5e8();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x000107716964();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a5dc();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x000107716964();
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
                    goto code_r0x0001076f1ffc;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076f2004;
                }
                goto code_r0x0001076f2068;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076f2060;
            }
            func_0x00010771cfb4();
code_r0x0001076f208c:
            func_0x000107715370();
code_r0x0001076f2090:
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
code_r0x0001076f1e90:
            func_0x00010771a5f4();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a5e8();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x000107716964();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a5dc();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076f2068;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x000107716964();
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
code_r0x0001076f1ffc:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076f2004:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076f2090;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076f2060:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076f2068:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
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
code_r0x0001076f1c94:
        func_0x00010771a5f4();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a5e8();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x000107716964();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a5dc();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076f1dcc;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x000107716964();
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
code_r0x0001076f1d68:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076f1d70:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076f1df4;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076f1dc4:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076f1dcc:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
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
    goto code_r0x0001076f20dc;
  }
code_r0x0001076f1ad8:
  func_0x00010771a5f4();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a5e8();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x000107716964();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a5dc();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076f1bd0;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x000107716964();
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
code_r0x0001076f1ba8:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076f1bb0:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076f1bf8;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076f1bc8:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076f1bd0:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076f20dc:
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



/* Entry: 1076f5ddc; end: 1076f725b;  */

/* WARNING: Possible PIC construction at 0x0001076f6120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076f6214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076f6124) */
/* WARNING: Removing unreachable block (ram,0x0001076f612c) */
/* WARNING: Removing unreachable block (ram,0x0001076f61bc) */
/* WARNING: Removing unreachable block (ram,0x0001076f614c) */
/* WARNING: Removing unreachable block (ram,0x0001076f61cc) */
/* WARNING: Removing unreachable block (ram,0x0001076f6158) */
/* WARNING: Removing unreachable block (ram,0x0001076f6160) */
/* WARNING: Removing unreachable block (ram,0x0001076f6170) */
/* WARNING: Removing unreachable block (ram,0x0001076f6180) */
/* WARNING: Removing unreachable block (ram,0x0001076f61a0) */
/* WARNING: Removing unreachable block (ram,0x0001076f61dc) */
/* WARNING: Removing unreachable block (ram,0x0001076f61e0) */
/* WARNING: Removing unreachable block (ram,0x0001076f61e4) */
/* WARNING: Removing unreachable block (ram,0x0001076f61f0) */
/* WARNING: Removing unreachable block (ram,0x0001076f6208) */
/* WARNING: Removing unreachable block (ram,0x0001076f6210) */
/* WARNING: Removing unreachable block (ram,0x0001076f6218) */
/* WARNING: Removing unreachable block (ram,0x0001076f6220) */
/* WARNING: Removing unreachable block (ram,0x0001076f6230) */
/* WARNING: Removing unreachable block (ram,0x0001076f62b4) */
/* WARNING: Removing unreachable block (ram,0x0001076f6240) */
/* WARNING: Removing unreachable block (ram,0x0001076f62c4) */
/* WARNING: Removing unreachable block (ram,0x0001076f624c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6254) */
/* WARNING: Removing unreachable block (ram,0x0001076f6264) */
/* WARNING: Removing unreachable block (ram,0x0001076f6274) */
/* WARNING: Removing unreachable block (ram,0x0001076f6298) */
/* WARNING: Removing unreachable block (ram,0x0001076f62d4) */
/* WARNING: Removing unreachable block (ram,0x0001076f62d8) */
/* WARNING: Removing unreachable block (ram,0x0001076f62dc) */
/* WARNING: Removing unreachable block (ram,0x0001076f62e8) */
/* WARNING: Removing unreachable block (ram,0x0001076f62f8) */
/* WARNING: Removing unreachable block (ram,0x0001076f6308) */
/* WARNING: Removing unreachable block (ram,0x0001076f6310) */
/* WARNING: Removing unreachable block (ram,0x0001076f6320) */
/* WARNING: Removing unreachable block (ram,0x0001076f6330) */
/* WARNING: Removing unreachable block (ram,0x0001076f6338) */
/* WARNING: Removing unreachable block (ram,0x0001076f6348) */
/* WARNING: Removing unreachable block (ram,0x0001076f6358) */
/* WARNING: Removing unreachable block (ram,0x0001076f636c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6378) */
/* WARNING: Removing unreachable block (ram,0x0001076f6394) */
/* WARNING: Removing unreachable block (ram,0x0001076f6380) */
/* WARNING: Removing unreachable block (ram,0x0001076f6398) */
/* WARNING: Removing unreachable block (ram,0x0001076f63a4) */
/* WARNING: Removing unreachable block (ram,0x0001076f63b4) */
/* WARNING: Removing unreachable block (ram,0x0001076f63bc) */
/* WARNING: Removing unreachable block (ram,0x0001076f63dc) */
/* WARNING: Removing unreachable block (ram,0x0001076f63f0) */
/* WARNING: Removing unreachable block (ram,0x0001076f6400) */
/* WARNING: Removing unreachable block (ram,0x0001076f6410) */
/* WARNING: Removing unreachable block (ram,0x0001076f6418) */
/* WARNING: Removing unreachable block (ram,0x0001076f6420) */
/* WARNING: Removing unreachable block (ram,0x0001076f6430) */
/* WARNING: Removing unreachable block (ram,0x0001076f6440) */
/* WARNING: Removing unreachable block (ram,0x0001076f6448) */
/* WARNING: Removing unreachable block (ram,0x0001076f6458) */
/* WARNING: Removing unreachable block (ram,0x0001076f6468) */
/* WARNING: Removing unreachable block (ram,0x0001076f647c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6488) */
/* WARNING: Removing unreachable block (ram,0x0001076f64a4) */
/* WARNING: Removing unreachable block (ram,0x0001076f6490) */
/* WARNING: Removing unreachable block (ram,0x0001076f64a8) */
/* WARNING: Removing unreachable block (ram,0x0001076f64b4) */
/* WARNING: Removing unreachable block (ram,0x0001076f64c4) */
/* WARNING: Removing unreachable block (ram,0x0001076f64ec) */
/* WARNING: Removing unreachable block (ram,0x0001076f64f8) */
/* WARNING: Removing unreachable block (ram,0x0001076f6514) */
/* WARNING: Removing unreachable block (ram,0x0001076f6500) */
/* WARNING: Removing unreachable block (ram,0x0001076f6518) */
/* WARNING: Removing unreachable block (ram,0x0001076f651c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6de8) */
/* WARNING: Removing unreachable block (ram,0x0001076f7108) */
/* WARNING: Removing unreachable block (ram,0x0001076f7258) */
/* WARNING: Removing unreachable block (ram,0x0001076f6544) */

void FUN_1076f5ddc(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d63e8 & 1) == 0) {
    param_1 = 0x1136d63e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x1137200d8);
      param_1 = 0x1136d63e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d63f0 & 1) == 0) {
    param_1 = 0x1136d63f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113720110);
      param_1 = 0x1136d63f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d63f8 & 1) == 0) {
    param_1 = 0x1136d63f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113720148);
      param_1 = 0x1136d63f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6400 & 1) == 0) {
    param_1 = 0x1136d6400;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113720180);
      param_1 = 0x1136d6400;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6408 & 1) == 0) {
    param_1 = 0x1136d6408;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x1137201b8);
      param_1 = 0x1136d6408;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6410 & 1) == 0) {
    param_1 = 0x1136d6410;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x1137201f0);
      param_1 = 0x1136d6410;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6418 & 1) == 0) {
    param_1 = 0x1136d6418;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113720228);
      param_1 = 0x1136d6418;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6420 & 1) == 0) {
    param_1 = 0x1136d6420;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113720260);
      param_1 = 0x1136d6420;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6428 & 1) == 0) {
    param_1 = 0x1136d6428;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x113720298);
      param_1 = 0x1136d6428;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6430 & 1) == 0) {
    param_1 = 0x1136d6430;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x1137202d0);
      param_1 = 0x1136d6430;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6438 & 1) == 0) {
    param_1 = 0x1136d6438;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113720308);
      param_1 = 0x1136d6438;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6440 & 1) == 0) {
    param_1 = 0x1136d6440;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113720340);
      param_1 = 0x1136d6440;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6448 & 1) == 0) {
    param_1 = 0x1136d6448;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x113720378);
      param_1 = 0x1136d6448;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6450 & 1) == 0) {
    param_1 = 0x1136d6450;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x1137203b0);
      param_1 = 0x1136d6450;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6458 & 1) == 0) {
    param_1 = 0x1136d6458;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x1137203e8);
      param_1 = 0x1136d6458;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6460 & 1) == 0) {
    param_1 = 0x1136d6460;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113720420);
      param_1 = 0x1136d6460;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6468 & 1) == 0) {
    param_1 = 0x1136d6468;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113720458);
      param_1 = 0x1136d6468;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6470 & 1) == 0) {
    param_1 = 0x1136d6470;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x113720490);
      param_1 = 0x1136d6470;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6478 & 1) == 0) {
    param_1 = 0x1136d6478;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x1137204c8);
      param_1 = 0x1136d6478;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6480 & 1) == 0) {
    param_1 = 0x1136d6480;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113720500);
      param_1 = 0x1136d6480;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6488 & 1) == 0) {
    param_1 = 0x1136d6488;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113720538);
      param_1 = 0x1136d6488;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6490 & 1) == 0) {
    param_1 = 0x1136d6490;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x113720570);
      param_1 = 0x1136d6490;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6498 & 1) == 0) {
    param_1 = 0x1136d6498;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x1137205a8);
      param_1 = 0x1136d6498;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64a0 & 1) == 0) {
    param_1 = 0x1136d64a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x1137205e0);
      param_1 = 0x1136d64a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64a8 & 1) == 0) {
    param_1 = 0x1136d64a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113720618);
      param_1 = 0x1136d64a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64b0 & 1) == 0) {
    param_1 = 0x1136d64b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x113720650);
      param_1 = 0x1136d64b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64b8 & 1) == 0) {
    param_1 = 0x1136d64b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113720688);
      param_1 = 0x1136d64b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64c0 & 1) == 0) {
    param_1 = 0x1136d64c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x1137206c0);
      param_1 = 0x1136d64c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64c8 & 1) == 0) {
    param_1 = 0x1136d64c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x1137206f8);
      param_1 = 0x1136d64c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64d0 & 1) == 0) {
    param_1 = 0x1136d64d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113720730);
      param_1 = 0x1136d64d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64d8 & 1) == 0) {
    param_1 = 0x1136d64d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113720768);
      param_1 = 0x1136d64d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64e0 & 1) == 0) {
    param_1 = 0x1136d64e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x1137207a0);
      param_1 = 0x1136d64e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64e8 & 1) == 0) {
    param_1 = 0x1136d64e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x1137207d8);
      param_1 = 0x1136d64e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64f0 & 1) == 0) {
    param_1 = 0x1136d64f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113720810);
      param_1 = 0x1136d64f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64f8 & 1) == 0) {
    param_1 = 0x1136d64f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113720848);
      param_1 = 0x1136d64f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6500 & 1) == 0) {
    param_1 = 0x1136d6500;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113720880);
      param_1 = 0x1136d6500;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6508 & 1) == 0) {
    param_1 = 0x1136d6508;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x1137208b8);
      param_1 = 0x1136d6508;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6510 & 1) == 0) {
    param_1 = 0x1136d6510;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x1137208f0);
      param_1 = 0x1136d6510;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6518 & 1) == 0) {
    param_1 = 0x1136d6518;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113720928);
      param_1 = 0x1136d6518;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6520 & 1) == 0) {
    param_1 = 0x1136d6520;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x113720960);
      param_1 = 0x1136d6520;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6528 & 1) == 0) {
    param_1 = 0x1136d6528;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113720998);
      param_1 = 0x1136d6528;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6530 & 1) == 0) {
    param_1 = 0x1136d6530;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x1137209d0);
      param_1 = 0x1136d6530;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6538 & 1) == 0) {
    param_1 = 0x1136d6538;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113720a08);
      param_1 = 0x1136d6538;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6540 & 1) == 0) {
    param_1 = 0x1136d6540;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113720a40);
      param_1 = 0x1136d6540;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6548 & 1) == 0) {
    param_1 = 0x1136d6548;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113720a78);
      param_1 = 0x1136d6548;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6550 & 1) == 0) {
    param_1 = 0x1136d6550;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113720ab0);
      param_1 = 0x1136d6550;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6558 & 1) == 0) {
    param_1 = 0x1136d6558;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113720ae8);
      param_1 = 0x1136d6558;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6560 & 1) == 0) {
    param_1 = 0x1136d6560;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113720b20);
      param_1 = 0x1136d6560;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6568 & 1) == 0) {
    param_1 = 0x1136d6568;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113720b58);
      param_1 = 0x1136d6568;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6570 & 1) == 0) {
    param_1 = 0x1136d6570;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x113720b90);
      param_1 = 0x1136d6570;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x00010771eb90();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x000107716958();
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
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076f72f4;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x00010771745c();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771eb84();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
        func_0x000107716958();
        goto code_r0x0001076f7410;
      }
      func_0x00010771a57c();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a570();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x000107716958();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a564();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076f73ec;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x000107716958();
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
          goto code_r0x0001076f73c4;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076f73cc;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076f73e4;
    }
    func_0x00010771cf54();
code_r0x0001076f7410:
    func_0x000107715434();
code_r0x0001076f7414:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771eb90();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x000107716958();
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
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076f74b0;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x00010771745c();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771eb84();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
            func_0x000107716958();
            goto code_r0x0001076f760c;
          }
          func_0x00010771a57c();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a570();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x000107716958();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a564();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x000107716958();
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
                goto code_r0x0001076f7584;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076f758c;
            }
            goto code_r0x0001076f75e8;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076f75e0;
        }
        func_0x00010771cf54();
code_r0x0001076f760c:
        func_0x0001077154cc();
code_r0x0001076f7610:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771eb90();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x000107716958();
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
            if (!(bool)in_ZR) goto code_r0x0001076f76ac;
            func_0x000107714bc0();
            uVar4 = uVar5;
            func_0x00010771745c();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771eb84();
              func_0x000107714c8c();
              if (iVar3 != 0) {
                func_0x000107716958();
                goto code_r0x0001076f78a8;
              }
              func_0x00010771a57c();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a570();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x000107716958();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a564();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x000107716958();
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
                    goto code_r0x0001076f7818;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076f7820;
                }
                goto code_r0x0001076f7884;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076f787c;
            }
            func_0x00010771cf54();
code_r0x0001076f78a8:
            func_0x000107715370();
code_r0x0001076f78ac:
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
code_r0x0001076f76ac:
            func_0x00010771a57c();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a570();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x000107716958();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a564();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076f7884;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x000107716958();
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
code_r0x0001076f7818:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076f7820:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076f78ac;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076f787c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076f7884:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
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
code_r0x0001076f74b0:
        func_0x00010771a57c();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a570();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x000107716958();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a564();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076f75e8;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x000107716958();
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
code_r0x0001076f7584:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076f758c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076f7610;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076f75e0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076f75e8:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
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
    goto code_r0x0001076f78f8;
  }
code_r0x0001076f72f4:
  func_0x00010771a57c();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a570();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x000107716958();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a564();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076f73ec;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x000107716958();
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
code_r0x0001076f73c4:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076f73cc:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076f7414;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076f73e4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076f73ec:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076f78f8:
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



/* Entry: 1076fb610; end: 1076fcadb;  */

/* WARNING: Possible PIC construction at 0x0001076fb964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076fba58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076fb968) */
/* WARNING: Removing unreachable block (ram,0x0001076fb970) */
/* WARNING: Removing unreachable block (ram,0x0001076fba00) */
/* WARNING: Removing unreachable block (ram,0x0001076fb990) */
/* WARNING: Removing unreachable block (ram,0x0001076fba10) */
/* WARNING: Removing unreachable block (ram,0x0001076fb99c) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9a4) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9b4) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9c4) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001076fba20) */
/* WARNING: Removing unreachable block (ram,0x0001076fba24) */
/* WARNING: Removing unreachable block (ram,0x0001076fba28) */
/* WARNING: Removing unreachable block (ram,0x0001076fba34) */
/* WARNING: Removing unreachable block (ram,0x0001076fba4c) */
/* WARNING: Removing unreachable block (ram,0x0001076fba54) */
/* WARNING: Removing unreachable block (ram,0x0001076fba5c) */
/* WARNING: Removing unreachable block (ram,0x0001076fba64) */
/* WARNING: Removing unreachable block (ram,0x0001076fba74) */
/* WARNING: Removing unreachable block (ram,0x0001076fbaf8) */
/* WARNING: Removing unreachable block (ram,0x0001076fba84) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb08) */
/* WARNING: Removing unreachable block (ram,0x0001076fba90) */
/* WARNING: Removing unreachable block (ram,0x0001076fba98) */
/* WARNING: Removing unreachable block (ram,0x0001076fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbab8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbadc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb18) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb1c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb20) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb3c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb4c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb54) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb64) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb74) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb7c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb8c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb9c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbd8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbc4) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbdc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbe8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbf8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc00) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc20) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc34) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc44) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc54) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc5c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc64) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc74) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc84) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc8c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc9c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcc0) */
/* WARNING: Removing unreachable block (ram,0x0001076fbccc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbce8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcd4) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcec) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcf8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd08) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd3c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd58) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd44) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd60) */
/* WARNING: Removing unreachable block (ram,0x0001076fc658) */
/* WARNING: Removing unreachable block (ram,0x0001076fc988) */
/* WARNING: Removing unreachable block (ram,0x0001076fcad8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd88) */

void FUN_1076fb610(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  uint extraout_w8;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d6708 & 1) == 0) {
    param_1 = 0x1136d6708;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x1137216b8);
      param_1 = 0x1136d6708;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6710 & 1) == 0) {
    param_1 = 0x1136d6710;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x1137216f0);
      param_1 = 0x1136d6710;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6718 & 1) == 0) {
    param_1 = 0x1136d6718;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113721728);
      param_1 = 0x1136d6718;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6720 & 1) == 0) {
    param_1 = 0x1136d6720;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113721760);
      param_1 = 0x1136d6720;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6728 & 1) == 0) {
    param_1 = 0x1136d6728;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x113721798);
      param_1 = 0x1136d6728;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6730 & 1) == 0) {
    param_1 = 0x1136d6730;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x1137217d0);
      param_1 = 0x1136d6730;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6738 & 1) == 0) {
    param_1 = 0x1136d6738;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113721808);
      param_1 = 0x1136d6738;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6740 & 1) == 0) {
    param_1 = 0x1136d6740;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113721840);
      param_1 = 0x1136d6740;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6748 & 1) == 0) {
    param_1 = 0x1136d6748;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x113721878);
      param_1 = 0x1136d6748;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6750 & 1) == 0) {
    param_1 = 0x1136d6750;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x1137218b0);
      param_1 = 0x1136d6750;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6758 & 1) == 0) {
    param_1 = 0x1136d6758;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x1137218e8);
      param_1 = 0x1136d6758;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6760 & 1) == 0) {
    param_1 = 0x1136d6760;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113721920);
      param_1 = 0x1136d6760;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6768 & 1) == 0) {
    param_1 = 0x1136d6768;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x113721958);
      param_1 = 0x1136d6768;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6770 & 1) == 0) {
    param_1 = 0x1136d6770;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x113721990);
      param_1 = 0x1136d6770;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6778 & 1) == 0) {
    param_1 = 0x1136d6778;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x1137219c8);
      param_1 = 0x1136d6778;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6780 & 1) == 0) {
    param_1 = 0x1136d6780;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113721a00);
      param_1 = 0x1136d6780;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6788 & 1) == 0) {
    param_1 = 0x1136d6788;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113721a38);
      param_1 = 0x1136d6788;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6790 & 1) == 0) {
    param_1 = 0x1136d6790;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x113721a70);
      param_1 = 0x1136d6790;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6798 & 1) == 0) {
    param_1 = 0x1136d6798;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x113721aa8);
      param_1 = 0x1136d6798;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67a0 & 1) == 0) {
    param_1 = 0x1136d67a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113721ae0);
      param_1 = 0x1136d67a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67a8 & 1) == 0) {
    param_1 = 0x1136d67a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113721b18);
      param_1 = 0x1136d67a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67b0 & 1) == 0) {
    param_1 = 0x1136d67b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x113721b50);
      param_1 = 0x1136d67b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67b8 & 1) == 0) {
    param_1 = 0x1136d67b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x113721b88);
      param_1 = 0x1136d67b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67c0 & 1) == 0) {
    param_1 = 0x1136d67c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113721bc0);
      param_1 = 0x1136d67c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67c8 & 1) == 0) {
    param_1 = 0x1136d67c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113721bf8);
      param_1 = 0x1136d67c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67d0 & 1) == 0) {
    param_1 = 0x1136d67d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x113721c30);
      param_1 = 0x1136d67d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67d8 & 1) == 0) {
    param_1 = 0x1136d67d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113721c68);
      param_1 = 0x1136d67d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67e0 & 1) == 0) {
    param_1 = 0x1136d67e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113721ca0);
      param_1 = 0x1136d67e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67e8 & 1) == 0) {
    param_1 = 0x1136d67e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113721cd8);
      param_1 = 0x1136d67e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67f0 & 1) == 0) {
    param_1 = 0x1136d67f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113721d10);
      param_1 = 0x1136d67f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67f8 & 1) == 0) {
    param_1 = 0x1136d67f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113721d48);
      param_1 = 0x1136d67f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6800 & 1) == 0) {
    param_1 = 0x1136d6800;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x113721d80);
      param_1 = 0x1136d6800;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6808 & 1) == 0) {
    param_1 = 0x1136d6808;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x113721db8);
      param_1 = 0x1136d6808;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6810 & 1) == 0) {
    param_1 = 0x1136d6810;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113721df0);
      param_1 = 0x1136d6810;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6818 & 1) == 0) {
    param_1 = 0x1136d6818;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113721e28);
      param_1 = 0x1136d6818;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6820 & 1) == 0) {
    param_1 = 0x1136d6820;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113721e60);
      param_1 = 0x1136d6820;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6828 & 1) == 0) {
    param_1 = 0x1136d6828;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113721e98);
      param_1 = 0x1136d6828;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6830 & 1) == 0) {
    param_1 = 0x1136d6830;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113721ed0);
      param_1 = 0x1136d6830;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6838 & 1) == 0) {
    param_1 = 0x1136d6838;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113721f08);
      param_1 = 0x1136d6838;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6840 & 1) == 0) {
    param_1 = 0x1136d6840;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x113721f40);
      param_1 = 0x1136d6840;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6848 & 1) == 0) {
    param_1 = 0x1136d6848;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113721f78);
      param_1 = 0x1136d6848;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6850 & 1) == 0) {
    param_1 = 0x1136d6850;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a990(0x113721fb0);
      param_1 = 0x1136d6850;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6858 & 1) == 0) {
    param_1 = 0x1136d6858;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113721fe8);
      param_1 = 0x1136d6858;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6860 & 1) == 0) {
    param_1 = 0x1136d6860;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113722020);
      param_1 = 0x1136d6860;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6868 & 1) == 0) {
    param_1 = 0x1136d6868;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113722058);
      param_1 = 0x1136d6868;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6870 & 1) == 0) {
    param_1 = 0x1136d6870;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113722090);
      param_1 = 0x1136d6870;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6878 & 1) == 0) {
    param_1 = 0x1136d6878;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x1137220c8);
      param_1 = 0x1136d6878;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6880 & 1) == 0) {
    param_1 = 0x1136d6880;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113722100);
      param_1 = 0x1136d6880;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6888 & 1) == 0) {
    param_1 = 0x1136d6888;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113722138);
      param_1 = 0x1136d6888;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6890 & 1) == 0) {
    param_1 = 0x1136d6890;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113722170);
      param_1 = 0x1136d6890;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6898 & 1) == 0) {
    param_1 = 0x1136d6898;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x1137221a8);
      param_1 = 0x1136d6898;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718040();
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
  uVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar3 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076fcb7c;
    func_0x000107714bc0();
    uVar3 = param_1;
    func_0x00010771d710();
    unaff_x21 = param_1;
    if ((uVar3 & 1) != 0) {
code_r0x0001076fcca0:
      func_0x000107714da8();
code_r0x0001076fcca4:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar3 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)in_ZR) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076fcd04;
    }
    func_0x000107714c8c();
    if ((int)uVar3 != 0) {
      func_0x000107718040();
      goto code_r0x0001076fcca0;
    }
    func_0x00010771eb3c();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eb30();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718040();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771eb24();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718040();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto code_r0x0001076fcc50;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076fcc58;
      }
      goto code_r0x0001076fcc78;
    }
    func_0x000107707eac();
    uVar2 = in_ZR;
code_r0x0001076fcc70:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076fcc78:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  else {
code_r0x0001076fcb7c:
    func_0x00010771eb3c();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eb30();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718040();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar2 = in_ZR;
      goto code_r0x0001076fcc70;
    }
    func_0x000107714cc4();
    func_0x00010771eb24();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076fcc78;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718040();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076fcc50:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076fcc58:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076fcca4;
  }
  func_0x000107715758();
code_r0x0001076fcd04:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
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



/* Entry: 107707344; end: 10771199b;  */

void FUN_107707344(void)

{
  return;
}



/* Entry: 107720f50; end: 107720fff;  */

void FUN_107720f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  *(ulong *)(param_1 + 8) = (*(ulong *)(param_1 + 8) ^ 0x73) * 0x100000001b3;
  __ZNSt3__19to_stringEm(&ppuStack_58,param_3);
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  func_0x0001077208dc(param_1,ppuStack_58,uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
  func_0x000107722384(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = extraout_x8;
  func_0x0001077208dc(param_1,param_2,param_3);
  return;
}



/* Entry: 1077218ac; end: 107721913;  */

void FUN_1077218ac(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x4;
  undefined8 *unaff_x22;
  
  func_0x000107722364();
  func_0x00010772186c();
  uVar2 = *in_x4;
  func_0x000107721788(uVar2,*unaff_x22);
  if ((int)uVar2 != 0) {
    uVar2 = *unaff_x22;
    *unaff_x22 = *in_x4;
    *in_x4 = uVar2;
    iVar1 = (int)*unaff_x22;
    func_0x00010772224c();
    if (((iVar1 != 0) && (func_0x00010772220c(), iVar1 != 0)) && (func_0x0001077221e8(), iVar1 != 0)
       ) {
      func_0x000107722324();
    }
  }
  return;
}



/* Entry: 107721c00; end: 107721c7b;  */

void FUN_107721c00(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
    func_0x000107327300(lVar3,lVar4);
    lVar3 = lVar3 + 0x10;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x10) {
    func_0x0001072f5f6c(lVar5);
  }
  *(long *)(param_2 + 8) = lVar1;
  lVar4 = *param_1;
  *param_1 = lVar1;
  param_1[1] = lVar4;
  func_0x0001077221b8();
  return;
}



/* Entry: 107721ed8; end: 107721edb;  */

void FUN_107721ed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d0df0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107721ff0; end: 107722053;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

long * FUN_107721ff0(undefined8 param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *plStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_110 [64];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)auStack_a0;
  func_0x0001077221a8(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x00010772216c(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x000107722338();
  func_0x000107296ad0();
  func_0x000107722204();
  puStack_a8 = &DAT_107722054;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(auStack_110);
  puStack_128 = &UNK_1074d24e8;
  plStack_138 = (long *)0x0;
  ppuStack_130 = &puStack_b0;
  func_0x0001073f26dc(&plStack_138,auStack_110);
  return plStack_138;
}



/* Entry: 10772246c; end: 1077224cb;  */

long FUN_10772246c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000107723514(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x20;
}



/* Entry: 107722e80; end: 1077230cf;  */

undefined1 * FUN_107722e80(double *param_1,double *param_2)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdStack_60;
  double *pdStack_58;
  
  switch(*(float *)(param_1 + 0xd)) {
  case 2.8026e-45:
    if (*(int *)(param_2 + 0xd) == 2) {
      func_0x0001072cb4bc();
      dVar12 = *param_1;
      func_0x0001072cb4bc();
      dVar14 = *param_2;
code_r0x000107722eec:
      if (dVar12 != dVar14) {
        bVar3 = false;
        if ((NAN(dVar12)) && (bVar3 = true, !NAN(dVar14))) {
          bVar3 = false;
        }
        if ((!bVar3) && (1e-12 < ABS(dVar12 - dVar14))) {
          dVar13 = ABS(dVar14);
          if (ABS(dVar14) <= ABS(dVar12)) {
            dVar13 = ABS(dVar12);
          }
          return (undefined1 *)(ulong)(ABS(dVar12 - dVar14) <= dVar13 * 1e-09);
        }
      }
      return (undefined1 *)0x1;
    }
    break;
  case 5.60519e-45:
    if (*(int *)(param_2 + 0xd) == 4) {
      func_0x000107438a0c();
      func_0x000107438a0c();
      pdVar8 = param_2;
      func_0x000107723aac((double)*(float *)param_1,*(undefined4 *)param_2);
      iVar4 = (int)pdVar8;
      if (iVar4 == 0) {
        return (undefined1 *)0x0;
      }
      func_0x000107723aac((double)*(float *)((long)param_1 + 4),*(undefined4 *)((long)param_2 + 4));
      if (iVar4 == 0) {
        return (undefined1 *)0x0;
      }
      func_0x000107723aac((double)*(float *)(param_1 + 1),*(undefined4 *)(param_2 + 1));
      if (iVar4 == 0) {
        return (undefined1 *)0x0;
      }
      dVar12 = (double)*(float *)((long)param_1 + 0xc);
      dVar14 = (double)*(float *)((long)param_2 + 0xc);
      goto code_r0x000107722eec;
    }
    break;
  case 1.12104e-44:
    if (*(int *)(param_2 + 0xd) == 8) {
      func_0x0001075725f8();
      func_0x0001075725f8();
      if (((long *)*param_1)[1] - *(long *)*param_1 != ((long *)*param_2)[1] - *(long *)*param_2) {
        return (undefined1 *)0x0;
      }
      uVar11 = 0xffffffffffffffff;
      lVar10 = 0;
      do {
        lVar1 = *(long *)*param_1;
        uVar11 = uVar11 + 1;
        if ((ulong)((((long *)*param_1)[1] - lVar1) / 0x70) <= uVar11) {
          return (undefined1 *)0x1;
        }
        uVar6 = lVar1 + lVar10;
        FUN_107722e80(uVar6,*(long *)*param_2 + lVar10);
        lVar10 = lVar10 + 0x70;
      } while ((uVar6 & 1) != 0);
      return (undefined1 *)0x0;
    }
    break;
  case 1.26117e-44:
    if (*(int *)(param_2 + 0xd) == 9) {
      pdVar8 = param_2;
      func_0x0001074d2730();
      func_0x0001074d2730();
      if (*(long *)((long)*param_1 + 0x18) != *(long *)((long)*param_2 + 0x18)) {
        return (undefined1 *)0x0;
      }
      func_0x000107348ee8();
      pdStack_60 = param_1;
      pdStack_58 = pdVar8;
      while( true ) {
        pdVar8 = pdStack_58;
        bVar3 = pdStack_60 == (double *)0x0;
        if (pdStack_60 == (double *)0x0) {
          return (undefined1 *)0x1;
        }
        pdVar7 = param_2;
        pdVar9 = pdStack_58;
        func_0x0001074d2700(param_2,pdStack_58);
        if (pdVar7 == (double *)0x0) break;
        pdVar8 = pdVar8 + 7;
        FUN_107722e80(pdVar8,pdVar9 + 7);
        if ((int)pdVar8 == 0) {
          return (undefined1 *)(ulong)bVar3;
        }
        func_0x0001072963cc(&pdStack_60);
      }
      return (undefined1 *)(ulong)bVar3;
    }
  }
  fVar2 = *(float *)(param_1 + 0xd);
  puVar5 = (undefined1 *)(ulong)(*(float *)(param_2 + 0xd) == fVar2);
  if (fVar2 != -NAN && *(float *)(param_2 + 0xd) == fVar2) {
    puVar5 = &stack0xffffffffffffffe8;
    (*(code *)(&PTR_DAT_1109b2590)[(uint)fVar2])(puVar5,param_1 + 1,param_2 + 1);
  }
  return puVar5;
}



/* Entry: 107723368; end: 10772338f;  */

void FUN_107723368(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10772348c; end: 1077234e3;  */

bool FUN_10772348c(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  
  if (param_1 != param_2) {
    bVar1 = false;
    if ((NAN(param_1)) && (bVar1 = true, !NAN(param_2))) {
      bVar1 = false;
    }
    if ((!bVar1) && (1e-12 < ABS(param_1 - param_2))) {
      dVar2 = ABS(param_2);
      if (ABS(param_2) <= ABS(param_1)) {
        dVar2 = ABS(param_1);
      }
      return ABS(param_1 - param_2) <= dVar2 * 1e-09;
    }
  }
  return true;
}



/* Entry: 107723a20; end: 107723ac7;  */

undefined8 * FUN_107723a20(long param_1)

{
  func_0x0001072c9b9c(param_1 + 0xb0);
  func_0x0001072c9c34(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001072c9884(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 107726c40; end: 107726d23;  */

undefined8 FUN_107726c40(void)

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
  undefined1 auStack_1430 [64];
  long lStack_13f0;
  undefined1 auStack_1360 [24];
  undefined4 uStack_1348;
  long lStack_1310;
  undefined1 auStack_1270 [64];
  long lStack_1230;
  undefined1 auStack_6d0 [64];
  undefined1 auStack_600 [64];
  
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
            *unaff_x19 = &PTR_DAT_1109d2c68;
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
                *puVar4 = &PTR_FUN_1109d2ce8;
                func_0x000107741cd0(&UNK_1077354ac);
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
                    FUN_1077753dc(auStack_600);
                    func_0x000107741d3c();
                    unaff_x20 = 0x113725598;
                    func_0x000107741810();
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742944();
                    func_0x00010774293c();
                    func_0x00010774291c();
                    *unaff_x19 = &PTR_DAT_1109d2d68;
                    func_0x000107741cd0(FUN_1077358e4);
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
                    FUN_1077753dc(auStack_6d0);
                    func_0x000107741d3c();
                    unaff_x20 = 0x1137255a8;
                    func_0x000107741810();
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742944();
                    func_0x00010774293c();
                    func_0x00010774291c();
                    *unaff_x19 = &PTR_FUN_1109d2da8;
                    func_0x000107741cd0(&UNK_107735b44);
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
                    *unaff_x19 = &PTR_DAT_1109d2de8;
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
                    *unaff_x19 = &PTR_FUN_1109d2e68;
                    func_0x000107741cd0(&UNK_10773610c);
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
                    func_0x000107741cd0(FUN_10773645c);
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
                    *unaff_x19 = &PTR_FUN_1109d2fe8;
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
                    *unaff_x19 = &PTR_DAT_1109d3028;
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
                    func_0x000107741cd0(0x107737668);
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
                lStack_1230 = unaff_x22;
                func_0x000107741ca8();
                if ((bRam0000000113725690 & 1) == 0) {
                  iVar2 = 0x13725690;
                  ___cxa_guard_acquire();
                  if (iVar2 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107742b9c();
                    func_0x000107742da0();
                    func_0x000107775500(auStack_1270);
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
                    func_0x000107741cd0(&UNK_107737910);
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
                lStack_1310 = unaff_x22;
                func_0x000107741ca8();
                lVar5 = 0;
                if ((bRam00000001137256a0 & 1) == 0) {
                  puVar4 = (undefined8 *)0x1137256a0;
                  ___cxa_guard_acquire();
                  if ((int)puVar4 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107775500(auStack_1360);
                    uStack_1348 = 3;
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
                    *puVar4 = &PTR_FUN_1109d3178;
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
                lStack_13f0 = lVar5;
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
                    func_0x000107775500(auStack_1430);
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
                    *unaff_x19 = &PTR_DAT_1109d31b8;
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
  return uVar3;
}



/* Entry: 107727340; end: 107727433;  */

undefined8 FUN_107727340(void)

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
  undefined1 auStack_dd0 [64];
  long lStack_d90;
  undefined1 auStack_d00 [24];
  undefined4 uStack_ce8;
  long lStack_cb0;
  undefined1 auStack_c10 [64];
  long lStack_bd0;
  undefined1 auStack_70 [64];
  
  func_0x000107741ca8();
  if ((bRam00000001137255b0 & 1) == 0) {
    iVar2 = 0x137255b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742334();
      FUN_1077753dc(auStack_70);
      func_0x000107741d3c();
      unaff_x20 = 0x1137255a8;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_FUN_1109d2da8;
      func_0x000107741cd0(&UNK_107735b44);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x1137255a8;
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
        *unaff_x19 = &PTR_DAT_1109d2de8;
        func_0x000107741cd0(&UNK_107735d78);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar3 = 0x1137255b8;
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
        uVar3 = 0x1137255c8;
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
            *unaff_x19 = &PTR_FUN_1109d2e68;
            func_0x000107741cd0(&UNK_10773610c);
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
          uVar3 = 0x1137255e8;
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
              func_0x000107741cd0(FUN_10773645c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            uVar3 = 0x1137255f8;
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
                    *unaff_x19 = &PTR_FUN_1109d2fe8;
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
                      *unaff_x19 = &PTR_DAT_1109d3028;
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
                          func_0x000107741cd0(0x107737668);
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
                      lStack_bd0 = unaff_x22;
                      func_0x000107741ca8();
                      if ((bRam0000000113725690 & 1) == 0) {
                        iVar2 = 0x13725690;
                        ___cxa_guard_acquire();
                        if (iVar2 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107742b9c();
                          func_0x000107742da0();
                          func_0x000107775500(auStack_c10);
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
                          func_0x000107741cd0(&UNK_107737910);
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
                      lStack_cb0 = unaff_x22;
                      func_0x000107741ca8();
                      lVar5 = 0;
                      if ((bRam00000001137256a0 & 1) == 0) {
                        puVar4 = (undefined8 *)0x1137256a0;
                        ___cxa_guard_acquire();
                        if ((int)puVar4 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107775500(auStack_d00);
                          uStack_ce8 = 3;
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
                          *puVar4 = &PTR_FUN_1109d3178;
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
                      lStack_d90 = lVar5;
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
                          func_0x000107775500(auStack_dd0);
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
                          *unaff_x19 = &PTR_DAT_1109d31b8;
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
          }
        }
      }
    }
  }
  return uVar3;
}



/* Entry: 107727a94; end: 107727b97;  */

undefined8 FUN_107727a94(void)

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
  undefined1 auStack_740 [64];
  long lStack_700;
  undefined1 auStack_670 [24];
  undefined4 uStack_658;
  long lStack_620;
  undefined1 auStack_580 [64];
  long lStack_540;
  
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
      *unaff_x19 = &PTR_FUN_1109d2fe8;
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
        *unaff_x19 = &PTR_DAT_1109d3028;
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
            func_0x000107741cd0(0x107737668);
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
        lStack_540 = unaff_x22;
        func_0x000107741ca8();
        if ((bRam0000000113725690 & 1) == 0) {
          iVar2 = 0x13725690;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742b9c();
            func_0x000107742da0();
            func_0x000107775500(auStack_580);
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
            func_0x000107741cd0(&UNK_107737910);
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
        lStack_620 = unaff_x22;
        func_0x000107741ca8();
        lVar5 = 0;
        if ((bRam00000001137256a0 & 1) == 0) {
          puVar4 = (undefined8 *)0x1137256a0;
          ___cxa_guard_acquire();
          if ((int)puVar4 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107775500(auStack_670);
            uStack_658 = 3;
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
            *puVar4 = &PTR_FUN_1109d3178;
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
        lStack_700 = lVar5;
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
            func_0x000107775500(auStack_740);
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
            *unaff_x19 = &PTR_DAT_1109d31b8;
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
  return uVar3;
}



/* Entry: 1077282a0; end: 1077283bf;  */

undefined8 FUN_1077282a0(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined1 auStack_70 [64];
  
  func_0x000107741ca8();
  if ((bRam00000001137256b0 & 1) == 0) {
    iVar2 = 0x137256b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742b9c();
      func_0x000107742da0();
      func_0x000107775500(auStack_70);
      func_0x000107741bb4();
      unaff_x20 = 0x1137256a8;
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
      *unaff_x19 = &PTR_DAT_1109d31b8;
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
    } while (unaff_x22 != 0);
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
  return uVar4;
}



/* Entry: 107729978; end: 107729a5f;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_107729978(undefined8 param_1,code *param_2)

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
  char **ppcStack_1a00;
  char **ppcStack_19f8;
  ulong *puStack_19f0;
  undefined8 ***pppuStack_19e8;
  undefined8 ***pppuStack_19e0;
  undefined *puStack_19d8;
  undefined8 **ppuStack_19d0;
  undefined1 auStack_19c8 [24];
  undefined8 **ppuStack_19b0;
  undefined8 **ppuStack_19a8;
  undefined8 uStack_19a0;
  undefined8 **ppuStack_1998;
  undefined8 **ppuStack_1990;
  undefined8 uStack_1988;
  undefined1 auStack_1980 [24];
  undefined8 **ppuStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  undefined8 ***pppuStack_1950;
  ulong uStack_1948;
  undefined8 uStack_1940;
  char *pcStack_1938;
  char *pcStack_1930;
  undefined8 uStack_1900;
  undefined8 ***pppuStack_18a0;
  undefined *puStack_1898;
  undefined1 auStack_1878 [120];
  undefined8 uStack_1800;
  undefined8 ***pppuStack_17e0;
  undefined *puStack_17d8;
  undefined8 uStack_1730;
  undefined8 ***pppuStack_1710;
  undefined *puStack_1708;
  undefined8 uStack_1660;
  undefined8 ***pppuStack_1640;
  undefined *puStack_1638;
  undefined8 uStack_15a0;
  undefined8 ***pppuStack_1580;
  undefined *puStack_1578;
  undefined8 uStack_14e0;
  undefined8 ***pppuStack_14c0;
  undefined *puStack_14b8;
  undefined8 uStack_1420;
  undefined8 ***pppuStack_1400;
  code *pcStack_13f8;
  undefined4 uStack_13d0;
  undefined8 uStack_1360;
  undefined8 ***pppuStack_1340;
  undefined *puStack_1338;
  undefined8 uStack_12a0;
  undefined8 ***pppuStack_1280;
  undefined *puStack_1278;
  undefined8 uStack_11d0;
  undefined8 ***pppuStack_11b0;
  undefined *puStack_11a8;
  undefined8 uStack_1100;
  undefined8 ***pppuStack_10e0;
  undefined *puStack_10d8;
  undefined8 uStack_1030;
  undefined8 ***pppuStack_1010;
  undefined *puStack_1008;
  undefined8 uStack_f50;
  undefined8 ***pppuStack_f30;
  undefined *puStack_f28;
  undefined8 uStack_e70;
  undefined8 ***pppuStack_e50;
  undefined *puStack_e48;
  undefined8 uStack_da0;
  undefined8 ***pppuStack_d80;
  code *pcStack_d78;
  undefined8 uStack_cd0;
  undefined8 ***pppuStack_cb0;
  undefined *puStack_ca8;
  undefined8 uStack_bf0;
  undefined8 ***pppuStack_bd0;
  undefined *puStack_bc8;
  undefined8 uStack_b10;
  undefined8 ***pppuStack_af0;
  undefined *puStack_ae8;
  undefined8 uStack_a40;
  undefined8 ***pppuStack_a20;
  undefined *puStack_a18;
  undefined8 uStack_970;
  undefined8 ***pppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_890;
  undefined8 ***pppuStack_870;
  undefined *puStack_868;
  undefined8 uStack_7b0;
  undefined8 ***pppuStack_790;
  undefined *puStack_788;
  undefined8 uStack_6e0;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_610;
  undefined8 ***pppuStack_5f0;
  undefined *puStack_5e8;
  undefined8 uStack_530;
  undefined8 ***pppuStack_510;
  undefined *puStack_508;
  undefined8 uStack_450;
  undefined8 ***pppuStack_430;
  undefined *puStack_428;
  undefined8 uStack_380;
  undefined8 ***pppuStack_360;
  undefined *puStack_358;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_290;
  undefined *puStack_288;
  undefined4 uStack_208;
  undefined1 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
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
      param_2 = FUN_10773cd4c;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3848;
      func_0x000107741cd0(&UNK_10773cb58);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    ppppuVar5 = (undefined8 ****)0x113725828;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725830);
    func_0x00010774297c();
    puStack_d8 = &DAT_107729a60;
    puStack_e0 = &stack0xfffffffffffffff0;
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
        param_2 = (code *)&UNK_10773d054;
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
      ppppuVar5 = (undefined8 ****)0x113725838;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725840);
      func_0x00010774297c();
      puStack_1a8 = &DAT_107729b48;
      ppuStack_1b0 = &puStack_e0;
      func_0x000107741ca8();
      if ((bRam0000000113725850 & 1) == 0) {
        iVar4 = 0x13725850;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          uStack_208 = 6;
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
      puStack_288 = &DAT_107729c54;
      uStack_2b0 = unaff_x22;
      pppuStack_290 = &ppuStack_1b0;
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
          func_0x000107741cd0(FUN_10773d4ac);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        ppppuVar5 = (undefined8 ****)0x113725858;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725860);
        func_0x00010774297c();
        puStack_358 = &DAT_107729d3c;
        uStack_380 = unaff_x22;
        pppuStack_360 = &pppuStack_290;
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
            param_2 = FUN_10773d774;
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3948;
            func_0x000107741cd0(&UNK_10773d6cc);
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
          puStack_428 = &DAT_107729e20;
          uStack_450 = unaff_x22;
          pppuStack_430 = &pppuStack_360;
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
              *unaff_x19 = &PTR_DAT_1109d3988;
              func_0x000107741cd0(&UNK_10773d928);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            ppppuVar5 = (undefined8 ****)0x113725878;
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
            puStack_508 = &DAT_107729f24;
            uStack_530 = unaff_x22;
            pppuStack_510 = &pppuStack_430;
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
              puStack_5e8 = &DAT_10772a028;
              uStack_610 = unaff_x22;
              pppuStack_5f0 = &pppuStack_510;
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
                  param_2 = FUN_10773ddd8;
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
              pcStack_6b8 = FUN_10772a110;
              uStack_6e0 = unaff_x22;
              pppuStack_6c0 = &pppuStack_5f0;
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
                  param_2 = (code *)&UNK_10773dfd8;
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
              puStack_788 = &DAT_10772a1f4;
              uStack_7b0 = unaff_x22;
              pppuStack_790 = &pppuStack_6c0;
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
              puStack_868 = &DAT_10772a2f8;
              uStack_890 = unaff_x22;
              pppuStack_870 = &pppuStack_790;
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
              puStack_948 = &DAT_10772a3fc;
              uStack_970 = unaff_x22;
              pppuStack_950 = &pppuStack_870;
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
                  param_2 = (code *)&UNK_10773e63c;
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
              puStack_a18 = &DAT_10772a4e4;
              uStack_a40 = unaff_x22;
              pppuStack_a20 = &pppuStack_950;
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
              puStack_ae8 = &DAT_10772a5c8;
              uStack_b10 = unaff_x22;
              pppuStack_af0 = &pppuStack_a20;
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
                  func_0x000107741cd0(FUN_10773e9f0);
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
              puStack_bc8 = &DAT_10772a6cc;
              uStack_bf0 = unaff_x22;
              pppuStack_bd0 = &pppuStack_af0;
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
                  *unaff_x19 = &PTR_FUN_1109d3bc8;
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
              puStack_ca8 = &DAT_10772a7d0;
              uStack_cd0 = unaff_x22;
              pppuStack_cb0 = &pppuStack_bd0;
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
              pcStack_d78 = FUN_10772a8b8;
              uStack_da0 = unaff_x22;
              pppuStack_d80 = &pppuStack_cb0;
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
                  func_0x000107741cd0(FUN_10773f04c);
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
              puStack_e48 = &DAT_10772a99c;
              uStack_e70 = unaff_x22;
              pppuStack_e50 = &pppuStack_d80;
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
                  *unaff_x19 = &PTR_FUN_1109d3c88;
                  func_0x000107741cd0(&UNK_10773f268);
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
              puStack_f28 = &DAT_10772aaa0;
              uStack_f50 = unaff_x22;
              pppuStack_f30 = &pppuStack_e50;
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
                  *unaff_x19 = &PTR_DAT_1109d3cc8;
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
              puStack_1008 = &DAT_10772aba4;
              uStack_1030 = unaff_x22;
              pppuStack_1010 = &pppuStack_f30;
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
              puStack_10d8 = &DAT_10772ac8c;
              uStack_1100 = unaff_x22;
              pppuStack_10e0 = &pppuStack_1010;
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
                  param_2 = FUN_10773f92c;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3d48;
                  func_0x000107741cd0(&UNK_10773f8c4);
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
              puStack_11a8 = &DAT_10772ad70;
              uStack_11d0 = unaff_x22;
              pppuStack_11b0 = &pppuStack_10e0;
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
                  param_2 = (code *)&UNK_10773fb34;
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
              puStack_1278 = &DAT_10772ae54;
              uStack_12a0 = unaff_x22;
              pppuStack_1280 = &pppuStack_11b0;
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
                puStack_1338 = &DAT_10772af1c;
                uStack_1360 = unaff_x22;
                pppuStack_1340 = &pppuStack_1280;
                func_0x000107741ca8();
                if ((bRam00000001137259a0 & 1) == 0) {
                  puVar6 = (undefined8 *)0x1137259a0;
                  ___cxa_guard_acquire();
                  if ((int)puVar6 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    uStack_13d0 = 2;
                    func_0x000107741c80(3);
                    param_2 = (code *)&UNK_10773ff94;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar6 = &PTR_DAT_1109d3e08;
                    func_0x000107741cd0(FUN_10773fea8);
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
                  pcStack_13f8 = FUN_10772aff0;
                  uStack_1420 = unaff_x22;
                  pppuStack_1400 = &pppuStack_1340;
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
                      *puVar6 = &PTR_DAT_1109d3e48;
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
                    puStack_14b8 = &DAT_10772b0c0;
                    uStack_14e0 = unaff_x22;
                    pppuStack_14c0 = &pppuStack_1400;
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
                      puStack_1578 = &DAT_10772b190;
                      uStack_15a0 = unaff_x22;
                      pppuStack_1580 = &pppuStack_14c0;
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
                        puStack_1638 = &DAT_10772b25c;
                        uStack_1660 = unaff_x22;
                        pppuStack_1640 = &pppuStack_1580;
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
                            *unaff_x19 = &PTR_FUN_1109d3f08;
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
                        puStack_1708 = &DAT_10772b344;
                        uStack_1730 = unaff_x22;
                        pppuStack_1710 = &pppuStack_1640;
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
                            *unaff_x19 = &PTR_DAT_1109d3f48;
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
                        puStack_17d8 = &DAT_10772b42c;
                        uStack_1800 = unaff_x22;
                        pppuStack_17e0 = &pppuStack_1710;
                        func_0x000107741ca8();
                        if ((bRam0000000113725a00 & 1) == 0) {
                          puVar8 = (ulong *)0x113725a00;
                          ___cxa_guard_acquire();
                          puVar7 = puVar8;
                          if ((int)puVar8 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            puVar7 = puVar8;
                            FUN_1077753dc(auStack_1878);
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
                        puStack_1898 = &SUB_10772b510;
                        pppuStack_18a0 = &pppuStack_17e0;
                        func_0x0001077429f8();
                        ppuStack_19d0 = pppuVar9;
                        func_0x00010774205c();
                        ppuStack_1998 = (undefined8 ***)0x0;
                        ppuStack_1990 = (undefined8 ***)0x0;
                        uStack_1988 = 0;
                        ppuStack_19b0 = (undefined8 ***)0x0;
                        ppuStack_19a8 = (undefined8 ***)0x0;
                        uStack_19a0 = 0;
                        lVar14 = *(long *)param_2;
                        uStack_1900 = extraout_x8;
                        do {
                          if (lVar14 == *(long *)(unaff_x21 + 8)) {
                            pppuVar1 = (undefined8 ***)ppuStack_1990;
                            pppuVar9 = (undefined8 ***)ppuStack_1998;
                            if (ppuStack_19b0 != ppuStack_19a8) {
                              pppuVar1 = (undefined8 ***)ppuStack_19a8;
                              pppuVar9 = (undefined8 ***)ppuStack_19b0;
                            }
                            uStack_1948 = 0;
                            uStack_1940 = 0;
                            pppuStack_1950 = (undefined8 ****)0x0;
                            if (pppuVar9 != pppuVar1) {
                              func_0x000100602d9c(&pppuStack_1950,&pppuStack_1950,pppuVar9);
                              pppuVar9 = pppuVar9 + 3;
                            }
                            for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                              ppppuVar5 = (undefined8 ****)pppuStack_1950;
                              if (-1 < (long)uStack_1940._7_1_) {
                                ppppuVar5 = &pppuStack_1950;
                              }
                              uVar2 = uStack_1948;
                              if (-1 < (long)uStack_1940) {
                                uVar2 = (long)uStack_1940._7_1_;
                              }
                              pcStack_1938 = " | ";
                              pcStack_1930 = "";
                              func_0x000106887580(&pppuStack_1950,(long)ppppuVar5 + uVar2,
                                                  &pcStack_1938);
                              uVar2 = uStack_1948;
                              ppppuVar5 = (undefined8 ****)pppuStack_1950;
                              if (-1 < (long)uStack_1940) {
                                uVar2 = uStack_1940 >> 0x38;
                                ppppuVar5 = &pppuStack_1950;
                              }
                              func_0x000100602d9c(&pppuStack_1950,(long)ppppuVar5 + uVar2,pppuVar9);
                            }
                            ppuStack_1968 = (undefined8 ***)0x0;
                            uStack_1960 = 0;
                            uStack_1958 = 0;
                            uVar3 = (*puVar7 & 1) == 0;
                            puVar8 = puVar7 + 1;
                            if (!(bool)uVar3) {
                              puVar8 = (ulong *)puVar7[1];
                            }
                            puVar13 = (ulong *)&DAT_10f68f19e;
                            if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                        (auStack_19c8,&UNK_10f424ce9,&pppuStack_1950);
                              func_0x00010048a6c8(auStack_1980,auStack_19c8,&UNK_10f424d05);
                              func_0x000100610910(&pcStack_1938,auStack_1980,&ppuStack_1968);
                              ppcVar11 = (char **)&UNK_10f417e7a;
                              func_0x00010048a6c8(ppuStack_19d0,&pcStack_1938);
                              func_0x0001077435f4();
                              func_0x0001077433f8();
                              func_0x000107742c9c();
                              func_0x000107743354();
                              func_0x0001077435e4();
                              func_0x0001000e30f4(&ppuStack_19b0);
                              ppppuVar5 = (undefined8 ****)&ppuStack_1998;
                              func_0x0001000e30f4();
                              func_0x000107741c94(uStack_1900);
                              if ((bool)uVar3) {
                                return ppppuVar5;
                              }
                              ___stack_chk_fail();
                              func_0x0001077435e4();
                              func_0x0001000e30f4(&ppuStack_19b0);
                              ppppuVar10 = (undefined8 ****)&ppuStack_1998;
                              func_0x0001000e30f4(ppppuVar10);
                              puVar15 = &SUB_10772b8e8;
                              func_0x000107742904();
                            }
                            else {
                              uStack_1958 = 0;
                              uStack_1960 = 0;
                              ppuStack_1968 = (undefined8 ***)0x0;
                              ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                              func_0x00010756a788(&pcStack_1938,*puVar8 + 0x10);
                              ppppuVar10 = (undefined8 ****)&ppuStack_1968;
                              ppcVar11 = &pcStack_1938;
                              puVar15 = &UNK_10772b78c;
                              puVar13 = (ulong *)&DAT_10f68f19e;
                            }
code_r0x00010772b8e8:
                            ppcVar12 = ppcVar11;
                            puStack_19f0 = puVar13;
                            pppuStack_19e8 = ppppuVar5;
                            pppuStack_19e0 = &pppuStack_18a0;
                            puStack_19d8 = puVar15;
                            func_0x000107264c5c();
                            ppcStack_1a00 = ppcVar11;
                            ppcStack_19f8 = ppcVar12;
                            func_0x0001073727e0(ppppuVar10,&ppcStack_1a00);
                            return ppppuVar10;
                          }
                          (**(code **)(lVar14 + 8))();
                          ppppuVar5 = (undefined8 ****)*pppuVar9;
                          if (*(int *)(ppppuVar5 + 8) == 0) {
                            func_0x00010002b838(&pppuStack_1950,&DAT_10f68e8ec);
                            if (ppppuVar5[5] != ppppuVar5[6]) {
                              func_0x00010756a788(&pcStack_1938,ppppuVar5[5]);
                              ppppuVar10 = &pppuStack_1950;
                              ppcVar11 = &pcStack_1938;
                              puVar15 = &UNK_10772b628;
                              puVar13 = puVar7;
                              goto code_r0x00010772b8e8;
                            }
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                      (&pppuStack_1950,&DAT_10f684600);
                            pppuVar9 = &ppuStack_19b0;
                            if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                              pppuVar9 = &ppuStack_1998;
                            }
                            func_0x000100206870(pppuVar9,&pppuStack_1950);
                          }
                          else {
                            func_0x00010756a788(&pcStack_1938,ppppuVar5 + 5);
                            func_0x00010724ef84(auStack_1980,&pcStack_1938);
                            func_0x0001004c3cd0(&ppuStack_1968,&DAT_10f68e8ec,auStack_1980);
                            func_0x00010048a6c8(&pppuStack_1950,&ppuStack_1968,&DAT_10f684600);
                            func_0x000107743354();
                            func_0x0001077433f8();
                            func_0x00010774335c();
                            pppuVar9 = &ppuStack_19b0;
                            func_0x000100206870(pppuVar9,&pppuStack_1950);
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
            ppppuVar5 = (undefined8 ****)0x113725888;
          }
          return ppppuVar5;
        }
        ppppuVar5 = (undefined8 ****)0x113725868;
      }
    }
  }
  return ppppuVar5;
}



/* Entry: 10772a110; end: 10772a1f3;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772a110(undefined8 param_1,code *param_2)

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
  char **ppcStack_1350;
  char **ppcStack_1348;
  ulong *puStack_1340;
  undefined8 ***pppuStack_1338;
  undefined8 ***pppuStack_1330;
  undefined *puStack_1328;
  undefined8 **ppuStack_1320;
  undefined1 auStack_1318 [24];
  undefined8 **ppuStack_1300;
  undefined8 **ppuStack_12f8;
  undefined8 uStack_12f0;
  undefined8 **ppuStack_12e8;
  undefined8 **ppuStack_12e0;
  undefined8 uStack_12d8;
  undefined1 auStack_12d0 [24];
  undefined8 **ppuStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 ***pppuStack_12a0;
  ulong uStack_1298;
  undefined8 uStack_1290;
  char *pcStack_1288;
  char *pcStack_1280;
  undefined8 uStack_1250;
  undefined8 ***pppuStack_11f0;
  undefined *puStack_11e8;
  undefined1 auStack_11c8 [120];
  undefined8 uStack_1150;
  undefined8 ***pppuStack_1130;
  undefined *puStack_1128;
  undefined8 uStack_1080;
  undefined8 ***pppuStack_1060;
  undefined *puStack_1058;
  undefined8 uStack_fb0;
  undefined8 ***pppuStack_f90;
  undefined *puStack_f88;
  undefined8 uStack_ef0;
  undefined8 ***pppuStack_ed0;
  undefined *puStack_ec8;
  undefined8 uStack_e30;
  undefined8 ***pppuStack_e10;
  undefined *puStack_e08;
  undefined8 uStack_d70;
  undefined8 ***pppuStack_d50;
  code *pcStack_d48;
  undefined4 uStack_d20;
  undefined8 uStack_cb0;
  undefined8 ***pppuStack_c90;
  undefined *puStack_c88;
  undefined8 uStack_bf0;
  undefined8 ***pppuStack_bd0;
  undefined *puStack_bc8;
  undefined8 uStack_b20;
  undefined8 ***pppuStack_b00;
  undefined *puStack_af8;
  undefined8 uStack_a50;
  undefined8 ***pppuStack_a30;
  undefined *puStack_a28;
  undefined8 uStack_980;
  undefined8 ***pppuStack_960;
  undefined *puStack_958;
  undefined8 uStack_8a0;
  undefined8 ***pppuStack_880;
  undefined *puStack_878;
  undefined8 uStack_7c0;
  undefined8 ***pppuStack_7a0;
  undefined *puStack_798;
  undefined8 uStack_6f0;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_620;
  undefined8 ***pppuStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_540;
  undefined8 ***pppuStack_520;
  undefined *puStack_518;
  undefined8 uStack_460;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2c0;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
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
      param_2 = (code *)&UNK_10773dfd8;
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
  puStack_d8 = &DAT_10772a1f4;
  puStack_e0 = &stack0xfffffffffffffff0;
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
    puStack_1b8 = &DAT_10772a2f8;
    uStack_1e0 = unaff_x22;
    ppuStack_1c0 = &puStack_e0;
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
      puStack_298 = &DAT_10772a3fc;
      uStack_2c0 = unaff_x22;
      pppuStack_2a0 = &ppuStack_1c0;
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
          param_2 = (code *)&UNK_10773e63c;
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
        ppppuVar5 = (undefined8 ****)0x1137258d8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137258e0);
        func_0x00010774297c();
        puStack_368 = &DAT_10772a4e4;
        uStack_390 = unaff_x22;
        pppuStack_370 = &pppuStack_2a0;
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
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258f0);
          func_0x00010774297c();
          puStack_438 = &DAT_10772a5c8;
          uStack_460 = unaff_x22;
          pppuStack_440 = &pppuStack_370;
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
              func_0x000107741cd0(FUN_10773e9f0);
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
          puStack_518 = &DAT_10772a6cc;
          uStack_540 = unaff_x22;
          pppuStack_520 = &pppuStack_440;
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
              *unaff_x19 = &PTR_FUN_1109d3bc8;
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
          puStack_5f8 = &DAT_10772a7d0;
          uStack_620 = unaff_x22;
          pppuStack_600 = &pppuStack_520;
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
          pcStack_6c8 = FUN_10772a8b8;
          uStack_6f0 = unaff_x22;
          pppuStack_6d0 = &pppuStack_600;
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
              func_0x000107741cd0(FUN_10773f04c);
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
          puStack_798 = &DAT_10772a99c;
          uStack_7c0 = unaff_x22;
          pppuStack_7a0 = &pppuStack_6d0;
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
              *unaff_x19 = &PTR_FUN_1109d3c88;
              func_0x000107741cd0(&UNK_10773f268);
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
          puStack_878 = &DAT_10772aaa0;
          uStack_8a0 = unaff_x22;
          pppuStack_880 = &pppuStack_7a0;
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
              *unaff_x19 = &PTR_DAT_1109d3cc8;
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
          puStack_958 = &DAT_10772aba4;
          uStack_980 = unaff_x22;
          pppuStack_960 = &pppuStack_880;
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
          puStack_a28 = &DAT_10772ac8c;
          uStack_a50 = unaff_x22;
          pppuStack_a30 = &pppuStack_960;
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
              param_2 = FUN_10773f92c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d48;
              func_0x000107741cd0(&UNK_10773f8c4);
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
          puStack_af8 = &DAT_10772ad70;
          uStack_b20 = unaff_x22;
          pppuStack_b00 = &pppuStack_a30;
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
              param_2 = (code *)&UNK_10773fb34;
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
          puStack_bc8 = &DAT_10772ae54;
          uStack_bf0 = unaff_x22;
          pppuStack_bd0 = &pppuStack_b00;
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
            puStack_c88 = &DAT_10772af1c;
            uStack_cb0 = unaff_x22;
            pppuStack_c90 = &pppuStack_bd0;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar6 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar6 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_d20 = 2;
                func_0x000107741c80(3);
                param_2 = (code *)&UNK_10773ff94;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742cb4();
                func_0x00010774291c();
                *puVar6 = &PTR_DAT_1109d3e08;
                func_0x000107741cd0(FUN_10773fea8);
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
              pcStack_d48 = FUN_10772aff0;
              uStack_d70 = unaff_x22;
              pppuStack_d50 = &pppuStack_c90;
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
                  *puVar6 = &PTR_DAT_1109d3e48;
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
                puStack_e08 = &DAT_10772b0c0;
                uStack_e30 = unaff_x22;
                pppuStack_e10 = &pppuStack_d50;
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
                  puStack_ec8 = &DAT_10772b190;
                  uStack_ef0 = unaff_x22;
                  pppuStack_ed0 = &pppuStack_e10;
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
                    puStack_f88 = &DAT_10772b25c;
                    uStack_fb0 = unaff_x22;
                    pppuStack_f90 = &pppuStack_ed0;
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
                        *unaff_x19 = &PTR_FUN_1109d3f08;
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
                    puStack_1058 = &DAT_10772b344;
                    uStack_1080 = unaff_x22;
                    pppuStack_1060 = &pppuStack_f90;
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
                        *unaff_x19 = &PTR_DAT_1109d3f48;
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
                    puStack_1128 = &DAT_10772b42c;
                    uStack_1150 = unaff_x22;
                    pppuStack_1130 = &pppuStack_1060;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar8 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar7 = puVar8;
                      if ((int)puVar8 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar7 = puVar8;
                        FUN_1077753dc(auStack_11c8);
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
                    puStack_11e8 = &SUB_10772b510;
                    pppuStack_11f0 = &pppuStack_1130;
                    func_0x0001077429f8();
                    ppuStack_1320 = pppuVar9;
                    func_0x00010774205c();
                    ppuStack_12e8 = (undefined8 ***)0x0;
                    ppuStack_12e0 = (undefined8 ***)0x0;
                    uStack_12d8 = 0;
                    ppuStack_1300 = (undefined8 ***)0x0;
                    ppuStack_12f8 = (undefined8 ***)0x0;
                    uStack_12f0 = 0;
                    lVar14 = *(long *)param_2;
                    uStack_1250 = extraout_x8;
                    do {
                      if (lVar14 == *(long *)(unaff_x21 + 8)) {
                        pppuVar1 = (undefined8 ***)ppuStack_12e0;
                        pppuVar9 = (undefined8 ***)ppuStack_12e8;
                        if (ppuStack_1300 != ppuStack_12f8) {
                          pppuVar1 = (undefined8 ***)ppuStack_12f8;
                          pppuVar9 = (undefined8 ***)ppuStack_1300;
                        }
                        uStack_1298 = 0;
                        uStack_1290 = 0;
                        pppuStack_12a0 = (undefined8 ****)0x0;
                        if (pppuVar9 != pppuVar1) {
                          func_0x000100602d9c(&pppuStack_12a0,&pppuStack_12a0,pppuVar9);
                          pppuVar9 = pppuVar9 + 3;
                        }
                        for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                          ppppuVar5 = (undefined8 ****)pppuStack_12a0;
                          if (-1 < (long)uStack_1290._7_1_) {
                            ppppuVar5 = &pppuStack_12a0;
                          }
                          uVar2 = uStack_1298;
                          if (-1 < (long)uStack_1290) {
                            uVar2 = (long)uStack_1290._7_1_;
                          }
                          pcStack_1288 = " | ";
                          pcStack_1280 = "";
                          func_0x000106887580(&pppuStack_12a0,(long)ppppuVar5 + uVar2,&pcStack_1288)
                          ;
                          uVar2 = uStack_1298;
                          ppppuVar5 = (undefined8 ****)pppuStack_12a0;
                          if (-1 < (long)uStack_1290) {
                            uVar2 = uStack_1290 >> 0x38;
                            ppppuVar5 = &pppuStack_12a0;
                          }
                          func_0x000100602d9c(&pppuStack_12a0,(long)ppppuVar5 + uVar2,pppuVar9);
                        }
                        ppuStack_12b8 = (undefined8 ***)0x0;
                        uStack_12b0 = 0;
                        uStack_12a8 = 0;
                        uVar3 = (*puVar7 & 1) == 0;
                        puVar8 = puVar7 + 1;
                        if (!(bool)uVar3) {
                          puVar8 = (ulong *)puVar7[1];
                        }
                        puVar13 = (ulong *)&DAT_10f68f19e;
                        if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (auStack_1318,&UNK_10f424ce9,&pppuStack_12a0);
                          func_0x00010048a6c8(auStack_12d0,auStack_1318,&UNK_10f424d05);
                          func_0x000100610910(&pcStack_1288,auStack_12d0,&ppuStack_12b8);
                          ppcVar11 = (char **)&UNK_10f417e7a;
                          func_0x00010048a6c8(ppuStack_1320,&pcStack_1288);
                          func_0x0001077435f4();
                          func_0x0001077433f8();
                          func_0x000107742c9c();
                          func_0x000107743354();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_1300);
                          ppppuVar5 = (undefined8 ****)&ppuStack_12e8;
                          func_0x0001000e30f4();
                          func_0x000107741c94(uStack_1250);
                          if ((bool)uVar3) {
                            return ppppuVar5;
                          }
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_1300);
                          ppppuVar10 = (undefined8 ****)&ppuStack_12e8;
                          func_0x0001000e30f4(ppppuVar10);
                          puVar15 = &SUB_10772b8e8;
                          func_0x000107742904();
                        }
                        else {
                          uStack_12a8 = 0;
                          uStack_12b0 = 0;
                          ppuStack_12b8 = (undefined8 ***)0x0;
                          ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                          func_0x00010756a788(&pcStack_1288,*puVar8 + 0x10);
                          ppppuVar10 = (undefined8 ****)&ppuStack_12b8;
                          ppcVar11 = &pcStack_1288;
                          puVar15 = &UNK_10772b78c;
                          puVar13 = (ulong *)&DAT_10f68f19e;
                        }
code_r0x00010772b8e8:
                        ppcVar12 = ppcVar11;
                        puStack_1340 = puVar13;
                        pppuStack_1338 = ppppuVar5;
                        pppuStack_1330 = &pppuStack_11f0;
                        puStack_1328 = puVar15;
                        func_0x000107264c5c();
                        ppcStack_1350 = ppcVar11;
                        ppcStack_1348 = ppcVar12;
                        func_0x0001073727e0(ppppuVar10,&ppcStack_1350);
                        return ppppuVar10;
                      }
                      (**(code **)(lVar14 + 8))();
                      ppppuVar5 = (undefined8 ****)*pppuVar9;
                      if (*(int *)(ppppuVar5 + 8) == 0) {
                        func_0x00010002b838(&pppuStack_12a0,&DAT_10f68e8ec);
                        if (ppppuVar5[5] != ppppuVar5[6]) {
                          func_0x00010756a788(&pcStack_1288,ppppuVar5[5]);
                          ppppuVar10 = &pppuStack_12a0;
                          ppcVar11 = &pcStack_1288;
                          puVar15 = &UNK_10772b628;
                          puVar13 = puVar7;
                          goto code_r0x00010772b8e8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_12a0,&DAT_10f684600);
                        pppuVar9 = &ppuStack_1300;
                        if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                          pppuVar9 = &ppuStack_12e8;
                        }
                        func_0x000100206870(pppuVar9,&pppuStack_12a0);
                      }
                      else {
                        func_0x00010756a788(&pcStack_1288,ppppuVar5 + 5);
                        func_0x00010724ef84(auStack_12d0,&pcStack_1288);
                        func_0x0001004c3cd0(&ppuStack_12b8,&DAT_10f68e8ec,auStack_12d0);
                        func_0x00010048a6c8(&pppuStack_12a0,&ppuStack_12b8,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        pppuVar9 = &ppuStack_1300;
                        func_0x000100206870(pppuVar9,&pppuStack_12a0);
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
        ppppuVar5 = (undefined8 ****)0x1137258e8;
      }
      return ppppuVar5;
    }
    ppppuVar5 = (undefined8 ****)0x1137258c8;
  }
  return ppppuVar5;
}



/* Entry: 10772a8b8; end: 10772a99b;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772a8b8(undefined8 param_1,code *param_2)

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
  char **ppcStack_c90;
  char **ppcStack_c88;
  ulong *puStack_c80;
  undefined8 ***pppuStack_c78;
  undefined8 ***pppuStack_c70;
  undefined *puStack_c68;
  undefined8 **ppuStack_c60;
  undefined1 auStack_c58 [24];
  undefined8 **ppuStack_c40;
  undefined8 **ppuStack_c38;
  undefined8 uStack_c30;
  undefined8 **ppuStack_c28;
  undefined8 **ppuStack_c20;
  undefined8 uStack_c18;
  undefined1 auStack_c10 [24];
  undefined8 **ppuStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 ***pppuStack_be0;
  ulong uStack_bd8;
  undefined8 uStack_bd0;
  char *pcStack_bc8;
  char *pcStack_bc0;
  undefined8 uStack_b90;
  undefined8 ***pppuStack_b30;
  undefined *puStack_b28;
  undefined1 auStack_b08 [120];
  undefined8 uStack_a90;
  undefined8 ***pppuStack_a70;
  undefined *puStack_a68;
  undefined8 uStack_9c0;
  undefined8 ***pppuStack_9a0;
  undefined *puStack_998;
  undefined8 uStack_8f0;
  undefined8 ***pppuStack_8d0;
  undefined *puStack_8c8;
  undefined8 uStack_830;
  undefined8 ***pppuStack_810;
  undefined *puStack_808;
  undefined8 uStack_770;
  undefined8 ***pppuStack_750;
  undefined *puStack_748;
  undefined8 uStack_6b0;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined4 uStack_660;
  undefined8 uStack_5f0;
  undefined8 ***pppuStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_530;
  undefined8 ***pppuStack_510;
  undefined *puStack_508;
  undefined8 uStack_460;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2c0;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
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
      func_0x000107741cd0(FUN_10773f04c);
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
  puStack_d8 = &DAT_10772a99c;
  puStack_e0 = &stack0xfffffffffffffff0;
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
      *unaff_x19 = &PTR_FUN_1109d3c88;
      func_0x000107741cd0(&UNK_10773f268);
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
    puStack_1b8 = &DAT_10772aaa0;
    uStack_1e0 = unaff_x22;
    ppuStack_1c0 = &puStack_e0;
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
        *unaff_x19 = &PTR_DAT_1109d3cc8;
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
      puStack_298 = &DAT_10772aba4;
      uStack_2c0 = unaff_x22;
      pppuStack_2a0 = &ppuStack_1c0;
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
        ppppuVar5 = (undefined8 ****)0x113725958;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725960);
        func_0x00010774297c();
        puStack_368 = &DAT_10772ac8c;
        uStack_390 = unaff_x22;
        pppuStack_370 = &pppuStack_2a0;
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
            param_2 = FUN_10773f92c;
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3d48;
            func_0x000107741cd0(&UNK_10773f8c4);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          ppppuVar5 = (undefined8 ****)0x113725968;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725970);
          func_0x00010774297c();
          puStack_438 = &DAT_10772ad70;
          uStack_460 = unaff_x22;
          pppuStack_440 = &pppuStack_370;
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
              param_2 = (code *)&UNK_10773fb34;
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
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725980);
            func_0x00010774297c();
            puStack_508 = &DAT_10772ae54;
            uStack_530 = unaff_x22;
            pppuStack_510 = &pppuStack_440;
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
              puStack_5c8 = &DAT_10772af1c;
              uStack_5f0 = unaff_x22;
              pppuStack_5d0 = &pppuStack_510;
              func_0x000107741ca8();
              if ((bRam00000001137259a0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259a0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  uStack_660 = 2;
                  func_0x000107741c80(3);
                  param_2 = (code *)&UNK_10773ff94;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar6 = &PTR_DAT_1109d3e08;
                  func_0x000107741cd0(FUN_10773fea8);
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
                pcStack_688 = FUN_10772aff0;
                uStack_6b0 = unaff_x22;
                pppuStack_690 = &pppuStack_5d0;
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
                    *puVar6 = &PTR_DAT_1109d3e48;
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
                  puStack_748 = &DAT_10772b0c0;
                  uStack_770 = unaff_x22;
                  pppuStack_750 = &pppuStack_690;
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
                    puStack_808 = &DAT_10772b190;
                    uStack_830 = unaff_x22;
                    pppuStack_810 = &pppuStack_750;
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
                      puStack_8c8 = &DAT_10772b25c;
                      uStack_8f0 = unaff_x22;
                      pppuStack_8d0 = &pppuStack_810;
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
                          *unaff_x19 = &PTR_FUN_1109d3f08;
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
                      puStack_998 = &DAT_10772b344;
                      uStack_9c0 = unaff_x22;
                      pppuStack_9a0 = &pppuStack_8d0;
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
                          *unaff_x19 = &PTR_DAT_1109d3f48;
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
                      puStack_a68 = &DAT_10772b42c;
                      uStack_a90 = unaff_x22;
                      pppuStack_a70 = &pppuStack_9a0;
                      func_0x000107741ca8();
                      if ((bRam0000000113725a00 & 1) == 0) {
                        puVar8 = (ulong *)0x113725a00;
                        ___cxa_guard_acquire();
                        puVar7 = puVar8;
                        if ((int)puVar8 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          puVar7 = puVar8;
                          FUN_1077753dc(auStack_b08);
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
                      puStack_b28 = &SUB_10772b510;
                      pppuStack_b30 = &pppuStack_a70;
                      func_0x0001077429f8();
                      ppuStack_c60 = pppuVar9;
                      func_0x00010774205c();
                      ppuStack_c28 = (undefined8 ***)0x0;
                      ppuStack_c20 = (undefined8 ***)0x0;
                      uStack_c18 = 0;
                      ppuStack_c40 = (undefined8 ***)0x0;
                      ppuStack_c38 = (undefined8 ***)0x0;
                      uStack_c30 = 0;
                      lVar14 = *(long *)param_2;
                      uStack_b90 = extraout_x8;
                      do {
                        if (lVar14 == *(long *)(unaff_x21 + 8)) {
                          pppuVar1 = (undefined8 ***)ppuStack_c20;
                          pppuVar9 = (undefined8 ***)ppuStack_c28;
                          if (ppuStack_c40 != ppuStack_c38) {
                            pppuVar1 = (undefined8 ***)ppuStack_c38;
                            pppuVar9 = (undefined8 ***)ppuStack_c40;
                          }
                          uStack_bd8 = 0;
                          uStack_bd0 = 0;
                          pppuStack_be0 = (undefined8 ****)0x0;
                          if (pppuVar9 != pppuVar1) {
                            func_0x000100602d9c(&pppuStack_be0,&pppuStack_be0,pppuVar9);
                            pppuVar9 = pppuVar9 + 3;
                          }
                          for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                            ppppuVar5 = (undefined8 ****)pppuStack_be0;
                            if (-1 < (long)uStack_bd0._7_1_) {
                              ppppuVar5 = &pppuStack_be0;
                            }
                            uVar2 = uStack_bd8;
                            if (-1 < (long)uStack_bd0) {
                              uVar2 = (long)uStack_bd0._7_1_;
                            }
                            pcStack_bc8 = " | ";
                            pcStack_bc0 = "";
                            func_0x000106887580(&pppuStack_be0,(long)ppppuVar5 + uVar2,&pcStack_bc8)
                            ;
                            uVar2 = uStack_bd8;
                            ppppuVar5 = (undefined8 ****)pppuStack_be0;
                            if (-1 < (long)uStack_bd0) {
                              uVar2 = uStack_bd0 >> 0x38;
                              ppppuVar5 = &pppuStack_be0;
                            }
                            func_0x000100602d9c(&pppuStack_be0,(long)ppppuVar5 + uVar2,pppuVar9);
                          }
                          ppuStack_bf8 = (undefined8 ***)0x0;
                          uStack_bf0 = 0;
                          uStack_be8 = 0;
                          uVar3 = (*puVar7 & 1) == 0;
                          puVar8 = puVar7 + 1;
                          if (!(bool)uVar3) {
                            puVar8 = (ulong *)puVar7[1];
                          }
                          puVar13 = (ulong *)&DAT_10f68f19e;
                          if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                      (auStack_c58,&UNK_10f424ce9,&pppuStack_be0);
                            func_0x00010048a6c8(auStack_c10,auStack_c58,&UNK_10f424d05);
                            func_0x000100610910(&pcStack_bc8,auStack_c10,&ppuStack_bf8);
                            ppcVar11 = (char **)&UNK_10f417e7a;
                            func_0x00010048a6c8(ppuStack_c60,&pcStack_bc8);
                            func_0x0001077435f4();
                            func_0x0001077433f8();
                            func_0x000107742c9c();
                            func_0x000107743354();
                            func_0x0001077435e4();
                            func_0x0001000e30f4(&ppuStack_c40);
                            ppppuVar5 = (undefined8 ****)&ppuStack_c28;
                            func_0x0001000e30f4();
                            func_0x000107741c94(uStack_b90);
                            if ((bool)uVar3) {
                              return ppppuVar5;
                            }
                            ___stack_chk_fail();
                            func_0x0001077435e4();
                            func_0x0001000e30f4(&ppuStack_c40);
                            ppppuVar10 = (undefined8 ****)&ppuStack_c28;
                            func_0x0001000e30f4(ppppuVar10);
                            puVar15 = &SUB_10772b8e8;
                            func_0x000107742904();
                          }
                          else {
                            uStack_be8 = 0;
                            uStack_bf0 = 0;
                            ppuStack_bf8 = (undefined8 ***)0x0;
                            ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                            func_0x00010756a788(&pcStack_bc8,*puVar8 + 0x10);
                            ppppuVar10 = (undefined8 ****)&ppuStack_bf8;
                            ppcVar11 = &pcStack_bc8;
                            puVar15 = &UNK_10772b78c;
                            puVar13 = (ulong *)&DAT_10f68f19e;
                          }
code_r0x00010772b8e8:
                          ppcVar12 = ppcVar11;
                          puStack_c80 = puVar13;
                          pppuStack_c78 = ppppuVar5;
                          pppuStack_c70 = &pppuStack_b30;
                          puStack_c68 = puVar15;
                          func_0x000107264c5c();
                          ppcStack_c90 = ppcVar11;
                          ppcStack_c88 = ppcVar12;
                          func_0x0001073727e0(ppppuVar10,&ppcStack_c90);
                          return ppppuVar10;
                        }
                        (**(code **)(lVar14 + 8))();
                        ppppuVar5 = (undefined8 ****)*pppuVar9;
                        if (*(int *)(ppppuVar5 + 8) == 0) {
                          func_0x00010002b838(&pppuStack_be0,&DAT_10f68e8ec);
                          if (ppppuVar5[5] != ppppuVar5[6]) {
                            func_0x00010756a788(&pcStack_bc8,ppppuVar5[5]);
                            ppppuVar10 = &pppuStack_be0;
                            ppcVar11 = &pcStack_bc8;
                            puVar15 = &UNK_10772b628;
                            puVar13 = puVar7;
                            goto code_r0x00010772b8e8;
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                    (&pppuStack_be0,&DAT_10f684600);
                          pppuVar9 = &ppuStack_c40;
                          if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                            pppuVar9 = &ppuStack_c28;
                          }
                          func_0x000100206870(pppuVar9,&pppuStack_be0);
                        }
                        else {
                          func_0x00010756a788(&pcStack_bc8,ppppuVar5 + 5);
                          func_0x00010724ef84(auStack_c10,&pcStack_bc8);
                          func_0x0001004c3cd0(&ppuStack_bf8,&DAT_10f68e8ec,auStack_c10);
                          func_0x00010048a6c8(&pppuStack_be0,&ppuStack_bf8,&DAT_10f684600);
                          func_0x000107743354();
                          func_0x0001077433f8();
                          func_0x00010774335c();
                          pppuVar9 = &ppuStack_c40;
                          func_0x000100206870(pppuVar9,&pppuStack_be0);
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
          ppppuVar5 = (undefined8 ****)0x113725978;
        }
      }
      return ppppuVar5;
    }
    ppppuVar5 = (undefined8 ****)0x113725948;
  }
  return ppppuVar5;
}



/* Entry: 10772aff0; end: 10772b0bf;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772aff0(undefined8 param_1,long *param_2)

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
  char **ppcStack_610;
  char **ppcStack_608;
  ulong *puStack_600;
  undefined8 ***pppuStack_5f8;
  undefined8 ***pppuStack_5f0;
  undefined *puStack_5e8;
  undefined8 **ppuStack_5e0;
  undefined1 auStack_5d8 [24];
  undefined8 **ppuStack_5c0;
  undefined8 **ppuStack_5b8;
  undefined8 uStack_5b0;
  undefined8 **ppuStack_5a8;
  undefined8 **ppuStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_590 [24];
  undefined8 **ppuStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 ***pppuStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  char *pcStack_548;
  char *pcStack_540;
  undefined8 uStack_510;
  undefined8 ***pppuStack_4b0;
  undefined *puStack_4a8;
  undefined1 auStack_488 [120];
  undefined8 ***pppuStack_3f0;
  undefined *puStack_3e8;
  undefined8 ***pppuStack_320;
  undefined *puStack_318;
  undefined1 ***pppuStack_250;
  undefined *puStack_248;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  
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
      *puVar5 = &PTR_DAT_1109d3e48;
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
    puStack_c8 = &DAT_10772b0c0;
    puStack_d0 = &stack0xfffffffffffffff0;
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
      puStack_188 = &DAT_10772b190;
      ppuStack_190 = &puStack_d0;
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
        puStack_248 = &DAT_10772b25c;
        pppuStack_250 = &ppuStack_190;
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
            *unaff_x19 = &PTR_FUN_1109d3f08;
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
          puStack_318 = &DAT_10772b344;
          pppuStack_320 = &pppuStack_250;
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
              *unaff_x19 = &PTR_DAT_1109d3f48;
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
            puStack_3e8 = &DAT_10772b42c;
            pppuStack_3f0 = &pppuStack_320;
            func_0x000107741ca8();
            if ((bRam0000000113725a00 & 1) == 0) {
              puVar8 = (ulong *)0x113725a00;
              ___cxa_guard_acquire();
              puVar7 = puVar8;
              if ((int)puVar8 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                puVar7 = puVar8;
                FUN_1077753dc(auStack_488);
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
            puStack_4a8 = &SUB_10772b510;
            pppuStack_4b0 = &pppuStack_3f0;
            func_0x0001077429f8();
            ppuStack_5e0 = pppuVar9;
            func_0x00010774205c();
            ppuStack_5a8 = (undefined8 ***)0x0;
            ppuStack_5a0 = (undefined8 ***)0x0;
            uStack_598 = 0;
            ppuStack_5c0 = (undefined8 ***)0x0;
            ppuStack_5b8 = (undefined8 ***)0x0;
            uStack_5b0 = 0;
            lVar14 = *param_2;
            uStack_510 = extraout_x8;
            do {
              if (lVar14 == *(long *)(unaff_x21 + 8)) {
                pppuVar1 = (undefined8 ***)ppuStack_5a0;
                pppuVar9 = (undefined8 ***)ppuStack_5a8;
                if (ppuStack_5c0 != ppuStack_5b8) {
                  pppuVar1 = (undefined8 ***)ppuStack_5b8;
                  pppuVar9 = (undefined8 ***)ppuStack_5c0;
                }
                uStack_558 = 0;
                uStack_550 = 0;
                pppuStack_560 = (undefined8 ****)0x0;
                if (pppuVar9 != pppuVar1) {
                  func_0x000100602d9c(&pppuStack_560,&pppuStack_560,pppuVar9);
                  pppuVar9 = pppuVar9 + 3;
                }
                for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                  ppppuVar6 = (undefined8 ****)pppuStack_560;
                  if (-1 < (long)uStack_550._7_1_) {
                    ppppuVar6 = &pppuStack_560;
                  }
                  uVar2 = uStack_558;
                  if (-1 < (long)uStack_550) {
                    uVar2 = (long)uStack_550._7_1_;
                  }
                  pcStack_548 = " | ";
                  pcStack_540 = "";
                  func_0x000106887580(&pppuStack_560,(long)ppppuVar6 + uVar2,&pcStack_548);
                  uVar2 = uStack_558;
                  ppppuVar6 = (undefined8 ****)pppuStack_560;
                  if (-1 < (long)uStack_550) {
                    uVar2 = uStack_550 >> 0x38;
                    ppppuVar6 = &pppuStack_560;
                  }
                  func_0x000100602d9c(&pppuStack_560,(long)ppppuVar6 + uVar2,pppuVar9);
                }
                ppuStack_578 = (undefined8 ***)0x0;
                uStack_570 = 0;
                uStack_568 = 0;
                uVar3 = (*puVar7 & 1) == 0;
                puVar8 = puVar7 + 1;
                if (!(bool)uVar3) {
                  puVar8 = (ulong *)puVar7[1];
                }
                puVar13 = (ulong *)&DAT_10f68f19e;
                if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (auStack_5d8,&UNK_10f424ce9,&pppuStack_560);
                  func_0x00010048a6c8(auStack_590,auStack_5d8,&UNK_10f424d05);
                  func_0x000100610910(&pcStack_548,auStack_590,&ppuStack_578);
                  ppcVar11 = (char **)&UNK_10f417e7a;
                  func_0x00010048a6c8(ppuStack_5e0,&pcStack_548);
                  func_0x0001077435f4();
                  func_0x0001077433f8();
                  func_0x000107742c9c();
                  func_0x000107743354();
                  func_0x0001077435e4();
                  func_0x0001000e30f4(&ppuStack_5c0);
                  ppppuVar6 = (undefined8 ****)&ppuStack_5a8;
                  func_0x0001000e30f4();
                  func_0x000107741c94(uStack_510);
                  if ((bool)uVar3) {
                    return ppppuVar6;
                  }
                  ___stack_chk_fail();
                  func_0x0001077435e4();
                  func_0x0001000e30f4(&ppuStack_5c0);
                  ppppuVar10 = (undefined8 ****)&ppuStack_5a8;
                  func_0x0001000e30f4(ppppuVar10);
                  puVar15 = &SUB_10772b8e8;
                  func_0x000107742904();
                }
                else {
                  uStack_568 = 0;
                  uStack_570 = 0;
                  ppuStack_578 = (undefined8 ***)0x0;
                  ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                  func_0x00010756a788(&pcStack_548,*puVar8 + 0x10);
                  ppppuVar10 = (undefined8 ****)&ppuStack_578;
                  ppcVar11 = &pcStack_548;
                  puVar15 = &UNK_10772b78c;
                  puVar13 = (ulong *)&DAT_10f68f19e;
                }
code_r0x00010772b8e8:
                ppcVar12 = ppcVar11;
                puStack_600 = puVar13;
                pppuStack_5f8 = ppppuVar6;
                pppuStack_5f0 = &pppuStack_4b0;
                puStack_5e8 = puVar15;
                func_0x000107264c5c();
                ppcStack_610 = ppcVar11;
                ppcStack_608 = ppcVar12;
                func_0x0001073727e0(ppppuVar10,&ppcStack_610);
                return ppppuVar10;
              }
              (**(code **)(lVar14 + 8))();
              ppppuVar6 = (undefined8 ****)*pppuVar9;
              if (*(int *)(ppppuVar6 + 8) == 0) {
                func_0x00010002b838(&pppuStack_560,&DAT_10f68e8ec);
                if (ppppuVar6[5] != ppppuVar6[6]) {
                  func_0x00010756a788(&pcStack_548,ppppuVar6[5]);
                  ppppuVar10 = &pppuStack_560;
                  ppcVar11 = &pcStack_548;
                  puVar15 = &UNK_10772b628;
                  puVar13 = puVar7;
                  goto code_r0x00010772b8e8;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                          (&pppuStack_560,&DAT_10f684600);
                pppuVar9 = &ppuStack_5c0;
                if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                  pppuVar9 = &ppuStack_5a8;
                }
                func_0x000100206870(pppuVar9,&pppuStack_560);
              }
              else {
                func_0x00010756a788(&pcStack_548,ppppuVar6 + 5);
                func_0x00010724ef84(auStack_590,&pcStack_548);
                func_0x0001004c3cd0(&ppuStack_578,&DAT_10f68e8ec,auStack_590);
                func_0x00010048a6c8(&pppuStack_560,&ppuStack_578,&DAT_10f684600);
                func_0x000107743354();
                func_0x0001077433f8();
                func_0x00010774335c();
                pppuVar9 = &ppuStack_5c0;
                func_0x000100206870(pppuVar9,&pppuStack_560);
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
  return ppppuVar6;
}



/* Entry: 10772b91c; end: 10772c017;  */

/* WARNING: Possible PIC construction at 0x00010772bd9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772bda0) */
/* WARNING: Removing unreachable block (ram,0x00010772bdb0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10772b91c(ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,long *param_5)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  ulong *puVar23;
  uint uVar24;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long *extraout_x8_04;
  ulong uVar25;
  uint uVar26;
  ulong *extraout_x9;
  undefined8 extraout_x9_00;
  ulong *puVar27;
  uint uVar28;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *extraout_x10_01;
  undefined8 extraout_x10_02;
  uint uVar29;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  long ******pppppplVar30;
  undefined1 uVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  long *plVar34;
  long *******ppppppplVar35;
  long *******ppppppplVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  bool bVar40;
  long lVar41;
  long lVar42;
  undefined *puVar43;
  long ******pppppplVar44;
  undefined8 in_stack_00000050;
  undefined1 auStack_418 [24];
  uint auStack_400 [6];
  uint auStack_3e8 [6];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  uint uStack_370;
  undefined2 uStack_36c;
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint *apuStack_2d0 [2];
  undefined2 uStack_2c0;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  undefined8 uStack_290;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  undefined1 *puStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined **ppuStack_200;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [16];
  undefined8 *puStack_1d0;
  undefined *apuStack_1c8 [3];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [4];
  undefined1 uStack_164;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 auStack_110 [24];
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [72];
  ulong auStack_a0 [7];
  byte bStack_68;
  undefined1 auStack_58 [4];
  undefined1 uStack_54;
  undefined1 auStack_40 [16];
  byte bStack_30;
  ulong uStack_28;
  undefined1 auStack_20 [8];
  byte bStack_18;
  undefined8 uStack_10;
  
  func_0x000107743290();
  puStack_218 = extraout_x8;
  func_0x00010774205c();
  puStack_f8 = param_1;
  uStack_f0 = param_2;
  uStack_10 = extraout_x8_00;
  func_0x0001000633dc();
  if ((int)param_1 != 0) {
    func_0x0001077713b4(auStack_110,param_4,param_3,param_5);
    func_0x0001072c95d0(auStack_110);
  }
  func_0x00010772d2fc(auStack_a0,&puStack_f8);
  ppuVar10 = &PTR_DAT_1109d10f0;
  FUN_10772d264(&PTR_DAT_1109d10f0,&UNK_1109d1cc0,auStack_a0);
  ppuVar11 = ppuVar10;
  func_0x00010772d2b0();
  uVar8 = ppuVar10 == ppuVar11;
  ppuStack_210 = ppuVar11;
  ppuStack_120 = ppuVar10;
  ppuStack_118 = ppuVar11;
  if ((bool)uVar8) {
    func_0x000100060b18(&uStack_28,&puStack_f8);
    func_0x0001004c3cd0(auStack_a0,&UNK_10f424d13,&uStack_28);
    func_0x00010048a6c8(auStack_138,auStack_a0,&UNK_10f424d28);
    puVar23 = (ulong *)0x0;
    func_0x00010756a69c(param_4,auStack_138,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    func_0x000107743498();
    *puStack_218 = 0;
    puStack_218[0x10] = 0;
  }
  else {
    puVar12 = param_3 + 1;
    (**(code **)(*param_3 + 0x20))();
    puVar23 = (ulong *)&DAT_10f424bab;
    puVar27 = puStack_f8;
    func_0x0001077435c4(puStack_f8,uStack_f0,&DAT_10f424bab);
    if (((ulong)puVar27 & 1) == 0) {
      puVar23 = (ulong *)&DAT_10f424bb7;
      puVar27 = puStack_f8;
      func_0x0001077435c4(puStack_f8,uStack_f0,&DAT_10f424bb7);
      if ((int)puVar27 != 0) goto joined_r0x00010772ba7c;
    }
    else {
joined_r0x00010772ba7c:
      if (((ulong *)0x1 < puVar12) && ((char)param_5[0xe] == '\x01')) {
        func_0x00010785f1f4();
        auStack_a0[0] = auStack_a0[0] & 0xffffffffffffff00;
        puVar27 = puVar27 + 0x164;
        func_0x00010724e2c8(puVar27,auStack_a0);
        if ((int)puVar27 != 0) {
          (**(code **)(*param_3 + 0x28))(&uStack_28,param_3 + 1,1);
          (**(code **)(uStack_28 + 0x68))(auStack_a0,auStack_20);
          puVar27 = &uStack_28;
          func_0x0001072f5f6c();
          uVar24 = (uint)bStack_68;
          cVar6 = SBORROW4(uVar24,1);
          cVar7 = (int)(uVar24 - 1) < 0;
          if (uVar24 == 1) {
            func_0x00010724ef84(&uStack_28,auStack_a0);
            ppuStack_200 = (undefined **)(param_5 + 0xb);
            func_0x000107743ae4();
            uVar1 = extraout_x11;
            puVar13 = extraout_x10;
            if (cVar7 == cVar6) {
              uVar1 = extraout_x8_01;
              puVar13 = &uStack_28;
            }
            puVar32 = (ulong *)param_5[0xf];
            puVar2 = (ulong *)param_5[0x10];
            do {
              cVar6 = SBORROW8((long)puVar32,(long)puVar2);
              cVar7 = (long)puVar32 - (long)puVar2 < 0;
              if (puVar32 == puVar2) {
                func_0x000107743878();
                uVar1 = extraout_x11_00;
                puVar27 = extraout_x10_00;
                if (cVar7 == cVar6) {
                  uVar1 = extraout_x8_02;
                  puVar27 = extraout_x9;
                }
                func_0x000107743ae4(puVar27,uVar1);
                puVar23 = extraout_x10_01;
                if (cVar7 == cVar6) {
                  puVar23 = &uStack_28;
                }
                func_0x000107743c48();
                iVar9 = (int)puVar27;
                cVar6 = SBORROW4(iVar9,2);
                cVar7 = iVar9 + -2 < 0;
                uVar8 = iVar9 == 2;
                if ((bool)uVar8) {
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (auStack_198,&UNK_10f424d62,&uStack_28);
                  func_0x00010048a6c8(auStack_180,auStack_198,&UNK_10f424d78);
                  func_0x000100610910(auStack_168,auStack_180,ppuStack_200);
                  func_0x00010048a6c8(auStack_58,auStack_168,&UNK_10f424d88);
                  func_0x000107743878();
                  uVar1 = extraout_x11_01;
                  uVar3 = extraout_x10_02;
                  if (cVar7 == cVar6) {
                    uVar1 = extraout_x8_03;
                    uVar3 = extraout_x9_00;
                  }
                  func_0x000107744d3c(auStack_1b0,uVar3,uVar1);
                  func_0x00010533a9c0(auStack_40,auStack_58,auStack_1b0);
                  func_0x00010048a6c8(auStack_150,auStack_40,&DAT_10f62a9de);
                  puVar23 = (ulong *)0x1;
                  func_0x00010756a69c(param_4,auStack_150,1);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
                  func_0x000107743594();
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
                  *puStack_218 = 0;
                  puStack_218[0x10] = 0;
                  func_0x000107743498();
                  func_0x00010774392c();
                  goto LAB_10772be90;
                }
                break;
              }
              uVar25 = (ulong)*(char *)((long)puVar32 + 0x17);
              puVar23 = puVar32;
              if ((long)uVar25 < 0) {
                uVar25 = puVar32[1];
                puVar23 = (ulong *)*puVar32;
              }
              puVar27 = puVar13;
              func_0x0001000633dc(puVar13,uVar1,puVar23,uVar25);
              puVar32 = puVar32 + 3;
            } while (((ulong)puVar27 & 1) == 0);
            func_0x000107743498();
          }
          func_0x00010774392c();
        }
      }
    }
    lStack_208 = (long)puVar12 - 1;
    for (; ppuVar10 != ppuStack_210; ppuVar10 = ppuVar10 + 3) {
      (*(code *)ppuVar10[1])();
      if (*(int *)(*puVar27 + 0x40) == 1) {
LAB_10772bc9c:
        puVar13 = (ulong *)param_4[8];
        ppuStack_200 = ppuVar10;
        func_0x0001072c97a4();
        auStack_a0[0] = 0;
        func_0x000107743934();
        lVar41 = 0;
        bVar40 = false;
        puVar32 = (ulong *)0x1;
        do {
          if (puVar12 <= puVar32) break;
          plVar34 = (long *)(*puVar27 + 0x28);
          if (*(int *)(*puVar27 + 0x40) == 0) {
            plVar34 = (long *)(*plVar34 + lVar41);
          }
          func_0x0001072c9ff4(auStack_40,plVar34);
          func_0x0001072f6ba4(&uStack_28,auStack_40);
          func_0x0001072c9884(auStack_40);
          func_0x000107743918(auStack_58);
          func_0x00010756f360(apuStack_1c8,&uStack_28);
          auStack_168[0] = 0;
          uStack_164 = 0;
          func_0x00010774369c(auStack_40);
          func_0x0001072c9854(apuStack_1c8);
          func_0x0001072f5f6c(auStack_58);
          bVar4 = bStack_30;
          if ((bStack_30 & 1) == 0) {
            bVar40 = true;
          }
          else {
            func_0x0001072c995c(auStack_a0,auStack_40);
          }
          func_0x0001072c95d0(auStack_40);
          puVar13 = &uStack_28;
          func_0x0001072c9854();
          puVar32 = (ulong *)((long)puVar32 + 1);
          lVar41 = lVar41 + 0x10;
        } while ((bVar4 & 1) != 0);
        if (!bVar40) {
          func_0x0001072c9bc0(auStack_e8,auStack_a0);
          puVar43 = (undefined *)0x10772bda0;
          puVar23 = param_4;
          goto code_r0x00010772c018;
        }
        func_0x000107743924();
        ppuVar10 = ppuStack_200;
      }
      else {
        puVar13 = (ulong *)(*puVar27 + 0x20);
        func_0x0001077416c8();
        if (lStack_208 == (long)(puVar13[1] - *puVar13) >> 4) goto LAB_10772bc9c;
      }
      puVar27 = puVar13;
    }
    func_0x0001072c97a4(param_4[8]);
    auStack_a0[0] = 0;
    func_0x000107743934();
    puVar27 = (ulong *)0x1;
    do {
      uVar8 = puVar27 == puVar12;
      if (puVar12 <= puVar27) {
        puVar23 = auStack_a0;
        func_0x00010772b510(auStack_1f8,&ppuStack_120,puVar23);
        func_0x00010756a668(param_4,auStack_1f8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
        *puStack_218 = 0;
        puStack_218[0x10] = 0;
        break;
      }
      func_0x000107743918(auStack_40);
      auStack_1e0[0] = 0;
      puStack_1d0 = (undefined8 *)((ulong)puStack_1d0 & 0xffffffffffffff00);
      auStack_58[0] = 0;
      uStack_54 = 0;
      func_0x00010774369c(&uStack_28);
      func_0x0001072c9854(auStack_1e0);
      func_0x0001072f5f6c(auStack_40);
      bVar4 = bStack_18;
      if ((bStack_18 & 1) == 0) {
        *puStack_218 = 0;
        puStack_218[0x10] = 0;
      }
      else {
        func_0x0001072c995c(auStack_a0,&uStack_28);
      }
      func_0x0001072c95d0(&uStack_28);
      puVar27 = (ulong *)((long)puVar27 + 1);
    } while ((bVar4 & 1) != 0);
    func_0x000107743924();
  }
LAB_10772be90:
  func_0x000107741c94(uStack_10);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
  func_0x000107743594();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
  func_0x000107743498();
  func_0x00010774392c();
  puVar43 = &SUB_10772c018;
  func_0x000107742904();
code_r0x00010772c018:
  func_0x000107743290();
  puStack_1d0 = &stack0x00000050;
  apuStack_1c8[0] = puVar43;
  func_0x000107742774();
  func_0x00010774205c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_328,puVar23);
  uStack_308 = uStack_320;
  lStack_310 = lStack_328;
  uStack_300 = uStack_318;
  uStack_320 = 0;
  uStack_318 = 0;
  lStack_328 = 0;
  uStack_2f8 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  func_0x0001072c9664(apuStack_2d0);
  uStack_2c0 = 0x100;
  puVar14 = (uint *)&lStack_328;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  puVar23 = param_3 + 1;
  for (lVar41 = *param_5; lVar41 != param_5[1]; lVar41 = lVar41 + 0x18) {
    (**(code **)(lVar41 + 8))();
    puVar15 = apuStack_2d0[0];
    func_0x0001072c97a4();
    lVar37 = *(long *)puVar14;
    if (*(int *)(lVar37 + 0x40) == 1) {
      lVar39 = 0;
      for (lVar42 = 1; lVar42 - 1U < *param_3 >> 1; lVar42 = lVar42 + 1) {
        puVar27 = puVar23;
        if ((*param_3 & 1) != 0) {
          puVar27 = (ulong *)*puVar23;
        }
        puVar15 = (uint *)(lVar37 + 0x28);
        func_0x00010756f724(&ppppppplStack_280,puVar15,*(long *)((long)puVar27 + lVar39) + 0x10);
        if (((ulong)ppppppplStack_268 & 1) != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_400,&ppppppplStack_280);
          func_0x00010756a69c(&lStack_310,auStack_400,lVar42);
          puVar15 = auStack_400;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
        func_0x000107743a3c();
        lVar39 = lVar39 + 0x10;
      }
code_r0x00010772c1f4:
      uVar8 = *(long *)apuStack_2d0[0] == *(long *)(apuStack_2d0[0] + 2);
      if ((bool)uVar8) {
        ppppppplVar35 = *(long ********)puVar14;
        puVar18 = (undefined8 *)0xb8;
        __Znwm();
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = &PTR_DAT_1109d1cd0;
        func_0x0001072c9bc0(&ppppppplStack_280,param_3);
        ppppppplVar36 = ppppppplVar35 + 2;
        func_0x0001072c9ff4(auStack_358);
        ppppppplVar19 = ppppppplVar35 + 9;
        func_0x000107264c5c();
        ppppppplVar20 = ppppppplVar35;
        ppppppplVar22 = ppppppplVar36;
        func_0x00010772cf38();
        ppppppplVar21 = ppppppplVar20;
        ppppppplStack_2b0 = ppppppplVar19;
        ppppppplStack_2a8 = ppppppplVar36;
        func_0x0001077430fc();
        func_0x0001000633dc();
        if ((((int)ppppppplVar21 == 0) || (((ulong)ppppppplVar22 & 1) == 0)) ||
           (uVar8 = ppppppplVar20 == (long *******)0x1, !(bool)uVar8)) {
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001077439d0();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001077439d0();
          if ((((ulong)ppppppplVar21 & 1) != 0) ||
             (func_0x000107742854(), ((ulong)ppppppplVar21 & 1) != 0)) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((((ulong)ppppppplVar21 & 1) != 0) ||
              (func_0x000107742854(), ((ulong)ppppppplVar21 & 1) != 0)) ||
             ((func_0x000107742854(), ((ulong)ppppppplVar21 & 1) != 0 ||
              (func_0x000107742854(), ((ulong)ppppppplVar21 & 1) != 0)))) goto code_r0x00010772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)ppppppplVar21 & 1) != 0) goto code_r0x00010772c804;
          ppppppplVar21 = (long *******)&ppppppplStack_2b0;
          func_0x00010772cd00(ppppppplVar21,&UNK_10de8ee29,0);
          uVar8 = ppppppplVar21 == (long *******)0x0;
          bVar40 = !(bool)uVar8;
        }
        else {
code_r0x00010772c804:
          bVar40 = false;
        }
        func_0x0001077439d8();
        ppppppplVar19 = ppppppplVar21;
        func_0x0001077439d8();
        puVar43 = &DAT_10f424b05;
        ppppppplVar20 = ppppppplVar19;
        func_0x0001077439d8();
        ppppppplVar36 = ppppppplVar35 + 9;
        func_0x000107264c5c();
        func_0x00010772cf38(ppppppplVar35);
        func_0x00010772cd44(ppppppplVar36,puVar43);
        if (!bVar40) {
          uVar24 = 0;
          goto joined_r0x00010772c8dc;
        }
        ppppppplVar22 = (long *******)&ppppppplStack_278;
        if (((ulong)ppppppplStack_280 & 1) != 0) {
          ppppppplVar22 = ppppppplStack_278;
        }
        lVar41 = ((ulong)ppppppplStack_280 & 0x1ffffffffffffffe) << 3;
        goto code_r0x00010772c87c;
      }
    }
    else {
      if (*(int *)(lVar37 + 0x40) != 0) goto code_r0x00010772c1f4;
      puVar16 = (uint *)(lVar37 + 0x20);
      func_0x0001077416c8();
      uVar25 = *param_3;
      if (*(long *)(puVar16 + 2) - *(long *)puVar16 >> 4 == uVar25 >> 1) {
        lVar37 = 0;
        puVar15 = puVar16;
        for (uVar38 = 0; uVar38 < uVar25 >> 1; uVar38 = uVar38 + 1) {
          puVar27 = puVar23;
          if ((uVar25 & 1) != 0) {
            puVar27 = (ulong *)*puVar23;
          }
          if ((ulong)(*(long *)(puVar16 + 2) - *(long *)puVar16 >> 4) <= uVar38) {
            func_0x00010772d3dc();
            goto code_r0x00010772ca94;
          }
          puVar15 = (uint *)(*(long *)puVar16 + lVar37);
          func_0x00010756f724(&ppppppplStack_280,puVar15,*(long *)((long)puVar27 + lVar37) + 0x10);
          if ((char)ppppppplStack_268 == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_3e8,&ppppppplStack_280);
            func_0x00010756a69c(&lStack_310,auStack_3e8,uVar38 + 1);
            puVar15 = auStack_3e8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          }
          func_0x000107743a3c();
          uVar25 = *param_3;
          lVar37 = lVar37 + 0x10;
        }
        goto code_r0x00010772c1f4;
      }
      func_0x00010724ef84(auStack_3a0,*(long *)puVar14 + 0x48);
      func_0x0001004c3cd0(auStack_388,&DAT_10f3b3c06,auStack_3a0);
      func_0x00010048a6c8(&uStack_370,auStack_388,&UNK_10f424d9c);
      func_0x000107878fec(auStack_3b8,*(long *)(puVar16 + 2) - *(long *)puVar16 >> 4);
      func_0x00010533a9c0(auStack_358,&uStack_370,auStack_3b8);
      func_0x00010048a6c8(&ppppppplStack_2b0,auStack_358,&UNK_10f424da8);
      func_0x000107878fec(auStack_3d0,*param_3 >> 1);
      func_0x00010533a9c0(&ppppppplStack_280,&ppppppplStack_2b0,auStack_3d0);
      func_0x00010048a6c8(auStack_340,&ppppppplStack_280,&UNK_10f417b93);
      func_0x00010756a668(&lStack_310,auStack_340);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_340);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_280);
      func_0x0001077433f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_2b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_358);
      func_0x000107743354();
      puVar15 = &uStack_370;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001077435f4();
      func_0x0001077435e4();
    }
    puVar14 = puVar15;
  }
  uVar8 = lVar41 - *param_5 == 0x18;
  if ((bool)uVar8) {
    puVar18 = *(undefined8 **)apuStack_2d0[0];
    plVar34 = (long *)param_4[8];
    ppppppplVar36 = (long *******)plVar34[1];
    uVar25 = ((long)ppppppplVar36 - *plVar34) / 0x30 +
             (*(long *)(apuStack_2d0[0] + 2) - (long)puVar18) / 0x30;
    if ((ulong)((plVar34[2] - *plVar34) / 0x30) < uVar25) {
      if (0x555555555555555 < uVar25) goto code_r0x00010772ca90;
      func_0x00010756b8d0(&ppppppplStack_280);
      func_0x00010756b878(plVar34,&ppppppplStack_280);
      func_0x00010756baa8(&ppppppplStack_280);
      puVar18 = *(undefined8 **)apuStack_2d0[0];
      plVar34 = (long *)param_4[8];
      ppppppplVar36 = (long *******)plVar34[1];
    }
    puVar33 = *(undefined8 **)(apuStack_2d0[0] + 2);
    for (; uVar8 = puVar18 == puVar33, !(bool)uVar8; puVar18 = puVar18 + 6) {
      ppppppplVar19 = (long *******)plVar34[1];
      if (ppppppplVar19 < (long *******)plVar34[2]) {
        ppppppplVar20 = ppppppplVar36;
        if (ppppppplVar36 == ppppppplVar19) {
          pppppplVar44 = (long ******)puVar18[1];
          pppppplVar30 = (long ******)*puVar18;
          ppppppplVar19[2] = (long ******)puVar18[2];
          ppppppplVar19[1] = pppppplVar44;
          *ppppppplVar19 = pppppplVar30;
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          pppppplVar44 = (long ******)puVar18[4];
          pppppplVar30 = (long ******)puVar18[3];
          ppppppplVar19[5] = (long ******)puVar18[5];
          ppppppplVar19[4] = pppppplVar44;
          ppppppplVar19[3] = pppppplVar30;
          puVar18[4] = 0;
          puVar18[5] = 0;
          puVar18[3] = 0;
          plVar34[1] = (long)(ppppppplVar19 + 6);
        }
        else {
          ppppppplVar35 = ppppppplVar19 + -6;
          ppppppplVar22 = ppppppplVar19;
          for (ppppppplVar21 = ppppppplVar35; ppppppplVar21 < ppppppplVar19;
              ppppppplVar21 = ppppppplVar21 + 6) {
            pppppplVar44 = ppppppplVar21[1];
            pppppplVar30 = *ppppppplVar21;
            ppppppplVar22[2] = ppppppplVar21[2];
            ppppppplVar22[1] = pppppplVar44;
            *ppppppplVar22 = pppppplVar30;
            ppppppplVar21[1] = (long ******)0x0;
            ppppppplVar21[2] = (long ******)0x0;
            *ppppppplVar21 = (long ******)0x0;
            pppppplVar44 = ppppppplVar21[4];
            pppppplVar30 = ppppppplVar21[3];
            ppppppplVar22[5] = ppppppplVar21[5];
            ppppppplVar22[4] = pppppplVar44;
            ppppppplVar22[3] = pppppplVar30;
            ppppppplVar21[4] = (long ******)0x0;
            ppppppplVar21[5] = (long ******)0x0;
            ppppppplVar21[3] = (long ******)0x0;
            ppppppplVar22 = ppppppplVar22 + 6;
          }
          plVar34[1] = (long)ppppppplVar22;
          for (ppppppplVar19 = ppppppplVar19 + -0xc; ppppppplVar19 + 6 != ppppppplVar36;
              ppppppplVar19 = ppppppplVar19 + -6) {
            FUN_10772d428(ppppppplVar35,ppppppplVar19);
            ppppppplVar35 = ppppppplVar35 + -6;
          }
          FUN_10772d428(ppppppplVar36,puVar18);
        }
      }
      else {
        plVar17 = plVar34;
        func_0x00010756b830(plVar34,((long)ppppppplVar19 - *plVar34) / 0x30 + 1);
        func_0x00010756b8d0(&ppppppplStack_2b0,plVar17,((long)ppppppplVar36 - *plVar34) / 0x30,
                            plVar34 + 2);
        ppppppplVar19 = ppppppplStack_2a0;
        if (ppppppplStack_2a0 == ppppppplStack_298) {
          if (ppppppplStack_2a8 < ppppppplStack_2b0 ||
              (long)ppppppplStack_2a8 - (long)ppppppplStack_2b0 == 0) {
            uVar25 = ((long)ppppppplStack_2a0 - (long)ppppppplStack_2b0) / 0x30 << 1;
            if ((long)ppppppplStack_2a0 - (long)ppppppplStack_2b0 == 0) {
              uVar25 = 1;
            }
            func_0x00010756b8d0(&ppppppplStack_280,uVar25,uVar25 >> 2,uStack_290);
            ppppppplVar22 = ppppppplStack_298;
            ppppppplVar21 = ppppppplStack_2a8;
            ppppppplVar20 = ppppppplStack_2b0;
            lVar41 = (long)ppppppplStack_2a0 - (long)ppppppplStack_2a8;
            ppppppplVar19 = (long *******)((long)ppppppplStack_270 + lVar41);
            for (; lVar41 != 0; lVar41 = lVar41 + -0x30) {
              pppppplVar44 = ppppppplStack_2a8[1];
              pppppplVar30 = *ppppppplStack_2a8;
              ppppppplStack_270[2] = ppppppplStack_2a8[2];
              ppppppplStack_270[1] = pppppplVar44;
              *ppppppplStack_270 = pppppplVar30;
              ppppppplStack_2a8[1] = (long ******)0x0;
              ppppppplStack_2a8[2] = (long ******)0x0;
              *ppppppplStack_2a8 = (long ******)0x0;
              pppppplVar44 = ppppppplStack_2a8[4];
              pppppplVar30 = ppppppplStack_2a8[3];
              ppppppplStack_270[5] = ppppppplStack_2a8[5];
              ppppppplStack_270[4] = pppppplVar44;
              ppppppplStack_270[3] = pppppplVar30;
              ppppppplStack_2a8[4] = (long ******)0x0;
              ppppppplStack_2a8[5] = (long ******)0x0;
              ppppppplStack_2a8[3] = (long ******)0x0;
              ppppppplStack_270 = ppppppplStack_270 + 6;
              ppppppplStack_2a8 = ppppppplStack_2a8 + 6;
            }
            ppppppplStack_2a8 = ppppppplStack_278;
            ppppppplStack_2b0 = ppppppplStack_280;
            ppppppplStack_298 = ppppppplStack_268;
            ppppppplStack_278 = ppppppplVar21;
            ppppppplStack_280 = ppppppplVar20;
            ppppppplStack_268 = ppppppplVar22;
            ppppppplStack_270 = ppppppplStack_2a0;
            ppppppplStack_2a0 = ppppppplVar19;
            func_0x00010756baa8(&ppppppplStack_280);
          }
          else {
            lVar41 = (((long)ppppppplStack_2a8 - (long)ppppppplStack_2b0) / 0x30 + 1) / -2;
            for (ppppppplVar20 = ppppppplStack_2a8; ppppppplVar20 != ppppppplVar19;
                ppppppplVar20 = ppppppplVar20 + 6) {
              FUN_10772d428(ppppppplVar20 + lVar41 * 6,ppppppplVar20);
            }
            ppppppplStack_2a0 = ppppppplVar20 + lVar41 * 6;
            ppppppplStack_2a8 = ppppppplStack_2a8 + lVar41 * 6;
          }
        }
        ppppppplVar20 = ppppppplStack_2a8;
        pppppplVar44 = (long ******)puVar18[1];
        pppppplVar30 = (long ******)*puVar18;
        ppppppplStack_2a0[2] = (long ******)puVar18[2];
        ppppppplStack_2a0[1] = pppppplVar44;
        *ppppppplStack_2a0 = pppppplVar30;
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        pppppplVar30 = (long ******)puVar18[5];
        pppppplVar44 = (long ******)puVar18[3];
        ppppppplStack_2a0[4] = (long ******)puVar18[4];
        ppppppplStack_2a0[3] = pppppplVar44;
        ppppppplStack_2a0[5] = pppppplVar30;
        puVar18[4] = 0;
        puVar18[5] = 0;
        puVar18[3] = 0;
        ppppppplStack_2a0 = ppppppplStack_2a0 + 6;
        func_0x00010756b958(plVar34 + 2,ppppppplVar36,plVar34[1]);
        ppppppplStack_2a0 =
             (long *******)((long)ppppppplStack_2a0 + (plVar34[1] - (long)ppppppplVar36));
        plVar34[1] = (long)ppppppplVar36;
        ppppppplVar19 = ppppppplStack_2a8 + (((long)ppppppplVar36 - *plVar34) / -0x30) * 6;
        func_0x00010756b958(plVar34 + 2,*plVar34,ppppppplVar36,ppppppplVar19);
        ppppppplStack_2b0 = (long *******)*plVar34;
        *plVar34 = (long)ppppppplVar19;
        plVar34[1] = (long)ppppppplStack_2a0;
        ppppppplVar36 = (long *******)plVar34[2];
        plVar34[2] = (long)ppppppplStack_298;
        ppppppplStack_2a8 = ppppppplStack_2b0;
        ppppppplStack_2a0 = ppppppplStack_2b0;
        ppppppplStack_298 = ppppppplVar36;
        func_0x00010756baa8(&ppppppplStack_2b0);
      }
      ppppppplVar36 = ppppppplVar20 + 6;
    }
    func_0x0001072c97a4(apuStack_2d0[0]);
  }
  else {
    func_0x00010772b510(auStack_418,param_5,param_3);
    func_0x000107743284();
    func_0x00010756a668();
    func_0x000107742c9c();
  }
  uVar31 = 0;
  *(undefined1 *)extraout_x8_04 = 0;
  goto code_r0x00010772ca44;
  while( true ) {
    pppppplVar30 = *ppppppplVar22;
    lVar41 = lVar41 + -0x10;
    ppppppplVar22 = ppppppplVar22 + 2;
    if (((ulong)pppppplVar30[4] & 1) == 0) break;
code_r0x00010772c87c:
    uVar8 = lVar41 == 0;
    uVar24 = (uint)(byte)uVar8;
    if (lVar41 == 0) break;
  }
joined_r0x00010772c8dc:
  if (((ulong)ppppppplVar21 & 1) == 0) {
    uVar8 = ((ulong)ppppppplStack_280 & 1) == 0;
    ppppppplVar21 = (long *******)&ppppppplStack_278;
    if (!(bool)uVar8) {
      ppppppplVar21 = ppppppplStack_278;
    }
    lVar41 = ((ulong)ppppppplStack_280 & 0x1ffffffffffffffe) << 3;
    uVar26 = 0x100;
    do {
      if (lVar41 == 0) goto code_r0x00010772c918;
      pppppplVar30 = *ppppppplVar21;
      lVar41 = lVar41 + -0x10;
      ppppppplVar21 = ppppppplVar21 + 2;
    } while ((*(byte *)((long)pppppplVar30 + 0x21) & 1) != 0);
  }
  uVar26 = 0;
code_r0x00010772c918:
  if (((ulong)ppppppplVar19 & 1) == 0) {
    uVar8 = ((ulong)ppppppplStack_280 & 1) == 0;
    ppppppplVar19 = (long *******)&ppppppplStack_278;
    if (!(bool)uVar8) {
      ppppppplVar19 = ppppppplStack_278;
    }
    lVar41 = ((ulong)ppppppplStack_280 & 0x1ffffffffffffffe) << 3;
    uVar28 = 0x10000;
    do {
      if (lVar41 == 0) goto code_r0x00010772c954;
      pppppplVar30 = *ppppppplVar19;
      lVar41 = lVar41 + -0x10;
      ppppppplVar19 = ppppppplVar19 + 2;
    } while ((*(byte *)((long)pppppplVar30 + 0x22) & 1) != 0);
  }
  uVar28 = 0;
code_r0x00010772c954:
  if (((ulong)ppppppplVar20 & 1) == 0) {
    uVar8 = ((ulong)ppppppplStack_280 & 1) == 0;
    ppppppplVar19 = (long *******)&ppppppplStack_278;
    if (!(bool)uVar8) {
      ppppppplVar19 = ppppppplStack_278;
    }
    lVar41 = ((ulong)ppppppplStack_280 & 0x1ffffffffffffffe) << 3;
    uVar29 = 0x1000000;
    do {
      if (lVar41 == 0) goto code_r0x00010772c990;
      pppppplVar30 = *ppppppplVar19;
      lVar41 = lVar41 + -0x10;
      ppppppplVar19 = ppppppplVar19 + 2;
    } while ((*(byte *)((long)pppppplVar30 + 0x23) & 1) != 0);
  }
  uVar29 = 0;
code_r0x00010772c990:
  if ((int)ppppppplVar36 != 0) {
    uVar8 = ((ulong)ppppppplStack_280 & 1) == 0;
    ppppppplVar36 = (long *******)&ppppppplStack_278;
    if (!(bool)uVar8) {
      ppppppplVar36 = ppppppplStack_278;
    }
    lVar41 = ((ulong)ppppppplStack_280 & 0x1ffffffffffffffe) << 3;
    do {
      if (lVar41 == 0) {
        uStack_36c = 1;
        goto code_r0x00010772c9d0;
      }
      pppppplVar30 = *ppppppplVar36;
      lVar41 = lVar41 + -0x10;
      ppppppplVar36 = ppppppplVar36 + 2;
    } while ((*(byte *)((long)pppppplVar30 + 0x24) & 1) != 0);
  }
  uStack_36c = 0;
code_r0x00010772c9d0:
  uStack_370 = uVar26 | uVar24 | uVar28 | uVar29;
  uVar31 = 1;
  func_0x0001072c9f9c(puVar18 + 3,1,auStack_358,&uStack_370);
  func_0x0001072c9884(auStack_358);
  puVar18[3] = &PTR_DAT_1109d1078;
  puVar18[0xc] = ppppppplVar35;
  puVar18[0xd] = ppppppplVar35[1];
  func_0x0001072c9bc0(puVar18 + 0xe,&ppppppplStack_280);
  func_0x0001072c9c34(&ppppppplStack_280);
  *extraout_x8_04 = (long)(puVar18 + 3);
  extraout_x8_04[1] = (long)puVar18;
code_r0x00010772ca44:
  *(undefined1 *)(extraout_x8_04 + 2) = uVar31;
  func_0x0001072ca718(&lStack_310);
  func_0x000107741c48();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010772ca90:
  func_0x00010756b8bc();
code_r0x00010772ca94:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10772ca98);
  (*pcVar5)();
}



/* Entry: 10772cf64; end: 10772cfb3;  */

void FUN_10772cf64(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  
  puVar2 = auStack_a0;
  func_0x000107741ce0();
  auStack_a0[0] = 0;
  uStack_30 = 0;
  func_0x0001074d1ee8();
  func_0x0001077433a8();
  func_0x000107741a50();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742d44();
    func_0x000107296ad0();
    func_0x000107742904();
    plVar3 = (long *)(param_1 + 0x60);
    if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
      plVar3 = (long *)*plVar3;
    }
    uVar1 = *(ulong *)(param_1 + 0x58) & 0x1ffffffffffffffe;
    uVar4 = uVar1 << 3;
    while (uVar1 != 0) {
      func_0x00010745df58(puVar2,*plVar3);
      uVar4 = uVar4 - 0x10;
      plVar3 = plVar3 + 2;
      uVar1 = uVar4;
    }
    return;
  }
  return;
}



/* Entry: 10772d264; end: 10772d2fb;  */

long FUN_10772d264(void)

{
  long lVar1;
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x9;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x24;
  ulong uVar2;
  
  func_0x0001077438e0();
  func_0x000107743640();
  while (lVar1 = unaff_x20, unaff_x24 != 0) {
    uVar2 = unaff_x24 >> 1;
    func_0x00010772d33c(lVar1 + uVar2 * unaff_x22);
    func_0x000107743af8();
    unaff_x24 = extraout_x9;
    unaff_x20 = extraout_x8;
    if ((bool)in_ZR) {
      unaff_x24 = uVar2;
      unaff_x20 = lVar1;
    }
  }
  return lVar1;
}



/* Entry: 10772d428; end: 10772d453;  */

void FUN_10772d428(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107743614();
  func_0x000100066230();
  func_0x000100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10772d62c; end: 10772d63f;  */

void FUN_10772d62c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772d7d8; end: 10772d803;  */

undefined8 FUN_10772d7d8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010772d804(&uStack_28);
  return param_1;
}



/* Entry: 10772d984; end: 10772d99b;  */

void FUN_10772d984(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x3fe62e42fefa39ef;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10772db88; end: 10772dc3f;  */

undefined8 * FUN_10772db88(undefined8 *param_1)

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
    func_0x00010772da74();
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
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741eec();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772dea4; end: 10772deaf;  */

void FUN_10772dea4(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  long lVar1;
  ulong uStack_38;
  
  lVar1 = param_2[1];
  func_0x000107742ea0(param_1,*param_2);
  uStack_38 = 0;
  for (lVar1 = lVar1 * 0x70; lVar1 != 0; lVar1 = lVar1 + -0x70) {
    func_0x00010772db3c(&uStack_38,unaff_x20);
    unaff_x20 = unaff_x20 + 0x70;
  }
  func_0x00010774250c((double)(uStack_38 & 0x1fffffffffffff));
  return;
}



/* Entry: 10772e1f8; end: 10772e233;  */

void FUN_10772e1f8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar1 = &PTR_DAT_1109d4098;
  puVar1[1] = param_1;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10772e2ec; end: 10772e32f;  */

long FUN_10772e2ec(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107743b2c();
  for (; param_1 != unaff_x20; param_1 = param_1 + 0x70) {
    func_0x00010726cc04(unaff_x19 + 8,param_1 + 8);
    unaff_x19 = unaff_x19 + 0x70;
  }
  return unaff_x19;
}



/* Entry: 10772e6f8; end: 10772e70b;  */

void FUN_10772e6f8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772e98c; end: 10772e99f;  */

void FUN_10772e98c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772ec18; end: 10772ec1b;  */

undefined8 * FUN_10772ec18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772eed4; end: 10772eed7;  */

undefined8 * FUN_10772eed4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772f1a8; end: 10772f1bb;  */

void FUN_10772f1a8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772f3e0; end: 10772f3f3;  */

void FUN_10772f3e0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772f5f0; end: 10772f5ff;  */

void FUN_10772f5f0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(byte *)(param_2 + 0x58);
  func_0x000107741be8(*(undefined8 *)(param_2 + 0x50),param_1);
  if ((uVar2 & 1) != 0) {
    func_0x00010774250c();
    while (func_0x000107741a50(), !(bool)in_ZR) {
      ___stack_chk_fail();
code_r0x00010772f658:
      iVar1 = 0x13725a10;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000100060964(0x113725b38,&UNK_10f424ed0);
        ___cxa_guard_release(0x113725a10);
      }
code_r0x00010772f630:
      func_0x000107743a20();
      func_0x000107743330();
      func_0x0001077431c4();
    }
    return;
  }
  if ((bRam0000000113725a10 & 1) == 0) goto code_r0x00010772f658;
  goto code_r0x00010772f630;
}



/* Entry: 10772f864; end: 10772f8cf;  */

undefined8 * FUN_10772f864(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x00010772f794();
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
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 10772fb24; end: 10772fb37;  */

void FUN_10772fb24(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772fe5c; end: 10772fe9b;  */

void FUN_10772fe5c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107741be8();
  func_0x000107742f04(1);
  func_0x000107742bf8();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d21d8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 107730414; end: 10773044b;  */

/* WARNING: Possible PIC construction at 0x00010773055c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010773062c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107730560) */
/* WARNING: Removing unreachable block (ram,0x000107730630) */

double * FUN_107730414(double *param_1,double *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar12;
  long extraout_x8;
  undefined8 *puVar13;
  long extraout_x8_00;
  double *extraout_x8_01;
  double *unaff_x19;
  double *unaff_x20;
  double *unaff_x21;
  double *unaff_x22;
  double *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (*(int *)(param_2 + 8) == 1) {
code_r0x000104c32a18:
    *(double **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(double **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    iVar3 = *(int *)param_2;
    *(int *)param_1 = iVar3;
    func_0x000104c32a48(iVar3,param_2 + 1,param_1 + 1);
    return param_1;
  }
  if (*(int *)(param_2 + 8) == 0) {
    if (*param_2 == 0.0) {
      *(int *)param_1 = 7;
      return param_1;
    }
    func_0x00010727473c();
    func_0x000107268370();
    return unaff_x19;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  puVar14 = &UNK_10773044c;
  func_0x00010563ab98();
  puVar4 = &stack0xfffffffffffffff0;
  do {
    register0x00000008 = (BADSPACEBASE *)(puVar4 + -0xf0);
    pdVar9 = (double *)(puVar4 + -0xf0);
    pdVar10 = (double *)(puVar4 + -0xf0);
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(double **)(puVar4 + -0x38) = unaff_x23;
    *(double **)(puVar4 + -0x30) = unaff_x22;
    *(double **)(puVar4 + -0x28) = unaff_x21;
    *(double **)(puVar4 + -0x20) = unaff_x20;
    *(double **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = puVar14;
    unaff_x29 = puVar4 + -0x10;
    pdVar6 = param_1;
    func_0x000107741cf4();
    pdVar11 = param_3;
    pdVar7 = param_3;
    while( true ) {
      while( true ) {
        param_3 = pdVar7 + 0xe;
        if (pdVar7 == param_4) {
          *param_1 = (double)param_2;
          uVar5 = 1;
          pdVar9 = pdVar6;
          goto code_r0x0001077305a8;
        }
        if (*(int *)param_2 == 0) break;
        uVar5 = *(int *)param_2 == 1;
        pdVar8 = pdVar6;
        if ((!(bool)uVar5) || (uVar5 = *(int *)(pdVar7 + 0xd) == 3, !(bool)uVar5))
        goto code_r0x0001077305a4;
        func_0x000107743910();
        pdVar8 = param_2 + 1;
        func_0x000107297a3c();
        if (pdVar8 == (double *)0x0) goto code_r0x0001077305a4;
        param_2 = pdVar6 + 7;
        pdVar6 = pdVar8;
        pdVar7 = param_3;
      }
      func_0x0001073982a4();
      if (*(int *)(pdVar7 + 0xd) != 2) break;
      func_0x0001072cb4bc();
      uVar12 = (ulong)(uint)(int)*pdVar7;
      lVar2 = *(long *)*param_2;
      uVar1 = ((long *)*param_2)[1] - lVar2 >> 6;
      uVar5 = uVar12 == uVar1;
      pdVar8 = pdVar7;
      if (uVar1 <= uVar12) goto code_r0x0001077305a4;
      param_2 = (double *)(lVar2 + uVar12 * 0x40);
      pdVar6 = pdVar7;
      pdVar7 = param_3;
    }
    uVar5 = *(int *)(pdVar7 + 0xd) == 3;
    pdVar8 = param_2;
    if (!(bool)uVar5) {
code_r0x0001077305a4:
      *param_1 = 0.0;
      pdVar9 = pdVar8;
code_r0x0001077305a8:
      *(int *)(param_1 + 8) = 0;
      goto code_r0x0001077305ac;
    }
    func_0x000107743910();
    func_0x000107743a58();
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    if ((int)pdVar8 == 0) {
      func_0x000107743910();
      func_0x000107743978();
      if (((int)pdVar8 == 0) || (uVar5 = 0, param_3 != param_4)) goto code_r0x0001077305a4;
      func_0x000107743184(*param_2);
      *(undefined4 *)(puVar4 + -0xd8) = 3;
      *(double *)(puVar4 + -0xd0) = (double)(ulong)(extraout_x8_00 >> 6);
      param_2 = (double *)(puVar4 + -0xd8);
      unaff_x30 = &UNK_107730630;
      goto code_r0x000104c32a18;
    }
    *(undefined8 *)(puVar4 + -0xf0) = 0;
    *(undefined8 *)(puVar4 + -0xe8) = 0;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    func_0x000107743184(*param_2);
    func_0x0001072ac134(puVar4 + -0xf0,extraout_x8 >> 6);
    puVar13 = (undefined8 *)*param_2;
    param_2 = (double *)*puVar13;
    unaff_x23 = (double *)puVar13[1];
    uVar5 = param_2 == unaff_x23;
    if ((bool)uVar5) {
      func_0x000107327958(puVar4 + -0x90,puVar4 + -0xf0);
      dVar16 = *(double *)(puVar4 + -0x88);
      dVar15 = *(double *)(puVar4 + -0x90);
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(int *)param_1 = 0;
      param_1[2] = dVar16;
      param_1[1] = dVar15;
      *(undefined8 *)(puVar4 + -0xd8) = 0;
      *(undefined8 *)(puVar4 + -0xd0) = 0;
      func_0x000104c33108(puVar4 + -0xd8);
      func_0x000107742a28();
      func_0x000104c33108(puVar4 + -0x90);
      func_0x000107269124();
code_r0x0001077305ac:
      func_0x000107741a68();
      if ((bool)uVar5) {
        return pdVar9;
      }
      ___stack_chk_fail();
      func_0x000107269124();
      func_0x000107742904();
      if (*(int *)(pdVar10 + 0xf) != 0) {
        *(undefined1 **)(puVar4 + -0x100) = unaff_x29;
        *(undefined **)(puVar4 + -0xf8) = &UNK_107730678;
        func_0x00010563ab98();
        if (*(int *)(pdVar10 + 0xf) != 1) {
          *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0x100;
          *(undefined **)(puVar4 + -0x108) = &UNK_107730690;
          func_0x00010563ab98();
          *(double **)(puVar4 + -0x130) = param_4;
          *(double **)(puVar4 + -0x128) = pdVar9;
          *(undefined1 **)(puVar4 + -0x120) = puVar4 + -0x110;
          *(undefined **)(puVar4 + -0x118) = &UNK_1077306ac;
          func_0x0001077306e4();
          dVar15 = *pdVar11;
          dVar17 = pdVar11[3];
          dVar16 = pdVar11[2];
          extraout_x8_01[1] = pdVar11[1];
          *extraout_x8_01 = dVar15;
          extraout_x8_01[3] = dVar17;
          extraout_x8_01[2] = dVar16;
          extraout_x8_01[4] = pdVar11[4];
          return pdVar10;
        }
      }
      return pdVar10 + 1;
    }
    param_1 = (double *)(puVar4 + -0xd8);
    puVar14 = &UNK_107730560;
    puVar4 = puVar4 + -0xf0;
    unaff_x21 = param_3;
    unaff_x22 = param_2;
  } while( true );
}



/* Entry: 10773081c; end: 107730823;  */

void FUN_10773081c(void)

{
  return;
}



/* Entry: 1077309f8; end: 107730a03;  */

void FUN_1077309f8(void)

{
  return;
}



/* Entry: 107730afc; end: 107730b3f;  */

void FUN_107730afc(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x000107742644((&PTR_DAT_1109d2308)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 107730cf8; end: 107730cfb;  */

undefined8 * FUN_107730cf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107730fd4; end: 107731037;  */

/* WARNING: Possible PIC construction at 0x000107731154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107731158) */
/* WARNING: Removing unreachable block (ram,0x000107731170) */
/* WARNING: Removing unreachable block (ram,0x000107731160) */
/* WARNING: Removing unreachable block (ram,0x00010773117c) */
/* WARNING: Removing unreachable block (ram,0x000107731190) */
/* WARNING: Removing unreachable block (ram,0x0001077311a0) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x000107731188) */

void FUN_107730fd4(undefined1 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  undefined1 *unaff_x20;
  undefined1 *puVar5;
  undefined *puVar6;
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
  puVar6 = &UNK_107731038;
  puVar5 = param_1;
  func_0x000107742904();
  puVar2 = auStack_b0;
  puVar3 = extraout_x8;
  while( true ) {
    puVar4 = puVar5;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x60);
    *(undefined1 **)(puVar2 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar5;
    *(undefined **)(puVar2 + -8) = puVar6;
    func_0x000107741be8();
    func_0x0001077432ec();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      puVar3 = puVar4;
      func_0x0001077515e0();
      uVar1 = (uint)puVar3 & 0xffff;
      in_ZR = uVar1 == 0xff;
      if (uVar1 < 0x100) {
        func_0x000107743394();
        func_0x000107742af8();
      }
      else {
        uVar1 = (uint)puVar3 & 0xff;
        in_ZR = uVar1 == 3;
        if ((bool)in_ZR) {
          func_0x000107743394();
          func_0x000107742af8();
        }
        else {
          in_ZR = uVar1 == 2;
          if ((bool)in_ZR) {
            func_0x000107743394();
            func_0x000107742af8();
          }
          else {
            in_ZR = uVar1 == 1;
            if ((bool)in_ZR) {
              func_0x000107743394();
              func_0x000107742af8();
            }
            else {
              func_0x000107743394();
              func_0x000107742af8();
            }
          }
        }
      }
      func_0x0001077431c4();
    }
    func_0x000107741a50();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107742d44();
    func_0x000104c2f714();
    func_0x000107742904();
    *(undefined1 **)(puVar2 + -0x80) = puVar4;
    *(undefined1 **)(puVar2 + -0x78) = param_1;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x68) = &UNK_107731138;
    puVar5 = puVar3;
    func_0x000107741b64();
    puVar3 = puVar2 + -0x108;
    puVar6 = &UNK_107731158;
    puVar2 = puVar2 + -0x110;
    unaff_x20 = puVar4;
  }
  return;
}



/* Entry: 10773122c; end: 107731283;  */

undefined8 * FUN_10773122c(undefined8 *param_1)

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
    func_0x000107751a40();
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
  FUN_10773122c();
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
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 107731478; end: 10773147b;  */

undefined8 * FUN_107731478(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077315bc; end: 10773161f;  */

void FUN_1077315bc(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  
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
  uVar1 = param_1;
  func_0x000107742904();
  func_0x000107743424(extraout_x8);
  if ((uVar1 >> 0x20 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    *(double *)(param_1 + 0x10) = (double)(uVar1 & 0xffffffff);
    uVar2 = 2;
  }
  func_0x0001077424ac(uVar2);
  return;
}



/* Entry: 107731754; end: 10773178b;  */

void FUN_107731754(uint param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107743424();
  if ((param_2 >> 0x20 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    *(double *)(unaff_x19 + 0x10) = (double)(param_1 & 0xff);
    uVar1 = 2;
  }
  func_0x0001077424ac(uVar1);
  return;
}



/* Entry: 107731944; end: 107731947;  */

undefined8 * FUN_107731944(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107731be4; end: 107731bf7;  */

void FUN_107731be4(void)

{
  func_0x000107731bf8();
  return;
}



/* Entry: 107731f78; end: 107731fa3;  */

undefined8 FUN_107731f78(undefined8 param_1)

{
  undefined1 in_ZR;
  
  do {
    func_0x00010774367c();
    func_0x000107743b50();
  } while (!(bool)in_ZR);
  return param_1;
}



/* Entry: 1077322d8; end: 10773243b;  */

int * FUN_1077322d8(int *param_1)

{
  undefined1 in_ZR;
  int *piVar1;
  undefined1 *unaff_x20;
  int aiStack_218 [34];
  undefined1 *puStack_190;
  int *piStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_168 [112];
  int aiStack_f8 [2];
  undefined8 auStack_f0 [7];
  byte bStack_b8;
  undefined1 auStack_b0 [56];
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  
  func_0x000107742ea0();
  func_0x000107741ca8();
  func_0x0001077432ec();
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010774238c();
    goto LAB_1077323ac;
  }
  func_0x000107751674(aiStack_f8);
  if ((bStack_b8 & 1) == 0) {
    func_0x00010774238c();
  }
  else {
    in_ZR = aiStack_f8[0] == 2;
    if ((bool)in_ZR) {
      func_0x000107743c10();
      func_0x0001077428b0();
LAB_107732394:
      func_0x00010774357c();
    }
    else {
      in_ZR = aiStack_f8[0] == 3;
      if ((bool)in_ZR) {
        func_0x000107743c10();
        func_0x0001077428b0();
        goto LAB_107732394;
      }
      in_ZR = aiStack_f8[0] == 4;
      if ((bool)in_ZR) {
        auStack_78[0] = 7;
        func_0x0001077428b0();
        goto LAB_107732394;
      }
      in_ZR = aiStack_f8[0] == 1;
      if ((bool)in_ZR) {
        auStack_78[0] = 3;
        uStack_70 = auStack_f0[0];
        func_0x0001077428b0();
        goto LAB_107732394;
      }
      func_0x000104c2fe00(auStack_b0,auStack_f0);
      func_0x000104c33004(auStack_78,auStack_b0);
      func_0x0001077765a4(auStack_168);
      func_0x00010774357c();
      func_0x000104c2f714(auStack_b0);
    }
    unaff_x20 = auStack_168;
    func_0x00010774257c();
    func_0x000107742bf8();
  }
  param_1 = aiStack_f8;
  func_0x00010737c444();
LAB_1077323ac:
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774357c();
  func_0x000104c2f714(auStack_b0);
  func_0x00010737c444(aiStack_f8);
  func_0x000107742904();
  puStack_178 = &UNK_10773243c;
  puStack_190 = unaff_x20;
  piStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x000107741b64();
  piVar1 = aiStack_218;
  FUN_1077322d8();
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
    return piVar1;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  *(undefined ***)piVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(piVar1 + 0x12);
  func_0x00010772d754(piVar1 + 10);
  func_0x0001072c9884(piVar1 + 4);
  return piVar1;
}



/* Entry: 10773269c; end: 10773269f;  */

undefined8 * FUN_10773269c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107732834; end: 107732897;  */

/* WARNING: Possible PIC construction at 0x00010773294c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107732950) */
/* WARNING: Removing unreachable block (ram,0x000107732968) */
/* WARNING: Removing unreachable block (ram,0x000107732958) */
/* WARNING: Removing unreachable block (ram,0x000107732974) */
/* WARNING: Removing unreachable block (ram,0x000107732988) */
/* WARNING: Removing unreachable block (ram,0x000107732998) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x000107732980) */

void FUN_107732834(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *extraout_x8;
  undefined8 unaff_x20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar5;
  undefined *puVar6;
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
  puVar6 = &UNK_107732898;
  uVar2 = param_1;
  func_0x000107742904();
  puVar1 = auStack_b0;
  puVar3 = extraout_x8;
  while( true ) {
    uVar4 = uVar2;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x170);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x27;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    func_0x000107741ca8(puVar3);
    FUN_107751714(puVar1 + -0x78);
    if ((puVar1[-0x40] & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      func_0x000107743998();
      func_0x000107743a64();
      func_0x0001077434c4();
      func_0x000107742ab8();
      func_0x000107742bf8();
      func_0x00010774378c();
      func_0x0001077432d4();
    }
    func_0x000107743584();
    func_0x0001077419ec();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    uVar2 = uVar4;
    func_0x00010774378c();
    func_0x0001077432d4();
    func_0x000107743584();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -400) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x188) = uVar4;
    *(undefined1 **)(puVar1 + -0x180) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x178) = &UNK_107732930;
    func_0x000107741b64();
    puVar3 = puVar1 + -0x218;
    puVar6 = &UNK_107732950;
    puVar1 = puVar1 + -0x220;
    param_1 = uVar4;
  }
  return;
}



/* Entry: 107732a3c; end: 107732b27;  */

undefined8 * FUN_107732a3c(undefined8 *param_1)

{
  double *pdVar1;
  undefined1 in_ZR;
  double *extraout_x8;
  long extraout_x9;
  long lVar2;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  double dVar3;
  undefined8 in_stack_000000f8;
  
  func_0x000107743aa8();
  func_0x000107741e88();
  *(undefined8 *)(unaff_x23 + 0x90) = 8;
  *(undefined8 *)(unaff_x23 + 0x88) = 0;
  func_0x000107742ed0();
  func_0x00010774347c();
  func_0x00010774241c();
  while (unaff_x24 != 0) {
    param_1 = (undefined8 *)*unaff_x22;
    func_0x0001077420ac(&stack0x00000020);
    func_0x0001077438c0();
    if ((bool)in_ZR) {
      func_0x0001077434f0();
      func_0x00010774316c();
      func_0x0001077432f4();
      func_0x000107742ae0();
    }
    else {
      func_0x000107743500();
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    unaff_x22 = unaff_x22 + 2;
    func_0x000107742ec4();
    if (!(bool)in_ZR) goto LAB_107732ae4;
  }
  func_0x000107743bf8();
  dVar3 = 0.0;
  pdVar1 = extraout_x8;
  for (lVar2 = extraout_x9; lVar2 != 0; lVar2 = lVar2 + -8) {
    dVar3 = dVar3 + *pdVar1;
    pdVar1 = pdVar1 + 1;
  }
  func_0x000107742dc0(dVar3);
  func_0x000107743734();
  func_0x0001077420e4();
  func_0x0001077429bc();
LAB_107732ae4:
  func_0x0001077430e4();
  func_0x000107741c94(in_stack_000000f8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x0001077430e4();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107732d30; end: 107732d7f;  */

void FUN_107732d30(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = *param_2;
    param_1[1] = lVar1 + 1;
    return;
  }
  func_0x000107732d80(auStack_18);
  return;
}



/* Entry: 107733060; end: 107733073;  */

void FUN_107733060(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107733360; end: 10773341f;  */

double * FUN_107733360(double *param_1)

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
      func_0x000107742624(dVar2 - *param_1);
      func_0x000107742e14();
      func_0x0001077420e4();
      func_0x0001077429bc();
      goto LAB_1077333e8;
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
LAB_1077333e8:
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
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077335d8; end: 107733697;  */

void FUN_1077335d8(double param_1,double param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  long extraout_x8;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  pdVar2 = (double *)*param_3;
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
    param_1 = *pdVar2;
    func_0x000107742df4();
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
  *(double *)(extraout_x8 + 8) = param_1 * param_2;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 10773393c; end: 10773393f;  */

undefined8 * FUN_10773393c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733c98; end: 107733cbb;  */

void FUN_107733c98(long param_1,long *param_2)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = 1.0;
  pdVar1 = (double *)*param_2;
  for (lVar2 = param_2[1] << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    dVar3 = dVar3 * *pdVar1;
    pdVar1 = pdVar1 + 1;
  }
  *(double *)(param_1 + 8) = dVar3;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107733ff0; end: 107734003;  */

void FUN_107733ff0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077342d0; end: 107734393;  */

undefined8 * FUN_1077342d0(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined8 uVar2;
  
  func_0x000107742954();
  func_0x0001077418c8();
  func_0x000107742010();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      uVar2 = *param_1;
      func_0x000107742e2c();
      _pow(uVar2,*param_1);
      func_0x000107742624();
      func_0x000107742e14();
      func_0x0001077420e4();
      func_0x0001077429bc();
      goto LAB_10773435c;
    }
    func_0x0001077422ac();
    param_1 = (undefined8 *)*param_1;
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
LAB_10773435c:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773454c; end: 10773460b;  */

void FUN_10773454c(undefined8 *param_1)

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
  _log10();
  func_0x00010774250c();
  return;
}



/* Entry: 107734874; end: 107734877;  */

undefined8 * FUN_107734874(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107734aec; end: 107734b0b;  */

void FUN_107734aec(void)

{
  _sin();
  func_0x00010774250c();
  return;
}



/* Entry: 107734d58; end: 107734d6b;  */

void FUN_107734d58(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107734fec; end: 107735093;  */

undefined8 * FUN_107734fec(undefined8 *param_1)

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
    _asin(*param_1);
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
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773524c; end: 10773530b;  */

void FUN_10773524c(undefined8 *param_1)

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
  _atan();
  func_0x00010774250c();
  return;
}



/* Entry: 1077355c4; end: 1077355c7;  */

undefined8 * FUN_1077355c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077358e4; end: 10773592f;  */

void FUN_1077358e4(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  pfVar2 = *(float **)*param_2;
  pfVar1 = (float *)((long *)*param_2)[1];
  if (pfVar2 == pfVar1) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0x7ff0000000000000;
    while (pfVar2 != pfVar1) {
      uVar4 = NEON_fminnm((double)*pfVar2,uVar4);
      pfVar2 = pfVar2 + 1;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 107735c74; end: 107735c77;  */

undefined8 * FUN_107735c74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107735ec8; end: 107735f83;  */

void FUN_107735ec8(double param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  func_0x000107741e20(*param_2);
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
    func_0x000107742aec();
    func_0x000107743ba0();
    if ((bool)uVar1) {
      func_0x0001077429cc();
      func_0x000107742b70();
    }
    else {
      func_0x0001077429c4();
      func_0x0001077428fc();
    }
    func_0x00010774207c();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741d08();
  func_0x000107742088();
  func_0x000107742904();
  *(long *)(extraout_x8 + 8) = (long)param_1;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 1077361e4; end: 1077361e7;  */

undefined8 * FUN_1077361e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773645c; end: 107736463;  */

void FUN_10773645c(long param_1,double param_2)

{
  *(long *)(param_1 + 8) = (long)param_2;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107736698; end: 1077366ab;  */

void FUN_107736698(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107736924; end: 107736967;  */

void FUN_107736924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 unaff_w19;
  long unaff_x20;
  
  func_0x000107743614();
  func_0x000107264c5c(param_3);
  func_0x000107278cfc();
  *(undefined1 *)(unaff_x20 + 8) = unaff_w19;
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107736c78; end: 107736c7b;  */

undefined8 * FUN_107736c78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107736ecc; end: 107736fa3;  */

/* WARNING: Possible PIC construction at 0x000107737084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107737088) */
/* WARNING: Removing unreachable block (ram,0x0001077370a4) */
/* WARNING: Removing unreachable block (ram,0x000107737094) */
/* WARNING: Removing unreachable block (ram,0x0001077370b0) */

undefined8 * FUN_107736ecc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000160;
  
  func_0x000107743c34();
  puVar4 = &stack0x00000160;
  func_0x0001077418a4();
  in_stack_00000068 = 0;
  func_0x00010774215c();
  param_1 = (undefined8 *)*param_1;
  func_0x000107742138(&stack0x000000a8,param_1);
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
    unaff_x20 = *(long *)(unaff_x20 + 0x80);
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
  puVar5 = &UNK_107736fa4;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar4;
    *(undefined **)(puVar1 + -8) = puVar5;
    func_0x000107741be8();
    func_0x0001077433b0();
    func_0x00010724ef84();
    func_0x0001078bbeac(puVar1 + -0x78,puVar1 + -0x90);
    func_0x0001077439b8();
    func_0x0001077432e4();
    func_0x000104c2f714(puVar1 + -0x60);
    puVar3 = (undefined8 *)(puVar1 + -0x78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010774338c();
    func_0x000107741a50();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    func_0x000107742d44();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xb8) = unaff_x21;
    *(long *)(puVar1 + -0xb0) = unaff_x20;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x98) = &UNK_107737024;
    puVar4 = (undefined8 *)(puVar1 + -0xa0);
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x188) = 0;
    func_0x000107742168();
    puVar3 = (undefined8 *)*puVar3;
    func_0x000107741e48();
    func_0x000107743728();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar2 = (int)unaff_x20 == 1;
    if (!(bool)uVar2) break;
    func_0x0001077421a8();
    func_0x00010774371c();
    puVar5 = &UNK_107737088;
    puVar1 = puVar1 + -0x1f0;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(long *)(puVar1 + -0x210) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x208) = unaff_x19;
  *(undefined8 **)(puVar1 + -0x200) = puVar4;
  *(undefined **)(puVar1 + -0x1f8) = &DAT_1077370f8;
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 1077371f8; end: 10773739f;  */

long * FUN_1077371f8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_a0;
  func_0x000107742a34();
  func_0x000107741cf4();
  func_0x000104c2d614();
  if (param_2 == 0) {
    lVar2 = unaff_x21;
    func_0x000104c2d614();
    if ((int)lVar2 == 0) {
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      lVar2 = unaff_x20;
      func_0x000104c2d634();
      func_0x0001072dd514(&lStack_a0,lVar2);
      func_0x000107264c5c();
      unaff_x23 = 0;
      while( true ) {
        func_0x000107742cf0();
        func_0x0001072784dc();
        in_ZR = unaff_x21 == -1;
        if ((bool)in_ZR) break;
        lVar2 = unaff_x20;
        func_0x000107526df0(&lStack_80);
        func_0x000107743a14();
        func_0x0001077432dc();
        unaff_x23 = unaff_x21 + 1;
        unaff_x21 = lVar2;
      }
      func_0x000107526df0(&lStack_80);
      func_0x000107743a14();
      func_0x0001077432dc();
      func_0x0001073fb2d4(&lStack_80,&lStack_a0);
      *(undefined8 *)(unaff_x19 + 0x10) = uStack_78;
      *(long *)(unaff_x19 + 8) = lStack_80;
      lStack_80 = 0;
      uStack_78 = 0;
      func_0x000107742a28();
      plVar3 = &lStack_80;
      func_0x00010726b09c();
      func_0x000107743708();
    }
    else {
      func_0x000104c2fe00(&lStack_80);
      func_0x000107404228(&lStack_a0,&lStack_80,1);
      *(undefined8 *)(unaff_x19 + 0x10) = uStack_98;
      *(long *)(unaff_x19 + 8) = lStack_a0;
      lStack_a0 = 0;
      uStack_98 = 0;
      *(undefined4 *)(unaff_x19 + 0x40) = 1;
      func_0x000107742d20();
      func_0x0001077432dc();
    }
  }
  else {
    func_0x0001072d124c(&lStack_80);
    *(undefined8 *)(unaff_x19 + 0x10) = uStack_78;
    *(long *)(unaff_x19 + 8) = lStack_80;
    lStack_80 = 0;
    uStack_78 = 0;
    func_0x000107742a28();
    plVar3 = &lStack_80;
    func_0x00010726b09c();
  }
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0001077432dc();
  func_0x000107743708();
  func_0x000107742904();
  puVar4 = &UNK_1077373a0;
  func_0x000107743290();
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar4;
  func_0x0001077418c8();
  func_0x000107741f34();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424e0();
      func_0x000107743318();
      func_0x000107743810();
      FUN_1077371f8();
      func_0x000107742bc8();
      func_0x000107742bd8();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107743120();
        func_0x0001077439c4();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto code_r0x000107737448;
    }
    func_0x0001077422ac();
    plVar3 = (long *)*plVar3;
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
code_r0x000107737448:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x0001077429e0();
  func_0x000107742904();
  *plVar3 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar3 + 9);
  func_0x00010772d754(plVar3 + 5);
  func_0x0001072c9884(plVar3 + 2);
  return plVar3;
}



/* Entry: 10773765c; end: 107737677;  */

void FUN_10773765c(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1077379c4; end: 107737acf;  */

undefined8 * FUN_1077379c4(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined1 auStack_1b0 [240];
  undefined1 auStack_c0 [56];
  undefined8 auStack_88 [17];
  
  func_0x000107743290();
  func_0x0001077418c8();
  func_0x000107742d28();
  func_0x000107743820();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x000107742f88();
      func_0x0001077436e0(auStack_1b0);
      param_1 = auStack_88;
      func_0x000107737920(param_1,auStack_c0,auStack_1b0);
      func_0x000107742d20();
      func_0x000107742f80();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107743120();
        func_0x000107742f74();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107737a7c;
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
LAB_107737a7c:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742f34();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107737d9c; end: 107737d9f;  */

undefined8 * FUN_107737d9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107738050; end: 107738153;  */

/* WARNING: Possible PIC construction at 0x0001077383d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077383d4) */
/* WARNING: Removing unreachable block (ram,0x0001077383ec) */
/* WARNING: Removing unreachable block (ram,0x0001077383dc) */
/* WARNING: Removing unreachable block (ram,0x0001077383f8) */
/* WARNING: Removing unreachable block (ram,0x0001077383c8) */

long * FUN_107738050(long *param_1)

{
  undefined8 **ppuVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long *unaff_x21;
  long *plVar10;
  long unaff_x24;
  long *plVar11;
  long lVar12;
  undefined8 in_stack_00000050;
  undefined1 auStack_5d0 [1048];
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  
  func_0x000107743290();
  plVar7 = &lStack_1b0;
  func_0x000107741834();
  func_0x000107742d28();
  func_0x000107743800();
  do {
    uVar5 = unaff_x24 == 2;
    if ((bool)uVar5) {
      unaff_x21 = &lStack_1a0;
      func_0x000107742f88();
      func_0x0001077436c8();
      func_0x00010774365c();
      func_0x000107742d20();
      func_0x000107742f80();
      func_0x000107742c84();
      if ((bool)uVar5) {
        func_0x000107743120();
        func_0x000107742f74();
        param_1 = plVar7;
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
        param_1 = plVar7;
      }
      func_0x000107742368();
      goto LAB_107738100;
    }
    func_0x0001077422b8();
    param_1 = (long *)*param_1;
    func_0x000107741f6c();
    func_0x000107742d80();
    if ((bool)uVar5) {
      func_0x0001077429f0();
      func_0x000107742184();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar5);
  uVar5 = 0;
LAB_107738100:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742f34();
  func_0x000107742904();
  puVar8 = &UNK_107738154;
  plVar6 = extraout_x8;
  func_0x000107742f4c();
  puStack_b0 = &stack0x00000050;
  puStack_a8 = puVar8;
  func_0x000107743300();
  lVar9 = 0;
  func_0x00010774205c();
  uStack_110 = extraout_x8_00;
  plVar7 = (long *)*param_1;
  plVar10 = (long *)(param_1[1] * 0x70);
  do {
    if (plVar10 == (long *)0x0) {
      lStack_198 = 0;
      plStack_190 = (long *)0x0;
      lStack_188 = 0;
      plVar10 = &lStack_198;
      plVar6 = &lStack_198;
      func_0x0001074b01dc(plVar6,lVar9);
      plVar7 = (long *)*unaff_x21;
      plVar11 = plVar7 + unaff_x21[1] * 0xe;
      for (; uVar5 = plVar7 == plVar11, !(bool)uVar5; plVar7 = plVar7 + 0xe) {
        plVar6 = plVar7;
        func_0x0001075725f8();
        plVar3 = plStack_190;
        lVar9 = *(long *)*plVar6;
        lVar2 = ((long *)*plVar6)[1];
        lVar12 = lVar2 - lVar9;
        if (0 < lVar12) {
          if (lStack_188 - (long)plStack_190 < lVar12) {
            plVar6 = &lStack_198;
            func_0x00010727776c(plVar6,((long)plStack_190 - lStack_198) / 0x70 + lVar12 / 0x70);
            func_0x000107277858(&lStack_180,plVar6,((long)plVar3 - lStack_198) / 0x70,&lStack_188);
            lVar2 = (long)ppuStack_170 + lVar12;
            lVar9 = lVar9 + 8;
            ppuVar1 = ppuStack_170;
            for (; lVar12 != 0; lVar12 = lVar12 + -0x70) {
              func_0x0001072786d8((long)ppuVar1 + 8,lVar9);
              ppuVar1 = (undefined8 **)((long)ppuVar1 + 0x70);
              lVar9 = lVar9 + 0x70;
            }
            ppuStack_170 = (undefined8 **)lVar2;
            func_0x00010729546c(&lStack_198,&lStack_180,plVar3);
            plVar6 = &lStack_180;
            func_0x000107277a38();
          }
          else {
            plVar6 = &lStack_188;
            func_0x000107731bf8(plVar6,lVar9,lVar2,plStack_190);
            plStack_190 = plVar6;
          }
        }
      }
      func_0x000107743a00();
      ppuStack_170 = (undefined8 **)lStack_1a8;
      lStack_178 = lStack_1b0;
      lStack_1b0 = 0;
      lStack_1a8 = 0;
      uStack_118 = 8;
      func_0x000107742ab8();
      func_0x000107742bf8();
      func_0x000107743144();
      func_0x0001077436d8();
code_r0x0001077382f8:
      func_0x000107741c94(uStack_110);
      if ((bool)uVar5) {
        return plVar6;
      }
      ___stack_chk_fail();
      func_0x0001077436d8();
      func_0x000107742904();
      puVar8 = &UNK_10773834c;
      func_0x0001077438e0();
      ppuStack_170 = &puStack_b0;
      puStack_168 = puVar8;
      func_0x000107741970();
      func_0x00010774222c();
      func_0x000107742764(0);
      func_0x0001077430c8();
      func_0x000107741c60();
      do {
        plVar7 = (long *)*plVar10;
        func_0x0001077420ac(auStack_5d0);
        func_0x000107743260();
        if ((bool)uVar5) {
          func_0x0001077430d0();
          func_0x0001077430c0();
          uVar4 = uVar5;
        }
        else {
          func_0x000107742cac();
          func_0x0001077428fc();
          uVar4 = uVar5;
        }
        func_0x000107742ca4();
        func_0x000107742668();
        uVar5 = 1;
      } while ((bool)uVar4);
      func_0x000107742c5c();
      func_0x000107741c94(uStack_1b8);
      if ((bool)uVar4) {
        return plVar7;
      }
      ___stack_chk_fail();
      func_0x000107742784();
      func_0x00010727f7f8();
      func_0x000107742c5c();
      func_0x000107742904();
      *plVar7 = (long)&PTR_DAT_1109d1d80;
      func_0x000104c2f714(plVar7 + 9);
      func_0x00010772d754(plVar7 + 5);
      func_0x0001072c9884(plVar7 + 2);
      return plVar7;
    }
    uVar5 = (int)plVar7[0xd] == 8;
    if (!(bool)uVar5) {
      func_0x00010774238c();
      goto code_r0x0001077382f8;
    }
    plVar6 = plVar7;
    func_0x0001075725f8();
    func_0x000107743184(*plVar6);
    lVar9 = extraout_x8_01 / 0x70 + lVar9;
    plVar7 = plVar7 + 0xe;
    plVar10 = plVar10 + -0xe;
  } while( true );
}



/* Entry: 107738554; end: 1077386b7;  */

void FUN_107738554(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
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
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_88 = &uStack_80;
  puStack_70 = &uStack_68;
  func_0x0001077386b8(&puStack_70,*(undefined8 *)*param_2,((undefined8 *)*param_2)[1]);
  func_0x0001077386b8(&puStack_88,*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x000107743184(*param_2);
  func_0x0001072dd514(&uStack_a0,
                      (((long *)*param_3)[1] - *(long *)*param_3) / 0x38 + extraout_x8 / 0x38);
  puStack_b0 = puStack_70;
  puStack_48 = puStack_88;
  uStack_51 = 0;
  puStack_50 = &uStack_a0;
  while (puStack_48 != &uStack_80) {
    puVar2 = puStack_b0;
    func_0x0001077387b8(puStack_b0,&uStack_68,puStack_48 + 4);
    func_0x0001077434a0(puVar2 == puStack_b0);
    puVar1 = puStack_48;
    if (puVar2 == &uStack_68) break;
    func_0x0001077387b8(puStack_48,&uStack_80,puVar2 + 4);
    func_0x0001077434a0(puStack_48 == puVar1);
    puStack_b0 = puVar2;
  }
  func_0x00010774339c();
  func_0x0001073fb2d4();
  func_0x0001077423a8();
  func_0x00010726e078(&uStack_a0);
  func_0x0001077436e8();
  func_0x0001077437c0();
  return;
}



/* Entry: 107738a88; end: 107738a9b;  */

void FUN_107738a88(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107738f2c; end: 107738f3b;  */

/* WARNING: Possible PIC construction at 0x0001077390fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739100) */
/* WARNING: Removing unreachable block (ram,0x000107739118) */
/* WARNING: Removing unreachable block (ram,0x000107739108) */
/* WARNING: Removing unreachable block (ram,0x000107739124) */

double * FUN_107738f2c(double *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  double *unaff_x20;
  long unaff_x21;
  double *unaff_x22;
  undefined *unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  double unaff_d8;
  undefined8 unaff_d9;
  
  pdVar4 = *(double **)*param_2;
  pdVar5 = (double *)((undefined8 *)*param_2)[1];
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
    *(double *)(puVar2 + -0x48) = unaff_d8;
    *(ulong *)(puVar2 + -0x40) = unaff_x24;
    *(undefined **)(puVar2 + -0x38) = unaff_x23;
    *(double **)(puVar2 + -0x30) = unaff_x22;
    *(long *)(puVar2 + -0x28) = unaff_x21;
    *(double **)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x000107741d18();
    *(undefined8 *)(puVar2 + -0x58) = extraout_x8;
    uVar3 = pdVar4 == pdVar5;
    if (!(bool)uVar3) break;
code_r0x000107739044:
    uVar6 = 1;
    pdVar4 = unaff_x22;
code_r0x000107739050:
    puVar2[-0xc0] = uVar6;
    uVar7 = 1;
    unaff_x22 = pdVar4;
code_r0x000107739058:
    *(undefined4 *)(puVar2 + -0x60) = uVar7;
    unaff_x20 = (double *)(puVar2 + -200);
    func_0x00010774257c();
    func_0x000107742bf8();
    func_0x000107741c94(*(undefined8 *)(puVar2 + -0x58));
    if ((bool)uVar3) {
      return param_1;
    }
    ___stack_chk_fail();
    *(double **)(puVar2 + -0x100) = unaff_x22;
    *(long *)(puVar2 + -0xf8) = unaff_x21;
    *(double **)(puVar2 + -0xf0) = unaff_x20;
    *(undefined8 *)(puVar2 + -0xe8) = unaff_x19;
    *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xd8) = &UNK_107739098;
    unaff_x29 = puVar2 + -0xe0;
    func_0x0001077418ec();
    func_0x000107742168();
    param_1 = (double *)*param_1;
    func_0x000107741dcc();
    func_0x000107742de8();
    if ((bool)uVar3) {
      func_0x0001077429cc();
      func_0x000107742a84();
      func_0x0001077420a0();
    }
    else {
      func_0x0001077429c4();
      func_0x0001077428fc();
    }
    func_0x00010774207c();
    uVar3 = (int)unaff_x20 == 1;
    if (!(bool)uVar3) {
      func_0x000107742088();
      func_0x0001077419ec();
      if ((bool)uVar3) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x000107741d08();
      func_0x000107742088();
      func_0x000107742904();
      *(double **)(puVar2 + -0x220) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x218) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x210) = unaff_x29;
      *(undefined **)(puVar2 + -0x208) = &DAT_107739160;
      *param_1 = (double)&PTR_DAT_1109d1d80;
      func_0x000104c2f714(param_1 + 9);
      func_0x00010772d754(param_1 + 5);
      func_0x0001072c9884(param_1 + 2);
      return param_1;
    }
    func_0x00010774376c();
    pdVar4 = *(double **)*param_1;
    pdVar5 = (double *)((undefined8 *)*param_1)[1];
    param_1 = (double *)(puVar2 + -0x188);
    unaff_x30 = &UNK_107739100;
    puVar2 = puVar2 + -0x200;
  }
  func_0x0001077429f8();
  unaff_x23 = &UNK_10de8ee0a;
code_r0x000107738f78:
  uVar3 = true;
  unaff_x22 = pdVar4;
  if (pdVar4 == unaff_x20) goto code_r0x000107739044;
  uVar3 = *(int *)(unaff_x21 + 0x68) == 7;
  switch(*(int *)(unaff_x21 + 0x68)) {
  case 0:
    if (*(int *)(pdVar4 + 0xd) != 0) break;
code_r0x00010773903c:
    pdVar4 = pdVar4 + 0xe;
    goto code_r0x000107738f78;
  case 1:
    uVar3 = 0;
    if (*(int *)(pdVar4 + 0xd) == 1) {
      bVar1 = *(byte *)(unaff_x21 + 8);
      unaff_x24 = (ulong)bVar1;
      param_1 = pdVar4;
      func_0x000107280568();
      uVar3 = 0;
      if (*(byte *)param_1 == bVar1) goto code_r0x00010773903c;
    }
    break;
  case 2:
    uVar3 = 0;
    if (*(int *)(pdVar4 + 0xd) == 2) {
      unaff_d8 = *(double *)(unaff_x21 + 8);
      param_1 = pdVar4;
      func_0x0001072cb4bc();
      uVar3 = 0;
      if (*param_1 == unaff_d8) goto code_r0x00010773903c;
    }
    break;
  case 3:
    uVar3 = *(int *)(pdVar4 + 0xd) == 3;
    if ((bool)uVar3) {
      param_1 = pdVar4;
      func_0x00010732393c();
      func_0x000104c32db4();
      if (((ulong)param_1 & 1) != 0) goto code_r0x00010773903c;
    }
    break;
  default:
    uVar7 = 0;
    goto code_r0x000107739058;
  case 7:
    uVar3 = *(int *)(pdVar4 + 0xd) == 7;
    if ((bool)uVar3) {
      param_1 = pdVar4;
      func_0x0001075b94a8();
      func_0x00010775f0dc();
      if ((int)param_1 != 0) goto code_r0x00010773903c;
    }
  }
  uVar6 = 0;
  goto code_r0x000107739050;
}



/* Entry: 10773930c; end: 1077393f7;  */

undefined8 * FUN_10773930c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x23;
  undefined1 auStack_158 [112];
  undefined8 auStack_e8 [17];
  
  func_0x0001077418c8();
  func_0x000107741f34();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x00010774376c();
      puVar2 = auStack_e8;
      func_0x000107739248(puVar2,param_1,auStack_158);
      func_0x00010774326c();
      if ((bool)uVar1) {
        func_0x0001077429f0();
        func_0x000107742b70();
        param_1 = puVar2;
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
        param_1 = puVar2;
      }
      func_0x0001077425ec();
      goto LAB_1077393b8;
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
LAB_1077393b8:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}


