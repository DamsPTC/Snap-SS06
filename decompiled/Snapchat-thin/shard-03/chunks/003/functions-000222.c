/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10274cf78; end: 10274d003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274cf78(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  undefined1 *puVar21;
  long unaff_x20;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long unaff_x22;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  plVar17 = *(long **)(unaff_x20 + 0x10);
  lVar24 = *(long *)(unaff_x20 + 0x18);
  lVar14 = *(long *)(unaff_x20 + 0x20);
  lVar27 = *(long *)(unaff_x20 + 0x28);
  lVar16 = *(long *)(unaff_x20 + 0x30);
  lVar31 = *(long *)(unaff_x20 + 0x38);
  lVar33 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar13 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = 0x10274dfc0;
  plVar13[0x19] = lVar33;
  plVar13[0x1a] = lVar2;
  plVar13[0x17] = lVar16;
  plVar13[0x18] = lVar31;
  plVar13[0x16] = lVar27;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar13[0x14] = (long)plVar17;
  plVar13[0x15] = lVar14;
  plVar13[0x11] = (long)puVar5;
  plVar11 = (long *)0x350;
  func_0x000107c615b8();
  plVar13[0x1b] = (long)plVar11;
  *plVar11 = (long)plVar13;
  plVar11[1] = (long)FUN_10274b714;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11[0x4c] = (long)plVar17;
  plVar11[0x4b] = (long)(plVar13 + 0x11);
  plVar11[0x4a] = lVar24;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    pcVar3 = FUN_102749ad8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = plVar11[0x4a];
  if (uVar15 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar4 = uVar15;
    }
    func_0x000107c60480();
  }
  plVar11[0x4d] = uVar4;
  plVar11[0x4e] = _DAT_112ebbd78;
  plVar11[0x4f] = _DAT_112ebbd88;
  if (uVar4 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000102749c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar11[1])(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
LAB_102749c3c:
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *plVar11;
    plVar11 = (long *)*plVar11;
    *(long **)(lVar16 + 0x2a8) = plVar17;
    func_0x000107c615c0(*(undefined8 *)(lVar16 + 0x2a0));
    func_0x000107c61170(*(undefined8 *)(lVar16 + 0x298));
    if (plVar17 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        pcVar3 = FUN_102749cf0;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      pcVar3 = FUN_10274b33c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar12 = plVar11 + 8;
    if (*plVar12 == 0) {
      func_0x00010274dd58(plVar12,0x112ebbe10,&UNK_10dad4f60);
      lVar16 = 0;
    }
    else {
      plVar17 = plVar11 + 2;
      puVar22 = (ulong *)plVar11[0x4b];
      plVar11[3] = plVar11[9];
      *plVar17 = *plVar12;
      plVar11[5] = plVar11[0xb];
      plVar11[4] = plVar11[10];
      plVar11[7] = plVar11[0xd];
      plVar11[6] = plVar11[0xc];
      FUN_10274dd08(plVar17,plVar11 + 0x26);
      lVar16 = plVar11[0x26];
      func_0x0001000834e4(plVar11 + 0x27);
      FUN_10274dd08(plVar17,plVar11 + 0x2c);
      func_0x000107c61170(plVar11[0x2c]);
      uVar23 = *puVar22;
      uVar15 = uVar23;
      func_0x000107c61558();
      uVar4 = uVar23;
      if ((uVar15 & 1) == 0) {
        uVar4 = 0;
        func_0x000100fb5010(0,*(long *)(uVar23 + 0x10) + 1,1,uVar23);
      }
      uVar15 = *(ulong *)(uVar4 + 0x10);
      uVar23 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar15) {
        uVar23 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000100fb5010(uVar23,uVar15 + 1,1,uVar4);
      }
      puVar22 = (ulong *)plVar11[0x4b];
      *(ulong *)(uVar23 + 0x10) = uVar15 + 1;
      func_0x000100fb8694(plVar11 + 0x2d,uVar23 + uVar15 * 0x28 + 0x20);
      func_0x00010274dd58(plVar17,0x112ebbe18,&UNK_10dad4f68);
      *puVar22 = uVar23;
    }
    plVar11[0x56] = lVar16;
    uVar15 = plVar11[0x51];
    func_0x000107c61150(uVar15,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar15 & 1) == 0) {
LAB_102749e74:
      puVar34 = (undefined *)0x0;
      plVar11[0x57] = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar5 = (undefined *)plVar11[0x51];
      func_0x000107c4d1e0();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102749e74;
      uVar6 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      puVar34 = puVar5;
      func_0x000107c5fc54(puVar5,uVar6);
      func_0x000107c61170(puVar5);
      plVar11[0x57] = (long)puVar34;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar34 != (undefined *)0x0) {
        puVar5 = puVar34;
      }
    }
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar18 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar18 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar18 = puVar5;
      }
      func_0x000107c60480();
    }
    plVar11[0x59] = (long)puVar18;
    plVar11[0x58] = (ulong)puVar5 & 0xffffffffffffff8;
    plVar11[0x5a] = *(long *)(plVar11[0x4c] + plVar11[0x4e]);
    plVar11[0x5b] = *(long *)(plVar11[0x4c] + plVar11[0x4f]);
    plVar11[0x5c] = 0;
    func_0x000107c61434(puVar34);
    if (puVar18 != (undefined *)0x0) {
      uVar15 = 0;
      while( true ) {
        plVar11[0x5d] = uVar15;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((undefined *)plVar11[0x57] != (undefined *)0x0) {
          puVar5 = (undefined *)plVar11[0x57];
        }
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(plVar11[0x58] + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10274a474);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(puVar5 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar15;
          func_0x000101016c54();
        }
        plVar11[0x5e] = uVar4;
        plVar11[0x5f] = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10274a470);
          (*pcVar3)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar15 = uVar4;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar4);
        puVar34 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar4 = uVar15;
        func_0x000107c5ee20(uVar15,puVar5);
        plVar11[0x48] = 0;
        func_0x000107c4636c();
        plVar11[0x60] = (long)puVar34;
        func_0x000107c61170(uVar4);
        lVar16 = plVar11[0x48];
        if (puVar34 == (undefined *)0x0) {
          lVar33 = lVar16;
          func_0x000107c61174();
          func_0x000107c5ed30(lVar16);
          func_0x000107c61170(lVar33);
          func_0x000107c61654();
          func_0x000107c614ac(lVar16);
          func_0x00010006c090(uVar15,puVar5);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar15,puVar5);
          func_0x000100083b20(plVar11 + 0x32);
          lVar16 = plVar11[0x35];
          lVar33 = plVar11[0x36];
          func_0x0001000a8868(plVar11 + 0x32,lVar16);
          puVar5 = puVar34;
          (**(code **)(lVar33 + 8))(puVar34,lVar16,lVar33);
          func_0x0001000834e4(plVar11 + 0x32);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x000100083b20(plVar11 + 0x37);
            pcVar3 = (code *)plVar11[0x3a];
            lVar16 = plVar11[0x3b];
            plVar17 = plVar11 + 0x37;
            UNRECOVERED_JUMPTABLE = pcVar3;
            func_0x0001000a8868();
            piVar30 = *(int **)(lVar16 + 0x18);
            iVar1 = *piVar30;
            plVar13 = (long *)(ulong)(uint)piVar30[1];
            func_0x000107c615b8();
            plVar11[0x61] = (long)plVar13;
            *plVar13 = (long)plVar11;
            plVar13[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar30))(puVar34,pcVar3,lVar16);
              return;
            }
            goto LAB_10274a564;
          }
          func_0x000107c61170(puVar34);
        }
        plVar11[0x17] = 0;
        plVar11[0x16] = 0;
        plVar11[0x19] = 0;
        plVar11[0x18] = 0;
        plVar11[0x15] = 0;
        plVar11[0x14] = 0;
        lVar16 = plVar11[0x5f];
        lVar33 = plVar11[0x59];
        func_0x000107c61170(plVar11[0x5e]);
        func_0x00010274dd58(plVar11 + 0x14,0x112ebbe10,&UNK_10dad4f60);
        if (lVar16 == lVar33) break;
        uVar15 = plVar11[0x5f];
      }
    }
    lVar16 = plVar11[0x56];
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)plVar11[0x57] != (undefined *)0x0) {
      puVar5 = (undefined *)plVar11[0x57];
    }
    func_0x000107c6142c(puVar5);
    lVar33 = plVar11[0x5c];
    if (lVar16 == 0) {
      if (lVar33 != 0) {
        lVar24 = plVar11[0x51];
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar16 = 0;
        lVar33 = plVar11[0x5c];
        goto LAB_10274a0e0;
      }
      lVar16 = plVar11[0x51];
      plVar13 = (long *)plVar11[0x50];
      func_0x000107c6142c(plVar11[0x57]);
      func_0x000107c615f0(lVar16);
      plVar17 = plVar13;
      func_0x000107c61550();
      plVar20 = (long *)plVar11[0x50];
      if ((((int)plVar17 == 0) || (((ulong)plVar13 >> 0x3e & 1) != 0)) ||
         (plVar19 = plVar20, (long)plVar20 < 0)) {
        if ((ulong)plVar20 >> 0x3e == 0) {
          plVar17 = *(long **)(((ulong)plVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar17 = (long *)((ulong)plVar13 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar20) {
            plVar17 = plVar20;
          }
          func_0x000107c60480(plVar17);
          plVar20 = (long *)plVar11[0x50];
        }
        plVar19 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar17 + 1,1,plVar20);
        plVar13 = plVar19;
      }
      uVar4 = (ulong)plVar13 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar4 + 0x10);
      plVar17 = plVar19;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar15) {
        plVar17 = (long *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_102738e9c(plVar17,uVar15 + 1,1,plVar19);
        uVar4 = (ulong)plVar17 & 0xffffffffffffff8;
      }
      plVar13 = (long *)plVar11[0x51];
      *(ulong *)(uVar4 + 0x10) = uVar15 + 1;
      *(long **)(uVar4 + uVar15 * 8 + 0x20) = plVar13;
      func_0x000107c615e8();
    }
    else {
      lVar24 = plVar11[0x56];
      lVar16 = lVar24;
      if (lVar33 == 0) {
        func_0x000107c61174();
        plVar17 = plVar11 + 0x57;
      }
      else {
LAB_10274a0e0:
        plVar17 = plVar11 + 0x5c;
        lVar27 = plVar11[0x57];
        func_0x000107c61434(lVar33);
        func_0x000107c61174(lVar16);
        func_0x000107c6142c(lVar27);
      }
      lVar16 = *plVar17;
      uVar15 = plVar11[0x51];
      func_0x000107c61150(uVar15,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar15 & 1) == 0) {
LAB_10274a16c:
        uVar4 = 0;
      }
      else {
        uVar15 = plVar11[0x51];
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar15 == 0) goto LAB_10274a16c;
        uVar6 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar4 = uVar15;
        func_0x000107c5fc54(uVar15,uVar6);
        func_0x000107c61170();
      }
      plVar13 = (long *)plVar11[0x50];
      FUN_10274ce90();
      uVar23 = uVar15;
      func_0x000107c610f8();
      lVar33 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar23 + _DAT_112ebbdc8) = 0;
      lVar27 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar23 + _DAT_112ebbdd0) = 0;
      *(long *)(uVar23 + _DAT_112ebbdc0) = lVar24;
      *(long *)(uVar23 + lVar33) = lVar16;
      *(ulong *)(uVar23 + lVar27) = uVar4;
      plVar11[0x46] = uVar23;
      plVar11[0x47] = uVar15;
      plVar20 = plVar11 + 0x46;
      func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
      plVar17 = plVar13;
      func_0x000107c61550();
      plVar19 = (long *)plVar11[0x50];
      if ((((int)plVar17 == 0) || (((ulong)plVar13 >> 0x3e & 1) != 0)) ||
         (plVar7 = plVar19, (long)plVar19 < 0)) {
        if ((ulong)plVar19 >> 0x3e == 0) {
          plVar17 = *(long **)(((ulong)plVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar17 = (long *)((ulong)plVar13 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar19) {
            plVar17 = plVar19;
          }
          func_0x000107c60480(plVar17);
          plVar19 = (long *)plVar11[0x50];
        }
        plVar7 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar17 + 1,1,plVar19);
        plVar13 = plVar7;
      }
      uVar4 = (ulong)plVar13 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar4 + 0x10);
      plVar17 = plVar7;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar15) {
        plVar17 = (long *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_102738e9c(plVar17,uVar15 + 1,1,plVar7);
        uVar4 = (ulong)plVar17 & 0xffffffffffffff8;
      }
      plVar13 = (long *)plVar11[0x5c];
      lVar33 = plVar11[0x56];
      lVar16 = plVar11[0x51];
      *(ulong *)(uVar4 + 0x10) = uVar15 + 1;
      *(long **)(uVar4 + uVar15 * 8 + 0x20) = plVar20;
      func_0x000107c615e8(lVar16);
      func_0x000107c61170(lVar33);
      func_0x000107c6142c();
    }
    uVar4 = plVar11[0x52];
    if (uVar4 == plVar11[0x4d]) {
      UNRECOVERED_JUMPTABLE = (code *)plVar11[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar17);
        return;
      }
    }
    else {
      plVar11[0x50] = (long)plVar17;
      UNRECOVERED_JUMPTABLE = (code *)plVar11[0x4a];
      if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10274a510);
          (*pcVar3)();
        }
        uVar15 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar4 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar15 = uVar4;
        FUN_10274d138();
      }
      plVar11[0x51] = uVar15;
      plVar11[0x52] = uVar4 + 1;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10274a50c);
        (*pcVar3)();
      }
      func_0x000107c4e090();
      func_0x000107c61180();
      plVar11[0x53] = uVar15;
      plVar13 = (long *)0x120;
      func_0x000107c615b8();
      plVar11[0x54] = (long)plVar13;
      *plVar13 = (long)plVar11;
      plVar13[1] = (long)FUN_102749c40;
      plVar17 = (long *)plVar11[0x4c];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto FUN_10274bdac;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *plVar11;
    plVar11 = (long *)*plVar11;
    *(long **)(lVar16 + 0x310) = plVar13;
    *(long **)(lVar16 + 0x318) = plVar17;
    func_0x000107c615c0(*(undefined8 *)(lVar16 + 0x308));
    if (plVar17 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        pcVar3 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      pcVar3 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar21 = (undefined1 *)plVar11[0x62];
    func_0x0001000834e4(plVar11 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar11[100] = (long)puVar21;
    puVar8 = puVar21;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar8 == (undefined1 *)0x0) {
      lVar16 = plVar11[0x62];
      lVar33 = plVar11[0x60];
      lVar24 = plVar11[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar8,0,0);
      *puVar8 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar24);
      func_0x000107c61170(puVar21);
      func_0x000107c615e8(lVar16);
      func_0x000107c61170(lVar33);
      lVar16 = plVar11[0x5c];
      puVar34 = (undefined *)plVar11[0x57];
      lVar33 = plVar11[0x56];
      lVar24 = plVar11[0x51];
      lVar27 = plVar11[0x50];
      func_0x000107c61170(plVar11[0x5e]);
      func_0x000107c615e8(lVar24);
      func_0x000107c6142c(lVar27);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar34 != (undefined *)0x0) {
        puVar5 = puVar34;
      }
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(lVar33);
      func_0x000107c6142c(lVar16);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar11[1])();
        return;
      }
    }
    else {
      puVar9 = puVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar8);
      plVar11[0x65] = (long)puVar9;
      plVar11[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar11 + 0x41);
      lVar16 = plVar11[0x44];
      lVar33 = plVar11[0x45];
      func_0x0001000a8868(plVar11 + 0x41,lVar16);
      piVar30 = *(int **)(lVar33 + 0x20);
      iVar1 = *piVar30;
      puVar10 = (undefined8 *)(ulong)(uint)piVar30[1];
      func_0x000107c615b8();
      plVar11[0x67] = (long)puVar10;
      *puVar10 = plVar11;
      puVar10[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar30))
                  (puVar10,plVar11 + 0x3c,puVar21,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar11 + 0x49,lVar16);
        return;
      }
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = plVar11[0x57];
    func_0x000107c61170(plVar11[0x60]);
    func_0x000107c6142c(lVar16);
    func_0x0001000834e4(plVar11 + 0x37);
    lVar33 = plVar11[99];
    lVar16 = plVar11[0x5c];
    puVar34 = (undefined *)plVar11[0x57];
    lVar24 = plVar11[0x56];
    lVar27 = plVar11[0x51];
    lVar31 = plVar11[0x50];
    func_0x000107c61170(plVar11[0x5e]);
    func_0x000107c615e8(lVar27);
    func_0x000107c6142c(lVar31);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar34 != (undefined *)0x0) {
      puVar5 = puVar34;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(lVar24);
    func_0x000107c6142c(lVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar11[1])();
      return;
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *plVar11;
    puVar10 = *(undefined8 **)(lVar16 + 0x338);
    lVar24 = *plVar11;
    func_0x000107c615c0();
    if (lVar33 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        pcVar3 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar16 + 0x340) = *(undefined8 *)(lVar16 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        pcVar3 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar37 = *(undefined8 *)(lVar24 + 0x340);
    uVar6 = *(undefined8 *)(lVar24 + 0x330);
    uVar25 = *(undefined8 *)(lVar24 + 0x328);
    uVar28 = *(undefined8 *)(lVar24 + 800);
    uVar32 = *(undefined8 *)(lVar24 + 0x310);
    uVar35 = *(undefined8 *)(lVar24 + 0x300);
    uVar36 = *(undefined8 *)(lVar24 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar10,0,0);
    *puVar10 = uVar37;
    func_0x000107c6142c(uVar36);
    func_0x00010006c090(uVar25,uVar6);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar28);
    func_0x000107c615e8(uVar32);
    func_0x0001000834e4(lVar24 + 0x208);
    uVar6 = *(undefined8 *)(lVar24 + 0x2e0);
    puVar34 = *(undefined **)(lVar24 + 0x2b8);
    uVar25 = *(undefined8 *)(lVar24 + 0x2b0);
    uVar28 = *(undefined8 *)(lVar24 + 0x288);
    uVar32 = *(undefined8 *)(lVar24 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar24 + 0x2f0));
    func_0x000107c615e8(uVar28);
    func_0x000107c6142c(uVar32);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar34 != (undefined *)0x0) {
      puVar5 = puVar34;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(uVar25);
    func_0x000107c6142c(uVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar24 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar28 = *(undefined8 *)(lVar24 + 0x330);
    uVar25 = *(undefined8 *)(lVar24 + 0x328);
    uVar32 = *(undefined8 *)(lVar24 + 800);
    uVar35 = *(undefined8 *)(lVar24 + 0x310);
    uVar36 = *(undefined8 *)(lVar24 + 0x300);
    func_0x0001000834e4(lVar24 + 0x208);
    puVar5 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar6 = uVar25;
    func_0x000107c5ee20(uVar25,uVar28);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar6);
    func_0x00010006c090(uVar25,uVar28);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar32);
    func_0x000107c615e8(uVar35);
    plVar17 = (long *)(lVar24 + 0xa0);
    *plVar17 = (long)puVar5;
    func_0x000100fb8694(lVar24 + 0x1e0,lVar24 + 0xa8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar17 == 0) goto LAB_10274b260;
    plVar11 = (long *)(lVar24 + 0x70);
    uVar15 = *(ulong *)(lVar24 + 0x2e0);
    *(undefined8 *)(lVar24 + 0x78) = *(undefined8 *)(lVar24 + 0xa8);
    *plVar11 = *plVar17;
    *(undefined8 *)(lVar24 + 0x88) = *(undefined8 *)(lVar24 + 0xb8);
    *(undefined8 *)(lVar24 + 0x80) = *(undefined8 *)(lVar24 + 0xb0);
    *(undefined8 *)(lVar24 + 0x98) = *(undefined8 *)(lVar24 + 200);
    *(undefined8 *)(lVar24 + 0x90) = *(undefined8 *)(lVar24 + 0xc0);
    if (uVar15 == 0) {
      uVar15 = *(ulong *)(lVar24 + 0x2b8);
      if (uVar15 != 0) {
        func_0x000107c61434(uVar15);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar11,lVar24 + 0xd0);
      uVar6 = *(undefined8 *)(lVar24 + 0xd0);
      uVar4 = uVar15;
      func_0x000107c61550();
      if ((uVar15 >> 0x3e != 0) || ((uVar4 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar24 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar3)();
      }
      lVar16 = (uVar15 & 0xffffffffffffff8) + *(ulong *)(lVar24 + 0x2e8) * 8;
      uVar25 = *(undefined8 *)(lVar16 + 0x20);
      *(undefined8 *)(lVar16 + 0x20) = uVar6;
      func_0x000107c61170(uVar25);
      func_0x0001000834e4(lVar24 + 0xd8);
    }
    puVar22 = *(ulong **)(lVar24 + 600);
    FUN_10274dd08(plVar11,lVar24 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar24 + 0x100));
    uVar29 = *puVar22;
    uVar4 = uVar29;
    func_0x000107c61558();
    uVar23 = uVar29;
    if ((uVar4 & 1) == 0) {
      uVar23 = 0;
      func_0x000100fb5010(0,*(long *)(uVar29 + 0x10) + 1,1,uVar29);
    }
    uVar4 = *(ulong *)(uVar23 + 0x10);
    uVar29 = uVar23;
    if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar4) {
      uVar29 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
      func_0x000100fb5010(uVar29,uVar4 + 1,1,uVar23);
    }
    uVar6 = *(undefined8 *)(lVar24 + 0x2f0);
    puVar22 = *(ulong **)(lVar24 + 600);
    *(ulong *)(uVar29 + 0x10) = uVar4 + 1;
    func_0x000100fb8694(lVar24 + 0x108,uVar29 + uVar4 * 0x28 + 0x20);
    func_0x000107c61170(uVar6);
    func_0x00010274dd58(plVar11,0x112ebbe18,&UNK_10dad4f68);
    *puVar22 = uVar29;
    uVar4 = *(ulong *)(lVar24 + 0x2f8);
    *(ulong *)(lVar24 + 0x2e0) = uVar15;
    if (uVar4 != *(ulong *)(lVar24 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar24 + 0x2e8) = uVar4;
        puVar34 = puVar5;
        if (*(undefined **)(lVar24 + 0x2b8) != (undefined *)0x0) {
          puVar34 = *(undefined **)(lVar24 + 0x2b8);
        }
        if (((ulong)puVar34 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar24 + 0x2c0) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar3)();
          }
          uVar15 = *(ulong *)(puVar34 + uVar4 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar15 = uVar4;
          func_0x000101016c54();
        }
        *(ulong *)(lVar24 + 0x2f0) = uVar15;
        *(ulong *)(lVar24 + 0x2f8) = uVar4 + 1;
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar3)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar4 = uVar15;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar15);
        puVar18 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar15 = uVar4;
        func_0x000107c5ee20(uVar4,puVar34);
        *(undefined8 *)(lVar24 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar24 + 0x300) = puVar18;
        func_0x000107c61170(uVar15);
        uVar6 = *(undefined8 *)(lVar24 + 0x240);
        if (puVar18 == (undefined *)0x0) {
          uVar25 = uVar6;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar6);
          func_0x000107c61170(uVar25);
          func_0x000107c61654();
          func_0x000107c614ac(uVar6);
          func_0x00010006c090(uVar4,puVar34);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar4,puVar34);
          func_0x000100083b20(lVar24 + 400);
          uVar6 = *(undefined8 *)(lVar24 + 0x1a8);
          lVar16 = *(long *)(lVar24 + 0x1b0);
          func_0x0001000a8868(lVar24 + 400,uVar6);
          puVar34 = puVar18;
          (**(code **)(lVar16 + 8))(puVar18,uVar6,lVar16);
          func_0x0001000834e4(lVar24 + 400);
          if (((ulong)puVar34 & 1) != 0) {
            func_0x000100083b20(lVar24 + 0x1b8);
            uVar6 = *(undefined8 *)(lVar24 + 0x1d0);
            lVar16 = *(long *)(lVar24 + 0x1d8);
            func_0x0001000a8868(lVar24 + 0x1b8,uVar6);
            piVar30 = *(int **)(lVar16 + 0x18);
            iVar1 = *piVar30;
            plVar17 = (long *)(ulong)(uint)piVar30[1];
            func_0x000107c615b8();
            *(long **)(lVar24 + 0x308) = plVar17;
            *plVar17 = lVar24;
            plVar17[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar30))(puVar18,uVar6,lVar16);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar18);
        }
        *(undefined8 *)(lVar24 + 0xb8) = 0;
        *(undefined8 *)(lVar24 + 0xb0) = 0;
        *(undefined8 *)(lVar24 + 200) = 0;
        *(undefined8 *)(lVar24 + 0xc0) = 0;
        *(undefined8 *)(lVar24 + 0xa8) = 0;
        *plVar17 = 0;
LAB_10274b260:
        lVar16 = *(long *)(lVar24 + 0x2f8);
        lVar33 = *(long *)(lVar24 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar24 + 0x2f0));
        func_0x00010274dd58(plVar17,0x112ebbe10,&UNK_10dad4f60);
        if (lVar16 == lVar33) break;
        uVar4 = *(ulong *)(lVar24 + 0x2f8);
      }
    }
    lVar16 = *(long *)(lVar24 + 0x2b0);
    if (*(undefined **)(lVar24 + 0x2b8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar24 + 0x2b8);
    }
    func_0x000107c6142c(puVar5);
    lVar33 = *(long *)(lVar24 + 0x2e0);
    if (lVar16 == 0) {
      if (lVar33 != 0) {
        uVar25 = *(undefined8 *)(lVar24 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar6 = 0;
        lVar33 = *(long *)(lVar24 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar6 = *(undefined8 *)(lVar24 + 0x288);
      uVar23 = *(ulong *)(lVar24 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar24 + 0x2b8));
      func_0x000107c615f0(uVar6);
      uVar15 = uVar23;
      func_0x000107c61550();
      uVar4 = *(ulong *)(lVar24 + 0x280);
      if ((((int)uVar15 == 0) || ((uVar23 >> 0x3e & 1) != 0)) || ((long)uVar4 < 0)) {
        if (uVar4 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar15 = uVar23 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar15 = uVar4;
          }
          func_0x000107c60480(uVar15);
          uVar4 = *(ulong *)(lVar24 + 0x280);
        }
        uVar23 = 0;
        FUN_102738e9c(0,uVar15 + 1,1,uVar4);
        uVar4 = uVar23;
      }
      uVar23 = uVar23 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar23 + 0x10);
      uVar29 = uVar4;
      if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar15) {
        uVar29 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
        FUN_102738e9c(uVar29,uVar15 + 1,1,uVar4);
        uVar23 = uVar29 & 0xffffffffffffff8;
      }
      uVar6 = *(undefined8 *)(lVar24 + 0x288);
      *(ulong *)(uVar23 + 0x10) = uVar15 + 1;
      *(undefined8 *)(uVar23 + uVar15 * 8 + 0x20) = uVar6;
      func_0x000107c615e8();
    }
    else {
      uVar25 = *(undefined8 *)(lVar24 + 0x2b0);
      uVar6 = uVar25;
      if (lVar33 == 0) {
        func_0x000107c61174();
        puVar10 = (undefined8 *)(lVar24 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar10 = (undefined8 *)(lVar24 + 0x2e0);
        uVar28 = *(undefined8 *)(lVar24 + 0x2b8);
        func_0x000107c61434(lVar33);
        func_0x000107c61174(uVar6);
        func_0x000107c6142c(uVar28);
      }
      uVar6 = *puVar10;
      uVar15 = *(ulong *)(lVar24 + 0x288);
      func_0x000107c61150(uVar15,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar15 & 1) == 0) {
LAB_10274ae04:
        uVar4 = 0;
      }
      else {
        uVar15 = *(ulong *)(lVar24 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar15 == 0) goto LAB_10274ae04;
        uVar28 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar4 = uVar15;
        func_0x000107c5fc54(uVar15,uVar28);
        func_0x000107c61170();
      }
      uVar26 = *(ulong *)(lVar24 + 0x280);
      FUN_10274ce90();
      uVar23 = uVar15;
      func_0x000107c610f8();
      lVar16 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar23 + _DAT_112ebbdc8) = 0;
      lVar33 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar23 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar23 + _DAT_112ebbdc0) = uVar25;
      *(undefined8 *)(uVar23 + lVar16) = uVar6;
      *(ulong *)(uVar23 + lVar33) = uVar4;
      *(ulong *)(lVar24 + 0x230) = uVar23;
      *(ulong *)(lVar24 + 0x238) = uVar15;
      lVar16 = lVar24 + 0x230;
      func_0x000107c61154(lVar16,PTR_s_init_1125d9248);
      uVar15 = uVar26;
      func_0x000107c61550();
      uVar4 = *(ulong *)(lVar24 + 0x280);
      if ((((int)uVar15 == 0) || ((uVar26 >> 0x3e & 1) != 0)) || (uVar15 = uVar4, (long)uVar4 < 0))
      {
        if (uVar4 >> 0x3e == 0) {
          uVar23 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar23 = uVar26 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar23 = uVar4;
          }
          func_0x000107c60480(uVar23);
          uVar4 = *(ulong *)(lVar24 + 0x280);
        }
        uVar15 = 0;
        FUN_102738e9c(0,uVar23 + 1,1,uVar4);
        uVar26 = uVar15;
      }
      uVar26 = uVar26 & 0xffffffffffffff8;
      uVar4 = *(ulong *)(uVar26 + 0x10);
      uVar29 = uVar15;
      if (*(ulong *)(uVar26 + 0x18) >> 1 <= uVar4) {
        uVar29 = (ulong)(1 < *(ulong *)(uVar26 + 0x18));
        FUN_102738e9c(uVar29,uVar4 + 1,1,uVar15);
        uVar26 = uVar29 & 0xffffffffffffff8;
      }
      uVar25 = *(undefined8 *)(lVar24 + 0x2e0);
      uVar28 = *(undefined8 *)(lVar24 + 0x2b0);
      uVar6 = *(undefined8 *)(lVar24 + 0x288);
      *(ulong *)(uVar26 + 0x10) = uVar4 + 1;
      *(long *)(uVar26 + uVar4 * 8 + 0x20) = lVar16;
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar28);
      func_0x000107c6142c(uVar25);
    }
    uVar4 = *(ulong *)(lVar24 + 0x290);
    if (uVar4 == *(ulong *)(lVar24 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar24 + 8))(uVar29);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = *(undefined8 *)(lVar24 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar24 + 0x288));
      func_0x000107c6142c(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar24 + 8))();
      return;
    }
    *(ulong *)(lVar24 + 0x280) = uVar29;
    uVar15 = *(ulong *)(lVar24 + 0x250);
    if ((uVar15 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar3)();
      }
      uVar15 = *(ulong *)(uVar15 + uVar4 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar15 = uVar4;
      FUN_10274d138();
    }
    *(ulong *)(lVar24 + 0x288) = uVar15;
    *(ulong *)(lVar24 + 0x290) = uVar4 + 1;
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar3)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar24 + 0x298) = uVar15;
    plVar13 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar24 + 0x2a0) = plVar13;
    *plVar13 = lVar24;
    plVar13[1] = (long)FUN_102749c40;
    plVar17 = *(long **)(lVar24 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) goto LAB_10274b338;
    plVar12 = (long *)(lVar24 + 0x40);
  }
  else {
    uVar15 = plVar11[0x4a];
    plVar11[0x50] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar15 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar15 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102749c3c);
        (*pcVar3)();
      }
      uVar15 = *(ulong *)(uVar15 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar15 = 0;
      FUN_10274d138();
    }
    plVar11[0x51] = uVar15;
    plVar11[0x52] = 1;
    func_0x000107c4e090();
    func_0x000107c61180();
    plVar11[0x53] = uVar15;
    plVar13 = (long *)0x120;
    func_0x000107c615b8();
    plVar11[0x54] = (long)plVar13;
    *plVar13 = (long)plVar11;
    plVar13[1] = (long)FUN_102749c40;
    plVar17 = (long *)plVar11[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) goto LAB_102749c3c;
    plVar12 = plVar11 + 8;
  }
FUN_10274bdac:
  plVar13[0x18] = uVar15;
  plVar13[0x19] = (long)plVar17;
  plVar13[0x17] = (long)plVar12;
  pcVar3 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 10274d004; end: 10274d037;  */

void FUN_10274d004(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10274d038; end: 10274d0a3;  */

void FUN_10274d038(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10274dfc4;
  plVar3[5] = lVar2;
  plVar3[6] = lVar4;
  plVar3[3] = param_1;
  plVar3[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274b478,0,0);
  return;
}



/* Entry: 10274d0a4; end: 10274d0fb;  */

void FUN_10274d0a4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10274d0fc;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102749174,0,0);
  return;
}



/* Entry: 10274d0fc; end: 10274d137;  */

void FUN_10274d0fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274d134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274d138; end: 10274d2db;  */

ulong FUN_10274d138(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274d210);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274d214);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000022,0x800000010f0b9990);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10274d2dc);
  (*pcVar2)();
}



/* Entry: 10274d2dc; end: 10274d347;  */

void FUN_10274d2dc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d74e78;
  plVar5 = (long *)&UNK_10db629f0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10274d348; end: 10274d35f;  */

void FUN_10274d348(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274d360,0,0);
  return;
}



/* Entry: 10274d360; end: 10274d427;  */

void FUN_10274d360(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010274d3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10274d428;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110543900;
  func_0x000107c613fc(&UNK_110543900,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_10274dd98,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10274d428; end: 10274d467;  */

void FUN_10274d428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274d468,0,0);
  return;
}



/* Entry: 10274d468; end: 10274d477;  */

void FUN_10274d468(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010274d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10274d478; end: 10274d4c7;  */

/* WARNING: Removing unreachable block (ram,0x00010274d4fc) */
/* WARNING: Removing unreachable block (ram,0x00010274d520) */
/* WARNING: Removing unreachable block (ram,0x00010274d504) */
/* WARNING: Removing unreachable block (ram,0x00010274d5f4) */
/* WARNING: Removing unreachable block (ram,0x00010274d510) */
/* WARNING: Removing unreachable block (ram,0x00010274d518) */
/* WARNING: Removing unreachable block (ram,0x00010274d564) */
/* WARNING: Removing unreachable block (ram,0x00010274d578) */
/* WARNING: Removing unreachable block (ram,0x00010274d584) */
/* WARNING: Removing unreachable block (ram,0x00010274d58c) */

ulong FUN_10274d478(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_10274d5f8(uVar4,uVar3,FUN_10274d2dc);
  if (-1 < (long)uVar4) {
    FUN_10274d678(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10274d5f4);
  (*pcVar1)();
}



/* Entry: 10274d4c8; end: 10274d5f7;  */

ulong FUN_10274d4c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10274d5f8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10274d5f8(uVar2,uVar4,FUN_10274d2dc);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10274d5f4);
      (*pcVar1)();
    }
    FUN_10274d678(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10274d5f8; end: 10274d677;  */

undefined * FUN_10274d5f8(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10274d678; end: 10274d78f;  */

long FUN_10274d678(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10274d78c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10274d790);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10274d788);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10274d790; end: 10274d7a7;  */

void FUN_10274d790(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274d7a8,0,0);
  return;
}



/* Entry: 10274d7a8; end: 10274d863;  */

void FUN_10274d7a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x60) + 0x10);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    func_0x000100fb8650(*(long *)(unaff_x22 + 0x60) + 0x20,unaff_x22 + 0x10);
    func_0x000100fb8694(unaff_x22 + 0x10,unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    piVar4 = *(int **)(lVar5 + 0x18);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10274d864;
                    /* WARNING: Could not recover jumptable at 0x00010274d848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274d864; end: 10274d8c3;  */

void FUN_10274d864(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10274d8c4;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x10274dfb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10274d8c4; end: 10274d99b;  */

void FUN_10274d8c4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x38);
  if (lVar3 + 1 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010274d908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x70);
  *(long *)(unaff_x22 + 0x70) = lVar5 + 1;
  func_0x000100fb8650(*(long *)(unaff_x22 + 0x60) + lVar5 * 0x28 + 0x48,unaff_x22 + 0x10);
  func_0x000100fb8694(unaff_x22 + 0x10,unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar5 + 0x18);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10274d864;
                    /* WARNING: Could not recover jumptable at 0x00010274d998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar5);
  return;
}



/* Entry: 10274d99c; end: 10274d9ff;  */

uint FUN_10274d99c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c5d0f0();
  if ((uint)lVar2 < 3) {
    func_0x000107c49a98();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar1 = 1;
    }
    else {
      lVar2 = param_1;
      func_0x000107c3ebcc();
      func_0x000107c61170(param_1);
      uVar1 = (uint)lVar2 ^ 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10274da00; end: 10274da87;  */

void FUN_10274da00(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10274da4c;
  plVar2[3] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274caf4,lVar1,lVar3);
  return;
}



/* Entry: 10274da88; end: 10274daf7;  */

void FUN_10274da88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10274dfc8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10274daf8; end: 10274db43;  */

void FUN_10274daf8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10274dfcc;
  plVar2[3] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274c778,lVar1,lVar3);
  return;
}



/* Entry: 10274db44; end: 10274dbb3;  */

void FUN_10274db44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10274dfd0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10274dbb4; end: 10274dbf3;  */

void FUN_10274dbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbe08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad507c;
  func_0x000107c61520(&UNK_10dad507c,&UNK_110543998);
  puRam0000000112ebbe08 = puVar1;
  return;
}



/* Entry: 10274dbf4; end: 10274dc27;  */

void FUN_10274dbf4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  FUN_10274bb70(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)();
  return;
}



/* Entry: 10274dc28; end: 10274dc53;  */

void FUN_10274dc28(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10274dc54; end: 10274dc9f;  */

void FUN_10274dc54(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  FUN_10274bb70(*(undefined8 *)(unaff_x20 + 0x10));
  (*pcVar1)(param_1,param_2);
  return;
}



/* Entry: 10274dca0; end: 10274dcbb;  */

void FUN_10274dca0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10274dcbc; end: 10274dd07;  */

void FUN_10274dcbc(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10274dfd4;
  plVar1[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274c35c,0,0);
  return;
}



/* Entry: 10274dd08; end: 10274dd97;  */

undefined8 FUN_10274dd08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ebbe18;
  func_0x0001000285a8(0x112ebbe18,&UNK_10dad4f68);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10274dd98; end: 10274dde3;  */

void FUN_10274dd98(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_10274dde4(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 10274dde4; end: 10274df63;  */

void FUN_10274dde4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10274df64; end: 10274dfa3;  */

void FUN_10274df64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbe20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad5054;
  func_0x000107c61520(&UNK_10dad5054,&UNK_110543998);
  puRam0000000112ebbe20 = puVar1;
  return;
}



/* Entry: 10274dfa4; end: 10274dfb3;  */

void FUN_10274dfa4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10274dfb4; end: 10274dfb7; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl commonLoggingParams] */

void FUN_10274dfb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10274dfb8; end: 10274dfdf; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl lensAssetUploadInfo] */

void FUN_10274dfb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10274dfe0; end: 10274e05f;  */

void FUN_10274dfe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebbe28,&UNK_10dad50c0);
  puVar1 = &UNK_110543ad8;
  func_0x000107c613fc(&UNK_110543ad8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10274e11c,puVar1);
  return;
}



/* Entry: 10274e060; end: 10274e11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274e060(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  FUN_10274e458();
  lVar2 = param_2;
  func_0x000107c610f8();
  uVar3 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar4 = FUN_10274e1c8;
  func_0x00010072927c(FUN_10274e1c8,0,uVar3);
  *(code **)(lVar2 + _DAT_112ebbe30) = pcVar4;
  *(undefined8 *)(lVar2 + _DAT_112ebbe38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_110543af0;
  *param_1 = plVar5;
  return;
}



/* Entry: 10274e11c; end: 10274e123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274e11c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_50;
  FUN_10274e458();
  lVar4 = lVar3;
  func_0x000107c610f8();
  uVar5 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar6 = FUN_10274e1c8;
  func_0x00010072927c(FUN_10274e1c8,0,uVar5);
  *(code **)(lVar4 + _DAT_112ebbe30) = pcVar6;
  *(undefined8 *)(lVar4 + _DAT_112ebbe38) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61154(&lStack_50,puVar2);
  param_1[3] = lVar3;
  param_1[4] = &PTR_DAT_110543af0;
  *param_1 = plVar7;
  return;
}



/* Entry: 10274e124; end: 10274e1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10274e124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  uVar1 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar2 = FUN_10274e1c8;
  func_0x00010072927c(FUN_10274e1c8,0,uVar1);
  *(code **)(unaff_x20 + _DAT_112ebbe30) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebbe38) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 10274e1c8; end: 10274e1f7;  */

void FUN_10274e1c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c41408();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10274e1f8; end: 10274e20f;  */

void FUN_10274e1f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274e210,0,0);
  return;
}



/* Entry: 10274e210; end: 10274e277;  */

void FUN_10274e210(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274e278,uVar1,uVar2);
  return;
}



/* Entry: 10274e278; end: 10274e31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274e278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  func_0x000107c4d06c(uVar3);
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  func_0x00010391ad84(uVar1,1);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010274e31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274e320; end: 10274e37f; -[_TtC43MemTwoLandingPagePlusLauncherImplementation38MemoriesPlusBillingManagementPresenter init] */

void FUN_10274e320(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoLandingPagePlusLauncherImplementation.MemoriesPlusBillingManagementPresenter"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10274e34c);
  (*pcVar1)();
}



/* Entry: 10274e380; end: 10274e447; -[_TtC43MemTwoLandingPagePlusLauncherImplementation38MemoriesPlusBillingManagementPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010274e39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274e3a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274e380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebbe30));
  return;
}



/* Entry: 10274e448; end: 10274e457;  */

undefined1  [16] FUN_10274e448(void)

{
  return ZEXT816(0x110543b10);
}



/* Entry: 10274e458; end: 10274e477;  */

void FUN_10274e458(void)

{
  func_0x000107c61168(&PTR_PTR_11285ee08);
  return;
}



/* Entry: 10274e478; end: 10274e4cf;  */

void FUN_10274e478(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10274e4d0;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274e210,0,0);
  return;
}



/* Entry: 10274e4d0; end: 10274e50b;  */

void FUN_10274e4d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274e508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274e50c; end: 10274e69b;  */

void FUN_10274e50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebbe68,&UNK_10dad5190);
  puVar1 = &UNK_110543b60;
  func_0x000107c613fc(&UNK_110543b60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10274e69c,puVar1);
  return;
}



/* Entry: 10274e69c; end: 10274e6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274e69c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  FUN_10274ed8c(lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = lVar2;
  func_0x000107c610f8();
  uVar4 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar5 = FUN_10274e79c;
  func_0x00010072927c(FUN_10274e79c,0,uVar4);
  *(code **)(lVar3 + _DAT_112ebbe70) = pcVar5;
  uVar4 = 0x112ebbe78;
  func_0x0001000285a8(0x112ebbe78,&UNK_10dad51a0);
  pcVar5 = FUN_10274e7cc;
  func_0x00010072927c(FUN_10274e7cc,0,uVar4);
  *(code **)(lVar3 + _DAT_112ebbe80) = pcVar5;
  *(undefined8 *)(lVar3 + _DAT_112ebbe88) = uVar7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar1);
  param_1[3] = lVar2;
  param_1[4] = &PTR_DAT_110543b78;
  *param_1 = plVar6;
  return;
}



/* Entry: 10274e6a8; end: 10274e79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10274e6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  uVar1 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar2 = FUN_10274e79c;
  func_0x00010072927c(FUN_10274e79c,0,uVar1);
  *(code **)(unaff_x20 + _DAT_112ebbe70) = pcVar2;
  uVar1 = 0x112ebbe78;
  func_0x0001000285a8(0x112ebbe78,&UNK_10dad51a0);
  pcVar2 = FUN_10274e7cc;
  func_0x00010072927c(FUN_10274e7cc,0,uVar1);
  *(code **)(unaff_x20 + _DAT_112ebbe80) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebbe88) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar3;
}



/* Entry: 10274e79c; end: 10274e7cb;  */

void FUN_10274e79c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c41408();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10274e7cc; end: 10274e847;  */

void FUN_10274e7cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10274e848; end: 10274e85f;  */

void FUN_10274e848(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274e860,0,0);
  return;
}



/* Entry: 10274e860; end: 10274e8c7;  */

void FUN_10274e860(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274e8c8,uVar1,uVar2);
  return;
}



/* Entry: 10274e8c8; end: 10274e8fb;  */

void FUN_10274e8c8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_10274e8fc();
                    /* WARNING: Could not recover jumptable at 0x00010274e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274e8fc; end: 10274ea7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274e8fc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x00010439c014(0);
    func_0x000107c610f8();
    uVar3 = 0xb4;
    func_0x00010439b9d8(0xb4,0,0,9,0,0,0x3d,0);
    func_0x000100083b20(&lStack_48);
    lVar1 = lStack_48;
    func_0x000100083b20(&lStack_48);
    lVar2 = lStack_48;
    lVar4 = lStack_48;
    func_0x000107c4d06c(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar5 = 0;
    func_0x00010439a550(0);
    func_0x000104399a00();
    lVar2 = lVar1;
    func_0x000107c3eda8(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&lStack_48);
    func_0x000107c42c1c(lStack_48);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    lVar2 = lStack_48;
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10274ea7c; end: 10274ea93;  */

void FUN_10274ea7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274ea94,0,0);
  return;
}



/* Entry: 10274ea94; end: 10274eafb;  */

void FUN_10274ea94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274eafc,uVar1,uVar2);
  return;
}



/* Entry: 10274eafc; end: 10274eb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274eafc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c4ffe8(uVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010274eb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274eb9c; end: 10274ec43; -[_TtC43MemTwoLandingPagePlusLauncherImplementation35MemoriesPlusStoragePaywallPresenter plusSubscribeDidDismiss] */

void FUN_10274eb9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110543bb8;
  func_0x000107c613fc(&UNK_110543bb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10dad5248,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10274ec44; end: 10274eca3; -[_TtC43MemTwoLandingPagePlusLauncherImplementation35MemoriesPlusStoragePaywallPresenter init] */

void FUN_10274ec44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoLandingPagePlusLauncherImplementation.MemoriesPlusStoragePaywallPresenter"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10274ec70);
  (*pcVar1)();
}



/* Entry: 10274eca4; end: 10274ed7b; -[_TtC43MemTwoLandingPagePlusLauncherImplementation35MemoriesPlusStoragePaywallPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010274ecc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274ecc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274eca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebbe70));
  return;
}



/* Entry: 10274ed7c; end: 10274ed8b;  */

undefined1  [16] FUN_10274ed7c(void)

{
  return ZEXT816(0x110543b98);
}



/* Entry: 10274ed8c; end: 10274edab;  */

void FUN_10274ed8c(void)

{
  func_0x000107c61168(&PTR_PTR_11285eed8);
  return;
}



/* Entry: 10274edac; end: 10274ee03;  */

void FUN_10274edac(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10274ee98;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274ea94,0,0);
  return;
}



/* Entry: 10274ee04; end: 10274ee5b;  */

void FUN_10274ee04(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10274ee5c;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274e860,0,0);
  return;
}



/* Entry: 10274ee5c; end: 10274ee97;  */

void FUN_10274ee5c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274ee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274ee98; end: 10274ee9b;  */

void FUN_10274ee98(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274ee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274ee9c; end: 10274eee7;  */

void FUN_10274ee9c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebbeb8,&UNK_10dad5260);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10274ef54,param_1);
  return;
}



/* Entry: 10274eee8; end: 10274ef53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274eee8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10274f0c4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebbec0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10274ef54; end: 10274ef5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274ef54(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10274f0c4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebbec0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10274ef5c; end: 10274efa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274ef5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebbec0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10274efa8; end: 10274f043; -[_TtC45MemTwoLandingPageValdiComponentImplementation42MemTwoLandingPageBackupServiceProviderImpl getBackupService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274efa8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112fd9138);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar1);
  func_0x0001000d224c(&lStack_38);
  func_0x000107c61574(uVar2);
  func_0x000103edf0bc();
  func_0x000107c61574(lStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10274f044; end: 10274f0a3; -[_TtC45MemTwoLandingPageValdiComponentImplementation42MemTwoLandingPageBackupServiceProviderImpl init] */

void FUN_10274f044(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoLandingPageValdiComponentImplementation.MemTwoLandingPageBackupServiceProviderImpl"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10274f070);
  (*pcVar1)();
}



/* Entry: 10274f0a4; end: 10274f0b3;  */

undefined1  [16] FUN_10274f0a4(void)

{
  return ZEXT816(0x110543ce8);
}



/* Entry: 10274f0b4; end: 10274f0c3; -[_TtC45MemTwoLandingPageValdiComponentImplementation42MemTwoLandingPageBackupServiceProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274f0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebbec0));
  return;
}



/* Entry: 10274f0c4; end: 10274f0e3;  */

void FUN_10274f0c4(void)

{
  func_0x000107c61168(&PTR_PTR_11285efb0);
  return;
}



/* Entry: 10274f0e4; end: 10274f14f;  */

void FUN_10274f0e4(void)

{
  func_0x0001000285a8(0x112ebbef0,&UNK_10dad5310);
  func_0x0001000823a8(0x10274f124,0);
  return;
}



/* Entry: 10274f150; end: 10274f1df;  */

void FUN_10274f150(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10274f700(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274f1e0,uVar2,uVar3);
  return;
}



/* Entry: 10274f1e0; end: 10274f35b;  */

void FUN_10274f1e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  puVar4 = puVar2;
  func_0x000107c3f3f4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  if ((int)puVar4 != 0) {
    func_0x000107c5a9c4(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5ed90();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar5 = 0;
    func_0x000100dfa6ec(0);
    uVar6 = 0x112d377a8;
    FUN_10274f700(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar4 = puVar3;
    func_0x000107c5f9dc(puVar3,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
    func_0x000107c6142c(puVar3);
    puVar7 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)(unaff_x22 + 0x30) = FUN_10274f35c;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_100ab47f8;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_110543d68;
    func_0x000107c60bc4();
    func_0x000107c4de70(puVar1);
    func_0x000107c60bd0(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010274f358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274f35c; end: 10274f35f;  */

void FUN_10274f35c(void)

{
  return;
}



/* Entry: 10274f360; end: 10274f363; -[_TtC45MemTwoLandingPageValdiComponentImplementation41MemTwoLandingPageEmptyStateControllerImpl onTapOnboardingLearnMore] */

void FUN_10274f360(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long alStack_60 [2];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c5edd0(puVar10,0xd000000000000065,0x800000010f0b9b40);
  puVar2 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    pcVar13 = *(code **)(lVar12 + 0x20);
    (*pcVar13)(lVar7,puVar10,lVar1);
    (**(code **)(lVar12 + 0x10))(lVar8,lVar7,lVar1);
    uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar3 = &UNK_110543d28;
    func_0x000107c613fc(&UNK_110543d28,uVar11 + lVar9,uVar6 | 7);
    (*pcVar13)(puVar3 + uVar11,lVar8,lVar1);
    puVar4 = &UNK_110543d50;
    func_0x000107c613fc(&UNK_110543d50,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dad53a0;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined **)(lVar7 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar5 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad53a8,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    (**(code **)(lVar12 + 8))(lVar7,lVar1);
  }
  return;
}



/* Entry: 10274f364; end: 10274f39f; -[_TtC45MemTwoLandingPageValdiComponentImplementation41MemTwoLandingPageEmptyStateControllerImpl init] */

void FUN_10274f364(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10274f3a0; end: 10274f3d3;  */

void FUN_10274f3a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10274f3d4; end: 10274f5bf;  */

void FUN_10274f3d4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long alStack_60 [2];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  func_0x000107c5edd0(puVar10,0xd000000000000065,0x800000010f0b9b40);
  puVar2 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    pcVar13 = *(code **)(lVar12 + 0x20);
    (*pcVar13)(lVar7,puVar10,lVar1);
    (**(code **)(lVar12 + 0x10))(lVar8,lVar7,lVar1);
    uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    puVar3 = &UNK_110543d28;
    func_0x000107c613fc(&UNK_110543d28,uVar11 + lVar9,uVar6 | 7);
    (*pcVar13)(puVar3 + uVar11,lVar8,lVar1);
    puVar4 = &UNK_110543d50;
    func_0x000107c613fc(&UNK_110543d50,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dad53a0;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined **)(lVar7 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar5 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad53a8,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    (**(code **)(lVar12 + 8))(lVar7,lVar1);
  }
  return;
}



/* Entry: 10274f5c0; end: 10274f5cf;  */

undefined1  [16] FUN_10274f5c0(void)

{
  return ZEXT816(0x110543d08);
}



/* Entry: 10274f5d0; end: 10274f5ef;  */

void FUN_10274f5d0(void)

{
  func_0x000107c61168(&PTR_PTR_11285f070);
  return;
}



/* Entry: 10274f5f0; end: 10274f653;  */

void FUN_10274f5f0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10274f654;
  plVar5[8] = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[9] = lVar4;
  uVar3 = 0x112d45220;
  FUN_10274f700(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274f1e0,lVar2,uVar3);
  return;
}



/* Entry: 10274f654; end: 10274f68f;  */

void FUN_10274f654(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274f68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274f690; end: 10274f6ff;  */

void FUN_10274f690(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10274f75c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10274f700; end: 10274f73f;  */

void FUN_10274f700(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10274f740; end: 10274f75f;  */

void FUN_10274f740(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10274f760; end: 10274f7ab;  */

void FUN_10274f760(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebbf20,&UNK_10dad53b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10274f88c,param_1);
  return;
}



/* Entry: 10274f7ac; end: 10274f88b;  */

void FUN_10274f7ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x0001027a5134(0);
  func_0x000107c610f8();
  uVar1 = 0xe;
  func_0x0001027a50ec(0xe,0);
  func_0x0001027a4d28(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  uVar2 = 1;
  func_0x0001027a4cb4(1,1,0,1,0,2,uVar1);
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c3ed38();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 10274f88c; end: 10274f8b3;  */

void FUN_10274f88c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x0001027a5134(0);
  func_0x000107c610f8();
  uVar1 = 0xe;
  func_0x0001027a50ec(0xe,0);
  func_0x0001027a4d28(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  uVar2 = 1;
  func_0x0001027a4cb4(1,1,0,1,0,2,uVar1);
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c3ed38();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 10274f8b4; end: 10274f94b;  */

void FUN_10274f8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebbf28,&UNK_10dad5400);
  puVar1 = &UNK_110543dc0;
  func_0x000107c613fc(&UNK_110543dc0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10274f94c,puVar1);
  return;
}


