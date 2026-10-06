/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070d267c; end: 1070d2eeb;  */

void FUN_1070d267c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined2 uStack_e5;
  undefined1 uStack_e3;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (((param_3 & 1) == 0) && (param_4 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = puVar3;
    _dispatch_group_create();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      uVar27 = 0;
      do {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010c232e60();
        if (iVar1 != 0) {
          uVar8 = *(ulong *)(param_1 + 0x28);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar8;
          func_0x00010c083320();
          puVar9 = PTR_PTR_1126c4280;
          puVar12 = PTR_PTR_1126c4270;
          if ((int)uVar17 == 0) {
            _objc_retain(uVar8);
            _objc_opt_class(puVar12);
            uVar10 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar12);
            uVar17 = uVar8;
            if ((uVar10 & 1) == 0) {
              uVar17 = 0;
            }
            _objc_retain(uVar17);
            _objc_release(uVar8);
            uVar10 = uVar17;
            func_0x00010bfb6cc0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_88 = uVar10;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(puVar12);
            _objc_release(uVar10);
            uVar26 = 0xffffffffa9fc90cc;
            func_0x00010b77c6b4(0xffffffffa9fc90cc);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar26);
            uVar10 = uVar8;
            func_0x00010c0cc0c0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar17);
            uVar17 = uVar10;
            func_0x00010bf51e00(uVar10);
            func_0x00010befa120(puVar6);
          }
          else {
            _objc_retain(uVar8);
            _objc_opt_class(puVar9);
            uVar17 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar9);
            uVar11 = uVar8;
            if ((uVar17 & 1) == 0) {
              uVar11 = 0;
            }
            _objc_retain(uVar11);
            _objc_release(uVar8);
            func_0x00010c0df020();
            uVar10 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
            func_0x00010c25e980(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            uVar17 = uVar11;
            func_0x00010bf3f040(uVar11);
            func_0x00010b5fbca8();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar17);
            uVar17 = uVar8;
            func_0x00010c0cc0c0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            uVar11 = uVar17;
            func_0x00010bf51e00(uVar17);
            func_0x00010befa120(puVar6);
            _objc_release(uVar11);
          }
          _objc_release(uVar17);
          _objc_release(uVar10);
          lVar13 = *(long *)(param_1 + 0x20);
          func_0x00010bf16ce0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar13;
          func_0x00010c0d2420();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar7;
          func_0x00010c09df80();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar25;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010c2553e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          _objc_release(lVar25);
          _objc_release(lVar7);
          _objc_release(lVar13);
          lVar7 = lVar15;
          func_0x000107e00808();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) {
            _dispatch_group_enter(puVar4);
            uVar24 = *(undefined8 *)(param_1 + 0x20);
            lVar25 = lVar7;
            func_0x00010bf377a0(lVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar25;
            func_0x00010c254140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06c000(lVar7);
            uVar16 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010bf46560(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar26 = uVar16;
            func_0x00010bf3f860();
            _objc_retainAutoreleasedReturnValue();
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0xc2000000;
            pcStack_b0 = FUN_1070d2eec;
            puStack_a8 = &UNK_11098d628;
            _objc_retain(puVar5);
            puStack_a0 = puVar5;
            uStack_90 = uVar27;
            _objc_retain(puVar4);
            puStack_98 = puVar4;
            func_0x00010be1c5e0(uVar24);
            _objc_release(uVar26);
            _objc_release(uVar16);
            _objc_release(lVar14);
            _objc_release(lVar25);
            _objc_release(puStack_98);
            _objc_release(puStack_a0);
          }
          _objc_release(lVar7);
          _objc_release(lVar15);
          _objc_release(uVar8);
        }
        uVar17 = *(ulong *)(param_1 + 0x28);
        func_0x00010bf529e0();
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar17);
    }
    puVar12 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uStack_c8 = 0;
    puVar22 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_1070d305c;
    puStack_188 = &UNK_11098d7f8;
    uStack_100 = *(undefined8 *)(param_1 + 0x60);
    uStack_108 = *(undefined8 *)(param_1 + 0x58);
    uVar26 = *(undefined8 *)(param_1 + 0x38);
    puStack_180 = puVar2;
    puStack_178 = puVar5;
    puStack_170 = puVar19;
    puStack_168 = puVar12;
    puStack_160 = puVar9;
    puStack_158 = puVar18;
    _objc_retain(uVar26);
    uStack_148 = *(undefined8 *)(param_1 + 0x20);
    uStack_f0 = *(undefined8 *)(param_1 + 0x68);
    uStack_e8 = *(undefined2 *)(param_1 + 0x70);
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    uStack_150 = uVar26;
    puStack_140 = puVar21;
    _objc_retain(uVar16);
    uStack_e6 = *(undefined1 *)(param_1 + 0x72);
    puStack_f8 = &uStack_e0;
    uStack_e5 = *(undefined2 *)(param_1 + 0x73);
    uVar26 = *(undefined8 *)(param_1 + 0x48);
    uStack_138 = uVar16;
    puStack_130 = puVar20;
    puStack_128 = puVar3;
    _objc_retain(uVar26);
    uStack_e3 = *(undefined1 *)(param_1 + 0x75);
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    uStack_120 = uVar26;
    _objc_retain(uVar16);
    uVar26 = *(undefined8 *)(param_1 + 0x28);
    uStack_118 = uVar16;
    _objc_retain(uVar26);
    uStack_110 = uVar26;
    _objc_retain(puVar3);
    _objc_retain(puVar20);
    _objc_retain(puVar21);
    _objc_retain(puVar18);
    _objc_retain(puVar9);
    _objc_retain(puVar12);
    _objc_retain(puVar19);
    _objc_retain(puVar5);
    _objc_retain(puVar2);
    func_0x000100bc0718(puVar4,puVar23,&puStack_1a0);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(puStack_128);
    _objc_release(puStack_130);
    _objc_release(uStack_138);
    _objc_release(puStack_140);
    _objc_release(uStack_150);
    _objc_release(puStack_158);
    _objc_release(puStack_160);
    _objc_release(puStack_168);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
    _objc_release(puStack_180);
    _objc_release(puVar3);
    _objc_release(puVar20);
    _objc_release(puVar21);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar19);
    _objc_release(puVar5);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_e0);
  __Unwind_Resume();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar7 != 0) {
    puVar2 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_4 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar26);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_4 + 0x28));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s_location_112605490);
  return;
}



/* Entry: 1070d2eec; end: 1070d2feb;  */

void FUN_1070d2eec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_location_112605490);
  return;
}



/* Entry: 1070d2fec; end: 1070d2ff3;  */

void FUN_1070d2fec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_location_112605490);
  return;
}



/* Entry: 1070d2ff4; end: 1070d3023;  */

void FUN_1070d2ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c5ae0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 1070d3024; end: 1070d302b;  */

void FUN_1070d3024(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_createTime_1125b3ff0);
  return;
}



/* Entry: 1070d302c; end: 1070d305b;  */

void FUN_1070d302c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfbabe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1070d305c; end: 1070d38af;  */

void FUN_1070d305c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puStack_258;
  undefined *puStack_240;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar15 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x28);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      if (lVar2 != 0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar2);
      uVar15 = uVar15 + 1;
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar15 < uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar19 = (undefined *)0x0;
    do {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar3 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar14);
      uVar15 = uVar4;
      if ((uVar3 & 1) == 0) {
        uVar15 = 0;
      }
      _objc_retain(uVar15);
      _objc_release(uVar4);
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar14);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain();
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      puStack_240 = *(undefined **)(param_1 + 0x38);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puStack_240 == puVar14) {
        _objc_release(puStack_240);
        puStack_240 = (undefined *)0x0;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar9 = uVar8;
      func_0x00010010fab4(uVar8,PTR_DAT_1126a5938);
      uVar6 = uVar8;
      if ((int)uVar9 == 0) {
        uVar6 = 0;
      }
      _objc_retain();
      _objc_release(uVar8);
      puVar14 = puVar1;
      func_0x00010bf529e0();
      puVar20 = (undefined *)0x0;
      if (puVar19 < puVar14) {
        puVar20 = puVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar10 = *(undefined **)(param_1 + 0x48);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = *(undefined **)(param_1 + 0x48);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      puStack_258 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if (puVar11 == puVar14) {
        _objc_retain(puVar10);
        puStack_258 = puVar10;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x50);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_b0,lVar2);
        }
        uStack_c8 = uStack_a8;
        uStack_d0 = uStack_b0;
        uStack_c0 = uStack_a0;
        uVar9 = uStack_b0;
        _CMTimeGetSeconds(&uStack_d0);
        uVar13 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c0dfd40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf655c0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        _objc_release(lVar2);
        _objc_release(lVar12);
      }
      lVar12 = *(long *)(param_1 + 0x50);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_b0,lVar2);
      }
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_c0 = uStack_88;
      uVar9 = uStack_98;
      _CMTimeGetSeconds(&uStack_d0);
      _objc_release(lVar2);
      _objc_release(lVar12);
      if (puVar20 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar15;
        func_0x00010bf529e0();
        if (uVar4 != 0) {
          uVar4 = 0;
          do {
            func_0x00010befa120(puVar14);
            uVar4 = uVar4 + 1;
            uVar5 = uVar15;
            func_0x00010bf529e0();
          } while (uVar4 < uVar5);
        }
      }
      uVar13 = 0;
      _dispatch_semaphore_create();
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_1070d38b0;
      puStack_198 = &UNK_11098d798;
      uStack_f8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_d8 = *(undefined2 *)(param_1 + 0xb8);
      uVar21 = *(undefined8 *)(param_1 + 0x60);
      uVar17 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(*(undefined8 *)(param_1 + 0x60));
      uVar16 = *(undefined8 *)(param_1 + 0x68);
      uStack_190 = uVar17;
      uStack_188 = uVar21;
      uStack_180 = uVar3;
      uStack_178 = uVar15;
      _objc_retain(uVar16);
      uStack_d6 = *(undefined1 *)(param_1 + 0xba);
      uVar17 = *(undefined8 *)(param_1 + 0x70);
      uStack_170 = uVar16;
      _objc_retain(uVar17);
      uStack_110 = *(undefined8 *)(param_1 + 0xa8);
      uStack_d5 = *(undefined1 *)(param_1 + 0xbb);
      puStack_158 = puStack_258;
      uVar16 = *(undefined8 *)(param_1 + 0x50);
      uStack_168 = uVar17;
      uStack_160 = uVar13;
      _objc_retain(uVar16);
      uVar17 = *(undefined8 *)(param_1 + 0x78);
      uStack_150 = uVar16;
      puStack_f0 = puVar19;
      _objc_retain(uVar17);
      uStack_d4 = *(undefined1 *)(param_1 + 0xbc);
      uStack_d3 = (undefined1)uVar18;
      uStack_100 = *(undefined8 *)(param_1 + 0xa0);
      uStack_108 = *(undefined8 *)(param_1 + 0x98);
      puStack_128 = puStack_240;
      uStack_148 = uVar17;
      uStack_140 = uVar6;
      uStack_138 = uVar8;
      puStack_130 = puVar20;
      puStack_120 = puVar14;
      puStack_118 = puVar10;
      uStack_e8 = uVar7;
      uStack_e0 = uVar9;
      _objc_retain();
      _objc_retain(puVar14);
      _objc_retain(puStack_240);
      _objc_retain(puVar20);
      _objc_retain(uVar8);
      _objc_retain(uVar6);
      _objc_retain(puStack_258);
      _objc_retain(uVar13);
      _objc_retain(uVar15);
      _objc_retain(uVar3);
      func_0x000100162d98("APPSTORE",&puStack_1b0);
      _dispatch_semaphore_wait(uVar13,0xffffffffffffffff);
      _objc_release(puStack_118);
      _objc_release(puStack_120);
      _objc_release(puStack_128);
      _objc_release(puStack_130);
      _objc_release(uStack_138);
      _objc_release(uStack_140);
      _objc_release(uStack_148);
      _objc_release(uStack_150);
      _objc_release(puStack_158);
      _objc_release(uStack_160);
      _objc_release(uStack_168);
      _objc_release(uStack_170);
      _objc_release(uStack_178);
      _objc_release(uStack_180);
      _objc_release(uStack_188);
      _objc_release(puVar14);
      _objc_release(puStack_240);
      _objc_release(puVar20);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(puStack_258);
      _objc_release(uVar13);
      _objc_release(uVar15);
      _objc_release(uVar3);
      _objc_release(puVar10);
      puVar19 = puVar19 + 1;
      puVar14 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (puVar19 < puVar14);
  }
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1070d4734;
  puStack_200 = &UNK_11098d7c8;
  uVar18 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = uVar18;
  _objc_retain(uVar6);
  uStack_1b8 = *(undefined1 *)(param_1 + 0xba);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = uVar6;
  _objc_retain(uVar18);
  uStack_1b7 = *(undefined1 *)(param_1 + 0xb8);
  uStack_1b6 = *(undefined1 *)(param_1 + 0xbd);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uStack_1e0 = uVar18;
  _objc_retain(uVar6);
  uVar18 = *(undefined8 *)(param_1 + 0x90);
  uStack_1d8 = uVar6;
  _objc_retain(uVar18);
  uStack_1b5 = *(undefined1 *)(param_1 + 0xb9);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uStack_1d0 = uVar18;
  _objc_retain(uVar6);
  uStack_1c8 = uVar6;
  func_0x000100162d98("APPSTORE",&puStack_218);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(puVar1);
  return;
}



/* Entry: 1070d38b0; end: 1070d45ab;  */

void FUN_1070d38b0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_fffffffffffffe48;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be22440(uVar3,param_2,*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0xd8),
                      1,*(undefined1 *)(param_1 + 0xd9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c14c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c14c0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (lVar7 != 1) {
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x1070d4240;
      puStack_120 = &UNK_11098d768;
      uStack_118 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uVar13 = *(undefined8 *)(param_1 + 0x60);
      uStack_110 = uVar3;
      _objc_retain(uVar13);
      uStack_d8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_d0 = *(undefined2 *)(param_1 + 0xd8);
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      uStack_108 = uVar13;
      _objc_retain(uVar14);
      uStack_100 = uVar14;
      _objc_retain(uVar6);
      uStack_ce = *(undefined1 *)(param_1 + 0xda);
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uStack_f8 = uVar6;
      _objc_retain(uVar13);
      uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      uStack_f0 = uVar13;
      _objc_retain(uVar14);
      ppuVar11 = &puStack_138;
      uStack_e8 = uVar14;
      _objc_retainBlock();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      uVar14 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0dfd40(uVar14,param_2,*(undefined8 *)(param_1 + 0xc0));
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c0dfd40(uVar12,param_2,*(undefined8 *)(param_1 + 0xc0));
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa8) + 8) + 0x28);
      uVar13 = *(undefined8 *)(param_1 + 200);
      func_0x00010c0dfd40(uVar9,param_2,*(undefined8 *)(param_1 + 0xc0));
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 8) + 0x28);
      func_0x00010c0dfd40(uVar8,param_2,*(undefined8 *)(param_1 + 0xc0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98b40(uVar10,param_2,uVar15,0,uVar14,uVar12,uVar13,uVar9,uVar8,
                          CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffffe48 >> 0x10),
                                            *(undefined1 *)(param_1 + 0xdb)),
                                   *(undefined1 *)(param_1 + 0xd8)),*(undefined8 *)(param_1 + 0xb8),
                          *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88),
                          *(undefined2 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 0x98),
                          *(undefined8 *)(param_1 + 0x40),uVar4,uVar6,ppuVar11);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar12);
      _objc_release(uVar14);
      _objc_release(ppuVar11);
      _objc_release(uStack_e8);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_release(uStack_110);
      goto LAB_1070d3bb0;
    }
  }
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1070d3de4;
  puStack_b0 = &UNK_11098d738;
  uStack_a8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_70 = *(undefined2 *)(param_1 + 0xd8);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar3;
  _objc_retain(uVar13);
  uStack_98 = uVar13;
  _objc_retain(uVar6);
  uStack_6e = *(undefined1 *)(param_1 + 0xda);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar6;
  _objc_retain(uVar13);
  uStack_78 = *(undefined8 *)(param_1 + 0xa0);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = uVar13;
  _objc_retain(uVar14);
  ppuVar11 = &puStack_c8;
  uStack_80 = uVar14;
  _objc_retainBlock();
  lVar7 = *(long *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  if (lVar7 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfb1920(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0xd8);
    uVar2 = *(undefined1 *)(param_1 + 0xdb);
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar12 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c0dfd40(uVar8,param_2,*(undefined8 *)(param_1 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c0dfd40(uVar10,param_2,*(undefined8 *)(param_1 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be98b60(*(undefined8 *)(param_1 + 0xd0),uVar13,param_2,uVar9,uVar1,uVar2,uVar12,
                        uVar14,uVar14,uVar8,uVar10,*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                        *(undefined2 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 0x40),uVar4,uVar6,
                        ppuVar11);
    _objc_release(uVar10);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xd8);
    uVar2 = *(undefined1 *)(param_1 + 0xdb);
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    uVar12 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c0dfd40(uVar9,param_2,*(undefined8 *)(param_1 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c0dfd40(uVar8,param_2,*(undefined8 *)(param_1 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be98b20(*(undefined8 *)(param_1 + 0xd0),uVar13,param_2,lVar7,uVar1,uVar2,uVar12,
                        uVar14,uVar14,uVar9,uVar8,*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                        *(undefined2 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 0x40),uVar4,uVar6,
                        ppuVar11);
  }
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(ppuVar11);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
LAB_1070d3bb0:
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 1070d45ac; end: 1070d4733;  */

void FUN_1070d45ac(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
  __Block_object_assign(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xb0),8);
  return;
}



/* Entry: 1070d4734; end: 1070d4a8b;  */

void FUN_1070d4734(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be9a5e0(uVar5,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c1122a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be43740(uVar8);
    func_0x00010bf76ee0(uVar7,param_2,lVar3 == lVar4,uVar5,uVar8,*(undefined8 *)(param_1 + 0x38));
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010beb9060(*(undefined8 *)(param_1 + 0x30),param_2,lVar3 == lVar4);
    func_0x00010c123520(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar5);
  }
  if (lVar3 == lVar4) {
    if (*(char *)(param_1 + 0x61) == '\x01') {
      func_0x00010bea52e0(*(undefined8 *)(param_1 + 0x30));
    }
    uVar9 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c07e920();
    if (((uVar12 & 1) == 0) && (*(char *)(param_1 + 0x61) == '\x01')) {
      bVar1 = *(byte *)(param_1 + 0x62);
      _objc_release(uVar9);
      if ((bVar1 & 1) != 0) goto LAB_1070d4948;
      iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010c07d220();
      uVar12 = *(ulong *)(param_1 + 0x30);
      if (iVar2 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        uVar9 = *(ulong *)(param_1 + 0x48);
        func_0x00010c1583c0(uVar7);
        func_0x00010c0dfd40(uVar9,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(ulong *)(param_1 + 0x20);
        func_0x00010bfb1920(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bfbd940();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfb1920(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bfbcca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8c20(uVar12,param_2,uVar9,uVar11,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar11);
      }
      else {
        uVar9 = uVar12;
        func_0x00010bf46560(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf167e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8be0(uVar12,param_2,uVar10,*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(uVar10);
    }
    _objc_release(uVar9);
  }
LAB_1070d4948:
  if ((*(char *)(param_1 + 99) == '\x01') &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) & 1) == 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfa3600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1070d4a8c;
    puStack_68 = &UNK_1108420a0;
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar8);
    uStack_58 = uVar8;
    func_0x00010c14a040(uVar5,param_2,&puStack_80);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uStack_58);
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa3600(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c242ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ea20();
  _objc_release(uVar5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1070d4a8c; end: 1070d4cef;  */

void FUN_1070d4a8c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010be2f900(*(undefined8 *)(param_1 + 0x20));
  }
  lVar9 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be5f2c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf73f00();
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be5f2c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf46560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbdda0();
      func_0x00010bf73f60(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5f2c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7260();
  _objc_release(uVar3);
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar7 + 0x20));
  _objc_retain(*(undefined8 *)(lVar7 + 0x28));
  _objc_retain(*(undefined8 *)(lVar7 + 0x30));
  _objc_retain(*(undefined8 *)(lVar7 + 0x38));
  _objc_retain(*(undefined8 *)(lVar7 + 0x40));
  _objc_retain(*(undefined8 *)(lVar7 + 0x48));
  _objc_retain(*(undefined8 *)(lVar7 + 0x50));
  _objc_retain(*(undefined8 *)(lVar7 + 0x58));
  _objc_retain(*(undefined8 *)(lVar7 + 0x60));
  _objc_retain(*(undefined8 *)(lVar7 + 0x68));
  _objc_retain(*(undefined8 *)(lVar7 + 0x70));
  _objc_retain(*(undefined8 *)(lVar7 + 0x78));
  _objc_retain(*(undefined8 *)(lVar7 + 0x80));
  _objc_retain(*(undefined8 *)(lVar7 + 0x88));
  _objc_retain(*(undefined8 *)(lVar7 + 0x90));
  __Block_object_assign(param_2 + 0x98,*(undefined8 *)(lVar7 + 0x98),8);
  __Block_object_assign(param_2 + 0xa0,*(undefined8 *)(lVar7 + 0xa0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_2 + 0xa8,*(undefined8 *)(lVar7 + 0xa8),8);
  return;
}



/* Entry: 1070d4cf0; end: 1070d4ee3;  */

void FUN_1070d4cf0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),8);
  return;
}



/* Entry: 1070d4ee4; end: 1070d4f03;  */

void FUN_1070d4ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf16e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_batchExportToOutputUrls_completi_1125a3548,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             PTR___dispatch_main_q_11034be20,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1070d4f04; end: 1070d5497; -[PreviewViewController _saveBatchCaptureSegmentWithImage:manualSave:isPrivate:savingSource:captureTimeUtc:createTimeUtc:timeRanges:servletMediaFormat:orientation:duration:overlayFormat:overlay:assetMedias:location:isInfiniteDuration:cameraFrontFacing:customStoryMetadata:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070d4f04(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,undefined *param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_stack_fffffffffffffe68;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  if (param_5 == 0) {
    if (param_19 == (undefined *)0x0) {
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_100 = param_2;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = puStack_100;
      func_0x00010bf11c20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puStack_f0;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar2,param_3,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110e86d58,puVar3,0,param_20,0,
                          param_21);
      func_0x00010bef7060(param_1,puVar1,param_3,param_4,param_8,param_12,param_13,param_14,param_15
                          ,param_16,
                          CONCAT71(CONCAT61(CONCAT51((int5)((ulong)in_stack_fffffffffffffe68 >> 0x18
                                                           ),param_17._1_1_),(undefined1)param_17),
                                   param_6),0,puVar2,param_22);
      puStack_f8 = param_2;
    }
    else {
      func_0x00010c27dd80();
      puStack_f8 = param_19;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      puStack_100 = param_19;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puStack_f0,param_3,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110ea00f8,puVar1,0,param_20,0,
                          param_21);
      _objc_release(puVar1);
      func_0x00010c13b540(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf11c20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7020(param_1);
      _objc_release(puVar1);
      puVar1 = param_2;
    }
  }
  else {
    puStack_f8 = param_2;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puStack_f8;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puStack_100;
    func_0x00010befb6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_f0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c240ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar3,param_3,&PTR____CFConstantStringClassReference_110ec3518,
                        &PTR____CFConstantStringClassReference_110ea00d8,puVar2,0,param_20,0,
                        param_21);
    func_0x00010befa840(param_1,puVar1,param_3,param_4,0,param_11,0,0,0,param_8,param_9,param_12,
                        param_13,param_14,param_15,param_16,param_6,3,(undefined1)param_17);
    _objc_release(puVar3);
    puVar3 = param_2;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puStack_f0);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070d5498; end: 1070d5a87; -[PreviewViewController _saveBatchCaptureSegmentWithVideoUrl:manualSave:isPrivate:savingSource:captureTimeUtc:createTimeUtc:timeRanges:servletMediaFormat:orientation:duration:overlayFormat:overlay:assetMedias:location:isInfiniteDuration:cameraFrontFacing:customStoryMetadata:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070d5498(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,undefined *param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 uVar5;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_90;
  undefined *puStack_88;
  
  uVar5 = (undefined4)((ulong)in_stack_fffffffffffffea0 >> 0x20);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar2 = puVar1;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c29af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (param_19 == (undefined *)0x0) {
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = param_1;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = puStack_f8;
      func_0x00010bf11c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puStack_88;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110e86d78,puVar3,0,param_20,0,
                          param_21);
      func_0x00010bef7080(puStack_90,param_2,puVar4,1,param_7,param_12,param_13,param_14,param_15,
                          param_16,CONCAT71(CONCAT61((int6)(((ulong)CONCAT41(uVar5,param_17._1_1_)
                                                            << 0x18) >> 0x10),(undefined1)param_17),
                                            param_5),puVar2,param_22);
      puStack_f0 = param_1;
    }
    else {
      func_0x00010c27dd80();
      puStack_f0 = param_19;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = param_19;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puStack_88,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110ea0118,puVar1,0,param_20,0,
                          param_21);
      _objc_release(puVar1);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf11c20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7040();
      _objc_release(puVar1);
      puStack_90 = param_1;
    }
  }
  else {
    puStack_f0 = puVar1;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puStack_f0;
    func_0x00010befb6a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puStack_f8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                        &PTR____CFConstantStringClassReference_110ea00b8,puVar3,0,param_20,0,
                        param_21);
    func_0x00010befc8a0(puStack_88,param_2,puStack_90,0,1,param_11,0,0,0,param_7,param_8,param_12,
                        param_13,param_14,param_15,param_16,param_5,3,(undefined1)param_17);
    puVar4 = puVar1;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puStack_90);
  _objc_release(puStack_88);
  _objc_release(puStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puVar4);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1070d5a88; end: 1070d604f; -[PreviewViewController _saveBatchCaptureSegmentWithMultipleVideoUrls:metadataItems:timeRanges:servletMediaFormat:orientation:overlayFormats:gallerySnapOverlays:manualSave:isPrivate:savingSource:assetMedias:location:isInfiniteDuration:cameraFrontFacing:createTimeOfFirstSnap:customStoryMetadata:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070d5a88(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 uStack0000000000000028;
  undefined1 uStack0000000000000029;
  undefined8 in_stack_00000030;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_fffffffffffffea0;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar5;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_90;
  
  uVar5 = (undefined4)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  if ((char)param_10 == '\0') {
    if (in_stack_00000038 == (undefined *)0x0) {
      puStack_90 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puStack_90;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puStack_d8;
      func_0x00010c0d22a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = puStack_c8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010bfbabe0();
      puVar2 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110ea01b8,puVar3,0,
                          in_stack_00000040,0,in_stack_00000048);
      func_0x00010bef9e60(puStack_d0,param_2,param_3,param_4,1,param_6,param_7,param_8,param_9,
                          in_stack_00000018,in_stack_00000020,
                          CONCAT71((int7)(CONCAT62(CONCAT51(CONCAT41(uVar5,(char)puVar1),
                                                            uStack0000000000000028),0x100) >> 8),
                                   param_10._1_1_),in_stack_00000030,param_5,puVar2,0,
                          in_stack_00000050);
      _objc_release(puVar2);
      puStack_e0 = param_1;
    }
    else {
      puVar1 = in_stack_00000038;
      func_0x00010c27dd80();
      puStack_90 = in_stack_00000038;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = in_stack_00000038;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 + -1 < (undefined *)0x7) {
        uVar4 = *(undefined8 *)(&UNK_10de1fb50 + (long)(puVar1 + -1) * 8);
      }
      else {
        uVar4 = 0;
      }
      puStack_c8 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puStack_c8,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110ea0198,puVar1,0,
                          in_stack_00000040,0,in_stack_00000048);
      _objc_release(puVar1);
      puStack_d0 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puStack_d0;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStack_e0;
      func_0x00010c0d22a0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bfbabe0();
      func_0x00010bef9d20(puVar1,param_2,param_3,1,param_6,param_7,param_8,param_9,in_stack_00000018
                          ,in_stack_00000020,
                          CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffffea0 >> 0x10),
                                            uStack0000000000000028),param_10._1_1_),puStack_c8,
                          puStack_90,puStack_d8,uVar4,(ulong)puVar2 & 0xff,in_stack_00000030,param_5
                          ,in_stack_00000050);
      _objc_release(param_1);
      _objc_release(puVar1);
    }
  }
  else {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = param_1;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puStack_d8;
    func_0x00010c0d22a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puStack_c8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2220;
    _objc_alloc();
    puStack_e0 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                        &PTR____CFConstantStringClassReference_110ea0178,puStack_e0,0,
                        in_stack_00000040,0,in_stack_00000048);
    func_0x00010bef9e60(puStack_d0,param_2,param_3,param_4,1,param_6,param_7,param_8,param_9,
                        in_stack_00000018,in_stack_00000020,
                        CONCAT71((int7)(((ulong)CONCAT51(CONCAT41(uVar5,uStack0000000000000029),
                                                         uStack0000000000000028) << 0x10) >> 8),
                                 param_10._1_1_),in_stack_00000030,param_5,puVar3,0,
                        in_stack_00000050);
    puStack_90 = param_1;
  }
  _objc_release(puVar3);
  _objc_release(puStack_e0);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  _objc_release(puStack_d8);
  _objc_release(puStack_90);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070d6050; end: 1070d69db; -[PreviewViewController _saveBatchCaptureToGalleryManualSave:saveToCameraRoll:showsSavingIndicator:isPrivate:saveAsSeparateCopy:saveSessionId:savedToken:gallerySavingEventId:captureSessionId:customStoryMetadata:] */

void FUN_1070d6050(undefined *param_1,undefined8 param_2,byte param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  byte bStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  byte bStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c14bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((param_3 & 1) == 0) {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c4298;
      _objc_alloc();
      puVar1 = param_1;
      func_0x00010bf16da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7400();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    func_0x00010c1b4160(puVar4);
  }
  puVar1 = puVar4;
  func_0x00010c26f6a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1070d69dc;
  puStack_c8 = &UNK_11098d858;
  puStack_c0 = param_1;
  _objc_retain(param_8);
  uStack_b8 = param_8;
  uStack_80 = param_5;
  _objc_retain(param_9);
  uStack_b0 = param_9;
  bStack_7f = param_3;
  uStack_7e = param_7;
  _objc_retain(puVar4);
  puStack_a8 = puVar4;
  _objc_retain(puVar5);
  puStack_a0 = puVar5;
  _objc_retain(puVar1);
  puStack_98 = puVar1;
  uStack_7d = param_4;
  _objc_retain(param_12);
  uStack_90 = param_12;
  _objc_retain(param_11);
  uStack_88 = param_11;
  ppuVar6 = &puStack_e0;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126d4c00;
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7400();
  _objc_release(puVar7);
  _objc_release(puVar3);
  func_0x00010c1f5d40(puVar2);
  puVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf5fa80();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  if (puVar9 != (undefined *)0x7fffffffffffffff) {
    puVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fa80();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fac0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf16ae0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  puVar3 = param_1;
  func_0x00010bf16ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f6a0();
  _objc_release(puVar3);
  puVar7 = param_1;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  pcStack_f8 = FUN_1070ced0c;
  uStack_f0 = 0x1070ced1c;
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1070ced0c;
  uStack_120 = 0x1070ced1c;
  uStack_118 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1070ced0c;
  uStack_150 = 0x1070ced1c;
  uStack_148 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_1070ced0c;
  uStack_180 = 0x1070ced1c;
  uStack_178 = 0;
  puVar3 = puVar4;
  puStack_e8 = puVar8;
  func_0x00010c0df000();
  if (0 < (long)puVar3) {
    do {
      uVar13 = puStack_108[5];
      puVar8 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      ppuVar10 = &PTR____CFConstantStringClassReference_110f314b8;
      func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                          &PTR____CFConstantStringClassReference_110dbab38,1,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar13);
      _objc_release(ppuVar10);
      _objc_release(puVar8);
      puVar3 = puVar3 + -1;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = param_1;
  func_0x00010bf16ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x1070d6f98;
  puStack_1c0 = &UNK_11098d5f8;
  puStack_1b0 = &uStack_140;
  puStack_1a8 = &uStack_170;
  _objc_retain(puVar7);
  puStack_1b8 = puVar7;
  func_0x00010c0efea0(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c081200();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_1070d7028;
  puStack_240 = &UNK_11098d938;
  puStack_1f0 = &uStack_140;
  puStack_1e8 = &uStack_170;
  uStack_1de = SUB81(puVar11,0);
  uStack_228 = param_10;
  uStack_218 = param_11;
  uStack_210 = param_12;
  puStack_238 = param_1;
  puStack_230 = puVar4;
  puStack_220 = puVar1;
  ppuStack_208 = ppuVar6;
  puStack_200 = &uStack_1a0;
  puStack_1f8 = &uStack_110;
  bStack_1e0 = param_3;
  uStack_1df = param_6;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(puVar1);
  _objc_retain(param_10);
  _objc_retain(puVar4);
  _objc_retain(ppuVar6);
  ppuVar10 = &puStack_258;
  _objc_retainBlock();
  puStack_298 = puVar3;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_1070d81b8;
  puStack_280 = &UNK_11090f5b8;
  puStack_278 = puVar2;
  ppuStack_270 = ppuVar10;
  puStack_268 = &uStack_110;
  puStack_260 = &uStack_1a0;
  _objc_retain();
  _objc_retain(puVar2);
  func_0x000100bc0718(puVar7,PTR___dispatch_main_q_11034be20,&puStack_298);
  _objc_release(ppuStack_270);
  _objc_release(puStack_278);
  _objc_release(ppuVar10);
  _objc_release(uStack_210);
  _objc_release(uStack_218);
  _objc_release(puStack_220);
  _objc_release(uStack_228);
  _objc_release(puStack_230);
  _objc_release(ppuStack_208);
  _objc_release(puStack_1b8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  __Block_object_dispose(&uStack_110,8);
  _objc_release(puStack_e8);
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release(puVar7);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 1070d69dc; end: 1070d6f1f;  */

void FUN_1070d69dc(long param_1,long param_2,long param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  func_0x00010be80040(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar11);
  bVar2 = false;
  if ((param_2 != 0) && (param_4 != 0)) {
    lVar4 = param_3;
    func_0x00010bf529e0();
    bVar2 = lVar4 != 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be9a5e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be80040(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar11);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1122a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be43740(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf76ee0(uVar11);
    _objc_release(uVar11);
    _objc_release(uVar6);
    func_0x00010beb9060(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c123520(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar5);
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x61) == '\x01') {
      func_0x00010bea52e0(*(undefined8 *)(param_1 + 0x20));
    }
    if (param_2 != 0) {
      uVar7 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c07e920();
      if (((uVar12 & 1) == 0) && (*(char *)(param_1 + 0x61) == '\x01')) {
        bVar1 = *(byte *)(param_1 + 0x62);
        _objc_release(uVar7);
        if ((bVar1 & 1) != 0) goto LAB_1070d6c14;
        iVar3 = (int)*(undefined8 *)(param_1 + 0x38);
        func_0x00010c07d220();
        uVar12 = *(ulong *)(param_1 + 0x20);
        if (iVar3 == 0) {
          uVar7 = *(ulong *)(param_1 + 0x40);
          func_0x00010c1583c0(*(undefined8 *)(param_1 + 0x38));
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bed8c20(uVar12);
        }
        else {
          uVar7 = uVar12;
          func_0x00010bf46560(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf167e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bed8c00(uVar12);
          _objc_release(uVar8);
        }
      }
      _objc_release(uVar7);
    }
  }
LAB_1070d6c14:
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfb27a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  FUN_1070cb180(uVar11,param_5,&PTR____CFConstantStringClassReference_110ea0158,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bdfcf20(uVar11);
  _objc_release(lVar4);
  if ((*(byte *)(param_1 + 99) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar6);
    _objc_release(uVar11);
  }
  else {
    uVar11 = uVar5;
    func_0x000107ffa0b8();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if ((int)uVar11 == 0) {
      func_0x00010bfa3600(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c14a040(uVar10);
      _objc_release(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar6);
    }
    else {
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x0001070c46b8();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      func_0x00010c08f100();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a71c0();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar6);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beff600(uVar9);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = *(byte *)(param_1 + 0x61);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b540(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x0001070c535c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c0c7e00();
      _objc_retainAutoreleasedReturnValue();
      if ((bVar1 & 1) == 0) {
        func_0x000107dfff94(uVar9,uVar6);
      }
      else {
        func_0x000107e001b8();
      }
      _objc_release(uVar6);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
  }
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070d6f20; end: 1070d7027;  */

void FUN_1070d6f20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be5f2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar1);
  func_0x00010be9a620(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070d7028; end: 1070d783f;  */

void FUN_1070d7028(long param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined2 uStack_c7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    if (lVar17 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar4 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release();
      _dispatch_group_create();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar20 = puVar1;
      func_0x00010bf529e0();
      if (puVar20 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          uVar7 = *(ulong *)(param_1 + 0x28);
          func_0x00010c232e60();
          if ((uVar7 & 1) == 0) {
            puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
          }
          else {
            puVar10 = puVar1;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar10;
            func_0x00010c083320();
            puVar9 = PTR_PTR_1126c4280;
            puVar11 = PTR_PTR_1126c4270;
            if ((int)puVar8 == 0) {
              _objc_retain(puVar10);
              _objc_opt_class(puVar11);
              puVar9 = puVar10;
              _objc_opt_isKindOfClass(puVar10,puVar11);
              puVar11 = puVar10;
              if (((ulong)puVar9 & 1) == 0) {
                puVar11 = (undefined *)0x0;
              }
              _objc_retain(puVar11);
              _objc_release(puVar10);
              puVar9 = puVar11;
              func_0x00010bfb6cc0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_88 = puVar9;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(puVar8);
              _objc_release(puVar9);
              uVar19 = 0xffffffffa9fc90cc;
              func_0x00010b77c6b4(0xffffffffa9fc90cc);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(uVar19);
              puVar9 = puVar10;
              func_0x00010c0cc0c0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              puVar11 = puVar9;
              func_0x00010bf51e00(puVar9);
              func_0x00010befa120(puVar6);
            }
            else {
              _objc_retain(puVar10);
              _objc_opt_class(puVar9);
              puVar11 = puVar10;
              _objc_opt_isKindOfClass(puVar10,puVar9);
              puVar8 = puVar10;
              if (((ulong)puVar11 & 1) == 0) {
                puVar8 = (undefined *)0x0;
              }
              _objc_retain(puVar8);
              _objc_release(puVar10);
              func_0x00010c0df020();
              puVar9 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
              func_0x00010c25e980(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              puVar11 = puVar8;
              func_0x00010bf3f040(puVar8);
              func_0x00010b5fbca8();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar11);
              puVar11 = puVar10;
              func_0x00010c0cc0c0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              puVar8 = puVar11;
              func_0x00010bf51e00(puVar11);
              func_0x00010befa120(puVar6);
              _objc_release(puVar8);
            }
            _objc_release(puVar11);
            _objc_release(puVar9);
            lVar12 = *(long *)(param_1 + 0x20);
            func_0x00010bf16ce0();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar12;
            func_0x00010c0d2420();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar17;
            func_0x00010c09df80();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar14);
            _objc_release(lVar13);
            _objc_release(lVar17);
            _objc_release(lVar12);
            lVar17 = lVar15;
            func_0x000107e00808();
            _objc_retainAutoreleasedReturnValue();
            if (lVar17 != 0) {
              _dispatch_group_enter(puVar4);
              uVar18 = *(undefined8 *)(param_1 + 0x20);
              lVar13 = lVar17;
              func_0x00010bf377a0(lVar17);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar13;
              func_0x00010c254140();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c06c000();
              uVar16 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010bf46560(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar19 = uVar16;
              func_0x00010bf3f860();
              _objc_retainAutoreleasedReturnValue();
              puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_b8 = 0xc2000000;
              pcStack_b0 = FUN_1070d7840;
              puStack_a8 = &UNK_11098d628;
              _objc_retain(puVar5);
              puStack_a0 = puVar5;
              puStack_90 = puVar20;
              _objc_retain(puVar4);
              puStack_98 = puVar4;
              func_0x00010be1c5e0(uVar18);
              _objc_release(uVar19);
              _objc_release(uVar16);
              _objc_release(lVar14);
              _objc_release(lVar13);
              _objc_release(puStack_98);
              _objc_release(puStack_a0);
            }
            _objc_release(lVar17);
            _objc_release(lVar15);
          }
          _objc_release(puVar10);
          puVar20 = puVar20 + 1;
          puVar10 = puVar1;
          func_0x00010bf529e0();
        } while (puVar20 < puVar10);
      }
      puVar20 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_1070d79b0;
      puStack_150 = &UNK_11098d908;
      uStack_c8 = *(undefined1 *)(param_1 + 0x78);
      uVar19 = *(undefined8 *)(param_1 + 0x30);
      puStack_148 = puVar2;
      puStack_140 = puVar5;
      _objc_retain(uVar19);
      uStack_130 = *(undefined8 *)(param_1 + 0x20);
      uStack_d0 = *(undefined8 *)(param_1 + 0x70);
      uStack_d8 = *(undefined8 *)(param_1 + 0x68);
      uStack_c7 = *(undefined2 *)(param_1 + 0x79);
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      uStack_138 = uVar19;
      puStack_128 = puVar3;
      puStack_120 = puVar10;
      puStack_118 = puVar20;
      puStack_110 = puVar9;
      puStack_108 = puVar11;
      _objc_retain(uVar16);
      uVar19 = *(undefined8 *)(param_1 + 0x40);
      uStack_100 = uVar16;
      _objc_retain(uVar19);
      uVar16 = *(undefined8 *)(param_1 + 0x28);
      uStack_f8 = uVar19;
      _objc_retain(uVar16);
      uVar19 = *(undefined8 *)(param_1 + 0x50);
      uStack_f0 = uVar16;
      _objc_retain(uVar19);
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      uStack_e0 = uVar19;
      _objc_retain(uVar16);
      uStack_e8 = uVar16;
      _objc_retain(puVar11);
      _objc_retain(puVar9);
      _objc_retain(puVar20);
      _objc_retain(puVar10);
      _objc_retain(puVar3);
      _objc_retain(puVar5);
      _objc_retain(puVar2);
      param_2 = PTR___dispatch_main_q_11034be20;
      func_0x000100bc0718(puVar4,PTR___dispatch_main_q_11034be20,&puStack_168);
      _objc_release(uStack_e8);
      _objc_release(uStack_e0);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      _objc_release(uStack_100);
      _objc_release(puStack_108);
      _objc_release(puStack_110);
      _objc_release(puStack_118);
      _objc_release(puStack_120);
      _objc_release(puStack_128);
      _objc_release(uStack_138);
      _objc_release(puStack_140);
      _objc_release(puStack_148);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar20);
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
    }
    else {
      puVar1 = *(undefined **)(param_1 + 0x50);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar1 + 0x10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto LAB_1070d70d4;
    }
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x50);
    UNRECOVERED_JUMPTABLE = *(code **)(puVar1 + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      lVar17 = 0;
LAB_1070d70d4:
                    /* WARNING: Could not recover jumptable at 0x0001070d70f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar1,0,0,0,lVar17);
      return;
    }
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar19);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(puVar1 + 0x28));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_location_112605490);
    return;
  }
  return;
}



/* Entry: 1070d7840; end: 1070d793f;  */

void FUN_1070d7840(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_location_112605490);
  return;
}



/* Entry: 1070d7940; end: 1070d7947;  */

void FUN_1070d7940(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_location_112605490);
  return;
}



/* Entry: 1070d7948; end: 1070d7977;  */

void FUN_1070d7948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c5ae0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 1070d7978; end: 1070d797f;  */

void FUN_1070d7978(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_createTime_1125b3ff0);
  return;
}



/* Entry: 1070d7980; end: 1070d79af;  */

void FUN_1070d7980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfbabe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1070d79b0; end: 1070d7f47;  */

void FUN_1070d79b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puStack_70;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar17 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x28);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar4,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (lVar4 != 0) {
        func_0x00010befa120(puVar3,param_2,lVar4);
      }
      _objc_release(lVar4);
      uVar17 = uVar17 + 1;
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar17 < uVar5);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d440(uVar18,param_2,puVar6);
  _objc_release(puVar6);
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      puVar6 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar6,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                          &PTR____CFConstantStringClassReference_110ea0218,puVar10,0,
                          *(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x70));
      _objc_release(puVar10);
      puVar7 = *(undefined **)(param_1 + 0x38);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar7;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_70;
      func_0x00010bf16a20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = *(undefined8 *)(param_1 + 0x40);
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x28);
      uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x28);
      puVar9 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010bef7140(puVar8,param_2,uVar13,uVar18,uVar1,uVar14,uVar15,puVar9,
                          *(undefined8 *)(param_1 + 0x50),
                          CONCAT11(1,*(undefined1 *)(param_1 + 0xa1)));
      goto LAB_1070d7ef4;
    }
    func_0x00010c27dd80();
    puVar6 = *(undefined **)(param_1 + 0x80);
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = *(undefined **)(param_1 + 0x80);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puStack_70,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                        &PTR____CFConstantStringClassReference_110ea01f8,puVar10,0,
                        *(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x70));
    _objc_release(puVar10);
    puVar10 = *(undefined **)(param_1 + 0x38);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf16a20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x28);
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x28);
    puVar12 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010bef9d00(puVar11,param_2,uVar13,uVar18,uVar1,uVar15,uVar14,puVar12,
                        *(undefined8 *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0xa1));
    _objc_release(puVar12);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c08fa60();
    }
    puVar6 = *(undefined **)(param_1 + 0x38);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = puVar7;
    func_0x00010bf16a20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_70;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x28);
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x28);
    puVar8 = puVar3;
    func_0x00010bf51e00(puVar3);
    uVar16 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined1 *)(param_1 + 0xa1);
    puVar11 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar11,param_2,&PTR____CFConstantStringClassReference_110ec3518,
                        &PTR____CFConstantStringClassReference_110ea01d8,puVar9,0,
                        *(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x70));
    func_0x00010c07d220();
    func_0x00010bef7140(puVar10,param_2,uVar13,uVar18,uVar1,uVar14,uVar15,puVar8,uVar16,uVar2);
  }
  _objc_release(puVar11);
LAB_1070d7ef4:
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puStack_70);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1070d7f48; end: 1070d81b7;  */

void FUN_1070d7f48(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),7);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  return;
}



/* Entry: 1070d81b8; end: 1070d824b;  */

void FUN_1070d81b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1070d824c;
  puStack_48 = &UNK_11098d968;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x00010bf16e80(uVar1,param_2,uVar3,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1070d824c; end: 1070d82c3;  */

void FUN_1070d824c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070d82c4; end: 1070d8c8f; -[PreviewViewController _saveMultiSnapVideoProviderToGallery:manualSave:saveToCameraRoll:showsSavingIndicator:isPrivate:isFromCameraRoll:saveAsSeparateCopy:saveSessionId:savedToken:gallerySavingEventId:captureSessionId:customStoryMetadata:location:gallerySnapOverlay:overlayFormat:createTimeOfFirstSnap:deviceFirmwareInfo:deviceId:needsTranscoding:] */

void FUN_1070d82c4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined **param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  int iVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  long lStack_378;
  undefined1 *puStack_370;
  code *pcStack_368;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_230 [8];
  undefined1 uStack_228;
  undefined1 uStack_227;
  undefined1 uStack_226;
  undefined1 uStack_225;
  undefined1 uStack_224;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined **ppuStack_88;
  long lStack_80;
  
  uStack_318 = CONCAT44(uStack_318._4_4_,param_6);
  ppuStack_2f0 = (undefined **)CONCAT44(ppuStack_2f0._4_4_,param_4);
  uStack_2d0 = param_17;
  lStack_2f8 = param_12;
  uStack_2d8 = param_11;
  uStack_320 = CONCAT44(uStack_320._4_4_,(uint)param_9);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_348 = param_7;
  uStack_344 = param_8;
  lStack_340 = param_1;
  uStack_2e4 = param_5;
  uStack_2e0 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uStack_328 = param_13;
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  uStack_330 = param_16;
  _objc_retain(param_16);
  _objc_retain(uStack_2d0);
  ppuStack_300 = param_18;
  _objc_retain(param_18);
  uStack_338 = param_19;
  _objc_retain(param_19);
  uStack_310 = param_20;
  _objc_retain(param_20);
  uStack_308 = param_21;
  _objc_retain(param_21);
  lVar17 = lStack_340;
  lVar8 = lStack_340;
  func_0x00010bfa3600(lStack_340);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar8;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar17;
  func_0x00010bfa3600(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fac0();
  func_0x00010c14a2a0(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  lVar8 = lVar17;
  func_0x00010c0d2440(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar17;
  func_0x00010c13b420(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar23;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  lVar23 = lVar17;
  func_0x00010becbfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uStack_2d8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1070d8c90;
  puStack_c8 = &UNK_11098d998;
  lStack_c0 = lVar17;
  _objc_retain(uStack_2d8);
  lVar8 = lStack_2f8;
  uStack_b8 = uVar26;
  uStack_90 = (undefined1)uStack_318;
  uStack_8f = (undefined1)uStack_2e4;
  _objc_retain(lStack_2f8);
  lStack_b0 = lVar8;
  uStack_8e = SUB81(ppuStack_2f0,0);
  uStack_8d = (undefined1)uStack_320;
  _objc_retain(lVar23);
  lStack_a8 = lVar23;
  _objc_retain(param_15);
  uStack_318 = param_15;
  uStack_a0 = param_15;
  _objc_retain(param_14);
  uStack_320 = param_14;
  uStack_98 = param_14;
  ppuVar13 = &puStack_e0;
  _objc_retainBlock();
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  pcStack_f8 = FUN_1070ced0c;
  uStack_f0 = 0x1070ced1c;
  uStack_e8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1070ced0c;
  uStack_120 = 0x1070ced1c;
  uStack_118 = 0;
  ppuStack_350 = ppuVar13;
  _dispatch_group_create();
  _dispatch_group_enter();
  lVar8 = lVar17;
  func_0x00010bfa3600(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1070d9040;
  puStack_160 = &UNK_11098d5f8;
  puStack_150 = &uStack_110;
  puStack_148 = &uStack_140;
  _objc_retain(ppuVar13);
  uVar26 = uStack_2d0;
  ppuVar25 = ppuStack_300;
  ppuStack_158 = ppuVar13;
  func_0x00010be213e0(lVar17);
  iVar24 = (int)uVar26;
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  puStack_1a0 = &uStack_1a8;
  uStack_1a8 = 0;
  uStack_198 = 0x3032000000;
  pcStack_190 = FUN_1070ced0c;
  uStack_188 = 0x1070ced1c;
  uStack_180 = 0;
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_1070ced0c;
  uStack_1b8 = 0x1070ced1c;
  uStack_1b0 = 0;
  lVar8 = lVar23;
  func_0x00010bf529e0();
  if (lVar8 == 1) {
    lVar8 = lVar17;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf04a40();
    _objc_release(lVar9);
    _objc_release(lVar8);
    if ((int)lVar10 == 0) goto LAB_1070d893c;
    puVar14 = PTR_PTR_1126b1350;
    _objc_alloc(PTR_PTR_1126b1350);
    func_0x00010bfeee60();
    ppuVar15 = &PTR____CFConstantStringClassReference_110f314b8;
    func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                        &PTR____CFConstantStringClassReference_110dbab38,1,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar16 = PTR_PTR_1126c4ac8;
    _objc_alloc(PTR_PTR_1126c4ac8);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_88 = ppuVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb3dc0(lVar17);
    func_0x00010c0525e0(puVar16);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126c4ad0;
    _objc_alloc();
    uVar26 = uStack_2e0;
    func_0x00010c0d9500(uStack_2e0);
    lVar8 = lVar17;
    func_0x00010c13b540(lVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060b80();
    puStack_358 = puVar14;
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar26);
    _dispatch_group_enter(ppuVar13);
    lVar8 = lVar17;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    puVar14 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    uStack_208 = 0x1070d90d0;
    puStack_200 = &UNK_11098d9c8;
    puStack_1e8 = &uStack_1a8;
    puStack_1e0 = &uStack_1d8;
    lStack_1f8 = lVar10;
    _objc_retain(ppuVar13);
    ppuVar25 = &puStack_218;
    ppuStack_1f0 = ppuVar13;
    func_0x00010bf16e60(puStack_358);
    iVar24 = (int)puVar14;
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(ppuStack_1f0);
    _objc_release(lVar10);
    _objc_release(puStack_358);
    _objc_release(puVar16);
  }
  else {
LAB_1070d893c:
    puVar7 = puStack_1a0;
    uVar26 = uStack_2e0;
    _objc_retain(uStack_2e0);
    ppuVar15 = (undefined **)puVar7[5];
    puVar7[5] = uVar26;
  }
  _objc_release(ppuVar15);
  _objc_initWeak(auStack_220,lVar17);
  puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_1070d9184;
  puStack_2b0 = &UNK_11098da28;
  _objc_copyWeak(auStack_230,auStack_220);
  uVar6 = uStack_2d8;
  uVar4 = uStack_308;
  uVar3 = uStack_310;
  uVar2 = uStack_318;
  uVar21 = uStack_320;
  uVar22 = uStack_328;
  uVar18 = uStack_330;
  uVar26 = uStack_338;
  ppuVar15 = ppuStack_350;
  puStack_250 = &uStack_1a8;
  ppuStack_258 = ppuStack_350;
  puStack_248 = &uStack_1d8;
  uStack_2a0 = uStack_2d8;
  puStack_240 = &uStack_110;
  puStack_238 = &uStack_140;
  uStack_228 = SUB81(ppuStack_2f0,0);
  uStack_298 = uStack_338;
  uStack_290 = uStack_330;
  uStack_227 = (undefined1)uStack_348;
  uStack_226 = (undefined1)uStack_344;
  uStack_288 = uStack_328;
  uStack_280 = uStack_320;
  uStack_278 = uStack_318;
  uStack_270 = uStack_310;
  uStack_225 = param_22;
  uStack_224 = (undefined1)uStack_2e4;
  uStack_268 = uStack_308;
  uStack_260 = uStack_2e0;
  ppuStack_2f0 = ppuVar13;
  lStack_2a8 = lVar23;
  _objc_retain();
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(uVar21);
  ppuVar5 = ppuStack_2f0;
  _objc_retain(uVar22);
  _objc_retain(uVar18);
  _objc_retain(uVar26);
  _objc_retain(uVar6);
  _objc_retain(lVar23);
  _objc_retain(ppuVar15);
  ppuVar13 = &puStack_2c8;
  func_0x000100bc0718(ppuVar5,PTR___dispatch_main_q_11034be20);
  _objc_release(uStack_260);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(uStack_278);
  _objc_release(uStack_280);
  _objc_release(uStack_288);
  _objc_release(uStack_290);
  _objc_release(uStack_298);
  _objc_release(uStack_2a0);
  _objc_release(lStack_2a8);
  _objc_release(ppuStack_258);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_220);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(uStack_1b0);
  __Block_object_dispose(&uStack_1a8,8);
  _objc_release(uStack_180);
  _objc_release(ppuStack_158);
  _objc_release(ppuVar5);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  __Block_object_dispose(&uStack_110,8);
  _objc_release(uStack_e8);
  _objc_release(ppuVar15);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_308);
  _objc_release(uStack_310);
  _objc_release(uStack_318);
  _objc_release(uStack_320);
  _objc_release(uStack_328);
  _objc_release(uStack_330);
  _objc_release(uStack_338);
  _objc_release(uStack_2d8);
  _objc_release(lVar23);
  _objc_release(ppuStack_300);
  _objc_release(uStack_2d0);
  lVar17 = lStack_2f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1d8,8);
  __Block_object_dispose(&uStack_1a8,8);
  __Block_object_dispose(&uStack_140,8);
  lVar23 = 8;
  __Block_object_dispose(&uStack_110);
  lVar8 = lVar17;
  __Unwind_Resume();
  uStack_3c0 = uVar2;
  uStack_3b8 = uVar3;
  uStack_3b0 = uVar21;
  uStack_3a8 = uVar22;
  ppuStack_3a0 = ppuVar15;
  uStack_398 = uVar18;
  uStack_390 = uVar6;
  ppuStack_380 = ppuVar5;
  pcStack_368 = FUN_1070d8c90;
  ppuStack_388 = &puStack_2c8;
  lStack_378 = lVar17;
  puStack_370 = &stack0xfffffffffffffff0;
  _objc_retain(lVar23);
  _objc_retain(ppuVar13);
  uVar26 = *(undefined8 *)(lVar8 + 0x20);
  _objc_retain(ppuVar25);
  func_0x00010be80040(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar26);
  if (*(char *)(lVar8 + 0x50) == '\x01') {
    uVar26 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010be9a5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010be80040(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar18);
    puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f8 = 0xc2000000;
    pcStack_3f0 = FUN_1070d8fc0;
    puStack_3e8 = &UNK_110858b70;
    uStack_3e0 = *(undefined8 *)(lVar8 + 0x20);
    uStack_3c8 = (undefined1)iVar24;
    uVar18 = *(undefined8 *)(lVar8 + 0x30);
    uStack_3d8 = uVar26;
    _objc_retain(uVar18);
    uStack_3d0 = uVar18;
    _objc_retain(uVar26);
    func_0x000100162d98("APPSTORE",&puStack_400);
    func_0x00010c123520(*(undefined8 *)(lVar8 + 0x20));
    _objc_release(uStack_3d0);
    _objc_release(uStack_3d8);
    _objc_release(uVar26);
  }
  if ((lVar23 != 0) && (iVar24 != 0)) {
    uVar19 = *(ulong *)(lVar8 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c07e920();
    if (((uVar20 & 1) == 0) && (*(char *)(lVar8 + 0x52) == '\x01')) {
      bVar1 = *(byte *)(lVar8 + 0x53);
      _objc_release(uVar19);
      if ((bVar1 & 1) != 0) goto LAB_1070d8e44;
      uVar19 = *(ulong *)(lVar8 + 0x20);
      func_0x00010bf46560(uVar19);
      _objc_retainAutoreleasedReturnValue();
      FUN_1070cb010();
    }
    _objc_release(uVar19);
  }
LAB_1070d8e44:
  uVar26 = *(undefined8 *)(lVar8 + 0x20);
  func_0x00010bf46560(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar26;
  FUN_1070cb180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar25);
  _objc_release(uVar26);
  uVar26 = *(undefined8 *)(lVar8 + 0x20);
  lVar17 = lVar23;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bdfcf20(uVar26);
  _objc_release(lVar17);
  if (iVar24 != 0) {
    uVar21 = *(undefined8 *)(lVar8 + 0x20);
    func_0x00010bfa3600(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar21;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar22);
    _objc_release(uVar26);
    _objc_release(uVar21);
    if (*(char *)(lVar8 + 0x52) == '\x01') {
      uVar26 = *(undefined8 *)(lVar8 + 0x20);
      func_0x00010bf600c0(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b93c0(*(undefined8 *)(lVar8 + 0x20));
      _objc_release(uVar26);
      func_0x00010bea5300(*(undefined8 *)(lVar8 + 0x20));
    }
  }
  _objc_release(uVar18);
  _objc_release(ppuVar13);
  _objc_release(lVar23);
  return;
}



/* Entry: 1070d8c90; end: 1070d8fbf;  */

void FUN_1070d8c90(long param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  func_0x00010be80040(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar8);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be9a5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be80040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar2);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1070d8fc0;
    puStack_88 = &UNK_110858b70;
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = (undefined1)param_4;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = uVar8;
    _objc_retain(uVar2);
    uStack_70 = uVar2;
    _objc_retain(uVar8);
    func_0x000100162d98("APPSTORE",&puStack_a0);
    func_0x00010c123520(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uVar8);
  }
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07e920();
    if (((uVar4 & 1) == 0) && (*(char *)(param_1 + 0x52) == '\x01')) {
      bVar1 = *(byte *)(param_1 + 0x53);
      _objc_release(uVar3);
      if ((bVar1 & 1) != 0) goto LAB_1070d8e44;
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf46560(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_1070cb010();
    }
    _objc_release(uVar3);
  }
LAB_1070d8e44:
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  FUN_1070cb180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bdfcf20(uVar8);
  _objc_release(lVar5);
  if (param_4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
    if (*(char *)(param_1 + 0x52) == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf600c0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b93c0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar8);
      func_0x00010bea5300(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070d8fc0; end: 1070d903f;  */

void FUN_1070d8fc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1122a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined1 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be43740(uVar5);
  func_0x00010bf76ee0(uVar4,param_2,uVar2,uVar1,uVar5,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1070d9040; end: 1070d9183;  */

void FUN_1070d9040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070d9184; end: 1070d9627;  */

void FUN_1070d9184(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    pcVar11 = *(code **)(lVar2 + 0x10);
    uVar3 = 0;
LAB_1070d95e0:
    (*pcVar11)(lVar2,0,0,0,uVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28) == 0) {
        lVar2 = *(long *)(param_1 + 0x70);
        uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 8) + 0x28);
        pcVar11 = *(code **)(lVar2 + 0x10);
        goto LAB_1070d95e0;
      }
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1070d9628;
      puStack_80 = &UNK_1108dd208;
      puVar12 = *(undefined **)(param_1 + 0x70);
      lStack_78 = lVar1;
      _objc_retain(puVar12);
      ppuVar9 = &puStack_98;
      puStack_70 = puVar12;
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + 0x28);
      func_0x00010bfb1920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x28);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be999a0(lVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(ppuVar9);
      puVar12 = puStack_70;
    }
    else {
      puVar12 = PTR_PTR_1126c4ad0;
      _objc_alloc(PTR_PTR_1126c4ad0);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c0d9500(uVar3);
      lVar2 = lVar1;
      func_0x00010c13b540(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060b80(puVar12);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(uVar3);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        uVar18 = 0;
        do {
          puVar8 = PTR_PTR_1126b1350;
          _objc_alloc(PTR_PTR_1126b1350);
          func_0x00010bfeee60();
          ppuVar9 = &PTR____CFConstantStringClassReference_110f314b8;
          func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                              &PTR____CFConstantStringClassReference_110dbab38,1,puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_release(ppuVar9);
          _objc_release(puVar8);
          uVar18 = uVar18 + 1;
          uVar10 = *(ulong *)(param_1 + 0x20);
          func_0x00010bf529e0();
        } while (uVar18 < uVar10);
      }
      puVar8 = PTR_PTR_1126c4ac8;
      _objc_alloc(PTR_PTR_1126c4ac8);
      func_0x00010beb3dc0(lVar1);
      func_0x00010c0525e0(puVar8);
      _objc_initWeak(auStack_a0,lVar1);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_b0,auStack_a0);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      _objc_retain(uVar4);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar13);
      uStack_a8 = *(undefined1 *)(param_1 + 0xa0);
      uStack_a7 = *(undefined2 *)(param_1 + 0xa1);
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar14);
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar15);
      uVar16 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar16);
      uVar17 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar17);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      func_0x00010bf16e60(puVar12);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar3);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar12);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1070d9628; end: 1070d97ff;  */

void FUN_1070d9628(long param_1,undefined *param_2,long param_3,int param_4,undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126af4c0;
  if (((param_4 == 0) || (param_2 == (undefined *)0x0)) || (param_3 == 0)) {
    lVar8 = *(long *)(param_1 + 0x28);
    pcVar9 = *(code **)(lVar8 + 0x10);
    _objc_retain(param_5);
    _objc_retain(param_2);
    puVar5 = (undefined *)0x0;
    uVar6 = 0;
    (*pcVar9)(lVar8,0,0,0,param_5);
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_5);
    _objc_retain(param_2);
    func_0x00010c13b540(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x0001070c5aac();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar10);
    lVar8 = *(long *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    puVar5 = puVar3;
    (**(code **)(lVar8 + 0x10))(lVar8,puVar3,puVar4,1,param_5);
    _objc_release(param_5);
    _objc_release(param_2);
    param_2 = puVar3;
    param_5 = puVar4;
  }
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  lVar7 = param_3 + 0x68;
  _objc_loadWeakRetained();
  if (lVar7 == 0) {
    (**(code **)(*(long *)(param_3 + 0x50) + 0x10))(*(long *)(param_3 + 0x50),0,0,0,uVar6);
  }
  else {
    func_0x00010be996a0(lVar7);
  }
  _objc_release(uVar6);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1070d9800; end: 1070d98e7;  */

void FUN_1070d9800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),0,0,0,param_4);
  }
  else {
    func_0x00010be996a0(lVar1);
  }
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070d98e8; end: 1070d9adf;  */

void FUN_1070d98e8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 1070d9ae0; end: 1070da0af; -[PreviewViewController _saveMultiSnapToGalleryWithVideoUrls:timeRanges:overlayFormats:gallerySnapOverlays:error:galleryMultiSnapCompletion:manualSave:isPrivate:isFromCameraRoll:gallerySavingEventId:captureSessionId:customStoryMetadata:location:createTimeOfFirstSnap:] */

void FUN_1070d9ae0(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  undefined1 uStack_78;
  undefined1 uStack_76;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  ppuVar1 = param_1;
  func_0x00010be44a20();
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  if ((int)ppuVar1 == 0) {
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010bf3f040();
  }
  else {
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c2997e0();
  }
  func_0x00010b5fbca8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf5c600();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c081200();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (param_3 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0,0,0,param_7);
  }
  else {
    ppuVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c246620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9fd0;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    func_0x00010c0d2400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_1;
    func_0x00010bf124a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = param_1;
    func_0x00010c0d2440(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c14c060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_88,auStack_70);
    uStack_78 = param_9;
    _objc_retain(param_11);
    _objc_retain(param_3);
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar1);
    ppuStack_80 = ppuVar5;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_14);
    uStack_76 = SUB81(ppuVar6,0);
    _objc_retain(param_15);
    _objc_retain(param_4);
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_13);
    func_0x00010be1ab20(param_1);
    _objc_release(param_13);
    _objc_release(param_8);
    _objc_release(param_12);
    _objc_release(param_4);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(ppuVar1);
    _objc_release(ppuVar2);
    _objc_release(ppuVar8);
    _objc_release(param_3);
    _objc_release(param_11);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_release(ppuVar4);
    _objc_release(ppuVar8);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070da0b0; end: 1070da5bb;  */

void FUN_1070da0b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x88);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_1070da590;
  puVar2 = puVar1;
  puStack_80 = puVar1;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c08fa60();
    }
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = puVar2;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puStack_70;
    func_0x00010c0d22a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_78;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbabe0();
    puVar4 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
LAB_1070da3e0:
    func_0x00010bef9e60(puVar3);
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar2;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = puStack_70;
      func_0x00010c0d22a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puStack_78;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbabe0();
      puVar4 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      goto LAB_1070da3e0;
    }
    func_0x00010c27dd80();
    puVar2 = *(undefined **)(param_1 + 0x78);
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = *(undefined **)(param_1 + 0x78);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar3;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_80;
    func_0x00010c0d22a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    puVar6 = puVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbabe0();
    func_0x00010bef9d20(puVar4);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puStack_80);
  _objc_release(puVar3);
  _objc_release(puStack_78);
  _objc_release(puStack_70);
  _objc_release(puVar2);
LAB_1070da590:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070da5bc; end: 1070da6ff; -[PreviewViewController _saveSnapToCameraRollWithSaveSessionId:snapId:manualSave:] */

void FUN_1070da5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06c920();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beb57e0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c078120();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be99680(param_1,param_2,param_3,1,0);
      goto LAB_1070da6dc;
    }
  }
  uVar1 = param_1;
  func_0x00010be44a20();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010bdca5e0();
    if ((((uint)uVar1 | (uint)uVar4) & 1) != 0) {
      func_0x00010be99b80(param_1,param_2,param_3,param_4,0);
    }
  }
  else {
    func_0x00010be9a100(param_1,param_2,param_5,param_3,0);
  }
LAB_1070da6dc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070da700; end: 1070da89f; -[PreviewViewController _saveMultiSnapToCameraRollWithSaveSessionId:deleteAfterSaving:completion:] */

void FUN_1070da700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7240();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250660();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1070da8a0;
  puStack_78 = &UNK_1108420a0;
  uStack_70 = param_1;
  _objc_retain(param_3);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1070da918;
  puStack_b0 = &UNK_110864758;
  uStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = param_5;
  uStack_68 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf9cf20(uVar4,param_2,param_4,&puStack_90,&puStack_c8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1070da8a0; end: 1070da917;  */

void FUN_1070da8a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be5f2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar1);
  func_0x00010be0ca60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070da918; end: 1070da963;  */

void FUN_1070da918(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010be9a620(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070da964; end: 1070dab4b; -[PreviewViewController _saveLongVideoSnapToCameraRoll:saveSessionId:completion:] */

void FUN_1070da964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7240();
  _objc_release(uVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_1070c4dd4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1070ced0c;
  uStack_60 = 0x1070ced1c;
  _objc_retain(param_3);
  uVar1 = param_3;
  uStack_58 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c14af80(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070dab4c; end: 1070dabab;  */

void FUN_1070dab4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010be9a620(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070dabac; end: 1070db097; -[PreviewViewController _saveSingleLongSnapWithVideoProvider:saveSessionId:timeRanges:captureTimeUtc:createTimeUtc:overlayFormat:gallerySnapOverlay:manualSave:location:isPrivate:isFromCameraRoll:gallerySavingEventId:captureSessionId:customStoryMetadata:deviceFirmwareInfo:deviceId:needsTranscoding:saveIntoCameraRoll:gallerySnapCompletionHandler:] */

void FUN_1070dabac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
                  undefined4 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  uVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14c060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(param_9);
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_17);
  _objc_retain(param_12);
  _objc_retain(param_8);
  _objc_retain(param_16);
  _objc_retain(param_4);
  _objc_retain(param_15);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_3);
  func_0x00010be1ab20(param_1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_22);
  _objc_release(param_18);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_16);
  _objc_release(param_4);
  _objc_release(param_15);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_22);
  _objc_release(param_18);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_16);
  _objc_release(param_4);
  _objc_release(param_15);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_9 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c640(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070db098; end: 1070db133;  */

void FUN_1070db098(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),7);
  return;
}



/* Entry: 1070db134; end: 1070db213; -[PreviewViewController _videoSnapAssetMediaFromTheVideoProvider:] */

void FUN_1070db134(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010bf9d2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c27e760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc0da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
    puVar5 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1070db214; end: 1070dbb2b; -[PreviewViewController _exportAndSaveLongVideoWithOriginalVideoProvider:gallerySnapOverlay:timeRanges:captureTimeUtc:createTimeUtc:gallerySavingEventId:saveSessionId:captureSessionId:overlayFormat:assetMedias:manualSave:saveIntoCameraRoll:location:isPrivate:customStoryMetadata:deviceId:deviceFirmwareInfo:needsTranscoding:isFromCameraRoll:gallerySnapCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070db214(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  char param_21,undefined4 param_22,undefined8 param_23)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuStack_2a8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  ppuVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9fd0;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c14bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar3 = param_1;
  func_0x00010bf12480();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  ppuVar4 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_initWeak(auStack_80,param_1);
  if (param_21 == '\0') {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126ae568;
    _objc_opt_new();
  }
  ppuVar4 = param_1;
  func_0x00010bf14280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_21 != '\0') {
    ppuVar7 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)((long)ppuVar7 + (long)_DAT_1127641f8);
    }
    _objc_retain(uVar13);
    uVar10 = uVar13;
    func_0x00010c071800();
    _objc_release(uVar13);
    _objc_release(ppuVar7);
    if ((int)uVar10 != 0) {
      puVar11 = PTR_PTR_1126d4c10;
      _objc_alloc(PTR_PTR_1126d4c10);
      ppuVar7 = param_1;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c14a0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar8;
      if (ppuVar8 == (undefined **)0x0) {
        ppuStack_2a8 = param_1;
        func_0x00010c1122a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuStack_2a8;
        func_0x00010c22a7c0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_c0 = puVar2;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1070dbb2c;
      puStack_a8 = &UNK_11084c4a0;
      _objc_retain(ppuVar4);
      ppuStack_a0 = ppuVar4;
      _objc_retain(ppuVar6);
      ppuStack_98 = ppuVar6;
      _objc_retain(param_9);
      uStack_90 = param_9;
      _objc_retain(ppuVar9);
      ppuStack_88 = ppuVar9;
      func_0x00010c038f20(puVar11);
      if (ppuVar8 == (undefined **)0x0) {
        _objc_release(ppuVar12);
        _objc_release(ppuStack_2a8);
      }
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      ppuVar7 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar7 == (undefined **)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)((long)ppuVar7 + (long)_DAT_1127641f8);
      }
      _objc_retain(uVar13);
      func_0x00010bf9d620(uVar13);
      _objc_release(uVar13);
      _objc_release(ppuVar7);
      _objc_release(puVar11);
      _objc_release(ppuStack_88);
      _objc_release(uStack_90);
      _objc_release(ppuStack_98);
      _objc_release(ppuStack_a0);
    }
  }
  puStack_f0 = puVar2;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1070dbc04;
  puStack_d8 = &UNK_11098dae8;
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_23);
  uStack_d0 = param_23;
  ppuVar7 = &puStack_f0;
  _objc_retainBlock();
  _objc_retain(puVar14);
  _objc_retain(ppuVar7);
  _objc_retain(puVar14);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar1);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  func_0x00010be0c800(param_1);
  _objc_release(param_18);
  _objc_release(param_19);
  _objc_release(param_20);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_12);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar14);
  _objc_release(ppuVar7);
  _objc_release(puVar14);
  _objc_release(ppuVar7);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070dbb2c; end: 1070dbbd7;  */

void FUN_1070dbb2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1070dbbd8;
  puStack_50 = &UNK_110848ba8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1070dbbd8; end: 1070dbc03;  */

void FUN_1070dbbd8(long param_1,undefined8 param_2)

{
  func_0x00010bf72de0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bf2e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_cancelOngoingTranscoding_1125a93c0);
  return;
}



/* Entry: 1070dbc04; end: 1070dbd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070dbc04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + _DAT_1127641f8);
  }
  _objc_retain(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3,param_4,param_5);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070dbd14; end: 1070dbd57;  */

void FUN_1070dbd14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070dbd58; end: 1070dc5db;  */

void FUN_1070dbd58(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,param_3);
    }
    goto LAB_1070dc564;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  puVar11 = *(undefined **)(param_1 + 0x38);
  _objc_retain(puVar11);
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1070ced0c;
  uStack_78 = 0x1070ced1c;
  puStack_90 = &uStack_98;
  _objc_retain(param_2);
  puVar5 = puVar11;
  uStack_e8 = uVar2;
  lStack_70 = param_2;
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar9;
    func_0x00010c29af20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010bee8f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      puVar5 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar11);
      _objc_release(puVar4);
    }
    _objc_release(lVar1);
  }
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1070dc5dc;
  puStack_c8 = &UNK_11098db48;
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar2);
  uStack_a0 = *(undefined1 *)(param_1 + 0xb8);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = uVar2;
  puStack_a8 = &uStack_98;
  _objc_retain(*(undefined8 *)(param_1 + 0x48));
  uStack_9f = *(undefined1 *)(param_1 + 0xb9);
  ppuVar6 = &puStack_e0;
  uStack_c0 = uVar7;
  uStack_b8 = uVar9;
  _objc_retainBlock();
  if (*(char *)(param_1 + 0xba) == '\x01') {
    puStack_120 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    _objc_release(puVar11);
    func_0x00010be33ee0();
    puStack_100 = *(undefined **)(param_1 + 0x40);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puStack_100;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puStack_138;
    func_0x00010befb6a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puStack_108;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    puVar8 = *(undefined **)(param_1 + 0x80);
    _objc_retain(puVar8);
    puVar4 = puVar8;
    func_0x00010010fab4(puVar8,PTR_DAT_1126a5938);
    puVar11 = puVar8;
    if ((int)puVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar8);
    puStack_128 = *(undefined **)(param_1 + 0x40);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbabe0();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c240ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be20760();
    func_0x00010befc960(puStack_130);
LAB_1070dc4dc:
    _objc_release(uVar2);
  }
  else {
    puStack_120 = *(undefined **)(param_1 + 0xa0);
    if (puStack_120 != (undefined *)0x0) {
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      puStack_100 = *(undefined **)(param_1 + 0xa0);
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      puStack_138 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      _objc_release(puVar11);
      puStack_108 = *(undefined **)(param_1 + 0x40);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = puStack_108;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_130;
      func_0x00010bf11c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = puVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      uVar9 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain(uVar9);
      uVar7 = uVar9;
      func_0x00010010fab4(uVar9,PTR_DAT_1126a5938);
      uVar2 = uVar9;
      if ((int)uVar7 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbabe0();
      func_0x00010bef7040(puStack_128);
      _objc_release(uVar7);
      goto LAB_1070dc4dc;
    }
    puStack_120 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    _objc_release(puVar11);
    puStack_100 = *(undefined **)(param_1 + 0x40);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puStack_100;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puStack_138;
    func_0x00010bf11c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puStack_108;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    puVar8 = *(undefined **)(param_1 + 0x80);
    _objc_retain(puVar8);
    puVar4 = puVar8;
    func_0x00010010fab4(puVar8,PTR_DAT_1126a5938);
    puVar11 = puVar8;
    if ((int)puVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar8);
    puStack_128 = *(undefined **)(param_1 + 0x40);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbabe0();
    func_0x00010bef7080(puStack_130);
  }
  _objc_release(puStack_128);
  _objc_release(puVar11);
  _objc_release(puStack_130);
  _objc_release(puStack_108);
  _objc_release(puStack_138);
  _objc_release(puStack_100);
  _objc_release(puStack_120);
  _objc_release(ppuVar6);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(lStack_70);
  _objc_release(puVar5);
  _objc_release(uVar10);
  _objc_release(uStack_e8);
LAB_1070dc564:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070dc5dc; end: 1070dc6ff;  */

void FUN_1070dc5dc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1070dc700;
  puStack_70 = &UNK_11098db18;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_2);
  uStack_68 = param_2;
  _objc_retain(param_3);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  ppuVar1 = &puStack_88;
  uStack_60 = param_3;
  uStack_48 = param_4;
  _objc_retainBlock();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010be99680(*(undefined8 *)(param_1 + 0x20));
  }
  else if (ppuVar1 != (undefined **)0x0) {
    (*(code *)ppuVar1[2])(ppuVar1,0);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070dc700; end: 1070dc7fb;  */

void FUN_1070dc700(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined1 *)(param_1 + 0x40),param_2);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070dc7fc; end: 1070dc807; -[PreviewViewController _exportLongVideoIfNeeded:completion:] */

void FUN_1070dc7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportLongVideoIfNeeded_progres_112560ba0,param_3,0,param_4);
  return;
}



/* Entry: 1070dc808; end: 1070dc8d7; -[PreviewViewController _exportLongVideoIfNeeded:progressHandler:completion:] */

void FUN_1070dc808(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,0);
    }
  }
  else {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
    func_0x00010bf9cf40(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070dc8d8; end: 1070dcf43; -[PreviewViewController _generateAssetMediasForMultiSnapStates:completion:] */

void FUN_1070dc8d8(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  puVar3 = puVar2;
  _dispatch_group_create();
  uVar17 = param_3;
  func_0x00010bf529e0();
  if (uVar17 != 0) {
    uVar17 = 0;
    do {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      func_0x00010befa120(puVar2);
      uVar6 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x000107e00808();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 != 0) {
        _dispatch_group_enter(puVar3);
        uVar7 = uVar8;
        func_0x00010bf377a0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010c254140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06c000(uVar8);
        puVar10 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf3f860();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1070dcf44;
        puStack_90 = &UNK_11098dba8;
        _objc_retain(puVar4);
        puStack_88 = puVar4;
        _objc_retain(puVar3);
        puStack_80 = puVar3;
        func_0x00010be1c5e0(param_1);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(uVar9);
        _objc_release(uVar7);
        _objc_release(puStack_80);
        _objc_release(puStack_88);
      }
      _dispatch_group_enter(puVar3);
      uVar7 = uVar6;
      func_0x00010c0cece0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00010c0d36c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_1070dcfa0;
      puStack_d0 = &UNK_11098dbd8;
      _objc_retain(puVar4);
      puStack_c8 = puVar4;
      _objc_retain(uVar9);
      uStack_c0 = uVar9;
      _objc_retain(puVar5);
      puStack_b8 = puVar5;
      _objc_retain(puVar3);
      puStack_b0 = puVar3;
      func_0x00010be1c5c0(param_1);
      _objc_release(uVar7);
      _dispatch_group_enter(puVar3);
      uVar7 = uVar6;
      func_0x00010c2a09a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010bf0ed00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00010c0cece0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puStack_128 = puVar10;
      uStack_120 = 0xc2000000;
      uStack_118 = 0x1070dd090;
      puStack_110 = &UNK_11098dbd8;
      _objc_retain(puVar4);
      puStack_108 = puVar4;
      _objc_retain(uVar13);
      uStack_100 = uVar13;
      _objc_retain(puVar5);
      puStack_f8 = puVar5;
      _objc_retain(puVar3);
      puStack_f0 = puVar3;
      func_0x00010be1c600(param_1);
      puVar10 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0811c0();
      if ((int)puVar11 == 0) {
LAB_1070dcddc:
        _objc_release(puVar10);
      }
      else {
        puVar11 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar11;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c07f160();
        _objc_release(puVar14);
        _objc_release(puVar11);
        _objc_release(puVar10);
        if ((int)puVar15 != 0) {
          puVar11 = param_1;
          func_0x00010c1111c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar11;
          func_0x00010c127e00();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010bf00140();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          puVar10 = PTR___NSConcreteStackBlock_11034bd00;
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar11);
          _dispatch_group_enter(puVar3);
          puStack_158 = puVar10;
          uStack_150 = 0xc2000000;
          uStack_148 = 0x1070dd180;
          puStack_140 = &UNK_11098dba8;
          _objc_retain(puVar4);
          puStack_138 = puVar4;
          _objc_retain(puVar3);
          puStack_130 = puVar3;
          func_0x00010bfc0d60(param_1);
          _objc_release(puStack_130);
          puVar10 = puStack_138;
          goto LAB_1070dcddc;
        }
      }
      _objc_release(puStack_f0);
      _objc_release(puStack_f8);
      _objc_release(uStack_100);
      _objc_release(puStack_108);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(puStack_b0);
      _objc_release(puStack_b8);
      _objc_release(uStack_c0);
      _objc_release(puStack_c8);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar17 = uVar17 + 1;
      uVar6 = param_3;
      func_0x00010bf529e0();
    } while (uVar17 < uVar6);
  }
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1070dd2d0;
  puStack_178 = &UNK_11084a9e8;
  puStack_170 = puVar1;
  puStack_168 = puVar2;
  uStack_160 = param_4;
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x000100bc0718(puVar3,PTR___dispatch_main_q_11034be20,&puStack_190);
  _objc_release(puStack_168);
  _objc_release(puStack_170);
  _objc_release(uStack_160);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1070dcf44; end: 1070dcf9f;  */

void FUN_1070dcf44(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1070dcfa0; end: 1070dd2cf;  */

void FUN_1070dcfa0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      puVar1 = PTR_PTR_1126bcd70;
      _objc_opt_new(PTR_PTR_1126bcd70);
      puVar2 = PTR_PTR_1126c4038;
      _objc_opt_new(PTR_PTR_1126c4038);
      if (*(long *)(param_1 + 0x28) == 0) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = (double)*(float *)(*(long *)(param_1 + 0x28) + 8);
      }
      func_0x00010c2241a0(dVar3,puVar2);
      func_0x00010c16c540(puVar1);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070dd2d0; end: 1070dd2e3;  */

void FUN_1070dd2d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070dd2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1070dd2e4; end: 1070dd35f; -[PreviewViewController _exportingCompletedWithSaveSessionId:error:] */

void FUN_1070dd2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be80040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070dd360; end: 1070dd4cb; -[PreviewViewController _savingToSnapAlbumCompletedWithSaveSessionId:error:] */

void FUN_1070dd360(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010be2f900(param_1,param_2,param_4);
  }
  uVar1 = param_1;
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfbdda0();
  func_0x00010bf73f60(uVar1,param_2,param_3,uVar5,param_4 == 0,param_4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7260();
  _objc_release(uVar1);
  if (param_4 == 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070dd4cc; end: 1070dd8bb; -[PreviewViewController _replaceBatchCaptureSavedSnapsWithOverlayFormats:overlays:timeRanges:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070dd4cc(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1070dd8bc;
  puStack_70 = &UNK_11085a2a8;
  _objc_retain(param_8);
  uStack_68 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  _objc_retainBlock();
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c14bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c07d220();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1583c0();
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfbcc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar6;
    func_0x00010bf16c40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c280560(uStack_98);
    func_0x00010c0df780(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar2);
    uVar2 = uVar6;
    func_0x00010bf97060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar8 = param_4;
    func_0x00010bfb1920(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar9 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010bedc840(param_1);
    _objc_release(param_7);
  }
  else {
    uStack_98 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uStack_98;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8ea20(param_1);
    uVar9 = param_6;
    param_6 = param_7;
    uVar8 = param_5;
    uVar4 = param_4;
    uVar2 = param_3;
  }
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uStack_98);
  _objc_release(uVar5);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_8);
  return;
}



/* Entry: 1070dd8bc; end: 1070dda43;  */

/* WARNING: Possible PIC construction at 0x0001070de0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001070de0fc) */

void FUN_1070dd8bc(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puStack_3c8;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  long lStack_e8;
  undefined *puStack_60;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4c08;
  puVar14 = param_5;
  if ((param_2 == 0) || (param_3 == 0)) {
    lVar17 = *(long *)(param_1 + 0x20);
    pcVar18 = *(code **)(lVar17 + 0x10);
    _objc_retain(param_5);
    (*pcVar18)(lVar17,0);
  }
  else {
    _objc_retain(param_5);
    func_0x00010bf16be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeac0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aec60(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar17 = *(long *)(param_1 + 0x20);
    puStack_60 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar17 + 0x10))(lVar17,puVar2);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puStack_60);
    param_5 = puVar1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(puVar14);
  _objc_retain(puVar15);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puStack_60);
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 1;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x3032000000;
  pcStack_220 = FUN_1070ced0c;
  uStack_218 = 0x1070ced1c;
  uStack_210 = 0;
  uVar3 = 0;
  _dispatch_semaphore_create();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar19 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010bf16c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar19);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar19 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar19);
  puVar6 = puVar1;
  func_0x00010c1c84e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  _objc_retain();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar16 = *plStack_270;
    do {
      puStack_3c8 = (undefined *)0x0;
      do {
        if (*plStack_270 != lVar16) {
          _objc_enumerationMutation(puVar6);
        }
        uVar19 = param_2;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar20;
        func_0x00010bf16c40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar20);
        _objc_release(uVar19);
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        plStack_2b0 = (long *)0x0;
        _objc_retain(uVar5);
        uVar19 = uVar5;
        func_0x00010bf52a60();
        if (uVar19 != 0) {
          lVar17 = *plStack_2b0;
          do {
            uVar20 = 0;
            do {
              if (*plStack_2b0 != lVar17) {
                _objc_enumerationMutation(uVar5);
              }
              uVar4 = param_2;
              func_0x00010c13b540(param_2);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar4;
              func_0x0001070c5a88();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010bf6d080();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR_PTR_1126b2220;
              _objc_alloc(PTR_PTR_1126b2220);
              puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c04a560(puVar11);
              puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_2f0 = 0xc2000000;
              pcStack_2e8 = FUN_1070de408;
              puStack_2e0 = &UNK_11098dc48;
              puStack_2d0 = &uStack_208;
              puStack_2c8 = &uStack_238;
              _objc_retain(uVar3);
              uStack_2d8 = uVar3;
              func_0x00010bf6c840(uVar10);
              _objc_release(puVar11);
              _objc_release(puVar12);
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar4);
              _dispatch_semaphore_wait(uVar3,0xffffffffffffffff);
              _objc_release(uStack_2d8);
              uVar20 = uVar20 + 1;
            } while (uVar19 != uVar20);
            uVar19 = uVar5;
            func_0x00010bf52a60();
          } while (uVar19 != 0);
        }
        _objc_release(uVar5);
        _objc_release(uVar5);
        puStack_3c8 = puStack_3c8 + 1;
      } while (puStack_3c8 != puVar7);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  uVar19 = 0;
  do {
    uVar20 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar20;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar20);
    if (uVar8 <= uVar19) {
      puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_370 = 0xc2000000;
      pcStack_368 = FUN_1070de520;
      puStack_360 = &UNK_11084be40;
      _objc_retain(param_4);
      uStack_358 = param_4;
      uStack_350 = param_2;
      _objc_retain(puStack_60);
      puStack_340 = &uStack_208;
      puStack_348 = puStack_60;
      puStack_338 = &uStack_238;
      func_0x000100162d98("APPSTORE",&puStack_378);
      _objc_release(puStack_348);
      _objc_release(uStack_358);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_238,8);
      _objc_release(uStack_210);
      __Block_object_dispose(&uStack_208,8);
      _objc_release(puStack_60);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        return;
      }
      ___stack_chk_fail();
      __Block_object_dispose(&uStack_238,8);
      uVar20 = 8;
      __Block_object_dispose(&uStack_208,8);
      __Unwind_Resume(param_4);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c280560(uVar20);
code_r0x00010c0df780:
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,uVar20);
      return;
    }
    uVar4 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfbcc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (uVar9 != 0) {
      func_0x00010bf16c40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c280560(uVar20);
      goto code_r0x00010c0df780;
    }
    func_0x00010bfb4f60(uVar20);
    puVar7 = puVar14;
    func_0x00010c0dfd40(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    func_0x00010c0dfd40(puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_6;
    func_0x00010c0dfd40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_328 = 0xc2000000;
    uStack_320 = 0x1070de494;
    puStack_318 = &UNK_11098dc78;
    puStack_308 = &uStack_208;
    puStack_300 = &uStack_238;
    _objc_retain(uVar3);
    uStack_310 = uVar3;
    func_0x00010bedc840(param_2);
    _dispatch_semaphore_wait(uVar3,0xffffffffffffffff);
    _objc_release(uStack_310);
    _objc_release(uVar13);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(0);
    _objc_release(0);
    _objc_release(uVar20);
    uVar19 = uVar19 + 1;
  } while( true );
}



/* Entry: 1070dda44; end: 1070de3d7; -[PreviewViewController _replaceBatchCaptureAllSavedSnapsGalleryEntry:withOverlayFormats:overlays:timeRanges:gallerySavingEventId:captureSessionId:completionHandler:] */

/* WARNING: Possible PIC construction at 0x0001070de0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001070de0fc) */

void FUN_1070dda44(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_368;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_1a0 = &uStack_1a8;
  uStack_1a8 = 0;
  uStack_198 = 0x2020000000;
  uStack_190 = 1;
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_1070ced0c;
  uStack_1b8 = 0x1070ced1c;
  uStack_1b0 = 0;
  uVar1 = 0;
  _dispatch_semaphore_create();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar18 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar19;
  func_0x00010bf16c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar18);
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar18 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar19;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar18);
  puVar6 = puVar4;
  func_0x00010c1c84e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar16 = *plStack_210;
    do {
      puStack_368 = (undefined *)0x0;
      do {
        if (*plStack_210 != lVar16) {
          _objc_enumerationMutation(puVar6);
        }
        uVar18 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar18;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar19;
        func_0x00010bf16c40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar19);
        _objc_release(uVar18);
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        plStack_250 = (long *)0x0;
        _objc_retain(uVar3);
        uVar18 = uVar3;
        func_0x00010bf52a60();
        if (uVar18 != 0) {
          lVar17 = *plStack_250;
          do {
            uVar19 = 0;
            do {
              if (*plStack_250 != lVar17) {
                _objc_enumerationMutation(uVar3);
              }
              uVar2 = param_1;
              func_0x00010c13b540(param_1);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar2;
              func_0x0001070c5a88();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010bf6d080();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR_PTR_1126b2220;
              _objc_alloc(PTR_PTR_1126b2220);
              puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c04a560(puVar11);
              puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_290 = 0xc2000000;
              pcStack_288 = FUN_1070de408;
              puStack_280 = &UNK_11098dc48;
              puStack_270 = &uStack_1a8;
              puStack_268 = &uStack_1d8;
              _objc_retain(uVar1);
              uStack_278 = uVar1;
              func_0x00010bf6c840(uVar10);
              _objc_release(puVar11);
              _objc_release(puVar12);
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar2);
              _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
              _objc_release(uStack_278);
              uVar19 = uVar19 + 1;
            } while (uVar18 != uVar19);
            uVar18 = uVar3;
            func_0x00010bf52a60();
          } while (uVar18 != 0);
        }
        _objc_release(uVar3);
        _objc_release(uVar3);
        puStack_368 = puStack_368 + 1;
      } while (puStack_368 != puVar7);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  uVar18 = 0;
  do {
    uVar19 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar19;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar19);
    if (uVar8 <= uVar18) {
      puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_310 = 0xc2000000;
      pcStack_308 = FUN_1070de520;
      puStack_300 = &UNK_11084be40;
      _objc_retain(param_3);
      uStack_2f8 = param_3;
      uStack_2f0 = param_1;
      _objc_retain(param_9);
      puStack_2e0 = &uStack_1a8;
      uStack_2e8 = param_9;
      puStack_2d8 = &uStack_1d8;
      func_0x000100162d98("APPSTORE",&puStack_318);
      _objc_release(uStack_2e8);
      _objc_release(uStack_2f8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_1d8,8);
      _objc_release(uStack_1b0);
      __Block_object_dispose(&uStack_1a8,8);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      ___stack_chk_fail();
      __Block_object_dispose(&uStack_1d8,8);
      uVar19 = 8;
      __Block_object_dispose(&uStack_1a8,8);
      __Unwind_Resume(param_3);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c280560(uVar19);
code_r0x00010c0df780:
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_numberWithInteger__1126157f8,uVar19);
      return;
    }
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfbcc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar9 != 0) {
      func_0x00010bf16c40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c280560(uVar19);
      goto code_r0x00010c0df780;
    }
    func_0x00010bfb4f60(uVar19);
    uVar13 = param_4;
    func_0x00010c0dfd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_6;
    func_0x00010c0dfd40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c8 = 0xc2000000;
    uStack_2c0 = 0x1070de494;
    puStack_2b8 = &UNK_11098dc78;
    puStack_2a8 = &uStack_1a8;
    puStack_2a0 = &uStack_1d8;
    _objc_retain(uVar1);
    uStack_2b0 = uVar1;
    func_0x00010bedc840(param_1);
    _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
    _objc_release(uStack_2b0);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(0);
    _objc_release(0);
    _objc_release(uVar19);
    uVar18 = uVar18 + 1;
  } while( true );
}



/* Entry: 1070de3d8; end: 1070de407;  */

void FUN_1070de3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c280560(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 1070de408; end: 1070de51f;  */

void FUN_1070de408(long param_1,byte param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_3 == 0) {
    bVar1 = param_2 & *(byte *)(lVar2 + 0x18);
  }
  *(byte *)(lVar2 + 0x18) = bVar1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(lVar4 + 0x28);
  }
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_retain(param_3);
  _objc_release(uVar3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070de520; end: 1070de6b3;  */

void FUN_1070de520(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar6 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),puVar6,puVar7,
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1070de6b4; end: 1070deeff; -[PreviewViewController _replaceBatchCaptureAllSavedSnapsWithMultipleGalleryEntries:overlayFormats:overlays:timeRanges:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070de6b4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 1;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_1070ced0c;
  uStack_138 = 0x1070ced1c;
  uStack_130 = 0;
  uVar14 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar14;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1070def00;
  puStack_168 = &UNK_11098dca8;
  uVar3 = uVar2;
  uStack_160 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar14);
  uVar5 = 0;
  _dispatch_semaphore_create();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar17 = *plStack_1b0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1b0 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar16 = *(undefined8 *)(lStack_1b8 + lVar19 * 8);
        puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e0 = 0xc2000000;
        pcStack_1d8 = FUN_1070defa4;
        puStack_1d0 = &UNK_11098dcd8;
        puVar7 = puVar4;
        uStack_1c8 = uVar16;
        func_0x00010bf04920();
        if (((ulong)puVar7 & 1) == 0) {
          uVar14 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar14;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf6d080();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_108 = uVar16;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b2220;
          _objc_alloc(PTR_PTR_1126b2220);
          puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560(puVar8);
          puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_218 = 0xc2000000;
          pcStack_210 = FUN_1070defe4;
          puStack_208 = &UNK_11098dc48;
          puStack_1f8 = &uStack_128;
          puStack_1f0 = &uStack_158;
          _objc_retain(uVar5);
          uStack_200 = uVar5;
          func_0x00010bf6bbc0(uVar3);
          _objc_release(puVar8);
          _objc_release(puVar18);
          _objc_release(puVar7);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar14);
          _dispatch_semaphore_wait(uVar5,0xffffffffffffffff);
          _objc_release(uStack_200);
        }
        lVar19 = lVar19 + 1;
      } while (lVar6 != lVar19);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  while( true ) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar9 <= uVar14) break;
    uVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar8 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar10 = puVar8;
      func_0x00010bf16c40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c280560(uVar9);
      func_0x00010c0df780(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar10;
      func_0x00010c0e00e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    uVar16 = param_4;
    func_0x00010c0dfd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf97060(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_258 = 0xc2000000;
    pcStack_250 = FUN_1070df070;
    puStack_248 = &UNK_11098dd08;
    puStack_230 = &uStack_128;
    puStack_228 = &uStack_158;
    _objc_retain(puVar7);
    puStack_240 = puVar7;
    _objc_retain(uVar5);
    uStack_238 = uVar5;
    func_0x00010bedc840(param_1);
    _objc_release(puVar11);
    _dispatch_semaphore_wait(uVar5,0xffffffffffffffff);
    _objc_release(uStack_238);
    _objc_release(puStack_240);
    _objc_release(uVar15);
    _objc_release(uVar12);
    _objc_release(uVar16);
    _objc_release(puVar8);
    _objc_release(puVar18);
    _objc_release(uVar9);
    uVar14 = uVar14 + 1;
  }
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_1070df1a8;
  puStack_288 = &UNK_11090f5b8;
  _objc_retain(param_9);
  uStack_278 = param_9;
  _objc_retain(puVar7);
  puStack_270 = &uStack_128;
  puStack_268 = &uStack_158;
  puStack_280 = puVar7;
  func_0x000100162d98("APPSTORE",&puStack_2a0);
  _objc_release(puStack_280);
  _objc_release(uStack_278);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_158,8);
  uVar13 = 8;
  __Block_object_dispose(&uStack_128,8);
  __Unwind_Resume();
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar13);
  func_0x00010bfa3600(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar16;
  func_0x00010bfbcc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 1070def00; end: 1070defa3;  */

void FUN_1070def00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfa3600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbcc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070defa4; end: 1070defe3;  */

bool FUN_1070defa4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release();
  return param_2 == lVar1;
}



/* Entry: 1070defe4; end: 1070df06f;  */

void FUN_1070defe4(long param_1,byte param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_3 == 0) {
    bVar1 = param_2 & *(byte *)(lVar2 + 0x18);
  }
  *(byte *)(lVar2 + 0x18) = bVar1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(lVar4 + 0x28);
  }
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_retain(param_3);
  _objc_release(uVar3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070df070; end: 1070df1a7;  */

void FUN_1070df070(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  bVar1 = 0;
  if (param_5 == 0) {
    bVar1 = (byte)param_4 & *(byte *)(lVar5 + 0x18);
  }
  *(byte *)(lVar5 + 0x18) = bVar1;
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  lVar5 = param_5;
  if (param_5 == 0) {
    lVar5 = *(long *)(lVar6 + 0x28);
  }
  _objc_retain(lVar5);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar5;
  _objc_release(uVar2);
  if (((param_4 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar3 = PTR_PTR_1126d4c08;
    func_0x00010bf16be0(PTR_PTR_1126d4c08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeac0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aec60(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070df1a8; end: 1070df1cb;  */

void FUN_1070df1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070df1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  return;
}



/* Entry: 1070df1cc; end: 1070df64b; -[PreviewViewController _updateOrAddBatchCaptureSnapsForSegmentIndex:galleryEntry:gallerySnaps:withOverlayFormats:overlays:timeRanges:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070df1cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1070ced0c;
  uStack_78 = 0x1070ced1c;
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  puStack_70 = puVar5;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  _dispatch_group_create();
  lVar2 = lVar7;
  func_0x000107e00808();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _dispatch_group_enter(lVar1);
    lVar3 = lVar2;
    func_0x00010bf377a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c254140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c000(lVar2);
    lVar8 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf3f860();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1070df64c;
    puStack_b0 = &UNK_11098dd38;
    puStack_a0 = &uStack_98;
    _objc_retain(lVar1);
    lStack_a8 = lVar1;
    func_0x00010be1c5e0(param_1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lStack_a8);
  }
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1070df6b0;
  puStack_128 = &UNK_11098dd68;
  puStack_d0 = &uStack_98;
  uStack_e8 = param_9;
  uStack_e0 = param_10;
  uStack_d8 = param_11;
  lStack_120 = lVar4;
  lStack_118 = param_1;
  uStack_110 = param_4;
  uStack_108 = param_5;
  uStack_100 = param_6;
  uStack_f8 = param_7;
  uStack_f0 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(lVar4);
  func_0x000100bc0718(lVar1,PTR___dispatch_main_q_11034be20,&puStack_140);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(lStack_120);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puStack_70);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar4);
  return;
}



/* Entry: 1070df64c; end: 1070df6af;  */

void FUN_1070df64c(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070df6b0; end: 1070e0267;  */

void FUN_1070df6b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  long lVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined *puVar40;
  ulong uVar41;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x70) + 8) + 0x28);
  func_0x00010c0e00e0(lVar3,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9fb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar40 = (undefined *)0x0;
  }
  else {
    uVar4 = 4;
    func_0x00010b697c6c();
    _objc_retainAutoreleasedReturnValue();
    puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  iVar2 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c083320();
  puVar9 = PTR_PTR_1126c4280;
  if (iVar2 == 0) {
    puVar8 = *(undefined **)(param_2 + 0x38);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c4270;
    uVar41 = *(ulong *)(param_2 + 0x20);
    _objc_retain(uVar41);
    _objc_opt_class();
    uVar10 = uVar41;
    _objc_opt_isKindOfClass();
    uVar7 = uVar41;
    if ((uVar10 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar41);
    puStack_148 = *(undefined **)(param_2 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puStack_148 == puVar37) {
      _objc_release(puStack_148);
      puStack_148 = (undefined *)0x0;
    }
    puStack_150 = *(undefined **)(param_2 + 0x48);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_150;
    func_0x00010c071ae0();
    _objc_release(puVar37);
    if ((int)puVar11 != 0) {
      _objc_release(puStack_150);
      puStack_150 = (undefined *)0x0;
    }
    puVar37 = *(undefined **)(param_2 + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puStack_140 = puVar37;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puStack_140;
      func_0x00010bf16a20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010bfb6cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_98 = uVar10;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar13;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = 0xffffffffa9fc90cc;
      func_0x00010b77c6b4();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_a0 = uVar16;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar18 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5ae0();
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = *(undefined8 *)(param_2 + 0x40);
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = *(undefined8 *)(param_2 + 0x48);
      puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uStack_c0 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 8) + 0x28);
      puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar23;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_c8 = uVar24;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b240();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar26 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbabe0();
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar11;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar28;
      func_0x00010bf59920();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d8 = uVar29;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = *(undefined8 *)(param_2 + 0x50);
      puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar33 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar4;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = uVar39;
      func_0x00010c14bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07d220();
      puVar38 = puVar17;
      puVar35 = puVar19;
      func_0x00010bef7140(puVar5);
      _objc_release(uVar34);
      _objc_release(uVar39);
      _objc_release(uVar12);
      _objc_release(uVar4);
      _objc_release(puVar32);
      _objc_release(puVar33);
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(puVar27);
      _objc_release(puVar11);
      _objc_release(uVar26);
      _objc_release(puVar25);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar8);
      _objc_release(uVar18);
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(uVar10);
      _objc_release(puVar5);
      _objc_release(puVar14);
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar37;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar11;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar5);
      _objc_release(puVar14);
      _objc_release(puVar11);
      _objc_release(puVar37);
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar12;
      func_0x0001070c5a88();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar4;
      func_0x00010bf8c440();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar24;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = *(undefined **)(param_2 + 0x28);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar13;
      func_0x0001070c4724();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar37;
      func_0x00010c0c84c0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = *(undefined **)(param_2 + 0x30);
      if (uVar7 == 0) {
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_f8,uVar41);
      }
      _CMTimeGetSeconds(&uStack_f8);
      puVar17 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      puStack_140 = *(undefined **)(param_2 + 0x68);
      _objc_retain(puStack_140);
      uVar39 = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(uVar39);
      puVar38 = puVar5;
      func_0x00010c131020(param_1,uVar29);
      _objc_release(puVar17);
      _objc_release(puVar19);
      _objc_release(puVar5);
      _objc_release(puVar14);
      _objc_release(puVar11);
      _objc_release(puVar37);
      _objc_release(puVar13);
      _objc_release(uVar29);
      _objc_release(uVar24);
      _objc_release(uVar4);
      _objc_release(uVar12);
      _objc_release(uVar39);
      puVar37 = puVar15;
    }
  }
  else {
    puVar37 = *(undefined **)(param_2 + 0x20);
    _objc_retain(puVar37);
    _objc_opt_class();
    puVar8 = puVar37;
    _objc_opt_isKindOfClass();
    puStack_140 = puVar37;
    if (((ulong)puVar8 & 1) == 0) {
      puStack_140 = (undefined *)0x0;
    }
    _objc_retain(puStack_140);
    _objc_release(puVar37);
    puVar5 = *(undefined **)(param_2 + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010bf16c20();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c280560(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c0df780(puVar37);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar37);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar5);
    uVar6 = *(ulong *)(param_2 + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar10;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puStack_140;
    func_0x00010bf0b7e0(puStack_140);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_140;
    func_0x00010c120480(puStack_140);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar41;
    func_0x00010c29af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar37);
    _objc_release(uVar41);
    _objc_release(uVar10);
    _objc_release(uVar6);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    puVar38 = *(undefined **)(param_2 + 0x38);
    func_0x00010bf3f040();
    puStack_148 = puStack_140;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbabe0();
    puStack_150 = puStack_140;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puStack_150;
    func_0x00010bf59920();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar8;
    func_0x00010be8ea60(uVar4);
  }
  _objc_release(puStack_140);
  _objc_release(puVar37);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(uVar7);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *(long *)(puVar40 + 0x20);
    lVar1 = *(long *)(puVar40 + 0x28);
    _objc_retain(puVar35);
    _objc_retain(puVar9);
    func_0x00010bf0a140(puVar8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3,puVar8,puVar38,puVar35);
    _objc_release(puVar35);
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar36) {
      ___stack_chk_fail();
      _objc_retain(*(undefined8 *)(lVar3 + 0x20));
      _objc_retain(*(undefined8 *)(lVar3 + 0x28));
      _objc_retain(*(undefined8 *)(lVar3 + 0x30));
      _objc_retain(*(undefined8 *)(lVar3 + 0x38));
      _objc_retain(*(undefined8 *)(lVar3 + 0x40));
      _objc_retain(*(undefined8 *)(lVar3 + 0x48));
      _objc_retain(*(undefined8 *)(lVar3 + 0x50));
      _objc_retain(*(undefined8 *)(lVar3 + 0x58));
      _objc_retain(*(undefined8 *)(lVar3 + 0x60));
      __Block_object_assign(puVar8 + 0x68,*(undefined8 *)(lVar3 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_object_assign_11034bce0)(puVar8 + 0x70,*(undefined8 *)(lVar3 + 0x70),8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1070e0268; end: 1070e033f;  */

void FUN_1070e0268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010bf0a140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar3,puVar2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar3 + 0x20));
  _objc_retain(*(undefined8 *)(lVar3 + 0x28));
  _objc_retain(*(undefined8 *)(lVar3 + 0x30));
  _objc_retain(*(undefined8 *)(lVar3 + 0x38));
  _objc_retain(*(undefined8 *)(lVar3 + 0x40));
  _objc_retain(*(undefined8 *)(lVar3 + 0x48));
  _objc_retain(*(undefined8 *)(lVar3 + 0x50));
  _objc_retain(*(undefined8 *)(lVar3 + 0x58));
  _objc_retain(*(undefined8 *)(lVar3 + 0x60));
  __Block_object_assign(puVar2 + 0x68,*(undefined8 *)(lVar3 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(puVar2 + 0x70,*(undefined8 *)(lVar3 + 0x70),8);
  return;
}



/* Entry: 1070e0340; end: 1070e03c3;  */

void FUN_1070e0340(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 1070e03c4; end: 1070e043f; -[PreviewViewController _contentDelivery] */

void FUN_1070e03c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c4670();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070e0440; end: 1070e058f; -[PreviewViewController getMediaOriginIfApplicable] */

void FUN_1070e0440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c074540();
  if ((int)uVar4 == 0) {
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfadbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c074560();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar7 == 0) {
      puVar9 = (undefined *)0x0;
      goto LAB_1070e0574;
    }
  }
  else {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar9 = PTR_PTR_1126affc8;
  _objc_alloc_init(PTR_PTR_1126affc8);
  puVar8 = PTR_PTR_1126c8210;
  _objc_alloc_init(PTR_PTR_1126c8210);
  func_0x00010c1c4ce0(puVar9,param_2,puVar8);
  _objc_release(puVar8);
LAB_1070e0574:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1070e0590; end: 1070e12c7; -[PreviewViewController _saveSnapDocWithVideoUrls:globalGallerySnapOverlay:globalOverlayFormat:localGallerySnapOverlays:localOverlayFormats:timeRanges:segmentCreativeEditTags:captureTimeUtc:createTimeUtc:createTimeOfFirstSnap:location:saveToCameraRoll:showsSavingIndicator:isPrivate:isFromCameraRoll:manualSave:isEdit:saveAsNewCopy:fromLongPressPrompt:saveSessionId:savedToken:gallerySavingEventId:captureSessionId:fromSingleSnap:customStoryMetadata:mediaOrigin:snapDocBasedSaveCompletion:] */

void FUN_1070e0590(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined1 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined *puStack_310;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_be;
  undefined1 uStack_bc;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  uVar1 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c081200();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c06c920();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar20 = param_9;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14c060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf8c840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_310 = (undefined *)0x0;
  if (((int)uVar5 != 0) && (uVar3 != 0)) {
    uVar1 = uVar3;
    func_0x00010c0ced00();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 == 0) || (func_0x00010bfb2c80(uVar1), 1.0 <= param_1)) {
      puStack_310 = (undefined *)0x0;
    }
    else {
      puStack_310 = PTR_PTR_1126bcd70;
      _objc_opt_new();
      puVar6 = PTR_PTR_1126c4038;
      _objc_opt_new(PTR_PTR_1126c4038);
      func_0x00010c16c540(puStack_310);
      _objc_release(puVar6);
      func_0x00010bfb2c80(uVar1);
      puVar6 = puStack_310;
      func_0x00010bf101a0(puStack_310);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2241a0((double)param_1);
      _objc_release(puVar6);
    }
    _objc_release(uVar1);
  }
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1070e12d0;
  puStack_a0 = &UNK_11098ddd8;
  uStack_98 = param_2;
  _objc_retain(param_25);
  uStack_90 = param_25;
  ppuVar7 = &puStack_b8;
  _objc_retainBlock();
  uVar1 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c240020();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c23fe00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c0c5200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010be72f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf8cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar1);
  func_0x00010bf926c0(uVar9);
  func_0x00010c195460(uVar14);
  puVar6 = PTR_PTR_1126d4c18;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x0001070c55c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c13b540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x0001070c559c();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf51700();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar15);
  puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0478a0();
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar1);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1070e1490;
  puStack_158 = &UNK_11098def8;
  _objc_retain(puVar6);
  puStack_150 = puVar6;
  _objc_retain(param_4);
  uStack_148 = param_4;
  _objc_retain(param_9);
  uStack_140 = param_9;
  _objc_retain(param_10);
  uStack_138 = param_10;
  _objc_retain(param_7);
  uStack_130 = param_7;
  _objc_retain(param_8);
  uStack_128 = param_8;
  _objc_retain(param_5);
  uStack_120 = param_5;
  _objc_retain(param_6);
  uStack_118 = param_6;
  _objc_retain(param_12);
  uStack_110 = param_12;
  uStack_c0 = (undefined1)uVar4;
  _objc_retain(param_14);
  uStack_108 = param_14;
  _objc_retain(puStack_310);
  puStack_100 = puStack_310;
  _objc_retain(param_24);
  uStack_f8 = param_24;
  _objc_retain(ppuVar7);
  uStack_be = param_16;
  uStack_bc = param_21;
  uStack_f0 = param_2;
  ppuStack_c8 = ppuVar7;
  _objc_retain(uVar20);
  uStack_e8 = uVar20;
  _objc_retain(param_19);
  uStack_e0 = param_19;
  _objc_retain(param_20);
  uStack_d8 = param_20;
  _objc_retain(param_23);
  uStack_d0 = param_23;
  ppuVar18 = &puStack_170;
  _objc_retainBlock();
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c070a20();
  _objc_release(uVar1);
  uVar1 = param_2;
  if ((int)uVar4 == 0) {
    uVar4 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0811c0();
    _objc_release(uVar4);
    if ((int)uVar8 != 0) {
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1070e0d98;
    }
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
LAB_1070e0d98:
    uVar8 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf3d8c0();
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar1);
    if (uVar10 != 0) {
      puStack_1d0 = &uStack_1d8;
      uStack_1d8 = 0;
      uStack_1c8 = 0x3032000000;
      pcStack_1c0 = FUN_1070ced0c;
      uStack_1b8 = 0x1070ced1c;
      uStack_1b0 = 0;
      puStack_200 = &uStack_208;
      uStack_208 = 0;
      uStack_1f8 = 0x3032000000;
      pcStack_1f0 = FUN_1070ced0c;
      uStack_1e8 = 0x1070ced1c;
      uStack_1e0 = 0;
      puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      _dispatch_group_create();
      uVar1 = param_2;
      func_0x00010c0d2440();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bfcd140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar4 != 0) {
        _dispatch_group_enter(puVar16);
        uVar1 = param_2;
        func_0x00010c0d2440();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010bfcd140();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_88 = uVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_238 = 0xc2000000;
        uStack_230 = 0x1070e27dc;
        puStack_228 = &UNK_11098d5f8;
        puStack_218 = &uStack_1d8;
        puStack_210 = &uStack_208;
        _objc_retain(puVar16);
        puStack_220 = puVar16;
        func_0x00010be1ab20(param_2);
        _objc_release(puVar17);
        _objc_release(uVar4);
        _objc_release(uVar1);
        _objc_release(puStack_220);
      }
      _dispatch_group_enter(puVar16);
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      uStack_260 = 0x1070e286c;
      puStack_258 = &UNK_11098df58;
      _objc_retain(puVar15);
      puStack_250 = puVar15;
      _objc_retain(puVar16);
      puStack_248 = puVar16;
      func_0x00010be1ab20(param_2);
      puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b8 = 0xc2000000;
      uStack_2b0 = 0x1070e296c;
      puStack_2a8 = &UNK_110953708;
      uStack_2a0 = param_2;
      _objc_retain(uVar14);
      puStack_280 = &uStack_1d8;
      puStack_278 = &uStack_208;
      uStack_298 = uVar14;
      puStack_290 = puVar15;
      ppuStack_288 = ppuVar18;
      _objc_retain(puVar15);
      _objc_retain(ppuVar18);
      func_0x000100bc0718(puVar16,PTR___dispatch_main_q_11034be20,&puStack_2c0);
      _objc_release(puStack_290);
      _objc_release(ppuStack_288);
      _objc_release(uStack_298);
      _objc_release(puStack_248);
      _objc_release(puStack_250);
      _objc_release(puVar15);
      _objc_release(puVar16);
      __Block_object_dispose(&uStack_208,8);
      _objc_release(uStack_1e0);
      __Block_object_dispose(&uStack_1d8,8);
      _objc_release(uStack_1b0);
      _objc_release(ppuVar18);
      goto LAB_1070e10f8;
    }
  }
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x1070e2604;
  puStack_190 = &UNK_11084a9e8;
  _objc_retain(uVar2);
  uStack_188 = uVar2;
  uStack_180 = param_2;
  ppuStack_178 = ppuVar18;
  _objc_retain(ppuVar18);
  ppuVar19 = &puStack_1a8;
  _objc_retainBlock();
  if (((uVar5 & 1) == 0) && (uVar1 = param_2, func_0x00010be34980(), (int)uVar1 == 0)) {
    (*(code *)ppuVar19[2])(ppuVar19);
  }
  else {
    func_0x00010be79b00(param_2);
  }
  _objc_release(ppuVar19);
  _objc_release(ppuStack_178);
  _objc_release(uStack_188);
  _objc_release(ppuVar18);
LAB_1070e10f8:
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(ppuStack_c8);
  _objc_release(uStack_f8);
  _objc_release(puStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(puStack_150);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(ppuVar7);
  _objc_release(uStack_90);
  _objc_release(puStack_310);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar20);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_208,8);
  uVar20 = 8;
  __Block_object_dispose(&uStack_1d8,8);
  __Unwind_Resume(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c27c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar20,PTR_s_trimmedTimeRangeValue_11267cc78);
  return;
}



/* Entry: 1070e12c8; end: 1070e12cf;  */

void FUN_1070e12c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_trimmedTimeRangeValue_11267cc78);
  return;
}



/* Entry: 1070e12d0; end: 1070e200f;  */

void FUN_1070e12d0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf926c0();
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((int)uVar10 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c240aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    puVar1 = PTR_s_snapEditor_didExportWithType__11266dbd0;
    while (PTR_s_snapEditor_didExportWithType__11266dbd0 = puVar1, lVar6 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar5);
        }
        uVar13 = *(ulong *)(lVar14 * 8);
        uVar7 = uVar13;
        _objc_opt_respondsToSelector(uVar13,puVar1);
        if ((uVar7 & 1) != 0) {
          func_0x00010c2406a0(uVar13);
        }
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = lVar5;
      func_0x00010bf52a60();
      puVar1 = PTR_s_snapEditor_didExportWithType__11266dbd0;
    }
    _objc_release(lVar5);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0xa8);
  _objc_retain(uVar10);
  uVar15 = *(undefined8 *)(param_2 + 0x88);
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  _objc_retain(uVar3);
  uVar11 = *(undefined8 *)(param_2 + 0x98);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_2 + 0xa0);
  _objc_retain(uVar12);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf599a0(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar10);
  return;
}



/* Entry: 1070e2010; end: 1070e2023;  */

void FUN_1070e2010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070e2020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070e2024; end: 1070e2157;  */

void FUN_1070e2024(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112320();
    _objc_release(uVar1);
  }
  func_0x00010c11bd60(*(undefined8 *)(param_1 + 0x28));
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070e2158; end: 1070e23b7;  */

void FUN_1070e2158(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar4 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar4,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar5,param_2,puVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126bf818;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23fe00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0172c0(puVar6,param_2,puVar5,uVar7,puVar4,uVar8,0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1070e23b8;
  puStack_68 = &UNK_11084aaa8;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  puStack_60 = puVar6;
  uStack_58 = uVar8;
  _objc_retain(puVar6);
  func_0x00010c0f7fc0(uVar7,param_2,&puStack_80);
  _objc_release(uVar7);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 1070e23b8; end: 1070e23cb;  */

void FUN_1070e23b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070e23c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1070e23cc; end: 1070e250b;  */

void FUN_1070e23cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  return;
}



/* Entry: 1070e250c; end: 1070e2a0f;  */

void FUN_1070e250c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112320();
    _objc_release(uVar1);
  }
  func_0x00010c11bd60(*(undefined8 *)(param_1 + 0x28));
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070e2a10; end: 1070e2a33;  */

void FUN_1070e2a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070e2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070e2a34; end: 1070e2aa7; -[PreviewViewController _isTimelineOrDirectorMode] */

ulong FUN_1070e2a34(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c070a20();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1070e2aa8; end: 1070e2abb; -[PreviewViewController _hasUCOAppliedInSnapDocEditor:] */

void FUN_1070e2aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_containsRenderEffectNodeOfType_w_1125b0858,2,
             &PTR___NSConcreteGlobalBlock_11098df88);
  return;
}



/* Entry: 1070e2abc; end: 1070e2b3b;  */

bool FUN_1070e2abc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf5ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfa2d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
  return lVar2 != 0;
}



/* Entry: 1070e2b3c; end: 1070e2b5b;  */

bool FUN_1070e2b3c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf5ae20(param_2);
  return (int)param_2 == 6;
}



/* Entry: 1070e2b5c; end: 1070e2b8f; -[PreviewViewController savingTooltipText] */

void FUN_1070e2b5c(uint param_1)

{
  func_0x00010c149f40();
  if ((param_1 & 1) == 0) {
    func_0x000108edec90();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edeca8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070e2b90; end: 1070e2eb3; -[PreviewViewController _preprocessSnapDocInEditor:completion:] */

void FUN_1070e2b90(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010bf926c0();
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    func_0x00010c240aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar11 = *plStack_130;
      do {
        puVar1 = PTR_s_snapEditor_willExportSnapDocInEd_11266dbf8;
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(param_1);
          }
          uVar12 = *(ulong *)(lStack_138 + lVar10 * 8);
          uVar7 = uVar12;
          _objc_opt_respondsToSelector(uVar12,puVar1);
          if ((uVar7 & 1) != 0) {
            func_0x00010c240740();
            _objc_retainAutoreleasedReturnValue();
            if (uVar12 != 0) {
              func_0x00010befa120(puVar6);
            }
            _objc_release(uVar12);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = param_1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_1);
    puVar8 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_1070e2eb4;
    puStack_150 = &UNK_11084e010;
    puStack_148 = puVar4;
    _objc_retain(puVar4);
    func_0x00010c297260(puVar8);
    _objc_release(puVar8);
    puVar8 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar1;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x1070e2ec4;
    puStack_178 = &UNK_11098dfe8;
    _objc_retain(param_4);
    ppuVar9 = &puStack_190;
    lStack_170 = param_4;
    func_0x00010c297260(puVar8);
    _objc_release(puVar8);
    _objc_release(lStack_170);
    _objc_release(puStack_148);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar9 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3[4],PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3[4],PTR_s_completeWithValue__1125ae900);
  return;
}



/* Entry: 1070e2eb4; end: 1070e2ecf;  */

void FUN_1070e2eb4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900);
  return;
}


