/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d83e80; end: 101d83ebb;  */

void FUN_101d83e80(void)

{
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 101d83ebc; end: 101d84247;  */

undefined8 FUN_101d83ebc(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar13 = *unaff_x20;
  uVar3 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d84248);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar10 = uVar3;
      puVar12 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar5 = *puVar12;
        func_0x000107c61174();
        func_0x0001000d224c(&uStack_68);
        uVar3 = uStack_68;
        puVar6 = &UNK_1104805a0;
        func_0x000107c613fc(&UNK_1104805a0,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = uVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar13;
        puVar7 = &UNK_1104805c8;
        func_0x000107c613fc(&UNK_1104805c8,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x101d85048;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        func_0x000107c61174(uVar5);
        uVar8 = uVar3;
        func_0x000100775264(uVar3,1,0x101d85020,puVar7,PTR___sSSN_11034da80);
        func_0x000107c615e8(uVar3);
        func_0x000107c61574(puVar7);
        func_0x0001000d224c(&uStack_68);
        uVar1 = uStack_68;
        puVar6 = &UNK_110480370;
        func_0x000107c613fc(&UNK_110480370,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,unaff_x20);
        puVar7 = &UNK_1104805f0;
        func_0x000107c613fc(&UNK_1104805f0,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        uVar3 = uVar1;
        func_0x0001048898b8(uVar1,1,0x101d84fe4,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(uVar8);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(uVar5);
        uVar9 = uVar9 - 1;
        uVar10 = uVar3;
        puVar12 = puVar12 + 1;
      } while (uVar9 != 0);
    }
    else {
      uVar11 = 0;
      uVar10 = uVar3;
      do {
        uVar4 = uVar11;
        FUN_101d6ffd4(uVar11,param_1);
        uVar11 = uVar11 + 1;
        func_0x0001000d224c(&uStack_68);
        uVar3 = uStack_68;
        puVar6 = &UNK_110480528;
        func_0x000107c613fc(&UNK_110480528,0x20,7);
        *(ulong *)(puVar6 + 0x10) = uVar4;
        *(undefined8 *)(puVar6 + 0x18) = uVar13;
        puVar7 = &UNK_110480550;
        func_0x000107c613fc(&UNK_110480550,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x101d84ed4;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        func_0x000107c615f0(uVar4);
        uVar8 = uVar3;
        func_0x000100775264(uVar3,1,0x101d8500c,puVar7,PTR___sSSN_11034da80);
        func_0x000107c615e8(uVar3);
        func_0x000107c61574(puVar7);
        func_0x0001000d224c(&uStack_68);
        uVar1 = uStack_68;
        puVar6 = &UNK_110480370;
        func_0x000107c613fc(&UNK_110480370,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,unaff_x20);
        puVar7 = &UNK_110480578;
        func_0x000107c613fc(&UNK_110480578,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        uVar3 = uVar1;
        func_0x0001048898b8(uVar1,1,0x101d84fd0,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(uVar8);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(puVar7);
        func_0x000107c615e8(uVar4);
        uVar10 = uVar3;
      } while (uVar9 != uVar11);
    }
  }
  return uVar3;
}



/* Entry: 101d84248; end: 101d842c7;  */

undefined8 FUN_101d84248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_101d842d4(param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return param_2;
}



/* Entry: 101d842c8; end: 101d842d3;  */

undefined8 FUN_101d842c8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_101d842d4(uVar3,uVar2);
    func_0x000107c61574(lVar1);
  }
  return uVar3;
}



/* Entry: 101d842d4; end: 101d8465f;  */

undefined8 FUN_101d842d4(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar13 = *unaff_x20;
  uVar3 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d84660);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar10 = uVar3;
      puVar12 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar5 = *puVar12;
        func_0x000107c61174();
        func_0x0001000d224c(&uStack_68);
        uVar3 = uStack_68;
        puVar6 = &UNK_110480488;
        func_0x000107c613fc(&UNK_110480488,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = uVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar13;
        puVar7 = &UNK_1104804b0;
        func_0x000107c613fc(&UNK_1104804b0,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x101d85034;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        func_0x000107c61174(uVar5);
        uVar8 = uVar3;
        func_0x000100775264(uVar3,1,0x101d84ff8,puVar7,PTR___sSSN_11034da80);
        func_0x000107c615e8(uVar3);
        func_0x000107c61574(puVar7);
        func_0x0001000d224c(&uStack_68);
        uVar1 = uStack_68;
        puVar6 = &UNK_110480370;
        func_0x000107c613fc(&UNK_110480370,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,unaff_x20);
        puVar7 = &UNK_1104804d8;
        func_0x000107c613fc(&UNK_1104804d8,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        uVar3 = uVar1;
        func_0x0001048898b8(uVar1,1,0x101d84fbc,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(uVar8);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(uVar5);
        uVar9 = uVar9 - 1;
        uVar10 = uVar3;
        puVar12 = puVar12 + 1;
      } while (uVar9 != 0);
    }
    else {
      uVar11 = 0;
      uVar10 = uVar3;
      do {
        uVar4 = uVar11;
        FUN_101d6ffd4(uVar11,param_1);
        uVar11 = uVar11 + 1;
        func_0x0001000d224c(&uStack_68);
        uVar3 = uStack_68;
        puVar6 = &UNK_110480410;
        func_0x000107c613fc(&UNK_110480410,0x20,7);
        *(ulong *)(puVar6 + 0x10) = uVar4;
        *(undefined8 *)(puVar6 + 0x18) = uVar13;
        puVar7 = &UNK_110480438;
        func_0x000107c613fc(&UNK_110480438,0x20,7);
        *(code **)(puVar7 + 0x10) = FUN_101d84e34;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        func_0x000107c615f0(uVar4);
        uVar8 = uVar3;
        func_0x000100775264(uVar3,1,0x101d84e4c,puVar7,PTR___sSSN_11034da80);
        func_0x000107c615e8(uVar3);
        func_0x000107c61574(puVar7);
        func_0x0001000d224c(&uStack_68);
        uVar1 = uStack_68;
        puVar6 = &UNK_110480370;
        func_0x000107c613fc(&UNK_110480370,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,unaff_x20);
        puVar7 = &UNK_110480460;
        func_0x000107c613fc(&UNK_110480460,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        uVar3 = uVar1;
        func_0x0001048898b8(uVar1,1,0x101d84e60,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(uVar8);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(puVar7);
        func_0x000107c615e8(uVar4);
        uVar10 = uVar3;
      } while (uVar9 != uVar11);
    }
  }
  return uVar3;
}



/* Entry: 101d84660; end: 101d846af;  */

void FUN_101d84660(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101d846b0; end: 101d8473b;  */

void FUN_101d846b0(undefined1 *param_1)

{
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (param_1 == (undefined1 *)0x0) {
    func_0x000101d84e94();
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *param_1 = 0xe;
    func_0x000107c61654();
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101d8473c; end: 101d848b7;  */

undefined8 FUN_101d8473c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar1 = param_1;
  (**(code **)(lStack_68 + 8))(param_1,param_2,uStack_70,lStack_68);
  func_0x0001000d224c(&uStack_90);
  uVar2 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  uVar3 = uStack_90;
  func_0x000100775264(uStack_90,1,FUN_101d849d8,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uStack_90);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  puVar4 = &UNK_110480500;
  func_0x000107c613fc(&UNK_110480500,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(param_2);
  uVar2 = auStack_88[0];
  func_0x0001048898b8(auStack_88[0],1,0x101d84e78,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(auStack_88[0]);
  func_0x000107c61574(puVar4);
  return uVar2;
}



/* Entry: 101d848b8; end: 101d84943;  */

void FUN_101d848b8(undefined1 *param_1)

{
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == (undefined1 *)0x0) {
    func_0x000101d84e94();
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101d84944; end: 101d849d7;  */

undefined8 FUN_101d84944(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101d8473c(uVar2,uVar1,param_3);
    func_0x000107c61574(param_2);
  }
  return uVar2;
}



/* Entry: 101d849d8; end: 101d849ff;  */

void FUN_101d849d8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = *(char *)((long)param_2 + 0x11) != '\x01';
  if (bVar1) {
    uVar2 = *param_2;
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = !bVar1;
  return;
}



/* Entry: 101d84a00; end: 101d84acb;  */

undefined8
FUN_101d84a00(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((char)param_1[1] == '\x01') || (param_2 < *param_1)) {
    func_0x0001000d224c(auStack_68);
    puVar1 = auStack_68;
    func_0x0001000a8868(puVar1,uStack_50);
    func_0x000103a6e94c(param_4,param_5,param_2,uStack_50,uStack_48,puVar1);
    func_0x0001000834e4(auStack_68);
  }
  else {
    param_4 = 0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  return param_4;
}



/* Entry: 101d84acc; end: 101d84beb;  */

undefined1 * FUN_101d84acc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined1 *)*param_2;
  puVar3 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  puVar1 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000101d84e94();
    func_0x000107c613f8(&UNK_110480de0,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    puVar2 = puVar4;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (puVar2 == (undefined1 *)0x0) {
      func_0x000101d84e94();
      func_0x000107c613f8(&UNK_110480de0,puVar2,0,0);
      *puVar2 = 0xe;
      func_0x000107c61654();
      func_0x000107c61574(puVar1);
    }
    else {
      puVar4 = puVar2;
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
      FUN_101d84bec(puVar4,puVar3);
      func_0x000107c61574(puVar1);
      func_0x000107c6142c(puVar3);
    }
  }
  return puVar4;
}



/* Entry: 101d84bec; end: 101d84cbb;  */

undefined8 FUN_101d84bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_1,param_2,uStack_50,lStack_48);
  func_0x0001000d224c(&uStack_70);
  uVar1 = uStack_70;
  func_0x000100775264(uStack_70,1,FUN_101d84ddc,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_70);
  func_0x0001000834e4(auStack_68);
  return uVar1;
}



/* Entry: 101d84cbc; end: 101d84ddb;  */

undefined1 * FUN_101d84cbc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined1 *)*param_2;
  puVar3 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  puVar1 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000101d84e94();
    func_0x000107c613f8(&UNK_110480de0,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    puVar2 = puVar4;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (puVar2 == (undefined1 *)0x0) {
      func_0x000101d84e94();
      func_0x000107c613f8(&UNK_110480de0,puVar2,0,0);
      *puVar2 = 1;
      func_0x000107c61654();
      func_0x000107c61574(puVar1);
    }
    else {
      puVar4 = puVar2;
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
      FUN_101d84bec(puVar4,puVar3);
      func_0x000107c61574(puVar1);
      func_0x000107c6142c(puVar3);
    }
  }
  return puVar4;
}



/* Entry: 101d84ddc; end: 101d84e33;  */

void FUN_101d84ddc(undefined1 *param_1)

{
  if (param_1[0x11] != '\x01') {
    func_0x000101d84e94();
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *param_1 = 0x10;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101d84e34; end: 101d84eeb;  */

void FUN_101d84e34(void)

{
  long unaff_x20;
  
  FUN_101d848b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d84eec; end: 101d84f6f;  */

void FUN_101d84eec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 101d84f70; end: 101d8505b;  */

void FUN_101d84f70(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d83be0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d8505c; end: 101d850bb; -[_TtC40SCMemPlatBackupTranscodeStepServicesImpl13TranscodeStep init] */

void FUN_101d8505c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupTranscodeStepServicesImpl.TranscodeStep",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d85088);
  (*pcVar1)();
}



/* Entry: 101d850bc; end: 101d85183; -[_TtC40SCMemPlatBackupTranscodeStepServicesImpl13TranscodeStep .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d850d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d850f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d85118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d85138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d85158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d8513c) */
/* WARNING: Removing unreachable block (ram,0x000101d8511c) */
/* WARNING: Removing unreachable block (ram,0x000101d850fc) */
/* WARNING: Removing unreachable block (ram,0x000101d850dc) */
/* WARNING: Removing unreachable block (ram,0x000101d8515c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d850bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2aa18));
  return;
}



/* Entry: 101d85184; end: 101d851a3;  */

void FUN_101d85184(void)

{
  func_0x000107c61168(&PTR_PTR_1128036b0);
  return;
}



/* Entry: 101d851a4; end: 101d85963;  */

/* WARNING: Removing unreachable block (ram,0x000101d85298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d851a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  long lStack_90;
  undefined *puStack_68;
  
  func_0x0001000285a8(0x112e2aa98,&UNK_10da13468);
  uVar16 = 0x18;
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  lVar18 = param_1;
  func_0x000107c42950();
  func_0x000107c61180();
  lVar3 = lVar18;
  func_0x000107c5faec();
  uVar14 = uVar16;
  func_0x000107c61170(lVar18);
  lVar18 = param_1;
  func_0x000107c4188c();
  func_0x000107c61180();
  if (lVar18 == 0) {
    lVar18 = 0;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar4 = lVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar18);
    func_0x000107c610f8(PTR_PTR_1126d7f28);
    func_0x00010006c00c(lVar4,uVar14);
    lVar18 = lVar4;
    FUN_101d6b26c(lVar4,uVar14);
    func_0x00010006c090(lVar4,uVar14);
    func_0x00010006c090(lVar4,uVar14);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar18 != 0) {
      lVar4 = lVar18;
      func_0x000107c3d868();
      func_0x000107c61180();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar11 = puVar10;
      if (lVar4 != 0) {
        puStack_68 = (undefined *)0x0;
        func_0x000107c5fc50();
        func_0x000107c61170(lVar4);
        if (puStack_68 != (undefined *)0x0) {
          puVar11 = puStack_68;
        }
      }
      lVar4 = lVar18;
      func_0x000107c4173c();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d85964);
        (*pcVar1)();
      }
      lVar15 = lVar4;
      func_0x000107c5b2dc();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar15 != 0) {
        puStack_68 = (undefined *)0x0;
        func_0x000107c5fc50(lVar15,&puStack_68,PTR___sSSN_11034da80);
        func_0x000107c61170(lVar15);
        if (puStack_68 != (undefined *)0x0) {
          puVar13 = puStack_68;
        }
      }
    }
  }
  lVar4 = param_1;
  func_0x000107c4dfa8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lStack_90 = 0;
  }
  else {
    lStack_90 = lVar4;
    func_0x000107c49820();
    func_0x000107c61170(lVar4);
  }
  puVar5 = &UNK_110480690;
  func_0x000107c613fc(&UNK_110480690,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar10;
  puVar6 = puVar5;
  FUN_101d85964();
  puVar10 = &UNK_1104806b8;
  puVar7 = puVar10;
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar8 = &UNK_1104806e0;
  func_0x000107c613fc(&UNK_1104806e0,0x30,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = lVar3;
  *(undefined8 *)(puVar8 + 0x20) = uVar16;
  *(undefined **)(puVar8 + 0x28) = puVar11;
  func_0x000107c61434();
  uVar14 = 0x112e2aaa0;
  func_0x0001000285a8(0x112e2aaa0,&UNK_10da13470);
  uVar9 = 0;
  func_0x0001048898b8(0,1,FUN_101d87118,puVar8,uVar14);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  puVar11 = &UNK_110480708;
  func_0x000107c613fc(&UNK_110480708,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar5;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  *(long *)(puVar11 + 0x20) = param_1;
  puVar10 = &UNK_110480730;
  func_0x000107c613fc(&UNK_110480730,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_101d87134;
  *(undefined **)(puVar10 + 0x18) = puVar11;
  func_0x000107c6157c(puVar5);
  func_0x000107c61174();
  uVar14 = 0x112e2aaa8;
  func_0x0001000285a8(0x112e2aaa8,&UNK_10da13478);
  uVar12 = 0;
  func_0x000100775264(0,1,FUN_101d87140,puVar10,uVar14);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar10);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e2aa50);
  func_0x0001000d224c(&puStack_68);
  puVar8 = puStack_68;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e2aa60);
  puVar10 = &UNK_110480758;
  func_0x000107c613fc(&UNK_110480758,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar9;
  *(undefined8 *)(puVar10 + 0x18) = uVar17;
  puVar11 = &UNK_110480780;
  func_0x000107c613fc(&UNK_110480780,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_101d87184;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  func_0x000107c61580(uVar9,2);
  func_0x000107c61580(uVar17,2);
  puVar6 = puVar8;
  func_0x0001048898b8(puVar8,1,FUN_101d8718c,puVar11,uVar14);
  func_0x000107c61574(uVar12);
  func_0x000107c615e8(puVar8);
  func_0x000107c61574(puVar11);
  func_0x0001000d224c(&puStack_68);
  puVar8 = puStack_68;
  puVar10 = &UNK_1104806b8;
  puVar7 = puVar10;
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar11 = &UNK_1104807a8;
  func_0x000107c613fc(&UNK_1104807a8,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar7;
  *(undefined **)(puVar11 + 0x18) = puVar13;
  *(undefined8 *)(puVar11 + 0x20) = uVar17;
  puVar13 = &UNK_1104807d0;
  func_0x000107c613fc(&UNK_1104807d0,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_101d871a0;
  *(undefined **)(puVar13 + 0x18) = puVar11;
  uVar14 = 0x112e2aab0;
  func_0x0001000285a8(0x112e2aab0,&UNK_10da13480);
  puVar11 = puVar8;
  func_0x0001048898b8(puVar8,1,FUN_101d893f8,puVar13,uVar14);
  func_0x000107c61574(puVar6);
  func_0x000107c615e8(puVar8);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1104807f8;
  func_0x000107c613fc(&UNK_1104807f8,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_101d871e0;
  *(undefined8 *)(puVar13 + 0x18) = uVar9;
  uVar14 = 0;
  func_0x0001048898b8(0,1,FUN_101d871e8,puVar13,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar13);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e2aa38);
  puVar13 = &UNK_110480820;
  func_0x000107c613fc(&UNK_110480820,0x30,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar9;
  *(long *)(puVar13 + 0x18) = lStack_90;
  *(long *)(puVar13 + 0x20) = lVar3;
  *(undefined8 *)(puVar13 + 0x28) = uVar16;
  func_0x000107c6157c(uVar9);
  uVar16 = 0;
  func_0x000104889f74(0,1,FUN_101d87218,puVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(puVar13);
  puVar11 = puVar10;
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar13 = &UNK_110480848;
  func_0x000107c613fc(&UNK_110480848,0x30,7);
  *(undefined **)(puVar13 + 0x10) = puVar11;
  *(long *)(puVar13 + 0x18) = param_1;
  *(undefined **)(puVar13 + 0x20) = puVar5;
  *(long *)(puVar13 + 0x28) = lVar2;
  puVar11 = &UNK_110480870;
  func_0x000107c613fc(&UNK_110480870,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_101d87234;
  *(undefined **)(puVar11 + 0x18) = puVar13;
  func_0x000107c6157c(puVar5);
  func_0x000107c61174();
  func_0x000107c6157c(lVar2);
  uVar14 = 0;
  func_0x00010488a220(0,1,FUN_101d87240,puVar11);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(puVar11);
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  puVar13 = &UNK_110480898;
  func_0x000107c613fc(&UNK_110480898,0x38,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar9;
  *(undefined **)(puVar13 + 0x18) = puVar10;
  *(long *)(puVar13 + 0x20) = param_1;
  *(undefined **)(puVar13 + 0x28) = puVar5;
  *(long *)(puVar13 + 0x30) = lVar2;
  func_0x000107c6157c(puVar5);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(puVar10);
  func_0x000104888fc0(0,1,FUN_101d87268,puVar13);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(puVar13);
  uVar16 = *(undefined8 *)(lVar2 + 0x10);
  uVar14 = uVar16;
  func_0x000107c6157c(uVar16);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61170(lVar18);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar16);
  return uVar14;
}



/* Entry: 101d85964; end: 101d85a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d85964(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_48);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2aa38);
  puVar2 = &UNK_110480d20;
  func_0x000107c613fc(&UNK_110480d20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(long *)(puVar2 + 0x18) = lVar1;
  pcStack_58 = FUN_101d89390;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110480d38;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_50;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uStack_48);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_48);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d85a98; end: 101d85b2f;  */

undefined8
FUN_101d85a98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d85b30(param_3,param_4,param_5);
    func_0x000107c61170(param_2);
  }
  return param_3;
}



/* Entry: 101d85b30; end: 101d85c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d85b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e29720,&UNK_10da134a0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_1104806b8;
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110480cd0;
  func_0x000107c613fc(&UNK_110480cd0,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  pcStack_68 = FUN_101d89344;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110480ce8;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uStack_58);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_58);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  return uVar5;
}



/* Entry: 101d85ca0; end: 101d86233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101d85ca0(undefined8 param_1,undefined *param_2,undefined *param_3,long param_4,
             undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *unaff_x26;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  uStack_c0 = param_1;
  puStack_b8 = (undefined *)param_4;
  if ((ulong)param_2 >> 0x3e == 0) {
    puStack_b0 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    puVar13 = *(undefined **)(puStack_b0 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    puVar13 = puStack_b0;
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar13 = param_2;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (puVar13 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puStack_b0 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d85e18);
            (*pcVar3)();
          }
          puVar4 = *(undefined **)(param_2 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
          puVar8 = puVar9;
        }
        else {
          puVar4 = puVar11;
          puVar8 = param_2;
          FUN_101d6ffd4();
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d85e14);
          (*pcVar3)();
        }
        puVar5 = puVar4;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) break;
        func_0x000107c61170(puVar4);
        unaff_x26 = puVar11 + 1;
        puVar9 = puVar8;
        puVar11 = unaff_x26;
        if (puVar1 == puVar13) goto LAB_101d85e40;
      }
      unaff_x26 = puVar5;
      puStack_c8 = param_5;
      func_0x000107c5faec();
      puVar9 = puVar8;
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      puVar11 = puVar7;
      func_0x000107c61558();
      puVar4 = puVar7;
      if (((ulong)puVar11 & 1) == 0) {
        puVar9 = (undefined *)(*(long *)(puVar7 + 0x10) + 1);
        puVar4 = (undefined *)0x0;
        func_0x0001000d182c(0,puVar9,1,puVar7);
      }
      uVar14 = *(ulong *)(puVar4 + 0x10);
      puVar11 = (undefined *)(uVar14 + 1);
      puVar7 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        puVar9 = puVar11;
        func_0x0001000d182c(puVar7,puVar11,1,puVar4);
      }
      *(undefined **)(puVar7 + 0x10) = puVar11;
      *(undefined **)(puVar7 + uVar14 * 0x10 + 0x20) = unaff_x26;
      *(undefined **)(puVar7 + uVar14 * 0x10 + 0x28) = puVar8;
      puVar11 = puVar1;
      param_5 = puStack_c8;
    } while (puVar1 != puVar13);
  }
LAB_101d85e40:
  uVar14 = (ulong)param_2 & 0xc000000000000001;
  func_0x000107c61428(param_3 + 0x10,auStack_80,1,0);
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c6142c(uVar12);
  puVar4 = puStack_b8;
  puVar9 = auStack_98;
  puVar11 = (undefined *)0x0;
  func_0x000107c61428((long)puStack_b8 + 0x10,puVar9,0,0);
  lVar6 = (long)puVar4 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    func_0x000107c6142c(puVar7);
    puVar4 = puVar9;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = *(undefined8 *)(lVar6 + _DAT_112e2aa58);
    func_0x000107c6157c(uVar12);
    func_0x000107c61170(lVar6);
    func_0x0001000d224c(&puStack_a8);
    func_0x000107c61574(uVar12);
    puVar8 = puStack_a8;
    param_3 = puStack_a8;
    func_0x000107c614f0();
    func_0x000107c42950();
    func_0x000107c61180();
    unaff_x26 = param_5;
    func_0x000107c5faec();
    func_0x000107c61170(param_5);
    puVar4 = puVar9;
    puVar11 = puVar7;
    (**(code **)(lStack_a0 + 0x18))(unaff_x26,puVar9,puVar7,param_3,lStack_a0);
    func_0x000107c6142c(puVar7);
    func_0x000107c615e8(puVar8);
    func_0x000107c6142c(puVar9);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (puVar13 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      while( true ) {
        if (uVar14 == 0) {
          if (*(undefined **)(puStack_b0 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d86228);
            (*pcVar3)();
          }
          puVar7 = *(undefined **)(param_2 + (long)puVar8 * 8 + 0x20);
          func_0x000107c61174();
          unaff_x26 = puVar4;
        }
        else {
          puVar7 = puVar8;
          unaff_x26 = param_2;
          FUN_101d6ffd4();
        }
        puVar1 = puVar8 + 1;
        if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d86224);
          (*pcVar3)();
        }
        puVar4 = puVar7;
        func_0x000107c5b1b0();
        func_0x000107c61180();
        if (puVar4 != (undefined *)0x0) break;
        param_3 = (undefined *)0x0;
        unaff_x26 = (undefined *)0xf000000000000000;
LAB_101d85fec:
        puVar4 = unaff_x26;
        func_0x0001000b44c0(param_3);
        puVar8 = puVar9;
        func_0x000107c61558();
        puStack_a8 = puVar9;
        if (((ulong)puVar8 & 1) == 0) {
          puVar4 = (undefined *)(*(long *)(puVar9 + 0x10) + 1);
          puVar11 = (undefined *)0x1;
          FUN_101d53294(0);
        }
        uVar2 = *(ulong *)(puStack_a8 + 0x10);
        param_3 = (undefined *)(uVar2 + 1);
        if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar2) {
          puVar11 = (undefined *)0x1;
          puVar4 = param_3;
          FUN_101d53294(1 < *(ulong *)(puStack_a8 + 0x18));
        }
        *(undefined **)(puStack_a8 + 0x10) = param_3;
        *(undefined **)(puStack_a8 + uVar2 * 8 + 0x20) = puVar7;
        puVar8 = puVar1;
        puVar9 = puStack_a8;
        if (puVar1 == puVar13) goto LAB_101d86080;
      }
      param_3 = puVar4;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar4);
      if (0xe < (ulong)unaff_x26 >> 0x3c) goto LAB_101d85fec;
      func_0x000107c61170(puVar7);
      func_0x0001000b44c0(param_3,unaff_x26);
      puVar4 = (undefined *)0xf000000000000000;
      func_0x0001000b44c0(0);
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar13);
  }
LAB_101d86080:
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_b8 = puVar9;
  if (puVar13 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (uVar14 == 0) {
          if (*(undefined **)(puStack_b0 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d86230);
            (*pcVar3)();
          }
          puVar7 = *(undefined **)(param_2 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar9;
          puVar4 = param_2;
          FUN_101d6ffd4();
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d8622c);
          (*pcVar3)();
        }
        puVar5 = puVar7;
        func_0x000107c5b1b0();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) break;
        unaff_x26 = (undefined *)0x0;
        puVar4 = (undefined *)0xf000000000000000;
LAB_101d860a4:
        func_0x000107c61170(puVar7);
        func_0x0001000b44c0(unaff_x26);
        param_3 = puVar9 + 1;
        puVar9 = param_3;
        if (puVar1 == puVar13) goto LAB_101d861d0;
      }
      unaff_x26 = puVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar5);
      if (0xe < (ulong)puVar4 >> 0x3c) goto LAB_101d860a4;
      func_0x0001000b44c0(unaff_x26,puVar4);
      puVar4 = (undefined *)0xf000000000000000;
      func_0x0001000b44c0(0);
      puVar9 = puVar8;
      func_0x000107c61558();
      puStack_a8 = puVar8;
      if (((ulong)puVar9 & 1) == 0) {
        puVar4 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
        puVar11 = (undefined *)0x1;
        FUN_101d53294(0);
      }
      uVar2 = *(ulong *)(puStack_a8 + 0x10);
      param_3 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar2) {
        puVar11 = (undefined *)0x1;
        puVar4 = param_3;
        FUN_101d53294(1 < *(ulong *)(puStack_a8 + 0x18));
      }
      *(undefined **)(puStack_a8 + 0x10) = param_3;
      *(undefined **)(puStack_a8 + uVar2 * 8 + 0x20) = puVar7;
      puVar8 = puStack_a8;
      puVar9 = puVar1;
    } while (puVar1 != puVar13);
  }
LAB_101d861d0:
  uVar12 = uStack_c0;
  uVar10 = uStack_c0;
  func_0x000107c61174();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar12;
  }
  func_0x000107c60e78();
  uStack_e8 = uVar12;
  pcStack_d8 = FUN_101d86234;
  puStack_120 = unaff_x26;
  puStack_118 = param_3;
  puStack_110 = puVar7;
  uStack_108 = uVar14;
  puStack_100 = puVar13;
  puStack_f8 = param_2;
  puStack_f0 = puVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001000d224c(auStack_148);
  func_0x0001000a8868(auStack_148,uStack_130);
  puVar7 = puVar4;
  FUN_101d83a64(puVar4,puVar11);
  func_0x0001000d224c(&uStack_150);
  puVar9 = &UNK_110480c80;
  func_0x000107c613fc(&UNK_110480c80,0x28,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar10;
  *(undefined **)(puVar9 + 0x18) = puVar4;
  *(undefined **)(puVar9 + 0x20) = puVar11;
  puVar13 = &UNK_110480ca8;
  func_0x000107c613fc(&UNK_110480ca8,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = 0x101d892fc;
  *(undefined **)(puVar13 + 0x18) = puVar9;
  func_0x000107c61174(uVar10);
  func_0x000107c61434(puVar4);
  func_0x000107c61434(puVar11);
  uVar12 = 0x112e2aaa8;
  func_0x0001000285a8(0x112e2aaa8,&UNK_10da13478);
  uVar10 = uStack_150;
  func_0x000100775264(uStack_150,1,FUN_101d89308,puVar13,uVar12);
  func_0x000107c61574(puVar7);
  func_0x000107c615e8(uStack_150);
  func_0x000107c61574(puVar13);
  func_0x0001000834e4(auStack_148);
  return uVar10;
}



/* Entry: 101d86234; end: 101d8636f;  */

undefined8 FUN_101d86234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = param_2;
  FUN_101d83a64(param_2,param_3);
  func_0x0001000d224c(&uStack_80);
  puVar2 = &UNK_110480c80;
  func_0x000107c613fc(&UNK_110480c80,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar3 = &UNK_110480ca8;
  func_0x000107c613fc(&UNK_110480ca8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d892fc;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  uVar4 = 0x112e2aaa8;
  func_0x0001000285a8(0x112e2aaa8,&UNK_10da13478);
  uVar5 = uStack_80;
  func_0x000100775264(uStack_80,1,FUN_101d89308,puVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_78);
  return uVar5;
}



/* Entry: 101d86370; end: 101d863bb;  */

undefined8 FUN_101d86370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  return param_1;
}



/* Entry: 101d863bc; end: 101d8672f;  */

undefined8
FUN_101d863bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  lVar1 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_2;
    func_0x000101d86594(param_2,param_1,param_5);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1104808c0;
    func_0x000107c613fc(&UNK_1104808c0,0x20,7);
    *(long *)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar3 = &UNK_1104808e8;
    func_0x000107c613fc(&UNK_1104808e8,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101d89058;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c6157c(param_4);
    func_0x000107c61434(param_3);
    uVar4 = 0;
    func_0x0001048898b8(0,1,0x101d89078,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar3);
    func_0x0001000d224c(&uStack_70);
    puVar2 = &UNK_110480910;
    func_0x000107c613fc(&UNK_110480910,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar3 = &UNK_110480938;
    func_0x000107c613fc(&UNK_110480938,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101d89090;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_2);
    uVar5 = 0x112e2aab0;
    func_0x0001000285a8(0x112e2aab0,&UNK_10da13480);
    uVar6 = uStack_70;
    func_0x000100775264(uStack_70,1,FUN_101d890c4,puVar3,uVar5);
    func_0x000107c61574(uVar4);
    func_0x000107c615e8(uStack_70);
    func_0x000107c61574(puVar3);
  }
  return uVar6;
}



/* Entry: 101d86730; end: 101d86b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d86730(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
  }
  if ((long)uVar2 < 1) {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  else {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      puVar7 = (undefined1 *)0x112d51a30;
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000101d84e94();
      puVar8 = &UNK_110480de0;
      func_0x000107c613f8(&UNK_110480de0,puVar7,0,0);
      *puVar7 = 0;
      func_0x00010488904c();
      func_0x000107c614ac(puVar8);
    }
    else {
      func_0x000107c615e8();
      uVar3 = 0x112d51a30;
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000104888f7c();
      if (param_1 >> 0x3e == 0) {
        uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar2 = param_1 & 0xffffffffffffff8;
        if ((param_1 & 0x8000000000000000) != 0) {
          uVar2 = param_1;
        }
        func_0x000107c60480();
      }
      if (uVar2 != 0) {
        if ((long)uVar2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d86b64);
          (*pcVar1)();
        }
        if ((param_1 & 0xc000000000000001) == 0) {
          puVar12 = (undefined8 *)(param_1 + 0x20);
          do {
            uVar10 = *puVar12;
            puVar9 = &UNK_1104806b8;
            func_0x000107c613fc(&UNK_1104806b8,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar8 = &UNK_1104809d8;
            func_0x000107c613fc(&UNK_1104809d8,0x20,7);
            *(undefined **)(puVar8 + 0x10) = puVar9;
            *(undefined8 *)(puVar8 + 0x18) = uVar10;
            puVar9 = &UNK_110480a00;
            func_0x000107c613fc(&UNK_110480a00,0x20,7);
            *(undefined8 *)(puVar9 + 0x10) = 0x101d893f4;
            *(undefined **)(puVar9 + 0x18) = puVar8;
            func_0x000107c61174();
            func_0x000107c61174();
            uVar6 = 0x112d62370;
            func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
            uVar5 = 0;
            func_0x0001048898b8(0,1,FUN_101d893c8,puVar9,uVar6);
            func_0x000107c61574(puVar9);
            puVar9 = &UNK_1104806b8;
            func_0x000107c613fc(&UNK_1104806b8,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar8 = &UNK_110480a28;
            func_0x000107c613fc(&UNK_110480a28,0x20,7);
            *(undefined **)(puVar8 + 0x10) = puVar9;
            *(undefined8 *)(puVar8 + 0x18) = uVar10;
            func_0x000107c61174(uVar10);
            uVar6 = 0;
            func_0x0001048898b8(0,1,0x101d893dc,puVar8,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(uVar3);
            func_0x000107c61574(uVar5);
            func_0x000107c61574(puVar8);
            func_0x000107c61170(uVar10);
            uVar2 = uVar2 - 1;
            uVar3 = uVar6;
            puVar12 = puVar12 + 1;
          } while (uVar2 != 0);
        }
        else {
          uVar11 = 0;
          do {
            uVar4 = uVar11;
            FUN_101d6ffd4(uVar11,param_1);
            uVar11 = uVar11 + 1;
            puVar9 = &UNK_1104806b8;
            func_0x000107c613fc(&UNK_1104806b8,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar8 = &UNK_110480960;
            func_0x000107c613fc(&UNK_110480960,0x20,7);
            *(undefined **)(puVar8 + 0x10) = puVar9;
            *(ulong *)(puVar8 + 0x18) = uVar4;
            puVar9 = &UNK_110480988;
            func_0x000107c613fc(&UNK_110480988,0x20,7);
            *(code **)(puVar9 + 0x10) = FUN_101d890fc;
            *(undefined **)(puVar9 + 0x18) = puVar8;
            func_0x000107c615f0(uVar4);
            uVar6 = 0x112d62370;
            func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
            uVar5 = 0;
            func_0x0001048898b8(0,1,FUN_101d8911c,puVar9,uVar6);
            func_0x000107c61574(puVar9);
            puVar9 = &UNK_1104806b8;
            func_0x000107c613fc(&UNK_1104806b8,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar8 = &UNK_1104809b0;
            func_0x000107c613fc(&UNK_1104809b0,0x20,7);
            *(undefined **)(puVar8 + 0x10) = puVar9;
            *(ulong *)(puVar8 + 0x18) = uVar4;
            func_0x000107c615f0(uVar4);
            uVar6 = 0;
            func_0x0001048898b8(0,1,FUN_101d89144,puVar8,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(uVar3);
            func_0x000107c61574(uVar5);
            func_0x000107c61574(puVar8);
            func_0x000107c615e8(uVar4);
            uVar3 = uVar6;
          } while (uVar2 != uVar11);
        }
      }
    }
  }
  return;
}



/* Entry: 101d86b64; end: 101d86bcb;  */

undefined8 FUN_101d86b64(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101d8333c(param_1,param_2);
  func_0x0001000834e4(auStack_58);
  return param_1;
}



/* Entry: 101d86bcc; end: 101d86d13;  */

void FUN_101d86bcc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  char cStack_49;
  ulong uStack_48;
  
  uVar1 = param_1;
  func_0x000103fbd1e8();
  if ((uVar1 & 1) == 0) {
    uStack_48 = param_1;
    func_0x000107c614b0(param_1);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    pcVar3 = &cStack_49;
    func_0x000107c6147c(pcVar3,&uStack_48,uVar2,&UNK_110480de0,6);
    if (((int)pcVar3 != 0) && (cStack_49 == '\b')) {
      func_0x0001000d224c(&uStack_48);
      uVar1 = uStack_48;
      if (uStack_48 != 0) {
        uVar4 = uStack_48;
        func_0x000107c3e604();
        func_0x000107c615e8(uVar1);
        if (0 < (long)uVar4) {
          uStack_48 = param_1;
          func_0x000107c614b0(param_1);
          pcVar3 = &cStack_49;
          func_0x000107c6147c(pcVar3,&uStack_48,uVar2,&UNK_110480de0,6);
          if ((((int)pcVar3 != 0) && (cStack_49 == '\b')) && (param_3 < (long)uVar4))
          goto LAB_101d86bfc;
        }
      }
    }
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  else {
LAB_101d86bfc:
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x00010488904c(param_1);
  }
  return;
}



/* Entry: 101d86d14; end: 101d86e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d86d14(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  puVar2 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar2,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112e2aa58);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&puStack_78);
    func_0x000107c61574(uVar3);
    puVar1 = puStack_78;
    func_0x000107c614f0(puStack_78);
    func_0x000107c42950(param_2);
    func_0x000107c61180();
    uVar3 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    pcVar5 = *(code **)(lStack_70 + 8);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar3,puVar2,uVar4,puVar1,lStack_70);
    func_0x000107c615e8(puStack_78);
    func_0x000107c6142c(puVar2);
    func_0x000107c6142c(uVar4);
  }
  puVar1 = PTR_PTR_1126a94e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_78 = puVar1;
  func_0x000100b60084(&puStack_78);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101d86e64; end: 101d870a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d86e64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 auStack_a0 [6];
  undefined *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  auStack_a0[0] = 0;
  uVar2 = 0;
  FUN_101d832b0(0);
  puVar7 = auStack_a0;
  func_0x000103fbcd10(&uStack_78,param_1,puVar7,0,uVar2);
  puVar3 = PTR_PTR_1126a94e0;
  func_0x000107c610f8(PTR_PTR_1126a94e0);
  func_0x000107c45e78();
  func_0x0001000d224c(&uStack_78);
  lVar1 = CONCAT44(uStack_74,uStack_78);
  if (lVar1 != 0) {
    func_0x000107c4a59c(lVar1);
    func_0x000107c615e8(lVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c56ac0(puVar3);
  func_0x000103fbd0c8(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar7);
  func_0x000107c5662c(puVar3);
  func_0x000107c61170(param_1);
  puVar5 = PTR_PTR_1126a94e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54654();
  puVar7 = &uStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112e2aa58);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_3);
    func_0x0001000d224c(&puStack_88);
    func_0x000107c61574(uVar2);
    puVar6 = puStack_88;
    func_0x000107c614f0();
    func_0x000107c42950(param_4);
    func_0x000107c61180();
    uVar2 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
    func_0x000107c61428(param_5 + 0x10,auStack_a0,0,0);
    uVar8 = *(undefined8 *)(param_5 + 0x10);
    pcVar9 = *(code **)(lStack_80 + 0x20);
    func_0x000107c61434(uVar8);
    (*pcVar9)(uVar2,puVar7,uVar8,0,puVar6,lStack_80);
    func_0x000107c615e8(puStack_88);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(uVar8);
  }
  puStack_88 = puVar5;
  func_0x000100b60084(&puStack_88);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101d870a8; end: 101d87103; -[_TtC40SCMemPlatBackupTranscodeStepServicesImpl13TranscodeStep transcodeWithStepData:] */

void FUN_101d870a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101d851a4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d87104; end: 101d8710b; -[_TtC40SCMemPlatBackupTranscodeStepServicesImpl13TranscodeStep shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101d87104(void)

{
  return 0;
}



/* Entry: 101d8710c; end: 101d87117; -[_TtC40SCMemPlatBackupTranscodeStepServicesImpl13TranscodeStep pushToValdiMarshaller:] */

void FUN_101d8710c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105f5fe80(param_3,param_1);
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 101d87118; end: 101d87133;  */

void FUN_101d87118(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d85a98(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d87134; end: 101d8713f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d87134(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *unaff_x26;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  puVar16 = *(undefined **)(unaff_x20 + 0x10);
  puStack_b8 = *(undefined **)(unaff_x20 + 0x18);
  puVar12 = *(undefined **)(unaff_x20 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  uStack_c0 = param_1;
  if ((ulong)param_2 >> 0x3e == 0) {
    puStack_b0 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    puVar14 = *(undefined **)(puStack_b0 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    puVar14 = puStack_b0;
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar14 = param_2;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (puVar14 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puStack_b0 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d85e18);
            (*pcVar3)();
          }
          puVar4 = *(undefined **)(param_2 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
          puVar10 = puVar8;
        }
        else {
          puVar4 = puVar11;
          puVar10 = param_2;
          FUN_101d6ffd4();
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d85e14);
          (*pcVar3)();
        }
        puVar5 = puVar4;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) break;
        func_0x000107c61170(puVar4);
        unaff_x26 = puVar11 + 1;
        puVar8 = puVar10;
        puVar11 = unaff_x26;
        if (puVar1 == puVar14) goto LAB_101d85e40;
      }
      unaff_x26 = puVar5;
      puStack_c8 = puVar12;
      func_0x000107c5faec();
      puVar8 = puVar10;
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      puVar12 = puVar7;
      func_0x000107c61558();
      puVar11 = puVar7;
      if (((ulong)puVar12 & 1) == 0) {
        puVar8 = (undefined *)(*(long *)(puVar7 + 0x10) + 1);
        puVar11 = (undefined *)0x0;
        func_0x0001000d182c(0,puVar8,1,puVar7);
      }
      uVar15 = *(ulong *)(puVar11 + 0x10);
      puVar12 = (undefined *)(uVar15 + 1);
      puVar7 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar15) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        puVar8 = puVar12;
        func_0x0001000d182c(puVar7,puVar12,1,puVar11);
      }
      *(undefined **)(puVar7 + 0x10) = puVar12;
      *(undefined **)(puVar7 + uVar15 * 0x10 + 0x20) = unaff_x26;
      *(undefined **)(puVar7 + uVar15 * 0x10 + 0x28) = puVar10;
      puVar11 = puVar1;
      puVar12 = puStack_c8;
    } while (puVar1 != puVar14);
  }
LAB_101d85e40:
  uVar15 = (ulong)param_2 & 0xc000000000000001;
  func_0x000107c61428(puVar16 + 0x10,auStack_80,1,0);
  uVar13 = *(undefined8 *)(puVar16 + 0x10);
  *(undefined **)(puVar16 + 0x10) = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c6142c(uVar13);
  puVar4 = puStack_b8;
  puVar8 = auStack_98;
  puVar11 = (undefined *)0x0;
  func_0x000107c61428((long)puStack_b8 + 0x10,puVar8,0,0);
  lVar6 = (long)puVar4 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    func_0x000107c6142c(puVar7);
    puVar12 = puVar8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar13 = *(undefined8 *)(lVar6 + _DAT_112e2aa58);
    func_0x000107c6157c(uVar13);
    func_0x000107c61170(lVar6);
    func_0x0001000d224c(&puStack_a8);
    func_0x000107c61574(uVar13);
    puVar4 = puStack_a8;
    puVar16 = puStack_a8;
    func_0x000107c614f0();
    func_0x000107c42950();
    func_0x000107c61180();
    unaff_x26 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170(puVar12);
    puVar12 = puVar8;
    puVar11 = puVar7;
    (**(code **)(lStack_a0 + 0x18))(unaff_x26,puVar8,puVar7,puVar16,lStack_a0);
    func_0x000107c6142c(puVar7);
    func_0x000107c615e8(puVar4);
    func_0x000107c6142c(puVar8);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar14 != (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    do {
      while( true ) {
        if (uVar15 == 0) {
          if (*(undefined **)(puStack_b0 + 0x10) <= puVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d86228);
            (*pcVar3)();
          }
          puVar7 = *(undefined **)(param_2 + (long)puVar4 * 8 + 0x20);
          func_0x000107c61174();
          unaff_x26 = puVar12;
        }
        else {
          puVar7 = puVar4;
          unaff_x26 = param_2;
          FUN_101d6ffd4();
        }
        puVar10 = puVar4 + 1;
        if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d86224);
          (*pcVar3)();
        }
        puVar12 = puVar7;
        func_0x000107c5b1b0();
        func_0x000107c61180();
        if (puVar12 != (undefined *)0x0) break;
        puVar16 = (undefined *)0x0;
        unaff_x26 = (undefined *)0xf000000000000000;
LAB_101d85fec:
        puVar12 = unaff_x26;
        func_0x0001000b44c0(puVar16);
        puVar16 = puVar8;
        func_0x000107c61558();
        puStack_a8 = puVar8;
        if (((ulong)puVar16 & 1) == 0) {
          puVar12 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
          puVar11 = (undefined *)0x1;
          FUN_101d53294(0);
        }
        uVar2 = *(ulong *)(puStack_a8 + 0x10);
        puVar16 = (undefined *)(uVar2 + 1);
        if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar2) {
          puVar11 = (undefined *)0x1;
          puVar12 = puVar16;
          FUN_101d53294(1 < *(ulong *)(puStack_a8 + 0x18));
        }
        *(undefined **)(puStack_a8 + 0x10) = puVar16;
        *(undefined **)(puStack_a8 + uVar2 * 8 + 0x20) = puVar7;
        puVar4 = puVar10;
        puVar8 = puStack_a8;
        if (puVar10 == puVar14) goto LAB_101d86080;
      }
      puVar16 = puVar12;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar12);
      if (0xe < (ulong)unaff_x26 >> 0x3c) goto LAB_101d85fec;
      func_0x000107c61170(puVar7);
      func_0x0001000b44c0(puVar16,unaff_x26);
      puVar12 = (undefined *)0xf000000000000000;
      func_0x0001000b44c0(0);
      puVar4 = puVar4 + 1;
    } while (puVar10 != puVar14);
  }
LAB_101d86080:
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_b8 = puVar8;
  if (puVar14 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      while( true ) {
        if (uVar15 == 0) {
          if (*(undefined **)(puStack_b0 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d86230);
            (*pcVar3)();
          }
          puVar7 = *(undefined **)(param_2 + (long)puVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar8;
          puVar12 = param_2;
          FUN_101d6ffd4();
        }
        puVar10 = puVar8 + 1;
        if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d8622c);
          (*pcVar3)();
        }
        puVar16 = puVar7;
        func_0x000107c5b1b0();
        func_0x000107c61180();
        if (puVar16 != (undefined *)0x0) break;
        unaff_x26 = (undefined *)0x0;
        puVar12 = (undefined *)0xf000000000000000;
LAB_101d860a4:
        func_0x000107c61170(puVar7);
        func_0x0001000b44c0(unaff_x26);
        puVar16 = puVar8 + 1;
        puVar8 = puVar16;
        if (puVar10 == puVar14) goto LAB_101d861d0;
      }
      unaff_x26 = puVar16;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar16);
      if (0xe < (ulong)puVar12 >> 0x3c) goto LAB_101d860a4;
      func_0x0001000b44c0(unaff_x26,puVar12);
      puVar12 = (undefined *)0xf000000000000000;
      func_0x0001000b44c0(0);
      puVar8 = puVar4;
      func_0x000107c61558();
      puStack_a8 = puVar4;
      if (((ulong)puVar8 & 1) == 0) {
        puVar12 = (undefined *)(*(long *)(puVar4 + 0x10) + 1);
        puVar11 = (undefined *)0x1;
        FUN_101d53294(0);
      }
      uVar2 = *(ulong *)(puStack_a8 + 0x10);
      puVar16 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar2) {
        puVar11 = (undefined *)0x1;
        puVar12 = puVar16;
        FUN_101d53294(1 < *(ulong *)(puStack_a8 + 0x18));
      }
      *(undefined **)(puStack_a8 + 0x10) = puVar16;
      *(undefined **)(puStack_a8 + uVar2 * 8 + 0x20) = puVar7;
      puVar4 = puStack_a8;
      puVar8 = puVar10;
    } while (puVar10 != puVar14);
  }
LAB_101d861d0:
  uVar13 = uStack_c0;
  uVar9 = uStack_c0;
  func_0x000107c61174();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar13;
  }
  func_0x000107c60e78();
  uStack_e8 = uVar13;
  pcStack_d8 = FUN_101d86234;
  puStack_120 = unaff_x26;
  puStack_118 = puVar16;
  puStack_110 = puVar7;
  uStack_108 = uVar15;
  puStack_100 = puVar14;
  puStack_f8 = param_2;
  puStack_f0 = puVar4;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001000d224c(auStack_148);
  func_0x0001000a8868(auStack_148,uStack_130);
  puVar14 = puVar12;
  FUN_101d83a64(puVar12,puVar11);
  func_0x0001000d224c(&uStack_150);
  puVar8 = &UNK_110480c80;
  func_0x000107c613fc(&UNK_110480c80,0x28,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar9;
  *(undefined **)(puVar8 + 0x18) = puVar12;
  *(undefined **)(puVar8 + 0x20) = puVar11;
  puVar16 = &UNK_110480ca8;
  func_0x000107c613fc(&UNK_110480ca8,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = 0x101d892fc;
  *(undefined **)(puVar16 + 0x18) = puVar8;
  func_0x000107c61174(uVar9);
  func_0x000107c61434(puVar12);
  func_0x000107c61434(puVar11);
  uVar13 = 0x112e2aaa8;
  func_0x0001000285a8(0x112e2aaa8,&UNK_10da13478);
  uVar9 = uStack_150;
  func_0x000100775264(uStack_150,1,FUN_101d89308,puVar16,uVar13);
  func_0x000107c61574(puVar14);
  func_0x000107c615e8(uStack_150);
  func_0x000107c61574(puVar16);
  func_0x0001000834e4(auStack_148);
  return uVar9;
}



/* Entry: 101d87140; end: 101d87183;  */

void FUN_101d87140(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  return;
}



/* Entry: 101d87184; end: 101d8718b;  */

undefined8 FUN_101d87184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = param_2;
  FUN_101d83a64(param_2,param_3);
  func_0x0001000d224c(&uStack_80);
  puVar2 = &UNK_110480c80;
  func_0x000107c613fc(&UNK_110480c80,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar3 = &UNK_110480ca8;
  func_0x000107c613fc(&UNK_110480ca8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d892fc;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  uVar4 = 0x112e2aaa8;
  func_0x0001000285a8(0x112e2aaa8,&UNK_10da13478);
  uVar5 = uStack_80;
  func_0x000100775264(uStack_80,1,FUN_101d89308,puVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_78);
  return uVar5;
}



/* Entry: 101d8718c; end: 101d8719f;  */

void FUN_101d8718c(void)

{
  FUN_101d871ac();
  return;
}



/* Entry: 101d871a0; end: 101d871ab;  */

undefined8 FUN_101d871a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,uVar7,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000101d86594(param_2,param_1,uVar7);
    func_0x000107c61170(lVar2);
    puVar4 = &UNK_1104808c0;
    func_0x000107c613fc(&UNK_1104808c0,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    puVar5 = &UNK_1104808e8;
    func_0x000107c613fc(&UNK_1104808e8,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_101d89058;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c6157c(lVar1);
    func_0x000107c61434(param_3);
    uVar6 = 0;
    func_0x0001048898b8(0,1,0x101d89078,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar5);
    func_0x0001000d224c(&uStack_70);
    puVar4 = &UNK_110480910;
    func_0x000107c613fc(&UNK_110480910,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    puVar5 = &UNK_110480938;
    func_0x000107c613fc(&UNK_110480938,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_101d89090;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_2);
    uVar3 = 0x112e2aab0;
    func_0x0001000285a8(0x112e2aab0,&UNK_10da13480);
    uVar7 = uStack_70;
    func_0x000100775264(uStack_70,1,FUN_101d890c4,puVar5,uVar3);
    func_0x000107c61574(uVar6);
    func_0x000107c615e8(uStack_70);
    func_0x000107c61574(puVar5);
  }
  return uVar7;
}



/* Entry: 101d871ac; end: 101d871df;  */

void FUN_101d871ac(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 101d871e0; end: 101d871e7;  */

undefined8 FUN_101d871e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101d8333c(param_1,param_2);
  func_0x0001000834e4(auStack_58);
  return param_1;
}



/* Entry: 101d871e8; end: 101d87217;  */

void FUN_101d871e8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 101d87218; end: 101d87233;  */

void FUN_101d87218(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d86bcc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d87234; end: 101d8723f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d87234(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  puVar4 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112e2aa58);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&puStack_78);
    func_0x000107c61574(uVar5);
    puVar3 = puStack_78;
    func_0x000107c614f0(puStack_78);
    func_0x000107c42950(uVar6);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x000107c61428(lVar1 + 0x10,auStack_90,0,0);
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    pcVar7 = *(code **)(lStack_70 + 8);
    func_0x000107c61434(uVar6);
    (*pcVar7)(uVar5,puVar4,uVar6,puVar3,lStack_70);
    func_0x000107c615e8(puStack_78);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(uVar6);
  }
  puVar3 = PTR_PTR_1126a94e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_78 = puVar3;
  func_0x000100b60084(&puStack_78);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101d87240; end: 101d87267;  */

void FUN_101d87240(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d87268; end: 101d87277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d87268(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  undefined4 auStack_a0 [6];
  undefined *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  auStack_a0[0] = 0;
  uVar3 = 0;
  FUN_101d832b0(0,*(undefined8 *)(unaff_x20 + 0x10));
  puVar9 = auStack_a0;
  func_0x000103fbcd10(&uStack_78,param_1,puVar9,0,uVar3);
  puVar4 = PTR_PTR_1126a94e0;
  func_0x000107c610f8(PTR_PTR_1126a94e0);
  func_0x000107c45e78();
  func_0x0001000d224c(&uStack_78);
  lVar2 = CONCAT44(uStack_74,uStack_78);
  if (lVar2 != 0) {
    func_0x000107c4a59c(lVar2);
    func_0x000107c615e8(lVar2);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c56ac0(puVar4);
  func_0x000103fbd0c8(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar9);
  func_0x000107c5662c(puVar4);
  func_0x000107c61170(param_1);
  puVar6 = PTR_PTR_1126a94e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54654();
  puVar9 = &uStack_78;
  func_0x000107c61428(lVar7 + 0x10,puVar9,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(lVar7 + _DAT_112e2aa58);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar7);
    func_0x0001000d224c(&puStack_88);
    func_0x000107c61574(uVar3);
    puVar8 = puStack_88;
    func_0x000107c614f0();
    func_0x000107c42950(uVar10);
    func_0x000107c61180();
    uVar3 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    func_0x000107c61428(lVar1 + 0x10,auStack_a0,0,0);
    uVar10 = *(undefined8 *)(lVar1 + 0x10);
    pcVar11 = *(code **)(lStack_80 + 0x20);
    func_0x000107c61434(uVar10);
    (*pcVar11)(uVar3,puVar9,uVar10,0,puVar8,lStack_80);
    func_0x000107c615e8(puStack_88);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(uVar10);
  }
  puStack_88 = puVar6;
  func_0x000100b60084(&puStack_88);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101d87278; end: 101d87347;  */

void FUN_101d87278(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puStack_38;
  
  func_0x0001000d224c(&puStack_38);
  if (puStack_38 == (undefined1 *)0x0) {
    func_0x000101d84e94();
    puVar2 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *param_1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
  }
  else {
    puVar1 = puStack_38;
    func_0x000107c49a94();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x000101d84e94();
      puVar2 = &UNK_110480de0;
      func_0x000107c613f8(&UNK_110480de0,puVar1,0,0);
      *puVar1 = 5;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar2);
    }
    else {
      func_0x000100b60084();
    }
    func_0x000107c615e8(puStack_38);
  }
  return;
}



/* Entry: 101d87348; end: 101d8773f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d87348(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *apuStack_68 [2];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar5 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puVar5 = *(undefined1 **)(param_1 + _DAT_112e2aa18);
    func_0x000107c6157c(puVar5);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(apuStack_68);
    func_0x000107c61574();
    if (apuStack_68[0] != (undefined1 *)0x0) {
      func_0x000107c5fadc(param_3,param_4);
      puVar5 = apuStack_68[0];
      func_0x000107c431bc();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar5 == (undefined1 *)0x0) {
        func_0x000101d84e94();
        puVar2 = &UNK_110480de0;
        func_0x000107c613f8(&UNK_110480de0,param_3,0,0);
        *param_3 = 2;
        func_0x00010488ade0();
        func_0x000107c614ac(puVar2);
      }
      else {
        puVar4 = apuStack_68[0];
        if (*(long *)(param_5 + 0x10) == 0) {
          func_0x000107c431cc();
          func_0x000107c61180();
          uVar1 = 0;
          FUN_101d7b40c(0);
          puVar3 = puVar4;
          func_0x000107c5fc54(puVar4,uVar1);
        }
        else {
          func_0x000107c5fc48(param_5,PTR___sSSN_11034da80);
          func_0x000107c431d0();
          func_0x000107c61180();
          func_0x000107c61170(param_5);
          uVar1 = 0;
          FUN_101d7b40c(0);
          puVar3 = puVar4;
          func_0x000107c5fc54(puVar4,uVar1);
        }
        func_0x000107c61170(puVar4);
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar4 = *(undefined1 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined1 *)0x7fffffffffffffff < puVar3) {
            puVar4 = puVar3;
          }
          func_0x000107c60480();
        }
        if (puVar4 == (undefined1 *)0x0) {
          func_0x000107c6142c();
          func_0x000101d84e94();
          puVar2 = &UNK_110480de0;
          func_0x000107c613f8(&UNK_110480de0,puVar3,0,0);
          *puVar3 = 3;
          func_0x00010488ade0();
          func_0x000107c614ac(puVar2);
          func_0x000107c615e8(apuStack_68[0]);
          func_0x000107c61170(puVar5);
          return;
        }
        func_0x000107c61174(puVar5);
        func_0x000100b60084(apuStack_68);
        func_0x000107c6142c(puVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar5);
      }
      func_0x000107c615e8(apuStack_68[0]);
      return;
    }
  }
  func_0x000101d84e94();
  puVar2 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,puVar5,0,0);
  *puVar5 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar2);
  return;
}



/* Entry: 101d87740; end: 101d877df;  */

undefined8 FUN_101d87740(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c4a274(param_4);
    FUN_101d877e0(param_3,param_4,uVar1);
    func_0x000107c61170(param_2);
  }
  return param_3;
}



/* Entry: 101d877e0; end: 101d87953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d877e0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e28af8,&UNK_10da13490);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_1104806b8;
  func_0x000107c613fc(&UNK_1104806b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110480c08;
  func_0x000107c613fc(&UNK_110480c08,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  puVar3[0x28] = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  uStack_68 = 0x101d89290;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110480c20;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(uStack_58);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_58);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  return uVar5;
}



/* Entry: 101d87954; end: 101d879d3;  */

undefined8 FUN_101d87954(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101d879d4(uVar1);
    func_0x000107c61170(param_2);
  }
  return uVar1;
}



/* Entry: 101d879d4; end: 101d87b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d879d4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480();
  }
  if ((long)uVar1 < 1) {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    func_0x0001000d224c(&uStack_48);
    puVar3 = &UNK_1104806b8;
    func_0x000107c613fc(&UNK_1104806b8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110480aa0;
    func_0x000107c613fc(&UNK_110480aa0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar2;
    *(ulong *)(puVar4 + 0x20) = param_1;
    pcStack_58 = FUN_101d89234;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110480ab8;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_50;
    func_0x000107c6157c(lVar2);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e590(uStack_48);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(uStack_48);
    func_0x000107c6157c(*(undefined8 *)(lVar2 + 0x10));
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101d87b78; end: 101d87bf3;  */

undefined8 FUN_101d87b78(long param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    (*param_3)(param_2);
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 101d87bf4; end: 101d87e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d87bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uStack_71;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = param_1;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar6 = (undefined1 *)0x112e2aab8;
    func_0x0001000285a8(0x112e2aab8,&UNK_10da13488);
    func_0x000101d84e94();
    puVar9 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,puVar6,0,0);
    uVar12 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    uVar10 = param_2;
    func_0x000107c61170(lVar1);
    func_0x000107c5b1b0();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      lVar3 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      func_0x0001000d224c(&uStack_70);
      lVar1 = lStack_68;
      uVar5 = uStack_70;
      uVar8 = uStack_70;
      func_0x000107c614f0(uStack_70);
      lVar4 = lVar3;
      uVar11 = uVar10;
      func_0x000103fbfb2c(lVar3,uVar10,uVar8,lVar1);
      func_0x000107c615e8(uVar5);
      if (((uint)uVar11 & 0xff) != 1) {
        func_0x0001000d224c(&uStack_70);
        uVar5 = uStack_70;
        func_0x000107c614f0(uStack_70);
        lVar1 = lVar4;
        (**(code **)(lStack_68 + 8))(lVar4,lVar2,param_2,uVar5,lStack_68);
        func_0x000107c6142c(param_2);
        func_0x000107c615e8(uStack_70);
        uVar5 = 0x112d62370;
        func_0x0001000285a8(0x112d62370,&UNK_10d9daed0);
        uVar8 = 0;
        func_0x000100775264(0,1,FUN_101d88164,0,uVar5);
        func_0x000107c61574(lVar1);
        puVar9 = (undefined *)0x0;
        func_0x000104889f74(0,1,FUN_101d88190,0);
        func_0x000107c61574(uVar8);
        func_0x000101d58f7c(lVar4,uVar11);
        func_0x00010006c090(lVar3,uVar10);
        return puVar9;
      }
      uStack_71 = (undefined1)lVar4;
      uVar5 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar5 != 0) {
        FUN_101d58f10();
        func_0x000107c61658(&uStack_71,&UNK_11072c980,uVar5);
      }
      func_0x000107c6142c(param_2);
      func_0x00010006c090(lVar3,uVar10);
    }
    puVar6 = (undefined1 *)0x112e2aab8;
    func_0x0001000285a8(0x112e2aab8,&UNK_10da13488);
    func_0x000101d84e94();
    puVar9 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,puVar6,0,0);
    uVar12 = 10;
  }
  *puVar6 = uVar12;
  puVar7 = puVar9;
  func_0x00010488904c();
  func_0x000107c614ac(puVar9);
  return puVar7;
}



/* Entry: 101d87e9c; end: 101d87f53;  */

void FUN_101d87e9c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c61174(lVar1);
      FUN_101d87f54(param_3,lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 101d87f54; end: 101d88163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d87f54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  long lStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  puVar4 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    puVar3 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000101d84e94();
    puVar4 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,puVar3,0,0);
    *puVar3 = 0xd;
    puVar8 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    uVar7 = 0x18;
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar2 = param_2;
      func_0x000107c5ee30();
      func_0x000107c61170(param_2);
      lVar9 = lVar2;
      func_0x000107c5ee20(lVar2,uVar7);
      func_0x00010006c090(lVar2,uVar7);
    }
    func_0x000107c5d560(puStack_80);
    puVar5 = puStack_80;
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    pcStack_60 = FUN_101d89188;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101d58ff0;
    puStack_68 = &UNK_110480a40;
    lStack_58 = lVar1;
    func_0x000107c60bc4(&puStack_80);
    lVar9 = lStack_58;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(lVar9);
    func_0x0001000d224c(&puStack_80);
    puVar8 = puStack_80;
    func_0x000107c5dc64(puVar5);
    func_0x000107c615e8(puVar8);
    func_0x000107c615e8(puVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar5);
    puVar8 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(lVar1);
  }
  return puVar8;
}



/* Entry: 101d88164; end: 101d8818f;  */

void FUN_101d88164(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 101d88190; end: 101d88267;  */

undefined * FUN_101d88190(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  uStack_38 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(&lStack_40,&uStack_38,uVar1,&UNK_1106c51c8,6);
  if ((uVar2 & 1) != 0) {
    if (lStack_40 == 9) {
      uVar6 = 8;
      goto LAB_101d88200;
    }
    func_0x000101d891ac();
  }
  uVar6 = 0xb;
LAB_101d88200:
  puVar3 = (undefined1 *)0x112e2aab8;
  func_0x0001000285a8(0x112e2aab8,&UNK_10da13488);
  func_0x000101d84e94();
  puVar4 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,puVar3,0,0);
  *puVar3 = uVar6;
  puVar5 = puVar4;
  func_0x00010488904c();
  func_0x000107c614ac(puVar4);
  return puVar5;
}



/* Entry: 101d88268; end: 101d882c7;  */

void FUN_101d88268(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    func_0x000101d84e94();
    puVar1 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *param_1 = 0xd;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d882c8; end: 101d88407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d882c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar5 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puVar5 = *(undefined1 **)(param_1 + _DAT_112e2aa18);
    func_0x000107c6157c(puVar5);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574();
    if (lStack_60 != 0) {
      func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
      lVar1 = lStack_60;
      func_0x000107c431d0();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      uVar2 = 0;
      FUN_101d7b40c(0);
      lVar3 = lVar1;
      func_0x000107c5fc54(lVar1,uVar2);
      func_0x000107c61170(lVar1);
      func_0x000100b60084(&lStack_60);
      func_0x000107c6142c(lVar3);
      func_0x000107c615e8(lStack_60);
      return;
    }
  }
  func_0x000101d84e94();
  puVar4 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,puVar5,0,0);
  *puVar5 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 101d88408; end: 101d886cb;  */

void FUN_101d88408(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar8 = (undefined *)*param_2;
  puVar10 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar9 = *(undefined **)(puVar10 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar9 = puVar10;
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar9 = puVar8;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar9 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar10 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d88530);
            (*pcVar4)();
          }
          puVar5 = *(undefined **)(puVar8 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar6;
          param_3 = puVar8;
          FUN_101d6ffd4();
        }
        puVar1 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d8852c);
          (*pcVar4)();
        }
        puVar7 = puVar5;
        func_0x000107c44b8c();
        if (((ulong)puVar7 & 1) != 0) break;
        func_0x000107c61170(puVar5);
        puVar6 = puVar6 + 1;
        if (puVar1 == puVar9) goto LAB_101d8854c;
      }
      puVar6 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        param_3 = (undefined *)(*(long *)(puVar3 + 0x10) + 1);
        FUN_101d53294(0,param_3,1);
      }
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar6 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        param_3 = puVar6;
        FUN_101d53294(1 < *(ulong *)(puVar3 + 0x18),puVar6,1);
      }
      *(undefined **)(puVar3 + 0x10) = puVar6;
      *(undefined **)(puVar3 + uVar2 * 8 + 0x20) = puVar5;
      puVar6 = puVar1;
    } while (puVar1 != puVar9);
  }
LAB_101d8854c:
  if (((long)puVar3 < 0) || (((ulong)puVar3 >> 0x3e & 1) != 0)) {
    puVar8 = puVar3;
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar8 = *(undefined **)(puVar3 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (puVar8 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar3 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar3 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d88670);
            (*pcVar4)();
          }
          puVar6 = *(undefined **)(puVar3 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
          puVar5 = param_3;
        }
        else {
          puVar6 = puVar9;
          puVar5 = puVar3;
          FUN_101d6ffd4();
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d8866c);
          (*pcVar4)();
        }
        puVar7 = puVar6;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (puVar7 != (undefined *)0x0) break;
        func_0x000107c61170(puVar6);
        param_3 = puVar5;
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar8) goto LAB_101d88688;
      }
      puVar9 = puVar7;
      func_0x000107c5faec();
      param_3 = puVar5;
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      puVar6 = puVar10;
      func_0x000107c61558();
      puVar7 = puVar10;
      if (((ulong)puVar6 & 1) == 0) {
        param_3 = (undefined *)(*(long *)(puVar10 + 0x10) + 1);
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,param_3,1,puVar10);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puVar6 = (undefined *)(uVar2 + 1);
      puVar10 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        param_3 = puVar6;
        func_0x0001000d182c(puVar10,puVar6,1,puVar7);
      }
      *(undefined **)(puVar10 + 0x10) = puVar6;
      *(undefined **)(puVar10 + uVar2 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puVar10 + uVar2 * 0x10 + 0x28) = puVar5;
      puVar9 = puVar1;
    } while (puVar1 != puVar8);
  }
LAB_101d88688:
  func_0x000107c61574(puVar3);
  puVar8 = puVar10;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar10);
  *param_1 = puVar8;
  return;
}



/* Entry: 101d886cc; end: 101d88ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d886cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_e8;
  undefined *apuStack_d0 [9];
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar14 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puVar14 = *(undefined1 **)(param_1 + _DAT_112e2aa30);
    func_0x000107c6157c(puVar14);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(apuStack_d0);
    func_0x000107c61574();
    puVar12 = apuStack_d0[0];
    if (apuStack_d0[0] != (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      FUN_101d7b40c();
      func_0x000107c5fc48(param_3,puVar4);
      puVar16 = PTR___swiftEmptySetSingleton_11034f1d8;
      func_0x000107c5fe08(PTR___swiftEmptySetSingleton_11034f1d8,PTR___sSSN_11034da80,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c4434c();
      puVar5 = apuStack_d0[0];
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar16);
      puVar16 = puVar5;
      func_0x000107c5ced4();
      func_0x000107c61180();
      puVar6 = puVar16;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar16);
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar16 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar16 = puVar6;
        }
        func_0x000107c60480();
      }
      puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar16 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (((ulong)puVar6 & 0xc000000000000001) == 0) {
            if (*(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101d88a58);
              (*pcVar2)();
            }
            puVar7 = *(undefined **)(puVar6 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar7 = puVar17;
            puVar4 = puVar6;
            FUN_101d6ffd4();
          }
          bVar3 = SCARRY8((long)puVar17,1);
          puVar17 = puVar17 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d88a54);
            (*pcVar2)();
          }
          puVar8 = puVar7;
          func_0x000107c42370();
          func_0x000107c61180();
          if (puVar8 == (undefined *)0x0) {
            puVar9 = puVar7;
            func_0x000107c4c99c();
            func_0x000107c61180();
            puVar8 = puVar4;
            if (puVar9 != (undefined *)0x0) {
              puVar10 = puVar9;
              func_0x000107c5faec();
              puVar8 = puVar4;
              func_0x000107c61170(puVar9);
              if (*(long *)(param_5 + 0x10) != 0) {
                func_0x000107c6068c(apuStack_d0,*(undefined8 *)(param_5 + 0x28));
                ppuVar11 = apuStack_d0;
                puVar8 = puVar10;
                func_0x000107c5fb58(ppuVar11,puVar10,puVar4);
                func_0x000107c606a8();
                uVar13 = -1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
                uVar15 = (ulong)ppuVar11 & (uVar13 ^ 0xffffffffffffffff);
                if ((*(ulong *)(param_5 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
                  do {
                    puVar1 = (ulong *)(*(long *)(param_5 + 0x30) + uVar15 * 0x10);
                    puVar9 = (undefined *)*puVar1;
                    puVar8 = (undefined *)puVar1[1];
                    if ((puVar9 == puVar10 && puVar8 == puVar4) ||
                       (func_0x000107c605b8(puVar9,puVar8,puVar10,puVar4,0),
                       ((ulong)puVar9 & 1) != 0)) {
                      func_0x000107c61170(puVar7);
                      func_0x000107c6142c(puVar4);
                      puVar4 = puVar8;
                      goto LAB_101d8884c;
                    }
                    uVar15 = uVar15 + 1 & ~uVar13;
                  } while ((*(ulong *)(param_5 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1)
                           != 0);
                }
              }
              func_0x000107c6142c(puVar4);
            }
            puVar4 = puStack_e8;
            func_0x000107c61558();
            puStack_88 = puStack_e8;
            if (((ulong)puVar4 & 1) == 0) {
              puVar8 = (undefined *)(*(long *)(puStack_e8 + 0x10) + 1);
              FUN_101d53294(0,puVar8,1);
            }
            uVar13 = *(ulong *)(puStack_88 + 0x10);
            puVar4 = (undefined *)(uVar13 + 1);
            if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar13) {
              puVar8 = puVar4;
              FUN_101d53294(1 < *(ulong *)(puStack_88 + 0x18),puVar4,1);
            }
            *(undefined **)(puStack_88 + 0x10) = puVar4;
            *(undefined **)(puStack_88 + uVar13 * 8 + 0x20) = puVar7;
            puVar4 = puVar8;
            puStack_e8 = puStack_88;
          }
          else {
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar8);
          }
LAB_101d8884c:
        } while (puVar17 != puVar16);
      }
      func_0x000107c6142c(puVar6);
      apuStack_d0[0] = puStack_e8;
      func_0x000100b60084(apuStack_d0);
      func_0x000107c61574(puStack_e8);
      func_0x000107c615e8(puVar12);
      func_0x000107c61170(puVar5);
      return;
    }
  }
  func_0x000101d84e94();
  puVar12 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,puVar14,0,0);
  *puVar14 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar12);
  return;
}



/* Entry: 101d88ad4; end: 101d88ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d88ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *aplStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  plVar7 = (long *)0x0;
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + _DAT_112e2aa28);
    func_0x000107c6157c(plVar7);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(aplStack_80);
    func_0x000107c61574();
    if (aplStack_80[0] != (long *)0x0) {
      func_0x000107c61428(param_1 + 0x10,aplStack_80,0,0);
      lVar1 = param_1 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar8 = *(undefined8 *)(lVar1 + _DAT_112e2aa68);
        func_0x000107c6157c(uVar8);
        func_0x000107c61170(lVar1);
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        uVar2 = 0;
        FUN_101d7b40c(0);
        func_0x000107c5fc48(param_3,uVar2);
        plVar7 = aplStack_80[0];
        func_0x000107c5ced8();
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        plVar3 = plVar7;
        func_0x0001000b637c();
        func_0x000107c61170(plVar7);
        puVar5 = &UNK_110480af0;
        func_0x000107c613fc(&UNK_110480af0,0x20,7);
        *(long *)(puVar5 + 0x10) = param_1;
        *(undefined8 *)(puVar5 + 0x18) = param_2;
        pcVar9 = *(code **)(*plVar3 + 0x60);
        func_0x000107c6157c(param_1);
        func_0x000107c6157c(param_2);
        uVar2 = 0x101d89240;
        puVar6 = puVar5;
        (*pcVar9)(0x101d89240);
        func_0x000107c61574(plVar3);
        func_0x000107c61574(puVar5);
        uVar4 = uVar2;
        func_0x000107c614f0(uVar2);
        (**(code **)(puVar6 + 0x10))(uVar8,uVar4,puVar6);
        func_0x000107c615e8(aplStack_80[0]);
        func_0x000107c61574(uVar8);
        func_0x000107c615e8(uVar2);
        return;
      }
      func_0x000107c615e8();
      plVar7 = aplStack_80[0];
    }
  }
  func_0x000101d84e94();
  puVar5 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,plVar7,0,0);
  *(undefined1 *)plVar7 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101d88ce8; end: 101d88f13;  */

void FUN_101d88ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar9 = *param_1;
  puVar3 = &UNK_110480b18;
  func_0x000107c613fc(&UNK_110480b18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_110480b40;
  func_0x000107c613fc(&UNK_110480b40,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101d89248;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101d89268;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101d8940c;
  puStack_88 = &UNK_110480b58;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110480b90;
  func_0x000107c613fc(&UNK_110480b90,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_110480bb8;
  func_0x000107c613fc(&UNK_110480bb8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101d89288;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_101d893f0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_110480bd0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",99,0x1b1,0x34,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d88f10);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",99,0x1b4,0x21,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d88f14);
  (*pcVar2)();
}



/* Entry: 101d88f14; end: 101d89057;  */

/* WARNING: Possible PIC construction at 0x000101d88fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d89010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d88fe0) */
/* WARNING: Removing unreachable block (ram,0x000101d88ff4) */

void FUN_101d88f14(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  if (param_1 == (undefined **)0x0) {
    func_0x000101d84e94();
    ppuVar2 = (undefined **)&UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *(undefined1 *)param_1 = 4;
    func_0x00010488ade0();
    param_1 = ppuVar2;
  }
  else {
    func_0x000107c614b0();
    ppuVar1 = param_1;
    func_0x000107c5ed2c();
    ppuVar2 = ppuVar1;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar3 = ppuVar2;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e09198;
    func_0x000107c5faec();
    if ((ppuVar3 == ppuVar2) && (param_2 == lVar4)) {
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c605b8(ppuVar3,param_2,ppuVar2,lVar4,0);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar4);
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x000107c61170(ppuVar1);
        goto code_r0x000107c614ac;
      }
    }
    func_0x000107c3fcb0(ppuVar1);
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 101d89058; end: 101d8908f;  */

void FUN_101d89058(void)

{
  long unaff_x20;
  
  FUN_101d87b78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_101d86730);
  return;
}



/* Entry: 101d89090; end: 101d890c3;  */

undefined1  [16] FUN_101d89090(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10));
  func_0x000107c61434(uVar1);
  return auVar2;
}



/* Entry: 101d890c4; end: 101d890fb;  */

void FUN_101d890c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 101d890fc; end: 101d8911b;  */

void FUN_101d890fc(void)

{
  long unaff_x20;
  
  FUN_101d87b78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_101d87bf4);
  return;
}



/* Entry: 101d8911c; end: 101d89143;  */

void FUN_101d8911c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d89144; end: 101d89187;  */

void FUN_101d89144(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d87e9c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d89188; end: 101d891bf;  */

void FUN_101d89188(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    func_0x000101d84e94();
    puVar1 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *param_1 = 0xd;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d891c0; end: 101d891ff;  */

void FUN_101d891c0(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d89200; end: 101d89233;  */

void FUN_101d89200(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d87740(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d89234; end: 101d89247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d89234(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  long *aplStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar2 = lVar1 + 0x10;
  func_0x000107c61618();
  plVar9 = (long *)0x0;
  if (lVar2 != 0) {
    plVar9 = *(long **)(lVar2 + _DAT_112e2aa28);
    func_0x000107c6157c(plVar9);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(aplStack_80);
    func_0x000107c61574();
    if (aplStack_80[0] != (long *)0x0) {
      func_0x000107c61428(lVar1 + 0x10,aplStack_80,0,0);
      lVar2 = lVar1 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        uVar10 = *(undefined8 *)(lVar2 + _DAT_112e2aa68);
        func_0x000107c6157c(uVar10);
        func_0x000107c61170(lVar2);
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        uVar3 = 0;
        FUN_101d7b40c(0);
        func_0x000107c5fc48(uVar8,uVar3);
        plVar9 = aplStack_80[0];
        func_0x000107c5ced8();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        plVar4 = plVar9;
        func_0x0001000b637c();
        func_0x000107c61170(plVar9);
        puVar6 = &UNK_110480af0;
        func_0x000107c613fc(&UNK_110480af0,0x20,7);
        *(long *)(puVar6 + 0x10) = lVar1;
        *(undefined8 *)(puVar6 + 0x18) = uVar5;
        pcVar11 = *(code **)(*plVar4 + 0x60);
        func_0x000107c6157c(lVar1);
        func_0x000107c6157c(uVar5);
        uVar5 = 0x101d89240;
        puVar7 = puVar6;
        (*pcVar11)(0x101d89240);
        func_0x000107c61574(plVar4);
        func_0x000107c61574(puVar6);
        uVar8 = uVar5;
        func_0x000107c614f0(uVar5);
        (**(code **)(puVar7 + 0x10))(uVar10,uVar8,puVar7);
        func_0x000107c615e8(aplStack_80[0]);
        func_0x000107c61574(uVar10);
        func_0x000107c615e8(uVar5);
        return;
      }
      func_0x000107c615e8();
      plVar9 = aplStack_80[0];
    }
  }
  func_0x000101d84e94();
  puVar6 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,plVar9,0,0);
  *(undefined1 *)plVar9 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar6);
  return;
}



/* Entry: 101d89248; end: 101d89287;  */

void FUN_101d89248(void)

{
  func_0x000100b60084();
  return;
}



/* Entry: 101d89288; end: 101d892a3;  */

/* WARNING: Possible PIC construction at 0x000101d88fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d89010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d88fe0) */
/* WARNING: Removing unreachable block (ram,0x000101d88ff4) */

void FUN_101d89288(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == (undefined **)0x0) {
    func_0x000101d84e94();
    ppuVar2 = (undefined **)&UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,param_1,0,0);
    *(undefined1 *)param_1 = 4;
    func_0x00010488ade0();
    param_1 = ppuVar2;
  }
  else {
    func_0x000107c614b0(param_1,lVar4,*(undefined8 *)(unaff_x20 + 0x18));
    ppuVar1 = param_1;
    func_0x000107c5ed2c();
    ppuVar2 = ppuVar1;
    func_0x000107c42210();
    func_0x000107c61180();
    ppuVar3 = ppuVar2;
    func_0x000107c5faec();
    lVar5 = lVar4;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e09198;
    func_0x000107c5faec();
    if ((ppuVar3 == ppuVar2) && (lVar4 == lVar5)) {
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar5);
    }
    else {
      func_0x000107c605b8(ppuVar3,lVar4,ppuVar2,lVar5,0);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar5);
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x000107c61170(ppuVar1);
        goto code_r0x000107c614ac;
      }
    }
    func_0x000107c3fcb0(ppuVar1);
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 101d892a4; end: 101d892ef;  */

void FUN_101d892a4(code *param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d892f0; end: 101d89307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d892f0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  puVar5 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    puVar5 = *(undefined1 **)(lVar1 + _DAT_112e2aa18);
    func_0x000107c6157c(puVar5);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574();
    if (lStack_60 != 0) {
      func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
      lVar1 = lStack_60;
      func_0x000107c431d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = 0;
      FUN_101d7b40c(0);
      lVar2 = lVar1;
      func_0x000107c5fc54(lVar1,uVar4);
      func_0x000107c61170(lVar1);
      func_0x000100b60084(&lStack_60);
      func_0x000107c6142c(lVar2);
      func_0x000107c615e8(lStack_60);
      return;
    }
  }
  func_0x000101d84e94();
  puVar3 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,puVar5,0,0);
  *puVar5 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar3);
  return;
}



/* Entry: 101d89308; end: 101d89343;  */

void FUN_101d89308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 101d89344; end: 101d89353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d89344(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 *apuStack_68 [2];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  puVar7 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    puVar7 = *(undefined1 **)(lVar1 + _DAT_112e2aa18);
    func_0x000107c6157c(puVar7);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(apuStack_68);
    func_0x000107c61574();
    if (apuStack_68[0] != (undefined1 *)0x0) {
      func_0x000107c5fadc(puVar5,uVar2);
      puVar7 = apuStack_68[0];
      func_0x000107c431bc();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar7 == (undefined1 *)0x0) {
        func_0x000101d84e94();
        puVar3 = &UNK_110480de0;
        func_0x000107c613f8(&UNK_110480de0,puVar5,0,0);
        *puVar5 = 2;
        func_0x00010488ade0();
        func_0x000107c614ac(puVar3);
      }
      else {
        puVar5 = apuStack_68[0];
        if (*(long *)(lVar6 + 0x10) == 0) {
          func_0x000107c431cc();
          func_0x000107c61180();
          uVar2 = 0;
          FUN_101d7b40c(0);
          puVar4 = puVar5;
          func_0x000107c5fc54(puVar5,uVar2);
        }
        else {
          func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
          func_0x000107c431d0();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          uVar2 = 0;
          FUN_101d7b40c(0);
          puVar4 = puVar5;
          func_0x000107c5fc54(puVar5,uVar2);
        }
        func_0x000107c61170(puVar5);
        if ((ulong)puVar4 >> 0x3e == 0) {
          puVar5 = *(undefined1 **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined1 *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined1 *)0x7fffffffffffffff < puVar4) {
            puVar5 = puVar4;
          }
          func_0x000107c60480();
        }
        if (puVar5 == (undefined1 *)0x0) {
          func_0x000107c6142c();
          func_0x000101d84e94();
          puVar3 = &UNK_110480de0;
          func_0x000107c613f8(&UNK_110480de0,puVar4,0,0);
          *puVar4 = 3;
          func_0x00010488ade0();
          func_0x000107c614ac(puVar3);
          func_0x000107c615e8(apuStack_68[0]);
          func_0x000107c61170(puVar7);
          return;
        }
        func_0x000107c61174(puVar7);
        func_0x000100b60084(apuStack_68);
        func_0x000107c6142c(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar7);
      }
      func_0x000107c615e8(apuStack_68[0]);
      return;
    }
  }
  func_0x000101d84e94();
  puVar3 = &UNK_110480de0;
  func_0x000107c613f8(&UNK_110480de0,puVar7,0,0);
  *puVar7 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar3);
  return;
}



/* Entry: 101d89354; end: 101d8938f;  */

void FUN_101d89354(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d89390; end: 101d893c7;  */

void FUN_101d89390(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 *puStack_38;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x0001000d224c(&puStack_38,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  if (puStack_38 == (undefined1 *)0x0) {
    func_0x000101d84e94();
    puVar2 = &UNK_110480de0;
    func_0x000107c613f8(&UNK_110480de0,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
  }
  else {
    puVar1 = puStack_38;
    func_0x000107c49a94();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x000101d84e94();
      puVar2 = &UNK_110480de0;
      func_0x000107c613f8(&UNK_110480de0,puVar1,0,0);
      *puVar1 = 5;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar2);
    }
    else {
      func_0x000100b60084();
    }
    func_0x000107c615e8(puStack_38);
  }
  return;
}



/* Entry: 101d893c8; end: 101d893ef;  */

void FUN_101d893c8(void)

{
  FUN_101d8911c();
  return;
}



/* Entry: 101d893f0; end: 101d893f7;  */

void FUN_101d893f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d893f8; end: 101d8940b;  */

void FUN_101d893f8(void)

{
  FUN_101d8718c();
  return;
}



/* Entry: 101d8940c; end: 101d89423;  */

void FUN_101d8940c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101d89424; end: 101d894cf;  */

void FUN_101d89424(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d894d0; end: 101d894f3;  */

void FUN_101d894d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d894f4; end: 101d8951b;  */

void FUN_101d894f4(uint *param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = (uint)*unaff_x20;
  func_0x000101d894e0();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d8951c; end: 101d896a7;  */

undefined8 FUN_101d8951c(void)

{
  return 0;
}



/* Entry: 101d896a8; end: 101d896e7;  */

void FUN_101d896a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2aae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13524;
  func_0x000107c61520(&UNK_10da13524,&UNK_110480de0);
  puRam0000000112e2aae8 = puVar1;
  return;
}



/* Entry: 101d896e8; end: 101d897c7;  */

undefined * FUN_101d896e8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  
  uStack_38 = 0;
  puVar2 = param_1;
  func_0x000100028eb0();
  uVar1 = *puVar2;
  uVar3 = 0;
  func_0x000101d897f8(0);
  puVar6 = &uStack_38;
  func_0x000103fbcd10(auStack_34,param_1,puVar6,uVar1,uVar3);
  puVar4 = PTR_PTR_1126a94f0;
  func_0x000107c610f8(PTR_PTR_1126a94f0);
  func_0x000107c45e78();
  puVar2 = param_1;
  func_0x000103fbcfbc();
  if (((ulong)puVar2 & 1) != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52b88(puVar4);
    func_0x000107c61170(puVar5);
  }
  func_0x000103fbd0c8(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar6);
  func_0x000107c5662c(puVar4);
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 101d897c8; end: 101d8981f;  */

bool FUN_101d897c8(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d89820; end: 101d89863;  */

void FUN_101d89820(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}


