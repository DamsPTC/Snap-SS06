/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041e386c; end: 1041e38cb;  */

void FUN_1041e386c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[3];
  uVar1 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_1041e3708(uVar3,uVar4,auStack_78,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e38cc; end: 1041e394b;  */

bool FUN_1041e38cc(double *param_1,double *param_2)

{
  if (*param_1 == *param_2) {
    if (*(char *)(param_1 + 2) == '\x01') {
      if (*(char *)(param_2 + 2) == '\x01') {
LAB_1041e3934:
        return param_1[3] == param_2[3];
      }
    }
    else if ((*(char *)(param_2 + 2) != '\x01') && (param_1[1] == param_2[1])) goto LAB_1041e3934;
  }
  return false;
}



/* Entry: 1041e394c; end: 1041e398b;  */

void FUN_1041e394c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1180;
  _swift_getWitnessTable(&UNK_10dce1180,&UNK_1107504a0);
  puRam0000000113068890 = puVar1;
  return;
}



/* Entry: 1041e398c; end: 1041e39b7;  */

long FUN_1041e398c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041e39b8; end: 1041e3a13;  */

int FUN_1041e39b8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1041e3a14; end: 1041e3a63;  */

undefined8 FUN_1041e3a14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041e3a64; end: 1041e3a67;  */

undefined8 FUN_1041e3a64(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000100b92194();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)puVar6 - extraout_x8_00;
  lVar10 = 0x113068940;
  func_0x0001000285a8(0x113068940,&UNK_10dce1270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = uVar7 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = param_2[2];
    if (param_1[2] == 0) {
      if (lVar3 != 0) {
        return 0;
      }
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = param_1[1];
      if (((uVar4 != param_2[1]) || (param_1[2] != lVar3)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    lVar3 = param_2[4];
    if (param_1[4] == 0) {
      if (lVar3 != 0) {
        return 0;
      }
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = param_1[3];
      if (((uVar4 != param_2[3]) || (param_1[4] != lVar3)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    lVar3 = 0;
    func_0x000100b92084();
    iVar1 = *(int *)(lVar3 + 0x1c);
    lVar10 = (long)*(int *)(lVar10 + 0x30);
    FUN_1041e3a14((long)param_1 + (long)iVar1,lVar5);
    FUN_1041e3a14((long)param_2 + (long)iVar1,lVar5 + lVar10);
    pcVar8 = *(code **)(lVar9 + 0x30);
    lVar9 = lVar5;
    (*pcVar8)(lVar5,1,lVar2);
    if ((int)lVar9 == 1) {
      lVar10 = lVar5 + lVar10;
      (*pcVar8)(lVar10,1,lVar2);
      if ((int)lVar10 == 1) {
        FUN_1041e6634(lVar5,0x112dd1460,&UNK_10d9925f0);
        return 1;
      }
    }
    else {
      FUN_1041e3a14(lVar5,uVar7);
      lVar9 = lVar5 + lVar10;
      (*pcVar8)(lVar9,1,lVar2);
      if ((int)lVar9 != 1) {
        FUN_1041e3f2c(lVar5 + lVar10,puVar6);
        uVar4 = uVar7;
        func_0x0001041e8204(uVar7,puVar6);
        FUN_1041e573c(puVar6,&SUB_100b92194);
        FUN_1041e573c(uVar7,&SUB_100b92194);
        FUN_1041e6634(lVar5,0x112dd1460,&UNK_10d9925f0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      FUN_1041e573c(uVar7,&SUB_100b92194);
    }
    FUN_1041e6634(lVar5,0x113068940,&UNK_10dce1270);
  }
  return 0;
}



/* Entry: 1041e3a68; end: 1041e3bf3;  */

void FUN_1041e3a68(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000100b92194();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)puVar2 - extraout_x8_00;
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar4 = unaff_x20[2];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[4];
  }
  else {
    uVar5 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
    lVar4 = unaff_x20[4];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  lVar4 = 0;
  func_0x000100b92084();
  FUN_1041e3a14((long)unaff_x20 + (long)*(int *)(lVar4 + 0x1c),lVar3);
  lVar4 = lVar3;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar1);
  if ((int)lVar4 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041e3f2c(lVar3,puVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1041e7a08(param_1);
    FUN_1041e573c(puVar2,&SUB_100b92194);
  }
  return;
}



/* Entry: 1041e3bf4; end: 1041e3c2f;  */

void FUN_1041e3bf4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1041e3a68(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e3c30; end: 1041e3c33;  */

void FUN_1041e3c30(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000100b92194();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)puVar2 - extraout_x8_00;
  __ss6HasherV8_combineyySuF(*unaff_x20);
  lVar4 = unaff_x20[2];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar4 = unaff_x20[4];
  }
  else {
    uVar5 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
    lVar4 = unaff_x20[4];
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  lVar4 = 0;
  func_0x000100b92084();
  FUN_1041e3a14((long)unaff_x20 + (long)*(int *)(lVar4 + 0x1c),lVar3);
  lVar4 = lVar3;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar1);
  if ((int)lVar4 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041e3f2c(lVar3,puVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1041e7a08(param_1);
    FUN_1041e573c(puVar2,&SUB_100b92194);
  }
  return;
}



/* Entry: 1041e3c34; end: 1041e3c6b;  */

void FUN_1041e3c34(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1041e3a68(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e3c6c; end: 1041e3c6f;  */

undefined8 FUN_1041e3c6c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000100b92194();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)puVar6 - extraout_x8_00;
  lVar10 = 0x113068940;
  func_0x0001000285a8(0x113068940,&UNK_10dce1270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = uVar7 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = param_2[2];
    if (param_1[2] == 0) {
      if (lVar3 != 0) {
        return 0;
      }
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = param_1[1];
      if (((uVar4 != param_2[1]) || (param_1[2] != lVar3)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    lVar3 = param_2[4];
    if (param_1[4] == 0) {
      if (lVar3 != 0) {
        return 0;
      }
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = param_1[3];
      if (((uVar4 != param_2[3]) || (param_1[4] != lVar3)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    lVar3 = 0;
    func_0x000100b92084();
    iVar1 = *(int *)(lVar3 + 0x1c);
    lVar10 = (long)*(int *)(lVar10 + 0x30);
    FUN_1041e3a14((long)param_1 + (long)iVar1,lVar5);
    FUN_1041e3a14((long)param_2 + (long)iVar1,lVar5 + lVar10);
    pcVar8 = *(code **)(lVar9 + 0x30);
    lVar9 = lVar5;
    (*pcVar8)(lVar5,1,lVar2);
    if ((int)lVar9 == 1) {
      lVar10 = lVar5 + lVar10;
      (*pcVar8)(lVar10,1,lVar2);
      if ((int)lVar10 == 1) {
        FUN_1041e6634(lVar5,0x112dd1460,&UNK_10d9925f0);
        return 1;
      }
    }
    else {
      FUN_1041e3a14(lVar5,uVar7);
      lVar9 = lVar5 + lVar10;
      (*pcVar8)(lVar9,1,lVar2);
      if ((int)lVar9 != 1) {
        FUN_1041e3f2c(lVar5 + lVar10,puVar6);
        uVar4 = uVar7;
        func_0x0001041e8204(uVar7,puVar6);
        FUN_1041e573c(puVar6,&SUB_100b92194);
        FUN_1041e573c(uVar7,&SUB_100b92194);
        FUN_1041e6634(lVar5,0x112dd1460,&UNK_10d9925f0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      FUN_1041e573c(uVar7,&SUB_100b92194);
    }
    FUN_1041e6634(lVar5,0x113068940,&UNK_10dce1270);
  }
  return 0;
}



/* Entry: 1041e3c70; end: 1041e3f2b;  */

undefined8 FUN_1041e3c70(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000100b92194();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)puVar6 - extraout_x8_00;
  lVar10 = 0x113068940;
  func_0x0001000285a8(0x113068940,&UNK_10dce1270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = uVar7 - extraout_x8_01;
  if (*param_1 == *param_2) {
    lVar3 = param_2[2];
    if (param_1[2] == 0) {
      if (lVar3 != 0) {
        return 0;
      }
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = param_1[1];
      if (((uVar4 != param_2[1]) || (param_1[2] != lVar3)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    lVar3 = param_2[4];
    if (param_1[4] == 0) {
      if (lVar3 != 0) {
        return 0;
      }
    }
    else {
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = param_1[3];
      if (((uVar4 != param_2[3]) || (param_1[4] != lVar3)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    lVar3 = 0;
    func_0x000100b92084();
    iVar1 = *(int *)(lVar3 + 0x1c);
    lVar10 = (long)*(int *)(lVar10 + 0x30);
    FUN_1041e3a14((long)param_1 + (long)iVar1,lVar5);
    FUN_1041e3a14((long)param_2 + (long)iVar1,lVar5 + lVar10);
    pcVar8 = *(code **)(lVar9 + 0x30);
    lVar9 = lVar5;
    (*pcVar8)(lVar5,1,lVar2);
    if ((int)lVar9 == 1) {
      lVar10 = lVar5 + lVar10;
      (*pcVar8)(lVar10,1,lVar2);
      if ((int)lVar10 == 1) {
        FUN_1041e6634(lVar5,0x112dd1460,&UNK_10d9925f0);
        return 1;
      }
    }
    else {
      FUN_1041e3a14(lVar5,uVar7);
      lVar9 = lVar5 + lVar10;
      (*pcVar8)(lVar9,1,lVar2);
      if ((int)lVar9 != 1) {
        FUN_1041e3f2c(lVar5 + lVar10,puVar6);
        uVar4 = uVar7;
        func_0x0001041e8204(uVar7,puVar6);
        FUN_1041e573c(puVar6,&SUB_100b92194);
        FUN_1041e573c(uVar7,&SUB_100b92194);
        FUN_1041e6634(lVar5,0x112dd1460,&UNK_10d9925f0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      FUN_1041e573c(uVar7,&SUB_100b92194);
    }
    FUN_1041e6634(lVar5,0x113068940,&UNK_10dce1270);
  }
  return 0;
}



/* Entry: 1041e3f2c; end: 1041e3f6f;  */

undefined8 FUN_1041e3f2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b92194();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041e3f70; end: 1041e3f73;  */

void FUN_1041e3f70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113068898 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100b92084(0xff);
  puVar2 = &UNK_10dce1218;
  _swift_getWitnessTable(&UNK_10dce1218,uVar1);
  puRam0000000113068898 = puVar2;
  return;
}



/* Entry: 1041e3f74; end: 1041e3fb7;  */

void FUN_1041e3f74(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113068898 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100b92084(0xff);
  puVar2 = &UNK_10dce1218;
  _swift_getWitnessTable(&UNK_10dce1218,uVar1);
  puRam0000000113068898 = puVar2;
  return;
}



/* Entry: 1041e3fb8; end: 1041e4453;  */

long * FUN_1041e3fb8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar8;
    lVar8 = param_2[2];
    lVar6 = param_2[3];
    param_1[2] = lVar8;
    param_1[3] = lVar6;
    lVar15 = param_2[4];
    param_1[4] = lVar15;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar6 = 0;
    func_0x000100b92194();
    lVar17 = *(long *)(lVar6 + -8);
    pcVar16 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar15);
    puVar7 = puVar2;
    (*pcVar16)(puVar2,1,lVar6);
    if ((int)puVar7 == 0) {
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      uVar19 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar19;
      uVar20 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar20;
      puVar1[6] = puVar2[6];
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 7);
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x14));
      puVar11 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x14));
      lVar8 = 0;
      func_0x000100b922c8();
      lVar15 = *(long *)(lVar8 + -8);
      pcVar16 = *(code **)(lVar15 + 0x30);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar20);
      puVar9 = puVar11;
      (*pcVar16)(puVar11,1,lVar8);
      if ((int)puVar9 == 0) {
        uVar4 = puVar11[1];
        *puVar7 = *puVar11;
        puVar7[1] = uVar4;
        uVar19 = puVar11[2];
        uVar21 = puVar11[5];
        uVar20 = puVar11[4];
        puVar7[3] = puVar11[3];
        puVar7[2] = uVar19;
        puVar7[5] = uVar21;
        puVar7[4] = uVar20;
        uVar19 = puVar11[7];
        puVar7[6] = puVar11[6];
        puVar7[7] = uVar19;
        lVar14 = (long)*(int *)(lVar8 + 0x28);
        lVar12 = 0;
        __s10Foundation4UUIDVMa();
        lVar18 = *(long *)(lVar12 + -8);
        pcVar16 = *(code **)(lVar18 + 0x30);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar19);
        lVar10 = (long)puVar11 + lVar14;
        (*pcVar16)(lVar10,1,lVar12);
        if ((int)lVar10 == 0) {
          (**(code **)(lVar18 + 0x10))((long)puVar7 + lVar14,(long)puVar11 + lVar14,lVar12);
          (**(code **)(lVar18 + 0x38))((long)puVar7 + lVar14,0,1,lVar12);
        }
        else {
          lVar10 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar7 + lVar14,(long)puVar11 + lVar14,
                  *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
        }
        puVar9 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar8 + 0x2c));
        puVar3 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x2c));
        uVar4 = puVar3[1];
        *puVar9 = *puVar3;
        puVar9[1] = uVar4;
        puVar9 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar8 + 0x30));
        puVar3 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x30));
        uVar4 = puVar3[1];
        *puVar9 = *puVar3;
        puVar9[1] = uVar4;
        lVar14 = (long)*(int *)(lVar8 + 0x34);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        lVar10 = (long)puVar11 + lVar14;
        (*pcVar16)(lVar10,1,lVar12);
        if ((int)lVar10 == 0) {
          (**(code **)(lVar18 + 0x10))((long)puVar7 + lVar14,(long)puVar11 + lVar14,lVar12);
          (**(code **)(lVar18 + 0x38))((long)puVar7 + lVar14,0,1,lVar12);
        }
        else {
          lVar10 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar7 + lVar14,(long)puVar11 + lVar14,
                  *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
        }
        puVar9 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar8 + 0x38));
        puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x38));
        uVar4 = puVar11[1];
        *puVar9 = *puVar11;
        puVar9[1] = uVar4;
        pcVar16 = *(code **)(lVar15 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar16)(puVar7,0,1,lVar8);
      }
      else {
        lVar8 = 0x112dd1600;
        func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
        _memcpy(puVar7,puVar11,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x18));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x18));
      lVar8 = 0;
      func_0x000100b92390();
      lVar15 = *(long *)(lVar8 + -8);
      puVar11 = puVar2;
      (**(code **)(lVar15 + 0x30))(puVar2,1,lVar8);
      if ((int)puVar11 == 0) {
        uVar4 = puVar2[1];
        *puVar7 = *puVar2;
        puVar7[1] = uVar4;
        lVar18 = (long)*(int *)(lVar8 + 0x14);
        lVar12 = 0;
        __s10Foundation3URLVMa();
        lVar14 = *(long *)(lVar12 + -8);
        pcVar16 = *(code **)(lVar14 + 0x30);
        _swift_bridgeObjectRetain(uVar4);
        lVar10 = (long)puVar2 + lVar18;
        (*pcVar16)(lVar10,1,lVar12);
        if ((int)lVar10 == 0) {
          (**(code **)(lVar14 + 0x10))((long)puVar7 + lVar18,(long)puVar2 + lVar18,lVar12);
          (**(code **)(lVar14 + 0x38))((long)puVar7 + lVar18,0,1,lVar12);
        }
        else {
          lVar10 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy((long)puVar7 + lVar18,(long)puVar2 + lVar18,
                  *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
        }
        (**(code **)(lVar15 + 0x38))(puVar7,0,1,lVar8);
      }
      else {
        lVar8 = 0x112dd1458;
        func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
        _memcpy(puVar7,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      (**(code **)(lVar17 + 0x38))(puVar1,0,1,lVar6);
    }
    else {
      lVar8 = 0x112dd1460;
      func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar13 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041e4454; end: 1041e463f;  */

void FUN_1041e4454(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  func_0x000100b92194();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
    lVar3 = param_1 + *(int *)(lVar2 + 0x14);
    lVar4 = 0;
    func_0x000100b922c8();
    lVar6 = lVar3;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar3,1,lVar4);
    if ((int)lVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x38));
      iVar1 = *(int *)(lVar4 + 0x28);
      lVar5 = 0;
      __s10Foundation4UUIDVMa();
      lVar7 = *(long *)(lVar5 + -8);
      pcVar8 = *(code **)(lVar7 + 0x30);
      lVar6 = lVar3 + iVar1;
      (*pcVar8)(lVar6,1,lVar5);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar7 + 8))(lVar3 + iVar1,lVar5);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x2c) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x30) + 8));
      iVar1 = *(int *)(lVar4 + 0x34);
      lVar6 = lVar3 + iVar1;
      (*pcVar8)(lVar6,1,lVar5);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar7 + 8))(lVar3 + iVar1,lVar5);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x38) + 8));
    }
    param_1 = param_1 + *(int *)(lVar2 + 0x18);
    lVar2 = 0;
    func_0x000100b92390();
    lVar3 = param_1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
    if ((int)lVar3 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      iVar1 = *(int *)(lVar2 + 0x14);
      lVar2 = 0;
      __s10Foundation3URLVMa();
      lVar6 = *(long *)(lVar2 + -8);
      lVar3 = param_1 + iVar1;
      (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
      if ((int)lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001041e463c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 1041e4640; end: 1041e573b;  */

undefined8 * FUN_1041e4640(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar16 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar16;
  uVar16 = param_2[2];
  uVar12 = param_2[3];
  param_1[2] = uVar16;
  param_1[3] = uVar12;
  uVar12 = param_2[4];
  param_1[4] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar3 = 0;
  func_0x000100b92194();
  lVar14 = *(long *)(lVar3 + -8);
  pcVar13 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar12);
  puVar4 = param_2;
  (*pcVar13)(param_2,1,lVar3);
  if ((int)puVar4 == 0) {
    uVar16 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar16;
    uVar12 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar12;
    uVar17 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar17;
    puVar1[6] = param_2[6];
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_2 + 7);
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x14));
    puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x14));
    lVar5 = 0;
    func_0x000100b922c8();
    lVar11 = *(long *)(lVar5 + -8);
    pcVar13 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar17);
    puVar6 = puVar8;
    (*pcVar13)(puVar8,1,lVar5);
    if ((int)puVar6 == 0) {
      uVar16 = puVar8[1];
      *puVar4 = *puVar8;
      puVar4[1] = uVar16;
      uVar12 = puVar8[2];
      uVar18 = puVar8[5];
      uVar17 = puVar8[4];
      puVar4[3] = puVar8[3];
      puVar4[2] = uVar12;
      puVar4[5] = uVar18;
      puVar4[4] = uVar17;
      uVar12 = puVar8[7];
      puVar4[6] = puVar8[6];
      puVar4[7] = uVar12;
      lVar10 = (long)*(int *)(lVar5 + 0x28);
      lVar9 = 0;
      __s10Foundation4UUIDVMa();
      lVar15 = *(long *)(lVar9 + -8);
      pcVar13 = *(code **)(lVar15 + 0x30);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar12);
      lVar7 = (long)puVar8 + lVar10;
      (*pcVar13)(lVar7,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar15 + 0x10))((long)puVar4 + lVar10,(long)puVar8 + lVar10,lVar9);
        (**(code **)(lVar15 + 0x38))((long)puVar4 + lVar10,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar4 + lVar10,(long)puVar8 + lVar10,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x2c));
      puVar2 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x2c));
      uVar16 = puVar2[1];
      *puVar6 = *puVar2;
      puVar6[1] = uVar16;
      puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x30));
      puVar2 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x30));
      uVar16 = puVar2[1];
      *puVar6 = *puVar2;
      puVar6[1] = uVar16;
      lVar10 = (long)*(int *)(lVar5 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar16);
      lVar7 = (long)puVar8 + lVar10;
      (*pcVar13)(lVar7,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar15 + 0x10))((long)puVar4 + lVar10,(long)puVar8 + lVar10,lVar9);
        (**(code **)(lVar15 + 0x38))((long)puVar4 + lVar10,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar4 + lVar10,(long)puVar8 + lVar10,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x38));
      puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x38));
      uVar16 = puVar8[1];
      *puVar6 = *puVar8;
      puVar6[1] = uVar16;
      pcVar13 = *(code **)(lVar11 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar13)(puVar4,0,1,lVar5);
    }
    else {
      lVar5 = 0x112dd1600;
      func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
      _memcpy(puVar4,puVar8,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x18));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    lVar5 = 0;
    func_0x000100b92390();
    lVar11 = *(long *)(lVar5 + -8);
    puVar8 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,1,lVar5);
    if ((int)puVar8 == 0) {
      uVar16 = param_2[1];
      *puVar4 = *param_2;
      puVar4[1] = uVar16;
      lVar15 = (long)*(int *)(lVar5 + 0x14);
      lVar9 = 0;
      __s10Foundation3URLVMa();
      lVar10 = *(long *)(lVar9 + -8);
      pcVar13 = *(code **)(lVar10 + 0x30);
      _swift_bridgeObjectRetain(uVar16);
      lVar7 = (long)param_2 + lVar15;
      (*pcVar13)(lVar7,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar10 + 0x10))((long)puVar4 + lVar15,(long)param_2 + lVar15,lVar9);
        (**(code **)(lVar10 + 0x38))((long)puVar4 + lVar15,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar4 + lVar15,(long)param_2 + lVar15,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      (**(code **)(lVar11 + 0x38))(puVar4,0,1,lVar5);
    }
    else {
      lVar5 = 0x112dd1458;
      func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
      _memcpy(puVar4,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112dd1460;
    func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041e573c; end: 1041e5777;  */

undefined8 FUN_1041e573c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041e5778; end: 1041e661b;  */

undefined8 * FUN_1041e5778(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *param_1 = *param_2;
  uVar15 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar15;
  uVar15 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar3 = 0;
  func_0x000100b92194();
  lVar12 = *(long *)(lVar3 + -8);
  puVar4 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar3);
  if ((int)puVar4 == 0) {
    uVar15 = *param_2;
    uVar17 = param_2[3];
    uVar16 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar15;
    puVar1[3] = uVar17;
    puVar1[2] = uVar16;
    uVar15 = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar15;
    uVar15 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)puVar1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)puVar1 + 0x29) = uVar15;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x14));
    puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x14));
    lVar5 = 0;
    func_0x000100b922c8();
    lVar11 = *(long *)(lVar5 + -8);
    puVar6 = puVar8;
    (**(code **)(lVar11 + 0x30))(puVar8,1,lVar5);
    if ((int)puVar6 == 0) {
      uVar15 = *puVar8;
      uVar17 = puVar8[3];
      uVar16 = puVar8[2];
      puVar4[1] = puVar8[1];
      *puVar4 = uVar15;
      puVar4[3] = uVar17;
      puVar4[2] = uVar16;
      uVar15 = puVar8[4];
      uVar17 = puVar8[7];
      uVar16 = puVar8[6];
      puVar4[5] = puVar8[5];
      puVar4[4] = uVar15;
      puVar4[7] = uVar17;
      puVar4[6] = uVar16;
      lVar14 = (long)*(int *)(lVar5 + 0x28);
      lVar9 = 0;
      __s10Foundation4UUIDVMa();
      lVar13 = *(long *)(lVar9 + -8);
      pcVar10 = *(code **)(lVar13 + 0x30);
      lVar7 = (long)puVar8 + lVar14;
      (*pcVar10)(lVar7,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar13 + 0x20))((long)puVar4 + lVar14,(long)puVar8 + lVar14,lVar9);
        (**(code **)(lVar13 + 0x38))((long)puVar4 + lVar14,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar4 + lVar14,(long)puVar8 + lVar14,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      puVar6 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x2c));
      uVar15 = *puVar6;
      puVar2 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x2c));
      puVar2[1] = puVar6[1];
      *puVar2 = uVar15;
      puVar6 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x30));
      uVar15 = *puVar6;
      puVar2 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x30));
      puVar2[1] = puVar6[1];
      *puVar2 = uVar15;
      lVar14 = (long)*(int *)(lVar5 + 0x34);
      lVar7 = (long)puVar8 + lVar14;
      (*pcVar10)(lVar7,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar13 + 0x20))((long)puVar4 + lVar14,(long)puVar8 + lVar14,lVar9);
        (**(code **)(lVar13 + 0x38))((long)puVar4 + lVar14,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar4 + lVar14,(long)puVar8 + lVar14,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x38));
      uVar15 = *puVar8;
      puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x38));
      puVar6[1] = puVar8[1];
      *puVar6 = uVar15;
      (**(code **)(lVar11 + 0x38))(puVar4,0,1,lVar5);
    }
    else {
      lVar5 = 0x112dd1600;
      func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
      _memcpy(puVar4,puVar8,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x18));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    lVar5 = 0;
    func_0x000100b92390();
    lVar11 = *(long *)(lVar5 + -8);
    puVar8 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,1,lVar5);
    if ((int)puVar8 == 0) {
      uVar15 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar15;
      lVar14 = (long)*(int *)(lVar5 + 0x14);
      lVar9 = 0;
      __s10Foundation3URLVMa();
      lVar13 = *(long *)(lVar9 + -8);
      lVar7 = (long)param_2 + lVar14;
      (**(code **)(lVar13 + 0x30))(lVar7,1,lVar9);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar13 + 0x20))((long)puVar4 + lVar14,(long)param_2 + lVar14,lVar9);
        (**(code **)(lVar13 + 0x38))((long)puVar4 + lVar14,0,1,lVar9);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar4 + lVar14,(long)param_2 + lVar14,
                *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      (**(code **)(lVar11 + 0x38))(puVar4,0,1,lVar5);
    }
    else {
      lVar5 = 0x112dd1458;
      func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
      _memcpy(puVar4,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112dd1460;
    func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041e661c; end: 1041e6633;  */

void FUN_1041e661c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041e6634; end: 1041e66ab;  */

undefined8 FUN_1041e6634(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1041e66ac; end: 1041e6707;  */

undefined8 FUN_1041e66ac(void)

{
  if (lRam0000000113068948 != -1) {
    _swift_once(0x113068948,0x1041e6674);
  }
  return 0x113813278;
}



/* Entry: 1041e6708; end: 1041e6717;  */

void FUN_1041e6708(void)

{
  return;
}



/* Entry: 1041e6718; end: 1041e67b7;  */

void FUN_1041e6718(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam0000000113068950 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam0000000113068950;
  func_0x0001041e6758();
  puVar2 = &UNK_10dce1280;
  _swift_getWitnessTable(&UNK_10dce1280,lVar1);
  puRam0000000113068950 = puVar2;
  return;
}



/* Entry: 1041e67b8; end: 1041e67bf;  */

void FUN_1041e67b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss11GlobalActorPsE21sharedUnownedExecutorScevgZ_11034ff58)();
  return;
}



/* Entry: 1041e67c0; end: 1041e6927;  */

void FUN_1041e67c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar4 - extraout_x8_00;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,*unaff_x20,unaff_x20[1]);
  lVar2 = 0;
  func_0x000100b92390();
  func_0x000100029394((long)unaff_x20 + (long)*(int *)(lVar2 + 0x14),lVar5);
  lVar2 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,lVar1);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0x112e092e0;
    func_0x0001041e7434(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(auStack_88,lVar1,uVar3);
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e6928; end: 1041e692b;  */

void FUN_1041e6928(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar4 - extraout_x8_00;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,*unaff_x20,unaff_x20[1]);
  lVar2 = 0;
  func_0x000100b92390();
  func_0x000100029394((long)unaff_x20 + (long)*(int *)(lVar2 + 0x14),lVar5);
  lVar2 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,lVar1);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0x112e092e0;
    func_0x0001041e7434(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(auStack_88,lVar1,uVar3);
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e692c; end: 1041e6bf3;  */

void FUN_1041e692c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar4 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000100029394((long)unaff_x20 + (long)*(int *)(param_2 + 0x14),lVar5);
  lVar2 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,lVar1);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0x112e092e0;
    func_0x0001041e7434(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar1,uVar3);
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 1041e6bf4; end: 1041e6bf7;  */

undefined8 FUN_1041e6bf4(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)puVar7 - extraout_x8_00;
  lVar10 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = uVar8 - extraout_x8_01;
  uVar3 = *param_1;
  if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) == 0)) {
    return 0;
  }
  lVar4 = 0;
  func_0x000100b92390();
  iVar1 = *(int *)(lVar4 + 0x14);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar1,lVar6);
  func_0x000100029394((long)param_2 + (long)iVar1,lVar6 + lVar10);
  pcVar9 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar6;
  (*pcVar9)(lVar6,1,lVar2);
  if ((int)lVar4 == 1) {
    lVar10 = lVar6 + lVar10;
    (*pcVar9)(lVar10,1,lVar2);
    if ((int)lVar10 == 1) {
      FUN_1041e73f4(lVar6,0x112d36580,&UNK_10d9016d0);
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar6,uVar8);
    lVar4 = lVar6 + lVar10;
    (*pcVar9)(lVar4,1,lVar2);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar11 + 0x20))(puVar7,lVar6 + lVar10,lVar2);
      uVar5 = 0x112d7e688;
      func_0x0001041e7434(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVSQAAMc_1103509a8);
      uVar3 = uVar8;
      __sSQ2eeoiySbx_xtFZTj(uVar8,puVar7,lVar2,uVar5);
      pcVar9 = *(code **)(lVar11 + 8);
      (*pcVar9)(puVar7,lVar2);
      (*pcVar9)(uVar8,lVar2);
      FUN_1041e73f4(lVar6,0x112d36580,&UNK_10d9016d0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar11 + 8))(uVar8,lVar2);
  }
  FUN_1041e73f4(lVar6,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 1041e6bf8; end: 1041e6e6b;  */

undefined8 FUN_1041e6bf8(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)puVar7 - extraout_x8_00;
  lVar10 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = uVar8 - extraout_x8_01;
  uVar3 = *param_1;
  if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) == 0)) {
    return 0;
  }
  lVar4 = 0;
  func_0x000100b92390();
  iVar1 = *(int *)(lVar4 + 0x14);
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar1,lVar6);
  func_0x000100029394((long)param_2 + (long)iVar1,lVar6 + lVar10);
  pcVar9 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar6;
  (*pcVar9)(lVar6,1,lVar2);
  if ((int)lVar4 == 1) {
    lVar10 = lVar6 + lVar10;
    (*pcVar9)(lVar10,1,lVar2);
    if ((int)lVar10 == 1) {
      FUN_1041e73f4(lVar6,0x112d36580,&UNK_10d9016d0);
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar6,uVar8);
    lVar4 = lVar6 + lVar10;
    (*pcVar9)(lVar4,1,lVar2);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar11 + 0x20))(puVar7,lVar6 + lVar10,lVar2);
      uVar5 = 0x112d7e688;
      func_0x0001041e7434(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVSQAAMc_1103509a8);
      uVar3 = uVar8;
      __sSQ2eeoiySbx_xtFZTj(uVar8,puVar7,lVar2,uVar5);
      pcVar9 = *(code **)(lVar11 + 8);
      (*pcVar9)(puVar7,lVar2);
      (*pcVar9)(uVar8,lVar2);
      FUN_1041e73f4(lVar6,0x112d36580,&UNK_10d9016d0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar11 + 8))(uVar8,lVar2);
  }
  FUN_1041e73f4(lVar6,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 1041e6e6c; end: 1041e6e97;  */

void FUN_1041e6e6c(void)

{
  func_0x0001041e7434(0x1130689f8,&SUB_100b92390,&UNK_10dce1358);
  return;
}



/* Entry: 1041e6e98; end: 1041e6f93;  */

long * FUN_1041e6e98(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar5 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar2 + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    _swift_bridgeObjectRetain(lVar3);
    lVar3 = (long)param_2 + lVar5;
    (*pcVar7)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041e6f94; end: 1041e700b;  */

void FUN_1041e6f94(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001041e7008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1041e700c; end: 1041e7203;  */

undefined8 * FUN_1041e700c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041e7204; end: 1041e72c3;  */

undefined8 * FUN_1041e7204(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041e72c4; end: 1041e73db;  */

undefined8 * FUN_1041e72c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    return param_1;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 1041e73dc; end: 1041e73f3;  */

void FUN_1041e73dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041e73f4; end: 1041e7473;  */

undefined8 FUN_1041e73f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1041e7474; end: 1041e7523;  */

void FUN_1041e7474(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  uVar8 = unaff_x20[6];
  uVar7 = *(undefined1 *)(unaff_x20 + 7);
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar1,uVar4);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar3,uVar6);
  __ss6HasherV8_combineyySuF(uVar8);
  __ss6HasherV8_combineyySuF(uVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e7524; end: 1041e75a3;  */

void FUN_1041e7524(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  uVar5 = *(undefined1 *)(unaff_x20 + 7);
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar6);
  __ss6HasherV8_combineyySuF(uVar5);
  return;
}



/* Entry: 1041e75a4; end: 1041e764f;  */

void FUN_1041e75a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  uVar8 = unaff_x20[6];
  uVar7 = *(undefined1 *)(unaff_x20 + 7);
  __ss6HasherV5_seedABSi_tcfC(auStack_a8);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar1,uVar4);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar3,uVar6);
  __ss6HasherV8_combineyySuF(uVar8);
  __ss6HasherV8_combineyySuF(uVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e7650; end: 1041e76a7;  */

uint FUN_1041e7650(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_1041e76a8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1041e76a8; end: 1041e7757;  */

bool FUN_1041e76a8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if ((((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar1 & 1) != 0)) && ((int)param_1[6] == (int)param_2[6])) {
      return (char)param_1[7] == (char)param_2[7];
    }
  }
  return false;
}



/* Entry: 1041e7758; end: 1041e775b;  */

void FUN_1041e7758(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1400;
  _swift_getWitnessTable(&UNK_10dce1400,&UNK_110750608);
  puRam0000000113068a90 = puVar1;
  return;
}



/* Entry: 1041e775c; end: 1041e779b;  */

void FUN_1041e775c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1400;
  _swift_getWitnessTable(&UNK_10dce1400,&UNK_110750608);
  puRam0000000113068a90 = puVar1;
  return;
}



/* Entry: 1041e779c; end: 1041e77f7;  */

long FUN_1041e779c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041e77f8; end: 1041e78f7;  */

undefined8 * FUN_1041e77f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1041e78f8; end: 1041e795b;  */

undefined8 * FUN_1041e78f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 1041e795c; end: 1041e7a07;  */

int FUN_1041e795c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1041e7a08; end: 1041e7cff;  */

void FUN_1041e7a08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  undefined8 *puVar11;
  long extraout_x8_02;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  long lStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lStack_78 = *(long *)(lVar6 + -8);
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar10 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  lStack_90 = lVar10;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar7 = 0;
  lStack_80 = lVar10;
  func_0x000100b92390();
  lStack_68 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112dd1458;
  puStack_88 = puVar11;
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar11 - extraout_x8_02;
  uVar12 = unaff_x20[2];
  uVar9 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  uVar4 = *(undefined1 *)(unaff_x20 + 7);
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar9);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(uVar4);
  lVar6 = 0;
  func_0x000100b92194();
  FUN_1041e7d7c((long)*(int *)(lVar6 + 0x14),param_1);
  func_0x0001041ea264((long)unaff_x20 + (long)*(int *)(lVar6 + 0x18),lVar10,0x112dd1458,
                      &UNK_10d992550);
  lVar6 = lVar10;
  (**(code **)(lStack_68 + 0x30))(lVar10,1,lVar7);
  puVar11 = puStack_88;
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001041ea220(lVar10,puStack_88,&SUB_100b92390);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar11,puVar11[1]);
    lVar10 = lStack_80;
    func_0x0001041ea264((long)puVar11 + (long)*(int *)(lVar7 + 0x14),lStack_80,0x112d36580,
                        &UNK_10d9016d0);
    lVar5 = lStack_70;
    lVar7 = lStack_78;
    lVar8 = lVar10;
    (**(code **)(lStack_78 + 0x30))(lVar10,1,lStack_70);
    lVar6 = lStack_90;
    if ((int)lVar8 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lStack_90,lVar10,lVar5);
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar9 = 0x112e092e0;
      func_0x0001041ea2ac(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVSHAAMc_1103509a0);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar5,uVar9);
      (**(code **)(lVar7 + 8))(lVar6,lVar5);
    }
    FUN_1041e984c(puVar11,&SUB_100b92390);
  }
  return;
}



/* Entry: 1041e7d00; end: 1041e7d3b;  */

void FUN_1041e7d00(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1041e7a08(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e7d3c; end: 1041e7d3f;  */

void FUN_1041e7d3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  undefined8 *puVar11;
  long extraout_x8_02;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  long lStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lStack_78 = *(long *)(lVar6 + -8);
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar10 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  lStack_90 = lVar10;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar7 = 0;
  lStack_80 = lVar10;
  func_0x000100b92390();
  lStack_68 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112dd1458;
  puStack_88 = puVar11;
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar11 - extraout_x8_02;
  uVar12 = unaff_x20[2];
  uVar9 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  uVar4 = *(undefined1 *)(unaff_x20 + 7);
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar12,uVar9);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(uVar4);
  lVar6 = 0;
  func_0x000100b92194();
  FUN_1041e7d7c((long)*(int *)(lVar6 + 0x14),param_1);
  func_0x0001041ea264((long)unaff_x20 + (long)*(int *)(lVar6 + 0x18),lVar10,0x112dd1458,
                      &UNK_10d992550);
  lVar6 = lVar10;
  (**(code **)(lStack_68 + 0x30))(lVar10,1,lVar7);
  puVar11 = puStack_88;
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001041ea220(lVar10,puStack_88,&SUB_100b92390);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar11,puVar11[1]);
    lVar10 = lStack_80;
    func_0x0001041ea264((long)puVar11 + (long)*(int *)(lVar7 + 0x14),lStack_80,0x112d36580,
                        &UNK_10d9016d0);
    lVar5 = lStack_70;
    lVar7 = lStack_78;
    lVar8 = lVar10;
    (**(code **)(lStack_78 + 0x30))(lVar10,1,lStack_70);
    lVar6 = lStack_90;
    if ((int)lVar8 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lStack_90,lVar10,lVar5);
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar9 = 0x112e092e0;
      func_0x0001041ea2ac(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVSHAAMc_1103509a0);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar5,uVar9);
      (**(code **)(lVar7 + 8))(lVar6,lVar5);
    }
    FUN_1041e984c(puVar11,&SUB_100b92390);
  }
  return;
}



/* Entry: 1041e7d40; end: 1041e7d77;  */

void FUN_1041e7d40(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1041e7a08(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041e7d78; end: 1041e7d7b;  */

undefined8 FUN_1041e7d78(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  long extraout_x8_01;
  long lVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar19;
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar10 = 0;
  func_0x000100b92390();
  lStack_b8 = *(long *)(lVar10 + -8);
  lStack_b0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar10 = 0x112dd1458;
  puStack_d8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar17 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar10 = 0x113068b48;
  uStack_d0 = uVar17;
  func_0x0001000285a8(0x113068b48,&UNK_10dce14e8);
  lStack_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = uVar17 - extraout_x8_01;
  lVar10 = 0;
  lStack_a8 = lVar18;
  func_0x000100b922c8();
  lStack_90 = *(long *)(lVar10 + -8);
  lStack_88 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar18 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dd1600;
  lStack_c8 = lVar18;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar17 = lVar18 - extraout_x8_03;
  lVar10 = 0x113068b50;
  uStack_a0 = uVar17;
  func_0x0001000285a8(0x113068b50,&UNK_10dce14f0);
  lStack_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_80 = uVar17 - extraout_x8_04;
  uVar17 = *param_1;
  uVar11 = param_1[2];
  uVar3 = param_1[3];
  uVar12 = param_1[4];
  uVar4 = param_1[5];
  uStack_68 = param_1[6];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  uStack_70 = param_2[6];
  uStack_78 = (uint)(byte)param_2[7];
  uStack_74 = (uint)(byte)param_1[7];
  if (((uVar17 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar17 & 1) == 0)) {
    return 0;
  }
  if (((uVar11 != uVar1) || (uVar3 != uVar5)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar11,uVar3,uVar1,uVar5,0), (uVar11 & 1) == 0)) {
    return 0;
  }
  if (((uVar12 != uVar2) || (uVar4 != uVar6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar12,uVar4,uVar2,uVar6,0), (uVar12 & 1) == 0)) {
    return 0;
  }
  if ((int)uStack_68 != (int)uStack_70) {
    return 0;
  }
  if (uStack_74 != uStack_78) {
    return 0;
  }
  lVar13 = 0;
  func_0x000100b92194();
  lVar18 = lStack_80;
  iVar7 = *(int *)(lVar13 + 0x14);
  lVar10 = (long)*(int *)(lStack_98 + 0x30);
  func_0x0001041ea264((long)param_1 + (long)iVar7,lStack_80,0x112dd1600,&UNK_10d992a30);
  func_0x0001041ea264((long)param_2 + (long)iVar7,lVar18 + lVar10,0x112dd1600,&UNK_10d992a30);
  lVar9 = lStack_88;
  pcVar19 = *(code **)(lStack_90 + 0x30);
  lVar14 = lVar18;
  (*pcVar19)(lVar18,1,lStack_88);
  uVar17 = uStack_a0;
  if ((int)lVar14 == 1) {
    lVar10 = lVar18 + lVar10;
    (*pcVar19)(lVar10,1,lVar9);
    if ((int)lVar10 == 1) {
      func_0x0001041ea2ec(lVar18,0x112dd1600,&UNK_10d992a30);
LAB_1041e85e0:
      lVar18 = lStack_a8;
      iVar7 = *(int *)(lVar13 + 0x18);
      lVar10 = (long)*(int *)(lStack_c0 + 0x30);
      func_0x0001041ea264((long)param_1 + (long)iVar7,lStack_a8,0x112dd1458,&UNK_10d992550);
      func_0x0001041ea264((long)param_2 + (long)iVar7,lVar18 + lVar10,0x112dd1458,&UNK_10d992550);
      lVar9 = lStack_b0;
      pcVar19 = *(code **)(lStack_b8 + 0x30);
      lVar14 = lVar18;
      (*pcVar19)(lVar18,1,lStack_b0);
      uVar17 = uStack_d0;
      if ((int)lVar14 == 1) {
        lVar10 = lVar18 + lVar10;
        (*pcVar19)(lVar10,1,lVar9);
        if ((int)lVar10 == 1) {
          func_0x0001041ea2ec(lVar18,0x112dd1458,&UNK_10d992550);
          return 1;
        }
      }
      else {
        func_0x0001041ea264(lVar18,uStack_d0,0x112dd1458,&UNK_10d992550);
        lVar14 = lVar18 + lVar10;
        (*pcVar19)(lVar14,1,lVar9);
        puVar8 = puStack_d8;
        if ((int)lVar14 != 1) {
          func_0x0001041ea220(lVar18 + lVar10,puStack_d8,&SUB_100b92390);
          uVar11 = uVar17;
          FUN_1041e6bf8(uVar17,puVar8);
          FUN_1041e984c(puVar8,&SUB_100b92390);
          FUN_1041e984c(uVar17,&SUB_100b92390);
          func_0x0001041ea2ec(lVar18,0x112dd1458,&UNK_10d992550);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        FUN_1041e984c(uVar17,&SUB_100b92390);
      }
      uVar15 = 0x113068b48;
      puVar16 = &UNK_10dce14e8;
      goto LAB_1041e86d8;
    }
  }
  else {
    func_0x0001041ea264(lVar18,uStack_a0,0x112dd1600,&UNK_10d992a30);
    lVar14 = lVar18 + lVar10;
    (*pcVar19)(lVar14,1,lVar9);
    lVar9 = lStack_c8;
    if ((int)lVar14 != 1) {
      func_0x0001041ea220(lVar18 + lVar10,lStack_c8,&SUB_100b922c8);
      uVar11 = uVar17;
      FUN_1041ea9d4(uVar17,lVar9);
      FUN_1041e984c(lVar9,&SUB_100b922c8);
      FUN_1041e984c(uVar17,&SUB_100b922c8);
      func_0x0001041ea2ec(lVar18,0x112dd1600,&UNK_10d992a30);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      goto LAB_1041e85e0;
    }
    FUN_1041e984c(uVar17,&SUB_100b922c8);
  }
  uVar15 = 0x113068b50;
  puVar16 = &UNK_10dce14f0;
LAB_1041e86d8:
  func_0x0001041ea2ec(lVar18,uVar15,puVar16);
  return 0;
}



/* Entry: 1041e7d7c; end: 1041e8767;  */

void FUN_1041e7d7c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long extraout_x12;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long alStack_80 [4];
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  alStack_80[3] = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_80[3] + 0x40));
  lVar4 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d3bc20;
  alStack_80[2] = lVar4;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar4 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_80[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12;
  lVar3 = 0;
  func_0x000100b922c8();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = (undefined8 *)(lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0x112dd1600;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar5 - extraout_x8_02;
  func_0x0001041ea264();
  lVar9 = lVar8;
  (**(code **)(lVar7 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar9 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001041ea220(lVar8,puVar5,&SUB_100b922c8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar9 = puVar5[1];
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = *puVar5;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar9);
    }
    lVar9 = alStack_80[3];
    __ss6HasherV8_combineyySuF(puVar5[2]);
    __ss6HasherV8_combineyySuF(puVar5[3]);
    __ss6HasherV8_combineyySuF(puVar5[4]);
    __ss6HasherV8_combineyySuF(puVar5[5]);
    lVar7 = puVar5[7];
    if (lVar7 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = puVar5[6];
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar7);
    }
    func_0x0001041ea264((long)puVar5 + (long)*(int *)(lVar3 + 0x28),lVar4,0x112d3bc20,&UNK_10d904ef0
                       );
    pcVar10 = *(code **)(lVar9 + 0x30);
    lVar8 = lVar4;
    (*pcVar10)(lVar4,1,lVar2);
    lVar7 = alStack_80[2];
    if ((int)lVar8 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      (**(code **)(lVar9 + 0x20))(alStack_80[2],lVar4,lVar2);
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar6 = 0x112d6c668;
      func_0x0001041ea2ac(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSHAAMc_110350c48);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar6);
      (**(code **)(lVar9 + 8))(lVar7,lVar2);
    }
    puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x2c));
    lVar4 = puVar1[1];
    if (lVar4 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar4);
    }
    puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x30));
    lVar4 = puVar1[1];
    if (lVar4 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar4);
    }
    lVar4 = alStack_80[1];
    func_0x0001041ea264((long)puVar5 + (long)*(int *)(lVar3 + 0x34),alStack_80[1],0x112d3bc20,
                        &UNK_10d904ef0);
    lVar8 = lVar4;
    (*pcVar10)(lVar4,1,lVar2);
    lVar7 = alStack_80[2];
    if ((int)lVar8 == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      (**(code **)(lVar9 + 0x20))(alStack_80[2],lVar4,lVar2);
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar6 = 0x112d6c668;
      func_0x0001041ea2ac(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSHAAMc_110350c48);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar6);
      (**(code **)(lVar9 + 8))(lVar7,lVar2);
    }
    puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x38));
    lVar9 = puVar1[1];
    if (lVar9 == 0) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar6 = *puVar1;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,lVar9);
    }
    FUN_1041e984c(puVar5,&SUB_100b922c8);
  }
  return;
}



/* Entry: 1041e8768; end: 1041e8793;  */

void FUN_1041e8768(void)

{
  func_0x0001041ea2ac(0x113068a98,&SUB_100b92194,&UNK_10dce1488);
  return;
}



/* Entry: 1041e8794; end: 1041e8b5f;  */

long * FUN_1041e8794(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    lVar8 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar8;
    lVar6 = param_2[4];
    lVar9 = param_2[5];
    lVar11 = param_2[6];
    param_1[5] = lVar9;
    param_1[6] = lVar11;
    *(char *)(param_1 + 7) = (char)param_2[7];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    param_1[4] = lVar6;
    lVar6 = 0;
    func_0x000100b922c8();
    lVar11 = *(long *)(lVar6 + -8);
    pcVar14 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar9);
    puVar7 = puVar2;
    (*pcVar14)(puVar2,1,lVar6);
    if ((int)puVar7 == 0) {
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      uVar15 = puVar2[2];
      uVar17 = puVar2[5];
      uVar16 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar15;
      puVar1[5] = uVar17;
      puVar1[4] = uVar16;
      uVar15 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar15;
      lVar13 = (long)*(int *)(lVar6 + 0x28);
      lVar8 = 0;
      __s10Foundation4UUIDVMa();
      lVar9 = *(long *)(lVar8 + -8);
      pcVar14 = *(code **)(lVar9 + 0x30);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar15);
      lVar12 = (long)puVar2 + lVar13;
      (*pcVar14)(lVar12,1,lVar8);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar9 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar8);
        (**(code **)(lVar9 + 0x38))((long)puVar1 + lVar13,0,1,lVar8);
      }
      else {
        lVar12 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
                *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x2c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x2c));
      uVar4 = puVar3[1];
      *puVar7 = *puVar3;
      puVar7[1] = uVar4;
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30));
      uVar4 = puVar3[1];
      *puVar7 = *puVar3;
      puVar7[1] = uVar4;
      lVar13 = (long)*(int *)(lVar6 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      lVar12 = (long)puVar2 + lVar13;
      (*pcVar14)(lVar12,1,lVar8);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar9 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar8);
        (**(code **)(lVar9 + 0x38))((long)puVar1 + lVar13,0,1,lVar8);
      }
      else {
        lVar12 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar13,(long)puVar2 + lVar13,
                *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38));
      uVar4 = puVar2[1];
      *puVar7 = *puVar2;
      puVar7[1] = uVar4;
      pcVar14 = *(code **)(lVar11 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar14)(puVar1,0,1,lVar6);
    }
    else {
      lVar6 = 0x112dd1600;
      func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar6 = 0;
    func_0x000100b92390();
    lVar12 = *(long *)(lVar6 + -8);
    puVar7 = puVar2;
    (**(code **)(lVar12 + 0x30))(puVar2,1,lVar6);
    if ((int)puVar7 == 0) {
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      lVar11 = (long)*(int *)(lVar6 + 0x14);
      lVar9 = 0;
      __s10Foundation3URLVMa();
      lVar13 = *(long *)(lVar9 + -8);
      pcVar14 = *(code **)(lVar13 + 0x30);
      _swift_bridgeObjectRetain(uVar4);
      lVar8 = (long)puVar2 + lVar11;
      (*pcVar14)(lVar8,1,lVar9);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar11,(long)puVar2 + lVar11,lVar9);
        (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar11,0,1,lVar9);
      }
      else {
        lVar8 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar1 + lVar11,(long)puVar2 + lVar11,
                *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar6);
    }
    else {
      lVar6 = 0x112dd1458;
      func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar6 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041e8b60; end: 1041e8d0b;  */

void FUN_1041e8b60(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  lVar5 = param_1 + *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000100b922c8();
  lVar4 = lVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar5,1,lVar2);
  if ((int)lVar4 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x38));
    iVar1 = *(int *)(lVar2 + 0x28);
    lVar3 = 0;
    __s10Foundation4UUIDVMa();
    lVar6 = *(long *)(lVar3 + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    lVar4 = lVar5 + iVar1;
    (*pcVar7)(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 8))(lVar5 + iVar1,lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar2 + 0x2c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar2 + 0x30) + 8));
    iVar1 = *(int *)(lVar2 + 0x34);
    lVar4 = lVar5 + iVar1;
    (*pcVar7)(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 8))(lVar5 + iVar1,lVar3);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar2 + 0x38) + 8));
  }
  param_1 = param_1 + *(int *)(param_2 + 0x18);
  lVar4 = 0;
  func_0x000100b92390();
  lVar5 = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    iVar1 = *(int *)(lVar4 + 0x14);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar2 = *(long *)(lVar4 + -8);
    lVar5 = param_1 + iVar1;
    (**(code **)(lVar2 + 0x30))(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001041e8d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(param_1 + iVar1,lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1041e8d0c; end: 1041e984b;  */

undefined8 * FUN_1041e8d0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar14 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar14;
  uVar15 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar15;
  uVar3 = param_2[4];
  uVar16 = param_2[5];
  uVar9 = param_2[6];
  param_1[5] = uVar16;
  param_1[6] = uVar9;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar7 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  param_1[4] = uVar3;
  lVar4 = 0;
  func_0x000100b922c8();
  lVar13 = *(long *)(lVar4 + -8);
  pcVar10 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  puVar5 = puVar7;
  (*pcVar10)(puVar7,1,lVar4);
  if ((int)puVar5 == 0) {
    uVar3 = puVar7[1];
    *puVar1 = *puVar7;
    puVar1[1] = uVar3;
    uVar14 = puVar7[2];
    uVar16 = puVar7[5];
    uVar15 = puVar7[4];
    puVar1[3] = puVar7[3];
    puVar1[2] = uVar14;
    puVar1[5] = uVar16;
    puVar1[4] = uVar15;
    uVar14 = puVar7[7];
    puVar1[6] = puVar7[6];
    puVar1[7] = uVar14;
    lVar12 = (long)*(int *)(lVar4 + 0x28);
    lVar8 = 0;
    __s10Foundation4UUIDVMa();
    lVar11 = *(long *)(lVar8 + -8);
    pcVar10 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar14);
    lVar6 = (long)puVar7 + lVar12;
    (*pcVar10)(lVar6,1,lVar8);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar12,(long)puVar7 + lVar12,lVar8);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar12,0,1,lVar8);
    }
    else {
      lVar6 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar12,(long)puVar7 + lVar12,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x2c));
    puVar2 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x2c));
    uVar3 = puVar2[1];
    *puVar5 = *puVar2;
    puVar5[1] = uVar3;
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x30));
    puVar2 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x30));
    uVar3 = puVar2[1];
    *puVar5 = *puVar2;
    puVar5[1] = uVar3;
    lVar12 = (long)*(int *)(lVar4 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    lVar6 = (long)puVar7 + lVar12;
    (*pcVar10)(lVar6,1,lVar8);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar12,(long)puVar7 + lVar12,lVar8);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar12,0,1,lVar8);
    }
    else {
      lVar6 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar12,(long)puVar7 + lVar12,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x38));
    puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x38));
    uVar3 = puVar7[1];
    *puVar5 = *puVar7;
    puVar5[1] = uVar3;
    pcVar10 = *(code **)(lVar13 + 0x38);
    _swift_bridgeObjectRetain();
    (*pcVar10)(puVar1,0,1,lVar4);
  }
  else {
    lVar4 = 0x112dd1600;
    func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
    _memcpy(puVar1,puVar7,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar4 = 0;
  func_0x000100b92390();
  lVar13 = *(long *)(lVar4 + -8);
  puVar7 = param_2;
  (**(code **)(lVar13 + 0x30))(param_2,1,lVar4);
  if ((int)puVar7 == 0) {
    uVar3 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    lVar11 = (long)*(int *)(lVar4 + 0x14);
    lVar8 = 0;
    __s10Foundation3URLVMa();
    lVar12 = *(long *)(lVar8 + -8);
    pcVar10 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(uVar3);
    lVar6 = (long)param_2 + lVar11;
    (*pcVar10)(lVar6,1,lVar8);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 0x10))((long)puVar1 + lVar11,(long)param_2 + lVar11,lVar8);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar11,0,1,lVar8);
    }
    else {
      lVar6 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    lVar4 = 0x112dd1458;
    func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041e984c; end: 1041e9887;  */

undefined8 FUN_1041e984c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041e9888; end: 1041ea207;  */

undefined8 * FUN_1041e9888(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  uVar12 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  uVar12 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar3 = 0;
  func_0x000100b922c8();
  lVar10 = *(long *)(lVar3 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar10 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 0) {
    uVar12 = *puVar6;
    uVar14 = puVar6[3];
    uVar13 = puVar6[2];
    puVar1[1] = puVar6[1];
    *puVar1 = uVar12;
    puVar1[3] = uVar14;
    puVar1[2] = uVar13;
    uVar12 = puVar6[4];
    uVar14 = puVar6[7];
    uVar13 = puVar6[6];
    puVar1[5] = puVar6[5];
    puVar1[4] = uVar12;
    puVar1[7] = uVar14;
    puVar1[6] = uVar13;
    lVar9 = (long)*(int *)(lVar3 + 0x28);
    lVar7 = 0;
    __s10Foundation4UUIDVMa();
    lVar11 = *(long *)(lVar7 + -8);
    pcVar8 = *(code **)(lVar11 + 0x30);
    lVar5 = (long)puVar6 + lVar9;
    (*pcVar8)(lVar5,1,lVar7);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar11 + 0x20))((long)puVar1 + lVar9,(long)puVar6 + lVar9,lVar7);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar9,0,1,lVar7);
    }
    else {
      lVar5 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar9,(long)puVar6 + lVar9,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar4 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x2c));
    uVar12 = *puVar4;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x2c));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar12;
    puVar4 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x30));
    uVar12 = *puVar4;
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x30));
    puVar2[1] = puVar4[1];
    *puVar2 = uVar12;
    lVar9 = (long)*(int *)(lVar3 + 0x34);
    lVar5 = (long)puVar6 + lVar9;
    (*pcVar8)(lVar5,1,lVar7);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar11 + 0x20))((long)puVar1 + lVar9,(long)puVar6 + lVar9,lVar7);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar9,0,1,lVar7);
    }
    else {
      lVar5 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar9,(long)puVar6 + lVar9,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x38));
    uVar12 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x38));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar12;
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112dd1600;
    func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
    _memcpy(puVar1,puVar6,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar3 = 0;
  func_0x000100b92390();
  lVar10 = *(long *)(lVar3 + -8);
  puVar6 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar3);
  if ((int)puVar6 == 0) {
    uVar12 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar12;
    lVar9 = (long)*(int *)(lVar3 + 0x14);
    lVar7 = 0;
    __s10Foundation3URLVMa();
    lVar11 = *(long *)(lVar7 + -8);
    lVar5 = (long)param_2 + lVar9;
    (**(code **)(lVar11 + 0x30))(lVar5,1,lVar7);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar11 + 0x20))((long)puVar1 + lVar9,(long)param_2 + lVar9,lVar7);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar9,0,1,lVar7);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)puVar1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    lVar3 = 0x112dd1458;
    func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041ea208; end: 1041ea21f;  */

void FUN_1041ea208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041ea220; end: 1041ea32b;  */

undefined8 FUN_1041ea220(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041ea32c; end: 1041ea33f;  */

bool FUN_1041ea32c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041ea340; end: 1041ea367;  */

void FUN_1041ea340(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1041ea420();
  *param_1 = uVar1;
  return;
}



/* Entry: 1041ea368; end: 1041ea373;  */

void FUN_1041ea368(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041ea374; end: 1041ea41f;  */

void FUN_1041ea374(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041ea420; end: 1041ea433;  */

ulong FUN_1041ea420(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 1041ea434; end: 1041ea473;  */

void FUN_1041ea434(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1500;
  _swift_getWitnessTable(&UNK_10dce1500,&UNK_110750720);
  puRam0000000113068b58 = puVar1;
  return;
}



/* Entry: 1041ea474; end: 1041ea5db;  */

int FUN_1041ea474(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041ea4f0;
        goto LAB_1041ea4d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041ea4d4:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1041ea4f0:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041ea5dc; end: 1041ea957;  */

void FUN_1041ea5dc(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  lVar6 = unaff_x20[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  lVar6 = unaff_x20[7];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  lVar3 = 0;
  func_0x000100b922c8();
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x28),lVar7);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  lStack_68 = lVar9;
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar4,lVar7,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x0001041eba8c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar9 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x2c));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x30));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x34),lVar5);
  lVar7 = lVar5;
  (*pcVar10)(lVar5,1,lVar2);
  lVar6 = lStack_68;
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lStack_68 + 0x20))(puVar4,lVar5,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x0001041eba8c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x38));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar5);
  }
  return;
}



/* Entry: 1041ea958; end: 1041ea993;  */

void FUN_1041ea958(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1041ea5dc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041ea994; end: 1041ea997;  */

void FUN_1041ea994(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  lVar6 = unaff_x20[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  __ss6HasherV8_combineyySuF(unaff_x20[5]);
  lVar6 = unaff_x20[7];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  lVar3 = 0;
  func_0x000100b922c8();
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x28),lVar7);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  lStack_68 = lVar9;
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar4,lVar7,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x0001041eba8c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar9 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x2c));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x30));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x34),lVar5);
  lVar7 = lVar5;
  (*pcVar10)(lVar5,1,lVar2);
  lVar6 = lStack_68;
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lStack_68 + 0x20))(puVar4,lVar5,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x0001041eba8c(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x38));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar5);
  }
  return;
}



/* Entry: 1041ea998; end: 1041ea9cf;  */

void FUN_1041ea998(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1041ea5dc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041ea9d0; end: 1041ea9d3;  */

undefined8 FUN_1041ea9d0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&pcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar12 - extraout_x12;
  lVar5 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_00;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if (((uVar9 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if (param_1[3] != param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  if (param_1[5] != param_2[5]) {
    return 0;
  }
  uVar8 = param_2[7];
  lStack_68 = lVar5;
  if (param_1[7] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[6];
    if (((uVar9 != param_2[6]) || (param_1[7] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  lVar5 = 0;
  func_0x000100b922c8();
  uStack_70 = (ulong)*(int *)(lVar5 + 0x28);
  iVar3 = *(int *)(lStack_68 + 0x30);
  lStack_78 = lVar5;
  func_0x0001000c78e8((long)param_1 + uStack_70,lVar14);
  lVar5 = (long)param_2 + uStack_70;
  uStack_70 = (long)iVar3;
  func_0x0001000c78e8(lVar5,lVar14 + iVar3);
  pcVar16 = *(code **)(lVar13 + 0x30);
  lVar5 = lVar14;
  (*pcVar16)(lVar14,1,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 != 1) goto LAB_1041eac98;
    pcStack_80 = pcVar16;
    FUN_1041eba4c(lVar14,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar14,lVar15);
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 8))(lVar15,lVar4);
      goto LAB_1041eac98;
    }
    pcStack_80 = pcVar16;
    (**(code **)(lVar13 + 0x20))(lVar10,lVar14 + uStack_70,lVar4);
    uVar6 = 0x112d68098;
    func_0x0001041eba8c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    lVar5 = lVar15;
    __sSQ2eeoiySbx_xtFZTj(lVar15,lVar10,lVar4,uVar6);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar5);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar10,lVar4);
    (*pcVar16)(lVar15,lVar4);
    FUN_1041eba4c(lVar14,0x112d3bc20,&UNK_10d904ef0);
    if ((uStack_70 & 1) == 0) {
      return 0;
    }
  }
  lVar14 = lStack_68;
  lVar5 = lStack_78;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x2c));
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x2c));
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x30);
  puVar1 = (ulong *)((long)param_1 + lVar15);
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + lVar15);
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x34);
  lVar5 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001000c78e8((long)param_1 + lVar15,lVar11);
  func_0x0001000c78e8((long)param_2 + lVar15,lVar11 + lVar5);
  pcVar16 = pcStack_80;
  lVar15 = lVar11;
  (*pcStack_80)(lVar11,1,lVar4);
  lVar14 = lVar11;
  if ((int)lVar15 == 1) {
    lVar5 = lVar11 + lVar5;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_1041eba4c(lVar11,0x112d3bc20,&UNK_10d904ef0);
LAB_1041eaf24:
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x38));
      uVar8 = param_1[1];
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x38));
      uVar12 = param_2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar12 == 0) {
        return 0;
      }
      uVar9 = *param_1;
      if (((uVar9 != *param_2) || (uVar8 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x0001000c78e8(lVar11,uVar12);
    lVar15 = lVar11 + lVar5;
    (*pcVar16)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
      (**(code **)(lVar13 + 0x20))(lVar10,lVar11 + lVar5,lVar4);
      uVar6 = 0x112d68098;
      func_0x0001041eba8c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar8 = uVar12;
      __sSQ2eeoiySbx_xtFZTj(uVar12,lVar10,lVar4,uVar6);
      pcVar16 = *(code **)(lVar13 + 8);
      (*pcVar16)(lVar10,lVar4);
      (*pcVar16)(uVar12,lVar4);
      FUN_1041eba4c(lVar11,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      goto LAB_1041eaf24;
    }
    (**(code **)(lVar13 + 8))(uVar12,lVar4);
  }
LAB_1041eac98:
  FUN_1041eba4c(lVar14,0x112d68090,&UNK_10da24400);
  return 0;
}



/* Entry: 1041ea9d4; end: 1041eaf77;  */

undefined8 FUN_1041ea9d4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&pcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar12 - extraout_x12;
  lVar5 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_00;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if (((uVar9 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if (param_1[3] != param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  if (param_1[5] != param_2[5]) {
    return 0;
  }
  uVar8 = param_2[7];
  lStack_68 = lVar5;
  if (param_1[7] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[6];
    if (((uVar9 != param_2[6]) || (param_1[7] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  lVar5 = 0;
  func_0x000100b922c8();
  uStack_70 = (ulong)*(int *)(lVar5 + 0x28);
  iVar3 = *(int *)(lStack_68 + 0x30);
  lStack_78 = lVar5;
  func_0x0001000c78e8((long)param_1 + uStack_70,lVar14);
  lVar5 = (long)param_2 + uStack_70;
  uStack_70 = (long)iVar3;
  func_0x0001000c78e8(lVar5,lVar14 + iVar3);
  pcVar16 = *(code **)(lVar13 + 0x30);
  lVar5 = lVar14;
  (*pcVar16)(lVar14,1,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 != 1) goto LAB_1041eac98;
    pcStack_80 = pcVar16;
    FUN_1041eba4c(lVar14,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar14,lVar15);
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 8))(lVar15,lVar4);
      goto LAB_1041eac98;
    }
    pcStack_80 = pcVar16;
    (**(code **)(lVar13 + 0x20))(lVar10,lVar14 + uStack_70,lVar4);
    uVar6 = 0x112d68098;
    func_0x0001041eba8c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    lVar5 = lVar15;
    __sSQ2eeoiySbx_xtFZTj(lVar15,lVar10,lVar4,uVar6);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar5);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar10,lVar4);
    (*pcVar16)(lVar15,lVar4);
    FUN_1041eba4c(lVar14,0x112d3bc20,&UNK_10d904ef0);
    if ((uStack_70 & 1) == 0) {
      return 0;
    }
  }
  lVar14 = lStack_68;
  lVar5 = lStack_78;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x2c));
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x2c));
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x30);
  puVar1 = (ulong *)((long)param_1 + lVar15);
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + lVar15);
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x34);
  lVar5 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001000c78e8((long)param_1 + lVar15,lVar11);
  func_0x0001000c78e8((long)param_2 + lVar15,lVar11 + lVar5);
  pcVar16 = pcStack_80;
  lVar15 = lVar11;
  (*pcStack_80)(lVar11,1,lVar4);
  lVar14 = lVar11;
  if ((int)lVar15 == 1) {
    lVar5 = lVar11 + lVar5;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_1041eba4c(lVar11,0x112d3bc20,&UNK_10d904ef0);
LAB_1041eaf24:
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x38));
      uVar8 = param_1[1];
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x38));
      uVar12 = param_2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar12 == 0) {
        return 0;
      }
      uVar9 = *param_1;
      if (((uVar9 != *param_2) || (uVar8 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x0001000c78e8(lVar11,uVar12);
    lVar15 = lVar11 + lVar5;
    (*pcVar16)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
      (**(code **)(lVar13 + 0x20))(lVar10,lVar11 + lVar5,lVar4);
      uVar6 = 0x112d68098;
      func_0x0001041eba8c(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar8 = uVar12;
      __sSQ2eeoiySbx_xtFZTj(uVar12,lVar10,lVar4,uVar6);
      pcVar16 = *(code **)(lVar13 + 8);
      (*pcVar16)(lVar10,lVar4);
      (*pcVar16)(uVar12,lVar4);
      FUN_1041eba4c(lVar11,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      goto LAB_1041eaf24;
    }
    (**(code **)(lVar13 + 8))(uVar12,lVar4);
  }
LAB_1041eac98:
  FUN_1041eba4c(lVar14,0x112d68090,&UNK_10da24400);
  return 0;
}



/* Entry: 1041eaf78; end: 1041eafa3;  */

void FUN_1041eaf78(void)

{
  func_0x0001041eba8c(0x113068b60,&SUB_100b922c8,&UNK_10dce1608);
  return;
}



/* Entry: 1041eafa4; end: 1041eb17b;  */

long * FUN_1041eafa4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    lVar9 = param_2[2];
    lVar10 = param_2[5];
    lVar6 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = lVar9;
    param_1[5] = lVar10;
    param_1[4] = lVar6;
    lVar9 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar9;
    lVar12 = (long)*(int *)(param_3 + 0x28);
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar9);
    lVar7 = (long)param_2 + lVar12;
    (*pcVar11)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar12,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar9 = (long)*(int *)(param_3 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    lVar7 = (long)param_2 + lVar9;
    (*pcVar11)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041eb17c; end: 1041eb24b;  */

void FUN_1041eb17c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  iVar1 = *(int *)(param_2 + 0x28);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  iVar1 = *(int *)(param_2 + 0x34);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}



/* Entry: 1041eb24c; end: 1041eb3f7;  */

undefined8 * FUN_1041eb24c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar10 = param_2[2];
  uVar12 = param_2[5];
  uVar11 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar10;
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  uVar10 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar10;
  lVar9 = (long)*(int *)(param_3 + 0x28);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar5 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  lVar9 = (long)*(int *)(param_3 + 0x34);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1041eb3f8; end: 1041eba33;  */

undefined8 * FUN_1041eb3f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar9 = (long)*(int *)(param_3 + 0x28);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + lVar9,lVar3);
      goto LAB_1041eb504;
    }
    (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar3);
  }
  else {
LAB_1041eb504:
    lVar4 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar9 = (long)*(int *)(param_3 + 0x34);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
      goto LAB_1041eb620;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar3);
    goto LAB_1041eb620;
  }
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
LAB_1041eb620:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *param_2;
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 1041eba34; end: 1041eba4b;  */

void FUN_1041eba34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041eba4c; end: 1041ebacb;  */

undefined8 FUN_1041eba4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1041ebacc; end: 1041ebb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041ebacc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x0001003ffe10(param_1,unaff_x20 + _DAT_113068c20);
  *(undefined8 *)(unaff_x20 + _DAT_113068c28) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1041ebb4c; end: 1041ebbdb; -[_TtC21AppImpressionServices22SCAppImpressionService init] */

void FUN_1041ebb4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0x616c696176616e55,0xeb00000000656c62,
             "AppImpressionServices/SCAppImpressionServices.swift",0x33,2,0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041ebba8);
  (*pcVar1)();
}



/* Entry: 1041ebbdc; end: 1041ebc13; -[_TtC21AppImpressionServices22SCAppImpressionService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ebbdc(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_113068c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113068c28));
  return;
}



/* Entry: 1041ebc14; end: 1041ebc23; -[SCAppImpressionViewThroughInfo start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041ebc14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068c58);
}



/* Entry: 1041ebc24; end: 1041ebc33; -[SCAppImpressionViewThroughInfo end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ebc24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068c60));
  return;
}



/* Entry: 1041ebc34; end: 1041ebc43; -[SCAppImpressionViewThroughInfo viewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041ebc34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068c68);
}



/* Entry: 1041ebc44; end: 1041ebcb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ebc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068c58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113068c60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113068c68) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041ebcb8; end: 1041ebd37; -[SCAppImpressionViewThroughInfo initWithStart:end:viewTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ebcb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_113068c58) = param_1;
  *(undefined8 *)(param_3 + _DAT_113068c60) = param_5;
  *(undefined8 *)(param_3 + _DAT_113068c68) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_3;
  lStack_38 = lVar2;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1041ebd38; end: 1041ebde3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ebd38(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068c58) = param_1;
  if (param_4 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_3);
  }
  *(undefined **)(unaff_x20 + _DAT_113068c60) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113068c68) = param_2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041ebde4; end: 1041ebe17; -[SCAppImpressionViewThroughInfo hash] */

undefined8 FUN_1041ebde4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041ebe18();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041ebe18; end: 1041ebee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ebe18(void)

{
  long unaff_x20;
  long lVar1;
  double dVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113068c58) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_113068c58);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  lVar1 = *(long *)(unaff_x20 + _DAT_113068c60);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113068c68) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_113068c68);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041ebee4; end: 1041ec027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041ebee4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      dVar6 = *(double *)(unaff_x20 + _DAT_113068c58);
      dVar7 = *(double *)(lStack_88 + _DAT_113068c58);
      lVar4 = *(long *)(unaff_x20 + _DAT_113068c60);
      lVar5 = *(long *)(lStack_88 + _DAT_113068c60);
      uVar3 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar5);
        _objc_retain(lVar4);
        lVar2 = lVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar3 = (uint)lVar2;
        _objc_release(lVar4);
        _objc_release(lVar5);
      }
      dVar8 = *(double *)(unaff_x20 + _DAT_113068c68);
      dVar9 = *(double *)(lStack_88 + _DAT_113068c68);
      _objc_release(lStack_88);
      if (dVar6 == dVar7) {
        return uVar3 & dVar8 == dVar9;
      }
    }
  }
  return 0;
}



/* Entry: 1041ec028; end: 1041ec0a7; -[SCAppImpressionViewThroughInfo isEqual:] */

uint FUN_1041ec028(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1041ebee4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041ec0a8; end: 1041ec0ab; -[SCAppImpressionViewThroughInfo copyWithZone:] */

void FUN_1041ec0a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041ec0ac; end: 1041ec0d7; -[SCAppImpressionViewThroughInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041ec0ac(long param_1)

{
  func_0x00010bf885a0(*(undefined8 *)(param_1 + _DAT_113068c60));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


