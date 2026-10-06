/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d43304; end: 102d43357;  */

void FUN_102d43304(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d43358; end: 102d4335f;  */

void FUN_102d43358(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d43360; end: 102d433af;  */

undefined8 FUN_102d43360(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d433b0; end: 102d433f3;  */

undefined1  [16] FUN_102d433b0(void)

{
  return ZEXT816(0x1105c7548);
}



/* Entry: 102d433f4; end: 102d4341b;  */

void FUN_102d433f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d4341c; end: 102d4342b;  */

undefined8 FUN_102d4341c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d4342c; end: 102d434cb;  */

void FUN_102d4342c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d434cc; end: 102d434db;  */

void FUN_102d434cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d434dc; end: 102d43593;  */

void FUN_102d434dc(undefined8 param_1,undefined8 param_2,char param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_68 [24];
  
  if (param_3 != '\x01') {
    func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 != 0) {
      FUN_102d43594(param_5,param_6,param_7,param_8,param_9,param_1,param_2,param_10,param_11);
      func_0x000107c61574(param_4);
    }
  }
  return;
}



/* Entry: 102d43594; end: 102d4415b;  */

void FUN_102d43594(undefined8 ***param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 ***param_5,undefined8 param_6,undefined8 ***param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long unaff_x20;
  undefined8 ****ppppuVar19;
  undefined8 ***pppuVar20;
  undefined *puVar21;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  ppppuVar5 = (undefined8 ****)0x0;
  lVar12 = param_2;
  uStack_d8 = param_8;
  puStack_d0 = param_4;
  ppuStack_c0 = param_5;
  ppuStack_a8 = param_7;
  func_0x000107c5eea4();
  pppuVar20 = ppppuVar5[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppuVar20[8]);
  lVar14 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppuVar6 = (undefined8 ***)PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e4a4(pppuVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  pppuVar7 = pppuVar6;
  func_0x000107c5e5cc();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (pppuVar7 == (undefined8 ***)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar12);
  }
  pppuVar8 = pppuVar6;
  func_0x000107c5e870(pppuVar6);
  func_0x000107c61180();
  func_0x000107c61170(pppuVar7);
  func_0x000107c61170(pppuVar8);
  pppuVar7 = pppuVar6;
  func_0x000107c5e500(pppuVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5eea0(lVar14);
  func_0x000107c5ee70();
  (*(code *)pppuVar20[1])(lVar14,ppppuVar5);
  pppuVar20 = pppuVar6;
  func_0x000107c5e5b0(pppuVar6);
  func_0x000107c61180();
  func_0x000107c61170(pppuVar7);
  func_0x000107c61170(pppuVar20);
  pppuVar7 = pppuVar6;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000106e0c1a0();
  func_0x000107c61180();
  if (param_1 == (undefined8 ***)0x0) {
    func_0x000107c61170(pppuVar6);
    goto LAB_102d43e90;
  }
  pppuVar20 = param_1;
  func_0x00010011df08();
  func_0x000107c61180();
  ppuStack_b0 = pppuVar20;
  if (pppuVar20 == (undefined8 ***)0x0) {
    func_0x000107c5faec();
    ppppuVar19 = ppppuVar5;
    func_0x000107c5fadc();
    func_0x000107c6142c(ppppuVar5);
    pppuVar8 = (undefined8 ***)0x0;
    func_0x000107c5faec();
    ppppuVar5 = ppppuVar19;
    func_0x000107c5fadc();
    ppuStack_b0 = pppuVar8;
    func_0x000107c6142c(ppppuVar19);
  }
  func_0x000107c61174();
  pppuVar8 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (pppuVar8 == (undefined8 ***)0x0) {
    func_0x000107c61170(pppuVar20);
    func_0x000107c61170(ppuStack_b0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102d43ee0);
    (*pcVar4)();
  }
  pppuVar10 = pppuVar8;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(pppuVar8);
  pppuVar8 = (undefined8 ***)0x0;
  if (pppuVar10 != (undefined8 ***)0x0) {
    pppuStack_98 = (undefined8 ****)0x0;
    uVar9 = 0;
    FUN_102d44ab4(0,0x112d55598,&PTR_PTR_1126b25d0);
    ppppuVar5 = &pppuStack_98;
    func_0x000107c5fc50(pppuVar10,ppppuVar5,uVar9);
    func_0x000107c61170(pppuVar10);
    pppuVar8 = pppuStack_98;
    if ((undefined8 ****)pppuStack_98 == (undefined8 ****)0x0) {
      pppuVar8 = (undefined8 ***)0x0;
    }
    else {
      ppppuVar19 = (undefined8 ****)((ulong)pppuStack_98 & 0xffffffffffffff8);
      if ((ulong)pppuStack_98 >> 0x3e == 0) {
        if (ppppuVar19[2] == (undefined8 ***)0x0) goto LAB_102d43860;
LAB_102d4381c:
        if (((ulong)pppuVar8 & 0xc000000000000001) == 0) {
          if (ppppuVar19[2] == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d43ecc);
            (*pcVar4)();
          }
          pppuVar10 = (undefined8 ***)pppuVar8[4];
          func_0x000107c61174(pppuVar10);
        }
        else {
          pppuVar10 = (undefined8 ***)0x0;
          ppppuVar5 = (undefined8 ****)pppuVar8;
          func_0x00010121c1ac(0,pppuVar8);
        }
      }
      else {
        ppppuVar11 = (undefined8 ****)pppuStack_98;
        if (-1 < (long)pppuStack_98) {
          ppppuVar11 = ppppuVar19;
        }
        func_0x000107c60480();
        if (ppppuVar11 != (undefined8 ****)0x0) goto LAB_102d4381c;
LAB_102d43860:
        pppuVar10 = (undefined8 ***)0x0;
      }
      func_0x000107c6142c(pppuVar8);
      pppuVar8 = pppuVar10;
      func_0x000107c4c930(pppuVar10);
      func_0x000107c61180();
      func_0x000107c61170(pppuVar10);
    }
  }
  lVar12 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  ppuStack_c8 = pppuVar7;
  if (lVar12 != 0) {
    func_0x000107c5db64();
    func_0x000107c61180();
    if (pppuVar7 == (undefined8 ***)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(ppppuVar5);
    }
    pppuVar10 = (undefined8 ***)ppuStack_a8;
    func_0x000107c5fc48(ppuStack_a8,PTR___sSSN_11034da80);
    func_0x000107c4ee2c(lVar12);
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(pppuVar20);
    func_0x000107c61170(pppuVar7);
    pppuVar20 = pppuVar8;
    pppuVar8 = pppuVar10;
  }
  func_0x000107c61170(pppuVar8);
  func_0x000107c61170(pppuVar20);
  puVar13 = PTR_PTR_1126cb258;
  func_0x000107c610f8(PTR_PTR_1126cb258);
  func_0x000107c453e4();
  pppuVar7 = (undefined8 ***)PTR_PTR_1126bc778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_102d44ab4(0,0x112d4e810,&PTR_PTR_1126b0cd8);
  func_0x000107c61434(param_3);
  func_0x000103c1912c(param_2,param_3);
  lStack_b8 = param_2;
  if (param_2 != 0) {
    func_0x000107c44fc8(param_2);
    func_0x000107c61180();
    lVar12 = param_2;
    func_0x000107c5ee30();
    func_0x000107c61170(param_2);
    lVar14 = lVar12;
    func_0x000107c5ee20(lVar12,param_3);
    func_0x00010006c090(lVar12,param_3);
    func_0x000107c55218(pppuVar7);
    func_0x000107c61170(lVar14);
    func_0x000107c5a344(puVar13);
    func_0x000107c594d4(puVar13);
    pppuVar20 = (undefined8 ***)ppuStack_c0;
    if ((undefined8 ***)ppuStack_c0 == (undefined8 ***)0x0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar21 = puStack_d0;
      func_0x000107c5fadc(puStack_d0);
    }
    func_0x000107c5453c(puVar13);
    func_0x000107c61170(puVar21);
    puVar21 = PTR_PTR_1126be930;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a2d4();
    puVar15 = PTR_PTR_1126ba668;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59058();
    puVar16 = puVar15;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar16 != (undefined *)0x0) {
      lStack_100 = param_9;
      puVar17 = puVar16;
      puStack_e0 = puVar21;
      puStack_d0 = puVar15;
      ppuStack_c0 = pppuVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar16);
      puVar21 = PTR_PTR_1126b28f8;
      func_0x000107c610f8();
      func_0x000107c477a4();
      ppuVar2 = ppuStack_c8;
      puVar15 = puVar21;
      func_0x000107c5e42c();
      func_0x000107c61180();
      func_0x000107c61170();
      FUN_102d44750();
      func_0x000107c613fc();
      ppuVar1 = ppuStack_b0;
      *(undefined8 *)(puVar21 + 0x18) = 3;
      *(undefined8 *)(puVar21 + 0x10) = 1;
      pppuVar7 = (undefined8 ***)ppuStack_b0;
      ppuStack_f0 = param_1;
      func_0x000107d6ae74(ppuStack_b0,param_1,0);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar1);
      *(undefined8 ****)(puVar21 + 0x20) = pppuVar7;
      func_0x00010006c00c(puVar17,pppuVar20);
      puStack_f8 = puVar15;
      func_0x000107c3ecc8(puVar15);
      func_0x000107c61180();
      pppuVar8 = (undefined8 ***)PTR_PTR_1126be6d0;
      func_0x000107c610f8(PTR_PTR_1126be6d0);
      puVar16 = puVar17;
      func_0x000107c5ee20(puVar17,pppuVar20);
      uVar9 = 0;
      FUN_102d44ab4(0,0x112d670c8,&PTR_PTR_1126d7ab8);
      puVar18 = puVar21;
      func_0x000107c5fc48(puVar21,uVar9);
      func_0x000107c61574(puVar21);
      func_0x000107c4607c(pppuVar8);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar18);
      puStack_e8 = puVar17;
      ppuStack_b0 = pppuVar20;
      func_0x00010006c090(puVar17,pppuVar20);
      pppuVar7 = pppuVar8;
      func_0x000107c3ecc8(pppuVar8);
      func_0x000107c61180();
      lVar12 = lStack_100;
      func_0x000107c61170(pppuVar8);
      if (lVar12 == 0) {
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar15 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        uVar9 = uStack_d8;
        func_0x000107c5fadc(uStack_d8,lVar12);
        func_0x000107c48af4(puVar15);
        func_0x000107c61170(uVar9);
        pppuVar20 = (undefined8 ***)ppuVar2;
        func_0x000108604db4(ppuVar2);
        func_0x000107c61180();
        puVar21 = PTR_PTR_1126be800;
        func_0x000107c610f8(PTR_PTR_1126be800);
        func_0x000107c48cc8();
        func_0x000107c61170(puVar15);
        func_0x000107c61170(pppuVar20);
      }
      lVar12 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c5c734();
      func_0x000107c61180();
      ppuVar3 = ppuStack_c0;
      ppuVar1 = ppuStack_f0;
      if (lVar12 == 0) {
        func_0x000107c61170(puStack_e0);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(ppuVar3);
        func_0x000107c61170(ppuVar1);
        func_0x000107c61170(pppuVar6);
        func_0x000107c61170(ppuVar2);
        func_0x00010006c090(puStack_e8,ppuStack_b0);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puStack_d0);
        func_0x000107c61170(lStack_b8);
        func_0x000107c61170(puStack_f8);
      }
      else {
        pppuVar20 = (undefined8 ***)ppuStack_a8;
        func_0x000107c5fc48(ppuStack_a8,PTR___sSSN_11034da80);
        pcStack_78 = FUN_102d44ab0;
        uStack_70 = 0;
        pppuStack_98 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100f5c588;
        puStack_80 = &UNK_1105c7710;
        ppppuVar5 = &pppuStack_98;
        func_0x000107c60bc4(ppppuVar5);
        func_0x000107c61574(uStack_70);
        func_0x000107c51e0c(lVar12);
        func_0x000107c61170(puStack_e0);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(ppuVar3);
        func_0x000107c61170(ppuVar1);
        func_0x000107c61170(pppuVar6);
        func_0x000107c61170(ppuVar2);
        func_0x00010006c090(puStack_e8,ppuStack_b0);
        func_0x000107c61170(puStack_d0);
        func_0x000107c61170(lStack_b8);
        func_0x000107c61170(puStack_f8);
        func_0x000107c61170(pppuVar7);
        func_0x000107c60bd0(ppppuVar5);
        func_0x000107c61170(puVar21);
        func_0x000107c615e8(lVar12);
        pppuVar7 = pppuVar20;
      }
      goto LAB_102d43e90;
    }
    func_0x000107c61170(puVar15);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(puVar21);
  }
  func_0x000107c61170(puVar13);
  func_0x000107c61170(pppuVar7);
  func_0x000107c61170(ppuStack_b0);
  func_0x000107c61170(param_1);
  func_0x000107c61170(pppuVar6);
  pppuVar7 = (undefined8 ***)ppuStack_c8;
LAB_102d43e90:
  func_0x000107c61170(pppuVar7);
  return;
}



/* Entry: 102d4415c; end: 102d44323; -[_TtC35BitmojiMessageSendingImplementation20BitmojiMessageSender sendBitmojiUserShareMessageWithMedia:userId:encodedOutfit:recipientUsernames:recipientUserIds:mischiefs:additionalText:completion:] */

/* WARNING: Possible PIC construction at 0x000102d442d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d442e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d442fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d442e8) */
/* WARNING: Removing unreachable block (ram,0x000102d442d8) */
/* WARNING: Removing unreachable block (ram,0x000102d44300) */

void FUN_102d4415c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_78;
  
  uVar5 = *param_1;
  func_0x000107c5faec();
  if (param_5 == 0) {
    lStack_78 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec();
    lStack_78 = param_5;
  }
  func_0x000107c5fc54(param_7,PTR___sSSN_11034da80);
  uVar1 = 0x112d6dfd0;
  func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
  func_0x000107c5fc54(param_8);
  if (param_9 == 0) {
    param_9 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar2 = &UNK_1105c7680;
  func_0x000107c613fc(&UNK_1105c7680,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1105c76a8;
  func_0x000107c613fc(&UNK_1105c76a8,0x58,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(long *)(puVar3 + 0x30) = lStack_78;
  *(undefined8 *)(puVar3 + 0x38) = uVar4;
  *(long *)(puVar3 + 0x40) = param_9;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  *(undefined8 *)(puVar3 + 0x50) = uVar5;
  func_0x000107c61434(uVar1);
  func_0x000107c615f4(param_3,2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar4);
  func_0x000102d43ee0(param_7,param_8,0x102d44514,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d44324; end: 102d444bf;  */

/* WARNING: Possible PIC construction at 0x000102d44398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d44458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d44494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d444a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d44498) */
/* WARNING: Removing unreachable block (ram,0x000102d4445c) */
/* WARNING: Removing unreachable block (ram,0x000102d4439c) */
/* WARNING: Removing unreachable block (ram,0x000102d444a8) */
/* WARNING: Removing unreachable block (ram,0x000102d444ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d44324(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    FUN_102d44660();
    puVar2 = &UNK_1105c77b8;
    func_0x000107c613f8(&UNK_1105c77b8,param_1,0,0);
    (*param_3)();
  }
  else {
    if (param_2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11307fc80);
      func_0x0001044c309c(0);
      func_0x000107c61174(param_1);
      uVar3 = uVar4;
      func_0x000107c61434(uVar4);
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar4);
      func_0x0001086063d8(uVar3,param_5);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
    lVar1 = param_1;
    FUN_102d44660();
    puVar2 = &UNK_1105c77b8;
    func_0x000107c613f8(&UNK_1105c77b8,lVar1,0,0);
    func_0x000107c61174(param_1);
    func_0x000107c614b0(param_2);
    (*param_3)(puVar2,0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 102d444c0; end: 102d4454b;  */

void FUN_102d444c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d4454c; end: 102d44637;  */

void FUN_102d4454c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102d446a0(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102d447bc(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d44634);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d44638);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d44630);
  (*pcVar1)();
}



/* Entry: 102d44638; end: 102d4465f;  */

/* WARNING: Possible PIC construction at 0x000102d44398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d44458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d44494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d444a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d44498) */
/* WARNING: Removing unreachable block (ram,0x000102d4445c) */
/* WARNING: Removing unreachable block (ram,0x000102d4439c) */
/* WARNING: Removing unreachable block (ram,0x000102d444a8) */
/* WARNING: Removing unreachable block (ram,0x000102d444ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d44638(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    FUN_102d44660();
    puVar4 = &UNK_1105c77b8;
    func_0x000107c613f8(&UNK_1105c77b8,param_1,0,0);
    (*pcVar1)();
  }
  else {
    if (param_2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11307fc80);
      func_0x0001044c309c(0);
      func_0x000107c61174(param_1);
      uVar5 = uVar6;
      func_0x000107c61434(uVar6);
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
      func_0x0001086063d8(uVar5,uVar2);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
    lVar3 = param_1;
    FUN_102d44660();
    puVar4 = &UNK_1105c77b8;
    func_0x000107c613f8(&UNK_1105c77b8,lVar3,0,0);
    func_0x000107c61174(param_1);
    func_0x000107c614b0(param_2);
    (*pcVar1)(puVar4,0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar4);
  return;
}



/* Entry: 102d44660; end: 102d4469f;  */

void FUN_102d44660(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f10358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db439a0;
  func_0x000107c61520(&UNK_10db439a0,&UNK_1105c77b8);
  puRam0000000112f10358 = puVar1;
  return;
}



/* Entry: 102d446a0; end: 102d4474f;  */

void FUN_102d446a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001011f467c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102d44750; end: 102d447bb;  */

void FUN_102d44750(void)

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
    FUN_102d44ab4(0,0x112d670c8,&PTR_PTR_1126d7ab8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ea4790;
  plVar5 = (long *)&UNK_10dab79a0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102d447bc; end: 102d44913;  */

ulong FUN_102d447bc(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d44914);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d44908);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000104522c9c(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4490c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d44910);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102d44914(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102d44914; end: 102d44aaf;  */

ulong FUN_102d44914(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d449e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d449e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104522c9c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x000104522c9c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f10af40);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d44ab0);
  (*pcVar2)();
}



/* Entry: 102d44ab0; end: 102d44ab3;  */

void FUN_102d44ab0(void)

{
  return;
}



/* Entry: 102d44ab4; end: 102d44af3;  */

void FUN_102d44ab4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102d44af4; end: 102d44be3;  */

uint FUN_102d44af4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102d44be4; end: 102d44c23;  */

void FUN_102d44be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f10360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db43978;
  func_0x000107c61520(&UNK_10db43978,&UNK_1105c77b8);
  puRam0000000112f10360 = puVar1;
  return;
}



/* Entry: 102d44c24; end: 102d44c2b;  */

void FUN_102d44c24(long param_1,long param_2)

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



/* Entry: 102d44c2c; end: 102d44cf7;  */

void FUN_102d44c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 102d44cf8; end: 102d44d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d44cf8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c42cb0();
  func_0x000107c61180();
  func_0x000107c5c894();
  func_0x000107c61180();
  lVar3 = 0;
  func_0x000102d444f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  return;
}



/* Entry: 102d44d04; end: 102d44d3b;  */

void FUN_102d44d04(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d44d3c; end: 102d44d43;  */

void FUN_102d44d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102d44d44; end: 102d44d67;  */

/* WARNING: Possible PIC construction at 0x000102d44d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d44d54) */

void FUN_102d44d44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d44d68; end: 102d44ddf;  */

void FUN_102d44d68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d44de0; end: 102d45043;  */

void FUN_102d44de0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x00010033da44();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  func_0x0001000285a8(0x112e78408,&UNK_10da81bc0);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  func_0x0001000285a8(0x112e60be0,&UNK_10da68e90);
  func_0x000107c610f8();
  uVar4 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x20) = puVar6;
  FUN_102d50530(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar4 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar7 = uVar4;
  func_0x000102d4ffe0(uVar4,uVar1,uVar2,uVar3,puVar5,puVar6);
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_102d50064();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 102d45044; end: 102d45053;  */

void FUN_102d45044(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x00010033da44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_80;
  func_0x0001000285a8(0x112e78408,&UNK_10da81bc0);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x18) = puVar6;
  func_0x0001000285a8(0x112e60be0,&UNK_10da68e90);
  func_0x000107c610f8();
  uVar5 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x20) = puVar7;
  FUN_102d50530(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar5 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar8 = uVar5;
  func_0x000102d4ffe0(uVar5,uVar2,uVar3,uVar4,puVar6,puVar7);
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_102d50064();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 102d45054; end: 102d4524b;  */

long FUN_102d45054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  func_0x0001000285a8(0x112e78408,&UNK_10da81bc0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e60be0,&UNK_10da68e90);
  func_0x000107c610f8();
  uVar1 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  FUN_102d50530(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar1 = param_1;
  func_0x000102d4ffe0(param_1,param_2,param_3,param_4,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar4 = uVar1;
  func_0x000107c6157c();
  FUN_102d50064();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  return unaff_x20;
}



/* Entry: 102d4524c; end: 102d452b7;  */

void FUN_102d4524c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102d452b8; end: 102d4530b;  */

void FUN_102d452b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d4530c; end: 102d45357;  */

void FUN_102d4530c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d45358; end: 102d453ab;  */

void FUN_102d45358(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d453ac; end: 102d45507;  */

long FUN_102d453ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000100b96a48(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100b96ac8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  func_0x000100b96b04();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  return unaff_x20;
}



/* Entry: 102d45508; end: 102d4554b;  */

void FUN_102d45508(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d4554c; end: 102d4558f;  */

undefined1  [16] FUN_102d4554c(void)

{
  return ZEXT816(0x1105c7a78);
}



/* Entry: 102d45590; end: 102d455e3;  */

void FUN_102d45590(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d455e4; end: 102d456c7;  */

void FUN_102d455e4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001003250f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000102d5e4c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000102d5e2b0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x000102d5e30c();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 102d456c8; end: 102d456cf;  */

void FUN_102d456c8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x0001003250f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000102d5e4c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000102d5e2b0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x000102d5e30c();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 102d456d0; end: 102d45787;  */

long FUN_102d456d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000102d5e4c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102d5e2b0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000102d5e30c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 102d45788; end: 102d457bb;  */

void FUN_102d45788(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d457bc; end: 102d4580f;  */

void FUN_102d457bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d45810; end: 102d4585b;  */

void FUN_102d45810(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d4585c; end: 102d458af;  */

void FUN_102d4585c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d458b0; end: 102d45bdb;  */

long FUN_102d458b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126ac338;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar3 = 0x655373706f6f6c62;
  func_0x000107c5fadc(0x655373706f6f6c62,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return unaff_x20;
}



/* Entry: 102d45bdc; end: 102d45c27;  */

void FUN_102d45bdc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d45c28; end: 102d45c77;  */

undefined8 FUN_102d45c28(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d45c78; end: 102d45cbb;  */

undefined1  [16] FUN_102d45c78(void)

{
  return ZEXT816(0x1105c7c08);
}



/* Entry: 102d45cbc; end: 102d45ce3;  */

void FUN_102d45cbc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d45ce4; end: 102d45ceb;  */

undefined8 FUN_102d45ce4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d45cec; end: 102d45f9f;  */

void FUN_102d45cec(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010033f1e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac340;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102d45fa0; end: 102d45fab;  */

void FUN_102d45fa0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010033f1e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126ac340;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102d45fac; end: 102d4600f;  */

undefined8
FUN_102d45fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102d46010(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102d46010; end: 102d46273;  */

void FUN_102d46010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ac340;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 102d46274; end: 102d462b7;  */

void FUN_102d46274(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d462b8; end: 102d4630b;  */

void FUN_102d462b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d4630c; end: 102d46313;  */

void FUN_102d4630c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d46314; end: 102d46363;  */

undefined8 FUN_102d46314(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d46364; end: 102d463a7;  */

undefined1  [16] FUN_102d46364(void)

{
  return ZEXT816(0x1105c7cd0);
}



/* Entry: 102d463a8; end: 102d463cf;  */

void FUN_102d463a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d463d0; end: 102d463eb;  */

undefined8 FUN_102d463d0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d463ec; end: 102d46497;  */

void FUN_102d463ec(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d46498; end: 102d464a7;  */

void FUN_102d46498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d464a8; end: 102d4657b;  */

undefined1  [16] FUN_102d464a8(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(unaff_x20 + 0x10,&uStack_40,&UNK_1105c7f08,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2064657473656e20,0xee003a726f727265);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar4,puVar2,puVar3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 102d4657c; end: 102d4659f;  */

void FUN_102d4657c(void)

{
  long unaff_x20;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d465a0; end: 102d465af;  */

void FUN_102d465a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d465b0; end: 102d465cf;  */

void FUN_102d465b0(void)

{
  FUN_102d464a8();
  return;
}



/* Entry: 102d465d0; end: 102d465ef;  */

void FUN_102d465d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f10968);
  return;
}



/* Entry: 102d465f0; end: 102d46793;  */

void FUN_102d465f0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105c7e38;
  if (lRam0000000112f109d0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f109d0 = param_1;
  }
  return;
}



/* Entry: 102d46794; end: 102d467d3;  */

void FUN_102d46794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f109e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4442c;
  func_0x000107c61520(&UNK_10db4442c,&UNK_1105c7f08);
  puRam0000000112f109e8 = puVar1;
  return;
}



/* Entry: 102d467d4; end: 102d467f7;  */

void FUN_102d467d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102d467f8; end: 102d4683b;  */

void FUN_102d467f8(long param_1,long *param_2,long param_3)

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



/* Entry: 102d4683c; end: 102d46843;  */

bool FUN_102d4683c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d46844; end: 102d46873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d46844(void)

{
  long unaff_x20;
  
  FUN_102d46bf0(unaff_x20 + _DAT_113804f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d46874; end: 102d4688f;  */

void FUN_102d46874(void)

{
  if (lRam0000000112f10a20 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e72b6a4);
  return;
}



/* Entry: 102d46890; end: 102d4690b;  */

void FUN_102d46890(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_102d4690c();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61630(param_1,0x100,3,&lStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 102d4690c; end: 102d4691f;  */

void FUN_102d4690c(undefined8 param_1)

{
  if (lRam0000000112f10b30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72b6ec);
  return;
}



/* Entry: 102d46920; end: 102d4694f;  */

void FUN_102d46920(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 102d46950; end: 102d46a27;  */

long * FUN_102d46950(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    *param_1 = *param_2;
    func_0x000107c61174();
    bVar3 = (int)plVar4 != 1;
    if (bVar3) {
      lVar5 = 0x112f10ab8;
      func_0x0001000285a8(0x112f10ab8,&UNK_10db44560);
      iVar2 = *(int *)(lVar5 + 0x30);
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
    }
    func_0x000107c6159c(param_1,param_3,!bVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102d46a28; end: 102d46a97;  */

void FUN_102d46a28(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  func_0x000107c61170(*param_1);
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 0x112f10ab8;
  func_0x0001000285a8(0x112f10ab8,&UNK_10db44560);
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000102d46a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + (long)iVar1,lVar3);
  return;
}



/* Entry: 102d46a98; end: 102d46bef;  */

undefined8 * FUN_102d46a98(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  *param_1 = *param_2;
  func_0x000107c61174();
  bVar2 = (int)puVar3 != 1;
  if (bVar2) {
    lVar4 = 0x112f10ab8;
    func_0x0001000285a8(0x112f10ab8,&UNK_10db44560);
    iVar1 = *(int *)(lVar4 + 0x30);
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  }
  func_0x000107c6159c(param_1,param_3,!bVar2);
  return param_1;
}



/* Entry: 102d46bf0; end: 102d46c2b;  */

undefined8 FUN_102d46bf0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102d4690c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102d46c2c; end: 102d46d9b;  */

undefined8 * FUN_102d46c2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  *param_1 = *param_2;
  lVar3 = 0x112f10ab8;
  func_0x0001000285a8(0x112f10ab8,&UNK_10db44560);
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 102d46d9c; end: 102d46dcb;  */

void FUN_102d46d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102d46da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102d46dcc; end: 102d46e53;  */

void FUN_102d46dcc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_60 [32];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar2 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    puVar1 = PTR___sBOWV_11034d658 + 0x40;
    func_0x000107c61504(auStack_60,puVar1,*(long *)(lVar2 + -8) + 0x40);
    puStack_40 = auStack_60;
    puStack_38 = puVar1;
    func_0x000107c61528(param_1,0x100,2,&puStack_40);
  }
  return;
}



/* Entry: 102d46e54; end: 102d46f43;  */

uint FUN_102d46e54(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102d46f44; end: 102d46f83;  */

void FUN_102d46f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f10b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db445f0;
  func_0x000107c61520(&UNK_10db445f0,&UNK_1105c8048);
  puRam0000000112f10b68 = puVar1;
  return;
}



/* Entry: 102d46f84; end: 102d46f8b;  */

undefined8 FUN_102d46f84(void)

{
  return 1;
}



/* Entry: 102d46f8c; end: 102d4702b;  */

void FUN_102d46f8c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d4702c; end: 102d4703b;  */

void FUN_102d4702c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d4703c; end: 102d472fb;  */

void FUN_102d4703c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d472fc; end: 102d47393;  */

long FUN_102d472fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d47394; end: 102d47407;  */

undefined8 * FUN_102d47394(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 102d47408; end: 102d47453;  */

undefined8 * FUN_102d47408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 102d47454; end: 102d474f3;  */

int FUN_102d47454(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


