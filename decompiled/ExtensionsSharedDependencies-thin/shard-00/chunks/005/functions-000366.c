/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0073fc88; end: 0073fccb; -[GPBCodedOutputStream initWithOutputStream:] */

void FUN_0073fc88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,
                  *(undefined8 *)PTR__vm_page_size_0099a850);
                    /* WARNING: Could not recover jumptable at 0x00786150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithOutputStream_data__00abc558,param_3,puVar1);
  return;
}



/* Entry: 0073fccc; end: 0073fcd7; -[GPBCodedOutputStream initWithData:] */

void FUN_0073fccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithOutputStream_data__00abc558,0,param_3)
  ;
  return;
}



/* Entry: 0073fcd8; end: 0073fd63; -[GPBCodedOutputStream initWithOutputStream:data:] */

undefined1 *
FUN_0073fcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac46c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retain();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_4;
    func_0x007896e0();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x007882e0();
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain();
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    func_0x0078a160();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0073fd64; end: 0073fdbb; +[GPBCodedOutputStream streamWithOutputStream:] */

void FUN_0073fd64(undefined8 param_1,undefined8 param_2)

{
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,
                  *(undefined8 *)PTR__vm_page_size_0099a850);
  _objc_alloc(param_1);
  func_0x00786140();
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073fdbc; end: 0073fde3; +[GPBCodedOutputStream streamWithData:] */

void FUN_0073fdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x007851c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_0099acc8)();
  return;
}



/* Entry: 0073fde4; end: 0073fdef; -[GPBCodedOutputStream bytesWritten] */

long FUN_0073fde4(long param_1)

{
  return *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20);
}



/* Entry: 0073fdf0; end: 0073fdfb; -[GPBCodedOutputStream writeDoubleNoTag:] */

void FUN_0073fdf0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x20);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x30);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x38);
  return;
}



/* Entry: 0073fdfc; end: 0073ff77;  */

void FUN_0073fdfc(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)param_2;
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 8);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x10);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x18);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x20);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x28);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x30);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x38);
  return;
}



/* Entry: 0073ff78; end: 0073ffb7; -[GPBCodedOutputStream writeDouble:value:] */

void FUN_0073ff78(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  
  FUN_00740490(param_2 + 8,param_4 << 3 | 1);
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x20);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x30);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_1 >> 0x38);
  return;
}



/* Entry: 0073ffb8; end: 0073ffc3; -[GPBCodedOutputStream writeFloatNoTag:] */

void FUN_0073ffb8(undefined4 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x18);
  return;
}



/* Entry: 0073ffc4; end: 0074008f;  */

void FUN_0073ffc4(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)param_2;
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 8);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x10);
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    FUN_00742638(param_1);
    lVar1 = param_1[2];
  }
  param_1[2] = lVar1 + 1;
  *(char *)(*param_1 + lVar1) = (char)((ulong)param_2 >> 0x18);
  return;
}



/* Entry: 00740090; end: 007400cf; -[GPBCodedOutputStream writeFloat:value:] */

void FUN_00740090(undefined4 param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  
  FUN_00740490(param_2 + 8,param_4 << 3 | 5);
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_1;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 8);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((uint)param_1 >> 0x18);
  return;
}



/* Entry: 007400d0; end: 007400db; -[GPBCodedOutputStream writeUInt64NoTag:] */

void FUN_007400d0(long param_1,undefined8 param_2,ulong param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 007400dc; end: 00740177;  */

void FUN_007400dc(long *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_2;
  if (0x7f < param_2) {
    do {
      lVar2 = param_1[2];
      if (lVar2 == param_1[1]) {
        FUN_00742638(param_1);
        lVar2 = param_1[2];
      }
      param_1[2] = lVar2 + 1;
      *(byte *)(*param_1 + lVar2) = (byte)uVar3 | 0x80;
      param_2 = uVar3 >> 7;
      bVar1 = 0x3fff < uVar3;
      uVar3 = param_2;
    } while (bVar1);
  }
  lVar2 = param_1[2];
  if (lVar2 == param_1[1]) {
    FUN_00742638(param_1);
    lVar2 = param_1[2];
  }
  param_1[2] = lVar2 + 1;
  *(char *)(*param_1 + lVar2) = (char)param_2;
  return;
}



/* Entry: 00740178; end: 007401ab; -[GPBCodedOutputStream writeUInt64:value:] */

void FUN_00740178(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_4;
  if (0x7f < param_4) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 007401ac; end: 007401b7; -[GPBCodedOutputStream writeInt64NoTag:] */

void FUN_007401ac(long param_1,undefined8 param_2,ulong param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 007401b8; end: 007401eb; -[GPBCodedOutputStream writeInt64:value:] */

void FUN_007401b8(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_4;
  if (0x7f < param_4) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 007401ec; end: 00740207; -[GPBCodedOutputStream writeInt32NoTag:] */

void FUN_007401ec(long param_1,undefined8 param_2,uint param_3)

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
          FUN_00742638(plVar1);
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
      FUN_00742638(plVar1);
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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)param_3;
  return;
}



/* Entry: 00740208; end: 0074023b; -[GPBCodedOutputStream writeInt32:value:] */

void FUN_00740208(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  if ((int)param_4 < 0) {
    uVar3 = (ulong)(int)param_4;
    uVar6 = uVar3;
    if (0x7f < uVar3) {
      do {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == *(long *)(param_1 + 0x10)) {
          FUN_00742638(plVar1);
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
      FUN_00742638(plVar1);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x18) = lVar4 + 1;
    *(char *)(*plVar1 + lVar4) = (char)uVar3;
    return;
  }
  uVar5 = param_4;
  if (0x7f < param_4) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar4 + 1;
      *(byte *)(*plVar1 + lVar4) = (byte)uVar5 | 0x80;
      param_4 = uVar5 >> 7;
      bVar2 = 0x3fff < uVar5;
      uVar5 = param_4;
    } while (bVar2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)param_4;
  return;
}



/* Entry: 0074023c; end: 00740247; -[GPBCodedOutputStream writeFixed64NoTag:] */

void FUN_0074023c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x38);
  return;
}



/* Entry: 00740248; end: 0074027f; -[GPBCodedOutputStream writeFixed64:value:] */

void FUN_00740248(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  FUN_00740490(param_1 + 8,param_3 << 3 | 1);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x38);
  return;
}



/* Entry: 00740280; end: 0074028b; -[GPBCodedOutputStream writeFixed32NoTag:] */

void FUN_00740280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  return;
}



/* Entry: 0074028c; end: 007402c3; -[GPBCodedOutputStream writeFixed32:value:] */

void FUN_0074028c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  FUN_00740490(param_1 + 8,param_3 << 3 | 5);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  return;
}



/* Entry: 007402c4; end: 0074030b; -[GPBCodedOutputStream writeBoolNoTag:] */

void FUN_007402c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = param_3;
  return;
}



/* Entry: 0074030c; end: 0074035f; -[GPBCodedOutputStream writeBool:value:] */

void FUN_0074030c(long param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  long lVar1;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = param_4;
  return;
}



/* Entry: 00740360; end: 0074048f; -[GPBCodedOutputStream writeStringNoTag:] */

void FUN_00740360(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_3;
  func_0x00788320(param_3,param_2,4);
  FUN_00740490(param_1 + 8,uVar2);
  if (uVar2 != 0) {
    uVar1 = param_3;
    _CFStringGetCStringPtr(param_3,0x8000100);
    if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18)) < uVar2) {
      if (uVar1 == 0) {
        func_0x007815a0(param_3,0,4);
                    /* WARNING: Could not recover jumptable at 0x00794130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeRawData__00abfd58,param_3);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00794170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (param_1,PTR_s_writeRawPtr_offset_length__00abfd68,uVar1,0,uVar2);
      return;
    }
    if (uVar1 == 0) {
      func_0x007882e0();
      func_0x00783d00();
      if ((int)param_3 == 0) {
        return;
      }
      uVar2 = 0;
    }
    else {
      _memcpy(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18),uVar1,uVar2);
    }
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar2;
  }
  return;
}



/* Entry: 00740490; end: 0074052b;  */

void FUN_00740490(long *param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (0x7f < param_2) {
    do {
      lVar2 = param_1[2];
      if (lVar2 == param_1[1]) {
        FUN_00742638(param_1);
        lVar2 = param_1[2];
      }
      param_1[2] = lVar2 + 1;
      *(byte *)(*param_1 + lVar2) = (byte)uVar3 | 0x80;
      param_2 = uVar3 >> 7;
      bVar1 = 0x3fff < uVar3;
      uVar3 = param_2;
    } while (bVar1);
  }
  lVar2 = param_1[2];
  if (lVar2 == param_1[1]) {
    FUN_00742638(param_1);
    lVar2 = param_1[2];
  }
  param_1[2] = lVar2 + 1;
  *(char *)(*param_1 + lVar2) = (char)param_2;
  return;
}



/* Entry: 0074052c; end: 00740563; -[GPBCodedOutputStream writeString:value:] */

void FUN_0074052c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  FUN_00740490(param_1 + 8,param_3 << 3 | 2);
                    /* WARNING: Could not recover jumptable at 0x00794370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeStringNoTag__00abfde8,param_4);
  return;
}



/* Entry: 00740564; end: 0074059b; -[GPBCodedOutputStream writeGroupNoTag:value:] */

void FUN_00740564(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x007943a0(param_4,param_2,param_1);
  uVar5 = param_3 << 3 | 4;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 0074059c; end: 007405e3; -[GPBCodedOutputStream writeGroup:value:] */

void FUN_0074059c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00740490(param_1 + 8,(int)param_3 << 3 | 3);
                    /* WARNING: Could not recover jumptable at 0x00793fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_writeGroupNoTag_value__00abfd00,param_3,param_4);
  return;
}



/* Entry: 007405e4; end: 0074061b; -[GPBCodedOutputStream writeUnknownGroupNoTag:value:] */

void FUN_007405e4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x007943a0(param_4,param_2,param_1);
  uVar5 = param_3 << 3 | 4;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 0074061c; end: 00740663; -[GPBCodedOutputStream writeUnknownGroup:value:] */

void FUN_0074061c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00740490(param_1 + 8,(int)param_3 << 3 | 3);
                    /* WARNING: Could not recover jumptable at 0x00794550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_writeUnknownGroupNoTag_value__00abfe60,param_3,param_4);
  return;
}



/* Entry: 00740664; end: 0074069f; -[GPBCodedOutputStream writeMessageNoTag:] */

void FUN_00740664(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x0078c740(param_3);
  FUN_00740490(param_1 + 8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x007943b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_3,PTR_s_writeToCodedOutputStream__00abfdf8,param_1);
  return;
}



/* Entry: 007406a0; end: 007406d7; -[GPBCodedOutputStream writeMessage:value:] */

void FUN_007406a0(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  FUN_00740490(param_1 + 8,param_3 << 3 | 2);
                    /* WARNING: Could not recover jumptable at 0x007940f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeMessageNoTag__00abfd48,param_4);
  return;
}



/* Entry: 007406d8; end: 00740713; -[GPBCodedOutputStream writeBytesNoTag:] */

void FUN_007406d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x007882e0(param_3);
  FUN_00740490(param_1 + 8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00794130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeRawData__00abfd58,param_3);
  return;
}



/* Entry: 00740714; end: 0074074b; -[GPBCodedOutputStream writeBytes:value:] */

void FUN_00740714(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  FUN_00740490(param_1 + 8,param_3 << 3 | 2);
                    /* WARNING: Could not recover jumptable at 0x00793d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_writeBytesNoTag__00abfc50,param_4);
  return;
}



/* Entry: 0074074c; end: 00740757; -[GPBCodedOutputStream writeUInt32NoTag:] */

void FUN_0074074c(long param_1,undefined8 param_2,uint param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 00740758; end: 0074078b; -[GPBCodedOutputStream writeUInt32:value:] */

void FUN_00740758(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_4;
  if (0x7f < param_4) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 0074078c; end: 00740797; -[GPBCodedOutputStream writeEnumNoTag:] */

void FUN_0074078c(long param_1,undefined8 param_2,uint param_3)

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
          FUN_00742638(plVar1);
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
      FUN_00742638(plVar1);
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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)param_3;
  return;
}



/* Entry: 00740798; end: 007407cb; -[GPBCodedOutputStream writeEnum:value:] */

void FUN_00740798(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  if ((int)param_4 < 0) {
    uVar3 = (ulong)(int)param_4;
    uVar6 = uVar3;
    if (0x7f < uVar3) {
      do {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == *(long *)(param_1 + 0x10)) {
          FUN_00742638(plVar1);
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
      FUN_00742638(plVar1);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x18) = lVar4 + 1;
    *(char *)(*plVar1 + lVar4) = (char)uVar3;
    return;
  }
  uVar5 = param_4;
  if (0x7f < param_4) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar4 + 1;
      *(byte *)(*plVar1 + lVar4) = (byte)uVar5 | 0x80;
      param_4 = uVar5 >> 7;
      bVar2 = 0x3fff < uVar5;
      uVar5 = param_4;
    } while (bVar2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)param_4;
  return;
}



/* Entry: 007407cc; end: 007407d7; -[GPBCodedOutputStream writeSFixed32NoTag:] */

void FUN_007407cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  return;
}



/* Entry: 007407d8; end: 0074080f; -[GPBCodedOutputStream writeSFixed32:value:] */

void FUN_007407d8(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  FUN_00740490(param_1 + 8,param_3 << 3 | 5);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  return;
}



/* Entry: 00740810; end: 0074081b; -[GPBCodedOutputStream writeSFixed64NoTag:] */

void FUN_00740810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x38);
  return;
}



/* Entry: 0074081c; end: 00740853; -[GPBCodedOutputStream writeSFixed64:value:] */

void FUN_0074081c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  FUN_00740490(param_1 + 8,param_3 << 3 | 1);
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_4;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_4 >> 0x38);
  return;
}



/* Entry: 00740854; end: 00740863; -[GPBCodedOutputStream writeSInt32NoTag:] */

void FUN_00740854(long param_1,undefined8 param_2,int param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 00740864; end: 0074089b; -[GPBCodedOutputStream writeSInt32:value:] */

void FUN_00740864(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  uVar5 = param_4 << 1 ^ param_4 >> 0x1f;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 0074089c; end: 007408ab; -[GPBCodedOutputStream writeSInt64NoTag:] */

void FUN_0074089c(long param_1,undefined8 param_2,long param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)uVar3;
  return;
}



/* Entry: 007408ac; end: 007408e3; -[GPBCodedOutputStream writeSInt64:value:] */

void FUN_007408ac(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_00740490(param_1 + 8,param_3 << 3);
  uVar3 = param_4 << 1 ^ param_4 >> 0x3f;
  plVar1 = (long *)(param_1 + 8);
  uVar5 = uVar3;
  if (0x7f < uVar3) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)uVar3;
  return;
}



/* Entry: 007408e4; end: 00740a33; -[GPBCodedOutputStream writeDoubleArray:values:tag:] */

void FUN_007408e4(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x740a70;
    puStack_c8 = &UNK_00a1fda0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00740a34;
      puStack_70 = &UNK_00a1fd40;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x740a4c;
      puStack_98 = &UNK_00a1fd70;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00740a34; end: 00740a7f;  */

void FUN_00740a34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 8;
  return;
}



/* Entry: 00740a80; end: 00740bcf; -[GPBCodedOutputStream writeFloatArray:values:tag:] */

void FUN_00740a80(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x740bf0;
    puStack_c8 = &UNK_00a1fe30;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00740bd0;
      puStack_70 = &UNK_00a1fdd0;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x740be8;
      puStack_98 = &UNK_00a1fe00;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00740bd0; end: 00740bff;  */

void FUN_00740bd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 4;
  return;
}



/* Entry: 00740c00; end: 00740d4f; -[GPBCodedOutputStream writeUInt64Array:values:tag:] */

void FUN_00740c00(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x740d94;
    puStack_c8 = &UNK_00a1fec0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00740d50;
      puStack_70 = &UNK_00a1fe60;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_00740d88;
      puStack_98 = &UNK_00a1fe90;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00740d50; end: 00740d87;  */

void FUN_00740d50(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00742934();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 00740d88; end: 00740da7;  */

void FUN_00740d88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007944f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeUInt64NoTag__00abfe48,param_2);
  return;
}



/* Entry: 00740da8; end: 00740ef7; -[GPBCodedOutputStream writeInt64Array:values:tag:] */

void FUN_00740da8(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x740f3c;
    puStack_c8 = &UNK_00a1ff50;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00740ef8;
      puStack_70 = &UNK_00a1fef0;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_00740f30;
      puStack_98 = &UNK_00a1ff20;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00740ef8; end: 00740f2f;  */

void FUN_00740ef8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00742934();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
  return;
}



/* Entry: 00740f30; end: 00740f4f;  */

void FUN_00740f30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00794090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeInt64NoTag__00abfd30,param_2);
  return;
}



/* Entry: 00740f50; end: 0074109f; -[GPBCodedOutputStream writeInt32Array:values:tag:] */

void FUN_00740f50(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741104;
    puStack_c8 = &UNK_00a1ffe0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_007410a0;
      puStack_70 = &UNK_00a1ff80;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x7410f8;
      puStack_98 = &UNK_00a1ffb0;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 007410a0; end: 00741117;  */

void FUN_007410a0(long param_1,uint param_2)

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



/* Entry: 00741118; end: 00741267; -[GPBCodedOutputStream writeUInt32Array:values:tag:] */

void FUN_00741118(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x7412c0;
    puStack_c8 = &UNK_00a20070;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741268;
      puStack_70 = &UNK_00a20010;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x7412b4;
      puStack_98 = &UNK_00a20040;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741268; end: 007412d3;  */

void FUN_00741268(long param_1,uint param_2)

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



/* Entry: 007412d4; end: 00741423; -[GPBCodedOutputStream writeFixed64Array:values:tag:] */

void FUN_007412d4(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741448;
    puStack_c8 = &UNK_00a1fec0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741424;
      puStack_70 = &UNK_00a1fe60;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x74143c;
      puStack_98 = &UNK_00a1fe90;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741424; end: 0074145b;  */

void FUN_00741424(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 8;
  return;
}



/* Entry: 0074145c; end: 007415ab; -[GPBCodedOutputStream writeFixed32Array:values:tag:] */

void FUN_0074145c(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x7415d0;
    puStack_c8 = &UNK_00a20070;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_007415ac;
      puStack_70 = &UNK_00a20010;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x7415c4;
      puStack_98 = &UNK_00a20040;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 007415ac; end: 007415e3;  */

void FUN_007415ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 4;
  return;
}



/* Entry: 007415e4; end: 00741733; -[GPBCodedOutputStream writeSInt32Array:values:tag:] */

void FUN_007415e4(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741794;
    puStack_c8 = &UNK_00a1ffe0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741734;
      puStack_70 = &UNK_00a1ff80;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x741788;
      puStack_98 = &UNK_00a1ffb0;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741734; end: 007417a7;  */

void FUN_00741734(long param_1,int param_2)

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



/* Entry: 007417a8; end: 007418f7; -[GPBCodedOutputStream writeSInt64Array:values:tag:] */

void FUN_007417a8(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741940;
    puStack_c8 = &UNK_00a1ff50;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_007418f8;
      puStack_70 = &UNK_00a1fef0;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_00741934;
      puStack_98 = &UNK_00a1ff20;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 007418f8; end: 00741933;  */

void FUN_007418f8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 << 1 ^ param_2 >> 0x3f;
  func_0x00742934();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + uVar1;
  return;
}



/* Entry: 00741934; end: 00741953;  */

void FUN_00741934(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00794310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeSInt64NoTag__00abfdd0,param_2);
  return;
}



/* Entry: 00741954; end: 00741aa3; -[GPBCodedOutputStream writeSFixed64Array:values:tag:] */

void FUN_00741954(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741ac8;
    puStack_c8 = &UNK_00a1ff50;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741aa4;
      puStack_70 = &UNK_00a1fef0;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x741abc;
      puStack_98 = &UNK_00a1ff20;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741aa4; end: 00741adb;  */

void FUN_00741aa4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 8;
  return;
}



/* Entry: 00741adc; end: 00741c2b; -[GPBCodedOutputStream writeSFixed32Array:values:tag:] */

void FUN_00741adc(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741c50;
    puStack_c8 = &UNK_00a1ffe0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741c2c;
      puStack_70 = &UNK_00a1ff80;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x741c44;
      puStack_98 = &UNK_00a1ffb0;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741c2c; end: 00741c63;  */

void FUN_00741c2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 4;
  return;
}



/* Entry: 00741c64; end: 00741db3; -[GPBCodedOutputStream writeBoolArray:values:tag:] */

void FUN_00741c64(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741dd8;
    puStack_c8 = &UNK_00a20100;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782cc0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741db4;
      puStack_70 = &UNK_00a200a0;
      puStack_58 = puStack_68;
      func_0x00782cc0(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x741dcc;
      puStack_98 = &UNK_00a200d0;
      lStack_90 = param_1;
      func_0x00782cc0(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741db4; end: 00741deb;  */

void FUN_00741db4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 00741dec; end: 00741f3b; -[GPBCodedOutputStream writeEnumArray:values:tag:] */

void FUN_00741dec(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

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
    puStack_e0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x741fa0;
    puStack_c8 = &UNK_00a1ffe0;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x00782c60(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x00780e80();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_00999f30;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_00741f3c;
      puStack_70 = &UNK_00a1ff80;
      puStack_58 = puStack_68;
      func_0x00782c60(param_4);
      FUN_00740490(param_1 + 8,param_5);
      FUN_00740490(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x741f94;
      puStack_98 = &UNK_00a1ffb0;
      lStack_90 = param_1;
      func_0x00782c60(param_4);
      __Block_object_dispose(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 00741f3c; end: 00741fb3;  */

void FUN_00741f3c(long param_1,uint param_2)

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



/* Entry: 00741fb4; end: 007420ab; -[GPBCodedOutputStream writeStringArray:values:] */

/* WARNING: Removing unreachable block (ram,0x00742318) */
/* WARNING: Removing unreachable block (ram,0x00742220) */
/* WARNING: Removing unreachable block (ram,0x00742128) */
/* WARNING: Removing unreachable block (ram,0x00742030) */

void FUN_00741fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_4d8;
  undefined1 auStack_438 [128];
  long lStack_3b8;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = auStack_d8;
  lVar3 = param_4;
  func_0x00780ea0();
  while (lVar3 != 0) {
    lVar4 = 0;
    do {
      func_0x00794320(param_1);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    puVar6 = auStack_d8;
    lVar3 = param_4;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = auStack_1f8;
  puVar7 = puVar6;
  func_0x00780ea0();
  while (puVar7 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    do {
      func_0x007940a0(uVar1);
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar5);
    puVar5 = auStack_1f8;
    puVar7 = puVar6;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = auStack_318;
  puVar7 = puVar5;
  func_0x00780ea0();
  while (puVar7 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      func_0x00793cc0(uVar1);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = auStack_318;
    puVar7 = puVar5;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  lStack_3b8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = auStack_438;
  puVar7 = puVar6;
  func_0x00780ea0();
  while (puVar7 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    do {
      func_0x00793f80(uVar1);
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar5);
    puVar5 = auStack_438;
    puVar7 = puVar6;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_3b8) {
    ___stack_chk_fail();
    puVar2 = &uStack_5a0;
    lStack_4d8 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    puVar6 = puVar5;
    func_0x00780ea0();
    if (puVar6 != (undefined1 *)0x0) {
      lVar3 = *plStack_590;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_590 != lVar3) {
            _objc_enumerationMutation(puVar5);
          }
          func_0x00794500(uVar1);
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar7);
        puVar6 = puVar5;
        puVar2 = &uStack_5a0;
        func_0x00780ea0();
      } while (puVar6 != (undefined1 *)0x0);
    }
    lVar3 = 0;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_4d8) {
      return;
    }
    ___stack_chk_fail();
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      FUN_00742638(lVar3 + 8);
      lVar4 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(lVar3 + 0x18) = lVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + lVar4) = 0xb;
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      FUN_00742638(lVar3 + 8);
      lVar4 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(lVar3 + 0x18) = lVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + lVar4) = 0x10;
    FUN_00740490(lVar3 + 8,puVar2);
    func_0x007940a0(lVar3);
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      FUN_00742638(lVar3 + 8);
      lVar4 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(lVar3 + 0x18) = lVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + lVar4) = 0xc;
    return;
  }
  return;
}



/* Entry: 007420ac; end: 007421a3; -[GPBCodedOutputStream writeMessageArray:values:] */

/* WARNING: Removing unreachable block (ram,0x00742318) */
/* WARNING: Removing unreachable block (ram,0x00742220) */
/* WARNING: Removing unreachable block (ram,0x00742128) */

void FUN_007420ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_3b8;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = auStack_d8;
  lVar3 = param_4;
  func_0x00780ea0();
  while (lVar3 != 0) {
    lVar4 = 0;
    do {
      func_0x007940a0(param_1);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    puVar6 = auStack_d8;
    lVar3 = param_4;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = auStack_1f8;
  puVar7 = puVar6;
  func_0x00780ea0();
  while (puVar7 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    do {
      func_0x00793cc0(uVar1);
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar5);
    puVar5 = auStack_1f8;
    puVar7 = puVar6;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = auStack_318;
  puVar7 = puVar5;
  func_0x00780ea0();
  while (puVar7 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      func_0x00793f80(uVar1);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = auStack_318;
    puVar7 = puVar5;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_480;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  puVar5 = puVar6;
  func_0x00780ea0();
  if (puVar5 != (undefined1 *)0x0) {
    lVar3 = *plStack_470;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_470 != lVar3) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00794500(uVar1);
        puVar7 = puVar7 + 1;
      } while (puVar5 != puVar7);
      puVar5 = puVar6;
      puVar2 = &uStack_480;
      func_0x00780ea0();
    } while (puVar5 != (undefined1 *)0x0);
  }
  lVar3 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_3b8) {
    ___stack_chk_fail();
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      FUN_00742638(lVar3 + 8);
      lVar4 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(lVar3 + 0x18) = lVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + lVar4) = 0xb;
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      FUN_00742638(lVar3 + 8);
      lVar4 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(lVar3 + 0x18) = lVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + lVar4) = 0x10;
    FUN_00740490(lVar3 + 8,puVar2);
    func_0x007940a0(lVar3);
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 == *(long *)(lVar3 + 0x10)) {
      FUN_00742638(lVar3 + 8);
      lVar4 = *(long *)(lVar3 + 0x18);
    }
    *(long *)(lVar3 + 0x18) = lVar4 + 1;
    *(undefined1 *)(*(long *)(lVar3 + 8) + lVar4) = 0xc;
    return;
  }
  return;
}



/* Entry: 007421a4; end: 0074229b; -[GPBCodedOutputStream writeBytesArray:values:] */

/* WARNING: Removing unreachable block (ram,0x00742318) */
/* WARNING: Removing unreachable block (ram,0x00742220) */

void FUN_007421a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_298;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = auStack_d8;
  lVar4 = param_4;
  func_0x00780ea0();
  while (lVar4 != 0) {
    lVar5 = 0;
    do {
      func_0x00793cc0(param_1);
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    puVar2 = auStack_d8;
    lVar4 = param_4;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = auStack_1f8;
  puVar7 = puVar2;
  func_0x00780ea0();
  while (puVar7 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      func_0x00793f80(uVar1);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = auStack_1f8;
    puVar7 = puVar2;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_360;
  lStack_298 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  puVar2 = puVar6;
  func_0x00780ea0();
  if (puVar2 != (undefined1 *)0x0) {
    lVar4 = *plStack_350;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_350 != lVar4) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00794500(uVar1);
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar6;
      puVar3 = &uStack_360;
      func_0x00780ea0();
    } while (puVar2 != (undefined1 *)0x0);
  }
  lVar4 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(lVar4 + 0x18);
  if (lVar5 == *(long *)(lVar4 + 0x10)) {
    FUN_00742638(lVar4 + 8);
    lVar5 = *(long *)(lVar4 + 0x18);
  }
  *(long *)(lVar4 + 0x18) = lVar5 + 1;
  *(undefined1 *)(*(long *)(lVar4 + 8) + lVar5) = 0xb;
  lVar5 = *(long *)(lVar4 + 0x18);
  if (lVar5 == *(long *)(lVar4 + 0x10)) {
    FUN_00742638(lVar4 + 8);
    lVar5 = *(long *)(lVar4 + 0x18);
  }
  *(long *)(lVar4 + 0x18) = lVar5 + 1;
  *(undefined1 *)(*(long *)(lVar4 + 8) + lVar5) = 0x10;
  FUN_00740490(lVar4 + 8,puVar3);
  func_0x007940a0(lVar4);
  lVar5 = *(long *)(lVar4 + 0x18);
  if (lVar5 == *(long *)(lVar4 + 0x10)) {
    FUN_00742638(lVar4 + 8);
    lVar5 = *(long *)(lVar4 + 0x18);
  }
  *(long *)(lVar4 + 0x18) = lVar5 + 1;
  *(undefined1 *)(*(long *)(lVar4 + 8) + lVar5) = 0xc;
  return;
}



/* Entry: 0074229c; end: 00742393; -[GPBCodedOutputStream writeGroupArray:values:] */

/* WARNING: Removing unreachable block (ram,0x00742318) */

void FUN_0074229c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = auStack_d8;
  lVar5 = param_4;
  func_0x00780ea0();
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      func_0x00793f80(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    puVar4 = auStack_d8;
    lVar5 = param_4;
    func_0x00780ea0();
  }
  uVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar2 = puVar4;
  func_0x00780ea0();
  if (puVar2 != (undefined1 *)0x0) {
    lVar5 = *plStack_230;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar5) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00794500(uVar1);
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = puVar4;
      puVar3 = &uStack_240;
      func_0x00780ea0();
    } while (puVar2 != (undefined1 *)0x0);
  }
  lVar5 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_178) {
    ___stack_chk_fail();
    lVar6 = *(long *)(lVar5 + 0x18);
    if (lVar6 == *(long *)(lVar5 + 0x10)) {
      FUN_00742638(lVar5 + 8);
      lVar6 = *(long *)(lVar5 + 0x18);
    }
    *(long *)(lVar5 + 0x18) = lVar6 + 1;
    *(undefined1 *)(*(long *)(lVar5 + 8) + lVar6) = 0xb;
    lVar6 = *(long *)(lVar5 + 0x18);
    if (lVar6 == *(long *)(lVar5 + 0x10)) {
      FUN_00742638(lVar5 + 8);
      lVar6 = *(long *)(lVar5 + 0x18);
    }
    *(long *)(lVar5 + 0x18) = lVar6 + 1;
    *(undefined1 *)(*(long *)(lVar5 + 8) + lVar6) = 0x10;
    FUN_00740490(lVar5 + 8,puVar3);
    func_0x007940a0(lVar5);
    lVar6 = *(long *)(lVar5 + 0x18);
    if (lVar6 == *(long *)(lVar5 + 0x10)) {
      FUN_00742638(lVar5 + 8);
      lVar6 = *(long *)(lVar5 + 0x18);
    }
    *(long *)(lVar5 + 0x18) = lVar6 + 1;
    *(undefined1 *)(*(long *)(lVar5 + 8) + lVar6) = 0xc;
    return;
  }
  return;
}



/* Entry: 00742394; end: 0074248b; -[GPBCodedOutputStream writeUnknownGroupArray:values:] */

void FUN_00742394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_4;
  func_0x00780ea0(param_4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00794500(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_4;
      puVar2 = &uStack_120;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  lVar1 = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == *(long *)(lVar1 + 0x10)) {
    FUN_00742638(lVar1 + 8);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 1;
  *(undefined1 *)(*(long *)(lVar1 + 8) + lVar3) = 0xb;
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == *(long *)(lVar1 + 0x10)) {
    FUN_00742638(lVar1 + 8);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 1;
  *(undefined1 *)(*(long *)(lVar1 + 8) + lVar3) = 0x10;
  FUN_00740490(lVar1 + 8,puVar2);
  func_0x007940a0(lVar1);
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == *(long *)(lVar1 + 0x10)) {
    FUN_00742638(lVar1 + 8);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 1;
  *(undefined1 *)(*(long *)(lVar1 + 8) + lVar3) = 0xc;
  return;
}



/* Entry: 0074248c; end: 00742557; -[GPBCodedOutputStream writeMessageSetExtension:value:] */

void FUN_0074248c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xb;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0x10;
  FUN_00740490(param_1 + 8,param_3);
  func_0x007940a0(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xc;
  return;
}



/* Entry: 00742558; end: 00742623; -[GPBCodedOutputStream writeRawMessageSetExtension:value:] */

void FUN_00742558(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xb;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0x10;
  FUN_00740490(param_1 + 8,param_3);
  func_0x00793cc0(param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = 0xc;
  return;
}



/* Entry: 00742624; end: 00742637; -[GPBCodedOutputStream flush] */

void FUN_00742624(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                      &PTR____CFConstantStringClassReference_00a4ad60,
                      &PTR____CFConstantStringClassReference_00a212a0);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_0074285c(lVar1,*(undefined8 *)(param_1 + 8));
      if (lVar1 != *(long *)(param_1 + 0x18)) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar1;
    }
    return;
  }
  return;
}



/* Entry: 00742638; end: 007426c3;  */

void FUN_00742638(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1[4] == 0) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a4ad60,
                    &PTR____CFConstantStringClassReference_00a212a0);
  }
  if (param_1[2] != 0) {
    lVar1 = param_1[4];
    FUN_0074285c(lVar1,*param_1);
    if (lVar1 != param_1[2]) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    param_1[2] = 0;
    param_1[3] = param_1[3] + lVar1;
  }
  return;
}



/* Entry: 007426c4; end: 0074270b; -[GPBCodedOutputStream writeRawByte:] */

void FUN_007426c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = param_3;
  return;
}



/* Entry: 0074270c; end: 00742757; -[GPBCodedOutputStream writeRawData:] */

void FUN_0074270c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x0077fde0(param_3);
  func_0x007882e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00794170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_writeRawPtr_offset_length__00abfd68,uVar1,0,param_3);
  return;
}



/* Entry: 00742758; end: 0074285b; -[GPBCodedOutputStream writeRawPtr:offset:length:] */

void FUN_00742758(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_3 != 0) && (param_5 != 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar5 = lVar2 - *(long *)(param_1 + 0x18);
    lVar1 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x18);
    uVar3 = param_5 - uVar5;
    if (param_5 < uVar5 || uVar3 == 0) {
      _memcpy(lVar1,param_3 + param_4,param_5);
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_5;
    }
    else {
      _memcpy(lVar1,param_3 + param_4,uVar5);
      *(long *)(param_1 + 0x18) = lVar2;
      FUN_00742638((long *)(param_1 + 8));
      if (*(ulong *)(param_1 + 0x10) < uVar3) {
        uVar4 = *(ulong *)(param_1 + 0x28);
        FUN_0074285c(uVar4,param_3 + uVar5 + param_4,uVar3);
        if (uVar4 != uVar3) {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        }
        *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar4;
      }
      else {
        _memcpy(*(undefined8 *)(param_1 + 8),param_3 + uVar5 + param_4,uVar3);
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
    }
  }
  return;
}



/* Entry: 0074285c; end: 007428eb;  */

long FUN_0074285c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar1 = param_1;
  func_0x00793c00(param_1,param_2,param_2,param_3);
  if (lVar1 == param_3) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if (lVar1 < 1) {
        if (lVar1 == 0) {
          return lVar2;
        }
        return lVar1;
      }
      lVar2 = lVar1 + lVar2;
      param_3 = param_3 - lVar1;
      lVar1 = param_1;
      func_0x00793c00();
    } while (lVar1 != param_3);
  }
  return param_3 + lVar2;
}



/* Entry: 007428ec; end: 007428f7; -[GPBCodedOutputStream writeTag:format:] */

void FUN_007428ec(long param_1,undefined8 param_2,int param_3,uint param_4)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 007428f8; end: 00742903; -[GPBCodedOutputStream writeRawVarint32:] */

void FUN_007428f8(long param_1,undefined8 param_2,uint param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 00742904; end: 0074290f; -[GPBCodedOutputStream writeRawVarintSizeTAs32:] */

void FUN_00742904(long param_1,undefined8 param_2,uint param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 00742910; end: 0074291b; -[GPBCodedOutputStream writeRawVarint64:] */

void FUN_00742910(long param_1,undefined8 param_2,ulong param_3)

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
        FUN_00742638(plVar1);
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
    FUN_00742638(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 0074291c; end: 00742927; -[GPBCodedOutputStream writeRawLittleEndian32:] */

void FUN_0074291c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  return;
}



/* Entry: 00742928; end: 00742a43; -[GPBCodedOutputStream writeRawLittleEndian64:] */

void FUN_00742928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)param_3;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x30);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == *(long *)(param_1 + 0x10)) {
    FUN_00742638(plVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *(char *)(*plVar1 + lVar2) = (char)((ulong)param_3 >> 0x38);
  return;
}



/* Entry: 00742a44; end: 00742c03;  */

long FUN_00742a44(uint param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = param_1 << 3;
  lVar1 = 4;
  if ((param_1 & 0x1fffffff) >> 0x19 != 0) {
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
  func_0x00788320(param_2,param_2,4);
  lVar1 = 4;
  if ((param_2 >> 0x1c & 0xf) != 0) {
    lVar1 = 5;
  }
  uVar4 = (uint)param_2;
  lVar3 = 3;
  if (0x1fffff < uVar4) {
    lVar3 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar4) {
    lVar1 = lVar3;
  }
  lVar3 = 1;
  if (0x7f < uVar4) {
    lVar3 = lVar1;
  }
  return param_2 + lVar2 + lVar3;
}



/* Entry: 00742c04; end: 00742d73;  */

long FUN_00742c04(uint param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = param_1 << 3;
  lVar1 = 4;
  if ((param_1 & 0x1fffffff) >> 0x19 != 0) {
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
  if (param_2 >> 0x1c != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2) {
    lVar3 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < param_2) {
    lVar1 = lVar3;
  }
  lVar3 = 1;
  if (0x7f < param_2) {
    lVar3 = lVar1;
  }
  return lVar3 + lVar2;
}


