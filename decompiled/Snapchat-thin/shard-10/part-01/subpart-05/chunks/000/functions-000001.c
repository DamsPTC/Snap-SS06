/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107699dc8; end: 107699f2f;  */

/* WARNING: Removing unreachable block (ram,0x00010769aa48) */
/* WARNING: Removing unreachable block (ram,0x00010769aa68) */
/* WARNING: Removing unreachable block (ram,0x00010769aaa0) */

void FUN_107699dc8(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_c30 [112];
  undefined1 auStack_bc0 [64];
  undefined1 auStack_b08 [112];
  undefined1 auStack_a98 [104];
  undefined4 uStack_a30;
  undefined1 *puStack_a20;
  undefined1 *puStack_a18;
  undefined1 *puStack_a10;
  undefined8 *puStack_a08;
  undefined1 ****ppppuStack_a00;
  undefined *puStack_9f8;
  undefined8 auStack_9d8 [3];
  undefined1 auStack_9c0 [8];
  undefined8 uStack_9b8;
  undefined4 uStack_958;
  undefined1 auStack_950 [8];
  undefined8 uStack_948;
  int iStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  int iStack_878;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  int iStack_800;
  undefined1 auStack_7f8 [8];
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  int iStack_790;
  undefined1 auStack_788 [104];
  undefined4 uStack_720;
  undefined1 auStack_700 [48];
  undefined1 ***pppuStack_6d0;
  undefined *puStack_6c8;
  byte abStack_690 [112];
  undefined1 auStack_620 [96];
  int iStack_5c0;
  undefined1 auStack_5b8 [104];
  undefined4 uStack_550;
  undefined1 **ppuStack_500;
  undefined *puStack_4f8;
  int iStack_360;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  int iStack_c0;
  
  func_0x000107707444();
  if ((bRam00000001136d2fe8 & 1) == 0) {
    param_1 = 0x1136d2fe8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d0f8(0x1137096d0);
      param_1 = 0x1136d2fe8;
      ___cxa_guard_release();
    }
  }
  func_0x000107718dd8();
  iStack_c0 = 0;
  func_0x000107707718();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x00010770c218(param_1);
    func_0x00010770d5dc();
    if (iStack_c0 == 0) {
      func_0x00010770b15c();
      func_0x000107712bc0();
      func_0x00010770c1a0();
      func_0x000107714830();
      func_0x000107715548();
      func_0x0001077161b8();
    }
    func_0x000107714850();
    func_0x000107714858();
    func_0x00010770c1c4();
    func_0x000107717b88();
    func_0x000107718518();
    if ((bool)in_ZR) {
      func_0x000107717204();
      func_0x00010756e584();
      func_0x00010771297c();
      func_0x000107714890();
    }
    else {
      func_0x00010770b73c();
    }
    func_0x00010770fcd4();
    func_0x000107714850();
  }
  func_0x00010770fe58();
  func_0x00010770c850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = 0x1136d2fe8;
  ___cxa_guard_abort(0x1136d2fe8);
  func_0x000107714988();
  puStack_2a8 = &DAT_107699f30;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x000107707444();
  if ((bRam00000001136d2ff0 & 1) == 0) {
    uVar2 = 0x1136d2ff0;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x000107709020(0x113709708);
      uVar2 = 0x1136d2ff0;
      ___cxa_guard_release(0x1136d2ff0);
    }
  }
  func_0x000107718dd8();
  iStack_360 = 0;
  func_0x000107707718();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x00010770c218(uVar2);
    func_0x00010770d5dc();
    if (iStack_360 == 0) {
      func_0x00010770b15c();
      func_0x000107712bc0();
      func_0x00010770c1a0();
      func_0x000107714830();
      func_0x000107715548();
      func_0x0001077161b8();
    }
    func_0x000107714850();
    func_0x000107714858();
    func_0x00010770c1c4();
    func_0x000107717b88();
    func_0x000107718518();
    if ((bool)in_ZR) {
      func_0x000107717204();
      func_0x00010756e584();
      func_0x00010771297c();
      func_0x000107714890();
    }
    else {
      func_0x00010770b73c();
    }
    func_0x00010770fcd4();
    func_0x000107714850();
  }
  func_0x00010770fe58();
  func_0x00010770c850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2ff0);
  func_0x000107714988();
  puVar3 = &DAT_10769a098;
  func_0x00010771cb48();
  ppuStack_500 = &puStack_2b0;
  puStack_4f8 = puVar3;
  func_0x000107707670();
  if ((bRam00000001136d2ff8 & 1) == 0) {
    puVar3 = (undefined *)0x1136d2ff8;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107714a40(0x113709740,&DAT_10f3507c8);
      puVar3 = (undefined *)0x1136d2ff8;
      ___cxa_guard_release(0x1136d2ff8);
    }
  }
  if ((bRam00000001136d3000 & 1) == 0) {
    puVar3 = (undefined *)0x1136d3000;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107714aa0(0x113709778,"value");
      puVar3 = (undefined *)0x1136d3000;
      ___cxa_guard_release(0x1136d3000);
    }
  }
  if ((bRam00000001136d3008 & 1) == 0) {
    puVar3 = (undefined *)0x1136d3008;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x00010770995c(0x1137097b0);
      puVar3 = (undefined *)0x1136d3008;
      ___cxa_guard_release(0x1136d3008);
    }
  }
  uStack_550 = 0;
  iStack_5c0 = 0;
  func_0x00010770b414();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x00010770c30c(puVar3);
    func_0x0001072955a4(auStack_620,abStack_690);
    if (iStack_5c0 == 0) {
      func_0x000107718210();
      func_0x00010726cda0(auStack_620,auStack_700);
      func_0x000107714848();
    }
    func_0x000107714838();
    func_0x000107714858();
    pbVar4 = abStack_690;
    func_0x0001072786d8(pbVar4,auStack_620);
    func_0x0001077164b0();
    if ((bool)in_ZR) {
      func_0x000107715d58();
      if ((*pbVar4 & 1) == 0) {
        func_0x000107714848();
        func_0x00010771e608();
        func_0x00010770b414();
        func_0x000107714898();
        if (!(bool)in_ZR) goto code_r0x00010769a1f8;
        func_0x000107714870();
        func_0x000107708828();
        func_0x00010770d3f8(auStack_5b8);
      }
      else {
        func_0x00010770b414();
        func_0x000107714898();
        if (!(bool)in_ZR) goto code_r0x00010769a1f0;
        func_0x000107714870();
        func_0x00010770c494(pbVar4);
        func_0x0001077154f4();
        func_0x00010770d854();
        func_0x000107714858();
        func_0x000107714848();
        func_0x00010771e608();
        func_0x00010770b414();
        func_0x000107714898();
        if (!(bool)in_ZR) goto code_r0x00010769a1f8;
        func_0x000107714870();
        func_0x000107708828();
        func_0x00010770d3f8(auStack_5b8);
      }
      func_0x000107714850();
      func_0x000107714858();
      func_0x000107711280();
      goto code_r0x00010769a1f8;
    }
    func_0x0001077085b0();
    func_0x00010770c460();
    func_0x000107714ad4();
code_r0x00010769a1f0:
    func_0x000107714848();
  }
  func_0x00010771e608();
code_r0x00010769a1f8:
  puVar7 = auStack_620;
  func_0x00010770c324();
  func_0x000107707b78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d3008);
    func_0x000107714988();
    puVar3 = &DAT_10769a388;
    func_0x00010771cb48();
    pppuStack_6d0 = &ppuStack_500;
    puStack_6c8 = puVar3;
    func_0x000107707670();
    if ((bRam00000001136d3010 & 1) == 0) {
      iVar1 = 0x136d3010;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010771b36c(0x1137097e8);
        ___cxa_guard_release(0x1136d3010);
      }
    }
    if ((bRam00000001136d3018 & 1) == 0) {
      iVar1 = 0x136d3018;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107714c58(0x113709820,&DAT_10f4229d3);
        ___cxa_guard_release(0x1136d3018);
      }
    }
    if ((bRam00000001136d3020 & 1) == 0) {
      iVar1 = 0x136d3020;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107714ac4(0x113709858,&DAT_10f4229e7);
        ___cxa_guard_release(0x1136d3020);
      }
    }
    if ((bRam00000001136d3028 & 1) == 0) {
      iVar1 = 0x136d3028;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107714fd4(0x113709890,&DAT_10f4229fc);
        ___cxa_guard_release(0x1136d3028);
      }
    }
    if ((bRam00000001136d3030 & 1) == 0) {
      iVar1 = 0x136d3030;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000107714b74(0x1137098c8,&DAT_10f422a13);
        ___cxa_guard_release(0x1136d3030);
      }
    }
    uStack_720 = 0;
    func_0x00010770c178(auStack_7f8);
    func_0x000107579348(auStack_7f8);
    func_0x00010770c8b0();
    if ((int)puVar7 == 0) {
      iStack_790 = 0;
      func_0x00010771d380();
      func_0x00010770c178();
      puVar7 = auStack_7f8;
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_790 == 0) {
        uStack_860 = 0x4024000000000000;
        func_0x00010771b0f8();
        func_0x00010770c2cc();
        func_0x000107714838();
      }
      iStack_800 = 0;
      func_0x00010770c178(&uStack_8e0);
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_800 == 0) {
        uStack_8d8 = 0x4024000000000000;
        iStack_878 = 2;
        func_0x00010770c2e4();
        func_0x000107714848();
      }
      iStack_878 = 0;
      func_0x00010770c178(auStack_950);
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_878 == 0) {
        uStack_948 = 0x4024000000000000;
        iStack_8e8 = 2;
        func_0x00010770c37c();
        func_0x000107714860();
      }
      iStack_8e8 = 0;
      func_0x00010770c178(auStack_9c0);
      func_0x00010770efe0();
      func_0x000107714860();
      if (iStack_8e8 == 0) {
        uStack_9b8 = 0x4024000000000000;
        uStack_958 = 2;
        func_0x00010770c184();
        func_0x000107714850();
      }
      func_0x000107717f18();
      func_0x00010771dbd8(auStack_9d8);
      func_0x00010758ee8c(auStack_9d8,auStack_7f8);
      func_0x00010758ee8c(auStack_9d8,&uStack_868);
      func_0x00010758ee8c(auStack_9d8,&uStack_8e0);
      puVar5 = auStack_9d8;
      func_0x00010758ee8c(puVar5,auStack_950);
      func_0x00010770f83c();
      puVar6 = auStack_9c0;
      func_0x00010770e7c8();
      func_0x00010770dc90(auStack_788);
      func_0x000107714850();
      func_0x000107715548();
      func_0x0001077161b8();
      func_0x000107714890();
      func_0x000107714848();
      func_0x000107714838();
      func_0x000107714830();
    }
    else {
      uStack_868 = 0;
      uStack_860 = 0;
      uStack_858 = 0;
      func_0x00010771dbd8(&uStack_868);
      uStack_7f0 = 0;
      puVar6 = (undefined1 *)0x2;
      iStack_790 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      uStack_7f0 = 0;
      iStack_790 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      uStack_7f0 = 0;
      iStack_790 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      uStack_7f0 = 0;
      iStack_790 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      func_0x000107277aa4(&uStack_8e0,&uStack_868);
      uStack_7e8 = uStack_8d8;
      uStack_7f0 = uStack_8e0;
      uStack_8e0 = 0;
      uStack_8d8 = 0;
      iStack_790 = 8;
      func_0x00010770c808(auStack_788);
      func_0x000107714890();
      func_0x00010771e2e8();
      puVar5 = &uStack_868;
      func_0x000107277d70();
    }
    func_0x000107711280();
    func_0x000107714890();
    func_0x000107707b78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      ___cxa_guard_abort(0x1136d3030);
      func_0x0001077149ec();
      puStack_9f8 = &DAT_10769a83c;
      puStack_a20 = puVar7;
      puStack_a18 = puVar6;
      puStack_a10 = auStack_788;
      puStack_a08 = puVar5;
      ppppuStack_a00 = &pppuStack_6d0;
      func_0x000107707670();
      if ((bRam00000001136d3038 & 1) == 0) {
        iVar1 = 0x136d3038;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x00010771b36c(0x113709900);
          ___cxa_guard_release(0x1136d3038);
        }
      }
      if ((bRam00000001136d3040 & 1) == 0) {
        iVar1 = 0x136d3040;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x000107714b90(0x113709938,&UNK_10f408e5a);
          ___cxa_guard_release(0x1136d3040);
        }
      }
      uStack_a30 = 0;
      func_0x00010770c178(auStack_b08);
      func_0x000107579348();
      func_0x00010770d5d0();
      if ((int)auStack_788 == 0) {
        func_0x0001077094d0();
      }
      else {
        func_0x000107716b44();
        func_0x000107713024();
        func_0x000107717630();
        func_0x00010771a224();
        func_0x000107714890();
        func_0x00010770ebe0();
      }
      func_0x00010770a7fc();
      func_0x00010770c808(auStack_a98);
      func_0x000107714890();
      func_0x000107715548();
      func_0x000107715978();
      func_0x000107717c94();
      func_0x000107714890();
      func_0x000107707e80();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      ___cxa_guard_abort(0x1136d3040);
      func_0x0001077149ec();
      func_0x000107707670();
      if ((bRam00000001136d3048 & 1) == 0) {
        iVar1 = 0x136d3048;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x00010770c70c(0x113709970);
          ___cxa_guard_release(0x1136d3048);
        }
      }
      if ((bRam00000001136d3050 & 1) == 0) {
        iVar1 = 0x136d3050;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x00010770c6fc(0x1137099a8);
          ___cxa_guard_release(0x1136d3050);
        }
      }
      if ((bRam00000001136d3058 & 1) == 0) {
        iVar1 = 0x136d3058;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x000107714998(0x1137099e0,&DAT_10f408d6d);
          ___cxa_guard_release(0x1136d3058);
        }
      }
      if ((bRam00000001136d3060 & 1) == 0) {
        iVar1 = 0x136d3060;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x000107714a38(0x113709a18,"visible");
          ___cxa_guard_release(0x1136d3060);
        }
      }
      if ((bRam00000001136d3068 & 1) == 0) {
        iVar1 = 0x136d3068;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          func_0x0001077149b4(0x113709a50,"none");
          ___cxa_guard_release(0x1136d3068);
        }
      }
      func_0x000107709214();
      func_0x00010770a524();
      func_0x000107716e58();
      func_0x000107579348();
      func_0x00010770c8b0();
      func_0x000107718a40();
      func_0x000107579a48(auStack_c30,auStack_bc0);
      func_0x00010770f314();
      func_0x000107714890();
      func_0x000107715ab8();
      func_0x000107707b78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        ___cxa_guard_abort(0x1136d3068);
        do {
          func_0x0001077149ec();
        } while( true );
      }
      return;
    }
  }
  return;
}



/* Entry: 10769c1f0; end: 10769c3bf;  */

/* WARNING: Possible PIC construction at 0x00010769c558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010769cf64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010769c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010769c670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010769c5f0) */
/* WARNING: Removing unreachable block (ram,0x00010769c5f8) */
/* WARNING: Removing unreachable block (ram,0x00010769cf68) */
/* WARNING: Removing unreachable block (ram,0x00010769cf70) */
/* WARNING: Removing unreachable block (ram,0x00010769c55c) */
/* WARNING: Removing unreachable block (ram,0x00010769c564) */
/* WARNING: Removing unreachable block (ram,0x00010769c674) */
/* WARNING: Removing unreachable block (ram,0x00010769c67c) */
/* WARNING: Removing unreachable block (ram,0x00010769c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010769c5dc) */
/* WARNING: Removing unreachable block (ram,0x00010769c5e4) */
/* WARNING: Removing unreachable block (ram,0x00010769c608) */
/* WARNING: Removing unreachable block (ram,0x00010769c6b4) */
/* WARNING: Removing unreachable block (ram,0x00010769c618) */

void FUN_10769c1f0(double param_1,double param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  char in_OV;
  undefined1 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  int iVar8;
  undefined1 *unaff_x20;
  undefined1 *puVar9;
  double *pdVar10;
  ulong unaff_x23;
  double *unaff_x24;
  undefined1 *unaff_x27;
  ulong unaff_x28;
  undefined8 **ppuVar11;
  undefined1 *unaff_x30;
  undefined *puVar12;
  double dVar13;
  int in_stack_00000148;
  undefined8 in_stack_000001c0;
  undefined1 *apuStack_370 [43];
  undefined1 auStack_218 [112];
  undefined1 auStack_1a8 [168];
  byte bStack_100;
  undefined1 auStack_c0 [112];
  byte bStack_50;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x00010771fbd0();
  func_0x000107707564();
  if ((bRam00000001136d3138 & 1) == 0) {
    unaff_x30 = (undefined1 *)0x1136d3138;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708f70(0x11370a000);
      unaff_x30 = (undefined1 *)0x1136d3138;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3140 & 1) == 0) {
    unaff_x30 = (undefined1 *)0x1136d3140;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714998(0x11370a038,&UNK_10f422a3c);
      unaff_x30 = (undefined1 *)0x1136d3140;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3148 & 1) == 0) {
    unaff_x30 = (undefined1 *)0x1136d3148;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714998(0x11370a070,&UNK_10f422a29);
      unaff_x30 = (undefined1 *)0x1136d3148;
      ___cxa_guard_release();
    }
  }
  func_0x0001077091ec();
  in_stack_00000148 = 0;
  pdVar10 = (double *)&stack0x00000070;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  if (in_stack_00000148 == 0) {
    func_0x000107709348();
    func_0x000107714850();
  }
  puVar9 = &stack0x00000070;
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x0001077125e4();
    uVar6 = 0x690;
    if ((bool)in_ZR) {
      uVar6 = extraout_x8;
    }
    func_0x0001077113e0(uVar6);
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
  ___cxa_guard_abort(0x1136d3148);
  func_0x0001077149ec();
  puStack_8 = &DAT_10769c3c0;
  ppuVar11 = &puStack_10;
  ppuVar2 = apuStack_370;
  ppuVar3 = apuStack_370;
  puStack_10 = &stack0x000001c0;
  func_0x000107707564();
  if ((bRam00000001136d3150 & 1) == 0) {
    iVar8 = 0x136d3150;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a18(0x11370a0a8,&UNK_10f40b483);
      ___cxa_guard_release(0x1136d3150);
    }
  }
  if ((bRam00000001136d3158 & 1) == 0) {
    iVar8 = 0x136d3158;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a08(0x11370a0e0,&DAT_10f40b3d9);
      ___cxa_guard_release(0x1136d3158);
    }
  }
  if ((bRam00000001136d3160 & 1) == 0) {
    iVar8 = 0x136d3160;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107708bb0(0x11370a118);
      ___cxa_guard_release(0x1136d3160);
    }
  }
  if ((bRam00000001136d3168 & 1) == 0) {
    iVar8 = 0x136d3168;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714b90(0x11370a150,&DAT_10f40b3e5);
      ___cxa_guard_release(0x1136d3168);
    }
  }
  if ((bRam00000001136d3170 & 1) == 0) {
    iVar8 = 0x136d3170;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x0001077149b4(0x11370a188,&DAT_10f40b3ec);
      ___cxa_guard_release(0x1136d3170);
    }
  }
  if ((bRam00000001136d3178 & 1) == 0) {
    iVar8 = 0x136d3178;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a38(0x11370a1c0,&UNK_10f422a4f);
      ___cxa_guard_release(0x1136d3178);
    }
  }
  if ((bRam00000001136d3180 & 1) == 0) {
    iVar8 = 0x136d3180;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a40(0x11370a1f8,&DAT_10f40b3f1);
      ___cxa_guard_release(0x1136d3180);
    }
  }
  if ((bRam00000001136d3188 & 1) == 0) {
    iVar8 = 0x136d3188;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a18(0x11370a230,&UNK_10f422a57);
      ___cxa_guard_release(0x1136d3188);
    }
  }
  if ((bRam00000001136d3190 & 1) == 0) {
    iVar8 = 0x136d3190;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714f84(0x11370a268,&DAT_10f40b40a);
      ___cxa_guard_release(0x1136d3190);
    }
  }
  if ((bRam00000001136d3198 & 1) == 0) {
    iVar8 = 0x136d3198;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714ac4(0x11370a2a0,&DAT_10f40b419);
      ___cxa_guard_release(0x1136d3198);
    }
  }
  if ((bRam00000001136d31a0 & 1) == 0) {
    iVar8 = 0x136d31a0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714aa0(0x11370a2d8,&DAT_10f40b42e);
      ___cxa_guard_release(0x1136d31a0);
    }
  }
  if ((bRam00000001136d31a8 & 1) == 0) {
    iVar8 = 0x136d31a8;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x0001077149b4(0x11370a310,&DAT_10f40b434);
      ___cxa_guard_release(0x1136d31a8);
    }
  }
  if ((bRam00000001136d31b0 & 1) == 0) {
    iVar8 = 0x136d31b0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a38(0x11370a348,&UNK_10f422a69);
      ___cxa_guard_release(0x1136d31b0);
    }
  }
  if ((bRam00000001136d31b8 & 1) == 0) {
    iVar8 = 0x136d31b8;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714aa0(0x11370a380,&DAT_10f40b439);
      ___cxa_guard_release(0x1136d31b8);
    }
  }
  if ((bRam00000001136d31c0 & 1) == 0) {
    iVar8 = 0x136d31c0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714aa0(0x11370a3b8,&DAT_10f40b43f);
      ___cxa_guard_release(0x1136d31c0);
    }
  }
  if ((bRam00000001136d31c8 & 1) == 0) {
    iVar8 = 0x136d31c8;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714d24(0x11370a3f0,&DAT_10f2cb5f1);
      ___cxa_guard_release(0x1136d31c8);
    }
  }
  if ((bRam00000001136d31d0 & 1) == 0) {
    iVar8 = 0x136d31d0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x0001077149b4(0x11370a428,"cold");
      ___cxa_guard_release(0x1136d31d0);
    }
  }
  if ((bRam00000001136d31d8 & 1) == 0) {
    iVar8 = 0x136d31d8;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x0001077160c8(0x11370a460,&UNK_10f422a71);
      ___cxa_guard_release(0x1136d31d8);
    }
  }
  if ((bRam00000001136d31e0 & 1) == 0) {
    iVar8 = 0x136d31e0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x0001077149b4(0x11370a498,&DAT_10f3b7c24);
      ___cxa_guard_release(0x1136d31e0);
    }
  }
  if ((bRam00000001136d31e8 & 1) == 0) {
    iVar8 = 0x136d31e8;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x0001077142ac(0x11370a4d0);
      ___cxa_guard_release(0x1136d31e8);
    }
  }
  if ((bRam00000001136d31f0 & 1) == 0) {
    iVar8 = 0x136d31f0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010771429c(0x11370a508);
      ___cxa_guard_release(0x1136d31f0);
    }
  }
  if ((bRam00000001136d31f8 & 1) == 0) {
    iVar8 = 0x136d31f8;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714b38(0x11370a540,&UNK_10f4180ea);
      ___cxa_guard_release(0x1136d31f8);
    }
  }
  auStack_c0[0] = 0;
  bStack_50 = 0;
  apuStack_370[0] = puVar9;
  func_0x000107712468();
  if ((bStack_50 & 1) == 0) {
    func_0x000107714df0();
    puVar12 = &UNK_10769c55c;
    ppuVar3 = apuStack_370;
    puVar5 = unaff_x20;
    goto code_r0x00010769cd6c;
  }
  puVar5 = auStack_c0;
  func_0x000107579140();
  if ((int)puVar5 == 0) {
    func_0x000107717d04();
    func_0x00010771490c();
    func_0x0001077148e0(auStack_1a8);
    puVar5 = auStack_218;
    func_0x00010770c178();
    unaff_x23 = 0;
    func_0x000107719228();
    func_0x00010770c8b0();
    iVar8 = (int)unaff_x20;
    if ((bStack_100 & 1) == 0) {
      func_0x000107716870();
      puVar12 = &UNK_10769c674;
      puVar5 = unaff_x20;
      goto code_r0x00010769cf3c;
    }
    func_0x00010771fb7c();
    func_0x00010770cf28();
    func_0x00010771c744();
    if ((bool)in_ZR) {
      func_0x0001077171ec();
      func_0x00010771e3c8();
    }
    else {
      func_0x00010770b878();
      func_0x00010770dfa4();
      func_0x000107715378();
    }
    func_0x000107714850();
    in_OV = SBORROW4(iVar8,3);
    in_NG = iVar8 + -3 < 0;
    in_ZR = iVar8 == 3;
    if ((bool)in_ZR) {
      func_0x00010771dd98();
      func_0x000107715fdc();
      func_0x000107715624();
      goto code_r0x00010769c6d8;
    }
    func_0x000107715fdc();
    func_0x000107715624();
  }
  else {
    func_0x00010771eab8();
    func_0x00010771bca8();
code_r0x00010769c6d8:
    func_0x00010771c3c4();
    func_0x0001077137cc();
    func_0x000107714890();
  }
  func_0x000107718c38();
  func_0x000107719e88();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d31f8);
  puVar12 = &UNK_10769cd6c;
  func_0x000107714988();
code_r0x00010769cd6c:
  do {
    ppuVar2 = (undefined1 **)((long)ppuVar3 + -0x1d0);
    *(ulong *)((long)ppuVar3 + -0x30) = unaff_x28;
    *(undefined1 **)((long)ppuVar3 + -0x28) = unaff_x27;
    *(undefined1 **)((long)ppuVar3 + -0x20) = puVar5;
    *(undefined1 **)((long)ppuVar3 + -0x18) = unaff_x30;
    *(undefined8 ***)((long)ppuVar3 + -0x10) = ppuVar11;
    *(undefined **)((long)ppuVar3 + -8) = puVar12;
    ppuVar11 = (undefined8 **)((long)ppuVar3 + -0x10);
    func_0x000107707ddc();
    *(undefined8 *)((long)ppuVar3 + -0x38) = extraout_x8_00;
    func_0x00010771490c();
    unaff_x30 = (undefined1 *)((long)ppuVar3 + -0xe0);
    func_0x0001077148e0();
    func_0x00010771e0e0();
    func_0x00010771e55c();
    func_0x000107714890();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770c29c(unaff_x30);
      iVar8 = *(int *)((long)ppuVar3 + -0x40);
      in_OV = SBORROW4(iVar8,3);
      in_NG = iVar8 + -3 < 0;
      in_ZR = iVar8 == 3;
      if (!(bool)in_ZR) goto code_r0x00010769ce0c;
      puVar5 = (undefined1 *)((long)ppuVar3 + -0xa8);
      func_0x00010732393c();
      unaff_x30 = puVar5;
      func_0x000104c32db4();
      if ((((ulong)unaff_x30 & 1) == 0) && (func_0x0001077150f4(), ((ulong)unaff_x30 & 1) == 0)) {
        func_0x0001077150f4();
        if ((((ulong)unaff_x30 & 1) == 0) && (func_0x0001077150f4(), ((ulong)unaff_x30 & 1) == 0)) {
          func_0x0001077150f4();
          if ((((ulong)unaff_x30 & 1) == 0) && (func_0x0001077150f4(), ((ulong)unaff_x30 & 1) == 0))
          {
            func_0x0001077150f4();
            if ((((ulong)unaff_x30 & 1) != 0) ||
               (func_0x0001077150f4(), ((ulong)unaff_x30 & 1) != 0)) goto code_r0x00010769ce00;
            func_0x0001077150f4();
            if ((((ulong)unaff_x30 & 1) == 0) &&
               (func_0x0001077150f4(), ((ulong)unaff_x30 & 1) == 0)) {
              func_0x0001077150f4();
              func_0x00010771eab8();
              if (((ulong)unaff_x30 & 1) != 0) goto code_r0x00010769ce00;
              func_0x0001077150f4();
            }
          }
          goto code_r0x00010769cdfc;
        }
      }
      else {
code_r0x00010769cdfc:
        func_0x00010771eab8();
      }
code_r0x00010769ce00:
      func_0x00010771c920();
    }
    else {
      *(undefined4 *)((long)ppuVar3 + -0x40) = 0;
code_r0x00010769ce0c:
      func_0x00010771eab8();
      func_0x00010771c920();
    }
    func_0x00010771af7c();
    func_0x000107579a48();
    func_0x00010770d688();
    func_0x000107714890();
    func_0x000107712800();
    func_0x00010770ed2c();
    func_0x000107715e10();
    func_0x000107707e80();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010770ed2c();
    func_0x000107715e10();
    puVar12 = &UNK_10769cf3c;
    func_0x0001077149ec();
code_r0x00010769cf3c:
    ppuVar3 = (undefined1 **)((long)ppuVar2 + -400);
    *(double **)((long)ppuVar2 + -0x30) = pdVar10;
    *(undefined1 **)((long)ppuVar2 + -0x28) = puVar9;
    *(undefined1 **)((long)ppuVar2 + -0x20) = puVar5;
    *(undefined1 **)((long)ppuVar2 + -0x18) = unaff_x30;
    *(undefined8 ***)((long)ppuVar2 + -0x10) = ppuVar11;
    *(undefined **)((long)ppuVar2 + -8) = puVar12;
    ppuVar11 = (undefined8 **)((long)ppuVar2 + -0x10);
    func_0x000107707ddc();
    func_0x00010771fbf0();
    if ((extraout_x8_01 & 1) != 0) break;
    puVar12 = &UNK_10769cf68;
  } while( true );
  func_0x0001077153a8();
  func_0x000104c2fe00();
  func_0x00010771e184();
  func_0x000104c2fe00(&stack0x000000e0,0x11370a498);
  func_0x000107717054((undefined1 *)((long)ppuVar2 + -0xe0));
  func_0x00010771c114();
  func_0x0001077148fc();
  func_0x000107714890();
  func_0x0001077150e4();
  func_0x000107715ca8();
  func_0x000107707e80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c1e8();
  func_0x000107714988();
  puVar12 = &DAT_10769cff0;
  func_0x0001077184d0();
  *(undefined8 ***)((long)ppuVar2 + -0x140) = ppuVar11;
  *(undefined **)((long)ppuVar2 + -0x138) = puVar12;
  func_0x000107707444();
  *(undefined8 *)((long)ppuVar2 + -0x1a0) = extraout_x8_02;
  if ((bRam00000001136d3200 & 1) == 0) {
    iVar8 = 0x136d3200;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a40(0x11370a578,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3200);
    }
  }
  puVar5 = (undefined1 *)((long)ppuVar2 + -0x220);
  func_0x000107707bdc(puVar5);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (double *)0x0;
    func_0x00010770c254(puVar5);
    puVar5 = (undefined1 *)((long)ppuVar2 + -0x310);
    func_0x000107579140();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto code_r0x00010769d1b4;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar5);
      func_0x000107579140((undefined1 *)((long)ppuVar2 + -0x4e0));
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto code_r0x00010769d058;
      puVar5 = (undefined1 *)((long)ppuVar2 + -0x220);
      func_0x000107707bdc(puVar5);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto code_r0x00010769d1a8;
      func_0x000107717e2c();
      unaff_x23 = 0;
      func_0x00010770c30c(puVar5);
      func_0x00010770d308((undefined1 *)((long)ppuVar2 + -0x310));
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar5 = (undefined1 *)((long)ppuVar2 + -0x310);
        func_0x0001073405dc(puVar5);
        func_0x00010770c254(puVar5);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x0001077169e8();
        func_0x000107715f10((undefined1 *)((long)ppuVar2 + -0x4e0),
                            (undefined1 *)((long)ppuVar2 + -0x3f0),
                            (undefined1 *)((long)ppuVar2 + -0x460));
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar5 = (undefined1 *)((long)ppuVar2 + -0x560);
            func_0x000107707d58(puVar5);
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              pdVar10 = (double *)((long)ppuVar2 + -0x5d0);
              func_0x00010770cc44(puVar5);
              puVar5 = (undefined1 *)((long)ppuVar2 + -0x650);
              func_0x00010770d308(puVar5);
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar5);
                func_0x00010770d8d4((undefined1 *)((long)ppuVar2 + -0x730));
                func_0x00010770d94c((undefined1 *)((long)ppuVar2 + -0x7a0));
                func_0x00010770b04c();
                func_0x000107714898();
                if ((bool)in_ZR) {
                  func_0x000107716800();
                  func_0x000107714870();
                  func_0x00010756e584();
                  func_0x000107713b1c();
                  uVar1 = 0;
                  if ((bool)in_ZR) {
                    uVar1 = extraout_w8;
                  }
                  unaff_x28 = (ulong)uVar1;
                  func_0x000107714858();
                }
                else {
                  func_0x000107716800();
                  func_0x00010771c3d4();
                }
                func_0x000107714830();
                func_0x000107714850();
                func_0x00010770cc80();
              }
              else {
                unaff_x27 = (undefined1 *)((long)ppuVar2 + -0x5d0);
                func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0x650));
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0x560));
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0x4e0));
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0x310));
        func_0x000107716d58();
      }
      unaff_x24 = (double *)0x0;
      func_0x000107714868((undefined1 *)((long)ppuVar2 + -0x310));
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto code_r0x00010769d058;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
code_r0x00010769d058:
      unaff_x24 = (double *)0x0;
      puVar9 = (undefined1 *)((long)ppuVar2 + -0x220);
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
code_r0x00010769d1a8:
    func_0x00010770d24c();
code_r0x00010769d1b4:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3200);
  func_0x000107714988();
  puVar12 = &DAT_10769d3a0;
  func_0x0001077184d0();
  *(undefined1 **)((long)ppuVar2 + -0x750) = (undefined1 *)((long)ppuVar2 + -0x140);
  *(undefined **)((long)ppuVar2 + -0x748) = puVar12;
  func_0x000107707444();
  *(undefined8 *)((long)ppuVar2 + -0x7b0) = extraout_x8_03;
  if ((bRam00000001136d3208 & 1) == 0) {
    iVar8 = 0x136d3208;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000107714a40(0x11370a5b0,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3208);
    }
  }
  puVar5 = (undefined1 *)((long)ppuVar2 + -0x830);
  func_0x000107707bdc(puVar5);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (double *)0x0;
    func_0x00010770c254(puVar5);
    puVar5 = (undefined1 *)((long)ppuVar2 + -0x920);
    func_0x000107579140();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto code_r0x00010769d570;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar5);
      puVar5 = (undefined1 *)((long)ppuVar2 + -0xaf0);
      func_0x000107579140();
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto code_r0x00010769d408;
      puVar5 = (undefined1 *)((long)ppuVar2 + -0x830);
      func_0x000107707bdc(puVar5);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto code_r0x00010769d564;
      func_0x000107717e2c();
      func_0x00010770c30c(puVar5);
      puVar5 = (undefined1 *)((long)ppuVar2 + -0x920);
      func_0x00010770d308();
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar5 = (undefined1 *)((long)ppuVar2 + -0x920);
        func_0x0001073405dc(puVar5);
        func_0x00010770c254(puVar5);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x000107714eec();
        puVar5 = (undefined1 *)((long)ppuVar2 + -0xaf0);
        func_0x000107714ccc(puVar5,(undefined1 *)((long)ppuVar2 + -0xa00),
                            (undefined1 *)((long)ppuVar2 + -0xa70));
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar5 = (undefined1 *)((long)ppuVar2 + -0xb70);
            func_0x000107707d58();
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              pdVar10 = (double *)((long)ppuVar2 + -0xbe0);
              func_0x00010770cc44(puVar5);
              puVar5 = (undefined1 *)((long)ppuVar2 + -0xc60);
              func_0x00010770d308();
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar5);
                func_0x00010770d8d4((undefined1 *)((long)ppuVar2 + -0xd40));
                func_0x00010770d94c((undefined1 *)((long)ppuVar2 + -0xdb0));
                func_0x0001077169e8();
                func_0x000107711298();
                func_0x000107714898();
                if ((bool)in_ZR) {
                  func_0x000107716800();
                  func_0x000107714870();
                  func_0x00010756e584();
                  func_0x000107713b1c();
                  uVar1 = 0;
                  if ((bool)in_ZR) {
                    uVar1 = extraout_w8_00;
                  }
                  unaff_x28 = (ulong)uVar1;
                  func_0x000107714858();
                }
                else {
                  func_0x000107716800();
                  func_0x00010771c3d4();
                }
                func_0x000107714830();
                func_0x000107714850();
                func_0x00010770cc80();
              }
              else {
                unaff_x27 = (undefined1 *)((long)ppuVar2 + -0xbe0);
                func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0xc60));
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0xb70));
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0xaf0));
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0x920));
        func_0x000107716d58();
      }
      unaff_x24 = (double *)0x0;
      func_0x000107714868((undefined1 *)((long)ppuVar2 + -0x920));
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto code_r0x00010769d408;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
code_r0x00010769d408:
      unaff_x24 = (double *)0x0;
      puVar9 = (undefined1 *)((long)ppuVar2 + -0x830);
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
code_r0x00010769d564:
    func_0x00010770d24c();
    puVar5 = (undefined1 *)((long)ppuVar2 + -0x828);
code_r0x00010769d570:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = 0x1136d3208;
  ___cxa_guard_abort(0x1136d3208);
  func_0x000107714988();
  *(ulong *)((long)ppuVar2 + -0xdf0) = unaff_x28;
  *(undefined1 **)((long)ppuVar2 + -0xde8) = unaff_x27;
  *(double **)((long)ppuVar2 + -0xde0) = pdVar10;
  *(undefined1 **)((long)ppuVar2 + -0xdd8) = puVar9;
  *(undefined1 **)((long)ppuVar2 + -0xdd0) = puVar5;
  *(undefined1 **)((long)ppuVar2 + -0xdc8) = unaff_x30;
  *(undefined1 **)((long)ppuVar2 + -0xdc0) = (undefined1 *)((long)ppuVar2 + -0x750);
  *(undefined **)((long)ppuVar2 + -0xdb8) = &DAT_10769d75c;
  func_0x000107707ba8();
  if ((bRam00000001136d3210 & 1) == 0) {
    uVar6 = 0x1136d3210;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107713844(0x11370a5e8);
      uVar6 = 0x1136d3210;
      ___cxa_guard_release(0x1136d3210);
    }
  }
  if ((bRam00000001136d3218 & 1) == 0) {
    uVar6 = 0x1136d3218;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x000107719a1c();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712b20();
      func_0x00010770c94c(0x113724d00);
      func_0x000107716af8();
      uVar6 = 0x1136d3218;
      ___cxa_guard_release(0x1136d3218);
    }
  }
  *(undefined4 *)((long)ppuVar2 + -0xe00) = 0;
  func_0x00010770eaac();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (*(int *)((long)ppuVar2 + -0xe00) == 0) {
    func_0x00010770c914();
    func_0x000107714890();
  }
  func_0x000107710194();
  func_0x00010771d128();
  if ((bool)in_ZR) {
    func_0x00010771ae68();
    func_0x000107714ec4();
    func_0x00010771901c();
    param_1 = (double)(long)(param_1 / param_2);
    param_2 = 0.25;
    func_0x000107719058();
    func_0x00010770e974();
    func_0x00010771ade8();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770cc44(uVar6);
      func_0x00010770e718();
      func_0x000107714830();
      pdVar10 = (double *)((long)ppuVar2 + -0xfd0);
    }
    else {
      func_0x00010770c1d0((undefined1 *)((long)ppuVar2 + -0xf60));
    }
    func_0x00010770ed2c();
  }
  else {
    func_0x00010770fc9c();
    func_0x00010770d148();
    func_0x000107714cac();
  }
  func_0x000107714890();
  func_0x000107714850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770cc20();
  func_0x000107715284();
  func_0x000107716af8();
  ___cxa_guard_abort(0x1136d3218);
  func_0x0001077149ec();
  puVar12 = &DAT_10769d9b8;
  func_0x000107717e8c();
  *(undefined1 **)((long)ppuVar2 + -0xf60) = (undefined1 *)((long)ppuVar2 + -0xdc0);
  *(undefined **)((long)ppuVar2 + -0xf58) = puVar12;
  func_0x000107707ae4();
  *(undefined8 *)((long)ppuVar2 + -0xfe0) = extraout_x8_04;
  if ((bRam00000001136d3220 & 1) == 0) {
    iVar8 = 0x136d3220;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770bd90(0x11370a620);
      ___cxa_guard_release(0x1136d3220);
    }
  }
  if ((bRam00000001136d3228 & 1) == 0) {
    iVar8 = 0x136d3228;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770d06c(0x11370a658);
      ___cxa_guard_release(0x1136d3228);
    }
  }
  if ((bRam00000001136d3230 & 1) == 0) {
    iVar8 = 0x136d3230;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770a504(0x11370a690);
      ___cxa_guard_release(0x1136d3230);
    }
  }
  if ((bRam00000001136d3238 & 1) == 0) {
    iVar8 = 0x136d3238;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770a1d0(0x11370a6c8);
      ___cxa_guard_release(0x1136d3238);
    }
  }
  if ((bRam00000001136d3240 & 1) == 0) {
    iVar8 = 0x136d3240;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770d05c(0x11370a700);
      ___cxa_guard_release(0x1136d3240);
    }
  }
  if ((bRam00000001136d3248 & 1) == 0) {
    iVar8 = 0x136d3248;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770a514(0x11370a738);
      ___cxa_guard_release(0x1136d3248);
    }
  }
  if ((bRam00000001136d3250 & 1) == 0) {
    iVar8 = 0x136d3250;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770b67c(0x11370a770);
      ___cxa_guard_release(0x1136d3250);
    }
  }
  if ((bRam00000001136d3258 & 1) == 0) {
    iVar8 = 0x136d3258;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770be14(0x11370a7a8);
      ___cxa_guard_release(0x1136d3258);
    }
  }
  if ((bRam00000001136d3260 & 1) == 0) {
    iVar8 = 0x136d3260;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770be04(0x11370a7e0);
      ___cxa_guard_release(0x1136d3260);
    }
  }
  if ((bRam00000001136d3268 & 1) == 0) {
    iVar8 = 0x136d3268;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770bdf4(0x11370a818);
      ___cxa_guard_release(0x1136d3268);
    }
  }
  if ((bRam00000001136d3270 & 1) == 0) {
    iVar8 = 0x136d3270;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770bde4(0x11370a850);
      ___cxa_guard_release(0x1136d3270);
    }
  }
  if ((bRam00000001136d3278 & 1) == 0) {
    iVar8 = 0x136d3278;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x00010770bdd4(0x11370a888);
      ___cxa_guard_release(0x1136d3278);
    }
  }
  func_0x0001077148ac((undefined1 *)((long)ppuVar2 + -0x1050));
  func_0x0001072ddd58((undefined1 *)((long)ppuVar2 + -0x10c0),0x11370a658);
  puVar9 = (undefined1 *)((long)ppuVar2 + -0x1050);
  func_0x00010745fc58(puVar9,(undefined1 *)((long)ppuVar2 + -0x10c0));
  if ((int)puVar9 == 0) {
    func_0x00010770f7b8();
    func_0x00010771ad54();
    func_0x00010770c8b0();
    if ((int)pdVar10 == 0) {
      *(undefined4 *)((long)ppuVar2 + -0x1300) = 0;
      func_0x00010770ecf0();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (*(int *)((long)ppuVar2 + -0x1300) == 0) {
        func_0x000107716dac();
        func_0x00010770c2cc();
        func_0x000107714838();
      }
      func_0x00010770c4e8();
      func_0x000107719c0c();
      if ((bool)in_ZR) {
        func_0x0001077182b8();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107711fc0();
          goto code_r0x00010769dcd4;
        }
        func_0x000107716678();
        if (in_NG == in_OV) goto code_r0x00010769debc;
        func_0x000107717f48();
        if ((bool)in_NG) {
code_r0x00010769dc88:
          unaff_x24 = (double *)0x1;
        }
        else {
          func_0x000107716668();
          if ((bool)in_NG) {
            func_0x000107708f20();
            if ((bool)in_ZR) goto code_r0x00010769dc88;
            func_0x000107715190();
            if (!(bool)in_ZR) {
              func_0x0001077081e8();
              goto code_r0x00010769debc;
            }
code_r0x00010769de8c:
            func_0x00010771f90c();
          }
          else {
            func_0x000107716658();
            if ((bool)in_NG) {
              func_0x00010770865c();
              if ((bool)in_ZR) goto code_r0x00010769de8c;
              func_0x000107715190();
              if ((bool)in_ZR) goto code_r0x00010769de7c;
              func_0x000107707f98();
            }
            else {
              func_0x00010770bda0();
              if ((bool)in_ZR) {
code_r0x00010769de7c:
                func_0x00010771f900();
                goto code_r0x00010769dec0;
              }
              func_0x000107715190();
              if (!(bool)in_ZR) {
                func_0x00010770cd4c();
                func_0x000107718180();
              }
            }
code_r0x00010769debc:
            unaff_x24 = (double *)0x1;
          }
        }
      }
      else {
        func_0x00010770ca9c();
code_r0x00010769dcd4:
        func_0x00010770f488();
        func_0x0001077159c0();
        func_0x00010771c500();
      }
code_r0x00010769dec0:
      func_0x000107714838();
      goto code_r0x00010769dec8;
    }
    func_0x00010770f7b8();
    func_0x00010771afa0();
    if ((bool)in_ZR) {
      pdVar7 = (double *)((long)ppuVar2 + -0x1130);
      func_0x00010770c394();
      func_0x000107719c0c();
      if ((bool)in_ZR) {
        func_0x0001077182b8();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107711fc0();
          goto code_r0x00010769dce8;
        }
        func_0x000107712d18();
        if ((in_NG != in_OV) && (func_0x000107713270(), !(bool)in_NG)) {
          func_0x0001077162e4();
          if ((bool)in_NG) {
            param_2 = 1.60185815079703e-314;
            func_0x00010770996c();
            func_0x00010770b36c();
            if ((!(bool)in_ZR) && (func_0x000107713e04(), !(bool)in_ZR)) {
              func_0x00010770b398();
            }
          }
          else {
            func_0x000107708e54();
            func_0x000107709630();
            func_0x00010771a8b8();
            if ((!(bool)in_ZR) && (func_0x000107715190(), !(bool)in_ZR)) {
              func_0x00010770bae8();
            }
          }
        }
        *(undefined4 *)((long)ppuVar2 + -0x1138) = 0;
        func_0x00010770efb0();
        func_0x00010770d358();
        func_0x000107714830();
        if (*(int *)((long)ppuVar2 + -0x1138) == 0) {
          func_0x00010771cc34();
          func_0x00010770d358();
          func_0x000107714830();
        }
        pdVar10 = (double *)0x0;
        func_0x00010770c3f4();
        iVar8 = *(int *)((long)ppuVar2 + -0x11a8);
        in_OV = SBORROW4(iVar8,2);
        in_NG = iVar8 + -2 < 0;
        in_ZR = iVar8 == 2;
        if ((bool)in_ZR) {
          *(undefined4 *)((long)ppuVar2 + -0x1218) = 0;
          func_0x00010770dbb0();
          func_0x00010770e5f8();
          func_0x000107714830();
          if (*(int *)((long)ppuVar2 + -0x1218) == 0) {
            func_0x00010771310c();
            func_0x00010770e5f8();
            func_0x000107714830();
          }
          pdVar10 = (double *)0x0;
          func_0x00010770d748();
          func_0x000107719cf0();
          if ((bool)in_ZR) {
            func_0x00010771e2d8();
            func_0x000107718208();
            param_1 = *pdVar7;
            func_0x00010770bfc8();
            if ((bool)in_OV) {
              func_0x000107715230();
              func_0x000100060964((undefined1 *)((long)ppuVar2 + -0x13d8));
              pdVar10 = pdVar7;
              goto code_r0x00010769de48;
            }
            func_0x00010770ffac();
            if ((in_NG != in_OV) && (func_0x00010770ff84(), !(bool)in_NG)) {
              func_0x000107709778();
              func_0x00010770b600();
              if ((!(bool)in_ZR) && (func_0x0001077176e4(), !(bool)in_ZR)) {
                func_0x000107709f90();
              }
            }
            func_0x0001077191d8();
            func_0x000107715654();
            pdVar10 = (double *)0x1;
          }
          else {
            func_0x000107714934();
            func_0x000107715694((undefined1 *)((long)ppuVar2 + -0x13d8));
code_r0x00010769de48:
            func_0x00010770f228();
            func_0x00010771626c();
            func_0x00010771c50c();
          }
          func_0x000107714888();
          func_0x000107714860();
        }
        else {
          func_0x000107711ad0();
          func_0x000107718158();
          func_0x00010770edcc();
          func_0x000107716338();
          func_0x00010771c50c();
        }
        func_0x000107714838();
        func_0x000107714848();
      }
      else {
        func_0x00010770ca9c();
code_r0x00010769dce8:
        func_0x00010770f488();
        func_0x0001077159c0();
        func_0x00010771c50c();
      }
      func_0x00010770dd28();
    }
    else {
      func_0x0001077116d8();
      func_0x00010771625c();
      func_0x00010770eee8();
      func_0x00010771628c();
      func_0x00010771c50c();
    }
    func_0x00010770fa90();
    unaff_x24 = pdVar10;
  }
  else {
    *(undefined4 *)((long)ppuVar2 + -0x1300) = 0;
    func_0x00010770ecf0();
    func_0x00010770c1dc();
    func_0x000107714830();
    if (*(int *)((long)ppuVar2 + -0x1300) == 0) {
      func_0x000107716dac();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x000107719c0c();
    if ((bool)in_ZR) {
      func_0x00010770c394((undefined1 *)((long)ppuVar2 + -0x11a0));
      func_0x00010771d284();
      if ((bool)in_ZR) {
        func_0x00010771ac9c();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107715230();
          func_0x00010771e2e0();
          goto code_r0x00010769dc9c;
        }
        func_0x000107711a44();
        if ((((in_NG != in_OV) && (func_0x000107711a28(), !(bool)in_NG)) &&
            (func_0x000107711678(), !(bool)in_ZR)) && (func_0x000107715190(), !(bool)in_ZR)) {
          func_0x00010770a6f4();
        }
        func_0x0001077182b8();
        func_0x000107718614();
        unaff_x24 = (double *)0x1;
      }
      else {
        func_0x000107714934();
        func_0x00010770de9c();
code_r0x00010769dc9c:
        func_0x00010770d934();
        func_0x0001077156d8();
        func_0x00010771c500();
      }
      func_0x00010770d440();
    }
    else {
      func_0x00010770ca9c();
      func_0x00010770f488();
      func_0x0001077159c0();
      func_0x00010771c500();
    }
    func_0x000107714830();
code_r0x00010769dec8:
    func_0x00010726af18((undefined1 *)((long)ppuVar2 + -0x1360));
  }
  if (((ulong)unaff_x24 & 1) == 0) goto code_r0x00010769e1cc;
  *(undefined4 *)((long)ppuVar2 + -0x10c8) = 0;
  pdVar10 = (double *)((long)ppuVar2 + -0x1368);
  func_0x00010770c394();
  func_0x00010770c2cc();
  func_0x000107714838();
  if (*(int *)((long)ppuVar2 + -0x10c8) == 0) {
    func_0x000107716688();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x00010771d284();
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x0001077156c0((undefined1 *)((long)ppuVar2 + -0x1368));
    uVar4 = in_ZR;
    goto code_r0x00010769e030;
  }
  func_0x00010771ac9c();
  func_0x00010770d7b4();
  if ((bool)in_OV) goto code_r0x00010769e400;
  func_0x00010771bacc();
  if (((in_NG != in_OV) && (func_0x0001077166fc(), !(bool)in_NG)) &&
     ((func_0x00010770fa78(), !(bool)in_ZR && (func_0x000107715190(), !(bool)in_ZR)))) {
    func_0x00010770cd4c();
  }
  *(undefined4 *)((long)ppuVar2 + -0x11a8) = 0;
  func_0x00010770f7b8();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (*(int *)((long)ppuVar2 + -0x11a8) == 0) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    FUN_10769e6a0();
    func_0x000107714898();
    uVar4 = in_ZR;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771191c();
      func_0x00010770c8e0();
      func_0x000107715c18();
      param_1 = 2.5;
      if (((ulong)pdVar10 & 1) != 0) {
code_r0x00010769e140:
        param_1 = param_1 * 5.0;
        *(double *)((long)ppuVar2 + -0x13d0) = param_1;
        func_0x00010771caac();
        func_0x00010770e8cc();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107717188();
        goto code_r0x00010769df88;
      }
      if ((*(byte *)((long)ppuVar2 + -0x12f8) & 1) == 0) {
        func_0x000107714f6c();
        FUN_10769e6a0();
        func_0x000107714898();
        uVar4 = false;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x000107718804();
          func_0x000107714858();
          goto code_r0x00010769e0c0;
        }
      }
      else {
code_r0x00010769e0c0:
        func_0x00010770d8c8();
        iVar8 = *(int *)((long)ppuVar2 + -0x1370);
        if (iVar8 == 2) {
          func_0x00010771acf0();
          param_1 = *pdVar10;
        }
        else {
          func_0x000107712164();
          func_0x0001077145dc();
          func_0x000107717bd0();
          param_1 = 0.0;
        }
        func_0x0001077148e8();
        in_ZR = iVar8 == 2;
        uVar4 = in_ZR;
        if ((bool)in_ZR) goto code_r0x00010769e140;
      }
      func_0x000107714860();
      func_0x000107714848();
    }
    func_0x000107717188();
    goto code_r0x00010769e1c0;
  }
code_r0x00010769df88:
  func_0x00010770c454();
  func_0x000107719040();
  if ((bool)in_ZR) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e8b8();
    func_0x000107714898();
    uVar4 = 0;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771310c();
      func_0x00010770e690();
      pdVar10 = (double *)((long)ppuVar2 + -0x12f0);
      func_0x000107719d28();
      dVar13 = 2.5;
      if (((ulong)pdVar10 & 1) == 0) {
        if ((*(byte *)((long)ppuVar2 + -0x12f8) & 1) == 0) {
          func_0x000107714f6c();
          func_0x00010769e8b8();
          func_0x000107714898();
          uVar4 = 0;
          if ((bool)in_ZR) {
            func_0x000107714870();
            func_0x000107718804();
            func_0x000107714858();
            goto code_r0x00010769e008;
          }
        }
        else {
code_r0x00010769e008:
          func_0x00010770f7f4();
          func_0x000107719b98();
          if ((bool)in_ZR) {
            func_0x000107716360();
            dVar13 = *pdVar10;
          }
          else {
            func_0x000107708a34();
            func_0x00010770cf5c();
            func_0x000107714fdc();
            dVar13 = 0.0;
          }
          func_0x00010771492c();
          uVar4 = 0;
          if ((int)(undefined1 *)((long)ppuVar2 + -0xed8) == 2) goto code_r0x00010769e0fc;
        }
      }
      else {
code_r0x00010769e0fc:
        func_0x0001077172c0();
        func_0x00010771a6b4();
        uVar4 = dVar13 == 0.0;
        if ((bool)uVar4) {
          uVar4 = param_2 == 0.0;
          if ((bool)uVar4) {
            func_0x00010771bb34();
            dVar13 = param_2;
          }
          else {
            dVar13 = INFINITY;
            if (param_2 <= 0.0) {
              dVar13 = -INFINITY;
            }
          }
        }
        else {
          dVar13 = param_2 / dVar13;
        }
        func_0x0001077167c4();
        *(double *)((long)ppuVar2 + -0x1440) = param_1 + dVar13 * 1.5;
        func_0x00010770b6ac(2);
        func_0x000107714890();
      }
      func_0x000107714888();
      func_0x000107714860();
    }
    func_0x000107717188();
    in_ZR = uVar4;
  }
  else {
    func_0x000107714934();
    func_0x0001077156d0((undefined1 *)((long)ppuVar2 + -0x1368));
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  func_0x000107714848();
  uVar4 = in_ZR;
code_r0x00010769e1c0:
  func_0x000107714838();
  while( true ) {
    func_0x000107714850();
    func_0x000107714830();
    in_ZR = uVar4;
code_r0x00010769e1cc:
    func_0x00010770e6c4();
    func_0x0001077137d8();
    func_0x000107708a48(*(undefined8 *)((long)ppuVar2 + -0xfe0));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
code_r0x00010769e400:
    func_0x000107715230();
    func_0x00010771e33c();
    uVar4 = in_ZR;
code_r0x00010769e030:
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  return;
}



/* Entry: 10769e6a0; end: 10769e8b7;  */

void FUN_10769e6a0(double param_1)

{
  bool bVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  char in_OV;
  undefined1 uVar3;
  int iVar4;
  double *pdVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  int unaff_w20;
  double *unaff_x22;
  double *unaff_x24;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 in_stack_00000050;
  double adStack_fc8 [13];
  undefined1 auStack_f60 [8];
  double adStack_f58 [12];
  int iStack_ef8;
  undefined1 auStack_ef0 [112];
  undefined1 auStack_e80 [112];
  double adStack_e10 [13];
  int iStack_da8;
  byte bStack_da0;
  int iStack_d30;
  undefined1 auStack_d28 [104];
  int iStack_cc0;
  undefined1 auStack_cb8 [104];
  int iStack_c50;
  undefined1 auStack_c48 [112];
  double dStack_bd8;
  double dStack_bd0;
  int iStack_b70;
  undefined1 auStack_b68 [8];
  undefined8 auStack_b60 [12];
  int iStack_b00;
  byte bStack_af8;
  undefined1 auStack_af0 [8];
  undefined8 uStack_ae8;
  undefined4 uStack_a88;
  undefined1 auStack_a80 [104];
  int iStack_a18;
  undefined1 auStack_a10 [8];
  undefined8 uStack_a08;
  undefined4 uStack_9a8;
  int iStack_938;
  undefined1 auStack_8c0 [112];
  undefined8 uStack_850;
  undefined1 auStack_840 [24];
  double dStack_828;
  undefined8 **ppuStack_7c0;
  undefined *puStack_7b8;
  int iStack_6d8;
  int iStack_5f8;
  int iStack_518;
  int iStack_438;
  undefined1 auStack_420 [24];
  double dStack_408;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  int iStack_2b8;
  int iStack_1d8;
  int iStack_f8;
  int iStack_18;
  
  func_0x0001077184d0();
  func_0x000107707748();
  func_0x000107709f0c();
  func_0x000107709acc();
  func_0x000107714850();
  if (iStack_18 == 0) {
    func_0x0001077076fc();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x000107716498();
  if ((bool)in_ZR) {
    iStack_f8 = 0;
    func_0x000107709efc();
    func_0x000107709eec();
    func_0x000107714838();
    if (iStack_f8 == 0) {
      func_0x0001077076e0();
      func_0x000107714838();
    }
    func_0x00010770c3f4();
    func_0x0001077164a4();
    if ((bool)in_ZR) {
      iStack_1d8 = 0;
      func_0x000107709edc();
      func_0x000107709ecc();
      func_0x000107714860();
      if (iStack_1d8 == 0) {
        func_0x0001077076c4();
        func_0x000107714860();
      }
      func_0x00010770c8e0();
      func_0x000107716374();
      if ((bool)in_ZR) {
        iStack_2b8 = 0;
        func_0x000107709ebc();
        func_0x000107709f3c();
        func_0x0001077148e8();
        if (iStack_2b8 == 0) {
          func_0x0001077076a8();
          func_0x0001077148e8();
        }
        func_0x00010770dd40();
        func_0x000107716380();
        if ((bool)in_ZR) {
          func_0x000107715d28();
          func_0x00010770ed78();
          func_0x000107715d48();
          func_0x00010770ed88();
          func_0x000107715a7c();
          func_0x00010770ed98();
          func_0x000107715a74();
          func_0x000107714ec4();
          dStack_408 = param_1;
          func_0x00010759ca1c(auStack_420,4);
          func_0x00010770768c();
          func_0x00010771492c();
        }
        else {
          func_0x0001077084bc();
          func_0x00010770dc3c();
          func_0x000107714e3c();
        }
        func_0x0001077148e8();
        func_0x000107714890();
      }
      else {
        func_0x0001077084a8();
        func_0x00010770dd04();
        func_0x000107715064();
      }
      func_0x000107714860();
      func_0x000107714888();
    }
    else {
      func_0x0001077085d8();
      func_0x00010770e66c();
      func_0x00010771592c();
    }
    func_0x000107714838();
    func_0x000107714848();
  }
  else {
    func_0x0001077085c4();
    func_0x00010770e648();
    func_0x000107715880();
  }
  func_0x000107714850();
  func_0x000107714830();
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e61c();
  func_0x00010770d664();
  func_0x000107714860();
  func_0x00010770d6ac();
  func_0x000107714838();
  func_0x00010770d07c();
  func_0x000107714850();
  func_0x00010770c898();
  func_0x0001077149ec();
  puVar7 = &UNK_10769e8b8;
  func_0x0001077184d0();
  puStack_3d0 = &stack0x00000050;
  puStack_3c8 = puVar7;
  func_0x000107707748();
  func_0x000107709f0c();
  func_0x000107709acc();
  func_0x000107714850();
  if (iStack_438 == 0) {
    func_0x0001077076fc();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x000107716498();
  if ((bool)in_ZR) {
    iStack_518 = 0;
    func_0x000107709efc();
    func_0x000107709eec();
    func_0x000107714838();
    if (iStack_518 == 0) {
      func_0x0001077076e0();
      func_0x000107714838();
    }
    func_0x00010770c3f4();
    func_0x0001077164a4();
    if ((bool)in_ZR) {
      iStack_5f8 = 0;
      func_0x000107709edc();
      func_0x000107709ecc();
      func_0x000107714860();
      if (iStack_5f8 == 0) {
        func_0x0001077076c4();
        func_0x000107714860();
      }
      func_0x00010770c8e0();
      func_0x000107716374();
      if ((bool)in_ZR) {
        iStack_6d8 = 0;
        func_0x000107709ebc();
        func_0x000107709f3c();
        func_0x0001077148e8();
        if (iStack_6d8 == 0) {
          func_0x0001077076a8();
          func_0x0001077148e8();
        }
        func_0x00010770dd40();
        func_0x000107716380();
        if ((bool)in_ZR) {
          func_0x000107715d28();
          func_0x00010770ed78();
          func_0x000107715d48();
          func_0x00010770ed88();
          func_0x000107715a7c();
          func_0x00010770ed98();
          func_0x000107715a74();
          func_0x000107714ec4();
          dStack_828 = param_1;
          func_0x00010759ca1c(auStack_840,4);
          func_0x00010770768c();
          func_0x00010771492c();
        }
        else {
          func_0x0001077084bc();
          func_0x00010770dc3c();
          func_0x000107714e3c();
        }
        func_0x0001077148e8();
        func_0x000107714890();
      }
      else {
        func_0x0001077084a8();
        func_0x00010770dd04();
        func_0x000107715064();
      }
      func_0x000107714860();
      func_0x000107714888();
    }
    else {
      func_0x0001077085d8();
      func_0x00010770e66c();
      func_0x00010771592c();
    }
    func_0x000107714838();
    func_0x000107714848();
  }
  else {
    func_0x0001077085c4();
    func_0x00010770e648();
    func_0x000107715880();
  }
  func_0x000107714850();
  func_0x000107714830();
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e61c();
  func_0x00010770d664();
  func_0x000107714860();
  func_0x00010770d6ac();
  func_0x000107714838();
  func_0x00010770d07c();
  func_0x000107714850();
  func_0x00010770c898();
  func_0x0001077149ec();
  puVar7 = &DAT_10769ead0;
  func_0x0001077130a8();
  ppuStack_7c0 = &puStack_3d0;
  puStack_7b8 = puVar7;
  func_0x000107707ae4();
  uStack_850 = extraout_x8;
  if ((bRam00000001136d3280 & 1) == 0) {
    iVar4 = 0x136d3280;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770bd90(0x11370a8c0);
      ___cxa_guard_release(0x1136d3280);
    }
  }
  if ((bRam00000001136d3288 & 1) == 0) {
    iVar4 = 0x136d3288;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770d06c(0x11370a8f8);
      ___cxa_guard_release(0x1136d3288);
    }
  }
  if ((bRam00000001136d3290 & 1) == 0) {
    iVar4 = 0x136d3290;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a504(0x11370a930);
      ___cxa_guard_release(0x1136d3290);
    }
  }
  if ((bRam00000001136d3298 & 1) == 0) {
    iVar4 = 0x136d3298;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a1d0(0x11370a968);
      ___cxa_guard_release(0x1136d3298);
    }
  }
  if ((bRam00000001136d32a0 & 1) == 0) {
    iVar4 = 0x136d32a0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770d05c(0x11370a9a0);
      ___cxa_guard_release(0x1136d32a0);
    }
  }
  if ((bRam00000001136d32a8 & 1) == 0) {
    iVar4 = 0x136d32a8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a514(0x11370a9d8);
      ___cxa_guard_release(0x1136d32a8);
    }
  }
  if ((bRam00000001136d32b0 & 1) == 0) {
    iVar4 = 0x136d32b0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770b67c(0x11370aa10);
      ___cxa_guard_release(0x1136d32b0);
    }
  }
  if ((bRam00000001136d32b8 & 1) == 0) {
    iVar4 = 0x136d32b8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770be14(0x11370aa48);
      ___cxa_guard_release(0x1136d32b8);
    }
  }
  if ((bRam00000001136d32c0 & 1) == 0) {
    iVar4 = 0x136d32c0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770be04(0x11370aa80);
      ___cxa_guard_release(0x1136d32c0);
    }
  }
  if ((bRam00000001136d32c8 & 1) == 0) {
    iVar4 = 0x136d32c8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770bdf4(0x11370aab8);
      ___cxa_guard_release(0x1136d32c8);
    }
  }
  if ((bRam00000001136d32d0 & 1) == 0) {
    iVar4 = 0x136d32d0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770bde4(0x11370aaf0);
      ___cxa_guard_release(0x1136d32d0);
    }
  }
  if ((bRam00000001136d32d8 & 1) == 0) {
    iVar4 = 0x136d32d8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770bdd4(0x11370ab28);
      ___cxa_guard_release(0x1136d32d8);
    }
  }
  if ((bRam00000001136d32e0 & 1) == 0) {
    iVar4 = 0x136d32e0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107713824(0x11370ab60);
      ___cxa_guard_release(0x1136d32e0);
    }
  }
  func_0x0001077148ac(auStack_8c0);
  func_0x000107719118();
  iVar4 = (int)auStack_8c0;
  func_0x00010771db5c();
  if (iVar4 == 0) {
    func_0x0001077148ac(auStack_b68);
    func_0x000107579348(auStack_b68);
    func_0x00010770c8b0();
    if ((int)unaff_x22 == 0) {
      iStack_b00 = 0;
      func_0x00010770ddc4();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_b00 == 0) {
        func_0x000107716de8();
        func_0x00010770c2cc();
        func_0x000107714838();
      }
      func_0x00010770c4e8();
      func_0x000107719040();
      if ((bool)in_ZR) {
        func_0x0001077172c0();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107710a58();
          goto code_r0x00010769ee00;
        }
        func_0x000107716678();
        if (in_NG == in_OV) goto code_r0x00010769f014;
        func_0x000107717f48();
        if ((bool)in_NG) {
code_r0x00010769edb4:
          unaff_x24 = (double *)0x1;
        }
        else {
          func_0x000107716668();
          if ((bool)in_NG) {
            func_0x000107708f20();
            if ((bool)in_ZR) goto code_r0x00010769edb4;
            func_0x000107715190();
            if (!(bool)in_ZR) {
              func_0x0001077081e8();
              goto code_r0x00010769f014;
            }
code_r0x00010769efe4:
            func_0x00010771f90c();
          }
          else {
            func_0x000107716658();
            if ((bool)in_NG) {
              func_0x00010770865c();
              if ((bool)in_ZR) goto code_r0x00010769efe4;
              func_0x000107715190();
              if ((bool)in_ZR) goto code_r0x00010769efd4;
              func_0x000107707f98();
            }
            else {
              func_0x00010770bda0();
              if ((bool)in_ZR) {
code_r0x00010769efd4:
                func_0x00010771f900();
                goto code_r0x00010769f018;
              }
              func_0x000107715190();
              if (!(bool)in_ZR) {
                func_0x00010770cd4c();
                func_0x000107718180();
              }
            }
code_r0x00010769f014:
            unaff_x24 = (double *)0x1;
          }
        }
      }
      else {
        func_0x00010770fcb0();
code_r0x00010769ee00:
        func_0x00010770fe34();
        func_0x000107715820();
        func_0x00010771a918();
      }
code_r0x00010769f018:
      func_0x000107714838();
      goto code_r0x00010769f020;
    }
    func_0x0001077148ac(auStack_b68);
    in_OV = SBORROW4(iStack_b00,2);
    in_NG = iStack_b00 + -2 < 0;
    in_ZR = iStack_b00 == 2;
    if ((bool)in_ZR) {
      pdVar5 = adStack_e10;
      func_0x00010770c394();
      func_0x000107719040();
      if ((bool)in_ZR) {
        func_0x0001077172c0();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107710a58();
          goto code_r0x00010769ee14;
        }
        func_0x000107712d18();
        if ((in_NG != in_OV) && (func_0x000107713270(), !(bool)in_NG)) {
          func_0x0001077162e4();
          if ((bool)in_NG) {
            func_0x00010770996c();
            func_0x00010770b36c();
            if ((!(bool)in_ZR) && (func_0x000107713e04(), !(bool)in_ZR)) {
              func_0x00010770b398();
            }
          }
          else {
            func_0x000107708e54();
            func_0x000107709630();
            func_0x00010771a8b8();
            if ((!(bool)in_ZR) && (func_0x000107715190(), !(bool)in_ZR)) {
              func_0x00010770bae8();
            }
          }
        }
        iStack_938 = 0;
        func_0x0001077148ac(auStack_a10);
        func_0x00010770d358();
        func_0x000107714830();
        if (iStack_938 == 0) {
          uStack_a08 = 0;
          uStack_9a8 = 2;
          func_0x00010770d358();
          func_0x000107714830();
        }
        unaff_x22 = (double *)0x0;
        func_0x00010770c3f4();
        func_0x00010771d0bc();
        if ((bool)in_ZR) {
          iStack_a18 = 0;
          func_0x0001077148ac(auStack_af0);
          func_0x00010770e5f8();
          func_0x000107714830();
          if (iStack_a18 == 0) {
            uStack_ae8 = 0;
            uStack_a88 = 2;
            func_0x00010770e5f8();
            func_0x000107714830();
          }
          unaff_x22 = (double *)0x0;
          func_0x00010770d748();
          func_0x00010771f060();
          if ((bool)in_ZR) {
            func_0x00010771abfc();
            func_0x00010771ba4c();
            param_1 = *pdVar5;
            func_0x00010770bfc8();
            if ((bool)in_OV) {
              func_0x000107715230();
              func_0x000100060964(&dStack_bd8);
              unaff_x22 = pdVar5;
              goto code_r0x00010769ef98;
            }
            func_0x00010770ffac();
            if ((in_NG != in_OV) && (func_0x00010770ff84(), !(bool)in_NG)) {
              func_0x000107709778();
              func_0x00010770b600();
              if ((!(bool)in_ZR) && (func_0x0001077176e4(), !(bool)in_ZR)) {
                func_0x000107709f90();
              }
            }
            func_0x0001072cb4bc(auStack_b68);
            func_0x000107715654();
            unaff_x22 = (double *)0x1;
          }
          else {
            func_0x000107714934();
            func_0x000107719984(&dStack_bd8);
code_r0x00010769ef98:
            func_0x000107714880();
            func_0x0001077190f8();
            func_0x0001077161dc();
          }
          func_0x000107714888();
          func_0x000107714860();
        }
        else {
          func_0x000107714934();
          func_0x00010771abf4(auStack_a80);
          func_0x000107714880();
          func_0x000107718b90();
          func_0x0001077161dc();
        }
        func_0x000107714838();
        func_0x000107714848();
      }
      else {
        func_0x00010770fcb0();
code_r0x00010769ee14:
        func_0x00010770fe34();
        func_0x000107715820();
        func_0x0001077161dc();
      }
      func_0x00010770d2c4();
    }
    else {
      func_0x000107711ad0();
      func_0x000107579e98();
      func_0x00010770edcc();
      func_0x000107716338();
      func_0x0001077161dc();
    }
    func_0x000107714828(auStack_b68);
    unaff_x24 = unaff_x22;
  }
  else {
    iStack_b00 = 0;
    func_0x00010770ddc4();
    func_0x00010770c1dc();
    func_0x000107714830();
    if (iStack_b00 == 0) {
      func_0x000107716de8();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x000107719040();
    if ((bool)in_ZR) {
      func_0x00010770ba34();
      func_0x000107717cc8();
      if ((bool)in_ZR) {
        func_0x000107716a78();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x00010770db14();
          goto code_r0x00010769edc4;
        }
        func_0x000107711a44();
        if ((((in_NG != in_OV) && (func_0x000107711a28(), !(bool)in_NG)) &&
            (func_0x000107711678(), !(bool)in_ZR)) && (func_0x000107715190(), !(bool)in_ZR)) {
          func_0x00010770a6f4();
        }
        func_0x0001077172c0();
        func_0x00010771d41c();
        unaff_x24 = (double *)0x1;
      }
      else {
        func_0x000107708d64();
code_r0x00010769edc4:
        func_0x00010770ef80();
        func_0x000107715db4();
        func_0x00010771a918();
      }
      func_0x00010770e89c();
    }
    else {
      func_0x00010770fcb0();
      func_0x00010770fe34();
      func_0x000107715820();
      func_0x00010771a918();
    }
    func_0x000107714830();
code_r0x00010769f020:
    func_0x00010726af18(auStack_b60);
  }
  if (((ulong)unaff_x24 & 1) == 0) goto code_r0x00010769f638;
  iStack_938 = 0;
  func_0x00010770c394(auStack_b68);
  func_0x00010770c1dc();
  func_0x000107714830();
  if (iStack_938 == 0) {
    auStack_b60[0] = 0;
    iStack_b00 = 2;
    func_0x00010770c1dc();
    func_0x000107714830();
  }
  func_0x00010770c230();
  func_0x00010771d0bc();
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x00010771abf4(auStack_b68);
    uVar3 = in_ZR;
    goto code_r0x00010769f1a0;
  }
  func_0x00010771abfc();
  func_0x00010770d7b4();
  if ((bool)in_OV) goto code_r0x00010769f898;
  func_0x00010771bacc();
  if (((in_NG != in_OV) && (func_0x0001077166fc(), !(bool)in_NG)) &&
     ((func_0x00010770fa78(), !(bool)in_ZR && (func_0x000107715190(), !(bool)in_ZR)))) {
    func_0x00010770cd4c();
  }
  iStack_a18 = 0;
  func_0x0001077148ac(auStack_b68);
  func_0x00010770c3e8();
  func_0x000107714848();
  if (iStack_a18 == 0) {
    auStack_b68[0] = 0;
    bStack_af8 = 0;
    func_0x000107714f6c();
    func_0x00010769fc44();
    func_0x000107714898();
    uVar3 = in_ZR;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x00010771b1c4();
      func_0x000107714858();
      func_0x00010771191c();
      func_0x00010770e690();
      uVar6 = 0;
      func_0x00010771db18();
      if ((uVar6 & 1) != 0) {
code_r0x00010769f3ec:
        func_0x00010771a6d8();
        dStack_bd0 = param_1;
        func_0x00010771fd64();
        func_0x000107711614();
        func_0x0001077148e8();
        func_0x000107714888();
        func_0x000107714848();
        func_0x00010771aae0();
        goto code_r0x00010769f0ec;
      }
      if ((bStack_af8 & 1) == 0) {
        func_0x000107714f6c();
        func_0x00010769fc44();
        func_0x000107714898();
        uVar3 = false;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010771b1c4();
          func_0x000107714858();
          goto code_r0x00010769f248;
        }
      }
      else {
code_r0x00010769f248:
        func_0x00010770f7f4();
        if (iStack_b70 == 2) {
          func_0x0001072cb4bc();
        }
        else {
          func_0x000107714934();
          func_0x000107579e98(auStack_c48);
          func_0x000107714880();
          func_0x000104c2f714(auStack_c48);
        }
        func_0x00010771492c();
        in_ZR = iStack_b70 == 2;
        uVar3 = in_ZR;
        if ((bool)in_ZR) goto code_r0x00010769f3ec;
      }
      func_0x000107714888();
      func_0x000107714848();
    }
    func_0x00010771aae0();
    goto code_r0x00010769f62c;
  }
code_r0x00010769f0ec:
  func_0x00010770c4dc();
  func_0x00010771f060();
  if ((bool)in_ZR) {
    auStack_b68[0] = 0;
    bStack_af8 = 0;
    func_0x000107714f6c();
    func_0x00010769fe5c();
    func_0x000107714898();
    uVar3 = 0;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x00010771b1c4();
      func_0x000107714858();
      dStack_bd0 = 0.0;
      func_0x00010771fd64();
      func_0x00010770d8c8();
      pdVar5 = &dStack_bd8;
      func_0x00010745fc58(pdVar5,auStack_c48);
      dVar9 = 2.5;
      if (((ulong)pdVar5 & 1) == 0) {
        if ((bStack_af8 & 1) == 0) {
          func_0x000107714f6c();
          func_0x00010769fe5c();
          func_0x000107714898();
          uVar3 = 0;
          if ((bool)in_ZR) {
            func_0x000107714870();
            func_0x00010771b1c4();
            func_0x000107714858();
            goto code_r0x00010769f174;
          }
        }
        else {
code_r0x00010769f174:
          func_0x00010770ed38();
          if (iStack_da8 == 2) {
            func_0x0001077172c0();
            dVar9 = *pdVar5;
          }
          else {
            func_0x000107714934();
            func_0x0001077156d0(auStack_cb8);
            func_0x000107712df0();
            func_0x000107718754();
            dVar9 = 0.0;
          }
          func_0x00010771492c();
          uVar3 = 0;
          if (iStack_da8 == 2) goto code_r0x00010769f290;
        }
      }
      else {
code_r0x00010769f290:
        iStack_c50 = 0;
        pdVar5 = (double *)0x0;
        func_0x00010770cf68();
        func_0x00010770fedc();
        func_0x000107714888();
        if (iStack_c50 == 0) {
          func_0x00010771191c();
          func_0x00010771153c();
          func_0x000107714850();
        }
        func_0x00010771464c();
        uVar3 = iStack_cc0 == 2;
        if ((bool)uVar3) {
          iStack_d30 = 0;
          func_0x00010770ddc4();
          func_0x000107711220();
          func_0x000107714888();
          if (iStack_d30 == 0) {
            func_0x000107717d04();
            func_0x000107714f6c();
            func_0x0001076a0074();
            func_0x000107714898();
            uVar2 = uVar3;
            if ((bool)uVar3) {
              func_0x000107714870();
              func_0x000107715df8();
              func_0x000107714858();
              func_0x00010771310c();
              func_0x00010770d860(auStack_ef0);
              func_0x000107713b88();
              param_1 = 2.5;
              if (((ulong)pdVar5 & 1) != 0) {
code_r0x00010769f528:
                param_1 = param_1 * 5.0;
                adStack_f58[0] = param_1;
                func_0x00010771945c();
                func_0x000107711220();
                func_0x000107714888();
                func_0x00010770cd5c();
                func_0x00010770ccbc();
                func_0x000107715624();
                goto code_r0x00010769f308;
              }
              if ((bStack_da0 & 1) == 0) {
                func_0x000107714f6c();
                func_0x0001076a0074();
                func_0x000107714898();
                uVar2 = false;
                if ((bool)uVar3) {
                  func_0x000107714870();
                  func_0x000107715df8();
                  func_0x000107714858();
                  goto code_r0x00010769f4a0;
                }
              }
              else {
code_r0x00010769f4a0:
                pdVar5 = adStack_f58;
                func_0x00010771496c(adStack_e10);
                if (iStack_ef8 == 2) {
                  func_0x000107718d8c();
                  param_1 = *pdVar5;
                }
                else {
                  func_0x00010770caec();
                  func_0x0001077106ec();
                  func_0x0001077157a8();
                  param_1 = 0.0;
                }
                func_0x00010770ce38();
                uVar3 = iStack_ef8 == 2;
                uVar2 = uVar3;
                if ((bool)uVar3) goto code_r0x00010769f528;
              }
              func_0x00010770cd5c();
              func_0x00010770ccbc();
            }
            func_0x000107715624();
          }
          else {
code_r0x00010769f308:
            func_0x00010770d860(auStack_e80);
            func_0x000107719cf0();
            if ((bool)uVar3) {
              func_0x000107717d04();
              func_0x000107714f6c();
              func_0x0001076a028c();
              func_0x000107714898();
              uVar2 = 0;
              if ((bool)uVar3) {
                func_0x000107714870();
                func_0x000107715df8();
                func_0x000107714858();
                func_0x000107712544();
                func_0x00010770d860(auStack_f60);
                func_0x0001077100f8();
                dVar10 = 2.5;
                if (((ulong)pdVar5 & 1) == 0) {
                  if ((bStack_da0 & 1) == 0) {
                    func_0x000107714f6c();
                    func_0x0001076a028c();
                    func_0x000107714898();
                    uVar2 = 0;
                    if ((bool)uVar3) {
                      func_0x000107714870();
                      func_0x000107715df8();
                      func_0x000107714858();
                      goto code_r0x00010769f384;
                    }
                  }
                  else {
code_r0x00010769f384:
                    pdVar5 = adStack_fc8;
                    func_0x00010771496c(adStack_e10);
                    func_0x00010771aef0();
                    if ((bool)uVar3) {
                      func_0x000107717e04();
                      dVar10 = *pdVar5;
                    }
                    else {
                      func_0x00010770a26c();
                      func_0x00010770c460();
                      func_0x000107714ad4();
                      dVar10 = 0.0;
                    }
                    func_0x000107714850();
                    uVar2 = 0;
                    uVar3 = 1;
                    if (unaff_w20 == 2) goto code_r0x00010769f4e8;
                  }
                }
                else {
code_r0x00010769f4e8:
                  func_0x00010771ba4c();
                  func_0x00010771b098();
                  if ((bool)uVar3) {
                    if (param_1 == 0.0) {
                      func_0x000107719318();
                    }
                    else {
                      bVar1 = param_1 <= 0.0;
                      param_1 = INFINITY;
                      if (bVar1) {
                        param_1 = -INFINITY;
                      }
                    }
                  }
                  else {
                    param_1 = param_1 / dVar9;
                  }
                  uVar2 = param_1 == 6.0;
                  func_0x0001072cb4bc(auStack_d28);
                  func_0x000107708734();
                  dVar8 = 3.141592653589793;
                  func_0x00010771bb40();
                  dVar9 = param_1;
                  func_0x000107718208();
                  func_0x00010771d080();
                  if ((bool)uVar2) {
                    uVar2 = dVar8 == 0.0;
                    if ((bool)uVar2) {
                      func_0x00010771bb34();
                      dVar10 = dVar8;
                    }
                    else {
                      dVar10 = INFINITY;
                      if (dVar8 <= 0.0) {
                        dVar10 = -INFINITY;
                      }
                    }
                  }
                  else {
                    dVar10 = dVar8 / dVar10;
                  }
                  func_0x0001077167c4();
                  func_0x00010770bd50(dVar9 + param_1 * dVar10 * 1.8);
                  func_0x000107714890();
                }
                func_0x00010770ce38();
                func_0x00010770cd5c();
              }
              func_0x000107715624();
              uVar3 = uVar2;
            }
            else {
              func_0x00010770e45c();
              func_0x00010770edcc();
              func_0x000107716338();
            }
            func_0x00010770ccbc();
            uVar2 = uVar3;
          }
          func_0x000107714888();
          uVar3 = uVar2;
        }
        else {
          func_0x000107711ad0();
          func_0x000107718140();
          func_0x00010770edcc();
          func_0x000107716338();
        }
        func_0x000107714850();
        func_0x00010771492c();
      }
      func_0x0001077148e8();
      func_0x000107712784();
    }
    func_0x00010771aae0();
    in_ZR = uVar3;
  }
  else {
    func_0x000107714934();
    func_0x000107719984(auStack_b68);
    func_0x000107714880();
    func_0x000104c2f714(auStack_b68);
  }
  func_0x000107714848();
  uVar3 = in_ZR;
code_r0x00010769f62c:
  func_0x000107714860();
  while( true ) {
    func_0x000107714830();
    func_0x000107714838();
    in_ZR = uVar3;
code_r0x00010769f638:
    func_0x00010770ec44();
    func_0x000107710c80();
    func_0x000107708a48(uStack_850);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
code_r0x00010769f898:
    func_0x000107715230();
    func_0x000100060964(auStack_b68);
    uVar3 = in_ZR;
code_r0x00010769f1a0:
    func_0x000107714880();
    func_0x000104c2f714(auStack_b68);
  }
  return;
}



/* Entry: 1076a0d5c; end: 1076a157f;  */

void FUN_1076a0d5c(double param_1,undefined8 param_2,double param_3)

{
  char in_NG;
  bool bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  char in_OV;
  char cVar3;
  char cVar4;
  int iVar5;
  double *pdVar6;
  double extraout_x8;
  double extraout_x8_00;
  double *unaff_x20;
  int unaff_w22;
  undefined1 *puVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  double unaff_d8;
  double unaff_d9;
  double dVar12;
  undefined1 auStack_318 [104];
  int iStack_2b0;
  undefined1 auStack_2a8 [112];
  double adStack_238 [13];
  int iStack_1d0;
  double adStack_1c8 [14];
  undefined1 auStack_158 [8];
  double adStack_150 [12];
  int iStack_f0;
  undefined1 auStack_78 [120];
  
  uVar10 = (undefined4)((ulong)param_2 >> 0x20);
  uVar9 = (undefined4)param_2;
  func_0x00010771a3d8();
  func_0x000107707ae4();
  if ((bRam00000001136d3328 & 1) == 0) {
    iVar5 = 0x136d3328;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770bd90(0x11370ad58);
      ___cxa_guard_release(0x1136d3328);
    }
  }
  if ((bRam00000001136d3330 & 1) == 0) {
    iVar5 = 0x136d3330;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770d06c(0x11370ad90);
      ___cxa_guard_release(0x1136d3330);
    }
  }
  if ((bRam00000001136d3338 & 1) == 0) {
    iVar5 = 0x136d3338;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770a504(0x11370adc8);
      ___cxa_guard_release(0x1136d3338);
    }
  }
  if ((bRam00000001136d3340 & 1) == 0) {
    iVar5 = 0x136d3340;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770a1d0(0x11370ae00);
      ___cxa_guard_release(0x1136d3340);
    }
  }
  if ((bRam00000001136d3348 & 1) == 0) {
    iVar5 = 0x136d3348;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770d05c(0x11370ae38);
      ___cxa_guard_release(0x1136d3348);
    }
  }
  if ((bRam00000001136d3350 & 1) == 0) {
    iVar5 = 0x136d3350;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770a514(0x11370ae70);
      ___cxa_guard_release(0x1136d3350);
    }
  }
  if ((bRam00000001136d3358 & 1) == 0) {
    iVar5 = 0x136d3358;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770b67c(0x11370aea8);
      ___cxa_guard_release(0x1136d3358);
    }
  }
  func_0x000107713060();
  func_0x000107719970();
  iVar5 = (int)auStack_78;
  func_0x00010771b9d0();
  fVar11 = SUB84(unaff_d8,0);
  if (iVar5 != 0) {
    iStack_f0 = 0;
    func_0x000107712e60();
    puVar7 = auStack_158;
    func_0x00010770c1dc();
    func_0x000107714830();
    if (iStack_f0 == 0) {
      func_0x000107716dc0();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x00010771a7a4();
    if ((bool)in_ZR) {
      pdVar6 = adStack_238;
      func_0x00010770c394();
      func_0x00010771f828();
      if ((bool)in_ZR) {
        func_0x00010771c400();
        func_0x0001077183e8();
        if ((bool)in_OV) goto LAB_1076a13f8;
        dVar12 = 1.0;
        if ((fVar11 < 14.0) && (dVar12 = 2.0, 13.0 <= fVar11)) {
          dVar8 = (double)(ulong)(uint)(fVar11 + -13.0);
          bVar1 = fVar11 + -13.0 == 0.0;
          if (!bVar1) {
            func_0x000107715190();
            dVar12 = 1.0;
            if (!bVar1) {
              func_0x00010770c480();
              dVar12 = dVar8 + param_3 * (double)CONCAT44(uVar10,uVar9);
            }
          }
        }
        func_0x000107718c84();
        unaff_d9 = dVar12 * *pdVar6;
        goto LAB_1076a0ecc;
      }
      func_0x000107714934();
      func_0x000107717004(auStack_2a8);
      func_0x00010770fed0();
      func_0x000107715fd4();
      func_0x000107714890();
    }
    else {
      func_0x00010770cad8();
      func_0x00010770f458();
      func_0x0001077160fc();
    }
    func_0x000107714830();
    goto LAB_1076a10c8;
  }
  func_0x0001077148ac(auStack_158);
  puVar7 = auStack_158;
  func_0x000107579348(auStack_158);
  func_0x00010770c8b0();
  if (unaff_w22 == 0) {
    iStack_f0 = 0;
    func_0x000107712e60();
    func_0x00010770c184();
    func_0x000107714850();
    if (iStack_f0 == 0) {
      func_0x000107716dc0();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x00010771a7a4();
    if (!(bool)in_ZR) {
      func_0x00010770cad8();
      func_0x00010770f458();
      func_0x0001077160fc();
      func_0x000107714850();
      goto LAB_1076a10c8;
    }
    func_0x000107718c84();
    func_0x0001077183e8();
    if ((bool)in_OV) {
      func_0x000107713a08();
      func_0x00010770f458();
      func_0x0001077160fc();
      unaff_d9 = 0.0;
      goto LAB_1076a1098;
    }
    dVar12 = 500.0;
    func_0x00010771bad8();
    unaff_d9 = dVar12;
    if (in_NG == in_OV) goto LAB_1076a1098;
    uVar9 = 0x41200000;
    uVar10 = 0;
    uVar2 = fVar11 == 10.0;
    bVar1 = fVar11 < 10.0;
    unaff_d9 = 10.0;
    if (bVar1) goto LAB_1076a1098;
    func_0x00010771bad8();
    if (bVar1) {
      dVar12 = (double)(ulong)(uint)(fVar11 + -10.0);
      func_0x00010770c46c();
      if ((bool)uVar2) goto LAB_1076a1098;
      func_0x000107715190();
      if (!(bool)uVar2) {
        func_0x0001077081e8();
        goto LAB_1076a12b8;
      }
LAB_1076a1108:
      unaff_d9 = 100.0;
    }
    else {
      func_0x00010771bad8();
      if (bVar1) {
        dVar12 = (double)(ulong)(uint)(fVar11 + -150.0);
        func_0x00010770bdc0();
        if ((bool)uVar2) goto LAB_1076a1108;
        func_0x000107715190();
        if ((bool)uVar2) goto LAB_1076a12a4;
        func_0x000107707f98();
        param_3 = extraout_x8_00;
      }
      else {
        func_0x00010771af08();
        if ((bool)uVar2) {
LAB_1076a12a4:
          unaff_d9 = 200.0;
          goto LAB_1076a1098;
        }
        func_0x00010771efc4();
        unaff_d9 = dVar12;
        if ((bool)uVar2) goto LAB_1076a1098;
        func_0x0001077112c8();
        func_0x000107718180();
        param_3 = extraout_x8;
      }
LAB_1076a12b8:
      unaff_d9 = dVar12 + param_3 * (double)CONCAT44(uVar10,uVar9);
    }
LAB_1076a1098:
    func_0x000107714850();
    pdVar6 = adStack_150;
    goto LAB_1076a10a0;
  }
  func_0x0001077148ac(auStack_158);
  cVar3 = SBORROW4(iStack_f0,2);
  cVar4 = iStack_f0 + -2 < 0;
  in_ZR = iStack_f0 == 2;
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x00010771df54();
    func_0x000107714880();
    func_0x00010771acac();
    goto LAB_1076a10c8;
  }
  pdVar6 = adStack_1c8;
  func_0x00010770c394();
  func_0x00010771a7a4();
  if ((bool)in_ZR) {
    func_0x000107718c84();
    func_0x00010770d7b4();
    if ((bool)cVar3) {
      func_0x000107713a08();
      goto LAB_1076a1088;
    }
    func_0x000107712d18();
    if ((cVar4 != cVar3) && (func_0x000107713270(), !(bool)cVar4)) {
      func_0x0001077162e4();
      if ((bool)cVar4) {
        uVar9 = 0xc1400000;
        uVar10 = 0;
        func_0x00010770996c();
        func_0x00010770b36c();
        if ((!(bool)in_ZR) && (func_0x000107713e04(), !(bool)in_ZR)) {
          func_0x00010770b398();
LAB_1076a1130:
          unaff_d8 = param_1 + param_3 * (double)CONCAT44(uVar10,uVar9);
        }
      }
      else {
        func_0x000107708e54();
        func_0x000107709630();
        func_0x00010771a8b8();
        if (!(bool)in_ZR) {
          func_0x000107715190();
          unaff_d8 = 0.0;
          if (!(bool)in_ZR) {
            func_0x00010770bae8();
            goto LAB_1076a1130;
          }
        }
      }
    }
    iStack_1d0 = 0;
    func_0x00010770f7b8();
    func_0x00010770c51c();
    func_0x000107714850();
    if (iStack_1d0 == 0) {
      func_0x000107716688();
      func_0x00010770c51c();
      func_0x000107714850();
    }
    func_0x00010770ce14();
    func_0x00010771afa0();
    if ((bool)in_ZR) {
      iStack_2b0 = 0;
      func_0x000107710f50();
      puVar7 = auStack_318;
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_2b0 == 0) {
        unaff_x20 = (double *)0x0;
        func_0x000107716884();
        func_0x00010770d410();
        func_0x000107714890();
      }
      func_0x00010770c454();
      func_0x00010771bdd8();
      if ((bool)in_ZR) {
        func_0x0001077191d8();
        func_0x000107716360();
        dVar12 = *pdVar6;
        func_0x00010770bfc8();
        if (!(bool)cVar3) {
          func_0x00010770ffac();
          if ((cVar4 != cVar3) && (func_0x00010770ff84(), !(bool)cVar4)) {
            func_0x000107709778();
            func_0x00010770b600();
            if ((!(bool)in_ZR) && (func_0x0001077176e4(), !(bool)in_ZR)) {
              func_0x000107709f90();
            }
          }
          func_0x0001072cb4bc(auStack_158);
          func_0x000107715654();
          unaff_d9 = (double)CONCAT44(uVar10,uVar9) * dVar12;
          unaff_x20 = (double *)0x1;
          goto LAB_1076a1254;
        }
        func_0x000107711fd0();
        unaff_x20 = pdVar6;
      }
      else {
        func_0x000107708a34();
      }
      func_0x00010770cf5c();
      func_0x000107714fdc();
      func_0x000107715e5c();
LAB_1076a1254:
      func_0x000107714848();
      func_0x000107714838();
      func_0x000107714850();
      func_0x000107714830();
      func_0x00010771147c();
      func_0x000107714828(auStack_158);
      if (((ulong)unaff_x20 & 1) != 0) goto LAB_1076a10ac;
      goto LAB_1076a10cc;
    }
    func_0x000107714934();
    func_0x00010770f7c4();
    func_0x00010770f228();
    func_0x00010771626c();
    func_0x000107714850();
    func_0x000107714830();
  }
  else {
    func_0x00010770cad8();
LAB_1076a1088:
    func_0x00010770f458();
    func_0x0001077160fc();
  }
  func_0x00010771147c();
  func_0x000107719348();
LAB_1076a10c8:
  do {
    func_0x00010726af18();
LAB_1076a10cc:
    do {
      func_0x00010770fe28();
      func_0x00010770c3d0();
      func_0x000107707d28();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
LAB_1076a13f8:
      func_0x000107715230();
      func_0x00010771e33c();
      func_0x00010770fed0();
      func_0x000107715fd4();
      unaff_d9 = 0.0;
LAB_1076a0ecc:
      func_0x00010770ec5c();
      func_0x000107714830();
      pdVar6 = (double *)(puVar7 + 8);
LAB_1076a10a0:
      func_0x00010726af18(pdVar6);
      fVar11 = SUB84(unaff_d8,0);
      in_ZR = !NAN(fVar11) && !NAN(fVar11);
    } while (NAN(fVar11));
LAB_1076a10ac:
    iStack_f0 = 2;
    adStack_150[0] = unaff_d9;
    func_0x0001077148fc();
  } while( true );
}



/* Entry: 1076a7c38; end: 1076a889f;  */

void FUN_1076a7c38(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  int unaff_w24;
  ulong unaff_x30;
  
  func_0x0001077184d0();
  func_0x000107707670();
  if ((bRam00000001136d35a8 & 1) == 0) {
    unaff_x30 = 0x1136d35a8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708e10(0x11370bea0);
      unaff_x30 = 0x1136d35a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35b0 & 1) == 0) {
    unaff_x30 = 0x1136d35b0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708bb0(0x11370bed8);
      unaff_x30 = 0x1136d35b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35b8 & 1) == 0) {
    unaff_x30 = 0x1136d35b8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708de0(0x11370bf10);
      unaff_x30 = 0x1136d35b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35c0 & 1) == 0) {
    unaff_x30 = 0x1136d35c0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708dc0(0x11370bf48);
      unaff_x30 = 0x1136d35c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35c8 & 1) == 0) {
    unaff_x30 = 0x1136d35c8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708dd0(0x11370bf80);
      unaff_x30 = 0x1136d35c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35d0 & 1) == 0) {
    unaff_x30 = 0x1136d35d0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708e00(0x11370bfb8);
      unaff_x30 = 0x1136d35d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35d8 & 1) == 0) {
    unaff_x30 = 0x1136d35d8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708df0(0x11370bff0);
      unaff_x30 = 0x1136d35d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35e0 & 1) == 0) {
    unaff_x30 = 0x1136d35e0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708db0(0x11370c028);
      unaff_x30 = 0x1136d35e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35e8 & 1) == 0) {
    unaff_x30 = 0x1136d35e8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077092ac(0x11370c060);
      unaff_x30 = 0x1136d35e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35f0 & 1) == 0) {
    unaff_x30 = 0x1136d35f0;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077153c8(0x11370c098,&UNK_10f422b1a);
      unaff_x30 = 0x1136d35f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d35f8 & 1) == 0) {
    unaff_x30 = 0x1136d35f8;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714b38(0x11370c0d0,&UNK_10f422b2a);
      unaff_x30 = 0x1136d35f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3600 & 1) == 0) {
    unaff_x30 = 0x1136d3600;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107709394(0x11370c108);
      unaff_x30 = 0x1136d3600;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3608 & 1) == 0) {
    unaff_x30 = 0x1136d3608;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714990(0x11370c140,&UNK_10f422b38);
      unaff_x30 = 0x1136d3608;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3610 & 1) == 0) {
    unaff_x30 = 0x1136d3610;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x00010770927c(0x11370c178);
      unaff_x30 = 0x1136d3610;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3618 & 1) == 0) {
    unaff_x30 = 0x1136d3618;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107709570(0x11370c1b0);
      unaff_x30 = 0x1136d3618;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3620 & 1) == 0) {
    unaff_x30 = 0x1136d3620;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714990(0x11370c1e8,&UNK_10f422b49);
      unaff_x30 = 0x1136d3620;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3628 & 1) == 0) {
    unaff_x30 = 0x1136d3628;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107709020(0x11370c220);
      unaff_x30 = 0x1136d3628;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3630 & 1) == 0) {
    unaff_x30 = 0x1136d3630;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077093a4(0x11370c258);
      unaff_x30 = 0x1136d3630;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3638 & 1) == 0) {
    unaff_x30 = 0x1136d3638;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077090d0(0x11370c290);
      unaff_x30 = 0x1136d3638;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3640 & 1) == 0) {
    unaff_x30 = 0x1136d3640;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714990(0x11370c2c8,&UNK_10f422b5a);
      unaff_x30 = 0x1136d3640;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3648 & 1) == 0) {
    unaff_x30 = 0x1136d3648;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077093c4(0x11370c300);
      unaff_x30 = 0x1136d3648;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3650 & 1) == 0) {
    unaff_x30 = 0x1136d3650;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107714a18(0x11370c338,&UNK_10f422b6b);
      unaff_x30 = 0x1136d3650;
      ___cxa_guard_release();
    }
  }
  func_0x0001077083d4();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x00010771cb04();
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
  iVar2 = (int)unaff_x30;
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    iVar2 = (int)unaff_x30;
    if (!(bool)in_ZR) goto LAB_1076a7e48;
    func_0x0001077152cc();
    func_0x000104c32db4();
    iVar2 = (int)unaff_x30;
    if ((unaff_x30 & 1) == 0) {
      func_0x000107714b98();
      if (iVar2 != 0) {
        func_0x00010771cb04();
        goto LAB_1076a7f70;
      }
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x00010771cb04();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        uVar1 = 0;
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x00010771cb04();
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
            goto LAB_1076a7f28;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076a7f30;
        }
        goto LAB_1076a7f50;
      }
      func_0x000107707e58();
      uVar1 = in_ZR;
      goto LAB_1076a7f48;
    }
LAB_1076a7f70:
    func_0x000107714d34();
LAB_1076a7f74:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076a7f7c:
    func_0x000107714830();
  }
  else {
LAB_1076a7e48:
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x00010771cb04();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
      uVar1 = in_ZR;
LAB_1076a7f48:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076a7f50:
      func_0x000107714838();
      func_0x000107714848();
      in_ZR = uVar1;
      goto LAB_1076a7f7c;
    }
    func_0x000107715044();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076a7f50;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x00010771cb04();
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
LAB_1076a7f28:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076a7f30:
    func_0x000107714838();
    func_0x000107714830();
    in_ZR = unaff_w24 == 3;
    if ((bool)in_ZR) goto LAB_1076a7f74;
  }
  func_0x00010770c3d0();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x0001077150bc();
  if ((bool)in_ZR) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if ((bool)in_ZR) {
      func_0x0001077154e4();
      func_0x000104c32db4();
      if (iVar2 == 0) {
        func_0x000107714b98();
        if (iVar2 == 0) {
          func_0x000107714b98();
          if (iVar2 == 0) {
            func_0x000107714b98();
            if (iVar2 == 0) {
              func_0x000107714b98();
              if (iVar2 == 0) {
                func_0x000107714b98();
                if (iVar2 == 0) {
                  func_0x000107714b98();
                  if (iVar2 == 0) {
                    func_0x000107714b98();
                    if (iVar2 == 0) {
                      func_0x000107714b98();
                      if (iVar2 == 0) {
                        func_0x00010770d824();
                        func_0x000107707860();
                      }
                      else {
                        func_0x00010770d824();
                        func_0x000107707860();
                      }
                    }
                    else {
                      func_0x00010770d824();
                      func_0x000107707860();
                    }
                  }
                  else {
                    func_0x00010770d824();
                    func_0x000107707860();
                  }
                }
                else {
                  func_0x00010770d824();
                  func_0x000107707860();
                }
              }
              else {
                func_0x00010770d824();
                func_0x000107707860();
              }
            }
            else {
              func_0x00010770d824();
              func_0x000107707860();
            }
          }
          else {
            func_0x00010770d824();
            func_0x000107707860();
          }
        }
        else {
          func_0x00010770d824();
          func_0x000107707860();
        }
      }
      else {
        func_0x00010770d824();
        func_0x000107707860();
      }
      goto LAB_1076a7fe4;
    }
  }
  func_0x00010770d824();
  func_0x000107707860();
LAB_1076a7fe4:
  func_0x00010770a0a4();
  func_0x000107714838();
  func_0x000107714830();
  func_0x00010770d7e8();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x000107714890();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3650);
  do {
    func_0x0001077149ec();
    func_0x00010770cd04();
  } while( true );
}



/* Entry: 1076b8b8c; end: 1076b93d3;  */

void FUN_1076b8b8c(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined4 unaff_w22;
  byte unaff_w26;
  ulong unaff_x27;
  undefined8 in_stack_00000050;
  int iStack_1528;
  undefined1 auStack_1438 [96];
  int iStack_13d8;
  undefined1 auStack_1388 [56];
  undefined1 auStack_1350 [16];
  undefined8 ***pppuStack_1340;
  byte *pbStack_1338;
  undefined1 auStack_1318 [112];
  undefined1 auStack_12a8 [56];
  undefined1 auStack_1270 [56];
  undefined1 auStack_1238 [112];
  undefined1 auStack_11c8 [104];
  undefined4 uStack_1160;
  undefined1 auStack_1158 [112];
  undefined1 auStack_10e8 [112];
  undefined1 auStack_1078 [8];
  undefined1 auStack_1070 [96];
  undefined4 uStack_1010;
  byte bStack_1008;
  undefined1 auStack_1000 [8];
  undefined1 auStack_ff8 [96];
  int iStack_f98;
  undefined1 auStack_f90 [104];
  undefined4 uStack_f28;
  undefined1 auStack_d50 [128];
  undefined1 auStack_cd0 [8];
  undefined1 auStack_cc8 [96];
  undefined4 uStack_c68;
  undefined1 auStack_c28 [32];
  undefined1 auStack_c08 [8];
  undefined8 **ppuStack_c00;
  undefined *puStack_bf8;
  undefined1 auStack_bd0 [56];
  undefined1 auStack_b98 [112];
  undefined1 auStack_b28 [56];
  undefined1 auStack_af0 [56];
  undefined1 auStack_ab8 [112];
  undefined8 auStack_a48 [13];
  undefined4 uStack_9e0;
  undefined1 auStack_9d8 [112];
  undefined1 auStack_968 [112];
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined4 uStack_890;
  byte bStack_888;
  undefined1 auStack_880 [8];
  undefined8 auStack_878 [12];
  int iStack_818;
  undefined8 uStack_810;
  undefined8 *puStack_808;
  undefined4 uStack_7a8;
  int iStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 auStack_718 [336];
  undefined1 auStack_5c8 [8];
  undefined8 uStack_5c0;
  undefined1 auStack_548 [104];
  undefined4 uStack_4e0;
  undefined1 auStack_468 [120];
  int iStack_3f0;
  undefined1 auStack_378 [8];
  undefined1 auStack_2d0 [64];
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 auStack_258 [14];
  undefined1 auStack_1e8 [112];
  undefined1 auStack_178 [240];
  undefined1 auStack_88 [136];
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d3ff8 & 1) == 0) {
    iVar2 = 0x136d3ff8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a504(0x113710660);
      ___cxa_guard_release(0x1136d3ff8);
    }
  }
  if ((bRam00000001136d4000 & 1) == 0) {
    iVar2 = 0x136d4000;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a514(0x113710698);
      ___cxa_guard_release(0x1136d4000);
    }
  }
  if ((bRam00000001136d4008 & 1) == 0) {
    iVar2 = 0x136d4008;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c58(0x1137106d0);
      ___cxa_guard_release(0x1136d4008);
    }
  }
  if ((bRam00000001136d4010 & 1) == 0) {
    iVar2 = 0x136d4010;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c48(0x113710708);
      ___cxa_guard_release(0x1136d4010);
    }
  }
  if ((bRam00000001136d4018 & 1) == 0) {
    iVar2 = 0x136d4018;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c38(0x113710740);
      ___cxa_guard_release(0x1136d4018);
    }
  }
  if ((bRam00000001136d4020 & 1) == 0) {
    iVar2 = 0x136d4020;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c28(0x113710778);
      ___cxa_guard_release(0x1136d4020);
    }
  }
  if ((bRam00000001136d4028 & 1) == 0) {
    iVar2 = 0x136d4028;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c18(0x1137107b0);
      ___cxa_guard_release(0x1136d4028);
    }
  }
  if ((bRam00000001136d4030 & 1) == 0) {
    iVar2 = 0x136d4030;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c08(0x1137107e8);
      ___cxa_guard_release(0x1136d4030);
    }
  }
  if ((bRam00000001136d4038 & 1) == 0) {
    iVar2 = 0x136d4038;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770dbc0(0x113710820);
      ___cxa_guard_release(0x1136d4038);
    }
  }
  if ((bRam00000001136d4040 & 1) == 0) {
    iVar2 = 0x136d4040;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710bf8(0x113710858);
      ___cxa_guard_release(0x1136d4040);
    }
  }
  if ((bRam00000001136d4048 & 1) == 0) {
    iVar2 = 0x136d4048;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770ea4c(0x113710890);
      ___cxa_guard_release(0x1136d4048);
    }
  }
  if ((bRam00000001136d4050 & 1) == 0) {
    iVar2 = 0x136d4050;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107716018(0x1137108c8,&UNK_10f4210e6);
      ___cxa_guard_release(0x1136d4050);
    }
  }
  if ((bRam00000001136d4058 & 1) == 0) {
    iVar2 = 0x136d4058;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710be8(0x113710900);
      ___cxa_guard_release(0x1136d4058);
    }
  }
  if ((bRam00000001136d4060 & 1) == 0) {
    iVar2 = 0x136d4060;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710bd8(0x113710938);
      ___cxa_guard_release(0x1136d4060);
    }
  }
  if ((bRam00000001136d4068 & 1) == 0) {
    iVar2 = 0x136d4068;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710bc8(0x113710970);
      ___cxa_guard_release(0x1136d4068);
    }
  }
  if ((bRam00000001136d4070 & 1) == 0) {
    iVar2 = 0x136d4070;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770f5f0(0x1137109a8);
      ___cxa_guard_release(0x1136d4070);
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
  puVar3 = auStack_88;
  func_0x000107707bdc(puVar3);
  func_0x00010771557c();
  if ((bool)in_ZR) {
    func_0x000107717dcc();
    func_0x00010770c30c(puVar3);
    func_0x000107715e00();
    func_0x00010771159c();
    puVar3 = auStack_178;
    func_0x000107707bdc(puVar3);
    func_0x00010771bbd0();
    if ((bool)in_ZR) {
      func_0x000107719fb4();
      unaff_w22 = SUB84(auStack_1e8,0);
      func_0x00010770cc44(puVar3);
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
      unaff_x20 = auStack_258;
      func_0x000107714850();
      func_0x0001077172a8(auStack_2d0);
      func_0x00010771386c();
      func_0x000107716ae8();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x00010771720c();
      func_0x000107716b44();
      func_0x000107713024();
      func_0x000107717bf8();
      func_0x00010770d1c8();
      func_0x000107717b98(auStack_2d0);
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
      func_0x00010770c1d0(auStack_178);
    }
    func_0x000107710d10();
    func_0x000107714838();
  }
  else {
    func_0x00010770c1d0(auStack_88);
  }
  func_0x00010770f284();
  func_0x000107718d9c();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d4070);
  func_0x0001077149ec();
  puVar6 = &DAT_1076b93d4;
  func_0x0001077184d0();
  puStack_290 = &stack0x00000050;
  puStack_288 = puVar6;
  func_0x000107707444();
  if ((bRam00000001136d4078 & 1) == 0) {
    iVar2 = 0x136d4078;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a504(0x1137109e0);
      ___cxa_guard_release(0x1136d4078);
    }
  }
  if ((bRam00000001136d4080 & 1) == 0) {
    iVar2 = 0x136d4080;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a514(0x113710a18);
      ___cxa_guard_release(0x1136d4080);
    }
  }
  if ((bRam00000001136d4088 & 1) == 0) {
    iVar2 = 0x136d4088;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c58(0x113710a50);
      ___cxa_guard_release(0x1136d4088);
    }
  }
  if ((bRam00000001136d4090 & 1) == 0) {
    iVar2 = 0x136d4090;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c48(0x113710a88);
      ___cxa_guard_release(0x1136d4090);
    }
  }
  if ((bRam00000001136d4098 & 1) == 0) {
    iVar2 = 0x136d4098;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c38(0x113710ac0);
      ___cxa_guard_release(0x1136d4098);
    }
  }
  if ((bRam00000001136d40a0 & 1) == 0) {
    iVar2 = 0x136d40a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c28(0x113710af8);
      ___cxa_guard_release(0x1136d40a0);
    }
  }
  if ((bRam00000001136d40a8 & 1) == 0) {
    iVar2 = 0x136d40a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c18(0x113710b30);
      ___cxa_guard_release(0x1136d40a8);
    }
  }
  if ((bRam00000001136d40b0 & 1) == 0) {
    iVar2 = 0x136d40b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714b90(0x113710b68,&UNK_10f4211a6);
      ___cxa_guard_release(0x1136d40b0);
    }
  }
  if ((bRam00000001136d40b8 & 1) == 0) {
    iVar2 = 0x136d40b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710c08(0x113710ba0);
      ___cxa_guard_release(0x1136d40b8);
    }
  }
  if ((bRam00000001136d40c0 & 1) == 0) {
    iVar2 = 0x136d40c0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770dbc0(0x113710bd8);
      ___cxa_guard_release(0x1136d40c0);
    }
  }
  if ((bRam00000001136d40c8 & 1) == 0) {
    iVar2 = 0x136d40c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710bf8(0x113710c10);
      ___cxa_guard_release(0x1136d40c8);
    }
  }
  if ((bRam00000001136d40d0 & 1) == 0) {
    iVar2 = 0x136d40d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770ea4c(0x113710c48);
      ___cxa_guard_release(0x1136d40d0);
    }
  }
  if ((bRam00000001136d40d8 & 1) == 0) {
    iVar2 = 0x136d40d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770ab28(0x113710c80);
      ___cxa_guard_release(0x1136d40d8);
    }
  }
  if ((bRam00000001136d40e0 & 1) == 0) {
    iVar2 = 0x136d40e0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e5c(0x113710cb8);
      ___cxa_guard_release(0x1136d40e0);
    }
  }
  if ((bRam00000001136d40e8 & 1) == 0) {
    iVar2 = 0x136d40e8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e7c(0x113710cf0);
      ___cxa_guard_release(0x1136d40e8);
    }
  }
  if ((bRam00000001136d40f0 & 1) == 0) {
    iVar2 = 0x136d40f0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e6c(0x113710d28);
      ___cxa_guard_release(0x1136d40f0);
    }
  }
  if ((bRam00000001136d40f8 & 1) == 0) {
    iVar2 = 0x136d40f8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e4c(0x113710d60);
      ___cxa_guard_release(0x1136d40f8);
    }
  }
  if ((bRam00000001136d4100 & 1) == 0) {
    iVar2 = 0x136d4100;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770f6e8(0x113710d98);
      ___cxa_guard_release(0x1136d4100);
    }
  }
  if ((bRam00000001136d4108 & 1) == 0) {
    iVar2 = 0x136d4108;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710f20(0x113710dd0);
      ___cxa_guard_release(0x1136d4108);
    }
  }
  if ((bRam00000001136d4110 & 1) == 0) {
    iVar2 = 0x136d4110;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710be8(0x113710e08);
      ___cxa_guard_release(0x1136d4110);
    }
  }
  if ((bRam00000001136d4118 & 1) == 0) {
    iVar2 = 0x136d4118;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710bd8(0x113710e40);
      ___cxa_guard_release(0x1136d4118);
    }
  }
  if ((bRam00000001136d4120 & 1) == 0) {
    iVar2 = 0x136d4120;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710bc8(0x113710e78);
      ___cxa_guard_release(0x1136d4120);
    }
  }
  if ((bRam00000001136d4128 & 1) == 0) {
    iVar2 = 0x136d4128;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770f5f0(0x113710eb0);
      ___cxa_guard_release(0x1136d4128);
    }
  }
  func_0x000107719678();
  func_0x000107716c00();
  func_0x00010770c200();
  func_0x000107714838();
  func_0x000107716c00();
  func_0x00010770c200();
  func_0x000107714838();
  puVar3 = auStack_378;
  func_0x000107707bdc(puVar3);
  func_0x000107715450();
  if ((bool)in_ZR) {
    func_0x000107719158();
    func_0x00010770c494(puVar3);
    func_0x000107716c00();
    func_0x000107714cd4(puVar3 + 8);
    func_0x000107707bdc(auStack_468);
    in_ZR = iStack_3f0 == 1;
    if ((bool)in_ZR) {
      puVar3 = auStack_468;
      func_0x0001073405dc(puVar3);
      unaff_w26 = 0;
      func_0x00010770c43c(puVar3);
      func_0x000107716c00();
      func_0x000107714d3c(puVar3 + 8);
      func_0x000107719dd0(0x4059000000000000);
      func_0x000107716c00();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107714c2c(auStack_5c8);
      func_0x00010771d9d0();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x000107719dd0(0x3ff8000000000000);
      func_0x000107716c00();
      func_0x00010770c388();
      func_0x000107714848();
      func_0x00010771687c(auStack_5c8);
      puVar3 = auStack_c28;
      func_0x00010771b508(puVar3);
      puVar3 = puVar3 + 8;
      func_0x000107714f00(puVar3);
      func_0x00010771492c();
      uStack_5c0 = 0;
      func_0x00010771aa44();
      func_0x000107716c00();
      puVar3 = puVar3 + 8;
      func_0x000107714f00(puVar3);
      func_0x00010771492c();
      func_0x00010771c104();
      func_0x00010771e850();
      func_0x000107714aa8(puVar3 + 8);
      func_0x0001077148e8();
      uStack_4e0 = 0;
      puVar3 = auStack_5c8;
      func_0x000107707d58(puVar3);
      func_0x0001077188c4();
      if ((bool)in_ZR) {
        func_0x000107717280();
        unaff_x27 = 0;
        func_0x00010770d67c(puVar3);
        func_0x00010770f7f4();
        puVar3 = auStack_718;
        func_0x0001072ddd58(puVar3,0x113710c80);
        iVar2 = (int)puVar3;
        func_0x00010771d960();
        if (iVar2 == 0) {
          puVar4 = &uStack_810;
          func_0x000107707d58(puVar4);
          in_ZR = iStack_798 == 1;
          if ((bool)in_ZR) {
            func_0x00010771dd34();
            func_0x00010770c29c(puVar4);
            puVar4 = &uStack_790;
            func_0x000107579140();
            if (((ulong)puVar4 & 1) == 0) {
              iStack_818 = 0;
              func_0x000107718f68();
              func_0x0001077077b8();
              func_0x000107714898();
              if (!(bool)in_ZR) {
                func_0x000107715d30();
                func_0x00010770ceec();
                func_0x0001077100d4();
                func_0x000107714e4c();
                goto code_r0x0001076b9850;
              }
              func_0x000107714870();
              func_0x00010770c29c(puVar4);
              func_0x00010771c5dc();
              func_0x00010771527c();
              func_0x00010771db90();
              func_0x00010771c0e4();
              func_0x00010770c370(auStack_a48);
              func_0x000107711244(auStack_880);
              func_0x00010771492c();
              func_0x000107714830();
              func_0x000107716f84();
              iVar2 = (int)auStack_880;
              func_0x0001075b9430();
              if (iVar2 != 0) {
                if ((bStack_888 & 1) == 0) {
                  func_0x000107717774();
                }
                uStack_9e0 = 0;
                func_0x00010770cbf0(auStack_880);
                func_0x000107714830();
              }
              if (iStack_818 == 0) {
                uStack_9e0 = 0;
                func_0x000107718844(auStack_af0);
                iVar2 = (int)auStack_b28;
                func_0x000107718694();
                func_0x00010771d8d8();
                if (iVar2 == 0) {
                  func_0x0001077157d0(auStack_bd0);
                  iVar2 = (int)auStack_c08;
                  func_0x0001077157d0();
                  func_0x00010771e464();
                  if (iVar2 == 0) {
                    func_0x000107713d10();
                    func_0x00010770c370(auStack_ab8);
                  }
                  else {
                    func_0x000107713d10();
                    func_0x00010770c370(auStack_ab8);
                  }
                  func_0x00010770dc9c(auStack_a48);
                  func_0x000107714848();
                  func_0x000107714830();
                  func_0x000107717e6c();
                  func_0x0001077159fc();
                }
                else {
                  func_0x000107713d10();
                  func_0x00010770c370(auStack_ab8);
                  func_0x00010770dc9c(auStack_a48);
                  func_0x000107714848();
                  func_0x000107714830();
                }
                unaff_x20 = auStack_a48;
                func_0x000107714e2c(auStack_878);
                iVar2 = (int)auStack_880;
                func_0x0001075b9430();
                if (iVar2 != 0) {
                  if ((bStack_888 & 1) == 0) {
                    func_0x000107717774();
                  }
                  func_0x00010770cd10(&uStack_8f8);
                }
                func_0x0001077163f0();
                func_0x000107714ed0();
                func_0x000107714890();
              }
              unaff_w22 = SUB84(auStack_880,0);
              func_0x00010771a0ac();
              func_0x00010770d3e0();
              func_0x000107714858();
              func_0x00010770ccb0(auStack_548);
              func_0x000107715d30();
              puVar4 = auStack_878;
            }
            else {
              uStack_890 = 0;
              func_0x000107718844(auStack_9d8);
              iVar2 = (int)auStack_a48;
              func_0x000107718694();
              func_0x000107715c60();
              if (iVar2 == 0) {
                unaff_w22 = 0x13710cb8;
                func_0x0001077157d0(auStack_ab8);
                iVar2 = (int)auStack_b98;
                func_0x0001077157d0();
                func_0x00010771dd3c();
                if (iVar2 == 0) {
                  func_0x00010771299c();
                  func_0x00010771cb2c();
                  func_0x00010770c370();
                }
                else {
                  func_0x00010771299c();
                  func_0x00010771cb2c();
                  func_0x00010770c370();
                }
                func_0x00010770dc9c(&uStack_8f8);
                func_0x000107714848();
                func_0x000107714830();
                func_0x000107716f84();
                func_0x000107715710();
              }
              else {
                func_0x00010771299c();
                func_0x00010771cb2c();
                func_0x00010770c370();
                func_0x00010770dc9c(&uStack_8f8);
                func_0x000107714848();
                func_0x000107714830();
              }
              unaff_x20 = &uStack_8f8;
              func_0x00010770ce20(auStack_548);
              func_0x000107715738();
              func_0x000107714dc4();
              puVar4 = &uStack_8f0;
            }
            func_0x00010726af18(puVar4);
            func_0x0001077100d4();
            func_0x000107713974();
            goto code_r0x0001076b9b04;
          }
          func_0x00010770d24c();
code_r0x0001076b9850:
          func_0x00010727f7f8();
        }
        else {
          uStack_7a8 = 0;
          func_0x000107718844(auStack_880);
          iVar2 = (int)auStack_968;
          func_0x000107718694();
          func_0x00010771dcfc();
          if (iVar2 == 0) {
            unaff_w22 = 0x13710cb8;
            func_0x0001077157d0(auStack_9d8);
            iVar2 = (int)auStack_a48;
            func_0x0001077157d0();
            func_0x000107715c60();
            if (iVar2 == 0) {
              func_0x000107713d1c();
              func_0x00010770c370(&uStack_8f8);
            }
            else {
              func_0x000107713d1c();
              func_0x00010770c370(&uStack_8f8);
            }
            func_0x00010770dc9c(&uStack_810);
            func_0x000107714848();
            func_0x000107714830();
            func_0x000107715738();
            func_0x000107714dc4();
          }
          else {
            func_0x000107713d1c();
            func_0x00010770c370(&uStack_8f8);
            func_0x00010770dc9c(&uStack_810);
            func_0x000107714848();
            func_0x000107714830();
          }
          unaff_x20 = &uStack_810;
          func_0x00010770ce20(auStack_548);
          func_0x000107719100();
          func_0x0001077157a0();
          func_0x000107714890();
code_r0x0001076b9b04:
          func_0x000107716eb0();
          func_0x000107711b88(auStack_548);
          func_0x00010771d260();
          func_0x000107716eb0();
          func_0x00010770d2fc();
          func_0x000107714850();
          puStack_808 = unaff_x20;
          uStack_7a8 = unaff_w22;
          func_0x000107716eb0();
          func_0x00010770d2fc();
          func_0x000107714850();
          func_0x000107714c2c(&uStack_810);
          func_0x00010771e85c();
          func_0x00010770d2fc();
          func_0x000107714850();
          func_0x00010770f738();
          func_0x000107716eb0();
          func_0x00010770d2fc();
          func_0x000107714850();
          uStack_8f0 = 0;
          uStack_8f8 = 0;
          uStack_8e8 = 0;
          func_0x0001077160dc(&uStack_8f8);
          puStack_808 = (undefined8 *)0x0;
          uStack_7a8 = 2;
          func_0x000107717780();
          func_0x000107714850();
          func_0x00010770f738();
          func_0x000107717780();
          func_0x000107714850();
          func_0x00010771e0c8();
          func_0x00010771afb8();
          func_0x000107716eb0();
          func_0x00010770d2fc();
          func_0x000107714850();
          func_0x00010771c0f4();
          uStack_788 = 0;
          uStack_790 = 0;
          uStack_780 = 0;
          func_0x0001077171f4(&uStack_790);
          func_0x00010771dd14();
          func_0x00010771132c();
          func_0x00010771e0d4();
          func_0x000107714850();
          func_0x000107719b54();
          func_0x00010771dd20();
          func_0x000107712b70();
          uStack_7a8 = 8;
          func_0x000107716c00();
          func_0x00010770d2fc();
          func_0x000107714850();
          func_0x00010771bc40();
          func_0x00010771dd08();
          func_0x00010771132c();
          func_0x0001077148fc();
          func_0x000107714850();
          func_0x000107719b54();
          func_0x00010771c0fc();
          func_0x00010771bc38();
        }
        func_0x000107713d04();
        func_0x00010771492c();
        func_0x0001077148e8();
      }
      else {
        func_0x00010770c1d0(auStack_5c8);
      }
      func_0x00010770eec4();
      func_0x000107714828(auStack_548);
      func_0x00010771a2cc();
      func_0x000107714888();
    }
    else {
      func_0x00010770c1d0(auStack_468);
    }
    func_0x000107714868(auStack_468);
    func_0x000107714860();
  }
  else {
    func_0x00010770c1d0(auStack_378);
  }
  func_0x000107711148();
  func_0x00010771b848();
  func_0x000107708038();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d4128);
  func_0x000107714988();
  puVar6 = &DAT_1076ba42c;
  func_0x0001077184d0();
  ppuStack_c00 = &puStack_290;
  puStack_bf8 = puVar6;
  func_0x000107707444();
  if ((bRam00000001136d4130 & 1) == 0) {
    iVar2 = 0x136d4130;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770ab28(0x113710ee8);
      ___cxa_guard_release(0x1136d4130);
    }
  }
  if ((bRam00000001136d4138 & 1) == 0) {
    iVar2 = 0x136d4138;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e5c(0x113710f20);
      ___cxa_guard_release(0x1136d4138);
    }
  }
  if ((bRam00000001136d4140 & 1) == 0) {
    iVar2 = 0x136d4140;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e7c(0x113710f58);
      ___cxa_guard_release(0x1136d4140);
    }
  }
  if ((bRam00000001136d4148 & 1) == 0) {
    iVar2 = 0x136d4148;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e6c(0x113710f90);
      ___cxa_guard_release(0x1136d4148);
    }
  }
  if ((bRam00000001136d4150 & 1) == 0) {
    iVar2 = 0x136d4150;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710e4c(0x113710fc8);
      ___cxa_guard_release(0x1136d4150);
    }
  }
  if ((bRam00000001136d4158 & 1) == 0) {
    iVar2 = 0x136d4158;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770f6e8(0x113711000);
      ___cxa_guard_release(0x1136d4158);
    }
  }
  if ((bRam00000001136d4160 & 1) == 0) {
    iVar2 = 0x136d4160;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107710f20(0x113711038);
      ___cxa_guard_release(0x1136d4160);
    }
  }
  uStack_c68 = 0;
  puVar3 = auStack_d50;
  func_0x000107707bdc();
  func_0x00010771798c();
  if ((bool)in_ZR) {
    func_0x00010771e270();
    func_0x00010770c254(puVar3);
    iVar2 = (int)puVar3;
    func_0x00010770c8a4();
    func_0x000107717108();
    func_0x000107715be8();
    if (iVar2 == 0) {
      puVar3 = auStack_f90;
      func_0x000107707bdc();
      func_0x0001077170b0();
      if ((bool)in_ZR) {
        func_0x0001077191e0();
        unaff_w26 = 0;
        func_0x00010770c43c(puVar3);
        func_0x00010771e174();
        if (((ulong)puVar3 & 1) == 0) {
          iStack_f98 = 0;
          auStack_1078[0] = 0;
          bStack_1008 = 0;
          func_0x000107707718();
          func_0x000107714898();
          if (!(bool)in_ZR) {
            func_0x000107716f74();
            func_0x00010770d724();
            func_0x000107714888();
            goto code_r0x0001076ba614;
          }
          func_0x000107714870();
          func_0x00010770c29c(puVar3);
          func_0x00010771c520();
          func_0x00010771527c();
          func_0x00010771e83c();
          func_0x000107719414();
          func_0x000107277488();
          unaff_x27 = 0;
          func_0x00010770c370(auStack_11c8);
          iVar2 = (int)auStack_ff8;
          func_0x000107714aa8();
          func_0x0001077148e8();
          func_0x000107714830();
          func_0x00010771519c();
          func_0x00010771c538();
          if (iVar2 != 0) {
            if ((bStack_1008 & 1) == 0) {
              func_0x000107717514();
            }
            uStack_1160 = 0;
            func_0x00010770d79c();
            func_0x000107714830();
          }
          if (iStack_f98 == 0) {
            uStack_1160 = 0;
            func_0x000107714c0c(auStack_1270);
            iVar2 = (int)auStack_12a8;
            func_0x000107714c04();
            func_0x00010771deec();
            if (iVar2 == 0) {
              func_0x0001077157d0(auStack_1350);
              iVar2 = (int)auStack_1388;
              func_0x0001077157d0();
              func_0x0001077128fc();
              if (iVar2 == 0) {
                func_0x00010770f848();
                func_0x00010771af94();
                func_0x00010770b63c();
              }
              else {
                func_0x00010770f848();
                func_0x00010771af94();
                func_0x00010770b63c();
              }
              func_0x00010770c814(auStack_11c8);
              func_0x000107714838();
              func_0x000107714830();
              func_0x000107714ad4();
              func_0x0001077157a8();
            }
            else {
              func_0x00010770f848();
              func_0x00010771af94();
              func_0x00010770b63c();
              func_0x00010770c814(auStack_11c8);
              func_0x000107714838();
              func_0x000107714830();
            }
            iVar2 = (int)auStack_ff8;
            func_0x000107714e2c();
            func_0x00010771c538();
            if (iVar2 != 0) {
              if ((bStack_1008 & 1) == 0) {
                func_0x000107717514();
              }
              func_0x000107714bd0(auStack_1078,auStack_ff8);
            }
            func_0x000107715378();
            func_0x000107715720();
            func_0x000107714890();
          }
          func_0x00010771c530();
          func_0x000107711a84();
          func_0x000107714858();
          func_0x0001077187d4(auStack_cc8);
          func_0x000107716f74();
          puVar3 = auStack_ff8;
        }
        else {
          uStack_1010 = 0;
          func_0x000107714c0c(auStack_1158);
          iVar2 = (int)auStack_11c8;
          func_0x000107714c04();
          func_0x000107717a98();
          if (iVar2 == 0) {
            func_0x0001077157d0(auStack_1238);
            func_0x0001077157d0(auStack_1318);
            iVar2 = (int)auStack_1238;
            func_0x00010771a2e0();
            if (iVar2 == 0) {
              func_0x000107711ab4();
              func_0x00010771cfcc();
              func_0x00010770c370();
            }
            else {
              func_0x000107711ab4();
              func_0x00010771cfcc();
              func_0x00010770c370();
            }
            func_0x00010770c814(auStack_1078);
            func_0x000107714838();
            func_0x000107714830();
            func_0x00010771519c();
            func_0x000107716358();
          }
          else {
            func_0x000107711ab4();
            func_0x00010771cfcc();
            func_0x00010770c370();
            func_0x00010770c814(auStack_1078);
            func_0x000107714838();
            func_0x000107714830();
          }
          func_0x00010770ce20(auStack_cd0);
          func_0x000107715fdc();
          func_0x0001077158a0();
          puVar3 = auStack_1070;
        }
        func_0x00010726af18(puVar3);
        func_0x000107714888();
        func_0x00010770fb80();
        goto code_r0x0001076ba8b8;
      }
      func_0x000107709abc(auStack_f90);
code_r0x0001076ba614:
      func_0x000107715a6c();
    }
    else {
      uStack_f28 = 0;
      func_0x000107714c0c(auStack_1000);
      iVar2 = (int)auStack_10e8;
      func_0x000107714c04();
      func_0x00010771e3e4();
      if (iVar2 == 0) {
        func_0x0001077157d0(auStack_1158);
        iVar2 = (int)auStack_11c8;
        func_0x0001077157d0();
        func_0x000107717a98();
        if (iVar2 == 0) {
          func_0x000107713cf8();
          func_0x00010770c370(auStack_1078);
        }
        else {
          func_0x000107713cf8();
          func_0x00010770c370(auStack_1078);
        }
        func_0x00010770c814(auStack_f90);
        func_0x000107714838();
        func_0x000107714830();
        func_0x000107715fdc();
        func_0x0001077158a0();
      }
      else {
        func_0x000107713cf8();
        func_0x00010770c370(auStack_1078);
        func_0x00010770c814(auStack_f90);
        func_0x000107714838();
        func_0x000107714830();
      }
      func_0x00010770ce20(auStack_cd0);
      func_0x000107716348();
      func_0x00010771880c();
      func_0x000107714890();
code_r0x0001076ba8b8:
      func_0x00010770f3b0();
    }
    func_0x00010770df14();
    func_0x000107714860();
    func_0x000107714848();
  }
  else {
    func_0x00010770c1d0(auStack_d50);
  }
  func_0x000107713e68();
  func_0x00010770c898();
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d4160);
  func_0x000107714988();
  pbVar5 = &DAT_1076babd0;
  func_0x0001077184d0();
  pppuStack_1340 = &ppuStack_c00;
  pbStack_1338 = pbVar5;
  func_0x000107707d40();
  if ((bRam00000001136d4168 & 1) == 0) {
    pbVar5 = (byte *)0x1136d4168;
    ___cxa_guard_acquire();
    if ((int)pbVar5 != 0) {
      func_0x000107709000(0x113711070);
      pbVar5 = (byte *)0x1136d4168;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4170 & 1) == 0) {
    pbVar5 = (byte *)0x1136d4170;
    ___cxa_guard_acquire();
    if ((int)pbVar5 != 0) {
      func_0x000107709c30(0x1137110a8);
      pbVar5 = (byte *)0x1136d4170;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4178 & 1) == 0) {
    pbVar5 = (byte *)0x1136d4178;
    ___cxa_guard_acquire();
    if ((int)pbVar5 != 0) {
      func_0x00010770968c(0x1137110e0);
      pbVar5 = (byte *)0x1136d4178;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4180 & 1) == 0) {
    pbVar5 = (byte *)0x1136d4180;
    ___cxa_guard_acquire();
    if ((int)pbVar5 != 0) {
      func_0x000107714c58(0x113711118,&UNK_10f4243fd);
      pbVar5 = (byte *)0x1136d4180;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4188 & 1) == 0) {
    pbVar5 = (byte *)0x1136d4188;
    ___cxa_guard_acquire();
    if ((int)pbVar5 != 0) {
      func_0x000107714c58(0x113711150,&UNK_10f4243e9);
      pbVar5 = (byte *)0x1136d4188;
      ___cxa_guard_release();
    }
  }
  func_0x000107709e40();
  iStack_13d8 = 0;
  func_0x00010770ddc4();
  func_0x00010770c51c();
  func_0x000107714850();
  if (iStack_13d8 == 0) {
    func_0x00010770f050();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x000107716a00();
  if ((bool)in_ZR) {
    func_0x000107715e80();
    func_0x000107714974();
    if ((bool)in_ZR) {
      func_0x00010770d70c();
      func_0x00010770cc5c();
      func_0x000107714838();
      func_0x00010770e1e4();
      func_0x00010770cc5c();
      func_0x000107714838();
      func_0x00010770ee9c();
      if (iStack_1528 == 1) {
        func_0x00010771545c();
        unaff_w26 = *pbVar5;
      }
      else {
        func_0x000107708120();
        func_0x00010770d3a4();
        func_0x0001077150e4();
        unaff_w26 = 0;
      }
      func_0x000107714838();
      func_0x000107714890();
      in_ZR = 0;
      if (iStack_1528 == 1) {
code_r0x0001076bae30:
        func_0x000107714850();
        func_0x000107714830();
        in_ZR = (unaff_w26 & 1) == 0;
        uVar1 = 0x7a8;
        if ((bool)in_ZR) {
          uVar1 = 0x7e0;
        }
        func_0x00010771f760(uVar1);
code_r0x0001076bae50:
        func_0x000107719fc4();
        func_0x000107711500();
        func_0x0001077114f4();
        goto code_r0x0001076bae64;
      }
    }
    else {
      func_0x00010770d70c();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770e1e4();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x000107716400();
      if ((bool)in_ZR) {
        func_0x00010771545c();
        func_0x000107714974();
        if ((bool)in_ZR) {
          func_0x000107714838();
          func_0x000107714848();
          func_0x000107714850();
          func_0x000107714830();
          goto code_r0x0001076bae50;
        }
        func_0x00010770ba64();
        func_0x00010770efe0();
        func_0x000107714860();
        func_0x00010770cda4();
        func_0x00010770efe0();
        func_0x000107714860();
        func_0x000107712c50();
        func_0x000107716b2c();
        if ((bool)in_ZR) {
          func_0x000107715f08();
          func_0x000107715344();
          unaff_x27 = 0;
        }
        else {
          func_0x000107708898();
          func_0x00010770c460();
          func_0x000107714ad4();
          func_0x000107718948();
        }
        func_0x000107714860();
        func_0x000107714890();
        func_0x000107714838();
        func_0x000107714848();
        in_ZR = 0;
        if ((unaff_x27 & 7) == 0) goto code_r0x0001076bae30;
      }
      else {
        func_0x000107708120();
        func_0x00010770d3a4();
        func_0x0001077150e4();
        func_0x000107714838();
        func_0x000107714848();
      }
    }
  }
  else {
    func_0x0001077086bc();
    func_0x00010770e000();
    func_0x000107715564();
  }
  func_0x000107714850();
code_r0x0001076bae64:
  func_0x00010726af18(auStack_1438);
  func_0x0001077162a0();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d4188);
  do {
    func_0x0001077149ec();
  } while( true );
}



/* Entry: 1076bc124; end: 1076bc49b;  */

void FUN_1076bc124(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [112];
  undefined1 auStack_c8 [104];
  undefined4 uStack_60;
  
  func_0x000107707564();
  if ((bRam00000001136d4260 & 1) == 0) {
    iVar2 = 0x136d4260;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714f84(0x113711738,&UNK_10f421cf1);
      ___cxa_guard_release(0x1136d4260);
    }
  }
  if ((bRam00000001136d4268 & 1) == 0) {
    iVar2 = 0x136d4268;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714a38(0x113711770,"spotify");
      ___cxa_guard_release(0x1136d4268);
    }
  }
  if ((bRam00000001136d4270 & 1) == 0) {
    iVar2 = 0x136d4270;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107719820(0x1137117a8,
                          "https://cf-st.sc-cdn.net/d/1ZEZPkflid4KZJvsMgeXa?bo=Eg8yAgR9SAJQCFoDCLhjYAE%3D&uc=8"
                         );
      ___cxa_guard_release(0x1136d4270);
    }
  }
  if ((bRam00000001136d4278 & 1) == 0) {
    iVar2 = 0x136d4278;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714a08(0x1137117e0,&UNK_10f406cdb);
      ___cxa_guard_release(0x1136d4278);
    }
  }
  if ((bRam00000001136d4280 & 1) == 0) {
    iVar2 = 0x136d4280;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010771b888(0x113711818);
      ___cxa_guard_release(0x1136d4280);
    }
  }
  if ((bRam00000001136d4288 & 1) == 0) {
    iVar2 = 0x136d4288;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107719820(0x113711850,&UNK_10f4247c6);
      ___cxa_guard_release(0x1136d4288);
    }
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_170);
  puVar3 = auStack_c8;
  func_0x00010770d308();
  func_0x000107719064();
  if ((bool)in_ZR) {
    func_0x0001077183d0();
    func_0x00010770cc44(puVar3);
    func_0x00010771e8ac(auStack_1f0);
    func_0x000107714830();
  }
  else {
    func_0x000107715920(auStack_1f0);
    func_0x00010756c040();
  }
  func_0x00010770fc6c();
  func_0x0001077182e0();
  if ((bool)in_ZR) {
    func_0x000107717024();
    func_0x000107707ee8();
    func_0x000107715018();
    if ((bool)in_ZR) {
      func_0x000107714bc0();
      func_0x000104c32db4();
      iVar2 = (int)puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        func_0x000107714b98();
        in_ZR = iVar2 == 0;
        uVar1 = 0xea8;
        if ((bool)in_ZR) {
          uVar1 = 0xee0;
        }
        func_0x00010771f760(uVar1);
      }
      func_0x00010771bc58();
      goto LAB_1076bc270;
    }
  }
  else {
    uStack_60 = 0;
  }
  func_0x00010771bc58();
LAB_1076bc270:
  func_0x00010771c39c();
  func_0x00010770c370(auStack_138);
  func_0x0001077148fc();
  func_0x000107714838();
  func_0x000107714830();
  func_0x00010770c324();
  func_0x00010770ed2c();
  func_0x000107719b80();
  func_0x000107707bc4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d4288);
    do {
      func_0x0001077149ec();
      func_0x000107719b80();
    } while( true );
  }
  return;
}



/* Entry: 1076c0780; end: 1076c14df;  */

void FUN_1076c0780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_w8;
  uint unaff_w22;
  int unaff_w24;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (uint)param_1;
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x0001077185c0();
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
  uVar4 = uVar3;
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    uVar4 = uVar3;
    if (!(bool)in_ZR) goto LAB_1076c0820;
    func_0x0001077152cc();
    uVar4 = uVar3;
    func_0x00010771e128();
    unaff_w22 = uVar3;
    if ((uVar4 & 1) == 0) {
      func_0x000107714b98();
      if (uVar4 != 0) {
        func_0x0001077185c0();
        goto LAB_1076c093c;
      }
      func_0x00010771f610();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771f604();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x0001077185c0();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771f5f8();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x0001077185c0();
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
            goto LAB_1076c08f4;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076c08fc;
        }
        goto LAB_1076c091c;
      }
      func_0x000107707e58();
      goto LAB_1076c0914;
    }
LAB_1076c093c:
    func_0x000107714d34();
LAB_1076c0940:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076c0948:
    func_0x000107714830();
  }
  else {
LAB_1076c0820:
    func_0x00010771f610();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771f604();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x0001077185c0();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076c0914:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076c091c:
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076c0948;
    }
    func_0x000107715044();
    func_0x00010771f5f8();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076c091c;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x0001077185c0();
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
LAB_1076c08f4:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076c08fc:
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076c0940;
  }
  func_0x00010770c3d0();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010771cc74();
  uVar2 = extraout_w8 == 1;
  if ((bool)uVar2) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar2) goto LAB_1076c0a14;
    func_0x0001077154e4();
    func_0x000104c32db4();
    if (uVar4 == 0) {
      func_0x000107714bfc();
      uVar3 = 0x137125e0;
      unaff_w22 = 0x137125e0;
      if (uVar4 != 0) {
        func_0x000107716224();
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
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          unaff_w22 = uVar3;
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xce8;
        if ((bool)uVar2) {
          uVar1 = 0xe38;
        }
        func_0x000107717a04(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c75c();
        unaff_w22 = uVar3;
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 != 0) {
        func_0x000107716224();
        func_0x00010770ef24();
        func_0x00010770c85c();
        func_0x0001077115a8();
        func_0x000107714888();
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
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          unaff_w22 = uVar3;
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xce8;
        if ((bool)uVar2) {
          uVar1 = 0xf18;
        }
        func_0x000107717a04(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c75c();
        unaff_w22 = uVar3;
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 != 0) {
        func_0x000107716224();
        func_0x00010770ef18();
        func_0x00010770c85c();
        func_0x0001077115a8();
        func_0x000107714888();
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
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          unaff_w22 = uVar3;
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xce8;
        if ((bool)uVar2) {
          uVar1 = 0xfc0;
        }
        func_0x000107717a04(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c75c();
        unaff_w22 = uVar3;
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 != 0) {
        func_0x000107716224();
        func_0x00010770fda0();
        func_0x000107713d74();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107714c1c();
        func_0x000107713d64();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x00010770d8bc();
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
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xce8;
        if ((bool)uVar2) {
          uVar1 = 0xfc0;
        }
        func_0x000107717a04(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c75c();
        unaff_w22 = uVar3;
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 != 0) {
        func_0x000107716224();
        func_0x00010770d3c8();
        func_0x000107713d74();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713d64();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713d84();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x0001077169dc(*(undefined1 *)CONCAT44(uVar5,uVar4));
        func_0x00010771502c();
        func_0x000107708ba0();
        func_0x00010770c75c();
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 != 0) {
        func_0x000107716224();
        func_0x00010770d3c8();
        func_0x000107713d74();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713d64();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107714c1c();
        func_0x000107713d84();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x0001077169dc(*(undefined1 *)CONCAT44(uVar5,uVar4));
        func_0x00010771502c();
        func_0x000107708ba0();
        func_0x00010770c75c();
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 != 0) {
        func_0x000107708884();
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
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xce8;
        if ((bool)uVar2) {
          uVar1 = 0xf18;
        }
        func_0x000107717a04(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c75c();
        goto LAB_1076c0a94;
      }
      func_0x000107714bfc();
      if (uVar4 == 0) {
        func_0x000107716224();
        func_0x00010770d3c8();
        func_0x000107713d84();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        func_0x000107707b30();
        func_0x000107708b90();
        func_0x000107714830();
        func_0x000107707428();
        func_0x000107714850();
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076c0abc;
        }
        func_0x0001077149e4();
        func_0x0001077169dc(*(undefined1 *)CONCAT44(uVar5,uVar4));
        func_0x00010771502c();
        func_0x000107708ba0();
        func_0x00010770c75c();
        goto LAB_1076c0a94;
      }
      func_0x000107716224();
      func_0x00010770fda0();
      func_0x000107713d74();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x000107714c1c();
      func_0x000107713d64();
      func_0x00010770c200();
      func_0x000107714838();
      func_0x00010770cef8();
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
      if ((bool)uVar2) {
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0xce8;
        if ((bool)uVar2) {
          uVar1 = 0xf18;
        }
        func_0x000107717a04(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c75c();
        goto LAB_1076c0a94;
      }
      func_0x000107707ad0();
      goto LAB_1076c0abc;
    }
    func_0x000107716224();
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
    unaff_w22 = 0x137125a8;
    if (!(bool)uVar2) {
      func_0x000107707ad0();
      goto LAB_1076c0abc;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar1 = 0xce8;
    if ((bool)uVar2) {
      uVar1 = 0xc40;
    }
    func_0x000107717a04(uVar1);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c75c();
  }
  else {
LAB_1076c0a14:
    func_0x000107716224();
    func_0x00010770d3c8();
    func_0x000107713d84();
    func_0x00010770c4c4();
    func_0x000107714830();
    func_0x000107707abc();
    func_0x000107707b30();
    func_0x000107708b90();
    func_0x000107714830();
    func_0x000107707428();
    func_0x000107714850();
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar2) {
      func_0x000107707ad0();
LAB_1076c0abc:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076c0ac4;
    }
    func_0x0001077149e4();
    func_0x0001077169dc(*(undefined1 *)CONCAT44(uVar5,uVar4));
    func_0x00010771502c();
    func_0x000107708ba0();
    func_0x00010770c75c();
  }
LAB_1076c0a94:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x00010770779c();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076c0ac4:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar2 = unaff_w22 == 1;
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



/* Entry: 1076c4810; end: 1076c52b7;  */

void FUN_1076c4810(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_w8;
  int unaff_w20;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076c48ac;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x000107717974();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771f4f4();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x0001077169c4();
        goto LAB_1076c49c8;
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
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076c49a4;
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
          goto LAB_1076c497c;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076c4984;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076c499c;
    }
    func_0x00010771d224();
LAB_1076c49c8:
    func_0x000107715434();
LAB_1076c49cc:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
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
      uVar3 = uVar2;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar3 = uVar2;
        if (!(bool)in_ZR) goto LAB_1076c4a6c;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x000107717974();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771f4f4();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x0001077169c4();
            goto LAB_1076c4bc8;
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
            uVar1 = 0;
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
                goto LAB_1076c4b40;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076c4b48;
            }
            goto LAB_1076c4ba4;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076c4b9c;
        }
        func_0x00010771d224();
LAB_1076c4bc8:
        func_0x0001077154cc();
LAB_1076c4bcc:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
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
            if (!(bool)in_ZR) goto LAB_1076c4c6c;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x000107717974();
            if ((uVar2 & 1) == 0) {
              func_0x00010771f4f4();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x0001077169c4();
                goto LAB_1076c4e68;
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
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a81c();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
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
                    goto LAB_1076c4dd8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076c4de0;
                }
                goto LAB_1076c4e44;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076c4e3c;
            }
            func_0x00010771d224();
LAB_1076c4e68:
            func_0x000107715370();
LAB_1076c4e6c:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            unaff_w21 = extraout_w8;
            if ((bool)in_ZR) {
              unaff_w21 = 0;
            }
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
LAB_1076c4c6c:
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
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076c4e44;
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
LAB_1076c4dd8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076c4de0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076c4e6c;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076c4e3c:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076c4e44:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar1;
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
LAB_1076c4a6c:
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
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076c4ba4;
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
LAB_1076c4b40:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076c4b48:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076c4bcc;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076c4b9c:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076c4ba4:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar1;
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
    goto LAB_1076c4eb8;
  }
LAB_1076c48ac:
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
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076c49a4;
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
LAB_1076c497c:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076c4984:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076c49cc;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076c499c:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076c49a4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076c4eb8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 1076ca21c; end: 1076cacb7;  */

void FUN_1076ca21c(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_w8;
  int unaff_w20;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076ca2b4;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x0001077178f0();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771f344();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x0001077169a0();
        goto LAB_1076ca3d0;
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
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076ca3ac;
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
          goto LAB_1076ca384;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076ca38c;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076ca3a4;
    }
    func_0x00010771d1a0();
LAB_1076ca3d0:
    func_0x000107715434();
LAB_1076ca3d4:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
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
      uVar3 = uVar2;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar3 = uVar2;
        if (!(bool)in_ZR) goto LAB_1076ca470;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x0001077178f0();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771f344();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x0001077169a0();
            goto LAB_1076ca5cc;
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
            uVar1 = 0;
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
                goto LAB_1076ca544;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076ca54c;
            }
            goto LAB_1076ca5a8;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076ca5a0;
        }
        func_0x00010771d1a0();
LAB_1076ca5cc:
        func_0x0001077154cc();
LAB_1076ca5d0:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
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
            if (!(bool)in_ZR) goto LAB_1076ca66c;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x0001077178f0();
            if ((uVar2 & 1) == 0) {
              func_0x00010771f344();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x0001077169a0();
                goto LAB_1076ca868;
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
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a7b0();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
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
                    goto LAB_1076ca7d8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076ca7e0;
                }
                goto LAB_1076ca844;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076ca83c;
            }
            func_0x00010771d1a0();
LAB_1076ca868:
            func_0x000107715370();
LAB_1076ca86c:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            unaff_w21 = extraout_w8;
            if ((bool)in_ZR) {
              unaff_w21 = 0;
            }
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
LAB_1076ca66c:
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
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076ca844;
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
LAB_1076ca7d8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076ca7e0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076ca86c;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076ca83c:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076ca844:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar1;
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
LAB_1076ca470:
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
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076ca5a8;
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
LAB_1076ca544:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076ca54c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076ca5d0;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076ca5a0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076ca5a8:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar1;
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
    goto LAB_1076ca8b8;
  }
LAB_1076ca2b4:
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
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076ca3ac;
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
LAB_1076ca384:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076ca38c:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076ca3d4;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076ca3a4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076ca3ac:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076ca8b8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 1076cfa58; end: 1076cfe63;  */

void FUN_1076cfa58(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint extraout_w8;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076cfaf8;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771dd60();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076cfc1c:
      func_0x000107714da8();
LAB_1076cfc20:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar2 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        unaff_w21 = 0;
        if ((bool)in_ZR) {
          unaff_w21 = extraout_w8;
        }
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto LAB_1076cfc80;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x000107718560();
      goto LAB_1076cfc1c;
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
      uVar1 = 0;
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
          goto LAB_1076cfbcc;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076cfbd4;
      }
      goto LAB_1076cfbf4;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076cfbec:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076cfbf4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076cfaf8:
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
      uVar1 = in_ZR;
      goto LAB_1076cfbec;
    }
    func_0x000107714cc4();
    func_0x00010771f1c0();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076cfbf4;
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
LAB_1076cfbcc:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076cfbd4:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076cfc20;
  }
  func_0x000107715758();
LAB_1076cfc80:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 1076db964; end: 1076dbb2f;  */

void FUN_1076db964(undefined8 param_1,undefined8 param_2)

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
  undefined8 **in_stack_00000120;
  undefined *in_stack_00000128;
  int in_stack_00000148;
  undefined8 in_stack_000001c0;
  undefined1 auStack_9a0 [104];
  int iStack_938;
  undefined1 uStack_928;
  undefined1 auStack_878 [104];
  int iStack_810;
  int iStack_7a0;
  undefined8 ***pppuStack_750;
  undefined *puStack_748;
  undefined1 auStack_6e0 [8];
  undefined8 uStack_6d8;
  uint uStack_678;
  undefined1 auStack_670 [104];
  int iStack_608;
  undefined1 auStack_600 [104];
  uint uStack_598;
  undefined1 auStack_590 [8];
  undefined1 auStack_588 [176];
  byte abStack_4d8 [8];
  undefined1 auStack_4d0 [104];
  undefined1 auStack_468 [8];
  undefined8 uStack_460;
  int iStack_400;
  undefined1 auStack_3f8 [104];
  int iStack_390;
  undefined1 auStack_370 [80];
  undefined8 **ppuStack_320;
  undefined *puStack_318;
  undefined1 auStack_218 [128];
  undefined1 auStack_198 [112];
  undefined1 auStack_128 [216];
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x00010771fbd0();
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
  in_stack_00000148 = 0;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  if (in_stack_00000148 == 0) {
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
  puStack_8 = &DAT_1076dbb30;
  puStack_10 = &stack0x000001c0;
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
  in_stack_00000120 = &puStack_10;
  in_stack_00000128 = puVar7;
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
  puStack_50 = &stack0x00000120;
  puStack_48 = puVar7;
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
  puVar13 = auStack_128;
  func_0x000107707bdc(puVar13);
  func_0x00010771557c();
  if ((bool)in_ZR) {
    func_0x000107717dcc();
    unaff_w23 = (int)auStack_198;
    func_0x00010770c30c(puVar13);
    func_0x000107715e00();
    func_0x00010771159c();
    puVar13 = auStack_218;
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
      func_0x0001077172a8(auStack_370);
      func_0x00010771386c();
      func_0x000107716ae8();
      func_0x00010770d2fc();
      func_0x000107714850();
      func_0x00010771720c();
      func_0x000107716b44();
      func_0x000107713024();
      func_0x000107717bf8();
      func_0x00010770d1c8();
      func_0x000107717b98(auStack_370);
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
      func_0x00010770c1d0(auStack_218);
    }
    func_0x000107710d10();
    func_0x000107714838();
  }
  else {
    func_0x00010770c1d0(auStack_128);
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
  ppuStack_320 = &puStack_50;
  puStack_318 = puVar7;
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
  pbVar8 = abStack_4d8;
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
      auStack_588[0] = uVar12;
      func_0x0001077123b4();
      uVar12 = SUB81(auStack_588,0);
      goto code_r0x0001076dccd0;
    }
    func_0x000107712404();
    iStack_390 = 0;
    func_0x0001077148ac(auStack_468);
    func_0x00010770c2cc();
    func_0x000107714838();
    if (iStack_390 == 0) {
      func_0x00010771bab4();
      func_0x00010771b528();
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    func_0x000107719a78(auStack_600);
    unaff_w23 = (int)auStack_468;
    func_0x000107719ce8(auStack_468);
    puVar13 = auStack_590;
    func_0x0001074b0ce4(puVar13,auStack_468);
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
        iStack_400 = 0;
        func_0x00010770f44c();
        func_0x00010770c2cc();
        func_0x000107714838();
        if (iStack_400 == 0) {
          uStack_598 = 0;
          func_0x00010770d70c();
          func_0x00010770c290();
          func_0x000107714838();
          if (uStack_598 == 0) {
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
              if (iStack_400 == 0) {
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
        puVar14 = (undefined1 *)(ulong)uStack_598;
        if (uStack_598 != 3) {
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
        func_0x0001077148ac(auStack_468);
        func_0x000107718200();
        puVar9 = auStack_468;
        func_0x00010771878c();
        uVar12 = SUB81(puVar9,0);
        if (((ulong)puVar9 & 1) == 0) {
          func_0x00010770d70c();
          func_0x000107717e34();
          unaff_w23 = (int)auStack_670;
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
      iStack_390 = 0;
      puVar9 = puVar13;
code_r0x0001076dc7d0:
      iStack_400 = 0;
      func_0x00010770f44c();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_400 == 0) {
        uStack_598 = 0;
        func_0x00010770d70c();
        func_0x00010770c290();
        func_0x000107714838();
        if (uStack_598 == 0) {
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
            if (iStack_400 == 0) {
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
        puVar14 = auStack_600;
        unaff_w23 = (int)auStack_670;
        func_0x000107714838();
        func_0x000107714848();
        func_0x000107714830();
      }
      else {
code_r0x0001076dc7f8:
        func_0x00010770c4e8();
        puVar14 = (undefined1 *)(ulong)uStack_598;
        if (uStack_598 == 3) {
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
        unaff_w23 = (int)auStack_600;
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
      uVar12 = SUB81(auStack_590,0);
      func_0x00010770c394();
      func_0x000107719040();
      if ((bool)in_ZR) {
        iStack_390 = 0;
        func_0x0001077148ac(auStack_468);
        unaff_w23 = (int)auStack_3f8;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_390 == 0) {
          uStack_460 = 0;
          iStack_400 = 2;
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        cVar3 = SBORROW4(iStack_400,2);
        cVar4 = iStack_400 + -2 < 0;
        uVar5 = iStack_400 == 2;
        if ((bool)uVar5) {
          func_0x0001077172c0();
          func_0x00010771d798();
          func_0x00010771f2a0();
          func_0x00010771aed8(param_1,param_2,0xc0e5180000000000);
          if (cVar4 == cVar3) {
            uVar12 = 0;
            func_0x00010770c394();
            func_0x000107719cf0();
            if ((bool)uVar5) {
              iStack_608 = 0;
              func_0x0001077148ac(auStack_6e0);
              func_0x00010770c184();
              func_0x000107714850();
              if (iStack_608 == 0) {
                uStack_6d8 = 0;
                func_0x00010771945c();
                func_0x00010770c184();
                func_0x000107714850();
              }
              func_0x00010770c1c4();
              uVar2 = 1 < uStack_678;
              uVar5 = uStack_678 == 2;
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
          uVar12 = 0;
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
    func_0x0001077158f8(auStack_590);
    func_0x00010770edcc();
    func_0x000107716338();
    uVar12 = SUB81(auStack_4d0,0);
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
  pppuStack_750 = &ppuStack_320;
  puStack_748 = puVar7;
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
  iStack_7a0 = 0;
  func_0x00010770f7dc();
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_7a0 == 0) {
    func_0x00010771ba9c();
    func_0x000107716320();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107715120(auStack_9a0);
  func_0x000107717a28();
  func_0x000107719fa0();
  func_0x000107714830();
  func_0x000107715564();
  func_0x000107714850();
  func_0x0001077188a0();
  if (!(bool)in_ZR) {
    iStack_7a0 = 0;
    puVar10 = puVar7;
code_r0x0001076dd328:
    iStack_810 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_810 == 0) {
      iStack_938 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_9a0;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_938 == 0) {
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
          if (iStack_810 == 0) {
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
    iStack_810 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_810 == 0) {
      iStack_938 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_9a0;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_938 == 0) {
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
          if (iStack_810 == 0) {
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
    puVar13 = auStack_878;
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
    uStack_928 = uVar12;
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



/* Entry: 1076ddf98; end: 1076df193;  */

void FUN_1076ddf98(byte *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  ulong unaff_x22;
  int iVar4;
  undefined1 *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  double unaff_d8;
  undefined1 auStack_490 [104];
  int iStack_428;
  byte abStack_370 [104];
  int iStack_308;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [112];
  byte bStack_130;
  undefined1 auStack_e8 [104];
  undefined4 uStack_80;
  undefined1 *puStack_40;
  
  func_0x000107715308();
  func_0x000107707444();
  if ((bRam00000001136d55f0 & 1) == 0) {
    param_1 = (byte *)0x1136d55f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113719fb8);
      param_1 = (byte *)0x1136d55f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55f8 & 1) == 0) {
    param_1 = (byte *)0x1136d55f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113719ff0);
      param_1 = (byte *)0x1136d55f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5600 & 1) == 0) {
    param_1 = (byte *)0x1136d5600;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x11371a028);
      param_1 = (byte *)0x1136d5600;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5608 & 1) == 0) {
    param_1 = (byte *)0x1136d5608;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x11371a060);
      param_1 = (byte *)0x1136d5608;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5610 & 1) == 0) {
    param_1 = (byte *)0x1136d5610;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x11371a098);
      param_1 = (byte *)0x1136d5610;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5618 & 1) == 0) {
    param_1 = (byte *)0x1136d5618;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x11371a0d0);
      param_1 = (byte *)0x1136d5618;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5620 & 1) == 0) {
    param_1 = (byte *)0x1136d5620;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x11371a108);
      param_1 = (byte *)0x1136d5620;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5628 & 1) == 0) {
    param_1 = (byte *)0x1136d5628;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x11371a140);
      param_1 = (byte *)0x1136d5628;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5630 & 1) == 0) {
    param_1 = (byte *)0x1136d5630;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010771d464();
      func_0x00010771490c();
      func_0x0001077148e0(abStack_370);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x0001077192b8();
      func_0x000107714980(abStack_370);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107717320();
      func_0x000107714a40(abStack_370);
      func_0x00010770cfec();
      func_0x0001077115cc();
      unaff_x24 = (undefined1 *)0x113724fa0;
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107719780();
      func_0x0001077126ac();
      func_0x000107718ea8();
      param_1 = (byte *)0x1136d5630;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5638 & 1) == 0) {
    param_1 = (byte *)0x1136d5638;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077098bc(0x11371a178);
      param_1 = (byte *)0x1136d5638;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5640 & 1) == 0) {
    param_1 = (byte *)0x1136d5640;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077095a0(0x11371a1b0);
      param_1 = (byte *)0x1136d5640;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5648 & 1) == 0) {
    param_1 = (byte *)0x1136d5648;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709658(0x11371a1e8);
      param_1 = (byte *)0x1136d5648;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5650 & 1) == 0) {
    param_1 = (byte *)0x1136d5650;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a12c(0x11371a220);
      param_1 = (byte *)0x1136d5650;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5658 & 1) == 0) {
    param_1 = (byte *)0x1136d5658;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770b2e8(0x11371a258);
      param_1 = (byte *)0x1136d5658;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5660 & 1) == 0) {
    param_1 = (byte *)0x1136d5660;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770984c(0x11371a290);
      param_1 = (byte *)0x1136d5660;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5668 & 1) == 0) {
    param_1 = (byte *)0x1136d5668;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709adc(0x11371a2c8);
      param_1 = (byte *)0x1136d5668;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5670 & 1) == 0) {
    param_1 = (byte *)0x1136d5670;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770b3d4(0x11371a300);
      param_1 = (byte *)0x1136d5670;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5678 & 1) == 0) {
    param_1 = (byte *)0x1136d5678;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770b62c(0x11371a338);
      param_1 = (byte *)0x1136d5678;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5680 & 1) == 0) {
    param_1 = (byte *)0x1136d5680;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770ab28(0x11371a370);
      param_1 = (byte *)0x1136d5680;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5688 & 1) == 0) {
    param_1 = (byte *)0x1136d5688;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107710f20(0x11371a3a8);
      param_1 = (byte *)0x1136d5688;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5690 & 1) == 0) {
    param_1 = (byte *)0x1136d5690;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770f6e8(0x11371a3e0);
      param_1 = (byte *)0x1136d5690;
      ___cxa_guard_release();
    }
  }
  uStack_80 = 0;
  func_0x00010770fd64();
  iStack_308 = 0;
  func_0x00010770a4cc();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_308 == 0) {
    func_0x00010771ba40();
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
    func_0x00010770c29c(param_1);
    func_0x00010771ced0();
    pbVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076de1a8;
    func_0x000107716a68();
    pbVar2 = param_1;
    func_0x000104c32db4();
    if (((ulong)pbVar2 & 1) == 0) {
      func_0x000107714bfc();
      if ((int)pbVar2 != 0) {
        func_0x00010771ba40();
        goto LAB_1076de2e4;
      }
      iStack_308 = 0;
      func_0x00010770a4cc();
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_308 == 0) {
        iStack_428 = 0;
        func_0x00010770a58c();
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_428 == 0) {
          func_0x00010771ba40();
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
            func_0x00010770c43c(pbVar2);
            func_0x00010770d258();
            if (iStack_308 == 0) {
              func_0x00010771ba40();
              func_0x0001077135f8();
              func_0x00010770d264();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            unaff_w25 = (int)auStack_490;
            goto LAB_1076de398;
          }
          goto LAB_1076de2bc;
        }
        func_0x00010770e498();
        goto LAB_1076de2b4;
      }
LAB_1076de398:
      func_0x00010770c454();
      func_0x00010771b5b0();
      if (!(bool)in_ZR) {
        func_0x00010770e54c();
        goto LAB_1076de294;
      }
      func_0x000107718ea0();
      func_0x000107716f5c();
      goto LAB_1076de29c;
    }
LAB_1076de2e4:
    func_0x000107716f5c();
LAB_1076de2e8:
    iVar4 = (int)param_1;
    func_0x000107719750();
    func_0x000107717c64();
    func_0x0001077178c8();
    func_0x000107718668();
    if ((bool)in_ZR) {
      func_0x00010771def8();
      func_0x00010756e584();
      if ((*pbVar2 & 1) == 0) {
        iVar4 = 0x1371a178;
        func_0x0001077145e8();
        func_0x00010770bf88();
        func_0x0001077145f4();
        if (((ulong)pbVar2 & 1) == 0) {
LAB_1076de544:
          func_0x00010770c23c();
          func_0x00010770d5e8();
LAB_1076de54c:
          unaff_x24 = (undefined1 *)0x0;
        }
        else {
          func_0x000107711a6c();
          func_0x000107717f54();
          if ((bool)in_ZR) {
            func_0x000107716da4();
            func_0x000107715344();
            uVar3 = 0;
            if ((bool)in_ZR) {
              uVar3 = 0x10;
            }
            unaff_x24 = (undefined1 *)(ulong)uVar3;
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
                if ((*pbVar2 & 1) != 0) {
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
                      puStack_40 = unaff_x24;
                      func_0x000107707508();
                      func_0x000107714bc8();
                      func_0x000107714898();
                      if (!(bool)uVar1) goto LAB_1076de9b8;
                      func_0x000107714870();
                      func_0x0001077087c8();
                      func_0x0001077154dc();
                      func_0x000107717308();
                      uVar3 = 0xe;
                      if ((bool)uVar1) {
                        uVar3 = 0;
                      }
                      unaff_x24 = (undefined1 *)(ulong)uVar3;
                      func_0x000107714888();
                      func_0x000107714858();
                    }
                    else {
LAB_1076de9b8:
                      func_0x000107715508();
                    }
                    func_0x000107715e18();
                    goto LAB_1076de4f8;
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
LAB_1076de4f8:
              func_0x00010770ce38();
              goto LAB_1076de4fc;
            }
            goto LAB_1076de54c;
          }
          unaff_x22 = 1;
LAB_1076de4fc:
          uVar1 = (int)unaff_x24 == 0xe;
          if (((bool)uVar1) || ((int)unaff_x24 == 0)) {
            if ((unaff_x22 & 1) != 0) {
              func_0x0001077145e8();
              func_0x00010770bf88();
              func_0x0001077145f4();
              if (((ulong)pbVar2 & 1) == 0) goto LAB_1076de544;
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar1) {
                func_0x000107716da4();
                func_0x0001077153ec();
                uVar3 = 0;
                if ((bool)uVar1) {
                  uVar3 = 0x14;
                }
                unaff_x24 = (undefined1 *)(ulong)uVar3;
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
              if (((int)unaff_x24 != 0x14) && ((int)unaff_x24 != 0)) goto LAB_1076de92c;
              if ((unaff_x22 & 1) != 0) {
                func_0x00010770dfb0();
                func_0x000107715ff8();
                func_0x000107579140();
                func_0x00010770c8b0();
                func_0x0001077189f0();
                unaff_x24 = (undefined1 *)0x0;
                goto LAB_1076de554;
              }
            }
            goto LAB_1076de54c;
          }
LAB_1076de92c:
          if (((int)unaff_x24 == 0xc) || ((int)unaff_x24 == 0)) goto LAB_1076de318;
        }
        iVar4 = 0;
      }
      else {
LAB_1076de318:
        iVar4 = 1;
        unaff_x24 = (undefined1 *)0x0;
      }
    }
    else {
      func_0x00010770c1d0(abStack_370);
      func_0x00010771574c();
    }
LAB_1076de554:
    func_0x000107713b7c();
    func_0x000107714860();
    func_0x00010770f41c();
  }
  else {
    uStack_1a8 = 0;
    pbVar2 = param_1;
LAB_1076de1a8:
    iStack_308 = 0;
    func_0x00010770a4cc();
    func_0x00010770c2e4();
    func_0x000107714848();
    if (iStack_308 == 0) {
      iStack_428 = 0;
      func_0x00010770a58c();
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_428 == 0) {
        func_0x00010771ba40();
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
          func_0x00010770c43c(pbVar2);
          func_0x00010770d258();
          if (iStack_308 == 0) {
            func_0x00010771ba40();
            func_0x0001077135f8();
            func_0x00010770d264();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          unaff_w25 = (int)auStack_490;
          goto LAB_1076de1cc;
        }
      }
      else {
        func_0x00010770e498();
LAB_1076de2b4:
        func_0x00010771024c();
        func_0x000107715d8c();
      }
LAB_1076de2bc:
      func_0x000107714848();
      func_0x000107714860();
      func_0x000107714838();
    }
    else {
LAB_1076de1cc:
      func_0x00010770c454();
      func_0x00010771b5b0();
      if ((bool)in_ZR) {
        func_0x000107718ea0();
        func_0x000107716f5c();
      }
      else {
        func_0x00010770e54c();
LAB_1076de294:
        func_0x00010770dd34();
        func_0x000107714bc8();
      }
LAB_1076de29c:
      param_1 = abStack_370;
      func_0x000107714848();
      func_0x000107714838();
      unaff_x24 = auStack_490;
      if (unaff_w25 == 3) {
        in_ZR = 1;
        unaff_x24 = auStack_490;
        goto LAB_1076de2e8;
      }
    }
    iVar4 = (int)abStack_370;
    func_0x00010771574c();
  }
  func_0x00010770eda8();
  func_0x0001077103f4();
  func_0x0001077173b8();
  uVar1 = ((ulong)unaff_x24 & 0xfffffffd) == 0;
  if (!(bool)uVar1) goto LAB_1076de72c;
  if (iVar4 == 0) {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar1) {
      func_0x000107709d18();
      goto LAB_1076de714;
    }
    func_0x00010771509c();
    if ((*pbVar2 & 1) == 0) {
      func_0x00010770c23c();
LAB_1076de6ac:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar1) {
        func_0x000107709d18();
        goto LAB_1076de714;
      }
      func_0x00010771509c();
      if ((*pbVar2 & 1) == 0) {
        func_0x00010770c23c();
        iVar4 = (int)pbVar2;
      }
      else {
        func_0x00010771f03c();
        iVar4 = (int)pbVar2;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar1) goto LAB_1076de71c;
        func_0x000107714870();
        FUN_10757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar1 = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x00010771f03c();
          func_0x000107709aac();
          goto LAB_1076de818;
        }
      }
      func_0x00010770fa00();
    }
    else {
      func_0x00010771f048();
      func_0x00010770f8f0();
      func_0x00010770bb20();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)uVar1) goto LAB_1076de71c;
      func_0x000107714870();
      FUN_10757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar1 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto LAB_1076de6ac;
      func_0x00010771f048();
      iVar4 = (int)pbVar2;
      func_0x000107709aac();
    }
LAB_1076de818:
    func_0x00010770cbf0(auStack_490);
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
    if (iVar4 != 0) {
      if ((bStack_130 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_1a8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_308 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar4 != 0) {
        if ((bStack_130 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_1a0);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_e8);
  }
  else {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar1) {
      func_0x000107709d18();
LAB_1076de714:
      func_0x000107711410();
      func_0x000107715514();
LAB_1076de71c:
      func_0x00010770c23c();
      func_0x00010770d5e8();
      func_0x0001077186cc();
      func_0x00010770cd5c();
      goto LAB_1076de72c;
    }
    func_0x00010771509c();
    if ((*pbVar2 & 1) == 0) {
      func_0x00010770c23c();
LAB_1076de64c:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar1) {
        func_0x000107709d18();
        goto LAB_1076de714;
      }
      func_0x00010771509c();
      if ((*pbVar2 & 1) == 0) {
        func_0x00010770c23c();
        iVar4 = (int)pbVar2;
      }
      else {
        func_0x00010771f03c();
        iVar4 = (int)pbVar2;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar1) goto LAB_1076de71c;
        func_0x000107714870();
        FUN_10757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar1 = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x00010771f03c();
          func_0x000107709aac();
          goto LAB_1076de754;
        }
      }
      func_0x00010770fa00();
    }
    else {
      func_0x00010771f048();
      func_0x00010770f8f0();
      func_0x00010770bb20();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)uVar1) goto LAB_1076de71c;
      func_0x000107714870();
      FUN_10757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar1 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto LAB_1076de64c;
      func_0x00010771f048();
      iVar4 = (int)pbVar2;
      func_0x000107709aac();
    }
LAB_1076de754:
    func_0x00010770cbf0(auStack_490);
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
    if (iVar4 != 0) {
      if ((bStack_130 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_1a8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_308 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar4 != 0) {
        if ((bStack_130 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_1a0);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_e8);
  }
  func_0x0001077186cc();
  func_0x000107714830();
  func_0x00010771a364();
LAB_1076de72c:
  func_0x0001077117dc();
  func_0x000107708038();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107715720();
  func_0x000107718ea8();
  ___cxa_guard_abort(0x1136d5630);
  do {
    func_0x000107714988();
    func_0x0001077117dc();
  } while( true );
}



/* Entry: 1076ece5c; end: 1076ed267;  */

void FUN_1076ece5c(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint extraout_w8;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076ecefc;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771d8cc();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076ed020:
      func_0x000107714da8();
LAB_1076ed024:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar2 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        unaff_w21 = 0;
        if ((bool)in_ZR) {
          unaff_w21 = extraout_w8;
        }
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto LAB_1076ed084;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x00010771853c();
      goto LAB_1076ed020;
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
      uVar1 = 0;
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
          goto LAB_1076ecfd0;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076ecfd8;
      }
      goto LAB_1076ecff8;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076ecff0:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076ecff8:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076ecefc:
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
      uVar1 = in_ZR;
      goto LAB_1076ecff0;
    }
    func_0x000107714cc4();
    func_0x00010771edb8();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076ecff8;
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
LAB_1076ecfd0:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076ecfd8:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076ed024;
  }
  func_0x000107715758();
LAB_1076ed084:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 1076f1a40; end: 1076f24db;  */

void FUN_1076f1a40(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_w8;
  int unaff_w20;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076f1ad8;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x000107717508();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771ecb0();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x000107716964();
        goto LAB_1076f1bf4;
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
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076f1bd0;
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
          goto LAB_1076f1ba8;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076f1bb0;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076f1bc8;
    }
    func_0x00010771cfb4();
LAB_1076f1bf4:
    func_0x000107715434();
LAB_1076f1bf8:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
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
      uVar3 = uVar2;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar3 = uVar2;
        if (!(bool)in_ZR) goto LAB_1076f1c94;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x000107717508();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771ecb0();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x000107716964();
            goto LAB_1076f1df0;
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
            uVar1 = 0;
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
                goto LAB_1076f1d68;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076f1d70;
            }
            goto LAB_1076f1dcc;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076f1dc4;
        }
        func_0x00010771cfb4();
LAB_1076f1df0:
        func_0x0001077154cc();
LAB_1076f1df4:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
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
            if (!(bool)in_ZR) goto LAB_1076f1e90;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x000107717508();
            if ((uVar2 & 1) == 0) {
              func_0x00010771ecb0();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x000107716964();
                goto LAB_1076f208c;
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
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a5dc();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
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
                    goto LAB_1076f1ffc;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076f2004;
                }
                goto LAB_1076f2068;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076f2060;
            }
            func_0x00010771cfb4();
LAB_1076f208c:
            func_0x000107715370();
LAB_1076f2090:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            unaff_w21 = extraout_w8;
            if ((bool)in_ZR) {
              unaff_w21 = 0;
            }
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
LAB_1076f1e90:
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
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076f2068;
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
LAB_1076f1ffc:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076f2004:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076f2090;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076f2060:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076f2068:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar1;
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
LAB_1076f1c94:
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
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076f1dcc;
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
LAB_1076f1d68:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076f1d70:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076f1df4;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076f1dc4:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076f1dcc:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar1;
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
    goto LAB_1076f20dc;
  }
LAB_1076f1ad8:
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
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076f1bd0;
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
LAB_1076f1ba8:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076f1bb0:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076f1bf8;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076f1bc8:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076f1bd0:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076f20dc:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 1076f725c; end: 1076f7cf7;  */

void FUN_1076f725c(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_w8;
  int unaff_w20;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076f72f4;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x00010771745c();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771eb84();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x000107716958();
        goto LAB_1076f7410;
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
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076f73ec;
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
          goto LAB_1076f73c4;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076f73cc;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076f73e4;
    }
    func_0x00010771cf54();
LAB_1076f7410:
    func_0x000107715434();
LAB_1076f7414:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
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
      uVar3 = uVar2;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar3 = uVar2;
        if (!(bool)in_ZR) goto LAB_1076f74b0;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x00010771745c();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771eb84();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x000107716958();
            goto LAB_1076f760c;
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
            uVar1 = 0;
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
                goto LAB_1076f7584;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076f758c;
            }
            goto LAB_1076f75e8;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076f75e0;
        }
        func_0x00010771cf54();
LAB_1076f760c:
        func_0x0001077154cc();
LAB_1076f7610:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
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
            if (!(bool)in_ZR) goto LAB_1076f76ac;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x00010771745c();
            if ((uVar2 & 1) == 0) {
              func_0x00010771eb84();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x000107716958();
                goto LAB_1076f78a8;
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
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a564();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
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
                    goto LAB_1076f7818;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076f7820;
                }
                goto LAB_1076f7884;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076f787c;
            }
            func_0x00010771cf54();
LAB_1076f78a8:
            func_0x000107715370();
LAB_1076f78ac:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            unaff_w21 = extraout_w8;
            if ((bool)in_ZR) {
              unaff_w21 = 0;
            }
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
LAB_1076f76ac:
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
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076f7884;
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
LAB_1076f7818:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076f7820:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076f78ac;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076f787c:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076f7884:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar1;
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
LAB_1076f74b0:
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
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076f75e8;
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
LAB_1076f7584:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076f758c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076f7610;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076f75e0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076f75e8:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar1;
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
    goto LAB_1076f78f8;
  }
LAB_1076f72f4:
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
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076f73ec;
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
LAB_1076f73c4:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076f73cc:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076f7414;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076f73e4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076f73ec:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076f78f8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 1076fcadc; end: 1076fcee7;  */

void FUN_1076fcadc(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint extraout_w8;
  uint unaff_w21;
  int unaff_w23;
  
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
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076fcb7c;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771d710();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076fcca0:
      func_0x000107714da8();
LAB_1076fcca4:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar2 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        unaff_w21 = 0;
        if ((bool)in_ZR) {
          unaff_w21 = extraout_w8;
        }
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto LAB_1076fcd04;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x000107718040();
      goto LAB_1076fcca0;
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
      uVar1 = 0;
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
          goto LAB_1076fcc50;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076fcc58;
      }
      goto LAB_1076fcc78;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076fcc70:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076fcc78:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076fcb7c:
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
      uVar1 = in_ZR;
      goto LAB_1076fcc70;
    }
    func_0x000107714cc4();
    func_0x00010771eb24();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076fcc78;
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
LAB_1076fcc50:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076fcc58:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076fcca4;
  }
  func_0x000107715758();
LAB_1076fcd04:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_w21 & 1) == 0) {
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



/* Entry: 10771199c; end: 1077119b7;  */

void FUN_10771199c(undefined8 param_1)

{
  func_0x00010759ca1c(param_1,3);
  return;
}



/* Entry: 107721000; end: 107721027;  */

undefined1  [16] FUN_107721000(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  
  iVar1 = *param_1;
  piVar2 = *(int **)(param_1 + 2);
  if ((*(ushort *)((long)param_1 + 0x16) & 0x1000) != 0) {
    iVar1 = 0x15 - *(char *)((long)param_1 + 0x15);
    piVar2 = param_1;
  }
  auVar3._8_4_ = iVar1;
  auVar3._0_8_ = piVar2;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* Entry: 107721914; end: 107721a83;  */

bool FUN_107721914(ulong *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar8 = (int)param_2[-1];
    func_0x000107722254();
    if (iVar8 != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    func_0x0001077217d4(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    func_0x00010772186c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    func_0x0001077218ac(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    func_0x0001077222f4(param_1,param_1 + 1);
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = param_1 + 3; puVar4 != param_2; puVar4 = puVar4 + 1) {
      iVar2 = (int)*puVar4;
      func_0x00010772224c();
      if (iVar2 != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_107721a24;
          uVar3 = uVar6;
          func_0x000107721788(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (ulong *)((long)param_1 + lVar9 + 0x10);
LAB_107721a24:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == param_2;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 107721c7c; end: 107721ccb;  */

long * FUN_107721c7c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x000107722310();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x10;
        func_0x0001072f5f6c();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + unaff_x21 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 107721edc; end: 107721eef;  */

void FUN_107721edc(void)

{
  func_0x000107722120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107722054; end: 107722067;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_107722054(long *param_1)

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



/* Entry: 1077224cc; end: 10772291b;  */

void FUN_1077224cc(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined8 extraout_x8;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined1 uVar21;
  long lVar22;
  undefined1 uVar23;
  undefined1 auStack_168 [8];
  undefined4 uStack_160;
  undefined1 uStack_158;
  undefined1 auStack_150 [8];
  undefined4 uStack_148;
  undefined1 uStack_140;
  long alStack_138 [3];
  long lStack_120;
  uint uStack_118;
  ushort uStack_114;
  undefined1 auStack_110 [4];
  undefined1 uStack_10c;
  undefined4 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  byte bStack_a8;
  undefined8 uStack_70;
  
  func_0x000107723a50();
  uStack_70 = extraout_x8;
  func_0x000107579804(alStack_138,param_6);
  if ((bRam00000001137251d8 & 1) == 0) {
    iVar12 = 0x137251d8;
    ___cxa_guard_acquire();
    if (iVar12 != 0) {
      puVar14 = (undefined8 *)0x60;
      __Znwm();
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_SUB_1109d0f50;
      uStack_b0 = 6;
      lStack_100 = CONCAT26(lStack_100._6_2_,0x100);
      func_0x0001072c9f9c(puVar14 + 3,0x26,auStack_b8,&lStack_100);
      func_0x0001072c9884(auStack_b8);
      puVar14[3] = &PTR_DAT_1109d0fa0;
      puRam00000001137251f0 = puVar14 + 3;
      puRam00000001137251f8 = puVar14;
      ___cxa_guard_release(0x1137251d8);
    }
  }
  for (uVar17 = 0; uVar17 < *(ulong *)(param_2 + 0x40); uVar17 = uVar17 + 1) {
    func_0x000100060964(auStack_b8,*(undefined8 *)(*(long *)(param_2 + 0x38) + uVar17 * 8));
    plVar16 = alStack_138;
    func_0x000107722dc8(plVar16,auStack_b8);
    puVar9 = puRam00000001137251f8;
    puVar14 = puRam00000001137251f0;
    if (puRam00000001137251f8 != (undefined8 *)0x0) {
      plVar18 = puRam00000001137251f8 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = *plVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lStack_f8 = plVar16[1];
    lStack_100 = *plVar16;
    plVar16[1] = (long)puVar9;
    *plVar16 = (long)puVar14;
    func_0x0001072c9b9c(&lStack_100);
    func_0x000104c2f714(auStack_b8);
  }
  lVar22 = 0;
  lStack_100 = 0;
  uVar21 = (undefined1)*param_1;
  lVar20 = 1;
  uVar23 = (undefined1)param_1[2];
  do {
    lVar5 = *param_3;
    uVar17 = param_3[1] - lVar5 >> 4;
    uVar11 = lVar20 - 1U == uVar17;
    if (uVar17 <= lVar20 - 1U) {
      *(undefined1 *)(param_1 + 2) = uVar23;
      *(undefined1 *)param_1 = uVar21;
      puVar14 = (undefined8 *)0xc8;
      __Znwm();
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_DAT_1109d1028;
      puVar15 = auStack_b8;
      func_0x0001072c9bc0(puVar15,&lStack_100);
      if ((byte)(*(char *)(param_2 + 0x20) - 1U) < 4) {
        uStack_108 = *(undefined4 *)
                      (&UNK_10de8edf0 + (ulong)(byte)(*(char *)(param_2 + 0x20) - 1) * 4);
      }
      else {
        uStack_108 = 6;
      }
      func_0x0001072c9e90();
      uStack_114 = 0;
      if (((*(byte *)(param_2 + 0x25) | *(byte *)(param_2 + 0x23)) & 1) == 0 &&
          (*(byte *)(param_2 + 0x24) & 1) == 0) {
        uStack_114 = (ushort)((ulong)puVar15 >> 0x20) & 0xff;
      }
      uVar8 = (uint)puVar15;
      uVar1 = 0;
      if (*(byte *)(param_2 + 0x24) == 0) {
        uVar1 = uVar8 & 0xff000000;
      }
      uVar2 = 0;
      if (*(byte *)(param_2 + 0x23) == 0) {
        uVar2 = uVar8 & 0xff0000;
      }
      uVar3 = 0;
      if (*(char *)(param_2 + 0x22) == '\0') {
        uVar3 = uVar8 & 0xff00;
      }
      uVar11 = *(char *)(param_2 + 0x21) == '\0';
      uVar4 = 0;
      if ((bool)uVar11) {
        uVar4 = uVar8 & 0xff;
      }
      uStack_118 = uVar3 | uVar4 | uVar2 | uVar1;
      func_0x0001072c9f9c(puVar14 + 3,0x25,auStack_110,&uStack_118);
      func_0x0001072c9884(auStack_110);
      puVar14[3] = &PTR_DAT_1109d0ec8;
      puVar14[0xc] = param_2;
      puVar15 = auStack_b8;
      func_0x0001072c9bc0(puVar14 + 0xd,puVar15);
      puVar14[0x16] = 0;
      puVar14[0x17] = 0;
      *(undefined4 *)(puVar14 + 0x18) = 0;
      func_0x0001072c9c34(auStack_b8);
      *param_1 = (long)(puVar14 + 3);
      param_1[1] = (long)puVar14;
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_1077227b0;
    }
    if (lStack_120 == 0) {
      uStack_148 = 6;
      uStack_140 = 1;
      auStack_110[0] = 0;
      uStack_10c = 0;
      puVar15 = (undefined1 *)(lVar5 + lVar22);
      func_0x00010777067c(auStack_b8,param_4,puVar15,lVar20,param_5,auStack_150,auStack_110);
      puVar13 = auStack_150;
    }
    else {
      uStack_160 = 6;
      uStack_158 = 1;
      puVar15 = (undefined1 *)(lVar5 + lVar22);
      func_0x000107770e10(auStack_b8,param_4,puVar15,lVar20,param_5,auStack_168,alStack_138);
      puVar13 = auStack_168;
    }
    func_0x0001072c9854(puVar13);
    bVar10 = bStack_a8;
    if ((bStack_a8 & 1) == 0) {
      uVar23 = 0;
      uVar21 = 0;
    }
    else {
      puVar15 = auStack_b8;
      func_0x0001072c995c(&lStack_100,puVar15);
    }
    func_0x0001072c95d0(auStack_b8);
    lVar22 = lVar22 + 0x10;
    lVar20 = lVar20 + 1;
  } while ((bVar10 & 1) != 0);
  func_0x000107723a60();
LAB_1077227b0:
  func_0x0001072c9c34(&lStack_100);
  plVar16 = alStack_138;
  func_0x0001072c9500();
  func_0x000107723a3c(uStack_70);
  if (!(bool)uVar11) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1137251d8);
    func_0x0001072c9500(alStack_138);
    __Unwind_Resume();
    plVar18 = plVar16 + 0xb;
    if ((plVar16[10] & 1U) != 0) {
      plVar18 = (long *)*plVar18;
    }
    uVar17 = plVar16[10] & 0x1ffffffffffffffe;
    uVar19 = uVar17 << 3;
    while (uVar17 != 0) {
      func_0x00010745df58(puVar15,*plVar18);
      uVar19 = uVar19 - 0x10;
      plVar18 = plVar18 + 2;
      uVar17 = uVar19;
    }
    return;
  }
  return;
}



/* Entry: 1077230d0; end: 107723117;  */

byte FUN_1077230d0(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  func_0x000100152bb8(param_2,&UNK_10f4248aa);
  if ((int)param_2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x48) + 0x22);
  }
  return bVar1 & 1;
}



/* Entry: 107723390; end: 1077233a3;  */

void FUN_107723390(void)

{
  func_0x000107723380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077234e4; end: 107723513;  */

undefined8 * FUN_1077234e4(undefined8 *param_1)

{
  func_0x0001072c9b9c(param_1 + 0x13);
  func_0x0001072c9c34(param_1 + 10);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107723ac8; end: 107723bd3;  */

void FUN_107723ac8(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined1 auStack_1d0 [112];
  undefined1 auStack_160 [64];
  char cStack_120;
  undefined1 uStack_e9;
  int iStack_e8;
  undefined8 uStack_e0;
  char cStack_a8;
  undefined1 auStack_a0 [56];
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  
  func_0x000107741be8();
  func_0x000107742e7c();
  func_0x000107751674();
  uVar1 = cStack_a8 == '\x01';
  if ((bool)uVar1) {
    uVar1 = iStack_e8 == 2;
    if ((bool)uVar1) {
      func_0x000107743c10();
      func_0x000107743074();
    }
    else {
      uVar1 = iStack_e8 == 3;
      if ((bool)uVar1) {
        func_0x000107743c10();
        func_0x000107743074();
      }
      else {
        uVar1 = true;
        if (iStack_e8 == 4) goto LAB_107723b10;
        uVar1 = iStack_e8 == 1;
        if (!(bool)uVar1) {
          func_0x000107743794();
          param_1 = auStack_68;
          func_0x000104c33004(param_1,auStack_a0);
          param_2 = SUB84(&uStack_e9,0);
          func_0x0001077765a4();
          func_0x000107743784();
          func_0x000107743510();
          goto LAB_107723b60;
        }
        auStack_68[0] = 3;
        uStack_60 = uStack_e0;
        func_0x000107743074();
      }
    }
    func_0x000107743784();
  }
  else {
LAB_107723b10:
    *(undefined4 *)(unaff_x19 + 0x68) = 0;
  }
LAB_107723b60:
  func_0x000107743518();
  func_0x000107741a50();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107743784();
    func_0x000107743510();
    func_0x000107743518();
    func_0x000107742904();
    func_0x000107741be8();
    func_0x00010774340c(auStack_160);
    uVar1 = cStack_120 == '\x01';
    if ((bool)uVar1) {
      func_0x000107743508(auStack_1d0,auStack_160);
      param_2 = SUB84(auStack_1d0,0);
      func_0x00010731efb8(param_1);
      func_0x000107742bf8();
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    func_0x000107267ed0();
    func_0x000107741a50();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      puVar3 = auStack_160;
      func_0x000107267ed0();
      func_0x000107742904();
      switch(param_2) {
      case 0:
        if ((bRam0000000113725220 & 1) == 0) {
          iVar2 = 0x13725220;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000100060964(0x113725ac8,"Unknown");
            ___cxa_guard_release(0x113725220);
          }
        }
        uVar4 = 0x113725ac8;
        break;
      case 1:
        if ((bRam0000000113725208 & 1) == 0) {
          iVar2 = 0x13725208;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000100060964(0x113725a20,&DAT_10f30064f);
            ___cxa_guard_release(0x113725208);
          }
        }
        uVar4 = 0x113725a20;
        break;
      case 2:
        if ((bRam0000000113725210 & 1) == 0) {
          iVar2 = 0x13725210;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000100060964(0x113725a58,&DAT_10f4248c0);
            ___cxa_guard_release(0x113725210);
          }
        }
        uVar4 = 0x113725a58;
        break;
      case 3:
        if ((bRam0000000113725218 & 1) == 0) {
          iVar2 = 0x13725218;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000100060964(0x113725a90,&DAT_10f3506e9);
            ___cxa_guard_release(0x113725218);
          }
        }
        uVar4 = 0x113725a90;
        break;
      default:
        *puVar3 = 0;
        puVar3[0x38] = 0;
        return;
      }
      func_0x000104c2fe00(puVar3,uVar4);
      puVar3[0x38] = 1;
      return;
    }
  }
  return;
}



/* Entry: 107726d24; end: 107726e07;  */

undefined8 FUN_107726d24(void)

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
  undefined1 auStack_1360 [64];
  long lStack_1320;
  undefined1 auStack_1290 [24];
  undefined4 uStack_1278;
  long lStack_1240;
  undefined1 auStack_11a0 [64];
  long lStack_1160;
  undefined1 auStack_600 [64];
  undefined1 auStack_530 [64];
  
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
        *unaff_x19 = &PTR_FUN_1109d2c28;
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
            func_0x000107741cd0(FUN_10773530c);
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
                  func_0x0001077753dc(auStack_530);
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
                  func_0x0001077753dc(auStack_600);
                  func_0x000107741d3c();
                  unaff_x20 = 0x1137255a8;
                  func_0x000107741810();
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d2da8;
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
                  func_0x000107741cd0(FUN_107735f84);
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
                    func_0x000107741cd0(FUN_107736fa4);
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
                lStack_1160 = unaff_x22;
                func_0x000107741ca8();
                if ((bRam0000000113725690 & 1) == 0) {
                  iVar2 = 0x13725690;
                  ___cxa_guard_acquire();
                  if (iVar2 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107742b9c();
                    func_0x000107742da0();
                    func_0x000107775500(auStack_11a0);
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
                    *unaff_x19 = &PTR_FUN_1109d3138;
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
                lStack_1240 = unaff_x22;
                func_0x000107741ca8();
                lVar5 = 0;
                if ((bRam00000001137256a0 & 1) == 0) {
                  puVar4 = (undefined8 *)0x1137256a0;
                  ___cxa_guard_acquire();
                  if ((int)puVar4 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107775500(auStack_1290);
                    uStack_1278 = 3;
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
                lStack_1320 = lVar5;
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
                    func_0x000107775500(auStack_1360);
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
                    func_0x000107741cd0(FUN_107738154);
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
              return 0x113725628;
            }
            uVar3 = 0x113725588;
          }
          return uVar3;
        }
        uVar3 = 0x113725568;
      }
    }
  }
  return uVar3;
}



/* Entry: 107727434; end: 10772751b;  */

undefined8 FUN_107727434(void)

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
  undefined1 auStack_d00 [64];
  long lStack_cc0;
  undefined1 auStack_c30 [24];
  undefined4 uStack_c18;
  long lStack_be0;
  undefined1 auStack_b40 [64];
  long lStack_b00;
  
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
        func_0x000107741cd0(FUN_107735f84);
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
          *unaff_x19 = &PTR_DAT_1109d2e68;
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
            func_0x000107741cd0(&UNK_10773645c);
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
                      func_0x000107741cd0(FUN_107736fa4);
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
                    lStack_b00 = unaff_x22;
                    func_0x000107741ca8();
                    if ((bRam0000000113725690 & 1) == 0) {
                      iVar2 = 0x13725690;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107742b9c();
                        func_0x000107742da0();
                        func_0x000107775500(auStack_b40);
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
                        *unaff_x19 = &PTR_FUN_1109d3138;
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
                    lStack_be0 = unaff_x22;
                    func_0x000107741ca8();
                    lVar5 = 0;
                    if ((bRam00000001137256a0 & 1) == 0) {
                      puVar4 = (undefined8 *)0x1137256a0;
                      ___cxa_guard_acquire();
                      if ((int)puVar4 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107775500(auStack_c30);
                        uStack_c18 = 3;
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
                    lStack_cc0 = lVar5;
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
                        func_0x000107775500(auStack_d00);
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
                        func_0x000107741cd0(FUN_107738154);
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
  return uVar3;
}



/* Entry: 107727b98; end: 107727c7b;  */

undefined8 FUN_107727b98(void)

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
  undefined1 auStack_660 [64];
  long lStack_620;
  undefined1 auStack_590 [24];
  undefined4 uStack_578;
  long lStack_540;
  undefined1 auStack_4a0 [64];
  long lStack_460;
  
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
          func_0x000107741cd0(FUN_107736fa4);
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
          uVar3 = 0x113725668;
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
            uVar3 = 0x113725678;
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
            ___cxa_guard_abort(0x113725680);
            func_0x00010774297c();
            lStack_460 = unaff_x22;
            func_0x000107741ca8();
            if ((bRam0000000113725690 & 1) == 0) {
              iVar2 = 0x13725690;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742b9c();
                func_0x000107742da0();
                func_0x000107775500(auStack_4a0);
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
                *unaff_x19 = &PTR_FUN_1109d3138;
                func_0x000107741cd0(&UNK_107737910);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              uVar3 = 0x113725688;
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
              lStack_540 = unaff_x22;
              func_0x000107741ca8();
              lVar5 = 0;
              if ((bRam00000001137256a0 & 1) == 0) {
                puVar4 = (undefined8 *)0x1137256a0;
                ___cxa_guard_acquire();
                if ((int)puVar4 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107775500(auStack_590);
                  uStack_578 = 3;
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
                uVar3 = 0x113725698;
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
                lStack_620 = lVar5;
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
                    func_0x000107775500(auStack_660);
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
                  uVar3 = 0x1137256a8;
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
                      func_0x000107741cd0(FUN_107738154);
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
                  uVar3 = 0x1137256c8;
                }
              }
            }
          }
        }
        return uVar3;
      }
      uVar3 = 0x113725658;
    }
  }
  return uVar3;
}



/* Entry: 1077283c0; end: 10772848b;  */

undefined8 FUN_1077283c0(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000107741ca8();
  if ((bRam00000001137256c0 & 1) == 0) {
    puVar2 = (undefined8 *)0x1137256c0;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      unaff_x20 = 0x1137256b8;
      func_0x000107741c30(6);
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar2 = &PTR_DAT_1109d31f8;
      func_0x000107741cd0(FUN_107738154);
      func_0x000107742924();
      unaff_x19 = puVar2;
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
  if ((bRam00000001137256d0 & 1) == 0) {
    iVar1 = 0x137256d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
      unaff_x22 = 0x10;
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
  } while (unaff_x22 != 0);
  func_0x00010774291c();
  func_0x00010774298c();
  func_0x000107742914();
  do {
    ___cxa_guard_abort(0x1137256d0);
    func_0x00010774297c();
  } while( true );
}



/* Entry: 107729a60; end: 107729b47;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_107729a60(undefined8 param_1,code *param_2)

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
  char **ppcStack_1930;
  char **ppcStack_1928;
  ulong *puStack_1920;
  undefined8 ***pppuStack_1918;
  undefined8 ***pppuStack_1910;
  undefined *puStack_1908;
  undefined8 **ppuStack_1900;
  undefined1 auStack_18f8 [24];
  undefined8 **ppuStack_18e0;
  undefined8 **ppuStack_18d8;
  undefined8 uStack_18d0;
  undefined8 **ppuStack_18c8;
  undefined8 **ppuStack_18c0;
  undefined8 uStack_18b8;
  undefined1 auStack_18b0 [24];
  undefined8 **ppuStack_1898;
  undefined8 uStack_1890;
  undefined8 uStack_1888;
  undefined8 ***pppuStack_1880;
  ulong uStack_1878;
  undefined8 uStack_1870;
  char *pcStack_1868;
  char *pcStack_1860;
  undefined8 uStack_1830;
  undefined8 ***pppuStack_17d0;
  undefined *puStack_17c8;
  undefined1 auStack_17a8 [120];
  undefined8 uStack_1730;
  undefined8 ***pppuStack_1710;
  undefined *puStack_1708;
  undefined8 uStack_1660;
  undefined8 ***pppuStack_1640;
  undefined *puStack_1638;
  undefined8 uStack_1590;
  undefined8 ***pppuStack_1570;
  undefined *puStack_1568;
  undefined8 uStack_14d0;
  undefined8 ***pppuStack_14b0;
  undefined *puStack_14a8;
  undefined8 uStack_1410;
  undefined8 ***pppuStack_13f0;
  code *pcStack_13e8;
  undefined8 uStack_1350;
  undefined8 ***pppuStack_1330;
  undefined *puStack_1328;
  undefined4 uStack_1300;
  undefined8 uStack_1290;
  undefined8 ***pppuStack_1270;
  undefined *puStack_1268;
  undefined8 uStack_11d0;
  undefined8 ***pppuStack_11b0;
  undefined *puStack_11a8;
  undefined8 uStack_1100;
  undefined8 ***pppuStack_10e0;
  undefined *puStack_10d8;
  undefined8 uStack_1030;
  undefined8 ***pppuStack_1010;
  undefined *puStack_1008;
  undefined8 uStack_f60;
  undefined8 ***pppuStack_f40;
  undefined *puStack_f38;
  undefined8 uStack_e80;
  undefined8 ***pppuStack_e60;
  undefined *puStack_e58;
  undefined8 uStack_da0;
  undefined8 ***pppuStack_d80;
  code *pcStack_d78;
  undefined8 uStack_cd0;
  undefined8 ***pppuStack_cb0;
  undefined *puStack_ca8;
  undefined8 uStack_c00;
  undefined8 ***pppuStack_be0;
  undefined *puStack_bd8;
  undefined8 uStack_b20;
  undefined8 ***pppuStack_b00;
  undefined *puStack_af8;
  undefined8 uStack_a40;
  undefined8 ***pppuStack_a20;
  undefined *puStack_a18;
  undefined8 uStack_970;
  undefined8 ***pppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_8a0;
  undefined8 ***pppuStack_880;
  undefined *puStack_878;
  undefined8 uStack_7c0;
  undefined8 ***pppuStack_7a0;
  undefined *puStack_798;
  undefined8 uStack_6e0;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_610;
  undefined8 ***pppuStack_5f0;
  undefined *puStack_5e8;
  undefined8 uStack_540;
  undefined8 ***pppuStack_520;
  undefined *puStack_518;
  undefined8 uStack_460;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_380;
  undefined8 ***pppuStack_360;
  undefined *puStack_358;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_138;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
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
    puStack_d8 = &DAT_107729b48;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam0000000113725850 & 1) == 0) {
      iVar4 = 0x13725850;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742240();
        uStack_138 = 6;
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
    puStack_1b8 = &DAT_107729c54;
    uStack_1e0 = unaff_x22;
    ppuStack_1c0 = &puStack_e0;
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
      puStack_288 = &DAT_107729d3c;
      uStack_2b0 = unaff_x22;
      pppuStack_290 = &ppuStack_1c0;
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
          *unaff_x19 = &PTR_FUN_1109d3948;
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
        puStack_358 = &DAT_107729e20;
        uStack_380 = unaff_x22;
        pppuStack_360 = &pppuStack_290;
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
          puStack_438 = &DAT_107729f24;
          uStack_460 = unaff_x22;
          pppuStack_440 = &pppuStack_360;
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
              func_0x000107741cd0(FUN_10773db38);
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
            puStack_518 = &DAT_10772a028;
            uStack_540 = unaff_x22;
            pppuStack_520 = &pppuStack_440;
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
                *unaff_x19 = &PTR_FUN_1109d3a08;
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
            puStack_5e8 = &DAT_10772a110;
            uStack_610 = unaff_x22;
            pppuStack_5f0 = &pppuStack_520;
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
            pcStack_6b8 = FUN_10772a1f4;
            uStack_6e0 = unaff_x22;
            pppuStack_6c0 = &pppuStack_5f0;
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
            puStack_798 = &DAT_10772a2f8;
            uStack_7c0 = unaff_x22;
            pppuStack_7a0 = &pppuStack_6c0;
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
                param_2 = FUN_10773e400;
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
            puStack_878 = &DAT_10772a3fc;
            uStack_8a0 = unaff_x22;
            pppuStack_880 = &pppuStack_7a0;
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
            puStack_948 = &DAT_10772a4e4;
            uStack_970 = unaff_x22;
            pppuStack_950 = &pppuStack_880;
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
            puStack_a18 = &DAT_10772a5c8;
            uStack_a40 = unaff_x22;
            pppuStack_a20 = &pppuStack_950;
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
                param_2 = FUN_10773ea18;
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
            puStack_af8 = &DAT_10772a6cc;
            uStack_b20 = unaff_x22;
            pppuStack_b00 = &pppuStack_a20;
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
            puStack_bd8 = &DAT_10772a7d0;
            uStack_c00 = unaff_x22;
            pppuStack_be0 = &pppuStack_b00;
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
            puStack_ca8 = &DAT_10772a8b8;
            uStack_cd0 = unaff_x22;
            pppuStack_cb0 = &pppuStack_be0;
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
            pcStack_d78 = FUN_10772a99c;
            uStack_da0 = unaff_x22;
            pppuStack_d80 = &pppuStack_cb0;
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
            puStack_e58 = &DAT_10772aaa0;
            uStack_e80 = unaff_x22;
            pppuStack_e60 = &pppuStack_d80;
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
            puStack_f38 = &DAT_10772aba4;
            uStack_f60 = unaff_x22;
            pppuStack_f40 = &pppuStack_e60;
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
                func_0x000107741cd0(FUN_10773f704);
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
            puStack_1008 = &DAT_10772ac8c;
            uStack_1030 = unaff_x22;
            pppuStack_1010 = &pppuStack_f40;
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
                *unaff_x19 = &PTR_FUN_1109d3d48;
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
            puStack_10d8 = &DAT_10772ad70;
            uStack_1100 = unaff_x22;
            pppuStack_10e0 = &pppuStack_1010;
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
            puStack_11a8 = &DAT_10772ae54;
            uStack_11d0 = unaff_x22;
            pppuStack_11b0 = &pppuStack_10e0;
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
              puStack_1268 = &DAT_10772af1c;
              uStack_1290 = unaff_x22;
              pppuStack_1270 = &pppuStack_11b0;
              func_0x000107741ca8();
              if ((bRam00000001137259a0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259a0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  uStack_1300 = 2;
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
                puStack_1328 = &DAT_10772aff0;
                uStack_1350 = unaff_x22;
                pppuStack_1330 = &pppuStack_1270;
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
                  pcStack_13e8 = FUN_10772b0c0;
                  uStack_1410 = unaff_x22;
                  pppuStack_13f0 = &pppuStack_1330;
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
                      func_0x000107741cd0(FUN_1077408b4);
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
                    puStack_14a8 = &DAT_10772b190;
                    uStack_14d0 = unaff_x22;
                    pppuStack_14b0 = &pppuStack_13f0;
                    func_0x000107741ca8();
                    if ((bRam00000001137259d0 & 1) == 0) {
                      puVar6 = (undefined8 *)0x1137259d0;
                      ___cxa_guard_acquire();
                      if ((int)puVar6 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107741c30(6);
                        param_2 = FUN_107740c6c;
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
                      puStack_1568 = &DAT_10772b25c;
                      uStack_1590 = unaff_x22;
                      pppuStack_1570 = &pppuStack_14b0;
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
                      puStack_1638 = &DAT_10772b344;
                      uStack_1660 = unaff_x22;
                      pppuStack_1640 = &pppuStack_1570;
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
                      puStack_1708 = &DAT_10772b42c;
                      uStack_1730 = unaff_x22;
                      pppuStack_1710 = &pppuStack_1640;
                      func_0x000107741ca8();
                      if ((bRam0000000113725a00 & 1) == 0) {
                        puVar8 = (ulong *)0x113725a00;
                        ___cxa_guard_acquire();
                        puVar7 = puVar8;
                        if ((int)puVar8 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          puVar7 = puVar8;
                          func_0x0001077753dc(auStack_17a8);
                          func_0x000107741c80(1);
                          param_2 = (code *)&UNK_1077413dc;
                          func_0x000107741a04();
                          func_0x000107742984();
                          func_0x000107742cb4();
                          func_0x00010774291c();
                          *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                          func_0x000107741cd0(FUN_1077412c0);
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
                      puStack_17c8 = &SUB_10772b510;
                      pppuStack_17d0 = &pppuStack_1710;
                      func_0x0001077429f8();
                      ppuStack_1900 = pppuVar9;
                      func_0x00010774205c();
                      ppuStack_18c8 = (undefined8 ***)0x0;
                      ppuStack_18c0 = (undefined8 ***)0x0;
                      uStack_18b8 = 0;
                      ppuStack_18e0 = (undefined8 ***)0x0;
                      ppuStack_18d8 = (undefined8 ***)0x0;
                      uStack_18d0 = 0;
                      lVar14 = *(long *)param_2;
                      uStack_1830 = extraout_x8;
                      do {
                        if (lVar14 == *(long *)(unaff_x21 + 8)) {
                          pppuVar1 = (undefined8 ***)ppuStack_18c0;
                          pppuVar9 = (undefined8 ***)ppuStack_18c8;
                          if (ppuStack_18e0 != ppuStack_18d8) {
                            pppuVar1 = (undefined8 ***)ppuStack_18d8;
                            pppuVar9 = (undefined8 ***)ppuStack_18e0;
                          }
                          uStack_1878 = 0;
                          uStack_1870 = 0;
                          pppuStack_1880 = (undefined8 ****)0x0;
                          if (pppuVar9 != pppuVar1) {
                            func_0x000100602d9c(&pppuStack_1880,&pppuStack_1880,pppuVar9);
                            pppuVar9 = pppuVar9 + 3;
                          }
                          for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                            ppppuVar5 = (undefined8 ****)pppuStack_1880;
                            if (-1 < (long)uStack_1870._7_1_) {
                              ppppuVar5 = &pppuStack_1880;
                            }
                            uVar2 = uStack_1878;
                            if (-1 < (long)uStack_1870) {
                              uVar2 = (long)uStack_1870._7_1_;
                            }
                            pcStack_1868 = " | ";
                            pcStack_1860 = "";
                            func_0x000106887580(&pppuStack_1880,(long)ppppuVar5 + uVar2,
                                                &pcStack_1868);
                            uVar2 = uStack_1878;
                            ppppuVar5 = (undefined8 ****)pppuStack_1880;
                            if (-1 < (long)uStack_1870) {
                              uVar2 = uStack_1870 >> 0x38;
                              ppppuVar5 = &pppuStack_1880;
                            }
                            func_0x000100602d9c(&pppuStack_1880,(long)ppppuVar5 + uVar2,pppuVar9);
                          }
                          ppuStack_1898 = (undefined8 ***)0x0;
                          uStack_1890 = 0;
                          uStack_1888 = 0;
                          uVar3 = (*puVar7 & 1) == 0;
                          puVar8 = puVar7 + 1;
                          if (!(bool)uVar3) {
                            puVar8 = (ulong *)puVar7[1];
                          }
                          puVar13 = (ulong *)&DAT_10f68f19e;
                          if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                      (auStack_18f8,&UNK_10f424ce9,&pppuStack_1880);
                            func_0x00010048a6c8(auStack_18b0,auStack_18f8,&UNK_10f424d05);
                            func_0x000100610910(&pcStack_1868,auStack_18b0,&ppuStack_1898);
                            ppcVar11 = (char **)&UNK_10f417e7a;
                            func_0x00010048a6c8(ppuStack_1900,&pcStack_1868);
                            func_0x0001077435f4();
                            func_0x0001077433f8();
                            func_0x000107742c9c();
                            func_0x000107743354();
                            func_0x0001077435e4();
                            func_0x0001000e30f4(&ppuStack_18e0);
                            ppppuVar5 = (undefined8 ****)&ppuStack_18c8;
                            func_0x0001000e30f4();
                            func_0x000107741c94(uStack_1830);
                            if ((bool)uVar3) {
                              return ppppuVar5;
                            }
                            ___stack_chk_fail();
                            func_0x0001077435e4();
                            func_0x0001000e30f4(&ppuStack_18e0);
                            ppppuVar10 = (undefined8 ****)&ppuStack_18c8;
                            func_0x0001000e30f4(ppppuVar10);
                            puVar15 = &UNK_10772b8e8;
                            func_0x000107742904();
                          }
                          else {
                            uStack_1888 = 0;
                            uStack_1890 = 0;
                            ppuStack_1898 = (undefined8 ***)0x0;
                            ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                            func_0x00010756a788(&pcStack_1868,*puVar8 + 0x10);
                            ppppuVar10 = (undefined8 ****)&ppuStack_1898;
                            ppcVar11 = &pcStack_1868;
                            puVar15 = &UNK_10772b78c;
                            puVar13 = (ulong *)&DAT_10f68f19e;
                          }
code_r0x00010772b8e8:
                          ppcVar12 = ppcVar11;
                          puStack_1920 = puVar13;
                          pppuStack_1918 = ppppuVar5;
                          pppuStack_1910 = &pppuStack_17d0;
                          puStack_1908 = puVar15;
                          func_0x000107264c5c();
                          ppcStack_1930 = ppcVar11;
                          ppcStack_1928 = ppcVar12;
                          func_0x0001073727e0(ppppuVar10,&ppcStack_1930);
                          return ppppuVar10;
                        }
                        (**(code **)(lVar14 + 8))();
                        ppppuVar5 = (undefined8 ****)*pppuVar9;
                        if (*(int *)(ppppuVar5 + 8) == 0) {
                          func_0x00010002b838(&pppuStack_1880,&DAT_10f68e8ec);
                          if (ppppuVar5[5] != ppppuVar5[6]) {
                            func_0x00010756a788(&pcStack_1868,ppppuVar5[5]);
                            ppppuVar10 = &pppuStack_1880;
                            ppcVar11 = &pcStack_1868;
                            puVar15 = &UNK_10772b628;
                            puVar13 = puVar7;
                            goto code_r0x00010772b8e8;
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                    (&pppuStack_1880,&DAT_10f684600);
                          pppuVar9 = &ppuStack_18e0;
                          if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                            pppuVar9 = &ppuStack_18c8;
                          }
                          func_0x000100206870(pppuVar9,&pppuStack_1880);
                        }
                        else {
                          func_0x00010756a788(&pcStack_1868,ppppuVar5 + 5);
                          func_0x00010724ef84(auStack_18b0,&pcStack_1868);
                          func_0x0001004c3cd0(&ppuStack_1898,&DAT_10f68e8ec,auStack_18b0);
                          func_0x00010048a6c8(&pppuStack_1880,&ppuStack_1898,&DAT_10f684600);
                          func_0x000107743354();
                          func_0x0001077433f8();
                          func_0x00010774335c();
                          pppuVar9 = &ppuStack_18e0;
                          func_0x000100206870(pppuVar9,&pppuStack_1880);
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
  return ppppuVar5;
}



/* Entry: 10772a1f4; end: 10772a2f7;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772a1f4(undefined8 param_1,code *param_2)

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
  char **ppcStack_1280;
  char **ppcStack_1278;
  ulong *puStack_1270;
  undefined8 ***pppuStack_1268;
  undefined8 ***pppuStack_1260;
  undefined *puStack_1258;
  undefined8 **ppuStack_1250;
  undefined1 auStack_1248 [24];
  undefined8 **ppuStack_1230;
  undefined8 **ppuStack_1228;
  undefined8 uStack_1220;
  undefined8 **ppuStack_1218;
  undefined8 **ppuStack_1210;
  undefined8 uStack_1208;
  undefined1 auStack_1200 [24];
  undefined8 **ppuStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 ***pppuStack_11d0;
  ulong uStack_11c8;
  undefined8 uStack_11c0;
  char *pcStack_11b8;
  char *pcStack_11b0;
  undefined8 uStack_1180;
  undefined8 ***pppuStack_1120;
  undefined *puStack_1118;
  undefined1 auStack_10f8 [120];
  undefined8 uStack_1080;
  undefined8 ***pppuStack_1060;
  undefined *puStack_1058;
  undefined8 uStack_fb0;
  undefined8 ***pppuStack_f90;
  undefined *puStack_f88;
  undefined8 uStack_ee0;
  undefined8 ***pppuStack_ec0;
  undefined *puStack_eb8;
  undefined8 uStack_e20;
  undefined8 ***pppuStack_e00;
  undefined *puStack_df8;
  undefined8 uStack_d60;
  undefined8 ***pppuStack_d40;
  code *pcStack_d38;
  undefined8 uStack_ca0;
  undefined8 ***pppuStack_c80;
  undefined *puStack_c78;
  undefined4 uStack_c50;
  undefined8 uStack_be0;
  undefined8 ***pppuStack_bc0;
  undefined *puStack_bb8;
  undefined8 uStack_b20;
  undefined8 ***pppuStack_b00;
  undefined *puStack_af8;
  undefined8 uStack_a50;
  undefined8 ***pppuStack_a30;
  undefined *puStack_a28;
  undefined8 uStack_980;
  undefined8 ***pppuStack_960;
  undefined *puStack_958;
  undefined8 uStack_8b0;
  undefined8 ***pppuStack_890;
  undefined *puStack_888;
  undefined8 uStack_7d0;
  undefined8 ***pppuStack_7b0;
  undefined *puStack_7a8;
  undefined8 uStack_6f0;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_620;
  undefined8 ***pppuStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_550;
  undefined8 ***pppuStack_530;
  undefined *puStack_528;
  undefined8 uStack_470;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2c0;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_1f0;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_110;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  
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
    ppppuVar6 = (undefined8 ****)0x1137258b8;
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
    puStack_e8 = &DAT_10772a2f8;
    uStack_110 = unaff_x22;
    puStack_f0 = &stack0xfffffffffffffff0;
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
        param_2 = FUN_10773e400;
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
      puStack_1c8 = &DAT_10772a3fc;
      uStack_1f0 = unaff_x22;
      ppuStack_1d0 = &puStack_f0;
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
        ppppuVar6 = (undefined8 ****)0x1137258d8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137258e0);
        func_0x00010774297c();
        puStack_298 = &DAT_10772a4e4;
        uStack_2c0 = unaff_x22;
        pppuStack_2a0 = &ppuStack_1d0;
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
          puStack_368 = &DAT_10772a5c8;
          uStack_390 = unaff_x22;
          pppuStack_370 = &pppuStack_2a0;
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
              param_2 = FUN_10773ea18;
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
          puStack_448 = &DAT_10772a6cc;
          uStack_470 = unaff_x22;
          pppuStack_450 = &pppuStack_370;
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
          puStack_528 = &DAT_10772a7d0;
          uStack_550 = unaff_x22;
          pppuStack_530 = &pppuStack_450;
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
          puStack_5f8 = &DAT_10772a8b8;
          uStack_620 = unaff_x22;
          pppuStack_600 = &pppuStack_530;
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
          pcStack_6c8 = FUN_10772a99c;
          uStack_6f0 = unaff_x22;
          pppuStack_6d0 = &pppuStack_600;
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
          puStack_7a8 = &DAT_10772aaa0;
          uStack_7d0 = unaff_x22;
          pppuStack_7b0 = &pppuStack_6d0;
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
          puStack_888 = &DAT_10772aba4;
          uStack_8b0 = unaff_x22;
          pppuStack_890 = &pppuStack_7b0;
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
              func_0x000107741cd0(FUN_10773f704);
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
          puStack_958 = &DAT_10772ac8c;
          uStack_980 = unaff_x22;
          pppuStack_960 = &pppuStack_890;
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
              *unaff_x19 = &PTR_FUN_1109d3d48;
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
          puStack_a28 = &DAT_10772ad70;
          uStack_a50 = unaff_x22;
          pppuStack_a30 = &pppuStack_960;
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
          puStack_af8 = &DAT_10772ae54;
          uStack_b20 = unaff_x22;
          pppuStack_b00 = &pppuStack_a30;
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
            ppppuVar6 = (undefined8 ****)0x113725988;
          }
          else {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x113725990);
            func_0x000107742904();
            puStack_bb8 = &DAT_10772af1c;
            uStack_be0 = unaff_x22;
            pppuStack_bc0 = &pppuStack_b00;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar5 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar5 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_c50 = 2;
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
              ppppuVar6 = (undefined8 ****)0x113725998;
            }
            else {
              ___stack_chk_fail();
              func_0x00010774219c();
              ___cxa_guard_abort(0x1137259a0);
              func_0x000107742904();
              puStack_c78 = &DAT_10772aff0;
              uStack_ca0 = unaff_x22;
              pppuStack_c80 = &pppuStack_bc0;
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
                pcStack_d38 = FUN_10772b0c0;
                uStack_d60 = unaff_x22;
                pppuStack_d40 = &pppuStack_c80;
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
                    func_0x000107741cd0(FUN_1077408b4);
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
                  puStack_df8 = &DAT_10772b190;
                  uStack_e20 = unaff_x22;
                  pppuStack_e00 = &pppuStack_d40;
                  func_0x000107741ca8();
                  if ((bRam00000001137259d0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259d0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741c30(6);
                      param_2 = FUN_107740c6c;
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
                    puStack_eb8 = &DAT_10772b25c;
                    uStack_ee0 = unaff_x22;
                    pppuStack_ec0 = &pppuStack_e00;
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
                    puStack_f88 = &DAT_10772b344;
                    uStack_fb0 = unaff_x22;
                    pppuStack_f90 = &pppuStack_ec0;
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
                    puStack_1058 = &DAT_10772b42c;
                    uStack_1080 = unaff_x22;
                    pppuStack_1060 = &pppuStack_f90;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar8 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar7 = puVar8;
                      if ((int)puVar8 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar7 = puVar8;
                        func_0x0001077753dc(auStack_10f8);
                        func_0x000107741c80(1);
                        param_2 = (code *)&UNK_1077413dc;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                        func_0x000107741cd0(FUN_1077412c0);
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
                    puStack_1118 = &SUB_10772b510;
                    pppuStack_1120 = &pppuStack_1060;
                    func_0x0001077429f8();
                    ppuStack_1250 = pppuVar9;
                    func_0x00010774205c();
                    ppuStack_1218 = (undefined8 ***)0x0;
                    ppuStack_1210 = (undefined8 ***)0x0;
                    uStack_1208 = 0;
                    ppuStack_1230 = (undefined8 ***)0x0;
                    ppuStack_1228 = (undefined8 ***)0x0;
                    uStack_1220 = 0;
                    lVar14 = *(long *)param_2;
                    uStack_1180 = extraout_x8;
                    do {
                      if (lVar14 == *(long *)(unaff_x21 + 8)) {
                        pppuVar1 = (undefined8 ***)ppuStack_1210;
                        pppuVar9 = (undefined8 ***)ppuStack_1218;
                        if (ppuStack_1230 != ppuStack_1228) {
                          pppuVar1 = (undefined8 ***)ppuStack_1228;
                          pppuVar9 = (undefined8 ***)ppuStack_1230;
                        }
                        uStack_11c8 = 0;
                        uStack_11c0 = 0;
                        pppuStack_11d0 = (undefined8 ****)0x0;
                        if (pppuVar9 != pppuVar1) {
                          func_0x000100602d9c(&pppuStack_11d0,&pppuStack_11d0,pppuVar9);
                          pppuVar9 = pppuVar9 + 3;
                        }
                        for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                          ppppuVar6 = (undefined8 ****)pppuStack_11d0;
                          if (-1 < (long)uStack_11c0._7_1_) {
                            ppppuVar6 = &pppuStack_11d0;
                          }
                          uVar2 = uStack_11c8;
                          if (-1 < (long)uStack_11c0) {
                            uVar2 = (long)uStack_11c0._7_1_;
                          }
                          pcStack_11b8 = " | ";
                          pcStack_11b0 = "";
                          func_0x000106887580(&pppuStack_11d0,(long)ppppuVar6 + uVar2,&pcStack_11b8)
                          ;
                          uVar2 = uStack_11c8;
                          ppppuVar6 = (undefined8 ****)pppuStack_11d0;
                          if (-1 < (long)uStack_11c0) {
                            uVar2 = uStack_11c0 >> 0x38;
                            ppppuVar6 = &pppuStack_11d0;
                          }
                          func_0x000100602d9c(&pppuStack_11d0,(long)ppppuVar6 + uVar2,pppuVar9);
                        }
                        ppuStack_11e8 = (undefined8 ***)0x0;
                        uStack_11e0 = 0;
                        uStack_11d8 = 0;
                        uVar3 = (*puVar7 & 1) == 0;
                        puVar8 = puVar7 + 1;
                        if (!(bool)uVar3) {
                          puVar8 = (ulong *)puVar7[1];
                        }
                        puVar13 = (ulong *)&DAT_10f68f19e;
                        if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (auStack_1248,&UNK_10f424ce9,&pppuStack_11d0);
                          func_0x00010048a6c8(auStack_1200,auStack_1248,&UNK_10f424d05);
                          func_0x000100610910(&pcStack_11b8,auStack_1200,&ppuStack_11e8);
                          ppcVar11 = (char **)&UNK_10f417e7a;
                          func_0x00010048a6c8(ppuStack_1250,&pcStack_11b8);
                          func_0x0001077435f4();
                          func_0x0001077433f8();
                          func_0x000107742c9c();
                          func_0x000107743354();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_1230);
                          ppppuVar6 = (undefined8 ****)&ppuStack_1218;
                          func_0x0001000e30f4();
                          func_0x000107741c94(uStack_1180);
                          if ((bool)uVar3) {
                            return ppppuVar6;
                          }
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_1230);
                          ppppuVar10 = (undefined8 ****)&ppuStack_1218;
                          func_0x0001000e30f4(ppppuVar10);
                          puVar15 = &UNK_10772b8e8;
                          func_0x000107742904();
                        }
                        else {
                          uStack_11d8 = 0;
                          uStack_11e0 = 0;
                          ppuStack_11e8 = (undefined8 ***)0x0;
                          ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                          func_0x00010756a788(&pcStack_11b8,*puVar8 + 0x10);
                          ppppuVar10 = (undefined8 ****)&ppuStack_11e8;
                          ppcVar11 = &pcStack_11b8;
                          puVar15 = &UNK_10772b78c;
                          puVar13 = (ulong *)&DAT_10f68f19e;
                        }
code_r0x00010772b8e8:
                        ppcVar12 = ppcVar11;
                        puStack_1270 = puVar13;
                        pppuStack_1268 = ppppuVar6;
                        pppuStack_1260 = &pppuStack_1120;
                        puStack_1258 = puVar15;
                        func_0x000107264c5c();
                        ppcStack_1280 = ppcVar11;
                        ppcStack_1278 = ppcVar12;
                        func_0x0001073727e0(ppppuVar10,&ppcStack_1280);
                        return ppppuVar10;
                      }
                      (**(code **)(lVar14 + 8))();
                      ppppuVar6 = (undefined8 ****)*pppuVar9;
                      if (*(int *)(ppppuVar6 + 8) == 0) {
                        func_0x00010002b838(&pppuStack_11d0,&DAT_10f68e8ec);
                        if (ppppuVar6[5] != ppppuVar6[6]) {
                          func_0x00010756a788(&pcStack_11b8,ppppuVar6[5]);
                          ppppuVar10 = &pppuStack_11d0;
                          ppcVar11 = &pcStack_11b8;
                          puVar15 = &UNK_10772b628;
                          puVar13 = puVar7;
                          goto code_r0x00010772b8e8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_11d0,&DAT_10f684600);
                        pppuVar9 = &ppuStack_1230;
                        if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                          pppuVar9 = &ppuStack_1218;
                        }
                        func_0x000100206870(pppuVar9,&pppuStack_11d0);
                      }
                      else {
                        func_0x00010756a788(&pcStack_11b8,ppppuVar6 + 5);
                        func_0x00010724ef84(auStack_1200,&pcStack_11b8);
                        func_0x0001004c3cd0(&ppuStack_11e8,&DAT_10f68e8ec,auStack_1200);
                        func_0x00010048a6c8(&pppuStack_11d0,&ppuStack_11e8,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        pppuVar9 = &ppuStack_1230;
                        func_0x000100206870(pppuVar9,&pppuStack_11d0);
                      }
                      func_0x0001077435e4();
                      lVar14 = lVar14 + 0x18;
                    } while( true );
                  }
                  ppppuVar6 = (undefined8 ****)0x1137259c8;
                }
              }
            }
          }
          return ppppuVar6;
        }
        ppppuVar6 = (undefined8 ****)0x1137258e8;
      }
      return ppppuVar6;
    }
    ppppuVar6 = (undefined8 ****)0x1137258c8;
  }
  return ppppuVar6;
}



/* Entry: 10772a99c; end: 10772aa9f;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772a99c(undefined8 param_1,code *param_2)

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
  char **ppcStack_bc0;
  char **ppcStack_bb8;
  ulong *puStack_bb0;
  undefined8 ***pppuStack_ba8;
  undefined8 ***pppuStack_ba0;
  undefined *puStack_b98;
  undefined8 **ppuStack_b90;
  undefined1 auStack_b88 [24];
  undefined8 **ppuStack_b70;
  undefined8 **ppuStack_b68;
  undefined8 uStack_b60;
  undefined8 **ppuStack_b58;
  undefined8 **ppuStack_b50;
  undefined8 uStack_b48;
  undefined1 auStack_b40 [24];
  undefined8 **ppuStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 ***pppuStack_b10;
  ulong uStack_b08;
  undefined8 uStack_b00;
  char *pcStack_af8;
  char *pcStack_af0;
  undefined8 uStack_ac0;
  undefined8 ***pppuStack_a60;
  undefined *puStack_a58;
  undefined1 auStack_a38 [120];
  undefined8 uStack_9c0;
  undefined8 ***pppuStack_9a0;
  undefined *puStack_998;
  undefined8 uStack_8f0;
  undefined8 ***pppuStack_8d0;
  undefined *puStack_8c8;
  undefined8 uStack_820;
  undefined8 ***pppuStack_800;
  undefined *puStack_7f8;
  undefined8 uStack_760;
  undefined8 ***pppuStack_740;
  undefined *puStack_738;
  undefined8 uStack_6a0;
  undefined8 ***pppuStack_680;
  code *pcStack_678;
  undefined8 uStack_5e0;
  undefined8 ***pppuStack_5c0;
  undefined *puStack_5b8;
  undefined4 uStack_590;
  undefined8 uStack_520;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_460;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2c0;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_1f0;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_110;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  
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
    puStack_e8 = &DAT_10772aaa0;
    uStack_110 = unaff_x22;
    puStack_f0 = &stack0xfffffffffffffff0;
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
      puStack_1c8 = &DAT_10772aba4;
      uStack_1f0 = unaff_x22;
      ppuStack_1d0 = &puStack_f0;
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
          func_0x000107741cd0(FUN_10773f704);
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
        puStack_298 = &DAT_10772ac8c;
        uStack_2c0 = unaff_x22;
        pppuStack_2a0 = &ppuStack_1d0;
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
            *unaff_x19 = &PTR_FUN_1109d3d48;
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
          puStack_368 = &DAT_10772ad70;
          uStack_390 = unaff_x22;
          pppuStack_370 = &pppuStack_2a0;
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
            puStack_438 = &DAT_10772ae54;
            uStack_460 = unaff_x22;
            pppuStack_440 = &pppuStack_370;
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
              puStack_4f8 = &DAT_10772af1c;
              uStack_520 = unaff_x22;
              pppuStack_500 = &pppuStack_440;
              func_0x000107741ca8();
              if ((bRam00000001137259a0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259a0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  uStack_590 = 2;
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
                puStack_5b8 = &DAT_10772aff0;
                uStack_5e0 = unaff_x22;
                pppuStack_5c0 = &pppuStack_500;
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
                  pcStack_678 = FUN_10772b0c0;
                  uStack_6a0 = unaff_x22;
                  pppuStack_680 = &pppuStack_5c0;
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
                      func_0x000107741cd0(FUN_1077408b4);
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
                    puStack_738 = &DAT_10772b190;
                    uStack_760 = unaff_x22;
                    pppuStack_740 = &pppuStack_680;
                    func_0x000107741ca8();
                    if ((bRam00000001137259d0 & 1) == 0) {
                      puVar6 = (undefined8 *)0x1137259d0;
                      ___cxa_guard_acquire();
                      if ((int)puVar6 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107741c30(6);
                        param_2 = FUN_107740c6c;
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
                      puStack_7f8 = &DAT_10772b25c;
                      uStack_820 = unaff_x22;
                      pppuStack_800 = &pppuStack_740;
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
                      puStack_8c8 = &DAT_10772b344;
                      uStack_8f0 = unaff_x22;
                      pppuStack_8d0 = &pppuStack_800;
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
                      puStack_998 = &DAT_10772b42c;
                      uStack_9c0 = unaff_x22;
                      pppuStack_9a0 = &pppuStack_8d0;
                      func_0x000107741ca8();
                      if ((bRam0000000113725a00 & 1) == 0) {
                        puVar8 = (ulong *)0x113725a00;
                        ___cxa_guard_acquire();
                        puVar7 = puVar8;
                        if ((int)puVar8 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          puVar7 = puVar8;
                          func_0x0001077753dc(auStack_a38);
                          func_0x000107741c80(1);
                          param_2 = (code *)&UNK_1077413dc;
                          func_0x000107741a04();
                          func_0x000107742984();
                          func_0x000107742cb4();
                          func_0x00010774291c();
                          *puVar8 = (ulong)&PTR_DAT_1109d3f88;
                          func_0x000107741cd0(FUN_1077412c0);
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
                      puStack_a58 = &SUB_10772b510;
                      pppuStack_a60 = &pppuStack_9a0;
                      func_0x0001077429f8();
                      ppuStack_b90 = pppuVar9;
                      func_0x00010774205c();
                      ppuStack_b58 = (undefined8 ***)0x0;
                      ppuStack_b50 = (undefined8 ***)0x0;
                      uStack_b48 = 0;
                      ppuStack_b70 = (undefined8 ***)0x0;
                      ppuStack_b68 = (undefined8 ***)0x0;
                      uStack_b60 = 0;
                      lVar14 = *(long *)param_2;
                      uStack_ac0 = extraout_x8;
                      do {
                        if (lVar14 == *(long *)(unaff_x21 + 8)) {
                          pppuVar1 = (undefined8 ***)ppuStack_b50;
                          pppuVar9 = (undefined8 ***)ppuStack_b58;
                          if (ppuStack_b70 != ppuStack_b68) {
                            pppuVar1 = (undefined8 ***)ppuStack_b68;
                            pppuVar9 = (undefined8 ***)ppuStack_b70;
                          }
                          uStack_b08 = 0;
                          uStack_b00 = 0;
                          pppuStack_b10 = (undefined8 ****)0x0;
                          if (pppuVar9 != pppuVar1) {
                            func_0x000100602d9c(&pppuStack_b10,&pppuStack_b10,pppuVar9);
                            pppuVar9 = pppuVar9 + 3;
                          }
                          for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                            ppppuVar5 = (undefined8 ****)pppuStack_b10;
                            if (-1 < (long)uStack_b00._7_1_) {
                              ppppuVar5 = &pppuStack_b10;
                            }
                            uVar2 = uStack_b08;
                            if (-1 < (long)uStack_b00) {
                              uVar2 = (long)uStack_b00._7_1_;
                            }
                            pcStack_af8 = " | ";
                            pcStack_af0 = "";
                            func_0x000106887580(&pppuStack_b10,(long)ppppuVar5 + uVar2,&pcStack_af8)
                            ;
                            uVar2 = uStack_b08;
                            ppppuVar5 = (undefined8 ****)pppuStack_b10;
                            if (-1 < (long)uStack_b00) {
                              uVar2 = uStack_b00 >> 0x38;
                              ppppuVar5 = &pppuStack_b10;
                            }
                            func_0x000100602d9c(&pppuStack_b10,(long)ppppuVar5 + uVar2,pppuVar9);
                          }
                          ppuStack_b28 = (undefined8 ***)0x0;
                          uStack_b20 = 0;
                          uStack_b18 = 0;
                          uVar3 = (*puVar7 & 1) == 0;
                          puVar8 = puVar7 + 1;
                          if (!(bool)uVar3) {
                            puVar8 = (ulong *)puVar7[1];
                          }
                          puVar13 = (ulong *)&DAT_10f68f19e;
                          if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                      (auStack_b88,&UNK_10f424ce9,&pppuStack_b10);
                            func_0x00010048a6c8(auStack_b40,auStack_b88,&UNK_10f424d05);
                            func_0x000100610910(&pcStack_af8,auStack_b40,&ppuStack_b28);
                            ppcVar11 = (char **)&UNK_10f417e7a;
                            func_0x00010048a6c8(ppuStack_b90,&pcStack_af8);
                            func_0x0001077435f4();
                            func_0x0001077433f8();
                            func_0x000107742c9c();
                            func_0x000107743354();
                            func_0x0001077435e4();
                            func_0x0001000e30f4(&ppuStack_b70);
                            ppppuVar5 = (undefined8 ****)&ppuStack_b58;
                            func_0x0001000e30f4();
                            func_0x000107741c94(uStack_ac0);
                            if ((bool)uVar3) {
                              return ppppuVar5;
                            }
                            ___stack_chk_fail();
                            func_0x0001077435e4();
                            func_0x0001000e30f4(&ppuStack_b70);
                            ppppuVar10 = (undefined8 ****)&ppuStack_b58;
                            func_0x0001000e30f4(ppppuVar10);
                            puVar15 = &UNK_10772b8e8;
                            func_0x000107742904();
                          }
                          else {
                            uStack_b18 = 0;
                            uStack_b20 = 0;
                            ppuStack_b28 = (undefined8 ***)0x0;
                            ppppuVar5 = (undefined8 ****)(puVar8 + 2);
                            func_0x00010756a788(&pcStack_af8,*puVar8 + 0x10);
                            ppppuVar10 = (undefined8 ****)&ppuStack_b28;
                            ppcVar11 = &pcStack_af8;
                            puVar15 = &UNK_10772b78c;
                            puVar13 = (ulong *)&DAT_10f68f19e;
                          }
code_r0x00010772b8e8:
                          ppcVar12 = ppcVar11;
                          puStack_bb0 = puVar13;
                          pppuStack_ba8 = ppppuVar5;
                          pppuStack_ba0 = &pppuStack_a60;
                          puStack_b98 = puVar15;
                          func_0x000107264c5c();
                          ppcStack_bc0 = ppcVar11;
                          ppcStack_bb8 = ppcVar12;
                          func_0x0001073727e0(ppppuVar10,&ppcStack_bc0);
                          return ppppuVar10;
                        }
                        (**(code **)(lVar14 + 8))();
                        ppppuVar5 = (undefined8 ****)*pppuVar9;
                        if (*(int *)(ppppuVar5 + 8) == 0) {
                          func_0x00010002b838(&pppuStack_b10,&DAT_10f68e8ec);
                          if (ppppuVar5[5] != ppppuVar5[6]) {
                            func_0x00010756a788(&pcStack_af8,ppppuVar5[5]);
                            ppppuVar10 = &pppuStack_b10;
                            ppcVar11 = &pcStack_af8;
                            puVar15 = &UNK_10772b628;
                            puVar13 = puVar7;
                            goto code_r0x00010772b8e8;
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                    (&pppuStack_b10,&DAT_10f684600);
                          pppuVar9 = &ppuStack_b70;
                          if ((long)ppppuVar5[6] - (long)ppppuVar5[5] >> 4 != *puVar7 >> 1) {
                            pppuVar9 = &ppuStack_b58;
                          }
                          func_0x000100206870(pppuVar9,&pppuStack_b10);
                        }
                        else {
                          func_0x00010756a788(&pcStack_af8,ppppuVar5 + 5);
                          func_0x00010724ef84(auStack_b40,&pcStack_af8);
                          func_0x0001004c3cd0(&ppuStack_b28,&DAT_10f68e8ec,auStack_b40);
                          func_0x00010048a6c8(&pppuStack_b10,&ppuStack_b28,&DAT_10f684600);
                          func_0x000107743354();
                          func_0x0001077433f8();
                          func_0x00010774335c();
                          pppuVar9 = &ppuStack_b70;
                          func_0x000100206870(pppuVar9,&pppuStack_b10);
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



/* Entry: 10772b0c0; end: 10772b18f;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772b0c0(undefined8 param_1,code *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  char **ppcVar10;
  char **ppcVar11;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 ****ppppuVar12;
  ulong *puVar13;
  long unaff_x21;
  long lVar14;
  undefined *puVar15;
  char **ppcStack_550;
  char **ppcStack_548;
  ulong *puStack_540;
  undefined8 ***pppuStack_538;
  undefined8 ***pppuStack_530;
  undefined *puStack_528;
  undefined8 **ppuStack_520;
  undefined1 auStack_518 [24];
  undefined8 **ppuStack_500;
  undefined8 **ppuStack_4f8;
  undefined8 uStack_4f0;
  undefined8 **ppuStack_4e8;
  undefined8 **ppuStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [24];
  undefined8 **ppuStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 ***pppuStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  char *pcStack_488;
  char *pcStack_480;
  undefined8 uStack_450;
  undefined8 ***pppuStack_3f0;
  undefined *puStack_3e8;
  undefined1 auStack_3c8 [120];
  undefined8 ***pppuStack_330;
  undefined *puStack_328;
  undefined1 ***pppuStack_260;
  undefined *puStack_258;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  
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
      func_0x000107741cd0(FUN_1077408b4);
      func_0x000107742924();
      unaff_x19 = puVar5;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    ppppuVar12 = (undefined8 ****)0x1137259b8;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774219c();
    ___cxa_guard_abort(0x1137259c0);
    func_0x000107742904();
    puStack_c8 = &DAT_10772b190;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam00000001137259d0 & 1) == 0) {
      puVar5 = (undefined8 *)0x1137259d0;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107741c30(6);
        param_2 = FUN_107740c6c;
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
      puStack_188 = &DAT_10772b25c;
      ppuStack_190 = &puStack_d0;
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
        ppppuVar12 = (undefined8 ****)0x1137259d8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137259e0);
        func_0x00010774297c();
        puStack_258 = &DAT_10772b344;
        pppuStack_260 = &ppuStack_190;
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
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          puVar6 = (ulong *)0x1137259f0;
          ___cxa_guard_abort();
          func_0x00010774297c();
          puStack_328 = &DAT_10772b42c;
          pppuStack_330 = &pppuStack_260;
          func_0x000107741ca8();
          if ((bRam0000000113725a00 & 1) == 0) {
            puVar7 = (ulong *)0x113725a00;
            ___cxa_guard_acquire();
            puVar6 = puVar7;
            if ((int)puVar7 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              puVar6 = puVar7;
              func_0x0001077753dc(auStack_3c8);
              func_0x000107741c80(1);
              param_2 = (code *)&UNK_1077413dc;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742cb4();
              func_0x00010774291c();
              *puVar7 = (ulong)&PTR_DAT_1109d3f88;
              func_0x000107741cd0(FUN_1077412c0);
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
          pppuVar8 = (undefined8 ***)0x113725a00;
          ___cxa_guard_abort();
          func_0x00010774297c();
          puStack_3e8 = &SUB_10772b510;
          pppuStack_3f0 = &pppuStack_330;
          func_0x0001077429f8();
          ppuStack_520 = pppuVar8;
          func_0x00010774205c();
          ppuStack_4e8 = (undefined8 ***)0x0;
          ppuStack_4e0 = (undefined8 ***)0x0;
          uStack_4d8 = 0;
          ppuStack_500 = (undefined8 ***)0x0;
          ppuStack_4f8 = (undefined8 ***)0x0;
          uStack_4f0 = 0;
          lVar14 = *(long *)param_2;
          uStack_450 = extraout_x8;
          do {
            if (lVar14 == *(long *)(unaff_x21 + 8)) {
              pppuVar1 = (undefined8 ***)ppuStack_4e0;
              pppuVar8 = (undefined8 ***)ppuStack_4e8;
              if (ppuStack_500 != ppuStack_4f8) {
                pppuVar1 = (undefined8 ***)ppuStack_4f8;
                pppuVar8 = (undefined8 ***)ppuStack_500;
              }
              uStack_498 = 0;
              uStack_490 = 0;
              pppuStack_4a0 = (undefined8 ****)0x0;
              if (pppuVar8 != pppuVar1) {
                func_0x000100602d9c(&pppuStack_4a0,&pppuStack_4a0,pppuVar8);
                pppuVar8 = pppuVar8 + 3;
              }
              for (; pppuVar8 != pppuVar1; pppuVar8 = pppuVar8 + 3) {
                ppppuVar12 = (undefined8 ****)pppuStack_4a0;
                if (-1 < (long)uStack_490._7_1_) {
                  ppppuVar12 = &pppuStack_4a0;
                }
                uVar2 = uStack_498;
                if (-1 < (long)uStack_490) {
                  uVar2 = (long)uStack_490._7_1_;
                }
                pcStack_488 = " | ";
                pcStack_480 = "";
                func_0x000106887580(&pppuStack_4a0,(long)ppppuVar12 + uVar2,&pcStack_488);
                uVar2 = uStack_498;
                ppppuVar12 = (undefined8 ****)pppuStack_4a0;
                if (-1 < (long)uStack_490) {
                  uVar2 = uStack_490 >> 0x38;
                  ppppuVar12 = &pppuStack_4a0;
                }
                func_0x000100602d9c(&pppuStack_4a0,(long)ppppuVar12 + uVar2,pppuVar8);
              }
              ppuStack_4b8 = (undefined8 ***)0x0;
              uStack_4b0 = 0;
              uStack_4a8 = 0;
              uVar3 = (*puVar6 & 1) == 0;
              puVar7 = puVar6 + 1;
              if (!(bool)uVar3) {
                puVar7 = (ulong *)puVar6[1];
              }
              puVar13 = (ulong *)&DAT_10f68f19e;
              if ((*puVar6 & 0x1ffffffffffffffe) == 0) {
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (auStack_518,&UNK_10f424ce9,&pppuStack_4a0);
                func_0x00010048a6c8(auStack_4d0,auStack_518,&UNK_10f424d05);
                func_0x000100610910(&pcStack_488,auStack_4d0,&ppuStack_4b8);
                ppcVar10 = (char **)&UNK_10f417e7a;
                func_0x00010048a6c8(ppuStack_520,&pcStack_488);
                func_0x0001077435f4();
                func_0x0001077433f8();
                func_0x000107742c9c();
                func_0x000107743354();
                func_0x0001077435e4();
                func_0x0001000e30f4(&ppuStack_500);
                ppppuVar12 = (undefined8 ****)&ppuStack_4e8;
                func_0x0001000e30f4();
                func_0x000107741c94(uStack_450);
                if ((bool)uVar3) {
                  return ppppuVar12;
                }
                ___stack_chk_fail();
                func_0x0001077435e4();
                func_0x0001000e30f4(&ppuStack_500);
                ppppuVar9 = (undefined8 ****)&ppuStack_4e8;
                func_0x0001000e30f4(ppppuVar9);
                puVar15 = &UNK_10772b8e8;
                func_0x000107742904();
              }
              else {
                uStack_4a8 = 0;
                uStack_4b0 = 0;
                ppuStack_4b8 = (undefined8 ***)0x0;
                ppppuVar12 = (undefined8 ****)(puVar7 + 2);
                func_0x00010756a788(&pcStack_488,*puVar7 + 0x10);
                ppppuVar9 = (undefined8 ****)&ppuStack_4b8;
                ppcVar10 = &pcStack_488;
                puVar15 = &UNK_10772b78c;
                puVar13 = (ulong *)&DAT_10f68f19e;
              }
code_r0x00010772b8e8:
              ppcVar11 = ppcVar10;
              puStack_540 = puVar13;
              pppuStack_538 = ppppuVar12;
              pppuStack_530 = &pppuStack_3f0;
              puStack_528 = puVar15;
              func_0x000107264c5c();
              ppcStack_550 = ppcVar10;
              ppcStack_548 = ppcVar11;
              func_0x0001073727e0(ppppuVar9,&ppcStack_550);
              return ppppuVar9;
            }
            (**(code **)(lVar14 + 8))();
            ppppuVar12 = (undefined8 ****)*pppuVar8;
            if (*(int *)(ppppuVar12 + 8) == 0) {
              func_0x00010002b838(&pppuStack_4a0,&DAT_10f68e8ec);
              if (ppppuVar12[5] != ppppuVar12[6]) {
                func_0x00010756a788(&pcStack_488,ppppuVar12[5]);
                ppppuVar9 = &pppuStack_4a0;
                ppcVar10 = &pcStack_488;
                puVar15 = &UNK_10772b628;
                puVar13 = puVar6;
                goto code_r0x00010772b8e8;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                        (&pppuStack_4a0,&DAT_10f684600);
              pppuVar8 = &ppuStack_500;
              if ((long)ppppuVar12[6] - (long)ppppuVar12[5] >> 4 != *puVar6 >> 1) {
                pppuVar8 = &ppuStack_4e8;
              }
              func_0x000100206870(pppuVar8,&pppuStack_4a0);
            }
            else {
              func_0x00010756a788(&pcStack_488,ppppuVar12 + 5);
              func_0x00010724ef84(auStack_4d0,&pcStack_488);
              func_0x0001004c3cd0(&ppuStack_4b8,&DAT_10f68e8ec,auStack_4d0);
              func_0x00010048a6c8(&pppuStack_4a0,&ppuStack_4b8,&DAT_10f684600);
              func_0x000107743354();
              func_0x0001077433f8();
              func_0x00010774335c();
              pppuVar8 = &ppuStack_500;
              func_0x000100206870(pppuVar8,&pppuStack_4a0);
            }
            func_0x0001077435e4();
            lVar14 = lVar14 + 0x18;
          } while( true );
        }
        ppppuVar12 = (undefined8 ****)0x1137259e8;
      }
      return ppppuVar12;
    }
    ppppuVar12 = (undefined8 ****)0x1137259c8;
  }
  return ppppuVar12;
}



/* Entry: 10772c018; end: 10772cc03;  */

void FUN_10772c018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong *puVar2;
  long ***ppplVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined *puVar15;
  uint uVar16;
  long *extraout_x8;
  ulong uVar17;
  uint uVar18;
  ulong *puVar19;
  uint uVar20;
  uint uVar21;
  long ***ppplVar22;
  undefined1 uVar23;
  long lVar24;
  undefined8 *puVar25;
  long unaff_x20;
  long *unaff_x21;
  long *plVar26;
  long ****pppplVar27;
  ulong *unaff_x22;
  long ****pppplVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long ***ppplVar33;
  long ***ppplVar34;
  long ***ppplVar35;
  undefined1 auStack_1f8 [24];
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  uint uStack_150;
  undefined2 uStack_14c;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint *apuStack_b0 [2];
  undefined2 uStack_a0;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ***ppplStack_60;
  long ***ppplStack_58;
  long ***ppplStack_50;
  long ***ppplStack_48;
  
  func_0x000107743290();
  func_0x000107742774();
  func_0x00010774205c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_108,param_3);
  uStack_e8 = uStack_100;
  lStack_f0 = lStack_108;
  uStack_e0 = uStack_f8;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_108 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x0001072c9664(apuStack_b0);
  uStack_a0 = 0x100;
  puVar6 = (uint *)&lStack_108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  puVar2 = unaff_x22 + 1;
  for (lVar24 = *unaff_x21; lVar24 != unaff_x21[1]; lVar24 = lVar24 + 0x18) {
    (**(code **)(lVar24 + 8))();
    puVar7 = apuStack_b0[0];
    func_0x0001072c97a4();
    lVar29 = *(long *)puVar6;
    if (*(int *)(lVar29 + 0x40) == 1) {
      lVar31 = 0;
      for (lVar32 = 1; lVar32 - 1U < *unaff_x22 >> 1; lVar32 = lVar32 + 1) {
        puVar19 = puVar2;
        if ((*unaff_x22 & 1) != 0) {
          puVar19 = (ulong *)*puVar2;
        }
        puVar7 = (uint *)(lVar29 + 0x28);
        func_0x00010756f724(&ppplStack_60,puVar7,*(long *)((long)puVar19 + lVar31) + 0x10);
        if (((ulong)ppplStack_48 & 1) != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_1e0,&ppplStack_60);
          func_0x00010756a69c(&lStack_f0,auStack_1e0,lVar32);
          puVar7 = auStack_1e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
        func_0x000107743a3c();
        lVar31 = lVar31 + 0x10;
      }
LAB_10772c1f4:
      uVar5 = *(long *)apuStack_b0[0] == *(long *)(apuStack_b0[0] + 2);
      if ((bool)uVar5) {
        pppplVar27 = *(long *****)puVar6;
        puVar10 = (undefined8 *)0xb8;
        __Znwm();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_DAT_1109d1cd0;
        func_0x0001072c9bc0(&ppplStack_60);
        pppplVar28 = pppplVar27 + 2;
        func_0x0001072c9ff4(auStack_138);
        pppplVar11 = pppplVar27 + 9;
        func_0x000107264c5c();
        pppplVar12 = pppplVar27;
        pppplVar14 = pppplVar28;
        func_0x00010772cf38();
        pppplVar13 = pppplVar12;
        ppplStack_90 = (long ***)pppplVar11;
        ppplStack_88 = (long ***)pppplVar28;
        func_0x0001077430fc();
        func_0x0001000633dc();
        if ((((int)pppplVar13 == 0) || (((ulong)pppplVar14 & 1) == 0)) ||
           (uVar5 = pppplVar12 == (long ****)0x1, !(bool)uVar5)) {
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001077439d0();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001077439d0();
          if ((((ulong)pppplVar13 & 1) != 0) ||
             (func_0x000107742854(), ((ulong)pppplVar13 & 1) != 0)) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((((ulong)pppplVar13 & 1) != 0) ||
              (func_0x000107742854(), ((ulong)pppplVar13 & 1) != 0)) ||
             ((func_0x000107742854(), ((ulong)pppplVar13 & 1) != 0 ||
              (func_0x000107742854(), ((ulong)pppplVar13 & 1) != 0)))) goto LAB_10772c804;
          func_0x0001077430fc();
          func_0x0001000633dc();
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c804;
          pppplVar13 = &ppplStack_90;
          func_0x00010772cd00(pppplVar13,&UNK_10de8ee29,0);
          uVar5 = pppplVar13 == (long ****)0x0;
          bVar1 = !(bool)uVar5;
        }
        else {
LAB_10772c804:
          bVar1 = false;
        }
        func_0x0001077439d8();
        pppplVar11 = pppplVar13;
        func_0x0001077439d8();
        puVar15 = &DAT_10f424b05;
        pppplVar12 = pppplVar11;
        func_0x0001077439d8();
        pppplVar28 = pppplVar27 + 9;
        func_0x000107264c5c();
        func_0x00010772cf38(pppplVar27);
        func_0x00010772cd44(pppplVar28,puVar15);
        if (!bVar1) {
          uVar16 = 0;
          if (((ulong)pppplVar13 & 1) != 0) goto LAB_10772c914;
          goto LAB_10772c8e0;
        }
        pppplVar14 = &ppplStack_58;
        if (((ulong)ppplStack_60 & 1) != 0) {
          pppplVar14 = (long ****)ppplStack_58;
        }
        lVar24 = ((ulong)ppplStack_60 & 0x1ffffffffffffffe) << 3;
        goto LAB_10772c87c;
      }
    }
    else {
      if (*(int *)(lVar29 + 0x40) != 0) goto LAB_10772c1f4;
      puVar8 = (uint *)(lVar29 + 0x20);
      func_0x0001077416c8();
      uVar17 = *unaff_x22;
      if (*(long *)(puVar8 + 2) - *(long *)puVar8 >> 4 == uVar17 >> 1) {
        lVar29 = 0;
        puVar7 = puVar8;
        for (uVar30 = 0; uVar30 < uVar17 >> 1; uVar30 = uVar30 + 1) {
          puVar19 = puVar2;
          if ((uVar17 & 1) != 0) {
            puVar19 = (ulong *)*puVar2;
          }
          if ((ulong)(*(long *)(puVar8 + 2) - *(long *)puVar8 >> 4) <= uVar30) {
            func_0x00010772d3dc();
            goto LAB_10772ca94;
          }
          puVar7 = (uint *)(*(long *)puVar8 + lVar29);
          func_0x00010756f724(&ppplStack_60,puVar7,*(long *)((long)puVar19 + lVar29) + 0x10);
          if ((char)ppplStack_48 == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_1c8,&ppplStack_60);
            func_0x00010756a69c(&lStack_f0,auStack_1c8,uVar30 + 1);
            puVar7 = auStack_1c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          }
          func_0x000107743a3c();
          uVar17 = *unaff_x22;
          lVar29 = lVar29 + 0x10;
        }
        goto LAB_10772c1f4;
      }
      func_0x00010724ef84(auStack_180,*(long *)puVar6 + 0x48);
      func_0x0001004c3cd0(auStack_168,&DAT_10f3b3c06,auStack_180);
      func_0x00010048a6c8(&uStack_150,auStack_168,&UNK_10f424d9c);
      func_0x000107878fec(auStack_198,*(long *)(puVar8 + 2) - *(long *)puVar8 >> 4);
      func_0x00010533a9c0(auStack_138,&uStack_150,auStack_198);
      func_0x00010048a6c8(&ppplStack_90,auStack_138,&UNK_10f424da8);
      func_0x000107878fec(auStack_1b0,*unaff_x22 >> 1);
      func_0x00010533a9c0(&ppplStack_60,&ppplStack_90,auStack_1b0);
      func_0x00010048a6c8(auStack_120,&ppplStack_60,&UNK_10f417b93);
      func_0x00010756a668(&lStack_f0,auStack_120);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_60);
      func_0x0001077433f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
      func_0x000107743354();
      puVar7 = &uStack_150;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001077435f4();
      func_0x0001077435e4();
    }
    puVar6 = puVar7;
  }
  uVar5 = lVar24 - *unaff_x21 == 0x18;
  if ((bool)uVar5) {
    puVar10 = *(undefined8 **)apuStack_b0[0];
    plVar26 = *(long **)(unaff_x20 + 0x40);
    pppplVar28 = (long ****)plVar26[1];
    uVar17 = ((long)pppplVar28 - *plVar26) / 0x30 +
             (*(long *)(apuStack_b0[0] + 2) - (long)puVar10) / 0x30;
    if ((ulong)((plVar26[2] - *plVar26) / 0x30) < uVar17) {
      if (0x555555555555555 < uVar17) goto LAB_10772ca90;
      func_0x00010756b8d0(&ppplStack_60);
      func_0x00010756b878(plVar26,&ppplStack_60);
      func_0x00010756baa8(&ppplStack_60);
      puVar10 = *(undefined8 **)apuStack_b0[0];
      plVar26 = *(long **)(unaff_x20 + 0x40);
      pppplVar28 = (long ****)plVar26[1];
    }
    puVar25 = *(undefined8 **)(apuStack_b0[0] + 2);
    for (; uVar5 = puVar10 == puVar25, !(bool)uVar5; puVar10 = puVar10 + 6) {
      pppplVar11 = (long ****)plVar26[1];
      if (pppplVar11 < (long ****)plVar26[2]) {
        pppplVar12 = pppplVar28;
        if (pppplVar28 == pppplVar11) {
          ppplVar34 = (long ***)puVar10[1];
          ppplVar22 = (long ***)*puVar10;
          pppplVar11[2] = (long ***)puVar10[2];
          pppplVar11[1] = ppplVar34;
          *pppplVar11 = ppplVar22;
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          ppplVar34 = (long ***)puVar10[4];
          ppplVar22 = (long ***)puVar10[3];
          pppplVar11[5] = (long ***)puVar10[5];
          pppplVar11[4] = ppplVar34;
          pppplVar11[3] = ppplVar22;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[3] = 0;
          plVar26[1] = (long)(pppplVar11 + 6);
        }
        else {
          pppplVar27 = pppplVar11 + -6;
          pppplVar14 = pppplVar11;
          for (pppplVar13 = pppplVar27; pppplVar13 < pppplVar11; pppplVar13 = pppplVar13 + 6) {
            ppplVar34 = pppplVar13[1];
            ppplVar22 = *pppplVar13;
            pppplVar14[2] = pppplVar13[2];
            pppplVar14[1] = ppplVar34;
            *pppplVar14 = ppplVar22;
            pppplVar13[1] = (long ***)0x0;
            pppplVar13[2] = (long ***)0x0;
            *pppplVar13 = (long ***)0x0;
            ppplVar34 = pppplVar13[4];
            ppplVar22 = pppplVar13[3];
            pppplVar14[5] = pppplVar13[5];
            pppplVar14[4] = ppplVar34;
            pppplVar14[3] = ppplVar22;
            pppplVar13[4] = (long ***)0x0;
            pppplVar13[5] = (long ***)0x0;
            pppplVar13[3] = (long ***)0x0;
            pppplVar14 = pppplVar14 + 6;
          }
          plVar26[1] = (long)pppplVar14;
          for (pppplVar11 = pppplVar11 + -0xc; pppplVar11 + 6 != pppplVar28;
              pppplVar11 = pppplVar11 + -6) {
            func_0x00010772d428(pppplVar27,pppplVar11);
            pppplVar27 = pppplVar27 + -6;
          }
          func_0x00010772d428(pppplVar28,puVar10);
        }
      }
      else {
        plVar9 = plVar26;
        func_0x00010756b830(plVar26,((long)pppplVar11 - *plVar26) / 0x30 + 1);
        func_0x00010756b8d0(&ppplStack_90,plVar9,((long)pppplVar28 - *plVar26) / 0x30,plVar26 + 2);
        ppplVar22 = ppplStack_80;
        if (ppplStack_80 == ppplStack_78) {
          if (ppplStack_88 < ppplStack_90 || (long)ppplStack_88 - (long)ppplStack_90 == 0) {
            uVar17 = ((long)ppplStack_80 - (long)ppplStack_90) / 0x30 << 1;
            if ((long)ppplStack_80 - (long)ppplStack_90 == 0) {
              uVar17 = 1;
            }
            func_0x00010756b8d0(&ppplStack_60,uVar17,uVar17 >> 2,uStack_70);
            ppplVar3 = ppplStack_78;
            ppplVar34 = ppplStack_88;
            ppplVar22 = ppplStack_90;
            lVar24 = (long)ppplStack_80 - (long)ppplStack_88;
            pppplVar11 = (long ****)((long)ppplStack_50 + lVar24);
            for (; lVar24 != 0; lVar24 = lVar24 + -0x30) {
              ppplVar35 = (long ***)ppplStack_88[1];
              ppplVar33 = (long ***)*ppplStack_88;
              ppplStack_50[2] = ppplStack_88[2];
              ppplStack_50[1] = (long **)ppplVar35;
              *ppplStack_50 = (long **)ppplVar33;
              ppplStack_88[1] = (long **)0x0;
              ppplStack_88[2] = (long **)0x0;
              *ppplStack_88 = (long **)0x0;
              ppplVar35 = (long ***)ppplStack_88[4];
              ppplVar33 = (long ***)ppplStack_88[3];
              ppplStack_50[5] = ppplStack_88[5];
              ppplStack_50[4] = (long **)ppplVar35;
              ppplStack_50[3] = (long **)ppplVar33;
              ppplStack_88[4] = (long **)0x0;
              ppplStack_88[5] = (long **)0x0;
              ppplStack_88[3] = (long **)0x0;
              ppplStack_50 = ppplStack_50 + 6;
              ppplStack_88 = ppplStack_88 + 6;
            }
            ppplStack_88 = ppplStack_58;
            ppplStack_90 = ppplStack_60;
            ppplStack_78 = ppplStack_48;
            ppplStack_58 = ppplVar34;
            ppplStack_60 = ppplVar22;
            ppplStack_48 = ppplVar3;
            ppplStack_50 = ppplStack_80;
            ppplStack_80 = (long ***)pppplVar11;
            func_0x00010756baa8(&ppplStack_60);
          }
          else {
            lVar24 = (((long)ppplStack_88 - (long)ppplStack_90) / 0x30 + 1) / -2;
            for (pppplVar11 = (long ****)ppplStack_88; pppplVar11 != (long ****)ppplVar22;
                pppplVar11 = pppplVar11 + 6) {
              func_0x00010772d428(pppplVar11 + lVar24 * 6,pppplVar11);
            }
            ppplStack_80 = (long ***)(pppplVar11 + lVar24 * 6);
            ppplStack_88 = ppplStack_88 + lVar24 * 6;
          }
        }
        pppplVar12 = (long ****)ppplStack_88;
        ppplVar34 = (long ***)puVar10[1];
        ppplVar22 = (long ***)*puVar10;
        ppplStack_80[2] = (long **)puVar10[2];
        ppplStack_80[1] = (long **)ppplVar34;
        *ppplStack_80 = (long **)ppplVar22;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        ppplVar22 = (long ***)puVar10[5];
        ppplVar34 = (long ***)puVar10[3];
        ppplStack_80[4] = (long **)puVar10[4];
        ppplStack_80[3] = (long **)ppplVar34;
        ppplStack_80[5] = (long **)ppplVar22;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[3] = 0;
        ppplStack_80 = ppplStack_80 + 6;
        func_0x00010756b958(plVar26 + 2,pppplVar28,plVar26[1]);
        ppplStack_80 = (long ***)((long)ppplStack_80 + (plVar26[1] - (long)pppplVar28));
        plVar26[1] = (long)pppplVar28;
        pppplVar11 = (long ****)(ppplStack_88 + (((long)pppplVar28 - *plVar26) / -0x30) * 6);
        func_0x00010756b958(plVar26 + 2,*plVar26,pppplVar28,pppplVar11);
        ppplStack_90 = (long ***)*plVar26;
        *plVar26 = (long)pppplVar11;
        plVar26[1] = (long)ppplStack_80;
        pppplVar28 = (long ****)plVar26[2];
        plVar26[2] = (long)ppplStack_78;
        ppplStack_88 = ppplStack_90;
        ppplStack_80 = ppplStack_90;
        ppplStack_78 = (long ***)pppplVar28;
        func_0x00010756baa8(&ppplStack_90);
      }
      pppplVar28 = pppplVar12 + 6;
    }
    func_0x0001072c97a4(apuStack_b0[0]);
  }
  else {
    func_0x00010772b510(auStack_1f8);
    func_0x000107743284();
    func_0x00010756a668();
    func_0x000107742c9c();
  }
  uVar23 = 0;
  *(undefined1 *)extraout_x8 = 0;
  goto LAB_10772ca44;
  while( true ) {
    ppplVar22 = *pppplVar14;
    lVar24 = lVar24 + -0x10;
    pppplVar14 = pppplVar14 + 2;
    if (((ulong)ppplVar22[4] & 1) == 0) break;
LAB_10772c87c:
    uVar5 = lVar24 == 0;
    uVar16 = (uint)(byte)uVar5;
    if (lVar24 == 0) break;
  }
  if (((ulong)pppplVar13 & 1) == 0) {
LAB_10772c8e0:
    uVar5 = ((ulong)ppplStack_60 & 1) == 0;
    pppplVar13 = &ppplStack_58;
    if (!(bool)uVar5) {
      pppplVar13 = (long ****)ppplStack_58;
    }
    lVar24 = ((ulong)ppplStack_60 & 0x1ffffffffffffffe) << 3;
    uVar18 = 0x100;
    do {
      if (lVar24 == 0) goto LAB_10772c918;
      ppplVar22 = *pppplVar13;
      lVar24 = lVar24 + -0x10;
      pppplVar13 = pppplVar13 + 2;
    } while ((*(byte *)((long)ppplVar22 + 0x21) & 1) != 0);
  }
LAB_10772c914:
  uVar18 = 0;
LAB_10772c918:
  if (((ulong)pppplVar11 & 1) == 0) {
    uVar5 = ((ulong)ppplStack_60 & 1) == 0;
    pppplVar11 = &ppplStack_58;
    if (!(bool)uVar5) {
      pppplVar11 = (long ****)ppplStack_58;
    }
    lVar24 = ((ulong)ppplStack_60 & 0x1ffffffffffffffe) << 3;
    uVar20 = 0x10000;
    do {
      if (lVar24 == 0) goto LAB_10772c954;
      ppplVar22 = *pppplVar11;
      lVar24 = lVar24 + -0x10;
      pppplVar11 = pppplVar11 + 2;
    } while ((*(byte *)((long)ppplVar22 + 0x22) & 1) != 0);
  }
  uVar20 = 0;
LAB_10772c954:
  if (((ulong)pppplVar12 & 1) == 0) {
    uVar5 = ((ulong)ppplStack_60 & 1) == 0;
    pppplVar11 = &ppplStack_58;
    if (!(bool)uVar5) {
      pppplVar11 = (long ****)ppplStack_58;
    }
    lVar24 = ((ulong)ppplStack_60 & 0x1ffffffffffffffe) << 3;
    uVar21 = 0x1000000;
    do {
      if (lVar24 == 0) goto LAB_10772c990;
      ppplVar22 = *pppplVar11;
      lVar24 = lVar24 + -0x10;
      pppplVar11 = pppplVar11 + 2;
    } while ((*(byte *)((long)ppplVar22 + 0x23) & 1) != 0);
  }
  uVar21 = 0;
LAB_10772c990:
  if ((int)pppplVar28 != 0) {
    uVar5 = ((ulong)ppplStack_60 & 1) == 0;
    pppplVar28 = &ppplStack_58;
    if (!(bool)uVar5) {
      pppplVar28 = (long ****)ppplStack_58;
    }
    lVar24 = ((ulong)ppplStack_60 & 0x1ffffffffffffffe) << 3;
    do {
      if (lVar24 == 0) {
        uStack_14c = 1;
        goto LAB_10772c9d0;
      }
      ppplVar22 = *pppplVar28;
      lVar24 = lVar24 + -0x10;
      pppplVar28 = pppplVar28 + 2;
    } while ((*(byte *)((long)ppplVar22 + 0x24) & 1) != 0);
  }
  uStack_14c = 0;
LAB_10772c9d0:
  uStack_150 = uVar18 | uVar16 | uVar20 | uVar21;
  uVar23 = 1;
  func_0x0001072c9f9c(puVar10 + 3,1,auStack_138,&uStack_150);
  func_0x0001072c9884(auStack_138);
  puVar10[3] = &PTR_DAT_1109d1078;
  puVar10[0xc] = pppplVar27;
  puVar10[0xd] = pppplVar27[1];
  func_0x0001072c9bc0(puVar10 + 0xe,&ppplStack_60);
  func_0x0001072c9c34(&ppplStack_60);
  *extraout_x8 = (long)(puVar10 + 3);
  extraout_x8[1] = (long)puVar10;
LAB_10772ca44:
  *(undefined1 *)(extraout_x8 + 2) = uVar23;
  func_0x0001072ca718(&lStack_f0);
  func_0x000107741c48();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10772ca90:
  func_0x00010756b8bc();
LAB_10772ca94:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10772ca98);
  (*pcVar4)();
}



/* Entry: 10772cfb4; end: 10772cfff;  */

void FUN_10772cfb4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)(param_1 + 0x60);
  if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  uVar1 = *(ulong *)(param_1 + 0x58) & 0x1ffffffffffffffe;
  uVar3 = uVar1 << 3;
  while (uVar1 != 0) {
    func_0x00010745df58(param_2,*plVar2);
    uVar3 = uVar3 - 0x10;
    plVar2 = plVar2 + 2;
    uVar1 = uVar3;
  }
  return;
}



/* Entry: 10772d2fc; end: 10772d33b;  */

undefined8 * FUN_10772d2fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  *param_1 = *param_2;
  uStack_30 = *param_2;
  puVar1 = &uStack_21;
  func_0x00010750c60c(puVar1,&uStack_30);
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10772d454; end: 10772d48f;  */

void FUN_10772d454(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010772d478(param_1,&uStack_11);
  return;
}



/* Entry: 10772d640; end: 10772d69f;  */

long FUN_10772d640(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107741acc();
  func_0x000107743a34();
  func_0x000107743214();
  if ((bool)in_ZR) {
    func_0x000107742e98();
    func_0x0001077420e4();
  }
  else {
    func_0x00010774313c();
    func_0x0001077428fc();
  }
  func_0x000107742374();
  func_0x000107741a50();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742118();
    func_0x000107742904();
    if (*(int *)(param_1 + 0x40) != 0) {
      func_0x00010563ab98();
      uVar1 = *(int *)(param_1 + 0x40) == 1;
      if (!(bool)uVar1) {
        func_0x00010563ab98();
        func_0x000107741be8();
        func_0x000107742f04(2);
        func_0x000107742bf8();
        func_0x000107741a50();
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x000107742a64();
          if (!(bool)uVar1) {
            func_0x000107742644((&PTR_DAT_1109d1d60)[extraout_x8]);
          }
          func_0x00010774352c();
          return param_1;
        }
        return unaff_x19;
      }
    }
    return param_1 + 8;
  }
  return param_1;
}



/* Entry: 10772d804; end: 10772d85b;  */

void FUN_10772d804(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      func_0x000107743940();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10772d99c; end: 10772d9ef;  */

undefined8 * FUN_10772d99c(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x000107741b64();
  func_0x0001077437e0(0x3fe62e42fefa39ef);
  func_0x000107742e98();
  func_0x0001077420e4();
  func_0x0001077429bc();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772dc40; end: 10772dc43;  */

undefined8 * FUN_10772dc40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772deb0; end: 10772df07;  */

void FUN_10772deb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  ulong uStack_38;
  
  func_0x000107742ea0();
  uStack_38 = 0;
  for (param_3 = param_3 * 0x70; param_3 != 0; param_3 = param_3 + -0x70) {
    func_0x00010772db3c(&uStack_38,unaff_x20);
    unaff_x20 = unaff_x20 + 0x70;
  }
  func_0x00010774250c((double)(uStack_38 & 0x1fffffffffffff));
  return;
}



/* Entry: 10772e234; end: 10772e237;  */

void FUN_10772e234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10772e330; end: 10772e3ff;  */

long * FUN_10772e330(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != param_1[1]) {
    func_0x00010726af18(lVar1 + 8);
    lVar1 = *param_1 + 0x70;
    *param_1 = lVar1;
  }
  return param_1;
}



/* Entry: 10772e70c; end: 10772e7e7;  */

void FUN_10772e70c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int unaff_w23;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [64];
  undefined1 uStack_69;
  undefined1 auStack_68 [72];
  
  func_0x000107743a94();
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  func_0x000107741e48(*param_1);
  func_0x00010774319c();
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
  uVar1 = unaff_w23 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x00010772d6b8(&stack0x000000a8);
      func_0x000107741f18();
    }
    else {
      func_0x00010772d6a0(&stack0x000000a8);
      func_0x0001077428fc();
    }
    func_0x000107742974(&stack0x000000a8);
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107742174();
    func_0x00010772d714();
    func_0x0001077420d8();
    func_0x000107742904();
    func_0x000107741be8();
    func_0x000107323900(auStack_68,extraout_x9,&uStack_69);
    func_0x000104c318bc();
    puVar2 = auStack_68;
    func_0x00010724b3d8(puVar2);
    func_0x000107741a50();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107741be8(extraout_x8,puVar2);
      func_0x0001077433b0();
      func_0x000107775f1c();
      func_0x00010756a788(auStack_d0,auStack_e0);
      func_0x0001077432e4();
      func_0x0001077432d4();
      func_0x0001072c9884(auStack_e0);
      func_0x000107741a50();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000107742d44();
        func_0x0001072c9884();
        func_0x000107742904();
        func_0x000107743a88();
        func_0x000107742a28();
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10772e9a0; end: 10772ea5f;  */

/* WARNING: Possible PIC construction at 0x00010772ea40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772ea44) */
/* WARNING: Removing unreachable block (ram,0x00010772ea58) */
/* WARNING: Removing unreachable block (ram,0x00010772ea6c) */
/* WARNING: Removing unreachable block (ram,0x00010772ea88) */
/* WARNING: Removing unreachable block (ram,0x00010772ead0) */
/* WARNING: Removing unreachable block (ram,0x00010772eac4) */
/* WARNING: Removing unreachable block (ram,0x0001077427c4) */
/* WARNING: Removing unreachable block (ram,0x00010772ea84) */
/* WARNING: Removing unreachable block (ram,0x00010772ea68) */
/* WARNING: Removing unreachable block (ram,0x000107742d58) */

void FUN_10772e9a0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  func_0x000107741e20(*param_1);
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
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077420f0();
  func_0x000107742a64();
  if (!(bool)uVar1) {
    func_0x000107742644((&PTR_DAT_1109d1f78)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 10772ec1c; end: 10772ec2f;  */

void FUN_10772ec1c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772eed8; end: 10772eeeb;  */

void FUN_10772eed8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772f1bc; end: 10772f2c3;  */

undefined8 * FUN_10772f1bc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long unaff_x24;
  undefined8 auStack_88 [15];
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
      func_0x000107742fa4(param_1,param_2,*param_3);
      func_0x000107743b44();
      if ((bool)uVar1) {
        param_3 = auStack_88;
        func_0x00010772f000();
        func_0x00010774375c();
      }
      else {
        param_3 = auStack_88;
        func_0x000107572644();
        func_0x0001077428fc();
      }
      func_0x000107742fb4();
      goto LAB_10772f284;
    }
    func_0x0001077422b8();
    param_3 = (undefined8 *)*param_3;
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
LAB_10772f284:
  func_0x000107743058();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x000107742fb4();
  func_0x000107743058();
  func_0x000107742904();
  do {
    func_0x00010774367c();
    func_0x000107743b50();
  } while (!(bool)uVar1);
  return param_3;
}



/* Entry: 10772f3f4; end: 10772f457;  */

void FUN_10772f3f4(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined1 auStack_70 [80];
  
  func_0x000107741acc();
  func_0x00010774239c(auStack_70);
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
    return;
  }
  ___stack_chk_fail();
  func_0x000107742118();
  func_0x000107742904();
  uVar2 = (ulong)*(byte *)(param_1 + 0x58);
  func_0x000107741be8(*(undefined8 *)(param_1 + 0x50),extraout_x8);
  if ((uVar2 & 1) != 0) {
    func_0x00010774250c();
    while (func_0x000107741a50(), !(bool)in_ZR) {
      ___stack_chk_fail();
code_r0x00010772f4c0:
      iVar1 = 0x13725a08;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000100060964(0x113725b00,&UNK_10f424e7d);
        ___cxa_guard_release(0x113725a08);
      }
code_r0x00010772f498:
      func_0x000107743a20();
      func_0x000107743330();
      func_0x0001077431c4();
    }
    return;
  }
  if ((bRam0000000113725a08 & 1) == 0) goto code_r0x00010772f4c0;
  goto code_r0x00010772f498;
}



/* Entry: 10772f600; end: 10772f69f;  */

void FUN_10772f600(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  int iVar1;
  
  func_0x000107741be8();
  if ((param_2 & 1) != 0) {
    func_0x00010774250c();
    while (func_0x000107741a50(), !(bool)in_ZR) {
      ___stack_chk_fail();
LAB_10772f658:
      iVar1 = 0x13725a10;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000100060964(0x113725b38,&UNK_10f424ed0);
        ___cxa_guard_release(0x113725a10);
      }
LAB_10772f630:
      func_0x000107743a20();
      func_0x000107743330();
      func_0x0001077431c4();
    }
    return;
  }
  if ((bRam0000000113725a10 & 1) == 0) goto LAB_10772f658;
  goto LAB_10772f630;
}



/* Entry: 10772f8d0; end: 10772f8d3;  */

undefined8 * FUN_10772f8d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772fb38; end: 10772fc03;  */

void FUN_10772fb38(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  int unaff_w23;
  
  func_0x000107743a94();
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  uVar2 = *param_1;
  func_0x000107741e48(uVar2);
  func_0x00010774319c();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    param_2 = uVar2;
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = unaff_w23 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar1) {
      func_0x000107742a0c();
      param_2 = uVar2;
      func_0x000107742a04();
    }
    else {
      func_0x000107742a14();
      param_2 = uVar2;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  func_0x0001074d2700(param_2,uVar2);
  func_0x000107743b38();
  func_0x0001077425dc();
  return;
}



/* Entry: 10772fe9c; end: 10772fed3;  */

void FUN_10772fe9c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d21d8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 10773044c; end: 107730677;  */

double * FUN_10773044c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  double *extraout_x8_01;
  double *pdVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double adStack_f0 [3];
  double dStack_d8;
  double dStack_d0;
  double dStack_90;
  double dStack_88;
  
  pdVar7 = adStack_f0;
  pdVar8 = adStack_f0;
  pdVar4 = param_1;
  func_0x000107741cf4();
  pdVar5 = param_3;
LAB_107730478:
  pdVar10 = pdVar5 + 0xe;
  if (pdVar5 == param_4) {
    *param_1 = (double)param_2;
    uVar3 = 1;
    pdVar7 = pdVar4;
LAB_1077305a8:
    *(int *)(param_1 + 8) = 0;
LAB_1077305ac:
    func_0x000107741a68();
    if ((bool)uVar3) {
      return pdVar7;
    }
    ___stack_chk_fail();
    func_0x000107269124();
    func_0x000107742904();
    if ((*(int *)(pdVar8 + 0xf) != 0) && (func_0x00010563ab98(), *(int *)(pdVar8 + 0xf) != 1)) {
      func_0x00010563ab98();
      func_0x0001077306e4();
      dVar12 = *param_3;
      dVar14 = param_3[3];
      dVar13 = param_3[2];
      extraout_x8_01[1] = param_3[1];
      *extraout_x8_01 = dVar12;
      extraout_x8_01[3] = dVar14;
      extraout_x8_01[2] = dVar13;
      extraout_x8_01[4] = param_3[4];
      return pdVar8;
    }
    return pdVar8 + 1;
  }
  if (*(int *)param_2 == 0) {
    func_0x0001073982a4();
    if (*(int *)(pdVar5 + 0xd) == 2) {
      func_0x0001072cb4bc();
      uVar9 = (ulong)(uint)(int)*pdVar5;
      lVar11 = *(long *)*param_2;
      uVar1 = ((long *)*param_2)[1] - lVar11 >> 6;
      uVar3 = uVar9 == uVar1;
      pdVar6 = pdVar5;
      if (uVar1 <= uVar9) goto LAB_1077305a4;
      param_2 = (double *)(lVar11 + uVar9 * 0x40);
      pdVar4 = pdVar5;
      pdVar5 = pdVar10;
      goto LAB_107730478;
    }
    uVar3 = *(int *)(pdVar5 + 0xd) == 3;
    pdVar6 = param_2;
    if (!(bool)uVar3) goto LAB_1077305a4;
    func_0x000107743910();
    func_0x000107743a58();
    if ((int)pdVar6 != 0) {
      adStack_f0[0] = 0.0;
      adStack_f0[1] = 0.0;
      adStack_f0[2] = 0.0;
      func_0x000107743184(*param_2);
      func_0x0001072ac134(adStack_f0,extraout_x8 >> 6);
      lVar2 = ((long *)*param_2)[1];
      for (lVar11 = *(long *)*param_2; uVar3 = lVar11 == lVar2, !(bool)uVar3; lVar11 = lVar11 + 0x40
          ) {
        param_3 = pdVar10;
        FUN_10773044c(&dStack_d8,lVar11,pdVar10,param_4);
        func_0x000107730414(&dStack_90,&dStack_d8);
        func_0x0001072aad1c(adStack_f0,&dStack_90);
        func_0x000104c3323c(&dStack_90);
        func_0x000107730afc(&dStack_d8);
      }
      func_0x000107327958(&dStack_90,adStack_f0);
      dVar13 = dStack_88;
      dVar12 = dStack_90;
      dStack_90 = 0.0;
      dStack_88 = 0.0;
      *(int *)param_1 = 0;
      param_1[2] = dVar13;
      param_1[1] = dVar12;
      dStack_d8 = 0.0;
      dStack_d0 = 0.0;
      func_0x000104c33108(&dStack_d8);
      func_0x000107742a28();
      func_0x000104c33108(&dStack_90);
      func_0x000107269124();
      goto LAB_1077305ac;
    }
    func_0x000107743910();
    func_0x000107743978();
    if (((int)pdVar6 != 0) && (uVar3 = pdVar10 == param_4, (bool)uVar3)) {
      func_0x000107743184(*param_2);
      dStack_d0 = (double)(ulong)(extraout_x8_00 >> 6);
      dStack_d8 = (double)CONCAT44(dStack_d8._4_4_,3);
      func_0x000104c32a18(param_1,&dStack_d8);
      func_0x000107742a28();
      pdVar7 = &dStack_d8;
      func_0x000104c3323c();
      goto LAB_1077305ac;
    }
  }
  else {
    uVar3 = 0;
    pdVar6 = pdVar4;
    if ((*(int *)param_2 == 1) && (uVar3 = *(int *)(pdVar5 + 0xd) == 3, (bool)uVar3)) {
      func_0x000107743910();
      pdVar6 = param_2 + 1;
      func_0x000107297a3c();
      if (pdVar6 != (double *)0x0) {
        param_2 = pdVar4 + 7;
        pdVar4 = pdVar6;
        pdVar5 = pdVar10;
        goto LAB_107730478;
      }
    }
  }
LAB_1077305a4:
  *param_1 = 0.0;
  pdVar7 = pdVar6;
  goto LAB_1077305a8;
}



/* Entry: 107730824; end: 10773084b;  */

void FUN_107730824(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107743084();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109d21f8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107730a04; end: 107730a47;  */

long * FUN_107730a04(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107730b40; end: 107730b53;  */

void FUN_107730b40(void)

{
  return;
}



/* Entry: 107730cfc; end: 107730d0f;  */

void FUN_107730cfc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107731038; end: 107731043;  */

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
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_107731038(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar3 = param_2;
    *(undefined1 **)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x000107741be8();
    func_0x0001077432ec();
    if (((ulong)param_1 & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      param_1 = puVar3;
      func_0x0001077515e0();
      uVar1 = (uint)param_1 & 0xffff;
      in_ZR = uVar1 == 0xff;
      if (uVar1 < 0x100) {
        func_0x000107743394();
        func_0x000107742af8();
      }
      else {
        uVar1 = (uint)param_1 & 0xff;
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
    *(undefined1 **)(puVar2 + -0x80) = puVar3;
    *(undefined8 *)(puVar2 + -0x78) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x68) = &UNK_107731138;
    unaff_x29 = puVar2 + -0x70;
    param_2 = param_1;
    func_0x000107741b64();
    param_1 = puVar2 + -0x108;
    unaff_x30 = &UNK_107731158;
    puVar2 = puVar2 + -0x110;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 107731284; end: 1077312ef;  */

undefined8 * FUN_107731284(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x00010773122c();
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



/* Entry: 10773147c; end: 10773148f;  */

void FUN_10773147c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107731620; end: 10773162b;  */

void FUN_107731620(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107743424(param_1);
  if ((param_2 >> 0x20 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    *(double *)(unaff_x19 + 0x10) = (double)(param_2 & 0xffffffff);
    uVar1 = 2;
  }
  func_0x0001077424ac(uVar1);
  return;
}



/* Entry: 10773178c; end: 1077317f7;  */

undefined8 * FUN_10773178c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x000107731754();
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



/* Entry: 107731948; end: 10773195b;  */

void FUN_107731948(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107731bf8; end: 107731c8b;  */

long FUN_107731bf8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x70) {
    func_0x0001072786d8(param_4 + 8,param_2 + 8);
    param_4 = lStack_38 + 0x70;
  }
  uStack_48 = 1;
  func_0x0001072779b4(&uStack_60);
  return param_4;
}



/* Entry: 107731fa4; end: 107731fab;  */

/* WARNING: Possible PIC construction at 0x00010773212c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107732130) */
/* WARNING: Removing unreachable block (ram,0x000107732148) */
/* WARNING: Removing unreachable block (ram,0x000107732138) */
/* WARNING: Removing unreachable block (ram,0x000107732154) */

long * FUN_107731fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined *puVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_d8;
  undefined8 unaff_d9;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar6 = param_3;
    *(undefined8 *)(puVar1 + -0x40) = unaff_d9;
    *(long *)(puVar1 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741cf4();
    func_0x00010774320c(puVar1 + -0x130);
    func_0x00010774320c(uVar6,param_4,puVar1 + -0x150);
    uVar4 = *(undefined8 *)(puVar1 + -0x130);
    uVar5 = *(undefined8 *)(puVar1 + -0x128);
    param_3 = *(undefined8 *)(puVar1 + -0x150);
    func_0x0001072e9440();
    *(undefined8 *)(puVar1 + -0x128) = uVar4;
    *(undefined4 *)(puVar1 + -200) = 2;
    *(undefined8 *)(puVar1 + -0xb8) = uVar5;
    *(undefined4 *)(puVar1 + -0x58) = 2;
    func_0x000107743484();
    do {
      func_0x0001077435ac();
      func_0x000107743ac0();
    } while (!(bool)in_ZR);
    *(undefined8 *)(puVar1 + -0x128) = *(undefined8 *)(puVar1 + -0x148);
    *(undefined8 *)(puVar1 + -0x130) = *(undefined8 *)(puVar1 + -0x150);
    *(undefined8 *)(puVar1 + -0x120) = *(undefined8 *)(puVar1 + -0x140);
    func_0x000107743000();
    func_0x000107743a28();
    func_0x000107743374();
    func_0x0001077424ac(8);
    func_0x000107743144();
    unaff_x19 = (long *)(puVar1 + -0x130);
    func_0x000107277d70();
    func_0x000107742aa8();
    func_0x000107741a68();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    unaff_x21 = 0x78;
    plVar2 = unaff_x19;
    do {
      func_0x0001077435ac();
      func_0x000107743ac0();
    } while (!(bool)in_ZR);
    func_0x000107742904();
    puVar3 = &UNK_107732098;
    func_0x000107742d00();
    *(undefined1 **)(puVar1 + -0xf0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xe8) = puVar3;
    unaff_x29 = puVar1 + -0xf0;
    func_0x0001077418c8();
    func_0x00010774246c();
    func_0x000107742e70();
    while (in_ZR = unaff_x23 == 4, !(bool)in_ZR) {
      func_0x0001077422ac();
      plVar2 = (long *)*plVar2;
      func_0x000107742138(puVar1 + -0x1e8);
      func_0x000107743b94();
      if ((bool)in_ZR) {
        func_0x000107742fd4();
        func_0x000107742190();
      }
      else {
        func_0x000107742fcc();
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)in_ZR) {
        func_0x00010774306c();
        func_0x000107741c94(*(undefined8 *)(puVar1 + -0x168));
        if ((bool)in_ZR) {
          return plVar2;
        }
        ___stack_chk_fail();
        func_0x000107742a74();
        func_0x00010727f7f8();
        func_0x00010774306c();
        func_0x000107742904();
        *(undefined8 *)(puVar1 + -0x3d0) = unaff_x20;
        *(long **)(puVar1 + -0x3c8) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x3c0) = unaff_x29;
        *(undefined **)(puVar1 + -0x3b8) = &DAT_1077321a4;
        *plVar2 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar2 + 9);
        func_0x00010772d754(plVar2 + 5);
        func_0x0001072c9884(plVar2 + 2);
        return plVar2;
      }
    }
    func_0x0001077424c8();
    unaff_d8 = *plVar2;
    func_0x000107742e2c();
    func_0x000107743b74();
    func_0x0001077436b4();
    func_0x000107743694();
    param_4 = *plVar2;
    func_0x000107743b80();
    unaff_x30 = &UNK_107732130;
    puVar1 = puVar1 + -0x3b0;
    unaff_d9 = uVar6;
  }
  return unaff_x19;
}



/* Entry: 10773243c; end: 1077324a7;  */

undefined8 * FUN_10773243c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x0001077322d8();
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



/* Entry: 1077326a0; end: 1077326b3;  */

void FUN_1077326a0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107732898; end: 1077328a3;  */

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
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_107732898(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar2 = param_2;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x27;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741ca8(param_1);
    func_0x000107751714(puVar1 + -0x78);
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
    param_2 = uVar2;
    func_0x00010774378c();
    func_0x0001077432d4();
    func_0x000107743584();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -400) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x188) = uVar2;
    *(undefined1 **)(puVar1 + -0x180) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x178) = &UNK_107732930;
    unaff_x29 = puVar1 + -0x180;
    func_0x000107741b64();
    param_1 = puVar1 + -0x218;
    unaff_x30 = &UNK_107732950;
    puVar1 = puVar1 + -0x220;
    unaff_x19 = uVar2;
  }
  return;
}



/* Entry: 107732b28; end: 107732b2b;  */

undefined8 * FUN_107732b28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107732d80; end: 107732e7b;  */

void FUN_107732d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uStack_78;
  
  func_0x000107742a34();
  func_0x000107732e7c(param_2,1);
  plVar3 = unaff_x20;
  func_0x000107732cb4();
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if (((lVar1 != 0) && (plVar3 != (long *)0x0)) && (lVar1 != unaff_x21)) {
    _memmove(plVar3,lVar1,unaff_x21 - lVar1);
    plVar3 = (long *)((long)plVar3 + (unaff_x21 - lVar1));
  }
  *plVar3 = *param_4;
  if ((unaff_x21 != 0) && (unaff_x21 != lVar1 + lVar2 * 8)) {
    _memmove(plVar3 + 1);
  }
  uStack_78 = 0;
  if (lVar1 != 0) {
    func_0x0001077439e0();
  }
  func_0x0001077433e4();
  func_0x000107732d04(&uStack_78);
  func_0x0001077437f0();
  return;
}



/* Entry: 107733074; end: 10773314b;  */

void FUN_107733074(double param_1,double param_2,double param_3,double *param_4)

{
  undefined1 uVar1;
  long extraout_x8;
  long unaff_x24;
  
  func_0x000107742954();
  func_0x000107741834();
  func_0x00010774202c();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      func_0x0001077424d4();
      func_0x000107742ce8();
      param_2 = *param_4;
      func_0x000107742838();
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
      goto LAB_107733114;
    }
    func_0x0001077422b8();
    param_4 = (double *)*param_4;
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
LAB_107733114:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077423f0();
  func_0x0001077429e0();
  func_0x000107742904();
  *(double *)(extraout_x8 + 8) = param_1 + param_2 + param_3;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 107733420; end: 107733423;  */

undefined8 * FUN_107733420(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733698; end: 10773369f;  */

void FUN_107733698(long param_1,double param_2,double param_3)

{
  *(double *)(param_1 + 8) = param_2 * param_3;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107733940; end: 107733953;  */

void FUN_107733940(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107733cbc; end: 107733da7;  */

undefined8 * FUN_107733cbc(undefined8 *param_1)

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
    if (!(bool)in_ZR) goto LAB_107733d64;
  }
  func_0x000107743bf8();
  dVar3 = 1.0;
  pdVar1 = extraout_x8;
  for (lVar2 = extraout_x9; lVar2 != 0; lVar2 = lVar2 + -8) {
    dVar3 = dVar3 * *pdVar1;
    pdVar1 = pdVar1 + 1;
  }
  func_0x000107742dc0(dVar3);
  func_0x000107743734();
  func_0x0001077420e4();
  func_0x0001077429bc();
LAB_107733d64:
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



/* Entry: 107734004; end: 1077340db;  */

void FUN_107734004(undefined8 param_1,undefined8 *param_2)

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
      goto LAB_1077340a4;
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
LAB_1077340a4:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077423f0();
  func_0x0001077429e0();
  func_0x000107742904();
  _fmod();
  func_0x00010774250c();
  return;
}



/* Entry: 107734394; end: 107734397;  */

undefined8 * FUN_107734394(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773460c; end: 10773462b;  */

void FUN_10773460c(void)

{
  _log10();
  func_0x00010774250c();
  return;
}



/* Entry: 107734878; end: 10773488b;  */

void FUN_107734878(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107734b0c; end: 107734bb3;  */

undefined8 * FUN_107734b0c(undefined8 *param_1)

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
    _sin(*param_1);
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



/* Entry: 107734d6c; end: 107734e2b;  */

void FUN_107734d6c(undefined8 *param_1)

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
  _tan();
  func_0x00010774250c();
  return;
}



/* Entry: 107735094; end: 107735097;  */

undefined8 * FUN_107735094(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773530c; end: 10773532b;  */

void FUN_10773530c(void)

{
  _atan();
  func_0x00010774250c();
  return;
}



/* Entry: 1077355c8; end: 1077355db;  */

void FUN_1077355c8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107735930; end: 107735a13;  */

undefined8 * FUN_107735930(long *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_138;
  undefined8 auStack_b8 [15];
  int iStack_40;
  
  func_0x000107741910();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
  func_0x0001077420ac(auStack_b8);
  if (iStack_40 == 1) {
    func_0x000107743204();
    func_0x000107743ad8();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077431fc();
    func_0x0001077428fc();
  }
  func_0x00010774252c();
  uVar1 = iStack_40 == 1;
  if ((bool)uVar1) {
    func_0x00010774304c();
    puVar2 = auStack_b8;
    func_0x0001077358f4(puVar2,*puStack_138,puStack_138[1]);
    func_0x000107742cbc();
    func_0x000107743bac();
    if ((bool)uVar1) {
      func_0x000107743204();
      func_0x000107742b70();
    }
    else {
      func_0x0001077431fc();
      func_0x0001077428fc();
    }
    func_0x00010774252c();
  }
  func_0x0001077427d0();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010774252c();
  func_0x0001077427d0();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107735c78; end: 107735c8b;  */

void FUN_107735c78(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107735f84; end: 107735f8b;  */

void FUN_107735f84(long param_1,double param_2)

{
  *(long *)(param_1 + 8) = (long)param_2;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077361e8; end: 1077361fb;  */

void FUN_1077361e8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107736464; end: 10773650b;  */

double * FUN_107736464(undefined8 *param_1)

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
    func_0x000107741ffc((long)*pdVar2);
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
  func_0x00010772d754(pdVar2 + 5);
  func_0x0001072c9884(pdVar2 + 2);
  return pdVar2;
}



/* Entry: 1077366ac; end: 10773676b;  */

void FUN_1077366ac(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  byte bVar2;
  long extraout_x8;
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
  bVar2 = (byte)param_1;
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741eec();
  func_0x000107742088();
  func_0x000107742904();
  *(byte *)(extraout_x8 + 8) = bVar2 ^ 1;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 107736968; end: 107736a5b;  */

undefined8 * FUN_107736968(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  
  func_0x000107743290();
  func_0x0001077418c8();
  func_0x000107741f34();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424e0();
      func_0x000107743318();
      func_0x000107743810();
      func_0x000107736924();
      func_0x000107742bc8();
      func_0x000107742bd8();
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
      goto LAB_107736a0c;
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
LAB_107736a0c:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107736c7c; end: 107736c8f;  */

void FUN_107736c7c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107736fa4; end: 107736faf;  */

/* WARNING: Possible PIC construction at 0x000107737084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107737088) */
/* WARNING: Removing unreachable block (ram,0x0001077370a4) */
/* WARNING: Removing unreachable block (ram,0x000107737094) */
/* WARNING: Removing unreachable block (ram,0x0001077370b0) */

undefined8 * FUN_107736fa4(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8();
    func_0x0001077433b0();
    func_0x00010724ef84();
    func_0x0001078bbeac(puVar1 + -0x78,puVar1 + -0x90);
    func_0x0001077439b8();
    func_0x0001077432e4();
    func_0x000104c2f714(puVar1 + -0x60);
    puVar2 = (undefined8 *)(puVar1 + -0x78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010774338c();
    func_0x000107741a50();
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    func_0x000107742d44();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xb8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xb0) = unaff_x20;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x98) = &UNK_107737024;
    unaff_x29 = puVar1 + -0xa0;
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x188) = 0;
    func_0x000107742168();
    puVar2 = (undefined8 *)*puVar2;
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
    in_ZR = (int)unaff_x20 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001077421a8();
    func_0x00010774371c();
    unaff_x30 = &UNK_107737088;
    puVar1 = puVar1 + -0x1f0;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar1 + -0x210) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x208) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x200) = unaff_x29;
  *(undefined **)(puVar1 + -0x1f8) = &DAT_1077370f8;
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 1077373a0; end: 10773749b;  */

undefined8 * FUN_1077373a0(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  
  func_0x000107743290();
  func_0x0001077418c8();
  func_0x000107741f34();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424e0();
      func_0x000107743318();
      func_0x000107743810();
      func_0x0001077371f8();
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
      goto LAB_107737448;
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
LAB_107737448:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107737678; end: 1077376f3;  */

void FUN_107737678(undefined8 param_1,ulong param_2)

{
  ulong unaff_x21;
  ulong uVar1;
  double dVar2;
  
  func_0x000107742a34();
  func_0x000104c2d614();
  dVar2 = 0.0;
  if ((param_2 & 1) == 0) {
    uVar1 = unaff_x21;
    func_0x000104c2d614(0);
    dVar2 = 1.0;
    if ((uVar1 & 1) == 0) {
      func_0x000107264c5c(0x3ff0000000000000);
      uVar1 = 1;
      while( true ) {
        func_0x000107742cf0();
        func_0x0001072784dc();
        if (unaff_x21 == 0xffffffffffffffff) break;
        uVar1 = uVar1 + 1;
      }
      dVar2 = (double)uVar1;
    }
  }
  func_0x00010774250c(dVar2);
  return;
}


