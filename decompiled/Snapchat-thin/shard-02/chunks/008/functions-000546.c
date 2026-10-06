/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102200244; end: 102200293;  */

undefined1  [16] FUN_102200244(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102200294; end: 1022002e7;  */

void FUN_102200294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6eaac;
  func_0x000107c61520(&UNK_10da6eaac,&UNK_1104e2df0);
  puRam0000000112e64700 = puVar1;
  return;
}



/* Entry: 1022002e8; end: 10220034b;  */

long FUN_1022002e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10220034c; end: 102200453;  */

undefined8 * FUN_10220034c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102200454; end: 1022004b7;  */

undefined8 * FUN_102200454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1022004b8; end: 1022005c3;  */

int FUN_1022004b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1022005c4; end: 10220065f;  */

undefined8 * FUN_1022005c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010220055c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 102200660; end: 1022006a3;  */

undefined8 * FUN_102200660(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000102200598(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1022006a4; end: 1022008bb;  */

int FUN_1022006a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1022008bc; end: 1022008fb;  */

void FUN_1022008bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6eb9c;
  func_0x000107c61520(&UNK_10da6eb9c,&UNK_1104e2f20);
  puRam0000000112e64708 = puVar1;
  return;
}



/* Entry: 1022008fc; end: 1022008ff;  */

void FUN_1022008fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6eb34;
  func_0x000107c61520(&UNK_10da6eb34,&UNK_1104e2f20);
  puRam0000000112e64710 = puVar1;
  return;
}



/* Entry: 102200900; end: 10220093f;  */

void FUN_102200900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6eb34;
  func_0x000107c61520(&UNK_10da6eb34,&UNK_1104e2f20);
  puRam0000000112e64710 = puVar1;
  return;
}



/* Entry: 102200940; end: 102200943;  */

void FUN_102200940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6eb0c;
  func_0x000107c61520(&UNK_10da6eb0c,&UNK_1104e2f20);
  puRam0000000112e64718 = puVar1;
  return;
}



/* Entry: 102200944; end: 102200983;  */

void FUN_102200944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6eb0c;
  func_0x000107c61520(&UNK_10da6eb0c,&UNK_1104e2f20);
  puRam0000000112e64718 = puVar1;
  return;
}



/* Entry: 102200984; end: 102200f6b;  */

void FUN_102200984(undefined8 param_1,undefined8 param_2,undefined1 param_3,ulong param_4,
                  ulong param_5,uint param_6)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_4;
  uVar5 = param_5;
  func_0x000100029284();
  lVar6 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar9;
  if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102200a78);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar7) {
    func_0x000102200c98(lVar7,param_6 & 1);
    uVar4 = param_4;
    uVar9 = param_5;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102200a30);
      (*pcVar3)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x000102200b00();
    lVar7 = *unaff_x20;
    goto joined_r0x000102200a8c;
  }
  lVar7 = *unaff_x20;
joined_r0x000102200a8c:
  if ((uVar5 & 1) == 0) {
    lVar6 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 0x18);
    *puVar8 = param_1;
    puVar8[1] = param_2;
    *(undefined1 *)(puVar8 + 2) = param_3;
    if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102200b00);
    (*pcVar3)();
  }
  puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 0x18);
  *puVar8 = param_1;
  puVar8[1] = param_2;
  bVar2 = *(byte *)(puVar8 + 2);
  *(undefined1 *)(puVar8 + 2) = param_3;
  if ((1 < bVar2 - 1) && (puVar8 = puVar8 + 1, bVar2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*puVar8);
  return;
}



/* Entry: 102200f6c; end: 102201127;  */

ulong FUN_102200f6c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102201050);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102201054);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1022012d8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102201128);
  (*pcVar2)();
}



/* Entry: 102201128; end: 102201297;  */

undefined4 FUN_102201128(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x65707974 || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x65707974,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x707954746e657665;
      if (((param_1 != 0x707954746e657665) || (param_2 != -0x16ffffffffffff9b)) &&
         (func_0x000107c605b8(0x707954746e657665,0xe900000000000065,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
          uVar1 = 0;
          func_0x000107c605b8(0x656d616e,0xe400000000000000,param_1,param_2,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = 0;
            if ((param_1 == 0x69747265706f7270) && (param_2 == -0x15ffffffffff8c9b)) {
              func_0x000107c6142c(0xea00000000007365);
              return 3;
            }
            func_0x000107c605b8(0x69747265706f7270,0xea00000000007365,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar1 & 1) != 0) {
              return 3;
            }
            return 4;
          }
        }
        func_0x000107c6142c(param_2);
        return 2;
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 102201298; end: 1022012d7;  */

void FUN_102201298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6ecc4;
  func_0x000107c61520(&UNK_10da6ecc4,&UNK_1104e2f98);
  puRam0000000112e64728 = puVar1;
  return;
}



/* Entry: 1022012d8; end: 102201317;  */

void FUN_1022012d8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102201318; end: 10220133f;  */

void FUN_102201318(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010220132c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102201340; end: 1022013af;  */

undefined8 * FUN_102201340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1022013b0; end: 102201447;  */

int FUN_1022013b0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102201448; end: 102201487;  */

void FUN_102201448(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6ec9c;
  func_0x000107c61520(&UNK_10da6ec9c,&UNK_1104e2f98);
  puRam0000000112e64740 = puVar1;
  return;
}



/* Entry: 102201488; end: 10220148b;  */

void FUN_102201488(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6ec74;
  func_0x000107c61520(&UNK_10da6ec74,&UNK_1104e2f98);
  puRam0000000112e64748 = puVar1;
  return;
}



/* Entry: 10220148c; end: 1022014cb;  */

void FUN_10220148c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6ec74;
  func_0x000107c61520(&UNK_10da6ec74,&UNK_1104e2f98);
  puRam0000000112e64748 = puVar1;
  return;
}



/* Entry: 1022014cc; end: 1022014db;  */

undefined8 * FUN_1022014cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1022014dc; end: 10220157f;  */

void FUN_1022014dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104e30f0;
  func_0x000107c613fc(&UNK_1104e30f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1022017bc,puVar1);
  return;
}



/* Entry: 102201580; end: 1022017bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102201580(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar6 = &lStack_70;
  func_0x000100083b20(&lStack_58);
  lVar5 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar1 != 0) {
    func_0x000107c615f0(lVar1);
    func_0x000100083b20(&lStack_58);
    lVar5 = lStack_58;
    uVar9 = *(undefined8 *)(lStack_58 + _DAT_113092298);
    func_0x000107c615f0(uVar9);
    func_0x000107c61170(lVar5);
    puVar2 = PTR_PTR_1126d0518;
    func_0x000107c610f8();
    func_0x000107c45db4();
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(uVar9);
    puVar7 = puVar2;
    func_0x000107c44468();
    if ((int)puVar7 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar2;
      func_0x000107c44460();
    }
    puVar3 = puVar2;
    func_0x000107c4c8f4();
    if ((((ulong)puVar7 & 1) != 0) || ((int)puVar3 != 0)) {
      puVar7 = PTR_PTR_1126d0308;
      func_0x000107c610f8(PTR_PTR_1126d0308);
      func_0x000107c453e4();
      puVar3 = PTR_PTR_1126a6fb0;
      func_0x000107c610f8();
      func_0x000107c46b6c();
      func_0x000107c61170(puVar7);
      func_0x000100083b20(&lStack_58);
      func_0x000100083b20(&uStack_60);
      lVar4 = 0;
      FUN_1022020f4();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(long *)(lVar5 + _DAT_112e64770) = lStack_58;
      *(undefined8 *)(lVar5 + _DAT_112e64778) = uStack_60;
      *(undefined **)(lVar5 + _DAT_112e64780) = puVar2;
      *(undefined **)(lVar5 + _DAT_112e64788) = puVar3;
      puVar7 = PTR_s_init_1125d9248;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar3);
      func_0x000107c61154(&lStack_70,puVar7);
      func_0x0001000a0a8c(0);
      func_0x000107c61174();
      puVar8 = (undefined1 *)plVar6;
      func_0x000104494b00();
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(lVar1);
      goto LAB_10220179c;
    }
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(lVar1);
  }
  puVar8 = (undefined1 *)0x0;
LAB_10220179c:
  *param_1 = puVar8;
  return;
}



/* Entry: 1022017bc; end: 1022017d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022017bc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar6 = &lStack_70;
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar5 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar1 != 0) {
    func_0x000107c615f0(lVar1);
    func_0x000100083b20(&lStack_58);
    lVar5 = lStack_58;
    uVar9 = *(undefined8 *)(lStack_58 + _DAT_113092298);
    func_0x000107c615f0(uVar9);
    func_0x000107c61170(lVar5);
    puVar2 = PTR_PTR_1126d0518;
    func_0x000107c610f8();
    func_0x000107c45db4();
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(uVar9);
    puVar7 = puVar2;
    func_0x000107c44468();
    if ((int)puVar7 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar2;
      func_0x000107c44460();
    }
    puVar3 = puVar2;
    func_0x000107c4c8f4();
    if ((((ulong)puVar7 & 1) != 0) || ((int)puVar3 != 0)) {
      puVar7 = PTR_PTR_1126d0308;
      func_0x000107c610f8(PTR_PTR_1126d0308);
      func_0x000107c453e4();
      puVar3 = PTR_PTR_1126a6fb0;
      func_0x000107c610f8();
      func_0x000107c46b6c();
      func_0x000107c61170(puVar7);
      func_0x000100083b20(&lStack_58);
      func_0x000100083b20(&uStack_60);
      lVar4 = 0;
      FUN_1022020f4();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(long *)(lVar5 + _DAT_112e64770) = lStack_58;
      *(undefined8 *)(lVar5 + _DAT_112e64778) = uStack_60;
      *(undefined **)(lVar5 + _DAT_112e64780) = puVar2;
      *(undefined **)(lVar5 + _DAT_112e64788) = puVar3;
      puVar7 = PTR_s_init_1125d9248;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar3);
      func_0x000107c61154(&lStack_70,puVar7);
      func_0x0001000a0a8c(0);
      func_0x000107c61174();
      puVar8 = (undefined1 *)plVar6;
      func_0x000104494b00();
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(lVar1);
      goto LAB_10220179c;
    }
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(lVar1);
  }
  puVar8 = (undefined1 *)0x0;
LAB_10220179c:
  *param_1 = puVar8;
  return;
}



/* Entry: 1022017d8; end: 10220183f;  */

void FUN_1022017d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (lRam0000000112e64750 != -1) {
    func_0x000107c61568(0x112e64750,&UNK_1009d214c);
  }
  uVar1 = uRam0000000112e64758;
  func_0x000107c4b940(uRam0000000112e64758);
  uVar3 = uRam0000000112e64768;
  uVar2 = uRam0000000112e64760;
  uRam0000000112e64760 = 0;
  uRam0000000112e64768 = 0;
  func_0x0001009d2174(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 102201840; end: 1022018f3;  */

undefined8 FUN_102201840(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (lRam0000000112e64750 != -1) {
    func_0x000107c61568(0x112e64750,&UNK_1009d214c);
  }
  uVar3 = uRam0000000112e64758;
  func_0x000107c4b940(uRam0000000112e64758);
  uVar2 = uRam0000000112e64768;
  pcVar1 = pcRam0000000112e64760;
  FUN_1022018f4(pcRam0000000112e64760,uRam0000000112e64768);
  FUN_1022018f4(pcVar1,uVar2);
  func_0x000107c5d278(uVar3);
  if (pcVar1 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    (*pcVar1)();
    func_0x0001009d2174(pcVar1,uVar2);
    func_0x0001009d2174(pcVar1,uVar2);
  }
  return uVar3;
}



/* Entry: 1022018f4; end: 102201913;  */

void FUN_1022018f4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102201914; end: 10220199f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102201914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e64770) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e64778) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e64780) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e64788) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022019a0; end: 102201dd7; -[SCBlizzardGeoSignalRefreshJobDataSyncer initWithUserLocationServices:networkConnectivityMonitorServices:experimentProvider:metrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022019a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e64770) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e64778) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e64780) = param_5;
  *(undefined8 *)(param_1 + _DAT_112e64788) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 102201dd8; end: 102201e37; -[SCBlizzardGeoSignalRefreshJobDataSyncer init] */

void FUN_102201dd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBlizzardGeoSignalRefreshJob.SCBlizzardGeoSignalRefreshJobDataSyncer",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102201e04);
  (*pcVar1)();
}



/* Entry: 102201e38; end: 102201e8f; -[SCBlizzardGeoSignalRefreshJobDataSyncer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102201e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102201e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102201e58) */
/* WARNING: Removing unreachable block (ram,0x000102201e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102201e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64770));
  return;
}



/* Entry: 102201e90; end: 102201ebb; -[SCBlizzardGeoSignalRefreshJobDataSyncer dataSyncerIdentifier] */

void FUN_102201e90(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0712c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102201ebc; end: 1022020b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102201ebc(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  puVar3 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  lVar6 = *(long *)(unaff_x20 + _DAT_112e64780);
  func_0x000107c44464();
  if (lVar6 < 2) {
    lVar6 = 1;
  }
  if (SUB168(SEXT816(lVar6) * SEXT816(0x3c),8) != lVar6 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020a0);
    (*pcVar2)();
  }
  uVar1 = lVar6 * 0xe10;
  if (SUB168(SEXT816(lVar6 * 0x3c) * SEXT816(0x3c),8) != (long)uVar1 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020a4);
    (*pcVar2)();
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020a8);
    (*pcVar2)();
  }
  if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020ac);
    (*pcVar2)();
  }
  func_0x000107c57d34(puVar5);
  func_0x000107c57c1c(puVar4);
  func_0x000107c55974(puVar3);
  puVar7 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56a40();
  puVar8 = puVar7;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020b0);
    (*pcVar2)();
  }
  func_0x000107c3d93c();
  func_0x000107c61170(puVar8);
  puVar8 = puVar7;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020b4);
    (*pcVar2)();
  }
  func_0x000107c3d93c();
  func_0x000107c61170(puVar8);
  puVar8 = puVar7;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c3d93c();
    func_0x000107c61170(puVar8);
    func_0x000107c55958(puVar3);
    func_0x000107c54734(puVar3);
    uVar9 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0712c0);
    func_0x000107c5597c(puVar3);
    func_0x000107c61170(uVar9);
    func_0x000107c55968(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022020b8);
  (*pcVar2)();
}



/* Entry: 1022020b8; end: 1022020eb; -[SCBlizzardGeoSignalRefreshJobDataSyncer jobConfig] */

void FUN_1022020b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102201ebc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022020ec; end: 1022020f3; -[SCBlizzardGeoSignalRefreshJobDataSyncer submitOnRegister] */

undefined8 FUN_1022020ec(void)

{
  return 1;
}



/* Entry: 1022020f4; end: 102202113;  */

void FUN_1022020f4(void)

{
  func_0x000107c61168(&PTR_PTR_11282a310);
  return;
}



/* Entry: 102202114; end: 1022021a3; -[SCBlizzardGeoSignalRefreshJobDataSyncer onSync:] */

void FUN_102202114(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174();
  func_0x000102201a50();
  func_0x000102201c24();
  (**(code **)(param_3 + 0x10))(param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022021a4; end: 10220229f;  */

void FUN_1022021a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_1022022b0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104e31f0;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000019,0x800000010f0712f0);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1022022a0; end: 1022022af;  */

undefined1  [16] FUN_1022022a0(void)

{
  return ZEXT816(0x1104e31e0);
}



/* Entry: 1022022b0; end: 10220231f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022022b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_113078518);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  puVar2 = PTR_PTR_1126aa220;
  func_0x000107c610f8(PTR_PTR_1126aa220);
  func_0x000107c47fb4();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 102202320; end: 10220233b;  */

void FUN_102202320(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10220233c; end: 1022023a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220233c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102202730();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e647c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1022023a8; end: 102202413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022023a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e647c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102202414; end: 102202473; -[_TtC33RemixScopedFactoryServiceProvider21SCRemixScopedServices init] */

void FUN_102202414(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixScopedFactoryServiceProvider.SCRemixScopedServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102202440);
  (*pcVar1)();
}



/* Entry: 102202474; end: 102202483; -[_TtC33RemixScopedFactoryServiceProvider21SCRemixScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102202474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e647c0));
  return;
}



/* Entry: 102202484; end: 1022024ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102202484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104e33e0;
  func_0x000107c613fc(&UNK_1104e33e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10220280c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1022024f0; end: 10220258b;  */

void FUN_1022024f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104e32f0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e32f0;
  return;
}



/* Entry: 10220258c; end: 1022025c3;  */

void FUN_10220258c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1022025c4; end: 1022025cb;  */

undefined8 FUN_1022025c4(void)

{
  return 0x1b;
}



/* Entry: 1022025cc; end: 1022026ff;  */

void FUN_1022025cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104e3408;
  func_0x000107c613fc(&UNK_1104e3408,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022027e4;
  func_0x00010058fa64(FUN_1022027e4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102202700; end: 10220272f;  */

undefined ** FUN_102202700(void)

{
  return &PTR_DAT_112fae000;
}



/* Entry: 102202730; end: 10220274f;  */

void FUN_102202730(void)

{
  func_0x000107c61168(&PTR_PTR_11282a3e8);
  return;
}



/* Entry: 102202750; end: 10220279f;  */

undefined1  [16] FUN_102202750(void)

{
  return ZEXT816(0x1104e3340);
}



/* Entry: 1022027a0; end: 1022027e3;  */

void FUN_1022027a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64828 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa228;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e64828 = puVar1;
  return;
}



/* Entry: 1022027e4; end: 10220280b;  */

void FUN_1022027e4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10220280c; end: 10220281f;  */

void FUN_10220280c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102202820; end: 102202b87;  */

void FUN_102202820(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e64840,&UNK_10da6f030);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102203a98();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_102203b24();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10220258c;
  func_0x0001000823a8(FUN_10220258c,0);
  func_0x000100082720("SCRemixScopedServicesCleanupRelayServiceProvider",0x30,2);
  puVar5 = puVar2;
  FUN_10220394c();
  func_0x000100082720("RemixScopeGraphBridgeServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e64848,&UNK_10da6f040);
  puVar6 = &UNK_1104e3468;
  func_0x000107c613fc(&UNK_1104e3468,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102202b90;
  func_0x0001000823a8(0x102202b90,puVar6);
  func_0x000100082720("SCRemixCameraUIEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e64850,&UNK_10da6f048);
  puVar6 = &UNK_1104e3490;
  func_0x000107c613fc(&UNK_1104e3490,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102202b9c;
  func_0x0001000823a8(0x102202b9c,puVar6);
  func_0x000100082720("SCRemixScopeInitializationPluginRegistryServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e647c8,&UNK_10da6ee10);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102202ba8;
  func_0x0001000823a8(0x102202ba8,uVar7);
  func_0x000100082720("SCRemixScopeInitializationServiceProvider",0x29,2);
  func_0x0001000285a8(0x112e647b8,&UNK_10da6ee00);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102202bb0;
  func_0x0001000823a8(0x102202bb0,uVar8);
  func_0x000100082720("SCRemixScopedServicesServiceProvider",0x24,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104e34b8;
  func_0x000107c613fc(&UNK_1104e34b8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102202bb8;
  func_0x0001000823a8(0x102202bb8,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCRemixScopeEntryPointProvider",0x1e,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102202b88; end: 102202bbf;  */

void FUN_102202b88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e64840,&UNK_10da6f030);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102203a98();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_102203b24();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10220258c;
  func_0x0001000823a8(FUN_10220258c,0);
  func_0x000100082720("SCRemixScopedServicesCleanupRelayServiceProvider",0x30,2);
  puVar5 = puVar2;
  FUN_10220394c();
  func_0x000100082720("RemixScopeGraphBridgeServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112e64848,&UNK_10da6f040);
  puVar6 = &UNK_1104e3468;
  func_0x000107c613fc(&UNK_1104e3468,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102202b90;
  func_0x0001000823a8(0x102202b90,puVar6);
  func_0x000100082720("SCRemixCameraUIEntryPointWrapperServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e64850,&UNK_10da6f048);
  puVar6 = &UNK_1104e3490;
  func_0x000107c613fc(&UNK_1104e3490,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102202b9c;
  func_0x0001000823a8(0x102202b9c,puVar6);
  func_0x000100082720("SCRemixScopeInitializationPluginRegistryServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e647c8,&UNK_10da6ee10);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102202ba8;
  func_0x0001000823a8(0x102202ba8,uVar7);
  func_0x000100082720("SCRemixScopeInitializationServiceProvider",0x29,2);
  func_0x0001000285a8(0x112e647b8,&UNK_10da6ee00);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102202bb0;
  func_0x0001000823a8(0x102202bb0,uVar8);
  func_0x000100082720("SCRemixScopedServicesServiceProvider",0x24,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104e34b8;
  func_0x000107c613fc(&UNK_1104e34b8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102202bb8;
  func_0x0001000823a8(0x102202bb8,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCRemixScopeEntryPointProvider",0x1e,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102202bc0; end: 102202c6f;  */

void FUN_102202bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102203004();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102202e04(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102202c70; end: 102202cdf;  */

undefined8 FUN_102202c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102202e04(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 102202ce0; end: 102202d13;  */

void FUN_102202ce0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102202d14; end: 102202d1b;  */

undefined8 FUN_102202d14(void)

{
  return 0x1b;
}



/* Entry: 102202d1c; end: 102202d9f;  */

void FUN_102202d1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102203044,param_2,FUN_102203048,param_2,FUN_102203070,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102202da0; end: 102202def;  */

undefined8 FUN_102202da0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102202df0; end: 102202e03;  */

void FUN_102202df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104e34d0;
  return;
}



/* Entry: 102202e04; end: 102202fe7;  */

void FUN_102202e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126aa230;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536172656d6163;
  func_0x000107c5fadc(0x63536172656d6163,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0714b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0714d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102202fe8; end: 102203003;  */

undefined ** FUN_102202fe8(void)

{
  return &PTR_DAT_112fae000;
}



/* Entry: 102203004; end: 102203023;  */

void FUN_102203004(void)

{
  func_0x000107c61168(&PTR_PTR_112e648c0);
  return;
}



/* Entry: 102203024; end: 102203047;  */

undefined1  [16] FUN_102203024(void)

{
  return ZEXT816(0x1104e3510);
}



/* Entry: 102203048; end: 10220306f;  */

void FUN_102203048(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102203070; end: 102203077;  */

undefined8 FUN_102203070(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102203078; end: 1022030b3;  */

void FUN_102203078(undefined8 *param_1,undefined8 param_2)

{
  FUN_1022030b4();
  func_0x0001000a7f38("SCRemixScopeInitializationPluginRegistryServiceProvider",0x37,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1022030b4; end: 10220329f;  */

void FUN_1022030b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ab198;
  ppuVar4 = &PTR_DAT_112fae000;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104e3560;
  func_0x000107c613fc(&UNK_1104e3560,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e64930;
  func_0x0001000285a8(0x112e64930,&UNK_10da6f178);
  func_0x0001000a6ee8(&UNK_1104e3780,"RemixScopeGraphBridgeScopeInitializationPluginKey",0x31,2,
                      FUN_1022032a0,puVar2,uVar3,&UNK_1104e3780,&PTR_DAT_112e649c8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104e3510,"SCRemixCameraUIEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_102203354,param_3,uVar3,&UNK_1104e3510,&PTR_DAT_112e64858);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104e3588;
  func_0x000107c613fc(&UNK_1104e3588,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104e3380,"SCRemixScopedServicesScopeInitializationPluginKey",0x31,2,
                      FUN_102203404,puVar2,uVar3,&UNK_1104e3380,&PTR_DAT_112e647d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e64938;
  func_0x0001000285a8(0x112e64938,&UNK_10da6f180);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1022032a0; end: 1022032df;  */

void FUN_1022032a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102203bcc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("RemixScopeGraphBridgeScopeInitializationPluginProvider",0x36,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022032e0; end: 102203353;  */

void FUN_1022032e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102203440;
  func_0x0001000823a8(0x102203440,param_3);
  func_0x000100082720("SCRemixCameraUIEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102203354; end: 10220335b;  */

void FUN_102203354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102203440;
  func_0x0001000823a8();
  func_0x000100082720("SCRemixCameraUIEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10220335c; end: 102203403;  */

void FUN_10220335c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e35b0;
  func_0x000107c613fc(&UNK_1104e35b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102203438;
  func_0x0001000823a8(FUN_102203438,puVar1);
  func_0x000100082720("SCRemixScopedServicesScopeInitializationPluginProvider",0x36,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102203404; end: 10220340b;  */

void FUN_102203404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104e35b0;
  func_0x000107c613fc(&UNK_1104e35b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102203438;
  func_0x0001000823a8(FUN_102203438,puVar3);
  func_0x000100082720("SCRemixScopedServicesScopeInitializationPluginProvider",0x36,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10220340c; end: 102203437;  */

void FUN_10220340c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102203438; end: 102203447;  */

void FUN_102203438(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104e3408;
  func_0x000107c613fc(&UNK_1104e3408,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022027e4;
  func_0x00010058fa64(FUN_1022027e4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102203448; end: 102203523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102203448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10220385c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e64940) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e64948) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102203524);
  (*pcVar1)();
}



/* Entry: 102203524; end: 102203583; -[_TtC21RemixScopeGraphBridge36RemixScopeGraphBridgeSaberEntryPoint init] */

void FUN_102203524(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixScopeGraphBridge.RemixScopeGraphBridgeSaberEntryPoint",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102203550);
  (*pcVar1)();
}



/* Entry: 102203584; end: 1022035bb; -[_TtC21RemixScopeGraphBridge36RemixScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022035a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022035a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64940));
  return;
}



/* Entry: 1022035bc; end: 1022035e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022035bc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e64948),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e64940));
  return;
}



/* Entry: 1022035e4; end: 102203603;  */

void FUN_1022035e4(void)

{
  func_0x000107c61168(&PTR_PTR_11282a4a8);
  return;
}



/* Entry: 102203604; end: 10220368b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102203604(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e64978) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e64980);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10220368c);
  (*pcVar2)();
}



/* Entry: 10220368c; end: 102203773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10220368c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e64978);
  *(undefined **)(unaff_x20 + _DAT_112e64978) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e64980);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e64980))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104e36a0;
  func_0x000107c613fc(&UNK_1104e36a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102203778,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102203774; end: 10220377f;  */

void FUN_102203774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102203780; end: 1022037df; -[_TtC21RemixScopeGraphBridge36SCRemixScopedServicesSaberEntryPoint init] */

void FUN_102203780(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixScopeGraphBridge.SCRemixScopedServicesSaberEntryPoint",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022037ac);
  (*pcVar1)();
}



/* Entry: 1022037e0; end: 102203817; -[_TtC21RemixScopeGraphBridge36SCRemixScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022037e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e64980));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64978));
  return;
}



/* Entry: 102203818; end: 10220381b;  */

void FUN_102203818(void)

{
  return;
}



/* Entry: 10220381c; end: 10220383b;  */

void FUN_10220381c(void)

{
  FUN_10220368c();
  return;
}



/* Entry: 10220383c; end: 10220385b;  */

void FUN_10220383c(void)

{
  func_0x000107c61168(&PTR_PTR_11282a570);
  return;
}



/* Entry: 10220385c; end: 10220392b;  */

undefined8 FUN_10220385c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e649b0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10220392c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10220392c; end: 10220394b;  */

void FUN_10220392c(void)

{
  func_0x000107c61168(&PTR_PTR_11282a638);
  return;
}


