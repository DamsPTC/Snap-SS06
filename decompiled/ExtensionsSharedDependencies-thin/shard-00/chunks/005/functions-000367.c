/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00742d74; end: 00742ef3;  */

long FUN_00742d74(uint param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = param_1 << 3;
  lVar1 = 4;
  if ((param_1 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < uVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar3) {
    lVar2 = lVar1;
  }
  uVar4 = param_2 << 1 ^ param_2 >> 0x3f;
  func_0x00742934(uVar4);
  return uVar4 + lVar2;
}



/* Entry: 00742ef4; end: 0074303f; +[GPBDescriptor allocDescriptorForClass:messageName:fileDescription:fields:fieldCount:storageSize:flags:] */

undefined8 FUN_00742ef4(undefined8 param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  long in_x5;
  uint in_w6;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint in_stack_00000000;
  
  if (0x1f < in_stack_00000000) {
    func_0x0076c0a8();
  }
  if (in_w6 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    uVar6 = (ulong)in_w6;
    func_0x00784f20();
    uVar3 = 0;
    lVar5 = in_x5;
    do {
      puVar1 = (ushort *)(lVar5 + 0x1c);
      if ((in_stack_00000000 & 1) != 0) {
        puVar1 = (ushort *)(in_x5 + 0x24);
      }
      uVar3 = *puVar1 | uVar3;
      puVar2 = PTR_PTR_00ac3760;
      _objc_alloc(PTR_PTR_00ac3760);
      func_0x00785560();
      func_0x0077e720(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      lVar5 = lVar5 + 0x20;
      in_x5 = in_x5 + 0x28;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (0x1fff < uVar3) {
      func_0x0076c0a8();
    }
  }
  _objc_alloc(param_1);
  func_0x00784fa0();
  _objc_release(puVar4);
  return param_1;
}



/* Entry: 00743040; end: 007431af; +[GPBDescriptor allocDescriptorForClass:file:fields:fieldCount:storageSize:flags:] */

undefined8
FUN_00743040(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
            uint param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((((param_8 ^ 0xffffffff) & 0x1c) != 0) && (func_0x00792680(), param_6 != 0)) {
    uVar4 = (ulong)param_6;
    lVar3 = param_5 + 8;
    do {
      lVar1 = param_5;
      if ((param_8 & 1) != 0) {
        lVar1 = lVar3;
      }
      if (((param_8 >> 2 & 1) == 0) && (*(byte *)(lVar1 + 0x1e) - 0xf < 2)) {
        uVar2 = *(undefined8 *)(lVar1 + 8);
        _objc_getClass();
        *(undefined8 *)(lVar1 + 8) = uVar2;
      }
      if (((((param_8 & 8) == 0 && (param_4 & 0xff) == 3) &&
           ((*(ushort *)(lVar1 + 0x1c) & 0xf02) == 0)) && (-1 < *(int *)(lVar1 + 0x14))) &&
         (*(byte *)(lVar1 + 0x1e) - 0x11 < 0xfffffffe)) {
        *(ushort *)(lVar1 + 0x1c) = *(ushort *)(lVar1 + 0x1c) | 0x20;
      }
      if (((param_8 >> 4 & 1) == 0) && (*(char *)(lVar1 + 0x1e) == '\x11' && param_4 == 2)) {
        *(ushort *)(lVar1 + 0x1c) = *(ushort *)(lVar1 + 0x1c) | 0x1000;
      }
      param_5 = param_5 + 0x20;
      lVar3 = lVar3 + 0x28;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  func_0x0077ebc0(param_1);
  _objc_setAssociatedObject();
  return param_1;
}



/* Entry: 007431b0; end: 007431cb; +[GPBDescriptor allocDescriptorForClass:rootClass:file:fields:fieldCount:storageSize:flags:] */

void FUN_007431b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
                    /* WARNING: Could not recover jumptable at 0x0077ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_allocDescriptorForClass_file_fie_00aba7e0,param_3,param_5,param_6,param_7
             ,param_8,param_9);
  return;
}



/* Entry: 007431cc; end: 00743267; -[GPBDescriptor initWithClass:messageName:fileDescription:fields:storageSize:wireFormat:] */

undefined1 *
FUN_007431cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR__OBJC_CLASS___GPBDescriptor_00ac46d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x00780e20();
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_retain();
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = param_7;
    *(undefined1 *)((long)puVar1 + 0x38) = param_8;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00743268; end: 007432bf; -[GPBDescriptor dealloc] */

void FUN_00743268(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR__OBJC_CLASS___GPBDescriptor_00ac46d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007432c0; end: 007432c3; -[GPBDescriptor copyWithZone:] */

void FUN_007432c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 007432c4; end: 0074345f; -[GPBDescriptor setupOneofs:count:firstHasIndex:] */

void FUN_007432c4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                 ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  puVar3 = param_4;
  uStack_140 = param_3;
  lStack_138 = param_1;
  _objc_alloc();
  uVar8 = SUB84(puVar3,0);
  puVar9 = (undefined *)((ulong)param_4 & 0xffffffff);
  puVar5 = puVar9;
  func_0x00784f20();
  puVar3 = puVar1;
  if ((int)param_4 != 0) {
    unaff_x28 = (undefined *)0x0;
    do {
      lVar12 = *(long *)(lStack_138 + 8);
      param_4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      _objc_alloc_init();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar2 = lVar12;
      func_0x00780ea0();
      if (lVar2 != 0) {
        unaff_x21 = *plStack_120;
        unaff_x27 = lVar2;
        do {
          unaff_x20 = 0;
          do {
            if (*plStack_120 != unaff_x21) {
              _objc_enumerationMutation(lVar12);
            }
            if (*(int *)(*(long *)(*(long *)(lStack_128 + unaff_x20 * 8) + 8) + 0x14) ==
                (int)param_5) {
              func_0x0077e720(param_4);
            }
            unaff_x20 = unaff_x20 + 1;
          } while (unaff_x27 != unaff_x20);
          unaff_x27 = lVar12;
          func_0x00780ea0();
        } while (unaff_x27 != 0);
      }
      puVar3 = PTR_PTR_00ac3768;
      _objc_alloc();
      puVar5 = param_4;
      func_0x00785ca0();
      uVar8 = SUB84(puVar5,0);
      puVar5 = puVar3;
      func_0x0077e720(puVar1);
      _objc_release(puVar3);
      puVar3 = param_4;
      _objc_release();
      unaff_x28 = unaff_x28 + 1;
      param_5 = (ulong)((int)param_5 - 1);
    } while (unaff_x28 != puVar9);
  }
  *(undefined **)(lStack_138 + 0x10) = puVar1;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  pcStack_148 = FUN_00743460;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar7 = (undefined8 *)(undefined1 *)0x0;
  puStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = param_4;
  puStack_178 = puVar1;
  puStack_170 = puVar9;
  lStack_168 = unaff_x21;
  lStack_160 = unaff_x20;
  uStack_158 = param_5;
  puStack_150 = &stack0xfffffffffffffff0;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
    func_0x00793740(PTR__OBJC_CLASS___NSValue_00ac32b0);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar12 = *(long *)(puVar3 + 8);
    uVar8 = SUB84(auStack_218,0);
    lVar2 = lVar12;
    func_0x00780ea0();
    puVar3 = (undefined *)0x0;
    puVar7 = puVar6;
    if (lVar2 != 0) {
      lVar10 = *plStack_250;
      do {
        lVar11 = 0;
        do {
          if (*plStack_250 != lVar10) {
            _objc_enumerationMutation(lVar12);
          }
          lVar4 = *(long *)(lStack_258 + lVar11 * 8);
          if ((*(ushort *)(*(long *)(lVar4 + 8) + 0x1c) >> 6 & 1) != 0) {
            _objc_setAssociatedObject(lVar4,&UNK_0083d283,puVar1,1);
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        uVar8 = SUB84(auStack_218,0);
        lVar2 = lVar12;
        puVar7 = &uStack_260;
        func_0x00780ea0();
        puVar3 = (undefined *)0x0;
      } while (lVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 **)(puVar3 + 0x40) = puVar7;
  *(undefined4 *)(puVar3 + 0x3c) = uVar8;
  return;
}



/* Entry: 00743460; end: 0074357f; -[GPBDescriptor setupExtraTextInfo:] */

void FUN_00743460(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (undefined8 *)(undefined1 *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
    func_0x00793740(PTR__OBJC_CLASS___NSValue_00ac32b0);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar6 = *(long *)(param_1 + 8);
    param_4 = SUB84(auStack_d8,0);
    lVar2 = lVar6;
    func_0x00780ea0();
    param_1 = 0;
    puVar5 = puVar4;
    if (lVar2 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar6);
          }
          lVar3 = *(long *)(lStack_118 + lVar8 * 8);
          if ((*(ushort *)(*(long *)(lVar3 + 8) + 0x1c) >> 6 & 1) != 0) {
            _objc_setAssociatedObject(lVar3,&UNK_0083d283,puVar1,1);
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        param_4 = SUB84(auStack_d8,0);
        lVar2 = lVar6;
        puVar5 = &uStack_120;
        func_0x00780ea0();
        param_1 = 0;
      } while (lVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 **)(param_1 + 0x40) = puVar5;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}



/* Entry: 00743580; end: 0074358b; -[GPBDescriptor setupExtensionRanges:count:] */

void FUN_00743580(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}



/* Entry: 0074358c; end: 0074359b; -[GPBDescriptor setupContainingMessageClass:] */

void FUN_0074358c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_0099add0)(param_1,&UNK_0083d284,param_3,0);
  return;
}



/* Entry: 0074359c; end: 007435c7; -[GPBDescriptor setupContainingMessageClassName:] */

void FUN_0074359c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_getClass(param_3);
                    /* WARNING: Could not recover jumptable at 0x00791430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setupContainingMessageClass__00abf218,param_3)
  ;
  return;
}



/* Entry: 007435c8; end: 00743613; -[GPBDescriptor setupMessageClassNameSuffix:] */

void FUN_007435c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x007882e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_setAssociatedObject_0099add0)(param_1,&UNK_0083d285,param_3,1);
    return;
  }
  return;
}



/* Entry: 00743614; end: 0074361b; -[GPBDescriptor name] */

void FUN_00743614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007798c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_00998f80)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0074361c; end: 0074371b; -[GPBDescriptor file] */

undefined * FUN_0074361c(undefined *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  _objc_sync_enter();
  puVar1 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_0083d282);
  if (puVar1 == (undefined *)0x0) {
    plVar2 = *(long **)(param_1 + 0x30);
    if (*plVar2 != 0) {
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      plVar2 = *(long **)(param_1 + 0x30);
    }
    puVar1 = PTR_PTR_00ac3770;
    if (plVar2[1] == 0) {
      _objc_alloc(PTR_PTR_00ac3770);
      func_0x00786180();
    }
    else {
      _objc_alloc(PTR_PTR_00ac3770);
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      func_0x00786160(puVar1);
    }
    _objc_setAssociatedObject();
  }
  _objc_sync_exit(param_1);
  return puVar1;
}



/* Entry: 0074371c; end: 00743737; -[GPBDescriptor containingType] */

void FUN_0074371c(undefined8 param_1)

{
  _objc_getAssociatedObject(param_1,&UNK_0083d284);
                    /* WARNING: Could not recover jumptable at 0x00781eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_descriptor_00abb4a0);
  return;
}



/* Entry: 00743738; end: 0074393f; -[GPBDescriptor fullName] */

void FUN_00743738(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00780c00();
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = param_1;
    func_0x00789340();
    _NSStringFromClass();
    lVar7 = param_1;
    func_0x00783320();
    lVar3 = lVar7;
    func_0x00789dc0();
    if ((lVar3 != 0) && (lVar4 = lVar2, func_0x00784340(), (int)lVar4 == 0)) {
      return;
    }
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x00789340();
      _NSStringFromClass();
      lVar4 = lVar1;
      _objc_getAssociatedObject(lVar1,&UNK_0083d285);
      if (lVar4 != 0) {
        lVar5 = lVar3;
        func_0x00784380();
        if ((int)lVar5 == 0) {
          return;
        }
        func_0x007882e0(lVar3);
        func_0x007882e0(lVar4);
        func_0x00792460(lVar3);
      }
      func_0x00791ec0(lVar3);
      lVar4 = lVar2;
      func_0x00784340();
      if ((int)lVar4 == 0) {
        return;
      }
    }
    func_0x007882e0(lVar3);
    func_0x00792440();
    _objc_getAssociatedObject(param_1,&UNK_0083d285);
    if (param_1 != 0) {
      lVar3 = lVar2;
      func_0x00784380();
      if ((int)lVar3 == 0) {
        return;
      }
      func_0x007882e0(lVar2);
      func_0x007882e0(param_1);
      func_0x00792460();
    }
    if (lVar1 == 0) {
      func_0x0078a260();
    }
    else {
      func_0x00783bc0();
      lVar7 = lVar1;
    }
    func_0x007882e0();
    puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  }
  else {
    if (lVar1 != 0) {
      func_0x00783bc0();
      goto LAB_00743918;
    }
    lVar7 = **(long **)(param_1 + 0x30);
  }
  PTR__OBJC_CLASS___NSString_00ac2988 = puVar6;
  if (lVar7 == 0) {
    return;
  }
LAB_00743918:
  func_0x007921a0(puVar6);
  return;
}



/* Entry: 00743940; end: 00743a2f; -[GPBDescriptor fieldWithNumber:] */

/* WARNING: Removing unreachable block (ram,0x007439b4) */

ulong FUN_00743940(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar4 = *(long *)(param_1 + 8);
  lVar1 = lVar4;
  func_0x00780ea0();
  while (uVar2 = 0, lVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(ulong *)(lVar6 * 8);
      if (*(int *)(*(long *)(uVar2 + 8) + 0x10) == param_3) goto LAB_007439fc;
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00780ea0();
  }
LAB_007439fc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return uVar2;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar3 = *(long *)(uVar2 + 8);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_230,auStack_1e8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_220;
    do {
      lVar6 = 0;
      do {
        if (*plStack_220 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(ulong *)(lStack_228 + lVar6 * 8);
        uVar2 = uVar5;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00743af8;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar5 = 0;
LAB_00743af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return uVar5;
  }
  ___stack_chk_fail();
  lStack_288 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lVar3 = *(long *)(uVar2 + 0x10);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_350,auStack_308,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_340;
    do {
      lVar6 = 0;
      do {
        if (*plStack_340 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(ulong *)(lStack_348 + lVar6 * 8);
        uVar2 = uVar5;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00743bfc;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_350,auStack_308,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar5 = 0;
LAB_00743bfc:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_288) {
    ___stack_chk_fail();
    return *(ulong *)(uVar2 + 0x20);
  }
  return uVar5;
}



/* Entry: 00743a30; end: 00743b33; -[GPBDescriptor fieldWithName:] */

ulong FUN_00743a30(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00743af8;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_00743af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar3 = *(long *)(uVar2 + 0x10);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_230;
    do {
      lVar6 = 0;
      do {
        if (*plStack_230 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_238 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00743bfc;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_00743bfc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 0x20);
}



/* Entry: 00743b34; end: 00743c37; -[GPBDescriptor oneofWithName:] */

ulong FUN_00743b34(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00743bfc;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_00743bfc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 0x20);
}



/* Entry: 00743c38; end: 00743c3f; -[GPBDescriptor messageClass] */

undefined8 FUN_00743c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00743c40; end: 00743c47; -[GPBDescriptor fields] */

undefined8 FUN_00743c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00743c48; end: 00743c4f; -[GPBDescriptor oneofs] */

undefined8 FUN_00743c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00743c50; end: 00743c57; -[GPBDescriptor extensionRanges] */

undefined8 FUN_00743c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00743c58; end: 00743c5f; -[GPBDescriptor extensionRangesCount] */

undefined4 FUN_00743c58(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* Entry: 00743c60; end: 00743c67; -[GPBDescriptor isWireFormat] */

undefined1 FUN_00743c60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 00743c68; end: 00743cdf; -[GPBFileDescriptor initWithPackage:objcPrefix:syntax:] */

undefined1 *
FUN_00743c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac46d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00780e20();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x00780e20();
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00743ce0; end: 00743d47; -[GPBFileDescriptor initWithPackage:syntax:] */

undefined1 *
FUN_00743ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac46d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00780e20();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00743d48; end: 00743d97; -[GPBFileDescriptor dealloc] */

void FUN_00743d48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac46d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00743d98; end: 00743e27; -[GPBFileDescriptor isEqual:] */

/* WARNING: Possible PIC construction at 0x00743de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00743dec) */
/* WARNING: Removing unreachable block (ram,0x00743df0) */
/* WARNING: Removing unreachable block (ram,0x00743e00) */
/* WARNING: Removing unreachable block (ram,0x00743e04) */

undefined8 FUN_00743d98(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_3 == param_1) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3770;
    _objc_opt_class(PTR_PTR_00ac3770);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) {
      uVar3 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 8));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 00743e28; end: 00743e2f; -[GPBFileDescriptor hash] */

void FUN_00743e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007843b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_hash_00abbdf0);
  return;
}



/* Entry: 00743e30; end: 00743e33; -[GPBFileDescriptor copyWithZone:] */

void FUN_00743e30(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00743e34; end: 00743e3b; -[GPBFileDescriptor package] */

undefined8 FUN_00743e34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00743e3c; end: 00743e43; -[GPBFileDescriptor objcPrefix] */

undefined8 FUN_00743e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00743e44; end: 00743e4b; -[GPBFileDescriptor syntax] */

undefined1 FUN_00743e44(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 00743e4c; end: 00743f8b; -[GPBOneofDescriptor initWithName:fields:] */

undefined8 * FUN_00743e4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 uStack_1a1;
  undefined1 *puStack_1a0;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_e0 = PTR_PTR_00ac46e0;
  puVar5 = &uStack_e8;
  puVar6 = (undefined8 *)PTR_s_init_00abbf70;
  puVar7 = param_3;
  uVar8 = param_4;
  uStack_e8 = param_1;
  _objc_msgSendSuper2();
  lVar10 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_3;
    uVar8 = param_4;
    _objc_retain();
    puVar5[2] = uVar8;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar8 = param_4;
    func_0x00780ea0();
    if (uVar8 != 0) {
      lVar10 = *plStack_120;
      do {
        uVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_4);
          }
          *(undefined8 **)(*(long *)(lStack_128 + uVar11 * 8) + 0x10) = puVar5;
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
        uVar8 = param_4;
        func_0x00780ea0();
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)&UNK_0091eb20;
    lVar10 = 0;
    uVar8 = 0;
    FUN_00743f8c();
    puVar5[3] = lVar10;
    puVar6 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    pcStack_138 = FUN_00743f8c;
    ppuVar3 = &puStack_1a0;
    lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
    puStack_140 = &stack0xfffffffffffffff0;
    if ((((uVar8 & 1) == 0) && (lVar10 == 0)) && (puVar7 == (undefined8 *)0x0)) {
      puVar5 = (undefined8 *)0x0;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x0077ae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__sel_getUid_0099ae48)(puVar6);
        return puVar6;
      }
    }
    else {
      if (lVar10 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar10;
        _strlen();
      }
      puVar5 = puVar6;
      _strlen();
      if (puVar7 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar7;
        _strlen();
      }
      puVar1 = (undefined *)((long)puVar5 + lVar9) + (long)puVar12;
      puVar2 = puVar1 + 2;
      if ((int)uVar8 == 0) {
        puVar2 = puVar1 + 1;
      }
      puStack_1a0 = (undefined1 *)&puStack_1a0;
      (*(code *)PTR____chkstk_darwin_00999f48)((ulong)(puVar2 + 0xf) & 0xfffffffffffffff0);
      ppuVar3 = (undefined1 **)((long)&puStack_1a0 - extraout_x8);
      if (lVar10 == 0) {
        _memcpy(ppuVar3,puVar6,puVar5);
      }
      else {
        _memcpy(ppuVar3,lVar10,lVar9);
        _memcpy((undefined1 *)((long)ppuVar3 + lVar9),puVar6,puVar5);
        uVar4 = *(undefined1 *)((long)ppuVar3 + lVar9);
        ___toupper();
        *(undefined1 *)((long)ppuVar3 + lVar9) = uVar4;
      }
      if (puVar7 != (undefined8 *)0x0) {
        _memcpy((undefined1 *)((long)ppuVar3 + lVar9) + (long)puVar5,puVar7,puVar12);
      }
      if ((int)uVar8 != 0) {
        ((undefined *)((long)ppuVar3 + (long)(puVar1 + 2)))[-2] = 0x3a;
      }
      ((undefined *)((long)ppuVar3 + (long)puVar2))[-1] = 0;
      puVar5 = ppuVar3;
      _sel_getUid();
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
        return puVar5;
      }
    }
    ___stack_chk_fail();
    puVar6 = ppuVar3 + -6;
    ppuVar3[-4] = (undefined1 *)puVar7;
    ppuVar3[-3] = (undefined1 *)uVar8;
    ppuVar3[-2] = (undefined1 *)&puStack_140;
    ppuVar3[-1] = FUN_00744150;
    _objc_release(puVar5[2]);
    ppuVar3[-6] = (undefined1 *)puVar5;
    ppuVar3[-5] = PTR_PTR_00ac46e0;
    _objc_msgSendSuper2(ppuVar3 + -6,PTR_s_dealloc_00ab6538);
    return puVar6;
  }
  return puVar5;
}



/* Entry: 00743f8c; end: 0074414f;  */

void FUN_00743f8c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_70;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((((param_4 & 1) == 0) && (param_1 == 0)) && (param_3 == 0)) {
    puVar6 = (undefined1 *)0x0;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0077ae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__sel_getUid_0099ae48)(param_2);
      return;
    }
  }
  else {
    if (param_1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_1;
      _strlen();
    }
    lVar5 = param_2;
    _strlen();
    if (param_3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_3;
      _strlen();
    }
    lVar2 = lVar5 + lVar7 + lVar8;
    lVar1 = lVar2 + 2;
    if ((int)param_4 == 0) {
      lVar1 = lVar2 + 1;
    }
    puStack_70 = (undefined1 *)&puStack_70;
    (*(code *)PTR____chkstk_darwin_00999f48)(lVar1 + 0xfU & 0xfffffffffffffff0);
    ppuVar3 = (undefined1 **)((long)&puStack_70 - extraout_x8);
    if (param_1 == 0) {
      _memcpy(ppuVar3,param_2,lVar5);
    }
    else {
      _memcpy(ppuVar3,param_1,lVar7);
      _memcpy((undefined1 *)((long)ppuVar3 + lVar7),param_2,lVar5);
      uVar4 = *(undefined1 *)((long)ppuVar3 + lVar7);
      ___toupper();
      *(undefined1 *)((long)ppuVar3 + lVar7) = uVar4;
    }
    if (param_3 != 0) {
      _memcpy((undefined1 *)((long)ppuVar3 + lVar5 + lVar7),param_3,lVar8);
    }
    if ((int)param_4 != 0) {
      *(undefined1 *)((long)ppuVar3 + lVar2) = 0x3a;
    }
    *(undefined1 *)((long)ppuVar3 + lVar1 + -1) = 0;
    puVar6 = (undefined1 *)ppuVar3;
    _sel_getUid();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
  *(long *)((long)ppuVar3 + -0x20) = param_3;
  *(ulong *)((long)ppuVar3 + -0x18) = param_4;
  *(undefined1 **)((long)ppuVar3 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppuVar3 + -8) = FUN_00744150;
  _objc_release(*(undefined8 *)(puVar6 + 0x10));
  *(undefined1 **)((long)ppuVar3 + -0x30) = puVar6;
  *(undefined **)((long)ppuVar3 + -0x28) = PTR_PTR_00ac46e0;
  _objc_msgSendSuper2((undefined1 *)((long)ppuVar3 + -0x30),PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00744150; end: 00744197; -[GPBOneofDescriptor dealloc] */

void FUN_00744150(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac46e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00744198; end: 0074419b; -[GPBOneofDescriptor copyWithZone:] */

void FUN_00744198(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0074419c; end: 007441af; -[GPBOneofDescriptor name] */

void FUN_0074419c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSString_00ac2988,PTR_s_stringWithUTF8String__00abf598,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 007441b0; end: 0074429f; -[GPBOneofDescriptor fieldWithNumber:] */

ulong FUN_007441b0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar6 * 8);
        if (*(int *)(*(long *)(uVar2 + 8) + 0x10) == param_3) goto LAB_0074426c;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_110,auStack_c8,0x10);
      uVar2 = 0;
    } while (lVar1 != 0);
  }
LAB_0074426c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return uVar2;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar3 = *(long *)(uVar2 + 0x10);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_230,auStack_1e8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_220;
    do {
      lVar6 = 0;
      do {
        if (*plStack_220 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(ulong *)(lStack_228 + lVar6 * 8);
        uVar2 = uVar5;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00744368;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar5 = 0;
LAB_00744368:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return uVar5;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 0x10);
}



/* Entry: 007442a0; end: 007443a3; -[GPBOneofDescriptor fieldWithName:] */

ulong FUN_007442a0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780ea0(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00789760();
        func_0x007877e0();
        if ((uVar2 & 1) != 0) goto LAB_00744368;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00780ea0(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_00744368:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 0x10);
}



/* Entry: 007443a4; end: 007443ab; -[GPBOneofDescriptor fields] */

undefined8 FUN_007443a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 007443ac; end: 00744553; -[GPBFieldDescriptor initWithFieldDescription:descriptorFlags:] */

undefined1 * FUN_007443ac(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar4 = &uStack_60;
  puStack_58 = PTR_PTR_00ac46e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  lVar7 = 0;
  if ((param_4 & 1) != 0) {
    lVar7 = 8;
  }
  puVar1 = (undefined8 *)((long)param_3 + lVar7);
  *(undefined8 **)((long)puVar4 + 8) = puVar1;
  uVar5 = *puVar1;
  _sel_getUid();
  *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
  puVar6 = &UNK_0091eb2a;
  FUN_00743f8c(&UNK_0091eb2a,*puVar1,0,1);
  *(undefined **)((long)puVar4 + 0x20) = puVar6;
  bVar2 = *(byte *)((long)puVar1 + 0x1e);
  uVar3 = *(ushort *)(*(long *)((long)puVar4 + 8) + 0x1c);
  if ((uVar3 & 0xf02) == 0) {
    if ((*(int *)((long)puVar1 + 0x14) < 0) || ((*(ushort *)((long)puVar1 + 0x1c) >> 5 & 1) != 0))
    goto LAB_0074446c;
    puVar6 = &UNK_0091eb35;
    FUN_00743f8c(&UNK_0091eb35,*puVar1,0,0);
    *(undefined **)((long)puVar4 + 0x28) = puVar6;
    puVar6 = &UNK_0091eb39;
    FUN_00743f8c(&UNK_0091eb39,*puVar1,0,1);
    lVar7 = 0x30;
  }
  else {
    puVar6 = (undefined *)0x0;
    FUN_00743f8c(0,*puVar1,&UNK_0091eb2e,0);
    lVar7 = 0x28;
  }
  *(undefined **)((long)puVar4 + lVar7) = puVar6;
LAB_0074446c:
  if (bVar2 - 0xf < 2) {
    *(undefined8 *)((long)puVar4 + 0x40) = puVar1[1];
  }
  else if (bVar2 == 0x11) {
    (*(code *)puVar1[1])();
    *(undefined **)((long)puVar4 + 0x48) = puVar6;
    if ((param_4 & 1) == 0) {
      return (undefined1 *)puVar4;
    }
    if ((uVar3 & 0xf02) != 0) {
      return (undefined1 *)puVar4;
    }
    *(long *)((long)puVar4 + 0x38) = *param_3;
    return (undefined1 *)puVar4;
  }
  if (((param_4 & 1) != 0) && ((uVar3 & 0xf02) == 0)) {
    lVar7 = *param_3;
    *(long *)((long)puVar4 + 0x38) = lVar7;
    if ((bVar2 == 0xd) && (lVar7 != 0)) {
      puVar6 = PTR__OBJC_CLASS___NSData_00ac2b10;
      _objc_alloc();
      func_0x00784e00();
      *(undefined **)((long)puVar4 + 0x38) = puVar6;
    }
  }
  return (undefined1 *)puVar4;
}



/* Entry: 00744554; end: 007445b3; -[GPBFieldDescriptor dealloc] */

void FUN_00744554(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x1e) == '\r') &&
     ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 1 & 1) == 0)) {
    _objc_release(*(undefined8 *)(param_1 + 0x38));
  }
  puStack_28 = PTR_PTR_00ac46e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007445b4; end: 007445b7; -[GPBFieldDescriptor copyWithZone:] */

void FUN_007445b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 007445b8; end: 007445c3; -[GPBFieldDescriptor dataType] */

undefined1 FUN_007445b8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x1e);
}



/* Entry: 007445c4; end: 007445d3; -[GPBFieldDescriptor hasDefaultValue] */

ushort FUN_007445c4(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 4 & 1;
}



/* Entry: 007445d4; end: 007445df; -[GPBFieldDescriptor number] */

undefined4 FUN_007445d4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
}



/* Entry: 007445e0; end: 007445f7; -[GPBFieldDescriptor name] */

void FUN_007445e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSString_00ac2988,PTR_s_stringWithUTF8String__00abf598,
             **(undefined8 **)(param_1 + 8));
  return;
}



/* Entry: 007445f8; end: 00744607; -[GPBFieldDescriptor isRequired] */

ushort FUN_007445f8(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) & 1;
}



/* Entry: 00744608; end: 00744617; -[GPBFieldDescriptor isOptional] */

ushort FUN_00744608(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 3 & 1;
}



/* Entry: 00744618; end: 00744637; -[GPBFieldDescriptor fieldType] */

undefined4 FUN_00744618(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x1c);
  uVar2 = 0;
  if ((uVar1 & 0xf00) != 0) {
    uVar2 = 2;
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 00744638; end: 0074466f; -[GPBFieldDescriptor mapKeyDataType] */

undefined1 FUN_00744638(long param_1)

{
  uint uVar1;
  
  uVar1 = ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) & 0xf00) - 0x100 >> 8) - 1;
  if (uVar1 < 0xb) {
    return (&UNK_0083d286)[uVar1];
  }
  return 7;
}



/* Entry: 00744670; end: 0074467f; -[GPBFieldDescriptor isPackable] */

ushort FUN_00744670(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 2 & 1;
}



/* Entry: 00744680; end: 007446ab; -[GPBFieldDescriptor isValidEnumValue:] */

void FUN_00744680(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  func_0x00782a60();
                    /* WARNING: Could not recover jumptable at 0x007446a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 007446ac; end: 007446b3; -[GPBFieldDescriptor enumDescriptor] */

undefined8 FUN_007446ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 007446b4; end: 00744703; -[GPBFieldDescriptor defaultValue] */

undefined ** FUN_007446b4(long param_1)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x38);
  ppuVar3 = ppuVar2;
  if ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 1 & 1) == 0) {
    cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x1e);
    if (cVar1 == '\r' && ppuVar2 == (undefined **)0x0) {
      FUN_0076c044();
      return ppuVar2;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_00a212a0;
    if (ppuVar2 != (undefined **)0x0 || cVar1 != '\x0e') {
      ppuVar3 = ppuVar2;
    }
  }
  return ppuVar3;
}



/* Entry: 00744704; end: 00744913; -[GPBFieldDescriptor textFormatName] */

byte * FUN_00744704(byte *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbStack_68;
  
  if ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 6 & 1) == 0) {
    pbVar11 = param_1;
    func_0x00789760();
    pbVar8 = pbVar11;
    func_0x007882e0();
    pbVar6 = pbVar11;
    func_0x00784380();
    if ((int)pbVar6 != 0) {
      func_0x00792460();
      pbVar8 = pbVar11;
      func_0x007882e0();
    }
    if (((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 1 & 1) != 0) &&
       (pbVar6 = pbVar11, func_0x00784380(), (int)pbVar6 != 0)) {
      func_0x00792460();
      pbVar8 = pbVar11;
      func_0x007882e0();
    }
    if (*(char *)(*(long *)(param_1 + 8) + 0x1e) == '\x10') {
      pbVar8 = pbVar11;
      func_0x00780140();
      if ((int)pbVar8 - 0x61U < 0x1a) {
        puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
        func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00791f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)
                  (pbVar11,PTR_s_stringByReplacingCharactersInRan_00abf4e0,0,1,puVar7);
        return pbVar11;
      }
    }
    else {
      pbVar11 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
      func_0x00792160(PTR__OBJC_CLASS___NSMutableString_00ac2cc0);
      if (pbVar8 != (byte *)0x0) {
        pbVar6 = (byte *)((long)&MACH_HEADER.magic + 1);
        do {
          func_0x00780140();
          func_0x0077eec0(pbVar11);
          bVar1 = pbVar6 < pbVar8;
          pbVar6 = (byte *)(ulong)((int)pbVar6 + 1);
        } while (bVar1);
      }
    }
  }
  else {
    pbVar11 = param_1;
    _objc_getAssociatedObject(param_1,&UNK_0083d283);
    if (pbVar11 != (byte *)0x0) {
      func_0x0078a720();
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x10);
      func_0x00789760();
      if ((pbVar11 != (byte *)0x0) && (param_1 != (byte *)0x0)) {
        iVar5 = (int)&pbStack_68;
        pbStack_68 = pbVar11;
        FUN_0076de54();
        if (0 < iVar5) {
          uVar9 = iVar5 + 1;
          do {
            iVar5 = (int)&pbStack_68;
            FUN_0076de54();
            pbVar11 = pbStack_68;
            pbVar8 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
            if (iVar5 == iVar3) {
              if (*pbStack_68 == 0) {
                pbVar11 = PTR__OBJC_CLASS___NSString_00ac2988;
                func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
                return pbVar11;
              }
              func_0x007882e0(param_1);
              func_0x00792160(pbVar8);
              bVar4 = *pbVar11;
              goto joined_r0x0076dd48;
            }
            pbVar8 = pbStack_68 + 1;
            _strlen();
            pbStack_68 = pbVar11 + (long)pbVar8 + 2;
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
        }
      }
      return (byte *)0x0;
    }
    pbVar11 = (byte *)0x0;
  }
  return pbVar11;
joined_r0x0076dd48:
  if (bVar4 == 0) {
    return pbVar8;
  }
  if ((char)bVar4 < '\0') {
    func_0x0077ef80(pbVar8);
    bVar4 = *pbVar11;
  }
  uVar9 = bVar4 & 0x1f;
  uVar2 = bVar4 & 0x60;
  if (uVar2 == 0x20) {
    func_0x00780140();
    ___tolower();
LAB_0076ddbc:
    func_0x0077eec0(pbVar8);
    uVar9 = uVar9 - 1;
  }
  else if (uVar2 == 0x40) {
    func_0x00780140();
    ___toupper();
    goto LAB_0076ddbc;
  }
  if (0 < (int)uVar9) {
    uVar10 = (ulong)uVar9;
    do {
      func_0x00780140();
      if (uVar2 == 0x60) {
        ___toupper();
      }
      func_0x0077eec0(pbVar8);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pbVar11 = pbVar11 + 1;
  bVar4 = *pbVar11;
  goto joined_r0x0076dd48;
}



/* Entry: 00744914; end: 0074491b; -[GPBFieldDescriptor msgClass] */

undefined8 FUN_00744914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 0074491c; end: 00744923; -[GPBFieldDescriptor containingOneof] */

undefined8 FUN_0074491c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00744924; end: 0074499b; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:] */

void FUN_00744924(undefined8 param_1)

{
  ulong in_x7;
  
  if ((in_x7 & 0xfffffffd) != 0) {
    func_0x0076c0a8();
  }
  _objc_alloc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00785d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0074499c; end: 007449bf; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:flags:extraTextFormatInfo:] */

void FUN_0074499c(long param_1)

{
  undefined8 in_stack_00000000;
  
  func_0x0077ec00();
  *(undefined8 *)(param_1 + 0x28) = in_stack_00000000;
  return;
}



/* Entry: 007449c0; end: 007449c7; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:] */

void FUN_007449c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_allocDescriptorForName_valueName_00aba7f8);
  return;
}



/* Entry: 007449c8; end: 007449eb; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:extraTextFormatInfo:] */

void FUN_007449c8(void)

{
  func_0x0077ec20();
  return;
}



/* Entry: 007449ec; end: 00744a77; -[GPBEnumDescriptor initWithName:valueNames:values:count:enumVerifier:flags:] */

undefined1 *
FUN_007449ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac46f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00780e20();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined4 *)((long)puVar1 + 0x38) = param_6;
    *(undefined4 *)((long)puVar1 + 0x3c) = param_8;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00744a78; end: 00744acb; -[GPBEnumDescriptor dealloc] */

void FUN_00744a78(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x30) != 0) {
    _free();
  }
  puStack_28 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac46f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00744acc; end: 00744acf; -[GPBEnumDescriptor copyWithZone:] */

void FUN_00744acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00744ad0; end: 00744adb; -[GPBEnumDescriptor isClosed] */

byte FUN_00744ad0(long param_1)

{
  return *(byte *)(param_1 + 0x3c) >> 1 & 1;
}



/* Entry: 00744adc; end: 00744b5f; -[GPBEnumDescriptor calcValueNameOffsets] */

void FUN_00744adc(long param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar5 = (ulong)uVar1;
    piVar2 = (int *)(uVar5 << 2);
    _malloc();
    if (piVar2 != (int *)0x0) {
      if (uVar1 != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        lVar4 = lVar6;
        piVar7 = piVar2;
        do {
          *piVar7 = (int)lVar4 - (int)lVar6;
          lVar3 = lVar4;
          _strlen();
          lVar4 = lVar4 + lVar3 + 1;
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 1;
        } while (uVar5 != 0);
      }
      *(int **)(param_1 + 0x30) = piVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_sync_exit_0099ae08)(param_1);
  return;
}



/* Entry: 00744b60; end: 00744b97; -[GPBEnumDescriptor enumNameForValue:] */

long FUN_00744b60(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x18) + uVar1 * 4) == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00783e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_getEnumNameForIndex__00abbc88,uVar1);
        return param_1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0x38) != uVar1);
  }
  return 0;
}



/* Entry: 00744b98; end: 00744c83; -[GPBEnumDescriptor getValue:forEnumName:] */

void FUN_00744b98(long param_1,undefined8 param_2,undefined4 *param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x007882e0();
  uVar3 = param_4;
  func_0x007882e0();
  if (((lVar2 + 1U < uVar3) && (uVar3 = param_4, func_0x00784340(), (int)uVar3 != 0)) &&
     (uVar3 = param_4, func_0x00780140(), (int)uVar3 == 0x5f)) {
    func_0x0077bcc0();
    func_0x0077fec0(param_1);
    lVar5 = *(long *)(param_1 + 0x30);
    if ((lVar5 != 0) && (uVar1 = *(uint *)(param_1 + 0x38), uVar1 != 0)) {
      lVar6 = 0;
      lVar7 = *(long *)(param_1 + 0x10);
      do {
        lVar4 = param_4 + lVar2 + 1U;
        _strcmp(lVar4,lVar7 + (ulong)*(uint *)(lVar5 + lVar6));
        if ((int)lVar4 == 0) {
          if (param_3 == (undefined4 *)0x0) {
            return;
          }
          *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar6);
          return;
        }
        lVar6 = lVar6 + 4;
      } while ((ulong)uVar1 * 4 - lVar6 != 0);
    }
  }
  return;
}



/* Entry: 00744c84; end: 00744d0b; -[GPBEnumDescriptor getValue:forEnumTextFormatName:] */

undefined8 FUN_00744c84(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar3;
  long lVar2;
  
  func_0x0077fec0();
  if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = param_1;
      func_0x00783e40(param_1,param_2,lVar3);
      iVar1 = (int)lVar2;
      func_0x007877e0();
      if (iVar1 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar3 * 4);
        }
        return 1;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(param_1 + 0x38));
  }
  return 0;
}



/* Entry: 00744d0c; end: 00744d43; -[GPBEnumDescriptor textFormatNameForValue:] */

long FUN_00744d0c(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x18) + uVar1 * 4) == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00783e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)
                  (param_1,PTR_s_getEnumTextFormatNameForIndex__00abbc90,uVar1);
        return param_1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0x38) != uVar1);
  }
  return 0;
}



/* Entry: 00744d44; end: 00744d4b; -[GPBEnumDescriptor enumNameCount] */

undefined4 FUN_00744d44(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 00744d4c; end: 00744db7; -[GPBEnumDescriptor getEnumNameForIndex:] */

void FUN_00744d4c(long param_1,undefined8 param_2,uint param_3)

{
  func_0x0077fec0();
  if ((*(long *)(param_1 + 0x30) != 0) && (param_3 < *(uint *)(param_1 + 0x38))) {
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a4ae40);
  }
  return;
}



/* Entry: 00744db8; end: 00744edb; -[GPBEnumDescriptor getEnumTextFormatNameForIndex:] */

undefined * FUN_00744db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x0077fec0();
  if ((*(long *)(param_1 + 0x30) == 0) || (*(uint *)(param_1 + 0x38) <= (uint)param_3)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220();
    puVar2 = *(undefined **)(param_1 + 0x28);
    if ((puVar2 == (undefined *)0x0) ||
       (func_0x0076dc74(puVar2,param_3,puVar1), puVar2 == (undefined *)0x0)) {
      puVar3 = puVar1;
      func_0x007882e0();
      puVar2 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
      func_0x00792160(PTR__OBJC_CLASS___NSMutableString_00ac2cc0);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          puVar4 = puVar1;
          func_0x00780140();
          if ((puVar5 != (undefined *)0x0) && ((int)puVar4 - 0x41U < 0x1a)) {
            func_0x0077ef80(puVar2);
          }
          ___toupper();
          func_0x0077eec0(puVar2);
          puVar5 = puVar5 + 1;
        } while (puVar3 != puVar5);
      }
    }
  }
  return puVar2;
}



/* Entry: 00744edc; end: 00744ee3; -[GPBEnumDescriptor name] */

undefined8 FUN_00744edc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00744ee4; end: 00744eeb; -[GPBEnumDescriptor enumVerifier] */

undefined8 FUN_00744ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00744eec; end: 00744fa7; -[GPBExtensionDescriptor initWithExtensionDescription:usesClassRefs:] */

undefined1 * FUN_00744eec(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  if (7 < *(byte *)((long)param_3 + 0x2d)) {
    func_0x0076c0a8();
  }
  puStack_38 = PTR_PTR_00ac46f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(long **)((long)puVar1 + 8) = param_3;
    if (*(byte *)((long)param_3 + 0x2c) == 0xd) {
      if (*param_3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
        _objc_alloc();
        func_0x00784e00();
        *(undefined **)((long)puVar1 + 0x10) = puVar2;
      }
    }
    else if (1 < *(byte *)((long)param_3 + 0x2c) - 0xf) {
      *(long *)((long)puVar1 + 0x10) = *param_3;
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00744fa8; end: 00744ff3; -[GPBExtensionDescriptor initWithExtensionDescription:] */

void FUN_00744fa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x18);
  if (lVar1 != 0) {
    _objc_lookUpClass();
    *(long *)(param_3 + 0x18) = lVar1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    _objc_lookUpClass();
    *(long *)(param_3 + 0x10) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00785510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithExtensionDescription_use_00abc248,param_3,1);
  return;
}



/* Entry: 00744ff4; end: 00745053; -[GPBExtensionDescriptor dealloc] */

void FUN_00744ff4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x2c) == '\r') &&
     ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) & 1) == 0)) {
    _objc_release(*(undefined8 *)(param_1 + 0x10));
  }
  puStack_28 = PTR_PTR_00ac46f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00745054; end: 00745057; -[GPBExtensionDescriptor copyWithZone:] */

void FUN_00745054(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00745058; end: 0074506f; -[GPBExtensionDescriptor singletonName] */

void FUN_00745058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSString_00ac2988,PTR_s_stringWithUTF8String__00abf598,
             *(undefined8 *)(*(long *)(param_1 + 8) + 8));
  return;
}



/* Entry: 00745070; end: 0074507b; -[GPBExtensionDescriptor singletonNameC] */

undefined8 FUN_00745070(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 8);
}



/* Entry: 0074507c; end: 00745087; -[GPBExtensionDescriptor fieldNumber] */

undefined4 FUN_0074507c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x28);
}



/* Entry: 00745088; end: 00745093; -[GPBExtensionDescriptor dataType] */

undefined1 FUN_00745088(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x2c);
}



/* Entry: 00745094; end: 007450bb; -[GPBExtensionDescriptor wireType] */

undefined4 FUN_00745094(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) >> 1 & 1) == 0) {
    return *(undefined4 *)(&UNK_0083d4ec + (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x2c) * 4);
  }
  return 2;
}



/* Entry: 007450bc; end: 007450e3; -[GPBExtensionDescriptor alternateWireType] */

undefined4 FUN_007450bc(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) >> 1 & 1) == 0) {
    return 2;
  }
  return *(undefined4 *)(&UNK_0083d4ec + (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x2c) * 4);
}



/* Entry: 007450e4; end: 007450f3; -[GPBExtensionDescriptor isRepeated] */

byte FUN_007450e4(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 8) + 0x2d) & 1;
}



/* Entry: 007450f4; end: 00745103; -[GPBExtensionDescriptor isPackable] */

byte FUN_007450f4(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 8) + 0x2d) >> 1 & 1;
}



/* Entry: 00745104; end: 0074510f; -[GPBExtensionDescriptor msgClass] */

undefined8 FUN_00745104(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
}



/* Entry: 00745110; end: 0074511b; -[GPBExtensionDescriptor containingMessageClass] */

undefined8 FUN_00745110(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
}



/* Entry: 0074511c; end: 0074513b; -[GPBExtensionDescriptor enumDescriptor] */

code * FUN_0074511c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x2c) == '\x11') {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00745130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  return (code *)0x0;
}



/* Entry: 0074513c; end: 0074522b; -[GPBExtensionDescriptor defaultValue] */

undefined ** FUN_0074513c(long param_1)

{
  undefined **ppuVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
    switch(*(undefined1 *)(*(long *)(param_1 + 8) + 0x2c)) {
    case 0:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (PTR__OBJC_CLASS___NSNumber_00ac29d8,PTR_s_numberWithBool__00abd408,
                 *(undefined1 *)(param_1 + 0x10));
      return ppuVar1;
    case 1:
    case 0xb:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (PTR__OBJC_CLASS___NSNumber_00ac29d8,PTR_s_numberWithUnsignedInt__00abd458,
                 *(undefined4 *)(param_1 + 0x10));
      return ppuVar1;
    case 2:
    case 7:
    case 9:
    case 0x11:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (PTR__OBJC_CLASS___NSNumber_00ac29d8,PTR_s_numberWithInt__00abd428,
                 *(undefined4 *)(param_1 + 0x10));
      return ppuVar1;
    case 3:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (*(undefined4 *)(param_1 + 0x10),PTR__OBJC_CLASS___NSNumber_00ac29d8,
                 PTR_s_numberWithFloat__00abd420);
      return ppuVar1;
    case 4:
    case 0xc:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (PTR__OBJC_CLASS___NSNumber_00ac29d8,PTR_s_numberWithUnsignedLongLong__00abd468,
                 *(undefined8 *)(param_1 + 0x10));
      return ppuVar1;
    case 5:
    case 8:
    case 10:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (PTR__OBJC_CLASS___NSNumber_00ac29d8,PTR_s_numberWithLongLong__00abd440,
                 *(undefined8 *)(param_1 + 0x10));
      return ppuVar1;
    case 6:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
                    /* WARNING: Could not recover jumptable at 0x00789c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (*(undefined8 *)(param_1 + 0x10),PTR__OBJC_CLASS___NSNumber_00ac29d8,
                 PTR_s_numberWithDouble__00abd418);
      return ppuVar1;
    case 0xd:
      ppuVar1 = *(undefined ***)(param_1 + 0x10);
      if (*(undefined ***)(param_1 + 0x10) == (undefined **)0x0) {
        if (lRam0000000000b646d0 != -1) {
          _dispatch_once(0xb646d0,&PTR___NSConcreteGlobalBlock_00a20c68);
        }
        return ppuRam0000000000b646d8;
      }
      break;
    case 0xe:
      ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
      if (*(undefined ***)(param_1 + 0x10) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_1 + 0x10);
      }
    }
  }
  else {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 0074522c; end: 0074524b; -[GPBExtensionDescriptor compareByFieldNumber:] */

ulong FUN_0074522c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x28);
  iVar2 = *(int *)(*(long *)(param_3 + 8) + 0x28);
  uVar3 = (ulong)(iVar2 < iVar1);
  if (iVar1 < iVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



/* Entry: 0074524c; end: 007453bb;  */

long FUN_0074524c(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
  uVar5 = param_1;
  func_0x00788080();
  uVar6 = uVar5;
  func_0x00789980();
  if (uVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      uVar7 = param_1;
      func_0x00789f00();
      func_0x00788320();
      lVar8 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        lVar8 = 5;
      }
      uVar4 = (uint)uVar6;
      lVar1 = 3;
      if (0x1fffff < uVar4) {
        lVar1 = lVar8;
      }
      lVar8 = 2;
      if (0x3fff < uVar4) {
        lVar8 = lVar1;
      }
      lVar1 = 1;
      if (0x7f < uVar4) {
        lVar1 = lVar8;
      }
      FUN_007453bc(uVar7,uVar2);
      uVar6 = uVar6 + lVar1 + uVar7 + 1;
      lVar8 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        lVar8 = 5;
      }
      uVar4 = (uint)uVar6;
      lVar1 = 3;
      if (0x1fffff < uVar4) {
        lVar1 = lVar8;
      }
      lVar8 = 2;
      if (0x3fff < uVar4) {
        lVar8 = lVar1;
      }
      lVar1 = 1;
      if (0x7f < uVar4) {
        lVar1 = lVar8;
      }
      lVar9 = uVar6 + lVar9 + lVar1;
      uVar6 = uVar5;
      func_0x00789980();
    } while (uVar6 != 0);
  }
  uVar4 = *(uint *)(*(long *)(param_2 + 8) + 0x10);
  uVar3 = uVar4 << 3;
  if (uVar3 < 0x80) {
    lVar8 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar8 = 2;
  }
  else if (uVar3 < 0x200000) {
    lVar8 = 3;
  }
  else {
    lVar8 = 4;
    if ((uVar4 & 0x1fffffff) >> 0x19 != 0) {
      lVar8 = 5;
    }
  }
  func_0x00780e80(param_1);
  return lVar9 + param_1 * lVar8;
}



/* Entry: 007453bc; end: 0074543f;  */

long FUN_007453bc(ulong param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 == 0xd) {
    func_0x007882e0();
  }
  else if (param_2 == 0xe) {
    func_0x00788320(param_1,0xe,4);
  }
  else {
    if (param_2 != 0xf) {
      return 0;
    }
    func_0x0078c740();
  }
  lVar1 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    lVar1 = 5;
  }
  uVar3 = (uint)param_1;
  lVar2 = 3;
  if (0x1fffff < uVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar3) {
    lVar2 = lVar1;
  }
  return param_1 + lVar2 + 1;
}



/* Entry: 00745440; end: 00745557;  */

void FUN_00745440(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined1 *)(*(long *)(param_3 + 8) + 0x1e);
  lVar2 = param_2;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar3 = param_2;
    func_0x00789f00(param_2);
    func_0x00794020(param_1);
    func_0x00788320();
    FUN_007453bc(lVar3,uVar1);
    func_0x00794020(param_1);
    func_0x00794320(param_1);
    FUN_00745558(param_1,lVar3,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 00745558; end: 00745597;  */

void FUN_00745558(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00793cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeBytes_value__00abfc40,2,param_2);
    return;
  }
  if (param_3 != 0xe) {
    if (param_3 == 0xf) {
                    /* WARNING: Could not recover jumptable at 0x007940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeMessage_value__00abfd38,2,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00794330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeString_value__00abfdd8,2,param_2);
  return;
}


