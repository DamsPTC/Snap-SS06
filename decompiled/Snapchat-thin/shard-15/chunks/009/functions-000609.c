/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd7b934; end: 10bd7b9d3; -[GPBBoolFloatDictionary isEqual:] */

undefined8 FUN_10bd7b934(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e3200;
    _objc_opt_class(PTR_PTR_1126e3200);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))) ||
        (*(char *)(param_1 + 0x19) != *(char *)(param_3 + 0x19))) ||
       (((*(char *)(param_1 + 0x18) != '\0' &&
         (*(float *)(param_1 + 0x10) != *(float *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x19) != '\0' &&
         (*(float *)(param_1 + 0x14) != *(float *)(param_3 + 0x14))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 10bd7b9d4; end: 10bd7b9e3; -[GPBBoolFloatDictionary hash] */

long FUN_10bd7b9d4(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 10bd7b9e4; end: 10bd7ba8f; -[GPBBoolFloatDictionary description] */

undefined * FUN_10bd7b9e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f8b8);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f8d8);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7ba90; end: 10bd7ba9f; -[GPBBoolFloatDictionary count] */

long FUN_10bd7ba90(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x19) + (ulong)*(byte *)(param_1 + 0x18);
}



/* Entry: 10bd7baa0; end: 10bd7bac7; -[GPBBoolFloatDictionary getFloat:forKey:] */

void FUN_10bd7baa0(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x18) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x10);
  }
  return;
}



/* Entry: 10bd7bac8; end: 10bd7bae7; -[GPBBoolFloatDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7bac8(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x18) = 1;
  return;
}



/* Entry: 10bd7bae8; end: 10bd7bbbb; -[GPBBoolFloatDictionary enumerateForTextFormat:] */

void FUN_10bd7bae8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_11102f678);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd7bba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd7bbbc; end: 10bd7bc37; -[GPBBoolFloatDictionary enumerateKeysAndFloatsUsingBlock:] */

void FUN_10bd7bbbc(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x18) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(*(undefined4 *)(param_1 + 0x10),param_3,0,&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x19) == '\x01')) {
    (**(code **)(param_3 + 0x10))(*(undefined4 *)(param_1 + 0x14),param_3,1,&bStack_21);
  }
  return;
}



/* Entry: 10bd7bc38; end: 10bd7bcaf; -[GPBBoolFloatDictionary computeSerializedSizeAsField:] */

long FUN_10bd7bc38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  
  lVar7 = 0;
  lVar5 = 0;
  lVar6 = 0;
  bVar4 = true;
  do {
    bVar9 = bVar4;
    uVar8 = (ulong)*(byte *)(param_1 + 0x18 + lVar7);
    lVar6 = lVar6 + uVar8 * 8;
    lVar5 = lVar5 + uVar8;
    lVar7 = 1;
    bVar4 = false;
  } while (bVar9);
  uVar2 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar3 = uVar2 << 3;
  lVar7 = 4;
  if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
    lVar7 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < uVar3) {
    lVar1 = lVar7;
  }
  lVar7 = 2;
  if (0x3fff < uVar3) {
    lVar7 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < uVar3) {
    lVar1 = lVar7;
  }
  return lVar6 + lVar1 * lVar5;
}



/* Entry: 10bd7bcb0; end: 10bd7bd5f; -[GPBBoolFloatDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7bcb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x18 + lVar5) == '\x01') {
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c2bdf60(param_3,param_2,7);
      func_0x00010c2bd900(param_3,param_2,1,uVar4);
      func_0x00010c2bddc0(*(undefined4 *)(param_1 + 0x10 + lVar5 * 4),param_3,param_2,2);
    }
    uVar4 = 1;
    lVar5 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7bd60; end: 10bd7bdbb; -[GPBBoolFloatDictionary addEntriesFromDictionary:] */

long FUN_10bd7bd60(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x18 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x18 + lVar8) = 1;
        *(undefined4 *)(param_1 + 0x10 + lVar8 * 4) = *(undefined4 *)(param_3 + 0x10 + lVar8 * 4);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7bdbc; end: 10bd7bde3; -[GPBBoolFloatDictionary setFloat:forKey:] */

long FUN_10bd7bdbc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  *(uint *)(param_1 + (param_3 & 0xffffffff) * 4 + 0x10) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *(undefined1 *)(param_1 + (param_3 & 0xffffffff) + 0x18) = 1;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar10 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar6 = lVar9;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar9;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar10 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar10 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar10;
  }
  return lVar10;
}



/* Entry: 10bd7bde4; end: 10bd7bdef; -[GPBBoolFloatDictionary removeFloatForKey:] */

void FUN_10bd7bde4(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x18) = 0;
  return;
}



/* Entry: 10bd7bdf0; end: 10bd7bdf7; -[GPBBoolFloatDictionary removeAll] */

void FUN_10bd7bdf0(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10bd7bdf8; end: 10bd7be07; -[GPBBoolDoubleDictionary init] */

void FUN_10bd7bdf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd7be08; end: 10bd7be83; -[GPBBoolDoubleDictionary initWithDoubles:forKeys:count:] */

void FUN_10bd7be08(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e9a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      bVar1 = *param_4;
      *(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = *param_3;
      *(undefined1 *)((long)puVar3 + (ulong)bVar1 + 0x20) = 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return;
}



/* Entry: 10bd7be84; end: 10bd7befb; -[GPBBoolDoubleDictionary initWithDictionary:] */

void FUN_10bd7be84(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  func_0x00010c00e3a0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined8 *)(param_1 + 0x10 + lVar2 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar2 * 8);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 10bd7befc; end: 10bd7bf0b; -[GPBBoolDoubleDictionary initWithCapacity:] */

void FUN_10bd7befc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDoubles_forKeys_count__1125e12b8,0,0,0);
  return;
}



/* Entry: 10bd7bf0c; end: 10bd7bf37; -[GPBBoolDoubleDictionary copyWithZone:] */

void FUN_10bd7bf0c(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3208);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7bf38; end: 10bd7bfd7; -[GPBBoolDoubleDictionary isEqual:] */

undefined8 FUN_10bd7bf38(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e3208;
    _objc_opt_class(PTR_PTR_1126e3208);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(double *)(param_1 + 0x10) != *(double *)(param_3 + 0x10))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(double *)(param_1 + 0x18) != *(double *)(param_3 + 0x18))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 10bd7bfd8; end: 10bd7bfe7; -[GPBBoolDoubleDictionary hash] */

long FUN_10bd7bfd8(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7bfe8; end: 10bd7c08b; -[GPBBoolDoubleDictionary description] */

undefined * FUN_10bd7bfe8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f8f8);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f918);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7c08c; end: 10bd7c09b; -[GPBBoolDoubleDictionary count] */

long FUN_10bd7c08c(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7c09c; end: 10bd7c0c3; -[GPBBoolDoubleDictionary getDouble:forKey:] */

void FUN_10bd7c09c(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  if ((param_3 != (undefined8 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined8 *)(param_1 + (ulong)param_4 * 8 + 0x10);
  }
  return;
}



/* Entry: 10bd7c0c4; end: 10bd7c0e3; -[GPBBoolDoubleDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7c0c4(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x10) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 10bd7c0e4; end: 10bd7c1af; -[GPBBoolDoubleDictionary enumerateForTextFormat:] */

void FUN_10bd7c0e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_11102f698);
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd7c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd7c1b0; end: 10bd7c22b; -[GPBBoolDoubleDictionary enumerateKeysAndDoublesUsingBlock:] */

void FUN_10bd7c1b0(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + 0x10),param_3,0,&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_3,1,&bStack_21);
  }
  return;
}



/* Entry: 10bd7c22c; end: 10bd7c2ab; -[GPBBoolDoubleDictionary computeSerializedSizeAsField:] */

long FUN_10bd7c22c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = 0;
  lVar6 = 0;
  lVar7 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    bVar3 = *(byte *)(param_1 + 0x20 + lVar8);
    lVar1 = lVar7 + 0xc;
    if (bVar3 == 0) {
      lVar1 = lVar7;
    }
    lVar6 = lVar6 + (ulong)bVar3;
    lVar8 = 1;
    lVar7 = lVar1;
    bVar5 = false;
  } while (bVar9);
  uVar2 = *(uint *)(*(long *)(param_3 + 8) + 0x10);
  uVar4 = uVar2 << 3;
  lVar7 = 4;
  if ((uVar2 & 0x1fffffff) >> 0x19 != 0) {
    lVar7 = 5;
  }
  lVar8 = 3;
  if (0x1fffff < uVar4) {
    lVar8 = lVar7;
  }
  lVar7 = 2;
  if (0x3fff < uVar4) {
    lVar7 = lVar8;
  }
  lVar8 = 1;
  if (0x7f < uVar4) {
    lVar8 = lVar7;
  }
  return lVar1 + lVar8 * lVar6;
}



/* Entry: 10bd7c2ac; end: 10bd7c35b; -[GPBBoolDoubleDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7c2ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0;
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x20 + lVar5) == '\x01') {
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c2bdf60(param_3,param_2,0xb);
      func_0x00010c2bd900(param_3,param_2,1,uVar4);
      func_0x00010c2bdbc0(*(undefined8 *)(param_1 + 0x10 + lVar5 * 8),param_3,param_2,2);
    }
    uVar4 = 1;
    lVar5 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7c35c; end: 10bd7c3b7; -[GPBBoolDoubleDictionary addEntriesFromDictionary:] */

long FUN_10bd7c35c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x20 + lVar8) = 1;
        *(undefined8 *)(param_1 + 0x10 + lVar8 * 8) = *(undefined8 *)(param_3 + 0x10 + lVar8 * 8);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7c3b8; end: 10bd7c3df; -[GPBBoolDoubleDictionary setDouble:forKey:] */

long FUN_10bd7c3b8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  *(ulong *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x10) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined1 *)(param_1 + (param_3 & 0xffffffff) + 0x20) = 1;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar10 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar6 = lVar9;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar9;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar10 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar10 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar10;
  }
  return lVar10;
}



/* Entry: 10bd7c3e0; end: 10bd7c3eb; -[GPBBoolDoubleDictionary removeDoubleForKey:] */

void FUN_10bd7c3e0(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 10bd7c3ec; end: 10bd7c3f3; -[GPBBoolDoubleDictionary removeAll] */

void FUN_10bd7c3ec(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10bd7c3f4; end: 10bd7c403; -[GPBBoolObjectDictionary init] */

void FUN_10bd7c3f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObjects_forKeys_count__1125e9c78,0,0,0);
  return;
}



/* Entry: 10bd7c404; end: 10bd7c4cf; -[GPBBoolObjectDictionary initWithObjects:forKeys:count:] */

undefined1 *
FUN_10bd7c404(undefined8 param_1,undefined8 param_2,long *param_3,byte *param_4,undefined1 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  puStack_68 = PTR_PTR_11270e9a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  puVar2 = (undefined1 *)puVar3;
  if (param_5 != (undefined1 *)0x0) {
    while (puVar2 != (undefined1 *)0x0) {
      if (*param_3 == 0) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
      }
      bVar1 = *param_4;
      _objc_release(*(undefined8 *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10));
      lVar4 = *param_3;
      _objc_retain();
      *(long *)((long)puVar3 + (ulong)bVar1 * 8 + 0x10) = lVar4;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar2 = param_5;
    }
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10bd7c4d0; end: 10bd7c523; -[GPBBoolObjectDictionary initWithDictionary:] */

long FUN_10bd7c4d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c030a00(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain();
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return param_1;
}



/* Entry: 10bd7c524; end: 10bd7c533; -[GPBBoolObjectDictionary initWithCapacity:] */

void FUN_10bd7c524(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObjects_forKeys_count__1125e9c78,0,0,0);
  return;
}



/* Entry: 10bd7c534; end: 10bd7c583; -[GPBBoolObjectDictionary dealloc] */

void FUN_10bd7c534(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_11270e9a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd7c584; end: 10bd7c5af; -[GPBBoolObjectDictionary copyWithZone:] */

void FUN_10bd7c584(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3210);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7c5b0; end: 10bd7c66b; -[GPBBoolObjectDictionary isEqual:] */

long FUN_10bd7c5b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == param_3) {
    return 1;
  }
  puVar1 = PTR_PTR_1126e3210;
  _objc_opt_class(PTR_PTR_1126e3210);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (lVar4 = *(long *)(param_1 + 0x10), (lVar4 != 0) == (*(long *)(param_3 + 0x10) == 0))) ||
     (lVar3 = *(long *)(param_1 + 0x18), (lVar3 != 0) == (*(long *)(param_3 + 0x18) == 0))) {
    return 0;
  }
  if (lVar4 != 0) {
    func_0x00010c071ae0();
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if ((lVar3 != 0) && (func_0x00010c071ae0(), (int)lVar3 == 0)) {
    return lVar3;
  }
  return 1;
}



/* Entry: 10bd7c66c; end: 10bd7c683; -[GPBBoolObjectDictionary hash] */

char FUN_10bd7c66c(long param_1)

{
  char cVar1;
  
  cVar1 = *(long *)(param_1 + 0x18) != 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



/* Entry: 10bd7c684; end: 10bd7c717; -[GPBBoolObjectDictionary description] */

undefined * FUN_10bd7c684(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f938);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f958);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7c718; end: 10bd7c72f; -[GPBBoolObjectDictionary count] */

char FUN_10bd7c718(long param_1)

{
  char cVar1;
  
  cVar1 = *(long *)(param_1 + 0x18) != 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



/* Entry: 10bd7c730; end: 10bd7c73b; -[GPBBoolObjectDictionary objectForKey:] */

undefined8 FUN_10bd7c730(long param_1,undefined8 param_2,uint param_3)

{
  return *(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x10);
}



/* Entry: 10bd7c73c; end: 10bd7c773; -[GPBBoolObjectDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7c73c(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  undefined8 uVar1;
  
  param_1 = param_1 + (ulong)*param_4 * 8;
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *param_3;
  _objc_retain();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10bd7c774; end: 10bd7c7d3; -[GPBBoolObjectDictionary enumerateForTextFormat:] */

void FUN_10bd7c774(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd7c7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378);
    return;
  }
  return;
}



/* Entry: 10bd7c7d4; end: 10bd7c83f; -[GPBBoolObjectDictionary enumerateKeysAndObjectsUsingBlock:] */

void FUN_10bd7c7d4(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(long *)(param_1 + 0x10),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(long *)(param_1 + 0x18),&bStack_21);
  }
  return;
}



/* Entry: 10bd7c840; end: 10bd7c87f; -[GPBBoolObjectDictionary isInitialized] */

void FUN_10bd7c840(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (((lVar1 == 0) || (func_0x00010c0758e0(), (int)lVar1 != 0)) && (*(long *)(param_1 + 0x18) != 0)
     ) {
    func_0x00010c0758e0();
  }
  return;
}



/* Entry: 10bd7c880; end: 10bd7c8f7; -[GPBBoolObjectDictionary deepCopyWithZone:] */

undefined * FUN_10bd7c880(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126e3210;
  _objc_alloc_init();
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar3 = *(long *)(param_1 + 0x10 + lVar5 * 8);
    if (lVar3 != 0) {
      func_0x00010bf52240(lVar3,param_2,param_3);
      *(long *)(puVar2 + lVar5 * 8 + 0x10) = lVar3;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar4);
  return puVar2;
}



/* Entry: 10bd7c8f8; end: 10bd7c9f7; -[GPBBoolObjectDictionary computeSerializedSizeAsField:] */

long FUN_10bd7c8f8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = 0;
  lVar9 = 0;
  lVar10 = 0;
  lVar11 = *(long *)(param_3 + 8);
  uVar3 = *(undefined1 *)(lVar11 + 0x1e);
  bVar5 = true;
  do {
    bVar8 = bVar5;
    lVar7 = *(long *)(param_1 + 0x10 + lVar7 * 8);
    if (lVar7 != 0) {
      lVar9 = lVar9 + 1;
      FUN_10bd61e10(lVar7,uVar3);
      uVar1 = lVar7 + 2;
      lVar7 = 4;
      if ((uVar1 >> 0x1c & 0xf) != 0) {
        lVar7 = 5;
      }
      uVar6 = (uint)uVar1;
      lVar2 = 3;
      if (0x1fffff < uVar6) {
        lVar2 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar6) {
        lVar7 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar6) {
        lVar2 = lVar7;
      }
      lVar10 = uVar1 + lVar10 + lVar2;
    }
    lVar7 = 1;
    bVar5 = false;
  } while (bVar8);
  uVar6 = *(uint *)(lVar11 + 0x10);
  uVar4 = uVar6 << 3;
  if (uVar4 < 0x80) {
    lVar11 = 1;
  }
  else if (uVar4 < 0x4000) {
    lVar11 = 2;
  }
  else {
    lVar7 = 4;
    if ((uVar6 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar11 = 3;
    if (0x1fffff < uVar4) {
      lVar11 = lVar7;
    }
  }
  return lVar10 + lVar11 * lVar9;
}



/* Entry: 10bd7c9f8; end: 10bd7caaf; -[GPBBoolObjectDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7c9f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  param_1 = param_1 + 0x10;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(long *)(param_1 + lVar4 * 8) != 0) {
      func_0x00010c2bdf60(param_3);
      FUN_10bd61e10(*(undefined8 *)(param_1 + lVar4 * 8),uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bd900(param_3);
      FUN_10bd61fac(param_3,*(undefined8 *)(param_1 + lVar4 * 8),uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7cab0; end: 10bd7cb3b; -[GPBBoolObjectDictionary addEntriesFromDictionary:] */

long FUN_10bd7cab0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar11 = param_1;
  if (param_3 != 0) {
    lVar11 = 0;
    bVar1 = true;
    do {
      bVar6 = bVar1;
      if (*(long *)(param_3 + 0x10 + lVar11 * 8) != 0) {
        _objc_release(*(undefined8 *)(param_1 + 0x10 + lVar11 * 8));
        uVar2 = *(undefined8 *)(param_3 + 0x10 + lVar11 * 8);
        _objc_retain();
        *(undefined8 *)(param_1 + 0x10 + lVar11 * 8) = uVar2;
      }
      lVar11 = 1;
      bVar1 = false;
    } while (bVar6);
    lVar3 = *(long *)(param_1 + 8);
    lVar11 = 0;
    if (lVar3 != 0) {
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar11 = lVar3;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar11 + 8);
      puVar5 = (undefined8 *)0x10;
      lVar4 = lVar10;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      lVar13 = 0;
      if (lVar4 != 0) {
        do {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar11) {
              _objc_enumerationMutation(lVar10);
            }
            lVar12 = *(long *)(lVar13 * 8);
            lVar8 = lVar12;
            func_0x00010bfac840();
            if ((int)lVar8 == 2) {
              lVar8 = 0;
              if (*(long *)(lVar3 + 0x40) != 0) {
                lVar8 = *(long *)(*(long *)(lVar3 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar12 + 8) + 0x18));
              }
              if (lVar8 == param_1) {
                lVar11 = lVar12;
                func_0x00010c0b92a0();
                if (((int)lVar11 == 0xe) && (*(byte *)(*(long *)(lVar12 + 8) + 0x1e) - 0xd < 4)) {
                  piVar9 = (int *)&DAT_112796db0;
                }
                else {
                  piVar9 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar9) = 0;
                func_0x000107c3187c();
                lVar13 = lVar3;
                goto LAB_10bd7e9b0;
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar4 != lVar13);
          puVar5 = (undefined8 *)0x10;
          lVar4 = lVar10;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
        lVar13 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar13 != 0) && (func_0x00010c0cabe0(lVar13), puVar5 != (undefined8 *)0x0)) {
          *puVar5 = 0;
        }
        return lVar13;
      }
      return lVar13;
    }
  }
  return lVar11;
}



/* Entry: 10bd7cb3c; end: 10bd7cbbf; -[GPBBoolObjectDictionary setObject:forKey:] */

long FUN_10bd7cb3c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_11102f6d8);
  }
  lVar1 = param_1 + (param_4 & 0xffffffff) * 8;
  _objc_release(*(undefined8 *)(lVar1 + 0x10));
  _objc_retain();
  *(long *)(lVar1 + 0x10) = param_3;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar10 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar6 = lVar9;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar9;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar10 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar10 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar10;
  }
  return lVar10;
}



/* Entry: 10bd7cbc0; end: 10bd7cbe7; -[GPBBoolObjectDictionary removeObjectForKey:] */

void FUN_10bd7cbc0(long param_1,undefined8 param_2,uint param_3)

{
  param_1 = param_1 + (ulong)param_3 * 8;
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10bd7cbe8; end: 10bd7cc1b; -[GPBBoolObjectDictionary removeAll] */

void FUN_10bd7cbe8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10bd7cc1c; end: 10bd7cc2f; -[GPBBoolEnumDictionary init] */

void FUN_10bd7cc1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,0,0,0,0);
  return;
}



/* Entry: 10bd7cc30; end: 10bd7cc3f; -[GPBBoolEnumDictionary initWithValidationFunction:] */

void FUN_10bd7cc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd7cc40; end: 10bd7ccd3; -[GPBBoolEnumDictionary initWithValidationFunction:rawValues:forKeys:count:] */

void FUN_10bd7cc40(undefined8 param_1,undefined8 param_2,code *param_3,undefined4 *param_4,
                  byte *param_5,long param_6)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  puStack_38 = PTR_PTR_11270e9b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    pcVar1 = FUN_10bd65d4c;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(code **)((long)puVar3 + 0x10) = pcVar1;
    for (; param_6 != 0; param_6 = param_6 + -1) {
      bVar2 = *param_5;
      *(undefined4 *)((long)puVar3 + (ulong)bVar2 * 4 + 0x18) = *param_4;
      *(undefined1 *)((long)puVar3 + (ulong)bVar2 + 0x20) = 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
    }
  }
  return;
}



/* Entry: 10bd7ccd4; end: 10bd7cd5f; -[GPBBoolEnumDictionary initWithDictionary:] */

void FUN_10bd7ccd4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = param_3;
  func_0x00010c296c20(param_3);
  func_0x00010c060340(param_1,param_2,lVar2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar2 = 0;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar2) == '\x01') {
        *(undefined4 *)(param_1 + 0x18 + lVar2 * 4) = *(undefined4 *)(param_3 + 0x18 + lVar2 * 4);
        *(undefined1 *)(param_1 + 0x20 + lVar2) = 1;
      }
      lVar2 = 1;
      bVar1 = false;
    } while (bVar3);
  }
  return;
}



/* Entry: 10bd7cd60; end: 10bd7cd6f; -[GPBBoolEnumDictionary initWithValidationFunction:capacity:] */

void FUN_10bd7cd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValidationFunction_rawVa_1125f5ae0,param_3,0,0,0);
  return;
}



/* Entry: 10bd7cd70; end: 10bd7cd9b; -[GPBBoolEnumDictionary copyWithZone:] */

void FUN_10bd7cd70(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e3218);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7cd9c; end: 10bd7ce3b; -[GPBBoolEnumDictionary isEqual:] */

undefined8 FUN_10bd7cd9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_3) {
    puVar1 = PTR_PTR_1126e3218;
    _objc_opt_class(PTR_PTR_1126e3218);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
       (((*(char *)(param_1 + 0x20) != '\0' &&
         (*(int *)(param_1 + 0x18) != *(int *)(param_3 + 0x18))) ||
        ((*(char *)(param_1 + 0x21) != '\0' &&
         (*(int *)(param_1 + 0x1c) != *(int *)(param_3 + 0x1c))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 10bd7ce3c; end: 10bd7ce4b; -[GPBBoolEnumDictionary hash] */

long FUN_10bd7ce3c(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7ce4c; end: 10bd7ceef; -[GPBBoolEnumDictionary description] */

undefined * FUN_10bd7ce4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f798);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f7f8);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f818);
  }
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f398);
  return puVar1;
}



/* Entry: 10bd7cef0; end: 10bd7ceff; -[GPBBoolEnumDictionary count] */

long FUN_10bd7cef0(long param_1)

{
  return (ulong)*(byte *)(param_1 + 0x21) + (ulong)*(byte *)(param_1 + 0x20);
}



/* Entry: 10bd7cf00; end: 10bd7cf63; -[GPBBoolEnumDictionary getEnum:forKey:] */

char FUN_10bd7cf00(long param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + (ulong)param_4 + 0x20);
  if ((param_3 != (int *)0x0) && (cVar2 != '\0')) {
    iVar1 = *(int *)(param_1 + (ulong)param_4 * 4 + 0x18);
    iVar3 = iVar1;
    (**(code **)(param_1 + 0x10))();
    if (iVar3 == 0) {
      iVar1 = -0x4524111;
    }
    *param_3 = iVar1;
  }
  return cVar2;
}



/* Entry: 10bd7cf64; end: 10bd7cf8b; -[GPBBoolEnumDictionary getRawValue:forKey:] */

void FUN_10bd7cf64(long param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  if ((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + (ulong)param_4 + 0x20) != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + (ulong)param_4 * 4 + 0x18);
  }
  return;
}



/* Entry: 10bd7cf8c; end: 10bd7d007; -[GPBBoolEnumDictionary enumerateKeysAndRawValuesUsingBlock:] */

void FUN_10bd7cf8c(long param_1,undefined8 param_2,long param_3)

{
  byte bStack_21;
  
  bStack_21 = 0;
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_3 + 0x10))(param_3,0,*(undefined4 *)(param_1 + 0x18),&bStack_21),
      (bStack_21 & 1) == 0)) && (*(char *)(param_1 + 0x21) == '\x01')) {
    (**(code **)(param_3 + 0x10))(param_3,1,*(undefined4 *)(param_1 + 0x1c),&bStack_21);
  }
  return;
}



/* Entry: 10bd7d008; end: 10bd7d0bf; -[GPBBoolEnumDictionary enumerateKeysAndEnumsUsingBlock:] */

void FUN_10bd7d008(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  pcVar3 = *(code **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = iVar1;
    (*pcVar3)();
    if (iVar2 == 0) {
      iVar1 = -0x4524111;
    }
    (**(code **)(param_3 + 0x10))(param_3,0,iVar1,&bStack_31);
    if ((bStack_31 & 1) != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = iVar1;
    (*pcVar3)();
    if (iVar2 == 0) {
      iVar1 = -0x4524111;
    }
    (**(code **)(param_3 + 0x10))(param_3,1,iVar1,&bStack_31);
  }
  return;
}



/* Entry: 10bd7d0c0; end: 10bd7d17f; -[GPBBoolEnumDictionary serializedDataForUnknownValue:forKey:keyDataType:] */

undefined * FUN_10bd7d0c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  uVar1 = 7;
  if ((param_3 >> 0x1c & 0xf) != 0) {
    uVar1 = 8;
  }
  uVar5 = (uint)param_3;
  uVar2 = 6;
  if (0x1fffff < uVar5) {
    uVar2 = uVar1;
  }
  uVar1 = 5;
  if (0x3fff < uVar5) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (0x7f < uVar5) {
    uVar2 = uVar1;
  }
  uVar1 = 0xd;
  if ((param_3 & 0x80000000) == 0) {
    uVar1 = uVar2;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,uVar1);
  puVar4 = PTR_PTR_1126e2e18;
  _objc_alloc(PTR_PTR_1126e2e18);
  func_0x00010c008240();
  func_0x00010c2bd900();
  func_0x00010c2bdc40(puVar4,param_2,2,param_3);
  func_0x00010bfb2f20(puVar4);
  _objc_release(puVar4);
  return puVar3;
}



/* Entry: 10bd7d180; end: 10bd7d24f; -[GPBBoolEnumDictionary computeSerializedSizeAsField:] */

long FUN_10bd7d180(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar10 = *(long *)(param_3 + 8);
  uVar2 = *(undefined1 *)(lVar10 + 0x1e);
  bVar4 = true;
  do {
    bVar7 = bVar4;
    if (*(char *)(param_1 + 0x20 + lVar6) == '\x01') {
      lVar8 = lVar8 + 1;
      uVar5 = (ulong)*(uint *)(param_1 + 0x18 + lVar6 * 4);
      FUN_10bd62d84(uVar5,2,uVar2);
      lVar9 = lVar9 + uVar5 + 3;
    }
    lVar6 = 1;
    bVar4 = false;
  } while (bVar7);
  uVar1 = *(uint *)(lVar10 + 0x10);
  uVar3 = uVar1 << 3;
  if (uVar3 < 0x80) {
    lVar10 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar10 = 2;
  }
  else {
    lVar6 = 4;
    if ((uVar1 & 0x1fffffff) >> 0x19 != 0) {
      lVar6 = 5;
    }
    lVar10 = 3;
    if (0x1fffff < uVar3) {
      lVar10 = lVar6;
    }
  }
  return lVar9 + lVar10 * lVar8;
}



/* Entry: 10bd7d250; end: 10bd7d317; -[GPBBoolEnumDictionary writeToCodedOutputStream:asField:] */

void FUN_10bd7d250(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  bVar2 = true;
  do {
    bVar3 = bVar2;
    if (*(char *)(param_1 + 0x20 + lVar4) == '\x01') {
      func_0x00010c2bdf60(param_3);
      FUN_10bd62d84(*(undefined4 *)(param_1 + 0x18 + lVar4 * 4),2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bd900(param_3);
      FUN_10bd62f64(param_3,*(undefined4 *)(param_1 + 0x18 + lVar4 * 4),2,uVar1);
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



/* Entry: 10bd7d318; end: 10bd7d3af; -[GPBBoolEnumDictionary enumerateForTextFormat:] */

void FUN_10bd7d318(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x18)
                       );
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad398,puVar1);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010bd7d39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dad378,puVar1);
    return;
  }
  return;
}



/* Entry: 10bd7d3b0; end: 10bd7d3cf; -[GPBBoolEnumDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd7d3b0(long param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x18) = *param_3;
  *(undefined1 *)(param_1 + (ulong)bVar1 + 0x20) = 1;
  return;
}



/* Entry: 10bd7d3d0; end: 10bd7d42b; -[GPBBoolEnumDictionary addRawEntriesFromDictionary:] */

long FUN_10bd7d3d0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = param_1;
  if (param_3 != 0) {
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar9 = bVar1;
      if (*(char *)(param_3 + 0x20 + lVar8) == '\x01') {
        *(undefined1 *)(param_1 + 0x20 + lVar8) = 1;
        *(undefined4 *)(param_1 + 0x18 + lVar8 * 4) = *(undefined4 *)(param_3 + 0x18 + lVar8 * 4);
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar9);
    lVar2 = *(long *)(param_1 + 8);
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = lVar2;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar10 = *(long *)(lVar8 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar10;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      lVar12 = 0;
      if (lVar3 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lVar12 * 8);
            lVar6 = lVar11;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar2 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar8 = lVar11;
                func_0x00010c0b92a0();
                if (((int)lVar8 == 0xe) && (*(byte *)(*(long *)(lVar11 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar12 = lVar2;
                goto LAB_10bd7e9b0;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar12 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar12 != 0) && (func_0x00010c0cabe0(lVar12), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar12;
      }
      return lVar12;
    }
  }
  return lVar8;
}



/* Entry: 10bd7d42c; end: 10bd7d4c7; -[GPBBoolEnumDictionary setEnum:forKey:] */

long FUN_10bd7d42c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar1 = param_3;
  (**(code **)(param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(int *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x18) = (int)param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x20) = 1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar2;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar3 + 8);
  puVar5 = (undefined8 *)0x10;
  lVar4 = lVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar4 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar7 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar7 == 2) {
          lVar7 = 0;
          if (*(long *)(lVar2 + 0x40) != 0) {
            lVar7 = *(long *)(*(long *)(lVar2 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar7 == param_1) {
            lVar3 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar3 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar8 = (int *)&DAT_112796db0;
            }
            else {
              piVar8 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar8) = 0;
            func_0x000107c3187c();
            lVar11 = lVar2;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar5 = (undefined8 *)0x10;
      lVar4 = lVar9;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar5 != (undefined8 *)0x0)) {
      *puVar5 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd7d4c8; end: 10bd7d4ef; -[GPBBoolEnumDictionary setRawValue:forKey:] */

long FUN_10bd7d4c8(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + (param_4 & 0xffffffff) * 4 + 0x18) = param_3;
  *(undefined1 *)(param_1 + (param_4 & 0xffffffff) + 0x20) = 1;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar10 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar6 = lVar9;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar9;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar10 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar10 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar10;
  }
  return lVar10;
}



/* Entry: 10bd7d4f0; end: 10bd7d4fb; -[GPBBoolEnumDictionary removeEnumForKey:] */

void FUN_10bd7d4f0(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + (ulong)param_3 + 0x20) = 0;
  return;
}



/* Entry: 10bd7d4fc; end: 10bd7d503; -[GPBBoolEnumDictionary removeAll] */

void FUN_10bd7d4fc(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10bd7d504; end: 10bd7d50b; -[GPBBoolEnumDictionary validationFunc] */

undefined8 FUN_10bd7d504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd7d50c; end: 10bd7d55b; -[GPBAutocreatedDictionary dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d50c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_112796dac));
  puStack_28 = PTR_PTR_11270e9b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd7d55c; end: 10bd7d5df; -[GPBAutocreatedDictionary initWithObjects:forKeys:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bd7d55c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e9b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c030a00();
    *(undefined **)((long)puVar1 + (long)_DAT_112796dac) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd7d5e0; end: 10bd7d5ef; -[GPBAutocreatedDictionary count] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796dac),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd7d5f0; end: 10bd7d5ff; -[GPBAutocreatedDictionary objectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796dac),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 10bd7d600; end: 10bd7d63b; -[GPBAutocreatedDictionary keyEnumerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d600(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112796dac;
  if (*(long *)(param_1 + lVar2) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar2) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0865d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7d63c; end: 10bd7d6b7; -[GPBAutocreatedDictionary setObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10bd7d63c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = (long)_DAT_112796dac;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar9) = puVar1;
  }
  func_0x00010c1d0560();
  lVar9 = *(long *)(param_1 + _DAT_112796db0);
  if (lVar9 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar9;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar9;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd7d6b8; end: 10bd7d6c7; -[GPBAutocreatedDictionary removeObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796dac),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10bd7d6c8; end: 10bd7d6f7; -[GPBAutocreatedDictionary copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d6c8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112796dac) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf52250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112796dac),PTR_s_copyWithZone__1125b2238);
    return;
  }
  func_0x00010bf00e40(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7d6f8; end: 10bd7d727; -[GPBAutocreatedDictionary mutableCopyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d6f8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112796dac) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d3cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112796dac),PTR_s_mutableCopyWithZone__112612940);
    return;
  }
  func_0x00010bf00e40(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd7d728; end: 10bd7d737; -[GPBAutocreatedDictionary objectForKeyedSubscript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796dac),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10bd7d738; end: 10bd7d7b3; -[GPBAutocreatedDictionary setObject:forKeyedSubscript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10bd7d738(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = (long)_DAT_112796dac;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)(param_1 + lVar9) = puVar1;
  }
  func_0x00010c1d0640();
  lVar9 = *(long *)(param_1 + _DAT_112796db0);
  if (lVar9 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar9;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar8 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar9 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar9 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar9;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd7d7b4; end: 10bd7d7c3; -[GPBAutocreatedDictionary enumerateKeysAndObjectsUsingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796dac),
             PTR_s_enumerateKeysAndObjectsUsingBloc_1125c38e0);
  return;
}



/* Entry: 10bd7d7c4; end: 10bd7d7d3; -[GPBAutocreatedDictionary enumerateKeysAndObjectsWithOptions:usingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd7d7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796dac),
             PTR_s_enumerateKeysAndObjectsWithOptio_1125c38e8);
  return;
}



/* Entry: 10bd7d7d4; end: 10bd7dc17;  */

void FUN_10bd7d7d4(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_1e0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = param_2;
  if ((*(byte *)(lVar7 + 0x2d) & 1) == 0) {
    lVar3 = param_2;
    puVar5 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto code_r0x00010bd7dc18;
  }
  else {
    if ((*(byte *)(lVar7 + 0x2d) >> 1 & 1) == 0) {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      puVar5 = &uStack_160;
      lVar3 = param_2;
      func_0x00010bf52a60(param_2,param_2,puVar5,auStack_d8,0x10);
      if (lVar3 != 0) {
        lVar8 = *plStack_150;
        do {
          lVar9 = 0;
          do {
            if (*plStack_150 != lVar8) {
              _objc_enumerationMutation(param_2);
            }
            lVar4 = lVar7;
            FUN_10bd7dc18(*(undefined8 *)(lStack_158 + lVar9 * 8),lVar7,param_3);
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          puVar5 = &uStack_160;
          lVar3 = param_2;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
    }
    else {
      func_0x00010c2be480(param_3,param_2,*(undefined4 *)(lVar7 + 0x28),2);
      if (*(byte *)(lVar7 + 0x2c) < 7) {
        func_0x00010bf529e0(param_2);
      }
      else {
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        lStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        plStack_190 = (long *)0x0;
        lVar3 = param_2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar8 = *plStack_190;
          do {
            lVar9 = 0;
            do {
              if (*plStack_190 != lVar8) {
                _objc_enumerationMutation(param_2);
              }
              lVar4 = *(long *)(lStack_198 + lVar9 * 8);
              FUN_10bd7e444(*(undefined1 *)(lVar7 + 0x2c));
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = param_2;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
      }
      func_0x00010c2be240(param_3);
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      plStack_1d0 = (long *)0x0;
      lVar3 = param_2;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar8 = *plStack_1d0;
        do {
          lVar9 = 0;
          do {
            if (*plStack_1d0 != lVar8) {
              _objc_enumerationMutation(param_2);
            }
            if (*(byte *)(lVar7 + 0x2c) < 0x12) {
              uVar6 = *(undefined8 *)(lStack_1d8 + lVar9 * 8);
              switch(*(byte *)(lVar7 + 0x2c)) {
              case 0:
                func_0x00010bf1f3c0(uVar6);
                func_0x00010c2bd940(param_3);
                break;
              case 1:
                func_0x00010c282760(uVar6);
                func_0x00010c2bdd40(param_3);
                break;
              case 2:
                func_0x00010c067ec0(uVar6);
                func_0x00010c2be2c0(param_3);
                break;
              case 3:
                func_0x00010bfb2c80(uVar6);
                func_0x00010c2bde00(param_3);
                break;
              case 4:
                func_0x00010c282800(uVar6);
                func_0x00010c2bdda0(param_3);
                break;
              case 5:
                func_0x00010c0b4ca0(uVar6);
                func_0x00010c2be320(param_3);
                break;
              case 6:
                func_0x00010bf885a0(uVar6);
                func_0x00010c2bdc00(param_3);
                break;
              case 7:
                func_0x00010c067ec0(uVar6);
                func_0x00010c2bdf60(param_3);
                break;
              case 8:
                func_0x00010c0b4ca0(uVar6);
                func_0x00010c2bdfc0(param_3);
                break;
              case 9:
                func_0x00010c067ec0(uVar6);
                func_0x00010c2be380(param_3);
                break;
              case 10:
                func_0x00010c0b4ca0(uVar6);
                func_0x00010c2be3e0(param_3);
                break;
              case 0xb:
                func_0x00010c282760(uVar6);
                func_0x00010c2be640(param_3);
                break;
              case 0xc:
                func_0x00010c282800(uVar6);
                func_0x00010c2be6a0(param_3);
                break;
              case 0xd:
                func_0x00010c2bd9c0(param_3);
                break;
              case 0xe:
                func_0x00010c2be460(param_3);
                break;
              case 0xf:
                func_0x00010c2be0c0(param_3);
                break;
              case 0x10:
                func_0x00010c2bdec0(param_3);
                break;
              case 0x11:
                func_0x00010c067ec0(uVar6);
                func_0x00010c2bdc80(param_3);
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = param_2;
          puVar5 = &uStack_1e0;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
    }
    param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  unaff_x30 = FUN_10bd7dc18;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&uStack_1e0;
  lVar3 = param_1;
  lVar7 = lVar4;
  unaff_x19 = param_3;
  unaff_x20 = param_2;
  unaff_x29 = puVar1;
code_r0x00010bd7dc18:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  switch(*(undefined1 *)(lVar7 + 0x2c)) {
  case 0:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010bf1f3c0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bd910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeBool_value__11268d068,uVar2,lVar3);
    return;
  case 1:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c282760(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeFixed32_value__11268d168,uVar2,lVar3);
    return;
  case 2:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c067ec0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeSFixed32_value__11268d2c8,uVar2,lVar3);
    return;
  case 3:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010bfb2c80(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeFloat_value__11268d198,uVar2);
    return;
  case 4:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c282800(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeFixed64_value__11268d180,uVar2,lVar3);
    return;
  case 5:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c0b4ca0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeSFixed64_value__11268d2e0,uVar2,lVar3);
    return;
  case 6:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010bf885a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeDouble_value__11268d118,uVar2);
    return;
  case 7:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c067ec0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeInt32_value__11268d1f0,uVar2,lVar3);
    return;
  case 8:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c0b4ca0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeInt64_value__11268d208,uVar2,lVar3);
    return;
  case 9:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c067ec0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeSInt32_value__11268d2f8,uVar2,lVar3);
    return;
  case 10:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c0b4ca0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeSInt64_value__11268d310,uVar2,lVar3);
    return;
  case 0xb:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c282760(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeUInt32_value__11268d3a8,uVar2,lVar3);
    return;
  case 0xc:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c282800(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeUInt64_value__11268d3c0,uVar2,lVar3);
    return;
  case 0xd:
                    /* WARNING: Could not recover jumptable at 0x00010c2bd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar5,PTR_s_writeBytes_value__11268d088,*(undefined4 *)(lVar7 + 0x28));
    return;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x00010c2be430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar5,PTR_s_writeString_value__11268d330,*(undefined4 *)(lVar7 + 0x28));
    return;
  case 0xf:
    break;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00010c2bde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar5,PTR_s_writeGroup_value__11268d1c8,*(undefined4 *)(lVar7 + 0x28));
    return;
  case 0x11:
    uVar2 = *(undefined4 *)(lVar7 + 0x28);
    func_0x00010c067ec0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeEnum_value__11268d138,uVar2,lVar3);
    return;
  default:
    return;
  }
  if ((*(byte *)(lVar7 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar5,PTR_s_writeMessageSetExtension_value__11268d260,*(undefined4 *)(lVar7 + 0x28))
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2be090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_writeMessage_value__11268d248);
  return;
}



/* Entry: 10bd7dc18; end: 10bd7deaf;  */

void FUN_10bd7dc18(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_2 + 0x2c)) {
  case 0:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010bf1f3c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bd910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeBool_value__11268d068,uVar1,param_1);
    return;
  case 1:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c282760(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeFixed32_value__11268d168,uVar1,param_1);
    return;
  case 2:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c067ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2be290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeSFixed32_value__11268d2c8,uVar1,param_1);
    return;
  case 3:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010bfb2c80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeFloat_value__11268d198,uVar1);
    return;
  case 4:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c282800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeFixed64_value__11268d180,uVar1,param_1);
    return;
  case 5:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c0b4ca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2be2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeSFixed64_value__11268d2e0,uVar1,param_1);
    return;
  case 6:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010bf885a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeDouble_value__11268d118,uVar1);
    return;
  case 7:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c067ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeInt32_value__11268d1f0,uVar1,param_1);
    return;
  case 8:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c0b4ca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeInt64_value__11268d208,uVar1,param_1);
    return;
  case 9:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c067ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2be350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeSInt32_value__11268d2f8,uVar1,param_1)
    ;
    return;
  case 10:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c0b4ca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2be3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeSInt64_value__11268d310,uVar1,param_1)
    ;
    return;
  case 0xb:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c282760(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2be610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeUInt32_value__11268d3a8,uVar1,param_1)
    ;
    return;
  case 0xc:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c282800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2be670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeUInt64_value__11268d3c0,uVar1,param_1)
    ;
    return;
  case 0xd:
                    /* WARNING: Could not recover jumptable at 0x00010c2bd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeBytes_value__11268d088,*(undefined4 *)(param_2 + 0x28));
    return;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x00010c2be430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeString_value__11268d330,*(undefined4 *)(param_2 + 0x28));
    return;
  case 0xf:
    break;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x00010c2bde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeGroup_value__11268d1c8,*(undefined4 *)(param_2 + 0x28));
    return;
  case 0x11:
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    func_0x00010c067ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2bdc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeEnum_value__11268d138,uVar1,param_1);
    return;
  default:
    return;
  }
  if ((*(byte *)(param_2 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_writeMessageSetExtension_value__11268d260,
               *(undefined4 *)(param_2 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2be090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_writeMessage_value__11268d248);
  return;
}



/* Entry: 10bd7deb0; end: 10bd7e13b;  */

ulong FUN_10bd7deb0(ulong param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong unaff_x19;
  ulong uVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *unaff_x29;
  code *unaff_x30;
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
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar7 = param_2;
  if ((*(byte *)(uVar9 + 0x2d) & 1) == 0) {
    uVar10 = uVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
    goto LAB_10bd7e138;
  }
  else {
    if ((*(byte *)(uVar9 + 0x2d) >> 1 & 1) == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uVar11 = param_2;
      func_0x00010bf52a60(param_2,param_2,&uStack_120,auStack_d8,0x10);
      if (uVar11 == 0) {
        uVar10 = 0;
        param_1 = 0;
      }
      else {
        uVar10 = 0;
        lVar12 = *plStack_110;
        do {
          uVar13 = 0;
          do {
            if (*plStack_110 != lVar12) {
              _objc_enumerationMutation(param_2);
            }
            uVar7 = *(ulong *)(lStack_118 + uVar13 * 8);
            uVar6 = uVar9;
            FUN_10bd7e13c(uVar9);
            uVar10 = uVar6 + uVar10;
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          uVar11 = param_2;
          func_0x00010bf52a60();
        } while (uVar11 != 0);
        param_1 = 0;
      }
    }
    else {
      if ((ulong)*(byte *)(uVar9 + 0x2c) < 7) {
        lVar12 = *(long *)(&UNK_10e60de68 + (ulong)*(byte *)(uVar9 + 0x2c) * 8);
        param_1 = param_2;
        func_0x00010bf529e0();
        uVar11 = param_1 * lVar12;
      }
      else {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        lStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        plStack_110 = (long *)0x0;
        uVar10 = param_2;
        func_0x00010bf52a60(param_2,param_2,&uStack_120,auStack_d8,0x10);
        if (uVar10 == 0) {
          uVar11 = 0;
          param_1 = 0;
        }
        else {
          uVar11 = 0;
          lVar12 = *plStack_110;
          do {
            uVar13 = 0;
            do {
              if (*plStack_110 != lVar12) {
                _objc_enumerationMutation(param_2);
              }
              uVar7 = *(ulong *)(lStack_118 + uVar13 * 8);
              uVar6 = (ulong)*(byte *)(uVar9 + 0x2c);
              FUN_10bd7e444();
              uVar11 = uVar6 + uVar11;
              uVar13 = uVar13 + 1;
            } while (uVar10 != uVar13);
            uVar10 = param_2;
            func_0x00010bf52a60();
          } while (uVar10 != 0);
          param_1 = 0;
        }
      }
      uVar5 = *(uint *)(uVar9 + 0x28) << 3;
      if (uVar5 < 0x80) {
        lVar8 = 1;
      }
      else if (uVar5 < 0x4000) {
        lVar8 = 2;
      }
      else {
        lVar12 = 4;
        if ((*(uint *)(uVar9 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
          lVar12 = 5;
        }
        lVar8 = 3;
        if (0x1fffff < uVar5) {
          lVar8 = lVar12;
        }
      }
      lVar12 = 4;
      if ((uVar11 >> 0x1c & 0xf) != 0) {
        lVar12 = 5;
      }
      uVar5 = (uint)uVar11;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar5) {
        lVar12 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar12;
      }
      uVar10 = lVar8 + uVar11 + lVar2;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return uVar10;
    }
LAB_10bd7e138:
    unaff_x30 = FUN_10bd7e13c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)&uStack_120;
    uVar10 = param_1;
    unaff_x19 = uVar9;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  switch(*(undefined1 *)(uVar10 + 0x2c)) {
  case 0:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010bf1f3c0(uVar7);
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 2;
    }
    if (uVar3 < 0x4000) {
      return 3;
    }
    if (uVar3 < 0x200000) {
      return 4;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    uVar10 = 5;
    goto code_r0x00010bd7e434;
  case 1:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c282760(uVar7);
    break;
  case 2:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c067ec0(uVar7);
    break;
  case 3:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010bfb2c80(uVar7);
    break;
  case 4:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c282800(uVar7);
    goto code_r0x00010bd7e2e8;
  case 5:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c0b4ca0(uVar7);
    goto code_r0x00010bd7e2e8;
  case 6:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010bf885a0(uVar7);
code_r0x00010bd7e2e8:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 9;
    }
    if (uVar3 < 0x4000) {
      return 10;
    }
    if (uVar3 < 0x200000) {
      return 0xb;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    uVar10 = 0xc;
    goto code_r0x00010bd7e434;
  case 7:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c067ec0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 10;
    if ((uVar7 & 0x80000000) == 0) {
      lVar12 = lVar2;
    }
    return lVar12 + lVar8;
  case 8:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c0b4ca0(uVar7);
    goto code_r0x00010bd7e33c;
  case 9:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c067ec0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    uVar5 = (int)uVar7 << 1 ^ (int)uVar7 >> 0x1f;
    lVar12 = 4;
    if (uVar5 >> 0x1c != 0) {
      lVar12 = 5;
    }
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return lVar2 + lVar8;
  case 10:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c0b4ca0(uVar7);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    uVar7 = uVar7 << 1 ^ (long)uVar7 >> 0x3f;
    func_0x000107c3184c(uVar7);
    return uVar7 + lVar8;
  case 0xb:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c282760();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return lVar2 + lVar8;
  case 0xc:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c282800(uVar7);
code_r0x00010bd7e33c:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      lVar12 = 1;
    }
    else {
      lVar12 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar12 = 5;
      }
      lVar8 = 3;
      if (0x1fffff < uVar3) {
        lVar8 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar3) {
        lVar12 = lVar8;
      }
    }
    func_0x000107c3184c();
code_r0x00010bd7e3d4:
    return uVar7 + lVar12;
  case 0xd:
    uVar5 = *(uint *)(uVar10 + 0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    func_0x000107c4adac();
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return uVar7 + lVar8 + lVar2;
  case 0xe:
    uVar5 = *(uint *)(uVar10 + 0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    func_0x000107c4adb0();
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return uVar7 + lVar8 + lVar2;
  case 0xf:
    uVar5 = *(uint *)(uVar10 + 0x28);
    if ((*(byte *)(uVar10 + 0x2d) >> 2 & 1) == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar3 = uVar5 << 3;
      lVar12 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar12 = 5;
      }
      lVar8 = 3;
      if (0x1fffff < uVar3) {
        lVar8 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar3) {
        lVar12 = lVar8;
      }
      lVar8 = 1;
      if (0x7f < uVar3) {
        lVar8 = lVar12;
      }
      func_0x000107c51f60();
      lVar12 = 4;
      if ((uVar7 >> 0x1c & 0xf) != 0) {
        lVar12 = 5;
      }
      uVar5 = (uint)uVar7;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar12;
      }
      lVar12 = 2;
      if (0x3fff < uVar5) {
        lVar12 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar12;
      }
      return uVar7 + lVar8 + lVar2;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    lVar12 = 8;
    if (uVar5 >> 0x1c != 0) {
      lVar12 = 9;
    }
    lVar8 = 7;
    if (0x1fffff < uVar5) {
      lVar8 = lVar12;
    }
    lVar12 = 6;
    if (0x3fff < uVar5) {
      lVar12 = lVar8;
    }
    lVar8 = 5;
    if (0x7f < uVar5) {
      lVar8 = lVar12;
    }
    func_0x00010c15ebe0();
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    return lVar8 + uVar7 + lVar2;
  case 0x10:
    uVar5 = *(uint *)(uVar10 + 0x28) << 3;
    if (uVar5 < 0x80) {
      lVar12 = 2;
    }
    else {
      lVar12 = 8;
      if ((*(uint *)(uVar10 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
        lVar12 = 10;
      }
      lVar8 = 6;
      if (0x1fffff < uVar5) {
        lVar8 = lVar12;
      }
      lVar12 = 4;
      if (0x3fff < uVar5) {
        lVar12 = lVar8;
      }
    }
    func_0x00010c15ebe0(uVar7);
    goto code_r0x00010bd7e3d4;
  case 0x11:
    uVar5 = *(uint *)(uVar10 + 0x28);
    func_0x00010c067ec0();
    uVar3 = uVar5 << 3;
    lVar12 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar12 = 5;
    }
    lVar8 = 3;
    if (0x1fffff < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar3) {
      lVar12 = lVar8;
    }
    lVar8 = 1;
    if (0x7f < uVar3) {
      lVar8 = lVar12;
    }
    lVar12 = 4;
    if ((uVar7 >> 0x1c & 0xf) != 0) {
      lVar12 = 5;
    }
    uVar5 = (uint)uVar7;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 2;
    if (0x3fff < uVar5) {
      lVar12 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar12;
    }
    lVar12 = 10;
    if ((uVar7 & 0x80000000) == 0) {
      lVar12 = lVar2;
    }
    return lVar12 + lVar8;
  default:
    goto LAB_10bd7e438;
  }
  uVar3 = uVar5 << 3;
  if (uVar3 < 0x80) {
    uVar10 = 5;
  }
  else if (uVar3 < 0x4000) {
    uVar10 = 6;
  }
  else if (uVar3 < 0x200000) {
    uVar10 = 7;
  }
  else {
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    uVar10 = 8;
code_r0x00010bd7e434:
    if (!bVar4) {
      uVar10 = uVar10 + 1;
    }
  }
LAB_10bd7e438:
  return uVar10;
}



/* Entry: 10bd7e13c; end: 10bd7e443;  */

long FUN_10bd7e13c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  switch(*(undefined1 *)(param_1 + 0x2c)) {
  case 0:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010bf1f3c0(param_2);
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 2;
    }
    if (uVar3 < 0x4000) {
      return 3;
    }
    if (uVar3 < 0x200000) {
      return 4;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    param_1 = 5;
    goto code_r0x00010bd7e434;
  case 1:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c282760(param_2);
    break;
  case 2:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c067ec0(param_2);
    break;
  case 3:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010bfb2c80(param_2);
    break;
  case 4:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c282800(param_2);
    goto code_r0x00010bd7e2e8;
  case 5:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c0b4ca0(param_2);
    goto code_r0x00010bd7e2e8;
  case 6:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010bf885a0(param_2);
code_r0x00010bd7e2e8:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      return 9;
    }
    if (uVar3 < 0x4000) {
      return 10;
    }
    if (uVar3 < 0x200000) {
      return 0xb;
    }
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    param_1 = 0xc;
    goto code_r0x00010bd7e434;
  case 7:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c067ec0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 10;
    if ((param_2 & 0x80000000) == 0) {
      lVar7 = lVar2;
    }
    return lVar7 + lVar1;
  case 8:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c0b4ca0(param_2);
    goto code_r0x00010bd7e33c;
  case 9:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c067ec0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    uVar5 = (int)param_2 << 1 ^ (int)param_2 >> 0x1f;
    lVar7 = 4;
    if (uVar5 >> 0x1c != 0) {
      lVar7 = 5;
    }
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return lVar2 + lVar1;
  case 10:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c0b4ca0(param_2);
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    uVar6 = param_2 << 1 ^ (long)param_2 >> 0x3f;
    func_0x000107c3184c(uVar6);
    return uVar6 + lVar1;
  case 0xb:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c282760();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return lVar2 + lVar1;
  case 0xc:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c282800(param_2);
code_r0x00010bd7e33c:
    uVar3 = uVar5 << 3;
    if (uVar3 < 0x80) {
      lVar7 = 1;
    }
    else {
      lVar7 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar7 = 5;
      }
      lVar1 = 3;
      if (0x1fffff < uVar3) {
        lVar1 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar3) {
        lVar7 = lVar1;
      }
    }
    func_0x000107c3184c();
code_r0x00010bd7e3d4:
    return param_2 + lVar7;
  case 0xd:
    uVar5 = *(uint *)(param_1 + 0x28) << 3;
    lVar7 = 4;
    if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar5) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar5) {
      lVar1 = lVar7;
    }
    func_0x000107c4adac();
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return param_2 + lVar1 + lVar2;
  case 0xe:
    uVar5 = *(uint *)(param_1 + 0x28) << 3;
    lVar7 = 4;
    if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar5) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar5) {
      lVar1 = lVar7;
    }
    func_0x000107c4adb0(param_2,param_2,4);
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return param_2 + lVar1 + lVar2;
  case 0xf:
    uVar5 = *(uint *)(param_1 + 0x28);
    if ((*(byte *)(param_1 + 0x2d) >> 2 & 1) == 0) {
      uVar3 = uVar5 << 3;
      lVar7 = 4;
      if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
        lVar7 = 5;
      }
      lVar1 = 3;
      if (0x1fffff < uVar3) {
        lVar1 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar3) {
        lVar7 = lVar1;
      }
      lVar1 = 1;
      if (0x7f < uVar3) {
        lVar1 = lVar7;
      }
      func_0x000107c51f60();
      lVar7 = 4;
      if ((param_2 >> 0x1c & 0xf) != 0) {
        lVar7 = 5;
      }
      uVar5 = (uint)param_2;
      lVar2 = 3;
      if (0x1fffff < uVar5) {
        lVar2 = lVar7;
      }
      lVar7 = 2;
      if (0x3fff < uVar5) {
        lVar7 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar5) {
        lVar2 = lVar7;
      }
      return param_2 + lVar1 + lVar2;
    }
    lVar7 = 8;
    if (uVar5 >> 0x1c != 0) {
      lVar7 = 9;
    }
    lVar1 = 7;
    if (0x1fffff < uVar5) {
      lVar1 = lVar7;
    }
    lVar7 = 6;
    if (0x3fff < uVar5) {
      lVar7 = lVar1;
    }
    lVar1 = 5;
    if (0x7f < uVar5) {
      lVar1 = lVar7;
    }
    func_0x00010c15ebe0();
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    return lVar1 + param_2 + lVar2;
  case 0x10:
    uVar5 = *(uint *)(param_1 + 0x28) << 3;
    if (uVar5 < 0x80) {
      lVar7 = 2;
    }
    else {
      lVar7 = 8;
      if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
        lVar7 = 10;
      }
      lVar1 = 6;
      if (0x1fffff < uVar5) {
        lVar1 = lVar7;
      }
      lVar7 = 4;
      if (0x3fff < uVar5) {
        lVar7 = lVar1;
      }
    }
    func_0x00010c15ebe0(param_2);
    goto code_r0x00010bd7e3d4;
  case 0x11:
    uVar5 = *(uint *)(param_1 + 0x28);
    func_0x00010c067ec0();
    uVar3 = uVar5 << 3;
    lVar7 = 4;
    if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar1 = 3;
    if (0x1fffff < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar3) {
      lVar7 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < uVar3) {
      lVar1 = lVar7;
    }
    lVar7 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar7 = 5;
    }
    uVar5 = (uint)param_2;
    lVar2 = 3;
    if (0x1fffff < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar5) {
      lVar7 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar5) {
      lVar2 = lVar7;
    }
    lVar7 = 10;
    if ((param_2 & 0x80000000) == 0) {
      lVar7 = lVar2;
    }
    return lVar7 + lVar1;
  default:
    goto LAB_10bd7e438;
  }
  uVar3 = uVar5 << 3;
  if (uVar3 < 0x80) {
    param_1 = 5;
  }
  else if (uVar3 < 0x4000) {
    param_1 = 6;
  }
  else if (uVar3 < 0x200000) {
    param_1 = 7;
  }
  else {
    bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
    param_1 = 8;
code_r0x00010bd7e434:
    if (!bVar4) {
      param_1 = param_1 + 1;
    }
  }
LAB_10bd7e438:
  return param_1;
}



/* Entry: 10bd7e444; end: 10bd7e64b;  */

/* WARNING: Possible PIC construction at 0x00010bd7e4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd7e4c4) */

ulong FUN_10bd7e444(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  switch(param_1 & 0xffffffff) {
  case 0:
    func_0x00010bf1f3c0(param_2);
    goto code_r0x00010bd7e610;
  case 1:
    func_0x00010c282760(param_2);
    goto code_r0x00010bd7e5b4;
  case 2:
    func_0x00010c067ec0(param_2);
    goto code_r0x00010bd7e5b4;
  case 3:
    func_0x00010bfb2c80(param_2);
code_r0x00010bd7e5b4:
    param_1 = 4;
    break;
  case 4:
    func_0x00010c282800(param_2);
    goto code_r0x00010bd7e5dc;
  case 5:
    func_0x00010c0b4ca0(param_2);
    goto code_r0x00010bd7e5dc;
  case 6:
    func_0x00010bf885a0(param_2);
code_r0x00010bd7e5dc:
    param_1 = 8;
    break;
  case 7:
  case 0x11:
    func_0x00010c067ec0();
    uVar1 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      uVar1 = 5;
    }
    uVar5 = (uint)param_2;
    uVar3 = 3;
    if (0x1fffff < uVar5) {
      uVar3 = uVar1;
    }
    uVar1 = 2;
    if (0x3fff < uVar5) {
      uVar1 = uVar3;
    }
    uVar3 = 1;
    if (0x7f < uVar5) {
      uVar3 = uVar1;
    }
    param_1 = 10;
    if ((param_2 & 0x80000000) == 0) {
      param_1 = uVar3;
    }
    break;
  case 8:
    func_0x00010c0b4ca0();
    goto code_r0x00010057efc0;
  case 9:
    func_0x00010c067ec0();
    uVar5 = (int)param_2 << 1 ^ (int)param_2 >> 0x1f;
    if (0x7f < uVar5) {
      if (uVar5 < 0x4000) {
        return 2;
      }
      uVar1 = 4;
      if (uVar5 >> 0x1c != 0) {
        uVar1 = 5;
      }
      if (uVar5 < 0x200000) {
        return 3;
      }
      return uVar1;
    }
code_r0x00010bd7e610:
    param_1 = 1;
    break;
  case 10:
    func_0x00010c0b4ca0();
    param_2 = param_2 << 1 ^ (long)param_2 >> 0x3f;
    goto code_r0x00010057efc0;
  case 0xb:
    func_0x00010c282760();
    uVar1 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      uVar1 = 5;
    }
    uVar5 = (uint)param_2;
    uVar3 = 3;
    if (0x1fffff < uVar5) {
      uVar3 = uVar1;
    }
    uVar1 = 2;
    if (0x3fff < uVar5) {
      uVar1 = uVar3;
    }
    param_1 = 1;
    if (0x7f < uVar5) {
      param_1 = uVar1;
    }
    break;
  case 0xc:
    func_0x00010c282800();
code_r0x00010057efc0:
    if (param_2 < 0x80) {
      return 1;
    }
    if (param_2 < 0x4000) {
      return 2;
    }
    if (param_2 < 0x200000) {
      return 3;
    }
    if (param_2 >> 0x1c == 0) {
      return 4;
    }
    if (param_2 >> 0x23 == 0) {
      return 5;
    }
    if (param_2 >> 0x2a == 0) {
      return 6;
    }
    if (param_2 >> 0x31 == 0) {
      return 7;
    }
    uVar1 = 9;
    if (0x7fffffffffffffff < param_2) {
      uVar1 = 10;
    }
    uVar3 = 8;
    if (param_2 >> 0x38 != 0) {
      uVar3 = uVar1;
    }
    return uVar3;
  case 0xd:
    func_0x00010c08fa60();
    goto code_r0x00010bd7e558;
  case 0xe:
    func_0x00010c08fac0(param_2,param_2,4);
code_r0x00010bd7e558:
    lVar2 = 4;
    if ((param_2 >> 0x1c & 0xf) != 0) {
      lVar2 = 5;
    }
    uVar5 = (uint)param_2;
    lVar4 = 3;
    if (0x1fffff < uVar5) {
      lVar4 = lVar2;
    }
    lVar2 = 2;
    if (0x3fff < uVar5) {
      lVar2 = lVar4;
    }
    lVar4 = 1;
    if (0x7f < uVar5) {
      lVar4 = lVar2;
    }
    param_1 = lVar4 + param_2;
    break;
  case 0xf:
    goto code_r0x00010c15ebe0;
  case 0x10:
code_r0x00010c15ebe0:
                    /* WARNING: Could not recover jumptable at 0x00010c15ebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serializedSize_112635518);
    return param_2;
  }
  return param_1;
}



/* Entry: 10bd7e64c; end: 10bd7e693; -[GPBExtensionRegistry dealloc] */

void FUN_10bd7e64c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CFRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_11270e9c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd7e694; end: 10bd7e6d3; -[GPBExtensionRegistry copyWithZone:] */

undefined8 FUN_10bd7e694(undefined8 param_1)

{
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  func_0x00010bef8160();
  return param_1;
}


