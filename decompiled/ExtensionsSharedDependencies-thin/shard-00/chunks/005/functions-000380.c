/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00763ca0; end: 00763d3f; -[GPBMessage data] */

undefined * FUN_00763ca0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x0078c740();
  if (uVar1 >> 0x1f == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,uVar1);
    puVar2 = PTR_PTR_00ac3140;
    _objc_alloc(PTR_PTR_00ac3140);
    func_0x007851c0();
    func_0x007943a0(param_1,param_2,puVar2);
    func_0x00783860(puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}



/* Entry: 00763d40; end: 00763e2f; -[GPBMessage delimitedData] */

undefined * FUN_00763d40(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar4 = param_1;
  func_0x0078c740();
  lVar1 = 4;
  if ((uVar4 >> 0x1c & 0xf) != 0) {
    lVar1 = 5;
  }
  uVar3 = (uint)uVar4;
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
  puVar5 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,lVar2 + uVar4);
  puVar6 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x007851c0();
  func_0x00793d40(param_1,param_2,puVar6);
  func_0x00783860(puVar6);
  _objc_release(puVar6);
  return puVar5;
}



/* Entry: 00763e30; end: 00763eff; -[GPBMessage writeToOutputStream:] */

/* WARNING: Removing unreachable block (ram,0x00763ec8) */

void FUN_00763e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac3140;
  _objc_alloc();
  func_0x00786120();
  func_0x007943a0(param_1,param_2,puVar1);
  func_0x00783860(puVar1);
  puVar2 = puVar1;
  func_0x0077fe80();
  if ((ulong)puVar2 >> 0x1f != 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a4b200,
                    &PTR____CFConstantStringClassReference_00a4b240);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 00763f00; end: 0076408b; -[GPBMessage writeToCodedOutputStream:] */

void FUN_00763f00(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = param_1;
  func_0x00781ea0();
  uVar7 = *(ulong *)(uVar1 + 8);
  uVar2 = uVar7;
  func_0x00780e80();
  uVar3 = uVar1;
  func_0x00783000();
  uVar4 = uVar1;
  func_0x00783020();
  func_0x0077eae0(*(undefined8 *)(param_1 + 0x10));
  func_0x00791a80();
  if (uVar2 != 0 || (int)uVar4 != 0) {
    uVar6 = 0;
    uVar8 = 0;
    do {
      if (uVar8 == uVar2) {
        uVar6 = uVar6 + 1;
        func_0x00793e20(param_1);
        uVar8 = uVar2;
      }
      else if ((uVar6 == (uVar4 & 0xffffffff)) ||
              (uVar5 = uVar7, func_0x00789e20(),
              *(uint *)(*(long *)(uVar5 + 8) + 0x10) < *(uint *)(uVar3 + uVar6 * 8))) {
        uVar8 = uVar8 + 1;
        func_0x00789e20(uVar7);
        func_0x00793e40(param_1);
      }
      else {
        uVar6 = uVar6 + 1;
        func_0x00793e20(param_1);
      }
    } while ((uVar8 < uVar2) || (uVar6 < (uVar4 & 0xffffffff)));
  }
  func_0x00787f80();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00793c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_1 + 8),PTR_s_writeAsMessageSetTo__00abfc20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007943b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_writeToCodedOutputStream__00abfdf8,param_3);
  return;
}



/* Entry: 0076408c; end: 0076411b; -[GPBMessage writeDelimitedToOutputStream:] */

/* WARNING: Removing unreachable block (ram,0x007640e8) */

void FUN_0076408c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3140;
  _objc_alloc(PTR_PTR_00ac3140);
  func_0x00786120();
  func_0x00793d40(param_1,param_2,puVar1);
  func_0x00783860(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 0076411c; end: 0076418f; -[GPBMessage writeDelimitedToCodedOutputStream:] */

void FUN_0076411c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x0078c740();
  if (uVar1 >> 0x1f != 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  func_0x00794180(param_3);
                    /* WARNING: Could not recover jumptable at 0x007943b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeToCodedOutputStream__00abfdf8,param_3);
  return;
}



/* Entry: 00764190; end: 00764d97; -[GPBMessage writeField:toCodedOutputStream:] */

/* WARNING: Possible PIC construction at 0x00745518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0074551c) */

void FUN_00764190(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = param_3;
  func_0x00783280();
  lVar5 = *(long *)(param_3 + 8);
  iVar2 = (int)lVar6;
  if (iVar2 == 0) {
    uVar7 = *(uint *)(lVar5 + 0x14);
    if ((int)uVar7 < 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar7 * 4) != *(int *)(lVar5 + 0x10)) {
        return;
      }
    }
    else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar7 >> 5) * 4) >>
              (ulong)(uVar7 & 0x1f) & 1) == 0) {
      return;
    }
  }
  if (0x11 < *(byte *)(lVar5 + 0x1e)) {
    return;
  }
  uVar3 = *(undefined4 *)(lVar5 + 0x10);
  switch(*(byte *)(lVar5 + 0x1e)) {
  case 0:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00793c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeBoolArray_values_tag__00abfc30,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c6c0(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeBool_value__00abfc28,uVar3,param_1);
      return;
    }
    break;
  case 1:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00793e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeFixed32Array_values_tag__00abfcb0,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c830(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeFixed32_value__00abfca8,uVar3,param_1);
      return;
    }
    break;
  case 2:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x007941d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeSFixed32Array_values_tag__00abfd80,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c504(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x007941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeSFixed32_value__00abfd78,uVar3,param_1);
      return;
    }
    break;
  case 3:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00793f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeFloatArray_values_tag__00abfce0,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076cb7c(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeFloat_value__00abfcd8,uVar3);
      return;
    }
    break;
  case 4:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00793ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeFixed64Array_values_tag__00abfcc8,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076ca68(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeFixed64_value__00abfcc0,uVar3,param_1);
      return;
    }
    break;
  case 5:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00794230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeSFixed64Array_values_tag__00abfd98,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c954(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00794210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeSFixed64_value__00abfd90,uVar3,param_1);
      return;
    }
    break;
  case 6:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00793d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeDoubleArray_values_tag__00abfc70,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076cca8(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeDouble_value__00abfc68,uVar3);
      return;
    }
    break;
  case 7:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00794010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeInt32Array_values_tag__00abfd10,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c504(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeInt32_value__00abfd08,uVar3,param_1);
      return;
    }
    break;
  case 8:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00794070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeInt64Array_values_tag__00abfd28,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c954(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00794050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeInt64_value__00abfd20,uVar3,param_1);
      return;
    }
    break;
  case 9:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00794290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeSInt32Array_values_tag__00abfdb0,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c504(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00794270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeSInt32_value__00abfda8,uVar3,param_1)
      ;
      return;
    }
    break;
  case 10:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x007942f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeSInt64Array_values_tag__00abfdc8,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c954(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x007942d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeSInt64_value__00abfdc0,uVar3,param_1)
      ;
      return;
    }
    break;
  case 0xb:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00794470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeUInt32Array_values_tag__00abfe28,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c830(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00794450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeUInt32_value__00abfe20,uVar3,param_1)
      ;
      return;
    }
    break;
  case 0xc:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x007944d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeUInt64Array_values_tag__00abfe40,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076ca68(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x007944b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeUInt64_value__00abfe38,uVar3,param_1)
      ;
      return;
    }
    break;
  case 0xd:
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
    }
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00793cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeBytesArray_values__00abfc48,uVar3,lVar6);
      return;
    }
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00793cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeBytes_value__00abfc40,uVar3,lVar6);
      return;
    }
    goto code_r0x00764874;
  case 0xe:
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
    }
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00794350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeStringArray_values__00abfde0,uVar3,lVar5);
      return;
    }
    lVar6 = lVar5;
    if (iVar2 == 0) goto code_r0x00794320;
    goto code_r0x00764874;
  case 0xf:
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
    }
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x007940d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeMessageArray_values__00abfd40,uVar3,lVar6);
      return;
    }
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x007940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeMessage_value__00abfd38,uVar3,lVar6);
      return;
    }
    goto code_r0x00764874;
  case 0x10:
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
    }
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00793fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeGroupArray_values__00abfcf8,uVar3,lVar6);
      return;
    }
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00793f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeGroup_value__00abfcf0,uVar3,lVar6);
      return;
    }
code_r0x00764874:
    lVar5 = param_3;
    func_0x00788e40();
    if ((int)lVar5 == 0xe) {
      uVar1 = *(undefined1 *)(*(long *)(param_3 + 8) + 0x1e);
      lVar5 = lVar6;
      func_0x00788080();
      func_0x00789980();
      if (lVar5 == 0) {
        return;
      }
      func_0x00789f00(lVar6);
      func_0x00794020(param_4);
      func_0x00788320();
      FUN_007453bc(lVar6,uVar1);
      func_0x00794020(param_4);
      uVar3 = 1;
code_r0x00794320:
                    /* WARNING: Could not recover jumptable at 0x00794330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeString_value__00abfdd8,uVar3,lVar5);
      return;
    }
    goto code_r0x007648a4;
  case 0x11:
    if (iVar2 == 1) {
      lVar6 = param_3;
      func_0x00787b80();
      if ((int)lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 8);
        if ((*(ushort *)(lVar6 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar6 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        uVar7 = uVar7 | *(int *)(lVar6 + 0x10) << 3;
      }
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x18));
      }
                    /* WARNING: Could not recover jumptable at 0x00793df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_4,PTR_s_writeEnumArray_values_tag__00abfc88,uVar3,uVar4,uVar7);
      return;
    }
    if (iVar2 == 0) {
      FUN_0076c504(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00793dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(param_4,PTR_s_writeEnum_value__00abfc80,uVar3,param_1);
      return;
    }
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar5 + 0x18));
  }
code_r0x007648a4:
                    /* WARNING: Could not recover jumptable at 0x007943d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (lVar6,PTR_s_writeToCodedOutputStream_asField_00abfe00,param_4,param_3);
  return;
}



/* Entry: 00764d98; end: 00764e8b; -[GPBMessage getExtension:] */

ulong FUN_00764d98(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  FUN_00764e8c(param_1,param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00789ea0();
  if (uVar1 == 0) {
    uVar1 = param_3;
    func_0x00787c60();
    if ((uVar1 & 1) == 0) {
      if (1 < *(byte *)(*(long *)(param_3 + 8) + 0x2c) - 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00781cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_defaultValue_00abb430);
        return param_3;
      }
      _os_unfair_lock_lock(param_1 + 0x38);
      uVar1 = *(ulong *)(param_1 + 0x18);
      func_0x00789ea0();
      if (uVar1 == 0) {
        uVar1 = param_3;
        func_0x00789620();
        _objc_alloc_init();
        *(long *)(uVar1 + 0x20) = param_1;
        _objc_retain();
        *(ulong *)(uVar1 + 0x30) = param_3;
        if (*(long *)(param_1 + 0x18) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
          _objc_alloc_init();
          *(undefined **)(param_1 + 0x18) = puVar2;
        }
        func_0x0078f4a0();
        _objc_release(uVar1);
      }
      _os_unfair_lock_unlock(param_1 + 0x38);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 00764e8c; end: 00764f2b;  */

void FUN_00764e8c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00780be0(param_2);
  _objc_opt_isKindOfClass(param_1,param_2);
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if ((param_1 & 1) == 0) {
    func_0x00791840();
    _objc_opt_class();
    func_0x00780be0();
    func_0x0078ad40(puVar1);
  }
  return;
}



/* Entry: 00764f2c; end: 00764f33; -[GPBMessage getExistingExtension:] */

void FUN_00764f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKey__00abd4b8);
  return;
}



/* Entry: 00764f34; end: 00764f53; -[GPBMessage hasExtension:] */

bool FUN_00764f34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar1);
  return lVar1 != 0;
}



/* Entry: 00764f54; end: 00764f5b; -[GPBMessage extensionsCurrentlySet] */

void FUN_00764f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077eaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_allKeys_00aba7b0);
  return;
}



/* Entry: 00764f5c; end: 0076508b; -[GPBMessage writeExtensionsToCodedOutputStream:range:sortedExtensions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00764f5c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                 long param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = auStack_e8;
  lVar11 = param_5;
  func_0x00780ea0();
  lVar13 = 0;
  if (lVar11 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_5);
        }
        lVar14 = *(long *)(lStack_128 + lVar16 * 8);
        lVar13 = lVar14;
        func_0x00783260();
        if ((uint)param_4 <= (uint)lVar13) {
          if ((uint)((ulong)param_4 >> 0x20) <= (uint)lVar13) goto LAB_00765050;
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          func_0x00789ea0(uVar4);
          puVar7 = (undefined8 *)param_3;
          FUN_00761378(lVar14,uVar4);
        }
        lVar16 = lVar16 + 1;
      } while (lVar11 != lVar16);
      puVar5 = auStack_e8;
      lVar11 = param_5;
      puVar7 = &uStack_130;
      func_0x00780ea0();
      lVar13 = 0;
    } while (lVar11 != 0);
  }
LAB_00765050:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00780310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(lVar13,PTR_s_clearExtension__00abadb8,puVar7);
    return;
  }
  FUN_00764e8c(lVar13,puVar7);
  puVar5 = (undefined1 *)puVar7;
  func_0x00787c60();
  if ((int)puVar5 != 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  if (*(long *)(lVar13 + 0x10) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(lVar13 + 0x10) = puVar6;
  }
  func_0x0078f4a0();
  if ((*(byte *)(*(long *)((long)puVar7 + 8) + 0x2c) - 0xf < 2) &&
     (func_0x00787c60(), ((ulong)puVar7 & 1) == 0)) {
    uVar4 = *(undefined8 *)(lVar13 + 0x18);
    func_0x00789ea0(uVar4);
    _objc_retain();
    func_0x0078b4a0(*(undefined8 *)(lVar13 + 0x18));
    FUN_007627b0(uVar4);
    _objc_release(uVar4);
  }
FUN_0076248c:
  do {
    lVar11 = *(long *)(lVar13 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar15 = *(long *)(lVar13 + 0x28);
    if (lVar15 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(lVar13 + 0x30));
      return;
    }
    _objc_retain();
    lVar16 = *(long *)(lVar15 + 8);
    bVar1 = *(byte *)(lVar16 + 0x1e);
    uVar2 = *(ushort *)(lVar16 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar15 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar15 + 0x10),*(undefined4 *)(lVar16 + 0x14),
                      *(undefined4 *)(lVar16 + 0x10));
      uVar2 = *(ushort *)(lVar16 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar15 = lVar13, func_0x007882e0(), lVar15 != 0)) {
      uVar9 = *(uint *)(lVar16 + 0x14);
      lVar15 = *(long *)(lVar11 + 0x40);
      if ((int)uVar9 < 0) {
        uVar10 = 0;
        if (lVar13 != 0) {
          uVar10 = *(undefined4 *)(lVar16 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar12 = (ulong)(uVar9 >> 5);
      uVar9 = 1 << (ulong)(uVar9 & 0x1f);
      if (lVar13 == 0) goto LAB_0076c448;
      *(uint *)(lVar15 + uVar12 * 4) = *(uint *)(lVar15 + uVar12 * 4) | uVar9;
    }
    else {
      _objc_release(lVar13);
      uVar9 = *(uint *)(lVar16 + 0x14);
      lVar15 = *(long *)(lVar11 + 0x40);
      if ((int)uVar9 < 0) {
        lVar13 = 0;
        uVar10 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar15 + (ulong)-uVar9 * 4) = uVar10;
      }
      else {
        uVar12 = (ulong)(uVar9 >> 5);
        uVar9 = 1 << (ulong)(uVar9 & 0x1f);
LAB_0076c448:
        lVar13 = 0;
        *(uint *)(lVar15 + uVar12 * 4) = *(uint *)(lVar15 + uVar12 * 4) & (uVar9 ^ 0xffffffff);
      }
    }
    uVar12 = *(ulong *)(lVar15 + (ulong)*(uint *)(lVar16 + 0x18));
    *(long *)(lVar15 + (ulong)*(uint *)(lVar16 + 0x18)) = lVar13;
    lVar13 = lVar11;
  } while (uVar12 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar12 + 0x20) == lVar11)) {
    FUN_007627b0(uVar12);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar12 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar16 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar16 + 0x18)) = lVar13;
  lVar13 = lVar11;
  if (uVar12 == 0) goto FUN_0076248c;
  lVar13 = lVar15;
  func_0x00783280();
  uVar8 = uVar12;
  if ((int)lVar13 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar12 + 8) == lVar11) {
        *(undefined8 *)(uVar12 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar6 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar12,puVar6);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar15 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar6 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar12,puVar6);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar8 & 1) != 0) && (*(long *)(uVar12 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar12 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar12);
  lVar13 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 0076508c; end: 00765183; -[GPBMessage setExtension:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076508c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00780310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_clearExtension__00abadb8,param_3);
    return;
  }
  FUN_00764e8c(param_1,param_3);
  uVar12 = param_3;
  func_0x00787c60();
  if ((int)uVar12 != 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(param_1 + 0x10) = puVar4;
  }
  func_0x0078f4a0();
  if ((*(byte *)(*(long *)(param_3 + 8) + 0x2c) - 0xf < 2) &&
     (func_0x00787c60(), (param_3 & 1) == 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00789ea0(uVar5);
    _objc_retain();
    func_0x0078b4a0(*(undefined8 *)(param_1 + 0x18));
    FUN_007627b0(uVar5);
    _objc_release(uVar5);
  }
FUN_0076248c:
  do {
    lVar9 = *(long *)(param_1 + 0x20);
    if (lVar9 == 0) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x28);
    if (lVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar9,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar11 = *(long *)(lVar10 + 8);
    bVar1 = *(byte *)(lVar11 + 0x1e);
    uVar2 = *(ushort *)(lVar11 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar10 + 0x10) != 0) {
      func_0x0076c1a8(lVar9,*(long *)(lVar10 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                      *(undefined4 *)(lVar11 + 0x10));
      uVar2 = *(ushort *)(lVar11 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar10 = param_1, func_0x007882e0(), lVar10 != 0)) {
      uVar7 = *(uint *)(lVar11 + 0x14);
      lVar10 = *(long *)(lVar9 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar11 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar12 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar10 + uVar12 * 4) = *(uint *)(lVar10 + uVar12 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar11 + 0x14);
      lVar10 = *(long *)(lVar9 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar10 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar12 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar10 + uVar12 * 4) = *(uint *)(lVar10 + uVar12 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar12 = *(ulong *)(lVar10 + (ulong)*(uint *)(lVar11 + 0x18));
    *(long *)(lVar10 + (ulong)*(uint *)(lVar11 + 0x18)) = param_1;
    param_1 = lVar9;
  } while (uVar12 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar12 + 0x20) == lVar9)) {
    FUN_007627b0(uVar12);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar12 = *(ulong *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(lVar11 + 0x18));
  *(long *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(lVar11 + 0x18)) = param_1;
  param_1 = lVar9;
  if (uVar12 == 0) goto FUN_0076248c;
  lVar11 = lVar10;
  func_0x00783280();
  uVar6 = uVar12;
  if ((int)lVar11 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar12 + 8) == lVar9) {
        *(undefined8 *)(uVar12 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar12,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar10 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar12,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar6 & 1) != 0) && (*(long *)(uVar12 + (long)iVar3) == lVar9)) {
    *(undefined8 *)(uVar12 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar12);
  param_1 = lVar9;
  goto FUN_0076248c;
}



/* Entry: 00765184; end: 0076523b; -[GPBMessage addExtension:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00765184(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_00764e8c(param_1,param_3);
  func_0x00787c60();
  if ((param_3 & 1) == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  puVar4 = *(undefined **)(param_1 + 0x10);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(param_1 + 0x10) = puVar4;
  }
  func_0x00789ea0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    func_0x0078f4a0(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0077e720(puVar4);
FUN_0076248c:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar8,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x0076c1a8(lVar8,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_1, func_0x007882e0(), lVar9 != 0)) {
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar11 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar6;
    }
    else {
      _objc_release(param_1);
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar9 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar11 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar11 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar8)) {
    FUN_007627b0(uVar11);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar11 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar11 == 0) goto FUN_0076248c;
  lVar10 = lVar9;
  func_0x00783280();
  uVar5 = uVar11;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar11 + 8) == lVar8) {
        *(undefined8 *)(uVar11 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar11 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar11);
  param_1 = lVar8;
  goto FUN_0076248c;
}



/* Entry: 0076523c; end: 007652cf; -[GPBMessage setExtension:index:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076523c(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_00764e8c(param_1,param_3);
  func_0x00787c60();
  if ((param_3 & 1) == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc_init();
    *(undefined **)(param_1 + 0x10) = puVar4;
  }
  func_0x00789ea0();
  func_0x0078b5c0();
FUN_0076248c:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar8,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x0076c1a8(lVar8,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_1, func_0x007882e0(), lVar9 != 0)) {
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar11 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar6;
    }
    else {
      _objc_release(param_1);
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar9 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar11 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar11 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar8)) {
    FUN_007627b0(uVar11);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar11 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar11 == 0) goto FUN_0076248c;
  lVar10 = lVar9;
  func_0x00783280();
  uVar5 = uVar11;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar11 + 8) == lVar8) {
        *(undefined8 *)(uVar11 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar11 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar11);
  param_1 = lVar8;
  goto FUN_0076248c;
}



/* Entry: 007652d0; end: 00765323; -[GPBMessage clearExtension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007652d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_00764e8c(param_1,param_3);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00789ea0();
  if (lVar4 == 0) {
    return;
  }
  func_0x0078b4a0(*(undefined8 *)(param_1 + 0x10));
FUN_0076248c:
  do {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar4,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x0076c1a8(lVar4,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_1, func_0x007882e0(), lVar9 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar4 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar11 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar7;
    }
    else {
      _objc_release(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar4 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar9 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar11 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar4;
  } while (uVar11 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar4)) {
    FUN_007627b0(uVar11);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar11 = *(ulong *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar4;
  if (uVar11 == 0) goto FUN_0076248c;
  lVar10 = lVar9;
  func_0x00783280();
  uVar6 = uVar11;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar11 + 8) == lVar4) {
        *(undefined8 *)(uVar11 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar5 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar11,puVar5);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar5 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar11,puVar5);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar6 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar4)) {
    *(undefined8 *)(uVar11 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar11);
  param_1 = lVar4;
  goto FUN_0076248c;
}



/* Entry: 00765324; end: 007653c7; -[GPBMessage mergeFromData:extensionRegistry:] */

/* WARNING: Removing unreachable block (ram,0x00765394) */

void FUN_00765324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3940;
  _objc_alloc(PTR_PTR_00ac3940);
  func_0x007851c0();
  func_0x00789260(param_1,param_2,puVar1,param_4);
  func_0x007801c0(puVar1,param_2,0);
  _objc_release(puVar1);
  return;
}



/* Entry: 007653c8; end: 0076548b; -[GPBMessage mergeFromData:extensionRegistry:error:] */

undefined8
FUN_007653c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3940;
  _objc_alloc(PTR_PTR_00ac3940);
  func_0x007851c0();
  func_0x00789260(param_1,param_2,puVar1,param_4);
  func_0x007801c0(puVar1,param_2,0);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  _objc_release(puVar1);
  return 1;
}



/* Entry: 0076548c; end: 00765497; +[GPBMessage parseFromData:error:] */

void FUN_0076548c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0078a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_parseFromData_extensionRegistry__00abd5e0,param_3,0,param_4);
  return;
}



/* Entry: 00765498; end: 007654d7; +[GPBMessage parseFromData:extensionRegistry:error:] */

void FUN_00765498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _objc_alloc();
  func_0x00785220(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 007654d8; end: 00765517; +[GPBMessage parseFromCodedInputStream:extensionRegistry:error:] */

void FUN_007654d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _objc_alloc();
  func_0x00784fe0(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 00765518; end: 007655eb; +[GPBMessage parseDelimitedFromCodedInputStream:extensionRegistry:error:] */

long FUN_00765518(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  if ((*(long *)(param_3 + 0x18) != *(long *)(param_3 + 0x10)) &&
     (*(long *)(param_3 + 0x18) != *(long *)(param_3 + 0x20))) {
    param_3 = param_3 + 8;
    func_0x0073f3c8(param_3);
    func_0x0078a340(param_1,param_2,param_3,param_4,param_5);
    _objc_release(param_3);
    if ((param_5 != (undefined8 *)0x0) && (param_1 != 0)) {
      *param_5 = 0;
    }
    return param_1;
  }
  _objc_alloc_init(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return param_1;
}



/* Entry: 007655ec; end: 007655f3; -[GPBMessage unknownFields] */

undefined8 FUN_007655ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 007655f4; end: 0076563f; -[GPBMessage setUnknownFields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007655f4(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_3 == *(long *)(param_1 + 8)) {
    return;
  }
  _objc_release();
  func_0x00780e20();
  *(long *)(param_1 + 8) = param_3;
FUN_0076248c:
  do {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar8,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x0076c1a8(lVar8,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_1, func_0x007882e0(), lVar9 != 0)) {
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        uVar7 = 0;
        if (param_1 != 0) {
          uVar7 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar11 = (ulong)(uVar6 >> 5);
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if (param_1 == 0) goto LAB_0076c448;
      *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar6;
    }
    else {
      _objc_release(param_1);
      uVar6 = *(uint *)(lVar10 + 0x14);
      lVar9 = *(long *)(lVar8 + 0x40);
      if ((int)uVar6 < 0) {
        param_1 = 0;
        uVar7 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar9 + (ulong)-uVar6 * 4) = uVar7;
      }
      else {
        uVar11 = (ulong)(uVar6 >> 5);
        uVar6 = 1 << (ulong)(uVar6 & 0x1f);
LAB_0076c448:
        param_1 = 0;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar6 ^ 0xffffffff);
      }
    }
    uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar8;
  } while (uVar11 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar8)) {
    FUN_007627b0(uVar11);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar11 = *(ulong *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar8;
  if (uVar11 == 0) goto FUN_0076248c;
  lVar10 = lVar9;
  func_0x00783280();
  uVar5 = uVar11;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar11 + 8) == lVar8) {
        *(undefined8 *)(uVar11 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar11,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar8)) {
    *(undefined8 *)(uVar11 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar11);
  param_1 = lVar8;
  goto FUN_0076248c;
}



/* Entry: 00765640; end: 007657db; -[GPBMessage parseMessageSet:extensionRegistry:] */

/* WARNING: Removing unreachable block (ram,0x007657a8) */

void FUN_00765640(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = 0;
  lVar6 = 0;
  lVar7 = 0;
  do {
    while( true ) {
      while( true ) {
        iVar1 = (int)param_3 + 8;
        FUN_0073f0e4();
        if (iVar1 == 0) goto LAB_007656f0;
        if (iVar1 != 0x1a) break;
        lVar6 = param_3 + 8;
        func_0x0073f3c8();
        _objc_autorelease();
      }
      if (iVar1 != 0x10) break;
      lVar3 = param_3 + 8;
      FUN_0073f060();
      lVar7 = 0;
      if ((int)lVar3 != 0) {
        func_0x00781ea0(param_1);
        lVar5 = param_4;
        func_0x00782fe0();
        lVar7 = lVar3;
      }
    }
    uVar2 = param_3;
    func_0x00791940();
  } while ((uVar2 & 1) != 0);
LAB_007656f0:
  func_0x007801c0(param_3);
  if ((lVar6 != 0) && ((int)lVar7 != 0)) {
    if (lVar5 == 0) {
      FUN_00765938(param_1);
      puVar4 = PTR__OBJC_CLASS___NSData_00ac2b10;
      func_0x007816e0(PTR__OBJC_CLASS___NSData_00ac2b10);
                    /* WARNING: Could not recover jumptable at 0x007892f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_1,PTR_s_mergeMessageSetMessage_data__00abd1c8,lVar7,puVar4);
      return;
    }
    puVar4 = PTR_PTR_00ac3940;
    _objc_alloc(PTR_PTR_00ac3940);
    func_0x007851c0();
    lVar6 = lVar5;
    func_0x00787b80(lVar5);
    FUN_007657dc(lVar5,lVar6,puVar4,param_4,param_1);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 007657dc; end: 00765937;  */

void FUN_007657dc(code *param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *unaff_x22;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if ((int)param_2 != 0) {
    iVar4 = (int)param_3 + 8;
    FUN_0073f060();
    uVar5 = *(ulong *)(param_3 + 0x18);
    uVar2 = *(ulong *)(param_3 + 0x20);
    uVar1 = uVar5 + (long)iVar4;
    if (uVar2 < uVar1) {
      FUN_0073f16c(0xffffffffffffff9a,0);
      uVar5 = *(ulong *)(param_3 + 0x18);
    }
    *(ulong *)(param_3 + 0x20) = uVar1;
    if (uVar1 != uVar5) {
      do {
        FUN_00769294(param_1,param_5,param_3,param_4,1,0);
      } while (*(long *)(param_3 + 0x20) != *(long *)(param_3 + 0x18));
    }
    *(ulong *)(param_3 + 0x20) = uVar2;
    return;
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 8) + 0x2d);
  if (*(byte *)(*(long *)(param_1 + 8) + 0x2c) - 0xf < 2) {
    if ((bVar3 & 1) == 0) {
      pcVar7 = param_5;
      func_0x00783ec0(param_5,param_2,param_1);
      if (pcVar7 != (code *)0x0) goto LAB_0076590c;
      pcVar7 = param_1;
      func_0x00789620(param_1);
      func_0x00781ea0();
      func_0x00789340();
      _objc_alloc_init();
      func_0x0078de00(param_5);
    }
    else {
      pcVar7 = param_1;
      func_0x00789620(param_1);
      func_0x00781ea0();
      func_0x00789340();
      _objc_alloc_init();
      func_0x0077e500(param_5);
    }
    _objc_release(pcVar7);
  }
  else {
    pcVar7 = (code *)0x0;
  }
LAB_0076590c:
  lVar6 = *(long *)(param_1 + 8);
  switch(*(undefined1 *)(lVar6 + 0x2c)) {
  case 0:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    func_0x00784da0();
    break;
  case 1:
    func_0x0073f2fc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x007694b4;
  case 2:
    func_0x0073f2fc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x00769504;
  case 3:
    func_0x0073f2fc(param_3 + 8,4);
    uVar8 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    func_0x00785680(uVar8);
    break;
  case 4:
    func_0x0073f2fc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x007693b0;
  case 5:
    func_0x0073f2fc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x007695b8;
  case 6:
    func_0x0073f2fc(param_3 + 8,8);
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    func_0x007853e0(uVar9);
    break;
  case 7:
    FUN_0073f060(param_3 + 8);
    goto code_r0x007694f4;
  case 8:
    FUN_0073f060(param_3 + 8);
    goto code_r0x007695a8;
  case 9:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x00769504;
  case 10:
    FUN_0073f060(param_3 + 8);
code_r0x007695a8:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x007695b8:
    func_0x00785b60();
    break;
  case 0xb:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x007694b4:
    func_0x00786ca0();
    break;
  case 0xc:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x007693b0:
    func_0x00786cc0();
    break;
  case 0xd:
    unaff_x22 = (undefined *)(param_3 + 8);
    func_0x0073f358();
    break;
  case 0xe:
    unaff_x22 = (undefined *)(param_3 + 8);
    FUN_0073f260();
    break;
  case 0xf:
    if ((*(byte *)(lVar6 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00789270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pcVar7,PTR_s_mergeFromCodedInputStream_extens_00abd1a8,param_3,param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0078af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_readMessage_extensionRegistry__00abd8e8,pcVar7,param_4);
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0078af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_readGroup_message_extensionRegis_00abd8d8,*(undefined4 *)(lVar6 + 0x28)
               ,pcVar7);
    return;
  case 0x11:
    iVar4 = (int)param_3 + 8;
    FUN_0073f060();
    func_0x00782a40();
    pcVar7 = param_1;
    func_0x00787580();
    if ((int)pcVar7 != 0) {
      func_0x00782a60();
      (*param_1)();
      if (iVar4 == 0) {
        FUN_00765938(param_5);
                    /* WARNING: Could not recover jumptable at 0x00789330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)();
        return;
      }
    }
code_r0x007694f4:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x00769504:
    func_0x00785980();
    break;
  default:
    goto LAB_007695c4;
  }
  if (unaff_x22 == (undefined *)0x0) {
    return;
  }
LAB_007695c4:
  if ((bVar3 & 1) == 0) {
    func_0x0078de00(param_5);
  }
  else {
    func_0x0077e500();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x22);
  return;
}



/* Entry: 00765938; end: 00765977;  */

long FUN_00765938(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_00ac3948;
    _objc_alloc_init();
    *(undefined **)(param_1 + 8) = puVar2;
    FUN_0076248c(param_1);
    lVar1 = *(long *)(param_1 + 8);
  }
  return lVar1;
}



/* Entry: 00765978; end: 00765aab; -[GPBMessage parseUnknownField:extensionRegistry:tag:] */

void FUN_00765978(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 uint param_5)

{
  int iVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00781ea0();
  iVar1 = (int)uVar2;
  uVar3 = param_4;
  func_0x00782fe0();
  if (uVar3 == 0) {
    func_0x00787f80();
    if ((param_5 == 0xb) && (iVar1 != 0)) {
      func_0x0078a360(param_1);
      return;
    }
LAB_00765a60:
    puVar4 = PTR_PTR_00ac3948;
    func_0x00787900();
    if ((int)puVar4 != 0) {
      FUN_00765938(param_1);
                    /* WARNING: Could not recover jumptable at 0x00789210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)();
      return;
    }
  }
  else {
    uVar5 = uVar3;
    func_0x00793be0();
    if ((uint)uVar5 == (param_5 & 7)) {
      uVar5 = uVar3;
      func_0x00787b80(uVar3);
    }
    else {
      uVar5 = uVar3;
      func_0x00787c60();
      if ((((int)uVar5 == 0) || (*(byte *)(*(long *)(uVar3 + 8) + 0x2c) - 0xd < 4)) ||
         (uVar5 = uVar3, func_0x0077ec60(), (uint)uVar5 != (param_5 & 7))) goto LAB_00765a60;
      uVar5 = uVar3;
      func_0x00787b80(uVar3);
      uVar5 = (ulong)((uint)uVar5 ^ 1);
    }
    FUN_007657dc(uVar3,uVar5,param_3,param_4,param_1);
  }
  return;
}



/* Entry: 00765aac; end: 00765ad7; -[GPBMessage addUnknownMapEntry:value:] */

void FUN_00765aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00765938();
                    /* WARNING: Could not recover jumptable at 0x0077e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_addUnknownMapEntry_value__00aba758,param_3,param_4);
  return;
}



/* Entry: 00765ad8; end: 0076601f; -[GPBMessage mergeFromCodedInputStream:extensionRegistry:] */

void FUN_00765ad8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  lVar6 = param_1;
  func_0x00781ea0();
  uVar8 = *(ulong *)(lVar6 + 8);
  uVar1 = uVar8;
  func_0x00780e80();
  lVar6 = param_3 + 8;
  FUN_0073f0e4();
  if ((int)lVar6 != 0) {
    uVar9 = 0;
    do {
      uVar4 = uVar1;
      if (uVar1 != 0) {
LAB_00765b40:
        if (uVar1 <= uVar9) {
          uVar9 = 0;
        }
        uVar2 = uVar8;
        func_0x00789e20();
        lVar5 = *(long *)(uVar2 + 8);
        if ((*(ushort *)(lVar5 + 0x1c) & 0xf04) == 0) {
          uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)*(byte *)(lVar5 + 0x1e) * 4);
        }
        else {
          uVar7 = 2;
        }
        if ((uVar7 | *(int *)(lVar5 + 0x10) << 3) != (uint)lVar6) goto code_r0x00765b88;
        uVar4 = uVar2;
        func_0x00783280();
        if ((int)uVar4 == 1) {
          uVar4 = uVar2;
          func_0x00787b80();
          if ((int)uVar4 != 0) goto LAB_00765c84;
          goto LAB_00765cd0;
        }
        if ((int)uVar4 != 0) {
          FUN_00766514(param_1,uVar2);
          func_0x0078af40(param_3);
          goto LAB_00765ce4;
        }
        lVar6 = *(long *)(uVar2 + 8);
        switch(*(undefined1 *)(lVar6 + 0x1e)) {
        case 0:
          lVar6 = param_3 + 8;
          FUN_0073f060(lVar6);
          FUN_0076c740(param_1,uVar2,lVar6 != 0);
          goto LAB_00765c94;
        case 1:
          func_0x0073f2fc(param_3 + 8,4);
          uVar4 = (ulong)*(uint *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          goto code_r0x00765e64;
        case 2:
          func_0x0073f2fc(param_3 + 8,4);
          uVar7 = *(uint *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          goto code_r0x00765dbc;
        case 3:
          func_0x0073f2fc(param_3 + 8,4);
          uVar10 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          FUN_0076cbdc(uVar10,param_1,uVar2);
          goto LAB_00765c94;
        case 4:
          func_0x0073f2fc(param_3 + 8,8);
          lVar6 = *(long *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          goto code_r0x00765d78;
        case 5:
          func_0x0073f2fc(param_3 + 8,8);
          uVar4 = *(ulong *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          goto code_r0x00765f38;
        case 6:
          func_0x0073f2fc(param_3 + 8,8);
          uVar11 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          FUN_0076cd08(uVar11,param_1,uVar2);
          goto LAB_00765c94;
        case 7:
          uVar4 = param_3 + 8;
          FUN_0073f060(uVar4);
          break;
        case 8:
          uVar4 = param_3 + 8;
          FUN_0073f060(uVar4);
          goto code_r0x00765f38;
        case 9:
          lVar6 = param_3 + 8;
          FUN_0073f060(lVar6);
          uVar7 = -((uint)lVar6 & 1) ^ (uint)lVar6 >> 1;
code_r0x00765dbc:
          uVar4 = (ulong)uVar7;
          break;
        case 10:
          uVar4 = param_3 + 8;
          FUN_0073f060(uVar4);
          uVar4 = -(uVar4 & 1) ^ uVar4 >> 1;
code_r0x00765f38:
          FUN_0076c9a0(param_1,uVar2,uVar4);
          goto LAB_00765c94;
        case 0xb:
          uVar4 = param_3 + 8;
          FUN_0073f060(uVar4);
code_r0x00765e64:
          FUN_0076c88c(param_1,uVar2,uVar4);
          goto LAB_00765c94;
        case 0xc:
          lVar6 = param_3 + 8;
          FUN_0073f060(lVar6);
code_r0x00765d78:
          FUN_0076cab4(param_1,uVar2,lVar6);
          goto LAB_00765c94;
        case 0xd:
          lVar6 = param_3 + 8;
          func_0x0073f358(lVar6);
          goto code_r0x00765ed4;
        case 0xe:
          lVar6 = param_3 + 8;
          FUN_0073f260(lVar6);
code_r0x00765ed4:
          FUN_0076c2c4(param_1,uVar2,lVar6);
          goto LAB_00765c94;
        case 0xf:
          uVar7 = *(uint *)(lVar6 + 0x14);
          if ((int)uVar7 < 0) {
            if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar7 * 4) != *(int *)(lVar6 + 0x10))
            goto code_r0x00765fb0;
          }
          else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar7 >> 5) * 4) >>
                    (ulong)(uVar7 & 0x1f) & 1) == 0) {
code_r0x00765fb0:
            uVar4 = uVar2;
            func_0x00789620(uVar2);
            _objc_alloc_init();
            FUN_0076c2c4(param_1,uVar2,uVar4);
          }
          func_0x0078af60(param_3);
          goto LAB_00765c94;
        case 0x10:
          uVar7 = *(uint *)(lVar6 + 0x14);
          if ((int)uVar7 < 0) {
            if (*(int *)(*(long *)(param_1 + 0x40) + (ulong)-uVar7 * 4) != *(int *)(lVar6 + 0x10))
            goto code_r0x00765f5c;
          }
          else if ((*(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uVar7 >> 5) * 4) >>
                    (ulong)(uVar7 & 0x1f) & 1) == 0) {
code_r0x00765f5c:
            uVar4 = uVar2;
            func_0x00789620(uVar2);
            _objc_alloc_init();
            FUN_0076c2c4(param_1,uVar2,uVar4);
          }
          func_0x0078af20(param_3);
          goto LAB_00765c94;
        case 0x11:
          uVar4 = param_3 + 8;
          FUN_0073f060(uVar4);
          if (((*(ushort *)(*(long *)(uVar2 + 8) + 0x1c) >> 0xc & 1) != 0) &&
             (uVar3 = uVar2, func_0x00787f40(), (int)uVar3 == 0)) {
            FUN_00765938(param_1);
            func_0x00789320();
            goto LAB_00765c94;
          }
          break;
        default:
          goto LAB_00765c94;
        }
        FUN_0076c5f8(param_1,uVar2,uVar4);
        goto LAB_00765c94;
      }
LAB_00765c00:
      lVar6 = param_1;
      func_0x0078a380();
      if ((int)lVar6 == 0) {
        return;
      }
LAB_00765ce4:
      lVar6 = param_3 + 8;
      FUN_0073f0e4();
    } while ((int)lVar6 != 0);
  }
  return;
code_r0x00765b88:
  uVar9 = uVar9 + 1;
  uVar4 = uVar4 - 1;
  uVar3 = uVar1;
  if (uVar4 == 0) goto LAB_00765b98;
  goto LAB_00765b40;
LAB_00765b98:
  if (uVar1 <= uVar9) {
    uVar9 = 0;
  }
  uVar2 = uVar8;
  func_0x00789e20();
  uVar4 = uVar2;
  func_0x00783280();
  if ((int)uVar4 != 1) goto LAB_00765bf4;
  lVar5 = *(long *)(uVar2 + 8);
  if (*(byte *)(lVar5 + 0x1e) - 0xd < 4) goto LAB_00765bf4;
  if ((*(ushort *)(lVar5 + 0x1c) >> 2 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = *(uint *)(&UNK_0083d4ec + (ulong)(uint)*(byte *)(lVar5 + 0x1e) * 4);
  }
  if ((uVar7 | *(int *)(lVar5 + 0x10) << 3) != (uint)lVar6) goto LAB_00765bf4;
  uVar4 = uVar2;
  func_0x00787b80();
  if ((uVar4 & 1) == 0) {
LAB_00765c84:
    FUN_00766020(param_1,uVar2,param_3);
LAB_00765c94:
    uVar9 = uVar9 + 1;
  }
  else {
LAB_00765cd0:
    FUN_00766234(param_1,uVar2,param_3,param_4);
  }
  goto LAB_00765ce4;
LAB_00765bf4:
  uVar9 = uVar9 + 1;
  uVar3 = uVar3 - 1;
  if (uVar3 == 0) goto LAB_00765c00;
  goto LAB_00765b98;
}



/* Entry: 00766020; end: 00766233;  */

void FUN_00766020(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
  uVar5 = param_1;
  FUN_00766be4();
  iVar4 = (int)param_3 + 8;
  FUN_0073f060();
  uVar7 = *(ulong *)(param_3 + 0x18);
  uVar2 = *(ulong *)(param_3 + 0x20);
  uVar1 = uVar7 + (long)iVar4;
  if (uVar2 < uVar1) {
    FUN_0073f16c(0xffffffffffffff9a,0);
    uVar7 = *(ulong *)(param_3 + 0x18);
  }
  *(ulong *)(param_3 + 0x20) = uVar1;
  if (uVar1 != uVar7) {
    do {
      switch(uVar3) {
      case 0:
        FUN_0073f060(param_3 + 8);
        goto code_r0x007661ac;
      case 1:
      case 2:
        func_0x0073f2fc(param_3 + 8,4);
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
        goto code_r0x007661ac;
      case 3:
        func_0x0073f2fc(param_3 + 8,4);
        uVar8 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
        func_0x0077e9c0(uVar8,uVar5);
        break;
      case 4:
      case 5:
        func_0x0073f2fc(param_3 + 8,8);
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
        goto code_r0x00766178;
      case 6:
        func_0x0073f2fc(param_3 + 8,8);
        uVar9 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
        func_0x0077e9c0(uVar9,uVar5);
        break;
      case 7:
      case 0xb:
        FUN_0073f060(param_3 + 8);
        goto code_r0x007661ac;
      case 8:
      case 0xc:
        FUN_0073f060(param_3 + 8);
        goto code_r0x00766178;
      case 9:
        FUN_0073f060(param_3 + 8);
code_r0x007661ac:
        func_0x0077e9c0(uVar5);
        break;
      case 10:
        FUN_0073f060(param_3 + 8);
code_r0x00766178:
        func_0x0077e9c0(uVar5);
        break;
      case 0x11:
        FUN_0073f060(param_3 + 8);
        if (((*(ushort *)(*(long *)(param_2 + 8) + 0x1c) >> 0xc & 1) == 0) ||
           (lVar6 = param_2, func_0x00787f40(), (int)lVar6 != 0)) {
          func_0x0077e860(uVar5);
        }
        else {
          FUN_00765938(param_1);
          func_0x00789320();
        }
      }
    } while (*(long *)(param_3 + 0x20) != *(long *)(param_3 + 0x18));
  }
  *(ulong *)(param_3 + 0x20) = uVar2;
  return;
}



/* Entry: 00766234; end: 00766513;  */

void FUN_00766234(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_1;
  FUN_00766be4();
  switch(*(undefined1 *)(*(long *)(param_2 + 8) + 0x1e)) {
  case 0:
    FUN_0073f060(param_3 + 8);
    break;
  case 1:
  case 2:
    func_0x0073f2fc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    break;
  case 3:
    func_0x0073f2fc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    break;
  case 4:
  case 5:
    func_0x0073f2fc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    break;
  case 6:
    func_0x0073f2fc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    break;
  case 7:
  case 0xb:
    FUN_0073f060(param_3 + 8);
    break;
  case 8:
  case 0xc:
    FUN_0073f060(param_3 + 8);
    break;
  case 9:
    FUN_0073f060(param_3 + 8);
    break;
  case 10:
    FUN_0073f060(param_3 + 8);
    break;
  case 0xd:
    param_3 = param_3 + 8;
    func_0x0073f358(param_3);
    goto code_r0x007664b0;
  case 0xe:
    param_3 = param_3 + 8;
    FUN_0073f260(param_3);
code_r0x007664b0:
    func_0x0077e720(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(param_3);
    return;
  case 0xf:
    func_0x00789620(param_2);
    _objc_alloc_init();
    func_0x0077e720(uVar1);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0078af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_readMessage_extensionRegistry__00abd8e8,param_2,param_4);
    return;
  case 0x10:
    lVar2 = param_2;
    func_0x00789620(param_2);
    _objc_alloc_init();
    func_0x0077e720(uVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0078af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_readGroup_message_extensionRegis_00abd8d8,
               *(undefined4 *)(*(long *)(param_2 + 8) + 0x10),lVar2,param_4);
    return;
  case 0x11:
    param_3 = param_3 + 8;
    FUN_0073f060(param_3);
    if (((*(ushort *)(*(long *)(param_2 + 8) + 0x1c) >> 0xc & 1) != 0) &&
       (func_0x00787f40(), (int)param_2 == 0)) {
      FUN_00765938(param_1);
                    /* WARNING: Could not recover jumptable at 0x00789330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(uVar1,PTR_s_addRawValue__00aba710,param_3);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar1,PTR_s_addValue__00aba768);
  return;
}



/* Entry: 00766514; end: 00766577;  */

long FUN_00766514(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_2 + 8) + 0x18))
     , lVar1 == 0)) {
    lVar1 = param_2;
    FUN_00769664(param_2,0);
    FUN_0076c2c4(param_1,param_2,lVar1);
  }
  return lVar1;
}



/* Entry: 00766578; end: 00766be3; -[GPBMessage mergeFrom:] */

/* WARNING: Removing unreachable block (ram,0x007669a4) */
/* WARNING: Removing unreachable block (ram,0x0076666c) */
/* WARNING: Removing unreachable block (ram,0x00766a64) */

ulong FUN_00766578(ulong param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = param_1;
  _objc_opt_class();
  uVar11 = param_3;
  _objc_opt_class();
  func_0x00787ea0();
  if (((uVar8 & 1) == 0) && (func_0x00787ea0(), (uVar11 & 1) == 0)) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  FUN_0076248c(param_1);
  uVar8 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar9 = *(long *)(uVar8 + 8);
  lVar10 = lVar9;
  func_0x00780ea0();
  while (lVar10 != 0) {
    lVar12 = 0;
    do {
      uVar11 = *(ulong *)(lVar12 * 8);
      uVar8 = uVar11;
      func_0x00783280();
      if ((int)uVar8 == 1) {
        if ((*(long *)(param_3 + 0x40) != 0) &&
           (*(long *)(*(long *)(param_3 + 0x40) + (ulong)*(uint *)(*(long *)(uVar11 + 8) + 0x18)) !=
            0)) {
          uVar6 = (uint)*(byte *)(*(long *)(uVar11 + 8) + 0x1e);
          if (uVar6 - 0xd < 4) {
            FUN_00766be4(param_1);
            func_0x0077e760();
            param_2 = uVar11;
          }
          else {
            FUN_00766be4(param_1);
            if (uVar6 == 0x11) {
              func_0x0077e8a0();
              param_2 = uVar11;
            }
            else {
              func_0x0077ea00();
              param_2 = uVar11;
            }
          }
        }
      }
      else if ((int)uVar8 == 0) {
        lVar4 = *(long *)(uVar11 + 8);
        uVar6 = *(uint *)(lVar4 + 0x14);
        if ((int)uVar6 < 0) {
          lVar5 = *(long *)(param_3 + 0x40);
          if (*(int *)(lVar5 + (ulong)-uVar6 * 4) == *(int *)(lVar4 + 0x10)) goto LAB_00766764;
        }
        else {
          lVar5 = *(long *)(param_3 + 0x40);
          if ((*(uint *)(lVar5 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0) {
LAB_00766764:
            switch(*(undefined1 *)(lVar4 + 0x1e)) {
            case 0:
              uVar8 = param_3;
              FUN_0076c6c0(param_3,uVar11);
              FUN_0076c740(param_1,uVar11,uVar8);
              param_2 = uVar11;
              break;
            case 1:
            case 0xb:
              uVar8 = param_3;
              FUN_0076c830(param_3,uVar11);
              FUN_0076c88c(param_1,uVar11,uVar8);
              param_2 = uVar11;
              break;
            case 2:
            case 7:
            case 9:
            case 0x11:
              uVar8 = param_3;
              FUN_0076c504(param_3,uVar11);
              FUN_0076c5f8(param_1,uVar11,uVar8);
              param_2 = uVar11;
              break;
            case 3:
              FUN_0076cb7c(param_3,uVar11);
              FUN_0076cbdc(param_1);
              param_2 = uVar11;
              break;
            case 4:
            case 0xc:
              uVar8 = param_3;
              FUN_0076ca68(param_3,uVar11);
              FUN_0076cab4(param_1,uVar11,uVar8);
              param_2 = uVar11;
              break;
            case 5:
            case 8:
            case 10:
              uVar8 = param_3;
              FUN_0076c954(param_3,uVar11);
              FUN_0076c9a0(param_1,uVar11,uVar8);
              param_2 = uVar11;
              break;
            case 6:
              FUN_0076cca8(param_3,uVar11);
              FUN_0076cd08(param_1);
              param_2 = uVar11;
              break;
            case 0xd:
            case 0xe:
              uVar2 = *(undefined8 *)(lVar5 + (ulong)*(uint *)(lVar4 + 0x18));
              _objc_retain(uVar2);
code_r0x007668e4:
              FUN_0076c2c4(param_1,uVar11,uVar2);
              param_2 = uVar11;
              break;
            case 0xf:
            case 0x10:
              uVar2 = *(undefined8 *)(lVar5 + (ulong)*(uint *)(lVar4 + 0x18));
              if ((int)uVar6 < 0) {
                lVar5 = *(long *)(param_1 + 0x40);
                if (*(int *)(lVar5 + (ulong)-uVar6 * 4) != *(int *)(lVar4 + 0x10))
                goto code_r0x007668dc;
              }
              else {
                lVar5 = *(long *)(param_1 + 0x40);
                if ((*(uint *)(lVar5 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0)
                {
code_r0x007668dc:
                  func_0x00780e20(uVar2);
                  goto code_r0x007668e4;
                }
              }
              func_0x00789220(*(undefined8 *)(lVar5 + (ulong)*(uint *)(lVar4 + 0x18)));
            }
          }
        }
      }
      else if ((*(long *)(param_3 + 0x40) != 0) &&
              (*(long *)(*(long *)(param_3 + 0x40) + (ulong)*(uint *)(*(long *)(uVar11 + 8) + 0x18))
               != 0)) {
        uVar8 = uVar11;
        func_0x00788e40();
        uVar6 = (uint)*(byte *)(*(long *)(uVar11 + 8) + 0x1e);
        if ((int)uVar8 - 0xdU < 4 && uVar6 - 0xd < 4) {
          FUN_00766514(param_1);
        }
        else {
          FUN_00766514(param_1);
          if (uVar6 == 0x11) {
            func_0x0077e840();
            param_2 = uVar11;
            goto LAB_007668f4;
          }
        }
        func_0x0077e4e0();
        param_2 = uVar11;
      }
LAB_007668f4:
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    lVar10 = lVar9;
    func_0x00780ea0();
  }
  lVar10 = *(long *)(param_1 + 8);
  func_0x00792fe0(param_3);
  if (lVar10 == 0) {
    func_0x00790e60(param_1);
  }
  else {
    func_0x00789300(lVar10);
  }
  lVar10 = *(long *)(param_3 + 0x10);
  func_0x00780e80();
  uVar8 = 0;
  if (lVar10 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar8 = *(ulong *)(param_3 + 0x10);
      param_2 = param_1;
      _NSZoneFromPointer();
      FUN_007630f4();
      *(ulong *)(param_1 + 0x10) = uVar8;
    }
    else {
      lVar9 = *(long *)(param_3 + 0x10);
      lVar10 = lVar9;
      func_0x00780ea0();
      uVar8 = 0;
      if (lVar10 != 0) {
        do {
          lVar12 = 0;
          do {
            uVar11 = *(ulong *)(lVar12 * 8);
            lVar4 = *(long *)(param_3 + 0x10);
            func_0x00789ea0();
            puVar1 = *(undefined **)(param_1 + 0x10);
            func_0x00789ea0();
            uVar6 = *(byte *)(*(long *)(uVar11 + 8) + 0x2c) - 0xf;
            uVar8 = uVar11;
            func_0x00787c60();
            if ((int)uVar8 == 0) {
              if (uVar6 < 2) {
                if (puVar1 == (undefined *)0x0) {
                  func_0x00780e20(lVar4);
                  func_0x0078f4a0(*(undefined8 *)(param_1 + 0x10));
                  _objc_release(lVar4);
                }
                else {
                  func_0x00789220(puVar1);
                }
                goto LAB_00766b20;
              }
              func_0x0078f4a0(*(undefined8 *)(param_1 + 0x10));
            }
            else {
              if (puVar1 == (undefined *)0x0) {
                puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
                _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
                func_0x0078f4a0(*(undefined8 *)(param_1 + 0x10));
                _objc_release(puVar1);
              }
              if (uVar6 < 2) {
                lVar5 = lVar4;
                func_0x00780ea0();
                while (lVar5 != 0) {
                  lVar7 = 0;
                  do {
                    uVar2 = *(undefined8 *)(lVar7 * 8);
                    func_0x00780e20(uVar2);
                    func_0x0077e720(puVar1);
                    _objc_release(uVar2);
                    lVar7 = lVar7 + 1;
                  } while (lVar5 != lVar7);
                  lVar5 = lVar4;
                  func_0x00780ea0();
                }
LAB_00766b20:
                func_0x00787c60();
                if ((uVar11 & 1) == 0) {
                  uVar2 = *(undefined8 *)(param_1 + 0x18);
                  func_0x00789ea0(uVar2);
                  _objc_retain();
                  func_0x0078b4a0(*(undefined8 *)(param_1 + 0x18));
                  FUN_007627b0(uVar2);
                  _objc_release(uVar2);
                }
              }
              else {
                func_0x0077e760(puVar1);
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 != lVar10);
          lVar10 = lVar9;
          func_0x00780ea0();
        } while (lVar10 != 0);
        uVar8 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
    if ((*(long *)(uVar8 + 0x40) == 0) ||
       (uVar11 = *(ulong *)(*(long *)(uVar8 + 0x40) +
                           (ulong)*(uint *)(*(long *)(param_2 + 8) + 0x18)), uVar11 == 0)) {
      uVar11 = param_2;
      FUN_00769aa0(param_2,0);
      FUN_0076c2c4(uVar8,param_2,uVar11);
    }
    return uVar11;
  }
  return uVar8;
}



/* Entry: 00766be4; end: 00766c47;  */

long FUN_00766be4(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_2 + 8) + 0x18))
     , lVar1 == 0)) {
    lVar1 = param_2;
    FUN_00769aa0(param_2,0);
    FUN_0076c2c4(param_1,param_2,lVar1);
  }
  return lVar1;
}



/* Entry: 00766c48; end: 00766f9b; -[GPBMessage isEqual:] */

/* WARNING: Removing unreachable block (ram,0x00767030) */
/* WARNING: Removing unreachable block (ram,0x00766d28) */

undefined * FUN_00766c48(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == param_1) {
LAB_00766f5c:
    puVar5 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___GPBMessage_00ac3920;
    _objc_opt_class(PTR__OBJC_CLASS___GPBMessage_00ac3920);
    uVar10 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((uVar10 & 1) != 0) {
      uVar10 = param_1;
      _objc_opt_class();
      func_0x00781ea0();
      uVar4 = param_3;
      _objc_opt_class();
      func_0x00781ea0();
      if (uVar4 == uVar10) {
        lVar14 = *(long *)(param_1 + 0x40);
        lVar17 = *(long *)(param_3 + 0x40);
        lVar15 = *(long *)(uVar10 + 8);
        lVar8 = lVar15;
        func_0x00780ea0();
        while (lVar8 != 0) {
          lVar9 = 0;
          do {
            lVar16 = *(long *)(*(long *)(lVar9 * 8) + 8);
            if ((*(ushort *)(lVar16 + 0x1c) & 0xf02) == 0) {
              uVar6 = *(uint *)(lVar16 + 0x14);
              if ((int)uVar6 < 0) {
                lVar11 = *(long *)(param_1 + 0x40);
                bVar2 = *(int *)(lVar11 + (ulong)-uVar6 * 4) == *(int *)(lVar16 + 0x10);
                lVar12 = *(long *)(param_3 + 0x40);
                bVar3 = *(int *)(lVar12 + (ulong)-uVar6 * 4) == *(int *)(lVar16 + 0x10);
              }
              else {
                uVar1 = 1 << (ulong)(uVar6 & 0x1f);
                lVar11 = *(long *)(param_1 + 0x40);
                uVar10 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
                bVar2 = (*(uint *)(lVar11 + uVar10) & uVar1) != 0;
                lVar12 = *(long *)(param_3 + 0x40);
                bVar3 = (*(uint *)(lVar12 + uVar10) & uVar1) != 0;
              }
              if (bVar2 == false || bVar3 == false) {
                if (bVar2 != bVar3) goto LAB_00766cc8;
              }
              else if (*(byte *)(lVar16 + 0x1e) < 0x12) {
                uVar6 = *(uint *)(lVar16 + 0x18);
                uVar10 = (ulong)uVar6;
                switch(*(byte *)(lVar16 + 0x1e)) {
                case 0:
                  if ((int)uVar6 < 0) {
                    bVar3 = *(int *)(lVar11 + (ulong)-uVar6 * 4) == 0;
                    bVar2 = *(int *)(lVar12 + (ulong)-uVar6 * 4) == 0;
                  }
                  else {
                    uVar1 = 1 << (ulong)(uVar6 & 0x1f);
                    uVar10 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
                    bVar3 = (*(uint *)(lVar11 + uVar10) & uVar1) != 0;
                    bVar2 = (*(uint *)(lVar12 + uVar10) & uVar1) != 0;
                  }
                  if (bVar3 != bVar2) goto LAB_00766cc8;
                  break;
                default:
                  if (*(int *)(lVar14 + uVar10) != *(int *)(lVar17 + uVar10)) goto LAB_00766cc8;
                  break;
                case 4:
                case 5:
                case 6:
                case 8:
                case 10:
                case 0xc:
                  if (*(long *)(lVar14 + uVar10) != *(long *)(lVar17 + uVar10)) goto LAB_00766cc8;
                  break;
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                  uVar10 = *(ulong *)(lVar14 + uVar10);
                  goto code_r0x00766dd4;
                }
              }
            }
            else {
              if (*(long *)(param_1 + 0x40) == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(ulong *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar16 + 0x18));
              }
              if (*(long *)(param_3 + 0x40) == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = *(long *)(*(long *)(param_3 + 0x40) + (ulong)*(uint *)(lVar16 + 0x18));
              }
              uVar4 = uVar10;
              func_0x00780e80();
              if ((uVar4 != 0) || (func_0x00780e80(), lVar16 != 0)) {
code_r0x00766dd4:
                func_0x007877e0();
                if ((uVar10 & 1) == 0) goto LAB_00766cc8;
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar8 != lVar9);
          lVar8 = lVar15;
          func_0x00780ea0();
        }
        lVar8 = *(long *)(param_1 + 0x10);
        func_0x00780e80();
        if (lVar8 == 0) {
          lVar8 = *(long *)(param_3 + 0x10);
          func_0x00780e80();
          if (lVar8 != 0) goto LAB_00766f20;
        }
        else {
LAB_00766f20:
          puVar5 = *(undefined **)(param_1 + 0x10);
          func_0x007877e0();
          if ((int)puVar5 == 0) goto LAB_00766f60;
        }
        lVar14 = *(long *)(param_3 + 8);
        lVar8 = *(long *)(param_1 + 8);
        func_0x00780f00();
        if ((lVar8 != 0) || (func_0x00780f00(), lVar14 != 0)) {
          puVar5 = *(undefined **)(param_1 + 8);
          func_0x007877e0();
          if ((int)puVar5 == 0) goto LAB_00766f60;
        }
        goto LAB_00766f5c;
      }
    }
LAB_00766cc8:
    puVar5 = (undefined *)0x0;
  }
LAB_00766f60:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar13 = puVar5;
  _objc_opt_class();
  func_0x00781ea0();
  lVar15 = *(long *)(puVar5 + 0x40);
  lVar14 = *(long *)(puVar13 + 8);
  lVar7 = lVar14;
  func_0x00780ea0();
  do {
    if (lVar7 == 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
        return puVar13;
      }
      ___stack_chk_fail();
      FUN_0076cdd4();
      puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
      _objc_opt_class();
      func_0x007921a0(puVar5);
      return puVar5;
    }
    lVar17 = 0;
    do {
      lVar16 = *(long *)(lVar17 * 8);
      lVar9 = *(long *)(lVar16 + 8);
      if ((*(ushort *)(lVar9 + 0x1c) & 0xf02) != 0) {
        if (*(long *)(puVar5 + 0x40) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(*(long *)(puVar5 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
        }
        func_0x00780e80();
        if (lVar9 != 0) {
          puVar13 = (undefined *)
                    (lVar9 + ((ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x10) + (long)puVar13 * 0x13)
                             * 0x13);
        }
        goto LAB_00767114;
      }
      uVar6 = *(uint *)(lVar9 + 0x14);
      if ((int)uVar6 < 0) {
        lVar16 = *(long *)(puVar5 + 0x40);
        if (*(uint *)(lVar16 + (ulong)-uVar6 * 4) == *(uint *)(lVar9 + 0x10)) goto LAB_007670b8;
        goto LAB_00767114;
      }
      lVar16 = *(long *)(puVar5 + 0x40);
      if ((*(uint *)(lVar16 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0)
      goto LAB_00767114;
LAB_007670b8:
      if (0x11 < *(byte *)(lVar9 + 0x1e)) goto LAB_00767114;
      uVar6 = *(uint *)(lVar9 + 0x18);
      uVar10 = (ulong)uVar6;
      switch(*(byte *)(lVar9 + 0x1e)) {
      case 0:
        if ((int)uVar6 < 0) {
          uVar6 = (uint)(*(int *)(lVar16 + (ulong)-uVar6 * 4) == 0);
        }
        else {
          uVar6 = *(uint *)(lVar16 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1;
        }
        puVar13 = (undefined *)((long)puVar13 * 0x13 + (ulong)uVar6);
        goto LAB_00767114;
      default:
        uVar10 = (ulong)*(uint *)(lVar15 + uVar10);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 10:
      case 0xc:
        uVar10 = *(ulong *)(lVar15 + uVar10);
        break;
      case 0xd:
      case 0xe:
        lVar9 = *(long *)(lVar15 + uVar10);
        func_0x007843a0();
        goto code_r0x00767110;
      case 0xf:
      case 0x10:
        puVar13 = (undefined *)((ulong)*(uint *)(lVar9 + 0x10) + (long)puVar13 * 0x13);
        lVar9 = *(long *)(lVar15 + uVar10);
        _objc_opt_class();
        func_0x00781ea0();
code_r0x00767110:
        puVar13 = (undefined *)(lVar9 + (long)puVar13 * 0x13);
        goto LAB_00767114;
      }
      puVar13 = (undefined *)(uVar10 + (long)puVar13 * 0x13);
LAB_00767114:
      lVar17 = lVar17 + 1;
    } while (lVar7 != lVar17);
    lVar7 = lVar14;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 00766f9c; end: 007671b3; -[GPBMessage hash] */

/* WARNING: Removing unreachable block (ram,0x00767030) */

undefined * FUN_00766f9c(undefined *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lVar8 = *(long *)(param_1 + 0x40);
  lVar7 = *(long *)(puVar6 + 8);
  lVar1 = lVar7;
  func_0x00780ea0();
  do {
    if (lVar1 == 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
        ___stack_chk_fail();
        FUN_0076cdd4();
        puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
        _objc_opt_class();
        func_0x007921a0(puVar6);
        return puVar6;
      }
      return puVar6;
    }
    lVar10 = 0;
    do {
      lVar9 = *(long *)(lVar10 * 8);
      lVar4 = *(long *)(lVar9 + 8);
      if ((*(ushort *)(lVar4 + 0x1c) & 0xf02) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar4 + 0x18));
        }
        func_0x00780e80();
        if (lVar4 != 0) {
          puVar6 = (undefined *)
                   (lVar4 + ((ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x10) + (long)puVar6 * 0x13) *
                            0x13);
        }
        goto LAB_00767114;
      }
      uVar2 = *(uint *)(lVar4 + 0x14);
      if ((int)uVar2 < 0) {
        lVar9 = *(long *)(param_1 + 0x40);
        if (*(uint *)(lVar9 + (ulong)-uVar2 * 4) == *(uint *)(lVar4 + 0x10)) goto LAB_007670b8;
        goto LAB_00767114;
      }
      lVar9 = *(long *)(param_1 + 0x40);
      if ((*(uint *)(lVar9 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0)
      goto LAB_00767114;
LAB_007670b8:
      if (0x11 < *(byte *)(lVar4 + 0x1e)) goto LAB_00767114;
      uVar2 = *(uint *)(lVar4 + 0x18);
      uVar5 = (ulong)uVar2;
      switch(*(byte *)(lVar4 + 0x1e)) {
      case 0:
        if ((int)uVar2 < 0) {
          uVar2 = (uint)(*(int *)(lVar9 + (ulong)-uVar2 * 4) == 0);
        }
        else {
          uVar2 = *(uint *)(lVar9 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1;
        }
        puVar6 = (undefined *)((long)puVar6 * 0x13 + (ulong)uVar2);
        goto LAB_00767114;
      default:
        uVar5 = (ulong)*(uint *)(lVar8 + uVar5);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 10:
      case 0xc:
        uVar5 = *(ulong *)(lVar8 + uVar5);
        break;
      case 0xd:
      case 0xe:
        lVar4 = *(long *)(lVar8 + uVar5);
        func_0x007843a0();
        goto code_r0x00767110;
      case 0xf:
      case 0x10:
        puVar6 = (undefined *)((ulong)*(uint *)(lVar4 + 0x10) + (long)puVar6 * 0x13);
        lVar4 = *(long *)(lVar8 + uVar5);
        _objc_opt_class();
        func_0x00781ea0();
code_r0x00767110:
        puVar6 = (undefined *)(lVar4 + (long)puVar6 * 0x13);
        goto LAB_00767114;
      }
      puVar6 = (undefined *)(uVar5 + (long)puVar6 * 0x13);
LAB_00767114:
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar7;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 007671b4; end: 00767217; -[GPBMessage description] */

void FUN_007671b4(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_0076cdd4(param_1,&PTR____CFConstantStringClassReference_00a4b2c0);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1);
  return;
}



/* Entry: 00767218; end: 00767fa3; -[GPBMessage serializedSize] */

/* WARNING: Removing unreachable block (ram,0x00767958) */
/* WARNING: Removing unreachable block (ram,0x00767760) */
/* WARNING: Removing unreachable block (ram,0x007674d4) */
/* WARNING: Removing unreachable block (ram,0x00767568) */
/* WARNING: Removing unreachable block (ram,0x00767e84) */

long FUN_00767218(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_768;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = param_1;
  _objc_opt_class();
  func_0x00781ea0();
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  lVar7 = *(long *)(lVar6 + 8);
  lStack_768 = lVar7;
  func_0x00780ea0();
  if (lStack_768 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    lVar11 = *plStack_3b0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_3b0 != lVar11) {
          _objc_enumerationMutation(lVar7);
        }
        lVar17 = *(long *)(lStack_3b8 + lVar18 * 8);
        lVar13 = lVar17;
        func_0x00783280();
        lVar12 = *(long *)(lVar17 + 8);
        bVar3 = *(byte *)(lVar12 + 0x1e);
        if ((int)lVar13 == 1) {
          if (*(long *)(param_1 + 0x40) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18));
          }
          lVar12 = lVar13;
          func_0x00780e80();
          if (lVar12 != 0) {
            uStack_3e0 = 0;
            puStack_3d8 = &uStack_3e0;
            uStack_3d0 = 0x2020000000;
            uStack_3c8 = 0;
            switch(bVar3) {
            case 0:
              func_0x00782cc0(lVar13);
              break;
            case 1:
              func_0x00782cc0(lVar13);
              break;
            case 2:
              func_0x00782cc0(lVar13);
              break;
            case 3:
              func_0x00782cc0(lVar13);
              break;
            case 4:
              func_0x00782cc0(lVar13);
              break;
            case 5:
              func_0x00782cc0(lVar13);
              break;
            case 6:
              func_0x00782cc0(lVar13);
              break;
            case 7:
              func_0x00782cc0(lVar13);
              break;
            case 8:
              func_0x00782cc0(lVar13);
              break;
            case 9:
              func_0x00782cc0(lVar13);
              break;
            case 10:
              func_0x00782cc0(lVar13);
              break;
            case 0xb:
              func_0x00782cc0(lVar13);
              break;
            case 0xc:
              func_0x00782cc0(lVar13);
              break;
            case 0xd:
              lVar16 = lVar13;
              func_0x00780ea0();
              while (lVar16 != 0) {
                lVar14 = 0;
                do {
                  uVar8 = *(ulong *)(lVar14 * 8);
                  func_0x007882e0();
                  lVar9 = 4;
                  if ((uVar8 >> 0x1c & 0xf) != 0) {
                    lVar9 = 5;
                  }
                  uVar5 = (uint)uVar8;
                  lVar1 = 3;
                  if (0x1fffff < uVar5) {
                    lVar1 = lVar9;
                  }
                  lVar9 = 2;
                  if (0x3fff < uVar5) {
                    lVar9 = lVar1;
                  }
                  lVar1 = 1;
                  if (0x7f < uVar5) {
                    lVar1 = lVar9;
                  }
                  puStack_3d8[3] = lVar1 + puStack_3d8[3] + uVar8;
                  lVar14 = lVar14 + 1;
                } while (lVar16 != lVar14);
                lVar16 = lVar13;
                func_0x00780ea0();
              }
              break;
            case 0xe:
              lVar16 = lVar13;
              func_0x00780ea0();
              while (lVar16 != 0) {
                lVar14 = 0;
                do {
                  uVar8 = *(ulong *)(lVar14 * 8);
                  func_0x00788320();
                  lVar9 = 4;
                  if ((uVar8 >> 0x1c & 0xf) != 0) {
                    lVar9 = 5;
                  }
                  uVar5 = (uint)uVar8;
                  lVar1 = 3;
                  if (0x1fffff < uVar5) {
                    lVar1 = lVar9;
                  }
                  lVar9 = 2;
                  if (0x3fff < uVar5) {
                    lVar9 = lVar1;
                  }
                  lVar1 = 1;
                  if (0x7f < uVar5) {
                    lVar1 = lVar9;
                  }
                  puStack_3d8[3] = lVar1 + puStack_3d8[3] + uVar8;
                  lVar14 = lVar14 + 1;
                } while (lVar16 != lVar14);
                lVar16 = lVar13;
                func_0x00780ea0();
              }
              break;
            case 0xf:
              lVar16 = lVar13;
              func_0x00780ea0();
              while (lVar16 != 0) {
                lVar14 = 0;
                do {
                  uVar8 = *(ulong *)(lVar14 * 8);
                  func_0x0078c740();
                  lVar9 = 4;
                  if ((uVar8 >> 0x1c & 0xf) != 0) {
                    lVar9 = 5;
                  }
                  uVar5 = (uint)uVar8;
                  lVar1 = 3;
                  if (0x1fffff < uVar5) {
                    lVar1 = lVar9;
                  }
                  lVar9 = 2;
                  if (0x3fff < uVar5) {
                    lVar9 = lVar1;
                  }
                  lVar1 = 1;
                  if (0x7f < uVar5) {
                    lVar1 = lVar9;
                  }
                  puStack_3d8[3] = lVar1 + puStack_3d8[3] + uVar8;
                  lVar14 = lVar14 + 1;
                } while (lVar16 != lVar14);
                lVar16 = lVar13;
                func_0x00780ea0();
              }
              break;
            case 0x10:
              lVar16 = lVar13;
              func_0x00780ea0();
              while (lVar16 != 0) {
                lVar14 = 0;
                do {
                  lVar9 = *(long *)(lVar14 * 8);
                  func_0x0078c740();
                  puStack_3d8[3] = puStack_3d8[3] + lVar9;
                  lVar14 = lVar14 + 1;
                } while (lVar16 != lVar14);
                lVar16 = lVar13;
                func_0x00780ea0();
              }
              break;
            case 0x11:
              func_0x00782c60(lVar13);
            }
            lVar16 = puStack_3d8[3];
            uVar5 = *(uint *)(*(long *)(lVar17 + 8) + 0x10);
            uVar2 = uVar5 << 3;
            lVar13 = 4;
            if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
              lVar13 = 5;
            }
            lVar14 = 3;
            if (0x1fffff < uVar2) {
              lVar14 = lVar13;
            }
            lVar13 = 2;
            if (0x3fff < uVar2) {
              lVar13 = lVar14;
            }
            lVar14 = 1;
            if (0x7f < uVar2) {
              lVar14 = lVar13;
            }
            func_0x00787b80();
            lVar14 = lVar14 << (bVar3 == 0x10);
            if ((int)lVar17 == 0) {
              lVar15 = lVar16 + lVar15 + lVar14 * lVar12;
            }
            else {
              uVar5 = *(uint *)(puStack_3d8 + 3);
              lVar13 = 4;
              if (uVar5 >> 0x1c != 0) {
                lVar13 = 5;
              }
              lVar17 = 3;
              if (0x1fffff < uVar5) {
                lVar17 = lVar13;
              }
              lVar13 = 2;
              if (0x3fff < uVar5) {
                lVar13 = lVar17;
              }
              lVar17 = 1;
              if (0x7f < uVar5) {
                lVar17 = lVar13;
              }
              lVar13 = 10;
              if ((uVar5 & 0x80000000) == 0) {
                lVar13 = lVar17;
              }
              lVar15 = lVar14 + lVar16 + lVar15 + lVar13;
            }
            __Block_object_dispose(&uStack_3e0,8);
          }
          goto LAB_00767ddc;
        }
        if ((int)lVar13 != 0) {
          if ((bVar3 - 0xd < 4) && (lVar13 = lVar17, func_0x00788e40(), (int)lVar13 == 0xe)) {
            if ((*(long *)(param_1 + 0x40) == 0) ||
               (uVar8 = *(ulong *)(*(long *)(param_1 + 0x40) +
                                  (ulong)*(uint *)(*(long *)(lVar17 + 8) + 0x18)), uVar8 == 0))
            goto LAB_00767ddc;
            FUN_0074524c(uVar8,lVar17);
          }
          else {
            if (*(long *)(param_1 + 0x40) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(ulong *)(*(long *)(param_1 + 0x40) +
                                (ulong)*(uint *)(*(long *)(lVar17 + 8) + 0x18));
            }
            func_0x00780900();
          }
          goto LAB_00767488;
        }
        uVar5 = *(uint *)(lVar12 + 0x10);
        uVar8 = (ulong)uVar5;
        uVar2 = *(uint *)(lVar12 + 0x14);
        if ((int)uVar2 < 0) {
          lVar13 = *(long *)(param_1 + 0x40);
          if (*(uint *)(lVar13 + (ulong)-uVar2 * 4) == uVar5) goto LAB_007673ac;
          goto LAB_00767ddc;
        }
        lVar13 = *(long *)(param_1 + 0x40);
        if ((*(uint *)(lVar13 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0)
        goto LAB_00767ddc;
LAB_007673ac:
        lVar16 = param_1;
        switch(bVar3) {
        case 0:
          FUN_0076c6c0(param_1,lVar17);
          uVar2 = uVar5 << 3;
          if (0x7f < uVar2) {
            if (uVar2 < 0x4000) {
              lVar13 = 3;
              goto code_r0x00767dd8;
            }
            if (uVar2 < 0x200000) {
              lVar13 = 4;
              goto code_r0x00767dd8;
            }
            bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
            lVar13 = 5;
            goto code_r0x00767dd4;
          }
          lVar13 = 2;
          goto code_r0x00767dd8;
        case 1:
          FUN_0076c830(param_1,lVar17);
          goto code_r0x00767c58;
        case 2:
          FUN_0076c504(param_1,lVar17);
          goto code_r0x00767c58;
        case 3:
          FUN_0076cb7c(param_1,lVar17);
code_r0x00767c58:
          uVar2 = uVar5 << 3;
          if (uVar2 < 0x80) {
            lVar13 = 5;
          }
          else if (uVar2 < 0x4000) {
            lVar13 = 6;
          }
          else if (uVar2 < 0x200000) {
            lVar13 = 7;
          }
          else {
            bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
            lVar13 = 8;
code_r0x00767dd4:
            if (!bVar4) {
              lVar13 = lVar13 + 1;
            }
          }
code_r0x00767dd8:
          lVar15 = lVar13 + lVar15;
          goto LAB_00767ddc;
        case 4:
          FUN_0076ca68(param_1,lVar17);
          goto code_r0x00767cc8;
        case 5:
          FUN_0076c954(param_1,lVar17);
          goto code_r0x00767cc8;
        case 6:
          FUN_0076cca8(param_1,lVar17);
code_r0x00767cc8:
          uVar2 = uVar5 << 3;
          if (0x7f < uVar2) {
            if (uVar2 < 0x4000) {
              lVar13 = 10;
              goto code_r0x00767dd8;
            }
            if (uVar2 < 0x200000) {
              lVar13 = 0xb;
              goto code_r0x00767dd8;
            }
            bVar4 = (uVar5 & 0x1fffffff) >> 0x19 == 0;
            lVar13 = 0xc;
            goto code_r0x00767dd4;
          }
          lVar13 = 9;
          goto code_r0x00767dd8;
        case 7:
          lVar13 = param_1;
          FUN_0076c504(param_1,lVar17);
          func_0x007429c4(uVar8,lVar13);
          break;
        case 8:
          FUN_0076c954(param_1,lVar17);
          goto code_r0x00767d14;
        case 9:
          lVar13 = param_1;
          FUN_0076c504(param_1,lVar17);
          func_0x00742cf8(uVar8,lVar13);
          break;
        case 10:
          lVar13 = param_1;
          FUN_0076c954(param_1,lVar17);
          FUN_00742d74(uVar8,lVar13);
          break;
        case 0xb:
          lVar13 = param_1;
          FUN_0076c830(param_1,lVar17);
          func_0x00742c04(uVar8,lVar13);
          break;
        case 0xc:
          FUN_0076ca68(param_1,lVar17);
code_r0x00767d14:
          uVar2 = uVar5 << 3;
          if (uVar2 < 0x80) {
            lVar17 = 1;
          }
          else if (uVar2 < 0x4000) {
            lVar17 = 2;
          }
          else if (uVar2 < 0x200000) {
            lVar17 = 3;
          }
          else {
            lVar17 = 4;
            if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
              lVar17 = 5;
            }
          }
          func_0x00742934();
code_r0x00767dac:
          lVar15 = lVar17 + lVar15 + lVar16;
          goto LAB_00767ddc;
        case 0xd:
          func_0x00742b70(uVar8,*(undefined8 *)(lVar13 + (ulong)*(uint *)(lVar12 + 0x18)));
          break;
        case 0xe:
          func_0x00742a44(uVar8,*(undefined8 *)(lVar13 + (ulong)*(uint *)(lVar12 + 0x18)));
          break;
        case 0xf:
          func_0x00742adc(uVar8,*(undefined8 *)(lVar13 + (ulong)*(uint *)(lVar12 + 0x18)));
          break;
        case 0x10:
          lVar16 = *(long *)(lVar13 + (ulong)*(uint *)(lVar12 + 0x18));
          uVar2 = uVar5 << 3;
          lVar13 = 8;
          if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
            lVar13 = 10;
          }
          lVar17 = 6;
          if (0x1fffff < uVar2) {
            lVar17 = lVar13;
          }
          lVar13 = 4;
          if (0x3fff < uVar2) {
            lVar13 = lVar17;
          }
          lVar17 = 2;
          if (0x7f < uVar2) {
            lVar17 = lVar13;
          }
          func_0x0078c740();
          goto code_r0x00767dac;
        case 0x11:
          lVar13 = param_1;
          FUN_0076c504(param_1,lVar17);
          func_0x00742c78(uVar8,lVar13);
          break;
        default:
          goto LAB_00767ddc;
        }
LAB_00767488:
        lVar15 = uVar8 + lVar15;
LAB_00767ddc:
        lVar18 = lVar18 + 1;
      } while (lVar18 != lStack_768);
      lStack_768 = lVar7;
      func_0x00780ea0();
    } while (lStack_768 != 0);
  }
  func_0x00787f80();
  lVar7 = *(long *)(param_1 + 8);
  if ((int)lVar6 == 0) {
    func_0x0078c740(lVar7);
  }
  else {
    func_0x0078c760();
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar6 = lVar11;
  func_0x00780ea0();
  lVar7 = lVar7 + lVar15;
  while (lVar6 != 0) {
    lVar15 = 0;
    do {
      lVar18 = *(long *)(lVar15 * 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      func_0x00789ea0(uVar10);
      FUN_00761a54(lVar18,uVar10);
      lVar7 = lVar18 + lVar7;
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = lVar11;
    func_0x00780ea0();
  }
  lVar6 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_3e0,8);
    __Unwind_Resume();
    lVar7 = *(long *)(*(long *)(lVar6 + 0x20) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    return lVar6;
  }
  return lVar7;
}



/* Entry: 00767fa4; end: 007680a3;  */

void FUN_00767fa4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 007680a4; end: 007680db;  */

void FUN_007680a4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00742934();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 007680dc; end: 0076812f;  */

void FUN_007680dc(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = param_2 << 1 ^ param_2 >> 0x1f;
  lVar3 = 4;
  if (uVar2 >> 0x1c != 0) {
    lVar3 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = 2;
  if (0x3fff < uVar2) {
    lVar3 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar1;
  return;
}



/* Entry: 00768130; end: 0076816b;  */

void FUN_00768130(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 << 1 ^ param_2 >> 0x3f;
  func_0x00742934();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + uVar1;
  return;
}



/* Entry: 0076816c; end: 007681b7;  */

void FUN_0076816c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 4;
  if (param_2 >> 0x1c != 0) {
    lVar2 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = 2;
  if (0x3fff < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  return;
}



/* Entry: 007681b8; end: 007681ef;  */

void FUN_007681b8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00742934();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 007681f0; end: 00768247;  */

void FUN_007681f0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 4;
  if (param_2 >> 0x1c != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 10;
  if ((param_2 & 0x80000000) == 0) {
    lVar1 = lVar2;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  return;
}



/* Entry: 00768248; end: 00768eeb; +[GPBMessage resolveInstanceMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte ******* FUN_00768248(byte *******param_1,undefined8 param_2,byte *******param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte ******ppppppbVar9;
  byte *pbVar10;
  byte ****ppppbVar11;
  byte *pbVar12;
  undefined *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  undefined4 uVar17;
  byte ******ppppppbVar18;
  byte *******pppppppbVar19;
  byte *****pppppbVar20;
  byte ******ppppppbVar21;
  ulong uVar22;
  long lVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte ****ppppbVar26;
  byte ******ppppppbVar27;
  byte ******ppppppbStack_398;
  undefined *puStack_390;
  byte *****pppppbStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  byte *****pppppbStack_368;
  byte *****pppppbStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined4 uStack_340;
  byte *****pppppbStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  int iStack_318;
  undefined4 uStack_314;
  byte *****apppppbStack_310 [5];
  byte *****apppppbStack_2e8 [5];
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  byte *****pppppbStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  byte ******ppppppbStack_258;
  byte *****pppppbStack_250;
  byte *****pppppbStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  byte *****pppppbStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte ******ppppppbStack_1d8;
  undefined *puStack_1d0;
  byte *****apppppbStack_1c8 [5];
  byte *****apppppbStack_1a0 [37];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppppbVar7 = param_1;
  func_0x00781ea0();
  if (pppppppbVar7 == (byte *******)0x0) {
    puStack_1d0 = PTR__OBJC_METACLASS___GPBMessage_00ac48c0;
    pppppppbVar8 = &ppppppbStack_1d8;
    ppppppbStack_1d8 = (byte ******)param_1;
  }
  else {
    pppppppbVar8 = param_3;
    _sel_getName();
    pppppppbVar25 = pppppppbVar8;
    _strlen();
    if ((*(byte *)pppppppbVar8 == 0x73) &&
       (pbVar12 = (byte *)((long)pppppppbVar8 + (long)pppppppbVar25), pbVar12[-1] == 0x3a)) {
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      ppppppbVar9 = pppppppbVar7[1];
      ppppppbVar21 = ppppppbVar9;
      func_0x00780ea0();
      if (ppppppbVar21 != (byte ******)0x0) {
        lVar23 = *plStack_210;
LAB_00768308:
        ppppppbVar27 = (byte ******)0x0;
LAB_0076830c:
        if (*plStack_210 != lVar23) {
          _objc_enumerationMutation(ppppppbVar9);
        }
        if (pppppppbVar25 < (byte *******)((long)&MACH_HEADER.cputype + 1)) goto LAB_00768488;
        ppppppbVar18 = *(byte *******)(lStack_218 + (long)ppppppbVar27 * 8);
        pppppbVar20 = ppppppbVar18[1];
        uVar4 = *(ushort *)((long)pppppbVar20 + 0x1c);
        bVar2 = *(byte *)((long)pppppppbVar8 + 3);
        ppppbVar26 = *pppppbVar20;
        bVar3 = *(byte *)ppppbVar26;
        uVar15 = bVar3 - 0x20;
        if (0x19 < bVar3 - 0x61) {
          uVar15 = (uint)bVar3;
        }
        if ((((uint)bVar2 != (uVar15 & 0xff)) || (*(byte *)pppppppbVar8 != 0x73)) ||
           ((*(byte *)((long)pppppppbVar8 + 1) != 0x65 ||
            (((*(byte *)((long)pppppppbVar8 + 2) != 0x74 || (pbVar12[-1] != 0x3a)) ||
             (ppppbVar11 = ppppbVar26, _strlen(),
             pppppppbVar25 != (byte *******)((long)ppppbVar11 + 4))))))) {
LAB_007683dc:
          if ((((uVar4 & 0xf02) == 0 &&
                (byte *******)((long)&MACH_HEADER.cputype + 3) < pppppppbVar25) &&
              (pbVar12[-1] == 0x3a)) &&
             ((((((uint)*(byte *)((long)pppppppbVar8 + 6) == (uVar15 & 0xff) &&
                 ((*(byte *)pppppppbVar8 == 0x73 && (*(byte *)((long)pppppppbVar8 + 1) == 0x65))))
                && (bVar2 == 0x48)) &&
               ((((*(byte *)((long)pppppppbVar8 + 2) == 0x74 &&
                  (*(byte *)((long)pppppppbVar8 + 4) == 0x61)) &&
                 (*(byte *)((long)pppppppbVar8 + 5) == 0x73)) &&
                ((-1 < *(int *)((long)pppppbVar20 + 0x14) && ((uVar4 >> 5 & 1) == 0)))))) &&
              (ppppbVar11 = ppppbVar26, _strlen(),
              pppppppbVar25 == (byte *******)((long)ppppbVar11 + 7))))) {
            pbVar10 = (byte *)((long)pppppppbVar8 + 7);
            _strncmp(pbVar10,(byte *)((long)ppppbVar26 + 1),(byte *)((long)ppppbVar11 + -1));
            if ((int)pbVar10 == 0) {
              pppppbStack_278 = (byte *****)PTR___NSConcreteStackBlock_00999f30;
              uStack_270 = 0xc0000000;
              pcStack_268 = FUN_00768f20;
              puStack_260 = &UNK_00a20900;
              pppppppbVar25 = (byte *******)&pppppbStack_278;
              ppppppbStack_258 = (byte ******)param_3;
              pppppbStack_250 = (byte *****)ppppppbVar18;
              _imp_implementationWithBlock();
              goto LAB_00768bbc;
            }
          }
LAB_00768488:
          ppppppbVar27 = (byte ******)((long)ppppppbVar27 + 1);
          if (ppppppbVar21 == ppppppbVar27) goto code_r0x00768494;
          goto LAB_0076830c;
        }
        pbVar10 = (byte *)((long)pppppppbVar8 + 4);
        _strncmp(pbVar10,(byte *)((long)ppppbVar26 + 1),(byte *)((long)ppppbVar11 + -1));
        if ((int)pbVar10 != 0) goto LAB_007683dc;
        if ((uVar4 & 0xf02) == 0) {
          if (*(byte *)((long)pppppbVar20 + 0x1e) < 0x12) {
            ppppppbVar21 = (byte ******)&UNK_00a209a0;
            pcVar16 = FUN_00769bc4;
            pppppppbVar25 = (byte *******)apppppbStack_1a0;
            switch(*(byte *)((long)pppppbVar20 + 0x1e)) {
            case 1:
              ppppppbVar21 = (byte ******)&UNK_00a209c0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769bd4;
              break;
            case 2:
              ppppppbVar21 = (byte ******)&UNK_00a209e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769be4;
              break;
            case 3:
              ppppppbVar21 = (byte ******)&UNK_00a20a00;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769bf4;
              break;
            case 4:
              ppppppbVar21 = (byte ******)&UNK_00a20a20;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c04;
              break;
            case 5:
              ppppppbVar21 = (byte ******)&UNK_00a20a40;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c14;
              break;
            case 6:
              ppppppbVar21 = (byte ******)&UNK_00a20a60;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c24;
              break;
            case 7:
              ppppppbVar21 = (byte ******)&UNK_00a209e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c34;
              break;
            case 8:
              ppppppbVar21 = (byte ******)&UNK_00a20a40;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c44;
              break;
            case 9:
              ppppppbVar21 = (byte ******)&UNK_00a209e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c54;
              break;
            case 10:
              ppppppbVar21 = (byte ******)&UNK_00a20a40;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c64;
              break;
            case 0xb:
              ppppppbVar21 = (byte ******)&UNK_00a209c0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c74;
              break;
            case 0xc:
              ppppppbVar21 = (byte ******)&UNK_00a20a20;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769c84;
              break;
            case 0xd:
              ppppppbVar21 = (byte ******)&UNK_00a208e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = FUN_00769c94;
              break;
            case 0xe:
              ppppppbVar21 = (byte ******)&UNK_00a208e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769cc8;
              break;
            case 0xf:
              ppppppbVar21 = (byte ******)&UNK_00a208e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769cfc;
              break;
            case 0x10:
              ppppppbVar21 = (byte ******)&UNK_00a208e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = (code *)0x769d30;
              break;
            case 0x11:
              ppppppbVar21 = (byte ******)&UNK_00a209e0;
              pppppppbVar25 = (byte *******)apppppbStack_1c8;
              pcVar16 = FUN_00769d64;
            }
            *pppppppbVar25 = (byte ******)PTR___NSConcreteStackBlock_00999f30;
            pppppppbVar25[1] = (byte ******)0xc0000000;
            pppppppbVar25[2] = (byte ******)pcVar16;
            pppppppbVar25[3] = ppppppbVar21;
            pppppppbVar25[4] = ppppppbVar18;
            _imp_implementationWithBlock();
          }
          else {
LAB_00768990:
            pppppppbVar25 = (byte *******)0x0;
          }
        }
        else {
          pppppbStack_248 = (byte *****)PTR___NSConcreteStackBlock_00999f30;
          uStack_240 = 0xc0000000;
          pcStack_238 = FUN_00768eec;
          puStack_230 = &UNK_00a208e0;
          pppppppbVar25 = (byte *******)&pppppbStack_248;
          pppppbStack_228 = (byte *****)ppppppbVar18;
          _imp_implementationWithBlock();
        }
LAB_00768bbc:
        if (pppppppbVar25 == (byte *******)0x0) goto LAB_00768c18;
        _objc_getProtocol(&UNK_0091f36d);
        _protocol_getMethodDescription();
        func_0x00789340();
        pppppppbVar8 = pppppppbVar7;
        pppppppbVar19 = param_3;
        _class_addMethod();
        pppppppbVar24 = (byte *******)((long)&MACH_HEADER.magic + 1);
        if (((ulong)pppppppbVar8 & 1) == 0) {
          FUN_0076df38();
          pppppppbVar8 = pppppppbVar7;
          pppppppbVar19 = param_3;
          pppppppbVar24 = pppppppbVar7;
        }
        goto LAB_00768c3c;
      }
    }
    else {
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      ppppppbVar9 = pppppppbVar7[1];
      ppppppbVar21 = ppppppbVar9;
      func_0x00780ea0();
      if (ppppppbVar21 != (byte ******)0x0) {
        lVar23 = *plStack_2b0;
        do {
          ppppppbVar27 = (byte ******)0x0;
          do {
            if (*plStack_2b0 != lVar23) {
              _objc_enumerationMutation(ppppppbVar9);
            }
            ppppppbVar18 = *(byte *******)(lStack_2b8 + (long)ppppppbVar27 * 8);
            pppppbVar20 = ppppppbVar18[1];
            uVar4 = *(ushort *)((long)pppppbVar20 + 0x1c);
            bVar2 = *(byte *)pppppppbVar8;
            ppppbVar26 = *pppppbVar20;
            bVar3 = *(byte *)ppppbVar26;
            if (((uint)bVar2 == (uint)bVar3) &&
               (*(byte *)((long)pppppppbVar8 + 1) == *(byte *)((long)ppppbVar26 + 1))) {
              iVar6 = (int)pppppppbVar8 + 1;
              _strcmp();
              if (iVar6 == 0) {
                if ((uVar4 & 0xf02) == 0) {
                  if (0x11 < *(byte *)((long)pppppbVar20 + 0x1e)) goto LAB_00768990;
                  ppppppbVar21 = (byte ******)&UNK_00a20a80;
                  ppppppbVar9 = (byte ******)0x769d74;
                  pppppppbVar25 = (byte *******)apppppbStack_1a0;
                  switch(*(byte *)((long)pppppbVar20 + 0x1e)) {
                  case 1:
                    ppppppbVar21 = (byte ******)&UNK_00a20aa0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769d84;
                    break;
                  case 2:
                    ppppppbVar21 = (byte ******)&UNK_00a20ac0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769d94;
                    break;
                  case 3:
                    ppppppbVar21 = (byte ******)&UNK_00a20ae0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769da4;
                    break;
                  case 4:
                    ppppppbVar21 = (byte ******)&UNK_00a20980;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769db4;
                    break;
                  case 5:
                    ppppppbVar21 = (byte ******)&UNK_00a20b00;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769dc4;
                    break;
                  case 6:
                    ppppppbVar21 = (byte ******)&UNK_00a20b20;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769dd4;
                    break;
                  case 7:
                    ppppppbVar21 = (byte ******)&UNK_00a20ac0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769de4;
                    break;
                  case 8:
                    ppppppbVar21 = (byte ******)&UNK_00a20b00;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769df4;
                    break;
                  case 9:
                    ppppppbVar21 = (byte ******)&UNK_00a20ac0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e04;
                    break;
                  case 10:
                    ppppppbVar21 = (byte ******)&UNK_00a20b00;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e14;
                    break;
                  case 0xb:
                    ppppppbVar21 = (byte ******)&UNK_00a20aa0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e24;
                    break;
                  case 0xc:
                    ppppppbVar21 = (byte ******)&UNK_00a20980;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e34;
                    break;
                  case 0xd:
                    ppppppbVar21 = (byte ******)&UNK_00a20920;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e44;
                    break;
                  case 0xe:
                    ppppppbVar21 = (byte ******)&UNK_00a20920;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e54;
                    break;
                  case 0xf:
                    ppppppbVar21 = (byte ******)&UNK_00a20920;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e64;
                    break;
                  case 0x10:
                    ppppppbVar21 = (byte ******)&UNK_00a20920;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e74;
                    break;
                  case 0x11:
                    ppppppbVar21 = (byte ******)&UNK_00a20ac0;
                    pppppppbVar25 = (byte *******)apppppbStack_1c8;
                    ppppppbVar9 = (byte ******)0x769e84;
                  }
                  *pppppppbVar25 = (byte ******)PTR___NSConcreteStackBlock_00999f30;
                  pppppppbVar25[1] = (byte ******)0xc0000000;
                  pppppppbVar25[2] = ppppppbVar9;
                  pppppppbVar25[3] = ppppppbVar21;
                  pppppppbVar25[4] = ppppppbVar18;
                  _imp_implementationWithBlock();
                }
                else {
                  ppppppbVar21 = ppppppbVar18;
                  func_0x00783280();
                  bVar5 = (int)ppppppbVar21 != 1;
                  pppppppbVar25 = (byte *******)apppppbStack_2e8;
                  if (bVar5) {
                    pppppppbVar25 = (byte *******)apppppbStack_310;
                  }
                  ppppppbVar21 = (byte ******)FUN_00768fa4;
                  if (bVar5) {
                    ppppppbVar21 = (byte ******)0x769044;
                  }
                  *pppppppbVar25 = (byte ******)PTR___NSConcreteStackBlock_00999f30;
                  pppppppbVar25[1] = (byte ******)0xc0000000;
                  pppppppbVar25[2] = ppppppbVar21;
                  pppppppbVar25[3] = (byte ******)&UNK_00a20920;
                  pppppppbVar25[4] = ppppppbVar18;
                  _imp_implementationWithBlock();
                }
                goto LAB_00768bbc;
              }
            }
            if ((uVar4 & 0xf02) == 0) {
              if (((((byte *******)((long)&MACH_HEADER.magic + 3) < pppppppbVar25) &&
                   (bVar2 == 0x68)) && (*(byte *)((long)pppppppbVar8 + 1) == 0x61)) &&
                 (*(byte *)((long)pppppppbVar8 + 2) == 0x73)) {
                bVar1 = bVar3 - 0x20;
                if (0x19 < bVar3 - 0x61) {
                  bVar1 = bVar3;
                }
                if (((*(byte *)((long)pppppppbVar8 + 3) == bVar1) &&
                    (iVar6 = *(int *)((long)pppppbVar20 + 0x14), -1 < iVar6)) &&
                   (((uVar4 >> 5 & 1) == 0 &&
                    (ppppbVar11 = ppppbVar26, _strlen(),
                    pppppppbVar25 == (byte *******)((long)ppppbVar11 + 3))))) {
                  pbVar12 = (byte *)((long)pppppppbVar8 + 4);
                  _strncmp(pbVar12,(byte *)((long)ppppbVar26 + 1),(byte *)((long)ppppbVar11 + -1));
                  if ((int)pbVar12 == 0) {
                    uStack_314 = *(undefined4 *)(pppppbVar20 + 2);
                    pppppbStack_338 = (byte *****)PTR___NSConcreteStackBlock_00999f30;
                    uStack_330 = 0xc0000000;
                    pcStack_328 = FUN_00769104;
                    puStack_320 = &UNK_00a20940;
                    pppppppbVar25 = (byte *******)&pppppbStack_338;
                    iStack_318 = iVar6;
                    _imp_implementationWithBlock();
                    goto LAB_00768bbc;
                  }
                }
              }
              if (((ppppppbVar18[2] != (byte *****)0x0) &&
                  ((byte *******)((long)&MACH_HEADER.cpusubtype + 1) < pppppppbVar25)) &&
                 ((ppppbVar26 = ppppppbVar18[2][1], bVar2 == *(byte *)ppppbVar26 &&
                  ((((byte *)((long)pppppppbVar8 + (long)pppppppbVar25))[-9] == 0x4f &&
                   (ppppbVar11 = ppppbVar26, _strlen(),
                   pppppppbVar25 == (byte *******)((long)ppppbVar11 + 9))))))) {
                pbVar12 = (byte *)((long)pppppppbVar8 + (long)ppppbVar11);
                _strncmp(pbVar12,&UNK_0091eb20,9);
                if (((int)pbVar12 == 0) &&
                   (pppppppbVar19 = pppppppbVar8, _strncmp(pppppppbVar8,ppppbVar26,ppppbVar11),
                   (int)pppppppbVar19 == 0)) {
                  uStack_340 = *(undefined4 *)((long)pppppbVar20 + 0x14);
                  pppppbStack_360 = (byte *****)PTR___NSConcreteStackBlock_00999f30;
                  uStack_358 = 0xc0000000;
                  uStack_350 = 0x769140;
                  puStack_348 = &UNK_00a20960;
                  pppppppbVar25 = (byte *******)&pppppbStack_360;
                  _imp_implementationWithBlock();
                  goto LAB_00768bbc;
                }
              }
            }
            else if (((((byte *******)((long)&MACH_HEADER.cputype + 2) < pppppppbVar25) &&
                      (bVar2 == bVar3)) &&
                     (((byte *)((long)pppppppbVar8 + (long)pppppppbVar25))[-6] == 0x5f)) &&
                    ((ppppbVar11 = ppppbVar26, _strlen(),
                     pppppppbVar25 == (byte *******)((long)ppppbVar11 + 6) &&
                     (pppppppbVar19 = pppppppbVar8, _strncmp(pppppppbVar8,ppppbVar26,ppppbVar11),
                     (int)pppppppbVar19 == 0)))) {
              pbVar12 = (byte *)((long)pppppppbVar8 + (long)ppppbVar11);
              _strncmp(pbVar12,&UNK_0091eb2e,6);
              if ((int)pbVar12 == 0) {
                pppppbStack_388 = (byte *****)PTR___NSConcreteStackBlock_00999f30;
                uStack_380 = 0xc0000000;
                uStack_378 = 0x769154;
                puStack_370 = &UNK_00a20980;
                pppppppbVar25 = (byte *******)&pppppbStack_388;
                pppppbStack_368 = (byte *****)ppppppbVar18;
                _imp_implementationWithBlock();
                goto LAB_00768bbc;
              }
            }
            ppppppbVar27 = (byte ******)((long)ppppppbVar27 + 1);
          } while (ppppppbVar21 != ppppppbVar27);
          ppppppbVar21 = ppppppbVar9;
          func_0x00780ea0();
        } while (ppppppbVar21 != (byte ******)0x0);
      }
    }
LAB_00768c18:
    puStack_390 = PTR__OBJC_METACLASS___GPBMessage_00ac48c0;
    pppppppbVar8 = &ppppppbStack_398;
    ppppppbStack_398 = (byte ******)param_1;
  }
  pppppppbVar19 = (byte *******)PTR_s_resolveInstanceMethod__00ab9870;
  _objc_msgSendSuper2();
  pppppppbVar25 = param_3;
  pppppppbVar24 = pppppppbVar8;
LAB_00768c3c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return pppppppbVar24;
  }
  ___stack_chk_fail();
  ppppppbVar21 = pppppppbVar8[4];
  _objc_retain();
  do {
    pppppppbVar7 = pppppppbVar19;
    pppppbVar20 = ppppppbVar21[1];
    bVar2 = *(byte *)((long)pppppbVar20 + 0x1e);
    uVar4 = *(ushort *)((long)pppppbVar20 + 0x1c);
    if ((uVar4 & 0xf02) == 0) {
      if (ppppppbVar21[2] != (byte *****)0x0) {
        func_0x0076c1a8(pppppppbVar7,ppppppbVar21[2],*(undefined4 *)((long)pppppbVar20 + 0x14),
                        *(undefined4 *)(pppppbVar20 + 2));
        uVar4 = *(ushort *)((long)pppppbVar20 + 0x1c);
      }
      if (((uVar4 >> 5 & 1) == 0) ||
         (pppppppbVar8 = pppppppbVar25, func_0x007882e0(), pppppppbVar8 != (byte *******)0x0)) {
        uVar15 = *(uint *)((long)pppppbVar20 + 0x14);
        ppppppbVar21 = pppppppbVar7[8];
        if ((int)uVar15 < 0) {
          uVar17 = 0;
          if (pppppppbVar25 != (byte *******)0x0) {
            uVar17 = *(undefined4 *)(pppppbVar20 + 2);
          }
          goto LAB_0076c41c;
        }
        uVar22 = (ulong)(uVar15 >> 5);
        uVar15 = 1 << (ulong)(uVar15 & 0x1f);
        if (pppppppbVar25 == (byte *******)0x0) goto LAB_0076c448;
        *(uint *)((long)ppppppbVar21 + uVar22 * 4) =
             *(uint *)((long)ppppppbVar21 + uVar22 * 4) | uVar15;
      }
      else {
        _objc_release(pppppppbVar25);
        uVar15 = *(uint *)((long)pppppbVar20 + 0x14);
        ppppppbVar21 = pppppppbVar7[8];
        if ((int)uVar15 < 0) {
          pppppppbVar25 = (byte *******)0x0;
          uVar17 = 0;
LAB_0076c41c:
          *(undefined4 *)((long)ppppppbVar21 + (ulong)-uVar15 * 4) = uVar17;
        }
        else {
          uVar22 = (ulong)(uVar15 >> 5);
          uVar15 = 1 << (ulong)(uVar15 & 0x1f);
LAB_0076c448:
          pppppppbVar25 = (byte *******)0x0;
          *(uint *)((long)ppppppbVar21 + uVar22 * 4) =
               *(uint *)((long)ppppppbVar21 + uVar22 * 4) & (uVar15 ^ 0xffffffff);
        }
      }
      uVar22 = *(ulong *)((long)ppppppbVar21 + (ulong)*(uint *)(pppppbVar20 + 3));
      *(byte ********)((long)ppppppbVar21 + (ulong)*(uint *)(pppppbVar20 + 3)) = pppppppbVar25;
      if (uVar22 != 0) {
        if ((bVar2 - 0xf < 2) && (*(byte ********)(uVar22 + 0x20) == pppppppbVar7)) {
          FUN_007627b0(uVar22);
        }
        goto LAB_0076c488;
      }
    }
    else {
      uVar22 = *(ulong *)((long)pppppppbVar7[8] + (ulong)*(uint *)(pppppbVar20 + 3));
      *(byte ********)((long)pppppppbVar7[8] + (ulong)*(uint *)(pppppbVar20 + 3)) = pppppppbVar25;
      if (uVar22 != 0) {
        ppppppbVar9 = ppppppbVar21;
        func_0x00783280();
        uVar14 = uVar22;
        if ((int)ppppppbVar9 == 1) {
          if (3 < bVar2 - 0xd) {
LAB_0076c3fc:
            if (*(byte ********)(uVar22 + 8) == pppppppbVar7) {
              *(undefined8 *)(uVar22 + 8) = 0;
            }
            goto LAB_0076c488;
          }
          puVar13 = PTR_PTR_00ac3930;
          _objc_opt_class(PTR_PTR_00ac3930);
          _objc_opt_isKindOfClass(uVar22,puVar13);
          iVar6 = _DAT_00ac6014;
        }
        else {
          func_0x00788e40();
          if (((int)ppppppbVar21 != 0xe) || (3 < bVar2 - 0xd)) goto LAB_0076c3fc;
          puVar13 = PTR_PTR_00ac3938;
          _objc_opt_class(PTR_PTR_00ac3938);
          _objc_opt_isKindOfClass(uVar22,puVar13);
          iVar6 = _DAT_00ac6294;
        }
        if (((uVar14 & 1) != 0) && (*(byte ********)(uVar22 + (long)iVar6) == pppppppbVar7)) {
          *(undefined8 *)(uVar22 + (long)iVar6) = 0;
        }
LAB_0076c488:
        _objc_release(uVar22);
      }
    }
    pppppppbVar19 = (byte *******)pppppppbVar7[4];
    if (pppppppbVar19 == (byte *******)0x0) {
      return pppppppbVar7;
    }
    ppppppbVar21 = pppppppbVar7[5];
    if (ppppppbVar21 == (byte ******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pppppppbVar19,PTR_s_setExtension_value__00abe490,pppppppbVar7[6]);
      return pppppppbVar19;
    }
    _objc_retain();
    pppppppbVar25 = pppppppbVar7;
  } while( true );
code_r0x00768494:
  ppppppbVar21 = ppppppbVar9;
  func_0x00780ea0();
  if (ppppppbVar21 == (byte ******)0x0) goto LAB_00768c18;
  goto LAB_00768308;
}



/* Entry: 00768eec; end: 00768f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00768eec(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain();
  do {
    lVar4 = param_2;
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) == 0) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        func_0x0076c1a8(lVar4,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                        *(undefined4 *)(lVar10 + 0x10));
        uVar2 = *(ushort *)(lVar10 + 0x1c);
      }
      if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_3, func_0x007882e0(), lVar9 != 0)) {
        uVar7 = *(uint *)(lVar10 + 0x14);
        lVar9 = *(long *)(lVar4 + 0x40);
        if ((int)uVar7 < 0) {
          uVar8 = 0;
          if (param_3 != 0) {
            uVar8 = *(undefined4 *)(lVar10 + 0x10);
          }
          goto LAB_0076c41c;
        }
        uVar11 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
        if (param_3 == 0) goto LAB_0076c448;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar7;
      }
      else {
        _objc_release(param_3);
        uVar7 = *(uint *)(lVar10 + 0x14);
        lVar9 = *(long *)(lVar4 + 0x40);
        if ((int)uVar7 < 0) {
          param_3 = 0;
          uVar8 = 0;
LAB_0076c41c:
          *(undefined4 *)(lVar9 + (ulong)-uVar7 * 4) = uVar8;
        }
        else {
          uVar11 = (ulong)(uVar7 >> 5);
          uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
          param_3 = 0;
          *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar7 ^ 0xffffffff);
        }
      }
      uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar4)) {
          FUN_007627b0(uVar11);
        }
        goto LAB_0076c488;
      }
    }
    else {
      uVar11 = *(ulong *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        lVar10 = lVar9;
        func_0x00783280();
        uVar6 = uVar11;
        if ((int)lVar10 == 1) {
          if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
            if (*(long *)(uVar11 + 8) == lVar4) {
              *(undefined8 *)(uVar11 + 8) = 0;
            }
            goto LAB_0076c488;
          }
          puVar5 = PTR_PTR_00ac3930;
          _objc_opt_class(PTR_PTR_00ac3930);
          _objc_opt_isKindOfClass(uVar11,puVar5);
          iVar3 = _DAT_00ac6014;
        }
        else {
          func_0x00788e40();
          if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
          puVar5 = PTR_PTR_00ac3938;
          _objc_opt_class(PTR_PTR_00ac3938);
          _objc_opt_isKindOfClass(uVar11,puVar5);
          iVar3 = _DAT_00ac6294;
        }
        if (((uVar6 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar4)) {
          *(undefined8 *)(uVar11 + (long)iVar3) = 0;
        }
LAB_0076c488:
        _objc_release(uVar11);
      }
    }
    param_2 = *(long *)(lVar4 + 0x20);
    if (param_2 == 0) {
      return;
    }
    lVar9 = *(long *)(lVar4 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setExtension_value__00abe490,*(undefined8 *)(lVar4 + 0x30));
      return;
    }
    _objc_retain();
    param_3 = lVar4;
  } while( true );
}



/* Entry: 00768f20; end: 00768fa3;  */

void FUN_00768f20(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if (param_3 != 0) {
    _objc_opt_class();
    _NSStringFromSelector();
    func_0x0078ad40(puVar1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(uint *)(lVar4 + 0x14);
  if ((int)uVar2 < 0) {
    lVar3 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar2 * 4) != *(int *)(lVar4 + 0x10)) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
  }
  if (((*(ushort *)(lVar4 + 0x1c) & 0xf02) != 0) || (*(byte *)(lVar4 + 0x1e) - 0xd < 4)) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    _objc_release(*(undefined8 *)(lVar3 + (ulong)uVar2));
    *(undefined8 *)(lVar3 + (ulong)uVar2) = 0;
    uVar2 = *(uint *)(lVar4 + 0x14);
    lVar3 = *(long *)(param_2 + 0x40);
  }
  if ((int)uVar2 < 0) {
    *(undefined4 *)(lVar3 + (ulong)-uVar2 * 4) = 0;
  }
  else {
    *(uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4) =
         *(uint *)(lVar3 + (ulong)(uVar2 >> 5) * 4) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}



/* Entry: 00768fa4; end: 00769103;  */

void FUN_00768fa4(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(*(long *)(lVar6 + 8) + 0x18));
  if (*plVar1 == 0) {
    lVar5 = lVar6;
    FUN_00769aa0();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        piVar2 = (int *)&DAT_00ac6014;
        if (3 < *(byte *)(*(long *)(lVar6 + 8) + 0x1e) - 0xd) {
          piVar2 = (int *)&DAT_00ac6018;
        }
        *(undefined8 *)(lVar5 + *piVar2) = 0;
        _objc_release();
        return;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 00769104; end: 00769177;  */

uint FUN_00769104(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (-1 < (int)uVar1) {
    return *(uint *)(*(long *)(param_2 + 0x40) + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) &
           1;
  }
  return (uint)(*(int *)(*(long *)(param_2 + 0x40) + (ulong)-uVar1 * 4) == *(int *)(param_1 + 0x24))
  ;
}



/* Entry: 00769178; end: 007691d3; +[GPBMessage resolveClassMethod:] */

void FUN_00769178(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x0076a024(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR__OBJC_METACLASS___GPBMessage_00ac48c0;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_resolveClassMethod__00ab98a8,param_3);
  }
  return;
}



/* Entry: 007691d4; end: 007691db; +[GPBMessage supportsSecureCoding] */

undefined8 FUN_007691d4(void)

{
  return 1;
}



/* Entry: 007691dc; end: 00769243; -[GPBMessage initWithCoder:] */

long FUN_007691dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x007849a0();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
    func_0x00781b20(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_00a4b320);
    lVar2 = param_3;
    func_0x007882e0();
    if (lVar2 != 0) {
      func_0x00789280(param_1,param_2,param_3,0);
    }
  }
  return param_1;
}



/* Entry: 00769244; end: 0076928b; -[GPBMessage encodeWithCoder:] */

void FUN_00769244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x007814c0();
  lVar1 = param_1;
  func_0x007882e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00782790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_encodeObject_forKey__00abb6d8,param_1,
               &PTR____CFConstantStringClassReference_00a4b320);
    return;
  }
  return;
}



/* Entry: 0076928c; end: 00769293; +[GPBMessage accessInstanceVariablesDirectly] */

undefined8 FUN_0076928c(void)

{
  return 0;
}



/* Entry: 00769294; end: 00769663;  */

void FUN_00769294(code *param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                 undefined8 param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *unaff_x22;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  switch(*(undefined1 *)(lVar3 + 0x2c)) {
  case 0:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    func_0x00784da0();
    break;
  case 1:
    func_0x0073f2fc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x007694b4;
  case 2:
    func_0x0073f2fc(param_3 + 8,4);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x00769504;
  case 3:
    func_0x0073f2fc(param_3 + 8,4);
    uVar4 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    func_0x00785680(uVar4);
    break;
  case 4:
    func_0x0073f2fc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x007693b0;
  case 5:
    func_0x0073f2fc(param_3 + 8,8);
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x007695b8;
  case 6:
    func_0x0073f2fc(param_3 + 8,8);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
    *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    func_0x007853e0(uVar5);
    break;
  case 7:
    FUN_0073f060(param_3 + 8);
    goto code_r0x007694f4;
  case 8:
    FUN_0073f060(param_3 + 8);
    goto code_r0x007695a8;
  case 9:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
    goto code_r0x00769504;
  case 10:
    FUN_0073f060(param_3 + 8);
code_r0x007695a8:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x007695b8:
    func_0x00785b60();
    break;
  case 0xb:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x007694b4:
    func_0x00786ca0();
    break;
  case 0xc:
    FUN_0073f060(param_3 + 8);
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x007693b0:
    func_0x00786cc0();
    break;
  case 0xd:
    unaff_x22 = (undefined *)(param_3 + 8);
    func_0x0073f358();
    break;
  case 0xe:
    unaff_x22 = (undefined *)(param_3 + 8);
    FUN_0073f260();
    break;
  case 0xf:
    if ((*(byte *)(lVar3 + 0x2d) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00789270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_6,PTR_s_mergeFromCodedInputStream_extens_00abd1a8,param_3,param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0078af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_readMessage_extensionRegistry__00abd8e8,param_6,param_4);
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0078af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_readGroup_message_extensionRegis_00abd8d8,*(undefined4 *)(lVar3 + 0x28)
               ,param_6);
    return;
  case 0x11:
    iVar1 = (int)param_3 + 8;
    FUN_0073f060();
    func_0x00782a40();
    pcVar2 = param_1;
    func_0x00787580();
    if ((int)pcVar2 != 0) {
      func_0x00782a60();
      (*param_1)();
      if (iVar1 == 0) {
        FUN_00765938(param_2);
                    /* WARNING: Could not recover jumptable at 0x00789330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)();
        return;
      }
    }
code_r0x007694f4:
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_alloc();
code_r0x00769504:
    func_0x00785980();
    break;
  default:
    goto LAB_007695c4;
  }
  if (unaff_x22 == (undefined *)0x0) {
    return;
  }
LAB_007695c4:
  if (param_5 == 0) {
    func_0x0078de00(param_2);
  }
  else {
    func_0x0077e500();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x22);
  return;
}



/* Entry: 00769664; end: 00769a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769664(undefined *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  func_0x00788e40();
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x1e);
  puVar3 = (undefined *)0x0;
  puVar4 = puVar2;
  switch((ulong)puVar2 & 0xffffffff) {
  case 0:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_00ac38f8;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_00ac38d8;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_00ac38e0;
      break;
    case 3:
      puVar4 = PTR_PTR_00ac3900;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_00ac38e8;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_00ac38f0;
      break;
    case 6:
      puVar4 = PTR_PTR_00ac3908;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_00ac3910;
      break;
    case 0x10:
      goto LAB_00769a8c;
    case 0x11:
      puVar4 = PTR_PTR_00ac3918;
code_r0x00769a30:
      _objc_alloc();
      func_0x00782a40(param_1);
      func_0x00782a60();
      func_0x00786f00();
    default:
      goto LAB_00769a60;
    }
    break;
  case 1:
  case 0xb:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_00ac3798;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_00ac3778;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_00ac3780;
      break;
    case 3:
      puVar4 = PTR_PTR_00ac37a0;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_00ac3788;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_00ac3790;
      break;
    case 6:
      puVar4 = PTR_PTR_00ac37a8;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_00ac37b8;
      break;
    case 0x10:
      goto LAB_00769a8c;
    case 0x11:
      puVar4 = PTR_PTR_00ac37b0;
      goto code_r0x00769a30;
    default:
      goto LAB_00769a60;
    }
    break;
  case 2:
  case 7:
  case 9:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_00ac37e0;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_00ac37c0;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_00ac37c8;
      break;
    case 3:
      puVar4 = PTR_PTR_00ac37e8;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_00ac37d0;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_00ac37d8;
      break;
    case 6:
      puVar4 = PTR_PTR_00ac37f0;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_00ac3800;
      break;
    case 0x10:
      goto LAB_00769a8c;
    case 0x11:
      puVar4 = PTR_PTR_00ac37f8;
      goto code_r0x00769a30;
    default:
      goto LAB_00769a60;
    }
    break;
  case 3:
  case 6:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
    goto LAB_00769a8c;
  case 4:
  case 0xc:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_00ac3828;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_00ac3808;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_00ac3810;
      break;
    case 3:
      puVar4 = PTR_PTR_00ac3830;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_00ac3818;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_00ac3820;
      break;
    case 6:
      puVar4 = PTR_PTR_00ac3838;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_00ac3848;
      break;
    case 0x10:
      goto LAB_00769a8c;
    case 0x11:
      puVar4 = PTR_PTR_00ac3840;
      goto code_r0x00769a30;
    default:
      goto LAB_00769a60;
    }
    break;
  case 5:
  case 8:
  case 10:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_00ac3870;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_00ac3850;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_00ac3858;
      break;
    case 3:
      puVar4 = PTR_PTR_00ac3878;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_00ac3860;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_00ac3868;
      break;
    case 6:
      puVar4 = PTR_PTR_00ac3880;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_00ac3890;
      break;
    case 0x10:
      goto LAB_00769a8c;
    case 0x11:
      puVar4 = PTR_PTR_00ac3888;
      goto code_r0x00769a30;
    default:
      goto LAB_00769a60;
    }
    break;
  case 0xe:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_00ac38b8;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_00ac3898;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_00ac38a0;
      break;
    case 3:
      puVar4 = PTR_PTR_00ac38c0;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_00ac38a8;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_00ac38b0;
      break;
    case 6:
      puVar4 = PTR_PTR_00ac38c8;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_alloc_init_0099acc0)(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
        return;
      }
      puVar4 = PTR_PTR_00ac3938;
      _objc_alloc_init();
      goto code_r0x00769a78;
    case 0x10:
      goto LAB_00769a8c;
    case 0x11:
      puVar4 = PTR_PTR_00ac38d0;
      goto code_r0x00769a30;
    default:
      goto LAB_00769a60;
    }
    break;
  default:
    goto LAB_00769a60;
  }
  _objc_alloc_init();
LAB_00769a60:
  if (param_2 != 0) {
    if (((int)puVar2 == 0xe) && (bVar1 - 0xd < 4)) {
code_r0x00769a78:
      *(long *)(puVar4 + _DAT_00ac6294) = param_2;
    }
    else {
      *(long *)(puVar4 + 8) = param_2;
    }
  }
LAB_00769a8c:
  return;
}



/* Entry: 00769aa0; end: 00769bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769aa0(undefined *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x1e);
  switch(bVar1) {
  case 0:
    param_1 = PTR_PTR_00ac3750;
    break;
  case 1:
  case 0xb:
    param_1 = PTR_PTR_00ac3730;
    break;
  case 2:
  case 7:
  case 9:
    param_1 = PTR_PTR_00ac3728;
    break;
  case 3:
    param_1 = PTR_PTR_00ac3740;
    break;
  case 4:
  case 0xc:
    param_1 = PTR_PTR_00ac3738;
    break;
  case 5:
  case 8:
  case 10:
    param_1 = PTR_PTR_00ac2bd8;
    break;
  case 6:
    param_1 = PTR_PTR_00ac3748;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_alloc_init_0099acc0)(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
      return;
    }
    param_1 = PTR_PTR_00ac3930;
    _objc_alloc_init();
    goto code_r0x00769b6c;
  case 0x11:
    puVar2 = PTR_PTR_00ac3758;
    _objc_alloc();
    func_0x00782a40(param_1);
    func_0x00782a60();
    func_0x00786f00();
    param_1 = puVar2;
  default:
    goto LAB_00769b5c;
  }
  _objc_alloc_init();
LAB_00769b5c:
  if (param_2 != 0) {
    if (bVar1 - 0xd < 4) {
code_r0x00769b6c:
      *(long *)(param_1 + _DAT_00ac6014) = param_2;
    }
    else {
      *(long *)(param_1 + 8) = param_2;
    }
  }
  return;
}



/* Entry: 00769bc4; end: 00769c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769bc4(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar7 != 0) {
    func_0x0076c1a8(param_2,lVar7,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10));
  }
  uVar8 = *(uint *)(lVar11 + 0x18);
  lVar7 = *(long *)(param_2 + 0x40);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (param_3 == 0) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
    if ((param_3 & 1) == 0) goto LAB_0076c7c4;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (param_3 == 0) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
LAB_0076c7c4:
      bVar4 = (*(ushort *)(lVar11 + 0x1c) & 0x20) == 0;
      goto LAB_0076c7d0;
    }
    *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
  }
  bVar4 = true;
LAB_0076c7d0:
  uVar8 = *(uint *)(lVar11 + 0x14);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (!bVar4) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (bVar4) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
    }
  }
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar7 = *(long *)(param_2 + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    _objc_retain();
    lVar12 = *(long *)(lVar7 + 8);
    bVar1 = *(byte *)(lVar12 + 0x1e);
    uVar2 = *(ushort *)(lVar12 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar7 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                      *(undefined4 *)(lVar12 + 0x10));
      uVar2 = *(ushort *)(lVar12 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar7 = param_2, func_0x007882e0(), lVar7 != 0)) {
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = *(undefined4 *)(lVar12 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar10 = (ulong)(uVar8 >> 5);
      uVar8 = 1 << (ulong)(uVar8 & 0x1f);
      if (param_2 == 0) goto LAB_0076c448;
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      _objc_release(param_2);
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        param_2 = 0;
        uVar9 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
      }
      else {
        uVar10 = (ulong)(uVar8 >> 5);
        uVar8 = 1 << (ulong)(uVar8 & 0x1f);
LAB_0076c448:
        param_2 = 0;
        *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18));
    *(long *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18)) = param_2;
    param_2 = lVar11;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar11)) {
    FUN_007627b0(uVar10);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar10 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18)) = param_2;
  param_2 = lVar11;
  if (uVar10 == 0) goto FUN_0076248c;
  lVar12 = lVar7;
  func_0x00783280();
  uVar6 = uVar10;
  if ((int)lVar12 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar10 + 8) == lVar11) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar5 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar10,puVar5);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar7 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar5 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar10,puVar5);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar6 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar10);
  param_2 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 00769c94; end: 00769d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769c94(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00780e20();
  do {
    lVar4 = param_2;
    lVar10 = *(long *)(lVar9 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) == 0) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        func_0x0076c1a8(lVar4,*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                        *(undefined4 *)(lVar10 + 0x10));
        uVar2 = *(ushort *)(lVar10 + 0x1c);
      }
      if (((uVar2 >> 5 & 1) == 0) || (lVar9 = param_3, func_0x007882e0(), lVar9 != 0)) {
        uVar7 = *(uint *)(lVar10 + 0x14);
        lVar9 = *(long *)(lVar4 + 0x40);
        if ((int)uVar7 < 0) {
          uVar8 = 0;
          if (param_3 != 0) {
            uVar8 = *(undefined4 *)(lVar10 + 0x10);
          }
          goto LAB_0076c41c;
        }
        uVar11 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
        if (param_3 == 0) goto LAB_0076c448;
        *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) | uVar7;
      }
      else {
        _objc_release(param_3);
        uVar7 = *(uint *)(lVar10 + 0x14);
        lVar9 = *(long *)(lVar4 + 0x40);
        if ((int)uVar7 < 0) {
          param_3 = 0;
          uVar8 = 0;
LAB_0076c41c:
          *(undefined4 *)(lVar9 + (ulong)-uVar7 * 4) = uVar8;
        }
        else {
          uVar11 = (ulong)(uVar7 >> 5);
          uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
          param_3 = 0;
          *(uint *)(lVar9 + uVar11 * 4) = *(uint *)(lVar9 + uVar11 * 4) & (uVar7 ^ 0xffffffff);
        }
      }
      uVar11 = *(ulong *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(lVar9 + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        if ((bVar1 - 0xf < 2) && (*(long *)(uVar11 + 0x20) == lVar4)) {
          FUN_007627b0(uVar11);
        }
        goto LAB_0076c488;
      }
    }
    else {
      uVar11 = *(ulong *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
      *(long *)(*(long *)(lVar4 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_3;
      if (uVar11 != 0) {
        lVar10 = lVar9;
        func_0x00783280();
        uVar6 = uVar11;
        if ((int)lVar10 == 1) {
          if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
            if (*(long *)(uVar11 + 8) == lVar4) {
              *(undefined8 *)(uVar11 + 8) = 0;
            }
            goto LAB_0076c488;
          }
          puVar5 = PTR_PTR_00ac3930;
          _objc_opt_class(PTR_PTR_00ac3930);
          _objc_opt_isKindOfClass(uVar11,puVar5);
          iVar3 = _DAT_00ac6014;
        }
        else {
          func_0x00788e40();
          if (((int)lVar9 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
          puVar5 = PTR_PTR_00ac3938;
          _objc_opt_class(PTR_PTR_00ac3938);
          _objc_opt_isKindOfClass(uVar11,puVar5);
          iVar3 = _DAT_00ac6294;
        }
        if (((uVar6 & 1) != 0) && (*(long *)(uVar11 + (long)iVar3) == lVar4)) {
          *(undefined8 *)(uVar11 + (long)iVar3) = 0;
        }
LAB_0076c488:
        _objc_release(uVar11);
      }
    }
    param_2 = *(long *)(lVar4 + 0x20);
    if (param_2 == 0) {
      return;
    }
    lVar9 = *(long *)(lVar4 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_2,PTR_s_setExtension_value__00abe490,*(undefined8 *)(lVar4 + 0x30));
      return;
    }
    _objc_retain();
    param_3 = lVar4;
  } while( true );
}



/* Entry: 00769d64; end: 00769e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769d64(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar9 = uVar5;
  func_0x00787f40();
  puVar4 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if ((uVar9 & 1) == 0) {
    _objc_opt_class();
    func_0x00789760();
    func_0x0078ad40(puVar4);
  }
  lVar11 = *(long *)(uVar5 + 8);
  if (*(long *)(uVar5 + 0x10) != 0) {
    func_0x0076c1a8(param_2,*(long *)(uVar5 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                    *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_0076c694;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_0076248c;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_0076c694:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_0076248c;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_0076248c:
  do {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0078de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (lVar11,PTR_s_setExtension_value__00abe490,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    _objc_retain();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x0076c2fc;
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x0076c1a8(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                      *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_2, func_0x007882e0(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_0076c41c;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_0076c448;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      _objc_release(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_0076c41c:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_0076c448:
        param_2 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    FUN_007627b0(uVar9);
  }
  goto LAB_0076c488;
code_r0x0076c2fc:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar11;
  if (uVar9 == 0) goto FUN_0076248c;
  lVar10 = lVar6;
  func_0x00783280();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_0076c3fc:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_0076c488;
    }
    puVar4 = PTR_PTR_00ac3930;
    _objc_opt_class(PTR_PTR_00ac3930);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6014;
  }
  else {
    func_0x00788e40();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_0076c3fc;
    puVar4 = PTR_PTR_00ac3938;
    _objc_opt_class(PTR_PTR_00ac3938);
    _objc_opt_isKindOfClass(uVar9,puVar4);
    iVar3 = _DAT_00ac6294;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_0076c488:
  _objc_release(uVar9);
  param_2 = lVar11;
  goto FUN_0076248c;
}



/* Entry: 00769e94; end: 00769f3f; +[GPBRootObject initialize] */

void FUN_00769e94(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  
  if (lRam0000000000b646c0 == 0) {
    pcStack_48 = FUN_00769f40;
    uStack_50 = 0;
    puStack_38 = (undefined *)0x769f4c;
    puStack_40 = (undefined *)0x769f48;
    pcStack_28 = FUN_00769f84;
    pcStack_30 = FUN_00769f68;
    lVar1 = *(long *)PTR__kCFAllocatorDefault_00999d30;
    _CFDictionaryCreateMutable(lVar1,0,&uStack_50,PTR__kCFTypeDictionaryValueCallBacks_00999d88);
    puVar2 = PTR_PTR_00ac3950;
    lRam0000000000b646c0 = lVar1;
    _objc_alloc_init();
    puRam0000000000b646c8 = puVar2;
  }
  puVar2 = param_1;
  func_0x00792520();
  puVar3 = PTR__OBJC_CLASS___GPBRootObject_00ac3928;
  _objc_opt_class();
  if (puVar2 == puVar3) {
    func_0x00783040(param_1);
  }
  return;
}



/* Entry: 00769f40; end: 00769f67;  */

undefined8 FUN_00769f40(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 00769f68; end: 00769f83;  */

bool FUN_00769f68(int param_1)

{
  _strcmp();
  return param_1 == 0;
}



/* Entry: 00769f84; end: 00769fc3;  */

int FUN_00769f84(char *param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar3 = 1;
    do {
      uVar1 = (uVar1 + (int)cVar2) * 0x401;
      uVar1 = uVar1 ^ uVar1 >> 6;
      cVar2 = param_1[uVar3];
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (cVar2 != '\0');
    uVar1 = uVar1 * 9;
  }
  return (uVar1 ^ uVar1 >> 0xb) * 0x8001;
}



/* Entry: 00769fc4; end: 00769fcf; +[GPBRootObject extensionRegistry] */

undefined8 FUN_00769fc4(void)

{
  return uRam0000000000b646c8;
}



/* Entry: 00769fd0; end: 0076a0fb; +[GPBRootObject globallyRegisterExtension:] */

void FUN_00769fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x00791860(param_3);
  _os_unfair_lock_lock(0xb646b8);
  _CFDictionarySetValue(uRam0000000000b646c0,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(0xb646b8);
  return;
}



/* Entry: 0076a0fc; end: 0076a237;  */

undefined8 FUN_0076a0fc(long param_1,char *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  long lVar4;
  long extraout_x12;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _sel_getName();
  cVar3 = *param_2;
  if (cVar3 == '_') {
LAB_0076a13c:
    uVar5 = 0;
  }
  else {
    lVar7 = 1;
    while (cVar3 != '\0') {
      if (cVar3 == ':') goto LAB_0076a13c;
      pcVar1 = param_2 + lVar7;
      lVar7 = lVar7 + 1;
      cVar3 = *pcVar1;
    }
    _class_getName();
    lVar4 = param_1;
    _strlen();
    (*(code *)PTR____chkstk_darwin_00999f48)(lVar4 + lVar7);
    puVar6 = auStack_50 + -extraout_x12;
    _memcpy(puVar6,param_1,lVar4);
    puVar2 = puVar6 + lVar4;
    *puVar2 = 0x5f;
    _memcpy(puVar2 + 1,param_2,lVar7 + -1);
    puVar2[lVar7] = 0;
    param_2 = (char *)0xb646b8;
    _os_unfair_lock_lock(0xb646b8);
    uVar5 = uRam0000000000b646c0;
    _CFDictionaryGetValue(uRam0000000000b646c0,puVar6);
    _os_unfair_lock_unlock();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    return *(undefined8 *)(param_2 + 0x20);
  }
  return uVar5;
}



/* Entry: 0076a238; end: 0076a23f;  */

undefined8 FUN_0076a238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0076a240; end: 0076a29b; +[GPBRootObject resolveClassMethod:] */

void FUN_0076a240(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x0076a024(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR__OBJC_METACLASS___GPBRootObject_00ac48c8;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_resolveClassMethod__00ab98a8,param_3);
  }
  return;
}



/* Entry: 0076a29c; end: 0076a2e3; -[GPBUnknownField initWithNumber:] */

void FUN_0076a29c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac48d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 0076a2e4; end: 0076a34b; -[GPBUnknownField dealloc] */

void FUN_0076a2e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_00ac48d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0076a34c; end: 0076a4eb; -[GPBUnknownField copyWithZone:] */

/* WARNING: Possible PIC construction at 0x0076a554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076a57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076a5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076a5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076a5a8) */
/* WARNING: Removing unreachable block (ram,0x0076a580) */
/* WARNING: Removing unreachable block (ram,0x0076a558) */
/* WARNING: Removing unreachable block (ram,0x0076a5d0) */

undefined * FUN_0076a34c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = PTR_PTR_00ac3958;
  func_0x0077ec40();
  func_0x00785dc0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00780e60();
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00780e60();
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00789720();
  *(undefined8 *)(puVar6 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00780e60();
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00780e80();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077ec40();
    func_0x00780e80(*(undefined8 *)(param_1 + 0x30));
    func_0x00784f20();
    *(undefined **)(puVar6 + 0x30) = puVar3;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar8 = *(long *)(param_1 + 0x30);
    lVar2 = lVar8;
    func_0x00780ea0();
    param_3 = puVar7;
    if (lVar2 != 0) {
      lVar9 = *plStack_110;
      do {
        lVar10 = 0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(lVar8);
          }
          uVar1 = *(undefined8 *)(lStack_118 + lVar10 * 8);
          func_0x00780e60(uVar1);
          func_0x0077e720(*(undefined8 *)(puVar6 + 0x30));
          _objc_release(uVar1);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar8;
        param_3 = &uStack_120;
        func_0x00780ea0();
      } while (lVar2 != 0);
    }
  }
  puVar4 = (undefined1 *)0x0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((undefined8 *)puVar4 == param_3) {
LAB_0076a608:
    return (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  puVar6 = PTR_PTR_00ac3958;
  _objc_opt_class(PTR_PTR_00ac3958);
  puVar5 = (undefined1 *)param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  if ((((ulong)puVar5 & 1) == 0) || (*(int *)(puVar4 + 8) != *(int *)((long)param_3 + 8))) {
    return (undefined *)0x0;
  }
  lVar2 = *(long *)(puVar4 + 0x10);
  func_0x00780e80();
  if (lVar2 == 0) {
    lVar2 = *(long *)((long)param_3 + 0x10);
    func_0x00780e80();
    if (lVar2 == 0) {
      lVar2 = *(long *)(puVar4 + 0x18);
      func_0x00780e80();
      if (lVar2 == 0) {
        lVar2 = *(long *)((long)param_3 + 0x18);
        func_0x00780e80();
        if (lVar2 == 0) {
          lVar2 = *(long *)(puVar4 + 0x20);
          func_0x00780e80();
          if (lVar2 == 0) {
            lVar2 = *(long *)((long)param_3 + 0x20);
            func_0x00780e80();
            if (lVar2 == 0) {
              lVar2 = *(long *)(puVar4 + 0x28);
              func_0x00780e80();
              if (lVar2 == 0) {
                lVar2 = *(long *)((long)param_3 + 0x28);
                func_0x00780e80();
                if (lVar2 == 0) {
                  lVar2 = *(long *)(puVar4 + 0x30);
                  func_0x00780e80();
                  if (lVar2 == 0) {
                    lVar2 = *(long *)((long)param_3 + 0x30);
                    func_0x00780e80();
                    if (lVar2 == 0) goto LAB_0076a608;
                  }
                  puVar6 = *(undefined **)(puVar4 + 0x30);
                  uVar1 = *(undefined8 *)((long)param_3 + 0x30);
                  goto code_r0x007877e0;
                }
              }
              puVar6 = *(undefined **)(puVar4 + 0x28);
              uVar1 = *(undefined8 *)((long)param_3 + 0x28);
              goto code_r0x007877e0;
            }
          }
          puVar6 = *(undefined **)(puVar4 + 0x20);
          uVar1 = *(undefined8 *)((long)param_3 + 0x20);
          goto code_r0x007877e0;
        }
      }
      puVar6 = *(undefined **)(puVar4 + 0x18);
      uVar1 = *(undefined8 *)((long)param_3 + 0x18);
      goto code_r0x007877e0;
    }
  }
  puVar6 = *(undefined **)(puVar4 + 0x10);
  uVar1 = *(undefined8 *)((long)param_3 + 0x10);
code_r0x007877e0:
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(puVar6,PTR_s_isEqual__00abcb00,uVar1);
  return puVar6;
}



/* Entry: 0076a4ec; end: 0076a617; -[GPBUnknownField isEqual:] */

/* WARNING: Possible PIC construction at 0x0076a554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076a57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076a5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0076a5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0076a5a8) */
/* WARNING: Removing unreachable block (ram,0x0076a580) */
/* WARNING: Removing unreachable block (ram,0x0076a558) */
/* WARNING: Removing unreachable block (ram,0x0076a5d0) */

undefined8 FUN_0076a4ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == param_3) {
    return 1;
  }
  puVar1 = PTR_PTR_00ac3958;
  _objc_opt_class(PTR_PTR_00ac3958);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00780e80();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_3 + 0x10);
    func_0x00780e80();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x00780e80();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_3 + 0x18);
        func_0x00780e80();
        if (lVar3 == 0) {
          lVar3 = *(long *)(param_1 + 0x20);
          func_0x00780e80();
          if (lVar3 == 0) {
            lVar3 = *(long *)(param_3 + 0x20);
            func_0x00780e80();
            if (lVar3 == 0) {
              lVar3 = *(long *)(param_1 + 0x28);
              func_0x00780e80();
              if (lVar3 == 0) {
                lVar3 = *(long *)(param_3 + 0x28);
                func_0x00780e80();
                if (lVar3 == 0) {
                  lVar3 = *(long *)(param_1 + 0x30);
                  func_0x00780e80();
                  if (lVar3 == 0) {
                    lVar3 = *(long *)(param_3 + 0x30);
                    func_0x00780e80();
                    if (lVar3 == 0) {
                      return 1;
                    }
                  }
                  uVar4 = *(undefined8 *)(param_1 + 0x30);
                  uVar5 = *(undefined8 *)(param_3 + 0x30);
                  goto code_r0x007877e0;
                }
              }
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              uVar5 = *(undefined8 *)(param_3 + 0x28);
              goto code_r0x007877e0;
            }
          }
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          uVar5 = *(undefined8 *)(param_3 + 0x20);
          goto code_r0x007877e0;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      goto code_r0x007877e0;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
code_r0x007877e0:
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar4,PTR_s_isEqual__00abcb00,uVar5);
  return uVar4;
}



/* Entry: 0076a618; end: 0076a68b; -[GPBUnknownField hash] */

long FUN_0076a618(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x007843a0(lVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x007843a0(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x007843a0(lVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x007843a0(lVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x007843a0(lVar5);
  return lVar5 + (lVar4 + (lVar3 + ((lVar2 - lVar1) + lVar1 * 0x20) * 0x1f) * 0x1f) * 0x1f +
         0x1b4d89f;
}



/* Entry: 0076a68c; end: 0076a74b; -[GPBUnknownField writeToOutput:] */

void FUN_0076a68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x007944c0(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00793e80(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00793ee0(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00780e80();
  if (lVar1 != 0) {
    func_0x00793ce0(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00780e80();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00794530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (param_3,PTR_s_writeUnknownGroupArray_values__00abfe58,*(undefined4 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 0076a74c; end: 0076aa27; -[GPBUnknownField serializedSize] */

/* WARNING: Removing unreachable block (ram,0x0076a880) */
/* WARNING: Removing unreachable block (ram,0x0076a954) */

long FUN_0076a74c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  uint uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_198 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x2020000000;
  uStack_170 = 0;
  uVar2 = *(uint *)(param_1 + 8);
  puStack_1b8 = PTR___NSConcreteStackBlock_00999f30;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_0076aa28;
  puStack_1a0 = &UNK_00a20ba8;
  uStack_190 = uVar2;
  puStack_180 = puStack_198;
  func_0x00782cc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_1b8);
  func_0x00782cc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00782cc0(*(undefined8 *)(param_1 + 0x20));
  lVar8 = *(long *)(param_1 + 0x28);
  lVar7 = lVar8;
  func_0x00780ea0();
  while (lVar7 != 0) {
    lVar9 = 0;
    do {
      uVar4 = (ulong)uVar2;
      func_0x00742b70((ulong)uVar2,*(undefined8 *)(lVar9 * 8));
      puStack_180[3] = puStack_180[3] + uVar4;
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = lVar8;
    func_0x00780ea0();
  }
  lVar8 = *(long *)(param_1 + 0x30);
  lVar7 = lVar8;
  func_0x00780ea0();
  if (lVar7 != 0) {
    uVar3 = uVar2 << 3;
    lVar9 = 8;
    if ((uVar2 >> 0x19 & 0xf) != 0) {
      lVar9 = 10;
    }
    lVar1 = 2;
    if (0x7f < uVar3) {
      lVar1 = 4;
    }
    lVar5 = 6;
    if (0x1fffff < uVar3) {
      lVar5 = lVar9;
    }
    if (0x3fff < uVar3) {
      lVar1 = lVar5;
    }
    do {
      lVar9 = 0;
      do {
        lVar5 = *(long *)(lVar9 * 8);
        func_0x0078c740();
        puStack_180[3] = lVar5 + lVar1 + puStack_180[3];
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar8;
      func_0x00780ea0();
    } while (lVar7 != 0);
  }
  lVar7 = puStack_180[3];
  puVar6 = &uStack_188;
  __Block_object_dispose(puVar6,8);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    lVar8 = 8;
    __Block_object_dispose(&uStack_188);
    __Unwind_Resume();
    uVar2 = *(uint *)(puVar6 + 5) << 3;
    lVar7 = 4;
    if ((*(uint *)(puVar6 + 5) & 0x1fffffff) >> 0x19 != 0) {
      lVar7 = 5;
    }
    lVar9 = 3;
    if (0x1fffff < uVar2) {
      lVar9 = lVar7;
    }
    lVar7 = 2;
    if (0x3fff < uVar2) {
      lVar7 = lVar9;
    }
    lVar9 = 1;
    if (0x7f < uVar2) {
      lVar9 = lVar7;
    }
    func_0x00742934();
    *(long *)(*(long *)(puVar6[4] + 8) + 0x18) =
         lVar8 + lVar9 + *(long *)(*(long *)(puVar6[4] + 8) + 0x18);
    return lVar8;
  }
  return lVar7;
}



/* Entry: 0076aa28; end: 0076aa9f;  */

void FUN_0076aa28(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28) << 3;
  lVar3 = 4;
  if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
    lVar3 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = 2;
  if (0x3fff < uVar2) {
    lVar3 = lVar1;
  }
  lVar1 = 1;
  if (0x7f < uVar2) {
    lVar1 = lVar3;
  }
  func_0x00742934();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar3 + 0x18) = param_2 + lVar1 + *(long *)(lVar3 + 0x18);
  return;
}



/* Entry: 0076aaa0; end: 0076ab47;  */

void FUN_0076aaa0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28) << 3;
  lVar3 = 8;
  if ((*(uint *)(param_1 + 0x28) & 0x1fffffff) >> 0x19 != 0) {
    lVar3 = 9;
  }
  lVar1 = 7;
  if (0x1fffff < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = 6;
  if (0x3fff < uVar2) {
    lVar3 = lVar1;
  }
  lVar1 = 5;
  if (0x7f < uVar2) {
    lVar1 = lVar3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar1;
  return;
}



/* Entry: 0076ab48; end: 0076ac3f; -[GPBUnknownField writeAsMessageSetExtensionToOutput:] */

/* WARNING: Removing unreachable block (ram,0x0076ae80) */
/* WARNING: Removing unreachable block (ram,0x0076af18) */
/* WARNING: Removing unreachable block (ram,0x0076acbc) */

undefined * FUN_0076ab48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = lVar4;
  func_0x00780ea0(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00794140(param_3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  puVar3 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = *(long *)(puVar3 + 0x28);
  lVar1 = lVar6;
  func_0x00780ea0();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    do {
      lVar7 = 0;
      do {
        uVar2 = (ulong)*(uint *)(puVar3 + 8);
        func_0x00742e64();
        puVar5 = puVar5 + uVar2;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar6;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_opt_class();
  func_0x007921a0();
  func_0x00782cc0(*(undefined8 *)(lVar1 + 0x10));
  func_0x00782cc0(*(undefined8 *)(lVar1 + 0x18));
  func_0x00782cc0(*(undefined8 *)(lVar1 + 0x20));
  lVar7 = *(long *)(lVar1 + 0x28);
  lVar4 = lVar7;
  func_0x00780ea0();
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      func_0x0077eec0(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar7;
    func_0x00780ea0();
  }
  lVar4 = *(long *)(lVar1 + 0x30);
  lVar1 = lVar4;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      func_0x0077eec0(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar4;
    func_0x00780ea0();
  }
  puVar5 = puVar3;
  func_0x0077ef80();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(puVar5 + 0x20);
  func_0x0077eec0(puVar3);
  return puVar3;
}



/* Entry: 0076ac40; end: 0076ad43; -[GPBUnknownField serializedSizeAsMessageSetExtension] */

/* WARNING: Removing unreachable block (ram,0x0076ae80) */
/* WARNING: Removing unreachable block (ram,0x0076af18) */

undefined * FUN_0076ac40(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = lVar4;
  func_0x00780ea0(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = (ulong)*(uint *)(param_1 + 8);
        func_0x00742e64();
        puVar5 = puVar5 + uVar2;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
    lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
    _objc_opt_class();
    func_0x007921a0();
    func_0x00782cc0(*(undefined8 *)(lVar1 + 0x10));
    func_0x00782cc0(*(undefined8 *)(lVar1 + 0x18));
    func_0x00782cc0(*(undefined8 *)(lVar1 + 0x20));
    lVar7 = *(long *)(lVar1 + 0x28);
    lVar4 = lVar7;
    func_0x00780ea0();
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        func_0x0077eec0(puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar7;
      func_0x00780ea0();
    }
    lVar4 = *(long *)(lVar1 + 0x30);
    lVar1 = lVar4;
    func_0x00780ea0();
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        func_0x0077eec0(puVar5);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00780ea0();
    }
    puVar3 = puVar5;
    func_0x0077ef80();
    if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
      ___stack_chk_fail();
      puVar5 = *(undefined **)(puVar3 + 0x20);
      func_0x0077eec0(puVar5);
      return puVar5;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 0076ad44; end: 0076afaf; -[GPBUnknownField description] */

/* WARNING: Removing unreachable block (ram,0x0076ae80) */
/* WARNING: Removing unreachable block (ram,0x0076af18) */

undefined * FUN_0076ad44(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_opt_class();
  func_0x007921a0();
  func_0x00782cc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00782cc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00782cc0(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x28);
  lVar1 = lVar5;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      func_0x0077eec0(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar5;
    func_0x00780ea0();
  }
  lVar5 = *(long *)(param_1 + 0x30);
  lVar1 = lVar5;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      func_0x0077eec0(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar5;
    func_0x00780ea0();
  }
  puVar2 = puVar3;
  func_0x0077ef80();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    puVar3 = *(undefined **)(puVar2 + 0x20);
    func_0x0077eec0(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 0076afb0; end: 0076b033;  */

void FUN_0076afb0(long param_1,undefined8 param_2)

{
  func_0x0077eec0(*(undefined8 *)(param_1 + 0x20),param_2,
                  &PTR____CFConstantStringClassReference_00a4b380);
  return;
}



/* Entry: 0076b034; end: 0076b24b; -[GPBUnknownField mergeFromField:] */

/* WARNING: Removing unreachable block (ram,0x0076b1c0) */

void FUN_0076b034(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = param_3;
  func_0x007937a0();
  lVar5 = lVar1;
  func_0x00780e80();
  if (lVar5 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00780e20();
      *(long *)(param_1 + 0x10) = lVar1;
    }
    else {
      func_0x0077ea00();
    }
  }
  lVar1 = param_3;
  func_0x007837c0();
  lVar5 = lVar1;
  func_0x00780e80();
  if (lVar5 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00780e20();
      *(long *)(param_1 + 0x18) = lVar1;
    }
    else {
      func_0x0077ea00();
    }
  }
  lVar1 = param_3;
  func_0x007837e0();
  lVar5 = lVar1;
  func_0x00780e80();
  if (lVar5 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00780e20();
      *(long *)(param_1 + 0x20) = lVar1;
    }
    else {
      func_0x0077ea00();
    }
  }
  lVar1 = param_3;
  func_0x00788300();
  lVar5 = lVar1;
  func_0x00780e80();
  if (lVar5 != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00789700();
      *(long *)(param_1 + 0x28) = lVar1;
    }
    else {
      func_0x0077e760();
    }
  }
  func_0x007841a0();
  lVar1 = param_3;
  func_0x00780e80();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      _objc_alloc();
      func_0x00780e80(param_3);
      func_0x00784f20();
      *(undefined **)(param_1 + 0x30) = puVar2;
    }
    lVar1 = param_3;
    func_0x00780ea0();
    while (lVar1 != 0) {
      lVar5 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar5 * 8);
        func_0x00780e20(uVar3);
        func_0x0077e720(*(undefined8 *)(param_1 + 0x30));
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00780ea0();
    }
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    if (*(long *)(lVar1 + 0x10) == 0) {
      puVar2 = PTR_PTR_00ac3738;
      _objc_alloc();
      func_0x00786fe0();
      *(undefined **)(lVar1 + 0x10) = puVar2;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(long *)(lVar1 + 0x10),PTR_s_addValue__00aba768);
    return;
  }
  return;
}



/* Entry: 0076b24c; end: 0076b2a7; -[GPBUnknownField addVarint:] */

void FUN_0076b24c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(long *)(param_1 + 0x10),PTR_s_addValue__00aba768);
    return;
  }
  puVar1 = PTR_PTR_00ac3738;
  _objc_alloc();
  func_0x00786fe0();
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 0076b2a8; end: 0076b303; -[GPBUnknownField addFixed32:] */

void FUN_0076b2a8(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(long *)(param_1 + 0x18),PTR_s_addValue__00aba768);
    return;
  }
  puVar1 = PTR_PTR_00ac3730;
  _objc_alloc();
  func_0x00786fe0();
  *(undefined **)(param_1 + 0x18) = puVar1;
  return;
}



/* Entry: 0076b304; end: 0076b35f; -[GPBUnknownField addFixed64:] */

void FUN_0076b304(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(long *)(param_1 + 0x20),PTR_s_addValue__00aba768);
    return;
  }
  puVar1 = PTR_PTR_00ac3738;
  _objc_alloc();
  func_0x00786fe0();
  *(undefined **)(param_1 + 0x20) = puVar1;
  return;
}



/* Entry: 0076b360; end: 0076b3bb; -[GPBUnknownField addLengthDelimited:] */

void FUN_0076b360(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(long *)(param_1 + 0x28),PTR_s_addObject__00aba6c0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc();
  func_0x00785e00();
  *(undefined **)(param_1 + 0x28) = puVar1;
  return;
}



/* Entry: 0076b3bc; end: 0076b417; -[GPBUnknownField addGroup:] */

void FUN_0076b3bc(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(long *)(param_1 + 0x30),PTR_s_addObject__00aba6c0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc();
  func_0x00785e00();
  *(undefined **)(param_1 + 0x30) = puVar1;
  return;
}



/* Entry: 0076b418; end: 0076b41f; -[GPBUnknownField number] */

undefined4 FUN_0076b418(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 0076b420; end: 0076b427; -[GPBUnknownField varintList] */

undefined8 FUN_0076b420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0076b428; end: 0076b42f; -[GPBUnknownField fixed32List] */

undefined8 FUN_0076b428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0076b430; end: 0076b437; -[GPBUnknownField fixed64List] */

undefined8 FUN_0076b430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0076b438; end: 0076b43f; -[GPBUnknownField lengthDelimitedList] */

undefined8 FUN_0076b438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0076b440; end: 0076b447; -[GPBUnknownField groupList] */

undefined8 FUN_0076b440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0076b448; end: 0076b4cb; -[GPBUnknownFieldSet copyWithZone:] */

undefined * FUN_0076b448(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3948;
  func_0x0077ec40(PTR_PTR_00ac3948);
  func_0x007849a0();
  if (*(long *)(param_1 + 8) != 0) {
    _CFDictionaryApplyFunction(*(long *)(param_1 + 8),0x76b494,puVar1);
  }
  return puVar1;
}



/* Entry: 0076b4cc; end: 0076b517; -[GPBUnknownFieldSet dealloc] */

void FUN_0076b4cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_00ac48d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0076b518; end: 0076b58b; -[GPBUnknownFieldSet isEqual:] */

bool FUN_0076b518(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_00ac3948;
  _objc_opt_class(PTR_PTR_00ac3948);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    bVar1 = lVar4 == 0 && *(long *)(param_3 + 8) == 0;
    if (lVar4 != 0 && *(long *)(param_3 + 8) != 0) {
      _CFEqual(lVar4);
      bVar1 = (int)lVar4 != 0;
    }
  }
  return bVar1;
}


