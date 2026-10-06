/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bbbbb8; end: 102bbbeef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbbbb8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(&uStack_80);
  puVar12 = puStack_78;
  uVar8 = uStack_80;
  uVar3 = uStack_80;
  func_0x000107c614f0();
  func_0x000102bb7524();
  func_0x000107c615e8(uVar8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  puVar14 = *(ulong **)(param_4 + _DAT_11307abc8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0dc78;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dc78);
  if (puVar14[2] == 0) {
LAB_102bbbc90:
    param_1 = 0;
    puStack_78 = (ulong *)0x0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(puVar14);
    puVar13 = puVar12;
    func_0x000100029284(ppuVar4);
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(puVar14);
      goto LAB_102bbbc90;
    }
    func_0x0001000bb420(puVar14[7] + (long)ppuVar4 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar14;
  }
  func_0x000107c6142c(puVar12);
  if (lStack_68 == 0) {
LAB_102bbbdb4:
    func_0x000102bc85b8(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar5 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar11 = PTR___sypN_11034f1a8;
    puVar6 = &uStack_88;
    puVar12 = &uStack_80;
    func_0x000107c6147c(puVar6,puVar12,PTR___sypN_11034f1a8 + 8,uVar5,6);
    uVar15 = uStack_88;
    if (((ulong)puVar6 & 1) != 0) {
      uVar7 = uStack_88;
      func_0x000107c3ebcc();
      func_0x000107c61170(uVar15);
      if ((int)uVar7 != 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f0dd98;
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dd98);
        if (puVar14[2] == 0) {
LAB_102bbbd64:
          param_1 = 0;
          puStack_78 = (ulong *)0x0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x000107c61434(puVar14);
          puVar13 = puVar12;
          func_0x000100029284(ppuVar4);
          if (((ulong)puVar13 & 1) == 0) {
            func_0x000107c6142c(puVar14);
            goto LAB_102bbbd64;
          }
          func_0x0001000bb420(puVar14[7] + (long)ppuVar4 * 0x20,&uStack_80);
          func_0x000107c6142c(puVar12);
          puVar12 = puVar14;
        }
        func_0x000107c6142c(puVar12);
        if (lStack_68 == 0) goto LAB_102bbbdb4;
        puVar6 = &uStack_88;
        func_0x000107c6147c(puVar6,&uStack_80,puVar11 + 8,uVar5,6);
        if (((ulong)puVar6 & 1) != 0) {
          uVar15 = uStack_88;
          func_0x000107c3ebcc(uStack_88);
          func_0x000107c61170(uStack_88);
          goto LAB_102bbbdd0;
        }
      }
    }
  }
  uVar15 = 0;
LAB_102bbbdd0:
  func_0x0001000d224c(&uStack_80);
  puVar12 = puStack_78;
  uVar8 = uStack_80;
  uVar3 = uStack_80;
  func_0x000107c614f0(uStack_80);
  uVar2 = 0;
  func_0x00010403c628(0xd000000000000040,0x800000010f0fc1c0,uVar3,puVar12);
  func_0x000107c615e8(uVar8);
  FUN_102bb9f90();
  lVar9 = param_3;
  func_0x000107c5b9a4();
  func_0x000107c61180();
  if (lVar9 == 0) {
    bVar1 = false;
  }
  else {
    lVar10 = lVar9;
    func_0x000107c49804();
    func_0x000107c61170(lVar9);
    bVar1 = (int)lVar10 != 0;
  }
  func_0x000107ae4dcc(uVar8,uVar15,bVar1,uVar2 & 1);
  func_0x000107c61170(uVar8);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c5994c(param_3);
  func_0x000107c61170(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_2);
  func_0x000107c59948(param_3);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 102bbbef0; end: 102bbbf4f; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController initWithNibName:bundle:] */

void FUN_102bbbef0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdContextEmbeddedContent.AdContextEmbeddedViewController",0x38,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbbf1c);
  (*pcVar1)();
}



/* Entry: 102bbbf50; end: 102bbc117; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bbbf8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbc03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbc05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbc0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbc0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bbc0e0) */
/* WARNING: Removing unreachable block (ram,0x000102bbc060) */
/* WARNING: Removing unreachable block (ram,0x000102bbc040) */
/* WARNING: Removing unreachable block (ram,0x000102bbbf90) */
/* WARNING: Removing unreachable block (ram,0x000102bbc100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbbf50(long param_1)

{
  FUN_102bc899c(param_1 + _DAT_112efcc88);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efcc90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efcc98));
  return;
}



/* Entry: 102bbc118; end: 102bbc137;  */

void FUN_102bbc118(void)

{
  func_0x000107c61168(&PTR_PTR_112894420);
  return;
}



/* Entry: 102bbc138; end: 102bbcb37;  */

/* WARNING: Possible PIC construction at 0x000102bbc470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbc220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bbc260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bbc224) */
/* WARNING: Removing unreachable block (ram,0x000102bbc230) */
/* WARNING: Removing unreachable block (ram,0x000102bbc474) */
/* WARNING: Removing unreachable block (ram,0x000102bbc264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbc138(ulong *param_1,double param_2,long param_3,ulong *param_4)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  long unaff_x20;
  double dVar13;
  long lVar14;
  code *pcVar15;
  ulong *puStack_78;
  
  if (param_3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112efcd00);
    if (lVar3 != 0) {
      dVar13 = 0.0;
      lVar14 = 0;
      dVar11 = param_2;
LAB_102bbc1cc:
      dVar12 = dVar11;
      func_0x000107c3b9ac();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      if ((dVar13 != 0.0) && (lVar4 != lVar14 || dVar13 != dVar12)) {
        func_0x000107c605b8(lVar4,dVar12,lVar14,dVar13,0);
      }
      goto code_r0x000107c6142c;
    }
  }
  else {
    lVar3 = param_3;
    dVar12 = param_2;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    lVar14 = lVar3;
    func_0x000107c5faec();
    dVar11 = dVar12;
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(unaff_x20 + _DAT_112efcd00);
    dVar13 = dVar12;
    if (lVar3 != 0) goto LAB_102bbc1cc;
    if (dVar12 != 0.0) goto code_r0x000107c6142c;
  }
  puVar6 = (ulong *)0x0;
  func_0x000103b81f54();
  puVar5 = (ulong *)*puVar6;
  dVar12 = (double)puVar6[1];
  if ((puVar5 == param_1 && dVar12 == param_2) ||
     (func_0x000107c605b8(puVar5,dVar12,param_1,param_2,0), ((ulong)puVar5 & 1) != 0)) {
    uVar10 = SUB84(dVar12,0);
    if ((param_4 != (ulong *)0x0) && (puVar6 = param_4, FUN_102bbcb38(), (uVar10 & 0xff) != 1)) {
LAB_102bbc2c4:
      puStack_78 = puVar6;
      func_0x0001007d6d78(&puStack_78);
    }
  }
  else {
    func_0x000103bb6b44();
    puVar6 = (ulong *)*puVar5;
    if (((puVar6 == param_1) && ((double)puVar5[1] == param_2)) ||
       (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0), ((ulong)puVar6 & 1) != 0)) {
      dVar12 = 0.0;
      if (param_4 != (ulong *)0x0) {
        uVar10 = 0x3bb6dfc;
        puVar6 = param_4;
        FUN_102bbcc60();
        if (((uVar10 & 0xff) != 1) && (0.0 < (double)puVar6)) {
          uVar10 = 0x3bb6fe0;
          puVar5 = param_4;
          FUN_102bbcc60(param_4);
          if ((uVar10 & 0xff) != 1) {
            dVar12 = (double)puVar5 / (double)puVar6;
            FUN_102bbcd90(puVar5,puVar6);
          }
        }
      }
      FUN_102bcc4bc(0);
      (*(code *)(undefined *)0x102bcc5b0)(dVar12);
    }
    else {
      func_0x000103bb6d50();
      puVar7 = (undefined8 *)*puVar6;
      if (((puVar7 == param_1) && ((double)puVar6[1] == param_2)) ||
         (func_0x000107c605b8(puVar7,puVar6[1],param_1,param_2,0), ((ulong)puVar7 & 1) != 0)) {
        pcVar15 = (code *)(undefined *)0x102bcc5e8;
LAB_102bbc3e0:
        uVar8 = 0;
        FUN_102bcc4bc(0);
        uVar9 = 1;
      }
      else {
        func_0x000103bad358();
        puVar6 = (ulong *)*puVar7;
        if (((puVar6 == param_1) && ((double)puVar7[1] == param_2)) ||
           (func_0x000107c605b8(puVar6,puVar7[1],param_1,param_2,0), ((ulong)puVar6 & 1) != 0)) {
          pcVar15 = (code *)(undefined *)0x102bcc620;
          goto LAB_102bbc3e0;
        }
        func_0x000103bad390();
        puVar5 = (ulong *)*puVar6;
        if (((puVar5 == param_1) && ((double)puVar6[1] == param_2)) ||
           (func_0x000107c605b8(puVar5,puVar6[1],param_1,param_2,0), ((ulong)puVar5 & 1) != 0)) {
          pcVar15 = (code *)(undefined *)0x102bcc620;
        }
        else {
          func_0x000103bb5854();
          puVar6 = (ulong *)*puVar5;
          if (((puVar6 == param_1) && ((double)puVar5[1] == param_2)) ||
             (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0), ((ulong)puVar6 & 1) != 0)) {
            pcVar15 = (code *)(undefined *)0x102bcc750;
            goto LAB_102bbc3e0;
          }
          func_0x000103bb588c();
          puVar5 = (ulong *)*puVar6;
          if (((puVar5 != param_1) || ((double)puVar6[1] != param_2)) &&
             (func_0x000107c605b8(puVar5,puVar6[1],param_1,param_2,0), ((ulong)puVar5 & 1) == 0)) {
            func_0x000103bb463c();
            puVar6 = (ulong *)*puVar5;
            if (((puVar6 == param_1) && ((double)puVar5[1] == param_2)) ||
               (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0), ((ulong)puVar6 & 1) != 0))
            {
              pcVar15 = (code *)(undefined *)0x102bcc788;
LAB_102bbc678:
              FUN_102bcc4bc(0);
              (*pcVar15)();
              goto LAB_102bbc3f8;
            }
            func_0x000103bb610c();
            puVar5 = (ulong *)*puVar6;
            dVar12 = (double)puVar6[1];
            if (((puVar5 == param_1) && (dVar12 == param_2)) ||
               (func_0x000107c605b8(puVar5,dVar12,param_1,param_2,0), ((ulong)puVar5 & 1) != 0)) {
              uVar10 = SUB84(dVar12,0);
              if (((param_4 != (ulong *)0x0) &&
                  (puVar6 = param_4, FUN_102bbd080(), (uVar10 & 0xff) != 1)) &&
                 (puVar5 = puVar6, func_0x000102bbd1a8(), ((ulong)puVar5 & 1) == 0)) {
                pdVar1 = (double *)(*(long *)(unaff_x20 + _DAT_112efccb8) + _DAT_112efce10);
                *pdVar1 = (double)puVar6;
                *(undefined1 *)(pdVar1 + 1) = 0;
                uVar8 = 0;
                FUN_102bcc4bc(0);
                (*(code *)(undefined *)0x102bcc550)(puVar6,uVar8,&PTR_DAT_1105acc90);
              }
              goto LAB_102bbc3f8;
            }
            func_0x000103b81960();
            puVar6 = (ulong *)*puVar5;
            if (((puVar6 == param_1) && ((double)puVar5[1] == param_2)) ||
               (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0), ((ulong)puVar6 & 1) != 0))
            {
LAB_102bbc77c:
              puStack_78 = (ulong *)CONCAT71(puStack_78._1_7_,1);
              puVar6 = puStack_78;
              goto LAB_102bbc2c4;
            }
            func_0x000103b81998();
            puVar5 = (ulong *)*puVar6;
            if (((puVar5 != param_1) || ((double)puVar6[1] != param_2)) &&
               (func_0x000107c605b8(puVar5,puVar6[1],param_1,param_2,0), ((ulong)puVar5 & 1) == 0))
            {
              func_0x000103b81834();
              puVar6 = (ulong *)*puVar5;
              if (((puVar6 != param_1) || ((double)puVar5[1] != param_2)) &&
                 (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0), ((ulong)puVar6 & 1) == 0)
                 ) {
                func_0x000103b81928();
                puVar5 = (ulong *)*puVar6;
                if (((puVar5 != param_1) || ((double)puVar6[1] != param_2)) &&
                   (func_0x000107c605b8(puVar5,puVar6[1],param_1,param_2,0),
                   ((ulong)puVar5 & 1) == 0)) {
                  func_0x000103b81490();
                  puVar6 = (ulong *)*puVar5;
                  if (((puVar6 == param_1) && ((double)puVar5[1] == param_2)) ||
                     (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0),
                     ((ulong)puVar6 & 1) != 0)) {
                    *(undefined1 *)(unaff_x20 + _DAT_112efccf0) = 1;
                    pcVar15 = (code *)(undefined *)0x102bcc658;
                    goto LAB_102bbc678;
                  }
                  func_0x000103bb9c00();
                  puVar5 = (ulong *)*puVar6;
                  if (((puVar5 == param_1) && ((double)puVar6[1] == param_2)) ||
                     (func_0x000107c605b8(puVar5,puVar6[1],param_1,param_2,0),
                     ((ulong)puVar5 & 1) != 0)) {
                    *(undefined1 *)(unaff_x20 + _DAT_112efcd18) = 1;
                    FUN_102bcc4bc(0);
                    FUN_102bcc4dc();
                    puStack_78 = (ulong *)CONCAT71(puStack_78._1_7_,1);
                    puVar6 = puStack_78;
                    goto LAB_102bbc2c4;
                  }
                  func_0x000103bb9c70();
                  puVar6 = (ulong *)*puVar5;
                  if (((puVar6 != param_1) || ((double)puVar5[1] != param_2)) &&
                     (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0),
                     ((ulong)puVar6 & 1) == 0)) {
                    func_0x000103bb6c9c();
                    puVar5 = (ulong *)*puVar6;
                    if (((puVar5 == param_1) && ((double)puVar6[1] == param_2)) ||
                       (func_0x000107c605b8(puVar5,puVar6[1],param_1,param_2,0),
                       ((ulong)puVar5 & 1) != 0)) {
                      if (*(char *)(unaff_x20 + _DAT_112efcd38) == '\x01') goto LAB_102bbc978;
                    }
                    else {
                      func_0x000103bb6cd8();
                      puVar6 = (ulong *)*puVar5;
                      if ((puVar6 != param_1) || ((double)puVar5[1] != param_2)) {
                        puVar5 = param_1;
                        func_0x000107c605b8();
                        uVar10 = (uint)puVar5;
                        if (((ulong)puVar6 & 1) == 0) {
                          func_0x000103bb5d50();
                          puVar5 = (ulong *)*puVar6;
                          dVar12 = (double)puVar6[1];
                          if ((puVar5 != param_1) || (dVar12 != param_2)) {
                            puVar6 = param_1;
                            func_0x000107c605b8();
                            uVar10 = (uint)puVar6;
                            if (((ulong)puVar5 & 1) == 0) {
                              func_0x000103b817f8();
                              puVar6 = (ulong *)*puVar5;
                              if (((puVar6 == param_1) && ((double)puVar5[1] == param_2)) ||
                                 (func_0x000107c605b8(puVar6,puVar5[1],param_1,param_2,0),
                                 ((ulong)puVar6 & 1) != 0)) {
                                pcVar15 = (code *)(undefined *)0x102bcc7c4;
                                goto LAB_102bbc678;
                              }
                              goto LAB_102bbc3f8;
                            }
                          }
                          if (((param_4 != (ulong *)0x0) &&
                              (FUN_102bbd2a4(param_4), (uVar10 & 0xff) != 1)) && (dVar12 <= 0.0)) {
                            pcVar15 = (code *)(undefined *)0x102bcc694;
                            goto LAB_102bbc678;
                          }
                          goto LAB_102bbc3f8;
                        }
                      }
                      if (*(char *)(unaff_x20 + _DAT_112efcd38) == '\x01') {
                        FUN_102bcc4bc(0);
                        FUN_102bcc4dc();
                        goto LAB_102bbc77c;
                      }
                    }
                    goto LAB_102bbc3f8;
                  }
                  puVar7 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112efccb8) + _DAT_112efce10);
                  *puVar7 = 0;
                  *(undefined1 *)(puVar7 + 1) = 1;
LAB_102bbc978:
                  FUN_102bcc4bc(0);
                  (*(code *)(undefined *)0x102bcc518)();
                }
              }
            }
            puStack_78 = (ulong *)((ulong)puStack_78 & 0xffffffffffffff00);
            puVar6 = puStack_78;
            goto LAB_102bbc2c4;
          }
          pcVar15 = (code *)(undefined *)0x102bcc750;
        }
        uVar8 = 0;
        FUN_102bcc4bc(0);
        uVar9 = 0;
      }
      (*pcVar15)(uVar9,uVar8,&PTR_DAT_1105acc90);
    }
  }
LAB_102bbc3f8:
  puVar2 = PTR__swift_isaMask_11034f488;
  if (param_3 == 0) {
    func_0x0001000d224c(&puStack_78);
    puVar6 = puStack_78;
    (**(code **)((*(ulong *)puVar2 & *puStack_78) + 0x68))(param_1,param_2);
    func_0x000107c61170(puVar6);
    return;
  }
  func_0x000107c61174();
  func_0x0001000d224c(&puStack_78);
  puVar6 = puStack_78;
  dVar12 = *(double *)(param_3 + _DAT_11307abc8);
  func_0x00010018cc3c(dVar12);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x110))(param_1,param_2,dVar12,param_4);
  func_0x000107c61170(puVar6);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(dVar12);
  return;
}



/* Entry: 102bbcb38; end: 102bbcc5f;  */

undefined1  [16] FUN_102bbcb38(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = param_1;
  func_0x000103b81fc8();
  if (param_1[2] == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_102bbcc2c:
    func_0x000102bc85b8(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_1);
    uVar6 = uVar1;
    func_0x000100029284(lVar3);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(uVar1);
      goto LAB_102bbcc2c;
    }
    func_0x0001000bb420(param_1[7] + lVar3 * 0x20,&uStack_50);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_1);
    if (lStack_38 == 0) goto LAB_102bbcc2c;
    uVar4 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = &uStack_58;
    func_0x000107c6147c(puVar5,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar5 & 1) != 0) {
      uVar4 = uStack_58;
      func_0x000107c49820(uStack_58);
      func_0x000107c61170(uStack_58);
      uVar7 = 0;
      goto LAB_102bbcc4c;
    }
  }
  uVar4 = 0;
  uVar7 = 1;
LAB_102bbcc4c:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 102bbcc60; end: 102bbcd8f;  */

undefined1  [16] FUN_102bbcc60(long *param_1,code *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar2 = param_1;
  (*param_2)();
  if (param_1[2] == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
LAB_102bbcd58:
    func_0x000102bc85b8(&uStack_60,0x112d387f8,&UNK_10d902650);
  }
  else {
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_1);
    uVar6 = uVar1;
    func_0x000100029284(lVar3);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
      func_0x000107c6142c(uVar1);
      goto LAB_102bbcd58;
    }
    func_0x0001000bb420(param_1[7] + lVar3 * 0x20,&uStack_60);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_1);
    if (lStack_48 == 0) goto LAB_102bbcd58;
    uVar4 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = &uStack_68;
    func_0x000107c6147c(puVar5,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x000107c4223c(uStack_68);
      uVar4 = CONCAT17(in_register_00005007,
                       CONCAT16(in_register_00005006,
                                CONCAT15(in_register_00005005,
                                         CONCAT14(in_register_00005004,
                                                  CONCAT13(in_register_00005003,
                                                           CONCAT12(in_register_00005002,
                                                                    CONCAT11(in_register_00005001,
                                                                             in_b0)))))));
      func_0x000107c61170(uStack_68);
      uVar7 = 0;
      goto LAB_102bbcd78;
    }
  }
  uVar4 = 0;
  uVar7 = 1;
LAB_102bbcd78:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 102bbcd90; end: 102bbd07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbcd90(double param_1,double param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long **pplVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *aplStack_70 [2];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112efcd00);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x0001000d224c(&plStack_90);
  plVar4 = plStack_90;
  plVar3 = plStack_90;
  func_0x000107c614f0();
  func_0x000102bb74c0();
  func_0x000107c615e8();
  if (((ulong)plVar3 & 1) == 0) {
    func_0x0001000d224c(aplStack_70);
    plVar4 = aplStack_70[0];
    plVar3 = aplStack_70[0];
    func_0x000107c614f0();
    func_0x000102bb7524();
    func_0x000107c615e8();
    if (((ulong)plVar3 & 1) == 0) goto LAB_102bbd040;
  }
  uVar10 = *(ulong *)(lVar2 + _DAT_11307abc8);
  func_0x00010404bdd4();
  if (*(long *)(uVar10 + 0x10) == 0) {
    uStack_88 = 0;
    plStack_90 = (long *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
LAB_102bbcf38:
    func_0x000102bc85b8(&plStack_90,0x112d387f8,&UNK_10d902650);
LAB_102bbcf50:
    dVar13 = 0.0;
    dVar12 = 1.0;
  }
  else {
    lVar5 = *plVar4;
    uVar11 = plVar4[1];
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar10);
    uVar9 = uVar11;
    func_0x000100029284(lVar5);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(uVar10);
      uStack_88 = 0;
      plStack_90 = (long *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(uVar10 + 0x38) + lVar5 * 0x20,&plStack_90);
      func_0x000107c6142c(uVar11);
      uVar11 = uVar10;
    }
    func_0x000107c6142c(uVar11);
    if (lStack_78 == 0) goto LAB_102bbcf38;
    uVar6 = 0;
    func_0x000102bc89c0(0,0x112efcdb8,&PTR_PTR_1126c9620);
    pplVar7 = aplStack_70;
    func_0x000107c6147c(pplVar7,&plStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if (((ulong)pplVar7 & 1) == 0) goto LAB_102bbcf50;
    plVar4 = aplStack_70[0];
    func_0x000107c40ff4(aplStack_70[0]);
    plVar3 = aplStack_70[0];
    func_0x000107c5cd14(aplStack_70[0]);
    func_0x000107c61170(aplStack_70[0]);
    dVar13 = (double)(long)plVar4;
    dVar12 = (double)(long)plVar3;
  }
  puVar8 = PTR_PTR_1126ac078;
  func_0x000107c610f8(PTR_PTR_1126ac078);
  func_0x000107c453e4();
  func_0x000107c53cb0(dVar13);
  func_0x000107c56b84(dVar12,puVar8);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbd06c);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbd070);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbd074);
    (*pcVar1)();
  }
  func_0x000107c53c90(puVar8);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbd078);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbd07c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bbd080);
    (*pcVar1)();
  }
  func_0x000107c59f6c(puVar8);
  uVar6 = 0;
  FUN_102bcc4bc(0);
  (*(code *)(undefined *)0x102bcc6d0)(puVar8,uVar6,&PTR_DAT_1105acc90);
  func_0x000107c61170(puVar8);
LAB_102bbd040:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bbd080; end: 102bbd2a3;  */

void FUN_102bbd080(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = param_1;
  func_0x000103bb63a0();
  if (param_1[2] == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_1);
    uVar6 = uVar1;
    func_0x000100029284(lVar3);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(param_1[7] + lVar3 * 0x20,&uStack_50);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_1);
      if (lStack_38 != 0) {
        uVar4 = 0;
        func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar5 = &uStack_58;
        func_0x000107c6147c(puVar5,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
        if (((ulong)puVar5 & 1) == 0) {
          return;
        }
        uVar4 = uStack_58;
        func_0x000107c5d388(uStack_58);
        func_0x000107c61170(uStack_58);
        FUN_102bc7e80(uVar4);
        return;
      }
    }
  }
  func_0x000102bc85b8(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 102bbd2a4; end: 102bbd3df;  */

undefined8 FUN_102bbd2a4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar2 = param_1;
  func_0x00010442f948();
  if (param_1[2] == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_1);
    uVar6 = uVar1;
    func_0x000100029284(lVar3);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(param_1[7] + lVar3 * 0x20,&uStack_60);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_1);
      if (lStack_48 != 0) {
        uVar4 = 0;
        func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
        puVar5 = &uStack_68;
        func_0x000107c6147c(puVar5,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
        func_0x000107c3ab34(uStack_68);
        func_0x000107c61170(uStack_68);
        return CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,
                                                   CONCAT13(in_register_00005003,
                                                            CONCAT12(in_register_00005002,
                                                                     CONCAT11(in_register_00005001,
                                                                              in_b0)))))));
      }
    }
  }
  func_0x000102bc85b8(&uStack_60,0x112d387f8,&UNK_10d902650);
  return 0;
}



/* Entry: 102bbd3e0; end: 102bbd49b; -[_TtC24AdContextEmbeddedContent31AdContextEmbeddedViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102bbd480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bbd484) */

void FUN_102bbd3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102bbc138(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102bbd49c; end: 102bbd737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbd49c(double param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar3 = 0;
  uVar4 = 0;
  lVar9 = *(long *)(unaff_x20 + _DAT_112efcd00);
  if (lVar9 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(lVar9 + _DAT_11307abc8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9638;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110eb9638);
  if (puVar10[2] == 0) {
    param_1 = 0.0;
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c61174(lVar9);
    func_0x000107c61434(puVar10);
LAB_102bbd5dc:
    func_0x000107c6142c(param_3);
LAB_102bbd5e4:
    puVar7 = (undefined8 *)0x112d387f8;
    func_0x000102bc85b8(&uStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c61438(puVar10,2);
    func_0x000107c61174(lVar9);
    uVar6 = param_3;
    func_0x000100029284(ppuVar1);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      param_1 = 0.0;
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
      goto LAB_102bbd5dc;
    }
    func_0x0001000bb420(puVar10[7] + (long)ppuVar1 * 0x20,&uStack_70);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(puVar10);
    if (lStack_58 == 0) goto LAB_102bbd5e4;
    uVar2 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar7 = &uStack_70;
    func_0x000107c6147c(&uStack_80,puVar7,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if ((uVar3 & 1) != 0) {
      func_0x000107c6142c(puVar10);
      func_0x000107c4223c(uStack_80);
      FUN_102bbcd90();
      func_0x000107c61170(uStack_80);
      goto LAB_102bbd714;
    }
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0c078;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c078);
  if (puVar10[2] == 0) {
LAB_102bbd65c:
    param_1 = 0.0;
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c61434(puVar10);
    puVar8 = puVar7;
    func_0x000100029284(ppuVar1);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_102bbd65c;
    }
    func_0x0001000bb420(puVar10[7] + (long)ppuVar1 * 0x20,&uStack_70);
    func_0x000107c6142c(puVar7);
    puVar7 = puVar10;
  }
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(puVar10);
  if (lStack_58 == 0) {
    func_0x000102bc85b8(&uStack_70,0x112d387f8,&UNK_10d902650);
LAB_102bbd700:
    uVar2 = 0;
  }
  else {
    func_0x000107c6147c(&uStack_80,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar4 & 1) == 0) goto LAB_102bbd700;
    func_0x000107c6142c(uStack_78);
    uVar3 = uStack_80 & 0xffffffffffff;
    if ((uStack_78 & 0x2000000000000000) != 0) {
      uVar3 = uStack_78 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) goto LAB_102bbd700;
    lVar5 = lVar9;
    func_0x000107c3e4a4();
    uVar2 = 0x3ff0000000000000;
    if (((int)lVar5 != 0) && (func_0x000107c3e4ac(lVar9), 0.0 < param_1)) goto LAB_102bbd700;
  }
  FUN_102bbcd90(uVar2,uVar2);
LAB_102bbd714:
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 102bbd738; end: 102bbe23f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ******* FUN_102bbd738(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *******ppppppplVar3;
  int iVar4;
  bool bVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long ******pppppplVar16;
  ulong uVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long *******ppppppplVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar12 = 0;
  uVar15 = 0;
  iVar4 = (int)&ppppppplStack_90;
  uVar17 = 0;
  iVar5 = (int)&ppppppplStack_90;
  uVar20 = 0;
  iVar6 = (int)&ppppppplStack_90;
  ppppppplVar27 = (long *******)&ppppppplStack_90;
  iVar7 = (int)&ppppppplStack_90;
  ppppppplVar24 = *(long ********)((long)param_1 + _DAT_11307abc8);
  plVar9 = param_1;
  func_0x00010404c15c();
  if (ppppppplVar24[2] == (long ******)0x0) {
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_102bbd858:
    func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
    return (long *******)0x0;
  }
  lVar10 = *plVar9;
  uVar1 = plVar9[1];
  func_0x000107c61434(uVar1);
  func_0x000107c61434(ppppppplVar24);
  uVar22 = uVar1;
  func_0x000100029284(lVar10);
  if ((uVar22 & 1) == 0) {
    func_0x000107c6142c(ppppppplVar24);
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
    func_0x000107c6142c(uVar1);
    goto LAB_102bbd858;
  }
  func_0x0001000bb420(ppppppplVar24[7] + lVar10 * 4,&ppppppplStack_80);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(ppppppplVar24);
  if (lStack_68 == 0) goto LAB_102bbd858;
  uVar11 = 0;
  func_0x000102bc89c0(0,0x112efcdc0,&PTR_PTR_1126ca4e0);
  puVar2 = PTR___sypN_11034f1a8;
  ppppppplVar23 = (long *******)&ppppppplStack_80;
  func_0x000107c6147c(&ppppppplStack_90,ppppppplVar23,PTR___sypN_11034f1a8 + 8,uVar11,6);
  ppppppplVar3 = ppppppplStack_90;
  uVar21 = (uint)ppppppplVar23;
  if ((uVar12 & 1) == 0) {
    return (long *******)0x0;
  }
  FUN_102bbf770(ppppppplStack_90);
  ppppppplVar23 = ppppppplVar3;
  FUN_102bc7c8c(ppppppplVar3);
  if ((uVar21 & 0xff) == 1) {
    ppppppplVar23 = (long *******)0x0;
  }
  else {
    func_0x000107c5fdd0(ppppppplVar23);
  }
  func_0x000107c52e1c(ppppppplVar3);
  func_0x000107c61170(ppppppplVar23);
  func_0x0001000d224c(&ppppppplStack_80);
  ppppppplVar23 = ppppppplStack_80;
  ppppppplVar25 = ppppppplStack_80;
  func_0x000107c614f0(ppppppplStack_80);
  uVar21 = (uint)ppppppplVar25;
  FUN_102bb717c();
  func_0x000107c615e8(ppppppplVar23);
  uVar12 = (ulong)(uVar21 & 1);
  func_0x000107c5fca0(uVar12);
  func_0x000107c54508(ppppppplVar3);
  func_0x000107c61170(uVar12);
  func_0x0001000d224c(&ppppppplStack_80);
  ppppppplVar23 = ppppppplStack_80;
  ppppppplVar25 = ppppppplStack_80;
  func_0x000107c614f0(ppppppplStack_80);
  uVar21 = (uint)ppppppplVar25;
  func_0x000102bb71e0();
  func_0x000107c615e8(ppppppplVar23);
  uVar12 = (ulong)(uVar21 & 1);
  func_0x000107c5fca0(uVar12);
  func_0x000107c550f4(ppppppplVar3);
  func_0x000107c61170(uVar12);
  ppppppplVar23 = (long *******)0x112d38c88;
  uVar11 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar13 = 1;
  func_0x000107c6010c(1);
  func_0x000107c596dc(ppppppplVar3);
  func_0x000107c61170(uVar13);
  ppppppplVar25 = ppppppplVar3;
  func_0x000107c3d2a8();
  func_0x000107c61180();
  if (ppppppplVar25 != (long *******)0x0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110f0d018;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d018);
    if (ppppppplVar24[2] == (long ******)0x0) {
LAB_102bbda18:
      ppppppplStack_78 = (long *******)0x0;
      ppppppplStack_80 = (long *******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(ppppppplVar24);
      ppppppplVar26 = ppppppplVar23;
      func_0x000100029284(ppuVar14);
      if (((ulong)ppppppplVar26 & 1) == 0) {
        func_0x000107c6142c(ppppppplVar24);
        goto LAB_102bbda18;
      }
      func_0x0001000bb420(ppppppplVar24[7] + (long)ppuVar14 * 4,&ppppppplStack_80);
      func_0x000107c6142c(ppppppplVar23);
      ppppppplVar23 = ppppppplVar24;
    }
    func_0x000107c6142c(ppppppplVar23);
    if (lStack_68 == 0) {
      func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
LAB_102bbda8c:
      ppppppplVar26 = (long *******)0x0;
    }
    else {
      func_0x000107c6147c(&ppppppplStack_90,&ppppppplStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
      ppppppplVar23 = ppppppplStack_88;
      if ((uVar15 & 1) == 0) goto LAB_102bbda8c;
      ppppppplVar26 = ppppppplStack_90;
      func_0x000107c5fadc(ppppppplStack_90,ppppppplStack_88);
      func_0x000107c6142c(ppppppplVar23);
    }
    func_0x000107c52120(ppppppplVar25);
    func_0x000107c61170(ppppppplVar25);
    func_0x000107c61170(ppppppplVar26);
  }
  func_0x0001000d224c(&ppppppplStack_80);
  ppppppplVar23 = ppppppplStack_78;
  ppppppplVar25 = ppppppplStack_80;
  ppppppplVar26 = ppppppplStack_80;
  func_0x000107c614f0();
  FUN_102bb7588();
  func_0x000107c615e8();
  if (((ulong)ppppppplVar26 & 1) == 0) {
    func_0x00010404c0cc();
    if (ppppppplVar24[2] == (long ******)0x0) {
      ppppppplStack_78 = (long *******)0x0;
      ppppppplStack_80 = (long *******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
LAB_102bbdb8c:
      ppppppplVar23 = (long *******)0x112d387f8;
      func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
      ppppppplVar25 = (long *******)0x0;
    }
    else {
      pppppplVar16 = *ppppppplVar25;
      ppppppplVar23 = (long *******)ppppppplVar25[1];
      func_0x000107c61434(ppppppplVar24);
      func_0x000107c61434(ppppppplVar23);
      ppppppplVar25 = ppppppplVar23;
      func_0x000100029284(pppppplVar16);
      if (((ulong)ppppppplVar25 & 1) == 0) {
        func_0x000107c6142c(ppppppplVar24);
        ppppppplStack_78 = (long *******)0x0;
        ppppppplStack_80 = (long *******)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(ppppppplVar24[7] + (long)pppppplVar16 * 4,&ppppppplStack_80);
        func_0x000107c6142c(ppppppplVar23);
        ppppppplVar23 = ppppppplVar24;
      }
      func_0x000107c6142c(ppppppplVar23);
      if (lStack_68 == 0) goto LAB_102bbdb8c;
      ppppppplVar23 = (long *******)&ppppppplStack_80;
      func_0x000107c6147c(&ppppppplStack_90,ppppppplVar23,puVar2 + 8,uVar11,6);
      ppppppplVar25 = ppppppplStack_90;
      if (iVar4 == 0) {
        ppppppplVar25 = (long *******)0x0;
      }
    }
    func_0x000107c547e4(ppppppplVar3);
    func_0x000107c61170(ppppppplVar25);
  }
  uVar21 = (uint)ppppppplVar25;
  func_0x00010403fee0();
  uVar12 = (ulong)(uVar21 & 1);
  func_0x000107c5fca0(uVar12);
  func_0x000107c54504(ppppppplVar3);
  func_0x000107c61170(uVar12);
  uVar21 = (uint)uVar12;
  func_0x00010403f844();
  uVar12 = (ulong)(uVar21 & 1);
  func_0x000107c5fca0(uVar12);
  func_0x000107c544f4(ppppppplVar3);
  func_0x000107c61170(uVar12);
  ppuVar14 = &PTR____CFConstantStringClassReference_110f0d018;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d018);
  if (ppppppplVar24[2] == (long ******)0x0) {
LAB_102bbdc60:
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(ppppppplVar24);
    ppppppplVar25 = ppppppplVar23;
    func_0x000100029284(ppuVar14);
    if (((ulong)ppppppplVar25 & 1) == 0) {
      func_0x000107c6142c(ppppppplVar24);
      goto LAB_102bbdc60;
    }
    func_0x0001000bb420(ppppppplVar24[7] + (long)ppuVar14 * 4,&ppppppplStack_80);
    func_0x000107c6142c(ppppppplVar23);
    ppppppplVar23 = ppppppplVar24;
  }
  func_0x000107c6142c(ppppppplVar23);
  if (lStack_68 == 0) {
    ppppppplVar23 = (long *******)0x112d387f8;
    func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
LAB_102bbdccc:
    ppppppplVar26 = (long *******)0x0;
    ppppppplVar25 = (long *******)0x0;
LAB_102bbdcd4:
    ppppppplVar18 = ppppppplVar3;
    func_0x000107c5b9a4();
    func_0x000107c61180();
    if (ppppppplVar18 == (long *******)0x0) {
LAB_102bbdd30:
      if (ppppppplVar26 != (long *******)0x0) goto LAB_102bbdd34;
      ppppppplVar25 = (long *******)0x0;
    }
    else {
      ppppppplVar19 = ppppppplVar18;
      func_0x000107c49804();
      func_0x000107c61170(ppppppplVar18);
      if (((int)ppppppplVar19 == 0) ||
         (ppppppplVar18 = ppppppplVar3, func_0x000107c40e0c(), (int)ppppppplVar18 != 6))
      goto LAB_102bbdd30;
      func_0x000107c6142c(ppppppplVar26);
      ppppppplVar25 = ppppppplVar3;
      func_0x000107c5b8b0(ppppppplVar3);
      func_0x000107c61180();
    }
  }
  else {
    ppppppplVar23 = (long *******)&ppppppplStack_80;
    func_0x000107c6147c(&ppppppplStack_90,ppppppplVar23,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((uVar17 & 1) == 0) goto LAB_102bbdccc;
    uVar12 = (ulong)ppppppplStack_90 & 0xffffffffffff;
    if (((ulong)ppppppplStack_88 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)ppppppplStack_88 >> 0x38 & 0xf;
    }
    ppppppplVar26 = ppppppplStack_88;
    ppppppplVar25 = ppppppplStack_90;
    if (uVar12 == 0) goto LAB_102bbdcd4;
LAB_102bbdd34:
    ppppppplVar23 = ppppppplVar26;
    func_0x000107c5fadc(ppppppplVar25);
    func_0x000107c6142c(ppppppplVar26);
  }
  func_0x000107c52404(ppppppplVar3);
  func_0x000107c61170(ppppppplVar25);
  ppuVar14 = &PTR____CFConstantStringClassReference_110e4e478;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e4e478);
  if (ppppppplVar24[2] == (long ******)0x0) {
LAB_102bbddcc:
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(ppppppplVar24);
    ppppppplVar25 = ppppppplVar23;
    func_0x000100029284(ppuVar14);
    if (((ulong)ppppppplVar25 & 1) == 0) {
      func_0x000107c6142c(ppppppplVar24);
      goto LAB_102bbddcc;
    }
    func_0x0001000bb420(ppppppplVar24[7] + (long)ppuVar14 * 4,&ppppppplStack_80);
    func_0x000107c6142c(ppppppplVar23);
    ppppppplVar23 = ppppppplVar24;
  }
  func_0x000107c6142c(ppppppplVar23);
  if (lStack_68 == 0) {
    ppppppplVar23 = (long *******)0x112d387f8;
    func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
    ppppppplVar25 = (long *******)0x0;
  }
  else {
    ppppppplVar23 = (long *******)&ppppppplStack_80;
    func_0x000107c6147c(&ppppppplStack_90,ppppppplVar23,puVar2 + 8,uVar11,6);
    ppppppplVar25 = ppppppplStack_90;
    if (iVar5 == 0) {
      ppppppplVar25 = (long *******)0x0;
    }
  }
  func_0x000107c558e4(ppppppplVar3);
  func_0x000107c61170(ppppppplVar25);
  ppuVar14 = &PTR____CFConstantStringClassReference_110f0c0b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c0b8);
  if (ppppppplVar24[2] == (long ******)0x0) {
LAB_102bbdea0:
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(ppppppplVar24);
    ppppppplVar25 = ppppppplVar23;
    func_0x000100029284(ppuVar14);
    if (((ulong)ppppppplVar25 & 1) == 0) {
      func_0x000107c6142c(ppppppplVar24);
      goto LAB_102bbdea0;
    }
    func_0x0001000bb420(ppppppplVar24[7] + (long)ppuVar14 * 4,&ppppppplStack_80);
    func_0x000107c6142c(ppppppplVar23);
    ppppppplVar23 = ppppppplVar24;
  }
  func_0x000107c6142c(ppppppplVar23);
  if (lStack_68 == 0) {
    ppppppplVar23 = (long *******)0x112d387f8;
    func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
LAB_102bbdefc:
    ppuVar14 = &PTR____CFConstantStringClassReference_110f0c078;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c078);
    if (ppppppplVar24[2] == (long ******)0x0) {
LAB_102bbdf60:
      ppppppplStack_78 = (long *******)0x0;
      ppppppplStack_80 = (long *******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(ppppppplVar24);
      ppppppplVar25 = ppppppplVar23;
      func_0x000100029284(ppuVar14);
      if (((ulong)ppppppplVar25 & 1) == 0) {
        func_0x000107c6142c(ppppppplVar24);
        goto LAB_102bbdf60;
      }
      func_0x0001000bb420(ppppppplVar24[7] + (long)ppuVar14 * 4,&ppppppplStack_80);
      func_0x000107c6142c(ppppppplVar23);
      ppppppplVar23 = ppppppplVar24;
    }
    func_0x000107c6142c(ppppppplVar23);
    if (lStack_68 != 0) {
      ppppppplVar23 = (long *******)&ppppppplStack_80;
      func_0x000107c6147c(&ppppppplStack_90,ppppppplVar23,puVar2 + 8,PTR___sSSN_11034da80,6);
      if (iVar6 == 0) {
        ppppppplStack_90 = (long *******)0x0;
        ppppppplStack_88 = (long *******)0x0;
      }
      goto LAB_102bbdfc4;
    }
    ppppppplVar23 = (long *******)0x112d387f8;
    func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
LAB_102bbdfe4:
    ppppppplVar26 = (long *******)0x0;
  }
  else {
    ppppppplVar23 = (long *******)&ppppppplStack_80;
    func_0x000107c6147c(&ppppppplStack_90,ppppppplVar23,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((uVar20 & 1) == 0) goto LAB_102bbdefc;
LAB_102bbdfc4:
    ppppppplVar25 = ppppppplStack_88;
    if (ppppppplStack_88 == (long *******)0x0) goto LAB_102bbdfe4;
    ppppppplVar26 = ppppppplStack_90;
    ppppppplVar23 = ppppppplStack_88;
    func_0x000107c5fadc(ppppppplStack_90);
    func_0x000107c6142c(ppppppplVar25);
  }
  func_0x000107c5a4f0(ppppppplVar3);
  func_0x000107c61170(ppppppplVar26);
  ppuVar14 = &PTR____CFConstantStringClassReference_110eb96b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110eb96b8);
  if (ppppppplVar24[2] == (long ******)0x0) {
LAB_102bbe060:
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(ppppppplVar24);
    ppppppplVar25 = ppppppplVar23;
    func_0x000100029284(ppuVar14);
    if (((ulong)ppppppplVar25 & 1) == 0) {
      func_0x000107c6142c(ppppppplVar24);
      goto LAB_102bbe060;
    }
    func_0x0001000bb420(ppppppplVar24[7] + (long)ppuVar14 * 4,&ppppppplStack_80);
    func_0x000107c6142c(ppppppplVar23);
    ppppppplVar23 = ppppppplVar24;
  }
  func_0x000107c6142c(ppppppplVar23);
  if (lStack_68 == 0) {
    ppppppplVar27 = (long *******)&ppppppplStack_80;
    func_0x000102bc85b8(ppppppplVar27,0x112d387f8,&UNK_10d902650);
LAB_102bbe0c8:
    ppppppplVar23 = ppppppplVar27;
    ppppppplVar27 = (long *******)0x0;
  }
  else {
    func_0x000107c6147c(&ppppppplStack_90,&ppppppplStack_80,puVar2 + 8,uVar11,6);
    ppppppplVar23 = ppppppplStack_90;
    if (((ulong)ppppppplVar27 & 1) == 0) goto LAB_102bbe0c8;
    ppppppplVar27 = ppppppplStack_90;
    func_0x000107c3ebcc(ppppppplStack_90);
    func_0x000107c61170();
  }
  func_0x00010404c524();
  if (ppppppplVar24[2] == (long ******)0x0) {
    ppppppplStack_78 = (long *******)0x0;
    ppppppplStack_80 = (long *******)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    pppppplVar16 = *ppppppplVar23;
    ppppppplVar23 = (long *******)ppppppplVar23[1];
    func_0x000107c61434(ppppppplVar24);
    func_0x000107c61434(ppppppplVar23);
    ppppppplVar25 = ppppppplVar23;
    func_0x000100029284(pppppplVar16);
    if (((ulong)ppppppplVar25 & 1) == 0) {
      func_0x000107c6142c(ppppppplVar24);
      ppppppplStack_78 = (long *******)0x0;
      ppppppplStack_80 = (long *******)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(ppppppplVar24[7] + (long)pppppplVar16 * 4,&ppppppplStack_80);
      func_0x000107c6142c(ppppppplVar23);
      ppppppplVar23 = ppppppplVar24;
    }
    func_0x000107c6142c(ppppppplVar23);
    if (lStack_68 != 0) {
      func_0x000107c6147c(&ppppppplStack_90,&ppppppplStack_80,puVar2 + 8,
                          PTR___s10Foundation4DataVN_110350ae0,6);
      ppppppplVar24 = ppppppplStack_90;
      ppppppplVar23 = ppppppplStack_88;
      if (iVar7 == 0) {
        ppppppplVar24 = (long *******)0x0;
        ppppppplVar23 = (long *******)0xf000000000000000;
      }
      goto LAB_102bbe1a0;
    }
  }
  func_0x000102bc85b8(&ppppppplStack_80,0x112d387f8,&UNK_10d902650);
  ppppppplVar24 = (long *******)0x0;
  ppppppplVar23 = (long *******)0xf000000000000000;
LAB_102bbe1a0:
  ppppppplVar25 = ppppppplVar3;
  func_0x000107c5b9a4();
  func_0x000107c61180();
  if (ppppppplVar25 == (long *******)0x0) {
    bVar8 = false;
  }
  else {
    ppppppplVar26 = ppppppplVar25;
    func_0x000107c49804();
    func_0x000107c61170(ppppppplVar25);
    bVar8 = (int)ppppppplVar26 != 0;
  }
  uVar11 = 0;
  func_0x000103b74c1c(0);
  func_0x000103b748f8(ppppppplVar27,ppppppplVar24,ppppppplVar23,bVar8,uVar11);
  uVar12 = (ulong)((uint)ppppppplVar27 & 1);
  func_0x000107c6010c(uVar12);
  func_0x000107c558ac(ppppppplVar3);
  func_0x000107c61170(uVar12);
  FUN_102bbbbb8(ppppppplVar3,param_1);
  func_0x0001000b44c0(ppppppplVar24,ppppppplVar23);
  return ppppppplVar3;
}



/* Entry: 102bbe240; end: 102bbe343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102bbe240(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 auStack_40 [2];
  
  lVar4 = param_1;
  func_0x000107c40e0c();
  if ((int)lVar4 == 3) {
    func_0x000107c3d2a4();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar4 = param_1;
      func_0x000107c45170();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar1 = lVar4;
      func_0x000107c5fc54(lVar4,PTR___sSSN_11034da80);
      func_0x000107c61170(lVar4);
      lVar4 = *(long *)(lVar1 + 0x10);
      func_0x000107c6142c(lVar1);
      if (lVar4 == 4) {
        func_0x0001000d224c(auStack_40);
        uVar2 = auStack_40[0];
        func_0x000107c614f0(auStack_40[0]);
        uVar3 = (uint)uVar2;
        func_0x000102bb73f8();
        goto LAB_102bbe318;
      }
    }
    uVar3 = 1;
  }
  else {
    func_0x0001000d224c(auStack_40);
    uVar2 = auStack_40[0];
    func_0x000107c614f0(auStack_40[0]);
    uVar3 = (uint)uVar2;
    func_0x000102bb7394();
LAB_102bbe318:
    func_0x000107c615e8(auStack_40[0]);
  }
  return uVar3 & 1;
}



/* Entry: 102bbe344; end: 102bbe40b;  */

void FUN_102bbe344(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_102bbe40c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    func_0x000107c61170(param_2);
  }
  *param_1 = param_3;
  return;
}



/* Entry: 102bbe40c; end: 102bbf76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102bbe40c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126d64f0;
  func_0x000107c610f8(PTR_PTR_1126d64f0);
  func_0x000107c453e4();
  puVar13 = &UNK_1105ab180;
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102bc7f78;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bbf884;
  puStack_88 = &UNK_1105ab1e8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56da0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc7f80;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105ab210;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56e58(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar2 = &UNK_1105ab248;
  func_0x000107c613fc(&UNK_1105ab248,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  puVar2[0x18] = 0;
  pcStack_80 = FUN_102bc7fb0;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a70bf8;
  puStack_88 = &UNK_1105ab260;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56ce0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc7fbc;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a70bf8;
  puStack_88 = &UNK_1105ab288;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56d80(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar2 = &UNK_1105ab2c0;
  func_0x000107c613fc(&UNK_1105ab2c0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  puVar2[0x18] = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0xe;
  pcStack_80 = (code *)0x102bc7fc4;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f70bd8;
  puStack_88 = &UNK_1105ab2d8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56f24(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar2 = &UNK_1105ab310;
  func_0x000107c613fc(&UNK_1105ab310,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  puVar2[0x18] = 7;
  *(undefined8 *)(puVar2 + 0x20) = 0xc;
  pcStack_80 = FUN_102bc8a00;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f70bd8;
  puStack_88 = &UNK_1105ab328;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56d3c(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar2 = &UNK_1105ab360;
  func_0x000107c613fc(&UNK_1105ab360,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  puVar2[0x18] = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0x1d;
  pcStack_80 = (code *)0x102bc8a04;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f70bd8;
  puStack_88 = &UNK_1105ab378;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56d40(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc7fd4;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f71478;
  puStack_88 = &UNK_1105ab3a0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c52408(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc7fdc;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bbf8d8;
  puStack_88 = &UNK_1105ab3c8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c5240c(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc7fe4;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bbf964;
  puStack_88 = &UNK_1105ab3f0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56d88(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc7fec;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f70bd8;
  puStack_88 = &UNK_1105ab418;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56e14(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc801c;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105ab440;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c576f0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  uVar5 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = 0x102bc8c8c;
  func_0x0001000bfde0(0x102bc8c8c,0,uVar5);
  uVar9 = uVar8;
  func_0x0001004575f0();
  func_0x000107c61574(uVar8);
  uVar8 = uVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c571e0(puVar1);
  func_0x000107c61170(uVar8);
  pcVar7 = FUN_102bbf9b0;
  func_0x0001000bfde0(FUN_102bbf9b0,0,uVar5);
  pcVar6 = pcVar7;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar7);
  pcVar7 = pcVar6;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(pcVar6);
  func_0x000107c54ac4(puVar1);
  func_0x000107c61170(pcVar7);
  uVar8 = 0x102bc8c90;
  func_0x0001000bfde0(0x102bc8c90,0,uVar5);
  uVar9 = uVar8;
  func_0x0001004575f0();
  func_0x000107c61574(uVar8);
  uVar8 = uVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c59b04(puVar1);
  func_0x000107c61170(uVar8);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc804c;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100288f10;
  puStack_88 = &UNK_1105ab468;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56e84(puVar1);
  func_0x000107c60bd0(ppuVar3);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112efcc98) + _DAT_112fbabe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c53548(puVar1);
  func_0x000107c615e8();
  FUN_102bbf9e8();
  func_0x000107c56c14(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_80 = FUN_102bc8054;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105ab490;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56e94(puVar1);
  func_0x000107c60bd0(ppuVar3);
  uVar8 = 0x102bc8c94;
  func_0x0001000bfde0(0x102bc8c94,0,uVar5);
  uVar9 = uVar8;
  func_0x0001004575f0();
  func_0x000107c61574(uVar8);
  uVar8 = uVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c52724(puVar1);
  func_0x000107c61170();
  func_0x000102bbfc88();
  func_0x000107c5696c(puVar1);
  func_0x000107c61170(uVar8);
  uVar8 = 0;
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_1);
    uVar8 = param_1;
  }
  func_0x000107c5452c(puVar1);
  func_0x000107c61170(uVar8);
  if (param_4 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_3);
  }
  else {
    param_3 = 0;
  }
  func_0x000107c54528(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c523f0(puVar1);
  if (param_7 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fadc(param_6,param_7);
  }
  func_0x000107c58f88(puVar1);
  func_0x000107c61170(param_6);
  func_0x0001000d224c(&puStack_a0);
  puVar13 = puStack_a0;
  uVar9 = *(undefined8 *)(puStack_a0 + _DAT_112ff0148);
  func_0x000107c61174(uVar9);
  func_0x000107c61170(puVar13);
  uVar8 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c5a1c4(puVar1);
  func_0x000107c61170(uVar8);
  func_0x0001000d224c(&puStack_a0);
  puVar13 = puStack_a0;
  uVar9 = *(undefined8 *)(puStack_a0 + _DAT_112ff0158);
  func_0x000107c61174(uVar9);
  func_0x000107c61170(puVar13);
  uVar8 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c5a1cc(puVar1);
  func_0x000107c61170(uVar8);
  func_0x0001000d224c(&puStack_a0);
  puVar13 = puStack_a0;
  uVar9 = *(undefined8 *)(puStack_a0 + _DAT_112ff0150);
  func_0x000107c61174(uVar9);
  func_0x000107c61170(puVar13);
  uVar8 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c5a1c8(puVar1);
  func_0x000107c61170(uVar8);
  puVar13 = &UNK_1105ab180;
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc8084;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105ab4b8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56f48(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000d224c(&puStack_a0);
  puVar2 = puStack_a0;
  uVar9 = *(undefined8 *)(puStack_a0 + _DAT_112ff00e8);
  func_0x000107c61174(uVar9);
  func_0x000107c61170(puVar2);
  uVar8 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c56d68(puVar1);
  func_0x000107c61170(uVar8);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc80b4;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bc0140;
  puStack_88 = &UNK_1105ab4e0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c74(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc80bc;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bc0194;
  puStack_88 = &UNK_1105ab508;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c70(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc80c4;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a70bf8;
  puStack_88 = &UNK_1105ab530;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56e78(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc80f4;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f70bd8;
  puStack_88 = &UNK_1105ab558;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c58(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc8124;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102a70bf8;
  puStack_88 = &UNK_1105ab580;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56cd0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc8154;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bc0208;
  puStack_88 = &UNK_1105ab5a8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56e98(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc815c;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105ab5d0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56c38(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc818c;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x102bc8c9c;
  puStack_88 = &UNK_1105ab5f8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56c34(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar2 = &UNK_1105ab630;
  func_0x000107c613fc(&UNK_1105ab630,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar4;
  puVar2[0x18] = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0x1c;
  pcStack_80 = (code *)0x102bc8a08;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100f70bd8;
  puStack_88 = &UNK_1105ab648;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56f6c(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc81bc;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x102bc8ca0;
  puStack_88 = &UNK_1105ab670;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_78);
  func_0x000107c56f68(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc81ec;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105ab698;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56e7c(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = FUN_102bc821c;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bc0284;
  puStack_88 = &UNK_1105ab6c0;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56d00(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar13;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_80 = (code *)0x102bc8224;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bc0300;
  puStack_88 = &UNK_1105ab6e8;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56dfc(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_80 = (code *)0x102bc822c;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102bc0300;
  puStack_88 = &UNK_1105ab710;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c56df8(puVar1);
  func_0x000107c60bd0();
  lVar12 = *(long *)(unaff_x20 + _DAT_112efcd70);
  if (lVar12 == 0) {
LAB_102bbf630:
    puVar13 = *(undefined **)(param_8 + _DAT_11307abc8);
    func_0x00010404c77c();
    if (*(long *)(puVar13 + 0x10) == 0) {
      uStack_98 = 0;
      puStack_a0 = (undefined *)0x0;
      puStack_88 = (undefined *)0x0;
      pcStack_90 = (code *)0x0;
    }
    else {
      puVar2 = *ppuVar3;
      puVar14 = ppuVar3[1];
      func_0x000107c61434(puVar14);
      func_0x000107c61434(puVar13);
      puVar4 = puVar14;
      func_0x000100029284(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c6142c(puVar13);
        uStack_98 = 0;
        puStack_a0 = (undefined *)0x0;
        puStack_88 = (undefined *)0x0;
        pcStack_90 = (code *)0x0;
      }
      else {
        func_0x0001000bb420(*(long *)(puVar13 + 0x38) + (long)puVar2 * 0x20,&puStack_a0);
        func_0x000107c6142c(puVar14);
        puVar14 = puVar13;
      }
      func_0x000107c6142c(puVar14);
      if (puStack_88 != (undefined *)0x0) {
        uVar8 = 0x112ea3568;
        func_0x0001000285a8(0x112ea3568,&UNK_10dab5ad8);
        plVar11 = &lStack_a8;
        func_0x000107c6147c(plVar11,&puStack_a0,PTR___sypN_11034f1a8 + 8,uVar8,6);
        if (((ulong)plVar11 & 1) == 0) {
          return puVar1;
        }
        lVar10 = lStack_a8;
        func_0x000107c5cb28(lStack_a8);
        goto LAB_102bbf708;
      }
    }
    func_0x000102bc85b8(&puStack_a0,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar13 = PTR_PTR_1126ae820;
    func_0x000107c61168(PTR_PTR_1126ae820);
    lVar10 = lVar12;
    func_0x000107c6148c(lVar12,puVar13);
    ppuVar3 = (undefined **)0x0;
    if (lVar10 == 0) goto LAB_102bbf630;
    func_0x000107c61174(lVar12);
    func_0x000107c5cb28(lVar10);
    lStack_a8 = lVar12;
LAB_102bbf708:
    func_0x000107c61180();
    func_0x000107c5a62c(puVar1);
    func_0x000107c61170(lStack_a8);
    func_0x000107c61170(lVar10);
  }
  return puVar1;
}



/* Entry: 102bbf770; end: 102bbf883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bbf770(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  ulong uStack_40;
  uint uStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar3 = uStack_40;
  func_0x000107c614f0();
  uVar4 = uStack_38;
  FUN_102bb7300();
  func_0x000107c615e8(uStack_40);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = param_1;
  func_0x000107c44abc();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar3);
    if ((uVar2 & 1) != 0) goto LAB_102bbf800;
  }
  uVar3 = param_1;
  func_0x000107c40e0c();
  if ((int)uVar3 != 4) {
    return;
  }
LAB_102bbf800:
  if (*(long *)(unaff_x20 + _DAT_112efcd68) != 0) {
    func_0x000107c5b9a4();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = param_1;
      func_0x000107c49804();
      func_0x000107c61170(param_1);
      uVar3 = (ulong)((int)uVar3 - 4U < 0xfffffffd);
    }
    func_0x0001041e0050();
    if ((uVar4 & 0xff) != 1) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_112efcd10);
      *puVar1 = uVar3;
      *(char *)(puVar1 + 1) = (char)uVar4;
    }
  }
  return;
}



/* Entry: 102bbf884; end: 102bbf8d7;  */

void FUN_102bbf884(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_4 + 0x20);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bbf8d8; end: 102bbf963;  */

void FUN_102bbf8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_9 + 0x20);
  uVar2 = *(undefined8 *)(param_9 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bbf964; end: 102bbf9af;  */

void FUN_102bbf964(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102bbf9b0; end: 102bbf9e7;  */

void FUN_102bbf9b0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar1;
  return;
}



/* Entry: 102bbf9e8; end: 102bc013f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bbf9e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar2 = PTR_PTR_1126ac0a0;
  func_0x000107c610f8(PTR_PTR_1126ac0a0);
  func_0x000107c453e4();
  puVar6 = &UNK_1105ab180;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102bc880c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105ac070;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56ed8(puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_60 = (code *)0x102bc883c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105ac098;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56d10(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_60 = (code *)0x102bc886c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f70bd8;
  puStack_68 = &UNK_1105ac0c0;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56ce0(puVar2);
  func_0x000107c60bd0(ppuVar7);
  lVar10 = *(long *)(unaff_x20 + _DAT_112efcc90);
  if (lVar10 != 0) {
    uVar8 = 0;
    FUN_102bb9e7c(0);
    func_0x000107c610f8();
    func_0x000107c615f0(lVar10);
    func_0x000107c4842c(uVar8);
    func_0x000107c561c0();
    FUN_102bb7a64(0);
    func_0x000107c614e8();
    func_0x000107c537e0(uVar8);
    func_0x000107c569fc(puVar2);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar8);
  }
  uVar9 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = 0x102bc8c98;
  func_0x0001000bfde0(0x102bc8c98,0,uVar9);
  uVar9 = uVar8;
  func_0x0001004575f0();
  func_0x000107c61574(uVar8);
  uVar8 = uVar9;
  func_0x000107c5cb24(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c571e0(puVar2);
  func_0x000107c61170(uVar8);
  return puVar2;
}



/* Entry: 102bc0140; end: 102bc0193;  */

void FUN_102bc0140(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bc0194; end: 102bc0207;  */

void FUN_102bc0194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_7 + 0x20);
  uVar2 = *(undefined8 *)(param_7 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bc0208; end: 102bc0283;  */

void FUN_102bc0208(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = 0;
  func_0x000102bc89c0(0,0x112efcdd8,&PTR_PTR_1126ac088);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102bc0284; end: 102bc02ff;  */

void FUN_102bc0284(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_4 + 0x20);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  uVar3 = param_5;
  func_0x000107c5faec(param_5);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_5,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102bc0300; end: 102bc0477;  */

void FUN_102bc0300(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102bc0478; end: 102bc0683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc0478(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 *puVar9;
  
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efcca8);
  func_0x000103b81358();
  uVar1 = *param_1;
  uVar7 = param_1[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar1,uVar7);
  func_0x000107c6142c(uVar7);
  puVar9 = *(undefined8 **)(unaff_x20 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  puVar3 = puVar9;
  func_0x000103bb63a0();
  uVar7 = puVar3[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar3;
  *(undefined8 *)(lVar2 + 0x28) = uVar7;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar7);
  func_0x000107c490d4();
  puVar5 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 **)(lVar2 + 0x48) = puVar5;
  *(undefined **)(lVar2 + 0x30) = puVar4;
  puVar3 = puVar5;
  func_0x000103b81558();
  uVar7 = puVar3[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar3;
  *(undefined8 *)(lVar2 + 0x58) = uVar7;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar7);
  func_0x000107c46ed0();
  *(undefined8 **)(lVar2 + 0x78) = puVar5;
  *(undefined **)(lVar2 + 0x60) = puVar4;
  lVar6 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar7 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar7);
  lVar2 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc0684; end: 102bc06cb;  */

void FUN_102bc0684(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bc06cc; end: 102bc07eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc06cc(undefined8 param_1,undefined8 param_2,byte param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112efccd8);
    puVar1 = &UNK_1105abf90;
    func_0x000107c613fc(&UNK_1105abf90,0x29,7);
    *(long *)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    puVar1[0x28] = param_3 & 1;
    pcStack_68 = FUN_102bc87b0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105abfa8;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc07ec; end: 102bc09fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc07ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 *puVar9;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112efccb8) + _DAT_112efce10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efcca8);
  puVar1 = param_3;
  func_0x000103b81420();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar9 = *(undefined8 **)(unaff_x20 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  func_0x000107c61174();
  puVar1 = puVar9;
  func_0x000103b815c8();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_1);
  puVar5 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 **)(lVar3 + 0x48) = puVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  puVar6 = puVar5;
  func_0x000103b81600();
  puVar1 = (undefined8 *)puVar6[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar6;
  *(undefined8 **)(lVar3 + 0x58) = puVar1;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_2);
  *(undefined8 **)(lVar3 + 0x78) = puVar5;
  *(undefined8 **)(lVar3 + 0x60) = puVar1;
  func_0x000103b81638();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x80) = *puVar1;
  *(undefined8 *)(lVar3 + 0x88) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fca0();
  *(undefined8 **)(lVar3 + 0xa8) = puVar5;
  *(undefined8 **)(lVar3 + 0x90) = param_3;
  lVar7 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar4 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),3,uVar4);
  lVar3 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc09fc; end: 102bc0a5f;  */

void FUN_102bc09fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_4 + 0x20);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bc0a60; end: 102bc0b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc0a60(long param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1 + _DAT_112efcc88;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_2 != 1) && (param_2 != 0)) {
      func_0x000102bb70d0(0);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc0b04);
      (*pcVar3)();
    }
    FUN_102bb7bbc();
    lVar2 = _DAT_112efcb78;
    *(char *)(lVar4 + _DAT_112efcb78) = (char)param_2;
    FUN_102bb7b08();
    uVar1 = *(undefined1 *)(lVar4 + lVar2);
    func_0x000107c615e8(lVar4);
    *(undefined1 *)(param_1 + _DAT_112efccf8) = uVar1;
  }
  return;
}



/* Entry: 102bc0b04; end: 102bc0d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc0b04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efcca8);
  func_0x000103b81320();
  uVar1 = *param_3;
  uVar5 = param_3[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  puVar8 = *(undefined8 **)(unaff_x20 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  puVar4 = puVar8;
  func_0x000103b82400();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar5);
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar2 + 0x48) = puVar4;
  *(undefined **)(lVar2 + 0x30) = puVar3;
  func_0x000103b81bc8();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar4;
  *(undefined8 *)(lVar2 + 0x58) = uVar5;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar5);
  func_0x000107c46ed0();
  uVar5 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x78) = uVar5;
  *(undefined **)(lVar2 + 0x60) = puVar3;
  lVar6 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar5);
  lVar2 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc0d2c; end: 102bc0d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc0d2c(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c4bf50(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 102bc0d88; end: 102bc0dc3;  */

void FUN_102bc0d88(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102bc0dc4; end: 102bc0ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc0dc4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112efccd8);
    puVar1 = &UNK_1105abe50;
    func_0x000107c613fc(&UNK_1105abe50,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    pcStack_68 = FUN_102bc8760;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105abe68;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc0ed4; end: 102bc1057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc0ed4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)((long)param_2 + _DAT_112efcca8);
  puVar1 = param_2;
  func_0x000103b81458();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar8 = *(undefined8 **)((long)param_2 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  func_0x000107c61174();
  puVar1 = puVar8;
  func_0x000103b81670();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_1);
  uVar5 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x48) = uVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  lVar6 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000102bc85b8((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar3 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc1058; end: 102bc1173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + _DAT_112efccd8);
    puVar1 = &UNK_1105abe00;
    func_0x000107c613fc(&UNK_1105abe00,0x28,7);
    *(long *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    pcStack_68 = FUN_102bc8738;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105abe18;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_5);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc1174; end: 102bc132f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1174(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efcca8);
  puVar2 = param_1;
  func_0x000103b82a68();
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  puVar8 = *(undefined8 **)(unaff_x20 + _DAT_112efcd00);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000107c61174();
  puVar2 = puVar8;
  func_0x000103b82aa4();
  uVar1 = puVar2[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 **)(lVar5 + 0x20) = param_1;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  uVar6 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  *(long *)(lVar4 + 0x30) = lVar5;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(param_2);
  lVar5 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000102bc85b8((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar4 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102bc1330; end: 102bc144b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1330(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_112efccd8);
    puVar1 = &UNK_1105abdb0;
    func_0x000107c613fc(&UNK_1105abdb0,0x28,7);
    *(long *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    pcStack_68 = FUN_102bc8700;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105abdc8;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_3);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc144c; end: 102bc1693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc144c(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar6 = _DAT_112efcd30;
  func_0x000107c61428(param_1 + _DAT_112efcd30,auStack_78,0,0);
  uVar10 = *(ulong *)(param_1 + lVar6);
  uVar3 = param_2;
  func_0x000100077018(param_2,param_3,uVar10);
  if ((uVar3 & 1) == 0) {
    func_0x000107c61428(param_1 + lVar6,auStack_90,0x21,0);
    func_0x000107c61434(param_3);
    uVar3 = uVar10;
    func_0x000107c61558();
    *(ulong *)(param_1 + lVar6) = uVar10;
    uVar8 = uVar10;
    if ((uVar3 & 1) == 0) {
      uVar8 = 0;
      func_0x0001000d182c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(param_1 + lVar6) = uVar8;
    }
    uVar3 = *(ulong *)(uVar8 + 0x10);
    uVar10 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar3) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x0001000d182c(uVar10,uVar3 + 1,1,uVar8);
    }
    *(ulong *)(uVar10 + 0x10) = uVar3 + 1;
    lVar7 = uVar10 + uVar3 * 0x10;
    *(ulong *)(lVar7 + 0x20) = param_2;
    *(undefined8 *)(lVar7 + 0x28) = param_3;
    *(ulong *)(param_1 + lVar6) = uVar10;
    puVar4 = auStack_90;
    func_0x000107c614a8();
    uVar11 = *(undefined8 *)(param_1 + _DAT_112efcca8);
    func_0x000103b82b3c();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    puVar9 = *(undefined8 **)(param_1 + _DAT_112efcd00);
    lVar6 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    func_0x000107c61174();
    puVar4 = puVar9;
    func_0x000103b82bb0();
    uVar1 = puVar4[1];
    *(undefined8 *)(lVar6 + 0x20) = *puVar4;
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar6 + 0x28) = uVar1;
    *(ulong *)(lVar6 + 0x30) = param_2;
    *(undefined8 *)(lVar6 + 0x38) = param_3;
    func_0x000107c61434(param_3);
    func_0x000107c61434(uVar1);
    lVar7 = lVar6;
    func_0x000100214a84(lVar6);
    func_0x000107c61588(lVar6);
    func_0x000102bc85b8((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    lVar6 = lVar7;
    func_0x000107c5f9dc(lVar7,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar7);
    func_0x000107c4df80(uVar11);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102bc1694; end: 102bc17b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112efccd8);
    puVar1 = &UNK_1105abd60;
    func_0x000107c613fc(&UNK_1105abd60,0x30,7);
    *(long *)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    pcStack_78 = FUN_102bc86d4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105abd78;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc17b8; end: 102bc1b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc17b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined1 auStack_188 [264];
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efcca8);
  func_0x000103b82204();
  uVar3 = *param_4;
  uVar9 = param_4[1];
  func_0x000107c61434(uVar9);
  func_0x000107c5fadc(uVar3,uVar9);
  func_0x000107c6142c(uVar9);
  lVar2 = _DAT_112efcd00;
  puVar11 = *(undefined8 **)(unaff_x20 + _DAT_112efcd00);
  puVar4 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar5 = puVar4;
  func_0x000107c61534();
  puVar5[3] = 6;
  puVar5[2] = 3;
  func_0x000107c61174();
  puVar7 = puVar11;
  func_0x000103b82400();
  uVar9 = puVar7[1];
  puVar5[4] = *puVar7;
  puVar5[5] = uVar9;
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar9);
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar7 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar5[9] = puVar7;
  puVar5[6] = puVar6;
  func_0x000103b81bc8();
  uVar9 = puVar7[1];
  puVar5[10] = *puVar7;
  puVar5[0xb] = uVar9;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar9);
  func_0x000107c46ed0();
  puVar8 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5[0xf] = puVar8;
  puVar5[0xc] = puVar6;
  puVar7 = puVar8;
  func_0x000103b81670();
  uVar9 = puVar7[1];
  puVar5[0x10] = *puVar7;
  puVar5[0x11] = uVar9;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_3);
  puVar5[0x15] = puVar8;
  puVar5[0x12] = uVar9;
  puVar7 = puVar5;
  func_0x000100214a84();
  func_0x000107c61588(puVar5);
  uVar9 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar5 + 4,3,uVar9);
  puVar1 = PTR___sSSSHsWP_11034da90;
  puVar6 = PTR___sSSN_11034da80;
  puVar5 = puVar7;
  func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar7);
  func_0x000107c4df80(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar11);
  func_0x000107c61170();
  func_0x000103b82b74();
  uVar9 = *puVar5;
  uVar3 = puVar5[1];
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(uVar9,uVar3);
  func_0x000107c6142c(uVar3);
  puVar7 = *(undefined8 **)(unaff_x20 + lVar2);
  func_0x000107c61534(puVar4,auStack_188);
  puVar4[3] = 2;
  puVar4[2] = 1;
  func_0x000107c61174();
  puVar5 = puVar7;
  func_0x000103b82bf0();
  uVar3 = puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = uVar3;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_3);
  puVar4[9] = puVar8;
  puVar4[6] = uVar3;
  puVar5 = puVar4;
  func_0x000100214a84(puVar4);
  func_0x000107c61588(puVar4);
  func_0x000102bc85b8(puVar4 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar4 = puVar5;
  func_0x000107c5f9dc(puVar5,puVar6,PTR___sypN_11034f1a8 + 8,puVar1);
  func_0x000107c6142c(puVar5);
  func_0x000107c4df80(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 102bc1b18; end: 102bc1c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1b18(byte param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac1e8;
    func_0x000107c613fc(&UNK_1105ac1e8,0x19,7);
    *(long *)(puVar1 + 0x10) = param_2;
    puVar1[0x18] = param_1 & 1;
    pcStack_58 = FUN_102bc88e8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ac200;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc1c24; end: 102bc1d3f;  */

/* WARNING: Possible PIC construction at 0x000102bc1c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc1d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc1c70) */
/* WARNING: Removing unreachable block (ram,0x000102bc1c90) */
/* WARNING: Removing unreachable block (ram,0x000102bc1d1c) */

void FUN_102bc1c24(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc1d40);
  (*pcVar1)();
}



/* Entry: 102bc1d40; end: 102bc1e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1d40(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac468;
    func_0x000107c613fc(&UNK_1105ac468,0x31,7);
    puVar1[0x10] = param_3 & 1;
    *(long *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = param_2;
    puVar1[0x30] = param_5;
    uStack_68 = 0x102bc8970;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105ac480;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc1e68; end: 102bc2107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc1e68(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar1 = PTR___sypN_11034f1a8;
  if (((ulong)param_3 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_4 + _DAT_112efcca8);
    func_0x000103bb6d88();
    uVar6 = *param_3;
    uVar2 = param_3[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c6142c(uVar2);
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
    param_3 = puVar4;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar4);
    func_0x000107c4df80(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c61170();
  }
  uVar8 = *(undefined8 *)(param_4 + _DAT_112efcca8);
  func_0x000103b82204();
  uVar2 = *param_3;
  uVar6 = param_3[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar2,uVar6);
  func_0x000107c6142c(uVar6);
  puVar9 = *(undefined8 **)(param_4 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  func_0x000107c61174();
  puVar4 = puVar9;
  func_0x000103b82400();
  uVar6 = puVar4[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  func_0x000107c61434();
  FUN_102bc2108(param_1,param_2);
  puVar4 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar3 + 0x48) = puVar4;
  *(undefined8 *)(lVar3 + 0x30) = param_5;
  func_0x000103b81bc8();
  uVar6 = puVar4[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar4;
  *(undefined8 *)(lVar3 + 0x58) = uVar6;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c46ed0();
  uVar6 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x78) = uVar6;
  *(undefined **)(lVar3 + 0x60) = puVar5;
  lVar7 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar6);
  lVar3 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc2108; end: 102bc2183;  */

void FUN_102bc2108(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (((uint)param_3 & 0xff) == 5 || (param_3 & 0xff) == 0) {
    FUN_102bb9f90();
    func_0x000107c40724(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5dc50(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102bc2184; end: 102bc2393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc2184(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)((long)param_3 + _DAT_112efcca8);
  puVar4 = param_3;
  func_0x000103b82204();
  uVar1 = *puVar4;
  uVar3 = puVar4[1];
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  puVar8 = *(undefined8 **)((long)param_3 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  puVar4 = puVar8;
  func_0x000103b82400();
  uVar3 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  func_0x000107c61434();
  uVar3 = 5;
  FUN_102bc2108(param_1,param_2);
  puVar4 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar2 + 0x48) = puVar4;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  func_0x000103b81bc8();
  uVar3 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar4;
  *(undefined8 *)(lVar2 + 0x58) = uVar3;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000107c46ed0();
  uVar3 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x78) = uVar3;
  *(undefined **)(lVar2 + 0x60) = puVar5;
  lVar6 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar3 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar3);
  lVar2 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc2394; end: 102bc259b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc2394(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)((long)param_3 + _DAT_112efcca8);
  puVar4 = param_3;
  func_0x000103b82204();
  uVar1 = *puVar4;
  uVar5 = puVar4[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  puVar8 = *(undefined8 **)((long)param_3 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  puVar4 = puVar8;
  func_0x000103b82400();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  func_0x000107c61434();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar2 + 0x48) = puVar4;
  *(undefined **)(lVar2 + 0x30) = puVar3;
  func_0x000103b81bc8();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar4;
  *(undefined8 *)(lVar2 + 0x58) = uVar5;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar5);
  func_0x000107c46ed0();
  uVar5 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x78) = uVar5;
  *(undefined **)(lVar2 + 0x60) = puVar3;
  lVar6 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar5);
  lVar2 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc259c; end: 102bc2723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc259c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar1 = param_1;
  func_0x000103bb463c();
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  puVar8 = *(undefined8 **)((long)param_1 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  func_0x000107c61174();
  puVar1 = puVar8;
  func_0x000103bb4cb8();
  uVar5 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  uVar4 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61434(uVar5);
  uVar5 = 1;
  func_0x000107c6010c();
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  lVar6 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000102bc85b8((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar3 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc2724; end: 102bc2837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc2724(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac2d8;
    func_0x000107c613fc(&UNK_1105ac2d8,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    uStack_68 = 0x102bc8920;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105ac2f0;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc2838; end: 102bc2de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc2838(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_118 [168];
  
  uVar8 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar3 = param_1;
  func_0x000103bb53d8();
  uVar4 = *puVar3;
  uVar7 = puVar3[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  lVar2 = _DAT_112efcd00;
  puVar10 = *(undefined8 **)((long)param_1 + _DAT_112efcd00);
  puVar3 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar5 = puVar3;
  func_0x000107c61534();
  uVar11 = 1;
  puVar5[3] = 2;
  puVar5[2] = 1;
  func_0x000107c61174();
  puVar9 = puVar10;
  func_0x000103b937c0();
  uVar7 = puVar9[1];
  puVar5[4] = *puVar9;
  puVar5[5] = uVar7;
  func_0x000107c61434();
  func_0x000107c5e9e0(param_2);
  uVar7 = uVar11;
  func_0x000107c5e9f0(param_2);
  uVar6 = 0;
  FUN_102bc2108(uVar11,uVar7);
  uVar7 = 0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar5[9] = uVar7;
  puVar5[6] = uVar6;
  puVar9 = puVar5;
  func_0x000100214a84();
  func_0x000107c61588(puVar5);
  func_0x000102bc85b8(puVar5 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar1 = PTR___sSSN_11034da80;
  puVar5 = puVar9;
  func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar9);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61170();
  func_0x000103bb60a8();
  uVar4 = *puVar5;
  uVar7 = puVar5[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  puVar9 = *(undefined8 **)((long)param_1 + lVar2);
  func_0x000107c61534(puVar3,auStack_118);
  puVar3[3] = 2;
  puVar3[2] = 1;
  func_0x000107c61174();
  puVar5 = puVar9;
  func_0x000103bb630c();
  uVar7 = puVar5[1];
  puVar3[4] = *puVar5;
  puVar3[5] = uVar7;
  func_0x000107c61434();
  uVar7 = 0x11;
  func_0x000107c601c8();
  uVar6 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3[9] = uVar6;
  puVar3[6] = uVar7;
  puVar5 = puVar3;
  func_0x000100214a84(puVar3);
  func_0x000107c61588(puVar3);
  func_0x000102bc85b8(puVar3 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar3 = puVar5;
  func_0x000107c5f9dc(puVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar5);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102bc2de8; end: 102bc3003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc2de8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  uVar10 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar4 = param_1;
  func_0x000103bb543c();
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  lVar7 = _DAT_112efcd00;
  uVar6 = *(undefined8 *)((long)param_1 + _DAT_112efcd00);
  func_0x000107c61174(uVar6);
  puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  puVar11 = puVar4;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar4);
  func_0x000107c4df80(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170();
  func_0x000103bb60a8();
  uVar5 = *puVar11;
  uVar6 = puVar11[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  puVar11 = *(undefined8 **)((long)param_1 + lVar7);
  lVar7 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  func_0x000107c61174();
  puVar4 = puVar11;
  func_0x000103bb630c();
  uVar6 = puVar4[1];
  *(undefined8 *)(lVar7 + 0x20) = *puVar4;
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  func_0x000107c61434();
  uVar6 = 0x11;
  func_0x000107c601c8();
  uVar8 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar7 + 0x48) = uVar8;
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  lVar9 = lVar7;
  func_0x000100214a84(lVar7);
  func_0x000107c61588(lVar7);
  func_0x000102bc85b8((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar7 = lVar9;
  func_0x000107c5f9dc(lVar9,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(lVar9);
  func_0x000107c4df80(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 102bc3004; end: 102bc3127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc3004(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac508;
    func_0x000107c613fc(&UNK_1105ac508,0x30,7);
    *(long *)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    uStack_78 = 0x102bc898c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105ac520;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc3128; end: 102bc339f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc3128(undefined8 param_1,undefined8 param_2,double param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  uVar8 = *(undefined8 *)((long)param_4 + _DAT_112efcca8);
  puVar5 = param_4;
  func_0x000103b8223c();
  uVar2 = *puVar5;
  uVar4 = puVar5[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar10 = *(undefined8 **)((long)param_4 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  func_0x000107c61174();
  puVar5 = puVar10;
  func_0x000103b82400();
  uVar4 = puVar5[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar5;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c61434();
  uVar4 = 0;
  FUN_102bc2108(param_1,param_2);
  puVar5 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar3 + 0x48) = puVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  func_0x000103b823bc();
  uVar4 = puVar5[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar5;
  *(undefined8 *)(lVar3 + 0x58) = uVar4;
  if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc3398);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_3) {
    if (param_3 < 9.223372036854776e+18) {
      lVar9 = (long)param_3;
      func_0x000107c61434();
      func_0x000107c5fe40();
      puVar6 = (undefined8 *)0x0;
      func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      *(undefined8 **)(lVar3 + 0x78) = puVar6;
      *(long *)(lVar3 + 0x60) = lVar9;
      puVar5 = puVar6;
      func_0x000103b81bc8();
      uVar4 = puVar5[1];
      *(undefined8 *)(lVar3 + 0x80) = *puVar5;
      *(undefined8 *)(lVar3 + 0x88) = uVar4;
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(uVar4);
      func_0x000107c46ed0();
      *(undefined8 **)(lVar3 + 0xa8) = puVar6;
      *(undefined **)(lVar3 + 0x90) = puVar7;
      lVar9 = lVar3;
      func_0x000100214a84(lVar3);
      func_0x000107c61588(lVar3);
      uVar4 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar3 + 0x20),3,uVar4);
      lVar3 = lVar9;
      func_0x000107c5f9dc(lVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar9);
      func_0x000107c4df80(uVar8);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc33a0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc339c);
  (*pcVar1)();
}



/* Entry: 102bc33a0; end: 102bc363f;  */

/* WARNING: Possible PIC construction at 0x000102bc33d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc3414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc3538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc3548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc360c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc361c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc3610) */
/* WARNING: Removing unreachable block (ram,0x000102bc354c) */
/* WARNING: Removing unreachable block (ram,0x000102bc353c) */
/* WARNING: Removing unreachable block (ram,0x000102bc3418) */
/* WARNING: Removing unreachable block (ram,0x000102bc341c) */
/* WARNING: Removing unreachable block (ram,0x000102bc33dc) */
/* WARNING: Removing unreachable block (ram,0x000102bc3554) */
/* WARNING: Removing unreachable block (ram,0x000102bc33e0) */
/* WARNING: Removing unreachable block (ram,0x000102bc33f0) */
/* WARNING: Removing unreachable block (ram,0x000102bc3570) */
/* WARNING: Removing unreachable block (ram,0x000102bc3404) */
/* WARNING: Removing unreachable block (ram,0x000102bc3620) */

void FUN_102bc33a0(undefined8 param_1)

{
  FUN_102bb9f90();
  func_0x000107c5def8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc3640; end: 102bc36a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc3640(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  (*param_2)();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c4df78(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102bc36a4; end: 102bc37b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc36a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_112efccd8);
    func_0x000107c613fc(param_4,0x28,7);
    *(long *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x18) = param_1;
    *(undefined8 *)(param_4 + 0x20) = param_2;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar2 = &puStack_98;
    uStack_80 = param_6;
    uStack_78 = param_5;
    lStack_70 = param_4;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_3);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc37b4; end: 102bc39a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc37b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  uVar8 = *(undefined8 *)((long)param_3 + _DAT_112efcca8);
  puVar4 = param_3;
  func_0x000103b82204();
  uVar1 = *puVar4;
  uVar5 = puVar4[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  puVar9 = *(undefined8 **)((long)param_3 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  puVar4 = puVar9;
  func_0x000103b82400();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  func_0x000107c61434();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar2 + 0x48) = puVar4;
  *(undefined **)(lVar2 + 0x30) = puVar3;
  func_0x000103b81bc8();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar4;
  *(undefined8 *)(lVar2 + 0x58) = uVar5;
  func_0x000107c61434();
  uVar5 = 3;
  func_0x000107c5fe40();
  uVar6 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x78) = uVar6;
  *(undefined8 *)(lVar2 + 0x60) = uVar5;
  lVar7 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar5);
  lVar2 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc39a4; end: 102bc3abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc39a4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if ((param_3 & 1) != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      uVar3 = *(undefined8 *)(param_4 + _DAT_112efccd8);
      puVar1 = &UNK_1105ac418;
      func_0x000107c613fc(&UNK_1105ac418,0x28,7);
      *(long *)(puVar1 + 0x10) = param_4;
      *(undefined8 *)(puVar1 + 0x18) = param_1;
      *(undefined8 *)(puVar1 + 0x20) = param_2;
      uStack_68 = 0x102bc8964;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1105ac430;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_60;
      func_0x000107c615f0(uVar3);
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(uVar3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(param_4);
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 102bc3abc; end: 102bc3ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc3abc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_3 + _DAT_112efcca8);
  puVar2 = puVar1;
  func_0x000103b82204();
  uVar3 = *puVar2;
  uVar7 = puVar2[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  puVar10 = *(undefined8 **)(param_3 + _DAT_112efcd00);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  func_0x000107c61174();
  puVar2 = puVar10;
  func_0x000103b82400();
  uVar7 = puVar2[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar7;
  uVar5 = 0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  *(undefined8 **)(lVar4 + 0x30) = puVar1;
  func_0x000107c61434(uVar7);
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000103b81bc8();
  uVar7 = puVar2[1];
  *(undefined8 *)(lVar4 + 0x50) = *puVar2;
  *(undefined8 *)(lVar4 + 0x58) = uVar7;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar7);
  func_0x000107c46ed0();
  uVar7 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar4 + 0x78) = uVar7;
  *(undefined **)(lVar4 + 0x60) = puVar6;
  lVar8 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  uVar7 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar7);
  lVar4 = lVar8;
  func_0x000107c5f9dc(lVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar8);
  func_0x000107c4df80(uVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102bc3ce4; end: 102bc3e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc3ce4(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac3c8;
    func_0x000107c613fc(&UNK_1105ac3c8,0x38,7);
    *(long *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    puVar1[0x28] = param_4;
    *(undefined8 *)(puVar1 + 0x30) = param_5;
    uStack_68 = 0x102bc8950;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105ac3e0;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc3e08; end: 102bc400f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc3e08(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  FUN_102bc2108();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112efcca8);
  puVar1 = param_2;
  func_0x000103b82204();
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar2,uVar6);
  func_0x000107c6142c(uVar6);
  puVar9 = *(undefined8 **)(param_1 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  func_0x000107c61174();
  puVar1 = puVar9;
  func_0x000103b82400();
  uVar6 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  uVar4 = 0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  *(undefined8 **)(lVar3 + 0x30) = param_2;
  func_0x000107c61434(uVar6);
  func_0x000107c61174();
  puVar1 = param_2;
  func_0x000103b81bc8();
  uVar6 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar1;
  *(undefined8 *)(lVar3 + 0x58) = uVar6;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c46ed0();
  uVar6 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x78) = uVar6;
  *(undefined **)(lVar3 + 0x60) = puVar5;
  lVar7 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar6);
  lVar3 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc4010; end: 102bc4137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac378;
    func_0x000107c613fc(&UNK_1105ac378,0x38,7);
    *(long *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    *(undefined8 *)(puVar1 + 0x30) = param_4;
    uStack_78 = 0x102bc8940;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105ac390;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_5);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc4138; end: 102bc4347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  uVar8 = *(undefined8 *)((long)param_5 + _DAT_112efcca8);
  puVar1 = param_5;
  func_0x000103b822a0();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar9 = *(undefined8 **)((long)param_5 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 8;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  func_0x000107c61174();
  puVar1 = puVar9;
  func_0x000103b8240c();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_1);
  puVar5 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 **)(lVar3 + 0x48) = puVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  puVar6 = puVar5;
  func_0x000103b8244c();
  puVar1 = (undefined8 *)puVar6[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar6;
  *(undefined8 **)(lVar3 + 0x58) = puVar1;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_2);
  *(undefined8 **)(lVar3 + 0x78) = puVar5;
  *(undefined8 **)(lVar3 + 0x60) = puVar1;
  func_0x000103b824fc();
  puVar6 = (undefined8 *)puVar1[1];
  *(undefined8 *)(lVar3 + 0x80) = *puVar1;
  *(undefined8 **)(lVar3 + 0x88) = puVar6;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_3);
  *(undefined8 **)(lVar3 + 0xa8) = puVar5;
  *(undefined8 **)(lVar3 + 0x90) = puVar6;
  func_0x000103b82534();
  uVar4 = puVar6[1];
  *(undefined8 *)(lVar3 + 0xb0) = *puVar6;
  *(undefined8 *)(lVar3 + 0xb8) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_4);
  *(undefined8 **)(lVar3 + 0xd8) = puVar5;
  *(undefined8 *)(lVar3 + 0xc0) = uVar4;
  lVar7 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar4 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),4,uVar4);
  lVar3 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc4348; end: 102bc4497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_9 + 0x10,auStack_88,0,0);
  param_9 = param_9 + 0x10;
  func_0x000107c61618();
  if (param_9 != 0) {
    uVar3 = *(undefined8 *)(param_9 + _DAT_112efccd8);
    puVar1 = &UNK_1105ac328;
    func_0x000107c613fc(&UNK_1105ac328,0x58,7);
    *(long *)(puVar1 + 0x10) = param_9;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    *(undefined8 *)(puVar1 + 0x30) = param_4;
    *(undefined8 *)(puVar1 + 0x38) = param_5;
    *(undefined8 *)(puVar1 + 0x40) = param_6;
    *(undefined8 *)(puVar1 + 0x48) = param_7;
    *(undefined8 *)(puVar1 + 0x50) = param_8;
    uStack_98 = 0x102bc8928;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_1105ac340;
    ppuVar2 = &puStack_b8;
    puStack_90 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_90;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_9);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_9);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc4498; end: 102bc4747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  uVar8 = *(undefined8 *)((long)param_9 + _DAT_112efcca8);
  puVar1 = param_9;
  func_0x000103b822d8();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar9 = *(undefined8 **)((long)param_9 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 0x10;
  *(undefined8 *)(lVar3 + 0x10) = 8;
  func_0x000107c61174();
  puVar1 = puVar9;
  func_0x000103b8240c();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_1);
  puVar5 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 **)(lVar3 + 0x48) = puVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  puVar6 = puVar5;
  func_0x000103b8244c();
  puVar1 = (undefined8 *)puVar6[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar6;
  *(undefined8 **)(lVar3 + 0x58) = puVar1;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_2);
  *(undefined8 **)(lVar3 + 0x78) = puVar5;
  *(undefined8 **)(lVar3 + 0x60) = puVar1;
  func_0x000103b8248c();
  puVar6 = (undefined8 *)puVar1[1];
  *(undefined8 *)(lVar3 + 0x80) = *puVar1;
  *(undefined8 **)(lVar3 + 0x88) = puVar6;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_3);
  *(undefined8 **)(lVar3 + 0xa8) = puVar5;
  *(undefined8 **)(lVar3 + 0x90) = puVar6;
  func_0x000103b824c4();
  puVar1 = (undefined8 *)puVar6[1];
  *(undefined8 *)(lVar3 + 0xb0) = *puVar6;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_4);
  *(undefined8 **)(lVar3 + 0xd8) = puVar5;
  *(undefined8 **)(lVar3 + 0xc0) = puVar1;
  func_0x000103b824fc();
  puVar6 = (undefined8 *)puVar1[1];
  *(undefined8 *)(lVar3 + 0xe0) = *puVar1;
  *(undefined8 **)(lVar3 + 0xe8) = puVar6;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_5);
  *(undefined8 **)(lVar3 + 0x108) = puVar5;
  *(undefined8 **)(lVar3 + 0xf0) = puVar6;
  func_0x000103b82534();
  puVar1 = (undefined8 *)puVar6[1];
  *(undefined8 *)(lVar3 + 0x110) = *puVar6;
  *(undefined8 **)(lVar3 + 0x118) = puVar1;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_6);
  *(undefined8 **)(lVar3 + 0x138) = puVar5;
  *(undefined8 **)(lVar3 + 0x120) = puVar1;
  func_0x000103b8256c();
  puVar6 = (undefined8 *)puVar1[1];
  *(undefined8 *)(lVar3 + 0x140) = *puVar1;
  *(undefined8 **)(lVar3 + 0x148) = puVar6;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_7);
  *(undefined8 **)(lVar3 + 0x168) = puVar5;
  *(undefined8 **)(lVar3 + 0x150) = puVar6;
  func_0x000103b825a4();
  uVar4 = puVar6[1];
  *(undefined8 *)(lVar3 + 0x170) = *puVar6;
  *(undefined8 *)(lVar3 + 0x178) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(param_8);
  *(undefined8 **)(lVar3 + 0x198) = puVar5;
  *(undefined8 *)(lVar3 + 0x180) = uVar4;
  lVar7 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar4 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),8,uVar4);
  lVar3 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc4748; end: 102bc49b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4748(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_2 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar6 = param_2;
      }
      func_0x000107c60480();
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar6 != 0) {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102bc78c4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc49b8);
        (*pcVar1)();
      }
      uVar7 = 0;
      do {
        puVar8 = puStack_98;
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) <= (long)uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc499c);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_2 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar2 = uVar7;
          FUN_102bc743c(uVar7,param_2,&PTR_PTR_1126ac088,0x112efcdd8);
        }
        uStack_e8 = uVar2;
        FUN_102bc49b8(&puStack_e0,&uStack_e8);
        func_0x000107c61170(uVar2);
        uVar2 = *(ulong *)(puVar8 + 0x10);
        puStack_98 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          FUN_102bc78c4(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_98 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puStack_98 + uVar2 * 0x48 + 0x28) = uStack_d8;
        *(undefined **)(puStack_98 + uVar2 * 0x48 + 0x20) = puStack_e0;
        *(undefined8 *)(puStack_98 + uVar2 * 0x48 + 0x60) = uStack_a0;
        *(undefined **)(puStack_98 + uVar2 * 0x48 + 0x48) = puStack_b8;
        *(code **)(puStack_98 + uVar2 * 0x48 + 0x40) = pcStack_c0;
        *(undefined8 *)(puStack_98 + uVar2 * 0x48 + 0x58) = uStack_a8;
        *(undefined8 *)(puStack_98 + uVar2 * 0x48 + 0x50) = uStack_b0;
        *(undefined **)(puStack_98 + uVar2 * 0x48 + 0x38) = puStack_c8;
        *(undefined **)(puStack_98 + uVar2 * 0x48 + 0x30) = puStack_d0;
        puVar8 = puStack_98;
      } while (uVar6 != uVar7);
    }
    uVar5 = *(undefined8 *)(param_3 + _DAT_112efccd8);
    puVar3 = &UNK_1105ab978;
    func_0x000107c613fc(&UNK_1105ab978,0x29,7);
    *(long *)(puVar3 + 0x10) = param_3;
    *(undefined **)(puVar3 + 0x18) = puVar8;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    puVar3[0x28] = 0;
    pcStack_c0 = FUN_102bc82cc;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000f6b44;
    puStack_c8 = &UNK_1105ab990;
    ppuVar4 = &puStack_e0;
    puStack_b8 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar8 = puStack_b8;
    func_0x000107c615f0(uVar5);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102bc49b8; end: 102bc4c83;  */

void FUN_102bc49b8(long *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = *param_3;
  uVar9 = uVar7;
  func_0x000107c3f9f4();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar9;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar9);
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar9 = uVar4;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar9 == 0) {
    func_0x000107c6142c(uVar4);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100dd4260(0,uVar3,0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc4c84);
      (*pcVar2)();
    }
    uVar10 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar10;
        uVar3 = uVar4;
        FUN_102bc743c(uVar10,uVar4,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      uVar5 = uVar6;
      func_0x000107c49820();
      func_0x000107c61170(uVar6);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      uVar6 = uVar1 + 1;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        uVar3 = uVar6;
        func_0x000100dd4260(1 < *(ulong *)(puVar8 + 0x18),uVar6,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar6;
      *(ulong *)(puVar8 + uVar1 * 8 + 0x20) = uVar5;
    } while (uVar9 != uVar10);
    func_0x000107c6142c(uVar4);
  }
  uVar9 = uVar7;
  func_0x000107c51cac();
  func_0x000107c61180();
  lVar12 = 0;
  if (uVar9 == 0) {
    lVar13 = 0;
    lVar11 = param_2;
  }
  else {
    func_0x000107c4223c();
    lVar11 = param_2;
    func_0x000107c61170(uVar9);
    lVar13 = param_2;
  }
  uVar4 = uVar7;
  func_0x000107c4f7b0();
  func_0x000107c61180();
  lVar14 = lVar11;
  if (uVar4 != 0) {
    func_0x000107c4223c();
    lVar14 = lVar11;
    func_0x000107c61170(uVar4);
    lVar12 = lVar11;
  }
  uVar10 = uVar7;
  func_0x000107c4f7bc();
  func_0x000107c61180();
  if (uVar10 == 0) {
    lVar14 = 0;
  }
  else {
    func_0x000107c4223c();
    func_0x000107c61170(uVar10);
  }
  func_0x000107c4de24();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    uVar6 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
  }
  *param_1 = (long)puVar8;
  param_1[1] = lVar13;
  *(bool *)(param_1 + 2) = uVar9 == 0;
  param_1[3] = lVar12;
  *(bool *)(param_1 + 4) = uVar4 == 0;
  param_1[5] = lVar14;
  *(bool *)(param_1 + 6) = uVar10 == 0;
  param_1[7] = uVar6;
  param_1[8] = uVar3;
  return;
}



/* Entry: 102bc4c84; end: 102bc4e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4c84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar6 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar1 = param_1;
  func_0x000103b827e4();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar7 = *(undefined8 **)((long)param_1 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  func_0x000107c61174();
  puVar1 = puVar7;
  func_0x000103b82820();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  FUN_102bc71b0();
  func_0x000107c613fc();
  puVar1[3] = 3;
  puVar1[2] = 1;
  func_0x0001042a8530(0);
  func_0x000107c61434(uVar4);
  func_0x000107c61434();
  func_0x0001042a7bf0();
  puVar1[4] = param_2;
  uVar4 = 0x112efcde0;
  func_0x0001000285a8(0x112efcde0,&UNK_10db2eaf0);
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  *(undefined8 **)(lVar3 + 0x30) = puVar1;
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000102bc85b8((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c4df80(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc4e64; end: 102bc4fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    uVar1 = 0;
    FUN_102bc2108(param_2,param_3);
    uVar4 = *(undefined8 *)(param_6 + _DAT_112efccd8);
    puVar2 = &UNK_1105ab7e8;
    func_0x000107c613fc(&UNK_1105ab7e8,0x38,7);
    *(long *)(puVar2 + 0x10) = param_6;
    *(undefined8 *)(puVar2 + 0x18) = uVar1;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    *(undefined8 *)(puVar2 + 0x28) = param_5;
    *(undefined8 *)(puVar2 + 0x30) = param_1;
    uStack_88 = 0x102bc825c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105ab800;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_80;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(param_6);
    func_0x000107c61174(uVar1);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102bc4fc8; end: 102bc5237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc4fc8(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  uVar9 = *(undefined8 *)((long)param_2 + _DAT_112efcca8);
  puVar2 = param_2;
  func_0x000103b82348();
  uVar3 = *puVar2;
  uVar7 = puVar2[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  puVar10 = *(undefined8 **)((long)param_2 + _DAT_112efcd00);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 6;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  func_0x000107c61174();
  puVar2 = puVar10;
  func_0x000103b82400();
  uVar7 = puVar2[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar7;
  uVar5 = 0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  *(undefined8 **)(lVar4 + 0x30) = param_3;
  func_0x000107c61434(uVar7);
  func_0x000107c61174();
  func_0x000103b82684();
  uVar7 = param_3[1];
  *(undefined8 *)(lVar4 + 0x50) = *param_3;
  *(undefined8 *)(lVar4 + 0x58) = uVar7;
  *(undefined **)(lVar4 + 0x78) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x60) = param_4;
  *(undefined8 **)(lVar4 + 0x68) = param_5;
  func_0x000107c61434();
  func_0x000107c61434();
  func_0x000103b826bc();
  uVar7 = param_5[1];
  *(undefined8 *)(lVar4 + 0x80) = *param_5;
  *(undefined8 *)(lVar4 + 0x88) = uVar7;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc5230);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(uVar7);
      func_0x000107c46ed0();
      uVar7 = 0;
      func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      *(undefined8 *)(lVar4 + 0xa8) = uVar7;
      *(undefined **)(lVar4 + 0x90) = puVar6;
      lVar8 = lVar4;
      func_0x000100214a84(lVar4);
      func_0x000107c61588(lVar4);
      uVar7 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar4 + 0x20),3,uVar7);
      lVar4 = lVar8;
      func_0x000107c5f9dc(lVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar8);
      func_0x000107c4df80(uVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc5238);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc5234);
  (*pcVar1)();
}



/* Entry: 102bc5238; end: 102bc534b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc5238(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112efccd8);
    puVar1 = &UNK_1105ab798;
    func_0x000107c613fc(&UNK_1105ab798,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    pcStack_68 = FUN_102bc8254;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105ab7b0;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc534c; end: 102bc54cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc534c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar2 = param_1;
  func_0x000103b82380();
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  puVar8 = *(undefined8 **)((long)param_1 + _DAT_112efcd00);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000107c61174();
  puVar2 = puVar8;
  func_0x000103b826f4();
  uVar1 = puVar2[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  uVar5 = 0x112da1fa0;
  func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  *(undefined8 *)(lVar4 + 0x30) = param_2;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(param_2);
  lVar6 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000102bc85b8((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102bc54cc; end: 102bc55cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc54cc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112efccd8);
    puVar1 = &UNK_1105ab748;
    func_0x000107c613fc(&UNK_1105ab748,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    pcStack_58 = FUN_102bc8234;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ab760;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc55cc; end: 102bc5b03;  */

/* WARNING: Possible PIC construction at 0x000102bc567c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc5698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc56e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc56fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc5738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc5754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc5790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc585c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc588c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc58a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc58c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc58a8) */
/* WARNING: Removing unreachable block (ram,0x000102bc5890) */
/* WARNING: Removing unreachable block (ram,0x000102bc5860) */
/* WARNING: Removing unreachable block (ram,0x000102bc58fc) */
/* WARNING: Removing unreachable block (ram,0x000102bc5874) */
/* WARNING: Removing unreachable block (ram,0x000102bc5794) */
/* WARNING: Removing unreachable block (ram,0x000102bc5758) */
/* WARNING: Removing unreachable block (ram,0x000102bc573c) */
/* WARNING: Removing unreachable block (ram,0x000102bc5700) */
/* WARNING: Removing unreachable block (ram,0x000102bc56e4) */
/* WARNING: Removing unreachable block (ram,0x000102bc569c) */
/* WARNING: Removing unreachable block (ram,0x000102bc5680) */
/* WARNING: Removing unreachable block (ram,0x000102bc58c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc55cc(int param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_112efcd28) == 0) && (func_0x000100478f84(), param_1 != 0)) {
    func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    func_0x000107c453e4();
    lVar1 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 6;
    *(undefined8 *)(lVar1 + 0x10) = 3;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c3fdd0(0);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 102bc5b04; end: 102bc5bb3;  */

/* WARNING: Possible PIC construction at 0x000102bc5b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc5ba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc5b04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  func_0x000103bb6d88();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar3);
  func_0x000107c4df80(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102bc5bb4; end: 102bc5c8b;  */

/* WARNING: Possible PIC construction at 0x000102bc5c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc5c6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc5bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar2 = param_1;
  func_0x000103b829b0();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61174(*(undefined8 *)((long)param_1 + _DAT_112efcd00));
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar4);
  func_0x000107c4df80(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102bc5c8c; end: 102bc5f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc5c8c(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112efccd8);
    func_0x000107c613fc(param_5,0x29,7);
    *(long *)(param_5 + 0x10) = param_4;
    *(undefined8 *)(param_5 + 0x18) = param_1;
    *(undefined8 *)(param_5 + 0x20) = param_2;
    *(byte *)(param_5 + 0x28) = param_3 & 1;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar2 = &puStack_98;
    uStack_80 = param_7;
    uStack_78 = param_6;
    lStack_70 = param_5;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc5f08; end: 102bc6283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc5f08(undefined4 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112efccd8);
    func_0x000107c613fc(param_3,0x1c,7);
    *(long *)(param_3 + 0x10) = param_2;
    *(undefined4 *)(param_3 + 0x18) = param_1;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar2 = &puStack_88;
    uStack_70 = param_5;
    uStack_68 = param_4;
    lStack_60 = param_3;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc6284; end: 102bc64b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc6284(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  uVar8 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar2 = param_1;
  func_0x000103bb60a8();
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  lVar1 = _DAT_112efcd00;
  puVar9 = *(undefined8 **)((long)param_1 + _DAT_112efcd00);
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  func_0x000107c61174();
  puVar4 = puVar9;
  func_0x000103bb630c();
  uVar6 = puVar4[1];
  puVar2[4] = *puVar4;
  puVar2[5] = uVar6;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c490d4();
  uVar6 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2[9] = uVar6;
  puVar2[6] = puVar5;
  puVar4 = puVar2;
  func_0x000100214a84();
  func_0x000107c61588(puVar2);
  func_0x000102bc85b8(puVar2 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar2 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar4);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar9);
  func_0x000107c61170();
  func_0x000103b8178c();
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  uVar6 = *(undefined8 *)((long)param_1 + lVar1);
  func_0x000107c61174(uVar6);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar7 = puVar5;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar5);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102bc64b8; end: 102bc6643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc64b8(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    func_0x000107c5dc50(param_1,param_2);
    func_0x000107c61180();
    uVar5 = 0x16;
    if (param_3 != 1) {
      uVar5 = 0x14;
    }
    uVar2 = 0x15;
    if (param_3 != 2) {
      uVar2 = uVar5;
    }
    func_0x000107c5fe40();
    uVar5 = *(undefined8 *)(param_4 + _DAT_112efccd8);
    puVar3 = &UNK_1105abb58;
    func_0x000107c613fc(&UNK_1105abb58,0x28,7);
    *(long *)(puVar3 + 0x10) = param_4;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    uStack_78 = 0x102bc8600;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105abb70;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c615f0(uVar5);
    func_0x000107c61174(param_4);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102bc6644; end: 102bc6813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc6644(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar7 = *(undefined8 *)((long)param_1 + _DAT_112efcca8);
  puVar1 = param_1;
  func_0x000103b82204();
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar2,uVar6);
  func_0x000107c6142c(uVar6);
  puVar8 = *(undefined8 **)((long)param_1 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  func_0x000107c61174();
  puVar1 = puVar8;
  func_0x000103b82400();
  uVar6 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  uVar4 = 0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  *(undefined8 **)(lVar3 + 0x30) = param_2;
  func_0x000107c61434(uVar6);
  func_0x000107c61174();
  func_0x000103b81bc8();
  uVar6 = param_2[1];
  *(undefined8 *)(lVar3 + 0x50) = *param_2;
  *(undefined8 *)(lVar3 + 0x58) = uVar6;
  uVar4 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x78) = uVar4;
  *(undefined8 *)(lVar3 + 0x60) = param_3;
  func_0x000107c61434(uVar6);
  func_0x000107c61174(param_3);
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar6);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc6814; end: 102bc69b3;  */

undefined8 *
FUN_102bc6814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  puVar1 = &UNK_1105ab180;
  func_0x000107c613fc(&UNK_1105ab180,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  FUN_102bb6c54(&uStack_88,param_1,param_2,param_3,param_4,FUN_102bc85f8,puVar1);
  if (cStack_68 == '\x01') {
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61574(puVar1);
  }
  else {
    puVar2 = (undefined8 *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar2[3] = 2;
    puVar2[2] = 1;
    puVar3 = puVar2;
    func_0x000103b8264c();
    uVar5 = puVar3[1];
    puVar2[4] = *puVar3;
    puVar2[5] = uVar5;
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    func_0x000107c61434(uVar5);
    func_0x000107c5dc54(uStack_88,uStack_80,uStack_78,uStack_70);
    func_0x000107c61180();
    uVar5 = 0;
    func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    puVar2[9] = uVar5;
    puVar2[6] = puVar4;
    puVar3 = puVar2;
    func_0x000100214a84(puVar2);
    func_0x000107c61588(puVar2);
    func_0x000102bc85b8(puVar2 + 4,0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61574(puVar1);
  }
  return puVar3;
}



/* Entry: 102bc69b4; end: 102bc6a1b;  */

undefined * FUN_102bc69b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_102bc6a1c();
    func_0x000107c61170(puVar1);
  }
  return puVar2;
}



/* Entry: 102bc6a1c; end: 102bc6cb7;  */

undefined * FUN_102bc6a1c(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_68;
  
  func_0x000107c4e360();
  func_0x000107c61180();
  do {
    if (unaff_x20 == 0) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c61174();
    uVar10 = unaff_x20;
    func_0x000107c3f9e0();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000102bc89c0(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar4 = uVar10;
    func_0x000107c5fc54(uVar10,uVar3);
    func_0x000107c61170(uVar10);
    uVar10 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar10 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar11 = uVar10;
      if (0x7fffffffffffffff < uVar4) {
        uVar11 = uVar4;
      }
      func_0x000107c60480();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc6cb8);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar4 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar12;
            FUN_102bc743c(uVar12,uVar4,&PTR__OBJC_CLASS___UIViewController_1126af898,0x112d4ccd8);
          }
          uVar1 = uVar12 + 1;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc6cb4);
            (*pcVar2)();
          }
          puStack_68 = PTR_DAT_1126a1e40;
          uVar6 = uVar5;
          func_0x000107c61494(uVar5,1,&puStack_68);
          if (uVar6 != 0) break;
          func_0x000107c61170(uVar5);
          uVar12 = uVar12 + 1;
          if (uVar1 == uVar11) goto LAB_102bc6c08;
        }
        puVar9 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puVar8 < 0)) ||
           (puVar9 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar7 = puVar8;
            }
            func_0x000107c60480(puVar7);
          }
          puVar9 = (undefined *)0x0;
          FUN_102bc75f8(0,puVar7 + 1,1,puVar8);
        }
        uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar5 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_102bc75f8(puVar8,uVar12 + 1,1,puVar9);
          uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar5 + 0x10) = uVar12 + 1;
        *(ulong *)(uVar5 + uVar12 * 8 + 0x20) = uVar6;
        uVar12 = uVar1;
      } while (uVar1 != uVar11);
    }
LAB_102bc6c08:
    func_0x000107c6142c(uVar4);
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar9 = puVar8;
      }
      func_0x000107c60480();
    }
    if (puVar9 != (undefined *)0x0) {
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(unaff_x20);
      return puVar8;
    }
    func_0x000107c6142c(puVar8);
    uVar10 = unaff_x20;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(unaff_x20);
    unaff_x20 = uVar10;
  } while( true );
}



/* Entry: 102bc6cb8; end: 102bc6df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc6cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_7 + 0x10,auStack_78,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61618();
  if (param_7 != 0) {
    uVar3 = *(undefined8 *)(param_7 + _DAT_112efccd8);
    puVar1 = &UNK_1105abb08;
    func_0x000107c613fc(&UNK_1105abb08,0x48,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_4;
    *(long *)(puVar1 + 0x30) = param_7;
    *(undefined8 *)(puVar1 + 0x38) = param_5;
    *(undefined8 *)(puVar1 + 0x40) = param_6;
    uStack_88 = 0x102bc8318;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105abb20;
    ppuVar2 = &puStack_a8;
    puStack_80 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_80;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_7);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_7);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102bc6df4; end: 102bc7077;  */

/* WARNING: Removing unreachable block (ram,0x000102bc706c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc6df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long alStack_118 [17];
  
  uVar9 = *(undefined8 *)((long)param_7 + _DAT_112efcca8);
  puVar1 = param_7;
  func_0x000103b82310();
  uVar2 = *puVar1;
  uVar8 = puVar1[1];
  func_0x000107c61434(uVar8);
  func_0x000107c5fadc(uVar2,uVar8);
  func_0x000107c6142c(uVar8);
  puVar10 = *(undefined8 **)((long)param_7 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  func_0x000107c61174();
  puVar1 = puVar10;
  func_0x000103b825dc();
  uVar8 = puVar1[1];
  puVar11 = (undefined8 *)(lVar3 + 0x20);
  *puVar11 = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar8;
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar8);
  puVar5 = puVar4;
  func_0x000107c5dc54(param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  puVar6 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar3 + 0x48) = puVar6;
  *(undefined **)(lVar3 + 0x30) = puVar5;
  puVar1 = puVar6;
  func_0x000103b82614();
  uVar8 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar1;
  *(undefined8 *)(lVar3 + 0x58) = uVar8;
  func_0x000107c61434();
  func_0x000107c5dc50(param_5,param_6);
  func_0x000107c61180();
  *(undefined8 **)(lVar3 + 0x78) = puVar6;
  *(undefined **)(lVar3 + 0x60) = puVar4;
  lVar7 = lVar3;
  func_0x000100214a84();
  func_0x000107c61588(lVar3);
  uVar8 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar11,2,uVar8);
  FUN_102bc6814(param_1,param_2,param_3,param_4);
  lVar3 = lVar7;
  func_0x000107c61558(lVar7);
  alStack_118[0] = lVar7;
  FUN_102bc832c(puVar11,&UNK_100216600,0,lVar3,alStack_118);
  func_0x000107c6142c(puVar11);
  lVar3 = alStack_118[0];
  lVar7 = alStack_118[0];
  func_0x000107c5f9dc(alStack_118[0],PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c61574(lVar3);
  func_0x000107c4df80(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 102bc7078; end: 102bc71af;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102bc7078(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  ulong auStack_58 [5];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_11307abc8);
  func_0x00010404beb4();
  if (*(long *)(lVar7 + 0x10) == 0) {
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[4] = 0;
    auStack_58[3] = 0;
LAB_102bc717c:
    func_0x000102bc85b8(auStack_58 + 1,0x112d387f8,&UNK_10d902650);
  }
  else {
    lVar1 = *param_1;
    uVar4 = param_1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61434(lVar7);
    uVar5 = uVar4;
    func_0x000100029284(lVar1);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      auStack_58[2] = 0;
      auStack_58[1] = 0;
      auStack_58[4] = 0;
      auStack_58[3] = 0;
      func_0x000107c6142c(uVar4);
      goto LAB_102bc717c;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar1 * 0x20,auStack_58 + 1);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar7);
    if (auStack_58[4] == 0) goto LAB_102bc717c;
    uVar2 = 0;
    func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar3 = auStack_58;
    func_0x000107c6147c(puVar3,auStack_58 + 1,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = auStack_58[0];
      func_0x000107c5d388();
      func_0x000107c61170(auStack_58[0]);
      uVar6 = (ulong)(3 < uVar4);
      uVar5 = 0;
      if (uVar4 < 4) {
        uVar5 = uVar4;
      }
      goto LAB_102bc719c;
    }
  }
  uVar6 = 1;
  uVar5 = 0;
LAB_102bc719c:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 102bc71b0; end: 102bc720b;  */

void FUN_102bc71b0(void)

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
    func_0x0001042a8530();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112efcde8;
  plVar5 = (long *)&UNK_10db2eaf8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102bc720c; end: 102bc7283;  */

void FUN_102bc720c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102bc89c0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102bc7284; end: 102bc7297;  */

void FUN_102bc7284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efce00 == (undefined *)0x0 || ((ulong)puRam0000000112efce00 & 1) != 0) {
    puVar1 = &UNK_10e94d2cc;
    func_0x000107c61518(&UNK_10e94d2cc,0x35,0,0);
    puRam0000000112efce00 = puVar1;
  }
  return;
}



/* Entry: 102bc7298; end: 102bc743b;  */

ulong FUN_102bc7298(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc7370);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc7374);
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
  func_0x000107c5fb78(0xd000000000000026,0x800000010f0fc240);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc743c);
  (*pcVar2)();
}



/* Entry: 102bc743c; end: 102bc75f7;  */

ulong FUN_102bc743c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc7520);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc7524);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102bc89c0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc75f8);
  (*pcVar2)();
}



/* Entry: 102bc75f8; end: 102bc771f;  */

ulong FUN_102bc75f8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc7720);
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
  FUN_102bc7720(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc771c);
      (*pcVar1)();
    }
    FUN_102bc77a0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102bc7720; end: 102bc779f;  */

undefined * FUN_102bc7720(undefined *param_1,undefined *param_2)

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
    FUN_102bc7284();
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



/* Entry: 102bc77a0; end: 102bc78c3;  */

long FUN_102bc77a0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc78c0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc78c4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112efcdf8;
        func_0x0001000285a8(0x112efcdf8,&UNK_10db2eb08);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112efcdf8;
      func_0x0001000285a8(0x112efcdf8,&UNK_10db2eb08);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc78bc);
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



/* Entry: 102bc78c4; end: 102bc78df;  */

void FUN_102bc78c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102bc78e0();
  *unaff_x20 = param_1;
  return;
}


