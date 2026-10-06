/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0004b29c; end: 0004b33f;  */

long FUN_0004b29c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0004b340; end: 0004b44f;  */

undefined1 * FUN_0004b340(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  param_1[0x38] = param_2[0x38];
  lVar4 = *(long *)(param_2 + 0x40);
  _swift_retain();
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(uVar1);
  _swift_retain(uVar6);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar4;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar4;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    _swift_retain();
  }
  lVar4 = *(long *)(param_2 + 0x50);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(long *)(param_1 + 0x50) = lVar4;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(long *)(param_1 + 0x50) = lVar4;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    _swift_retain();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  lVar4 = *(long *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(long *)(param_1 + 0x98) = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  (*pcVar3)(param_1 + 0x80,param_2 + 0x80,lVar4);
  return param_1;
}



/* Entry: 0004b450; end: 0004b5ff;  */

undefined1 * FUN_0004b450(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_retain();
  _swift_release(uVar2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_retain();
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_retain();
  _swift_release(uVar2);
  param_1[0x38] = param_2[0x38];
  lVar1 = *(long *)(param_2 + 0x40);
  if (*(long *)(param_1 + 0x40) == 0) {
    if (lVar1 == 0) goto LAB_0004b548;
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _swift_retain();
  }
  else if (lVar1 == 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x48));
LAB_0004b548:
    lVar1 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _swift_retain();
    _swift_release(uVar3);
  }
  lVar1 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_1 + 0x50) == 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      *(long *)(param_1 + 0x50) = lVar1;
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      _swift_retain();
      goto LAB_0004b5a8;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      *(long *)(param_1 + 0x50) = lVar1;
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      _swift_retain();
      _swift_release(uVar3);
      goto LAB_0004b5a8;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x58));
  }
  lVar1 = *(long *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(long *)(param_1 + 0x50) = lVar1;
LAB_0004b5a8:
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  _swift_retain(uVar2);
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  _swift_retain(uVar2);
  _swift_release(uVar3);
  FUN_0004037c(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



/* Entry: 0004b600; end: 0004b63b;  */

void FUN_0004b600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  return;
}



/* Entry: 0004b63c; end: 0004b797;  */

undefined1 * FUN_0004b63c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_release(uVar1);
  lVar3 = *(long *)(param_2 + 0x40);
  param_1[0x38] = param_2[0x38];
  if (*(long *)(param_1 + 0x40) == 0) {
    if (lVar3 == 0) goto LAB_0004b6f8;
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  else if (lVar3 == 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x48));
LAB_0004b6f8:
    lVar3 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar3;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _swift_release(uVar1);
  }
  lVar3 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_1 + 0x50) == 0) {
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x58);
      *(long *)(param_1 + 0x50) = lVar3;
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      goto LAB_0004b74c;
    }
  }
  else {
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      *(long *)(param_1 + 0x50) = lVar3;
      *(undefined8 *)(param_1 + 0x58) = uVar2;
      _swift_release(uVar1);
      goto LAB_0004b74c;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x58));
  }
  lVar3 = *(long *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(long *)(param_1 + 0x50) = lVar3;
LAB_0004b74c:
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  _swift_release(uVar1);
  FUN_00011670(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  return param_1;
}



/* Entry: 0004b798; end: 0004b85b;  */

int FUN_0004b798(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0004b85c; end: 0004b8f3;  */

void FUN_0004b85c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae7dc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7dc0;
  FUN_00016c74(0xae7dc0,&UNK_007cef98);
  uVar2 = 0xae7dd0;
  FUN_0004b918(0xae7dd0,0xae7db8,&UNK_007cef90,FUN_0004b8f4);
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_009994b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7dc8 = puVar3;
  return;
}



/* Entry: 0004b8f4; end: 0004b917;  */

void FUN_0004b8f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0xae7db0;
  if (puRam0000000000ae7dd8 == (undefined *)0x0) {
    FUN_00016c74(0xae7db0,&UNK_007cef88);
    uVar2 = uVar1;
    FUN_0004b988();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_00999278;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_40 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1
               ,&uStack_40);
    puRam0000000000ae7dd8 = puVar3;
  }
  return;
}



/* Entry: 0004b918; end: 0004b987;  */

void FUN_0004b918(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_00999278;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 0004b988; end: 0004b9d7;  */

void FUN_0004b988(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae7de0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7de8;
  FUN_00016c74(0xae7de8,&UNK_007cf008);
  puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_009996f8;
  _swift_getWitnessTable(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_009996f8,uVar1);
  puRam0000000000ae7de0 = puVar2;
  return;
}



/* Entry: 0004b9d8; end: 0004b9f7;  */

void FUN_0004b9d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 0004b9f8; end: 0004ba5b;  */

void FUN_0004b9f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  lVar2 = *(long *)(lVar3 + 0xa0);
  FUN_0001393c(lVar3 + 0x80,uVar1);
  (**(code **)(lVar2 + 0x30))();
  *param_1 = uVar1;
  param_1[1] = lVar2;
  param_1[2] = 0x4031000000000000;
  param_1[3] = 0x49;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 0004ba5c; end: 0004baf3;  */

undefined8 FUN_0004ba5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae7df8;
  func_0x000115a8(0xae7df8,&UNK_007cf020);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0004baf4; end: 0004bb0b;  */

void FUN_0004baf4(void)

{
  long unaff_x20;
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x60);
  if (pcVar1 != (code *)0x0) {
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000115a8(0xae7d80,&UNK_007cef60);
    __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_60);
    (*pcVar1)(uStack_60,uStack_58);
    _swift_bridgeObjectRelease(uStack_58);
  }
  return;
}



/* Entry: 0004bb0c; end: 0004bb87;  */

void FUN_0004bb0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_00011670(unaff_x20 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0004bb88; end: 0004bc37;  */

void FUN_0004bb88(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x50) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x50))();
  }
  return;
}



/* Entry: 0004bc38; end: 0004bc4b;  */

void FUN_0004bc38(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_00011670(unaff_x20 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0004bc4c; end: 0004be97;  */

void FUN_0004bc4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = 0xae7ed0;
  func_0x000115a8(0xae7ed0,&UNK_007cf300);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  lVar8 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar6 = *(int *)(lVar8 + 0x14);
  uVar5 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar9 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 0x68);
  (*pcVar12)((long)puVar1 + (long)iVar6,uVar5,lVar9);
  *puVar1 = param_2;
  puVar1[1] = param_2;
  puVar10 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  puVar11 = puVar10;
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  lVar7 = 0xae7ed8;
  func_0x000115a8(0xae7ed8,&UNK_007cf308);
  *(undefined **)((long)puVar1 + (long)*(int *)(lVar7 + 0x34)) = puVar11;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38)) = 0x100;
  lVar7 = 0xae7ee0;
  func_0x000115a8(0xae7ee0,&UNK_007cf310);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
  (*pcVar12)((long)puVar2 + (long)*(int *)(lVar8 + 0x14),uVar5,lVar9);
  *puVar2 = param_2;
  puVar2[1] = param_2;
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  __s7SwiftUI11StrokeStyleV9lineWidth0E3Cap0E4Join10miterLimit4dash0K5PhaseAC12CoreGraphics7CGFloatV_So06CGLineG0VSo0pH0VALSayALGALtcfC
            (&uStack_98,0x3ff0000000000000,0x4024000000000000,0,0,0,
             PTR___swiftEmptyArrayStorage_0099b8f0);
  lVar7 = 0xae7ee8;
  func_0x000115a8(0xae7ee8,&UNK_007cf318);
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
  puVar3[1] = uStack_90;
  *puVar3 = uStack_98;
  puVar3[3] = uStack_80;
  puVar3[2] = uStack_88;
  puVar3[4] = uStack_78;
  lVar7 = 0xae7ef0;
  puVar11 = &UNK_007cf320;
  func_0x000115a8();
  *(undefined **)((long)puVar2 + (long)*(int *)(lVar7 + 0x34)) = puVar10;
  *(undefined2 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38)) = 0x100;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar8 = 0xae7ef8;
  puVar10 = &UNK_007cf328;
  func_0x000115a8();
  plVar4 = (long *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
  *plVar4 = lVar7;
  plVar4[1] = (long)puVar11;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar7 = 0xae7f00;
  func_0x000115a8(0xae7f00,&UNK_007cf330);
  plVar4 = (long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
  *plVar4 = lVar8;
  plVar4[1] = (long)puVar10;
  lVar7 = 0xae7f08;
  func_0x000115a8(0xae7f08,&UNK_007cf338);
                    /* WARNING: Could not recover jumptable at 0x0004be94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_3,lVar7);
  return;
}



/* Entry: 0004be98; end: 0004beab;  */

void FUN_0004be98(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar13 = *unaff_x20;
  lVar7 = 0xae7ed0;
  func_0x000115a8(0xae7ed0,&UNK_007cf300);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  lVar8 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar6 = *(int *)(lVar8 + 0x14);
  uVar5 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar9 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 0x68);
  (*pcVar12)((long)puVar1 + (long)iVar6,uVar5,lVar9);
  *puVar1 = uVar13;
  puVar1[1] = uVar13;
  puVar10 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  puVar11 = puVar10;
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  lVar7 = 0xae7ed8;
  func_0x000115a8(0xae7ed8,&UNK_007cf308);
  *(undefined **)((long)puVar1 + (long)*(int *)(lVar7 + 0x34)) = puVar11;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38)) = 0x100;
  lVar7 = 0xae7ee0;
  func_0x000115a8(0xae7ee0,&UNK_007cf310);
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
  (*pcVar12)((long)puVar2 + (long)*(int *)(lVar8 + 0x14),uVar5,lVar9);
  *puVar2 = uVar13;
  puVar2[1] = uVar13;
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  __s7SwiftUI11StrokeStyleV9lineWidth0E3Cap0E4Join10miterLimit4dash0K5PhaseAC12CoreGraphics7CGFloatV_So06CGLineG0VSo0pH0VALSayALGALtcfC
            (&uStack_98,0x3ff0000000000000,0x4024000000000000,0,0,0,
             PTR___swiftEmptyArrayStorage_0099b8f0);
  lVar7 = 0xae7ee8;
  func_0x000115a8(0xae7ee8,&UNK_007cf318);
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x24));
  puVar3[1] = uStack_90;
  *puVar3 = uStack_98;
  puVar3[3] = uStack_80;
  puVar3[2] = uStack_88;
  puVar3[4] = uStack_78;
  lVar7 = 0xae7ef0;
  puVar11 = &UNK_007cf320;
  func_0x000115a8();
  *(undefined **)((long)puVar2 + (long)*(int *)(lVar7 + 0x34)) = puVar10;
  *(undefined2 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x38)) = 0x100;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar8 = 0xae7ef8;
  puVar10 = &UNK_007cf328;
  func_0x000115a8();
  plVar4 = (long *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
  *plVar4 = lVar7;
  plVar4[1] = (long)puVar11;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar7 = 0xae7f00;
  func_0x000115a8(0xae7f00,&UNK_007cf330);
  plVar4 = (long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
  *plVar4 = lVar8;
  plVar4[1] = (long)puVar10;
  lVar7 = 0xae7f08;
  func_0x000115a8(0xae7f08,&UNK_007cf338);
                    /* WARNING: Could not recover jumptable at 0x0004be94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
  return;
}



/* Entry: 0004beac; end: 0004bffb;  */

void FUN_0004beac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  __s7SwiftUI5GlassVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s7SwiftUI5GlassV5clearACvgZ(puVar6);
  lVar2 = 0;
  __s7SwiftUI23DefaultGlassEffectShapeVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s7SwiftUI23DefaultGlassEffectShapeVACycfC(lVar8);
  uVar3 = 0xae7eb8;
  func_0x000115a8(0xae7eb8,&UNK_007cf2f8);
  uVar4 = 0xae7ec0;
  func_0x0004cdb8(0xae7ec0,0xae7eb8,&UNK_007cf2f8,
                  PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_00999478);
  uVar5 = uVar4;
  FUN_0004cc24();
  __s7SwiftUI4ViewPAAE11glassEffect_2inQrAA5GlassV_qd__tAA5ShapeRd__lF
            (param_1,puVar6,lVar8,uVar3,lVar2,uVar4,uVar5);
  (**(code **)(lVar7 + 8))(lVar8,lVar2);
  (**(code **)(lVar9 + 8))(puVar6,lVar1);
  return;
}



/* Entry: 0004bffc; end: 0004c077;  */

void FUN_0004bffc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(undefined8 *)(*(long *)(param_2 + -8) + 0x40),param_1,param_1);
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  return;
}



/* Entry: 0004c078; end: 0004c1ff;  */

void FUN_0004c078(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  __s7SwiftUI19_ConditionalContentV7StorageOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar2,param_2,param_3);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (param_1,puVar2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 0004c200; end: 0004c383;  */

void FUN_0004c200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = *unaff_x20;
  uVar10 = unaff_x20[1];
  uStack_68 = uVar10;
  FUN_00033a8c();
  _swift_bridgeObjectRetain(uVar10);
  puVar3 = &uStack_70;
  puVar6 = PTR___sSSN_0099b040;
  __s7SwiftUI4TextVyACxcSyRzlufC(puVar3,PTR___sSSN_0099b040,param_2);
  bVar1 = *(byte *)(unaff_x20 + 4);
  puVar4 = PTR__OBJC_CLASS___UIFont_00ac3290;
  _objc_opt_self();
  if ((bVar1 & 1) == 0) {
    func_0x00781dc0(unaff_x20[2]);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x4c384);
      (*pcVar2)();
    }
  }
  else {
    func_0x0077fb00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x4c28c);
      (*pcVar2)();
    }
  }
  __s7SwiftUI4FontVyACSo9CTFontRefacfC();
  puVar5 = puVar4;
  puVar7 = puVar3;
  puVar9 = puVar6;
  uVar10 = param_2;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(puVar4);
  FUN_0004c384(puVar3,puVar6,param_2);
  _swift_bridgeObjectRelease(param_5);
  puVar4 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar6 = puVar4;
  puVar8 = puVar5;
  puVar3 = puVar7;
  puVar11 = puVar9;
  __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
  _swift_release(puVar4);
  FUN_0004c384(puVar5,puVar7,puVar9);
  _swift_bridgeObjectRelease(uVar10);
  *param_1 = puVar6;
  param_1[1] = puVar8;
  *(char *)(param_1 + 2) = (char)puVar3;
  param_1[3] = puVar11;
  return;
}



/* Entry: 0004c384; end: 0004c3ab;  */

void FUN_0004c384(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0004c3ac; end: 0004c543;  */

void FUN_0004c3ac(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (*(char *)(unaff_x20 + 8) != '\x01') {
    puVar4 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_opt_self();
    func_0x00791800(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_retain();
      puVar5 = puVar4;
      __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      uStack_58 = 0;
      puStack_60 = puVar5;
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_50,&puStack_60,PTR___s7SwiftUI5ImageVN_00999698,
                 PTR___s7SwiftUI5ImageVN_00999698,PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688,
                 PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688);
      _objc_release(puVar4);
      goto LAB_0004c48c;
    }
  }
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(uVar1);
  __s7SwiftUI5ImageV10systemNameACSS_tcfC(puVar4,uVar1);
  uStack_58 = 1;
  puStack_60 = puVar4;
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (&uStack_50,&puStack_60,PTR___s7SwiftUI5ImageVN_00999698,
             PTR___s7SwiftUI5ImageVN_00999698,PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688,
             PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688);
LAB_0004c48c:
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  puVar4 = PTR__OBJC_CLASS___UIFont_00ac3290;
  _objc_opt_self();
  if ((bVar2 & 1) == 0) {
    func_0x0078b1a0(*(undefined8 *)(unaff_x20 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x4c544);
      (*pcVar3)();
    }
  }
  else {
    func_0x0077fb00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x4c4c0);
      (*pcVar3)();
    }
  }
  __s7SwiftUI4FontVyACSo9CTFontRefacfC();
  puVar5 = &UNK_007cf0c8;
  _swift_getKeyPath();
  puVar6 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar7 = &UNK_007cf0f8;
  _swift_getKeyPath();
  *param_1 = uStack_50;
  *(undefined1 *)(param_1 + 1) = uStack_48;
  param_1[2] = puVar5;
  param_1[3] = puVar4;
  param_1[4] = puVar7;
  param_1[5] = puVar6;
  return;
}



/* Entry: 0004c544; end: 0004c553;  */

void FUN_0004c544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 0004c554; end: 0004c5f3;  */

void FUN_0004c554(undefined8 *param_1,undefined8 param_2)

{
  __s7SwiftUI17EnvironmentValuesV4fontAA4FontVSgvg();
  *param_1 = param_2;
  return;
}



/* Entry: 0004c5f4; end: 0004c61b;  */

void FUN_0004c5f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_0083e854,1);
  return;
}



/* Entry: 0004c61c; end: 0004c657;  */

undefined8 * FUN_0004c61c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0004c658; end: 0004c6bb;  */

undefined8 * FUN_0004c658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 0004c6bc; end: 0004c6cf;  */

void FUN_0004c6bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 0004c6d0; end: 0004c71b;  */

undefined8 * FUN_0004c6d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 0004c71c; end: 0004c7b7;  */

int FUN_0004c71c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0004c7b8; end: 0004c7e3;  */

long FUN_0004c7b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0004c7e4; end: 0004c7eb;  */

void FUN_0004c7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0004c7ec; end: 0004c837;  */

undefined8 * FUN_0004c7ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0004c838; end: 0004c8ab;  */

undefined8 * FUN_0004c838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 0004c8ac; end: 0004c8c7;  */

void FUN_0004c8ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 0004c8c8; end: 0004c923;  */

undefined8 * FUN_0004c8c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 0004c924; end: 0004c9db;  */

int FUN_0004c924(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0004c9dc; end: 0004cb7b;  */

void FUN_0004c9dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae7e58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7e60;
  FUN_00016c74(0xae7e60,&UNK_007cf1e0);
  uVar2 = uVar1;
  func_0x0004ca74();
  uVar3 = 0xae7ea8;
  func_0x0004cdb8(0xae7ea8,0xae7eb0,&UNK_007cf208,
                  PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_009994e0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7e58 = puVar4;
  return;
}



/* Entry: 0004cb7c; end: 0004cbe3;  */

void FUN_0004cb7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000000ae7e88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7e90;
  FUN_00016c74(0xae7e90,&UNK_007cf1f8);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688;
  puStack_18 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_00999688;
  puVar2 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460,uVar1,
             &puStack_20);
  puRam0000000000ae7e88 = puVar2;
  return;
}



/* Entry: 0004cbe4; end: 0004cc23;  */

undefined1  [16] FUN_0004cbe4(void)

{
  return ZEXT816(0x99f5b0);
}



/* Entry: 0004cc24; end: 0004cc67;  */

void FUN_0004cc24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae7ec8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7SwiftUI23DefaultGlassEffectShapeVMa(0xff);
  puVar2 = PTR___s7SwiftUI23DefaultGlassEffectShapeVAA0F0AAMc_00999480;
  _swift_getWitnessTable(PTR___s7SwiftUI23DefaultGlassEffectShapeVAA0F0AAMc_00999480,uVar1);
  puRam0000000000ae7ec8 = puVar2;
  return;
}



/* Entry: 0004cc68; end: 0004ccfb;  */

void FUN_0004cc68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0xae7eb8;
  FUN_00016c74(0xae7eb8,&UNK_007cf2f8);
  uVar2 = 0xff;
  __s7SwiftUI23DefaultGlassEffectShapeVMa();
  uVar3 = 0xae7ec0;
  func_0x0004cdb8(0xae7ec0,0xae7eb8,&UNK_007cf2f8,
                  PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_00999478);
  uVar4 = uVar3;
  FUN_0004cc24();
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  _swift_getOpaqueTypeConformance
            (&uStack_50,
             PTR___s7SwiftUI4ViewPAAE11glassEffect_2inQrAA5GlassV_qd__tAA5ShapeRd__lFQOMQ_009995d0,1
            );
  return;
}



/* Entry: 0004ccfc; end: 0004ccff;  */

void FUN_0004ccfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae7f10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7ed0;
  FUN_00016c74(0xae7ed0,&UNK_007cf300);
  uVar2 = 0xae7f18;
  func_0x0004cdb8(0xae7f18,0xae7f08,&UNK_007cf338,
                  PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_00999478);
  uVar3 = 0xae7f20;
  func_0x0004cdb8(0xae7f20,0xae7f00,&UNK_007cf330,
                  PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_00999430);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7f10 = puVar4;
  return;
}



/* Entry: 0004cd00; end: 0004cdfb;  */

void FUN_0004cd00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae7f10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7ed0;
  FUN_00016c74(0xae7ed0,&UNK_007cf300);
  uVar2 = 0xae7f18;
  func_0x0004cdb8(0xae7f18,0xae7f08,&UNK_007cf338,
                  PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_00999478);
  uVar3 = 0xae7f20;
  func_0x0004cdb8(0xae7f20,0xae7f00,&UNK_007cf330,
                  PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_00999430);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7f10 = puVar4;
  return;
}



/* Entry: 0004cdfc; end: 0004ce33;  */

void FUN_0004cdfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE14_viewListCount6inputs4bodySiSgAA01_cfG6InputsV_AgIXEtFZ_009991b0
  )();
  return;
}



/* Entry: 0004ce34; end: 0004cec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004ce34(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  if (param_1 < 2) {
    param_1 = 1;
  }
  uVar1 = 0xae7f28;
  func_0x000115a8(0xae7f28,&UNK_007cf340);
  _swift_allocObject();
  FUN_000a25a8(param_1,uVar1);
  *(long *)(unaff_x20 + _DAT_00ae7f30) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0004cec8; end: 0004cf53; -[SCNSENativeAckDelegate initWithReplayBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004cec8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  if (param_3 < 2) {
    param_3 = 1;
  }
  func_0x000115a8(0xae7f28,&UNK_007cf340);
  _swift_allocObject();
  FUN_000a25a8();
  *(long *)(param_1 + _DAT_00ae7f30) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0004cf54; end: 0004cf63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __s18SCNSENativeHandler20NSENativeAckDelegateC03getD20CompletionObservable17SwiftSCObservable0H0CyAA0cD5EventCGyF
               (void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(*(undefined8 *)(unaff_x20 + _DAT_00ae7f30));
  return;
}



/* Entry: 0004cf64; end: 0004d24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004cf64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  plVar8 = &lStack_70;
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x43);
  __sSS6appendyySSF(0xd00000000000002a,0x80000000008b5fe0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x7954746e65766520,0xeb000000003d6570);
  uVar5 = 0x6e776f6e6b6e75;
  if (param_3 == 1) {
    uVar5 = 0x6579616c70736964;
  }
  uVar9 = 0xe700000000000000;
  if (param_3 == 1) {
    uVar9 = 0xe900000000000064;
  }
  uVar2 = 0xea00000000006465;
  uVar3 = 0x7373657270707573;
  if (param_3 != 2) {
    uVar2 = uVar9;
    uVar3 = uVar5;
  }
  uVar5 = 0x6465766965636572;
  if (param_3 != 0) {
    uVar5 = uVar3;
  }
  uVar9 = 0xe800000000000000;
  if (param_3 != 0) {
    uVar9 = uVar2;
  }
  __sSS6appendyySSF(uVar5,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  __sSS6appendyySSF(0x3d746c7573657220,0xe800000000000000);
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar9 = 0xe700000000000000;
      uVar5 = 0x73736563637573;
      goto LAB_0004d17c;
    }
    if (param_4 == 1) {
      uVar9 = 0xee00747365757165;
      uVar5 = 0x5264696c61766e69;
      goto LAB_0004d17c;
    }
  }
  else {
    if (param_4 == 2) {
      uVar9 = 0xec000000726f7272;
      uVar5 = 0x456b726f7774656e;
      goto LAB_0004d17c;
    }
    if (param_4 == 3) {
      uVar9 = 0xe700000000000000;
      uVar5 = 0x74756f656d6974;
      goto LAB_0004d17c;
    }
    if (param_4 == 4) {
      uVar9 = 0xe700000000000000;
      uVar5 = 0x64657070696b73;
      goto LAB_0004d17c;
    }
  }
  uVar9 = 0xe700000000000000;
  uVar5 = 0x6e776f6e6b6e75;
LAB_0004d17c:
  __sSS6appendyySSF(uVar5,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  uVar5 = uStack_58;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_60,uStack_58);
  _objc_release();
  _swift_bridgeObjectRelease(uVar5);
  if (param_3 == 0) {
    lVar6 = 0;
    FUN_0004d5e8();
    lVar7 = lVar6;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)
             (lVar7 + ___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined8 *)(lVar7 + _DAT_00ae7f78) = 0;
    *(long *)(lVar7 + 
             ___s18SCNSENativeHandler17NSENativeAckEventC6resultSo016SCNNotificationsD6ResultVvpWvd)
         = param_4;
    puVar4 = PTR_s_init_00abbf70;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    _swift_bridgeObjectRetain(param_2);
    _objc_msgSendSuper2(&lStack_70,puVar4);
    puStack_60 = (undefined1 *)plVar8;
    FUN_000a2344(&puStack_60);
    _objc_release(plVar8);
  }
  return;
}



/* Entry: 0004d250; end: 0004d2c3; -[SCNSENativeAckDelegate onAckComplete:eventType:result:] */

void FUN_0004d250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_0004cf64(param_3,param_2,param_4,param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0004d2c4; end: 0004d323; -[SCNSENativeAckDelegate init] */

void FUN_0004d2c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSENativeHandler.NSENativeAckDelegate",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d2f0);
  (*pcVar1)();
}



/* Entry: 0004d324; end: 0004d363; -[SCNSENativeAckDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00ae7f30));
  return;
}



/* Entry: 0004d364; end: 0004d383;  */

void FUN_0004d364(void)

{
  _objc_opt_self(&PTR_PTR_00ac6ef8);
  return;
}



/* Entry: 0004d384; end: 0004d3ab;  */

void FUN_0004d384(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_0099f6f8;
  if (lRam0000000000ae7f60 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000000ae7f60 = param_1;
  }
  return;
}



/* Entry: 0004d3ac; end: 0004d3ef;  */

void FUN_0004d3ac(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 0004d3f0; end: 0004d3f7;  */

bool FUN_0004d3f0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0004d3f8; end: 0004d47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           (unaff_x20 + ___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae7f78) = param_3;
  *(undefined8 *)
   (unaff_x20 +
   ___s18SCNSENativeHandler17NSENativeAckEventC6resultSo016SCNNotificationsD6ResultVvpWvd) = param_4
  ;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0004d47c; end: 0004d4c7; -[SCNSENativeAckEvent notificationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d47c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)
           (param_1 + ___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd);
  uVar1 = ((undefined8 *)
          (param_1 + ___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0004d4c8; end: 0004d4d7; -[SCNSENativeAckEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0004d4c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae7f78);
}



/* Entry: 0004d4d8; end: 0004d4e7; -[SCNSENativeAckEvent result] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0004d4d8(long param_1)

{
  return *(undefined8 *)
          (param_1 +
          ___s18SCNSENativeHandler17NSENativeAckEventC6resultSo016SCNNotificationsD6ResultVvpWvd);
}



/* Entry: 0004d4e8; end: 0004d573; -[SCNSENativeAckEvent initWithNotificationId:eventType:result:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d4e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)
           (param_1 + ___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00ae7f78) = param_4;
  *(undefined8 *)
   (param_1 + ___s18SCNSENativeHandler17NSENativeAckEventC6resultSo016SCNNotificationsD6ResultVvpWvd
   ) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0004d574; end: 0004d5d3; -[SCNSENativeAckEvent init] */

void FUN_0004d574(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSENativeHandler.NSENativeAckEvent",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4d5a0);
  (*pcVar1)();
}



/* Entry: 0004d5d4; end: 0004d5e7; -[SCNSENativeAckEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)
            (*(undefined8 *)
              (param_1 + ___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd + 8));
  return;
}



/* Entry: 0004d5e8; end: 0004d607;  */

void FUN_0004d5e8(void)

{
  _objc_opt_self(&PTR_PTR_00ac6fb8);
  return;
}



/* Entry: 0004d608; end: 0004d617; -[SCNSENativeAnnouncer getNotificationReadyObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae7fb0));
  return;
}



/* Entry: 0004d618; end: 0004d69f; -[SCNSENativeAnnouncer onNotificationReady:platformData:groupingResult:] */

void FUN_0004d618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x0004dbd0(param_3,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0004d6a0; end: 0004d7bb; -[SCNSENativeAnnouncer onNotificationDiscarded:notification:reason:platformData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = 3;
  if (param_5 != 0) {
    uVar2 = 0;
  }
  uVar7 = *(undefined8 *)(param_1 + _DAT_00ae7fb0);
  lVar4 = 0;
  FUN_00050f18();
  lVar5 = lVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar5 + _DAT_00ae8058);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_00ae8060) = uVar2;
  puVar3 = PTR_s_init_00abbf70;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  func_0x00789920(uVar7);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(plVar6);
  return;
}



/* Entry: 0004d7bc; end: 0004d82b; -[SCNSENativeAnnouncer onNotificationError:reason:platformData:] */

void FUN_0004d7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  func_0x0004dfb4(param_3,param_4);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0004d82c; end: 0004d88f; -[SCNSENativeAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d82c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_00ae7fb0;
  puVar3 = PTR_PTR_00ac34a8;
  _objc_allocWithZone();
  func_0x007849a0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0004d890; end: 0004d8c3;  */

void FUN_0004d890(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0004d8c4; end: 0004d8d3; -[SCNSENativeAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004d8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae7fb0));
  return;
}



/* Entry: 0004d8d4; end: 0004da87;  */

ulong FUN_0004d8d4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x4d9b8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x4d9bc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_00ac2eb0;
    _objc_opt_self(PTR_PTR_00ac2eb0);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_00ac2eb0;
    _objc_opt_self(PTR_PTR_00ac2eb0);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0004e374(0);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x4da88);
  (*pcVar2)();
}



/* Entry: 0004da88; end: 0004e353;  */

undefined8 FUN_0004da88(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar4 = uVar6;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar5 = 0;
  while( true ) {
    if (uVar4 == uVar5) {
      uVar5 = 0;
      while( true ) {
        if (uVar4 == uVar5) {
          return 1;
        }
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x4dbbc);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar2 = uVar5;
          FUN_0004d8d4(uVar5,param_1);
        }
        if (SCARRY8(uVar5,1)) break;
        uVar3 = uVar2;
        func_0x00792f20();
        _objc_release(uVar2);
        uVar5 = uVar5 + 1;
        if (uVar3 == 0) {
          return 2;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x4db94);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x4dbb8);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar2 = uVar5;
      FUN_0004d8d4(uVar5,param_1);
    }
    if (SCARRY8(uVar5,1)) break;
    uVar3 = uVar2;
    func_0x00792f20();
    _objc_release(uVar2);
    uVar5 = uVar5 + 1;
    if (uVar3 == 1) {
      return 8;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4db28);
  (*pcVar1)();
}



/* Entry: 0004e354; end: 0004e3b7;  */

void FUN_0004e354(void)

{
  _objc_opt_self(&_OBJC_CLASS___SCNSENativeAnnouncer);
  return;
}



/* Entry: 0004e3b8; end: 0004f3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0004e3b8(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,long param_6,ulong param_7,undefined4 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long alStack_d0 [2];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_90 [48];
  
  puStack_110 = (undefined *)CONCAT44(puStack_110._4_4_,param_8);
  lVar8 = 0xae6dd0;
  puVar2 = &UNK_007ce690;
  puStack_108 = param_1;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar12 = (long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar12 - extraout_x12;
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = unaff_x20;
  _objc_allocWithZone();
  lStack_f8 = lVar8;
  if (param_6 == 0) {
    puStack_100 = (undefined *)0x0;
    if ((param_7 & 1) == 0) goto LAB_0004e590;
LAB_0004e510:
    puVar15 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
    _objc_opt_self();
    func_0x00793380();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 == (undefined *)0x0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar2);
    }
    puVar2 = PTR_PTR_00ac2ea0;
    _objc_allocWithZone(PTR_PTR_00ac2ea0);
    func_0x00786d00();
    _objc_release(puVar15);
  }
  else {
    puVar15 = PTR_PTR_00ac2f08;
    _objc_allocWithZone();
    puVar2 = (undefined *)0x0;
    FUN_00050b14(0,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
    puVar3 = puVar2;
    FUN_000505e0();
    lVar8 = param_6;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_6,puVar2,PTR___sSSN_0099b040,puVar3);
    func_0x00786ae0();
    puStack_100 = puVar15;
    _swift_bridgeObjectRelease(param_6);
    _objc_release(lVar8);
    if ((param_7 & 1) != 0) goto LAB_0004e510;
LAB_0004e590:
    puVar2 = (undefined *)0x0;
  }
  (**(code **)(lVar14 + 0x68))
            (lVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88
             ,lVar1);
  puVar15 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar4 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b6070);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar15);
  _objc_release(uVar4);
  (**(code **)(lVar14 + 8))(lVar11,lVar1);
  puVar3 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone();
  func_0x00786460();
  _objc_release(puVar15);
  if (param_5 == 0) {
    puVar15 = (undefined *)0x0;
    if (param_2 == 0) goto LAB_0004e698;
LAB_0004e660:
    puVar5 = puStack_108;
    _swift_bridgeObjectRetain(param_2);
    puVar6 = puVar5;
    uVar10 = param_2;
    FUN_000533f8(puVar5);
    if (uVar10 >> 0x3c < 0xf) {
      puVar7 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
      puStack_110 = puVar3;
      puStack_108 = puVar15;
      _objc_opt_self();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar5,param_2);
      func_0x007817c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar7 != (undefined *)0x0) {
        __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar12,puVar7);
        _objc_release(puVar7);
      }
      lVar8 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar12,puVar7 == (undefined *)0x0,1,lVar8);
      lVar1 = 0x62645f6669746f6e;
      lVar8 = lVar12;
      FUN_00050408(lVar12,0x62645f6669746f6e,0xef6574696c71732e);
      FUN_00050588(lVar12,0xae6dd0,&UNK_007ce690);
      if (lVar1 == 0) {
        FUN_00023344(puVar6,uVar10);
        _swift_bridgeObjectRelease(param_2);
        _objc_release(puStack_110);
        _objc_release(puStack_100);
        puVar15 = puStack_108;
      }
      else {
        puVar15 = PTR_PTR_00ac3698;
        _objc_allocWithZone(PTR_PTR_00ac3698);
        func_0x00023304(puVar6,uVar10);
        puVar3 = puVar6;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,uVar10);
        func_0x00785860(puVar15);
        _objc_release(puVar3);
        FUN_00023344(puVar6,uVar10);
        puVar7 = PTR_PTR_00ac2ee0;
        _objc_allocWithZone(PTR_PTR_00ac2ee0);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar8,lVar1);
        _swift_bridgeObjectRelease(lVar1);
        puVar3 = puStack_100;
        func_0x00786d60(puVar7);
        _objc_release(puVar15);
        _objc_release(lVar8);
        puVar5 = PTR_PTR_00ac2ed0;
        _objc_opt_self();
        puVar15 = puStack_110;
        func_0x007810e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          lVar8 = 0;
          FUN_00050b14(0,0xae8008,&PTR_PTR_00ac2ed0);
          ppuStack_a0 = &PTR_DAT_0099f758;
          puStack_c0 = puVar5;
          lStack_a8 = lVar8;
          _swift_bridgeObjectRelease(param_2);
          _objc_release(puVar15);
          _objc_release(puVar3);
          _objc_release(puVar2);
          FUN_00023344(puVar6,uVar10);
          puVar5 = puStack_108;
          puVar2 = puVar7;
LAB_0004ea50:
          _objc_release(puVar5);
          _objc_release(puVar2);
          if (lVar8 != 0) {
            FUN_000505c8(&puStack_c0,auStack_90);
            FUN_000505c8(auStack_90,lStack_f8 + _DAT_00ae7ff8);
            alStack_d0[0] = lStack_f8;
            plVar9 = alStack_d0;
            _objc_msgSendSuper2(plVar9,PTR_s_init_00abbf70);
            _objc_release(param_3);
            _objc_release(param_5);
            _objc_release(param_4);
            return plVar9;
          }
          goto LAB_0004eb60;
        }
        _swift_bridgeObjectRelease(param_2);
        _objc_release(puVar15);
        _objc_release(puVar3);
        _objc_release(puVar2);
        FUN_00023344(puVar6,uVar10);
        puVar2 = puVar7;
        puVar15 = puStack_108;
      }
    }
    else {
      _swift_bridgeObjectRelease(param_2);
LAB_0004e888:
      _objc_release(puVar3);
      _objc_release(puStack_100);
    }
  }
  else {
    puVar15 = PTR__OBJC_CLASS___SCNativeGrapheneExtensionLoggerDelegate_00ac28c0;
    _objc_allocWithZone();
    func_0x00785780();
    if (param_2 != 0) goto LAB_0004e660;
LAB_0004e698:
    puVar5 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
    _objc_opt_self();
    func_0x007817a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar13);
      _objc_release(puVar5);
    }
    lVar8 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar13,puVar5 == (undefined *)0x0,1,lVar8);
    lVar1 = 0x62645f6669746f6e;
    lVar8 = lVar13;
    FUN_00050408(lVar13,0x62645f6669746f6e,0xef6574696c71732e);
    FUN_00050588(lVar13,0xae6dd0,&UNK_007ce690);
    if (lVar1 == 0) goto LAB_0004e888;
    puVar6 = PTR_PTR_00ac2ee8;
    _objc_allocWithZone(PTR_PTR_00ac2ee8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar8,lVar1);
    _swift_bridgeObjectRelease(lVar1);
    puVar5 = puStack_100;
    func_0x007852a0(puVar6);
    _objc_release(lVar8);
    puVar7 = PTR_PTR_00ac2ed8;
    _objc_opt_self();
    func_0x007810c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      lVar8 = 0;
      FUN_00050b14(0,0xae8000,&PTR_PTR_00ac2ed8);
      ppuStack_a0 = &PTR_DAT_0099f780;
      puStack_c0 = puVar7;
      lStack_a8 = lVar8;
      _objc_release(puVar15);
      _objc_release(puVar6);
      _objc_release(puVar3);
      goto LAB_0004ea50;
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  ppuStack_a0 = (undefined **)0x0;
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  _objc_release(puVar15);
LAB_0004eb60:
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  FUN_00050588(&puStack_c0,0xae7ff0,&UNK_007cf478);
  _swift_deallocPartialClassInstance(lStack_f8,unaff_x20,0x30,7);
  return (long *)0x0;
}



/* Entry: 0004f3ec; end: 0004f78f; -[SCNSENativeHandler initWithUserId:announcer:ackDelegate:grapheneLogger:nativeConfigDict:nativeAckEnabled:nativeSuppressAckingEnabled:] */

void FUN_0004f3ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                 undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  if (param_7 != 0) {
    uVar1 = 0;
    FUN_00050b14(0,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
    uVar2 = uVar1;
    FUN_000505e0();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_7,uVar1,PTR___sSSN_0099b040,uVar2);
  }
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x0004ebc4(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 0004f790; end: 0004f857; -[SCNSENativeHandler notificationReceiveWithRequest:appIsForeground:] */

void FUN_0004f790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0004f4e4(param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0004f858; end: 0004fa63; -[SCNSENativeHandler notificationDisplayedWithNotificationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004f858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar4 = PTR_PTR_00ac2ec8;
  _objc_allocWithZone(PTR_PTR_00ac2ec8);
  _objc_retain();
  func_0x00784bc0(puVar4);
  lVar1 = param_1 + _DAT_00ae7ff8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_0001393c(lVar1,uVar2);
  pcVar6 = *(code **)(lVar3 + 0x10);
  puVar5 = puVar4;
  _objc_retain(puVar4);
  (*pcVar6)(param_3,param_2,puVar4,uVar2,lVar3);
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0004fa64; end: 0004fac3; -[SCNSENativeHandler notificationSuppressedWithNotificationId:suppressionReason:] */

void FUN_0004fa64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  func_0x0004f934(param_3,param_2,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0004fac4; end: 0004fb2b; -[SCNSENativeHandler dispose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004fac4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_00ae7ff8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_0001393c(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x20);
  _objc_retain(param_1);
  (*pcVar4)(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0004fb2c; end: 0004fb8b; -[SCNSENativeHandler init] */

void FUN_0004fb2c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSENativeHandler.NSENativeHandler",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4fb58);
  (*pcVar1)();
}



/* Entry: 0004fb8c; end: 0004fbab; -[SCNSENativeHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004fb8c(long param_1)

{
  FUN_00050af4(param_1 + _DAT_00ae7ff8);
  return;
}



/* Entry: 0004fbac; end: 0004fdb7;  */

undefined * FUN_0004fbac(undefined *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *unaff_x21;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lStack_130;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [40];
  undefined auStack_80 [8];
  undefined *puStack_78;
  undefined *apuStack_70 [2];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar13 = uVar12 * 8;
  uStack_50 = param_2;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    iVar4 = 2;
    param_4 = (code *)0x0;
    FUN_0040c9a8(2,0xf,4);
    _swift_retain(param_1);
    if ((iVar4 == 0) ||
       (uVar11 = uVar13, _swift_stdlib_isStackAllocationSafe(uVar13,8), (uVar11 & 1) == 0)) {
      _swift_slowAlloc(uVar13,0xffffffffffffffff);
      _swift_retain(param_1);
      param_4 = FUN_00050698;
      FUN_00050174(apuStack_70,uVar13,uVar12,param_1,FUN_00050698,auStack_60,&puStack_78);
      puVar5 = apuStack_70[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_78;
      }
      uVar12 = 0xffffffffffffffff;
      puVar8 = (undefined *)0xffffffffffffffff;
      _swift_slowDealloc(uVar13);
      puVar1 = puVar5;
      goto joined_r0x0004fd70;
    }
  }
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar5 = auStack_80 + -(uVar13 + 0xf & 0x3ffffffffffffff0);
  _bzero(puVar5,uVar13);
  puVar8 = param_1;
  FUN_0005080c();
  puVar1 = unaff_x21;
joined_r0x0004fd70:
  if (unaff_x21 == (undefined *)0x0) {
    _swift_release();
  }
  else {
    iVar4 = 2;
    uVar12 = 0x12;
    puVar8 = (undefined *)0x0;
    param_4 = (code *)0x0;
    FUN_0040c9a8();
    if (iVar4 != 0) {
      uVar12 = 0xae60d0;
      func_0x000115a8(0xae60d0,&UNK_007ccdd0);
      puVar8 = PTR___ss5ErrorWS_0099b720;
      _swift_willThrowTypedImpl(&puStack_78);
    }
    _swift_release();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  lStack_130 = 0;
  uVar11 = 1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((puVar8[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(puVar8 + 0x40);
  lVar10 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar14 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4ff38);
          (*pcVar2)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar14) {
          FUN_0004ff38(param_1,uVar12,lStack_130,puVar8);
          return param_1;
        }
        uVar13 = *(ulong *)((long)(puVar8 + 0x40) + lVar14 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar13 == 0);
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9);
    uVar15 = uVar9 | lVar14 << 6;
    func_0x00032ddc(*(long *)(puVar8 + 0x30) + uVar15 * 0x28,auStack_108);
    FUN_000232c8(*(long *)(puVar8 + 0x38) + uVar15 * 0x20,auStack_128);
    puVar6 = auStack_108;
    (*param_4)(puVar6,auStack_128);
    FUN_00050af4(auStack_128);
    puVar7 = auStack_108;
    func_0x00032e18(puVar7);
    if (unaff_x21 != (undefined *)0x0) {
      return puVar7;
    }
    lVar10 = lVar14;
    if (((ulong)puVar6 & 1) != 0) {
      uVar15 = (uVar9 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
      *(ulong *)(param_1 + uVar15) = *(ulong *)(param_1 + uVar15) | 1L << (uVar9 & 0x3f);
      bVar3 = SCARRY8(lStack_130,1);
      lStack_130 = lStack_130 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x4ff00);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 0004fdb8; end: 0004ff37;  */

void FUN_0004fdb8(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  lStack_b0 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_3 + 0x40);
  lVar5 = 0;
  do {
    if (uVar8 == 0) {
      do {
        lVar7 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x4ff38);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar7) {
          FUN_0004ff38(param_1,param_2,lStack_b0,param_3);
          return;
        }
        uVar8 = ((ulong *)(param_3 + 0x40))[lVar7];
        lVar5 = lVar5 + 1;
      } while (uVar8 == 0);
      uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
    }
    else {
      uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar7 = lVar5;
    }
    uVar4 = LZCOUNT(uVar4);
    uVar9 = uVar4 | lVar7 << 6;
    func_0x00032ddc(*(long *)(param_3 + 0x30) + uVar9 * 0x28,auStack_88);
    FUN_000232c8(*(long *)(param_3 + 0x38) + uVar9 * 0x20,auStack_a8);
    puVar3 = auStack_88;
    (*param_4)(puVar3,auStack_a8);
    FUN_00050af4(auStack_a8);
    func_0x00032e18(auStack_88);
    if (unaff_x21 != 0) {
      return;
    }
    lVar5 = lVar7;
    if (((ulong)puVar3 & 1) != 0) {
      uVar9 = (uVar4 & 0xffffffffffffffc0 | lVar7 << 6) >> 3;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar4 & 0x3f);
      bVar2 = SCARRY8(lStack_b0,1);
      lStack_b0 = lStack_b0 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x4ff00);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 0004ff38; end: 00050173;  */

undefined * FUN_0004ff38(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar3 = param_4;
    }
    else {
      func_0x000115a8(0xae6ef8,&UNK_007ce1c0);
      puVar3 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = *param_1;
      }
      lVar6 = 0;
      do {
        if (uVar11 == 0) {
          do {
            lVar10 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x5016c);
              (*pcVar1)();
            }
            if (param_2 <= lVar10) {
              return puVar3;
            }
            uVar11 = param_1[lVar10];
            lVar6 = lVar6 + 1;
          } while (uVar11 == 0);
          uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar11 = uVar11 - 1 & uVar11;
        }
        else {
          uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar11 = uVar11 - 1 & uVar11;
          lVar10 = lVar6;
        }
        uVar5 = LZCOUNT(uVar5) | lVar10 << 6;
        lVar6 = *(long *)(param_4 + 0x38);
        func_0x00032ddc(*(long *)(param_4 + 0x30) + uVar5 * 0x28,&uStack_88);
        FUN_000232c8(lVar6 + uVar5 * 0x20,auStack_a8);
        uVar4 = *(ulong *)(puVar3 + 0x28);
        __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
        uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = uVar4 >> 6;
        uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff)
        ;
        if (uVar5 == 0) {
          bVar2 = false;
          uVar5 = 0x3f - uVar9 >> 6;
          do {
            uVar4 = uVar7 + 1;
            if ((uVar4 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x50170);
              (*pcVar1)();
            }
            uVar7 = 0;
            if (uVar4 != uVar5) {
              uVar7 = uVar4;
            }
            bVar2 = (bool)(uVar4 == uVar5 | bVar2);
          } while (*(ulong *)(puVar3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
          uVar5 = ~*(ulong *)(puVar3 + uVar7 * 8 + 0x40);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
        }
        else {
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar3 + uVar7 + 0x40)
        ;
        puVar8 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar5 * 0x28);
        puVar8[4] = uStack_68;
        puVar8[1] = uStack_80;
        *puVar8 = uStack_88;
        puVar8[3] = uStack_70;
        puVar8[2] = uStack_78;
        FUN_000252c8(auStack_a8,*(long *)(puVar3 + 0x38) + uVar5 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        bVar2 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x50174);
          (*pcVar1)();
        }
        lVar6 = lVar10;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar3;
}



/* Entry: 00050174; end: 0005023f;  */

void FUN_00050174(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x50240);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    FUN_0004fdb8(param_2,param_3,param_4,param_5,param_6);
    _swift_release(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      _swift_release(param_4);
    }
    else {
      *param_7 = unaff_x21;
      _swift_release(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5023c);
  (*pcVar1)();
}



/* Entry: 00050240; end: 00050407;  */

undefined1  [16] FUN_00050240(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_opt_self();
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  __s10Foundation3URLV4pathSSvg();
  puVar2 = puVar4;
  puVar6 = param_2;
  __sSS5countSivg();
  if ((long)puVar2 < 1) {
    _objc_release(puVar1);
    puVar4 = puVar1;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
      auVar16._8_8_ = puVar6;
      auVar16._0_8_ = param_2;
      return auVar16;
    }
  }
  else {
    puVar2 = puVar4;
    puVar6 = param_2;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar4,param_2);
    puVar3 = puVar1;
    param_3 = puVar2;
    func_0x007833a0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar6 = param_2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar4,param_2);
      _swift_bridgeObjectRelease(param_2);
      puVar2 = puVar1;
      param_3 = puVar4;
      func_0x00781120();
      _objc_release(puVar4);
      puVar4 = (undefined *)0x0;
      if ((int)puVar2 == 0) {
        puVar2 = puVar4;
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(puVar2);
        _swift_willThrow();
        _objc_release(puVar1);
        _swift_errorRelease(puVar4);
      }
      else {
        _objc_retain();
        _objc_release(puVar1);
        puVar4 = puVar1;
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
        auVar13._8_8_ = puVar6;
        auVar13._0_8_ = puVar4;
        return auVar13;
      }
    }
    else {
      _swift_bridgeObjectRelease(param_2);
      puVar4 = param_2;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_0099ada0)(puVar1);
        auVar15._8_8_ = puVar6;
        auVar15._0_8_ = puVar1;
        return auVar15;
      }
    }
  }
  ___stack_chk_fail();
  lVar7 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffff50 + -extraout_x8;
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar8 - extraout_x12;
  FUN_0002f2dc(puVar4,puVar9);
  puVar5 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,lVar7);
  if ((int)puVar5 == 1) {
    FUN_00050588(puVar9,0xae6dd0,&UNK_007ce690);
    puVar6 = (undefined *)0x0;
    param_3 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar11,puVar9,lVar7);
    FUN_00050240(lVar11);
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar8,puVar6,param_3);
    __s10Foundation3URLV4pathSSvg();
    pcVar10 = *(code **)(lVar12 + 8);
    (*pcVar10)(lVar8,lVar7);
    (*pcVar10)(lVar11,lVar7);
  }
  auVar14._8_8_ = param_3;
  auVar14._0_8_ = puVar6;
  return auVar14;
}



/* Entry: 00050408; end: 00050587;  */

undefined1  [16] FUN_00050408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar3 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar3 - extraout_x12;
  FUN_0002f2dc(param_1,puVar4);
  puVar2 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_00050588(puVar4,0xae6dd0,&UNK_007ce690);
    param_2 = 0;
    param_3 = 0;
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar4,lVar1);
    FUN_00050240(lVar6);
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar3,param_2,param_3);
    __s10Foundation3URLV4pathSSvg();
    pcVar5 = *(code **)(lVar7 + 8);
    (*pcVar5)(lVar3,lVar1);
    (*pcVar5)(lVar6,lVar1);
  }
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = param_2;
  return auVar8;
}



/* Entry: 00050588; end: 000505c7;  */

undefined8 FUN_00050588(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000505c8; end: 000505df;  */

undefined8 * FUN_000505c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000505e0; end: 00050633;  */

void FUN_000505e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae8018 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_00050b14(0xff,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_0099bdc0;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_0099bdc0,uVar1);
  puRam0000000000ae8018 = puVar2;
  return;
}



/* Entry: 00050634; end: 00050677;  */

long FUN_00050634(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 00050678; end: 00050697;  */

void FUN_00050678(void)

{
  _objc_opt_self(&_OBJC_CLASS___SCNSENativeHandler);
  return;
}



/* Entry: 00050698; end: 0005069f;  */

undefined1 * FUN_00050698(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  
  __ss11AnyHashableV10FoundationE19_bridgeToObjectiveCSo8NSObjectCyF
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_self(PTR__OBJC_CLASS___NSString_00ac2988);
  lVar6 = param_1;
  _swift_dynamicCastObjCClass(param_1,puVar5);
  _objc_release(param_1);
  if (lVar6 == 0) {
    return (undefined1 *)0x0;
  }
  iVar1 = (int)&uStack_50;
  iVar2 = (int)&uStack_50;
  iVar3 = (int)&uStack_50;
  iVar4 = (int)&uStack_50;
  puVar8 = &uStack_50;
  FUN_000232c8(param_2,auStack_40);
  puVar5 = PTR___sypN_0099b8d8;
  _swift_dynamicCast(&uStack_50,auStack_40,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
  if (iVar1 == 0) {
    FUN_000232c8(param_2,auStack_40);
    uVar7 = 0;
    FUN_00050b14(0,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
    _swift_dynamicCast(&uStack_50,auStack_40,puVar5 + 8,uVar7,6);
    if (iVar2 == 0) {
      FUN_000232c8(param_2,auStack_40);
      uVar7 = 0;
      FUN_00050b14(0,0xae7060,&PTR__OBJC_CLASS___NSArray_00ac2c28);
      _swift_dynamicCast(&uStack_50,auStack_40,puVar5 + 8,uVar7,6);
      if (iVar3 == 0) {
        FUN_000232c8(param_2,auStack_40);
        uVar7 = 0;
        FUN_00050b14(0,0xae8048,&PTR__OBJC_CLASS___NSDictionary_00ac29e8);
        _swift_dynamicCast(&uStack_50,auStack_40,puVar5 + 8,uVar7,6);
        if (iVar4 == 0) {
          FUN_000232c8(param_2,auStack_40);
          uVar7 = 0;
          FUN_00050b14(0,0xae8050,&PTR__OBJC_CLASS___NSNull_00ac2f90);
          _swift_dynamicCast(&uStack_50,auStack_40,puVar5 + 8,uVar7,6);
          if ((int)puVar8 == 0) {
            return (undefined1 *)puVar8;
          }
        }
      }
    }
    _objc_release(uStack_50);
  }
  else {
    _swift_bridgeObjectRelease(uStack_48);
  }
  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 000506a0; end: 0005080b;  */

void FUN_000506a0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (int)&uStack_50;
  iVar3 = (int)&uStack_50;
  iVar4 = (int)&uStack_50;
  iVar5 = (int)&uStack_50;
  iVar6 = (int)&uStack_50;
  FUN_000232c8(param_1,auStack_40);
  puVar1 = PTR___sypN_0099b8d8;
  _swift_dynamicCast(&uStack_50,auStack_40,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
  if (iVar2 == 0) {
    FUN_000232c8(param_1,auStack_40);
    uVar7 = 0;
    FUN_00050b14(0,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
    _swift_dynamicCast(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
    if (iVar3 == 0) {
      FUN_000232c8(param_1,auStack_40);
      uVar7 = 0;
      FUN_00050b14(0,0xae7060,&PTR__OBJC_CLASS___NSArray_00ac2c28);
      _swift_dynamicCast(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
      if (iVar4 == 0) {
        FUN_000232c8(param_1,auStack_40);
        uVar7 = 0;
        FUN_00050b14(0,0xae8048,&PTR__OBJC_CLASS___NSDictionary_00ac29e8);
        _swift_dynamicCast(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
        if (iVar5 == 0) {
          FUN_000232c8(param_1,auStack_40);
          uVar7 = 0;
          FUN_00050b14(0,0xae8050,&PTR__OBJC_CLASS___NSNull_00ac2f90);
          _swift_dynamicCast(&uStack_50,auStack_40,puVar1 + 8,uVar7,6);
          if (iVar6 == 0) {
            return;
          }
        }
      }
    }
    _objc_release(uStack_50);
  }
  else {
    _swift_bridgeObjectRelease(uStack_48);
  }
  return;
}



/* Entry: 0005080c; end: 00050af3;  */

void FUN_0005080c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  long lStack_58;
  
  puVar1 = PTR___sypN_0099b8d8;
  lStack_58 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x40);
  lVar4 = 0;
  do {
    while( true ) {
      if (uVar12 == 0) {
        do {
          lVar13 = lVar4 + 1;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x50af4);
            (*pcVar2)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
            FUN_0004ff38(param_1,param_2,lStack_58,param_3);
            return;
          }
          uVar12 = ((ulong *)(param_3 + 0x40))[lVar13];
          lVar4 = lVar4 + 1;
        } while (uVar12 == 0);
        uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
      }
      else {
        uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar13 = lVar4;
      }
      uVar9 = LZCOUNT(uVar9);
      uVar11 = uVar9 | lVar13 << 6;
      func_0x00032ddc(*(long *)(param_3 + 0x30) + uVar11 * 0x28,auStack_88);
      lVar4 = *(long *)(param_3 + 0x38) + uVar11 * 0x20;
      FUN_000232c8(lVar4,auStack_a8);
      __ss11AnyHashableV10FoundationE19_bridgeToObjectiveCSo8NSObjectCyF();
      puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
      _objc_opt_self(PTR__OBJC_CLASS___NSString_00ac2988);
      lVar6 = lVar4;
      _swift_dynamicCastObjCClass(lVar4,puVar5);
      _objc_release(lVar4);
      lVar4 = lVar13;
      if (lVar6 != 0) break;
LAB_00050880:
      FUN_00050af4(auStack_a8);
      func_0x00032e18(auStack_88);
    }
    FUN_000232c8(auStack_a8,auStack_c8);
    puVar7 = &uStack_d8;
    _swift_dynamicCast(puVar7,auStack_c8,puVar1 + 8,PTR___sSSN_0099b040,6);
    if ((int)puVar7 == 0) {
      FUN_000232c8(auStack_a8,auStack_c8);
      uVar8 = 0;
      FUN_00050b14(0,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
      puVar7 = &uStack_d8;
      _swift_dynamicCast(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
      if ((int)puVar7 == 0) {
        FUN_000232c8(auStack_a8,auStack_c8);
        uVar8 = 0;
        FUN_00050b14(0,0xae7060,&PTR__OBJC_CLASS___NSArray_00ac2c28);
        puVar7 = &uStack_d8;
        _swift_dynamicCast(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
        if ((int)puVar7 == 0) {
          FUN_000232c8(auStack_a8,auStack_c8);
          uVar8 = 0;
          FUN_00050b14(0,0xae8048,&PTR__OBJC_CLASS___NSDictionary_00ac29e8);
          puVar7 = &uStack_d8;
          _swift_dynamicCast(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
          if ((int)puVar7 == 0) {
            FUN_000232c8(auStack_a8,auStack_c8);
            uVar8 = 0;
            FUN_00050b14(0,0xae8050,&PTR__OBJC_CLASS___NSNull_00ac2f90);
            puVar7 = &uStack_d8;
            _swift_dynamicCast(puVar7,auStack_c8,puVar1 + 8,uVar8,6);
            if ((int)puVar7 == 0) goto LAB_00050880;
          }
        }
      }
      _objc_release(uStack_d8);
    }
    else {
      _swift_bridgeObjectRelease(uStack_d0);
    }
    FUN_00050af4(auStack_a8);
    func_0x00032e18(auStack_88);
    uVar11 = (uVar9 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
    *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar9 & 0x3f);
    bVar3 = SCARRY8(lStack_58,1);
    lStack_58 = lStack_58 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x50ab8);
      (*pcVar2)();
    }
  } while( true );
}



/* Entry: 00050af4; end: 00050b13;  */

void FUN_00050af4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00050b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}


