/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100019d1c; end: 100019d27;  */

void FUN_100019d1c(void)

{
  long unaff_x20;
  
  func_0x0001000172f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100019d28; end: 100019d5f;  */

void FUN_100019d28(void)

{
  long unaff_x20;
  
  func_0x0001000172f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100019d60; end: 100019d8b;  */

void FUN_100019d60(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x20;
  undefined1 auVar13 [16];
  
  uVar12 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar12 = 0;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ
            (param_2,*(undefined8 *)(unaff_x20 + 0x10),uVar12 | *(byte *)(unaff_x20 + 0x18));
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uVar6 = uVar10;
  FUN_1000192a8();
  _swift_release(uVar10);
  _objc_retain();
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  uVar10 = uVar11;
  FUN_1000195ec();
  _swift_release(uVar11);
  lVar7 = 0x1000c4728;
  func_0x0001000100d0(0x1000c4728,&UNK_1000894e0);
  lVar1 = (long)param_1 + (long)*(int *)(lVar7 + 0x24);
  __s9WidgetKit09AccessoryA10BackgroundVACycfC(lVar1);
  lVar7 = 0x1000c4730;
  func_0x0001000100d0(0x1000c4730,&UNK_1000894e8);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar7 + 0x24));
  lVar7 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar5 = *(int *)(lVar7 + 0x14);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))((long)puVar2 + (long)iVar5,uVar4,lVar7);
  auVar13 = NEON_fmov(0x4020000000000000,8);
  puVar2[1] = auVar13._8_8_;
  *puVar2 = auVar13._0_8_;
  lVar7 = 0x1000c4738;
  puVar9 = &UNK_1000894f0;
  func_0x0001000100d0();
  *(undefined2 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24)) = 0x100;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar8 = 0x1000c4740;
  func_0x0001000100d0(0x1000c4740,&UNK_1000894f8);
  plVar3 = (long *)(lVar1 + *(int *)(lVar8 + 0x24));
  *plVar3 = lVar7;
  plVar3[1] = (long)puVar9;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = uVar6;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = uVar10;
  return;
}



/* Entry: 100019d8c; end: 10001a05f;  */

void FUN_100019d8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    puVar1 = PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370;
    _swift_getWitnessTable(PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10001a060; end: 10001a0c7;  */

void FUN_10001a060(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    uVar1 = param_2;
    func_0x000100019dd0();
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
    uStack_40 = uVar1;
    uStack_38 = param_4;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 10001a0c8; end: 10001a0f7;  */

void FUN_10001a0c8(void)

{
  long unaff_x20;
  
  func_0x0001000172f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10001a0f8; end: 10001a0ff;  */

void FUN_10001a0f8(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100018db8(uVar1,1,*(undefined8 *)(unaff_x20 + 0x10),uVar2 | *(byte *)(unaff_x20 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Entry: 10001a100; end: 10001a143;  */

void FUN_10001a100(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100018db8(uVar1,param_3,*(undefined8 *)(unaff_x20 + 0x10),uVar2 | *(byte *)(unaff_x20 + 0x18))
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 10001a144; end: 10001a157;  */

undefined8 * FUN_10001a144(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1000172c0(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 10001a158; end: 10001a203;  */

undefined8 * FUN_10001a158(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1000172c0(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 10001a204; end: 10001a24b;  */

undefined8 * FUN_10001a204(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001000172f0(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 10001a24c; end: 10001a2f3;  */

int FUN_10001a24c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 10) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = *(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10001a2f4; end: 10001a317;  */

void FUN_10001a2f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100019c58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10001a318; end: 10001a32f;  */

void FUN_10001a318(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100018db8(uVar1,0,*(undefined8 *)(unaff_x20 + 0x10),uVar2 | *(byte *)(unaff_x20 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Entry: 10001a330; end: 10001a3a7;  */

void FUN_10001a330(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c47b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s21SnapchatWidgetsShared9ErrorViewV7SwiftUI0E0AAMc_1000b0f30;
  _swift_getWitnessTable
            (PTR___s21SnapchatWidgetsShared9ErrorViewV7SwiftUI0E0AAMc_1000b0f30,
             PTR___s21SnapchatWidgetsShared9ErrorViewVN_1000b0f38);
  puRam00000001000c47b8 = puVar1;
  return;
}



/* Entry: 10001a3a8; end: 10001a3af;  */

void FUN_10001a3a8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  _swift_errorRetain();
  FUN_10001a330();
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
            (&uStack_18,PTR___s21SnapchatWidgetsShared9ErrorViewVN_1000b0f38,param_1);
  return;
}



/* Entry: 10001a3b0; end: 10001a553;  */

long * FUN_10001a3b0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    uVar10 = 0x1000c41d0;
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    plVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar10);
    bVar5 = (int)plVar6 != 1;
    if (bVar5) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      lVar7 = 0;
      __s9WidgetKit0A6FamilyOMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar10,!bVar5);
    lVar11 = (long)*(int *)(param_3 + 0x14);
    uVar10 = 0x1000c41d8;
    func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
    lVar7 = (long)param_2 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar7,uVar10);
    bVar5 = (int)lVar7 != 1;
    if (bVar5) {
      *(undefined8 *)((long)param_1 + lVar11) = *(undefined8 *)((long)param_2 + lVar11);
      _swift_retain();
    }
    else {
      lVar7 = 0;
      __s7SwiftUI16RedactionReasonsVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))
                ((long)param_1 + lVar11,(long)param_2 + lVar11,lVar7);
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar11,uVar10,!bVar5);
    lVar7 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
    lVar11 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))(lVar7,lVar11,lVar8);
    lVar8 = 0;
    FUN_1000185d4();
    puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar8 + 0x14));
    puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar8 + 0x14));
    uVar10 = *puVar2;
    uVar4 = *(undefined1 *)(puVar2 + 1);
    FUN_1000172c0(uVar10,uVar4);
    *puVar1 = uVar10;
    *(undefined1 *)(puVar1 + 1) = uVar4;
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar9 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar7 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10001a554; end: 10001a65b;  */

void FUN_10001a554(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  if ((int)puVar3 == 1) {
    lVar4 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
  }
  else {
    _swift_release(*param_1);
  }
  lVar5 = (long)*(int *)(param_2 + 0x14);
  uVar2 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar4 = (long)param_1 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar4,uVar2);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)param_1 + lVar5,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)((long)param_1 + lVar5));
  }
  lVar4 = (long)param_1 + (long)*(int *)(param_2 + 0x18);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar4,lVar5);
  lVar5 = 0;
  FUN_1000185d4();
  puVar3 = (undefined8 *)(lVar4 + *(int *)(lVar5 + 0x14));
  cVar1 = *(char *)(puVar3 + 1);
  if (cVar1 != '\x01') {
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000b10c0)();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_1000b15a8)(*puVar3);
  return;
}



/* Entry: 10001a65c; end: 10001a98f;  */

undefined8 * FUN_10001a65c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar7 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar7);
  bVar3 = (int)puVar4 != 1;
  if (bVar3) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar5 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar7,!bVar3);
  lVar8 = (long)*(int *)(param_3 + 0x14);
  uVar7 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar5 = (long)param_2 + lVar8;
  _swift_getEnumCaseMultiPayload(lVar5,uVar7);
  bVar3 = (int)lVar5 != 1;
  if (bVar3) {
    *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
    _swift_retain();
  }
  else {
    lVar5 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar8,uVar7,!bVar3);
  lVar5 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar8 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(lVar5,lVar8,lVar6);
  lVar6 = 0;
  FUN_1000185d4();
  puVar4 = (undefined8 *)(lVar5 + *(int *)(lVar6 + 0x14));
  puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar6 + 0x14));
  uVar7 = *puVar1;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  FUN_1000172c0(uVar7,uVar2);
  *puVar4 = uVar7;
  *(undefined1 *)(puVar4 + 1) = uVar2;
  return param_1;
}



/* Entry: 10001a990; end: 10001a9cf;  */

undefined8 FUN_10001a990(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10001a9d0; end: 10001acfb;  */

long FUN_10001a9d0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
  }
  else {
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar4 = param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar4,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar4);
    _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar3,1);
  }
  else {
    _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar3 = param_1 + *(int *)(param_3 + 0x18);
  param_2 = param_2 + *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(lVar3,param_2,lVar4);
  lVar4 = 0;
  FUN_1000185d4();
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  return param_1;
}



/* Entry: 10001acfc; end: 10001ad07;  */

void FUN_10001acfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10001ad08; end: 10001adb7;  */

void FUN_10001ad08(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  lVar2 = 0x1000c4370;
  func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  }
  else {
    lVar2 = 0x1000c4378;
    func_0x0001000100d0(0x1000c4378,&UNK_100088f98);
    lVar3 = *(long *)(lVar2 + -8);
    if ((int)param_2 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_3 + 0x14);
    }
    else {
      lVar2 = 0;
      FUN_1000185d4();
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_3 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001adb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar2);
  return;
}



/* Entry: 10001adb8; end: 10001adc3;  */

void FUN_10001adb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10001adc4; end: 10001ae7b;  */

void FUN_10001adc4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  lVar2 = 0x1000c4370;
  func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
  if (param_3 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    lVar2 = 0x1000c4378;
    func_0x0001000100d0(0x1000c4378,&UNK_100088f98);
    lVar3 = *(long *)(lVar2 + -8);
    if (param_3 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_4 + 0x14);
    }
    else {
      lVar2 = 0;
      FUN_1000185d4();
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_4 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001ae78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar2);
  return;
}



/* Entry: 10001ae7c; end: 10001aeb3;  */

void FUN_10001ae7c(undefined8 param_1)

{
  if (lRam00000001000c4818 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f574);
  return;
}



/* Entry: 10001aeb4; end: 10001afbf;  */

void FUN_10001aeb4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = 0x1000c43e8;
  lVar1 = 0x13f;
  func_0x00010001af74(0x13f,0x1000c43e8,PTR___s9WidgetKit0A6FamilyOMa_1000b0a68);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x1000c43f0;
    lVar1 = 0x13f;
    func_0x00010001af74(0x13f,0x1000c43f0,PTR___s7SwiftUI16RedactionReasonsVMa_1000b0420);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_1000185d4();
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0x100,3,&lStack_38,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 10001afc0; end: 10001afeb;  */

void FUN_10001afc0(void)

{
  func_0x00010001b09c(0x1000c4858,FUN_1000185d4,&DAT_100089374);
  return;
}



/* Entry: 10001afec; end: 10001afff;  */

undefined8 FUN_10001afec(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  FUN_1000185d4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return param_1;
}



/* Entry: 10001b000; end: 10001b0db;  */

void FUN_10001b000(void)

{
  FUN_10001e0ec();
  return;
}



/* Entry: 10001b0dc; end: 10001b0e3;  */

void FUN_10001b0dc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c46e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100089440;
  _swift_getWitnessTable(&DAT_100089440,&UNK_1000b23f8);
  puRam00000001000c46e0 = puVar1;
  return;
}



/* Entry: 10001b0e4; end: 10001b13b;  */

void FUN_10001b0e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x1000c4898;
  func_0x00010001b09c(0x1000c4898,FUN_10001ae7c,&DAT_1000895a4);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,
             PTR___s21SnapchatWidgetsShared19SCTimelineEntryViewPAAE4bodyQrvpQOMQ_1000b0ea8,1);
  return;
}



/* Entry: 10001b13c; end: 10001b147;  */

void FUN_10001b13c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10001b148; end: 10001b19b;  */

void FUN_10001b148(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c4898;
  func_0x00010001b09c(0x1000c4898,FUN_10001ae7c,&DAT_1000895a4);
  __s21SnapchatWidgetsShared19SCTimelineEntryViewPAAE4bodyQrvg(param_1,param_2,uVar1);
  return;
}



/* Entry: 10001b19c; end: 10001b1f3;  */

void FUN_10001b19c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c4898;
  func_0x00010001b09c(0x1000c4898,FUN_10001ae7c,&DAT_1000895a4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 10001b1f4; end: 10001b29f;  */

undefined8 * FUN_10001b1f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x00010001b1ac(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 10001b2a0; end: 10001b2e7;  */

undefined8 * FUN_10001b2a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010001b1d8(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 10001b2e8; end: 10001b38f;  */

int FUN_10001b2e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 10) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = *(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10001b390; end: 10001b7af;  */

long FUN_10001b390(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  code **ppcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_170 [8];
  ulong uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  ulong uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_170 + -extraout_x8;
  lVar1 = 0x1000c4970;
  puVar5 = &UNK_100089728;
  func_0x0001000100d0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar12 = lVar16 - extraout_x12;
  lVar14 = param_1;
  func_0x000100087820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 != 0) {
    lVar17 = lVar14;
    lStack_100 = lVar16;
    lStack_f8 = lVar13;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar14);
    puVar2 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(lVar17,puVar5);
    lVar14 = lVar17;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar17,puVar5);
    func_0x000100086ca0();
    _objc_release(lVar14);
    lVar14 = lVar17;
    puVar9 = puVar5;
    func_0x000100018c5c();
    if (puVar2 != (undefined *)0x0) {
      __s7SwiftUI9AlignmentV6centerACvgZ();
      uVar10 = (ulong)(param_3 & 0x1ff);
      puStack_118 = puVar9;
      lStack_110 = lVar14;
      FUN_10001b7b0(&lStack_f0,param_2,uVar10,puVar2);
      uStack_128 = puStack_e8;
      lStack_130 = lStack_f0;
      uStack_158 = lStack_e0;
      uStack_148 = uStack_c0;
      uStack_150 = uStack_c8;
      uStack_138 = uStack_d0;
      uStack_140 = uStack_d8;
      lVar14 = param_1;
      func_0x000100087860();
      _objc_retainAutoreleasedReturnValue();
      if (lVar14 == 0) {
        lStack_160 = 0;
        uStack_168 = 0;
      }
      else {
        lVar13 = lVar14;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uStack_168 = uVar10;
        lStack_160 = lVar13;
        _objc_release(lVar14);
      }
      lVar14 = param_1;
      puStack_108 = puVar2;
      func_0x0001000877c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar14 == 0) {
        lVar13 = 0;
        uStack_90 = 0;
        uVar11 = uVar10;
      }
      else {
        lVar13 = lVar14;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar11 = uVar10;
        _objc_release();
        uStack_90 = uVar10;
      }
      __s7SwiftUI9AlignmentV13bottomLeadingACvgZ();
      lStack_a8 = lStack_160;
      uStack_a0 = uStack_168;
      uStack_88 = 0;
      lStack_f0 = lStack_110;
      puStack_e8 = puStack_118;
      uStack_d8 = uStack_128;
      lStack_e0 = lStack_130;
      uStack_d0 = uStack_158;
      uStack_b0 = uStack_148;
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_138;
      uStack_c8 = uStack_140;
      lVar16 = param_1;
      lStack_98 = lVar13;
      lStack_80 = lVar14;
      uStack_78 = uVar11;
      func_0x000100087680(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar16;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar16);
      func_0x000100086ea0(param_1);
      __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
                (puVar15,lVar14,uVar11,param_1);
      _swift_bridgeObjectRelease(uVar11);
      lVar14 = 0x1000c4978;
      func_0x0001000100d0(0x1000c4978,&UNK_100089730);
      lVar3 = lVar14;
      func_0x00010001c160();
      __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar12,puVar15,lVar14,lVar3);
      func_0x00010001c25c(puVar15,0x1000c4330,&UNK_1000890b0);
      func_0x00010001c25c(&lStack_f0,0x1000c4978,&UNK_100089730);
      lVar16 = lStack_f8;
      lVar13 = lStack_100;
      (**(code **)(lStack_f8 + 0x10))(lStack_100,lVar12,lVar1);
      plVar4 = &lStack_f0;
      lStack_f0 = lVar14;
      puStack_e8 = (undefined *)lVar3;
      _swift_getOpaqueTypeConformance
                (plVar4,
                 PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar13,lVar1,plVar4);
      _objc_release(puStack_108);
      func_0x000100018c5c(lVar17,puVar5);
      (**(code **)(lVar16 + 8))(lVar12,lVar1);
      return lVar13;
    }
    func_0x000100018c5c(lVar17,puVar5);
  }
  lVar12 = 0x74706d652d6d656d;
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&pcStack_70 - extraout_x8_01;
  lVar1 = 0x1000c4940;
  func_0x0001000100d0(0x1000c4940,&UNK_100089700);
  lVar17 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar13 = lVar14 - extraout_x12_00;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74706d652d6d656d,0xe900000000000079);
  puVar5 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (puVar5 != (undefined *)0x0) {
    puVar2 = &UNK_1000b2568;
    _swift_allocObject(&UNK_1000b2568,0x21,7);
    *(undefined **)(puVar2 + 0x10) = puVar5;
    *(undefined8 *)(puVar2 + 0x18) = 0x3fdbd70a3d70a3d7;
    puVar2[0x20] = 0;
    pcStack_70 = FUN_10001c0cc;
    puStack_68 = puVar2;
    _objc_retain(puVar5);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
              (lVar16,0,0,2);
    pcVar6 = (code *)0x1000c4948;
    func_0x0001000100d0(0x1000c4948,&UNK_100089708);
    uVar7 = 0x1000c4950;
    func_0x00010001c218(0x1000c4950,0x1000c4948,&UNK_100089708,
                        PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar13,lVar16,pcVar6,uVar7);
    func_0x00010001c25c(lVar16,0x1000c4330,&UNK_1000890b0);
    _swift_release(puVar2);
    (**(code **)(lVar17 + 0x10))(lVar14,lVar13,lVar1);
    ppcVar8 = &pcStack_70;
    pcStack_70 = pcVar6;
    puStack_68 = (undefined *)uVar7;
    _swift_getOpaqueTypeConformance
              (ppcVar8,
               PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar14,lVar1,ppcVar8);
    _objc_release(puVar5);
    (**(code **)(lVar17 + 8))(lVar13,lVar1);
    return lVar14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return lVar12;
}



/* Entry: 10001b7b0; end: 10001b8f3;  */

void FUN_10001b7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &UNK_1000b2590;
  _swift_allocObject(&UNK_1000b2590,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = 0x3fd0000000000000;
  puVar1[0x20] = 0;
  lVar2 = 0x1000c49a8;
  func_0x0001000100d0(0x1000c49a8,&UNK_10008d190);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  _objc_retain();
  __s7SwiftUI5ColorV5blackACvgZ();
  uVar3 = param_6;
  __s7SwiftUI5ColorV7opacityyACSdF(0);
  _swift_release();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  __s7SwiftUI5ColorV5blackACvgZ();
  uVar4 = 0x3fe3333333333333;
  uVar3 = param_6;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fe3333333333333);
  _swift_release(param_6);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  __s7SwiftUI9UnitPointV6centerACvgZ();
  uVar3 = uVar4;
  uVar5 = param_3;
  __s7SwiftUI9UnitPointV6bottomACvgZ();
  __s7SwiftUI8GradientV6colorsACSayAA5ColorVG_tcfC(lVar2);
  __s7SwiftUI14LinearGradientV8gradient10startPoint03endG0AcA0D0V_AA04UnitG0VAJtcfC
            (&uStack_88,uVar4,param_3,uVar3,uVar5);
  *param_1 = 0x10001c2a0;
  param_1[1] = puVar1;
  param_1[2] = uStack_88;
  param_1[4] = uStack_78;
  param_1[3] = uStack_80;
  param_1[6] = uStack_68;
  param_1[5] = uStack_70;
  return;
}



/* Entry: 10001b8f4; end: 10001bc33;  */

void FUN_10001b8f4(long *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined2 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100087660(param_5);
  dVar5 = param_2;
  uVar6 = param_3;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s21SnapchatWidgetsShared16AspectFillOffsetO08verticalF09imageSize5frame15topCropFraction12CoreGraphics7CGFloatVSo6CGSizeV_AlJSgtFZ
            (param_2,param_3,dVar5,uVar6,param_6,param_7);
  _objc_retain(param_5);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  uVar6 = 0;
  uVar7 = 0;
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_5);
  _swift_release(param_5);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  lVar3 = lVar2;
  __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
  _swift_release(lVar2);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV3topACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,uVar6,0,uVar7,0,lVar2,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 0x101;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,0x101);
  lStack_138 = 0;
  param_2 = -param_2;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 0x101;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar3;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar3;
  uStack_206 = uStack_350;
  lStack_140 = lVar3;
  FUN_10001c0d8(alStack_290,&lStack_e0,0x1000c4958,&UNK_100089710);
  func_0x00010001c25c(alStack_248,0x1000c4958,&UNK_100089710);
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_1c0 = lStack_100;
  uStack_1b8 = 0;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  uStack_2d8 = 0;
  lStack_2e0 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  lStack_160 = lStack_100;
  uStack_158 = 0;
  dStack_2d0 = param_2;
  dStack_1b0 = param_2;
  dStack_150 = param_2;
  FUN_10001c0d8(&lStack_200,&lStack_e0,0x1000c4960,&UNK_100089718);
  func_0x00010001c25c(&lStack_1a0,0x1000c4960,&UNK_100089718);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  uStack_f8 = (undefined2)uStack_2d8;
  uStack_f6 = (undefined6)((ulong)uStack_2d8 >> 0x10);
  lStack_100 = lStack_2e0;
  uStack_f0 = SUB82(dStack_2d0,0);
  uStack_ee = (undefined6)((ulong)dStack_2d0 >> 0x10);
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  uStack_e8 = 0;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  dStack_90 = dStack_2d0;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  uStack_98 = uStack_2d8;
  lStack_a0 = lStack_2e0;
  uStack_88 = 0;
  FUN_10001c0d8(&lStack_140,&uStack_380,0x1000c4968,&UNK_100089720);
  func_0x00010001c25c(&lStack_e0,0x1000c4968,&UNK_100089720);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = CONCAT62(uStack_f6,uStack_f8);
  param_1[8] = lStack_100;
  *(ulong *)((long)param_1 + 0x52) = CONCAT26(uStack_e8,uStack_ee);
  *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_f0,uStack_f6);
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10001bc34; end: 10001bd07;  */

void FUN_10001bc34(undefined8 *param_1)

{
  char cVar1;
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_1000b15b0)();
    return;
  }
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_1000b10c8)();
    return;
  }
  return;
}



/* Entry: 10001bd08; end: 10001bd2b;  */

void FUN_10001bd08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10001bd2c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10001bd2c; end: 10001bd6b;  */

void FUN_10001bd2c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000896a4;
  _swift_getWitnessTable(&UNK_1000896a4,&UNK_1000b2540);
  puRam00000001000c4930 = puVar1;
  return;
}



/* Entry: 10001bd6c; end: 10001bdab;  */

void FUN_10001bd6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10001bdac();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvpQOMQ_1000b0e98
             ,1);
  return;
}



/* Entry: 10001bdac; end: 10001bdeb;  */

void FUN_10001bdac(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100089688;
  _swift_getWitnessTable(&DAT_100089688,&UNK_1000b2540);
  puRam00000001000c4938 = puVar1;
  return;
}



/* Entry: 10001bdec; end: 10001bdf7;  */

void FUN_10001bdec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10001bdf8; end: 10001be2f;  */

void FUN_10001bdf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10001bdac();
                    /* WARNING: Could not recover jumptable at 0x000100084f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvg_1000b0e90)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 10001be30; end: 10001c0a7;  */

long FUN_10001be30(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  code **ppcVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&pcStack_70 - extraout_x8;
  lVar1 = 0x1000c4940;
  func_0x0001000100d0(0x1000c4940,&UNK_100089700);
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar7 = lVar8 - extraout_x12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = &UNK_1000b2568;
    _swift_allocObject(&UNK_1000b2568,0x21,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar3[0x20] = param_4;
    pcStack_70 = FUN_10001c0cc;
    puStack_68 = puVar3;
    _objc_retain(puVar2);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
              (lVar9,0,0,2);
    pcVar4 = (code *)0x1000c4948;
    func_0x0001000100d0(0x1000c4948,&UNK_100089708);
    uVar5 = 0x1000c4950;
    func_0x00010001c218(0x1000c4950,0x1000c4948,&UNK_100089708,
                        PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar7,lVar9,pcVar4,uVar5);
    func_0x00010001c25c(lVar9,0x1000c4330,&UNK_1000890b0);
    _swift_release(puVar3);
    (**(code **)(lVar10 + 0x10))(lVar8,lVar7,lVar1);
    ppcVar6 = &pcStack_70;
    pcStack_70 = pcVar4;
    puStack_68 = (undefined *)uVar5;
    _swift_getOpaqueTypeConformance
              (ppcVar6,
               PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar8,lVar1,ppcVar6);
    _objc_release(puVar2);
    (**(code **)(lVar10 + 8))(lVar7,lVar1);
    return lVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return param_1;
}



/* Entry: 10001c0a8; end: 10001c0cb;  */

void FUN_10001c0a8(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10001c0cc; end: 10001c0d7;  */

void FUN_10001c0cc(long *param_1,double param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined2 uStack_88;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100087660(uVar3);
  dVar7 = param_2;
  uVar9 = param_3;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s21SnapchatWidgetsShared16AspectFillOffsetO08verticalF09imageSize5frame15topCropFraction12CoreGraphics7CGFloatVSo6CGSizeV_AlJSgtFZ
            (param_2,param_3,dVar7,uVar9,uVar8,uVar1);
  _objc_retain(uVar3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar2);
  uVar8 = 0;
  uVar9 = 0;
  lVar4 = lVar5;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar5,uVar3);
  _swift_release(uVar3);
  (**(code **)(lVar6 + 8))(lVar5,lVar2);
  lVar5 = lVar4;
  __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
  _swift_release(lVar4);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV3topACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,uVar8,0,uVar9,0,lVar4,lVar2);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 0x101;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,0x101);
  lStack_138 = 0;
  param_2 = -param_2;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 0x101;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar5;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar5;
  uStack_206 = uStack_350;
  lStack_140 = lVar5;
  FUN_10001c0d8(alStack_290,&lStack_e0,0x1000c4958,&UNK_100089710);
  func_0x00010001c25c(alStack_248,0x1000c4958,&UNK_100089710);
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_1c0 = lStack_100;
  uStack_1b8 = 0;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  uStack_2d8 = 0;
  lStack_2e0 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  lStack_160 = lStack_100;
  uStack_158 = 0;
  dStack_2d0 = param_2;
  dStack_1b0 = param_2;
  dStack_150 = param_2;
  FUN_10001c0d8(&lStack_200,&lStack_e0,0x1000c4960,&UNK_100089718);
  func_0x00010001c25c(&lStack_1a0,0x1000c4960,&UNK_100089718);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  uStack_f8 = (undefined2)uStack_2d8;
  uStack_f6 = (undefined6)((ulong)uStack_2d8 >> 0x10);
  lStack_100 = lStack_2e0;
  uStack_f0 = SUB82(dStack_2d0,0);
  uStack_ee = (undefined6)((ulong)dStack_2d0 >> 0x10);
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  uStack_e8 = 0;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  dStack_90 = dStack_2d0;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  uStack_98 = uStack_2d8;
  lStack_a0 = lStack_2e0;
  uStack_88 = 0;
  FUN_10001c0d8(&lStack_140,&uStack_380,0x1000c4968,&UNK_100089720);
  func_0x00010001c25c(&lStack_e0,0x1000c4968,&UNK_100089720);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = CONCAT62(uStack_f6,uStack_f8);
  param_1[8] = lStack_100;
  *(ulong *)((long)param_1 + 0x52) = CONCAT26(uStack_e8,uStack_ee);
  *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_f0,uStack_f6);
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10001c0d8; end: 10001c29b;  */

undefined8 FUN_10001c0d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10001c29c; end: 10001c2cb;  */

void FUN_10001c29c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10001c2cc; end: 10001c92b;  */

void FUN_10001c2cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar16;
  long extraout_x8_04;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar4 = 0;
  uStack_a8 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lStack_f0 = *(long *)(lVar4 + -8);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar4 = 0;
  puStack_f8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar11 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_1000b1790;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar22 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar18 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)0x1000c40f0;
  func_0x0001000100d0(0x1000c40f0,&UNK_100088a98);
  lStack_d0 = *(long *)(puVar6 + -8);
  puStack_d8 = puVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar6 = (undefined *)0x1000c40e8;
  lStack_100 = lVar18 - extraout_x8_02;
  func_0x0001000100d0(0x1000c40e8,&UNK_100088a90);
  lStack_c0 = *(long *)(puVar6 + -8);
  puStack_c8 = puVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  uVar16 = (lVar18 - extraout_x8_02) - extraout_x8_03;
  puVar7 = (undefined8 *)0x1000c40e0;
  uStack_e0 = uVar16;
  func_0x0001000100d0(0x1000c40e0,&UNK_100088a88);
  lStack_b8 = puVar7[-1];
  puStack_b0 = puVar7;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = uVar16 - extraout_x8_04;
  lStack_a0 = lVar5;
  __s23HomeScreenWidgetDefines0C11IdentifiersO12memoriesKindSSvau();
  uStack_108 = *puVar7;
  uVar1 = puVar7[1];
  func_0x00010001d0b8(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
  _swift_bridgeObjectRetain(uVar1);
  __s8Dispatch0A3QoSV13userInitiatedACvgZ(lVar18);
  puStack_98 = PTR___swiftEmptyArrayStorage_1000b14d0;
  uVar8 = 0x1000c49b8;
  func_0x00010001cc14(0x1000c49b8,puVar11,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_1000b17a0
                     );
  uVar9 = 0x1000c49c0;
  func_0x0001000100d0(0x1000c49c0,&UNK_1000897a0);
  uVar15 = 0x1000c49c8;
  func_0x00010001cb40(0x1000c49c8,0x1000c49c0,&UNK_1000897a0,PTR___sSayxGSTsMc_1000b11d0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar22,&puStack_98,uVar9,uVar15,lVar4,uVar8);
  puVar3 = puStack_f8;
  (**(code **)(lStack_f0 + 0x68))
            (puStack_f8,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_1000b17a8
             ,lStack_e8);
  uVar8 = 0xd000000000000027;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000027,0x800000010009d4a0,lVar18,lVar22,puVar3,0);
  puStack_98 = (undefined *)0x1c20;
  uVar9 = 0x1000c49d0;
  puStack_90 = (undefined *)uVar8;
  func_0x0001000100d0(0x1000c49d0,&UNK_1000897a8);
  uVar8 = uVar9;
  func_0x00010001cb84();
  uVar15 = uVar8;
  func_0x00010001cc94();
  *(undefined8 *)(lVar5 + -0x10) = uVar15;
  lVar4 = lStack_100;
  __s9WidgetKit19StaticConfigurationV4kind8provider7contentACyxGSS_qd__x5EntryQyd__ctcAA16TimelineProviderRd__lufC
            (lStack_100,uStack_108,uVar1,&puStack_98,FUN_10001c92c,0,uVar9,&UNK_1000b26e8,uVar8);
  puVar10 = PTR__OBJC_CLASS___NSBundle_1000c2230;
  _objc_opt_self(PTR__OBJC_CLASS___NSBundle_1000c2230);
  puVar6 = puVar10;
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(lVar5 + -0x10) = 0xe800000000000000;
  puVar19 = (undefined *)0x736569726f6d654d;
  uVar15 = 0xe800000000000000;
  puVar11 = puVar19;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0x736569726f6d654d,0xe800000000000000,0,0,puVar6,0,0xe000000000000000,
             0x736569726f6d654d);
  _objc_release(puVar6);
  uVar8 = 0x1000c40f8;
  puStack_98 = puVar11;
  puStack_90 = (undefined *)uVar15;
  func_0x00010001cb40(0x1000c40f8,0x1000c40f0,&UNK_100088a98,
                      PTR___s9WidgetKit19StaticConfigurationVyxG7SwiftUI0aD0AAMc_1000b0af0);
  uVar9 = uVar8;
  FUN_100010174();
  puVar11 = puStack_d8;
  uVar16 = uStack_e0;
  puVar6 = PTR___sSSN_1000b1180;
  __s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lF
            (uStack_e0,&puStack_98,puStack_d8,PTR___sSSN_1000b1180,uVar8,uVar9);
  _swift_bridgeObjectRelease(uVar15);
  (**(code **)(lStack_d0 + 8))(lVar4,puVar11);
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(lVar5 + -0x10) = 0x800000010009d4d0;
  uVar15 = 0xed00006373654420;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0x736569726f6d654d,0xed00006373654420,0,0,puVar10,0,0xe000000000000000,
             0xd00000000000001b);
  _objc_release(puVar10);
  puStack_98 = puVar11;
  puStack_90 = puVar6;
  ppuVar12 = &puStack_98;
  ppuStack_88 = (undefined **)uVar8;
  uStack_80 = uVar9;
  puStack_78 = puVar19;
  uStack_70 = uVar15;
  _swift_getOpaqueTypeConformance
            (ppuVar12,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
             ,1);
  puVar11 = puStack_c8;
  __s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lF
            (lStack_a0,&puStack_78,puStack_c8,puVar6,ppuVar12,uVar9);
  _swift_bridgeObjectRelease(uVar15);
  (**(code **)(lStack_c0 + 8))(uVar16,puVar11);
  FUN_10001cd94();
  lVar4 = 0x1000c41c8;
  func_0x0001000100d0(0x1000c41c8,&UNK_100089230);
  lVar5 = 0;
  __s9WidgetKit0A6FamilyOMa();
  lVar22 = *(long *)(lVar5 + -8);
  lVar18 = *(long *)(lVar22 + 0x48);
  uVar17 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar21 = uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff);
  if ((uVar16 & 1) == 0) {
    _swift_allocObject(lVar4,uVar21 + lVar18 * 2,uVar17 | 7);
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    pcVar20 = *(code **)(lVar22 + 0x68);
    (*pcVar20)(lVar4 + uVar21,
               *(undefined4 *)PTR___s9WidgetKit0A6FamilyO11systemSmallyA2CmFWC_1000b0a40,lVar5);
    uVar2 = *(undefined4 *)PTR___s9WidgetKit0A6FamilyO11systemLargeyA2CmFWC_1000b0a38;
    lVar13 = lVar4 + uVar21 + lVar18;
  }
  else {
    _swift_allocObject(lVar4,uVar21 + lVar18 * 3,uVar17 | 7);
    *(undefined8 *)(lVar4 + 0x18) = 6;
    *(undefined8 *)(lVar4 + 0x10) = 3;
    lVar13 = lVar4 + uVar21;
    pcVar20 = *(code **)(lVar22 + 0x68);
    (*pcVar20)(lVar13,*(undefined4 *)PTR___s9WidgetKit0A6FamilyO11systemSmallyA2CmFWC_1000b0a40,
               lVar5);
    (*pcVar20)(lVar13 + lVar18,
               *(undefined4 *)PTR___s9WidgetKit0A6FamilyO12systemMediumyA2CmFWC_1000b0a48,lVar5);
    uVar2 = *(undefined4 *)PTR___s9WidgetKit0A6FamilyO11systemLargeyA2CmFWC_1000b0a38;
    lVar13 = lVar13 + lVar18 * 2;
  }
  (*pcVar20)(lVar13,uVar2,lVar5);
  puStack_98 = puVar11;
  puStack_90 = PTR___sSSN_1000b1180;
  ppuVar14 = &puStack_98;
  ppuStack_88 = ppuVar12;
  uStack_80 = uVar9;
  _swift_getOpaqueTypeConformance
            (ppuVar14,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980,
             1);
  lVar5 = lStack_a0;
  puVar7 = puStack_b0;
  __s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGF
            (uStack_a8,lVar4,puStack_b0,ppuVar14);
  _swift_bridgeObjectRelease(lVar4);
  (**(code **)(lStack_b8 + 8))(lVar5,puVar7);
  return;
}



/* Entry: 10001c92c; end: 10001c98b;  */

void FUN_10001c92c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010001d0f8(param_2,param_1);
  lVar2 = 0;
  FUN_10001d9c4();
  iVar1 = *(int *)(lVar2 + 0x14);
  puVar3 = &UNK_1000897b0;
  _swift_getKeyPath();
  *(undefined **)(param_1 + iVar1) = puVar3;
  uVar4 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
                    /* WARNING: Could not recover jumptable at 0x000100086288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagMultiPayload_1000b16d0)(param_1 + iVar1,uVar4,0);
  return;
}



/* Entry: 10001c98c; end: 10001c98f;  */

void FUN_10001c98c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100084f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ_1000b0ee0)
            ();
  return;
}



/* Entry: 10001c990; end: 10001cb3f;  */

void FUN_10001c990(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x1000c40d8;
  func_0x0001000100d0(0x1000c40d8,&UNK_100088a80);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&uStack_80 - extraout_x8;
  FUN_10001c2cc(lVar11);
  iVar2 = 2;
  FUN_1000806c0(2,0x11,0,0);
  if (iVar2 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,lVar11,lVar3);
  }
  else {
    uVar4 = 0x1000c40e0;
    func_0x000100010120(0x1000c40e0,&UNK_100088a88);
    uVar5 = 0x1000c40e8;
    func_0x000100010120(0x1000c40e8,&UNK_100088a90);
    uVar6 = 0x1000c40f0;
    func_0x000100010120(0x1000c40f0,&UNK_100088a98);
    uVar7 = 0x1000c40f8;
    FUN_10001cb40(0x1000c40f8,0x1000c40f0,&UNK_100088a98,
                  PTR___s9WidgetKit19StaticConfigurationVyxG7SwiftUI0aD0AAMc_1000b0af0);
    uVar8 = uVar7;
    FUN_100010174();
    puVar1 = PTR___sSSN_1000b1180;
    puStack_78 = (undefined8 *)PTR___sSSN_1000b1180;
    puVar9 = &uStack_80;
    uStack_80 = uVar6;
    puStack_70 = (undefined8 *)uVar7;
    uStack_68 = uVar8;
    _swift_getOpaqueTypeConformance
              (puVar9,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
               ,1);
    puStack_78 = (undefined8 *)puVar1;
    puVar10 = &uStack_80;
    uStack_80 = uVar5;
    puStack_70 = puVar9;
    uStack_68 = uVar8;
    _swift_getOpaqueTypeConformance
              (puVar10,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980
               ,1);
    puVar9 = &uStack_80;
    uStack_80 = uVar4;
    puStack_78 = puVar10;
    _swift_getOpaqueTypeConformance
              (puVar9,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
               ,1);
    __s7SwiftUI19WidgetConfigurationP0C3KitE23_contentMarginsDisabledQryF(param_1,lVar3,puVar9);
    (**(code **)(lVar12 + 8))(lVar11,lVar3);
  }
  return;
}



/* Entry: 10001cb40; end: 10001cc53;  */

void FUN_10001cb40(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10001cc54; end: 10001ccd3;  */

void FUN_10001cc54(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c49e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = 
  PTR___s21SnapchatWidgetsShared27ContainerBackgroundModifierV7SwiftUI04ViewF0AAMc_1000b0f00;
  _swift_getWitnessTable
            (PTR___s21SnapchatWidgetsShared27ContainerBackgroundModifierV7SwiftUI04ViewF0AAMc_1000b0f00
             ,PTR___s21SnapchatWidgetsShared27ContainerBackgroundModifierVN_1000b0f10);
  puRam00000001000c49e8 = puVar1;
  return;
}



/* Entry: 10001ccd4; end: 10001cd93;  */

/* WARNING: Removing unreachable block (ram,0x00010001cef0) */

ulong FUN_10001ccd4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1000b0c78;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x000100086be0();
  _objc_release(param_1);
  uVar2 = 0;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar2);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_1000b0c78 != lVar9) {
    ___stack_chk_fail();
    __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
    if (param_2 != 0) {
      puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000c20d0;
      _objc_allocWithZone();
      _objc_retain(&PTR____CFConstantStringClassReference_1000b7480);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,param_2);
      _swift_bridgeObjectRelease(param_2);
      func_0x000100086c40();
      _objc_release(uVar2);
      _objc_release(&PTR____CFConstantStringClassReference_1000b7480);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_1000c20d8;
        _objc_allocWithZone();
        func_0x000100086ce0();
        puVar5 = puVar4;
        func_0x0001000870e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0);
          _swift_unknownObjectRelease(puVar5);
        }
        puVar5 = PTR___sypN_1000b14c8;
        uStack_a8 = uStack_c8;
        uStack_b0 = uStack_d0;
        lStack_98 = lStack_b8;
        uStack_a0 = uStack_c0;
        if (lStack_b8 == 0) {
          _objc_release(puVar3);
          _objc_release(puVar4);
          func_0x00010001d070(&uStack_b0);
        }
        else {
          ppuVar6 = &puStack_e0;
          _swift_dynamicCast(ppuVar6,&uStack_b0,PTR___sypN_1000b14c8 + 8,
                             PTR___s10Foundation4DataVN_1000b1930,6);
          puVar1 = puStack_e0;
          if (((ulong)ppuVar6 & 1) == 0) {
            _objc_release(puVar3);
          }
          else {
            _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
            func_0x00010001c120(puVar1,uStack_d8);
            puVar7 = puVar1;
            FUN_10001ccd4(puVar1,uStack_d8);
            func_0x000100018c5c(puVar1,uStack_d8);
            if (puVar7 == (undefined *)0x0) {
              _objc_release(puVar4);
              func_0x000100018c5c(puVar1,uStack_d8);
              puVar4 = puVar3;
            }
            else {
              func_0x000100087440(puVar7);
              puVar8 = puVar7;
              func_0x0001000867a0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 == (undefined *)0x0) {
                uStack_c8 = 0;
                uStack_d0 = 0;
                lStack_b8 = 0;
                uStack_c0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_d0);
                _swift_unknownObjectRelease(puVar8);
              }
              uStack_a8 = uStack_c8;
              uStack_b0 = uStack_d0;
              lStack_98 = lStack_b8;
              uStack_a0 = uStack_c0;
              if (lStack_b8 == 0) {
                func_0x00010001d070(&uStack_b0);
              }
              else {
                uVar2 = 0;
                func_0x00010001d0b8(0,0x1000c4a00,&PTR_PTR_1000c20e8);
                ppuVar6 = &puStack_e0;
                _swift_dynamicCast(ppuVar6,&uStack_b0,puVar5 + 8,uVar2,6);
                if ((int)ppuVar6 != 0) {
                  puVar5 = puStack_e0;
                  _objc_retain(puStack_e0);
                  puVar8 = puVar5;
                  func_0x000100086ec0();
                  _objc_release(puVar3);
                  func_0x000100018c5c(puVar1,uStack_d8);
                  _objc_release(puVar4);
                  _objc_release(puVar7);
                  _objc_release(puVar5);
                  _objc_release(puVar5);
                  return (ulong)((uint)puVar8 ^ 1);
                }
              }
              _objc_release(puVar3);
              func_0x000100018c5c(puVar1,uStack_d8);
              _objc_release(puVar4);
              puVar4 = puVar7;
            }
          }
          _objc_release(puVar4);
        }
      }
    }
    return 1;
  }
  return unaff_x20;
}



/* Entry: 10001cd94; end: 10001d06f;  */

/* WARNING: Removing unreachable block (ram,0x00010001cef0) */

uint FUN_10001cd94(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
  if (param_2 != 0) {
    puVar2 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000c20d0;
    _objc_allocWithZone();
    _objc_retain(&PTR____CFConstantStringClassReference_1000b7480);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    func_0x000100086c40();
    _objc_release(param_1);
    _objc_release(&PTR____CFConstantStringClassReference_1000b7480);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_1000c20d8;
      _objc_allocWithZone();
      func_0x000100086ce0();
      puVar4 = puVar3;
      func_0x0001000870e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90);
        _swift_unknownObjectRelease(puVar4);
      }
      puVar4 = PTR___sypN_1000b14c8;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        _objc_release(puVar2);
        _objc_release(puVar3);
        func_0x00010001d070(&uStack_70);
      }
      else {
        ppuVar5 = &puStack_a0;
        _swift_dynamicCast(ppuVar5,&uStack_70,PTR___sypN_1000b14c8 + 8,
                           PTR___s10Foundation4DataVN_1000b1930,6);
        puVar1 = puStack_a0;
        if (((ulong)ppuVar5 & 1) == 0) {
          _objc_release(puVar2);
        }
        else {
          _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
          func_0x00010001c120(puVar1,uStack_98);
          puVar6 = puVar1;
          FUN_10001ccd4(puVar1,uStack_98);
          func_0x000100018c5c(puVar1,uStack_98);
          if (puVar6 == (undefined *)0x0) {
            _objc_release(puVar3);
            func_0x000100018c5c(puVar1,uStack_98);
            puVar3 = puVar2;
          }
          else {
            func_0x000100087440(puVar6);
            puVar7 = puVar6;
            func_0x0001000867a0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 == (undefined *)0x0) {
              uStack_88 = 0;
              uStack_90 = 0;
              lStack_78 = 0;
              uStack_80 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90);
              _swift_unknownObjectRelease(puVar7);
            }
            uStack_68 = uStack_88;
            uStack_70 = uStack_90;
            lStack_58 = lStack_78;
            uStack_60 = uStack_80;
            if (lStack_78 == 0) {
              func_0x00010001d070(&uStack_70);
            }
            else {
              uVar8 = 0;
              func_0x00010001d0b8(0,0x1000c4a00,&PTR_PTR_1000c20e8);
              ppuVar5 = &puStack_a0;
              _swift_dynamicCast(ppuVar5,&uStack_70,puVar4 + 8,uVar8,6);
              if ((int)ppuVar5 != 0) {
                puVar4 = puStack_a0;
                _objc_retain(puStack_a0);
                puVar7 = puVar4;
                func_0x000100086ec0();
                _objc_release(puVar2);
                func_0x000100018c5c(puVar1,uStack_98);
                _objc_release(puVar3);
                _objc_release(puVar6);
                _objc_release(puVar4);
                _objc_release(puVar4);
                return (uint)puVar7 ^ 1;
              }
            }
            _objc_release(puVar2);
            func_0x000100018c5c(puVar1,uStack_98);
            _objc_release(puVar3);
            puVar3 = puVar6;
          }
        }
        _objc_release(puVar3);
      }
    }
  }
  return 1;
}



/* Entry: 10001d070; end: 10001d13b;  */

undefined8 FUN_10001d070(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1000c49f8;
  func_0x0001000100d0(0x1000c49f8,&UNK_1000899e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10001d13c; end: 10001d13f;  */

void FUN_10001d13c(void)

{
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE12widgetFamilyAD0eH0Ovg();
  return;
}



/* Entry: 10001d140; end: 10001d277;  */

void FUN_10001d140(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar8 = &uStack_70;
  puVar9 = &uStack_70;
  puVar10 = &uStack_70;
  uVar2 = 0x1000c40d8;
  func_0x000100010120(0x1000c40d8,&UNK_100088a80);
  uVar3 = 0x1000c40e0;
  func_0x000100010120(0x1000c40e0,&UNK_100088a88);
  uVar4 = 0x1000c40e8;
  func_0x000100010120(0x1000c40e8,&UNK_100088a90);
  uVar5 = 0x1000c40f0;
  func_0x000100010120(0x1000c40f0,&UNK_100088a98);
  uVar6 = 0x1000c40f8;
  FUN_10001cb40(0x1000c40f8,0x1000c40f0,&UNK_100088a98,
                PTR___s9WidgetKit19StaticConfigurationVyxG7SwiftUI0aD0AAMc_1000b0af0);
  uVar7 = uVar6;
  FUN_100010174();
  puVar1 = PTR___sSSN_1000b1180;
  puStack_68 = PTR___sSSN_1000b1180;
  uStack_70 = uVar5;
  puStack_60 = (undefined1 *)uVar6;
  uStack_58 = uVar7;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
             ,1);
  puStack_68 = puVar1;
  uStack_70 = uVar4;
  puStack_60 = (undefined1 *)puVar8;
  uStack_58 = uVar7;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980,
             1);
  uStack_70 = uVar3;
  puStack_68 = (undefined *)puVar9;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
             ,1);
  uStack_70 = uVar2;
  puStack_68 = (undefined *)puVar10;
  _swift_getOpaqueTypeConformance(&uStack_70,&DAT_10008f2a8,1);
  return;
}



/* Entry: 10001d278; end: 10001d3a7;  */

long * FUN_10001d278(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    lVar6 = 0;
    FUN_10001edd0();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar8 = *puVar2;
    uVar4 = *(undefined1 *)(puVar2 + 1);
    func_0x00010001b1ac(uVar8,uVar4);
    *puVar1 = uVar8;
    *(undefined1 *)(puVar1 + 1) = uVar4;
    lVar9 = (long)*(int *)(param_3 + 0x14);
    uVar8 = 0x1000c41d0;
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    lVar6 = (long)param_2 + lVar9;
    _swift_getEnumCaseMultiPayload(lVar6,uVar8);
    bVar5 = (int)lVar6 != 1;
    if (bVar5) {
      *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
      _swift_retain();
    }
    else {
      lVar6 = 0;
      __s9WidgetKit0A6FamilyOMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6)
      ;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar9,uVar8,!bVar5);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10001d3a8; end: 10001d453;  */

void FUN_10001d3a8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  lVar2 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  func_0x00010001b1d8(*puVar1,*(undefined1 *)(puVar1 + 1));
  lVar4 = (long)*(int *)(param_2 + 0x14);
  uVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar2 = param_1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s9WidgetKit0A6FamilyOMa();
                    /* WARNING: Could not recover jumptable at 0x00010001d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar4,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10001d454; end: 10001d667;  */

long FUN_10001d454(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  lVar5 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar6 = *puVar2;
  uVar3 = *(undefined1 *)(puVar2 + 1);
  func_0x00010001b1ac(uVar6,uVar3);
  *puVar1 = uVar6;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  lVar7 = (long)*(int *)(param_3 + 0x14);
  uVar6 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar5 = param_2 + lVar7;
  _swift_getEnumCaseMultiPayload(lVar5,uVar6);
  bVar4 = (int)lVar5 != 1;
  if (bVar4) {
    *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
    _swift_retain();
  }
  else {
    lVar5 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1 + lVar7,param_2 + lVar7,lVar5);
  }
  _swift_storeEnumTagMultiPayload(param_1 + lVar7,uVar6,!bVar4);
  return param_1;
}



/* Entry: 10001d668; end: 10001d6af;  */

undefined8 FUN_10001d668(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10001d6b0; end: 10001d8a3;  */

long FUN_10001d6b0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  lVar3 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar4 = param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar4,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar4);
    _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar3,1);
  }
  else {
    _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 10001d8a4; end: 10001d8af;  */

void FUN_10001d8a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10001d8b0; end: 10001d92f;  */

void FUN_10001d8b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_10001edd0();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    lVar1 = 0x1000c4370;
    func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + *(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}



/* Entry: 10001d930; end: 10001d93b;  */

void FUN_10001d930(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10001d93c; end: 10001d9c3;  */

void FUN_10001d93c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_10001edd0();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar1 = 0x1000c4370;
    func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 10001d9c4; end: 10001d9fb;  */

void FUN_10001d9c4(undefined8 param_1)

{
  if (lRam00000001000c4a60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f5fc);
  return;
}



/* Entry: 10001d9fc; end: 10001dad3;  */

void FUN_10001d9fc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10001edd0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x00010001da80();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10001dad4; end: 10001dae3;  */

void FUN_10001dad4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008f624,1);
  return;
}



/* Entry: 10001dae4; end: 10001ddcb;  */

void FUN_10001dae4(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  code *pcVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_67 [7];
  
  lVar3 = 0;
  lStack_70 = param_1;
  FUN_100020cfc();
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000c4a98;
  func_0x0001000100d0(0x1000c4a98,&UNK_100089860);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar14 - extraout_x8_00);
  lVar4 = 0;
  __s9WidgetKit0A6FamilyOMa();
  puVar7 = PTR___s9WidgetKit0A6FamilyOMa_1000b0a68;
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar15 = (long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar12 = lVar15 - extraout_x12;
  FUN_10001d9c4();
  FUN_10001ddfc(uVar12);
  (**(code **)(lVar9 + 0x68))
            (lVar15,*(undefined4 *)PTR___s9WidgetKit0A6FamilyO12systemMediumyA2CmFWC_1000b0a48,lVar4
            );
  uVar5 = 0x1000c4aa0;
  func_0x00010001e070(0x1000c4aa0,puVar7,PTR___s9WidgetKit0A6FamilyOSQAAMc_1000b0a78);
  uVar6 = uVar12;
  __sSQ2eeoiySbx_xtFZTj(uVar12,lVar15,lVar4,uVar5);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar15,lVar4);
  (*pcVar10)(uVar12,lVar4);
  if ((uVar6 & 1) == 0) {
    func_0x00010001e02c();
    puVar7 = &UNK_100089868;
    _swift_getKeyPath();
    lVar4 = lStack_68;
    iVar2 = *(int *)(lStack_68 + 0x14);
    *(undefined **)(lVar14 + iVar2) = puVar7;
    uVar5 = 0x1000c41d0;
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    _swift_storeEnumTagMultiPayload(lVar14 + iVar2,uVar5,0);
    func_0x00010001e02c(lVar14,puVar13,FUN_100020cfc);
    puVar8 = puVar13;
    _swift_storeEnumTagMultiPayload(puVar13,lVar3,1);
    FUN_10001bd2c();
    uVar5 = 0x1000c4aa8;
    func_0x00010001e070(0x1000c4aa8,FUN_100020cfc,&UNK_100089ae4);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (lStack_70,puVar13,&UNK_1000b2540,lVar4,puVar8,uVar5);
    func_0x00010001e0b0(lVar14);
  }
  else {
    lVar4 = 0;
    FUN_10001edd0();
    puVar8 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x14));
    uVar11 = *puVar8;
    *puVar13 = uVar11;
    uVar1 = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)(puVar13 + 1) = uVar1;
    *(undefined1 *)((long)puVar13 + 9) = 0;
    _swift_storeEnumTagMultiPayload(puVar13,lVar3,0);
    func_0x00010001b1ac(uVar11,uVar1);
    FUN_10001bd2c();
    uVar5 = 0x1000c4aa8;
    func_0x00010001e070(0x1000c4aa8,FUN_100020cfc,&UNK_100089ae4);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (lStack_70,puVar13,&UNK_1000b2540,lStack_68,uVar11,uVar5);
  }
  return;
}



/* Entry: 10001ddcc; end: 10001ddeb;  */

void FUN_10001ddcc(void)

{
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE12widgetFamilyAD0eH0Ovg();
  return;
}



/* Entry: 10001ddec; end: 10001ddfb;  */

void FUN_10001ddec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10001ddfc; end: 10001e00b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10001ddfc(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  __s7SwiftUI17EnvironmentValuesVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  func_0x00010001e9a8();
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,puVar9,lVar3);
  }
  else {
    uVar10 = *puVar9;
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    puVar9 = puVar2;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    puVar4 = puVar9;
    _os_log_type_enabled();
    if ((int)puVar4 != 0) {
      puVar5 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x6146746567646957;
      auStack_70[1] = uVar6;
      FUN_10001e2f8(0x6146746567646957,0xec000000796c696d,auStack_70 + 1);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      __os_log_impl(0x100000000,puVar9,(uint)puVar2 & 0xff,
                    "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                    ,puVar5,0xc);
      FUN_10001e3c0(uVar6);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    _objc_release(puVar9);
    __s7SwiftUI17EnvironmentValuesVACycfC(lVar8);
    _swift_getAtKeyPath(param_1,lVar8,uVar10);
    _swift_release(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 10001e00c; end: 10001e0eb;  */

void FUN_10001e00c(void)

{
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE12widgetFamilyAD0eH0Ovg();
  return;
}



/* Entry: 10001e0ec; end: 10001e2f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10001e0ec(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  __s7SwiftUI17EnvironmentValuesVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  func_0x00010001e9a8();
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,puVar9,lVar3);
  }
  else {
    uVar10 = *puVar9;
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    puVar9 = puVar2;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    puVar4 = puVar9;
    _os_log_type_enabled();
    if ((int)puVar4 != 0) {
      puVar5 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0xd000000000000010;
      auStack_70[1] = uVar6;
      FUN_10001e2f8(0xd000000000000010,0x800000010009d4f0,auStack_70 + 1);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      __os_log_impl(0x100000000,puVar9,(uint)puVar2 & 0xff,
                    "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                    ,puVar5,0xc);
      FUN_10001e3c0(uVar6);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    _objc_release(puVar9);
    __s7SwiftUI17EnvironmentValuesVACycfC(lVar8);
    _swift_getAtKeyPath(param_1,lVar8,uVar10);
    _swift_release(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 10001e2f8; end: 10001e3bf;  */

undefined * FUN_10001e2f8(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_10001e3e0(&puStack_60,0,0,1,param_1,param_2);
  puVar1 = puStack_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    puStack_60 = param_1;
    puStack_48 = PTR___ss11_StringGutsVN_1000b12b8;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    puStack_60 = (undefined *)ppuVar2;
    puStack_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_10001e4f0(&puStack_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_10001e3c0(&puStack_60);
  return puVar1;
}



/* Entry: 10001e3c0; end: 10001e3df;  */

void FUN_10001e3c0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(*param_1);
  return;
}



/* Entry: 10001e3e0; end: 10001e4ef;  */

void FUN_10001e3e0(ulong *param_1,ulong param_2,long param_3,char param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if ((param_5 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_5,param_6);
        if (param_5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e4f0);
          (*pcVar1)();
        }
      }
      else {
        param_5 = (param_6 & 0xfffffffffffffff) + 0x20;
      }
      *param_1 = param_5;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != 0)) &&
          (uVar2 = param_6 >> 0x38 & 0xf, uVar2 < param_3 - param_2)) {
    uStack_38 = param_6 & 0xffffffffffffff;
    uStack_40 = param_5;
    _memcpy(param_2,&uStack_40,uVar2);
    *(undefined1 *)(param_2 + uVar2) = 0;
    *param_1 = param_2;
    return;
  }
  func_0x00010001e52c(param_5);
  *param_1 = param_6;
  return;
}



/* Entry: 10001e4f0; end: 10001e58f;  */

long FUN_10001e4f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10001e590; end: 10001e7b3;  */

undefined * FUN_10001e590(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffff);
    puVar5 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar4;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar5;
    }
    puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
    if (puVar2 != (undefined *)0x0) {
      FUN_10001e7b4(puVar2,0);
      puVar3 = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1);
          if ((long)puVar4 < (long)param_2) goto LAB_10001e6c0;
        }
        else {
          param_1 = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar4;
          if (SBORROW8((long)puVar4,(long)puVar4)) {
LAB_10001e6c0:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e6c4);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,param_1,param_2);
        if (param_2 != puVar4) {
LAB_10001e62c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e630);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        puStack_50 = param_1;
        _memcpy(puVar2 + 0x20,&puStack_50,puVar5);
      }
    }
  }
  else {
    puVar2 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
    puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      FUN_10001e7b4();
      puVar4 = puVar3 + 0x20;
      puVar5 = puVar2;
      __ss11_StringGutsV16_foreignCopyUTF84intoSiSgSrys5UInt8VG_tF(puVar4,puVar2,param_1,param_2);
      if (((uint)puVar5 & 0xff) == 1) goto LAB_10001e6c0;
      if (puVar4 != puVar2) goto LAB_10001e62c;
    }
  }
  return puVar3;
}



/* Entry: 10001e7b4; end: 10001e823;  */

undefined * FUN_10001e7b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x1000c4ae0;
    func_0x0001000100d0(0x1000c4ae0,&UNK_100089898);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 10001e824; end: 10001e913;  */

undefined * FUN_10001e824(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001e914);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x1000c4ae0;
    func_0x0001000100d0(0x1000c4ae0,&UNK_100089898);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10001e914; end: 10001e917;  */

void FUN_10001e914(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c4ae8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4af0;
  func_0x000100010120(0x1000c4af0,&UNK_1000898a0);
  uVar2 = uVar1;
  FUN_10001bd2c();
  uVar3 = 0x1000c4aa8;
  func_0x00010001e070(0x1000c4aa8,FUN_100020cfc,&UNK_100089ae4);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c4ae8 = puVar4;
  return;
}



/* Entry: 10001e918; end: 10001e9ef;  */

void FUN_10001e918(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c4ae8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4af0;
  func_0x000100010120(0x1000c4af0,&UNK_1000898a0);
  uVar2 = uVar1;
  FUN_10001bd2c();
  uVar3 = 0x1000c4aa8;
  func_0x00010001e070(0x1000c4aa8,FUN_100020cfc,&UNK_100089ae4);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c4ae8 = puVar4;
  return;
}



/* Entry: 10001e9f0; end: 10001ea93;  */

long * FUN_10001e9f0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = *puVar2;
    uVar4 = *(undefined1 *)(puVar2 + 1);
    func_0x00010001b1ac(uVar7,uVar4);
    *puVar1 = uVar7;
    *(undefined1 *)(puVar1 + 1) = uVar4;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10001ea94; end: 10001eadf;  */

void FUN_10001ea94(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x14));
  cVar2 = *(char *)(puVar1 + 1);
  if (cVar2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000b15a8)(*puVar1);
    return;
  }
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000b10c0)();
    return;
  }
  return;
}



/* Entry: 10001eae0; end: 10001ecbf;  */

long FUN_10001eae0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  uVar3 = *(undefined1 *)(puVar2 + 1);
  func_0x00010001b1ac(uVar5,uVar3);
  *puVar1 = uVar5;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  return param_1;
}



/* Entry: 10001ecc0; end: 10001eccb;  */

void FUN_10001ecc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10001eccc; end: 10001ed47;  */

ulong FUN_10001eccc(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010001ed1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  uVar1 = 0;
  if (2 < uVar3) {
    uVar1 = (uVar3 ^ 0xff) + 1;
  }
  return (ulong)uVar1;
}



/* Entry: 10001ed48; end: 10001ed53;  */

void FUN_10001ed48(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10001ed54; end: 10001edcf;  */

void FUN_10001ed54(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010001edac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14) + 8) = -(char)param_2;
  return;
}



/* Entry: 10001edd0; end: 10001ee07;  */

void FUN_10001edd0(undefined8 param_1)

{
  if (lRam00000001000c4b50 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f64c);
  return;
}



/* Entry: 10001ee08; end: 10001ee77;  */

void FUN_10001ee08(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_1000898d0;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}


