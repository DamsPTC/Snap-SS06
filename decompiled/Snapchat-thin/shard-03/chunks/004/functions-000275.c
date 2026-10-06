/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10284e138; end: 10284e3ff;  */

void FUN_10284e138(undefined8 param_1,ulong param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  undefined1 *unaff_x20;
  int iVar17;
  long lVar18;
  undefined *apuStack_f0 [3];
  undefined8 uStack_d8;
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c44fd8();
  func_0x000107c61180();
  puVar5 = param_3;
  if (unaff_x20 != (undefined1 *)0x0) {
    puVar4 = unaff_x20;
    func_0x000107c5ee30();
    uVar12 = param_2;
    func_0x000107c61170();
    uVar2 = (uint)(param_2 >> 0x20);
    uVar14 = uVar2 >> 0x1e;
    iVar17 = (int)puVar4;
    iVar15 = (int)((ulong)puVar4 >> 0x20);
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = param_2 >> 0x30 & 0xff;
joined_r0x00010284e1c4:
        if (uVar16 != 0x10) goto LAB_10284e3a0;
      }
      else {
        if (SBORROW4(iVar15,iVar17)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e3ec);
          (*pcVar3)();
        }
        if (iVar15 - iVar17 != 0x10) goto LAB_10284e3a0;
      }
      if (uVar14 == 2) {
        lVar18 = *(long *)(puVar4 + 0x10);
        lVar1 = *(long *)(puVar4 + 0x18);
        func_0x000107c5ec30();
        puVar5 = unaff_x20;
        if (unaff_x20 != (undefined1 *)0x0) {
          func_0x000107c5ec3c();
          if (SBORROW8(lVar18,(long)puVar5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e3f8);
            (*pcVar3)();
          }
          puVar5 = unaff_x20 + (lVar18 - (long)puVar5);
        }
        if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e3f4);
          (*pcVar3)();
        }
        func_0x000107c5ec38();
        if (puVar5 != (undefined1 *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          func_0x000107c610f8();
          func_0x000107c48ff4();
          puVar7 = puVar6;
          func_0x000107c3ac54();
          goto LAB_10284e33c;
        }
      }
      else {
        if (uVar14 != 1) {
          uStack_56 = SUB81(puVar4,0);
          uStack_55 = (undefined1)((ulong)puVar4 >> 8);
          uStack_54 = (undefined1)((ulong)puVar4 >> 0x10);
          uStack_53 = (undefined1)((ulong)puVar4 >> 0x18);
          uStack_52 = (undefined1)((ulong)puVar4 >> 0x20);
          uStack_51 = (undefined1)((ulong)puVar4 >> 0x28);
          uStack_50 = (undefined1)((ulong)puVar4 >> 0x30);
          uStack_4f = (undefined1)((ulong)puVar4 >> 0x38);
          uStack_4e = (undefined1)param_2;
          uStack_4d = (undefined1)(param_2 >> 8);
          uStack_4c = (undefined1)(param_2 >> 0x10);
          uStack_4b = (undefined1)(param_2 >> 0x18);
          uStack_4a = (undefined1)(param_2 >> 0x20);
          uStack_49 = (undefined1)(param_2 >> 0x28);
          puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          func_0x000107c610f8();
          puVar5 = &uStack_56;
          func_0x000107c48ff4();
          puVar7 = puVar6;
          func_0x000107c3ac54();
LAB_10284e33c:
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          puVar6 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          uVar16 = uVar12;
          func_0x000107c5fb1c();
          func_0x000107c6142c(uVar12);
          func_0x00010006c090(puVar4,param_2);
          goto LAB_10284e3b4;
        }
        lVar18 = (long)iVar17;
        if ((long)puVar4 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e3f0);
          (*pcVar3)();
        }
        func_0x000107c5ec30();
        if (unaff_x20 == (undefined1 *)0x0) {
          func_0x000107c5ec38();
        }
        else {
          puVar5 = unaff_x20;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar18,(long)puVar5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e3fc);
            (*pcVar3)();
          }
          puVar5 = unaff_x20 + (lVar18 - (long)puVar5);
          func_0x000107c5ec38();
          if (puVar5 != (undefined1 *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            func_0x000107c610f8();
            func_0x000107c48ff4();
            puVar7 = puVar6;
            func_0x000107c3ac54();
            goto LAB_10284e33c;
          }
        }
      }
    }
    else if (uVar14 == 2) {
      uVar16 = *(long *)(puVar4 + 0x18) - *(long *)(puVar4 + 0x10);
      if (SBORROW8(*(long *)(puVar4 + 0x18),*(long *)(puVar4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10284e3e8);
        (*pcVar3)();
      }
      goto joined_r0x00010284e1c4;
    }
LAB_10284e3a0:
    func_0x00010006c090(puVar4,param_2);
    puVar5 = param_3;
  }
  puVar6 = (undefined *)0x0;
  uVar16 = 0;
LAB_10284e3b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    puVar7 = PTR_PTR_1126ab338;
    func_0x000107c610f8();
    puVar8 = puVar6;
    func_0x000107c5fadc(puVar6,uVar16);
    func_0x000107c491bc();
    func_0x000107c61170(puVar8);
    FUN_10284e5e4(puVar6,uVar16,puVar5,param_4);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170(puVar7);
    }
    else {
      uVar13 = 0x112ec44d0;
      uVar9 = 0;
      FUN_102850528(0,0x112ec44d0,&PTR_PTR_1126ab340);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      uVar9 = 0;
      FUN_102850528(0,0x112ec44d8,&PTR_PTR_1126ab338);
      uVar11 = 0;
      apuStack_d0[0] = puVar7;
      uStack_b8 = uVar9;
      FUN_102850528(0,0x112ec44e0,&PTR_PTR_1126ab348);
      apuStack_f0[0] = puVar6;
      uStack_d8 = uVar11;
      func_0x000107c610f8(PTR_PTR_1126c67d8);
      FUN_1027efbc4(uVar10,uVar13,apuStack_d0,apuStack_f0);
    }
    return;
  }
  return;
}



/* Entry: 10284e400; end: 10284e54f;  */

void FUN_10284e400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined *apuStack_70 [3];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ab338;
  func_0x000107c610f8();
  lVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c491bc();
  func_0x000107c61170(lVar2);
  FUN_10284e5e4(param_1,param_2,param_3,param_4);
  if (param_1 == 0) {
    func_0x000107c61170(puVar1);
  }
  else {
    uVar6 = 0x112ec44d0;
    uVar3 = 0;
    FUN_102850528(0,0x112ec44d0,&PTR_PTR_1126ab340);
    func_0x000107c614e8();
    func_0x000107c3ff48();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    FUN_102850528(0,0x112ec44d8,&PTR_PTR_1126ab338);
    uVar5 = 0;
    apuStack_70[0] = puVar1;
    uStack_58 = uVar3;
    FUN_102850528(0,0x112ec44e0,&PTR_PTR_1126ab348);
    alStack_90[0] = param_1;
    uStack_78 = uVar5;
    func_0x000107c610f8(PTR_PTR_1126c67d8);
    FUN_1027efbc4(uVar4,uVar6,apuStack_70,alStack_90);
  }
  return;
}



/* Entry: 10284e550; end: 10284e5c3; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10284e550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010285006c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10284e5c4; end: 10284e5db; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010284e5d8) */

void FUN_10284e5c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10284e5dc; end: 10284e5e3; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin pluginType] */

undefined8 FUN_10284e5dc(void)

{
  return 0;
}



/* Entry: 10284e5e4; end: 10284e80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10284e5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4480);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar6 = &UNK_110557770;
    puVar3 = puVar6;
    func_0x000107c613fc(&UNK_110557770,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar8 = &UNK_110557798;
    func_0x000107c613fc(&UNK_110557798,0x38,7);
    *(undefined **)(puVar8 + 0x10) = puVar3;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    *(undefined8 *)(puVar8 + 0x28) = param_3;
    *(undefined8 *)(puVar8 + 0x30) = param_4;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1028501e4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1004725e8;
    puStack_88 = &UNK_1105577b0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(&puStack_a0);
    puVar8 = puStack_78;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar8);
    func_0x000107c408f0(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar5 = puVar2;
    func_0x000107c5cb24(puVar2);
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_110557770,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar8 = PTR_PTR_1126ab348;
    func_0x000107c610f8(PTR_PTR_1126ab348);
    pcStack_80 = (code *)0x102850210;
    puStack_a0 = puVar3;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x1028505a0;
    puStack_88 = &UNK_1105577d8;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(puVar6);
    func_0x000107c45d24(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar7);
    puVar3 = puStack_78;
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar3);
  }
  return puVar8;
}



/* Entry: 10284e80c; end: 10284e867;  */

void FUN_10284e80c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10284e868(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10284e868; end: 10284ec1b;  */

/* WARNING: Possible PIC construction at 0x00010284ebec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284ebf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284e868(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [144];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4490);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20 + _DAT_112ec4458;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar3 == 0) {
      uStack_2e0 = 0;
      lStack_2d8 = 0;
      uVar5 = param_2;
    }
    else {
      lStack_2d8 = lVar3;
      func_0x000107c5faec();
      uVar5 = param_2;
      func_0x000107c61170(lVar3);
      uStack_2e0 = param_2;
    }
    lVar3 = param_1;
    func_0x000107c4e790();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    uVar9 = uVar5;
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c4e7d8();
    func_0x000107c61180();
    lVar12 = param_1;
    func_0x000107c3e350();
    func_0x000107c61180();
    if (lVar12 == 0) {
      lVar13 = 0;
      uVar14 = 0;
      uVar15 = uVar9;
    }
    else {
      lVar13 = lVar12;
      func_0x000107c5faec();
      uVar15 = uVar9;
      func_0x000107c61170(lVar12);
      uVar14 = uVar9;
    }
    puVar7 = PTR__kCLLocationCoordinate2DInvalid_110349b98;
    lVar12 = param_1;
    func_0x000107c4e78c();
    func_0x000107c61180();
    if (lVar12 == 0) {
      lVar10 = 0;
      uVar11 = 0;
      uVar9 = uVar15;
    }
    else {
      lVar10 = lVar12;
      func_0x000107c5faec();
      uVar9 = uVar15;
      func_0x000107c61170(lVar12);
      uVar11 = uVar15;
    }
    uVar15 = *(undefined8 *)puVar7;
    uVar16 = *(undefined8 *)(puVar7 + 8);
    func_0x000107c4b870();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar12 = 0;
      uVar9 = 0;
    }
    else {
      lVar12 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uStack_230 = 0;
    uStack_228 = 0;
    lStack_220 = lStack_2d8;
    uStack_218 = uStack_2e0;
    uStack_1c8 = 0x54414843;
    uStack_1c0 = 0xe400000000000000;
    uStack_1b8 = 0;
    uStack_138 = 0x54414843;
    uStack_128 = 0;
    uStack_130 = 0xe400000000000000;
    uStack_188 = uStack_2e0;
    lStack_190 = lStack_2d8;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_240 = uVar15;
    uStack_238 = uVar16;
    lStack_210 = lVar4;
    uStack_208 = uVar5;
    lStack_200 = lVar3;
    lStack_1f8 = lVar13;
    uStack_1f0 = uVar14;
    lStack_1e8 = lVar10;
    uStack_1e0 = uVar11;
    lStack_1d8 = lVar12;
    uStack_1d0 = uVar9;
    uStack_1b0 = uVar15;
    uStack_1a8 = uVar16;
    lStack_180 = lVar4;
    uStack_178 = uVar5;
    lStack_170 = lVar3;
    lStack_168 = lVar13;
    uStack_160 = uVar14;
    lStack_158 = lVar10;
    uStack_150 = uVar11;
    lStack_148 = lVar12;
    uStack_140 = uVar9;
    func_0x000102850218(&uStack_1b0);
    lStack_a8 = lStack_148;
    uStack_b0 = uStack_150;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_80 = uStack_120;
    uStack_e8 = uStack_188;
    lStack_f0 = lStack_190;
    uStack_d8 = uStack_178;
    lStack_e0 = lStack_180;
    lStack_c8 = lStack_168;
    lStack_d0 = lStack_170;
    lStack_b8 = lStack_158;
    uStack_c0 = uStack_160;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_f8 = uStack_198;
    uStack_100 = uStack_1a0;
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar5 = 6;
    func_0x000104515e00(6,2,10,0x11);
    func_0x00010451c820(0);
    FUN_102850224(&uStack_240,auStack_2d0);
    puVar6 = &uStack_110;
    func_0x000104517bc0();
    func_0x000104515b14(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    func_0x000107c615f0(lVar2);
    func_0x0001045158a8(puVar6,uVar5,0,lVar2);
    puVar7 = &UNK_110557810;
    func_0x000107c613fc(&UNK_110557810,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar1;
    *(undefined8 **)(puVar7 + 0x18) = puVar6;
    puVar8 = &UNK_110557838;
    func_0x000107c613fc(&UNK_110557838,0x20,7);
    *(undefined **)(puVar8 + 0x10) = &UNK_10dae4660;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    func_0x000107c615f0(lVar1);
    func_0x000107c61174(puVar6);
    uVar9 = 1;
    func_0x0001001ca524(1,0,0x3c,4,0,0,&UNK_10dae4670,puVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(uVar9);
    FUN_102850334(&uStack_240);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10284ec1c; end: 10284ef7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10284ec1c(undefined8 param_1,long param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar5 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    pcStack_b0 = FUN_10284ef7c;
    puStack_a8 = (undefined *)0x0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_110557850;
    ppuVar6 = &puStack_d0;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c408f0(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
  }
  else {
    puVar2 = PTR_PTR_1126b1ee0;
    func_0x000107c610f8();
    uVar4 = param_5;
    func_0x000107c5fadc(param_5,param_6);
    uVar3 = param_5;
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c47eb0();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c57400(puVar2);
    func_0x000107c61170(puVar5);
    puVar5 = param_3;
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5a344(puVar2);
    func_0x000107c61170(puVar5);
    puStack_d0 = param_3;
    uStack_c8 = param_4;
    func_0x000107c61434(param_4);
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    func_0x000107c5fb78(param_5,param_6);
    uVar3 = uStack_c8;
    uVar7 = *(undefined8 *)(param_2 + _DAT_112ec4498);
    puStack_c0 = puStack_d0;
    puStack_b8 = (undefined *)uStack_c8;
    pcStack_b0 = (code *)param_2;
    puStack_a8 = param_3;
    uStack_a0 = param_4;
    uStack_98 = param_5;
    uStack_90 = param_6;
    func_0x000107c6157c(uVar7);
    uVar4 = 0x112ec44f0;
    func_0x0001000285a8(0x112ec44f0,&UNK_10dae4678);
    func_0x000100075034(&uStack_80,FUN_10285037c,&puStack_d0,uVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c61574(uVar7);
    puVar5 = &UNK_110557888;
    func_0x000107c613fc(&UNK_110557888,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uStack_80;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    func_0x000107c6157c(uStack_80);
    func_0x000107c61174(puVar2);
    func_0x000107c615f0(param_1);
    uVar4 = 1;
    func_0x0001001ca524(1,0,0x3c,4,0,0,&UNK_10dae4688,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar5);
    puVar5 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    pcStack_b0 = FUN_10285040c;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1105578a0;
    ppuVar6 = &puStack_d0;
    puStack_a8 = (undefined *)uVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar1 = puStack_a8;
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c408f0(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uVar4);
  }
  return puVar5;
}



/* Entry: 10284ef7c; end: 10284ef7f;  */

void FUN_10284ef7c(void)

{
  return;
}



/* Entry: 10284ef80; end: 10284f02b;  */

void FUN_10284ef80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10284efe4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (plVar1,unaff_x22 + 0x10,param_2,PTR___sSiN_11034deb0);
  return;
}



/* Entry: 10284f02c; end: 10284f0a7;  */

void FUN_10284f02c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar2 = PTR_PTR_1126ab350;
    func_0x000107c610f8(PTR_PTR_1126ab350);
    func_0x000107c47b38((double)lVar3);
    func_0x000107c4d664(uVar1,param_2,puVar2);
    func_0x000107c3fedc(uVar1);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010284f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284f0a8; end: 10284f0c7;  */

void FUN_10284f0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284f0c8,0,0);
  return;
}



/* Entry: 10284f0c8; end: 10284f2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284f0c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *puVar10;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ec4488);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10284f300;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,0);
    puVar5 = PTR_PTR_1126b1ee0;
    func_0x000107c610f8(PTR_PTR_1126b1ee0);
    uVar6 = uVar7;
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c47eb0(puVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c57400(puVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c5fadc(uVar9,uVar2);
    func_0x000107c5a344(puVar5);
    func_0x000107c61170(uVar9);
    puVar8 = &UNK_110557900;
    func_0x000107c613fc(&UNK_110557900,0x18,7);
    puVar10 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar8 + 0x10) = lVar4;
    *(code **)(unaff_x22 + 0x70) = FUN_102850520;
    *(undefined **)(unaff_x22 + 0x78) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10284f3c4;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110557918;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c43230(0,0x4042800000000000,0xc05ec00000000000,0x4043000000000000,
                        0xc05e800000000000,0x4042800000000000,0xc05ec00000000000,lVar3);
    func_0x000107c60bd0(puVar10);
    func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010284f2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284f300; end: 10284f373;  */

void FUN_10284f300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10284f340,0,0);
  return;
}



/* Entry: 10284f374; end: 10284f3c3;  */

void FUN_10284f374(ulong param_1)

{
  long in_x5;
  
  if (param_1 != 0) {
    if (param_1 >> 0x3e == 0) {
      param_1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)param_1) {
        param_1 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
  }
  **(ulong **)(*(long *)(in_x5 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(in_x5);
  return;
}



/* Entry: 10284f3c4; end: 10284f4cb;  */

/* WARNING: Possible PIC construction at 0x00010284f4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284f4a8) */

void FUN_10284f3c4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_102850528(0,0x112ec4500,&PTR_PTR_1126b1e10);
    func_0x000107c5fc54(param_2,uVar3);
  }
  if (param_3 != 0) {
    uVar3 = 0;
    FUN_102850528(0,0x112ebac08,&PTR_PTR_1126b1ee0);
    func_0x000107c5fc54(param_3,uVar3);
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c6157c(uVar2);
  uVar4 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,param_3,param_4,uVar3,param_5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10284f4cc; end: 10284f65f;  */

void FUN_10284f4cc(undefined8 *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar4 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar4 * 8);
      func_0x000107c6157c(uVar5);
      func_0x000107c6142c(lVar6);
      goto LAB_10284f638;
    }
    func_0x000107c6142c(lVar6);
  }
  puVar1 = &UNK_110557770;
  func_0x000107c613fc(&UNK_110557770,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_5);
  puVar2 = &UNK_1105578d8;
  func_0x000107c613fc(&UNK_1105578d8,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_8;
  *(undefined8 *)(puVar2 + 0x30) = param_9;
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_9);
  uVar5 = 1;
  func_0x0001001ca524(1,0,0x3c,4,0,0,&UNK_10dae4698,puVar2,PTR___sSiN_11034deb0);
  func_0x000107c61574(puVar2);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(uVar5);
  lVar6 = *param_2;
  func_0x000107c61558(lVar6);
  lVar4 = *param_2;
  FUN_10284fa14(uVar5,param_3,param_4,lVar6);
  func_0x000107c6142c(param_4);
  *param_2 = lVar4;
LAB_10284f638:
  *param_1 = uVar5;
  return;
}



/* Entry: 10284f660; end: 10284f67f;  */

void FUN_10284f660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284f680,0,0);
  return;
}



/* Entry: 10284f680; end: 10284f7a3;  */

void FUN_10284f680(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x58) = lVar5;
  if (lVar5 != 0) {
    plVar4 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = 0x10284f718;
    lVar1 = *(long *)(unaff_x22 + 0x48);
    lVar2 = *(long *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(unaff_x22 + 0x40);
    plVar4[0x14] = *(long *)(unaff_x22 + 0x50);
    plVar4[0x15] = lVar5;
    plVar4[0x12] = lVar3;
    plVar4[0x13] = lVar1;
    plVar4[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10284f0c8,0,0);
    return;
  }
  **(undefined8 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010284f714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284f7a4; end: 10284f803; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin init] */

void FUN_10284f7a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VisitedByShareMessagePlugin.VisitedByShareMessagePlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10284f7d0);
  (*pcVar1)();
}



/* Entry: 10284f804; end: 10284f8bb; -[_TtC27VisitedByShareMessagePlugin27VisitedByShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010284f840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284f870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284f890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284f874) */
/* WARNING: Removing unreachable block (ram,0x00010284f844) */
/* WARNING: Removing unreachable block (ram,0x00010284f894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284f804(long param_1)

{
  func_0x000100d0a728(param_1 + _DAT_112ec4458);
  func_0x000100d0a728(param_1 + _DAT_112ec4460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4468));
  return;
}



/* Entry: 10284f8bc; end: 10284f8db;  */

void FUN_10284f8bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128660a0);
  return;
}



/* Entry: 10284f8dc; end: 10284f947;  */

void FUN_10284f8dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284f948,uVar1,uVar2);
  return;
}



/* Entry: 10284f948; end: 10284f98b;  */

void FUN_10284f948(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c4ab9c(uVar2,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010284f988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10284f98c; end: 10284f9c7;  */

void FUN_10284f98c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010284f9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10284f9c8; end: 10284fa13;  */

void FUN_10284f9c8(long param_1,undefined8 param_2)

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



/* Entry: 10284fa14; end: 10284fcd3;  */

void FUN_10284fa14(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10284faec);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10284fcd4(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10284fab4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010284fb64();
    lVar6 = *unaff_x20;
    goto joined_r0x00010284fb00;
  }
  lVar6 = *unaff_x20;
joined_r0x00010284fb00:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10284fb64);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10284fcd4; end: 10284ff6f;  */

void FUN_10284fcd4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ec44f8;
  func_0x0001000285a8(0x112ec44f8,&UNK_10dae46a0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10284ff3c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10284ff6c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10284ff3c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10284ff70);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10284ff70; end: 1028501e3;  */

undefined * FUN_10284ff70(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ec44f8,&UNK_10dae46a0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102850068);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10285006c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1028501e4; end: 102850223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028501e4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar7 = *(undefined **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar7 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    pcStack_b0 = FUN_10284ef7c;
    puStack_a8 = (undefined *)0x0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_110557850;
    ppuVar8 = &puStack_d0;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c408f0(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
  }
  else {
    puVar3 = PTR_PTR_1126b1ee0;
    func_0x000107c610f8();
    uVar4 = uVar1;
    func_0x000107c5fadc(uVar1,uVar9);
    uVar10 = uVar1;
    func_0x000107c5fadc(uVar1,uVar9);
    func_0x000107c47eb0();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c57400(puVar3);
    func_0x000107c61170(puVar5);
    puVar5 = puVar7;
    func_0x000107c5fadc(puVar7,uVar6);
    func_0x000107c5a344(puVar3);
    func_0x000107c61170(puVar5);
    puStack_d0 = puVar7;
    uStack_c8 = uVar6;
    func_0x000107c61434(uVar6);
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    func_0x000107c5fb78(uVar1,uVar9);
    uVar4 = uStack_c8;
    uVar10 = *(undefined8 *)(lVar2 + _DAT_112ec4498);
    puStack_c0 = puStack_d0;
    puStack_b8 = (undefined *)uStack_c8;
    pcStack_b0 = (code *)lVar2;
    puStack_a8 = puVar7;
    uStack_a0 = uVar6;
    uStack_98 = uVar1;
    uStack_90 = uVar9;
    func_0x000107c6157c(uVar10);
    uVar6 = 0x112ec44f0;
    func_0x0001000285a8(0x112ec44f0,&UNK_10dae4678);
    func_0x000100075034(&uStack_80,FUN_10285037c,&puStack_d0,uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c61574(uVar10);
    puVar7 = &UNK_110557888;
    func_0x000107c613fc(&UNK_110557888,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = uStack_80;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    *(undefined8 *)(puVar7 + 0x20) = param_1;
    func_0x000107c6157c(uStack_80);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(param_1);
    uVar6 = 1;
    func_0x0001001ca524(1,0,0x3c,4,0,0,&UNK_10dae4688,puVar7,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar7);
    puVar7 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    pcStack_b0 = FUN_10285040c;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1105578a0;
    ppuVar8 = &puStack_d0;
    puStack_a8 = (undefined *)uVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar5 = puStack_a8;
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(puVar5);
    func_0x000107c408f0(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uVar6);
  }
  return puVar7;
}



/* Entry: 102850224; end: 102850273;  */

undefined8 FUN_102850224(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ec44e8;
  func_0x0001000285a8(0x112ec44e8,&UNK_10dae4650);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102850274; end: 1028502c3;  */

void FUN_102850274(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028505ac;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284f948,lVar1,lVar2);
  return;
}



/* Entry: 1028502c4; end: 102850333;  */

void FUN_1028502c4(undefined8 param_1)

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
  plVar3[1] = 0x1028505a4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102850334; end: 10285037b;  */

undefined8 FUN_102850334(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ec44e8;
  func_0x0001000285a8(0x112ec44e8,&UNK_10dae4650);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10285037c; end: 10285039f;  */

void FUN_10285037c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10284f4cc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1028503a0; end: 10285040b;  */

void FUN_1028503a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1028505a8;
  plVar4[3] = lVar2;
  plVar4[4] = lVar5;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar4[5] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x10284efe4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (plVar3,plVar4 + 2,uVar1,PTR___sSiN_11034deb0);
  return;
}



/* Entry: 10285040c; end: 10285042f;  */

void FUN_10285040c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 102850430; end: 102850463;  */

void FUN_102850430(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102850464; end: 1028504e3;  */

void FUN_102850464(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1028504e4;
  plVar5[9] = lVar4;
  plVar5[10] = lVar6;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  plVar5[5] = param_1;
  plVar5[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284f680,0,0);
  return;
}



/* Entry: 1028504e4; end: 10285051f;  */

void FUN_1028504e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010285051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102850520; end: 102850527;  */

void FUN_102850520(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    if (param_1 >> 0x3e == 0) {
      param_1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)param_1) {
        param_1 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
  }
  **(ulong **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102850528; end: 102850567;  */

void FUN_102850528(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102850568; end: 1028505af;  */

/* WARNING: Possible PIC construction at 0x00010284df20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010284df24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850568(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_50 [32];
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c6157c(*(undefined8 *)(lVar1 + _DAT_112ec4498));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028505b0; end: 10285066b;  */

void FUN_1028505b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110557978;
  func_0x000107c613fc(&UNK_110557978,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1028508dc,puVar1);
  return;
}



/* Entry: 10285066c; end: 1028508db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285066c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  uVar3 = uStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000109021f44();
    func_0x000107c615e8(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x000100083b20(&uStack_68);
      uVar13 = *(undefined8 *)(uStack_68 + _DAT_11301aef0);
      func_0x000107c615f0(uVar13);
      func_0x000107c61170(uStack_68);
      func_0x000100083b20(&lStack_70);
      uVar6 = *(undefined8 *)(lStack_70 + _DAT_112fc5e78);
      func_0x000107c61174();
      func_0x000107c61170(lStack_70);
      func_0x000100083b20(&uStack_78);
      uVar7 = uStack_78;
      func_0x000107c4e7b4();
      func_0x000107c61180();
      func_0x000107c61170(uStack_78);
      func_0x000100083b20(&uStack_80);
      uVar8 = uStack_80;
      func_0x000107c4e26c();
      func_0x000107c61180();
      func_0x000107c61170(uStack_80);
      lVar9 = 0;
      FUN_10284f8bc();
      lVar10 = lVar9;
      func_0x000107c610f8();
      func_0x000107c61614(lVar10 + _DAT_112ec4458,0);
      func_0x000107c61614(lVar10 + _DAT_112ec4460,0);
      *(undefined8 *)(lVar10 + _DAT_112ec4468) = 0;
      *(undefined8 *)(lVar10 + _DAT_112ec4470) = 0;
      lVar1 = _DAT_112ec4498;
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10284ff70();
      puStack_88 = puVar11;
      func_0x0001000285a8(0x112ec4508,&UNK_10dae46d8);
      func_0x000107c613fc();
      ppuVar12 = &puStack_88;
      func_0x00010006c248();
      *(undefined ***)(lVar10 + lVar1) = ppuVar12;
      lVar1 = _DAT_112ec44a0;
      puVar11 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar10 + lVar1) = puVar11;
      *(undefined8 *)(lVar10 + _DAT_112ec4478) = uVar13;
      *(undefined8 *)(lVar10 + _DAT_112ec4480) = uVar6;
      *(undefined8 *)(lVar10 + _DAT_112ec4488) = uVar7;
      *(undefined8 *)(lVar10 + _DAT_112ec4490) = uVar8;
      plVar5 = &lStack_98;
      lStack_98 = lVar10;
      lStack_90 = lVar9;
      func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    }
    else {
      plVar5 = (long *)0x0;
    }
    *param_1 = (long)plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028508dc);
  (*pcVar2)();
}



/* Entry: 1028508dc; end: 1028508fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028508dc(long *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar4 = uStack_68;
  uVar3 = uStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000109021f44();
    func_0x000107c615e8(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x000100083b20(&uStack_68);
      uVar13 = *(undefined8 *)(uStack_68 + _DAT_11301aef0);
      func_0x000107c615f0(uVar13);
      func_0x000107c61170(uStack_68);
      func_0x000100083b20(&lStack_70);
      uVar6 = *(undefined8 *)(lStack_70 + _DAT_112fc5e78);
      func_0x000107c61174();
      func_0x000107c61170(lStack_70);
      func_0x000100083b20(&uStack_78);
      uVar7 = uStack_78;
      func_0x000107c4e7b4();
      func_0x000107c61180();
      func_0x000107c61170(uStack_78);
      func_0x000100083b20(&uStack_80);
      uVar8 = uStack_80;
      func_0x000107c4e26c();
      func_0x000107c61180();
      func_0x000107c61170(uStack_80);
      lVar9 = 0;
      FUN_10284f8bc();
      lVar10 = lVar9;
      func_0x000107c610f8();
      func_0x000107c61614(lVar10 + _DAT_112ec4458,0);
      func_0x000107c61614(lVar10 + _DAT_112ec4460,0);
      *(undefined8 *)(lVar10 + _DAT_112ec4468) = 0;
      *(undefined8 *)(lVar10 + _DAT_112ec4470) = 0;
      lVar1 = _DAT_112ec4498;
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10284ff70();
      puStack_88 = puVar11;
      func_0x0001000285a8(0x112ec4508,&UNK_10dae46d8);
      func_0x000107c613fc();
      ppuVar12 = &puStack_88;
      func_0x00010006c248();
      *(undefined ***)(lVar10 + lVar1) = ppuVar12;
      lVar1 = _DAT_112ec44a0;
      puVar11 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar10 + lVar1) = puVar11;
      *(undefined8 *)(lVar10 + _DAT_112ec4478) = uVar13;
      *(undefined8 *)(lVar10 + _DAT_112ec4480) = uVar6;
      *(undefined8 *)(lVar10 + _DAT_112ec4488) = uVar7;
      *(undefined8 *)(lVar10 + _DAT_112ec4490) = uVar8;
      plVar5 = &lStack_98;
      lStack_98 = lVar10;
      lStack_90 = lVar9;
      func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    }
    else {
      plVar5 = (long *)0x0;
    }
    *param_1 = (long)plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028508dc);
  (*pcVar2)();
}



/* Entry: 1028508fc; end: 10285090b; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028508fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4510));
  return;
}



/* Entry: 10285090c; end: 10285094b; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin setActiveConversationIdObservable:] */

void FUN_10285090c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10285094c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10285094c; end: 102850a8b;  */

/* WARNING: Possible PIC construction at 0x000102850980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102850a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102850a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102850a34) */
/* WARNING: Removing unreachable block (ram,0x000102850984) */
/* WARNING: Removing unreachable block (ram,0x000102850a70) */
/* WARNING: Removing unreachable block (ram,0x00010285098c) */
/* WARNING: Removing unreachable block (ram,0x000102850a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285094c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4510);
  *(undefined8 *)(unaff_x20 + _DAT_112ec4510) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102850a8c; end: 102850b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850a8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ec4558);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x000100075034(FUN_102850b20,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102850b20; end: 102850b57;  */

void FUN_102850b20(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  *param_1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 102850b58; end: 102850b67; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4518));
  return;
}



/* Entry: 102850b68; end: 102850b9b; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4518);
  *(undefined8 *)(param_1 + _DAT_112ec4518) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102850b9c; end: 102850bab; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4520));
  return;
}



/* Entry: 102850bac; end: 102850bdf; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4520);
  *(undefined8 *)(param_1 + _DAT_112ec4520) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102850be0; end: 102850bff; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin playbackPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850be0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102850c00; end: 102850c13; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin setPlaybackPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102850c00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4528,param_3);
  return;
}



/* Entry: 102850c14; end: 1028515bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102850c14(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long unaff_x20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar23 = *(ulong *)(unaff_x20 + _DAT_112ec4550);
  uVar2 = uVar23;
  uVar11 = param_2;
  func_0x000107c4ce08(uVar23,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar3 == 0) {
LAB_102850ed0:
    func_0x000107c615e8(uVar2);
    return 0;
  }
  uVar25 = uVar3;
  func_0x000107c404a8();
  func_0x000107c61170(uVar3);
  if ((int)uVar25 != 5) goto LAB_102850ed0;
  uVar3 = uVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar3 == 0) goto LAB_102850ed0;
  uVar25 = uVar3;
  func_0x000107c5a934();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028515bc);
    (*pcVar1)();
  }
  uVar3 = uVar25;
  func_0x000107c4ccc8();
  func_0x000107c61180();
  func_0x000107c61170(uVar25);
  if (uVar3 == 0) goto LAB_102850ed0;
  puVar4 = PTR_PTR_1126ab358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar25 = uVar3;
  func_0x000107c5c07c(uVar3);
  func_0x000107c61180();
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(uVar25);
  uVar25 = uVar2;
  func_0x000107c4ca8c();
  func_0x000107c61180();
  if (uVar25 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar5 = 0;
    FUN_102851ef8(0,0x112d64e68,&PTR_PTR_1126b4628);
    uVar11 = uVar25;
    func_0x000107c5fc54(uVar25,uVar5);
    func_0x000107c61170(uVar25);
    if (uVar11 >> 0x3e == 0) {
      uVar25 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
      if (uVar25 == 0) goto LAB_102850f34;
LAB_102850d8c:
      puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102851edc(0,uVar25 & ((long)uVar25 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028515b8);
        (*pcVar1)();
      }
      uVar24 = 0;
      do {
        puVar22 = puStack_a0;
        if ((uVar11 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar11 + uVar24 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar24;
          FUN_102851d18();
        }
        uVar7 = uVar2;
        func_0x000107c40258(uVar2);
        func_0x000107c61180();
        uVar8 = uVar2;
        func_0x000107c3dc7c(uVar2);
        func_0x000107c61180();
        uVar9 = uVar2;
        func_0x000107c40674(uVar2);
        func_0x000107c61180();
        uVar10 = uVar6;
        func_0x000107c5caf0();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar9);
        uVar6 = *(ulong *)(puVar22 + 0x10);
        puStack_a0 = puVar22;
        if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar6) {
          FUN_102851edc(1 < *(ulong *)(puVar22 + 0x18),uVar6 + 1,1);
        }
        puVar13 = puStack_a0;
        uVar24 = uVar24 + 1;
        *(ulong *)(puStack_a0 + 0x10) = uVar6 + 1;
        *(ulong *)(puStack_a0 + uVar6 * 8 + 0x20) = uVar10;
      } while (uVar25 != uVar24);
      func_0x000107c6142c(uVar11);
    }
    else {
      uVar25 = uVar11 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar11) {
        uVar25 = uVar11;
      }
      func_0x000107c60480();
      if (uVar25 != 0) goto LAB_102850d8c;
LAB_102850f34:
      func_0x000107c6142c(uVar11);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar11 = 0;
    FUN_102851ef8(0,0x112ec3648,&PTR_PTR_1126d9fa8);
    puVar22 = puVar13;
    func_0x000107c5fc48(puVar13);
    func_0x000107c6142c(puVar13);
  }
  func_0x000107c564b0(puVar4);
  func_0x000107c61170(puVar22);
  uVar25 = uVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar25 != 0) {
    func_0x000107c4ca5c();
    func_0x000108543690();
    puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c59558(puVar4);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(puVar22);
  }
  uVar25 = uVar2;
  func_0x000107c40258();
  func_0x000107c61180();
  uVar24 = uVar25;
  func_0x000107c5faec();
  func_0x000107c61170(uVar25);
  lVar21 = _DAT_112ec4558;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec4558);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(&puStack_a0);
  func_0x000107c61574(uVar5);
  puVar22 = puStack_a0;
  if (*(long *)(puStack_a0 + 0x10) == 0) {
LAB_102851088:
    func_0x000107c6142c(puVar22);
    func_0x0001000285a8(0x112ec26e8,&UNK_10dae0a60);
    func_0x000107c613fc();
    uVar5 = 1;
    func_0x00010008747c();
    uVar17 = *(undefined8 *)(unaff_x20 + lVar21);
    puStack_90 = (undefined *)uVar24;
    puStack_88 = (undefined *)uVar11;
    pcStack_80 = (code *)uVar5;
    func_0x000107c6157c(uVar17);
    ppuVar20 = &puStack_a0;
    func_0x000100075034(0x102851cc0,ppuVar20,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar17);
    func_0x000107c6142c(uVar11);
  }
  else {
    func_0x000107c61434(puStack_a0);
    uVar25 = uVar24;
    uVar6 = uVar11;
    func_0x000100029284();
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(puVar22);
      goto LAB_102851088;
    }
    uVar5 = *(undefined8 *)(*(long *)(puVar22 + 0x38) + uVar25 * 8);
    func_0x000107c6157c(uVar5);
    func_0x000107c6142c(uVar11);
    ppuVar20 = (undefined **)0x2;
    func_0x000107c61430(puVar22);
  }
  puStack_a0 = param_1;
  func_0x000100087c34(&puStack_a0);
  uVar11 = uVar2;
  func_0x000107c40258();
  func_0x000107c61180();
  uVar25 = uVar11;
  func_0x000107c5faec();
  ppuVar14 = ppuVar20;
  func_0x000107c61170(uVar11);
  uVar11 = uVar2;
  func_0x000107c4cde0();
  func_0x000107c61180();
  uVar24 = uVar11;
  func_0x000107c5faec();
  func_0x000107c61170(uVar11);
  puVar12 = PTR_PTR_1126ab360;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar22 = &UNK_110557a68;
  func_0x000107c613fc(&UNK_110557a68,0x18,7);
  func_0x000107c61614(puVar22 + 0x10,unaff_x20);
  puVar13 = &UNK_110557a90;
  func_0x000107c613fc(&UNK_110557a90,0x40,7);
  *(undefined **)(puVar13 + 0x10) = puVar22;
  *(ulong *)(puVar13 + 0x18) = uVar25;
  *(undefined ***)(puVar13 + 0x20) = ppuVar20;
  *(ulong *)(puVar13 + 0x28) = uVar24;
  *(undefined ***)(puVar13 + 0x30) = ppuVar14;
  *(ulong *)(puVar13 + 0x38) = param_2;
  pcStack_80 = FUN_102851cdc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1012935d4;
  puStack_88 = &UNK_110557aa8;
  ppuVar14 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar22 = puStack_78;
  func_0x000107c61434(ppuVar20);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar22);
  func_0x000107c56ea0(puVar12);
  func_0x000107c60bd0(ppuVar14);
  lVar21 = *(long *)(unaff_x20 + _DAT_112ec4520);
  if (lVar21 == 0) {
    func_0x000107c6142c(ppuVar20);
    uVar17 = 0;
  }
  else {
    func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
    func_0x000107c61174(lVar21);
    lVar15 = lVar21;
    func_0x0001000b637c();
    func_0x000107c61170(lVar21);
    puVar22 = &UNK_110557b08;
    func_0x000107c613fc(&UNK_110557b08,0x20,7);
    *(ulong *)(puVar22 + 0x10) = uVar25;
    *(undefined ***)(puVar22 + 0x18) = ppuVar20;
    uVar17 = 0x102851d10;
    func_0x0001000c0ebc(0x102851d10,puVar22);
    func_0x000107c61574(lVar15);
    func_0x000107c61574(puVar22);
    uVar16 = 0;
    FUN_102851ef8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pcVar1 = FUN_102851838;
    func_0x0001000bfde0(FUN_102851838,0,uVar16);
    func_0x000107c61574(uVar17);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar1);
    uVar16 = uVar17;
    func_0x000107c421ac(uVar17);
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    uVar17 = uVar16;
    func_0x000107c5cb24(uVar16);
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
  }
  func_0x000107c56660(puVar12);
  func_0x000107c61170(uVar17);
  puVar22 = &UNK_110557ae0;
  func_0x000107c613fc(&UNK_110557ae0,0x18,7);
  *(ulong *)(puVar22 + 0x10) = uVar23;
  uVar16 = 0;
  FUN_102851ef8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c615f0(uVar23);
  uVar17 = 0x102851d08;
  func_0x0001000bfde0(0x102851d08,puVar22,uVar16);
  func_0x000107c61574(puVar22);
  func_0x0001004575f0();
  func_0x000107c61574(uVar17);
  puVar13 = puVar22;
  func_0x000107c421ac(puVar22);
  func_0x000107c61180();
  func_0x000107c61170(puVar22);
  puVar22 = puVar13;
  func_0x000107c5cb24(puVar13);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c5664c(puVar12);
  func_0x000107c61170(puVar22);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112ec4548);
  func_0x000107c5c734(uVar17);
  func_0x000107c61180();
  func_0x000107c54244(puVar12);
  func_0x000107c615e8(uVar17);
  lVar21 = *(long *)(unaff_x20 + _DAT_112ec4530);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar21 != 0) {
    lVar15 = lVar21;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar21);
    if (lVar15 != 0) {
      lVar21 = lVar15;
      func_0x0001065c2f88(lVar15,*(undefined8 *)(unaff_x20 + _DAT_112ec4538));
      func_0x000107c61180();
      func_0x000107c615e8(lVar15);
      goto LAB_1028514d8;
    }
  }
  lVar21 = 0;
LAB_1028514d8:
  func_0x000107c5942c(puVar12);
  func_0x000107c615e8(lVar21);
  uVar17 = 0x112ec4590;
  uVar18 = 0;
  FUN_102851ef8(0,0x112ec4590,&PTR_PTR_1126ab368);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar16 = uVar18;
  func_0x000107c5faec();
  func_0x000107c61170(uVar18);
  uVar18 = 0;
  FUN_102851ef8(0,0x112ec4598,&PTR_PTR_1126ab358);
  uVar19 = 0;
  puStack_a0 = puVar4;
  puStack_88 = (undefined *)uVar18;
  FUN_102851ef8(0,0x112ec45a0,&PTR_PTR_1126ab360);
  apuStack_c0[0] = puVar12;
  uStack_a8 = uVar19;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar16,uVar17,&puStack_a0,apuStack_c0);
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar3);
  return uVar16;
}



/* Entry: 1028515bc; end: 1028517ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028515bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar7 = param_7;
    func_0x0001070b1c70();
    if ((uVar7 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + _DAT_112ec4540);
      func_0x000107c5fadc(uVar1,((undefined8 *)(param_2 + _DAT_112ec4540))[1]);
      func_0x0001070b1d3c(param_7,uVar1);
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
    }
    else {
      param_7 = 0;
    }
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(param_5,param_6);
    if (param_7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_7;
      func_0x000107c5d984(param_7);
      func_0x000107c61180();
    }
    puVar2 = PTR_PTR_1126c6a60;
    func_0x000107c61168();
    func_0x000107c4cccc();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(uVar7);
    pcVar3 = "playMedia(messageId:messageSenderId:participants:view:)";
    func_0x0001000c10c0("playMedia(messageId:messageSenderId:participants:view:)");
    func_0x000107c61180();
    puVar4 = &UNK_110557a68;
    func_0x000107c613fc(&UNK_110557a68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_2);
    puVar5 = &UNK_110557b30;
    func_0x000107c613fc(&UNK_110557b30,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined **)(puVar5 + 0x20) = puVar2;
    pcStack_78 = FUN_10285206c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110557b48;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_70;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_7);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1028517f0; end: 102851837;  */

undefined8 FUN_1028517f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102851838; end: 10285192f;  */

void FUN_102851838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_102851ef8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c453dc();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001070b31f8();
  func_0x000107c61170(uVar2);
  func_0x000107c6010c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102851930; end: 1028519a7; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102851930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102850c14(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028519a8; end: 1028519bf; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028519bc) */

void FUN_1028519a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028519c0; end: 1028519c7; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin pluginType] */

undefined8 FUN_1028519c0(void)

{
  return 0;
}



/* Entry: 1028519c8; end: 102851a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028519c8(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ec4528;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      if (param_2 != 0) {
        func_0x000107c5de64(param_2);
        func_0x000107c61180();
      }
      func_0x000107c4efb0(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102851a78; end: 102851b07;  */

void FUN_102851a78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61434(param_3);
  func_0x000107c6157c(param_4);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_1027f6fa0(param_4,param_2,param_3,uVar1);
  func_0x000107c6142c(param_3);
  *param_1 = uVar2;
  return;
}



/* Entry: 102851b08; end: 102851b67; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin init] */

void FUN_102851b08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesStoryMessagePlugin.MemoriesStoryMessagePlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102851b34);
  (*pcVar1)();
}



/* Entry: 102851b68; end: 102851c33; -[_TtC26MemoriesStoryMessagePlugin26MemoriesStoryMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102851b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102851ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102851bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102851bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102851bc8) */
/* WARNING: Removing unreachable block (ram,0x000102851ba8) */
/* WARNING: Removing unreachable block (ram,0x000102851b88) */
/* WARNING: Removing unreachable block (ram,0x000102851bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102851b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4510));
  return;
}



/* Entry: 102851c34; end: 102851cdb;  */

void FUN_102851c34(void)

{
  func_0x000107c61168(&PTR_PTR_1128661a8);
  return;
}



/* Entry: 102851cdc; end: 102851d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102851cdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(ulong *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar13 = uVar12;
    func_0x0001070b1c70();
    if ((uVar13 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112ec4540);
      func_0x000107c5fadc(uVar4,((undefined8 *)(lVar3 + _DAT_112ec4540))[1]);
      func_0x0001070b1d3c(uVar12,uVar4);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
    }
    else {
      uVar12 = 0;
    }
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c5fadc(uVar6,uVar2);
    if (uVar12 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar12;
      func_0x000107c5d984(uVar12);
      func_0x000107c61180();
    }
    puVar7 = PTR_PTR_1126c6a60;
    func_0x000107c61168();
    func_0x000107c4cccc();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar13);
    pcVar8 = "playMedia(messageId:messageSenderId:participants:view:)";
    func_0x0001000c10c0("playMedia(messageId:messageSenderId:participants:view:)");
    func_0x000107c61180();
    puVar9 = &UNK_110557a68;
    func_0x000107c613fc(&UNK_110557a68,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,lVar3);
    puVar10 = &UNK_110557b30;
    func_0x000107c613fc(&UNK_110557b30,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    *(undefined **)(puVar10 + 0x20) = puVar7;
    pcStack_78 = FUN_10285206c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110557b48;
    ppuVar11 = &puStack_98;
    puStack_70 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_70;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(pcVar8);
  }
  return;
}



/* Entry: 102851d18; end: 102851edb;  */

ulong FUN_102851d18(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102851dfc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102851e00);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b4628;
    func_0x000107c61168(PTR_PTR_1126b4628);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b4628;
    func_0x000107c61168(PTR_PTR_1126b4628);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102851ef8(0,0x112d64e68,&PTR_PTR_1126b4628);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102851edc);
  (*pcVar2)();
}



/* Entry: 102851edc; end: 102851ef7;  */

void FUN_102851edc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102851f38();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102851ef8; end: 102851f37;  */

void FUN_102851ef8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102851f38; end: 10285206b;  */

undefined * FUN_102851f38(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10285206c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000102851c54();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102851ef8(0,0x112ec3648,&PTR_PTR_1126d9fa8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10285206c; end: 10285208f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285206c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec4528;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      if (lVar3 != 0) {
        func_0x000107c5de64(lVar3);
        func_0x000107c61180();
      }
      func_0x000107c4efb0(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102852090; end: 10285214b;  */

void FUN_102852090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110557ba8;
  func_0x000107c613fc(&UNK_110557ba8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1028523d8,puVar1);
  return;
}



/* Entry: 10285214c; end: 1028523d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285214c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 uVar12;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar4 = uStack_70;
  func_0x000107c3f958();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_78);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&lStack_80);
  uVar6 = *(undefined8 *)(lStack_80 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&lStack_88);
  uVar12 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar12);
  func_0x000107c61170(lStack_88);
  lVar7 = 0;
  FUN_102851c34();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112ec4510) = 0;
  *(undefined8 *)(lVar8 + _DAT_112ec4518) = 0;
  *(undefined8 *)(lVar8 + _DAT_112ec4520) = 0;
  func_0x000107c61614(lVar8 + _DAT_112ec4528,0);
  lVar2 = _DAT_112ec4558;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  puStack_90 = puVar9;
  func_0x0001000285a8(0x112ec2720,&UNK_10dae0ac0);
  func_0x000107c613fc();
  ppuVar10 = &puStack_90;
  func_0x00010006c248();
  *(undefined ***)(lVar8 + lVar2) = ppuVar10;
  lVar2 = _DAT_112ec4560;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112ec4530) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112ec4538) = uVar4;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ec4540);
  *puVar1 = uVar5;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar8 + _DAT_112ec4548) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112ec4550) = uVar12;
  plVar11 = &lStack_a0;
  lStack_a0 = lVar8;
  lStack_98 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 1028523d8; end: 1028523f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028523d8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar12,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar3 = uStack_68;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar4 = uStack_70;
  func_0x000107c3f958();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_78);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&lStack_80);
  uVar6 = *(undefined8 *)(lStack_80 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&lStack_88);
  uVar13 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lStack_88);
  lVar7 = 0;
  FUN_102851c34();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112ec4510) = 0;
  *(undefined8 *)(lVar8 + _DAT_112ec4518) = 0;
  *(undefined8 *)(lVar8 + _DAT_112ec4520) = 0;
  func_0x000107c61614(lVar8 + _DAT_112ec4528,0);
  lVar2 = _DAT_112ec4558;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  puStack_90 = puVar9;
  func_0x0001000285a8(0x112ec2720,&UNK_10dae0ac0);
  func_0x000107c613fc();
  ppuVar10 = &puStack_90;
  func_0x00010006c248();
  *(undefined ***)(lVar8 + lVar2) = ppuVar10;
  lVar2 = _DAT_112ec4560;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112ec4530) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112ec4538) = uVar4;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ec4540);
  *puVar1 = uVar5;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar8 + _DAT_112ec4548) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112ec4550) = uVar13;
  plVar11 = &lStack_a0;
  lStack_a0 = lVar8;
  lStack_98 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 1028523f8; end: 10285297f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028523f8(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uStack_120;
  char *pcStack_118;
  undefined4 uStack_10c;
  code *pcStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
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
  
  lVar13 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_120 - extraout_x8;
  uVar3 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(uVar3 - 8);
  lVar13 = *(long *)(lVar17 + 0x40);
  uVar10 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar5 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12;
  func_0x000104042d28();
  uVar10 = uVar10 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
    func_0x000107c6142c(puVar7);
    func_0x000107c5d7e8(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000107c5edd0(lVar5);
  func_0x000107c6142c(puVar7);
  lVar4 = lVar5;
  (**(code **)(lVar17 + 0x30))(lVar5,1,uVar3);
  if ((int)lVar4 == 1) {
    func_0x0001000293e4(lVar5);
  }
  else {
    pcVar14 = *(code **)(lVar17 + 0x20);
    (*pcVar14)(lVar11,lVar5,uVar3);
    uVar10 = unaff_x20 + _DAT_112ec45e0;
    func_0x000107c61618();
    if (uVar10 != 0) {
      iVar2 = *(int *)(unaff_x20 + _DAT_112ec45b0);
      uStack_100 = uVar10;
      func_0x000104042d78();
      pcStack_108 = pcVar14;
      if ((((uint)uVar10 & 0xff) - 1 < 2) || (((uVar10 & 0xff) == 0 && (iVar2 != 2)))) {
        func_0x000104042db8();
        if ((uVar10 & 1) == 0) {
          lVar5 = lVar11;
          FUN_102852bb0(lVar11,*(undefined8 *)(unaff_x20 + _DAT_112ec45b8));
          uStack_10c = (undefined4)lVar5;
          uStack_120 = 0;
        }
        else {
          uStack_120 = 0;
          uStack_10c = 1;
        }
      }
      else {
        uStack_10c = 0;
        uStack_120 = 1;
      }
      (**(code **)(unaff_x20 + _DAT_112ec45d0))(&uStack_c8);
      pcVar6 = "openUrl(with:)";
      func_0x0001000c10c0();
      func_0x000107c61180();
      puVar7 = &UNK_110557c98;
      pcStack_118 = pcVar6;
      func_0x000107c613fc(&UNK_110557c98,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      (**(code **)(lVar17 + 0x10))(lVar12,lVar11,uVar3);
      uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
      uVar16 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
      lVar13 = uVar16 + lVar13;
      uVar15 = lVar13 + 0x17U & 0xfffffffffffffff8;
      puVar8 = &UNK_110557cc0;
      func_0x000107c613fc(&UNK_110557cc0,uVar15 + 0x68,uVar10 | 7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      (*pcStack_108)(puVar8 + uVar16,lVar12,uVar3);
      uVar10 = uStack_100;
      *(undefined8 *)(puVar8 + (lVar13 + 7U & 0xfffffffffffffff8)) = uStack_120;
      *(byte *)((long)(puVar8 + (lVar13 + 7U & 0xfffffffffffffff8)) + 8) = (byte)uStack_10c & 1;
      puVar1 = (undefined8 *)(puVar8 + uVar15);
      puVar1[1] = uStack_c0;
      *puVar1 = uStack_c8;
      puVar1[3] = uStack_b0;
      puVar1[2] = uStack_b8;
      puVar1[9] = uStack_80;
      puVar1[8] = uStack_88;
      puVar1[0xb] = uStack_70;
      puVar1[10] = uStack_78;
      puVar1[5] = uStack_a0;
      puVar1[4] = uStack_a8;
      puVar1[7] = uStack_90;
      puVar1[6] = uStack_98;
      *(ulong *)(puVar8 + uVar15 + 0x60) = uStack_100;
      pcStack_d8 = FUN_102852d44;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0x42000000;
      puStack_e8 = &UNK_1000f6b44;
      puStack_e0 = &UNK_110557cd8;
      ppuVar9 = &puStack_f8;
      puStack_d0 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_d0;
      func_0x000107c615f0(uVar10);
      func_0x000107c61574(puVar7);
      pcVar6 = pcStack_118;
      func_0x000107c4e590(pcStack_118);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(uVar10);
      func_0x000107c615e8(pcVar6);
    }
    (**(code **)(lVar17 + 8))(lVar11,uVar3);
  }
  return;
}



/* Entry: 102852980; end: 1028529cf; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher openUrlWithUrlRequest:] */

/* WARNING: Possible PIC construction at 0x0001028529b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028529bc) */

void FUN_102852980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028523f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028529d0; end: 1028529d3; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher openHtmlWithHtmlRequest:] */

void FUN_1028529d0(void)

{
  return;
}



/* Entry: 1028529d4; end: 102852a33; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher init] */

void FUN_1028529d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BotResponseMessagePlugin.AdBotResponseWebLauncher",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102852a00);
  (*pcVar1)();
}



/* Entry: 102852a34; end: 102852b17; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102852a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102852ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102852af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102852ad4) */
/* WARNING: Removing unreachable block (ram,0x000102852ae0) */
/* WARNING: Removing unreachable block (ram,0x000102852a68) */
/* WARNING: Removing unreachable block (ram,0x000102852afc) */
/* WARNING: Removing unreachable block (ram,0x000102852acc) */
/* WARNING: Removing unreachable block (ram,0x000102852b04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102852a34(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec45b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec45c0));
  return;
}



/* Entry: 102852b18; end: 102852b37;  */

void FUN_102852b18(void)

{
  func_0x000107c61168(&PTR_PTR_1128662b8);
  return;
}



/* Entry: 102852b38; end: 102852b3b; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102852b38(void)

{
  return;
}



/* Entry: 102852b3c; end: 102852b3f; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher adAttachmentHandlerViewDidFullyAppear:] */

void FUN_102852b3c(void)

{
  return;
}



/* Entry: 102852b40; end: 102852b43; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_102852b40(void)

{
  return;
}



/* Entry: 102852b44; end: 102852b47; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102852b44(void)

{
  return;
}



/* Entry: 102852b48; end: 102852b4b; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher adAttachmentHandlerDidPresent:] */

void FUN_102852b48(void)

{
  return;
}



/* Entry: 102852b4c; end: 102852baf; -[_TtC24BotResponseMessagePlugin24AdBotResponseWebLauncher adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000102852b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102852b94) */

void FUN_102852b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102852ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102852bb0; end: 102852ce3;  */

undefined8 FUN_102852bb0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  
  uVar3 = param_2;
  func_0x000107c5edbc();
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5fb1c();
    func_0x000107c6142c(uVar3);
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 != 0) {
      puVar7 = (ulong *)(param_2 + 0x28);
      do {
        uVar1 = puVar7[-1];
        uVar2 = *puVar7;
        uVar3 = uVar1 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar3 = uVar2 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          if ((param_1 != uVar1 || uVar4 != uVar2) &&
             (uVar3 = param_1, func_0x000107c605b8(param_1,uVar4,uVar1,uVar2,0), (uVar3 & 1) == 0))
          {
            func_0x000107c61434(uVar2);
            func_0x000107c5fb78(uVar1,uVar2);
            uVar3 = 0;
            func_0x000107c5fbb8(0x2e,0xe100000000000000,param_1,uVar4);
            func_0x000107c6142c(0xe100000000000000);
            func_0x000107c6142c(uVar2);
            if ((uVar3 & 1) == 0) goto LAB_102852c10;
          }
          uVar5 = 1;
          goto LAB_102852cb8;
        }
LAB_102852c10:
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar5 = 0;
LAB_102852cb8:
    func_0x000107c6142c(uVar4);
  }
  return uVar5;
}



/* Entry: 102852ce4; end: 102852d43;  */

/* WARNING: Possible PIC construction at 0x000102852d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102852d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102852ce4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec45c0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112ec45e8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102852d44; end: 102852da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102852d44(void)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined1 *puVar12;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  func_0x000107c5ede0();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar11 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  lVar3 = uVar11 + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  uVar10 = lVar3 + 0x17U & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + (lVar3 + 7U & 0xfffffffffffffff8));
  uVar8 = *puVar1;
  bVar2 = *(byte *)(puVar1 + 1);
  uVar9 = *(undefined8 *)(unaff_x20 + (uVar10 + 0x67 & 0xffffffffffffff8));
  lVar3 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar12 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ec45c0;
  if (lVar7 != 0) {
    lVar4 = *(long *)(lVar7 + _DAT_112ec45c0);
    uStack_80 = uVar9;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      uVar5 = *(undefined8 *)(lVar7 + lVar3);
      func_0x000107c61174(uVar5);
      uVar9 = uVar5;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar9);
    }
    uVar9 = *(undefined8 *)(lVar7 + _DAT_112ec45c8);
    func_0x000107c614f0(uVar9);
    (**(code **)(lVar7 + _DAT_112ec45d8))
              (puVar12,unaff_x20 + uVar11,uVar8,bVar2 & 1,unaff_x20 + uVar10);
    lVar4 = lVar7;
    func_0x000107c61174();
    puVar6 = puVar12;
    func_0x00010418bbf4(puVar12,uStack_80,0xd000000000000013,0x800000010f0c2eb0,lVar7,0,0,uVar9);
    func_0x000107c61170(lVar4);
    FUN_102852dc4(puVar12);
    uVar8 = *(undefined8 *)(lVar7 + lVar3);
    func_0x000107c61174(uVar8);
    func_0x000107c42c1c();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar6);
    uVar8 = *(undefined8 *)(lVar4 + _DAT_112ec45e8);
    *(long *)(lVar4 + _DAT_112ec45e8) = lVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102852da8; end: 102852dc3;  */

void FUN_102852da8(long param_1,long param_2)

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



/* Entry: 102852dc4; end: 102852dff;  */

undefined8 FUN_102852dc4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91584();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102852e00; end: 102852eeb;  */

void FUN_102852e00(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  func_0x000104042ce8();
  if (param_1 == 0) {
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102852ec8);
      (*pcVar1)();
    }
    uVar3 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f0c2f10);
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  else if ((param_1 != 1) && (param_1 != 2)) {
    lStack_38 = param_1;
    func_0x000107c60614(&UNK_110739d60,&lStack_38,&UNK_110739d60,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102852eec);
    (*pcVar1)();
  }
  return;
}



/* Entry: 102852eec; end: 102853603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102852eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  uVar3 = 0x112e51d58;
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar12,uVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar12);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  if (lVar5 != 0) {
    uVar6 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f0c2ed0);
    uVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc48();
    lVar12 = lVar5;
    func_0x000107c5c15c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
    lVar7 = lVar12;
    func_0x000107c5fc54(lVar12,puVar8);
    func_0x000107c61170(lVar12);
    func_0x000107c61174();
    func_0x000100083b20(&lStack_68);
    puVar8 = &UNK_110557d10;
    func_0x000107c613fc(&UNK_110557d10,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = param_9;
    *(undefined8 *)(puVar8 + 0x18) = param_3;
    *(undefined8 *)(puVar8 + 0x20) = param_4;
    lVar9 = 0;
    FUN_102852b18();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar5 = _DAT_112ec45e0;
    func_0x000107c61614(lVar10 + _DAT_112ec45e0,0);
    *(undefined8 *)(lVar10 + _DAT_112ec45e8) = 0;
    *(undefined4 *)(lVar10 + _DAT_112ec45b0) = param_5;
    lVar12 = *(long *)(lVar7 + 0x10);
    if (lVar12 == 0) {
      func_0x000107c61434(param_4);
      func_0x000107c615f0(param_6);
      func_0x000107c6157c(param_2);
      func_0x000107c6142c(lVar7);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(param_4);
      func_0x000107c615f0(param_6);
      func_0x000107c6157c(param_2);
      func_0x000100403514(0,lVar12,0);
      puVar14 = (undefined8 *)(lVar7 + 0x28);
      do {
        puVar13 = puStack_70;
        uVar3 = puVar14[-1];
        uVar6 = *puVar14;
        func_0x000107c5fb1c();
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puStack_70 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
        }
        puVar13 = puStack_70;
        puVar14 = puVar14 + 2;
        *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_70 + uVar1 * 0x10 + 0x20) = uVar3;
        *(undefined8 *)(puStack_70 + uVar1 * 0x10 + 0x28) = uVar6;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      func_0x000107c6142c(lVar7);
    }
    *(undefined **)(lVar10 + _DAT_112ec45b8) = puVar13;
    *(undefined **)(lVar10 + _DAT_112ec45c0) = puVar4;
    *(long *)(lVar10 + _DAT_112ec45c8) = lStack_68;
    puVar14 = (undefined8 *)(lVar10 + _DAT_112ec45d0);
    *puVar14 = param_1;
    puVar14[1] = param_2;
    puVar14 = (undefined8 *)(lVar10 + _DAT_112ec45d8);
    *puVar14 = FUN_102853604;
    puVar14[1] = puVar8;
    func_0x000107c61604(lVar10 + lVar5,param_6);
    puVar13 = PTR_s_init_1125d9248;
    lStack_80 = lVar10;
    lStack_78 = lVar9;
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(param_2);
    lVar12 = lStack_68;
    func_0x000107c61174(lStack_68);
    func_0x000107c6157c(puVar8);
    plVar11 = &lStack_80;
    func_0x000107c61154(plVar11,puVar13);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar12);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar8);
    func_0x000107c615e8(param_6);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028532c4);
  (*pcVar2)();
}



/* Entry: 102853604; end: 10285360f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102853604(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_1b0 [4];
  uint uStack_18c;
  long lStack_188;
  long alStack_180 [2];
  undefined8 auStack_170 [12];
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  alStack_1b0[3] = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = 0;
  alStack_1b0[1] = param_2;
  alStack_1b0[2] = param_3;
  uStack_18c = param_4;
  lStack_188 = param_1;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = (long)alStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar5 + -8);
  alStack_1b0[0] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_f0 = *param_5;
  uVar8 = param_5[1];
  uStack_e0 = param_5[2];
  uVar2 = param_5[3];
  uStack_d0 = param_5[6];
  uVar3 = param_5[7];
  uStack_b8 = param_5[0xb];
  uStack_c0 = param_5[10];
  uStack_b0 = 0xd000000000000013;
  uStack_a8 = 0x800000010f0c2eb0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 1;
  uStack_88 = 0;
  uStack_f8 = param_5[5];
  uStack_100 = param_5[4];
  uStack_e8 = uVar8;
  uStack_d8 = uVar2;
  uStack_c8 = uVar3;
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  puVar6 = &uStack_100;
  lVar5 = (long)alStack_180;
  func_0x000101223174();
  func_0x000107c5eec4(lVar10);
  func_0x000107c5eeac();
  lVar7 = alStack_1b0[1];
  (**(code **)(lVar11 + 8))(lVar10,alStack_1b0[0]);
  uStack_78 = uStack_f8;
  uStack_80 = uStack_100;
  lVar11 = 0;
  func_0x000107c5ede0();
  pcVar13 = *(code **)(*(long *)(lVar11 + -8) + 0x10);
  (*pcVar13)(lVar12,lVar7,lVar11);
  lVar10 = alStack_1b0[3];
  uVar15 = param_5[9];
  uVar14 = param_5[8];
  *(long *)(lVar12 + *(int *)(lVar4 + 0x14)) = alStack_1b0[2];
  puVar1 = (undefined4 *)(lVar12 + *(int *)(lVar4 + 0x18));
  *puVar1 = 0;
  *(long *)(puVar1 + 2) = lVar10;
  *(undefined8 *)(puVar1 + 4) = uVar9;
  *(undefined8 *)(puVar1 + 6) = 0x21;
  uVar8 = uStack_80;
  *(undefined8 *)(puVar1 + 10) = uStack_78;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 **)(puVar1 + 0xc) = puVar6;
  *(long *)(puVar1 + 0xe) = lVar5;
  *(undefined1 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(lVar12 + *(int *)(lVar4 + 0x1c)) = 0;
  uVar3 = uStack_d8;
  uVar2 = uStack_e0;
  uVar8 = uStack_f0;
  puVar6 = (undefined8 *)(lVar12 + *(int *)(lVar4 + 0x20));
  uStack_110 = uVar14;
  uStack_108 = uVar15;
  puVar6[1] = uStack_e8;
  *puVar6 = uVar8;
  puVar6[3] = uVar3;
  puVar6[2] = uVar2;
  uVar3 = uStack_88;
  uVar2 = uStack_a0;
  uVar8 = CONCAT71(uStack_8f,uStack_90);
  puVar6[0xb] = uStack_98;
  puVar6[10] = uVar2;
  puVar6[0xd] = uVar3;
  puVar6[0xc] = uVar8;
  uVar3 = uStack_a8;
  uVar2 = uStack_b0;
  uVar8 = uStack_c0;
  puVar6[7] = uStack_b8;
  puVar6[6] = uVar8;
  puVar6[9] = uVar3;
  puVar6[8] = uVar2;
  uVar8 = uStack_d0;
  puVar6[5] = uStack_c8;
  puVar6[4] = uVar8;
  puVar6 = (undefined8 *)(lVar12 + *(int *)(lVar4 + 0x24));
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  uVar8 = param_5[8];
  puVar6 = (undefined8 *)(lVar12 + *(int *)(lVar4 + 0x28));
  puVar6[1] = param_5[9];
  *puVar6 = uVar8;
  *(undefined1 *)(lVar12 + *(int *)(lVar4 + 0x2c)) = 0;
  puVar6 = (undefined8 *)(lVar12 + *(int *)(lVar4 + 0x30));
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(lVar12 + *(int *)(lVar4 + 0x34)) = 0;
  lVar5 = lStack_188;
  if ((uStack_18c & 1) == 0) {
    FUN_102853610(lVar12,lStack_188);
    uVar8 = 0;
    func_0x000100b91584(0);
    func_0x000107c6159c(lVar5,uVar8,0);
  }
  else {
    (*pcVar13)(lStack_188,lVar7,lVar11);
    lVar7 = 0;
    func_0x000100b919a8();
    lVar4 = (long)*(int *)(lVar7 + 0x14);
    FUN_102853610(lVar12,lVar5 + lVar4);
    lVar10 = 0;
    func_0x000100b91acc();
    func_0x000107c6159c(lVar5 + lVar4,lVar10,0);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar5 + lVar4,0,1,lVar10);
    *(undefined8 *)(lVar5 + *(int *)(lVar7 + 0x18)) = 0;
    puVar6 = (undefined8 *)(lVar5 + *(int *)(lVar7 + 0x1c));
    puVar6[9] = uStack_a8;
    puVar6[8] = uStack_b0;
    puVar6[0xb] = uStack_98;
    puVar6[10] = uStack_a0;
    puVar6[0xd] = uStack_88;
    puVar6[0xc] = CONCAT71(uStack_8f,uStack_90);
    puVar6[1] = uStack_e8;
    *puVar6 = uStack_f0;
    puVar6[3] = uStack_d8;
    puVar6[2] = uStack_e0;
    puVar6[5] = uStack_c8;
    puVar6[4] = uStack_d0;
    puVar6[7] = uStack_b8;
    puVar6[6] = uStack_c0;
    uVar8 = 0;
    func_0x000100b91584(0);
    func_0x000107c6159c(lVar5,uVar8,2);
    func_0x000100e3eca0(&uStack_f0,alStack_180);
  }
  func_0x000101223174(&uStack_110,alStack_180);
  return;
}



/* Entry: 102853610; end: 102853653;  */

undefined8 FUN_102853610(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b915bc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}


