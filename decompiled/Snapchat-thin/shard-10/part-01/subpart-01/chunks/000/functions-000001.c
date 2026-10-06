/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10768d598; end: 10768d5cf;  */

/* WARNING: Removing unreachable block (ram,0x00010768d78c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10768d598(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  ulong unaff_x22;
  byte unaff_w23;
  undefined1 uVar7;
  undefined8 uVar8;
  double unaff_d8;
  undefined1 auStack_f80 [216];
  int iStack_ea8;
  undefined1 auStack_ea0 [232];
  undefined1 uStack_db8;
  int iStack_d58;
  undefined1 uStack_d30;
  undefined8 *******pppppppuStack_cf0;
  undefined *puStack_ce8;
  undefined1 auStack_cd0 [64];
  undefined8 *******pppppppuStack_c90;
  code *pcStack_c88;
  undefined1 auStack_c48 [112];
  undefined1 auStack_bd8 [120];
  undefined1 *******pppppppuStack_b30;
  undefined *puStack_b28;
  undefined1 auStack_ab0 [248];
  undefined1 auStack_9b8 [120];
  undefined1 ******ppppppuStack_910;
  undefined *puStack_908;
  undefined1 auStack_890 [248];
  undefined1 auStack_798 [120];
  undefined1 *****pppppuStack_6f0;
  undefined *puStack_6e8;
  undefined4 uStack_5c8;
  undefined1 auStack_550 [104];
  undefined4 uStack_4e8;
  undefined1 auStack_4e0 [112];
  byte bStack_470;
  int iStack_400;
  undefined1 ****ppppuStack_3a0;
  byte *pbStack_398;
  int iStack_2e0;
  undefined1 auStack_268 [8];
  byte bStack_260;
  undefined1 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  
  func_0x000107707ccc();
  func_0x00010770cec8();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_a8 = &UNK_10768d5d0;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107707ccc();
  func_0x00010770cec8();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_148 = &UNK_10768d608;
  ppuStack_150 = &puStack_b0;
  func_0x000107707ccc();
  func_0x00010770cec8();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar5 = &DAT_10768d640;
  func_0x00010771cb70();
  pppuStack_1a0 = &ppuStack_150;
  puStack_198 = puVar5;
  func_0x0001077074e8();
  if ((bRam00000001136d2a08 & 1) == 0) {
    iVar6 = 0x136d2a08;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107718e10(0x113706ec8,&DAT_10f4219f3);
      ___cxa_guard_release(0x1136d2a08);
    }
  }
  if ((bRam00000001136d2a10 & 1) == 0) {
    iVar6 = 0x136d2a10;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709000(0x113706f00);
      ___cxa_guard_release(0x1136d2a10);
    }
  }
  func_0x00010770c394();
  func_0x00010771c454();
  func_0x00010770c330();
  if ((unaff_w23 & 1) == 0) {
code_r0x00010768d73c:
    bStack_260 = 0;
code_r0x00010768d740:
    func_0x00010770b568(1);
    func_0x000107714890();
  }
  else {
    puVar2 = auStack_268;
    func_0x000107707f48();
    func_0x000107715c48();
    if ((bool)in_ZR) {
      func_0x00010771556c();
      func_0x00010770c218(puVar2);
      func_0x00010771ad54();
      if (((ulong)puVar2 & 1) == 0) {
        func_0x000107714850();
        func_0x00010770d240();
        goto code_r0x00010768d73c;
      }
      iStack_2e0 = 0;
      func_0x000107710f50();
      func_0x00010770c1a0();
      func_0x000107714830();
      if (iStack_2e0 == 0) {
        func_0x000107712cdc();
        func_0x00010770c1a0();
        func_0x000107714830();
      }
      unaff_x22 = 0;
      func_0x00010770ccc8();
      func_0x000107718220();
      if ((bool)in_ZR) {
        func_0x000107717044();
        func_0x0001077144b0();
      }
      else {
        func_0x0001077094e4();
        func_0x00010770cf5c();
        func_0x000107714fdc();
        func_0x00010771584c();
      }
      func_0x000107714830();
      func_0x000107714890();
      func_0x000107714850();
      func_0x00010770d240();
      bStack_260 = unaff_w23;
      goto code_r0x00010768d740;
    }
    func_0x00010770d24c();
    func_0x0001077154b8();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2a10);
  func_0x0001077149ec();
  pbVar3 = &DAT_10768d85c;
  func_0x00010771a3d8();
  ppppuStack_3a0 = &pppuStack_1a0;
  pbStack_398 = pbVar3;
  func_0x000107707670();
  if ((bRam00000001136d2a18 & 1) == 0) {
    pbVar3 = (byte *)0x1136d2a18;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770b3d4(0x113706f38);
      pbVar3 = (byte *)0x1136d2a18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a20 & 1) == 0) {
    pbVar3 = (byte *)0x1136d2a20;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770b62c(0x113706f70);
      pbVar3 = (byte *)0x1136d2a20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a28 & 1) == 0) {
    pbVar3 = (byte *)0x1136d2a28;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770ab28(0x113706fa8);
      pbVar3 = (byte *)0x1136d2a28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a30 & 1) == 0) {
    pbVar3 = (byte *)0x1136d2a30;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770f558(0x113706fe0);
      pbVar3 = (byte *)0x1136d2a30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a38 & 1) == 0) {
    pbVar3 = (byte *)0x1136d2a38;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770f548(0x113707018);
      pbVar3 = (byte *)0x1136d2a38;
      ___cxa_guard_release();
    }
  }
  iStack_400 = 0;
  func_0x000107717d04();
  uStack_4e8 = 0;
  func_0x000107713b94();
  func_0x000107716400();
  if ((bool)in_ZR) {
    func_0x00010771545c();
    if ((*pbVar3 & 1) == 0) {
      func_0x00010770cd5c();
code_r0x00010768d94c:
      func_0x000107713b94();
      func_0x000107716400();
      if (!(bool)in_ZR) {
        func_0x000107708120();
        goto code_r0x00010768d9b8;
      }
      func_0x00010771545c();
      if ((*pbVar3 & 1) == 0) {
        func_0x00010770cd5c();
        iVar6 = (int)pbVar3;
      }
      else {
        func_0x0001077129e0();
        iVar6 = (int)pbVar3;
        func_0x000107710b0c();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)in_ZR) goto code_r0x00010768d9c0;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770cd5c();
        in_ZR = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x000107710b00();
          goto code_r0x00010768d9f4;
        }
      }
      func_0x000107711978();
    }
    else {
      func_0x0001077129e0();
      func_0x000107710b0c();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x00010768d9c0;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770cd5c();
      in_ZR = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto code_r0x00010768d94c;
      func_0x000107710b00();
      iVar6 = (int)pbVar3;
    }
code_r0x00010768d9f4:
    func_0x00010770cbf0(auStack_550);
    func_0x000107714830();
    func_0x0001077178e0();
    func_0x00010771527c();
    func_0x00010771a2c0();
    func_0x000107717480();
    func_0x00010770bf04();
    unaff_x22 = 0;
    func_0x00010770c448();
    func_0x000107714848();
    func_0x000107714838();
    func_0x000107714ad4();
    func_0x000107719fbc();
    if (iVar6 != 0) {
      if ((bStack_470 & 1) == 0) {
        func_0x000107713f28();
      }
      uStack_5c8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_400 == 0) {
      func_0x000107717e0c();
      func_0x00010770bf04();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x000107719fbc();
      if (iVar6 != 0) {
        if ((bStack_470 & 1) == 0) {
          func_0x000107713f28();
        }
        func_0x00010770cd10(auStack_4e0);
      }
    }
    func_0x000107719cfc();
    func_0x00010770ccbc();
    func_0x00010770ce74();
  }
  else {
    func_0x000107708120();
code_r0x00010768d9b8:
    func_0x00010770d3a4();
    func_0x0001077150e4();
code_r0x00010768d9c0:
    func_0x00010770cd5c();
    func_0x00010770ccbc();
  }
  func_0x000107715624();
  func_0x00010770c3d0();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2a38);
  func_0x000107714988();
  puStack_6e8 = &DAT_10768dc64;
  pppppuStack_6f0 = &ppppuStack_3a0;
  func_0x000107707ba8();
  if ((bRam00000001136d2a40 & 1) == 0) {
    iVar6 = 0x136d2a40;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077153c8(0x113707050,&DAT_10f391dda);
      ___cxa_guard_release(0x1136d2a40);
    }
  }
  if ((bRam00000001136d2a48 & 1) == 0) {
    iVar6 = 0x136d2a48;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107719a1c();
      func_0x000107714a40(auStack_798,&UNK_10f422752);
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107714d08(auStack_798,&UNK_10f42275c);
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712fcc();
      func_0x00010770a15c();
      func_0x00010770e828();
      unaff_x22 = 0;
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712b20();
      func_0x00010770c930();
      func_0x000107716af8();
      ___cxa_guard_release(0x1136d2a48);
    }
  }
  func_0x000107712fc0();
  func_0x00010771ae50();
  func_0x000107715c3c(auStack_890);
  func_0x0001077182e0();
  if ((bool)in_ZR) {
    func_0x000107715c6c();
    func_0x00010756e584();
    func_0x000107714a5c();
    uVar8 = 0;
    if ((bool)in_ZR) {
      uVar8 = 0x3fdae147ae147ae1;
    }
    func_0x00010770b0a0(uVar8);
    func_0x000107714850();
  }
  else {
    func_0x00010770c1d0(auStack_890);
  }
  func_0x00010770ed2c();
  func_0x000107714890();
  func_0x00010770c850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770cc20();
  func_0x000107715284();
  func_0x000107716af8();
  ___cxa_guard_abort(0x1136d2a48);
  func_0x0001077149ec();
  puStack_908 = &DAT_10768de5c;
  ppppppuStack_910 = &pppppuStack_6f0;
  func_0x000107707ba8();
  if ((bRam00000001136d2a50 & 1) == 0) {
    iVar6 = 0x136d2a50;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077153c8(0x113707088,&DAT_10f391dda);
      ___cxa_guard_release(0x1136d2a50);
    }
  }
  if ((bRam00000001136d2a58 & 1) == 0) {
    iVar6 = 0x136d2a58;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107719a1c();
      func_0x000107714a40(auStack_9b8,&UNK_10f422752);
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107714d08(auStack_9b8,&UNK_10f42275c);
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712fcc();
      func_0x00010770a15c();
      func_0x00010770e828();
      unaff_x22 = 0;
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712b20();
      func_0x00010770c930();
      func_0x000107716af8();
      ___cxa_guard_release(0x1136d2a58);
    }
  }
  func_0x000107712fc0();
  func_0x00010771ae50();
  func_0x000107715c3c(auStack_ab0);
  func_0x0001077182e0();
  if ((bool)in_ZR) {
    func_0x000107715c6c();
    func_0x00010756e584();
    func_0x000107714a5c();
    uVar8 = 0;
    if ((bool)in_ZR) {
      uVar8 = 0x3feae147ae147ae1;
    }
    func_0x00010770b0a0(uVar8);
    func_0x000107714850();
  }
  else {
    func_0x00010770c1d0(auStack_ab0);
  }
  func_0x00010770ed2c();
  func_0x000107714890();
  func_0x00010770c850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770cc20();
  func_0x000107715284();
  func_0x000107716af8();
  ___cxa_guard_abort(0x1136d2a58);
  func_0x0001077149ec();
  puStack_b28 = &DAT_10768e054;
  pppppppuStack_b30 = &ppppppuStack_910;
  func_0x000107707ba8();
  if ((bRam00000001136d2a60 & 1) == 0) {
    iVar6 = 0x136d2a60;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077153c8(0x1137070c0,&DAT_10f391dda);
      ___cxa_guard_release(0x1136d2a60);
    }
  }
  if ((bRam00000001136d2a68 & 1) == 0) {
    iVar6 = 0x136d2a68;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107719a1c();
      func_0x000107714a40(auStack_bd8,&UNK_10f422752);
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107714d08(auStack_bd8,&UNK_10f42275c);
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712fcc();
      func_0x00010770a15c();
      func_0x00010770e828();
      unaff_x22 = 0;
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712b20();
      func_0x00010770c930();
      func_0x000107716af8();
      ___cxa_guard_release(0x1136d2a68);
    }
  }
  func_0x000107712fc0();
  func_0x00010771ae50();
  func_0x000107715c3c(auStack_cd0);
  func_0x0001077182e0();
  if ((bool)in_ZR) {
    func_0x000107715c6c();
    func_0x00010756e584();
    func_0x000107714a5c();
    uVar8 = 0;
    if ((bool)in_ZR) {
      uVar8 = 0x3feae147ae147ae1;
    }
    func_0x00010770b0a0(uVar8);
    func_0x000107714850();
  }
  else {
    func_0x00010770c1d0(auStack_cd0);
  }
  func_0x00010770ed2c();
  func_0x000107714890();
  func_0x00010770c850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770cc20();
  func_0x000107715284();
  func_0x000107716af8();
  ___cxa_guard_abort(0x1136d2a68);
  func_0x0001077149ec();
  pcVar4 = FUN_10768e24c;
  func_0x00010771fea0();
  pppppppuStack_c90 = &pppppppuStack_b30;
  pcStack_c88 = pcVar4;
  func_0x000107707564();
  if ((bRam00000001136d2a70 & 1) == 0) {
    iVar6 = 0x136d2a70;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077142ac(0x1137070f8);
      ___cxa_guard_release(0x1136d2a70);
    }
  }
  if ((bRam00000001136d2a78 & 1) == 0) {
    iVar6 = 0x136d2a78;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010771429c(0x113707130);
      ___cxa_guard_release(0x1136d2a78);
    }
  }
  func_0x000107709040();
  func_0x00010770ef48();
  func_0x00010770c8b0();
  if ((unaff_x22 & 1) == 0) {
    uStack_d30 = 0;
  }
  else {
    func_0x000107709040();
    func_0x000107714664();
    func_0x00010770d5d0();
    uStack_d30 = (char)auStack_c48;
  }
  func_0x000107708918();
  func_0x000107714850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2a78);
  func_0x0001077149ec();
  puVar5 = &DAT_10768e374;
  func_0x0001077184d0();
  pppppppuStack_cf0 = &pppppppuStack_c90;
  puStack_ce8 = puVar5;
  func_0x000107707670();
  if ((bRam00000001136d2a80 & 1) == 0) {
    puVar5 = (undefined *)0x1136d2a80;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x00010771b5c8(0x113707168);
      puVar5 = (undefined *)0x0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a88 & 1) == 0) {
    puVar5 = (undefined *)0x1136d2a88;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107709600(0x1137071a0);
      puVar5 = (undefined *)0x0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a90 & 1) == 0) {
    puVar5 = (undefined *)0x1136d2a90;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x0001077095f0(0x1137071d8);
      puVar5 = (undefined *)0x0;
      ___cxa_guard_release();
    }
  }
  func_0x00010770baa4();
  func_0x000107717e74();
  func_0x00010770c8b0();
  if ((unaff_x22 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    iStack_d58 = 0;
    func_0x000107718e04();
    func_0x00010770c178();
    func_0x00010770d358();
    func_0x000107714830();
    if (iStack_d58 == 0) {
      func_0x0001077112a4();
      func_0x00010770d358();
      func_0x000107714830();
    }
    func_0x00010770d800();
    func_0x00010770f2d8();
    func_0x000107712b14();
    if (((ulong)puVar5 & 1) == 0) {
      uVar7 = 0;
      iVar6 = 6;
    }
    else {
      iVar6 = (int)auStack_ea0;
      iStack_ea8 = 0;
      func_0x00010770a524();
      func_0x00010770cc68();
      func_0x000107714838();
      if (iStack_ea8 == 0) {
        func_0x000107711aec();
        func_0x00010770cc68();
        func_0x000107714838();
      }
      uVar7 = SUB81(auStack_f80,0);
      func_0x00010770d748();
      func_0x000107715614(0x4054400000000000);
      func_0x00010770b04c();
      func_0x000107714898();
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x00010756e584();
        func_0x0001077156f4();
        iVar6 = 0;
        if ((bool)in_ZR) {
          iVar6 = 6;
        }
        func_0x000107714858();
      }
      else {
        func_0x0001077193d8();
      }
      func_0x00010771492c();
      func_0x000107714888();
      func_0x000107714860();
    }
    func_0x000107714860();
    func_0x000107714830();
    func_0x000107714848();
    uVar1 = iVar6 == 6;
    if (((bool)uVar1) || (iVar6 == 0)) {
      iStack_d58 = 0;
      func_0x000107718e04();
      func_0x00010770c178();
      func_0x00010770c1a0();
      func_0x000107714830();
      if (iStack_d58 == 0) {
        func_0x0001077112a4();
        func_0x00010770c184();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x00010770f2d8();
      func_0x000107714ddc();
      func_0x00010770d3d4();
      func_0x000107714898();
      if ((bool)uVar1) {
        func_0x000107714870();
        func_0x00010756e584();
        func_0x0001077156f4();
        iVar6 = 4;
        if ((bool)uVar1) {
          iVar6 = 0;
        }
        func_0x000107714858();
      }
      else {
        func_0x00010771904c();
      }
      func_0x000107714830();
      func_0x000107714850();
      func_0x000107714890();
    }
    else {
      uVar7 = 0;
    }
    in_ZR = iVar6 == 4;
    if (!(bool)in_ZR) {
      in_ZR = iVar6 == 2;
      if ((bool)in_ZR) {
        uVar7 = 1;
      }
      else if (iVar6 != 0) goto code_r0x00010768e5b0;
    }
  }
  uStack_db8 = uVar7;
  func_0x00010770cbb4();
  func_0x000107714890();
code_r0x00010768e5b0:
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2a90);
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 10768e24c; end: 10768e373;  */

void FUN_10768e24c(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  ulong unaff_x22;
  undefined1 uVar4;
  undefined1 auStack_240 [216];
  int iStack_168;
  undefined1 auStack_160 [232];
  undefined1 uStack_78;
  int iStack_18;
  
  func_0x00010771fea0();
  func_0x000107707564();
  if ((bRam00000001136d2a70 & 1) == 0) {
    iVar3 = 0x136d2a70;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077142ac(0x1137070f8);
      ___cxa_guard_release(0x1136d2a70);
    }
  }
  if ((bRam00000001136d2a78 & 1) == 0) {
    iVar3 = 0x136d2a78;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010771429c(0x113707130);
      ___cxa_guard_release(0x1136d2a78);
    }
  }
  func_0x000107709040();
  func_0x00010770ef48();
  func_0x00010770c8b0();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107709040();
    func_0x000107714664();
    func_0x00010770d5d0();
  }
  func_0x000107708918();
  func_0x000107714850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2a78);
  func_0x0001077149ec();
  uVar2 = 0;
  func_0x0001077184d0();
  func_0x000107707670();
  if ((bRam00000001136d2a80 & 1) == 0) {
    uVar2 = 0x1136d2a80;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x00010771b5c8(0x113707168);
      uVar2 = 0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a88 & 1) == 0) {
    uVar2 = 0x1136d2a88;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x000107709600(0x1137071a0);
      uVar2 = 0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d2a90 & 1) == 0) {
    uVar2 = 0x1136d2a90;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x0001077095f0(0x1137071d8);
      uVar2 = 0;
      ___cxa_guard_release();
    }
  }
  func_0x00010770baa4();
  func_0x000107717e74();
  func_0x00010770c8b0();
  if ((unaff_x22 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    iStack_18 = 0;
    func_0x000107718e04();
    func_0x00010770c178();
    func_0x00010770d358();
    func_0x000107714830();
    if (iStack_18 == 0) {
      func_0x0001077112a4();
      func_0x00010770d358();
      func_0x000107714830();
    }
    func_0x00010770d800();
    func_0x00010770f2d8();
    func_0x000107712b14();
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      iVar3 = 6;
    }
    else {
      iVar3 = (int)auStack_160;
      iStack_168 = 0;
      func_0x00010770a524();
      func_0x00010770cc68();
      func_0x000107714838();
      if (iStack_168 == 0) {
        func_0x000107711aec();
        func_0x00010770cc68();
        func_0x000107714838();
      }
      uVar4 = SUB81(auStack_240,0);
      func_0x00010770d748();
      func_0x000107715614(0x4054400000000000);
      func_0x00010770b04c();
      func_0x000107714898();
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x00010756e584();
        func_0x0001077156f4();
        iVar3 = 0;
        if ((bool)in_ZR) {
          iVar3 = 6;
        }
        func_0x000107714858();
      }
      else {
        func_0x0001077193d8();
      }
      func_0x00010771492c();
      func_0x000107714888();
      func_0x000107714860();
    }
    func_0x000107714860();
    func_0x000107714830();
    func_0x000107714848();
    uVar1 = iVar3 == 6;
    if (((bool)uVar1) || (iVar3 == 0)) {
      iStack_18 = 0;
      func_0x000107718e04();
      func_0x00010770c178();
      func_0x00010770c1a0();
      func_0x000107714830();
      if (iStack_18 == 0) {
        func_0x0001077112a4();
        func_0x00010770c184();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x00010770f2d8();
      func_0x000107714ddc();
      func_0x00010770d3d4();
      func_0x000107714898();
      if ((bool)uVar1) {
        func_0x000107714870();
        func_0x00010756e584();
        func_0x0001077156f4();
        iVar3 = 4;
        if ((bool)uVar1) {
          iVar3 = 0;
        }
        func_0x000107714858();
      }
      else {
        func_0x00010771904c();
      }
      func_0x000107714830();
      func_0x000107714850();
      func_0x000107714890();
    }
    else {
      uVar4 = 0;
    }
    in_ZR = iVar3 == 4;
    if (!(bool)in_ZR) {
      in_ZR = iVar3 == 2;
      if ((bool)in_ZR) {
        uVar4 = 1;
      }
      else if (iVar3 != 0) goto code_r0x00010768e5b0;
    }
  }
  uStack_78 = uVar4;
  func_0x00010770cbb4();
  func_0x000107714890();
code_r0x00010768e5b0:
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2a90);
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 107693b94; end: 107693c07;  */

/* WARNING: Removing unreachable block (ram,0x0001076946a0) */
/* WARNING: Removing unreachable block (ram,0x0001076946b4) */
/* WARNING: Removing unreachable block (ram,0x0001076948bc) */
/* WARNING: Removing unreachable block (ram,0x0001076946cc) */
/* WARNING: Removing unreachable block (ram,0x00010769490c) */
/* WARNING: Removing unreachable block (ram,0x0001076946d8) */
/* WARNING: Removing unreachable block (ram,0x0001076948c8) */
/* WARNING: Removing unreachable block (ram,0x0001076946e8) */
/* WARNING: Removing unreachable block (ram,0x000107694704) */
/* WARNING: Removing unreachable block (ram,0x000107694914) */
/* WARNING: Removing unreachable block (ram,0x000107694928) */
/* WARNING: Removing unreachable block (ram,0x00010769492c) */
/* WARNING: Removing unreachable block (ram,0x000107694930) */
/* WARNING: Removing unreachable block (ram,0x000107694940) */
/* WARNING: Removing unreachable block (ram,0x000107694b44) */
/* WARNING: Removing unreachable block (ram,0x000107694958) */
/* WARNING: Removing unreachable block (ram,0x000107694b6c) */
/* WARNING: Removing unreachable block (ram,0x000107694964) */
/* WARNING: Removing unreachable block (ram,0x000107694b50) */
/* WARNING: Removing unreachable block (ram,0x000107694974) */
/* WARNING: Removing unreachable block (ram,0x000107694990) */
/* WARNING: Removing unreachable block (ram,0x000107694b74) */
/* WARNING: Removing unreachable block (ram,0x000107694b84) */
/* WARNING: Removing unreachable block (ram,0x000107694b8c) */
/* WARNING: Removing unreachable block (ram,0x000107694b90) */
/* WARNING: Removing unreachable block (ram,0x000107694b94) */
/* WARNING: Removing unreachable block (ram,0x000107694ba4) */
/* WARNING: Removing unreachable block (ram,0x000107694bbc) */
/* WARNING: Removing unreachable block (ram,0x000107694bc0) */
/* WARNING: Removing unreachable block (ram,0x0001076941fc) */
/* WARNING: Removing unreachable block (ram,0x000107694210) */
/* WARNING: Removing unreachable block (ram,0x0001076947f4) */
/* WARNING: Removing unreachable block (ram,0x000107694228) */
/* WARNING: Removing unreachable block (ram,0x000107694828) */
/* WARNING: Removing unreachable block (ram,0x000107694234) */
/* WARNING: Removing unreachable block (ram,0x000107694800) */
/* WARNING: Removing unreachable block (ram,0x000107694244) */
/* WARNING: Removing unreachable block (ram,0x000107694260) */
/* WARNING: Removing unreachable block (ram,0x000107694830) */
/* WARNING: Removing unreachable block (ram,0x000107694844) */
/* WARNING: Removing unreachable block (ram,0x000107694848) */
/* WARNING: Removing unreachable block (ram,0x00010769484c) */
/* WARNING: Removing unreachable block (ram,0x000107694998) */
/* WARNING: Removing unreachable block (ram,0x00010769485c) */
/* WARNING: Removing unreachable block (ram,0x0001076948d0) */
/* WARNING: Removing unreachable block (ram,0x000107694874) */
/* WARNING: Removing unreachable block (ram,0x0001076949f4) */
/* WARNING: Removing unreachable block (ram,0x000107694880) */
/* WARNING: Removing unreachable block (ram,0x0001076948dc) */
/* WARNING: Removing unreachable block (ram,0x000107694890) */
/* WARNING: Removing unreachable block (ram,0x0001076948ac) */
/* WARNING: Removing unreachable block (ram,0x0001076949fc) */
/* WARNING: Removing unreachable block (ram,0x000107694a0c) */
/* WARNING: Removing unreachable block (ram,0x000107694a14) */
/* WARNING: Removing unreachable block (ram,0x000107694a18) */
/* WARNING: Removing unreachable block (ram,0x000107694a1c) */
/* WARNING: Removing unreachable block (ram,0x000107694a2c) */
/* WARNING: Removing unreachable block (ram,0x000107694a44) */
/* WARNING: Removing unreachable block (ram,0x000107694a48) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Removing unreachable block (ram,0x000107694a8c) */
/* WARNING: Removing unreachable block (ram,0x000107694aac) */
/* WARNING: Removing unreachable block (ram,0x000107694b00) */
/* WARNING: Removing unreachable block (ram,0x000107694ad8) */
/* WARNING: Removing unreachable block (ram,0x000107694af0) */
/* WARNING: Removing unreachable block (ram,0x000107694b04) */
/* WARNING: Removing unreachable block (ram,0x000107694b18) */
/* WARNING: Removing unreachable block (ram,0x000107694b1c) */
/* WARNING: Removing unreachable block (ram,0x000107694b20) */
/* WARNING: Removing unreachable block (ram,0x000107694b2c) */
/* WARNING: Removing unreachable block (ram,0x0001076940e8) */
/* WARNING: Removing unreachable block (ram,0x000107694100) */
/* WARNING: Removing unreachable block (ram,0x0001076945d4) */
/* WARNING: Removing unreachable block (ram,0x0001076945ec) */
/* WARNING: Removing unreachable block (ram,0x000107694604) */
/* WARNING: Removing unreachable block (ram,0x0001076948f8) */
/* WARNING: Removing unreachable block (ram,0x000107694618) */
/* WARNING: Removing unreachable block (ram,0x000107694b3c) */
/* WARNING: Removing unreachable block (ram,0x000107694624) */
/* WARNING: Removing unreachable block (ram,0x000107694b58) */
/* WARNING: Removing unreachable block (ram,0x000107694638) */
/* WARNING: Removing unreachable block (ram,0x000107694bc4) */
/* WARNING: Removing unreachable block (ram,0x000107694650) */
/* WARNING: Removing unreachable block (ram,0x000107694bd4) */
/* WARNING: Removing unreachable block (ram,0x000107694bd8) */
/* WARNING: Removing unreachable block (ram,0x000107694be0) */
/* WARNING: Removing unreachable block (ram,0x000107694be8) */
/* WARNING: Removing unreachable block (ram,0x000107694580) */
/* WARNING: Removing unreachable block (ram,0x000107694598) */
/* WARNING: Removing unreachable block (ram,0x000107694c04) */
/* WARNING: Removing unreachable block (ram,0x000107694c24) */
/* WARNING: Removing unreachable block (ram,0x000107694c74) */
/* WARNING: Removing unreachable block (ram,0x000107694c50) */
/* WARNING: Removing unreachable block (ram,0x000107694c64) */
/* WARNING: Removing unreachable block (ram,0x000107694c78) */
/* WARNING: Removing unreachable block (ram,0x000107694c8c) */
/* WARNING: Removing unreachable block (ram,0x000107694c90) */
/* WARNING: Removing unreachable block (ram,0x000107694c94) */
/* WARNING: Removing unreachable block (ram,0x000107694ca0) */
/* WARNING: Removing unreachable block (ram,0x00010769413c) */
/* WARNING: Removing unreachable block (ram,0x00010769466c) */
/* WARNING: Removing unreachable block (ram,0x000107694154) */
/* WARNING: Removing unreachable block (ram,0x00010769416c) */
/* WARNING: Removing unreachable block (ram,0x000107694814) */
/* WARNING: Removing unreachable block (ram,0x000107694180) */
/* WARNING: Removing unreachable block (ram,0x0001076948b4) */
/* WARNING: Removing unreachable block (ram,0x00010769418c) */
/* WARNING: Removing unreachable block (ram,0x0001076948e4) */
/* WARNING: Removing unreachable block (ram,0x0001076941a0) */
/* WARNING: Removing unreachable block (ram,0x000107694a4c) */
/* WARNING: Removing unreachable block (ram,0x0001076941b8) */
/* WARNING: Removing unreachable block (ram,0x000107694a5c) */
/* WARNING: Removing unreachable block (ram,0x000107694a60) */
/* WARNING: Removing unreachable block (ram,0x000107694a68) */
/* WARNING: Removing unreachable block (ram,0x000107694a70) */

void FUN_107693b94(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint unaff_w26;
  undefined1 auStack_458 [224];
  undefined1 auStack_378 [216];
  undefined4 uStack_2a0;
  byte abStack_298 [120];
  int iStack_220;
  undefined1 auStack_218 [104];
  undefined4 uStack_1b0;
  ulong uStack_170;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_b8 [136];
  
  func_0x0001077078a8();
  func_0x000107711b6c(auStack_b8);
  func_0x00010771577c();
  if ((bool)in_ZR) {
    func_0x000107715228();
    func_0x0001077087b4();
    func_0x00010770c3dc();
    func_0x000107714890();
  }
  else {
    func_0x0001077096cc();
  }
  func_0x00010770cd34();
  func_0x000107707e80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770d760();
  func_0x00010770cd34();
  func_0x0001077149ec();
  puVar5 = &DAT_107693c08;
  func_0x000107715308();
  puStack_d0 = &stack0xfffffffffffffff0;
  puStack_c8 = puVar5;
  func_0x000107707444();
  if ((bRam00000001136d2cd0 & 1) == 0) {
    iVar3 = 0x136d2cd0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770dbc0(0x113708160);
      ___cxa_guard_release(0x1136d2cd0);
    }
  }
  if ((bRam00000001136d2cd8 & 1) == 0) {
    iVar3 = 0x136d2cd8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077149b4(0x113708198,&DAT_10f2f495c);
      ___cxa_guard_release(0x1136d2cd8);
    }
  }
  if ((bRam00000001136d2ce0 & 1) == 0) {
    iVar3 = 0x136d2ce0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ba94(0x1137081d0);
      ___cxa_guard_release(0x1136d2ce0);
    }
  }
  if ((bRam00000001136d2ce8 & 1) == 0) {
    iVar3 = 0x136d2ce8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077095a0(0x113708208);
      ___cxa_guard_release(0x1136d2ce8);
    }
  }
  if ((bRam00000001136d2cf0 & 1) == 0) {
    iVar3 = 0x136d2cf0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107709658(0x113708240);
      ___cxa_guard_release(0x1136d2cf0);
    }
  }
  if ((bRam00000001136d2cf8 & 1) == 0) {
    iVar3 = 0x136d2cf8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ba84(0x113708278);
      ___cxa_guard_release(0x1136d2cf8);
    }
  }
  if ((bRam00000001136d2d00 & 1) == 0) {
    iVar3 = 0x136d2d00;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770984c(0x1137082b0);
      ___cxa_guard_release(0x1136d2d00);
    }
  }
  if ((bRam00000001136d2d08 & 1) == 0) {
    iVar3 = 0x136d2d08;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077098bc(0x1137082e8);
      ___cxa_guard_release(0x1136d2d08);
    }
  }
  if ((bRam00000001136d2d10 & 1) == 0) {
    iVar3 = 0x136d2d10;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a12c(0x113708320);
      ___cxa_guard_release(0x1136d2d10);
    }
  }
  if ((bRam00000001136d2d18 & 1) == 0) {
    iVar3 = 0x136d2d18;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770b2e8(0x113708358);
      ___cxa_guard_release(0x1136d2d18);
    }
  }
  if ((bRam00000001136d2d20 & 1) == 0) {
    iVar3 = 0x136d2d20;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107709adc(0x113708390);
      ___cxa_guard_release(0x1136d2d20);
    }
  }
  if ((bRam00000001136d2d28 & 1) == 0) {
    iVar3 = 0x136d2d28;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770b448(0x1137083c8);
      ___cxa_guard_release(0x1136d2d28);
    }
  }
  if ((bRam00000001136d2d30 & 1) == 0) {
    iVar3 = 0x136d2d30;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a18c(0x113708400);
      ___cxa_guard_release(0x1136d2d30);
    }
  }
  if ((bRam00000001136d2d38 & 1) == 0) {
    iVar3 = 0x136d2d38;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770dcc0(0x113708438);
      ___cxa_guard_release(0x1136d2d38);
    }
  }
  if ((bRam00000001136d2d40 & 1) == 0) {
    iVar3 = 0x136d2d40;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770f718(0x113708470);
      ___cxa_guard_release(0x1136d2d40);
    }
  }
  if ((bRam00000001136d2d48 & 1) == 0) {
    iVar3 = 0x136d2d48;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a850(0x1137084a8);
      ___cxa_guard_release(0x1136d2d48);
    }
  }
  if ((bRam00000001136d2d50 & 1) == 0) {
    iVar3 = 0x136d2d50;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ab38(0x1137084e0);
      ___cxa_guard_release(0x1136d2d50);
    }
  }
  if ((bRam00000001136d2d58 & 1) == 0) {
    iVar3 = 0x136d2d58;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a0ec(0x113708518);
      ___cxa_guard_release(0x1136d2d58);
    }
  }
  if ((bRam00000001136d2d60 & 1) == 0) {
    iVar3 = 0x136d2d60;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010771237c(0x113708550);
      ___cxa_guard_release(0x1136d2d60);
    }
  }
  uStack_1b0 = 0;
  func_0x00010770ce44();
  pbVar4 = abStack_298;
  func_0x00010771ae00();
  func_0x000107714838();
  uVar7 = 0x1137081d0;
  uVar1 = iStack_220 == 1;
  if ((bool)uVar1) {
    func_0x00010771d7a0();
    func_0x00010770c29c(pbVar4);
    func_0x0001077185d8();
    if (!(bool)uVar1) goto code_r0x000107693df8;
    func_0x000107716cc4();
    func_0x000104c32db4();
    if ((int)pbVar4 == 0) {
      func_0x000107710660();
      func_0x000107710d1c();
      func_0x0001077100bc();
      if (((ulong)pbVar4 & 1) != 0) {
        func_0x00010770ce44();
        func_0x00010770f3d4();
        func_0x00010770d8b0();
        func_0x0001077170ec();
        func_0x00010770f0f4();
        func_0x00010770d21c();
        func_0x000107714848();
        func_0x000107714898();
        if ((bool)uVar1) {
          func_0x000107714870();
          func_0x000107710d80();
          func_0x000107714858();
          func_0x000107710328();
          uStack_170 = 0x1137081d0;
          func_0x000107707620();
          func_0x000107714bc8();
          func_0x000107714898();
          if (!(bool)uVar1) goto code_r0x00010769433c;
          func_0x000107714870();
          func_0x0001077087c8();
          func_0x0001077154dc();
          func_0x00010770d8b0();
          func_0x000107714858();
          func_0x00010771b914();
          uVar6 = 2;
          if ((bool)uVar1) {
            uVar6 = 0;
          }
          uVar7 = (ulong)uVar6;
        }
        else {
code_r0x00010769433c:
          func_0x00010771552c();
        }
        func_0x0001077158a8();
        func_0x00010770d270();
        func_0x00010770ce50();
        if (unaff_w26 == 0) goto code_r0x000107693f9c;
        func_0x000107707b18();
        func_0x000107714898();
        if ((bool)uVar1) {
          func_0x000107714870();
          func_0x000107708634();
          func_0x000107707b00();
          goto code_r0x000107694528;
        }
        goto code_r0x0001076949ac;
      }
      func_0x00010770d270();
      func_0x00010770ce50();
code_r0x000107693f9c:
      func_0x000107710e20();
      func_0x00010770bf98();
      func_0x000107710e14();
      if (((ulong)pbVar4 & 1) != 0) {
        func_0x00010770e054();
        func_0x0001077167d4();
        if ((bool)uVar1) {
          func_0x000107716070();
          func_0x000107715344();
          uVar6 = 0;
          if ((bool)uVar1) {
            uVar6 = 8;
          }
          uVar7 = (ulong)uVar6;
        }
        else {
          func_0x000107709cb4();
          func_0x00010770fdec();
          func_0x0001077159ec();
          func_0x00010771552c();
        }
        func_0x00010770ce50();
        func_0x00010770c23c();
        func_0x00010770c534();
        uVar2 = (uVar7 & 7) == 0;
        if ((bool)uVar2) {
          uVar1 = 1;
          if ((unaff_w26 & 1) != 0) {
            func_0x00010770e054();
            func_0x0001077167d4();
            if ((bool)uVar2) {
              func_0x000107716070();
              if ((*pbVar4 & 1) == 0) {
                unaff_w26 = 0;
                uVar7 = 6;
              }
              else {
                func_0x00010770ce44();
                func_0x00010770f3d4();
                func_0x00010770d8b0();
                func_0x0001077170ec();
                func_0x00010770f0f4();
                func_0x00010770d21c();
                func_0x000107714848();
                func_0x000107714898();
                if ((bool)uVar2) {
                  func_0x000107714870();
                  func_0x000107710d80();
                  func_0x000107714858();
                  func_0x000107710328();
                  uStack_170 = uVar7;
                  func_0x000107707620();
                  func_0x000107714bc8();
                  func_0x000107714898();
                  if (!(bool)uVar2) goto code_r0x000107694808;
                  func_0x000107714870();
                  func_0x00010770d67c(pbVar4);
                  func_0x0001077154dc();
                  func_0x00010771aa20();
                  uVar6 = 6;
                  if ((bool)uVar2) {
                    uVar6 = 0;
                  }
                  uVar7 = (ulong)uVar6;
                  func_0x0001077148e8();
                  func_0x000107714858();
                }
                else {
code_r0x000107694808:
                  func_0x00010771552c();
                }
                func_0x0001077158a8();
              }
            }
            else {
              func_0x00010770e34c();
              func_0x00010770dfa4();
              func_0x000107715378();
              func_0x00010771552c();
            }
            func_0x00010770ce50();
            goto code_r0x000107694484;
          }
          goto code_r0x0001076944cc;
        }
        unaff_w26 = 1;
code_r0x000107694484:
        uVar1 = (int)uVar7 == 6;
        if (((bool)uVar1) || ((int)uVar7 == 0)) {
          if ((unaff_w26 & 1) != 0) {
            func_0x000107710e20();
            func_0x00010770bf98();
            func_0x000107710e14();
            if (((ulong)pbVar4 & 1) == 0) goto code_r0x0001076944c4;
            func_0x00010770e054();
            func_0x0001077167d4();
            if ((bool)uVar1) {
              func_0x000107716070();
              func_0x000107715344();
              uVar6 = 0;
              if ((bool)uVar1) {
                uVar6 = 0xc;
              }
              uVar7 = (ulong)uVar6;
            }
            else {
              func_0x000107709cb4();
              func_0x00010770fdec();
              func_0x0001077159ec();
              func_0x00010771552c();
            }
            func_0x00010770ce50();
            func_0x00010770c23c();
            func_0x00010770c534();
            uVar1 = (int)uVar7 == 0xc;
            if ((!(bool)uVar1) && ((int)uVar7 != 0)) goto code_r0x000107694754;
            if ((unaff_w26 & 1) == 0) goto code_r0x0001076944cc;
            func_0x00010770ce44();
            func_0x00010770f3d4();
            func_0x00010770d8b0();
            goto code_r0x00010769475c;
          }
          goto code_r0x0001076944cc;
        }
code_r0x000107694754:
        uVar1 = (uVar7 & 0xfffffffb) == 0;
        if ((bool)uVar1) {
code_r0x00010769475c:
          func_0x000107708648();
          func_0x000107714898();
          if (!(bool)uVar1) goto code_r0x0001076949ac;
          func_0x000107714870();
          func_0x000107708634();
          func_0x000107707b00();
          goto code_r0x000107694528;
        }
        goto code_r0x0001076949b0;
      }
code_r0x0001076944c4:
      func_0x00010770c23c();
      func_0x00010770c534();
code_r0x0001076944cc:
      func_0x000107713684();
      func_0x00010770f034(auStack_458);
      func_0x0001077100bc();
      if (((ulong)pbVar4 & 1) != 0) {
        func_0x00010770ce44();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x000107709b14();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x000107709b14();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x0001077091b4();
        func_0x000107714898();
        if ((bool)uVar1) {
          func_0x000107714870();
          func_0x00010770a7d4();
          func_0x000107716114();
          func_0x00010770c330();
          func_0x000107714858();
          func_0x000107709b14();
          func_0x00010770d7a8();
          func_0x00010770c330();
          func_0x00010771ebe4();
          func_0x00010770998c();
          func_0x00010770ff00();
          func_0x00010770c330();
          func_0x000107709b14();
          func_0x00010770d7a8();
          func_0x00010770c330();
          func_0x00010771ebd8();
          func_0x00010770998c();
          func_0x00010770ff00();
          func_0x00010770c330();
          func_0x00010770998c();
          func_0x00010770d7a8();
          func_0x00010770c330();
          goto code_r0x000107694508;
        }
        goto code_r0x0001076949a4;
      }
code_r0x000107694508:
      func_0x00010770d270();
      func_0x00010770ce50();
      func_0x00010770c148();
      func_0x000107714898();
      if (!(bool)uVar1) goto code_r0x0001076949ac;
      func_0x000107714870();
      func_0x000107708634();
      func_0x000107707b00();
code_r0x000107694528:
      func_0x00010770c814(auStack_378);
      func_0x000107714838();
      func_0x000107714830();
      func_0x000107714858();
      func_0x00010770d6a0(auStack_218);
code_r0x0001076940ac:
      uVar7 = 0;
      goto code_r0x0001076949b0;
    }
    func_0x000107707718();
    func_0x000107714898();
    if (!(bool)uVar1) goto code_r0x0001076949d4;
    func_0x000107714870();
    func_0x000107708634();
    func_0x000107707b00();
    func_0x00010770c814(auStack_218);
    func_0x000107714838();
    func_0x000107714830();
    func_0x000107714858();
  }
  else {
    uStack_2a0 = 0;
code_r0x000107693df8:
    func_0x000107710660();
    func_0x000107710d1c();
    func_0x0001077100bc();
    if (((ulong)pbVar4 & 1) == 0) {
      func_0x00010770d270();
      func_0x00010770ce50();
code_r0x000107693e28:
      func_0x000107710e20();
      func_0x00010770bf98();
      func_0x000107710e14();
      if (((ulong)pbVar4 & 1) == 0) {
code_r0x000107694028:
        func_0x00010770c23c();
        func_0x00010770c534();
      }
      else {
        func_0x00010770e054();
        func_0x0001077167d4();
        if ((bool)uVar1) {
          func_0x000107716070();
          func_0x000107715344();
          uVar6 = 0;
          if ((bool)uVar1) {
            uVar6 = 0x28;
          }
          uVar7 = (ulong)uVar6;
        }
        else {
          func_0x000107709cb4();
          func_0x00010770fdec();
          func_0x0001077159ec();
          func_0x00010771552c();
        }
        func_0x00010770ce50();
        func_0x00010770c23c();
        func_0x00010770c534();
        uVar1 = (int)uVar7 == 0x28;
        if ((!(bool)uVar1) && ((int)uVar7 != 0)) {
          unaff_w26 = 1;
code_r0x000107693fe8:
          uVar1 = (int)uVar7 == 0x26;
          if (((bool)uVar1) || ((int)uVar7 == 0)) {
            if ((unaff_w26 & 1) == 0) goto code_r0x000107694030;
            func_0x000107710e20();
            func_0x00010770bf98();
            func_0x000107710e14();
            if (((ulong)pbVar4 & 1) == 0) goto code_r0x000107694028;
            func_0x00010770e054();
            func_0x0001077167d4();
            if ((bool)uVar1) {
              func_0x000107716070();
              func_0x000107715344();
              uVar6 = 0;
              if ((bool)uVar1) {
                uVar6 = 0x2c;
              }
              uVar7 = (ulong)uVar6;
            }
            else {
              func_0x000107709cb4();
              func_0x00010770fdec();
              func_0x0001077159ec();
              func_0x00010771552c();
            }
            func_0x00010770ce50();
            func_0x00010770c23c();
            func_0x00010770c534();
            uVar1 = (int)uVar7 == 0x2c;
            if ((!(bool)uVar1) && ((int)uVar7 != 0)) goto code_r0x0001076943c0;
            if ((unaff_w26 & 1) == 0) goto code_r0x000107694030;
            func_0x00010770ce44();
            func_0x00010770f3d4();
            func_0x00010770d8b0();
          }
          else {
code_r0x0001076943c0:
            uVar1 = (int)uVar7 == 0x24;
            if ((!(bool)uVar1) && ((int)uVar7 != 0)) goto code_r0x0001076949b0;
          }
          func_0x000107708648();
          func_0x000107714898();
          if (!(bool)uVar1) goto code_r0x0001076949ac;
          func_0x000107714870();
          func_0x000107708634();
          func_0x000107707b00();
          goto code_r0x00010769408c;
        }
        if ((unaff_w26 & 1) != 0) {
          func_0x00010770e054();
          func_0x0001077167d4();
          if ((bool)uVar1) {
            func_0x000107716070();
            if ((*pbVar4 & 1) == 0) {
              unaff_w26 = 0;
              uVar7 = 0x26;
            }
            else {
              func_0x00010770ce44();
              func_0x00010770f3d4();
              func_0x00010770d8b0();
              func_0x0001077170ec();
              func_0x00010770f0f4();
              func_0x00010770d21c();
              func_0x000107714848();
              func_0x000107714898();
              if ((bool)uVar1) {
                func_0x000107714870();
                func_0x000107710d80();
                func_0x000107714858();
                func_0x000107710328();
                uStack_170 = uVar7;
                func_0x000107707620();
                func_0x000107714bc8();
                func_0x000107714898();
                if (!(bool)uVar1) goto code_r0x000107694464;
                func_0x000107714870();
                func_0x00010770d67c(pbVar4);
                func_0x0001077154dc();
                func_0x00010771aa20();
                uVar6 = 0x26;
                if ((bool)uVar1) {
                  uVar6 = 0;
                }
                uVar7 = (ulong)uVar6;
                func_0x0001077148e8();
                func_0x000107714858();
              }
              else {
code_r0x000107694464:
                func_0x00010771552c();
              }
              func_0x0001077158a8();
            }
          }
          else {
            func_0x00010770e34c();
            func_0x00010770dfa4();
            func_0x000107715378();
            func_0x00010771552c();
          }
          func_0x00010770ce50();
          goto code_r0x000107693fe8;
        }
      }
code_r0x000107694030:
      func_0x000107713684();
      func_0x00010770f034(auStack_458);
      func_0x0001077100bc();
      if (((ulong)pbVar4 & 1) != 0) {
        func_0x00010770ce44();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x000107709b14();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x000107709b14();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x0001077091b4();
        func_0x000107714898();
        if (!(bool)uVar1) {
code_r0x0001076949a4:
          func_0x00010770d270();
          func_0x00010770ce50();
          goto code_r0x0001076949ac;
        }
        func_0x000107714870();
        func_0x00010770a7d4();
        func_0x000107716114();
        func_0x00010770c330();
        func_0x000107714858();
        func_0x000107709b14();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x00010771ebe4();
        func_0x00010770998c();
        func_0x00010770ff00();
        func_0x00010770c330();
        func_0x000107709b14();
        func_0x00010770d7a8();
        func_0x00010770c330();
        func_0x00010771ebd8();
        func_0x00010770998c();
        func_0x00010770ff00();
        func_0x00010770c330();
        func_0x00010770998c();
        func_0x00010770d7a8();
        func_0x00010770c330();
      }
      func_0x00010770d270();
      func_0x00010770ce50();
      func_0x00010770c148();
      func_0x000107714898();
      if ((bool)uVar1) {
        func_0x000107714870();
        func_0x000107708634();
        func_0x000107707b00();
code_r0x00010769408c:
        func_0x00010770c814(auStack_378);
        func_0x000107714838();
        func_0x000107714830();
        func_0x000107714858();
        func_0x00010770d6a0(auStack_218);
        goto code_r0x0001076940ac;
      }
code_r0x0001076949ac:
      uVar7 = 1;
    }
    else {
      func_0x00010770ce44();
      func_0x00010770f3d4();
      func_0x00010770d8b0();
      func_0x0001077170ec();
      func_0x00010770f0f4();
      func_0x00010770d21c();
      func_0x000107714848();
      func_0x000107714898();
      if ((bool)uVar1) {
        func_0x000107714870();
        func_0x000107710d80();
        func_0x000107714858();
        func_0x000107710328();
        uStack_170 = 0x1137081d0;
        func_0x000107707620();
        func_0x000107714bc8();
        func_0x000107714898();
        if (!(bool)uVar1) goto code_r0x000107693f30;
        func_0x000107714870();
        func_0x0001077087c8();
        func_0x0001077154dc();
        func_0x00010770d8b0();
        func_0x000107714858();
        func_0x00010771b914();
        uVar6 = 0x22;
        if ((bool)uVar1) {
          uVar6 = 0;
        }
        uVar7 = (ulong)uVar6;
      }
      else {
code_r0x000107693f30:
        func_0x00010771552c();
      }
      func_0x0001077158a8();
      func_0x00010770d270();
      func_0x00010770ce50();
      uVar1 = (int)uVar7 == 0x22;
      if (((bool)uVar1) || ((int)uVar7 == 0)) {
        if (unaff_w26 == 0) goto code_r0x000107693e28;
        func_0x000107707b18();
        func_0x000107714898();
        if (!(bool)uVar1) goto code_r0x0001076949ac;
        func_0x000107714870();
        func_0x000107708634();
        func_0x000107707b00();
        goto code_r0x00010769408c;
      }
    }
code_r0x0001076949b0:
    func_0x000107710ce8();
    if ((int)uVar7 != 0) goto code_r0x0001076949d4;
  }
  func_0x000107579348();
  func_0x00010770d118(1);
  func_0x000107714890();
code_r0x0001076949d4:
  func_0x00010770ce5c();
  func_0x000107713468();
  func_0x0001077117dc();
  func_0x000107708038();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2d60);
  do {
    func_0x000107714988();
    func_0x0001077117dc();
  } while( true );
}



/* Entry: 107698fc4; end: 1076992b3;  */

/* WARNING: Removing unreachable block (ram,0x00010769aa48) */
/* WARNING: Removing unreachable block (ram,0x00010769aa68) */
/* WARNING: Removing unreachable block (ram,0x00010769aaa0) */

void FUN_107698fc4(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long unaff_x19;
  byte bVar11;
  undefined8 ***unaff_x21;
  undefined1 ***unaff_x22;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x24;
  undefined1 ***unaff_x27;
  undefined1 *unaff_x28;
  undefined8 in_stack_00000040;
  undefined1 auStack_1930 [112];
  undefined1 auStack_18c0 [64];
  undefined1 *puStack_1880;
  undefined1 ***pppuStack_1878;
  undefined8 *puStack_1870;
  undefined8 *puStack_1868;
  undefined8 *puStack_1860;
  undefined1 *puStack_1858;
  undefined1 *puStack_1850;
  undefined1 *puStack_1848;
  undefined8 ******ppppppuStack_1840;
  undefined *puStack_1838;
  undefined1 auStack_1808 [112];
  undefined1 auStack_1798 [104];
  undefined4 uStack_1730;
  undefined8 *puStack_1720;
  undefined1 *puStack_1718;
  undefined1 *puStack_1710;
  undefined8 *puStack_1708;
  undefined8 ******ppppppuStack_1700;
  code *pcStack_16f8;
  undefined8 auStack_16d8 [3];
  undefined1 auStack_16c0 [8];
  undefined8 uStack_16b8;
  undefined4 uStack_1658;
  undefined1 auStack_1650 [8];
  undefined8 uStack_1648;
  int iStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  int iStack_1578;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  int iStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  int iStack_1490;
  undefined1 auStack_1488 [104];
  undefined4 uStack_1420;
  undefined1 auStack_1400 [48];
  undefined8 ******ppppppuStack_13d0;
  undefined *puStack_13c8;
  undefined8 uStack_1398;
  byte abStack_1390 [112];
  undefined8 auStack_1320 [12];
  int iStack_12c0;
  undefined1 auStack_12b8 [104];
  undefined4 uStack_1250;
  undefined8 ******ppppppuStack_1200;
  undefined *puStack_11f8;
  int iStack_1060;
  undefined1 *puStack_fe0;
  undefined1 ***pppuStack_fd8;
  undefined1 *puStack_fd0;
  undefined1 *puStack_fc8;
  undefined8 uStack_fc0;
  undefined1 *puStack_fb8;
  undefined8 *****pppppuStack_fb0;
  undefined *puStack_fa8;
  undefined1 auStack_f18 [128];
  undefined1 auStack_e98 [216];
  int iStack_dc0;
  undefined1 *puStack_d40;
  undefined1 ***pppuStack_d38;
  undefined1 *puStack_d30;
  undefined1 *puStack_d28;
  undefined1 *puStack_d20;
  undefined1 *puStack_d18;
  undefined8 ****ppppuStack_d10;
  undefined *puStack_d08;
  undefined1 uStack_cf0;
  undefined1 auStack_c88 [128];
  undefined1 auStack_c08 [112];
  undefined1 auStack_b98 [216];
  int iStack_ac0;
  undefined8 *puStack_ab0;
  undefined1 *puStack_aa8;
  undefined8 **ppuStack_aa0;
  undefined1 ***pppuStack_a98;
  undefined1 *puStack_a90;
  undefined8 ***pppuStack_a80;
  undefined *puStack_a78;
  undefined1 *puStack_a70;
  undefined8 **ppuStack_a68;
  undefined1 auStack_a60 [112];
  undefined8 *apuStack_9f0 [14];
  undefined8 **appuStack_980 [14];
  undefined1 auStack_910 [112];
  undefined1 **appuStack_8a0 [14];
  undefined1 auStack_830 [136];
  undefined1 auStack_7a8 [96];
  int iStack_748;
  undefined1 auStack_740 [112];
  byte bStack_6d0;
  undefined1 auStack_6c8 [120];
  undefined8 auStack_650 [14];
  undefined1 auStack_5e0 [112];
  undefined1 auStack_570 [120];
  int iStack_4f8;
  undefined1 auStack_4f0 [104];
  undefined4 uStack_488;
  undefined1 **appuStack_480 [7];
  undefined1 *puStack_448;
  undefined8 **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined1 auStack_378 [104];
  int iStack_310;
  byte bStack_288;
  undefined1 auStack_280 [192];
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_178 [104];
  int iStack_110;
  byte bStack_88;
  undefined1 auStack_80 [128];
  
  func_0x00010771cb70();
  func_0x0001077073b8();
  if ((bRam00000001136d2f60 & 1) == 0) {
    iVar3 = 0x136d2f60;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f50(0x113709318);
      ___cxa_guard_release(0x1136d2f60);
    }
  }
  if ((bRam00000001136d2f68 & 1) == 0) {
    iVar3 = 0x136d2f68;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f00(0x113709350);
      ___cxa_guard_release(0x1136d2f68);
    }
  }
  if ((bRam00000001136d2f70 & 1) == 0) {
    iVar3 = 0x136d2f70;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a1c0(0x113709388);
      ___cxa_guard_release(0x1136d2f70);
    }
  }
  if ((bRam00000001136d2f78 & 1) == 0) {
    iVar3 = 0x136d2f78;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ef0(0x1137093c0);
      ___cxa_guard_release(0x1136d2f78);
    }
  }
  if ((bRam00000001136d2f80 & 1) == 0) {
    iVar3 = 0x136d2f80;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ee0(0x1137093f8);
      ___cxa_guard_release(0x1136d2f80);
    }
  }
  func_0x00010770b614();
  func_0x000107709f2c();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_110 == 0) {
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
    if ((bStack_88 & 1) == 0) {
      func_0x000107711434();
      func_0x00010770ff30();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_107699114;
      func_0x000107714870();
      func_0x0001077183c8();
      func_0x000107714858();
    }
    func_0x00010770929c();
    func_0x00010770928c(auStack_80);
    func_0x0001077193e4();
    func_0x000107707b44(auStack_178);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
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
LAB_107699114:
  func_0x000107716464();
  func_0x000107715540();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2f80);
  func_0x000107714988();
  puVar10 = &DAT_1076992b4;
  func_0x00010771cb70();
  puStack_1c0 = &stack0x00000040;
  puStack_1b8 = puVar10;
  func_0x0001077073b8();
  if ((bRam00000001136d2f88 & 1) == 0) {
    iVar3 = 0x136d2f88;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f50(0x113709430);
      ___cxa_guard_release(0x1136d2f88);
    }
  }
  if ((bRam00000001136d2f90 & 1) == 0) {
    iVar3 = 0x136d2f90;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f00(0x113709468);
      ___cxa_guard_release(0x1136d2f90);
    }
  }
  if ((bRam00000001136d2f98 & 1) == 0) {
    iVar3 = 0x136d2f98;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a1c0(0x1137094a0);
      ___cxa_guard_release(0x1136d2f98);
    }
  }
  if ((bRam00000001136d2fa0 & 1) == 0) {
    iVar3 = 0x136d2fa0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ef0(0x1137094d8);
      ___cxa_guard_release(0x1136d2fa0);
    }
  }
  if ((bRam00000001136d2fa8 & 1) == 0) {
    iVar3 = 0x136d2fa8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ee0(0x113709510);
      ___cxa_guard_release(0x1136d2fa8);
    }
  }
  func_0x00010770b614();
  func_0x000107709f2c();
  puVar14 = auStack_378;
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_310 == 0) {
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
    if ((bStack_288 & 1) == 0) {
      func_0x000107711434();
      func_0x00010770ff30();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x000107699404;
      func_0x000107714870();
      func_0x0001077183c8();
      func_0x000107714858();
    }
    puVar14 = (undefined1 *)0x1137094d8;
    func_0x00010770929c();
    func_0x00010770928c(auStack_280);
    func_0x0001077193e4();
    func_0x000107707b44(auStack_378);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
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
code_r0x000107699404:
  func_0x000107716464();
  func_0x000107715540();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2fa8);
  func_0x000107714988();
  puVar10 = &DAT_1076995a4;
  func_0x0001077184d0();
  ppuStack_3b0 = &puStack_1c0;
  puStack_3a8 = puVar10;
  func_0x000107707444();
  if ((bRam00000001136d2fb0 & 1) == 0) {
    iVar3 = 0x136d2fb0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714098(0x113709548);
      ___cxa_guard_release(0x1136d2fb0);
    }
  }
  if ((bRam00000001136d2fb8 & 1) == 0) {
    iVar3 = 0x136d2fb8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a08(0x113709580,&DAT_10f300d4b);
      ___cxa_guard_release(0x1136d2fb8);
    }
  }
  if ((bRam00000001136d2fc0 & 1) == 0) {
    iVar3 = 0x136d2fc0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x1137095b8,&UNK_10f418354);
      ___cxa_guard_release(0x1136d2fc0);
    }
  }
  if ((bRam00000001136d2fc8 & 1) == 0) {
    iVar3 = 0x136d2fc8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ba74(0x1137095f0);
      ___cxa_guard_release(0x1136d2fc8);
    }
  }
  if ((bRam00000001136d2fd0 & 1) == 0) {
    iVar3 = 0x136d2fd0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714b38(0x113709628,&DAT_10f300d28);
      ___cxa_guard_release(0x1136d2fd0);
    }
  }
  if ((bRam00000001136d2fd8 & 1) == 0) {
    iVar3 = 0x136d2fd8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x113709660,&UNK_10f418367);
      ___cxa_guard_release(0x1136d2fd8);
    }
  }
  uStack_488 = 0;
  puVar4 = auStack_570;
  func_0x00010770d308();
  uVar2 = iStack_4f8 == 1;
  if ((bool)uVar2) {
    puVar4 = auStack_570;
    func_0x0001073405dc();
    puVar14 = auStack_5e0;
    func_0x00010770c30c(puVar4);
    unaff_x24 = auStack_650;
    func_0x00010770c454();
    func_0x0001077162d8();
    if ((bool)uVar2) {
      func_0x000107716c68();
      func_0x000107714974();
      if ((bool)uVar2) {
        func_0x00010770de5c();
        iStack_748 = 0;
        func_0x000107718348();
        func_0x0001077148fc();
        func_0x000107714860();
        func_0x000107714898();
        if ((bool)uVar2) {
          func_0x000107714870();
          func_0x000107717d84();
          func_0x000107714858();
          func_0x000107718438();
          puVar4 = auStack_830;
          puStack_448 = auStack_6c8;
          func_0x000107707730();
          func_0x000107715e10();
          func_0x000107719e10();
          if (!(bool)uVar2) {
code_r0x000107699954:
            func_0x000107709abc(auStack_830);
code_r0x00010769995c:
            func_0x000107715a6c();
            goto code_r0x000107699960;
          }
          func_0x000107718d84();
          func_0x00010770c43c(puVar4);
          puVar4 = auStack_7a8;
          func_0x000107714d3c();
          if (iStack_748 == 0) {
            if ((bStack_6d0 & 1) == 0) {
              unaff_x27 = appuStack_480;
              func_0x00010771703c();
              func_0x00010770efd4();
              func_0x0001077148e8();
              func_0x000107714898();
              if (!(bool)uVar2) {
code_r0x0001076999d8:
                unaff_x27 = appuStack_480;
                func_0x000107714888();
                goto code_r0x00010769995c;
              }
              func_0x000107714870();
              func_0x000107717dbc();
              func_0x000107714858();
            }
            puVar4 = auStack_7a8;
            func_0x000107714bd0(auStack_740,puVar4);
          }
          func_0x000107714888();
          func_0x000107714e68();
          func_0x00010770d748();
          func_0x0001077077b8();
          func_0x000107714898();
          if ((bool)uVar2) {
            func_0x000107714870();
            unaff_x21 = (undefined8 ***)appuStack_480;
            func_0x00010770c218(puVar4);
            unaff_x22 = appuStack_8a0;
            func_0x00010770c260();
            appuStack_980[0] = unaff_x22;
            func_0x000107717a60(auStack_910,auStack_830,appuStack_980);
            func_0x00010770c808(auStack_4f0);
            func_0x000107714890();
            func_0x000107714830();
            func_0x000107714850();
            func_0x000107714858();
            func_0x000107714888();
            func_0x000107714860();
            func_0x000107716248();
            func_0x00010771620c();
            goto code_r0x0001076999c8;
          }
          func_0x000107714888();
          puVar4 = auStack_7a8;
        }
        else {
code_r0x000107699960:
          func_0x0001077152f0();
        }
        func_0x00010726af18();
        func_0x000107716248();
        func_0x00010771620c();
      }
      else {
        func_0x00010770de5c();
        iStack_748 = 0;
        func_0x000107718348();
        func_0x0001077148fc();
        func_0x000107714860();
        func_0x000107714898();
        if (!(bool)uVar2) goto code_r0x000107699960;
        func_0x000107714870();
        func_0x000107717d84();
        func_0x000107714858();
        func_0x000107718438();
        puVar4 = auStack_830;
        puStack_448 = auStack_6c8;
        func_0x000107707730();
        func_0x000107715e10();
        func_0x000107719e10();
        if (!(bool)uVar2) goto code_r0x000107699954;
        func_0x000107718d84();
        func_0x00010770c43c(puVar4);
        puVar4 = auStack_7a8;
        func_0x000107714d3c();
        uVar1 = uVar2;
        if (iStack_748 == 0) {
          if ((bStack_6d0 & 1) == 0) {
            unaff_x27 = appuStack_480;
            func_0x00010771703c();
            func_0x00010770efd4();
            func_0x0001077148e8();
            func_0x000107714898();
            if (!(bool)uVar2) goto code_r0x0001076999d8;
            func_0x000107714870();
            func_0x000107717dbc();
            func_0x000107714858();
          }
          func_0x000107714bd0(auStack_740,auStack_7a8);
          uVar1 = uVar2;
        }
        func_0x000107714888();
        func_0x0001077100ec();
        func_0x00010770d748();
        puVar4 = auStack_830;
        func_0x00010770815c();
        func_0x000107719e10();
        if ((bool)uVar1) {
          func_0x000107718d84();
          unaff_x27 = appuStack_8a0;
          func_0x00010770d67c(puVar4);
          func_0x00010770f7f4();
          func_0x0001077077b8();
          func_0x000107714898();
          uVar2 = uVar1;
          if ((bool)uVar1) {
            func_0x000107714870();
            unaff_x21 = appuStack_980;
            func_0x00010770c218(puVar4);
            unaff_x22 = (undefined1 ***)apuStack_9f0;
            func_0x00010770c260();
            puStack_a70 = auStack_910;
            puVar4 = auStack_a60;
            ppuStack_a68 = unaff_x22;
            func_0x000107716188(puVar4,appuStack_480,&puStack_a70);
            func_0x000107711244(auStack_4f0);
            func_0x00010771492c();
            func_0x000107714830();
            func_0x000107714850();
            func_0x000107714858();
          }
          unaff_x28 = auStack_910;
          func_0x00010771492c();
          func_0x0001077148e8();
          bVar11 = uVar1;
        }
        else {
          func_0x00010770c1d0(auStack_830);
          bVar11 = 0;
          uVar2 = uVar1;
        }
        func_0x0001077100ec();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107716248();
        func_0x00010771620c();
        if ((bVar11 & 1) == 0) goto code_r0x000107699970;
code_r0x0001076999c8:
        puVar4 = (undefined1 *)(unaff_x19 + 8);
        func_0x000107577fa0(puVar4,auStack_4f0);
      }
    }
    else {
      func_0x00010770c2fc();
      func_0x000107579e98();
      func_0x00010770d3ec();
      func_0x000107714b48();
    }
code_r0x000107699970:
    func_0x000107714848();
    func_0x000107714838();
  }
  else {
    func_0x00010770c1d0(auStack_570);
  }
  func_0x000107714868(auStack_570);
  func_0x00010770d380();
  func_0x000107707e08();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2fd8);
  func_0x000107714988();
  puStack_a78 = &DAT_107699c88;
  puStack_ab0 = unaff_x24;
  puStack_aa8 = puVar14;
  ppuStack_aa0 = unaff_x22;
  pppuStack_a98 = (undefined1 ***)unaff_x21;
  puStack_a90 = puVar4;
  pppuStack_a80 = &ppuStack_3b0;
  func_0x000107707564();
  if ((bRam00000001136d2fe0 & 1) == 0) {
    iVar3 = 0x136d2fe0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770c74c(0x113709698);
      ___cxa_guard_release(0x1136d2fe0);
    }
  }
  iStack_ac0 = 0;
  func_0x0001077091c8();
  func_0x00010770b6cc();
  func_0x000107714830();
  if (iStack_ac0 == 0) {
    func_0x0001077075c4();
    func_0x000107714850();
  }
  puVar14 = auStack_b98;
  func_0x00010770c1c4();
  puVar12 = auStack_c08;
  func_0x00010771ce54(0x402e000000000000);
  func_0x000107714eec();
  puVar5 = auStack_c88;
  func_0x000107714ccc(puVar5,auStack_b98,auStack_c08);
  func_0x00010771577c();
  if ((bool)uVar2) {
    func_0x000107715228();
    func_0x00010756e584();
    uStack_cf0 = *puVar5;
    func_0x000107708918();
    func_0x000107714838();
  }
  else {
    func_0x0001077096cc();
  }
  func_0x00010770cd34();
  func_0x000107714830();
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107707bc4();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = 0x1136d2fe0;
  ___cxa_guard_abort();
  func_0x0001077149ec();
  puStack_d08 = &DAT_107699dc8;
  puStack_d40 = unaff_x28;
  pppuStack_d38 = unaff_x27;
  puStack_d30 = puVar12;
  puStack_d28 = puVar14;
  puStack_d20 = puVar4;
  puStack_d18 = puVar5;
  ppppuStack_d10 = &pppuStack_a80;
  func_0x000107707444();
  if ((bRam00000001136d2fe8 & 1) == 0) {
    uVar6 = 0x1136d2fe8;
    ___cxa_guard_acquire();
    if ((int)uVar6 != 0) {
      func_0x00010770d0f8(0x1137096d0);
      uVar6 = 0x1136d2fe8;
      ___cxa_guard_release();
    }
  }
  func_0x000107718dd8();
  iStack_dc0 = 0;
  func_0x000107707718();
  func_0x000107714898();
  if ((bool)uVar2) {
    func_0x000107714870();
    func_0x00010770c218(uVar6);
    func_0x00010770d5dc();
    if (iStack_dc0 == 0) {
      func_0x00010770b15c();
      puVar12 = auStack_e98;
      func_0x000107712bc0();
      func_0x00010770c1a0();
      func_0x000107714830();
      func_0x000107715548();
      func_0x0001077161b8();
    }
    func_0x000107714850();
    func_0x000107714858();
    puVar14 = auStack_e98;
    func_0x00010770c1c4();
    func_0x000107717b88();
    func_0x000107718518();
    if ((bool)uVar2) {
      puVar12 = auStack_f18;
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
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 0x1136d2fe8;
  ___cxa_guard_abort(0x1136d2fe8);
  func_0x000107714988();
  puStack_fa8 = &DAT_107699f30;
  puStack_fe0 = unaff_x28;
  pppuStack_fd8 = unaff_x27;
  puStack_fd0 = puVar12;
  puStack_fc8 = puVar14;
  uStack_fc0 = uVar6;
  puStack_fb8 = puVar5;
  pppppuStack_fb0 = &ppppuStack_d10;
  func_0x000107707444();
  if ((bRam00000001136d2ff0 & 1) == 0) {
    uVar7 = 0x1136d2ff0;
    ___cxa_guard_acquire();
    if ((int)uVar7 != 0) {
      func_0x000107709020(0x113709708);
      uVar7 = 0x1136d2ff0;
      ___cxa_guard_release(0x1136d2ff0);
    }
  }
  func_0x000107718dd8();
  iStack_1060 = 0;
  func_0x000107707718();
  func_0x000107714898();
  if ((bool)uVar2) {
    func_0x000107714870();
    func_0x00010770c218(uVar7);
    func_0x00010770d5dc();
    if (iStack_1060 == 0) {
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
    if ((bool)uVar2) {
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
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d2ff0);
  func_0x000107714988();
  puVar10 = &DAT_10769a098;
  func_0x00010771cb48();
  ppppppuStack_1200 = &pppppuStack_fb0;
  puStack_11f8 = puVar10;
  func_0x000107707670();
  if ((bRam00000001136d2ff8 & 1) == 0) {
    puVar10 = (undefined *)0x1136d2ff8;
    ___cxa_guard_acquire();
    if ((int)puVar10 != 0) {
      func_0x000107714a40(0x113709740,&DAT_10f3507c8);
      puVar10 = (undefined *)0x1136d2ff8;
      ___cxa_guard_release(0x1136d2ff8);
    }
  }
  if ((bRam00000001136d3000 & 1) == 0) {
    puVar10 = (undefined *)0x1136d3000;
    ___cxa_guard_acquire();
    if ((int)puVar10 != 0) {
      func_0x000107714aa0(0x113709778,"value");
      puVar10 = (undefined *)0x1136d3000;
      ___cxa_guard_release(0x1136d3000);
    }
  }
  if ((bRam00000001136d3008 & 1) == 0) {
    puVar10 = (undefined *)0x1136d3008;
    ___cxa_guard_acquire();
    if ((int)puVar10 != 0) {
      func_0x00010770995c(0x1137097b0);
      puVar10 = (undefined *)0x1136d3008;
      ___cxa_guard_release(0x1136d3008);
    }
  }
  uStack_1250 = 0;
  iStack_12c0 = 0;
  func_0x00010770b414();
  func_0x000107714898();
  if ((bool)uVar2) {
    func_0x000107714870();
    func_0x00010770c30c(puVar10);
    func_0x0001072955a4(auStack_1320,abStack_1390);
    if (iStack_12c0 == 0) {
      func_0x000107718210();
      func_0x00010726cda0(auStack_1320,auStack_1400);
      func_0x000107714848();
    }
    func_0x000107714838();
    func_0x000107714858();
    unaff_x24 = &uStack_1398;
    pbVar8 = abStack_1390;
    func_0x0001072786d8(pbVar8,auStack_1320);
    func_0x0001077164b0();
    if ((bool)uVar2) {
      func_0x000107715d58();
      if ((*pbVar8 & 1) == 0) {
        func_0x000107714848();
        func_0x00010771e608();
        func_0x00010770b414();
        func_0x000107714898();
        if (!(bool)uVar2) goto code_r0x00010769a1f8;
        func_0x000107714870();
        func_0x000107708828();
        func_0x00010770d3f8(auStack_12b8);
      }
      else {
        func_0x00010770b414();
        func_0x000107714898();
        if (!(bool)uVar2) goto code_r0x00010769a1f0;
        func_0x000107714870();
        func_0x00010770c494(pbVar8);
        func_0x0001077154f4();
        func_0x00010770d854();
        func_0x000107714858();
        func_0x000107714848();
        func_0x00010771e608();
        func_0x00010770b414();
        func_0x000107714898();
        if (!(bool)uVar2) goto code_r0x00010769a1f8;
        func_0x000107714870();
        func_0x000107708828();
        func_0x00010770d3f8(auStack_12b8);
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
  puVar13 = auStack_1320;
  func_0x00010770c324();
  func_0x000107707b78();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d3008);
    func_0x000107714988();
    puVar10 = &DAT_10769a388;
    func_0x00010771cb48();
    ppppppuStack_13d0 = &ppppppuStack_1200;
    puStack_13c8 = puVar10;
    func_0x000107707670();
    if ((bRam00000001136d3010 & 1) == 0) {
      iVar3 = 0x136d3010;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x00010771b36c(0x1137097e8);
        ___cxa_guard_release(0x1136d3010);
      }
    }
    if ((bRam00000001136d3018 & 1) == 0) {
      iVar3 = 0x136d3018;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107714c58(0x113709820,&DAT_10f4229d3);
        ___cxa_guard_release(0x1136d3018);
      }
    }
    if ((bRam00000001136d3020 & 1) == 0) {
      iVar3 = 0x136d3020;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107714ac4(0x113709858,&DAT_10f4229e7);
        ___cxa_guard_release(0x1136d3020);
      }
    }
    if ((bRam00000001136d3028 & 1) == 0) {
      iVar3 = 0x136d3028;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107714fd4(0x113709890,&DAT_10f4229fc);
        ___cxa_guard_release(0x1136d3028);
      }
    }
    if ((bRam00000001136d3030 & 1) == 0) {
      iVar3 = 0x136d3030;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107714b74(0x1137098c8,&DAT_10f422a13);
        ___cxa_guard_release(0x1136d3030);
      }
    }
    uStack_1420 = 0;
    func_0x00010770c178(&uStack_14f8);
    puVar15 = &uStack_14f8;
    func_0x000107579348(&uStack_14f8);
    func_0x00010770c8b0();
    if ((int)puVar13 == 0) {
      iStack_1490 = 0;
      func_0x00010771d380();
      func_0x00010770c178();
      puVar13 = &uStack_14f8;
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_1490 == 0) {
        uStack_1560 = 0x4024000000000000;
        func_0x00010771b0f8();
        func_0x00010770c2cc();
        func_0x000107714838();
      }
      iStack_1500 = 0;
      func_0x00010770c178(&uStack_15e0);
      puVar15 = &uStack_1568;
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_1500 == 0) {
        uStack_15d8 = 0x4024000000000000;
        iStack_1578 = 2;
        func_0x00010770c2e4();
        func_0x000107714848();
      }
      iStack_1578 = 0;
      func_0x00010770c178(auStack_1650);
      unaff_x24 = &uStack_15e0;
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_1578 == 0) {
        uStack_1648 = 0x4024000000000000;
        iStack_15e8 = 2;
        func_0x00010770c37c();
        func_0x000107714860();
      }
      iStack_15e8 = 0;
      func_0x00010770c178(auStack_16c0);
      func_0x00010770efe0();
      func_0x000107714860();
      if (iStack_15e8 == 0) {
        uStack_16b8 = 0x4024000000000000;
        uStack_1658 = 2;
        func_0x00010770c184();
        func_0x000107714850();
      }
      func_0x000107717f18();
      func_0x00010771dbd8(auStack_16d8);
      func_0x00010758ee8c(auStack_16d8,&uStack_14f8);
      func_0x00010758ee8c(auStack_16d8,&uStack_1568);
      func_0x00010758ee8c(auStack_16d8,&uStack_15e0);
      puVar9 = auStack_16d8;
      func_0x00010758ee8c(puVar9,auStack_1650);
      func_0x00010770f83c();
      puVar14 = auStack_16c0;
      func_0x00010770e7c8();
      func_0x00010770dc90(auStack_1488);
      func_0x000107714850();
      func_0x000107715548();
      func_0x0001077161b8();
      func_0x000107714890();
      func_0x000107714848();
      func_0x000107714838();
      func_0x000107714830();
    }
    else {
      uStack_1568 = 0;
      uStack_1560 = 0;
      uStack_1558 = 0;
      func_0x00010771dbd8(&uStack_1568);
      uStack_14f0 = 0;
      puVar14 = (undefined1 *)0x2;
      iStack_1490 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      uStack_14f0 = 0;
      iStack_1490 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      uStack_14f0 = 0;
      iStack_1490 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      uStack_14f0 = 0;
      iStack_1490 = 2;
      func_0x000107717a74();
      func_0x000107714890();
      func_0x000107277aa4(&uStack_15e0,&uStack_1568);
      uStack_14e8 = uStack_15d8;
      uStack_14f0 = uStack_15e0;
      uStack_15e0 = 0;
      uStack_15d8 = 0;
      iStack_1490 = 8;
      func_0x00010770c808(auStack_1488);
      func_0x000107714890();
      func_0x00010771e2e8();
      puVar9 = &uStack_1568;
      func_0x000107277d70();
    }
    func_0x000107711280();
    func_0x000107714890();
    func_0x000107707b78();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      ___cxa_guard_abort(0x1136d3030);
      func_0x0001077149ec();
      pcStack_16f8 = FUN_10769a83c;
      puStack_1720 = puVar13;
      puStack_1718 = puVar14;
      puStack_1710 = auStack_1488;
      puStack_1708 = puVar9;
      ppppppuStack_1700 = &ppppppuStack_13d0;
      func_0x000107707670();
      if ((bRam00000001136d3038 & 1) == 0) {
        iVar3 = 0x136d3038;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010771b36c(0x113709900);
          ___cxa_guard_release(0x1136d3038);
        }
      }
      if ((bRam00000001136d3040 & 1) == 0) {
        iVar3 = 0x136d3040;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x000107714b90(0x113709938,&UNK_10f408e5a);
          ___cxa_guard_release(0x1136d3040);
        }
      }
      uStack_1730 = 0;
      func_0x00010770c178(auStack_1808);
      puVar14 = auStack_1808;
      func_0x000107579348();
      func_0x00010770d5d0();
      if ((int)auStack_1488 == 0) {
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
      func_0x00010770c808(auStack_1798);
      func_0x000107714890();
      func_0x000107715548();
      func_0x000107715978();
      func_0x000107717c94();
      func_0x000107714890();
      func_0x000107707e80();
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      ___cxa_guard_abort(0x1136d3040);
      func_0x0001077149ec();
      puStack_1838 = &DAT_10769a9b4;
      puStack_1880 = unaff_x28;
      pppuStack_1878 = unaff_x27;
      puStack_1870 = unaff_x24;
      puStack_1868 = puVar15;
      puStack_1860 = puVar13;
      puStack_1858 = auStack_1808;
      puStack_1850 = auStack_1798;
      puStack_1848 = puVar14;
      ppppppuStack_1840 = &ppppppuStack_1700;
      func_0x000107707670();
      if ((bRam00000001136d3048 & 1) == 0) {
        iVar3 = 0x136d3048;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010770c70c(0x113709970);
          ___cxa_guard_release(0x1136d3048);
        }
      }
      if ((bRam00000001136d3050 & 1) == 0) {
        iVar3 = 0x136d3050;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010770c6fc(0x1137099a8);
          ___cxa_guard_release(0x1136d3050);
        }
      }
      if ((bRam00000001136d3058 & 1) == 0) {
        iVar3 = 0x136d3058;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x000107714998(0x1137099e0,&DAT_10f408d6d);
          ___cxa_guard_release(0x1136d3058);
        }
      }
      if ((bRam00000001136d3060 & 1) == 0) {
        iVar3 = 0x136d3060;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x000107714a38(0x113709a18,"visible");
          ___cxa_guard_release(0x1136d3060);
        }
      }
      if ((bRam00000001136d3068 & 1) == 0) {
        iVar3 = 0x136d3068;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
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
      func_0x000107579a48(auStack_1930,auStack_18c0);
      func_0x00010770f314();
      func_0x000107714890();
      func_0x000107715ab8();
      func_0x000107707b78();
      if (!(bool)uVar2) {
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



/* Entry: 10769a83c; end: 10769a9b3;  */

void FUN_10769a83c(void)

{
  undefined1 in_ZR;
  int iVar1;
  int unaff_w20;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined1 auStack_240 [112];
  undefined1 auStack_1d0 [64];
  undefined1 auStack_118 [112];
  undefined1 auStack_a8 [104];
  undefined4 uStack_40;
  
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
  uStack_40 = 0;
  func_0x00010770c178(auStack_118);
  func_0x000107579348();
  func_0x00010770d5d0();
  if (unaff_w20 == 0) {
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
  func_0x00010770c808(auStack_a8);
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
  if ((unaff_x22 & 1) != 0) {
    func_0x00010770b3e4(auStack_240);
    func_0x00010771ade0();
    func_0x00010770c330();
    if ((unaff_x23 & 1) != 0) {
      func_0x00010770a524();
      func_0x00010771422c();
      func_0x000107712acc();
      func_0x000107714850();
      in_ZR = (int)auStack_a8 == 0;
    }
  }
  func_0x000107718a40();
  func_0x000107579a48(auStack_240,auStack_1d0);
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



/* Entry: 10769be90; end: 10769bf03;  */

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

void FUN_10769be90(double param_1,double param_2)

{
  uint uVar1;
  double **ppdVar2;
  double **ppdVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  char in_OV;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  int iVar10;
  undefined *unaff_x20;
  double *pdVar11;
  double *pdVar12;
  ulong unaff_x23;
  double *unaff_x24;
  undefined1 *unaff_x27;
  ulong unaff_x28;
  undefined1 ****ppppuVar13;
  undefined *puVar14;
  double dVar15;
  double *apdStack_5e0 [43];
  undefined auStack_488 [112];
  undefined1 auStack_418 [168];
  byte bStack_370;
  undefined auStack_330 [112];
  byte bStack_2c0;
  undefined1 ***pppuStack_280;
  undefined *puStack_278;
  double adStack_200 [2];
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_190 [64];
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  int iStack_88;
  
  func_0x0001077078a8();
  func_0x0001077170e0();
  func_0x000107719ef8();
  func_0x00010771577c();
  if ((bool)in_ZR) {
    func_0x000107715228();
    func_0x0001077087b4();
    func_0x00010770c3dc();
    func_0x000107714890();
  }
  else {
    func_0x0001077096cc();
  }
  func_0x00010770cd34();
  func_0x000107707e80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770d760();
  func_0x00010770cd34();
  func_0x0001077149ec();
  func_0x000107708a5c();
  if ((bRam00000001136d3110 & 1) == 0) {
    iVar10 = 0x136d3110;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107708fd0(0x113709ee8);
      ___cxa_guard_release(0x1136d3110);
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
  ___cxa_guard_abort(0x1136d3110);
  func_0x0001077149ec();
  func_0x00010771fbd0();
  func_0x000107707564();
  if ((bRam00000001136d3118 & 1) == 0) {
    iVar10 = 0x136d3118;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107708f70(0x113709f20);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3120 & 1) == 0) {
    iVar10 = 0x136d3120;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107711c50(0x113709f58);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3128 & 1) == 0) {
    iVar10 = 0x136d3128;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107708fd0(0x113709f90);
      ___cxa_guard_release();
    }
  }
  func_0x0001077091ec();
  iStack_88 = 0;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  if (iStack_88 == 0) {
    func_0x000107709348();
    func_0x000107714850();
  }
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x000107714a5c();
    uVar8 = 0x5b0;
    if ((bool)in_ZR) {
      uVar8 = 0x5e8;
    }
    func_0x0001077113e0(uVar8);
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
  ___cxa_guard_abort(0x1136d3128);
  func_0x0001077149ec();
  puStack_1d8 = &DAT_10769c158;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x000107708a5c();
  if ((bRam00000001136d3130 & 1) == 0) {
    iVar10 = 0x136d3130;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714998(0x113709fc8,&UNK_10f422a29);
      ___cxa_guard_release(0x1136d3130);
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
  ___cxa_guard_abort(0x1136d3130);
  func_0x0001077149ec();
  puVar5 = &DAT_10769c1f0;
  func_0x00010771fbd0();
  ppuStack_b0 = &puStack_1e0;
  puStack_a8 = puVar5;
  func_0x000107707564();
  if ((bRam00000001136d3138 & 1) == 0) {
    puVar5 = (undefined *)0x1136d3138;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107708f70(0x11370a000);
      puVar5 = (undefined *)0x1136d3138;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3140 & 1) == 0) {
    puVar5 = (undefined *)0x1136d3140;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107714998(0x11370a038,&UNK_10f422a3c);
      puVar5 = (undefined *)0x1136d3140;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3148 & 1) == 0) {
    puVar5 = (undefined *)0x1136d3148;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107714998(0x11370a070,&UNK_10f422a29);
      puVar5 = (undefined *)0x1136d3148;
      ___cxa_guard_release();
    }
  }
  func_0x0001077091ec();
  pdVar12 = adStack_200;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  func_0x000107709348();
  func_0x000107714850();
  pdVar11 = adStack_200;
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x0001077125e4();
    uVar8 = 0x690;
    if ((bool)in_ZR) {
      uVar8 = extraout_x8;
    }
    func_0x0001077113e0(uVar8);
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
  puStack_278 = &DAT_10769c3c0;
  ppppuVar13 = &pppuStack_280;
  ppdVar2 = apdStack_5e0;
  ppdVar3 = apdStack_5e0;
  pppuStack_280 = &ppuStack_b0;
  func_0x000107707564();
  if ((bRam00000001136d3150 & 1) == 0) {
    iVar10 = 0x136d3150;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a18(0x11370a0a8,&UNK_10f40b483);
      ___cxa_guard_release(0x1136d3150);
    }
  }
  if ((bRam00000001136d3158 & 1) == 0) {
    iVar10 = 0x136d3158;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a08(0x11370a0e0,&DAT_10f40b3d9);
      ___cxa_guard_release(0x1136d3158);
    }
  }
  if ((bRam00000001136d3160 & 1) == 0) {
    iVar10 = 0x136d3160;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107708bb0(0x11370a118);
      ___cxa_guard_release(0x1136d3160);
    }
  }
  if ((bRam00000001136d3168 & 1) == 0) {
    iVar10 = 0x136d3168;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714b90(0x11370a150,&DAT_10f40b3e5);
      ___cxa_guard_release(0x1136d3168);
    }
  }
  if ((bRam00000001136d3170 & 1) == 0) {
    iVar10 = 0x136d3170;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x0001077149b4(0x11370a188,&DAT_10f40b3ec);
      ___cxa_guard_release(0x1136d3170);
    }
  }
  if ((bRam00000001136d3178 & 1) == 0) {
    iVar10 = 0x136d3178;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a38(0x11370a1c0,&UNK_10f422a4f);
      ___cxa_guard_release(0x1136d3178);
    }
  }
  if ((bRam00000001136d3180 & 1) == 0) {
    iVar10 = 0x136d3180;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a40(0x11370a1f8,&DAT_10f40b3f1);
      ___cxa_guard_release(0x1136d3180);
    }
  }
  if ((bRam00000001136d3188 & 1) == 0) {
    iVar10 = 0x136d3188;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a18(0x11370a230,&UNK_10f422a57);
      ___cxa_guard_release(0x1136d3188);
    }
  }
  if ((bRam00000001136d3190 & 1) == 0) {
    iVar10 = 0x136d3190;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714f84(0x11370a268,&DAT_10f40b40a);
      ___cxa_guard_release(0x1136d3190);
    }
  }
  if ((bRam00000001136d3198 & 1) == 0) {
    iVar10 = 0x136d3198;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714ac4(0x11370a2a0,&DAT_10f40b419);
      ___cxa_guard_release(0x1136d3198);
    }
  }
  if ((bRam00000001136d31a0 & 1) == 0) {
    iVar10 = 0x136d31a0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714aa0(0x11370a2d8,&DAT_10f40b42e);
      ___cxa_guard_release(0x1136d31a0);
    }
  }
  if ((bRam00000001136d31a8 & 1) == 0) {
    iVar10 = 0x136d31a8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x0001077149b4(0x11370a310,&DAT_10f40b434);
      ___cxa_guard_release(0x1136d31a8);
    }
  }
  if ((bRam00000001136d31b0 & 1) == 0) {
    iVar10 = 0x136d31b0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a38(0x11370a348,&UNK_10f422a69);
      ___cxa_guard_release(0x1136d31b0);
    }
  }
  if ((bRam00000001136d31b8 & 1) == 0) {
    iVar10 = 0x136d31b8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714aa0(0x11370a380,&DAT_10f40b439);
      ___cxa_guard_release(0x1136d31b8);
    }
  }
  if ((bRam00000001136d31c0 & 1) == 0) {
    iVar10 = 0x136d31c0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714aa0(0x11370a3b8,&DAT_10f40b43f);
      ___cxa_guard_release(0x1136d31c0);
    }
  }
  if ((bRam00000001136d31c8 & 1) == 0) {
    iVar10 = 0x136d31c8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714d24(0x11370a3f0,&DAT_10f2cb5f1);
      ___cxa_guard_release(0x1136d31c8);
    }
  }
  if ((bRam00000001136d31d0 & 1) == 0) {
    iVar10 = 0x136d31d0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x0001077149b4(0x11370a428,"cold");
      ___cxa_guard_release(0x1136d31d0);
    }
  }
  if ((bRam00000001136d31d8 & 1) == 0) {
    iVar10 = 0x136d31d8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x0001077160c8(0x11370a460,&UNK_10f422a71);
      ___cxa_guard_release(0x1136d31d8);
    }
  }
  if ((bRam00000001136d31e0 & 1) == 0) {
    iVar10 = 0x136d31e0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x0001077149b4(0x11370a498,&DAT_10f3b7c24);
      ___cxa_guard_release(0x1136d31e0);
    }
  }
  if ((bRam00000001136d31e8 & 1) == 0) {
    iVar10 = 0x136d31e8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x0001077142ac(0x11370a4d0);
      ___cxa_guard_release(0x1136d31e8);
    }
  }
  if ((bRam00000001136d31f0 & 1) == 0) {
    iVar10 = 0x136d31f0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010771429c(0x11370a508);
      ___cxa_guard_release(0x1136d31f0);
    }
  }
  if ((bRam00000001136d31f8 & 1) == 0) {
    iVar10 = 0x136d31f8;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714b38(0x11370a540,&UNK_10f4180ea);
      ___cxa_guard_release(0x1136d31f8);
    }
  }
  auStack_330[0] = 0;
  bStack_2c0 = 0;
  apdStack_5e0[0] = pdVar11;
  func_0x000107712468();
  if ((bStack_2c0 & 1) == 0) {
    func_0x000107714df0();
    puVar14 = &UNK_10769c55c;
    ppdVar3 = apdStack_5e0;
    puVar6 = unaff_x20;
    goto code_r0x00010769cd6c;
  }
  puVar6 = auStack_330;
  FUN_107579140();
  if ((int)puVar6 == 0) {
    func_0x000107717d04();
    func_0x00010771490c();
    func_0x0001077148e0(auStack_418);
    puVar6 = auStack_488;
    func_0x00010770c178();
    unaff_x23 = 0;
    func_0x000107719228();
    func_0x00010770c8b0();
    iVar10 = (int)unaff_x20;
    if ((bStack_370 & 1) == 0) {
      func_0x000107716870();
      puVar14 = &UNK_10769c674;
      puVar6 = unaff_x20;
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
    in_OV = SBORROW4(iVar10,3);
    in_NG = iVar10 + -3 < 0;
    in_ZR = iVar10 == 3;
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
  puVar14 = &UNK_10769cd6c;
  func_0x000107714988();
code_r0x00010769cd6c:
  do {
    ppdVar2 = (double **)((long)ppdVar3 + -0x1d0);
    *(ulong *)((long)ppdVar3 + -0x30) = unaff_x28;
    *(undefined1 **)((long)ppdVar3 + -0x28) = unaff_x27;
    *(undefined **)((long)ppdVar3 + -0x20) = puVar6;
    *(undefined **)((long)ppdVar3 + -0x18) = puVar5;
    *(undefined1 *****)((long)ppdVar3 + -0x10) = ppppuVar13;
    *(undefined **)((long)ppdVar3 + -8) = puVar14;
    ppppuVar13 = (undefined1 ****)((long)ppdVar3 + -0x10);
    func_0x000107707ddc();
    *(undefined8 *)((long)ppdVar3 + -0x38) = extraout_x8_00;
    func_0x00010771490c();
    puVar5 = (undefined *)((long)ppdVar3 + -0xe0);
    func_0x0001077148e0();
    func_0x00010771e0e0();
    func_0x00010771e55c();
    func_0x000107714890();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770c29c(puVar5);
      iVar10 = *(int *)((long)ppdVar3 + -0x40);
      in_OV = SBORROW4(iVar10,3);
      in_NG = iVar10 + -3 < 0;
      in_ZR = iVar10 == 3;
      if (!(bool)in_ZR) goto code_r0x00010769ce0c;
      puVar6 = (undefined *)((long)ppdVar3 + -0xa8);
      func_0x00010732393c();
      puVar5 = puVar6;
      func_0x000104c32db4();
      if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
        func_0x0001077150f4();
        if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
          func_0x0001077150f4();
          if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
            func_0x0001077150f4();
            if ((((ulong)puVar5 & 1) != 0) || (func_0x0001077150f4(), ((ulong)puVar5 & 1) != 0))
            goto code_r0x00010769ce00;
            func_0x0001077150f4();
            if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
              func_0x0001077150f4();
              func_0x00010771eab8();
              if (((ulong)puVar5 & 1) != 0) goto code_r0x00010769ce00;
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
      *(undefined4 *)((long)ppdVar3 + -0x40) = 0;
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
    puVar14 = &UNK_10769cf3c;
    func_0x0001077149ec();
code_r0x00010769cf3c:
    ppdVar3 = (double **)((long)ppdVar2 + -400);
    *(double **)((long)ppdVar2 + -0x30) = pdVar12;
    *(double **)((long)ppdVar2 + -0x28) = pdVar11;
    *(undefined **)((long)ppdVar2 + -0x20) = puVar6;
    *(undefined **)((long)ppdVar2 + -0x18) = puVar5;
    *(undefined1 *****)((long)ppdVar2 + -0x10) = ppppuVar13;
    *(undefined **)((long)ppdVar2 + -8) = puVar14;
    ppppuVar13 = (undefined1 ****)((long)ppdVar2 + -0x10);
    func_0x000107707ddc();
    func_0x00010771fbf0();
    if ((extraout_x8_01 & 1) != 0) break;
    puVar14 = &UNK_10769cf68;
  } while( true );
  func_0x0001077153a8();
  func_0x000104c2fe00();
  func_0x00010771e184();
  func_0x000104c2fe00(auStack_190,0x11370a498);
  func_0x000107717054((undefined1 *)((long)ppdVar2 + -0xe0));
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
  pcVar9 = FUN_10769cff0;
  func_0x0001077184d0();
  *(undefined1 *****)((long)ppdVar2 + -0x140) = ppppuVar13;
  *(code **)((long)ppdVar2 + -0x138) = pcVar9;
  func_0x000107707444();
  *(undefined8 *)((long)ppdVar2 + -0x1a0) = extraout_x8_02;
  if ((bRam00000001136d3200 & 1) == 0) {
    iVar10 = 0x136d3200;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a40(0x11370a578,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3200);
    }
  }
  puVar7 = (undefined1 *)((long)ppdVar2 + -0x220);
  func_0x000107707bdc(puVar7);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (double *)0x0;
    func_0x00010770c254(puVar7);
    puVar7 = (undefined1 *)((long)ppdVar2 + -0x310);
    FUN_107579140();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto LAB_10769d1b4;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar7);
      FUN_107579140((undefined1 *)((long)ppdVar2 + -0x4e0));
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto LAB_10769d058;
      puVar7 = (undefined1 *)((long)ppdVar2 + -0x220);
      func_0x000107707bdc(puVar7);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto LAB_10769d1a8;
      func_0x000107717e2c();
      unaff_x23 = 0;
      func_0x00010770c30c(puVar7);
      func_0x00010770d308((undefined1 *)((long)ppdVar2 + -0x310));
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar7 = (undefined1 *)((long)ppdVar2 + -0x310);
        func_0x0001073405dc(puVar7);
        func_0x00010770c254(puVar7);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x0001077169e8();
        func_0x000107715f10((undefined1 *)((long)ppdVar2 + -0x4e0),
                            (undefined1 *)((long)ppdVar2 + -0x3f0),
                            (undefined1 *)((long)ppdVar2 + -0x460));
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar7 = (undefined1 *)((long)ppdVar2 + -0x560);
            func_0x000107707d58(puVar7);
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              pdVar12 = (double *)((long)ppdVar2 + -0x5d0);
              func_0x00010770cc44(puVar7);
              puVar7 = (undefined1 *)((long)ppdVar2 + -0x650);
              func_0x00010770d308(puVar7);
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar7);
                func_0x00010770d8d4((undefined1 *)((long)ppdVar2 + -0x730));
                func_0x00010770d94c((undefined1 *)((long)ppdVar2 + -0x7a0));
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
                unaff_x27 = (undefined1 *)((long)ppdVar2 + -0x5d0);
                func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x650));
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x560));
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x4e0));
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x310));
        func_0x000107716d58();
      }
      unaff_x24 = (double *)0x0;
      func_0x000107714868((undefined1 *)((long)ppdVar2 + -0x310));
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto LAB_10769d058;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
LAB_10769d058:
      unaff_x24 = (double *)0x0;
      pdVar11 = (double *)((long)ppdVar2 + -0x220);
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
LAB_10769d1a8:
    func_0x00010770d24c();
LAB_10769d1b4:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3200);
  func_0x000107714988();
  puVar6 = &DAT_10769d3a0;
  func_0x0001077184d0();
  *(undefined1 **)((long)ppdVar2 + -0x750) = (undefined1 *)((long)ppdVar2 + -0x140);
  *(undefined **)((long)ppdVar2 + -0x748) = puVar6;
  func_0x000107707444();
  *(undefined8 *)((long)ppdVar2 + -0x7b0) = extraout_x8_03;
  if ((bRam00000001136d3208 & 1) == 0) {
    iVar10 = 0x136d3208;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x000107714a40(0x11370a5b0,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3208);
    }
  }
  puVar7 = (undefined1 *)((long)ppdVar2 + -0x830);
  func_0x000107707bdc(puVar7);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (double *)0x0;
    func_0x00010770c254(puVar7);
    puVar7 = (undefined1 *)((long)ppdVar2 + -0x920);
    FUN_107579140();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto code_r0x00010769d570;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar7);
      puVar7 = (undefined1 *)((long)ppdVar2 + -0xaf0);
      FUN_107579140();
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto code_r0x00010769d408;
      puVar7 = (undefined1 *)((long)ppdVar2 + -0x830);
      func_0x000107707bdc(puVar7);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto code_r0x00010769d564;
      func_0x000107717e2c();
      func_0x00010770c30c(puVar7);
      puVar7 = (undefined1 *)((long)ppdVar2 + -0x920);
      func_0x00010770d308();
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar7 = (undefined1 *)((long)ppdVar2 + -0x920);
        func_0x0001073405dc(puVar7);
        func_0x00010770c254(puVar7);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x000107714eec();
        puVar7 = (undefined1 *)((long)ppdVar2 + -0xaf0);
        func_0x000107714ccc(puVar7,(undefined1 *)((long)ppdVar2 + -0xa00),
                            (undefined1 *)((long)ppdVar2 + -0xa70));
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar7 = (undefined1 *)((long)ppdVar2 + -0xb70);
            func_0x000107707d58();
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              pdVar12 = (double *)((long)ppdVar2 + -0xbe0);
              func_0x00010770cc44(puVar7);
              puVar7 = (undefined1 *)((long)ppdVar2 + -0xc60);
              func_0x00010770d308();
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar7);
                func_0x00010770d8d4((undefined1 *)((long)ppdVar2 + -0xd40));
                func_0x00010770d94c((undefined1 *)((long)ppdVar2 + -0xdb0));
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
                unaff_x27 = (undefined1 *)((long)ppdVar2 + -0xbe0);
                func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xc60));
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xb70));
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xaf0));
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x920));
        func_0x000107716d58();
      }
      unaff_x24 = (double *)0x0;
      func_0x000107714868((undefined1 *)((long)ppdVar2 + -0x920));
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto code_r0x00010769d408;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
code_r0x00010769d408:
      unaff_x24 = (double *)0x0;
      pdVar11 = (double *)((long)ppdVar2 + -0x830);
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
code_r0x00010769d564:
    func_0x00010770d24c();
    puVar7 = (undefined1 *)((long)ppdVar2 + -0x828);
code_r0x00010769d570:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = 0x1136d3208;
  ___cxa_guard_abort(0x1136d3208);
  func_0x000107714988();
  *(ulong *)((long)ppdVar2 + -0xdf0) = unaff_x28;
  *(undefined1 **)((long)ppdVar2 + -0xde8) = unaff_x27;
  *(double **)((long)ppdVar2 + -0xde0) = pdVar12;
  *(double **)((long)ppdVar2 + -0xdd8) = pdVar11;
  *(undefined1 **)((long)ppdVar2 + -0xdd0) = puVar7;
  *(undefined **)((long)ppdVar2 + -0xdc8) = puVar5;
  *(undefined1 **)((long)ppdVar2 + -0xdc0) = (undefined1 *)((long)ppdVar2 + -0x750);
  *(undefined **)((long)ppdVar2 + -0xdb8) = &DAT_10769d75c;
  func_0x000107707ba8();
  if ((bRam00000001136d3210 & 1) == 0) {
    uVar8 = 0x1136d3210;
    ___cxa_guard_acquire();
    if ((int)uVar8 != 0) {
      func_0x000107713844(0x11370a5e8);
      uVar8 = 0x1136d3210;
      ___cxa_guard_release(0x1136d3210);
    }
  }
  if ((bRam00000001136d3218 & 1) == 0) {
    uVar8 = 0x1136d3218;
    ___cxa_guard_acquire();
    if ((int)uVar8 != 0) {
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
      uVar8 = 0x1136d3218;
      ___cxa_guard_release(0x1136d3218);
    }
  }
  *(undefined4 *)((long)ppdVar2 + -0xe00) = 0;
  func_0x00010770eaac();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (*(int *)((long)ppdVar2 + -0xe00) == 0) {
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
      func_0x00010770cc44(uVar8);
      func_0x00010770e718();
      func_0x000107714830();
      pdVar12 = (double *)((long)ppdVar2 + -0xfd0);
    }
    else {
      func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xf60));
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
  puVar5 = &DAT_10769d9b8;
  func_0x000107717e8c();
  *(undefined1 **)((long)ppdVar2 + -0xf60) = (undefined1 *)((long)ppdVar2 + -0xdc0);
  *(undefined **)((long)ppdVar2 + -0xf58) = puVar5;
  func_0x000107707ae4();
  *(undefined8 *)((long)ppdVar2 + -0xfe0) = extraout_x8_04;
  if ((bRam00000001136d3220 & 1) == 0) {
    iVar10 = 0x136d3220;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770bd90(0x11370a620);
      ___cxa_guard_release(0x1136d3220);
    }
  }
  if ((bRam00000001136d3228 & 1) == 0) {
    iVar10 = 0x136d3228;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770d06c(0x11370a658);
      ___cxa_guard_release(0x1136d3228);
    }
  }
  if ((bRam00000001136d3230 & 1) == 0) {
    iVar10 = 0x136d3230;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770a504(0x11370a690);
      ___cxa_guard_release(0x1136d3230);
    }
  }
  if ((bRam00000001136d3238 & 1) == 0) {
    iVar10 = 0x136d3238;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770a1d0(0x11370a6c8);
      ___cxa_guard_release(0x1136d3238);
    }
  }
  if ((bRam00000001136d3240 & 1) == 0) {
    iVar10 = 0x136d3240;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770d05c(0x11370a700);
      ___cxa_guard_release(0x1136d3240);
    }
  }
  if ((bRam00000001136d3248 & 1) == 0) {
    iVar10 = 0x136d3248;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770a514(0x11370a738);
      ___cxa_guard_release(0x1136d3248);
    }
  }
  if ((bRam00000001136d3250 & 1) == 0) {
    iVar10 = 0x136d3250;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770b67c(0x11370a770);
      ___cxa_guard_release(0x1136d3250);
    }
  }
  if ((bRam00000001136d3258 & 1) == 0) {
    iVar10 = 0x136d3258;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770be14(0x11370a7a8);
      ___cxa_guard_release(0x1136d3258);
    }
  }
  if ((bRam00000001136d3260 & 1) == 0) {
    iVar10 = 0x136d3260;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770be04(0x11370a7e0);
      ___cxa_guard_release(0x1136d3260);
    }
  }
  if ((bRam00000001136d3268 & 1) == 0) {
    iVar10 = 0x136d3268;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770bdf4(0x11370a818);
      ___cxa_guard_release(0x1136d3268);
    }
  }
  if ((bRam00000001136d3270 & 1) == 0) {
    iVar10 = 0x136d3270;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770bde4(0x11370a850);
      ___cxa_guard_release(0x1136d3270);
    }
  }
  if ((bRam00000001136d3278 & 1) == 0) {
    iVar10 = 0x136d3278;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      func_0x00010770bdd4(0x11370a888);
      ___cxa_guard_release(0x1136d3278);
    }
  }
  func_0x0001077148ac((undefined1 *)((long)ppdVar2 + -0x1050));
  func_0x0001072ddd58((undefined1 *)((long)ppdVar2 + -0x10c0),0x11370a658);
  puVar7 = (undefined1 *)((long)ppdVar2 + -0x1050);
  func_0x00010745fc58(puVar7,(undefined1 *)((long)ppdVar2 + -0x10c0));
  if ((int)puVar7 == 0) {
    func_0x00010770f7b8();
    func_0x00010771ad54();
    func_0x00010770c8b0();
    if ((int)pdVar12 == 0) {
      *(undefined4 *)((long)ppdVar2 + -0x1300) = 0;
      func_0x00010770ecf0();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (*(int *)((long)ppdVar2 + -0x1300) == 0) {
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
      pdVar11 = (double *)((long)ppdVar2 + -0x1130);
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
        *(undefined4 *)((long)ppdVar2 + -0x1138) = 0;
        func_0x00010770efb0();
        func_0x00010770d358();
        func_0x000107714830();
        if (*(int *)((long)ppdVar2 + -0x1138) == 0) {
          func_0x00010771cc34();
          func_0x00010770d358();
          func_0x000107714830();
        }
        pdVar12 = (double *)0x0;
        func_0x00010770c3f4();
        iVar10 = *(int *)((long)ppdVar2 + -0x11a8);
        in_OV = SBORROW4(iVar10,2);
        in_NG = iVar10 + -2 < 0;
        in_ZR = iVar10 == 2;
        if ((bool)in_ZR) {
          *(undefined4 *)((long)ppdVar2 + -0x1218) = 0;
          func_0x00010770dbb0();
          func_0x00010770e5f8();
          func_0x000107714830();
          if (*(int *)((long)ppdVar2 + -0x1218) == 0) {
            func_0x00010771310c();
            func_0x00010770e5f8();
            func_0x000107714830();
          }
          pdVar12 = (double *)0x0;
          func_0x00010770d748();
          func_0x000107719cf0();
          if ((bool)in_ZR) {
            func_0x00010771e2d8();
            func_0x000107718208();
            param_1 = *pdVar11;
            func_0x00010770bfc8();
            if ((bool)in_OV) {
              func_0x000107715230();
              func_0x000100060964((undefined1 *)((long)ppdVar2 + -0x13d8));
              pdVar12 = pdVar11;
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
            pdVar12 = (double *)0x1;
          }
          else {
            func_0x000107714934();
            func_0x000107715694((undefined1 *)((long)ppdVar2 + -0x13d8));
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
    unaff_x24 = pdVar12;
  }
  else {
    *(undefined4 *)((long)ppdVar2 + -0x1300) = 0;
    func_0x00010770ecf0();
    func_0x00010770c1dc();
    func_0x000107714830();
    if (*(int *)((long)ppdVar2 + -0x1300) == 0) {
      func_0x000107716dac();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x000107719c0c();
    if ((bool)in_ZR) {
      func_0x00010770c394((undefined1 *)((long)ppdVar2 + -0x11a0));
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
    func_0x00010726af18((undefined1 *)((long)ppdVar2 + -0x1360));
  }
  if (((ulong)unaff_x24 & 1) == 0) goto code_r0x00010769e1cc;
  *(undefined4 *)((long)ppdVar2 + -0x10c8) = 0;
  pdVar11 = (double *)((long)ppdVar2 + -0x1368);
  func_0x00010770c394();
  func_0x00010770c2cc();
  func_0x000107714838();
  if (*(int *)((long)ppdVar2 + -0x10c8) == 0) {
    func_0x000107716688();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x00010771d284();
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x0001077156c0((undefined1 *)((long)ppdVar2 + -0x1368));
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
  *(undefined4 *)((long)ppdVar2 + -0x11a8) = 0;
  func_0x00010770f7b8();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (*(int *)((long)ppdVar2 + -0x11a8) == 0) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e6a0();
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
      if (((ulong)pdVar11 & 1) != 0) {
code_r0x00010769e140:
        param_1 = param_1 * 5.0;
        *(double *)((long)ppdVar2 + -0x13d0) = param_1;
        func_0x00010771caac();
        func_0x00010770e8cc();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107717188();
        goto code_r0x00010769df88;
      }
      if ((*(byte *)((long)ppdVar2 + -0x12f8) & 1) == 0) {
        func_0x000107714f6c();
        func_0x00010769e6a0();
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
        iVar10 = *(int *)((long)ppdVar2 + -0x1370);
        if (iVar10 == 2) {
          func_0x00010771acf0();
          param_1 = *pdVar11;
        }
        else {
          func_0x000107712164();
          func_0x0001077145dc();
          func_0x000107717bd0();
          param_1 = 0.0;
        }
        func_0x0001077148e8();
        in_ZR = iVar10 == 2;
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
      pdVar11 = (double *)((long)ppdVar2 + -0x12f0);
      func_0x000107719d28();
      dVar15 = 2.5;
      if (((ulong)pdVar11 & 1) == 0) {
        if ((*(byte *)((long)ppdVar2 + -0x12f8) & 1) == 0) {
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
            dVar15 = *pdVar11;
          }
          else {
            func_0x000107708a34();
            func_0x00010770cf5c();
            func_0x000107714fdc();
            dVar15 = 0.0;
          }
          func_0x00010771492c();
          uVar4 = 0;
          if ((int)(undefined1 *)((long)ppdVar2 + -0xed8) == 2) goto code_r0x00010769e0fc;
        }
      }
      else {
code_r0x00010769e0fc:
        func_0x0001077172c0();
        func_0x00010771a6b4();
        uVar4 = dVar15 == 0.0;
        if ((bool)uVar4) {
          uVar4 = param_2 == 0.0;
          if ((bool)uVar4) {
            func_0x00010771bb34();
            dVar15 = param_2;
          }
          else {
            dVar15 = INFINITY;
            if (param_2 <= 0.0) {
              dVar15 = -INFINITY;
            }
          }
        }
        else {
          dVar15 = param_2 / dVar15;
        }
        func_0x0001077167c4();
        *(double *)((long)ppdVar2 + -0x1440) = param_1 + dVar15 * 1.5;
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
    func_0x0001077156d0((undefined1 *)((long)ppdVar2 + -0x1368));
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
    func_0x000107708a48(*(undefined8 *)((long)ppdVar2 + -0xfe0));
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



/* Entry: 10769cff0; end: 10769d39f;  */

void FUN_10769cff0(undefined8 param_1,double param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  char in_OV;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined *puVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x27;
  ulong unaff_x28;
  double dVar8;
  undefined8 in_stack_00000050;
  undefined1 auStack_1248 [8];
  double dStack_1240;
  int iStack_11e0;
  double dStack_11d8;
  undefined1 auStack_11d0 [96];
  int iStack_1170;
  byte bStack_1168;
  double adStack_1160 [27];
  int iStack_1088;
  int iStack_1018;
  undefined1 auStack_1010 [104];
  int iStack_fa8;
  int iStack_f38;
  undefined1 auStack_f30 [112];
  undefined1 auStack_ec0 [112];
  undefined8 uStack_e50;
  undefined1 auStack_e40 [112];
  undefined8 ***pppuStack_dd0;
  undefined *puStack_dc8;
  undefined1 auStack_d48 [216];
  int iStack_c70;
  ulong uStack_c60;
  undefined1 *puStack_c58;
  undefined1 *puStack_c50;
  undefined1 *puStack_c48;
  undefined1 *puStack_c40;
  undefined8 **ppuStack_c30;
  undefined *puStack_c28;
  undefined1 auStack_c20 [112];
  undefined1 auStack_bb0 [224];
  undefined1 auStack_ad0 [128];
  undefined1 auStack_a50 [112];
  undefined1 auStack_9e0 [128];
  undefined1 auStack_960 [128];
  undefined1 auStack_8e0 [112];
  undefined1 auStack_870 [224];
  undefined1 auStack_790 [240];
  undefined1 auStack_6a0 [8];
  undefined1 auStack_698 [136];
  undefined1 auStack_610 [80];
  undefined8 *puStack_5c0;
  undefined *puStack_5b8;
  undefined1 auStack_5a0 [224];
  undefined1 auStack_4c0 [128];
  undefined1 auStack_440 [112];
  undefined1 auStack_3d0 [128];
  undefined1 auStack_350 [128];
  undefined1 auStack_2d0 [112];
  undefined1 auStack_260 [224];
  undefined1 auStack_180 [240];
  undefined1 auStack_90 [144];
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d3200 & 1) == 0) {
    iVar3 = 0x136d3200;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a40(0x11370a578,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3200);
    }
  }
  puVar4 = auStack_90;
  func_0x000107707bdc(puVar4);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (undefined1 *)0x0;
    func_0x00010770c254(puVar4);
    puVar4 = auStack_180;
    FUN_107579140();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto LAB_10769d1b4;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar4);
      FUN_107579140(auStack_350);
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto LAB_10769d058;
      puVar4 = auStack_90;
      func_0x000107707bdc(puVar4);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto LAB_10769d1a8;
      func_0x000107717e2c();
      unaff_x23 = 0;
      func_0x00010770c30c(puVar4);
      func_0x00010770d308(auStack_180);
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar4 = auStack_180;
        func_0x0001073405dc(puVar4);
        func_0x00010770c254(puVar4);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x0001077169e8();
        func_0x000107715f10(auStack_350,auStack_260,auStack_2d0);
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar4 = auStack_3d0;
            func_0x000107707d58(puVar4);
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              unaff_x22 = auStack_440;
              func_0x00010770cc44(puVar4);
              puVar4 = auStack_4c0;
              func_0x00010770d308(puVar4);
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar4);
                func_0x00010770d8d4(auStack_5a0);
                func_0x00010770d94c(auStack_610);
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
                unaff_x27 = auStack_440;
                func_0x00010770c1d0(auStack_4c0);
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0(auStack_3d0);
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0(auStack_350);
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0(auStack_180);
        func_0x000107716d58();
      }
      unaff_x24 = (undefined1 *)0x0;
      func_0x000107714868(auStack_180);
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto LAB_10769d058;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
LAB_10769d058:
      unaff_x24 = (undefined1 *)0x0;
      unaff_x21 = auStack_90;
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
LAB_10769d1a8:
    func_0x00010770d24c();
LAB_10769d1b4:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3200);
  func_0x000107714988();
  puVar7 = &DAT_10769d3a0;
  func_0x0001077184d0();
  puStack_5c0 = &stack0x00000050;
  puStack_5b8 = puVar7;
  func_0x000107707444();
  if ((bRam00000001136d3208 & 1) == 0) {
    iVar3 = 0x136d3208;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a40(0x11370a5b0,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3208);
    }
  }
  puVar4 = auStack_6a0;
  func_0x000107707bdc(puVar4);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (undefined1 *)0x0;
    func_0x00010770c254(puVar4);
    puVar4 = auStack_790;
    FUN_107579140();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto code_r0x00010769d570;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar4);
      puVar4 = auStack_960;
      FUN_107579140();
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto code_r0x00010769d408;
      puVar4 = auStack_6a0;
      func_0x000107707bdc(puVar4);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto code_r0x00010769d564;
      func_0x000107717e2c();
      func_0x00010770c30c(puVar4);
      puVar4 = auStack_790;
      func_0x00010770d308();
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar4 = auStack_790;
        func_0x0001073405dc(puVar4);
        func_0x00010770c254(puVar4);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x000107714eec();
        puVar4 = auStack_960;
        func_0x000107714ccc(puVar4,auStack_870,auStack_8e0);
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar4 = auStack_9e0;
            func_0x000107707d58();
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              unaff_x22 = auStack_a50;
              func_0x00010770cc44(puVar4);
              puVar4 = auStack_ad0;
              func_0x00010770d308();
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar4);
                func_0x00010770d8d4(auStack_bb0);
                func_0x00010770d94c(auStack_c20);
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
                unaff_x27 = auStack_a50;
                func_0x00010770c1d0(auStack_ad0);
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0(auStack_9e0);
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0(auStack_960);
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0(auStack_790);
        func_0x000107716d58();
      }
      unaff_x24 = (undefined1 *)0x0;
      func_0x000107714868(auStack_790);
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto code_r0x00010769d408;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
code_r0x00010769d408:
      unaff_x24 = (undefined1 *)0x0;
      unaff_x21 = auStack_6a0;
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
code_r0x00010769d564:
    func_0x00010770d24c();
    puVar4 = auStack_698;
code_r0x00010769d570:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = 0x1136d3208;
  ___cxa_guard_abort(0x1136d3208);
  func_0x000107714988();
  puStack_c28 = &DAT_10769d75c;
  uStack_c60 = unaff_x28;
  puStack_c58 = unaff_x27;
  puStack_c50 = unaff_x22;
  puStack_c48 = unaff_x21;
  puStack_c40 = puVar4;
  ppuStack_c30 = &puStack_5c0;
  func_0x000107707ba8();
  if ((bRam00000001136d3210 & 1) == 0) {
    uVar5 = 0x1136d3210;
    ___cxa_guard_acquire();
    if ((int)uVar5 != 0) {
      func_0x000107713844(0x11370a5e8);
      uVar5 = 0x1136d3210;
      ___cxa_guard_release(0x1136d3210);
    }
  }
  if ((bRam00000001136d3218 & 1) == 0) {
    uVar5 = 0x1136d3218;
    ___cxa_guard_acquire();
    if ((int)uVar5 != 0) {
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
      uVar5 = 0x1136d3218;
      ___cxa_guard_release(0x1136d3218);
    }
  }
  iStack_c70 = 0;
  func_0x00010770eaac();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_c70 == 0) {
    func_0x00010770c914();
    func_0x000107714890();
  }
  func_0x000107710194();
  func_0x00010771d128();
  if ((bool)in_ZR) {
    func_0x00010771ae68();
    func_0x000107714ec4();
    func_0x00010771901c();
    param_2 = 0.25;
    func_0x000107719058();
    func_0x00010770e974();
    func_0x00010771ade8();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770cc44(uVar5);
      func_0x00010770e718();
      func_0x000107714830();
      unaff_x22 = auStack_e40;
    }
    else {
      func_0x00010770c1d0(&pppuStack_dd0);
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
  puVar7 = &DAT_10769d9b8;
  func_0x000107717e8c();
  pppuStack_dd0 = &ppuStack_c30;
  puStack_dc8 = puVar7;
  func_0x000107707ae4();
  uStack_e50 = extraout_x8;
  if ((bRam00000001136d3220 & 1) == 0) {
    iVar3 = 0x136d3220;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770bd90(0x11370a620);
      ___cxa_guard_release(0x1136d3220);
    }
  }
  if ((bRam00000001136d3228 & 1) == 0) {
    iVar3 = 0x136d3228;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770d06c(0x11370a658);
      ___cxa_guard_release(0x1136d3228);
    }
  }
  if ((bRam00000001136d3230 & 1) == 0) {
    iVar3 = 0x136d3230;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a504(0x11370a690);
      ___cxa_guard_release(0x1136d3230);
    }
  }
  if ((bRam00000001136d3238 & 1) == 0) {
    iVar3 = 0x136d3238;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a1d0(0x11370a6c8);
      ___cxa_guard_release(0x1136d3238);
    }
  }
  if ((bRam00000001136d3240 & 1) == 0) {
    iVar3 = 0x136d3240;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770d05c(0x11370a700);
      ___cxa_guard_release(0x1136d3240);
    }
  }
  if ((bRam00000001136d3248 & 1) == 0) {
    iVar3 = 0x136d3248;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a514(0x11370a738);
      ___cxa_guard_release(0x1136d3248);
    }
  }
  if ((bRam00000001136d3250 & 1) == 0) {
    iVar3 = 0x136d3250;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770b67c(0x11370a770);
      ___cxa_guard_release(0x1136d3250);
    }
  }
  if ((bRam00000001136d3258 & 1) == 0) {
    iVar3 = 0x136d3258;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770be14(0x11370a7a8);
      ___cxa_guard_release(0x1136d3258);
    }
  }
  if ((bRam00000001136d3260 & 1) == 0) {
    iVar3 = 0x136d3260;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770be04(0x11370a7e0);
      ___cxa_guard_release(0x1136d3260);
    }
  }
  if ((bRam00000001136d3268 & 1) == 0) {
    iVar3 = 0x136d3268;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770bdf4(0x11370a818);
      ___cxa_guard_release(0x1136d3268);
    }
  }
  if ((bRam00000001136d3270 & 1) == 0) {
    iVar3 = 0x136d3270;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770bde4(0x11370a850);
      ___cxa_guard_release(0x1136d3270);
    }
  }
  if ((bRam00000001136d3278 & 1) == 0) {
    iVar3 = 0x136d3278;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770bdd4(0x11370a888);
      ___cxa_guard_release(0x1136d3278);
    }
  }
  func_0x0001077148ac(auStack_ec0);
  func_0x0001072ddd58(auStack_f30,0x11370a658);
  puVar4 = auStack_ec0;
  func_0x00010745fc58(puVar4,auStack_f30);
  if ((int)puVar4 == 0) {
    func_0x00010770f7b8();
    func_0x00010771ad54();
    func_0x00010770c8b0();
    if ((int)unaff_x22 == 0) {
      iStack_1170 = 0;
      func_0x00010770ecf0();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_1170 == 0) {
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
          unaff_x24 = (undefined1 *)0x1;
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
            unaff_x24 = (undefined1 *)0x1;
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
      puVar4 = (undefined1 *)0x0;
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
        iStack_fa8 = 0;
        func_0x00010770efb0();
        func_0x00010770d358();
        func_0x000107714830();
        if (iStack_fa8 == 0) {
          func_0x00010771cc34();
          func_0x00010770d358();
          func_0x000107714830();
        }
        unaff_x22 = (undefined1 *)0x0;
        func_0x00010770c3f4();
        in_OV = SBORROW4(iStack_1018,2);
        in_NG = iStack_1018 + -2 < 0;
        in_ZR = iStack_1018 == 2;
        if ((bool)in_ZR) {
          iStack_1088 = 0;
          func_0x00010770dbb0();
          func_0x00010770e5f8();
          func_0x000107714830();
          if (iStack_1088 == 0) {
            func_0x00010771310c();
            func_0x00010770e5f8();
            func_0x000107714830();
          }
          unaff_x22 = (undefined1 *)0x0;
          func_0x00010770d748();
          func_0x000107719cf0();
          if ((bool)in_ZR) {
            func_0x00010771e2d8();
            func_0x000107718208();
            func_0x00010770bfc8();
            if ((bool)in_OV) {
              func_0x000107715230();
              func_0x000100060964(auStack_1248);
              unaff_x22 = puVar4;
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
            unaff_x22 = (undefined1 *)0x1;
          }
          else {
            func_0x000107714934();
            func_0x000107715694(auStack_1248);
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
    unaff_x24 = unaff_x22;
  }
  else {
    iStack_1170 = 0;
    func_0x00010770ecf0();
    func_0x00010770c1dc();
    func_0x000107714830();
    if (iStack_1170 == 0) {
      func_0x000107716dac();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x000107719c0c();
    if ((bool)in_ZR) {
      func_0x00010770c394(auStack_1010);
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
        unaff_x24 = (undefined1 *)0x1;
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
    func_0x00010726af18(auStack_11d0);
  }
  if (((ulong)unaff_x24 & 1) == 0) goto code_r0x00010769e1cc;
  iStack_f38 = 0;
  pdVar6 = &dStack_11d8;
  func_0x00010770c394();
  func_0x00010770c2cc();
  func_0x000107714838();
  if (iStack_f38 == 0) {
    func_0x000107716688();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x00010771d284();
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x0001077156c0(&dStack_11d8);
    uVar2 = in_ZR;
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
  iStack_1018 = 0;
  func_0x00010770f7b8();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_1018 == 0) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e6a0();
    func_0x000107714898();
    uVar2 = in_ZR;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771191c();
      func_0x00010770c8e0();
      func_0x000107715c18();
      dVar8 = 2.5;
      if (((ulong)pdVar6 & 1) != 0) {
code_r0x00010769e140:
        dStack_1240 = dVar8 * 5.0;
        func_0x00010771caac();
        func_0x00010770e8cc();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107717188();
        goto code_r0x00010769df88;
      }
      if ((bStack_1168 & 1) == 0) {
        func_0x000107714f6c();
        func_0x00010769e6a0();
        func_0x000107714898();
        uVar2 = false;
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
        if (iStack_11e0 == 2) {
          func_0x00010771acf0();
          dVar8 = *pdVar6;
        }
        else {
          func_0x000107712164();
          func_0x0001077145dc();
          func_0x000107717bd0();
          dVar8 = 0.0;
        }
        func_0x0001077148e8();
        in_ZR = iStack_11e0 == 2;
        uVar2 = in_ZR;
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
    uVar2 = 0;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771310c();
      func_0x00010770e690();
      pdVar6 = adStack_1160;
      func_0x000107719d28();
      dVar8 = 2.5;
      if (((ulong)pdVar6 & 1) == 0) {
        if ((bStack_1168 & 1) == 0) {
          func_0x000107714f6c();
          func_0x00010769e8b8();
          func_0x000107714898();
          uVar2 = 0;
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
            dVar8 = *pdVar6;
          }
          else {
            func_0x000107708a34();
            func_0x00010770cf5c();
            func_0x000107714fdc();
            dVar8 = 0.0;
          }
          func_0x00010771492c();
          uVar2 = 0;
          if ((int)auStack_d48 == 2) goto code_r0x00010769e0fc;
        }
      }
      else {
code_r0x00010769e0fc:
        func_0x0001077172c0();
        func_0x00010771a6b4();
        uVar2 = 0;
        if ((dVar8 == 0.0) && (uVar2 = param_2 == 0.0, (bool)uVar2)) {
          func_0x00010771bb34();
        }
        func_0x0001077167c4();
        func_0x00010770b6ac(2);
        func_0x000107714890();
      }
      func_0x000107714888();
      func_0x000107714860();
    }
    func_0x000107717188();
    in_ZR = uVar2;
  }
  else {
    func_0x000107714934();
    func_0x0001077156d0(&dStack_11d8);
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  func_0x000107714848();
  uVar2 = in_ZR;
code_r0x00010769e1c0:
  func_0x000107714838();
  while( true ) {
    func_0x000107714850();
    func_0x000107714830();
    in_ZR = uVar2;
code_r0x00010769e1cc:
    func_0x00010770e6c4();
    func_0x0001077137d8();
    func_0x000107708a48(uStack_e50);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
code_r0x00010769e400:
    func_0x000107715230();
    func_0x00010771e33c();
    uVar2 = in_ZR;
code_r0x00010769e030:
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  return;
}



/* Entry: 10769fe5c; end: 1076a0073;  */

void FUN_10769fe5c(double param_1,undefined8 param_2,double param_3)

{
  undefined1 in_ZR;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  double extraout_x8;
  double extraout_x8_00;
  double extraout_x8_01;
  double extraout_x8_02;
  double *unaff_x20;
  double *pdVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double unaff_d8;
  undefined8 in_stack_00000050;
  undefined1 auStack_fe8 [112];
  undefined1 auStack_f78 [104];
  int iStack_f10;
  double adStack_f08 [14];
  undefined1 auStack_e98 [8];
  double dStack_e90;
  int iStack_e30;
  undefined1 auStack_db8 [112];
  double adStack_d48 [13];
  int iStack_ce0;
  int iStack_c70;
  undefined1 auStack_c60 [24];
  double dStack_c48;
  undefined8 ***pppuStack_c00;
  undefined *puStack_bf8;
  int iStack_af8;
  int iStack_a18;
  int iStack_938;
  int iStack_858;
  undefined1 auStack_840 [24];
  double dStack_828;
  undefined8 **ppuStack_7f0;
  undefined *puStack_7e8;
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
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
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
  puVar5 = &UNK_1076a0074;
  func_0x0001077184d0();
  puStack_3d0 = &stack0x00000050;
  puStack_3c8 = puVar5;
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
  puVar5 = &UNK_1076a028c;
  func_0x0001077184d0();
  ppuStack_7f0 = &puStack_3d0;
  puStack_7e8 = puVar5;
  func_0x000107707748();
  func_0x000107709f0c();
  func_0x000107709acc();
  func_0x000107714850();
  if (iStack_858 == 0) {
    func_0x0001077076fc();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x000107716498();
  if ((bool)in_ZR) {
    iStack_938 = 0;
    func_0x000107709efc();
    func_0x000107709eec();
    func_0x000107714838();
    if (iStack_938 == 0) {
      func_0x0001077076e0();
      func_0x000107714838();
    }
    func_0x00010770c3f4();
    func_0x0001077164a4();
    if ((bool)in_ZR) {
      iStack_a18 = 0;
      func_0x000107709edc();
      func_0x000107709ecc();
      func_0x000107714860();
      if (iStack_a18 == 0) {
        func_0x0001077076c4();
        func_0x000107714860();
      }
      func_0x00010770c8e0();
      func_0x000107716374();
      if ((bool)in_ZR) {
        iStack_af8 = 0;
        func_0x000107709ebc();
        func_0x000107709f3c();
        func_0x0001077148e8();
        if (iStack_af8 == 0) {
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
          dStack_c48 = param_1;
          func_0x00010759ca1c(auStack_c60,4);
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
  puVar5 = &DAT_1076a04a4;
  func_0x000107715308();
  pppuStack_c00 = &ppuStack_7f0;
  puStack_bf8 = puVar5;
  func_0x000107707ae4();
  if ((bRam00000001136d32e8 & 1) == 0) {
    iVar4 = 0x136d32e8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107714d08(0x11370ab98,&DAT_10f41cdea);
      ___cxa_guard_release(0x1136d32e8);
    }
  }
  if ((bRam00000001136d32f0 & 1) == 0) {
    iVar4 = 0x136d32f0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770bd90(0x11370abd0);
      ___cxa_guard_release(0x1136d32f0);
    }
  }
  if ((bRam00000001136d32f8 & 1) == 0) {
    iVar4 = 0x136d32f8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770d06c(0x11370ac08);
      ___cxa_guard_release(0x1136d32f8);
    }
  }
  if ((bRam00000001136d3300 & 1) == 0) {
    iVar4 = 0x136d3300;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a504(0x11370ac40);
      ___cxa_guard_release(0x1136d3300);
    }
  }
  if ((bRam00000001136d3308 & 1) == 0) {
    iVar4 = 0x136d3308;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a1d0(0x11370ac78);
      ___cxa_guard_release(0x1136d3308);
    }
  }
  if ((bRam00000001136d3310 & 1) == 0) {
    iVar4 = 0x136d3310;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770d05c(0x11370acb0);
      ___cxa_guard_release(0x1136d3310);
    }
  }
  if ((bRam00000001136d3318 & 1) == 0) {
    iVar4 = 0x136d3318;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a514(0x11370ace8);
      ___cxa_guard_release(0x1136d3318);
    }
  }
  if ((bRam00000001136d3320 & 1) == 0) {
    iVar4 = 0x136d3320;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770b67c(0x11370ad20);
      ___cxa_guard_release(0x1136d3320);
    }
  }
  iStack_c70 = 0;
  func_0x00010770cf68(adStack_d48);
  func_0x00010770d358();
  func_0x000107714830();
  if (iStack_c70 == 0) {
    adStack_d48[1] = 1.0;
    iStack_ce0 = 2;
    func_0x00010770d358();
    func_0x000107714830();
  }
  pdVar6 = adStack_d48;
  func_0x00010770c3f4();
  cVar1 = SBORROW4(iStack_ce0,2);
  cVar2 = iStack_ce0 + -2 < 0;
  uVar3 = iStack_ce0 == 2;
  if (!(bool)uVar3) {
    func_0x000107714934();
    func_0x00010771e910();
    func_0x000107714880();
    func_0x000104c2f714(auStack_db8);
    goto code_r0x0001076a0a30;
  }
  func_0x0001077148ac(auStack_db8);
  func_0x000107719970();
  iVar4 = (int)auStack_db8;
  func_0x00010771b9d0();
  if (iVar4 != 0) {
    iStack_e30 = 0;
    func_0x000107712e60();
    func_0x00010770e5f8();
    func_0x000107714830();
    if (iStack_e30 == 0) {
      func_0x000107716dc0();
      func_0x00010770e5f8();
      func_0x000107714830();
    }
    func_0x00010770ed5c();
    func_0x00010771a7a4();
    if (!(bool)uVar3) {
      func_0x00010770cad8();
      func_0x00010770f458();
      func_0x0001077160fc();
      func_0x000107715988();
      goto code_r0x0001076a07d4;
    }
    func_0x00010770c394(auStack_f78);
    func_0x00010771f828();
    if (!(bool)uVar3) {
      func_0x000107714934();
      func_0x000107717004(auStack_fe8);
      goto code_r0x0001076a07c4;
    }
    func_0x00010771c400();
    func_0x00010770d7b4();
    if ((bool)cVar1) goto code_r0x0001076a0bb8;
    func_0x000107711a44();
    if (((cVar2 != cVar1) && (func_0x000107711a28(), !(bool)cVar2)) &&
       (func_0x000107711678(), !(bool)uVar3)) {
      func_0x000107715190();
      unaff_d8 = 1.0;
      if (!(bool)uVar3) {
        func_0x00010770a6f4();
      }
    }
    func_0x000107718c84();
    func_0x0001077131b4();
    goto code_r0x0001076a07d0;
  }
  func_0x0001077148ac(auStack_e98);
  func_0x000107579348(auStack_e98);
  func_0x00010770df68();
  if ((int)pdVar6 == 0) {
    iStack_e30 = 0;
    func_0x000107712e60();
    unaff_x20 = (double *)0x0;
    func_0x00010770c184();
    func_0x000107714850();
    if (iStack_e30 == 0) {
      func_0x000107716dc0();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x00010771a7a4();
    if ((bool)uVar3) {
      func_0x000107718c84();
      func_0x00010770d7b4();
      if (!(bool)cVar1) {
        unaff_d8 = 500.0;
        func_0x000107716678();
        if (cVar2 != cVar1) {
          func_0x000107717f48();
          if ((bool)cVar2) {
code_r0x0001076a07b0:
            func_0x00010771c890();
            goto code_r0x0001076a09ec;
          }
          func_0x000107716668();
          if ((bool)cVar2) {
            func_0x000107708f20();
            if ((bool)uVar3) goto code_r0x0001076a07b0;
            func_0x000107715190();
            if ((bool)uVar3) {
code_r0x0001076a09b8:
              func_0x00010771c884();
              unaff_d8 = extraout_x8_01;
              goto code_r0x0001076a09ec;
            }
            func_0x0001077081e8();
          }
          else {
            func_0x000107716658();
            if ((bool)cVar2) {
              func_0x00010770865c();
              if ((bool)uVar3) goto code_r0x0001076a09b8;
              func_0x000107715190();
              if ((bool)uVar3) goto code_r0x0001076a09a8;
              func_0x000107707f98();
              param_3 = extraout_x8;
            }
            else {
              func_0x00010770bda0();
              if ((bool)uVar3) {
code_r0x0001076a09a8:
                func_0x00010771c89c();
                unaff_d8 = extraout_x8_00;
                goto code_r0x0001076a09ec;
              }
              func_0x000107715190();
              if ((bool)uVar3) goto code_r0x0001076a09e8;
              func_0x00010770cd4c();
              func_0x000107718180();
              param_3 = extraout_x8_02;
            }
          }
          unaff_d8 = param_1 + param_3 * (double)CONCAT44(uVar9,uVar8);
        }
code_r0x0001076a09e8:
        pdVar6 = (double *)0x1;
        goto code_r0x0001076a09ec;
      }
      func_0x000107713a08();
    }
    else {
      func_0x00010770cad8();
    }
    func_0x00010770f458();
    func_0x0001077160fc();
    func_0x00010771c50c();
code_r0x0001076a09ec:
    func_0x000107714850();
    func_0x000107714890();
    if (((ulong)pdVar6 & 1) == 0) goto code_r0x0001076a0a24;
    goto code_r0x0001076a09f8;
  }
  func_0x0001077148ac(auStack_e98);
  cVar1 = SBORROW4(iStack_e30,2);
  cVar2 = iStack_e30 + -2 < 0;
  uVar3 = iStack_e30 == 2;
  if (!(bool)uVar3) {
    func_0x000107714934();
    func_0x00010771df54();
    func_0x000107714880();
    func_0x00010771acac();
    func_0x000107715988();
    goto code_r0x0001076a0990;
  }
  pdVar6 = adStack_f08;
  func_0x00010770c394();
  func_0x00010771a7a4();
  if ((bool)uVar3) {
    func_0x000107718c84();
    func_0x00010770d7b4();
    if ((bool)cVar1) {
      func_0x000107713a08();
      goto code_r0x0001076a0814;
    }
    func_0x000107712d18();
    if ((cVar2 != cVar1) && (func_0x000107713270(), !(bool)cVar2)) {
      func_0x0001077162e4();
      if ((bool)cVar2) {
        uVar8 = 0xc1400000;
        uVar9 = 0;
        func_0x00010770996c();
        func_0x00010770b36c();
        if ((!(bool)uVar3) && (func_0x000107713e04(), !(bool)uVar3)) {
          func_0x00010770b398();
code_r0x0001076a0864:
          unaff_d8 = param_1 + param_3 * (double)CONCAT44(uVar9,uVar8);
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
            goto code_r0x0001076a0864;
          }
        }
      }
    }
    iStack_f10 = 0;
    func_0x00010770f7b8();
    func_0x00010770c51c();
    func_0x000107714850();
    if (iStack_f10 == 0) {
      func_0x000107716688();
      func_0x00010770c51c();
      func_0x000107714850();
    }
    func_0x00010770ce14();
    func_0x00010771afa0();
    if ((bool)uVar3) {
      func_0x000107710f50();
      func_0x00010770ee54();
      func_0x000107714888();
      func_0x000107716884();
      func_0x000107711250();
      func_0x000107714890();
      unaff_x20 = (double *)0x0;
      func_0x00010770d748();
      func_0x00010771bdd8();
      if ((bool)uVar3) {
        func_0x0001077191d8();
        func_0x000107716360();
        dVar7 = *pdVar6;
        func_0x00010770bfc8();
        if ((bool)cVar1) {
          func_0x000107711fd0();
          unaff_x20 = pdVar6;
          goto code_r0x0001076a0970;
        }
        func_0x00010770ffac();
        if ((cVar2 != cVar1) && (func_0x00010770ff84(), !(bool)cVar2)) {
          func_0x000107709778();
          func_0x00010770b600();
          if ((!(bool)uVar3) && (func_0x0001077176e4(), !(bool)uVar3)) {
            func_0x000107709f90();
          }
        }
        func_0x0001072cb4bc(auStack_e98);
        func_0x000107715654();
        unaff_d8 = (double)CONCAT44(uVar9,uVar8) * dVar7;
        unaff_x20 = (double *)0x1;
      }
      else {
        func_0x000107708a34();
code_r0x0001076a0970:
        func_0x00010770cf5c();
        func_0x000107714fdc();
        func_0x000107715988();
      }
      func_0x000107714888();
      func_0x000107714860();
    }
    else {
      func_0x000107714934();
      func_0x00010770f7c4();
      func_0x00010770f228();
      func_0x00010771626c();
      func_0x000107715988();
    }
    func_0x000107714850();
    func_0x000107714830();
  }
  else {
    func_0x00010770cad8();
code_r0x0001076a0814:
    func_0x00010770f458();
    func_0x0001077160fc();
    func_0x000107715988();
  }
  func_0x00010771147c();
code_r0x0001076a0990:
  func_0x000107719348();
  while( true ) {
    func_0x00010726af18();
    if (((ulong)unaff_x20 & 1) != 0) {
code_r0x0001076a09f8:
      pdVar6 = adStack_d48;
      func_0x0001072cb4bc();
      dStack_e90 = unaff_d8 * *pdVar6;
      unaff_x20 = (double *)0x0;
      iStack_e30 = 2;
      func_0x0001077148fc();
      func_0x000107714890();
    }
code_r0x0001076a0a24:
    func_0x00010770fe28();
    func_0x000107714828(auStack_db8);
code_r0x0001076a0a30:
    func_0x000107714838();
    func_0x000107714848();
    func_0x000107708038();
    if ((bool)uVar3) break;
    ___stack_chk_fail();
code_r0x0001076a0bb8:
    func_0x000107715230();
    func_0x00010771e33c();
code_r0x0001076a07c4:
    func_0x00010770fed0();
    func_0x000107715fd4();
    func_0x000107715988();
code_r0x0001076a07d0:
    func_0x00010770ec5c();
code_r0x0001076a07d4:
    func_0x000107714830();
  }
  return;
}



/* Entry: 1076a9774; end: 1076ab58f;  */

/* WARNING: Possible PIC construction at 0x0001076aa0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076aa1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076aa0d0) */
/* WARNING: Removing unreachable block (ram,0x0001076aa0dc) */
/* WARNING: Removing unreachable block (ram,0x0001076aa198) */
/* WARNING: Removing unreachable block (ram,0x0001076aa0fc) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1a8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa108) */
/* WARNING: Removing unreachable block (ram,0x0001076aa110) */
/* WARNING: Removing unreachable block (ram,0x0001076aa120) */
/* WARNING: Removing unreachable block (ram,0x0001076aa130) */
/* WARNING: Removing unreachable block (ram,0x0001076aa158) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1c0) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1c4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1c8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1d4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1ec) */
/* WARNING: Removing unreachable block (ram,0x0001076aa1f8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa200) */
/* WARNING: Removing unreachable block (ram,0x0001076aa208) */
/* WARNING: Removing unreachable block (ram,0x0001076aa218) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2a8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa228) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2b8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa234) */
/* WARNING: Removing unreachable block (ram,0x0001076aa23c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa24c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa25c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa280) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2d0) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2d4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2d8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2e4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa2f4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa304) */
/* WARNING: Removing unreachable block (ram,0x0001076aa30c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa31c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa32c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa334) */
/* WARNING: Removing unreachable block (ram,0x0001076aa344) */
/* WARNING: Removing unreachable block (ram,0x0001076aa354) */
/* WARNING: Removing unreachable block (ram,0x0001076aa384) */
/* WARNING: Removing unreachable block (ram,0x0001076aa398) */
/* WARNING: Removing unreachable block (ram,0x0001076aa3b4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa3a0) */
/* WARNING: Removing unreachable block (ram,0x0001076aa3bc) */
/* WARNING: Removing unreachable block (ram,0x0001076aa3c8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa3d8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa3e0) */
/* WARNING: Removing unreachable block (ram,0x0001076aa404) */
/* WARNING: Removing unreachable block (ram,0x0001076aa414) */
/* WARNING: Removing unreachable block (ram,0x0001076aa424) */
/* WARNING: Removing unreachable block (ram,0x0001076aa434) */
/* WARNING: Removing unreachable block (ram,0x0001076aa43c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa444) */
/* WARNING: Removing unreachable block (ram,0x0001076aa454) */
/* WARNING: Removing unreachable block (ram,0x0001076aa464) */
/* WARNING: Removing unreachable block (ram,0x0001076aa46c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa47c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa48c) */
/* WARNING: Removing unreachable block (ram,0x0001076aa4bc) */
/* WARNING: Removing unreachable block (ram,0x0001076aa4d0) */
/* WARNING: Removing unreachable block (ram,0x0001076aa4f4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa4d8) */
/* WARNING: Removing unreachable block (ram,0x0001076aa4fc) */
/* WARNING: Removing unreachable block (ram,0x0001076aa508) */
/* WARNING: Removing unreachable block (ram,0x0001076aa518) */
/* WARNING: Removing unreachable block (ram,0x0001076aa564) */
/* WARNING: Removing unreachable block (ram,0x0001076aa570) */
/* WARNING: Removing unreachable block (ram,0x0001076aa5a4) */
/* WARNING: Removing unreachable block (ram,0x0001076aa578) */
/* WARNING: Removing unreachable block (ram,0x0001076aa5a8) */

void FUN_1076a9774(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  undefined1 *unaff_x21;
  int iVar7;
  undefined1 *unaff_x24;
  undefined1 auStack_a80 [120];
  undefined1 auStack_a08 [104];
  int iStack_9a0;
  undefined1 *puStack_990;
  undefined1 *puStack_950;
  undefined1 *puStack_910;
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
  undefined1 auStack_668 [112];
  undefined1 auStack_5f8 [112];
  undefined1 auStack_588 [112];
  byte bStack_518;
  int iStack_510;
  undefined1 auStack_508 [112];
  undefined1 auStack_498 [112];
  undefined1 auStack_428 [112];
  byte bStack_3b8;
  int iStack_3b0;
  undefined1 auStack_3a8 [112];
  undefined1 auStack_338 [112];
  undefined1 auStack_2c8 [120];
  int iStack_250;
  char acStack_248 [112];
  undefined1 auStack_1d8 [216];
  undefined4 uStack_100;
  undefined1 auStack_88 [112];
  byte bStack_18;
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d3720 & 1) == 0) {
    iVar7 = 0x136d3720;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708dc0(0x11370c8e8);
      ___cxa_guard_release(0x1136d3720);
    }
  }
  if ((bRam00000001136d3728 & 1) == 0) {
    iVar7 = 0x136d3728;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a0ec(0x11370c920);
      ___cxa_guard_release(0x1136d3728);
    }
  }
  if ((bRam00000001136d3730 & 1) == 0) {
    iVar7 = 0x136d3730;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f50(0x11370c958);
      ___cxa_guard_release(0x1136d3730);
    }
  }
  if ((bRam00000001136d3738 & 1) == 0) {
    iVar7 = 0x136d3738;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f00(0x11370c990);
      ___cxa_guard_release(0x1136d3738);
    }
  }
  if ((bRam00000001136d3740 & 1) == 0) {
    iVar7 = 0x136d3740;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770c128(0x11370c9c8);
      ___cxa_guard_release(0x1136d3740);
    }
  }
  if ((bRam00000001136d3748 & 1) == 0) {
    iVar7 = 0x136d3748;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ef0(0x11370ca00);
      ___cxa_guard_release(0x1136d3748);
    }
  }
  if ((bRam00000001136d3750 & 1) == 0) {
    iVar7 = 0x136d3750;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ee0(0x11370ca38);
      ___cxa_guard_release(0x1136d3750);
    }
  }
  if ((bRam00000001136d3758 & 1) == 0) {
    iVar7 = 0x136d3758;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770927c(0x11370ca70);
      ___cxa_guard_release(0x1136d3758);
    }
  }
  if ((bRam00000001136d3760 & 1) == 0) {
    iVar7 = 0x136d3760;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770abb8(0x11370caa8);
      ___cxa_guard_release(0x1136d3760);
    }
  }
  if ((bRam00000001136d3768 & 1) == 0) {
    iVar7 = 0x136d3768;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077094a0(0x11370cae0);
      ___cxa_guard_release(0x1136d3768);
    }
  }
  if ((bRam00000001136d3770 & 1) == 0) {
    iVar7 = 0x136d3770;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770c108(0x11370cb18);
      ___cxa_guard_release(0x1136d3770);
    }
  }
  if ((bRam00000001136d3778 & 1) == 0) {
    iVar7 = 0x136d3778;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090d0(0x11370cb50);
      ___cxa_guard_release(0x1136d3778);
    }
  }
  if ((bRam00000001136d3780 & 1) == 0) {
    iVar7 = 0x136d3780;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770c0f8(0x11370cb88);
      ___cxa_guard_release(0x1136d3780);
    }
  }
  if ((bRam00000001136d3788 & 1) == 0) {
    iVar7 = 0x136d3788;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709738(0x11370cbc0);
      ___cxa_guard_release(0x1136d3788);
    }
  }
  if ((bRam00000001136d3790 & 1) == 0) {
    iVar7 = 0x136d3790;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709728(0x11370cbf8);
      ___cxa_guard_release(0x1136d3790);
    }
  }
  if ((bRam00000001136d3798 & 1) == 0) {
    iVar7 = 0x136d3798;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090e0(0x11370cc30);
      ___cxa_guard_release(0x1136d3798);
    }
  }
  if ((bRam00000001136d37a0 & 1) == 0) {
    iVar7 = 0x136d37a0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090f0(0x11370cc68);
      ___cxa_guard_release(0x1136d37a0);
    }
  }
  if ((bRam00000001136d37a8 & 1) == 0) {
    iVar7 = 0x136d37a8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709060(0x11370cca0);
      ___cxa_guard_release(0x1136d37a8);
    }
  }
  if ((bRam00000001136d37b0 & 1) == 0) {
    iVar7 = 0x136d37b0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708e10(0x11370ccd8);
      ___cxa_guard_release(0x1136d37b0);
    }
  }
  if ((bRam00000001136d37b8 & 1) == 0) {
    iVar7 = 0x136d37b8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708bb0(0x11370cd10);
      ___cxa_guard_release(0x1136d37b8);
    }
  }
  if ((bRam00000001136d37c0 & 1) == 0) {
    iVar7 = 0x136d37c0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708de0(0x11370cd48);
      ___cxa_guard_release(0x1136d37c0);
    }
  }
  if ((bRam00000001136d37c8 & 1) == 0) {
    iVar7 = 0x136d37c8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708dd0(0x11370cd80);
      ___cxa_guard_release(0x1136d37c8);
    }
  }
  if ((bRam00000001136d37d0 & 1) == 0) {
    iVar7 = 0x136d37d0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708e00(0x11370cdb8);
      ___cxa_guard_release(0x1136d37d0);
    }
  }
  if ((bRam00000001136d37d8 & 1) == 0) {
    iVar7 = 0x136d37d8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708df0(0x11370cdf0);
      ___cxa_guard_release(0x1136d37d8);
    }
  }
  if ((bRam00000001136d37e0 & 1) == 0) {
    iVar7 = 0x136d37e0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708db0(0x11370ce28);
      ___cxa_guard_release(0x1136d37e0);
    }
  }
  if ((bRam00000001136d37e8 & 1) == 0) {
    iVar7 = 0x136d37e8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077092ac(0x11370ce60);
      ___cxa_guard_release(0x1136d37e8);
    }
  }
  if ((bRam00000001136d37f0 & 1) == 0) {
    iVar7 = 0x136d37f0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770d200(0x11370ce98);
      ___cxa_guard_release(0x1136d37f0);
    }
  }
  if ((bRam00000001136d37f8 & 1) == 0) {
    iVar7 = 0x136d37f8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a9c(0x11370ced0);
      ___cxa_guard_release(0x1136d37f8);
    }
  }
  if ((bRam00000001136d3800 & 1) == 0) {
    iVar7 = 0x136d3800;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f70(0x11370cf08);
      ___cxa_guard_release(0x1136d3800);
    }
  }
  if ((bRam00000001136d3808 & 1) == 0) {
    iVar7 = 0x136d3808;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708fd0(0x11370cf40);
      ___cxa_guard_release(0x1136d3808);
    }
  }
  if ((bRam00000001136d3810 & 1) == 0) {
    iVar7 = 0x136d3810;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a8c(0x11370cf78);
      ___cxa_guard_release(0x1136d3810);
    }
  }
  if ((bRam00000001136d3818 & 1) == 0) {
    iVar7 = 0x136d3818;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a7c(0x11370cfb0);
      ___cxa_guard_release(0x1136d3818);
    }
  }
  if ((bRam00000001136d3820 & 1) == 0) {
    iVar7 = 0x136d3820;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a6c(0x11370cfe8);
      ___cxa_guard_release(0x1136d3820);
    }
  }
  if ((bRam00000001136d3828 & 1) == 0) {
    iVar7 = 0x136d3828;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a5c(0x11370d020);
      ___cxa_guard_release(0x1136d3828);
    }
  }
  if ((bRam00000001136d3830 & 1) == 0) {
    iVar7 = 0x136d3830;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770995c(0x11370d058);
      ___cxa_guard_release(0x1136d3830);
    }
  }
  if ((bRam00000001136d3838 & 1) == 0) {
    iVar7 = 0x136d3838;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709570(0x11370d090);
      ___cxa_guard_release(0x1136d3838);
    }
  }
  if ((bRam00000001136d3840 & 1) == 0) {
    iVar7 = 0x136d3840;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a4c(0x11370d0c8);
      ___cxa_guard_release(0x1136d3840);
    }
  }
  if ((bRam00000001136d3848 & 1) == 0) {
    iVar7 = 0x136d3848;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709394(0x11370d100);
      ___cxa_guard_release(0x1136d3848);
    }
  }
  if ((bRam00000001136d3850 & 1) == 0) {
    iVar7 = 0x136d3850;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a3c(0x11370d138);
      ___cxa_guard_release(0x1136d3850);
    }
  }
  if ((bRam00000001136d3858 & 1) == 0) {
    iVar7 = 0x136d3858;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a2c(0x11370d170);
      ___cxa_guard_release(0x1136d3858);
    }
  }
  if ((bRam00000001136d3860 & 1) == 0) {
    iVar7 = 0x136d3860;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770bab4(0x11370d1a8);
      ___cxa_guard_release(0x1136d3860);
    }
  }
  if ((bRam00000001136d3868 & 1) == 0) {
    iVar7 = 0x136d3868;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077093c4(0x11370d1e0);
      ___cxa_guard_release(0x1136d3868);
    }
  }
  if ((bRam00000001136d3870 & 1) == 0) {
    iVar7 = 0x136d3870;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a1c(0x11370d218);
      ___cxa_guard_release(0x1136d3870);
    }
  }
  if ((bRam00000001136d3878 & 1) == 0) {
    iVar7 = 0x136d3878;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709020(0x11370d250);
      ___cxa_guard_release(0x1136d3878);
    }
  }
  if ((bRam00000001136d3880 & 1) == 0) {
    iVar7 = 0x136d3880;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077093a4(0x11370d288);
      ___cxa_guard_release(0x1136d3880);
    }
  }
  if ((bRam00000001136d3888 & 1) == 0) {
    iVar7 = 0x136d3888;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a0c(0x11370d2c0);
      ___cxa_guard_release(0x1136d3888);
    }
  }
  if ((bRam00000001136d3890 & 1) == 0) {
    iVar7 = 0x136d3890;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077099fc(0x11370d2f8);
      ___cxa_guard_release(0x1136d3890);
    }
  }
  if ((bRam00000001136d3898 & 1) == 0) {
    iVar7 = 0x136d3898;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770c0c0(0x11370d330);
      ___cxa_guard_release(0x1136d3898);
    }
  }
  if ((bRam00000001136d38a0 & 1) == 0) {
    iVar7 = 0x136d38a0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077099ac(0x11370d368);
      ___cxa_guard_release(0x1136d38a0);
    }
  }
  if ((bRam00000001136d38a8 & 1) == 0) {
    iVar7 = 0x136d38a8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a990(0x11370d3a0);
      ___cxa_guard_release(0x1136d38a8);
    }
  }
  if ((bRam00000001136d38b0 & 1) == 0) {
    iVar7 = 0x136d38b0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709eac(0x11370d3d8);
      ___cxa_guard_release(0x1136d38b0);
    }
  }
  if ((bRam00000001136d38b8 & 1) == 0) {
    iVar7 = 0x136d38b8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709e9c(0x11370d410);
      ___cxa_guard_release(0x1136d38b8);
    }
  }
  uStack_100 = 0;
  iVar7 = 0x1370c8e8;
  func_0x000107714c2c(auStack_1d8);
  pcVar4 = acStack_248;
  func_0x00010770c178();
  func_0x0001077174e0();
  uVar3 = iStack_250 == 1;
  if ((bool)uVar3) {
    func_0x00010771d7f8();
    func_0x00010756e584();
    iVar7 = 0x1370ca00;
    uVar3 = *pcVar4 == '\x01';
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cd04();
      func_0x00010771d548();
      func_0x00010771039c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_9a0 == 0) {
        func_0x00010771d53c();
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
          if (!(bool)uVar3) goto LAB_1076a9d44;
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
LAB_1076aa5f0:
          func_0x00010771a388();
          iVar7 = 0x1370ca00;
          goto LAB_1076aa61c;
        }
      }
LAB_1076a9d44:
      func_0x0001077186b4();
      func_0x00010771538c();
      iVar7 = 0x1370ca00;
      goto LAB_1076aa61c;
    }
    func_0x0001072ddd58(auStack_338,0x11370ca70);
    func_0x00010770c178(auStack_3a8);
    func_0x0001077174d0();
    uVar3 = iStack_3b0 == 1;
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_428);
LAB_1076aa610:
      func_0x00010771180c();
      func_0x0001077117f4();
      func_0x0001077117e8();
      iVar7 = 0x1370ca00;
      goto LAB_1076aa61c;
    }
    func_0x00010771d7e8();
    func_0x00010756e584();
    func_0x000107714974();
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cbb4();
      func_0x00010771d548();
      func_0x00010771038c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_9a0 == 0) {
        func_0x00010771d53c();
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
          if (!(bool)uVar3) goto LAB_1076a9e88;
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
LAB_1076aa5e4:
          func_0x00010771180c();
          func_0x0001077117f4();
          func_0x0001077117e8();
          goto LAB_1076aa5f0;
        }
      }
LAB_1076a9e88:
      func_0x0001077186ac();
      func_0x00010771538c();
      goto LAB_1076aa610;
    }
    func_0x0001072ddd58(auStack_498,0x11370cae0);
    func_0x00010770c178(auStack_508);
    func_0x0001077174c0();
    uVar3 = iStack_510 == 1;
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_588);
LAB_1076aa604:
      func_0x000107711818();
      func_0x00010771183c();
      func_0x000107711800();
      goto LAB_1076aa610;
    }
    func_0x00010771d7d8();
    func_0x00010756e584();
    func_0x000107714974();
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cba4();
      func_0x00010771d548();
      func_0x00010771036c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_9a0 == 0) {
        func_0x00010771d53c();
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
          if (!(bool)uVar3) goto LAB_1076aa0a8;
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
LAB_1076aa5d8:
          func_0x000107711818();
          func_0x00010771183c();
          func_0x000107711800();
          goto LAB_1076aa5e4;
        }
      }
LAB_1076aa0a8:
      func_0x0001077186a4();
      func_0x00010771538c();
      goto LAB_1076aa604;
    }
    func_0x0001072ddd58(auStack_5f8,0x11370cb50);
    puVar5 = auStack_668;
    func_0x00010770c178();
    func_0x000107711ca8();
    func_0x00010771cf78();
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_6e8);
LAB_1076aa5f8:
      func_0x00010771005c();
      func_0x00010770fe04();
      func_0x00010770fdf8();
      goto LAB_1076aa604;
    }
    func_0x00010771ab18();
    func_0x00010756e584();
    func_0x000107714974();
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x0001077074c4();
      func_0x000107710068();
      func_0x00010770ec50();
      func_0x000107714848();
      func_0x000107714898();
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x0001077153c0();
        func_0x000107714858();
        if ((bStack_7e0 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076aa180;
          func_0x000107714870();
          func_0x0001077150d4();
          func_0x000107714858();
        }
        if ((bStack_768 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076aa180;
          func_0x000107714870();
          func_0x00010771515c();
          func_0x000107714858();
        }
        if ((bStack_18 & 1) == 0) {
          iStack_9a0 = 0;
          func_0x00010771d548();
          func_0x000107712c44();
          unaff_x24 = auStack_a08;
          func_0x00010770c37c();
          func_0x000107714860();
          if (iStack_9a0 == 0) {
            func_0x00010771d53c();
            func_0x000107712c44();
            func_0x00010770c37c();
            func_0x000107714860();
          }
          func_0x00010770ee6c();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076aa180;
          func_0x000107714870();
          func_0x000107715900();
          func_0x000107714858();
        }
        if ((bStack_6f0 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto LAB_1076aa180;
          func_0x000107714870();
          func_0x000107714cbc();
          func_0x000107714858();
        }
        func_0x00010771b578();
        func_0x00010771b568(auStack_8c8);
        func_0x00010771b558(auStack_850);
        puStack_950 = auStack_7d8;
        func_0x000107714c0c(unaff_x24 + 0xc0);
        puStack_910 = auStack_88;
        func_0x000107714c04(unaff_x24 + 0x100);
        puStack_8d0 = auStack_760;
        func_0x000107707d9c();
        func_0x000107715164();
        do {
          func_0x000107714ea0();
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
          goto LAB_1076aa5d8;
        }
      }
LAB_1076aa180:
      func_0x000107714d80();
      func_0x000107715024();
      func_0x00010771507c();
      func_0x0001077150ac();
      func_0x00010771538c();
      goto LAB_1076aa5f8;
    }
    func_0x0001077074c4();
    func_0x00010771314c();
    func_0x000107714af0();
  }
  else {
    func_0x00010770c1d0(auStack_2c8);
LAB_1076aa61c:
    func_0x00010771349c();
    func_0x000107710338();
    func_0x000107713440();
    func_0x0001077134a8();
    func_0x000107707d28();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar5 = (undefined1 *)0x1136d38b8;
    ___cxa_guard_abort();
    func_0x000107714988();
  }
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718644();
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
  puVar6 = puVar5;
  if ((bool)uVar3) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    puVar6 = puVar5;
    if (!(bool)uVar3) goto code_r0x0001076ab630;
    func_0x000107714bc0();
    puVar6 = puVar5;
    func_0x00010771e8a0();
    unaff_x21 = puVar5;
    if (((ulong)puVar6 & 1) != 0) {
code_r0x0001076ab754:
      func_0x000107714da8();
code_r0x0001076ab758:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if (((ulong)puVar6 & 1) == 0) {
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
        unaff_x21 = (undefined1 *)(ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076ab7b8;
    }
    func_0x000107714c8c();
    if ((int)puVar6 != 0) {
      func_0x000107718644();
      goto code_r0x0001076ab754;
    }
    func_0x00010771fd58();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771fd4c();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718644();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)uVar3) {
      func_0x000107714cc4();
      func_0x00010771fd40();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718644();
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
          goto code_r0x0001076ab704;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076ab70c;
      }
      goto code_r0x0001076ab72c;
    }
    func_0x000107707eac();
    uVar2 = uVar3;
code_r0x0001076ab724:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076ab72c:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    uVar3 = uVar2;
  }
  else {
code_r0x0001076ab630:
    func_0x00010771fd58();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771fd4c();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718644();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)uVar3) {
      func_0x000107707eac();
      uVar2 = uVar3;
      goto code_r0x0001076ab724;
    }
    func_0x000107714cc4();
    func_0x00010771fd40();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)uVar3) goto code_r0x0001076ab72c;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718644();
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
code_r0x0001076ab704:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076ab70c:
    func_0x000107714830();
    func_0x000107714850();
    uVar3 = iVar7 == 3;
    if ((bool)uVar3) goto code_r0x0001076ab758;
  }
  func_0x000107715758();
code_r0x0001076ab7b8:
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



/* Entry: 1076b0018; end: 1076b1d0f;  */

void FUN_1076b0018(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined1 *unaff_x20;
  int unaff_w25;
  undefined1 auStack_e88 [112];
  undefined1 auStack_e18 [112];
  undefined1 auStack_da8 [104];
  int iStack_d40;
  undefined1 auStack_d38 [104];
  int iStack_cd0;
  int iStack_cc0;
  undefined1 auStack_cb8 [112];
  undefined1 auStack_c48 [56];
  undefined1 auStack_c10 [104];
  int iStack_ba8;
  undefined1 auStack_ba0 [104];
  int iStack_b38;
  undefined1 auStack_b30 [104];
  int iStack_ac8;
  undefined1 auStack_ab0 [56];
  undefined1 auStack_a78 [112];
  undefined1 auStack_a08 [104];
  int iStack_9a0;
  undefined1 auStack_998 [104];
  int iStack_930;
  undefined1 auStack_928 [104];
  int iStack_8c0;
  int iStack_8b0;
  undefined1 auStack_8a8 [56];
  undefined1 auStack_870 [216];
  int iStack_798;
  undefined1 auStack_790 [104];
  int iStack_728;
  int iStack_718;
  undefined1 auStack_710 [56];
  undefined1 auStack_6d8 [56];
  undefined1 auStack_6a0 [120];
  int iStack_628;
  undefined1 auStack_620 [112];
  undefined1 auStack_5b0 [112];
  undefined1 auStack_540 [8];
  undefined1 uStack_538;
  int iStack_4d8;
  int iStack_4c8;
  undefined1 auStack_4c0 [112];
  undefined1 auStack_450 [112];
  undefined1 auStack_3e0 [104];
  int iStack_378;
  int iStack_368;
  undefined1 auStack_360 [112];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [104];
  char acStack_280 [120];
  int iStack_208;
  undefined1 auStack_200 [112];
  undefined1 auStack_190 [112];
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [104];
  int iStack_80;
  undefined1 auStack_78 [104];
  int iStack_10;
  
  func_0x0001077184d0();
  func_0x000107707670();
  if ((bRam00000001136d3ae0 & 1) == 0) {
    iVar5 = 0x136d3ae0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708dc0(0x11370e2f0);
      ___cxa_guard_release(0x1136d3ae0);
    }
  }
  if ((bRam00000001136d3ae8 & 1) == 0) {
    iVar5 = 0x136d3ae8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770a0ec(0x11370e328);
      ___cxa_guard_release(0x1136d3ae8);
    }
  }
  if ((bRam00000001136d3af0 & 1) == 0) {
    iVar5 = 0x136d3af0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708f70(0x11370e360);
      ___cxa_guard_release(0x1136d3af0);
    }
  }
  if ((bRam00000001136d3af8 & 1) == 0) {
    iVar5 = 0x136d3af8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107714998(0x11370e398,&UNK_10f424421);
      ___cxa_guard_release(0x1136d3af8);
    }
  }
  if ((bRam00000001136d3b00 & 1) == 0) {
    iVar5 = 0x136d3b00;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107710e3c(0x11370e3d0);
      ___cxa_guard_release(0x1136d3b00);
    }
  }
  if ((bRam00000001136d3b08 & 1) == 0) {
    iVar5 = 0x136d3b08;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770927c(0x11370e408);
      ___cxa_guard_release(0x1136d3b08);
    }
  }
  if ((bRam00000001136d3b10 & 1) == 0) {
    iVar5 = 0x136d3b10;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077094a0(0x11370e440);
      ___cxa_guard_release(0x1136d3b10);
    }
  }
  if ((bRam00000001136d3b18 & 1) == 0) {
    iVar5 = 0x136d3b18;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077090d0(0x11370e478);
      ___cxa_guard_release(0x1136d3b18);
    }
  }
  if ((bRam00000001136d3b20 & 1) == 0) {
    iVar5 = 0x136d3b20;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107714a18(0x11370e4b0,&UNK_10f424443);
      ___cxa_guard_release(0x1136d3b20);
    }
  }
  if ((bRam00000001136d3b28 & 1) == 0) {
    iVar5 = 0x136d3b28;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708e10(0x11370e4e8);
      ___cxa_guard_release(0x1136d3b28);
    }
  }
  if ((bRam00000001136d3b30 & 1) == 0) {
    iVar5 = 0x136d3b30;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708bb0(0x11370e520);
      ___cxa_guard_release(0x1136d3b30);
    }
  }
  if ((bRam00000001136d3b38 & 1) == 0) {
    iVar5 = 0x136d3b38;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708de0(0x11370e558);
      ___cxa_guard_release(0x1136d3b38);
    }
  }
  if ((bRam00000001136d3b40 & 1) == 0) {
    iVar5 = 0x136d3b40;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708dd0(0x11370e590);
      ___cxa_guard_release(0x1136d3b40);
    }
  }
  if ((bRam00000001136d3b48 & 1) == 0) {
    iVar5 = 0x136d3b48;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708e00(0x11370e5c8);
      ___cxa_guard_release(0x1136d3b48);
    }
  }
  if ((bRam00000001136d3b50 & 1) == 0) {
    iVar5 = 0x136d3b50;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708df0(0x11370e600);
      ___cxa_guard_release(0x1136d3b50);
    }
  }
  if ((bRam00000001136d3b58 & 1) == 0) {
    iVar5 = 0x136d3b58;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708db0(0x11370e638);
      ___cxa_guard_release(0x1136d3b58);
    }
  }
  if ((bRam00000001136d3b60 & 1) == 0) {
    iVar5 = 0x136d3b60;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077093c4(0x11370e670);
      ___cxa_guard_release(0x1136d3b60);
    }
  }
  if ((bRam00000001136d3b68 & 1) == 0) {
    iVar5 = 0x136d3b68;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107709020(0x11370e6a8);
      ___cxa_guard_release(0x1136d3b68);
    }
  }
  if ((bRam00000001136d3b70 & 1) == 0) {
    iVar5 = 0x136d3b70;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107714998(0x11370e6e0,&UNK_10f424455);
      ___cxa_guard_release(0x1136d3b70);
    }
  }
  if ((bRam00000001136d3b78 & 1) == 0) {
    iVar5 = 0x136d3b78;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077093a4(0x11370e718);
      ___cxa_guard_release(0x1136d3b78);
    }
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_120);
  func_0x000107714d54(auStack_190);
  func_0x00010770c178(auStack_200);
  func_0x00010771b354();
  uVar2 = iStack_208 == 1;
  if (!(bool)uVar2) {
    func_0x00010770c1d0(acStack_280);
    goto LAB_1076b1278;
  }
  pcVar6 = acStack_280;
  func_0x0001073405dc();
  func_0x00010756e584();
  if (*pcVar6 == '\x01') {
    func_0x00010771490c();
    func_0x0001077148e0(auStack_6a0);
    iStack_378 = 0;
    func_0x00010771c7c0();
    func_0x00010770c178(auStack_540);
    unaff_x20 = auStack_3e0;
    func_0x00010770c1a0();
    func_0x000107714830();
    if (iStack_378 == 0) {
      uStack_538 = 0;
      iStack_4d8 = 1;
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    iVar5 = iStack_4d8;
    uVar2 = iStack_4d8 == 1;
    if ((bool)uVar2) {
      func_0x000107280568(auStack_540);
      func_0x0001077131f4();
      uVar1 = 0xa10;
      if ((bool)uVar2) {
        uVar1 = extraout_x8;
      }
      func_0x00010771555c(uVar1,auStack_6a0);
      func_0x00010771d6ec();
    }
    else {
      func_0x00010770ef60();
      func_0x000107579e98();
      func_0x000107714880();
      func_0x000107716430();
    }
    func_0x000107714850();
    func_0x000107714890();
    func_0x0001077189d8();
    uVar2 = iVar5 == 1;
    if ((bool)uVar2) goto LAB_1076b032c;
    goto LAB_1076b1278;
  }
  func_0x0001077189e8(auStack_2f0);
  func_0x00010770b3e4(auStack_360);
  func_0x00010771b318();
  uVar2 = iStack_368 == 1;
  if (!(bool)uVar2) {
    func_0x00010770c1d0(auStack_3e0);
    goto LAB_1076b1264;
  }
  func_0x00010771d6e4();
  func_0x00010756e584();
  func_0x000107714974();
  if ((bool)uVar2) {
    func_0x00010771c7b0();
    goto LAB_1076b0320;
  }
  func_0x00010771b480(auStack_450);
  func_0x00010770b3e4(auStack_4c0);
  func_0x00010771bd94();
  uVar2 = iStack_4c8 == 1;
  if (!(bool)uVar2) {
    func_0x00010770c1d0(auStack_540);
    goto LAB_1076b1258;
  }
  func_0x0001073405dc(auStack_540);
  func_0x00010756e584();
  func_0x000107714974();
  if ((bool)uVar2) {
    func_0x00010771c7b0();
    goto LAB_1076b0314;
  }
  func_0x000107719614(auStack_5b0);
  func_0x00010770b3e4(auStack_620);
  func_0x00010771b344();
  uVar2 = iStack_628 == 1;
  if (!(bool)uVar2) {
    func_0x00010770c1d0(auStack_6a0);
    goto LAB_1076b124c;
  }
  func_0x0001073405dc(auStack_6a0);
  func_0x00010756e584();
  func_0x000107714974();
  if ((bool)uVar2) {
    func_0x00010771490c();
    func_0x0001077148e0(auStack_b30);
    iStack_728 = 0;
    func_0x00010771c7c0();
    func_0x00010770c178(auStack_928);
    unaff_x20 = auStack_790;
    func_0x00010770c1a0();
    func_0x000107714830();
    if (iStack_728 == 0) {
      func_0x0001077195b4();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    iVar5 = iStack_8c0;
    uVar2 = iStack_8c0 == 1;
    if ((bool)uVar2) {
      func_0x00010771d6d0();
      func_0x0001077131f4();
      uVar1 = 0xb28;
      if ((bool)uVar2) {
        uVar1 = extraout_x8_00;
      }
      func_0x00010771555c(uVar1,auStack_b30);
      func_0x00010771d6f8();
    }
    else {
      func_0x0001077148b4();
      func_0x00010771d674(auStack_d38);
      func_0x00010770f458();
      func_0x0001077160fc();
    }
    func_0x000107714850();
    func_0x000107714890();
    func_0x00010771880c();
    uVar2 = iVar5 == 1;
    if ((bool)uVar2) goto LAB_1076b123c;
    goto LAB_1076b124c;
  }
  func_0x000107712454();
  func_0x00010771490c();
  func_0x0001077148e0(auStack_710);
  iStack_8c0 = 0;
  func_0x00010771fbc4();
  func_0x0001077109ac();
  func_0x00010770c448();
  func_0x000107714848();
  if (iStack_8c0 == 0) {
    func_0x000107716e78();
    func_0x00010771ada0();
    func_0x00010770c448();
    func_0x000107714848();
  }
  func_0x00010771e30c();
  func_0x00010771bc7c();
  func_0x00010771e1e8();
  func_0x000107714848();
  func_0x0001077160fc();
  func_0x000107714830();
  uVar3 = iStack_718 == 1;
  if ((bool)uVar3) {
    puVar7 = auStack_790;
    func_0x0001073405dc();
    func_0x00010770c29c(puVar7);
    uVar3 = iStack_798 == 3;
    if (!(bool)uVar3) goto LAB_1076b04d0;
    func_0x00010771d698();
    func_0x000107714518();
    iVar5 = (int)puVar7;
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107714350();
      if (iVar5 != 0) {
        func_0x000107716e78();
        goto LAB_1076b0604;
      }
      iStack_8c0 = 0;
      func_0x00010771a140();
      func_0x0001077109ac();
      func_0x00010770c448();
      func_0x000107714848();
      if (iStack_8c0 == 0) {
        iStack_ac8 = 0;
        func_0x00010771a9f0();
        func_0x00010770d0e8();
        unaff_w25 = (int)auStack_b30;
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_ac8 == 0) {
          func_0x000107716e78();
          func_0x000107713bc8();
          func_0x00010770c3e8();
          func_0x000107714848();
        }
        func_0x00010770c4dc();
        func_0x00010771f81c();
        if ((bool)uVar3) {
          func_0x000107718d7c();
          func_0x00010771a9e4();
          func_0x000107718350();
          func_0x00010770d154();
          func_0x000107714888();
          func_0x000107714898();
          uVar2 = 0;
          if ((bool)uVar3) {
            func_0x000107714870();
            func_0x00010770aab0();
            func_0x00010770e724();
            if (iStack_8c0 == 0) {
              func_0x000107716e78();
              func_0x0001077173fc();
              func_0x00010770cee0();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            goto LAB_1076b0870;
          }
          goto LAB_1076b05d8;
        }
        func_0x00010770b968();
        uVar2 = uVar3;
        goto LAB_1076b05d0;
      }
LAB_1076b0870:
      func_0x00010770d86c();
      func_0x00010771eae8();
      if (!(bool)uVar3) {
        func_0x000107712290();
        goto LAB_1076b05b0;
      }
      func_0x00010771a058();
      func_0x0001077195e4();
      goto LAB_1076b05b8;
    }
    func_0x00010771d470();
LAB_1076b0604:
    func_0x0001077195e4();
  }
  else {
    iStack_798 = 0;
LAB_1076b04d0:
    iStack_8c0 = 0;
    func_0x00010771a140();
    func_0x0001077109ac();
    func_0x00010770c448();
    func_0x000107714848();
    if (iStack_8c0 == 0) {
      iStack_ac8 = 0;
      func_0x00010771a9f0();
      func_0x00010770d0e8();
      unaff_w25 = (int)auStack_b30;
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_ac8 == 0) {
        func_0x000107716e78();
        func_0x000107713bc8();
        func_0x00010770c3e8();
        func_0x000107714848();
      }
      func_0x00010770c4dc();
      func_0x00010771f81c();
      if ((bool)uVar3) {
        func_0x000107718d7c();
        func_0x00010771a9e4();
        func_0x000107718350();
        func_0x00010770d154();
        func_0x000107714888();
        func_0x000107714898();
        uVar2 = 0;
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x00010770aab0();
          func_0x00010770e724();
          if (iStack_8c0 == 0) {
            func_0x000107716e78();
            func_0x0001077173fc();
            func_0x00010770cee0();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          goto LAB_1076b04f0;
        }
      }
      else {
        func_0x00010770b968();
        uVar2 = uVar3;
LAB_1076b05d0:
        func_0x00010770d8e0();
        func_0x0001077152c4();
      }
LAB_1076b05d8:
      func_0x000107714848();
      func_0x000107714860();
      func_0x000107714830();
      goto LAB_1076b05e4;
    }
LAB_1076b04f0:
    func_0x00010770d86c();
    func_0x00010771eae8();
    if ((bool)uVar3) {
      func_0x00010771a058();
      func_0x0001077195e4();
    }
    else {
      func_0x000107712290();
LAB_1076b05b0:
      func_0x00010770f458();
      func_0x0001077160fc();
    }
LAB_1076b05b8:
    func_0x000107714848();
    func_0x000107714830();
    uVar2 = unaff_w25 == 3;
    if (!(bool)uVar2) {
LAB_1076b05e4:
      func_0x00010770de18();
      func_0x000107713db8();
      func_0x0001077190c8();
      func_0x000107718028();
      goto LAB_1076b124c;
    }
    unaff_w25 = 3;
  }
  func_0x00010771d998();
  func_0x00010771d470();
  iVar5 = (int)auStack_870;
  func_0x000104c2fe00();
  func_0x00010771d9b0();
  if (iVar5 != 0) {
    func_0x000107712440();
    iStack_8c0 = 0;
    func_0x00010771c7c0();
    func_0x00010770c178(auStack_b30);
    func_0x00010770c1a0();
    func_0x000107714830();
    if (iStack_8c0 == 0) {
      func_0x000107718308();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    iVar5 = iStack_ac8;
    uVar2 = iStack_ac8 == 1;
    if ((bool)uVar2) {
      func_0x000107718dc8();
      func_0x0001077131f4();
      uVar1 = 0xa10;
      if ((bool)uVar2) {
        uVar1 = extraout_x8_01;
      }
      func_0x00010771555c(uVar1,auStack_d38);
      func_0x00010771d6c4();
    }
    else {
      func_0x00010770f3ec();
      func_0x000107716d64();
      func_0x00010770d8e0();
      func_0x0001077152c4();
    }
    func_0x000107714850();
    func_0x000107714890();
    func_0x0001077160fc();
    uVar3 = iVar5 == 1;
    bVar4 = (bool)uVar3;
    goto joined_r0x0001076b0748;
  }
  func_0x00010771490c();
  puVar7 = auStack_8a8;
  func_0x0001077148e0(puVar7);
  iStack_ac8 = 0;
  func_0x00010771fbc4();
  func_0x00010770d0e8();
  func_0x00010770c448();
  func_0x000107714848();
  if (iStack_ac8 == 0) {
    func_0x000107716e78();
    func_0x000107713bc8();
    func_0x00010770c448();
    func_0x000107714848();
  }
  func_0x00010771e888();
  func_0x00010771bde4();
  func_0x00010771d6d8();
  func_0x000107714848();
  func_0x0001077152c4();
  func_0x000107714830();
  uVar2 = iStack_8b0 == 1;
  if ((bool)uVar2) {
    puVar7 = auStack_928;
    func_0x0001073405dc(puVar7);
    func_0x00010770c29c(puVar7);
    uVar2 = iStack_930 == 3;
    if (!(bool)uVar2) goto LAB_1076b0754;
    puVar7 = auStack_998;
    func_0x00010732393c();
    func_0x000107714518();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107714350();
      if ((int)puVar7 != 0) {
        func_0x000107716e78();
        goto LAB_1076b08c4;
      }
      iStack_ac8 = 0;
      func_0x00010771a140();
      func_0x00010770d0e8();
      func_0x00010770c448();
      func_0x000107714848();
      if (iStack_ac8 == 0) {
        iStack_cd0 = 0;
        func_0x00010771a9f0();
        func_0x00010770c0e8();
        unaff_w25 = (int)auStack_d38;
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_cd0 == 0) {
          func_0x000107716e78();
          func_0x000107714c1c();
          func_0x00010770c3e8();
          func_0x000107714848();
        }
        func_0x00010770c4dc();
        func_0x000107715a84();
        if ((bool)uVar2) {
          func_0x0001077152cc();
          func_0x00010771a9e4();
          func_0x00010771b2dc();
          func_0x000107711c60();
          func_0x000107714888();
          func_0x000107714898();
          uVar3 = 0;
          if ((bool)uVar2) {
            func_0x000107714870();
            func_0x00010770c43c(puVar7);
            func_0x00010770e724();
            if (iStack_ac8 == 0) {
              func_0x000107716e78();
              func_0x00010771771c();
              func_0x00010770cee0();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            goto LAB_1076b0be4;
          }
          goto LAB_1076b089c;
        }
        func_0x00010770b8f0();
        uVar3 = uVar2;
        goto LAB_1076b0894;
      }
LAB_1076b0be4:
      func_0x00010770d86c();
      func_0x00010771eadc();
      if (!(bool)uVar2) {
        func_0x00010770b968();
        goto LAB_1076b0834;
      }
      func_0x000107718d7c();
      func_0x00010771958c();
      goto LAB_1076b083c;
    }
    func_0x00010771d470();
LAB_1076b08c4:
    func_0x00010771958c();
  }
  else {
    iStack_930 = 0;
LAB_1076b0754:
    iStack_ac8 = 0;
    func_0x00010771a140();
    func_0x00010770d0e8();
    func_0x00010770c448();
    func_0x000107714848();
    if (iStack_ac8 == 0) {
      iStack_cd0 = 0;
      func_0x00010771a9f0();
      func_0x00010770c0e8();
      unaff_w25 = (int)auStack_d38;
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_cd0 == 0) {
        func_0x000107716e78();
        func_0x000107714c1c();
        func_0x00010770c3e8();
        func_0x000107714848();
      }
      func_0x00010770c4dc();
      func_0x000107715a84();
      if ((bool)uVar2) {
        func_0x0001077152cc();
        func_0x00010771a9e4();
        func_0x00010771b2dc();
        func_0x000107711c60();
        func_0x000107714888();
        func_0x000107714898();
        uVar3 = 0;
        if ((bool)uVar2) {
          func_0x000107714870();
          func_0x00010770c43c(puVar7);
          func_0x00010770e724();
          if (iStack_ac8 == 0) {
            func_0x000107716e78();
            func_0x00010771771c();
            func_0x00010770cee0();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          goto LAB_1076b0774;
        }
      }
      else {
        func_0x00010770b8f0();
        uVar3 = uVar2;
LAB_1076b0894:
        func_0x00010771333c();
        func_0x0001077189d0();
      }
LAB_1076b089c:
      func_0x000107714848();
      func_0x000107714860();
      func_0x000107714830();
      goto LAB_1076b08a8;
    }
LAB_1076b0774:
    func_0x00010770d86c();
    func_0x00010771eadc();
    if ((bool)uVar2) {
      func_0x000107718d7c();
      func_0x00010771958c();
    }
    else {
      func_0x00010770b968();
LAB_1076b0834:
      func_0x00010770d8e0();
      func_0x0001077152c4();
    }
LAB_1076b083c:
    func_0x000107714848();
    func_0x000107714830();
    uVar2 = unaff_w25 == 3;
    uVar3 = uVar2;
    if (!(bool)uVar2) {
LAB_1076b08a8:
      func_0x0001077113d4();
      func_0x000107713330();
      func_0x00010771ab00();
      goto LAB_1076b121c;
    }
    unaff_w25 = 3;
  }
  func_0x00010771e15c();
  puVar7 = auStack_a78;
  func_0x000104c2fe00(puVar7,0x11370e478);
  iVar5 = (int)puVar7;
  func_0x00010771e168();
  if (iVar5 != 0) {
    func_0x000107712418();
    iStack_ac8 = 0;
    func_0x00010771c7c0();
    func_0x00010770c178(auStack_d38);
    func_0x00010770c1a0();
    func_0x000107714830();
    if (iStack_ac8 == 0) {
      func_0x00010771cdb4();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    iVar5 = iStack_cd0;
    uVar2 = iStack_cd0 == 1;
    if ((bool)uVar2) {
      func_0x00010771e2f0();
      func_0x0001077131f4();
      uVar1 = 0xb28;
      if ((bool)uVar2) {
        uVar1 = extraout_x8_02;
      }
      func_0x00010771555c(uVar1,auStack_78);
      func_0x00010771cacc(auStack_6d8);
    }
    else {
      func_0x0001077148b4();
      func_0x000107717004(auStack_e8);
      func_0x00010771333c();
      func_0x0001077189d0();
    }
    func_0x000107714850();
    func_0x000107714890();
    func_0x0001077152c4();
    bVar4 = iVar5 == 1;
    uVar3 = bVar4;
    goto joined_r0x0001076b0a14;
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_ab0);
  iStack_cd0 = 0;
  func_0x00010771fbc4();
  func_0x00010770c0e8();
  func_0x00010770c448();
  func_0x000107714848();
  if (iStack_cd0 == 0) {
    func_0x000107716e78();
    func_0x000107714c1c();
    func_0x00010770c448();
    func_0x000107714848();
  }
  func_0x00010771d668();
  func_0x00010771e364();
  puVar7 = auStack_b30;
  func_0x00010771cad4(puVar7);
  func_0x000107714848();
  func_0x0001077189d0();
  func_0x000107714830();
  func_0x000107718f08();
  if ((bool)uVar2) {
    puVar7 = auStack_b30;
    func_0x0001073405dc(puVar7);
    func_0x00010770c29c(puVar7);
    uVar2 = iStack_9a0 == 3;
    if (!(bool)uVar2) goto LAB_1076b0a20;
    puVar7 = auStack_a08;
    func_0x00010732393c();
    func_0x000107714518();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107714350();
      if ((int)puVar7 != 0) {
        func_0x000107716e78();
        goto LAB_1076b0c44;
      }
      iStack_cd0 = 0;
      func_0x00010771a140();
      func_0x00010770cde4();
      func_0x00010770c448();
      func_0x000107714848();
      if (iStack_cd0 == 0) {
        iStack_10 = 0;
        func_0x00010771a9f0();
        func_0x00010771029c();
        unaff_w25 = (int)auStack_78;
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_10 == 0) {
          func_0x000107716e78();
          func_0x000107713324();
          func_0x00010770c3e8();
          func_0x000107714848();
        }
        func_0x00010770c4dc();
        func_0x00010771ead0();
        if ((bool)uVar2) {
          func_0x00010771b2e4();
          func_0x00010771a9e4();
          func_0x0001077191f0();
          func_0x00010770e080();
          func_0x000107714888();
          func_0x000107714898();
          uVar3 = 0;
          if ((bool)uVar2) {
            func_0x000107714870();
            func_0x00010770c43c(puVar7);
            func_0x00010770e724();
            if (iStack_cd0 == 0) {
              func_0x000107716e78();
              func_0x0001077177b4();
              func_0x00010770cee0();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            goto LAB_1076b0ed0;
          }
          goto LAB_1076b0c1c;
        }
        func_0x000107711b0c();
        func_0x00010771b2bc();
        uVar3 = uVar2;
        goto LAB_1076b0c14;
      }
LAB_1076b0ed0:
      func_0x00010770d86c();
      func_0x00010771a4c8();
      if (!(bool)uVar2) {
        func_0x00010770b8f0();
        goto LAB_1076b0ba8;
      }
      func_0x0001077152cc();
      func_0x0001077187cc();
      goto LAB_1076b0bb0;
    }
    func_0x00010771d470();
LAB_1076b0c44:
    func_0x0001077187cc();
  }
  else {
    iStack_9a0 = 0;
LAB_1076b0a20:
    iStack_cd0 = 0;
    func_0x00010771a140();
    func_0x00010770cde4();
    func_0x00010770c448();
    func_0x000107714848();
    if (iStack_cd0 == 0) {
      iStack_10 = 0;
      func_0x00010771a9f0();
      func_0x00010771029c();
      unaff_w25 = (int)auStack_78;
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_10 == 0) {
        func_0x000107716e78();
        func_0x000107713324();
        func_0x00010770c3e8();
        func_0x000107714848();
      }
      func_0x00010770c4dc();
      func_0x00010771ead0();
      if ((bool)uVar2) {
        func_0x00010771b2e4();
        func_0x00010771a9e4();
        func_0x0001077191f0();
        func_0x00010770e080();
        func_0x000107714888();
        func_0x000107714898();
        uVar3 = 0;
        if ((bool)uVar2) {
          func_0x000107714870();
          func_0x00010770c43c(puVar7);
          func_0x00010770e724();
          if (iStack_cd0 == 0) {
            func_0x000107716e78();
            func_0x0001077177b4();
            func_0x00010770cee0();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          goto LAB_1076b0a40;
        }
      }
      else {
        func_0x000107711b0c();
        func_0x00010771b2bc();
        uVar3 = uVar2;
LAB_1076b0c14:
        func_0x0001077111f0();
        func_0x000107715d50();
      }
LAB_1076b0c1c:
      func_0x000107714848();
      func_0x000107714860();
      func_0x000107714830();
      goto LAB_1076b0c28;
    }
LAB_1076b0a40:
    func_0x00010770d86c();
    func_0x00010771a4c8();
    if ((bool)uVar2) {
      func_0x0001077152cc();
      func_0x0001077187cc();
    }
    else {
      func_0x00010770b8f0();
LAB_1076b0ba8:
      func_0x00010771333c();
      func_0x0001077189d0();
    }
LAB_1076b0bb0:
    func_0x000107714848();
    func_0x000107714830();
    uVar2 = unaff_w25 == 3;
    uVar3 = uVar2;
    if (!(bool)uVar2) {
LAB_1076b0c28:
      func_0x0001077138cc();
      func_0x000107714080();
      func_0x000107715248();
      goto LAB_1076b11f4;
    }
    unaff_w25 = 3;
  }
  iVar5 = (int)auStack_c48;
  func_0x00010771e154();
  func_0x00010771c420();
  func_0x000107717ad4();
  if (iVar5 != 0) {
    func_0x000107718030();
    goto LAB_1076b0c70;
  }
  func_0x00010771490c();
  puVar7 = auStack_cb8;
  func_0x0001077148e0(puVar7);
  iStack_10 = 0;
  func_0x00010771fbc4();
  func_0x00010771029c();
  func_0x00010770c448();
  func_0x000107714848();
  if (iStack_10 == 0) {
    func_0x000107716e78();
    func_0x000107713324();
    func_0x00010770c448();
    func_0x000107714848();
  }
  func_0x00010771563c(auStack_ba0);
  func_0x00010771b2c4();
  func_0x00010771e2f8();
  func_0x000107714848();
  func_0x000107715d50();
  func_0x000107714830();
  uVar2 = iStack_cc0 == 1;
  if ((bool)uVar2) {
    puVar7 = auStack_d38;
    func_0x0001073405dc();
    func_0x0001077083c0();
    func_0x000107715a84();
    if (!(bool)uVar2) goto LAB_1076b0d08;
    func_0x0001077152cc();
    func_0x000107714518();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107714350();
      if ((int)puVar7 != 0) {
        func_0x000107716e78();
        goto LAB_1076b0f2c;
      }
      iStack_80 = 0;
      func_0x00010771a140();
      func_0x0001077111d8();
      func_0x00010770c448();
      func_0x000107714848();
      if (iStack_80 == 0) {
        iStack_b38 = 0;
        func_0x00010771a9f0();
        func_0x0001077135c4();
        unaff_w25 = (int)auStack_ba0;
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_b38 == 0) {
          func_0x000107716e78();
          func_0x0001077175f4();
          func_0x00010770c3e8();
          func_0x000107714848();
        }
        func_0x00010770c4dc();
        func_0x000107715e44();
        if (!(bool)uVar2) goto LAB_1076b16e8;
        func_0x0001077154e4();
        func_0x00010771a9e4();
        func_0x00010771c43c();
        func_0x000107711e9c();
        func_0x000107714888();
        func_0x000107714898();
        if (!(bool)uVar2) goto LAB_1076b0f04;
        func_0x000107714870();
        func_0x00010770c43c(puVar7);
        func_0x00010770e724();
        if (iStack_80 == 0) {
          func_0x000107716e78();
          func_0x0001077176f0();
          func_0x00010770cee0();
          func_0x0001077148e8();
        }
        func_0x000107714888();
        func_0x000107714858();
        func_0x000107714848();
        func_0x000107714860();
      }
      func_0x00010770d86c();
      func_0x00010771eac4();
      if (!(bool)uVar2) {
        func_0x00010770b828();
        goto LAB_1076b0e94;
      }
      func_0x000107717aa4();
      func_0x00010771a08c();
      goto LAB_1076b0e9c;
    }
    func_0x00010771d470();
LAB_1076b0f2c:
    func_0x00010771a08c();
  }
  else {
    iStack_10 = 0;
LAB_1076b0d08:
    iStack_80 = 0;
    func_0x00010771a140();
    func_0x0001077111d8();
    func_0x00010770c448();
    func_0x000107714848();
    if (iStack_80 == 0) {
      iStack_b38 = 0;
      func_0x00010771a9f0();
      func_0x0001077135c4();
      unaff_w25 = (int)auStack_ba0;
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_b38 == 0) {
        func_0x000107716e78();
        func_0x0001077175f4();
        func_0x00010770c3e8();
        func_0x000107714848();
      }
      func_0x00010770c4dc();
      func_0x000107715e44();
      if (!(bool)uVar2) {
        func_0x00010771222c();
        goto LAB_1076b0efc;
      }
      func_0x0001077154e4();
      func_0x00010771a9e4();
      func_0x00010771c43c();
      func_0x000107711e9c();
      func_0x000107714888();
      func_0x000107714898();
      if (!(bool)uVar2) goto LAB_1076b0f04;
      func_0x000107714870();
      func_0x00010770c43c(puVar7);
      func_0x00010770e724();
      if (iStack_80 == 0) {
        func_0x000107716e78();
        func_0x0001077176f0();
        func_0x00010770cee0();
        func_0x0001077148e8();
      }
      func_0x000107714888();
      func_0x000107714858();
      func_0x000107714848();
      func_0x000107714860();
    }
    func_0x00010770d86c();
    func_0x00010771eac4();
    if ((bool)uVar2) {
      func_0x000107717aa4();
      func_0x00010771a08c();
    }
    else {
      func_0x00010770b828();
LAB_1076b0e94:
      func_0x00010770f794();
      func_0x00010771583c();
    }
LAB_1076b0e9c:
    func_0x000107714848();
    func_0x000107714830();
    uVar2 = unaff_w25 == 3;
    if (!(bool)uVar2) goto LAB_1076b0f10;
  }
  func_0x00010771dff8();
  func_0x00010771610c();
  iVar5 = (int)auStack_e18;
  func_0x0001077162b4();
  if (iVar5 == 0) {
    func_0x00010771a140();
    func_0x000107712630();
    func_0x000107716198();
    iVar5 = (int)auStack_e8;
    func_0x0001077183c0();
    if (iVar5 == 0) {
      func_0x000107718030();
    }
    else {
      func_0x00010771490c();
      func_0x0001077148e0(auStack_e88);
      iStack_ba8 = 0;
      func_0x00010771c7c0();
      func_0x00010771bdcc();
      func_0x00010770c178();
      func_0x00010770c1a0();
      func_0x000107714830();
      if (iStack_ba8 == 0) {
        func_0x000107711688();
        func_0x00010770c184();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      uVar2 = iStack_d40 == 1;
      if ((bool)uVar2) {
        func_0x00010771700c();
        func_0x0001077131f4();
        uVar1 = 0xd58;
        if ((bool)uVar2) {
          uVar1 = extraout_x8_04;
        }
        func_0x00010771555c(uVar1,auStack_e88);
        func_0x00010771d6b8();
      }
      else {
        func_0x00010770ee20();
        func_0x00010771625c();
        func_0x00010770cf5c();
        func_0x000107714fdc();
      }
      func_0x000107714850();
      func_0x000107714890();
      func_0x000107717bd0();
      uVar2 = iStack_d40 == 1;
      if (!(bool)uVar2) {
        func_0x00010770d538();
        func_0x0001077113c8();
        goto LAB_1076b11b4;
      }
    }
    func_0x00010770d538();
    func_0x0001077113c8();
LAB_1076b11a4:
    bVar4 = true;
  }
  else {
    func_0x00010771242c();
    iStack_80 = 0;
    func_0x00010771c7c0();
    func_0x00010770c178(auStack_ba0);
    func_0x00010770c1a0();
    func_0x000107714830();
    if (iStack_80 == 0) {
      func_0x000107712554();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    iVar5 = iStack_b38;
    uVar2 = iStack_b38 == 1;
    if ((bool)uVar2) {
      func_0x0001077191f8();
      func_0x0001077131f4();
      uVar1 = 0xd58;
      if ((bool)uVar2) {
        uVar1 = extraout_x8_03;
      }
      func_0x00010771555c(uVar1,auStack_c10);
      func_0x00010771d6ac();
    }
    else {
      func_0x0001077148b4();
      func_0x000107716448(auStack_da8);
      func_0x00010770fed0();
      func_0x000107715fd4();
    }
    func_0x000107714850();
    func_0x000107714890();
    func_0x00010771583c();
    uVar2 = iVar5 == 1;
    if ((bool)uVar2) goto LAB_1076b11a4;
LAB_1076b11b4:
    bVar4 = false;
  }
  func_0x000107714cac();
  func_0x00010771626c();
  func_0x00010770c3d0();
  func_0x000107713f44();
  func_0x000107715738();
  if (!bVar4) goto LAB_1076b11d0;
LAB_1076b0c70:
  bVar4 = true;
  while( true ) {
    func_0x000107714b48();
    func_0x000107714dc4();
    func_0x0001077138cc();
    func_0x000107714080();
    func_0x000107715248();
    uVar3 = uVar2;
joined_r0x0001076b0a14:
    if (bVar4) {
      bVar4 = true;
    }
    else {
LAB_1076b11f4:
      bVar4 = false;
    }
    func_0x000107716b80();
    func_0x000107715fc4();
    func_0x0001077113d4();
    func_0x000107713330();
    func_0x00010771ab00();
joined_r0x0001076b0748:
    if (bVar4) {
      func_0x00010771d704();
      unaff_x20 = (undefined1 *)0x1;
      uVar2 = uVar3;
    }
    else {
LAB_1076b121c:
      unaff_x20 = (undefined1 *)0x0;
      uVar2 = uVar3;
    }
    func_0x000107715dbc();
    func_0x000107718100();
    func_0x00010770de18();
    func_0x000107713db8();
    func_0x0001077190c8();
    func_0x000107718028();
    if ((int)unaff_x20 == 0) {
LAB_1076b124c:
      func_0x000107713358();
      func_0x00010770e6b8();
      func_0x00010770d928();
LAB_1076b1258:
      func_0x000107713a28();
      func_0x00010770d434();
      func_0x000107711100();
LAB_1076b1264:
      func_0x0001077117a0();
      func_0x000107711794();
      puVar7 = auStack_2e8;
    }
    else {
LAB_1076b123c:
      func_0x000107713358();
      func_0x00010770e6b8();
      func_0x00010770d928();
LAB_1076b0314:
      func_0x000107713a28();
      func_0x00010770d434();
      func_0x000107711100();
LAB_1076b0320:
      func_0x0001077117a0();
      func_0x000107711794();
      func_0x000107712da4();
LAB_1076b032c:
      func_0x00010771b328();
      func_0x0001077148fc();
      puVar7 = unaff_x20 + 8;
    }
    func_0x00010726af18(puVar7);
LAB_1076b1278:
    func_0x000107714868(acStack_280);
    func_0x000107714828(auStack_200);
    func_0x000107714828(auStack_190);
    func_0x00010771b364();
    func_0x000107707d28();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
LAB_1076b16e8:
    func_0x00010771222c();
LAB_1076b0efc:
    func_0x00010770fed0();
    func_0x000107715fd4();
LAB_1076b0f04:
    func_0x000107714848();
    func_0x000107714860();
    func_0x000107714830();
LAB_1076b0f10:
    func_0x00010770c3d0();
    func_0x000107713f44();
    func_0x000107715738();
LAB_1076b11d0:
    bVar4 = false;
  }
  return;
}



/* Entry: 1076b7110; end: 1076b792f;  */

/* WARNING: Possible PIC construction at 0x0001076b7188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076b724c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076b718c) */
/* WARNING: Removing unreachable block (ram,0x0001076b7194) */
/* WARNING: Removing unreachable block (ram,0x0001076b7234) */
/* WARNING: Removing unreachable block (ram,0x0001076b71bc) */
/* WARNING: Removing unreachable block (ram,0x0001076b7240) */
/* WARNING: Removing unreachable block (ram,0x0001076b7248) */
/* WARNING: Removing unreachable block (ram,0x0001076b71cc) */
/* WARNING: Removing unreachable block (ram,0x0001076b71f4) */
/* WARNING: Removing unreachable block (ram,0x0001076b7204) */
/* WARNING: Removing unreachable block (ram,0x0001076b7300) */
/* WARNING: Removing unreachable block (ram,0x0001076b7218) */
/* WARNING: Removing unreachable block (ram,0x0001076b7314) */
/* WARNING: Removing unreachable block (ram,0x0001076b7324) */
/* WARNING: Removing unreachable block (ram,0x0001076b7250) */
/* WARNING: Removing unreachable block (ram,0x0001076b7258) */
/* WARNING: Removing unreachable block (ram,0x0001076b7268) */
/* WARNING: Removing unreachable block (ram,0x0001076b7328) */
/* WARNING: Removing unreachable block (ram,0x0001076b7280) */
/* WARNING: Removing unreachable block (ram,0x0001076b733c) */
/* WARNING: Removing unreachable block (ram,0x0001076b7298) */
/* WARNING: Removing unreachable block (ram,0x0001076b72c4) */
/* WARNING: Removing unreachable block (ram,0x0001076b72d4) */
/* WARNING: Removing unreachable block (ram,0x0001076b7348) */
/* WARNING: Removing unreachable block (ram,0x0001076b72ec) */
/* WARNING: Removing unreachable block (ram,0x0001076b735c) */
/* WARNING: Removing unreachable block (ram,0x0001076b7364) */
/* WARNING: Removing unreachable block (ram,0x0001076b7374) */
/* WARNING: Removing unreachable block (ram,0x0001076b7408) */
/* WARNING: Removing unreachable block (ram,0x0001076b7390) */
/* WARNING: Removing unreachable block (ram,0x0001076b7420) */
/* WARNING: Removing unreachable block (ram,0x0001076b73a8) */
/* WARNING: Removing unreachable block (ram,0x0001076b7428) */
/* WARNING: Removing unreachable block (ram,0x0001076b742c) */
/* WARNING: Removing unreachable block (ram,0x0001076b7434) */
/* WARNING: Removing unreachable block (ram,0x0001076b7440) */

void FUN_1076b7110(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 extraout_x8;
  byte unaff_w20;
  uint uVar6;
  uint uVar7;
  int unaff_w23;
  undefined *puVar8;
  undefined8 in_stack_00000070;
  undefined1 auStack_710 [104];
  int iStack_6a8;
  byte bStack_698;
  undefined auStack_5e8 [104];
  int iStack_580;
  int iStack_510;
  undefined1 auStack_488 [216];
  int iStack_3b0;
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined1 auStack_268 [472];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_10;
  
  func_0x000107717e8c();
  func_0x0001077074e8();
  uStack_10 = extraout_x8;
  if ((bRam00000001136d3f10 & 1) == 0) {
    iVar5 = 0x136d3f10;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010771d0d4();
      func_0x00010770d2b8();
      unaff_w23 = (int)&uStack_90;
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770b79c();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107710688();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010771c4a0();
      func_0x00010770e958();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770b79c();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010771a008();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770e958();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107715764(auStack_268,&UNK_10f424519);
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010771a008();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770e958();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010771a008();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107719ffc();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107710688();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107719ffc();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107710688();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x000107719ffc();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770e958();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770b79c();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770e958();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770d2b8();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010770b79c();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010771c4a0();
      func_0x00010770e958();
      func_0x00010770d52c();
      func_0x00010770d4a4();
      func_0x000107714838();
      func_0x000107714d88();
      func_0x00010771ac04(&uStack_90);
      uRam0000000113724e58 = uStack_88;
      uRam0000000113724e50 = uStack_90;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107717aac();
      func_0x000107718150();
      ___cxa_guard_release(0x1136d3f10);
    }
  }
  if ((bRam00000001136d3f18 & 1) == 0) {
    iVar5 = 0x136d3f18;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107714028(0x113710040);
      ___cxa_guard_release(0x1136d3f18);
    }
  }
  if ((bRam00000001136d3f20 & 1) == 0) {
    iVar5 = 0x136d3f20;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107710d38(0x113710078);
      ___cxa_guard_release(0x1136d3f20);
    }
  }
  puVar2 = &uStack_90;
  func_0x00010757fae8(puVar2,0x113724e48);
  func_0x0001077180d0();
  if ((bool)in_ZR) {
    func_0x00010771f870();
    func_0x0001077149fc();
    puVar8 = (undefined *)0x1076b718c;
  }
  else {
    func_0x00010770c1d0(&uStack_90);
    func_0x00010770f470();
    func_0x000107708a48(uStack_10);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010770c358();
    func_0x000107714d88();
    func_0x000107718150();
    puVar2 = (undefined8 *)0x1136d3f10;
    ___cxa_guard_abort(0x1136d3f10);
    puVar8 = &SUB_1076b7930;
    func_0x000107714988();
  }
  func_0x00010771cb5c();
  puStack_370 = &stack0x00000070;
  puStack_368 = puVar8;
  func_0x000107707970();
  func_0x000107716748();
  func_0x000107711b6c();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    unaff_w20 = (byte)auStack_488;
    func_0x00010770d6dc(puVar2);
    func_0x000107712bfc();
    if (iStack_3b0 == 0) {
      func_0x00010771135c();
      func_0x00010770c1b8();
      func_0x000107714830();
    }
    func_0x000107714890();
    func_0x000107714858();
    func_0x00010770f01c();
  }
  func_0x00010770c850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770ff60(auStack_488);
  func_0x000107714858();
  func_0x00010770c850();
  func_0x000107714988();
  puVar8 = &DAT_1076b79cc;
  func_0x00010771cb48();
  func_0x000107707aa0();
  if ((bRam00000001136d3f28 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f28;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708e10(0x1137100b0);
      puVar8 = (undefined *)0x1136d3f28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f30 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f30;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708bb0(0x1137100e8);
      puVar8 = (undefined *)0x1136d3f30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f38 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f38;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708de0(0x113710120);
      puVar8 = (undefined *)0x1136d3f38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f40 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f40;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708dc0(0x113710158);
      puVar8 = (undefined *)0x1136d3f40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f48 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f48;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708dd0(0x113710190);
      puVar8 = (undefined *)0x1136d3f48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f50 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f50;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708e00(0x1137101c8);
      puVar8 = (undefined *)0x1136d3f50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f58 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f58;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708df0(0x113710200);
      puVar8 = (undefined *)0x1136d3f58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f60 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f60;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708db0(0x113710238);
      puVar8 = (undefined *)0x1136d3f60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f68 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f68;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x00010770d04c(0x113710270);
      puVar8 = (undefined *)0x1136d3f68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f70 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f70;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x0001077095a0(0x1137102a8);
      puVar8 = (undefined *)0x1136d3f70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f78 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f78;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x0001077098bc(0x1137102e0);
      puVar8 = (undefined *)0x1136d3f78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f80 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f80;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x00010770b448(0x113710318);
      puVar8 = (undefined *)0x1136d3f80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f88 & 1) == 0) {
    puVar8 = (undefined *)0x1136d3f88;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107713578(0x113710350);
      puVar8 = (undefined *)0x1136d3f88;
      ___cxa_guard_release();
    }
  }
  func_0x000107712404();
  iStack_510 = 0;
  func_0x00010770f7dc();
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_510 == 0) {
    func_0x00010771c45c();
    func_0x000107716320();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107715120(auStack_710);
  func_0x000107717a28();
  func_0x000107719fa0();
  func_0x000107714830();
  func_0x000107715564();
  func_0x000107714850();
  func_0x0001077188a0();
  if ((bool)in_ZR) {
    func_0x00010771c3e8();
    func_0x000107707ee8();
    func_0x000107715018();
    puVar3 = puVar8;
    if (!(bool)in_ZR) goto code_r0x0001076b7b50;
    func_0x000107714bc0();
    puVar3 = puVar8;
    func_0x000104c32db4();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107714c8c();
      if ((int)puVar3 != 0) {
        func_0x00010771c45c();
        goto code_r0x0001076b7c94;
      }
      iStack_580 = 0;
      func_0x00010770dbb0();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_580 == 0) {
        iStack_6a8 = 0;
        func_0x00010770d70c();
        unaff_w23 = (int)auStack_710;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_6a8 == 0) {
          func_0x00010771c45c();
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
          if ((bool)in_ZR) {
            func_0x000107714870();
            func_0x00010770c254(puVar3);
            func_0x00010770c430();
            if (iStack_580 == 0) {
              func_0x00010771c45c();
              func_0x000107713e80();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076b7dc8;
          }
          goto code_r0x0001076b7c6c;
        }
        func_0x00010770b88c();
        goto code_r0x0001076b7c64;
      }
code_r0x0001076b7dc8:
      func_0x00010770c260();
      func_0x00010771c430();
      if (!(bool)in_ZR) {
        func_0x00010770b940();
        goto code_r0x0001076b7c44;
      }
      func_0x000107716cbc();
      func_0x000107717538();
      goto code_r0x0001076b7c4c;
    }
code_r0x0001076b7c94:
    func_0x000107717538();
code_r0x0001076b7c98:
    uVar6 = (uint)puVar8;
    func_0x0001077178bc();
    func_0x000107717e84();
    func_0x0001077128fc();
    if (((ulong)puVar3 & 1) == 0) {
      uVar7 = 0;
      iVar5 = 4;
    }
    else {
      func_0x00010770f7dc();
      func_0x000107718200();
      uVar4 = 0;
      func_0x00010771878c();
      if ((uVar4 & 1) == 0) {
        func_0x00010770d70c();
        func_0x000107717e34();
        func_0x0001077100f8();
        func_0x0001077115e4();
        func_0x000107714830();
      }
      else {
        uVar6 = 1;
      }
      func_0x00010770ccbc();
      func_0x00010770ce5c();
      uVar7 = uVar6 ^ 1;
      iVar5 = 4;
      if ((uVar6 & 1) == 0) {
        iVar5 = 0;
      }
    }
    func_0x000107714ad4();
    func_0x0001077157a8();
  }
  else {
    iStack_510 = 0;
    puVar3 = puVar8;
code_r0x0001076b7b50:
    iStack_580 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_580 == 0) {
      iStack_6a8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_710;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_6a8 == 0) {
        func_0x00010771c45c();
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
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(puVar3);
          func_0x00010770c430();
          if (iStack_580 == 0) {
            func_0x00010771c45c();
            func_0x000107713e80();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076b7b74;
        }
      }
      else {
        func_0x00010770b88c();
code_r0x0001076b7c64:
        func_0x00010770d3a4();
        func_0x0001077150e4();
      }
code_r0x0001076b7c6c:
      iVar5 = (int)auStack_5e8;
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
    }
    else {
code_r0x0001076b7b74:
      func_0x00010770c260();
      func_0x00010771c430();
      if ((bool)in_ZR) {
        func_0x000107716cbc();
        func_0x000107717538();
      }
      else {
        func_0x00010770b940();
code_r0x0001076b7c44:
        func_0x00010770eccc();
        func_0x000107715720();
      }
code_r0x0001076b7c4c:
      puVar8 = auStack_5e8;
      iVar5 = (int)puVar8;
      func_0x000107714830();
      func_0x000107714850();
      if (unaff_w23 == 3) goto code_r0x0001076b7c98;
    }
    uVar7 = 0;
    func_0x000107719070();
  }
  func_0x00010770c324();
  func_0x000107712f24();
  func_0x000107715514();
  uVar1 = true;
  if (iVar5 == 4) {
code_r0x0001076b7d54:
    if ((uVar7 & 1) == 0) {
      bStack_698 = 0;
    }
    else {
      func_0x00010770ddc4();
      func_0x00010771db0c();
      func_0x00010770d5d0();
      bStack_698 = unaff_w20 ^ 1;
    }
  }
  else {
    uVar1 = iVar5 == 2;
    if (!(bool)uVar1) {
      if (iVar5 != 0) goto code_r0x0001076b7d90;
      goto code_r0x0001076b7d54;
    }
    bStack_698 = 1;
  }
  func_0x0001077123b4();
  func_0x000107714890();
code_r0x0001076b7d90:
  func_0x000107707b78();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d3f88);
    do {
      func_0x000107714988();
    } while( true );
  }
  return;
}



/* Entry: 1076bb044; end: 1076bb403;  */

void FUN_1076bb044(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_278 [104];
  int iStack_210;
  int iStack_1a0;
  int iStack_130;
  int iStack_c0;
  undefined1 auStack_b8 [112];
  byte bStack_48;
  undefined1 auStack_40 [64];
  
  func_0x000107715308();
  func_0x000107707ae4();
  if ((bRam00000001136d4190 & 1) == 0) {
    iVar3 = 0x136d4190;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ab38(0x113711188);
      ___cxa_guard_release(0x1136d4190);
    }
  }
  if ((bRam00000001136d4198 & 1) == 0) {
    iVar3 = 0x136d4198;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107710e04(0x1137111c0);
      ___cxa_guard_release(0x1136d4198);
    }
  }
  if ((bRam00000001136d41a0 & 1) == 0) {
    iVar3 = 0x136d41a0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x1137111f8,&UNK_10f421a88);
      ___cxa_guard_release(0x1136d41a0);
    }
  }
  if ((bRam00000001136d41a8 & 1) == 0) {
    iVar3 = 0x136d41a8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x113711230,&UNK_10f424755);
      ___cxa_guard_release(0x1136d41a8);
    }
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_40);
  auStack_b8[0] = 0;
  bStack_48 = 0;
  iStack_c0 = 0;
  func_0x000107715d78();
  func_0x00010770c394();
  func_0x00010770c1dc();
  func_0x000107714830();
  if (iStack_c0 == 0) {
    func_0x00010770d364();
    func_0x00010770c1dc();
    func_0x000107714830();
  }
  func_0x00010770c230();
  uVar2 = iStack_130 == 2;
  if (!(bool)uVar2) {
    func_0x0001077110d0();
    func_0x0001077158f8();
    func_0x00010770de00();
    func_0x00010771519c();
    goto LAB_1076bb258;
  }
  iStack_1a0 = 0;
  func_0x00010770cf68();
  func_0x00010770c37c();
  func_0x000107714860();
  if (iStack_1a0 == 0) {
    func_0x00010770c788();
    func_0x000107711638();
    func_0x000107714850();
    if (iStack_1a0 == 0) {
      func_0x00010770d364();
      func_0x00010770f86c();
      func_0x000107714890();
    }
  }
  func_0x00010770f524();
  uVar2 = iStack_210 == 2;
  if ((bool)uVar2) {
    if ((bStack_48 & 1) == 0) {
      func_0x00010771efac();
      func_0x00010770dc2c(2);
      func_0x000107714890();
      func_0x000107714898();
      if (!(bool)uVar2) goto LAB_1076bb250;
      func_0x000107714870();
      func_0x000107715be0();
      func_0x000107714858();
    }
    func_0x00010771df34();
    func_0x0001072cb4bc(auStack_278);
    func_0x0001077171bc();
    func_0x000107719f14();
    func_0x00010770e84c(auStack_b8);
    func_0x000107712ecc();
    func_0x00010771577c();
    if ((bool)uVar2) {
      func_0x000107715228();
      func_0x00010756e584();
      func_0x000107714a5c();
      uVar1 = 0x888;
      if ((bool)uVar2) {
        uVar1 = 0x8c0;
      }
      func_0x00010771f760(uVar1);
      func_0x000107714a68(auStack_40);
      func_0x000107714d74();
      func_0x000107579a48();
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
LAB_1076bb250:
  func_0x000107714850();
  func_0x000107714848();
LAB_1076bb258:
  func_0x000107714830();
  func_0x000107714838();
  func_0x0001077160e4();
  func_0x00010771c394();
  func_0x000107708038();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d41a8);
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076be1bc; end: 1076bee6b;  */

void FUN_1076be1bc(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int iVar4;
  int unaff_w24;
  
  func_0x0001077184d0();
  func_0x0001077075e0();
  func_0x0001077083d4();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x000107718330();
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
    if (!(bool)in_ZR) goto LAB_1076be25c;
    func_0x0001077152cc();
    func_0x00010771e25c();
    if ((param_1 & 1) == 0) {
      func_0x000107714b98();
      if (param_1 != 0) {
        func_0x000107718330();
        goto LAB_1076be378;
      }
      func_0x00010771f6e8();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x00010771f6dc();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x000107718330();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771f6d0();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x000107718330();
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
            goto LAB_1076be330;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto LAB_1076be338;
        }
        goto LAB_1076be358;
      }
      func_0x000107707e58();
      goto LAB_1076be350;
    }
LAB_1076be378:
    func_0x000107714d34();
LAB_1076be37c:
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076be384:
    func_0x000107714830();
  }
  else {
LAB_1076be25c:
    func_0x00010771f6e8();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x00010771f6dc();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x000107718330();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
LAB_1076be350:
      func_0x00010770dd7c();
      func_0x000107714ed0();
LAB_1076be358:
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076be384;
    }
    func_0x000107715044();
    func_0x00010771f6d0();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    if (!(bool)in_ZR) goto LAB_1076be358;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x000107718330();
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
LAB_1076be330:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076be338:
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076be37c;
  }
  func_0x00010770a59c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  iVar1 = 0x13711ab8;
  iVar4 = 0x13711ab8;
  uVar3 = extraout_w8 == 1;
  if ((bool)uVar3) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar3) goto LAB_1076be454;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = 0x310;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        iVar4 = iVar1;
        goto LAB_1076be4c4;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107713204();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = extraout_x8;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        iVar4 = iVar1;
        goto LAB_1076be4c4;
      }
      func_0x000107714c14();
      if (param_1 != 0) {
        func_0x000107709434();
        func_0x0001077162f0();
        func_0x00010770c85c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107718330();
        func_0x000107714c1c();
        func_0x000107714954();
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
        if (!(bool)uVar3) {
          func_0x000107707ad0();
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = 0x498;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        iVar4 = iVar1;
        goto LAB_1076be4c4;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = 0x498;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        goto LAB_1076be4c4;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = 0x620;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        goto LAB_1076be4c4;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = 0x620;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        goto LAB_1076be4c4;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107713204();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_00;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        goto LAB_1076be4c4;
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
          goto LAB_1076be4e4;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar2 = 0x7e0;
        if ((bool)uVar3) {
          uVar2 = 0x1c0;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        goto LAB_1076be4c4;
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
        func_0x000107713204();
        uVar2 = 0x1c0;
        if ((bool)uVar3) {
          uVar2 = extraout_x8_01;
        }
        func_0x000107717a04(uVar2);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c76c();
        goto LAB_1076be4c4;
      }
      func_0x000107707ad0();
      goto LAB_1076be4e4;
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
    iVar4 = 0x13711a80;
    if (!(bool)uVar3) {
      func_0x000107707ad0();
      goto LAB_1076be4e4;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0x1c0;
    if ((bool)uVar3) {
      uVar2 = 0x118;
    }
    func_0x000107717a04(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c76c();
  }
  else {
LAB_1076be454:
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
LAB_1076be4e4:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076be4ec;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar2 = 0x7e0;
    if ((bool)uVar3) {
      uVar2 = 0x1c0;
    }
    func_0x000107717a04(uVar2);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c76c();
  }
LAB_1076be4c4:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x0001077075a0();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076be4ec:
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



/* Entry: 1076c2074; end: 1076c2c7b;  */

void FUN_1076c2074(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x20;
  undefined1 auStack_418 [520];
  undefined1 auStack_210 [104];
  int iStack_1a8;
  undefined1 auStack_1a0 [104];
  undefined4 uStack_138;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [96];
  int iStack_80;
  int iStack_10;
  
  func_0x00010771cb70();
  func_0x000107707aa0();
  if ((bRam00000001136d4638 & 1) == 0) {
    iVar2 = 0x136d4638;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708e10(0x1137131e8);
      ___cxa_guard_release(0x1136d4638);
    }
  }
  if ((bRam00000001136d4640 & 1) == 0) {
    iVar2 = 0x136d4640;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708bb0(0x113713220);
      ___cxa_guard_release(0x1136d4640);
    }
  }
  if ((bRam00000001136d4648 & 1) == 0) {
    iVar2 = 0x136d4648;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708de0(0x113713258);
      ___cxa_guard_release(0x1136d4648);
    }
  }
  if ((bRam00000001136d4650 & 1) == 0) {
    iVar2 = 0x136d4650;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708dc0(0x113713290);
      ___cxa_guard_release(0x1136d4650);
    }
  }
  if ((bRam00000001136d4658 & 1) == 0) {
    iVar2 = 0x136d4658;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708dd0(0x1137132c8);
      ___cxa_guard_release(0x1136d4658);
    }
  }
  if ((bRam00000001136d4660 & 1) == 0) {
    iVar2 = 0x136d4660;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708e00(0x113713300);
      ___cxa_guard_release(0x1136d4660);
    }
  }
  if ((bRam00000001136d4668 & 1) == 0) {
    iVar2 = 0x136d4668;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708df0(0x113713338);
      ___cxa_guard_release(0x1136d4668);
    }
  }
  if ((bRam00000001136d4670 & 1) == 0) {
    iVar2 = 0x136d4670;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107708db0(0x113713370);
      ___cxa_guard_release(0x1136d4670);
    }
  }
  if ((bRam00000001136d4678 & 1) == 0) {
    iVar2 = 0x136d4678;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001077092ac(0x1137133a8);
      ___cxa_guard_release(0x1136d4678);
    }
  }
  if ((bRam00000001136d4680 & 1) == 0) {
    iVar2 = 0x136d4680;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a1b0(0x1137133e0);
      ___cxa_guard_release(0x1136d4680);
    }
  }
  if ((bRam00000001136d4688 & 1) == 0) {
    iVar2 = 0x136d4688;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714c58(0x113713418,&UNK_10f4243d5);
      ___cxa_guard_release(0x1136d4688);
    }
  }
  if ((bRam00000001136d4690 & 1) == 0) {
    iVar2 = 0x136d4690;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107709394(0x113713450);
      ___cxa_guard_release(0x1136d4690);
    }
  }
  if ((bRam00000001136d4698 & 1) == 0) {
    iVar2 = 0x136d4698;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714c58(0x113713488,&UNK_10f4243e9);
      ___cxa_guard_release(0x1136d4698);
    }
  }
  if ((bRam00000001136d46a0 & 1) == 0) {
    iVar2 = 0x136d46a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770927c(0x1137134c0);
      ___cxa_guard_release(0x1136d46a0);
    }
  }
  if ((bRam00000001136d46a8 & 1) == 0) {
    iVar2 = 0x136d46a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107709570(0x1137134f8);
      ___cxa_guard_release(0x1136d46a8);
    }
  }
  if ((bRam00000001136d46b0 & 1) == 0) {
    iVar2 = 0x136d46b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107714c58(0x113713530,&UNK_10f4243fd);
      ___cxa_guard_release(0x1136d46b0);
    }
  }
  if ((bRam00000001136d46b8 & 1) == 0) {
    iVar2 = 0x136d46b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107709020(0x113713568);
      ___cxa_guard_release(0x1136d46b8);
    }
  }
  if ((bRam00000001136d46c0 & 1) == 0) {
    iVar2 = 0x136d46c0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001077093a4(0x1137135a0);
      ___cxa_guard_release(0x1136d46c0);
    }
  }
  if ((bRam00000001136d46c8 & 1) == 0) {
    iVar2 = 0x136d46c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001077090d0(0x1137135d8);
      ___cxa_guard_release(0x1136d46c8);
    }
  }
  if ((bRam00000001136d46d0 & 1) == 0) {
    iVar2 = 0x136d46d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770bab4(0x113713610);
      ___cxa_guard_release(0x1136d46d0);
    }
  }
  if ((bRam00000001136d46d8 & 1) == 0) {
    iVar2 = 0x136d46d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001077093c4(0x113713648);
      ___cxa_guard_release(0x1136d46d8);
    }
  }
  if ((bRam00000001136d46e0 & 1) == 0) {
    iVar2 = 0x136d46e0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001077153c8(0x113713680,&UNK_10f424411);
      ___cxa_guard_release(0x1136d46e0);
    }
  }
  func_0x0001077123c8();
  func_0x00010771490c();
  func_0x0001077148e0(auStack_120);
  iStack_10 = 0;
  func_0x0001077148ac(auStack_e8);
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_10 == 0) {
    func_0x00010771c14c();
    func_0x00010771b458();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  iVar2 = (int)auStack_e8;
  func_0x000107715120(auStack_210);
  func_0x00010771b4a4();
  puVar3 = auStack_1a0;
  func_0x00010771b450();
  func_0x000107714830();
  func_0x000107715d8c();
  func_0x000107714850();
  func_0x00010771ebcc();
  if ((bool)in_ZR) {
    func_0x00010771b60c();
    func_0x000107707ee8();
    func_0x000107715018();
    if (!(bool)in_ZR) goto LAB_1076c229c;
    func_0x000107714bc0();
    func_0x000104c32db4();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107714c8c();
      if ((int)puVar3 != 0) {
        func_0x00010771c14c();
        goto LAB_1076c23d8;
      }
      iStack_80 = 0;
      func_0x00010770b2d8();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_80 == 0) {
        iStack_1a8 = 0;
        func_0x0001077147dc();
        iVar2 = (int)auStack_210;
        func_0x00010770c2cc();
        func_0x000107714838();
        if (iStack_1a8 == 0) {
          func_0x00010771c14c();
          func_0x000107717474();
          func_0x00010770d7f4();
          func_0x000107714890();
        }
        func_0x00010771156c();
        func_0x00010771ed04();
        if ((bool)in_ZR) {
          func_0x00010771b208();
          func_0x00010771c13c();
          func_0x000107711c94();
          func_0x000107714838();
          func_0x000107715678();
          uVar1 = 0;
          if ((bool)in_ZR) {
            func_0x000107715128();
            func_0x00010770c30c(puVar3);
            func_0x00010770cf1c();
            if (iStack_80 == 0) {
              func_0x00010771c14c();
              func_0x000107717468();
              func_0x00010770cc14();
              func_0x000107714848();
            }
            func_0x000107714838();
            func_0x00010770cf50();
            func_0x000107714890();
            func_0x000107714830();
            goto LAB_1076c2494;
          }
          goto LAB_1076c23b4;
        }
        func_0x000107714920();
        func_0x000107711c30();
        uVar1 = in_ZR;
        goto LAB_1076c23ac;
      }
LAB_1076c2494:
      func_0x000107710194();
      func_0x00010771ebc0();
      if (!(bool)in_ZR) {
        func_0x000107714920();
        func_0x000107710258();
        goto LAB_1076c2388;
      }
      func_0x000107716bb4();
      func_0x00010771a1d4();
      goto LAB_1076c2390;
    }
LAB_1076c23d8:
    func_0x00010771a1d4();
LAB_1076c23dc:
    func_0x00010771c1ac();
    func_0x00010771b450(auStack_418);
    puVar3 = unaff_x20 + 8;
LAB_1076c23ec:
    func_0x00010726af18();
  }
  else {
    iStack_10 = 0;
LAB_1076c229c:
    iStack_80 = 0;
    func_0x00010770b2d8();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_80 == 0) {
      iStack_1a8 = 0;
      func_0x0001077147dc();
      iVar2 = (int)auStack_210;
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_1a8 == 0) {
        func_0x00010771c14c();
        func_0x000107717474();
        func_0x00010770d7f4();
        func_0x000107714890();
      }
      func_0x00010771156c();
      func_0x00010771ed04();
      if ((bool)in_ZR) {
        func_0x00010771b208();
        func_0x00010771c13c();
        func_0x000107711c94();
        func_0x000107714838();
        func_0x000107715678();
        uVar1 = 0;
        if ((bool)in_ZR) {
          func_0x000107715128();
          func_0x00010770c30c(puVar3);
          func_0x00010770cf1c();
          if (iStack_80 == 0) {
            func_0x00010771c14c();
            func_0x000107717468();
            func_0x00010770cc14();
            func_0x000107714848();
          }
          func_0x000107714838();
          func_0x00010770cf50();
          func_0x000107714890();
          func_0x000107714830();
          goto LAB_1076c22c0;
        }
      }
      else {
        func_0x000107714920();
        func_0x000107711c30();
        uVar1 = in_ZR;
LAB_1076c23ac:
        func_0x00010771e87c();
        func_0x000107717300();
      }
LAB_1076c23b4:
      func_0x000107714890();
      func_0x000107714830();
      puVar3 = auStack_e0;
      in_ZR = uVar1;
      goto LAB_1076c23ec;
    }
LAB_1076c22c0:
    func_0x000107710194();
    func_0x00010771ebc0();
    if ((bool)in_ZR) {
      func_0x000107716bb4();
      func_0x00010771a1d4();
    }
    else {
      func_0x000107714920();
      func_0x000107710258();
LAB_1076c2388:
      func_0x00010771e868();
      func_0x000107715684();
    }
LAB_1076c2390:
    unaff_x20 = auStack_210;
    func_0x000107714890();
    func_0x000107714850();
    in_ZR = iVar2 == 3;
    if ((bool)in_ZR) goto LAB_1076c23dc;
  }
  func_0x00010770c324();
  func_0x0001077126d8();
  func_0x00010771c8f8();
  func_0x000107715678();
  if ((bool)in_ZR) {
    func_0x000107715128();
    func_0x00010770c29c(puVar3);
    func_0x00010771ced0();
    if ((bool)in_ZR) {
      func_0x000107716a68();
      func_0x000104c32db4();
      if ((((((ulong)puVar3 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar3 & 1) == 0)) &&
          (func_0x0001077150f4(), ((ulong)puVar3 & 1) == 0)) &&
         (((func_0x0001077150f4(), ((ulong)puVar3 & 1) == 0 &&
           (func_0x0001077150f4(), ((ulong)puVar3 & 1) == 0)) &&
          ((func_0x0001077150f4(), ((ulong)puVar3 & 1) == 0 &&
           (func_0x0001077150f4(), ((ulong)puVar3 & 1) == 0)))))) {
        func_0x0001077150f4();
        iVar2 = (int)puVar3;
        if (((ulong)puVar3 & 1) == 0) {
          func_0x0001077150f4();
          in_ZR = iVar2 == 0;
        }
      }
      func_0x00010771a1c4();
      goto LAB_1076c25c8;
    }
  }
  else {
    uStack_138 = 0;
  }
  func_0x00010771a1c4();
LAB_1076c25c8:
  func_0x00010771b5e8();
  func_0x00010770dd4c();
  func_0x000107714890();
  func_0x00010770eda8();
  func_0x00010770cf50();
  func_0x0001077172e0();
  func_0x000107707b78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d46e0);
    do {
      func_0x0001077149ec();
      func_0x0001077172e0();
    } while( true );
  }
  return;
}



/* Entry: 1076c751c; end: 1076c7fb7;  */

void FUN_1076c751c(uint param_1)

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
  func_0x00010771f3ec();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x0001077169ac();
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
    if (!(bool)in_ZR) goto LAB_1076c75b4;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x000107717930();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771f3e0();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x0001077169ac();
        goto LAB_1076c76d0;
      }
      func_0x00010771a7ec();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a7e0();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077169ac();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a7d4();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076c76ac;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x0001077169ac();
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
          goto LAB_1076c7684;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076c768c;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076c76a4;
    }
    func_0x00010771d1c4();
LAB_1076c76d0:
    func_0x000107715434();
LAB_1076c76d4:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771f3ec();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x0001077169ac();
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
        if (!(bool)in_ZR) goto LAB_1076c7770;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x000107717930();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771f3e0();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x0001077169ac();
            goto LAB_1076c78cc;
          }
          func_0x00010771a7ec();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a7e0();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x0001077169ac();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a7d4();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar1 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x0001077169ac();
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
                goto LAB_1076c7844;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076c784c;
            }
            goto LAB_1076c78a8;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076c78a0;
        }
        func_0x00010771d1c4();
LAB_1076c78cc:
        func_0x0001077154cc();
LAB_1076c78d0:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771f3ec();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x0001077169ac();
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
            if (!(bool)in_ZR) goto LAB_1076c796c;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x000107717930();
            if ((uVar2 & 1) == 0) {
              func_0x00010771f3e0();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x0001077169ac();
                goto LAB_1076c7b68;
              }
              func_0x00010771a7ec();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a7e0();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x0001077169ac();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a7d4();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x0001077169ac();
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
                    goto LAB_1076c7ad8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076c7ae0;
                }
                goto LAB_1076c7b44;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076c7b3c;
            }
            func_0x00010771d1c4();
LAB_1076c7b68:
            func_0x000107715370();
LAB_1076c7b6c:
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
LAB_1076c796c:
            func_0x00010771a7ec();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a7e0();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077169ac();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a7d4();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076c7b44;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x0001077169ac();
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
LAB_1076c7ad8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076c7ae0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076c7b6c;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076c7b3c:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076c7b44:
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
LAB_1076c7770:
        func_0x00010771a7ec();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a7e0();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x0001077169ac();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a7d4();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076c78a8;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x0001077169ac();
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
LAB_1076c7844:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076c784c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076c78d0;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076c78a0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076c78a8:
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
    goto LAB_1076c7bb8;
  }
LAB_1076c75b4:
  func_0x00010771a7ec();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a7e0();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x0001077169ac();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a7d4();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076c76ac;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x0001077169ac();
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
LAB_1076c7684:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076c768c:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076c76d4;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076c76a4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076c76ac:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076c7bb8:
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



/* Entry: 1076cce14; end: 1076cd8af;  */

void FUN_1076cce14(uint param_1)

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
  func_0x00010771f264();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x000107716994();
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
    if (!(bool)in_ZR) goto LAB_1076cceac;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x000107717850();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771f258();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x000107716994();
        goto LAB_1076ccfc8;
      }
      func_0x00010771a768();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a75c();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x000107716994();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a750();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076ccfa4;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x000107716994();
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
          goto LAB_1076ccf7c;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076ccf84;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076ccf9c;
    }
    func_0x00010771d164();
LAB_1076ccfc8:
    func_0x000107715434();
LAB_1076ccfcc:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771f264();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x000107716994();
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
        if (!(bool)in_ZR) goto LAB_1076cd068;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x000107717850();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771f258();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x000107716994();
            goto LAB_1076cd1c4;
          }
          func_0x00010771a768();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a75c();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x000107716994();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a750();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar1 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x000107716994();
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
                goto LAB_1076cd13c;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076cd144;
            }
            goto LAB_1076cd1a0;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076cd198;
        }
        func_0x00010771d164();
LAB_1076cd1c4:
        func_0x0001077154cc();
LAB_1076cd1c8:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771f264();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x000107716994();
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
            if (!(bool)in_ZR) goto LAB_1076cd264;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x000107717850();
            if ((uVar2 & 1) == 0) {
              func_0x00010771f258();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x000107716994();
                goto LAB_1076cd460;
              }
              func_0x00010771a768();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a75c();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x000107716994();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a750();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x000107716994();
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
                    goto LAB_1076cd3d0;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076cd3d8;
                }
                goto LAB_1076cd43c;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076cd434;
            }
            func_0x00010771d164();
LAB_1076cd460:
            func_0x000107715370();
LAB_1076cd464:
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
LAB_1076cd264:
            func_0x00010771a768();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a75c();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x000107716994();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a750();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076cd43c;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x000107716994();
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
LAB_1076cd3d0:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076cd3d8:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076cd464;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076cd434:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076cd43c:
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
LAB_1076cd068:
        func_0x00010771a768();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a75c();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x000107716994();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a750();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076cd1a0;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x000107716994();
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
LAB_1076cd13c:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076cd144:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076cd1c8;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076cd198:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076cd1a0:
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
    goto LAB_1076cd4b0;
  }
LAB_1076cceac:
  func_0x00010771a768();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a75c();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x000107716994();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a750();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076ccfa4;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x000107716994();
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
LAB_1076ccf7c:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076ccf84:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076ccfcc;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076ccf9c:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076ccfa4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076cd4b0:
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



/* Entry: 1076d20d0; end: 1076d24db;  */

void FUN_1076d20d0(uint param_1)

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
  func_0x000107718554();
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
    if (!(bool)in_ZR) goto LAB_1076d2170;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771dce8();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076d2294:
      func_0x000107714da8();
LAB_1076d2298:
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
      goto LAB_1076d22f8;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x000107718554();
      goto LAB_1076d2294;
    }
    func_0x00010771f1a0();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f194();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718554();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771f188();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar1 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718554();
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
          goto LAB_1076d2244;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076d224c;
      }
      goto LAB_1076d226c;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076d2264:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076d226c:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076d2170:
    func_0x00010771f1a0();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f194();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718554();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar1 = in_ZR;
      goto LAB_1076d2264;
    }
    func_0x000107714cc4();
    func_0x00010771f188();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076d226c;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718554();
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
LAB_1076d2244:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076d224c:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076d2298;
  }
  func_0x000107715758();
LAB_1076d22f8:
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



/* Entry: 1076dc5dc; end: 1076dd1b3;  */

void FUN_1076dc5dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  int unaff_w23;
  undefined1 *puVar13;
  byte unaff_w25;
  undefined8 in_stack_00000060;
  undefined1 auStack_620 [104];
  int iStack_5b8;
  undefined1 uStack_5a8;
  undefined1 auStack_4f8 [104];
  int iStack_490;
  int iStack_420;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined1 auStack_360 [8];
  undefined8 uStack_358;
  uint uStack_2f8;
  undefined1 auStack_2f0 [104];
  int iStack_288;
  undefined1 auStack_280 [104];
  uint uStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [176];
  byte abStack_158 [8];
  undefined1 auStack_150 [104];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  int iStack_80;
  undefined1 auStack_78 [104];
  int iStack_10;
  
  func_0x000107715308();
  func_0x000107707ae4();
  if ((bRam00000001136d54f8 & 1) == 0) {
    iVar5 = 0x136d54f8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077163d4(0x1137198f0,&UNK_10f422396);
      ___cxa_guard_release(0x1136d54f8);
    }
  }
  if ((bRam00000001136d5500 & 1) == 0) {
    iVar5 = 0x136d5500;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708e10(0x113719928);
      ___cxa_guard_release(0x1136d5500);
    }
  }
  if ((bRam00000001136d5508 & 1) == 0) {
    iVar5 = 0x136d5508;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708bb0(0x113719960);
      ___cxa_guard_release(0x1136d5508);
    }
  }
  if ((bRam00000001136d5510 & 1) == 0) {
    iVar5 = 0x136d5510;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708de0(0x113719998);
      ___cxa_guard_release(0x1136d5510);
    }
  }
  if ((bRam00000001136d5518 & 1) == 0) {
    iVar5 = 0x136d5518;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708dc0(0x1137199d0);
      ___cxa_guard_release(0x1136d5518);
    }
  }
  if ((bRam00000001136d5520 & 1) == 0) {
    iVar5 = 0x136d5520;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708dd0(0x113719a08);
      ___cxa_guard_release(0x1136d5520);
    }
  }
  if ((bRam00000001136d5528 & 1) == 0) {
    iVar5 = 0x136d5528;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708e00(0x113719a40);
      ___cxa_guard_release(0x1136d5528);
    }
  }
  if ((bRam00000001136d5530 & 1) == 0) {
    iVar5 = 0x136d5530;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708df0(0x113719a78);
      ___cxa_guard_release(0x1136d5530);
    }
  }
  if ((bRam00000001136d5538 & 1) == 0) {
    iVar5 = 0x136d5538;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107708db0(0x113719ab0);
      ___cxa_guard_release(0x1136d5538);
    }
  }
  if ((bRam00000001136d5540 & 1) == 0) {
    iVar5 = 0x136d5540;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770d04c(0x113719ae8);
      ___cxa_guard_release(0x1136d5540);
    }
  }
  if ((bRam00000001136d5548 & 1) == 0) {
    iVar5 = 0x136d5548;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077095a0(0x113719b20);
      ___cxa_guard_release(0x1136d5548);
    }
  }
  if ((bRam00000001136d5550 & 1) == 0) {
    iVar5 = 0x136d5550;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001077098bc(0x113719b58);
      ___cxa_guard_release(0x1136d5550);
    }
  }
  if ((bRam00000001136d5558 & 1) == 0) {
    iVar5 = 0x136d5558;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770b448(0x113719b90);
      ___cxa_guard_release(0x1136d5558);
    }
  }
  if ((bRam00000001136d5560 & 1) == 0) {
    iVar5 = 0x136d5560;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010770ab38(0x113719bc8);
      ___cxa_guard_release(0x1136d5560);
    }
  }
  pbVar6 = abStack_158;
  func_0x000107715980();
  func_0x000107717368();
  if ((bool)in_ZR) {
    func_0x0001077164f4();
    if ((*pbVar6 & 1) == 0) {
LAB_1076dccb8:
      uVar11 = 0;
LAB_1076dccbc:
      func_0x00010770ce5c();
LAB_1076dccc0:
      auStack_208[0] = uVar11;
      func_0x0001077123b4();
      uVar11 = SUB81(auStack_208,0);
      goto LAB_1076dccd0;
    }
    func_0x000107712404();
    iStack_10 = 0;
    func_0x0001077148ac(auStack_e8);
    func_0x00010770c2cc();
    func_0x000107714838();
    if (iStack_10 == 0) {
      func_0x00010771bab4();
      func_0x00010771b528();
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    func_0x000107719a78(auStack_280);
    unaff_w23 = (int)auStack_e8;
    func_0x000107719ce8(auStack_e8);
    puVar12 = auStack_210;
    func_0x0001074b0ce4(puVar12,auStack_e8);
    func_0x000107714838();
    func_0x000107715564();
    func_0x000107714830();
    func_0x0001077188a0();
    if ((bool)in_ZR) {
      func_0x00010771c3e8();
      func_0x0001077096ec();
      func_0x000107715f78();
      puVar7 = puVar12;
      if (!(bool)in_ZR) goto LAB_1076dc7d0;
      func_0x00010771551c();
      puVar7 = puVar12;
      func_0x000104c32db4();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107714b98();
        if ((int)puVar7 != 0) {
          func_0x00010771bab4();
          goto LAB_1076dc920;
        }
        iStack_80 = 0;
        func_0x00010770f44c();
        func_0x00010770c2cc();
        func_0x000107714838();
        if (iStack_80 == 0) {
          uStack_218 = 0;
          func_0x00010770d70c();
          func_0x00010770c290();
          func_0x000107714838();
          if (uStack_218 == 0) {
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
              func_0x00010770c494(puVar7);
              func_0x00010770cdcc();
              if (iStack_80 == 0) {
                func_0x00010771bab4();
                func_0x000107717e0c();
                func_0x00010770cce0();
                func_0x000107714888();
              }
              func_0x000107714860();
              func_0x000107714858();
              func_0x000107714838();
              func_0x000107714848();
              goto LAB_1076dcae8;
            }
            goto LAB_1076dc8f8;
          }
          func_0x00010770b88c();
          goto LAB_1076dc8f0;
        }
LAB_1076dcae8:
        func_0x00010770c4e8();
        puVar13 = (undefined1 *)(ulong)uStack_218;
        if (uStack_218 != 3) {
          func_0x00010770b940();
          goto LAB_1076dc8d0;
        }
        func_0x000107716cbc();
        func_0x000107717538();
        goto LAB_1076dc8d8;
      }
LAB_1076dc920:
      func_0x000107717538();
LAB_1076dc924:
      func_0x0001077178bc();
      func_0x000107717e84();
      func_0x0001077128fc();
      uVar11 = SUB81(puVar7,0);
      if (((ulong)puVar7 & 1) == 0) {
        uVar10 = 0;
        puVar13 = (undefined1 *)0x6;
      }
      else {
        func_0x0001077148ac(auStack_e8);
        func_0x000107718200();
        puVar7 = auStack_e8;
        func_0x00010771878c();
        uVar11 = SUB81(puVar7,0);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010770d70c();
          func_0x000107717e34();
          unaff_w23 = (int)auStack_2f0;
          func_0x0001077100f8();
          func_0x0001077111a8();
          func_0x000107714838();
        }
        else {
          puVar12 = (undefined1 *)0x1;
        }
        func_0x00010770ccbc();
        func_0x00010770f8e4();
        uVar10 = 6;
        if (((ulong)puVar12 & 1) == 0) {
          uVar10 = 0;
        }
        puVar13 = (undefined1 *)(ulong)uVar10;
        uVar10 = (uint)puVar12 ^ 1;
      }
      func_0x000107714ad4();
      func_0x0001077157a8();
    }
    else {
      iStack_10 = 0;
      puVar7 = puVar12;
LAB_1076dc7d0:
      iStack_80 = 0;
      func_0x00010770f44c();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_80 == 0) {
        uStack_218 = 0;
        func_0x00010770d70c();
        func_0x00010770c290();
        func_0x000107714838();
        if (uStack_218 == 0) {
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
            func_0x00010770c494(puVar7);
            func_0x00010770cdcc();
            if (iStack_80 == 0) {
              func_0x00010771bab4();
              func_0x000107717e0c();
              func_0x00010770cce0();
              func_0x000107714888();
            }
            func_0x000107714860();
            func_0x000107714858();
            func_0x000107714838();
            func_0x000107714848();
            goto LAB_1076dc7f8;
          }
        }
        else {
          func_0x00010770b88c();
LAB_1076dc8f0:
          func_0x00010770d3a4();
          func_0x0001077150e4();
        }
LAB_1076dc8f8:
        uVar11 = SUB81(puVar7,0);
        puVar13 = auStack_280;
        unaff_w23 = (int)auStack_2f0;
        func_0x000107714838();
        func_0x000107714848();
        func_0x000107714830();
      }
      else {
LAB_1076dc7f8:
        func_0x00010770c4e8();
        puVar13 = (undefined1 *)(ulong)uStack_218;
        if (uStack_218 == 3) {
          func_0x000107716cbc();
          func_0x000107717538();
        }
        else {
          func_0x00010770b940();
LAB_1076dc8d0:
          func_0x00010770eccc();
          func_0x000107715720();
        }
LAB_1076dc8d8:
        unaff_w23 = (int)auStack_280;
        puVar12 = (undefined1 *)0x0;
        func_0x000107714838();
        func_0x000107714830();
        uVar11 = SUB81(puVar7,0);
        if ((int)puVar13 == 3) goto LAB_1076dc924;
      }
      uVar10 = 0;
      func_0x000107716450();
    }
    func_0x00010770c23c();
    func_0x000107712f24();
    func_0x000107715514();
    in_ZR = (int)puVar13 == 6;
    if (((bool)in_ZR) || ((int)puVar13 == 0)) {
      if ((uVar10 & 1) == 0) goto LAB_1076dccb8;
      uVar11 = SUB81(auStack_210,0);
      func_0x00010770c394();
      func_0x000107719040();
      if ((bool)in_ZR) {
        iStack_10 = 0;
        func_0x0001077148ac(auStack_e8);
        unaff_w23 = (int)auStack_78;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_10 == 0) {
          uStack_e0 = 0;
          iStack_80 = 2;
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        cVar2 = SBORROW4(iStack_80,2);
        cVar3 = iStack_80 + -2 < 0;
        uVar4 = iStack_80 == 2;
        if ((bool)uVar4) {
          func_0x0001077172c0();
          func_0x00010771d798();
          func_0x00010771f2a0();
          func_0x00010771aed8(param_1,param_2,0xc0e5180000000000);
          if (cVar3 == cVar2) {
            uVar11 = SUB81(auStack_280,0);
            func_0x00010770c394();
            func_0x000107719cf0();
            if ((bool)uVar4) {
              iStack_288 = 0;
              func_0x0001077148ac(auStack_360);
              func_0x00010770c184();
              func_0x000107714850();
              if (iStack_288 == 0) {
                uStack_358 = 0;
                func_0x00010771945c();
                func_0x00010770c184();
                func_0x000107714850();
              }
              func_0x00010770c1c4();
              uVar1 = 1 < uStack_2f8;
              uVar4 = uStack_2f8 == 2;
              if ((bool)uVar4) {
                func_0x000107718208();
                func_0x000107718d8c();
                func_0x00010771f2a0();
                func_0x00010771aed8(param_1,param_2,0x40bc200000000000);
                unaff_w25 = !(bool)uVar1 || (bool)uVar4;
                uVar10 = 0;
                if ((bool)uVar1 && !(bool)uVar4) {
                  uVar10 = 4;
                }
                puVar13 = (undefined1 *)(ulong)uVar10;
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
            puVar13 = (undefined1 *)0x4;
          }
        }
        else {
          func_0x000107714934();
          uVar11 = SUB81(auStack_280,0);
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
    if (((ulong)puVar13 & 3) == 0) {
      in_ZR = 1;
      if ((unaff_w25 & 1) == 0) goto LAB_1076dccb8;
      uVar11 = 1;
      goto LAB_1076dccbc;
    }
    func_0x00010770ce5c();
    in_ZR = (int)puVar13 == 2;
    if ((bool)in_ZR) {
      uVar11 = 1;
      goto LAB_1076dccc0;
    }
  }
  else {
    func_0x0001077148b4();
    func_0x0001077158f8(auStack_210);
    func_0x00010770edcc();
    func_0x000107716338();
    uVar11 = SUB81(auStack_150,0);
LAB_1076dccd0:
    func_0x00010726af18();
  }
  func_0x000107708038();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5560);
  func_0x000107714988();
  puVar8 = &DAT_1076dd1b4;
  func_0x00010771cb48();
  puStack_3d0 = &stack0x00000060;
  puStack_3c8 = puVar8;
  func_0x000107707aa0();
  if ((bRam00000001136d5568 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5568;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708e10(0x113719c00);
      puVar8 = (undefined *)0x1136d5568;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5570 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5570;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708bb0(0x113719c38);
      puVar8 = (undefined *)0x1136d5570;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5578 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5578;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708de0(0x113719c70);
      puVar8 = (undefined *)0x1136d5578;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5580 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5580;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708dc0(0x113719ca8);
      puVar8 = (undefined *)0x1136d5580;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5588 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5588;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708dd0(0x113719ce0);
      puVar8 = (undefined *)0x1136d5588;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5590 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5590;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708e00(0x113719d18);
      puVar8 = (undefined *)0x1136d5590;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5598 & 1) == 0) {
    puVar8 = (undefined *)0x1136d5598;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708df0(0x113719d50);
      puVar8 = (undefined *)0x1136d5598;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55a0 & 1) == 0) {
    puVar8 = (undefined *)0x1136d55a0;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x000107708db0(0x113719d88);
      puVar8 = (undefined *)0x1136d55a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55a8 & 1) == 0) {
    puVar8 = (undefined *)0x1136d55a8;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x00010770d04c(0x113719dc0);
      puVar8 = (undefined *)0x1136d55a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55b0 & 1) == 0) {
    puVar8 = (undefined *)0x1136d55b0;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x0001077095a0(0x113719df8);
      puVar8 = (undefined *)0x1136d55b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55b8 & 1) == 0) {
    puVar8 = (undefined *)0x1136d55b8;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x0001077098bc(0x113719e30);
      puVar8 = (undefined *)0x1136d55b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55c0 & 1) == 0) {
    puVar8 = (undefined *)0x1136d55c0;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x00010770b448(0x113719e68);
      puVar8 = (undefined *)0x1136d55c0;
      ___cxa_guard_release();
    }
  }
  func_0x000107712404();
  iStack_420 = 0;
  func_0x00010770f7dc();
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_420 == 0) {
    func_0x00010771ba9c();
    func_0x000107716320();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107715120(auStack_620);
  func_0x000107717a28();
  func_0x000107719fa0();
  func_0x000107714830();
  func_0x000107715564();
  func_0x000107714850();
  func_0x0001077188a0();
  if (!(bool)in_ZR) {
    iStack_420 = 0;
    puVar9 = puVar8;
code_r0x0001076dd328:
    iStack_490 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_490 == 0) {
      iStack_5b8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_620;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_5b8 == 0) {
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
        uVar4 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(puVar9);
          func_0x00010770c430();
          if (iStack_490 == 0) {
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
        uVar4 = in_ZR;
code_r0x0001076dd43c:
        func_0x00010770d3a4();
        func_0x0001077150e4();
      }
code_r0x0001076dd444:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      in_ZR = uVar4;
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
      puVar8 = (undefined *)0x0;
      func_0x000107714830();
      func_0x000107714850();
      in_ZR = unaff_w23 == 3;
      if ((bool)in_ZR) goto code_r0x0001076dd470;
    }
    puVar8 = (undefined *)0x0;
    func_0x0001077193a8();
    goto code_r0x0001076dd500;
  }
  func_0x00010771c3e8();
  func_0x000107707ee8();
  func_0x000107715018();
  puVar9 = puVar8;
  if (!(bool)in_ZR) goto code_r0x0001076dd328;
  func_0x000107714bc0();
  puVar9 = puVar8;
  func_0x000104c32db4();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000107714c8c();
    if ((int)puVar9 != 0) {
      func_0x00010771ba9c();
      goto code_r0x0001076dd46c;
    }
    iStack_490 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_490 == 0) {
      iStack_5b8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_620;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_5b8 == 0) {
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
        uVar4 = 0;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(puVar9);
          func_0x00010770c430();
          if (iStack_490 == 0) {
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
      uVar4 = in_ZR;
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
  if (((ulong)puVar9 & 1) == 0) {
code_r0x0001076dd4f4:
    func_0x00010771a924();
  }
  else {
    func_0x00010770f7dc();
    func_0x000107718200();
    puVar12 = auStack_4f8;
    func_0x00010771878c();
    if (((ulong)puVar12 & 1) != 0) {
      func_0x00010770ccbc();
      func_0x00010770ce5c();
      goto code_r0x0001076dd4f4;
    }
    func_0x00010770d70c();
    func_0x000107717e34();
    puVar8 = (undefined *)0x0;
    func_0x0001077100f8();
    uVar11 = SUB81(puVar12,0);
    func_0x000107714830();
    func_0x000107714850();
    func_0x00010770ccbc();
    func_0x00010770ce5c();
    if (((ulong)puVar12 & 1) != 0) goto code_r0x0001076dd4f4;
    func_0x00010771fd28();
  }
  func_0x000107714ad4();
  func_0x0001077157a8();
code_r0x0001076dd500:
  func_0x00010770c324();
  func_0x000107714f40();
  func_0x000107715514();
  if (((ulong)puVar8 & 1) == 0) {
    uStack_5a8 = uVar11;
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



/* Entry: 1076e3e1c; end: 1076e45db;  */

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

void FUN_1076e3e1c(undefined8 param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  uint extraout_w8;
  char *unaff_x21;
  int iVar7;
  undefined8 in_stack_00000050;
  undefined1 auStack_1050 [224];
  int iStack_f70;
  undefined1 *puStack_f60;
  undefined1 *puStack_ea0;
  undefined1 auStack_e98 [120];
  undefined1 auStack_e20 [112];
  byte bStack_db0;
  undefined1 auStack_da8 [112];
  byte bStack_d38;
  undefined1 auStack_d30 [112];
  byte bStack_cc0;
  undefined1 auStack_cb8 [112];
  byte bStack_c48;
  char acStack_c38 [112];
  undefined1 auStack_bc8 [112];
  undefined1 auStack_b58 [112];
  byte bStack_ae8;
  int iStack_ae0;
  undefined1 auStack_ad8 [112];
  undefined1 auStack_a68 [112];
  undefined1 auStack_9f8 [112];
  byte bStack_988;
  int iStack_980;
  undefined1 auStack_978 [224];
  undefined1 auStack_898 [120];
  int iStack_820;
  char acStack_818 [112];
  undefined1 auStack_7a8 [216];
  undefined4 uStack_6d0;
  undefined1 auStack_658 [112];
  byte bStack_5e8;
  undefined8 *puStack_580;
  undefined *puStack_578;
  undefined1 auStack_560 [56];
  undefined1 *puStack_528;
  undefined1 auStack_520 [40];
  undefined4 uStack_4f8;
  undefined1 *puStack_4e8;
  undefined1 auStack_4e0 [56];
  undefined1 *puStack_4a8;
  undefined1 auStack_4a0 [56];
  undefined1 *puStack_468;
  undefined1 auStack_460 [56];
  undefined1 *puStack_428;
  undefined1 auStack_420 [120];
  undefined1 auStack_3a8 [112];
  byte bStack_338;
  undefined1 auStack_330 [112];
  byte bStack_2c0;
  undefined1 auStack_2b8 [112];
  byte bStack_248;
  undefined1 auStack_240 [112];
  byte bStack_1d0;
  int iStack_80;
  undefined1 auStack_78 [104];
  undefined4 uStack_10;
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d58f8 & 1) == 0) {
    param_1 = 0x1136d58f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107714f84(0x11371b480,&DAT_10f300d16);
      param_1 = 0x1136d58f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5900 & 1) == 0) {
    param_1 = 0x1136d5900;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x11371b4b8);
      param_1 = 0x1136d5900;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5908 & 1) == 0) {
    param_1 = 0x1136d5908;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x11371b4f0);
      param_1 = 0x1136d5908;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5910 & 1) == 0) {
    param_1 = 0x1136d5910;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a12c(0x11371b528);
      param_1 = 0x1136d5910;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5918 & 1) == 0) {
    param_1 = 0x1136d5918;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x11371b560);
      param_1 = 0x1136d5918;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5920 & 1) == 0) {
    param_1 = 0x1136d5920;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107714f84(0x11371b598,&UNK_10f41e4f3);
      param_1 = 0x1136d5920;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5928 & 1) == 0) {
    param_1 = 0x1136d5928;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x11371b5d0);
      param_1 = 0x1136d5928;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5930 & 1) == 0) {
    param_1 = 0x1136d5930;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x11371b608);
      param_1 = 0x1136d5930;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5938 & 1) == 0) {
    param_1 = 0x1136d5938;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x11371b640);
      param_1 = 0x1136d5938;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5940 & 1) == 0) {
    param_1 = 0x1136d5940;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x11371b678);
      param_1 = 0x1136d5940;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5948 & 1) == 0) {
    param_1 = 0x1136d5948;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x11371b6b0);
      param_1 = 0x1136d5948;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5950 & 1) == 0) {
    param_1 = 0x1136d5950;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107713528(0x11371b6e8);
      param_1 = 0x1136d5950;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d5958 & 1) == 0) {
    param_1 = 0x1136d5958;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107713518(0x11371b720);
      param_1 = 0x1136d5958;
      ___cxa_guard_release();
    }
  }
  uStack_10 = 0;
  iStack_80 = 0;
  func_0x000107710dd4();
  func_0x00010770cc68();
  func_0x000107714838();
  if (iStack_80 == 0) {
    func_0x00010770f80c();
    func_0x00010770cc68();
    func_0x000107714838();
  }
  func_0x00010770c4dc();
  func_0x00010771d860();
  func_0x000107719734();
  if ((int)param_1 == 0) {
    uStack_4f8 = 0;
    func_0x000107711a78();
    func_0x00010771d82c();
    func_0x00010771a060();
    if ((int)param_1 == 0) {
      func_0x000107707b18();
      func_0x000107714898();
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x00010770c218(param_1);
        func_0x0001077103bc();
        goto LAB_1076e419c;
      }
    }
    else {
      func_0x0001077077b8();
      func_0x000107714898();
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x00010770c218(param_1);
        func_0x0001077103bc();
LAB_1076e419c:
        unaff_x21 = (char *)0x0;
        func_0x00010770c808(auStack_560);
        func_0x000107714890();
        func_0x000107714850();
        func_0x000107714858();
        func_0x00010770ce20(auStack_78);
        func_0x00010771110c();
        func_0x00010770d724();
        func_0x000107714890();
        goto LAB_1076e41c8;
      }
    }
    func_0x00010771110c();
    func_0x00010770d724();
    func_0x00010770d628();
  }
  else {
    func_0x000107712cec();
    func_0x00010770f80c();
    func_0x00010770f314();
    func_0x000107714838();
    func_0x000107714898();
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x00010771d844();
      func_0x000107714858();
      if ((bStack_338 & 1) == 0) {
        func_0x00010770f80c();
        func_0x00010770f314();
        func_0x000107714838();
        func_0x000107714898();
        if (!(bool)in_ZR) goto LAB_1076e4164;
        func_0x000107714870();
        func_0x00010771d83c();
        func_0x000107714858();
      }
      if ((bStack_2c0 & 1) == 0) {
        func_0x00010770f80c();
        func_0x00010770f314();
        func_0x000107714838();
        func_0x000107714898();
        if (!(bool)in_ZR) goto LAB_1076e4164;
        func_0x000107714870();
        func_0x000107718c8c();
        func_0x000107714858();
      }
      if ((bStack_1d0 & 1) == 0) {
        func_0x000107710dd4();
        func_0x00010770f314();
        func_0x000107714838();
        func_0x000107714898();
        if (!(bool)in_ZR) goto LAB_1076e4164;
        func_0x000107714870();
        func_0x00010771e3f0();
        func_0x000107714858();
      }
      if ((bStack_248 & 1) == 0) {
        func_0x00010770f80c();
        func_0x00010770f314();
        func_0x000107714838();
        func_0x000107714898();
        if (!(bool)in_ZR) goto LAB_1076e4164;
        func_0x000107714870();
        func_0x00010771d834();
        func_0x000107714858();
      }
      func_0x000107714c0c(auStack_560);
      puStack_528 = auStack_420;
      func_0x000107714c04(auStack_520);
      puStack_4e8 = auStack_3a8;
      func_0x0001077151c4(auStack_4e0);
      puStack_4a8 = auStack_330;
      func_0x00010771528c(auStack_4a0);
      puStack_468 = auStack_240;
      func_0x000107715324(auStack_460);
      puStack_428 = auStack_2b8;
      func_0x000107707c08();
      func_0x000107715164();
      do {
        func_0x00010771d824();
        func_0x000107715184();
      } while (!(bool)in_ZR);
      func_0x000107714898();
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x00010770b990();
        func_0x0001077177c0();
        func_0x00010770c808(auStack_78);
        func_0x000107714890();
        func_0x000107714850();
        func_0x000107714858();
        func_0x0001077186c4();
        func_0x0001077186bc();
        func_0x000107717914();
        func_0x000107716f74();
        func_0x000107718814();
LAB_1076e41c8:
        func_0x00010770ce74();
        goto LAB_1076e41dc;
      }
    }
LAB_1076e4164:
    func_0x0001077186c4();
    func_0x0001077186bc();
    func_0x000107717914();
    func_0x000107716f74();
    func_0x000107718814();
  }
LAB_1076e41dc:
  func_0x000107711824();
  func_0x000107714848();
  func_0x000107714860();
  func_0x00010770c3d0();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5958);
  func_0x000107714988();
  puVar6 = &DAT_1076e45dc;
  func_0x0001077184d0();
  puStack_580 = &stack0x00000050;
  puStack_578 = puVar6;
  func_0x000107707444();
  if ((bRam00000001136d5960 & 1) == 0) {
    iVar7 = 0x136d5960;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708dc0(0x11371b758);
      ___cxa_guard_release(0x1136d5960);
    }
  }
  if ((bRam00000001136d5968 & 1) == 0) {
    iVar7 = 0x136d5968;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a0ec(0x11371b790);
      ___cxa_guard_release(0x1136d5968);
    }
  }
  if ((bRam00000001136d5970 & 1) == 0) {
    iVar7 = 0x136d5970;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f50(0x11371b7c8);
      ___cxa_guard_release(0x1136d5970);
    }
  }
  if ((bRam00000001136d5978 & 1) == 0) {
    iVar7 = 0x136d5978;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f00(0x11371b800);
      ___cxa_guard_release(0x1136d5978);
    }
  }
  if ((bRam00000001136d5980 & 1) == 0) {
    iVar7 = 0x136d5980;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a4ac(0x11371b838);
      ___cxa_guard_release(0x1136d5980);
    }
  }
  if ((bRam00000001136d5988 & 1) == 0) {
    iVar7 = 0x136d5988;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ef0(0x11371b870);
      ___cxa_guard_release(0x1136d5988);
    }
  }
  if ((bRam00000001136d5990 & 1) == 0) {
    iVar7 = 0x136d5990;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ee0(0x11371b8a8);
      ___cxa_guard_release(0x1136d5990);
    }
  }
  if ((bRam00000001136d5998 & 1) == 0) {
    iVar7 = 0x136d5998;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770927c(0x11371b8e0);
      ___cxa_guard_release(0x1136d5998);
    }
  }
  if ((bRam00000001136d59a0 & 1) == 0) {
    iVar7 = 0x136d59a0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770986c(0x11371b918);
      ___cxa_guard_release(0x1136d59a0);
    }
  }
  if ((bRam00000001136d59a8 & 1) == 0) {
    iVar7 = 0x136d59a8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077094a0(0x11371b950);
      ___cxa_guard_release(0x1136d59a8);
    }
  }
  if ((bRam00000001136d59b0 & 1) == 0) {
    iVar7 = 0x136d59b0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a49c(0x11371b988);
      ___cxa_guard_release(0x1136d59b0);
    }
  }
  if ((bRam00000001136d59b8 & 1) == 0) {
    iVar7 = 0x136d59b8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090d0(0x11371b9c0);
      ___cxa_guard_release(0x1136d59b8);
    }
  }
  if ((bRam00000001136d59c0 & 1) == 0) {
    iVar7 = 0x136d59c0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a1c0(0x11371b9f8);
      ___cxa_guard_release(0x1136d59c0);
    }
  }
  if ((bRam00000001136d59c8 & 1) == 0) {
    iVar7 = 0x136d59c8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709738(0x11371ba30);
      ___cxa_guard_release(0x1136d59c8);
    }
  }
  if ((bRam00000001136d59d0 & 1) == 0) {
    iVar7 = 0x136d59d0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709728(0x11371ba68);
      ___cxa_guard_release(0x1136d59d0);
    }
  }
  if ((bRam00000001136d59d8 & 1) == 0) {
    iVar7 = 0x136d59d8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090e0(0x11371baa0);
      ___cxa_guard_release(0x1136d59d8);
    }
  }
  if ((bRam00000001136d59e0 & 1) == 0) {
    iVar7 = 0x136d59e0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090f0(0x11371bad8);
      ___cxa_guard_release(0x1136d59e0);
    }
  }
  if ((bRam00000001136d59e8 & 1) == 0) {
    iVar7 = 0x136d59e8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709060(0x11371bb10);
      ___cxa_guard_release(0x1136d59e8);
    }
  }
  if ((bRam00000001136d59f0 & 1) == 0) {
    iVar7 = 0x136d59f0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708e10(0x11371bb48);
      ___cxa_guard_release(0x1136d59f0);
    }
  }
  if ((bRam00000001136d59f8 & 1) == 0) {
    iVar7 = 0x136d59f8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708bb0(0x11371bb80);
      ___cxa_guard_release(0x1136d59f8);
    }
  }
  if ((bRam00000001136d5a00 & 1) == 0) {
    iVar7 = 0x136d5a00;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708de0(0x11371bbb8);
      ___cxa_guard_release(0x1136d5a00);
    }
  }
  if ((bRam00000001136d5a08 & 1) == 0) {
    iVar7 = 0x136d5a08;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708dd0(0x11371bbf0);
      ___cxa_guard_release(0x1136d5a08);
    }
  }
  if ((bRam00000001136d5a10 & 1) == 0) {
    iVar7 = 0x136d5a10;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708e00(0x11371bc28);
      ___cxa_guard_release(0x1136d5a10);
    }
  }
  if ((bRam00000001136d5a18 & 1) == 0) {
    iVar7 = 0x136d5a18;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708df0(0x11371bc60);
      ___cxa_guard_release(0x1136d5a18);
    }
  }
  if ((bRam00000001136d5a20 & 1) == 0) {
    iVar7 = 0x136d5a20;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708db0(0x11371bc98);
      ___cxa_guard_release(0x1136d5a20);
    }
  }
  if ((bRam00000001136d5a28 & 1) == 0) {
    iVar7 = 0x136d5a28;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077092ac(0x11371bcd0);
      ___cxa_guard_release(0x1136d5a28);
    }
  }
  if ((bRam00000001136d5a30 & 1) == 0) {
    iVar7 = 0x136d5a30;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a1b0(0x11371bd08);
      ___cxa_guard_release(0x1136d5a30);
    }
  }
  if ((bRam00000001136d5a38 & 1) == 0) {
    iVar7 = 0x136d5a38;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a9c(0x11371bd40);
      ___cxa_guard_release(0x1136d5a38);
    }
  }
  if ((bRam00000001136d5a40 & 1) == 0) {
    iVar7 = 0x136d5a40;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f70(0x11371bd78);
      ___cxa_guard_release(0x1136d5a40);
    }
  }
  if ((bRam00000001136d5a48 & 1) == 0) {
    iVar7 = 0x136d5a48;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708fd0(0x11371bdb0);
      ___cxa_guard_release(0x1136d5a48);
    }
  }
  if ((bRam00000001136d5a50 & 1) == 0) {
    iVar7 = 0x136d5a50;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a8c(0x11371bde8);
      ___cxa_guard_release(0x1136d5a50);
    }
  }
  if ((bRam00000001136d5a58 & 1) == 0) {
    iVar7 = 0x136d5a58;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a7c(0x11371be20);
      ___cxa_guard_release(0x1136d5a58);
    }
  }
  if ((bRam00000001136d5a60 & 1) == 0) {
    iVar7 = 0x136d5a60;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a6c(0x11371be58);
      ___cxa_guard_release(0x1136d5a60);
    }
  }
  if ((bRam00000001136d5a68 & 1) == 0) {
    iVar7 = 0x136d5a68;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a5c(0x11371be90);
      ___cxa_guard_release(0x1136d5a68);
    }
  }
  if ((bRam00000001136d5a70 & 1) == 0) {
    iVar7 = 0x136d5a70;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770995c(0x11371bec8);
      ___cxa_guard_release(0x1136d5a70);
    }
  }
  if ((bRam00000001136d5a78 & 1) == 0) {
    iVar7 = 0x136d5a78;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709570(0x11371bf00);
      ___cxa_guard_release(0x1136d5a78);
    }
  }
  if ((bRam00000001136d5a80 & 1) == 0) {
    iVar7 = 0x136d5a80;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a4c(0x11371bf38);
      ___cxa_guard_release(0x1136d5a80);
    }
  }
  if ((bRam00000001136d5a88 & 1) == 0) {
    iVar7 = 0x136d5a88;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709394(0x11371bf70);
      ___cxa_guard_release(0x1136d5a88);
    }
  }
  if ((bRam00000001136d5a90 & 1) == 0) {
    iVar7 = 0x136d5a90;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a3c(0x11371bfa8);
      ___cxa_guard_release(0x1136d5a90);
    }
  }
  if ((bRam00000001136d5a98 & 1) == 0) {
    iVar7 = 0x136d5a98;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a2c(0x11371bfe0);
      ___cxa_guard_release(0x1136d5a98);
    }
  }
  if ((bRam00000001136d5aa0 & 1) == 0) {
    iVar7 = 0x136d5aa0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a0dc(0x11371c018);
      ___cxa_guard_release(0x1136d5aa0);
    }
  }
  if ((bRam00000001136d5aa8 & 1) == 0) {
    iVar7 = 0x136d5aa8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077093c4(0x11371c050);
      ___cxa_guard_release(0x1136d5aa8);
    }
  }
  if ((bRam00000001136d5ab0 & 1) == 0) {
    iVar7 = 0x136d5ab0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a1c(0x11371c088);
      ___cxa_guard_release(0x1136d5ab0);
    }
  }
  if ((bRam00000001136d5ab8 & 1) == 0) {
    iVar7 = 0x136d5ab8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709020(0x11371c0c0);
      ___cxa_guard_release(0x1136d5ab8);
    }
  }
  if ((bRam00000001136d5ac0 & 1) == 0) {
    iVar7 = 0x136d5ac0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077093a4(0x11371c0f8);
      ___cxa_guard_release(0x1136d5ac0);
    }
  }
  if ((bRam00000001136d5ac8 & 1) == 0) {
    iVar7 = 0x136d5ac8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709a0c(0x11371c130);
      ___cxa_guard_release(0x1136d5ac8);
    }
  }
  if ((bRam00000001136d5ad0 & 1) == 0) {
    iVar7 = 0x136d5ad0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077099fc(0x11371c168);
      ___cxa_guard_release(0x1136d5ad0);
    }
  }
  if ((bRam00000001136d5ad8 & 1) == 0) {
    iVar7 = 0x136d5ad8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a57c(0x11371c1a0);
      ___cxa_guard_release(0x1136d5ad8);
    }
  }
  if ((bRam00000001136d5ae0 & 1) == 0) {
    iVar7 = 0x136d5ae0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077099ac(0x11371c1d8);
      ___cxa_guard_release(0x1136d5ae0);
    }
  }
  if ((bRam00000001136d5ae8 & 1) == 0) {
    iVar7 = 0x136d5ae8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a990(0x11371c210);
      ___cxa_guard_release(0x1136d5ae8);
    }
  }
  if ((bRam00000001136d5af0 & 1) == 0) {
    iVar7 = 0x136d5af0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709eac(0x11371c248);
      ___cxa_guard_release(0x1136d5af0);
    }
  }
  if ((bRam00000001136d5af8 & 1) == 0) {
    iVar7 = 0x136d5af8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709e9c(0x11371c280);
      ___cxa_guard_release(0x1136d5af8);
    }
  }
  uStack_6d0 = 0;
  iVar7 = 0x1371b758;
  func_0x000107714c2c(auStack_7a8);
  pcVar4 = acStack_818;
  func_0x00010770c178();
  func_0x0001077174e0();
  uVar3 = iStack_820 == 1;
  if ((bool)uVar3) {
    func_0x00010771d7f8();
    func_0x00010756e584();
    iVar7 = 0x1371b870;
    uVar3 = *pcVar4 == '\x01';
    if ((bool)uVar3) {
      func_0x000107717338();
      func_0x00010771cd04();
      func_0x00010771d044();
      func_0x00010771039c();
      func_0x00010770c37c();
      func_0x000107714860();
      if (iStack_f70 == 0) {
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
        if ((bStack_988 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4ba0;
          func_0x000107714870();
          func_0x00010771d7f0();
          func_0x000107714858();
        }
        func_0x00010770d9e4();
        func_0x00010770b1c0();
        puStack_f60 = auStack_9f8;
        func_0x000107707b44();
        do {
          func_0x000107714ea0();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_b58);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x0001077186b4();
          func_0x00010771538c();
code_r0x0001076e5408:
          func_0x00010771a388();
          iVar7 = 0x1371b870;
          goto code_r0x0001076e5434;
        }
      }
code_r0x0001076e4ba0:
      func_0x0001077186b4();
      func_0x00010771538c();
      iVar7 = 0x1371b870;
      goto code_r0x0001076e5434;
    }
    func_0x00010771d7cc();
    func_0x00010770b3f4(auStack_978);
    func_0x0001077174d0();
    uVar3 = iStack_980 == 1;
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_9f8);
code_r0x0001076e5428:
      func_0x00010771180c();
      func_0x0001077117f4();
      func_0x0001077117e8();
      iVar7 = 0x1371b870;
      goto code_r0x0001076e5434;
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
      if (iStack_f70 == 0) {
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
        if ((bStack_ae8 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4ce4;
          func_0x000107714870();
          func_0x00010771d7e0();
          func_0x000107714858();
        }
        func_0x00010770d9e4();
        func_0x00010770b1c0();
        puStack_f60 = auStack_b58;
        func_0x000107707b44();
        do {
          func_0x000107714ea0();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_cb8);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x0001077186ac();
          func_0x00010771538c();
code_r0x0001076e53fc:
          func_0x00010771180c();
          func_0x0001077117f4();
          func_0x0001077117e8();
          goto code_r0x0001076e5408;
        }
      }
code_r0x0001076e4ce4:
      func_0x0001077186ac();
      func_0x00010771538c();
      goto code_r0x0001076e5428;
    }
    func_0x0001072ddd58(auStack_a68,0x11371b950);
    func_0x00010770c178(auStack_ad8);
    func_0x0001077174c0();
    uVar3 = iStack_ae0 == 1;
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_b58);
code_r0x0001076e541c:
      func_0x000107711818();
      func_0x00010771183c();
      func_0x000107711800();
      goto code_r0x0001076e5428;
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
      if (iStack_f70 == 0) {
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
        if ((bStack_c48 & 1) == 0) {
          func_0x000107710068();
          func_0x00010770ec50();
          func_0x000107714848();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4f00;
          func_0x000107714870();
          func_0x00010771d7b8();
          func_0x000107714858();
        }
        func_0x00010770d9e4();
        func_0x00010770b1c0();
        puStack_f60 = auStack_cb8;
        func_0x000107707b44();
        do {
          func_0x000107714ea0();
          func_0x000107715184();
        } while (!(bool)uVar3);
        func_0x000107714898();
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x000107708ea4();
          func_0x000107716f8c(auStack_d30);
          func_0x00010770b438();
          func_0x000107714890();
          func_0x000107714850();
          func_0x000107714858();
          func_0x0001077186a4();
          func_0x00010771538c();
code_r0x0001076e53f0:
          func_0x000107711818();
          func_0x00010771183c();
          func_0x000107711800();
          goto code_r0x0001076e53fc;
        }
      }
code_r0x0001076e4f00:
      func_0x0001077186a4();
      func_0x00010771538c();
      goto code_r0x0001076e541c;
    }
    func_0x0001072ddd58(auStack_bc8,0x11371b9c0);
    pcVar4 = acStack_c38;
    func_0x00010770c178();
    func_0x000107711ca8();
    func_0x00010771cf78();
    if (!(bool)uVar3) {
      func_0x00010770c1d0(auStack_cb8);
code_r0x0001076e5410:
      func_0x00010771005c();
      func_0x00010770fe04();
      func_0x00010770fdf8();
      goto code_r0x0001076e541c;
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
        if ((bStack_db0 & 1) == 0) {
          func_0x000107712ba8();
          func_0x00010770ec50();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4fd8;
          func_0x000107714870();
          func_0x0001077150d4();
          func_0x000107714858();
        }
        if ((bStack_d38 & 1) == 0) {
          func_0x000107712ba8();
          func_0x00010770ec50();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4fd8;
          func_0x000107714870();
          func_0x00010771515c();
          func_0x000107714858();
        }
        if ((bStack_5e8 & 1) == 0) {
          iStack_f70 = 0;
          func_0x00010771d044();
          func_0x000107712c44();
          func_0x00010770ee54();
          func_0x000107714888();
          if (iStack_f70 == 0) {
            func_0x00010771d038();
            func_0x000107712c44();
            func_0x00010770ee54();
            func_0x000107714888();
          }
          func_0x00010770ee6c();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4fd8;
          func_0x000107714870();
          func_0x000107715900();
          func_0x000107714858();
        }
        if ((bStack_cc0 & 1) == 0) {
          func_0x000107712ba8();
          func_0x00010770ec50();
          func_0x000107714860();
          func_0x000107714898();
          if (!(bool)uVar3) goto code_r0x0001076e4fd8;
          func_0x000107714870();
          func_0x000107714cbc();
          func_0x000107714858();
        }
        func_0x0001077144c0();
        func_0x0001077134c4(auStack_e98);
        func_0x0001077134b4(auStack_e20);
        func_0x000107713458(auStack_da8);
        func_0x00010771371c(auStack_658);
        puStack_ea0 = auStack_d30;
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
          func_0x000107716f8c(auStack_1050);
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
          goto code_r0x0001076e53f0;
        }
      }
code_r0x0001076e4fd8:
      func_0x000107714d80();
      func_0x000107715024();
      func_0x00010771507c();
      func_0x0001077150ac();
      func_0x00010771538c();
      goto code_r0x0001076e5410;
    }
    func_0x0001077074c4();
    func_0x00010771314c();
    func_0x000107714af0();
  }
  else {
    func_0x00010770c1d0(auStack_898);
code_r0x0001076e5434:
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
    uVar3 = iVar7 == 3;
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
  if (!(bool)uVar3) {
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
  return;
}



/* Entry: 1076ea4d0; end: 1076eae1b;  */

void FUN_1076ea4d0(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *unaff_x23;
  undefined8 in_stack_00000050;
  undefined1 auStack_eb8 [104];
  int iStack_e50;
  int iStack_de0;
  int iStack_d70;
  int iStack_d00;
  undefined1 auStack_cf8 [112];
  byte bStack_c88;
  undefined1 auStack_c80 [160];
  undefined8 **ppuStack_be0;
  undefined *puStack_bd8;
  int iStack_bd0;
  undefined1 auStack_af8 [120];
  undefined1 auStack_a80 [112];
  byte bStack_a10;
  undefined1 auStack_a08 [112];
  byte bStack_998;
  byte bStack_920;
  byte bStack_8a8;
  undefined1 auStack_6e0 [256];
  undefined8 *puStack_5e0;
  undefined *puStack_5d8;
  int iStack_5b0;
  undefined1 auStack_4d8 [120];
  undefined1 auStack_460 [112];
  byte bStack_3f0;
  undefined1 auStack_3e8 [112];
  byte bStack_378;
  byte bStack_300;
  byte bStack_288;
  undefined1 auStack_130 [184];
  undefined1 auStack_78 [120];
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d5ca8 & 1) == 0) {
    iVar3 = 0x136d5ca8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f50(0x11371ce18);
      ___cxa_guard_release(0x1136d5ca8);
    }
  }
  if ((bRam00000001136d5cb0 & 1) == 0) {
    iVar3 = 0x136d5cb0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f00(0x11371ce50);
      ___cxa_guard_release(0x1136d5cb0);
    }
  }
  if ((bRam00000001136d5cb8 & 1) == 0) {
    iVar3 = 0x136d5cb8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f70(0x11371ce88);
      ___cxa_guard_release(0x1136d5cb8);
    }
  }
  if ((bRam00000001136d5cc0 & 1) == 0) {
    iVar3 = 0x136d5cc0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708fd0(0x11371cec0);
      ___cxa_guard_release(0x1136d5cc0);
    }
  }
  if ((bRam00000001136d5cc8 & 1) == 0) {
    iVar3 = 0x136d5cc8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770986c(0x11371cef8);
      ___cxa_guard_release(0x1136d5cc8);
    }
  }
  if ((bRam00000001136d5cd0 & 1) == 0) {
    iVar3 = 0x136d5cd0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708bb0(0x11371cf30);
      ___cxa_guard_release(0x1136d5cd0);
    }
  }
  if ((bRam00000001136d5cd8 & 1) == 0) {
    iVar3 = 0x136d5cd8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a18c(0x11371cf68);
      ___cxa_guard_release(0x1136d5cd8);
    }
  }
  if ((bRam00000001136d5ce0 & 1) == 0) {
    iVar3 = 0x136d5ce0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770a850(0x11371cfa0);
      ___cxa_guard_release(0x1136d5ce0);
    }
  }
  if ((bRam00000001136d5ce8 & 1) == 0) {
    iVar3 = 0x136d5ce8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770b4c8(0x11371cfd8);
      ___cxa_guard_release(0x1136d5ce8);
    }
  }
  if ((bRam00000001136d5cf0 & 1) == 0) {
    iVar3 = 0x136d5cf0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077090e0(0x11371d010);
      ___cxa_guard_release(0x1136d5cf0);
    }
  }
  if ((bRam00000001136d5cf8 & 1) == 0) {
    iVar3 = 0x136d5cf8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077090f0(0x11371d048);
      ___cxa_guard_release(0x1136d5cf8);
    }
  }
  if ((bRam00000001136d5d00 & 1) == 0) {
    iVar3 = 0x136d5d00;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107709060(0x11371d080);
      ___cxa_guard_release(0x1136d5d00);
    }
  }
  if ((bRam00000001136d5d08 & 1) == 0) {
    iVar3 = 0x136d5d08;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ef0(0x11371d0b8);
      ___cxa_guard_release(0x1136d5d08);
    }
  }
  if ((bRam00000001136d5d10 & 1) == 0) {
    iVar3 = 0x136d5d10;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708ee0(0x11371d0f0);
      ___cxa_guard_release(0x1136d5d10);
    }
  }
  func_0x00010770738c();
  func_0x00010770e5d8();
  func_0x00010770cc74();
  func_0x00010770f170();
  func_0x00010770c330();
  if (((ulong)unaff_x23 & 1) == 0) {
    func_0x000107707718();
    func_0x000107714898();
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x00010770835c();
      func_0x000107714e60();
      func_0x00010770c330();
      func_0x000107714858();
      if ((int)unaff_x23 == 0) goto LAB_1076ea5f0;
      func_0x000107707d58(auStack_130);
      func_0x000107715f6c();
      if ((bool)in_ZR) {
        func_0x000107715dac();
        func_0x0001077083e8();
        func_0x000107709e54();
        func_0x0001077102ac();
        func_0x000107718ed8();
        if ((bool)in_ZR) {
          func_0x0001077173f4();
          func_0x000107714974();
          if ((bool)in_ZR) {
            func_0x000107707b18();
            func_0x000107714898();
            if (!(bool)in_ZR) goto LAB_1076ea6c4;
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
            func_0x00010771ee2c();
            func_0x000107717714();
          }
          func_0x0001077109f4();
          func_0x000107711040();
          func_0x00010771ee2c();
          func_0x000107717ca0();
          func_0x000107711058();
          func_0x000107713dac();
          func_0x00010771513c();
          func_0x000107715ca8();
          func_0x00010770d80c();
          func_0x000107715484();
          func_0x000107714838();
          func_0x00010770ddb8();
          goto LAB_1076ea5f8;
        }
        func_0x000107709d54();
        func_0x00010770c460();
        func_0x000107714ad4();
LAB_1076ea6c4:
        func_0x00010770d80c();
        func_0x000107715484();
        func_0x000107714838();
        func_0x0001077151e0();
      }
      else {
        unaff_x23 = auStack_130;
        func_0x00010770f028();
      }
      func_0x00010727f7f8();
    }
  }
  else {
LAB_1076ea5f0:
    func_0x00010771ee2c();
    func_0x000107719e40();
LAB_1076ea5f8:
    func_0x000107710ed0();
    func_0x00010770c2b4();
    func_0x000107714838();
  }
  func_0x0001077153d0();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x000107715708();
    func_0x000107714858();
    if ((bStack_3f0 & 1) == 0) {
      func_0x00010771ee2c();
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076ea930;
      func_0x000107714870();
      func_0x000107715538();
      func_0x000107714858();
    }
    unaff_x23 = (undefined1 *)0x11371c910;
    if ((bStack_378 & 1) == 0) {
      func_0x000107709e2c();
      iStack_5b0 = 0;
      func_0x000107709e68();
      func_0x000107709070();
      func_0x000107714860();
      if (iStack_5b0 == 0) {
        func_0x000107708340();
        func_0x000107714860();
      }
      func_0x00010770c8a4();
      func_0x000107717618();
      if ((bool)in_ZR) {
        func_0x0001077164c4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)in_ZR) {
          uVar1 = 0x5e8;
        }
        func_0x0001077102b8(uVar1);
        func_0x0001077102d0();
        func_0x00010770dd94();
        func_0x000107714888();
      }
      else {
        func_0x000107709d2c();
        func_0x00010770d8e0();
        func_0x0001077152c4();
      }
      func_0x000107714860();
      func_0x000107714848();
      func_0x000107716b80();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076ea930;
      func_0x000107714870();
      func_0x00010771548c();
      func_0x000107714858();
    }
    if ((bStack_288 & 1) == 0) {
      iStack_5b0 = 0;
      func_0x00010770c138();
      func_0x000107709070();
      func_0x000107714860();
      if (iStack_5b0 == 0) {
        func_0x00010770c138();
        func_0x00010770c37c();
        func_0x000107714860();
      }
      func_0x00010770c3dc();
      func_0x000107714848();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076ea930;
      func_0x000107714870();
      func_0x0001077153c0();
      func_0x000107714858();
    }
    if ((bStack_300 & 1) == 0) {
      func_0x000107709e2c();
      iStack_5b0 = 0;
      func_0x000107709e68();
      func_0x000107709070();
      func_0x000107714860();
      if (iStack_5b0 == 0) {
        func_0x000107708340();
        func_0x000107714860();
      }
      func_0x00010770c8a4();
      func_0x000107717618();
      if ((bool)in_ZR) {
        func_0x0001077164c4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)in_ZR) {
          uVar1 = 0x5e8;
        }
        func_0x0001077102b8(uVar1);
        unaff_x23 = auStack_78;
        func_0x000107710d48();
        func_0x00010770dd94();
        func_0x000107714838();
      }
      else {
        func_0x000107709d2c();
        func_0x00010770d8e0();
        func_0x0001077152c4();
      }
      func_0x000107714860();
      func_0x000107714848();
      func_0x000107716b80();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076ea930;
      func_0x000107714870();
      func_0x00010771543c();
      func_0x000107714858();
    }
    unaff_x23 = (undefined1 *)0x11371d010;
    func_0x00010770929c();
    func_0x00010770928c(auStack_4d8);
    func_0x0001077094c0(auStack_460);
    func_0x0001077095c0(auStack_3e8);
    func_0x000107708384();
    func_0x000107718bf8();
    func_0x000107707604(auStack_130);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
    } while (!(bool)in_ZR);
    func_0x000107715f6c();
    if ((bool)in_ZR) {
      func_0x000107715dac();
      func_0x000107707cfc();
      func_0x00010770c3dc();
      func_0x000107714850();
    }
    else {
      func_0x00010770c1d0(auStack_130);
    }
    func_0x00010770ddb8();
  }
LAB_1076ea930:
  func_0x000107714f20();
  func_0x000107714e58();
  func_0x000107714e1c();
  func_0x000107714e24();
  func_0x000107714d80();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5d10);
  func_0x000107714988();
  puVar5 = &DAT_1076eae1c;
  func_0x00010771cb48();
  puStack_5e0 = &stack0x00000050;
  puStack_5d8 = puVar5;
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
  if (((ulong)unaff_x23 & 1) == 0) {
    func_0x000107707718();
    func_0x000107714898();
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x00010770835c();
      func_0x000107714e60();
      func_0x00010770c330();
      func_0x000107714858();
      if ((int)unaff_x23 == 0) goto code_r0x0001076eaf18;
      puVar4 = auStack_6e0;
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
            if (!(bool)in_ZR) goto code_r0x0001076eaff4;
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
          goto code_r0x0001076eaf20;
        }
        func_0x000107709d54();
        func_0x00010770c460();
        func_0x000107714ad4();
code_r0x0001076eaff4:
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
code_r0x0001076eaf18:
    func_0x00010771ee20();
    func_0x000107718a40();
code_r0x0001076eaf20:
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
    if ((bStack_a10 & 1) == 0) {
      func_0x00010771ee20();
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x0001076eb18c;
      func_0x000107714870();
      func_0x000107715538();
      func_0x000107714858();
    }
    if ((bStack_998 & 1) == 0) {
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x0001076eb18c;
      func_0x000107714870();
      func_0x00010771548c();
      func_0x000107714858();
    }
    if ((bStack_8a8 & 1) == 0) {
      iStack_bd0 = 0;
      func_0x000107710c74();
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_bd0 == 0) {
        func_0x000107710c74();
        func_0x00010770c2e4();
        func_0x000107714848();
      }
      func_0x00010770c3dc();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x0001076eb18c;
      func_0x000107714870();
      func_0x0001077153c0();
      func_0x000107714858();
    }
    if ((bStack_920 & 1) == 0) {
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x0001076eb18c;
      func_0x000107714870();
      func_0x00010771543c();
      func_0x000107714858();
    }
    func_0x00010770929c();
    func_0x00010770928c(auStack_af8);
    func_0x0001077094c0(auStack_a80);
    func_0x0001077095c0(auStack_a08);
    func_0x000107708384();
    func_0x000107718bf8();
    func_0x000107707604(auStack_6e0);
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
      func_0x00010770c1d0(auStack_6e0);
    }
    func_0x00010770f470();
  }
code_r0x0001076eb18c:
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
  ppuStack_be0 = &puStack_5e0;
  puStack_bd8 = puVar5;
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
  func_0x0001077148e0(auStack_c80);
  auStack_cf8[0] = 0;
  bStack_c88 = 0;
  iStack_d00 = 0;
  func_0x000107715d78();
  func_0x00010770c394();
  func_0x00010770c1dc();
  func_0x000107714830();
  if (iStack_d00 == 0) {
    func_0x00010770d364();
    func_0x00010770c1dc();
    func_0x000107714830();
  }
  func_0x00010770c230();
  uVar2 = iStack_d70 == 2;
  if (!(bool)uVar2) {
    func_0x0001077110d0();
    func_0x0001077158f8();
    func_0x00010770de00();
    func_0x00010771519c();
    goto code_r0x0001076eb7e4;
  }
  iStack_de0 = 0;
  func_0x00010770cf68();
  func_0x00010770c37c();
  func_0x000107714860();
  if (iStack_de0 == 0) {
    func_0x00010770c788();
    func_0x000107711638();
    func_0x000107714850();
    if (iStack_de0 == 0) {
      func_0x00010770d364();
      func_0x00010770f86c();
      func_0x000107714890();
    }
  }
  func_0x00010770f524();
  uVar2 = iStack_e50 == 2;
  if ((bool)uVar2) {
    if ((bStack_c88 & 1) == 0) {
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
    func_0x0001072cb4bc(auStack_eb8);
    func_0x0001077171bc();
    func_0x000107719f14();
    func_0x00010770e84c(auStack_cf8);
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
      func_0x000107714a68(uVar1,auStack_c80);
      func_0x000107714d74();
      func_0x000107579a48();
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



/* Entry: 1076ef4d8; end: 1076ef8e3;  */

void FUN_1076ef4d8(uint param_1)

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
  func_0x000107718530();
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
    if (!(bool)in_ZR) goto LAB_1076ef578;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771d894();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076ef69c:
      func_0x000107714da8();
LAB_1076ef6a0:
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
      goto LAB_1076ef700;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x000107718530();
      goto LAB_1076ef69c;
    }
    func_0x00010771ed28();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771ed1c();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718530();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771ed10();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar1 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718530();
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
          goto LAB_1076ef64c;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076ef654;
      }
      goto LAB_1076ef674;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076ef66c:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076ef674:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076ef578:
    func_0x00010771ed28();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771ed1c();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718530();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar1 = in_ZR;
      goto LAB_1076ef66c;
    }
    func_0x000107714cc4();
    func_0x00010771ed10();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076ef674;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718530();
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
LAB_1076ef64c:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076ef654:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076ef6a0;
  }
  func_0x000107715758();
LAB_1076ef700:
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



/* Entry: 1076f4624; end: 1076f50bf;  */

void FUN_1076f4624(uint param_1)

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
  func_0x00010771ec14();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x0001077165a8();
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
    if (!(bool)in_ZR) goto LAB_1076f46bc;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x000107717498();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771ec08();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x0001077165a8();
        goto LAB_1076f47d8;
      }
      func_0x00010771a5a0();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a594();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077165a8();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a588();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076f47b4;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x0001077165a8();
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
          goto LAB_1076f478c;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076f4794;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076f47ac;
    }
    func_0x00010771cf6c();
LAB_1076f47d8:
    func_0x000107715434();
LAB_1076f47dc:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771ec14();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x0001077165a8();
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
        if (!(bool)in_ZR) goto LAB_1076f4878;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x000107717498();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771ec08();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x0001077165a8();
            goto LAB_1076f49d4;
          }
          func_0x00010771a5a0();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a594();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x0001077165a8();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a588();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar1 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x0001077165a8();
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
                goto LAB_1076f494c;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076f4954;
            }
            goto LAB_1076f49b0;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076f49a8;
        }
        func_0x00010771cf6c();
LAB_1076f49d4:
        func_0x0001077154cc();
LAB_1076f49d8:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771ec14();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x0001077165a8();
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
            if (!(bool)in_ZR) goto LAB_1076f4a74;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x000107717498();
            if ((uVar2 & 1) == 0) {
              func_0x00010771ec08();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x0001077165a8();
                goto LAB_1076f4c70;
              }
              func_0x00010771a5a0();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a594();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x0001077165a8();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a588();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x0001077165a8();
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
                    goto LAB_1076f4be0;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076f4be8;
                }
                goto LAB_1076f4c4c;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076f4c44;
            }
            func_0x00010771cf6c();
LAB_1076f4c70:
            func_0x000107715370();
LAB_1076f4c74:
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
LAB_1076f4a74:
            func_0x00010771a5a0();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a594();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077165a8();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a588();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076f4c4c;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x0001077165a8();
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
LAB_1076f4be0:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076f4be8:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076f4c74;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076f4c44:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076f4c4c:
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
LAB_1076f4878:
        func_0x00010771a5a0();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a594();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x0001077165a8();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a588();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076f49b0;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x0001077165a8();
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
LAB_1076f494c:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076f4954:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076f49d8;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076f49a8:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076f49b0:
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
    goto LAB_1076f4cc0;
  }
LAB_1076f46bc:
  func_0x00010771a5a0();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a594();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x0001077165a8();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a588();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076f47b4;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x0001077165a8();
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
LAB_1076f478c:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076f4794:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076f47dc;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076f47ac:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076f47b4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076f4cc0:
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



/* Entry: 1076f9ea4; end: 1076fa93f;  */

void FUN_1076f9ea4(uint param_1)

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
  func_0x00010771eb78();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771694c();
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
    if (!(bool)in_ZR) goto LAB_1076f9f3c;
    func_0x000107716fdc();
    uVar2 = param_1;
    func_0x000107717438();
    unaff_w21 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010771eb6c();
      func_0x000107714c8c();
      if (uVar2 != 0) {
        func_0x00010771694c();
        goto LAB_1076fa058;
      }
      func_0x00010771a54c();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a540();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x00010771694c();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a534();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar1 = 0;
        if (!(bool)in_ZR) goto LAB_1076fa034;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x00010771694c();
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
          goto LAB_1076fa00c;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto LAB_1076fa014;
      }
      func_0x000107707fe0();
      uVar1 = in_ZR;
      goto LAB_1076fa02c;
    }
    func_0x00010771cf30();
LAB_1076fa058:
    func_0x000107715434();
LAB_1076fa05c:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar2 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771eb78();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x00010771694c();
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
        if (!(bool)in_ZR) goto LAB_1076fa0f8;
        func_0x000107716d50();
        uVar3 = uVar2;
        func_0x000107717438();
        unaff_w21 = uVar2;
        if ((uVar3 & 1) == 0) {
          func_0x00010771eb6c();
          func_0x000107714c8c();
          if (uVar3 != 0) {
            func_0x00010771694c();
            goto LAB_1076fa254;
          }
          func_0x00010771a54c();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a540();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x00010771694c();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a534();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar1 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x00010771694c();
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
                goto LAB_1076fa1cc;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto LAB_1076fa1d4;
            }
            goto LAB_1076fa230;
          }
          func_0x0001077086d0();
          uVar1 = in_ZR;
          goto LAB_1076fa228;
        }
        func_0x00010771cf30();
LAB_1076fa254:
        func_0x0001077154cc();
LAB_1076fa258:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar3 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771eb78();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x00010771694c();
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
            if (!(bool)in_ZR) goto LAB_1076fa2f4;
            func_0x000107714bc0();
            uVar2 = uVar3;
            func_0x000107717438();
            if ((uVar2 & 1) == 0) {
              func_0x00010771eb6c();
              func_0x000107714c8c();
              if (uVar2 != 0) {
                func_0x00010771694c();
                goto LAB_1076fa4f0;
              }
              func_0x00010771a54c();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a540();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x00010771694c();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_w21 = uVar3;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a534();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar1 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x00010771694c();
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
                    goto LAB_1076fa460;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto LAB_1076fa468;
                }
                goto LAB_1076fa4cc;
              }
              func_0x000107708428();
              uVar1 = in_ZR;
              goto LAB_1076fa4c4;
            }
            func_0x00010771cf30();
LAB_1076fa4f0:
            func_0x000107715370();
LAB_1076fa4f4:
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
LAB_1076fa2f4:
            func_0x00010771a54c();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a540();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x00010771694c();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a534();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar1 = 0;
              if (!(bool)in_ZR) goto LAB_1076fa4cc;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x00010771694c();
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
LAB_1076fa460:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
LAB_1076fa468:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto LAB_1076fa4f4;
            }
            else {
              func_0x000107708428();
              uVar1 = in_ZR;
LAB_1076fa4c4:
              func_0x00010770d148();
              func_0x000107714cac();
LAB_1076fa4cc:
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
LAB_1076fa0f8:
        func_0x00010771a54c();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a540();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x00010771694c();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a534();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar1 = 0;
          if (!(bool)in_ZR) goto LAB_1076fa230;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x00010771694c();
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
LAB_1076fa1cc:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
LAB_1076fa1d4:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto LAB_1076fa258;
        }
        else {
          func_0x0001077086d0();
          uVar1 = in_ZR;
LAB_1076fa228:
          func_0x00010770ef3c();
          func_0x000107714dc4();
LAB_1076fa230:
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
    goto LAB_1076fa540;
  }
LAB_1076f9f3c:
  func_0x00010771a54c();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a540();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x00010771694c();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a534();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076fa034;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x00010771694c();
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
LAB_1076fa00c:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
LAB_1076fa014:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076fa05c;
  }
  else {
    func_0x000107707fe0();
    uVar1 = in_ZR;
LAB_1076fa02c:
    func_0x00010770e7e0();
    func_0x000107714ffc();
LAB_1076fa034:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  func_0x000107715758();
LAB_1076fa540:
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



/* Entry: 1076ff078; end: 1076ff483;  */

void FUN_1076ff078(uint param_1)

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
  func_0x000107718500();
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
    if (!(bool)in_ZR) goto LAB_1076ff118;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771d620();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076ff23c:
      func_0x000107714da8();
LAB_1076ff240:
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
      goto LAB_1076ff2a0;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x000107718500();
      goto LAB_1076ff23c;
    }
    func_0x00010771eaa0();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771ea94();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718500();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771ea88();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar1 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718500();
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
          goto LAB_1076ff1ec;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076ff1f4;
      }
      goto LAB_1076ff214;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076ff20c:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076ff214:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076ff118:
    func_0x00010771eaa0();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771ea94();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718500();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar1 = in_ZR;
      goto LAB_1076ff20c;
    }
    func_0x000107714cc4();
    func_0x00010771ea88();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076ff214;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718500();
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
LAB_1076ff1ec:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076ff1f4:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076ff240;
  }
  func_0x000107715758();
LAB_1076ff2a0:
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



/* Entry: 107705444; end: 107705b47;  */

void FUN_107705444(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  uint uVar6;
  ulong unaff_x22;
  int iVar7;
  undefined1 *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  double unaff_d8;
  undefined8 in_stack_00000050;
  undefined1 auStack_d80 [104];
  int iStack_d18;
  byte abStack_c60 [104];
  int iStack_bf8;
  undefined4 uStack_a98;
  undefined1 auStack_a90 [112];
  byte bStack_a20;
  undefined1 auStack_9d8 [104];
  undefined4 uStack_970;
  undefined1 *puStack_930;
  undefined8 **ppuStack_890;
  undefined *puStack_888;
  undefined1 *puStack_878;
  undefined1 *puStack_838;
  undefined1 *puStack_7f8;
  undefined1 *puStack_7b8;
  undefined1 auStack_7b0 [128];
  undefined1 auStack_730 [120];
  undefined1 auStack_6b8 [112];
  byte bStack_648;
  undefined1 auStack_640 [112];
  byte bStack_5d0;
  undefined1 auStack_5c8 [112];
  byte bStack_558;
  undefined1 auStack_550 [112];
  byte bStack_4e0;
  undefined8 *puStack_490;
  undefined *puStack_488;
  int iStack_460;
  undefined1 auStack_388 [128];
  undefined1 auStack_308 [120];
  undefined1 auStack_290 [112];
  byte bStack_220;
  undefined1 auStack_218 [112];
  byte bStack_1a8;
  byte bStack_130;
  undefined1 auStack_128 [112];
  byte bStack_b8;
  
  func_0x0001077184d0();
  func_0x000107707444();
  if ((bRam00000001136d6c40 & 1) == 0) {
    iVar7 = 0x136d6c40;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f50(0x113723b08);
      ___cxa_guard_release(0x1136d6c40);
    }
  }
  if ((bRam00000001136d6c48 & 1) == 0) {
    iVar7 = 0x136d6c48;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f00(0x113723b40);
      ___cxa_guard_release(0x1136d6c48);
    }
  }
  if ((bRam00000001136d6c50 & 1) == 0) {
    iVar7 = 0x136d6c50;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f70(0x113723b78);
      ___cxa_guard_release(0x1136d6c50);
    }
  }
  if ((bRam00000001136d6c58 & 1) == 0) {
    iVar7 = 0x136d6c58;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708fd0(0x113723bb0);
      ___cxa_guard_release(0x1136d6c58);
    }
  }
  if ((bRam00000001136d6c60 & 1) == 0) {
    iVar7 = 0x136d6c60;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a0dc(0x113723be8);
      ___cxa_guard_release(0x1136d6c60);
    }
  }
  if ((bRam00000001136d6c68 & 1) == 0) {
    iVar7 = 0x136d6c68;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709738(0x113723c20);
      ___cxa_guard_release(0x1136d6c68);
    }
  }
  if ((bRam00000001136d6c70 & 1) == 0) {
    iVar7 = 0x136d6c70;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709728(0x113723c58);
      ___cxa_guard_release(0x1136d6c70);
    }
  }
  if ((bRam00000001136d6c78 & 1) == 0) {
    iVar7 = 0x136d6c78;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090e0(0x113723c90);
      ___cxa_guard_release(0x1136d6c78);
    }
  }
  if ((bRam00000001136d6c80 & 1) == 0) {
    iVar7 = 0x136d6c80;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090f0(0x113723cc8);
      ___cxa_guard_release(0x1136d6c80);
    }
  }
  if ((bRam00000001136d6c88 & 1) == 0) {
    iVar7 = 0x136d6c88;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709060(0x113723d00);
      ___cxa_guard_release(0x1136d6c88);
    }
  }
  if ((bRam00000001136d6c90 & 1) == 0) {
    iVar7 = 0x136d6c90;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ef0(0x113723d38);
      ___cxa_guard_release(0x1136d6c90);
    }
  }
  if ((bRam00000001136d6c98 & 1) == 0) {
    iVar7 = 0x136d6c98;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ee0(0x113723d70);
      ___cxa_guard_release(0x1136d6c98);
    }
  }
  func_0x0001077080f4();
  func_0x00010770d234();
  func_0x00010770c2b4();
  func_0x000107714838();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x000107717e3c();
    func_0x000107714858();
    if ((bStack_220 & 1) == 0) {
      func_0x00010770d234();
      func_0x00010770c2b4();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1077057a8;
      func_0x000107714870();
      func_0x000107715f18();
      func_0x000107714858();
    }
    if ((bStack_1a8 & 1) == 0) {
      func_0x000107709e40();
      iStack_460 = 0;
      func_0x00010770a730();
      func_0x000107709070();
      func_0x000107714860();
      if (iStack_460 == 0) {
        func_0x00010770880c();
        func_0x000107714860();
      }
      unaff_w25 = (int)auStack_388;
      func_0x00010770c8a4();
      func_0x000107717d28();
      if ((bool)in_ZR) {
        func_0x000107718108();
        func_0x000107714a5c();
        uVar1 = 0x2d8;
        if ((bool)in_ZR) {
          uVar1 = 0x310;
        }
        func_0x0001077129ec(uVar1);
        unaff_x26 = 0;
        func_0x000107711500();
        func_0x0001077114f4();
        func_0x000107714888();
      }
      else {
        func_0x00010770e39c();
        func_0x00010770d718();
        func_0x0001077153d0();
      }
      func_0x000107714860();
      func_0x000107714848();
      func_0x0001077162a0();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1077057a8;
      func_0x000107714870();
      func_0x000107716180();
      func_0x000107714858();
    }
    if ((bStack_b8 & 1) == 0) {
      iStack_460 = 0;
      func_0x00010770dce0();
      func_0x000107709070();
      func_0x000107714860();
      if (iStack_460 == 0) {
        func_0x00010770dce0();
        func_0x00010770c37c();
        func_0x000107714860();
      }
      unaff_w25 = (int)auStack_388;
      func_0x00010770c3dc();
      func_0x000107714848();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1077057a8;
      func_0x000107714870();
      func_0x000107717d84();
      func_0x000107714858();
    }
    if ((bStack_130 & 1) == 0) {
      func_0x000107709e40();
      iStack_460 = 0;
      func_0x00010770a730();
      func_0x000107709070();
      func_0x000107714860();
      if (iStack_460 == 0) {
        func_0x00010770880c();
        func_0x000107714860();
      }
      unaff_w25 = (int)auStack_388;
      func_0x00010770c8a4();
      func_0x000107717d28();
      if ((bool)in_ZR) {
        func_0x000107718108();
        func_0x000107714a5c();
        uVar1 = 0x2d8;
        if ((bool)in_ZR) {
          uVar1 = 0x310;
        }
        func_0x0001077129ec(uVar1);
        func_0x000107711500();
        func_0x0001077114f4();
        func_0x000107714838();
      }
      else {
        func_0x00010770e39c();
        func_0x00010770d718();
        func_0x0001077153d0();
      }
      func_0x000107714860();
      func_0x000107714848();
      func_0x0001077162a0();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1077057a8;
      func_0x000107714870();
      func_0x000107717dbc();
      func_0x000107714858();
    }
    func_0x00010770929c();
    func_0x00010770928c(auStack_308);
    func_0x0001077094c0(auStack_290);
    func_0x0001077095c0(auStack_218);
    func_0x0001077095b0(auStack_128);
    func_0x000107719a10();
    func_0x000107708510(auStack_388);
    do {
      func_0x000107714ea0();
      func_0x000107715184();
    } while (!(bool)in_ZR);
    func_0x000107718c70();
    if ((bool)in_ZR) {
      func_0x0001077186d4();
      func_0x000107707cfc();
      func_0x00010770c3dc();
      func_0x000107714850();
    }
    else {
      func_0x00010770c1d0(auStack_388);
    }
    func_0x000107711c18();
  }
LAB_1077057a8:
  func_0x000107716190();
  func_0x000107715a5c();
  func_0x0001077160c0();
  func_0x000107716248();
  func_0x00010771620c();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d6c98);
  func_0x000107714988();
  puVar5 = &DAT_107705b48;
  func_0x00010771cb70();
  puStack_490 = &stack0x00000050;
  puStack_488 = puVar5;
  func_0x0001077073b8();
  if ((bRam00000001136d6ca0 & 1) == 0) {
    iVar7 = 0x136d6ca0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f50(0x113723da8);
      ___cxa_guard_release(0x1136d6ca0);
    }
  }
  if ((bRam00000001136d6ca8 & 1) == 0) {
    iVar7 = 0x136d6ca8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708f00(0x113723de0);
      ___cxa_guard_release(0x1136d6ca8);
    }
  }
  if ((bRam00000001136d6cb0 & 1) == 0) {
    iVar7 = 0x136d6cb0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010770a1c0(0x113723e18);
      ___cxa_guard_release(0x1136d6cb0);
    }
  }
  if ((bRam00000001136d6cb8 & 1) == 0) {
    iVar7 = 0x136d6cb8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709738(0x113723e50);
      ___cxa_guard_release(0x1136d6cb8);
    }
  }
  if ((bRam00000001136d6cc0 & 1) == 0) {
    iVar7 = 0x136d6cc0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709728(0x113723e88);
      ___cxa_guard_release(0x1136d6cc0);
    }
  }
  if ((bRam00000001136d6cc8 & 1) == 0) {
    iVar7 = 0x136d6cc8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090e0(0x113723ec0);
      ___cxa_guard_release(0x1136d6cc8);
    }
  }
  if ((bRam00000001136d6cd0 & 1) == 0) {
    iVar7 = 0x136d6cd0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x0001077090f0(0x113723ef8);
      ___cxa_guard_release(0x1136d6cd0);
    }
  }
  if ((bRam00000001136d6cd8 & 1) == 0) {
    iVar7 = 0x136d6cd8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107709060(0x113723f30);
      ___cxa_guard_release(0x1136d6cd8);
    }
  }
  if ((bRam00000001136d6ce0 & 1) == 0) {
    iVar7 = 0x136d6ce0;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000107708ef0(0x113723f68);
      ___cxa_guard_release(0x1136d6ce0);
    }
  }
  if ((bRam00000001136d6ce8 & 1) == 0) {
    iVar7 = 0x136d6ce8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
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
    if ((bStack_648 & 1) == 0) {
      func_0x00010770f4f4();
      func_0x00010770d688();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x000107705dbc;
      func_0x000107714870();
      func_0x00010771548c();
      func_0x000107714858();
    }
    if ((bStack_5d0 & 1) == 0) {
      func_0x00010770f4f4();
      func_0x00010770d688();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x000107705dbc;
      func_0x000107714870();
      func_0x00010771543c();
      func_0x000107714858();
    }
    if ((bStack_4e0 & 1) == 0) {
      puStack_888 = (undefined *)((ulong)puStack_888 & 0xffffffff00000000);
      func_0x00010770d01c();
      func_0x00010770c2e4();
      func_0x000107714848();
      if ((int)puStack_888 == 0) {
        func_0x00010770d01c();
        func_0x00010770c2e4();
        func_0x000107714848();
      }
      func_0x00010770e718();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x000107705dbc;
      func_0x000107714870();
      func_0x000107715f2c();
      func_0x000107714858();
    }
    if ((bStack_558 & 1) == 0) {
      func_0x00010770f4f4();
      func_0x00010770d688();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto code_r0x000107705dbc;
      func_0x000107714870();
      func_0x0001077153c0();
      func_0x000107714858();
    }
    func_0x00010770b6dc();
    func_0x00010770b64c(auStack_730);
    puStack_878 = auStack_6b8;
    func_0x00010770d33c();
    puStack_838 = auStack_640;
    func_0x00010770d428();
    puStack_7f8 = auStack_550;
    func_0x00010770d41c();
    puStack_7b8 = auStack_5c8;
    func_0x000107708510(auStack_7b0);
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
      func_0x00010770c1d0(auStack_7b0);
    }
    func_0x000107714868(auStack_7b0);
  }
code_r0x000107705dbc:
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
  pbVar3 = (byte *)0x1136d6ce8;
  ___cxa_guard_abort();
  func_0x000107714988();
  puVar5 = &DAT_1077060b0;
  func_0x000107715308();
  ppuStack_890 = &puStack_490;
  puStack_888 = puVar5;
  func_0x000107707444();
  if ((bRam00000001136d6cf0 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6cf0;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708e10(0x113723fd8);
      pbVar3 = (byte *)0x1136d6cf0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6cf8 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6cf8;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708bb0(0x113724010);
      pbVar3 = (byte *)0x1136d6cf8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d00 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d00;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708de0(0x113724048);
      pbVar3 = (byte *)0x1136d6d00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d08 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d08;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708dc0(0x113724080);
      pbVar3 = (byte *)0x1136d6d08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d10 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d10;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708dd0(0x1137240b8);
      pbVar3 = (byte *)0x1136d6d10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d18 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d18;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708e00(0x1137240f0);
      pbVar3 = (byte *)0x1136d6d18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d20 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d20;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708df0(0x113724128);
      pbVar3 = (byte *)0x1136d6d20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d28 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d28;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107708db0(0x113724160);
      pbVar3 = (byte *)0x1136d6d28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d30 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d30;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010771d464();
      func_0x00010771490c();
      func_0x0001077148e0(abStack_c60);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x0001077192b8();
      func_0x000107714980(abStack_c60);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107717320();
      func_0x000107714a40(abStack_c60);
      func_0x00010770cfec();
      func_0x0001077115cc();
      unaff_x24 = (undefined1 *)0x113725160;
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107719780();
      func_0x0001077126ac();
      func_0x000107718ea8();
      pbVar3 = (byte *)0x1136d6d30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d38 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d38;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x0001077098bc(0x113724198);
      pbVar3 = (byte *)0x1136d6d38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d40 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d40;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x0001077095a0(0x1137241d0);
      pbVar3 = (byte *)0x1136d6d40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d48 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d48;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107709658(0x113724208);
      pbVar3 = (byte *)0x1136d6d48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d50 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d50;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770a12c(0x113724240);
      pbVar3 = (byte *)0x1136d6d50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d58 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d58;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770b2e8(0x113724278);
      pbVar3 = (byte *)0x1136d6d58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d60 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d60;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770984c(0x1137242b0);
      pbVar3 = (byte *)0x1136d6d60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d68 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d68;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x000107709adc(0x1137242e8);
      pbVar3 = (byte *)0x1136d6d68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d70 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d70;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770b3d4(0x113724320);
      pbVar3 = (byte *)0x1136d6d70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d78 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d78;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770b62c(0x113724358);
      pbVar3 = (byte *)0x1136d6d78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d80 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d80;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770ab28(0x113724390);
      pbVar3 = (byte *)0x1136d6d80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d88 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d88;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770f558(0x1137243c8);
      pbVar3 = (byte *)0x1136d6d88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d90 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d90;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770f548(0x113724400);
      pbVar3 = (byte *)0x1136d6d90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d98 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6d98;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770d9d4(0x113724438);
      pbVar3 = (byte *)0x1136d6d98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6da0 & 1) == 0) {
    pbVar3 = (byte *)0x1136d6da0;
    ___cxa_guard_acquire();
    if ((int)pbVar3 != 0) {
      func_0x00010770d00c(0x113724470);
      pbVar3 = (byte *)0x1136d6da0;
      ___cxa_guard_release();
    }
  }
  uStack_970 = 0;
  func_0x00010770fd64();
  iStack_bf8 = 0;
  func_0x00010770a4cc();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_bf8 == 0) {
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
    func_0x00010770c29c(pbVar3);
    func_0x00010771ced0();
    pbVar4 = pbVar3;
    if (!(bool)in_ZR) goto code_r0x0001077062e0;
    func_0x000107716a68();
    pbVar4 = pbVar3;
    func_0x000104c32db4();
    if (((ulong)pbVar4 & 1) == 0) {
      func_0x000107714bfc();
      if ((int)pbVar4 != 0) {
        func_0x00010771b148();
        goto code_r0x00010770641c;
      }
      iStack_bf8 = 0;
      func_0x00010770a4cc();
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_bf8 == 0) {
        iStack_d18 = 0;
        func_0x00010770a58c();
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_d18 == 0) {
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
            func_0x00010770c43c(pbVar4);
            func_0x00010770d258();
            if (iStack_bf8 == 0) {
              func_0x00010771b148();
              func_0x0001077135f8();
              func_0x00010770d264();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            unaff_w25 = (int)auStack_d80;
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
    iVar7 = (int)pbVar3;
    func_0x000107719750();
    func_0x000107717c64();
    func_0x0001077178c8();
    func_0x000107718668();
    if ((bool)in_ZR) {
      func_0x00010771def8();
      func_0x00010756e584();
      if ((*pbVar4 & 1) == 0) {
        iVar7 = 0x13724198;
        func_0x0001077145e8();
        func_0x00010770bf88();
        func_0x0001077145f4();
        if (((ulong)pbVar4 & 1) == 0) {
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
            uVar6 = 0;
            if ((bool)in_ZR) {
              uVar6 = 0x10;
            }
            unaff_x24 = (undefined1 *)(ulong)uVar6;
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
          uVar2 = ((ulong)unaff_x24 & 0xf) == 0;
          if ((bool)uVar2) {
            if ((unaff_x26 & 1) != 0) {
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar2) {
                func_0x000107716da4();
                if ((*pbVar4 & 1) != 0) {
                  func_0x00010770dfb0();
                  func_0x000107719278();
                  func_0x00010770d8b0();
                  if (((ulong)unaff_x24 & 1) == 0) {
                    func_0x000107718f74();
                    func_0x00010770f0f4();
                    func_0x00010770d21c();
                    func_0x000107714848();
                    func_0x000107714898();
                    if ((bool)uVar2) {
                      func_0x000107714870();
                      func_0x000107715150();
                      func_0x00010751da6c();
                      func_0x000107714858();
                      func_0x0001077150a4();
                      puStack_930 = unaff_x24;
                      func_0x000107707508();
                      func_0x000107714bc8();
                      func_0x000107714898();
                      if (!(bool)uVar2) goto code_r0x000107706af0;
                      func_0x000107714870();
                      func_0x0001077087c8();
                      func_0x0001077154dc();
                      func_0x000107717308();
                      uVar6 = 0xe;
                      if ((bool)uVar2) {
                        uVar6 = 0;
                      }
                      unaff_x24 = (undefined1 *)(ulong)uVar6;
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
          uVar2 = (int)unaff_x24 == 0xe;
          if (((bool)uVar2) || ((int)unaff_x24 == 0)) {
            if ((unaff_x22 & 1) != 0) {
              func_0x0001077145e8();
              func_0x00010770bf88();
              func_0x0001077145f4();
              if (((ulong)pbVar4 & 1) == 0) goto code_r0x00010770667c;
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar2) {
                func_0x000107716da4();
                func_0x0001077153ec();
                uVar6 = 0;
                if ((bool)uVar2) {
                  uVar6 = 0x14;
                }
                unaff_x24 = (undefined1 *)(ulong)uVar6;
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
                FUN_107579140();
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
        iVar7 = 0;
      }
      else {
code_r0x000107706450:
        iVar7 = 1;
        unaff_x24 = (undefined1 *)0x0;
      }
    }
    else {
      func_0x00010770c1d0(abStack_c60);
      func_0x00010771574c();
    }
code_r0x00010770668c:
    func_0x000107713b7c();
    func_0x000107714860();
    func_0x00010770f41c();
  }
  else {
    uStack_a98 = 0;
    pbVar4 = pbVar3;
code_r0x0001077062e0:
    iStack_bf8 = 0;
    func_0x00010770a4cc();
    func_0x00010770c2e4();
    func_0x000107714848();
    if (iStack_bf8 == 0) {
      iStack_d18 = 0;
      func_0x00010770a58c();
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_d18 == 0) {
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
          func_0x00010770c43c(pbVar4);
          func_0x00010770d258();
          if (iStack_bf8 == 0) {
            func_0x00010771b148();
            func_0x0001077135f8();
            func_0x00010770d264();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          unaff_w25 = (int)auStack_d80;
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
      iVar7 = (int)abStack_c60;
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
      pbVar3 = abStack_c60;
      iVar7 = (int)pbVar3;
      func_0x000107714848();
      func_0x000107714838();
      unaff_x24 = auStack_d80;
      if (unaff_w25 == 3) {
        in_ZR = 1;
        unaff_x24 = auStack_d80;
        goto code_r0x000107706420;
      }
    }
    func_0x00010771574c();
  }
  func_0x00010770eda8();
  func_0x0001077103f4();
  func_0x0001077173b8();
  uVar2 = ((ulong)unaff_x24 & 0xfffffffd) == 0;
  if (!(bool)uVar2) goto code_r0x000107706864;
  if (iVar7 == 0) {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar2) {
      func_0x000107709d18();
      goto code_r0x00010770684c;
    }
    func_0x00010771509c();
    if ((*pbVar4 & 1) == 0) {
      func_0x00010770c23c();
code_r0x0001077067e4:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar2) {
        func_0x000107709d18();
        goto code_r0x00010770684c;
      }
      func_0x00010771509c();
      if ((*pbVar4 & 1) == 0) {
        func_0x00010770c23c();
        iVar7 = (int)pbVar4;
      }
      else {
        func_0x00010771e9c8();
        iVar7 = (int)pbVar4;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar2) goto code_r0x000107706854;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar2 = unaff_d8 == 0.0;
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
      if (!(bool)uVar2) goto code_r0x000107706854;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar2 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto code_r0x0001077067e4;
      func_0x00010771e9d4();
      iVar7 = (int)pbVar4;
      func_0x000107709aac();
    }
code_r0x000107706950:
    func_0x00010770cbf0(auStack_d80);
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
    if (iVar7 != 0) {
      if ((bStack_a20 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_a98 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_bf8 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar7 != 0) {
        if ((bStack_a20 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_a90);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_9d8);
  }
  else {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar2) {
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
    if ((*pbVar4 & 1) == 0) {
      func_0x00010770c23c();
code_r0x000107706784:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar2) {
        func_0x000107709d18();
        goto code_r0x00010770684c;
      }
      func_0x00010771509c();
      if ((*pbVar4 & 1) == 0) {
        func_0x00010770c23c();
        iVar7 = (int)pbVar4;
      }
      else {
        func_0x00010771e9c8();
        iVar7 = (int)pbVar4;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar2) goto code_r0x000107706854;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar2 = unaff_d8 == 0.0;
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
      if (!(bool)uVar2) goto code_r0x000107706854;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar2 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto code_r0x000107706784;
      func_0x00010771e9d4();
      iVar7 = (int)pbVar4;
      func_0x000107709aac();
    }
code_r0x00010770688c:
    func_0x00010770cbf0(auStack_d80);
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
    if (iVar7 != 0) {
      if ((bStack_a20 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_a98 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_bf8 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar7 != 0) {
        if ((bStack_a20 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_a90);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_9d8);
  }
  func_0x0001077186cc();
  func_0x000107714830();
  func_0x00010771a364();
code_r0x000107706864:
  func_0x0001077117dc();
  func_0x000107708038();
  if ((bool)uVar2) {
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



/* Entry: 107720608; end: 1077208db;  */

void FUN_107720608(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_b8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  uVar3 = *(ulong *)(param_2 + 0x18);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    if (0x276276276276276 < uVar3) {
      func_0x000107721ab0();
      goto LAB_107720898;
    }
    FUN_107721b44(auStack_88,uVar3,0,&uStack_90);
    func_0x000107722288();
    func_0x000107722308();
    uVar3 = *(ulong *)(param_2 + 0x18);
  }
  if ((ulong)((long)puStack_a8 - lStack_b8 >> 4) < uVar3) {
    if (uVar3 >> 0x3c != 0) {
      func_0x000107721bf4();
LAB_107720898:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10772089c);
      (*pcVar2)();
    }
    func_0x0001077222fc();
    func_0x0001077222c4();
    func_0x000107721ccc(auStack_88);
  }
  uVar3 = 0;
  do {
    uVar5 = uStack_98;
    if (*(ulong *)(param_2 + 0x18) <= uVar3) {
      func_0x0001077224cc(param_1,param_2,&lStack_b8,param_3,param_4,param_5);
LAB_10772084c:
      func_0x000107721d14(&lStack_b8);
      func_0x000107721d54(&lStack_a0);
      return;
    }
    if (uStack_98 < uStack_90) {
      func_0x000107326d5c(uStack_98);
      uVar5 = uVar5 + 0x68;
    }
    else {
      lVar6 = (long)(uStack_98 - lStack_a0) / 0x68;
      uVar5 = lVar6 + 1;
      if (0x276276276276276 < uVar5) {
        func_0x000107721ab0();
        goto LAB_107720898;
      }
      uVar1 = (long)(uStack_90 - lStack_a0) / 0x68;
      uVar4 = uVar1 * 2;
      if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
        uVar4 = uVar5;
      }
      if (0x13b13b13b13b13a < uVar1) {
        uVar4 = 0x276276276276276;
      }
      FUN_107721b44(auStack_88,uVar4,lVar6,&uStack_90);
      puVar7 = puStack_78;
      func_0x000107326d5c(puStack_78);
      puStack_78 = puVar7 + 0xd;
      func_0x000107722288();
      uVar5 = uStack_98;
      func_0x000107722308();
    }
    uStack_98 = uVar5;
    func_0x0001075222a8(uVar5 - 0x68,*(undefined8 *)(*(long *)(param_2 + 0x48) + uVar3 * 8));
    if (*(int *)(uStack_98 - 0x10) != 0) {
      *param_1 = 0;
      param_1[0x10] = 0;
      goto LAB_10772084c;
    }
    lVar6 = uStack_98 - 0x68;
    if (puStack_b0 < puStack_a8) {
      *puStack_b0 = &PTR_DAT_1131ad2e8;
      puStack_b0[1] = lVar6;
      puVar7 = puStack_b0 + 2;
    }
    else {
      if (((long)puStack_b0 - lStack_b8 >> 4) + 1U >> 0x3c != 0) {
        func_0x000107721bf4();
        goto LAB_107720898;
      }
      func_0x0001077222fc();
      *puStack_78 = &PTR_DAT_1131ad2e8;
      puStack_78[1] = lVar6;
      puStack_78 = puStack_78 + 2;
      func_0x0001077222c4();
      puVar7 = puStack_b0;
      func_0x000107721ccc(auStack_88);
    }
    uVar3 = uVar3 + 1;
    puStack_b0 = puVar7;
  } while( true );
}



/* Entry: 107721114; end: 107721187;  */

undefined1  [16] FUN_107721114(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107721b44; end: 107721bab;  */

long * FUN_107721b44(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x000107722310();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x276276276276276 < unaff_x20) {
      func_0x000104bd35f4();
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
    lVar1 = unaff_x20 * 0x68;
    __Znwm();
  }
  lVar2 = lVar1 + unaff_x21 * 0x68;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x68;
  return unaff_x19;
}



/* Entry: 107721e3c; end: 107721e63;  */

long FUN_107721e3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107721e64();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107721fb0; end: 107721fb3;  */

undefined8 * FUN_107721fb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772216c; end: 10772238f;  */

void FUN_10772216c(void)

{
  return;
}



/* Entry: 107722a78; end: 107722dc7;  */

void FUN_107722a78(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_328;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 *puStack_1e8;
  undefined1 auStack_e0 [120];
  undefined8 uStack_68;
  
  uVar5 = 0;
  func_0x000107723a50();
  uStack_68 = extraout_x8;
  while( true ) {
    lVar4 = *(long *)(param_1 + 0x48);
    uVar1 = uVar5 == *(ulong *)(lVar4 + 0x30);
    if (*(ulong *)(lVar4 + 0x30) <= uVar5) break;
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x28) + uVar5 * 0x18);
    uVar3 = param_2;
    func_0x000100152bb8(param_2,*puVar6);
    if ((int)uVar3 != 0) {
      func_0x00010747e6e0(&puStack_3b0);
      for (uVar7 = 0; uVar7 < (ulong)puVar6[2]; uVar7 = uVar7 + 1) {
        func_0x000100060964(&puStack_390,*(undefined8 *)(puVar6[1] + uVar7 * 8));
        func_0x00010747cc88(auStack_1f8,&puStack_3b0,&puStack_390);
        func_0x000107723a84();
      }
      uStack_388 = uStack_3a8;
      puStack_390 = puStack_3b0;
      puStack_3b0 = (undefined *)0x0;
      uStack_3a8 = 0;
      uStack_380 = 2;
      func_0x00010774a39c(&puStack_390,param_4);
      func_0x0001073ebb78(&puStack_390);
      func_0x0001073e0028(&puStack_3b0);
    }
    uVar5 = uVar5 + 1;
  }
  if (((*(byte *)(param_3 + 400) & 1) != 0) && (*(long *)(lVar4 + 0x40) != 0)) {
    if ((bRam00000001137251d0 & 1) == 0) goto LAB_107722c94;
    while( true ) {
      uVar5 = 0;
      puStack_3b0 = &UNK_10e52b660;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      while( true ) {
        uVar7 = *(ulong *)(*(long *)(param_1 + 0x48) + 0x40);
        uVar1 = uVar5 == uVar7;
        if (uVar7 <= uVar5) break;
        func_0x000100060964(&puStack_390,
                            *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + uVar5 * 8)
                           );
        func_0x000107722dc8(&puStack_3b0,&puStack_390);
        func_0x000107722e24();
        func_0x000107723a84();
        uVar5 = uVar5 + 1;
      }
      func_0x000107751334(auStack_1f8,param_3);
      func_0x000107579604(&puStack_390,&puStack_3b0,auStack_e0);
      func_0x00010757945c(auStack_e0,&puStack_390);
      func_0x000107267e68(&puStack_390);
      func_0x000107751334(&puStack_390,auStack_1f8);
      uStack_200 = 1;
      func_0x0001077533f4(param_1,param_2,&puStack_390,param_4);
      func_0x0001074332fc(&puStack_390);
      func_0x000107267da8(auStack_1f8);
      func_0x0001072c9500(&puStack_3b0);
LAB_107722c64:
      func_0x000107723a3c(uStack_68);
      if ((bool)uVar1) break;
      ___stack_chk_fail();
LAB_107722c94:
      iVar2 = 0x137251d0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        uStack_328 = 0;
        func_0x0001075794c4(auStack_1f8,1);
        puStack_1e8[2] = 0;
        *puStack_1e8 = &PTR_DAT_1109d0da0;
        puStack_1e8[1] = 0;
        func_0x000107539b24(puStack_1e8 + 3,&puStack_390);
        puVar6 = puStack_1e8;
        puStack_1e8 = (undefined8 *)0x0;
        func_0x000107579550(auStack_1f8);
        puRam00000001137251e8 = puVar6;
        puStack_3b0 = (undefined *)0x0;
        uStack_3a8 = 0;
        puRam00000001137251e0 = puVar6 + 3;
        func_0x0001075795dc(&puStack_3b0);
        func_0x00010726af18(&uStack_388);
        ___cxa_guard_release(0x1137251d0);
      }
    }
    return;
  }
  func_0x0001077533f4(param_1,param_2,param_3,param_4);
  goto LAB_107722c64;
}



/* Entry: 10772319c; end: 1077231eb;  */

ulong FUN_10772319c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_158 [120];
  int iStack_e0;
  undefined8 uStack_d8;
  
  func_0x000107723a50();
  func_0x000107723ab4();
  func_0x000107723a8c();
  func_0x000107723a3c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107723a8c();
  func_0x000107723a7c();
  uVar4 = param_1;
  func_0x000107723a50();
  uStack_d8 = extraout_x8_01;
  (**(code **)(*(long *)(uVar4 + 0x48) + 0x10))(extraout_x8_00);
  uVar4 = *(ulong *)(param_1 + 0x98);
  if (uVar4 == 0) goto code_r0x0001077232a8;
  func_0x000107753050(auStack_158,uVar4,param_3,param_4);
  in_ZR = iStack_e0 == 1;
  if ((*(int *)(extraout_x8_00 + 0x78) == 1) == (bool)in_ZR) {
    in_ZR = *(int *)(extraout_x8_00 + 0x78) == 1;
    if ((bool)in_ZR) {
      uVar4 = extraout_x8_00;
      func_0x00010727f7dc();
      puVar5 = auStack_158;
      func_0x00010727f7dc(puVar5);
      func_0x000107722e80(uVar4,puVar5);
      if ((uVar4 & 1) == 0) goto code_r0x000107723260;
    }
  }
  else {
code_r0x000107723260:
    piVar1 = (int *)(param_1 + 0xa8);
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
code_r0x0001077232a8:
  func_0x000107723a3c(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107723a94();
    func_0x00010727f7f8(extraout_x8_00 + 8);
    __Unwind_Resume();
    func_0x000107723314();
    func_0x000107723368(uVar4,0);
    return uVar4;
  }
  return uVar4;
}



/* Entry: 1077233dc; end: 10772342b;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

long * FUN_1077233dc(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_110 [64];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107723a50();
  uStack_a0 = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x000107723ab4();
  func_0x000107723a8c();
  func_0x000107723a3c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107723a8c();
  func_0x000107723a7c();
  puStack_a8 = &DAT_10772342c;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001074d3a84();
  (**(code **)(*param_1 + 0x40))(auStack_110);
  puStack_128 = &UNK_1074d24e8;
  plStack_138 = (long *)0x0;
  ppuStack_130 = &puStack_b0;
  func_0x0001073f26dc(&plStack_138,auStack_110);
  return plStack_138;
}



/* Entry: 107723928; end: 107723a07;  */

long FUN_107723928(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x0001077238d8();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar3 = (long *)plVar4[1];
        if (plVar2 != plVar3) break;
        plVar3 = param_1 + 4;
        func_0x00010728905c(plVar3,plVar4 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar4;
        }
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar3 = (long *)((ulong)plVar3 & uVar6);
      }
      else if (plVar5 <= plVar3) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar5;
        }
        plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar5);
      }
    } while (plVar3 == plVar7);
  }
  return 0;
}



/* Entry: 107726994; end: 107726a77;  */

undefined8 FUN_107726994(void)

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
  undefined1 auStack_16a0 [64];
  long lStack_1660;
  undefined1 auStack_15d0 [24];
  undefined4 uStack_15b8;
  long lStack_1580;
  undefined1 auStack_14e0 [64];
  long lStack_14a0;
  undefined1 auStack_940 [64];
  undefined1 auStack_870 [64];
  
  func_0x000107741ca8();
  if ((bRam0000000113725500 & 1) == 0) {
    iVar2 = 0x13725500;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742048();
      func_0x000107741d3c();
      unaff_x20 = 0x1137254f8;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2ae8;
      func_0x000107741cd0(&UNK_1077347ac);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x1137254f8;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725500);
    func_0x00010774297c();
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
        *unaff_x19 = &PTR_FUN_1109d2b28;
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
            func_0x000107741cd0(FUN_107734c8c);
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
                        *puVar4 = &PTR_FUN_1109d2d28;
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
                          func_0x0001077753dc(auStack_870);
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
                          func_0x0001077753dc(auStack_940);
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
                          *unaff_x19 = &PTR_FUN_1109d2ea8;
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
                          func_0x000107741cd0(FUN_1077365e4);
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
                          func_0x000107741cd0(FUN_107736b64);
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
                      lStack_14a0 = unaff_x22;
                      func_0x000107741ca8();
                      if ((bRam0000000113725690 & 1) == 0) {
                        iVar2 = 0x13725690;
                        ___cxa_guard_acquire();
                        if (iVar2 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107742b9c();
                          func_0x000107742da0();
                          func_0x000107775500(auStack_14e0);
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
                      lStack_1580 = unaff_x22;
                      func_0x000107741ca8();
                      lVar5 = 0;
                      if ((bRam00000001137256a0 & 1) == 0) {
                        puVar4 = (undefined8 *)0x1137256a0;
                        ___cxa_guard_acquire();
                        if ((int)puVar4 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107775500(auStack_15d0);
                          uStack_15b8 = 3;
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
                          func_0x000107741cd0(FUN_107737c18);
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
                      lStack_1660 = lVar5;
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
                          func_0x000107775500(auStack_16a0);
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
      }
    }
  }
  return uVar3;
}



/* Entry: 1077270b4; end: 10772717f;  */

undefined8 FUN_1077270b4(void)

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
  undefined1 auStack_1020 [64];
  long lStack_fe0;
  undefined1 auStack_f50 [24];
  undefined4 uStack_f38;
  long lStack_f00;
  undefined1 auStack_e60 [64];
  long lStack_e20;
  undefined1 auStack_2c0 [64];
  undefined1 auStack_1f0 [64];
  
  func_0x000107741ca8();
  if ((bRam0000000113725580 & 1) == 0) {
    puVar3 = (undefined8 *)0x113725580;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      unaff_x20 = 0x113725578;
      func_0x000107741c30(1);
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar3 = &PTR_DAT_1109d2ce8;
      func_0x000107741cd0(&UNK_1077354ac);
      func_0x000107742924();
      unaff_x19 = puVar3;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar4 = 0x113725578;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774219c();
    ___cxa_guard_abort(0x113725580);
    func_0x000107742904();
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
        *puVar3 = &PTR_FUN_1109d2d28;
        func_0x000107741cd0(&UNK_1077356c8);
        func_0x000107742924();
        unaff_x19 = puVar3;
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
          func_0x0001077753dc(auStack_1f0);
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
            func_0x0001077753dc(auStack_2c0);
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
              *unaff_x19 = &PTR_DAT_1109d2de8;
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
                  *unaff_x19 = &PTR_FUN_1109d2ea8;
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
                      func_0x000107741cd0(FUN_1077365e4);
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
                          func_0x000107741cd0(FUN_107736b64);
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
                            *unaff_x19 = &PTR_DAT_1109d3028;
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
                            lStack_e20 = unaff_x22;
                            func_0x000107741ca8();
                            if ((bRam0000000113725690 & 1) == 0) {
                              iVar2 = 0x13725690;
                              ___cxa_guard_acquire();
                              if (iVar2 != 0) {
                                func_0x000107742934();
                                func_0x00010774292c();
                                func_0x000107742b9c();
                                func_0x000107742da0();
                                func_0x000107775500(auStack_e60);
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
                            lStack_f00 = unaff_x22;
                            func_0x000107741ca8();
                            lVar5 = 0;
                            if ((bRam00000001137256a0 & 1) == 0) {
                              puVar3 = (undefined8 *)0x1137256a0;
                              ___cxa_guard_acquire();
                              if ((int)puVar3 != 0) {
                                func_0x000107742934();
                                func_0x00010774292c();
                                func_0x000107775500(auStack_f50);
                                uStack_f38 = 3;
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
                                func_0x000107741cd0(FUN_107737c18);
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
                            lStack_fe0 = lVar5;
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
                                func_0x000107775500(auStack_1020);
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
    uVar4 = 0x113725588;
  }
  return uVar4;
}



/* Entry: 1077277e4; end: 1077278c7;  */

undefined8 FUN_1077277e4(void)

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
  undefined1 auStack_9b0 [64];
  long lStack_970;
  undefined1 auStack_8e0 [24];
  undefined4 uStack_8c8;
  long lStack_890;
  undefined1 auStack_7f0 [64];
  long lStack_7b0;
  
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
        func_0x000107741cd0(FUN_1077365e4);
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
            func_0x000107741cd0(FUN_107736b64);
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
              lStack_7b0 = unaff_x22;
              func_0x000107741ca8();
              if ((bRam0000000113725690 & 1) == 0) {
                iVar2 = 0x13725690;
                ___cxa_guard_acquire();
                if (iVar2 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742b9c();
                  func_0x000107742da0();
                  func_0x000107775500(auStack_7f0);
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
              lStack_890 = unaff_x22;
              func_0x000107741ca8();
              lVar5 = 0;
              if ((bRam00000001137256a0 & 1) == 0) {
                puVar4 = (undefined8 *)0x1137256a0;
                ___cxa_guard_acquire();
                if ((int)puVar4 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107775500(auStack_8e0);
                  uStack_8c8 = 3;
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
                  func_0x000107741cd0(FUN_107737c18);
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
              lStack_970 = lVar5;
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
                  func_0x000107775500(auStack_9b0);
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
  return uVar3;
}



/* Entry: 107727f5c; end: 107728063;  */

undefined8 FUN_107727f5c(void)

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
  undefined1 auStack_310 [64];
  long lStack_2d0;
  undefined1 auStack_240 [24];
  undefined4 uStack_228;
  long lStack_1f0;
  undefined1 auStack_150 [64];
  long lStack_110;
  
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
    lStack_110 = unaff_x22;
    func_0x000107741ca8();
    if ((bRam0000000113725690 & 1) == 0) {
      iVar2 = 0x13725690;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742b9c();
        func_0x000107742da0();
        func_0x000107775500(auStack_150);
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
      lStack_1f0 = unaff_x22;
      func_0x000107741ca8();
      lVar5 = 0;
      if ((bRam00000001137256a0 & 1) == 0) {
        puVar4 = (undefined8 *)0x1137256a0;
        ___cxa_guard_acquire();
        if ((int)puVar4 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107775500(auStack_240);
          uStack_228 = 3;
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
          func_0x000107741cd0(FUN_107737c18);
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
        lStack_2d0 = lVar5;
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
            func_0x000107775500(auStack_310);
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
  return uVar3;
}



/* Entry: 1077296f8; end: 1077297df;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_1077296f8(undefined8 param_1,code *param_2)

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
  char **ppcStack_1c50;
  char **ppcStack_1c48;
  ulong *puStack_1c40;
  undefined8 ***pppuStack_1c38;
  undefined8 ***pppuStack_1c30;
  undefined *puStack_1c28;
  undefined8 **ppuStack_1c20;
  undefined1 auStack_1c18 [24];
  undefined8 **ppuStack_1c00;
  undefined8 **ppuStack_1bf8;
  undefined8 uStack_1bf0;
  undefined8 **ppuStack_1be8;
  undefined8 **ppuStack_1be0;
  undefined8 uStack_1bd8;
  undefined1 auStack_1bd0 [24];
  undefined8 **ppuStack_1bb8;
  undefined8 uStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 ***pppuStack_1ba0;
  ulong uStack_1b98;
  undefined8 uStack_1b90;
  char *pcStack_1b88;
  char *pcStack_1b80;
  undefined8 uStack_1b50;
  undefined8 ***pppuStack_1af0;
  undefined *puStack_1ae8;
  undefined1 auStack_1ac8 [120];
  undefined8 uStack_1a50;
  undefined8 ***pppuStack_1a30;
  code *pcStack_1a28;
  undefined8 uStack_1980;
  undefined8 ***pppuStack_1960;
  undefined *puStack_1958;
  undefined8 uStack_18b0;
  undefined8 ***pppuStack_1890;
  undefined *puStack_1888;
  undefined8 uStack_17f0;
  undefined8 ***pppuStack_17d0;
  undefined *puStack_17c8;
  undefined8 uStack_1730;
  undefined8 ***pppuStack_1710;
  undefined *puStack_1708;
  undefined8 uStack_1670;
  undefined8 ***pppuStack_1650;
  undefined *puStack_1648;
  undefined4 uStack_1620;
  undefined8 uStack_15b0;
  undefined8 ***pppuStack_1590;
  undefined *puStack_1588;
  undefined8 uStack_14f0;
  undefined8 ***pppuStack_14d0;
  undefined *puStack_14c8;
  undefined8 uStack_1420;
  undefined8 ***pppuStack_1400;
  code *pcStack_13f8;
  undefined8 uStack_1350;
  undefined8 ***pppuStack_1330;
  undefined *puStack_1328;
  undefined8 uStack_1280;
  undefined8 ***pppuStack_1260;
  undefined *puStack_1258;
  undefined8 uStack_11a0;
  undefined8 ***pppuStack_1180;
  undefined *puStack_1178;
  undefined8 uStack_10c0;
  undefined8 ***pppuStack_10a0;
  undefined *puStack_1098;
  undefined8 uStack_ff0;
  undefined8 ***pppuStack_fd0;
  undefined *puStack_fc8;
  undefined8 uStack_f20;
  undefined8 ***pppuStack_f00;
  undefined *puStack_ef8;
  undefined8 uStack_e40;
  undefined8 ***pppuStack_e20;
  undefined *puStack_e18;
  undefined8 uStack_d60;
  undefined8 ***pppuStack_d40;
  code *pcStack_d38;
  undefined8 uStack_c90;
  undefined8 ***pppuStack_c70;
  undefined *puStack_c68;
  undefined8 uStack_bc0;
  undefined8 ***pppuStack_ba0;
  undefined *puStack_b98;
  undefined8 uStack_ae0;
  undefined8 ***pppuStack_ac0;
  undefined *puStack_ab8;
  undefined8 uStack_a00;
  undefined8 ***pppuStack_9e0;
  undefined *puStack_9d8;
  undefined8 uStack_930;
  undefined8 ***pppuStack_910;
  undefined *puStack_908;
  undefined8 uStack_860;
  undefined8 ***pppuStack_840;
  undefined *puStack_838;
  undefined8 uStack_780;
  undefined8 ***pppuStack_760;
  undefined *puStack_758;
  undefined8 uStack_6a0;
  undefined8 ***pppuStack_680;
  code *pcStack_678;
  undefined8 uStack_5d0;
  undefined8 ***pppuStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_500;
  undefined8 ***pppuStack_4e0;
  undefined *puStack_4d8;
  undefined4 uStack_458;
  undefined8 ***pppuStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_330;
  undefined *puStack_328;
  undefined1 ***pppuStack_260;
  undefined *puStack_258;
  undefined1 **ppuStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725800 & 1) == 0) {
    iVar4 = 0x13725800;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742334();
      func_0x000107742da0();
      func_0x000107741d3c();
      func_0x000107741810();
      param_2 = (code *)&UNK_10773c254;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3788;
      func_0x000107741cd0(&UNK_10773c1ac);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return (undefined8 ****)0x1137257f8;
  }
  ___stack_chk_fail();
  func_0x000107742144();
  func_0x00010774291c();
  func_0x00010774298c();
  func_0x000107742914();
  ___cxa_guard_abort(0x113725800);
  func_0x00010774297c();
  puStack_d8 = &DAT_1077297e0;
  puStack_e0 = &stack0xfffffffffffffff0;
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
      *puVar5 = &PTR_FUN_1109d37c8;
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
    puStack_198 = &DAT_1077298ac;
    ppuStack_1a0 = &puStack_e0;
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
      puStack_258 = &DAT_107729978;
      pppuStack_260 = &ppuStack_1a0;
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
          func_0x000107741cd0(&UNK_10773cb58);
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
        puStack_328 = &DAT_107729a60;
        pppuStack_330 = &pppuStack_260;
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
          puStack_3f8 = &DAT_107729b48;
          pppuStack_400 = &pppuStack_330;
          func_0x000107741ca8();
          if ((bRam0000000113725850 & 1) == 0) {
            iVar4 = 0x13725850;
            ___cxa_guard_acquire();
            if (iVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              uStack_458 = 6;
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
              *unaff_x19 = &PTR_FUN_1109d38c8;
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
          puStack_4d8 = &DAT_107729c54;
          uStack_500 = unaff_x22;
          pppuStack_4e0 = &pppuStack_400;
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
            puStack_5a8 = &DAT_107729d3c;
            uStack_5d0 = unaff_x22;
            pppuStack_5b0 = &pppuStack_4e0;
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
              pcStack_678 = FUN_107729e20;
              uStack_6a0 = unaff_x22;
              pppuStack_680 = &pppuStack_5b0;
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
                  param_2 = FUN_10773d950;
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
                puStack_758 = &DAT_107729f24;
                uStack_780 = unaff_x22;
                pppuStack_760 = &pppuStack_680;
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
                  puStack_838 = &DAT_10772a028;
                  uStack_860 = unaff_x22;
                  pppuStack_840 = &pppuStack_760;
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
                  puStack_908 = &DAT_10772a110;
                  uStack_930 = unaff_x22;
                  pppuStack_910 = &pppuStack_840;
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
                  puStack_9d8 = &DAT_10772a1f4;
                  uStack_a00 = unaff_x22;
                  pppuStack_9e0 = &pppuStack_910;
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
                  puStack_ab8 = &DAT_10772a2f8;
                  uStack_ae0 = unaff_x22;
                  pppuStack_ac0 = &pppuStack_9e0;
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
                  puStack_b98 = &DAT_10772a3fc;
                  uStack_bc0 = unaff_x22;
                  pppuStack_ba0 = &pppuStack_ac0;
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
                      func_0x000107741cd0(FUN_10773e614);
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
                  puStack_c68 = &DAT_10772a4e4;
                  uStack_c90 = unaff_x22;
                  pppuStack_c70 = &pppuStack_ba0;
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
                      *unaff_x19 = &PTR_FUN_1109d3b48;
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
                  pcStack_d38 = FUN_10772a5c8;
                  uStack_d60 = unaff_x22;
                  pppuStack_d40 = &pppuStack_c70;
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
                  puStack_e18 = &DAT_10772a6cc;
                  uStack_e40 = unaff_x22;
                  pppuStack_e20 = &pppuStack_d40;
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
                      func_0x000107741cd0(FUN_10773ec00);
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
                  puStack_ef8 = &DAT_10772a7d0;
                  uStack_f20 = unaff_x22;
                  pppuStack_f00 = &pppuStack_e20;
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
                      *unaff_x19 = &PTR_FUN_1109d3c08;
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
                  puStack_fc8 = &DAT_10772a8b8;
                  uStack_ff0 = unaff_x22;
                  pppuStack_fd0 = &pppuStack_f00;
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
                  puStack_1098 = &DAT_10772a99c;
                  uStack_10c0 = unaff_x22;
                  pppuStack_10a0 = &pppuStack_fd0;
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
                  puStack_1178 = &DAT_10772aaa0;
                  uStack_11a0 = unaff_x22;
                  pppuStack_1180 = &pppuStack_10a0;
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
                      param_2 = FUN_10773f4f0;
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
                  puStack_1258 = &DAT_10772aba4;
                  uStack_1280 = unaff_x22;
                  pppuStack_1260 = &pppuStack_1180;
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
                  puStack_1328 = &DAT_10772ac8c;
                  uStack_1350 = unaff_x22;
                  pppuStack_1330 = &pppuStack_1260;
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
                  pcStack_13f8 = FUN_10772ad70;
                  uStack_1420 = unaff_x22;
                  pppuStack_1400 = &pppuStack_1330;
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
                  puStack_14c8 = &DAT_10772ae54;
                  uStack_14f0 = unaff_x22;
                  pppuStack_14d0 = &pppuStack_1400;
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
                      *unaff_x19 = &PTR_FUN_1109d3dc8;
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
                  puStack_1588 = &DAT_10772af1c;
                  uStack_15b0 = unaff_x22;
                  pppuStack_1590 = &pppuStack_14d0;
                  func_0x000107741ca8();
                  if ((bRam00000001137259a0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259a0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      uStack_1620 = 2;
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
                  puStack_1648 = &DAT_10772aff0;
                  uStack_1670 = unaff_x22;
                  pppuStack_1650 = &pppuStack_1590;
                  func_0x000107741ca8();
                  if ((bRam00000001137259b0 & 1) == 0) {
                    puVar5 = (undefined8 *)0x1137259b0;
                    ___cxa_guard_acquire();
                    if ((int)puVar5 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107743448(2);
                      func_0x000107741c80();
                      param_2 = FUN_1077406b0;
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
                    return (undefined8 ****)0x1137259a8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259b0);
                  func_0x000107742904();
                  puStack_1708 = &DAT_10772b0c0;
                  uStack_1730 = unaff_x22;
                  pppuStack_1710 = &pppuStack_1650;
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
                  puStack_17c8 = &DAT_10772b190;
                  uStack_17f0 = unaff_x22;
                  pppuStack_17d0 = &pppuStack_1710;
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
                  puStack_1888 = &DAT_10772b25c;
                  uStack_18b0 = unaff_x22;
                  pppuStack_1890 = &pppuStack_17d0;
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
                      func_0x000107741cd0(FUN_107740e8c);
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
                  puStack_1958 = &DAT_10772b344;
                  uStack_1980 = unaff_x22;
                  pppuStack_1960 = &pppuStack_1890;
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
                      param_2 = FUN_107741138;
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
                  pcStack_1a28 = FUN_10772b42c;
                  uStack_1a50 = unaff_x22;
                  pppuStack_1a30 = &pppuStack_1960;
                  func_0x000107741ca8();
                  if ((bRam0000000113725a00 & 1) == 0) {
                    puVar8 = (ulong *)0x113725a00;
                    ___cxa_guard_acquire();
                    puVar7 = puVar8;
                    if ((int)puVar8 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      puVar7 = puVar8;
                      func_0x0001077753dc(auStack_1ac8);
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
                  puStack_1ae8 = &UNK_10772b510;
                  pppuStack_1af0 = &pppuStack_1a30;
                  func_0x0001077429f8();
                  ppuStack_1c20 = pppuVar9;
                  func_0x00010774205c();
                  ppuStack_1be8 = (undefined8 ***)0x0;
                  ppuStack_1be0 = (undefined8 ***)0x0;
                  uStack_1bd8 = 0;
                  ppuStack_1c00 = (undefined8 ***)0x0;
                  ppuStack_1bf8 = (undefined8 ***)0x0;
                  uStack_1bf0 = 0;
                  lVar14 = *(long *)param_2;
                  uStack_1b50 = extraout_x8;
                  do {
                    if (lVar14 == *(long *)(unaff_x21 + 8)) {
                      pppuVar1 = (undefined8 ***)ppuStack_1be0;
                      pppuVar9 = (undefined8 ***)ppuStack_1be8;
                      if (ppuStack_1c00 != ppuStack_1bf8) {
                        pppuVar1 = (undefined8 ***)ppuStack_1bf8;
                        pppuVar9 = (undefined8 ***)ppuStack_1c00;
                      }
                      uStack_1b98 = 0;
                      uStack_1b90 = 0;
                      pppuStack_1ba0 = (undefined8 ****)0x0;
                      if (pppuVar9 != pppuVar1) {
                        func_0x000100602d9c(&pppuStack_1ba0,&pppuStack_1ba0,pppuVar9);
                        pppuVar9 = pppuVar9 + 3;
                      }
                      for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                        ppppuVar6 = (undefined8 ****)pppuStack_1ba0;
                        if (-1 < (long)uStack_1b90._7_1_) {
                          ppppuVar6 = &pppuStack_1ba0;
                        }
                        uVar2 = uStack_1b98;
                        if (-1 < (long)uStack_1b90) {
                          uVar2 = (long)uStack_1b90._7_1_;
                        }
                        pcStack_1b88 = " | ";
                        pcStack_1b80 = "";
                        func_0x000106887580(&pppuStack_1ba0,(long)ppppuVar6 + uVar2,&pcStack_1b88);
                        uVar2 = uStack_1b98;
                        ppppuVar6 = (undefined8 ****)pppuStack_1ba0;
                        if (-1 < (long)uStack_1b90) {
                          uVar2 = uStack_1b90 >> 0x38;
                          ppppuVar6 = &pppuStack_1ba0;
                        }
                        func_0x000100602d9c(&pppuStack_1ba0,(long)ppppuVar6 + uVar2,pppuVar9);
                      }
                      ppuStack_1bb8 = (undefined8 ***)0x0;
                      uStack_1bb0 = 0;
                      uStack_1ba8 = 0;
                      uVar3 = (*puVar7 & 1) == 0;
                      puVar8 = puVar7 + 1;
                      if (!(bool)uVar3) {
                        puVar8 = (ulong *)puVar7[1];
                      }
                      puVar13 = (ulong *)&DAT_10f68f19e;
                      if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                  (auStack_1c18,&UNK_10f424ce9,&pppuStack_1ba0);
                        func_0x00010048a6c8(auStack_1bd0,auStack_1c18,&UNK_10f424d05);
                        func_0x000100610910(&pcStack_1b88,auStack_1bd0,&ppuStack_1bb8);
                        ppcVar11 = (char **)&UNK_10f417e7a;
                        func_0x00010048a6c8(ppuStack_1c20,&pcStack_1b88);
                        func_0x0001077435f4();
                        func_0x0001077433f8();
                        func_0x000107742c9c();
                        func_0x000107743354();
                        func_0x0001077435e4();
                        func_0x0001000e30f4(&ppuStack_1c00);
                        ppppuVar6 = (undefined8 ****)&ppuStack_1be8;
                        func_0x0001000e30f4();
                        func_0x000107741c94(uStack_1b50);
                        if ((bool)uVar3) {
                          return ppppuVar6;
                        }
                        ___stack_chk_fail();
                        func_0x0001077435e4();
                        func_0x0001000e30f4(&ppuStack_1c00);
                        ppppuVar10 = (undefined8 ****)&ppuStack_1be8;
                        func_0x0001000e30f4(ppppuVar10);
                        puVar15 = &UNK_10772b8e8;
                        func_0x000107742904();
                      }
                      else {
                        uStack_1ba8 = 0;
                        uStack_1bb0 = 0;
                        ppuStack_1bb8 = (undefined8 ***)0x0;
                        ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                        func_0x00010756a788(&pcStack_1b88,*puVar8 + 0x10);
                        ppppuVar10 = (undefined8 ****)&ppuStack_1bb8;
                        ppcVar11 = &pcStack_1b88;
                        puVar15 = &UNK_10772b78c;
                        puVar13 = (ulong *)&DAT_10f68f19e;
                      }
code_r0x00010772b8e8:
                      ppcVar12 = ppcVar11;
                      puStack_1c40 = puVar13;
                      pppuStack_1c38 = ppppuVar6;
                      pppuStack_1c30 = &pppuStack_1af0;
                      puStack_1c28 = puVar15;
                      func_0x000107264c5c();
                      ppcStack_1c50 = ppcVar11;
                      ppcStack_1c48 = ppcVar12;
                      func_0x0001073727e0(ppppuVar10,&ppcStack_1c50);
                      return ppppuVar10;
                    }
                    (**(code **)(lVar14 + 8))();
                    ppppuVar6 = (undefined8 ****)*pppuVar9;
                    if (*(int *)(ppppuVar6 + 8) == 0) {
                      func_0x00010002b838(&pppuStack_1ba0,&DAT_10f68e8ec);
                      if (ppppuVar6[5] != ppppuVar6[6]) {
                        func_0x00010756a788(&pcStack_1b88,ppppuVar6[5]);
                        ppppuVar10 = &pppuStack_1ba0;
                        ppcVar11 = &pcStack_1b88;
                        puVar15 = &UNK_10772b628;
                        puVar13 = puVar7;
                        goto code_r0x00010772b8e8;
                      }
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&pppuStack_1ba0,&DAT_10f684600);
                      pppuVar9 = &ppuStack_1c00;
                      if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                        pppuVar9 = &ppuStack_1be8;
                      }
                      func_0x000100206870(pppuVar9,&pppuStack_1ba0);
                    }
                    else {
                      func_0x00010756a788(&pcStack_1b88,ppppuVar6 + 5);
                      func_0x00010724ef84(auStack_1bd0,&pcStack_1b88);
                      func_0x0001004c3cd0(&ppuStack_1bb8,&DAT_10f68e8ec,auStack_1bd0);
                      func_0x00010048a6c8(&pppuStack_1ba0,&ppuStack_1bb8,&DAT_10f684600);
                      func_0x000107743354();
                      func_0x0001077433f8();
                      func_0x00010774335c();
                      pppuVar9 = &ppuStack_1c00;
                      func_0x000100206870(pppuVar9,&pppuStack_1ba0);
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



/* Entry: 107729e20; end: 107729f23;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_107729e20(undefined8 param_1,code *param_2)

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
  char **ppcStack_15e0;
  char **ppcStack_15d8;
  ulong *puStack_15d0;
  undefined8 ***pppuStack_15c8;
  undefined8 ***pppuStack_15c0;
  undefined *puStack_15b8;
  undefined8 **ppuStack_15b0;
  undefined1 auStack_15a8 [24];
  undefined8 **ppuStack_1590;
  undefined8 **ppuStack_1588;
  undefined8 uStack_1580;
  undefined8 **ppuStack_1578;
  undefined8 **ppuStack_1570;
  undefined8 uStack_1568;
  undefined1 auStack_1560 [24];
  undefined8 **ppuStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 ***pppuStack_1530;
  ulong uStack_1528;
  undefined8 uStack_1520;
  char *pcStack_1518;
  char *pcStack_1510;
  undefined8 uStack_14e0;
  undefined8 ***pppuStack_1480;
  undefined *puStack_1478;
  undefined1 auStack_1458 [120];
  undefined8 uStack_13e0;
  undefined8 ***pppuStack_13c0;
  code *pcStack_13b8;
  undefined8 uStack_1310;
  undefined8 ***pppuStack_12f0;
  undefined *puStack_12e8;
  undefined8 uStack_1240;
  undefined8 ***pppuStack_1220;
  undefined *puStack_1218;
  undefined8 uStack_1180;
  undefined8 ***pppuStack_1160;
  undefined *puStack_1158;
  undefined8 uStack_10c0;
  undefined8 ***pppuStack_10a0;
  undefined *puStack_1098;
  undefined8 uStack_1000;
  undefined8 ***pppuStack_fe0;
  undefined *puStack_fd8;
  undefined4 uStack_fb0;
  undefined8 uStack_f40;
  undefined8 ***pppuStack_f20;
  undefined *puStack_f18;
  undefined8 uStack_e80;
  undefined8 ***pppuStack_e60;
  undefined *puStack_e58;
  undefined8 uStack_db0;
  undefined8 ***pppuStack_d90;
  code *pcStack_d88;
  undefined8 uStack_ce0;
  undefined8 ***pppuStack_cc0;
  undefined *puStack_cb8;
  undefined8 uStack_c10;
  undefined8 ***pppuStack_bf0;
  undefined *puStack_be8;
  undefined8 uStack_b30;
  undefined8 ***pppuStack_b10;
  undefined *puStack_b08;
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
      param_2 = FUN_10773d950;
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
    puStack_e8 = &DAT_107729f24;
    uStack_110 = unaff_x22;
    puStack_f0 = &stack0xfffffffffffffff0;
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
      puStack_1c8 = &DAT_10772a028;
      uStack_1f0 = unaff_x22;
      ppuStack_1d0 = &puStack_f0;
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
        ppppuVar6 = (undefined8 ****)0x113725898;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137258a0);
        func_0x00010774297c();
        puStack_298 = &DAT_10772a110;
        uStack_2c0 = unaff_x22;
        pppuStack_2a0 = &ppuStack_1d0;
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
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258b0);
          func_0x00010774297c();
          puStack_368 = &DAT_10772a1f4;
          uStack_390 = unaff_x22;
          pppuStack_370 = &pppuStack_2a0;
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
          puStack_448 = &DAT_10772a2f8;
          uStack_470 = unaff_x22;
          pppuStack_450 = &pppuStack_370;
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
          puStack_528 = &DAT_10772a3fc;
          uStack_550 = unaff_x22;
          pppuStack_530 = &pppuStack_450;
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
              func_0x000107741cd0(FUN_10773e614);
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
          puStack_5f8 = &DAT_10772a4e4;
          uStack_620 = unaff_x22;
          pppuStack_600 = &pppuStack_530;
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
              *unaff_x19 = &PTR_FUN_1109d3b48;
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
          pcStack_6c8 = FUN_10772a5c8;
          uStack_6f0 = unaff_x22;
          pppuStack_6d0 = &pppuStack_600;
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
          puStack_7a8 = &DAT_10772a6cc;
          uStack_7d0 = unaff_x22;
          pppuStack_7b0 = &pppuStack_6d0;
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
              func_0x000107741cd0(FUN_10773ec00);
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
          puStack_888 = &DAT_10772a7d0;
          uStack_8b0 = unaff_x22;
          pppuStack_890 = &pppuStack_7b0;
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
              *unaff_x19 = &PTR_FUN_1109d3c08;
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
          puStack_958 = &DAT_10772a8b8;
          uStack_980 = unaff_x22;
          pppuStack_960 = &pppuStack_890;
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
          puStack_a28 = &DAT_10772a99c;
          uStack_a50 = unaff_x22;
          pppuStack_a30 = &pppuStack_960;
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
          puStack_b08 = &DAT_10772aaa0;
          uStack_b30 = unaff_x22;
          pppuStack_b10 = &pppuStack_a30;
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
              param_2 = FUN_10773f4f0;
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
          puStack_be8 = &DAT_10772aba4;
          uStack_c10 = unaff_x22;
          pppuStack_bf0 = &pppuStack_b10;
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
          puStack_cb8 = &DAT_10772ac8c;
          uStack_ce0 = unaff_x22;
          pppuStack_cc0 = &pppuStack_bf0;
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
          pcStack_d88 = FUN_10772ad70;
          uStack_db0 = unaff_x22;
          pppuStack_d90 = &pppuStack_cc0;
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
          puStack_e58 = &DAT_10772ae54;
          uStack_e80 = unaff_x22;
          pppuStack_e60 = &pppuStack_d90;
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
              *unaff_x19 = &PTR_FUN_1109d3dc8;
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
            puStack_f18 = &DAT_10772af1c;
            uStack_f40 = unaff_x22;
            pppuStack_f20 = &pppuStack_e60;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar5 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar5 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_fb0 = 2;
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
              puStack_fd8 = &DAT_10772aff0;
              uStack_1000 = unaff_x22;
              pppuStack_fe0 = &pppuStack_f20;
              func_0x000107741ca8();
              if ((bRam00000001137259b0 & 1) == 0) {
                puVar5 = (undefined8 *)0x1137259b0;
                ___cxa_guard_acquire();
                if ((int)puVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107743448(2);
                  func_0x000107741c80();
                  param_2 = FUN_1077406b0;
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
                puStack_1098 = &DAT_10772b0c0;
                uStack_10c0 = unaff_x22;
                pppuStack_10a0 = &pppuStack_fe0;
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
                  ppppuVar6 = (undefined8 ****)0x1137259b8;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_1158 = &DAT_10772b190;
                  uStack_1180 = unaff_x22;
                  pppuStack_1160 = &pppuStack_10a0;
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
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259d0);
                    func_0x000107742904();
                    puStack_1218 = &DAT_10772b25c;
                    uStack_1240 = unaff_x22;
                    pppuStack_1220 = &pppuStack_1160;
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
                        func_0x000107741cd0(FUN_107740e8c);
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
                    puStack_12e8 = &DAT_10772b344;
                    uStack_1310 = unaff_x22;
                    pppuStack_12f0 = &pppuStack_1220;
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
                        param_2 = FUN_107741138;
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
                    pcStack_13b8 = FUN_10772b42c;
                    uStack_13e0 = unaff_x22;
                    pppuStack_13c0 = &pppuStack_12f0;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar8 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar7 = puVar8;
                      if ((int)puVar8 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar7 = puVar8;
                        func_0x0001077753dc(auStack_1458);
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
                    puStack_1478 = &UNK_10772b510;
                    pppuStack_1480 = &pppuStack_13c0;
                    func_0x0001077429f8();
                    ppuStack_15b0 = pppuVar9;
                    func_0x00010774205c();
                    ppuStack_1578 = (undefined8 ***)0x0;
                    ppuStack_1570 = (undefined8 ***)0x0;
                    uStack_1568 = 0;
                    ppuStack_1590 = (undefined8 ***)0x0;
                    ppuStack_1588 = (undefined8 ***)0x0;
                    uStack_1580 = 0;
                    lVar14 = *(long *)param_2;
                    uStack_14e0 = extraout_x8;
                    do {
                      if (lVar14 == *(long *)(unaff_x21 + 8)) {
                        pppuVar1 = (undefined8 ***)ppuStack_1570;
                        pppuVar9 = (undefined8 ***)ppuStack_1578;
                        if (ppuStack_1590 != ppuStack_1588) {
                          pppuVar1 = (undefined8 ***)ppuStack_1588;
                          pppuVar9 = (undefined8 ***)ppuStack_1590;
                        }
                        uStack_1528 = 0;
                        uStack_1520 = 0;
                        pppuStack_1530 = (undefined8 ****)0x0;
                        if (pppuVar9 != pppuVar1) {
                          func_0x000100602d9c(&pppuStack_1530,&pppuStack_1530,pppuVar9);
                          pppuVar9 = pppuVar9 + 3;
                        }
                        for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                          ppppuVar6 = (undefined8 ****)pppuStack_1530;
                          if (-1 < (long)uStack_1520._7_1_) {
                            ppppuVar6 = &pppuStack_1530;
                          }
                          uVar2 = uStack_1528;
                          if (-1 < (long)uStack_1520) {
                            uVar2 = (long)uStack_1520._7_1_;
                          }
                          pcStack_1518 = " | ";
                          pcStack_1510 = "";
                          func_0x000106887580(&pppuStack_1530,(long)ppppuVar6 + uVar2,&pcStack_1518)
                          ;
                          uVar2 = uStack_1528;
                          ppppuVar6 = (undefined8 ****)pppuStack_1530;
                          if (-1 < (long)uStack_1520) {
                            uVar2 = uStack_1520 >> 0x38;
                            ppppuVar6 = &pppuStack_1530;
                          }
                          func_0x000100602d9c(&pppuStack_1530,(long)ppppuVar6 + uVar2,pppuVar9);
                        }
                        ppuStack_1548 = (undefined8 ***)0x0;
                        uStack_1540 = 0;
                        uStack_1538 = 0;
                        uVar3 = (*puVar7 & 1) == 0;
                        puVar8 = puVar7 + 1;
                        if (!(bool)uVar3) {
                          puVar8 = (ulong *)puVar7[1];
                        }
                        puVar13 = (ulong *)&DAT_10f68f19e;
                        if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (auStack_15a8,&UNK_10f424ce9,&pppuStack_1530);
                          func_0x00010048a6c8(auStack_1560,auStack_15a8,&UNK_10f424d05);
                          func_0x000100610910(&pcStack_1518,auStack_1560,&ppuStack_1548);
                          ppcVar11 = (char **)&UNK_10f417e7a;
                          func_0x00010048a6c8(ppuStack_15b0,&pcStack_1518);
                          func_0x0001077435f4();
                          func_0x0001077433f8();
                          func_0x000107742c9c();
                          func_0x000107743354();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_1590);
                          ppppuVar6 = (undefined8 ****)&ppuStack_1578;
                          func_0x0001000e30f4();
                          func_0x000107741c94(uStack_14e0);
                          if ((bool)uVar3) {
                            return ppppuVar6;
                          }
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_1590);
                          ppppuVar10 = (undefined8 ****)&ppuStack_1578;
                          func_0x0001000e30f4(ppppuVar10);
                          puVar15 = &UNK_10772b8e8;
                          func_0x000107742904();
                        }
                        else {
                          uStack_1538 = 0;
                          uStack_1540 = 0;
                          ppuStack_1548 = (undefined8 ***)0x0;
                          ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                          func_0x00010756a788(&pcStack_1518,*puVar8 + 0x10);
                          ppppuVar10 = (undefined8 ****)&ppuStack_1548;
                          ppcVar11 = &pcStack_1518;
                          puVar15 = &UNK_10772b78c;
                          puVar13 = (ulong *)&DAT_10f68f19e;
                        }
code_r0x00010772b8e8:
                        ppcVar12 = ppcVar11;
                        puStack_15d0 = puVar13;
                        pppuStack_15c8 = ppppuVar6;
                        pppuStack_15c0 = &pppuStack_1480;
                        puStack_15b8 = puVar15;
                        func_0x000107264c5c();
                        ppcStack_15e0 = ppcVar11;
                        ppcStack_15d8 = ppcVar12;
                        func_0x0001073727e0(ppppuVar10,&ppcStack_15e0);
                        return ppppuVar10;
                      }
                      (**(code **)(lVar14 + 8))();
                      ppppuVar6 = (undefined8 ****)*pppuVar9;
                      if (*(int *)(ppppuVar6 + 8) == 0) {
                        func_0x00010002b838(&pppuStack_1530,&DAT_10f68e8ec);
                        if (ppppuVar6[5] != ppppuVar6[6]) {
                          func_0x00010756a788(&pcStack_1518,ppppuVar6[5]);
                          ppppuVar10 = &pppuStack_1530;
                          ppcVar11 = &pcStack_1518;
                          puVar15 = &UNK_10772b628;
                          puVar13 = puVar7;
                          goto code_r0x00010772b8e8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_1530,&DAT_10f684600);
                        pppuVar9 = &ppuStack_1590;
                        if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                          pppuVar9 = &ppuStack_1578;
                        }
                        func_0x000100206870(pppuVar9,&pppuStack_1530);
                      }
                      else {
                        func_0x00010756a788(&pcStack_1518,ppppuVar6 + 5);
                        func_0x00010724ef84(auStack_1560,&pcStack_1518);
                        func_0x0001004c3cd0(&ppuStack_1548,&DAT_10f68e8ec,auStack_1560);
                        func_0x00010048a6c8(&pppuStack_1530,&ppuStack_1548,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        pppuVar9 = &ppuStack_1590;
                        func_0x000100206870(pppuVar9,&pppuStack_1530);
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
        ppppuVar6 = (undefined8 ****)0x1137258a8;
      }
      return ppppuVar6;
    }
    ppppuVar6 = (undefined8 ****)0x113725888;
  }
  return ppppuVar6;
}



/* Entry: 10772a5c8; end: 10772a6cb;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772a5c8(undefined8 param_1,code *param_2)

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
  char **ppcStack_f20;
  char **ppcStack_f18;
  ulong *puStack_f10;
  undefined8 ***pppuStack_f08;
  undefined8 ***pppuStack_f00;
  undefined *puStack_ef8;
  undefined8 **ppuStack_ef0;
  undefined1 auStack_ee8 [24];
  undefined8 **ppuStack_ed0;
  undefined8 **ppuStack_ec8;
  undefined8 uStack_ec0;
  undefined8 **ppuStack_eb8;
  undefined8 **ppuStack_eb0;
  undefined8 uStack_ea8;
  undefined1 auStack_ea0 [24];
  undefined8 **ppuStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 ***pppuStack_e70;
  ulong uStack_e68;
  undefined8 uStack_e60;
  char *pcStack_e58;
  char *pcStack_e50;
  undefined8 uStack_e20;
  undefined8 ***pppuStack_dc0;
  undefined *puStack_db8;
  undefined1 auStack_d98 [120];
  undefined8 uStack_d20;
  undefined8 ***pppuStack_d00;
  code *pcStack_cf8;
  undefined8 uStack_c50;
  undefined8 ***pppuStack_c30;
  undefined *puStack_c28;
  undefined8 uStack_b80;
  undefined8 ***pppuStack_b60;
  undefined *puStack_b58;
  undefined8 uStack_ac0;
  undefined8 ***pppuStack_aa0;
  undefined *puStack_a98;
  undefined8 uStack_a00;
  undefined8 ***pppuStack_9e0;
  undefined *puStack_9d8;
  undefined8 uStack_940;
  undefined8 ***pppuStack_920;
  undefined *puStack_918;
  undefined4 uStack_8f0;
  undefined8 uStack_880;
  undefined8 ***pppuStack_860;
  undefined *puStack_858;
  undefined8 uStack_7c0;
  undefined8 ***pppuStack_7a0;
  undefined *puStack_798;
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
    ppppuVar6 = (undefined8 ****)0x1137258f8;
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
    ___cxa_guard_abort(0x113725900);
    func_0x00010774297c();
    puStack_e8 = &DAT_10772a6cc;
    uStack_110 = unaff_x22;
    puStack_f0 = &stack0xfffffffffffffff0;
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
        func_0x000107741cd0(FUN_10773ec00);
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
      ___cxa_guard_abort(0x113725910);
      func_0x00010774297c();
      puStack_1c8 = &DAT_10772a7d0;
      uStack_1f0 = unaff_x22;
      ppuStack_1d0 = &puStack_f0;
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
          *unaff_x19 = &PTR_FUN_1109d3c08;
          func_0x000107741cd0(&UNK_10773ee8c);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        ppppuVar6 = (undefined8 ****)0x113725918;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725920);
        func_0x00010774297c();
        puStack_298 = &DAT_10772a8b8;
        uStack_2c0 = unaff_x22;
        pppuStack_2a0 = &ppuStack_1d0;
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
          puStack_368 = &DAT_10772a99c;
          uStack_390 = unaff_x22;
          pppuStack_370 = &pppuStack_2a0;
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
          puStack_448 = &DAT_10772aaa0;
          uStack_470 = unaff_x22;
          pppuStack_450 = &pppuStack_370;
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
              param_2 = FUN_10773f4f0;
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
          puStack_528 = &DAT_10772aba4;
          uStack_550 = unaff_x22;
          pppuStack_530 = &pppuStack_450;
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
          puStack_5f8 = &DAT_10772ac8c;
          uStack_620 = unaff_x22;
          pppuStack_600 = &pppuStack_530;
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
          pcStack_6c8 = FUN_10772ad70;
          uStack_6f0 = unaff_x22;
          pppuStack_6d0 = &pppuStack_600;
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
          puStack_798 = &DAT_10772ae54;
          uStack_7c0 = unaff_x22;
          pppuStack_7a0 = &pppuStack_6d0;
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
              *unaff_x19 = &PTR_FUN_1109d3dc8;
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
            puStack_858 = &DAT_10772af1c;
            uStack_880 = unaff_x22;
            pppuStack_860 = &pppuStack_7a0;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar5 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar5 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_8f0 = 2;
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
              puStack_918 = &DAT_10772aff0;
              uStack_940 = unaff_x22;
              pppuStack_920 = &pppuStack_860;
              func_0x000107741ca8();
              if ((bRam00000001137259b0 & 1) == 0) {
                puVar5 = (undefined8 *)0x1137259b0;
                ___cxa_guard_acquire();
                if ((int)puVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107743448(2);
                  func_0x000107741c80();
                  param_2 = FUN_1077406b0;
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
                puStack_9d8 = &DAT_10772b0c0;
                uStack_a00 = unaff_x22;
                pppuStack_9e0 = &pppuStack_920;
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
                  ppppuVar6 = (undefined8 ****)0x1137259b8;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_a98 = &DAT_10772b190;
                  uStack_ac0 = unaff_x22;
                  pppuStack_aa0 = &pppuStack_9e0;
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
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259d0);
                    func_0x000107742904();
                    puStack_b58 = &DAT_10772b25c;
                    uStack_b80 = unaff_x22;
                    pppuStack_b60 = &pppuStack_aa0;
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
                        func_0x000107741cd0(FUN_107740e8c);
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
                    puStack_c28 = &DAT_10772b344;
                    uStack_c50 = unaff_x22;
                    pppuStack_c30 = &pppuStack_b60;
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
                        param_2 = FUN_107741138;
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
                    pcStack_cf8 = FUN_10772b42c;
                    uStack_d20 = unaff_x22;
                    pppuStack_d00 = &pppuStack_c30;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar8 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar7 = puVar8;
                      if ((int)puVar8 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar7 = puVar8;
                        func_0x0001077753dc(auStack_d98);
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
                    puStack_db8 = &UNK_10772b510;
                    pppuStack_dc0 = &pppuStack_d00;
                    func_0x0001077429f8();
                    ppuStack_ef0 = pppuVar9;
                    func_0x00010774205c();
                    ppuStack_eb8 = (undefined8 ***)0x0;
                    ppuStack_eb0 = (undefined8 ***)0x0;
                    uStack_ea8 = 0;
                    ppuStack_ed0 = (undefined8 ***)0x0;
                    ppuStack_ec8 = (undefined8 ***)0x0;
                    uStack_ec0 = 0;
                    lVar14 = *(long *)param_2;
                    uStack_e20 = extraout_x8;
                    do {
                      if (lVar14 == *(long *)(unaff_x21 + 8)) {
                        pppuVar1 = (undefined8 ***)ppuStack_eb0;
                        pppuVar9 = (undefined8 ***)ppuStack_eb8;
                        if (ppuStack_ed0 != ppuStack_ec8) {
                          pppuVar1 = (undefined8 ***)ppuStack_ec8;
                          pppuVar9 = (undefined8 ***)ppuStack_ed0;
                        }
                        uStack_e68 = 0;
                        uStack_e60 = 0;
                        pppuStack_e70 = (undefined8 ****)0x0;
                        if (pppuVar9 != pppuVar1) {
                          func_0x000100602d9c(&pppuStack_e70,&pppuStack_e70,pppuVar9);
                          pppuVar9 = pppuVar9 + 3;
                        }
                        for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                          ppppuVar6 = (undefined8 ****)pppuStack_e70;
                          if (-1 < (long)uStack_e60._7_1_) {
                            ppppuVar6 = &pppuStack_e70;
                          }
                          uVar2 = uStack_e68;
                          if (-1 < (long)uStack_e60) {
                            uVar2 = (long)uStack_e60._7_1_;
                          }
                          pcStack_e58 = " | ";
                          pcStack_e50 = "";
                          func_0x000106887580(&pppuStack_e70,(long)ppppuVar6 + uVar2,&pcStack_e58);
                          uVar2 = uStack_e68;
                          ppppuVar6 = (undefined8 ****)pppuStack_e70;
                          if (-1 < (long)uStack_e60) {
                            uVar2 = uStack_e60 >> 0x38;
                            ppppuVar6 = &pppuStack_e70;
                          }
                          func_0x000100602d9c(&pppuStack_e70,(long)ppppuVar6 + uVar2,pppuVar9);
                        }
                        ppuStack_e88 = (undefined8 ***)0x0;
                        uStack_e80 = 0;
                        uStack_e78 = 0;
                        uVar3 = (*puVar7 & 1) == 0;
                        puVar8 = puVar7 + 1;
                        if (!(bool)uVar3) {
                          puVar8 = (ulong *)puVar7[1];
                        }
                        puVar13 = (ulong *)&DAT_10f68f19e;
                        if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (auStack_ee8,&UNK_10f424ce9,&pppuStack_e70);
                          func_0x00010048a6c8(auStack_ea0,auStack_ee8,&UNK_10f424d05);
                          func_0x000100610910(&pcStack_e58,auStack_ea0,&ppuStack_e88);
                          ppcVar11 = (char **)&UNK_10f417e7a;
                          func_0x00010048a6c8(ppuStack_ef0,&pcStack_e58);
                          func_0x0001077435f4();
                          func_0x0001077433f8();
                          func_0x000107742c9c();
                          func_0x000107743354();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_ed0);
                          ppppuVar6 = (undefined8 ****)&ppuStack_eb8;
                          func_0x0001000e30f4();
                          func_0x000107741c94(uStack_e20);
                          if ((bool)uVar3) {
                            return ppppuVar6;
                          }
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&ppuStack_ed0);
                          ppppuVar10 = (undefined8 ****)&ppuStack_eb8;
                          func_0x0001000e30f4(ppppuVar10);
                          puVar15 = &UNK_10772b8e8;
                          func_0x000107742904();
                        }
                        else {
                          uStack_e78 = 0;
                          uStack_e80 = 0;
                          ppuStack_e88 = (undefined8 ***)0x0;
                          ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                          func_0x00010756a788(&pcStack_e58,*puVar8 + 0x10);
                          ppppuVar10 = (undefined8 ****)&ppuStack_e88;
                          ppcVar11 = &pcStack_e58;
                          puVar15 = &UNK_10772b78c;
                          puVar13 = (ulong *)&DAT_10f68f19e;
                        }
code_r0x00010772b8e8:
                        ppcVar12 = ppcVar11;
                        puStack_f10 = puVar13;
                        pppuStack_f08 = ppppuVar6;
                        pppuStack_f00 = &pppuStack_dc0;
                        puStack_ef8 = puVar15;
                        func_0x000107264c5c();
                        ppcStack_f20 = ppcVar11;
                        ppcStack_f18 = ppcVar12;
                        func_0x0001073727e0(ppppuVar10,&ppcStack_f20);
                        return ppppuVar10;
                      }
                      (**(code **)(lVar14 + 8))();
                      ppppuVar6 = (undefined8 ****)*pppuVar9;
                      if (*(int *)(ppppuVar6 + 8) == 0) {
                        func_0x00010002b838(&pppuStack_e70,&DAT_10f68e8ec);
                        if (ppppuVar6[5] != ppppuVar6[6]) {
                          func_0x00010756a788(&pcStack_e58,ppppuVar6[5]);
                          ppppuVar10 = &pppuStack_e70;
                          ppcVar11 = &pcStack_e58;
                          puVar15 = &UNK_10772b628;
                          puVar13 = puVar7;
                          goto code_r0x00010772b8e8;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_e70,&DAT_10f684600);
                        pppuVar9 = &ppuStack_ed0;
                        if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                          pppuVar9 = &ppuStack_eb8;
                        }
                        func_0x000100206870(pppuVar9,&pppuStack_e70);
                      }
                      else {
                        func_0x00010756a788(&pcStack_e58,ppppuVar6 + 5);
                        func_0x00010724ef84(auStack_ea0,&pcStack_e58);
                        func_0x0001004c3cd0(&ppuStack_e88,&DAT_10f68e8ec,auStack_ea0);
                        func_0x00010048a6c8(&pppuStack_e70,&ppuStack_e88,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        pppuVar9 = &ppuStack_ed0;
                        func_0x000100206870(pppuVar9,&pppuStack_e70);
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
        ppppuVar6 = (undefined8 ****)0x113725928;
      }
      return ppppuVar6;
    }
    ppppuVar6 = (undefined8 ****)0x113725908;
  }
  return ppppuVar6;
}



/* Entry: 10772ad70; end: 10772ae53;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772ad70(undefined8 param_1,code *param_2)

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
  char **ppcStack_860;
  char **ppcStack_858;
  ulong *puStack_850;
  undefined8 ***pppuStack_848;
  undefined8 ***pppuStack_840;
  undefined *puStack_838;
  undefined8 **ppuStack_830;
  undefined1 auStack_828 [24];
  undefined8 **ppuStack_810;
  undefined8 **ppuStack_808;
  undefined8 uStack_800;
  undefined8 **ppuStack_7f8;
  undefined8 **ppuStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7e0 [24];
  undefined8 **ppuStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 ***pppuStack_7b0;
  ulong uStack_7a8;
  undefined8 uStack_7a0;
  char *pcStack_798;
  char *pcStack_790;
  undefined8 uStack_760;
  undefined8 ***pppuStack_700;
  undefined *puStack_6f8;
  undefined1 auStack_6d8 [120];
  undefined8 ***pppuStack_640;
  code *pcStack_638;
  undefined8 ***pppuStack_570;
  undefined *puStack_568;
  undefined8 ***pppuStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_320;
  undefined *puStack_318;
  undefined1 ***pppuStack_260;
  undefined *puStack_258;
  undefined4 uStack_230;
  undefined1 **ppuStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
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
  puStack_d8 = &DAT_10772ae54;
  puStack_e0 = &stack0xfffffffffffffff0;
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
      *unaff_x19 = &PTR_FUN_1109d3dc8;
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
    puStack_198 = &DAT_10772af1c;
    ppuStack_1a0 = &puStack_e0;
    func_0x000107741ca8();
    if ((bRam00000001137259a0 & 1) == 0) {
      puVar5 = (undefined8 *)0x1137259a0;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        uStack_230 = 2;
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
      puStack_258 = &DAT_10772aff0;
      pppuStack_260 = &ppuStack_1a0;
      func_0x000107741ca8();
      if ((bRam00000001137259b0 & 1) == 0) {
        puVar5 = (undefined8 *)0x1137259b0;
        ___cxa_guard_acquire();
        if ((int)puVar5 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107743448(2);
          func_0x000107741c80();
          param_2 = FUN_1077406b0;
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
        puStack_318 = &DAT_10772b0c0;
        pppuStack_320 = &pppuStack_260;
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
          ppppuVar6 = (undefined8 ****)0x1137259b8;
        }
        else {
          ___stack_chk_fail();
          func_0x00010774219c();
          ___cxa_guard_abort(0x1137259c0);
          func_0x000107742904();
          puStack_3d8 = &DAT_10772b190;
          pppuStack_3e0 = &pppuStack_320;
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
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x1137259d0);
            func_0x000107742904();
            puStack_498 = &DAT_10772b25c;
            pppuStack_4a0 = &pppuStack_3e0;
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
                func_0x000107741cd0(FUN_107740e8c);
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
              puStack_568 = &DAT_10772b344;
              pppuStack_570 = &pppuStack_4a0;
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
                  param_2 = FUN_107741138;
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
                pcStack_638 = FUN_10772b42c;
                pppuStack_640 = &pppuStack_570;
                func_0x000107741ca8();
                if ((bRam0000000113725a00 & 1) == 0) {
                  puVar8 = (ulong *)0x113725a00;
                  ___cxa_guard_acquire();
                  puVar7 = puVar8;
                  if ((int)puVar8 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    puVar7 = puVar8;
                    func_0x0001077753dc(auStack_6d8);
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
                puStack_6f8 = &UNK_10772b510;
                pppuStack_700 = &pppuStack_640;
                func_0x0001077429f8();
                ppuStack_830 = pppuVar9;
                func_0x00010774205c();
                ppuStack_7f8 = (undefined8 ***)0x0;
                ppuStack_7f0 = (undefined8 ***)0x0;
                uStack_7e8 = 0;
                ppuStack_810 = (undefined8 ***)0x0;
                ppuStack_808 = (undefined8 ***)0x0;
                uStack_800 = 0;
                lVar14 = *(long *)param_2;
                uStack_760 = extraout_x8;
                do {
                  if (lVar14 == *(long *)(unaff_x21 + 8)) {
                    pppuVar1 = (undefined8 ***)ppuStack_7f0;
                    pppuVar9 = (undefined8 ***)ppuStack_7f8;
                    if (ppuStack_810 != ppuStack_808) {
                      pppuVar1 = (undefined8 ***)ppuStack_808;
                      pppuVar9 = (undefined8 ***)ppuStack_810;
                    }
                    uStack_7a8 = 0;
                    uStack_7a0 = 0;
                    pppuStack_7b0 = (undefined8 ****)0x0;
                    if (pppuVar9 != pppuVar1) {
                      func_0x000100602d9c(&pppuStack_7b0,&pppuStack_7b0,pppuVar9);
                      pppuVar9 = pppuVar9 + 3;
                    }
                    for (; pppuVar9 != pppuVar1; pppuVar9 = pppuVar9 + 3) {
                      ppppuVar6 = (undefined8 ****)pppuStack_7b0;
                      if (-1 < (long)uStack_7a0._7_1_) {
                        ppppuVar6 = &pppuStack_7b0;
                      }
                      uVar2 = uStack_7a8;
                      if (-1 < (long)uStack_7a0) {
                        uVar2 = (long)uStack_7a0._7_1_;
                      }
                      pcStack_798 = " | ";
                      pcStack_790 = "";
                      func_0x000106887580(&pppuStack_7b0,(long)ppppuVar6 + uVar2,&pcStack_798);
                      uVar2 = uStack_7a8;
                      ppppuVar6 = (undefined8 ****)pppuStack_7b0;
                      if (-1 < (long)uStack_7a0) {
                        uVar2 = uStack_7a0 >> 0x38;
                        ppppuVar6 = &pppuStack_7b0;
                      }
                      func_0x000100602d9c(&pppuStack_7b0,(long)ppppuVar6 + uVar2,pppuVar9);
                    }
                    ppuStack_7c8 = (undefined8 ***)0x0;
                    uStack_7c0 = 0;
                    uStack_7b8 = 0;
                    uVar3 = (*puVar7 & 1) == 0;
                    puVar8 = puVar7 + 1;
                    if (!(bool)uVar3) {
                      puVar8 = (ulong *)puVar7[1];
                    }
                    puVar13 = (ulong *)&DAT_10f68f19e;
                    if ((*puVar7 & 0x1ffffffffffffffe) == 0) {
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (auStack_828,&UNK_10f424ce9,&pppuStack_7b0);
                      func_0x00010048a6c8(auStack_7e0,auStack_828,&UNK_10f424d05);
                      func_0x000100610910(&pcStack_798,auStack_7e0,&ppuStack_7c8);
                      ppcVar11 = (char **)&UNK_10f417e7a;
                      func_0x00010048a6c8(ppuStack_830,&pcStack_798);
                      func_0x0001077435f4();
                      func_0x0001077433f8();
                      func_0x000107742c9c();
                      func_0x000107743354();
                      func_0x0001077435e4();
                      func_0x0001000e30f4(&ppuStack_810);
                      ppppuVar6 = (undefined8 ****)&ppuStack_7f8;
                      func_0x0001000e30f4();
                      func_0x000107741c94(uStack_760);
                      if ((bool)uVar3) {
                        return ppppuVar6;
                      }
                      ___stack_chk_fail();
                      func_0x0001077435e4();
                      func_0x0001000e30f4(&ppuStack_810);
                      ppppuVar10 = (undefined8 ****)&ppuStack_7f8;
                      func_0x0001000e30f4(ppppuVar10);
                      puVar15 = &UNK_10772b8e8;
                      func_0x000107742904();
                    }
                    else {
                      uStack_7b8 = 0;
                      uStack_7c0 = 0;
                      ppuStack_7c8 = (undefined8 ***)0x0;
                      ppppuVar6 = (undefined8 ****)(puVar8 + 2);
                      func_0x00010756a788(&pcStack_798,*puVar8 + 0x10);
                      ppppuVar10 = (undefined8 ****)&ppuStack_7c8;
                      ppcVar11 = &pcStack_798;
                      puVar15 = &UNK_10772b78c;
                      puVar13 = (ulong *)&DAT_10f68f19e;
                    }
code_r0x00010772b8e8:
                    ppcVar12 = ppcVar11;
                    puStack_850 = puVar13;
                    pppuStack_848 = ppppuVar6;
                    pppuStack_840 = &pppuStack_700;
                    puStack_838 = puVar15;
                    func_0x000107264c5c();
                    ppcStack_860 = ppcVar11;
                    ppcStack_858 = ppcVar12;
                    func_0x0001073727e0(ppppuVar10,&ppcStack_860);
                    return ppppuVar10;
                  }
                  (**(code **)(lVar14 + 8))();
                  ppppuVar6 = (undefined8 ****)*pppuVar9;
                  if (*(int *)(ppppuVar6 + 8) == 0) {
                    func_0x00010002b838(&pppuStack_7b0,&DAT_10f68e8ec);
                    if (ppppuVar6[5] != ppppuVar6[6]) {
                      func_0x00010756a788(&pcStack_798,ppppuVar6[5]);
                      ppppuVar10 = &pppuStack_7b0;
                      ppcVar11 = &pcStack_798;
                      puVar15 = &UNK_10772b628;
                      puVar13 = puVar7;
                      goto code_r0x00010772b8e8;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                              (&pppuStack_7b0,&DAT_10f684600);
                    pppuVar9 = &ppuStack_810;
                    if ((long)ppppuVar6[6] - (long)ppppuVar6[5] >> 4 != *puVar7 >> 1) {
                      pppuVar9 = &ppuStack_7f8;
                    }
                    func_0x000100206870(pppuVar9,&pppuStack_7b0);
                  }
                  else {
                    func_0x00010756a788(&pcStack_798,ppppuVar6 + 5);
                    func_0x00010724ef84(auStack_7e0,&pcStack_798);
                    func_0x0001004c3cd0(&ppuStack_7c8,&DAT_10f68e8ec,auStack_7e0);
                    func_0x00010048a6c8(&pppuStack_7b0,&ppuStack_7c8,&DAT_10f684600);
                    func_0x000107743354();
                    func_0x0001077433f8();
                    func_0x00010774335c();
                    pppuVar9 = &ppuStack_810;
                    func_0x000100206870(pppuVar9,&pppuStack_7b0);
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



/* Entry: 10772b42c; end: 10772b50f;  */

/* WARNING: Possible PIC construction at 0x00010772b624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010772b788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772b628) */
/* WARNING: Removing unreachable block (ram,0x00010772b78c) */
/* WARNING: Removing unreachable block (ram,0x00010772b604) */
/* WARNING: Removing unreachable block (ram,0x00010772b764) */

undefined8 **** FUN_10772b42c(ulong *param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined8 extraout_x8;
  undefined8 ****ppppuVar9;
  ulong *puVar10;
  long unaff_x21;
  long lVar11;
  undefined *puVar12;
  char **ppcStack_230;
  char **ppcStack_228;
  ulong *puStack_220;
  undefined8 ***pppuStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  undefined1 auStack_1f8 [24];
  undefined8 **ppuStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  char *pcStack_168;
  char *pcStack_160;
  undefined8 uStack_130;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_a8 [120];
  
  func_0x000107741ca8();
  if ((bRam0000000113725a00 & 1) == 0) {
    puVar4 = (ulong *)0x113725a00;
    ___cxa_guard_acquire();
    param_1 = puVar4;
    if ((int)puVar4 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      param_1 = puVar4;
      func_0x0001077753dc(auStack_a8);
      func_0x000107741c80(1);
      param_2 = (long *)&UNK_1077413dc;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar4 = (ulong)&PTR_DAT_1109d3f88;
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
  pppuVar5 = (undefined8 ***)0x113725a00;
  ___cxa_guard_abort();
  func_0x00010774297c();
  puStack_c8 = &UNK_10772b510;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x0001077429f8();
  ppuStack_200 = pppuVar5;
  func_0x00010774205c();
  ppuStack_1c8 = (undefined8 ***)0x0;
  ppuStack_1c0 = (undefined8 ***)0x0;
  uStack_1b8 = 0;
  ppuStack_1e0 = (undefined8 ***)0x0;
  ppuStack_1d8 = (undefined8 ***)0x0;
  uStack_1d0 = 0;
  lVar11 = *param_2;
  uStack_130 = extraout_x8;
  do {
    if (lVar11 == *(long *)(unaff_x21 + 8)) {
      pppuVar1 = (undefined8 ***)ppuStack_1c0;
      pppuVar5 = (undefined8 ***)ppuStack_1c8;
      if (ppuStack_1e0 != ppuStack_1d8) {
        pppuVar1 = (undefined8 ***)ppuStack_1d8;
        pppuVar5 = (undefined8 ***)ppuStack_1e0;
      }
      uStack_178 = 0;
      uStack_170 = 0;
      pppuStack_180 = (undefined8 ****)0x0;
      if (pppuVar5 != pppuVar1) {
        func_0x000100602d9c(&pppuStack_180,&pppuStack_180,pppuVar5);
        pppuVar5 = pppuVar5 + 3;
      }
      for (; pppuVar5 != pppuVar1; pppuVar5 = pppuVar5 + 3) {
        ppppuVar9 = (undefined8 ****)pppuStack_180;
        if (-1 < (long)uStack_170._7_1_) {
          ppppuVar9 = &pppuStack_180;
        }
        uVar2 = uStack_178;
        if (-1 < (long)uStack_170) {
          uVar2 = (long)uStack_170._7_1_;
        }
        pcStack_168 = " | ";
        pcStack_160 = "";
        func_0x000106887580(&pppuStack_180,(long)ppppuVar9 + uVar2,&pcStack_168);
        uVar2 = uStack_178;
        ppppuVar9 = (undefined8 ****)pppuStack_180;
        if (-1 < (long)uStack_170) {
          uVar2 = uStack_170 >> 0x38;
          ppppuVar9 = &pppuStack_180;
        }
        func_0x000100602d9c(&pppuStack_180,(long)ppppuVar9 + uVar2,pppuVar5);
      }
      ppuStack_198 = (undefined8 ***)0x0;
      uStack_190 = 0;
      uStack_188 = 0;
      uVar3 = (*param_1 & 1) == 0;
      puVar4 = param_1 + 1;
      if (!(bool)uVar3) {
        puVar4 = (ulong *)param_1[1];
      }
      puVar10 = (ulong *)&DAT_10f68f19e;
      if ((*param_1 & 0x1ffffffffffffffe) == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_1f8,&UNK_10f424ce9,&pppuStack_180);
        func_0x00010048a6c8(auStack_1b0,auStack_1f8,&UNK_10f424d05);
        func_0x000100610910(&pcStack_168,auStack_1b0,&ppuStack_198);
        ppcVar7 = (char **)&UNK_10f417e7a;
        func_0x00010048a6c8(ppuStack_200,&pcStack_168);
        func_0x0001077435f4();
        func_0x0001077433f8();
        func_0x000107742c9c();
        func_0x000107743354();
        func_0x0001077435e4();
        func_0x0001000e30f4(&ppuStack_1e0);
        ppppuVar9 = (undefined8 ****)&ppuStack_1c8;
        func_0x0001000e30f4();
        func_0x000107741c94(uStack_130);
        if ((bool)uVar3) {
          return ppppuVar9;
        }
        ___stack_chk_fail();
        func_0x0001077435e4();
        func_0x0001000e30f4(&ppuStack_1e0);
        ppppuVar6 = (undefined8 ****)&ppuStack_1c8;
        func_0x0001000e30f4(ppppuVar6);
        puVar12 = &UNK_10772b8e8;
        func_0x000107742904();
      }
      else {
        uStack_188 = 0;
        uStack_190 = 0;
        ppuStack_198 = (undefined8 ***)0x0;
        ppppuVar9 = (undefined8 ****)(puVar4 + 2);
        func_0x00010756a788(&pcStack_168,*puVar4 + 0x10);
        ppppuVar6 = (undefined8 ****)&ppuStack_198;
        ppcVar7 = &pcStack_168;
        puVar12 = &UNK_10772b78c;
        puVar10 = (ulong *)&DAT_10f68f19e;
      }
code_r0x00010772b8e8:
      ppcVar8 = ppcVar7;
      puStack_220 = puVar10;
      pppuStack_218 = ppppuVar9;
      ppuStack_210 = &puStack_d0;
      puStack_208 = puVar12;
      func_0x000107264c5c();
      ppcStack_230 = ppcVar7;
      ppcStack_228 = ppcVar8;
      func_0x0001073727e0(ppppuVar6,&ppcStack_230);
      return ppppuVar6;
    }
    (**(code **)(lVar11 + 8))();
    ppppuVar9 = (undefined8 ****)*pppuVar5;
    if (*(int *)(ppppuVar9 + 8) == 0) {
      func_0x00010002b838(&pppuStack_180,&DAT_10f68e8ec);
      if (ppppuVar9[5] != ppppuVar9[6]) {
        func_0x00010756a788(&pcStack_168,ppppuVar9[5]);
        ppppuVar6 = &pppuStack_180;
        ppcVar7 = &pcStack_168;
        puVar12 = &UNK_10772b628;
        puVar10 = param_1;
        goto code_r0x00010772b8e8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&pppuStack_180,&DAT_10f684600);
      pppuVar5 = &ppuStack_1e0;
      if ((long)ppppuVar9[6] - (long)ppppuVar9[5] >> 4 != *param_1 >> 1) {
        pppuVar5 = &ppuStack_1c8;
      }
      func_0x000100206870(pppuVar5,&pppuStack_180);
    }
    else {
      func_0x00010756a788(&pcStack_168,ppppuVar9 + 5);
      func_0x00010724ef84(auStack_1b0,&pcStack_168);
      func_0x0001004c3cd0(&ppuStack_198,&DAT_10f68e8ec,auStack_1b0);
      func_0x00010048a6c8(&pppuStack_180,&ppuStack_198,&DAT_10f684600);
      func_0x000107743354();
      func_0x0001077433f8();
      func_0x00010774335c();
      pppuVar5 = &ppuStack_1e0;
      func_0x000100206870(pppuVar5,&pppuStack_180);
    }
    func_0x0001077435e4();
    lVar11 = lVar11 + 0x18;
  } while( true );
}



/* Entry: 10772cd44; end: 10772ceef;  */

uint FUN_10772cd44(ulong param_1)

{
  uint uVar1;
  
  func_0x000107743614();
  func_0x0001077439d0();
  if ((param_1 & 1) == 0) {
    func_0x000107743130();
    func_0x0001000633dc();
    if ((param_1 & 1) == 0) {
      func_0x000107743130();
      func_0x0001000633dc();
      if ((param_1 & 1) == 0) {
        func_0x000107743130();
        func_0x0001000633dc();
        if ((param_1 & 1) == 0) {
          func_0x000107743130();
          func_0x0001000633dc();
          if ((param_1 & 1) == 0) {
            func_0x000107743130();
            func_0x0001000633dc();
            if ((param_1 & 1) == 0) {
              func_0x000107743130();
              func_0x0001000633dc();
              if ((param_1 & 1) == 0) {
                func_0x000107743130();
                func_0x0001000633dc();
                if ((param_1 & 1) == 0) {
                  func_0x000107743130();
                  func_0x0001000633dc();
                  if ((param_1 & 1) == 0) {
                    func_0x000107743130();
                    func_0x0001077435c4();
                    if ((param_1 & 1) == 0) {
                      func_0x000107743130();
                      func_0x0001077435c4();
                      if ((param_1 & 1) == 0) {
                        func_0x000107743130();
                        func_0x0001000633dc();
                        if ((param_1 & 1) == 0) {
                          func_0x000107743130();
                          func_0x0001000633dc();
                          if ((param_1 & 1) == 0) {
                            func_0x000107743130();
                            func_0x0001000633dc();
                            uVar1 = (uint)param_1;
                            if ((param_1 & 1) == 0) {
                              func_0x000107743130();
                              func_0x0001000633dc();
                              return uVar1 ^ 1;
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
        }
      }
    }
  }
  return 0;
}



/* Entry: 10772d220; end: 10772d24b;  */

bool FUN_10772d220(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010772d4bc();
  return param_1 + 0xbd0 != lVar1;
}



/* Entry: 10772d3f0; end: 10772d3f3;  */

void FUN_10772d3f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d1cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10772d52c; end: 10772d57f;  */

undefined8 *
FUN_10772d52c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puStack_b8;
  
  func_0x000107741b64();
  func_0x0001077437e0(0x4005bf0a8b145769);
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
  param_1[1] = param_2;
  func_0x0001072ca12c(param_1 + 2,param_3);
  puVar2 = param_1 + 5;
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  func_0x00010772d754(puVar2);
  uVar1 = *(uint *)(param_4 + 0x20);
  if (uVar1 != 0xffffffff) {
    puStack_b8 = puVar2;
    (*(code *)(&PTR_DAT_1109d1da8)[uVar1])(&puStack_b8,param_4 + 8);
    *(uint *)(param_1 + 8) = uVar1;
  }
  func_0x000104c2fe00(param_1 + 9,param_5);
  return param_1;
}



/* Entry: 10772d74c; end: 10772d753;  */

void FUN_10772d74c(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10772d90c; end: 10772d90f;  */

undefined8 * FUN_10772d90c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772da68; end: 10772da73;  */

void FUN_10772da68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x000107743300(param_1,param_2);
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



/* Entry: 10772de20; end: 10772de33;  */

undefined * FUN_10772de20(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar1[0x18] & 1) == 0) {
    lVar3 = **(long **)(puVar1 + 8);
    lVar2 = **(long **)(puVar1 + 0x10);
    while (lVar2 != lVar3) {
      func_0x000107743940();
    }
  }
  return puVar1;
}



/* Entry: 10772e030; end: 10772e117;  */

void FUN_10772e030(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uStack_70;
  
  func_0x000107742f4c();
  func_0x000107742774();
  func_0x0001077419ac();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107742b78();
      func_0x000107743c04();
      if ((bool)in_ZR) {
        puVar3 = &stack0x00000028;
        func_0x00010772d6b8();
        func_0x0001077420e4();
      }
      else {
        puVar3 = &stack0x00000028;
        func_0x00010772d6a0();
        param_2 = puVar3;
        func_0x0001077428fc();
      }
      func_0x000107742974(&stack0x00000028);
      break;
    }
    puVar3 = (undefined1 *)*unaff_x24;
    func_0x000107742638(&stack0x00000028);
    func_0x0001077431d4();
    if ((bool)in_ZR) {
      func_0x000107742e90();
      param_2 = puVar3;
      func_0x000107742e88();
    }
    else {
      func_0x000107742c64();
      param_2 = puVar3;
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    func_0x000107742688();
  } while ((bool)in_ZR);
  func_0x000107742aa8();
  func_0x000107741a80();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742698();
    func_0x00010772d714();
    func_0x000107742aa8();
    func_0x000107742904();
    uVar2 = *(undefined1 **)(puVar3 + 0x10) == param_2;
    if (*(undefined1 **)(puVar3 + 0x10) < param_2) {
      func_0x000107743614();
      func_0x00010772e1c8();
      lVar1 = *unaff_x20;
      lVar4 = lVar1 + unaff_x20[1] * 0x70;
      puVar3 = param_2;
      func_0x0001077430fc();
      func_0x00010772e2ec();
      func_0x00010772e2ec(lVar4,lVar4,puVar3);
      func_0x000107743a44();
      uStack_70 = 0;
      if (lVar1 != 0) {
        func_0x00010772e2b8(lVar1,unaff_x20[1]);
        func_0x000107743840();
        if (!(bool)uVar2) {
          __ZdlPv();
        }
      }
      *unaff_x20 = (long)param_2;
      unaff_x20[2] = unaff_x19;
      func_0x00010772e374(&uStack_70);
    }
    return;
  }
  return;
}



/* Entry: 10772e2a0; end: 10772e2a3;  */

void FUN_10772e2a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10772e5a8; end: 10772e617;  */

void FUN_10772e5a8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_w20;
  ulong uVar3;
  uint uVar4;
  
  func_0x000107742ea0();
  func_0x000104c2d634();
  uVar3 = 0;
  uVar4 = 0;
  if (0x1f < param_2) {
    param_2 = 0x20;
  }
  for (; param_2 != uVar3; uVar3 = uVar3 + 1) {
    iVar2 = unaff_w20;
    func_0x000104c2d654();
    uVar4 = iVar2 + uVar4 * 0x1f;
  }
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  func_0x00010774250c((double)uVar1);
  return;
}



/* Entry: 10772e8a8; end: 10772e8c7;  */

void FUN_10772e8a8(void)

{
  func_0x000107743a88();
  func_0x000107742a28();
  return;
}



/* Entry: 10772eb0c; end: 10772eb13;  */

void FUN_10772eb0c(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10772ed80; end: 10772edb7;  */

void FUN_10772ed80(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d1fc8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 10772f08c; end: 10772f093;  */

/* WARNING: Possible PIC construction at 0x000107774cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107774cf0) */
/* WARNING: Removing unreachable block (ram,0x000107774ca4) */

long FUN_10772f08c(long param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((((255.0 < param_4) || (param_4 < 0.0)) || (255.0 < param_3)) ||
     (((param_2 < 0.0 || (255.0 < param_2)) || (param_3 < 0.0)))) {
    func_0x0001077749c8(auStack_a8);
    func_0x000107774dcc();
    func_0x000107774de0();
    func_0x0001072625b4(auStack_60,auStack_78);
    param_5 = param_1;
  }
  else {
    bVar1 = true;
    *(ulong *)(param_1 + 0x10) = CONCAT44(0x3f800000,(float)((param_4 / 255.0) * 1.0));
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((param_3 / 255.0) * 1.0),(float)((param_2 / 255.0) * 1.0));
    *(undefined4 *)(param_1 + 0x40) = 1;
    func_0x000107774dec(uStack_28);
    if (bVar1) {
      return param_5;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    __Unwind_Resume();
  }
  func_0x000104c318bc(param_5 + 8);
  *(undefined4 *)(param_5 + 0x40) = 0;
  return param_5;
}



/* Entry: 10772f350; end: 10772f36f;  */

void FUN_10772f350(void)

{
  long unaff_x19;
  
  func_0x000107743a88();
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}



/* Entry: 10772f574; end: 10772f577;  */

undefined8 * FUN_10772f574(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772f724; end: 10772f787;  */

void FUN_10772f724(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  undefined1 uStack_109;
  undefined1 auStack_108 [120];
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
  func_0x000107741be8(extraout_x8);
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    func_0x0001077765a4(auStack_108,param_1 + 8,&uStack_109);
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
      func_0x000104c2fe00(auStack_108,0x113725b70);
      func_0x00010756c0ec();
      func_0x000107743a50();
    }
    return;
  }
  if ((bRam0000000113725a18 & 1) == 0) goto code_r0x00010772f814;
  goto code_r0x00010772f7e0;
}



/* Entry: 10772f958; end: 10772fa4f;  */

undefined8 * FUN_10772f958(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_a8 [24];
  undefined1 *puStack_90;
  undefined8 *puStack_88;
  undefined8 auStack_80 [8];
  undefined1 uStack_40;
  
  func_0x0001077429f8();
  func_0x000107741ca8();
  func_0x0001077432ec();
  if (((ulong)param_1 & 1) == 0) {
    in_ZR = 0;
    if (cRam0000000113822c88 == '\x01') {
      iVar5 = iRam0000000113725200 + 1;
      in_ZR = iRam0000000113725200 == 9;
      bVar1 = iRam0000000113725200 < 10;
      iRam0000000113725200 = iVar5;
      if (bVar1) {
        func_0x000107743c1c();
        func_0x00010724ef84();
        puVar3 = auStack_a8;
        func_0x0001005d466c();
        puStack_90 = puVar3;
        puStack_88 = param_2;
        func_0x0001003a91d4(&UNK_10f424f70);
        func_0x0001003a9204(auStack_80);
        func_0x000107742c9c();
        param_2 = auStack_80;
        func_0x00010786df04(9,param_2,1,0);
        param_1 = auStack_80;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    iVar5 = (int)param_2;
    func_0x00010774238c();
  }
  else {
    func_0x000107742be0(auStack_80);
    iVar5 = (int)param_2;
    func_0x000107751788();
    func_0x000107741da8(uStack_40);
    param_1 = auStack_80;
    func_0x000107267ed0();
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar4 = auStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107742904();
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  puVar4 = (undefined8 *)*puVar4;
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
  uVar2 = iVar5 == 1;
  if ((bool)uVar2) {
    func_0x0001077421a8();
    func_0x000107742a54();
    FUN_10772f958();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar2) {
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
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar4 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar4 + 9);
  func_0x00010772d754(puVar4 + 5);
  func_0x0001072c9884(puVar4 + 2);
  return puVar4;
}



/* Entry: 10772fd20; end: 10772fd33;  */

void FUN_10772fd20(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10772ff14; end: 1077301bb;  */

/* WARNING: Possible PIC construction at 0x00010772ffa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010772ffac) */

undefined *** FUN_10772ff14(undefined ***param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined4 extraout_w8;
  long extraout_x8;
  long lVar5;
  undefined ***extraout_x8_00;
  undefined **ppuVar6;
  long *unaff_x20;
  long unaff_x21;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1c0;
  undefined **ppuStack_178;
  undefined **appuStack_138 [16];
  undefined **appuStack_b8 [8];
  byte bStack_78;
  
  pppuVar2 = param_1;
  func_0x000107741cf4();
  if (param_3[1] == 0) {
LAB_107730100:
    func_0x00010774238c();
  }
  else {
    func_0x0001077429f8();
    lVar4 = *param_3;
    in_ZR = *(int *)(lVar4 + 0x68) == 3;
    if (!(bool)in_ZR) goto LAB_107730100;
    if ((extraout_x8 != 1) && (lVar5 = lVar4 + extraout_x8 * 0x70, *(int *)(lVar5 + -8) == 9)) {
      lVar5 = lVar5 + -0x70;
      ppuStack_1c0 = &PTR_DAT_1109d21f8;
      func_0x00010773021c(appuStack_138,lVar5,lVar4,lVar5,&ppuStack_1c0,&ppuStack_178);
      pppuVar1 = appuStack_b8;
      pppuVar3 = appuStack_138;
      pppuVar2 = param_1;
      goto code_r0x0001077301bc;
    }
    func_0x000107573ddc(lVar4);
    in_ZR = cRam0000000113822c89 == '\x01';
    if ((bool)in_ZR) {
      func_0x000107751788(appuStack_b8);
      if ((bStack_78 & 1) == 0) {
        func_0x00010774238c();
      }
      else {
        ppuStack_1e0 = &PTR_DAT_1109d2298;
        func_0x00010773044c(&ppuStack_1c0,appuStack_b8,*unaff_x20 + 0x70,
                            *unaff_x20 + unaff_x20[1] * 0x70);
        func_0x000107730414(&ppuStack_178,&ppuStack_1c0);
        func_0x000107743508(appuStack_138,&ppuStack_178);
        func_0x000107742ab8();
        func_0x000107742bf8();
        func_0x000104c3323c(&ppuStack_178);
        func_0x000107730afc(&ppuStack_1c0);
        func_0x000107730a04(&ppuStack_1e0);
      }
      pppuVar2 = appuStack_b8;
      func_0x000107267ed0();
    }
    else {
      func_0x0001077519dc();
      pppuVar2 = (undefined ***)0x0;
      if ((unaff_x21 == 0) || (func_0x000107297a3c(), pppuVar2 = (undefined ***)0x0, unaff_x21 == 0)
         ) goto LAB_107730100;
      ppuStack_178 = &PTR_DAT_1109d2328;
      func_0x00010773044c(appuStack_b8,lVar4 + 0x38,*unaff_x20 + 0x70,
                          *unaff_x20 + unaff_x20[1] * 0x70);
      func_0x000107730414(&ppuStack_1c0,appuStack_b8);
      func_0x0001077765a4(appuStack_138,&ppuStack_1c0,&ppuStack_1e0);
      func_0x000107742ab8();
      func_0x000107742bf8();
      func_0x000104c3323c(&ppuStack_1c0);
      func_0x000107730afc(appuStack_b8);
      pppuVar2 = &ppuStack_178;
      func_0x000107730a04();
    }
  }
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(&ppuStack_1c0);
  func_0x000107730afc(appuStack_b8);
  pppuVar3 = &ppuStack_178;
  func_0x000107730a04();
  func_0x000107742904();
  pppuVar1 = extraout_x8_00;
code_r0x0001077301bc:
  if (*(int *)(pppuVar3 + 0xf) != 0) {
    func_0x000107730690();
    pppuVar1 = pppuVar1 + 1;
    func_0x000107274918(pppuVar1,pppuVar3 + 1);
    *(undefined4 *)(pppuVar1 + 0xc) = extraout_w8;
    func_0x00010726cc2c();
    return pppuVar2;
  }
  func_0x000107730678();
  ppuVar6 = *pppuVar3;
  if (ppuVar6 != (undefined **)0x0) {
    pppuVar2 = pppuVar1 + 1;
    *(undefined1 *)pppuVar2 = 0;
    *(undefined4 *)(pppuVar1 + 0xd) = 0xffffffff;
    func_0x000107278710(pppuVar2,ppuVar6 + 1);
    return pppuVar2;
  }
  *(undefined4 *)(pppuVar1 + 0xd) = 0;
  return pppuVar3;
}



/* Entry: 107730728; end: 1077307c3;  */

long FUN_107730728(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x9;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [120];
  
  func_0x000107741ca8();
  lVar1 = *param_1;
  func_0x00010773021c(auStack_128,extraout_x9,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],
                      param_1[3],param_1[4]);
  func_0x0001077301bc(auStack_a8,auStack_128);
  func_0x000107277668(lVar1,auStack_a8);
  func_0x000107742bf8();
  func_0x000107743a70();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000107742ac8();
  func_0x00010726af18();
  func_0x000107743a70();
  func_0x000107742904();
  func_0x0001077307ec(lVar1 + 8);
  return lVar1;
}



/* Entry: 1077308c4; end: 1077308cf;  */

undefined ** FUN_1077308c4(void)

{
  return &PTR_DAT_1109d2268;
}



/* Entry: 107730a98; end: 107730ac7;  */

void FUN_107730a98(void)

{
  func_0x0001077428c0();
  func_0x000107743bec();
  func_0x000107742f68();
  func_0x000107742c9c();
  return;
}



/* Entry: 107730bcc; end: 107730bf3;  */

void FUN_107730bcc(undefined8 param_1)

{
  func_0x0001077438a8();
  func_0x0001077434d8(param_1,&PTR_DAT_1109d2388);
  func_0x0001077430ec();
  return;
}



/* Entry: 107730f50; end: 107730fbb;  */

undefined8 * FUN_107730f50(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x000107730dfc();
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



/* Entry: 1077311a8; end: 1077311bb;  */

void FUN_1077311a8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773136c; end: 107731377;  */

/* WARNING: Possible PIC construction at 0x000107731428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773142c) */
/* WARNING: Removing unreachable block (ram,0x000107731444) */
/* WARNING: Removing unreachable block (ram,0x000107731434) */
/* WARNING: Removing unreachable block (ram,0x000107731450) */
/* WARNING: Removing unreachable block (ram,0x000107731464) */
/* WARNING: Removing unreachable block (ram,0x000107731474) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x00010773145c) */
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_10773136c(undefined1 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar2 = param_2;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8(param_1);
    uVar3 = uVar2;
    func_0x000107751edc();
    *(ulong *)(puVar1 + -0x70) = uVar2;
    *(int *)(puVar1 + -0x68) = (int)uVar3;
    puVar1[-100] = (char)(uVar3 >> 0x20);
    if ((uVar3 >> 0x20 & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      func_0x000107608764(puVar1 + -0x60,&UNK_10f409262,8,puVar1 + -0x70,(ulong)(puVar1 + -0x70) | 4
                          ,puVar1 + -0x68);
      uVar2 = unaff_x19 + 8;
      func_0x00010756de48(uVar2,puVar1 + -0x60);
      func_0x0001077432d4();
    }
    func_0x000107741a50();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_2 = uVar2;
    func_0x0001077432d4();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0x90) = unaff_x20;
    *(ulong *)(puVar1 + -0x88) = uVar2;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x78) = &UNK_10773140c;
    unaff_x29 = puVar1 + -0x80;
    func_0x000107741b64();
    param_1 = puVar1 + -0x118;
    unaff_x30 = &UNK_10773142c;
    puVar1 = puVar1 + -0x120;
    unaff_x19 = uVar2;
  }
  return;
}



/* Entry: 107731538; end: 1077315a3;  */

undefined8 * FUN_107731538(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x000107731500();
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



/* Entry: 1077316d0; end: 1077316e3;  */

void FUN_1077316d0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107731874; end: 10773187f;  */

/* WARNING: Possible PIC construction at 0x0001077318f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077318f8) */
/* WARNING: Removing unreachable block (ram,0x000107731910) */
/* WARNING: Removing unreachable block (ram,0x000107731900) */
/* WARNING: Removing unreachable block (ram,0x00010773191c) */
/* WARNING: Removing unreachable block (ram,0x000107731930) */
/* WARNING: Removing unreachable block (ram,0x000107731940) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x000107731928) */
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_107731874(ulong param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107742ea0();
    func_0x000107741ca8();
    func_0x0001077432ec();
    if ((param_1 & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      unaff_x21 = puVar1 + -0xa8;
      func_0x000107743c1c();
      FUN_107751cd8();
      func_0x00010774257c();
      func_0x000107742e4c();
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)(puVar1 + -0xd0) = unaff_x20;
    *(undefined8 *)(puVar1 + -200) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_1077318d8;
    unaff_x29 = puVar1 + -0xc0;
    func_0x000107741b64();
    param_1 = 0;
    unaff_x30 = &UNK_1077318f8;
    puVar1 = puVar1 + -0x160;
  }
  return;
}



/* Entry: 107731b14; end: 107731b47;  */

undefined8 * FUN_107731b14(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107731b48(param_1,param_2,param_2 + param_3 * 0x70,param_3);
  return param_1;
}



/* Entry: 107731dd4; end: 107731f17;  */

/* WARNING: Possible PIC construction at 0x000107731e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107731e10) */
/* WARNING: Removing unreachable block (ram,0x000107731e1c) */
/* WARNING: Removing unreachable block (ram,0x000107731e64) */
/* WARNING: Removing unreachable block (ram,0x000107731ebc) */
/* WARNING: Removing unreachable block (ram,0x000107731eac) */
/* WARNING: Removing unreachable block (ram,0x000107731ec8) */
/* WARNING: Removing unreachable block (ram,0x000107731e24) */
/* WARNING: Removing unreachable block (ram,0x000107731e48) */
/* WARNING: Removing unreachable block (ram,0x000107731e3c) */
/* WARNING: Removing unreachable block (ram,0x000107731e54) */
/* WARNING: Removing unreachable block (ram,0x000107731e60) */
/* WARNING: Removing unreachable block (ram,0x000107731ed0) */
/* WARNING: Removing unreachable block (ram,0x000107731eec) */
/* WARNING: Removing unreachable block (ram,0x000107731ef4) */
/* WARNING: Removing unreachable block (ram,0x000107731f04) */
/* WARNING: Removing unreachable block (ram,0x000107731f10) */
/* WARNING: Removing unreachable block (ram,0x000107731ee0) */
/* WARNING: Removing unreachable block (ram,0x000107741bc8) */

void FUN_107731dd4(void)

{
  long lVar1;
  undefined4 auStack_2b8 [174];
  
  func_0x000107742d00();
  func_0x000107741cbc();
  lVar1 = 0x68;
  do {
    *(undefined4 *)((long)auStack_2b8 + lVar1) = 0;
    lVar1 = lVar1 + 0x70;
  } while (lVar1 != 0x298);
  return;
}



/* Entry: 1077321a8; end: 1077321bb;  */

void FUN_1077321a8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107732524; end: 10773252f;  */

undefined8 * FUN_107732524(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined8 *in_stack_00000068;
  
  puVar4 = *(undefined8 **)(param_2 + 0x108);
  func_0x000107742d00(param_1);
  func_0x000107742ea0();
  Hint_Prefetch(*puVar4,0,2,0);
  func_0x0001072cb490(*puVar4,puVar4,&DAT_10f4249c6);
  lVar8 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ (ulong)puVar4 >> 7;
  bVar3 = (byte)puVar4;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar6 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar5 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar2;
      puVar4 = (undefined8 *)(uVar1 + uVar6 * 0xa8);
      func_0x000107278484(puVar4,&DAT_10f4249c6);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x0001074d46a8(unaff_x19 + 8,unaff_x20[1] + uVar6 * 0xa8 + 0x38);
        *(undefined4 *)(in_stack_00000068 + 0xe) = 1;
        return in_stack_00000068;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar5 = lVar8 + uVar5;
  }
  func_0x00010774238c();
  return puVar4;
}



/* Entry: 1077327b0; end: 10773281b;  */

undefined8 * FUN_1077327b0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x000107732724();
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



/* Entry: 1077329a0; end: 1077329b3;  */

void FUN_1077329a0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107732cb4; end: 107732ce7;  */

void FUN_107732cb4(long param_1,long *param_2)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x107732ccc;
    func_0x000107742888();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if ((ulong)param_2 >> 0x3c != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    if (param_1 + 0x18 == *param_2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 107732f94; end: 107732f9b;  */

void FUN_107732f94(long param_1,double param_2,double param_3)

{
  *(double *)(param_1 + 8) = param_2 + param_3;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10773323c; end: 10773324f;  */

void FUN_10773323c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107733518; end: 1077335bf;  */

double * FUN_107733518(undefined8 *param_1)

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
    func_0x000107741ffc(-*pdVar2);
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



/* Entry: 107733778; end: 10773384f;  */

void FUN_107733778(double param_1,double param_2,double param_3,double *param_4)

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
      goto LAB_107733818;
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
LAB_107733818:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077423f0();
  func_0x0001077429e0();
  func_0x000107742904();
  *(double *)(extraout_x8 + 8) = param_1 * param_2 * param_3;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 107733b68; end: 107733b6b;  */

undefined8 * FUN_107733b68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733eac; end: 107733eef;  */

void FUN_107733eac(long param_1,double param_2,double param_3)

{
  if (param_3 == 0.0) {
    if (param_2 == 0.0) {
      param_2 = NAN;
      goto LAB_107733eec;
    }
    if (0.0 < param_2) {
      param_2 = INFINITY;
      goto LAB_107733eec;
    }
    if (param_2 < 0.0) {
      param_2 = -INFINITY;
      goto LAB_107733eec;
    }
  }
  param_2 = param_2 / param_3;
LAB_107733eec:
  *(double *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077341c4; end: 1077341d7;  */

void FUN_1077341c4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773448c; end: 107734533;  */

double * FUN_10773448c(undefined8 *param_1)

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
    func_0x000107741ffc(SQRT(*pdVar2));
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



/* Entry: 1077346ec; end: 1077347ab;  */

void FUN_1077346ec(undefined8 *param_1)

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
  _log();
  func_0x00010774250c();
  return;
}



/* Entry: 107734a14; end: 107734a17;  */

undefined8 * FUN_107734a14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107734c8c; end: 107734cab;  */

void FUN_107734c8c(void)

{
  _cos();
  func_0x00010774250c();
  return;
}



/* Entry: 107734ef8; end: 107734f0b;  */

void FUN_107734ef8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773518c; end: 107735233;  */

undefined8 * FUN_10773518c(undefined8 *param_1)

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
    _acos(*param_1);
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



/* Entry: 1077353ec; end: 1077354ab;  */

void FUN_1077353ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  int unaff_w21;
  undefined8 uVar5;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  plVar3 = (long *)*param_1;
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
  uVar2 = unaff_w21 == 1;
  if ((bool)uVar2) {
    func_0x0001077429b4();
    func_0x000107742df4(*plVar3);
    func_0x000107742c78();
    if ((bool)uVar2) {
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
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107741eec();
    func_0x000107742088();
    func_0x000107742904();
    uVar5 = 0x7ff0000000000000;
    puVar1 = (undefined8 *)*plVar3;
    for (lVar4 = plVar3[1] << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
      uVar5 = NEON_fminnm(*puVar1,uVar5);
      puVar1 = puVar1 + 1;
    }
    *(undefined8 *)(extraout_x8 + 8) = uVar5;
    *(undefined4 *)(extraout_x8 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1077357e0; end: 1077357e3;  */

undefined8 * FUN_1077357e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107735b18; end: 107735b43;  */

void FUN_107735b18(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010774314c();
  func_0x0001077754c8();
  func_0x0001077437d0();
  func_0x0001072dbe34(auStack_40);
  return;
}



/* Entry: 107735df4; end: 107735eaf;  */

undefined8 * FUN_107735df4(undefined8 *param_1)

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
    func_0x000107735d84();
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
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741d08();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773604c; end: 10773610b;  */

void FUN_10773604c(double param_1,double param_2,undefined8 *param_3)

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
  *(double *)(extraout_x8 + 8) = param_2 * (double)(long)(param_1 / param_2);
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}


