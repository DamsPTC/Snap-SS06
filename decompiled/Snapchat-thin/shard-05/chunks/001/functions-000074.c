/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ad5f2c; end: 103ad5f43;  */

void FUN_103ad5f2c(void)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  byte bVar19;
  long lVar20;
  undefined *puVar21;
  long unaff_x20;
  undefined *puVar22;
  ulong *puVar23;
  ulong uStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  bVar19 = *(byte *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar7 + 0x10,auStack_b0,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 == 0) {
    return;
  }
  puVar8 = PTR_PTR_1126ad8c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uStack_d0 = 0xd000000000000016;
  uStack_c8 = 0x800000010f19ca30;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad3024:
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar9 = &uStack_98;
    func_0x000100df95d0(puVar9);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_103ad3024;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_100);
    func_0x000107c6142c(lVar2);
  }
  func_0x0001007bbff0(&uStack_98);
  puVar11 = PTR___sypN_11034f1a8;
  if (lStack_e8 == 0) {
    func_0x000103ad5f64(&uStack_100,0x112d387f8,&UNK_10d902650);
LAB_103ad30ac:
    func_0x0001091286f4();
  }
  else {
    puVar10 = &uStack_d0;
    func_0x000107c6147c(puVar10,&uStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar18 = uStack_c8;
    uVar13 = uStack_d0;
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad30ac;
    func_0x000107c6142c(uStack_c8);
    uVar13 = uVar13 & 0xffffffffffff;
    if ((uVar18 & 0x2000000000000000) != 0) {
      uVar13 = uVar18 >> 0x38 & 0xf;
    }
    if (uVar13 == 0) goto LAB_103ad30ac;
  }
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55038(puVar8);
  func_0x000107c61170(puVar21);
  uStack_d0 = 0xd000000000000016;
  uStack_c8 = 0x800000010f19ca30;
  puVar21 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad3140:
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar9 = &uStack_98;
    func_0x000100df95d0(puVar9);
    if (((ulong)puVar21 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_103ad3140;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_100);
    func_0x000107c6142c(lVar2);
  }
  func_0x0001007bbff0(&uStack_98);
  if (lStack_e8 == 0) {
LAB_103ad333c:
    puVar9 = &uStack_100;
    func_0x000103ad5f64(puVar9,0x112d387f8,&UNK_10d902650);
    iVar17 = (int)puVar9;
LAB_103ad3354:
    func_0x0001091286f4();
    if (iVar17 != 0) {
LAB_103ad335c:
      FUN_103ad5a18(&uStack_98);
      if (lStack_90 != 0) {
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(uStack_88,uStack_80);
        func_0x00010006c090(uStack_88,uStack_80);
        uVar12 = uStack_98;
        func_0x000107c5fadc(uStack_98,lStack_90);
        func_0x000107c6142c(lStack_90);
        func_0x000107c578d8(puVar8);
        func_0x000107c61170(uVar12);
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(uStack_88,uStack_80);
        func_0x000107c6142c(lStack_90);
        uVar12 = *(undefined8 *)(lVar7 + 0x68);
        uVar1 = *(undefined8 *)(lVar7 + 0x70);
        *(undefined8 *)(lVar7 + 0x68) = uStack_88;
        *(undefined8 *)(lVar7 + 0x70) = uStack_80;
        func_0x0001000b44c0(uVar12,uVar1);
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(uStack_88,uStack_80);
        func_0x00010006c090(uStack_88,uStack_80);
        func_0x000107c6142c(lStack_90);
        *(undefined8 *)(lVar7 + 0x78) = uStack_78;
        func_0x00010006c090(uStack_88,uStack_80);
        func_0x000107c6142c(lStack_90);
        *(undefined8 *)(lVar7 + 0x80) = uStack_70;
      }
    }
  }
  else {
    puVar10 = &uStack_d0;
    func_0x000107c6147c(puVar10,&uStack_100,puVar11 + 8,PTR___sSSN_11034da80,6);
    uVar18 = uStack_c8;
    uVar13 = uStack_d0;
    iVar17 = (int)puVar10;
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad3354;
    uStack_d0 = 0xd000000000000017;
    uStack_c8 = 0x800000010f19cb10;
    puVar21 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad31f0:
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x000107c61434(lVar2);
      puVar9 = &uStack_98;
      func_0x000100df95d0(puVar9);
      if (((ulong)puVar21 & 1) == 0) {
        func_0x000107c6142c(lVar2);
        goto LAB_103ad31f0;
      }
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_100);
      func_0x000107c6142c(lVar2);
    }
    func_0x0001007bbff0(&uStack_98);
    if (lStack_e8 == 0) {
LAB_103ad3334:
      func_0x000107c6142c(uVar18);
      goto LAB_103ad333c;
    }
    puVar10 = &uStack_d0;
    func_0x000107c6147c(puVar10,&uStack_100,puVar11 + 8,PTR___sSiN_11034deb0,6);
    uVar5 = uStack_d0;
    if (((ulong)puVar10 & 1) == 0) {
LAB_103ad39b4:
      func_0x000107c6142c();
      iVar17 = (int)uVar18;
      func_0x0001091286f4();
      if (iVar17 == 0) goto LAB_103ad343c;
      goto LAB_103ad335c;
    }
    uStack_d0 = 0xd000000000000018;
    uStack_c8 = 0x800000010f19cb30;
    puVar11 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad32a0:
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x000107c61434(lVar2);
      puVar9 = &uStack_98;
      func_0x000100df95d0(puVar9);
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000107c6142c(lVar2);
        goto LAB_103ad32a0;
      }
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_100);
      func_0x000107c6142c(lVar2);
    }
    func_0x0001007bbff0(&uStack_98);
    if (lStack_e8 == 0) goto LAB_103ad3334;
    puVar10 = &uStack_d0;
    func_0x000107c6147c(puVar10,&uStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    uVar15 = uStack_d0;
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad39b4;
    if ((bVar19 & 1) == 0) {
      uVar15 = uVar18;
      FUN_103ad51f4(uVar13,uVar18,uVar5);
      func_0x000107c6142c(uVar18);
      if (uVar15 != 0) {
        func_0x000107c5fadc(uVar13,uVar15);
        func_0x000107c6142c(uVar15);
        func_0x000107c578d8(puVar8);
        func_0x000107c61170(uVar13);
      }
    }
    else {
      uVar14 = uVar18;
      func_0x000107c5ee08(uVar13,uVar18,0);
      func_0x000107c6142c(uVar18);
      if (uVar14 >> 0x3c < 0xf) {
        uVar3 = (uint)(uVar14 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar16 == 0) {
            uVar18 = uVar14 >> 0x30 & 0xff;
          }
          else {
            iVar17 = (int)(uVar13 >> 0x20);
            if (SBORROW4(iVar17,(int)uVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103ad3ab0);
              (*pcVar6)();
            }
            uVar18 = (ulong)(iVar17 - (int)uVar13);
          }
        }
        else if (uVar16 == 2) {
          uVar18 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
          if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ad3a38);
            (*pcVar6)();
          }
        }
        else {
          uVar18 = 0;
        }
        lVar20 = uVar5 * uVar15;
        if (SUB168(SEXT816((long)uVar5) * SEXT816((long)uVar15),8) != lVar20 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ad3aa8);
          (*pcVar6)();
        }
        if (lVar20 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ad3aac);
          (*pcVar6)();
        }
        if (uVar18 == lVar20 * 4) {
          uVar12 = *(undefined8 *)(lVar7 + 0x68);
          uVar1 = *(undefined8 *)(lVar7 + 0x70);
          *(ulong *)(lVar7 + 0x68) = uVar13;
          *(ulong *)(lVar7 + 0x70) = uVar14;
          func_0x0001000b44c0(uVar12,uVar1);
          *(ulong *)(lVar7 + 0x78) = uVar5;
          *(ulong *)(lVar7 + 0x80) = uVar15;
        }
        else {
          func_0x0001000b44c0(uVar13,uVar14);
        }
      }
    }
  }
LAB_103ad343c:
  uStack_110 = 0xd000000000000012;
  puStack_108 = (ulong *)0x800000010f19ca50;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    puVar21 = PTR___sypN_11034f1a8;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar9 = &uStack_100;
    func_0x000100df95d0(puVar9);
    puVar21 = PTR___sypN_11034f1a8;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_d0);
      func_0x000107c6142c(lVar2);
    }
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    puVar23 = (ulong *)0x112d387f8;
    puVar10 = &uStack_d0;
    func_0x000103ad5f64(puVar10,0x112d387f8,&UNK_10d902650);
LAB_103ad3538:
    func_0x0001091286f4();
    if (((ulong)puVar10 & 1) != 0) {
      uVar13 = 0xd000000000000017;
      puVar23 = (ulong *)0x800000010f19caf0;
      func_0x000107c5fadc(0xd000000000000017);
      goto LAB_103ad355c;
    }
  }
  else {
    puVar10 = &uStack_110;
    puVar23 = &uStack_d0;
    func_0x000107c6147c(puVar10,puVar23,puVar21 + 8,PTR___sSSN_11034da80,6);
    puVar4 = puStack_108;
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad3538;
    uVar13 = uStack_110;
    puVar23 = puStack_108;
    func_0x000107c5fadc(uStack_110);
    func_0x000107c6142c(puVar4);
LAB_103ad355c:
    func_0x000107c53af4(puVar8);
    func_0x000107c61170(uVar13);
  }
  puVar11 = puVar8;
  func_0x000107c40cb0();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    puVar23 = (ulong *)0x0;
  }
  else {
    puVar22 = puVar11;
    func_0x000107c5faec();
    func_0x000107c61170(puVar11);
  }
  uVar12 = *(undefined8 *)(lVar7 + 0x90);
  *(undefined **)(lVar7 + 0x88) = puVar22;
  *(ulong **)(lVar7 + 0x90) = puVar23;
  func_0x000107c6142c(uVar12);
  uStack_110 = 0xd000000000000016;
  puStack_108 = (ulong *)0x800000010f19ca70;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad3624:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar9 = &uStack_100;
    func_0x000100df95d0(puVar9);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_103ad3624;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_d0);
    func_0x000107c6142c(lVar2);
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    puVar10 = &uStack_d0;
    func_0x000103ad5f64(puVar10,0x112d387f8,&UNK_10d902650);
LAB_103ad367c:
    func_0x0001091286f4();
    if (((ulong)puVar10 & 1) != 0) goto LAB_103ad3688;
  }
  else {
    puVar10 = &uStack_110;
    func_0x000107c6147c(puVar10,&uStack_d0,puVar21 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad367c;
LAB_103ad3688:
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c591a0(puVar8);
    func_0x000107c61170(puVar11);
  }
  uStack_d0 = 0xd000000000000010;
  uStack_c8 = 0x800000010f19ca90;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad3724:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar9 = &uStack_100;
    func_0x000100df95d0(puVar9);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_103ad3724;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_d0);
    func_0x000107c6142c(lVar2);
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    func_0x000103ad5f64(&uStack_d0,0x112d387f8,&UNK_10d902650);
    uStack_110 = 0;
    bVar19 = 1;
  }
  else {
    puVar10 = &uStack_110;
    func_0x000107c6147c(puVar10,&uStack_d0,puVar21 + 8,PTR___sSiN_11034deb0,6);
    if ((int)puVar10 == 0) {
      uStack_110 = 0;
    }
    bVar19 = (byte)puVar10 ^ 1;
  }
  *(ulong *)(lVar7 + 0x58) = uStack_110;
  *(byte *)(lVar7 + 0x60) = bVar19;
  uStack_110 = 0xd000000000000015;
  puStack_108 = (ulong *)0x800000010f19cab0;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103ad3808:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    puVar9 = &uStack_100;
    func_0x000100df95d0(puVar9);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_103ad3808;
    }
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)puVar9 * 0x20,&uStack_d0);
    func_0x000107c6142c(lVar2);
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    puVar23 = (ulong *)0x112d387f8;
    puVar10 = &uStack_d0;
    func_0x000103ad5f64(puVar10,0x112d387f8,&UNK_10d902650);
LAB_103ad3874:
    func_0x0001091286f4();
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad38b0;
    puVar23 = (ulong *)0x800000010f19cad0;
    uVar13 = 0x1000000000000011;
    func_0x000107c5fadc(0x1000000000000011);
  }
  else {
    puVar10 = &uStack_110;
    puVar23 = &uStack_d0;
    func_0x000107c6147c(puVar10,puVar23,puVar21 + 8,PTR___sSSN_11034da80,6);
    puVar4 = puStack_108;
    if (((ulong)puVar10 & 1) == 0) goto LAB_103ad3874;
    uVar13 = uStack_110;
    puVar23 = puStack_108;
    func_0x000107c5fadc(uStack_110);
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c524d8(puVar8);
  func_0x000107c61170(uVar13);
LAB_103ad38b0:
  puVar11 = puVar8;
  func_0x000107c3d978();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    puVar23 = (ulong *)0x0;
  }
  else {
    puVar21 = puVar11;
    func_0x000107c5faec();
    func_0x000107c61170(puVar11);
  }
  uVar12 = *(undefined8 *)(lVar7 + 0xa0);
  *(undefined **)(lVar7 + 0x98) = puVar21;
  *(ulong **)(lVar7 + 0xa0) = puVar23;
  func_0x000107c6142c(uVar12);
  puVar11 = PTR_PTR_1126d34f0;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  puVar21 = puVar11;
  func_0x000107c40b38();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  uVar12 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar21;
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(lVar7 + 0xe0);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar12);
  func_0x000107c45a48(puVar11);
  func_0x000107c3fefc(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61574(lVar7);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 103ad5f44; end: 103ad5fe3;  */

void FUN_103ad5f44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103ad5fe4; end: 103ad5ff7;  */

void FUN_103ad5fe4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106cd1c8;
  if (lRam0000000112fe8978 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fe8978 = param_1;
  }
  return;
}



/* Entry: 103ad5ff8; end: 103ad603b;  */

void FUN_103ad5ff8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103ad603c; end: 103ad6053;  */

void FUN_103ad603c(long param_1,long param_2)

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



/* Entry: 103ad6054; end: 103ad60df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad6054(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe8980) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8988) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fe8990) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fe8998) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ad60e0; end: 103ad617f; -[SCSnapRendererRepostOverlayPluginFactory initWithValdiRuntimeProvider:mediaEngineImageServices:renderStaticContentToOverlay:bypassNativeRenderedElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad60e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fe8980) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fe8988) = param_4;
  *(undefined1 *)(param_1 + _DAT_112fe8990) = param_5;
  *(undefined1 *)(param_1 + _DAT_112fe8998) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103ad6180; end: 103ad6247; -[SCSnapRendererRepostOverlayPluginFactory destinations] */

void FUN_103ad6180(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  func_0x0001091286f4();
  if ((param_1 & 1) == 0) {
    func_0x000100673624();
    func_0x000107c61534();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    puVar6 = (undefined8 *)(param_1 + 0x20);
    *puVar6 = puVar2;
    uVar3 = param_1;
    func_0x00010254afb4(param_1);
    func_0x000107c61588(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c61408(puVar6,uVar5,uVar4);
    func_0x000100120cb0();
    uVar1 = uVar3;
    func_0x000107c5fe08(uVar3,uVar4,puVar6);
    func_0x000107c6142c(uVar3);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ad6248; end: 103ad6517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ad6248(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = param_1;
  func_0x000107c4a764();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad64f8);
    (*pcVar4)();
  }
  lVar6 = lVar5;
  func_0x000107c44864();
  func_0x000107c61170(lVar5);
  if ((int)lVar6 != 0) {
    lVar5 = param_1;
    func_0x000107c4a764();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad64fc);
      (*pcVar4)();
    }
    lVar6 = lVar5;
    func_0x000107c42924();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad6500);
      (*pcVar4)();
    }
    lVar5 = lVar6;
    func_0x000107c42930();
    func_0x000107c61170(lVar6);
    if ((int)lVar5 == 0x1b) {
      lVar5 = param_1;
      func_0x000107c4a764();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad6504);
        (*pcVar4)();
      }
      lVar6 = lVar5;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad6508);
        (*pcVar4)();
      }
      lVar5 = lVar6;
      func_0x000107c4b410();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c44920();
        if ((int)lVar6 != 0) {
          lVar6 = lVar5;
          func_0x000107c4adb4();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad650c);
            (*pcVar4)();
          }
          func_0x000107c44fd8();
          func_0x000107c61170(lVar6);
          puVar7 = PTR___ss5Int64VN_11034ee50;
          puVar8 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
          func_0x000107c6057c();
          puVar10 = puVar8;
          func_0x000107c6142c(puVar8);
          uVar1 = (ulong)puVar7 & 0xffffffffffff;
          if (((ulong)puVar8 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)puVar8 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            func_0x000107c4ce20();
            func_0x000107c61180();
            if (param_1 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad6510);
              (*pcVar4)();
            }
            lVar6 = param_1;
            func_0x000107c4b260();
            func_0x000107c61180();
            func_0x000107c61170(param_1);
            if (lVar6 != 0) {
              lVar9 = lVar6;
              func_0x000107c496f0();
              func_0x000107c61180();
              func_0x000107c61170(lVar6);
              if (lVar9 != 0) {
                lVar6 = lVar9;
                func_0x000107c4a88c();
                func_0x000107c61180();
                func_0x000107c61170(lVar9);
                if (lVar6 == 0) {
                  lVar9 = 0;
                  puVar10 = (undefined *)0xf000000000000000;
                }
                else {
                  lVar9 = lVar6;
                  func_0x000107c5ee30(lVar6);
                  func_0x000107c61170(lVar6);
                }
                uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112fe8980);
                uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112fe8988);
                uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112fe8990);
                uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112fe8998);
                FUN_103ad2f24(0);
                func_0x000107c610f8();
                func_0x000107c61174(uVar11);
                func_0x000107c61174(uVar12);
                FUN_103ad14d0(lVar9,puVar10,uVar11,uVar12,uVar2,uVar3);
                func_0x000107c61170(lVar5);
                return lVar9;
              }
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad6518);
              (*pcVar4)();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103ad6514);
            (*pcVar4)();
          }
        }
        func_0x000107c61170(lVar5);
      }
    }
  }
  return 0;
}



/* Entry: 103ad6518; end: 103ad6573; -[SCSnapRendererRepostOverlayPluginFactory pluginInstanceForCTItemInstance:] */

void FUN_103ad6518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103ad6248(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ad6574; end: 103ad6577; -[SCSnapRendererRepostOverlayPluginFactory resetPluginInstance] */

void FUN_103ad6574(void)

{
  return;
}



/* Entry: 103ad6578; end: 103ad657b; -[SCSnapRendererRepostOverlayPluginFactory warmContentForCTItemInstance:] */

void FUN_103ad6578(void)

{
  return;
}



/* Entry: 103ad657c; end: 103ad65db; -[SCSnapRendererRepostOverlayPluginFactory init] */

void FUN_103ad657c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapRendererRepostOverlayPlugin.SCSnapRendererRepostOverlayPluginFactory",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad65a8);
  (*pcVar1)();
}



/* Entry: 103ad65dc; end: 103ad6613; -[SCSnapRendererRepostOverlayPluginFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103ad65f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ad65fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad65dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe8980));
  return;
}



/* Entry: 103ad6614; end: 103ad6633;  */

void FUN_103ad6614(void)

{
  func_0x000107c61168(&PTR_PTR_112925308);
  return;
}



/* Entry: 103ad6634; end: 103ad6643;  */

void FUN_103ad6634(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103ad6644; end: 103ad7273;  */

/* WARNING: Removing unreachable block (ram,0x000103ad6c78) */
/* WARNING: Removing unreachable block (ram,0x000103ad6790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_103ad6644(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long unaff_x20;
  int iVar27;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 *puStack_c8;
  undefined8 *puStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_70;
  undefined8 uVar28;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  puVar7 = (undefined8 *)PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = param_1;
  func_0x000107c5b134();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar9;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar9);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  puVar9 = puVar8;
  func_0x0001010282b0(puVar8,param_2);
  func_0x00010006c090(puVar8);
  puVar8 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  puVar22 = puVar8;
  func_0x000107c5d754();
  func_0x000107c61180();
  if (puVar22 == (undefined8 *)0x0) {
LAB_103ad677c:
    puVar10 = puVar9;
    FUN_103adcfb0();
    puVar24 = param_2;
    func_0x000107c61170();
    if (param_2 != (undefined8 *)0x0) goto LAB_103ad67b4;
    FUN_103addd84();
    puVar22 = (undefined8 *)&UNK_1106cd970;
    func_0x000107c613f8(&UNK_1106cd970,puVar8,0,0);
    *puVar8 = 0;
  }
  else {
    puVar10 = puVar22;
    func_0x000107c5faec();
    puVar24 = param_2;
    func_0x000107c61170(puVar22);
    uVar1 = (ulong)puVar10 & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(param_2);
      param_2 = puVar24;
      goto LAB_103ad677c;
    }
    func_0x000107c61170(puVar8);
LAB_103ad67b4:
    puVar8 = param_2;
    puVar22 = param_1;
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar11 = puVar22;
    func_0x000107c427d4();
    func_0x000107c61180();
    func_0x000107c61170(puVar22);
    if (puVar11 != (undefined8 *)0x0) {
      puVar22 = puVar11;
      func_0x000107c5faec();
      puVar25 = puVar24;
      func_0x000107c61170(puVar11);
      puVar11 = param_1;
      func_0x000107c4008c();
      func_0x000107c61180();
      puVar12 = puVar11;
      func_0x000107c427d0();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      if (puVar12 != (undefined8 *)0x0) {
        puVar11 = puVar12;
        func_0x000107c5faec();
        puStack_b8 = puVar25;
        func_0x000107c61170(puVar12);
        puVar12 = param_1;
        FUN_103add090();
        puVar13 = param_1;
        FUN_103adbe28();
        puVar26 = param_1;
        func_0x000107c4008c();
        func_0x000107c61180();
        puVar31 = puVar26;
        func_0x000107c40dc0();
        func_0x000107c61180();
        func_0x000107c61170();
        uVar4 = SUB81(puVar26,0);
        if (puVar31 == (undefined8 *)0x0) {
          puStack_c8 = (undefined8 *)0x0;
          puStack_b8 = (undefined8 *)0xf000000000000000;
        }
        else {
          puStack_c8 = puVar31;
          func_0x000107c5ee30();
          func_0x000107c61170();
          uVar4 = SUB81(puVar31,0);
        }
        FUN_103adbdb4();
        puVar26 = puVar10;
        puVar31 = puVar8;
        FUN_103add1d8(puVar10,puVar8);
        puVar14 = PTR_PTR_1126b25b8;
        func_0x000107c610f8();
        func_0x000107c5fadc(puVar26,puVar31);
        func_0x000107c46814();
        func_0x000107c6142c(puVar31);
        func_0x000107c61170(puVar26);
        lVar15 = *(long *)(unaff_x20 + _DAT_112fe8a08);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar15 != 0) {
          puStack_a8 = (undefined *)0x0;
          func_0x000107c3e418(lVar15);
          if (puStack_a8 != (undefined *)0x0) {
            puVar21 = puStack_a8;
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c6142c(puVar8);
            func_0x000107c6142c(puVar24);
            func_0x000107c6142c(puVar25);
            func_0x000107c61174(puVar21);
            puVar23 = puVar21;
            func_0x000107c5ed2c();
            func_0x000107c61170(puVar21);
            func_0x000107c43b70(puVar7);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar21);
            func_0x000107c615e8(lVar15);
            func_0x0001000b44c0(puStack_c8,puStack_b8);
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar23);
            func_0x000107c61170(puVar9);
            puVar22 = puVar9;
            goto LAB_103ad6950;
          }
        }
        uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112fe8a10);
        iVar27 = (int)uVar28;
        uVar30 = 0xd000000000000035;
        puVar26 = (undefined8 *)0x800000010f19cef0;
        func_0x000107c5fadc(0xd000000000000035);
        iVar5 = iVar27;
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar30);
        if (iVar5 != 0) {
          lVar16 = *(long *)(unaff_x20 + _DAT_112fe8a00);
          lVar19 = lVar16;
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar19 != 0) {
            func_0x0001044d64d8();
            func_0x000107c610f8();
            func_0x000107c61434(puVar24);
            func_0x000107c61434(puVar25);
            puVar31 = puVar22;
            func_0x0001044d5bec(puVar22,puVar24,puVar11,puVar25);
            puVar29 = puVar10;
            puVar26 = puVar8;
            func_0x000107c5fadc(puVar10);
            func_0x000107c5451c(lVar19);
            func_0x000107c615e8(lVar19);
            func_0x000107c61170(puVar31);
            func_0x000107c61170(puVar29);
          }
          if ((ulong)puStack_b8 >> 0x3c < 0xf) {
            func_0x000107c5eb24();
            func_0x000107c613fc();
            puVar26 = puStack_c8;
            func_0x00010006c00c(puStack_c8,puStack_b8);
            func_0x000107c5eb20();
            uVar17 = 0;
            func_0x00010440a304(0);
            uVar30 = 0x112fe8b50;
            FUN_103add2c4(0x112fe8b50,&SUB_10440a304,&UNK_10dcf98b0);
            func_0x000107c5eb1c(&puStack_a8,uVar17,puStack_c8,puStack_b8,uVar17,uVar30);
            func_0x000107c61574(puVar26);
            puVar21 = puStack_a8;
            uVar30 = 0xd000000000000028;
            func_0x000107c5fadc(0xd000000000000028,0x800000010f19cf60);
            func_0x000107c3ebd4();
            func_0x000107c61170(uVar30);
            puVar26 = puStack_b8;
            if (iVar27 == 0) {
              func_0x000107c61170(puVar21);
              func_0x0001000b44c0(puStack_c8);
            }
            else {
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar16 == 0) {
                func_0x0001000b44c0(puStack_c8);
              }
              else {
                uVar30 = *(undefined8 *)(puVar21 + _DAT_113077630);
                uVar2 = *(undefined8 *)((long)(puVar21 + _DAT_113077630) + 8);
                uVar17 = *(undefined8 *)(puVar21 + _DAT_113077638);
                uVar3 = *(undefined8 *)((long)(puVar21 + _DAT_113077638) + 8);
                func_0x0001044d64d8();
                func_0x000107c610f8();
                func_0x000107c61434(uVar2);
                func_0x000107c61434(uVar3);
                func_0x0001044d5bec(uVar30,uVar2,uVar17,uVar3);
                uVar17 = *(undefined8 *)(puVar21 + _DAT_113077640);
                uVar2 = *(undefined8 *)((long)(puVar21 + _DAT_113077640) + 8);
                func_0x000107c61434(uVar2);
                func_0x000107c5fadc(uVar17,uVar2);
                func_0x000107c6142c(uVar2);
                func_0x000107c5451c(lVar16);
                func_0x0001000b44c0(puStack_c8);
                func_0x000107c615e8(lVar16);
                func_0x000107c61170(uVar30);
                func_0x000107c61170(uVar17);
              }
              func_0x000107c61170(puVar21);
            }
          }
          puVar29 = puVar9;
          func_0x000107c3f5f8();
          func_0x000107c61180();
          puVar31 = (undefined8 *)0x0;
          if (puVar29 == (undefined8 *)0x0) {
LAB_103ad6e68:
            func_0x00010011df08();
            func_0x000107c61180();
            puVar29 = puVar26;
            if (puVar31 == (undefined8 *)0x0) {
              func_0x000107c5faec();
              puVar29 = puVar26;
              func_0x000107c5fadc();
              func_0x000107c6142c(puVar26);
            }
            func_0x000107c53200(puVar9);
            func_0x000107c61170(puVar31);
          }
          else {
            func_0x000107c61170();
            puVar31 = puVar9;
            func_0x000107c3f5f8();
            func_0x000107c61180();
            puVar29 = puVar26;
            if (puVar31 != (undefined8 *)0x0) {
              puVar18 = puVar31;
              func_0x000107c5faec();
              puVar29 = puVar26;
              func_0x000107c61170(puVar31);
              puVar31 = puVar26;
              func_0x000107c6142c();
              uVar1 = (ulong)puVar18 & 0xffffffffffff;
              if (((ulong)puVar26 & 0x2000000000000000) != 0) {
                uVar1 = (ulong)puVar26 >> 0x38 & 0xf;
              }
              puVar26 = puVar29;
              if (uVar1 == 0) goto LAB_103ad6e68;
            }
          }
          lVar19 = *(long *)(unaff_x20 + _DAT_112fe89f8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar19 != 0) {
            puVar26 = puVar10;
            puVar29 = puVar8;
            func_0x000107c5fadc(puVar10,puVar8);
            if ((ulong)puStack_b8 >> 0x3c < 0xf) {
              func_0x00010006c00c(puStack_c8,puStack_b8);
              puVar31 = puStack_c8;
              func_0x000107c5ee20(puStack_c8,puStack_b8);
              puVar29 = puStack_b8;
              func_0x0001000b44c0(puStack_c8,puStack_b8);
            }
            else {
              puVar31 = (undefined8 *)0x0;
            }
            pcStack_88 = FUN_103ad7274;
            puStack_80 = (undefined *)0x0;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1014c8004;
            puStack_90 = &UNK_1106cd810;
            ppuVar20 = &puStack_a8;
            func_0x000107c60bc4(ppuVar20);
            func_0x000107c4e658(lVar19);
            func_0x000107c60bd0(ppuVar20);
            func_0x000107c615e8(lVar19);
            func_0x000107c61170(puVar26);
            func_0x000107c61170(puVar31);
          }
          puVar26 = puVar9;
          func_0x000107c3f5f8();
          func_0x000107c61180();
          if (puVar26 == (undefined8 *)0x0) {
            puVar31 = (undefined8 *)0x0;
            puVar29 = (undefined8 *)0x0;
          }
          else {
            puVar31 = puVar26;
            func_0x000107c5faec();
            func_0x000107c61170(puVar26);
          }
          FUN_103adbca4(puVar10,puVar8,puVar31,puVar29);
          func_0x000107c6142c(puVar29);
        }
        puVar26 = param_1;
        func_0x000107c4008c();
        func_0x000107c61180();
        puVar31 = puVar26;
        func_0x000107c5b634();
        func_0x000107c61180();
        func_0x000107c61170(puVar26);
        if (puVar31 == (undefined8 *)0x0) {
LAB_103ad704c:
          uVar30 = 0;
        }
        else {
          puVar26 = puVar31;
          func_0x000107c5d388();
          func_0x000107c61170(puVar31);
          if (puVar26 != (undefined8 *)0x1) goto LAB_103ad704c;
          uVar30 = 1;
        }
        uVar17 = 0xd000000000000028;
        func_0x000107c5fadc(0xd000000000000028,0x800000010f19cf30);
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar17);
        puVar21 = &UNK_1106cd7a8;
        func_0x000107c613fc(&UNK_1106cd7a8,0xb8,7);
        *(undefined8 **)(puVar21 + 0x10) = param_1;
        *(long *)(puVar21 + 0x18) = unaff_x20;
        *(undefined8 **)(puVar21 + 0x20) = puVar9;
        *(undefined8 **)(puVar21 + 0x28) = puVar10;
        *(undefined8 **)(puVar21 + 0x30) = puVar8;
        *(undefined8 **)(puVar21 + 0x38) = puVar22;
        *(undefined8 **)(puVar21 + 0x40) = puVar24;
        *(undefined8 **)(puVar21 + 0x48) = puVar11;
        *(undefined8 **)(puVar21 + 0x50) = puVar25;
        *(undefined8 **)(puVar21 + 0x58) = puVar12;
        *(undefined8 **)(puVar21 + 0x60) = puVar13;
        *(undefined8 *)(puVar21 + 0x68) = uVar30;
        puVar21[0x70] = (char)iVar5;
        *(undefined8 **)(puVar21 + 0x78) = puStack_c8;
        *(undefined8 **)(puVar21 + 0x80) = puStack_b8;
        *(long *)(puVar21 + 0x88) = lVar15;
        *(undefined **)(puVar21 + 0x90) = puVar14;
        puVar21[0x98] = uVar4;
        *(undefined8 **)(puVar21 + 0xa0) = puVar7;
        puVar21[0xa8] = (char)uVar28;
        *(long *)(puVar21 + 0xb0) = lVar6;
        func_0x000100de78a0(puStack_c8,puStack_b8);
        func_0x000107c61174(param_1);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615f0(lVar15);
        func_0x000107c61174(puVar14);
        puVar8 = puVar7;
        func_0x000107c61174(puVar7);
        puVar22 = (undefined8 *)0x109;
        func_0x0001001ca524(0x109,0,0x40,3,0,0,&UNK_10dc50188,puVar21,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar21);
        puVar21 = &UNK_1106cd348;
        func_0x000107c613fc(&UNK_1106cd348,0x18,7);
        func_0x000107c61614(puVar21 + 0x10,unaff_x20);
        puVar23 = &UNK_1106cd7d0;
        func_0x000107c613fc(&UNK_1106cd7d0,0x20,7);
        *(undefined8 **)(puVar23 + 0x10) = puVar22;
        *(undefined **)(puVar23 + 0x18) = puVar21;
        pcStack_88 = FUN_103ade300;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1106cd7e8;
        ppuVar20 = &puStack_a8;
        puStack_80 = puVar23;
        func_0x000107c60bc4(ppuVar20);
        puVar21 = puStack_80;
        func_0x000107c6157c(puVar22);
        func_0x000107c61574(puVar21);
        func_0x000107c53164(puVar8);
        func_0x000107c61170(puVar14);
        func_0x000107c615e8(lVar15);
        func_0x0001000b44c0(puStack_c8,puStack_b8);
        func_0x000107c61170(puVar9);
        func_0x000107c60bd0(ppuVar20);
        func_0x000107c61574(puVar22);
        goto LAB_103ad6950;
      }
      func_0x000107c6142c(puVar8);
      puVar8 = puVar24;
    }
    func_0x000107c6142c();
    FUN_103addd84();
    puVar22 = (undefined8 *)&UNK_1106cd970;
    func_0x000107c613f8(&UNK_1106cd970,puVar8,0,0);
    *puVar8 = 6;
  }
  *(undefined1 *)(puVar8 + 1) = 2;
  func_0x000107c61654();
  func_0x000107c61170(puVar9);
  puVar8 = puVar22;
  func_0x000107c5ed2c(puVar22);
  func_0x000107c43b70(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c614ac(puVar22);
LAB_103ad6950:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  func_0x000107c60e78();
  return puVar22;
}



/* Entry: 103ad7274; end: 103ad7277;  */

void FUN_103ad7274(void)

{
  return;
}



/* Entry: 103ad7278; end: 103ad7377;  */

void FUN_103ad7278(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,undefined1 param_14,undefined4 param_15,long param_16,
                  long param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
                  undefined4 param_21,undefined8 param_22,undefined1 param_23)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x163) = param_23;
  *(undefined8 *)(unaff_x22 + 0x140) = param_22;
  *(undefined1 *)(unaff_x22 + 0x162) = param_20;
  *(undefined8 *)(unaff_x22 + 0x138) = param_19;
  *(undefined8 *)(unaff_x22 + 0x130) = param_18;
  *(long *)(unaff_x22 + 0x120) = param_5;
  *(long *)(unaff_x22 + 0x128) = param_6;
  *(long *)(unaff_x22 + 0x110) = param_3;
  *(long *)(unaff_x22 + 0x118) = param_4;
  plVar1 = (long *)0x460;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103ad7378;
  plVar1[99] = param_3;
  plVar1[0x62] = param_17;
  plVar1[0x61] = param_16;
  *(undefined1 *)(plVar1 + 0x8a) = param_14;
  plVar1[0x60] = param_13;
  plVar1[0x5f] = param_12;
  plVar1[0x5e] = param_11;
  plVar1[0x5d] = param_10;
  plVar1[0x5c] = param_9;
  plVar1[0x5b] = param_8;
  plVar1[0x5a] = param_7;
  plVar1[0x59] = param_6;
  plVar1[0x58] = param_5;
  plVar1[0x57] = param_4;
  plVar1[0x56] = param_2;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[100] = uVar2;
  lVar3 = 0;
  func_0x000103adddc4();
  plVar1[0x65] = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x66] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x67] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad7c80,0,0);
  return;
}



/* Entry: 103ad7378; end: 103ad73d7;  */

void FUN_103ad7378(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x150) = param_1;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ad73d8;
  }
  else {
    pcVar1 = FUN_103ad778c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ad73d8; end: 103ad754f;  */

void FUN_103ad73d8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x130);
  if (lVar6 != 0) {
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x161;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_103ad7550;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c61448(lVar1,0);
    uVar3 = 0x112df01c0;
    func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xe0) = &UNK_101a67e30;
    *(undefined **)(unaff_x22 + 0xe8) = &UNK_1106cd860;
    *(long *)(unaff_x22 + 0xf0) = lVar1;
    func_0x000107c4feb8(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar2 = PTR_PTR_1126ad8c8;
  func_0x000107c610f8(PTR_PTR_1126ad8c8);
  func_0x000107c453e4();
  uVar3 = 0x6465766f6d6572;
  func_0x000107c5fadc(0x6465766f6d6572,0xe700000000000000);
  uVar4 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106f47780(puVar2,uVar3,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c43b74(uVar5);
  func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000103ad754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad7550; end: 103ad758f;  */

void FUN_103ad7550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad7590,0,0);
  return;
}



/* Entry: 103ad7590; end: 103ad765b;  */

void FUN_103ad7590(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar1 = PTR_PTR_1126ad8c8;
  func_0x000107c610f8(PTR_PTR_1126ad8c8);
  func_0x000107c453e4();
  uVar2 = 0x6465766f6d6572;
  func_0x000107c5fadc(0x6465766f6d6572,0xe700000000000000);
  uVar3 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106f47780(puVar1,uVar2,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c43b74(uVar4);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103ad7658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad765c; end: 103ad769b;  */

void FUN_103ad765c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad769c,0,0);
  return;
}



/* Entry: 103ad769c; end: 103ad778b;  */

void FUN_103ad769c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar1 = PTR_PTR_1126ad8c8;
  func_0x000107c610f8(PTR_PTR_1126ad8c8);
  func_0x000107c453e4();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = 0x6465766f6d6572;
  uVar4 = 0xe700000000000000;
  func_0x000107c5fadc(0x6465766f6d6572,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  uVar3 = uVar6;
  FUN_103add418(uVar6);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  func_0x000106f47780(puVar1,uVar2,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c614ac(uVar6);
  uVar3 = uVar6;
  func_0x000107c5ed2c(uVar6);
  func_0x000107c43b70(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c614ac(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103ad7788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad778c; end: 103ad7a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad778c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  if (*(char *)(unaff_x22 + 0x163) == '\x01') {
    uVar1 = *(ulong *)(unaff_x22 + 0x158);
    func_0x000103add5e4();
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x110) + _DAT_112fe89d8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
        func_0x000107c5fadc(uVar6,*(undefined8 *)(unaff_x22 + 0x128));
        func_0x000107c5ed2c(uVar5);
        uVar8 = uVar5;
        func_0x000107c5ed2c();
        func_0x000107c61170(uVar5);
        uVar5 = 0xd000000000000011;
        func_0x000107c5fadc(0xd000000000000011,0x800000010f19cf90);
        func_0x000107c41ba4(lVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x158);
  func_0x000107c614b0(uVar1);
  func_0x000103add6d8();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(unaff_x22 + 0x163) == '\x01') {
      uVar1 = *(ulong *)(unaff_x22 + 0x158);
      func_0x000103add5e4();
      if ((uVar1 & 1) != 0) goto LAB_103ad7880;
    }
    if (*(char *)(unaff_x22 + 0x162) != '\0') {
      if (*(char *)(unaff_x22 + 0x162) == '\x01') {
        uVar6 = 0x64656e6574666f73;
        if (*(long *)(unaff_x22 + 0x130) != 0) {
          func_0x000107c4c4c4();
        }
        uVar8 = 0xe800000000000000;
      }
      else {
        uVar8 = 0xe800000000000000;
        uVar6 = 0x64656e6961746572;
      }
      goto LAB_103ad79ac;
    }
  }
LAB_103ad7880:
  lVar2 = *(long *)(unaff_x22 + 0x130);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x160;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103ad765c;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    uVar6 = 0x112df01c0;
    func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_101a67e30;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106cd838;
    *(long *)(unaff_x22 + 0xb0) = lVar3;
    func_0x000107c4feb8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar8 = 0xe700000000000000;
  uVar6 = 0x6465766f6d6572;
LAB_103ad79ac:
  puVar4 = PTR_PTR_1126ad8c8;
  func_0x000107c610f8(PTR_PTR_1126ad8c8);
  func_0x000107c453e4();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = uVar8;
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  uVar8 = uVar7;
  func_0x000103add418(uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000106f47780(puVar4,uVar6,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c614ac(uVar7);
  uVar6 = uVar7;
  func_0x000107c5ed2c(uVar7);
  func_0x000107c43b70(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c614ac(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000103ad7a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad7a74; end: 103ad7b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad7a74(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar1 = PTR___sytN_11034f1b0;
  func_0x000107c5fd50(param_1,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112fe89c8;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112fe89c8,auStack_60,0,0);
    lVar3 = *(long *)(param_2 + lVar3);
    func_0x000107c6157c(lVar3);
    func_0x000107c61170(param_2);
    if (lVar3 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fd50(lVar3,puVar1 + 8,uVar2,PTR___ss5ErrorWS_11034ee10);
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 103ad7b4c; end: 103ad7ba7; -[_TtC18SCSnapUploaderImpl12SnapUploader uploadWithRequest:] */

void FUN_103ad7b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103ad6644(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ad7ba8; end: 103ad7c7f;  */

void FUN_103ad7ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x318) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x310) = param_15;
  *(undefined8 *)(unaff_x22 + 0x308) = param_14;
  *(undefined1 *)(unaff_x22 + 0x450) = param_12;
  *(undefined8 *)(unaff_x22 + 0x300) = param_11;
  *(undefined8 *)(unaff_x22 + 0x2f8) = param_10;
  *(undefined8 *)(unaff_x22 + 0x2f0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x2e8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x2e0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x2d8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 800) = uVar1;
  lVar2 = 0;
  func_0x000103adddc4();
  *(long *)(unaff_x22 + 0x328) = lVar2;
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x330) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x338) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad7c80,0,0);
  return;
}



/* Entry: 103ad7c80; end: 103ad83af;  */

/* WARNING: Removing unreachable block (ram,0x000103ad8000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad7c80(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if ((*(byte *)(unaff_x22 + 0x450) & 1) == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe8a00);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x2e8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x2d8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
      param_2 = *(ulong *)(unaff_x22 + 0x2c8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x2c0);
      func_0x0001044d64d8(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar10);
      func_0x000107c61434(uVar14);
      func_0x0001044d5bec(uVar15,uVar14,uVar13,uVar10);
      func_0x000107c5fadc(uVar16);
      func_0x000107c5451c(lVar1);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar15);
      func_0x000107c615e8(lVar1);
    }
    lVar1 = *(long *)(unaff_x22 + 0x2b8);
    func_0x000107c3f5f8();
    func_0x000107c61180();
    uVar11 = 0;
    if (lVar1 == 0) {
LAB_103ad7dc0:
      func_0x00010011df08();
      func_0x000107c61180();
      uVar6 = param_2;
      if (uVar11 == 0) {
        func_0x000107c5faec();
        uVar6 = param_2;
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c53200(*(undefined8 *)(unaff_x22 + 0x2b8));
      func_0x000107c61170(uVar11);
    }
    else {
      uVar11 = *(ulong *)(unaff_x22 + 0x2b8);
      func_0x000107c61170();
      func_0x000107c3f5f8();
      func_0x000107c61180();
      uVar6 = param_2;
      if (uVar11 != 0) {
        uVar2 = uVar11;
        func_0x000107c5faec();
        uVar6 = param_2;
        func_0x000107c61170(uVar11);
        uVar11 = param_2;
        func_0x000107c6142c();
        uVar2 = uVar2 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar2 = param_2 >> 0x38 & 0xf;
        }
        param_2 = uVar6;
        if (uVar2 == 0) goto LAB_103ad7dc0;
      }
    }
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar11 = *(ulong *)(unaff_x22 + 0x310);
      uVar6 = *(ulong *)(unaff_x22 + 0x2c8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x2c0);
      func_0x000107c5fadc(uVar15,uVar6);
      if (uVar11 >> 0x3c < 0xf) {
        uVar6 = *(ulong *)(unaff_x22 + 0x310);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x308);
        func_0x000107c5ee20(uVar16,uVar6);
      }
      else {
        uVar16 = 0;
      }
      *(code **)(unaff_x22 + 0x140) = FUN_103ada3d4;
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined **)(unaff_x22 + 0x120) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x128) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x130) = &UNK_1014c8004;
      *(undefined **)(unaff_x22 + 0x138) = &UNK_1106cd568;
      lVar12 = unaff_x22 + 0x120;
      func_0x000107c60bc4(lVar12);
      func_0x000107c4e658(lVar1);
      func_0x000107c60bd0(lVar12);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar15);
      func_0x000107c615e8(lVar1);
    }
    lVar1 = *(long *)(unaff_x22 + 0x2b8);
    func_0x000107c3f5f8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar12 = 0;
      uVar6 = 0;
    }
    else {
      lVar12 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    FUN_103adbca4(*(undefined8 *)(unaff_x22 + 0x2c0),*(undefined8 *)(unaff_x22 + 0x2c8),lVar12,uVar6
                 );
    func_0x000107c6142c(uVar6);
  }
  lVar1 = _DAT_112fe89c8;
  lVar12 = *(long *)(unaff_x22 + 0x318);
  func_0x000107c61428(lVar12 + _DAT_112fe89c8,unaff_x22 + 0x1b0,0,0);
  lVar1 = *(long *)(lVar12 + lVar1);
  *(long *)(unaff_x22 + 0x340) = lVar1;
  if (lVar1 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c6157c(lVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x348) = plVar8;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_103ad83b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScT5valuexvg_11034fdb8)();
    return;
  }
  func_0x000107c5fd64();
  lVar12 = *(long *)(unaff_x22 + 0x318);
  iVar9 = (int)*(undefined8 *)(unaff_x22 + 0x2b8);
  uVar10 = *(undefined8 *)(lVar12 + _DAT_112fe8a10);
  *(undefined8 *)(unaff_x22 + 0x358) = uVar10;
  uVar15 = uVar10;
  func_0x000107c3ebd4();
  func_0x000107c4491c();
  uVar16 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f19cd20);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar16);
  lVar1 = 0;
  uVar13 = *(undefined8 *)(lVar12 + _DAT_112fe89e0);
  uVar16 = *(undefined8 *)(lVar12 + _DAT_112fe89f0);
  if ((int)uVar10 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  *(long *)(unaff_x22 + 0x360) = lVar1;
  lVar12 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar3 = lVar12;
    func_0x000107c5cef4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    if (lVar3 != 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x2c0);
      puVar4 = &UNK_1106cd550;
      func_0x000107c613fc(&UNK_1106cd550,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar3);
      lVar12 = 0;
      func_0x000103ae8d6c();
      func_0x000107c613fc();
      puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c6157c(puVar4);
      func_0x000107c453e4();
      func_0x000107c615e8(lVar3);
      *(undefined **)(lVar12 + 0x40) = puVar5;
      *(undefined8 *)(lVar12 + 0x48) = 0;
      *(undefined1 *)(lVar12 + 0x50) = 0;
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
      *(undefined8 *)(lVar12 + 0x18) = uVar14;
      *(code **)(lVar12 + 0x30) = FUN_103ae8c54;
      *(undefined8 *)(lVar12 + 0x38) = 0;
      *(code **)(lVar12 + 0x20) = FUN_103ade068;
      *(undefined **)(lVar12 + 0x28) = puVar4;
      func_0x000107c61434(uVar14);
      func_0x000107c61574(puVar4);
      goto LAB_103ad8204;
    }
  }
  lVar12 = 0;
LAB_103ad8204:
  *(long *)(unaff_x22 + 0x368) = lVar12;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2f0);
  if (lVar1 == 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar4 = &UNK_1106cd410;
    func_0x000107c613fc(&UNK_1106cd410,0x49,7);
    *(long *)(puVar4 + 0x10) = lVar12;
    *(undefined8 *)(puVar4 + 0x18) = uVar17;
    *(undefined8 *)(puVar4 + 0x20) = uVar14;
    *(undefined8 *)(puVar4 + 0x28) = uVar10;
    *(undefined8 *)(puVar4 + 0x30) = uVar13;
    *(undefined8 *)(puVar4 + 0x38) = uVar18;
    *(undefined8 *)(puVar4 + 0x40) = uVar16;
    puVar4[0x48] = (char)uVar15;
    func_0x000107c6157c(lVar12);
    func_0x000107c61174(uVar13);
    func_0x000107c61174(uVar16);
    piVar7 = (int *)&UNK_10dc50140;
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar4 = &UNK_1106cd528;
    func_0x000107c613fc(&UNK_1106cd528,0x49,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar13;
    *(undefined8 *)(puVar4 + 0x20) = uVar16;
    *(undefined8 *)(puVar4 + 0x28) = uVar17;
    *(undefined8 *)(puVar4 + 0x30) = uVar10;
    *(undefined8 *)(puVar4 + 0x38) = uVar18;
    *(undefined8 *)(puVar4 + 0x40) = uVar14;
    puVar4[0x48] = (char)uVar15;
    func_0x000107c61434(uVar16);
    piVar7 = (int *)&UNK_10dc50170;
  }
  *(undefined **)(unaff_x22 + 0x378) = puVar4;
  *(int **)(unaff_x22 + 0x370) = piVar7;
  if (iVar9 == 0) {
    iVar9 = *piVar7;
    plVar8 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c61174(uVar17);
    func_0x000107c615f0(lVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x3b0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_103ad8de0;
                    /* WARNING: Could not recover jumptable at 0x000103ad8360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar9 + (long)piVar7))();
    return;
  }
  if (lVar12 == 0) {
    func_0x000107c615f0(lVar1);
    func_0x000107c61174(uVar17);
  }
  else {
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(lVar12);
    func_0x000107c61174(uVar17);
    FUN_103ae8ae0(1);
    func_0x000107c61574(lVar12);
  }
  uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89e8);
  *(undefined8 *)(unaff_x22 + 0x380) = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad8804,uVar15,0);
  return;
}



/* Entry: 103ad83b0; end: 103ad8427;  */

void FUN_103ad83b0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x350) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x348));
  uVar3 = *(undefined8 *)(lVar2 + 0x340);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_103ad8428;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_103ad9f84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ad8428; end: 103ad8803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad8428(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)(unaff_x22 + 0x350);
  func_0x000107c5fd64();
  if (lVar10 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar6 = *(undefined8 *)(unaff_x22 + 800);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103ad849c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar11 = *(long *)(unaff_x22 + 0x318);
  iVar8 = (int)*(undefined8 *)(unaff_x22 + 0x2b8);
  uVar7 = *(undefined8 *)(lVar11 + _DAT_112fe8a10);
  *(undefined8 *)(unaff_x22 + 0x358) = uVar7;
  uVar6 = uVar7;
  func_0x000107c3ebd4();
  func_0x000107c4491c();
  uVar9 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f19cd20);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar9);
  lVar10 = 0;
  uVar12 = *(undefined8 *)(lVar11 + _DAT_112fe89e0);
  uVar9 = *(undefined8 *)(lVar11 + _DAT_112fe89f0);
  if ((int)uVar7 != 0) {
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  *(long *)(unaff_x22 + 0x360) = lVar10;
  lVar11 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar1 = lVar11;
    func_0x000107c5cef4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar1 != 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x2c0);
      puVar2 = &UNK_1106cd550;
      func_0x000107c613fc(&UNK_1106cd550,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      lVar11 = 0;
      func_0x000103ae8d6c();
      func_0x000107c613fc();
      puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c6157c(puVar2);
      func_0x000107c453e4();
      func_0x000107c615e8(lVar1);
      *(undefined **)(lVar11 + 0x40) = puVar3;
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(undefined1 *)(lVar11 + 0x50) = 0;
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
      *(undefined8 *)(lVar11 + 0x18) = uVar13;
      *(code **)(lVar11 + 0x30) = FUN_103ae8c54;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(code **)(lVar11 + 0x20) = FUN_103ade068;
      *(undefined **)(lVar11 + 0x28) = puVar2;
      func_0x000107c61434(uVar13);
      func_0x000107c61574(puVar2);
      goto LAB_103ad8654;
    }
  }
  lVar11 = 0;
LAB_103ad8654:
  *(long *)(unaff_x22 + 0x368) = lVar11;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2f0);
  if (lVar10 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar2 = &UNK_1106cd410;
    func_0x000107c613fc(&UNK_1106cd410,0x49,7);
    *(long *)(puVar2 + 0x10) = lVar11;
    *(undefined8 *)(puVar2 + 0x18) = uVar14;
    *(undefined8 *)(puVar2 + 0x20) = uVar13;
    *(undefined8 *)(puVar2 + 0x28) = uVar7;
    *(undefined8 *)(puVar2 + 0x30) = uVar12;
    *(undefined8 *)(puVar2 + 0x38) = uVar15;
    *(undefined8 *)(puVar2 + 0x40) = uVar9;
    puVar2[0x48] = (char)uVar6;
    func_0x000107c6157c(lVar11);
    func_0x000107c61174(uVar12);
    func_0x000107c61174(uVar9);
    piVar5 = (int *)&UNK_10dc50140;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar2 = &UNK_1106cd528;
    func_0x000107c613fc(&UNK_1106cd528,0x49,7);
    *(long *)(puVar2 + 0x10) = lVar10;
    *(undefined8 *)(puVar2 + 0x18) = uVar12;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x28) = uVar14;
    *(undefined8 *)(puVar2 + 0x30) = uVar7;
    *(undefined8 *)(puVar2 + 0x38) = uVar15;
    *(undefined8 *)(puVar2 + 0x40) = uVar13;
    puVar2[0x48] = (char)uVar6;
    func_0x000107c61434(uVar9);
    piVar5 = (int *)&UNK_10dc50170;
  }
  *(undefined **)(unaff_x22 + 0x378) = puVar2;
  *(int **)(unaff_x22 + 0x370) = piVar5;
  if (iVar8 != 0) {
    if (lVar11 == 0) {
      func_0x000107c615f0(lVar10);
      func_0x000107c61174(uVar14);
    }
    else {
      func_0x000107c615f0(lVar10);
      func_0x000107c6157c(lVar11);
      func_0x000107c61174(uVar14);
      FUN_103ae8ae0(1);
      func_0x000107c61574(lVar11);
    }
    uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89e8);
    *(undefined8 *)(unaff_x22 + 0x380) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad8804,uVar6,0);
    return;
  }
  iVar8 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c61174(uVar14);
  func_0x000107c615f0(lVar10);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x3b0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103ad8de0;
                    /* WARNING: Could not recover jumptable at 0x000103ad87b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar8 + (long)piVar5))();
  return;
}



/* Entry: 103ad8804; end: 103ad889b;  */

void FUN_103ad8804(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x388) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000023;
  func_0x000100029b28(0xd000000000000023,0x800000010f19ce20);
  *(undefined8 *)(unaff_x22 + 0x390) = uVar2;
  func_0x000107c61170(uVar1);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x398) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103ad889c;
  lVar4 = *(long *)(unaff_x22 + 0x380);
  plVar3[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adcad8,lVar4,0);
  return;
}



/* Entry: 103ad889c; end: 103ad88e7;  */

void FUN_103ad889c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x380);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x398));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad88e8,uVar1,0);
  return;
}



/* Entry: 103ad88e8; end: 103ad8983;  */

void FUN_103ad88e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x390);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x388);
  piVar6 = *(int **)(unaff_x22 + 0x370);
  func_0x000107c61428(puVar4,unaff_x22 + 600,0,0);
  uVar2 = *puVar4;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar2);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x3a0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103ad8984;
                    /* WARNING: Could not recover jumptable at 0x000103ad8980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))();
  return;
}



/* Entry: 103ad8984; end: 103ad89eb;  */

void FUN_103ad8984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x150) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x158) = param_1;
  *(undefined8 *)(lVar2 + 0x160) = param_2;
  *(undefined8 *)(lVar2 + 0x168) = param_3;
  *(undefined8 *)(lVar2 + 0x170) = param_4;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  *(long *)(lVar2 + 0x3a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ad89ec;
  }
  else {
    pcVar1 = FUN_103ad8d30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x380),0);
  return;
}



/* Entry: 103ad89ec; end: 103ad8a27;  */

void FUN_103ad89ec(void)

{
  FUN_103adccc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad8a28,0,0);
  return;
}



/* Entry: 103ad8a28; end: 103ad8d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad8a28(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar13 = *(long *)(unaff_x22 + 0x3a8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(ulong *)(unaff_x22 + 0x160);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x3c0) = uVar10;
  *(ulong *)(unaff_x22 + 0x3c8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x3d0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x3d8) = uVar16;
  func_0x000107c5fd64();
  if (lVar13 != 0) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x360);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar16);
    func_0x000107c61574(uVar15);
    func_0x000107c61170(uVar6);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar10 = *(undefined8 *)(unaff_x22 + 800);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000103ad8ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar14 = *(ulong *)(unaff_x22 + 0x310);
  if (uVar14 >> 0x3c < 0xf) {
    uVar1 = (uint)(uVar14 >> 0x20);
    uVar9 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((uVar14 & 0xff000000000000) == 0) goto LAB_103ad8b38;
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x308);
        if ((long)(int)lVar13 == lVar13 >> 0x20) goto LAB_103ad8be4;
LAB_103ad8b5c:
        func_0x00010006c00c(lVar13,uVar14);
        uVar14 = *(ulong *)(unaff_x22 + 0x310);
      }
      uVar17 = *(ulong *)(unaff_x22 + 0x358);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x308);
      uVar2 = 0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f19cdf0);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar2);
      func_0x0001000b44c0(uVar18);
      param_2 = uVar14;
      if ((uVar17 & 1) != 0) {
        FUN_103adacf8(uVar10,uVar6,uVar15,uVar16,*(undefined8 *)(unaff_x22 + 0x308),
                      *(undefined8 *)(unaff_x22 + 0x310));
        uVar8 = 1;
        goto LAB_103ad8be8;
      }
    }
    else if (uVar9 == 2) {
      lVar13 = *(long *)(unaff_x22 + 0x308);
      if (*(long *)(lVar13 + 0x10) != *(long *)(lVar13 + 0x18)) goto LAB_103ad8b5c;
    }
    else {
LAB_103ad8b38:
      func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x308));
      param_2 = uVar14;
    }
  }
LAB_103ad8be4:
  uVar6 = param_2;
  uVar8 = 0;
LAB_103ad8be8:
  *(undefined1 *)(unaff_x22 + 0x451) = uVar8;
  puVar3 = *(undefined8 **)(unaff_x22 + 0x2b8);
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    uVar6 = 0;
  }
  else {
    puVar12 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  *(ulong *)(unaff_x22 + 1000) = uVar6;
  *(undefined8 **)(unaff_x22 + 0x3e0) = puVar12;
  lVar13 = *(long *)(unaff_x22 + 0x318);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x3f0) = puVar3;
  func_0x000107c61428();
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  uVar15 = 0xd000000000000016;
  func_0x000100029b28(0xd000000000000016,0x800000010f19cd60);
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar15;
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112fe8b68,&UNK_10dc50148);
  plVar4 = *(long **)(lVar13 + _DAT_112fe89d8);
  func_0x0001000bda74();
  *(long **)(unaff_x22 + 0x400) = plVar4;
  uVar10 = 0x112fe8b70;
  func_0x0001000285a8(0x112fe8b70,&UNK_10dc50150);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar10;
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x408) = plVar5;
  plVar7 = plVar5;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x410) = plVar7;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ad9150;
  plVar5[0xb] = (long)plVar7;
  plVar5[0xc] = unaff_x22 + 0x290;
  plVar5[9] = unaff_x22 + 0x288;
  plVar5[10] = (long)&UNK_1107a6f08;
  plVar5[8] = unaff_x22 + 0x280;
  lVar11 = *plVar4;
  plVar5[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar13 = 0x10;
  _swift_task_alloc();
  plVar5[0xe] = lVar13;
  lVar13 = *(long *)(lVar11 + 0x50);
  plVar5[0xf] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  plVar5[0x10] = lVar13;
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0x11] = uVar6;
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  plVar5[0x12] = (long)plVar7;
  *plVar7 = (long)plVar5;
  plVar7[1] = (long)&UNK_104876614;
  plVar7[5] = uVar6;
  plVar7[6] = (long)plVar4;
  lVar11 = *(long *)(*plVar4 + 0x50);
  plVar7[7] = lVar11;
  lVar13 = 0;
  __sSqMa(0,lVar11);
  plVar7[8] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  plVar7[9] = lVar13;
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar6;
  lVar13 = *(long *)(lVar11 + -8);
  plVar7[0xb] = lVar13;
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 103ad8d30; end: 103ad8d6b;  */

void FUN_103ad8d30(void)

{
  FUN_103adccc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad8d6c,0,0);
  return;
}



/* Entry: 103ad8d6c; end: 103ad8ddf;  */

void FUN_103ad8d6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x360);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ad8ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad8de0; end: 103ad8e47;  */

void FUN_103ad8de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x180) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x188) = param_1;
  *(undefined8 *)(lVar2 + 400) = param_2;
  *(undefined8 *)(lVar2 + 0x198) = param_3;
  *(undefined8 *)(lVar2 + 0x1a0) = param_4;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  *(long *)(lVar2 + 0x3b8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ad8e48;
  }
  else {
    pcVar1 = FUN_103ada360;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ad8e48; end: 103ad914f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad8e48(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar13 = *(long *)(unaff_x22 + 0x3b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(ulong *)(unaff_x22 + 400);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x3c0) = uVar10;
  *(ulong *)(unaff_x22 + 0x3c8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x3d0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x3d8) = uVar16;
  func_0x000107c5fd64();
  if (lVar13 != 0) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x360);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar16);
    func_0x000107c61574(uVar15);
    func_0x000107c61170(uVar6);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar10 = *(undefined8 *)(unaff_x22 + 800);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000103ad8f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar14 = *(ulong *)(unaff_x22 + 0x310);
  if (uVar14 >> 0x3c < 0xf) {
    uVar1 = (uint)(uVar14 >> 0x20);
    uVar9 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((uVar14 & 0xff000000000000) == 0) goto LAB_103ad8f58;
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x308);
        if ((long)(int)lVar13 == lVar13 >> 0x20) goto LAB_103ad9004;
LAB_103ad8f7c:
        func_0x00010006c00c(lVar13,uVar14);
        uVar14 = *(ulong *)(unaff_x22 + 0x310);
      }
      uVar17 = *(ulong *)(unaff_x22 + 0x358);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x308);
      uVar2 = 0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f19cdf0);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar2);
      func_0x0001000b44c0(uVar18);
      param_2 = uVar14;
      if ((uVar17 & 1) != 0) {
        FUN_103adacf8(uVar10,uVar6,uVar15,uVar16,*(undefined8 *)(unaff_x22 + 0x308),
                      *(undefined8 *)(unaff_x22 + 0x310));
        uVar8 = 1;
        goto LAB_103ad9008;
      }
    }
    else if (uVar9 == 2) {
      lVar13 = *(long *)(unaff_x22 + 0x308);
      if (*(long *)(lVar13 + 0x10) != *(long *)(lVar13 + 0x18)) goto LAB_103ad8f7c;
    }
    else {
LAB_103ad8f58:
      func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x308));
      param_2 = uVar14;
    }
  }
LAB_103ad9004:
  uVar6 = param_2;
  uVar8 = 0;
LAB_103ad9008:
  *(undefined1 *)(unaff_x22 + 0x451) = uVar8;
  puVar3 = *(undefined8 **)(unaff_x22 + 0x2b8);
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    uVar6 = 0;
  }
  else {
    puVar12 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  *(ulong *)(unaff_x22 + 1000) = uVar6;
  *(undefined8 **)(unaff_x22 + 0x3e0) = puVar12;
  lVar13 = *(long *)(unaff_x22 + 0x318);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x3f0) = puVar3;
  func_0x000107c61428();
  uVar10 = *puVar3;
  func_0x000107c61174(uVar10);
  uVar15 = 0xd000000000000016;
  func_0x000100029b28(0xd000000000000016,0x800000010f19cd60);
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar15;
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112fe8b68,&UNK_10dc50148);
  plVar4 = *(long **)(lVar13 + _DAT_112fe89d8);
  func_0x0001000bda74();
  *(long **)(unaff_x22 + 0x400) = plVar4;
  uVar10 = 0x112fe8b70;
  func_0x0001000285a8(0x112fe8b70,&UNK_10dc50150);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar10;
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x408) = plVar5;
  plVar7 = plVar5;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x410) = plVar7;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ad9150;
  plVar5[0xb] = (long)plVar7;
  plVar5[0xc] = unaff_x22 + 0x290;
  plVar5[9] = unaff_x22 + 0x288;
  plVar5[10] = (long)&UNK_1107a6f08;
  plVar5[8] = unaff_x22 + 0x280;
  lVar11 = *plVar4;
  plVar5[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar13 = 0x10;
  _swift_task_alloc();
  plVar5[0xe] = lVar13;
  lVar13 = *(long *)(lVar11 + 0x50);
  plVar5[0xf] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  plVar5[0x10] = lVar13;
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0x11] = uVar6;
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  plVar5[0x12] = (long)plVar7;
  *plVar7 = (long)plVar5;
  plVar7[1] = (long)&UNK_104876614;
  plVar7[5] = uVar6;
  plVar7[6] = (long)plVar4;
  lVar11 = *(long *)(*plVar4 + 0x50);
  plVar7[7] = lVar11;
  lVar13 = 0;
  __sSqMa(0,lVar11);
  plVar7[8] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  plVar7[9] = lVar13;
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar6;
  lVar13 = *(long *)(lVar11 + -8);
  plVar7[0xb] = lVar13;
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 103ad9150; end: 103ad91b7;  */

void FUN_103ad9150(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x408));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x400));
    pcVar1 = FUN_103ad91b8;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x400));
    pcVar1 = FUN_103ad9424;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ad91b8; end: 103ad9423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad91b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x280);
  *(undefined8 *)(unaff_x22 + 0x418) = uVar11;
  if (*(long *)(unaff_x22 + 0x3d8) != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x2c0);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0x2c8));
    func_0x000107c5a50c(uVar11);
    func_0x000107c61170(uVar1);
  }
  lVar9 = *(long *)(unaff_x22 + 1000);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2c0);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 0x2c8));
  func_0x000107c5fadc(uVar15,uVar12);
  func_0x000107c5fadc(uVar14,uVar13);
  if (lVar9 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x3e0);
    func_0x000107c5fadc(uVar12,*(undefined8 *)(unaff_x22 + 1000));
  }
  lVar9 = *(long *)(unaff_x22 + 0x318);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2c0);
  puVar2 = &UNK_1106cd348;
  func_0x000107c613fc(&UNK_1106cd348,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar9);
  puVar3 = &UNK_1106cd438;
  func_0x000107c613fc(&UNK_1106cd438,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar13;
  *(undefined8 *)(puVar3 + 0x20) = uVar16;
  *(code **)(unaff_x22 + 0xb0) = FUN_103adde8c;
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  puVar4 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0x103aded2c;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106cd450;
  func_0x000107c60bc4();
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61434(uVar16);
  func_0x000107c61574(uVar13);
  func_0x000107c5a23c(uVar11);
  func_0x000107c60bd0(puVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112fe8b78,&UNK_10dc50158);
  plVar5 = *(long **)(lVar9 + _DAT_112fe89d0);
  func_0x0001000bda74();
  *(long **)(unaff_x22 + 0x420) = plVar5;
  uVar11 = 0x112fe8b80;
  func_0x0001000285a8(0x112fe8b80,&UNK_10dc50160);
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar11;
  plVar6 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x428) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103ad9524;
  plVar6[0xb] = *(long *)(unaff_x22 + 0x410);
  plVar6[0xc] = unaff_x22 + 0x2a8;
  plVar6[9] = unaff_x22 + 0x2a0;
  plVar6[10] = (long)&UNK_1107a6f08;
  plVar6[8] = unaff_x22 + 0x298;
  lVar10 = *plVar5;
  plVar6[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar9 = 0x10;
  _swift_task_alloc();
  plVar6[0xe] = lVar9;
  lVar9 = *(long *)(lVar10 + 0x50);
  plVar6[0xf] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[0x10] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0x11] = uVar7;
  plVar8 = (long *)0x70;
  _swift_task_alloc();
  plVar6[0x12] = (long)plVar8;
  *plVar8 = (long)plVar6;
  plVar8[1] = (long)&UNK_104876614;
  plVar8[5] = uVar7;
  plVar8[6] = (long)plVar5;
  lVar10 = *(long *)(*plVar5 + 0x50);
  plVar8[7] = lVar10;
  lVar9 = 0;
  __sSqMa(0,lVar10);
  plVar8[8] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar8[9] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar7;
  lVar9 = *(long *)(lVar10 + -8);
  plVar8[0xb] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 103ad9424; end: 103ad9523;  */

void FUN_103ad9424(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x410);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3f8);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x3f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 1000);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar6;
  func_0x000107c61428(puVar3,unaff_x22 + 0x1e0,0,0);
  uVar6 = *puVar3;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar4);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x360);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(uVar2);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ad9520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad9524; end: 103ad958b;  */

void FUN_103ad9524(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x428));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x420));
    pcVar1 = FUN_103ad958c;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x420));
    pcVar1 = FUN_103ad9728;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ad958c; end: 103ad96b7;  */

void FUN_103ad958c(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 *puVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x430) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x330);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103ad96b8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  func_0x000107c5fadc(uVar6,uVar4);
  pcVar2 = 
  "runUpload(uploadId:mediaData:overlayData:encryptionKey:encryptionIv:mediaType:captureSessionId:videoCodec:)"
  ;
  func_0x0001000c10c0(
                     "runUpload(uploadId:mediaData:overlayData:encryptionKey:encryptionIv:mediaType:captureSessionId:videoCodec:)"
                     );
  func_0x000107c61180();
  puVar3 = &UNK_1106cd488;
  func_0x000107c613fc(&UNK_1106cd488,0x18,7);
  puVar7 = (undefined8 *)(unaff_x22 + 0xc0);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0x103adde98;
  *(undefined **)(unaff_x22 + 0xe8) = puVar3;
  *(undefined8 *)(unaff_x22 + 200) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0x103aded28;
  *(undefined **)(unaff_x22 + 0xd8) = &UNK_1106cd4a0;
  func_0x000107c60bc4(puVar7);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c50744(uVar5);
  func_0x000107c60bd0(puVar7);
  func_0x000107c615e8(pcVar2);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103ad96b8; end: 103ad9727;  */

void FUN_103ad96b8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x438) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    FUN_103addea0(*(undefined8 *)(lVar2 + 0x330),*(undefined8 *)(lVar2 + 0x338));
    pcVar1 = FUN_103ad9830;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_103ad9c0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ad9728; end: 103ad982f;  */

void FUN_103ad9728(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x418);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x410);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f8);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x3f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 1000);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2a8);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar6;
  func_0x000107c615e8(uVar2);
  func_0x000107c61428(puVar4,unaff_x22 + 0x1f8,0,0);
  uVar2 = *puVar4;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar5);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x360);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar6);
  func_0x000107c61574(uVar5);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar3 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103ad982c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad9830; end: 103ad9c0b;  */

void FUN_103ad9830(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x3f8);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x3f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 1000);
  bVar1 = *(byte *)(unaff_x22 + 0x451);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x430));
  func_0x000107c615e8(uVar6);
  lVar3 = unaff_x22 + 0x228;
  func_0x000107c61428(puVar9,lVar3,0,0);
  uVar6 = *puVar9;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar10);
  if ((bVar1 & 1) == 0) {
    lVar3 = *(long *)(unaff_x22 + 0x3c8);
    FUN_103adacf8(*(undefined8 *)(unaff_x22 + 0x3c0),lVar3,*(undefined8 *)(unaff_x22 + 0x3d0),
                  *(undefined8 *)(unaff_x22 + 0x3d8),*(undefined8 *)(unaff_x22 + 0x308),
                  *(undefined8 *)(unaff_x22 + 0x310));
  }
  lVar7 = *(long *)(unaff_x22 + 0x3c8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3c0);
  func_0x000107c5ee30();
  *(undefined8 *)(unaff_x22 + 0x440) = uVar6;
  *(long *)(unaff_x22 + 0x448) = lVar3;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x3c8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x3c0);
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x270;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_103ad9cf8;
    func_0x000107c61174(uVar6);
    lVar3 = unaff_x22 + 0x50;
    func_0x000107c61448(lVar3,0);
    puVar2 = &UNK_1106cd4d8;
    func_0x000107c613fc(&UNK_1106cd4d8,0x18,7);
    puVar9 = (undefined8 *)(unaff_x22 + 0xf0);
    *puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar3;
    *(code **)(unaff_x22 + 0x110) = FUN_103addf20;
    *(undefined **)(unaff_x22 + 0x118) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x100) = &UNK_1018c5b18;
    *(undefined **)(unaff_x22 + 0x108) = &UNK_1106cd4f0;
    func_0x000107c60bc4(puVar9);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(uVar10);
    func_0x000108455a88(uVar5,uVar6,puVar9);
    func_0x000107c60bd0(puVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x338);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2b0);
  func_0x000107c5b134(uVar10);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ad8d0;
  func_0x000107c610f8();
  func_0x00010006c00c(uVar6,lVar3);
  uVar5 = uVar6;
  func_0x000107c5ee20(uVar6,lVar3);
  func_0x000107c48724();
  func_0x000107c61170(uVar5);
  func_0x00010006c090(uVar6,lVar3);
  func_0x000107c61170(uVar10);
  if (*(ulong *)(lVar7 + 8) >> 0x3c < 0xf) {
    uVar5 = **(undefined8 **)(unaff_x22 + 0x338);
    func_0x000107c5ee20(uVar5);
  }
  else {
    uVar5 = 0;
  }
  lVar7 = *(long *)(unaff_x22 + 0x338);
  lVar12 = *(long *)(unaff_x22 + 0x328);
  uVar10 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c58f78(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000100029394(lVar7 + *(int *)(lVar12 + 0x14),uVar10);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar7 + -8);
  uVar5 = 1;
  (**(code **)(lVar12 + 0x30))(uVar10,1,lVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 800);
  if ((int)uVar10 == 1) {
    func_0x0001000293e4(uVar8);
    uVar10 = 0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar12 + 8))(uVar8,lVar7);
    func_0x000107c5fadc(uVar10,uVar5);
    func_0x000107c6142c(uVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar8 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c53898(puVar2);
  func_0x000107c61574(uVar14);
  func_0x00010006c090(uVar6,lVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar16);
  func_0x000107c61574(uVar15);
  func_0x000103addee4(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000103ad9c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2);
  return;
}



/* Entry: 103ad9c0c; end: 103ad9cf7;  */

void FUN_103ad9c0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3f8);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x3f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 1000);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x430));
  func_0x000107c615e8(uVar2);
  func_0x000107c61428(puVar3,unaff_x22 + 0x210,0,0);
  uVar2 = *puVar3;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x360);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61574(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar1 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103ad9cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ad9cf8; end: 103ad9d37;  */

void FUN_103ad9cf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad9d38,0,0);
  return;
}



/* Entry: 103ad9d38; end: 103ad9f83;  */

void FUN_103ad9d38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3c8);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x440),*(undefined8 *)(unaff_x22 + 0x448));
  func_0x000107c61170(uVar3);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x278);
  lVar5 = *(long *)(unaff_x22 + 0x338);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2b0);
  func_0x000107c5b134(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ad8d0;
  func_0x000107c610f8(PTR_PTR_1126ad8d0);
  func_0x00010006c00c(uVar10,uVar12);
  uVar3 = uVar10;
  func_0x000107c5ee20(uVar10,uVar12);
  func_0x000107c48724(puVar2);
  func_0x000107c61170(uVar3);
  func_0x00010006c090(uVar10,uVar12);
  func_0x000107c61170(uVar1);
  if (*(ulong *)(lVar5 + 8) >> 0x3c < 0xf) {
    uVar3 = **(undefined8 **)(unaff_x22 + 0x338);
    func_0x000107c5ee20(uVar3);
  }
  else {
    uVar3 = 0;
  }
  lVar5 = *(long *)(unaff_x22 + 0x338);
  lVar6 = *(long *)(unaff_x22 + 0x328);
  uVar1 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c58f78(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000100029394(lVar5 + *(int *)(lVar6 + 0x14),uVar1);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar5 + -8);
  uVar3 = 1;
  (**(code **)(lVar6 + 0x30))(uVar1,1,lVar5);
  uVar4 = *(undefined8 *)(unaff_x22 + 800);
  if ((int)uVar1 == 1) {
    func_0x0001000293e4(uVar4);
    uVar1 = 0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar6 + 8))(uVar4,lVar5);
    func_0x000107c5fadc(uVar1,uVar3);
    func_0x000107c6142c(uVar3);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar3 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c53898(puVar2);
  func_0x000107c61574(uVar11);
  func_0x00010006c090(uVar10,uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar14);
  func_0x000107c61574(uVar13);
  func_0x000103addee4(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103ad9f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2);
  return;
}



/* Entry: 103ad9f84; end: 103ada35f;  */

/* WARNING: Removing unreachable block (ram,0x000103ad9fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad9f84(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x000107c5fd64();
  lVar11 = *(long *)(unaff_x22 + 0x318);
  iVar10 = (int)*(undefined8 *)(unaff_x22 + 0x2b8);
  uVar8 = *(undefined8 *)(lVar11 + _DAT_112fe8a10);
  *(undefined8 *)(unaff_x22 + 0x358) = uVar8;
  uVar6 = uVar8;
  func_0x000107c3ebd4();
  func_0x000107c4491c();
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f19cd20);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  lVar9 = 0;
  uVar12 = *(undefined8 *)(lVar11 + _DAT_112fe89e0);
  uVar1 = *(undefined8 *)(lVar11 + _DAT_112fe89f0);
  if ((int)uVar8 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  *(long *)(unaff_x22 + 0x360) = lVar9;
  lVar11 = *(long *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar2 = lVar11;
    func_0x000107c5cef4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar2 != 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
      puVar3 = &UNK_1106cd550;
      func_0x000107c613fc(&UNK_1106cd550,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar2);
      lVar11 = 0;
      func_0x000103ae8d6c();
      func_0x000107c613fc();
      puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c6157c(puVar3);
      func_0x000107c453e4();
      func_0x000107c615e8(lVar2);
      *(undefined **)(lVar11 + 0x40) = puVar4;
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(undefined1 *)(lVar11 + 0x50) = 0;
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
      *(undefined8 *)(lVar11 + 0x18) = uVar13;
      *(code **)(lVar11 + 0x30) = FUN_103ae8c54;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(code **)(lVar11 + 0x20) = FUN_103ade068;
      *(undefined **)(lVar11 + 0x28) = puVar3;
      func_0x000107c61434(uVar13);
      func_0x000107c61574(puVar3);
      goto LAB_103ada1b0;
    }
  }
  lVar11 = 0;
LAB_103ada1b0:
  *(long *)(unaff_x22 + 0x368) = lVar11;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2f0);
  if (lVar9 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar3 = &UNK_1106cd410;
    func_0x000107c613fc(&UNK_1106cd410,0x49,7);
    *(long *)(puVar3 + 0x10) = lVar11;
    *(undefined8 *)(puVar3 + 0x18) = uVar14;
    *(undefined8 *)(puVar3 + 0x20) = uVar13;
    *(undefined8 *)(puVar3 + 0x28) = uVar8;
    *(undefined8 *)(puVar3 + 0x30) = uVar12;
    *(undefined8 *)(puVar3 + 0x38) = uVar15;
    *(undefined8 *)(puVar3 + 0x40) = uVar1;
    puVar3[0x48] = (char)uVar6;
    func_0x000107c6157c(lVar11);
    func_0x000107c61174(uVar12);
    func_0x000107c61174(uVar1);
    piVar7 = (int *)&UNK_10dc50140;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar3 = &UNK_1106cd528;
    func_0x000107c613fc(&UNK_1106cd528,0x49,7);
    *(long *)(puVar3 + 0x10) = lVar9;
    *(undefined8 *)(puVar3 + 0x18) = uVar12;
    *(undefined8 *)(puVar3 + 0x20) = uVar1;
    *(undefined8 *)(puVar3 + 0x28) = uVar14;
    *(undefined8 *)(puVar3 + 0x30) = uVar8;
    *(undefined8 *)(puVar3 + 0x38) = uVar15;
    *(undefined8 *)(puVar3 + 0x40) = uVar13;
    puVar3[0x48] = (char)uVar6;
    func_0x000107c61434(uVar1);
    piVar7 = (int *)&UNK_10dc50170;
  }
  *(undefined **)(unaff_x22 + 0x378) = puVar3;
  *(int **)(unaff_x22 + 0x370) = piVar7;
  if (iVar10 == 0) {
    iVar10 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c61174(uVar14);
    func_0x000107c615f0(lVar9);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x3b0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_103ad8de0;
                    /* WARNING: Could not recover jumptable at 0x000103ada310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar10 + (long)piVar7))();
    return;
  }
  if (lVar11 == 0) {
    func_0x000107c615f0(lVar9);
    func_0x000107c61174(uVar14);
  }
  else {
    func_0x000107c615f0(lVar9);
    func_0x000107c6157c(lVar11);
    func_0x000107c61174(uVar14);
    FUN_103ae8ae0(1);
    func_0x000107c61574(lVar11);
  }
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x318) + _DAT_112fe89e8);
  *(undefined8 *)(unaff_x22 + 0x380) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ad8804,uVar6,0);
  return;
}



/* Entry: 103ada360; end: 103ada3d3;  */

void FUN_103ada360(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x360);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x338));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ada3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ada3d4; end: 103ada3ff;  */

void FUN_103ada3d4(void)

{
  return;
}



/* Entry: 103ada400; end: 103ada6b7;  */

void FUN_103ada400(void)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined1 *)(unaff_x22 + 0x58) = *(undefined1 *)(unaff_x22 + 0x59);
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlFTu_11034fff0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x148) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_103ada6b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF_11034ffe8
    )(plVar3,unaff_x22 + 0xd0,0,0,0xd00000000000009c,0x800000010f19ce50,FUN_103ade070,
      unaff_x22 + 0x10,&UNK_1106ce3d8);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
  *(long *)(unaff_x22 + 0x88) = unaff_x22 + 0xf0;
  *(long *)(unaff_x22 + 0x60) = unaff_x22;
  *(code **)(unaff_x22 + 0x68) = FUN_103ada714;
  lVar4 = unaff_x22 + 0x60;
  func_0x000107c61448(lVar4,1);
  lVar5 = 0x112fe8b88;
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  lVar15 = *(long *)(lVar5 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  uVar9 = lVar16 + 0xf;
  uVar6 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fcac(uVar6,lVar4,0xd00000000000009c,0x800000010f19ce50,&UNK_1106ce3d8,uVar7,
                      PTR___ss5ErrorWS_11034ee10);
  func_0x000107c5fadc(uVar8,uVar1);
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar9);
  (**(code **)(lVar15 + 0x10))();
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar13 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar10 = &UNK_1106cd5a0;
  func_0x000107c613fc(&UNK_1106cd5a0,uVar13 + lVar16,uVar11 | 7);
  (**(code **)(lVar15 + 0x20))(puVar10 + uVar13,uVar9,lVar5);
  puVar14 = (undefined8 *)(unaff_x22 + 0xa0);
  *puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  *(code **)(unaff_x22 + 0xc0) = FUN_103ade0a4;
  *(undefined **)(unaff_x22 + 200) = puVar10;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0x42000000;
  *(code **)(unaff_x22 + 0xb0) = FUN_103ada9cc;
  *(undefined **)(unaff_x22 + 0xb8) = &UNK_1106cd5b8;
  func_0x000107c60bc4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar9);
  func_0x000107c4364c(uVar12);
  func_0x000107c60bd0(puVar14);
  func_0x000107c61170(uVar8);
  (**(code **)(lVar15 + 8))(uVar6,lVar5);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x60);
  return;
}



/* Entry: 103ada6b8; end: 103ada713;  */

void FUN_103ada6b8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x148));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103ada6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ada710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0xd8),
             *(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
  return;
}



/* Entry: 103ada714; end: 103ada77f;  */

void FUN_103ada714(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x80) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103ada75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ada77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8),
             *(undefined8 *)(lVar1 + 0x100),*(undefined8 *)(lVar1 + 0x108));
  return;
}



/* Entry: 103ada780; end: 103ada8ff;  */

void FUN_103ada780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112fe8b88;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_98 = param_8;
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  lVar5 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(lVar5 + 0x10))(auStack_b0 + -extraout_x8,param_1,lVar1);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1106cd5f0;
  func_0x000107c613fc(&UNK_1106cd5f0,uVar6 + lVar7,uVar4 | 7);
  (**(code **)(lVar5 + 0x20))(puVar2 + uVar6,auStack_b0 + -extraout_x8,lVar1);
  uStack_70 = 0x103adecd4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_103ada9cc;
  puStack_78 = &UNK_1106cd608;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  *(undefined ***)((long)auStack_c0 + -extraout_x8) = ppuVar3;
  func_0x000107c4364c(param_2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103ada900; end: 103ada9cb;  */

void FUN_103ada900(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 == (undefined8 *)0x0) {
    if (param_1 != (undefined8 *)0x0) {
      puStack_40 = param_1;
      uStack_38 = param_2;
      uStack_30 = param_3;
      uStack_28 = param_4;
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_1);
      uVar1 = 0x112fe8b88;
      func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
      func_0x000107c5fcb4(&puStack_40,uVar1);
      return;
    }
    FUN_103addd84();
    puVar2 = (undefined8 *)&UNK_1106cd970;
    func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 2;
    puStack_40 = puVar2;
  }
  else {
    puStack_40 = param_5;
    func_0x000107c614b0(param_5);
  }
  uVar1 = 0x112fe8b88;
  func_0x0001000285a8(0x112fe8b88,&UNK_10dc50178);
  func_0x000107c5fcb0(&puStack_40,uVar1);
  return;
}



/* Entry: 103ada9cc; end: 103adaa7f;  */

/* WARNING: Possible PIC construction at 0x000103adaa54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adaa58) */

void FUN_103ada9cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  (*pcVar1)(param_2,param_3,param_4,param_5,param_6);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103adaa80; end: 103adaaa7;  */

void FUN_103adaa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adaaa8,0,0);
  return;
}



/* Entry: 103adaaa8; end: 103adab83;  */

void FUN_103adaaa8(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  if (*(long *)(unaff_x22 + 0x40) == 0) {
    plVar2 = (long *)0x410;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_103adac88;
    uVar1 = *(undefined1 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar9 = 0;
  }
  else {
    func_0x000107c6157c(*(long *)(unaff_x22 + 0x40));
    FUN_103ae8ae0(2);
    plVar2 = (long *)0x410;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_103adab84;
    uVar1 = *(undefined1 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x000103adab80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103ae6614(uVar7,uVar3,uVar4,0,uVar5,uVar6,uVar8,uVar1,uVar9);
  return;
}



/* Entry: 103adab84; end: 103adac33;  */

void FUN_103adab84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x30) = param_4;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x103adabec;
  }
  else {
    pcVar1 = FUN_103adac34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103adac34; end: 103adac87;  */

void FUN_103adac34(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_103ae8d8c(*(undefined8 *)(unaff_x22 + 0x80));
  FUN_103ae8ae0();
  func_0x000107c61654();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103adac84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103adac88; end: 103adacf7;  */

void FUN_103adac88(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000103adacf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103adacf8; end: 103adb157;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adae5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adb134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adb038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adae60) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000103adb03c) */
/* WARNING: Removing unreachable block (ram,0x000103adae48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adacf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,ulong param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_90;
  undefined *puStack_88;
  uint uStack_7c;
  long lStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  if (0xe < param_6 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(param_6 >> 0x20);
  lStack_78 = lVar6;
  if (uVar2 >> 0x1e < 2) {
    if (uVar2 >> 0x1e == 0) {
      if ((param_6 & 0xff000000000000) == 0) goto code_r0x0001000b44c0;
    }
    else {
      if ((long)(int)param_5 == (long)param_5 >> 0x20) {
        return;
      }
LAB_103adadb4:
      func_0x000100de78a0(param_5,param_6);
    }
    puVar3 = PTR_PTR_1126ad8c8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = 0;
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c5eb20();
    uVar5 = 0;
    func_0x00010440a304(0);
    uVar9 = 0x112fe8b50;
    FUN_103add2c4(0x112fe8b50,&SUB_10440a304,&UNK_10dcf98b0);
    func_0x000107c5eb1c(&lStack_68,uVar5,param_5,param_6,uVar5,uVar9);
    func_0x000107c61574(uVar4);
    lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112fe8a18) + _DAT_112fe9238);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      uStack_7c = (uint)(param_3 == 0);
      puVar7 = &UNK_1106cd348;
      puStack_88 = puVar3;
      func_0x000107c613fc(&UNK_1106cd348,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      param_5 = &UNK_1106cd370;
      func_0x000107c613fc(&UNK_1106cd370,0x60,7);
      puVar3 = puStack_88;
      *(long *)(param_5 + 0x10) = lVar6;
      *(long *)(param_5 + 0x18) = lStack_68;
      *(undefined8 *)(param_5 + 0x20) = param_1;
      *(undefined8 *)(param_5 + 0x28) = param_2;
      *(long *)(param_5 + 0x30) = param_3;
      *(undefined8 *)(param_5 + 0x38) = param_4;
      *(undefined **)(param_5 + 0x40) = puStack_88;
      param_5[0x48] = (char)uStack_7c;
      *(undefined **)(param_5 + 0x50) = puVar7;
      *(long *)(param_5 + 0x58) = lStack_78;
      func_0x000107c61174(param_2);
      func_0x000107c61174(puVar3);
      func_0x000107c615f0(lVar6);
      lVar8 = lStack_68;
      func_0x000107c61174(lStack_68);
      func_0x000107c61174(param_1);
      puStack_90 = PTR___sytN_11034f1b0 + 8;
      func_0x0001009548b0(0,4,0x40,0,0,0,&UNK_10dc50128,param_5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar8);
      func_0x000107c615e8(lVar6);
      goto code_r0x000107c61574;
    }
    uVar9 = 0x6c696166;
    func_0x000107c5fadc(0x6c696166,0xe400000000000000);
    uVar4 = 0x7265646c697562;
    func_0x000107c5fadc(0x7265646c697562,0xe700000000000000);
    func_0x000106f472ec(puVar3,uVar9,uVar4,1);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    uVar9 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f19cc80);
    func_0x000106f4751c(puVar3,param_3 == 0,uVar9,1);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(lStack_68 + _DAT_113077640);
    uVar4 = ((undefined8 *)(lStack_68 + _DAT_113077640))[1];
    func_0x000107c61434(uVar4);
    FUN_103adba3c(uVar9,uVar4,0xd000000000000013,0x800000010f19cc80);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lStack_68);
    func_0x000107c6142c(uVar4);
    unaff_x30 = 0x103adb138;
    register0x00000008 = (BADSPACEBASE *)&puStack_90;
    unaff_x19 = param_6;
    unaff_x29 = puVar1;
  }
  else if (uVar2 >> 0x1e == 2) {
    if (*(long *)(param_5 + 0x10) == *(long *)(param_5 + 0x18)) {
      return;
    }
    goto LAB_103adadb4;
  }
code_r0x0001000b44c0:
  if (0xe < param_6 >> 0x3c) {
    return;
  }
  if (uVar2 >> 0x1e == 1) {
    param_5 = (undefined *)(param_6 & 0x3fffffffffffffff);
  }
  else {
    if (uVar2 >> 0x1e != 2) {
      return;
    }
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 103adb158; end: 103adb18b;  */

void FUN_103adb158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_8;
  *(undefined8 *)(unaff_x22 + 0x158) = param_11;
  *(undefined1 *)(unaff_x22 + 0x188) = param_9;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adb18c,0,0);
  return;
}



/* Entry: 103adb18c; end: 103adb43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adb18c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x130);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x160) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000022;
  func_0x000100029b28(0xd000000000000022,0x800000010f19cca0);
  *(undefined8 *)(unaff_x22 + 0x168) = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(lVar8 + _DAT_113077600);
  func_0x000107c5fadc(uVar1,((undefined8 *)(lVar8 + _DAT_113077600))[1]);
  uVar2 = *(undefined8 *)(lVar8 + _DAT_113077608);
  func_0x000107c5fadc(uVar2,((undefined8 *)(lVar8 + _DAT_113077608))[1]);
  if (((undefined8 *)(lVar8 + _DAT_113077610))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar8 + _DAT_113077610);
    func_0x000107c5fadc();
  }
  lVar8 = *(long *)(unaff_x22 + 0x130);
  if (((undefined8 *)(lVar8 + _DAT_113077618))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar8 + _DAT_113077618);
    func_0x000107c5fadc();
    lVar8 = *(long *)(unaff_x22 + 0x130);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(lVar8 + _DAT_113077628);
  func_0x000107c5fadc(uVar5,((undefined8 *)(lVar8 + _DAT_113077628))[1]);
  func_0x000107c3ed08();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x170) = uVar9;
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103adb440;
  lVar8 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar8,1);
  puVar6 = &UNK_1106cd398;
  func_0x000107c613fc(&UNK_1106cd398,0x18,7);
  puVar7 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar6 + 0x10) = lVar8;
  *(code **)(unaff_x22 + 0x70) = FUN_103add3f4;
  *(undefined **)(unaff_x22 + 0x78) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10130cf24;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1106cd3b0;
  func_0x000107c60bc4(puVar7);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c5dc64(uVar9);
  func_0x000107c60bd0(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103adb440; end: 103adb4ab;  */

void FUN_103adb440(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)(lVar2 + 0x98);
    pcVar1 = FUN_103adb4ac;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_103adb7a4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103adb4ac; end: 103adb7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adb4ac(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x180);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  func_0x000107c61174();
  lVar5 = lVar8;
  FUN_103add838();
  func_0x000107c61170(lVar8);
  lVar8 = *(long *)(unaff_x22 + 0x158);
  if (lVar5 == 0) {
    lVar7 = unaff_x22 + 200;
    uVar2 = *(undefined1 *)(unaff_x22 + 0x188);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar10 = 0x6c696166;
    func_0x000107c5fadc(0x6c696166,0xe400000000000000);
    uVar6 = 0x61746164;
    func_0x000107c5fadc(0x61746164,0xe400000000000000);
    func_0x000106f472ec(uVar9,uVar10,uVar6,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar10);
    uVar10 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f19ccd0);
    func_0x000106f4751c(uVar9,uVar2,uVar10,1);
    func_0x000107c61170(uVar10);
    func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0xb0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + _DAT_113077640);
      FUN_103adba3c(*puVar1,puVar1[1],0xd000000000000010,0x800000010f19ccd0);
      func_0x000107c61170(lVar8);
    }
    lVar5 = *(long *)(unaff_x22 + 0x180);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar6 = 0x73736563637573;
    uVar10 = uVar6;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000106f472ec(uVar9,uVar10,uVar6,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar10);
    func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0xe0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
    if (lVar8 != 0) {
      lVar7 = unaff_x22 + 0xf8;
      uVar2 = *(undefined1 *)(unaff_x22 + 0x188);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
      lVar3 = lVar5;
      FUN_103ad6644(lVar5);
      func_0x000107c61170(lVar8);
      func_0x0001000285a8(0x112fe8b58,&UNK_10dc50130);
      lVar8 = lVar3;
      FUN_103edf20c(lVar3);
      puVar4 = &UNK_1106cd3e8;
      func_0x000107c613fc(&UNK_1106cd3e8,0x21,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar6;
      *(undefined8 *)(puVar4 + 0x18) = uVar9;
      puVar4[0x20] = uVar2;
      func_0x000107c61174(uVar6);
      func_0x000107c61174(uVar9);
      func_0x00010075a04c(0,1,FUN_103addd5c,puVar4);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(lVar8);
      goto LAB_103adb748;
    }
    lVar7 = unaff_x22 + 0x110;
    func_0x000107c61170(uVar10);
  }
  func_0x000107c61170(lVar5);
LAB_103adb748:
  puVar1 = *(undefined8 **)(unaff_x22 + 0x160);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61428(puVar1,lVar7,0,0);
  uVar6 = *puVar1;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar10);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103adb7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103adb7a4; end: 103adb92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adb7a4(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x188);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar5 = *(long *)(unaff_x22 + 0x158);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  uVar3 = 0x6c696166;
  func_0x000107c5fadc(0x6c696166,0xe400000000000000);
  uVar4 = 0x646c697562;
  func_0x000107c5fadc(0x646c697562,0xe500000000000000);
  uVar7 = uVar3;
  func_0x000106f472ec(uVar8,uVar3,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  FUN_103addbdc(uVar6);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000106f4751c(uVar8,uVar2,uVar6,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x50,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  if (lVar5 == 0) {
    func_0x000107c614ac(uVar8);
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + _DAT_113077640);
    FUN_103adba3c(*puVar1,puVar1[1],0x5f636f6470616e73,0xed0000646c697562);
    func_0x000107c614ac(uVar8);
    func_0x000107c61170(lVar5);
  }
  puVar1 = *(undefined8 **)(unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c61428(puVar1,unaff_x22 + 0x98,0,0);
  uVar6 = *puVar1;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar8);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103adb928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103adb92c; end: 103adba3b;  */

/* WARNING: Possible PIC construction at 0x000103adb998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adba24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adb99c) */
/* WARNING: Removing unreachable block (ram,0x000103adba28) */

void FUN_103adb92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x64616f6c7075;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = 0x6c696166;
    func_0x000107c5fadc(0x6c696166,0xe400000000000000);
    func_0x000107c5fadc(0x64616f6c7075,0xe600000000000000);
    func_0x000106f472ec(param_2,uVar1,uVar2,1);
  }
  else {
    uVar1 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    func_0x000107c5fadc(0x64616f6c7075,0xe600000000000000);
    func_0x000106f472ec(param_2,uVar1,uVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103adba3c; end: 103adbba3;  */

/* WARNING: Possible PIC construction at 0x000103adbab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adbb64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adbab8) */
/* WARNING: Removing unreachable block (ram,0x000103adbabc) */
/* WARNING: Removing unreachable block (ram,0x000103adbb88) */
/* WARNING: Removing unreachable block (ram,0x000103adbad8) */
/* WARNING: Removing unreachable block (ram,0x000103adbb68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adba3c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fe8a10);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f19cc20);
  func_0x000107c3ebd4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103adbba4; end: 103adbca3;  */

void FUN_103adbba4(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_2 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
      return;
    }
    FUN_103addd84();
    puVar1 = &UNK_1106cd970;
    func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 2;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 103adbca4; end: 103adbdb3;  */

/* WARNING: Possible PIC construction at 0x000103adbd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adbd7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adbd18) */
/* WARNING: Removing unreachable block (ram,0x000103adbd1c) */
/* WARNING: Removing unreachable block (ram,0x000103adbd9c) */
/* WARNING: Removing unreachable block (ram,0x000103adbd38) */
/* WARNING: Removing unreachable block (ram,0x000103adbd50) */
/* WARNING: Removing unreachable block (ram,0x000103adbd60) */
/* WARNING: Removing unreachable block (ram,0x000103adbd80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adbca4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fe8a10);
  uVar1 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f19cbe0);
  func_0x000107c3ebd4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103adbdb4; end: 103adbe27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103adbdb4(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112fe8a10);
  uVar1 = 0xd000000000000033;
  func_0x000107c5fadc(0xd000000000000033,0x800000010f19cba0);
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  if (uVar2 != 2) {
    uVar2 = (uint)(uVar2 == 1);
  }
  return uVar2;
}



/* Entry: 103adbe28; end: 103adc113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103adbe28(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar11 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar3 = uVar11;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  uVar11 = uVar3;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000101345fdc(0);
  uVar5 = uVar11;
  func_0x000107c5fc54(uVar11,uVar4);
  func_0x000107c61170(uVar11);
  if (uVar5 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if (uVar11 != 0) goto LAB_103adbec0;
LAB_103adbf74:
    uVar13 = 0;
  }
  else {
    uVar11 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar11 = uVar5;
    }
    func_0x000107c60480();
    if (uVar11 == 0) goto LAB_103adbf74;
LAB_103adbec0:
    uVar12 = 0;
    uVar13 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103adbf58);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar12;
        func_0x000100fb1534(uVar12,uVar5);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103adbf54);
        (*pcVar2)();
      }
      uVar8 = uVar12 + 1;
      uVar7 = uVar6;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar6);
      uVar1 = (int)uVar7 - 1;
      if (uVar1 < 6) {
        uVar6 = *(ulong *)(&UNK_10dc505e8 + (ulong)uVar1 * 8);
      }
      else {
        uVar6 = 1;
      }
      uVar13 = uVar6 | uVar13;
      uVar12 = uVar12 + 1;
    } while (uVar8 != uVar11);
  }
  func_0x000107c6142c(uVar5);
  uVar11 = uVar3;
  func_0x000107c40704();
  func_0x000107c61180();
  uVar5 = uVar11;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar11);
  lVar9 = *(long *)(uVar5 + 0x10);
  func_0x000107c6142c(uVar5);
  if (lVar9 == 0) {
    uVar11 = uVar3;
    func_0x000107c4e6d0();
    func_0x000107c61180();
    uVar5 = uVar11;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar11);
    lVar9 = *(long *)(uVar5 + 0x10);
    func_0x000107c6142c(uVar5);
    if (lVar9 != 0) goto LAB_103adbffc;
  }
  else {
LAB_103adbffc:
    uVar13 = uVar13 | 1;
  }
  iVar10 = (int)*(undefined8 *)(unaff_x20 + _DAT_112fe8a10);
  uVar4 = 0xd000000000000033;
  func_0x000107c5fadc(0xd000000000000033,0x800000010f113de0);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  if (iVar10 != 0) {
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar11 = param_1;
    func_0x000107c51edc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar11 != 0) {
      uVar5 = uVar11;
      func_0x000107c5d388();
      if ((uVar5 == 1) || (uVar5 = uVar11, func_0x000107c5d388(), uVar5 == 2)) {
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar11);
      }
      else {
        uVar5 = uVar11;
        func_0x000107c5d388();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar11);
        if (uVar5 != 4) goto LAB_103adc0c4;
      }
      uVar13 = uVar13 | 8;
      goto LAB_103adc0c4;
    }
  }
  func_0x000107c61170(uVar3);
LAB_103adc0c4:
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  return uVar13;
}



/* Entry: 103adc114; end: 103adc1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adc114(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112fe89f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c50040(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103adc1c0; end: 103adc497;  */

void FUN_103adc1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1106cd640;
  func_0x000107c613fc(&UNK_1106cd640,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1106cd668;
  func_0x000107c613fc(&UNK_1106cd668,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103ade184;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_103ade18c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x103adc5a8;
  puStack_88 = &UNK_1106cd680;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1106cd6b8;
  func_0x000107c613fc(&UNK_1106cd6b8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_1106cd6e0;
  func_0x000107c613fc(&UNK_1106cd6e0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103ade1ac;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_103ade1b4;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103adc744;
  puStack_88 = &UNK_1106cd6f8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1106cd730;
  func_0x000107c613fc(&UNK_1106cd730,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = param_2;
  puVar10 = &UNK_1106cd758;
  func_0x000107c613fc(&UNK_1106cd758,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_103ade1d4;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = FUN_103ade1dc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103adc834;
  puStack_88 = &UNK_1106cd770;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c760(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x57,0x38f,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103adc490);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x57,0x394,0x25,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x57,0x396,0x25,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103adc498);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103adc494);
  (*pcVar2)();
}



/* Entry: 103adc498; end: 103adc6af;  */

void FUN_103adc498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x000103adddc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)(puVar3 + -extraout_x12);
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))((undefined1 *)((long)puVar4 + (long)iVar1),param_3,lVar2);
  (**(code **)(lVar5 + 0x38))((undefined1 *)((long)puVar4 + (long)iVar1),0,1,lVar2);
  *puVar4 = param_1;
  puVar4[1] = param_2;
  FUN_103addea0(puVar4,puVar3);
  func_0x00010006c00c(param_1,param_2);
  FUN_103addea0(puVar3,*(undefined8 *)(*(long *)(param_6 + 0x40) + 0x28));
  func_0x000107c61450(param_6);
  return;
}



/* Entry: 103adc6b0; end: 103adc743;  */

void FUN_103adc6b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_103addd84();
  puVar2 = &UNK_1106cd970;
  func_0x000107c613f8(&UNK_1106cd970,puVar1,0,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar1 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar1 = puVar2;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_4,uVar3);
  return;
}



/* Entry: 103adc744; end: 103adc7af;  */

/* WARNING: Possible PIC construction at 0x000103adc794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adc798) */

void FUN_103adc744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103adc7b0; end: 103adc833;  */

void FUN_103adc7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_103addd84();
  puVar1 = &UNK_1106cd970;
  func_0x000107c613f8(&UNK_1106cd970,param_1,0,0);
  *param_1 = 7;
  *(undefined1 *)(param_1 + 1) = 2;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 103adc834; end: 103adc8bf;  */

void FUN_103adc834(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103adc8c0; end: 103adc91b; -[_TtC18SCSnapUploaderImpl12SnapUploader init] */

void FUN_103adc8c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapUploaderImpl.SnapUploader",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103adc8ec);
  (*pcVar1)();
}



/* Entry: 103adc91c; end: 103adca27; -[_TtC18SCSnapUploaderImpl12SnapUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103adc948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adc968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adc988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103adc9a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103adc98c) */
/* WARNING: Removing unreachable block (ram,0x000103adc96c) */
/* WARNING: Removing unreachable block (ram,0x000103adc94c) */
/* WARNING: Removing unreachable block (ram,0x000103adc9ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adc91c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe89c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe89d0));
  return;
}



/* Entry: 103adca28; end: 103adca7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103adca28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe89c8;
  func_0x000107c61428(unaff_x20 + _DAT_112fe89c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 103adca7c; end: 103adcabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103adca7c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fe89c8;
  func_0x000107c61428(unaff_x20 + _DAT_112fe89c8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103adcabc;
  return auVar2;
}



/* Entry: 103adcabc; end: 103adcad7;  */

void FUN_103adcabc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103adcad8; end: 103adcb93;  */

void FUN_103adcad8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x80);
  if (0 < *(long *)(lVar2 + 0x70)) {
    *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) + -1;
                    /* WARNING: Could not recover jumptable at 0x000103adcb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x80);
  func_0x000107c61428(lVar2 + 0x78,unaff_x22 + 0x50,0,0);
  func_0x000106f47274(uVar1,*(undefined8 *)(*(long *)(lVar2 + 0x78) + 0x10));
  uVar1 = 0x112fe8b48;
  FUN_103add2c4(0x112fe8b48,&UNK_100725318,&UNK_10dc500e0);
  func_0x000107c614f0(lVar2);
  func_0x000107c5fca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adcb94,lVar2,uVar1);
  return;
}



/* Entry: 103adcb94; end: 103adcc7f;  */

void FUN_103adcb94(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103adcc80;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  func_0x000107c61428(lVar5 + 0x78,unaff_x22 + 0x68,0x21,0);
  uVar4 = *(ulong *)(lVar5 + 0x78);
  uVar2 = uVar4;
  func_0x000107c61558();
  *(ulong *)(lVar5 + 0x78) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x80);
    uVar3 = 0;
    func_0x000100fb4b60(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(lVar5 + 0x78) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x000100fb4b60(uVar4,uVar2 + 1,1,uVar3);
  }
  lVar5 = *(long *)(unaff_x22 + 0x80);
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  *(long *)(uVar4 + uVar2 * 8 + 0x20) = lVar1;
  *(ulong *)(lVar5 + 0x78) = uVar4;
  func_0x000107c614a8(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103adcc80; end: 103adccbf;  */

void FUN_103adcc80(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adccc0,*(undefined8 *)(*unaff_x22 + 0x80),0);
  return;
}



/* Entry: 103adccc0; end: 103adccc7;  */

void FUN_103adccc0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103adccc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103adccc8; end: 103adcd57;  */

void FUN_103adccc8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x78,auStack_38,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x78);
  if (*(long *)(lVar2 + 0x10) == 0) {
    if (SCARRY8(*(long *)(unaff_x20 + 0x70),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103adcd58);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x70) = *(long *)(unaff_x20 + 0x70) + 1;
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x78,auStack_50,0x21,0);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000100f9a614(0,1);
    func_0x000107c614a8(auStack_50);
    func_0x000107c61450(uVar3);
  }
  return;
}



/* Entry: 103adcd58; end: 103adcd83;  */

void FUN_103adcd58(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 103adcd84; end: 103adcf07;  */

void FUN_103adcd84(void)

{
  return;
}



/* Entry: 103adcf08; end: 103adcfaf;  */

void FUN_103adcf08(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103adcf9c;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103adcf9c:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 103adcfb0; end: 103add08f;  */

void FUN_103adcfb0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = param_1;
  func_0x000107c4050c();
  func_0x000107c61180();
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    param_2 = 0xf000000000000000;
  }
  else {
    puVar3 = puVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar1);
    if (param_2 >> 0x3c < 0xf) {
      func_0x0001000b44c0(puVar3,param_2);
      func_0x0001000b44c0(0,0xf000000000000000);
      uVar2 = 0;
      FUN_103aeb250(0);
      FUN_103aea58c(param_1,uVar2);
      return;
    }
  }
  func_0x0001000b44c0(puVar3,param_2);
  FUN_103addd84();
  func_0x000107c613f8(&UNK_1106cd970,puVar3,0,0);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 2;
  func_0x000107c61654();
  return;
}


