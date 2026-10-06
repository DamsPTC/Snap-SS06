/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004a9fd0; end: 004aa083;  */

undefined8 FUN_004a9fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00780e80();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x004aadd8(PTR__OBJC_CLASS___NSError_00ac2b00);
    func_0x00782e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078dca0(param_1,param_2,puVar2);
    func_0x004aad3c();
    uVar4 = 5;
  }
  else {
    func_0x0078b420(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00780e80();
    if (lVar1 == 0) {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00789e00(uVar3,param_2,lVar1 + -1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
  }
  func_0x004aad78();
  return uVar4;
}



/* Entry: 004aa084; end: 004aa08b;  */

undefined8 FUN_004aa084(void)

{
  return 0;
}



/* Entry: 004aa08c; end: 004aa0fb;  */

undefined8 FUN_004aa08c(undefined8 param_1,undefined8 param_2)

{
  FUN_004aab84();
  _objc_retainAutoreleasedReturnValue();
  func_0x004aae24();
  func_0x00789c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004aad68();
  FUN_004aabb4();
  func_0x004aad44();
  func_0x004aad3c();
  return param_2;
}



/* Entry: 004aa0fc; end: 004aa263;  */

undefined8 FUN_004aa0fc(undefined8 param_1)

{
  FUN_004aab84();
  _objc_retainAutoreleasedReturnValue();
  func_0x004aae24();
  func_0x00789cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004aad28();
  func_0x004aad3c();
  func_0x004aad44();
  return param_1;
}



/* Entry: 004aa264; end: 004aa2ab; -[KSJSONCodec dealloc] */

void FUN_004aa264(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x0077ff60();
  _free();
  puStack_28 = PTR_PTR_00ac3d90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 004aa2ac; end: 004aa3d3; +[KSJSONCodec encode:options:error:] */

undefined *
FUN_004aa2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
            undefined8 *param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [204];
  undefined1 uStack_5c;
  byte bStack_5b;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x007814c0();
  _objc_retainAutoreleasedReturnValue();
  _bzero(auStack_128,0xd0);
  uStack_5c = 1;
  bStack_5b = param_4 & 1;
  func_0x00780480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  uVar3 = param_1;
  FUN_004aa3fc();
  _objc_release(param_3);
  if (param_5 != (undefined8 *)0x0) {
    func_0x00782d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = param_1;
  }
  uVar1 = (int)uVar3 == 0;
  if (!(bool)uVar1) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  func_0x004aad44();
  func_0x004aad3c();
  func_0x004aae30(uStack_58);
  if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0077ee80(uVar4);
  return (undefined *)0x0;
}



/* Entry: 004aa3d4; end: 004aa3fb;  */

undefined8 FUN_004aa3d4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  func_0x0077ee80(param_3,param_2,param_1,param_2);
  return 0;
}



/* Entry: 004aa3fc; end: 004aa897;  */

undefined *
FUN_004aa3fc(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
            undefined **param_5)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar7;
  undefined *unaff_x25;
  long unaff_x26;
  undefined *puVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 auStack_264 [4];
  long lStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_17d [277];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar3 = param_3;
  puVar6 = param_4;
  _objc_retain();
  uVar4 = (uint)puVar6;
  func_0x004aadc0();
  _objc_retainAutorelease();
  func_0x0077bcc0();
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x004aad0c();
  puVar2 = param_3;
  if (((ulong)puVar6 & 1) == 0) {
    func_0x004aae24();
    _objc_opt_class();
    func_0x004aad0c();
    if (((ulong)puVar6 & 1) != 0) {
      puVar6 = param_2;
      _CFNumberGetType();
      in_ZR = (dword *)puVar6 == &MACH_HEADER.ncmds;
      if (puVar6 <= &MACH_HEADER.ncmds) {
        in_ZR = (1L << ((ulong)puVar6 & 0x3f) & 0x13060U) == 0;
        if (!(bool)in_ZR) {
          puVar6 = param_2;
          func_0x00782440();
          func_0x004aad5c();
          FUN_004a8858();
          puVar1 = puVar6;
          goto LAB_004aa734;
        }
        in_ZR = puVar6 == (undefined *)((long)&MACH_HEADER.cputype + 3);
        if ((bool)in_ZR) {
          puVar6 = param_2;
          func_0x0077fbc0();
          puVar3 = puVar6;
          func_0x004aad5c();
          FUN_004a8808();
          puVar1 = puVar6;
          goto LAB_004aa734;
        }
      }
      puVar6 = param_2;
      func_0x00788b40();
      puVar3 = puVar6;
      func_0x004aad5c();
      FUN_004a88c0();
      puVar1 = puVar6;
      goto LAB_004aa734;
    }
    func_0x004aade4();
    func_0x004aad0c();
    if (((ulong)puVar6 & 1) != 0) {
      func_0x004aad5c();
      FUN_004a8c94();
      puVar1 = puVar6;
      if ((int)puVar6 == 0) {
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        lStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        puStack_1b0 = (undefined8 *)0x0;
        func_0x004aadc0();
        func_0x004aad80();
        puVar7 = unaff_x24;
        if (puVar6 != (undefined *)0x0) {
          puVar7 = (undefined *)*puStack_1b0;
          puVar2 = puVar6;
          do {
            unaff_x25 = (undefined *)0x0;
            do {
              in_ZR = (undefined *)*puStack_1b0 == puVar7;
              if (!(bool)in_ZR) {
                _objc_enumerationMutation(param_2);
              }
              puVar3 = (undefined *)0x0;
              param_3 = param_1;
              puVar6 = param_4;
              FUN_004aa3fc(param_1,*(undefined8 *)(lStack_1b8 + (long)unaff_x25 * 8));
              uVar4 = (uint)puVar6;
              puVar6 = param_2;
              puVar1 = param_3;
              if ((int)param_3 != 0) goto LAB_004aa4dc;
              unaff_x25 = unaff_x25 + 1;
              in_ZR = unaff_x25 == puVar2;
            } while (unaff_x25 < puVar2);
            func_0x004aad80();
            puVar2 = param_3;
          } while (param_3 != (undefined *)0x0);
        }
        func_0x004aad3c();
        puVar6 = param_4;
        FUN_004a8d44();
        puVar1 = puVar6;
        unaff_x24 = puVar7;
      }
      goto LAB_004aa734;
    }
    func_0x004aae04();
    func_0x004aad0c();
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_00ac2f90;
      _objc_opt_class();
      func_0x004aad0c();
      if (((ulong)puVar6 & 1) != 0) {
        func_0x004aad5c();
        func_0x004a8978();
        puVar1 = puVar6;
        goto LAB_004aa734;
      }
      puVar6 = PTR__OBJC_CLASS___NSDate_00ac2c88;
      _objc_opt_class();
      func_0x004aad0c();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSData_00ac2b10;
        _objc_opt_class();
        func_0x004aad0c();
        puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = param_2;
          _objc_opt_class();
          puStack_210 = puVar6;
          func_0x004aadd8();
          param_5 = &PTR____CFConstantStringClassReference_00a27ee0;
          uVar4 = 0;
          puVar6 = puVar2;
          func_0x00782e20();
          _objc_retainAutoreleasedReturnValue();
          func_0x004aadc8();
          func_0x004aad44();
          param_4 = puVar2;
          puVar1 = (undefined *)((long)&MACH_HEADER.cputype + 1);
        }
        else {
          _objc_retainAutorelease(param_2);
          _objc_retain();
          puVar3 = param_2;
          func_0x0077fde0();
          unaff_x24 = param_2;
          func_0x007882e0();
          puVar6 = unaff_x24;
          func_0x004aad3c();
          func_0x004aad5c();
          puVar2 = unaff_x24;
          FUN_004a8bcc();
          uVar4 = (uint)puVar2;
          puVar1 = puVar6;
        }
        goto LAB_004aa734;
      }
      func_0x007928e0(param_2);
      FUN_004a7198((long)(double)CONCAT17(in_register_00005007,
                                          CONCAT16(in_register_00005006,
                                                   CONCAT15(in_register_00005005,
                                                            CONCAT14(in_register_00005004,
                                                                     CONCAT13(in_register_00005003,
                                                                              CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                   auStack_17d);
      puVar3 = PTR__OBJC_CLASS___NSData_00ac2b10;
      _strnlen(auStack_17d,0x14);
      puVar7 = puVar3;
      func_0x007815e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      _objc_retainAutorelease();
      func_0x0077fde0();
      func_0x004aadf0();
      puVar6 = puVar1;
      func_0x004aad5c();
      uVar4 = (uint)puVar6;
      FUN_004a89b0();
      puVar6 = puVar7;
    }
    else {
      func_0x004aad5c();
      func_0x004a8cec();
      puVar1 = puVar6;
      if ((int)puVar6 != 0) goto LAB_004aa734;
      puVar6 = param_2;
      func_0x0077eae0();
      _objc_retainAutoreleasedReturnValue();
      in_ZR = param_1[9] == '\x01';
      if ((bool)in_ZR) {
        puVar3 = PTR_s_compare__00abaea0;
        func_0x00791a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x004aad54();
      }
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      puVar7 = puVar6;
      _objc_retain();
      func_0x004aad94();
      puVar2 = puVar6;
      if (puVar7 != (undefined *)0x0) {
        unaff_x26 = *plStack_1f0;
        do {
          puVar8 = (undefined *)0x0;
          do {
            in_ZR = *plStack_1f0 == unaff_x26;
            if (!(bool)in_ZR) {
              _objc_enumerationMutation(puVar6);
            }
            puVar3 = *(undefined **)(lStack_1f8 + (long)puVar8 * 8);
            unaff_x25 = param_2;
            func_0x00793600();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_1;
            puVar5 = param_4;
            FUN_004aa3fc(param_1,unaff_x25);
            uVar4 = (uint)puVar5;
            unaff_x24 = unaff_x25;
            _objc_release();
            if ((int)puVar1 != 0) {
              func_0x004aad54();
              goto LAB_004aa4dc;
            }
            puVar8 = puVar8 + 1;
            in_ZR = puVar8 == puVar7;
          } while (puVar8 < puVar7);
          func_0x004aad94();
          puVar7 = unaff_x24;
        } while (unaff_x24 != (undefined *)0x0);
      }
      func_0x004aad54();
      puVar1 = param_4;
      FUN_004a8d44();
      puVar7 = unaff_x24;
    }
  }
  else {
    puVar7 = param_2;
    func_0x007815a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    _objc_retainAutorelease();
    func_0x0077fde0();
    func_0x004aadf0();
    puVar3 = puVar1;
    func_0x004aad5c();
    uVar4 = (uint)puVar3;
    FUN_004a89b0();
    in_ZR = (int)puVar1 == 1;
    puVar6 = puVar7;
    puVar3 = unaff_x23;
    if ((bool)in_ZR) {
      puStack_210 = param_2;
      func_0x004aadd8(PTR__OBJC_CLASS___NSError_00ac2b00);
      param_5 = &PTR____CFConstantStringClassReference_00a27ec0;
      uVar4 = 0;
      func_0x00782e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x004aadc8();
      func_0x004aad44();
      puVar3 = unaff_x23;
    }
  }
LAB_004aa4dc:
  _objc_release();
  param_3 = puVar2;
  unaff_x24 = puVar7;
LAB_004aa734:
  func_0x004aad3c();
  func_0x004aad78();
  func_0x004aae30(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_218 = FUN_004aa898;
    lStack_260 = unaff_x26;
    puStack_258 = unaff_x25;
    puStack_250 = unaff_x24;
    puStack_248 = puVar1;
    puStack_240 = param_3;
    puStack_238 = param_4;
    puStack_230 = param_2;
    puStack_228 = param_1;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    func_0x00780480();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    _objc_retainAutorelease();
    func_0x0077fde0();
    puVar1 = puVar3;
    func_0x007882e0(puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    _objc_retainAutorelease(puVar2);
    func_0x007896e0();
    func_0x007882e0(puVar2);
    puVar8 = puVar6;
    func_0x0077ff60(puVar6);
    FUN_004a8e3c(puVar7,puVar1,puVar3,puVar2,puVar8,puVar6,auStack_264);
    if ((int)puVar7 != 0) {
      puVar2 = puVar6;
      func_0x00782d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSError_00ac2b00;
      if (puVar2 == (undefined *)0x0) {
        FUN_004a8664();
        func_0x004aadd8();
        func_0x00782e20(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078dca0(puVar6);
        _objc_release(puVar3);
      }
    }
    if (param_5 != (undefined **)0x0) {
      puVar3 = puVar6;
      func_0x00782d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar3;
    }
    if (((uVar4 >> 2 & 1) == 0) && ((int)puVar7 != 0)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      func_0x00792b40(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x004aad54();
    func_0x004aad78();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
    return puVar6;
  }
  return puVar1;
}



/* Entry: 004aa898; end: 004aaa47; +[KSJSONCodec decode:options:error:] */

void FUN_004aa898(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_54 [4];
  
  _objc_retain(param_3);
  func_0x00780480();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retainAutorelease();
  func_0x0077fde0();
  uVar3 = param_3;
  func_0x007882e0(param_3);
  _objc_release(param_3);
  puVar4 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x007896e0();
  func_0x007882e0(puVar1);
  lVar5 = param_1;
  func_0x0077ff60(param_1);
  FUN_004a8e3c(uVar2,uVar3,puVar4,puVar1,lVar5,param_1,auStack_54);
  if ((int)uVar2 != 0) {
    lVar5 = param_1;
    func_0x00782d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if (lVar5 == 0) {
      FUN_004a8664();
      func_0x004aadd8();
      func_0x00782e20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078dca0(param_1);
      _objc_release(puVar1);
    }
  }
  if (param_5 != (long *)0x0) {
    lVar5 = param_1;
    func_0x00782d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = lVar5;
  }
  if (((param_4 >> 2 & 1) == 0) && ((int)uVar2 != 0)) {
    param_1 = 0;
  }
  else {
    func_0x00792b40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004aad54();
  func_0x004aad78();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004aaa48; end: 004aaa4f; -[KSJSONCodec topLevelContainer] */

undefined8 FUN_004aaa48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004aaa50; end: 004aaa6f; -[KSJSONCodec setTopLevelContainer:] */

void FUN_004aaa50(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004aad18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004aaa70; end: 004aaa77; -[KSJSONCodec currentContainer] */

undefined8 FUN_004aaa70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004aaa78; end: 004aaa7f; -[KSJSONCodec setCurrentContainer:] */

void FUN_004aaa78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 004aaa80; end: 004aaa87; -[KSJSONCodec containerStack] */

undefined8 FUN_004aaa80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004aaa88; end: 004aaaa7; -[KSJSONCodec setContainerStack:] */

void FUN_004aaa88(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004aad18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004aaaa8; end: 004aaaaf; -[KSJSONCodec callbacks] */

undefined8 FUN_004aaaa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004aaab0; end: 004aaab7; -[KSJSONCodec setCallbacks:] */

void FUN_004aaab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 004aaab8; end: 004aaabf; -[KSJSONCodec serializedData] */

undefined8 FUN_004aaab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 004aaac0; end: 004aaadf; -[KSJSONCodec setSerializedData:] */

void FUN_004aaac0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004aad18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004aaae0; end: 004aaae7; -[KSJSONCodec error] */

undefined8 FUN_004aaae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 004aaae8; end: 004aab07; -[KSJSONCodec setError:] */

void FUN_004aaae8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004aad18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004aab08; end: 004aab0f; -[KSJSONCodec prettyPrint] */

undefined1 FUN_004aab08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 004aab10; end: 004aab17; -[KSJSONCodec setPrettyPrint:] */

void FUN_004aab10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 004aab18; end: 004aab1f; -[KSJSONCodec sorted] */

undefined1 FUN_004aab18(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 004aab20; end: 004aab27; -[KSJSONCodec setSorted:] */

void FUN_004aab20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 004aab28; end: 004aab2f; -[KSJSONCodec ignoreNullsInArrays] */

undefined1 FUN_004aab28(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 004aab30; end: 004aab37; -[KSJSONCodec setIgnoreNullsInArrays:] */

void FUN_004aab30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 004aab38; end: 004aab3f; -[KSJSONCodec ignoreNullsInObjects] */

undefined1 FUN_004aab38(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 004aab40; end: 004aab47; -[KSJSONCodec setIgnoreNullsInObjects:] */

void FUN_004aab40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 004aab48; end: 004aab83; -[KSJSONCodec .cxx_destruct] */

void FUN_004aab48(long param_1)

{
  func_0x004aae1c(param_1 + 0x38);
  func_0x004aae1c(param_1 + 0x30);
  func_0x004aae1c(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 004aab84; end: 004aabb3;  */

void FUN_004aab84(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x00792140(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_1,4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004aabb4; end: 004aacff;  */

undefined8 FUN_004aabb4(void)

{
  undefined *puVar1;
  long unaff_x19;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x004aadb0();
  func_0x004aadc0();
  func_0x004aadfc();
  puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  if (uVar2 == 0) {
    _objc_opt_class();
    func_0x004aadd8();
    func_0x00782e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078dca0();
    func_0x004aad54();
    uVar3 = 5;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
    _objc_opt_isKindOfClass(uVar2,puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x0077e720(*(undefined8 *)(unaff_x19 + 0x18));
    }
    else {
      func_0x00791180();
    }
    uVar3 = 0;
  }
  func_0x004aad44();
  func_0x004aad3c();
  func_0x004aad78();
  return uVar3;
}



/* Entry: 004aad00; end: 004aae43;  */

void FUN_004aad00(void)

{
  return;
}



/* Entry: 004aae44; end: 004aaf07;  */

undefined8 FUN_004aae44(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = iRam0000000000b093b0;
  if (param_1 != 0) {
    uVar3 = 0x601;
    if (param_2 == 0) {
      uVar3 = 0x201;
    }
    lVar2 = param_1;
    _open(param_1,uVar3);
    iVar1 = (int)lVar2;
    iRam0000000000b093b0 = iVar1;
    if (iVar1 < 0) {
      ___error();
      _strerror();
      FUN_004aaf08("KSLogger: Could not open %s: %s");
      return 0;
    }
    if (param_1 != 0xb66630) {
      _strncpy(0xb66630,param_1,0x400);
    }
  }
  if (2 < iRam0000000000b093b4) {
    _close();
  }
  iRam0000000000b093b4 = iVar1;
  return 1;
}



/* Entry: 004aaf08; end: 004aaf2f;  */

void FUN_004aaf08(undefined8 param_1)

{
  FUN_004aaf40(param_1,&stack0x00000000);
  return;
}



/* Entry: 004aaf30; end: 004aaf3f;  */

/* WARNING: Removing unreachable block (ram,0x004aae98) */
/* WARNING: Removing unreachable block (ram,0x004aae68) */
/* WARNING: Removing unreachable block (ram,0x004aaeb0) */

undefined8 FUN_004aaf30(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0xb66630;
  _open(0xb66630,0x601);
  iRam0000000000b093b0 = iVar1;
  if (iVar1 < 0) {
    ___error();
    _strerror();
    FUN_004aaf08("KSLogger: Could not open %s: %s");
    uVar2 = 0;
  }
  else {
    if (2 < iRam0000000000b093b4) {
      _close();
    }
    uVar2 = 1;
    iRam0000000000b093b4 = iVar1;
  }
  return uVar2;
}



/* Entry: 004aaf40; end: 004aafbb;  */

void FUN_004aaf40(char *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  char *pcVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_430 [8];
  char acStack_428 [1024];
  undefined8 uStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if (param_1 == (char *)0x0) {
    func_0x004ab24c();
    if ((bool)in_ZR) {
      param_1 = "(null)";
      goto code_r0x004aafbc;
    }
  }
  else {
    _vsnprintf(acStack_428,0x400,param_1,param_2);
    param_1 = acStack_428;
    FUN_004aafbc();
    func_0x004ab24c();
    if ((bool)in_ZR) {
      return;
    }
  }
  unaff_x30 = FUN_004aafbc;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_430;
  unaff_x29 = puVar1;
code_r0x004aafbc:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (-1 < iRam0000000000b093b4) {
    pcVar4 = param_1;
    _strlen();
    pcVar3 = param_1;
    do {
      if ((int)pcVar4 < 1) break;
      iVar2 = iRam0000000000b093b4;
      _write(iRam0000000000b093b4,pcVar3,(ulong)pcVar4 & 0xffffffff);
      pcVar4 = (char *)(ulong)(uint)((int)pcVar4 - iVar2);
      pcVar3 = pcVar3 + iVar2;
    } while (iVar2 != -1);
  }
  pcVar3 = param_1;
  _strlen(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_0099a878)(1,param_1,pcVar3);
  return;
}



/* Entry: 004aafbc; end: 004ab0a3;  */

void FUN_004aafbc(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (-1 < iRam0000000000b093b4) {
    uVar3 = param_1;
    _strlen();
    uVar2 = param_1;
    do {
      if ((int)uVar3 < 1) break;
      iVar1 = iRam0000000000b093b4;
      _write(iRam0000000000b093b4,uVar2,uVar3 & 0xffffffff);
      uVar3 = (ulong)(uint)((int)uVar3 - iVar1);
      uVar2 = uVar2 + (long)iVar1;
    } while (iVar1 != -1);
  }
  uVar2 = param_1;
  _strlen(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_0099a878)(1,param_1,uVar2);
  return;
}



/* Entry: 004ab0a4; end: 004ab0cf;  */

long FUN_004ab0a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _strrchr(param_1,0x2f);
  if (lVar1 != 0) {
    param_1 = lVar1 + 1;
  }
  return param_1;
}



/* Entry: 004ab0d0; end: 004ab17f;  */

void FUN_004ab0d0(long param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_1 != 0) {
    uVar4 = 0;
    _CFStringCreateWithFormatAndArguments(0,0,param_1,&stack0x00000000);
    uVar5 = uVar4;
    _CFStringGetLength();
    uVar1 = (int)uVar5 << 2 | 1;
    pcVar7 = (char *)(ulong)uVar1;
    _malloc(pcVar7);
    uVar5 = uVar4;
    _CFStringGetCString(uVar4,pcVar7,(long)(int)uVar1,0x8000100);
    pcVar3 = "Could not convert log string to UTF-8. No logging performed.";
    if ((int)uVar5 != 0) {
      pcVar3 = pcVar7;
    }
    FUN_004aafbc(pcVar3);
    func_0x004ab264();
    _free(pcVar7);
    _CFRelease(uVar4);
    return;
  }
  pcVar3 = "(null)";
  if (-1 < iRam0000000000b093b4) {
    pcVar6 = pcVar3;
    _strlen();
    pcVar7 = pcVar3;
    do {
      if ((int)pcVar6 < 1) break;
      iVar2 = iRam0000000000b093b4;
      _write(iRam0000000000b093b4,pcVar7,(ulong)pcVar6 & 0xffffffff);
      pcVar6 = (char *)(ulong)(uint)((int)pcVar6 - iVar2);
      pcVar7 = pcVar7 + iVar2;
    } while (iVar2 != -1);
  }
  _strlen("(null)");
                    /* WARNING: Could not recover jumptable at 0x0077b824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_0099a878)(1,"(null)",pcVar3);
  return;
}



/* Entry: 004ab180; end: 004ab23b;  */

void FUN_004ab180(undefined8 param_1)

{
  undefined8 uVar1;
  long in_x4;
  
  if (in_x4 == 0) {
    FUN_004ab23c(param_1,"%s: %s (%u): %s: (null)");
    func_0x004ab270();
    FUN_004ab0d0();
  }
  else {
    uVar1 = 0;
    _CFStringCreateWithFormatAndArguments(0,0,in_x4,&stack0x00000000);
    FUN_004ab23c();
    func_0x004ab270();
    FUN_004ab0d0();
    _CFRelease(uVar1);
  }
  _CFRelease();
  return;
}



/* Entry: 004ab23c; end: 004ab2bf;  */

void FUN_004ab23c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007794cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFStringCreateWithCString_00999ba8)(0,param_2,0x8000100);
  return;
}



/* Entry: 004ab2c0; end: 004ab33f;  */

undefined8 FUN_004ab2c0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  _bzero(param_2,0x4d0);
  *param_2 = (int)param_1;
  FUN_004ad8d8();
  *(char *)(param_2 + 0x66) = (char)param_3;
  *(undefined1 *)((long)param_2 + 0x19b) = 0;
  *(bool *)((long)param_2 + 0x199) = param_1 == puVar1;
  if (param_1 == puVar1) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    func_0x004a6a5c(param_2);
    if ((*(byte *)(param_2 + 0x66) & 1) == 0) {
      return 1;
    }
  }
  FUN_004ab340(param_2);
  func_0x004aba60();
  return 1;
}



/* Entry: 004ab340; end: 004ab383;  */

undefined1 FUN_004ab340(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auStack_388 [44];
  undefined1 uStack_35c;
  code *pcStack_350;
  
  func_0x004ad1a0(auStack_388,0x96,param_1);
  do {
    uVar1 = 0;
    (*pcStack_350)();
  } while ((uVar1 & 1) != 0);
  return uStack_35c;
}



/* Entry: 004ab384; end: 004ab47b;  */

void FUN_004ab384(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *extraout_x8;
  ulong uVar6;
  uint uStack_3c;
  undefined4 *puStack_38;
  
  func_0x004aba80();
  iVar1 = *extraout_x8;
  iVar4 = iVar1;
  _task_threads(iVar1,&puStack_38,&uStack_3c);
  if (iVar4 == 0) {
    uVar5 = uStack_3c;
    if (100 < (int)uStack_3c) {
      func_0x004aba0c();
      func_0x004ab038();
      uVar5 = 100;
    }
    puVar2 = (undefined4 *)(param_1 + 4);
    puVar3 = puStack_38;
    for (uVar6 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1)
    {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(uint *)(param_1 + 0x194) = uVar5;
    for (uVar6 = 0; uVar6 < uStack_3c; uVar6 = uVar6 + 1) {
      _mach_port_deallocate(iVar1,((undefined4 *)(param_1 + 4))[uVar6]);
    }
    _vm_deallocate(iVar1,puStack_38,(ulong)uStack_3c << 2);
  }
  else {
    _mach_error_string();
    func_0x004aba40();
    func_0x004aba2c();
    func_0x004ab038();
  }
  return;
}



/* Entry: 004ab47c; end: 004ab4cb;  */

undefined8 FUN_004ab47c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2 + 0x68;
  _memcpy(puVar2,*(undefined8 *)(param_1 + 0x30),0x330);
  uVar1 = SUB84(puVar2,0);
  FUN_004ad8d8();
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 0x66) = 1;
  *(undefined1 *)((long)param_2 + 0x19b) = 1;
  FUN_004ab340(param_2);
  func_0x004aba60();
  return 1;
}



/* Entry: 004ab4cc; end: 004ab533;  */

void FUN_004ab4cc(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)uRam0000000000b66a30;
  if (9 < (int)uRam0000000000b66a30) {
    func_0x004aba0c(9);
    func_0x004ab038();
    return;
  }
  uRam0000000000b66a30 = uRam0000000000b66a30 + 1;
  *(undefined8 *)(uVar1 * 8 + 0xb66a38) = param_1;
  return;
}



/* Entry: 004ab534; end: 004ab61b;  */

void FUN_004ab534(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar4;
  uint *extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar3;
  
  plVar3 = param_1;
  func_0x004aba80();
  uVar2 = (uint)plVar3;
  uVar5 = (ulong)*extraout_x8;
  FUN_004ad8d8();
  uVar4 = uVar5;
  _task_threads(uVar5,param_1,param_2);
  if ((int)uVar4 == 0) {
    func_0x004aba6c();
    for (uVar7 = 0; uVar7 < *param_2; uVar7 = uVar7 + 1) {
      uVar1 = *(uint *)(*param_1 + uVar7 * 4);
      uVar6 = (ulong)uVar1;
      if (((uVar1 != uVar2) && (func_0x004aba54(), (uVar4 & 1) == 0)) &&
         (_thread_suspend(), uVar4 = uVar6, (int)uVar6 != 0)) {
        _mach_error_string();
        uVar4 = uVar5;
        func_0x004aba20();
      }
    }
  }
  else {
    _mach_error_string();
    func_0x004aba40();
    func_0x004aba2c();
    func_0x004ab038();
  }
  func_0x004aba8c();
  return;
}



/* Entry: 004ab61c; end: 004ab65f;  */

bool FUN_004ab61c(ulong param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (ulong)param_2;
  uVar3 = 0;
  do {
    uVar4 = uVar2;
    if (uVar2 == uVar3) break;
    lVar1 = uVar3 * 8;
    uVar4 = uVar3;
    uVar3 = uVar3 + 1;
  } while (*(ulong *)(lVar1 + 0xb66a38) != (param_1 & 0xffffffff));
  return uVar4 < uVar2;
}



/* Entry: 004ab660; end: 004ab8c3;  */

/* WARNING: Possible PIC construction at 0x004ab6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004ab770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004ab7a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004ab6ec) */

void FUN_004ab660(segment_command *param_1,segment_command *param_2,segment_command *param_3,
                 undefined8 param_4,char *param_5)

{
  uint uVar1;
  ulong uVar2;
  segment_command **ppsVar3;
  segment_command *psVar4;
  segment_command *psVar5;
  segment_command *psVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint *extraout_x8;
  uint *extraout_x8_00;
  ulong uVar9;
  segment_command *psVar10;
  segment_command *psVar11;
  ulong uVar12;
  undefined1 *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  segment_command *psStack_1a0;
  segment_command *psStack_198;
  ulong uStack_190;
  ulong uStack_188;
  segment_command *psStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  segment_command *psStack_160;
  segment_command *psStack_158;
  segment_command *psStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  segment_command *psStack_130;
  segment_command *psStack_128;
  qword *pqStack_118;
  segment_command *psStack_110;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  int iStack_f0;
  byte bStack_e4;
  long lStack_80;
  
  ppsVar3 = &psStack_130;
  puVar13 = &stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar4 = param_3;
  _bzero(param_3,0x4c0);
  func_0x004aba80();
  psVar10 = (segment_command *)(ulong)*extraout_x8;
  FUN_004ad8d8();
  psVar6 = param_1;
  _task_threads(psVar10,param_1,param_2);
  if ((int)psVar10 == 0) {
    pcVar8 = 
    "void ksmc_suspendEnvironmentAndTakeThreadsCpuSnapshot(thread_act_array_t *, mach_msg_type_number_t *, KSThreadsCpuContext *)"
    ;
    param_5 = "thread_suspend (%08x): %s";
    psVar5 = (segment_command *)0x0;
    psStack_110 = param_3;
    while (param_3 = psVar5, param_3 < (segment_command *)(ulong)param_2->cmd) {
      uVar1 = *(uint *)(*(long *)param_1 + (long)param_3 * 4);
      psVar11 = (segment_command *)(ulong)uVar1;
      psVar5 = psVar10;
      if (uVar1 != (uint)psVar4) {
        psVar6 = (segment_command *)(ulong)uRam0000000000b66a30;
        psVar5 = psVar11;
        FUN_004ab61c();
        if ((((ulong)psVar5 & 1) == 0) && (psVar5 = psVar11, _thread_suspend(), (int)psVar5 != 0)) {
          _mach_error_string();
          uVar7 = 0xe0;
          pcVar14 = (code *)0x4ab774;
          ppsVar3 = &psStack_130;
          psVar10 = (segment_command *)"ERROR";
          psVar6 = (segment_command *)
                   "Vendors/KSCrash/implementation/Recording/Tools/KSMachineContext.c";
          psStack_130 = psVar11;
          psStack_128 = psVar5;
          goto SUB_004ab038;
        }
      }
      psVar10 = psVar5;
      psVar5 = (segment_command *)((long)&param_3->cmd + 1);
    }
    if (param_2->cmd < 0x65) {
      uVar9 = 0;
      pqStack_118 = &psStack_110[5].fileoff;
      dVar16 = 0.0;
      param_3 = &segment_command_00000020;
      func_0x004aba6c();
      psVar5 = psVar6;
      for (uVar12 = 0; uVar12 < param_2->cmd; uVar12 = uVar12 + 1) {
        uVar1 = *(uint *)(*(long *)param_1 + uVar12 * 4);
        param_5 = (char *)(ulong)uVar1;
        uStack_104 = 0x20;
        psVar5 = (segment_command *)((long)&MACH_HEADER.magic + 3);
        psVar10 = (segment_command *)param_5;
        _thread_info(param_5,3,auStack_100,&uStack_104);
        if ((int)psVar10 == 0) {
          if ((bStack_e4 >> 1 & 1) == 0) {
            dVar15 = ((double)iStack_f0 / 1000.0) * 100.0;
            dVar16 = dVar16 + dVar15;
            if (uVar12 < 100) {
              *(uint *)(psStack_110->segname + uVar12 * 4 + -8) = uVar1;
              *(double *)(psStack_110[5].segname + uVar12 * 8 + 0x20) = dVar15;
              uVar1 = (uint)uVar12;
              if (dVar15 <= (double)pqStack_118[uVar9]) {
                uVar1 = (uint)uVar9;
              }
              uVar9 = (ulong)uVar1;
            }
          }
        }
        else {
          psVar10 = psVar4;
          psVar5 = (segment_command *)"ERROR";
          func_0x004aba20(psVar4,"ERROR",0xfa);
        }
      }
      *(double *)&psStack_110[0x10].maxprot = dVar16;
      *(uint *)&psStack_110[0x10].filesize = (uint)uVar9;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
      pcStack_178 = "thread_info kernal error";
      pcStack_170 = 
      "void ksmc_suspendEnvironmentAndTakeThreadsCpuSnapshot(thread_act_array_t *, mach_msg_type_number_t *, KSThreadsCpuContext *)"
      ;
      pcStack_168 = "ERROR";
      uStack_148 = 0x20;
      pcStack_138 = FUN_004ab8c4;
      psVar11 = psVar10;
      psVar6 = psVar5;
      uStack_190 = uVar12;
      uStack_188 = uVar9;
      psStack_180 = (segment_command *)param_5;
      psStack_160 = psVar4;
      psStack_158 = param_1;
      psStack_150 = param_2;
      puStack_140 = puVar13;
      func_0x004aba80();
      param_2 = (segment_command *)(ulong)*extraout_x8_00;
      FUN_004ad8d8();
      if ((psVar10 != (segment_command *)0x0) && ((int)psVar5 != 0)) {
        uVar9 = (ulong)psVar5 & 0xffffffff;
        psVar4 = psVar10;
        psVar6 = psVar11;
        for (uVar12 = uVar9; uVar2 = uVar9, psVar5 = psVar10, uVar12 != 0; uVar12 = uVar12 - 1) {
          uVar1 = psVar4->cmd;
          if (((uVar1 != (uint)psVar11) && (func_0x004aba54(), ((ulong)psVar6 & 1) == 0)) &&
             (psVar6 = (segment_command *)(ulong)uVar1, _thread_resume(), (int)psVar6 != 0)) {
            _mach_error_string();
            psStack_1a0 = (segment_command *)(ulong)uVar1;
            psStack_198 = psVar6;
            func_0x004aba0c();
            func_0x004aba20();
          }
          psVar4 = (segment_command *)&psVar4->cmdsize;
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          _mach_port_deallocate(param_2,psVar5->cmd);
          psVar5 = (segment_command *)&psVar5->cmdsize;
        }
        func_0x004aba8c(param_2,psVar10,uVar9 << 2,pcStack_138);
                    /* WARNING: Could not recover jumptable at 0x0077b7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__vm_deallocate_0099a848)();
        return;
      }
      func_0x004aba0c();
      puVar13 = puStack_140;
      pcVar8 = "void ksmc_resumeEnvironment(thread_act_array_t, mach_msg_type_number_t)";
      param_5 = "we should call ksmc_suspendEnvironment() first";
      uVar7 = 0x123;
      pcVar14 = pcStack_138;
      func_0x004aba8c();
      ppsVar3 = &psStack_1a0;
      psVar10 = psVar11;
      psVar4 = psVar5;
    }
    else {
      func_0x004aba0c();
      pcVar8 = 
      "void ksmc_suspendEnvironmentAndTakeThreadsCpuSnapshot(thread_act_array_t *, mach_msg_type_number_t *, KSThreadsCpuContext *)"
      ;
      param_5 = "Thread count %d is higher than maximum of %d";
      psStack_128 = (segment_command *)&segment_command_00000020.flags;
      uVar7 = 0xf3;
      pcVar14 = (code *)0x4ab7a8;
      psStack_130 = param_2;
    }
  }
  else {
    _mach_error_string();
    func_0x004aba40();
    pcVar8 = 
    "void ksmc_suspendEnvironmentAndTakeThreadsCpuSnapshot(thread_act_array_t *, mach_msg_type_number_t *, KSThreadsCpuContext *)"
    ;
    func_0x004aba2c();
    uVar7 = 0xd3;
    pcVar14 = (code *)0x4ab6ec;
    ppsVar3 = &psStack_130;
  }
SUB_004ab038:
  *(segment_command **)((long)ppsVar3 + -0x30) = psVar4;
  *(segment_command **)((long)ppsVar3 + -0x28) = param_1;
  *(segment_command **)((long)ppsVar3 + -0x20) = param_2;
  *(segment_command **)((long)ppsVar3 + -0x18) = param_3;
  *(undefined1 **)((long)ppsVar3 + -0x10) = puVar13;
  *(code **)((long)ppsVar3 + -8) = pcVar14;
  FUN_004ab0a4();
  *(undefined8 *)((long)ppsVar3 + -0x50) = uVar7;
  *(char **)((long)ppsVar3 + -0x48) = pcVar8;
  *(segment_command **)((long)ppsVar3 + -0x60) = psVar10;
  *(segment_command **)((long)ppsVar3 + -0x58) = psVar6;
  FUN_004aaf08("%s: %s (%u): %s: ");
  *(segment_command ***)((long)ppsVar3 + -0x38) = ppsVar3;
  FUN_004aaf40(param_5,ppsVar3);
  func_0x004ab264();
  return;
}



/* Entry: 004ab8c4; end: 004ab9d3;  */

void FUN_004ab8c4(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x30;
  uint *puStack_70;
  uint *puStack_68;
  
  puVar6 = param_1;
  func_0x004aba80();
  uVar1 = *extraout_x8;
  FUN_004ad8d8();
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    uVar9 = (ulong)param_2;
    puVar7 = puVar6;
    puVar3 = param_1;
    for (uVar10 = uVar9; uVar4 = uVar9, puVar5 = param_1, uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar2 = *puVar3;
      if (((uVar2 != (uint)puVar6) && (func_0x004aba54(), ((ulong)puVar7 & 1) == 0)) &&
         (puVar7 = (uint *)(ulong)uVar2, _thread_resume(), (int)puVar7 != 0)) {
        _mach_error_string();
        puStack_70 = (uint *)(ulong)uVar2;
        puStack_68 = puVar7;
        func_0x004aba0c();
        func_0x004aba20();
      }
      puVar3 = puVar3 + 1;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      _mach_port_deallocate(uVar1,*puVar5);
      puVar5 = puVar5 + 1;
    }
    func_0x004aba8c(uVar1,param_1,uVar9 << 2,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x0077b7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__vm_deallocate_0099a848)();
    return;
  }
  func_0x004aba0c();
  pcVar8 = "we should call ksmc_suspendEnvironment() first";
  func_0x004aba8c();
  FUN_004ab0a4();
  FUN_004aaf08("%s: %s (%u): %s: ");
  FUN_004aaf40(pcVar8,&puStack_70);
  func_0x004ab264();
  return;
}



/* Entry: 004ab9d4; end: 004abaa7;  */

ulong FUN_004ab9d4(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((*(uint *)(param_1 + 0x194) & ((int)*(uint *)(param_1 + 0x194) >> 0x1f ^ 0xffffffffU)) ==
        uVar1) {
      return 0xffffffff;
    }
    if (param_2 == *(uint *)(param_1 + 4 + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* Entry: 004abaa8; end: 004abb7f;  */

int FUN_004abaa8(undefined *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((0x2800 < param_2 + iVar2 &&
         (puVar1 = param_1, func_0x004abb1c(param_1,&UNK_00002800), (int)puVar1 != 0))) {
    param_1 = &UNK_00002800 + (long)param_1;
    iVar2 = iVar2 + -0x2800;
  }
  FUN_004abb80(param_1,0xb66a88,&UNK_00002800);
  return (int)param_1 - iVar2;
}



/* Entry: 004abb80; end: 004abc47;  */

ulong FUN_004abb80(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x004abc64(param_1,param_2,1);
  if ((int)lVar1 == 1) {
    if (1 < (int)param_3) {
      lVar1 = param_1 + (param_3 & 0xffffffff);
      param_3 = 0;
      lVar5 = lVar1;
      while( true ) {
        uVar4 = lVar5 - param_1;
        iVar3 = (int)uVar4;
        if (iVar3 < 1) break;
        lVar2 = param_1;
        func_0x004abc64(param_1,param_2,uVar4);
        if ((int)lVar2 == iVar3) {
          param_3 = (ulong)(uint)((int)param_3 + iVar3);
          param_1 = param_1 + (uVar4 & 0x7fffffff);
          param_2 = param_2 + (uVar4 & 0x7fffffff);
          lVar5 = param_1 + (lVar1 - param_1) / 2;
        }
        else {
          if (iVar3 == 1) {
            return param_3;
          }
          lVar1 = lVar5;
          lVar5 = param_1 + (uVar4 >> 1 & 0x3fffffff);
        }
      }
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 004abc48; end: 004abcab;  */

bool FUN_004abc48(int param_1)

{
  func_0x004abc64();
  return param_1 != 0;
}



/* Entry: 004abcac; end: 004abcf7;  */

void FUN_004abcac(void)

{
  return;
}



/* Entry: 004abcf8; end: 004abd93;  */

uint FUN_004abcf8(uint *param_1)

{
  FUN_004abe7c();
  return *param_1 & 1;
}



/* Entry: 004abd94; end: 004abdfb;  */

/* WARNING: Possible PIC construction at 0x004abdbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004abdc0) */
/* WARNING: Removing unreachable block (ram,0x004abdc4) */
/* WARNING: Removing unreachable block (ram,0x004abdcc) */
/* WARNING: Removing unreachable block (ram,0x004abddc) */

bool FUN_004abd94(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar4 = param_1;
  func_0x004acf98();
  if ((int)lVar4 == 0) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffff8;
  uVar2 = 0x20;
  do {
    uVar5 = uVar2;
    if ((int)uVar5 < 1) break;
    uVar1 = uVar5;
    if (0x27ff < uVar5) {
      uVar1 = 0x2800;
    }
    uVar3 = uVar6;
    func_0x004abc64(uVar6,0xb66a88,uVar1);
    uVar2 = uVar5 - uVar1;
  } while ((uint)uVar3 == uVar1);
  return uVar5 == 0;
}



/* Entry: 004abdfc; end: 004abe53;  */

ulong FUN_004abdfc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = 0x15;
  uVar2 = param_1;
  while( true ) {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    uVar1 = uVar2;
    func_0x004abd14();
    if ((uVar1 & 1) != 0) break;
    uVar3 = *(ulong *)(uVar2 + 8);
    uVar1 = uVar3;
    FUN_004abd94();
    param_1 = uVar2;
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  return param_1;
}



/* Entry: 004abe54; end: 004abe7b;  */

undefined4 FUN_004abe54(long param_1)

{
  undefined4 uVar1;
  
  FUN_004abe7c();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 4);
  }
  return uVar1;
}



/* Entry: 004abe7c; end: 004abe97;  */

ulong FUN_004abe7c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0xfffffffffffffff8) + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  return uVar1;
}



/* Entry: 004abe98; end: 004abfbb;  */

uint FUN_004abe98(uint param_1,long param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    func_0x004acf40();
    FUN_004abe54();
    if (param_1 != 0) {
      if ((int)param_1 <= (int)unaff_w19) {
        unaff_w19 = param_1;
      }
      FUN_004abe7c();
      puVar2 = *(uint **)(unaff_x21 + 0x30);
      puVar3 = puVar2 + 2;
      puVar4 = (undefined4 *)(unaff_x20 + 0x10);
      for (uVar1 = 0; (unaff_w19 & ((int)unaff_w19 >> 0x1f ^ 0xffffffffU)) != uVar1;
          uVar1 = uVar1 + 1) {
        uVar5 = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(puVar4 + -2) = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(puVar4 + -4) = uVar5;
        *puVar4 = (int)uVar1;
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar2);
        puVar4 = puVar4 + 6;
      }
      return unaff_w19;
    }
  }
  return 0;
}



/* Entry: 004abfbc; end: 004ac09b;  */

void FUN_004abfbc(long param_1)

{
  long lVar1;
  
  if ((((param_1 != 0) && (-1 < param_1)) && (lVar1 = param_1, func_0x004ac044(), (int)lVar1 != 0))
     && (FUN_004ac09c(), (int)param_1 != 0)) {
    func_0x004acfdc();
    FUN_004abdfc();
    if (((param_1 == 0) || (func_0x004abd30(), param_1 == 0)) || (_strcmp(), (int)param_1 != 0)) {
      func_0x004abcf8();
    }
  }
  return;
}



/* Entry: 004ac09c; end: 004ac207;  */

ulong FUN_004ac09c(uint *param_1,dword *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 in_ZR;
  uint *puVar6;
  byte *pbVar7;
  dword *pdVar8;
  dword *pdVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  dword adStack_ac [25];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar6 = param_1;
  func_0x004acf98();
  if (((int)puVar6 != 0) && (FUN_004abd94(), puVar6 = param_1, (int)param_1 != 0)) {
    func_0x004acfe4();
    puVar6 = *(uint **)(param_1 + 6);
    func_0x004ac93c();
    if ((int)puVar6 != 0) {
      func_0x004acfe4();
      puVar12 = *(uint **)(puVar6 + 0xc);
      if (puVar12 != (uint *)0x0) {
        puVar6 = puVar12;
        func_0x004acf98();
        if ((int)puVar6 == 0) goto LAB_004ac1d0;
        uVar15 = puVar12[1];
        if (uVar15 != 0) {
          puVar14 = (uint *)((long)puVar12 + (ulong)*puVar12 + 8);
          uVar11 = 1;
          while( true ) {
            in_ZR = uVar11 == uVar15;
            uVar16 = (ulong)(uVar15 <= uVar11);
            if (uVar15 <= uVar11) break;
            param_3 = 0x20;
            puVar6 = puVar14;
            param_2 = (dword *)&puStack_d0;
            FUN_004abc48();
            if ((int)puVar6 == 0) break;
            param_2 = (dword *)(ulong)*puVar12;
            puVar6 = puVar14;
            func_0x004abb1c();
            if ((int)puVar6 == 0) break;
            param_2 = &MACH_HEADER.cputype;
            puVar6 = puStack_d0;
            func_0x004abb1c();
            if (((int)puVar6 == 0) ||
               (puVar6 = puStack_c8, func_0x004ac93c(), puVar17 = puStack_c0, (int)puVar6 == 0))
            break;
            in_ZR = puStack_c0 == (uint *)0xffffffffffffff9b;
            if ((uint *)0xffffffffffffff9b < puStack_c0) goto LAB_004ac1d0;
            param_2 = adStack_ac;
            param_3 = 100;
            puVar6 = puStack_c0;
            FUN_004abb80();
            uVar15 = (uint)puVar6;
            if ((uVar15 == 0) ||
               (in_ZR = (*(uint *)(&UNK_00806078 + (ulong)(byte)*puVar17 * 4) & 7) == 0, (bool)in_ZR
               )) goto LAB_004ac1d0;
            uVar16 = (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
            do {
              if (uVar16 == 0) goto LAB_004ac1d0;
              uVar15 = *puVar17;
              uVar16 = uVar16 - 1;
              puVar17 = (uint *)((long)puVar17 + 1);
            } while ((char)uVar15 != '\0');
            uVar15 = puVar12[1];
            puVar14 = (uint *)((long)puVar14 + (ulong)*puVar12);
            uVar11 = uVar11 + 1;
          }
          goto LAB_004ac1d4;
        }
      }
      uVar16 = 1;
      goto LAB_004ac1d4;
    }
  }
LAB_004ac1d0:
  uVar16 = 0;
LAB_004ac1d4:
  func_0x004ad01c(uStack_48);
  if ((bool)in_ZR) {
    return uVar16;
  }
  ___stack_chk_fail();
  iVar13 = (int)param_3;
  if (((long)puVar6 < 0) && (((ulong)puVar6 & 0x7000000000000000) == 0x2000000000000000)) {
    uVar15 = (uint)puVar6 & 0xf;
    uVar11 = uVar15;
    if ((int)(iVar13 - 1U) <= (int)uVar15) {
      uVar11 = iVar13 - 1U;
    }
    uVar16 = (ulong)puVar6 >> 4 & 0xffffffffffffff;
    uVar1 = (int)uVar11 >> 0x1f;
    if (uVar15 < 8) {
      pdVar8 = param_2;
      for (uVar10 = (ulong)(uVar11 & (uVar1 ^ 0xffffffff)); uVar10 != 0; uVar10 = uVar10 - 1) {
        *(byte *)pdVar8 = (byte)uVar16 & 0x7f;
        uVar16 = uVar16 >> 8;
        pdVar8 = (dword *)((long)pdVar8 + 1);
      }
    }
    else if (uVar15 < 10) {
      uVar3 = uVar15 * 6;
      pdVar8 = param_2;
      for (uVar10 = (ulong)(uVar11 & (uVar1 ^ 0xffffffff)); uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar3 = uVar3 - 6;
        *(char *)pdVar8 =
             "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
             [uVar16 >> ((ulong)uVar3 & 0x3f) & 0x3f];
        pdVar8 = (dword *)((long)pdVar8 + 1);
      }
    }
    else if (uVar15 < 0xc) {
      uVar3 = uVar15 * 5;
      pdVar8 = param_2;
      for (uVar10 = (ulong)(uVar11 & (uVar1 ^ 0xffffffff)); uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar3 = uVar3 - 5;
        *(char *)pdVar8 =
             "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
             [uVar16 >> ((ulong)uVar3 & 0x3f) & 0x1f];
        pdVar8 = (dword *)((long)pdVar8 + 1);
      }
    }
    else {
      *(byte *)param_2 = 0;
    }
    *(byte *)((long)param_2 + ((ulong)puVar6 & 0xf)) = 0;
    return (ulong)uVar15;
  }
  bVar4 = (byte)puVar6[2];
  if ((bVar4 & 5) == 4) {
    puVar12 = puVar6 + 4;
    if ((bVar4 & 0x60) != 0) {
      puVar12 = *(uint **)puVar12;
    }
    uVar15 = (uint)(byte)*puVar12;
  }
  else if ((bVar4 & 0x60) == 0) {
    uVar15 = puVar6[4];
  }
  else {
    uVar15 = puVar6[6];
  }
  func_0x004ac4d8();
  if ((bVar4 >> 4 & 1) == 0) {
    if (iVar13 != 0) {
      if (uVar15 != 0) {
        if (iVar13 <= (int)uVar15) {
          uVar15 = iVar13 - 1;
        }
        FUN_004abc48();
        if (((ulong)puVar6 & 1) != 0) {
          *(byte *)((long)param_2 + (long)(int)uVar15) = 0;
          return (ulong)uVar15;
        }
      }
LAB_004ac3ec:
      param_3 = 0;
      *(byte *)param_2 = 0;
    }
  }
  else {
    pbVar7 = (byte *)((long)param_2 + (long)iVar13 + -1);
    pdVar8 = param_2;
    for (; 0 < (int)uVar15 && pdVar8 < pbVar7; uVar15 = uVar15 - 1) {
      puVar12 = (uint *)((long)puVar6 + 2);
      uVar2 = (ushort)*puVar6;
      uVar11 = (uint)uVar2;
      if (0xfffff7ff < uVar2 - 0xe000) {
        if ((0x36 < uVar2 >> 10) || (uVar2 = *(ushort *)puVar12, (uVar2 & 0xfc00) != 0xdc00))
        goto LAB_004ac3ec;
        puVar12 = puVar6 + 1;
        uVar11 = (uint)uVar2 + uVar11 * 0x400 + 0xfca02400;
        uVar15 = uVar15 - 1;
      }
      if (uVar11 < 0x80) {
        pdVar9 = (dword *)((long)pdVar8 + 1);
        *(byte *)pdVar8 = (byte)uVar11;
      }
      else {
        bVar4 = (byte)uVar11 & 0x3f | 0x80;
        if (uVar11 < 0x800) {
          if ((long)pbVar7 - (long)pdVar8 < 2) break;
          *(byte *)pdVar8 = (byte)(uVar11 >> 6) | 0xc0;
          *(byte *)((long)pdVar8 + 1) = bVar4;
          pdVar9 = (dword *)((long)pdVar8 + 2);
        }
        else {
          bVar5 = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          if (uVar11 >> 0x10 == 0) {
            if ((long)pbVar7 - (long)pdVar8 < 3) break;
            *(byte *)pdVar8 = (byte)(uVar11 >> 0xc) | 0xe0;
            *(byte *)((long)pdVar8 + 1) = bVar5;
            *(byte *)((long)pdVar8 + 2) = bVar4;
            pdVar9 = (dword *)((long)pdVar8 + 3);
          }
          else {
            if ((long)pbVar7 - (long)pdVar8 < 4) break;
            *(byte *)pdVar8 = (byte)(uVar11 >> 0x12) | 0xf0;
            *(byte *)((long)pdVar8 + 1) = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
            *(byte *)((long)pdVar8 + 2) = bVar5;
            *(byte *)((long)pdVar8 + 3) = bVar4;
            pdVar9 = pdVar8 + 1;
          }
        }
      }
      puVar6 = puVar12;
      pdVar8 = pdVar9;
    }
    *(byte *)pdVar8 = 0;
    param_3 = (ulong)(uint)((int)pdVar8 - (int)param_2);
  }
  return param_3;
}



/* Entry: 004ac208; end: 004ac3f7;  */

ulong FUN_004ac208(ushort *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  iVar13 = (int)param_3;
  if (((long)param_1 < 0) && (((ulong)param_1 & 0x7000000000000000) == 0x2000000000000000)) {
    uVar14 = (uint)param_1 & 0xf;
    uVar12 = uVar14;
    if ((int)(iVar13 - 1U) <= (int)uVar14) {
      uVar12 = iVar13 - 1U;
    }
    uVar10 = (ulong)param_1 >> 4 & 0xffffffffffffff;
    uVar1 = (int)uVar12 >> 0x1f;
    if (uVar14 < 8) {
      pbVar8 = param_2;
      for (uVar11 = (ulong)(uVar12 & (uVar1 ^ 0xffffffff)); uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar8 = (byte)uVar10 & 0x7f;
        uVar10 = uVar10 >> 8;
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (uVar14 < 10) {
      uVar3 = uVar14 * 6;
      pbVar8 = param_2;
      for (uVar11 = (ulong)(uVar12 & (uVar1 ^ 0xffffffff)); uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar3 = uVar3 - 6;
        *pbVar8 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                  [uVar10 >> ((ulong)uVar3 & 0x3f) & 0x3f];
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (uVar14 < 0xc) {
      uVar3 = uVar14 * 5;
      pbVar8 = param_2;
      for (uVar11 = (ulong)(uVar12 & (uVar1 ^ 0xffffffff)); uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar3 = uVar3 - 5;
        *pbVar8 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                  [uVar10 >> ((ulong)uVar3 & 0x3f) & 0x1f];
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      *param_2 = 0;
    }
    param_2[(ulong)param_1 & 0xf] = 0;
    return (ulong)uVar14;
  }
  bVar4 = (byte)param_1[4];
  if ((bVar4 & 5) == 4) {
    puVar6 = param_1 + 8;
    if ((bVar4 & 0x60) != 0) {
      puVar6 = *(ushort **)puVar6;
    }
    uVar14 = (uint)(byte)*puVar6;
  }
  else if ((bVar4 & 0x60) == 0) {
    uVar14 = *(uint *)(param_1 + 8);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0xc);
  }
  func_0x004ac4d8();
  if ((bVar4 >> 4 & 1) == 0) {
    if (iVar13 != 0) {
      if (uVar14 != 0) {
        if (iVar13 <= (int)uVar14) {
          uVar14 = iVar13 - 1;
        }
        FUN_004abc48();
        if (((ulong)param_1 & 1) != 0) {
          param_2[(int)uVar14] = 0;
          return (ulong)uVar14;
        }
      }
LAB_004ac3ec:
      param_3 = 0;
      *param_2 = 0;
    }
  }
  else {
    pbVar7 = param_2 + (long)iVar13 + -1;
    pbVar8 = param_2;
    for (; 0 < (int)uVar14 && pbVar8 < pbVar7; uVar14 = uVar14 - 1) {
      puVar6 = param_1 + 1;
      uVar2 = *param_1;
      uVar12 = (uint)uVar2;
      if (0xfffff7ff < uVar2 - 0xe000) {
        if ((0x36 < uVar2 >> 10) || (uVar2 = *puVar6, (uVar2 & 0xfc00) != 0xdc00))
        goto LAB_004ac3ec;
        puVar6 = param_1 + 2;
        uVar12 = (uint)uVar2 + uVar12 * 0x400 + 0xfca02400;
        uVar14 = uVar14 - 1;
      }
      if (uVar12 < 0x80) {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar12;
      }
      else {
        bVar4 = (byte)uVar12 & 0x3f | 0x80;
        if (uVar12 < 0x800) {
          if ((long)pbVar7 - (long)pbVar8 < 2) break;
          *pbVar8 = (byte)(uVar12 >> 6) | 0xc0;
          pbVar8[1] = bVar4;
          pbVar9 = pbVar8 + 2;
        }
        else {
          bVar5 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
          if (uVar12 >> 0x10 == 0) {
            if ((long)pbVar7 - (long)pbVar8 < 3) break;
            *pbVar8 = (byte)(uVar12 >> 0xc) | 0xe0;
            pbVar8[1] = bVar5;
            pbVar8[2] = bVar4;
            pbVar9 = pbVar8 + 3;
          }
          else {
            if ((long)pbVar7 - (long)pbVar8 < 4) break;
            *pbVar8 = (byte)(uVar12 >> 0x12) | 0xf0;
            pbVar8[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            pbVar8[2] = bVar5;
            pbVar8[3] = bVar4;
            pbVar9 = pbVar8 + 4;
          }
        }
      }
      param_1 = puVar6;
      pbVar8 = pbVar9;
    }
    *pbVar8 = 0;
    param_3 = (ulong)(uint)((int)pbVar8 - (int)param_2);
  }
  return param_3;
}



/* Entry: 004ac3f8; end: 004ac53f;  */

void FUN_004ac3f8(ulong param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = (uint)param_1 & 0xf;
  uVar3 = uVar2;
  if ((int)(param_3 - 1U) <= (int)uVar2) {
    uVar3 = param_3 - 1U;
  }
  uVar5 = param_1 >> 4 & 0xffffffffffffff;
  uVar1 = (int)uVar3 >> 0x1f;
  if (uVar2 < 8) {
    pbVar4 = param_2;
    for (uVar6 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar4 = (byte)uVar5 & 0x7f;
      uVar5 = uVar5 >> 8;
      pbVar4 = pbVar4 + 1;
    }
  }
  else if (uVar2 < 10) {
    uVar2 = uVar2 * 6;
    pbVar4 = param_2;
    for (uVar6 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar2 = uVar2 - 6;
      *pbVar4 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                [uVar5 >> ((ulong)uVar2 & 0x3f) & 0x3f];
      pbVar4 = pbVar4 + 1;
    }
  }
  else if (uVar2 < 0xc) {
    uVar2 = uVar2 * 5;
    pbVar4 = param_2;
    for (uVar6 = (ulong)(uVar3 & (uVar1 ^ 0xffffffff)); uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar2 = uVar2 - 5;
      *pbVar4 = "eilotrm.apdnsIc ufkMShjTRxgC4013bDNvwyUL2O856P-B79AFKEWV_zGJ/HYX"
                [uVar5 >> ((ulong)uVar2 & 0x3f) & 0x1f];
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    *param_2 = 0;
  }
  param_2[param_1 & 0xf] = 0;
  return;
}



/* Entry: 004ac540; end: 004ac5e7;  */

double FUN_004ac540(ulong param_1)

{
  ulong uVar1;
  int extraout_w8;
  int iVar2;
  double dVar3;
  
  if (((long)param_1 < 0) && (func_0x004acf50(param_1 >> 0x3c & 7), extraout_w8 != 0)) {
    return (double)((long)(param_1 << 4) >> 8);
  }
  uVar1 = param_1;
  _CFNumberGetType();
  switch(uVar1) {
  case 1:
  case 7:
    iVar2 = (int)*(char *)(param_1 + 0x10);
    goto code_r0x004ac5cc;
  case 2:
  case 8:
    iVar2 = (int)*(short *)(param_1 + 0x10);
    goto code_r0x004ac5cc;
  case 3:
  case 9:
    iVar2 = *(int *)(param_1 + 0x10);
code_r0x004ac5cc:
    dVar3 = (double)iVar2;
    break;
  case 4:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
    dVar3 = (double)*(long *)(param_1 + 0x10);
    break;
  case 5:
  case 0xc:
    dVar3 = (double)*(float *)(param_1 + 0x10);
    break;
  case 6:
  case 0xd:
  case 0x10:
    dVar3 = *(double *)(param_1 + 0x10);
    break;
  default:
    dVar3 = NAN;
  }
  return dVar3;
}



/* Entry: 004ac5e8; end: 004ac607;  */

bool FUN_004ac5e8(long param_1)

{
  func_0x004ac6e0();
  return *(int *)(param_1 + 0xc) == 1;
}



/* Entry: 004ac608; end: 004ac75f;  */

int FUN_004ac608(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = param_1;
  FUN_004ac5e8();
  if ((int)lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    if (((int)param_3 <= lVar3) || (param_3 = lVar3, 0 < lVar3)) {
      iVar4 = (int)param_3;
      lVar3 = param_1;
      func_0x004ac6e0();
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        plVar2 = (long *)(param_1 + 0x10);
        goto LAB_004ac6c4;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (((int)param_3 <= lVar3) || (param_3 = lVar3, 0 < lVar3)) {
      iVar4 = (int)param_3;
      bVar1 = *(byte *)(param_1 + 8);
      if ((bVar1 & 3) == 2) {
        plVar2 = *(long **)(param_1 + 0x28) + **(long **)(param_1 + 0x28) + 2;
      }
      else {
        lVar3 = 0x58;
        if (((bVar1 ^ 0xff) & 0xc) != 0) {
          lVar3 = 0x30;
        }
        plVar2 = (long *)0x0;
        if ((bVar1 & 3) == 0) {
          plVar2 = (long *)(param_1 + lVar3);
        }
      }
LAB_004ac6c4:
      FUN_004abc48(plVar2,param_2,iVar4 << 3);
      if ((int)plVar2 != 0) {
        return iVar4;
      }
      return 0;
    }
  }
  return 0;
}



/* Entry: 004ac760; end: 004ac777;  */

undefined4 FUN_004ac760(long param_1)

{
  func_0x004ac6e0();
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 004ac778; end: 004ac793;  */

bool FUN_004ac778(ulong param_1)

{
  int extraout_w8;
  
  if ((long)param_1 < 0) {
    func_0x004acf50(param_1 >> 0x3c & 7);
    return extraout_w8 != 0;
  }
  return false;
}



/* Entry: 004ac794; end: 004ac7df;  */

void FUN_004ac794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004ac8dc(param_2,param_3,"<%s: 0x%016x>");
  return;
}



/* Entry: 004ac7e0; end: 004ac833;  */

bool FUN_004ac7e0(ulong param_1)

{
  int extraout_w8;
  
  if (((long)param_1 < 0) && (func_0x004acf50(param_1 >> 0x3c & 7), extraout_w8 != 0)) {
    return (param_1 & 0x7000000000000000) == 0x2000000000000000;
  }
  return false;
}



/* Entry: 004ac834; end: 004ac877;  */

int FUN_004ac834(int param_1)

{
  int unaff_w21;
  
  FUN_004ac794();
  func_0x004acfc4();
  FUN_004ac8dc();
  return param_1 + unaff_w21;
}



/* Entry: 004ac878; end: 004ac89f;  */

bool FUN_004ac878(ulong param_1)

{
  int extraout_w8;
  
  if (((long)param_1 < 0) && (func_0x004acf50(param_1 >> 0x3c & 7), extraout_w8 != 0)) {
    return (param_1 & 0x7000000000000000) == 0x6000000000000000;
  }
  return false;
}



/* Entry: 004ac8a0; end: 004ac8db;  */

int FUN_004ac8a0(int param_1)

{
  int unaff_w21;
  
  FUN_004ac794();
  func_0x004acfc4();
  func_0x004ad004();
  return param_1 + unaff_w21;
}



/* Entry: 004ac8dc; end: 004acb07;  */

int FUN_004ac8dc(undefined1 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar2 = param_1;
  _vsnprintf(param_1,(long)param_2,param_3,&stack0x00000000);
  iVar1 = (int)puVar2;
  if (iVar1 < 0) {
    *param_1 = 0;
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2 + -1;
  }
  return iVar1;
}



/* Entry: 004acb08; end: 004acb53;  */

int FUN_004acb08(int param_1)

{
  int iVar1;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  func_0x004acf40();
  FUN_004acee4();
  func_0x004acf68();
  FUN_004ac208();
  iVar1 = param_1 + unaff_w22 + unaff_w21;
  func_0x004acfa0(unaff_x20 + param_1 + (long)unaff_w21);
  return iVar1 + unaff_w21;
}



/* Entry: 004acb54; end: 004acbc7;  */

void FUN_004acb54(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  
  lVar1 = param_1;
  FUN_004ac5e8();
  if ((int)lVar1 == 0) {
    FUN_004abc48(param_1,auStack_50,0x18);
  }
  else {
    lVar1 = param_1;
    FUN_004abc48(param_1,auStack_50,0x30);
    if ((((int)lVar1 != 0) && ((*(byte *)(param_1 + 8) & 3) == 2)) &&
       (*(long *)(param_1 + 0x28) != 0)) {
      func_0x004acfb4(*(long *)(param_1 + 0x28),auStack_60);
    }
  }
  return;
}



/* Entry: 004acbc8; end: 004acccb;  */

int FUN_004acbc8(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_004acee4();
  iVar1 = (int)lVar2;
  lVar2 = param_2 + iVar1;
  lVar3 = lVar2;
  FUN_004ac8dc(lVar2,param_3 - iVar1,": [");
  uVar5 = lVar2 + (int)lVar3;
  if (uVar5 < (param_2 + param_3) - 1U) {
    lVar4 = param_1;
    FUN_004ac5e8();
    lVar2 = 0x10;
    if ((int)lVar4 == 0) {
      lVar2 = 8;
    }
    if (0 < (int)((uint)*(undefined8 *)(param_1 + lVar2) &
                 ((uint)((long)*(undefined8 *)(param_1 + lVar2) >> 0x3f) ^ 0xffffffff))) {
      lStack_58 = 0;
      FUN_004ac608(param_1,&lStack_58,1);
      lVar2 = lStack_58;
      if ((int)param_1 == 1) {
        lVar4 = lStack_58;
        func_0x004ac6e0();
        (**(code **)(lVar4 + 0x20))(lVar2,uVar5,(param_3 - iVar1) - (int)lVar3);
        uVar5 = uVar5 + (long)(int)lVar2;
      }
    }
  }
  iVar1 = (int)uVar5;
  FUN_004ac8dc(uVar5,(int)(param_2 + param_3) - iVar1,"]");
  return (iVar1 + (int)uVar5) - (int)param_2;
}



/* Entry: 004acccc; end: 004acceb;  */

void FUN_004acccc(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x004acfb4(param_1,auStack_20);
  return;
}



/* Entry: 004accec; end: 004acd47;  */

int FUN_004accec(void)

{
  int iVar1;
  int unaff_w21;
  
  func_0x004acf40();
  func_0x004ac514();
  iVar1 = unaff_w21;
  FUN_004acee4();
  func_0x004acfc4();
  func_0x004ad004();
  return iVar1 + unaff_w21;
}



/* Entry: 004acd48; end: 004acd6b;  */

void FUN_004acd48(undefined8 param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_004abc48(param_1,auStack_28,0x18);
  return;
}



/* Entry: 004acd6c; end: 004ace63;  */

int FUN_004acd6c(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  int extraout_w8;
  
  uVar2 = param_1;
  FUN_004acee4();
  iVar1 = (int)uVar2;
  param_2 = param_2 + iVar1;
  uVar2 = param_1;
  _CFNumberIsFloatType();
  if ((int)uVar2 == 0) {
    if ((-1 < (long)param_1) || (func_0x004acf50(param_1 >> 0x3c & 7), extraout_w8 == 0)) {
      _CFNumberGetType();
      switch(param_1) {
      case 1:
      case 7:
        break;
      case 2:
      case 8:
        break;
      case 3:
      case 9:
        break;
      case 4:
      case 10:
      case 0xb:
      case 0xe:
      case 0xf:
        break;
      case 5:
      case 0xc:
        break;
      case 6:
      case 0xd:
      case 0x10:
      }
    }
    pcVar3 = ": %lld";
  }
  else {
    FUN_004ac540(param_1);
    pcVar3 = ": %lf";
  }
  FUN_004ac8dc(param_2,param_3 - iVar1,pcVar3);
  return (int)param_2 + iVar1;
}



/* Entry: 004ace64; end: 004ace8f;  */

void FUN_004ace64(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  FUN_004abc48(param_1,auStack_58,0x48);
  if ((int)param_1 != 0) {
    func_0x004aca0c(uStack_40);
  }
  return;
}



/* Entry: 004ace90; end: 004acedb;  */

int FUN_004ace90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  func_0x004acf40();
  FUN_004acee4();
  func_0x004acf68();
  uVar3 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_004ac208(uVar3,unaff_x20 + param_1,unaff_w19 - (param_1 + unaff_w22));
  iVar2 = (int)uVar3;
  iVar1 = iVar2 + param_1 + unaff_w22;
  func_0x004acfa0(unaff_x20 + param_1 + (long)iVar2);
  return iVar1 + iVar2;
}



/* Entry: 004acedc; end: 004acee3;  */

undefined8 FUN_004acedc(void)

{
  return 1;
}



/* Entry: 004acee4; end: 004acf23;  */

void FUN_004acee4(void)

{
  func_0x004acf40();
  func_0x004abcf0();
  func_0x004abd30();
  FUN_004ac8dc();
  return;
}



/* Entry: 004acf24; end: 004ad0f7;  */

void FUN_004acf24(void)

{
  return;
}



/* Entry: 004ad0f8; end: 004ad153;  */

void FUN_004ad0f8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(code **)(param_1 + 0x40) = FUN_004ad4c4;
  *(undefined8 *)(param_1 + 0x30) = 0x4ad0e0;
  *(code **)(param_1 + 0x38) = FUN_004ad154;
  func_0x004ad0e0();
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



/* Entry: 004ad154; end: 004ad1fb;  */

undefined8 FUN_004ad154(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)param_1[5];
  if (((ulong)(long)iVar1 < param_1[10] - (long)(int)param_1[9]) &&
     (uVar2 = *(ulong *)(param_1[0xb] + (long)(iVar1 + (int)param_1[9]) * 8), 1 < uVar2)) {
    *param_1 = uVar2 & 0xfffffffff;
    *(int *)(param_1 + 5) = iVar1 + 1;
    return 1;
  }
  return 0;
}



/* Entry: 004ad1fc; end: 004ad327;  */

void FUN_004ad1fc(ulong *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int aiStack_38 [2];
  
  iVar2 = (int)param_1[5];
  if ((int)param_1[10] <= iVar2) {
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    return;
  }
  if ((iVar2 == 0) && (param_1[0xd] == 0)) {
    iVar2 = 0;
    uVar4 = *(ulong *)(param_1[9] + 0x2b0);
    param_1[0xd] = uVar4;
  }
  else {
    if ((param_1[0xe] == 0) && ((param_1[0xf] & 1) == 0)) {
      uVar4 = *(ulong *)(param_1[9] + 0x2a0);
      param_1[0xe] = uVar4;
      if (uVar4 != 0) goto LAB_004ad240;
    }
    uVar4 = param_1[0xb];
    if (uVar4 == 0) {
      if ((param_1[0xf] & 1) != 0) {
        return;
      }
      uVar4 = *(ulong *)(param_1[9] + 0x298);
      param_1[0xb] = uVar4;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    uVar3 = uVar4;
    FUN_004ad328();
    if ((int)uVar3 == 0) {
      return;
    }
    uVar3 = param_1[0xb];
    if ((uVar3 >> 0x3c & 1) != 0) {
      lVar1 = uVar4 - 8;
      FUN_004abc48(lVar1,aiStack_38,8);
      if ((int)lVar1 == 0) {
        return;
      }
      FUN_004ad328();
      if (aiStack_38[0] == 0) {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x79) = 1;
      uVar3 = param_1[0xb];
    }
    if (uVar3 == 0) {
      return;
    }
    if (param_1[0xc] == 0) {
      return;
    }
    uVar4 = param_1[0xc] + (ulong)*(byte *)((long)param_1 + 0x79) * 4;
    iVar2 = (int)param_1[5];
  }
LAB_004ad240:
  *param_1 = uVar4 & 0xfffffffff;
  *(int *)(param_1 + 5) = iVar2 + 1;
  return;
}



/* Entry: 004ad328; end: 004ad333;  */

bool FUN_004ad328(int param_1)

{
  func_0x004abc64();
  return param_1 != 0;
}



/* Entry: 004ad334; end: 004ad373;  */

void FUN_004ad334(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  _backtrace_async(lVar1,0x60,0);
  *(code **)(param_1 + 0x40) = FUN_004ad4c4;
  *(undefined8 *)(param_1 + 0x30) = 0x4ad0e0;
  *(code **)(param_1 + 0x38) = FUN_004ad154;
  func_0x004ad0e0();
  *(int *)(param_1 + 0x48) = param_2 + 1;
  *(long *)(param_1 + 0x50) = lVar1;
  *(long *)(param_1 + 0x58) = param_1 + 0x60;
  return;
}



/* Entry: 004ad374; end: 004ad42f;  */

bool FUN_004ad374(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = param_1;
  do {
    if (param_1 + param_3 <= pbVar5) {
      return false;
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      return (long)param_2 <= (long)pbVar5 - (long)param_1;
    }
    if ((char)bVar1 < '\0') {
      if (((bVar1 ^ 0xff) & 0xc0) != 0) {
        return false;
      }
      if (((bVar1 ^ 0xff) & 0x3e) == 0) {
        return false;
      }
      uVar2 = *(uint *)(&UNK_00806498 + ((ulong)bVar1 & 0x3f) * 4);
      if (param_1 + param_3 <= pbVar5 + (int)uVar2) {
        return false;
      }
      uVar3 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      pbVar4 = pbVar5 + uVar3;
      while( true ) {
        pbVar5 = pbVar5 + 1;
        if ((int)uVar3 == 0) break;
        uVar3 = (ulong)((int)uVar3 - 1);
        if (-0x41 < (char)*pbVar5) {
          return false;
        }
      }
    }
    else {
      pbVar4 = pbVar5;
      if ((bVar1 < 0x20) && (*(int *)(&UNK_00806998 + (ulong)bVar1 * 4) == 0)) {
        return false;
      }
    }
    pbVar5 = pbVar4 + 1;
  } while( true );
}



/* Entry: 004ad430; end: 004ad4c3;  */

undefined8 FUN_004ad430(byte *param_1,uint param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  pbVar1 = param_1 + param_2;
  do {
    _strnstr(param_1,"0x",(int)pbVar1 - (int)param_1);
    if (param_1 == (byte *)0x0) {
      return 0;
    }
    param_1 = param_1 + 2;
  } while (*(int *)(&UNK_00806598 + (ulong)*param_1 * 4) == 0xff);
  lVar2 = 0;
  while (param_1 < pbVar1) {
    if (*(uint *)(&UNK_00806598 + (ulong)*param_1 * 4) == 0xff) break;
    lVar2 = (ulong)*(uint *)(&UNK_00806598 + (ulong)*param_1 * 4) + lVar2 * 0x10;
    param_1 = param_1 + 1;
  }
  *param_3 = lVar2;
  return 1;
}



/* Entry: 004ad4c4; end: 004ad6fb;  */

void FUN_004ad4c4(ulong *param_1)

{
  long lVar1;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  lVar1 = (*param_1 & 0xfffffffffffffffc) - 1;
  FUN_004a7428(lVar1,&uStack_40);
  if ((int)lVar1 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  param_1[1] = uStack_40;
  param_1[2] = uStack_38;
  param_1[3] = uStack_30;
  param_1[4] = uStack_28;
  return;
}



/* Entry: 004ad6fc; end: 004ad873;  */

/* WARNING: Possible PIC construction at 0x004ad768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004ad804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004ad780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004ad808) */
/* WARNING: Removing unreachable block (ram,0x004ad76c) */
/* WARNING: Removing unreachable block (ram,0x004ad784) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004ad6fc(int param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long alStack_58 [3];
  undefined4 uStack_40;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  alStack_58[2] = 0x1200000000;
  alStack_58[1] = 0x1100000004;
  uStack_40 = 3;
  iStack_3c = param_1;
  _if_nametoindex();
  if (iStack_3c == 0) {
    ___error();
    func_0x004ad894();
  }
  else {
    plVar2 = alStack_58 + 1;
    func_0x004ad8cc(plVar2,6,0,alStack_58);
    if ((int)plVar2 == 0) {
      lVar4 = alStack_58[0];
      _malloc();
      if (lVar4 == 0) {
        func_0x004ab038("ERROR","Vendors/KSCrash/implementation/Recording/Tools/KSSysCtl.c",0x109,
                        "_Bool kssysctl_getMacAddress(const char *const, char *const)",
                        "Out of memory");
        uVar3 = 0;
      }
      else {
        plVar2 = alStack_58 + 1;
        func_0x004ad8cc(plVar2,6,lVar4,alStack_58);
        if ((int)plVar2 != 0) {
          ___error();
          func_0x004ad894();
          return;
        }
        lVar1 = lVar4 + (ulong)*(byte *)(lVar4 + 0x75);
        *param_2 = *(undefined4 *)(lVar1 + 0x78);
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar1 + 0x7c);
        _free(lVar4);
        uVar3 = 1;
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
        return;
      }
      ___stack_chk_fail(uVar3);
    }
    else {
      ___error();
      func_0x004ad894();
    }
  }
  return;
}



/* Entry: 004ad874; end: 004ad8d7;  */

void FUN_004ad874(void)

{
  return;
}



/* Entry: 004ad8d8; end: 004ad90f;  */

ulong FUN_004ad8d8(ulong param_1)

{
  _mach_thread_self();
  _mach_port_deallocate(*(undefined4 *)PTR__mach_task_self__0099a3c0,param_1);
  return param_1 & 0xffffffff;
}


