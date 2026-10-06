/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00745598; end: 007457cf;  */

void FUN_00745598(undefined8 param_1,ulong param_2,undefined8 param_3,undefined **param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  ppuVar5 = param_4;
  func_0x00788e40();
  bVar3 = param_4[1][0x1e];
  ppuVar10 = (undefined **)(ulong)bVar3;
  ppuStack_70 = (undefined **)0x0;
  ppuStack_68 = (undefined **)0x0;
  if (ppuVar10 == (undefined **)0x11) {
    ppuVar6 = param_4;
    func_0x00781ce0();
    ppuStack_70 = ppuVar6;
  }
  uVar1 = *(uint *)(&UNK_0083d4ec + ((ulong)ppuVar5 & 0xffffffff) * 4);
  uVar2 = *(uint *)(&UNK_0083d4ec + (long)ppuVar10 * 4);
  do {
    while( true ) {
      ppuVar6 = (undefined **)(param_2 + 8);
      FUN_0073f0e4();
      uVar4 = (uint)ppuVar6;
      if (uVar4 != (uVar1 | 8)) break;
      pppuVar8 = &ppuStack_68;
      ppuVar9 = ppuVar5;
LAB_00745648:
      FUN_007457d0(param_2,pppuVar8,ppuVar9,param_3,param_4);
    }
    pppuVar8 = &ppuStack_70;
    ppuVar9 = ppuVar10;
    if (uVar4 == (uVar2 | 0x10)) goto LAB_00745648;
    iVar11 = (int)ppuVar5;
    if (uVar4 == 0) {
      if ((iVar11 == 0xe) && (ppuStack_68 == (undefined **)0x0)) {
        ppuVar6 = &PTR____CFConstantStringClassReference_00a212a0;
        _objc_retain();
        ppuStack_68 = ppuVar6;
      }
      ppuVar5 = ppuStack_68;
      if (((byte)(bVar3 - 0xd) < 4) && (ppuStack_70 == (undefined **)0x0)) {
        if (bVar3 == 0xd) {
          FUN_0076c044();
LAB_007456e0:
          _objc_retain();
          ppuStack_70 = ppuVar6;
        }
        else if (bVar3 == 0xf) {
          ppuVar10 = param_4;
          func_0x00789620();
          _objc_alloc_init();
          ppuStack_70 = ppuVar10;
        }
        else if (bVar3 == 0xe) {
          ppuVar6 = &PTR____CFConstantStringClassReference_00a212a0;
          goto LAB_007456e0;
        }
      }
      if ((iVar11 == 0xe) && ((byte)(bVar3 - 0xd) < 4)) {
        func_0x0078f4a0(param_1);
        goto LAB_00745764;
      }
      if (((bVar3 == 0x11) && ((*(ushort *)(param_4[1] + 0x1c) >> 0xc & 1) != 0)) &&
         (func_0x00787f40(), (int)param_4 == 0)) {
        func_0x0078c720(param_1);
        func_0x0077e980(param_5);
      }
      else {
        func_0x0078e2c0(param_1);
      }
      goto LAB_00745750;
    }
    uVar7 = param_2;
    func_0x00791940();
    if ((uVar7 & 1) == 0) {
LAB_00745750:
      ppuVar5 = ppuStack_68;
      if ((iVar11 - 0xdU & 0xff) < 4) {
LAB_00745764:
        _objc_release(ppuVar5);
      }
      if ((byte)(bVar3 - 0xd) < 4) {
        _objc_release(ppuStack_70);
      }
      return;
    }
  } while( true );
}



/* Entry: 007457d0; end: 00745973;  */

void FUN_007457d0(long param_1,ulong *param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  
  switch(param_3) {
  case 0:
    param_1 = param_1 + 8;
    FUN_0073f060();
    *(bool *)param_2 = param_1 != 0;
    break;
  case 1:
  case 2:
    func_0x0073f2fc(param_1 + 8,4);
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
    goto code_r0x00745960;
  case 3:
    func_0x0073f2fc(param_1 + 8,4);
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
    *(uint *)param_2 = uVar2;
    break;
  case 4:
  case 5:
    func_0x0073f2fc(param_1 + 8,8);
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    goto code_r0x007458b4;
  case 6:
    func_0x0073f2fc(param_1 + 8,8);
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    *param_2 = uVar1;
    break;
  case 7:
  case 0xb:
  case 0x11:
    uVar2 = (int)param_1 + 8;
    FUN_0073f060();
    *(uint *)param_2 = uVar2;
    break;
  case 8:
  case 0xc:
    uVar1 = param_1 + 8;
    FUN_0073f060();
    goto code_r0x007458e0;
  case 9:
    uVar2 = (int)param_1 + 8;
    FUN_0073f060();
    uVar2 = -(uVar2 & 1) ^ uVar2 >> 1;
code_r0x00745960:
    *(uint *)param_2 = uVar2;
    break;
  case 10:
    uVar1 = param_1 + 8;
    FUN_0073f060();
    uVar1 = -(uVar1 & 1) ^ uVar1 >> 1;
code_r0x007458b4:
    *param_2 = uVar1;
    break;
  case 0xd:
    _objc_release(*param_2);
    uVar1 = param_1 + 8;
    func_0x0073f358();
    goto code_r0x007458e0;
  case 0xe:
    _objc_release(*param_2);
    uVar1 = param_1 + 8;
    FUN_0073f260();
code_r0x007458e0:
    *param_2 = uVar1;
    break;
  case 0xf:
    func_0x00789620();
    _objc_alloc_init();
    func_0x0078af60(param_1);
    _objc_release(*param_2);
    *param_2 = param_5;
  }
  return;
}



/* Entry: 00745974; end: 00745983; -[GPBUInt32UInt32Dictionary init] */

void FUN_00745974(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 00745984; end: 00745a47; -[GPBUInt32UInt32Dictionary initWithUInt32s:forKeys:count:] */

undefined1 *
FUN_00745984(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4700;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00745a48; end: 00745a8f; -[GPBUInt32UInt32Dictionary initWithDictionary:] */

long FUN_00745a48(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b60(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00745a90; end: 00745a9f; -[GPBUInt32UInt32Dictionary initWithCapacity:] */

void FUN_00745a90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt32s_forKeys_count__00abc7e0,0,0,0)
  ;
  return;
}



/* Entry: 00745aa0; end: 00745ae7; -[GPBUInt32UInt32Dictionary dealloc] */

void FUN_00745aa0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4700;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00745ae8; end: 00745b13; -[GPBUInt32UInt32Dictionary copyWithZone:] */

void FUN_00745ae8(void)

{
  func_0x0077ec40(PTR_PTR_00ac3778);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00745b14; end: 00745b77; -[GPBUInt32UInt32Dictionary isEqual:] */

undefined8 FUN_00745b14(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3778;
    _objc_opt_class(PTR_PTR_00ac3778);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 00745b78; end: 00745b7f; -[GPBUInt32UInt32Dictionary hash] */

void FUN_00745b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00745b80; end: 00745bcb; -[GPBUInt32UInt32Dictionary description] */

void FUN_00745b80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00745bcc; end: 00745bd3; -[GPBUInt32UInt32Dictionary count] */

void FUN_00745bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00745bd4; end: 00745c73; -[GPBUInt32UInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_00745bd4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x007930e0(lVar2);
    func_0x007930e0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00745c74; end: 00745e23; -[GPBUInt32UInt32Dictionary computeSerializedSizeAsField:] */

void FUN_00745c74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40();
    lVar2 = lVar3;
    func_0x00788080();
    lVar1 = lVar2;
    func_0x00789980();
    while (lVar1 != 0) {
      func_0x00789f00(lVar3,param_2,lVar1);
      func_0x007930e0();
      func_0x007930e0();
      lVar1 = lVar2;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00745e24; end: 0074601b; -[GPBUInt32UInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_00745e24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  lVar3 = param_4;
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar4 = lVar8;
  func_0x00788080();
  lVar5 = lVar4;
  func_0x00789980();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar8;
      func_0x00789f00(lVar8,param_2,lVar5);
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x007930e0();
      func_0x007930e0();
      iVar7 = (int)lVar3;
      if (iVar7 == 1) {
        iVar10 = 5;
      }
      else if (iVar7 == 0xb) {
        uVar9 = (uint)lVar5;
        if (uVar9 < 0x80) {
          iVar10 = 2;
        }
        else if (uVar9 < 0x4000) {
          iVar10 = 3;
        }
        else if (uVar9 < 0x200000) {
          iVar10 = 4;
        }
        else {
          iVar10 = 5;
          if (uVar9 >> 0x1c != 0) {
            iVar10 = 6;
          }
        }
      }
      else {
        iVar10 = 0;
      }
      if (cVar2 == '\x01') {
        iVar11 = 5;
      }
      else if (cVar2 == '\v') {
        uVar9 = (uint)lVar6;
        if (uVar9 < 0x80) {
          iVar11 = 2;
        }
        else if (uVar9 < 0x4000) {
          iVar11 = 3;
        }
        else if (uVar9 < 0x200000) {
          iVar11 = 4;
        }
        else {
          iVar11 = 5;
          if (uVar9 >> 0x1c != 0) {
            iVar11 = 6;
          }
        }
      }
      else {
        iVar11 = 0;
      }
      func_0x00794020(param_3,param_2,iVar11 + iVar10);
      if (iVar7 == 1) {
        func_0x00793e60(param_3,param_2,1,lVar5);
      }
      else if (iVar7 == 0xb) {
        func_0x00794440(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x01') {
        func_0x00793e60(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\v') {
        func_0x00794440(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00789980();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 0074601c; end: 0074606f; -[GPBUInt32UInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_0074601c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00746070; end: 007460bf; -[GPBUInt32UInt32Dictionary enumerateForTextFormat:] */

void FUN_00746070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007460c0;
  puStack_20 = &UNK_00a20130;
  uStack_18 = param_3;
  func_0x00782bc0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007460c0; end: 00746137;  */

void FUN_007460c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00746134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00746138; end: 00746143;  */

void FUN_00746138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007799dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_00999f18)(*(undefined8 *)(param_1 + 0x20),7);
  return;
}



/* Entry: 00746144; end: 0074619f; -[GPBUInt32UInt32Dictionary getUInt32:forKey:] */

bool FUN_00746144(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x007930e0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 007461a0; end: 007461e3; -[GPBUInt32UInt32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007461a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar6 = *(long *)(lVar2 + 8);
      lVar2 = lVar6;
      func_0x00780ea0();
      lVar8 = 0;
      if (lVar2 != 0) {
        do {
          lVar8 = 0;
          do {
            lVar7 = *(long *)(lVar8 * 8);
            lVar4 = lVar7;
            func_0x00783280();
            if ((int)lVar4 == 2) {
              lVar4 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
              }
              if (lVar4 == param_1) {
                lVar2 = lVar7;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
                  piVar5 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar5 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(param_1 + *piVar5) = 0;
                FUN_0076248c();
                lVar8 = lVar1;
                goto LAB_00762778;
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar6;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar8 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
        return;
      }
      ___stack_chk_fail();
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
        *(undefined8 *)(lVar8 + 0x20) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x28));
        *(undefined8 *)(lVar8 + 0x28) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x30));
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      return;
    }
  }
  return;
}



/* Entry: 007461e4; end: 00746263; -[GPBUInt32UInt32Dictionary setUInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_007461e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar2 + 8);
  lVar2 = lVar7;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 00746264; end: 00746293; -[GPBUInt32UInt32Dictionary removeUInt32ForKey:] */

void FUN_00746264(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00746294; end: 0074629b; -[GPBUInt32UInt32Dictionary removeAll] */

void FUN_00746294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0074629c; end: 007462ab; -[GPBUInt32Int32Dictionary init] */

void FUN_0074629c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 007462ac; end: 0074636f; -[GPBUInt32Int32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_007462ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4708;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00746370; end: 007463b7; -[GPBUInt32Int32Dictionary initWithDictionary:] */

long FUN_00746370(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785940(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 007463b8; end: 007463c7; -[GPBUInt32Int32Dictionary initWithCapacity:] */

void FUN_007463b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt32s_forKeys_count__00abc358,0,0,0);
  return;
}



/* Entry: 007463c8; end: 0074640f; -[GPBUInt32Int32Dictionary dealloc] */

void FUN_007463c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4708;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00746410; end: 0074643b; -[GPBUInt32Int32Dictionary copyWithZone:] */

void FUN_00746410(void)

{
  func_0x0077ec40(PTR_PTR_00ac3780);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0074643c; end: 0074649f; -[GPBUInt32Int32Dictionary isEqual:] */

undefined8 FUN_0074643c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3780;
    _objc_opt_class(PTR_PTR_00ac3780);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 007464a0; end: 007464a7; -[GPBUInt32Int32Dictionary hash] */

void FUN_007464a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007464a8; end: 007464f3; -[GPBUInt32Int32Dictionary description] */

void FUN_007464a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007464f4; end: 007464fb; -[GPBUInt32Int32Dictionary count] */

void FUN_007464f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007464fc; end: 0074659b; -[GPBUInt32Int32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_007464fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x007930e0(lVar2);
    func_0x007871a0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0074659c; end: 0074670b; -[GPBUInt32Int32Dictionary computeSerializedSizeAsField:] */

void FUN_0074659c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40();
    lVar1 = lVar3;
    func_0x00788080();
    lVar2 = lVar1;
    func_0x00789980();
    while (lVar2 != 0) {
      lVar2 = lVar3;
      func_0x00789f00(lVar3);
      func_0x007930e0();
      func_0x007871a0(lVar2);
      FUN_0074670c();
      lVar2 = lVar1;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 0074670c; end: 0074674f;  */

long FUN_0074670c(ulong param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 2) {
    return 5;
  }
  uVar5 = (uint)param_1;
  if (param_3 != 9) {
    if (param_3 == 7) {
      uVar4 = param_2 << 3;
      lVar1 = 4;
      if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
        lVar1 = 5;
      }
      lVar2 = 3;
      if (0x1fffff < uVar4) {
        lVar2 = lVar1;
      }
      lVar1 = 2;
      if (0x3fff < uVar4) {
        lVar1 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar4) {
        lVar2 = lVar1;
      }
      lVar1 = 4;
      if ((param_1 >> 0x1c & 0xf) != 0) {
        lVar1 = 5;
      }
      lVar3 = 3;
      if (0x1fffff < uVar5) {
        lVar3 = lVar1;
      }
      lVar1 = 2;
      if (0x3fff < uVar5) {
        lVar1 = lVar3;
      }
      lVar3 = 1;
      if (0x7f < uVar5) {
        lVar3 = lVar1;
      }
      lVar1 = 10;
      if ((param_1 & 0x80000000) == 0) {
        lVar1 = lVar3;
      }
      return lVar1 + lVar2;
    }
    return 0;
  }
  uVar4 = param_2 << 3;
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < uVar4) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar4) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar4) {
    lVar2 = lVar1;
  }
  uVar5 = uVar5 << 1 ^ (int)uVar5 >> 0x1f;
  lVar1 = 4;
  if (uVar5 >> 0x1c != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < uVar5) {
    lVar3 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar5) {
    lVar1 = lVar3;
  }
  lVar3 = 1;
  if (0x7f < uVar5) {
    lVar3 = lVar1;
  }
  return lVar3 + lVar2;
}



/* Entry: 00746750; end: 007468eb; -[GPBUInt32Int32Dictionary writeToCodedOutputStream:asField:] */

void FUN_00746750(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00794020(param_3);
    func_0x007930e0();
    func_0x007871a0(lVar3);
    if ((int)param_4 == 1) {
      FUN_0074670c(lVar3,2,uVar1);
      func_0x00794020(param_3);
      func_0x00793e60(param_3);
    }
    else if ((int)param_4 == 0xb) {
      FUN_0074670c(lVar3,2,uVar1);
      func_0x00794020(param_3);
      func_0x00794440(param_3);
    }
    else {
      FUN_0074670c(lVar3,2,uVar1);
      func_0x00794020(param_3);
    }
    FUN_007468ec(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 007468ec; end: 0074691f;  */

void FUN_007468ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x007941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_writeSFixed32_value__00abfd78,param_3,param_2);
    return;
  }
  if (param_4 != 9) {
    if (param_4 == 7) {
                    /* WARNING: Could not recover jumptable at 0x00793ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_1,PTR_s_writeInt32_value__00abfd08,param_3,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00794270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeSInt32_value__00abfda8,param_3,param_2);
  return;
}



/* Entry: 00746920; end: 00746973; -[GPBUInt32Int32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00746920(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00746974; end: 007469c3; -[GPBUInt32Int32Dictionary enumerateForTextFormat:] */

void FUN_00746974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_007469c4;
  puStack_20 = &UNK_00a20160;
  uStack_18 = param_3;
  func_0x00782b20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 007469c4; end: 00746a33;  */

void FUN_007469c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00746a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00746a34; end: 00746a8f; -[GPBUInt32Int32Dictionary getInt32:forKey:] */

bool FUN_00746a34(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x007871a0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00746a90; end: 00746ad3; -[GPBUInt32Int32Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00746a90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar6 = *(long *)(lVar2 + 8);
      lVar2 = lVar6;
      func_0x00780ea0();
      lVar8 = 0;
      if (lVar2 != 0) {
        do {
          lVar8 = 0;
          do {
            lVar7 = *(long *)(lVar8 * 8);
            lVar4 = lVar7;
            func_0x00783280();
            if ((int)lVar4 == 2) {
              lVar4 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
              }
              if (lVar4 == param_1) {
                lVar2 = lVar7;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
                  piVar5 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar5 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(param_1 + *piVar5) = 0;
                FUN_0076248c();
                lVar8 = lVar1;
                goto LAB_00762778;
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar6;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar8 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
        return;
      }
      ___stack_chk_fail();
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
        *(undefined8 *)(lVar8 + 0x20) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x28));
        *(undefined8 *)(lVar8 + 0x28) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x30));
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      return;
    }
  }
  return;
}



/* Entry: 00746ad4; end: 00746b53; -[GPBUInt32Int32Dictionary setInt32:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00746ad4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar2 + 8);
  lVar2 = lVar7;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 00746b54; end: 00746b83; -[GPBUInt32Int32Dictionary removeInt32ForKey:] */

void FUN_00746b54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00746b84; end: 00746b8b; -[GPBUInt32Int32Dictionary removeAll] */

void FUN_00746b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00746b8c; end: 00746b9b; -[GPBUInt32UInt64Dictionary init] */

void FUN_00746b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 00746b9c; end: 00746c5f; -[GPBUInt32UInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_00746b9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4710;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00746c60; end: 00746ca7; -[GPBUInt32UInt64Dictionary initWithDictionary:] */

long FUN_00746c60(long param_1,undefined8 param_2,long param_3)

{
  func_0x00786b80(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00746ca8; end: 00746cb7; -[GPBUInt32UInt64Dictionary initWithCapacity:] */

void FUN_00746ca8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00786b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithUInt64s_forKeys_count__00abc7e8,0,0,0)
  ;
  return;
}



/* Entry: 00746cb8; end: 00746cff; -[GPBUInt32UInt64Dictionary dealloc] */

void FUN_00746cb8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4710;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00746d00; end: 00746d2b; -[GPBUInt32UInt64Dictionary copyWithZone:] */

void FUN_00746d00(void)

{
  func_0x0077ec40(PTR_PTR_00ac3788);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00746d2c; end: 00746d8f; -[GPBUInt32UInt64Dictionary isEqual:] */

undefined8 FUN_00746d2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3788;
    _objc_opt_class(PTR_PTR_00ac3788);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 00746d90; end: 00746d97; -[GPBUInt32UInt64Dictionary hash] */

void FUN_00746d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00746d98; end: 00746de3; -[GPBUInt32UInt64Dictionary description] */

void FUN_00746d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 00746de4; end: 00746deb; -[GPBUInt32UInt64Dictionary count] */

void FUN_00746de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00746dec; end: 00746e8b; -[GPBUInt32UInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_00746dec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x007930e0(lVar2);
    func_0x00793120(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 00746e8c; end: 00747017; -[GPBUInt32UInt64Dictionary computeSerializedSizeAsField:] */

void FUN_00746e8c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00780e80();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00788e40();
    lVar3 = lVar5;
    func_0x00788080();
    lVar2 = lVar3;
    func_0x00789980();
    while (lVar2 != 0) {
      lVar4 = lVar5;
      func_0x00789f00(lVar5,param_2,lVar2);
      func_0x007930e0();
      func_0x00793120(lVar4);
      if ((cVar1 != '\x04') && (cVar1 == '\f')) {
        func_0x00742934();
      }
      lVar2 = lVar3;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 00747018; end: 007471df; -[GPBUInt32UInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_00747018(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  lVar3 = param_4;
  func_0x00788e40();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar4 = lVar10;
  func_0x00788080();
  lVar5 = lVar4;
  func_0x00789980();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar10;
      func_0x00789f00(lVar10,param_2,lVar5);
      func_0x00794020(param_3,param_2,iVar1 << 3 | 2);
      func_0x007930e0();
      func_0x00793120(lVar6);
      iVar9 = (int)lVar3;
      if (iVar9 == 1) {
        iVar12 = 5;
      }
      else if (iVar9 == 0xb) {
        uVar11 = (uint)lVar5;
        if (uVar11 < 0x80) {
          iVar12 = 2;
        }
        else if (uVar11 < 0x4000) {
          iVar12 = 3;
        }
        else if (uVar11 < 0x200000) {
          iVar12 = 4;
        }
        else {
          iVar12 = 5;
          if (uVar11 >> 0x1c != 0) {
            iVar12 = 6;
          }
        }
      }
      else {
        iVar12 = 0;
      }
      if (cVar2 == '\x04') {
        iVar8 = 9;
      }
      else if (cVar2 == '\f') {
        lVar7 = lVar6;
        func_0x00742934(lVar6);
        iVar8 = (int)lVar7 + 1;
      }
      else {
        iVar8 = 0;
      }
      func_0x00794020(param_3,param_2,iVar8 + iVar12);
      if (iVar9 == 1) {
        func_0x00793e60(param_3,param_2,1,lVar5);
      }
      else if (iVar9 == 0xb) {
        func_0x00794440(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x04') {
        func_0x00793ec0(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\f') {
        func_0x007944a0(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00789980();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 007471e0; end: 00747233; -[GPBUInt32UInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_007471e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00747234; end: 00747283; -[GPBUInt32UInt64Dictionary enumerateForTextFormat:] */

void FUN_00747234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00747284;
  puStack_20 = &UNK_00a20190;
  uStack_18 = param_3;
  func_0x00782be0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00747284; end: 007472f3;  */

void FUN_00747284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x007472f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 007472f4; end: 0074734f; -[GPBUInt32UInt64Dictionary getUInt64:forKey:] */

bool FUN_007472f4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00793120();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00747350; end: 00747393; -[GPBUInt32UInt64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00747350(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar6 = *(long *)(lVar2 + 8);
      lVar2 = lVar6;
      func_0x00780ea0();
      lVar8 = 0;
      if (lVar2 != 0) {
        do {
          lVar8 = 0;
          do {
            lVar7 = *(long *)(lVar8 * 8);
            lVar4 = lVar7;
            func_0x00783280();
            if ((int)lVar4 == 2) {
              lVar4 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
              }
              if (lVar4 == param_1) {
                lVar2 = lVar7;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
                  piVar5 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar5 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(param_1 + *piVar5) = 0;
                FUN_0076248c();
                lVar8 = lVar1;
                goto LAB_00762778;
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar6;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar8 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
        return;
      }
      ___stack_chk_fail();
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
        *(undefined8 *)(lVar8 + 0x20) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x28));
        *(undefined8 *)(lVar8 + 0x28) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x30));
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      return;
    }
  }
  return;
}



/* Entry: 00747394; end: 00747413; -[GPBUInt32UInt64Dictionary setUInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00747394(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar2 + 8);
  lVar2 = lVar7;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 00747414; end: 00747443; -[GPBUInt32UInt64Dictionary removeUInt64ForKey:] */

void FUN_00747414(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00747444; end: 0074744b; -[GPBUInt32UInt64Dictionary removeAll] */

void FUN_00747444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 0074744c; end: 0074745b; -[GPBUInt32Int64Dictionary init] */

void FUN_0074744c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 0074745c; end: 0074751f; -[GPBUInt32Int64Dictionary initWithInt64s:forKeys:count:] */

undefined1 *
FUN_0074745c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4718;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00747520; end: 00747567; -[GPBUInt32Int64Dictionary initWithDictionary:] */

long FUN_00747520(long param_1,undefined8 param_2,long param_3)

{
  func_0x00785960(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00747568; end: 00747577; -[GPBUInt32Int64Dictionary initWithCapacity:] */

void FUN_00747568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithInt64s_forKeys_count__00abc360,0,0,0);
  return;
}



/* Entry: 00747578; end: 007475bf; -[GPBUInt32Int64Dictionary dealloc] */

void FUN_00747578(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4718;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 007475c0; end: 007475eb; -[GPBUInt32Int64Dictionary copyWithZone:] */

void FUN_007475c0(void)

{
  func_0x0077ec40(PTR_PTR_00ac3790);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 007475ec; end: 0074764f; -[GPBUInt32Int64Dictionary isEqual:] */

undefined8 FUN_007475ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3790;
    _objc_opt_class(PTR_PTR_00ac3790);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 00747650; end: 00747657; -[GPBUInt32Int64Dictionary hash] */

void FUN_00747650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00747658; end: 007476a3; -[GPBUInt32Int64Dictionary description] */

void FUN_00747658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}



/* Entry: 007476a4; end: 007476ab; -[GPBUInt32Int64Dictionary count] */

void FUN_007476a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 007476ac; end: 0074774b; -[GPBUInt32Int64Dictionary enumerateKeysAndInt64sUsingBlock:] */

void FUN_007476ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00788080();
  do {
    lVar2 = lVar1;
    func_0x00789980();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x007930e0(lVar2);
    func_0x00788b40(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 0074774c; end: 007478bb; -[GPBUInt32Int64Dictionary computeSerializedSizeAsField:] */

void FUN_0074774c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00788e40();
    lVar1 = lVar3;
    func_0x00788080();
    lVar2 = lVar1;
    func_0x00789980();
    while (lVar2 != 0) {
      lVar2 = lVar3;
      func_0x00789f00(lVar3);
      func_0x007930e0();
      func_0x00788b40(lVar2);
      FUN_007478bc();
      lVar2 = lVar1;
      func_0x00789980();
    }
  }
  return;
}



/* Entry: 007478bc; end: 0074790f;  */

long FUN_007478bc(long param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 5) {
    return 9;
  }
  if (param_3 != 10) {
    if (param_3 == 8) {
      func_0x00742934(param_1);
      return param_1 + 1;
    }
    return 0;
  }
  uVar3 = param_2 << 3;
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
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
  uVar4 = param_1 << 1 ^ param_1 >> 0x3f;
  func_0x00742934(uVar4);
  return uVar4 + lVar2;
}



/* Entry: 00747910; end: 00747aab; -[GPBUInt32Int64Dictionary writeToCodedOutputStream:asField:] */

void FUN_00747910(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00788e40();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00788080();
  lVar3 = lVar2;
  func_0x00789980();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00789f00(lVar4);
    func_0x00794020(param_3);
    func_0x007930e0();
    func_0x00788b40(lVar3);
    if ((int)param_4 == 1) {
      FUN_007478bc(lVar3,2,uVar1);
      func_0x00794020(param_3);
      func_0x00793e60(param_3);
    }
    else if ((int)param_4 == 0xb) {
      FUN_007478bc(lVar3,2,uVar1);
      func_0x00794020(param_3);
      func_0x00794440(param_3);
    }
    else {
      FUN_007478bc(lVar3,2,uVar1);
      func_0x00794020(param_3);
    }
    FUN_00747aac(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00789980();
  }
  return;
}



/* Entry: 00747aac; end: 00747adf;  */

void FUN_00747aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00794210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_1,PTR_s_writeSFixed64_value__00abfd90,param_3,param_2);
    return;
  }
  if (param_4 != 10) {
    if (param_4 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00794050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_1,PTR_s_writeInt64_value__00abfd20,param_3,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007942d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeSInt64_value__00abfdc0,param_3,param_2);
  return;
}



/* Entry: 00747ae0; end: 00747b33; -[GPBUInt32Int64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_00747ae0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar3,PTR_s_setObject_forKey__00abea38,puVar1,puVar2);
  return;
}



/* Entry: 00747b34; end: 00747b83; -[GPBUInt32Int64Dictionary enumerateForTextFormat:] */

void FUN_00747b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00747b84;
  puStack_20 = &UNK_00a201c0;
  uStack_18 = param_3;
  func_0x00782b40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 00747b84; end: 00747bf3;  */

void FUN_00747b84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a4ab40);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
                    /* WARNING: Could not recover jumptable at 0x00747bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 00747bf4; end: 00747c4f; -[GPBUInt32Int64Dictionary getInt64:forKey:] */

bool FUN_00747bf4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  func_0x00789ea0(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00788b40();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 00747c50; end: 00747c93; -[GPBUInt32Int64Dictionary addEntriesFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00747c50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00781ea0();
      lVar6 = *(long *)(lVar2 + 8);
      lVar2 = lVar6;
      func_0x00780ea0();
      lVar8 = 0;
      if (lVar2 != 0) {
        do {
          lVar8 = 0;
          do {
            lVar7 = *(long *)(lVar8 * 8);
            lVar4 = lVar7;
            func_0x00783280();
            if ((int)lVar4 == 2) {
              lVar4 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
              }
              if (lVar4 == param_1) {
                lVar2 = lVar7;
                func_0x00788e40();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd < 4)) {
                  piVar5 = (int *)&DAT_00ac6294;
                }
                else {
                  piVar5 = (int *)&DAT_00ac6298;
                }
                *(undefined8 *)(param_1 + *piVar5) = 0;
                FUN_0076248c();
                lVar8 = lVar1;
                goto LAB_00762778;
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar6;
          func_0x00780ea0();
        } while (lVar2 != 0);
        lVar8 = 0;
      }
LAB_00762778:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
        return;
      }
      ___stack_chk_fail();
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x20) != 0)) {
        *(undefined8 *)(lVar8 + 0x20) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x28));
        *(undefined8 *)(lVar8 + 0x28) = 0;
        _objc_release(*(undefined8 *)(lVar8 + 0x30));
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      return;
    }
  }
  return;
}



/* Entry: 00747c94; end: 00747d13; -[GPBUInt32Int64Dictionary setInt64:forKey:] */

/* WARNING: Removing unreachable block (ram,0x007626c8) */

void FUN_00747c94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x0078f4a0(uVar6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar7 = *(long *)(lVar2 + 8);
  lVar2 = lVar7;
  func_0x00780ea0();
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00783280();
        if ((int)lVar4 == 2) {
          lVar4 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar4 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18));
          }
          if (lVar4 == param_1) {
            lVar2 = lVar8;
            func_0x00788e40();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar8 + 8) + 0x1e) - 0xd < 4)) {
              piVar5 = (int *)&DAT_00ac6294;
            }
            else {
              piVar5 = (int *)&DAT_00ac6298;
            }
            *(undefined8 *)(param_1 + *piVar5) = 0;
            FUN_0076248c();
            lVar9 = lVar1;
            goto LAB_00762778;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
      func_0x00780ea0();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_00762778:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
    *(undefined8 *)(lVar9 + 0x20) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x28));
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _objc_release(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  return;
}



/* Entry: 00747d14; end: 00747d43; -[GPBUInt32Int64Dictionary removeInt64ForKey:] */

void FUN_00747d14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0078b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_removeObjectForKey__00abda38,puVar1);
  return;
}



/* Entry: 00747d44; end: 00747d4b; -[GPBUInt32Int64Dictionary removeAll] */

void FUN_00747d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_00abd9b0);
  return;
}



/* Entry: 00747d4c; end: 00747d5b; -[GPBUInt32BoolDictionary init] */

void FUN_00747d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 00747d5c; end: 00747e1f; -[GPBUInt32BoolDictionary initWithBools:forKeys:count:] */

undefined1 *
FUN_00747d5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_00ac4720;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        func_0x0078f4a0(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00747e20; end: 00747e67; -[GPBUInt32BoolDictionary initWithDictionary:] */

long FUN_00747e20(long param_1,undefined8 param_2,long param_3)

{
  func_0x00784dc0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x0077e4e0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 00747e68; end: 00747e77; -[GPBUInt32BoolDictionary initWithCapacity:] */

void FUN_00747e68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithBools_forKeys_count__00abc078,0,0,0);
  return;
}



/* Entry: 00747e78; end: 00747ebf; -[GPBUInt32BoolDictionary dealloc] */

void FUN_00747e78(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac4720;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00747ec0; end: 00747eeb; -[GPBUInt32BoolDictionary copyWithZone:] */

void FUN_00747ec0(void)

{
  func_0x0077ec40(PTR_PTR_00ac3798);
                    /* WARNING: Could not recover jumptable at 0x00785310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00747eec; end: 00747f4f; -[GPBUInt32BoolDictionary isEqual:] */

undefined8 FUN_00747eec(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_00ac3798;
    _objc_opt_class(PTR_PTR_00ac3798);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar3,PTR_s_isEqual__00abcb00,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 00747f50; end: 00747f57; -[GPBUInt32BoolDictionary hash] */

void FUN_00747f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_00abb098);
  return;
}



/* Entry: 00747f58; end: 00747fa3; -[GPBUInt32BoolDictionary description] */

void FUN_00747f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a4ae80);
  return;
}


