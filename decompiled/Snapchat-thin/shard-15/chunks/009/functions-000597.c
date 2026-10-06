/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd5eb3c; end: 10bd5eb77; -[GPBCodedInputStream readSFixed64] */

undefined8 FUN_10bd5eb3c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3ab04(param_1 + 8,8);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return uVar1;
}



/* Entry: 10bd5eb78; end: 10bd5eb97; -[GPBCodedInputStream readSInt32] */

uint FUN_10bd5eb78(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c3aafc(param_1);
  return -((uint)param_1 & 1) ^ (uint)param_1 >> 1;
}



/* Entry: 10bd5eb98; end: 10bd5ebb7; -[GPBCodedInputStream readSInt64] */

ulong FUN_10bd5eb98(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 8;
  func_0x000107c3aafc(uVar1);
  return -(uVar1 & 1) ^ uVar1 >> 1;
}



/* Entry: 10bd5ebb8; end: 10bd5ebfb; -[GPBCodedOutputStream initWithOutputStream:] */

void FUN_10bd5ebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,
                      *(undefined8 *)PTR__vm_page_size_11034cda0);
                    /* WARNING: Could not recover jumptable at 0x00010c032810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithOutputStream_data__1125ea3f8,param_3,puVar1);
  return;
}



/* Entry: 10bd5ebfc; end: 10bd5ec23; +[GPBCodedOutputStream streamWithData:] */

void FUN_10bd5ebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010c008240(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 10bd5ec24; end: 10bd5ec2f; -[GPBCodedOutputStream bytesWritten] */

long FUN_10bd5ec24(long param_1)

{
  return *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20);
}



/* Entry: 10bd5ec30; end: 10bd5ec3b; -[GPBCodedOutputStream writeDoubleNoTag:] */

void FUN_10bd5ec30(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x20);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x30);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x38);
  return;
}



/* Entry: 10bd5ec3c; end: 10bd5ec47; -[GPBCodedOutputStream writeFloatNoTag:] */

void FUN_10bd5ec3c(undefined4 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x18);
  return;
}



/* Entry: 10bd5ec48; end: 10bd5ed13;  */

void FUN_10bd5ec48(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    func_0x000107c31848(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)param_2;
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    func_0x000107c31848(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 8);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    func_0x000107c31848(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x10);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    func_0x000107c31848(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x18);
  return;
}



/* Entry: 10bd5ed14; end: 10bd5ed53; -[GPBCodedOutputStream writeFloat:value:] */

void FUN_10bd5ed14(undefined4 param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c31844(param_2 + 8,param_4 << 3 | 5);
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x18);
  return;
}



/* Entry: 10bd5ed54; end: 10bd5ed5f; -[GPBCodedOutputStream writeUInt64NoTag:] */

void FUN_10bd5ed54(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_3 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_3;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 10bd5ed60; end: 10bd5ed6b; -[GPBCodedOutputStream writeInt64NoTag:] */

void FUN_10bd5ed60(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_3 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_3;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 10bd5ed6c; end: 10bd5ed77; -[GPBCodedOutputStream writeFixed64NoTag:] */

void FUN_10bd5ed6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x38);
  return;
}



/* Entry: 10bd5ed78; end: 10bd5ed83; -[GPBCodedOutputStream writeFixed32NoTag:] */

void FUN_10bd5ed78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  return;
}



/* Entry: 10bd5ed84; end: 10bd5edbb; -[GPBCodedOutputStream writeFixed32:value:] */

void FUN_10bd5ed84(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c31844(param_1 + 8,param_3 << 3 | 5);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  return;
}



/* Entry: 10bd5edbc; end: 10bd5ee03; -[GPBCodedOutputStream writeBoolNoTag:] */

void FUN_10bd5edbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = param_3;
  return;
}



/* Entry: 10bd5ee04; end: 10bd5ee3b; -[GPBCodedOutputStream writeGroupNoTag:value:] */

void FUN_10bd5ee04(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00010c2be4c0(param_4,param_2,param_1);
  uVar5 = param_3 << 3 | 4;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 10bd5ee3c; end: 10bd5ee83; -[GPBCodedOutputStream writeGroup:value:] */

void FUN_10bd5ee3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c31844(param_1 + 8,(int)param_3 << 3 | 3);
                    /* WARNING: Could not recover jumptable at 0x00010c2bded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_writeGroupNoTag_value__11268d1d8,param_3,param_4);
  return;
}



/* Entry: 10bd5ee84; end: 10bd5eebb; -[GPBCodedOutputStream writeUnknownGroupNoTag:value:] */

void FUN_10bd5ee84(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00010c2be4c0(param_4,param_2,param_1);
  uVar5 = param_3 << 3 | 4;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 10bd5eebc; end: 10bd5ef03; -[GPBCodedOutputStream writeUnknownGroup:value:] */

void FUN_10bd5eebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c31844(param_1 + 8,(int)param_3 << 3 | 3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_writeUnknownGroupNoTag_value__11268d3e8,param_3,param_4);
  return;
}



/* Entry: 10bd5ef04; end: 10bd5ef0f; -[GPBCodedOutputStream writeUInt32NoTag:] */

void FUN_10bd5ef04(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_3 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_3;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 10bd5ef10; end: 10bd5ef43; -[GPBCodedOutputStream writeUInt32:value:] */

/* WARNING: Possible PIC construction at 0x00010bd5ef2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd5ef30) */

void FUN_10bd5ef10(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3 << 3;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 10bd5ef44; end: 10bd5ef4f; -[GPBCodedOutputStream writeEnumNoTag:] */

void FUN_10bd5ef44(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  plVar1 = (long *)(param_1 + 8);
  if ((int)param_3 < 0) {
    uVar3 = (ulong)(int)param_3;
    uVar6 = uVar3;
    if (0x7f < uVar3) {
      do {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == *(long *)(param_1 + 0x10)) {
          func_0x0001003f59d4(plVar1);
          lVar4 = *(long *)(param_1 + 0x18);
        }
        *(long *)(param_1 + 0x18) = lVar4 + 1;
        *(byte *)(*plVar1 + lVar4) = (byte)uVar6 | 0x80;
        uVar3 = uVar6 >> 7;
        bVar2 = 0x3fff < uVar6;
        uVar6 = uVar3;
      } while (bVar2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == *(long *)(param_1 + 0x10)) {
      func_0x0001003f59d4(plVar1);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x18) = lVar4 + 1;
    *(char *)(*plVar1 + lVar4) = (char)uVar3;
    return;
  }
  uVar5 = param_3;
  if (0x7f < param_3) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar4 + 1;
      *(byte *)(*plVar1 + lVar4) = (byte)uVar5 | 0x80;
      param_3 = uVar5 >> 7;
      bVar2 = 0x3fff < uVar5;
      uVar5 = param_3;
    } while (bVar2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)param_3;
  return;
}



/* Entry: 10bd5ef50; end: 10bd5ef5b; -[GPBCodedOutputStream writeSFixed32NoTag:] */

void FUN_10bd5ef50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  return;
}



/* Entry: 10bd5ef5c; end: 10bd5ef93; -[GPBCodedOutputStream writeSFixed32:value:] */

void FUN_10bd5ef5c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c31844(param_1 + 8,param_3 << 3 | 5);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  return;
}



/* Entry: 10bd5ef94; end: 10bd5ef9f; -[GPBCodedOutputStream writeSFixed64NoTag:] */

void FUN_10bd5ef94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x38);
  return;
}



/* Entry: 10bd5efa0; end: 10bd5efd7; -[GPBCodedOutputStream writeSFixed64:value:] */

void FUN_10bd5efa0(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c31844(param_1 + 8,param_3 << 3 | 1);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x38);
  return;
}



/* Entry: 10bd5efd8; end: 10bd5efe7; -[GPBCodedOutputStream writeSInt32NoTag:] */

void FUN_10bd5efd8(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3 << 1 ^ param_3 >> 0x1f;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 10bd5efe8; end: 10bd5f01f; -[GPBCodedOutputStream writeSInt32:value:] */

/* WARNING: Possible PIC construction at 0x00010bd5f004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd5f008) */

void FUN_10bd5efe8(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3 << 3;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 10bd5f020; end: 10bd5f02f; -[GPBCodedOutputStream writeSInt64NoTag:] */

void FUN_10bd5f020(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = param_3 << 1 ^ param_3 >> 0x3f;
  plVar1 = (long *)(param_1 + 8);
  uVar5 = uVar3;
  if (0x7f < uVar3) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar4 + 1;
      *(byte *)(*plVar1 + lVar4) = (byte)uVar5 | 0x80;
      uVar3 = uVar5 >> 7;
      bVar2 = 0x3fff < uVar5;
      uVar5 = uVar3;
    } while (bVar2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)uVar3;
  return;
}



/* Entry: 10bd5f030; end: 10bd5f067; -[GPBCodedOutputStream writeSInt64:value:] */

void FUN_10bd5f030(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x000107c31844(param_1 + 8,param_3 << 3);
  uVar3 = param_4 << 1 ^ param_4 >> 0x3f;
  plVar1 = (long *)(param_1 + 8);
  uVar5 = uVar3;
  if (0x7f < uVar3) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar4 + 1;
      *(byte *)(*plVar1 + lVar4) = (byte)uVar5 | 0x80;
      uVar3 = uVar5 >> 7;
      bVar2 = 0x3fff < uVar5;
      uVar5 = uVar3;
    } while (bVar2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)uVar3;
  return;
}



/* Entry: 10bd5f068; end: 10bd5f1b7; -[GPBCodedOutputStream writeDoubleArray:values:tag:] */

void FUN_10bd5f068(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5f1d8;
    puStack_c8 = &UNK_110d9f318;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5f1b8;
      puStack_70 = &UNK_110d9f2b8;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5f1d0;
      puStack_98 = &UNK_110d9f2e8;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5f1b8; end: 10bd5f1e7;  */

void FUN_10bd5f1b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 8;
  return;
}



/* Entry: 10bd5f1e8; end: 10bd5f337; -[GPBCodedOutputStream writeFloatArray:values:tag:] */

void FUN_10bd5f1e8(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5f358;
    puStack_c8 = &UNK_110d9f3a8;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5f338;
      puStack_70 = &UNK_110d9f348;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5f350;
      puStack_98 = &UNK_110d9f378;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5f338; end: 10bd5f367;  */

void FUN_10bd5f338(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 4;
  return;
}



/* Entry: 10bd5f368; end: 10bd5f4b7; -[GPBCodedOutputStream writeUInt64Array:values:tag:] */

void FUN_10bd5f368(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5f4fc;
    puStack_c8 = &UNK_110d9f438;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5f4b8;
      puStack_70 = &UNK_110d9f3d8;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10bd5f4f0;
      puStack_98 = &UNK_110d9f408;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5f4b8; end: 10bd5f4ef;  */

void FUN_10bd5f4b8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c3184c();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 10bd5f4f0; end: 10bd5f50f;  */

void FUN_10bd5f4f0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2be6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeUInt64NoTag__11268d3d0,param_2);
  return;
}



/* Entry: 10bd5f510; end: 10bd5f547;  */

void FUN_10bd5f510(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c3184c();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 10bd5f548; end: 10bd5f57b;  */

void FUN_10bd5f548(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeInt64NoTag__11268d218,param_2);
  return;
}



/* Entry: 10bd5f57c; end: 10bd5f6cb; -[GPBCodedOutputStream writeUInt32Array:values:tag:] */

void FUN_10bd5f57c(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5f724;
    puStack_c8 = &UNK_110d9f588;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5f6cc;
      puStack_70 = &UNK_110d9f528;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5f718;
      puStack_98 = &UNK_110d9f558;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5f6cc; end: 10bd5f737;  */

void FUN_10bd5f6cc(long param_1,uint param_2)

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



/* Entry: 10bd5f738; end: 10bd5f887; -[GPBCodedOutputStream writeFixed64Array:values:tag:] */

void FUN_10bd5f738(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5f8ac;
    puStack_c8 = &UNK_110d9f438;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5f888;
      puStack_70 = &UNK_110d9f3d8;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5f8a0;
      puStack_98 = &UNK_110d9f408;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5f888; end: 10bd5f8bf;  */

void FUN_10bd5f888(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 8;
  return;
}



/* Entry: 10bd5f8c0; end: 10bd5fa0f; -[GPBCodedOutputStream writeFixed32Array:values:tag:] */

void FUN_10bd5f8c0(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5fa34;
    puStack_c8 = &UNK_110d9f588;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5fa10;
      puStack_70 = &UNK_110d9f528;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5fa28;
      puStack_98 = &UNK_110d9f558;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5fa10; end: 10bd5fa47;  */

void FUN_10bd5fa10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 4;
  return;
}



/* Entry: 10bd5fa48; end: 10bd5fb97; -[GPBCodedOutputStream writeSInt32Array:values:tag:] */

void FUN_10bd5fa48(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5fbf8;
    puStack_c8 = &UNK_110d9f4f8;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5fb98;
      puStack_70 = &UNK_11087e858;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5fbec;
      puStack_98 = &UNK_110d9f4c8;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5fb98; end: 10bd5fc0b;  */

void FUN_10bd5fb98(long param_1,int param_2)

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



/* Entry: 10bd5fc0c; end: 10bd5fd5b; -[GPBCodedOutputStream writeSInt64Array:values:tag:] */

void FUN_10bd5fc0c(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5fda4;
    puStack_c8 = &UNK_110d9f498;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5fd5c;
      puStack_70 = &UNK_11090dec0;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10bd5fd98;
      puStack_98 = &UNK_110d9f468;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5fd5c; end: 10bd5fd97;  */

void FUN_10bd5fd5c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 << 1 ^ param_2 >> 0x3f;
  func_0x000107c3184c();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + uVar1;
  return;
}



/* Entry: 10bd5fd98; end: 10bd5fdb7;  */

void FUN_10bd5fd98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2be3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeSInt64NoTag__11268d320,param_2);
  return;
}



/* Entry: 10bd5fdb8; end: 10bd5ff07; -[GPBCodedOutputStream writeSFixed64Array:values:tag:] */

void FUN_10bd5fdb8(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd5ff2c;
    puStack_c8 = &UNK_110d9f498;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd5ff08;
      puStack_70 = &UNK_11090dec0;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd5ff20;
      puStack_98 = &UNK_110d9f468;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd5ff08; end: 10bd5ff3f;  */

void FUN_10bd5ff08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 8;
  return;
}



/* Entry: 10bd5ff40; end: 10bd6008f; -[GPBCodedOutputStream writeSFixed32Array:values:tag:] */

void FUN_10bd5ff40(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd600b4;
    puStack_c8 = &UNK_110d9f4f8;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd60090;
      puStack_70 = &UNK_11087e858;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd600a8;
      puStack_98 = &UNK_110d9f4c8;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd60090; end: 10bd600c7;  */

void FUN_10bd60090(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 4;
  return;
}



/* Entry: 10bd600c8; end: 10bd60217; -[GPBCodedOutputStream writeBoolArray:values:tag:] */

void FUN_10bd600c8(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10bd6023c;
    puStack_c8 = &UNK_110d9f618;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00010bf980c0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10bd60218;
      puStack_70 = &UNK_110d9f5b8;
      puStack_58 = puStack_68;
      func_0x00010bf980c0(param_4);
      func_0x000107c31844(param_1 + 8,param_5);
      func_0x000107c31844(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10bd60230;
      puStack_98 = &UNK_110d9f5e8;
      lStack_90 = param_1;
      func_0x00010bf980c0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 10bd60218; end: 10bd602c7;  */

void FUN_10bd60218(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 10bd602c8; end: 10bd603bf; -[GPBCodedOutputStream writeGroupArray:values:] */

void FUN_10bd602c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = auStack_d8;
  lVar6 = param_4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_4);
      }
      func_0x00010c2bde80(param_1);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    puVar4 = auStack_d8;
    lVar6 = param_4;
    func_0x00010bf52a60();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar3 = &uStack_240;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar2 = puVar4;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar6 = *plStack_230;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar6) {
            _objc_enumerationMutation(puVar4);
          }
          func_0x00010c2be6c0(uVar1);
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar4;
        puVar3 = &uStack_240;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    lVar6 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return;
    }
    ___stack_chk_fail();
    lVar5 = *(long *)(lVar6 + 0x18);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      func_0x000107c31848(lVar6 + 8);
      lVar5 = *(long *)(lVar6 + 0x18);
    }
    *(long *)(lVar6 + 0x18) = lVar5 + 1;
    *(undefined1 *)(*(long *)(lVar6 + 8) + lVar5) = 0xb;
    lVar5 = *(long *)(lVar6 + 0x18);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      func_0x000107c31848(lVar6 + 8);
      lVar5 = *(long *)(lVar6 + 0x18);
    }
    *(long *)(lVar6 + 0x18) = lVar5 + 1;
    *(undefined1 *)(*(long *)(lVar6 + 8) + lVar5) = 0x10;
    func_0x000107c31844(lVar6 + 8,puVar3);
    func_0x00010c2be080(lVar6);
    lVar5 = *(long *)(lVar6 + 0x18);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      func_0x000107c31848(lVar6 + 8);
      lVar5 = *(long *)(lVar6 + 0x18);
    }
    *(long *)(lVar6 + 0x18) = lVar5 + 1;
    *(undefined1 *)(*(long *)(lVar6 + 8) + lVar5) = 0xc;
    return;
  }
  return;
}



/* Entry: 10bd603c0; end: 10bd604b7; -[GPBCodedOutputStream writeUnknownGroupArray:values:] */

void FUN_10bd603c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010c2be6c0(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_4;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == *(long *)(lVar1 + 0x10)) {
    func_0x000107c31848(lVar1 + 8);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 1;
  *(undefined1 *)(*(long *)(lVar1 + 8) + lVar3) = 0xb;
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == *(long *)(lVar1 + 0x10)) {
    func_0x000107c31848(lVar1 + 8);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 1;
  *(undefined1 *)(*(long *)(lVar1 + 8) + lVar3) = 0x10;
  func_0x000107c31844(lVar1 + 8,puVar2);
  func_0x00010c2be080(lVar1);
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == *(long *)(lVar1 + 0x10)) {
    func_0x000107c31848(lVar1 + 8);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 1;
  *(undefined1 *)(*(long *)(lVar1 + 8) + lVar3) = 0xc;
  return;
}



/* Entry: 10bd604b8; end: 10bd60583; -[GPBCodedOutputStream writeMessageSetExtension:value:] */

void FUN_10bd604b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xb;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0x10;
  func_0x000107c31844(param_1 + 8,param_3);
  func_0x00010c2be080(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xc;
  return;
}



/* Entry: 10bd60584; end: 10bd6064f; -[GPBCodedOutputStream writeRawMessageSetExtension:value:] */

void FUN_10bd60584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xb;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0x10;
  func_0x000107c31844(param_1 + 8,param_3);
  func_0x00010c2bd980(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xc;
  return;
}



/* Entry: 10bd60650; end: 10bd60697; -[GPBCodedOutputStream writeRawByte:] */

void FUN_10bd60650(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = param_3;
  return;
}



/* Entry: 10bd60698; end: 10bd606a3; -[GPBCodedOutputStream writeTag:format:] */

void FUN_10bd60698(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  
  param_4 = param_4 | param_3 << 3;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_4;
  if (0x7f < param_4) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_4 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_4;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 10bd606a4; end: 10bd606af; -[GPBCodedOutputStream writeRawVarint32:] */

void FUN_10bd606a4(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_3 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_3;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 10bd606b0; end: 10bd606bb; -[GPBCodedOutputStream writeRawVarintSizeTAs32:] */

void FUN_10bd606b0(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_3 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_3;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 10bd606bc; end: 10bd606c7; -[GPBCodedOutputStream writeRawVarint64:] */

void FUN_10bd606bc(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        func_0x0001003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_3 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_3;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 10bd606c8; end: 10bd606d3; -[GPBCodedOutputStream writeRawLittleEndian32:] */

void FUN_10bd606c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x000107c31848(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  return;
}



/* Entry: 10bd606d4; end: 10bd607cf; -[GPBCodedOutputStream writeRawLittleEndian64:] */

void FUN_10bd606d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    func_0x0001003f59d4(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x38);
  return;
}



/* Entry: 10bd607d0; end: 10bd6094f;  */

long FUN_10bd607d0(uint param_1,long param_2)

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
  func_0x000107c3184c(uVar4);
  return uVar4 + lVar2;
}



/* Entry: 10bd60950; end: 10bd609a7; -[GPBDescriptor dealloc] */

void FUN_10bd60950(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd609a8; end: 10bd609ab; -[GPBDescriptor copyWithZone:] */

void FUN_10bd609a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10bd609ac; end: 10bd609b7; -[GPBDescriptor setupExtensionRanges:count:] */

void FUN_10bd609ac(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}



/* Entry: 10bd609b8; end: 10bd609e3; -[GPBDescriptor setupContainingMessageClassName:] */

void FUN_10bd609b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_getClass(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c228790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setupContainingMessageClass__112667c08,param_3);
  return;
}



/* Entry: 10bd609e4; end: 10bd60a2f; -[GPBDescriptor setupMessageClassNameSuffix:] */

void FUN_10bd609e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10e60ddfd,param_3,1);
    return;
  }
  return;
}



/* Entry: 10bd60a30; end: 10bd60a37; -[GPBDescriptor name] */

void FUN_10bd60a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10bd60a38; end: 10bd60b37; -[GPBDescriptor file] */

undefined * FUN_10bd60a38(undefined *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  _objc_sync_enter();
  puVar1 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_10e60ddfa);
  if (puVar1 == (undefined *)0x0) {
    plVar2 = *(long **)(param_1 + 0x30);
    if (*plVar2 != 0) {
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      plVar2 = *(long **)(param_1 + 0x30);
    }
    puVar1 = PTR_PTR_1126e30b8;
    if (plVar2[1] == 0) {
      _objc_alloc(PTR_PTR_1126e30b8);
      func_0x00010c032ce0();
    }
    else {
      _objc_alloc(PTR_PTR_1126e30b8);
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c032cc0(puVar1);
    }
    _objc_setAssociatedObject();
  }
  _objc_sync_exit(param_1);
  return puVar1;
}



/* Entry: 10bd60b38; end: 10bd60b53; -[GPBDescriptor containingType] */

void FUN_10bd60b38(undefined8 param_1)

{
  _objc_getAssociatedObject(param_1,&UNK_10e60ddfc);
                    /* WARNING: Could not recover jumptable at 0x00010bf6e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_descriptor_1125b9380);
  return;
}



/* Entry: 10bd60b54; end: 10bd60d5b; -[GPBDescriptor fullName] */

void FUN_10bd60b54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bf4b440();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = param_1;
    func_0x00010c0cb320();
    _NSStringFromClass();
    lVar7 = param_1;
    func_0x00010bfac9c0();
    lVar3 = lVar7;
    func_0x00010c0dfc00();
    if ((lVar3 != 0) && (lVar4 = lVar2, func_0x00010bfda7c0(), (int)lVar4 == 0)) {
      return;
    }
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x00010c0cb320();
      _NSStringFromClass();
      lVar4 = lVar1;
      _objc_getAssociatedObject(lVar1,&UNK_10e60ddfd);
      if (lVar4 != 0) {
        lVar5 = lVar3;
        func_0x00010bfdcf80();
        if ((int)lVar5 == 0) {
          return;
        }
        func_0x00010c08fa60(lVar3);
        func_0x00010c08fa60(lVar4);
        func_0x00010c260c20(lVar3);
      }
      func_0x00010c25ce40(lVar3);
      lVar4 = lVar2;
      func_0x00010bfda7c0();
      if ((int)lVar4 == 0) {
        return;
      }
    }
    func_0x00010c08fa60(lVar3);
    func_0x00010c260c00();
    _objc_getAssociatedObject(param_1,&UNK_10e60ddfd);
    if (param_1 != 0) {
      lVar3 = lVar2;
      func_0x00010bfdcf80();
      if ((int)lVar3 == 0) {
        return;
      }
      func_0x00010c08fa60(lVar2);
      func_0x00010c08fa60(param_1);
      func_0x00010c260c20();
    }
    if (lVar1 == 0) {
      func_0x00010c0f0ac0();
    }
    else {
      func_0x00010bfbba80();
      lVar7 = lVar1;
    }
    func_0x00010c08fa60();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  }
  else {
    if (lVar1 != 0) {
      func_0x00010bfbba80();
      goto LAB_10bd60d34;
    }
    lVar7 = **(long **)(param_1 + 0x30);
  }
  PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar6;
  if (lVar7 == 0) {
    return;
  }
LAB_10bd60d34:
  func_0x00010c25d9e0(puVar6);
  return;
}



/* Entry: 10bd60d5c; end: 10bd60e4b; -[GPBDescriptor fieldWithNumber:] */

ulong FUN_10bd60d5c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
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
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (uVar2 = 0, lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      uVar2 = *(ulong *)(lVar7 * 8);
      if (*(int *)(*(long *)(uVar2 + 8) + 0x10) == param_3) goto LAB_10bd60e18;
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
LAB_10bd60e18:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return uVar2;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar5 = *(long *)(uVar2 + 8);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_230,auStack_1e8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_220;
    do {
      lVar4 = 0;
      do {
        if (*plStack_220 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lStack_228 + lVar4 * 8);
        uVar2 = uVar6;
        func_0x00010c0d4f60();
        func_0x00010c071ae0();
        if ((uVar2 & 1) != 0) goto LAB_10bd60f14;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar6 = 0;
LAB_10bd60f14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar6;
  }
  ___stack_chk_fail();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lVar5 = *(long *)(uVar2 + 0x10);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_350,auStack_308,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_340;
    do {
      lVar4 = 0;
      do {
        if (*plStack_340 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lStack_348 + lVar4 * 8);
        uVar2 = uVar6;
        func_0x00010c0d4f60();
        func_0x00010c071ae0();
        if ((uVar2 & 1) != 0) goto LAB_10bd61018;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_350,auStack_308,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar6 = 0;
LAB_10bd61018:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return uVar6;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 8);
}



/* Entry: 10bd60e4c; end: 10bd60f4f; -[GPBDescriptor fieldWithName:] */

ulong FUN_10bd60e4c(long param_1,undefined8 param_2)

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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
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
        func_0x00010c0d4f60();
        func_0x00010c071ae0();
        if ((uVar2 & 1) != 0) goto LAB_10bd60f14;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_10bd60f14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  func_0x00010bf52a60(lVar3,param_2,&uStack_240,auStack_1f8,0x10);
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
        func_0x00010c0d4f60();
        func_0x00010c071ae0();
        if ((uVar2 & 1) != 0) goto LAB_10bd61018;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_10bd61018:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 8);
}



/* Entry: 10bd60f50; end: 10bd61053; -[GPBDescriptor oneofWithName:] */

ulong FUN_10bd60f50(long param_1,undefined8 param_2)

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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
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
        func_0x00010c0d4f60();
        func_0x00010c071ae0();
        if ((uVar2 & 1) != 0) goto LAB_10bd61018;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_10bd61018:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 8);
}



/* Entry: 10bd61054; end: 10bd6105b; -[GPBDescriptor fields] */

undefined8 FUN_10bd61054(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bd6105c; end: 10bd610d3; -[GPBFileDescriptor initWithPackage:objcPrefix:syntax:] */

undefined1 *
FUN_10bd6105c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e7e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x00010bf51e00();
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd610d4; end: 10bd61123; -[GPBFileDescriptor dealloc] */

void FUN_10bd610d4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 8));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd61124; end: 10bd611b3; -[GPBFileDescriptor isEqual:] */

/* WARNING: Possible PIC construction at 0x00010bd61174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd61178) */
/* WARNING: Removing unreachable block (ram,0x00010bd6117c) */
/* WARNING: Removing unreachable block (ram,0x00010bd6118c) */
/* WARNING: Removing unreachable block (ram,0x00010bd61190) */

undefined8 FUN_10bd61124(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_3 == param_1) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30b8;
    _objc_opt_class(PTR_PTR_1126e30b8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) {
      uVar3 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 8));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd611b4; end: 10bd611bb; -[GPBFileDescriptor hash] */

void FUN_10bd611b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10bd611bc; end: 10bd611bf; -[GPBFileDescriptor copyWithZone:] */

void FUN_10bd611bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10bd611c0; end: 10bd611c7; -[GPBFileDescriptor package] */

undefined8 FUN_10bd611c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bd611c8; end: 10bd611cf; -[GPBFileDescriptor objcPrefix] */

undefined8 FUN_10bd611c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd611d0; end: 10bd61217; -[GPBOneofDescriptor dealloc] */

void FUN_10bd611d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e7f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd61218; end: 10bd6121b; -[GPBOneofDescriptor copyWithZone:] */

void FUN_10bd61218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10bd6121c; end: 10bd6122f; -[GPBOneofDescriptor name] */

void FUN_10bd6121c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithUTF8String__1126750c8,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10bd61230; end: 10bd61333; -[GPBOneofDescriptor fieldWithName:] */

ulong FUN_10bd61230(long param_1,undefined8 param_2)

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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
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
        func_0x00010c0d4f60();
        func_0x00010c071ae0();
        if ((uVar2 & 1) != 0) goto LAB_10bd612f8;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_10bd612f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 0x10);
}



/* Entry: 10bd61334; end: 10bd6133b; -[GPBOneofDescriptor fields] */

undefined8 FUN_10bd61334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd6133c; end: 10bd6139b; -[GPBFieldDescriptor dealloc] */

void FUN_10bd6133c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x1e) == '\r') &&
     ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 1 & 1) == 0)) {
    _objc_release(*(undefined8 *)(param_1 + 0x38));
  }
  puStack_28 = PTR_PTR_11270e7f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd6139c; end: 10bd6139f; -[GPBFieldDescriptor copyWithZone:] */

void FUN_10bd6139c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10bd613a0; end: 10bd613ab; -[GPBFieldDescriptor dataType] */

undefined1 FUN_10bd613a0(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x1e);
}



/* Entry: 10bd613ac; end: 10bd613bb; -[GPBFieldDescriptor hasDefaultValue] */

ushort FUN_10bd613ac(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 4 & 1;
}



/* Entry: 10bd613bc; end: 10bd613c7; -[GPBFieldDescriptor number] */

undefined4 FUN_10bd613bc(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
}



/* Entry: 10bd613c8; end: 10bd613df; -[GPBFieldDescriptor name] */

void FUN_10bd613c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithUTF8String__1126750c8,
             **(undefined8 **)(param_1 + 8));
  return;
}


